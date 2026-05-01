# Carte des sous-systèmes — IW4 / IW4x

Vue d'ensemble du moteur IW4 (Call of Duty: Modern Warfare 2 + client IW4x), reverse à
partir de `iw4x.exe` (4.7 Mo, code IW4 original strippé) et `iw4x.dll` (3.6 Mo,
client open-source IW4x). **Pas d'ASLR** : toutes les adresses sont stables
entre relances.

| Module | Base RAM | Origine |
|---|---|---|
| `iw4x.exe` | `0x00400000` | code IW4 2009 strippé (Infinity Ward) |
| `iw4x.dll` | `0x10000000` | client IW4x open-source (GitHub Actions) |

**Sources cross-référencées** : `refs/iw4x-client/` (upstream IW4x),
`refs/ioquake3/` (Quake 3 — ancêtre direct du moteur),
`refs/iw4-open-formats/` (décodeurs assets IWI/FF natifs).

---

## 🎮 Renderer (DirectX 9)

Pipeline : **D3D9** (PE Wine) → `wined3d.dll` → **OpenGL** ou Vulkan natif Linux.
Stack dynamique Wine confirmée par les modules chargés (cf. `recon/05-findings-runtime.md`).

| Adresse | Rôle | Source |
|---|---|---|
| `iw4x.exe` (14 fonctions cat. render) | Routines `R_*`, `RB_*`, materials | non décompilé |
| `iw4x.dll:0x100ff16d` | World/D3DBSP parser (12 Ko) | `findings/decompiled/0x100ff16d-world_parser.c` |
| `iw4x.dll:0x100bd117` | Map shader/techset table | `findings/decompiled/0x100bd117-map_techset_table.c` |

## 🔊 Audio (Miles Sound System)

Pipeline : **Miles Sound System** (`mss32.dll` + plugins `.asi`/`.flt`) → `dsound.dll` →
`winepulse.drv` → PulseAudio Linux.

| Adresse | Rôle | Strings |
|---|---|---|
| `iw4x.exe:0x00488e80` | Sound alias loader (1817 oct) | `soundaliases/%s` |
| `iw4x.exe:0x006872a0` | Channel.def parser | `soundaliases/channels.def` |
| `iw4x.exe:0x004aa950` | Detection chaînes circulaires | `Soundalias trying to chain to itself` |
| `iw4x.exe:0x00645300` | Subtitle parser | `soundaliases/subtitle.st`, `LANG_ENGLISH` |
| `iw4x.exe:0x00645220` | StringEd loader | `SUBTITLE_*` |
| `iw4x.exe:0x0057e800-9a0` | Helpers GSC create*Sound | `ent.v["origin"] = (` |

**Notes** : 94 fonctions catégorisées audio dans iw4x.exe. Architecture héritée Q3
(`snd_*`) avec extensions IW propriétaires (Miles).

## 🌐 Network (Q3-style UDP + IW.net)

Pipeline : `ws2_32.dll` (PE) → `ws2_32.so` (Wine) → sockets Linux. **154 fonctions
catégorisées network** dans iw4x.exe.

### IW.net (matchmaking / storage Activision)

Service shutdown par Activision en 2014. Le code subsiste dans `iw4x.exe` (les binaires
sont 2009/2023). **IW4x bypass** ce code via patches (cf. `refs/iw4x-client/src/Components/Modules/Network.cpp`).

| Adresse | Rôle |
|---|---|
| `iw4x.exe:0x004bd190` | Resolve hostnames `iw.net/{matchmaking,storage,ip}` (DEAD) |
| `iw4x.exe:0x004875e0` | `IWNet_Storage_GetFile` |
| `iw4x.exe:0x00681630` | Sender matchmaking/storage/IP commands |
| `iw4x.exe:0x00681c00` | Parser packet IWNet (sequence + command slots) |
| `iw4x.exe:0x004e9910` | `IWNet adding session ... to QoSinfoArray` |
| `iw4x.exe:0x005017f0` | Allocator de commandes IWNet (max pending) |

### Q3-style (Connectionless / OOB)

IW4 utilise le protocole UDP de Quake 3 : packets `connectionless` (préfixe `\xff\xff\xff\xff`),
sequence numbers, etc. Détecté via 38 fonctions network dans `iw4x.dll` qui appellent
`WS2_32.DLL!recv/send/sendto`.

| Référence Q3 | Source |
|---|---|
| `Sys_GetPacket`, `NET_OutOfBandPrint` | `refs/ioquake3/code/qcommon/net_chan.c` |
| Format packet OOB : `\xff\xff\xff\xff<command>\n<data>` | id Tech 3 standard |

## 📂 Filesystem (Q3 FS_*)

Système de pak files identique à Quake 3 (Q3-PAK = `.pk3`, IW4 = `.iwd`/`.ff`). 5 fonctions
catégorisées filesystem dans iw4x.exe.

| Adresse | Fonction (déduit du string) |
|---|---|
| `iw4x.exe:0x0043fd90` | **`FS_FOpenFileWrite`** |
| `iw4x.exe:0x00410bb0` | **`FS_FOpenFileAppend`** |
| `iw4x.exe:0x00412200` | **`FS_FOpenFileOverWrite`** |
| `iw4x.exe:0x00642250` | autre `FS_FOpenFileWrite` (variante MP ?) |

