// iw4x.exe!FS_FOpenFileAppend  @  0x00410bb0
// taille body : 208 octets
// pas d'ASLR -> adresse identique au runtime
// decompile par Ghidra 12.0.4 PUBLIC


int FUN_00410bb0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_100 [256];
  
  cVar1 = FUN_004c37d0();
  iVar2 = FUN_00439df0((-(uint)(cVar1 != '\0') & 0xfffffffd) + 3);
  iVar4 = iVar2 * 0x11c;
  *(undefined4 *)(&DAT_063d4ff4 + iVar4) = 0;
  I_strncpyz(&DAT_063d4ffc + iVar4,param_1,0x100);
  FUN_00642120(*(undefined4 *)(DAT_063d4fd8 + 0x10),&DAT_063d0bb8,param_1);
  if (*(int *)(DAT_063d0cc8 + 0x10) != 0) {
    Com_DPrintf(10,"FS_FOpenFileAppend: %s\n",local_100);
  }
  iVar3 = FUN_0048f900(local_100);
  if (iVar3 != 0) {
    return 0;
  }
  iVar3 = FUN_004d7de0(local_100);
  *(int *)(&DAT_063d4fe0 + iVar4) = iVar3;
  *(undefined4 *)(&DAT_063d4fe8 + iVar4) = 0;
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  return iVar2;
}

