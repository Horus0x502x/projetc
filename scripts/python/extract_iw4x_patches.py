#!/usr/bin/env python3
"""Extrait l'ensemble des patches que IW4x applique sur iw4x.exe.

Parcourt refs/iw4x-client/src/, trouve chaque Utils::Hook* (Set, Nop,
install, ::Hook(addr)), capture l'adresse cible + le fichier source + la
ligne + le snippet de code autour pour avoir le contexte.

Sortie : findings/iw4x-patches.json (index brut) + findings/iw4x-patches.md
(rapport lisible groupe par module IW4x).
"""

import json
import re
from collections import defaultdict
from pathlib import Path

SRC_ROOT = Path("refs/iw4x-client/src")
OUT_JSON = Path("findings/iw4x-patches.json")
OUT_MD = Path("findings/iw4x-patches.md")

# Patterns à matcher :
# Utils::Hook(0x...                         -> install hook trampoline
# Utils::Hook::Set<...>(0x...               -> write byte/word/dword
# Utils::Hook::Nop(0x...                    -> NOP injection
# Utils::Hook::SetString(0x...              -> string replacement
PATTERNS = [
    ("hook_call_or_jump",  re.compile(r"Utils::Hook\(\s*0x([0-9a-fA-F]+)\s*,\s*(\w+(?:::\w+)*|&?\w+)\s*,\s*HOOK_(\w+)\s*\)")),
    ("hook_call_simple",   re.compile(r"Utils::Hook\(\s*0x([0-9a-fA-F]+)\s*,\s*(\w+(?:::\w+)*|&?\w+)\s*\)")),
    ("hook_set",           re.compile(r"Utils::Hook::Set<([^>]+)>\(\s*0x([0-9a-fA-F]+)\s*,\s*([^)]+)\)")),
    ("hook_nop",           re.compile(r"Utils::Hook::Nop\(\s*0x([0-9a-fA-F]+)\s*(?:,\s*(\d+))?\s*\)")),
    ("hook_setstring",     re.compile(r"Utils::Hook::SetString\(\s*0x([0-9a-fA-F]+)\s*,\s*\"([^\"]*)\"\s*\)")),
]


def parse_file(path: Path) -> list[dict]:
    """Parse a .cpp/.hpp file, return list of patches."""
    out = []
    try:
        content = path.read_text(errors="replace")
    except Exception:
        return out
    lines = content.splitlines()
    for ln_idx, line in enumerate(lines, 1):
        for kind, pat in PATTERNS:
            for m in pat.finditer(line):
                if kind == "hook_call_or_jump":
                    addr, target, htype = m.groups()
                    out.append({
                        "kind": kind, "type": htype.lower(),
                        "addr": int(addr, 16), "target": target,
                        "file": str(path.relative_to(SRC_ROOT.parent)),
                        "line": ln_idx,
                        "snippet": line.strip()[:160],
                    })
                elif kind == "hook_call_simple":
                    addr, target = m.groups()
                    out.append({
                        "kind": kind, "type": "default",
                        "addr": int(addr, 16), "target": target,
                        "file": str(path.relative_to(SRC_ROOT.parent)),
                        "line": ln_idx,
                        "snippet": line.strip()[:160],
                    })
                elif kind == "hook_set":
                    typ, addr, val = m.groups()
                    out.append({
                        "kind": kind, "type": typ.strip(),
                        "addr": int(addr, 16), "value": val.strip(),
                        "file": str(path.relative_to(SRC_ROOT.parent)),
                        "line": ln_idx,
                        "snippet": line.strip()[:160],
                    })
                elif kind == "hook_nop":
                    addr, count = m.groups()
                    out.append({
                        "kind": kind, "type": "nop",
                        "addr": int(addr, 16),
                        "count": int(count) if count else 5,
                        "file": str(path.relative_to(SRC_ROOT.parent)),
                        "line": ln_idx,
                        "snippet": line.strip()[:160],
                    })
                elif kind == "hook_setstring":
                    addr, val = m.groups()
                    out.append({
                        "kind": kind, "type": "string",
                        "addr": int(addr, 16), "value": val,
                        "file": str(path.relative_to(SRC_ROOT.parent)),
                        "line": ln_idx,
                        "snippet": line.strip()[:160],
                    })
    return out


