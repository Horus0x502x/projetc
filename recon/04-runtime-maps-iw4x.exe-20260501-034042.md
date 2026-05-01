# Carte mémoire — PID 90170

*Généré par `scripts/python/maps_parser.py`. 1653 mappings bruts, 219 fichiers distincts, 581 régions anonymes/spéciales.*

## Modules PE Windows (65)

Cibles RE prioritaires. La **base Linux** est l'adresse de départ utile pour calculer des offsets stables ; comparer à l'ImageBase déclaré dans le header pour mesurer le décalage ASLR.

| Base Linux | Taille | ImageBase PE | Δ (ASLR) | Segments | Module |
|---|---|---|---|---|---|
| `0x00110000` | 45,056 | `0x6f100000` | `-0x6eff0000` | 1 | `wow64cpu.dll` |
| `0x00230000` | 69,632 | `0x10000000` | `-0xfdd0000` | 1 | `apisetschema.dll` |
| `0x00380000` | 380,928 | `0x66080000` | `-0x65d00000` | 7 | `shlwapi.dll` |
| `0x00400000` | 113,455,104 | `0x00400000` | `+0x0` | 6 | `iw4x.exe` |
| `0x07240000` | 4,096 | `0x10000000` | `-0x8dc0000` | 1 | `d3dx9_43.dll` |
| `0x07440000` | 2,678,784 | `0x6cc80000` | `-0x65840000` | 7 | `wined3d.dll` |
| `0x076d0000` | 417,792 | `0x67c00000` | `-0x60530000` | 7 | `dsound.dll` |
| `0x07e60000` | 225,280 | `0x70d80000` | `-0x68f20000` | 7 | `uxtheme.dll` |
| `0x07ea0000` | 7,581,696 | `0x10000000` | `-0x8160000` | 1 | `light.msstyles` |
| `0x0d490000` | 4,096 | `0x26f00000` | `-0x19a70000` | 1 | `mssmp3.asi` |
| `0x0d4b0000` | 159,744 | `0x26400000` | `-0x18f50000` | 2 | `mssvoice.asi` |
| `0x0d4e0000` | 118,784 | `0x10000000` | `-0x2b20000` | 5 | `milesEq.flt` |
| `0x0d530000` | 4,096 | `0x22300000` | `-0x14dd0000` | 1 | `mssds3d.flt` |
| `0x0d540000` | 73,728 | `0x24100000` | `-0x16bc0000` | 2 | `mssdsp.flt` |
| `0x0d560000` | 4,096 | `0x22300000` | `-0x14da0000` | 1 | `msseax.flt` |
| `0x10000000` | 6,627,328 | `0x10000000` | `+0x0` | 2 | `iw4x.dll` |
| `0x18000000` | 4,096 | `0x18000000` | `+0x0` | 1 | `binkw32.dll` |
| `0x21100000` | 4,096 | `0x21100000` | `+0x0` | 1 | `mss32.dll` |
| `0x622c0000` | 212,992 | `0x622c0000` | `+0x0` | 7 | `rsaenh.dll` |
| `0x62500000` | 1,282,048 | `0x62500000` | `+0x0` | 7 | `oleaut32.dll` |
| `0x63e40000` | 507,904 | `0x63e40000` | `+0x0` | 7 | `winepulse.drv` |
| `0x643c0000` | 172,032 | `0x643c0000` | `+0x0` | 7 | `ws2_32.dll` |
| `0x646c0000` | 221,184 | `0x646c0000` | `+0x0` | 7 | `iphlpapi.dll` |
| `0x64a80000` | 245,760 | `0x64a80000` | `+0x0` | 7 | `win32u.dll` |
| `0x65480000` | 606,208 | `0x65480000` | `+0x0` | 7 | `rpcrt4.dll` |
| `0x65680000` | 729,088 | `0x65680000` | `+0x0` | 7 | `msvcrt.dll` |
| `0x66080000` | 139,264 | `0x66080000` | `+0x0` | 7 | `msacm32.dll` |
| `0x66380000` | 1,306,624 | `0x66380000` | `+0x0` | 7 | `ole32.dll` |
| `0x66640000` | 53,248 | `0x66640000` | `+0x0` | 7 | `version.dll` |
| `0x667c0000` | 106,496 | `0x667c0000` | `+0x0` | 7 | `shcore.dll` |
| `0x66f80000` | 49,152 | `0x66f80000` | `+0x0` | 7 | `schannel.dll` |
| `0x67500000` | 126,976 | `0x67500000` | `+0x0` | 7 | `imm32.dll` |
| `0x67bc0000` | 1,478,656 | `0x67bc0000` | `+0x0` | 7 | `comctl32.dll` |
| `0x684c0000` | 405,504 | `0x684c0000` | `+0x0` | 7 | `combase.dll` |
| `0x68880000` | 1,830,912 | `0x68880000` | `+0x0` | 7 | `user32.dll` |
| `0x68cc0000` | 884,736 | `0x68cc0000` | `+0x0` | 7 | `crypt32.dll` |
| `0x69840000` | 282,624 | `0x69840000` | `+0x0` | 7 | `advapi32.dll` |
| `0x69bc0000` | 65,536 | `0x69bc0000` | `+0x0` | 7 | `wsock32.dll` |
| `0x69ec0000` | 557,056 | `0x69ec0000` | `+0x0` | 7 | `ddraw.dll` |
| `0x6a600000` | 53,248 | `0x6a600000` | `+0x0` | 7 | `kerberos.dll` |
| `0x6aac0000` | 905,216 | `0x6aac0000` | `+0x0` | 7 | `ucrtbase.dll` |
| `0x6acc0000` | 180,224 | `0x6acc0000` | `+0x0` | 7 | `mmdevapi.dll` |
| `0x6aec0000` | 557,056 | `0x6aec0000` | `+0x0` | 7 | `setupapi.dll` |
| `0x6bb40000` | 425,984 | `0x6bb40000` | `+0x0` | 7 | `winex11.drv` |
| `0x6bbc0000` | 188,416 | `0x6bbc0000` | `+0x0` | 7 | `sechost.dll` |
| `0x6c100000` | 561,152 | `0x6c100000` | `+0x0` | 7 | `wininet.dll` |
| `0x6c480000` | 49,152 | `0x6c480000` | `+0x0` | 7 | `powrprof.dll` |
| `0x6cd40000` | 73,728 | `0x6cd40000` | `+0x0` | 7 | `xinput1_3.dll` |
| `0x6d480000` | 143,360 | `0x6d480000` | `+0x0` | 7 | `secur32.dll` |
| `0x6da80000` | 565,248 | `0x6da80000` | `+0x0` | 7 | `gdi32.dll` |
| `0x6e200000` | 98,304 | `0x6e200000` | `+0x0` | 7 | `bcrypt.dll` |
| `0x6ecc0000` | 90,112 | `0x6ecc0000` | `+0x0` | 7 | `dnsapi.dll` |
| `0x6f1c0000` | 233,472 | `0x6f1c0000` | `+0x0` | 7 | `d3d9.dll` |
| `0x6f240000` | 819,200 | `0x6f240000` | `+0x0` | 7 | `winmm.dll` |
| `0x6f6c0000` | 49,152 | `0x6f6c0000` | `+0x0` | 7 | `nsi.dll` |
| `0x70000000` | 434,176 | `0x70000000` | `+0x0` | 7 | `dbghelp.dll` |
| `0x704c0000` | 57,344 | `0x704c0000` | `+0x0` | 7 | `dwmapi.dll` |
| `0x71080000` | 61,440 | `0x71080000` | `+0x0` | 7 | `hid.dll` |
| `0x712c0000` | 131,072 | `0x712c0000` | `+0x0` | 7 | `mpr.dll` |
| `0x71400000` | 9,838,592 | `0x71400000` | `+0x0` | 7 | `shell32.dll` |
| `0x7a800000` | 1,388,544 | `0x7a800000` | `+0x0` | 7 | `opengl32.dll` |
| `0x7b000000` | 2,809,856 | `0x7b000000` | `+0x0` | 7 | `kernelbase.dll` |
| `0x7b600000` | 405,504 | `0x7b600000` | `+0x0` | 7 | `kernel32.dll` |
| `0x7bc00000` | 716,800 | `0x7bc00000` | `+0x0` | 7 | `ntdll.dll` |
| `0x7e2dd000` | 8,192 | ? | — | 1 | `vgasys.fon` |

