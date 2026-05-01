#!/usr/bin/env python3
"""Génère un rapport markdown lisible à partir de findings/iw4x-functions.json.

- Résout les imports WS2_32.DLL!Ordinal_X vers leurs vrais noms.
- Top 30 fonctions par taille avec strings/imports.
- Agrégation par catégorie.
- Sous-section "fonctions remarquables" auto-détectée par mots-clés
  dans les strings (parser weapon, decrypt, protobuf, gsc, dispatcher…).

Usage : .venv/bin/python3 scripts/python/ghidra_report.py
"""

import json
import re
from collections import defaultdict
from pathlib import Path


# Mapping ordinaux WS2_32.DLL → nom (stable depuis Windows 95).
# Source : Microsoft Winsock2 documentation, Windows SDK ws2_32.def.
WS2_32_ORDINALS = {
    1: "accept", 2: "bind", 3: "closesocket", 4: "connect",
    5: "getpeername", 6: "getsockname", 7: "getsockopt",
    8: "htonl", 9: "htons", 10: "inet_addr", 11: "inet_ntoa",
    12: "ioctlsocket", 13: "listen", 14: "ntohl", 15: "ntohs",
    16: "recv", 17: "recvfrom", 18: "select", 19: "send",
    20: "sendto", 21: "setsockopt", 22: "shutdown", 23: "socket",
    51: "gethostbyaddr", 52: "gethostbyname", 53: "gethostname",
    54: "getservbyname", 55: "getservbyport", 57: "getprotobyname",
    101: "WSAAsyncSelect", 111: "WSAGetLastError",
    115: "WSASetLastError", 116: "WSAStartup", 117: "WSACleanup",
    151: "__WSAFDIsSet",
}

# Patterns de détection dans les strings → label "fonction remarquable".
NOTABLE_PATTERNS = [
    ("WeaponDef parser",      r"szInternalName|fAdsZoomFov|szDisplayName.*hideTags"),
    ("Asset decrypter",       r"decryptImages|decryptSounds"),
    ("Protobuf serializer",   r"protobuf.*wire_format"),
    ("Map shader/techset",    r"wc_unlit_(add|multiply)"),
    ("D3DBSP/world parser",   r"isInUse.*planes|planes.*xmodel"),
    ("IEEE float printer",    r"1#IND.*1#QNAN|1#SNAN.*1#INF"),
    ("GSC compiler/VM",       r"compileFile|scrVm|OpCode|Scr_GetType"),
    ("DVAR system",           r"\bdvar_|Dvar_(Set|Get|Register)"),
    ("Cmd system",            r"Cmd_AddCommand|Cmd_Argc"),
    ("FastFile (.ff) loader", r"DB_LoadXAssets|DB_FindXAssetHeader|XFile"),
    ("Sound system",          r"snd_alias|soundalias"),
    ("Anti-cheat / IW.net",   r"infinityward|iw\.net|iwnet"),
]


def resolve_imports(imports: list[str]) -> list[str]:
    """Remplace WS2_32.DLL!Ordinal_X par WS2_32.DLL!<nom>."""
    out = []
    for imp in imports:
        m = re.match(r"WS2_32\.DLL!Ordinal_(\d+)", imp, re.I)
        if m:
            n = int(m.group(1))
            name = WS2_32_ORDINALS.get(n, f"Ordinal_{n}")
            out.append(f"WS2_32.DLL!{name}")
        else:
            out.append(imp)
    return out


def detect_label(strings: list[str]) -> str | None:
    haystack = " | ".join(strings)
    for label, pat in NOTABLE_PATTERNS:
        if re.search(pat, haystack, re.I):
            return label
    return None


def main():
    import sys
    arg = sys.argv[1] if len(sys.argv) > 1 else "iw4x.dll"
    src = Path(f"findings/{arg}-functions.json")
    out_path = Path(f"findings/{arg}-interesting-functions.md")
    data = json.loads(src.read_text())
    funcs = data["functions"]

    # Re-catégorise + résout imports
    for f in funcs:
        f["imports"] = resolve_imports(f["imports"])
        f["label"] = detect_label(f["strings"])

    # Catégories
    by_cat = defaultdict(list)
    for f in funcs:
        by_cat[f["category"]].append(f)

    lines = []
    lines.append("# Fonctions intéressantes — `iw4x.dll`")
    lines.append("")
    lines.append(f"*Généré depuis `{src.name}` "
                 f"({data['function_count']} fonctions, ImageBase {data['image_base']}). "
                 f"Toutes les adresses correspondent 1:1 au runtime "
                 f"(pas d'ASLR).*")
    lines.append("")

    # 1. Fonctions remarquables (auto-détectées par strings)
    notable = sorted([f for f in funcs if f["label"]],
                     key=lambda f: -f["size"])
    lines.append(f"## 🎯 Fonctions remarquables ({len(notable)})")
    lines.append("")
    lines.append("Auto-détectées par signature de strings. À ouvrir en priorité dans Ghidra.")
    lines.append("")
    lines.append("| Adresse | Taille | Callers | Label | Strings clés |")
    lines.append("|---|---|---|---|---|")
    for f in notable:
        s = ", ".join(f"`{x}`" for x in f["strings"][:3])
        lines.append(f"| `{f['addr']}` | {f['size']:,} | {f['callers']} | "
                     f"**{f['label']}** | {s} |")
    lines.append("")

    # 2. Top 30 par taille (les plus grosses fonctions = parsers / dispatchers)
    lines.append("## 📦 Top 30 fonctions par taille")
    lines.append("")
    lines.append("Les plus grosses fonctions sont typiquement des parsers, des dispatchers "
                 "ou des state machines centrales.")
    lines.append("")
    lines.append("| Adresse | Taille | Callers | Cat. | Strings | Imports |")
    lines.append("|---|---|---|---|---|---|")
    for f in funcs[:30]:
        s = ", ".join(f"`{x}`" for x in f["strings"][:3])
        i = ", ".join(f"`{x}`" for x in f["imports"][:3])
        lines.append(f"| `{f['addr']}` | {f['size']:,} | {f['callers']} | "
                     f"{f['category']} | {s or '—'} | {i or '—'} |")
    lines.append("")

    # 3. Détail par catégorie (network, render, scriptengine…)
    lines.append("## 📁 Par catégorie")
    lines.append("")
    cats_order = sorted(by_cat.keys(),
                       key=lambda c: -len(by_cat[c]) if c != "other" else 1e9)
    for cat in cats_order:
        members = by_cat[cat]
        if cat == "other":
            lines.append(f"### `{cat}` — {len(members):,} (non listées)")
            lines.append("")
            continue
        members.sort(key=lambda f: -f["size"])
        lines.append(f"### `{cat}` — {len(members)}")
        lines.append("")
        lines.append("| Adresse | Taille | Callers | Strings/Imports |")
        lines.append("|---|---|---|---|")
        for f in members[:15]:
            s = ", ".join(f"`{x}`" for x in (f["strings"][:2] + f["imports"][:2]))
            lines.append(f"| `{f['addr']}` | {f['size']:,} | "
                         f"{f['callers']} | {s or '—'} |")
        if len(members) > 15:
            lines.append(f"| … | ({len(members) - 15} autres) | | |")
        lines.append("")

    out_path.write_text("\n".join(lines))
    print(f"[+] {len(notable)} fonctions remarquables détectées")
    print(f"[+] rapport : {out_path}")
    print(f"[+] catégories : "
          f"{ {c: len(v) for c, v in by_cat.items()} }")


if __name__ == "__main__":
    main()
