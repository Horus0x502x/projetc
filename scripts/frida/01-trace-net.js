// Agent Frida — trace tout le trafic réseau côté ws2_32.dll PE.
//
// Usage :
//   frida -p $(pgrep -f iw4x.exe | head -1) -l scripts/frida/01-trace-net.js
//
// Hooks : send, recv, sendto, recvfrom, connect, closesocket
// Output : ligne par appel avec longueur et 32 premiers octets en hex.

"use strict";

function dumpHex(addr, len) {
    if (len <= 0 || addr.isNull()) return "";
    const n = Math.min(len, 32);
    try {
        return hexdump(addr, { length: n, header: false, ansi: false }).split("\n")[0];
    } catch (e) {
        return "<unreadable>";
    }
}

function hookExport(modName, funcName, formatter) {
    const addr = Module.findExportByName(modName, funcName);
    if (!addr) {
        console.log(`[!] ${modName}!${funcName} introuvable`);
        return;
    }
    Interceptor.attach(addr, {
        onEnter(args) { this.args = args; },
        onLeave(retval) {
            try {
                console.log(formatter(this.args, retval));
            } catch (e) {
                console.log(`[err ${funcName}] ${e}`);
            }
        }
    });
    console.log(`[+] hooked ${modName}!${funcName} @ ${addr}`);
}

// int send(SOCKET s, const char *buf, int len, int flags)
hookExport("ws2_32.dll", "send", (args, ret) => {
    const sock = args[0].toInt32();
    const buf = args[1];
    const len = args[2].toInt32();
    return `[send] sock=${sock} len=${len} ret=${ret} : ${dumpHex(buf, len)}`;
});

// int recv(SOCKET s, char *buf, int len, int flags)
hookExport("ws2_32.dll", "recv", (args, ret) => {
    const sock = args[0].toInt32();
    const buf = args[1];
    const r = ret.toInt32();
    return `[recv] sock=${sock} ret=${r} : ${dumpHex(buf, r > 0 ? r : 0)}`;
});

// int sendto(SOCKET s, const char *buf, int len, int flags, const sockaddr *to, int tolen)
hookExport("ws2_32.dll", "sendto", (args, ret) => {
    const sock = args[0].toInt32();
    const buf = args[1];
    const len = args[2].toInt32();
    return `[sendto] sock=${sock} len=${len} ret=${ret} : ${dumpHex(buf, len)}`;
});

// int recvfrom(SOCKET s, char *buf, int len, int flags, sockaddr *from, int *fromlen)
hookExport("ws2_32.dll", "recvfrom", (args, ret) => {
    const sock = args[0].toInt32();
    const buf = args[1];
    const r = ret.toInt32();
    return `[recvfrom] sock=${sock} ret=${r} : ${dumpHex(buf, r > 0 ? r : 0)}`;
});

// int connect(SOCKET s, const sockaddr *name, int namelen)
hookExport("ws2_32.dll", "connect", (args, ret) => {
    const sock = args[0].toInt32();
    return `[connect] sock=${sock} ret=${ret}`;
});

// int closesocket(SOCKET s)
hookExport("ws2_32.dll", "closesocket", (args, ret) => {
    const sock = args[0].toInt32();
    return `[closesocket] sock=${sock} ret=${ret}`;
});

console.log("[*] agent réseau prêt — interagis avec le menu IW4x pour voir le trafic.");
