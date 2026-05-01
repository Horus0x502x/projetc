// iw4x.exe!Dvar_toggle_helper  @  0x004f1bf0
// taille body : 304 octets
// pas d'ASLR -> adresse identique au runtime
// decompile par Ghidra 12.0.4 PUBLIC


void FUN_004f1bf0(void)

{
  FUN_00470090("toggle",&LAB_004a7740,&DAT_01b2bdf4,0);
  FUN_00470090("togglep",&LAB_004205b0,&DAT_01b2bddc,0);
  FUN_00470090(&PTR_PTR_006fc318,FUN_0044f790,&DAT_01b2bdc4,0);
  FUN_00470090(&DAT_006ff434,&LAB_004fcb20,&DAT_01b2bdac,0);
  FUN_00470090("reset",&LAB_0045ebb0,&DAT_01b2bd94,0);
  FUN_00470090("dvarlist",&LAB_00405da0,&DAT_01b2bd7c,0);
  FUN_00470090("dvardump",&LAB_00413da0,&DAT_01b2bd64,0);
  FUN_00469340();
  FUN_00470090("dvar_bool",&LAB_0060c930,&DAT_01b2bd4c,0);
  FUN_00470090("dvar_int",&LAB_0060c9e0,&DAT_01b2bd34,0);
  FUN_00470090("dvar_float",&LAB_0060cb00,&DAT_01b2bd1c,0);
  FUN_00470090("dvar_vec3",&LAB_0060cc60,&DAT_01b2bd04,0);
  FUN_00470090("dvar_vec3_color",&LAB_0060ce40,&DAT_01b2bcec,0);
  FUN_00470090("setfromdvar",&LAB_0042ddd0,&DAT_01b2bcd4,0);
  return;
}

