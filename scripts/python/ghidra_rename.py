#!/usr/bin/env python3
"""Renomme les fonctions Ghidra d'iw4x.exe avec les noms du source IW4x.

Lit findings/iw4x-symbols.json (mapping addr -> nom verifie) et applique
chaque renaming via la pyghidra API.

Usage : .venv/bin/python3 scripts/python/ghidra_rename.py
"""

import json
import os
from pathlib import Path

PROJECT_PATH = Path("ghidra/iw4x-project").resolve()
PROJECT_NAME = "iw4x"

os.environ.setdefault("GHIDRA_INSTALL_DIR", os.path.expanduser("~/tools/ghidra"))
import pyghidra  # noqa: E402

pyghidra.start()

from ghidra.program.model.symbol import SourceType  # noqa: E402


def main():
    syms = json.loads(Path("findings/iw4x-symbols.json").read_text())["symbols"]
    # On ne traite que les symboles dans la range iw4x.exe.
    exe_syms = [s for s in syms if 0x400000 <= s["addr_int"] <= 0x800000]
    print(f"[*] {len(exe_syms)} symboles a appliquer dans iw4x.exe")

    project = pyghidra.open_project(
        path=str(PROJECT_PATH), name=PROJECT_NAME, create=False)
    try:
        with pyghidra.program_context(project, "/iw4x.exe") as program:
            fm = program.getFunctionManager()
            af = program.getAddressFactory()
            tx = program.startTransaction("Rename from IW4x source comments")

            renamed = 0
            skipped_no_func = 0
            already_named = 0

            for s in exe_syms:
                addr = af.getAddress(hex(s["addr_int"]))
                f = fm.getFunctionAt(addr)
                if f is None:
                    skipped_no_func += 1
                    continue
                cur_name = f.getName()
                if not cur_name.startswith("FUN_"):
                    already_named += 1
                    continue
                new_name = s["name"]
                # Pour eviter les collisions, on prefixe avec _ si deja existant
                # (Ghidra accepte juste les noms uniques globalement... ou pas).
                try:
                    f.setName(new_name, SourceType.USER_DEFINED)
                    renamed += 1
                except Exception as e:
                    # Tentative avec un suffixe d'addr pour collisions
                    try:
                        f.setName(f"{new_name}_{s['addr_int']:08x}",
                                  SourceType.USER_DEFINED)
                        renamed += 1
                    except Exception as e2:
                        print(f"  [!] {s['addr']} {new_name}: {e2}")

            program.endTransaction(tx, True)
            print(f"[+] renamed     : {renamed}")
            print(f"[+] already named: {already_named}")
            print(f"[+] no function : {skipped_no_func}")
            program.save(None, None)  # save() may need monitor in newer API
    finally:
        project.close()


if __name__ == "__main__":
    main()