À identifier (cible high-value) : **`FS_ReadFile`** (déchiffrement effectif des assets,
mentionné dans `findings/iw4x-cross-ref.md`).

**Streaming live** confirmé par Frida #03 : 322 reads de 16 Ko sur fd `iw_15.iwd` /
`iw_16.iwd` pendant le gameplay → assets chargés à la volée depuis les IWD.

## 📜 Script engine (GSC)

Le moteur GSC d'Infinity Ward — script propriétaire, dérivé d'id Tech avec syntaxe propre.
Sources GSC du jeu : `tools/mw2-raw-gsc/` (extraites en clair). 7 fonctions catégorisées
scriptengine dans iw4x.exe + plus dans iw4x.dll.

| Adresse | Rôle | Source IW4x |
|---|---|---|
| `iw4x.dll:0x1005e6b0` | **`ScriptError::AddOpcodePos`** (116 callers) | `Components/Modules/GSC/ScriptError.cpp:551` |

À identifier : `Scr_GetType`, `Scr_GetString`, `Scr_AddString`, `OP_*` opcodes,
parser GSC (lex/yacc).

## ⚙️ Command system (Quake 3)

Console commands enregistrées via `Cmd_AddCommand`. **294 callers** (= 294 commandes
console enregistrées au boot).

| Adresse | Fonction |
|---|---|
| `iw4x.exe:0x00470090` | **`Cmd_AddCommand`** (294 callers) |
| `iw4x.exe:0x004dce00` | **`Cmd_AddServerCommand`** (29 callers) |
| `iw4x.exe:0x0048f660` | helper `cmdlist` |

**Hook `Cmd_AddCommand` au boot** = capture de toute l'API console du jeu.
Cible Frida idéale (cf. `scripts/frida/04-trace-commands.js` à venir).

## 📊 DVAR system (Q3 cvar)

Variables runtime configurables via console (`/cg_drawFPS 1` etc.). 2 fonctions
catégorisées dvar dans iw4x.exe.

| Adresse | Fonction |
|---|---|
| `iw4x.exe:0x004f1bf0` | helper `toggle/togglep/reset` (304 oct) |

À identifier : `Dvar_RegisterBool/Int/Float/String`, `Dvar_SetVariant`, `Dvar_Find`.

## 🛡️ Crypto / Anti-cheat

**Themida** détecté sur `iw4v-plus.dll` (cf. `recon/00-findings-clefs.md`). Pas d'analyse
en cours.

Stack TLS : `bcrypt.dll`, `schannel.dll`, `rsaenh.dll` côté Windows → `libgnutls` côté
Linux (Wine traduit).

## 📦 Asset formats

| Format | Type | Décodeur disponible |
|---|---|---|
| `.iwd` | ZIP renommé (assets compressés) | `unzip` standard |
| `.ff` (FastFile) | Bundle compilé (assets binaires + GSC) | `refs/iw4-open-formats/` |
| `.iwi` | Texture (DXT / D3D format) | `refs/iw4-open-formats/` |
| `.d3dbsp` | Map BSP (géométrie) | dans `.ff`, parser dans `iw4x.dll` |

---

## Index global des binaires

| Binaire | Fonctions Ghidra | Cat. principales |
|---|---|---|
| `iw4x.exe` (4.7 Mo) | 11 479 | network 154, audio 94, render 14, scriptengine 7, fs 5, cmd 3, dvar 2 |
| `iw4x.dll` (3.6 Mo) | 15 207 | network 38, render 4, scriptengine 1 |
| `iw4v.dll` (3.5 Mo) | en cours | (sera comparé via diaphora à `iw4x.dll`) |
| `iw4x-launcher` (ELF Linux) | non analysé | symboles complets, JSON5+SQLite+curl statiques |

Plus de détails par binaire :
- `findings/iw4x.exe-functions.json` + `findings/iw4x.exe-interesting-functions.md`
- `findings/iw4x-functions.json` + `findings/iw4x-interesting-functions.md`
- `findings/iw4v.dll-functions.json` + `findings/iw4v.dll-interesting-functions.md`
- `findings/iw4x-cross-ref.md` (correspondances binaire↔source)
- `findings/iw4x-symbols.json` (915 symboles nommés depuis le source IW4x)
- `findings/iw4x-patches.md` (1051 patches IW4x dans iw4x.exe)
- `findings/iw4v-fork-analysis.md` (fork "scfge/eliott")
- `findings/iw4v-vs-iw4x-diff.md` (diff DLLs)
- `findings/q3-engine-structures.md` (playerState_s, gentity_s, etc.)
- `findings/iw4x-security-analysis.md` (16 patches anti-exploit, défensif)
- `findings/render-pipeline.md` (pipeline D3D9 + R_/RB_ functions)

## État du projet

- **15+ commits** sur `main`, repo public à <https://github.com/Horus0x502x/projetc>
- **3 binaires PE analysés** dans Ghidra : iw4x.dll (15207 fns), iw4x.exe (11479 fns), iw4v.dll (14240 fns)
- **746 fonctions iw4x.exe nommées** (Q3-style : Cmd_*, FS_*, CL_*, SV_*, Com_*, Scr_*, R_*)
- **1051 patches IW4x** sur iw4x.exe documentés (adresse + module + type)
- **24 fonctions** décompilées en pseudo-C lisible
- **5 agents Frida** : libc-net, internals, gameplay-mega, commands, named
- **Pipeline complète** statique → dynamique → cross-réf source IW4x
