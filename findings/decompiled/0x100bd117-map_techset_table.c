// Adresse runtime : 0x100bd117  (pas d'ASLR -> 1:1)
// Label heuristique : map_techset_table
// Taille body : 5268 octets
// Decompile par Ghidra 12.0.4 PUBLIC


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100bd117(undefined4 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 local_41c [4];
  undefined1 local_418 [4];
  undefined1 local_414 [4];
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  int local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_384;
  code *local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  int *local_1dc;
  undefined4 local_1d8;
  undefined1 local_1d4 [4];
  char *local_1d0;
  undefined1 local_1cc [4];
  undefined1 local_1c8 [4];
  int local_1c4;
  int local_1c0;
  undefined1 local_1ba;
  char local_1b9;
  uint local_1b8;
  short *local_1b4;
  undefined1 local_120 [116];
  undefined1 local_ac [4];
  undefined1 local_a8 [80];
  undefined1 local_58 [4];
  undefined1 local_54 [60];
  undefined1 local_18 [4];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d0587;
  local_10 = ExceptionList;
  local_14 = DAT_10342100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1b8 = 0;
  local_380 = DAT_103436a4;
  local_1ba = (*DAT_103436a4)(param_1,param_2,param_3,local_14);
  local_1c4 = *DAT_10343638;
  local_3f0 = (int)*(char *)(local_1c4 + 0xc) + (int)*(char *)(local_1c4 + 0xd) +
              (int)*(char *)(local_1c4 + 0xe);
  local_1c0 = 0;
  do {
    if ((local_3f0 <= local_1c0) || (DAT_104119c8 < 0x13c)) {
      ExceptionList = local_10;
      return local_1ba;
    }
    local_1b4 = (short *)(param_2 + local_1c0 * 8);
    if ((*local_1b4 == 3) || (*local_1b4 == 5)) {
      iVar2 = FUN_1000752e();
      if (iVar2 < 0x1be) {
        if (((ushort)local_1b4[2] < 0x3a) || (0x87 < (ushort)local_1b4[2])) {
          if ((10 < (ushort)local_1b4[2]) && ((ushort)local_1b4[2] < 0x3a)) {
            local_1b4[2] = local_1b4[2] + -2;
            iVar2 = FUN_1000752e();
            if (0x166 < iVar2) {
              if (((ushort)local_1b4[2] < 0x10) || (0x1d < (ushort)local_1b4[2])) {
                if (0x31 < (ushort)local_1b4[2]) {
                  local_1b4[2] = local_1b4[2] + 6;
                }
              }
              else {
                local_1b4[2] = local_1b4[2] + -1;
                if (local_1b4[2] == 0x13) {
                  local_1b4[2] = 0x15;
                }
              }
            }
          }
        }
        else {
          local_1b4[2] = local_1b4[2] + -3;
          iVar2 = FUN_1000752e();
          if ((0x166 < iVar2) && (local_1b4[2] = local_1b4[2] + -7, (ushort)local_1b4[2] < 0x36)) {
            local_1b4[2] = local_1b4[2] + 1;
          }
        }
      }
      else if ((*local_1b4 == 3) || (*local_1b4 == 5)) {
        iVar2 = FUN_1000752e();
        if (iVar2 == 0x1be) {
          if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x40) <
               DAT_10635aac) && (FUN_1018e1c4(&DAT_10635aac), DAT_10635aac == -1)) {
            local_8 = 0;
            local_3f8 = 0x21;
            local_3f4 = 0x1f;
            FUN_100c433f(&local_3f8,&local_3f4);
            local_400 = 0x22;
            local_3fc = 0x20;
            FUN_100c433f(&local_400,&local_3fc);
            local_408 = 0x24;
            local_404 = 0x22;
            FUN_100c433f(&local_408,&local_404);
            local_1e0 = 0x27;
            local_40c = 0x25;
            FUN_100c433f(&local_1e0,&local_40c);
            local_1e8 = 0x28;
            local_1e4 = 0x26;
            FUN_100c433f(&local_1e8,&local_1e4);
            local_1f0 = 0x2a;
            local_1ec = 0x28;
            FUN_100c433f(&local_1f0,&local_1ec);
            local_1f8 = 0x2b;
            local_1f4 = 0x29;
            FUN_100c433f(&local_1f8,&local_1f4);
            local_200 = 0x2d;
            local_1fc = 0x2b;
            FUN_100c433f(&local_200,&local_1fc);
            local_208 = 0x3e;
            local_204 = 0x34;
            FUN_100c433f(&local_208,&local_204);
            local_210 = 0x3f;
            local_20c = 0x35;
            FUN_100c433f(&local_210,&local_20c);
            local_218 = 199;
            local_214 = 0x3a;
            FUN_100c433f(&local_218,&local_214);
            local_220 = 0x103;
            local_21c = 0x56;
            FUN_100c433f(&local_220,&local_21c);
            local_228 = 0x107;
            local_224 = 0x5a;
            FUN_100c433f(&local_228,&local_224);
            local_230 = 0x10f;
            local_22c = 0x62;
            FUN_100c433f(&local_230,&local_22c);
            local_238 = 0x117;
            local_234 = 0x6a;
            FUN_100c433f(&local_238,&local_234);
            puVar3 = (undefined4 *)FUN_1003359a(local_54,local_18);
            FUN_100c494e(*puVar3,puVar3[1]);
            FUN_1018dfa4(FUN_101e049e);
            local_8 = 0xffffffff;
            FUN_1018e173(&DAT_10635aac);
          }
          FUN_100c491b(local_1c8,local_1b4 + 2);
          uVar4 = FUN_1006af98(local_414);
          cVar1 = FUN_1005e0c5(uVar4);
          if (cVar1 == '\0') {
            iVar2 = FUN_100c4809();
            local_1b4[2] = *(short *)(iVar2 + 2);
          }
        }
        else {
          iVar2 = FUN_1000752e();
          if (iVar2 == 0x1cd) {
            if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x40) <
                 DAT_10635ad0) && (FUN_1018e1c4(&DAT_10635ad0), DAT_10635ad0 == -1)) {
              local_8 = 1;
              local_240 = 0x21;
              local_23c = 0x1f;
              FUN_100c433f(&local_240,&local_23c);
              local_248 = 0x22;
              local_244 = 0x20;
              FUN_100c433f(&local_248,&local_244);
              local_250 = 0x24;
              local_24c = 0x22;
              FUN_100c433f(&local_250,&local_24c);
              local_258 = 0x27;
              local_254 = 0x25;
              FUN_100c433f(&local_258,&local_254);
              local_260 = 0x28;
              local_25c = 0x26;
              FUN_100c433f(&local_260,&local_25c);
              local_268 = 0x2a;
              local_264 = 0x28;
              FUN_100c433f(&local_268,&local_264);
              local_270 = 0x2b;
              local_26c = 0x29;
              FUN_100c433f(&local_270,&local_26c);
              local_278 = 0x2d;
              local_274 = 0x2b;
              FUN_100c433f(&local_278,&local_274);
              local_280 = 0x3e;
              local_27c = 0x34;
              FUN_100c433f(&local_280,&local_27c);
              local_288 = 0x3f;
              local_284 = 0x35;
              FUN_100c433f(&local_288,&local_284);
              local_290 = 0xc5;
              local_28c = 0x3a;
              FUN_100c433f(&local_290,&local_28c);
              local_298 = 0xca;
              local_294 = 0x3f;
              FUN_100c433f(&local_298,&local_294);
              local_2a0 = 0xcb;
              local_29c = 0x40;
              FUN_100c433f(&local_2a0,&local_29c);
              local_2a8 = 0x105;
              local_2a4 = 0x5a;
              FUN_100c433f(&local_2a8,&local_2a4);
              local_2b0 = 0x109;
              local_2ac = 0x5e;
              FUN_100c433f(&local_2b0,&local_2ac);
              local_2b8 = 0x10d;
              local_2b4 = 0x62;
              FUN_100c433f(&local_2b8,&local_2b4);
              local_2c0 = 0x115;
              local_2bc = 0x6a;
              FUN_100c433f(&local_2c0,&local_2bc);
              local_2c8 = 0x26;
              local_2c4 = 0x24;
              FUN_100c433f(&local_2c8,&local_2c4);
              local_2d0 = 0x28;
              local_2cc = 0x26;
              FUN_100c433f(&local_2d0,&local_2cc);
              local_2d8 = 0x76;
              local_2d4 = 0x56;
              FUN_100c433f(&local_2d8,&local_2d4);
              puVar3 = (undefined4 *)FUN_1003359a(local_a8,local_58);
              FUN_100c494e(*puVar3,puVar3[1]);
              FUN_1018dfa4(FUN_101e0484);
              local_8 = 0xffffffff;
              FUN_1018e173(&DAT_10635ad0);
            }
            FUN_100c491b(local_1cc,local_1b4 + 2);
            uVar4 = FUN_1006af98(local_418);
            cVar1 = FUN_1005e0c5(uVar4);
            if (cVar1 == '\0') {
              iVar2 = FUN_100c4809();
              local_1b4[2] = *(short *)(iVar2 + 2);
            }
            if (local_1b4[2] == 0x101) {
              local_1d0 = (char *)*_DAT_0112ae8c;
              iVar2 = _strncmp(local_1d0,"wc_unlit_add",0xc);
              if ((iVar2 == 0) || (iVar2 = _strncmp(local_1d0,"wc_unlit_multiply",0x11), iVar2 == 0)
                 ) {
                local_1b4[2] = 0x74;
              }
              else {
                local_1b4[2] = 0x56;
              }
            }
            else if ((ushort)local_1b4[2] < 0x103) {
              if (0xc4 < (ushort)local_1b4[2]) {
                local_1b4[2] = local_1b4[2] + -0x8b;
              }
            }
            else {
              local_1b4[2] = local_1b4[2] + -0xab;
            }
          }
          else {
            iVar2 = FUN_1000752e();
            if (iVar2 == 0x1cc) {
              if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x40) <
                   DAT_10635af4) && (FUN_1018e1c4(&DAT_10635af4), DAT_10635af4 == -1)) {
                local_8 = 2;
                local_2e0 = 0x16;
                local_2dc = 0x15;
                FUN_100c433f(&local_2e0,&local_2dc);
                local_2e8 = 0x21;
                local_2e4 = 0x1f;
                FUN_100c433f(&local_2e8,&local_2e4);
                local_2f0 = 0x22;
                local_2ec = 0x20;
                FUN_100c433f(&local_2f0,&local_2ec);
                local_2f8 = 0x24;
                local_2f4 = 0x22;
                FUN_100c433f(&local_2f8,&local_2f4);
                local_300 = 0x25;
                local_2fc = 0x23;
                FUN_100c433f(&local_300,&local_2fc);
                local_308 = 0x26;
                local_304 = 0x24;
                FUN_100c433f(&local_308,&local_304);
                local_310 = 0x27;
                local_30c = 0x25;
                FUN_100c433f(&local_310,&local_30c);
                local_318 = 0x28;
                local_314 = 0x26;
                FUN_100c433f(&local_318,&local_314);
                local_320 = 0x29;
                local_31c = 0x27;
                FUN_100c433f(&local_320,&local_31c);
                local_328 = 0x2a;
                local_324 = 0x28;
                FUN_100c433f(&local_328,&local_324);
                local_330 = 0x2b;
                local_32c = 0x29;
                FUN_100c433f(&local_330,&local_32c);
                local_338 = 0x2c;
                local_334 = 0x2a;
                FUN_100c433f(&local_338,&local_334);
                local_340 = 0x2d;
                local_33c = 0x2b;
                FUN_100c433f(&local_340,&local_33c);
                local_348 = 0x3e;
                local_344 = 0x34;
                FUN_100c433f(&local_348,&local_344);
                local_350 = 0x3f;
                local_34c = 0x35;
                FUN_100c433f(&local_350,&local_34c);
                local_358 = 0xc5;
                local_354 = 0x3a;
                FUN_100c433f(&local_358,&local_354);
                local_360 = 0xc6;
                local_35c = 0x3b;
                FUN_100c433f(&local_360,&local_35c);
                local_368 = 0xca;
                local_364 = 0x3f;
                FUN_100c433f(&local_368,&local_364);
                local_370 = 0xcb;
                local_36c = 0x40;
                FUN_100c433f(&local_370,&local_36c);
                local_378 = 0xcf;
                local_374 = 0x44;
                FUN_100c433f(&local_378,&local_374);
                local_3d4 = 0xfc;
                local_37c = 0x51;
                FUN_100c433f(&local_3d4,&local_37c);
                local_388 = 0xfd;
                local_384 = 0x52;
                FUN_100c433f(&local_388,&local_384);
                local_390 = 0x105;
                local_38c = 0x5a;
                FUN_100c433f(&local_390,&local_38c);
                local_398 = 0x109;
                local_394 = 0x5e;
                FUN_100c433f(&local_398,&local_394);
                local_3a0 = 0x10d;
                local_39c = 0x62;
                FUN_100c433f(&local_3a0,&local_39c);
                local_3a8 = 0x110;
                local_3a4 = 0x65;
                FUN_100c433f(&local_3a8,&local_3a4);
                local_3b0 = 0x111;
                local_3ac = 0x66;
                FUN_100c433f(&local_3b0,&local_3ac);
                local_3b8 = 0x112;
                local_3b4 = 0x67;
                FUN_100c433f(&local_3b8,&local_3b4);
                local_3c0 = 0x115;
                local_3bc = 0x6a;
                FUN_100c433f(&local_3c0,&local_3bc);
                puVar3 = (undefined4 *)FUN_1003359a(local_120,local_ac);
                FUN_100c494e(*puVar3,puVar3[1]);
                FUN_1018dfa4(FUN_101e046a);
                local_8 = 0xffffffff;
                FUN_1018e173(&DAT_10635af4);
              }
              FUN_100c491b(local_1d4,local_1b4 + 2);
              uVar4 = FUN_1006af98(local_41c);
              cVar1 = FUN_1005e0c5(uVar4);
              if (cVar1 == '\0') {
                iVar2 = FUN_100c4809();
                local_1b4[2] = *(short *)(iVar2 + 2);
              }
              else if (local_1b4[2] == 0x101) {
                local_3c8 = FUN_100523ef();
                local_8 = 3;
                local_1b8 = local_1b8 | 1;
                local_3c4 = local_3c8;
                cVar1 = FUN_1000755c();
                if (cVar1 == '\0') {
                  local_3d0 = FUN_100523ef();
                  local_8 = 4;
                  local_1b8 = local_1b8 | 2;
                  local_3cc = local_3d0;
                  cVar1 = FUN_1000755c();
                  if (cVar1 != '\0') goto LAB_100be3e9;
                  local_410 = FUN_100523ef();
                  local_8 = 5;
                  local_1b8 = local_1b8 | 4;
                  local_3d8 = local_410;
                  cVar1 = FUN_1000755c();
                  if (cVar1 != '\0') goto LAB_100be3e9;
                  local_3e0 = FUN_100523ef();
                  local_8 = 6;
                  local_1b8 = local_1b8 | 8;
                  local_3dc = local_3e0;
                  cVar1 = FUN_1000755c();
                  if (cVar1 != '\0') goto LAB_100be3e9;
                  local_3e8 = FUN_100523ef();
                  local_8 = 7;
                  local_1b8 = local_1b8 | 0x10;
                  local_3e4 = local_3e8;
                  cVar1 = FUN_1000755c();
                  if (cVar1 != '\0') goto LAB_100be3e9;
                  local_3ec = FUN_100523ef();
                  local_1b8 = local_1b8 | 0x20;
                  cVar1 = FUN_1000755c();
                  if (cVar1 != '\0') goto LAB_100be3e9;
                  local_1d8 = 1;
                }
                else {
LAB_100be3e9:
                  local_1d8 = 0;
                }
                local_1b9 = (char)local_1d8;
                if ((local_1b8 & 0x20) != 0) {
                  local_1b8 = local_1b8 & 0xffffffdf;
                  FUN_100075cd();
                }
                local_8 = 6;
                if ((local_1b8 & 0x10) != 0) {
                  local_1b8 = local_1b8 & 0xffffffef;
                  FUN_100075cd();
                }
                local_8 = 5;
                if ((local_1b8 & 8) != 0) {
                  local_1b8 = local_1b8 & 0xfffffff7;
                  FUN_100075cd();
                }
                local_8 = 4;
                if ((local_1b8 & 4) != 0) {
                  local_1b8 = local_1b8 & 0xfffffffb;
                  FUN_100075cd();
                }
                local_8 = 3;
                if ((local_1b8 & 2) != 0) {
                  local_1b8 = local_1b8 & 0xfffffffd;
                  FUN_100075cd();
                }
                local_8 = 0xffffffff;
                if ((local_1b8 & 1) != 0) {
                  local_1b8 = local_1b8 & 0xfffffffe;
                  FUN_100075cd();
                }
                if (local_1b9 != '\0') {
                  local_1dc = _DAT_0112ae8c;
                  if ((*_DAT_0112ae8c == 0) ||
                     (iVar2 = _strncmp((char *)*_DAT_0112ae8c,"mc_",3), iVar2 != 0)) {
                    local_1b4[2] = 0x80;
                  }
                  else {
                    local_1b4[2] = 0x56;
                  }
                }
              }
              else if ((ushort)local_1b4[2] < 0x103) {
                if (0xc4 < (ushort)local_1b4[2]) {
                  local_1b4[2] = local_1b4[2] + -0x8b;
                }
              }
              else {
                local_1b4[2] = local_1b4[2] + -0xab;
              }
            }
          }
        }
      }
    }
    local_1c0 = local_1c0 + 1;
  } while( true );
}

