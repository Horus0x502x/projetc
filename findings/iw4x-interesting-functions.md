# Fonctions intéressantes — `iw4x.dll`

*Généré depuis `iw4x-functions.json` (15207 fonctions, ImageBase 0x10000000). Toutes les adresses correspondent 1:1 au runtime (pas d'ASLR).*

## 🎯 Fonctions remarquables (15)

Auto-détectées par signature de strings. À ouvrir en priorité dans Ghidra.

| Adresse | Taille | Callers | Label | Strings clés |
|---|---|---|---|---|
| `0x100dbb62` | 58,166 | 2 | **WeaponDef parser** | `szInternalName`, `szDisplayName`, `hideTags` |
| `0x100e9e98` | 35,065 | 2 | **WeaponDef parser** | `weapon`, `szInternalName`, `szDisplayName` |
| `0x100ff16d` | 12,678 | 1 | **D3DBSP/world parser** | `version`, `isInUse`, `planes` |
| `0x10137efc` | 6,233 | 1 | **Protobuf serializer** | `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\wire_format.cc`, `Invalid descriptor`, `serializing` |
| `0x100c2282` | 5,890 | 1 | **Asset decrypter** | `decryptImages`, `decryptSounds` |
| `0x101b7a89` | 5,325 | 3 | **IEEE float printer** | `1#IND`, `1#SNAN`, `1#QNAN` |
| `0x100bd117` | 5,268 | 1 | **Map shader/techset** | `wc_unlit_add`, `wc_unlit_multiply`, `mp_conflict` |
| `0x10136dad` | 2,031 | 3 | **Protobuf serializer** | `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\wire_format.cc`, `Can't reach`, `parsing` |
| `0x1013f0c9` | 657 | 2 | **Protobuf serializer** | ` a protocol buffer. Use the 'bytes' type if you intend to send raw bytes. `, ` contains invalid UTF-8 data when `, `String field` |
| `0x1013771f` | 548 | 1 | **Protobuf serializer** | `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\wire_format.cc`, `Unsupported` |
| `0x1005e6b0` | 428 | 116 | **GSC compiler/VM** | `MAX_OPCODE_LOOKUP_SIZE exceeded`, `MAX_SOURCEPOS_LOOKUP_SIZE exceeded` |
| `0x100f6bc9` | 426 | 1 | **Sound system** | `(?:\.v\["soundalias"\] *= *"(.+)")` |
| `0x10139cc9` | 366 | 2 | **Protobuf serializer** | `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\wire_format.cc`, `Unsupported`, `Cannot get here` |
| `0x10139b2d` | 340 | 2 | **Protobuf serializer** | `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\wire_format.cc`, `Unsupported`, `Cannot get here` |
| `0x10137d17` | 339 | 16 | **Protobuf serializer** | `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\wire_format.cc`, `Invalid key for map field.` |

## 📦 Top 30 fonctions par taille

Les plus grosses fonctions sont typiquement des parsers, des dispatchers ou des state machines centrales.

| Adresse | Taille | Callers | Cat. | Strings | Imports |
|---|---|---|---|---|---|
| `0x100dbb62` | 58,166 | 2 | other | `szInternalName`, `szDisplayName`, `hideTags` | — |
| `0x100e9e98` | 35,065 | 2 | other | `weapon`, `szInternalName`, `szDisplayName` | — |
| `0x100ff16d` | 12,678 | 1 | other | `version`, `isInUse`, `planes` | — |
| `0x100ba0c1` | 10,286 | 1 | other | — | — |
| `0x1019a367` | 7,423 | 2 | other | — | — |
| `0x1010ef29` | 6,537 | 4 | other | — | — |
| `0x10137efc` | 6,233 | 1 | other | `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\wire_format.cc`, `Invalid descriptor`, `serializing` | — |
| `0x100c2282` | 5,890 | 1 | other | `decryptImages`, `decryptSounds` | — |
| `0x101b7a89` | 5,325 | 3 | other | `1#IND`, `1#SNAN`, `1#QNAN` | — |
| `0x100bd117` | 5,268 | 1 | other | `wc_unlit_add`, `wc_unlit_multiply`, `mp_conflict` | — |
| `0x1017d3ee` | 5,189 | 3 | other | `unknown compression method`, `invalid window size`, `incorrect header check` | — |
| `0x10174c75` | 5,185 | 2 | other | `Could not find type "`, `" stored in google.protobuf.Any.`, `Non-repeated Any specified multiple times.` | — |
| `0x1019078a` | 4,929 | 64 | other | — | — |
| `0x100fa6c9` | 4,781 | 1 | other | `version`, `Wrong FX version for {}! expected {} and got {}!`, `flags` | — |
| `0x10152581` | 4,429 | 2 | other | `Reserved numbers must be positive integers.`, `Reached maximum recursion limit for nested messages.`, `google.protobuf.MessageOptions` | — |
| `0x10084be3` | 4,084 | 1 | network | `matchtype`, `securityLevel`, `usermaphash` | — |
| `0x100bff3f` | 4,037 | 1 | other | — | — |
| `0x1014c36e` | 3,644 | 2 | other | `$0message $1`, `$0  extensions $1 to $2;
`, `$0  }
` | — |
| `0x10141c3c` | 3,565 | 2 | other | `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\extension_set.cc`, `Non-primitive types can't be packed.` | — |
| `0x100a28f4` | 3,438 | 1 | other | `ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890` | — |
| `0x1002409b` | 3,256 | 1 | other | — | — |
| `0x10002fe0` | 3,154 | 1 | render | `Use extended d3d9 interface!`, `r_useD3D9Ex`, `dumpmap` | — |
| `0x10156061` | 3,149 | 3 | other | `" is not a message type.`, `google.protobuf.bridge.MessageSet`, `"$0" does not declare $1 as an extension number.` | — |
| `0x10083fa9` | 3,130 | 1 | other | `sv_securityLevel`, `challenge`, `gamename` | — |
| `0x10113692` | 3,044 | 4 | other | — | — |
| `0x100a6d67` | 2,958 | 1 | other | `Automatically record games`, `cl_autoRecord`, `How many demos to keep with autorecord` | — |
| `0x101536ce` | 2,937 | 3 | other | `The [proto3_optional=true] option may only be set on proto3fields, not `, `The extension `, ` cannot be required.` | — |
| `0x101bcf10` | 2,887 | 1 | other | — | — |
| `0x10015130` | 2,833 | 1 | other | — | — |
| `0x101519cb` | 2,833 | 1 | other | `Missing field: FileDescriptorProto.name.`, `proto2`, `proto3` | — |

## 📁 Par catégorie

### `network` — 38

| Adresse | Taille | Callers | Strings/Imports |
|---|---|---|---|
| `0x10084be3` | 4,084 | 1 | `matchtype`, `securityLevel` |
| `0x10072c82` | 2,017 | 1 | `delayReconnect`, `GetMapList` |
| `0x1002b0ce` | 1,503 | 1 | `Failed connect attempt from IP address: {}
`, `error
Invalid connect packet!` |
| `0x100838ce` | 1,382 | 1 | `Enable party system`, `party_enable` |
| `0x10032f81` | 887 | 1 | `Randomize the bots' names`, `sv_randomBotNames` |
| `0x1008a623` | 791 | 1 | `Invalid packet from IP address: {}
`, `Invalid RCon request from {}
` |
| `0x1013f0c9` | 657 | 2 | ` a protocol buffer. Use the 'bytes' type if you intend to send raw bytes. `, ` contains invalid UTF-8 data when ` |
| `0x10121f59` | 639 | 1 | `mg_open_listener`, `invalid listening URL: %s`, `WS2_32.DLL!socket`, `WS2_32.DLL!WSAGetLastError` |
| `0x10040f6c` | 610 | 2 | `openmenu mod_download_popmenu`, `password` |
| `0x101225fb` | 610 | 1 | `socket error`, `WS2_32.DLL!select`, `KERNEL32.DLL!Sleep` |
| `0x1012285d` | 547 | 1 | `mg_mgr_poll`, `%lu %c%c %c%c%c%c%c`, `KERNEL32.DLL!GetTickCount`, `WS2_32.DLL!getpeername` |
| `0x1008a07f` | 460 | 1 | `login`, `logout` |
| `0x1008a24b` | 419 | 1 | `Usage: {} <command>
`, `rconSafe` |
| `0x1003b914` | 367 | 1 | `connect`, `KERNEL32.DLL!ExitProcess` |
| `0x100ac053` | 359 | 1 | `Received invalid voice packet of size {} from {}
` |
| … | (23 autres) | | |

### `render` — 4

| Adresse | Taille | Callers | Strings/Imports |
|---|---|---|---|
| `0x10002fe0` | 3,154 | 1 | `Use extended d3d9 interface!`, `r_useD3D9Ex` |
| `0x1001d3d9` | 581 | 80 | — |
| `0x1003eae6` | 84 | 1 | `D3D9.DLL!Direct3DCreate9Ex`, `D3D9.DLL!Direct3DCreate9` |
| `0x101d3d9d` | 39 | 1 | — |

### `scriptengine` — 1

| Adresse | Taille | Callers | Strings/Imports |
|---|---|---|---|
| `0x10060bf0` | 104 | 1 | `Scr_RandomFloatRange parms: %f %f `, `ClearHudText` |

### `crypto` — 1

| Adresse | Taille | Callers | Strings/Imports |
|---|---|---|---|
| `0x10118fc8` | 56 | 3 | `BCRYPT.DLL!BCryptGenRandom` |

### `other` — 15,163 (non listées)
