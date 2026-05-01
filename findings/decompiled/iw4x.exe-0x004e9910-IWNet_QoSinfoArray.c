// iw4x.exe!IWNet_QoSinfoArray  @  0x004e9910
// taille body : 403 octets
// pas d'ASLR -> adresse identique au runtime
// decompile par Ghidra 12.0.4 PUBLIC


undefined4 FUN_004e9910(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  iVar2 = MSG_ReadByte(param_2);
  iVar3 = MSG_ReadByte(param_2);
  if (*(int *)(param_1 + 0x10 + (uint)(0 < iVar3) * 4) == 0) {
    *(undefined4 *)(param_1 + 0x10 + (uint)(0 < iVar3) * 4) = 1;
    if (*(char *)(DAT_066c639c + 0x10) != '\0') {
      Com_DPrintf(0x19,
                  "IWNet search success - total of %i results, this packet starts at result %i!\n",
                  iVar2,iVar3);
    }
    DAT_010833f8 = 0;
    iVar4 = FUN_004351f0(&DAT_01081c00);
    if (((iVar4 == 0) || (DAT_0649e728 != '\0')) || (iVar2 == 0)) {
      FUN_004da2e0();
    }
    else {
      puVar5 = &DAT_066bcac0 + iVar3 * 0x3c;
      FUN_004527c0(param_2,puVar5,0x3c);
      iVar4 = *param_2;
      while (iVar4 == 0) {
        if (*(char *)(DAT_066c639c + 0x10) != '\0') {
          Com_DPrintf(0x19,"IWNet adding session with id (%llx) to QoSinfoArray at slot %i.\n",
                      puVar5,iVar3);
        }
        *(undefined **)(&DAT_066bc9f8 + iVar3 * 4) = puVar5;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
        FUN_0048af60(&DAT_01081c00,puVar5,0x12,0,1,0);
        puVar5 = puVar5 + 0x3c;
        iVar3 = iVar3 + 1;
        FUN_004527c0(param_2,puVar5,0x3c);
        iVar4 = *param_2;
      }
      iVar3 = iVar2;
      if (0x32 < iVar2) {
        iVar3 = 0x32;
      }
      if (*(int *)(param_1 + 0xc) != iVar3) {
        return 0;
      }
      FUN_004da2e0();
      if (DAT_010833f4 == 0) {
        FUN_004ac4c0(uVar1,iVar2,&DAT_066bc9f8);
        return 1;
      }
    }
  }
  return 1;
}

