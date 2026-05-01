// iw4x.exe!Cmd_AddCommand  @  0x00470090
// taille body : 79 octets
// pas d'ASLR -> adresse identique au runtime
// decompile par Ghidra 12.0.4 PUBLIC


void FUN_00470090(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_004a5510(param_1);
  if (iVar1 == 0) {
    param_3[1] = param_1;
    param_3[4] = param_2;
    param_3[5] = param_4;
    *param_3 = DAT_01aac658;
    DAT_01aac658 = param_3;
  }
  else if (param_2 != 0) {
    Com_DPrintf(0x10,"Cmd_AddCommand: %s already defined\n",param_1);
    return;
  }
  return;
}

