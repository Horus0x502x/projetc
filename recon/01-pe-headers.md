# Recon PE — en-têtes, sections, imports

*Généré par `scripts/python/pe_recon.py`.*

### `iw4x.exe`

- **Fichier réel** : `/home/horus/Bureau/G/CODA/iw4x.exe`
- **Taille** : 3,932,160 octets
- **SHA-256** : `49ea90e34c9cd64d9d0ae7f4b399e4ecc5ea13976823b2b8667390a4b8767009`

**En-tête PE**

| Champ | Valeur |
|---|---|
| Time/Date | `Thu Jan  1 01:00:00 1970` |
| Magic | `010b	(PE32)` |
| ImageBase | `00400000` |
| AddressOfEntryPoint | `002bac0f` |
| SizeOfCode | `002d6000` |
| Subsystem | `00000003	(Windows CUI)` |
| DllCharacteristics | `00000000` |

**Sections** (entropie > 7.0 = suspect : chiffré/compressé/packé)

| # | Nom | Taille | VMA | Entropie | Notes |
|---|---|---|---|---|---|
| 0 | `.text` | 2,970,399 | `0x00401000` | 6.71 | CODE, READONLY;  |
| 1 | `.rdata` | 776,012 | `0x006d7000` | 5.69 | DATA, READONLY;  |
| 2 | `.data` | 57,344 | `0x00795000` | 4.22 | DATA;  |
| 3 | `.tls` | 37 | `0x07016000` | -0.00 | DATA; section non standard |
| 4 | `.version` | 4 | `0x07017000` | 2.00 | DATA, READONLY; section non standard |
| 5 | `.rsrc` | 110,150 | `0x07018000` | 3.78 | DATA, READONLY;  |

**Imports** (15 DLLs)

- *graphique* : `GDI32.dll`, `d3d9.dll`
- *audio* : `DSOUND.dll`, `WINMM.dll`
- *système* : `ADVAPI32.dll`, `KERNEL32.dll`, `SHELL32.dll`, `USER32.dll`, `ole32.dll`
- *autres* : `DDRAW.dll`, `POWRPROF.dll`, `WSOCK32.dll`, `binkw32.dll`, `iw4x.dll`, `mss32.dll`

### `iw4x.dll`

- **Fichier réel** : `/home/horus/Bureau/G/CODA/iw4x.dll`
- **Taille** : 3,624,960 octets
- **SHA-256** : `65de541fce7b451b19060111f68735135365c79948f4a5a1138047520ddae195`

**En-tête PE**

| Champ | Valeur |
|---|---|
| Time/Date | `Tue Apr 14 03:17:18 2026` |
| Magic | `010b	(PE32)` |
| ImageBase | `10000000` |
| AddressOfEntryPoint | `0018e9b7` |
| SizeOfCode | `001df800` |
| Subsystem | `00000002	(Windows GUI)` |
| DllCharacteristics | `00000140` |

**Sections** (entropie > 7.0 = suspect : chiffré/compressé/packé)

| # | Nom | Taille | VMA | Entropie | Notes |
|---|---|---|---|---|---|
| 0 | `.text` | 1,963,911 | `0x10001000` | 6.74 | CODE, READONLY;  |
| 1 | `.rdata` | 1,445,426 | `0x101e1000` | 6.10 | DATA, READONLY;  |
| 2 | `.data` | 113,664 | `0x10342000` | 3.12 | DATA;  |
| 3 | `.fptable` | 128 | `0x10638000` | -0.00 | DATA; section non standard |
| 4 | `.rsrc` | 1,536 | `0x10639000` | 4.51 | DATA, READONLY;  |
| 5 | `.reloc` | 98,152 | `0x1063a000` | 6.70 | DATA, READONLY;  |

**Imports** (20 DLLs)

