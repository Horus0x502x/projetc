// Frida JS — accesseurs types pour les structures iw4x.exe.
//
// Utilise les offsets de findings/structs-extracted.md (parsing valide
// vs static_assert du source IW4x).
//
// PERIMETRE : usage en lab single-player ou dedicated server perso
// uniquement. Cf. findings/render-pipeline.md pour le periimetre ethique.
//
// Usage type :
//   .venv/bin/frida -p $(pgrep -fa iw4x.exe | grep -v pgrep | awk '{print $1}' | head -1) \
//                   -l scripts/frida/06-entity-typed.js -q -t 3
//
// Ou en interactif :
//   .venv/bin/frida -p <PID> -l scripts/frida/06-entity-typed.js
//   > dumpLevel()
//   > dumpPlayerState(0)   // 0 = local player

"use strict";

// ============= Adresses absolues (no ASLR) =============
const LEVEL_LOCALS = ptr("0x1A831A8");   // game module (server-side ; null cote client)
const CG_ARRAY     = ptr("0x7F0F78");    // cgame array (cote client) -- predictedPlayerState
const REFDEF_OFFSET = 0x6A778;           // refdef_t dans cg_s (camera angles + viewport)
const REFDEF_VIEWANGLES_OFFSET = 0x6E6D8;  // float[3]

// ============= Tailles de structs =============
const SIZEOF_PLAYERSTATE_S = 0x311C;
const SIZEOF_GENTITY_S     = 0x274;
const SIZEOF_GCLIENT_S     = 0x366C;
const SIZEOF_CG_S          = 0xFD540;    // 1 Mo / client !
const SIZEOF_LEVEL_LOCALS  = 0x2F78;

// ============= Offsets level_locals_t =============
const LEVEL = {
    clients:        0x00,  // gclient_s*
    gentities:      0x04,  // gentity_s*
    num_entities:   0x08,  // int
    maxclients:     0x3A4, // int
    framenum:       0x3A8, // int
    time:           0x3AC, // int
    previousTime:   0x3B0, // int
};

// ============= Offsets playerState_s =============
const PS = {
    commandTime:    0x000,
    pm_type:        0x004,
    pm_time:        0x008,
    pm_flags:       0x00C,
    otherFlags:     0x010,
    linkFlags:      0x014,
    bobCycle:       0x018,
    origin:         0x01C,  // float[3]
    velocity:       0x028,  // float[3]
    grenadeTimeLeft:        0x034,
    delta_angles:           0x060,  // float[3]
    groundEntityNum:        0x06C,
    vLadderVec:             0x070,  // float[3]
    jumpTime:               0x07C,
    legsTimer:              0x084,
    legsAnim:               0x088,
    eFlags:                 0x0B0,
    eventSequence:          0x0B4,
    clientNum:              0x104,
    viewmodelIndex:         0x108,
    viewangles:             0x10C,  // float[3] -- ANGLES PITCH/YAW/ROLL
    viewHeightCurrent:      0x11C,
    damageEvent:            0x13C,
    stats:                  0x150,  // int[4]
    proneDirection:         0x160,
};

// ============= Helpers =============

function readVec3(addr, off) {
    const p = addr.add(off);
    return [p.readFloat(), p.add(4).readFloat(), p.add(8).readFloat()];
}

function readVec3Int(addr, off) {
    const p = addr.add(off);
    return [p.readInt(), p.add(4).readInt(), p.add(8).readInt()];
}

function readArr4(addr, off) {
    const p = addr.add(off);
    return [p.readInt(), p.add(4).readInt(), p.add(8).readInt(), p.add(12).readInt()];
}

// Joli affichage de vecteur float (1 decimale)
function vec3str(v) {
    return `(${v[0].toFixed(1)}, ${v[1].toFixed(1)}, ${v[2].toFixed(1)})`;
}

// ============= Lecteurs typed =============

function readPlayerState(addr) {
    return {
        addr: addr,
        commandTime:  addr.add(PS.commandTime).readInt(),
        pm_type:      addr.add(PS.pm_type).readInt(),
        pm_flags:     addr.add(PS.pm_flags).readInt(),
        origin:       readVec3(addr, PS.origin),
        velocity:     readVec3(addr, PS.velocity),
        viewangles:   readVec3(addr, PS.viewangles),
        eFlags:       addr.add(PS.eFlags).readInt(),
        clientNum:    addr.add(PS.clientNum).readInt(),
        groundEntityNum: addr.add(PS.groundEntityNum).readInt(),
        legsAnim:     addr.add(PS.legsAnim).readInt(),
        speed:        addr.add(0x05C).readInt(),
        stats:        readArr4(addr, PS.stats),
    };
}

