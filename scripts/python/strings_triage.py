#!/usr/bin/env python3
"""Triage des strings — sort un fragment Markdown.

Extrait les strings ASCII et UTF-16LE d'un binaire et les classe par catégorie :
- URLs / hosts
- chemins (Windows et Unix)
- noms de classes C++ RTTI
- chemins .pdb (compile-time leak)
- DVARs / commandes IW4x suspectées
- messages de debug / format strings

Usage : strings_triage.py <binaire> [<binaire> ...]
"""

import re
import subprocess
import sys
from pathlib import Path


PATTERNS = {
    "URLs / hosts": re.compile(rb"\b(?:https?|ftp|wss?)://[^\s\"'<>]{4,200}"),
    "chemins Windows": re.compile(rb"[A-Za-z]:\\[A-Za-z0-9_.\\\- ]{4,200}"),
    "chemins Unix": re.compile(rb"(?:/[A-Za-z0-9_.\-]{2,30}){2,}/?"),
    "PDB (debug paths)": re.compile(rb"[A-Za-z]:\\[^\s]{4,200}\.pdb"),
    "RTTI (.?AV…)": re.compile(rb"\.\?AV[A-Za-z_][A-Za-z0-9_]{0,80}@@"),
    "DVAR / cmd suspect": re.compile(
        rb"\b(g_|cg_|cl_|sv_|com_|r_|snd_|ai_|scr_)[a-zA-Z0-9_]{2,40}"),
    "format strings": re.compile(rb"%[0-9.\-+# ]*[diouxXeEfgGcsp]"),
}

# Strings de format trop courts/communs — on garde seulement les contextuels.
FORMAT_MIN_LEN = 12


def extract_strings(data: bytes, min_len: int = 6) -> set[bytes]:
    out = set()
    # ASCII
    for m in re.finditer(rb"[\x20-\x7e]{%d,}" % min_len, data):
        out.add(m.group(0))
    # UTF-16 LE (un caractère ASCII suivi d'un \x00, séquence)
    for m in re.finditer(rb"(?:[\x20-\x7e]\x00){%d,}" % min_len, data):
        try:
            out.add(m.group(0).decode("utf-16-le").encode("utf-8"))
        except UnicodeDecodeError:
            pass
    return out


def classify(strings: set[bytes]) -> dict[str, list[str]]:
    buckets = {k: set() for k in PATTERNS}
    for s in strings:
        for cat, pat in PATTERNS.items():
            for m in pat.finditer(s):
                hit = m.group(0)
                if cat == "format strings":
                    if len(s) < FORMAT_MIN_LEN:
                        continue
                    # Garder la chaîne complète (contexte plus utile que le %d seul).
                    buckets[cat].add(s)
                else:
                    buckets[cat].add(hit)
    # Décode en utf-8 best-effort, dédoublonne, trie, plafonne.
    out = {}
    for cat, items in buckets.items():
        decoded = sorted({i.decode("utf-8", errors="replace") for i in items})
        out[cat] = decoded[:50]  # plafond pour garder le rapport lisible
    return out


def render(path: Path) -> str:
    real = path.resolve()
    data = real.read_bytes()
    strings = extract_strings(data)
    cats = classify(strings)

    out = [f"### `{path.name}`", "",
           f"- {len(strings):,} strings extraites (ASCII + UTF-16LE, ≥6 chars)", ""]
    for cat, items in cats.items():
        if not items:
            continue
        out.append(f"**{cat}** ({len(items)})")
        out.append("")
        for s in items:
            # Tronque les très longues lignes pour la lisibilité du markdown.
            disp = s if len(s) < 160 else s[:157] + "…"
            out.append(f"- `{disp}`")
        out.append("")
    return "\n".join(out)


def main():
    if len(sys.argv) < 2:
        print(__doc__, file=sys.stderr)
        sys.exit(2)
    pieces = ["# Triage des strings", "",
              "*Généré par `scripts/python/strings_triage.py`. "
              "URLs / chemins / RTTI / DVARs / .pdb leaks classés.*", ""]
    for arg in sys.argv[1:]:
        p = Path(arg)
        if not p.exists():
            continue
        pieces.append(render(p))
    print("\n".join(pieces))


if __name__ == "__main__":
    main()
