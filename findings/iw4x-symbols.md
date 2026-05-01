# Symboles iw4x.exe / iw4x.dll deduits du source IW4x

*Genere par `scripts/python/extract_iw4x_symbols.py`. **317 symboles** auto-extraits depuis les commentaires inline du source `refs/iw4x-client/src/`.*

Quand IW4x patche iw4x.exe, les developpeurs annotent souvent l'adresse cible avec le nom de la fonction d'origine en commentaire. Ces noms constituent une **source de verite** pour rebaptiser les FUN_xxxx de Ghidra.

- **iw4x.exe** (0x400000-0x800000) : 308 symboles
- **iw4x.dll** (0x10000000-0x10800000) : 0 symboles
- **autres** (data .bss / dynamique) : 9 symboles

## iw4x.exe — fonctions identifiees (top 60)

| Adresse | Nom | Source |
|---|---|---|
| `0x00401950` | `SV_UserinfoChanged` | src/Components/Modules/Events.cpp:145 |
| `0x00402500` | `Com_DPrintf` | src/Components/Modules/QuickPatch.cpp:357 |
| `0x00402d30` | `StuckInClient` | src/Components/Modules/PlayerMovement.cpp:208 |
| `0x00403547` | `CL_Disconnect` | src/Components/Modules/Events.cpp:387 |
| `0x00403582` | `CL_Disconnect` | src/Components/Modules/Events.cpp:366 |
| `0x00404ca0` | `CL_InitOnceForAllClients` | src/Components/Modules/Events.cpp:188 |
| `0x004059ea` | `GamerProfile_RegisterCommands` | src/Components/Modules/QuickPatch.cpp:602 |
| `0x004059ef` | `GamerProfile_RegisterDvars` | src/Components/Modules/QuickPatch.cpp:603 |
| `0x00406d10` | `Win_InitLocalization` | src/Components/Modules/ZoneBuilder.cpp:947 |
| `0x004077a1` | `PartyMigrate_Frame` | src/Components/Modules/Party.cpp:318 |
| `0x004081fd` | `defaultweapon` | src/Components/Modules/QuickPatch.cpp:562 |
| `0x00408228` | `find` | src/Components/Modules/Weapon.cpp:563 |
| `0x0040823a` | `jump` | src/Components/Modules/Weapon.cpp:565 |
| `0x0040bdd0` | `MSG_ReadShort` | src/Components/Modules/Theatre.cpp:907 |
| `0x0040d7a0` | `Load_XModelSurfsFixup` | src/Components/Modules/Zones.cpp:179 |
| `0x00411c16` | `CL_WritePacket` | src/Components/Modules/Huffman.cpp:11 |
| `0x00412370` | `SV_SteamAuthClient` | src/Components/Modules/Security.cpp:183 |
| `0x00414d92` | `SV_ExecuteClientCommands` | src/Components/Modules/Huffman.cpp:7 |
| `0x004158d9` | `main` | src/Components/Modules/FastFiles.cpp:609 |
| `0x0041698e` | `Disable` | src/Components/Modules/Security.cpp:186 |
| `0x0041b9f0` | `called` | src/Components/Modules/Dedicated.cpp:205 |
| `0x0041bed2` | `SetEntityFieldValue` | src/Components/Modules/GSC/Field.cpp:161 |
| `0x0041d010` | `CL_CheckForResend` | src/Components/Modules/Dedicated.cpp:206 |
| `0x0041fde0` | `Com_Frame` | src/Components/Modules/Dedicated.cpp:204 |
| `0x00420830` | `Com_InitHunkMemory` | src/Components/Modules/ZoneBuilder.cpp:955 |
| `0x00421ee0` | `Scr_ShutdownSystem` | src/Components/Modules/Events.cpp:173 |
| `0x004236a5` | `CL_InitCGame` | src/Components/Modules/Events.cpp:377 |
| `0x00426080` | `I_strnicmp` | src/Components/Modules/NetworkDebug.cpp:52 |
| `0x00426130` | `other` | src/Components/Modules/Dedicated.cpp:195 |
| `0x00426c8a` | `ScriptCompile` | src/Components/Modules/GSC/ScriptError.cpp:899 |
| `0x00428951` | `Reduce` | src/Components/Modules/Console.cpp:627 |
| `0x0042895d` | `Reduce` | src/Components/Modules/Console.cpp:628 |
| `0x00428a8e` | `Adjust` | src/Components/Modules/Console.cpp:623 |
| `0x00428a90` | `Adjust` | src/Components/Modules/Console.cpp:624 |
| `0x00428ac0` | `Reduce` | src/Components/Modules/Console.cpp:629 |
| `0x00428ac5` | `Adjust` | src/Components/Modules/Console.cpp:626 |
| `0x00428aed` | `Reduce` | src/Components/Modules/Console.cpp:630 |
| `0x00428af2` | `Adjust` | src/Components/Modules/Console.cpp:625 |
| `0x0042904b` | `Scr_FreeScripts` | src/Components/Modules/GSC/ScriptError.cpp:897 |
| `0x00429080` | `FS_InitFileSystem` | src/Components/Modules/ZoneBuilder.cpp:968 |
| `0x004290c6` | `FS_InitFilesystem` | src/Components/Modules/FileSystem.cpp:467 |
| `0x004290d8` | `FS_IsBasePathValid` | src/Components/Modules/FileSystem.cpp:493 |
| `0x0042961c` | `Playlist_ParsePlaylists` | src/Components/Modules/Playlist.cpp:181 |
| `0x0042bbb0` | `DB_GetLoadedFlags` | src/Components/Modules/Theatre.cpp:761 |
| `0x0042e398` | `safeArea_horizontal` | src/Components/Modules/Dvar.cpp:497 |
| `0x0042e3c4` | `safeArea_vertical` | src/Components/Modules/Dvar.cpp:498 |
| `0x0042e3f5` | `safeArea_adjusted_horizontal` | src/Components/Modules/Dvar.cpp:495 |
| `0x0042e423` | `safeArea_adjusted_vertical` | src/Components/Modules/Dvar.cpp:496 |
| `0x0042f0a0` | `Com_InitCriticalSections` | src/Components/Modules/ZoneBuilder.cpp:945 |
| `0x004301b0` | `Com_InitMainThread` | src/Components/Modules/ZoneBuilder.cpp:946 |
| `0x00434bd4` | `CL_CheckNotify` | src/Components/Modules/Command.cpp:227 |
| `0x00435950` | `LSP` | src/Components/Modules/Network.cpp:410 |
| `0x0043d140` | `Com_EventLoop` | src/Components/Modules/ZoneBuilder.cpp:1008 |
| `0x0043ebb0` | `check` | src/Components/Modules/ZoneBuilder.cpp:1032 |
| `0x00440eb0` | `BG_GetWeaponDef` | src/Components/Modules/Weapon.cpp:331 |
| `0x00440ec0` | `DB_Update` | src/Components/Modules/ZoneBuilder.cpp:1007 |
| `0x00444810` | `IsDynClassname` | src/Components/Modules/QuickPatch.cpp:194 |
| `0x004454c0` | `Item_SetupKeywordHash` | src/Components/Modules/ZoneBuilder.cpp:995 |
| `0x0044e712` | `Scr_GetFunction` | src/Components/Modules/GSC/Script.cpp:357 |
| `0x0044e72e` | `Scr_GetFunction` | src/Components/Modules/GSC/Script.cpp:353 |
| … | (+248 autres) | |

## iw4x.dll — fonctions identifiees (top 30)

| Adresse | Nom | Source |
|---|---|---|

## Adresses avec plusieurs noms candidats

(4 adresses ont plusieurs nominations differentes dans le source — typiquement variantes de naming, ou erreurs.)

| Adresse | Nom retenu | Alternatives |
|---|---|---|
| `0x00402500` | `Com_DPrintf` | `logger` |
| `0x00414d92` | `SV_ExecuteClientCommands` | `SV_ExecuteClientMessage` |
| `0x0046a630` | `SND_Init` | `init` |
| `0x004f5090` | `SND_InitDriver` | `init` |
