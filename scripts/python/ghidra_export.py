#!/usr/bin/env python3
"""Export d'un index JSON des fonctions découvertes par Ghidra.

Utilise pyghidra (Python 3 + JPype) pour ouvrir un projet Ghidra existant et
parcourir le FunctionManager. Plus pratique que les scripts Jython 2.7
historiques, et compatible avec notre venv.

Sortie : findings/iw4x-functions.json — pour chaque fonction :
- nom (FUN_xxxx, ou démangé / symbol si présent)
- adresse, taille (en bytes), nombre de callers
- nombre de strings référencées (heuristique : refs vers des données string)
- catégorie heuristique (network / log / scriptengine / autre) basée sur le nom

Usage :
    .venv/bin/python3 scripts/python/ghidra_export.py
"""

import json
import os
import sys
from pathlib import Path

PROJECT_PATH = Path("ghidra/iw4x-project").resolve()
PROJECT_NAME = "iw4x"
BINARY = Path("targets/iw4x.dll").resolve()
OUT = Path("findings/iw4x-functions.json")

os.environ.setdefault("GHIDRA_INSTALL_DIR", os.path.expanduser("~/tools/ghidra"))

import pyghidra  # noqa: E402

pyghidra.start()


# Catégorisation heuristique par fragment de nom (attendus surtout dans les
# fonctions exportées + symboles laissés par PDB le cas échéant).
CATEGORIES = {
    "network": ["recv", "send", "socket", "connect", "Net_", "NET_",
                "packet", "Packet", "msg_", "Msg_"],
    "log": ["Print", "print", "log", "Log", "Com_Print", "Sys_Print",
            "Error", "Warning"],
    "scriptengine": ["Scr_", "Script", "GScr_", "VM_", "OpCode"],
    "filesystem": ["FS_", "File", "Read", "Write", "Open"],
    "render": ["R_", "GFX_", "Draw", "Render", "Material"],
    "audio": ["Snd_", "Sound", "Mss_", "Miles"],
    "input": ["IN_", "Input", "Cl_Mouse", "Cl_Key"],
}


def categorize(name: str) -> str:
    for cat, fragments in CATEGORIES.items():
        if any(f in name for f in fragments):
            return cat
    return "other"


def main():
    # API moderne : open_project() puis program_context() pour réutiliser
    # l'analyse déjà faite par analyzeHeadless.
    project = pyghidra.open_project(
        path=str(PROJECT_PATH),  # ghidra/iw4x-project (contient iw4x.gpr)
        name=PROJECT_NAME,        # "iw4x"
        create=False,
    )
    try:
        with pyghidra.program_context(project, "/iw4x.dll") as program:
            fm = program.getFunctionManager()
            refs = program.getReferenceManager()

            out = []
            for f in fm.getFunctions(True):
                addr = f.getEntryPoint()
                body = f.getBody()
                try:
                    callers = sum(1 for _ in refs.getReferencesTo(addr))
                except Exception:
                    callers = 0
                name = f.getName()
                out.append({
                    "name": name,
                    "addr": "0x%08x" % addr.getOffset(),
                    "size": int(body.getNumAddresses()),
                    "callers": callers,
                    "is_thunk": bool(f.isThunk()),
                    "is_external": bool(f.isExternal()),
                    "category": categorize(name),
                })

            out.sort(key=lambda f: -f["size"])

            report = {
                "program": program.getName(),
                "image_base": "0x%x" % program.getImageBase().getOffset(),
                "function_count": len(out),
                "by_category": {},
                "functions": out,
            }
            for f in out:
                report["by_category"][f["category"]] = \
                    report["by_category"].get(f["category"], 0) + 1

            OUT.parent.mkdir(parents=True, exist_ok=True)
            OUT.write_text(json.dumps(report, indent=2))
            print(f"[+] {len(out)} fonctions -> {OUT}")
            print(f"[+] catégories : {report['by_category']}")
            print("\n[+] top 10 par taille :")
            for f in out[:10]:
                print(f"    {f['addr']}  {f['size']:>6}  cat={f['category']:<12} "
                      f"callers={f['callers']:>3}  {f['name']}")
    finally:
        project.close()


if __name__ == "__main__":
    main()
