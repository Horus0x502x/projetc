#!/usr/bin/env python3
"""Lit la mémoire d'un process via process_vm_readv (pas de sudo).

Marche pour ses propres process si ptrace_scope ≤ 1 (Ubuntu défaut).

Usages :
    memread.py <pid> <addr> [len=64]              # hex dump
    memread.py <pid> <addr> str                   # C string
    memread.py <pid> <addr> u32                   # uint32 little-endian
    memread.py <pid> <addr> i32                   # int32 little-endian
    memread.py <pid> <addr> f32                   # float
    memread.py <pid> <addr> ptr                   # déréférence un pointeur (32-bit)
    memread.py <pid> <addr> chain 0x18,0x4,0x10   # suit une chaîne de pointeurs

Exemples (avec PID iw4x.exe = 94226 et iw4x.dll @ 0x10000000) :
    memread.py 94226 0x10000000 64           # début du PE header
    memread.py 94226 0x10000000 str          # 'MZ\\x90...'
    memread.py 94226 0x101e1000 str          # début de .rdata (souvent une string)
"""

import ctypes
import ctypes.util
import struct
import sys
from pathlib import Path

libc = ctypes.CDLL(ctypes.util.find_library("c"), use_errno=True)


class IOVec(ctypes.Structure):
    _fields_ = [("iov_base", ctypes.c_void_p),
                ("iov_len", ctypes.c_size_t)]


# ssize_t process_vm_readv(pid_t pid,
#     const struct iovec *local, unsigned long liovcnt,
#     const struct iovec *remote, unsigned long riovcnt,
#     unsigned long flags);
libc.process_vm_readv.argtypes = [
    ctypes.c_int,
    ctypes.POINTER(IOVec), ctypes.c_ulong,
    ctypes.POINTER(IOVec), ctypes.c_ulong,
    ctypes.c_ulong,
]
libc.process_vm_readv.restype = ctypes.c_ssize_t


def read(pid: int, addr: int, length: int) -> bytes:
    buf = (ctypes.c_ubyte * length)()
    local = IOVec(ctypes.cast(buf, ctypes.c_void_p).value, length)
    remote = IOVec(addr, length)
    n = libc.process_vm_readv(pid, ctypes.byref(local), 1,
                              ctypes.byref(remote), 1, 0)
    if n < 0:
        err = ctypes.get_errno()
        raise OSError(err, f"process_vm_readv failed at 0x{addr:x} : "
                           f"{ctypes.cast(libc.strerror(err), ctypes.c_char_p).value.decode()}")
    return bytes(buf[:n])


def hex_dump(data: bytes, base: int) -> str:
    out = []
    for i in range(0, len(data), 16):
        chunk = data[i:i + 16]
        hexpart = " ".join(f"{b:02x}" for b in chunk).ljust(48)
        ascii_ = "".join(chr(b) if 32 <= b < 127 else "." for b in chunk)
        out.append(f"  0x{base + i:08x}  {hexpart}  {ascii_}")
    return "\n".join(out)


def parse_addr(s: str) -> int:
    return int(s, 0)


def main():
    args = sys.argv[1:]
    if len(args) < 2:
        print(__doc__, file=sys.stderr)
        sys.exit(2)
    pid = int(args[0])
    addr = parse_addr(args[1])
    fmt = args[2] if len(args) >= 3 else "64"

    if not Path(f"/proc/{pid}").exists():
        print(f"PID {pid} introuvable", file=sys.stderr)
        sys.exit(1)

    if fmt == "str":
        data = read(pid, addr, 256)
        end = data.find(b"\x00")
        s = data[:end if end >= 0 else 256]
        try:
            print(s.decode("utf-8"))
        except UnicodeDecodeError:
            print(repr(s))
        return

    if fmt in ("u32", "i32", "f32"):
        data = read(pid, addr, 4)
        if fmt == "u32":
            (v,) = struct.unpack("<I", data)
            print(f"0x{v:08x}  ({v})")
        elif fmt == "i32":
            (v,) = struct.unpack("<i", data)
            print(v)
        else:
            (v,) = struct.unpack("<f", data)
            print(v)
        return

    if fmt == "ptr":
        data = read(pid, addr, 4)
        (v,) = struct.unpack("<I", data)
        print(f"*0x{addr:08x} = 0x{v:08x}")
        return

    if fmt == "chain":
        if len(args) < 4:
            print("usage: chain 0x18,0x4,0x10", file=sys.stderr)
            sys.exit(2)
        offsets = [parse_addr(o) for o in args[3].split(",")]
        cur = addr
        path = [f"0x{cur:08x}"]
        for off in offsets:
            data = read(pid, cur, 4)
            (cur,) = struct.unpack("<I", data)
            cur += off
            path.append(f"+0x{off:x}=0x{cur:08x}")
        print(" -> ".join(path))
        # Lit la valeur finale en u32/f32
        try:
            data = read(pid, cur, 4)
            (u,) = struct.unpack("<I", data)
            (f,) = struct.unpack("<f", data)
            print(f"valeur finale : u32=0x{u:08x} ({u})  f32={f}")
        except Exception as e:
            print(f"lecture valeur finale échouée : {e}")
        return

    # Default = hex dump
    length = int(fmt, 0)
    data = read(pid, addr, length)
    print(hex_dump(data, addr))


if __name__ == "__main__":
    main()
