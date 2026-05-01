// Adresse runtime : 0x1017d3ee  (pas d'ASLR -> 1:1)
// Label heuristique : zlib_decompress
// Taille body : 5189 octets
// Decompile par Ghidra 12.0.4 PUBLIC


int __fastcall FUN_1017d3ee(int *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int *local_40;
  uint local_3c;
  int local_30;
  uint local_2c;
  undefined1 *local_24;
  uint local_20;
  uint local_18;
  uint local_14;
  uint local_10;
  byte *local_c;
  
  iVar4 = FUN_1017d168();
  if (((iVar4 == 0) && (param_1[3] != 0)) && ((*param_1 != 0 || (param_1[1] == 0)))) {
    iVar4 = param_1[7];
    iVar11 = *(int *)(iVar4 + 4);
    if (iVar11 == 0x3f3f) {
      *(undefined4 *)(iVar4 + 4) = 0x3f40;
      iVar11 = 0x3f40;
    }
    local_40 = param_1 + 3;
    local_24 = (undefined1 *)param_1[3];
    uVar14 = *(uint *)(iVar4 + 0x3c);
    uVar16 = *(uint *)(iVar4 + 0x40);
    local_2c = param_1[4];
    local_c = (byte *)*param_1;
    uVar2 = param_1[1];
    local_30 = 0;
    local_20 = local_2c;
    local_18 = uVar14;
    local_14 = uVar2;
    local_10 = uVar16;
    do {
      uVar6 = local_14;
      switch(iVar11) {
      case 0x3f34:
        if (*(int *)(iVar4 + 0xc) == 0) {
          *(undefined4 *)(iVar4 + 4) = 0x3f40;
        }
        else {
          while (uVar16 < 0x10) {
            uVar6 = 0;
            if (local_14 == 0) goto LAB_1017e731;
            local_14 = local_14 - 1;
            uVar14 = uVar14 + ((uint)*local_c << ((byte)uVar16 & 0x1f));
            local_c = local_c + 1;
            uVar16 = uVar16 + 8;
            local_18 = uVar14;
            local_10 = uVar16;
          }
          if (((*(byte *)(iVar4 + 0xc) & 2) == 0) || (uVar14 != 0x8b1f)) {
            if (*(int *)(iVar4 + 0x24) != 0) {
              *(undefined4 *)(*(int *)(iVar4 + 0x24) + 0x30) = 0xffffffff;
            }
            if (((*(byte *)(iVar4 + 0xc) & 1) == 0) ||
               (uVar6 = uVar14 & 0xff, uVar12 = uVar14 >> 8, uVar14 = local_18,
               (uVar6 * 0x100 + uVar12) % 0x1f != 0)) {
              param_1[6] = (int)"incorrect header check";
            }
            else {
              if (((byte)local_18 & 0xf) != 8) goto LAB_1017d563;
              uVar16 = uVar16 - 4;
              uVar14 = local_18 >> 4;
              uVar12 = (uVar14 & 0xf) + 8;
              uVar6 = *(uint *)(iVar4 + 0x28);
              if (*(uint *)(iVar4 + 0x28) == 0) {
                *(uint *)(iVar4 + 0x28) = uVar12;
                uVar6 = uVar12;
              }
              if ((uVar12 < 0x10) && (uVar12 <= uVar6)) {
                *(undefined4 *)(iVar4 + 0x1c) = 1;
                *(int *)(iVar4 + 0x18) = 1 << (sbyte)uVar12;
                *(undefined4 *)(iVar4 + 0x14) = 0;
                param_1[0xc] = 1;
                uVar16 = 0;
                *(uint *)(iVar4 + 4) = ~(local_18 >> 0xc) & 2 | 0x3f3d;
                uVar14 = 0;
                local_18 = uVar14;
                local_10 = uVar16;
                break;
              }
              param_1[6] = (int)"invalid window size";
              local_18 = uVar14;
              local_10 = uVar16;
            }
            goto LAB_1017e6c0;
          }
          if (*(int *)(iVar4 + 0x28) == 0) {
            *(undefined4 *)(iVar4 + 0x28) = 0xf;
          }
          *(undefined4 *)(iVar4 + 0x1c) = 0;
          uVar5 = FUN_101812df(2);
          *(undefined4 *)(iVar4 + 0x1c) = uVar5;
          uVar14 = 0;
          *(undefined4 *)(iVar4 + 4) = 0x3f35;
          uVar16 = 0;
          local_18 = 0;
          local_10 = 0;
        }
        break;
      case 0x3f35:
        while (uVar16 < 0x10) {
          uVar6 = local_14;
          if (local_14 == 0) goto LAB_1017e731;
          local_14 = local_14 - 1;
          uVar14 = uVar14 + ((uint)*local_c << ((byte)uVar16 & 0x1f));
          local_c = local_c + 1;
          uVar16 = uVar16 + 8;
          local_18 = uVar14;
          local_10 = uVar16;
        }
        *(uint *)(iVar4 + 0x14) = uVar14;
        if ((char)uVar14 == '\b') {
          if ((uVar14 & 0xe000) == 0) {
            if (*(uint **)(iVar4 + 0x24) != (uint *)0x0) {
              **(uint **)(iVar4 + 0x24) = uVar14 >> 8 & 1;
            }
            if (((*(uint *)(iVar4 + 0x14) & 0x200) != 0) && ((*(byte *)(iVar4 + 0xc) & 4) != 0)) {
              uVar5 = FUN_101812df(2);
              *(undefined4 *)(iVar4 + 0x1c) = uVar5;
            }
            *(undefined4 *)(iVar4 + 4) = 0x3f36;
            local_18 = 0;
            uVar16 = 0;
            do {
              uVar6 = 0;
              local_10 = uVar16;
              if (local_14 == 0) goto LAB_1017e731;
              local_14 = local_14 - 1;
              bVar9 = (byte)uVar16;
              uVar16 = uVar16 + 8;
              uVar14 = local_18 + ((uint)*local_c << (bVar9 & 0x1f));
              local_c = local_c + 1;
LAB_1017d69d:
              local_18 = uVar14;
            } while (uVar16 < 0x20);
            if (*(int *)(iVar4 + 0x24) != 0) {
              *(uint *)(*(int *)(iVar4 + 0x24) + 4) = uVar14;
            }
            if (((*(uint *)(iVar4 + 0x14) & 0x200) != 0) && ((*(byte *)(iVar4 + 0xc) & 4) != 0)) {
              uVar5 = FUN_101812df(4);
              *(undefined4 *)(iVar4 + 0x1c) = uVar5;
            }
            *(undefined4 *)(iVar4 + 4) = 0x3f37;
            uVar16 = 0;
            local_18 = 0;
            do {
              uVar6 = 0;
              local_10 = uVar16;
              if (local_14 == 0) goto LAB_1017e731;
              local_14 = local_14 - 1;
              bVar9 = (byte)uVar16;
              uVar16 = uVar16 + 8;
              uVar14 = local_18 + ((uint)*local_c << (bVar9 & 0x1f));
              local_c = local_c + 1;
LAB_1017d717:
              local_18 = uVar14;
            } while (uVar16 < 0x10);
            if (*(int *)(iVar4 + 0x24) != 0) {
              *(uint *)(*(int *)(iVar4 + 0x24) + 8) = uVar14 & 0xff;
              *(uint *)(*(int *)(iVar4 + 0x24) + 0xc) = uVar14 >> 8;
            }
            if (((*(uint *)(iVar4 + 0x14) & 0x200) != 0) && ((*(byte *)(iVar4 + 0xc) & 4) != 0)) {
              uVar5 = FUN_101812df(2);
              *(undefined4 *)(iVar4 + 0x1c) = uVar5;
            }
            *(undefined4 *)(iVar4 + 4) = 0x3f38;
            uVar14 = 0;
            uVar16 = 0;
            local_18 = 0;
            local_10 = 0;
            goto LAB_1017d7a1;
          }
          param_1[6] = (int)"unknown header flags set";
        }
        else {
LAB_1017d563:
          param_1[6] = (int)"unknown compression method";
        }
        goto LAB_1017e6c0;
      case 0x3f36:
        goto LAB_1017d69d;
      case 0x3f37:
        goto LAB_1017d717;
      case 0x3f38:
LAB_1017d7a1:
        if ((*(uint *)(iVar4 + 0x14) & 0x400) == 0) {
          if (*(int *)(iVar4 + 0x24) != 0) {
            *(undefined4 *)(*(int *)(iVar4 + 0x24) + 0x10) = 0;
          }
        }
        else {
          while (uVar16 < 0x10) {
            uVar6 = local_14;
            if (local_14 == 0) goto LAB_1017e731;
            local_14 = local_14 - 1;
            uVar14 = uVar14 + ((uint)*local_c << ((byte)uVar16 & 0x1f));
            local_c = local_c + 1;
            uVar16 = uVar16 + 8;
            local_18 = uVar14;
            local_10 = uVar16;
          }
          *(uint *)(iVar4 + 0x44) = uVar14;
          if (*(int *)(iVar4 + 0x24) != 0) {
            *(uint *)(*(int *)(iVar4 + 0x24) + 0x14) = uVar14;
          }
          if (((*(uint *)(iVar4 + 0x14) & 0x200) != 0) && ((*(byte *)(iVar4 + 0xc) & 4) != 0)) {
            uVar5 = FUN_101812df(2);
            *(undefined4 *)(iVar4 + 0x1c) = uVar5;
          }
          uVar16 = 0;
          local_18 = 0;
          local_10 = 0;
        }
        *(undefined4 *)(iVar4 + 4) = 0x3f39;
      case 0x3f39:
        if ((*(uint *)(iVar4 + 0x14) & 0x400) == 0) {
LAB_1017d8e5:
          *(undefined4 *)(iVar4 + 4) = 0x3f3a;
          *(undefined4 *)(iVar4 + 0x44) = 0;
LAB_1017d8f5:
          if ((*(uint *)(iVar4 + 0x14) & 0x800) == 0) {
            if (*(int *)(iVar4 + 0x24) != 0) {
              *(undefined4 *)(*(int *)(iVar4 + 0x24) + 0x1c) = 0;
            }
LAB_1017d98e:
            *(undefined4 *)(iVar4 + 4) = 0x3f3b;
            *(undefined4 *)(iVar4 + 0x44) = 0;
LAB_1017d99e:
            if ((*(uint *)(iVar4 + 0x14) & 0x1000) == 0) {
              if (*(int *)(iVar4 + 0x24) != 0) {
                *(undefined4 *)(*(int *)(iVar4 + 0x24) + 0x24) = 0;
              }
LAB_1017da37:
              *(undefined4 *)(iVar4 + 4) = 0x3f3c;
              uVar14 = local_18;
switchD_1017d488_caseD_3f3c:
              if ((*(uint *)(iVar4 + 0x14) & 0x200) != 0) {
                while (uVar16 < 0x10) {
                  uVar6 = local_14;
                  if (local_14 == 0) goto LAB_1017e731;
                  local_14 = local_14 - 1;
                  uVar14 = uVar14 + ((uint)*local_c << ((byte)uVar16 & 0x1f));
                  local_c = local_c + 1;
                  uVar16 = uVar16 + 8;
                  local_18 = uVar14;
                  local_10 = uVar16;
                }
                if (((*(byte *)(iVar4 + 0xc) & 4) != 0) && (uVar14 != *(ushort *)(iVar4 + 0x1c))) {
                  param_1[6] = (int)"header crc mismatch";
                  goto LAB_1017e6c0;
                }
                uVar14 = 0;
                uVar16 = 0;
                local_18 = 0;
                local_10 = 0;
              }
              if (*(int *)(iVar4 + 0x24) != 0) {
                *(uint *)(*(int *)(iVar4 + 0x24) + 0x2c) = *(int *)(iVar4 + 0x14) >> 9 & 1;
                *(undefined4 *)(*(int *)(iVar4 + 0x24) + 0x30) = 1;
              }
              *(undefined4 *)(iVar4 + 0x1c) = 0;
              param_1[0xc] = 0;
LAB_1017dac5:
              *(undefined4 *)(iVar4 + 4) = 0x3f3f;
              break;
            }
            uVar6 = local_14;
            if (local_14 != 0) {
              uVar14 = 0;
              do {
                bVar9 = local_c[uVar14];
                uVar14 = uVar14 + 1;
                iVar11 = *(int *)(iVar4 + 0x24);
                if (((iVar11 != 0) && (*(int *)(iVar11 + 0x24) != 0)) &&
                   (*(uint *)(iVar4 + 0x44) < *(uint *)(iVar11 + 0x28))) {
                  *(byte *)(*(uint *)(iVar4 + 0x44) + *(int *)(iVar11 + 0x24)) = bVar9;
                  *(int *)(iVar4 + 0x44) = *(int *)(iVar4 + 0x44) + 1;
                }
              } while ((bVar9 != 0) && (uVar14 < local_14));
              if (((*(uint *)(iVar4 + 0x14) & 0x200) != 0) && ((*(byte *)(iVar4 + 0xc) & 4) != 0)) {
                uVar5 = FUN_101812df(uVar14);
                *(undefined4 *)(iVar4 + 0x1c) = uVar5;
              }
              local_14 = local_14 - uVar14;
              local_c = local_c + uVar14;
              uVar6 = local_14;
              if (bVar9 == 0) goto LAB_1017da37;
            }
          }
          else {
            uVar6 = local_14;
            if (local_14 != 0) {
              uVar14 = 0;
              do {
                bVar9 = local_c[uVar14];
                uVar14 = uVar14 + 1;
                iVar11 = *(int *)(iVar4 + 0x24);
                if (((iVar11 != 0) && (*(int *)(iVar11 + 0x1c) != 0)) &&
                   (*(uint *)(iVar4 + 0x44) < *(uint *)(iVar11 + 0x20))) {
                  *(byte *)(*(uint *)(iVar4 + 0x44) + *(int *)(iVar11 + 0x1c)) = bVar9;
                  *(int *)(iVar4 + 0x44) = *(int *)(iVar4 + 0x44) + 1;
                }
              } while ((bVar9 != 0) && (uVar14 < local_14));
              if (((*(uint *)(iVar4 + 0x14) & 0x200) != 0) && ((*(byte *)(iVar4 + 0xc) & 4) != 0)) {
                uVar5 = FUN_101812df(uVar14);
                *(undefined4 *)(iVar4 + 0x1c) = uVar5;
              }
              local_14 = local_14 - uVar14;
              local_c = local_c + uVar14;
              uVar6 = local_14;
              if (bVar9 == 0) goto LAB_1017d98e;
            }
          }
        }
        else {
          uVar14 = *(uint *)(iVar4 + 0x44);
          uVar6 = local_14;
          if (uVar14 <= local_14) {
            uVar6 = uVar14;
          }
          if (uVar6 != 0) {
            iVar11 = *(int *)(iVar4 + 0x24);
            if ((iVar11 != 0) && (*(int *)(iVar11 + 0x10) != 0)) {
              uVar14 = *(int *)(iVar11 + 0x14) - uVar14;
              uVar12 = *(uint *)(*(int *)(iVar4 + 0x24) + 0x18);
              if (uVar14 < uVar12) {
                uVar13 = uVar6;
                if (uVar12 < uVar14 + uVar6) {
                  uVar13 = uVar12 - uVar14;
                }
                FUN_1018fff0(uVar14 + *(int *)(iVar11 + 0x10),local_c,uVar13);
              }
            }
            if (((*(uint *)(iVar4 + 0x14) & 0x200) != 0) && ((*(byte *)(iVar4 + 0xc) & 4) != 0)) {
              uVar5 = FUN_101812df(uVar6);
              *(undefined4 *)(iVar4 + 0x1c) = uVar5;
            }
            local_14 = local_14 - uVar6;
            local_c = local_c + uVar6;
            uVar14 = *(int *)(iVar4 + 0x44) - uVar6;
            *(uint *)(iVar4 + 0x44) = uVar14;
          }
          uVar6 = local_14;
          if (uVar14 == 0) goto LAB_1017d8e5;
        }
LAB_1017e731:
        iVar11 = 0;
        param_1[3] = (int)local_24;
        param_1[4] = local_20;
        param_1[1] = uVar6;
        *param_1 = (int)local_c;
        *(uint *)(iVar4 + 0x3c) = local_18;
        *(uint *)(iVar4 + 0x40) = local_10;
        if (((*(int *)(iVar4 + 0x2c) == 0) &&
            ((local_2c == param_1[4] || (0x3f50 < *(int *)(iVar4 + 4))))) ||
           (iVar7 = FUN_1017d31b(local_2c - param_1[4]), iVar7 == 0)) {
          iVar15 = uVar2 - param_1[1];
          iVar7 = local_2c - param_1[4];
          param_1[2] = param_1[2] + iVar15;
          param_1[5] = param_1[5] + iVar7;
          *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + iVar7;
          if (((*(byte *)(iVar4 + 0xc) & 4) != 0) && (iVar7 != 0)) {
            if (*(int *)(iVar4 + 0x14) == 0) {
              iVar8 = FUN_101808e4(iVar7);
            }
            else {
              iVar8 = FUN_101812df();
            }
            *(int *)(iVar4 + 0x1c) = iVar8;
            param_1[0xc] = iVar8;
          }
          if ((*(int *)(iVar4 + 4) == 0x3f47) || (*(int *)(iVar4 + 4) == 0x3f42)) {
            iVar11 = 0x100;
          }
          iVar8 = 0;
          if (*(int *)(iVar4 + 4) == 0x3f3f) {
            iVar8 = 0x80;
          }
          param_1[0xb] = (-(uint)(*(int *)(iVar4 + 8) != 0) & 0x40) + iVar8 + *(int *)(iVar4 + 0x40)
                         + iVar11;
          if (iVar15 != 0) {
            return local_30;
          }
          if (iVar7 != 0) {
            return local_30;
          }
          if (local_30 != 0) {
            return local_30;
          }
          return -5;
        }
        *(undefined4 *)(iVar4 + 4) = 0x3f52;
LAB_1017e6de:
        return -4;
      case 0x3f3a:
        goto LAB_1017d8f5;
      case 0x3f3b:
        goto LAB_1017d99e;
      case 0x3f3c:
        goto switchD_1017d488_caseD_3f3c;
      case 0x3f3d:
        while (uVar16 < 0x20) {
          uVar6 = local_14;
          if (local_14 == 0) goto LAB_1017e731;
          local_14 = local_14 - 1;
          uVar14 = uVar14 + ((uint)*local_c << ((byte)uVar16 & 0x1f));
          local_c = local_c + 1;
          uVar16 = uVar16 + 8;
          local_18 = uVar14;
          local_10 = uVar16;
        }
        uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18
        ;
        *(uint *)(iVar4 + 0x1c) = uVar14;
        param_1[0xc] = uVar14;
        uVar16 = 0;
        uVar14 = 0;
        local_10 = 0;
        local_18 = 0;
        *(undefined4 *)(iVar4 + 4) = 0x3f3e;
        goto LAB_1017db1c;
      case 0x3f3e:
LAB_1017db1c:
        if (*(int *)(iVar4 + 0x10) == 0) {
          param_1[3] = (int)local_24;
          param_1[4] = local_20;
          *param_1 = (int)local_c;
          param_1[1] = local_14;
          *(uint *)(iVar4 + 0x3c) = uVar14;
          *(uint *)(iVar4 + 0x40) = uVar16;
          return 2;
        }
        *(undefined4 *)(iVar4 + 0x1c) = 1;
        param_1[0xc] = 1;
        *(undefined4 *)(iVar4 + 4) = 0x3f3f;
LAB_1017db39:
        if (*(int *)(iVar4 + 8) == 0) {
          while (uVar16 < 3) {
            uVar6 = local_14;
            if (local_14 == 0) goto LAB_1017e731;
            local_14 = local_14 - 1;
            uVar14 = uVar14 + ((uint)*local_c << ((byte)uVar16 & 0x1f));
            local_c = local_c + 1;
            uVar16 = uVar16 + 8;
            local_18 = uVar14;
            local_10 = uVar16;
          }
          *(uint *)(iVar4 + 8) = uVar14 & 1;
          uVar6 = uVar14 >> 1 & 3;
          if (uVar6 == 0) {
            *(undefined4 *)(iVar4 + 4) = 0x3f41;
          }
          else if (uVar6 == 1) {
            *(undefined **)(iVar4 + 0x50) = &DAT_10290320;
            *(undefined4 *)(iVar4 + 0x58) = 9;
            *(undefined **)(iVar4 + 0x54) = &DAT_10290b20;
            *(undefined4 *)(iVar4 + 0x5c) = 5;
            *(undefined4 *)(iVar4 + 4) = 0x3f47;
          }
          else if (uVar6 == 2) {
            *(undefined4 *)(iVar4 + 4) = 0x3f44;
          }
          else if (uVar6 == 3) {
            param_1[6] = (int)"invalid block type";
            *(undefined4 *)(iVar4 + 4) = 0x3f51;
          }
          uVar14 = uVar14 >> 3;
          uVar16 = uVar16 - 3;
          local_18 = uVar14;
          local_10 = uVar16;
        }
        else {
          *(undefined4 *)(iVar4 + 4) = 0x3f4e;
          uVar14 = uVar14 >> (sbyte)(uVar16 & 7);
          uVar16 = uVar16 - (uVar16 & 7);
          local_18 = uVar14;
          local_10 = uVar16;
        }
        break;
      case 0x3f3f:
      case 0x3f40:
        goto LAB_1017db39;
      case 0x3f41:
        uVar14 = uVar14 >> (sbyte)(uVar16 & 7);
        for (local_10 = uVar16 - (uVar16 & 7); local_18 = uVar14, local_10 < 0x20;
            local_10 = local_10 + 8) {
          uVar6 = local_14;
          if (local_14 == 0) goto LAB_1017e731;
          local_14 = local_14 - 1;
          uVar14 = uVar14 + ((uint)*local_c << ((byte)local_10 & 0x1f));
          local_c = local_c + 1;
        }
        if ((uVar14 & 0xffff) == ~uVar14 >> 0x10) {
          *(uint *)(iVar4 + 0x44) = uVar14 & 0xffff;
          uVar14 = 0;
          uVar16 = 0;
          local_18 = 0;
          local_10 = 0;
          goto switchD_1017d488_caseD_3f42;
        }
        param_1[6] = (int)"invalid stored block lengths";
        uVar16 = local_10;
        goto LAB_1017e6c0;
      case 0x3f42:
switchD_1017d488_caseD_3f42:
        *(undefined4 *)(iVar4 + 4) = 0x3f43;
      case 0x3f43:
        uVar6 = *(uint *)(iVar4 + 0x44);
        if (uVar6 == 0) goto LAB_1017dac5;
        uVar14 = local_14;
        if (uVar6 <= local_14) {
          uVar14 = uVar6;
        }
        if (local_20 < uVar14) {
          uVar14 = local_20;
        }
        uVar6 = local_14;
        if (uVar14 != 0) {
          FUN_1018fff0(local_24,local_c,uVar14);
          local_14 = local_14 - uVar14;
          local_c = local_c + uVar14;
          local_20 = local_20 - uVar14;
          local_24 = local_24 + uVar14;
          *(int *)(iVar4 + 0x44) = *(int *)(iVar4 + 0x44) - uVar14;
          uVar14 = local_18;
          break;
        }
        goto LAB_1017e731;
      case 0x3f44:
        while (uVar16 < 0xe) {
          uVar6 = local_14;
          if (local_14 == 0) goto LAB_1017e731;
          local_14 = local_14 - 1;
          uVar14 = uVar14 + ((uint)*local_c << ((byte)uVar16 & 0x1f));
          local_c = local_c + 1;
          uVar16 = uVar16 + 8;
          local_18 = uVar14;
          local_10 = uVar16;
        }
        uVar16 = uVar16 - 0xe;
        uVar12 = (uVar14 & 0x1f) + 0x101;
        uVar13 = uVar14 >> 10;
        uVar6 = (uVar14 >> 5 & 0x1f) + 1;
        *(uint *)(iVar4 + 100) = uVar12;
        *(uint *)(iVar4 + 0x68) = uVar6;
        uVar14 = uVar14 >> 0xe;
        *(uint *)(iVar4 + 0x60) = (uVar13 & 0xf) + 4;
        local_10 = uVar16;
        local_18 = uVar14;
        if ((uVar12 < 0x11f) && (uVar6 < 0x1f)) {
          *(undefined4 *)(iVar4 + 0x6c) = 0;
          *(undefined4 *)(iVar4 + 4) = 0x3f45;
          goto switchD_1017d488_caseD_3f45;
        }
        param_1[6] = (int)"too many length or distance symbols";
        goto LAB_1017e6c0;
      case 0x3f45:
switchD_1017d488_caseD_3f45:
        while (uVar6 = *(uint *)(iVar4 + 0x6c), uVar6 < *(uint *)(iVar4 + 0x60)) {
          while (uVar16 < 3) {
            uVar6 = local_14;
            if (local_14 == 0) goto LAB_1017e731;
            local_14 = local_14 - 1;
            uVar14 = uVar14 + ((uint)*local_c << ((byte)uVar16 & 0x1f));
            local_c = local_c + 1;
            uVar16 = uVar16 + 8;
            local_18 = uVar14;
            local_10 = uVar16;
          }
          uVar10 = (ushort)uVar14;
          uVar14 = uVar14 >> 3;
          *(ushort *)
           (iVar4 + 0x74 + (uint)*(ushort *)(&DAT_10290ba0 + *(int *)(iVar4 + 0x6c) * 2) * 2) =
               uVar10 & 7;
          *(int *)(iVar4 + 0x6c) = *(int *)(iVar4 + 0x6c) + 1;
          uVar16 = uVar16 - 3;
          local_18 = uVar14;
          local_10 = uVar16;
        }
        while (uVar6 < 0x13) {
          *(undefined2 *)(iVar4 + 0x74 + (uint)*(ushort *)(&DAT_10290ba0 + uVar6 * 2) * 2) = 0;
          uVar6 = *(int *)(iVar4 + 0x6c) + 1;
          *(uint *)(iVar4 + 0x6c) = uVar6;
        }
        iVar11 = iVar4 + 0x534;
        *(int *)(iVar4 + 0x54) = iVar11;
        *(int *)(iVar4 + 0x70) = iVar11;
        *(int *)(iVar4 + 0x50) = iVar11;
        *(undefined4 *)(iVar4 + 0x58) = 7;
        local_30 = FUN_10180b22(0x13,(int *)(iVar4 + 0x70),(undefined4 *)(iVar4 + 0x58),
                                iVar4 + 0x2f4);
        uVar14 = local_18;
        if (local_30 == 0) {
          *(undefined4 *)(iVar4 + 0x6c) = 0;
          *(undefined4 *)(iVar4 + 4) = 0x3f46;
          goto switchD_1017d488_caseD_3f46;
        }
        param_1[6] = (int)"invalid code lengths set";
LAB_1017e6c0:
        *(undefined4 *)(iVar4 + 4) = 0x3f51;
        break;
      case 0x3f46:
switchD_1017d488_caseD_3f46:
        if (*(uint *)(iVar4 + 0x6c) < (uint)(*(int *)(iVar4 + 0x68) + *(int *)(iVar4 + 100))) {
          do {
            while (uVar12 = *(uint *)(*(int *)(iVar4 + 0x50) +
                                     ((1 << ((byte)*(undefined4 *)(iVar4 + 0x58) & 0x1f)) - 1U &
                                     uVar14) * 4), uVar16 < (uVar12 >> 8 & 0xff)) {
              uVar6 = local_14;
              if (local_14 == 0) goto LAB_1017e731;
              local_14 = local_14 - 1;
              uVar14 = uVar14 + ((uint)*local_c << ((byte)uVar16 & 0x1f));
              local_c = local_c + 1;
              uVar16 = uVar16 + 8;
              local_18 = uVar14;
              local_10 = uVar16;
            }
            uVar10 = (ushort)(uVar12 >> 0x10);
            bVar9 = (byte)(uVar12 >> 8);
            if (0xf < uVar10) {
              if (uVar10 == 0x10) {
                while (uVar16 < (uVar12 >> 8 & 0xff) + 2) {
                  uVar6 = 0;
                  if (local_14 == 0) goto LAB_1017e731;
                  local_14 = local_14 - 1;
                  uVar14 = uVar14 + ((uint)*local_c << ((byte)uVar16 & 0x1f));
                  local_c = local_c + 1;
                  uVar16 = uVar16 + 8;
                  local_18 = uVar14;
                  local_10 = uVar16;
                }
                uVar14 = uVar14 >> (bVar9 & 0x1f);
                uVar16 = uVar16 - bVar9;
                if (*(int *)(iVar4 + 0x6c) != 0) {
                  uVar1 = *(undefined2 *)(iVar4 + 0x72 + *(int *)(iVar4 + 0x6c) * 2);
                  uVar6 = uVar14 & 3;
                  uVar14 = uVar14 >> 2;
                  iVar11 = uVar6 + 3;
                  uVar16 = uVar16 - 2;
                  goto LAB_1017dfce;
                }
              }
              else {
                if (uVar10 == 0x11) {
                  while (uVar16 < bVar9 + 3) {
                    uVar6 = 0;
                    if (local_14 == 0) goto LAB_1017e731;
                    local_14 = local_14 - 1;
                    uVar14 = uVar14 + ((uint)*local_c << ((byte)uVar16 & 0x1f));
                    local_c = local_c + 1;
                    uVar16 = uVar16 + 8;
                    local_18 = uVar14;
                    local_10 = uVar16;
                  }
                  uVar14 = uVar14 >> (bVar9 & 0x1f);
                  iVar11 = (uVar14 & 7) + 3;
                  uVar14 = uVar14 >> 3;
                  iVar7 = -3;
                }
                else {
                  while (uVar16 < bVar9 + 7) {
                    uVar6 = 0;
                    if (local_14 == 0) goto LAB_1017e731;
                    local_14 = local_14 - 1;
                    uVar14 = uVar14 + ((uint)*local_c << ((byte)uVar16 & 0x1f));
                    local_c = local_c + 1;
                    uVar16 = uVar16 + 8;
                    local_18 = uVar14;
                    local_10 = uVar16;
                  }
                  uVar14 = uVar14 >> (bVar9 & 0x1f);
                  iVar11 = (uVar14 & 0x7f) + 0xb;
                  uVar14 = uVar14 >> 7;
                  iVar7 = -7;
                }
                uVar1 = 0;
                uVar16 = uVar16 + (iVar7 - (uint)bVar9);
LAB_1017dfce:
                uVar6 = *(uint *)(iVar4 + 0x6c);
                if (uVar6 + iVar11 <= (uint)(*(int *)(iVar4 + 0x68) + *(int *)(iVar4 + 100))) {
                  do {
                    *(undefined2 *)(iVar4 + 0x74 + uVar6 * 2) = uVar1;
                    uVar6 = *(int *)(iVar4 + 0x6c) + 1;
                    *(uint *)(iVar4 + 0x6c) = uVar6;
                    iVar11 = iVar11 + -1;
                  } while (iVar11 != 0);
                  goto LAB_1017e007;
                }
              }
              param_1[6] = (int)"invalid bit length repeat";
              *(undefined4 *)(iVar4 + 4) = 0x3f51;
              local_18 = uVar14;
              local_10 = uVar16;
              break;
            }
            uVar16 = uVar16 - (uVar12 >> 8 & 0xff);
            uVar14 = uVar14 >> (bVar9 & 0x1f);
            *(ushort *)(iVar4 + 0x74 + *(int *)(iVar4 + 0x6c) * 2) = uVar10;
            *(int *)(iVar4 + 0x6c) = *(int *)(iVar4 + 0x6c) + 1;
            uVar6 = *(uint *)(iVar4 + 0x6c);
LAB_1017e007:
            local_18 = uVar14;
            local_10 = uVar16;
          } while (uVar6 < (uint)(*(int *)(iVar4 + 0x68) + *(int *)(iVar4 + 100)));
        }
        if (*(int *)(iVar4 + 4) != 0x3f51) {
          if (*(short *)(iVar4 + 0x274) == 0) {
            param_1[6] = (int)"invalid code -- missing end-of-block";
          }
          else {
            *(int *)(iVar4 + 0x50) = iVar4 + 0x534;
            *(int *)(iVar4 + 0x70) = iVar4 + 0x534;
            *(undefined4 *)(iVar4 + 0x58) = 9;
            local_30 = FUN_10180b22(*(undefined4 *)(iVar4 + 100),(int *)(iVar4 + 0x70),
                                    (undefined4 *)(iVar4 + 0x58),iVar4 + 0x2f4);
            uVar14 = local_18;
            if (local_30 == 0) {
              *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(iVar4 + 0x70);
              *(undefined4 *)(iVar4 + 0x5c) = 6;
              local_30 = FUN_10180b22(*(undefined4 *)(iVar4 + 0x68),(undefined4 *)(iVar4 + 0x70),
                                      (undefined4 *)(iVar4 + 0x5c),iVar4 + 0x2f4);
              if (local_30 == 0) goto switchD_1017d488_caseD_3f47;
              param_1[6] = (int)"invalid distances set";
            }
            else {
              param_1[6] = (int)"invalid literal/lengths set";
            }
          }
          goto LAB_1017e6c0;
        }
        break;
      case 0x3f47:
switchD_1017d488_caseD_3f47:
        *(undefined4 *)(iVar4 + 4) = 0x3f48;
      case 0x3f48:
        if ((5 < local_14) && (0x101 < local_20)) {
          *local_40 = (int)local_24;
          param_1[4] = local_20;
          *param_1 = (int)local_c;
          param_1[1] = local_14;
          *(uint *)(iVar4 + 0x3c) = uVar14;
          *(uint *)(iVar4 + 0x40) = uVar16;
          FUN_10180efa();
          uVar14 = *(uint *)(iVar4 + 0x3c);
          uVar16 = *(uint *)(iVar4 + 0x40);
          local_24 = (undefined1 *)*local_40;
          local_20 = param_1[4];
          local_c = (byte *)*param_1;
          local_14 = param_1[1];
          local_18 = uVar14;
          local_10 = uVar16;
          if (*(int *)(iVar4 + 4) == 0x3f3f) {
            *(undefined4 *)(iVar4 + 0x1bc8) = 0xffffffff;
          }
          break;
        }
        iVar11 = *(int *)(iVar4 + 0x50);
        *(undefined4 *)(iVar4 + 0x1bc8) = 0;
        uVar12 = *(uint *)(*(int *)(iVar4 + 0x50) +
                          ((1 << ((byte)*(undefined4 *)(iVar4 + 0x58) & 0x1f)) - 1U & uVar14) * 4);
        uVar13 = uVar16;
        if (uVar16 < (uVar12 >> 8 & 0xff)) {
          do {
            uVar6 = local_14;
            if (local_14 == 0) goto LAB_1017e731;
            local_14 = local_14 - 1;
            uVar16 = uVar13 + 8;
            uVar14 = uVar14 + ((uint)*local_c << ((byte)uVar13 & 0x1f));
            local_c = local_c + 1;
            uVar12 = *(uint *)(iVar11 + ((1 << ((byte)*(undefined4 *)(iVar4 + 0x58) & 0x1f)) - 1U &
                                        uVar14) * 4);
            uVar13 = uVar16;
            local_18 = uVar14;
            local_10 = uVar16;
          } while (uVar16 < (uVar12 >> 8 & 0xff));
        }
        cVar3 = (char)uVar12;
        uVar6 = uVar12;
        if ((cVar3 != '\0') && ((uVar12 & 0xf0) == 0)) {
          uVar14 = uVar12 >> 8 & 0xff;
          bVar9 = (byte)(uVar12 >> 8);
          uVar6 = *(uint *)(iVar11 + ((((1 << (cVar3 + bVar9 & 0x1f)) - 1U & local_18) >>
                                      (bVar9 & 0x1f)) + (uVar12 >> 0x10)) * 4);
          for (; local_10 < (uVar6 >> 8 & 0xff) + uVar14; local_10 = local_10 + 8) {
            uVar6 = local_14;
            if (local_14 == 0) goto LAB_1017e731;
            local_14 = local_14 - 1;
            local_18 = local_18 + ((uint)*local_c << ((byte)local_10 & 0x1f));
            local_c = local_c + 1;
            uVar14 = (uint)bVar9;
            uVar6 = *(uint *)(iVar11 + ((((1 << (cVar3 + bVar9 & 0x1f)) - 1U & local_18) >>
                                        (bVar9 & 0x1f)) + (uVar12 >> 0x10)) * 4);
          }
          uVar14 = local_18 >> (bVar9 & 0x1f);
          uVar16 = local_10 - bVar9;
          *(uint *)(iVar4 + 0x1bc8) = (uint)bVar9;
        }
        uVar12 = uVar6 >> 8 & 0xff;
        *(int *)(iVar4 + 0x1bc8) = *(int *)(iVar4 + 0x1bc8) + uVar12;
        uVar16 = uVar16 - uVar12;
        uVar14 = uVar14 >> ((byte)(uVar6 >> 8) & 0x1f);
        *(uint *)(iVar4 + 0x44) = uVar6 >> 0x10;
        local_10 = uVar16;
        local_18 = uVar14;
        if ((char)uVar6 == '\0') {
          *(undefined4 *)(iVar4 + 4) = 0x3f4d;
          break;
        }
        if ((uVar6 & 0x20) != 0) {
          *(undefined4 *)(iVar4 + 0x1bc8) = 0xffffffff;
          goto LAB_1017dac5;
        }
        if ((uVar6 & 0x40) != 0) {
          param_1[6] = (int)"invalid literal/length code";
          goto LAB_1017e6c0;
        }
        *(undefined4 *)(iVar4 + 4) = 0x3f49;
        *(uint *)(iVar4 + 0x4c) = uVar6 & 0xf;
switchD_1017d488_caseD_3f49:
        uVar12 = *(uint *)(iVar4 + 0x4c);
        if (uVar12 != 0) {
          while (uVar16 < uVar12) {
            uVar6 = local_14;
            if (local_14 == 0) goto LAB_1017e731;
            local_14 = local_14 - 1;
            uVar14 = uVar14 + ((uint)*local_c << ((byte)uVar16 & 0x1f));
            local_c = local_c + 1;
            uVar16 = uVar16 + 8;
            local_18 = uVar14;
            local_10 = uVar16;
          }
          uVar16 = uVar16 - uVar12;
          uVar6 = (1 << ((byte)uVar12 & 0x1f)) - 1U & uVar14;
          uVar14 = uVar14 >> ((byte)uVar12 & 0x1f);
          *(int *)(iVar4 + 0x44) = *(int *)(iVar4 + 0x44) + uVar6;
          *(int *)(iVar4 + 0x1bc8) = *(int *)(iVar4 + 0x1bc8) + uVar12;
          local_18 = uVar14;
          local_10 = uVar16;
        }
        *(undefined4 *)(iVar4 + 0x1bcc) = *(undefined4 *)(iVar4 + 0x44);
        *(undefined4 *)(iVar4 + 4) = 0x3f4a;
switchD_1017d488_caseD_3f4a:
        iVar11 = *(int *)(iVar4 + 0x54);
        uVar12 = *(uint *)(iVar11 + ((1 << ((byte)*(undefined4 *)(iVar4 + 0x5c) & 0x1f)) - 1U &
                                    uVar14) * 4);
        uVar13 = uVar16;
        if (uVar16 < (uVar12 >> 8 & 0xff)) {
          do {
            uVar6 = local_14;
            if (local_14 == 0) goto LAB_1017e731;
            local_14 = local_14 - 1;
            uVar16 = uVar13 + 8;
            uVar14 = uVar14 + ((uint)*local_c << ((byte)uVar13 & 0x1f));
            local_c = local_c + 1;
            uVar12 = *(uint *)(iVar11 + ((1 << ((byte)*(undefined4 *)(iVar4 + 0x5c) & 0x1f)) - 1U &
                                        uVar14) * 4);
            uVar13 = uVar16;
            local_18 = uVar14;
            local_10 = uVar16;
          } while (uVar16 < (uVar12 >> 8 & 0xff));
        }
        uVar6 = uVar12;
        if ((uVar12 & 0xf0) == 0) {
          uVar14 = uVar12 >> 8 & 0xff;
          bVar9 = (byte)(uVar12 >> 8);
          uVar6 = *(uint *)(iVar11 + ((((1 << ((char)uVar12 + bVar9 & 0x1f)) - 1U & local_18) >>
                                      (bVar9 & 0x1f)) + (uVar12 >> 0x10)) * 4);
          for (; local_10 < (uVar6 >> 8 & 0xff) + uVar14; local_10 = local_10 + 8) {
            uVar6 = local_14;
            if (local_14 == 0) goto LAB_1017e731;
            local_14 = local_14 - 1;
            local_18 = local_18 + ((uint)*local_c << ((byte)local_10 & 0x1f));
            local_c = local_c + 1;
            uVar14 = (uint)bVar9;
            uVar6 = *(uint *)(iVar11 + ((((1 << ((char)uVar12 + bVar9 & 0x1f)) - 1U & local_18) >>
                                        (bVar9 & 0x1f)) + (uVar12 >> 0x10)) * 4);
          }
          uVar16 = local_10 - bVar9;
          uVar14 = local_18 >> (bVar9 & 0x1f);
          *(int *)(iVar4 + 0x1bc8) = *(int *)(iVar4 + 0x1bc8) + (uint)bVar9;
        }
        uVar12 = uVar6 >> 8 & 0xff;
        *(int *)(iVar4 + 0x1bc8) = *(int *)(iVar4 + 0x1bc8) + uVar12;
        uVar16 = uVar16 - uVar12;
        uVar14 = uVar14 >> ((byte)(uVar6 >> 8) & 0x1f);
        local_10 = uVar16;
        local_18 = uVar14;
        if ((uVar6 & 0x40) != 0) {
          param_1[6] = (int)"invalid distance code";
          goto LAB_1017e6c0;
        }
        *(undefined4 *)(iVar4 + 4) = 0x3f4b;
        *(uint *)(iVar4 + 0x48) = uVar6 >> 0x10;
        *(uint *)(iVar4 + 0x4c) = uVar6 & 0xf;
switchD_1017d488_caseD_3f4b:
        uVar12 = *(uint *)(iVar4 + 0x4c);
        if (uVar12 != 0) {
          while (uVar16 < uVar12) {
            uVar6 = 0;
            if (local_14 == 0) goto LAB_1017e731;
            local_14 = local_14 - 1;
            uVar14 = uVar14 + ((uint)*local_c << ((byte)uVar16 & 0x1f));
            local_c = local_c + 1;
            uVar16 = uVar16 + 8;
            local_18 = uVar14;
            local_10 = uVar16;
          }
          uVar16 = uVar16 - uVar12;
          uVar6 = (1 << ((byte)uVar12 & 0x1f)) - 1U & uVar14;
          uVar14 = uVar14 >> ((byte)uVar12 & 0x1f);
          *(int *)(iVar4 + 0x48) = *(int *)(iVar4 + 0x48) + uVar6;
          *(int *)(iVar4 + 0x1bc8) = *(int *)(iVar4 + 0x1bc8) + uVar12;
          local_18 = uVar14;
          local_10 = uVar16;
        }
        *(undefined4 *)(iVar4 + 4) = 0x3f4c;
switchD_1017d488_caseD_3f4c:
        uVar6 = local_14;
        if (local_20 != 0) {
          uVar6 = *(uint *)(iVar4 + 0x48);
          if (local_2c - local_20 < uVar6) {
            uVar6 = uVar6 - (local_2c - local_20);
            if ((*(uint *)(iVar4 + 0x30) < uVar6) && (*(int *)(iVar4 + 0x1bc4) != 0)) {
              param_1[6] = (int)"invalid distance too far back";
              goto LAB_1017e6c0;
            }
            if (*(uint *)(iVar4 + 0x34) < uVar6) {
              uVar6 = uVar6 - *(int *)(iVar4 + 0x34);
              iVar11 = (*(int *)(iVar4 + 0x2c) - uVar6) + *(int *)(iVar4 + 0x38);
            }
            else {
              iVar11 = (*(int *)(iVar4 + 0x38) - uVar6) + *(int *)(iVar4 + 0x34);
            }
            local_3c = *(uint *)(iVar4 + 0x44);
            uVar14 = local_3c;
            if (uVar6 <= local_3c) {
              uVar14 = uVar6;
            }
          }
          else {
            iVar11 = (int)local_24 - uVar6;
            local_3c = *(uint *)(iVar4 + 0x44);
            uVar14 = local_3c;
          }
          if (local_20 < uVar14) {
            uVar14 = local_20;
          }
          local_20 = local_20 - uVar14;
          iVar11 = iVar11 - (int)local_24;
          *(uint *)(iVar4 + 0x44) = local_3c - uVar14;
          do {
            *local_24 = local_24[iVar11];
            local_24 = local_24 + 1;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
          uVar14 = local_18;
          if (*(int *)(iVar4 + 0x44) == 0) {
            *(undefined4 *)(iVar4 + 4) = 0x3f48;
          }
          break;
        }
        goto LAB_1017e731;
      case 0x3f49:
        goto switchD_1017d488_caseD_3f49;
      case 0x3f4a:
        goto switchD_1017d488_caseD_3f4a;
      case 0x3f4b:
        goto switchD_1017d488_caseD_3f4b;
      case 0x3f4c:
        goto switchD_1017d488_caseD_3f4c;
      case 0x3f4d:
        if (local_20 == 0) goto LAB_1017e731;
        local_20 = local_20 - 1;
        *local_24 = *(undefined1 *)(iVar4 + 0x44);
        *(undefined4 *)(iVar4 + 4) = 0x3f48;
        local_24 = local_24 + 1;
        break;
      case 0x3f4e:
        if (*(int *)(iVar4 + 0xc) != 0) {
          while (uVar16 < 0x20) {
            uVar6 = local_14;
            if (local_14 == 0) goto LAB_1017e731;
            local_14 = local_14 - 1;
            uVar14 = uVar14 + ((uint)*local_c << ((byte)uVar16 & 0x1f));
            local_c = local_c + 1;
            uVar16 = uVar16 + 8;
            local_18 = uVar14;
            local_10 = uVar16;
          }
          iVar11 = local_2c - local_20;
          param_1[5] = param_1[5] + iVar11;
          *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + iVar11;
          if (((*(byte *)(iVar4 + 0xc) & 4) != 0) && (iVar11 != 0)) {
            if (*(int *)(iVar4 + 0x14) == 0) {
              iVar11 = FUN_101808e4(iVar11);
            }
            else {
              iVar11 = FUN_101812df();
            }
            *(int *)(iVar4 + 0x1c) = iVar11;
            param_1[0xc] = iVar11;
            uVar14 = local_18;
          }
          local_2c = local_20;
          if ((*(byte *)(iVar4 + 0xc) & 4) != 0) {
            uVar6 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                    uVar14 << 0x18;
            if (*(int *)(iVar4 + 0x14) != 0) {
              uVar6 = uVar14;
            }
            if (uVar6 != *(uint *)(iVar4 + 0x1c)) {
              param_1[6] = (int)"incorrect data check";
              goto LAB_1017e6c0;
            }
          }
          uVar14 = 0;
          uVar16 = 0;
          local_18 = 0;
          local_10 = 0;
        }
        *(undefined4 *)(iVar4 + 4) = 0x3f4f;
      case 0x3f4f:
        if ((*(int *)(iVar4 + 0xc) != 0) && (*(int *)(iVar4 + 0x14) != 0)) {
          while (uVar16 < 0x20) {
            uVar6 = 0;
            if (local_14 == 0) goto LAB_1017e731;
            local_14 = local_14 - 1;
            uVar14 = uVar14 + ((uint)*local_c << ((byte)uVar16 & 0x1f));
            local_c = local_c + 1;
            uVar16 = uVar16 + 8;
            local_18 = uVar14;
            local_10 = uVar16;
          }
          if (((*(byte *)(iVar4 + 0xc) & 4) != 0) && (uVar14 != *(uint *)(iVar4 + 0x20))) {
            param_1[6] = (int)"incorrect length check";
            goto LAB_1017e6c0;
          }
          local_18 = 0;
          local_10 = 0;
        }
        *(undefined4 *)(iVar4 + 4) = 0x3f50;
LAB_1017e71a:
        local_30 = 1;
        uVar6 = local_14;
        goto LAB_1017e731;
      case 0x3f50:
        goto LAB_1017e71a;
      case 0x3f51:
        local_30 = -3;
        goto LAB_1017e731;
      case 0x3f52:
        goto LAB_1017e6de;
      default:
        goto LAB_1017e6de;
      }
      iVar11 = *(int *)(iVar4 + 4);
    } while( true );
  }
LAB_1017e6de:
  return -2;
}

