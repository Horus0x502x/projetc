#!/usr/bin/env python3
"""Compare iw4x.dll (upstream IW4x) vs iw4v.dll (fork local "scfge/eliott").

Strategie :
1. Pour chaque adresse PE commune (les deux DLL ont meme ImageBase 0x10000000),
   compare la taille de la fonction. Taille differente = code modifie.
2. Fonctions presentes dans une seule DLL = ajoutees ou supprimees.
3. Compare aussi les listes d'imports + strings extraites des binaires
   directement (pas via Ghidra).

Sortie : findings/iw4v-vs-iw4x-diff.md
"""

import json
import subprocess
import re
from collections import defaultdict
from pathlib import Path

OUT = Path("findings/iw4v-vs-iw4x-diff.md")


def load_funcs(name: str) -> dict[int, dict]:
    d = json.loads(Path(f"findings/{name}-functions.json").read_text())
    return {int(f["addr"], 16): f for f in d["functions"]}


def get_pe_strings(path: str, limit: int = 50000) -> set[str]:
    """Extrait strings ASCII >=6 chars du PE."""
    out = subprocess.check_output(["strings", "-n", "6", path], text=True)
    s = set()
    for line in out.splitlines():
        line = line.strip()
        if 6 <= len(line) <= 200:
            s.add(line)
        if len(s) >= limit:
            break
    return s


def get_pe_imports(path: str) -> set[str]:
    """Extrait imports DLL!Func via objdump -p."""
    out = subprocess.check_output(["objdump", "-p", path], text=True)
    imports = set()
    cur_dll = None
    for line in out.splitlines():
        m = re.match(r"\s+DLL Name:\s*(\S+)", line)
        if m:
            cur_dll = m.group(1)
            continue
        # Ligne "        Ordinal Hint Name        ...." ou similaire
        if cur_dll:
            # Format objdump : "        12345  ord  Name"
            m2 = re.match(r"\s+\d+\s+\d+\s+(\w+)", line)
            if m2:
                imports.add(f"{cur_dll}!{m2.group(1)}")
    return imports


