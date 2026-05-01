// iw4v.dll!FUN_100aa195 @ 0x100aa195
// taille body : 10229 octets
// decompile par Ghidra 12.0.4 PUBLIC


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aa195(void)

{
  int iVar1;
  undefined4 uVar2;
  int local_f8;
  int local_f0;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  undefined4 local_48;
  int local_40;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_40 = _DAT_0112a9f4;
  local_8 = 0xffffffff;
  puStack_c = &LAB_101b8098;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_103f1760 < 0x13c) {
    FUN_100b448d();
    local_8 = 0;
    FUN_10004176(1);
    local_8 = 0xffffffff;
    thunk_FUN_10004158();
  }
  else {
    local_48 = 0xc28;
    if (DAT_103f1760 < 0x1cd) {
      if (DAT_103f1760 < 0x1cc) {
        if (DAT_103f1760 < 0x16d) {
          if (DAT_103f1760 < 0x167) {
            if (DAT_103f1760 < 0x14c) {
              if (0x13d < DAT_103f1760) {
                local_48 = 0xc54;
              }
            }
            else {
              local_48 = 0xbfc;
            }
          }
          else {
            local_48 = 0xc30;
          }
        }
        else {
          local_48 = 0xc34;
        }
      }
      else {
        local_48 = 0x1018;
      }
    }
    else {
      local_48 = 0x101c;
    }
    if (DAT_103f1760 < 0x1cd) {
      local_e0 = 0;
    }
    else {
      local_e0 = 4;
    }
    (*DAT_10324718)(1,_DAT_0112a9f4,local_48,DAT_10323100 ^ (uint)&stack0xfffffffc,0);
    (*DAT_10324700)(3);
    *DAT_10324714 = local_40;
    (*DAT_10324708)(0);
    *DAT_10324714 = local_40 + 4;
    (*DAT_10324708)(0);
    *DAT_10324714 = local_40 + 8;
    (*DAT_10324708)(0);
    *DAT_10324714 = local_40 + 0xc;
    (*DAT_10324708)(0);
    *DAT_10324704 = local_40 + 0x10;
    (*DAT_103246f8)(0);
    if (DAT_103f1760 < 0x167) {
      local_90 = 0x14;
      for (local_c4 = 0; local_c4 < 0x20; local_c4 = local_c4 + 1) {
        *DAT_10324704 = local_40 + local_90;
        (*DAT_103246f8)(0);
        local_90 = local_90 + 4;
      }
      for (local_50 = 0x94; local_50 < 0xa9; local_50 = local_50 + 4) {
        *DAT_10324704 = local_40 + local_50;
        (*DAT_103246f8)(0);
      }
    }
    else {
      iVar1 = FUN_10007bcf();
      if (iVar1 < 0x1cc) {
        local_c8 = 0x38;
      }
      else {
        local_c8 = 0x34;
      }
      for (local_4c = 0x14; local_4c <= local_c8; local_4c = local_4c + 4) {
        *DAT_10324704 = local_40 + local_4c;
        (*DAT_103246f8)(0);
      }
    }
    if (DAT_103f1760 < 0x167) {
      *DAT_10324714 = local_40 + 0xec;
      (*DAT_103246fc)(0,0x30);
      *DAT_10324714 = local_40 + 0x1ac;
      (*DAT_103246fc)(0,0x30);
      *DAT_10324714 = local_40 + 0x26c;
      (*DAT_103246fc)(0,0x30);
    }
    else {
      iVar1 = FUN_10007bcf();
      if (iVar1 < 0x1cc) {
        local_cc = 0x34;
      }
      else {
        local_cc = 0x3e;
      }
      *DAT_10324714 = local_40 + 0x7c;
      (*DAT_103246fc)(0,local_cc);
      *DAT_10324714 = local_40 + 0x7c + local_cc * 4;
      (*DAT_103246fc)(0,local_cc);
      *DAT_10324714 = local_40 + 0x7c + local_cc * 8;
      (*DAT_103246fc)(0,local_cc);
    }
    iVar1 = FUN_10007bcf();
    if (iVar1 < 0x1cc) {
      if (DAT_103f1760 < 0x167) {
        *DAT_103246f0 = local_40 + 0x3cc;
        (*DAT_103246f4)(0);
        *DAT_103246f0 = local_40 + 0x3d0;
        (*DAT_103246f4)(0);
      }
      else {
        *DAT_103246f0 = local_40 + 0x38c;
        (*DAT_103246f4)(0);
        *DAT_103246f0 = local_40 + 0x390;
        (*DAT_103246f4)(0);
      }
    }
    else {
      for (local_58 = 0; local_58 < 0x10; local_58 = local_58 + 1) {
        *DAT_103246f0 = local_40 + 0x404 + local_58 * 4;
        (*DAT_103246f4)(0);
      }
      for (local_5c = 0; local_5c < 0x10; local_5c = local_5c + 1) {
        *DAT_103246f0 = local_40 + 0x464 + local_5c * 4;
        (*DAT_103246f4)(0);
      }
      for (local_60 = 0; local_60 < 0x10; local_60 = local_60 + 1) {
        *DAT_103246f0 = local_40 + 0x4a4 + local_60 * 4;
        (*DAT_103246f4)(0);
      }
      for (local_64 = 0; local_64 < 0x10; local_64 = local_64 + 1) {
        *DAT_103246f0 = local_40 + 0x524 + local_64 * 4;
        (*DAT_103246f4)(0);
      }
      for (local_68 = 0; local_68 < 5; local_68 = local_68 + 1) {
        *DAT_103246f0 = local_40 + 0x5a4 + local_68 * 4;
        (*DAT_103246f4)(0);
      }
    }
    iVar1 = FUN_10007bcf();
    if (0x1cb < iVar1) {
      *DAT_10324714 = local_40 + 0x5b8;
      (*DAT_10324708)(0);
      *DAT_10324714 = local_40 + 0x5c0;
      (*DAT_10324708)(0);
    }
    if (DAT_103f1760 < 0x167) {
      local_a0 = 0x3d4;
      for (local_9c = 0; local_9c < 0x32; local_9c = local_9c + 1) {
        *DAT_103246e8 = local_40 + local_a0;
        (*DAT_103246ec)(*DAT_103246e8);
        local_a0 = local_a0 + 4;
      }
      if (0x13d < DAT_103f1760) {
        local_a8 = 0x4a0;
        for (local_a4 = 0; local_a4 < 2; local_a4 = local_a4 + 1) {
          *DAT_103246e8 = local_40 + local_a8;
          (*DAT_103246ec)(*DAT_103246e8);
          local_a8 = local_a8 + 4;
        }
        local_40 = local_40 + 8;
      }
    }
    else {
      iVar1 = FUN_10007bcf();
      if (iVar1 < 0x1cc) {
        local_d4 = 0x394;
      }
      else {
        local_d4 = 0x5c4;
      }
      local_98 = local_d4;
      iVar1 = FUN_10007bcf();
      if (iVar1 < 0x1cd) {
        iVar1 = FUN_10007bcf();
        if (iVar1 < 0x1cc) {
          local_d8 = 0x34;
        }
        else {
          local_d8 = 0x39;
        }
        local_dc = local_d8;
      }
      else {
        local_dc = 0x3a;
      }
      for (local_94 = 0; local_94 < local_dc; local_94 = local_94 + 1) {
        *DAT_103246e8 = local_40 + local_98;
        (*DAT_103246ec)(*DAT_103246e8);
        local_98 = local_98 + 4;
      }
    }
    iVar1 = FUN_10007bcf();
    if (iVar1 < 0x1cc) {
      if (DAT_103f1760 < 0x167) {
        if ((*(int *)(local_40 + 0x4a0) != 0) && (*(int *)(local_40 + 0x4a0) == -1)) {
          uVar2 = (*DAT_103246e0)(3);
          *(undefined4 *)(local_40 + 0x4a0) = uVar2;
          *DAT_103246e8 = *(int *)(local_40 + 0x4a0);
          (*DAT_103246e4)(1,0x1f);
        }
        if ((*(int *)(local_40 + 0x4a4) != 0) && (*(int *)(local_40 + 0x4a4) == -1)) {
          uVar2 = (*DAT_103246e0)(3);
          *(undefined4 *)(local_40 + 0x4a4) = uVar2;
          *DAT_103246e8 = *(int *)(local_40 + 0x4a4);
          (*DAT_103246e4)(1,0x1f);
        }
      }
      else {
        if ((*(int *)(local_40 + 0x468) != 0) && (*(int *)(local_40 + 0x468) == -1)) {
          uVar2 = (*DAT_103246e0)(3);
          *(undefined4 *)(local_40 + 0x468) = uVar2;
          *DAT_103246e8 = *(int *)(local_40 + 0x468);
          (*DAT_103246e4)(1,0x1f);
        }
        if ((*(int *)(local_40 + 0x46c) != 0) && (*(int *)(local_40 + 0x46c) == -1)) {
          uVar2 = (*DAT_103246e0)(3);
          *(undefined4 *)(local_40 + 0x46c) = uVar2;
          *DAT_103246e8 = *(int *)(local_40 + 0x46c);
          (*DAT_103246e4)(1,0x1f);
        }
      }
    }
    else {
      if ((*(int *)(local_40 + 0x6ac) != 0) && (*(int *)(local_40 + 0x6ac) == -1)) {
        uVar2 = (*DAT_103246e0)(3);
        *(undefined4 *)(local_40 + 0x6ac) = uVar2;
        *DAT_103246e8 = *(int *)(local_40 + 0x6ac);
        (*DAT_103246e4)(1,0x1f);
      }
      if ((*(int *)(local_40 + 0x6b0) != 0) && (*(int *)(local_40 + 0x6b0) == -1)) {
        uVar2 = (*DAT_103246e0)(3);
        *(undefined4 *)(local_40 + 0x6b0) = uVar2;
        *DAT_103246e8 = *(int *)(local_40 + 0x6b0);
        (*DAT_103246e4)(1,0x1f);
      }
    }
    iVar1 = FUN_10007bcf();
    if (iVar1 < 0x1cc) {
      if (DAT_103f1760 < 0x167) {
        for (local_74 = 0x4a8; local_74 < 0x4b5; local_74 = local_74 + 4) {
          *DAT_103246f0 = local_40 + local_74;
          (*DAT_103246f4)(0);
        }
      }
      else {
        for (local_70 = 0x470; local_70 < 0x47d; local_70 = local_70 + 4) {
          *DAT_103246f0 = local_40 + local_70;
          (*DAT_103246f4)(0);
        }
      }
    }
    else {
      for (local_6c = 0x6b4; local_6c < 0x6c1; local_6c = local_6c + 4) {
        *DAT_103246f0 = local_40 + local_6c;
        (*DAT_103246f4)(0);
      }
    }
    iVar1 = FUN_10007bcf();
    if (iVar1 < 0x1cc) {
      if (DAT_103f1760 < 0x167) {
        for (local_80 = 0; local_80 < 10; local_80 = local_80 + 1) {
          *DAT_103246dc = local_40 + *(int *)(&DAT_10338ed8 + local_80 * 4);
          (*DAT_103246d8)(0);
        }
      }
      else {
        for (local_7c = 0; local_7c < 10; local_7c = local_7c + 1) {
          *DAT_103246dc = local_40 + *(int *)(&DAT_10338f00 + local_7c * 4);
          (*DAT_103246d8)(0);
        }
      }
    }
    else {
      for (local_78 = 0; local_78 < 0xe; local_78 = local_78 + 1) {
        *DAT_103246dc = local_40 + *(int *)(&DAT_10338f28 + local_78 * 4);
        (*DAT_103246d8)(0);
      }
    }
    iVar1 = FUN_10007bcf();
    if (iVar1 < 0x1cc) {
      if (DAT_103f1760 < 0x167) {
        *DAT_10324714 = local_40 + 0x5cc;
        (*DAT_10324708)(0);
        *DAT_10324714 = local_40 + 0x5d4;
        (*DAT_10324708)(0);
        *DAT_10324714 = local_40 + 0x5e4;
        (*DAT_10324708)(0);
      }
      else {
        *DAT_10324714 = local_40 + 0x594;
        (*DAT_10324708)(0);
        *DAT_10324714 = local_40 + 0x59c;
        (*DAT_10324708)(0);
        *DAT_10324714 = local_40 + 0x5ac;
        (*DAT_10324708)(0);
      }
    }
    else {
      *DAT_10324714 = local_40 + 0x7e8;
      (*DAT_10324708)(0);
      *DAT_10324714 = local_40 + 0x7f0;
      (*DAT_10324708)(0);
      *DAT_10324714 = local_40 + 0x800;
      (*DAT_10324708)(0);
    }
    iVar1 = FUN_10007bcf();
    if (iVar1 < 0x1cc) {
      if (DAT_103f1760 < 0x167) {
        for (local_8c = 0x6e4; local_8c < 0x6f1; local_8c = local_8c + 4) {
          *DAT_103246dc = local_40 + local_8c;
          (*DAT_103246d8)(0);
        }
      }
      else {
        for (local_88 = 0x6b4; local_88 < 0x6c1; local_88 = local_88 + 4) {
          *DAT_103246dc = local_40 + local_88;
          (*DAT_103246d8)(0);
        }
      }
    }
    else {
      for (local_84 = 0x91c; local_84 < 0x929; local_84 = local_84 + 4) {
        *DAT_103246dc = local_40 + local_84;
        (*DAT_103246d8)(0);
      }
    }
    iVar1 = FUN_10007bcf();
    if (iVar1 < 0x1cc) {
      if (DAT_103f1760 < 0x167) {
        *DAT_103246d0 = local_40 + 0x7ac;
        (*DAT_103246d4)(0);
      }
      else {
        *DAT_103246d0 = local_40 + 0x788;
        (*DAT_103246d4)(0);
        *DAT_103246c8 = local_40 + 0x78c;
        (*DAT_103246cc)(0);
      }
    }
    else {
      *DAT_103246d0 = local_40 + 0x9f0;
      (*DAT_103246d4)(0);
      *DAT_103246c8 = local_40 + 0x9f4;
      (*DAT_103246cc)(0);
    }
    iVar1 = FUN_10007bcf();
    if (iVar1 < 0x1cc) {
      if (DAT_103f1760 < 0x167) {
        *DAT_10324704 = local_40 + 0x804;
        (*DAT_103246f8)(0);
      }
      else {
        *DAT_10324704 = local_40 + 0x7e4;
        (*DAT_103246f8)(0);
      }
    }
    else {
      *DAT_10324704 = local_40 + 0xa60;
      (*DAT_103246f8)(0);
    }
    iVar1 = FUN_10007bcf();
    if (iVar1 < 0x1cc) {
      if (DAT_103f1760 < 0x167) {
        *DAT_103246f0 = local_40 + 0x80c;
        (*DAT_103246f4)(0);
        *DAT_103246f0 = local_40 + 0x810;
        (*DAT_103246f4)(0);
      }
      else {
        *DAT_103246f0 = local_40 + 0x7ec;
        (*DAT_103246f4)(0);
        *DAT_103246f0 = local_40 + 0x7f0;
        (*DAT_103246f4)(0);
      }
    }
    else {
      *DAT_103246f0 = local_40 + 0xa68;
      (*DAT_103246f4)(0);
      *DAT_103246f0 = local_40 + 0xa6c;
      (*DAT_103246f4)(0);
    }
    iVar1 = FUN_10007bcf();
    if (iVar1 < 0x1cc) {
      if (DAT_103f1760 < 0x167) {
        *DAT_103246e8 = local_40 + 0x814;
        (*DAT_103246ec)(*DAT_103246e8);
        *DAT_103246e8 = local_40 + 0x818;
        (*DAT_103246ec)(*DAT_103246e8);
      }
      else {
        *DAT_103246e8 = local_40 + 0x7f4;
        (*DAT_103246ec)(*DAT_103246e8);
        *DAT_103246e8 = local_40 + 0x7f8;
        (*DAT_103246ec)(*DAT_103246e8);
      }
    }
    else {
      *DAT_103246e8 = local_40 + 0xa70;
      (*DAT_103246ec)(*DAT_103246e8);
      *DAT_103246e8 = local_40 + 0xa74;
      (*DAT_103246ec)(*DAT_103246e8);
    }
    iVar1 = FUN_10007bcf();
    if (iVar1 < 0x1cc) {
      if (DAT_103f1760 < 0x167) {
        *DAT_103246f0 = local_40 + 0x920;
        (*DAT_103246f4)(0);
        *DAT_103246f0 = local_40 + 0x924;
        (*DAT_103246f4)(0);
        *DAT_103246f0 = local_40 + 0x940;
        (*DAT_103246f4)(0);
      }
      else {
        *DAT_103246f0 = local_40 + 0x900;
        (*DAT_103246f4)(0);
        *DAT_103246f0 = local_40 + 0x904;
        (*DAT_103246f4)(0);
        *DAT_103246f0 = local_40 + 0x920;
        (*DAT_103246f4)(0);
      }
    }
    else {
      *DAT_103246f0 = local_40 + 0xb88;
      (*DAT_103246f4)(0);
      *DAT_103246f0 = local_40 + 0xb8c;
      (*DAT_103246f4)(0);
      *DAT_103246f0 = local_40 + 0xba8;
      (*DAT_103246f4)(0);
    }
    iVar1 = FUN_10007bcf();
    if (iVar1 < 0x1cc) {
      if (DAT_103f1760 < 0x167) {
        *DAT_103246e8 = local_40 + 0x944;
        (*DAT_103246ec)(*DAT_103246e8);
        *DAT_10324714 = local_40 + 0x9f4;
        (*DAT_10324708)(0);
      }
      else {
        *DAT_103246e8 = local_40 + 0x924;
        (*DAT_103246ec)(*DAT_103246e8);
        *DAT_10324714 = local_40 + 0x9d4;
        (*DAT_10324708)(0);
      }
    }
    else {
      *DAT_103246e8 = local_40 + 0xbac;
      (*DAT_103246ec)(*DAT_103246e8);
      *DAT_103246f0 = local_40 + 0xbb0;
      (*DAT_103246f4)(0);
      *DAT_103246f0 = local_40 + 0xbb4;
      (*DAT_103246f4)(0);
      *DAT_103246f0 = local_40 + 3000;
      (*DAT_103246f4)(0);
      *DAT_103246f0 = local_40 + 0xbbc;
      (*DAT_103246f4)(0);
      *DAT_103246f0 = local_40 + 0xbc0;
      (*DAT_103246f4)(0);
      *DAT_10324714 = local_40 + 0xc7c;
      (*DAT_10324708)(0);
    }
    iVar1 = FUN_10007bcf();
    if (iVar1 < 0x1cc) {
      if (DAT_103f1760 < 0x167) {
        if (*(int *)(local_40 + 0x9fc) == -1) {
          uVar2 = (*DAT_103246e0)(3);
          *(undefined4 *)(local_40 + 0x9fc) = uVar2;
          if (DAT_103f1760 < 0x13e) {
            local_f0 = 0xbe0;
          }
          else {
            local_f0 = 0xc04;
          }
          (*DAT_10324718)(1,uVar2,(int)*(short *)(local_40 + local_f0) << 3);
        }
        *DAT_10324714 = local_40 + 0x9f8;
        (*DAT_10324708)(0);
        if (*(int *)(local_40 + 0xa00) == -1) {
          uVar2 = (*DAT_103246e0)(3);
          *(undefined4 *)(local_40 + 0xa00) = uVar2;
          if (DAT_103f1760 < 0x13e) {
            local_f8 = 0xbe2;
          }
          else {
            local_f8 = 0xc06;
          }
          (*DAT_10324718)(1,uVar2,(int)*(short *)(local_40 + local_f8) << 3);
        }
      }
      else {
        if (*(int *)(local_40 + 0x9dc) == -1) {
          uVar2 = (*DAT_103246e0)(3);
          *(undefined4 *)(local_40 + 0x9dc) = uVar2;
          (*DAT_10324718)(1,uVar2,(int)*(short *)(local_40 + 0xbe4) << 3);
        }
        *DAT_10324714 = local_40 + 0x9d8;
        (*DAT_10324708)(0);
        if (*(int *)(local_40 + 0x9e0) == -1) {
          uVar2 = (*DAT_103246e0)(3);
          *(undefined4 *)(local_40 + 0x9e0) = uVar2;
          (*DAT_10324718)(1,uVar2,(int)*(short *)(local_40 + 0xbe6) << 3);
        }
      }
    }
    else {
      if (*(int *)(local_40 + 0xc84) == -1) {
        uVar2 = (*DAT_103246e0)(3);
        *(undefined4 *)(local_40 + 0xc84) = uVar2;
        (*DAT_10324718)(1,uVar2,(int)*(short *)(local_40 + local_e0 + 0xec0) << 3);
      }
      *DAT_10324714 = local_40 + 0xc80;
      (*DAT_10324708)(0);
      if (*(int *)(local_40 + 0xc88) == -1) {
        uVar2 = (*DAT_103246e0)(3);
        *(undefined4 *)(local_40 + 0xc88) = uVar2;
        (*DAT_10324718)(1,uVar2,(int)*(short *)(local_40 + local_e0 + 0xec2) << 3);
      }
    }
    iVar1 = FUN_10007bcf();
    if (iVar1 < 0x1cc) {
      if (DAT_103f1760 < 0x167) {
        *DAT_10324714 = local_40 + 0xa50;
        (*DAT_10324708)(0);
        *DAT_10324714 = local_40 + 0xa54;
        (*DAT_10324708)(0);
        *DAT_10324714 = local_40 + 0xa74;
        (*DAT_10324708)(0);
        *DAT_10324714 = local_40 + 0xa78;
        (*DAT_10324708)(0);
        *DAT_10324714 = local_40 + 0xaf4;
        (*DAT_10324708)(0);
        *DAT_10324714 = local_40 + 0xaf8;
        (*DAT_10324708)(0);
      }
      else {
        *DAT_10324714 = local_40 + 0xa30;
        (*DAT_10324708)(0);
        *DAT_10324714 = local_40 + 0xa34;
        (*DAT_10324708)(0);
        *DAT_10324714 = local_40 + 0xa54;
        (*DAT_10324708)(0);
        *DAT_10324714 = local_40 + 0xa58;
        (*DAT_10324708)(0);
        *DAT_10324714 = local_40 + 0xad4;
        (*DAT_10324708)(0);
        *DAT_10324714 = local_40 + 0xad8;
        (*DAT_10324708)(0);
      }
    }
    else {
      *DAT_10324714 = local_40 + 0xcd8 + local_e0;
      (*DAT_10324708)(0);
      *DAT_10324714 = local_40 + 0xcdc + local_e0;
      (*DAT_10324708)(0);
      *DAT_10324714 = local_40 + 0xcfc + local_e0;
      (*DAT_10324708)(0);
      *DAT_10324714 = local_40 + 0xd00 + local_e0;
      (*DAT_10324708)(0);
      *DAT_10324714 = local_40 + 0xd9c + local_e0;
      (*DAT_10324708)(0);
      *DAT_10324714 = local_40 + 0xda0 + local_e0;
      (*DAT_10324708)(0);
    }
    iVar1 = FUN_10007bcf();
    if (iVar1 < 0x1cc) {
      if (DAT_103f1760 < 0x167) {
        *DAT_103246c0 = local_40 + 0xafc;
        (*DAT_103246c4)(0);
        *DAT_103246e8 = local_40 + 0xb18;
        (*DAT_103246ec)(*DAT_103246e8);
        *DAT_103246f0 = local_40 + 0xb1c;
        (*DAT_103246f4)(0);
        *DAT_10324714 = local_40 + 0xb20;
        (*DAT_10324708)(0);
        *DAT_103246e8 = local_40 + 0xb30;
        (*DAT_103246ec)(*DAT_103246e8);
        *DAT_103246e8 = local_40 + 0xb34;
        (*DAT_103246e4)(0,4);
        *DAT_103246e8 = local_40 + 0xb44;
        (*DAT_103246e4)(0,4);
        *DAT_103246e8 = local_40 + 0xb54;
        (*DAT_103246ec)(*DAT_103246e8);
        *DAT_103246e8 = local_40 + 0xb58;
        (*DAT_103246ec)(*DAT_103246e8);
      }
      else {
        *DAT_103246c0 = local_40 + 0xadc;
        (*DAT_103246c4)(0);
        *DAT_103246e8 = local_40 + 0xaf8;
        (*DAT_103246ec)(*DAT_103246e8);
        *DAT_103246f0 = local_40 + 0xafc;
        (*DAT_103246f4)(0);
        *DAT_10324714 = local_40 + 0xb00;
        (*DAT_10324708)(0);
        *DAT_103246e8 = local_40 + 0xb10;
        (*DAT_103246ec)(*DAT_103246e8);
        *DAT_103246e8 = local_40 + 0xb14;
        (*DAT_103246e4)(0,4);
        *DAT_103246e8 = local_40 + 0xb24;
        (*DAT_103246e4)(0,4);
        *DAT_103246e8 = local_40 + 0xb34;
        (*DAT_103246ec)(*DAT_103246e8);
        *DAT_103246e8 = local_40 + 0xb38;
        (*DAT_103246ec)(*DAT_103246e8);
      }
    }
    else {
      *DAT_103246c0 = local_40 + 0xda4 + local_e0;
      (*DAT_103246c4)(0);
      *DAT_103246c0 = local_40 + 0xda8 + local_e0;
      (*DAT_103246c4)(0);
      *DAT_103246c0 = local_40 + 0xdac + local_e0;
      (*DAT_103246c4)(0);
      *DAT_103246e8 = local_40 + 0xdc8 + local_e0;
      (*DAT_103246ec)(*DAT_103246e8);
      *DAT_103246f0 = local_40 + 0xdcc + local_e0;
      (*DAT_103246f4)(0);
      *DAT_10324714 = local_40 + 0xdd0 + local_e0;
      (*DAT_10324708)(0);
      *DAT_103246e8 = local_40 + 0xde0 + local_e0;
      (*DAT_103246ec)(*DAT_103246e8);
      *DAT_103246e8 = local_40 + 0xde4 + local_e0;
      (*DAT_103246e4)(0,4);
      *DAT_103246e8 = local_40 + 0xdf4 + local_e0;
      (*DAT_103246e4)(0,4);
      *DAT_103246e8 = local_40 + 0xe04 + local_e0;
      (*DAT_103246ec)(*DAT_103246e8);
      *DAT_103246e8 = local_40 + 0xe08 + local_e0;
      (*DAT_103246ec)(*DAT_103246e8);
    }
    iVar1 = FUN_10007bcf();
    if (iVar1 < 0x1cc) {
      if (DAT_103f1760 < 0x167) {
        if (0x13d < DAT_103f1760) {
          local_c0 = 0xb9c;
          for (local_bc = 0; local_bc < 6; local_bc = local_bc + 1) {
            *DAT_103246e8 = local_40 + local_c0;
            (*DAT_103246ec)(*DAT_103246e8);
            local_c0 = local_c0 + 4;
          }
          local_40 = local_40 + 0x24;
        }
      }
      else {
        local_b8 = 0xb7c;
        for (local_b4 = 0; local_b4 < 6; local_b4 = local_b4 + 1) {
          *DAT_103246e8 = local_40 + local_b8;
          (*DAT_103246ec)(*DAT_103246e8);
          local_b8 = local_b8 + 4;
        }
      }
    }
    else {
      local_b0 = local_e0 + 0xe4c;
      for (local_ac = 0; local_ac < 6; local_ac = local_ac + 1) {
        *DAT_103246e8 = local_40 + local_b0;
        (*DAT_103246ec)(*DAT_103246e8);
        local_b0 = local_b0 + 4;
      }
    }
    iVar1 = FUN_10007bcf();
    if (iVar1 < 0x1cc) {
      if (DAT_103f1760 < 0x167) {
        *DAT_10324714 = local_40 + 0xba8;
        (*DAT_10324708)(0);
        *DAT_10324714 = local_40 + 0xbb4;
        (*DAT_10324708)(0);
        *DAT_10324714 = local_40 + 3000;
        (*DAT_10324708)(0);
        *DAT_103246dc = local_40 + 0xbc0;
        (*DAT_103246d8)(0);
        *DAT_103246dc = local_40 + 0xbc4;
        (*DAT_103246d8)(0);
        *DAT_103246dc = local_40 + 0xbc8;
        (*DAT_103246d8)(0);
      }
      else {
        *DAT_10324714 = local_40 + 0xbac;
        (*DAT_10324708)(0);
        if (0x16c < DAT_103f1760) {
          local_40 = local_40 + 4;
        }
        *DAT_10324714 = local_40 + 3000;
        (*DAT_10324708)(0);
        *DAT_10324714 = local_40 + 0xbbc;
        (*DAT_10324708)(0);
        *DAT_103246dc = local_40 + 0xbc4;
        (*DAT_103246d8)(0);
        *DAT_103246dc = local_40 + 0xbc8;
        (*DAT_103246d8)(0);
        *DAT_103246dc = local_40 + 0xbcc;
        (*DAT_103246d8)(0);
      }
    }
    else {
      *DAT_10324714 = local_40 + 0xe80 + local_e0;
      (*DAT_10324708)(0);
      *DAT_10324714 = local_40 + 0xe90 + local_e0;
      (*DAT_10324708)(0);
      *DAT_10324714 = local_40 + 0xe94 + local_e0;
      (*DAT_10324708)(0);
      *DAT_103246dc = local_40 + 0xe9c + local_e0;
      (*DAT_103246d8)(0);
      *DAT_103246dc = local_40 + 0xea0 + local_e0;
      (*DAT_103246d8)(0);
      *DAT_103246dc = local_40 + 0xea4 + local_e0;
      (*DAT_103246d8)(0);
      *DAT_103246dc = local_40 + 0xea8 + local_e0;
      (*DAT_103246d8)(0);
    }
    iVar1 = FUN_10007bcf();
    if (iVar1 < 0x1cc) {
      if (DAT_103f1760 < 0x167) {
        if (*(int *)(local_40 + 0xbe4) == -1) {
          uVar2 = (*DAT_103246e0)(3);
          *(undefined4 *)(local_40 + 0xbe4) = uVar2;
          (*DAT_10324718)(1,uVar2,(int)*(short *)(local_40 + 0xbe0) << 3);
        }
        if (*(int *)(local_40 + 0xbe8) == -1) {
          uVar2 = (*DAT_103246e0)(3);
          *(undefined4 *)(local_40 + 0xbe8) = uVar2;
          (*DAT_10324718)(1,uVar2,(int)*(short *)(local_40 + 0xbe2) << 3);
        }
      }
      else {
        if (*(int *)(local_40 + 0xbe8) == -1) {
          uVar2 = (*DAT_103246e0)(3);
          *(undefined4 *)(local_40 + 0xbe8) = uVar2;
          (*DAT_10324718)(1,uVar2,(int)*(short *)(local_40 + 0xbe4) << 3);
        }
        if (*(int *)(local_40 + 0xbec) == -1) {
          uVar2 = (*DAT_103246e0)(3);
          *(undefined4 *)(local_40 + 0xbec) = uVar2;
          (*DAT_10324718)(1,uVar2,(int)*(short *)(local_40 + 0xbe6) << 3);
        }
      }
    }
    else {
      if (*(int *)(local_40 + local_e0 + 0xec4) == -1) {
        uVar2 = (*DAT_103246e0)(3);
        *(undefined4 *)(local_40 + local_e0 + 0xec4) = uVar2;
        (*DAT_10324718)(1,uVar2,(int)*(short *)(local_40 + local_e0 + 0xec0) << 3);
      }
      if (*(int *)(local_40 + local_e0 + 0xec8) == -1) {
        uVar2 = (*DAT_103246e0)(3);
        *(undefined4 *)(local_40 + local_e0 + 0xec8) = uVar2;
        (*DAT_10324718)(1,uVar2,(int)*(short *)(local_40 + local_e0 + 0xec2) << 3);
      }
      *DAT_10324714 = local_40 + 0xf24 + local_e0;
      (*DAT_10324708)(0);
      *DAT_10324714 = local_40 + 0xf28 + local_e0;
      (*DAT_10324708)(0);
      *DAT_10324714 = local_40 + 0xf2c + local_e0;
      (*DAT_10324708)(0);
      *DAT_10324714 = local_40 + 0xf9c + local_e0;
      (*DAT_10324708)(0);
      *DAT_10324714 = local_40 + 0xfac + local_e0;
      (*DAT_10324708)(0);
    }
    (*DAT_103246b8)();
  }
  ExceptionList = local_10;
  return;
}

