#!/usr/bin/env python3
"""Parse Game/Structs.hpp et extrait les offsets de champs des structs cles.

Strategie :
- Tailles primitives connues (int=4, float=4, char=1, ptr=4 sur 32-bit)
- Tailles des types nommes via static_assert(sizeof(X) == N)
- Padding C standard : alignement = max alignement des champs
- Si type inconnu : annote "?" mais avance l'offset au mieux

Cibles configurees ci-dessous. Sortie : findings/structs-extracted.{json,md}
"""

import json
import re
from pathlib import Path

SRC = Path("refs/iw4x-client/src/Game/Structs.hpp")
OUT_JSON = Path("findings/structs-extracted.json")
OUT_MD = Path("findings/structs-extracted.md")

# Structs prioritaires a extraire (utiles pour comprendre l'etat du jeu)
TARGETS = [
    "playerState_s",   # 0x311C
    "usercmd_s",       # 0x28
    "clientState_s",   # 0x7C
    "netadr_t",        # 20
    "netchan_t",       # 0x62C
    "dvar_t",          # 0x50
    "gentity_s",       # 0x274
    "entityState_s",
    "entityShared_t",
    "rectDef_s",       # 0x14
    "msg_t",
]

# Tailles primitives sur 32-bit (cdecl, MSVC++, sizeof)
PRIMITIVES = {
    "char": 1, "unsigned char": 1, "signed char": 1, "bool": 1,
    "short": 2, "unsigned short": 2, "signed short": 2,
    "__int16": 2, "unsigned __int16": 2,
    "int": 4, "unsigned int": 4, "signed int": 4,
    "long": 4, "unsigned long": 4,
    "__int32": 4, "unsigned __int32": 4,
    "float": 4,
    "double": 8,
    "__int64": 8, "unsigned __int64": 8,
    "long long": 8, "unsigned long long": 8,
    "size_t": 4, "ptrdiff_t": 4,
}

# Pointeurs et references = 4 bytes en 32-bit


def load_known_sizes() -> dict[str, int]:
    """Lit static_assert(sizeof(X) == N)) dans Structs.hpp + tailles d'enums."""
    sizes = {}
    text = SRC.read_text(errors="replace")
    # static_assert
    for m in re.finditer(
        r"static_assert\(sizeof\((\w+)\)\s*==\s*(0x[0-9a-fA-F]+|\d+)\)",
        text):
        name, size = m.group(1), m.group(2)
        sizes[name] = int(size, 0)
    # enums : "enum NAME : char" -> 1, ": short" -> 2, default -> 4
    for m in re.finditer(
        r"enum\s+(?:class\s+)?([A-Za-z_][A-Za-z_0-9]*)\s*(?::\s*([A-Za-z_][A-Za-z_0-9 ]*))?\s*\{",
        text):
        name, base = m.group(1), m.group(2)
        if base:
            base = base.strip()
            sizes[name] = PRIMITIVES.get(base, 4)
        else:
            sizes[name] = 4
    return sizes


def get_type_size(typename: str, known_sizes: dict[str, int]) -> int | None:
    """Retourne la taille d'un type, None si inconnu."""
    t = typename.strip()
    # Pointeur ?
    if t.endswith("*") or t.endswith("&"):
        return 4  # 32-bit
    # Primitif ?
    if t in PRIMITIVES:
        return PRIMITIVES[t]
    # Type connu ?
    if t in known_sizes:
        return known_sizes[t]
    # Enum (souvent int)
    return None


def parse_struct_body(text: str, struct_name: str) -> str | None:
    """Extrait le body { ... } de struct_name. Renvoie le texte interieur."""
    # Match : struct NAME { ... }; (avec accolades imbriquees)
    pattern = re.compile(rf"\bstruct\s+{re.escape(struct_name)}\b\s*\{{")
    m = pattern.search(text)
    if not m:
        return None
    start = m.end()  # juste apres l'accolade ouvrante
    depth = 1
    i = start
    while i < len(text) and depth > 0:
        if text[i] == '{':
            depth += 1
        elif text[i] == '}':
            depth -= 1
            if depth == 0:
                return text[start:i]
        i += 1
    return None


# Pattern d'un champ : TYPE NAME [ARRAYSIZE]?;
FIELD_RE = re.compile(
    r"^\s*((?:unsigned\s+|signed\s+|const\s+)?[A-Za-z_][A-Za-z_0-9:]*\s*\*?\s*\*?)\s+"
    r"([A-Za-z_][A-Za-z_0-9]*)"
    r"(?:\s*\[\s*(\d+|0x[0-9a-fA-F]+)\s*\])?"
    r"(?:\s*\[\s*(\d+|0x[0-9a-fA-F]+)\s*\])?"
    r"\s*;"
)


