#!/usr/bin/env python3
"""Parse /proc/<pid>/maps et produit un rapport annoté.

Distingue : ELF natifs (loader Wine, libc), PE Windows mappés sous Wine
(le jeu lui-même + ses .dll), heaps Windows (réservées par le runtime PE),
heap/stack Linux, vdso, vsyscall, anonymous (probable JIT ou shared memory).

Pour chaque module backed-file, donne :
- adresse de base Linux (= ce qu'il faut pour calculer des offsets stables)
- taille totale agrégée
- type détecté (ELF / PE / autre)
- pour les PE : ImageBase déclaré dans le header (pour comparer avec la base Linux)

Usage :
    maps_parser.py <pid>
    maps_parser.py $(pgrep -f iw4x.exe | head -1)
"""

import re
import struct
import sys
from collections import defaultdict
from pathlib import Path


MAPS_LINE = re.compile(
    r"^([0-9a-f]+)-([0-9a-f]+)\s+(\S+)\s+([0-9a-f]+)\s+\S+\s+\d+\s*(.*)$"
)


def parse_maps(pid: int) -> list[dict]:
    rows = []
    with open(f"/proc/{pid}/maps") as f:
        for line in f:
            m = MAPS_LINE.match(line.rstrip())
            if not m:
                continue
            start, end, perms, off, path = m.groups()
            rows.append({
                "start": int(start, 16),
                "end": int(end, 16),
                "perms": perms,
                "offset": int(off, 16),
                "path": path.strip(),
            })
    return rows


def detect_kind(path: str) -> str:
    if not path:
        return "anonymous"
    if path.startswith("["):
        return path.strip("[]")
    try:
        with open(path, "rb") as f:
            magic = f.read(4)
    except OSError:
        return "unreadable"
    if magic[:4] == b"\x7fELF":
        return "elf"
    if magic[:2] == b"MZ":
        return "pe"
    return "other"


def pe_image_base(path: str) -> int | None:
    """Lit l'ImageBase du header PE (offset 0x34 dans l'optional header
    pour PE32, depuis le e_lfanew de l'en-tête DOS)."""
    try:
        with open(path, "rb") as f:
            data = f.read(0x400)
    except OSError:
        return None
    if data[:2] != b"MZ":
        return None
    e_lfanew = struct.unpack_from("<I", data, 0x3C)[0]
    if data[e_lfanew:e_lfanew + 4] != b"PE\x00\x00":
        return None
    # Optional header commence à e_lfanew + 24.
    opt = e_lfanew + 24
    magic = struct.unpack_from("<H", data, opt)[0]
    if magic == 0x10b:  # PE32
        return struct.unpack_from("<I", data, opt + 28)[0]
    if magic == 0x20b:  # PE32+
        return struct.unpack_from("<Q", data, opt + 24)[0]
    return None


def aggregate(rows: list[dict]) -> list[dict]:
    """Agrège les mappings par fichier (path) en conservant la 1re adresse
    et la taille totale couverte."""
    bag = defaultdict(lambda: {"start": None, "end": 0, "segments": 0,
                                "perms_seen": set()})
    anon = []
    for r in rows:
        if not r["path"] or r["path"].startswith("["):
            anon.append(r)
            continue
        b = bag[r["path"]]
        if b["start"] is None or r["start"] < b["start"]:
            b["start"] = r["start"]
        if r["end"] > b["end"]:
            b["end"] = r["end"]
        b["segments"] += 1
        b["perms_seen"].add(r["perms"])
    out = []
    for path, info in bag.items():
        out.append({
            "path": path,
            "start": info["start"],
            "size": info["end"] - info["start"],
            "segments": info["segments"],
            "perms": ",".join(sorted(info["perms_seen"])),
        })
    return out, anon


def render(pid: int) -> str:
    rows = parse_maps(pid)
    files, anon = aggregate(rows)
    for f in files:
        f["kind"] = detect_kind(f["path"])
        if f["kind"] == "pe":
            f["image_base"] = pe_image_base(f["path"])

    # Tri pour la lecture : PE d'abord (cibles RE), puis ELF, puis le reste.
    order = {"pe": 0, "elf": 1, "other": 2, "unreadable": 3, "anonymous": 4}
    files.sort(key=lambda f: (order.get(f["kind"], 5), f["start"]))

    out = [f"# Carte mémoire — PID {pid}", "",
           f"*Généré par `scripts/python/maps_parser.py`. "
           f"{len(rows)} mappings bruts, {len(files)} fichiers distincts, "
           f"{len(anon)} régions anonymes/spéciales.*", ""]

    pes = [f for f in files if f["kind"] == "pe"]
    elfs = [f for f in files if f["kind"] == "elf"]

    out.append(f"## Modules PE Windows ({len(pes)})")
    out.append("")
    out.append("Cibles RE prioritaires. La **base Linux** est l'adresse de "
               "départ utile pour calculer des offsets stables ; comparer à "
               "l'ImageBase déclaré dans le header pour mesurer le décalage ASLR.")
    out.append("")
    out.append("| Base Linux | Taille | ImageBase PE | Δ (ASLR) | Segments | Module |")
    out.append("|---|---|---|---|---|---|")
    for f in pes:
        ib = f.get("image_base")
        delta = (f["start"] - ib) if ib is not None else None
        delta_s = f"`{delta:+#x}`" if delta is not None else "—"
        ib_s = f"`0x{ib:08x}`" if ib is not None else "?"
        name = Path(f["path"]).name
        out.append(f"| `0x{f['start']:08x}` | {f['size']:,} | {ib_s} | "
                   f"{delta_s} | {f['segments']} | `{name}` |")
    out.append("")

    out.append(f"## Modules ELF natifs ({len(elfs)})")
    out.append("")
    out.append("Loader Wine, libc, glibc-helpers, etc. Utile pour identifier "
               "où Wine intercepte les API Win32.")
    out.append("")
    out.append("| Base Linux | Taille | Segments | Module |")
    out.append("|---|---|---|---|")
    for f in elfs:
        name = Path(f["path"]).name
        out.append(f"| `0x{f['start']:012x}` | {f['size']:,} | "
                   f"{f['segments']} | `{name}` |")
    out.append("")

    out.append(f"## Régions anonymes / spéciales ({len(anon)})")
    out.append("")
    by_kind = defaultdict(list)
    for r in anon:
        kind = r["path"].strip("[]") if r["path"] else "anonymous"
        by_kind[kind].append(r)
    out.append("| Type | Nombre | Taille totale |")
    out.append("|---|---|---|")
    for kind, items in sorted(by_kind.items(), key=lambda kv: -sum(
            i["end"] - i["start"] for i in kv[1])):
        total = sum(i["end"] - i["start"] for i in items)
        out.append(f"| `{kind}` | {len(items)} | {total:,} |")
    out.append("")

    others = [f for f in files if f["kind"] not in ("pe", "elf")]
    if others:
        out.append(f"## Autres fichiers mappés ({len(others)})")
        out.append("")
        for f in others:
            out.append(f"- `{f['path']}` ({f['kind']}, {f['size']:,} octets)")
        out.append("")

    return "\n".join(out)


def main():
    if len(sys.argv) != 2:
        print(__doc__, file=sys.stderr)
        sys.exit(2)
    try:
        pid = int(sys.argv[1])
    except ValueError:
        print(f"PID invalide : {sys.argv[1]}", file=sys.stderr)
        sys.exit(2)
    if not Path(f"/proc/{pid}").exists():
        print(f"PID {pid} introuvable", file=sys.stderr)
        sys.exit(1)
    print(render(pid))


if __name__ == "__main__":
    main()
