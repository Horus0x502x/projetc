// Adresse runtime : 0x100c18c6  (pas d'ASLR -> 1:1)
// Label heuristique : decryptImages_lambda
// Taille body : 162 octets
// Decompile par Ghidra 12.0.4 PUBLIC


void FUN_100c18c6(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 local_20 [4];
  undefined1 local_1c [8];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d07b2;
  local_10 = ExceptionList;
  uVar2 = DAT_10342100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_10003e2e(&DAT_103435c0);
  local_8 = 0;
  FUN_100c18bb(param_1,uVar2);
  FUN_100c4826(&local_14,&param_1);
  uVar3 = FUN_1006af98(local_1c);
  cVar1 = FUN_1005e0c5(uVar3);
  if (cVar1 == '\0') {
    FUN_100c4658(local_20,local_14);
  }
  local_8 = 0xffffffff;
  FUN_10003e45();
  ExceptionList = local_10;
  return;
}