- *réseau* : `IPHLPAPI.DLL`, `WININET.dll`, `WS2_32.dll`
- *graphique* : `GDI32.dll`, `d3d9.dll`, `d3dx9_43.dll`, `dwmapi.dll`
- *input* : `HID.DLL`, `XINPUT1_3.dll`
- *audio* : `WINMM.dll`
- *système* : `ADVAPI32.dll`, `COMCTL32.dll`, `KERNEL32.dll`, `SETUPAPI.dll`, `SHELL32.dll`, `SHLWAPI.dll`, `USER32.dll`, `ole32.dll`
- *crypto/debug* : `bcrypt.dll`, `dbghelp.dll`

### `iw4mp.exe`

- **Fichier réel** : `/home/horus/Bureau/G/CODA/iw4mp.exe`
- **Taille** : 4,704,752 octets
- **SHA-256** : `2473ea3be5232caad803194d5d431af4d99fed1517eedf61c93fb741959052ce`

**En-tête PE**

| Champ | Valeur |
|---|---|
| Time/Date | `Tue Aug  1 00:57:13 2023` |
| Magic | `010b	(PE32)` |
| ImageBase | `00400000` |
| AddressOfEntryPoint | `0025c40f` |
| SizeOfCode | `0027c000` |
| Subsystem | `00000002	(Windows GUI)` |
| DllCharacteristics | `00000000` |

**Sections** (entropie > 7.0 = suspect : chiffré/compressé/packé)

| # | Nom | Taille | VMA | Entropie | Notes |
|---|---|---|---|---|---|
| 0 | `.text` | 2,604,415 | `0x00401000` | 6.66 | CODE, READONLY;  |
| 1 | `.rdata` | 493,650 | `0x0067d000` | 5.78 | DATA, READONLY;  |
| 2 | `.data` | 1,486,848 | `0x006f6000` | 3.97 | DATA;  |
| 3 | `.tls` | 37 | `0x06e68000` | -0.00 | DATA; section non standard |
| 4 | `.rsrc` | 94,300 | `0x06e69000` | 4.71 | DATA, READONLY;  |

**Imports** (14 DLLs)

- *graphique* : `GDI32.dll`, `d3d9.dll`
- *audio* : `DSOUND.dll`, `WINMM.dll`
- *système* : `ADVAPI32.dll`, `KERNEL32.dll`, `SHELL32.dll`, `USER32.dll`
- *autres* : `DDRAW.dll`, `POWRPROF.dll`, `WSOCK32.dll`, `binkw32.dll`, `mss32.dll`, `steam_api.dll`

### `iw4sp.exe`

- **Fichier réel** : `/home/horus/Bureau/G/CODA/iw4sp.exe`
- **Taille** : 3,503,672 octets
- **SHA-256** : `9c7a3e1b8181f626a1a4d619f019f790578cf00d987008e20bf13c6fe4bec738`

**En-tête PE**

| Champ | Valeur |
|---|---|
| Time/Date | `Wed Feb 10 03:11:45 2010` |
| Magic | `010b	(PE32)` |
| ImageBase | `00400000` |
| AddressOfEntryPoint | `002779af` |
| SizeOfCode | `00290000` |
| Subsystem | `00000002	(Windows GUI)` |
| DllCharacteristics | `00000000` |

**Sections** (entropie > 7.0 = suspect : chiffré/compressé/packé)

| # | Nom | Taille | VMA | Entropie | Notes |
|---|---|---|---|---|---|
| 0 | `.text` | 2,685,679 | `0x00401000` | 6.68 | CODE, READONLY;  |
| 1 | `.rdata` | 644,262 | `0x00691000` | 5.59 | DATA, READONLY;  |
| 2 | `.data` | 53,248 | `0x0072f000` | 4.33 | DATA;  |
| 3 | `.tls` | 29 | `0x02536000` | -0.00 | DATA; section non standard |
| 4 | `.version` | 4 | `0x02537000` | 2.00 | DATA, READONLY; section non standard |
| 5 | `.rsrc` | 94,608 | `0x02538000` | 4.77 | DATA, READONLY;  |

**Imports** (14 DLLs)

