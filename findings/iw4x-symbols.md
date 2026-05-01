# Symboles iw4x.exe / iw4x.dll deduits du source IW4x

*Genere par `scripts/python/extract_iw4x_symbols.py`. **915 symboles** auto-extraits depuis les commentaires inline du source `refs/iw4x-client/src/`.*

Quand IW4x patche iw4x.exe, les developpeurs annotent souvent l'adresse cible avec le nom de la fonction d'origine en commentaire. Ces noms constituent une **source de verite** pour rebaptiser les FUN_xxxx de Ghidra.

- **iw4x.exe** (0x400000-0x800000) : 822 symboles
- **iw4x.dll** (0x10000000-0x10800000) : 0 symboles
- **autres** (data .bss / dynamique) : 93 symboles

## iw4x.exe — fonctions identifiees (top 60)

| Adresse | Nom | Source |
|---|---|---|
| `0x004014c0` | `SV_GetClientPersistentDataBuffer` | src/Game/Server.cpp:23 |
| `0x00401950` | `SV_UserinfoChanged` | src/Components/Modules/Events.cpp:145 |
| `0x00402500` | `Com_DPrintf` | src/Components/Modules/QuickPatch.cpp:357 |
| `0x004027a0` | `UI_ParseInfos` | src/Game/Functions.cpp:208 |
| `0x00402bd0` | `NET_IsLocalAddress` | src/Game/Functions.cpp:128 |
| `0x00402d30` | `StuckInClient` | src/Components/Modules/PlayerMovement.cpp:208 |
| `0x00403547` | `CL_Disconnect` | src/Components/Modules/Events.cpp:387 |
| `0x00403582` | `CL_Disconnect` | src/Components/Modules/Events.cpp:366 |
| `0x00403770` | `G_SpawnItem` | src/Game/Game.cpp:10 |
| `0x00403960` | `Load_MaterialHandle` | src/Game/Functions.cpp:83 |
| `0x00403b60` | `ParseConfigStringToStruct` | src/Game/Functions.cpp:211 |
| `0x00404b20` | `Cbuf_AddText` | src/Game/Functions.cpp:12 |
| `0x00404c60` | `Live_GetXp` | src/Game/Functions.cpp:137 |
| `0x00404ca0` | `CL_InitOnceForAllClients` | src/Components/Modules/Events.cpp:188 |
| `0x004059ea` | `GamerProfile_RegisterCommands` | src/Components/Modules/QuickPatch.cpp:602 |
| `0x004059ef` | `GamerProfile_RegisterDvars` | src/Components/Modules/QuickPatch.cpp:603 |
| `0x00406530` | `Dvar_GetUnpackedColorByName` | src/Game/Dvars.cpp:16 |
| `0x00406d10` | `Win_InitLocalization` | src/Components/Modules/ZoneBuilder.cpp:947 |
| `0x004077a1` | `PartyMigrate_Frame` | src/Components/Modules/Party.cpp:318 |
| `0x00407930` | `DB_FindXAssetHeader` | src/Game/Database.cpp:9 |
| `0x004081fd` | `defaultweapon` | src/Components/Modules/QuickPatch.cpp:562 |
| `0x00408228` | `find` | src/Components/Modules/Weapon.cpp:563 |
| `0x0040823a` | `jump` | src/Components/Modules/Weapon.cpp:565 |
| `0x00408260` | `Key_RemoveCatcher` | src/Game/Functions.cpp:65 |
| `0x00409010` | `NET_StringToAdr` | src/Game/Functions.cpp:129 |
| `0x0040bb20` | `Dvar_SetFloat` | src/Game/Dvars.cpp:32 |
| `0x0040bb60` | `SV_Cmd_ArgvBuffer` | src/Game/Server.cpp:12 |
| `0x0040bdd0` | `MSG_ReadShort` | src/Components/Modules/Theatre.cpp:907 |
| `0x0040d7a0` | `Load_XModelSurfsFixup` | src/Components/Modules/Zones.cpp:179 |
| `0x00410bb0` | `FS_FOpenFileAppend` | src/Game/FileSystem.cpp:10 |
| `0x00411560` | `Scr_GetVector` | src/Game/Script.cpp:34 |
| `0x00411c16` | `CL_WritePacket` | src/Components/Modules/Huffman.cpp:11 |
| `0x00412310` | `Scr_AddString` | src/Game/Script.cpp:45 |
| `0x00412370` | `SV_SteamAuthClient` | src/Components/Modules/Security.cpp:183 |
| `0x00412490` | `CL_DrawStretchPic` | src/Game/Client.cpp:21 |
| `0x00412540` | `PM_GetEffectiveStance` | src/Game/PlayerMovement.cpp:8 |
| `0x004127a0` | `LargeLocalBegin` | src/Game/Functions.cpp:269 |
| `0x00412e40` | `Dvar_RegisterEnum` | src/Game/Dvars.cpp:11 |
| `0x00413490` | `Com_DPrintf` | src/Game/Common.cpp:12 |
| `0x00413de0` | `Com_sprintf` | src/Game/Common.cpp:16 |
| `0x00414d92` | `SV_ExecuteClientCommands` | src/Components/Modules/Huffman.cpp:7 |
| `0x004158d9` | `main` | src/Components/Modules/FastFiles.cpp:609 |
| `0x00415ad0` | `Menu_Setup` | src/Game/Functions.cpp:97 |
| `0x00415ba0` | `BG_IsWeaponValid` | src/Game/BothGames.cpp:11 |
| `0x004165e0` | `Scr_GetEntityId` | src/Game/Script.cpp:39 |
| `0x0041698e` | `Disable` | src/Components/Modules/Security.cpp:186 |
| `0x004169c0` | `Sys_Sleep` | src/Game/System.cpp:15 |
| `0x00416f70` | `Vec2Normalize` | src/Game/Functions.cpp:257 |
| `0x00418380` | `DB_AllocStreamPos` | src/Game/Functions.cpp:45 |
| `0x00419970` | `GetVariable` | src/Game/Script.cpp:11 |
| `0x0041a0b0` | `StringTable_GetAsset_FastFile` | src/Game/Functions.cpp:277 |
| `0x0041aab0` | `PC_Directive_elif` | src/Game/PreProcessor.cpp:20 |
| `0x0041b8c0` | `Sys_LeaveCriticalSection` | src/Game/System.cpp:20 |
| `0x0041b9f0` | `called` | src/Components/Modules/Dedicated.cpp:205 |
| `0x0041bed2` | `SetEntityFieldValue` | src/Components/Modules/GSC/Field.cpp:161 |
| `0x0041bf20` | `unzClose` | src/Game/Functions.cpp:220 |
| `0x0041ca20` | `MSG_WriteLong` | src/Game/Functions.cpp:110 |
| `0x0041d010` | `CL_CheckForResend` | src/Components/Modules/Dedicated.cpp:206 |
| `0x0041d7d0` | `Scr_AddInt` | src/Game/Script.cpp:50 |
| `0x0041fde0` | `Com_Frame` | src/Components/Modules/Dedicated.cpp:204 |
| … | (+762 autres) | |

## iw4x.dll — fonctions identifiees (top 30)

| Adresse | Nom | Source |
|---|---|---|

## Adresses avec plusieurs noms candidats

(11 adresses ont plusieurs nominations differentes dans le source — typiquement variantes de naming, ou erreurs.)

| Adresse | Nom retenu | Alternatives |
|---|---|---|
| `0x00402500` | `Com_DPrintf` | `Com_Printf`, `logger` |
| `0x00414d92` | `SV_ExecuteClientCommands` | `SV_ExecuteClientMessage` |
| `0x00445460` | `DB_LoadXFileData` | `DB_ReadXFile` |
| `0x0046a630` | `SND_Init` | `init` |
| `0x004702c0` | `FS_BuildPathToFile` | `FS_BuildOSPath` |
| `0x004f5090` | `SND_InitDriver` | `init` |
| `0x004f8c70` | `Com_PrintError` | `Print` |
| `0x007982f0` | `visionDefFields` | `Count` |
| `0x0079d260` | `infoParams` | `Count` |
| `0x014c0f80` | `zoneData` | `g_zones` |
| `0x062e2858` | `uiInfoArray` | `uiContext` |
