// iw4x.exe!Cmd_AddServerCommand  @  0x004dce00
// taille body : 137 octets
// pas d'ASLR -> adresse identique au runtime
// decompile par Ghidra 12.0.4 PUBLIC


void FUN_004dce00(byte *param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  puVar2 = DAT_01aac654;
  do {
    if (puVar2 == (undefined4 *)0x0) {
      FUN_0046fae0();
      param_3[1] = param_1;
      param_3[4] = param_2;
      param_3[5] = 0;
      *param_3 = DAT_01aac654;
      DAT_01aac654 = param_3;
      return;
    }
    pbVar5 = (byte *)puVar2[1];
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_004dce36:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_004dce3b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_004dce36;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_004dce3b:
    if (iVar4 == 0) {
      if (param_2 == 0) {
        return;
      }
      Com_DPrintf(0x10,"Cmd_AddServerCommand: %s already defined\n",param_1);
      return;
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}

