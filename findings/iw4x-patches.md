# Patches IW4x sur iw4x.exe

*Genere par `scripts/python/extract_iw4x_patches.py` depuis `refs/iw4x-client/src/`. **1051 patches** identifies, sans ASLR -> adresses runtime stables.*

## Distribution par type

| Type | Nombre | Effet |
|---|---|---|
| `hook_call_or_jump` | 497 | Trampoline (intercept fct) |
| `hook_set` | 428 | Ecriture de valeur (octet/mot/dword) |
| `hook_nop` | 120 | NOP-out (desactive instruction) |
| `hook_call_simple` | 3 | Trampoline (sans HOOK_TYPE) |
| `hook_setstring` | 3 | Remplace une string en .rdata |

## Top 30 modules IW4x par nombre de patches

| Module | Patches |
|---|---|
| `QuickPatch` | 104 |
| `Weapon` | 92 |
| `Zones` | 60 |
| `Party` | 45 |
| `ArenaLength` | 44 |
| `Console` | 41 |
| `Dedicated` | 36 |
| `ConfigStrings` | 33 |
| `FileSystem` | 33 |
| `FastFiles` | 32 |
| `Network` | 31 |
| `Ceg` | 29 |
| `Dvar` | 29 |
| `GSC` | 29 |
| `ZoneBuilder` | 26 |
| `Maps` | 26 |
| `Gamepad` | 24 |
| `Theatre` | 24 |
| `TextRenderer` | 23 |
| `PlayerMovement` | 22 |
| `Security` | 17 |
| `Branding` | 17 |
| `Stats` | 15 |
| `Playlist` | 15 |
| `Rumble` | 15 |
| `Events` | 14 |
| `UIFeeder` | 12 |
| `Voice` | 11 |
| `ClanTags` | 10 |
| `Threading` | 9 |

## Echantillon — patches Network.cpp

| Adresse | Type | Cible / Valeur | Ligne |
|---|---|---|---|
| `0x004050a1` | hook_set | `125` | 369 |
| `0x004050a5` | hook_set | `125` | 376 |
| `0x00405357` | hook_set | `40` | 372 |
| `0x0040535b` | hook_set | `30` | 375 |
| `0x00435950` | hook_set | `0xC3` | 410 |
| `0x00463c61` | hook_set | `208` | 407 |
| `0x0046531a` | hook_call_or_jump | `PacketErrorCheck` | 382 |
| `0x004698e3` | hook_set | `"%u.%u.%u.%u:%hu"` | 379 |
| `0x0048a135` | hook_set | `0xC3` | 417 |
| `0x0048a151` | hook_set | `0xC3` | 420 |
| `0x0049c220` | hook_set | `0xC3` | 411 |
| `0x004aef08` | hook_set | `0x1FFFC` | 362 |
| `0x004aefa3` | hook_set | `0x1FFFC` | 363 |
| `0x004bd900` | hook_set | `0xC3` | 412 |
| `0x004d36a9` | hook_set | `PROTOCOL` | 402 |
| `0x004d36ae` | hook_set | `PROTOCOL` | 403 |
| `0x004d36b3` | hook_set | `PROTOCOL` | 404 |
| `0x004fb501` | hook_set | `PROTOCOL` | 399 |
| `0x004fd448` | hook_nop | `NOP x5` | 414 |
| `0x004fd48a` | hook_set | `100` | 366 |
| `0x005a9f18` | hook_set | `0xEB` | 392 |
| `0x005a9f77` | hook_set | `0xEB` | 391 |
| `0x005a9ff3` | hook_set | `0xEB` | 393 |
| `0x005aa5b6` | hook_set | `0xEB` | 388 |
| `0x005aa69f` | hook_set | `0xEB` | 389 |

## Note technique

Ces 1487 adresses sont les points exacts où IW4x modifie le binaire iw4x.exe au runtime. Cross-referencees avec notre analyse Ghidra (adresses 1:1 sans ASLR), elles **revelent les fonctions internes patchees par IW4x** :

- `hook_call_or_jump` HOOK_CALL = redirige un appel fonction precise
- `hook_call_or_jump` HOOK_JUMP = remplace une fonction entiere
- `hook_set<uint8_t>(addr, 0xC3)` = injecte un `RET` -> desactive la fct
- `hook_nop(addr, N)` = NOPs N octets (skip un check, neutralise un appel)
- `hook_setstring(addr, ...)` = remplace une string en .rdata

Pour exploiter : prendre une adresse et regarder dans Ghidra ce qu'il y avait avant le patch -> on apprend ce que IW4x neutralise/remplace, donc indirectement ce que le moteur original faisait.