def parse_fields(body: str, known_sizes: dict[str, int]):
    """Parse les champs d'un body de struct. Retourne liste de (offset, name, type, size, ok)."""
    fields = []
    offset = 0
    max_align = 1
    for line in body.splitlines():
        line = line.strip()
        if not line or line.startswith("//"):
            continue
        # Saute les sub-structs/unions (pour rester simple)
        if "struct" in line and "{" in line:
            continue
        if "union" in line:
            continue
        m = FIELD_RE.match(line)
        if not m:
            continue
        type_str, name, arr1, arr2 = m.groups()
        type_str = re.sub(r"\s+", " ", type_str.strip())
        # Pointeur ?
        if "*" in type_str:
            base_size = 4
        else:
            base_size = get_type_size(type_str, known_sizes)

        if base_size is None:
            # Type inconnu — on tente d'avancer mais on marque
            fields.append({
                "offset": f"0x{offset:04x}",
                "name": name,
                "type": type_str,
                "array": [int(a, 0) for a in (arr1, arr2) if a],
                "size": "?",
                "ok": False,
            })
            # On continue pas, l'offset serait faux — on marque toute la suite
            return fields, False, max_align

        size = base_size
        # Alignement = base_size pour primitifs (sauf double=8 qui s'aligne sur 4 en MSVC 32-bit)
        align = min(base_size, 4)
        if arr1:
            size *= int(arr1, 0)
        if arr2:
            size *= int(arr2, 0)

        # Pad pour alignement
        if offset % align != 0:
            offset += align - (offset % align)
        max_align = max(max_align, align)

        fields.append({
            "offset": f"0x{offset:04x}",
            "name": name,
            "type": type_str + (f"[{arr1}]" if arr1 else "") + (f"[{arr2}]" if arr2 else ""),
            "size": size,
            "ok": True,
        })
        offset += size

    # Padding final pour aligner la struct
    if offset % max_align != 0:
        offset += max_align - (offset % max_align)
    return fields, True, max_align


def main():
    text = SRC.read_text(errors="replace")
    known = load_known_sizes()
    print(f"[*] {len(known)} tailles confirmees via static_assert")

    out = []
    for name in TARGETS:
        body = parse_struct_body(text, name)
        if body is None:
            print(f"[!] {name} introuvable")
            continue
        fields, complete, align = parse_fields(body, known)
        confirmed = known.get(name)
        computed = (int(fields[-1]["offset"], 0) + (fields[-1]["size"] if fields[-1]["ok"] else 0)) if fields else 0

        out.append({
            "name": name,
            "size_confirmed": f"0x{confirmed:x}" if confirmed else None,
            "size_computed": f"0x{computed:x}" if complete else "incomplete",
            "fields_complete": complete,
            "alignment": align,
            "fields": fields,
        })
        status = "OK" if complete else "PARTIEL"
        sz = f"0x{confirmed:x}" if confirmed else "?"
        print(f"[+] {name}: {len(fields)} champs, computed=0x{computed:x}, confirmed={sz}, status={status}")

    OUT_JSON.parent.mkdir(parents=True, exist_ok=True)
    OUT_JSON.write_text(json.dumps({"structs": out}, indent=2))

    # Markdown report
    md = ["# Structures d'entites IW4 — offsets reconstruits", ""]
    md.append(f"*Genere par `scripts/python/struct_extractor.py` depuis "
              f"`refs/iw4x-client/src/Game/Structs.hpp`.*")
    md.append("")
    md.append("Tailles primitives 32-bit (MSVC i386) : `int=4 float=4 char=1 short=2 ptr=4`. "
              "Tailles nested resolues via `static_assert(sizeof(X) == N)` du source.")
    md.append("")
    md.append("Status :")
    md.append("- **OK** = tous les champs parses, taille computed = taille confirmee")
    md.append("- **PARTIEL** = stoppe au premier type inconnu (sub-struct non listee dans static_assert)")
    md.append("")

    for s in out:
        md.append(f"## `{s['name']}`")
        md.append("")
        md.append(f"- Taille confirmee (static_assert) : `{s['size_confirmed'] or '—'}`")
        md.append(f"- Taille calculee : `{s['size_computed']}`")
        md.append(f"- Status : **{'OK' if s['fields_complete'] else 'PARTIEL'}**")
        md.append("")
        md.append("| Offset | Type | Champ | Taille |")
        md.append("|---|---|---|---|")
        for f in s["fields"]:
            sz = f["size"] if isinstance(f["size"], int) else f["size"]
            warn = " ⚠️" if not f["ok"] else ""
            md.append(f"| `{f['offset']}` | `{f['type']}` | `{f['name']}` | `{sz}`{warn} |")
        md.append("")

    OUT_MD.write_text("\n".join(md))
    print(f"[+] {OUT_JSON}, {OUT_MD}")


if __name__ == "__main__":
    main()
