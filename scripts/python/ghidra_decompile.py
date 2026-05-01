#!/usr/bin/env python3
"""Décompile les fonctions remarquables vers du pseudo-C lisible.

Sort un fichier par fonction dans findings/decompiled/<addr>-<label>.c.

Usage : .venv/bin/python3 scripts/python/ghidra_decompile.py
"""

import os
import re
from pathlib import Path

PROJECT_PATH = Path("ghidra/iw4x-project").resolve()
PROJECT_NAME = "iw4x"
OUT_DIR = Path("findings/decompiled")

# Cibles : (adresse, label, taille max ; on skip les très grosses pour le 1er pass)
TARGETS = [
    ("0x100c2282", "asset_decrypter",     5890),   # decryptImages/decryptSounds
    ("0x1005e6b0", "gsc_vm_helper",       428),    # MAX_OPCODE_LOOKUP_SIZE
    ("0x100ff16d", "world_parser",        12678),  # version/isInUse/planes
    ("0x100bd117", "map_techset_table",   5268),   # wc_unlit_*/mp_*
    ("0x10137efc", "protobuf_serializer", 6233),
    ("0x1017d3ee", "zlib_decompress",     5189),
    ("0x100f6bc9", "soundalias_regex",    426),
    # WeaponDef : trop gros (58 Ko), à faire séparément si besoin
    # ("0x100dbb62", "weapondef_parser", 58166),
]


os.environ.setdefault("GHIDRA_INSTALL_DIR", os.path.expanduser("~/tools/ghidra"))
import pyghidra  # noqa: E402

pyghidra.start()

from ghidra.app.decompiler import DecompInterface  # noqa: E402
from ghidra.util.task import ConsoleTaskMonitor    # noqa: E402


def main():
    OUT_DIR.mkdir(parents=True, exist_ok=True)
    project = pyghidra.open_project(
        path=str(PROJECT_PATH), name=PROJECT_NAME, create=False)
    try:
        with pyghidra.program_context(project, "/iw4x.dll") as program:
            fm = program.getFunctionManager()
            af = program.getAddressFactory()
            decomp = DecompInterface()
            decomp.openProgram(program)
            monitor = ConsoleTaskMonitor()

            for addr_str, label, max_size in TARGETS:
                addr = af.getAddress(addr_str)
                f = fm.getFunctionAt(addr)
                if f is None:
                    print(f"[!] {addr_str} : pas de fonction")
                    continue
                print(f"[*] {addr_str}  {label}  (taille {f.getBody().getNumAddresses()})")
                result = decomp.decompileFunction(f, 60, monitor)
                if not result.decompileCompleted():
                    print(f"  [!] échec : {result.getErrorMessage()}")
                    continue
                code = result.getDecompiledFunction().getC()
                # Header utile
                header = (
                    f"// Adresse runtime : {addr_str}  (pas d'ASLR -> 1:1)\n"
                    f"// Label heuristique : {label}\n"
                    f"// Taille body : {f.getBody().getNumAddresses()} octets\n"
                    f"// Decompile par Ghidra 12.0.4 PUBLIC\n\n"
                )
                out_path = OUT_DIR / f"{addr_str}-{label}.c"
                out_path.write_text(header + code)
                # Petit aperçu
                short = re.sub(r"\s+", " ", code[:200])
                print(f"  -> {out_path}  ({len(code)} chars)  : {short[:100]}…")

            decomp.dispose()
    finally:
        project.close()


if __name__ == "__main__":
    main()
