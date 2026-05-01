// iw4x.exe!FS_FOpenFileOverWrite  @  0x00412200
// taille body : 145 octets
// pas d'ASLR -> adresse identique au runtime
// decompile par Ghidra 12.0.4 PUBLIC


undefined4 FUN_00412200(undefined4 param_1)

{
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  CHAR local_100 [256];
  
  iVar1 = FUN_004a9920(param_1,local_100);
  if (iVar1 < 0) {
    FUN_004b22d0(1,
                 "FS_FOpenFileOverWrite: Failed to open %s for writing.  It either does not exist or is in a iwd file."
                 ,param_1);
    return 0;
  }
  if (*(int *)(DAT_063d0cc8 + 0x10) != 0) {
    Com_DPrintf(10,"FS_FOpenFileOverWrite: %s\n",local_100);
  }
  DVar2 = GetFileAttributesA(local_100);
  if ((DVar2 & 0xfffffffe) != DVar2) {
    SetFileAttributesA(local_100,DVar2 & 0xfffffffe);
  }
  uVar3 = FUN_006421e0(param_1,0);
  return uVar3;
}

