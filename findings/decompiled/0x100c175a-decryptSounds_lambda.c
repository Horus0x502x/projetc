// Adresse runtime : 0x100c175a  (pas d'ASLR -> 1:1)
// Label heuristique : decryptSounds_lambda
// Taille body : 353 octets
// Decompile par Ghidra 12.0.4 PUBLIC


int FUN_100c175a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 local_38 [4];
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24 [2];
  int *local_1c;
  int local_18;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d0788;
  local_10 = ExceptionList;
  uVar2 = DAT_10342100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_10003e2e(&DAT_103435c0);
  local_8 = 0;
  FUN_100c4826(local_14,&param_3);
  uVar3 = FUN_1006af98(local_38);
  cVar1 = FUN_1005e0c5(uVar3);
  if (cVar1 == '\0') {
    FUN_100c4809(uVar2);
    cVar1 = FUN_1001d69f();
    if (cVar1 == '\0') {
      FUN_100c4809();
      iVar4 = FUN_1000736f();
      iVar5 = FUN_100c4809();
      local_24[0] = iVar4 - *(int *)(iVar5 + 4);
      piVar6 = (int *)FUN_1000413d(&param_2,local_24);
      local_18 = *piVar6;
      local_2c = FUN_100c4809();
      local_2c = local_2c + 0xc;
      iVar4 = FUN_100c4809();
      local_28 = *(undefined4 *)(iVar4 + 4);
      iVar4 = local_18;
      uVar3 = FUN_1002ea42(local_28);
      FUN_1018fff0(param_1,uVar3,iVar4);
      iVar4 = FUN_100c4809();
      local_1c = (int *)(iVar4 + 4);
      *local_1c = *local_1c + local_18;
      local_30 = local_18;
      local_8 = 0xffffffff;
      FUN_10003e45();
      ExceptionList = local_10;
      return local_30;
    }
  }
  local_34 = FUN_100c174f(param_1,param_2,param_3);
  local_8 = 0xffffffff;
  FUN_10003e45();
  ExceptionList = local_10;
  return local_34;
}

