# Triage des strings

*Généré par `scripts/python/strings_triage.py`. URLs / chemins / RTTI / DVARs / .pdb leaks classés.*

### `iw4x.exe`

- 17,255 strings extraites (ASCII + UTF-16LE, ≥6 chars)

**URLs / hosts** (3)

- `http://curl.haxx.se/rfc/cookie_spec.html`
- `http://schemas.xmlsoap.org/soap/encoding/`
- `http://schemas.xmlsoap.org/soap/envelope/`

**chemins Windows** (2)

- `c:\trees\build-iw4-pc\iw4\code_source\src\universal\com_memory.cpp`
- `c:\trees\build-iw4-pc\iw4\code_source\src\universal\physicalmemory.cpp`

**chemins Unix** (13)

- `/configStrings/configStrings_pc_`
- `/curl.haxx.se/rfc/cookie_spec.html`
- `/dd/yy`
- `/green/blue`
- `/mp/gametypes`
- `/mp/gametypes/`
- `/mp/gametypes/_callbacksetup`
- `/mp/gametypes/_gametypes.txt`
- `/run/10180`
- `/run/10190`
- `/schemas.xmlsoap.org/soap/encoding/`
- `/schemas.xmlsoap.org/soap/envelope/`
- `/source_data/string_resources/subtitle.st`

**RTTI (.?AV…)** (2)

- `.?AVCCallbackBase@@`
- `.?AVtype_info@@`

**DVAR / cmd suspect** (50)

- `ai_nosight`
- `cg_ScoresPing_BgColor`
- `cg_ScoresPing_HighColor`
- `cg_ScoresPing_Interval`
- `cg_ScoresPing_LowColor`
- `cg_ScoresPing_MaxBars`
- `cg_ScoresPing_MedColor`
- `cg_airstrikeKillCamCloseXYDist`
- `cg_airstrikeKillCamCloseZDist`
- `cg_airstrikeKillCamFarBlur`
- `cg_airstrikeKillCamFarBlurDist`
- `cg_airstrikeKillCamFarBlurStart`
- `cg_airstrikeKillCamFov`
- `cg_airstrikeKillCamNearBlur`
- `cg_airstrikeKillCamNearBlurEnd`
- `cg_airstrikeKillCamNearBlurStart`
- `cg_blood`
- `cg_brass`
- `cg_centertime`
- `cg_chatHeight`
- `cg_chatTime`
- `cg_chatWithOtherTeams`
- `cg_connectionIconSize`
- `cg_constantSizeHeadIcons`
- `cg_crosshairAlpha`
- `cg_crosshairAlphaMin`
- `cg_crosshairDynamic`
- `cg_crosshairEnemyColor`
- `cg_crosshairVerticalOffset`
- `cg_cullBulletAngle`
- `cg_cullBullets`
- `cg_cursorHints`
- `cg_deadChatWithDead`
- `cg_deadChatWithTeam`
- `cg_deadHearAllLiving`
- `cg_deadHearTeamLiving`
- `cg_debugInfoCornerOffset`
- `cg_debug_overlay_viewport`
- `cg_debugevents`
- `cg_debugposition`
- `cg_descriptiveText`
- `cg_dobjdump`
- `cg_draw2D`
- `cg_drawBreathHint`
- `cg_drawCrosshair`
- `cg_drawCrosshairNames`
- `cg_drawCrosshairNamesPosX`
- `cg_drawCrosshairNamesPosY`
- `cg_drawDamageDirection`
- `cg_drawDamageFlash`

**format strings** (50)

- `        %3d %3d %3d %3d %3d %3d %3d %3d`
- `        %4u %4u %4u %4u %4u %4u %4u %4u`
- `      %s "%s"`
- `      %s "%s" -- latched "%s"`
- `      dvar set %s %s`
- `    Component %d: %dhx%dv q=%d`
- `    Component %d: dc=%d ac=%d`
- `    localized assets game folder for %s`
- `    localized assets iwd file for %s`
- `    rejected connect from checksum %i (should be %i)`
- `    rejected connect from protocol version %i (should be %i)`
- `    rejected connect with stat format checksum %u (should be %u)`
- `    rejected connect with stat version %i (should be %i)`
- `    with %d x %d thumbnail image`
- `   Asleep: %i`
- `   Awake: %i`
- `   snapshot:%i  delta:%i  ping:%i`
- `  %% Total    %% Received %% Xferd  Average Speed   Time    Time     Time  Current`
- `  From file %s, line %d`
- `  Ss=%d, Se=%d, Ah=%d, Al=%d`
- `  Trying %s... `
- ` %.0f GHz %i MB`
- ` %5.1f MB %s total image size`
- ` %i %i %i %i %i %i %i`
- ` %i total images`
- ` DlocalVarInt( %s ) = %i`
- ` HTTP/%d.%d %3d`
- ` Offset : %i`
- ` Offset : %i, length: %i`
- ` lerp = %.2f`
- ` with voice data for %sclients `
- `"%s" %f %f %f %f`
- `"%s" is not a valid value for hudelem field "%s"`
- `"%s" is not a valid weapon hud icon type to override`
- `"%s" is not bound`
- `"%s" is: "%s^7" default: "%s^7"`
- `"%s" isn't a valid key`
- `"%s" mail property in playerdata.def was not a bool`
- `"%s" mail property in playerdata.def was not a string`
- `"%s" mail property in playerdata.def was not an int`
- `"SetA" is deprecated.  Forcing "%s" to be a "Set" command, instead.`
- `"mail" array in playerdata.def must not be larger than %i`
- `#error directive: %s`
- `#tIMoving client %i to %i with xuid %llx, xnaddr %s, nat type %s, npId %s`
- `$BDirective empty in string '%s'`
- `%-18.18s %5.1f`
- `%.0f %.0f %.0f`
- `%02d:%02d:%02d`
- `%02x%02x%02x%02x.%02x%02x%02x%02x%02x%02x:%i`
- `%04d%02d%02d %02d:%02d:%02d GMT`

