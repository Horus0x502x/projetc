// Agent Frida MEGA — trace large pendant le gameplay live.
//
// Hooks installes (libc + adresses internes IW4 connues) :
//   libc!recvfrom / sendto      -> trafic UDP gameplay (Q3 protocol)
//   libc!read / write           -> I/O fichiers (FS_ReadFile, log)
//   libc!malloc / free          -> sample d'allocations grosses (>4 Ko, throttle)
//   libc!open / openat          -> tous les fichiers ouverts par le jeu
//   libc!gettimeofday           -> sondage frame timing (throttle hard)
//
// Sur PE Wine, les hooks libc captent l'ELF natif Linux ou les
// fonctions PE marshallees vers libc. Les noms propres "Com_Printf"
// etc. ne sont pas accessibles par Module.findExport (modules PE
// invisibles cote Frida) -- on les hook par adresse absolue
// quand on les a, ou via libc qui les sous-tend.
//
// Filtrage agressif pour ne pas saturer (le jeu tourne typiquement
// 60-200 fps, beaucoup d'I/O). Ajuste les seuils selon besoin.
//
// Usage :
//   .venv/bin/frida -p $(pgrep -fa iw4x.exe | grep -v pgrep | awk '{print $1}' | head -1) \
//                   -l scripts/frida/03-trace-gameplay.js -q -t 60

"use strict";

// === Filtres ===
const TRACE_OPENS = true;       // tous les open()/openat()
const TRACE_NET   = true;        // recvfrom/sendto sur AF_INET (UDP gameplay)
const TRACE_FS    = true;        // read/write > 1 Ko sur fds non-network
const TRACE_MALLOC = true;       // malloc > 16 Ko (assets, audio buffers)
const TRACE_INTERNALS = true;    // Sys_Error, Cmd_AddCommand, etc.

const MALLOC_MIN = 16384;
const RW_MIN = 1024;

// fds reseau IP : on les apprend via socket(AF_INET).
const inetFds = new Set();
const AF_INET = 2;
const AF_INET6 = 10;

// fds reguliers vs sockets : on suit open() pour annoter.
const fdLabel = new Map();  // fd -> path

// Throttle pour gettimeofday (peut etre appele 60x/s).
let lastTime = 0;
let timeCount = 0;


function findModule(rx) {
    return Process.enumerateModules().find(m => rx.test(m.name));
}

function hookLibc(funcName, formatter, opts = {}) {
    const libc = findModule(/^libc\.so/);
    if (!libc) return;
    const addr = libc.findExportByName(funcName);
    if (!addr) {
        console.log(`[!] libc!${funcName} non exporte`);
        return;
    }
    Interceptor.attach(addr, {
        onEnter(args) {
            this.captured = [args[0], args[1], args[2], args[3], args[4]];
        },
        onLeave(retval) {
            try {
                const out = formatter(this.captured, retval);
                if (out !== null && out !== undefined) {
                    console.log(out);
                }
            } catch (e) {
                console.log(`[err ${funcName}] ${e}`);
            }
        }
    });
    console.log(`[+] hooked libc!${funcName}`);
}

function hookAt(addr, label, onCall) {
    try {
        Interceptor.attach(ptr(addr), {
            onEnter(args) {
                try {
                    const out = onCall(args);
                    if (out) console.log(`[${label}]  ${out}`);
                    else console.log(`[${label}]`);
                } catch (e) {
                    console.log(`[err ${label}] ${e}`);
                }
            }
        });
        console.log(`[+] hooked ${label} @ ${addr}`);
    } catch (e) {
        console.log(`[!] ${label} @ ${addr}: ${e}`);
    }
}

function hex(addr, len) {
    if (len <= 0 || addr.isNull()) return "";
    const n = Math.min(len, 32);
    try { return hexdump(addr, { length: n, header: false, ansi: false }).split("\n")[0]; }
    catch (e) { return "<unreadable>"; }
}

function readStrSafe(p, max = 200) {
    if (!p || p.isNull()) return null;
    try { return p.readCString(max); }
    catch (e) { return null; }
}