def main():
    all_patches = []
    for ext in ("*.cpp", "*.hpp"):
        for f in SRC_ROOT.rglob(ext):
            all_patches.extend(parse_file(f))
    # Sort by address.
    all_patches.sort(key=lambda p: p["addr"])

    OUT_JSON.parent.mkdir(parents=True, exist_ok=True)
    OUT_JSON.write_text(json.dumps({
        "patch_count": len(all_patches),
        "patches": all_patches,
    }, indent=2))

    # Markdown report
    by_kind = defaultdict(list)
    by_module = defaultdict(list)
    for p in all_patches:
        by_kind[p["kind"]].append(p)
        # Module = nom du dossier dans Components/Modules/X.cpp
        parts = Path(p["file"]).parts
        if "Modules" in parts:
            i = parts.index("Modules")
            if i + 1 < len(parts):
                mod = parts[i + 1].replace(".cpp", "").replace(".hpp", "")
                by_module[mod].append(p)
        else:
            by_module["__other__"].append(p)

    md = ["# Patches IW4x sur iw4x.exe", ""]
    md.append(f"*Genere par `scripts/python/extract_iw4x_patches.py` depuis "
              f"`refs/iw4x-client/src/`. **{len(all_patches)} patches** "
              f"identifies, sans ASLR -> adresses runtime stables.*")
    md.append("")

    md.append("## Distribution par type")
    md.append("")
    md.append("| Type | Nombre | Effet |")
    md.append("|---|---|---|")
    KIND_DESC = {
        "hook_call_or_jump": "Trampoline (intercept fct)",
        "hook_call_simple": "Trampoline (sans HOOK_TYPE)",
        "hook_set": "Ecriture de valeur (octet/mot/dword)",
        "hook_nop": "NOP-out (desactive instruction)",
        "hook_setstring": "Remplace une string en .rdata",
    }
    for kind, items in sorted(by_kind.items(), key=lambda x: -len(x[1])):
        md.append(f"| `{kind}` | {len(items)} | {KIND_DESC.get(kind, '')} |")
    md.append("")

    md.append("## Top 30 modules IW4x par nombre de patches")
    md.append("")
    md.append("| Module | Patches |")
    md.append("|---|---|")
    for mod, items in sorted(by_module.items(), key=lambda x: -len(x[1]))[:30]:
        md.append(f"| `{mod}` | {len(items)} |")
    md.append("")

    md.append("## Echantillon — patches Network.cpp")
    md.append("")
    if "Network" in by_module:
        md.append("| Adresse | Type | Cible / Valeur | Ligne |")
        md.append("|---|---|---|---|")
        for p in sorted(by_module["Network"], key=lambda x: x["addr"])[:25]:
            cv = p.get("target") or p.get("value") or f"NOP x{p.get('count', 5)}"
            md.append(f"| `0x{p['addr']:08x}` | {p['kind']} | "
                      f"`{cv}` | {p['line']} |")
        md.append("")

    md.append("## Note technique")
    md.append("")
    md.append("Ces 1487 adresses sont les points exacts où IW4x modifie le binaire "
              "iw4x.exe au runtime. Cross-referencees avec notre analyse Ghidra "
              "(adresses 1:1 sans ASLR), elles **revelent les fonctions internes "
              "patchees par IW4x** :")
    md.append("")
    md.append("- `hook_call_or_jump` HOOK_CALL = redirige un appel fonction precise")
    md.append("- `hook_call_or_jump` HOOK_JUMP = remplace une fonction entiere")
    md.append("- `hook_set<uint8_t>(addr, 0xC3)` = injecte un `RET` -> desactive la fct")
    md.append("- `hook_nop(addr, N)` = NOPs N octets (skip un check, neutralise un appel)")
    md.append("- `hook_setstring(addr, ...)` = remplace une string en .rdata")
    md.append("")
    md.append("Pour exploiter : prendre une adresse et regarder dans Ghidra ce qu'il "
              "y avait avant le patch -> on apprend ce que IW4x neutralise/remplace, "
              "donc indirectement ce que le moteur original faisait.")

    OUT_MD.write_text("\n".join(md))
    print(f"[+] {len(all_patches)} patches -> {OUT_JSON}")
    print(f"[+] rapport : {OUT_MD}")
    print(f"[+] top 5 modules :")
    for mod, items in sorted(by_module.items(), key=lambda x: -len(x[1]))[:5]:
        print(f"    {mod}: {len(items)}")


if __name__ == "__main__":
    main()