### `iw4x.dll`

- 10,441 strings extraites (ASCII + UTF-16LE, ≥6 chars)

**URLs / hosts** (6)

- `http://{}/v1/servers/iw4x?protocol={}`
- `https://api.github.com/repos/iw4x/iw4x-client/releases/latest`
- `https://iw4x.io`
- `https://iw4x.io/install`
- `https://iw4x.io/v1`
- `https://raw.githubusercontent.com/iw4x/iw4x-cache`

**chemins Windows** (30)

- `D:\a\iw4x-client\iw4x-client\build\bin\Win32\Release\iw4x.pdb`
- `D:\a\iw4x-client\iw4x-client\deps\mongoose\mongoose.c`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\arena.cc`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\descriptor.cc`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\descriptor.h`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\descriptor_database.cc`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\dynamic_message.cc`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\dynamic_message.h`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\extension_set.cc`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\extension_set_heavy.cc`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\extension_set_inl.h`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\generated_message_reflection.cc`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\io\coded_stream.cc`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\io\tokenizer.cc`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\io\zero_copy_stream.cc`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\io\zero_copy_stream_impl_lite.cc`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\map_field.cc`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\map_field.h`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\message.cc`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\message_lite.cc`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\parse_context.h`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\reflection_internal.h`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\reflection_ops.cc`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\repeated_ptr_field.cc`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\stubs\strutil.cc`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\stubs\substitute.cc`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\text_format.cc`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\wire_format.cc`
- `D:\a\iw4x-client\iw4x-client\deps\protobuf\src\google\protobuf\wire_format_lite.cc`
- `D:\a\iw4x-client\iw4x-client\src\Game\Zone.cpp`

**chemins Unix** (22)

- `/api.github.com/repos/iw4x/iw4x-client/releases/latest`
- `/dd/yy`
- `/dev/../`
- `/dev/console`
- `/dev/full`
- `/dev/sdb`
- `/dev/sr0`
- `/dev/tty0`
- `/dev/urandom`
- `/dump/stray`
- `/images/logo.bmp`
- `/images/splash.bmp`
- `/iw4x.io/install`
- `/iw4x.io/v1`
- `/protobuf/descriptor.proto`
- `/protobuf/io/coded_stream.h.`
- `/protobuf/types/descriptorpb`
- `/raw.githubusercontent.com/iw4x/iw4x-cache`
- `/scriptmenus/callvote.menu`
- `/scriptmenus/kickplayer.menu`
- `/v1/servers/iw4x`
- `/var/log/iw4x.log`

**PDB (debug paths)** (1)

- `D:\a\iw4x-client\iw4x-client\build\bin\Win32\Release\iw4x.pdb`

**RTTI (.?AV…)** (1)

- `.?AVtype_info@@`

**DVAR / cmd suspect** (50)

- `cg_chatWidth`
- `cg_drawDisconnect`
- `cg_drawVersion`
- `cg_drawVersionX`
- `cg_drawVersionY`
- `cg_fontIconAutocomplete`
- `cg_fontIconAutocompleteHint`
- `cg_mapLocationSelectionCursorSpeed`
- `cg_newColors`
- `cg_noclip_scaler`
- `cg_predictItems`
- `cg_recoilMultiplier`
- `cg_ufo_scaler`
- `cl_anonymous`
- `cl_autoRecord`
- `cl_bypassMouseInput`
- `cl_debug_rumbles`
- `cl_demosKeep`
- `cl_maxpackets`
- `cl_modVidRestart`
- `cl_notifyFriendState`
- `cl_rumbleScale`
- `cl_updateAvailable`
- `com_errorMessage`
- `com_errorResolveCommand`
- `com_errorTitle`
- `com_logFilter`
- `com_maxfps`
- `com_plasticcase_green_big_us_dirt`
- `g_ColorBlind_EnemyTeam`
- `g_ColorBlind_MyTeam`
- `g_TeamColor_EnemyTeam`
- `g_TeamColor_MyTeam`
- `g_antilag`
- `g_firstLaunch`
- `g_gametype`
- `g_hardcore`
- `g_loadingInitialZones`
- `g_log_add`
- `g_log_del`
- `g_log_list`
- `g_log_menu_allocations`
- `r_autopriority`
- `r_colorBlind`
- `r_customAspectRatio`
- `r_draw`
- `r_drawAabbTrees`
- `r_drawClipmap`
- `r_drawDebugDistance`
- `r_drawLights`

**format strings** (50)

