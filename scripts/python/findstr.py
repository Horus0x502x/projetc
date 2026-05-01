#!/usr/bin/env python3
"""Cherche une string ASCII ou UTF-16LE dans la mémoire d'un process.

Strate les régions de /proc/<pid>/maps lisibles, lit chacune via
process_vm_readv, et reporte chaque match avec son adresse.

Optionnel : remonter aux pointeurs vers cette string (xrefs) — utile pour
trouver les structures qui référencent un dvar ou une command par leur nom.

Usages :
    findstr.py <pid> <string>                         # recherche simple
    findstr.py <pid> <string> --xrefs                 # + cherche les pointeurs
    findstr.py <pid> <string> --regions rwx           # filtre les perms
    findstr.py <pid> <string> --module iw4x.dll       # restreint à un module

Exemples :
    findstr.py 94226 'MAX_OPCODE_LOOKUP_SIZE'
    findstr.py 94226 'cg_drawFPS' --xrefs --regions rw
"""

import argparse
import ctypes
import ctypes.util
import re
import struct
import sys
from pathlib import Path

libc = ctypes.CDLL(ctypes.util.find_library("c"), use_errno=True)


class IOVec(ctypes.Structure):
    _fields_ = [("iov_base", ctypes.c_void_p),
                ("iov_len", ctypes.c_size_t)]


libc.process_vm_readv.argtypes = [
    ctypes.c_int,
    ctypes.POINTER(IOVec), ctypes.c_ulong,
    ctypes.POINTER(IOVec), ctypes.c_ulong,
    ctypes.c_ulong,
]
libc.process_vm_readv.restype = ctypes.c_ssize_t


def read(pid: int, addr: int, length: int) -> bytes | None:
    if length <= 0:
        return b""
    buf = (ctypes.c_ubyte * length)()
    local = IOVec(ctypes.cast(buf, ctypes.c_void_p).value, length)
    remote = IOVec(addr, length)
    n = libc.process_vm_readv(pid, ctypes.byref(local), 1,
                              ctypes.byref(remote), 1, 0)
    if n < 0:
        return None
    return bytes(buf[:n])


MAPS_RE = re.compile(
    r"^([0-9a-f]+)-([0-9a-f]+)\s+(\S+)\s+\S+\s+\S+\s+\d+\s*(.*)$"
)


def parse_maps(pid: int, perms_filter: str | None = None,
               module_filter: str | None = None):
    out = []
    with open(f"/proc/{pid}/maps") as f:
        for line in f:
            m = MAPS_RE.match(line.rstrip())
            if not m:
                continue
            start, end, perms, path = m.groups()
            path = path.strip()
            # Filtre permissions : "rw" matche "rw-p" et "rwxp"
            if perms_filter:
                wanted = set(perms_filter.replace("-", ""))
                got = set(perms.replace("-", "").replace("p", ""))
                if not wanted.issubset(got):
                    continue
            if module_filter and module_filter not in path:
                continue
            out.append({
                "start": int(start, 16),
                "end": int(end, 16),
                "perms": perms,
                "path": path,
            })
    return out


def search_string(pid: int, needle: bytes, regions, max_region_size=64 * 1024 * 1024):
    """Cherche needle dans chaque region. Retourne liste d'adresses absolues."""
    hits = []
    for r in regions:
        size = r["end"] - r["start"]
        if size > max_region_size:
            continue  # skip mappings trop gros (locale-archive, etc.)
        data = read(pid, r["start"], size)
        if data is None:
            continue
        for m in re.finditer(re.escape(needle), data):
            hits.append({"addr": r["start"] + m.start(), "region": r})
    return hits


def search_xrefs(pid: int, target_addr: int, regions, max_region_size=64 * 1024 * 1024):
    """Cherche les pointeurs little-endian 32-bit vers target_addr."""
    needle = struct.pack("<I", target_addr)
    return search_string(pid, needle, regions, max_region_size)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("pid", type=int)
    ap.add_argument("string")
    ap.add_argument("--xrefs", action="store_true",
                    help="liste aussi les pointeurs vers chaque match")
    ap.add_argument("--regions", default="r",
                    help="filtre permissions (ex: rw, rwx)")
    ap.add_argument("--module", default=None,
                    help="restreint aux mappings dont le path contient cette string")
    ap.add_argument("--utf16", action="store_true",
                    help="cherche aussi en UTF-16LE")
    args = ap.parse_args()

    if not Path(f"/proc/{args.pid}").exists():
        print(f"PID {args.pid} introuvable", file=sys.stderr)
        sys.exit(1)

    regions = parse_maps(args.pid, perms_filter=args.regions,
                          module_filter=args.module)
    print(f"[*] {len(regions)} régions lisibles (filtre '{args.regions}'"
          f"{', module=' + args.module if args.module else ''})")

    needles = [args.string.encode("utf-8")]
    if args.utf16:
        needles.append(args.string.encode("utf-16-le"))

    all_hits = []
    for needle in needles:
        hits = search_string(args.pid, needle, regions)
        encoding = "utf-16" if needle == args.string.encode("utf-16-le") else "ascii"
        print(f"\n[+] {len(hits)} match(s) {encoding} pour {needle[:40]!r}")
        for h in hits:
            mod = Path(h["region"]["path"]).name or "<anon>"
            print(f"    0x{h['addr']:08x}  ({h['region']['perms']}, {mod})")
        all_hits.extend(hits)

    if args.xrefs and all_hits:
        all_regions = parse_maps(args.pid, perms_filter="r")
        for h in all_hits:
            xrefs = search_xrefs(args.pid, h["addr"], all_regions)
            print(f"\n[+] {len(xrefs)} pointeur(s) vers 0x{h['addr']:08x}")
            for x in xrefs[:15]:
                mod = Path(x["region"]["path"]).name or "<anon>"
                print(f"    *0x{x['addr']:08x}  (dans {mod})")
            if len(xrefs) > 15:
                print(f"    ... ({len(xrefs) - 15} autres)")


if __name__ == "__main__":
    main()