function readLevel() {
    return {
        addr: LEVEL_LOCALS,
        clients_ptr:    LEVEL_LOCALS.add(LEVEL.clients).readPointer(),
        gentities_ptr:  LEVEL_LOCALS.add(LEVEL.gentities).readPointer(),
        num_entities:   LEVEL_LOCALS.add(LEVEL.num_entities).readInt(),
        maxclients:     LEVEL_LOCALS.add(LEVEL.maxclients).readInt(),
        framenum:       LEVEL_LOCALS.add(LEVEL.framenum).readInt(),
        time:           LEVEL_LOCALS.add(LEVEL.time).readInt(),
    };
}

// ============= Commandes interactives =============
// (s'utilisent via le REPL Frida en lancant sans -t)

globalThis.dumpLevel = function() {
    const lvl = readLevel();
    console.log("level @", lvl.addr);
    console.log("  clients_ptr   :", lvl.clients_ptr);
    console.log("  gentities_ptr :", lvl.gentities_ptr);
    console.log("  num_entities  :", lvl.num_entities, "/ max", lvl.maxclients);
    console.log("  framenum      :", lvl.framenum);
    console.log("  time          :", lvl.time, "ms");
    return lvl;
};

globalThis.dumpPlayerState = function(clientIdx) {
    clientIdx = clientIdx || 0;
    // CLIENT-SIDE : cgArray[clientIdx].predictedPlayerState
    // (offset 0 dans cg_s -- premier champ)
    const psAddr = CG_ARRAY.add(clientIdx * SIZEOF_CG_S);
    const ps = readPlayerState(psAddr);
    console.log(`playerState[${clientIdx}] @`, ps.addr);
    console.log(`  pm_type=${ps.pm_type} pm_flags=0x${ps.pm_flags.toString(16)} eFlags=0x${ps.eFlags.toString(16)}`);
    console.log(`  origin    : ${vec3str(ps.origin)}`);
    console.log(`  velocity  : ${vec3str(ps.velocity)}  speed=${ps.speed}`);
    console.log(`  viewangles: ${vec3str(ps.viewangles)}`);
    console.log(`  groundEnt=${ps.groundEntityNum} legsAnim=${ps.legsAnim}`);
    console.log(`  stats     : ${ps.stats.join(', ')}`);
    return ps;
};

globalThis.dumpRefdef = function(clientIdx) {
    clientIdx = clientIdx || 0;
    const cgAddr = CG_ARRAY.add(clientIdx * SIZEOF_CG_S);
    // refdefViewAngles @ cg_s + 0x6E6D8
    const va = readVec3(cgAddr, REFDEF_VIEWANGLES_OFFSET);
    console.log(`refdefViewAngles[${clientIdx}] : ${vec3str(va)}`);
    return va;
};

globalThis.dumpAllPlayers = function() {
    const lvl = readLevel();
    if (lvl.clients_ptr.isNull()) { console.log("[!] no clients"); return; }
    const max = lvl.maxclients || 18;
    for (let i = 0; i < max; i++) {
        const psAddr = lvl.clients_ptr.add(i * SIZEOF_GCLIENT_S);
        try {
            const ps = readPlayerState(psAddr);
            // Skip slots vides (origin = (0,0,0) typiquement)
            if (ps.origin[0] === 0 && ps.origin[1] === 0 && ps.origin[2] === 0
                && ps.commandTime === 0) continue;
            console.log(`[${i}] origin=${vec3str(ps.origin)} angles=${vec3str(ps.viewangles)} pm_type=${ps.pm_type}`);
        } catch (e) {
            // slot non mappe -- normal
        }
    }
};

// ============= Auto-run if -q -t mode =============
console.log("[*] iw4x typed accessors loaded.");
console.log("    Commandes : dumpLevel(), dumpPlayerState(idx), dumpAllPlayers()");
console.log("");
try {
    dumpLevel();
    console.log("");
    dumpPlayerState(0);
} catch (e) {
    console.log("[!] erreur initiale :", e);
}
