// iw4x.exe!IWNet_SendCommand  @  0x00681630
// taille body : 236 octets
// pas d'ASLR -> adresse identique au runtime
// decompile par Ghidra 12.0.4 PUBLIC


undefined4 FUN_00681630(void)

{
  char cVar1;
  int unaff_EDI;
  
  cVar1 = FUN_004be4f0();
  if (cVar1 == '\0') {
    cVar1 = FUN_004a8730();
    if (cVar1 != '\0') {
      if (*(char *)(DAT_066bb128 + 0x10) != '\0') {
        Com_DPrintf(0x19,"Sending storage command\n");
      }
      FUN_004d95d0();
      FUN_004e58f0();
      return 1;
    }
    cVar1 = FUN_006817e0();
    if (cVar1 != '\0') {
      if (*(char *)(DAT_066bb128 + 0x10) != '\0') {
        Com_DPrintf(0x19,"Sending external IP request command\n");
      }
      FUN_0047ae10();
      FUN_00443b60();
      return 1;
    }
    FUN_004b22d0(1,"Invalid IWNet command %i",*(undefined4 *)(unaff_EDI + 4));
  }
  else {
    cVar1 = FUN_004d1130();
    if (cVar1 != '\0') {
      if (*(char *)(DAT_066bb128 + 0x10) != '\0') {
        Com_DPrintf(0x19,"Sending matchmaking command\n");
      }
      FUN_004acaa0();
      cVar1 = FUN_0044e590();
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

