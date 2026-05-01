// iw4x.exe!FS_FOpenFileWrite_alt  @  0x00642250
// taille body : 115 octets
// pas d'ASLR -> adresse identique au runtime
// decompile par Ghidra 12.0.4 PUBLIC


undefined4 FUN_00642250(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_100 [256];
  
  FUN_00642120(*(undefined4 *)(DAT_063d4fd8 + 0x10));
  if (*(int *)(DAT_063d0cc8 + 0x10) != 0) {
    Com_DPrintf(10,"FS_FOpenFileWrite: %s\n",local_100);
  }
  iVar1 = FUN_0048f900(local_100);
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_006421e0();
  return uVar2;
}