// ==================== open / openat ====================
if (TRACE_OPENS) {
    hookLibc("open", (args, ret) => {
        const path = readStrSafe(args[0]);
        const fd = ret.toInt32();
        if (path) fdLabel.set(fd, path);
        if (fd >= 0 && path) {
            return `[open]   fd=${fd}  ${path}`;
        }
        return null;
    });
    hookLibc("openat", (args, ret) => {
        const path = readStrSafe(args[1]);
        const fd = ret.toInt32();
        if (path) fdLabel.set(fd, path);
        if (fd >= 0 && path) {
            return `[openat] fd=${fd}  ${path}`;
        }
        return null;
    });
}

// ==================== socket / connect / close (tracking) ====================
hookLibc("socket", (args, ret) => {
    const dom = args[0].toInt32();
    const fd = ret.toInt32();
    if ((dom === AF_INET || dom === AF_INET6) && fd >= 0) {
        inetFds.add(fd);
        return `[socket] fd=${fd}  AF_INET${dom === AF_INET6 ? '6' : ''}`;
    }
    return null;
});

hookLibc("connect", (args, ret) => {
    const fd = args[0].toInt32();
    if (!inetFds.has(fd)) return null;
    const sa = args[1];
    let info = "";
    try {
        const family = sa.readU16();
        if (family === AF_INET) {
            const port = ((sa.add(2).readU8()) << 8) | sa.add(3).readU8();
            const ip = [0, 1, 2, 3].map(i => sa.add(4 + i).readU8()).join(".");
            info = `${ip}:${port}`;
        }
    } catch (e) {}
    return `[connect] fd=${fd}  -> ${info}`;
});

hookLibc("close", (args, ret) => {
    const fd = args[0].toInt32();
    if (inetFds.has(fd)) {
        inetFds.delete(fd);
        return `[close]   fd=${fd}  (was inet)`;
    }
    fdLabel.delete(fd);
    return null;
});

// ==================== recvfrom / sendto (UDP gameplay) ====================
if (TRACE_NET) {
    hookLibc("recvfrom", (args, ret) => {
        const fd = args[0].toInt32();
        if (!inetFds.has(fd)) return null;
        const buf = args[1];
        const r = ret.toInt32();
        return `[recvfrom] fd=${fd} ret=${r}  ${hex(buf, r)}`;
    });
    hookLibc("sendto", (args, ret) => {
        const fd = args[0].toInt32();
        if (!inetFds.has(fd)) return null;
        const buf = args[1];
        const len = args[2].toInt32();
        return `[sendto]   fd=${fd} len=${len}  ${hex(buf, len)}`;
    });
}

// ==================== read / write (FS) ====================
if (TRACE_FS) {
    hookLibc("read", (args, ret) => {
        const fd = args[0].toInt32();
        if (inetFds.has(fd)) return null;  // déjà couvert par recv*
        const r = ret.toInt32();
        if (r < RW_MIN) return null;
        const lab = fdLabel.get(fd) || "?";
        return `[read]    fd=${fd} ret=${r}  ${lab}`;
    });
    hookLibc("write", (args, ret) => {
        const fd = args[0].toInt32();
        if (inetFds.has(fd)) return null;
        const len = args[2].toInt32();
        if (len < RW_MIN) return null;
        const lab = fdLabel.get(fd) || "?";
        return `[write]   fd=${fd} len=${len}  ${lab}`;
    });
}

// ==================== malloc large ====================
if (TRACE_MALLOC) {
    hookLibc("malloc", (args, ret) => {
        const sz = args[0].toInt32();
        if (sz < MALLOC_MIN) return null;
        return `[malloc]  size=${sz}  ret=${ret}`;
    });
}

// ==================== adresses internes connues ====================
if (TRACE_INTERNALS) {
    // Sys_Error  -- iw4x.exe, capte erreurs fatales avec format string
    hookAt("0x0043d570", "Sys_Error", (args) => {
        return `fmt="${readStrSafe(args[0]) || '?'}"`;
    });
}

console.log("\n[*] mega-agent gameplay actif. Filtrage :");
console.log(`    opens=${TRACE_OPENS} net=${TRACE_NET} fs=${TRACE_FS}`);
console.log(`    malloc>${MALLOC_MIN}b=${TRACE_MALLOC} internals=${TRACE_INTERNALS}\n`);
