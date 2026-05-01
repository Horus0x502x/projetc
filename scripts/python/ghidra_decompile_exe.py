#!/usr/bin/env python3
"""Décompile les fonctions clés d'iw4x.exe identifiees par signatures de strings.

Sortie : findings/decompiled/iw4x.exe-<addr>-<label>.c
"""

import os
from pathlib import Path

PROJECT_PATH = Path("ghidra/iw4x-project").resolve()
PROJECT_NAME = "iw4x"
OUT_DIR = Path("findings/decompiled")

# Cibles confirmées par signature de strings dans iw4x.exe-interesting-functions.md
TARGETS = [
    # === Command system ===
    ("0x00470090", "Cmd_AddCommand"),         # 294 callers, central
    ("0x004dce00", "Cmd_AddServerCommand"),
    ("0x0048f660", "cmdlist_helper"),

    # === Filesystem ===
    ("0x0043fd90", "FS_FOpenFileWrite"),
    ("0x00410bb0", "FS_FOpenFileAppend"),
    ("0x00412200", "FS_FOpenFileOverWrite"),
    ("0x00642250", "FS_FOpenFileWrite_alt"),

    # === DVAR ===
    ("0x004f1bf0", "Dvar_toggle_helper"),    # toggle/togglep/reset

    # === IWNet (matchmaking shutdown 2014) ===
    ("0x004bd190", "IWNet_ResolveHostnames"),
    ("0x004875e0", "IWNet_Storage_GetFile"),
    ("0x00681630", "IWNet_SendCommand"),
    ("0x00681c00", "IWNet_ParsePacket"),
    ("0x004e9910", "IWNet_QoSinfoArray"),
    ("0x005017f0", "IWNet_AllocCommand"),

    # === Audio ===
    ("0x00488e80", "SoundAlias_Loader"),
    ("0x006872a0", "ChannelDef_Parser"),
    ("0x00645300", "Subtitle_Parser"),
    ("0x004aa950", "SoundAlias_ChainCheck"),
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
        with pyghidra.program_context(project, "/iw4x.exe") as program:
            fm = program.getFunctionManager()
            af = program.getAddressFactory()
            decomp = DecompInterface()
            decomp.openProgram(program)
            monitor = ConsoleTaskMonitor()

            for addr_str, label in TARGETS:
                addr = af.getAddress(addr_str)
                f = fm.getFunctionAt(addr)
                if f is None:
                    print(f"[!] {addr_str}  pas de fonction")
                    continue
                size = f.getBody().getNumAddresses()
                print(f"[*] {addr_str}  {label}  ({size} oct)")
                result = decomp.decompileFunction(f, 60, monitor)
                if not result.decompileCompleted():
                    print(f"  [!] echec : {result.getErrorMessage()}")
                    continue
                code = result.getDecompiledFunction().getC()
                header = (
                    f"// iw4x.exe!{label}  @  {addr_str}\n"
                    f"// taille body : {size} octets\n"
                    f"// pas d'ASLR -> adresse identique au runtime\n"
                    f"// decompile par Ghidra 12.0.4 PUBLIC\n\n"
                )
                out_path = OUT_DIR / f"iw4x.exe-{addr_str}-{label}.c"
                out_path.write_text(header + code)
                print(f"  -> {out_path}  ({len(code)} chars)")

            decomp.dispose()
    finally:
        project.close()


if __name__ == "__main__":
    main()
