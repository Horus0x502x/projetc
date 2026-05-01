# Fonctions intéressantes — `iw4x.dll`

*Généré depuis `iw4v.dll-functions.json` (14240 fonctions, ImageBase 0x10000000). Toutes les adresses correspondent 1:1 au runtime (pas d'ASLR).*

## 🎯 Fonctions remarquables (8)

Auto-détectées par signature de strings. À ouvrir en priorité dans Ghidra.

| Adresse | Taille | Callers | Label | Strings clés |
|---|---|---|---|---|
| `0x100cb76e` | 58,162 | 2 | **WeaponDef parser** | `szInternalName`, `szDisplayName`, `hideTags` |
| `0x100d9aa5` | 34,978 | 2 | **WeaponDef parser** | `weapon`, `szInternalName`, `szDisplayName` |
| `0x100eebcf` | 12,772 | 1 | **D3DBSP/world parser** | `version`, `isInUse`, `planes` |
| `0x100b21ec` | 5,881 | 1 | **Asset decrypter** | `decryptImages`, `decryptSounds` |
| `0x101a1e60` | 5,607 | 3 | **IEEE float printer** | `1#IND`, `1#SNAN`, `1#QNAN` |
| `0x100ad196` | 5,244 | 1 | **Map shader/techset** | `wc_unlit_add`, `wc_unlit_multiply`, `mp_conflict` |
| `0x1005839c` | 425 | 116 | **GSC compiler/VM** | `MAX_OPCODE_LOOKUP_SIZE exceeded`, `MAX_SOURCEPOS_LOOKUP_SIZE exceeded` |
| `0x100e6680` | 400 | 1 | **Sound system** | `(?:\.v\["soundalias"\] *= *"(.+)")` |

## 📦 Top 30 fonctions par taille

Les plus grosses fonctions sont typiquement des parsers, des dispatchers ou des state machines centrales.

| Adresse | Taille | Callers | Cat. | Strings | Imports |
|---|---|---|---|---|---|
| `0x100cb76e` | 58,162 | 2 | other | `szInternalName`, `szDisplayName`, `hideTags` | — |
| `0x100d9aa5` | 34,978 | 2 | other | `weapon`, `szInternalName`, `szDisplayName` | — |
| `0x100eebcf` | 12,772 | 1 | other | `version`, `isInUse`, `planes` | — |
| `0x100aa195` | 10,229 | 1 | other | — | — |
| `0x100fe954` | 8,651 | 4 | other | — | — |
| `0x1018721a` | 7,590 | 2 | other | — | — |
| `0x101231b0` | 6,183 | 1 | other | `Invalid descriptor`, `serializing` | — |
| `0x100b21ec` | 5,881 | 1 | other | `decryptImages`, `decryptSounds` | — |
| `0x101a1e60` | 5,607 | 3 | other | `1#IND`, `1#SNAN`, `1#QNAN` | — |
| `0x100ad196` | 5,244 | 1 | other | `wc_unlit_add`, `wc_unlit_multiply`, `mp_conflict` | — |
| `0x1016bb7c` | 5,168 | 3 | other | `unknown compression method`, `invalid window size`, `incorrect header check` | — |
| `0x1016342d` | 5,073 | 2 | other | `Could not find type "`, `" stored in google.protobuf.Any.`, `Non-repeated Any specified multiple times.` | — |
| `0x1017daea` | 4,929 | 65 | other | — | — |
| `0x100ea143` | 4,781 | 1 | other | `version`, `Wrong FX version for {}! expected {} and got {}!`, `flags` | — |
| `0x1013f111` | 4,644 | 2 | other | `Reserved numbers must be positive integers.`, `Reached maximum recursion limit for nested messages.`, `google.protobuf.MessageOptions` | — |
| `0x1010393d` | 4,597 | 4 | other | — | — |
| `0x100aff46` | 3,973 | 1 | other | — | — |
| `0x1012d7c1` | 3,931 | 2 | other | `Non-primitive types can't be packed.` | — |
| `0x1007b8b3` | 3,751 | 1 | network | `matchtype`, `securityLevel`, `challenge` | — |
| `0x10139429` | 3,696 | 2 | other | `$0message $1`, `$0  extensions $1 to $2;
`, `$0  }
` | — |
| `0x10091884` | 3,606 | 1 | other | `ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890` | — |
| `0x100246c1` | 3,142 | 1 | other | — | — |
| `0x10142d19` | 3,136 | 3 | other | `" is not a message type.`, `google.protobuf.bridge.MessageSet`, `"$0" does not declare $1 as an extension number.` | — |
| `0x1007acd9` | 3,034 | 1 | other | `sv_securityLevel`, `challenge`, `gamename` | — |
| `0x10002e70` | 2,994 | 1 | render | `Use extended d3d9 interface!`, `r_useD3D9Ex`, `iw4v-plus.dll` | `KERNEL32.DLL!LoadLibraryA` |
| `0x10095cb7` | 2,949 | 1 | other | `Automatically record games`, `cl_autoRecord`, `How many demos to keep with autorecord` | — |
| `0x1008b728` | 2,924 | 1 | other | `uiSi_ServerName`, `sv_hostname`, `uiSi_MaxClients` | — |
| `0x1013e507` | 2,920 | 1 | other | `Missing field: FileDescriptorProto.name.`, `proto2`, `proto3` | — |
| `0x101a6880` | 2,887 | 1 | other | — | — |
| `0x10015b9d` | 2,833 | 1 | other | — | — |

## 📁 Par catégorie

### `network` — 32

| Adresse | Taille | Callers | Strings/Imports |
|---|---|---|---|
| `0x1007b8b3` | 3,751 | 1 | `matchtype`, `securityLevel` |
| `0x1006d72a` | 1,961 | 1 | `delayReconnect`, `GetMapList` |
| `0x1002b474` | 1,540 | 1 | `Failed connect attempt from IP address: {}
`, `error
Invalid connect packet!` |
| `0x1007a55c` | 1,396 | 1 | `xpartygo`, `Enable party system` |
| `0x10033148` | 859 | 1 | `Randomize the bots' names`, `sv_randomBotNames` |
| `0x10081559` | 797 | 1 | `Invalid packet from IP address: {}
`, `Invalid RCon request from {}
` |
| `0x1012a974` | 724 | 2 | ` a protocol buffer. Use the 'bytes' type if you intend to send raw bytes. `, ` contains invalid UTF-8 data when ` |
| `0x10080fcc` | 454 | 1 | `login`, `logout` |
| `0x10081192` | 419 | 1 | `Usage: {} <command>
`, `rconSafe` |
| `0x1009b075` | 359 | 1 | `Received invalid voice packet of size {} from {}
` |
| `0x1008cb20` | 357 | 1 | `Draw connection interrupted`, `cg_drawDisconnect` |
| `0x1006c9a3` | 338 | 1 | `disconnect`, `awaitDatabase` |
| `0x1003ae70` | 302 | 1 | `connect`, `KERNEL32.DLL!ExitProcess` |
| `0x1009af51` | 292 | 1 | `Invalid packet from IP address: {}
`, `Received invalid voice packet of size {} from {}
` |
| `0x10061930` | 286 | 2 | `Failed to connect to the pipe
`, `Attempting to reconnect to the pipe.
`, `KERNEL32.DLL!CreateFileA` |
| … | (17 autres) | | |

### `render` — 2

| Adresse | Taille | Callers | Strings/Imports |
|---|---|---|---|
| `0x10002e70` | 2,994 | 1 | `Use extended d3d9 interface!`, `r_useD3D9Ex`, `KERNEL32.DLL!LoadLibraryA` |
| `0x1003dfe3` | 81 | 1 | `D3D9.DLL!Direct3DCreate9Ex`, `D3D9.DLL!Direct3DCreate9` |

### `scriptengine` — 1

| Adresse | Taille | Callers | Strings/Imports |
|---|---|---|---|
| `0x1005a874` | 101 | 1 | `Scr_RandomFloatRange parms: %f %f `, `ClearHudText` |

### `crypto` — 1

| Adresse | Taille | Callers | Strings/Imports |
|---|---|---|---|
| `0x101099b5` | 56 | 3 | `BCRYPT.DLL!BCryptGenRandom` |

### `other` — 14,204 (non listées)
