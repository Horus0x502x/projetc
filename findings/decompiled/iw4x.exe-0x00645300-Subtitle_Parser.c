// iw4x.exe!Subtitle_Parser  @  0x00645300
// taille body : 334 octets
// pas d'ASLR -> adresse identique au runtime
// decompile par Ghidra 12.0.4 PUBLIC


undefined1 * FUN_00645300(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  int local_8;
  int local_4;
  
  iVar2 = FUN_004f4b90("soundaliases/subtitle.st",&local_4);
  if (iVar2 < 0) {
    FUN_004e0200(9,"WARNING: Could not read local copy of StringEd file %s\n",
                 "soundaliases/subtitle.st");
    return (undefined1 *)0x0;
  }
  FUN_004aab80("soundaliases/subtitle.st");
  local_8 = local_4;
  pcVar3 = (char *)FUN_00474d60(&local_8);
  do {
    if (local_8 == 0) {
      FUN_004b80b0();
      thunk_FUN_0049aac0(local_4);
      return (undefined1 *)0x0;
    }
    pcVar4 = "?REFERENCE";
    iVar2 = 10;
    bVar5 = true;
    do {
      pcVar4 = pcVar4 + 1;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
    } while (bVar5);
    if (bVar5) {
      pcVar3 = (char *)FUN_004c0350(&local_8);
      pcVar4 = &DAT_063e7838;
      do {
        cVar1 = *pcVar3;
        *pcVar4 = cVar1;
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_004b8300(&local_8);
      do {
        pcVar3 = (char *)FUN_00474d60(&local_8);
        if (local_8 == 0) {
          FUN_004b22d0(1,&DAT_0072b62c,"soundaliases/subtitle.st");
        }
        iVar2 = 0xd;
        bVar5 = true;
        pcVar4 = "LANG_ENGLISH";
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar5 = *pcVar3 == *pcVar4;
          pcVar3 = pcVar3 + 1;
          pcVar4 = pcVar4 + 1;
        } while (bVar5);
      } while (!bVar5);
      FUN_004c0350(&local_8);
      iVar2 = FUN_004dcf20();
      if (iVar2 == 0) {
        FUN_004b80b0();
        thunk_FUN_0049aac0(local_4);
        return &DAT_063e7838;
      }
    }
    FUN_004b8300(&local_8);
    pcVar3 = (char *)FUN_00474d60(&local_8);
  } while( true );
}