- `  <tr><td><a href="%.*s%s">%s%s</a></td><td name=%lu>%s</td><td name=%lld>%s</td></tr>`
- `"%s" -proc %d`
- `# Material count: %d`
- `%-6llx %d %s:%d:%s`
- `%02d:%02d:%02d`
- `%Y%m%d%H%M%S`
- `%Y-%m-%d %H:%M:%S `
- `%c "Chat is disabled"`
- `%c "GAME_CALLEDAVOTE`
- `%c "GAME_CHEATSNOTENABLED"`
- `%c "GAME_CLIENTNOTONSERVER"`
- `%c "GAME_INVALIDGAMETYPE"`
- `%c "GAME_INVALIDVOTESTRING"`
- `%c "GAME_MAXVOTESCALLED"`
- `%c "GAME_MUSTBEALIVECOMMAND"`
- `%c "GAME_NOSPECTATORCALLVOTE"`
- `%c "GAME_NOSPECTATORVOTE"`
- `%c "GAME_NOTONROTATION"`
- `%c "GAME_NOVOTEINPROGRESS"`
- `%c "GAME_TYPEMAP_NOCHANGE"`
- `%c "GAME_USAGE`
- `%c "GAME_VOTEALREADYCAST"`
- `%c "GAME_VOTEALREADYINPROGRESS"`
- `%c "GAME_VOTECAST"`
- `%c "GAME_VOTECOMMANDSARE`
- `%c "GAME_VOTINGNOTENABLED"`
- `%c "GAME_VOTINGNOTENOUGHPLAYERS"`
- `%c "You are muted"`
- `%c "You were muted"`
- `%c "You were unmuted"`
- `%lu %.*s -> %s %d`
- `%lu %c%c %c%c%c%c%c`
- `%lu %p %d:%d %ld err %d`
- `%lu %p accepted %M -> %M`
- `%lu %p closed`
- `%lu %p snd %ld/%ld rcv %ld/%ld n=%ld err=%d`
- `%lu accept failed, errno %d`
- `%lu stat(%s): %d`
- `%s %s build %s %s`
- `%s %s; map_restart`
- `%s : %d/%d players : map %s`
- `%s cannot have &&0 as conversion format: "%s"`
- `%s does not exist`
- `%s too long when translated`
- `%s truncated`
- `%s-r5039-%s.dmp`
- `%sContent-Length:         `
- `%sContent-Length:            `
- `%s\iw4x\video\%s.bik`
- `%u.%u.%u.%u:%hu`

### `iw4mp.exe`

- 16,973 strings extraites (ASCII + UTF-16LE, ≥6 chars)

**URLs / hosts** (9)

- `http://curl.haxx.se/rfc/cookie_spec.html`
- `http://ocsp.digicert.com0A`
- `http://ocsp.digicert.com0C`
- `http://ocsp.digicert.com0X`
- `http://ocsp.digicert.com0\`
- `http://schemas.xmlsoap.org/soap/encoding/`
- `http://schemas.xmlsoap.org/soap/envelope/`
- `http://web1.pc.iw4.iwnet.infinityward.com/pc/`
- `http://www.digicert.com/CPS0`

**chemins Windows** (1)

- `c:\trees\iw4-pc\game\pc\iw4mp_ship.pdb`

**chemins Unix** (24)

- `/cacerts.digicert.com/DigiCertAssuredIDRootCA.crt0E`
- `/cacerts.digicert.com/DigiCertTrustedG4CodeSigningRS`
- `/cacerts.digicert.com/DigiCertTrustedG4RSA4096SHA256`
- `/cacerts.digicert.com/DigiCertTrustedRootG4.crt0C`
- `/configStrings/configStrings_pc_`
- `/crl3.digicert.com/DigiCertAssuredIDRootCA.crl0`
- `/crl3.digicert.com/DigiCertTrustedG4CodeSigningRS`
- `/crl3.digicert.com/DigiCertTrustedG4RSA4096SHA256`
- `/crl3.digicert.com/DigiCertTrustedRootG4.crl0`
- `/crl4.digicert.com/DigiCertTrustedG4CodeSigningRS`
- `/curl.haxx.se/rfc/cookie_spec.html`
- `/dd/yy`
- `/dust/light_shaft_dust_large_mp_vaca`
- `/explosions/electrical_transformer_spark_r`
- `/explosions/helicopter_explosion_hind_cher`
- `/mp/gametypes`
- `/mp/gametypes/`
- `/mp/gametypes/_gametypes.txt`
- `/run/10180`
- `/run/10190`
- `/schemas.xmlsoap.org/soap/encoding/`
- `/schemas.xmlsoap.org/soap/envelope/`
- `/share/raw/maps/createfx/`
- `/www.digicert.com/CPS0`

**PDB (debug paths)** (1)

- `c:\trees\iw4-pc\game\pc\iw4mp_ship.pdb`

**RTTI (.?AV…)** (2)

- `.?AVCCallbackBase@@`
- `.?AVtype_info@@`

**DVAR / cmd suspect** (50)

- `ai_crawling`
- `ai_killed`
- `ai_nosight`
- `ai_only`
- `ai_pain`
- `cg_ScoresPing_BgColor`
- `cg_ScoresPing_HighColor`
- `cg_ScoresPing_Interval`
- `cg_ScoresPing_LowColor`
- `cg_ScoresPing_MaxBars`
- `cg_ScoresPing_MedColor`
- `cg_airstrikeKillCamCloseXYDist`
- `cg_airstrikeKillCamCloseZDist`
- `cg_airstrikeKillCamFarBlur`
- `cg_airstrikeKillCamFarBlurDist`
- `cg_airstrikeKillCamFarBlurStart`
- `cg_airstrikeKillCamFov`
- `cg_airstrikeKillCamNearBlur`
- `cg_airstrikeKillCamNearBlurEnd`
- `cg_airstrikeKillCamNearBlurStart`
- `cg_blood`
- `cg_brass`
- `cg_centertime`
- `cg_chatHeight`
- `cg_chatTime`
- `cg_connectionIconSize`
- `cg_constantSizeHeadIcons`
- `cg_crosshairAlpha`
- `cg_crosshairAlphaMin`
- `cg_crosshairDynamic`
- `cg_crosshairEnemyColor`
- `cg_crosshairVerticalOffset`
- `cg_cullBulletAngle`
- `cg_cullBullets`
- `cg_cursorHints`
- `cg_deadChatWithDead`
- `cg_deadChatWithTeam`
- `cg_deadHearAllLiving`
- `cg_deadHearTeamLiving`
- `cg_descriptiveText`
- `cg_draw2D`
- `cg_drawBreathHint`
- `cg_drawCrosshair`
- `cg_drawCrosshairNames`
- `cg_drawCrosshairNamesPosX`
- `cg_drawCrosshairNamesPosY`
- `cg_drawDamageDirection`
- `cg_drawDamageFlash`
- `cg_drawFPS`
- `cg_drawFPSLabels`

