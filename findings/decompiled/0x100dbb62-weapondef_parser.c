// Adresse runtime : 0x100dbb62  (pas d'ASLR -> 1:1)
// Label heuristique : weapondef_parser
// Taille body : 58166 octets
// Decompile par Ghidra 12.0.4 PUBLIC


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x100dbf03) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100dbb62(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  undefined4 uVar10;
  byte *pbVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float *pfVar15;
  int iVar16;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  byte *extraout_ECX_02;
  byte *extraout_ECX_03;
  byte *extraout_ECX_04;
  byte *pbVar17;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  undefined4 extraout_ECX_14;
  undefined4 extraout_ECX_15;
  undefined4 extraout_ECX_16;
  undefined4 extraout_ECX_17;
  undefined4 extraout_ECX_18;
  undefined4 extraout_ECX_19;
  byte *extraout_ECX_20;
  byte *extraout_ECX_21;
  byte *extraout_ECX_22;
  byte *extraout_ECX_23;
  byte *extraout_ECX_24;
  undefined4 extraout_ECX_25;
  undefined4 extraout_ECX_26;
  byte *extraout_ECX_27;
  byte *extraout_ECX_28;
  byte *extraout_ECX_29;
  byte *extraout_ECX_30;
  undefined4 extraout_ECX_31;
  undefined4 extraout_ECX_32;
  byte *extraout_ECX_33;
  byte *extraout_ECX_34;
  byte *extraout_ECX_35;
  byte *extraout_ECX_36;
  byte *extraout_ECX_37;
  byte *extraout_ECX_38;
  byte *extraout_ECX_39;
  undefined4 extraout_ECX_40;
  undefined4 extraout_ECX_41;
  undefined4 extraout_ECX_42;
  undefined4 extraout_ECX_43;
  undefined4 extraout_ECX_44;
  undefined4 extraout_ECX_45;
  undefined4 extraout_ECX_46;
  undefined4 extraout_ECX_47;
  undefined4 extraout_ECX_48;
  undefined4 extraout_ECX_49;
  undefined4 extraout_ECX_50;
  undefined4 extraout_ECX_51;
  int extraout_ECX_52;
  undefined4 extraout_ECX_53;
  undefined4 extraout_ECX_54;
  int extraout_ECX_55;
  int extraout_ECX_56;
  int extraout_ECX_57;
  undefined4 extraout_ECX_58;
  undefined4 extraout_ECX_59;
  int extraout_ECX_60;
  int extraout_ECX_61;
  int extraout_ECX_62;
  undefined4 extraout_ECX_63;
  undefined4 extraout_ECX_64;
  int extraout_ECX_65;
  int extraout_ECX_66;
  int extraout_ECX_67;
  undefined4 extraout_ECX_68;
  undefined4 extraout_ECX_69;
  int extraout_ECX_70;
  int extraout_ECX_71;
  int extraout_ECX_72;
  undefined4 extraout_ECX_73;
  undefined4 extraout_ECX_74;
  int extraout_ECX_75;
  int extraout_ECX_76;
  int extraout_ECX_77;
  undefined4 extraout_ECX_78;
  undefined4 extraout_ECX_79;
  int extraout_ECX_80;
  int extraout_ECX_81;
  int extraout_ECX_82;
  undefined4 extraout_ECX_83;
  undefined4 extraout_ECX_84;
  undefined4 extraout_ECX_85;
  undefined4 extraout_ECX_86;
  undefined4 extraout_ECX_87;
  undefined4 extraout_ECX_88;
  undefined4 extraout_ECX_89;
  undefined4 extraout_ECX_90;
  undefined4 extraout_ECX_91;
  undefined4 extraout_ECX_92;
  undefined4 extraout_ECX_93;
  undefined4 extraout_ECX_94;
  undefined4 extraout_ECX_95;
  undefined4 extraout_ECX_96;
  undefined4 extraout_ECX_97;
  undefined4 extraout_ECX_98;
  undefined4 extraout_ECX_99;
  undefined4 extraout_ECX_x00100;
  undefined4 extraout_ECX_x00101;
  undefined4 extraout_ECX_x00102;
  undefined4 extraout_ECX_x00103;
  undefined4 extraout_ECX_x00104;
  undefined4 extraout_ECX_x00105;
  undefined4 extraout_ECX_x00106;
  undefined4 extraout_ECX_x00107;
  undefined4 extraout_ECX_x00108;
  undefined4 extraout_ECX_x00109;
  undefined4 extraout_ECX_x00110;
  undefined4 extraout_ECX_x00111;
  undefined4 extraout_ECX_x00112;
  undefined4 extraout_ECX_x00113;
  undefined4 extraout_ECX_x00114;
  undefined4 extraout_ECX_x00115;
  undefined4 extraout_ECX_x00116;
  undefined4 extraout_ECX_x00117;
  undefined4 extraout_ECX_x00118;
  undefined4 extraout_ECX_x00119;
  undefined4 extraout_ECX_x00120;
  undefined4 extraout_ECX_x00121;
  undefined4 extraout_ECX_x00122;
  undefined4 extraout_ECX_x00123;
  undefined4 extraout_ECX_x00124;
  undefined4 extraout_ECX_x00125;
  undefined4 extraout_ECX_x00126;
  undefined4 extraout_ECX_x00127;
  undefined4 extraout_ECX_x00128;
  undefined4 extraout_ECX_x00129;
  undefined4 extraout_ECX_x00130;
  undefined4 extraout_ECX_x00131;
  undefined4 extraout_ECX_x00132;
  undefined4 extraout_ECX_x00133;
  undefined4 extraout_ECX_x00134;
  undefined4 extraout_ECX_x00135;
  undefined4 extraout_ECX_x00136;
  undefined4 extraout_ECX_x00137;
  undefined4 extraout_ECX_x00138;
  undefined4 extraout_ECX_x00139;
  undefined4 extraout_ECX_x00140;
  undefined4 extraout_ECX_x00141;
  undefined4 extraout_ECX_x00142;
  undefined4 extraout_ECX_x00143;
  undefined4 extraout_ECX_x00144;
  undefined4 extraout_ECX_x00145;
  undefined4 extraout_ECX_x00146;
  undefined4 extraout_ECX_x00147;
  undefined4 extraout_ECX_x00148;
  undefined4 extraout_ECX_x00149;
  undefined4 extraout_ECX_x00150;
  undefined4 extraout_ECX_x00151;
  undefined4 extraout_ECX_x00152;
  undefined4 extraout_ECX_x00153;
  undefined4 extraout_ECX_x00154;
  undefined4 extraout_ECX_x00155;
  undefined4 extraout_ECX_x00156;
  undefined4 extraout_ECX_x00157;
  undefined4 extraout_ECX_x00158;
  undefined4 extraout_ECX_x00159;
  undefined4 extraout_ECX_x00160;
  undefined4 extraout_ECX_x00161;
  undefined4 extraout_ECX_x00162;
  undefined4 extraout_ECX_x00163;
  undefined4 extraout_ECX_x00164;
  undefined4 extraout_ECX_x00165;
  undefined4 extraout_ECX_x00166;
  undefined4 extraout_ECX_x00167;
  undefined4 extraout_ECX_x00168;
  undefined4 extraout_ECX_x00169;
  undefined4 extraout_ECX_x00170;
  undefined4 extraout_ECX_x00171;
  undefined4 extraout_ECX_x00172;
  undefined4 extraout_ECX_x00173;
  undefined4 extraout_ECX_x00174;
  undefined4 extraout_ECX_x00175;
  undefined4 extraout_ECX_x00176;
  undefined4 extraout_ECX_x00177;
  undefined4 extraout_ECX_x00178;
  undefined4 extraout_ECX_x00179;
  undefined4 extraout_ECX_x00180;
  undefined4 extraout_ECX_x00181;
  undefined4 extraout_ECX_x00182;
  undefined4 extraout_ECX_x00183;
  undefined4 extraout_ECX_x00184;
  undefined4 extraout_ECX_x00185;
  undefined4 extraout_ECX_x00186;
  undefined4 extraout_ECX_x00187;
  undefined4 extraout_ECX_x00188;
  undefined4 extraout_ECX_x00189;
  undefined4 extraout_ECX_x00190;
  undefined4 extraout_ECX_x00191;
  undefined4 extraout_ECX_x00192;
  undefined4 extraout_ECX_x00193;
  undefined4 extraout_ECX_x00194;
  undefined4 extraout_ECX_x00195;
  undefined4 extraout_ECX_x00196;
  undefined4 extraout_ECX_x00197;
  undefined4 extraout_ECX_x00198;
  undefined4 extraout_ECX_x00199;
  undefined4 extraout_ECX_x00200;
  undefined4 extraout_ECX_x00201;
  undefined4 extraout_ECX_x00202;
  undefined4 extraout_ECX_x00203;
  undefined4 extraout_ECX_x00204;
  undefined4 extraout_ECX_x00205;
  undefined4 extraout_ECX_x00206;
  undefined4 extraout_ECX_x00207;
  undefined4 extraout_ECX_x00208;
  undefined4 extraout_ECX_x00209;
  undefined4 extraout_ECX_x00210;
  undefined4 extraout_ECX_x00211;
  undefined4 extraout_ECX_x00212;
  undefined4 extraout_ECX_x00213;
  undefined4 extraout_ECX_x00214;
  undefined4 extraout_ECX_x00215;
  undefined4 extraout_ECX_x00216;
  undefined4 extraout_ECX_x00217;
  undefined4 extraout_ECX_x00218;
  undefined4 extraout_ECX_x00219;
  undefined4 extraout_ECX_x00220;
  undefined4 extraout_ECX_x00221;
  undefined4 extraout_ECX_x00222;
  undefined4 extraout_ECX_x00223;
  undefined4 extraout_ECX_x00224;
  undefined4 extraout_ECX_x00225;
  undefined4 extraout_ECX_x00226;
  undefined4 extraout_ECX_x00227;
  undefined4 extraout_ECX_x00228;
  undefined4 extraout_ECX_x00229;
  undefined4 extraout_ECX_x00230;
  undefined4 extraout_ECX_x00231;
  undefined4 extraout_ECX_x00232;
  undefined4 extraout_ECX_x00233;
  undefined4 extraout_ECX_x00234;
  undefined4 extraout_ECX_x00235;
  undefined4 extraout_ECX_x00236;
  undefined4 extraout_ECX_x00237;
  undefined4 extraout_ECX_x00238;
  undefined4 extraout_ECX_x00239;
  undefined4 extraout_ECX_x00240;
  undefined4 extraout_ECX_x00241;
  undefined4 extraout_ECX_x00242;
  undefined4 extraout_ECX_x00243;
  undefined4 extraout_ECX_x00244;
  undefined4 extraout_ECX_x00245;
  undefined4 extraout_ECX_x00246;
  undefined4 extraout_ECX_x00247;
  undefined4 extraout_ECX_x00248;
  undefined4 extraout_ECX_x00249;
  int extraout_ECX_x00250;
  undefined4 extraout_ECX_x00251;
  undefined4 extraout_ECX_x00252;
  undefined4 extraout_ECX_x00253;
  undefined4 extraout_ECX_x00254;
  undefined4 extraout_ECX_x00255;
  undefined4 extraout_ECX_x00256;
  undefined4 extraout_ECX_x00257;
  undefined4 extraout_ECX_x00258;
  undefined4 extraout_ECX_x00259;
  undefined4 extraout_ECX_x00260;
  undefined4 extraout_ECX_x00261;
  undefined4 extraout_ECX_x00262;
  float *extraout_ECX_x00263;
  float *extraout_ECX_x00264;
  float *extraout_ECX_x00265;
  float *extraout_ECX_x00266;
  float *extraout_ECX_x00267;
  float *extraout_ECX_x00268;
  float *extraout_ECX_x00269;
  float *extraout_ECX_x00270;
  float *extraout_ECX_x00271;
  float *extraout_ECX_x00272;
  int extraout_ECX_x00273;
  int extraout_ECX_x00274;
  undefined4 extraout_ECX_x00275;
  undefined4 extraout_ECX_x00276;
  int extraout_ECX_x00277;
  int extraout_ECX_x00278;
  int extraout_ECX_x00279;
  int extraout_ECX_x00280;
  undefined4 extraout_ECX_x00281;
  undefined4 extraout_ECX_x00282;
  int extraout_ECX_x00283;
  int extraout_ECX_x00284;
  int extraout_ECX_x00285;
  int extraout_ECX_x00286;
  undefined4 extraout_ECX_x00287;
  undefined4 extraout_ECX_x00288;
  int extraout_ECX_x00289;
  int extraout_ECX_x00290;
  int extraout_ECX_x00291;
  int extraout_ECX_x00292;
  undefined4 extraout_ECX_x00293;
  undefined4 extraout_ECX_x00294;
  int extraout_ECX_x00295;
  int extraout_ECX_x00296;
  int extraout_ECX_x00297;
  int extraout_ECX_x00298;
  int extraout_ECX_x00299;
  int extraout_ECX_x00300;
  int extraout_ECX_x00301;
  int extraout_ECX_x00302;
  int extraout_ECX_x00303;
  int extraout_ECX_x00304;
  int extraout_ECX_x00305;
  int extraout_ECX_x00306;
  int extraout_ECX_x00307;
  int extraout_ECX_x00308;
  int extraout_ECX_x00309;
  int extraout_ECX_x00310;
  int extraout_ECX_x00311;
  int extraout_ECX_x00312;
  int extraout_ECX_x00313;
  int extraout_ECX_x00314;
  int extraout_ECX_x00315;
  int extraout_ECX_x00316;
  int extraout_ECX_x00317;
  int extraout_ECX_x00318;
  byte *extraout_ECX_x00319;
  byte *extraout_ECX_x00320;
  byte *extraout_ECX_x00321;
  int extraout_ECX_x00322;
  int extraout_ECX_x00323;
  int extraout_ECX_x00324;
  int extraout_ECX_x00325;
  int extraout_ECX_x00326;
  int extraout_ECX_x00327;
  int extraout_ECX_x00328;
  int extraout_ECX_x00329;
  int extraout_ECX_x00330;
  int extraout_ECX_x00331;
  undefined4 extraout_ECX_x00332;
  undefined4 extraout_ECX_x00333;
  undefined4 extraout_ECX_x00334;
  undefined4 extraout_ECX_x00335;
  undefined4 extraout_ECX_x00336;
  undefined4 extraout_ECX_x00337;
  int extraout_ECX_x00338;
  int extraout_ECX_x00339;
  int extraout_ECX_x00340;
  undefined4 extraout_ECX_x00341;
  int extraout_ECX_x00342;
  int extraout_ECX_x00343;
  int extraout_ECX_x00344;
  int extraout_ECX_x00345;
  int extraout_ECX_x00346;
  int extraout_ECX_x00347;
  int extraout_ECX_x00348;
  int extraout_ECX_x00349;
  int extraout_ECX_x00350;
  int extraout_ECX_x00351;
  int extraout_ECX_x00352;
  int extraout_ECX_x00353;
  int extraout_ECX_x00354;
  int extraout_ECX_x00355;
  int extraout_ECX_x00356;
  int extraout_ECX_x00357;
  int extraout_ECX_x00358;
  int extraout_ECX_x00359;
  int extraout_ECX_x00360;
  int extraout_ECX_x00361;
  int extraout_ECX_x00362;
  int extraout_ECX_x00363;
  int extraout_ECX_x00364;
  int extraout_ECX_x00365;
  int extraout_ECX_x00366;
  int extraout_ECX_x00367;
  int extraout_ECX_x00368;
  int extraout_ECX_x00369;
  int extraout_ECX_x00370;
  int extraout_ECX_x00371;
  int extraout_ECX_x00372;
  int extraout_ECX_x00373;
  int extraout_ECX_x00374;
  int extraout_ECX_x00375;
  int extraout_ECX_x00376;
  int extraout_ECX_x00377;
  int extraout_ECX_x00378;
  int extraout_ECX_x00379;
  int extraout_ECX_x00380;
  int extraout_ECX_x00381;
  int extraout_ECX_x00382;
  int extraout_ECX_x00383;
  int extraout_ECX_x00384;
  int extraout_ECX_x00385;
  int extraout_ECX_x00386;
  int extraout_ECX_x00387;
  int extraout_ECX_x00388;
  int extraout_ECX_x00389;
  int extraout_ECX_x00390;
  int extraout_ECX_x00391;
  int extraout_ECX_x00392;
  int extraout_ECX_x00393;
  int extraout_ECX_x00394;
  int extraout_ECX_x00395;
  int extraout_ECX_x00396;
  int extraout_ECX_x00397;
  int extraout_ECX_x00398;
  int extraout_ECX_x00399;
  int extraout_ECX_x00400;
  int extraout_ECX_x00401;
  int extraout_ECX_x00402;
  int extraout_ECX_x00403;
  int extraout_ECX_x00404;
  int extraout_ECX_x00405;
  int extraout_ECX_x00406;
  int extraout_ECX_x00407;
  int extraout_ECX_x00408;
  int extraout_ECX_x00409;
  int extraout_ECX_x00410;
  int extraout_ECX_x00411;
  int extraout_ECX_x00412;
  int extraout_ECX_x00413;
  int extraout_ECX_x00414;
  int extraout_ECX_x00415;
  int extraout_ECX_x00416;
  int extraout_ECX_x00417;
  int extraout_ECX_x00418;
  int extraout_ECX_x00419;
  int extraout_ECX_x00420;
  int extraout_ECX_x00421;
  int extraout_ECX_x00422;
  int extraout_ECX_x00423;
  int extraout_ECX_x00424;
  int extraout_ECX_x00425;
  undefined4 extraout_ECX_x00426;
  undefined4 extraout_ECX_x00427;
  undefined4 extraout_ECX_x00428;
  undefined4 extraout_ECX_x00429;
  undefined4 extraout_ECX_x00430;
  int extraout_ECX_x00431;
  int extraout_ECX_x00432;
  int extraout_ECX_x00433;
  int extraout_ECX_x00434;
  int *extraout_ECX_x00435;
  int *extraout_ECX_x00436;
  int *extraout_ECX_x00437;
  int *extraout_ECX_x00438;
  int *extraout_ECX_x00439;
  int *extraout_ECX_x00440;
  int *extraout_ECX_x00441;
  int *piVar18;
  int *extraout_ECX_x00442;
  int *extraout_ECX_x00443;
  int extraout_ECX_x00444;
  int extraout_ECX_x00445;
  int extraout_ECX_x00446;
  int extraout_ECX_x00447;
  int extraout_ECX_x00448;
  int extraout_ECX_x00449;
  int extraout_ECX_x00450;
  int extraout_ECX_x00451;
  int extraout_ECX_x00452;
  int extraout_ECX_x00453;
  int extraout_ECX_x00454;
  int extraout_ECX_x00455;
  int extraout_ECX_x00456;
  int extraout_ECX_x00457;
  int extraout_ECX_x00458;
  int extraout_ECX_x00459;
  int extraout_ECX_x00460;
  int extraout_ECX_x00461;
  int extraout_ECX_x00462;
  int extraout_ECX_x00463;
  int extraout_ECX_x00464;
  int extraout_ECX_x00465;
  int extraout_ECX_x00466;
  int extraout_ECX_x00467;
  int extraout_ECX_x00468;
  int extraout_ECX_x00469;
  int extraout_ECX_x00470;
  int extraout_ECX_x00471;
  int extraout_ECX_x00472;
  int extraout_ECX_x00473;
  int extraout_ECX_x00474;
  int extraout_ECX_x00475;
  int extraout_ECX_x00476;
  undefined4 extraout_ECX_x00477;
  undefined4 extraout_ECX_x00478;
  undefined4 extraout_ECX_x00479;
  int extraout_ECX_x00480;
  int extraout_ECX_x00481;
  int extraout_ECX_x00482;
  int extraout_ECX_x00483;
  int extraout_ECX_x00484;
  int extraout_ECX_x00485;
  int extraout_ECX_x00486;
  undefined4 extraout_ECX_x00487;
  undefined4 extraout_ECX_x00488;
  float *extraout_ECX_x00489;
  float *extraout_ECX_x00490;
  float *extraout_ECX_x00491;
  float *extraout_ECX_x00492;
  float *extraout_ECX_x00493;
  float *extraout_ECX_x00494;
  float *extraout_ECX_x00495;
  float *pfVar19;
  float *extraout_ECX_x00496;
  float *extraout_ECX_x00497;
  float *extraout_ECX_x00498;
  int extraout_ECX_x00499;
  int extraout_ECX_x00500;
  int extraout_ECX_x00501;
  int extraout_ECX_x00502;
  byte *extraout_ECX_x00503;
  undefined4 extraout_ECX_x00504;
  int extraout_ECX_x00505;
  int extraout_ECX_x00506;
  int extraout_ECX_x00507;
  int extraout_ECX_x00508;
  undefined4 extraout_ECX_x00509;
  float *extraout_ECX_x00510;
  undefined4 extraout_ECX_x00511;
  float *extraout_ECX_x00512;
  float *extraout_ECX_x00513;
  float *extraout_ECX_x00514;
  float *extraout_ECX_x00515;
  float *extraout_ECX_x00516;
  float *extraout_ECX_x00517;
  float *extraout_ECX_x00518;
  float *extraout_ECX_x00519;
  float *extraout_ECX_x00520;
  float *extraout_ECX_x00521;
  float *extraout_ECX_x00522;
  float *extraout_ECX_x00523;
  float *extraout_ECX_x00524;
  float *extraout_ECX_x00525;
  float *extraout_ECX_x00526;
  float *extraout_ECX_x00527;
  float *extraout_ECX_x00528;
  float *extraout_ECX_x00529;
  float *extraout_ECX_x00530;
  float *extraout_ECX_x00531;
  float *extraout_ECX_x00532;
  float *extraout_ECX_x00533;
  float *extraout_ECX_x00534;
  float *extraout_ECX_x00535;
  float *extraout_ECX_x00536;
  float *extraout_ECX_x00537;
  float *extraout_ECX_x00538;
  float *extraout_ECX_x00539;
  float *extraout_ECX_x00540;
  float *extraout_ECX_x00541;
  float *extraout_ECX_x00542;
  float *extraout_ECX_x00543;
  float *extraout_ECX_x00544;
  float *extraout_ECX_x00545;
  float *extraout_ECX_x00546;
  float *extraout_ECX_x00547;
  float *extraout_ECX_x00548;
  float *extraout_ECX_x00549;
  float *extraout_ECX_x00550;
  float *extraout_ECX_x00551;
  float *extraout_ECX_x00552;
  float *extraout_ECX_x00553;
  float *extraout_ECX_x00554;
  float *extraout_ECX_x00555;
  float *pfVar20;
  undefined4 extraout_ECX_x00556;
  ushort *puVar21;
  byte *pbVar22;
  ushort *puVar23;
  float fVar24;
  undefined4 *puVar25;
  bool bVar26;
  int *piVar27;
  undefined1 *puVar28;
  int *piVar29;
  undefined1 local_1430 [8];
  uint local_1428;
  uint local_1424;
  uint local_1420;
  uint local_141c;
  uint local_1418;
  int local_1414;
  byte *local_1410;
  uint local_140c;
  byte *local_1408;
  char local_1401;
  byte *local_1400;
  undefined4 *local_13fc;
  byte *local_13f8;
  uint local_13f4;
  uint local_13f0;
  ushort *local_13ec;
  byte *local_13e8;
  uint local_13e4;
  uint local_13e0;
  uint local_13dc;
  uint local_13d8;
  uint local_13d4;
  uint local_13d0;
  uint local_13cc;
  byte local_13c5;
  uint local_13c4;
  uint local_13c0;
  int local_13bc;
  uint local_13b8;
  undefined4 local_13b4;
  undefined4 local_13ac;
  float local_13a8;
  undefined1 local_12d4 [24];
  undefined1 local_12bc [24];
  undefined1 local_12a4 [3592];
  undefined1 local_49c [24];
  undefined1 local_484 [24];
  undefined1 local_46c [24];
  undefined1 local_454 [24];
  undefined1 local_43c [24];
  undefined1 local_424 [24];
  undefined1 local_40c [24];
  undefined1 local_3f4 [24];
  undefined1 local_3dc [24];
  undefined1 local_3c4 [264];
  undefined1 local_2bc [24];
  undefined1 local_2a4 [24];
  undefined1 local_28c [24];
  undefined1 local_274 [24];
  undefined1 local_25c [24];
  undefined1 local_244 [24];
  undefined1 local_22c [16];
  undefined1 local_21c [16];
  undefined1 local_20c [16];
  undefined1 local_1fc [16];
  undefined1 local_1ec [40];
  undefined1 local_1c4 [16];
  undefined1 local_1b4 [16];
  undefined1 local_1a4 [16];
  undefined1 local_194 [16];
  undefined1 local_184 [16];
  undefined1 local_174 [16];
  undefined1 local_164 [16];
  undefined1 local_154 [16];
  undefined1 local_144 [16];
  undefined1 local_134 [16];
  undefined1 local_124 [16];
  undefined1 local_114 [16];
  undefined1 local_104 [16];
  undefined1 local_f4 [16];
  undefined1 local_e4 [16];
  undefined1 local_d4 [16];
  undefined1 local_c4 [16];
  undefined1 local_b4 [16];
  undefined1 local_a4 [16];
  undefined1 local_94 [16];
  undefined1 local_84 [16];
  undefined1 local_74 [16];
  undefined1 local_64 [24];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101d54d1;
  local_10 = ExceptionList;
  uVar4 = DAT_10342100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_13e4 = 0;
  local_13cc = 0;
  local_13d0 = 0;
  local_13d4 = 0;
  local_13d8 = 0;
  local_13f0 = 0;
  local_13e0 = 0;
  local_13f4 = 0;
  pbVar22 = (byte *)*param_4;
  local_13ac = param_1;
  local_13b4 = param_2;
  local_13a8 = 0.0;
  local_140c = 0;
  puVar25 = (undefined4 *)*param_3;
  local_1408 = (byte *)0x0;
  local_13c4 = 0;
  local_13b8 = 0;
  local_13c0 = 0;
  local_13dc = 0;
  local_13fc = puVar25;
  local_13e8 = pbVar22;
  local_14 = uVar4;
  FUN_10007684(*(undefined4 *)pbVar22);
  local_8 = 0;
  FUN_1001d6cf(uVar4);
  local_8._0_1_ = 1;
  FUN_10007328(local_244);
  local_8 = CONCAT31(local_8._1_3_,2);
  cVar3 = FUN_10045109(&DAT_1029b710);
  if (cVar3 != '\0') {
    FUN_1003bb55(&DAT_1029b710);
    iVar5 = FUN_1000736f();
    iVar6 = FUN_1000736f();
    uVar7 = FUN_10034117(local_12d4,0,iVar5 - iVar6);
    FUN_100070d9(uVar7);
    FUN_100075cd();
  }
  FUN_10007684(*(undefined4 *)pbVar22);
  local_8._0_1_ = 3;
  if (puVar25 != (undefined4 *)0x0) {
    iVar5 = FUN_1000736f();
    uVar7 = 0xffffffff;
    iVar5 = FUN_1019c740(*puVar25,iVar5 + -1,0xffffffff);
    iVar6 = FUN_1000736f();
    uVar7 = FUN_10034117(local_12bc,iVar5 - iVar6,uVar7);
    FUN_100070d9(uVar7);
    FUN_100075cd();
    uVar4 = FUN_1000736f();
    iVar5 = FUN_1000736f();
    uVar7 = FUN_10034117(local_12a4,1,iVar5 + ~uVar4);
    FUN_100070d9(uVar7);
    FUN_100075cd();
  }
  local_1400 = (byte *)(local_13bc + 4);
  iVar5 = FUN_100d42e6(local_2c);
  if (iVar5 == 0) {
    uVar8 = FUN_10081b38(0);
    local_8 = CONCAT31(local_8._1_3_,4);
    puVar21 = (ushort *)0x1;
    uVar7 = extraout_ECX_00;
  }
  else {
    uVar7 = extraout_ECX;
    uVar8 = extraout_ECX;
    FUN_100d42e6(local_2c);
    FUN_10080700(uVar7,uVar8);
    uVar8 = FUN_10080627(uVar7,uVar8);
    local_8 = 5;
    puVar21 = (ushort *)0x2;
    uVar7 = extraout_ECX_01;
  }
  uVar13 = uVar7;
  uVar10 = local_13b4;
  local_13ec = puVar21;
  local_13e4 = (uint)puVar21;
  FUN_100d834d("szInternalName");
  FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
  pbVar22 = extraout_ECX_02;
  if (((uint)puVar21 & 2) != 0) {
    puVar21 = (ushort *)((uint)puVar21 & 0xfffffffd);
    local_13ec = puVar21;
    local_13e4 = (uint)puVar21;
    guard_check_icall();
    pbVar22 = extraout_ECX_03;
  }
  local_8 = 3;
  if (((uint)puVar21 & 1) != 0) {
    puVar21 = (ushort *)((uint)puVar21 & 0xfffffffe);
    local_13ec = puVar21;
    local_13e4 = (uint)puVar21;
    guard_check_icall();
    pbVar22 = extraout_ECX_04;
  }
  pbVar11 = local_13e8;
  pbVar17 = *(byte **)(local_13e8 + 8);
  if (pbVar17 != (byte *)0x0) {
    if ((puVar25 == (undefined4 *)0x0) || (pbVar9 = (byte *)puVar25[2], pbVar9 == (byte *)0x0)) {
LAB_100dbe8e:
      pbVar17 = pbVar22;
      FUN_10080700(pbVar22,pbVar22);
      uVar10 = FUN_10080627(pbVar22,pbVar17);
      local_8 = 7;
      local_13ec = (ushort *)((uint)puVar21 | 8);
      uVar7 = extraout_ECX_05;
      uVar8 = extraout_ECX_05;
      uVar13 = local_13b4;
      local_13e4 = (uint)local_13ec;
      FUN_100d83d8("szDisplayName");
      FUN_100d8af7(uVar7,uVar8,uVar10,uVar13);
      local_13ec = puVar21;
      local_13e4 = (uint)puVar21;
      guard_check_icall();
      local_8 = 3;
    }
    else if (pbVar17 != pbVar9) {
      do {
        local_13c5 = *pbVar17;
        bVar26 = local_13c5 < *pbVar9;
        if (local_13c5 != *pbVar9) {
LAB_100dbe81:
          uVar4 = -(uint)bVar26 | 1;
          goto LAB_100dbe86;
        }
        if (local_13c5 == 0) break;
        local_13c5 = pbVar17[1];
        bVar26 = local_13c5 < pbVar9[1];
        if (local_13c5 != pbVar9[1]) goto LAB_100dbe81;
        pbVar17 = pbVar17 + 2;
        pbVar9 = pbVar9 + 2;
      } while (local_13c5 != 0);
      uVar4 = 0;
LAB_100dbe86:
      pbVar22 = pbVar17;
      if (uVar4 != 0) goto LAB_100dbe8e;
    }
  }
  if ((*(int *)(pbVar11 + 0xc) != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (*(int *)(pbVar11 + 0xc) != puVar25[3])))) {
    FUN_10081b38(4);
    local_8._0_1_ = 8;
    local_13f8 = (byte *)0x0;
    uVar7 = extraout_ECX_06;
    do {
      pbVar22 = local_13f8;
      if (*(ushort *)((int)local_13f8 + *(int *)(local_13e8 + 0xc)) != 0) {
        local_141c = (uint)*(ushort *)((int)local_13f8 + *(int *)(local_13e8 + 0xc));
        FUN_100d37b6(local_2bc,&local_141c);
        local_8._0_1_ = 9;
        iVar5 = FUN_100d42e6(local_2bc);
        if (iVar5 == 0) {
          uVar7 = FUN_10081b38(0);
          local_8 = CONCAT31(local_8._1_3_,10);
          puVar21 = (ushort *)((uint)puVar21 | 0x10);
        }
        else {
          uVar7 = extraout_ECX_07;
          uVar8 = extraout_ECX_07;
          FUN_100d42e6(local_2bc);
          FUN_10080700(uVar7,uVar8);
          uVar7 = FUN_10080627(uVar7,uVar8);
          puVar21 = (ushort *)((uint)puVar21 | 0x20);
          local_8 = 0xb;
          pbVar22 = local_13f8;
        }
        local_13e4 = (uint)puVar21;
        FUN_100f341a(uVar7,local_13b4);
        if (((uint)puVar21 & 0x20) != 0) {
          puVar21 = (ushort *)((uint)puVar21 & 0xffffffdf);
          local_13e4 = (uint)puVar21;
          guard_check_icall();
        }
        local_8 = 9;
        if (((uint)puVar21 & 0x10) != 0) {
          puVar21 = (ushort *)((uint)puVar21 & 0xffffffef);
          local_13e4 = (uint)puVar21;
          guard_check_icall();
        }
        local_8._0_1_ = 8;
        FUN_100075cd();
        uVar7 = extraout_ECX_08;
      }
      local_13f8 = (byte *)((int)pbVar22 + 2);
    } while (local_13f8 < 0x40);
    puVar28 = local_21c;
    uVar8 = uVar7;
    uVar13 = local_13b4;
    local_13ec = puVar21;
    FUN_100d7fb0("hideTags");
    FUN_100d8af7(uVar7,uVar8,puVar28,uVar13);
    local_8 = CONCAT31(local_8._1_3_,3);
    guard_check_icall();
    pbVar11 = local_13e8;
    puVar25 = local_13fc;
  }
  if (puVar25 == (undefined4 *)0x0) {
    local_13f8 = (byte *)0x0;
  }
  else {
    local_13f8 = (byte *)puVar25[4];
  }
  uVar7 = *(undefined4 *)(pbVar11 + 0x10);
  FUN_10007684("szXAnims");
  local_8._0_1_ = 0xc;
  FUN_100d9e07(local_3c4,uVar7,local_13f8,local_13ac,local_13b4);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_100075cd();
  pbVar22 = local_13e8;
  local_13f8 = *(byte **)(local_13e8 + 0x14);
  uVar7 = extraout_ECX_09;
  if (((float)local_13f8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || ((float)local_13f8 != (float)puVar25[5])))) {
    uVar8 = extraout_ECX_09;
    uVar13 = local_13b4;
    FUN_100d8362("fAdsZoomFov");
    FUN_100d8193(uVar7,uVar8,uVar13);
    uVar7 = extraout_ECX_10;
  }
  iVar5 = *(int *)(pbVar22 + 0x18);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != puVar25[6])))) {
    uVar8 = uVar7;
    uVar13 = local_13b4;
    FUN_100d7f3e("iAdsTransInTime");
    FUN_100d7c54(uVar7,uVar8,iVar5,uVar13);
    uVar7 = extraout_ECX_11;
  }
  iVar5 = *(int *)(pbVar22 + 0x1c);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != puVar25[7])))) {
    uVar8 = uVar7;
    uVar13 = local_13b4;
    FUN_100d897d("iAdsTransOutTime");
    FUN_100d7c54(uVar7,uVar8,iVar5,uVar13);
    uVar7 = extraout_ECX_12;
  }
  iVar5 = *(int *)(pbVar22 + 0x20);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != puVar25[8])))) {
    uVar8 = uVar7;
    uVar13 = local_13b4;
    FUN_100d7d10("iClipSize");
    FUN_100d7c54(uVar7,uVar8,iVar5,uVar13);
    uVar7 = extraout_ECX_13;
  }
  iVar5 = *(int *)(pbVar22 + 0x24);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != puVar25[9])))) {
    uVar8 = uVar7;
    uVar13 = local_13b4;
    FUN_100d7d85("impactType");
    FUN_100d7c54(uVar7,uVar8,iVar5,uVar13);
    uVar7 = extraout_ECX_14;
  }
  iVar5 = *(int *)(pbVar22 + 0x28);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != puVar25[10])))) {
    uVar8 = uVar7;
    uVar13 = local_13b4;
    FUN_100d7d10("iFireTime");
    FUN_100d7c54(uVar7,uVar8,iVar5,uVar13);
    uVar7 = extraout_ECX_15;
  }
  iVar5 = *(int *)(pbVar22 + 0x2c);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != puVar25[0xb])))) {
    uVar8 = uVar7;
    uVar13 = local_13b4;
    FUN_100d83d8("dpadIconRatio");
    FUN_100d7c54(uVar7,uVar8,iVar5,uVar13);
    uVar7 = extraout_ECX_16;
  }
  local_13f8 = *(byte **)(pbVar22 + 0x30);
  if (((float)local_13f8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || ((float)local_13f8 != (float)puVar25[0xc])))) {
    uVar8 = uVar7;
    uVar13 = local_13b4;
    FUN_100d8377("penetrateMultiplier");
    FUN_100d8193(uVar7,uVar8,uVar13);
    uVar7 = extraout_ECX_17;
  }
  local_13f8 = *(byte **)(pbVar22 + 0x34);
  if (((float)local_13f8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || ((float)local_13f8 != (float)puVar25[0xd])))) {
    uVar8 = uVar7;
    uVar13 = local_13b4;
    FUN_100d7f29("fAdsViewKickCenterSpeed");
    FUN_100d8193(uVar7,uVar8,uVar13);
    uVar7 = extraout_ECX_18;
  }
  local_13f8 = *(byte **)(pbVar22 + 0x38);
  if (((float)local_13f8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || ((float)local_13f8 != (float)puVar25[0xe])))) {
    uVar8 = uVar7;
    uVar13 = local_13b4;
    FUN_100d7f29("fHipViewKickCenterSpeed");
    FUN_100d8193(uVar7,uVar8,uVar13);
  }
  local_13f8 = pbVar22 + 0x3c;
  pbVar17 = *(byte **)local_13f8;
  if (pbVar17 != (byte *)0x0) {
    pbVar11 = local_13f8;
    puVar23 = puVar21;
    if ((puVar25 == (undefined4 *)0x0) || (pbVar9 = (byte *)puVar25[0xf], pbVar9 == (byte *)0x0)) {
LAB_100dc3f5:
      pbVar17 = pbVar11;
      FUN_10080700(pbVar11,pbVar11);
      uVar10 = FUN_10080627(pbVar11,pbVar17);
      local_8 = 0xe;
      puVar21 = (ushort *)((uint)puVar23 | 0x80);
      uVar7 = extraout_ECX_19;
      uVar8 = extraout_ECX_19;
      uVar13 = local_13b4;
      local_13ec = puVar21;
      local_13e4 = (uint)puVar21;
      FUN_100d7f3e("szAltWeaponName");
      FUN_100d8af7(uVar7,uVar8,uVar10,uVar13);
      if ((char)puVar21 < '\0') {
        puVar21 = (ushort *)((uint)puVar23 & 0xffffff7f);
        local_13ec = puVar21;
        local_13e4 = (uint)puVar21;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)puVar21 & 0x40) != 0) {
        puVar21 = (ushort *)((uint)puVar21 & 0xffffffbf);
        local_13ec = puVar21;
        local_13e4 = (uint)puVar21;
        guard_check_icall();
      }
    }
    else if (pbVar17 != pbVar9) {
      do {
        local_13c5 = *pbVar17;
        bVar26 = local_13c5 < *pbVar9;
        if (local_13c5 != *pbVar9) {
LAB_100dc3e8:
          uVar4 = -(uint)bVar26 | 1;
          goto LAB_100dc3ed;
        }
        if (local_13c5 == 0) break;
        local_13c5 = pbVar17[1];
        bVar26 = local_13c5 < pbVar9[1];
        if (local_13c5 != pbVar9[1]) goto LAB_100dc3e8;
        pbVar17 = pbVar17 + 2;
        pbVar9 = pbVar9 + 2;
      } while (local_13c5 != 0);
      uVar4 = 0;
LAB_100dc3ed:
      pbVar11 = pbVar17;
      puVar23 = local_13ec;
      puVar21 = local_13ec;
      if (uVar4 != 0) goto LAB_100dc3f5;
    }
  }
  pbVar17 = local_13f8;
  if (((puVar25 != (undefined4 *)0x0) && (*(int *)(*(int *)(pbVar22 + 4) + 0x38) != 3)) &&
     (*(int *)local_13f8 != 0)) {
    pbVar17 = (byte *)0x1;
    iVar5 = FUN_1019c740(*(undefined4 *)local_13f8,1);
    if (iVar5 != 0) {
      FUN_10007684(*(undefined4 *)(local_13e8 + 0x3c));
      local_8._0_1_ = 0xf;
      iVar5 = FUN_100d370e(0x1c,local_3dc);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_100075cd();
      if (iVar5 == 0) {
        FUN_100076c3("Could not find alt weapon {} for weapon {}!");
        FUN_100f2de2(local_1430,local_13f8,local_244);
        pbVar17 = extraout_ECX_21;
        pbVar22 = local_13e8;
      }
      else {
        FUN_100d2e21(0x1c,iVar5);
        pbVar17 = extraout_ECX_20;
        pbVar22 = local_13e8;
      }
    }
  }
  iVar5 = *(int *)(pbVar22 + 0x40);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != puVar25[0x10])))) {
    pbVar11 = pbVar17;
    uVar7 = local_13b4;
    FUN_100d834d("altWeaponIndex");
    FUN_100d7fc5(pbVar17,pbVar11,iVar5,uVar7);
    pbVar17 = extraout_ECX_22;
  }
  iVar5 = *(int *)(pbVar22 + 0x44);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != puVar25[0x11])))) {
    pbVar11 = pbVar17;
    uVar7 = local_13b4;
    FUN_100d83d8("iAltRaiseTime");
    FUN_100d7c54(pbVar17,pbVar11,iVar5,uVar7);
    pbVar17 = extraout_ECX_23;
  }
  if (*(int *)(pbVar22 + 0x48) != 0) {
    FUN_100f2e68(5,*(undefined4 *)(pbVar22 + 0x48));
    piVar18 = *(int **)(pbVar22 + 0x48);
    pbVar17 = extraout_ECX_24;
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (puVar25[0x12] == 0)) || (piVar18 != (int *)puVar25[0x12])
        ))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x10);
        puVar21 = (ushort *)((uint)puVar21 | 0x100);
        uVar7 = extraout_ECX_25;
      }
      else {
        pbVar11 = extraout_ECX_24;
        FUN_10080700(extraout_ECX_24,extraout_ECX_24);
        uVar8 = FUN_10080627(pbVar17,pbVar11);
        local_8 = 0x11;
        puVar21 = (ushort *)((uint)puVar21 | 0x200);
        uVar7 = extraout_ECX_26;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13ec = puVar21;
      local_13e4 = (uint)puVar21;
      FUN_100d7fb0("killIcon");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      pbVar17 = extraout_ECX_27;
      if (((uint)puVar21 & 0x200) != 0) {
        puVar21 = (ushort *)((uint)puVar21 & 0xfffffdff);
        local_13ec = puVar21;
        local_13e4 = (uint)puVar21;
        guard_check_icall();
        pbVar17 = extraout_ECX_28;
      }
      local_8 = 3;
      if (((uint)puVar21 & 0x100) != 0) {
        puVar21 = (ushort *)((uint)puVar21 & 0xfffffeff);
        local_13ec = puVar21;
        local_13e4 = (uint)puVar21;
        guard_check_icall();
        pbVar17 = extraout_ECX_29;
      }
    }
  }
  if (*(int *)(pbVar22 + 0x4c) != 0) {
    FUN_100f2e68(5,*(undefined4 *)(pbVar22 + 0x4c));
    piVar18 = *(int **)(pbVar22 + 0x4c);
    pbVar17 = extraout_ECX_30;
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (puVar25[0x13] == 0)) || (piVar18 != (int *)puVar25[0x13])
        ))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x12);
        uVar4 = (uint)puVar21 | 0x400;
        uVar7 = extraout_ECX_31;
      }
      else {
        pbVar11 = extraout_ECX_30;
        FUN_10080700(extraout_ECX_30,extraout_ECX_30);
        uVar8 = FUN_10080627(pbVar17,pbVar11);
        local_8 = 0x13;
        uVar4 = (uint)puVar21 | 0x800;
        uVar7 = extraout_ECX_32;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13ec = (ushort *)uVar4;
      local_13e4 = uVar4;
      FUN_100d7fb0("dpadIcon");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      pbVar17 = extraout_ECX_33;
      if ((uVar4 & 0x800) != 0) {
        uVar4 = uVar4 & 0xfffff7ff;
        local_13ec = (ushort *)uVar4;
        local_13e4 = uVar4;
        guard_check_icall();
        pbVar17 = extraout_ECX_34;
      }
      local_8 = 3;
      if ((uVar4 & 0x400) != 0) {
        local_13ec = (ushort *)(uVar4 & 0xfffffbff);
        local_13e4 = (uint)local_13ec;
        guard_check_icall();
        pbVar17 = extraout_ECX_35;
      }
    }
  }
  iVar5 = *(int *)(pbVar22 + 0x50);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != puVar25[0x14])))) {
    pbVar11 = pbVar17;
    uVar7 = local_13b4;
    FUN_100d834d("fireAnimLength");
    FUN_100d7c54(pbVar17,pbVar11,iVar5,uVar7);
    pbVar17 = extraout_ECX_36;
  }
  iVar5 = *(int *)(pbVar22 + 0x54);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != puVar25[0x15])))) {
    pbVar11 = pbVar17;
    uVar7 = local_13b4;
    FUN_100d7f3e("iFirstRaiseTime");
    FUN_100d7c54(pbVar17,pbVar11,iVar5,uVar7);
    pbVar17 = extraout_ECX_37;
  }
  iVar5 = *(int *)(pbVar22 + 0x58);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != puVar25[0x16])))) {
    pbVar11 = pbVar17;
    uVar7 = local_13b4;
    FUN_100d897d("ammoDropStockMax");
    FUN_100d7c54(pbVar17,pbVar11,iVar5,uVar7);
    pbVar17 = extraout_ECX_38;
  }
  local_13f8 = *(byte **)(pbVar22 + 0x5c);
  if (((float)local_13f8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || ((float)local_13f8 != (float)puVar25[0x17])))) {
    pbVar11 = pbVar17;
    uVar7 = local_13b4;
    FUN_100d8362("adsDofStart");
    FUN_100d8193(pbVar17,pbVar11,uVar7);
    pbVar17 = extraout_ECX_39;
  }
  local_13f8 = *(byte **)(pbVar22 + 0x60);
  if (((float)local_13f8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || ((float)local_13f8 != (float)puVar25[0x18])))) {
    pbVar11 = pbVar17;
    uVar7 = local_13b4;
    FUN_100d7d10("adsDofEnd");
    FUN_100d8193(pbVar17,pbVar11,uVar7);
  }
  FUN_10081b38(4);
  local_13c5 = puVar25 == (undefined4 *)0x0;
  local_1400 = (byte *)0x2;
  puVar21 = (ushort *)(pbVar22 + 100);
  local_13f8 = (byte *)((int)puVar25 - (int)local_13e8);
  pbVar22 = local_13e8 + 0x68;
  do {
    FUN_10081b38(4);
    local_8._0_1_ = 0x15;
    if ((puVar25 == (undefined4 *)0x0) ||
       (local_1401 = '\x01', *puVar21 != *(ushort *)((int)local_13f8 + (int)puVar21))) {
      local_1401 = '\0';
    }
    if (*puVar21 != 0) {
      uVar4 = 0;
      do {
        if ((local_1401 != '\0') &&
           (*(float *)(*(int *)pbVar22 + uVar4 * 8) !=
            *(float *)(*(int *)(pbVar22 + (int)local_13f8) + uVar4 * 8))) {
          local_13c5 = 1;
        }
        FUN_100f2f70(local_13b4);
        uVar4 = uVar4 + 1;
        puVar25 = local_13fc;
      } while (uVar4 < *puVar21);
    }
    FUN_100d8a84(local_22c,local_13b4);
    local_8 = CONCAT31(local_8._1_3_,0x14);
    guard_check_icall();
    puVar23 = local_13ec;
    pbVar22 = pbVar22 + 4;
    puVar21 = puVar21 + 1;
    local_1400 = (byte *)((int)local_1400 + -1);
  } while (local_1400 != (byte *)0x0);
  if (local_13c5 != 0) {
    puVar28 = local_1fc;
    uVar7 = extraout_ECX_40;
    uVar8 = extraout_ECX_40;
    uVar13 = local_13b4;
    FUN_100d834d("accuracyGraphs");
    FUN_100d8af7(uVar7,uVar8,puVar28,uVar13);
  }
  local_8 = CONCAT31(local_8._1_3_,3);
  guard_check_icall();
  pbVar22 = local_13e8;
  bVar1 = local_13e8[0x70];
  uVar4 = (uint)bVar1;
  uVar7 = extraout_ECX_41;
  if ((bVar1 != 0) && ((puVar25 == (undefined4 *)0x0 || (bVar1 != *(byte *)(puVar25 + 0x1c))))) {
    uVar8 = extraout_ECX_41;
    uVar13 = local_13b4;
    FUN_100d83d8("motionTracker");
    FUN_100d8906(uVar7,uVar8,uVar4,uVar13);
    uVar7 = extraout_ECX_42;
  }
  bVar1 = pbVar22[0x71];
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) && ((puVar25 == (undefined4 *)0x0 || (bVar1 != *(byte *)((int)puVar25 + 0x71)))))
  {
    uVar8 = uVar7;
    uVar13 = local_13b4;
    FUN_100d7fb0("enhanced");
    FUN_100d8906(uVar7,uVar8,uVar4,uVar13);
    uVar7 = extraout_ECX_43;
  }
  bVar1 = pbVar22[0x72];
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) && ((puVar25 == (undefined4 *)0x0 || (bVar1 != *(byte *)((int)puVar25 + 0x72)))))
  {
    uVar8 = uVar7;
    uVar13 = local_13b4;
    FUN_100d8992("dpadIconShowsAmmo");
    FUN_100d8906(uVar7,uVar8,uVar4,uVar13);
  }
  local_1400 = *(byte **)(pbVar22 + 4);
  if (puVar25 == (undefined4 *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = puVar25[1];
  }
  pbVar22 = *(byte **)local_1400;
  local_13f8 = (byte *)iVar5;
  if (pbVar22 != (byte *)0x0) {
    pbVar17 = local_1400;
    puVar21 = puVar23;
    if ((puVar25 == (undefined4 *)0x0) || (pbVar11 = *(byte **)puVar25[1], pbVar11 == (byte *)0x0))
    {
LAB_100dcb2f:
      pbVar22 = pbVar17;
      FUN_10080700(pbVar17,pbVar17);
      uVar10 = FUN_10080627(pbVar17,pbVar22);
      local_8 = 0x17;
      local_13e4 = (uint)puVar21 | 0x2000;
      uVar7 = extraout_ECX_44;
      uVar8 = extraout_ECX_44;
      uVar13 = local_13b4;
      FUN_100d83d8("szOverlayName");
      FUN_100d8af7(uVar7,uVar8,uVar10,uVar13);
      puVar23 = (ushort *)((uint)puVar21 & 0xffffdfff);
      local_13e4 = (uint)puVar23;
      guard_check_icall();
      local_8 = 3;
      if (((uint)puVar21 & 0x1000) != 0) {
        puVar23 = (ushort *)((uint)puVar21 & 0xffffcfff);
        local_13e4 = (uint)puVar23;
        guard_check_icall();
      }
    }
    else if (pbVar22 != pbVar11) {
      do {
        local_13c5 = *pbVar22;
        bVar26 = local_13c5 < *pbVar11;
        if (local_13c5 != *pbVar11) {
LAB_100dcb22:
          uVar4 = -(uint)bVar26 | 1;
          goto LAB_100dcb27;
        }
        if (local_13c5 == 0) break;
        local_13c5 = pbVar22[1];
        bVar26 = local_13c5 < pbVar11[1];
        if (local_13c5 != pbVar11[1]) goto LAB_100dcb22;
        pbVar22 = pbVar22 + 2;
        pbVar11 = pbVar11 + 2;
      } while (local_13c5 != 0);
      uVar4 = 0;
LAB_100dcb27:
      pbVar17 = pbVar22;
      puVar21 = local_13ec;
      puVar23 = local_13ec;
      if (uVar4 != 0) goto LAB_100dcb2f;
    }
  }
  if (iVar5 == 0) {
    local_13ec = (ushort *)0x0;
  }
  else {
    local_13ec = *(ushort **)(iVar5 + 4);
  }
  uVar7 = *(undefined4 *)(local_1400 + 4);
  FUN_10007684("gunXModel");
  local_8._0_1_ = 0x18;
  FUN_100d95f3(local_3f4,uVar7,0x10,local_13ec,local_13ac,local_13b4);
  local_8._0_1_ = 3;
  FUN_100075cd();
  pbVar22 = local_13e8;
  if (*(int *)(*(int *)(local_13e8 + 4) + 8) != 0) {
    FUN_100f2baa(4,*(undefined4 *)(*(int *)(local_13e8 + 4) + 8));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 8);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int *)(puVar25[1] + 8) == 0)) ||
        (piVar18 != *(int **)(puVar25[1] + 8))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x19);
        puVar23 = (ushort *)((uint)puVar23 | 0x4000);
        uVar7 = extraout_ECX_45;
      }
      else {
        piVar27 = piVar18;
        FUN_10080700(piVar18,piVar18);
        uVar8 = FUN_10080627(piVar18,piVar27);
        local_8 = 0x1a;
        puVar23 = (ushort *)((uint)puVar23 | 0x8000);
        uVar7 = extraout_ECX_46;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13e4 = (uint)puVar23;
      FUN_100d7d85("handXModel");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)puVar23 & 0x8000) != 0) {
        puVar23 = (ushort *)((uint)puVar23 & 0xffff7fff);
        local_13e4 = (uint)puVar23;
        guard_check_icall();
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if (((uint)puVar23 & 0x4000) != 0) {
        puVar23 = (ushort *)((uint)puVar23 & 0xffffbfff);
        local_13e4 = (uint)puVar23;
        guard_check_icall();
      }
    }
  }
  if (local_13f8 == (byte *)0x0) {
    local_13ec = (ushort *)0x0;
  }
  else {
    local_13ec = *(ushort **)((int)local_13f8 + 0xc);
  }
  uVar7 = *(undefined4 *)(*(int *)(pbVar22 + 4) + 0xc);
  FUN_10007684("szXAnimsRightHanded");
  local_8._0_1_ = 0x1b;
  FUN_100d9e07(local_40c,uVar7,local_13ec,local_13ac,local_13b4);
  local_8._0_1_ = 3;
  FUN_100075cd();
  if (local_13f8 == (byte *)0x0) {
    local_13ec = (ushort *)0x0;
  }
  else {
    local_13ec = *(ushort **)((int)local_13f8 + 0x10);
  }
  uVar7 = *(undefined4 *)(*(int *)(local_13e8 + 4) + 0x10);
  FUN_10007684("szXAnimsLeftHanded");
  local_8._0_1_ = 0x1c;
  FUN_100d9e07(local_424,uVar7,local_13ec,local_13ac,local_13b4);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_100075cd();
  pbVar22 = *(byte **)(*(int *)(local_13e8 + 4) + 0x14);
  uVar4 = (uint)puVar23;
  if (pbVar22 != (byte *)0x0) {
    pbVar17 = local_13e8;
    if ((puVar25 == (undefined4 *)0x0) ||
       (pbVar11 = *(byte **)(puVar25[1] + 0x14), pbVar11 == (byte *)0x0)) {
LAB_100dce54:
      pbVar22 = pbVar17;
      FUN_10080700(pbVar17,pbVar17);
      uVar10 = FUN_10080627(pbVar17,pbVar22);
      local_8 = 0x1e;
      local_13e4 = (uint)puVar23 | 0x20000;
      uVar7 = extraout_ECX_47;
      uVar8 = extraout_ECX_47;
      uVar13 = local_13b4;
      FUN_100d7d85("szModeName");
      FUN_100d8af7(uVar7,uVar8,uVar10,uVar13);
      uVar4 = (uint)puVar23 & 0xfffdffff;
      local_13e4 = uVar4;
      guard_check_icall();
      local_8 = 3;
      if (((uint)puVar23 & 0x10000) != 0) {
        uVar4 = (uint)puVar23 & 0xfffcffff;
        local_13e4 = uVar4;
        guard_check_icall();
      }
    }
    else if (pbVar22 != pbVar11) {
      do {
        bVar1 = *pbVar22;
        bVar26 = bVar1 < *pbVar11;
        if (bVar1 != *pbVar11) {
LAB_100dce47:
          uVar12 = -(uint)bVar26 | 1;
          goto LAB_100dce4c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar22[1];
        bVar26 = bVar1 < pbVar11[1];
        if (bVar1 != pbVar11[1]) goto LAB_100dce47;
        pbVar22 = pbVar22 + 2;
        pbVar11 = pbVar11 + 2;
      } while (bVar1 != 0);
      uVar12 = 0;
LAB_100dce4c:
      pbVar17 = pbVar22;
      if (uVar12 != 0) goto LAB_100dce54;
    }
  }
  if ((*(int *)(*(int *)(local_13e8 + 4) + 0x18) != 0) &&
     ((puVar25 == (undefined4 *)0x0 ||
      (*(int *)(*(int *)(local_13e8 + 4) + 0x18) != *(int *)(puVar25[1] + 0x18))))) {
    FUN_10081b38(4);
    local_8._0_1_ = 0x1f;
    local_13ec = (ushort *)0x0;
    iVar5 = local_13bc;
    do {
      puVar21 = local_13ec;
      uVar2 = *(ushort *)((int)local_13ec + *(int *)(*(int *)(local_13e8 + 4) + 0x18));
      if (uVar2 != 0) {
        local_1424 = (uint)uVar2;
        FUN_100d37b6(local_2a4,&local_1424);
        local_8._0_1_ = 0x20;
        iVar5 = FUN_100d42e6(local_2a4);
        if (iVar5 == 0) {
          uVar7 = FUN_10081b38(0);
          local_8 = CONCAT31(local_8._1_3_,0x21);
          uVar4 = uVar4 | 0x40000;
        }
        else {
          uVar7 = extraout_ECX_48;
          uVar8 = extraout_ECX_48;
          FUN_100d42e6(local_2a4);
          FUN_10080700(uVar7,uVar8);
          uVar7 = FUN_10080627(uVar7,uVar8);
          local_8 = 0x22;
          uVar4 = uVar4 | 0x80000;
          puVar21 = local_13ec;
        }
        local_13e4 = uVar4;
        FUN_100f341a(uVar7,local_13b4);
        if ((uVar4 & 0x80000) != 0) {
          uVar4 = uVar4 & 0xfff7ffff;
          local_13e4 = uVar4;
          guard_check_icall();
        }
        local_8 = 0x20;
        if ((uVar4 & 0x40000) != 0) {
          uVar4 = uVar4 & 0xfffbffff;
          local_13e4 = uVar4;
          guard_check_icall();
        }
        local_8._0_1_ = 0x1f;
        FUN_100075cd();
        iVar5 = local_13bc;
      }
      local_13ec = (ushort *)((int)puVar21 + 2);
    } while (local_13ec < 0x20);
    puVar28 = local_20c;
    iVar6 = iVar5;
    uVar7 = local_13b4;
    FUN_100f2fb5("notetrackSoundMapKeys");
    FUN_100d8af7(iVar5,iVar6,puVar28,uVar7);
    local_8 = CONCAT31(local_8._1_3_,3);
    guard_check_icall();
    puVar25 = local_13fc;
  }
  if ((*(int *)(*(int *)(local_13e8 + 4) + 0x1c) != 0) &&
     ((puVar25 == (undefined4 *)0x0 ||
      (*(int *)(*(int *)(local_13e8 + 4) + 0x1c) != *(int *)(puVar25[1] + 0x1c))))) {
    FUN_10081b38(4);
    local_8._0_1_ = 0x23;
    local_13ec = (ushort *)0x0;
    iVar5 = local_13bc;
    do {
      puVar21 = local_13ec;
      uVar2 = *(ushort *)((int)local_13ec + *(int *)(*(int *)(local_13e8 + 4) + 0x1c));
      if (uVar2 != 0) {
        local_1428 = (uint)uVar2;
        FUN_100d37b6(local_28c,&local_1428);
        local_8._0_1_ = 0x24;
        iVar5 = FUN_100d42e6(local_28c);
        if (iVar5 == 0) {
          uVar7 = FUN_10081b38(0);
          local_8 = CONCAT31(local_8._1_3_,0x25);
          uVar4 = uVar4 | 0x100000;
        }
        else {
          uVar7 = extraout_ECX_49;
          uVar8 = extraout_ECX_49;
          FUN_100d42e6(local_28c);
          FUN_10080700(uVar7,uVar8);
          uVar7 = FUN_10080627(uVar7,uVar8);
          local_8 = 0x26;
          uVar4 = uVar4 | 0x200000;
          puVar21 = local_13ec;
        }
        local_13e4 = uVar4;
        FUN_100f341a(uVar7,local_13b4);
        if ((uVar4 & 0x200000) != 0) {
          uVar4 = uVar4 & 0xffdfffff;
          local_13e4 = uVar4;
          guard_check_icall();
        }
        local_8 = 0x24;
        if ((uVar4 & 0x100000) != 0) {
          uVar4 = uVar4 & 0xffefffff;
          local_13e4 = uVar4;
          guard_check_icall();
        }
        local_8._0_1_ = 0x23;
        FUN_100075cd();
        iVar5 = local_13bc;
      }
      local_13ec = (ushort *)((int)puVar21 + 2);
    } while (local_13ec < 0x20);
    puVar28 = local_74;
    iVar6 = iVar5;
    uVar7 = local_13b4;
    FUN_100d7f29("notetrackSoundMapValues");
    FUN_100d8af7(iVar5,iVar6,puVar28,uVar7);
    local_8 = CONCAT31(local_8._1_3_,3);
    guard_check_icall();
    puVar25 = local_13fc;
  }
  if ((*(int *)(*(int *)(local_13e8 + 4) + 0x20) != 0) &&
     ((puVar25 == (undefined4 *)0x0 ||
      (*(int *)(*(int *)(local_13e8 + 4) + 0x20) != *(int *)(puVar25[1] + 0x20))))) {
    FUN_10081b38(4);
    local_8._0_1_ = 0x27;
    local_13ec = (ushort *)0x0;
    iVar5 = local_13bc;
    do {
      puVar21 = local_13ec;
      uVar2 = *(ushort *)((int)local_13ec + *(int *)(*(int *)(local_13e8 + 4) + 0x20));
      if (uVar2 != 0) {
        local_1420 = (uint)uVar2;
        FUN_100d37b6(local_274,&local_1420);
        local_8._0_1_ = 0x28;
        iVar5 = FUN_100d42e6(local_274);
        if (iVar5 == 0) {
          uVar7 = FUN_10081b38(0);
          local_8 = CONCAT31(local_8._1_3_,0x29);
          uVar4 = uVar4 | 0x400000;
        }
        else {
          uVar7 = extraout_ECX_50;
          uVar8 = extraout_ECX_50;
          FUN_100d42e6(local_274);
          FUN_10080700(uVar7,uVar8);
          uVar7 = FUN_10080627(uVar7,uVar8);
          local_8 = 0x2a;
          uVar4 = uVar4 | 0x800000;
          puVar21 = local_13ec;
        }
        local_13e4 = uVar4;
        FUN_100f341a(uVar7,local_13b4);
        if ((uVar4 & 0x800000) != 0) {
          uVar4 = uVar4 & 0xff7fffff;
          local_13e4 = uVar4;
          guard_check_icall();
        }
        local_8 = 0x28;
        if ((uVar4 & 0x400000) != 0) {
          uVar4 = uVar4 & 0xffbfffff;
          local_13e4 = uVar4;
          guard_check_icall();
        }
        local_8._0_1_ = 0x27;
        FUN_100075cd();
        iVar5 = local_13bc;
      }
      local_13ec = (ushort *)((int)puVar21 + 2);
    } while (local_13ec < 0x20);
    puVar28 = local_1ec;
    iVar6 = iVar5;
    uVar7 = local_13b4;
    FUN_100f2fca("notetrackRumbleMapKeys");
    FUN_100d8af7(iVar5,iVar6,puVar28,uVar7);
    local_8 = CONCAT31(local_8._1_3_,3);
    guard_check_icall();
    puVar25 = local_13fc;
  }
  if ((*(int *)(*(int *)(local_13e8 + 4) + 0x24) != 0) &&
     ((puVar25 == (undefined4 *)0x0 ||
      (*(int *)(*(int *)(local_13e8 + 4) + 0x24) != *(int *)(puVar25[1] + 0x24))))) {
    FUN_10081b38(4);
    local_8._0_1_ = 0x2b;
    local_13ec = (ushort *)0x0;
    iVar5 = local_13bc;
    do {
      puVar21 = local_13ec;
      uVar2 = *(ushort *)((int)local_13ec + *(int *)(*(int *)(local_13e8 + 4) + 0x24));
      if (uVar2 != 0) {
        local_1418 = (uint)uVar2;
        FUN_100d37b6(local_25c,&local_1418);
        local_8._0_1_ = 0x2c;
        iVar5 = FUN_100d42e6(local_25c);
        if (iVar5 == 0) {
          uVar7 = FUN_10081b38(0);
          local_8 = CONCAT31(local_8._1_3_,0x2d);
          uVar4 = uVar4 | 0x1000000;
        }
        else {
          uVar7 = extraout_ECX_51;
          uVar8 = extraout_ECX_51;
          FUN_100d42e6(local_25c);
          FUN_10080700(uVar7,uVar8);
          uVar7 = FUN_10080627(uVar7,uVar8);
          local_8 = 0x2e;
          uVar4 = uVar4 | 0x2000000;
          puVar21 = local_13ec;
        }
        local_13e4 = uVar4;
        FUN_100f341a(uVar7,local_13b4);
        if ((uVar4 & 0x2000000) != 0) {
          uVar4 = uVar4 & 0xfdffffff;
          local_13e4 = uVar4;
          guard_check_icall();
        }
        local_8 = 0x2c;
        if ((uVar4 & 0x1000000) != 0) {
          uVar4 = uVar4 & 0xfeffffff;
          local_13e4 = uVar4;
          guard_check_icall();
        }
        local_8._0_1_ = 0x2b;
        FUN_100075cd();
        iVar5 = local_13bc;
      }
      local_13ec = (ushort *)((int)puVar21 + 2);
    } while (local_13ec < 0x20);
    puVar28 = local_84;
    iVar6 = iVar5;
    uVar7 = local_13b4;
    FUN_100f2fdf("notetrackRumbleMapValues");
    FUN_100d8af7(iVar5,iVar6,puVar28,uVar7);
    local_8 = CONCAT31(local_8._1_3_,3);
    guard_check_icall();
    puVar25 = local_13fc;
  }
  pbVar22 = local_13e8;
  iVar5 = *(int *)(*(int *)(local_13e8 + 4) + 0x28);
  iVar6 = 0;
  if (iVar5 == 0) {
LAB_100dd58f:
    if (puVar25 != (undefined4 *)0x0) goto LAB_100dd593;
LAB_100dd5a5:
    if ((&PTR_s_WEAPTYPE_BULLET_10282070)[*(int *)(*(int *)(pbVar22 + 4) + 0x2c)] ==
        (undefined *)0x0) {
      uVar8 = FUN_10081b38(0);
      local_8 = CONCAT31(local_8._1_3_,0x2f);
      uVar4 = uVar4 | 0x4000000;
      uVar7 = extraout_ECX_53;
    }
    else {
      iVar5 = iVar6;
      FUN_10080700(iVar6,iVar6);
      uVar8 = FUN_10080627(iVar6,iVar5);
      local_8 = 0x30;
      uVar4 = uVar4 | 0x8000000;
      uVar7 = extraout_ECX_54;
    }
    uVar13 = uVar7;
    uVar10 = local_13b4;
    local_13e4 = uVar4;
    FUN_100d7fb0("weapType");
    FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
    iVar6 = extraout_ECX_55;
    if ((uVar4 & 0x8000000) != 0) {
      uVar4 = uVar4 & 0xf7ffffff;
      local_13e4 = uVar4;
      guard_check_icall();
      iVar6 = extraout_ECX_56;
    }
    local_8 = 3;
    if ((uVar4 & 0x4000000) != 0) {
      uVar4 = uVar4 & 0xfbffffff;
      local_13e4 = uVar4;
      guard_check_icall();
      iVar6 = extraout_ECX_57;
    }
  }
  else {
    if ((puVar25 == (undefined4 *)0x0) || (iVar5 != *(int *)(puVar25[1] + 0x28))) {
      iVar6 = iVar5;
      iVar16 = iVar5;
      uVar7 = local_13b4;
      FUN_100d834d("playerAnimType");
      FUN_100d7c54(iVar5,iVar6,iVar16,uVar7);
      iVar6 = extraout_ECX_52;
      goto LAB_100dd58f;
    }
LAB_100dd593:
    iVar6 = puVar25[1];
    if (*(int *)(*(int *)(pbVar22 + 4) + 0x2c) != *(int *)(iVar6 + 0x2c)) goto LAB_100dd5a5;
  }
  if ((puVar25 == (undefined4 *)0x0) ||
     (iVar6 = puVar25[1], *(int *)(*(int *)(pbVar22 + 4) + 0x30) != *(int *)(iVar6 + 0x30))) {
    if ((&PTR_s_WEAPCLASS_RIFLE_10282080)[*(int *)(*(int *)(pbVar22 + 4) + 0x30)] ==
        (undefined *)0x0) {
      uVar8 = FUN_10081b38(0);
      local_8 = CONCAT31(local_8._1_3_,0x31);
      uVar4 = uVar4 | 0x10000000;
      uVar7 = extraout_ECX_58;
    }
    else {
      iVar5 = iVar6;
      FUN_10080700(iVar6,iVar6);
      uVar8 = FUN_10080627(iVar6,iVar5);
      local_8 = 0x32;
      uVar4 = uVar4 | 0x20000000;
      uVar7 = extraout_ECX_59;
    }
    uVar13 = uVar7;
    uVar10 = local_13b4;
    local_13e4 = uVar4;
    FUN_100d7d10("weapClass");
    FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
    iVar6 = extraout_ECX_60;
    if ((uVar4 & 0x20000000) != 0) {
      uVar4 = uVar4 & 0xdfffffff;
      local_13e4 = uVar4;
      guard_check_icall();
      iVar6 = extraout_ECX_61;
    }
    local_8 = 3;
    if ((uVar4 & 0x10000000) != 0) {
      uVar4 = uVar4 & 0xefffffff;
      local_13e4 = uVar4;
      guard_check_icall();
      iVar6 = extraout_ECX_62;
    }
  }
  if ((puVar25 == (undefined4 *)0x0) ||
     (iVar6 = puVar25[1], *(int *)(*(int *)(pbVar22 + 4) + 0x34) != *(int *)(iVar6 + 0x34))) {
    if ((&PTR_s_PENETRATE_TYPE_NONE_10282030)[*(int *)(*(int *)(pbVar22 + 4) + 0x34)] ==
        (undefined *)0x0) {
      uVar8 = FUN_10081b38(0);
      local_8 = CONCAT31(local_8._1_3_,0x33);
      uVar4 = uVar4 | 0x40000000;
      uVar7 = extraout_ECX_63;
    }
    else {
      iVar5 = iVar6;
      FUN_10080700(iVar6,iVar6);
      uVar8 = FUN_10080627(iVar6,iVar5);
      local_8 = 0x34;
      uVar4 = uVar4 | 0x80000000;
      uVar7 = extraout_ECX_64;
    }
    uVar13 = uVar7;
    uVar10 = local_13b4;
    local_13e4 = uVar4;
    FUN_100d83d8("penetrateType");
    FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
    iVar5 = extraout_ECX_65;
    if ((int)uVar4 < 0) {
      uVar4 = uVar4 & 0x7fffffff;
      guard_check_icall();
      iVar5 = extraout_ECX_66;
    }
    local_8 = 3;
    if ((uVar4 & 0x40000000) != 0) {
      guard_check_icall();
      iVar5 = extraout_ECX_67;
    }
    if (puVar25 != (undefined4 *)0x0) goto LAB_100dd7de;
LAB_100dd7f0:
    if ((&PTR_s_WEAPINVENTORY_PRIMARY_10282050)[*(int *)(*(int *)(pbVar22 + 4) + 0x38)] ==
        (undefined *)0x0) {
      uVar8 = FUN_10081b38(0);
      local_8 = CONCAT31(local_8._1_3_,0x35);
      fVar24 = 1.4013e-45;
      uVar7 = extraout_ECX_68;
    }
    else {
      iVar6 = iVar5;
      FUN_10080700(iVar5,iVar5);
      uVar8 = FUN_10080627(iVar5,iVar6);
      local_8 = 0x36;
      fVar24 = 2.8026e-45;
      uVar7 = extraout_ECX_69;
    }
    uVar13 = uVar7;
    uVar10 = local_13b4;
    local_13cc = (uint)fVar24;
    FUN_100d83d8("inventoryType");
    FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
    iVar5 = extraout_ECX_70;
    if (((uint)fVar24 & 2) != 0) {
      fVar24 = (float)((uint)fVar24 & 0xfffffffd);
      local_13cc = (uint)fVar24;
      guard_check_icall();
      iVar5 = extraout_ECX_71;
    }
    local_8 = 3;
    if (((uint)fVar24 & 1) != 0) {
      local_13cc = (uint)fVar24 & 0xfffffffe;
      guard_check_icall();
      iVar5 = extraout_ECX_72;
      fVar24 = (float)((uint)fVar24 & 0xfffffffe);
    }
  }
  else {
LAB_100dd7de:
    iVar5 = puVar25[1];
    fVar24 = local_13a8;
    if (*(int *)(*(int *)(pbVar22 + 4) + 0x38) != *(int *)(iVar5 + 0x38)) goto LAB_100dd7f0;
  }
  if ((puVar25 == (undefined4 *)0x0) ||
     (iVar5 = puVar25[1], *(int *)(*(int *)(pbVar22 + 4) + 0x3c) != *(int *)(iVar5 + 0x3c))) {
    if ((&PTR_s_WEAPON_FIRETYPE_FULLAUTO_10281f70)[*(int *)(*(int *)(pbVar22 + 4) + 0x3c)] ==
        (undefined *)0x0) {
      uVar8 = FUN_10081b38(0);
      local_8 = CONCAT31(local_8._1_3_,0x37);
      fVar24 = (float)((uint)fVar24 | 4);
      uVar7 = extraout_ECX_73;
    }
    else {
      iVar6 = iVar5;
      FUN_10080700(iVar5,iVar5);
      uVar8 = FUN_10080627(iVar5,iVar6);
      local_8 = 0x38;
      fVar24 = (float)((uint)fVar24 | 8);
      uVar7 = extraout_ECX_74;
    }
    uVar13 = uVar7;
    uVar10 = local_13b4;
    local_13cc = (uint)fVar24;
    FUN_100d7fb0("fireType");
    FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
    iVar5 = extraout_ECX_75;
    if (((uint)fVar24 & 8) != 0) {
      fVar24 = (float)((uint)fVar24 & 0xfffffff7);
      local_13cc = (uint)fVar24;
      guard_check_icall();
      iVar5 = extraout_ECX_76;
    }
    local_8 = 3;
    if (((uint)fVar24 & 4) != 0) {
      fVar24 = (float)((uint)fVar24 & 0xfffffffb);
      local_13cc = (uint)fVar24;
      guard_check_icall();
      iVar5 = extraout_ECX_77;
    }
  }
  if ((puVar25 == (undefined4 *)0x0) ||
     (iVar5 = puVar25[1], *(int *)(*(int *)(pbVar22 + 4) + 0x40) != *(int *)(iVar5 + 0x40))) {
    if ((&PTR_s_OFFHAND_CLASS_NONE_10281f40)[*(int *)(*(int *)(pbVar22 + 4) + 0x40)] ==
        (undefined *)0x0) {
      uVar8 = FUN_10081b38(0);
      local_8 = CONCAT31(local_8._1_3_,0x39);
      fVar24 = (float)((uint)fVar24 | 0x10);
      uVar7 = extraout_ECX_78;
    }
    else {
      iVar6 = iVar5;
      FUN_10080700(iVar5,iVar5);
      uVar8 = FUN_10080627(iVar5,iVar6);
      local_8 = 0x3a;
      fVar24 = (float)((uint)fVar24 | 0x20);
      uVar7 = extraout_ECX_79;
    }
    uVar13 = uVar7;
    uVar10 = local_13b4;
    local_13cc = (uint)fVar24;
    FUN_100d7df7("offhandClass");
    FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
    iVar5 = extraout_ECX_80;
    if (((uint)fVar24 & 0x20) != 0) {
      fVar24 = (float)((uint)fVar24 & 0xffffffdf);
      local_13cc = (uint)fVar24;
      guard_check_icall();
      iVar5 = extraout_ECX_81;
    }
    local_8 = 3;
    if (((uint)fVar24 & 0x10) != 0) {
      fVar24 = (float)((uint)fVar24 & 0xffffffef);
      local_13cc = (uint)fVar24;
      guard_check_icall();
      iVar5 = extraout_ECX_82;
    }
  }
  if ((puVar25 == (undefined4 *)0x0) ||
     (iVar5 = puVar25[1], *(int *)(*(int *)(pbVar22 + 4) + 0x44) != *(int *)(iVar5 + 0x44))) {
    if ((&PTR_s_WEAPSTANCE_STAND_10281f60)[*(int *)(*(int *)(pbVar22 + 4) + 0x44)] ==
        (undefined *)0x0) {
      uVar8 = FUN_10081b38(0);
      local_8 = CONCAT31(local_8._1_3_,0x3b);
      fVar24 = (float)((uint)fVar24 | 0x40);
      uVar7 = extraout_ECX_83;
    }
    else {
      iVar6 = iVar5;
      FUN_10080700(iVar5,iVar5);
      uVar8 = FUN_10080627(iVar5,iVar6);
      local_8 = 0x3c;
      fVar24 = (float)((uint)fVar24 | 0x80);
      uVar7 = extraout_ECX_84;
    }
    uVar13 = uVar7;
    uVar10 = local_13b4;
    local_13cc = (uint)fVar24;
    FUN_100d838c("stance");
    FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
    if (SUB41(fVar24,0) < '\0') {
      fVar24 = (float)((uint)fVar24 & 0xffffff7f);
      local_13cc = (uint)fVar24;
      guard_check_icall();
    }
    local_8 = 3;
    if (((uint)fVar24 & 0x40) != 0) {
      fVar24 = (float)((uint)fVar24 & 0xffffffbf);
      local_13cc = (uint)fVar24;
      guard_check_icall();
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x48) != 0) {
    FUN_100f2ff4(0x1e,*(undefined4 *)(*(int *)(pbVar22 + 4) + 0x48));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x48);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int *)(puVar25[1] + 0x48) == 0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x48))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x3d);
        fVar24 = (float)((uint)fVar24 | 0x100);
        uVar7 = extraout_ECX_86;
      }
      else {
        uVar7 = extraout_ECX_85;
        uVar8 = extraout_ECX_85;
        FUN_10080700(extraout_ECX_85,extraout_ECX_85);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x3e;
        fVar24 = (float)((uint)fVar24 | 0x200);
        uVar7 = extraout_ECX_87;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13cc = (uint)fVar24;
      FUN_100d7f3e("viewFlashEffect");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)fVar24 & 0x200) != 0) {
        fVar24 = (float)((uint)fVar24 & 0xfffffdff);
        local_13cc = (uint)fVar24;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)fVar24 & 0x100) != 0) {
        fVar24 = (float)((uint)fVar24 & 0xfffffeff);
        local_13cc = (uint)fVar24;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x4c) != 0) {
    FUN_100f2ff4(0x1e,*(undefined4 *)(*(int *)(pbVar22 + 4) + 0x4c));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x4c);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int *)(puVar25[1] + 0x4c) == 0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x4c))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x3f);
        fVar24 = (float)((uint)fVar24 | 0x400);
        uVar7 = extraout_ECX_89;
      }
      else {
        uVar7 = extraout_ECX_88;
        uVar8 = extraout_ECX_88;
        FUN_10080700(extraout_ECX_88,extraout_ECX_88);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x40;
        fVar24 = (float)((uint)fVar24 | 0x800);
        uVar7 = extraout_ECX_90;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13cc = (uint)fVar24;
      FUN_100d897d("worldFlashEffect");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)fVar24 & 0x800) != 0) {
        fVar24 = (float)((uint)fVar24 & 0xfffff7ff);
        local_13cc = (uint)fVar24;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)fVar24 & 0x400) != 0) {
        fVar24 = (float)((uint)fVar24 & 0xfffffbff);
        local_13cc = (uint)fVar24;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x50) != 0) {
    FUN_100f2cb2(0xb,*(undefined4 *)(*(int *)(pbVar22 + 4) + 0x50));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x50);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int *)(puVar25[1] + 0x50) == 0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x50))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x41);
        fVar24 = (float)((uint)fVar24 | 0x1000);
        uVar7 = extraout_ECX_92;
      }
      else {
        uVar7 = extraout_ECX_91;
        uVar8 = extraout_ECX_91;
        FUN_10080700(extraout_ECX_91,extraout_ECX_91);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x42;
        fVar24 = (float)((uint)fVar24 | 0x2000);
        uVar7 = extraout_ECX_93;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13cc = (uint)fVar24;
      FUN_100d8362("pickupSound");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)fVar24 & 0x2000) != 0) {
        fVar24 = (float)((uint)fVar24 & 0xffffdfff);
        local_13cc = (uint)fVar24;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)fVar24 & 0x1000) != 0) {
        fVar24 = (float)((uint)fVar24 & 0xffffefff);
        local_13cc = (uint)fVar24;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x54) != 0) {
    FUN_100f2cb2(0xb,*(undefined4 *)(*(int *)(pbVar22 + 4) + 0x54));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x54);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int *)(puVar25[1] + 0x54) == 0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x54))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x43);
        fVar24 = (float)((uint)fVar24 | 0x4000);
        uVar7 = extraout_ECX_95;
      }
      else {
        uVar7 = extraout_ECX_94;
        uVar8 = extraout_ECX_94;
        FUN_10080700(extraout_ECX_94,extraout_ECX_94);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x44;
        fVar24 = (float)((uint)fVar24 | 0x8000);
        uVar7 = extraout_ECX_96;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13cc = (uint)fVar24;
      FUN_100d8992("pickupSoundPlayer");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)fVar24 & 0x8000) != 0) {
        fVar24 = (float)((uint)fVar24 & 0xffff7fff);
        local_13cc = (uint)fVar24;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)fVar24 & 0x4000) != 0) {
        fVar24 = (float)((uint)fVar24 & 0xffffbfff);
        local_13cc = (uint)fVar24;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x58) != 0) {
    FUN_100f2cb2(0xb,*(undefined4 *)(*(int *)(pbVar22 + 4) + 0x58));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x58);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int *)(puVar25[1] + 0x58) == 0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x58))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x45);
        fVar24 = (float)((uint)fVar24 | 0x10000);
        uVar7 = extraout_ECX_98;
      }
      else {
        uVar7 = extraout_ECX_97;
        uVar8 = extraout_ECX_97;
        FUN_10080700(extraout_ECX_97,extraout_ECX_97);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x46;
        fVar24 = (float)((uint)fVar24 | 0x20000);
        uVar7 = extraout_ECX_99;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13cc = (uint)fVar24;
      FUN_100d7f3e("ammoPickupSound");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)fVar24 & 0x20000) != 0) {
        fVar24 = (float)((uint)fVar24 & 0xfffdffff);
        local_13cc = (uint)fVar24;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)fVar24 & 0x10000) != 0) {
        fVar24 = (float)((uint)fVar24 & 0xfffeffff);
        local_13cc = (uint)fVar24;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x5c) != 0) {
    FUN_100f2cb2(0xb,*(undefined4 *)(*(int *)(pbVar22 + 4) + 0x5c));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x5c);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int *)(puVar25[1] + 0x5c) == 0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x5c))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x47);
        fVar24 = (float)((uint)fVar24 | 0x40000);
        uVar7 = extraout_ECX_x00101;
      }
      else {
        uVar7 = extraout_ECX_x00100;
        uVar8 = extraout_ECX_x00100;
        FUN_10080700(extraout_ECX_x00100,extraout_ECX_x00100);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x48;
        fVar24 = (float)((uint)fVar24 | 0x80000);
        uVar7 = extraout_ECX_x00102;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13cc = (uint)fVar24;
      FUN_100f2fb5("ammoPickupSoundPlayer");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)fVar24 & 0x80000) != 0) {
        fVar24 = (float)((uint)fVar24 & 0xfff7ffff);
        local_13cc = (uint)fVar24;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)fVar24 & 0x40000) != 0) {
        fVar24 = (float)((uint)fVar24 & 0xfffbffff);
        local_13cc = (uint)fVar24;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x60) != 0) {
    FUN_100f2cb2(0xb,*(undefined4 *)(*(int *)(pbVar22 + 4) + 0x60));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x60);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int *)(puVar25[1] + 0x60) == 0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x60))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x49);
        fVar24 = (float)((uint)fVar24 | 0x100000);
        uVar7 = extraout_ECX_x00104;
      }
      else {
        uVar7 = extraout_ECX_x00103;
        uVar8 = extraout_ECX_x00103;
        FUN_10080700(extraout_ECX_x00103,extraout_ECX_x00103);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x4a;
        fVar24 = (float)((uint)fVar24 | 0x200000);
        uVar7 = extraout_ECX_x00105;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13cc = (uint)fVar24;
      FUN_100d7f3e("projectileSound");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)fVar24 & 0x200000) != 0) {
        fVar24 = (float)((uint)fVar24 & 0xffdfffff);
        local_13cc = (uint)fVar24;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)fVar24 & 0x100000) != 0) {
        fVar24 = (float)((uint)fVar24 & 0xffefffff);
        local_13cc = (uint)fVar24;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 100) != 0) {
    FUN_100f2cb2(0xb,*(undefined4 *)(*(int *)(pbVar22 + 4) + 100));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 100);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int *)(puVar25[1] + 100) == 0)) ||
        (piVar18 != *(int **)(puVar25[1] + 100))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x4b);
        fVar24 = (float)((uint)fVar24 | 0x400000);
        uVar7 = extraout_ECX_x00107;
      }
      else {
        uVar7 = extraout_ECX_x00106;
        uVar8 = extraout_ECX_x00106;
        FUN_10080700(extraout_ECX_x00106,extraout_ECX_x00106);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x4c;
        fVar24 = (float)((uint)fVar24 | 0x800000);
        uVar7 = extraout_ECX_x00108;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13cc = (uint)fVar24;
      FUN_100d83d8("pullbackSound");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)fVar24 & 0x800000) != 0) {
        fVar24 = (float)((uint)fVar24 & 0xff7fffff);
        local_13cc = (uint)fVar24;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)fVar24 & 0x400000) != 0) {
        fVar24 = (float)((uint)fVar24 & 0xffbfffff);
        local_13cc = (uint)fVar24;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x68) != 0) {
    FUN_100f2cb2(0xb,*(undefined4 *)(*(int *)(pbVar22 + 4) + 0x68));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x68);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int *)(puVar25[1] + 0x68) == 0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x68))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x4d);
        fVar24 = (float)((uint)fVar24 | 0x1000000);
        uVar7 = extraout_ECX_x00110;
      }
      else {
        uVar7 = extraout_ECX_x00109;
        uVar8 = extraout_ECX_x00109;
        FUN_10080700(extraout_ECX_x00109,extraout_ECX_x00109);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x4e;
        fVar24 = (float)((uint)fVar24 | 0x2000000);
        uVar7 = extraout_ECX_x00111;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13cc = (uint)fVar24;
      FUN_100d8377("pullbackSoundPlayer");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)fVar24 & 0x2000000) != 0) {
        fVar24 = (float)((uint)fVar24 & 0xfdffffff);
        local_13cc = (uint)fVar24;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)fVar24 & 0x1000000) != 0) {
        fVar24 = (float)((uint)fVar24 & 0xfeffffff);
        local_13cc = (uint)fVar24;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x6c) != 0) {
    FUN_100f2cb2(0xb,*(undefined4 *)(*(int *)(pbVar22 + 4) + 0x6c));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x6c);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int *)(puVar25[1] + 0x6c) == 0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x6c))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x4f);
        fVar24 = (float)((uint)fVar24 | 0x4000000);
        uVar7 = extraout_ECX_x00113;
      }
      else {
        uVar7 = extraout_ECX_x00112;
        uVar8 = extraout_ECX_x00112;
        FUN_10080700(extraout_ECX_x00112,extraout_ECX_x00112);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x50;
        fVar24 = (float)((uint)fVar24 | 0x8000000);
        uVar7 = extraout_ECX_x00114;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13cc = (uint)fVar24;
      FUN_100d7d10("fireSound");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)fVar24 & 0x8000000) != 0) {
        fVar24 = (float)((uint)fVar24 & 0xf7ffffff);
        local_13cc = (uint)fVar24;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)fVar24 & 0x4000000) != 0) {
        fVar24 = (float)((uint)fVar24 & 0xfbffffff);
        local_13cc = (uint)fVar24;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x70) != 0) {
    FUN_100f2cb2(0xb,*(undefined4 *)(*(int *)(pbVar22 + 4) + 0x70));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x70);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int *)(puVar25[1] + 0x70) == 0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x70))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x51);
        fVar24 = (float)((uint)fVar24 | 0x10000000);
        uVar7 = extraout_ECX_x00116;
      }
      else {
        uVar7 = extraout_ECX_x00115;
        uVar8 = extraout_ECX_x00115;
        FUN_10080700(extraout_ECX_x00115,extraout_ECX_x00115);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x52;
        fVar24 = (float)((uint)fVar24 | 0x20000000);
        uVar7 = extraout_ECX_x00117;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13cc = (uint)fVar24;
      FUN_100d7f3e("fireSoundPlayer");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)fVar24 & 0x20000000) != 0) {
        fVar24 = (float)((uint)fVar24 & 0xdfffffff);
        local_13cc = (uint)fVar24;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)fVar24 & 0x10000000) != 0) {
        fVar24 = (float)((uint)fVar24 & 0xefffffff);
        local_13cc = (uint)fVar24;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x74) != 0) {
    FUN_100f2cb2(0xb,*(undefined4 *)(*(int *)(pbVar22 + 4) + 0x74));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x74);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int *)(puVar25[1] + 0x74) == 0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x74))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x53);
        uVar4 = (uint)fVar24 | 0x40000000;
        uVar7 = extraout_ECX_x00119;
      }
      else {
        uVar7 = extraout_ECX_x00118;
        uVar8 = extraout_ECX_x00118;
        FUN_10080700(extraout_ECX_x00118,extraout_ECX_x00118);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x54;
        uVar4 = (uint)fVar24 | 0x80000000;
        uVar7 = extraout_ECX_x00120;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13cc = uVar4;
      FUN_100f2fb5("fireSoundPlayerAkimbo");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((int)uVar4 < 0) {
        uVar4 = uVar4 & 0x7fffffff;
        guard_check_icall();
      }
      local_8 = 3;
      if ((uVar4 & 0x40000000) != 0) {
        guard_check_icall();
      }
    }
  }
  uVar4 = local_140c;
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x78) != 0) {
    FUN_100f2cb2(0xb,*(undefined4 *)(*(int *)(pbVar22 + 4) + 0x78));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x78);
    uVar4 = local_140c;
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int *)(puVar25[1] + 0x78) == 0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x78))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x55);
        uVar4 = 1;
        uVar7 = extraout_ECX_x00122;
      }
      else {
        uVar7 = extraout_ECX_x00121;
        uVar8 = extraout_ECX_x00121;
        FUN_10080700(extraout_ECX_x00121,extraout_ECX_x00121);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x56;
        uVar4 = 2;
        uVar7 = extraout_ECX_x00123;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d0 = uVar4;
      FUN_100d83d8("fireLoopSound");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((uVar4 & 2) != 0) {
        uVar4 = uVar4 & 0xfffffffd;
        local_13d0 = uVar4;
        guard_check_icall();
      }
      local_8 = 3;
      if ((uVar4 & 1) != 0) {
        local_13d0 = uVar4 & 0xfffffffe;
        guard_check_icall();
        uVar4 = uVar4 & 0xfffffffe;
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x7c) != 0) {
    FUN_100f2cb2(0xb,*(undefined4 *)(*(int *)(pbVar22 + 4) + 0x7c));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x7c);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int *)(puVar25[1] + 0x7c) == 0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x7c))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x57);
        uVar4 = uVar4 | 4;
        uVar7 = extraout_ECX_x00125;
      }
      else {
        uVar7 = extraout_ECX_x00124;
        uVar8 = extraout_ECX_x00124;
        FUN_10080700(extraout_ECX_x00124,extraout_ECX_x00124);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x58;
        uVar4 = uVar4 | 8;
        uVar7 = extraout_ECX_x00126;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d0 = uVar4;
      FUN_100d8377("fireLoopSoundPlayer");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((uVar4 & 8) != 0) {
        uVar4 = uVar4 & 0xfffffff7;
        local_13d0 = uVar4;
        guard_check_icall();
      }
      local_8 = 3;
      if ((uVar4 & 4) != 0) {
        uVar4 = uVar4 & 0xfffffffb;
        local_13d0 = uVar4;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x80) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0x80));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x80);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x80) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x80))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x59);
        uVar4 = uVar4 | 0x10;
        uVar7 = extraout_ECX_x00128;
      }
      else {
        uVar7 = extraout_ECX_x00127;
        uVar8 = extraout_ECX_x00127;
        FUN_10080700(extraout_ECX_x00127,extraout_ECX_x00127);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x5a;
        uVar4 = uVar4 | 0x20;
        uVar7 = extraout_ECX_x00129;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d0 = uVar4;
      FUN_100d83d8("fireStopSound");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((uVar4 & 0x20) != 0) {
        uVar4 = uVar4 & 0xffffffdf;
        local_13d0 = uVar4;
        guard_check_icall();
      }
      local_8 = 3;
      if ((uVar4 & 0x10) != 0) {
        uVar4 = uVar4 & 0xffffffef;
        local_13d0 = uVar4;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x84) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0x84));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x84);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x84) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x84))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x5b);
        uVar4 = uVar4 | 0x40;
        uVar7 = extraout_ECX_x00131;
      }
      else {
        uVar7 = extraout_ECX_x00130;
        uVar8 = extraout_ECX_x00130;
        FUN_10080700(extraout_ECX_x00130,extraout_ECX_x00130);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x5c;
        uVar4 = uVar4 | 0x80;
        uVar7 = extraout_ECX_x00132;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d0 = uVar4;
      FUN_100d8377("fireStopSoundPlayer");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((char)uVar4 < '\0') {
        uVar4 = uVar4 & 0xffffff7f;
        local_13d0 = uVar4;
        guard_check_icall();
      }
      local_8 = 3;
      if ((uVar4 & 0x40) != 0) {
        uVar4 = uVar4 & 0xffffffbf;
        local_13d0 = uVar4;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x88) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0x88));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x88);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x88) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x88))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x5d);
        uVar4 = uVar4 | 0x100;
        uVar7 = extraout_ECX_x00134;
      }
      else {
        uVar7 = extraout_ECX_x00133;
        uVar8 = extraout_ECX_x00133;
        FUN_10080700(extraout_ECX_x00133,extraout_ECX_x00133);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x5e;
        uVar4 = uVar4 | 0x200;
        uVar7 = extraout_ECX_x00135;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d0 = uVar4;
      FUN_100d83d8("fireLastSound");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((uVar4 & 0x200) != 0) {
        uVar4 = uVar4 & 0xfffffdff;
        local_13d0 = uVar4;
        guard_check_icall();
      }
      local_8 = 3;
      if ((uVar4 & 0x100) != 0) {
        uVar4 = uVar4 & 0xfffffeff;
        local_13d0 = uVar4;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x8c) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0x8c));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x8c);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x8c) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x8c))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x5f);
        uVar4 = uVar4 | 0x400;
        uVar7 = extraout_ECX_x00137;
      }
      else {
        uVar7 = extraout_ECX_x00136;
        uVar8 = extraout_ECX_x00136;
        FUN_10080700(extraout_ECX_x00136,extraout_ECX_x00136);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x60;
        uVar4 = uVar4 | 0x800;
        uVar7 = extraout_ECX_x00138;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d0 = uVar4;
      FUN_100d8377("fireLastSoundPlayer");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((uVar4 & 0x800) != 0) {
        uVar4 = uVar4 & 0xfffff7ff;
        local_13d0 = uVar4;
        guard_check_icall();
      }
      local_8 = 3;
      if ((uVar4 & 0x400) != 0) {
        uVar4 = uVar4 & 0xfffffbff;
        local_13d0 = uVar4;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x90) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0x90));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x90);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x90) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x90))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x61);
        uVar4 = uVar4 | 0x1000;
        uVar7 = extraout_ECX_x00140;
      }
      else {
        uVar7 = extraout_ECX_x00139;
        uVar8 = extraout_ECX_x00139;
        FUN_10080700(extraout_ECX_x00139,extraout_ECX_x00139);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x62;
        uVar4 = uVar4 | 0x2000;
        uVar7 = extraout_ECX_x00141;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d0 = uVar4;
      FUN_100d834d("emptyFireSound");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((uVar4 & 0x2000) != 0) {
        uVar4 = uVar4 & 0xffffdfff;
        local_13d0 = uVar4;
        guard_check_icall();
      }
      local_8 = 3;
      if ((uVar4 & 0x1000) != 0) {
        uVar4 = uVar4 & 0xffffefff;
        local_13d0 = uVar4;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x94) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0x94));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x94);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x94) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x94))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,99);
        uVar4 = uVar4 | 0x4000;
        uVar7 = extraout_ECX_x00143;
      }
      else {
        uVar7 = extraout_ECX_x00142;
        uVar8 = extraout_ECX_x00142;
        FUN_10080700(extraout_ECX_x00142,extraout_ECX_x00142);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 100;
        uVar4 = uVar4 | 0x8000;
        uVar7 = extraout_ECX_x00144;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d0 = uVar4;
      FUN_100d7f14("emptyFireSoundPlayer");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((uVar4 & 0x8000) != 0) {
        uVar4 = uVar4 & 0xffff7fff;
        local_13d0 = uVar4;
        guard_check_icall();
      }
      local_8 = 3;
      if ((uVar4 & 0x4000) != 0) {
        uVar4 = uVar4 & 0xffffbfff;
        local_13d0 = uVar4;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x98) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0x98));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x98);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x98) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x98))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x65);
        uVar4 = uVar4 | 0x10000;
        uVar7 = extraout_ECX_x00146;
      }
      else {
        uVar7 = extraout_ECX_x00145;
        uVar8 = extraout_ECX_x00145;
        FUN_10080700(extraout_ECX_x00145,extraout_ECX_x00145);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x66;
        uVar4 = uVar4 | 0x20000;
        uVar7 = extraout_ECX_x00147;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d0 = uVar4;
      FUN_100d7f3e("meleeSwipeSound");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((uVar4 & 0x20000) != 0) {
        uVar4 = uVar4 & 0xfffdffff;
        local_13d0 = uVar4;
        guard_check_icall();
      }
      local_8 = 3;
      if ((uVar4 & 0x10000) != 0) {
        uVar4 = uVar4 & 0xfffeffff;
        local_13d0 = uVar4;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x9c) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0x9c));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x9c);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x9c) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x9c))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x67);
        uVar4 = uVar4 | 0x40000;
        uVar7 = extraout_ECX_x00149;
      }
      else {
        uVar7 = extraout_ECX_x00148;
        uVar8 = extraout_ECX_x00148;
        FUN_10080700(extraout_ECX_x00148,extraout_ECX_x00148);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x68;
        uVar4 = uVar4 | 0x80000;
        uVar7 = extraout_ECX_x00150;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d0 = uVar4;
      FUN_100f2fb5("meleeSwipeSoundPlayer");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((uVar4 & 0x80000) != 0) {
        uVar4 = uVar4 & 0xfff7ffff;
        local_13d0 = uVar4;
        guard_check_icall();
      }
      local_8 = 3;
      if ((uVar4 & 0x40000) != 0) {
        uVar4 = uVar4 & 0xfffbffff;
        local_13d0 = uVar4;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0xa0) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0xa0));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0xa0);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0xa0) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0xa0))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x69);
        uVar4 = uVar4 | 0x100000;
        uVar7 = extraout_ECX_x00152;
      }
      else {
        uVar7 = extraout_ECX_x00151;
        uVar8 = extraout_ECX_x00151;
        FUN_10080700(extraout_ECX_x00151,extraout_ECX_x00151);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x6a;
        uVar4 = uVar4 | 0x200000;
        uVar7 = extraout_ECX_x00153;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d0 = uVar4;
      FUN_100d83d8("meleeHitSound");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((uVar4 & 0x200000) != 0) {
        uVar4 = uVar4 & 0xffdfffff;
        local_13d0 = uVar4;
        guard_check_icall();
      }
      local_8 = 3;
      if ((uVar4 & 0x100000) != 0) {
        uVar4 = uVar4 & 0xffefffff;
        local_13d0 = uVar4;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0xa4) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0xa4));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0xa4);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0xa4) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0xa4))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x6b);
        uVar4 = uVar4 | 0x400000;
        uVar7 = extraout_ECX_x00155;
      }
      else {
        uVar7 = extraout_ECX_x00154;
        uVar8 = extraout_ECX_x00154;
        FUN_10080700(extraout_ECX_x00154,extraout_ECX_x00154);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x6c;
        uVar4 = uVar4 | 0x800000;
        uVar7 = extraout_ECX_x00156;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d0 = uVar4;
      FUN_100d834d("meleeMissSound");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((uVar4 & 0x800000) != 0) {
        uVar4 = uVar4 & 0xff7fffff;
        local_13d0 = uVar4;
        guard_check_icall();
      }
      local_8 = 3;
      if ((uVar4 & 0x400000) != 0) {
        uVar4 = uVar4 & 0xffbfffff;
        local_13d0 = uVar4;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0xa8) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0xa8));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0xa8);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0xa8) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0xa8))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x6d);
        uVar4 = uVar4 | 0x1000000;
        uVar7 = extraout_ECX_x00158;
      }
      else {
        uVar7 = extraout_ECX_x00157;
        uVar8 = extraout_ECX_x00157;
        FUN_10080700(extraout_ECX_x00157,extraout_ECX_x00157);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x6e;
        uVar4 = uVar4 | 0x2000000;
        uVar7 = extraout_ECX_x00159;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d0 = uVar4;
      FUN_100d834d("rechamberSound");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((uVar4 & 0x2000000) != 0) {
        uVar4 = uVar4 & 0xfdffffff;
        local_13d0 = uVar4;
        guard_check_icall();
      }
      local_8 = 3;
      if ((uVar4 & 0x1000000) != 0) {
        uVar4 = uVar4 & 0xfeffffff;
        local_13d0 = uVar4;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0xac) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0xac));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0xac);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0xac) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0xac))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x6f);
        uVar4 = uVar4 | 0x4000000;
        uVar7 = extraout_ECX_x00161;
      }
      else {
        uVar7 = extraout_ECX_x00160;
        uVar8 = extraout_ECX_x00160;
        FUN_10080700(extraout_ECX_x00160,extraout_ECX_x00160);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x70;
        uVar4 = uVar4 | 0x8000000;
        uVar7 = extraout_ECX_x00162;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d0 = uVar4;
      FUN_100d7f14("rechamberSoundPlayer");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((uVar4 & 0x8000000) != 0) {
        uVar4 = uVar4 & 0xf7ffffff;
        local_13d0 = uVar4;
        guard_check_icall();
      }
      local_8 = 3;
      if ((uVar4 & 0x4000000) != 0) {
        uVar4 = uVar4 & 0xfbffffff;
        local_13d0 = uVar4;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0xb0) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0xb0));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0xb0);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0xb0) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0xb0))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x71);
        uVar4 = uVar4 | 0x10000000;
        uVar7 = extraout_ECX_x00164;
      }
      else {
        uVar7 = extraout_ECX_x00163;
        uVar8 = extraout_ECX_x00163;
        FUN_10080700(extraout_ECX_x00163,extraout_ECX_x00163);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x72;
        uVar4 = uVar4 | 0x20000000;
        uVar7 = extraout_ECX_x00165;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d0 = uVar4;
      FUN_100d8362("reloadSound");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((uVar4 & 0x20000000) != 0) {
        uVar4 = uVar4 & 0xdfffffff;
        local_13d0 = uVar4;
        guard_check_icall();
      }
      local_8 = 3;
      if ((uVar4 & 0x10000000) != 0) {
        uVar4 = uVar4 & 0xefffffff;
        local_13d0 = uVar4;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0xb4) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0xb4));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0xb4);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0xb4) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0xb4))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x73);
        uVar4 = uVar4 | 0x40000000;
        uVar7 = extraout_ECX_x00167;
      }
      else {
        uVar7 = extraout_ECX_x00166;
        uVar8 = extraout_ECX_x00166;
        FUN_10080700(extraout_ECX_x00166,extraout_ECX_x00166);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x74;
        uVar4 = uVar4 | 0x80000000;
        uVar7 = extraout_ECX_x00168;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d0 = uVar4;
      FUN_100d8992("reloadSoundPlayer");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((int)uVar4 < 0) {
        uVar4 = uVar4 & 0x7fffffff;
        guard_check_icall();
      }
      local_8 = 3;
      if ((uVar4 & 0x40000000) != 0) {
        guard_check_icall();
      }
    }
  }
  pbVar17 = local_1408;
  if (*(int *)(*(int *)(pbVar22 + 4) + 0xb8) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0xb8));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0xb8);
    pbVar17 = local_1408;
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0xb8) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0xb8))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x75);
        pbVar17 = (byte *)0x1;
        uVar7 = extraout_ECX_x00170;
      }
      else {
        uVar7 = extraout_ECX_x00169;
        uVar8 = extraout_ECX_x00169;
        FUN_10080700(extraout_ECX_x00169,extraout_ECX_x00169);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x76;
        pbVar17 = (byte *)0x2;
        uVar7 = extraout_ECX_x00171;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d4 = (uint)pbVar17;
      FUN_100d897d("reloadEmptySound");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)pbVar17 & 2) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xfffffffd);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)pbVar17 & 1) != 0) {
        local_13d4 = (uint)pbVar17 & 0xfffffffe;
        guard_check_icall();
        pbVar17 = (byte *)((uint)pbVar17 & 0xfffffffe);
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0xbc) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0xbc));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0xbc);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0xbc) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0xbc))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x77);
        pbVar17 = (byte *)((uint)pbVar17 | 4);
        uVar7 = extraout_ECX_x00173;
      }
      else {
        uVar7 = extraout_ECX_x00172;
        uVar8 = extraout_ECX_x00172;
        FUN_10080700(extraout_ECX_x00172,extraout_ECX_x00172);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x78;
        pbVar17 = (byte *)((uint)pbVar17 | 8);
        uVar7 = extraout_ECX_x00174;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d4 = (uint)pbVar17;
      FUN_100f2fca("reloadEmptySoundPlayer");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)pbVar17 & 8) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xfffffff7);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)pbVar17 & 4) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xfffffffb);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0xc0) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0xc0));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0xc0);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0xc0) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0xc0))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x79);
        pbVar17 = (byte *)((uint)pbVar17 | 0x10);
        uVar7 = extraout_ECX_x00176;
      }
      else {
        uVar7 = extraout_ECX_x00175;
        uVar8 = extraout_ECX_x00175;
        FUN_10080700(extraout_ECX_x00175,extraout_ECX_x00175);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x7a;
        pbVar17 = (byte *)((uint)pbVar17 | 0x20);
        uVar7 = extraout_ECX_x00177;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d4 = (uint)pbVar17;
      FUN_100d897d("reloadStartSound");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)pbVar17 & 0x20) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xffffffdf);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)pbVar17 & 0x10) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xffffffef);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0xc4) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0xc4));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0xc4);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0xc4) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0xc4))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x7b);
        pbVar17 = (byte *)((uint)pbVar17 | 0x40);
        uVar7 = extraout_ECX_x00179;
      }
      else {
        uVar7 = extraout_ECX_x00178;
        uVar8 = extraout_ECX_x00178;
        FUN_10080700(extraout_ECX_x00178,extraout_ECX_x00178);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x7c;
        pbVar17 = (byte *)((uint)pbVar17 | 0x80);
        uVar7 = extraout_ECX_x00180;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d4 = (uint)pbVar17;
      FUN_100f2fca("reloadStartSoundPlayer");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((char)pbVar17 < '\0') {
        pbVar17 = (byte *)((uint)pbVar17 & 0xffffff7f);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)pbVar17 & 0x40) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xffffffbf);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 200) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 200));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 200);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 200) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 200))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x7d);
        pbVar17 = (byte *)((uint)pbVar17 | 0x100);
        uVar7 = extraout_ECX_x00182;
      }
      else {
        uVar7 = extraout_ECX_x00181;
        uVar8 = extraout_ECX_x00181;
        FUN_10080700(extraout_ECX_x00181,extraout_ECX_x00181);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x7e;
        pbVar17 = (byte *)((uint)pbVar17 | 0x200);
        uVar7 = extraout_ECX_x00183;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d4 = (uint)pbVar17;
      FUN_100d834d("reloadEndSound");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)pbVar17 & 0x200) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xfffffdff);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)pbVar17 & 0x100) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xfffffeff);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0xcc) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0xcc));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0xcc);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0xcc) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0xcc))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x7f);
        pbVar17 = (byte *)((uint)pbVar17 | 0x400);
        uVar7 = extraout_ECX_x00185;
      }
      else {
        uVar7 = extraout_ECX_x00184;
        uVar8 = extraout_ECX_x00184;
        FUN_10080700(extraout_ECX_x00184,extraout_ECX_x00184);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x80;
        pbVar17 = (byte *)((uint)pbVar17 | 0x800);
        uVar7 = extraout_ECX_x00186;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d4 = (uint)pbVar17;
      FUN_100d7f14("reloadEndSoundPlayer");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)pbVar17 & 0x800) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xfffff7ff);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)pbVar17 & 0x400) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xfffffbff);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0xd0) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0xd0));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0xd0);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0xd0) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0xd0))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x81);
        pbVar17 = (byte *)((uint)pbVar17 | 0x1000);
        uVar7 = extraout_ECX_x00188;
      }
      else {
        uVar7 = extraout_ECX_x00187;
        uVar8 = extraout_ECX_x00187;
        FUN_10080700(extraout_ECX_x00187,extraout_ECX_x00187);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x82;
        pbVar17 = (byte *)((uint)pbVar17 | 0x2000);
        uVar7 = extraout_ECX_x00189;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d4 = (uint)pbVar17;
      FUN_100d83d8("detonateSound");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)pbVar17 & 0x2000) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xffffdfff);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)pbVar17 & 0x1000) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xffffefff);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0xd4) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0xd4));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0xd4);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0xd4) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0xd4))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x83);
        pbVar17 = (byte *)((uint)pbVar17 | 0x4000);
        uVar7 = extraout_ECX_x00191;
      }
      else {
        uVar7 = extraout_ECX_x00190;
        uVar8 = extraout_ECX_x00190;
        FUN_10080700(extraout_ECX_x00190,extraout_ECX_x00190);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x84;
        pbVar17 = (byte *)((uint)pbVar17 | 0x8000);
        uVar7 = extraout_ECX_x00192;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d4 = (uint)pbVar17;
      FUN_100d8377("detonateSoundPlayer");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)pbVar17 & 0x8000) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xffff7fff);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)pbVar17 & 0x4000) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xffffbfff);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0xd8) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0xd8));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0xd8);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0xd8) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0xd8))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x85);
        pbVar17 = (byte *)((uint)pbVar17 | 0x10000);
        uVar7 = extraout_ECX_x00194;
      }
      else {
        uVar7 = extraout_ECX_x00193;
        uVar8 = extraout_ECX_x00193;
        FUN_10080700(extraout_ECX_x00193,extraout_ECX_x00193);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x86;
        pbVar17 = (byte *)((uint)pbVar17 | 0x20000);
        uVar7 = extraout_ECX_x00195;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d4 = (uint)pbVar17;
      FUN_100d7f14("nightVisionWearSound");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)pbVar17 & 0x20000) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xfffdffff);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)pbVar17 & 0x10000) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xfffeffff);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0xdc) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0xdc));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0xdc);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0xdc) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0xdc))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x87);
        pbVar17 = (byte *)((uint)pbVar17 | 0x40000);
        uVar7 = extraout_ECX_x00197;
      }
      else {
        uVar7 = extraout_ECX_x00196;
        uVar8 = extraout_ECX_x00196;
        FUN_10080700(extraout_ECX_x00196,extraout_ECX_x00196);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x88;
        pbVar17 = (byte *)((uint)pbVar17 | 0x80000);
        uVar7 = extraout_ECX_x00198;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d4 = (uint)pbVar17;
      FUN_100f30fc("nightVisionWearSoundPlayer");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)pbVar17 & 0x80000) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xfff7ffff);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)pbVar17 & 0x40000) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xfffbffff);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0xe0) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0xe0));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0xe0);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0xe0) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0xe0))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x89);
        pbVar17 = (byte *)((uint)pbVar17 | 0x100000);
        uVar7 = extraout_ECX_x00200;
      }
      else {
        uVar7 = extraout_ECX_x00199;
        uVar8 = extraout_ECX_x00199;
        FUN_10080700(extraout_ECX_x00199,extraout_ECX_x00199);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x8a;
        pbVar17 = (byte *)((uint)pbVar17 | 0x200000);
        uVar7 = extraout_ECX_x00201;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d4 = (uint)pbVar17;
      FUN_100f2fca("nightVisionRemoveSound");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)pbVar17 & 0x200000) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xffdfffff);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)pbVar17 & 0x100000) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xffefffff);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0xe4) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0xe4));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0xe4);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0xe4) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0xe4))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x8b);
        pbVar17 = (byte *)((uint)pbVar17 | 0x400000);
        uVar7 = extraout_ECX_x00203;
      }
      else {
        uVar7 = extraout_ECX_x00202;
        uVar8 = extraout_ECX_x00202;
        FUN_10080700(extraout_ECX_x00202,extraout_ECX_x00202);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x8c;
        pbVar17 = (byte *)((uint)pbVar17 | 0x800000);
        uVar7 = extraout_ECX_x00204;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d4 = (uint)pbVar17;
      FUN_100f3111("nightVisionRemoveSoundPlayer");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)pbVar17 & 0x800000) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xff7fffff);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)pbVar17 & 0x400000) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xffbfffff);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0xe8) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0xe8));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0xe8);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0xe8) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0xe8))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x8d);
        pbVar17 = (byte *)((uint)pbVar17 | 0x1000000);
        uVar7 = extraout_ECX_x00206;
      }
      else {
        uVar7 = extraout_ECX_x00205;
        uVar8 = extraout_ECX_x00205;
        FUN_10080700(extraout_ECX_x00205,extraout_ECX_x00205);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x8e;
        pbVar17 = (byte *)((uint)pbVar17 | 0x2000000);
        uVar7 = extraout_ECX_x00207;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d4 = (uint)pbVar17;
      FUN_100d834d("altSwitchSound");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)pbVar17 & 0x2000000) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xfdffffff);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)pbVar17 & 0x1000000) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xfeffffff);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0xec) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0xec));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0xec);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0xec) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0xec))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x8f);
        pbVar17 = (byte *)((uint)pbVar17 | 0x4000000);
        uVar7 = extraout_ECX_x00209;
      }
      else {
        uVar7 = extraout_ECX_x00208;
        uVar8 = extraout_ECX_x00208;
        FUN_10080700(extraout_ECX_x00208,extraout_ECX_x00208);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x90;
        pbVar17 = (byte *)((uint)pbVar17 | 0x8000000);
        uVar7 = extraout_ECX_x00210;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d4 = (uint)pbVar17;
      FUN_100d7f14("altSwitchSoundPlayer");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)pbVar17 & 0x8000000) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xf7ffffff);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)pbVar17 & 0x4000000) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xfbffffff);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0xf0) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0xf0));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0xf0);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0xf0) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0xf0))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x91);
        pbVar17 = (byte *)((uint)pbVar17 | 0x10000000);
        uVar7 = extraout_ECX_x00212;
      }
      else {
        uVar7 = extraout_ECX_x00211;
        uVar8 = extraout_ECX_x00211;
        FUN_10080700(extraout_ECX_x00211,extraout_ECX_x00211);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x92;
        pbVar17 = (byte *)((uint)pbVar17 | 0x20000000);
        uVar7 = extraout_ECX_x00213;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d4 = (uint)pbVar17;
      FUN_100d7d85("raiseSound");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if (((uint)pbVar17 & 0x20000000) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xdfffffff);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
      local_8 = 3;
      if (((uint)pbVar17 & 0x10000000) != 0) {
        pbVar17 = (byte *)((uint)pbVar17 & 0xefffffff);
        local_13d4 = (uint)pbVar17;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0xf4) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0xf4));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0xf4);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0xf4) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0xf4))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x93);
        uVar4 = (uint)pbVar17 | 0x40000000;
        uVar7 = extraout_ECX_x00215;
      }
      else {
        uVar7 = extraout_ECX_x00214;
        uVar8 = extraout_ECX_x00214;
        FUN_10080700(extraout_ECX_x00214,extraout_ECX_x00214);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x94;
        uVar4 = (uint)pbVar17 | 0x80000000;
        uVar7 = extraout_ECX_x00216;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d4 = uVar4;
      FUN_100d897d("raiseSoundPlayer");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((int)uVar4 < 0) {
        uVar4 = uVar4 & 0x7fffffff;
        guard_check_icall();
      }
      local_8 = 3;
      if ((uVar4 & 0x40000000) != 0) {
        guard_check_icall();
      }
    }
  }
  uVar4 = local_13dc;
  if (*(int *)(*(int *)(pbVar22 + 4) + 0xf8) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0xf8));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0xf8);
    uVar4 = local_13dc;
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0xf8) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0xf8))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x95);
        uVar4 = 1;
        uVar7 = extraout_ECX_x00218;
      }
      else {
        uVar7 = extraout_ECX_x00217;
        uVar8 = extraout_ECX_x00217;
        FUN_10080700(extraout_ECX_x00217,extraout_ECX_x00217);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x96;
        uVar4 = 2;
        uVar7 = extraout_ECX_x00219;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13dc = uVar4;
      local_13d8 = uVar4;
      FUN_100d7f3e("firstRaiseSound");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((uVar4 & 2) != 0) {
        uVar4 = uVar4 & 0xfffffffd;
        local_13dc = uVar4;
        local_13d8 = uVar4;
        guard_check_icall();
      }
      local_8 = 3;
      if ((uVar4 & 1) != 0) {
        uVar4 = uVar4 & 0xfffffffe;
        local_13dc = uVar4;
        local_13d8 = uVar4;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0xfc) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0xfc));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0xfc);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0xfc) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0xfc))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x97);
        uVar4 = uVar4 | 4;
        uVar7 = extraout_ECX_x00221;
      }
      else {
        uVar7 = extraout_ECX_x00220;
        uVar8 = extraout_ECX_x00220;
        FUN_10080700(extraout_ECX_x00220,extraout_ECX_x00220);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x98;
        uVar4 = uVar4 | 8;
        uVar7 = extraout_ECX_x00222;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13dc = uVar4;
      local_13d8 = uVar4;
      FUN_100f2fb5("firstRaiseSoundPlayer");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((uVar4 & 8) != 0) {
        uVar4 = uVar4 & 0xfffffff7;
        local_13dc = uVar4;
        local_13d8 = uVar4;
        guard_check_icall();
      }
      local_8 = 3;
      if ((uVar4 & 4) != 0) {
        uVar4 = uVar4 & 0xfffffffb;
        local_13dc = uVar4;
        local_13d8 = uVar4;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x100) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0x100));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x100);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x100) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x100))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x99);
        uVar4 = uVar4 | 0x10;
        uVar7 = extraout_ECX_x00224;
      }
      else {
        uVar7 = extraout_ECX_x00223;
        uVar8 = extraout_ECX_x00223;
        FUN_10080700(extraout_ECX_x00223,extraout_ECX_x00223);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x9a;
        uVar4 = uVar4 | 0x20;
        uVar7 = extraout_ECX_x00225;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13dc = uVar4;
      local_13d8 = uVar4;
      FUN_100d7df7("putawaySound");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((uVar4 & 0x20) != 0) {
        uVar4 = uVar4 & 0xffffffdf;
        local_13dc = uVar4;
        local_13d8 = uVar4;
        guard_check_icall();
      }
      local_8 = 3;
      if ((uVar4 & 0x10) != 0) {
        uVar4 = uVar4 & 0xffffffef;
        local_13dc = uVar4;
        local_13d8 = uVar4;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x104) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0x104));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x104);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x104) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x104))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x9b);
        uVar4 = uVar4 | 0x40;
        uVar7 = extraout_ECX_x00227;
      }
      else {
        uVar7 = extraout_ECX_x00226;
        uVar8 = extraout_ECX_x00226;
        FUN_10080700(extraout_ECX_x00226,extraout_ECX_x00226);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x9c;
        uVar4 = uVar4 | 0x80;
        uVar7 = extraout_ECX_x00228;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13dc = uVar4;
      local_13d8 = uVar4;
      FUN_100d8968("putawaySoundPlayer");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((char)uVar4 < '\0') {
        uVar4 = uVar4 & 0xffffff7f;
        local_13dc = uVar4;
        local_13d8 = uVar4;
        guard_check_icall();
      }
      local_8 = 3;
      if ((uVar4 & 0x40) != 0) {
        uVar4 = uVar4 & 0xffffffbf;
        local_13dc = uVar4;
        local_13d8 = uVar4;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x108) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0x108));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x108);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x108) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x108))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0x9d);
        uVar4 = uVar4 | 0x100;
        uVar7 = extraout_ECX_x00230;
      }
      else {
        uVar7 = extraout_ECX_x00229;
        uVar8 = extraout_ECX_x00229;
        FUN_10080700(extraout_ECX_x00229,extraout_ECX_x00229);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x9e;
        uVar4 = uVar4 | 0x200;
        uVar7 = extraout_ECX_x00231;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13dc = uVar4;
      local_13d8 = uVar4;
      FUN_100d7d10("scanSound");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((uVar4 & 0x200) != 0) {
        uVar4 = uVar4 & 0xfffffdff;
        local_13dc = uVar4;
        local_13d8 = uVar4;
        guard_check_icall();
      }
      local_8 = 3;
      if ((uVar4 & 0x100) != 0) {
        local_13dc = uVar4 & 0xfffffeff;
        local_13d8 = local_13dc;
        guard_check_icall();
      }
    }
  }
  if (local_13f8 == (byte *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)((int)local_13f8 + 0x10c);
  }
  uVar8 = *(undefined4 *)(local_1400 + 0x10c);
  FUN_10007684("bounceSound");
  local_8._0_1_ = 0x9f;
  FUN_100d97aa(local_43c,uVar8,0x1f,uVar7,local_13ac,local_13b4);
  local_8._0_1_ = 3;
  FUN_100075cd();
  pbVar22 = local_13e8;
  uVar4 = local_13dc;
  if (*(int *)(*(int *)(local_13e8 + 4) + 0x110) != 0) {
    FUN_100f2ff4(0x1e,*(int *)(*(int *)(local_13e8 + 4) + 0x110));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x110);
    uVar4 = local_13dc;
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x110) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x110))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0xa0);
        uVar4 = local_13dc | 0x400;
        uVar7 = extraout_ECX_x00233;
      }
      else {
        uVar7 = extraout_ECX_x00232;
        uVar8 = extraout_ECX_x00232;
        FUN_10080700(extraout_ECX_x00232,extraout_ECX_x00232);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0xa1;
        uVar4 = local_13dc | 0x800;
        uVar7 = extraout_ECX_x00234;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13dc = uVar4;
      local_13d8 = uVar4;
      FUN_100d7f14("viewShellEjectEffect");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((uVar4 & 0x800) != 0) {
        uVar4 = uVar4 & 0xfffff7ff;
        local_13dc = uVar4;
        local_13d8 = uVar4;
        guard_check_icall();
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((uVar4 & 0x400) != 0) {
        uVar4 = uVar4 & 0xfffffbff;
        local_13dc = uVar4;
        local_13d8 = uVar4;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x114) != 0) {
    FUN_100f2ff4(0x1e,*(int *)(*(int *)(pbVar22 + 4) + 0x114));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x114);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x114) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x114))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0xa2);
        uVar4 = uVar4 | 0x1000;
        uVar7 = extraout_ECX_x00236;
      }
      else {
        uVar7 = extraout_ECX_x00235;
        uVar8 = extraout_ECX_x00235;
        FUN_10080700(extraout_ECX_x00235,extraout_ECX_x00235);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0xa3;
        uVar4 = uVar4 | 0x2000;
        uVar7 = extraout_ECX_x00237;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13dc = uVar4;
      local_13d8 = uVar4;
      FUN_100f2fb5("worldShellEjectEffect");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((uVar4 & 0x2000) != 0) {
        uVar4 = uVar4 & 0xffffdfff;
        local_13dc = uVar4;
        local_13d8 = uVar4;
        guard_check_icall();
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((uVar4 & 0x1000) != 0) {
        uVar4 = uVar4 & 0xffffefff;
        local_13dc = uVar4;
        local_13d8 = uVar4;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x118) != 0) {
    FUN_100f2ff4(0x1e,*(int *)(*(int *)(pbVar22 + 4) + 0x118));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x118);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x118) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x118))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0xa4);
        uVar4 = uVar4 | 0x4000;
        uVar7 = extraout_ECX_x00239;
      }
      else {
        uVar7 = extraout_ECX_x00238;
        uVar8 = extraout_ECX_x00238;
        FUN_10080700(extraout_ECX_x00238,extraout_ECX_x00238);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0xa5;
        uVar4 = uVar4 | 0x8000;
        uVar7 = extraout_ECX_x00240;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13dc = uVar4;
      local_13d8 = uVar4;
      FUN_100d7f29("viewLastShotEjectEffect");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((uVar4 & 0x8000) != 0) {
        uVar4 = uVar4 & 0xffff7fff;
        local_13dc = uVar4;
        local_13d8 = uVar4;
        guard_check_icall();
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((uVar4 & 0x4000) != 0) {
        uVar4 = uVar4 & 0xffffbfff;
        local_13dc = uVar4;
        local_13d8 = uVar4;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x11c) != 0) {
    FUN_100f2ff4(0x1e,*(int *)(*(int *)(pbVar22 + 4) + 0x11c));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x11c);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x11c) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x11c))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0xa6);
        uVar4 = uVar4 | 0x10000;
        uVar7 = extraout_ECX_x00242;
      }
      else {
        uVar7 = extraout_ECX_x00241;
        uVar8 = extraout_ECX_x00241;
        FUN_10080700(extraout_ECX_x00241,extraout_ECX_x00241);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0xa7;
        uVar4 = uVar4 | 0x20000;
        uVar7 = extraout_ECX_x00243;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13dc = uVar4;
      local_13d8 = uVar4;
      FUN_100f2fdf("worldLastShotEjectEffect");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((uVar4 & 0x20000) != 0) {
        uVar4 = uVar4 & 0xfffdffff;
        local_13dc = uVar4;
        local_13d8 = uVar4;
        guard_check_icall();
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((uVar4 & 0x10000) != 0) {
        uVar4 = uVar4 & 0xfffeffff;
        local_13dc = uVar4;
        local_13d8 = uVar4;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x120) != 0) {
    FUN_100f2e68(5,*(int *)(*(int *)(pbVar22 + 4) + 0x120));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x120);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x120) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x120))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0xa8);
        uVar4 = uVar4 | 0x40000;
        uVar7 = extraout_ECX_x00245;
      }
      else {
        uVar7 = extraout_ECX_x00244;
        uVar8 = extraout_ECX_x00244;
        FUN_10080700(extraout_ECX_x00244,extraout_ECX_x00244);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0xa9;
        uVar4 = uVar4 | 0x80000;
        uVar7 = extraout_ECX_x00246;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13dc = uVar4;
      local_13d8 = uVar4;
      FUN_100d83d8("reticleCenter");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((uVar4 & 0x80000) != 0) {
        uVar4 = uVar4 & 0xfff7ffff;
        local_13dc = uVar4;
        local_13d8 = uVar4;
        guard_check_icall();
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((uVar4 & 0x40000) != 0) {
        uVar4 = uVar4 & 0xfffbffff;
        local_13dc = uVar4;
        local_13d8 = uVar4;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x124) != 0) {
    FUN_100f2e68(5,*(int *)(*(int *)(pbVar22 + 4) + 0x124));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x124);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x124) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x124))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0xaa);
        uVar4 = uVar4 | 0x100000;
        uVar7 = extraout_ECX_x00248;
      }
      else {
        uVar7 = extraout_ECX_x00247;
        uVar8 = extraout_ECX_x00247;
        FUN_10080700(extraout_ECX_x00247,extraout_ECX_x00247);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0xab;
        uVar4 = uVar4 | 0x200000;
        uVar7 = extraout_ECX_x00249;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13dc = uVar4;
      local_13d8 = uVar4;
      FUN_100d8362("reticleSide");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      if ((uVar4 & 0x200000) != 0) {
        uVar4 = uVar4 & 0xffdfffff;
        local_13dc = uVar4;
        local_13d8 = uVar4;
        guard_check_icall();
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((uVar4 & 0x100000) != 0) {
        uVar4 = uVar4 & 0xffefffff;
        local_13dc = uVar4;
        local_13d8 = uVar4;
        guard_check_icall();
      }
    }
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x128);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x128))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar7 = local_13b4;
    FUN_100d8968("iReticleCenterSize");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar7);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 300);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 300))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar7 = local_13b4;
    FUN_100d897d("iReticleSideSize");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar7);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x130);
  iVar6 = 0;
  if (iVar5 == 0) {
LAB_100e1037:
    if (puVar25 != (undefined4 *)0x0) goto LAB_100e103b;
LAB_100e1053:
    if ((&PTR_s_VEH_ACTIVE_RETICLE_NONE_10281f30)[*(int *)(*(int *)(pbVar22 + 4) + 0x134)] ==
        (undefined *)0x0) {
      uVar8 = FUN_10081b38(0);
      local_8 = CONCAT31(local_8._1_3_,0xac);
      uVar4 = uVar4 | 0x400000;
      uVar7 = extraout_ECX_x00251;
    }
    else {
      iVar5 = iVar6;
      FUN_10080700(iVar6,iVar6);
      uVar8 = FUN_10080627(iVar6,iVar5);
      local_8 = 0xad;
      uVar4 = uVar4 | 0x800000;
      uVar7 = extraout_ECX_x00252;
    }
    uVar13 = uVar7;
    uVar10 = local_13b4;
    local_13dc = uVar4;
    local_13d8 = uVar4;
    FUN_100d8992("activeReticleType");
    FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
    if ((uVar4 & 0x800000) != 0) {
      uVar4 = uVar4 & 0xff7fffff;
      local_13dc = uVar4;
      local_13d8 = uVar4;
      guard_check_icall();
    }
    local_8._0_1_ = 3;
    local_8._1_3_ = 0;
    if ((uVar4 & 0x400000) != 0) {
      local_13dc = uVar4 & 0xffbfffff;
      local_13d8 = local_13dc;
      guard_check_icall();
    }
  }
  else {
    if ((puVar25 == (undefined4 *)0x0) || (iVar5 != *(int *)(puVar25[1] + 0x130))) {
      iVar6 = iVar5;
      iVar16 = iVar5;
      uVar7 = local_13b4;
      FUN_100d834d("iReticleMinOfs");
      FUN_100d7c54(iVar5,iVar6,iVar16,uVar7);
      iVar6 = extraout_ECX_x00250;
      goto LAB_100e1037;
    }
LAB_100e103b:
    iVar6 = puVar25[1];
    if (*(int *)(*(int *)(pbVar22 + 4) + 0x134) != *(int *)(iVar6 + 0x134)) goto LAB_100e1053;
  }
  uVar4 = 0x144;
  if (puVar25 == (undefined4 *)0x0) {
LAB_100e114f:
    FUN_10081b38(4);
    uVar12 = 0x138;
    local_8._0_1_ = 0xae;
    do {
      FUN_100f2f70(local_13b4);
      uVar12 = uVar12 + 4;
    } while (uVar12 < 0x144);
    puVar28 = local_94;
    uVar7 = extraout_ECX_x00253;
    uVar8 = extraout_ECX_x00253;
    uVar13 = local_13b4;
    FUN_100d7d85("vStandMove");
    FUN_100d8af7(uVar7,uVar8,puVar28,uVar13);
    local_8._0_1_ = 3;
    guard_check_icall();
    puVar25 = local_13fc;
    if (local_13fc != (undefined4 *)0x0) goto LAB_100e11ca;
LAB_100e11f9:
    FUN_10081b38(4);
    local_8._0_1_ = 0xaf;
    do {
      FUN_100f2f70(local_13b4);
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0x150);
    puVar28 = local_a4;
    uVar7 = extraout_ECX_x00254;
    uVar8 = extraout_ECX_x00254;
    uVar13 = local_13b4;
    FUN_100d7d10("vStandRot");
    FUN_100d8af7(uVar7,uVar8,puVar28,uVar13);
    local_8._0_1_ = 3;
    guard_check_icall();
    puVar25 = local_13fc;
    if (local_13fc != (undefined4 *)0x0) goto LAB_100e1274;
LAB_100e12b0:
    uVar4 = 0x150;
    FUN_10081b38(4);
    local_8._0_1_ = 0xb0;
    do {
      FUN_100f2f70(local_13b4);
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0x15c);
    puVar28 = local_b4;
    uVar7 = extraout_ECX_x00255;
    uVar8 = extraout_ECX_x00255;
    uVar13 = local_13b4;
    FUN_100d7d85("strafeMove");
    FUN_100d8af7(uVar7,uVar8,puVar28,uVar13);
    local_8._0_1_ = 3;
    guard_check_icall();
    puVar25 = local_13fc;
    if (local_13fc != (undefined4 *)0x0) goto LAB_100e132b;
LAB_100e135a:
    uVar4 = 0x15c;
    FUN_10081b38(4);
    local_8._0_1_ = 0xb1;
    do {
      FUN_100f2f70(local_13b4);
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0x168);
    puVar28 = local_c4;
    uVar7 = extraout_ECX_x00256;
    uVar8 = extraout_ECX_x00256;
    uVar13 = local_13b4;
    FUN_100d7d10("strafeRot");
    FUN_100d8af7(uVar7,uVar8,puVar28,uVar13);
    local_8._0_1_ = 3;
    guard_check_icall();
    puVar25 = local_13fc;
    if (local_13fc != (undefined4 *)0x0) goto LAB_100e13d5;
LAB_100e1411:
    uVar4 = 0x168;
    FUN_10081b38(4);
    local_8._0_1_ = 0xb2;
    do {
      FUN_100f2f70(local_13b4);
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0x174);
    puVar28 = local_d4;
    uVar7 = extraout_ECX_x00257;
    uVar8 = extraout_ECX_x00257;
    uVar13 = local_13b4;
    FUN_100d7d85("vDuckedOfs");
    FUN_100d8af7(uVar7,uVar8,puVar28,uVar13);
    local_8._0_1_ = 3;
    guard_check_icall();
    puVar25 = local_13fc;
    if (local_13fc != (undefined4 *)0x0) goto LAB_100e148c;
LAB_100e14bb:
    uVar4 = 0x174;
    FUN_10081b38(4);
    local_8._0_1_ = 0xb3;
    do {
      FUN_100f2f70(local_13b4);
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0x180);
    puVar28 = local_e4;
    uVar7 = extraout_ECX_x00258;
    uVar8 = extraout_ECX_x00258;
    uVar13 = local_13b4;
    FUN_100d8362("vDuckedMove");
    FUN_100d8af7(uVar7,uVar8,puVar28,uVar13);
    local_8._0_1_ = 3;
    guard_check_icall();
    puVar25 = local_13fc;
    if (local_13fc != (undefined4 *)0x0) goto LAB_100e1536;
LAB_100e1572:
    uVar4 = 0x180;
    FUN_10081b38(4);
    local_8._0_1_ = 0xb4;
    do {
      FUN_100f2f70(local_13b4);
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0x18c);
    puVar28 = local_f4;
    uVar7 = extraout_ECX_x00259;
    uVar8 = extraout_ECX_x00259;
    uVar13 = local_13b4;
    FUN_100d7d85("vDuckedRot");
    FUN_100d8af7(uVar7,uVar8,puVar28,uVar13);
    local_8._0_1_ = 3;
    guard_check_icall();
    puVar25 = local_13fc;
    if (local_13fc != (undefined4 *)0x0) goto LAB_100e15ed;
LAB_100e161c:
    uVar4 = 0x18c;
    FUN_10081b38(4);
    local_8._0_1_ = 0xb5;
    do {
      FUN_100f2f70(local_13b4);
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0x198);
    puVar28 = local_104;
    uVar7 = extraout_ECX_x00260;
    uVar8 = extraout_ECX_x00260;
    uVar13 = local_13b4;
    FUN_100d7d10("vProneOfs");
    FUN_100d8af7(uVar7,uVar8,puVar28,uVar13);
    local_8._0_1_ = 3;
    guard_check_icall();
    puVar25 = local_13fc;
    if (local_13fc != (undefined4 *)0x0) goto LAB_100e1697;
LAB_100e16d3:
    uVar4 = 0x198;
    FUN_10081b38(4);
    local_8._0_1_ = 0xb6;
    do {
      FUN_100f2f70(local_13b4);
      uVar7 = local_13b4;
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0x1a4);
    puVar28 = local_114;
    uVar8 = extraout_ECX_x00261;
    uVar13 = extraout_ECX_x00261;
    uVar10 = local_13b4;
    FUN_100d7d85("vProneMove");
    FUN_100d8af7(uVar8,uVar13,puVar28,uVar10);
    local_8._0_1_ = 3;
    guard_check_icall();
    puVar25 = local_13fc;
    if (local_13fc != (undefined4 *)0x0) goto LAB_100e174f;
LAB_100e178a:
    uVar4 = 0x1a4;
    FUN_10081b38(4);
    local_8._0_1_ = 0xb7;
    do {
      FUN_100f2f70(uVar7);
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0x1b0);
    puVar28 = local_124;
    uVar8 = extraout_ECX_x00262;
    uVar13 = extraout_ECX_x00262;
    uVar10 = uVar7;
    FUN_100d7d10("vProneRot");
    FUN_100d8af7(uVar8,uVar13,puVar28,uVar10);
    local_8._0_1_ = 3;
    guard_check_icall();
    pfVar20 = extraout_ECX_x00263;
    puVar25 = local_13fc;
  }
  else {
    uVar12 = 0;
    pfVar20 = (float *)(puVar25[1] + 0x138);
    do {
      if (*(float *)((*(int *)(pbVar22 + 4) - puVar25[1]) + (int)pfVar20) != *pfVar20)
      goto LAB_100e114f;
      uVar12 = uVar12 + 1;
      pfVar20 = pfVar20 + 1;
    } while (uVar12 < 3);
LAB_100e11ca:
    uVar12 = 0;
    pfVar20 = (float *)(puVar25[1] + 0x144);
    do {
      if (*(float *)((int)pfVar20 + (*(int *)(local_13e8 + 4) - puVar25[1])) != *pfVar20)
      goto LAB_100e11f9;
      uVar12 = uVar12 + 1;
      pfVar20 = pfVar20 + 1;
    } while (uVar12 < 3);
LAB_100e1274:
    uVar4 = 0;
    pfVar20 = (float *)(puVar25[1] + 0x150);
    do {
      if (*(float *)((int)pfVar20 + (*(int *)(local_13e8 + 4) - puVar25[1])) != *pfVar20)
      goto LAB_100e12b0;
      uVar4 = uVar4 + 1;
      pfVar20 = pfVar20 + 1;
    } while (uVar4 < 3);
LAB_100e132b:
    uVar4 = 0;
    pfVar20 = (float *)(puVar25[1] + 0x15c);
    do {
      if (*(float *)((int)pfVar20 + (*(int *)(local_13e8 + 4) - puVar25[1])) != *pfVar20)
      goto LAB_100e135a;
      uVar4 = uVar4 + 1;
      pfVar20 = pfVar20 + 1;
    } while (uVar4 < 3);
LAB_100e13d5:
    uVar4 = 0;
    pfVar20 = (float *)(puVar25[1] + 0x168);
    do {
      if (*(float *)((int)pfVar20 + (*(int *)(local_13e8 + 4) - puVar25[1])) != *pfVar20)
      goto LAB_100e1411;
      uVar4 = uVar4 + 1;
      pfVar20 = pfVar20 + 1;
    } while (uVar4 < 3);
LAB_100e148c:
    uVar4 = 0;
    pfVar20 = (float *)(puVar25[1] + 0x174);
    do {
      if (*(float *)((*(int *)(local_13e8 + 4) - puVar25[1]) + (int)pfVar20) != *pfVar20)
      goto LAB_100e14bb;
      uVar4 = uVar4 + 1;
      pfVar20 = pfVar20 + 1;
    } while (uVar4 < 3);
LAB_100e1536:
    uVar4 = 0;
    pfVar20 = (float *)(puVar25[1] + 0x180);
    do {
      if (*(float *)((*(int *)(local_13e8 + 4) - puVar25[1]) + (int)pfVar20) != *pfVar20)
      goto LAB_100e1572;
      uVar4 = uVar4 + 1;
      pfVar20 = pfVar20 + 1;
    } while (uVar4 < 3);
LAB_100e15ed:
    uVar4 = 0;
    pfVar20 = (float *)(puVar25[1] + 0x18c);
    do {
      if (*(float *)((*(int *)(local_13e8 + 4) - puVar25[1]) + (int)pfVar20) != *pfVar20)
      goto LAB_100e161c;
      uVar4 = uVar4 + 1;
      pfVar20 = pfVar20 + 1;
    } while (uVar4 < 3);
LAB_100e1697:
    uVar4 = 0;
    pfVar20 = (float *)(puVar25[1] + 0x198);
    do {
      if (*(float *)((*(int *)(local_13e8 + 4) - puVar25[1]) + (int)pfVar20) != *pfVar20)
      goto LAB_100e16d3;
      uVar4 = uVar4 + 1;
      pfVar20 = pfVar20 + 1;
    } while (uVar4 < 3);
LAB_100e174f:
    uVar4 = 0;
    pfVar20 = (float *)(puVar25[1] + 0x1a4);
    do {
      uVar7 = local_13b4;
      if (*(float *)((*(int *)(local_13e8 + 4) - puVar25[1]) + (int)pfVar20) != *pfVar20)
      goto LAB_100e178a;
      uVar4 = uVar4 + 1;
      pfVar20 = pfVar20 + 1;
    } while (uVar4 < 3);
  }
  pbVar22 = local_13e8;
  local_13a8 = *(float *)(*(int *)(local_13e8 + 4) + 0x1b0);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x1b0))))) {
    pfVar19 = pfVar20;
    uVar8 = uVar7;
    FUN_100d7df7("fPosMoveRate");
    FUN_100d8193(pfVar20,pfVar19,uVar8);
    pfVar20 = extraout_ECX_x00264;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x1b4);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x1b4))))) {
    pfVar19 = pfVar20;
    uVar8 = uVar7;
    FUN_100d8992("fPosProneMoveRate");
    FUN_100d8193(pfVar20,pfVar19,uVar8);
    pfVar20 = extraout_ECX_x00265;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x1b8);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x1b8))))) {
    pfVar19 = pfVar20;
    uVar8 = uVar7;
    FUN_100d8968("fStandMoveMinSpeed");
    FUN_100d8193(pfVar20,pfVar19,uVar8);
    pfVar20 = extraout_ECX_x00266;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x1bc);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x1bc))))) {
    pfVar19 = pfVar20;
    uVar8 = uVar7;
    FUN_100d8377("fDuckedMoveMinSpeed");
    FUN_100d8193(pfVar20,pfVar19,uVar8);
    pfVar20 = extraout_ECX_x00267;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x1c0);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x1c0))))) {
    pfVar19 = pfVar20;
    uVar8 = uVar7;
    FUN_100d8968("fProneMoveMinSpeed");
    FUN_100d8193(pfVar20,pfVar19,uVar8);
    pfVar20 = extraout_ECX_x00268;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x1c4);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x1c4))))) {
    pfVar19 = pfVar20;
    uVar8 = uVar7;
    FUN_100d8362("fPosRotRate");
    FUN_100d8193(pfVar20,pfVar19,uVar8);
    pfVar20 = extraout_ECX_x00269;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x1c8);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x1c8))))) {
    pfVar19 = pfVar20;
    uVar8 = uVar7;
    FUN_100d897d("fPosProneRotRate");
    FUN_100d8193(pfVar20,pfVar19,uVar8);
    pfVar20 = extraout_ECX_x00270;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x1cc);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x1cc))))) {
    pfVar19 = pfVar20;
    uVar8 = uVar7;
    FUN_100d8992("fStandRotMinSpeed");
    FUN_100d8193(pfVar20,pfVar19,uVar8);
    pfVar20 = extraout_ECX_x00271;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x1d0);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x1d0))))) {
    pfVar19 = pfVar20;
    uVar8 = uVar7;
    FUN_100d8968("fDuckedRotMinSpeed");
    FUN_100d8193(pfVar20,pfVar19,uVar8);
    pfVar20 = extraout_ECX_x00272;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x1d4);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x1d4))))) {
    pfVar19 = pfVar20;
    FUN_100d8992("fProneRotMinSpeed");
    FUN_100d8193(pfVar20,pfVar19,uVar7);
  }
  if (local_13f8 == (byte *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)((int)local_13f8 + 0x1d8);
  }
  uVar8 = *(undefined4 *)(local_1400 + 0x1d8);
  FUN_10007684("worldModel");
  local_8._0_1_ = 0xb8;
  FUN_100d95f3(local_454,uVar8,0x10,uVar7,local_13ac,local_13b4);
  local_8._0_1_ = 3;
  FUN_100075cd();
  pbVar22 = local_13e8;
  iVar5 = extraout_ECX_x00273;
  uVar4 = local_13dc;
  if (*(int *)(*(int *)(local_13e8 + 4) + 0x1dc) != 0) {
    FUN_100f2baa(4,*(int *)(*(int *)(local_13e8 + 4) + 0x1dc));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x1dc);
    iVar5 = extraout_ECX_x00274;
    uVar4 = local_13dc;
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x1dc) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x1dc))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0xb9);
        uVar4 = local_13dc | 0x1000000;
        uVar7 = extraout_ECX_x00275;
      }
      else {
        iVar6 = extraout_ECX_x00274;
        FUN_10080700(extraout_ECX_x00274,extraout_ECX_x00274);
        uVar8 = FUN_10080627(iVar5,iVar6);
        local_8 = 0xba;
        uVar4 = local_13dc | 0x2000000;
        uVar7 = extraout_ECX_x00276;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d8 = uVar4;
      FUN_100d834d("worldClipModel");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      iVar5 = extraout_ECX_x00277;
      if ((uVar4 & 0x2000000) != 0) {
        uVar4 = uVar4 & 0xfdffffff;
        local_13d8 = uVar4;
        guard_check_icall();
        iVar5 = extraout_ECX_x00278;
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((uVar4 & 0x1000000) != 0) {
        local_13d8 = uVar4 & 0xfeffffff;
        guard_check_icall();
        iVar5 = extraout_ECX_x00279;
        uVar4 = uVar4 & 0xfeffffff;
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x1e0) != 0) {
    FUN_100f2baa(4,*(int *)(*(int *)(pbVar22 + 4) + 0x1e0));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x1e0);
    iVar5 = extraout_ECX_x00280;
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x1e0) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x1e0))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0xbb);
        uVar4 = uVar4 | 0x4000000;
        uVar7 = extraout_ECX_x00281;
      }
      else {
        iVar6 = extraout_ECX_x00280;
        FUN_10080700(extraout_ECX_x00280,extraout_ECX_x00280);
        uVar8 = FUN_10080627(iVar5,iVar6);
        local_8 = 0xbc;
        uVar4 = uVar4 | 0x8000000;
        uVar7 = extraout_ECX_x00282;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d8 = uVar4;
      FUN_100d8362("rocketModel");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      iVar5 = extraout_ECX_x00283;
      if ((uVar4 & 0x8000000) != 0) {
        uVar4 = uVar4 & 0xf7ffffff;
        local_13d8 = uVar4;
        guard_check_icall();
        iVar5 = extraout_ECX_x00284;
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((uVar4 & 0x4000000) != 0) {
        uVar4 = uVar4 & 0xfbffffff;
        local_13d8 = uVar4;
        guard_check_icall();
        iVar5 = extraout_ECX_x00285;
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x1e4) != 0) {
    FUN_100f2baa(4,*(int *)(*(int *)(pbVar22 + 4) + 0x1e4));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x1e4);
    iVar5 = extraout_ECX_x00286;
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x1e4) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x1e4))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0xbd);
        uVar4 = uVar4 | 0x10000000;
        uVar7 = extraout_ECX_x00287;
      }
      else {
        iVar6 = extraout_ECX_x00286;
        FUN_10080700(extraout_ECX_x00286,extraout_ECX_x00286);
        uVar8 = FUN_10080627(iVar5,iVar6);
        local_8 = 0xbe;
        uVar4 = uVar4 | 0x20000000;
        uVar7 = extraout_ECX_x00288;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d8 = uVar4;
      FUN_100d7d85("knifeModel");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      iVar5 = extraout_ECX_x00289;
      if ((uVar4 & 0x20000000) != 0) {
        uVar4 = uVar4 & 0xdfffffff;
        local_13d8 = uVar4;
        guard_check_icall();
        iVar5 = extraout_ECX_x00290;
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((uVar4 & 0x10000000) != 0) {
        uVar4 = uVar4 & 0xefffffff;
        local_13d8 = uVar4;
        guard_check_icall();
        iVar5 = extraout_ECX_x00291;
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x1e8) != 0) {
    FUN_100f2baa(4,*(int *)(*(int *)(pbVar22 + 4) + 0x1e8));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x1e8);
    iVar5 = extraout_ECX_x00292;
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x1e8) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x1e8))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0xbf);
        uVar4 = uVar4 | 0x40000000;
        uVar7 = extraout_ECX_x00293;
      }
      else {
        iVar6 = extraout_ECX_x00292;
        FUN_10080700(extraout_ECX_x00292,extraout_ECX_x00292);
        uVar8 = FUN_10080627(iVar5,iVar6);
        local_8 = 0xc0;
        uVar4 = uVar4 | 0x80000000;
        uVar7 = extraout_ECX_x00294;
      }
      uVar13 = uVar7;
      uVar10 = local_13b4;
      local_13d8 = uVar4;
      FUN_100d7f3e("worldKnifeModel");
      FUN_100d8af7(uVar7,uVar13,uVar8,uVar10);
      iVar5 = extraout_ECX_x00295;
      if ((int)uVar4 < 0) {
        uVar4 = uVar4 & 0x7fffffff;
        guard_check_icall();
        iVar5 = extraout_ECX_x00296;
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((uVar4 & 0x40000000) != 0) {
        guard_check_icall();
        iVar5 = extraout_ECX_x00297;
      }
    }
  }
  uVar7 = local_13b4;
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x1ec) != 0) {
    FUN_100f2e68(5,*(int *)(*(int *)(pbVar22 + 4) + 0x1ec));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x1ec);
    iVar5 = extraout_ECX_x00298;
    uVar7 = local_13b4;
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x1ec) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x1ec))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0xc1);
        uVar4 = 1;
      }
      else {
        iVar6 = extraout_ECX_x00298;
        FUN_10080700(extraout_ECX_x00298,extraout_ECX_x00298);
        uVar8 = FUN_10080627(iVar5,iVar6);
        local_8 = 0xc2;
        uVar4 = 2;
      }
      uVar7 = local_13b4;
      uVar12 = uVar4;
      uVar13 = local_13b4;
      local_13f0 = uVar4;
      local_13c4 = uVar4;
      FUN_100d7c3f("hudIcon");
      FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
      iVar5 = extraout_ECX_x00299;
      if ((local_13c4 & 2) != 0) {
        local_13f0 = local_13c4 & 0xfffffffd;
        local_13c4 = local_13f0;
        guard_check_icall();
        iVar5 = extraout_ECX_x00300;
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((local_13c4 & 1) != 0) {
        local_13f0 = local_13c4 & 0xfffffffe;
        local_13c4 = local_13f0;
        guard_check_icall();
        iVar5 = extraout_ECX_x00301;
      }
    }
  }
  if ((puVar25 == (undefined4 *)0x0) ||
     (iVar5 = puVar25[1], *(int *)(*(int *)(pbVar22 + 4) + 0x1f0) != *(int *)(iVar5 + 0x1f0))) {
    if ((&PTR_s_WEAPON_ICON_RATIO_1TO1_10281f20)[*(int *)(*(int *)(pbVar22 + 4) + 0x1f0)] ==
        (undefined *)0x0) {
      uVar8 = FUN_10081b38(0);
      local_8 = CONCAT31(local_8._1_3_,0xc3);
      uVar4 = local_13c4 | 4;
    }
    else {
      iVar6 = iVar5;
      FUN_10080700(iVar5,iVar5);
      uVar8 = FUN_10080627(iVar5,iVar6);
      local_8 = 0xc4;
      uVar4 = local_13c4 | 8;
    }
    uVar12 = uVar4;
    uVar13 = uVar7;
    local_13f0 = uVar4;
    local_13c4 = uVar4;
    FUN_100d7df7("hudIconRatio");
    FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
    iVar5 = extraout_ECX_x00302;
    if ((local_13c4 & 8) != 0) {
      local_13f0 = local_13c4 & 0xfffffff7;
      local_13c4 = local_13f0;
      guard_check_icall();
      iVar5 = extraout_ECX_x00303;
    }
    local_8._0_1_ = 3;
    local_8._1_3_ = 0;
    if ((local_13c4 & 4) != 0) {
      local_13f0 = local_13c4 & 0xfffffffb;
      local_13c4 = local_13f0;
      guard_check_icall();
      iVar5 = extraout_ECX_x00304;
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 500) != 0) {
    FUN_100f2e68(5,*(int *)(*(int *)(pbVar22 + 4) + 500));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 500);
    iVar5 = extraout_ECX_x00305;
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 500) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 500))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0xc5);
        uVar4 = local_13c4 | 0x10;
      }
      else {
        iVar6 = extraout_ECX_x00305;
        FUN_10080700(extraout_ECX_x00305,extraout_ECX_x00305);
        uVar8 = FUN_10080627(iVar5,iVar6);
        local_8 = 0xc6;
        uVar4 = local_13c4 | 0x20;
      }
      uVar12 = uVar4;
      uVar13 = uVar7;
      local_13f0 = uVar4;
      local_13c4 = uVar4;
      FUN_100d7d85("pickupIcon");
      FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
      iVar5 = extraout_ECX_x00306;
      if ((local_13c4 & 0x20) != 0) {
        local_13f0 = local_13c4 & 0xffffffdf;
        local_13c4 = local_13f0;
        guard_check_icall();
        iVar5 = extraout_ECX_x00307;
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((local_13c4 & 0x10) != 0) {
        local_13f0 = local_13c4 & 0xffffffef;
        local_13c4 = local_13f0;
        guard_check_icall();
        iVar5 = extraout_ECX_x00308;
      }
    }
  }
  if ((puVar25 == (undefined4 *)0x0) ||
     (iVar5 = puVar25[1], *(int *)(*(int *)(pbVar22 + 4) + 0x1f8) != *(int *)(iVar5 + 0x1f8))) {
    if ((&PTR_s_WEAPON_ICON_RATIO_1TO1_10281f20)[*(int *)(*(int *)(pbVar22 + 4) + 0x1f8)] ==
        (undefined *)0x0) {
      uVar8 = FUN_10081b38(0);
      local_8 = CONCAT31(local_8._1_3_,199);
      uVar4 = local_13c4 | 0x40;
    }
    else {
      iVar6 = iVar5;
      FUN_10080700(iVar5,iVar5);
      uVar8 = FUN_10080627(iVar5,iVar6);
      local_8 = 200;
      uVar4 = local_13c4 | 0x80;
    }
    uVar12 = uVar4;
    uVar13 = uVar7;
    local_13f0 = uVar4;
    local_13c4 = uVar4;
    FUN_100d7f3e("pickupIconRatio");
    FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
    iVar5 = extraout_ECX_x00309;
    if ((char)local_13c4 < '\0') {
      local_13f0 = local_13c4 & 0xffffff7f;
      local_13c4 = local_13f0;
      guard_check_icall();
      iVar5 = extraout_ECX_x00310;
    }
    local_8._0_1_ = 3;
    local_8._1_3_ = 0;
    if ((local_13c4 & 0x40) != 0) {
      local_13f0 = local_13c4 & 0xffffffbf;
      local_13c4 = local_13f0;
      guard_check_icall();
      iVar5 = extraout_ECX_x00311;
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x1fc) != 0) {
    FUN_100f2e68(5,*(int *)(*(int *)(pbVar22 + 4) + 0x1fc));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x1fc);
    iVar5 = extraout_ECX_x00312;
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x1fc) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x1fc))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0xc9);
        uVar4 = local_13c4 | 0x100;
      }
      else {
        iVar6 = extraout_ECX_x00312;
        FUN_10080700(extraout_ECX_x00312,extraout_ECX_x00312);
        uVar8 = FUN_10080627(iVar5,iVar6);
        local_8 = 0xca;
        uVar4 = local_13c4 | 0x200;
      }
      uVar12 = uVar4;
      uVar13 = uVar7;
      local_13f0 = uVar4;
      local_13c4 = uVar4;
      FUN_100d7f3e("ammoCounterIcon");
      FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
      iVar5 = extraout_ECX_x00313;
      if ((local_13c4 & 0x200) != 0) {
        local_13f0 = local_13c4 & 0xfffffdff;
        local_13c4 = local_13f0;
        guard_check_icall();
        iVar5 = extraout_ECX_x00314;
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((local_13c4 & 0x100) != 0) {
        local_13f0 = local_13c4 & 0xfffffeff;
        local_13c4 = local_13f0;
        guard_check_icall();
        iVar5 = extraout_ECX_x00315;
      }
    }
  }
  if ((puVar25 == (undefined4 *)0x0) ||
     (iVar5 = puVar25[1], *(int *)(*(int *)(pbVar22 + 4) + 0x200) != *(int *)(iVar5 + 0x200))) {
    if ((&PTR_s_WEAPON_ICON_RATIO_1TO1_10281f20)[*(int *)(*(int *)(pbVar22 + 4) + 0x200)] ==
        (undefined *)0x0) {
      uVar8 = FUN_10081b38(0);
      local_8 = CONCAT31(local_8._1_3_,0xcb);
      uVar4 = local_13c4 | 0x400;
    }
    else {
      iVar6 = iVar5;
      FUN_10080700(iVar5,iVar5);
      uVar8 = FUN_10080627(iVar5,iVar6);
      local_8 = 0xcc;
      uVar4 = local_13c4 | 0x800;
    }
    uVar12 = uVar4;
    uVar13 = uVar7;
    local_13f0 = uVar4;
    local_13c4 = uVar4;
    FUN_100d7f14("ammoCounterIconRatio");
    FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
    iVar5 = extraout_ECX_x00316;
    if ((local_13c4 & 0x800) != 0) {
      local_13f0 = local_13c4 & 0xfffff7ff;
      local_13c4 = local_13f0;
      guard_check_icall();
      iVar5 = extraout_ECX_x00317;
    }
    local_8._0_1_ = 3;
    local_8._1_3_ = 0;
    if ((local_13c4 & 0x400) != 0) {
      local_13f0 = local_13c4 & 0xfffffbff;
      local_13c4 = local_13f0;
      guard_check_icall();
      iVar5 = extraout_ECX_x00318;
    }
  }
  if ((puVar25 == (undefined4 *)0x0) ||
     (iVar5 = puVar25[1], *(int *)(*(int *)(pbVar22 + 4) + 0x204) != *(int *)(iVar5 + 0x204))) {
    if ((&PTR_s_AMMO_COUNTER_CLIP_NONE_10281ee0)[*(int *)(*(int *)(pbVar22 + 4) + 0x204)] ==
        (undefined *)0x0) {
      uVar8 = FUN_10081b38(0);
      local_8 = CONCAT31(local_8._1_3_,0xcd);
      uVar4 = local_13c4 | 0x1000;
    }
    else {
      iVar6 = iVar5;
      FUN_10080700(iVar5,iVar5);
      uVar8 = FUN_10080627(iVar5,iVar6);
      local_8 = 0xce;
      uVar4 = local_13c4 | 0x2000;
    }
    uVar12 = uVar4;
    uVar13 = uVar7;
    local_13f0 = uVar4;
    local_13c4 = uVar4;
    FUN_100d7f3e("ammoCounterClip");
    FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
    if ((local_13c4 & 0x2000) != 0) {
      local_13f0 = local_13c4 & 0xffffdfff;
      local_13c4 = local_13f0;
      guard_check_icall();
    }
    local_8._0_1_ = 3;
    local_8._1_3_ = 0;
    if ((local_13c4 & 0x1000) != 0) {
      local_13f0 = local_13c4 & 0xffffefff;
      local_13c4 = local_13f0;
      guard_check_icall();
    }
  }
  pbVar17 = *(byte **)(*(int *)(pbVar22 + 4) + 0x208);
  if ((pbVar17 != (byte *)0x0) &&
     ((puVar25 == (undefined4 *)0x0 || (pbVar17 != *(byte **)(puVar25[1] + 0x208))))) {
    pbVar11 = pbVar17;
    pbVar9 = pbVar17;
    FUN_100d7d85("iStartAmmo");
    FUN_100d7c54(pbVar17,pbVar11,pbVar9,uVar7);
    pbVar17 = extraout_ECX_x00319;
  }
  pbVar11 = *(byte **)(*(int *)(pbVar22 + 4) + 0x20c);
  uVar7 = local_13b4;
  if (pbVar11 != (byte *)0x0) {
    if ((puVar25 == (undefined4 *)0x0) ||
       (pbVar9 = *(byte **)(puVar25[1] + 0x20c), pbVar9 == (byte *)0x0)) {
LAB_100e2705:
      pbVar11 = pbVar17;
      FUN_10080700(pbVar17,pbVar17);
      uVar13 = FUN_10080627(pbVar17,pbVar11);
      uVar7 = local_13b4;
      local_8 = 0xd0;
      uVar12 = local_13c4 | 0x8000;
      uVar4 = uVar12;
      uVar8 = local_13b4;
      local_13f0 = uVar12;
      local_13c4 = uVar12;
      FUN_100d7d85("szAmmoName");
      FUN_100d8af7(uVar12,uVar4,uVar13,uVar8);
      if ((local_13c4 & 0x8000) != 0) {
        local_13f0 = local_13c4 & 0xffff7fff;
        local_13c4 = local_13f0;
        guard_check_icall();
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((local_13c4 & 0x4000) != 0) {
        local_13f0 = local_13c4 & 0xffffbfff;
        local_13c4 = local_13f0;
        guard_check_icall();
      }
    }
    else if (pbVar11 != pbVar9) {
      do {
        bVar1 = *pbVar11;
        bVar26 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_100e26f8:
          uVar4 = -(uint)bVar26 | 1;
          goto LAB_100e26fd;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar11[1];
        bVar26 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_100e26f8;
        pbVar11 = pbVar11 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_100e26fd:
      pbVar17 = pbVar11;
      if (uVar4 != 0) goto LAB_100e2705;
    }
  }
  pbVar17 = *(byte **)(*(int *)(pbVar22 + 4) + 0x210);
  if ((pbVar17 != (byte *)0x0) &&
     ((puVar25 == (undefined4 *)0x0 || (pbVar17 != *(byte **)(puVar25[1] + 0x210))))) {
    pbVar11 = pbVar17;
    pbVar9 = pbVar17;
    FUN_100d7d85("iAmmoIndex");
    FUN_100d7c54(pbVar17,pbVar11,pbVar9,uVar7);
    pbVar17 = extraout_ECX_x00320;
  }
  pbVar11 = *(byte **)(*(int *)(pbVar22 + 4) + 0x214);
  uVar7 = local_13b4;
  if (pbVar11 != (byte *)0x0) {
    if ((puVar25 == (undefined4 *)0x0) ||
       (pbVar9 = *(byte **)(puVar25[1] + 0x214), pbVar9 == (byte *)0x0)) {
LAB_100e284c:
      pbVar11 = pbVar17;
      FUN_10080700(pbVar17,pbVar17);
      uVar13 = FUN_10080627(pbVar17,pbVar11);
      uVar7 = local_13b4;
      local_8 = 0xd2;
      uVar12 = local_13c4 | 0x20000;
      uVar4 = uVar12;
      uVar8 = local_13b4;
      local_13f0 = uVar12;
      local_13c4 = uVar12;
      FUN_100d7d85("szClipName");
      FUN_100d8af7(uVar12,uVar4,uVar13,uVar8);
      if ((local_13c4 & 0x20000) != 0) {
        local_13f0 = local_13c4 & 0xfffdffff;
        local_13c4 = local_13f0;
        guard_check_icall();
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((local_13c4 & 0x10000) != 0) {
        local_13f0 = local_13c4 & 0xfffeffff;
        local_13c4 = local_13f0;
        guard_check_icall();
      }
    }
    else if (pbVar11 != pbVar9) {
      do {
        bVar1 = *pbVar11;
        bVar26 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_100e283f:
          uVar4 = -(uint)bVar26 | 1;
          goto LAB_100e2844;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar11[1];
        bVar26 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_100e283f;
        pbVar11 = pbVar11 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_100e2844:
      pbVar17 = pbVar11;
      if (uVar4 != 0) goto LAB_100e284c;
    }
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x218);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x218))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d7d85("iClipIndex");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x21c);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x21c))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d7fb0("iMaxAmmo");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  pbVar17 = *(byte **)(*(int *)(pbVar22 + 4) + 0x220);
  if ((pbVar17 != (byte *)0x0) &&
     ((puVar25 == (undefined4 *)0x0 || (pbVar17 != *(byte **)(puVar25[1] + 0x220))))) {
    pbVar11 = pbVar17;
    pbVar9 = pbVar17;
    FUN_100d7d10("shotCount");
    FUN_100d7c54(pbVar17,pbVar11,pbVar9,uVar7);
    pbVar17 = extraout_ECX_x00321;
  }
  pbVar11 = *(byte **)(*(int *)(pbVar22 + 4) + 0x224);
  uVar7 = local_13b4;
  if (pbVar11 != (byte *)0x0) {
    if ((puVar25 == (undefined4 *)0x0) ||
       (pbVar9 = *(byte **)(puVar25[1] + 0x224), pbVar9 == (byte *)0x0)) {
LAB_100e2a01:
      pbVar11 = pbVar17;
      FUN_10080700(pbVar17,pbVar17);
      uVar13 = FUN_10080627(pbVar17,pbVar11);
      uVar7 = local_13b4;
      local_8 = 0xd4;
      uVar12 = local_13c4 | 0x80000;
      uVar4 = uVar12;
      uVar8 = local_13b4;
      local_13f0 = uVar12;
      local_13c4 = uVar12;
      FUN_100d8377("szSharedAmmoCapName");
      FUN_100d8af7(uVar12,uVar4,uVar13,uVar8);
      if ((local_13c4 & 0x80000) != 0) {
        local_13f0 = local_13c4 & 0xfff7ffff;
        local_13c4 = local_13f0;
        guard_check_icall();
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((local_13c4 & 0x40000) != 0) {
        local_13f0 = local_13c4 & 0xfffbffff;
        local_13c4 = local_13f0;
        guard_check_icall();
      }
    }
    else if (pbVar11 != pbVar9) {
      do {
        bVar1 = *pbVar11;
        bVar26 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_100e29f4:
          uVar4 = -(uint)bVar26 | 1;
          goto LAB_100e29f9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar11[1];
        bVar26 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_100e29f4;
        pbVar11 = pbVar11 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_100e29f9:
      pbVar17 = pbVar11;
      if (uVar4 != 0) goto LAB_100e2a01;
    }
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x228);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x228))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d8377("iSharedAmmoCapIndex");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x22c);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x22c))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d834d("iSharedAmmoCap");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x230);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x230))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d838c("damage");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x234);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x234))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d7df7("playerDamage");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x238);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x238))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d7df7("iMeleeDamage");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x23c);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x23c))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d8362("iDamageType");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x240);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x240))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d7d85("iFireDelay");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x244);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x244))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d8362("iMeleeDelay");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x248);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x248))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d897d("meleeChargeDelay");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x24c);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x24c))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d834d("iDetonateDelay");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x250);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x250))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d834d("iRechamberTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x254);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x254))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100f2fca("rechamberTimeOneHanded");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 600);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 600))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d8968("iRechamberBoltTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x25c);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x25c))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d83d8("iHoldFireTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x260);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x260))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d83d8("iDetonateTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x264);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x264))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d7d85("iMeleeTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x268);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x268))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f3e("meleeChargeTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x26c);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x26c))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d8362("iReloadTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x270);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x270))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f14("reloadShowRocketTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x274);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x274))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d897d("iReloadEmptyTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x278);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x278))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d834d("iReloadAddTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x27c);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x27c))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d897d("iReloadStartTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x280);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x280))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d8377("iReloadStartAddTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x284);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x284))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d834d("iReloadEndTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x288);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x288))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d7d10("iDropTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x28c);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x28c))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d7d85("iRaiseTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x290);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x290))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d7df7("iAltDropTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x294);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x294))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d83d8("quickDropTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x298);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x298))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d834d("quickRaiseTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x29c);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x29c))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d897d("iBreachRaiseTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x2a0);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x2a0))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f3e("iEmptyRaiseTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x2a4);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x2a4))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d834d("iEmptyDropTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x2a8);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x2a8))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d7df7("sprintInTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x2ac);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x2ac))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d834d("sprintLoopTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x2b0);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x2b0))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d83d8("sprintOutTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x2b4);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x2b4))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d897d("stunnedTimeBegin");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x2b8);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x2b8))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f3e("stunnedTimeLoop");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 700);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 700))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d834d("stunnedTimeEnd");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x2c0);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x2c0))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d8377("nightVisionWearTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x2c4);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x2c4))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100f3126("nightVisionWearTimeFadeOutEnd");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x2c8);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x2c8))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100f30fc("nightVisionWearTimePowerUp");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x2cc);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x2cc))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100f2fb5("nightVisionRemoveTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x2d0);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x2d0))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100f313b("nightVisionRemoveTimePowerDown");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x2d4);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x2d4))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100f314d("nightVisionRemoveTimeFadeInStart");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x2d8);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x2d8))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d7fb0("fuseTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x2dc);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x2dc))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d7d85("aiFuseTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
    iVar5 = extraout_ECX_x00322;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x2e0);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x2e0))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7df7("autoAimRange");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00323;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x2e4);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x2e4))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d834d("aimAssistRange");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00324;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x2e8);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x2e8))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8992("aimAssistRangeAds");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00325;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x2ec);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x2ec))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7d85("aimPadding");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00326;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x2f0);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x2f0))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8377("enemyCrosshairRange");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00327;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x2f4);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x2f4))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d834d("moveSpeedScale");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00328;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x2f8);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x2f8))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8992("adsMoveSpeedScale");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00329;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x2fc);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x2fc))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8377("sprintDurationScale");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00330;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x300);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x300))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d834d("fAdsZoomInFrac");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00331;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x304);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x304))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f3e("fAdsZoomOutFrac");
    FUN_100d8193(iVar5,iVar6,uVar8);
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x308) == 0) {
    if ((puVar25 != (undefined4 *)0x0) && (*(int *)(puVar25[1] + 0x308) != 0)) {
      uVar14 = FUN_10081b38(0);
      local_8._0_1_ = 0xd9;
      uVar8 = extraout_ECX_x00333;
      uVar13 = extraout_ECX_x00333;
      uVar10 = uVar7;
      FUN_100d7f3e("overlayMaterial");
      FUN_100d8af7(uVar8,uVar13,uVar14,uVar10);
LAB_100e394f:
      local_8._0_1_ = 3;
      guard_check_icall();
    }
  }
  else {
    FUN_100f2e68(5,*(int *)(*(int *)(pbVar22 + 4) + 0x308));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x308);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x308) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x308))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0xd5);
        uVar4 = local_13c4 | 0x100000;
      }
      else {
        uVar8 = extraout_ECX_x00332;
        uVar13 = extraout_ECX_x00332;
        FUN_10080700(extraout_ECX_x00332,extraout_ECX_x00332);
        uVar8 = FUN_10080627(uVar8,uVar13);
        local_8 = 0xd6;
        uVar4 = local_13c4 | 0x200000;
      }
      uVar12 = uVar4;
      uVar13 = uVar7;
      local_13f0 = uVar4;
      local_13c4 = uVar4;
      FUN_100d7f3e("overlayMaterial");
      FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
      if ((local_13c4 & 0x200000) != 0) {
        local_13f0 = local_13c4 & 0xffdfffff;
        local_13c4 = local_13f0;
        guard_check_icall();
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((local_13c4 & 0x100000) != 0) {
        local_13f0 = local_13c4 & 0xffefffff;
        local_13c4 = local_13f0;
        goto LAB_100e394f;
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x30c) == 0) {
    if ((puVar25 != (undefined4 *)0x0) && (*(int *)(puVar25[1] + 0x30c) != 0)) {
      uVar14 = FUN_10081b38(0);
      local_8._0_1_ = 0xde;
      uVar8 = extraout_ECX_x00335;
      uVar13 = extraout_ECX_x00335;
      uVar10 = uVar7;
      FUN_100f2fb5("overlayMaterialLowRes");
      FUN_100d8af7(uVar8,uVar13,uVar14,uVar10);
LAB_100e3aad:
      local_8._0_1_ = 3;
      guard_check_icall();
    }
  }
  else {
    FUN_100f2e68(5,*(int *)(*(int *)(pbVar22 + 4) + 0x30c));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x30c);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x30c) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x30c))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0xda);
        uVar4 = local_13c4 | 0x1000000;
      }
      else {
        uVar8 = extraout_ECX_x00334;
        uVar13 = extraout_ECX_x00334;
        FUN_10080700(extraout_ECX_x00334,extraout_ECX_x00334);
        uVar8 = FUN_10080627(uVar8,uVar13);
        local_8 = 0xdb;
        uVar4 = local_13c4 | 0x2000000;
      }
      uVar12 = uVar4;
      uVar13 = uVar7;
      local_13f0 = uVar4;
      local_13c4 = uVar4;
      FUN_100f2fb5("overlayMaterialLowRes");
      FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
      if ((local_13c4 & 0x2000000) != 0) {
        local_13f0 = local_13c4 & 0xfdffffff;
        local_13c4 = local_13f0;
        guard_check_icall();
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((local_13c4 & 0x1000000) != 0) {
        local_13f0 = local_13c4 & 0xfeffffff;
        local_13c4 = local_13f0;
        goto LAB_100e3aad;
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x310) == 0) {
    if ((puVar25 != (undefined4 *)0x0) && (*(int *)(puVar25[1] + 0x310) != 0)) {
      uVar14 = FUN_10081b38(0);
      local_8._0_1_ = 0xe3;
      uVar8 = extraout_ECX_x00337;
      uVar13 = extraout_ECX_x00337;
      uVar10 = uVar7;
      FUN_100d8968("overlayMaterialEMP");
      FUN_100d8af7(uVar8,uVar13,uVar14,uVar10);
LAB_100e3bf4:
      local_8._0_1_ = 3;
      guard_check_icall();
    }
  }
  else {
    FUN_100f2e68(5,*(int *)(*(int *)(pbVar22 + 4) + 0x310));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x310);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x310) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x310))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0xdf);
        uVar4 = local_13c4 | 0x10000000;
      }
      else {
        uVar8 = extraout_ECX_x00336;
        uVar13 = extraout_ECX_x00336;
        FUN_10080700(extraout_ECX_x00336,extraout_ECX_x00336);
        uVar8 = FUN_10080627(uVar8,uVar13);
        local_8 = 0xe0;
        uVar4 = local_13c4 | 0x20000000;
      }
      uVar12 = uVar4;
      uVar13 = uVar7;
      local_13f0 = uVar4;
      local_13c4 = uVar4;
      FUN_100d8968("overlayMaterialEMP");
      FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
      if ((local_13c4 & 0x20000000) != 0) {
        local_13c4 = local_13c4 & 0xdfffffff;
        guard_check_icall();
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((local_13c4 & 0x10000000) != 0) goto LAB_100e3bf4;
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x314) == 0) {
    iVar5 = 0;
    if (puVar25 != (undefined4 *)0x0) {
      if (*(int *)(puVar25[1] + 0x314) != 0) {
        uVar14 = FUN_10081b38(0);
        local_8._0_1_ = 0xe8;
        uVar8 = extraout_ECX_x00341;
        uVar13 = extraout_ECX_x00341;
        uVar10 = uVar7;
        FUN_100f2fdf("overlayMaterialEMPLowRes");
        FUN_100d8af7(uVar8,uVar13,uVar14,uVar10);
        goto LAB_100e3d36;
      }
      goto LAB_100e3d3b;
    }
LAB_100e3d57:
    if ((&PTR_s_WEAPOVERLAYRETICLE_NONE_10281ed4)[*(int *)(*(int *)(pbVar22 + 4) + 0x318)] ==
        (undefined *)0x0) {
      uVar8 = FUN_10081b38(0);
      local_8 = CONCAT31(local_8._1_3_,0xe9);
      uVar4 = local_13b8 | 0x10;
    }
    else {
      iVar6 = iVar5;
      FUN_10080700(iVar5,iVar5);
      uVar8 = FUN_10080627(iVar5,iVar6);
      local_8 = 0xea;
      uVar4 = local_13b8 | 0x20;
    }
    uVar12 = uVar4;
    uVar13 = uVar7;
    local_13e0 = uVar4;
    local_13b8 = uVar4;
    FUN_100d834d("overlayReticle");
    FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
    iVar5 = extraout_ECX_x00343;
    if ((local_13b8 & 0x20) != 0) {
      local_13e0 = local_13b8 & 0xffffffdf;
      local_13b8 = local_13e0;
      guard_check_icall();
      iVar5 = extraout_ECX_x00344;
    }
    local_8._0_1_ = 3;
    local_8._1_3_ = 0;
    if ((local_13b8 & 0x10) != 0) {
      local_13e0 = local_13b8 & 0xffffffef;
      local_13b8 = local_13e0;
      guard_check_icall();
      iVar5 = extraout_ECX_x00345;
    }
  }
  else {
    FUN_100f2e68(5,*(int *)(*(int *)(pbVar22 + 4) + 0x314));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x314);
    iVar5 = extraout_ECX_x00338;
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x314) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x314))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0xe4);
        uVar4 = 1;
      }
      else {
        iVar6 = extraout_ECX_x00338;
        FUN_10080700(extraout_ECX_x00338,extraout_ECX_x00338);
        uVar8 = FUN_10080627(iVar5,iVar6);
        local_8 = 0xe5;
        uVar4 = 2;
      }
      uVar12 = uVar4;
      uVar13 = uVar7;
      local_13e0 = uVar4;
      local_13b8 = uVar4;
      FUN_100f2fdf("overlayMaterialEMPLowRes");
      FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
      iVar5 = extraout_ECX_x00339;
      if ((local_13b8 & 2) != 0) {
        local_13e0 = local_13b8 & 0xfffffffd;
        local_13b8 = local_13e0;
        guard_check_icall();
        iVar5 = extraout_ECX_x00340;
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((local_13b8 & 1) != 0) {
        local_13e0 = local_13b8 & 0xfffffffe;
        local_13b8 = local_13e0;
LAB_100e3d36:
        local_8._0_1_ = 3;
        guard_check_icall();
        iVar5 = extraout_ECX_x00342;
      }
    }
