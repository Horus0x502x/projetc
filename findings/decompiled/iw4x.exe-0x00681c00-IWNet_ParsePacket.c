// iw4x.exe!IWNet_ParsePacket  @  0x00681c00
// taille body : 208 octets
// pas d'ASLR -> adresse identique au runtime
// decompile par Ghidra 12.0.4 PUBLIC


void FUN_00681c00(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  uVar2 = MSG_ReadByte(param_1);
  MSG_ReadByte(param_1);
  sVar1 = MSG_ReadShort(param_1);
  iVar3 = MSG_ReadByte(param_1);
  uVar4 = MSG_ReadByte(param_1);
  if (*param_1 != 0) {
    Print(0x19,"IWNet: truncated iwnet packet - only %i bytes long\n",param_1[5]);
    return;
  }
  pcVar5 = (char *)FUN_004c4750(uVar2);
  if (pcVar5 == (char *)0x0) {
    Print(0x19,"IWNet: corrupt packet referring to IWNet command slot %i\n",uVar2);
    return;
  }
  if (*pcVar5 != '\0') {
    if (*(short *)(pcVar5 + 2) != sVar1) {
      FUN_004e0200(0x19,
                   "IWNet_Matchmaking_ParsePacket(): out of sequence packet (expected %i, got %i), so ignoring packet.\n"
                   ,*(short *)(pcVar5 + 2),sVar1);
      return;
    }
    if (*(int *)(pcVar5 + 8) != iVar3) {
      Print(0x19,
            "IWNet: Received a response for command %i, but command %i is a %i command and this is a %i command\n"
            ,uVar2,uVar2,*(int *)(pcVar5 + 8),iVar3);
      return;
    }
    FUN_004b7ab0(pcVar5,uVar4,param_1);
  }
  return;
}

