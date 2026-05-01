// Agent Frida — capture toutes les commandes console enregistrees via
// Cmd_AddCommand pendant le boot du jeu.
//
// PREREQUIS : ATTACHER AVANT LE BOOT IW4x. Une fois lancé, les
// 294 commandes connues sont deja enregistrees (Cmd_AddCommand n'est
// plus appelee). Pour exploiter cet agent, lancer iw4x.exe via Frida
// spawn :
//
//   .venv/bin/frida -f targets/iw4x.exe -l scripts/frida/04-trace-commands.js
//
// (ou depuis Lutris en pre-attachant via FRIDA_DEBUG, voir doc Frida)
//
// Si attache au runtime, l'agent reste utile pour les commandes ajoutees
// dynamiquement par les mods (la commande -mod en charge un dynamiquement).
//
// Hooks :
//   iw4x.exe!Cmd_AddCommand       @ 0x00470090  (294 callers)
//   iw4x.exe!Cmd_AddServerCommand @ 0x004dce00  (29 callers)
//
// Signature Q3 deduite : void Cmd_AddCommand(const char *name, void (*function)())

"use strict";

function readStrSafe(p, max = 80) {
    if (!p || p.isNull()) return null;
    try { return p.readCString(max); }
    catch (e) { return null; }
}


function hookCmdAdd(addr, label) {
    Interceptor.attach(ptr(addr), {
        onEnter(args) {
            const name = readStrSafe(args[0]);
            const handler = args[1];
            if (name) {
                console.log(`[${label}]  '${name}'  -> handler @ ${handler}`);
            } else {
                console.log(`[${label}]  <unreadable name>  args=${args[0]} ${args[1]}`);
            }
        }
    });
    console.log(`[+] hooked ${label} @ ${addr}`);
}

hookCmdAdd("0x00470090", "Cmd_AddCommand");
hookCmdAdd("0x004dce00", "Cmd_AddServerCommand");

console.log("\n[*] agent commandes actif.");
console.log("    Pour capturer le boot complet, attache au spawn :");
console.log("    .venv/bin/frida -f /home/horus/Bureau/G/CODA/iw4x.exe \\");
console.log("                    -l scripts/frida/04-trace-commands.js\n");
