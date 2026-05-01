// Agent Frida v5 — hooks par nom canonique du moteur IW4.
//
// Utilise les 700+ fonctions identifiees dans Game/Functions.cpp
// (cf. findings/iw4x-symbols.json). Adresses absolues stables
// puisque pas d'ASLR sur iw4x.exe.
//
// Strategie : hook les fonctions cles du gameplay (per-frame,
// player/server commands, network) pour produire une trace en
// temps reel des evenements moteur.
//
// Usage :
//   .venv/bin/frida -p $(pgrep -fa iw4x.exe | grep -v pgrep | awk '{print $1}' | head -1) \
//                   -l scripts/frida/05-trace-named.js -q -t 30

"use strict";

function readStrSafe(p, max = 200) {
    if (!p || p.isNull()) return null;
    try { return p.readCString(max); }
    catch (e) { return null; }
}

function hookFn(addr, label, formatter) {
    try {
        Interceptor.attach(ptr(addr), {
            onEnter(args) {
                this.captured = [args[0], args[1], args[2], args[3]];
            },
            onLeave(retval) {
                try {
                    const out = formatter ? formatter(this.captured, retval) : null;
                    console.log(`[${label}]  ${out !== null && out !== undefined ? out : ''}`);
                } catch (e) {
                    console.log(`[${label}]  (called)`);
                }
            }
        });
        console.log(`[+] ${label}  @  ${addr}`);
    } catch (e) {
        console.log(`[!] ${label} @ ${addr} : ${e}`);
    }
}

// ============= COMMANDES =============
// Cmd_AddCommand(name, fn)
hookFn("0x00470090", "Cmd_AddCommand", (args) => {
    const name = readStrSafe(args[0]);
    return name ? `'${name}'  -> ${args[1]}` : '<bad>';
});
hookFn("0x004dce00", "Cmd_AddServerCommand", (args) => {
    const name = readStrSafe(args[0]);
    return name ? `'${name}'  -> ${args[1]}` : '<bad>';
});
// Cmd_ExecuteSingleCommand
hookFn("0x00609540", "Cmd_ExecuteSingleCommand", (args) => {
    const txt = readStrSafe(args[1] || args[0]);
    return txt ? `cmd='${txt.substring(0, 100)}'` : null;
});
// Cbuf_AddText (queue command)
hookFn("0x00404b20", "Cbuf_AddText", (args) => {
    const txt = readStrSafe(args[1]);
    return txt ? `txt='${txt.substring(0, 100)}'` : null;
});
// Cbuf_Execute
hookFn("0x004e2c80", "Cbuf_Execute");

// ============= FILESYSTEM =============
hookFn("0x004290c6", "FS_InitFilesystem");
hookFn("0x004823a0", "FS_Startup");
hookFn("0x0043fd90", "FS_FOpenFileWrite", (args) => {
    const f = readStrSafe(args[0]);
    return f ? `'${f}'` : null;
});
hookFn("0x00410bb0", "FS_FOpenFileAppend", (args) => {
    const f = readStrSafe(args[0]);
    return f ? `'${f}'` : null;
});
hookFn("0x00412200", "FS_FOpenFileOverWrite", (args) => {
    const f = readStrSafe(args[0]);
    return f ? `'${f}'` : null;
});

// ============= LOG / DEBUG =============
hookFn("0x00402500", "Com_DPrintf", (args) => {
    const fmt = readStrSafe(args[1] || args[0]);
    return fmt ? `fmt='${fmt.substring(0, 120).replace(/\n/g, '\\n')}'` : null;
});

// ============= SCRIPT (GSC) =============
hookFn("0x00426c8a", "ScriptCompile");
hookFn("0x0042904b", "Scr_FreeScripts");
hookFn("0x00421ee0", "Scr_ShutdownSystem");

// ============= CLIENT / SERVER =============
hookFn("0x00403547", "CL_Disconnect");
hookFn("0x00404ca0", "CL_InitOnceForAllClients");
hookFn("0x004236a5", "CL_InitCGame");
hookFn("0x0041d010", "CL_CheckForResend");
hookFn("0x00411c16", "CL_WritePacket");
hookFn("0x00414d92", "SV_ExecuteClientCommands");
hookFn("0x00401950", "SV_UserinfoChanged", (args) => {
    return `clientNum=${args[0].toInt32()}`;
});

// ============= COMMON / FRAME LOOP =============
hookFn("0x0041fde0", "Com_Frame");  // <-- attention, fire 60-200x/sec !
hookFn("0x0043d140", "Com_EventLoop");

// ============= GAMEPLAY =============
// FireWeapon @ 0x4A4D50 -- tir d'arme
hookFn("0x004a4d50", "FireWeapon");
// FireWeaponMelee @ 0x4F2470
hookFn("0x004f2470", "FireWeaponMelee");
// IsDynClassname @ 0x444810
hookFn("0x00444810", "IsDynClassname", (args) => {
    const cls = readStrSafe(args[0]);
    return cls ? `'${cls}'` : null;
});

// ============= WEAPON =============
hookFn("0x00440eb0", "BG_GetWeaponDef");

console.log("\n[*] agent v5 actif. ATTENTION : Com_Frame se fire 60-200x/s,");
console.log("    -> beaucoup de bruit. Pour gameplay propre, commente Com_Frame.\n");
