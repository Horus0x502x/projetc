// iw4x.exe!FS_FOpenFileWrite  @  0x0043fd90
// taille body : 216 octets
// pas d'ASLR -> adresse identique au runtime
// decompile par Ghidra 12.0.4 PUBLIC


int FUN_0043fd90(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_100 [256];
  
  cVar1 = FUN_004c37d0();
  iVar2 = FUN_00439df0((-(uint)(cVar1 != '\0') & 0xfffffffd) + 3);
  iVar3 = DAT_063d4fd8;
  iVar5 = iVar2 * 0x11c;
  *(undefined4 *)(&DAT_063d4ff4 + iVar5) = 0;
  FUN_00642120(*(undefined4 *)(iVar3 + 0x10),&DAT_063d0bb8,param_1);
  if (*(int *)(DAT_063d0cc8 + 0x10) != 0) {
    Com_DPrintf(10,"FS_FOpenFileWrite: %s\n",local_100);
  }
  iVar3 = FUN_0048f900(local_100);
  if (iVar3 != 0) {
    return 0;
  }
  uVar4 = FUN_004c0880(local_100);
  *(undefined4 *)(&DAT_063d4fe0 + iVar5) = uVar4;
  I_strncpyz(&DAT_063d4ffc + iVar5,param_1,0x100);
  *(undefined4 *)(&DAT_063d4fe8 + iVar5) = 0;
  if (*(int *)(&DAT_063d4fe0 + iVar5) == 0) {
    iVar2 = 0;
  }
  return iVar2;
}

