#!/usr/bin/env python3
"""Extrait les noms de fonctions/variables d'iw4x.exe deduits des commentaires IW4x.

Le source IW4x contient TRES souvent des commentaires inline du genre :
    mov eax, 0x4A4D50 // FireWeapon
    Utils::Hook(0x508040, ...) // R_ConfigureRenderer
    // 0x444810 = IsDynClassname
    Game::Cmd_AddCommand("foo", foo_handler);  // pas une adresse mais utile

On parse ces patterns pour produire un mapping addr -> nom : c'est la
verite source pour nommer nos fonctions Ghidra.

Sortie : findings/iw4x-symbols.json + findings/iw4x-symbols.md
"""

import json
import re
from collections import defaultdict
from pathlib import Path

SRC_ROOT = Path("refs/iw4x-client/src")
OUT_JSON = Path("findings/iw4x-symbols.json")
OUT_MD = Path("findings/iw4x-symbols.md")


# Patterns détectés (par ordre de fiabilité décroissante) :
# 1. SourceCode dans Game/Functions.cpp et Game/Dvars.cpp (canonique typed) :
#    SomeFunc_t SomeFunc = SomeFunc_t(0xADDR);
#    Type* SomeVar = reinterpret_cast<Type*>(0xADDR);
# 2. Commentaires inline patches : 0xADDR // Name
# 3. Commentaires explicatifs : // 0xADDR = Name
PATTERNS = [
    # SomeFunc_t SomeFunc = SomeFunc_t(0xADDR)   <- canonique
    ("typed_function", re.compile(
        r"\b(\w+)_t\s+(\w+)\s*=\s*\w+_t\(\s*0x([0-9a-fA-F]+)\s*\)")),
    # Type* var = reinterpret_cast<Type*>(0xADDR)   <- variables globales
    ("typed_variable", re.compile(
        r"\b(\w+\*?)\s+(\w+)\s*=\s*reinterpret_cast<\w+\*?>\(\s*0x([0-9a-fA-F]+)\s*\)")),
    # 0x12345678 // some name (inline comment)
    ("inline_comment", re.compile(
        r"0x([0-9a-fA-F]{6,8})\b[^/\n]*//\s*([A-Za-z_][A-Za-z0-9_:]{1,50})")),
    # // 0x12345678 = SomeName  ou  // 0x12345678 SomeName
    ("explanatory",    re.compile(
        r"//\s*0x([0-9a-fA-F]{6,8})\s*=?\s*([A-Za-z_][A-Za-z0-9_:]{1,50})")),
]

# Filtrer les noms qui sont en fait des keywords ou trivialités.
JUNK_NAMES = {
    "if", "else", "return", "while", "for", "do", "switch", "case",
    "break", "continue", "true", "false", "null", "nullptr", "void",
    "int", "char", "bool", "float", "double", "static", "const",
    "auto", "and", "or", "not", "this", "self", "in", "is",
    "TODO", "FIXME", "NOTE", "XXX", "HACK", "BUG",
    "and", "or", "the", "from", "to", "of", "by",
}


def extract_from_file(path: Path) -> list[tuple[int, str, int]]:
    """Retourne (addr, name, lineno)."""
    out = []
    try:
        content = path.read_text(errors="replace")
    except Exception:
        return out
    for ln_idx, line in enumerate(content.splitlines(), 1):
        for kind, pat in PATTERNS:
            for m in pat.finditer(line):
                if kind in ("typed_function", "typed_variable"):
                    # Group order : type_or_typename, varname, addr
                    name = m.group(2).strip()
                    addr_hex = m.group(3)
                else:
                    addr_hex, name = m.group(1), m.group(2).strip()
                # Trim trailing junk
                name = re.split(r"[\s,;\(]", name, maxsplit=1)[0]
                if not name or name.lower() in JUNK_NAMES or name.isdigit():
                    continue
                if len(name) < 3:
                    continue
                addr = int(addr_hex, 16)
                # Adresses raisonnables iw4x.exe (0x400000-0x800000)
                # ou iw4x.dll (0x10000000-0x10800000) ou data (.data, .bss)
                if not (0x400000 <= addr <= 0x800000
                        or 0x10000000 <= addr <= 0x10800000
                        or 0x800000 <= addr <= 0x9999999):
                    continue
                out.append((addr, name, ln_idx))
    return out