**format strings** (50)

- `        %3d %3d %3d %3d %3d %3d %3d %3d`
- `        %4u %4u %4u %4u %4u %4u %4u %4u`
- `    Component %d: %dhx%dv q=%d`
- `    Component %d: dc=%d ac=%d`
- `    with %d x %d thumbnail image`
- `  %% Total    %% Received %% Xferd  Average Speed   Time    Time     Time  Current`
- `  Ss=%d, Se=%d, Ah=%d, Al=%d`
- `  Trying %s... `
- ` %.0f GHz %i MB`
- ` %i %i %i %i %i %i %i %i`
- ` HTTP/%d.%d %3d`
- `"%s" is not a valid value for hudelem field "%s"`
- `"%s" mail property in playerdata.def was not a bool`
- `"%s" mail property in playerdata.def was not a string`
- `"%s" mail property in playerdata.def was not an int`
- `"mail" array in playerdata.def must not be larger than %i`
- `%02d:%02d:%02d`
- `%04d%02d%02d %02d:%02d:%02d GMT`
- `%04d%02d%02d%02d%02d%02d`
- `%08x%08x%08x%08x%08x%08x%08x%08x%08x`
- `%127[^,],%127s`
- `%127[^= ]%*[ =]%255s`
- `%15[^?&/:]://%c`
- `%3lld %s  %3lld %s  %3lld %s  %s  %s %s %s %s %s`
- `%8x%8x%8x%8x%8x%8x%8x%8x%8x`
- `%GAMEPRINTENDFILE:GAMEPRINTP4ENABLED:`
- `%c "EXE_CANNOTKICKHOSTPLAYER"`
- `%c "EXE_SERVERCOMMANDOVERFLOW"`
- `%c "GAME_INACTIVEDROPWARNING"`
- `%c "GAME_PICKUP_AMMO`
- `%c "GAME_PICKUP_CLIPONLY_AMMO`
- `%c %i "%s" %g %g %g`
- `%c %i %f %i %i`
- `%c %i %i %i %i%s`
- `%c%c%c%c%s%c%c`
- `%callout_destroyed_helicopter_minigun`
- `%com_electrical_transformer_large_des`
- `%d (unknown)`
- `%d bytes of chunk left`
- `%d,%d,%d,%d,%d,%d`
- `%explosions/airconditioner_ex_explode`
- `%explosions/water_collector_explosion`
- `%fire/jet_afterburner_harrier_damaged`
- `%foliage_cod5_tree_jungle_01_animated`
- `%foliage_cod5_tree_jungle_02_animated`
- `%foliage_cod5_tree_jungle_03_animated`
- `%foliage_dead_pine_med_animated_sway2`
- `%foliage_tree_birch_yellow_1_animated`
- `%g %g %g %g %g %g %.0f 0`
- `%g %g %g %g %g %g %.0f 1 %g %g %g %g %g %g %g %g %g`

### `iw4sp.exe`

- 15,375 strings extraites (ASCII + UTF-16LE, ≥6 chars)

**URLs / hosts** (5)

- `http://ocsp.digicert.com0A`
- `http://ocsp.digicert.com0\`
- `http://schemas.xmlsoap.org/soap/encoding/`
- `http://schemas.xmlsoap.org/soap/envelope/`
- `http://www.digicert.com/CPS0`

**chemins Windows** (6)

- `c:\trees\build-iw4-pc\iw4\code_source\src\CodeOutput\iw4sp\Steam_CEG_bin\iw4sp.pdb`
- `c:\trees\build-iw4-pc\iw4\code_source\src\game\g_main.cpp`
- `c:\trees\build-iw4-pc\iw4\code_source\src\game\g_scr_main_sp.cpp`
- `c:\trees\build-iw4-pc\iw4\code_source\src\server\sv_game.cpp`
- `c:\trees\build-iw4-pc\iw4\code_source\src\universal\com_memory.cpp`
- `c:\trees\build-iw4-pc\iw4\code_source\src\universal\physicalmemory.cpp`

**chemins Unix** (13)

- `/cacerts.digicert.com/DigiCertTrustedG4CodeSigningRS`
- `/cacerts.digicert.com/DigiCertTrustedRootG4.crt0C`
- `/crl3.digicert.com/DigiCertTrustedG4CodeSigningRS`
- `/crl3.digicert.com/DigiCertTrustedRootG4.crl0`
- `/crl4.digicert.com/DigiCertTrustedG4CodeSigningRS`
- `/dd/yy`
- `/green/blue`
- `/run/10180`
- `/run/10190`
- `/schemas.xmlsoap.org/soap/encoding/`
- `/schemas.xmlsoap.org/soap/envelope/`
- `/source_data/string_resources/subtitle.st`
- `/www.digicert.com/CPS0`

**PDB (debug paths)** (1)

- `c:\trees\build-iw4-pc\iw4\code_source\src\CodeOutput\iw4sp\Steam_CEG_bin\iw4sp.pdb`

**RTTI (.?AV…)** (2)

- `.?AVCCallbackBase@@`
- `.?AVtype_info@@`

**DVAR / cmd suspect** (50)