LAB_100e3d3b:
    if ((puVar25 == (undefined4 *)0x0) ||
       (iVar5 = puVar25[1], *(int *)(*(int *)(pbVar22 + 4) + 0x318) != *(int *)(iVar5 + 0x318)))
    goto LAB_100e3d57;
  }
  if ((puVar25 == (undefined4 *)0x0) ||
     (iVar5 = puVar25[1], *(int *)(*(int *)(pbVar22 + 4) + 0x31c) != *(int *)(iVar5 + 0x31c))) {
    if ((&PTR_s_WEAPOVERLAYINTERFACE_NONE_10281eb0)[*(int *)(*(int *)(pbVar22 + 4) + 0x31c)] ==
        (undefined *)0x0) {
      uVar8 = FUN_10081b38(0);
      local_8 = CONCAT31(local_8._1_3_,0xeb);
      uVar4 = local_13b8 | 0x40;
    }
    else {
      iVar6 = iVar5;
      FUN_10080700(iVar5,iVar5);
      uVar8 = FUN_10080627(iVar5,iVar6);
      local_8 = 0xec;
      uVar4 = local_13b8 | 0x80;
    }
    uVar12 = uVar4;
    uVar13 = uVar7;
    local_13e0 = uVar4;
    local_13b8 = uVar4;
    FUN_100d897d("overlayInterface");
    FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
    iVar5 = extraout_ECX_x00346;
    if ((char)local_13b8 < '\0') {
      local_13e0 = local_13b8 & 0xffffff7f;
      local_13b8 = local_13e0;
      guard_check_icall();
      iVar5 = extraout_ECX_x00347;
    }
    local_8._0_1_ = 3;
    local_8._1_3_ = 0;
    if ((local_13b8 & 0x40) != 0) {
      local_13e0 = local_13b8 & 0xffffffbf;
      local_13b8 = local_13e0;
      guard_check_icall();
      iVar5 = extraout_ECX_x00348;
    }
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 800);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 800))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7df7("overlayWidth");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00349;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x324);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x324))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d83d8("overlayHeight");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00350;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x328);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x328))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f29("overlayWidthSplitscreen");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00351;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x32c);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x32c))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100f2fdf("overlayHeightSplitscreen");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00352;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x330);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x330))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d83d8("fAdsBobFactor");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00353;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x334);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x334))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f3e("fAdsViewBobMult");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00354;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x338);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x338))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8968("fHipSpreadStandMin");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00355;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x33c);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x33c))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8377("fHipSpreadDuckedMin");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00356;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x340);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x340))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8968("fHipSpreadProneMin");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00357;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x344);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x344))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8992("hipSpreadStandMax");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00358;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x348);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x348))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8968("hipSpreadDuckedMax");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00359;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x34c);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x34c))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8992("hipSpreadProneMax");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00360;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x350);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x350))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8377("fHipSpreadDecayRate");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00361;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x354);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x354))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8992("fHipSpreadFireAdd");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00362;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x358);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x358))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8992("fHipSpreadTurnAdd");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00363;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x35c);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x35c))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8992("fHipSpreadMoveAdd");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00364;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x360);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x360))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100f2fb5("fHipSpreadDuckedDecay");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00365;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x364);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x364))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f14("fHipSpreadProneDecay");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00366;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x368);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x368))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8968("fHipReticleSidePos");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00367;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x36c);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x36c))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d834d("fAdsIdleAmount");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00368;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x370);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x370))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d834d("fHipIdleAmount");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00369;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x374);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x374))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7df7("adsIdleSpeed");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00370;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x378);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x378))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7df7("hipIdleSpeed");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00371;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x37c);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x37c))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8992("fIdleCrouchFactor");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00372;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x380);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x380))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d897d("fIdleProneFactor");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00373;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 900);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 900))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7df7("fGunMaxPitch");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00374;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x388);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x388))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7d85("fGunMaxYaw");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00375;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x38c);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x38c))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7df7("swayMaxAngle");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00376;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x390);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x390))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d83d8("swayLerpSpeed");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00377;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x394);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x394))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d834d("swayPitchScale");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00378;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x398);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x398))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7df7("swayYawScale");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00379;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x39c);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x39c))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d834d("swayHorizScale");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00380;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x3a0);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x3a0))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d83d8("swayVertScale");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00381;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x3a4);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x3a4))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8377("swayShellShockScale");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00382;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x3a8);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x3a8))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f3e("adsSwayMaxAngle");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00383;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x3ac);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x3ac))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d897d("adsSwayLerpSpeed");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00384;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x3b0);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x3b0))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8992("adsSwayPitchScale");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00385;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x3b4);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x3b4))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f3e("adsSwayYawScale");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00386;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x3b8);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x3b8))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8992("adsSwayHorizScale");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00387;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x3bc);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x3bc))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d897d("adsSwayVertScale");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00388;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x3c0);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x3c0))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f3e("adsViewErrorMin");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00389;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x3c4);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x3c4))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f3e("adsViewErrorMax");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00390;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x3cc);
  if (local_13a8 == _DAT_103193f0) {
LAB_100e4d7c:
    if (puVar25 != (undefined4 *)0x0) goto LAB_100e4d80;
LAB_100e4d98:
    if ((&PTR_s_WEAPON_ICON_RATIO_1TO1_10281f20)[*(int *)(*(int *)(pbVar22 + 4) + 0x3d0)] ==
        (undefined *)0x0) {
      uVar8 = FUN_10081b38(0);
      local_8 = CONCAT31(local_8._1_3_,0xed);
      uVar4 = local_13b8 | 0x100;
    }
    else {
      iVar6 = iVar5;
      FUN_10080700(iVar5,iVar5);
      uVar8 = FUN_10080627(iVar5,iVar6);
      local_8 = 0xee;
      uVar4 = local_13b8 | 0x200;
    }
    uVar12 = uVar4;
    uVar13 = uVar7;
    local_13e0 = uVar4;
    local_13b8 = uVar4;
    FUN_100d83d8("killIconRatio");
    FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
    if ((local_13b8 & 0x200) != 0) {
      local_13e0 = local_13b8 & 0xfffffdff;
      local_13b8 = local_13e0;
      guard_check_icall();
    }
    local_8._0_1_ = 3;
    local_8._1_3_ = 0;
    if ((local_13b8 & 0x100) != 0) {
      local_13e0 = local_13b8 & 0xfffffeff;
      local_13b8 = local_13e0;
      guard_check_icall();
    }
  }
  else {
    if ((puVar25 == (undefined4 *)0x0) || (local_13a8 != *(float *)(puVar25[1] + 0x3cc))) {
      iVar6 = iVar5;
      uVar8 = uVar7;
      FUN_100f2fdf("dualWieldViewModelOffset");
      FUN_100d8193(iVar5,iVar6,uVar8);
      iVar5 = extraout_ECX_x00391;
      goto LAB_100e4d7c;
    }
LAB_100e4d80:
    iVar5 = puVar25[1];
    if (*(int *)(*(int *)(pbVar22 + 4) + 0x3d0) != *(int *)(iVar5 + 0x3d0)) goto LAB_100e4d98;
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x3d4);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x3d4))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d834d("iReloadAmmoAdd");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x3d8);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x3d8))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f3e("iReloadStartAdd");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x3dc);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x3dc))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d897d("ammoDropStockMin");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x3e0);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x3e0))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100f2fca("ammoDropClipPercentMin");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x3e4);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x3e4))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100f2fca("ammoDropClipPercentMax");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 1000);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 1000))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d897d("iExplosionRadius");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x3ec);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x3ec))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d8377("iExplosionRadiusMin");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x3f0);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x3f0))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100f2fb5("iExplosionInnerDamage");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x3f4);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x3f4))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100f2fb5("iExplosionOuterDamage");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
    iVar5 = extraout_ECX_x00392;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x3f8);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x3f8))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f3e("damageConeAngle");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00393;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x3fc);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x3fc))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8992("bulletExplDmgMult");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00394;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x400);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x400))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f14("bulletExplRadiusMult");
    FUN_100d8193(iVar5,iVar6,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x404);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x404))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d897d("iProjectileSpeed");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x408);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x408))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d8968("iProjectileSpeedUp");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x40c);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x40c))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f29("iProjectileSpeedForward");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x410);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x410))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f29("iProjectileActivateDist");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
    iVar5 = extraout_ECX_x00395;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x414);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x414))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7df7("projLifetime");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00396;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x418);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x418))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d897d("timeToAccelerate");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00397;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x41c);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x41c))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8377("projectileCurvature");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00398;
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x420) != 0) {
    FUN_100f2baa(4,*(int *)(*(int *)(pbVar22 + 4) + 0x420));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x420);
    iVar5 = extraout_ECX_x00399;
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x420) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x420))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0xef);
        uVar4 = local_13b8 | 0x400;
      }
      else {
        iVar6 = extraout_ECX_x00399;
        FUN_10080700(extraout_ECX_x00399,extraout_ECX_x00399);
        uVar8 = FUN_10080627(iVar5,iVar6);
        local_8 = 0xf0;
        uVar4 = local_13b8 | 0x800;
      }
      uVar12 = uVar4;
      uVar13 = uVar7;
      local_13e0 = uVar4;
      local_13b8 = uVar4;
      FUN_100d7f3e("projectileModel");
      FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
      iVar5 = extraout_ECX_x00400;
      if ((local_13b8 & 0x800) != 0) {
        local_13e0 = local_13b8 & 0xfffff7ff;
        local_13b8 = local_13e0;
        guard_check_icall();
        iVar5 = extraout_ECX_x00401;
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((local_13b8 & 0x400) != 0) {
        local_13e0 = local_13b8 & 0xfffffbff;
        local_13b8 = local_13e0;
        guard_check_icall();
        iVar5 = extraout_ECX_x00402;
      }
    }
  }
  if ((puVar25 == (undefined4 *)0x0) ||
     (iVar5 = puVar25[1], *(int *)(*(int *)(pbVar22 + 4) + 0x424) != *(int *)(iVar5 + 0x424))) {
    if ((&PTR_s_WEAPPROJEXP_GRENADE_10281f00)[*(int *)(*(int *)(pbVar22 + 4) + 0x424)] ==
        (undefined *)0x0) {
      uVar8 = FUN_10081b38(0);
      local_8 = CONCAT31(local_8._1_3_,0xf1);
      uVar4 = local_13b8 | 0x1000;
    }
    else {
      iVar6 = iVar5;
      FUN_10080700(iVar5,iVar5);
      uVar8 = FUN_10080627(iVar5,iVar6);
      local_8 = 0xf2;
      uVar4 = local_13b8 | 0x2000;
    }
    uVar12 = uVar4;
    uVar13 = uVar7;
    local_13e0 = uVar4;
    local_13b8 = uVar4;
    FUN_100d83d8("projExplosion");
    FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
    iVar5 = extraout_ECX_x00403;
    if ((local_13b8 & 0x2000) != 0) {
      local_13e0 = local_13b8 & 0xffffdfff;
      local_13b8 = local_13e0;
      guard_check_icall();
      iVar5 = extraout_ECX_x00404;
    }
    local_8._0_1_ = 3;
    local_8._1_3_ = 0;
    if ((local_13b8 & 0x1000) != 0) {
      local_13e0 = local_13b8 & 0xffffefff;
      local_13b8 = local_13e0;
      guard_check_icall();
      iVar5 = extraout_ECX_x00405;
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x428) != 0) {
    FUN_100f2ff4(0x1e,*(int *)(*(int *)(pbVar22 + 4) + 0x428));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x428);
    iVar5 = extraout_ECX_x00406;
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x428) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x428))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0xf3);
        uVar4 = local_13b8 | 0x4000;
      }
      else {
        iVar6 = extraout_ECX_x00406;
        FUN_10080700(extraout_ECX_x00406,extraout_ECX_x00406);
        uVar8 = FUN_10080627(iVar5,iVar6);
        local_8 = 0xf4;
        uVar4 = local_13b8 | 0x8000;
      }
      uVar12 = uVar4;
      uVar13 = uVar7;
      local_13e0 = uVar4;
      local_13b8 = uVar4;
      FUN_100d8377("projExplosionEffect");
      FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
      iVar5 = extraout_ECX_x00407;
      if ((local_13b8 & 0x8000) != 0) {
        local_13e0 = local_13b8 & 0xffff7fff;
        local_13b8 = local_13e0;
        guard_check_icall();
        iVar5 = extraout_ECX_x00408;
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((local_13b8 & 0x4000) != 0) {
        local_13e0 = local_13b8 & 0xffffbfff;
        local_13b8 = local_13e0;
        guard_check_icall();
        iVar5 = extraout_ECX_x00409;
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x42c) != 0) {
    FUN_100f2ff4(0x1e,*(int *)(*(int *)(pbVar22 + 4) + 0x42c));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x42c);
    iVar5 = extraout_ECX_x00410;
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x42c) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x42c))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0xf5);
        uVar4 = local_13b8 | 0x10000;
      }
      else {
        iVar6 = extraout_ECX_x00410;
        FUN_10080700(extraout_ECX_x00410,extraout_ECX_x00410);
        uVar8 = FUN_10080627(iVar5,iVar6);
        local_8 = 0xf6;
        uVar4 = local_13b8 | 0x20000;
      }
      uVar12 = uVar4;
      uVar13 = uVar7;
      local_13e0 = uVar4;
      local_13b8 = uVar4;
      FUN_100d83d8("projDudEffect");
      FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
      iVar5 = extraout_ECX_x00411;
      if ((local_13b8 & 0x20000) != 0) {
        local_13e0 = local_13b8 & 0xfffdffff;
        local_13b8 = local_13e0;
        guard_check_icall();
        iVar5 = extraout_ECX_x00412;
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((local_13b8 & 0x10000) != 0) {
        local_13e0 = local_13b8 & 0xfffeffff;
        local_13b8 = local_13e0;
        guard_check_icall();
        iVar5 = extraout_ECX_x00413;
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x430) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0x430));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x430);
    iVar5 = extraout_ECX_x00414;
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x430) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x430))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0xf7);
        uVar4 = local_13b8 | 0x40000;
      }
      else {
        iVar6 = extraout_ECX_x00414;
        FUN_10080700(extraout_ECX_x00414,extraout_ECX_x00414);
        uVar8 = FUN_10080627(iVar5,iVar6);
        local_8 = 0xf8;
        uVar4 = local_13b8 | 0x80000;
      }
      uVar12 = uVar4;
      uVar13 = uVar7;
      local_13e0 = uVar4;
      local_13b8 = uVar4;
      FUN_100d8968("projExplosionSound");
      FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
      iVar5 = extraout_ECX_x00415;
      if ((local_13b8 & 0x80000) != 0) {
        local_13e0 = local_13b8 & 0xfff7ffff;
        local_13b8 = local_13e0;
        guard_check_icall();
        iVar5 = extraout_ECX_x00416;
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((local_13b8 & 0x40000) != 0) {
        local_13e0 = local_13b8 & 0xfffbffff;
        local_13b8 = local_13e0;
        guard_check_icall();
        iVar5 = extraout_ECX_x00417;
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x434) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0x434));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x434);
    iVar5 = extraout_ECX_x00418;
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x434) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x434))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0xf9);
        uVar4 = local_13b8 | 0x100000;
      }
      else {
        iVar6 = extraout_ECX_x00418;
        FUN_10080700(extraout_ECX_x00418,extraout_ECX_x00418);
        uVar8 = FUN_10080627(iVar5,iVar6);
        local_8 = 0xfa;
        uVar4 = local_13b8 | 0x200000;
      }
      uVar12 = uVar4;
      uVar13 = uVar7;
      local_13e0 = uVar4;
      local_13b8 = uVar4;
      FUN_100d7df7("projDudSound");
      FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
      iVar5 = extraout_ECX_x00419;
      if ((local_13b8 & 0x200000) != 0) {
        local_13e0 = local_13b8 & 0xffdfffff;
        local_13b8 = local_13e0;
        guard_check_icall();
        iVar5 = extraout_ECX_x00420;
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((local_13b8 & 0x100000) != 0) {
        local_13e0 = local_13b8 & 0xffefffff;
        local_13b8 = local_13e0;
        guard_check_icall();
        iVar5 = extraout_ECX_x00421;
      }
    }
  }
  if ((puVar25 == (undefined4 *)0x0) ||
     (iVar5 = puVar25[1], *(int *)(*(int *)(pbVar22 + 4) + 0x438) != *(int *)(iVar5 + 0x438))) {
    if ((&PTR_s_WEAPSTICKINESS_NONE_102820c0)[*(int *)(*(int *)(pbVar22 + 4) + 0x438)] ==
        (undefined *)0x0) {
      uVar8 = FUN_10081b38(0);
      local_8 = CONCAT31(local_8._1_3_,0xfb);
      uVar4 = local_13b8 | 0x400000;
    }
    else {
      iVar6 = iVar5;
      FUN_10080700(iVar5,iVar5);
      uVar8 = FUN_10080627(iVar5,iVar6);
      local_8 = 0xfc;
      uVar4 = local_13b8 | 0x800000;
    }
    uVar12 = uVar4;
    uVar13 = uVar7;
    local_13e0 = uVar4;
    local_13b8 = uVar4;
    FUN_100d7d85("stickiness");
    FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
    iVar5 = extraout_ECX_x00422;
    if ((local_13b8 & 0x800000) != 0) {
      local_13e0 = local_13b8 & 0xff7fffff;
      local_13b8 = local_13e0;
      guard_check_icall();
      iVar5 = extraout_ECX_x00423;
    }
    local_8._0_1_ = 3;
    local_8._1_3_ = 0;
    if ((local_13b8 & 0x400000) != 0) {
      local_13e0 = local_13b8 & 0xffbfffff;
      local_13b8 = local_13e0;
      guard_check_icall();
      iVar5 = extraout_ECX_x00424;
    }
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x43c);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x43c))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f29("lowAmmoWarningThreshold");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00425;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x440);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x440))))) {
    iVar6 = iVar5;
    FUN_100d834d("ricochetChance");
    FUN_100d8193(iVar5,iVar6,uVar7);
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x444) != 0) {
    bVar26 = local_13f8 == (byte *)0x0;
    FUN_10081b38(4);
    uVar4 = 0;
    local_8 = CONCAT31(local_8._1_3_,0xfd);
    do {
      if ((local_13f8 == (byte *)0x0) ||
         (*(float *)(uVar4 + *(int *)((int)local_13f8 + 0x444)) !=
          *(float *)(uVar4 + *(int *)(local_1400 + 0x444)))) {
        bVar1 = 1;
      }
      else {
        bVar1 = 0;
      }
      bVar26 = (bool)(bVar26 | bVar1);
      FUN_100f2f70(local_13b4);
      puVar25 = local_13fc;
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0x7c);
    if (bVar26) {
      puVar28 = local_134;
      uVar7 = extraout_ECX_x00426;
      uVar8 = extraout_ECX_x00426;
      uVar13 = local_13b4;
      FUN_100d834d("parallelBounce");
      FUN_100d8af7(uVar7,uVar8,puVar28,uVar13);
    }
    local_8._0_1_ = 3;
    guard_check_icall();
    pbVar22 = local_13e8;
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x448) != 0) {
    bVar26 = local_13f8 == (byte *)0x0;
    FUN_10081b38(4);
    uVar4 = 0;
    local_8 = CONCAT31(local_8._1_3_,0xfe);
    do {
      if ((local_13f8 == (byte *)0x0) ||
         (*(float *)(uVar4 + *(int *)((int)local_13f8 + 0x448)) !=
          *(float *)(uVar4 + *(int *)(local_1400 + 0x448)))) {
        bVar1 = 1;
      }
      else {
        bVar1 = 0;
      }
      bVar26 = (bool)(bVar26 | bVar1);
      FUN_100f2f70(local_13b4);
      puVar25 = local_13fc;
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0x7c);
    if (bVar26) {
      puVar28 = local_144;
      uVar7 = extraout_ECX_x00427;
      uVar8 = extraout_ECX_x00427;
      uVar13 = local_13b4;
      FUN_100d8377("perpendicularBounce");
      FUN_100d8af7(uVar7,uVar8,puVar28,uVar13);
    }
    local_8._0_1_ = 3;
    guard_check_icall();
    pbVar22 = local_13e8;
  }
  uVar7 = local_13b4;
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x44c) != 0) {
    FUN_100f2ff4(0x1e,*(int *)(*(int *)(pbVar22 + 4) + 0x44c));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x44c);
    uVar7 = local_13b4;
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x44c) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x44c))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = CONCAT31(local_8._1_3_,0xff);
        uVar4 = local_13b8 | 0x1000000;
      }
      else {
        uVar7 = extraout_ECX_x00428;
        uVar8 = extraout_ECX_x00428;
        FUN_10080700(extraout_ECX_x00428,extraout_ECX_x00428);
        uVar8 = FUN_10080627(uVar7,uVar8);
        local_8 = 0x100;
        uVar4 = local_13b8 | 0x2000000;
      }
      uVar7 = local_13b4;
      uVar12 = uVar4;
      uVar13 = local_13b4;
      local_13e0 = uVar4;
      local_13b8 = uVar4;
      FUN_100d7f3e("projTrailEffect");
      FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
      if ((local_13b8 & 0x2000000) != 0) {
        local_13e0 = local_13b8 & 0xfdffffff;
        local_13b8 = local_13e0;
        guard_check_icall();
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((local_13b8 & 0x1000000) != 0) {
        local_13e0 = local_13b8 & 0xfeffffff;
        local_13b8 = local_13e0;
        guard_check_icall();
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x450) != 0) {
    FUN_100f2ff4(0x1e,*(int *)(*(int *)(pbVar22 + 4) + 0x450));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x450);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x450) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x450))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = 0x101;
        uVar4 = local_13b8 | 0x4000000;
      }
      else {
        uVar8 = extraout_ECX_x00429;
        uVar13 = extraout_ECX_x00429;
        FUN_10080700(extraout_ECX_x00429,extraout_ECX_x00429);
        uVar8 = FUN_10080627(uVar8,uVar13);
        local_8 = 0x102;
        uVar4 = local_13b8 | 0x8000000;
      }
      uVar12 = uVar4;
      local_13e0 = uVar4;
      local_13b8 = uVar4;
      FUN_100d897d("projBeaconEffect");
      FUN_100d8af7(uVar4,uVar12,uVar8,uVar7);
      if ((local_13b8 & 0x8000000) != 0) {
        local_13e0 = local_13b8 & 0xf7ffffff;
        local_13b8 = local_13e0;
        guard_check_icall();
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((local_13b8 & 0x4000000) != 0) {
        local_13e0 = local_13b8 & 0xfbffffff;
        local_13b8 = local_13e0;
        guard_check_icall();
      }
    }
  }
  if (puVar25 == (undefined4 *)0x0) {
LAB_100e5f5f:
    FUN_10081b38(4);
    uVar7 = local_13b4;
    uVar4 = 0x454;
    local_8 = 0x103;
    do {
      FUN_100f2f70(uVar7);
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0x460);
    puVar28 = local_154;
    uVar8 = extraout_ECX_x00430;
    uVar13 = extraout_ECX_x00430;
    uVar10 = uVar7;
    FUN_100d897d("vProjectileColor");
    FUN_100d8af7(uVar8,uVar13,puVar28,uVar10);
    local_8._0_1_ = 3;
    local_8._1_3_ = 0;
    guard_check_icall();
    iVar5 = extraout_ECX_x00431;
    puVar25 = local_13fc;
    if (local_13fc != (undefined4 *)0x0) goto LAB_100e5fdc;
LAB_100e5ff4:
    if ((&PTR_s_MISSILE_GUIDANCE_NONE_10281ec0)[*(int *)(*(int *)(pbVar22 + 4) + 0x460)] ==
        (undefined *)0x0) {
      uVar8 = FUN_10081b38(0);
      local_8 = 0x104;
      uVar4 = local_13b8 | 0x10000000;
    }
    else {
      iVar6 = iVar5;
      FUN_10080700(iVar5,iVar5);
      uVar8 = FUN_10080627(iVar5,iVar6);
      local_8 = 0x105;
      uVar4 = local_13b8 | 0x20000000;
    }
    uVar12 = uVar4;
    uVar13 = uVar7;
    local_13e0 = uVar4;
    local_13b8 = uVar4;
    FUN_100d8992("guidedMissileType");
    FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
    iVar5 = extraout_ECX_x00432;
    if ((local_13b8 & 0x20000000) != 0) {
      local_13e0 = local_13b8 & 0xdfffffff;
      local_13b8 = local_13e0;
      guard_check_icall();
      iVar5 = extraout_ECX_x00433;
    }
    local_8._0_1_ = 3;
    local_8._1_3_ = 0;
    if ((local_13b8 & 0x10000000) != 0) {
      local_13e0 = local_13b8 & 0xefffffff;
      local_13b8 = local_13e0;
      guard_check_icall();
      iVar5 = extraout_ECX_x00434;
    }
  }
  else {
    uVar4 = 0;
    pfVar20 = (float *)(puVar25[1] + 0x454);
    do {
      if (*(float *)((*(int *)(pbVar22 + 4) - puVar25[1]) + (int)pfVar20) != *pfVar20)
      goto LAB_100e5f5f;
      uVar4 = uVar4 + 1;
      pfVar20 = pfVar20 + 1;
      uVar7 = local_13b4;
    } while (uVar4 < 3);
LAB_100e5fdc:
    iVar5 = puVar25[1];
    if (*(int *)(*(int *)(pbVar22 + 4) + 0x460) != *(int *)(iVar5 + 0x460)) goto LAB_100e5ff4;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x464);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x464))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d897d("maxSteeringAccel");
    FUN_100d8193(iVar5,iVar6,uVar8);
  }
  piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x468);
  if ((piVar18 != (int *)0x0) &&
     ((puVar25 == (undefined4 *)0x0 || (piVar18 != *(int **)(puVar25[1] + 0x468))))) {
    piVar27 = piVar18;
    piVar29 = piVar18;
    uVar8 = uVar7;
    FUN_100d8992("projIgnitionDelay");
    FUN_100d7c54(piVar18,piVar27,piVar29,uVar8);
    piVar18 = extraout_ECX_x00435;
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x46c) != 0) {
    FUN_100f2ff4(0x1e,*(int *)(*(int *)(pbVar22 + 4) + 0x46c));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x46c);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x46c) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x46c))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = 0x106;
        uVar4 = local_13b8 | 0x40000000;
      }
      else {
        piVar27 = piVar18;
        FUN_10080700(piVar18,piVar18);
        uVar8 = FUN_10080627(piVar18,piVar27);
        local_8 = 0x107;
        uVar4 = local_13b8 | 0x80000000;
      }
      uVar12 = uVar4;
      uVar13 = uVar7;
      local_13e0 = uVar4;
      local_13b8 = uVar4;
      FUN_100d8968("projIgnitionEffect");
      FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
      piVar18 = extraout_ECX_x00436;
      if ((int)local_13b8 < 0) {
        local_13b8 = local_13b8 & 0x7fffffff;
        guard_check_icall();
        piVar18 = extraout_ECX_x00437;
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((local_13b8 & 0x40000000) != 0) {
        guard_check_icall();
        piVar18 = extraout_ECX_x00438;
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x470) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0x470));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x470);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x470) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x470))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = 0x108;
        uVar4 = 1;
      }
      else {
        piVar27 = piVar18;
        FUN_10080700(piVar18,piVar18);
        uVar8 = FUN_10080627(piVar18,piVar27);
        local_8 = 0x109;
        uVar4 = 2;
      }
      uVar12 = uVar4;
      uVar13 = uVar7;
      local_13f4 = uVar4;
      local_13c0 = uVar4;
      FUN_100d8992("projIgnitionSound");
      FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
      piVar18 = extraout_ECX_x00439;
      if ((local_13c0 & 2) != 0) {
        local_13f4 = local_13c0 & 0xfffffffd;
        local_13c0 = local_13f4;
        guard_check_icall();
        piVar18 = extraout_ECX_x00440;
      }
      local_8._0_1_ = 3;
      local_8._1_3_ = 0;
      if ((local_13c0 & 1) != 0) {
        local_13f4 = local_13c0 & 0xfffffffe;
        local_13c0 = local_13f4;
        guard_check_icall();
        piVar18 = extraout_ECX_x00441;
      }
    }
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x474);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x474))))) {
    piVar27 = piVar18;
    uVar8 = uVar7;
    FUN_100d7df7("fAdsAimPitch");
    FUN_100d8193(piVar18,piVar27,uVar8);
    piVar18 = extraout_ECX_x00442;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x478);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x478))))) {
    piVar27 = piVar18;
    uVar8 = uVar7;
    FUN_100d8377("fAdsCrosshairInFrac");
    FUN_100d8193(piVar18,piVar27,uVar8);
    piVar18 = extraout_ECX_x00443;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x47c);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x47c))))) {
    piVar27 = piVar18;
    uVar8 = uVar7;
    FUN_100d7f14("fAdsCrosshairOutFrac");
    FUN_100d8193(piVar18,piVar27,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x480);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x480))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100f3111("adsGunKickReducedKickBullets");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
    iVar5 = extraout_ECX_x00444;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x484);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x484))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100f3111("adsGunKickReducedKickPercent");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00445;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x488);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x488))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8377("fAdsGunKickPitchMin");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00446;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x48c);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x48c))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8377("fAdsGunKickPitchMax");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00447;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x490);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x490))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8992("fAdsGunKickYawMin");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00448;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x494);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x494))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8992("fAdsGunKickYawMax");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00449;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x498);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x498))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d897d("fAdsGunKickAccel");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00450;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x49c);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x49c))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8377("fAdsGunKickSpeedMax");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00451;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x4a0);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x4a0))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100f2fb5("fAdsGunKickSpeedDecay");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00452;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x4a4);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x4a4))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100f2fca("fAdsGunKickStaticDecay");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00453;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x4a8);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x4a8))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f14("fAdsViewKickPitchMin");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00454;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x4ac);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x4ac))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f14("fAdsViewKickPitchMax");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00455;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x4b0);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x4b0))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8968("fAdsViewKickYawMin");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00456;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x4b4);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x4b4))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8968("fAdsViewKickYawMax");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00457;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x4b8);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x4b8))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8968("fAdsViewScatterMin");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00458;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x4bc);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x4bc))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8968("fAdsViewScatterMax");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00459;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x4c0);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x4c0))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7d85("fAdsSpread");
    FUN_100d8193(iVar5,iVar6,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x4c4);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x4c4))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100f3111("hipGunKickReducedKickBullets");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
    iVar5 = extraout_ECX_x00460;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x4c8);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x4c8))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100f3111("hipGunKickReducedKickPercent");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00461;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x4cc);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x4cc))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8377("fHipGunKickPitchMin");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00462;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x4d0);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x4d0))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8377("fHipGunKickPitchMax");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00463;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x4d4);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x4d4))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8992("fHipGunKickYawMin");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00464;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x4d8);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x4d8))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8992("fHipGunKickYawMax");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00465;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x4dc);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x4dc))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d897d("fHipGunKickAccel");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00466;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x4e0);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x4e0))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8377("fHipGunKickSpeedMax");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00467;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x4e4);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x4e4))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100f2fb5("fHipGunKickSpeedDecay");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00468;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x4e8);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x4e8))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100f2fca("fHipGunKickStaticDecay");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00469;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x4ec);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x4ec))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f14("fHipViewKickPitchMin");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00470;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x4f0);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x4f0))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f14("fHipViewKickPitchMax");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00471;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x4f4);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x4f4))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8968("fHipViewKickYawMin");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00472;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x4f8);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x4f8))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8968("fHipViewKickYawMax");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00473;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x4fc);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x4fc))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8968("fHipViewScatterMin");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00474;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x500);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x500))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d8968("fHipViewScatterMax");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00475;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x504);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x504))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7d10("fightDist");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00476;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x508);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x508))))) {
    iVar6 = iVar5;
    FUN_100d7c3f("maxDist");
    FUN_100d8193(iVar5,iVar6,uVar7);
  }
  FUN_10081b38(4);
  local_13c5 = puVar25 == (undefined4 *)0x0;
  local_8 = 0x10a;
  local_13f0 = (int)local_13f8 - (int)local_1400;
  puVar21 = (ushort *)(local_1400 + 0x51c);
  local_1408 = local_1400 + 0x514;
  local_140c = 2;
  do {
    uVar4 = local_13f0;
    local_13ec = puVar21;
    FUN_10081b38(3);
    FUN_10081b38(4);
    local_8._0_1_ = 0xc;
    if ((puVar25 == (undefined4 *)0x0) || (*puVar21 != *(ushort *)(uVar4 + (int)puVar21))) {
      bVar26 = false;
    }
    else {
      bVar26 = true;
    }
    uVar7 = 0;
    uVar4 = 0;
    puVar21 = local_13ec;
    if (*local_13ec != 0) {
      do {
        if ((bVar26) &&
           (puVar21 = local_13ec,
           *(float *)(*(int *)local_1408 + uVar4 * 8) !=
           *(float *)(*(int *)(local_1408 + local_13f0) + uVar4 * 8))) {
          local_13c5 = '\x01';
        }
        FUN_100f2f70(local_13b4);
        uVar4 = uVar4 + 1;
        uVar7 = extraout_ECX_x00477;
        puVar25 = local_13fc;
      } while (uVar4 < *puVar21);
    }
    uVar8 = local_13b4;
    puVar28 = local_164;
    uVar13 = uVar7;
    uVar10 = local_13b4;
    FUN_100d8020("knots");
    FUN_100d8af7(uVar7,uVar13,puVar28,uVar10);
    pbVar22 = local_1408;
    if (*(int *)(local_1408 + -8) == 0) {
      uVar7 = FUN_10081b38(0);
      local_8 = CONCAT31(local_8._1_3_,0xd);
      uVar4 = local_13c0 | 4;
    }
    else {
      uVar7 = extraout_ECX_x00478;
      uVar13 = extraout_ECX_x00478;
      FUN_10080700(extraout_ECX_x00478,extraout_ECX_x00478);
      uVar7 = FUN_10080627(uVar7,uVar13);
      local_8 = 0x10e;
      uVar4 = local_13c0 | 8;
    }
    uVar12 = uVar4;
    uVar13 = uVar8;
    local_13f4 = uVar4;
    local_13c0 = uVar4;
    FUN_100d8992("accuracyGraphName");
    FUN_100d8af7(uVar4,uVar12,uVar7,uVar13);
    if ((local_13c0 & 8) != 0) {
      local_13f4 = local_13c0 & 0xfffffff7;
      local_13c0 = local_13f4;
      guard_check_icall();
    }
    local_8 = 0x10c;
    if ((local_13c0 & 4) != 0) {
      local_13f4 = local_13c0 & 0xfffffffb;
      local_13c0 = local_13f4;
      guard_check_icall();
    }
    FUN_100d8a84(local_3c,uVar8);
    guard_check_icall();
    local_8 = CONCAT31(local_8._1_3_,10);
    guard_check_icall();
    uVar7 = local_13b4;
    local_1408 = pbVar22 + 4;
    puVar21 = local_13ec + 1;
    local_140c = local_140c + -1;
  } while (local_140c != 0);
  local_13ec = puVar21;
  if (local_13c5 != '\0') {
    puVar28 = local_174;
    uVar8 = extraout_ECX_x00479;
    uVar13 = extraout_ECX_x00479;
    uVar10 = local_13b4;
    FUN_100f2fca("originalAccuracyGraphs");
    FUN_100d8af7(uVar8,uVar13,puVar28,uVar10);
  }
  local_8 = 3;
  guard_check_icall();
  pbVar22 = local_13e8;
  iVar5 = *(int *)(*(int *)(local_13e8 + 4) + 0x520);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x520))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100f2fdf("iPositionReloadTransTime");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
    iVar5 = extraout_ECX_x00480;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x524);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x524))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7c3f("leftArc");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00481;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x528);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x528))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7fb0("rightArc");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00482;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x52c);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x52c))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d838c("topArc");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00483;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x530);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x530))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7d10("bottomArc");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00484;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x534);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x534))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7fb0("accuracy");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00485;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x538);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x538))))) {
    iVar6 = iVar5;
    FUN_100d7fb0("aiSpread");
    FUN_100d8193(iVar5,iVar6,uVar7);
    iVar5 = extraout_ECX_x00486;
  }
  uVar4 = 0x548;
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x53c);
  if (local_13a8 == _DAT_103193f0) {
LAB_100e74e4:
    if (puVar25 != (undefined4 *)0x0) goto LAB_100e74e8;
LAB_100e7514:
    FUN_10081b38(4);
    uVar12 = 0x540;
    local_8 = 0x10f;
    do {
      FUN_100f2f70(local_13b4);
      uVar7 = local_13b4;
      uVar12 = uVar12 + 4;
    } while (uVar12 < 0x548);
    puVar28 = local_184;
    uVar8 = extraout_ECX_x00487;
    uVar13 = extraout_ECX_x00487;
    uVar10 = local_13b4;
    FUN_100d7df7("minTurnSpeed");
    FUN_100d8af7(uVar8,uVar13,puVar28,uVar10);
    local_8 = 3;
    guard_check_icall();
    puVar25 = local_13fc;
    if (local_13fc != (undefined4 *)0x0) goto LAB_100e7596;
LAB_100e75d1:
    FUN_10081b38(4);
    local_8 = 0x110;
    do {
      FUN_100f2f70(uVar7);
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0x550);
    puVar28 = local_194;
    uVar8 = extraout_ECX_x00488;
    uVar13 = extraout_ECX_x00488;
    uVar10 = uVar7;
    FUN_100d7df7("maxTurnSpeed");
    FUN_100d8af7(uVar8,uVar13,puVar28,uVar10);
    local_8 = 3;
    guard_check_icall();
    pfVar20 = extraout_ECX_x00489;
    puVar25 = local_13fc;
  }
  else {
    if ((puVar25 == (undefined4 *)0x0) || (local_13a8 != *(float *)(puVar25[1] + 0x53c))) {
      iVar6 = iVar5;
      uVar7 = local_13b4;
      FUN_100d7df7("playerSpread");
      FUN_100d8193(iVar5,iVar6,uVar7);
      goto LAB_100e74e4;
    }
LAB_100e74e8:
    uVar12 = 0;
    pfVar20 = (float *)(puVar25[1] + 0x540);
    do {
      if (*(float *)((int)pfVar20 + (*(int *)(pbVar22 + 4) - puVar25[1])) != *pfVar20)
      goto LAB_100e7514;
      uVar12 = uVar12 + 1;
      pfVar20 = pfVar20 + 1;
    } while (uVar12 < 2);
LAB_100e7596:
    uVar12 = 0;
    pfVar20 = (float *)(puVar25[1] + 0x548);
    do {
      uVar7 = local_13b4;
      if (*(float *)((int)pfVar20 + (*(int *)(local_13e8 + 4) - puVar25[1])) != *pfVar20)
      goto LAB_100e75d1;
      uVar12 = uVar12 + 1;
      pfVar20 = pfVar20 + 1;
    } while (uVar12 < 2);
  }
  pbVar22 = local_13e8;
  local_13a8 = *(float *)(*(int *)(local_13e8 + 4) + 0x550);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x550))))) {
    pfVar19 = pfVar20;
    uVar8 = uVar7;
    FUN_100d7f14("pitchConvergenceTime");
    FUN_100d8193(pfVar20,pfVar19,uVar8);
    pfVar20 = extraout_ECX_x00490;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x554);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x554))))) {
    pfVar19 = pfVar20;
    uVar8 = uVar7;
    FUN_100d8968("yawConvergenceTime");
    FUN_100d8193(pfVar20,pfVar19,uVar8);
    pfVar20 = extraout_ECX_x00491;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x558);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x558))))) {
    pfVar19 = pfVar20;
    uVar8 = uVar7;
    FUN_100d7df7("suppressTime");
    FUN_100d8193(pfVar20,pfVar19,uVar8);
    pfVar20 = extraout_ECX_x00492;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x55c);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x55c))))) {
    pfVar19 = pfVar20;
    uVar8 = uVar7;
    FUN_100d7fb0("maxRange");
    FUN_100d8193(pfVar20,pfVar19,uVar8);
    pfVar20 = extraout_ECX_x00493;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x560);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x560))))) {
    pfVar19 = pfVar20;
    uVar8 = uVar7;
    FUN_100d8992("fAnimHorRotateInc");
    FUN_100d8193(pfVar20,pfVar19,uVar8);
    pfVar20 = extraout_ECX_x00494;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x564);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x564))))) {
    pfVar19 = pfVar20;
    FUN_100d8377("fPlayerPositionDist");
    FUN_100d8193(pfVar20,pfVar19,uVar7);
    pfVar20 = extraout_ECX_x00495;
  }
  pfVar19 = *(float **)(*(int *)(pbVar22 + 4) + 0x568);
  if (pfVar19 != (float *)0x0) {
    if ((puVar25 == (undefined4 *)0x0) ||
       (pfVar15 = *(float **)(puVar25[1] + 0x568), pfVar15 == (float *)0x0)) {
LAB_100e78a6:
      pfVar19 = pfVar20;
      FUN_10080700(pfVar20,pfVar20);
      uVar8 = FUN_10080627(pfVar20,pfVar19);
      local_8 = 0x112;
      uVar12 = local_13c0 | 0x20;
      uVar4 = uVar12;
      uVar7 = local_13b4;
      local_13f4 = uVar12;
      local_13c0 = uVar12;
      FUN_100d7f3e("szUseHintString");
      FUN_100d8af7(uVar12,uVar4,uVar8,uVar7);
      pfVar20 = extraout_ECX_x00496;
      if ((local_13c0 & 0x20) != 0) {
        local_13f4 = local_13c0 & 0xffffffdf;
        local_13c0 = local_13f4;
        guard_check_icall();
        pfVar20 = extraout_ECX_x00497;
      }
      local_8 = 3;
      if ((local_13c0 & 0x10) != 0) {
        local_13f4 = local_13c0 & 0xffffffef;
        local_13c0 = local_13f4;
        guard_check_icall();
        pfVar20 = extraout_ECX_x00498;
      }
    }
    else if (pfVar19 != pfVar15) {
      do {
        bVar1 = *(byte *)pfVar19;
        bVar26 = bVar1 < *(byte *)pfVar15;
        if (bVar1 != *(byte *)pfVar15) {
LAB_100e7899:
          uVar4 = -(uint)bVar26 | 1;
          goto LAB_100e789e;
        }
        if (bVar1 == 0) break;
        bVar1 = *(byte *)((int)pfVar19 + 1);
        bVar26 = bVar1 < *(byte *)((int)pfVar15 + 1);
        if (bVar1 != *(byte *)((int)pfVar15 + 1)) goto LAB_100e7899;
        pfVar19 = (float *)((int)pfVar19 + 2);
        pfVar15 = (float *)((int)pfVar15 + 2);
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_100e789e:
      pfVar20 = pfVar19;
      if (uVar4 != 0) goto LAB_100e78a6;
    }
  }
  pfVar19 = *(float **)(*(int *)(pbVar22 + 4) + 0x56c);
  uVar7 = local_13b4;
  if (pfVar19 != (float *)0x0) {
    if ((puVar25 == (undefined4 *)0x0) ||
       (pfVar15 = *(float **)(puVar25[1] + 0x56c), pfVar15 == (float *)0x0)) {
LAB_100e79a0:
      pfVar19 = pfVar20;
      FUN_10080700(pfVar20,pfVar20);
      uVar13 = FUN_10080627(pfVar20,pfVar19);
      uVar7 = local_13b4;
      local_8 = 0x114;
      uVar12 = local_13c0 | 0x80;
      uVar4 = uVar12;
      uVar8 = local_13b4;
      local_13f4 = uVar12;
      local_13c0 = uVar12;
      FUN_100d834d("dropHintString");
      FUN_100d8af7(uVar12,uVar4,uVar13,uVar8);
      if ((char)local_13c0 < '\0') {
        local_13f4 = local_13c0 & 0xffffff7f;
        local_13c0 = local_13f4;
        guard_check_icall();
      }
      local_8 = 3;
      if ((local_13c0 & 0x40) != 0) {
        local_13f4 = local_13c0 & 0xffffffbf;
        local_13c0 = local_13f4;
        guard_check_icall();
      }
    }
    else if (pfVar19 != pfVar15) {
      do {
        bVar1 = *(byte *)pfVar19;
        bVar26 = bVar1 < *(byte *)pfVar15;
        if (bVar1 != *(byte *)pfVar15) {
LAB_100e7993:
          uVar4 = -(uint)bVar26 | 1;
          goto LAB_100e7998;
        }
        if (bVar1 == 0) break;
        bVar1 = *(byte *)((int)pfVar19 + 1);
        bVar26 = bVar1 < *(byte *)((int)pfVar15 + 1);
        if (bVar1 != *(byte *)((int)pfVar15 + 1)) goto LAB_100e7993;
        pfVar19 = (float *)((int)pfVar19 + 2);
        pfVar15 = (float *)((int)pfVar15 + 2);
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_100e7998:
      pfVar20 = pfVar19;
      if (uVar4 != 0) goto LAB_100e79a0;
    }
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x570);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x570))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d8377("iUseHintStringIndex");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x574);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x574))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d8377("dropHintStringIndex");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
    iVar5 = extraout_ECX_x00499;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x578);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x578))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f3e("horizViewJitter");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00500;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x57c);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x57c))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d834d("vertViewJitter");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00501;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x580);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x580))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7d10("scanSpeed");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00502;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x584);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x584))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7d10("scanAccel");
    FUN_100d8193(iVar5,iVar6,uVar8);
  }
  pbVar17 = *(byte **)(*(int *)(pbVar22 + 4) + 0x588);
  if ((pbVar17 != (byte *)0x0) &&
     ((puVar25 == (undefined4 *)0x0 || (pbVar17 != *(byte **)(puVar25[1] + 0x588))))) {
    pbVar11 = pbVar17;
    pbVar9 = pbVar17;
    FUN_100d83d8("scanPauseTime");
    FUN_100d7c54(pbVar17,pbVar11,pbVar9,uVar7);
    pbVar17 = extraout_ECX_x00503;
  }
  pbVar11 = *(byte **)(*(int *)(pbVar22 + 4) + 0x58c);
  if (pbVar11 != (byte *)0x0) {
    if ((puVar25 == (undefined4 *)0x0) ||
       (pbVar9 = *(byte **)(puVar25[1] + 0x58c), pbVar9 == (byte *)0x0)) {
LAB_100e7ca5:
      pbVar11 = pbVar17;
      FUN_10080700(pbVar17,pbVar17);
      uVar8 = FUN_10080627(pbVar17,pbVar11);
      local_8 = 0x116;
      uVar12 = local_13c0 | 0x200;
      uVar4 = uVar12;
      uVar7 = local_13b4;
      local_13f4 = uVar12;
      local_13c0 = uVar12;
      FUN_100d7fb0("szScript");
      FUN_100d8af7(uVar12,uVar4,uVar8,uVar7);
      if ((local_13c0 & 0x200) != 0) {
        local_13f4 = local_13c0 & 0xfffffdff;
        local_13c0 = local_13f4;
        guard_check_icall();
      }
      local_8 = 3;
      if ((local_13c0 & 0x100) != 0) {
        local_13f4 = local_13c0 & 0xfffffeff;
        local_13c0 = local_13f4;
        guard_check_icall();
      }
    }
    else if (pbVar11 != pbVar9) {
      do {
        bVar1 = *pbVar11;
        bVar26 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_100e7c98:
          uVar4 = -(uint)bVar26 | 1;
          goto LAB_100e7c9d;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar11[1];
        bVar26 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_100e7c98;
        pbVar11 = pbVar11 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_100e7c9d:
      pbVar17 = pbVar11;
      if (uVar4 != 0) goto LAB_100e7ca5;
    }
  }
  if (puVar25 == (undefined4 *)0x0) {
LAB_100e7d84:
    FUN_10081b38(4);
    uVar7 = local_13b4;
    uVar4 = 0x590;
    local_8 = 0x117;
    do {
      FUN_100f2f70(uVar7);
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0x598);
    puVar28 = local_1a4;
    uVar8 = extraout_ECX_x00504;
    uVar13 = extraout_ECX_x00504;
    uVar10 = uVar7;
    FUN_100d897d("fOOPosAnimLength");
    FUN_100d8af7(uVar8,uVar13,puVar28,uVar10);
    local_8 = 3;
    guard_check_icall();
    puVar25 = local_13fc;
  }
  else {
    uVar4 = 0;
    pfVar20 = (float *)(puVar25[1] + 0x590);
    do {
      if (*(float *)((int)pfVar20 + (*(int *)(pbVar22 + 4) - puVar25[1])) != *pfVar20)
      goto LAB_100e7d84;
      uVar4 = uVar4 + 1;
      pfVar20 = pfVar20 + 1;
      uVar7 = local_13b4;
    } while (uVar4 < 2);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x598);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x598))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d7d10("minDamage");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x59c);
  if ((iVar5 != 0) && ((puVar25 == (undefined4 *)0x0 || (iVar5 != *(int *)(puVar25[1] + 0x59c))))) {
    iVar6 = iVar5;
    iVar16 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f3e("minPlayerDamage");
    FUN_100d7c54(iVar5,iVar6,iVar16,uVar8);
    iVar5 = extraout_ECX_x00505;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x5a0);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x5a0))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f3e("fMaxDamageRange");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00506;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x5a4);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x5a4))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f3e("fMinDamageRange");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00507;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x5a8);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x5a8))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100d7f29("destabilizationRateTime");
    FUN_100d8193(iVar5,iVar6,uVar8);
    iVar5 = extraout_ECX_x00508;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x5ac);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x5ac))))) {
    iVar6 = iVar5;
    uVar8 = uVar7;
    FUN_100f3162("destabilizationCurvatureMax");
    FUN_100d8193(iVar5,iVar6,uVar8);
  }
  iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x5b0);
  if (iVar5 == 0) {
LAB_100e7ffa:
    if (puVar25 != (undefined4 *)0x0) goto LAB_100e7ffe;
LAB_100e802d:
    FUN_10081b38(4);
    uVar7 = local_13b4;
    uVar4 = 0;
    local_8 = 0x118;
    do {
      FUN_100f2f70(uVar7);
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0x50);
    puVar28 = local_1b4;
    uVar8 = extraout_ECX_x00509;
    uVar13 = extraout_ECX_x00509;
    FUN_100f3177("locationDamageMultipliers");
    FUN_100d8af7(uVar8,uVar13,puVar28,uVar7);
    local_8 = 3;
    guard_check_icall();
    pfVar20 = extraout_ECX_x00510;
    puVar25 = local_13fc;
  }
  else {
    if ((puVar25 == (undefined4 *)0x0) || (iVar5 != *(int *)(puVar25[1] + 0x5b0))) {
      iVar6 = iVar5;
      iVar16 = iVar5;
      FUN_100d8377("destabilizeDistance");
      FUN_100d7c54(iVar5,iVar6,iVar16,uVar7);
      goto LAB_100e7ffa;
    }
LAB_100e7ffe:
    uVar4 = 0;
    pfVar20 = *(float **)(puVar25[1] + 0x5b4);
    iVar5 = *(int *)(*(int *)(pbVar22 + 4) + 0x5b4) - (int)pfVar20;
    do {
      if (*(float *)(iVar5 + (int)pfVar20) != *pfVar20) goto LAB_100e802d;
      uVar4 = uVar4 + 1;
      pfVar20 = pfVar20 + 1;
    } while (uVar4 < 0x14);
  }
  pbVar22 = local_13e8;
  pfVar19 = *(float **)(*(int *)(local_13e8 + 4) + 0x5b8);
  if (pfVar19 != (float *)0x0) {
    if ((puVar25 == (undefined4 *)0x0) ||
       (pfVar15 = *(float **)(puVar25[1] + 0x5b8), pfVar15 == (float *)0x0)) {
LAB_100e8103:
      pfVar19 = pfVar20;
      FUN_10080700(pfVar20,pfVar20);
      uVar10 = FUN_10080627(pfVar20,pfVar19);
      uVar4 = local_13c0;
      local_8 = 0x11a;
      local_13f4 = local_13c0 | 0x800;
      uVar7 = extraout_ECX_x00511;
      uVar8 = extraout_ECX_x00511;
      uVar13 = local_13b4;
      local_13c0 = local_13f4;
      FUN_100d7d85("fireRumble");
      FUN_100d8af7(uVar7,uVar8,uVar10,uVar13);
      local_13f4 = uVar4 & 0xfffff7ff;
      local_13c0 = local_13f4;
      guard_check_icall();
      local_8 = 3;
      pfVar20 = extraout_ECX_x00512;
      if ((uVar4 & 0x400) != 0) {
        local_13f4 = uVar4 & 0xfffff3ff;
        local_13c0 = local_13f4;
        guard_check_icall();
        pfVar20 = extraout_ECX_x00513;
      }
    }
    else if (pfVar19 != pfVar15) {
      do {
        bVar1 = *(byte *)pfVar19;
        bVar26 = bVar1 < *(byte *)pfVar15;
        if (bVar1 != *(byte *)pfVar15) {
LAB_100e80f6:
          uVar4 = -(uint)bVar26 | 1;
          goto LAB_100e80fb;
        }
        if (bVar1 == 0) break;
        bVar1 = *(byte *)((int)pfVar19 + 1);
        bVar26 = bVar1 < *(byte *)((int)pfVar15 + 1);
        if (bVar1 != *(byte *)((int)pfVar15 + 1)) goto LAB_100e80f6;
        pfVar19 = (float *)((int)pfVar19 + 2);
        pfVar15 = (float *)((int)pfVar15 + 2);
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_100e80fb:
      pfVar20 = pfVar19;
      if (uVar4 != 0) goto LAB_100e8103;
    }
  }
  pfVar19 = *(float **)(*(int *)(pbVar22 + 4) + 0x5bc);
  uVar7 = local_13b4;
  if (pfVar19 != (float *)0x0) {
    if ((puVar25 == (undefined4 *)0x0) ||
       (pfVar15 = *(float **)(puVar25[1] + 0x5bc), pfVar15 == (float *)0x0)) {
LAB_100e8200:
      pfVar19 = pfVar20;
      FUN_10080700(pfVar20,pfVar20);
      uVar13 = FUN_10080627(pfVar20,pfVar19);
      uVar7 = local_13b4;
      local_8 = 0x11c;
      uVar12 = local_13c0 | 0x2000;
      uVar4 = uVar12;
      uVar8 = local_13b4;
      local_13f4 = uVar12;
      local_13c0 = uVar12;
      FUN_100d8992("meleeImpactRumble");
      FUN_100d8af7(uVar12,uVar4,uVar13,uVar8);
      pfVar20 = extraout_ECX_x00514;
      if ((local_13c0 & 0x2000) != 0) {
        local_13f4 = local_13c0 & 0xffffdfff;
        local_13c0 = local_13f4;
        guard_check_icall();
        pfVar20 = extraout_ECX_x00515;
      }
      local_8 = 3;
      if ((local_13c0 & 0x1000) != 0) {
        local_13f4 = local_13c0 & 0xffffefff;
        local_13c0 = local_13f4;
        guard_check_icall();
        pfVar20 = extraout_ECX_x00516;
      }
    }
    else if (pfVar19 != pfVar15) {
      do {
        bVar1 = *(byte *)pfVar19;
        bVar26 = bVar1 < *(byte *)pfVar15;
        if (bVar1 != *(byte *)pfVar15) {
LAB_100e81f3:
          uVar4 = -(uint)bVar26 | 1;
          goto LAB_100e81f8;
        }
        if (bVar1 == 0) break;
        bVar1 = *(byte *)((int)pfVar19 + 1);
        bVar26 = bVar1 < *(byte *)((int)pfVar15 + 1);
        if (bVar1 != *(byte *)((int)pfVar15 + 1)) goto LAB_100e81f3;
        pfVar19 = (float *)((int)pfVar19 + 2);
        pfVar15 = (float *)((int)pfVar15 + 2);
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_100e81f8:
      pfVar20 = pfVar19;
      if (uVar4 != 0) goto LAB_100e8200;
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x5c0) != 0) {
    FUN_100f3189(0x28,*(int *)(*(int *)(pbVar22 + 4) + 0x5c0));
    pfVar20 = *(float **)(*(int *)(pbVar22 + 4) + 0x5c0);
    if ((pfVar20 != (float *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(float **)(puVar25[1] + 0x5c0) == (float *)0x0)) ||
        (pfVar20 != *(float **)(puVar25[1] + 0x5c0))))) {
      if (*pfVar20 == 0.0) {
        uVar8 = FUN_10081b38(0);
        local_8 = 0x11d;
        uVar4 = local_13c0 | 0x4000;
      }
      else {
        pfVar19 = pfVar20;
        FUN_10080700(pfVar20,pfVar20);
        uVar8 = FUN_10080627(pfVar20,pfVar19);
        local_8 = 0x11e;
        uVar4 = local_13c0 | 0x8000;
      }
      uVar12 = uVar4;
      uVar13 = uVar7;
      local_13f4 = uVar4;
      local_13c0 = uVar4;
      FUN_100d7d85("tracerType");
      FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
      pfVar20 = extraout_ECX_x00517;
      if ((local_13c0 & 0x8000) != 0) {
        local_13f4 = local_13c0 & 0xffff7fff;
        local_13c0 = local_13f4;
        guard_check_icall();
        pfVar20 = extraout_ECX_x00518;
      }
      local_8 = 3;
      if ((local_13c0 & 0x4000) != 0) {
        local_13f4 = local_13c0 & 0xffffbfff;
        local_13c0 = local_13f4;
        guard_check_icall();
        pfVar20 = extraout_ECX_x00519;
      }
    }
  }
  if (*(int *)(local_1400 + 0x30) != 8) goto LAB_100e8c06;
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x5c4);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x5c4))))) {
    pfVar19 = pfVar20;
    uVar8 = uVar7;
    FUN_100d8377("turretScopeZoomRate");
    FUN_100d8193(pfVar20,pfVar19,uVar8);
    pfVar20 = extraout_ECX_x00520;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x5c8);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x5c8))))) {
    pfVar19 = pfVar20;
    uVar8 = uVar7;
    FUN_100d8968("turretScopeZoomMin");
    FUN_100d8193(pfVar20,pfVar19,uVar8);
    pfVar20 = extraout_ECX_x00521;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x5cc);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x5cc))))) {
    pfVar19 = pfVar20;
    uVar8 = uVar7;
    FUN_100d8968("turretScopeZoomMax");
    FUN_100d8193(pfVar20,pfVar19,uVar8);
    pfVar20 = extraout_ECX_x00522;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x5d0);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x5d0))))) {
    pfVar19 = pfVar20;
    uVar8 = uVar7;
    FUN_100d7f14("turretOverheatUpRate");
    FUN_100d8193(pfVar20,pfVar19,uVar8);
    pfVar20 = extraout_ECX_x00523;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x5d4);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x5d4))))) {
    pfVar19 = pfVar20;
    uVar8 = uVar7;
    FUN_100f2fca("turretOverheatDownRate");
    FUN_100d8193(pfVar20,pfVar19,uVar8);
    pfVar20 = extraout_ECX_x00524;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x5d8);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x5d8))))) {
    pfVar19 = pfVar20;
    uVar8 = uVar7;
    FUN_100f2fb5("turretOverheatPenalty");
    FUN_100d8193(pfVar20,pfVar19,uVar8);
    pfVar20 = extraout_ECX_x00525;
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x5dc) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0x5dc));
    pfVar20 = *(float **)(*(int *)(pbVar22 + 4) + 0x5dc);
    if ((pfVar20 != (float *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(float **)(puVar25[1] + 0x5dc) == (float *)0x0)) ||
        (pfVar20 != *(float **)(puVar25[1] + 0x5dc))))) {
      if (*pfVar20 == 0.0) {
        uVar8 = FUN_10081b38(0);
        local_8 = 0x11f;
        uVar4 = local_13c0 | 0x10000;
      }
      else {
        pfVar19 = pfVar20;
        FUN_10080700(pfVar20,pfVar20);
        uVar8 = FUN_10080627(pfVar20,pfVar19);
        local_8 = 0x120;
        uVar4 = local_13c0 | 0x20000;
      }
      uVar12 = uVar4;
      uVar13 = uVar7;
      local_13f4 = uVar4;
      local_13c0 = uVar4;
      FUN_100d8377("turretOverheatSound");
      FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
      pfVar20 = extraout_ECX_x00526;
      if ((local_13c0 & 0x20000) != 0) {
        local_13f4 = local_13c0 & 0xfffdffff;
        local_13c0 = local_13f4;
        guard_check_icall();
        pfVar20 = extraout_ECX_x00527;
      }
      local_8 = 3;
      if ((local_13c0 & 0x10000) != 0) {
        local_13f4 = local_13c0 & 0xfffeffff;
        local_13c0 = local_13f4;
        guard_check_icall();
        pfVar20 = extraout_ECX_x00528;
      }
    }
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x5e0) != 0) {
    FUN_100f2ff4(0x1e,*(int *)(*(int *)(pbVar22 + 4) + 0x5e0));
    pfVar20 = *(float **)(*(int *)(pbVar22 + 4) + 0x5e0);
    if ((pfVar20 != (float *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(float **)(puVar25[1] + 0x5e0) == (float *)0x0)) ||
        (pfVar20 != *(float **)(puVar25[1] + 0x5e0))))) {
      if (*pfVar20 == 0.0) {
        uVar8 = FUN_10081b38(0);
        local_8 = 0x121;
        uVar4 = local_13c0 | 0x40000;
      }
      else {
        pfVar19 = pfVar20;
        FUN_10080700(pfVar20,pfVar20);
        uVar8 = FUN_10080627(pfVar20,pfVar19);
        local_8 = 0x122;
        uVar4 = local_13c0 | 0x80000;
      }
      uVar12 = uVar4;
      uVar13 = uVar7;
      local_13f4 = uVar4;
      local_13c0 = uVar4;
      FUN_100d7f14("turretOverheatEffect");
      FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
      pfVar20 = extraout_ECX_x00529;
      if ((local_13c0 & 0x80000) != 0) {
        local_13f4 = local_13c0 & 0xfff7ffff;
        local_13c0 = local_13f4;
        guard_check_icall();
        pfVar20 = extraout_ECX_x00530;
      }
      local_8 = 3;
      if ((local_13c0 & 0x40000) != 0) {
        local_13f4 = local_13c0 & 0xfffbffff;
        local_13c0 = local_13f4;
        guard_check_icall();
        pfVar20 = extraout_ECX_x00531;
      }
    }
  }
  pfVar19 = *(float **)(*(int *)(pbVar22 + 4) + 0x5e4);
  if (pfVar19 != (float *)0x0) {
    if ((puVar25 == (undefined4 *)0x0) ||
       (pfVar15 = *(float **)(puVar25[1] + 0x5e4), pfVar15 == (float *)0x0)) {
LAB_100e8876:
      pfVar19 = pfVar20;
      FUN_10080700(pfVar20,pfVar20);
      uVar13 = FUN_10080627(pfVar20,pfVar19);
      local_8 = 0x124;
      uVar12 = local_13c0 | 0x200000;
      uVar4 = uVar12;
      uVar8 = uVar7;
      local_13f4 = uVar12;
      local_13c0 = uVar12;
      FUN_100f2fca("turretBarrelSpinRumble");
      FUN_100d8af7(uVar12,uVar4,uVar13,uVar8);
      pfVar20 = extraout_ECX_x00532;
      if ((local_13c0 & 0x200000) != 0) {
        local_13f4 = local_13c0 & 0xffdfffff;
        local_13c0 = local_13f4;
        guard_check_icall();
        pfVar20 = extraout_ECX_x00533;
      }
      local_8 = 3;
      if ((local_13c0 & 0x100000) != 0) {
        local_13f4 = local_13c0 & 0xffefffff;
        local_13c0 = local_13f4;
        guard_check_icall();
        pfVar20 = extraout_ECX_x00534;
      }
    }
    else if (pfVar19 != pfVar15) {
      do {
        bVar1 = *(byte *)pfVar19;
        bVar26 = bVar1 < *(byte *)pfVar15;
        if (bVar1 != *(byte *)pfVar15) {
LAB_100e8863:
          uVar4 = -(uint)bVar26 | 1;
          goto LAB_100e8868;
        }
        if (bVar1 == 0) break;
        bVar1 = *(byte *)((int)pfVar19 + 1);
        bVar26 = bVar1 < *(byte *)((int)pfVar15 + 1);
        if (bVar1 != *(byte *)((int)pfVar15 + 1)) goto LAB_100e8863;
        pfVar19 = (float *)((int)pfVar19 + 2);
        pfVar15 = (float *)((int)pfVar15 + 2);
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_100e8868:
      pfVar20 = pfVar19;
      uVar7 = local_13b4;
      if (uVar4 != 0) goto LAB_100e8876;
    }
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x5e8);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x5e8))))) {
    pfVar19 = pfVar20;
    uVar8 = uVar7;
    FUN_100f2fb5("turretBarrelSpinSpeed");
    FUN_100d8193(pfVar20,pfVar19,uVar8);
    pfVar20 = extraout_ECX_x00535;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x5ec);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x5ec))))) {
    pfVar19 = pfVar20;
    uVar8 = uVar7;
    FUN_100f2fca("turretBarrelSpinUpTime");
    FUN_100d8193(pfVar20,pfVar19,uVar8);
    pfVar20 = extraout_ECX_x00536;
  }
  local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x5f0);
  if ((local_13a8 != _DAT_103193f0) &&
     ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x5f0))))) {
    pfVar19 = pfVar20;
    uVar8 = uVar7;
    FUN_100f2fdf("turretBarrelSpinDownTime");
    FUN_100d8193(pfVar20,pfVar19,uVar8);
  }
  if (*(int *)(*(int *)(pbVar22 + 4) + 0x5f4) != 0) {
    FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0x5f4));
    piVar18 = *(int **)(*(int *)(pbVar22 + 4) + 0x5f4);
    if ((piVar18 != (int *)0x0) &&
       (((puVar25 == (undefined4 *)0x0 || (*(int **)(puVar25[1] + 0x5f4) == (int *)0x0)) ||
        (piVar18 != *(int **)(puVar25[1] + 0x5f4))))) {
      if (*piVar18 == 0) {
        uVar8 = FUN_10081b38(0);
        local_8 = 0x125;
        uVar4 = local_13c0 | 0x400000;
      }
      else {
        piVar27 = piVar18;
        FUN_10080700(piVar18,piVar18);
        uVar8 = FUN_10080627(piVar18,piVar27);
        local_8 = 0x126;
        uVar4 = local_13c0 | 0x800000;
      }
      uVar12 = uVar4;
      uVar13 = uVar7;
      local_13f4 = uVar4;
      local_13c0 = uVar4;
      FUN_100f2fca("turretBarrelSpinMaxSnd");
      FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
      if ((local_13c0 & 0x800000) != 0) {
        local_13f4 = local_13c0 & 0xff7fffff;
        local_13c0 = local_13f4;
        guard_check_icall();
      }
      local_8 = 3;
      if ((local_13c0 & 0x400000) != 0) {
        local_13f4 = local_13c0 & 0xffbfffff;
        local_13c0 = local_13f4;
        guard_check_icall();
      }
    }
  }
  FUN_10007684("turretBarrelSpinUpSnd");
  local_8 = 0x127;
  FUN_100d97aa(local_46c,local_1400 + 0x5f8,4,
               -(uint)(local_13f8 != (byte *)0x0) & (int)local_13f8 + 0x5f8U,local_13ac,uVar7);
  local_8 = 3;
  FUN_100075cd();
  FUN_10007684("turretBarrelSpinDownSnd");
  local_8 = 0x128;
  FUN_100d97aa(local_484,local_1400 + 0x608,4,
               -(uint)(local_13f8 != (byte *)0x0) & (int)local_13f8 + 0x608U,local_13ac,uVar7);
  local_8 = 3;
  FUN_100075cd();
  pfVar20 = extraout_ECX_x00537;
