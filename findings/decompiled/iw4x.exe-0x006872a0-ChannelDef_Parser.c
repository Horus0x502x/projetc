// iw4x.exe!ChannelDef_Parser  @  0x006872a0
// taille body : 795 octets
// pas d'ASLR -> adresse identique au runtime
// decompile par Ghidra 12.0.4 PUBLIC


void FUN_006872a0(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  char local_40 [64];
  
  DAT_066d54f8 = 0;
  FUN_004aab80("soundaliases/channels.def");
  FUN_004e8650(1);
  pcVar3 = (char *)FUN_00474d60(&param_1);
  do {
    if (param_1 == 0) {
      FUN_004b80b0();
      return;
    }
    if ((*pcVar3 != '\0') && (*pcVar3 != '#')) {
      pcVar4 = pcVar3;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (0x40 < (uint)((int)pcVar4 - (int)(pcVar3 + 1))) {
        FUN_004b80b0();
        FUN_004b22d0(1,"channel name too long (max chars %d): %s in file [%s].\n",0x40,pcVar3,
                     "soundaliases/channels.def");
      }
      iVar5 = -(int)pcVar3;
      do {
        cVar1 = *pcVar3;
        pcVar3[(int)(local_40 + iVar5)] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      pcVar3 = (char *)FUN_004c0350(&param_1);
      if (*pcVar3 == '\0') {
        (&DAT_066d4030)[DAT_066d54f8 * 0x14] = 0;
      }
      else {
        lVar6 = _atol(pcVar3);
        (&DAT_066d4030)[DAT_066d54f8 * 0x14] = lVar6;
      }
      pcVar3 = (char *)FUN_004c0350(&param_1);
      if (*pcVar3 == '\0') {
LAB_006873d1:
        uVar2 = 0;
      }
      else {
        iVar5 = FUN_004dcf20(pcVar3,&DAT_00736468);
        if (iVar5 != 0) {
          iVar5 = FUN_004dcf20(pcVar3,&DAT_007348e4);
          if (iVar5 != 0) {
            Print(9,"unknown value (%s), should be either \'%s\' or \'%s\'.  using default: %d.\n",
                  pcVar3,&DAT_00736468,&DAT_007348e4,0);
          }
          goto LAB_006873d1;
        }
        uVar2 = 1;
      }
      (&DAT_066d4034)[DAT_066d54f8 * 0x50] = uVar2;
      pcVar3 = (char *)FUN_004c0350(&param_1);
      if ((*pcVar3 == '\0') || (iVar5 = FUN_004dcf20(pcVar3,"restricted"), iVar5 == 0)) {
LAB_0068743c:
        uVar2 = 1;
      }
      else {
        iVar5 = FUN_004dcf20(pcVar3,"unrestricted");
        if (iVar5 != 0) {
          Print(9,"unknown value (%s), should be either \'%s\' or \'%s\'.  using default: %d.\n",
                pcVar3,"restricted","unrestricted",1);
          goto LAB_0068743c;
        }
        uVar2 = 0;
      }
      (&DAT_066d4035)[DAT_066d54f8 * 0x50] = uVar2;
      pcVar3 = (char *)FUN_004c0350(&param_1);
      if ((*pcVar3 == '\0') || (iVar5 = FUN_004dcf20(pcVar3,"pause"), iVar5 == 0)) {
LAB_006874a7:
        uVar2 = 1;
      }
      else {
        iVar5 = FUN_004dcf20(pcVar3,"nopause");
        if (iVar5 != 0) {
          Print(9,"unknown value (%s), should be either \'%s\' or \'%s\'.  using default: %d.\n",
                pcVar3,"pause","nopause",1);
          goto LAB_006874a7;
        }
        uVar2 = 0;
      }
      (&DAT_066d4036)[DAT_066d54f8 * 0x50] = uVar2;
      pcVar3 = (char *)FUN_004c0350(&param_1);
      if (*pcVar3 == '\0') {
        lVar6 = 0x34;
      }
      else {
        lVar6 = _atol(pcVar3);
        if (lVar6 < 1) {
          pcVar4 = local_40;
          pcVar7 = 
          "channel \'%s\' has nonnumeric or negative value (%s) in file [%s], defaulting to max (%i).\n"
          ;
        }
        else {
          if (lVar6 < 0x35) goto LAB_0068751f;
          pcVar3 = local_40;
          pcVar4 = (char *)0x34;
          pcVar7 = 
          "max number (%d) of voices exceeded for channel \'%s\' in file [%s], defaulting to max (%i).\n"
          ;
        }
        lVar6 = 0x34;
        Print(9,pcVar7,pcVar4,pcVar3,"soundaliases/channels.def",0x34);
      }
LAB_0068751f:
      pcVar3 = local_40;
      pcVar4 = &DAT_066d3ff0 + DAT_066d54f8 * 0x50;
      do {
        cVar1 = *pcVar3;
        *pcVar4 = cVar1;
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      (&DAT_066d4038)[DAT_066d54f8 * 0x14] = lVar6;
      (&DAT_066d403c)[DAT_066d54f8 * 0x14] = 0;
      DAT_066d54f8 = DAT_066d54f8 + 1;
      if (0x40 < DAT_066d54f8) {
        FUN_004b80b0();
        FUN_004b22d0(1,"channel definition file exceeded max number of channels (%d).\n",0x40);
      }
    }
    FUN_004b8300(&param_1);
    pcVar3 = (char *)FUN_00474d60(&param_1);
  } while( true );
}

