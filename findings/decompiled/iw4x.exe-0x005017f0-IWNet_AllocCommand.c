// iw4x.exe!IWNet_AllocCommand  @  0x005017f0
// taille body : 176 octets
// pas d'ASLR -> adresse identique au runtime
// decompile par Ghidra 12.0.4 PUBLIC


undefined4 FUN_005017f0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  char *_Dst;
  int iVar2;
  undefined4 *puVar3;
  
  _Dst = &DAT_066bb130;
  do {
    if (*_Dst == '\0') {
      _memset(_Dst,0,0x2c);
      *_Dst = '\x01';
      _Dst[2] = '\0';
      _Dst[3] = '\0';
      *(undefined4 *)(_Dst + 4) = param_2;
      *(undefined4 *)(_Dst + 0x20) = param_1;
      if (param_3 != (undefined4 *)0x0) {
        *(undefined4 *)(_Dst + 0xc) = *param_3;
        *(undefined4 *)(_Dst + 0x10) = param_3[1];
        *(undefined4 *)(_Dst + 0x14) = param_3[2];
        *(undefined4 *)(_Dst + 0x18) = param_3[3];
        *(undefined4 *)(_Dst + 0x1c) = param_3[4];
      }
      return 1;
    }
    _Dst = _Dst + 0x2c;
  } while ((int)_Dst < 0x66bb550);
  iVar1 = FUN_004362b0();
  Print(0x19,"We can\'t allocate a new IWNet command, we have %i pending commands:\n",iVar1);
  iVar2 = 0;
  if (0 < iVar1) {
    puVar3 = &DAT_066bb134;
    do {
      Com_DPrintf(0x19,"%i. Cmd %i\n",iVar2,*puVar3);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 0xb;
    } while (iVar2 < iVar1);
  }
  return 0;
}