def main():
    print("[*] chargement des indexes Ghidra...")
    a = load_funcs("iw4x")  # iw4x.dll
    b = load_funcs("iw4v.dll")
    print(f"    iw4x.dll : {len(a)} fonctions")
    print(f"    iw4v.dll : {len(b)} fonctions")

    # Adresses communes vs uniques
    a_addrs = set(a.keys())
    b_addrs = set(b.keys())
    common = a_addrs & b_addrs
    a_only = a_addrs - b_addrs
    b_only = b_addrs - a_addrs

    # Pour les communes : taille différente = code modifié
    modified = []
    for addr in sorted(common):
        if a[addr]["size"] != b[addr]["size"]:
            modified.append({
                "addr": f"0x{addr:08x}",
                "iw4x_size": a[addr]["size"],
                "iw4v_size": b[addr]["size"],
                "delta": b[addr]["size"] - a[addr]["size"],
            })

    print(f"[*] {len(common)} fonctions communes")
    print(f"[*] {len(a_only)} unique a iw4x.dll")
    print(f"[*] {len(b_only)} unique a iw4v.dll")
    print(f"[*] {len(modified)} fonctions de taille differente")

    print("[*] strings comparees...")
    strs_a = get_pe_strings("targets/iw4x.dll")
    strs_b = get_pe_strings("targets/iw4v.dll")
    str_only_b = strs_b - strs_a  # strings uniques au fork
    str_only_a = strs_a - strs_b
    print(f"    iw4x.dll : {len(strs_a)} strings")
    print(f"    iw4v.dll : {len(strs_b)} strings")
    print(f"    uniques iw4v : {len(str_only_b)}")

    print("[*] imports compares...")
    imp_a = get_pe_imports("targets/iw4x.dll")
    imp_b = get_pe_imports("targets/iw4v.dll")
    imp_only_b = imp_b - imp_a
    imp_only_a = imp_a - imp_b
    print(f"    imports iw4v uniques : {len(imp_only_b)}")
    print(f"    imports iw4x uniques : {len(imp_only_a)}")

    # ===== Markdown report =====
    md = ["# Diff `iw4v.dll` (fork local) vs `iw4x.dll` (upstream)", ""]
    md.append("*Le fork local provient du leak PDB `C:\\Users\\scfge\\source\\repos\\"
              "iw4x-client-eliott\\` (cf. `recon/00-findings-clefs.md`). Compare au "
              "build upstream officiel via GitHub Actions.*")
    md.append("")

    md.append("## Synthese")
    md.append("")
    md.append("| Metrique | iw4x.dll | iw4v.dll | Delta |")
    md.append("|---|---|---|---|")
    md.append(f"| Fonctions Ghidra | {len(a):,} | {len(b):,} | {len(b) - len(a):+d} |")
    md.append(f"| Strings | {len(strs_a):,} | {len(strs_b):,} | {len(strs_b) - len(strs_a):+d} |")
    md.append(f"| Imports DLL!fct | {len(imp_a):,} | {len(imp_b):,} | {len(imp_b) - len(imp_a):+d} |")
    md.append(f"| Fonctions communes (memes addr) | {len(common):,} | | |")
    md.append(f"| Fonctions ajoutees dans iw4v | {len(b_only):,} | | |")
    md.append(f"| Fonctions retirees vs iw4x | {len(a_only):,} | | |")
    md.append(f"| Fonctions modifiees (taille differente) | {len(modified):,} | | |")
    md.append("")

    md.append("## Top 30 fonctions modifiees (delta de taille decroissant)")
    md.append("")
    md.append("Une fonction qui change de taille = code modifie. "
              "Delta positif = grossi (logique ajoutee), negatif = diminue.")
    md.append("")
    md.append("| Adresse | iw4x.dll | iw4v.dll | Delta |")
    md.append("|---|---|---|---|")
    modified.sort(key=lambda m: -abs(m["delta"]))
    for m in modified[:30]:
        md.append(f"| `{m['addr']}` | {m['iw4x_size']:,} | "
                  f"{m['iw4v_size']:,} | {m['delta']:+,} |")
    md.append("")

    md.append("## Strings ajoutees dans iw4v.dll (echantillon de 50)")
    md.append("")
    md.append("Strings presentes dans iw4v.dll mais pas dans iw4x.dll. "
              "Reveal souvent les modifications du fork.")
    md.append("")
    interesting = [s for s in str_only_b
                   if 8 < len(s) < 80
                   and not s.startswith(("__", "??", "@@"))
                   and not all(c in "0123456789abcdefABCDEF" for c in s)]
    interesting.sort(key=lambda s: (s.lower(), len(s)))
    for s in interesting[:50]:
        md.append(f"- `{s}`")
    if len(interesting) > 50:
        md.append(f"")
        md.append(f"*(+{len(interesting) - 50} autres strings ajoutees)*")
    md.append("")

    md.append("## Strings retirees (presentes dans iw4x.dll uniquement)")
    md.append("")
    md.append("(souvent : code IW4x retire ou refactore par le fork)")
    md.append("")
    interesting_a = [s for s in str_only_a
                     if 8 < len(s) < 80
                     and not s.startswith(("__", "??", "@@"))
                     and not all(c in "0123456789abcdefABCDEF" for c in s)]
    interesting_a.sort()
    for s in interesting_a[:30]:
        md.append(f"- `{s}`")
    if len(interesting_a) > 30:
        md.append(f"")
        md.append(f"*(+{len(interesting_a) - 30} autres)*")
    md.append("")

    md.append("## Imports differents")
    md.append("")
    if imp_only_b:
        md.append("**Imports ajoutes dans iw4v.dll** (utilise des APIs supplementaires) :")
        md.append("")
        for i in sorted(imp_only_b)[:30]:
            md.append(f"- `{i}`")
        md.append("")
    if imp_only_a:
        md.append("**Imports retires** (iw4v.dll n'utilise plus ces APIs) :")
        md.append("")
        for i in sorted(imp_only_a)[:30]:
            md.append(f"- `{i}`")
        md.append("")

    md.append("## Fonctions ajoutees dans iw4v.dll (echantillon)")
    md.append("")
    md.append("| Adresse | Taille | Callers |")
    md.append("|---|---|---|")
    added_funcs = sorted([b[a] for a in b_only], key=lambda f: -f["size"])
    for f in added_funcs[:20]:
        md.append(f"| `{f['addr']}` | {f['size']:,} | {f['callers']} |")
    md.append("")

    OUT.parent.mkdir(parents=True, exist_ok=True)
    OUT.write_text("\n".join(md))
    print(f"[+] rapport : {OUT}")


if __name__ == "__main__":
    main()
