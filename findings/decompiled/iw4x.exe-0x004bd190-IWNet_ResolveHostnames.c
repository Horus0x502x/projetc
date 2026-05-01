// iw4x.exe!IWNet_ResolveHostnames  @  0x004bd190
// taille body : 385 octets
// pas d'ASLR -> adresse identique au runtime
// decompile par Ghidra 12.0.4 PUBLIC


void FUN_004bd190(undefined4 param_1,char *param_2,char *param_3,undefined4 param_4,char *param_5,
                 char *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_066bb08d == '\0') {
    if (DAT_066bb08c == '\0') {
      iVar1 = DAT_066bb66c * DAT_066bb66c * 100;
      if (3000 < iVar1) {
        iVar1 = 3000;
      }
      iVar2 = FUN_0042a660();
      if (iVar1 + DAT_066bb668 <= iVar2) {
        if (6 < DAT_066bb66c) {
          DAT_066bb08d = 1;
          return;
        }
        DAT_066bb668 = FUN_0042a660();
        DAT_066bb66c = DAT_066bb66c + 1;
        FUN_0050afb0();
        if (param_6 == (char *)0x0) {
          param_6 = "devnet.infinityward.net";
        }
        iVar1 = FUN_0044e230(param_6,&DAT_066c714c);
        if (param_2 == (char *)0x0) {
          param_2 = "devnet.infinityward.net";
        }
        iVar2 = FUN_0044e230(param_2,&DAT_066bb650);
        if (iVar2 == 0) {
          FUN_004e0200(0xe,"Couldn\'t resolve iw.net matchmaking server hostname.\n");
        }
        if (param_3 == (char *)0x0) {
          param_3 = "devnet.infinityward.net";
        }
        iVar3 = FUN_0044e230(param_3,&DAT_066bb090);
        if (iVar3 == 0) {
          FUN_004e0200(0xe,"Couldn\'t resolve iw.net storage server hostname.\n");
        }
        if (param_5 == (char *)0x0) {
          param_5 = "devnet.infinityward.net";
        }
        iVar4 = FUN_0044e230(param_5,&DAT_066bb078);
        if (iVar4 != 0) {
          if (iVar3 != 0 && (iVar2 != 0 && iVar1 != 0)) {
            DAT_066bb08c = '\x01';
          }
          FUN_0050afe0();
          return;
        }
        FUN_004e0200(0xe,"Couldn\'t resolve iw.net ip server hostname.\n");
        FUN_0050afe0();
        return;
      }
    }
    return;
  }
  if (DAT_0107fcfc == 0) {
    if (DAT_010833fc == 0) {
      return;
    }
  }
  else {
    FUN_00413a70(&DAT_0107e500);
    if (DAT_010833fc == 0) goto LAB_004bd1cf;
  }
  FUN_00413a70(&DAT_01081c00);
LAB_004bd1cf:
  FUN_004a9510(DAT_00b2bb48,0);
  FUN_004b22d0(1,"EXE_DNSFAILURE");
  return;
}