## Modules ELF natifs (118)

Loader Wine, libc, glibc-helpers, etc. Utile pour identifier où Wine intercepte les API Win32.

| Base Linux | Taille | Segments | Module |
|---|---|---|---|
| `0x000070538000` | 11,800,576 | 5 | `libvulkan_asahi.so` |
| `0x00007cc10000` | 1,757,184 | 5 | `libunistring.so.5.0.0` |
| `0x00007cdbd000` | 2,359,296 | 5 | `libgnutls.so.30.37.1` |
| `0x00007d000000` | 20,480 | 5 | `wine` |
| `0x00007d181000` | 2,609,152 | 5 | `libstdc++.so.6.0.33` |
| `0x00007d400000` | 20,480 | 3 | `wine-preloader` |
| `0x00007d421000` | 593,920 | 5 | `libgmp.so.10.5.0` |
| `0x00007d4b2000` | 299,008 | 5 | `libhogweed.so.6.8` |
| `0x00007d4fb000` | 45,056 | 5 | `libffi.so.8.1.4` |
| `0x00007d506000` | 229,376 | 5 | `libgcc_s.so.1` |
| `0x00007d53e000` | 61,440 | 5 | `libwayland-client.so.0.23.1` |
| `0x00007d54d000` | 20,480 | 5 | `libxshmfence.so.1.0.0` |
| `0x00007d8e1000` | 339,968 | 5 | `libnettle.so.8.8` |
| `0x00007d934000` | 106,496 | 5 | `libdrm.so.2.125.0` |
| `0x00007d94e000` | 176,128 | 5 | `libgpg-error.so.0.34.0` |
| `0x00007d979000` | 774,144 | 5 | `libzstd.so.1.5.5` |
| `0x00007da36000` | 221,184 | 5 | `liblzma.so.5.4.5` |
| `0x00007da6c000` | 155,648 | 5 | `liblz4.so.1.9.4` |
| `0x00007da92000` | 1,097,728 | 5 | `libgcrypt.so.20.4.3` |
| `0x00007db9f000` | 53,248 | 5 | `libcap.so.2.66` |
| `0x00007dbac000` | 942,080 | 5 | `libsystemd.so.0.38.0` |
| `0x00007dc93000` | 393,216 | 5 | `libdbus-1.so.3.32.4` |
| `0x00007dd1e000` | 94,208 | 5 | `libtasn1.so.6.6.3` |
| `0x00007dd35000` | 45,056 | 5 | `libxcb-xfixes.so.0.0.0` |
| `0x00007dd40000` | 36,864 | 5 | `libxcb-sync.so.1.0.0` |
| `0x00007dd49000` | 20,480 | 5 | `libxcb-present.so.0.0.0` |
| `0x00007dd4e000` | 20,480 | 5 | `libX11-xcb.so.1.0.0` |
| `0x00007dd53000` | 77,824 | 5 | `libxcb-randr.so.0.1.0` |
| `0x00007dd66000` | 122,880 | 5 | `libxcb-glx.so.0.0.0` |
| `0x00007dd8f000` | 212,992 | 5 | `libidn2.so.0.4.0` |
| `0x00007ddc3000` | 1,892,352 | 5 | `libp11-kit.so.0.3.1` |
| `0x00007dff0000` | 20,480 | 5 | `libxcb-shm.so.0.0.0` |
| `0x00007dff8000` | 53,248 | 5 | `libXcursor.so.1.0.2` |
| `0x00007e02a000` | 577,536 | 5 | `libvulkan.so.1.3.280` |
| `0x00007e0b7000` | 86,016 | 5 | `libXi.so.6.1.0` |
| `0x00007e0cc000` | 20,480 | 5 | `libXcomposite.so.1.0.0` |
| `0x00007e0d1000` | 32,768 | 5 | `libXfixes.so.3.1.0` |
| `0x00007e0d9000` | 61,440 | 5 | `libXrandr.so.2.2.0` |
| `0x00007e0e8000` | 57,344 | 5 | `libXrender.so.1.3.0` |
| `0x00007e0f6000` | 32,768 | 5 | `libXxf86vm.so.1.0.0` |
| `0x00007e0fe000` | 20,480 | 5 | `libXinerama.so.1.0.0` |
| `0x00007e103000` | 73,728 | 5 | `libmd.so.0.1.0` |
| `0x00007e115000` | 90,112 | 5 | `libbsd.so.0.12.1` |
| `0x00007e12b000` | 28,672 | 5 | `libXdmcp.so.6.0.0` |
| `0x00007e132000` | 20,480 | 5 | `libXau.so.6.0.0` |
| `0x00007e137000` | 188,416 | 5 | `libxcb.so.1.1.0` |
| `0x00007e165000` | 1,380,352 | 5 | `libX11.so.6.4.0` |
| `0x00007e2b7000` | 90,112 | 5 | `libXext.so.6.4.0` |
| `0x00007e2d1000` | 28,672 | 5 | `libxcb-dri3.so.0.1.0` |
| `0x00007e2e6000` | 647,168 | 6 | `winex11.so` |
| `0x00007e496000` | 180,224 | 5 | `libexpat.so.1.9.1` |
| `0x00007e4c2000` | 344,064 | 5 | `libfontconfig.so.1.12.1` |
| `0x00007e516000` | 143,360 | 5 | `libbrotlicommon.so.1.1.0` |
| `0x00007e539000` | 57,344 | 5 | `libbrotlidec.so.1.1.0` |
| `0x00007e547000` | 249,856 | 5 | `libpng16.so.16.43.0` |
| `0x00007e584000` | 73,728 | 5 | `libbz2.so.1.0.4` |
| `0x00007e596000` | 114,688 | 5 | `libz.so.1.3` |
| `0x00007e5b2000` | 868,352 | 5 | `libfreetype.so.6.20.1` |
| `0x00007e69f000` | 651,264 | 5 | `opengl32.so` |
| `0x00007e741000` | 65,536 | 5 | `libresolv.so.2` |
| `0x00007e753000` | 1,089,536 | 5 | `libm.so.6` |
| `0x00007e868000` | 57,344 | 5 | `bcrypt.so` |
| `0x00007e876000` | 1,355,776 | 6 | `win32u.so` |
| `0x00007e9ff000` | 1,531,904 | 6 | `libwine.so.1.0` |
| `0x0000d6118000` | 21,635,072 | 5 | `libvulkan_intel.so` |
| `0x0000dcf46000` | 491,520 | 7 | `libGLdispatch.so.0.0.0` |
| `0x0000dcfc2000` | 442,368 | 7 | `libGL.so.1.7.0` |
| `0x0000dd12e000` | 13,549,568 | 5 | `libnvidia-glvkspirv.so.580.126.18` |
| `0x0000de39e000` | 15,572,992 | 5 | `libvulkan_radeon.so` |
| `0x0000df27d000` | 1,515,520 | 5 | `libvulkan_virtio.so` |
| `0x0000df3f0000` | 18,157,568 | 5 | `libvulkan_intel_hasvk.so` |
| `0x0000e0543000` | 12,140,544 | 5 | `libvulkan_lvp.so` |
| `0x0000e1673000` | 101,777,408 | 6 | `libnvidia-gpucomp.so.580.126.18` |
| `0x0000e77e2000` | 32,636,928 | 5 | `libnvidia-glcore.so.580.126.18` |
| `0x0000e9719000` | 802,816 | 6 | `libnvidia-glsi.so.580.126.18` |
| `0x0000e97e3000` | 1,253,376 | 8 | `libGLX_nvidia.so.580.126.18` |
| `0x0000e9916000` | 30,801,920 | 5 | `libicudata.so.74.2` |
| `0x0000eb676000` | 2,195,456 | 5 | `libicuuc.so.74.2` |
| `0x0000eb88f000` | 1,916,928 | 5 | `libxml2.so.2.9.14` |
| `0x0000eba64000` | 161,980,416 | 4 | `libLLVM.so.20.1` |
| `0x0000f55a0000` | 98,304 | 5 | `libVkLayer_MESA_device_select.so` |
| `0x0000f55b9000` | 57,344 | 5 | `libdrm_amdgpu.so.1.125.0` |
| `0x0000f55c7000` | 131,072 | 5 | `libelf-0.190.so` |
| `0x0000f5904000` | 311,296 | 5 | `libmp3lame.so.0.0.0` |
| `0x0000f597d000` | 417,792 | 5 | `libmpg123.so.0.48.2` |
| `0x0000f59e3000` | 401,408 | 5 | `libopus.so.0.9.0` |
| `0x0000f5a45000` | 573,440 | 5 | `libvorbisenc.so.2.0.12` |
| `0x0000f5ad1000` | 180,224 | 5 | `libvorbis.so.0.4.9` |
| `0x0000f5afd000` | 462,848 | 5 | `libFLAC.so.12.1.0` |
| `0x0000f5b6e000` | 663,552 | 5 | `libsndfile.so.1.0.37` |
| `0x0000f5c12000` | 589,824 | 5 | `libpulsecommon-16.1.so` |
| `0x0000f5ca2000` | 385,024 | 5 | `libpulse.so.0.24.2` |
| `0x0000f6225000` | 212,992 | 5 | `libGLX.so.0.0.0` |
| `0x0000f626c000` | 86,016 | 5 | `libapparmor.so.1.17.2` |
| `0x0000f629a000` | 188,416 | 5 | `libtinfo.so.6.4` |
| `0x0000f62c8000` | 221,184 | 5 | `libedit.so.2.0.72` |
| `0x0000f6405000` | 40,960 | 5 | `libogg.so.0.8.5` |
| `0x0000f640f000` | 86,016 | 5 | `winepulse.so` |
| `0x0000f6424000` | 901,120 | 5 | `libkrb5.so.3.3` |
| `0x0000f6a08000` | 32,768 | 5 | `libasyncns.so.0.3.1` |
| `0x0000f6a20000` | 372,736 | 5 | `libgssapi_krb5.so.2.2` |
| `0x0000f6a7b000` | 28,672 | 5 | `libkeyutils.so.1.10` |
| `0x0000f6a82000` | 61,440 | 5 | `libkrb5support.so.0.1` |
| `0x0000f6a91000` | 20,480 | 5 | `libcom_err.so.2.1` |
| `0x0000f6a96000` | 196,608 | 5 | `libk5crypto.so.3.1` |
| `0x0000f6aca000` | 28,672 | 5 | `libnvidia-tls.so.580.126.18` |
| `0x0000f6ad1000` | 28,672 | 5 | `libatomic.so.1.2.0` |
| `0x0000f6ad9000` | 24,576 | 5 | `crypt32.so` |
| `0x0000f6adf000` | 32,768 | 5 | `kerberos.so` |
| `0x0000f6ae7000` | 40,960 | 5 | `secur32.so` |
| `0x0000f6af1000` | 28,672 | 6 | `ws2_32.so` |
| `0x0000f6af8000` | 20,480 | 5 | `librt.so.1` |
| `0x0000f6afd000` | 651,264 | 5 | `ntdll.so` |
| `0x0000f6bf1000` | 2,301,952 | 5 | `libc.so.6` |
| `0x0000f6e2d000` | 20,480 | 5 | `libdl.so.2` |
| `0x0000f6e32000` | 20,480 | 5 | `libpthread.so.0` |
| `0x0000f6e39000` | 20,480 | 5 | `dnsapi.so` |
| `0x0000f6e52000` | 217,088 | 5 | `ld-linux.so.2` |

