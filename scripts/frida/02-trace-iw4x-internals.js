// Agent Frida — hook les adresses internes haute-valeur identifiees
// (cf. findings/iw4x-cross-ref.md). Sans ASLR sur iw4x.dll/.exe, les
// adresses absolues sont stables -> on hook directement par ptr().
//
// Hooks installes :
//   iw4x.exe!Sys_Error             @ 0x0043d570  (toutes erreurs fatales)
//   iw4x.dll!ScriptError::AddOpcodePos @ 0x1005e6b0  (compile GSC, 116 callers)
//   iw4x.dll!Zones::Zones (ctor)   @ 0x100c2282  (init module Zones)
//   iw4x.dll!decryptImages_lambda  @ 0x100c18c6  (handler cmd console)
//   iw4x.dll!decryptSounds_lambda  @ 0x100c175a  (handler cmd console)
//
// Usage :
//   .venv/bin/frida -p $(pgrep -fa iw4x.exe | grep -v pgrep | awk '{print $1}' | head -1) \
//                   -l scripts/frida/02-trace-iw4x-internals.js -q -t 60

"use strict";

function hookAt(addr, label, onCall) {
    try {
        Interceptor.attach(ptr(addr), {
            onEnter(args) {
                try {
                    const out = onCall(args, this.context);
                    if (out !== null && out !== undefined) {
                        console.log(`[${label}]  ${out}`);
                    } else {
                        console.log(`[${label}]  (called)`);
                    }
                } catch (e) {
                    console.log(`[err ${label}] ${e}`);
                }
            }
        });
        console.log(`[+] hooked ${label} @ ${addr}`);
    } catch (e) {
        console.log(`[!] failed to hook ${label} @ ${addr} : ${e}`);
    }
}

// Lit une C-string (max 200 chars) en gérant les pointeurs invalides.
function readCStrSafe(p, max = 200) {
    if (!p || p.isNull()) return "<null>";
    try { return p.readCString(max); }
    catch (e) { return `<unreadable @ ${p}>`; }
}


// ----- Sys_Error (iw4x.exe:0x0043d570) -----
// Signature probable: void Sys_Error(const char *fmt, ...)
hookAt("0x0043d570", "Sys_Error", (args) => {
    const fmt = readCStrSafe(args[0]);
    return `fmt="${fmt}"`;
});

// ----- ScriptError::AddOpcodePos (iw4x.dll:0x1005e6b0) -----
// void func(int param_1, uint param_2)
// param_1 = opcode/source position, param_2 = flags ou pos
hookAt("0x1005e6b0", "GSC_AddOpcodePos", (args) => {
    const p1 = args[0].toInt32();
    const p2 = args[1].toInt32();
    return `pos=0x${p2.toString(16)} param=${p1}`;
});

// ----- Zones::Zones constructor (iw4x.dll:0x100c2282) -----
// Appele au boot, juste pour valider qu'on l'attrape (1 seul appel attendu).
hookAt("0x100c2282", "Zones::Zones", () => "ctor called");

// ----- decryptImages_lambda (iw4x.dll:0x100c18c6) -----
// Trigger : taper "decryptImages" dans la console IW4x (~).
hookAt("0x100c18c6", "decryptImages", () => "command triggered");

// ----- decryptSounds_lambda (iw4x.dll:0x100c175a) -----
hookAt("0x100c175a", "decryptSounds", () => "command triggered");

console.log("\n[*] agent IW4x internals actif. Triggers :");
console.log("    - Sys_Error  : automatique sur erreur");
console.log("    - GSC ops    : automatique a chaque map/script charge");
console.log("    - Zones ctor : seulement au boot (manque si attache apres init)");
console.log("    - decryptImg : tape 'decryptImages' dans la console (~)");
console.log("    - decryptSnd : tape 'decryptSounds' dans la console (~)\n");