- *graphique* : `GDI32.dll`, `d3d9.dll`
- *audio* : `WINMM.dll`
- *système* : `ADVAPI32.dll`, `KERNEL32.dll`, `SHELL32.dll`, `USER32.dll`, `ole32.dll`
- *autres* : `DDRAW.dll`, `POWRPROF.dll`, `WSOCK32.dll`, `binkw32.dll`, `mss32.dll`, `steam_api.dll`

### `IW4Vanilla.exe`

- **Fichier réel** : `/home/horus/Bureau/G/CODA/IW4Vanilla.exe`
- **Taille** : 3,915,776 octets
- **SHA-256** : `cb67f59ae8b6fb4beed2957d647d77a9f44479961cea3570bff5723c419b8434`

**En-tête PE**

| Champ | Valeur |
|---|---|
| Time/Date | `Thu Jan  1 01:00:00 1970` |
| Magic | `010b	(PE32)` |
| ImageBase | `00400000` |
| AddressOfEntryPoint | `002bac0f` |
| SizeOfCode | `002d6000` |
| Subsystem | `00000003	(Windows CUI)` |
| DllCharacteristics | `00000000` |

**Sections** (entropie > 7.0 = suspect : chiffré/compressé/packé)

| # | Nom | Taille | VMA | Entropie | Notes |
|---|---|---|---|---|---|
| 0 | `.text` | 2,970,399 | `0x00401000` | 6.71 | CODE, READONLY;  |
| 1 | `.rdata` | 776,012 | `0x006d7000` | 5.69 | DATA, READONLY;  |
| 2 | `.data` | 57,344 | `0x00795000` | 4.22 | DATA;  |
| 3 | `.tls` | 37 | `0x07016000` | -0.00 | DATA; section non standard |
| 4 | `.version` | 4 | `0x07017000` | 2.00 | DATA, READONLY; section non standard |
| 5 | `.rsrc` | 90,938 | `0x07018000` | 7.90 | DATA, READONLY; **ENTROPIE HAUTE** |

**Imports** (15 DLLs)

- *graphique* : `GDI32.dll`, `d3d9.dll`
- *audio* : `DSOUND.dll`, `WINMM.dll`
- *système* : `ADVAPI32.dll`, `KERNEL32.dll`, `SHELL32.dll`, `USER32.dll`, `ole32.dll`
- *autres* : `DDRAW.dll`, `POWRPROF.dll`, `WSOCK32.dll`, `binkw32.dll`, `iw4v.dll`, `mss32.dll`

### `iw4v.dll`

- **Fichier réel** : `/home/horus/Bureau/G/CODA/iw4v.dll`
- **Taille** : 3,484,672 octets
- **SHA-256** : `3111e062e1dededdb35a1039f2cc742708fba99bacd6a1f3f74905c83ab26478`

**En-tête PE**

| Champ | Valeur |
|---|---|
| Time/Date | `Sun Apr 19 01:42:05 2026` |
| Magic | `010b	(PE32)` |
| ImageBase | `10000000` |
| AddressOfEntryPoint | `0017be60` |
| SizeOfCode | `001c6e00` |
| Subsystem | `00000002	(Windows GUI)` |
| DllCharacteristics | `00000140` |

**Sections** (entropie > 7.0 = suspect : chiffré/compressé/packé)

| # | Nom | Taille | VMA | Entropie | Notes |
|---|---|---|---|---|---|
| 0 | `.text` | 1,862,868 | `0x10001000` | 6.76 | CODE, READONLY;  |
| 1 | `.rdata` | 1,417,792 | `0x101c8000` | 6.10 | DATA, READONLY;  |
| 2 | `.data` | 108,544 | `0x10323000` | 2.95 | DATA;  |
| 3 | `.rsrc` | 1,536 | `0x105ee000` | 4.52 | DATA, READONLY;  |
| 4 | `.reloc` | 91,760 | `0x105ef000` | 6.69 | DATA, READONLY;  |

**Imports** (19 DLLs)