- `ai_ShowCanshootChecks`
- `ai_accuracyDistScale`
- `ai_accuracy_attackerCountDecrease`
- `ai_accuracy_attackerCountMax`
- `ai_badPathSpam`
- `ai_busyEventDistBullet`
- `ai_busyEventDistDeath`
- `ai_busyEventDistExplosion`
- `ai_busyEventDistFootstep`
- `ai_busyEventDistFootstepSprint`
- `ai_busyEventDistFootstepWalk`
- `ai_busyEventDistGrenadePing`
- `ai_busyEventDistGunShot`
- `ai_busyEventDistGunShotTeam`
- `ai_busyEventDistNewEnemy`
- `ai_busyEventDistPain`
- `ai_busyEventDistProjImpact`
- `ai_busyEventDistProjPing`
- `ai_busyEventDistSilencedShot`
- `ai_corpseCount`
- `ai_count`
- `ai_coverScore_coverType`
- `ai_coverScore_dangerousNode`
- `ai_coverScore_distance`
- `ai_coverScore_engagement`
- `ai_coverScore_nodeAngle`
- `ai_coverScore_playerLos`
- `ai_coverScore_priority`
- `ai_coverScore_targetDir`
- `ai_coverScore_visibility`
- `ai_coverSearchInterval`
- `ai_dangerReactGoalRadius`
- `ai_debugAnimDeltas`
- `ai_debugCorpsePlant`
- `ai_debugCoverEntityNum`
- `ai_debugCoverSelection`
- `ai_debugEngagementDist`
- `ai_debugEntIndex`
- `ai_debugFindPathDirect`
- `ai_debugFindPathLock`
- `ai_debugFindPathWidth`
- `ai_debugGrenadeFailSafe`
- `ai_debugGrenadeHintArc`
- `ai_debugGunBlocked`
- `ai_debugMayMove`
- `ai_debugMeleeAttackSpots`
- `ai_debugOverlay`
- `ai_debugPlayerLOS`
- `ai_debugTargets`
- `ai_debugThreatSelection`

**format strings** (50)

- `        %3d %3d %3d %3d %3d %3d %3d %3d`
- `        %4u %4u %4u %4u %4u %4u %4u %4u`
- `      %s "%s"`
- `      %s "%s" -- latched "%s"`
- `      dvar set %s %s`
- `    Component %d: %dhx%dv q=%d`
- `    Component %d: dc=%d ac=%d`
- `    localized assets game folder for %s`
- `    localized assets iwd file for %s`
- `    with %d x %d thumbnail image`
- `   Asleep: %i`
- `   Awake: %i`
- `   snapshot:%i`
- `  (savename: %s)`
- `  From file %s, line %d`
- `  Ss=%d, Se=%d, Ah=%d, Al=%d`
- ` %.0f GHz %i MB`
- ` %5.1f MB %s total image size`
- ` %i total images`
- ` lerp = %.2f`
- ` targetname %s`
- ` |@operator %s after operator in #if/#elif`
- `"%s" %f %f %f %f`
- `"%s" grenade weapon is not precached`
- `"%s" is not a valid dvar to set using setclientdvar`
- `"%s" is not a valid value for hudelem field "%s"`
- `"%s" is not a valid weapon hud icon type to override`
- `"%s" is not bound`
- `"%s" is: "%s^7" default: "%s^7"`
- `"Enemy crosshair ranges should be less than %f `
- `"SetA" is deprecated.  Forcing "%s" to be a "Set" command, instead.`
- `#>dvar '%s' doesn't exist`
- `#error directive: %s`
- `%-18.18s %5.1f`
- `%-64s %7.1f KB`
- `%-64s FAILED TO LOAD`
- `%-64s FILE NOT FOUND`
- `%.0f %.0f %.0f`
- `%.2f %.2f %.2f`
- `%02d:%02d:%02d`
- `%02x%02x%02x%02x.%02x%02x%02x%02x%02x%02x:%i`
- `%2i (%s) %s -> %s vol^3%04.2f ^7rvol^3%04.2f ^7dist^3%5i ^7pit^3%04.2f`
- `%3i:BAD CMD %i`
- `%4i | %16s | %10i`
- `%4i: Type: %s, Class: %s, model '%s', origin: %6.1f %6.1f %6.1f`
- `%4i: Type: %s, Class: %s, origin: %6.1f %6.1f %6.1f`
- `%4s | %16s | %10s`
- `%8i bytes total hunk`
- `%8i high permanent`
- `%8i high temp`

### `IW4Vanilla.exe`

- 17,339 strings extraites (ASCII + UTF-16LE, ≥6 chars)

**URLs / hosts** (3)

- `http://curl.haxx.se/rfc/cookie_spec.html`
- `http://schemas.xmlsoap.org/soap/encoding/`
- `http://schemas.xmlsoap.org/soap/envelope/`

**chemins Windows** (2)

- `c:\trees\build-iw4-pc\iw4\code_source\src\universal\com_memory.cpp`
- `c:\trees\build-iw4-pc\iw4\code_source\src\universal\physicalmemory.cpp`

**chemins Unix** (13)

- `/configStrings/configStrings_pc_`
- `/curl.haxx.se/rfc/cookie_spec.html`
- `/dd/yy`
- `/green/blue`
- `/mp/gametypes`
- `/mp/gametypes/`
- `/mp/gametypes/_callbacksetup`
- `/mp/gametypes/_gametypes.txt`
- `/run/10180`
- `/run/10190`
- `/schemas.xmlsoap.org/soap/encoding/`
- `/schemas.xmlsoap.org/soap/envelope/`
- `/source_data/string_resources/subtitle.st`

**RTTI (.?AV…)** (2)

- `.?AVCCallbackBase@@`
- `.?AVtype_info@@`

**DVAR / cmd suspect** (50)

