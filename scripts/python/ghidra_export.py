#!/usr/bin/env python3
"""Export d'un index JSON enrichi des fonctions découvertes par Ghidra.

Utilise pyghidra (Python 3 + JPype) pour ouvrir un projet Ghidra existant.
Pour chaque fonction, en plus des métadonnées de base, extrait :
- les strings référencées (échantillon)
- les imports appelés (DLL!func)
- une catégorie déduite des strings/imports/nom

Usage :
    .venv/bin/python3 scripts/python/ghidra_export.py
"""

import json
import os
import sys
from pathlib import Path

import sys

PROJECT_PATH = Path("ghidra/iw4x-project").resolve()
PROJECT_NAME = "iw4x"

# Permet : ghidra_export.py iw4x.exe  -> findings/iw4x.exe-functions.json
_arg = sys.argv[1] if len(sys.argv) > 1 else "iw4x.dll"
BINARY = Path(f"targets/{_arg}").resolve()
OUT = Path(f"findings/{_arg}-functions.json")

os.environ.setdefault("GHIDRA_INSTALL_DIR", os.path.expanduser("~/tools/ghidra"))

import pyghidra  # noqa: E402

pyghidra.start()


# Catégorisation heuristique par fragment de nom (attendus surtout dans les
# fonctions exportées + symboles laissés par PDB le cas échéant).
# Catégorisation par fragments — appliquée au nom de fonction, aux strings
# référencées et aux imports appelés. Dans cet ordre, dès qu'un match est
# trouvé on retourne la catégorie. Ordre = priorité.
CATEGORIES = [
    ("scriptengine", ["Scr_", "GScr_", "Script_", "scrVm", "scr_const",
                      "OpCode", "g_script", "compileFile", "VM_Notify"]),
    ("network",      ["recv", "send", "socket", "connect", "Net_",
                      "NET_", "packet", "Packet", "Connectionless",
                      "OOB", "ws2_32", "WSA", "Sys_GetPacket"]),
    ("log",          ["Com_Print", "Com_Error", "Sys_Print", "Sys_Error",
                      "PrintWarning", "Cmd_Printf", "Log_Print"]),
    ("filesystem",   ["FS_FOpen", "FS_Read", "FS_Write", "FS_Close",
                      "FS_Seek", "FS_Delete", "FS_LoadFile", "FS_Path"]),
    ("render",       ["R_Add", "R_Init", "R_Set", "R_Draw", "R_Tess",
                      "RB_", "GfxBuf", "Material_", "TextureFromMemory",
                      "d3d9", "D3D9", "wined3d"]),
    ("audio",        ["Snd_", "MSS", "Miles", "DSound", "AIL_"]),
    ("input",        ["IN_Mouse", "IN_Key", "IN_Joy", "IN_Update",
                      "Cl_Mouse", "Cl_Key", "Sys_GetInputEvent"]),
    ("crypto",       ["bcrypt", "schannel", "BCrypt", "SHA", "MD5",
                      "AES_", "RC4_"]),
    ("dvar",         ["Dvar_", "dvar_"]),
    ("cmd",          ["Cmd_Add", "Cmd_Exec", "Cmd_Argc", "Cmd_Argv"]),
]


def categorize(name: str, strings: list[str], imports: list[str]) -> str:
    haystack = " | ".join([name] + strings + imports)
    for cat, fragments in CATEGORIES:
        for frag in fragments:
            if frag in haystack:
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
        with pyghidra.program_context(project, f"/{_arg}") as program:
            fm = program.getFunctionManager()
            refs = program.getReferenceManager()
            listing = program.getListing()

            def extract_strings_and_imports(func):
                """Parcours des instructions : collecte strings refs + imports."""
                strings = []
                imports = []
                seen_str = set()
                seen_imp = set()
                instructions = listing.getInstructions(func.getBody(), True)
                while instructions.hasNext():
                    instr = instructions.next()
                    for ref in instr.getReferencesFrom():
                        target = ref.getToAddress()
                        # Call vers fonction → check si externe (import)
                        if ref.getReferenceType().isCall():
                            target_func = fm.getFunctionAt(target)
                            if target_func is None:
                                continue
                            # Suit les thunks jusqu'à la cible finale
                            while target_func.isThunk():
                                target_func = target_func.getThunkedFunction(False)
                                if target_func is None: break
                            if target_func and target_func.isExternal():
                                lib = target_func.getExternalLocation().getLibraryName()
                                full = f"{lib}!{target_func.getName()}"
                                if full not in seen_imp:
                                    seen_imp.add(full)
                                    imports.append(full)
                            continue
                        # Ref de données → check si string
                        data = listing.getDataAt(target)
                        if data is None:
                            continue
                        dt = data.getDataType().getName()
                        if "string" in dt.lower() or dt in ("unicode", "char[]"):
                            try:
                                val = str(data.getValue())
                                if 4 <= len(val) <= 100 and val not in seen_str:
                                    seen_str.add(val)
                                    strings.append(val)
                            except Exception:
                                pass
                return strings[:8], imports[:8]

            out = []
            print(f"[*] indexation de {fm.getFunctionCount()} fonctions...")
            count = 0
            for f in fm.getFunctions(True):
                addr = f.getEntryPoint()
                body = f.getBody()
                try:
                    callers = sum(1 for _ in refs.getReferencesTo(addr))
                except Exception:
                    callers = 0
                name = f.getName()
                strings, imports = extract_strings_and_imports(f)
                out.append({
                    "name": name,
                    "addr": "0x%08x" % addr.getOffset(),
                    "size": int(body.getNumAddresses()),
                    "callers": callers,
                    "is_thunk": bool(f.isThunk()),
                    "is_external": bool(f.isExternal()),
                    "strings": strings,
                    "imports": imports,
                    "category": categorize(name, strings, imports),
                })
                count += 1
                if count % 2000 == 0:
                    print(f"    {count}/{fm.getFunctionCount()}...")

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