## Régions anonymes / spéciales (581)

| Type | Nombre | Taille totale |
|---|---|---|
| `anonymous` | 576 | 1,838,985,216 |
| `heap` | 1 | 2,355,200 |
| `stack` | 1 | 135,168 |
| `vvar` | 1 | 16,384 |
| `vdso` | 1 | 12,288 |
| `vvar_vclock` | 1 | 8,192 |

## Autres fichiers mappés (36)

- `/home/horus/.local/share/lutris/runners/wine/wine-ge-8-26-x86_64/share/wine/nls/locale.nls` (other, 745,472 octets)
- `/home/horus/.local/share/lutris/runners/wine/wine-ge-8-26-x86_64/share/wine/nls/l_intl.nls` (other, 8,192 octets)
- `/home/horus/.local/share/lutris/runners/wine/wine-ge-8-26-x86_64/share/wine/nls/c_1252.nls` (other, 69,632 octets)
- `/home/horus/.local/share/lutris/runners/wine/wine-ge-8-26-x86_64/share/wine/nls/c_850.nls` (other, 69,632 octets)
- `/home/horus/.local/share/lutris/runners/wine/wine-ge-8-26-x86_64/share/wine/nls/normnfc.nls` (other, 61,440 octets)
- `/home/horus/.local/share/lutris/runners/wine/wine-ge-8-26-x86_64/share/wine/nls/sortdefault.nls` (other, 3,379,200 octets)
- `/home/horus/.local/share/lutris/runners/wine/wine-ge-8-26-x86_64/share/wine/nls/c_20127.nls` (other, 69,632 octets)
- `/home/horus/.local/share/lutris/runners/wine/wine-ge-8-26-x86_64/share/wine/nls/c_10000.nls` (other, 69,632 octets)
- `/home/horus/.local/share/lutris/runners/wine/wine-ge-8-26-x86_64/share/wine/nls/normidna.nls` (other, 86,016 octets)
- `/home/horus/.local/share/lutris/runners/wine/wine-ge-8-26-x86_64/share/wine/fonts/tahomabd.ttf` (other, 139,264 octets)
- `/home/horus/.local/share/lutris/runners/wine/wine-ge-8-26-x86_64/share/wine/fonts/tahoma.ttf` (other, 147,456 octets)
- `/usr/share/locale-langpack/fr/LC_MESSAGES/libc.mo` (other, 151,552 octets)
- `/usr/lib/i386-linux-gnu/gconv/gconv-modules.cache` (other, 28,672 octets)
- `/home/horus/.cache/fontconfig/a4e60e8d1e10d2fdff3fe3037a1845fb-le32d4.cache-9` (other, 40,960 octets)
- `/home/horus/.cache/fontconfig/2300eef321c393bfd76478a5c0e95b23-le32d4.cache-9` (other, 278,528 octets)
- `/home/horus/.cache/fontconfig/bbd3eebb6912613e2596f2fd46535a95-le32d4.cache-9` (other, 20,480 octets)
- `/home/horus/.cache/fontconfig/0bd3dc0958fa2205aaaa8ebb13e2872b-le32d4.cache-9` (other, 393,216 octets)
- `/home/horus/.cache/fontconfig/3047814df9a2f067bd2d96a2b9c36e5a-le32d4.cache-9` (other, 24,576 octets)
- `/home/horus/.cache/fontconfig/d52a8644073d54c13679302ca1180695-le32d4.cache-9` (other, 77,824 octets)
- `/home/horus/.cache/fontconfig/9b89f8e3dae116d678bbf48e5f21f69b-le32d4.cache-9` (other, 122,880 octets)
- `/home/horus/.cache/fontconfig/44474f3f49f61af72d5a386e6b9e8489-le32d4.cache-9` (other, 135,168 octets)
- `/home/horus/.cache/fontconfig/d72e64e659959f2a51dfd1c3a582bfd6-le32d4.cache-9` (other, 8,192 octets)
- `/home/horus/.cache/fontconfig/089dead882dea3570ffc31a9898cfb69-le32d4.cache-9` (other, 40,960 octets)
- `/home/horus/.cache/fontconfig/6cc790b63b123a6a96ee260fcdad32a9-le32d4.cache-9` (other, 49,152 octets)
- `/home/horus/.cache/fontconfig/e13b20fdb08344e0e664864cc2ede53d-le32d4.cache-9` (other, 40,960 octets)
- `/dev/shm/wine-a43eab-fsync` (other, 65,536 octets)
- `/usr/lib/locale/locale-archive` (other, 2,016,116,736 octets)
- `/usr/share/locale-langpack/fr/LC_MESSAGES/pulseaudio.mo` (other, 57,344 octets)
- `/home/horus/.cache/fontconfig/da43223dd54fb3bb4243ae19d4b583b2-le32d4.cache-9` (other, 4,096 octets)
- `/home/horus/.cache/fontconfig/3f7329c5293ffd510edef78f73874cfd-le32d4.cache-9` (other, 4,096 octets)
- `/memfd:wine-mapping (deleted)` (unreadable, 2,015,105,024 octets)
- `/dev/nvidiactl` (unreadable, 671,916,032 octets)
- `/SYSV00000000 (deleted)` (unreadable, 643,633,152 octets)
- `/memfd:pulseaudio (deleted)` (unreadable, 67,108,864 octets)
- `/dev/nvidia0` (unreadable, 435,490,816 octets)
- `/memfd:/.glXXXXXX (deleted)` (unreadable, 16,384 octets)

