# Findings runtime (Phase 2)

Capture initiale : `04-runtime-maps-iw4x.exe-20260501-034042.md` (PID 90170, jeu au menu).

## 🎯 Pas d'ASLR sur les modules PE

**50 modules PE sur 65 chargés exactement à leur ImageBase déclarée** (delta = 0).
Notamment :

| Module | Base runtime | Δ ASLR |
|---|---|---|
| **`iw4x.exe`** | `0x00400000` | **0** |
| **`iw4x.dll`** | `0x10000000` | **0** |
| `kernel32.dll` | `0x7b600000` | 0 |
| `ntdll.dll` | `0x7bc00000` | 0 |
| `ws2_32.dll` | `0x643c0000` | 0 |
| `wininet.dll` | `0x6c100000` | 0 |
| `d3d9.dll` | `0x6f1c0000` | 0 |
| `dbghelp.dll` | `0x70000000` | 0 |

**Conséquence majeure** : on peut charger `iw4x.dll` dans Ghidra avec son ImageBase
`0x10000000` et **toutes les adresses Ghidra correspondent directement aux adresses
runtime**. Aucun calcul de relocation. Les pointer chains seront triviales :
`0x10XXXXXX` = adresse stable dans `iw4x.dll`, `0x004XXXXX` = adresse stable dans
`iw4x.exe`.

Les 15 modules avec relocation sont tous du même genre :
- conflicts d'ImageBase (plusieurs DLL veulent `0x10000000` → Wine relocate)
- modules audio Miles (`mss*.flt`, `mss*.asi`) qui ne tiennent pas leur base
- `wow64cpu.dll` relogé bas (`0x00110000`)

Aucun de ces modules relocés n'est notre cible RE prioritaire — on est tranquilles.

## Architecture WOW64 confirmée

Présence de :
- `wow64cpu.dll` à `0x00110000`
- `wine-preloader` (ELF natif)
- `apisetschema.dll`

→ Wine 64-bit héberge un process 32-bit. Frida doit donc opérer en mode 32-bit pour
le code PE. Pas un souci, frida-tools s'en occupe automatiquement.

## Empreinte mémoire

| Type | Nombre | Volume |
|---|---|---|
| Modules PE Windows | 65 | ~250 Mo |
| Modules ELF natifs | 118 | ~150 Mo (libvulkan, libgnutls, libstdc++…) |
| **Régions anonymes** | **576** | **1,8 Go** |
| Heap Linux | 1 | 2,3 Mo (juste pour le loader) |
| Stack | 1 | 132 Ko |
| Autres fichiers | 36 | (assets, .iwd) |

**1,8 Go de mappings anonymes** = c'est là que vit *tout* l'état du jeu (entities,
players, weapons, world, audio buffers, GPU staging). C'est la zone que `scanmem`
balaiera quand on cherchera une valeur. Le heap Linux est négligeable, tout passe par
`VirtualAlloc` côté PE qui sort des mappings anonymes côté kernel.

## Stack technique du runtime

Visible via les modules chargés :

- **Graphique** : `d3d9.dll` → `wined3d.dll` → `opengl32.dll` → `libvulkan_asahi.so`
  (Wine traduit DX9 vers OpenGL ; libvulkan présent suggère un pilote Vulkan
  disponible mais pas utilisé directement par le jeu)
- **Audio** : Miles Sound System (`mss32.dll`, `mssvoice.asi`, `mssmp3.asi`,
  `milesEq.flt`, `mssds3d.flt`, etc.) → `dsound.dll` → `winepulse.drv` →
  PulseAudio Linux
- **Réseau** : `ws2_32.dll`, `wininet.dll`, `iphlpapi.dll`, `dnsapi.dll` →
  `ws2_32.so` (translateur Wine) → sockets Linux
- **Crypto/TLS** : `bcrypt.dll`, `schannel.dll`, `rsaenh.dll`, `crypt32.dll`,
  `kerberos.dll` → côté Linux `libgnutls.so.30`
- **Debug** : `dbghelp.dll` chargée → cohérent avec génération de minidumps

## Décisions actées

1. **Charger `iw4x.dll` dans Ghidra avec ImageBase = `0x10000000`** dès la prochaine
   session statique — adresses 1:1 avec runtime.
2. **Frida hook OK** — frida voit le process `iw4x.exe` (vérifié via `frida-ps`,
   PID 90170 visible). Pas besoin de tooling supplémentaire.
3. **scanmem ciblera les anonymes** — ne pas perdre de temps à scanner les
   modules PE (read-only ou data petite) ni le heap Linux. Filtrer sur les régions
   `rwxp` / `rw-p` anonymes.
4. **Re-capturer une carte mémoire après une partie en cours** (pas juste menu) pour
   voir comment la stack mémoire grandit avec une map chargée.
