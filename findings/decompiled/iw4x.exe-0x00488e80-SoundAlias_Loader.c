// iw4x.exe!SoundAlias_Loader  @  0x00488e80
// taille body : 1817 octets
// pas d'ASLR -> adresse identique au runtime
// decompile par Ghidra 12.0.4 PUBLIC


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00488e80(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  FILE *_File;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  char *local_8e10;
  int local_8e0c;
  int local_8e08;
  char *local_8e04;
  int local_8e00;
  char *local_8dfc;
  undefined4 local_8df8;
  undefined4 local_8df4;
  undefined4 local_8df0;
  undefined4 local_8dec;
  undefined4 local_8de8;
  undefined4 local_8de4;
  undefined4 local_8de0;
  undefined4 local_8ddc;
  undefined4 local_8dd8 [64];
  char local_8cd8 [256];
  undefined1 local_8bd8 [256];
  undefined1 local_8ad8 [256];
  undefined1 local_89d8 [1024];
  undefined1 local_85d8 [472];
  int aiStack_8400 [256];
  char acStack_8000 [1024];
  undefined1 local_7c00 [1024];
  undefined1 local_7800 [2048];
  char local_7000 [28668];
  undefined4 uStack_4;
  
  uStack_4 = 0x488e8a;
  FUN_00413de0(local_8dd8,0x100,"soundaliases/%s",param_1);
  FUN_004702c0(*(undefined4 *)(DAT_063d0cd4 + 0x10),&DAT_063d0bb8,local_8dd8,local_8cd8);
  Com_DPrintf(9,"Processing sound alias file %s..\n",local_8cd8);
  _File = _fopen(local_8cd8,"r+");
  if (_File == (FILE *)0x0) {
    FUN_004e0200(9,"WARNING: Can not write to sound alias file %s\n",local_8cd8);
    return;
  }
  _fclose(_File);
  iVar5 = FUN_004f4b90(local_8dd8,&local_8dfc);
  if (iVar5 < 0) {
    FUN_004e0200(9,"WARNING: Could not read sound alias file %s\n",local_8dd8);
    return;
  }
  local_8e0c = FUN_004ba530("soundaliases/temp.csv");
  if (local_8e0c == 0) {
    FUN_004e0200(9,"WARNING: Could not open output file %s for writing\n","soundaliases/temp.csv");
    return;
  }
  FUN_004aab80(local_8dd8);
  FUN_004e8650(1);
  local_8e08 = 0;
  local_8e00 = 0;
  local_8e10 = local_8dfc;
joined_r0x00488fa5:
  do {
    if (local_8e10 == (char *)0x0) {
LAB_0048950d:
      FUN_004b80b0();
      FUN_00462000(local_8e0c);
      FUN_004702c0(*(undefined4 *)(DAT_063d0cd4 + 0x10),&DAT_063d0bb8,"soundaliases/temp.csv",
                   local_8bd8);
      FUN_004702c0(*(undefined4 *)(DAT_063d0cd4 + 0x10),&DAT_063d0bb8,local_8dd8,local_8ad8);
      iVar5 = local_8e00;
      if (local_8e00 != 0) {
        FUN_004d6ed0(local_8bd8,local_8ad8);
      }
      thunk_FUN_006b6eac(local_8bd8);
      Com_DPrintf(9,"Localized %i sound alias subtitles\n",iVar5);
      return;
    }
    cVar1 = *local_8e10;
    while (cVar1 == '\r') {
      local_8e10 = local_8e10 + 1;
      cVar1 = *local_8e10;
    }
    if (*local_8e10 == '\n') {
      local_8e10 = local_8e10 + 1;
      FUN_004576c0(&DAT_006e578c,2,local_8e0c);
    }
    local_8e04 = local_8e10;
    pcVar6 = (char *)FUN_00474d60(&local_8e10);
    if (local_8e10 == (char *)0x0) goto LAB_0048950d;
    FUN_004dcf20(pcVar6,"#Chateau");
    if ((*pcVar6 == '\0') || (*pcVar6 == '#')) {
      FUN_004b8300(&local_8e10);
      pcVar6 = local_8e04;
      if (*local_8e04 == '\n') {
        FUN_004576c0(&DAT_006f398c,1,local_8e0c);
      }
      iVar5 = (int)local_8e10 - (int)pcVar6;
      goto LAB_004894f5;
    }
    if (local_8e08 == 0) {
      bVar3 = false;
      bVar4 = false;
      do {
        aiStack_8400[local_8e08] = 0;
        iVar5 = 1;
        do {
          iVar7 = FUN_004dcf20(*(undefined4 *)(&DAT_0079cbc0 + iVar5 * 4),pcVar6);
          if (iVar7 == 0) {
            aiStack_8400[local_8e08] = iVar5;
            if (iVar5 == 1) {
              bVar3 = true;
            }
            else if (iVar5 == 3) {
              bVar4 = true;
            }
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x20);
        local_8e08 = local_8e08 + 1;
        if (((local_8e08 == 0x100) || (local_8e10 == (char *)0x0)) || (*local_8e10 == '\n'))
        goto LAB_004890bf;
        pcVar6 = (char *)FUN_004c0350(&local_8e10);
      } while( true );
    }
    local_8df8 = 0;
    local_8df4 = 0;
    local_8df0 = 0;
    local_8dec = 0;
    local_8de8 = 0;
    local_8de4 = 0;
    local_8de0 = 0;
    local_8ddc = 0;
    FUN_006443f0(local_85d8,&DAT_00724f30);
    iVar5 = 0;
    while( true ) {
      iVar7 = aiStack_8400[iVar5];
      pcVar8 = pcVar6;
      do {
        cVar1 = *pcVar8;
        (acStack_8000 + (iVar7 * 0x400 - (int)pcVar6))[(int)pcVar8] = cVar1;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      if (*pcVar6 != '\0') {
        FUN_00644d60(&DAT_00724f30,param_2,param_1,pcVar6);
      }
      iVar7 = local_8e08;
      iVar5 = iVar5 + 1;
      if (iVar5 == local_8e08) break;
      pcVar6 = (char *)FUN_004c0350(&local_8e10);
    }
    if ((local_8df8._1_1_ == '\0') || (local_8df8._3_1_ == '\0')) {
      FUN_004b22d0(1,&DAT_006dbad8,param_1);
    }
    if ((char)local_8df4 != '\0') {
      pcVar6 = local_7000;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      iVar5 = (int)pcVar6 - (int)(local_7000 + 1);
      iVar9 = 0;
      if (0 < iVar5) {
        do {
          cVar1 = local_7000[iVar9];
          if ((((cVar1 < 'A') || ('Z' < cVar1)) && ((cVar1 < '0' || ('9' < cVar1)))) &&
             (cVar1 != '_')) {
            if (iVar9 < iVar5) goto LAB_0048926c;
            break;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar5);
      }
      iVar5 = FUN_0042f2a0(local_7000,"SUBTITLE_",9);
      if ((iVar5 != 0) || (iVar5 = FUN_00645220(), iVar5 == 0)) {
LAB_0048926c:
        iVar5 = local_8e0c;
        iVar9 = 0;
        if (0 < iVar7) {
          do {
            iVar2 = aiStack_8400[iVar9];
            if ((iVar2 == 0) || (*(char *)((int)&local_8df8 + iVar2) == '\0')) {
              if (iVar9 != iVar7 + -1) {
                FUN_004576c0(&DAT_006fd944,1,iVar5);
              }
            }
            else if (iVar2 == 4) {
              iVar7 = FUN_00645300();
              if (iVar7 == 0) {
                if (local_8df8._2_1_ == '\0') {
                  FUN_00413de0(local_89d8,0x400,&DAT_00727698,"SUBTITLE_",local_7c00);
                }
                else {
                  FUN_00413de0(local_89d8,0x400,"%s%s_%s","SUBTITLE_",local_7c00,local_7800);
                }
                pcVar6 = (char *)FUN_004e49d0(local_89d8);
                FUN_006454f0(local_7000);
                local_8e00 = local_8e00 + 1;
              }
              else {
                FUN_00413de0(local_89d8,0x400,&DAT_00727698,"SUBTITLE_",iVar7);
                pcVar6 = (char *)FUN_004e49d0(local_89d8);
              }
              pcVar8 = pcVar6;
              do {
                cVar1 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar1 != '\0');
              FUN_004576c0(pcVar6,(int)pcVar8 - (int)(pcVar6 + 1),iVar5);
              iVar7 = local_8e08;
            }
            else {
              pcVar6 = acStack_8000 + iVar2 * 0x400;
              if (iVar9 == iVar7 + -1) {
                iVar7 = FUN_006b5a60(pcVar6,0x2c);
                if (((iVar7 == 0) && (iVar7 = FUN_006b5a60(pcVar6,0x20), iVar7 == 0)) &&
                   ((iVar7 = FUN_006b5a60(pcVar6,10), iVar7 == 0 &&
                    (iVar7 = FUN_006b5a60(pcVar6,0xd), iVar7 == 0)))) {
                  pcVar8 = "%s";
                }
                else {
                  pcVar8 = "\"%s\"";
                }
              }
              else {
                iVar7 = FUN_006b5a60(pcVar6,0x2c);
                if ((((iVar7 == 0) && (iVar7 = FUN_006b5a60(pcVar6,0x20), iVar7 == 0)) &&
                    (iVar7 = FUN_006b5a60(pcVar6,10), iVar7 == 0)) &&
                   (iVar7 = FUN_006b5a60(pcVar6,0xd), iVar7 == 0)) {
                  pcVar8 = "%s,";
                }
                else {
                  pcVar8 = "\"%s\",";
                }
              }
              pcVar8 = (char *)FUN_004785b0(pcVar8,pcVar6);
              pcVar6 = pcVar8;
              do {
                cVar1 = *pcVar6;
                pcVar6 = pcVar6 + 1;
              } while (cVar1 != '\0');
              FUN_004576c0(pcVar8,(int)pcVar6 - (int)(pcVar8 + 1),iVar5);
              iVar7 = local_8e08;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar7);
        }
        FUN_004576c0(&DAT_006e578c,2,iVar5);
        FUN_004b8300(&local_8e10);
        goto joined_r0x00488fa5;
      }
    }
    FUN_004b8300(&local_8e10);
    FUN_004576c0(local_8e04,(int)local_8e10 - (int)local_8e04,local_8e0c);
  } while( true );
LAB_004890bf:
  if ((!bVar3) || (!bVar4)) {
    FUN_004b22d0(1,&DAT_007037ec,param_1);
  }
  FUN_004b8300(&local_8e10);
  pcVar6 = local_8e04;
  if (*local_8e04 == '\n') {
    FUN_004576c0(&DAT_006f398c,1,local_8e0c);
  }
  iVar5 = (int)local_8e10 - (int)pcVar6;
LAB_004894f5:
  FUN_004576c0(pcVar6,iVar5,local_8e0c);
  goto joined_r0x00488fa5;
}

