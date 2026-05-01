// Agent Frida — trace le trafic réseau côté ELF Linux.
//
// Pourquoi ELF et pas PE ?
//   Frida sur Wine ne voit que les modules ELF (Linux). Les PE Windows
//   chargés sous Wine (ws2_32.dll, wininet.dll, etc.) sont *invisibles*
//   via Process.getModuleByName. Heureusement, Wine traduit toutes les
//   API Win32 réseau vers ws2_32.so puis libc.so.6 (sockets POSIX).
//   Hooker libc = capter 100 % du trafic réel quel que soit le chemin
//   PE qui l'a déclenché.
//
// Usage :
//   .venv/bin/frida -p $(pgrep -fa iw4x.exe | grep -v pgrep | awk '{print $1}' | head -1) \
//                   -l scripts/frida/01-trace-net.js -q -t 30

"use strict";

// Filtrage : on ne suit QUE les fds créés via socket(AF_INET). Sans ça on
// reçoit ~3000 events/s de communication Unix entre iw4x.exe et wineserver
// (fd interne Wine), ce qui noie le vrai trafic IP du jeu.
const inetFds = new Set();
const AF_INET = 2;
const AF_INET6 = 10;

function dumpHex(addr, len) {
    if (len <= 0 || addr.isNull()) return "";
    const n = Math.min(len, 32);
    try {
        return hexdump(addr, { length: n, header: false, ansi: false }).split("\n")[0];
    } catch (e) {
        return "<unreadable>";
    }
}

// Résout le 1er module qui matche (Wine peut avoir libc.so.6 + libc.so.6.x).
function findModule(rx) {
    return Process.enumerateModules().find(m => rx.test(m.name));
}

function hookLibc(funcName, formatter) {
    const libc = findModule(/^libc\.so/);
    if (!libc) { console.log("[!] libc introuvable"); return; }
    const addr = libc.findExportByName(funcName);
    if (!addr) {
        console.log(`[!] libc!${funcName} non exporté`);
        return;
    }
    Interceptor.attach(addr, {
        onEnter(args) {
            // Frida 17 : capturer les valeurs maintenant (les NativePointer args
            // ne sont plus valides en onLeave).
            this.captured = [args[0], args[1], args[2], args[3]];
        },
        onLeave(retval) {
            try {
                const out = formatter(this.captured, retval);
                if (out !== null) console.log(out);
            } catch (e) { console.log(`[err ${funcName}] ${e}`); }
        }
    });
    console.log(`[+] hooked libc!${funcName} @ ${addr}`);
}

// ssize_t recv(int sockfd, void *buf, size_t len, int flags)
hookLibc("recv", (args, ret) => {
    const fd = args[0].toInt32();
    if (!inetFds.has(fd)) return null;
    const buf = args[1];
    const r = ret.toInt32();
    return `[recv]     fd=${fd} ret=${r}  ${dumpHex(buf, r)}`;
});

// ssize_t send(int sockfd, const void *buf, size_t len, int flags)
hookLibc("send", (args, ret) => {
    const fd = args[0].toInt32();
    if (!inetFds.has(fd)) return null;
    const buf = args[1];
    const len = args[2].toInt32();
    return `[send]     fd=${fd} len=${len} ret=${ret}  ${dumpHex(buf, len)}`;
});

// ssize_t recvfrom(int s, void *buf, size_t len, int flags, sockaddr*, socklen_t*)
hookLibc("recvfrom", (args, ret) => {
    const fd = args[0].toInt32();
    if (!inetFds.has(fd)) return null;
    const buf = args[1];
    const r = ret.toInt32();
    return `[recvfrom] fd=${fd} ret=${r}  ${dumpHex(buf, r)}`;
});

// ssize_t sendto(int s, const void *buf, size_t len, int flags, const sockaddr*, socklen_t)
hookLibc("sendto", (args, ret) => {
    const fd = args[0].toInt32();
    if (!inetFds.has(fd)) return null;
    const buf = args[1];
    const len = args[2].toInt32();
    return `[sendto]   fd=${fd} len=${len} ret=${ret}  ${dumpHex(buf, len)}`;
});

// int connect(int sockfd, const sockaddr *addr, socklen_t addrlen)
hookLibc("connect", (args, ret) => {
    const fd = args[0].toInt32();
    if (!inetFds.has(fd)) return null;
    const sa = args[1];
    let info = "";
    try {
        const family = sa.readU16();
        if (family === AF_INET) {
            const portBE = sa.add(2).readU16();
            const port = ((portBE & 0xff) << 8) | ((portBE >> 8) & 0xff);
            const ip = [0, 1, 2, 3].map(i => sa.add(4 + i).readU8()).join(".");
            info = `${ip}:${port}`;
        } else {
            info = `family=${family}`;
        }
    } catch (e) { info = "<unreadable sockaddr>"; }
    return `[connect]  fd=${fd} ret=${ret}  -> ${info}`;
});

// int close(int fd) — on suit pour nettoyer le set inet
hookLibc("close", (args, ret) => {
    const fd = args[0].toInt32();
    if (!inetFds.has(fd)) return null;
    inetFds.delete(fd);
    return `[close]    fd=${fd} ret=${ret}`;
});

// int socket(int domain, int type, int protocol)
hookLibc("socket", (args, ret) => {
    const domain = args[0].toInt32();
    const type = args[1].toInt32();
    const fd = ret.toInt32();
    if (domain === AF_INET || domain === AF_INET6) {
        if (fd >= 0) inetFds.add(fd);
        return `[socket]   dom=${domain} type=${type} -> fd=${fd}  (TRACKED)`;
    }
    return null;  // AF_UNIX, AF_NETLINK, etc. — ignorés (com wineserver)
});

console.log("[*] agent reseau ELF actif. Trafic Wine PE -> libc capture.");
