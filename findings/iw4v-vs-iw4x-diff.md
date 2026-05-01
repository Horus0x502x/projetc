# Diff `iw4v.dll` (fork local) vs `iw4x.dll` (upstream)

*Le fork local provient du leak PDB `C:\Users\scfge\source\repos\iw4x-client-eliott\` (cf. `recon/00-findings-clefs.md`). Compare au build upstream officiel via GitHub Actions.*

## Synthese

| Metrique | iw4x.dll | iw4v.dll | Delta |
|---|---|---|---|
| Fonctions Ghidra | 15,207 | 14,240 | -967 |
| Strings | 10,060 | 9,520 | -540 |
| Imports DLL!fct | 51 | 75 | +24 |
| Fonctions communes (memes addr) | 133 | | |
| Fonctions ajoutees dans iw4v | 14,107 | | |
| Fonctions retirees vs iw4x | 15,074 | | |
| Fonctions modifiees (taille differente) | 115 | | |

## Top 30 fonctions modifiees (delta de taille decroissant)

Une fonction qui change de taille = code modifie. Delta positif = grossi (logique ajoutee), negatif = diminue.

| Adresse | iw4x.dll | iw4v.dll | Delta |
|---|---|---|---|
| `0x100aa195` | 143 | 10,229 | +10,086 |
| `0x10156061` | 3,149 | 16 | -3,133 |
| `0x101b19a0` | 785 | 34 | -751 |
| `0x101b3de7` | 652 | 8 | -644 |
| `0x10114753` | 728 | 169 | -559 |
| `0x10165d25` | 38 | 583 | +545 |
| `0x1008fb5f` | 402 | 32 | -370 |
| `0x1008c545` | 358 | 16 | -342 |
| `0x10190620` | 346 | 12 | -334 |
| `0x1017c980` | 337 | 71 | -266 |
| `0x1017b160` | 293 | 48 | -245 |
| `0x1016065c` | 327 | 114 | -213 |
| `0x101b2e2d` | 221 | 8 | -213 |
| `0x101b345e` | 214 | 8 | -206 |
| `0x101af642` | 185 | 13 | -172 |
| `0x1010289f` | 261 | 108 | -153 |
| `0x101b66be` | 153 | 8 | -145 |
| `0x10019411` | 173 | 32 | -141 |
| `0x101af123` | 146 | 8 | -138 |
| `0x1018b530` | 9 | 139 | +130 |
| `0x10018b2f` | 163 | 287 | +124 |
| `0x1013120b` | 213 | 89 | -124 |
| `0x101aef29` | 125 | 11 | -114 |
| `0x1003e07a` | 22 | 119 | +97 |
| `0x1011cac4` | 211 | 307 | +96 |
| `0x1003f41f` | 66 | 160 | +94 |
| `0x1011cbfc` | 113 | 204 | +91 |
| `0x101b434a` | 99 | 8 | -91 |
| `0x1015d053` | 138 | 50 | -88 |
| `0x1018f697` | 13 | 101 | +88 |

## Strings ajoutees dans iw4v.dll (echantillon de 50)

Strings presentes dans iw4v.dll mais pas dans iw4x.dll. Reveal souvent les modifications du fork.

- `&2%4-4d4k4`
- `)0/0O0Y0_0k0`
- `.22262:2>2B2F2J2N2R2V2Z2^2b2f2j2n2r2v2z2`
- `.>2>6>:>>>B>F>J>N>R>V>Z>^>b>f>j>n>r>v>z>~>`
- `.?AV<lambda_1>@?1??IW4V_AddUIScript@@YAXPBDP6AXXZ@Z@`
- `.?AV<lambda_1>@?1??IW4V_OnCLDisconnected@@YAXP6AXXZ@Z@`
- `.?AV<lambda_1>@?1??IW4V_RegisterClientPacket@@YAXPBDP6AX00@Z@Z@`
- `.?AV<lambda_2>@?1???0Voice@Components@@QAE@XZ@`
- `.?AV<lambda_3>@?1???0Voice@Components@@QAE@XZ@`
- `.?AV<lambda_4>@?1???0Party@Components@@QAE@XZ@`
- `.?AV<lambda_5>@?7???0Party@Components@@QAE@XZ@`
- `.?AV<lambda_7>@?1???0Party@Components@@QAE@XZ@`
- `.P6AHPAMHD@Z`
- `.P6APAXPBDH@Z`
- `.P6AXPAUIDirect3DDevice9@@@Z`
- `0 0$0(0,00040<0@0D0H0L0P0T0\0`0d0h0l0p0t0|0`
- `0 0$0(0/3J3`
- `0 0$0,0004080<0@0D0H0L0P0T0X0`
- `0 0$00040@0D0P0T0`0d0p0t0`
- `0 0&0,050Q0a0h0s0{0`
- `0 0(0,04080@0D0L0P0X0\0d0h0p0t0|0`
- `0 0(040T0\0h0`
- `0 0(0<0D0H0L0P0T0\0d0l0`
- `0 0,0L0T0\0h0`
- `0 080E0M0W0p0~0`
- `0 0;0`0q0z0`
- `0 0<0G0U0[0l0~0`
- `0 0=0D0P0]0}0`
- `0 0@0H0P0X0d0`
- `0 0@0H0T0t0`
- `0 0@0L0l0x0`
- `0!0%0)0-0105090E0t0`
- `0!0'00090C0M0j0`
- `0!0'000?0F0>1`
- `0!0:0P0_0r0`
- `0"1&1*1.12161:1>1[1b1`
- `0"1H1T1c1`
- `0#0-0Q0l0s0`
- `0#020?0H0g0v0`
- `0$0,040<0D0L0T0\0d0l0x0`
- `0$0,040<0D0L0T0\0d0p0x0`
- `0$0,040<0X0d0l0`
- `0$0,080\0d0l0t0|0`
- `0$0,080X0`0l0`
- `0$0?0Z0~0`
- `0$0A0Z0w0`
- `0$0D0L0T0\0d0l0t0`
- `0$0L0`0h0`
- `0$191>1V1e1`
- `0%0+0:0E0K0Q0e0m0`

*(+1293 autres strings ajoutees)*

## Strings retirees (presentes dans iw4x.dll uniquement)

(souvent : code IW4x retire ou refactore par le fork)

- `!0C0P0W0i0`
- `!393x4J9N9R9V9Z9^9b9f9j9n9r9v9z9~9`
- `"%lld.%lld"`
- `"0)0Y0m0w0`
- `"0+0N0Z0g0`
- `%-6llx %d %s:%d:%s`
- `%.2f %s/s`
- `%d.%d.%d.%d`
- `%i/%i (%i)`
- `%lld->%lld`
- `%lu %.*s -> %s %d`
- `%lu %c%c %c%c%c%c%c`
- `%lu %p %d:%d %ld err %d`
- `%lu %p %s`
- `%lu %p accepted %M -> %M`
- `%lu %p closed`
- `%lu %p snd %ld/%ld rcv %ld/%ld n=%ld err=%d`
- `%lu accept failed, errno %d`
- `%lu stat(%s): %d`
- `%s truncated`
- `%sContent-Length:`
- `' not found`
- `(0@0(1>1V1`
- `({}/{}) {}%`
- `)070R0X0q0~0`
- `)0k0o0s0w0{0`
- `*242:2C2f2n2|2`
- `+0:0L0e0|0`
- `,010m0r0x0`
- `,161O1X1b1{1`

*(+1707 autres)*

## Imports differents

**Imports ajoutes dans iw4v.dll** (utilise des APIs supplementaires) :

- `ADVAPI32.dll!CryptAcquireContextW`
- `ADVAPI32.dll!CryptGenRandom`
- `ADVAPI32.dll!RegCreateKeyExW`
- `GDI32.dll!AddFontMemResourceEx`
- `GDI32.dll!CreateFontA`
- `GDI32.dll!CreateSolidBrush`
- `GDI32.dll!DeleteObject`
- `GDI32.dll!GetDeviceCaps`
- `GDI32.dll!SetBkColor`
- `GDI32.dll!SetTextColor`
- `HID.DLL!HidD_GetFeature`
- `KERNEL32.dll!CompareStringW`
- `KERNEL32.dll!ConnectNamedPipe`
- `KERNEL32.dll!CreateEventA`
- `KERNEL32.dll!DeleteFileA`
- `KERNEL32.dll!FreeEnvironmentStringsW`
- `KERNEL32.dll!GetACP`
- `KERNEL32.dll!GetDateFormatW`
- `KERNEL32.dll!GetEnvironmentStringsW`
- `KERNEL32.dll!GetFileAttributesA`
- `KERNEL32.dll!GetFileSizeEx`
- `KERNEL32.dll!GetLocaleInfoW`
- `KERNEL32.dll!GetModuleHandleW`
- `KERNEL32.dll!GetNativeSystemInfo`
- `KERNEL32.dll!GetTimeFormatW`
- `KERNEL32.dll!GetUserDefaultLCID`
- `KERNEL32.dll!HeapAlloc`
- `KERNEL32.dll!HeapFree`
- `KERNEL32.dll!HeapReAlloc`
- `KERNEL32.dll!HeapSize`

**Imports retires** (iw4v.dll n'utilise plus ces APIs) :

- `ADVAPI32.dll!RegOpenKeyExA`
- `ADVAPI32.dll!RegQueryValueExA`
- `COMCTL32.dll!00000000`
- `HID.DLL!00000000`
- `HID.DLL!HidD_GetAttributes`
- `HID.DLL!HidD_GetPreparsedData`
- `KERNEL32.dll!00000000`
- `KERNEL32.dll!CopyFileW`
- `KERNEL32.dll!CreateConsoleScreenBuffer`
- `KERNEL32.dll!DecodePointer`
- `KERNEL32.dll!DeleteCriticalSection`
- `KERNEL32.dll!DeviceIoControl`
- `KERNEL32.dll!EncodePointer`
- `KERNEL32.dll!EnterCriticalSection`
- `KERNEL32.dll!FindFirstFileW`
- `KERNEL32.dll!FindNextFileW`
- `KERNEL32.dll!FlushInstructionCache`
- `KERNEL32.dll!FreeConsole`
- `KERNEL32.dll!GetConsoleOutputCP`
- `KERNEL32.dll!GetFileType`
- `KERNEL32.dll!GetLastError`
- `KERNEL32.dll!GetModuleFileNameA`
- `KERNEL32.dll!GetProcAddress`
- `KERNEL32.dll!GetStdHandle`
- `KERNEL32.dll!GetVolumeInformationA`
- `KERNEL32.dll!GlobalAlloc`
- `KERNEL32.dll!GlobalLock`
- `KERNEL32.dll!GlobalUnlock`
- `KERNEL32.dll!InitializeCriticalSectionEx`
- `KERNEL32.dll!IsBadReadPtr`

## Fonctions ajoutees dans iw4v.dll (echantillon)

| Adresse | Taille | Callers |
|---|---|---|
| `0x100cb76e` | 58,162 | 2 |
| `0x100d9aa5` | 34,978 | 2 |
| `0x100eebcf` | 12,772 | 1 |
| `0x100fe954` | 8,651 | 4 |
| `0x1018721a` | 7,590 | 2 |
| `0x101231b0` | 6,183 | 1 |
| `0x100b21ec` | 5,881 | 1 |
| `0x101a1e60` | 5,607 | 3 |
| `0x100ad196` | 5,244 | 1 |
| `0x1016bb7c` | 5,168 | 3 |
| `0x1016342d` | 5,073 | 2 |
| `0x1017daea` | 4,929 | 65 |
| `0x100ea143` | 4,781 | 1 |
| `0x1013f111` | 4,644 | 2 |
| `0x1010393d` | 4,597 | 4 |
| `0x100aff46` | 3,973 | 1 |
| `0x1012d7c1` | 3,931 | 2 |
| `0x1007b8b3` | 3,751 | 1 |
| `0x10139429` | 3,696 | 2 |
| `0x10091884` | 3,606 | 1 |
