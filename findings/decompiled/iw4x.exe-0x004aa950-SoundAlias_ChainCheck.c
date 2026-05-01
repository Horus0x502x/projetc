// iw4x.exe!SoundAlias_ChainCheck  @  0x004aa950
// taille body : 273 octets
// pas d'ASLR -> adresse identique au runtime
// decompile par Ghidra 12.0.4 PUBLIC


void FUN_004aa950(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_c [12];
  
  if (*(int *)((&DAT_066d554c)[param_1 * 0x22] + 0xc) != 0) {
    uVar1 = (&DAT_066d5508)[param_1 * 0x22];
    FUN_004424c0(uVar1,&DAT_066d556c + param_1 * 0x88,local_c);
    iVar2 = FUN_004abad0(*(undefined4 *)((&DAT_066d554c)[param_1 * 0x22] + 0xc));
    if (iVar2 != (&DAT_066d554c)[param_1 * 0x22]) {
      if (param_1 < 0x28) {
        if (param_1 < 8) {
          FUN_004179c0(param_1);
        }
        else {
          FUN_004179c0(param_1);
        }
      }
      else {
        FUN_00430bf0();
      }
      if (iVar2 != 0) {
        FUN_004e5e90(iVar2,uVar1,local_c,0,1);
      }
      return;
    }
    Print(9,"Soundalias \"%s\" is trying to chain to itself - check sound .csv files and correct.\n"
          ,*(undefined4 *)((&DAT_066d554c)[param_1 * 0x22] + 0xc));
    if (0x27 < param_1) {
      FUN_00430bf0();
      return;
    }
    if (7 < param_1) {
      FUN_004179c0(param_1);
      return;
    }
    FUN_004179c0(param_1);
    return;
  }
  if (0x27 < param_1) {
    FUN_00430bf0();
    return;
  }
  if (7 < param_1) {
    FUN_004179c0(param_1);
    return;
  }
  FUN_004179c0(param_1);
  return;
}

