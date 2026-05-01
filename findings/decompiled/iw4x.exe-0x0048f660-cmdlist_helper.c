// iw4x.exe!cmdlist_helper  @  0x0048f660
// taille body : 424 octets
// pas d'ASLR -> adresse identique au runtime
// decompile par Ghidra 12.0.4 PUBLIC


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Cmd_Init(void)

{
  int iVar1;
  
  DAT_01aac5d0 = 0xffffffff;
  _DAT_01ad2158 = 0;
  _DAT_01ad215c = 0;
  DAT_01acf8a0 = 0xffffffff;
  _DAT_01aaf098 = 0;
  _DAT_01aaf09c = 0;
  iVar1 = FUN_004a5510("cmdlist");
  if (iVar1 == 0) {
    _DAT_01ad21ac = "cmdlist";
    _DAT_01ad21b8 = &LAB_00427c10;
    _DAT_01ad21bc = 0;
    _DAT_01ad21a8 = DAT_01aac658;
    DAT_01aac658 = &DAT_01ad21a8;
  }
  else {
    Com_DPrintf(0x10,"Cmd_AddCommand: %s already defined\n","cmdlist");
  }
  iVar1 = FUN_004a5510(&DAT_00715168);
  if (iVar1 == 0) {
    _DAT_01ad2194 = &DAT_00715168;
    _DAT_01ad21a0 = &LAB_006098a0;
    _DAT_01ad21a4 = 0;
    _DAT_01ad2190 = DAT_01aac658;
    DAT_01aac658 = &DAT_01ad2190;
  }
  else {
    Com_DPrintf(0x10,"Cmd_AddCommand: %s already defined\n",&DAT_00715168);
  }
  iVar1 = FUN_004a5510(&DAT_00721a54);
  if (iVar1 == 0) {
    _DAT_01ad217c = &DAT_00721a54;
    _DAT_01ad2188 = &LAB_00433f90;
    _DAT_01ad218c = 0;
    _DAT_01ad2178 = DAT_01aac658;
    DAT_01aac658 = &DAT_01ad2178;
  }
  else {
    Com_DPrintf(0x10,"Cmd_AddCommand: %s already defined\n",&DAT_00721a54);
  }
  iVar1 = FUN_004a5510(&DAT_006fd440);
  if (iVar1 != 0) {
    Com_DPrintf(0x10,"Cmd_AddCommand: %s already defined\n",&DAT_006fd440);
    return;
  }
  _DAT_01ad2164 = &DAT_006fd440;
  _DAT_01ad2170 = &LAB_004969f0;
  _DAT_01ad2174 = 0;
  _DAT_01ad2160 = DAT_01aac658;
  DAT_01aac658 = &DAT_01ad2160;
  return;
}