LAB_100e8c06:
  if (*(int *)(local_1400 + 0x30) == 7) {
    if (*(int *)(*(int *)(pbVar22 + 4) + 0x618) != 0) {
      FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0x618));
      pfVar20 = *(float **)(*(int *)(pbVar22 + 4) + 0x618);
      if ((pfVar20 != (float *)0x0) &&
         (((puVar25 == (undefined4 *)0x0 || (*(float **)(puVar25[1] + 0x618) == (float *)0x0)) ||
          (pfVar20 != *(float **)(puVar25[1] + 0x618))))) {
        if (*pfVar20 == 0.0) {
          uVar8 = FUN_10081b38(0);
          local_8 = 0x129;
          uVar4 = local_13c0 | 0x1000000;
        }
        else {
          pfVar19 = pfVar20;
          FUN_10080700(pfVar20,pfVar20);
          uVar8 = FUN_10080627(pfVar20,pfVar19);
          local_8 = 0x12a;
          uVar4 = local_13c0 | 0x2000000;
        }
        uVar12 = uVar4;
        uVar13 = uVar7;
        local_13f4 = uVar4;
        local_13c0 = uVar4;
        FUN_100f2fb5("missileConeSoundAlias");
        FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
        pfVar20 = extraout_ECX_x00538;
        if ((local_13c0 & 0x2000000) != 0) {
          local_13f4 = local_13c0 & 0xfdffffff;
          local_13c0 = local_13f4;
          guard_check_icall();
          pfVar20 = extraout_ECX_x00539;
        }
        local_8 = 3;
        if ((local_13c0 & 0x1000000) != 0) {
          local_13f4 = local_13c0 & 0xfeffffff;
          local_13c0 = local_13f4;
          guard_check_icall();
          pfVar20 = extraout_ECX_x00540;
        }
      }
    }
    if (*(int *)(*(int *)(pbVar22 + 4) + 0x61c) != 0) {
      FUN_100f2cb2(0xb,*(int *)(*(int *)(pbVar22 + 4) + 0x61c));
      pfVar20 = *(float **)(*(int *)(pbVar22 + 4) + 0x61c);
      if ((pfVar20 != (float *)0x0) &&
         (((puVar25 == (undefined4 *)0x0 || (*(float **)(puVar25[1] + 0x61c) == (float *)0x0)) ||
          (pfVar20 != *(float **)(puVar25[1] + 0x61c))))) {
        if (*pfVar20 == 0.0) {
          uVar8 = FUN_10081b38(0);
          local_8 = 299;
          uVar4 = local_13c0 | 0x4000000;
        }
        else {
          pfVar19 = pfVar20;
          FUN_10080700(pfVar20,pfVar20);
          uVar8 = FUN_10080627(pfVar20,pfVar19);
          local_8 = 300;
          uVar4 = local_13c0 | 0x8000000;
        }
        uVar12 = uVar4;
        uVar13 = uVar7;
        local_13f4 = uVar4;
        local_13c0 = uVar4;
        FUN_100f3162("missileConeSoundAliasAtBase");
        FUN_100d8af7(uVar4,uVar12,uVar8,uVar13);
        pfVar20 = extraout_ECX_x00541;
        if ((local_13c0 & 0x8000000) != 0) {
          local_13c0 = local_13c0 & 0xf7ffffff;
          guard_check_icall();
          pfVar20 = extraout_ECX_x00542;
        }
        local_8 = 3;
        if ((local_13c0 & 0x4000000) != 0) {
          guard_check_icall();
          pfVar20 = extraout_ECX_x00543;
        }
      }
    }
    local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x620);
    if ((local_13a8 != _DAT_103193f0) &&
       ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x620))))) {
      pfVar19 = pfVar20;
      uVar8 = uVar7;
      FUN_100f3162("missileConeSoundRadiusAtTop");
      FUN_100d8193(pfVar20,pfVar19,uVar8);
      pfVar20 = extraout_ECX_x00544;
    }
    local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x624);
    if ((local_13a8 != _DAT_103193f0) &&
       ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x624))))) {
      pfVar19 = pfVar20;
      uVar8 = uVar7;
      FUN_100f3111("missileConeSoundRadiusAtBase");
      FUN_100d8193(pfVar20,pfVar19,uVar8);
      pfVar20 = extraout_ECX_x00545;
    }
    local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x628);
    if ((local_13a8 != _DAT_103193f0) &&
       ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x628))))) {
      pfVar19 = pfVar20;
      uVar8 = uVar7;
      FUN_100f2fca("missileConeSoundHeight");
      FUN_100d8193(pfVar20,pfVar19,uVar8);
      pfVar20 = extraout_ECX_x00546;
    }
    local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x62c);
    if ((local_13a8 != _DAT_103193f0) &&
       ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x62c))))) {
      pfVar19 = pfVar20;
      uVar8 = uVar7;
      FUN_100f3111("missileConeSoundOriginOffset");
      FUN_100d8193(pfVar20,pfVar19,uVar8);
      pfVar20 = extraout_ECX_x00547;
    }
    local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x630);
    if ((local_13a8 != _DAT_103193f0) &&
       ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x630))))) {
      pfVar19 = pfVar20;
      uVar8 = uVar7;
      FUN_100f3291("missileConeSoundVolumescaleAtCore");
      FUN_100d8193(pfVar20,pfVar19,uVar8);
      pfVar20 = extraout_ECX_x00548;
    }
    local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x634);
    if ((local_13a8 != _DAT_103193f0) &&
       ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x634))))) {
      pfVar19 = pfVar20;
      uVar8 = uVar7;
      FUN_100f3291("missileConeSoundVolumescaleAtEdge");
      FUN_100d8193(pfVar20,pfVar19,uVar8);
      pfVar20 = extraout_ECX_x00549;
    }
    local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x638);
    if ((local_13a8 != _DAT_103193f0) &&
       ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x638))))) {
      pfVar19 = pfVar20;
      uVar8 = uVar7;
      FUN_100f32a6("missileConeSoundVolumescaleCoreSize");
      FUN_100d8193(pfVar20,pfVar19,uVar8);
      pfVar20 = extraout_ECX_x00550;
    }
    local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x63c);
    if ((local_13a8 != _DAT_103193f0) &&
       ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x63c))))) {
      pfVar19 = pfVar20;
      uVar8 = uVar7;
      FUN_100f30fc("missileConeSoundPitchAtTop");
      FUN_100d8193(pfVar20,pfVar19,uVar8);
      pfVar20 = extraout_ECX_x00551;
    }
    local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x640);
    if ((local_13a8 != _DAT_103193f0) &&
       ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x640))))) {
      pfVar19 = pfVar20;
      uVar8 = uVar7;
      FUN_100f3126("missileConeSoundPitchAtBottom");
      FUN_100d8193(pfVar20,pfVar19,uVar8);
      pfVar20 = extraout_ECX_x00552;
    }
    local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x644);
    if ((local_13a8 != _DAT_103193f0) &&
       ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x644))))) {
      pfVar19 = pfVar20;
      uVar8 = uVar7;
      FUN_100f3111("missileConeSoundPitchTopSize");
      FUN_100d8193(pfVar20,pfVar19,uVar8);
      pfVar20 = extraout_ECX_x00553;
    }
    local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x648);
    if ((local_13a8 != _DAT_103193f0) &&
       ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x648))))) {
      pfVar19 = pfVar20;
      uVar8 = uVar7;
      FUN_100f32bb("missileConeSoundPitchBottomSize");
      FUN_100d8193(pfVar20,pfVar19,uVar8);
      pfVar20 = extraout_ECX_x00554;
    }
    local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x64c);
    if ((local_13a8 != _DAT_103193f0) &&
       ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x64c))))) {
      pfVar19 = pfVar20;
      uVar8 = uVar7;
      FUN_100f314d("missileConeSoundCrossfadeTopSize");
      FUN_100d8193(pfVar20,pfVar19,uVar8);
      pfVar20 = extraout_ECX_x00555;
    }
    local_13a8 = *(float *)(*(int *)(pbVar22 + 4) + 0x650);
    if ((local_13a8 != _DAT_103193f0) &&
       ((puVar25 == (undefined4 *)0x0 || (local_13a8 != *(float *)(puVar25[1] + 0x650))))) {
      pfVar19 = pfVar20;
      uVar8 = uVar7;
      FUN_100f32a6("missileConeSoundCrossfadeBottomSize");
      FUN_100d8193(pfVar20,pfVar19,uVar8);
    }
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x654);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x654))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d7d85("sharedAmmo");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x655);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x655))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d7f3e("lockonSupported");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x656);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x656))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d8377("requireLockonToFire");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x657);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x657))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d7df7("bigExplosion");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x658);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x658))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d8992("noAdsWhenMagEmpty");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x659);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x659))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d897d("avoidDropCleanup");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x65a);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x65a))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d83d8("inheritsPerks");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x65b);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x65b))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d7f14("crosshairColorChange");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x65c);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x65c))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d7df7("bRifleBullet");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x65d);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x65d))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d83d8("armorPiercing");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x65e);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x65e))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d8362("bBoltAction");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x65f);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x65f))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d7df7("aimDownSight");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x660);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x660))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d8968("bRechamberWhileAds");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x661);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x661))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100f2fca("bBulletExplosiveDamage");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x662);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x662))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d7df7("bCookOffHold");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x663);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x663))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d7d10("bClipOnly");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x664);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x664))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d7df7("noAmmoPickup");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x665);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x665))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d8362("adsFireOnly");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x666);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x666))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100f30fc("cancelAutoHolsterWhenEmpty");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x667);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x667))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100f2fdf("disableSwitchToWhenEmpty");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x668);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x668))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100f30fc("suppressAmmoReserveDisplay");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x669);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x669))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100f3162("laserSightDuringNightvision");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x66a);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x66a))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d8992("markableViewmodel");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x66b);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x66b))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d8362("noDualWield");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x66c);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x66c))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d7df7("flipKillIcon");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x66d);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x66d))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d897d("bNoPartialReload");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x66e);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x66e))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d897d("bSegmentedReload");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x66f);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x66f))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d8362("blocksProne");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x670);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x670))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d7fb0("silenced");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x671);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x671))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d897d("isRollingGrenade");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x672);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x672))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100f314d("projExplosionEffectForceNormalUp");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x673);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x673))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d8968("bProjImpactExplode");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x674);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x674))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d834d("stickToPlayers");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x675);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x675))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d7df7("hasDetonator");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x676);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x676))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d83d8("disableFiring");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x677);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x677))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d7f3e("timedDetonation");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x678);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x678))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d838c("rotate");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x679);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x679))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d8992("holdButtonToThrow");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x67a);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x67a))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100f2fdf("freezeMovementWhenFiring");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x67b);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x67b))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d7df7("thermalScope");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x67c);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x67c))))) {
    uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    uVar8 = uVar7;
    FUN_100d8992("altModeSameWeapon");
    FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
  }
  if (*(int *)(local_1400 + 0x30) == 8) {
    iVar5 = *(int *)(pbVar22 + 4);
    bVar1 = *(byte *)(iVar5 + 0x67d);
    uVar4 = (uint)bVar1;
    if ((bVar1 != 0) &&
       ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x67d)))))
    {
      uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
      uVar12 = uVar4;
      uVar8 = uVar7;
      FUN_100d7f29("turretBarrelSpinEnabled");
      FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
    }
  }
  if (*(int *)(local_1400 + 0x30) == 7) {
    iVar5 = *(int *)(pbVar22 + 4);
    bVar1 = *(byte *)(iVar5 + 0x67e);
    uVar4 = (uint)bVar1;
    if ((bVar1 != 0) &&
       ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x67e)))))
    {
      uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
      uVar12 = uVar4;
      uVar8 = uVar7;
      FUN_100d7f29("missileConeSoundEnabled");
      FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
    }
    iVar5 = *(int *)(pbVar22 + 4);
    bVar1 = *(byte *)(iVar5 + 0x67f);
    uVar4 = (uint)bVar1;
    if ((bVar1 != 0) &&
       ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x67f)))))
    {
      uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
      uVar12 = uVar4;
      uVar8 = uVar7;
      FUN_100f3291("missileConeSoundPitchshiftEnabled");
      FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
    }
    iVar5 = *(int *)(pbVar22 + 4);
    bVar1 = *(byte *)(iVar5 + 0x680);
    uVar4 = (uint)bVar1;
    if ((bVar1 != 0) &&
       ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x680)))))
    {
      uVar13 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
      uVar12 = uVar4;
      uVar8 = uVar7;
      FUN_100f314d("missileConeSoundCrossfadeEnabled");
      FUN_100d8906(uVar4,uVar12,uVar13,uVar8);
    }
  }
  iVar5 = *(int *)(pbVar22 + 4);
  bVar1 = *(byte *)(iVar5 + 0x681);
  uVar4 = (uint)bVar1;
  if ((bVar1 != 0) &&
     ((puVar25 == (undefined4 *)0x0 || (iVar5 = puVar25[1], bVar1 != *(byte *)(iVar5 + 0x681))))) {
    uVar8 = CONCAT31((int3)((uint)iVar5 >> 8),bVar1);
    uVar12 = uVar4;
    FUN_100d7f29("offhandHoldIsCancelable");
    FUN_100d8906(uVar4,uVar12,uVar8,uVar7);
  }
  FUN_10081b38(4);
  local_8 = 0x12d;
  iVar5 = FUN_1002151d();
  iVar6 = FUN_10021519();
  for (; iVar5 != iVar6; iVar5 = iVar5 + 0x18) {
    FUN_10046cca(&DAT_1020e348);
    local_8._0_1_ = 0x2e;
    FUN_10044a65(iVar5);
    local_8._0_1_ = 0x2f;
    FUN_10044a65(local_64);
    FUN_100075cd();
    local_8._0_1_ = 0x32;
    FUN_100075cd();
    iVar16 = FUN_100f32cd(0x1c,local_49c);
    if (iVar16 != 0) {
      FUN_10081b38(3);
      local_8._0_1_ = 0x33;
      local_1410 = local_13e8;
      local_1414 = iVar16;
      FUN_100dbb62(local_1c4,local_13b4,&local_1410,&local_1414);
      FUN_100f32e1(0x1c,iVar16);
      FUN_100d8a84(local_1c4,local_13b4);
      guard_check_icall();
    }
    local_8 = CONCAT31(local_8._1_3_,0x2d);
    FUN_100075cd();
  }
  iVar5 = FUN_1002151d();
  if (iVar5 != 0) {
    puVar28 = local_4c;
    uVar7 = extraout_ECX_x00556;
    uVar8 = extraout_ECX_x00556;
    uVar13 = local_13b4;
    FUN_100d7fb0("variants");
    FUN_100d8af7(uVar7,uVar8,puVar28,uVar13);
  }
  guard_check_icall();
  FUN_100075cd();
  FUN_100075cd();
  FUN_100075cd();
  FUN_100075cd();
  ExceptionList = local_10;
  return 1;
}

