// Adresse runtime : 0x100ff16d  (pas d'ASLR -> 1:1)
// Label heuristique : world_parser
// Taille body : 12678 octets
// Decompile par Ghidra 12.0.4 PUBLIC


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_100ff16d(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  ushort *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  int *piVar7;
  char *pcVar8;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  uint uVar9;
  int *piVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined1 *_Dst;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 local_53c [136];
  undefined4 local_4b4;
  undefined1 local_3e4 [64];
  undefined4 local_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 local_394;
  undefined4 local_390;
  int local_38c [8];
  undefined4 *local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined1 local_360 [4];
  ushort *local_35c;
  uint local_358;
  uint local_354;
  uint local_350;
  undefined4 local_34c;
  undefined4 *local_348;
  int *local_344;
  uint local_340;
  uint local_33c;
  int *local_338;
  undefined1 local_334 [16];
  undefined1 local_324 [24];
  undefined1 local_30c [40];
  int local_2e4;
  int iStack_2e0;
  int iStack_2dc;
  int iStack_2d8;
  int local_2d4 [93];
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int local_154 [12];
  undefined4 local_124;
  int local_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  undefined **local_ec;
  undefined1 *local_e8;
  undefined1 local_dc [20];
  undefined ***local_c8;
  int local_c4 [2];
  char *local_bc;
  int iStack_b8;
  int local_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined *local_9c;
  undefined4 uStack_98;
  int local_94 [6];
  char *local_7c;
  int iStack_78;
  int local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  uint local_58;
  int local_54 [2];
  int *local_4c;
  int iStack_48;
  int local_44 [2];
  char *local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  int *local_28;
  int local_24 [2];
  char *local_1c;
  int aiStack_18 [4];
  undefined4 local_8;
  
  local_8 = 0x100ff185;
  local_340 = 0;
  local_350 = 0;
  local_36c = param_2;
  param_2 = (undefined4 *)*param_2;
  local_358 = 0;
  local_364 = param_1;
  local_348 = param_2;
  if (param_2 != (undefined4 *)0x0) {
    _Dst = local_53c;
    uVar15 = 0;
    uVar14 = 0x100ff1cc;
    _memset(_Dst,0,0x5c);
    FUN_100d306d();
    local_8 = 0;
    FUN_100559a2();
    local_8._0_1_ = 1;
    FUN_100559a2();
    local_8._0_1_ = 2;
    FUN_100559a2();
    local_8._0_1_ = 3;
    FUN_100559a2();
    local_8._0_1_ = 4;
    FUN_100559a2();
    local_8._0_1_ = 5;
    uVar16 = 0x100ff237;
    FUN_100d306d();
    local_8._0_1_ = 6;
    FUN_100d8a0e(uVar14,_Dst,uVar15,uVar16);
    local_8._0_1_ = 7;
    local_34c = local_124;
    local_350 = local_124;
    local_368 = local_124;
    local_354 = local_124;
    FUN_100d7c54("version",7,3,local_124);
    pcVar6 = (char *)*param_2;
    if (pcVar6 == (char *)0x0) {
      local_74 = 0;
      piVar4 = &local_74;
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      local_8 = CONCAT31(local_8._1_3_,8);
      local_340 = 1;
    }
    else {
      pcVar8 = pcVar6;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      local_44[0] = (int)pcVar8 - (int)(pcVar6 + 1);
      local_44[1] = 0;
      piVar4 = local_44;
      uStack_38 = 0x4050000;
      local_8 = 9;
      local_340 = 2;
      local_3c = pcVar6;
    }
    local_33c = local_340;
    FUN_100d8af7(&DAT_1020a068,4,piVar4,local_124);
    puVar12 = local_348;
    if ((local_33c & 2) != 0) {
      local_340 = local_33c & 0xfffffffd;
      local_33c = local_340;
    }
    local_8 = 7;
    if ((local_33c & 1) != 0) {
      local_340 = local_33c & 0xfffffffe;
      local_33c = local_340;
    }
    FUN_100d7c54("isInUse",7,local_348[1],local_124);
    local_e8 = local_3e4;
    local_ec = &PTR_FUN_1030d1a4;
    local_c8 = &local_ec;
    local_8._0_1_ = 10;
    FUN_1010e346(puVar12[2],local_124,local_c8);
    local_8._0_1_ = 0xc;
    FUN_100060ca();
    FUN_100d8af7("planes",6,local_30c,local_124);
    local_2d4[0x44] = 0;
    local_2d4[0x45] = 0;
    local_2d4[0x46] = 0;
    local_2d4[0x47] = 0x40000;
    local_58 = 0;
    uVar14 = local_124;
    if (local_348[4] != 0) {
      local_28 = (int *)0x0;
      do {
        local_24[0] = 0;
        local_24[1] = 0;
        local_1c = (char *)0x0;
        aiStack_18[0] = 0x30000;
        local_344 = (int *)(local_348[5] + (int)local_28);
        puVar12 = *(undefined4 **)(local_348[5] + (int)local_28);
        if (puVar12 == (undefined4 *)0x0) {
          local_74 = 0;
          piVar4 = &local_74;
          uStack_70 = 0;
          uStack_6c = 0;
          uStack_68 = 0;
          local_8 = CONCAT31(local_8._1_3_,0xf);
          local_340 = local_33c | 4;
        }
        else {
          pcVar6 = (char *)*puVar12;
          if (pcVar6 == (char *)0x0) {
            local_94[0] = 0;
            piVar4 = local_94;
            local_94[1] = 0;
            local_94[2] = 0;
            local_94[3] = 0;
            piVar7 = local_94 + 3;
            local_33c = local_33c | 8;
          }
          else {
            pcVar8 = pcVar6;
            do {
              cVar1 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
            piVar4 = local_94 + 4;
            local_94[5] = 0;
            iStack_78 = 0x4050000;
            local_7c = pcVar6;
            local_94[4] = (int)pcVar8 - (int)(pcVar6 + 1);
            piVar7 = &iStack_78;
            local_33c = local_33c | 0x10;
          }
          local_fc = *piVar4;
          iStack_f8 = piVar4[1];
          iStack_f4 = piVar4[2];
          iStack_f0 = piVar4[3];
          *(undefined2 *)((int)piVar7 + 2) = 0;
          piVar4 = &local_fc;
          local_340 = local_33c | 0x20;
          local_8 = 0x12;
          uVar14 = local_34c;
        }
        local_33c = local_340;
        FUN_100d8af7("xmodel",6,piVar4,uVar14);
        piVar4 = local_344;
        if ((local_33c & 0x20) != 0) {
          local_340 = local_33c & 0xffffffdf;
          local_33c = local_340;
        }
        if ((local_33c & 0x10) != 0) {
          local_340 = local_33c & 0xffffffef;
          local_33c = local_340;
        }
        if ((local_33c & 8) != 0) {
          local_340 = local_33c & 0xfffffff7;
          local_33c = local_340;
        }
        local_8 = 0xe;
        if ((local_33c & 4) != 0) {
          local_340 = local_33c & 0xfffffffb;
          local_33c = local_340;
        }
        uVar15 = FUN_100d81fe(3,uVar14);
        local_8._0_1_ = 0x13;
        FUN_100d8af7("origin",6,uVar15,uVar14);
        local_8._0_1_ = 0xe;
        if (*piVar4 != 0) {
          FUN_100f2baa(extraout_ECX,*piVar4);
        }
        local_a4 = 0;
        uStack_a0 = 0;
        local_9c = (undefined *)0x0;
        uStack_98 = 0x40000;
        local_338 = local_344 + 4;
        local_35c = (ushort *)0x3;
        do {
          local_8._0_1_ = 0x14;
          uVar15 = FUN_100d81fe(3,uVar14);
          local_8._0_1_ = 0x15;
          FUN_100d8a84(uVar15,uVar14);
          local_8._0_1_ = 0x14;
          local_35c = (ushort *)((int)local_35c + -1);
        } while (local_35c != (ushort *)0x0);
        FUN_100d8af7("invScaledAxis",0xd,&local_a4,uVar14);
        uVar15 = FUN_1010e473(uVar14);
        local_8._0_1_ = 0x16;
        FUN_100d8af7("absBounds",9,uVar15,uVar14);
        local_8._0_1_ = 0x14;
        FUN_100d8a84(local_24,uVar14);
        local_58 = local_58 + 1;
        local_28 = local_28 + 0x13;
      } while (local_58 < (uint)local_348[4]);
    }
    local_8._0_1_ = 0xd;
    FUN_100d8af7("staticModelList",0xf,local_2d4 + 0x44,uVar14);
    local_2d4[0x40] = 0;
    local_2d4[0x41] = 0;
    local_2d4[0x42] = 0;
    local_2d4[0x43] = 0x40000;
    local_28 = (int *)0x0;
    if (local_348[6] != 0) {
      local_58 = 0;
      do {
        local_24[0] = 0;
        local_24[1] = 0;
        local_1c = (char *)0x0;
        aiStack_18[0] = 0x30000;
        local_338 = (int *)(local_348[7] + local_58);
        pcVar6 = (char *)*local_338;
        if (pcVar6 == (char *)0x0) {
          local_74 = 0;
          piVar4 = &local_74;
          uStack_70 = 0;
          uStack_6c = 0;
          uStack_68 = 0;
          local_8 = CONCAT31(local_8._1_3_,0x19);
          local_340 = local_33c | 0x40;
        }
        else {
          pcVar8 = pcVar6;
          do {
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          local_44[0] = (int)pcVar8 - (int)(pcVar6 + 1);
          local_44[1] = 0;
          piVar4 = local_44;
          uStack_38 = 0x4050000;
          local_8 = 0x1a;
          local_340 = local_33c | 0x80;
          local_3c = pcVar6;
        }
        local_33c = local_340;
        FUN_100d8af7(&DAT_1020a068,4,piVar4,uVar14);
        piVar4 = local_338;
        if ((char)local_33c < '\0') {
          local_340 = local_33c & 0xffffff7f;
          local_33c = local_340;
        }
        local_8 = 0x18;
        if ((local_33c & 0x40) != 0) {
          local_340 = local_33c & 0xffffffbf;
          local_33c = local_340;
        }
        FUN_100d7c54("surfaceFlags",0xc,local_338[1],uVar14);
        FUN_100d7c54("contents",8,piVar4[2],uVar14);
        FUN_100d8a84(local_24,uVar14);
        local_28 = (int *)((int)local_28 + 1);
        local_58 = local_58 + 0xc;
      } while (local_28 < (uint)local_348[6]);
    }
    local_8._0_1_ = 0x17;
    FUN_100d8af7("materials",9,local_2d4 + 0x40,uVar14);
    local_2d4[0x3c] = 0;
    local_2d4[0x3d] = 0;
    local_2d4[0x3e] = 0;
    local_2d4[0x3f] = 0x40000;
    local_35c = (ushort *)0x0;
    if (local_348[8] != 0) {
      do {
        local_24[0] = 0;
        local_24[1] = 0;
        local_1c = (char *)0x0;
        aiStack_18[0] = 0x30000;
        local_8._0_1_ = 0x1c;
        local_344 = (int *)(local_348[9] + (int)local_35c * 8);
        piVar4 = (int *)FUN_101029a5(&local_2c,local_344);
        local_338 = *(int **)(*piVar4 + 0xc);
        FUN_100333fe(&DAT_1030d1a0,3);
        local_8._0_1_ = 0x1d;
        iVar5 = FUN_100d42e6(local_dc);
        if (iVar5 == 0) {
          piVar4 = &local_74;
          uStack_68 = 0;
          local_8 = CONCAT31(local_8._1_3_,0x1e);
          local_340 = local_33c | 0x100;
          local_74 = 0;
          uStack_70 = 0;
          uStack_6c = 0;
        }
        else {
          local_3c = (char *)FUN_100d42e6(local_dc);
          pcVar6 = local_3c;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          local_44[0] = (int)pcVar6 - (int)(local_3c + 1);
          local_44[1] = 0;
          piVar4 = local_44;
          uStack_38 = 0x4050000;
          local_8 = 0x1f;
          local_340 = local_33c | 0x200;
        }
        local_33c = local_340;
        FUN_100d8af7("plane",5,piVar4,uVar14);
        if ((local_33c & 0x200) != 0) {
          local_340 = local_33c & 0xfffffdff;
          local_33c = local_340;
        }
        local_8 = 0x1d;
        if ((local_33c & 0x100) != 0) {
          local_340 = local_33c & 0xfffffeff;
          local_33c = local_340;
        }
        FUN_100f4ac4("materialNum",0xb,(short)local_344[1],uVar14);
        FUN_100d7d9a("firstAdjacentSideOffset",0x17,*(undefined1 *)((int)local_344 + 6),uVar14);
        FUN_100d7d9a("edgeCount",9,*(undefined1 *)((int)local_344 + 7),uVar14);
        FUN_100d8a84(local_24,uVar14);
        piVar4 = (int *)FUN_101029a5(&local_5c,&local_344);
        *(ushort **)(*piVar4 + 0xc) = local_35c;
        FUN_100075a4();
        local_35c = (ushort *)((int)local_35c + 1);
      } while (local_35c < (uint)local_348[8]);
    }
    local_8._0_1_ = 0x1b;
    FUN_100d8af7("brushsides",10,local_2d4 + 0x3c,uVar14);
    puVar12 = local_348;
    local_2d4[0x38] = 0;
    local_2d4[0x39] = 0;
    local_2d4[0x3a] = 0;
    local_2d4[0x3b] = 0x40000;
    local_8._0_1_ = 0x20;
    local_35c = (ushort *)0x0;
    if (local_348[10] != 0) {
      do {
        FUN_100d83a1(*(undefined1 *)((int)local_35c + puVar12[0xb]),uVar14);
        local_338 = (int *)(puVar12[0xb] + (int)local_35c);
        piVar4 = (int *)FUN_1010289f(&local_2c,&local_338);
        *(ushort **)(*piVar4 + 0xc) = local_35c;
        local_35c = (ushort *)((int)local_35c + 1);
      } while (local_35c < (undefined4 *)puVar12[10]);
    }
    FUN_100d8af7("brushEdges",10,local_2d4 + 0x38,uVar14);
    local_2d4[0x34] = 0;
    local_2d4[0x35] = 0;
    local_2d4[0x36] = 0;
    local_2d4[0x37] = 0x40000;
    local_58 = 0;
    if (local_348[0xc] != 0) {
      do {
        local_28 = (int *)(local_348[0xd] + local_58 * 8);
        local_54[0] = 0;
        local_54[1] = 0;
        local_4c = (int *)0x0;
        iStack_48 = 0x30000;
        local_8._0_1_ = 0x22;
        piVar4 = (int *)FUN_101029a5(local_360,local_28);
        local_338 = *(int **)(*piVar4 + 0xc);
        FUN_100333fe(&DAT_1030d1a0,3);
        local_8._0_1_ = 0x23;
        iVar5 = FUN_100d42e6(local_dc);
        if (iVar5 == 0) {
          piVar4 = &local_74;
          uStack_68 = 0;
          local_8 = CONCAT31(local_8._1_3_,0x24);
          local_340 = local_33c | 0x400;
          local_74 = 0;
          uStack_70 = 0;
          uStack_6c = 0;
        }
        else {
          local_3c = (char *)FUN_100d42e6(local_dc);
          pcVar6 = local_3c;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          local_44[0] = (int)pcVar6 - (int)(local_3c + 1);
          local_44[1] = 0;
          piVar4 = local_44;
          uStack_38 = 0x4050000;
          local_8 = 0x25;
          local_340 = local_33c | 0x800;
        }
        local_33c = local_340;
        FUN_100d8af7("plane",5,piVar4,uVar14);
        if ((local_33c & 0x800) != 0) {
          local_340 = local_33c & 0xfffff7ff;
          local_33c = local_340;
        }
        if ((local_33c & 0x400) != 0) {
          local_340 = local_33c & 0xfffffbff;
          local_33c = local_340;
        }
        local_94[0] = 0;
        local_94[1] = 0;
        local_94[2] = 0;
        local_94[3] = 0x40000;
        local_8._0_1_ = 0x26;
        local_8._1_3_ = 0;
        puVar11 = (undefined2 *)((int)local_28 + 4);
        local_28 = (int *)0x2;
        do {
          FUN_100f8487(*puVar11,uVar14);
          local_28 = (int *)((int)local_28 - 1);
          puVar11 = puVar11 + 1;
        } while (local_28 != (int *)0x0);
        FUN_100d8af7("children",8,local_94,uVar14);
        FUN_100d8a84(local_54,uVar14);
        FUN_100075a4();
        local_58 = local_58 + 1;
      } while (local_58 < (uint)local_348[0xc]);
    }
    local_8._0_1_ = 0x21;
    FUN_100d8af7("nodes",5,local_2d4 + 0x34,uVar14);
    puVar12 = local_348;
    local_2d4[0x30] = 0;
    local_2d4[0x31] = 0;
    local_2d4[0x32] = 0;
    local_2d4[0x33] = 0x40000;
    local_28 = (int *)0x0;
    if (local_348[0xe] != 0) {
      local_58 = 0;
      do {
        local_8._0_1_ = 0x27;
        uVar15 = FUN_10102415(&local_b4,puVar12[0xf] + local_58);
        local_8._0_1_ = 0x28;
        FUN_100d8a84(uVar15,uVar14);
        local_28 = (int *)((int)local_28 + 1);
        local_58 = local_58 + 0x28;
      } while (local_28 < (uint)puVar12[0xe]);
    }
    local_8._0_1_ = 0x27;
    FUN_100d8af7("leafs",5,local_2d4 + 0x30,uVar14);
    uVar15 = local_34c;
    local_2d4[0x2c] = 0;
    local_2d4[0x2d] = 0;
    local_2d4[0x2e] = 0;
    local_2d4[0x2f] = 0x40000;
    local_8._0_1_ = 0x29;
    local_28 = (int *)0x0;
    if (local_348[0x12] != 0) {
      do {
        iVar5 = (int)local_28 * 2;
        FUN_100f4b21(*(undefined2 *)(local_348[0x13] + iVar5),uVar15);
        local_338 = (int *)(local_348[0x13] + iVar5);
        piVar4 = (int *)FUN_1010289f(&local_5c,&local_338);
        *(int **)(*piVar4 + 0xc) = local_28;
        local_28 = (int *)((int)local_28 + 1);
        uVar14 = uVar15;
      } while (local_28 < (uint)local_348[0x12]);
    }
    FUN_100d8af7("leafbrushes",0xb,local_2d4 + 0x2c,uVar14);
    local_2d4[0x28] = 0;
    local_2d4[0x29] = 0;
    local_2d4[0x2a] = 0;
    local_2d4[0x2b] = 0x40000;
    local_58 = 0;
    if (local_348[0x10] != 0) {
      local_344 = (int *)0x0;
      do {
        local_24[0] = 0;
        local_24[1] = 0;
        local_1c = (char *)0x0;
        aiStack_18[0] = 0x30000;
        local_8._0_1_ = 0x2b;
        puVar12 = (undefined4 *)(local_348[0x11] + (int)local_344);
        local_35c = (ushort *)puVar12;
        FUN_100d7d9a(&DAT_1030cebc,4,*(undefined1 *)puVar12,uVar14);
        FUN_100fc269("leafBrushCount",0xe,*(undefined2 *)((int)puVar12 + 2),uVar14);
        FUN_100d7c54("contents",8,puVar12[1],uVar14);
        local_338 = puVar12 + 2;
        if (*(short *)((int)puVar12 + 2) < 1) {
          local_54[0] = 0;
          local_54[1] = 0;
          local_4c = (int *)0x0;
          iStack_48 = 0x30000;
          local_8._0_1_ = 0x30;
          FUN_100d8193(&DAT_1030cd68,4,uVar14);
          FUN_100d8193("range",5,uVar14);
          local_a4 = 0;
          uStack_a0 = 0;
          local_9c = (undefined *)0x0;
          uStack_98 = 0x40000;
          local_8 = CONCAT31(local_8._1_3_,0x31);
          puVar12 = (undefined4 *)((int)local_35c + 0x10);
          local_28 = (int *)0x2;
          do {
            FUN_100f4b21(*(undefined2 *)puVar12,uVar14);
            local_28 = (int *)((int)local_28 - 1);
            puVar12 = (undefined4 *)((int)puVar12 + 2);
          } while (local_28 != (int *)0x0);
          FUN_100d8af7("childOffset",0xb,&local_a4,uVar14);
          piVar4 = local_54;
LAB_101001fc:
          FUN_100d8af7(&DAT_10308184,4,piVar4,uVar14);
          local_8._0_1_ = 0x2b;
        }
        else {
          uVar15 = FUN_10003e4e(local_338);
          piVar4 = local_338;
          iVar5 = FUN_10022745(&local_bc,local_338,uVar15);
          puVar2 = local_35c;
          if (*(int *)(iVar5 + 4) == 0) {
            local_94[0] = 0;
            local_94[1] = 0;
            local_94[2] = 0;
            local_94[3] = 0x40000;
            local_8 = CONCAT31(local_8._1_3_,0x2f);
            local_28 = (int *)0x0;
            do {
              FUN_100f4b21(*(undefined2 *)(*(int *)((int)puVar2 + 8) + (short)local_28 * 2),uVar14);
              local_28 = (int *)((int)local_28 + 1);
            } while ((short)local_28 < *(short *)((int)puVar2 + 2));
            piVar4 = local_94;
            goto LAB_101001fc;
          }
          FUN_1010289f(&local_7c,piVar4);
          FUN_100333fe(&DAT_1030d1a0,3);
          local_8._0_1_ = 0x2c;
          iVar5 = FUN_100d42e6(local_dc);
          if (iVar5 == 0) {
            piVar4 = &local_74;
            uStack_68 = 0;
            local_8 = CONCAT31(local_8._1_3_,0x2d);
            local_340 = local_33c | 0x1000;
            local_74 = 0;
            uStack_70 = 0;
            uStack_6c = 0;
          }
          else {
            local_3c = (char *)FUN_100d42e6(local_dc);
            pcVar6 = local_3c;
            do {
              cVar1 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            local_44[0] = (int)pcVar6 - (int)(local_3c + 1);
            local_44[1] = 0;
            piVar4 = local_44;
            uStack_38 = 0x4050000;
            local_8 = 0x2e;
            local_340 = local_33c | 0x2000;
          }
          local_33c = local_340;
          FUN_100d8af7(&DAT_10308184,4,piVar4,uVar14);
          if ((local_33c & 0x2000) != 0) {
            local_340 = local_33c & 0xffffdfff;
            local_33c = local_340;
          }
          if ((local_33c & 0x1000) != 0) {
            local_340 = local_33c & 0xffffefff;
            local_33c = local_340;
          }
          local_8._0_1_ = 0x2b;
          local_8._1_3_ = 0;
          FUN_100075a4();
        }
        FUN_100d8a84(local_24,uVar14);
        local_58 = local_58 + 1;
        local_344 = local_344 + 5;
      } while (local_58 < (uint)local_348[0x10]);
    }
    local_8._0_1_ = 0x2a;
    FUN_100d8af7("leafbrushNodes",0xe,local_2d4 + 0x28,uVar14);
    puVar12 = local_348;
    local_2d4[0x24] = 0;
    local_2d4[0x25] = 0;
    local_2d4[0x26] = 0;
    local_2d4[0x27] = 0x40000;
    local_28 = (int *)0x0;
    if (local_348[0x14] != 0) {
      do {
        local_8._0_1_ = 0x32;
        FUN_10081ad7(*(undefined4 *)(puVar12[0x15] + (int)local_28 * 4));
        local_8._0_1_ = 0x33;
        FUN_100d8a84(extraout_ECX_00,uVar14);
        local_28 = (int *)((int)local_28 + 1);
      } while (local_28 < (uint)puVar12[0x14]);
    }
    local_8._0_1_ = 0x32;
    FUN_100d8af7("leafsurfaces",0xc,local_2d4 + 0x24,uVar14);
    puVar12 = local_348;
    local_2d4[0x20] = 0;
    local_2d4[0x21] = 0;
    local_2d4[0x22] = 0;
    local_2d4[0x23] = 0x40000;
    local_28 = (int *)0x0;
    if (local_348[0x16] != 0) {
      local_58 = 0;
      do {
        local_8._0_1_ = 0x34;
        uVar15 = FUN_100d81fe(3,uVar14);
        local_8._0_1_ = 0x35;
        FUN_100d8a84(uVar15,uVar14);
        local_28 = (int *)((int)local_28 + 1);
        local_58 = local_58 + 0xc;
      } while (local_28 < (uint)puVar12[0x16]);
    }
    local_8._0_1_ = 0x34;
    FUN_100d8af7("verts",5,local_2d4 + 0x20,uVar14);
    puVar12 = local_348;
    local_2d4[0x1c] = 0;
    local_2d4[0x1d] = 0;
    local_2d4[0x1e] = 0;
    local_2d4[0x1f] = 0x40000;
    local_28 = (int *)0x0;
    if (local_348[0x18] * 3 != 0) {
      do {
        local_8._0_1_ = 0x36;
        uVar15 = FUN_101022f3(&local_b4,puVar12[0x19] + (int)local_28 * 2,local_28);
        local_8._0_1_ = 0x37;
        FUN_100d8a84(uVar15,uVar14);
        local_28 = (int *)((int)local_28 + 3);
      } while (local_28 < (uint)(puVar12[0x18] * 3));
    }
    local_8._0_1_ = 0x36;
    FUN_100d8af7("triIndices",10,local_2d4 + 0x1c,uVar14);
    local_2d4[0x18] = 0;
    local_2d4[0x19] = 0;
    local_2d4[0x1a] = 0;
    local_2d4[0x1b] = 0x40000;
    local_8._0_1_ = 0x38;
    piVar4 = (int *)0x0;
    local_338 = (int *)((local_348[0x18] * 3 + 0x1fU >> 5) * 0xc);
    if (local_338 != (int *)0x0) {
      do {
        FUN_100d83a1(*(char *)((int)piVar4 + local_348[0x1a]),uVar14);
        piVar4 = (int *)((int)piVar4 + 1);
      } while (piVar4 < local_338);
    }
    FUN_100d8af7("triEdgeIsWalkable",0x11,local_2d4 + 0x18,uVar14);
    local_2d4[0x14] = 0;
    local_2d4[0x15] = 0;
    local_2d4[0x16] = 0;
    local_2d4[0x17] = 0x40000;
    local_28 = (int *)0x0;
    if (local_348[0x1b] != 0) {
      local_58 = 0;
      do {
        local_344 = (int *)(local_348[0x1c] + local_58);
        local_24[0] = 0;
        local_24[1] = 0;
        local_1c = (char *)0x0;
        aiStack_18[0] = 0x30000;
        local_8._0_1_ = 0x3a;
        uVar15 = FUN_100d81fe(3,uVar14);
        local_8._0_1_ = 0x3b;
        FUN_100d8af7("distEq",6,uVar15,uVar14);
        local_8._0_1_ = 0x3a;
        FUN_100d8193("zBase",5,uVar14);
        FUN_100d8193("zSlope",6,uVar14);
        FUN_100d8193("start",5,uVar14);
        FUN_100d8193("length",6,uVar14);
        FUN_100d8a84(local_24,uVar14);
        piVar4 = (int *)FUN_1010289f(&local_7c,&local_344);
        local_58 = local_58 + 0x1c;
        *(int **)(*piVar4 + 0xc) = local_28;
        local_28 = (int *)((int)local_28 + 1);
      } while (local_28 < (uint)local_348[0x1b]);
    }
    local_8._0_1_ = 0x39;
    FUN_100d8af7("borders",7,local_2d4 + 0x14,uVar14);
    local_2d4[0x10] = 0;
    local_2d4[0x11] = 0;
    local_2d4[0x12] = 0;
    local_2d4[0x13] = 0x40000;
    local_28 = (int *)0x0;
    if (local_348[0x1d] != 0) {
      local_58 = 0;
      do {
        piVar4 = (int *)(local_348[0x1e] + local_58);
        local_24[0] = 0;
        local_24[1] = 0;
        local_1c = (char *)0x0;
        aiStack_18[0] = 0x30000;
        local_8._0_1_ = 0x3d;
        local_338 = piVar4;
        FUN_100d7d9a("triCount",8,(char)*piVar4,uVar14);
        FUN_100d7d9a("firstVertSegment",0x10,*(char *)((int)piVar4 + 2),uVar14);
        FUN_100d7c54("firstTri",8,piVar4[1],uVar14);
        FUN_100d7d9a("borderCount",0xb,*(char *)((int)piVar4 + 1),uVar14);
        if (*(char *)((int)piVar4 + 1) != '\0') {
          local_338 = (int *)piVar4[2];
          FUN_1010289f(&local_7c,&local_338);
          uVar14 = FUN_100333fe(&DAT_1030d1a0,3);
          local_8._0_1_ = 0x3e;
          pcVar6 = (char *)FUN_100d42e6(uVar14);
          FUN_100075a4();
          uVar14 = local_34c;
          if (pcVar6 == (char *)0x0) {
            local_74 = 0;
            uStack_70 = 0;
            uStack_6c = 0;
            uStack_68 = 0;
            piVar4 = &local_74;
            local_8 = CONCAT31(local_8._1_3_,0x3f);
            uVar9 = local_33c | 0x4000;
          }
          else {
            pcVar8 = pcVar6;
            do {
              cVar1 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
            local_44[0] = (int)pcVar8 - (int)(pcVar6 + 1);
            local_44[1] = 0;
            uStack_38 = 0x4050000;
            piVar4 = local_44;
            local_8 = 0x40;
            uVar9 = local_33c | 0x8000;
            local_3c = pcVar6;
          }
          local_340 = uVar9;
          local_33c = uVar9;
          FUN_100d8af7("firstBorder",0xb,piVar4,local_34c);
          if ((uVar9 & 0x8000) != 0) {
            uVar9 = uVar9 & 0xffff7fff;
            local_33c = uVar9;
          }
          local_8._0_1_ = 0x3d;
          local_8._1_3_ = 0;
          if ((uVar9 & 0x4000) != 0) {
            local_33c = uVar9 & 0xffffbfff;
          }
        }
        FUN_100d8a84(local_24,uVar14);
        local_28 = (int *)((int)local_28 + 1);
        local_58 = local_58 + 0xc;
      } while (local_28 < (uint)local_348[0x1d]);
    }
    local_8._0_1_ = 0x3c;
    FUN_100d8af7("partitions",10,local_2d4 + 0x10,uVar14);
    local_2d4[0xc] = 0;
    local_2d4[0xd] = 0;
    local_2d4[0xe] = 0;
    local_2d4[0xf] = 0x40000;
    local_28 = (int *)0x0;
    if (local_348[0x1f] != 0) {
      local_58 = 0;
      do {
        uVar14 = local_34c;
        iVar5 = local_348[0x20] + local_58;
        local_24[0] = 0;
        local_24[1] = 0;
        local_1c = (char *)0x0;
        aiStack_18[0] = 0x30000;
        local_8._0_1_ = 0x42;
        uVar15 = FUN_100d81fe(3,local_34c);
        local_8._0_1_ = 0x43;
        FUN_100d8af7("midPoint",8,uVar15,uVar14);
        local_8._0_1_ = 0x42;
        uVar15 = FUN_100d81fe(3,uVar14);
        local_8._0_1_ = 0x44;
        FUN_100d8af7("halfSize",8,uVar15,uVar14);
        local_8._0_1_ = 0x42;
        FUN_100f4ac4("materialIndex",0xd,*(undefined2 *)(iVar5 + 0xc),uVar14);
        FUN_100f4ac4("childCount",10,*(undefined2 *)(iVar5 + 0xe),uVar14);
        FUN_100d7fc5(&DAT_1030cfbc,1,*(undefined4 *)(iVar5 + 0x1c),uVar14);
        FUN_100d8a84(local_24,uVar14);
        local_28 = (int *)((int)local_28 + 1);
        local_58 = local_58 + 0x20;
      } while (local_28 < (uint)local_348[0x1f]);
    }
    local_8._0_1_ = 0x41;
    FUN_100d8af7("aabbTrees",9,local_2d4 + 0xc,uVar14);
    local_2d4[8] = 0;
    local_2d4[9] = 0;
    local_2d4[10] = 0;
    local_2d4[0xb] = 0x40000;
    local_28 = (int *)0x0;
    if (local_348[0x21] != 0) {
      local_58 = 0;
      do {
        uVar14 = local_34c;
        iVar5 = local_348[0x22] + local_58;
        local_54[0] = 0;
        local_54[1] = 0;
        local_4c = (int *)0x0;
        iStack_48 = 0x30000;
        local_8._0_1_ = 0x46;
        uVar15 = FUN_1010e473(local_34c);
        local_8._0_1_ = 0x47;
        FUN_100d8af7("bounds",6,uVar15,uVar14);
        local_8._0_1_ = 0x46;
        FUN_100d8193("radius",6,uVar14);
        uVar15 = FUN_10102415(local_2d4 + 0x5c,iVar5 + 0x1c);
        local_8._0_1_ = 0x48;
        FUN_100d8af7(&DAT_1030cfc8,4,uVar15,uVar14);
        local_8._0_1_ = 0x46;
        FUN_100d8a84(local_54,uVar14);
        local_28 = (int *)((int)local_28 + 1);
        local_58 = local_58 + 0x44;
      } while (local_28 < (uint)local_348[0x21]);
    }
    local_8._0_1_ = 0x45;
    FUN_100d8af7("cmodels",7,local_2d4 + 8,uVar14);
    local_2d4[0x54] = 0;
    local_2d4[0x55] = 0;
    local_2d4[0x56] = 0;
    local_2d4[0x57] = 0x40000;
    local_354 = 0;
    if (*(short *)(local_348 + 0x23) != 0) {
      local_28 = (int *)0x0;
      do {
        local_344 = (int *)(local_348[0x24] + (int)local_28);
        local_64 = 0;
        uStack_60 = 0;
        local_5c = 0;
        local_58 = 0x30000;
        local_8._0_1_ = 0x4a;
        FUN_100f4ac4("glassPieceIndex",0xf,*(short *)((int)local_344 + 2),uVar14);
        FUN_100f4ac4("numsides",8,(short)*local_344,uVar14);
        uVar9 = local_33c;
        if ((short)*local_344 != 0) {
          FUN_101029a5(&local_7c,local_344 + 1);
          uVar14 = FUN_100333fe(&DAT_1030d1a0,3);
          local_8._0_1_ = 0x4b;
          pcVar6 = (char *)FUN_100d42e6(uVar14);
          FUN_100075a4();
          if (pcVar6 == (char *)0x0) {
            local_74 = 0;
            uStack_70 = 0;
            uStack_6c = 0;
            uStack_68 = 0;
            piVar4 = &local_74;
            local_8 = CONCAT31(local_8._1_3_,0x4c);
            uVar9 = local_33c | 0x10000;
          }
          else {
            pcVar8 = pcVar6;
            do {
              cVar1 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
            local_44[0] = (int)pcVar8 - (int)(pcVar6 + 1);
            local_44[1] = 0;
            uStack_38 = 0x4050000;
            piVar4 = local_44;
            local_8 = 0x4d;
            uVar9 = local_33c | 0x20000;
            local_3c = pcVar6;
          }
          local_340 = uVar9;
          local_33c = uVar9;
          FUN_100d8af7("firstSide",9,piVar4,local_34c);
          if ((uVar9 & 0x20000) != 0) {
            uVar9 = uVar9 & 0xfffdffff;
            local_33c = uVar9;
          }
          local_8._0_1_ = 0x4a;
          local_8._1_3_ = 0;
          if ((uVar9 & 0x10000) != 0) {
            local_33c = uVar9 & 0xfffeffff;
            uVar9 = local_33c;
          }
        }
        uVar14 = local_34c;
        if (local_344[2] == 0) {
          local_154[0] = 0;
          local_154[1] = 0;
          local_154[2] = 0;
          local_154[3] = 0;
          local_8 = CONCAT31(local_8._1_3_,0x51);
          FUN_100d8af7("baseAdjacentSide",0x10,local_154,local_34c);
          uVar15 = extraout_ECX_03;
        }
        else {
          FUN_1010289f(&local_bc,local_344 + 2);
          uVar14 = FUN_100333fe(&DAT_1030d1a0,3);
          local_8._0_1_ = 0x4e;
          piVar4 = (int *)FUN_100d42e6(uVar14);
          local_338 = piVar4;
          FUN_100075a4();
          if (piVar4 == (int *)0x0) {
            local_154[4] = 0;
            local_154[5] = 0;
            local_154[6] = 0;
            local_154[7] = 0;
            piVar4 = local_154 + 4;
            local_8 = CONCAT31(local_8._1_3_,0x4f);
            uVar9 = uVar9 | 0x40000;
          }
          else {
            pcVar6 = (char *)((int)piVar4 + 1);
            do {
              iVar5 = *piVar4;
              piVar4 = (int *)((int)piVar4 + 1);
            } while ((char)iVar5 != '\0');
            local_54[0] = (int)piVar4 - (int)pcVar6;
            local_54[1] = 0;
            iStack_48 = 0x4050000;
            local_4c = local_338;
            piVar4 = local_54;
            local_8 = 0x50;
            uVar9 = uVar9 | 0x80000;
          }
          local_340 = uVar9;
          local_33c = uVar9;
          FUN_100d8af7("baseAdjacentSide",0x10,piVar4,local_34c);
          if ((uVar9 & 0x80000) != 0) {
            uVar9 = uVar9 & 0xfff7ffff;
            local_33c = uVar9;
          }
          local_8 = 0;
          uVar15 = extraout_ECX_01;
          uVar14 = local_34c;
          if ((uVar9 & 0x40000) != 0) {
            local_33c = uVar9 & 0xfffbffff;
          }
        }
        local_94[0] = 0;
        local_94[1] = 0;
        local_94[2] = 0;
        local_94[3] = 0x40000;
        uVar9 = 0;
        do {
          local_8._0_1_ = 0x52;
          uVar15 = FUN_101022f3(&local_b4,(int)local_344 + uVar9 + 0xc,uVar15);
          local_8._0_1_ = 0x53;
          FUN_100d8a84(uVar15,uVar14);
          uVar9 = uVar9 + 6;
          local_8._0_1_ = 0x52;
          uVar15 = extraout_ECX_02;
        } while (uVar9 < 0xc);
        FUN_100d8af7("axialMaterialNum",0x10,local_94,uVar14);
        local_a4 = 0;
        uStack_a0 = 0;
        local_9c = (undefined *)0x0;
        uStack_98 = 0x40000;
        uVar9 = 0;
        do {
          local_8._0_1_ = 0x54;
          FUN_10102727(3,uVar14);
          local_358 = local_358 | 0x10;
          local_8._0_1_ = 0x55;
          FUN_100d8a84(&local_fc,uVar14);
          uVar9 = uVar9 + 3;
          local_8._0_1_ = 0x54;
        } while (uVar9 < 6);
        FUN_100d8af7("firstAdjacentSideOffsets",0x18,&local_a4,uVar14);
        local_24[0] = 0;
        local_24[1] = 0;
        local_1c = (char *)0x0;
        aiStack_18[0] = 0x40000;
        uVar9 = 0;
        do {
          local_8._0_1_ = 0x56;
          FUN_10102727(3,uVar14);
          local_358 = local_358 | 0x20;
          local_8._0_1_ = 0x57;
          FUN_100d8a84(local_2d4 + 0x58,uVar14);
          uVar9 = uVar9 + 3;
          local_8._0_1_ = 0x56;
        } while (uVar9 < 6);
        FUN_100d8af7("edgeCount",9,local_24,uVar14);
        FUN_100d8a84(&local_64,uVar14);
        local_354 = local_354 + 1;
        local_28 = (int *)((int)local_28 + 0x24);
      } while (local_354 < *(ushort *)(local_348 + 0x23));
    }
    local_8._0_1_ = 0x49;
    FUN_100d8af7("brushes",7,local_2d4 + 0x54,uVar14);
    puVar12 = local_348;
    local_2d4[0x50] = 0;
    local_2d4[0x51] = 0;
    local_2d4[0x52] = 0;
    local_2d4[0x53] = 0x40000;
    local_350 = 0;
    if (*(short *)(local_348 + 0x23) != 0) {
      local_354 = 0;
      do {
        local_8._0_1_ = 0x58;
        uVar15 = FUN_1010e473(uVar14);
        local_8._0_1_ = 0x59;
        FUN_100d8a84(uVar15,uVar14);
        local_350 = local_350 + 1;
        local_354 = local_354 + 0x18;
      } while (local_350 < *(ushort *)(puVar12 + 0x23));
    }
    local_8._0_1_ = 0x58;
    FUN_100d8af7("brushBounds",0xb,local_2d4 + 0x50,uVar14);
    puVar12 = local_348;
    local_2d4[0x4c] = 0;
    local_2d4[0x4d] = 0;
    local_2d4[0x4e] = 0;
    local_2d4[0x4f] = 0x40000;
    local_350 = 0;
    bVar13 = *(short *)(local_348 + 0x23) != 0;
    while (local_8._0_1_ = 0x5a, bVar13) {
      FUN_10081b07(*(undefined4 *)(puVar12[0x26] + local_350 * 4));
      local_8._0_1_ = 0x5b;
      FUN_100d8a84(extraout_ECX_04,uVar14);
      local_350 = local_350 + 1;
      bVar13 = local_350 < *(ushort *)(puVar12 + 0x23);
    }
    FUN_100d8af7("brushContents",0xd,local_2d4 + 0x4c,uVar14);
    local_344 = (int *)puVar12[0x27];
    if (local_344 == (int *)0x0) {
      local_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      local_8._0_1_ = 0x6d;
      FUN_100d8af7("mapEnts",7,&local_74,uVar14);
    }
    else {
      local_c4[0] = 0;
      local_c4[1] = 0;
      local_bc = (char *)0x0;
      iStack_b8 = 0x30000;
      pcVar6 = (char *)*local_344;
      if (pcVar6 == (char *)0x0) {
        local_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0;
        uStack_68 = 0;
        piVar4 = &local_74;
        local_8 = CONCAT31(local_8._1_3_,0x5d);
        uVar9 = local_33c | 0x100000;
      }
      else {
        pcVar8 = pcVar6;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        local_44[0] = (int)pcVar8 - (int)(pcVar6 + 1);
        local_44[1] = 0;
        uStack_38 = 0x4050000;
        piVar4 = local_44;
        local_8 = 0x5e;
        uVar9 = local_33c | 0x200000;
        local_3c = pcVar6;
      }
      local_340 = uVar9;
      local_33c = uVar9;
      FUN_100d8af7(&DAT_1020a068,4,piVar4,local_34c);
      if ((uVar9 & 0x200000) != 0) {
        uVar9 = uVar9 & 0xffdfffff;
        local_33c = uVar9;
      }
      local_8 = 0x5c;
      if ((uVar9 & 0x100000) != 0) {
        uVar9 = uVar9 & 0xffefffff;
        local_33c = uVar9;
      }
      FUN_10102797(local_348,local_348[0x27]);
      uVar14 = local_34c;
      local_94[4] = 0;
      local_94[5] = 0;
      local_7c = (char *)0x0;
      iStack_78 = 0x30000;
      local_94[0] = 0;
      local_94[1] = 0;
      local_94[2] = 0;
      local_94[3] = 0x40000;
      local_340 = 0;
      if (local_344[3] != 0) {
        do {
          piVar4 = local_344;
          local_54[0] = 0;
          local_54[1] = 0;
          local_4c = (int *)0x0;
          iStack_48 = 0x30000;
          local_8._0_1_ = 0x61;
          FUN_100d7c54("contents",8,*(undefined4 *)(local_344[4] + local_340 * 8),uVar14);
          FUN_100f4ac4("hullCount",9,*(undefined2 *)(piVar4[4] + 4 + local_340 * 8),uVar14);
          FUN_100f4ac4("firstHull",9,*(undefined2 *)(piVar4[4] + 6 + local_340 * 8),uVar14);
          FUN_100d8a84(local_54,uVar14);
          local_340 = local_340 + 1;
          uVar9 = local_33c;
        } while (local_340 < (uint)piVar4[3]);
      }
      local_8._0_1_ = 0x60;
      FUN_100d8af7("models",6,local_94,local_34c);
      uVar14 = local_34c;
      local_a4 = 0;
      uStack_a0 = 0;
      local_9c = (undefined *)0x0;
      uStack_98 = 0x40000;
      local_350 = 0;
      if (local_344[5] != 0) {
        local_340 = 0;
        do {
          piVar4 = local_344;
          local_24[0] = 0;
          local_24[1] = 0;
          local_1c = (char *)0x0;
          aiStack_18[0] = 0x30000;
          local_8._0_1_ = 99;
          uVar15 = FUN_1010e473(uVar14);
          local_8._0_1_ = 100;
          FUN_100d8af7("bounds",6,uVar15,uVar14);
          local_8._0_1_ = 99;
          FUN_100d7c54("contents",8,*(undefined4 *)(local_340 + 0x18 + piVar4[6]),uVar14);
          FUN_100f4ac4("slabCount",9,*(undefined2 *)(local_340 + 0x1c + piVar4[6]),uVar14);
          FUN_100f4ac4("firstSlab",9,*(undefined2 *)(local_340 + 0x1e + piVar4[6]),uVar14);
          FUN_100d8a84(local_24,uVar14);
          local_350 = local_350 + 1;
          local_340 = local_340 + 0x20;
          uVar9 = local_33c;
        } while (local_350 < (uint)piVar4[5]);
      }
      local_8._0_1_ = 0x62;
      FUN_100d8af7("hulls",5,&local_a4,local_34c);
      uVar14 = local_34c;
      local_34 = 0;
      uStack_30 = 0;
      local_2c = 0;
      local_28 = (int *)0x40000;
      local_350 = 0;
      if (local_344[7] != 0) {
        local_340 = 0;
        do {
          piVar4 = local_344;
          local_54[0] = 0;
          local_54[1] = 0;
          local_4c = (int *)0x0;
          iStack_48 = 0x30000;
          local_8._0_1_ = 0x66;
          uVar15 = FUN_100d81fe(3,uVar14);
          local_8._0_1_ = 0x67;
          FUN_100d8af7(&DAT_1030d0bc,3,uVar15,uVar14);
          local_8._0_1_ = 0x66;
          FUN_100d8193("midPoint",8,uVar14);
          FUN_100d8193("halfSize",8,uVar14);
          FUN_100d8a84(local_54,uVar14);
          local_350 = local_350 + 1;
          local_340 = local_340 + 0x14;
          uVar9 = local_33c;
        } while (local_350 < (uint)piVar4[7]);
      }
      uVar14 = local_34c;
      local_8._0_1_ = 0x65;
      FUN_100d8af7("slabs",5,&local_34,local_34c);
      FUN_100d8af7("trigger",7,local_94 + 4,uVar14);
      local_54[0] = 0;
      local_54[1] = 0;
      local_4c = (int *)0x0;
      iStack_48 = 0x40000;
      local_350 = 0;
      uVar3 = local_33c;
      if ('\0' < (char)local_344[10]) {
        local_354 = 0;
        do {
          uVar14 = local_34c;
          local_35c = (ushort *)(local_344[9] + local_354);
          local_24[0] = 0;
          local_24[1] = 0;
          local_1c = (char *)0x0;
          aiStack_18[0] = 0x30000;
          pcVar6 = *(char **)local_35c;
          if (pcVar6 == (char *)0x0) {
            local_74 = 0;
            uStack_70 = 0;
            uStack_6c = 0;
            uStack_68 = 0;
            piVar4 = &local_74;
            local_8 = CONCAT31(local_8._1_3_,0x6a);
            uVar9 = uVar9 | 0x400000;
          }
          else {
            pcVar8 = pcVar6;
            do {
              cVar1 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
            local_44[0] = (int)pcVar8 - (int)(pcVar6 + 1);
            local_44[1] = 0;
            uStack_38 = 0x4050000;
            piVar4 = local_44;
            local_8 = 0x6b;
            uVar9 = uVar9 | 0x800000;
            local_3c = pcVar6;
          }
          local_340 = uVar9;
          FUN_100d8af7(&DAT_1020a068,4,piVar4,local_34c);
          if ((uVar9 & 0x800000) != 0) {
            uVar9 = uVar9 & 0xff7fffff;
          }
          local_8 = 0x69;
          if ((uVar9 & 0x400000) != 0) {
            uVar9 = uVar9 & 0xffbfffff;
          }
          uVar15 = FUN_100d81fe(3,uVar14);
          local_8._0_1_ = 0x6c;
          FUN_100d8af7("origin",6,uVar15,uVar14);
          local_8._0_1_ = 0x69;
          FUN_100f4ac4("triggerIndex",0xc,*(undefined2 *)((int)local_35c + 0x10),uVar14);
          FUN_100d7d9a("sunPrimaryLightIndex",0x14,*(undefined1 *)((int)local_35c + 0x12),uVar14);
          FUN_100d8a84(local_24,uVar14);
          local_350 = local_350 + 1;
          local_354 = local_354 + 0x14;
          uVar3 = uVar9;
        } while ((int)local_350 < (int)(char)local_344[10]);
      }
      local_33c = uVar3;
      uVar14 = local_34c;
      local_8._0_1_ = 0x68;
      FUN_100d8af7("stages",6,local_54,local_34c);
      FUN_100d8af7("mapEnts",7,local_c4,uVar14);
    }
    local_2d4[0x48] = 0;
    local_2d4[0x49] = 0;
    local_2d4[0x4a] = 0;
    local_2d4[0x4b] = 0x40000;
    local_350 = 0;
    if (*(short *)(local_348 + 0x28) != 0) {
      local_354 = 0;
      do {
        uVar14 = local_34c;
        iVar5 = local_348[0x29] + local_354;
        local_54[0] = 0;
        local_54[1] = 0;
        local_4c = (int *)0x0;
        iStack_48 = 0x30000;
        local_8._0_1_ = 0x6f;
        uVar15 = FUN_1010e473(local_34c);
        local_8._0_1_ = 0x70;
        FUN_100d8af7("bounds",6,uVar15,uVar14);
        local_8._0_1_ = 0x6f;
        FUN_100f4ac4("firstChild",10,*(undefined2 *)(iVar5 + 0x18),uVar14);
        uVar14 = local_34c;
        FUN_100f4ac4("childCount",10,*(undefined2 *)(iVar5 + 0x1a),local_34c);
        FUN_100d8a84(local_54,uVar14);
        local_350 = local_350 + 1;
        local_354 = local_354 + 0x1c;
      } while (local_350 < *(ushort *)(local_348 + 0x28));
    }
    local_8._0_1_ = 0x6e;
    FUN_100d8af7("smodelNodes",0xb,local_2d4 + 0x48,uVar14);
    local_94[0] = 0;
    local_94[1] = 0;
    local_94[2] = 0;
    local_94[3] = 0x40000;
    local_58 = 2;
    local_35c = (ushort *)(local_348 + 0x2a);
    local_28 = local_348 + 0x2b;
    do {
      if (*local_28 == 0) {
        local_fc = 0;
        iStack_f8 = 0;
        iStack_f4 = 0;
        iStack_f0 = 0;
        local_8._0_1_ = 0x88;
        piVar4 = &local_fc;
      }
      else {
        local_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0;
        uStack_68 = 0x40000;
        local_354 = 0;
        if (*local_35c != 0) {
          local_344 = (int *)(*local_28 + 0x24);
          do {
            piVar4 = local_344;
            local_8._0_1_ = 0x72;
            local_154[4] = 0;
            local_154[5] = 0;
            local_154[6] = 0;
            local_154[7] = 0x30000;
            local_94[4] = 0;
            local_94[5] = 0;
            local_7c = (char *)0x0;
            iStack_78 = 0x30000;
            uStack_a0 = 0;
            uStack_98 = 0x4050000;
            local_9c = &DAT_1030be78;
            local_a4 = 4;
            FUN_10081b07(local_344[-9]);
            local_8._0_1_ = 0x76;
            FUN_100d8e44(&local_a4,extraout_ECX_05,uVar14);
            local_8._0_1_ = 0x74;
            uVar15 = FUN_10102362(local_334,piVar4 + -8);
            local_8 = CONCAT31(local_8._1_3_,0x77);
            FUN_100d8af7(&DAT_1030d124,4,uVar15,uVar14);
            puVar12 = (undefined4 *)piVar4[-1];
            if (puVar12 == (undefined4 *)0x0) {
              local_2d4[4] = 0;
              piVar4 = local_2d4 + 4;
              local_2d4[5] = 0;
              local_2d4[6] = 0;
              local_2d4[7] = 0;
              local_8 = 0x7b;
              local_340 = local_33c | 0x8000000;
            }
            else {
              piVar4 = (int *)*puVar12;
              if (piVar4 == (int *)0x0) {
                local_38c[4] = 0;
                piVar10 = local_38c + 4;
                local_38c[5] = 0;
                local_38c[6] = 0;
                local_38c[7] = 0;
                piVar4 = local_38c + 7;
                uVar9 = local_33c | 0x1000000;
              }
              else {
                piVar7 = piVar4;
                do {
                  iVar5 = *piVar7;
                  piVar7 = (int *)((int)piVar7 + 1);
                } while ((char)iVar5 != '\0');
                piVar10 = local_54;
                local_54[1] = 0;
                iStack_48 = 0x4050000;
                local_4c = piVar4;
                local_54[0] = (int)piVar7 - (int)((int)piVar4 + 1);
                piVar4 = &iStack_48;
                uVar9 = local_33c | 0x2000000;
              }
              local_2e4 = *piVar10;
              iStack_2e0 = piVar10[1];
              iStack_2dc = piVar10[2];
              iStack_2d8 = piVar10[3];
              *(undefined2 *)((int)piVar4 + 2) = 0;
              piVar4 = &local_2e4;
              local_340 = uVar9 | 0x4000000;
              local_8 = 0x7a;
              uVar14 = local_34c;
            }
            local_33c = local_340;
            FUN_100d8af7("xModel",6,piVar4,uVar14);
            piVar4 = local_344;
            if ((local_33c & 0x8000000) != 0) {
              local_33c = local_33c & 0xf7ffffff;
            }
            if ((local_33c & 0x4000000) != 0) {
              local_33c = local_33c & 0xfbffffff;
            }
            if ((local_33c & 0x2000000) != 0) {
              local_33c = local_33c & 0xfdffffff;
            }
            local_8 = 0x74;
            if ((local_33c & 0x1000000) != 0) {
              local_33c = local_33c & 0xfeffffff;
            }
            FUN_100f4ac4("brushModel",10,(short)*local_344,uVar14);
            FUN_100f4ac4("physicsBrushModel",0x11,*(short *)((int)piVar4 + 2),uVar14);
            puVar12 = (undefined4 *)piVar4[1];
            if (puVar12 == (undefined4 *)0x0) {
              local_2d4[0] = 0;
              piVar4 = local_2d4;
              local_2d4[1] = 0;
              local_2d4[2] = 0;
              local_2d4[3] = 0;
              local_8 = 0x7f;
              local_340 = local_33c | 0x80000000;
            }
            else {
              pcVar6 = (char *)*puVar12;
              if (pcVar6 == (char *)0x0) {
                local_38c[0] = 0;
                piVar4 = local_38c;
                local_38c[1] = 0;
                local_38c[2] = 0;
                local_38c[3] = 0;
                piVar7 = local_38c + 3;
                uVar9 = local_33c | 0x10000000;
              }
              else {
                pcVar8 = pcVar6;
                do {
                  cVar1 = *pcVar8;
                  pcVar8 = pcVar8 + 1;
                } while (cVar1 != '\0');
                piVar4 = local_24;
                local_24[1] = 0;
                aiStack_18[0] = 0x4050000;
                local_1c = pcVar6;
                local_24[0] = (int)pcVar8 - (int)(pcVar6 + 1);
                piVar7 = aiStack_18;
                uVar9 = local_33c | 0x20000000;
              }
              local_2d4[0x5c] = *piVar4;
              iStack_160 = piVar4[1];
              iStack_15c = piVar4[2];
              iStack_158 = piVar4[3];
              *(undefined2 *)((int)piVar7 + 2) = 0;
              piVar4 = local_2d4 + 0x5c;
              local_340 = uVar9 | 0x40000000;
              local_8 = 0x7e;
              uVar14 = local_34c;
            }
            local_33c = local_340;
            FUN_100d8af7("destroyFx",9,piVar4,uVar14);
            if ((int)local_33c < 0) {
              local_33c = local_33c & 0x7fffffff;
            }
            if ((local_33c & 0x40000000) != 0) {
              local_33c = local_33c & 0xbfffffff;
            }
            if ((local_33c & 0x20000000) != 0) {
              local_33c = local_33c & 0xdfffffff;
            }
            if ((local_33c & 0x10000000) != 0) {
              local_33c = local_33c & 0xefffffff;
            }
            if ((undefined4 *)local_344[2] == (undefined4 *)0x0) {
              local_2d4[0x58] = 0;
              local_2d4[0x59] = 0;
              local_2d4[0x5a] = 0;
              local_2d4[0x5b] = 0;
              piVar4 = local_2d4 + 0x58;
              local_8 = 0x83;
              local_358 = local_358 | 8;
            }
            else {
              pcVar6 = *(char **)local_344[2];
              if (pcVar6 == (char *)0x0) {
                local_154[0] = 0;
                piVar4 = local_154;
                local_154[1] = 0;
                local_154[2] = 0;
                local_154[3] = 0;
                piVar7 = local_154 + 3;
                local_358 = local_358 | 1;
              }
              else {
                pcVar8 = pcVar6;
                do {
                  cVar1 = *pcVar8;
                  pcVar8 = pcVar8 + 1;
                } while (cVar1 != '\0');
                piVar4 = local_c4;
                local_c4[1] = 0;
                iStack_b8 = 0x4050000;
                local_bc = pcVar6;
                local_c4[0] = (int)pcVar8 - (int)(pcVar6 + 1);
                piVar7 = &iStack_b8;
                local_358 = local_358 | 2;
              }
              local_b4 = *piVar4;
              iStack_b0 = piVar4[1];
              iStack_ac = piVar4[2];
              iStack_a8 = piVar4[3];
              *(undefined2 *)((int)piVar7 + 2) = 0;
              piVar4 = &local_b4;
              local_8 = 0x82;
              local_358 = local_358 | 4;
              uVar14 = local_34c;
            }
            local_350 = local_358;
            FUN_100d8af7("physPreset",10,piVar4,uVar14);
            if ((local_358 & 8) != 0) {
              local_358 = local_358 & 0xfffffff7;
            }
            if ((local_358 & 4) != 0) {
              local_358 = local_358 & 0xfffffffb;
            }
            if ((local_358 & 2) != 0) {
              local_358 = local_358 & 0xfffffffd;
            }
            local_8 = 0x74;
            if ((local_358 & 1) != 0) {
              local_358 = local_358 & 0xfffffffe;
            }
            FUN_100d7c54("health",6,local_344[3],uVar14);
            piVar4 = local_344;
            local_44[0] = 0;
            local_44[1] = 0;
            local_3c = (char *)0x0;
            uStack_38 = 0x30000;
            local_8._0_1_ = 0x84;
            uVar15 = FUN_100d81fe(3,uVar14);
            local_8._0_1_ = 0x85;
            FUN_100d8af7("centerOfMass",0xc,uVar15,uVar14);
            local_8._0_1_ = 0x84;
            uVar15 = FUN_100d81fe(3,uVar14);
            local_8._0_1_ = 0x86;
            FUN_100d8af7("momentsOfInertia",0x10,uVar15,uVar14);
            local_8._0_1_ = 0x84;
            uVar15 = FUN_100d81fe(3,uVar14);
            local_8._0_1_ = 0x87;
            FUN_100d8af7("productsOfInertia",0x11,uVar15,uVar14);
            local_8 = CONCAT31(local_8._1_3_,0x84);
            FUN_100d8af7(&DAT_1030be80,4,local_44,uVar14);
            FUN_100d7c54("contents",8,piVar4[0xd],uVar14);
            FUN_100d8af7("dynEntityDef",0xc,local_94 + 4,uVar14);
            uVar15 = extraout_ECX_06;
            if (piVar4[-1] != 0) {
              FUN_100f2baa(extraout_ECX_06,piVar4[-1]);
              uVar15 = extraout_ECX_07;
            }
            if (piVar4[1] != 0) {
              FUN_100f2ff4(uVar15,piVar4[1]);
              uVar15 = extraout_ECX_08;
            }
            if (piVar4[2] != 0) {
              FUN_100f8381(uVar15,piVar4[2]);
            }
            FUN_100d8a84(local_154 + 4,uVar14);
            local_344 = piVar4 + 0x17;
            local_354 = local_354 + 1;
          } while (local_354 < *local_35c);
        }
        local_8._0_1_ = 0x72;
        piVar4 = &local_74;
      }
      FUN_100d8a84(piVar4,uVar14);
      local_8._0_1_ = 0x71;
      local_28 = local_28 + 1;
      local_35c = local_35c + 1;
      local_58 = local_58 + -1;
    } while (local_58 != 0);
    FUN_100d8af7("dynEntities",0xb,local_94,uVar14);
    FUN_100d7fc5("checksum",8,local_348[0x33],uVar14);
    local_390 = 0x100;
    local_3a4 = 0;
    uStack_3a0 = 0;
    uStack_39c = 0;
    uStack_398 = 0;
    local_394 = 0;
    FUN_100d89a7(&local_3a4,extraout_ECX_09,extraout_ECX_09);
    local_8._0_1_ = 0x8a;
    local_4b4 = 1;
    FUN_100d83ed(extraout_ECX_10);
    uVar14 = FUN_100d89e5();
    FUN_10007684(uVar14);
    local_8._0_1_ = 0x8b;
    FUN_100d4163(local_324,local_36c);
    local_8._0_1_ = 0x8c;
    FUN_1002e277(local_dc,extraout_ECX_11);
    local_8 = CONCAT31(local_8._1_3_,0x8d);
    FUN_100f346d(extraout_ECX_12);
    FUN_100075a4();
    FUN_1002e2bd();
    FUN_100075a4();
    FUN_1008060d();
    FUN_1008060d();
    FUN_10080480();
    FUN_100d41a8();
    FUN_1002160c();
    FUN_100375c4();
    FUN_1002160c();
    FUN_100375c4();
    FUN_1002160c();
    FUN_100375c4();
    FUN_1002160c();
    FUN_100375c4();
    FUN_1002160c();
    FUN_100375c4();
    FUN_100d41a8();
  }
  FUN_1018e9fc();
  return;
}

