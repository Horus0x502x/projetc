# Projet RE — IW4x / Call of Duty: Modern Warfare 2

Workspace de reverse engineering pédagogique sur le moteur **IW4** (Call of Duty: Modern Warfare 2)
et son client communautaire open-source **IW4x**, exécutés sous Wine/Lutris sur Pop!_OS.

> **Cadre éthique** — IW4x est un projet communautaire légitime (les serveurs IW.net officiels
> ont été coupés par Activision en 2014). Ce repo sert à *apprendre le RE* : analyse de moteur,
> mémoire, hooks, structures. Aucun travail n'est mené pour attaquer des serveurs first-party
> ou contourner un anti-cheat live.

## Layout

| Dossier | Contenu |
|---|---|
| `targets/` | Symlinks relatifs vers les binaires (les fichiers réels restent dans `../CODA/` et `../tools/`) |
| `recon/` | Rapports d'analyse statique de surface (PE headers, strings, modules runtime) |
| `ghidra/` | Projet Ghidra partagé (`.gpr` + `.rep`) |
| `notes/` | Carnet de labo daté (1 fichier par session importante) |
| `scripts/` | Code versionné — `python/`, `frida/`, `gdb/` |
| `findings/` | Résultats stables : chaînes de pointeurs, structs reconstruites |
| `traces/` | Sorties strace/ltrace/Frida — **non versionné** |
| `dumps/` | Dumps mémoire, minidumps — **non versionné** |
| `refs/` | Clones read-only de l'upstream IW4x pour cross-référencer |

## Cibles

Voir [`targets/`](targets/) — symlinks vers :

- `iw4x.exe`, `iw4x.dll` — client IW4x (PE32 x86)
- `iw4mp.exe`, `iw4sp.exe` — MW2 multi/solo originaux (PE32 x86)
- `IW4Vanilla.exe`, `iw4v.dll`, `iw4v-plus.dll` — variantes vanilla+ (PE32 x86)
- `iw4x-launcher` — launcher IW4x (ELF x86-64 Linux, **non strippé**)
- `mw2-raw-gsc/` — scripts GSC du jeu en clair
- `minidumps/` — crash dumps IW4x

## Méthodologie

Voir [`METHODOLOGY.md`](METHODOLOGY.md). Workflow en 7 phases — un commit, une note de labo
et un livrable concret par phase. **On ne saute pas les étapes.**

## Stack installée

| Catégorie | Outils |
|---|---|
| Statique CLI | `radare2 5.5`, `objdump`, `nm`, `strings`, `readelf`, `binwalk` |
| Statique GUI | **Ghidra 12.0.4** (`~/tools/ghidra/ghidraRun`) |
| Dynamique | `gdb 15.1` + **gef** (auto-loaded), `strace`, `ltrace`, `scanmem 0.17` |
| Instrumentation | **frida 17.9** + frida-tools (frida-trace, frida-ps) |
| Python RE | `pefile`, `capstone`, `keystone`, `unicorn`, `lief`, `pwntools`, `ipython` |
| JDK pour Ghidra | OpenJDK 21 |
| Refs | `refs/iw4x-client/` (clone upstream IW4x ; ignoré par git) |

## Démarrer une session

```bash
cd /home/horus/Bureau/G/projetc
source tools/env.sh    # active venv + alias ghidra
```

Une fois `tools/env.sh` sourcé :
- `python3` → utilise le venv (frida, pefile, capstone…)
- `ghidra` → lance Ghidra GUI
- `iw4xpid` → renvoie le PID du process iw4x.exe s'il tourne
- `maps` → cat `/proc/<pid_iw4x>/maps`

## Conventions

- Commits : style **Conventional Commits** — `chore:`, `feat:`, `docs:`, `recon:`, `script:`, `findings:`.
- Toute découverte non triviale → une entrée datée dans `notes/AAAA-MM-JJ-titre.md`.
- Tout terme nouveau (jargon RE, IW.net, GSC, IWD, RTTI…) → une ligne dans `GLOSSARY.md`.
- Architecture **32-bit (x86 / i386)** pour tous les binaires PE — configurer Ghidra, GDB, Frida en conséquence.
