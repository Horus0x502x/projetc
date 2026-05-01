# Méthodologie

Workflow en 7 phases. Chaque phase = un objectif, un livrable, un commit, une note de labo.

## Phase 0 — Setup

- Workspace structuré (ce repo).
- Tooling vérifié : Ghidra, radare2 / Cutter, GDB + gef/pwndbg, Frida, scanmem, ltrace, strace, file, binwalk.
- Identité git configurée localement.

**Livrable** : `notes/AAAA-MM-JJ-kickoff.md`.

## Phase 1 — Reconnaissance statique

Sans exécuter le jeu, cartographier la surface :

- En-têtes PE / ELF, sections, entropy (détecte le packing).
- Imports : quelles libs Win32 sont appelées (= surfaces d'attaque pour les hooks).
- Strings notables : chemins, URLs, noms de fonctions debug, noms de classes RTTI.
- Symboles s'il y en a (cas du `iw4x-launcher` non strippé).

**Livrables** :
- `recon/01-pe-headers.md`
- `recon/02-strings-triage.md`

## Phase 2 — Reconnaissance dynamique

Le jeu tourne. On observe :

- `/proc/<pid>/maps` parsé et annoté : modules ELF de Wine, modules PE chargés, heaps, JIT.
- Identifier la **base réelle** de chaque module PE dans l'espace d'adressage Linux (clé pour avoir des offsets stables).
- Les premiers `strace -f` / `ltrace` pour comprendre le syscall pattern au lancement.

**Livrables** :
- `scripts/python/maps_parser.py` (parser/annotateur)
- `recon/03-modules-runtime.md`

## Phase 3 — Premier hook

Voir le jeu vivre via Frida :

- Agent Frida 32-bit attaché à `iw4x.exe` sous Wine.
- Hook d'une API Win32 connue (`recv`, `send`, `OpenFile`, `GetTickCount`).
- Traces dans `traces/` (gitignored).

**Livrable** : `scripts/frida/01-trace-win32.js`.

## Phase 4 — Premier scan mémoire

Trouver une valeur observable (santé, munitions, FPS affiché) :

- scanmem / GameConqueror, narrowing classique.
- Documenter l'adresse trouvée (volatile à ce stade — pas encore de pointer chain).

**Livrable** : entrée dans `findings/pointer-chains.md` (état "raw address").

## Phase 5 — Pointer chain stable

Remonter l'adresse volatile vers une base + offsets stable entre relances :

- Identifier la base : `iw4x.dll + 0xXXXX` ou `iw4x.exe + 0xXXXX`.
- Vérification après plusieurs relances et après changement de map.

**Livrable** : entrée stable dans `findings/pointer-chains.md`.

## Phase 6 — Reconstruction de struct

Mapper une classe (entity, player, weapon) :

- ReClass.NET (sous Wine) ou notre propre dumper Python.
- Croiser avec Ghidra (RTTI, vtables) et avec les noms GSC quand applicable.

**Livrable** : `findings/structs/<nom>.json` ou `.h`.

## Phase 7 — Bridge GSC ↔ binaire

Relier un script GSC à son handler natif :

- Trouver une fonction GSC connue (ex: `setHealth`).
- Tracer dans le binaire jusqu'au handler C++ correspondant.
- Documenter le pont script → natif.

**Livrable** : `findings/gsc-bridges/<fonction>.md`.

---

## Pièges Wine / Proton à garder en tête

- **Double ASLR** : ImageBase du PE (Windows) ≠ adresse de mapping Linux. Utiliser l'adresse Linux.
- **Modules PE dans `/proc/<pid>/maps`** : pas de nom évident — repérables par leur taille et leur permissions `r-xp` typiques d'une section `.text`.
- **Frida sur Wine** : `Module.findExportByName()` peut échouer si l'agent confond les modules ELF de Wine avec les modules PE. Souvent il faut résoudre manuellement via le PE header en RAM.
- **Symboles** : les PE de MW2 sont strippés. Le launcher Linux IW4x a `debug_info` → utile pour démarrer.
- **GDB** : attacher à un process Wine fonctionne mais GDB voit la couche Linux. Pour debugger du code PE il faut comprendre que les frames mélangent Wine + code jeu.
