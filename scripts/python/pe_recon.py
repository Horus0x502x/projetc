#!/usr/bin/env python3
"""Recon statique d'un binaire PE — sort un fragment Markdown.

Usage : pe_recon.py <fichier.exe|.dll> [<fichier2> ...]

Pour chaque cible :
- en-tête PE (timestamp, ImageBase, EntryPoint, Subsystem)
- sections (nom, taille virtuelle, perms, entropie de Shannon)
- DLLs importées (regroupées par catégorie)
- empreintes : sha256, taille

L'entropie d'une section > 7.0 suggère contenu chiffré/compressé/packé
(le code et les données structurées sont en dessous de 6.5 typiquement).
"""

import hashlib
import math
import re
import struct
import subprocess
import sys
from collections import Counter
from pathlib import Path


# Catégorisation grossière des DLLs Win32 pour la lisibilité du rapport.
DLL_CATEGORIES = {
    "réseau": {"WS2_32.dll", "WININET.dll", "WINHTTP.dll", "IPHLPAPI.DLL", "DNSAPI.dll"},
    "graphique": {"d3d9.dll", "d3dx9_43.dll", "OPENGL32.dll", "GDI32.dll", "dwmapi.dll"},
    "input": {"XINPUT1_3.dll", "DINPUT8.dll", "HID.DLL"},
    "audio": {"WINMM.dll", "DSOUND.dll", "XAUDIO2_7.dll"},
    "système": {"KERNEL32.dll", "USER32.dll", "ADVAPI32.dll", "SHELL32.dll",
                "ole32.dll", "SHLWAPI.dll", "COMCTL32.dll", "SETUPAPI.dll",
                "ntdll.dll", "msvcrt.dll"},
    "crypto/debug": {"bcrypt.dll", "dbghelp.dll", "crypt32.dll"},
}


def shannon_entropy(data: bytes) -> float:
    if not data:
        return 0.0
    counts = Counter(data)
    n = len(data)
    return -sum((c / n) * math.log2(c / n) for c in counts.values())


def sha256(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def parse_objdump_p(path: Path) -> dict:
    """Extrait les champs du header PE via `objdump -p`."""
    out = subprocess.check_output(["objdump", "-p", str(path)], text=True)
    fields = {}
    for line in out.splitlines():
        m = re.match(r"^(Time/Date|Magic|AddressOfEntryPoint|ImageBase|"
                     r"SizeOfCode|SizeOfImage|Subsystem|DllCharacteristics)\s+(.+)$",
                     line.strip())
        if m:
            fields[m.group(1)] = m.group(2).strip()
    return fields


def parse_objdump_h(path: Path) -> list[dict]:
    """Liste des sections via `objdump -h`. Renvoie {name, vsize, voffset, foffset, flags}."""
    out = subprocess.check_output(["objdump", "-h", str(path)], text=True)
    sections = []
    lines = out.splitlines()
    i = 0
    while i < len(lines):
        # Format: " Idx Name  Size  VMA  LMA  Off fich  Algn"
        m = re.match(r"^\s*(\d+)\s+(\S+)\s+([0-9a-f]+)\s+([0-9a-f]+)\s+"
                     r"([0-9a-f]+)\s+([0-9a-f]+)", lines[i])
        if m:
            sec = {
                "idx": int(m.group(1)),
                "name": m.group(2),
                "size": int(m.group(3), 16),
                "vma": int(m.group(4), 16),
                "foff": int(m.group(6), 16),
                "flags": "",
            }
            if i + 1 < len(lines):
                sec["flags"] = lines[i + 1].strip()
            sections.append(sec)
            i += 2
        else:
            i += 1
    return sections


def parse_imports(path: Path) -> list[str]:
    out = subprocess.check_output(["objdump", "-p", str(path)], text=True)
    return sorted(set(re.findall(r"DLL Name:\s*(\S+)", out)))


def categorize_dlls(dlls: list[str]) -> dict[str, list[str]]:
    bag = {cat: [] for cat in DLL_CATEGORIES}
    bag["autres"] = []
    for d in dlls:
        placed = False
        for cat, members in DLL_CATEGORIES.items():
            if d in members:
                bag[cat].append(d)
                placed = True
                break
        if not placed:
            bag["autres"].append(d)
    return {k: v for k, v in bag.items() if v}


def section_entropy(path: Path, sec: dict) -> float:
    if sec["size"] == 0 or sec["foff"] == 0:
        return 0.0
    with path.open("rb") as f:
        f.seek(sec["foff"])
        return shannon_entropy(f.read(sec["size"]))


def render(path: Path) -> str:
    real = path.resolve()
    hdr = parse_objdump_p(real)
    secs = parse_objdump_h(real)
    dlls = parse_imports(real)

    out = [f"### `{path.name}`"]
    out.append("")
    out.append(f"- **Fichier réel** : `{real}`")
    out.append(f"- **Taille** : {real.stat().st_size:,} octets")
    out.append(f"- **SHA-256** : `{sha256(real)}`")
    out.append("")
    out.append("**En-tête PE**")
    out.append("")
    out.append("| Champ | Valeur |")
    out.append("|---|---|")
    for k in ("Time/Date", "Magic", "ImageBase", "AddressOfEntryPoint",
              "SizeOfCode", "Subsystem", "DllCharacteristics"):
        if k in hdr:
            out.append(f"| {k} | `{hdr[k]}` |")
    out.append("")

    out.append("**Sections** (entropie > 7.0 = suspect : chiffré/compressé/packé)")
    out.append("")
    out.append("| # | Nom | Taille | VMA | Entropie | Notes |")
    out.append("|---|---|---|---|---|---|")
    for s in secs:
        ent = section_entropy(real, s)
        flags_short = ", ".join(
            t for t in ("CODE", "DATA", "READONLY") if t in s["flags"])
        notes = []
        if ent > 7.0:
            notes.append("**ENTROPIE HAUTE**")
        if s["name"] not in (".text", ".rdata", ".data", ".rsrc",
                             ".reloc", ".bss", ".idata", ".edata"):
            notes.append("section non standard")
        out.append(f"| {s['idx']} | `{s['name']}` | "
                   f"{s['size']:,} | `0x{s['vma']:08x}` | "
                   f"{ent:.2f} | {flags_short}; {'; '.join(notes)} |")
    out.append("")

    out.append(f"**Imports** ({len(dlls)} DLLs)")
    out.append("")
    for cat, members in categorize_dlls(dlls).items():
        out.append(f"- *{cat}* : {', '.join(f'`{m}`' for m in members)}")
    out.append("")
    return "\n".join(out)


def main():
    if len(sys.argv) < 2:
        print(__doc__, file=sys.stderr)
        sys.exit(2)
    pieces = ["# Recon PE — en-têtes, sections, imports", "",
              "*Généré par `scripts/python/pe_recon.py`.*", ""]
    for arg in sys.argv[1:]:
        p = Path(arg)
        if not p.exists():
            print(f"# absent : {arg}", file=sys.stderr)
            continue
        try:
            pieces.append(render(p))
        except subprocess.CalledProcessError as e:
            pieces.append(f"### `{p.name}`\n\nÉchec objdump : {e}\n")
    print("\n".join(pieces))


if __name__ == "__main__":
    main()