- `ai_nosight`
- `cg_ScoresPing_BgColor`
- `cg_ScoresPing_HighColor`
- `cg_ScoresPing_Interval`
- `cg_ScoresPing_LowColor`
- `cg_ScoresPing_MaxBars`
- `cg_ScoresPing_MedColor`
- `cg_airstrikeKillCamCloseXYDist`
- `cg_airstrikeKillCamCloseZDist`
- `cg_airstrikeKillCamFarBlur`
- `cg_airstrikeKillCamFarBlurDist`
- `cg_airstrikeKillCamFarBlurStart`
- `cg_airstrikeKillCamFov`
- `cg_airstrikeKillCamNearBlur`
- `cg_airstrikeKillCamNearBlurEnd`
- `cg_airstrikeKillCamNearBlurStart`
- `cg_blood`
- `cg_brass`
- `cg_centertime`
- `cg_chatHeight`
- `cg_chatTime`
- `cg_chatWithOtherTeams`
- `cg_connectionIconSize`
- `cg_constantSizeHeadIcons`
- `cg_crosshairAlpha`
- `cg_crosshairAlphaMin`
- `cg_crosshairDynamic`
- `cg_crosshairEnemyColor`
- `cg_crosshairVerticalOffset`
- `cg_cullBulletAngle`
- `cg_cullBullets`
- `cg_cursorHints`
- `cg_deadChatWithDead`
- `cg_deadChatWithTeam`
- `cg_deadHearAllLiving`
- `cg_deadHearTeamLiving`
- `cg_debugInfoCornerOffset`
- `cg_debug_overlay_viewport`
- `cg_debugevents`
- `cg_debugposition`
- `cg_descriptiveText`
- `cg_dobjdump`
- `cg_draw2D`
- `cg_drawBreathHint`
- `cg_drawCrosshair`
- `cg_drawCrosshairNames`
- `cg_drawCrosshairNamesPosX`
- `cg_drawCrosshairNamesPosY`
- `cg_drawDamageDirection`
- `cg_drawDamageFlash`

**format strings** (50)

- `        %3d %3d %3d %3d %3d %3d %3d %3d`
- `        %4u %4u %4u %4u %4u %4u %4u %4u`
- `      %s "%s"`
- `      %s "%s" -- latched "%s"`
- `      dvar set %s %s`
- `    Component %d: %dhx%dv q=%d`
- `    Component %d: dc=%d ac=%d`
- `    localized assets game folder for %s`
- `    localized assets iwd file for %s`
- `    rejected connect from checksum %i (should be %i)`
- `    rejected connect from protocol version %i (should be %i)`
- `    rejected connect with stat format checksum %u (should be %u)`
- `    rejected connect with stat version %i (should be %i)`
- `    with %d x %d thumbnail image`
- `   Asleep: %i`
- `   Awake: %i`
- `   snapshot:%i  delta:%i  ping:%i`
- `  %% Total    %% Received %% Xferd  Average Speed   Time    Time     Time  Current`
- `  From file %s, line %d`
- `  Ss=%d, Se=%d, Ah=%d, Al=%d`
- `  Trying %s... `
- ` %.0f GHz %i MB`
- ` %5.1f MB %s total image size`
- ` %i %i %i %i %i %i %i`
- ` %i total images`
- ` DlocalVarInt( %s ) = %i`
- ` HTTP/%d.%d %3d`
- ` Offset : %i`
- ` Offset : %i, length: %i`
- ` lerp = %.2f`
- ` with voice data for %sclients `
- `"%s" %f %f %f %f`
- `"%s" is not a valid value for hudelem field "%s"`
- `"%s" is not a valid weapon hud icon type to override`
- `"%s" is not bound`
- `"%s" is: "%s^7" default: "%s^7"`
- `"%s" isn't a valid key`
- `"%s" mail property in playerdata.def was not a bool`
- `"%s" mail property in playerdata.def was not a string`
- `"%s" mail property in playerdata.def was not an int`
- `"SetA" is deprecated.  Forcing "%s" to be a "Set" command, instead.`
- `"mail" array in playerdata.def must not be larger than %i`
- `#error directive: %s`
- `#tIMoving client %i to %i with xuid %llx, xnaddr %s, nat type %s, npId %s`
- `$BDirective empty in string '%s'`
- `%-18.18s %5.1f`
- `%.0f %.0f %.0f`
- `%02d:%02d:%02d`
- `%02x%02x%02x%02x.%02x%02x%02x%02x%02x%02x:%i`
- `%04d%02d%02d %02d:%02d:%02d GMT`

### `iw4v.dll`

- 9,901 strings extraites (ASCII + UTF-16LE, ≥6 chars)

**chemins Windows** (29)

- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\build\bin\Win32\Release\iw4v.pdb`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\arena.cc`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\descriptor.cc`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\descriptor.h`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\descriptor_database.cc`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\dynamic_message.cc`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\dynamic_message.h`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\extension_set.cc`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\extension_set_heavy.cc`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\extension_set_inl.h`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\generated_message_reflection.cc`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\io\coded_stream.cc`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\io\tokenizer.cc`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\io\zero_copy_stream.cc`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\io\zero_copy_stream_impl_lite.cc`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\map_field.cc`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\map_field.h`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\message.cc`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\message_lite.cc`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\parse_context.h`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\reflection_internal.h`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\reflection_ops.cc`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\repeated_ptr_field.cc`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\stubs\strutil.cc`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\stubs\substitute.cc`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\text_format.cc`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\wire_format.cc`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\deps\protobuf\src\google\protobuf\wire_format_lite.cc`
- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\src\Game\Zone.cpp`

**chemins Unix** (17)

- `/dd/yy`
- `/dev/../`
- `/dev/console`
- `/dev/full`
- `/dev/sdb`
- `/dev/sr0`
- `/dev/tty0`
- `/dev/urandom`
- `/dump/stray`
- `/images/logo.bmp`
- `/images/splash.bmp`
- `/protobuf/descriptor.proto`
- `/protobuf/io/coded_stream.h.`
- `/protobuf/types/descriptorpb`
- `/scriptmenus/callvote.menu`
- `/scriptmenus/kickplayer.menu`
- `/var/log/iw4x.log`

**PDB (debug paths)** (1)

- `C:\Users\scfge\source\repos\iw4x-client-eliott\iw4x-client\build\bin\Win32\Release\iw4v.pdb`

**RTTI (.?AV…)** (1)

- `.?AVtype_info@@`

**DVAR / cmd suspect** (50)

- `cg_chatWidth`
- `cg_drawDisconnect`
- `cg_fontIconAutocomplete`
- `cg_fontIconAutocompleteHint`
- `cg_mapLocationSelectionCursorSpeed`
- `cg_newColors`
- `cg_noclip_scaler`
- `cg_predictItems`
- `cg_recoilMultiplier`
- `cg_ufo_scaler`
- `cl_anonymous`
- `cl_autoRecord`
- `cl_bypassMouseInput`
- `cl_debug_rumbles`
- `cl_demosKeep`
- `cl_maxpackets`
- `cl_notifyFriendState`
- `cl_rumbleScale`
- `com_errorMessage`
- `com_errorResolveCommand`
- `com_errorTitle`
- `com_logFilter`
- `com_maxfps`
- `com_plasticcase_green_big_us_dirt`
- `g_ColorBlind_EnemyTeam`
- `g_ColorBlind_MyTeam`
- `g_IW4vFirstLaunch`
- `g_TeamColor_EnemyTeam`
- `g_TeamColor_MyTeam`
- `g_antilag`
- `g_gametype`
- `g_hardcore`
- `g_loadingInitialZones`
- `g_log_add`
- `g_log_del`
- `g_log_list`
- `g_log_menu_allocations`
- `r_autopriority`
- `r_colorBlind`
- `r_customAspectRatio`
- `r_draw`
- `r_drawAabbTrees`
- `r_drawClipmap`
- `r_drawDebugDistance`
- `r_drawLights`
- `r_drawModelBoundingBoxes`
- `r_drawModelNames`
- `r_drawRunners`
- `r_drawSceneModelCollisions`
- `r_drawTriggers`

**format strings** (50)

- `"%s" -proc %d`
- `# Material count: %d`
- `%02d:%02d:%02d`
- `%Y%m%d%H%M%S`
- `%Y-%m-%d %H:%M:%S `
- `%c "Chat is disabled"`
- `%c "GAME_CALLEDAVOTE`
- `%c "GAME_CHEATSNOTENABLED"`
- `%c "GAME_CLIENTNOTONSERVER"`
- `%c "GAME_INVALIDGAMETYPE"`
- `%c "GAME_INVALIDVOTESTRING"`
- `%c "GAME_MAXVOTESCALLED"`
- `%c "GAME_MUSTBEALIVECOMMAND"`
- `%c "GAME_NOSPECTATORCALLVOTE"`
- `%c "GAME_NOSPECTATORVOTE"`
- `%c "GAME_NOTONROTATION"`
- `%c "GAME_NOVOTEINPROGRESS"`
- `%c "GAME_TYPEMAP_NOCHANGE"`
- `%c "GAME_USAGE`
- `%c "GAME_VOTEALREADYCAST"`
- `%c "GAME_VOTEALREADYINPROGRESS"`
- `%c "GAME_VOTECAST"`
- `%c "GAME_VOTECOMMANDSARE`
- `%c "GAME_VOTINGNOTENABLED"`
- `%c "GAME_VOTINGNOTENOUGHPLAYERS"`
- `%c "You are muted"`
- `%c "You were muted"`
- `%c "You were unmuted"`
- `%s %s build %s %s`
- `%s %s; map_restart`
- `%s : %d/%d players : map %s`
- `%s cannot have &&0 as conversion format: "%s"`
- `%s does not exist`
- `%s too long when translated`
- `%s-r5039-%s.dmp`
- `%s\iw4x\video\%s.bik`
- `%u.%u.%u.%u:%hu`
- `(file '%s'%s, line %d)`
- `2%.google.protobuf.FieldDescriptorProto`
- `2%.google.protobuf.OneofDescriptorProto`
- `38;2;%d;%d;%d`
- `48;2;%d;%d;%d`
- `B%s: %s All those moments will be lost in time, like tears in rain.`
- `Build %s. Logfile opened on %s`
- `Built using the IW4x ZoneBuilder! {:%d-%m-%Y %H:%M:%OS}`
- `CLASS_SLOT%i`
- `Can't play rumble asset '%s' because it is not registered.`
- `DLC %d does not exist!`
- `Failed to convert '%s' to native file system path. Got error '%s'`
- `File [%s] is not a %s`

### `iw4v-plus.dll`

- 6,610 strings extraites (ASCII + UTF-16LE, ≥6 chars)

**chemins Unix** (1)

- `/BV/KE`

**DVAR / cmd suspect** (1)

- `r_GX`

### `iw4x-launcher`

- 57,374 strings extraites (ASCII + UTF-16LE, ≥6 chars)

**URLs / hosts** (4)

- `https://api.github.com`
- `https://cdn.iw4x.io/`
- `https://cdn.iw4x.io/update.json`
- `https://gcc.gnu.org/bugs/):`

**chemins Unix** (50)