- *réseau* : `IPHLPAPI.DLL`, `WS2_32.dll`
- *graphique* : `GDI32.dll`, `d3d9.dll`, `d3dx9_43.dll`, `dwmapi.dll`
- *input* : `HID.DLL`, `XINPUT1_3.dll`
- *audio* : `WINMM.dll`
- *système* : `ADVAPI32.dll`, `COMCTL32.dll`, `KERNEL32.dll`, `SETUPAPI.dll`, `SHELL32.dll`, `SHLWAPI.dll`, `USER32.dll`, `ole32.dll`
- *crypto/debug* : `bcrypt.dll`, `dbghelp.dll`

### `iw4v-plus.dll`

- **Fichier réel** : `/home/horus/Bureau/G/CODA/iw4v-plus.dll`
- **Taille** : 3,965,456 octets
- **SHA-256** : `8d4b23c72843b3ef34ade873244c7eb7298046305e4540f8ff69b7beb832a471`

**En-tête PE**

| Champ | Valeur |
|---|---|
| Time/Date | `Sun Apr 19 01:50:16 2026` |
| Magic | `010b	(PE32)` |
| ImageBase | `10000000` |
| AddressOfEntryPoint | `00907058` |
| SizeOfCode | `00097c00` |
| Subsystem | `00000002	(Windows GUI)` |
| DllCharacteristics | `00000000` |

**Sections** (entropie > 7.0 = suspect : chiffré/compressé/packé)

| # | Nom | Taille | VMA | Entropie | Notes |
|---|---|---|---|---|---|
| 0 | `0004ac00` | 268,439,552 | `0x10001000` | 7.97 | CODE, READONLY; **ENTROPIE HAUTE**; section non standard |
| 1 | `00017400` | 269,062,144 | `0x10099000` | 7.97 | DATA, READONLY; **ENTROPIE HAUTE**; section non standard |
| 2 | `00000600` | 269,275,136 | `0x100cd000` | 7.97 | DATA; **ENTROPIE HAUTE**; section non standard |
| 3 | `001f3200` | 269,287,424 | `0x100d0000` | 7.97 | DATA, READONLY; **ENTROPIE HAUTE**; section non standard |
| 4 | `00004600` | 275,197,952 | `0x10673000` | 7.97 | DATA, READONLY; **ENTROPIE HAUTE**; section non standard |
| 5 | `.edata` | 512 | `0x10679000` | 0.89 | DATA, READONLY;  |
| 6 | `.idata` | 1,536 | `0x1067a000` | 3.68 | DATA;  |
| 7 | `.tls` | 512 | `0x1067b000` | 0.23 | ; section non standard |
| 8 | `.rsrc` | 512 | `0x1067c000` | 2.53 | DATA, READONLY;  |
| 9 | `.themida` | 0 | `0x1067d000` | 0.00 | CODE, DATA; section non standard |
| 10 | `.boot` | 1,496,064 | `0x10907000` | 7.93 | CODE, DATA, READONLY; **ENTROPIE HAUTE**; section non standard |
| 11 | `.reloc` | 16 | `0x10a75000` | 2.47 | READONLY;  |

**Imports** (17 DLLs)

- *réseau* : `WININET.dll`
- *système* : `ADVAPI32.dll`, `SHELL32.dll`, `USER32.dll`
- *autres* : `IMM32.dll`, `MSVCP140.dll`, `VCRUNTIME140.dll`, `api-ms-win-crt-convert-l1-1-0.dll`, `api-ms-win-crt-filesystem-l1-1-0.dll`, `api-ms-win-crt-heap-l1-1-0.dll`, `api-ms-win-crt-locale-l1-1-0.dll`, `api-ms-win-crt-math-l1-1-0.dll`, `api-ms-win-crt-runtime-l1-1-0.dll`, `api-ms-win-crt-stdio-l1-1-0.dll`, `api-ms-win-crt-string-l1-1-0.dll`, `api-ms-win-crt-utility-l1-1-0.dll`, `kernel32.dll`

