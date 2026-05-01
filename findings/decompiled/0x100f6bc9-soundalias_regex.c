// Adresse runtime : 0x100f6bc9  (pas d'ASLR -> 1:1)
// Label heuristique : soundalias_regex
// Taille body : 426 octets
// Decompile par Ghidra 12.0.4 PUBLIC


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_100f6bc9(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_88;
  int local_84;
  undefined4 *local_70;
  int local_48 [2];
  undefined4 local_40;
  int local_3c;
  int local_38;
  undefined4 *local_34;
  char local_2d;
  undefined1 local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x80;
  local_8 = 0x100f6bd8;
  local_40 = 0;
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x40) < DAT_10635c54) {
    puVar5 = &DAT_10635c54;
    FUN_1018e1c4(&DAT_10635c54);
    if (DAT_10635c54 == -1) {
      local_8 = 1;
      FUN_10074109("(?:\\.v\\[\"soundalias\"\\] *= *\"(.+)\")",puVar5);
      FUN_1018dfa4(&LAB_101e0698);
      FUN_1018e173(&DAT_10635c54);
    }
  }
  FUN_100718c3();
  local_8 = 2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_40 = 1;
  local_34 = param_2;
  puVar5 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar5 = (undefined4 *)*param_2;
    local_34 = puVar5;
  }
  while( true ) {
    puVar4 = param_2;
    if (0xf < (uint)param_2[5]) {
      puVar4 = (undefined4 *)*param_2;
    }
    cVar2 = FUN_10074226(puVar5,param_2[4] + (int)puVar4,puVar4,puVar5);
    if (cVar2 == '\0') break;
    local_3c = local_88;
    local_38 = local_84;
    local_2d = '\x01';
    iVar3 = local_84;
    if (local_88 != local_84) {
      do {
        if (local_2d == '\0') {
          FUN_100741d1(local_2c);
          local_8 = CONCAT31(local_8._1_3_,3);
          local_48[0] = FUN_100d370e(0xb,local_2c);
          local_34 = local_70;
          if (local_48[0] != 0) {
            piVar1 = (int *)param_1[1];
            if (piVar1 == (int *)param_1[2]) {
              FUN_1006ed69(piVar1,local_48);
            }
            else {
              *piVar1 = local_48[0];
              param_1[1] = param_1[1] + 4;
            }
          }
          local_8 = CONCAT31(local_8._1_3_,2);
          FUN_100075a4();
          iVar3 = local_38;
          puVar5 = local_70;
        }
        else {
          local_2d = '\0';
          puVar5 = local_34;
        }
        local_3c = local_3c + 0xc;
      } while (local_3c != iVar3);
    }
  }
  FUN_10053867();
  FUN_1018e9fc();
  return;
}