- `/../../../../libstdc`
- `/../../../libstdc`
- `/../../libgcc`
- `/../../libgcc/../gcc/config/i386`
- `/../../libgcc/../include`
- `/../../libgcc/unwind-c.c`
- `/../../libgcc/unwind-dw2-fde-dip.c`
- `/../../libgcc/unwind-dw2.c`
- `/../filesystem`
- `/../include`
- `/../libgcc`
- `/../libiberty`
- `/../shared`
- `/IKE/Oakley`
- `/SECG/WTLS`
- `/X9.62/SECG`
- `/bin/sh`
- `/builddir/build/BUILD/gcc-15.2.1-build/gcc-15.2.1-20260123/obj-x86_64-redhat-linux/x86_64-redhat-linux/libstdc`
- `/cdn.iw4x.io/update.json`
- `/dev/hwrng`
- `/dev/null`
- `/dev/random`
- `/dev/srandom`
- `/dev/tty`
- `/dev/uraH`
- `/dev/urandom`
- `/etc/os-release`
- `/gcc.gnu.org/bugs/`
- `/home/wroy/.build2/cache/src/libboost-asio-1.87.0/include/boost/asio/basic_waitable_timer.hpp`
- `/home/wroy/.build2/cache/src/libboost-asio-1.87.0/include/boost/asio/detail/impl/epoll_reactor.ipp`
- `/home/wroy/.build2/cache/src/libboost-asio-1.87.0/include/boost/asio/detail/impl/eventfd_select_interrupter.ipp`
- `/home/wroy/.build2/cache/src/libboost-asio-1.87.0/include/boost/asio/detail/impl/posix_event.ipp`
- `/home/wroy/.build2/cache/src/libboost-asio-1.87.0/include/boost/asio/detail/impl/posix_mutex.ipp`
- `/home/wroy/.build2/cache/src/libboost-asio-1.87.0/include/boost/asio/detail/impl/posix_thread.ipp`
- `/home/wroy/.build2/cache/src/libboost-asio-1.87.0/include/boost/asio/detail/reactive_socket_connect_op.hpp`
- `/home/wroy/.build2/cache/src/libboost-asio-1.87.0/include/boost/asio/detail/reactive_socket_recv_op.hpp`
- `/home/wroy/.build2/cache/src/libboost-asio-1.87.0/include/boost/asio/detail/reactive_socket_send_op.hpp`
- `/home/wroy/.build2/cache/src/libboost-asio-1.87.0/include/boost/asio/detail/reactive_socket_service.hpp`
- `/home/wroy/.build2/cache/src/libboost-asio-1.87.0/include/boost/asio/impl/awaitable.hpp`
- `/home/wroy/.build2/cache/src/libboost-asio-1.87.0/include/boost/asio/impl/io_context.ipp`
- `/home/wroy/.build2/cache/src/libboost-asio-1.87.0/include/boost/asio/ip/detail/impl/endpoint.ipp`
- `/home/wroy/.build2/cache/src/libboost-asio-1.87.0/include/boost/asio/ssl/detail/impl/engine.ipp`
- `/home/wroy/.build2/cache/src/libboost-asio-1.87.0/include/boost/asio/ssl/impl/context.ipp`
- `/home/wroy/.build2/cache/src/libboost-beast-1.87.0/include/boost/beast/core/detail/buffer.hpp`
- `/home/wroy/.build2/cache/src/libboost-beast-1.87.0/include/boost/beast/core/impl/basic_stream.hpp`
- `/home/wroy/.build2/cache/src/libboost-beast-1.87.0/include/boost/beast/core/impl/flat_buffer.hpp`
- `/home/wroy/.build2/cache/src/libboost-beast-1.87.0/include/boost/beast/http/buffer_body.hpp`
- `/home/wroy/.build2/cache/src/libboost-beast-1.87.0/include/boost/beast/http/detail/basic_parser.ipp`
- `/home/wroy/.build2/cache/src/libboost-beast-1.87.0/include/boost/beast/http/empty_body.hpp`
- `/home/wroy/.build2/cache/src/libboost-beast-1.87.0/include/boost/beast/http/impl/basic_parser.ipp`

**DVAR / cmd suspect** (2)

- `g_cpu_features`
- `r_32_12_16_init_key`

**format strings** (50)

- `                    'refs=%s' % resource['refs'].cast(self._size_t))`
- `            items.append('resource=%s' % resource)`
- `            items.append('upstream=%s' % upstream)`
- `        items.append('block=%s' % block)`
- `        items.append('buffer=%s' % buffer)`
- `        items.append('free=%s' % head['avail'])`
- `        items.append('head=%s' % head['p'])`
- `        return '[%s] = %s' % (k.value(), v)`
- `        return 'monotonic_resource [%s]' % ', '.join(items)`
- `        return 'static_resource [buffer=%s, head=%s, free=%s]' % (`
- `  Hash Algorithm: %s%s`
- `  Mask Algorithm: %s with %s%s`
- `  Minimum Salt Length: %d%s`
- `  Trailer Field: 0x%x%s`
- ` (Unknown SAFI %u)`
- ` FROM '%q'.'%q%s' AS x`
- ` USING INTEGER PRIMARY KEY (%s`
- `"%s" has an existing different identity %d (from "%s")`
- `%'%1%=%C%K%O%s%`
- `%*s      %s%s%s%s`
- `%*s  Profession Info Entry %0d:`
- `%*s%s OF %s {`
- `%*s%s Private-Key:`
- `%*s%s Public-Key:`
- `%*sEntry %0d:`
- `%*sNumber%s: `
- `%*sUnknown AFI %u`
- `%*sZone: %s, User: `
- `%02d%02d%02d%02d%02d%02dZ`
- `%02d:%02d:%02d`
- `%04d%02d%02d%02d%02d%02dZ`
- `%04d-%02d-%02d`
- `%5ld:d=%-2d hl=%ld l=%4ld %s`
- `%5ld:d=%-2d hl=%ld l=inf  %s`
- `%a %b %e %T %Y`
- `%c%04d-%02d-%02d %02d:%02d:%06.3f`
- `%d %d %d %d `
- `%d columns assigned %d values`
- `%d.%d.%d.%d%n`
- `%r %s BY term out of range - should be between 1 and %d`
- `%s %2d %02d:%02d:%02d %d%s`
- `%s %2d %02d:%02d:%02d%.*s %d%s`
- `%s %T already exists`
- `%s %T cannot reference objects in database %s`
- `%s %s%lu (%s0x%lx)`
- `%s RETURNING is not available on virtual tables`
- `%s Salt Length: 0x`
- `%s USING TEMP B-TREE`
- `%s a subset of columns on fts5 contentless-delete table: %s`
- `%s at line %d of [%.10s]`

