// Adresse runtime : 0x10137efc  (pas d'ASLR -> 1:1)
// Label heuristique : protobuf_serializer
// Taille body : 6233 octets
// Decompile par Ghidra 12.0.4 PUBLIC


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_10137efc(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  byte *pbVar12;
  uint *puVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM0_Db;
  undefined8 uVar16;
  uint *puVar17;
  undefined4 uVar18;
  undefined4 local_c4;
  undefined4 local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  char local_a5;
  uint *local_a4;
  uint *local_a0;
  uint *local_9c;
  uint *local_98;
  uint *local_94;
  uint *local_90;
  uint *local_8c;
  uint *local_88;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  uint *local_78;
  undefined1 local_74 [48];
  undefined1 local_44 [4];
  int *local_40;
  undefined4 local_38;
  char *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xb8;
  local_8 = 0x10137f0b;
  local_84 = param_4;
  local_94 = (uint *)0x0;
  local_90 = param_2;
  local_8c = param_1;
  iVar3 = (**(code **)(*param_2 + 0x40))(&local_c4);
  local_80 = *(uint **)(iVar3 + 4);
  if (((((*param_1 & 0x800) != 0) && (*(char *)(*(int *)(param_1[5] + 0x14) + 0x2c) != '\0')) &&
      (iVar3 = FUN_1012df16(), *(int *)(&DAT_1028b800 + iVar3 * 4) == 10)) &&
     ((*param_1 & 0x6000) != 0x6000)) {
    FUN_1013982f(param_3,local_84);
    goto LAB_1013974f;
  }
  cVar1 = FUN_1012df43();
  if ((cVar1 != '\0') && (iVar3 = FUN_101327f5(param_2,param_1), *(int *)(iVar3 + 0x40) != 1)) {
    if (*(char *)((int)local_84 + 0x2e) == '\0') {
      FUN_101320ed(local_44,param_2,param_1);
      local_8 = 1;
      uVar4 = FUN_1013216f(local_74,param_2,param_1);
      while( true ) {
        local_8._0_1_ = 2;
        cVar1 = (**(code **)(*local_40 + 0x10))(local_44,uVar4);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_1012e28b();
        if (cVar1 != '\0') break;
        param_3 = (uint *)FUN_10137e6a(&local_1c,param_3,local_84);
        (**(code **)(*local_40 + 0x48))(local_44);
        uVar4 = FUN_1013216f(local_74,local_90,param_1);
      }
      FUN_1012e28b();
    }
    else {
      FUN_10137c1b(local_80);
      puVar8 = local_8c;
      local_8 = 0;
      puVar13 = local_a4;
      if (local_a4 != local_a0) {
        do {
          local_bc = 0;
          local_b8 = local_bc;
          FUN_10132068(local_90,puVar8,puVar13,&local_bc);
          param_3 = (uint *)FUN_10137e6a(&local_bc,param_3,local_84);
          puVar13 = puVar13 + 8;
        } while (puVar13 != local_a0);
      }
      FUN_1013a677();
    }
    goto LAB_1013974f;
  }
  if ((*param_1 & 0x6000) == 0x6000) {
    local_7c = (uint *)FUN_1012f187(param_2,param_1);
  }
  else {
    local_7c = (uint *)0x1;
    if (*(char *)(*(int *)(param_1[5] + 0x14) + 0x2f) == '\0') {
      cVar1 = FUN_1012ee7f(param_2,param_1);
      local_7c = (uint *)0x0;
      if (cVar1 != '\0') {
        local_7c = (uint *)0x1;
      }
    }
  }
  local_b4 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_8 = 3;
  if (((1 < (int)local_7c) && (cVar1 = FUN_1012df43(), cVar1 != '\0')) &&
     (*(char *)((int)local_84 + 0x2e) != '\0')) {
    local_88 = (uint *)FUN_10134ed5(local_7c,extraout_ECX,param_1);
    if (&local_b4 != local_88) {
      if (local_b4 != 0) {
        _Deallocate<>(local_b4,local_ac - local_b4 & 0xfffffffc);
      }
      local_b4 = *local_88;
      local_b0 = local_88[1];
      local_ac = local_88[2];
      *local_88 = 0;
      local_88[1] = 0;
      local_88[2] = 0;
    }
    if (local_a4 != (uint *)0x0) {
      _Deallocate<>(local_a4,(int)local_9c - (int)local_a4 & 0xfffffffc);
    }
  }
  cVar1 = FUN_1014e9f2();
  if (cVar1 == '\0') {
    local_a0 = &local_b4;
    local_9c = local_80;
    local_94 = (uint *)0x0;
    local_a4 = param_2;
    if (0 < (int)local_7c) {
      do {
        if ((uint *)*local_84 <= param_3) {
          param_3 = (uint *)FUN_1012d8d5(param_3);
        }
        local_98 = param_3;
        uVar4 = FUN_1012df16();
        switch(uVar4) {
        case 1:
          if ((*param_1 & 0x6000) == 0x6000) {
            FUN_101307be(local_90,param_1,local_94);
          }
          else {
            FUN_10130634(local_90,param_1);
          }
          puVar11 = (undefined8 *)FUN_101284c8();
          *puVar11 = CONCAT44(in_XMM0_Db,in_XMM0_Da);
          goto LAB_101392e7;
        case 2:
          if ((*param_1 & 0x6000) == 0x6000) {
            FUN_101304c2(local_90,param_1,local_94);
          }
          else {
            FUN_1013033f(local_90,param_1);
          }
          puVar10 = (undefined4 *)FUN_101284c8();
          *puVar10 = in_XMM0_Da;
          goto LAB_1013928a;
        case 3:
          if ((*param_1 & 0x6000) == 0x6000) {
            uVar16 = FUN_1012fbfa(local_90,param_1,local_94);
          }
          else {
            uVar16 = FUN_1012fa66(local_90,param_1);
          }
          goto LAB_101390eb;
        case 4:
          if ((*param_1 & 0x6000) == 0x6000) {
            uVar16 = FUN_101301d5(local_90,param_1,local_94);
          }
          else {
            uVar16 = FUN_10130041(local_90,param_1);
          }
LAB_101390eb:
          local_78 = (uint *)((ulonglong)uVar16 >> 0x20);
          local_98 = (uint *)uVar16;
          FUN_101284c8();
          puVar13 = local_98;
          puVar17 = local_78;
          goto LAB_101390b0;
        case 5:
          if ((*param_1 & 0x6000) == 0x6000) {
            local_78 = (uint *)FUN_1012f903(local_90,param_1,local_94);
          }
          else {
            local_78 = (uint *)FUN_1012f789(local_90,param_1);
          }
          FUN_101284c8();
          puVar13 = local_78;
          puVar17 = (uint *)((int)local_78 >> 0x1f);
          goto LAB_101390b0;
        case 6:
          if ((*param_1 & 0x6000) == 0x6000) {
            uVar16 = FUN_101301d5(local_90,param_1,local_94);
          }
          else {
            uVar16 = FUN_10130041(local_90,param_1);
          }
          goto LAB_101392be;
        case 7:
          if ((*param_1 & 0x6000) == 0x6000) {
            local_78 = (uint *)FUN_1012fede(local_90,param_1,local_94);
          }
          else {
            local_78 = (uint *)FUN_1012fd64(local_90,param_1);
          }
          goto LAB_10139272;
        case 8:
          if ((*param_1 & 0x6000) == 0x6000) {
            local_a5 = FUN_10130aab(local_90,param_1,local_94);
          }
          else {
            local_a5 = FUN_10130931(local_90,param_1);
          }
          FUN_101284c8();
          goto LAB_10139156;
        case 9:
          local_a5 = *(char *)(param_1[3] + 3);
          uStack_28 = 0;
          uStack_24 = 0;
          uStack_20 = 0;
          local_1c = 0;
          local_18 = 0xf;
          local_2c = 0;
          local_8 = CONCAT31(local_8._1_3_,0x28);
          if ((*param_1 & 0x6000) == 0x6000) {
            puVar8 = (uint *)FUN_10131049(local_90,param_1,local_94,extraout_ECX_01);
          }
          else {
            puVar8 = (uint *)FUN_10130d19(local_90,param_1,extraout_ECX_01);
          }
          local_88 = puVar8;
          if (local_a5 == '\x03') {
            local_78 = (uint *)(param_1[2] + 0x18);
            if (0xf < *(uint *)(param_1[2] + 0x2c)) {
              local_78 = (uint *)*local_78;
            }
            cVar1 = FUN_101433f3();
            if (cVar1 == '\0') {
              uVar4 = extraout_ECX_02;
              uVar18 = extraout_ECX_02;
              FUN_1012b556(local_78);
              FUN_1013f0c9(&DAT_1020e2a2,0,uVar4,uVar18);
            }
          }
          local_78 = (uint *)puVar8[4];
          uVar7 = param_1[1];
          if (0x7f < (int)local_78) goto LAB_10139708;
          local_b8 = uVar7 << 3;
          iVar3 = FUN_1012705b();
          if ((int)(((*local_84 - (int)local_98) - iVar3) + 0xf) < (int)local_78) goto LAB_10139705;
          puVar15 = (undefined1 *)((int)local_98 + 1);
          *(char *)local_98 = (char)(local_b8 | 2);
          if (0x7f < (local_b8 | 2)) {
            uVar7 = local_b8 >> 7;
            *puVar15 = (char)uVar7;
            puVar15 = (undefined1 *)((int)local_98 + 2);
            *(byte *)local_98 = (byte)local_b8 | 0x82;
            while (0x7f < uVar7) {
              puVar15[-1] = puVar15[-1] | 0x80;
              uVar7 = uVar7 >> 7;
              *puVar15 = (char)uVar7;
              puVar15 = puVar15 + 1;
            }
          }
LAB_101396d9:
          *puVar15 = (char)local_78;
          puVar8 = local_88;
          if (0xf < local_88[5]) {
            puVar8 = (uint *)*local_88;
          }
          FUN_1018fff0(puVar15 + 1,puVar8,local_78);
          param_3 = (uint *)(puVar15 + 1 + (int)local_78);
          goto LAB_10139715;
        case 10:
          FUN_101397e8(param_1,local_94);
          param_3 = (uint *)FUN_1013f032(param_3,local_84);
          break;
        case 0xb:
          piVar9 = (int *)FUN_101397e8(param_1,local_94);
          uVar4 = (**(code **)(*piVar9 + 0x20))();
          param_1 = local_8c;
          param_3 = (uint *)FUN_1013f084(uVar4,param_3,local_84);
          break;
        case 0xc:
          uStack_28 = 0;
          uStack_24 = 0;
          uStack_20 = 0;
          local_1c = 0;
          local_18 = 0xf;
          local_2c = 0;
          local_8 = CONCAT31(local_8._1_3_,0x29);
          if ((*param_1 & 0x6000) == 0x6000) {
            puVar8 = (uint *)FUN_10131049(local_90,param_1,local_94,extraout_ECX_01);
          }
          else {
            puVar8 = (uint *)FUN_10130d19(local_90,param_1,extraout_ECX_01);
          }
          local_78 = (uint *)puVar8[4];
          uVar7 = param_1[1];
          local_88 = puVar8;
          if ((int)local_78 < 0x80) {
            local_b8 = uVar7 << 3;
            iVar3 = FUN_1012705b();
            if ((int)local_78 <= (int)(((*local_84 - (int)local_98) - iVar3) + 0xf)) {
              puVar15 = (undefined1 *)((int)local_98 + 1);
              *(char *)local_98 = (char)(local_b8 | 2);
              if (0x7f < (local_b8 | 2)) {
                uVar7 = local_b8 >> 7;
                *puVar15 = (char)uVar7;
                puVar15 = (undefined1 *)((int)local_98 + 2);
                *(byte *)local_98 = (byte)local_b8 | 0x82;
                while (0x7f < uVar7) {
                  puVar15[-1] = puVar15[-1] | 0x80;
                  uVar7 = uVar7 >> 7;
                  *puVar15 = (char)uVar7;
                  puVar15 = puVar15 + 1;
                }
              }
              goto LAB_101396d9;
            }
LAB_10139705:
            uVar7 = param_1[1];
          }
LAB_10139708:
          param_3 = (uint *)FUN_1012da90(uVar7,puVar8,local_98);
LAB_10139715:
          local_8 = CONCAT31(local_8._1_3_,3);
          break;
        case 0xd:
          if ((*param_1 & 0x6000) == 0x6000) {
            local_78 = (uint *)FUN_1012fede(local_90,param_1,local_94);
          }
          else {
            local_78 = (uint *)FUN_1012fd64(local_90,param_1);
          }
          FUN_101284c8();
          goto LAB_10139156;
        case 0xe:
          if ((*param_1 & 0x6000) == 0x6000) {
            iVar3 = FUN_10131429(local_90,param_1,local_94);
          }
          else {
            iVar3 = FUN_101311de(local_90,param_1);
          }
          iVar3 = *(int *)(iVar3 + 4);
          FUN_101284c8();
          param_3 = (uint *)FUN_10129526(iVar3,iVar3 >> 0x1f);
          param_1 = local_8c;
          break;
        case 0xf:
          if ((*param_1 & 0x6000) == 0x6000) {
            local_78 = (uint *)FUN_1012f903(local_90,param_1,local_94);
          }
          else {
            local_78 = (uint *)FUN_1012f789(local_90,param_1);
          }
LAB_10139272:
          puVar10 = (undefined4 *)FUN_101284c8();
          *puVar10 = local_78;
LAB_1013928a:
          param_3 = puVar10 + 1;
          break;
        case 0x10:
          if ((*param_1 & 0x6000) == 0x6000) {
            uVar16 = FUN_1012fbfa(local_90,param_1,local_94);
          }
          else {
            uVar16 = FUN_1012fa66(local_90,param_1);
          }
LAB_101392be:
          local_98 = (uint *)((ulonglong)uVar16 >> 0x20);
          local_78 = (uint *)uVar16;
          puVar11 = (undefined8 *)FUN_101284c8();
          *(uint **)puVar11 = local_78;
          *(uint **)((int)puVar11 + 4) = local_98;
LAB_101392e7:
          param_3 = (uint *)(puVar11 + 1);
          break;
        case 0x11:
          if ((*param_1 & 0x6000) == 0x6000) {
            local_78 = (uint *)FUN_1012f903(local_90,param_1,local_94);
          }
          else {
            local_78 = (uint *)FUN_1012f789(local_90,param_1);
          }
          FUN_101284c8();
LAB_10139156:
          param_3 = (uint *)FUN_101284c8();
          break;
        case 0x12:
          if ((*param_1 & 0x6000) == 0x6000) {
            uVar16 = FUN_1012fbfa(local_90,param_1,local_94);
          }
          else {
            uVar16 = FUN_1012fa66(local_90,param_1);
          }
          local_98 = (uint *)((ulonglong)uVar16 >> 0x20);
          local_78 = (uint *)uVar16;
          FUN_101284c8();
          puVar8 = (uint *)((int)local_98 << 1 | (uint)local_78 >> 0x1f);
          puVar13 = (uint *)((int)local_98 >> 0x1f ^ (int)local_78 * 2);
          puVar17 = (uint *)((int)local_98 >> 0x1f ^ (uint)puVar8);
          local_98 = puVar8;
LAB_101390b0:
          param_3 = (uint *)FUN_10129526(puVar13,puVar17);
        }
        local_94 = (uint *)((int)local_94 + 1);
      } while ((int)local_94 < (int)local_7c);
    }
    goto LAB_1013972f;
  }
  if (local_7c == (uint *)0x0) goto LAB_1013972f;
  if ((uint *)*local_84 <= param_3) {
    param_3 = (uint *)FUN_1012d8d5(param_3);
  }
  local_98 = param_3;
  uVar4 = FUN_1012df16();
  switch(uVar4) {
  case 1:
    uVar4 = FUN_10131e79(param_2,param_1,5,extraout_ECX_00,extraout_ECX_00);
    FUN_1012a1e4(uVar4);
    local_8 = CONCAT31(local_8._1_3_,0x1c);
    uVar7 = param_1[1];
    local_78 = (uint *)((int)local_a4 << 3);
    local_88 = (uint *)FUN_101284b4(param_3);
    uVar7 = uVar7 << 3;
    *(char *)local_88 = (char)(uVar7 | 2);
    pbVar12 = (byte *)((int)local_88 + 1);
    puVar8 = local_78;
    if (0x7f < (uVar7 | 2)) {
      uVar6 = uVar7 >> 7;
      *pbVar12 = (byte)uVar6;
      *(byte *)local_88 = (byte)uVar7 | 0x82;
      pbVar12 = (byte *)((int)local_88 + 2);
      while (0x7f < uVar6) {
        pbVar12[-1] = pbVar12[-1] | 0x80;
        uVar6 = uVar6 >> 7;
        *pbVar12 = (byte)uVar6;
        pbVar12 = pbVar12 + 1;
      }
    }
    for (; (uint *)0x7f < puVar8; puVar8 = (uint *)((uint)puVar8 >> 7)) {
      *pbVar12 = (byte)puVar8 | 0x80;
      pbVar12 = pbVar12 + 1;
    }
    *pbVar12 = (byte)puVar8;
    FUN_10129039(local_9c,local_78,pbVar12 + 1);
    FUN_1012a231();
    break;
  case 2:
    uVar4 = FUN_10131e79(param_2,param_1,6,extraout_ECX_00,extraout_ECX_00);
    FUN_10129f05(uVar4);
    local_8 = CONCAT31(local_8._1_3_,0x1a);
    uVar7 = param_1[1];
    local_78 = (uint *)((int)local_a4 << 2);
    local_88 = (uint *)FUN_101284b4(param_3);
    uVar7 = uVar7 << 3;
    *(char *)local_88 = (char)(uVar7 | 2);
    pbVar12 = (byte *)((int)local_88 + 1);
    puVar8 = local_78;
    if (0x7f < (uVar7 | 2)) {
      uVar6 = uVar7 >> 7;
      *pbVar12 = (byte)uVar6;
      *(byte *)local_88 = (byte)uVar7 | 0x82;
      pbVar12 = (byte *)((int)local_88 + 2);
      while (0x7f < uVar6) {
        pbVar12[-1] = pbVar12[-1] | 0x80;
        uVar6 = uVar6 >> 7;
        *pbVar12 = (byte)uVar6;
        pbVar12 = pbVar12 + 1;
      }
    }
    for (; (uint *)0x7f < puVar8; puVar8 = (uint *)((uint)puVar8 >> 7)) {
      *pbVar12 = (byte)puVar8 | 0x80;
      pbVar12 = pbVar12 + 1;
    }
    *pbVar12 = (byte)puVar8;
    FUN_10129039(local_9c,local_78,pbVar12 + 1);
    FUN_10129f6e();
    break;
  case 3:
    uVar4 = FUN_10131e79(param_2,param_1,2,extraout_ECX_00,extraout_ECX_00);
    FUN_1012a1e4(uVar4);
    local_8 = CONCAT31(local_8._1_3_,6);
    local_7c = (uint *)FUN_10139e81();
    uVar7 = param_1[1];
    if ((uint *)*local_84 <= param_3) {
      param_3 = (uint *)FUN_1012d8d5(param_3);
    }
    pbVar12 = (byte *)((int)param_3 + 1);
    local_88 = (uint *)(uVar7 << 3 | 2);
    *(byte *)param_3 = (byte)local_88;
    if ((uint *)0x7f < local_88) {
      *(byte *)param_3 = (byte)local_88 | 0x80;
      uVar7 = (uVar7 << 3) >> 7;
      *pbVar12 = (byte)uVar7;
      pbVar12 = (byte *)((int)param_3 + 2);
      while (0x7f < uVar7) {
        pbVar12[-1] = pbVar12[-1] | 0x80;
        uVar7 = uVar7 >> 7;
        *pbVar12 = (byte)uVar7;
        pbVar12 = pbVar12 + 1;
      }
    }
    for (; 0x7f < local_7c; local_7c = (uint *)((uint)local_7c >> 7)) {
      *pbVar12 = (byte)local_7c | 0x80;
      pbVar12 = pbVar12 + 1;
    }
    puVar8 = (uint *)(pbVar12 + 1);
    *pbVar12 = (byte)local_7c;
    local_7c = local_9c;
    local_78 = local_9c + (int)local_a4 * 2;
    puVar13 = local_84;
    do {
      puVar17 = local_7c;
      puVar5 = puVar8;
      if ((uint *)*puVar13 <= puVar8) {
        puVar5 = (uint *)FUN_1012d8d5(puVar8);
        puVar13 = local_84;
      }
      local_88 = (uint *)*puVar17;
      uVar7 = puVar17[1];
      local_7c = local_7c + 2;
      *(byte *)puVar5 = (byte)local_88;
      puVar8 = (uint *)((int)puVar5 + 1);
      if ((uVar7 != 0) || ((uint *)0x7f < local_88)) {
        *(byte *)puVar5 = (byte)local_88 | 0x80;
        *(char *)puVar8 = (char)((uint)local_88 >> 7);
        puVar8 = (uint *)((int)puVar5 + 2);
        for (uVar6 = (uint)local_88 >> 7 | uVar7 << 0x19;
            (uVar7 = uVar7 >> 7, uVar7 != 0 || (puVar13 = local_84, 0x7f < uVar6));
            uVar6 = uVar6 >> 7 | uVar7 << 0x19) {
          *(byte *)((int)puVar8 + -1) = *(byte *)((int)puVar8 + -1) | 0x80;
          *(char *)puVar8 = (char)(uVar6 >> 7);
          puVar8 = (uint *)((int)puVar8 + 1);
        }
      }
      local_8c = puVar5;
    } while (local_7c < local_78);
    goto LAB_101384b7;
  case 4:
    uVar4 = FUN_10131e79(param_2,param_1,4,extraout_ECX_00,extraout_ECX_00);
    FUN_1012a1e4(uVar4);
    local_8 = CONCAT31(local_8._1_3_,0xe);
    local_7c = (uint *)FUN_10139e81();
    uVar7 = param_1[1];
    if ((uint *)*local_84 <= param_3) {
      param_3 = (uint *)FUN_1012d8d5(param_3);
    }
    pbVar12 = (byte *)((int)param_3 + 1);
    local_88 = (uint *)(uVar7 << 3 | 2);
    *(byte *)param_3 = (byte)local_88;
    if ((uint *)0x7f < local_88) {
      *(byte *)param_3 = (byte)local_88 | 0x80;
      uVar7 = (uVar7 << 3) >> 7;
      *pbVar12 = (byte)uVar7;
      pbVar12 = (byte *)((int)param_3 + 2);
      while (0x7f < uVar7) {
        pbVar12[-1] = pbVar12[-1] | 0x80;
        uVar7 = uVar7 >> 7;
        *pbVar12 = (byte)uVar7;
        pbVar12 = pbVar12 + 1;
      }
    }
    for (; 0x7f < local_7c; local_7c = (uint *)((uint)local_7c >> 7)) {
      *pbVar12 = (byte)local_7c | 0x80;
      pbVar12 = pbVar12 + 1;
    }
    puVar8 = (uint *)(pbVar12 + 1);
    *pbVar12 = (byte)local_7c;
    local_7c = local_9c;
    local_78 = local_9c + (int)local_a4 * 2;
    puVar13 = local_84;
    do {
      puVar17 = local_7c;
      puVar5 = puVar8;
      if ((uint *)*puVar13 <= puVar8) {
        puVar5 = (uint *)FUN_1012d8d5(puVar8);
        puVar13 = local_84;
      }
      local_88 = (uint *)*puVar17;
      uVar7 = puVar17[1];
      local_7c = local_7c + 2;
      *(byte *)puVar5 = (byte)local_88;
      puVar8 = (uint *)((int)puVar5 + 1);
      if ((uVar7 != 0) || ((uint *)0x7f < local_88)) {
        *(byte *)puVar5 = (byte)local_88 | 0x80;
        *(char *)puVar8 = (char)((uint)local_88 >> 7);
        puVar8 = (uint *)((int)puVar5 + 2);
        for (uVar6 = (uint)local_88 >> 7 | uVar7 << 0x19;
            (uVar7 = uVar7 >> 7, uVar7 != 0 || (puVar13 = local_84, 0x7f < uVar6));
            uVar6 = uVar6 >> 7 | uVar7 << 0x19) {
          *(byte *)((int)puVar8 + -1) = *(byte *)((int)puVar8 + -1) | 0x80;
          *(char *)puVar8 = (char)(uVar6 >> 7);
          puVar8 = (uint *)((int)puVar8 + 1);
        }
      }
      local_8c = puVar5;
    } while (local_7c < local_78);
    goto LAB_1013897b;
  case 5:
    uVar4 = FUN_10131e79(param_2,param_1,1,extraout_ECX_00,extraout_ECX_00);
    FUN_10129f05(uVar4);
    local_8 = CONCAT31(local_8._1_3_,4);
    local_7c = (uint *)FUN_10139e81();
    uVar7 = param_1[1];
    if ((uint *)*local_84 <= param_3) {
      param_3 = (uint *)FUN_1012d8d5(param_3);
    }
    pbVar12 = (byte *)((int)param_3 + 1);
    local_88 = (uint *)(uVar7 << 3 | 2);
    *(byte *)param_3 = (byte)local_88;
    if ((uint *)0x7f < local_88) {
      *(byte *)param_3 = (byte)local_88 | 0x80;
      uVar7 = (uVar7 << 3) >> 7;
      *pbVar12 = (byte)uVar7;
      pbVar12 = (byte *)((int)param_3 + 2);
      while (0x7f < uVar7) {
        pbVar12[-1] = pbVar12[-1] | 0x80;
        uVar7 = uVar7 >> 7;
        *pbVar12 = (byte)uVar7;
        pbVar12 = pbVar12 + 1;
      }
    }
    for (; 0x7f < local_7c; local_7c = (uint *)((uint)local_7c >> 7)) {
      *pbVar12 = (byte)local_7c | 0x80;
      pbVar12 = pbVar12 + 1;
    }
    puVar8 = (uint *)(pbVar12 + 1);
    *pbVar12 = (byte)local_7c;
    local_7c = local_9c;
    local_78 = local_9c + (int)local_a4;
    puVar13 = local_84;
    do {
      puVar17 = local_7c;
      puVar5 = puVar8;
      if ((uint *)*puVar13 <= puVar8) {
        puVar5 = (uint *)FUN_1012d8d5(puVar8);
        puVar13 = local_84;
      }
      local_88 = (uint *)*puVar17;
      local_7c = local_7c + 1;
      uVar7 = (int)local_88 >> 0x1f;
      *(byte *)puVar5 = (byte)local_88;
      puVar8 = (uint *)((int)puVar5 + 1);
      if (((int)local_88 < 0) || ((uint *)0x7f < local_88)) {
        *(byte *)puVar5 = (byte)local_88 | 0x80;
        *(char *)puVar8 = (char)((uint)local_88 >> 7);
        puVar8 = (uint *)((int)puVar5 + 2);
        for (uVar6 = (uint)local_88 >> 7 | uVar7 << 0x19;
            (uVar7 = uVar7 >> 7, uVar7 != 0 || (puVar13 = local_84, 0x7f < uVar6));
            uVar6 = uVar6 >> 7 | uVar7 << 0x19) {
          *(byte *)((int)puVar8 + -1) = *(byte *)((int)puVar8 + -1) | 0x80;
          *(char *)puVar8 = (char)(uVar6 >> 7);
          puVar8 = (uint *)((int)puVar8 + 1);
        }
      }
      local_8c = puVar5;
    } while (local_7c < local_78);
    goto LAB_10138372;
  case 6:
    uVar4 = FUN_10131e79(param_2,param_1,4,extraout_ECX_00,extraout_ECX_00);
    FUN_1012a1e4(uVar4);
    local_8 = CONCAT31(local_8._1_3_,0x14);
    uVar7 = param_1[1];
    local_78 = (uint *)((int)local_a4 << 3);
    local_88 = (uint *)FUN_101284b4(param_3);
    uVar7 = uVar7 << 3;
    *(char *)local_88 = (char)(uVar7 | 2);
    pbVar12 = (byte *)((int)local_88 + 1);
    puVar8 = local_78;
    if (0x7f < (uVar7 | 2)) {
      uVar6 = uVar7 >> 7;
      *pbVar12 = (byte)uVar6;
      *(byte *)local_88 = (byte)uVar7 | 0x82;
      pbVar12 = (byte *)((int)local_88 + 2);
      while (0x7f < uVar6) {
        pbVar12[-1] = pbVar12[-1] | 0x80;
        uVar6 = uVar6 >> 7;
        *pbVar12 = (byte)uVar6;
        pbVar12 = pbVar12 + 1;
      }
    }
    for (; (uint *)0x7f < puVar8; puVar8 = (uint *)((uint)puVar8 >> 7)) {
      *pbVar12 = (byte)puVar8 | 0x80;
      pbVar12 = pbVar12 + 1;
    }
    *pbVar12 = (byte)puVar8;
    FUN_10129039(local_9c,local_78,pbVar12 + 1);
LAB_1013897b:
    FUN_1012a231();
    break;
  case 7:
    uVar4 = FUN_10131e79(param_2,param_1,3,extraout_ECX_00,extraout_ECX_00);
    FUN_10129f05(uVar4);
    local_8 = CONCAT31(local_8._1_3_,0x12);
    uVar7 = param_1[1];
    local_78 = (uint *)((int)local_a4 << 2);
    local_88 = (uint *)FUN_101284b4(param_3);
    uVar7 = uVar7 << 3;
    *(char *)local_88 = (char)(uVar7 | 2);
    pbVar12 = (byte *)((int)local_88 + 1);
    puVar8 = local_78;
    if (0x7f < (uVar7 | 2)) {
      uVar6 = uVar7 >> 7;
      *pbVar12 = (byte)uVar6;
      *(byte *)local_88 = (byte)uVar7 | 0x82;
      pbVar12 = (byte *)((int)local_88 + 2);
      while (0x7f < uVar6) {
        pbVar12[-1] = pbVar12[-1] | 0x80;
        uVar6 = uVar6 >> 7;
        *pbVar12 = (byte)uVar6;
        pbVar12 = pbVar12 + 1;
      }
    }
    for (; (uint *)0x7f < puVar8; puVar8 = (uint *)((uint)puVar8 >> 7)) {
      *pbVar12 = (byte)puVar8 | 0x80;
      pbVar12 = pbVar12 + 1;
    }
    *pbVar12 = (byte)puVar8;
    FUN_10129039(local_9c,local_78,pbVar12 + 1);
    goto LAB_10138836;
  case 8:
    piVar9 = (int *)FUN_10131e79(param_2,param_1,7,extraout_ECX_00,extraout_ECX_00);
    local_c4 = 0;
    local_c0 = 0;
    if (*piVar9 != 0) {
      FUN_10129d8b(*piVar9);
      local_94 = (uint *)*piVar9;
      FUN_1018fff0(local_c0,piVar9[2],*piVar9);
    }
    local_8 = CONCAT31(local_8._1_3_,0x25);
    uVar7 = param_1[1];
    local_88 = (uint *)FUN_101284b4(param_3);
    uVar7 = uVar7 << 3;
    *(char *)local_88 = (char)(uVar7 | 2);
    pbVar12 = (byte *)((int)local_88 + 1);
    local_8c = local_94;
    if (0x7f < (uVar7 | 2)) {
      uVar6 = uVar7 >> 7;
      *pbVar12 = (byte)uVar6;
      *(byte *)local_88 = (byte)uVar7 | 0x82;
      pbVar12 = (byte *)((int)local_88 + 2);
      while (0x7f < uVar6) {
        pbVar12[-1] = pbVar12[-1] | 0x80;
        uVar6 = uVar6 >> 7;
        *pbVar12 = (byte)uVar6;
        pbVar12 = pbVar12 + 1;
      }
    }
    for (; (uint *)0x7f < local_8c; local_8c = (uint *)((uint)local_8c >> 7)) {
      *pbVar12 = (byte)local_8c | 0x80;
      pbVar12 = pbVar12 + 1;
    }
    *pbVar12 = (byte)local_8c;
    FUN_10129039(local_c0,local_94,pbVar12 + 1);
    FUN_10129ca8();
    break;
  default:
    local_38 = 3;
    local_34 = 
    "D:\\a\\iw4x-client\\iw4x-client\\deps\\protobuf\\src\\google\\protobuf\\wire_format.cc";
    local_30 = 0x531;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    local_1c = 0;
    local_18 = 0xf;
    local_2c = 0;
    local_8 = CONCAT31(local_8._1_3_,0x27);
    FUN_1001cbb3("Invalid descriptor",0x12);
    FUN_1012b3c1(&local_38);
    FUN_100075a4();
    break;
  case 0xd:
    uVar4 = FUN_10131e79(param_2,param_1,3,extraout_ECX_00,extraout_ECX_00);
    FUN_10129f05(uVar4);
    local_8 = CONCAT31(local_8._1_3_,0xc);
    local_7c = (uint *)FUN_10139e81();
    uVar7 = param_1[1];
    if ((uint *)*local_84 <= param_3) {
      param_3 = (uint *)FUN_1012d8d5(param_3);
    }
    pbVar12 = (byte *)((int)param_3 + 1);
    local_88 = (uint *)(uVar7 << 3 | 2);
    *(byte *)param_3 = (byte)local_88;
    if ((uint *)0x7f < local_88) {
      *(byte *)param_3 = (byte)local_88 | 0x80;
      uVar7 = (uVar7 << 3) >> 7;
      *pbVar12 = (byte)uVar7;
      pbVar12 = (byte *)((int)param_3 + 2);
      while (0x7f < uVar7) {
        pbVar12[-1] = pbVar12[-1] | 0x80;
        uVar7 = uVar7 >> 7;
        *pbVar12 = (byte)uVar7;
        pbVar12 = pbVar12 + 1;
      }
    }
    for (; 0x7f < local_7c; local_7c = (uint *)((uint)local_7c >> 7)) {
      *pbVar12 = (byte)local_7c | 0x80;
      pbVar12 = pbVar12 + 1;
    }
    *pbVar12 = (byte)local_7c;
    local_7c = local_9c;
    puVar8 = local_9c + (int)local_a4;
    puVar13 = local_84;
    pbVar12 = pbVar12 + 1;
    local_8c = puVar8;
    do {
      if ((byte *)*puVar13 <= pbVar12) {
        pbVar12 = (byte *)FUN_1012d8d5(pbVar12);
        puVar8 = local_8c;
        puVar13 = local_84;
      }
      uVar7 = *local_7c;
      pbVar14 = pbVar12 + 1;
      local_7c = local_7c + 1;
      *pbVar12 = (byte)uVar7;
      if (0x7f < uVar7) {
        uVar6 = uVar7 >> 7;
        *pbVar14 = (byte)uVar6;
        pbVar14 = pbVar12 + 2;
        *pbVar12 = (byte)uVar7 | 0x80;
        while (puVar8 = local_8c, 0x7f < uVar6) {
          pbVar14[-1] = pbVar14[-1] | 0x80;
          uVar6 = uVar6 >> 7;
          *pbVar14 = (byte)uVar6;
          pbVar14 = pbVar14 + 1;
        }
      }
      pbVar12 = pbVar14;
    } while (local_7c < puVar8);
LAB_10138836:
    FUN_10129f6e();
    break;
  case 0xe:
    uVar4 = FUN_10132588(param_2,param_1);
    FUN_10129f05(uVar4);
    local_8 = CONCAT31(local_8._1_3_,0x10);
    local_88 = (uint *)FUN_10139e81();
    uVar7 = param_1[1];
    pbVar14 = (byte *)FUN_101284b4(param_3);
    uVar7 = uVar7 << 3;
    *pbVar14 = (byte)(uVar7 | 2);
    pbVar12 = pbVar14 + 1;
    puVar8 = local_88;
    if (0x7f < (uVar7 | 2)) {
      uVar6 = uVar7 >> 7;
      *pbVar12 = (byte)uVar6;
      pbVar12 = pbVar14 + 2;
      *pbVar14 = (byte)uVar7 | 0x82;
      while (0x7f < uVar6) {
        pbVar12[-1] = pbVar12[-1] | 0x80;
        uVar6 = uVar6 >> 7;
        *pbVar12 = (byte)uVar6;
        pbVar12 = pbVar12 + 1;
      }
    }
    for (; (uint *)0x7f < puVar8; puVar8 = (uint *)((uint)puVar8 >> 7)) {
      *pbVar12 = (byte)puVar8 | 0x80;
      pbVar12 = pbVar12 + 1;
    }
    *pbVar12 = (byte)puVar8;
    pbVar12 = pbVar12 + 1;
    local_8c = local_9c;
    local_7c = local_9c + (int)local_a4;
    do {
      puVar8 = local_8c;
      local_78 = (uint *)FUN_101284b4(pbVar12);
      local_8c = local_8c + 1;
      local_88 = (uint *)*puVar8;
      puVar8 = (uint *)((int)local_88 >> 0x1f);
      *(byte *)local_78 = (byte)local_88;
      pbVar12 = (byte *)((int)local_78 + 1);
      if (((int)local_88 < 0) || ((uint *)0x7f < local_88)) {
        uVar7 = (uint)local_88 >> 7 | (int)puVar8 << 0x19;
        *pbVar12 = (byte)((uint)local_88 >> 7);
        *(byte *)local_78 = (byte)local_88 | 0x80;
        pbVar12 = (byte *)((int)local_78 + 2);
        while( true ) {
          puVar8 = (uint *)((uint)puVar8 >> 7);
          if ((puVar8 <= local_94) && ((puVar8 < local_94 || (uVar7 < 0x80)))) break;
          pbVar12[-1] = pbVar12[-1] | 0x80;
          uVar6 = uVar7 >> 7;
          uVar7 = uVar6 | (int)puVar8 << 0x19;
          *pbVar12 = (byte)uVar6;
          pbVar12 = pbVar12 + 1;
        }
      }
    } while (local_8c < local_7c);
    goto LAB_10138372;
  case 0xf:
    uVar4 = FUN_10132588(param_2,param_1);
    FUN_10129f05(uVar4);
    local_8 = CONCAT31(local_8._1_3_,0x16);
    uVar7 = param_1[1];
    local_78 = (uint *)((int)local_a4 << 2);
    local_88 = (uint *)FUN_101284b4(param_3);
    uVar7 = uVar7 << 3;
    *(char *)local_88 = (char)(uVar7 | 2);
    pbVar12 = (byte *)((int)local_88 + 1);
    puVar8 = local_78;
    if (0x7f < (uVar7 | 2)) {
      uVar6 = uVar7 >> 7;
      *pbVar12 = (byte)uVar6;
      *(byte *)local_88 = (byte)uVar7 | 0x82;
      pbVar12 = (byte *)((int)local_88 + 2);
      while (0x7f < uVar6) {
        pbVar12[-1] = pbVar12[-1] | 0x80;
        uVar6 = uVar6 >> 7;
        *pbVar12 = (byte)uVar6;
        pbVar12 = pbVar12 + 1;
      }
    }
    for (; (uint *)0x7f < puVar8; puVar8 = (uint *)((uint)puVar8 >> 7)) {
      *pbVar12 = (byte)puVar8 | 0x80;
      pbVar12 = pbVar12 + 1;
    }
    *pbVar12 = (byte)puVar8;
    FUN_10129039(local_9c,local_78,pbVar12 + 1);
    goto LAB_10138372;
  case 0x10:
    uVar4 = FUN_1013259e(param_2,param_1);
    FUN_1012a1e4(uVar4);
    local_8 = CONCAT31(local_8._1_3_,0x18);
    uVar7 = param_1[1];
    local_78 = (uint *)((int)local_a4 << 3);
    local_88 = (uint *)FUN_101284b4(param_3);
    uVar7 = uVar7 << 3;
    *(char *)local_88 = (char)(uVar7 | 2);
    pbVar12 = (byte *)((int)local_88 + 1);
    puVar8 = local_78;
    if (0x7f < (uVar7 | 2)) {
      uVar6 = uVar7 >> 7;
      *pbVar12 = (byte)uVar6;
      *(byte *)local_88 = (byte)uVar7 | 0x82;
      pbVar12 = (byte *)((int)local_88 + 2);
      while (0x7f < uVar6) {
        pbVar12[-1] = pbVar12[-1] | 0x80;
        uVar6 = uVar6 >> 7;
        *pbVar12 = (byte)uVar6;
        pbVar12 = pbVar12 + 1;
      }
    }
    for (; (uint *)0x7f < puVar8; puVar8 = (uint *)((uint)puVar8 >> 7)) {
      *pbVar12 = (byte)puVar8 | 0x80;
      pbVar12 = pbVar12 + 1;
    }
    *pbVar12 = (byte)puVar8;
    FUN_10129039(local_9c,local_78,pbVar12 + 1);
    goto LAB_101384b7;
  case 0x11:
    uVar4 = FUN_10132588(param_2,param_1);
    FUN_10129f05(uVar4);
    local_8 = CONCAT31(local_8._1_3_,8);
    local_7c = (uint *)FUN_10139e81();
    uVar7 = param_1[1];
    if ((uint *)*local_84 <= param_3) {
      param_3 = (uint *)FUN_1012d8d5(param_3);
    }
    pbVar12 = (byte *)((int)param_3 + 1);
    uVar6 = uVar7 << 3 | 2;
    bVar2 = (byte)uVar6;
    *(byte *)param_3 = bVar2;
    if (0x7f < uVar6) {
      *(byte *)param_3 = bVar2 | 0x80;
      uVar7 = (uVar7 << 3) >> 7;
      *pbVar12 = (byte)uVar7;
      pbVar12 = (byte *)((int)param_3 + 2);
      while (0x7f < uVar7) {
        pbVar12[-1] = pbVar12[-1] | 0x80;
        uVar7 = uVar7 >> 7;
        *pbVar12 = (byte)uVar7;
        pbVar12 = pbVar12 + 1;
      }
    }
    for (; (uint *)0x7f < local_7c; local_7c = (uint *)((uint)local_7c >> 7)) {
      *pbVar12 = (byte)local_7c | 0x80;
      pbVar12 = pbVar12 + 1;
    }
    *pbVar12 = (byte)local_7c;
    local_8c = local_9c;
    local_88 = local_9c + (int)local_a4;
    puVar8 = local_84;
    pbVar12 = pbVar12 + 1;
    do {
      if ((byte *)*puVar8 <= pbVar12) {
        pbVar12 = (byte *)FUN_1012d8d5(pbVar12);
        puVar8 = local_84;
      }
      uVar7 = *local_8c;
      pbVar14 = pbVar12 + 1;
      local_8c = local_8c + 1;
      uVar7 = (int)uVar7 >> 0x1f ^ uVar7 * 2;
      *pbVar12 = (byte)uVar7;
      if (0x7f < uVar7) {
        uVar6 = uVar7 >> 7;
        *pbVar14 = (byte)uVar6;
        pbVar14 = pbVar12 + 2;
        *pbVar12 = (byte)uVar7 | 0x80;
        while (0x7f < uVar6) {
          pbVar14[-1] = pbVar14[-1] | 0x80;
          uVar6 = uVar6 >> 7;
          *pbVar14 = (byte)uVar6;
          pbVar14 = pbVar14 + 1;
        }
      }
      pbVar12 = pbVar14;
    } while (local_8c < local_88);
LAB_10138372:
    FUN_10129f6e();
    break;
  case 0x12:
    uVar4 = FUN_1013259e(param_2,param_1);
    FUN_1012a1e4(uVar4);
    local_8 = CONCAT31(local_8._1_3_,10);
    local_7c = (uint *)FUN_10139e81();
    uVar7 = param_1[1];
    if ((uint *)*local_84 <= param_3) {
      param_3 = (uint *)FUN_1012d8d5(param_3);
    }
    pbVar12 = (byte *)((int)param_3 + 1);
    local_88 = (uint *)(uVar7 << 3 | 2);
    *(byte *)param_3 = (byte)local_88;
    if ((uint *)0x7f < local_88) {
      *(byte *)param_3 = (byte)local_88 | 0x80;
      uVar7 = (uVar7 << 3) >> 7;
      *pbVar12 = (byte)uVar7;
      pbVar12 = (byte *)((int)param_3 + 2);
      while (0x7f < uVar7) {
        pbVar12[-1] = pbVar12[-1] | 0x80;
        uVar7 = uVar7 >> 7;
        *pbVar12 = (byte)uVar7;
        pbVar12 = pbVar12 + 1;
      }
    }
    for (; 0x7f < local_7c; local_7c = (uint *)((uint)local_7c >> 7)) {
      *pbVar12 = (byte)local_7c | 0x80;
      pbVar12 = pbVar12 + 1;
    }
    puVar8 = (uint *)(pbVar12 + 1);
    *pbVar12 = (byte)local_7c;
    local_7c = local_9c + (int)local_a4 * 2;
    puVar13 = local_9c;
    do {
      if ((uint *)*local_84 <= puVar8) {
        puVar8 = (uint *)FUN_1012d8d5(puVar8);
      }
      local_78 = puVar13 + 2;
      local_8c = puVar8;
      uVar16 = FUN_10134c5e(*puVar13,puVar13[1]);
      puVar13 = (uint *)((ulonglong)uVar16 >> 0x20);
      local_88 = (uint *)uVar16;
      *(byte *)puVar8 = (byte)uVar16;
      puVar8 = (uint *)((int)puVar8 + 1);
      if ((puVar13 != (uint *)0x0) || ((uint *)0x7f < local_88)) {
        uVar7 = (uint)local_88 >> 7 | (int)puVar13 << 0x19;
        *(char *)puVar8 = (char)((uint)local_88 >> 7);
        *(byte *)local_8c = (byte)uVar16 | 0x80;
        puVar8 = (uint *)((int)local_8c + 2);
        while( true ) {
          puVar13 = (uint *)((uint)puVar13 >> 7);
          if ((puVar13 <= local_94) && ((puVar13 < local_94 || (uVar7 < 0x80)))) break;
          *(byte *)((int)puVar8 + -1) = *(byte *)((int)puVar8 + -1) | 0x80;
          uVar6 = uVar7 >> 7;
          uVar7 = uVar6 | (int)puVar13 << 0x19;
          *(char *)puVar8 = (char)uVar6;
          puVar8 = (uint *)((int)puVar8 + 1);
        }
      }
      puVar13 = local_78;
    } while (local_78 < local_7c);
LAB_101384b7:
    FUN_1012a231();
  }
LAB_1013972f:
  if (local_b4 != 0) {
    _Deallocate<>(local_b4,local_ac - local_b4 & 0xfffffffc);
  }
LAB_1013974f:
  FUN_1018e9fc();
  return;
}

