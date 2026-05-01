# Fonctions intéressantes — `iw4x.dll`

*Généré depuis `iw4x.exe-functions.json` (11479 fonctions, ImageBase 0x400000). Toutes les adresses correspondent 1:1 au runtime (pas d'ASLR).*

## 🎯 Fonctions remarquables (28)

Auto-détectées par signature de strings. À ouvrir en priorité dans Ghidra.

| Adresse | Taille | Callers | Label | Strings clés |
|---|---|---|---|---|
| `0x006cf048` | 2,240 | 1 | **IEEE float printer** | `1#SNAN`, `1#IND`, `1#INF` |
| `0x00488e80` | 1,817 | 1 | **Sound system** | `soundaliases/%s`, `WARNING: Can not write to sound alias file %s
`, `WARNING: Could not read sound alias file %s
` |
| `0x006872a0` | 795 | 1 | **Sound system** | `soundaliases/channels.def`, `channel name too long (max chars %d): %s in file [%s].
`, `unknown value (%s), should be either '%s' or '%s'.  using default: %d.
` |
| `0x006454f0` | 684 | 1 | **Sound system** | `soundaliases/temp.st`, `WARNING: Could not open output file %s for writing
`, `soundaliases/subtitle.st` |
| `0x0057e9a0` | 429 | 1 | **Sound system** | `ent = createOneshotEffect( `, `ent.v[ "origin" ] = (`, `ent.v[ "angles" ] = (` |
| `0x0048f660` | 424 | 1 | **Cmd system** | `cmdlist`, `Cmd_AddCommand: %s already defined
` |
| `0x004e9910` | 403 | 0 | **Anti-cheat / IW.net** | `IWNet adding session with id (%llx) to QoSinfoArray at slot %i.
` |
| `0x004bd190` | 385 | 1 | **Anti-cheat / IW.net** | `Couldn't resolve iw.net matchmaking server hostname.
`, `Couldn't resolve iw.net storage server hostname.
`, `Couldn't resolve iw.net ip server hostname.
` |
| `0x00645300` | 334 | 1 | **Sound system** | `soundaliases/subtitle.st`, `WARNING: Could not read local copy of StringEd file %s
`, `LANG_ENGLISH` |
| `0x004875e0` | 318 | 2 | **Anti-cheat / IW.net** | `Refusing to accept online stats because we are connected to a server
`, `Error %i ('%s') from IWNet_Storage_GetFile()
`, `Successfully read stats data from IWNet
` |
| `0x004f1bf0` | 304 | 1 | **DVAR system** | `toggle`, `togglep`, `reset` |
| `0x004aa950` | 273 | 4 | **Sound system** | `Soundalias "%s" is trying to chain to itself - check sound .csv files and correct.
` |
| `0x00681630` | 236 | 1 | **Anti-cheat / IW.net** | `Sending matchmaking command
`, `Sending storage command
`, `Sending external IP request command
` |
| `0x00645220` | 220 | 1 | **Sound system** | `SUBTITLE_`, `soundaliases/subtitle.st`, `WARNING: Could not read local copy of StringEd file %s
` |
| `0x00681c00` | 208 | 0 | **Anti-cheat / IW.net** | `IWNet: truncated iwnet packet - only %i bytes long
`, `IWNet: corrupt packet referring to IWNet command slot %i
`, `IWNet_Matchmaking_ParsePacket(): out of sequence packet (expected %i, got %i), so ignoring packet.
` |
| `0x0057e800` | 203 | 1 | **Sound system** | `ent = createLoopSound();`, `ent.v[ "origin" ] = (`, `ent.v[ "angles" ] = (` |
| `0x005017f0` | 176 | 8 | **Anti-cheat / IW.net** | `We can't allocate a new IWNet command, we have %i pending commands:
` |
| `0x005ba8a0` | 166 | 2 | **FastFile (.ff) loader** | `DBPlaylist_WaitXFileStage: read error !g_load.outstandingRead
` |
| `0x0043c390` | 165 | 1 | **Anti-cheat / IW.net** | `minimum resend time for iwnet commands`, `iwnet_minResendTime`, `maximum resend time for iwnet commands` |
| `0x004ac260` | 147 | 1 | **Anti-cheat / IW.net** | `Unable to write stats - IwNet error %i ('%s')
`, `popup_writingdata`, `Successfully wrote stats data
` |
| `0x0048b8d0` | 140 | 2 | **DVAR system** | `dvar_restart` |
| `0x006875d0` | 100 | 1 | **Sound system** | `soundaliases/channels.def`, `unable to load entity channel file [%s].
` |
| `0x004b7ab0` | 87 | 1 | **Anti-cheat / IW.net** | `IWNET_INVALIDCOMMAND
` |
| `0x00470090` | 79 | 294 | **Cmd system** | `Cmd_AddCommand: %s already defined
` |
| `0x0043d7f0` | 66 | 2 | **Anti-cheat / IW.net** | `IWNET_CANTCREATESESSION` |
| `0x006441e0` | 57 | 5 | **Sound system** | `Missing soundalias "%s".
` |
| `0x004fb3a0` | 52 | 2 | **Anti-cheat / IW.net** | `IWNET_STORAGE_ERROR_OK`, `IWNET_STORAGE_ERROR_NOT_FOUND`, `IWNET_STORAGE_ERROR_GENERAL` |
| `0x004d08b0` | 49 | 1 | **Anti-cheat / IW.net** | `IWNet search failure!
` |

## 📦 Top 30 fonctions par taille

Les plus grosses fonctions sont typiquement des parsers, des dispatchers ou des state machines centrales.

| Adresse | Taille | Callers | Cat. | Strings | Imports |
|---|---|---|---|---|---|
| `0x0061e8e0` | 13,376 | 2 | other | `%s is not an array index`, `function called with too many parameters`, `script stack overflow (too many embedded function calls)` | — |
| `0x006d0926` | 9,617 | 30 | other | `Operation aborted`, `Invalid pointer`, `The requested COM interface is not available` | — |
| `0x004f8dc0` | 7,802 | 1 | other | `Draw the view model`, `cg_drawGun`, `cg_cursorHints` | — |
| `0x0046da20` | 7,659 | 4 | other | `Error: found ')' but couldn't find what it was closing
`, `Error: trying to negate a string: %s
`, `writingdata() = %i
` | — |
| `0x004dcf40` | 7,635 | 4 | other | `CG_EntityEvent:ZERO EVENT
`, `ent:%3i  event:%3i  params:%3i  `, `Event %s just for client %i was sent to other clients
` | — |
| `0x004478c0` | 7,331 | 2 | other | `The scale to apply to the damage done to calculate damage view kick`, `bg_viewKickScale`, `The maximum view kick` | — |
| `0x0068a000` | 7,169 | 4 | other | — | — |
| `0x0041e1c0` | 7,086 | 2 | other | — | — |
| `0x005196c0` | 6,930 | 2 | other | `used for debugging anything`, `r_ignore`, `Game window horizontal position` | — |
| `0x00696800` | 6,343 | 1 | other | `identity`, `FLUSH`, `Set-Cookie:` | — |
| `0x00654c00` | 5,660 | 1 | other | — | — |
| `0x00498910` | 5,185 | 1 | other | `unexpected end of file found`, `bad syntax` | — |
| `0x00657b20` | 5,174 | 1 | other | — | — |
| `0x0069e950` | 5,106 | 0 | other | `User-Agent:`, `Referer:`, `Referer: %s
` | — |
| `0x00560630` | 4,548 | 1 | other | `No fixed codebook`, `No pitch prediction, what's wrong` | — |
| `0x00656970` | 4,517 | 1 | other | — | — |
| `0x00622e80` | 4,465 | 1 | other | `bad token '%s'`, `fatal flex scanner internal error--no action found` | — |
| `0x004ad4c0` | 4,250 | 1 | other | — | — |
| `0x0066b900` | 4,210 | 1 | other | — | — |
| `0x00471fc0` | 4,129 | 2 | other | `active`, `j_helmet`, `j_head` | — |
| `0x004295a0` | 4,010 | 1 | other | `playlists`, `version`, `Playlist error: line %i: Expected version number after version command
` | — |
| `0x00460480` | 3,797 | 1 | network | `SV_DirectConnect()
`, `error
EXE_MIGRATION_IN_PROGRESS`, `    rejected connect: host migration in progress
` | — |
| `0x0055d980` | 3,796 | 2 | other | — | — |
| `0x0050de90` | 3,727 | 1 | other | `frustum cull ents`, `draw surfs`, `choose lights` | — |
| `0x00420eb0` | 3,710 | 1 | other | — | — |
| `0x00535410` | 3,619 | 1 | other | `ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890` | — |
| `0x005e36e0` | 3,560 | 1 | other | `Enable cheats`, `The name of the game`, `gamename` | — |
| `0x0067bb80` | 3,511 | 1 | other | — | — |
| `0x00561e80` | 3,506 | 1 | other | `Invalid wideband mode encountered. Corrupted stream?`, `Invalid wideband mode encountered: corrupted stream?`, `More than two wideband layers found: corrupted stream?` | — |
| `0x00555fb0` | 3,462 | 1 | other | — | — |

## 📁 Par catégorie

### `network` — 154

| Adresse | Taille | Callers | Strings/Imports |
|---|---|---|---|
| `0x00460480` | 3,797 | 1 | `SV_DirectConnect()
`, `error
EXE_MIGRATION_IN_PROGRESS` |
| `0x006aab00` | 1,579 | 2 | `SOCKS5: server resolving disabled for hostnames of length > 255 [actual len=%d]
`, `Connection time-out`, `WSOCK32.DLL!Ordinal_9`, `WSOCK32.DLL!Ordinal_15` |
| `0x004e3280` | 1,566 | 1 | `fonts/smallDevFont`, `fonts/bigDevFont` |
| `0x00695c60` | 1,541 | 1 | `memory shortage`, `%s://%s` |
| `0x0069a360` | 1,400 | 1 | `Ignoring the response-body
`, `The requested document is not new enough
` |
| `0x005afd20` | 1,368 | 1 | `Parsing member list from party state packet for %i with %i members.
`, `@EXE_TRANSMITERROR` |
| `0x006a7d10` | 1,295 | 1 | `%c%c%c%u%c`, `Weirdly formatted EPSV reply` |
| `0x005abd40` | 1,280 | 1 | `We got a non-SNAPFLAG_BASELINE snap when nextNoDeltaEntity is still 0.  Discarding packet
`, `Delta from invalid frame (not supposed to happen!).
` |
| `0x00491f00` | 1,253 | 1 | `client sent an invalid buttons value %i
`, `invalid packet from client
` |
| `0x004e7200` | 1,252 | 1 | `Not sending voice to client %i since they are muted
`, `%llx (clientNum %i) is !infoValid but registered!
` |
| `0x005ad360` | 1,241 | 1 | `Client %i (XUID %llx) can hear us
`, `Can't send packets to XUID %llx (client %i) directly, we can ask %llx (client %i) to send it for us
` |
| `0x00487eb0` | 1,233 | 3 | `%s: Delta request from out of date packet - delta is against %i, needs to be < %i.
`, `%s: Delta against baseline snapshot (by client request)
` |
| `0x005ab550` | 1,167 | 1 | `%3i:  unchanged: %i
`, `%3i:  delta: %i
` |
| `0x006aa6a0` | 1,101 | 2 | `Connection time-out`, `%hu.%hu.%hu.%hu`, `WSOCK32.DLL!Ordinal_9`, `WSOCK32.DLL!Ordinal_15` |
| `0x004e38a0` | 1,070 | 1 | `Couldn't find our own XUID in the session.
`, `Received voice packet from ourself?  (our client num is %i)  relayList is %i
` |
| … | (139 autres) | | |

### `audio` — 94

| Adresse | Taille | Callers | Strings/Imports |
|---|---|---|---|
| `0x004b8860` | 993 | 2 | `MSS32.DLL!_AIL_set_sample_info@8`, `MSS32.DLL!_AIL_sample_ms_position@12` |
| `0x0064b6b0` | 808 | 1 | `ERROR: Sound file '%s' is zero length, invalid
`, `MSS32.DLL!_AIL_stream_sample_handle@4`, `MSS32.DLL!_AIL_stream_ms_position@12` |
| `0x0047efd0` | 757 | 2 | `MSS32.DLL!_AIL_set_sample_info@8`, `MSS32.DLL!_AIL_sample_ms_position@12` |
| `0x0064bdc0` | 496 | 1 | `invalid value %i for snd_khz, using 22 khz instead
`, `Attempting %i kHz %i bit [%s] sound
`, `MSS32.DLL!_AIL_last_error@0`, `MSS32.DLL!_AIL_set_3D_distance_factor@8` |
| `0x004c8c50` | 469 | 1 | `MSS32.DLL!_AIL_stream_status@4`, `MSS32.DLL!_AIL_pause_stream@8` |
| `0x0049be10` | 410 | 1 | `MSS32.DLL!_AIL_sample_status@4` |
| `0x0064b3c0` | 401 | 4 | `0 Enable 0`, `0 Enable 1`, `MSS32.DLL!_AIL_set_sample_processor@12`, `MSS32.DLL!_AIL_sample_processor@8` |
| `0x0064b9e0` | 335 | 1 | `Couldn't play alias '%s' - %s
`, `MSS32.DLL!_AIL_open_stream@12`, `MSS32.DLL!_AIL_last_error@0` |
| `0x004f0410` | 241 | 1 | `MSS32.DLL!_AIL_sample_status@4`, `MSS32.DLL!_AIL_set_sample_volume_levels@12` |
| `0x004f5090` | 236 | 2 | `The game sound frequency.`, `snd_khz`, `MSS32.DLL!_AIL_set_file_callbacks@16`, `MSS32.DLL!_AIL_set_redist_directory@4` |
| `0x00688a10` | 231 | 1 | `MSS32.DLL!_AIL_size_processed_digital_audio@16`, `MSS32.DLL!_AIL_process_digital_audio@24` |
| `0x0064b2c0` | 161 | 1 | `3 Band Parm Eq`, `ERROR: unable to load eq filter.
`, `MSS32.DLL!_AIL_find_filter@8`, `MSS32.DLL!_AIL_open_filter@8` |
| `0x00446c00` | 151 | 2 | `MSS32.DLL!_AIL_sample_channel_levels@8`, `MSS32.DLL!_AIL_set_sample_channel_levels@12` |
| `0x0064bd20` | 150 | 1 | `MSS32.DLL!_AIL_set_preference@8`, `MSS32.DLL!_AIL_open_digital_driver@16` |
| `0x00449bf0` | 145 | 1 | `MSS32.DLL!_AIL_stream_sample_handle@4` |
| … | (79 autres) | | |

### `render` — 14

| Adresse | Taille | Callers | Strings/Imports |
|---|---|---|---|
| `0x0050c940` | 712 | 1 | `R_AddDObjSurfacesCamera` |
| `0x0050c5c0` | 520 | 2 | `R_AddXModelSurfacesCamera` |
| `0x0050cc10` | 504 | 4 | `R_AddDObjSurfaces` |
| `0x0050c7d0` | 364 | 8 | `R_AddXModelSurfaces` |
| `0x0050c390` | 341 | 2 | `R_AddBModelSurfacesCamera` |
| `0x00509770` | 257 | 11 | `R_AddCmdDrawStretchPic: NOT DRAWING WITH MATERIAL "%s", because it has a fogable technique.
` |
| `0x00509880` | 257 | 1 | `R_AddCmdDrawStretchPicFlipST: NOT DRAWING WITH MATERIAL "%s", because it has a fogable technique.
` |
| `0x0050c4f0` | 201 | 8 | `R_AddBModelSurfaces` |
| `0x0051d0a0` | 194 | 2 | `R_AddDebugString` |
| `0x0051ceb0` | 183 | 3 | `R_AddDebugLine` |
| `0x004eef40` | 142 | 1 | `Unknown video card`, `D3D9.DLL!Direct3DCreate9` |
| `0x00507bb0` | 138 | 1 | `----- R_Init -----
`, `fonts/smalldevfont` |
| `0x00523390` | 101 | 1 | `ERROR: Material_GetTextureSize: invalid material
`, `ERROR: Material_GetTextureSize: texture count is %d expected to be exactly 1.
` |
| `0x005073f0` | 95 | 1 | `Getting Direct3D 9 interface...
`, `Direct3D 9 failed to initialize
`, `D3D9.DLL!Direct3DCreate9` |

### `scriptengine` — 7

| Adresse | Taille | Callers | Strings/Imports |
|---|---|---|---|
| `0x004066a0` | 1,156 | 5 | `Scr_DumpScriptThreads`, `Cannot dump script threads: out of memory
` |
| `0x0061c7f0` | 463 | 1 | `Scr_AddFields`, `float` |
| `0x005937f0` | 132 | 1 | `cg_objectiveText`, `hud_drawHud` |
| `0x005f1080` | 122 | 0 | `Scr_RandomFloatRange parms: %d %d `, `Scr_RandomFloatRange's second parameter must be greater than the first.
` |
| `0x00611b60` | 96 | 1 | `Scr_AnimTreeParse`, `bad token` |
| `0x004b8740` | 28 | 1 | `Scr_InitAllocNode` |
| `0x004e1ed0` | 28 | 1 | `Scr_BeginLoadScripts` |

### `filesystem` — 5

| Adresse | Taille | Callers | Strings/Imports |
|---|---|---|---|
| `0x00643270` | 1,625 | 7 | `Can't find %s
`, `Impure client detected. Invalid .IWD files referenced!`, `KERNEL32.DLL!InterlockedCompareExchange` |
| `0x0043fd90` | 216 | 2 | `FS_FOpenFileWrite: %s
` |
| `0x00410bb0` | 208 | 2 | `FS_FOpenFileAppend: %s
` |
| `0x00412200` | 145 | 1 | `FS_FOpenFileOverWrite: Failed to open %s for writing.  It either does not exist or is in a iwd file.`, `FS_FOpenFileOverWrite: %s
`, `KERNEL32.DLL!GetFileAttributesA`, `KERNEL32.DLL!SetFileAttributesA` |
| `0x00642250` | 115 | 5 | `FS_FOpenFileWrite: %s
` |

### `cmd` — 3

| Adresse | Taille | Callers | Strings/Imports |
|---|---|---|---|
| `0x0048f660` | 424 | 1 | `cmdlist`, `Cmd_AddCommand: %s already defined
` |
| `0x004dce00` | 137 | 29 | `Cmd_AddServerCommand: %s already defined
` |
| `0x00470090` | 79 | 294 | `Cmd_AddCommand: %s already defined
` |

### `dvar` — 2

| Adresse | Taille | Callers | Strings/Imports |
|---|---|---|---|
| `0x004f1bf0` | 304 | 1 | `toggle`, `togglep` |
| `0x0048b8d0` | 140 | 2 | `dvar_restart` |

### `crypto` — 1

| Adresse | Taille | Callers | Strings/Imports |
|---|---|---|---|
| `0x006abff0` | 971 | 1 | `Digest`, `nonce` |

### `log` — 1

| Adresse | Taille | Callers | Strings/Imports |
|---|---|---|---|
| `0x0046a630` | 890 | 2 | `
------- sound system initialization -------
`, `Cause a Com_Error if a sound file is missing.` |

### `other` — 11,198 (non listées)
