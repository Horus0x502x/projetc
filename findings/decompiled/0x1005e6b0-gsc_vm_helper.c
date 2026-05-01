// Adresse runtime : 0x1005e6b0  (pas d'ASLR -> 1:1)
// Label heuristique : gsc_vm_helper
// Taille body : 428 octets
// Decompile par Ghidra 12.0.4 PUBLIC


void FUN_1005e6b0(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  if (((DAT_103bd8f0 != 0) && (*(int *)(DAT_10343748 + 0x20030) != 2)) &&
     (*(int *)(DAT_10343748 + 0x20030) != 3)) {
    uVar6 = param_2 & 0xfffffffe;
    if (*(char *)(DAT_10343748 + 0x2002d) != '\0') {
      uVar6 = param_2;
    }
    uVar7 = (DAT_103bd8c4 + 1) * 0x18;
    if (DAT_103bd8c0 <= uVar7 && uVar7 - DAT_103bd8c0 != 0) {
      if (0xffffff < DAT_103bd8c0) {
        (*(code *)0x43d570)("MAX_OPCODE_LOOKUP_SIZE exceeded");
      }
      FUN_100c646e();
      DAT_103bd8c0 = DAT_103bd8c0 + 0x20000;
    }
    if (DAT_103bd8cc < DAT_103bd8d0 * 8 + 8U) {
      if (0x7fffff < DAT_103bd8cc) {
        (*(code *)0x43d570)("MAX_SOURCEPOS_LOOKUP_SIZE exceeded");
      }
      FUN_100c646e();
      DAT_103bd8cc = DAT_103bd8cc + 0x20000;
    }
    iVar9 = *(int *)(DAT_10343748 + 0x20034);
    if (DAT_103bd8d8 == iVar9) {
      DAT_103bd8c4 = DAT_103bd8c4 + -1;
      piVar8 = (int *)(DAT_103bd8c4 * 0x18 + DAT_103bd8bc);
    }
    else {
      DAT_103bd8dc = 0;
      piVar8 = (int *)(DAT_103bd8c4 * 0x18 + DAT_103bd8bc);
      DAT_103bd8d8 = iVar9;
      piVar8[1] = DAT_103bd8d0;
      *piVar8 = iVar9;
    }
    iVar9 = DAT_103bd8c8;
    iVar10 = piVar8[1] + DAT_103bd8dc;
    *(int *)(DAT_103bd8c8 + iVar10 * 8) = param_1;
    iVar3 = DAT_103bd8e8;
    iVar2 = DAT_103bd8c8;
    iVar4 = iVar10;
    iVar5 = DAT_103bd8ec;
    if (((param_1 != -1) && (iVar4 = DAT_103bd8e8, iVar5 = iVar10, param_1 != -2)) &&
       ((iVar9 = iVar2, iVar5 = DAT_103bd8ec, -1 < DAT_103bd8e8 && ((uVar6 & 1) != 0)))) {
      DAT_103bd8e8 = -1;
      *(int *)(DAT_103bd8c8 + iVar3 * 8) = param_1;
      iVar4 = DAT_103bd8e8;
      iVar5 = DAT_103bd8ec;
    }
    DAT_103bd8ec = iVar5;
    DAT_103bd8e8 = iVar4;
    puVar1 = (uint *)(iVar9 + 4 + iVar10 * 8);
    *puVar1 = *puVar1 | uVar6;
    DAT_103bd8dc = DAT_103bd8dc + 1;
    DAT_103bd8c4 = DAT_103bd8c4 + 1;
    DAT_103bd8d0 = DAT_103bd8d0 + 1;
    *(short *)(piVar8 + 2) = (short)DAT_103bd8dc;
  }
  return;
}

