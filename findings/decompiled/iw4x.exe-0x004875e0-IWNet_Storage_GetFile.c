// iw4x.exe!IWNet_Storage_GetFile  @  0x004875e0
// taille body : 318 octets
// pas d'ASLR -> adresse identique au runtime
// decompile par Ghidra 12.0.4 PUBLIC


undefined4 FUN_004875e0(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined *puVar7;
  
  puVar7 = &DAT_01ad2278 + param_1 * 0x80;
  piVar3 = (int *)FUN_004303d0(puVar7);
  uVar6 = (uint)(byte)(&DAT_01ad22ed)[param_1 * 0x80];
  cVar2 = FUN_004351c0(uVar6);
  if (cVar2 == '\0') {
    FUN_004eb090(puVar7);
    FUN_004e0200(0x10,"Refusing to accept online stats because we are connected to a server\n");
    return 2;
  }
  iVar1 = *piVar3;
  FUN_004eb090(puVar7);
  if (iVar1 == 0) {
    FUN_0060a090(&DAT_01ad2240 + uVar6 * 0x10);
    cVar2 = FUN_004ac750(uVar6);
    if ((cVar2 != '\0') || (*(char *)(DAT_0649d664 + 0x10) != '\0')) {
      Com_DPrintf(0x10,"Successfully read stats data from IWNet\n");
      FUN_004c04c0(uVar6,0,0);
      cVar2 = FUN_004830c0(uVar6,0);
      if (cVar2 == '\0') {
        return 1;
      }
    }
    cVar2 = FUN_0046bc00(uVar6);
    if (cVar2 != '\0') {
      uVar5 = FUN_00449e30(uVar6);
      FUN_004e8940(uVar5);
    }
    FUN_00444830(0,&DAT_006fac0d);
    return 1;
  }
  iVar4 = uVar6 * 0x10;
  *(int *)(&DAT_01ad2240 + iVar4) = *(int *)(&DAT_01ad2240 + iVar4) + 1;
  if (2 < *(int *)(&DAT_01ad2240 + iVar4)) {
    *(int *)(&DAT_01ad2244 + iVar4) = *(int *)(&DAT_01ad2244 + iVar4) + 1;
    *(undefined4 *)(&DAT_01ad2240 + iVar4) = 0;
    *(int *)(&DAT_01ad2248 + iVar4) = *(int *)(&DAT_01ad2248 + iVar4) * 5;
  }
  if (iVar1 != 1) {
    uVar5 = FUN_004fb3a0(iVar1);
    Print(0x10,"Error %i (\'%s\') from IWNet_Storage_GetFile()\n",iVar1,uVar5);
    return 2;
  }
  FUN_0060a5a0();
  return 1;
}

