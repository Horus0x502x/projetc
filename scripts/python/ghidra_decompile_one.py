#!/usr/bin/env python3
"""Decompile une fonction unique d'un binaire donne via pyghidra.

Usage : ghidra_decompile_one.py <binary> <addr> [label]
        ghidra_decompile_one.py iw4v.dll 0x100aa195 mystery_grew_71x
"""

import os
import sys
from pathlib import Path

PROJECT_PATH = Path("ghidra/iw4x-project").resolve()
PROJECT_NAME = "iw4x"
OUT_DIR = Path("findings/decompiled")

if len(sys.argv) < 3:
    print(__doc__)
    sys.exit(2)

BINARY = sys.argv[1]
ADDR = sys.argv[2]
LABEL = sys.argv[3] if len(sys.argv) > 3 else "fn"

os.environ.setdefault("GHIDRA_INSTALL_DIR", os.path.expanduser("~/tools/ghidra"))
import pyghidra  # noqa: E402

pyghidra.start()

from ghidra.app.decompiler import DecompInterface  # noqa: E402
from ghidra.util.task import ConsoleTaskMonitor    # noqa: E402

OUT_DIR.mkdir(parents=True, exist_ok=True)
project = pyghidra.open_project(path=str(PROJECT_PATH), name=PROJECT_NAME, create=False)
try:
    with pyghidra.program_context(project, f"/{BINARY}") as program:
        fm = program.getFunctionManager()
        af = program.getAddressFactory()
        addr = af.getAddress(ADDR)
        f = fm.getFunctionAt(addr)
        if f is None:
            print(f"[!] pas de fonction a {ADDR}")
            sys.exit(1)
        size = f.getBody().getNumAddresses()
        print(f"[*] {ADDR}  {f.getName()}  ({size} oct)")
        decomp = DecompInterface()
        decomp.openProgram(program)
        result = decomp.decompileFunction(f, 60, ConsoleTaskMonitor())
        if not result.decompileCompleted():
            print(f"[!] echec : {result.getErrorMessage()}")
            sys.exit(1)
        code = result.getDecompiledFunction().getC()
        out_path = OUT_DIR / f"{BINARY}-{ADDR}-{LABEL}.c"
        out_path.write_text(
            f"// {BINARY}!{f.getName()} @ {ADDR}\n"
            f"// taille body : {size} octets\n"
            f"// decompile par Ghidra 12.0.4 PUBLIC\n\n"
            + code
        )
        print(f"[+] -> {out_path}  ({len(code)} chars)")
        decomp.dispose()
finally:
    project.close()