def main():
    addr_to_names = defaultdict(set)  # addr -> set(name)
    addr_to_files = defaultdict(set)  # addr -> set("file:line")

    for ext in ("*.cpp", "*.hpp"):
        for f in SRC_ROOT.rglob(ext):
            for addr, name, lineno in extract_from_file(f):
                addr_to_names[addr].add(name)
                addr_to_files[addr].add(f"{f.relative_to(SRC_ROOT.parent)}:{lineno}")

    # Choisir le nom le plus probable par adresse :
    # - Si plusieurs noms, prendre le plus long (typiquement plus descriptif)
    # - Sinon le seul nom
    symbols = []
    for addr, names in addr_to_names.items():
        names_list = sorted(names, key=lambda n: (-len(n), n))
        symbols.append({
            "addr": f"0x{addr:08x}",
            "addr_int": addr,
            "name": names_list[0],
            "alt_names": names_list[1:5] if len(names_list) > 1 else [],
            "sources": sorted(addr_to_files[addr])[:3],
        })

    # Tri par adresse
    symbols.sort(key=lambda s: s["addr_int"])

    OUT_JSON.parent.mkdir(parents=True, exist_ok=True)
    OUT_JSON.write_text(json.dumps({
        "symbol_count": len(symbols),
        "symbols": symbols,
    }, indent=2))

    # Markdown report
    md = ["# Symboles iw4x.exe / iw4x.dll deduits du source IW4x", ""]
    md.append(f"*Genere par `scripts/python/extract_iw4x_symbols.py`. "
              f"**{len(symbols)} symboles** auto-extraits depuis les commentaires "
              f"inline du source `refs/iw4x-client/src/`.*")
    md.append("")
    md.append("Quand IW4x patche iw4x.exe, les developpeurs annotent souvent "
              "l'adresse cible avec le nom de la fonction d'origine en commentaire. "
              "Ces noms constituent une **source de verite** pour rebaptiser les "
              "FUN_xxxx de Ghidra.")
    md.append("")

    # Stats par range
    exe_syms = [s for s in symbols if 0x400000 <= s["addr_int"] <= 0x800000]
    dll_syms = [s for s in symbols if 0x10000000 <= s["addr_int"] <= 0x10800000]
    other_syms = [s for s in symbols
                  if not (0x400000 <= s["addr_int"] <= 0x800000)
                  and not (0x10000000 <= s["addr_int"] <= 0x10800000)]
    md.append(f"- **iw4x.exe** (0x400000-0x800000) : {len(exe_syms)} symboles")
    md.append(f"- **iw4x.dll** (0x10000000-0x10800000) : {len(dll_syms)} symboles")
    md.append(f"- **autres** (data .bss / dynamique) : {len(other_syms)} symboles")
    md.append("")

    md.append("## iw4x.exe — fonctions identifiees (top 60)")
    md.append("")
    md.append("| Adresse | Nom | Source |")
    md.append("|---|---|---|")
    for s in exe_syms[:60]:
        src = s["sources"][0] if s["sources"] else "?"
        md.append(f"| `{s['addr']}` | `{s['name']}` | {src} |")
    if len(exe_syms) > 60:
        md.append(f"| … | (+{len(exe_syms) - 60} autres) | |")
    md.append("")

    md.append("## iw4x.dll — fonctions identifiees (top 30)")
    md.append("")
    md.append("| Adresse | Nom | Source |")
    md.append("|---|---|---|")
    for s in dll_syms[:30]:
        src = s["sources"][0] if s["sources"] else "?"
        md.append(f"| `{s['addr']}` | `{s['name']}` | {src} |")
    if len(dll_syms) > 30:
        md.append(f"| … | (+{len(dll_syms) - 30} autres) | |")
    md.append("")

    md.append("## Adresses avec plusieurs noms candidats")
    md.append("")
    multi = [s for s in symbols if s["alt_names"]]
    md.append(f"({len(multi)} adresses ont plusieurs nominations differentes "
              f"dans le source — typiquement variantes de naming, ou erreurs.)")
    md.append("")
    if multi:
        md.append("| Adresse | Nom retenu | Alternatives |")
        md.append("|---|---|---|")
        for s in multi[:25]:
            alts = ", ".join(f"`{a}`" for a in s["alt_names"][:3])
            md.append(f"| `{s['addr']}` | `{s['name']}` | {alts} |")
        md.append("")

    OUT_MD.write_text("\n".join(md))
    print(f"[+] {len(symbols)} symboles extraits")
    print(f"    iw4x.exe : {len(exe_syms)}")
    print(f"    iw4x.dll : {len(dll_syms)}")
    print(f"    autres   : {len(other_syms)}")
    print(f"[+] {OUT_JSON}, {OUT_MD}")


if __name__ == "__main__":
    main()
