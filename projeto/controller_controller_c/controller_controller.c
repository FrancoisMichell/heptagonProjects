/* --- Generated the 21/7/2018 at 18:39 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jun. 15 15:41:53 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c controller_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "controller_controller.h"

void Controller_controller__controller_controller_controller_c_blind_2_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered, int controller_ck_1,
  int controller_pnr_14, int controller_ck_19_1, int controller_pnr_13,
  int controller_ck_21_1, int controller_pnr_12, int controller_ck_23_1,
  int controller_pnr_11, int controller_ck_25_1, int controller_pnr_10,
  int controller_ck_27_1, int controller_pnr_9, int controller_ck_29_1,
  int controller_pnr_8, int controller_v_272, int controller_v_271,
  int controller_pnr_7, int controller_ck_34_1, int controller_pnr_6,
  int controller_ck_37_1, int controller_pnr_5, int controller_ck_39_1,
  int controller_pnr_4, int controller_ck_42_1, int controller_pnr_3,
  int controller_ck_44_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_blind_1, int controller_c_light_2,
  int controller_c_light_1, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_blind_2_out* _out) {
  
  int v_233;
  int v_232;
  int v_231;
  int v_230;
  int v_229;
  int v_228;
  int v_227;
  int v_226;
  int v_225;
  int v_224;
  int v_223;
  int v_222;
  int v_221;
  int v_220;
  int v_219;
  int v_218;
  int v_217;
  int v_216;
  int v_215;
  int v_214;
  int v_213;
  int v_212;
  int v_211;
  int v_210;
  int v_209;
  int v_208;
  int v_207;
  int v_206;
  int v_205;
  int v_204;
  int v_203;
  int v_202;
  int v_201;
  int v_200;
  int v_199;
  int v_198;
  int v_197;
  int v_196;
  int v_195;
  int v_194;
  int v_193;
  int v_192;
  int v_191;
  int v_190;
  int v_189;
  int v_188;
  int v_187;
  int v_186;
  int v_185;
  int v_184;
  int v_183;
  int v_182;
  int v_181;
  int v_180;
  int v_179;
  int v_178;
  int v_177;
  int v_176;
  int v_175;
  int v_174;
  int v_173;
  int v_172;
  int v_171;
  int v_170;
  int v_169;
  int v_168;
  int v_167;
  int v_166;
  int v_165;
  int v_164;
  int v_163;
  int v_162;
  int v_161;
  int v_160;
  int v_159;
  int v_158;
  int v_157;
  int v_156;
  int v_155;
  int v_154;
  int v_153;
  int v_152;
  int v_151;
  int v_150;
  int v_149;
  int v_148;
  int v_147;
  int v_146;
  int v_145;
  int v_144;
  int v_143;
  int v_142;
  int v_141;
  int v_140;
  int v_139;
  int v_138;
  int v_137;
  int v_136;
  int v_135;
  int v_134;
  int v_133;
  int v_132;
  int v_131;
  int v_130;
  int v_129;
  int v_128;
  int v_127;
  int v_126;
  int v_125;
  int v_124;
  int v_123;
  int v_122;
  int v_121;
  int v_120;
  int v_119;
  int v_118;
  int v_117;
  int v_116;
  int v_115;
  int v_114;
  int v_113;
  int v_112;
  int v_111;
  int v_110;
  int v_109;
  int v_108;
  int v_107;
  int v_106;
  int v_105;
  int v_104;
  int v_103;
  int v_102;
  int v_101;
  int v_100;
  int v_99;
  int v_98;
  int v_97;
  int v_96;
  int v_95;
  int v_94;
  int v_93;
  int v_92;
  int v_91;
  int v_90;
  int v_89;
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int v_84;
  int v_83;
  int v_82;
  int v_81;
  int v_80;
  int v_79;
  int v_78;
  int v_77;
  int v_76;
  int v_75;
  int v_74;
  int v_73;
  int v_72;
  int v_71;
  int v_70;
  int v_69;
  int v_68;
  int v_67;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v_62;
  int v_61;
  int v_60;
  int v_59;
  int v_58;
  int v_57;
  int v_56;
  int v_55;
  int v_54;
  int v_53;
  int v_52;
  int v_51;
  int v_50;
  int v_49;
  int v_48;
  int v_47;
  int v_46;
  int v_45;
  int v_44;
  int v_43;
  int v_42;
  int v_41;
  int v_40;
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v_14;
  int v_13;
  int v_12;
  int v_11;
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  int sub_230;
  int sub_231;
  int sub_232;
  int sub_233;
  int sub_234;
  int sub_235;
  int sub_236;
  int sub_237;
  int sub_238;
  int sub_239;
  int sub_240;
  int sub_241;
  int sub_242;
  int sub_243;
  int sub_244;
  int sub_245;
  int sub_246;
  int sub_247;
  int sub_248;
  int sub_249;
  int sub_250;
  int sub_251;
  int sub_252;
  int sub_253;
  int sub_254;
  int sub_255;
  int sub_256;
  int sub_257;
  int sub_258;
  int sub_259;
  int sub_260;
  int sub_261;
  int sub_262;
  int sub_263;
  int sub_264;
  int sub_265;
  int sub_266;
  int sub_267;
  int sub_268;
  int sub_269;
  int sub_270;
  int sub_271;
  int sub_272;
  int sub_273;
  int sub_274;
  int sub_275;
  int sub_276;
  int sub_277;
  int sub_278;
  int sub_279;
  int sub_280;
  int sub_281;
  int sub_282;
  int sub_283;
  int sub_284;
  int sub_285;
  int sub_286;
  int sub_287;
  int sub_288;
  int sub_289;
  int sub_290;
  int sub_291;
  int sub_292;
  int sub_293;
  int sub_294;
  int sub_295;
  int sub_296;
  int sub_297;
  int sub_298;
  int sub_299;
  int sub_300;
  int sub_301;
  int sub_302;
  int sub_303;
  int sub_304;
  int sub_305;
  int sub_306;
  int sub_307;
  int sub_308;
  int sub_309;
  int sub_310;
  int sub_311;
  int sub_312;
  int sub_313;
  int sub_314;
  int sub_315;
  int sub_316;
  int sub_317;
  int sub_318;
  int sub_319;
  int sub_320;
  int sub_321;
  int sub_322;
  int sub_323;
  int sub_324;
  int sub_325;
  int sub_326;
  int sub_327;
  int sub_328;
  int sub_329;
  int sub_330;
  int sub_331;
  int sub_332;
  int sub_333;
  int sub_334;
  int sub_335;
  int sub_336;
  int sub_337;
  int sub_338;
  int sub_339;
  int sub_340;
  int sub_341;
  int sub_342;
  int sub_343;
  int sub_344;
  int sub_345;
  int sub_346;
  int sub_347;
  int sub_348;
  int sub_349;
  int sub_350;
  int sub_351;
  int sub_352;
  int sub_353;
  int sub_354;
  int sub_355;
  int sub_356;
  int sub_357;
  int sub_358;
  int sub_359;
  int sub_360;
  int sub_361;
  int sub_362;
  int sub_363;
  int sub_364;
  int sub_365;
  int sub_366;
  int sub_367;
  int sub_368;
  int sub_369;
  int sub_370;
  int sub_371;
  int sub_372;
  int sub_373;
  int sub_374;
  int sub_375;
  int sub_376;
  int sub_377;
  int sub_378;
  int sub_379;
  int sub_380;
  int sub_381;
  int sub_382;
  int sub_383;
  int sub_384;
  int sub_385;
  int sub_386;
  int sub_387;
  int sub_388;
  int sub_389;
  int sub_390;
  int sub_391;
  int sub_392;
  int sub_393;
  int sub_394;
  int sub_395;
  int sub_396;
  int sub_397;
  int sub_398;
  int sub_399;
  int sub_400;
  int sub_401;
  int sub_402;
  int sub_403;
  int sub_404;
  int sub_405;
  int sub_406;
  int sub_407;
  int sub_408;
  int sub_409;
  int sub_410;
  int sub_411;
  int sub_412;
  int sub_413;
  int sub_414;
  int sub_415;
  int sub_416;
  int sub_417;
  int sub_418;
  int sub_419;
  int sub_420;
  int sub_421;
  int sub_422;
  int sub_423;
  int sub_424;
  int sub_425;
  int sub_426;
  int sub_427;
  int sub_428;
  int sub_429;
  int sub_430;
  int sub_431;
  int sub_432;
  int sub_433;
  int sub_434;
  int sub_435;
  int sub_436;
  int sub_437;
  int sub_438;
  int sub_439;
  int sub_440;
  int sub_441;
  int sub_442;
  int sub_443;
  int sub_444;
  int sub_445;
  int sub_446;
  int sub_447;
  int sub_448;
  int sub_449;
  int sub_450;
  int sub_451;
  int sub_452;
  int sub_453;
  int sub_454;
  int sub_455;
  int sub_456;
  int sub_457;
  int sub_458;
  int sub_459;
  int sub_460;
  int sub_461;
  int sub_462;
  int sub_463;
  int sub_464;
  int sub_465;
  int sub_466;
  int sub_467;
  int sub_468;
  int sub_469;
  int sub_470;
  int sub_471;
  int sub_472;
  int sub_473;
  int sub_474;
  int sub_475;
  int sub_476;
  int sub_477;
  int sub_478;
  int sub_479;
  int sub_480;
  int sub_481;
  int sub_482;
  int sub_483;
  int sub_484;
  int sub_485;
  int sub_486;
  int sub_487;
  int sub_488;
  int sub_489;
  int sub_490;
  int sub_491;
  int sub_492;
  int sub_493;
  sub_18 = false;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  if (controller_c_pc) {
    v_224 = false;
  } else {
    v_224 = sub_15;
  };
  if (controller_c_window) {
    sub_14 = v_224;
  } else {
    sub_14 = false;
  };
  sub_13 = sub_14;
  sub_24 = true;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (controller_c_pc) {
    v_223 = false;
  } else {
    v_223 = sub_21;
  };
  if (controller_c_window) {
    sub_20 = v_223;
  } else {
    sub_20 = false;
  };
  sub_19 = sub_20;
  if (controller_blind_failed_recovered) {
    sub_12 = sub_13;
    sub_25 = sub_19;
  } else {
    sub_12 = sub_19;
    sub_25 = sub_13;
  };
  if (controller_ck_44_1) {
    sub_11 = sub_25;
  } else {
    sub_11 = sub_12;
  };
  sub_34 = (controller_ck_39_1&&false);
  v_221 = !(controller_ck_39_1);
  sub_35 = (v_221&&false);
  if (controller_light_failed_recovered) {
    sub_33 = sub_34;
  } else {
    sub_33 = sub_35;
  };
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  if (controller_c_pc) {
    v_222 = false;
  } else {
    v_222 = sub_30;
  };
  if (controller_c_window) {
    sub_29 = v_222;
  } else {
    sub_29 = false;
  };
  sub_28 = sub_29;
  v_219 = !(controller_ck_39_1);
  sub_42 = (v_219||false);
  sub_43 = (controller_ck_39_1||false);
  if (controller_light_failed_recovered) {
    sub_41 = sub_42;
  } else {
    sub_41 = sub_43;
  };
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (controller_c_pc) {
    v_220 = false;
  } else {
    v_220 = sub_38;
  };
  if (controller_c_window) {
    sub_37 = v_220;
  } else {
    sub_37 = false;
  };
  sub_36 = sub_37;
  if (controller_blind_failed_recovered) {
    sub_27 = sub_28;
    sub_44 = sub_36;
  } else {
    sub_27 = sub_36;
    sub_44 = sub_28;
  };
  if (controller_ck_44_1) {
    sub_26 = sub_44;
  } else {
    sub_26 = sub_27;
  };
  if (controller_ck_37_1) {
    sub_10 = sub_26;
    v_218 = sub_11;
  } else {
    sub_10 = sub_11;
    v_218 = sub_26;
  };
  if (controller_c_light_1) {
    sub_45 = v_218;
  } else {
    sub_45 = sub_10;
  };
  if (controller_light_switch) {
    v_225 = sub_10;
  } else {
    v_225 = sub_45;
  };
  if (controller_c_light_2) {
    sub_9 = v_225;
  } else {
    sub_9 = sub_45;
  };
  sub_48 = sub_13;
  sub_49 = sub_28;
  if (controller_ck_37_1) {
    sub_47 = sub_49;
    v_216 = sub_48;
  } else {
    sub_47 = sub_48;
    v_216 = sub_49;
  };
  if (controller_c_light_1) {
    sub_50 = v_216;
  } else {
    sub_50 = sub_47;
  };
  if (controller_light_switch) {
    v_217 = sub_47;
  } else {
    v_217 = sub_50;
  };
  if (controller_c_light_2) {
    sub_46 = v_217;
  } else {
    sub_46 = sub_50;
  };
  if (controller_ck_42_1) {
    v_226 = sub_46;
  } else {
    v_226 = sub_9;
  };
  if (controller_blind_failed_recovered) {
    v_214 = false;
    sub_54 = sub_13;
  } else {
    v_214 = sub_13;
    sub_54 = false;
  };
  if (controller_ck_44_1) {
    sub_53 = v_214;
  } else {
    sub_53 = sub_54;
  };
  if (controller_blind_failed_recovered) {
    v_213 = false;
    sub_56 = sub_28;
  } else {
    v_213 = sub_28;
    sub_56 = false;
  };
  if (controller_ck_44_1) {
    sub_55 = v_213;
  } else {
    sub_55 = sub_56;
  };
  if (controller_ck_37_1) {
    sub_52 = sub_55;
    v_212 = sub_53;
  } else {
    sub_52 = sub_53;
    v_212 = sub_55;
  };
  if (controller_c_light_1) {
    sub_57 = v_212;
  } else {
    sub_57 = sub_52;
  };
  if (controller_light_switch) {
    v_215 = sub_52;
  } else {
    v_215 = sub_57;
  };
  if (controller_c_light_2) {
    sub_51 = v_215;
  } else {
    sub_51 = sub_57;
  };
  if (controller_ck_42_1) {
    v_227 = sub_46;
  } else {
    v_227 = sub_51;
  };
  if (controller_blind_switch) {
    v_228 = v_226;
  } else {
    v_228 = v_227;
  };
  if (controller_ck_42_1) {
    sub_58 = sub_51;
  } else {
    sub_58 = sub_46;
  };
  if (controller_c_blind_1) {
    sub_8 = v_228;
  } else {
    sub_8 = sub_58;
  };
  sub_7 = sub_8;
  if (controller_c_door) {
    v_203 = false;
    sub_72 = sub_33;
  } else {
    v_203 = sub_33;
    sub_72 = false;
  };
  if (controller_ck_19_1) {
    sub_71 = v_203;
  } else {
    sub_71 = sub_72;
  };
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_66 = sub_67;
  if (controller_c_window) {
    sub_74 = false;
  } else {
    sub_74 = sub_68;
  };
  sub_73 = sub_74;
  if (controller_blind_failed_recovered) {
    v_204 = sub_73;
    sub_65 = sub_66;
  } else {
    v_204 = sub_66;
    sub_65 = sub_73;
  };
  if (controller_ck_44_1) {
    sub_64 = v_204;
  } else {
    sub_64 = sub_65;
  };
  if (controller_c_door) {
    v_201 = false;
    sub_83 = sub_18;
  } else {
    v_201 = sub_18;
    sub_83 = false;
  };
  if (controller_ck_19_1) {
    sub_82 = v_201;
  } else {
    sub_82 = sub_83;
  };
  sub_81 = sub_82;
  sub_80 = sub_81;
  sub_79 = sub_80;
  sub_78 = sub_79;
  sub_77 = sub_78;
  if (controller_c_window) {
    sub_85 = false;
  } else {
    sub_85 = sub_79;
  };
  sub_84 = sub_85;
  if (controller_blind_failed_recovered) {
    v_202 = sub_84;
    sub_76 = sub_77;
  } else {
    v_202 = sub_77;
    sub_76 = sub_84;
  };
  if (controller_ck_44_1) {
    sub_75 = v_202;
  } else {
    sub_75 = sub_76;
  };
  if (controller_ck_37_1) {
    sub_63 = sub_75;
    v_200 = sub_64;
  } else {
    sub_63 = sub_64;
    v_200 = sub_75;
  };
  if (controller_c_light_1) {
    sub_86 = v_200;
  } else {
    sub_86 = sub_63;
  };
  if (controller_light_switch) {
    v_205 = sub_63;
  } else {
    v_205 = sub_86;
  };
  if (controller_c_light_2) {
    sub_62 = v_205;
  } else {
    sub_62 = sub_86;
  };
  if (controller_c_door) {
    v_198 = false;
    sub_96 = sub_41;
  } else {
    v_198 = sub_41;
    sub_96 = false;
  };
  if (controller_ck_19_1) {
    sub_95 = v_198;
  } else {
    sub_95 = sub_96;
  };
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  if (controller_c_window) {
    sub_91 = false;
  } else {
    sub_91 = sub_92;
  };
  sub_90 = sub_91;
  if (controller_blind_failed_recovered) {
    v_199 = sub_90;
    sub_89 = sub_66;
  } else {
    v_199 = sub_66;
    sub_89 = sub_90;
  };
  if (controller_ck_44_1) {
    sub_88 = v_199;
  } else {
    sub_88 = sub_89;
  };
  if (controller_c_door) {
    v_196 = false;
    sub_105 = sub_24;
  } else {
    v_196 = sub_24;
    sub_105 = false;
  };
  if (controller_ck_19_1) {
    sub_104 = v_196;
  } else {
    sub_104 = sub_105;
  };
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  if (controller_c_window) {
    sub_100 = false;
  } else {
    sub_100 = sub_101;
  };
  sub_99 = sub_100;
  if (controller_blind_failed_recovered) {
    v_197 = sub_99;
    sub_98 = sub_77;
  } else {
    v_197 = sub_77;
    sub_98 = sub_99;
  };
  if (controller_ck_44_1) {
    sub_97 = v_197;
  } else {
    sub_97 = sub_98;
  };
  if (controller_ck_37_1) {
    sub_87 = sub_97;
    v_195 = sub_88;
  } else {
    sub_87 = sub_88;
    v_195 = sub_97;
  };
  if (controller_c_light_1) {
    sub_106 = v_195;
  } else {
    sub_106 = sub_87;
  };
  if (controller_light_switch) {
    v_206 = sub_87;
  } else {
    v_206 = sub_106;
  };
  if (controller_c_light_2) {
    v_207 = v_206;
  } else {
    v_207 = sub_106;
  };
  if (controller_ck_42_1) {
    v_208 = v_207;
  } else {
    v_208 = sub_62;
  };
  if (controller_blind_failed_recovered) {
    v_193 = false;
    sub_110 = sub_66;
  } else {
    v_193 = sub_66;
    sub_110 = false;
  };
  if (controller_ck_44_1) {
    sub_109 = v_193;
  } else {
    sub_109 = sub_110;
  };
  if (controller_blind_failed_recovered) {
    v_192 = false;
    sub_112 = sub_77;
  } else {
    v_192 = sub_77;
    sub_112 = false;
  };
  if (controller_ck_44_1) {
    sub_111 = v_192;
  } else {
    sub_111 = sub_112;
  };
  if (controller_ck_37_1) {
    sub_108 = sub_111;
    v_191 = sub_109;
  } else {
    sub_108 = sub_109;
    v_191 = sub_111;
  };
  if (controller_c_light_1) {
    sub_113 = v_191;
  } else {
    sub_113 = sub_108;
  };
  if (controller_light_switch) {
    v_194 = sub_108;
  } else {
    v_194 = sub_113;
  };
  if (controller_c_light_2) {
    sub_107 = v_194;
  } else {
    sub_107 = sub_113;
  };
  if (controller_ck_42_1) {
    v_209 = sub_107;
  } else {
    v_209 = sub_62;
  };
  if (controller_blind_switch) {
    v_210 = v_208;
  } else {
    v_210 = v_209;
  };
  if (controller_ck_42_1) {
    sub_114 = sub_62;
  } else {
    sub_114 = sub_107;
  };
  if (controller_c_blind_1) {
    sub_61 = v_210;
  } else {
    sub_61 = sub_114;
  };
  if (controller_c_air_1) {
    sub_123 = sub_32;
  } else {
    sub_123 = false;
  };
  if (controller_v_271) {
    v_184 = false;
  } else {
    v_184 = sub_123;
  };
  if (controller_c_air_2) {
    sub_122 = sub_123;
  } else {
    sub_122 = v_184;
  };
  if (controller_c_air_1) {
    sub_125 = false;
  } else {
    sub_125 = sub_32;
  };
  if (controller_v_271) {
    sub_124 = sub_125;
  } else {
    sub_124 = false;
  };
  if (controller_v_272) {
    sub_121 = sub_124;
  } else {
    sub_121 = sub_122;
  };
  if (controller_c_pc) {
    sub_120 = false;
  } else {
    sub_120 = sub_121;
  };
  if (controller_c_closet) {
    sub_119 = false;
  } else {
    sub_119 = sub_120;
  };
  sub_118 = sub_119;
  if (controller_c_air_1) {
    sub_131 = sub_17;
  } else {
    sub_131 = false;
  };
  if (controller_v_271) {
    v_183 = false;
  } else {
    v_183 = sub_131;
  };
  if (controller_c_air_2) {
    sub_130 = sub_131;
  } else {
    sub_130 = v_183;
  };
  if (controller_c_air_1) {
    v_182 = false;
  } else {
    v_182 = sub_17;
  };
  if (controller_v_271) {
    sub_132 = v_182;
  } else {
    sub_132 = false;
  };
  if (controller_v_272) {
    sub_129 = sub_132;
  } else {
    sub_129 = sub_130;
  };
  if (controller_c_pc) {
    sub_128 = false;
  } else {
    sub_128 = sub_129;
  };
  if (controller_c_closet) {
    sub_127 = false;
  } else {
    sub_127 = sub_128;
  };
  sub_126 = sub_127;
  if (controller_ck_37_1) {
    sub_117 = sub_126;
    v_181 = sub_118;
  } else {
    sub_117 = sub_118;
    v_181 = sub_126;
  };
  if (controller_c_light_1) {
    sub_133 = v_181;
  } else {
    sub_133 = sub_117;
  };
  if (controller_light_switch) {
    v_185 = sub_117;
  } else {
    v_185 = sub_133;
  };
  if (controller_c_light_2) {
    sub_116 = v_185;
  } else {
    sub_116 = sub_133;
  };
  if (controller_c_air_1) {
    sub_141 = sub_40;
  } else {
    sub_141 = false;
  };
  if (controller_v_271) {
    v_180 = false;
  } else {
    v_180 = sub_141;
  };
  if (controller_c_air_2) {
    sub_140 = sub_141;
  } else {
    sub_140 = v_180;
  };
  if (controller_c_air_1) {
    sub_143 = false;
  } else {
    sub_143 = sub_40;
  };
  if (controller_v_271) {
    sub_142 = sub_143;
  } else {
    sub_142 = false;
  };
  if (controller_v_272) {
    sub_139 = sub_142;
  } else {
    sub_139 = sub_140;
  };
  if (controller_c_pc) {
    sub_138 = false;
  } else {
    sub_138 = sub_139;
  };
  if (controller_c_closet) {
    sub_137 = false;
  } else {
    sub_137 = sub_138;
  };
  if (controller_blind_failed_recovered) {
    sub_136 = sub_119;
    sub_144 = sub_137;
  } else {
    sub_136 = sub_137;
    sub_144 = sub_119;
  };
  if (controller_ck_44_1) {
    sub_135 = sub_144;
  } else {
    sub_135 = sub_136;
  };
  sub_154 = !(controller_ck_39_1);
  sub_155 = controller_ck_39_1;
  if (controller_light_failed_recovered) {
    sub_153 = sub_154;
  } else {
    sub_153 = sub_155;
  };
  sub_152 = sub_153;
  if (controller_c_air_1) {
    sub_151 = sub_152;
  } else {
    sub_151 = false;
  };
  if (controller_v_271) {
    v_178 = false;
  } else {
    v_178 = sub_151;
  };
  if (controller_c_air_2) {
    sub_150 = sub_151;
  } else {
    sub_150 = v_178;
  };
  if (controller_c_air_1) {
    v_177 = false;
  } else {
    v_177 = sub_152;
  };
  if (controller_v_271) {
    sub_156 = v_177;
  } else {
    sub_156 = false;
  };
  if (controller_v_272) {
    sub_149 = sub_156;
  } else {
    sub_149 = sub_150;
  };
  if (controller_c_pc) {
    sub_148 = false;
  } else {
    sub_148 = sub_149;
  };
  if (controller_c_closet) {
    sub_147 = false;
  } else {
    sub_147 = sub_148;
  };
  if (controller_blind_failed_recovered) {
    v_179 = sub_147;
    sub_146 = sub_127;
  } else {
    v_179 = sub_127;
    sub_146 = sub_147;
  };
  if (controller_ck_44_1) {
    sub_145 = v_179;
  } else {
    sub_145 = sub_146;
  };
  if (controller_ck_37_1) {
    sub_134 = sub_145;
    v_176 = sub_135;
  } else {
    sub_134 = sub_135;
    v_176 = sub_145;
  };
  if (controller_c_light_1) {
    sub_157 = v_176;
  } else {
    sub_157 = sub_134;
  };
  if (controller_light_switch) {
    v_186 = sub_134;
  } else {
    v_186 = sub_157;
  };
  if (controller_c_light_2) {
    v_187 = v_186;
  } else {
    v_187 = sub_157;
  };
  if (controller_ck_42_1) {
    v_188 = v_187;
  } else {
    v_188 = sub_116;
  };
  if (controller_blind_failed_recovered) {
    v_174 = false;
    sub_161 = sub_119;
  } else {
    v_174 = sub_119;
    sub_161 = false;
  };
  if (controller_ck_44_1) {
    sub_160 = v_174;
  } else {
    sub_160 = sub_161;
  };
  if (controller_light_failed_recovered) {
    sub_170 = sub_35;
  } else {
    sub_170 = sub_34;
  };
  sub_169 = sub_170;
  if (controller_c_air_1) {
    sub_168 = sub_169;
  } else {
    sub_168 = false;
  };
  if (controller_v_271) {
    v_172 = false;
  } else {
    v_172 = sub_168;
  };
  if (controller_c_air_2) {
    sub_167 = sub_168;
  } else {
    sub_167 = v_172;
  };
  if (controller_c_air_1) {
    sub_172 = false;
  } else {
    sub_172 = sub_169;
  };
  if (controller_v_271) {
    sub_171 = sub_172;
  } else {
    sub_171 = false;
  };
  if (controller_v_272) {
    sub_166 = sub_171;
  } else {
    sub_166 = sub_167;
  };
  if (controller_c_pc) {
    sub_165 = false;
  } else {
    sub_165 = sub_166;
  };
  if (controller_c_closet) {
    sub_164 = false;
  } else {
    sub_164 = sub_165;
  };
  if (controller_blind_failed_recovered) {
    v_173 = sub_164;
    sub_163 = sub_127;
  } else {
    v_173 = sub_127;
    sub_163 = sub_164;
  };
  if (controller_ck_44_1) {
    sub_162 = v_173;
  } else {
    sub_162 = sub_163;
  };
  if (controller_ck_37_1) {
    sub_159 = sub_162;
    v_171 = sub_160;
  } else {
    sub_159 = sub_160;
    v_171 = sub_162;
  };
  if (controller_c_light_1) {
    sub_173 = v_171;
  } else {
    sub_173 = sub_159;
  };
  if (controller_light_switch) {
    v_175 = sub_159;
  } else {
    v_175 = sub_173;
  };
  if (controller_c_light_2) {
    sub_158 = v_175;
  } else {
    sub_158 = sub_173;
  };
  if (controller_ck_42_1) {
    v_189 = sub_158;
  } else {
    v_189 = sub_116;
  };
  if (controller_blind_switch) {
    v_190 = v_188;
  } else {
    v_190 = v_189;
  };
  if (controller_ck_42_1) {
    sub_174 = sub_116;
  } else {
    sub_174 = sub_158;
  };
  if (controller_c_blind_1) {
    sub_115 = v_190;
  } else {
    sub_115 = sub_174;
  };
  if (controller_air_failed_recovered) {
    v_211 = sub_115;
    sub_60 = sub_61;
  } else {
    v_211 = sub_61;
    sub_60 = sub_115;
  };
  if (controller_ck_34_1) {
    sub_59 = v_211;
  } else {
    sub_59 = sub_60;
  };
  if (controller_cleaner) {
    v_229 = sub_59;
    sub_6 = sub_7;
  } else {
    v_229 = sub_7;
    sub_6 = sub_59;
  };
  if (controller_ck_25_1) {
    sub_5 = v_229;
  } else {
    sub_5 = sub_6;
  };
  if (controller_c_pc) {
    v_162 = sub_121;
  } else {
    v_162 = sub_30;
  };
  sub_185 = sub_30;
  if (controller_c_window) {
    sub_184 = v_162;
  } else {
    sub_184 = sub_185;
  };
  sub_183 = sub_184;
  sub_182 = sub_183;
  if (controller_c_air_1) {
    v_156 = sub_169;
    sub_190 = sub_32;
  } else {
    v_156 = sub_32;
    sub_190 = sub_169;
  };
  if (controller_v_271) {
    v_155 = sub_168;
  } else {
    v_155 = sub_190;
  };
  if (controller_c_air_2) {
    sub_189 = sub_123;
  } else {
    sub_189 = v_155;
  };
  sub_191 = sub_169;
  if (controller_v_271) {
    v_158 = sub_125;
    v_157 = v_156;
  } else {
    v_158 = sub_191;
    v_157 = sub_191;
  };
  if (controller_c_air_2) {
    v_159 = v_157;
  } else {
    v_159 = v_158;
  };
  if (controller_v_272) {
    v_160 = v_159;
  } else {
    v_160 = sub_189;
  };
  if (controller_c_pc) {
    v_161 = v_160;
  } else {
    v_161 = sub_15;
  };
  if (controller_c_window) {
    sub_188 = v_161;
  } else {
    sub_188 = sub_15;
  };
  sub_187 = sub_188;
  sub_186 = sub_187;
  if (controller_ck_37_1) {
    sub_181 = sub_186;
    v_154 = sub_182;
  } else {
    sub_181 = sub_182;
    v_154 = sub_186;
  };
  if (controller_c_light_1) {
    sub_192 = v_154;
  } else {
    sub_192 = sub_181;
  };
  if (controller_light_switch) {
    v_163 = sub_181;
  } else {
    v_163 = sub_192;
  };
  if (controller_c_light_2) {
    sub_180 = v_163;
  } else {
    sub_180 = sub_192;
  };
  if (controller_c_pc) {
    v_153 = sub_139;
  } else {
    v_153 = sub_38;
  };
  sub_198 = sub_38;
  if (controller_c_window) {
    sub_197 = v_153;
  } else {
    sub_197 = sub_198;
  };
  sub_196 = sub_197;
  if (controller_blind_failed_recovered) {
    sub_195 = sub_183;
    sub_199 = sub_196;
  } else {
    sub_195 = sub_196;
    sub_199 = sub_183;
  };
  if (controller_ck_44_1) {
    sub_194 = sub_199;
  } else {
    sub_194 = sub_195;
  };
  if (controller_v_271) {
    v_148 = sub_143;
  } else {
    v_148 = sub_191;
  };
  if (controller_c_air_1) {
    v_146 = sub_169;
  } else {
    v_146 = sub_40;
  };
  if (controller_v_271) {
    v_147 = v_146;
  } else {
    v_147 = sub_191;
  };
  if (controller_c_air_2) {
    v_149 = v_147;
  } else {
    v_149 = v_148;
  };
  if (controller_c_air_1) {
    sub_205 = sub_40;
  } else {
    sub_205 = sub_169;
  };
  if (controller_v_271) {
    v_145 = sub_168;
  } else {
    v_145 = sub_205;
  };
  if (controller_c_air_2) {
    sub_204 = sub_141;
  } else {
    sub_204 = v_145;
  };
  if (controller_v_272) {
    v_150 = v_149;
  } else {
    v_150 = sub_204;
  };
  sub_207 = sub_152;
  sub_206 = sub_207;
  if (controller_c_pc) {
    v_151 = v_150;
  } else {
    v_151 = sub_206;
  };
  if (controller_c_window) {
    sub_203 = v_151;
  } else {
    sub_203 = sub_206;
  };
  sub_202 = sub_203;
  if (controller_blind_failed_recovered) {
    v_152 = sub_202;
    sub_201 = sub_187;
  } else {
    v_152 = sub_187;
    sub_201 = sub_202;
  };
  if (controller_ck_44_1) {
    sub_200 = v_152;
  } else {
    sub_200 = sub_201;
  };
  if (controller_ck_37_1) {
    sub_193 = sub_200;
    v_144 = sub_194;
  } else {
    sub_193 = sub_194;
    v_144 = sub_200;
  };
  if (controller_c_light_1) {
    sub_208 = v_144;
  } else {
    sub_208 = sub_193;
  };
  if (controller_light_switch) {
    v_164 = sub_193;
  } else {
    v_164 = sub_208;
  };
  if (controller_c_light_2) {
    v_165 = v_164;
  } else {
    v_165 = sub_208;
  };
  if (controller_ck_42_1) {
    v_166 = v_165;
  } else {
    v_166 = sub_180;
  };
  if (controller_blind_failed_recovered) {
    v_142 = false;
    sub_212 = sub_183;
  } else {
    v_142 = sub_183;
    sub_212 = false;
  };
  if (controller_ck_44_1) {
    sub_211 = v_142;
  } else {
    sub_211 = sub_212;
  };
  if (controller_v_271) {
    v_137 = false;
    v_136 = sub_168;
  } else {
    v_137 = sub_191;
    v_136 = sub_191;
  };
  if (controller_c_air_2) {
    v_138 = v_136;
  } else {
    v_138 = v_137;
  };
  if (controller_v_271) {
    v_135 = sub_168;
  } else {
    v_135 = sub_172;
  };
  if (controller_c_air_2) {
    sub_217 = false;
  } else {
    sub_217 = v_135;
  };
  if (controller_v_272) {
    v_139 = v_138;
  } else {
    v_139 = sub_217;
  };
  sub_218 = sub_191;
  if (controller_c_pc) {
    v_140 = v_139;
  } else {
    v_140 = sub_218;
  };
  if (controller_c_window) {
    sub_216 = v_140;
  } else {
    sub_216 = sub_218;
  };
  sub_215 = sub_216;
  if (controller_blind_failed_recovered) {
    v_141 = sub_215;
    sub_214 = sub_187;
  } else {
    v_141 = sub_187;
    sub_214 = sub_215;
  };
  if (controller_ck_44_1) {
    sub_213 = v_141;
  } else {
    sub_213 = sub_214;
  };
  if (controller_ck_37_1) {
    sub_210 = sub_213;
    v_134 = sub_211;
  } else {
    sub_210 = sub_211;
    v_134 = sub_213;
  };
  if (controller_c_light_1) {
    sub_219 = v_134;
  } else {
    sub_219 = sub_210;
  };
  if (controller_light_switch) {
    v_143 = sub_210;
  } else {
    v_143 = sub_219;
  };
  if (controller_c_light_2) {
    sub_209 = v_143;
  } else {
    sub_209 = sub_219;
  };
  if (controller_ck_42_1) {
    v_167 = sub_209;
  } else {
    v_167 = sub_180;
  };
  if (controller_blind_switch) {
    v_168 = v_166;
  } else {
    v_168 = v_167;
  };
  if (controller_ck_42_1) {
    sub_220 = sub_180;
  } else {
    sub_220 = sub_209;
  };
  if (controller_c_blind_1) {
    sub_179 = v_168;
  } else {
    sub_179 = sub_220;
  };
  if (controller_air_failed_recovered) {
    v_169 = sub_179;
    sub_178 = sub_61;
  } else {
    v_169 = sub_61;
    sub_178 = sub_179;
  };
  if (controller_ck_34_1) {
    sub_177 = v_169;
  } else {
    sub_177 = sub_178;
  };
  if (controller_cleaner) {
    v_170 = sub_59;
    sub_176 = sub_177;
  } else {
    v_170 = sub_177;
    sub_176 = sub_59;
  };
  if (controller_ck_25_1) {
    sub_175 = v_170;
  } else {
    sub_175 = sub_176;
  };
  if (controller_worker) {
    v_230 = sub_175;
    sub_4 = sub_5;
  } else {
    v_230 = sub_5;
    sub_4 = sub_175;
  };
  if (controller_ck_23_1) {
    sub_3 = v_230;
  } else {
    sub_3 = sub_4;
  };
  sub_231 = sub_84;
  sub_230 = sub_231;
  sub_229 = sub_230;
  sub_228 = sub_229;
  if (controller_blind_failed_recovered) {
    sub_235 = sub_84;
    sub_236 = sub_99;
  } else {
    sub_235 = sub_99;
    sub_236 = sub_84;
  };
  if (controller_ck_44_1) {
    sub_234 = sub_236;
  } else {
    sub_234 = sub_235;
  };
  sub_233 = sub_234;
  sub_232 = sub_233;
  if (controller_ck_42_1) {
    v_128 = sub_232;
  } else {
    v_128 = sub_228;
  };
  if (controller_blind_failed_recovered) {
    v_127 = false;
    sub_241 = sub_84;
  } else {
    v_127 = sub_84;
    sub_241 = false;
  };
  if (controller_ck_44_1) {
    sub_240 = v_127;
  } else {
    sub_240 = sub_241;
  };
  sub_239 = sub_240;
  sub_238 = sub_239;
  sub_237 = sub_238;
  if (controller_ck_42_1) {
    v_129 = sub_237;
  } else {
    v_129 = sub_228;
  };
  if (controller_blind_switch) {
    v_130 = v_128;
  } else {
    v_130 = v_129;
  };
  if (controller_ck_42_1) {
    sub_242 = sub_228;
  } else {
    sub_242 = sub_237;
  };
  if (controller_c_blind_1) {
    sub_227 = v_130;
  } else {
    sub_227 = sub_242;
  };
  if (controller_air_failed_recovered) {
    v_131 = sub_115;
    sub_226 = sub_227;
  } else {
    v_131 = sub_227;
    sub_226 = sub_115;
  };
  if (controller_ck_34_1) {
    sub_225 = v_131;
  } else {
    sub_225 = sub_226;
  };
  if (controller_cleaner) {
    v_132 = sub_225;
    sub_224 = sub_7;
  } else {
    v_132 = sub_7;
    sub_224 = sub_225;
  };
  if (controller_ck_25_1) {
    sub_223 = v_132;
  } else {
    sub_223 = sub_224;
  };
  sub_253 = sub_185;
  sub_252 = sub_253;
  sub_256 = sub_121;
  sub_255 = sub_256;
  sub_254 = sub_255;
  if (controller_blind_failed_recovered) {
    v_118 = sub_254;
    sub_251 = sub_252;
  } else {
    v_118 = sub_252;
    sub_251 = sub_254;
  };
  if (controller_ck_44_1) {
    sub_250 = v_118;
  } else {
    sub_250 = sub_251;
  };
  if (controller_c_air_1) {
    sub_264 = sub_17;
  } else {
    sub_264 = sub_32;
  };
  if (controller_v_271) {
    v_116 = sub_31;
  } else {
    v_116 = sub_264;
  };
  if (controller_c_air_2) {
    sub_263 = sub_264;
  } else {
    sub_263 = v_116;
  };
  if (controller_c_air_1) {
    v_115 = sub_32;
  } else {
    v_115 = sub_17;
  };
  if (controller_v_271) {
    sub_265 = v_115;
  } else {
    sub_265 = sub_31;
  };
  if (controller_v_272) {
    sub_262 = sub_265;
  } else {
    sub_262 = sub_263;
  };
  sub_261 = sub_262;
  sub_260 = sub_261;
  sub_259 = sub_260;
  sub_268 = sub_129;
  sub_267 = sub_268;
  sub_266 = sub_267;
  if (controller_blind_failed_recovered) {
    v_117 = sub_266;
    sub_258 = sub_259;
  } else {
    v_117 = sub_259;
    sub_258 = sub_266;
  };
  if (controller_ck_44_1) {
    sub_257 = v_117;
  } else {
    sub_257 = sub_258;
  };
  if (controller_ck_37_1) {
    sub_249 = sub_257;
    v_114 = sub_250;
  } else {
    sub_249 = sub_250;
    v_114 = sub_257;
  };
  if (controller_c_light_1) {
    sub_269 = v_114;
  } else {
    sub_269 = sub_249;
  };
  if (controller_light_switch) {
    v_119 = sub_249;
  } else {
    v_119 = sub_269;
  };
  if (controller_c_light_2) {
    sub_248 = v_119;
  } else {
    sub_248 = sub_269;
  };
  sub_275 = sub_139;
  sub_274 = sub_275;
  sub_273 = sub_274;
  if (controller_blind_failed_recovered) {
    v_113 = sub_273;
    sub_272 = sub_252;
  } else {
    v_113 = sub_252;
    sub_272 = sub_273;
  };
  if (controller_ck_44_1) {
    sub_271 = v_113;
  } else {
    sub_271 = sub_272;
  };
  sub_280 = sub_149;
  sub_279 = sub_280;
  sub_278 = sub_279;
  if (controller_blind_failed_recovered) {
    v_112 = sub_278;
    sub_277 = sub_259;
  } else {
    v_112 = sub_259;
    sub_277 = sub_278;
  };
  if (controller_ck_44_1) {
    sub_276 = v_112;
  } else {
    sub_276 = sub_277;
  };
  if (controller_ck_37_1) {
    sub_270 = sub_276;
    v_111 = sub_271;
  } else {
    sub_270 = sub_271;
    v_111 = sub_276;
  };
  if (controller_c_light_1) {
    sub_281 = v_111;
  } else {
    sub_281 = sub_270;
  };
  if (controller_light_switch) {
    v_120 = sub_270;
  } else {
    v_120 = sub_281;
  };
  if (controller_c_light_2) {
    v_121 = v_120;
  } else {
    v_121 = sub_281;
  };
  if (controller_ck_42_1) {
    v_122 = v_121;
  } else {
    v_122 = sub_248;
  };
  if (controller_blind_failed_recovered) {
    v_109 = false;
    sub_285 = sub_252;
  } else {
    v_109 = sub_252;
    sub_285 = false;
  };
  if (controller_ck_44_1) {
    sub_284 = v_109;
  } else {
    sub_284 = sub_285;
  };
  sub_290 = sub_166;
  sub_289 = sub_290;
  sub_288 = sub_289;
  if (controller_blind_failed_recovered) {
    v_108 = sub_288;
    sub_287 = sub_259;
  } else {
    v_108 = sub_259;
    sub_287 = sub_288;
  };
  if (controller_ck_44_1) {
    sub_286 = v_108;
  } else {
    sub_286 = sub_287;
  };
  if (controller_ck_37_1) {
    sub_283 = sub_286;
    v_107 = sub_284;
  } else {
    sub_283 = sub_284;
    v_107 = sub_286;
  };
  if (controller_c_light_1) {
    sub_291 = v_107;
  } else {
    sub_291 = sub_283;
  };
  if (controller_light_switch) {
    v_110 = sub_283;
  } else {
    v_110 = sub_291;
  };
  if (controller_c_light_2) {
    sub_282 = v_110;
  } else {
    sub_282 = sub_291;
  };
  if (controller_ck_42_1) {
    v_123 = sub_282;
  } else {
    v_123 = sub_248;
  };
  if (controller_blind_switch) {
    v_124 = v_122;
  } else {
    v_124 = v_123;
  };
  if (controller_ck_42_1) {
    sub_292 = sub_248;
  } else {
    sub_292 = sub_282;
  };
  if (controller_c_blind_1) {
    sub_247 = v_124;
  } else {
    sub_247 = sub_292;
  };
  if (controller_air_failed_recovered) {
    v_125 = sub_247;
    sub_246 = sub_227;
  } else {
    v_125 = sub_227;
    sub_246 = sub_247;
  };
  if (controller_ck_34_1) {
    sub_245 = v_125;
  } else {
    sub_245 = sub_246;
  };
  if (controller_cleaner) {
    v_126 = sub_225;
    sub_244 = sub_245;
  } else {
    v_126 = sub_245;
    sub_244 = sub_225;
  };
  if (controller_ck_25_1) {
    sub_243 = v_126;
  } else {
    sub_243 = sub_244;
  };
  if (controller_worker) {
    v_133 = sub_243;
    sub_222 = sub_223;
  } else {
    v_133 = sub_223;
    sub_222 = sub_243;
  };
  if (controller_ck_23_1) {
    sub_221 = v_133;
  } else {
    sub_221 = sub_222;
  };
  if (controller_change_shift) {
    v_231 = sub_221;
    sub_2 = sub_3;
  } else {
    v_231 = sub_3;
    sub_2 = sub_221;
  };
  if (controller_ck_1) {
    sub_1 = v_231;
  } else {
    sub_1 = sub_2;
  };
  sub_302 = sub_19;
  sub_303 = sub_36;
  if (controller_ck_37_1) {
    sub_301 = sub_303;
    v_98 = sub_302;
  } else {
    sub_301 = sub_302;
    v_98 = sub_303;
  };
  if (controller_c_light_1) {
    sub_304 = v_98;
  } else {
    sub_304 = sub_301;
  };
  if (controller_light_switch) {
    v_99 = sub_301;
  } else {
    v_99 = sub_304;
  };
  if (controller_c_light_2) {
    sub_300 = v_99;
  } else {
    sub_300 = sub_304;
  };
  if (controller_ck_44_1) {
    sub_306 = sub_12;
    sub_307 = sub_27;
  } else {
    sub_306 = sub_25;
    sub_307 = sub_44;
  };
  if (controller_ck_37_1) {
    sub_305 = sub_307;
    v_97 = sub_306;
  } else {
    sub_305 = sub_306;
    v_97 = sub_307;
  };
  if (controller_c_light_1) {
    sub_308 = v_97;
  } else {
    sub_308 = sub_305;
  };
  if (controller_light_switch) {
    v_100 = sub_305;
  } else {
    v_100 = sub_308;
  };
  if (controller_c_light_2) {
    v_101 = v_100;
  } else {
    v_101 = sub_308;
  };
  if (controller_ck_42_1) {
    v_102 = v_101;
  } else {
    v_102 = sub_300;
  };
  if (controller_blind_failed_recovered) {
    v_95 = false;
    sub_312 = sub_19;
  } else {
    v_95 = sub_19;
    sub_312 = false;
  };
  if (controller_ck_44_1) {
    sub_311 = v_95;
  } else {
    sub_311 = sub_312;
  };
  if (controller_blind_failed_recovered) {
    v_94 = false;
    sub_314 = sub_36;
  } else {
    v_94 = sub_36;
    sub_314 = false;
  };
  if (controller_ck_44_1) {
    sub_313 = v_94;
  } else {
    sub_313 = sub_314;
  };
  if (controller_ck_37_1) {
    sub_310 = sub_313;
    v_93 = sub_311;
  } else {
    sub_310 = sub_311;
    v_93 = sub_313;
  };
  if (controller_c_light_1) {
    sub_315 = v_93;
  } else {
    sub_315 = sub_310;
  };
  if (controller_light_switch) {
    v_96 = sub_310;
  } else {
    v_96 = sub_315;
  };
  if (controller_c_light_2) {
    sub_309 = v_96;
  } else {
    sub_309 = sub_315;
  };
  if (controller_ck_42_1) {
    v_103 = sub_300;
  } else {
    v_103 = sub_309;
  };
  if (controller_blind_switch) {
    v_104 = v_102;
  } else {
    v_104 = v_103;
  };
  if (controller_ck_42_1) {
    sub_316 = sub_309;
  } else {
    sub_316 = sub_300;
  };
  if (controller_c_blind_1) {
    sub_299 = v_104;
  } else {
    sub_299 = sub_316;
  };
  sub_298 = sub_299;
  sub_325 = sub_92;
  sub_324 = sub_325;
  if (controller_blind_failed_recovered) {
    v_87 = sub_73;
    sub_323 = sub_324;
  } else {
    v_87 = sub_324;
    sub_323 = sub_73;
  };
  if (controller_ck_44_1) {
    sub_322 = v_87;
  } else {
    sub_322 = sub_323;
  };
  sub_329 = sub_101;
  sub_328 = sub_329;
  if (controller_blind_failed_recovered) {
    v_86 = sub_84;
    sub_327 = sub_328;
  } else {
    v_86 = sub_328;
    sub_327 = sub_84;
  };
  if (controller_ck_44_1) {
    sub_326 = v_86;
  } else {
    sub_326 = sub_327;
  };
  if (controller_ck_37_1) {
    sub_321 = sub_326;
    v_85 = sub_322;
  } else {
    sub_321 = sub_322;
    v_85 = sub_326;
  };
  if (controller_c_light_1) {
    sub_330 = v_85;
  } else {
    sub_330 = sub_321;
  };
  if (controller_light_switch) {
    v_88 = sub_321;
  } else {
    v_88 = sub_330;
  };
  if (controller_c_light_2) {
    sub_320 = v_88;
  } else {
    sub_320 = sub_330;
  };
  if (controller_blind_failed_recovered) {
    v_83 = sub_90;
    sub_334 = sub_324;
  } else {
    v_83 = sub_324;
    sub_334 = sub_90;
  };
  if (controller_ck_44_1) {
    sub_333 = v_83;
  } else {
    sub_333 = sub_334;
  };
  if (controller_blind_failed_recovered) {
    v_82 = sub_99;
    sub_336 = sub_328;
  } else {
    v_82 = sub_328;
    sub_336 = sub_99;
  };
  if (controller_ck_44_1) {
    sub_335 = v_82;
  } else {
    sub_335 = sub_336;
  };
  if (controller_ck_37_1) {
    sub_332 = sub_335;
    v_81 = sub_333;
  } else {
    sub_332 = sub_333;
    v_81 = sub_335;
  };
  if (controller_c_light_1) {
    sub_337 = v_81;
  } else {
    sub_337 = sub_332;
  };
  if (controller_light_switch) {
    v_84 = sub_332;
  } else {
    v_84 = sub_337;
  };
  if (controller_c_light_2) {
    sub_331 = v_84;
  } else {
    sub_331 = sub_337;
  };
  if (controller_ck_42_1) {
    v_89 = sub_331;
  } else {
    v_89 = sub_320;
  };
  if (controller_blind_failed_recovered) {
    v_79 = false;
    sub_341 = sub_324;
  } else {
    v_79 = sub_324;
    sub_341 = false;
  };
  if (controller_ck_44_1) {
    sub_340 = v_79;
  } else {
    sub_340 = sub_341;
  };
  if (controller_blind_failed_recovered) {
    v_78 = false;
    sub_343 = sub_328;
  } else {
    v_78 = sub_328;
    sub_343 = false;
  };
  if (controller_ck_44_1) {
    sub_342 = v_78;
  } else {
    sub_342 = sub_343;
  };
  if (controller_ck_37_1) {
    sub_339 = sub_342;
    v_77 = sub_340;
  } else {
    sub_339 = sub_340;
    v_77 = sub_342;
  };
  if (controller_c_light_1) {
    sub_344 = v_77;
  } else {
    sub_344 = sub_339;
  };
  if (controller_light_switch) {
    v_80 = sub_339;
  } else {
    v_80 = sub_344;
  };
  if (controller_c_light_2) {
    sub_338 = v_80;
  } else {
    sub_338 = sub_344;
  };
  if (controller_ck_42_1) {
    v_90 = sub_338;
  } else {
    v_90 = sub_331;
  };
  if (controller_blind_switch) {
    v_91 = v_89;
  } else {
    v_91 = v_90;
  };
  if (controller_ck_42_1) {
    sub_345 = sub_331;
  } else {
    sub_345 = sub_338;
  };
  if (controller_c_blind_1) {
    sub_319 = v_91;
  } else {
    sub_319 = sub_345;
  };
  if (controller_ck_44_1) {
    sub_349 = sub_136;
  } else {
    sub_349 = sub_144;
  };
  if (controller_c_air_1) {
    sub_356 = sub_23;
  } else {
    sub_356 = false;
  };
  if (controller_v_271) {
    v_71 = false;
  } else {
    v_71 = sub_356;
  };
  if (controller_c_air_2) {
    sub_355 = sub_356;
  } else {
    sub_355 = v_71;
  };
  if (controller_c_air_1) {
    v_70 = false;
  } else {
    v_70 = sub_23;
  };
  if (controller_v_271) {
    sub_357 = v_70;
  } else {
    sub_357 = false;
  };
  if (controller_v_272) {
    sub_354 = sub_357;
  } else {
    sub_354 = sub_355;
  };
  if (controller_c_pc) {
    sub_353 = false;
  } else {
    sub_353 = sub_354;
  };
  if (controller_c_closet) {
    sub_352 = false;
  } else {
    sub_352 = sub_353;
  };
  if (controller_light_failed_recovered) {
    sub_364 = sub_155;
  } else {
    sub_364 = sub_154;
  };
  sub_363 = sub_364;
  if (controller_c_air_1) {
    sub_362 = sub_363;
  } else {
    sub_362 = false;
  };
  if (controller_v_271) {
    v_69 = false;
  } else {
    v_69 = sub_362;
  };
  if (controller_c_air_2) {
    sub_361 = sub_362;
  } else {
    sub_361 = v_69;
  };
  if (controller_c_air_1) {
    v_68 = false;
  } else {
    v_68 = sub_363;
  };
  if (controller_v_271) {
    sub_365 = v_68;
  } else {
    sub_365 = false;
  };
  if (controller_v_272) {
    sub_360 = sub_365;
  } else {
    sub_360 = sub_361;
  };
  if (controller_c_pc) {
    sub_359 = false;
  } else {
    sub_359 = sub_360;
  };
  if (controller_c_closet) {
    sub_358 = false;
  } else {
    sub_358 = sub_359;
  };
  if (controller_blind_failed_recovered) {
    v_72 = sub_358;
    sub_351 = sub_352;
  } else {
    v_72 = sub_352;
    sub_351 = sub_358;
  };
  if (controller_ck_44_1) {
    sub_350 = v_72;
  } else {
    sub_350 = sub_351;
  };
  if (controller_ck_37_1) {
    sub_348 = sub_350;
    v_67 = sub_349;
  } else {
    sub_348 = sub_349;
    v_67 = sub_350;
  };
  if (controller_c_light_1) {
    sub_366 = v_67;
  } else {
    sub_366 = sub_348;
  };
  if (controller_light_switch) {
    v_73 = sub_348;
  } else {
    v_73 = sub_366;
  };
  if (controller_c_light_2) {
    sub_347 = v_73;
  } else {
    sub_347 = sub_366;
  };
  sub_369 = sub_137;
  sub_370 = sub_352;
  if (controller_ck_37_1) {
    sub_368 = sub_370;
    v_65 = sub_369;
  } else {
    sub_368 = sub_369;
    v_65 = sub_370;
  };
  if (controller_c_light_1) {
    sub_371 = v_65;
  } else {
    sub_371 = sub_368;
  };
  if (controller_light_switch) {
    v_66 = sub_368;
  } else {
    v_66 = sub_371;
  };
  if (controller_c_light_2) {
    sub_367 = v_66;
  } else {
    sub_367 = sub_371;
  };
  if (controller_ck_42_1) {
    v_74 = sub_367;
  } else {
    v_74 = sub_347;
  };
  if (controller_blind_failed_recovered) {
    v_63 = false;
    sub_375 = sub_137;
  } else {
    v_63 = sub_137;
    sub_375 = false;
  };
  if (controller_ck_44_1) {
    sub_374 = v_63;
  } else {
    sub_374 = sub_375;
  };
  if (controller_light_failed_recovered) {
    sub_384 = sub_43;
  } else {
    sub_384 = sub_42;
  };
  sub_383 = sub_384;
  if (controller_c_air_1) {
    sub_382 = sub_383;
  } else {
    sub_382 = false;
  };
  if (controller_v_271) {
    v_61 = false;
  } else {
    v_61 = sub_382;
  };
  if (controller_c_air_2) {
    sub_381 = sub_382;
  } else {
    sub_381 = v_61;
  };
  if (controller_c_air_1) {
    sub_386 = false;
  } else {
    sub_386 = sub_383;
  };
  if (controller_v_271) {
    sub_385 = sub_386;
  } else {
    sub_385 = false;
  };
  if (controller_v_272) {
    sub_380 = sub_385;
  } else {
    sub_380 = sub_381;
  };
  if (controller_c_pc) {
    sub_379 = false;
  } else {
    sub_379 = sub_380;
  };
  if (controller_c_closet) {
    sub_378 = false;
  } else {
    sub_378 = sub_379;
  };
  if (controller_blind_failed_recovered) {
    v_62 = sub_378;
    sub_377 = sub_352;
  } else {
    v_62 = sub_352;
    sub_377 = sub_378;
  };
  if (controller_ck_44_1) {
    sub_376 = v_62;
  } else {
    sub_376 = sub_377;
  };
  if (controller_ck_37_1) {
    sub_373 = sub_376;
    v_60 = sub_374;
  } else {
    sub_373 = sub_374;
    v_60 = sub_376;
  };
  if (controller_c_light_1) {
    sub_387 = v_60;
  } else {
    sub_387 = sub_373;
  };
  if (controller_light_switch) {
    v_64 = sub_373;
  } else {
    v_64 = sub_387;
  };
  if (controller_c_light_2) {
    sub_372 = v_64;
  } else {
    sub_372 = sub_387;
  };
  if (controller_ck_42_1) {
    v_75 = sub_372;
  } else {
    v_75 = sub_367;
  };
  if (controller_blind_switch) {
    v_76 = v_74;
  } else {
    v_76 = v_75;
  };
  if (controller_ck_42_1) {
    sub_388 = sub_367;
  } else {
    sub_388 = sub_372;
  };
  if (controller_c_blind_1) {
    sub_346 = v_76;
  } else {
    sub_346 = sub_388;
  };
  if (controller_air_failed_recovered) {
    v_92 = sub_346;
    sub_318 = sub_319;
  } else {
    v_92 = sub_319;
    sub_318 = sub_346;
  };
  if (controller_ck_34_1) {
    sub_317 = v_92;
  } else {
    sub_317 = sub_318;
  };
  if (controller_cleaner) {
    v_105 = sub_317;
    sub_297 = sub_298;
  } else {
    v_105 = sub_298;
    sub_297 = sub_317;
  };
  if (controller_ck_25_1) {
    sub_296 = v_105;
  } else {
    sub_296 = sub_297;
  };
  if (controller_ck_44_1) {
    sub_396 = sub_195;
  } else {
    sub_396 = sub_199;
  };
  if (controller_c_air_1) {
    v_47 = sub_383;
    sub_402 = sub_40;
  } else {
    v_47 = sub_40;
    sub_402 = sub_383;
  };
  if (controller_v_271) {
    v_46 = sub_382;
  } else {
    v_46 = sub_402;
  };
  if (controller_c_air_2) {
    sub_401 = sub_141;
  } else {
    sub_401 = v_46;
  };
  sub_403 = sub_383;
  if (controller_v_271) {
    v_49 = sub_143;
    v_48 = v_47;
  } else {
    v_49 = sub_403;
    v_48 = sub_403;
  };
  if (controller_c_air_2) {
    v_50 = v_48;
  } else {
    v_50 = v_49;
  };
  if (controller_v_272) {
    v_51 = v_50;
  } else {
    v_51 = sub_401;
  };
  if (controller_c_pc) {
    v_52 = v_51;
  } else {
    v_52 = sub_21;
  };
  if (controller_c_window) {
    sub_400 = v_52;
  } else {
    sub_400 = sub_21;
  };
  sub_399 = sub_400;
  if (controller_v_271) {
    v_42 = sub_125;
  } else {
    v_42 = sub_403;
  };
  if (controller_c_air_1) {
    v_40 = sub_383;
  } else {
    v_40 = sub_32;
  };
  if (controller_v_271) {
    v_41 = v_40;
  } else {
    v_41 = sub_403;
  };
  if (controller_c_air_2) {
    v_43 = v_41;
  } else {
    v_43 = v_42;
  };
  if (controller_c_air_1) {
    sub_407 = sub_32;
  } else {
    sub_407 = sub_383;
  };
  if (controller_v_271) {
    v_39 = sub_382;
  } else {
    v_39 = sub_407;
  };
  if (controller_c_air_2) {
    sub_406 = sub_123;
  } else {
    sub_406 = v_39;
  };
  if (controller_v_272) {
    v_44 = v_43;
  } else {
    v_44 = sub_406;
  };
  sub_409 = sub_363;
  sub_408 = sub_409;
  if (controller_c_pc) {
    v_45 = v_44;
  } else {
    v_45 = sub_408;
  };
  if (controller_c_window) {
    sub_405 = v_45;
  } else {
    sub_405 = sub_408;
  };
  sub_404 = sub_405;
  if (controller_blind_failed_recovered) {
    v_53 = sub_404;
    sub_398 = sub_399;
  } else {
    v_53 = sub_399;
    sub_398 = sub_404;
  };
  if (controller_ck_44_1) {
    sub_397 = v_53;
  } else {
    sub_397 = sub_398;
  };
  if (controller_ck_37_1) {
    sub_395 = sub_397;
    v_38 = sub_396;
  } else {
    sub_395 = sub_396;
    v_38 = sub_397;
  };
  if (controller_c_light_1) {
    sub_410 = v_38;
  } else {
    sub_410 = sub_395;
  };
  if (controller_light_switch) {
    v_54 = sub_395;
  } else {
    v_54 = sub_410;
  };
  if (controller_c_light_2) {
    sub_394 = v_54;
  } else {
    sub_394 = sub_410;
  };
  sub_413 = sub_196;
  sub_414 = sub_399;
  if (controller_ck_37_1) {
    sub_412 = sub_414;
    v_36 = sub_413;
  } else {
    sub_412 = sub_413;
    v_36 = sub_414;
  };
  if (controller_c_light_1) {
    sub_415 = v_36;
  } else {
    sub_415 = sub_412;
  };
  if (controller_light_switch) {
    v_37 = sub_412;
  } else {
    v_37 = sub_415;
  };
  if (controller_c_light_2) {
    sub_411 = v_37;
  } else {
    sub_411 = sub_415;
  };
  if (controller_ck_42_1) {
    v_55 = sub_411;
  } else {
    v_55 = sub_394;
  };
  if (controller_blind_failed_recovered) {
    v_34 = false;
    sub_419 = sub_196;
  } else {
    v_34 = sub_196;
    sub_419 = false;
  };
  if (controller_ck_44_1) {
    sub_418 = v_34;
  } else {
    sub_418 = sub_419;
  };
  if (controller_v_271) {
    v_29 = false;
    v_28 = sub_382;
  } else {
    v_29 = sub_403;
    v_28 = sub_403;
  };
  if (controller_c_air_2) {
    v_30 = v_28;
  } else {
    v_30 = v_29;
  };
  if (controller_v_271) {
    v_27 = sub_382;
  } else {
    v_27 = sub_386;
  };
  if (controller_c_air_2) {
    sub_424 = false;
  } else {
    sub_424 = v_27;
  };
  if (controller_v_272) {
    v_31 = v_30;
  } else {
    v_31 = sub_424;
  };
  sub_425 = sub_403;
  if (controller_c_pc) {
    v_32 = v_31;
  } else {
    v_32 = sub_425;
  };
  if (controller_c_window) {
    sub_423 = v_32;
  } else {
    sub_423 = sub_425;
  };
  sub_422 = sub_423;
  if (controller_blind_failed_recovered) {
    v_33 = sub_422;
    sub_421 = sub_399;
  } else {
    v_33 = sub_399;
    sub_421 = sub_422;
  };
  if (controller_ck_44_1) {
    sub_420 = v_33;
  } else {
    sub_420 = sub_421;
  };
  if (controller_ck_37_1) {
    sub_417 = sub_420;
    v_26 = sub_418;
  } else {
    sub_417 = sub_418;
    v_26 = sub_420;
  };
  if (controller_c_light_1) {
    sub_426 = v_26;
  } else {
    sub_426 = sub_417;
  };
  if (controller_light_switch) {
    v_35 = sub_417;
  } else {
    v_35 = sub_426;
  };
  if (controller_c_light_2) {
    sub_416 = v_35;
  } else {
    sub_416 = sub_426;
  };
  if (controller_ck_42_1) {
    v_56 = sub_416;
  } else {
    v_56 = sub_411;
  };
  if (controller_blind_switch) {
    v_57 = v_55;
  } else {
    v_57 = v_56;
  };
  if (controller_ck_42_1) {
    sub_427 = sub_411;
  } else {
    sub_427 = sub_416;
  };
  if (controller_c_blind_1) {
    sub_393 = v_57;
  } else {
    sub_393 = sub_427;
  };
  if (controller_air_failed_recovered) {
    v_58 = sub_393;
    sub_392 = sub_319;
  } else {
    v_58 = sub_319;
    sub_392 = sub_393;
  };
  if (controller_ck_34_1) {
    sub_391 = v_58;
  } else {
    sub_391 = sub_392;
  };
  if (controller_cleaner) {
    v_59 = sub_317;
    sub_390 = sub_391;
  } else {
    v_59 = sub_391;
    sub_390 = sub_317;
  };
  if (controller_ck_25_1) {
    sub_389 = v_59;
  } else {
    sub_389 = sub_390;
  };
  if (controller_worker) {
    v_106 = sub_389;
    sub_295 = sub_296;
  } else {
    v_106 = sub_296;
    sub_295 = sub_389;
  };
  if (controller_ck_23_1) {
    sub_294 = v_106;
  } else {
    sub_294 = sub_295;
  };
  if (controller_ck_44_1) {
    sub_438 = sub_235;
  } else {
    sub_438 = sub_236;
  };
  sub_437 = sub_438;
  sub_436 = sub_437;
  sub_435 = sub_436;
  sub_442 = sub_99;
  sub_441 = sub_442;
  sub_440 = sub_441;
  sub_439 = sub_440;
  if (controller_ck_42_1) {
    v_20 = sub_439;
  } else {
    v_20 = sub_435;
  };
  if (controller_blind_failed_recovered) {
    v_19 = false;
    sub_447 = sub_99;
  } else {
    v_19 = sub_99;
    sub_447 = false;
  };
  if (controller_ck_44_1) {
    sub_446 = v_19;
  } else {
    sub_446 = sub_447;
  };
  sub_445 = sub_446;
  sub_444 = sub_445;
  sub_443 = sub_444;
  if (controller_ck_42_1) {
    v_21 = sub_443;
  } else {
    v_21 = sub_439;
  };
  if (controller_blind_switch) {
    v_22 = v_20;
  } else {
    v_22 = v_21;
  };
  if (controller_ck_42_1) {
    sub_448 = sub_439;
  } else {
    sub_448 = sub_443;
  };
  if (controller_c_blind_1) {
    sub_434 = v_22;
  } else {
    sub_434 = sub_448;
  };
  if (controller_air_failed_recovered) {
    v_23 = sub_346;
    sub_433 = sub_434;
  } else {
    v_23 = sub_434;
    sub_433 = sub_346;
  };
  if (controller_ck_34_1) {
    sub_432 = v_23;
  } else {
    sub_432 = sub_433;
  };
  if (controller_cleaner) {
    v_24 = sub_432;
    sub_431 = sub_298;
  } else {
    v_24 = sub_298;
    sub_431 = sub_432;
  };
  if (controller_ck_25_1) {
    sub_430 = v_24;
  } else {
    sub_430 = sub_431;
  };
  sub_459 = sub_198;
  sub_458 = sub_459;
  if (controller_blind_failed_recovered) {
    v_12 = sub_254;
    sub_457 = sub_458;
  } else {
    v_12 = sub_458;
    sub_457 = sub_254;
  };
  if (controller_ck_44_1) {
    sub_456 = v_12;
  } else {
    sub_456 = sub_457;
  };
  if (controller_c_air_1) {
    sub_467 = sub_23;
  } else {
    sub_467 = sub_40;
  };
  if (controller_v_271) {
    v_10 = sub_39;
  } else {
    v_10 = sub_467;
  };
  if (controller_c_air_2) {
    sub_466 = sub_467;
  } else {
    sub_466 = v_10;
  };
  if (controller_c_air_1) {
    v_9 = sub_40;
  } else {
    v_9 = sub_23;
  };
  if (controller_v_271) {
    sub_468 = v_9;
  } else {
    sub_468 = sub_39;
  };
  if (controller_v_272) {
    sub_465 = sub_468;
  } else {
    sub_465 = sub_466;
  };
  sub_464 = sub_465;
  sub_463 = sub_464;
  sub_462 = sub_463;
  sub_471 = sub_360;
  sub_470 = sub_471;
  sub_469 = sub_470;
  if (controller_blind_failed_recovered) {
    v_11 = sub_469;
    sub_461 = sub_462;
  } else {
    v_11 = sub_462;
    sub_461 = sub_469;
  };
  if (controller_ck_44_1) {
    sub_460 = v_11;
  } else {
    sub_460 = sub_461;
  };
  if (controller_ck_37_1) {
    sub_455 = sub_460;
    v_8 = sub_456;
  } else {
    sub_455 = sub_456;
    v_8 = sub_460;
  };
  if (controller_c_light_1) {
    sub_472 = v_8;
  } else {
    sub_472 = sub_455;
  };
  if (controller_light_switch) {
    v_13 = sub_455;
  } else {
    v_13 = sub_472;
  };
  if (controller_c_light_2) {
    sub_454 = v_13;
  } else {
    sub_454 = sub_472;
  };
  if (controller_blind_failed_recovered) {
    v_6 = sub_273;
    sub_476 = sub_458;
  } else {
    v_6 = sub_458;
    sub_476 = sub_273;
  };
  if (controller_ck_44_1) {
    sub_475 = v_6;
  } else {
    sub_475 = sub_476;
  };
  sub_481 = sub_354;
  sub_480 = sub_481;
  sub_479 = sub_480;
  if (controller_blind_failed_recovered) {
    v_5 = sub_479;
    sub_478 = sub_462;
  } else {
    v_5 = sub_462;
    sub_478 = sub_479;
  };
  if (controller_ck_44_1) {
    sub_477 = v_5;
  } else {
    sub_477 = sub_478;
  };
  if (controller_ck_37_1) {
    sub_474 = sub_477;
    v_4 = sub_475;
  } else {
    sub_474 = sub_475;
    v_4 = sub_477;
  };
  if (controller_c_light_1) {
    sub_482 = v_4;
  } else {
    sub_482 = sub_474;
  };
  if (controller_light_switch) {
    v_7 = sub_474;
  } else {
    v_7 = sub_482;
  };
  if (controller_c_light_2) {
    sub_473 = v_7;
  } else {
    sub_473 = sub_482;
  };
  if (controller_ck_42_1) {
    v_14 = sub_473;
  } else {
    v_14 = sub_454;
  };
  if (controller_blind_failed_recovered) {
    v_2 = false;
    sub_486 = sub_458;
  } else {
    v_2 = sub_458;
    sub_486 = false;
  };
  if (controller_ck_44_1) {
    sub_485 = v_2;
  } else {
    sub_485 = sub_486;
  };
  sub_491 = sub_380;
  sub_490 = sub_491;
  sub_489 = sub_490;
  if (controller_blind_failed_recovered) {
    v_1 = sub_489;
    sub_488 = sub_462;
  } else {
    v_1 = sub_462;
    sub_488 = sub_489;
  };
  if (controller_ck_44_1) {
    sub_487 = v_1;
  } else {
    sub_487 = sub_488;
  };
  if (controller_ck_37_1) {
    sub_484 = sub_487;
    v = sub_485;
  } else {
    sub_484 = sub_485;
    v = sub_487;
  };
  if (controller_c_light_1) {
    sub_492 = v;
  } else {
    sub_492 = sub_484;
  };
  if (controller_light_switch) {
    v_3 = sub_484;
  } else {
    v_3 = sub_492;
  };
  if (controller_c_light_2) {
    sub_483 = v_3;
  } else {
    sub_483 = sub_492;
  };
  if (controller_ck_42_1) {
    v_15 = sub_483;
  } else {
    v_15 = sub_473;
  };
  if (controller_blind_switch) {
    v_16 = v_14;
  } else {
    v_16 = v_15;
  };
  if (controller_ck_42_1) {
    sub_493 = sub_473;
  } else {
    sub_493 = sub_483;
  };
  if (controller_c_blind_1) {
    sub_453 = v_16;
  } else {
    sub_453 = sub_493;
  };
  if (controller_air_failed_recovered) {
    v_17 = sub_453;
    sub_452 = sub_434;
  } else {
    v_17 = sub_434;
    sub_452 = sub_453;
  };
  if (controller_ck_34_1) {
    sub_451 = v_17;
  } else {
    sub_451 = sub_452;
  };
  if (controller_cleaner) {
    v_18 = sub_432;
    sub_450 = sub_451;
  } else {
    v_18 = sub_451;
    sub_450 = sub_432;
  };
  if (controller_ck_25_1) {
    sub_449 = v_18;
  } else {
    sub_449 = sub_450;
  };
  if (controller_worker) {
    v_25 = sub_449;
    sub_429 = sub_430;
  } else {
    v_25 = sub_430;
    sub_429 = sub_449;
  };
  if (controller_ck_23_1) {
    sub_428 = v_25;
  } else {
    sub_428 = sub_429;
  };
  if (controller_change_shift) {
    v_232 = sub_428;
    sub_293 = sub_294;
  } else {
    v_232 = sub_294;
    sub_293 = sub_428;
  };
  if (controller_ck_1) {
    v_233 = v_232;
  } else {
    v_233 = sub_293;
  };
  if (p_controller_c_blind_2) {
    sub_0 = v_233;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_blind_2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_blind_1_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered, int controller_ck_1,
  int controller_pnr_14, int controller_ck_19_1, int controller_pnr_13,
  int controller_ck_21_1, int controller_pnr_12, int controller_ck_23_1,
  int controller_pnr_11, int controller_ck_25_1, int controller_pnr_10,
  int controller_ck_27_1, int controller_pnr_9, int controller_ck_29_1,
  int controller_pnr_8, int controller_v_272, int controller_v_271,
  int controller_pnr_7, int controller_ck_34_1, int controller_pnr_6,
  int controller_ck_37_1, int controller_pnr_5, int controller_ck_39_1,
  int controller_pnr_4, int controller_ck_42_1, int controller_pnr_3,
  int controller_ck_44_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_light_2, int controller_c_light_1,
  int controller_c_closet, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_blind_1_out* _out) {
  
  int v_384;
  int v_383;
  int v_382;
  int v_381;
  int v_380;
  int v_379;
  int v_378;
  int v_377;
  int v_376;
  int v_375;
  int v_374;
  int v_373;
  int v_372;
  int v_371;
  int v_370;
  int v_369;
  int v_368;
  int v_367;
  int v_366;
  int v_365;
  int v_364;
  int v_363;
  int v_362;
  int v_361;
  int v_360;
  int v_359;
  int v_358;
  int v_357;
  int v_356;
  int v_355;
  int v_354;
  int v_353;
  int v_352;
  int v_351;
  int v_350;
  int v_349;
  int v_348;
  int v_347;
  int v_346;
  int v_345;
  int v_344;
  int v_343;
  int v_342;
  int v_341;
  int v_340;
  int v_339;
  int v_338;
  int v_337;
  int v_336;
  int v_335;
  int v_334;
  int v_333;
  int v_332;
  int v_331;
  int v_330;
  int v_329;
  int v_328;
  int v_327;
  int v_326;
  int v_325;
  int v_324;
  int v_323;
  int v_322;
  int v_321;
  int v_320;
  int v_319;
  int v_318;
  int v_317;
  int v_316;
  int v_315;
  int v_314;
  int v_313;
  int v_312;
  int v_311;
  int v_310;
  int v_309;
  int v_308;
  int v_307;
  int v_306;
  int v_305;
  int v_304;
  int v_303;
  int v_302;
  int v_301;
  int v_300;
  int v_299;
  int v_298;
  int v_297;
  int v_296;
  int v_295;
  int v_294;
  int v_293;
  int v_292;
  int v_291;
  int v_290;
  int v_289;
  int v_288;
  int v_287;
  int v_286;
  int v_285;
  int v_284;
  int v_283;
  int v_282;
  int v_281;
  int v_280;
  int v_279;
  int v_278;
  int v_277;
  int v_276;
  int v_275;
  int v_274;
  int v_273;
  int v_272;
  int v_271;
  int v_270;
  int v_269;
  int v_268;
  int v_267;
  int v_266;
  int v_265;
  int v_264;
  int v_263;
  int v_262;
  int v_261;
  int v_260;
  int v_259;
  int v_258;
  int v_257;
  int v_256;
  int v_255;
  int v_254;
  int v_253;
  int v_252;
  int v_251;
  int v_250;
  int v_249;
  int v_248;
  int v_247;
  int v_246;
  int v_245;
  int v_244;
  int v_243;
  int v_242;
  int v_241;
  int v_240;
  int v_239;
  int v_238;
  int v_237;
  int v_236;
  int v_235;
  int v_234;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  int sub_230;
  int sub_231;
  int sub_232;
  int sub_233;
  int sub_234;
  int sub_235;
  int sub_236;
  int sub_237;
  int sub_238;
  int sub_239;
  int sub_240;
  int sub_241;
  int sub_242;
  int sub_243;
  int sub_244;
  int sub_245;
  int sub_246;
  int sub_247;
  int sub_248;
  int sub_249;
  int sub_250;
  int sub_251;
  int sub_252;
  int sub_253;
  int sub_254;
  int sub_255;
  int sub_256;
  int sub_257;
  int sub_258;
  int sub_259;
  int sub_260;
  int sub_261;
  int sub_262;
  int sub_263;
  int sub_264;
  int sub_265;
  int sub_266;
  int sub_267;
  int sub_268;
  int sub_269;
  int sub_270;
  int sub_271;
  int sub_272;
  int sub_273;
  int sub_274;
  int sub_275;
  int sub_276;
  int sub_277;
  int sub_278;
  int sub_279;
  int sub_280;
  int sub_281;
  int sub_282;
  int sub_283;
  int sub_284;
  int sub_285;
  int sub_286;
  int sub_287;
  int sub_288;
  int sub_289;
  int sub_290;
  int sub_291;
  int sub_292;
  int sub_293;
  int sub_294;
  int sub_295;
  int sub_296;
  int sub_297;
  int sub_298;
  int sub_299;
  int sub_300;
  int sub_301;
  int sub_302;
  int sub_303;
  int sub_304;
  int sub_305;
  int sub_306;
  int sub_307;
  int sub_308;
  int sub_309;
  int sub_310;
  int sub_311;
  int sub_312;
  int sub_313;
  int sub_314;
  int sub_315;
  int sub_316;
  int sub_317;
  int sub_318;
  int sub_319;
  int sub_320;
  int sub_321;
  int sub_322;
  int sub_323;
  int sub_324;
  int sub_325;
  int sub_326;
  int sub_327;
  int sub_328;
  int sub_329;
  int sub_330;
  int sub_331;
  int sub_332;
  int sub_333;
  int sub_334;
  int sub_335;
  int sub_336;
  int sub_337;
  int sub_338;
  int sub_339;
  int sub_340;
  int sub_341;
  int sub_342;
  int sub_343;
  int sub_344;
  int sub_345;
  int sub_346;
  int sub_347;
  int sub_348;
  int sub_349;
  int sub_350;
  int sub_351;
  int sub_352;
  int sub_353;
  int sub_354;
  int sub_355;
  int sub_356;
  int sub_357;
  int sub_358;
  int sub_359;
  int sub_360;
  int sub_361;
  int sub_362;
  int sub_363;
  int sub_364;
  int sub_365;
  int sub_366;
  int sub_367;
  int sub_368;
  int sub_369;
  int sub_370;
  int sub_371;
  int sub_372;
  int sub_373;
  int sub_374;
  int sub_375;
  int sub_376;
  sub_18 = false;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  if (controller_c_pc) {
    v_376 = false;
  } else {
    v_376 = sub_15;
  };
  if (controller_c_window) {
    sub_14 = v_376;
  } else {
    sub_14 = false;
  };
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_26 = (controller_ck_39_1&&false);
  v_374 = !(controller_ck_39_1);
  sub_27 = (v_374&&false);
  if (controller_light_failed_recovered) {
    sub_25 = sub_26;
  } else {
    sub_25 = sub_27;
  };
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  if (controller_c_pc) {
    v_375 = false;
  } else {
    v_375 = sub_22;
  };
  if (controller_c_window) {
    sub_21 = v_375;
  } else {
    sub_21 = false;
  };
  sub_20 = sub_21;
  sub_19 = sub_20;
  if (controller_ck_37_1) {
    sub_11 = sub_19;
    v_373 = sub_12;
  } else {
    sub_11 = sub_12;
    v_373 = sub_19;
  };
  if (controller_c_light_1) {
    sub_28 = v_373;
  } else {
    sub_28 = sub_11;
  };
  if (controller_light_switch) {
    v_377 = sub_11;
  } else {
    v_377 = sub_28;
  };
  if (controller_c_light_2) {
    sub_10 = v_377;
  } else {
    sub_10 = sub_28;
  };
  sub_37 = true;
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  if (controller_c_pc) {
    v_372 = false;
  } else {
    v_372 = sub_34;
  };
  if (controller_c_window) {
    sub_33 = v_372;
  } else {
    sub_33 = false;
  };
  sub_32 = sub_33;
  if (controller_blind_failed_recovered) {
    sub_31 = sub_13;
    sub_38 = sub_32;
  } else {
    sub_31 = sub_32;
    sub_38 = sub_13;
  };
  if (controller_ck_44_1) {
    sub_30 = sub_38;
  } else {
    sub_30 = sub_31;
  };
  v_370 = !(controller_ck_39_1);
  sub_47 = (v_370||false);
  sub_48 = (controller_ck_39_1||false);
  if (controller_light_failed_recovered) {
    sub_46 = sub_47;
  } else {
    sub_46 = sub_48;
  };
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  if (controller_c_pc) {
    v_371 = false;
  } else {
    v_371 = sub_43;
  };
  if (controller_c_window) {
    sub_42 = v_371;
  } else {
    sub_42 = false;
  };
  sub_41 = sub_42;
  if (controller_blind_failed_recovered) {
    sub_40 = sub_20;
    sub_49 = sub_41;
  } else {
    sub_40 = sub_41;
    sub_49 = sub_20;
  };
  if (controller_ck_44_1) {
    sub_39 = sub_49;
  } else {
    sub_39 = sub_40;
  };
  if (controller_ck_37_1) {
    sub_29 = sub_39;
    v_369 = sub_30;
  } else {
    sub_29 = sub_30;
    v_369 = sub_39;
  };
  if (controller_c_light_1) {
    sub_50 = v_369;
  } else {
    sub_50 = sub_29;
  };
  if (controller_light_switch) {
    v_378 = sub_29;
  } else {
    v_378 = sub_50;
  };
  if (controller_c_light_2) {
    v_379 = v_378;
  } else {
    v_379 = sub_50;
  };
  if (controller_ck_42_1) {
    sub_9 = v_379;
  } else {
    sub_9 = sub_10;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (controller_c_door) {
    v_363 = false;
    sub_65 = sub_25;
  } else {
    v_363 = sub_25;
    sub_65 = false;
  };
  if (controller_ck_19_1) {
    sub_64 = v_363;
  } else {
    sub_64 = sub_65;
  };
  sub_63 = sub_64;
  sub_62 = sub_63;
  sub_61 = sub_62;
  sub_60 = sub_61;
  sub_59 = sub_60;
  if (controller_c_door) {
    v_362 = false;
    sub_72 = sub_46;
  } else {
    v_362 = sub_46;
    sub_72 = false;
  };
  if (controller_ck_19_1) {
    sub_71 = v_362;
  } else {
    sub_71 = sub_72;
  };
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  if (controller_c_window) {
    sub_67 = false;
  } else {
    sub_67 = sub_68;
  };
  sub_66 = sub_67;
  if (controller_blind_failed_recovered) {
    v_364 = sub_66;
    sub_58 = sub_59;
  } else {
    v_364 = sub_59;
    sub_58 = sub_66;
  };
  if (controller_ck_44_1) {
    sub_57 = v_364;
  } else {
    sub_57 = sub_58;
  };
  if (controller_c_door) {
    v_360 = false;
    sub_81 = sub_18;
  } else {
    v_360 = sub_18;
    sub_81 = false;
  };
  if (controller_ck_19_1) {
    sub_80 = v_360;
  } else {
    sub_80 = sub_81;
  };
  sub_79 = sub_80;
  sub_78 = sub_79;
  sub_77 = sub_78;
  sub_76 = sub_77;
  sub_75 = sub_76;
  if (controller_c_door) {
    v_359 = false;
    sub_88 = sub_37;
  } else {
    v_359 = sub_37;
    sub_88 = false;
  };
  if (controller_ck_19_1) {
    sub_87 = v_359;
  } else {
    sub_87 = sub_88;
  };
  sub_86 = sub_87;
  sub_85 = sub_86;
  sub_84 = sub_85;
  if (controller_c_window) {
    sub_83 = false;
  } else {
    sub_83 = sub_84;
  };
  sub_82 = sub_83;
  if (controller_blind_failed_recovered) {
    v_361 = sub_82;
    sub_74 = sub_75;
  } else {
    v_361 = sub_75;
    sub_74 = sub_82;
  };
  if (controller_ck_44_1) {
    sub_73 = v_361;
  } else {
    sub_73 = sub_74;
  };
  if (controller_ck_37_1) {
    sub_56 = sub_73;
    v_358 = sub_57;
  } else {
    sub_56 = sub_57;
    v_358 = sub_73;
  };
  if (controller_c_light_1) {
    sub_89 = v_358;
  } else {
    sub_89 = sub_56;
  };
  if (controller_light_switch) {
    v_365 = sub_56;
  } else {
    v_365 = sub_89;
  };
  if (controller_c_light_2) {
    sub_55 = v_365;
  } else {
    sub_55 = sub_89;
  };
  if (controller_c_window) {
    sub_94 = false;
  } else {
    sub_94 = sub_61;
  };
  sub_93 = sub_94;
  if (controller_blind_failed_recovered) {
    v_357 = sub_93;
    sub_92 = sub_59;
  } else {
    v_357 = sub_59;
    sub_92 = sub_93;
  };
  if (controller_ck_44_1) {
    sub_91 = v_357;
  } else {
    sub_91 = sub_92;
  };
  if (controller_c_window) {
    sub_98 = false;
  } else {
    sub_98 = sub_77;
  };
  sub_97 = sub_98;
  if (controller_blind_failed_recovered) {
    v_356 = sub_97;
    sub_96 = sub_75;
  } else {
    v_356 = sub_75;
    sub_96 = sub_97;
  };
  if (controller_ck_44_1) {
    sub_95 = v_356;
  } else {
    sub_95 = sub_96;
  };
  if (controller_ck_37_1) {
    sub_90 = sub_95;
    v_355 = sub_91;
  } else {
    sub_90 = sub_91;
    v_355 = sub_95;
  };
  if (controller_c_light_1) {
    sub_99 = v_355;
  } else {
    sub_99 = sub_90;
  };
  if (controller_light_switch) {
    v_366 = sub_90;
  } else {
    v_366 = sub_99;
  };
  if (controller_c_light_2) {
    v_367 = v_366;
  } else {
    v_367 = sub_99;
  };
  if (controller_ck_42_1) {
    sub_54 = v_367;
  } else {
    sub_54 = sub_55;
  };
  sub_53 = sub_54;
  if (controller_c_air_1) {
    sub_110 = sub_24;
  } else {
    sub_110 = false;
  };
  if (controller_v_271) {
    v_351 = false;
  } else {
    v_351 = sub_110;
  };
  if (controller_c_air_2) {
    sub_109 = sub_110;
  } else {
    sub_109 = v_351;
  };
  if (controller_c_air_1) {
    sub_112 = false;
  } else {
    sub_112 = sub_24;
  };
  if (controller_v_271) {
    sub_111 = sub_112;
  } else {
    sub_111 = false;
  };
  if (controller_v_272) {
    sub_108 = sub_111;
  } else {
    sub_108 = sub_109;
  };
  if (controller_c_pc) {
    sub_107 = false;
  } else {
    sub_107 = sub_108;
  };
  if (controller_c_closet) {
    sub_106 = false;
  } else {
    sub_106 = sub_107;
  };
  if (controller_c_air_1) {
    sub_117 = sub_45;
  } else {
    sub_117 = false;
  };
  if (controller_v_271) {
    v_350 = false;
  } else {
    v_350 = sub_117;
  };
  if (controller_c_air_2) {
    sub_116 = sub_117;
  } else {
    sub_116 = v_350;
  };
  if (controller_c_air_1) {
    sub_119 = false;
  } else {
    sub_119 = sub_45;
  };
  if (controller_v_271) {
    sub_118 = sub_119;
  } else {
    sub_118 = false;
  };
  if (controller_v_272) {
    sub_115 = sub_118;
  } else {
    sub_115 = sub_116;
  };
  if (controller_c_pc) {
    sub_114 = false;
  } else {
    sub_114 = sub_115;
  };
  if (controller_c_closet) {
    sub_113 = false;
  } else {
    sub_113 = sub_114;
  };
  if (controller_blind_failed_recovered) {
    sub_105 = sub_106;
    sub_120 = sub_113;
  } else {
    sub_105 = sub_113;
    sub_120 = sub_106;
  };
  if (controller_ck_44_1) {
    sub_104 = sub_120;
  } else {
    sub_104 = sub_105;
  };
  if (controller_c_air_1) {
    sub_127 = sub_17;
  } else {
    sub_127 = false;
  };
  if (controller_v_271) {
    v_348 = false;
  } else {
    v_348 = sub_127;
  };
  if (controller_c_air_2) {
    sub_126 = sub_127;
  } else {
    sub_126 = v_348;
  };
  if (controller_c_air_1) {
    v_347 = false;
  } else {
    v_347 = sub_17;
  };
  if (controller_v_271) {
    sub_128 = v_347;
  } else {
    sub_128 = false;
  };
  if (controller_v_272) {
    sub_125 = sub_128;
  } else {
    sub_125 = sub_126;
  };
  if (controller_c_pc) {
    sub_124 = false;
  } else {
    sub_124 = sub_125;
  };
  if (controller_c_closet) {
    sub_123 = false;
  } else {
    sub_123 = sub_124;
  };
  sub_136 = !(controller_ck_39_1);
  sub_137 = controller_ck_39_1;
  if (controller_light_failed_recovered) {
    sub_135 = sub_136;
  } else {
    sub_135 = sub_137;
  };
  sub_134 = sub_135;
  if (controller_c_air_1) {
    sub_133 = sub_134;
  } else {
    sub_133 = false;
  };
  if (controller_v_271) {
    v_346 = false;
  } else {
    v_346 = sub_133;
  };
  if (controller_c_air_2) {
    sub_132 = sub_133;
  } else {
    sub_132 = v_346;
  };
  if (controller_c_air_1) {
    v_345 = false;
  } else {
    v_345 = sub_134;
  };
  if (controller_v_271) {
    sub_138 = v_345;
  } else {
    sub_138 = false;
  };
  if (controller_v_272) {
    sub_131 = sub_138;
  } else {
    sub_131 = sub_132;
  };
  if (controller_c_pc) {
    sub_130 = false;
  } else {
    sub_130 = sub_131;
  };
  if (controller_c_closet) {
    sub_129 = false;
  } else {
    sub_129 = sub_130;
  };
  if (controller_blind_failed_recovered) {
    v_349 = sub_129;
    sub_122 = sub_123;
  } else {
    v_349 = sub_123;
    sub_122 = sub_129;
  };
  if (controller_ck_44_1) {
    sub_121 = v_349;
  } else {
    sub_121 = sub_122;
  };
  if (controller_ck_37_1) {
    sub_103 = sub_121;
    v_344 = sub_104;
  } else {
    sub_103 = sub_104;
    v_344 = sub_121;
  };
  if (controller_c_light_1) {
    sub_139 = v_344;
  } else {
    sub_139 = sub_103;
  };
  if (controller_light_switch) {
    v_352 = sub_103;
  } else {
    v_352 = sub_139;
  };
  if (controller_c_light_2) {
    sub_102 = v_352;
  } else {
    sub_102 = sub_139;
  };
  sub_141 = sub_106;
  sub_142 = sub_123;
  if (controller_ck_37_1) {
    sub_140 = sub_142;
    v_343 = sub_141;
  } else {
    sub_140 = sub_141;
    v_343 = sub_142;
  };
  if (controller_c_light_1) {
    sub_143 = v_343;
  } else {
    sub_143 = sub_140;
  };
  if (controller_light_switch) {
    v_353 = sub_140;
  } else {
    v_353 = sub_143;
  };
  if (controller_c_light_2) {
    v_354 = v_353;
  } else {
    v_354 = sub_143;
  };
  if (controller_ck_42_1) {
    sub_101 = v_354;
  } else {
    sub_101 = sub_102;
  };
  sub_100 = sub_101;
  if (controller_air_failed_recovered) {
    v_368 = sub_100;
    sub_52 = sub_53;
  } else {
    v_368 = sub_53;
    sub_52 = sub_100;
  };
  if (controller_ck_34_1) {
    sub_51 = v_368;
  } else {
    sub_51 = sub_52;
  };
  if (controller_cleaner) {
    v_380 = sub_51;
    sub_6 = sub_7;
  } else {
    v_380 = sub_7;
    sub_6 = sub_51;
  };
  if (controller_ck_25_1) {
    sub_5 = v_380;
  } else {
    sub_5 = sub_6;
  };
  if (controller_c_pc) {
    v_337 = sub_108;
  } else {
    v_337 = sub_22;
  };
  sub_156 = sub_22;
  if (controller_c_window) {
    sub_155 = v_337;
  } else {
    sub_155 = sub_156;
  };
  sub_154 = sub_155;
  if (controller_c_pc) {
    v_336 = sub_115;
  } else {
    v_336 = sub_43;
  };
  sub_159 = sub_43;
  if (controller_c_window) {
    sub_158 = v_336;
  } else {
    sub_158 = sub_159;
  };
  sub_157 = sub_158;
  if (controller_blind_failed_recovered) {
    sub_153 = sub_154;
    sub_160 = sub_157;
  } else {
    sub_153 = sub_157;
    sub_160 = sub_154;
  };
  if (controller_ck_44_1) {
    sub_152 = sub_160;
  } else {
    sub_152 = sub_153;
  };
  if (controller_light_failed_recovered) {
    sub_168 = sub_27;
  } else {
    sub_168 = sub_26;
  };
  sub_167 = sub_168;
  if (controller_c_air_1) {
    v_329 = sub_167;
    sub_166 = sub_24;
    sub_169 = sub_167;
  } else {
    v_329 = sub_24;
    sub_166 = sub_167;
    sub_169 = false;
  };
  if (controller_v_271) {
    v_328 = sub_169;
  } else {
    v_328 = sub_166;
  };
  if (controller_c_air_2) {
    sub_165 = sub_110;
  } else {
    sub_165 = v_328;
  };
  sub_170 = sub_167;
  if (controller_v_271) {
    v_331 = sub_112;
    v_330 = v_329;
  } else {
    v_331 = sub_170;
    v_330 = sub_170;
  };
  if (controller_c_air_2) {
    v_332 = v_330;
  } else {
    v_332 = v_331;
  };
  if (controller_v_272) {
    v_333 = v_332;
  } else {
    v_333 = sub_165;
  };
  if (controller_c_pc) {
    v_334 = v_333;
  } else {
    v_334 = sub_15;
  };
  if (controller_c_window) {
    sub_164 = v_334;
  } else {
    sub_164 = sub_15;
  };
  sub_163 = sub_164;
  if (controller_v_271) {
    v_324 = sub_119;
  } else {
    v_324 = sub_170;
  };
  if (controller_c_air_1) {
    v_322 = sub_167;
  } else {
    v_322 = sub_45;
  };
  if (controller_v_271) {
    v_323 = v_322;
  } else {
    v_323 = sub_170;
  };
  if (controller_c_air_2) {
    v_325 = v_323;
  } else {
    v_325 = v_324;
  };
  if (controller_c_air_1) {
    sub_174 = sub_45;
  } else {
    sub_174 = sub_167;
  };
  if (controller_v_271) {
    v_321 = sub_169;
  } else {
    v_321 = sub_174;
  };
  if (controller_c_air_2) {
    sub_173 = sub_117;
  } else {
    sub_173 = v_321;
  };
  if (controller_v_272) {
    v_326 = v_325;
  } else {
    v_326 = sub_173;
  };
  sub_176 = sub_134;
  sub_175 = sub_176;
  if (controller_c_pc) {
    v_327 = v_326;
  } else {
    v_327 = sub_175;
  };
  if (controller_c_window) {
    sub_172 = v_327;
  } else {
    sub_172 = sub_175;
  };
  sub_171 = sub_172;
  if (controller_blind_failed_recovered) {
    v_335 = sub_171;
    sub_162 = sub_163;
  } else {
    v_335 = sub_163;
    sub_162 = sub_171;
  };
  if (controller_ck_44_1) {
    sub_161 = v_335;
  } else {
    sub_161 = sub_162;
  };
  if (controller_ck_37_1) {
    sub_151 = sub_161;
    v_320 = sub_152;
  } else {
    sub_151 = sub_152;
    v_320 = sub_161;
  };
  if (controller_c_light_1) {
    sub_177 = v_320;
  } else {
    sub_177 = sub_151;
  };
  if (controller_light_switch) {
    v_338 = sub_151;
  } else {
    v_338 = sub_177;
  };
  if (controller_c_light_2) {
    sub_150 = v_338;
  } else {
    sub_150 = sub_177;
  };
  sub_179 = sub_154;
  sub_180 = sub_163;
  if (controller_ck_37_1) {
    sub_178 = sub_180;
    v_319 = sub_179;
  } else {
    sub_178 = sub_179;
    v_319 = sub_180;
  };
  if (controller_c_light_1) {
    sub_181 = v_319;
  } else {
    sub_181 = sub_178;
  };
  if (controller_light_switch) {
    v_339 = sub_178;
  } else {
    v_339 = sub_181;
  };
  if (controller_c_light_2) {
    v_340 = v_339;
  } else {
    v_340 = sub_181;
  };
  if (controller_ck_42_1) {
    sub_149 = v_340;
  } else {
    sub_149 = sub_150;
  };
  sub_148 = sub_149;
  if (controller_air_failed_recovered) {
    v_341 = sub_148;
    sub_147 = sub_53;
  } else {
    v_341 = sub_53;
    sub_147 = sub_148;
  };
  if (controller_ck_34_1) {
    sub_146 = v_341;
  } else {
    sub_146 = sub_147;
  };
  if (controller_cleaner) {
    v_342 = sub_51;
    sub_145 = sub_146;
  } else {
    v_342 = sub_146;
    sub_145 = sub_51;
  };
  if (controller_ck_25_1) {
    sub_144 = v_342;
  } else {
    sub_144 = sub_145;
  };
  if (controller_worker) {
    v_381 = sub_144;
    sub_4 = sub_5;
  } else {
    v_381 = sub_5;
    sub_4 = sub_144;
  };
  if (controller_ck_23_1) {
    sub_3 = v_381;
  } else {
    sub_3 = sub_4;
  };
  if (controller_blind_failed_recovered) {
    sub_194 = sub_97;
    sub_195 = sub_82;
  } else {
    sub_194 = sub_82;
    sub_195 = sub_97;
  };
  if (controller_ck_44_1) {
    sub_193 = sub_195;
  } else {
    sub_193 = sub_194;
  };
  sub_192 = sub_193;
  sub_191 = sub_192;
  sub_190 = sub_191;
  sub_198 = sub_97;
  sub_197 = sub_198;
  sub_196 = sub_197;
  if (controller_ck_42_1) {
    sub_189 = sub_196;
  } else {
    sub_189 = sub_190;
  };
  sub_188 = sub_189;
  if (controller_air_failed_recovered) {
    v_316 = sub_100;
    sub_187 = sub_188;
  } else {
    v_316 = sub_188;
    sub_187 = sub_100;
  };
  if (controller_ck_34_1) {
    sub_186 = v_316;
  } else {
    sub_186 = sub_187;
  };
  if (controller_cleaner) {
    v_317 = sub_186;
    sub_185 = sub_7;
  } else {
    v_317 = sub_7;
    sub_185 = sub_186;
  };
  if (controller_ck_25_1) {
    sub_184 = v_317;
  } else {
    sub_184 = sub_185;
  };
  sub_210 = sub_156;
  sub_209 = sub_210;
  sub_213 = sub_115;
  sub_212 = sub_213;
  sub_211 = sub_212;
  if (controller_blind_failed_recovered) {
    v_310 = sub_211;
    sub_208 = sub_209;
  } else {
    v_310 = sub_209;
    sub_208 = sub_211;
  };
  if (controller_ck_44_1) {
    sub_207 = v_310;
  } else {
    sub_207 = sub_208;
  };
  if (controller_c_air_1) {
    sub_221 = sub_17;
  } else {
    sub_221 = sub_24;
  };
  if (controller_v_271) {
    v_308 = sub_23;
  } else {
    v_308 = sub_221;
  };
  if (controller_c_air_2) {
    sub_220 = sub_221;
  } else {
    sub_220 = v_308;
  };
  if (controller_c_air_1) {
    v_307 = sub_24;
  } else {
    v_307 = sub_17;
  };
  if (controller_v_271) {
    sub_222 = v_307;
  } else {
    sub_222 = sub_23;
  };
  if (controller_v_272) {
    sub_219 = sub_222;
  } else {
    sub_219 = sub_220;
  };
  sub_218 = sub_219;
  sub_217 = sub_218;
  sub_216 = sub_217;
  sub_225 = sub_131;
  sub_224 = sub_225;
  sub_223 = sub_224;
  if (controller_blind_failed_recovered) {
    v_309 = sub_223;
    sub_215 = sub_216;
  } else {
    v_309 = sub_216;
    sub_215 = sub_223;
  };
  if (controller_ck_44_1) {
    sub_214 = v_309;
  } else {
    sub_214 = sub_215;
  };
  if (controller_ck_37_1) {
    sub_206 = sub_214;
    v_306 = sub_207;
  } else {
    sub_206 = sub_207;
    v_306 = sub_214;
  };
  if (controller_c_light_1) {
    sub_226 = v_306;
  } else {
    sub_226 = sub_206;
  };
  if (controller_light_switch) {
    v_311 = sub_206;
  } else {
    v_311 = sub_226;
  };
  if (controller_c_light_2) {
    sub_205 = v_311;
  } else {
    sub_205 = sub_226;
  };
  sub_232 = sub_108;
  sub_231 = sub_232;
  sub_230 = sub_231;
  if (controller_blind_failed_recovered) {
    v_305 = sub_230;
    sub_229 = sub_209;
  } else {
    v_305 = sub_209;
    sub_229 = sub_230;
  };
  if (controller_ck_44_1) {
    sub_228 = v_305;
  } else {
    sub_228 = sub_229;
  };
  sub_237 = sub_125;
  sub_236 = sub_237;
  sub_235 = sub_236;
  if (controller_blind_failed_recovered) {
    v_304 = sub_235;
    sub_234 = sub_216;
  } else {
    v_304 = sub_216;
    sub_234 = sub_235;
  };
  if (controller_ck_44_1) {
    sub_233 = v_304;
  } else {
    sub_233 = sub_234;
  };
  if (controller_ck_37_1) {
    sub_227 = sub_233;
    v_303 = sub_228;
  } else {
    sub_227 = sub_228;
    v_303 = sub_233;
  };
  if (controller_c_light_1) {
    sub_238 = v_303;
  } else {
    sub_238 = sub_227;
  };
  if (controller_light_switch) {
    v_312 = sub_227;
  } else {
    v_312 = sub_238;
  };
  if (controller_c_light_2) {
    v_313 = v_312;
  } else {
    v_313 = sub_238;
  };
  if (controller_ck_42_1) {
    sub_204 = v_313;
  } else {
    sub_204 = sub_205;
  };
  sub_203 = sub_204;
  if (controller_air_failed_recovered) {
    v_314 = sub_203;
    sub_202 = sub_188;
  } else {
    v_314 = sub_188;
    sub_202 = sub_203;
  };
  if (controller_ck_34_1) {
    sub_201 = v_314;
  } else {
    sub_201 = sub_202;
  };
  if (controller_cleaner) {
    v_315 = sub_186;
    sub_200 = sub_201;
  } else {
    v_315 = sub_201;
    sub_200 = sub_186;
  };
  if (controller_ck_25_1) {
    sub_199 = v_315;
  } else {
    sub_199 = sub_200;
  };
  if (controller_worker) {
    v_318 = sub_199;
    sub_183 = sub_184;
  } else {
    v_318 = sub_184;
    sub_183 = sub_199;
  };
  if (controller_ck_23_1) {
    sub_182 = v_318;
  } else {
    sub_182 = sub_183;
  };
  if (controller_change_shift) {
    v_382 = sub_182;
    sub_2 = sub_3;
  } else {
    v_382 = sub_3;
    sub_2 = sub_182;
  };
  if (controller_ck_1) {
    sub_1 = v_382;
  } else {
    sub_1 = sub_2;
  };
  sub_248 = sub_32;
  sub_249 = sub_41;
  if (controller_ck_37_1) {
    sub_247 = sub_249;
    v_298 = sub_248;
  } else {
    sub_247 = sub_248;
    v_298 = sub_249;
  };
  if (controller_c_light_1) {
    sub_250 = v_298;
  } else {
    sub_250 = sub_247;
  };
  if (controller_light_switch) {
    v_299 = sub_247;
  } else {
    v_299 = sub_250;
  };
  if (controller_c_light_2) {
    sub_246 = v_299;
  } else {
    sub_246 = sub_250;
  };
  if (controller_ck_44_1) {
    sub_253 = sub_31;
    sub_254 = sub_40;
  } else {
    sub_253 = sub_38;
    sub_254 = sub_49;
  };
  if (controller_ck_37_1) {
    sub_252 = sub_254;
    v_296 = sub_253;
  } else {
    sub_252 = sub_253;
    v_296 = sub_254;
  };
  if (controller_c_light_1) {
    sub_255 = v_296;
  } else {
    sub_255 = sub_252;
  };
  if (controller_light_switch) {
    v_297 = sub_252;
  } else {
    v_297 = sub_255;
  };
  if (controller_c_light_2) {
    sub_251 = v_297;
  } else {
    sub_251 = sub_255;
  };
  if (controller_ck_42_1) {
    v_300 = sub_246;
  } else {
    v_300 = sub_251;
  };
  if (controller_blind_switch) {
    sub_245 = sub_246;
  } else {
    sub_245 = v_300;
  };
  sub_244 = sub_245;
  sub_264 = sub_68;
  sub_263 = sub_264;
  if (controller_blind_failed_recovered) {
    v_290 = sub_66;
    sub_262 = sub_263;
  } else {
    v_290 = sub_263;
    sub_262 = sub_66;
  };
  if (controller_ck_44_1) {
    sub_261 = v_290;
  } else {
    sub_261 = sub_262;
  };
  sub_268 = sub_84;
  sub_267 = sub_268;
  if (controller_blind_failed_recovered) {
    v_289 = sub_82;
    sub_266 = sub_267;
  } else {
    v_289 = sub_267;
    sub_266 = sub_82;
  };
  if (controller_ck_44_1) {
    sub_265 = v_289;
  } else {
    sub_265 = sub_266;
  };
  if (controller_ck_37_1) {
    sub_260 = sub_265;
    v_288 = sub_261;
  } else {
    sub_260 = sub_261;
    v_288 = sub_265;
  };
  if (controller_c_light_1) {
    sub_269 = v_288;
  } else {
    sub_269 = sub_260;
  };
  if (controller_light_switch) {
    v_291 = sub_260;
  } else {
    v_291 = sub_269;
  };
  if (controller_c_light_2) {
    sub_259 = v_291;
  } else {
    sub_259 = sub_269;
  };
  if (controller_blind_failed_recovered) {
    v_287 = sub_93;
    sub_272 = sub_263;
  } else {
    v_287 = sub_263;
    sub_272 = sub_93;
  };
  if (controller_ck_44_1) {
    sub_271 = v_287;
  } else {
    sub_271 = sub_272;
  };
  if (controller_blind_failed_recovered) {
    v_286 = sub_97;
    sub_274 = sub_267;
  } else {
    v_286 = sub_267;
    sub_274 = sub_97;
  };
  if (controller_ck_44_1) {
    sub_273 = v_286;
  } else {
    sub_273 = sub_274;
  };
  if (controller_ck_37_1) {
    sub_270 = sub_273;
    v_285 = sub_271;
  } else {
    sub_270 = sub_271;
    v_285 = sub_273;
  };
  if (controller_c_light_1) {
    sub_275 = v_285;
  } else {
    sub_275 = sub_270;
  };
  if (controller_light_switch) {
    v_292 = sub_270;
  } else {
    v_292 = sub_275;
  };
  if (controller_c_light_2) {
    v_293 = v_292;
  } else {
    v_293 = sub_275;
  };
  if (controller_ck_42_1) {
    v_294 = v_293;
  } else {
    v_294 = sub_259;
  };
  if (controller_blind_switch) {
    sub_258 = sub_259;
  } else {
    sub_258 = v_294;
  };
  sub_279 = sub_113;
  if (controller_c_air_1) {
    sub_285 = sub_36;
  } else {
    sub_285 = false;
  };
  if (controller_v_271) {
    v_280 = false;
  } else {
    v_280 = sub_285;
  };
  if (controller_c_air_2) {
    sub_284 = sub_285;
  } else {
    sub_284 = v_280;
  };
  if (controller_c_air_1) {
    v_279 = false;
  } else {
    v_279 = sub_36;
  };
  if (controller_v_271) {
    sub_286 = v_279;
  } else {
    sub_286 = false;
  };
  if (controller_v_272) {
    sub_283 = sub_286;
  } else {
    sub_283 = sub_284;
  };
  if (controller_c_pc) {
    sub_282 = false;
  } else {
    sub_282 = sub_283;
  };
  if (controller_c_closet) {
    sub_281 = false;
  } else {
    sub_281 = sub_282;
  };
  sub_280 = sub_281;
  if (controller_ck_37_1) {
    sub_278 = sub_280;
    v_278 = sub_279;
  } else {
    sub_278 = sub_279;
    v_278 = sub_280;
  };
  if (controller_c_light_1) {
    sub_287 = v_278;
  } else {
    sub_287 = sub_278;
  };
  if (controller_light_switch) {
    v_281 = sub_278;
  } else {
    v_281 = sub_287;
  };
  if (controller_c_light_2) {
    sub_277 = v_281;
  } else {
    sub_277 = sub_287;
  };
  if (controller_ck_44_1) {
    sub_289 = sub_105;
  } else {
    sub_289 = sub_120;
  };
  if (controller_light_failed_recovered) {
    sub_298 = sub_137;
  } else {
    sub_298 = sub_136;
  };
  sub_297 = sub_298;
  if (controller_c_air_1) {
    sub_296 = sub_297;
  } else {
    sub_296 = false;
  };
  if (controller_v_271) {
    v_276 = false;
  } else {
    v_276 = sub_296;
  };
  if (controller_c_air_2) {
    sub_295 = sub_296;
  } else {
    sub_295 = v_276;
  };
  if (controller_c_air_1) {
    v_275 = false;
  } else {
    v_275 = sub_297;
  };
  if (controller_v_271) {
    sub_299 = v_275;
  } else {
    sub_299 = false;
  };
  if (controller_v_272) {
    sub_294 = sub_299;
  } else {
    sub_294 = sub_295;
  };
  if (controller_c_pc) {
    sub_293 = false;
  } else {
    sub_293 = sub_294;
  };
  if (controller_c_closet) {
    sub_292 = false;
  } else {
    sub_292 = sub_293;
  };
  if (controller_blind_failed_recovered) {
    v_277 = sub_292;
    sub_291 = sub_281;
  } else {
    v_277 = sub_281;
    sub_291 = sub_292;
  };
  if (controller_ck_44_1) {
    sub_290 = v_277;
  } else {
    sub_290 = sub_291;
  };
  if (controller_ck_37_1) {
    sub_288 = sub_290;
    v_274 = sub_289;
  } else {
    sub_288 = sub_289;
    v_274 = sub_290;
  };
  if (controller_c_light_1) {
    sub_300 = v_274;
  } else {
    sub_300 = sub_288;
  };
  if (controller_light_switch) {
    v_282 = sub_288;
  } else {
    v_282 = sub_300;
  };
  if (controller_c_light_2) {
    v_283 = v_282;
  } else {
    v_283 = sub_300;
  };
  if (controller_ck_42_1) {
    v_284 = v_283;
  } else {
    v_284 = sub_277;
  };
  if (controller_blind_switch) {
    sub_276 = sub_277;
  } else {
    sub_276 = v_284;
  };
  if (controller_air_failed_recovered) {
    v_295 = sub_276;
    sub_257 = sub_258;
  } else {
    v_295 = sub_258;
    sub_257 = sub_276;
  };
  if (controller_ck_34_1) {
    sub_256 = v_295;
  } else {
    sub_256 = sub_257;
  };
  if (controller_cleaner) {
    v_301 = sub_256;
    sub_243 = sub_244;
  } else {
    v_301 = sub_244;
    sub_243 = sub_256;
  };
  if (controller_ck_25_1) {
    sub_242 = v_301;
  } else {
    sub_242 = sub_243;
  };
  sub_308 = sub_157;
  if (controller_light_failed_recovered) {
    sub_315 = sub_48;
  } else {
    sub_315 = sub_47;
  };
  sub_314 = sub_315;
  if (controller_c_air_1) {
    v_262 = sub_314;
    sub_313 = sub_45;
    sub_316 = sub_314;
  } else {
    v_262 = sub_45;
    sub_313 = sub_314;
    sub_316 = false;
  };
  if (controller_v_271) {
    v_261 = sub_316;
  } else {
    v_261 = sub_313;
  };
  if (controller_c_air_2) {
    sub_312 = sub_117;
  } else {
    sub_312 = v_261;
  };
  sub_317 = sub_314;
  if (controller_v_271) {
    v_264 = sub_119;
    v_263 = v_262;
  } else {
    v_264 = sub_317;
    v_263 = sub_317;
  };
  if (controller_c_air_2) {
    v_265 = v_263;
  } else {
    v_265 = v_264;
  };
  if (controller_v_272) {
    v_266 = v_265;
  } else {
    v_266 = sub_312;
  };
  if (controller_c_pc) {
    v_267 = v_266;
  } else {
    v_267 = sub_34;
  };
  if (controller_c_window) {
    sub_311 = v_267;
  } else {
    sub_311 = sub_34;
  };
  sub_310 = sub_311;
  sub_309 = sub_310;
  if (controller_ck_37_1) {
    sub_307 = sub_309;
    v_260 = sub_308;
  } else {
    sub_307 = sub_308;
    v_260 = sub_309;
  };
  if (controller_c_light_1) {
    sub_318 = v_260;
  } else {
    sub_318 = sub_307;
  };
  if (controller_light_switch) {
    v_268 = sub_307;
  } else {
    v_268 = sub_318;
  };
  if (controller_c_light_2) {
    sub_306 = v_268;
  } else {
    sub_306 = sub_318;
  };
  if (controller_ck_44_1) {
    sub_320 = sub_153;
  } else {
    sub_320 = sub_160;
  };
  if (controller_v_271) {
    v_255 = sub_112;
  } else {
    v_255 = sub_317;
  };
  if (controller_c_air_1) {
    v_253 = sub_314;
  } else {
    v_253 = sub_24;
  };
  if (controller_v_271) {
    v_254 = v_253;
  } else {
    v_254 = sub_317;
  };
  if (controller_c_air_2) {
    v_256 = v_254;
  } else {
    v_256 = v_255;
  };
  if (controller_c_air_1) {
    sub_326 = sub_24;
  } else {
    sub_326 = sub_314;
  };
  if (controller_v_271) {
    v_252 = sub_316;
  } else {
    v_252 = sub_326;
  };
  if (controller_c_air_2) {
    sub_325 = sub_110;
  } else {
    sub_325 = v_252;
  };
  if (controller_v_272) {
    v_257 = v_256;
  } else {
    v_257 = sub_325;
  };
  sub_328 = sub_297;
  sub_327 = sub_328;
  if (controller_c_pc) {
    v_258 = v_257;
  } else {
    v_258 = sub_327;
  };
  if (controller_c_window) {
    sub_324 = v_258;
  } else {
    sub_324 = sub_327;
  };
  sub_323 = sub_324;
  if (controller_blind_failed_recovered) {
    v_259 = sub_323;
    sub_322 = sub_310;
  } else {
    v_259 = sub_310;
    sub_322 = sub_323;
  };
  if (controller_ck_44_1) {
    sub_321 = v_259;
  } else {
    sub_321 = sub_322;
  };
  if (controller_ck_37_1) {
    sub_319 = sub_321;
    v_251 = sub_320;
  } else {
    sub_319 = sub_320;
    v_251 = sub_321;
  };
  if (controller_c_light_1) {
    sub_329 = v_251;
  } else {
    sub_329 = sub_319;
  };
  if (controller_light_switch) {
    v_269 = sub_319;
  } else {
    v_269 = sub_329;
  };
  if (controller_c_light_2) {
    v_270 = v_269;
  } else {
    v_270 = sub_329;
  };
  if (controller_ck_42_1) {
    v_271 = v_270;
  } else {
    v_271 = sub_306;
  };
  if (controller_blind_switch) {
    sub_305 = sub_306;
  } else {
    sub_305 = v_271;
  };
  if (controller_air_failed_recovered) {
    v_272 = sub_305;
    sub_304 = sub_258;
  } else {
    v_272 = sub_258;
    sub_304 = sub_305;
  };
  if (controller_ck_34_1) {
    sub_303 = v_272;
  } else {
    sub_303 = sub_304;
  };
  if (controller_cleaner) {
    v_273 = sub_256;
    sub_302 = sub_303;
  } else {
    v_273 = sub_303;
    sub_302 = sub_256;
  };
  if (controller_ck_25_1) {
    sub_301 = v_273;
  } else {
    sub_301 = sub_302;
  };
  if (controller_worker) {
    v_302 = sub_301;
    sub_241 = sub_242;
  } else {
    v_302 = sub_242;
    sub_241 = sub_301;
  };
  if (controller_ck_23_1) {
    sub_240 = v_302;
  } else {
    sub_240 = sub_241;
  };
  sub_340 = sub_82;
  sub_339 = sub_340;
  sub_338 = sub_339;
  sub_337 = sub_338;
  if (controller_ck_44_1) {
    sub_343 = sub_194;
  } else {
    sub_343 = sub_195;
  };
  sub_342 = sub_343;
  sub_341 = sub_342;
  if (controller_ck_42_1) {
    v_247 = sub_341;
  } else {
    v_247 = sub_337;
  };
  if (controller_blind_switch) {
    sub_336 = sub_337;
  } else {
    sub_336 = v_247;
  };
  if (controller_air_failed_recovered) {
    v_248 = sub_276;
    sub_335 = sub_336;
  } else {
    v_248 = sub_336;
    sub_335 = sub_276;
  };
  if (controller_ck_34_1) {
    sub_334 = v_248;
  } else {
    sub_334 = sub_335;
  };
  if (controller_cleaner) {
    v_249 = sub_334;
    sub_333 = sub_244;
  } else {
    v_249 = sub_244;
    sub_333 = sub_334;
  };
  if (controller_ck_25_1) {
    sub_332 = v_249;
  } else {
    sub_332 = sub_333;
  };
  sub_354 = sub_159;
  sub_353 = sub_354;
  if (controller_blind_failed_recovered) {
    v_240 = sub_211;
    sub_352 = sub_353;
  } else {
    v_240 = sub_353;
    sub_352 = sub_211;
  };
  if (controller_ck_44_1) {
    sub_351 = v_240;
  } else {
    sub_351 = sub_352;
  };
  if (controller_c_air_1) {
    sub_362 = sub_36;
  } else {
    sub_362 = sub_45;
  };
  if (controller_v_271) {
    v_238 = sub_44;
  } else {
    v_238 = sub_362;
  };
  if (controller_c_air_2) {
    sub_361 = sub_362;
  } else {
    sub_361 = v_238;
  };
  if (controller_c_air_1) {
    v_237 = sub_45;
  } else {
    v_237 = sub_36;
  };
  if (controller_v_271) {
    sub_363 = v_237;
  } else {
    sub_363 = sub_44;
  };
  if (controller_v_272) {
    sub_360 = sub_363;
  } else {
    sub_360 = sub_361;
  };
  sub_359 = sub_360;
  sub_358 = sub_359;
  sub_357 = sub_358;
  sub_366 = sub_283;
  sub_365 = sub_366;
  sub_364 = sub_365;
  if (controller_blind_failed_recovered) {
    v_239 = sub_364;
    sub_356 = sub_357;
  } else {
    v_239 = sub_357;
    sub_356 = sub_364;
  };
  if (controller_ck_44_1) {
    sub_355 = v_239;
  } else {
    sub_355 = sub_356;
  };
  if (controller_ck_37_1) {
    sub_350 = sub_355;
    v_236 = sub_351;
  } else {
    sub_350 = sub_351;
    v_236 = sub_355;
  };
  if (controller_c_light_1) {
    sub_367 = v_236;
  } else {
    sub_367 = sub_350;
  };
  if (controller_light_switch) {
    v_241 = sub_350;
  } else {
    v_241 = sub_367;
  };
  if (controller_c_light_2) {
    sub_349 = v_241;
  } else {
    sub_349 = sub_367;
  };
  if (controller_blind_failed_recovered) {
    v_235 = sub_230;
    sub_370 = sub_353;
  } else {
    v_235 = sub_353;
    sub_370 = sub_230;
  };
  if (controller_ck_44_1) {
    sub_369 = v_235;
  } else {
    sub_369 = sub_370;
  };
  sub_375 = sub_294;
  sub_374 = sub_375;
  sub_373 = sub_374;
  if (controller_blind_failed_recovered) {
    v_234 = sub_373;
    sub_372 = sub_357;
  } else {
    v_234 = sub_357;
    sub_372 = sub_373;
  };
  if (controller_ck_44_1) {
    sub_371 = v_234;
  } else {
    sub_371 = sub_372;
  };
  if (controller_ck_37_1) {
    sub_368 = sub_371;
    v = sub_369;
  } else {
    sub_368 = sub_369;
    v = sub_371;
  };
  if (controller_c_light_1) {
    sub_376 = v;
  } else {
    sub_376 = sub_368;
  };
  if (controller_light_switch) {
    v_242 = sub_368;
  } else {
    v_242 = sub_376;
  };
  if (controller_c_light_2) {
    v_243 = v_242;
  } else {
    v_243 = sub_376;
  };
  if (controller_ck_42_1) {
    v_244 = v_243;
  } else {
    v_244 = sub_349;
  };
  if (controller_blind_switch) {
    sub_348 = sub_349;
  } else {
    sub_348 = v_244;
  };
  if (controller_air_failed_recovered) {
    v_245 = sub_348;
    sub_347 = sub_336;
  } else {
    v_245 = sub_336;
    sub_347 = sub_348;
  };
  if (controller_ck_34_1) {
    sub_346 = v_245;
  } else {
    sub_346 = sub_347;
  };
  if (controller_cleaner) {
    v_246 = sub_334;
    sub_345 = sub_346;
  } else {
    v_246 = sub_346;
    sub_345 = sub_334;
  };
  if (controller_ck_25_1) {
    sub_344 = v_246;
  } else {
    sub_344 = sub_345;
  };
  if (controller_worker) {
    v_250 = sub_344;
    sub_331 = sub_332;
  } else {
    v_250 = sub_332;
    sub_331 = sub_344;
  };
  if (controller_ck_23_1) {
    sub_330 = v_250;
  } else {
    sub_330 = sub_331;
  };
  if (controller_change_shift) {
    v_383 = sub_330;
    sub_239 = sub_240;
  } else {
    v_383 = sub_240;
    sub_239 = sub_330;
  };
  if (controller_ck_1) {
    v_384 = v_383;
  } else {
    v_384 = sub_239;
  };
  if (p_controller_c_blind_1) {
    sub_0 = v_384;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_blind_1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_light_2_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered, int controller_ck_1,
  int controller_pnr_14, int controller_ck_19_1, int controller_pnr_13,
  int controller_ck_21_1, int controller_pnr_12, int controller_ck_23_1,
  int controller_pnr_11, int controller_ck_25_1, int controller_pnr_10,
  int controller_ck_27_1, int controller_pnr_9, int controller_ck_29_1,
  int controller_pnr_8, int controller_v_272, int controller_v_271,
  int controller_pnr_7, int controller_ck_34_1, int controller_pnr_6,
  int controller_ck_37_1, int controller_pnr_5, int controller_ck_39_1,
  int controller_pnr_4, int controller_ck_42_1, int controller_pnr_3,
  int controller_ck_44_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_light_1, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_2_out* _out) {
  
  int v_522;
  int v_521;
  int v_520;
  int v_519;
  int v_518;
  int v_517;
  int v_516;
  int v_515;
  int v_514;
  int v_513;
  int v_512;
  int v_511;
  int v_510;
  int v_509;
  int v_508;
  int v_507;
  int v_506;
  int v_505;
  int v_504;
  int v_503;
  int v_502;
  int v_501;
  int v_500;
  int v_499;
  int v_498;
  int v_497;
  int v_496;
  int v_495;
  int v_494;
  int v_493;
  int v_492;
  int v_491;
  int v_490;
  int v_489;
  int v_488;
  int v_487;
  int v_486;
  int v_485;
  int v_484;
  int v_483;
  int v_482;
  int v_481;
  int v_480;
  int v_479;
  int v_478;
  int v_477;
  int v_476;
  int v_475;
  int v_474;
  int v_473;
  int v_472;
  int v_471;
  int v_470;
  int v_469;
  int v_468;
  int v_467;
  int v_466;
  int v_465;
  int v_464;
  int v_463;
  int v_462;
  int v_461;
  int v_460;
  int v_459;
  int v_458;
  int v_457;
  int v_456;
  int v_455;
  int v_454;
  int v_453;
  int v_452;
  int v_451;
  int v_450;
  int v_449;
  int v_448;
  int v_447;
  int v_446;
  int v_445;
  int v_444;
  int v_443;
  int v_442;
  int v_441;
  int v_440;
  int v_439;
  int v_438;
  int v_437;
  int v_436;
  int v_435;
  int v_434;
  int v_433;
  int v_432;
  int v_431;
  int v_430;
  int v_429;
  int v_428;
  int v_427;
  int v_426;
  int v_425;
  int v_424;
  int v_423;
  int v_422;
  int v_421;
  int v_420;
  int v_419;
  int v_418;
  int v_417;
  int v_416;
  int v_415;
  int v_414;
  int v_413;
  int v_412;
  int v_411;
  int v_410;
  int v_409;
  int v_408;
  int v_407;
  int v_406;
  int v_405;
  int v_404;
  int v_403;
  int v_402;
  int v_401;
  int v_400;
  int v_399;
  int v_398;
  int v_397;
  int v_396;
  int v_395;
  int v_394;
  int v_393;
  int v_392;
  int v_391;
  int v_390;
  int v_389;
  int v_388;
  int v_387;
  int v_386;
  int v_385;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  int sub_230;
  int sub_231;
  int sub_232;
  int sub_233;
  int sub_234;
  int sub_235;
  int sub_236;
  int sub_237;
  int sub_238;
  int sub_239;
  int sub_240;
  int sub_241;
  int sub_242;
  int sub_243;
  int sub_244;
  int sub_245;
  int sub_246;
  int sub_247;
  int sub_248;
  int sub_249;
  int sub_250;
  int sub_251;
  int sub_252;
  int sub_253;
  int sub_254;
  int sub_255;
  int sub_256;
  int sub_257;
  int sub_258;
  int sub_259;
  int sub_260;
  int sub_261;
  int sub_262;
  int sub_263;
  int sub_264;
  int sub_265;
  int sub_266;
  int sub_267;
  int sub_268;
  int sub_269;
  int sub_270;
  int sub_271;
  int sub_272;
  int sub_273;
  int sub_274;
  int sub_275;
  int sub_276;
  int sub_277;
  int sub_278;
  int sub_279;
  int sub_280;
  int sub_281;
  int sub_282;
  int sub_283;
  int sub_284;
  int sub_285;
  int sub_286;
  int sub_287;
  int sub_288;
  int sub_289;
  int sub_290;
  int sub_291;
  int sub_292;
  int sub_293;
  int sub_294;
  int sub_295;
  int sub_296;
  int sub_297;
  int sub_298;
  int sub_299;
  int sub_300;
  int sub_301;
  int sub_302;
  int sub_303;
  int sub_304;
  int sub_305;
  int sub_306;
  int sub_307;
  int sub_308;
  int sub_309;
  int sub_310;
  int sub_311;
  int sub_312;
  int sub_313;
  int sub_314;
  int sub_315;
  int sub_316;
  int sub_317;
  int sub_318;
  int sub_319;
  int sub_320;
  int sub_321;
  int sub_322;
  int sub_323;
  int sub_324;
  int sub_325;
  int sub_326;
  int sub_327;
  int sub_328;
  int sub_329;
  int sub_330;
  int sub_331;
  int sub_332;
  int sub_333;
  int sub_334;
  sub_17 = controller_ck_39_1;
  sub_18 = !(controller_ck_39_1);
  if (controller_light_failed_recovered) {
    sub_16 = sub_17;
  } else {
    sub_16 = sub_18;
  };
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  if (controller_c_pc) {
    v_513 = false;
  } else {
    v_513 = sub_13;
  };
  if (controller_c_window) {
    sub_12 = v_513;
  } else {
    sub_12 = false;
  };
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_25 = false;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  if (controller_c_pc) {
    v_512 = false;
  } else {
    v_512 = sub_22;
  };
  if (controller_c_window) {
    sub_21 = v_512;
  } else {
    sub_21 = false;
  };
  sub_20 = sub_21;
  sub_19 = sub_20;
  if (controller_ck_37_1) {
    v_514 = sub_19;
  } else {
    v_514 = sub_10;
  };
  sub_34 = (controller_ck_39_1&&false);
  v_510 = !(controller_ck_39_1);
  sub_35 = (v_510&&false);
  if (controller_light_failed_recovered) {
    sub_33 = sub_34;
  } else {
    sub_33 = sub_35;
  };
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  if (controller_c_pc) {
    v_511 = false;
  } else {
    v_511 = sub_30;
  };
  if (controller_c_window) {
    sub_29 = v_511;
  } else {
    sub_29 = false;
  };
  sub_28 = sub_29;
  sub_27 = sub_28;
  if (controller_ck_37_1) {
    v_516 = sub_19;
    sub_26 = sub_27;
  } else {
    v_516 = sub_27;
    sub_26 = sub_19;
  };
  if (controller_c_light_1) {
    v_517 = v_516;
    v_515 = v_514;
  } else {
    v_517 = sub_26;
    v_515 = sub_26;
  };
  if (controller_light_switch) {
    sub_9 = v_515;
  } else {
    sub_9 = v_517;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (controller_c_door) {
    v_501 = false;
    sub_48 = sub_25;
  } else {
    v_501 = sub_25;
    sub_48 = false;
  };
  if (controller_ck_19_1) {
    sub_47 = v_501;
  } else {
    sub_47 = sub_48;
  };
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  if (controller_c_window) {
    sub_50 = false;
  } else {
    sub_50 = sub_44;
  };
  sub_49 = sub_50;
  if (controller_blind_failed_recovered) {
    v_502 = sub_49;
    sub_41 = sub_42;
  } else {
    v_502 = sub_42;
    sub_41 = sub_49;
  };
  if (controller_ck_44_1) {
    sub_40 = v_502;
  } else {
    sub_40 = sub_41;
  };
  if (controller_c_door) {
    v_500 = false;
    sub_58 = sub_16;
  } else {
    v_500 = sub_16;
    sub_58 = false;
  };
  if (controller_ck_19_1) {
    sub_57 = v_500;
  } else {
    sub_57 = sub_58;
  };
  sub_56 = sub_57;
  sub_55 = sub_56;
  sub_54 = sub_55;
  sub_53 = sub_54;
  sub_52 = sub_53;
  if (controller_c_window) {
    sub_60 = false;
  } else {
    sub_60 = sub_54;
  };
  sub_59 = sub_60;
  if (controller_blind_failed_recovered) {
    v_503 = sub_59;
    sub_51 = sub_52;
  } else {
    v_503 = sub_52;
    sub_51 = sub_59;
  };
  if (controller_ck_44_1) {
    v_504 = v_503;
  } else {
    v_504 = sub_51;
  };
  if (controller_ck_37_1) {
    v_505 = v_504;
  } else {
    v_505 = sub_40;
  };
  if (controller_c_door) {
    v_498 = false;
    sub_70 = sub_33;
  } else {
    v_498 = sub_33;
    sub_70 = false;
  };
  if (controller_ck_19_1) {
    sub_69 = v_498;
  } else {
    sub_69 = sub_70;
  };
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_66 = sub_67;
  sub_65 = sub_66;
  sub_64 = sub_65;
  if (controller_c_window) {
    sub_72 = false;
  } else {
    sub_72 = sub_66;
  };
  sub_71 = sub_72;
  if (controller_blind_failed_recovered) {
    v_499 = sub_71;
    sub_63 = sub_64;
  } else {
    v_499 = sub_64;
    sub_63 = sub_71;
  };
  if (controller_ck_44_1) {
    sub_62 = v_499;
  } else {
    sub_62 = sub_63;
  };
  if (controller_ck_37_1) {
    v_507 = sub_62;
    sub_61 = sub_40;
  } else {
    v_507 = sub_40;
    sub_61 = sub_62;
  };
  if (controller_c_light_1) {
    v_508 = v_507;
    v_506 = v_505;
  } else {
    v_508 = sub_61;
    v_506 = sub_61;
  };
  if (controller_light_switch) {
    sub_39 = v_506;
  } else {
    sub_39 = v_508;
  };
  sub_38 = sub_39;
  if (controller_c_air_1) {
    sub_80 = sub_24;
  } else {
    sub_80 = false;
  };
  if (controller_v_271) {
    v_493 = false;
  } else {
    v_493 = sub_80;
  };
  if (controller_c_air_2) {
    sub_79 = sub_80;
  } else {
    sub_79 = v_493;
  };
  if (controller_c_air_1) {
    v_492 = false;
  } else {
    v_492 = sub_24;
  };
  if (controller_v_271) {
    sub_81 = v_492;
  } else {
    sub_81 = false;
  };
  if (controller_v_272) {
    sub_78 = sub_81;
  } else {
    sub_78 = sub_79;
  };
  if (controller_c_pc) {
    sub_77 = false;
  } else {
    sub_77 = sub_78;
  };
  if (controller_c_closet) {
    sub_76 = false;
  } else {
    sub_76 = sub_77;
  };
  sub_75 = sub_76;
  if (controller_c_air_1) {
    sub_86 = sub_15;
  } else {
    sub_86 = false;
  };
  if (controller_v_271) {
    v_491 = false;
  } else {
    v_491 = sub_86;
  };
  if (controller_c_air_2) {
    sub_85 = sub_86;
  } else {
    sub_85 = v_491;
  };
  if (controller_c_air_1) {
    v_490 = false;
  } else {
    v_490 = sub_15;
  };
  if (controller_v_271) {
    sub_87 = v_490;
  } else {
    sub_87 = false;
  };
  if (controller_v_272) {
    sub_84 = sub_87;
  } else {
    sub_84 = sub_85;
  };
  if (controller_c_pc) {
    sub_83 = false;
  } else {
    sub_83 = sub_84;
  };
  if (controller_c_closet) {
    sub_82 = false;
  } else {
    sub_82 = sub_83;
  };
  if (controller_ck_37_1) {
    v_494 = sub_82;
  } else {
    v_494 = sub_75;
  };
  if (controller_c_air_1) {
    sub_94 = sub_32;
  } else {
    sub_94 = false;
  };
  if (controller_v_271) {
    v_489 = false;
  } else {
    v_489 = sub_94;
  };
  if (controller_c_air_2) {
    sub_93 = sub_94;
  } else {
    sub_93 = v_489;
  };
  if (controller_c_air_1) {
    sub_96 = false;
  } else {
    sub_96 = sub_32;
  };
  if (controller_v_271) {
    sub_95 = sub_96;
  } else {
    sub_95 = false;
  };
  if (controller_v_272) {
    sub_92 = sub_95;
  } else {
    sub_92 = sub_93;
  };
  if (controller_c_pc) {
    sub_91 = false;
  } else {
    sub_91 = sub_92;
  };
  if (controller_c_closet) {
    sub_90 = false;
  } else {
    sub_90 = sub_91;
  };
  sub_89 = sub_90;
  if (controller_ck_37_1) {
    v_496 = sub_89;
    sub_88 = sub_75;
  } else {
    v_496 = sub_75;
    sub_88 = sub_89;
  };
  if (controller_c_light_1) {
    v_497 = v_496;
    v_495 = v_494;
  } else {
    v_497 = sub_88;
    v_495 = sub_88;
  };
  if (controller_light_switch) {
    sub_74 = v_495;
  } else {
    sub_74 = v_497;
  };
  sub_73 = sub_74;
  if (controller_air_failed_recovered) {
    v_509 = sub_73;
    sub_37 = sub_38;
  } else {
    v_509 = sub_38;
    sub_37 = sub_73;
  };
  if (controller_ck_34_1) {
    sub_36 = v_509;
  } else {
    sub_36 = sub_37;
  };
  if (controller_cleaner) {
    v_518 = sub_36;
    sub_6 = sub_7;
  } else {
    v_518 = sub_7;
    sub_6 = sub_36;
  };
  if (controller_ck_25_1) {
    sub_5 = v_518;
  } else {
    sub_5 = sub_6;
  };
  if (controller_light_failed_recovered) {
    sub_109 = sub_35;
  } else {
    sub_109 = sub_34;
  };
  sub_108 = sub_109;
  if (controller_c_air_1) {
    v_477 = sub_108;
    sub_107 = sub_32;
    sub_110 = sub_108;
  } else {
    v_477 = sub_32;
    sub_107 = sub_108;
    sub_110 = false;
  };
  if (controller_v_271) {
    v_476 = sub_110;
  } else {
    v_476 = sub_107;
  };
  if (controller_c_air_2) {
    sub_106 = sub_94;
  } else {
    sub_106 = v_476;
  };
  sub_111 = sub_108;
  if (controller_v_271) {
    v_479 = sub_96;
    v_478 = v_477;
  } else {
    v_479 = sub_111;
    v_478 = sub_111;
  };
  if (controller_c_air_2) {
    v_480 = v_478;
  } else {
    v_480 = v_479;
  };
  if (controller_v_272) {
    v_481 = v_480;
  } else {
    v_481 = sub_106;
  };
  if (controller_c_pc) {
    v_482 = v_481;
  } else {
    v_482 = sub_22;
  };
  if (controller_c_window) {
    sub_105 = v_482;
  } else {
    sub_105 = sub_22;
  };
  sub_104 = sub_105;
  sub_103 = sub_104;
  sub_118 = (controller_ck_39_1||false);
  v_468 = !(controller_ck_39_1);
  sub_119 = (v_468||false);
  if (controller_light_failed_recovered) {
    sub_117 = sub_118;
  } else {
    sub_117 = sub_119;
  };
  sub_116 = sub_117;
  if (controller_c_air_1) {
    v_470 = sub_116;
    sub_115 = sub_32;
    sub_120 = sub_116;
  } else {
    v_470 = sub_32;
    sub_115 = sub_116;
    sub_120 = false;
  };
  if (controller_v_271) {
    v_469 = sub_120;
  } else {
    v_469 = sub_115;
  };
  if (controller_c_air_2) {
    sub_114 = sub_94;
  } else {
    sub_114 = v_469;
  };
  sub_121 = sub_116;
  if (controller_v_271) {
    v_472 = sub_96;
    v_471 = v_470;
  } else {
    v_472 = sub_121;
    v_471 = sub_121;
  };
  if (controller_c_air_2) {
    v_473 = v_471;
  } else {
    v_473 = v_472;
  };
  if (controller_v_272) {
    v_474 = v_473;
  } else {
    v_474 = sub_114;
  };
  if (controller_c_pc) {
    v_475 = v_474;
  } else {
    v_475 = sub_13;
  };
  if (controller_c_window) {
    sub_113 = v_475;
  } else {
    sub_113 = sub_13;
  };
  sub_112 = sub_113;
  if (controller_ck_37_1) {
    v_483 = sub_112;
  } else {
    v_483 = sub_103;
  };
  if (controller_c_pc) {
    v_467 = sub_92;
  } else {
    v_467 = sub_30;
  };
  sub_126 = sub_30;
  if (controller_c_window) {
    sub_125 = v_467;
  } else {
    sub_125 = sub_126;
  };
  sub_124 = sub_125;
  sub_123 = sub_124;
  if (controller_ck_37_1) {
    v_485 = sub_123;
    sub_122 = sub_103;
  } else {
    v_485 = sub_103;
    sub_122 = sub_123;
  };
  if (controller_c_light_1) {
    v_486 = v_485;
    v_484 = v_483;
  } else {
    v_486 = sub_122;
    v_484 = sub_122;
  };
  if (controller_light_switch) {
    sub_102 = v_484;
  } else {
    sub_102 = v_486;
  };
  sub_101 = sub_102;
  if (controller_air_failed_recovered) {
    v_487 = sub_101;
    sub_100 = sub_38;
  } else {
    v_487 = sub_38;
    sub_100 = sub_101;
  };
  if (controller_ck_34_1) {
    sub_99 = v_487;
  } else {
    sub_99 = sub_100;
  };
  if (controller_cleaner) {
    v_488 = sub_36;
    sub_98 = sub_99;
  } else {
    v_488 = sub_99;
    sub_98 = sub_36;
  };
  if (controller_ck_25_1) {
    sub_97 = v_488;
  } else {
    sub_97 = sub_98;
  };
  if (controller_worker) {
    v_519 = sub_97;
    sub_4 = sub_5;
  } else {
    v_519 = sub_5;
    sub_4 = sub_97;
  };
  if (controller_ck_23_1) {
    sub_3 = v_519;
  } else {
    sub_3 = sub_4;
  };
  sub_136 = sub_49;
  sub_135 = sub_136;
  sub_134 = sub_135;
  sub_133 = sub_134;
  if (controller_air_failed_recovered) {
    v_464 = sub_73;
    sub_132 = sub_133;
  } else {
    v_464 = sub_133;
    sub_132 = sub_73;
  };
  if (controller_ck_34_1) {
    sub_131 = v_464;
  } else {
    sub_131 = sub_132;
  };
  if (controller_cleaner) {
    v_465 = sub_131;
    sub_130 = sub_7;
  } else {
    v_465 = sub_7;
    sub_130 = sub_131;
  };
  if (controller_ck_25_1) {
    sub_129 = v_465;
  } else {
    sub_129 = sub_130;
  };
  if (controller_c_air_1) {
    sub_150 = sub_24;
  } else {
    sub_150 = sub_32;
  };
  if (controller_v_271) {
    v_454 = sub_31;
  } else {
    v_454 = sub_150;
  };
  if (controller_c_air_2) {
    sub_149 = sub_150;
  } else {
    sub_149 = v_454;
  };
  if (controller_c_air_1) {
    v_453 = sub_32;
  } else {
    v_453 = sub_24;
  };
  if (controller_v_271) {
    sub_151 = v_453;
  } else {
    sub_151 = sub_31;
  };
  if (controller_v_272) {
    sub_148 = sub_151;
  } else {
    sub_148 = sub_149;
  };
  sub_147 = sub_148;
  sub_146 = sub_147;
  sub_145 = sub_146;
  sub_154 = sub_78;
  sub_153 = sub_154;
  sub_152 = sub_153;
  if (controller_blind_failed_recovered) {
    v_455 = sub_152;
    sub_144 = sub_145;
  } else {
    v_455 = sub_145;
    sub_144 = sub_152;
  };
  if (controller_ck_44_1) {
    sub_143 = v_455;
  } else {
    sub_143 = sub_144;
  };
  if (controller_c_air_1) {
    sub_161 = sub_15;
  } else {
    sub_161 = sub_32;
  };
  if (controller_v_271) {
    v_452 = sub_31;
  } else {
    v_452 = sub_161;
  };
  if (controller_c_air_2) {
    sub_160 = sub_161;
  } else {
    sub_160 = v_452;
  };
  if (controller_c_air_1) {
    v_451 = sub_32;
  } else {
    v_451 = sub_15;
  };
  if (controller_v_271) {
    sub_162 = v_451;
  } else {
    sub_162 = sub_31;
  };
  if (controller_v_272) {
    sub_159 = sub_162;
  } else {
    sub_159 = sub_160;
  };
  sub_158 = sub_159;
  sub_157 = sub_158;
  sub_156 = sub_157;
  sub_165 = sub_84;
  sub_164 = sub_165;
  sub_163 = sub_164;
  if (controller_blind_failed_recovered) {
    v_456 = sub_163;
    sub_155 = sub_156;
  } else {
    v_456 = sub_156;
    sub_155 = sub_163;
  };
  if (controller_ck_44_1) {
    v_457 = v_456;
  } else {
    v_457 = sub_155;
  };
  if (controller_ck_37_1) {
    v_458 = v_457;
  } else {
    v_458 = sub_143;
  };
  sub_170 = sub_126;
  sub_169 = sub_170;
  sub_173 = sub_92;
  sub_172 = sub_173;
  sub_171 = sub_172;
  if (controller_blind_failed_recovered) {
    v_450 = sub_171;
    sub_168 = sub_169;
  } else {
    v_450 = sub_169;
    sub_168 = sub_171;
  };
  if (controller_ck_44_1) {
    sub_167 = v_450;
  } else {
    sub_167 = sub_168;
  };
  if (controller_ck_37_1) {
    v_460 = sub_167;
    sub_166 = sub_143;
  } else {
    v_460 = sub_143;
    sub_166 = sub_167;
  };
  if (controller_c_light_1) {
    v_461 = v_460;
    v_459 = v_458;
  } else {
    v_461 = sub_166;
    v_459 = sub_166;
  };
  if (controller_light_switch) {
    sub_142 = v_459;
  } else {
    sub_142 = v_461;
  };
  sub_141 = sub_142;
  if (controller_air_failed_recovered) {
    v_462 = sub_141;
    sub_140 = sub_133;
  } else {
    v_462 = sub_133;
    sub_140 = sub_141;
  };
  if (controller_ck_34_1) {
    sub_139 = v_462;
  } else {
    sub_139 = sub_140;
  };
  if (controller_cleaner) {
    v_463 = sub_131;
    sub_138 = sub_139;
  } else {
    v_463 = sub_139;
    sub_138 = sub_131;
  };
  if (controller_ck_25_1) {
    sub_137 = v_463;
  } else {
    sub_137 = sub_138;
  };
  if (controller_worker) {
    v_466 = sub_137;
    sub_128 = sub_129;
  } else {
    v_466 = sub_129;
    sub_128 = sub_137;
  };
  if (controller_ck_23_1) {
    sub_127 = v_466;
  } else {
    sub_127 = sub_128;
  };
  if (controller_change_shift) {
    v_520 = sub_127;
    sub_2 = sub_3;
  } else {
    v_520 = sub_3;
    sub_2 = sub_127;
  };
  if (controller_ck_1) {
    sub_1 = v_520;
  } else {
    sub_1 = sub_2;
  };
  sub_188 = true;
  sub_187 = sub_188;
  sub_186 = sub_187;
  sub_185 = sub_186;
  if (controller_c_pc) {
    v_443 = false;
  } else {
    v_443 = sub_185;
  };
  if (controller_c_window) {
    sub_184 = v_443;
  } else {
    sub_184 = false;
  };
  sub_183 = sub_184;
  sub_182 = sub_183;
  if (controller_light_failed_recovered) {
    sub_194 = sub_18;
  } else {
    sub_194 = sub_17;
  };
  sub_193 = sub_194;
  sub_192 = sub_193;
  sub_191 = sub_192;
  if (controller_c_pc) {
    v_442 = false;
  } else {
    v_442 = sub_191;
  };
  if (controller_c_window) {
    sub_190 = v_442;
  } else {
    sub_190 = false;
  };
  sub_189 = sub_190;
  if (controller_ck_37_1) {
    v_444 = sub_189;
  } else {
    v_444 = sub_182;
  };
  if (controller_light_failed_recovered) {
    sub_202 = sub_119;
  } else {
    sub_202 = sub_118;
  };
  sub_201 = sub_202;
  sub_200 = sub_201;
  sub_199 = sub_200;
  if (controller_c_pc) {
    v_441 = false;
  } else {
    v_441 = sub_199;
  };
  if (controller_c_window) {
    sub_198 = v_441;
  } else {
    sub_198 = false;
  };
  sub_197 = sub_198;
  sub_196 = sub_197;
  if (controller_ck_37_1) {
    v_446 = sub_182;
    sub_195 = sub_196;
  } else {
    v_446 = sub_196;
    sub_195 = sub_182;
  };
  if (controller_c_light_1) {
    v_447 = v_446;
    v_445 = v_444;
  } else {
    v_447 = sub_195;
    v_445 = sub_195;
  };
  if (controller_light_switch) {
    sub_181 = v_445;
  } else {
    sub_181 = v_447;
  };
  sub_180 = sub_181;
  sub_179 = sub_180;
  if (controller_c_door) {
    v_434 = false;
    sub_215 = sub_194;
  } else {
    v_434 = sub_194;
    sub_215 = false;
  };
  if (controller_ck_19_1) {
    sub_214 = v_434;
  } else {
    sub_214 = sub_215;
  };
  sub_213 = sub_214;
  sub_212 = sub_213;
  sub_211 = sub_212;
  sub_210 = sub_211;
  sub_209 = sub_210;
  if (controller_c_window) {
    sub_217 = false;
  } else {
    sub_217 = sub_211;
  };
  sub_216 = sub_217;
  if (controller_blind_failed_recovered) {
    v_435 = sub_216;
    sub_208 = sub_209;
  } else {
    v_435 = sub_209;
    sub_208 = sub_216;
  };
  if (controller_ck_44_1) {
    sub_207 = v_435;
  } else {
    sub_207 = sub_208;
  };
  if (controller_c_door) {
    v_432 = false;
    sub_226 = sub_188;
  } else {
    v_432 = sub_188;
    sub_226 = false;
  };
  if (controller_ck_19_1) {
    sub_225 = v_432;
  } else {
    sub_225 = sub_226;
  };
  sub_224 = sub_225;
  sub_223 = sub_224;
  sub_222 = sub_223;
  sub_221 = sub_222;
  sub_220 = sub_221;
  if (controller_c_window) {
    sub_228 = false;
  } else {
    sub_228 = sub_222;
  };
  sub_227 = sub_228;
  if (controller_blind_failed_recovered) {
    v_433 = sub_227;
    sub_219 = sub_220;
  } else {
    v_433 = sub_220;
    sub_219 = sub_227;
  };
  if (controller_ck_44_1) {
    sub_218 = v_433;
  } else {
    sub_218 = sub_219;
  };
  if (controller_ck_37_1) {
    v_436 = sub_218;
  } else {
    v_436 = sub_207;
  };
  if (controller_c_door) {
    v_430 = false;
    sub_238 = sub_202;
  } else {
    v_430 = sub_202;
    sub_238 = false;
  };
  if (controller_ck_19_1) {
    sub_237 = v_430;
  } else {
    sub_237 = sub_238;
  };
  sub_236 = sub_237;
  sub_235 = sub_236;
  sub_234 = sub_235;
  sub_233 = sub_234;
  sub_232 = sub_233;
  if (controller_c_window) {
    sub_240 = false;
  } else {
    sub_240 = sub_234;
  };
  sub_239 = sub_240;
  if (controller_blind_failed_recovered) {
    v_431 = sub_239;
    sub_231 = sub_232;
  } else {
    v_431 = sub_232;
    sub_231 = sub_239;
  };
  if (controller_ck_44_1) {
    sub_230 = v_431;
  } else {
    sub_230 = sub_231;
  };
  if (controller_ck_37_1) {
    v_438 = sub_230;
    sub_229 = sub_218;
  } else {
    v_438 = sub_218;
    sub_229 = sub_230;
  };
  if (controller_c_light_1) {
    v_439 = v_438;
    v_437 = v_436;
  } else {
    v_439 = sub_229;
    v_437 = sub_229;
  };
  if (controller_light_switch) {
    sub_206 = v_437;
  } else {
    sub_206 = v_439;
  };
  sub_205 = sub_206;
  if (controller_c_air_1) {
    sub_248 = sub_193;
  } else {
    sub_248 = false;
  };
  if (controller_v_271) {
    v_425 = false;
  } else {
    v_425 = sub_248;
  };
  if (controller_c_air_2) {
    sub_247 = sub_248;
  } else {
    sub_247 = v_425;
  };
  if (controller_c_air_1) {
    v_424 = false;
  } else {
    v_424 = sub_193;
  };
  if (controller_v_271) {
    sub_249 = v_424;
  } else {
    sub_249 = false;
  };
  if (controller_v_272) {
    sub_246 = sub_249;
  } else {
    sub_246 = sub_247;
  };
  if (controller_c_pc) {
    sub_245 = false;
  } else {
    sub_245 = sub_246;
  };
  if (controller_c_closet) {
    sub_244 = false;
  } else {
    sub_244 = sub_245;
  };
  sub_243 = sub_244;
  if (controller_c_air_1) {
    sub_255 = sub_187;
  } else {
    sub_255 = false;
  };
  if (controller_v_271) {
    v_423 = false;
  } else {
    v_423 = sub_255;
  };
  if (controller_c_air_2) {
    sub_254 = sub_255;
  } else {
    sub_254 = v_423;
  };
  if (controller_c_air_1) {
    v_422 = false;
  } else {
    v_422 = sub_187;
  };
  if (controller_v_271) {
    sub_256 = v_422;
  } else {
    sub_256 = false;
  };
  if (controller_v_272) {
    sub_253 = sub_256;
  } else {
    sub_253 = sub_254;
  };
  if (controller_c_pc) {
    sub_252 = false;
  } else {
    sub_252 = sub_253;
  };
  if (controller_c_closet) {
    sub_251 = false;
  } else {
    sub_251 = sub_252;
  };
  sub_250 = sub_251;
  if (controller_ck_37_1) {
    v_426 = sub_250;
  } else {
    v_426 = sub_243;
  };
  if (controller_c_air_1) {
    sub_263 = sub_201;
  } else {
    sub_263 = false;
  };
  if (controller_v_271) {
    v_421 = false;
  } else {
    v_421 = sub_263;
  };
  if (controller_c_air_2) {
    sub_262 = sub_263;
  } else {
    sub_262 = v_421;
  };
  if (controller_c_air_1) {
    sub_265 = false;
  } else {
    sub_265 = sub_201;
  };
  if (controller_v_271) {
    sub_264 = sub_265;
  } else {
    sub_264 = false;
  };
  if (controller_v_272) {
    sub_261 = sub_264;
  } else {
    sub_261 = sub_262;
  };
  if (controller_c_pc) {
    sub_260 = false;
  } else {
    sub_260 = sub_261;
  };
  if (controller_c_closet) {
    sub_259 = false;
  } else {
    sub_259 = sub_260;
  };
  sub_258 = sub_259;
  if (controller_ck_37_1) {
    v_428 = sub_258;
    sub_257 = sub_250;
  } else {
    v_428 = sub_250;
    sub_257 = sub_258;
  };
  if (controller_c_light_1) {
    v_429 = v_428;
    v_427 = v_426;
  } else {
    v_429 = sub_257;
    v_427 = sub_257;
  };
  if (controller_light_switch) {
    sub_242 = v_427;
  } else {
    sub_242 = v_429;
  };
  sub_241 = sub_242;
  if (controller_air_failed_recovered) {
    v_440 = sub_241;
    sub_204 = sub_205;
  } else {
    v_440 = sub_205;
    sub_204 = sub_241;
  };
  if (controller_ck_34_1) {
    sub_203 = v_440;
  } else {
    sub_203 = sub_204;
  };
  if (controller_cleaner) {
    v_448 = sub_203;
    sub_178 = sub_179;
  } else {
    v_448 = sub_179;
    sub_178 = sub_203;
  };
  if (controller_ck_25_1) {
    sub_177 = v_448;
  } else {
    sub_177 = sub_178;
  };
  if (controller_v_271) {
    v_411 = sub_265;
  } else {
    v_411 = sub_111;
  };
  if (controller_c_air_1) {
    v_409 = sub_108;
  } else {
    v_409 = sub_201;
  };
  if (controller_v_271) {
    v_410 = v_409;
  } else {
    v_410 = sub_111;
  };
  if (controller_c_air_2) {
    v_412 = v_410;
  } else {
    v_412 = v_411;
  };
  if (controller_c_air_1) {
    sub_276 = sub_201;
  } else {
    sub_276 = sub_108;
  };
  if (controller_v_271) {
    v_408 = sub_110;
  } else {
    v_408 = sub_276;
  };
  if (controller_c_air_2) {
    sub_275 = sub_263;
  } else {
    sub_275 = v_408;
  };
  if (controller_v_272) {
    v_413 = v_412;
  } else {
    v_413 = sub_275;
  };
  if (controller_c_pc) {
    v_414 = v_413;
  } else {
    v_414 = sub_191;
  };
  if (controller_c_window) {
    sub_274 = v_414;
  } else {
    sub_274 = sub_191;
  };
  sub_273 = sub_274;
  sub_272 = sub_273;
  if (controller_v_271) {
    v_404 = sub_265;
  } else {
    v_404 = sub_121;
  };
  if (controller_c_air_1) {
    v_402 = sub_116;
  } else {
    v_402 = sub_201;
  };
  if (controller_v_271) {
    v_403 = v_402;
  } else {
    v_403 = sub_121;
  };
  if (controller_c_air_2) {
    v_405 = v_403;
  } else {
    v_405 = v_404;
  };
  if (controller_c_air_1) {
    sub_281 = sub_201;
  } else {
    sub_281 = sub_116;
  };
  if (controller_v_271) {
    v_401 = sub_120;
  } else {
    v_401 = sub_281;
  };
  if (controller_c_air_2) {
    sub_280 = sub_263;
  } else {
    sub_280 = v_401;
  };
  if (controller_v_272) {
    v_406 = v_405;
  } else {
    v_406 = sub_280;
  };
  if (controller_c_pc) {
    v_407 = v_406;
  } else {
    v_407 = sub_185;
  };
  if (controller_c_window) {
    sub_279 = v_407;
  } else {
    sub_279 = sub_185;
  };
  sub_278 = sub_279;
  sub_277 = sub_278;
  if (controller_ck_37_1) {
    v_415 = sub_277;
  } else {
    v_415 = sub_272;
  };
  if (controller_c_pc) {
    v_400 = sub_261;
  } else {
    v_400 = sub_199;
  };
  sub_286 = sub_199;
  if (controller_c_window) {
    sub_285 = v_400;
  } else {
    sub_285 = sub_286;
  };
  sub_284 = sub_285;
  sub_283 = sub_284;
  if (controller_ck_37_1) {
    v_417 = sub_283;
    sub_282 = sub_277;
  } else {
    v_417 = sub_277;
    sub_282 = sub_283;
  };
  if (controller_c_light_1) {
    v_418 = v_417;
    v_416 = v_415;
  } else {
    v_418 = sub_282;
    v_416 = sub_282;
  };
  if (controller_light_switch) {
    sub_271 = v_416;
  } else {
    sub_271 = v_418;
  };
  sub_270 = sub_271;
  if (controller_air_failed_recovered) {
    v_419 = sub_270;
    sub_269 = sub_205;
  } else {
    v_419 = sub_205;
    sub_269 = sub_270;
  };
  if (controller_ck_34_1) {
    sub_268 = v_419;
  } else {
    sub_268 = sub_269;
  };
  if (controller_cleaner) {
    v_420 = sub_203;
    sub_267 = sub_268;
  } else {
    v_420 = sub_268;
    sub_267 = sub_203;
  };
  if (controller_ck_25_1) {
    sub_266 = v_420;
  } else {
    sub_266 = sub_267;
  };
  if (controller_worker) {
    v_449 = sub_266;
    sub_176 = sub_177;
  } else {
    v_449 = sub_177;
    sub_176 = sub_266;
  };
  if (controller_ck_23_1) {
    sub_175 = v_449;
  } else {
    sub_175 = sub_176;
  };
  sub_296 = sub_227;
  sub_295 = sub_296;
  sub_294 = sub_295;
  sub_293 = sub_294;
  if (controller_air_failed_recovered) {
    v_397 = sub_241;
    sub_292 = sub_293;
  } else {
    v_397 = sub_293;
    sub_292 = sub_241;
  };
  if (controller_ck_34_1) {
    sub_291 = v_397;
  } else {
    sub_291 = sub_292;
  };
  if (controller_cleaner) {
    v_398 = sub_291;
    sub_290 = sub_179;
  } else {
    v_398 = sub_179;
    sub_290 = sub_291;
  };
  if (controller_ck_25_1) {
    sub_289 = v_398;
  } else {
    sub_289 = sub_290;
  };
  if (controller_c_air_1) {
    sub_310 = sub_193;
  } else {
    sub_310 = sub_201;
  };
  if (controller_v_271) {
    v_389 = sub_200;
  } else {
    v_389 = sub_310;
  };
  if (controller_c_air_2) {
    sub_309 = sub_310;
  } else {
    sub_309 = v_389;
  };
  if (controller_c_air_1) {
    v_388 = sub_201;
  } else {
    v_388 = sub_193;
  };
  if (controller_v_271) {
    sub_311 = v_388;
  } else {
    sub_311 = sub_200;
  };
  if (controller_v_272) {
    sub_308 = sub_311;
  } else {
    sub_308 = sub_309;
  };
  sub_307 = sub_308;
  sub_306 = sub_307;
  sub_305 = sub_306;
  sub_314 = sub_246;
  sub_313 = sub_314;
  sub_312 = sub_313;
  if (controller_blind_failed_recovered) {
    v_390 = sub_312;
    sub_304 = sub_305;
  } else {
    v_390 = sub_305;
    sub_304 = sub_312;
  };
  if (controller_ck_44_1) {
    sub_303 = v_390;
  } else {
    sub_303 = sub_304;
  };
  if (controller_c_air_1) {
    sub_322 = sub_187;
  } else {
    sub_322 = sub_201;
  };
  if (controller_v_271) {
    v_386 = sub_200;
  } else {
    v_386 = sub_322;
  };
  if (controller_c_air_2) {
    sub_321 = sub_322;
  } else {
    sub_321 = v_386;
  };
  if (controller_c_air_1) {
    v_385 = sub_201;
  } else {
    v_385 = sub_187;
  };
  if (controller_v_271) {
    sub_323 = v_385;
  } else {
    sub_323 = sub_200;
  };
  if (controller_v_272) {
    sub_320 = sub_323;
  } else {
    sub_320 = sub_321;
  };
  sub_319 = sub_320;
  sub_318 = sub_319;
  sub_317 = sub_318;
  sub_326 = sub_253;
  sub_325 = sub_326;
  sub_324 = sub_325;
  if (controller_blind_failed_recovered) {
    v_387 = sub_324;
    sub_316 = sub_317;
  } else {
    v_387 = sub_317;
    sub_316 = sub_324;
  };
  if (controller_ck_44_1) {
    sub_315 = v_387;
  } else {
    sub_315 = sub_316;
  };
  if (controller_ck_37_1) {
    v_391 = sub_315;
  } else {
    v_391 = sub_303;
  };
  sub_331 = sub_286;
  sub_330 = sub_331;
  sub_334 = sub_261;
  sub_333 = sub_334;
  sub_332 = sub_333;
  if (controller_blind_failed_recovered) {
    v = sub_332;
    sub_329 = sub_330;
  } else {
    v = sub_330;
    sub_329 = sub_332;
  };
  if (controller_ck_44_1) {
    sub_328 = v;
  } else {
    sub_328 = sub_329;
  };
  if (controller_ck_37_1) {
    v_393 = sub_328;
    sub_327 = sub_315;
  } else {
    v_393 = sub_315;
    sub_327 = sub_328;
  };
  if (controller_c_light_1) {
    v_394 = v_393;
    v_392 = v_391;
  } else {
    v_394 = sub_327;
    v_392 = sub_327;
  };
  if (controller_light_switch) {
    sub_302 = v_392;
  } else {
    sub_302 = v_394;
  };
  sub_301 = sub_302;
  if (controller_air_failed_recovered) {
    v_395 = sub_301;
    sub_300 = sub_293;
  } else {
    v_395 = sub_293;
    sub_300 = sub_301;
  };
  if (controller_ck_34_1) {
    sub_299 = v_395;
  } else {
    sub_299 = sub_300;
  };
  if (controller_cleaner) {
    v_396 = sub_291;
    sub_298 = sub_299;
  } else {
    v_396 = sub_299;
    sub_298 = sub_291;
  };
  if (controller_ck_25_1) {
    sub_297 = v_396;
  } else {
    sub_297 = sub_298;
  };
  if (controller_worker) {
    v_399 = sub_297;
    sub_288 = sub_289;
  } else {
    v_399 = sub_289;
    sub_288 = sub_297;
  };
  if (controller_ck_23_1) {
    sub_287 = v_399;
  } else {
    sub_287 = sub_288;
  };
  if (controller_change_shift) {
    v_521 = sub_287;
    sub_174 = sub_175;
  } else {
    v_521 = sub_175;
    sub_174 = sub_287;
  };
  if (controller_ck_1) {
    v_522 = v_521;
  } else {
    v_522 = sub_174;
  };
  if (p_controller_c_light_2) {
    sub_0 = v_522;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_light_2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_light_1_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered, int controller_ck_1,
  int controller_pnr_14, int controller_ck_19_1, int controller_pnr_13,
  int controller_ck_21_1, int controller_pnr_12, int controller_ck_23_1,
  int controller_pnr_11, int controller_ck_25_1, int controller_pnr_10,
  int controller_ck_27_1, int controller_pnr_9, int controller_ck_29_1,
  int controller_pnr_8, int controller_v_272, int controller_v_271,
  int controller_pnr_7, int controller_ck_34_1, int controller_pnr_6,
  int controller_ck_37_1, int controller_pnr_5, int controller_ck_39_1,
  int controller_pnr_4, int controller_ck_42_1, int controller_pnr_3,
  int controller_ck_44_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_closet, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_1_out* _out) {
  
  int v_615;
  int v_614;
  int v_613;
  int v_612;
  int v_611;
  int v_610;
  int v_609;
  int v_608;
  int v_607;
  int v_606;
  int v_605;
  int v_604;
  int v_603;
  int v_602;
  int v_601;
  int v_600;
  int v_599;
  int v_598;
  int v_597;
  int v_596;
  int v_595;
  int v_594;
  int v_593;
  int v_592;
  int v_591;
  int v_590;
  int v_589;
  int v_588;
  int v_587;
  int v_586;
  int v_585;
  int v_584;
  int v_583;
  int v_582;
  int v_581;
  int v_580;
  int v_579;
  int v_578;
  int v_577;
  int v_576;
  int v_575;
  int v_574;
  int v_573;
  int v_572;
  int v_571;
  int v_570;
  int v_569;
  int v_568;
  int v_567;
  int v_566;
  int v_565;
  int v_564;
  int v_563;
  int v_562;
  int v_561;
  int v_560;
  int v_559;
  int v_558;
  int v_557;
  int v_556;
  int v_555;
  int v_554;
  int v_553;
  int v_552;
  int v_551;
  int v_550;
  int v_549;
  int v_548;
  int v_547;
  int v_546;
  int v_545;
  int v_544;
  int v_543;
  int v_542;
  int v_541;
  int v_540;
  int v_539;
  int v_538;
  int v_537;
  int v_536;
  int v_535;
  int v_534;
  int v_533;
  int v_532;
  int v_531;
  int v_530;
  int v_529;
  int v_528;
  int v_527;
  int v_526;
  int v_525;
  int v_524;
  int v_523;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  int sub_230;
  int sub_231;
  int sub_232;
  int sub_233;
  int sub_234;
  int sub_235;
  int sub_236;
  int sub_237;
  int sub_238;
  int sub_239;
  int sub_240;
  int sub_241;
  int sub_242;
  int sub_243;
  int sub_244;
  int sub_245;
  int sub_246;
  int sub_247;
  int sub_248;
  int sub_249;
  int sub_250;
  int sub_251;
  int sub_252;
  int sub_253;
  int sub_254;
  int sub_255;
  int sub_256;
  int sub_257;
  int sub_258;
  int sub_259;
  sub_17 = false;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  if (controller_c_pc) {
    v_610 = false;
  } else {
    v_610 = sub_14;
  };
  if (controller_c_window) {
    sub_13 = v_610;
  } else {
    sub_13 = false;
  };
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_24 = controller_ck_39_1;
  sub_25 = !(controller_ck_39_1);
  if (controller_light_failed_recovered) {
    sub_23 = sub_24;
  } else {
    sub_23 = sub_25;
  };
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  if (controller_c_pc) {
    v_609 = false;
  } else {
    v_609 = sub_20;
  };
  if (controller_c_window) {
    sub_19 = v_609;
  } else {
    sub_19 = false;
  };
  sub_18 = sub_19;
  if (controller_ck_37_1) {
    sub_10 = sub_18;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (controller_c_door) {
    v_604 = false;
    sub_39 = sub_23;
  } else {
    v_604 = sub_23;
    sub_39 = false;
  };
  if (controller_ck_19_1) {
    sub_38 = v_604;
  } else {
    sub_38 = sub_39;
  };
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  if (controller_c_window) {
    sub_41 = false;
  } else {
    sub_41 = sub_35;
  };
  sub_40 = sub_41;
  if (controller_blind_failed_recovered) {
    v_605 = sub_40;
    sub_32 = sub_33;
  } else {
    v_605 = sub_33;
    sub_32 = sub_40;
  };
  if (controller_ck_44_1) {
    sub_31 = v_605;
  } else {
    sub_31 = sub_32;
  };
  if (controller_c_door) {
    v_603 = false;
    sub_49 = sub_17;
  } else {
    v_603 = sub_17;
    sub_49 = false;
  };
  if (controller_ck_19_1) {
    sub_48 = v_603;
  } else {
    sub_48 = sub_49;
  };
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  if (controller_c_window) {
    sub_51 = false;
  } else {
    sub_51 = sub_45;
  };
  sub_50 = sub_51;
  if (controller_blind_failed_recovered) {
    v_606 = sub_50;
    sub_42 = sub_43;
  } else {
    v_606 = sub_43;
    sub_42 = sub_50;
  };
  if (controller_ck_44_1) {
    v_607 = v_606;
  } else {
    v_607 = sub_42;
  };
  if (controller_ck_37_1) {
    sub_30 = v_607;
  } else {
    sub_30 = sub_31;
  };
  sub_29 = sub_30;
  sub_28 = sub_29;
  if (controller_c_air_1) {
    sub_60 = sub_22;
  } else {
    sub_60 = false;
  };
  if (controller_v_271) {
    v_602 = false;
  } else {
    v_602 = sub_60;
  };
  if (controller_c_air_2) {
    sub_59 = sub_60;
  } else {
    sub_59 = v_602;
  };
  if (controller_c_air_1) {
    v_601 = false;
  } else {
    v_601 = sub_22;
  };
  if (controller_v_271) {
    sub_61 = v_601;
  } else {
    sub_61 = false;
  };
  if (controller_v_272) {
    sub_58 = sub_61;
  } else {
    sub_58 = sub_59;
  };
  if (controller_c_pc) {
    sub_57 = false;
  } else {
    sub_57 = sub_58;
  };
  if (controller_c_closet) {
    sub_56 = false;
  } else {
    sub_56 = sub_57;
  };
  sub_55 = sub_56;
  if (controller_c_air_1) {
    sub_66 = sub_16;
  } else {
    sub_66 = false;
  };
  if (controller_v_271) {
    v_600 = false;
  } else {
    v_600 = sub_66;
  };
  if (controller_c_air_2) {
    sub_65 = sub_66;
  } else {
    sub_65 = v_600;
  };
  if (controller_c_air_1) {
    v_599 = false;
  } else {
    v_599 = sub_16;
  };
  if (controller_v_271) {
    sub_67 = v_599;
  } else {
    sub_67 = false;
  };
  if (controller_v_272) {
    sub_64 = sub_67;
  } else {
    sub_64 = sub_65;
  };
  if (controller_c_pc) {
    sub_63 = false;
  } else {
    sub_63 = sub_64;
  };
  if (controller_c_closet) {
    sub_62 = false;
  } else {
    sub_62 = sub_63;
  };
  if (controller_ck_37_1) {
    sub_54 = sub_62;
  } else {
    sub_54 = sub_55;
  };
  sub_53 = sub_54;
  sub_52 = sub_53;
  if (controller_air_failed_recovered) {
    v_608 = sub_52;
    sub_27 = sub_28;
  } else {
    v_608 = sub_28;
    sub_27 = sub_52;
  };
  if (controller_ck_34_1) {
    sub_26 = v_608;
  } else {
    sub_26 = sub_27;
  };
  if (controller_cleaner) {
    v_611 = sub_26;
    sub_6 = sub_7;
  } else {
    v_611 = sub_7;
    sub_6 = sub_26;
  };
  if (controller_ck_25_1) {
    sub_5 = v_611;
  } else {
    sub_5 = sub_6;
  };
  sub_82 = (controller_ck_39_1&&false);
  v_589 = !(controller_ck_39_1);
  sub_83 = (v_589&&false);
  if (controller_light_failed_recovered) {
    sub_81 = sub_82;
  } else {
    sub_81 = sub_83;
  };
  sub_80 = sub_81;
  if (controller_c_air_1) {
    sub_79 = sub_80;
  } else {
    sub_79 = false;
  };
  sub_87 = (controller_ck_39_1||false);
  v_588 = !(controller_ck_39_1);
  sub_88 = (v_588||false);
  if (controller_light_failed_recovered) {
    sub_86 = sub_87;
  } else {
    sub_86 = sub_88;
  };
  sub_85 = sub_86;
  if (controller_c_air_1) {
    v_591 = sub_85;
    sub_84 = sub_80;
    sub_89 = sub_85;
  } else {
    v_591 = sub_80;
    sub_84 = sub_85;
    sub_89 = false;
  };
  if (controller_v_271) {
    v_590 = sub_89;
  } else {
    v_590 = sub_84;
  };
  if (controller_c_air_2) {
    sub_78 = sub_79;
  } else {
    sub_78 = v_590;
  };
  sub_90 = sub_85;
  if (controller_v_271) {
    v_592 = v_591;
  } else {
    v_592 = sub_90;
  };
  if (controller_c_air_1) {
    sub_91 = false;
  } else {
    sub_91 = sub_80;
  };
  if (controller_v_271) {
    v_593 = sub_91;
  } else {
    v_593 = sub_90;
  };
  if (controller_c_air_2) {
    v_594 = v_592;
  } else {
    v_594 = v_593;
  };
  if (controller_v_272) {
    v_595 = v_594;
  } else {
    v_595 = sub_78;
  };
  if (controller_c_pc) {
    v_596 = v_595;
  } else {
    v_596 = sub_20;
  };
  if (controller_c_window) {
    sub_77 = v_596;
  } else {
    sub_77 = sub_20;
  };
  sub_76 = sub_77;
  sub_75 = sub_76;
  if (controller_light_failed_recovered) {
    sub_97 = sub_83;
  } else {
    sub_97 = sub_82;
  };
  sub_96 = sub_97;
  if (controller_c_air_1) {
    v_582 = sub_96;
    sub_95 = sub_80;
    sub_98 = sub_96;
  } else {
    v_582 = sub_80;
    sub_95 = sub_96;
    sub_98 = false;
  };
  if (controller_v_271) {
    v_581 = sub_98;
  } else {
    v_581 = sub_95;
  };
  if (controller_c_air_2) {
    sub_94 = sub_79;
  } else {
    sub_94 = v_581;
  };
  sub_99 = sub_96;
  if (controller_v_271) {
    v_584 = sub_91;
    v_583 = v_582;
  } else {
    v_584 = sub_99;
    v_583 = sub_99;
  };
  if (controller_c_air_2) {
    v_585 = v_583;
  } else {
    v_585 = v_584;
  };
  if (controller_v_272) {
    v_586 = v_585;
  } else {
    v_586 = sub_94;
  };
  if (controller_c_pc) {
    v_587 = v_586;
  } else {
    v_587 = sub_14;
  };
  if (controller_c_window) {
    sub_93 = v_587;
  } else {
    sub_93 = sub_14;
  };
  sub_92 = sub_93;
  if (controller_ck_37_1) {
    sub_74 = sub_92;
  } else {
    sub_74 = sub_75;
  };
  sub_73 = sub_74;
  sub_72 = sub_73;
  if (controller_air_failed_recovered) {
    v_597 = sub_72;
    sub_71 = sub_28;
  } else {
    v_597 = sub_28;
    sub_71 = sub_72;
  };
  if (controller_ck_34_1) {
    sub_70 = v_597;
  } else {
    sub_70 = sub_71;
  };
  if (controller_cleaner) {
    v_598 = sub_26;
    sub_69 = sub_70;
  } else {
    v_598 = sub_70;
    sub_69 = sub_26;
  };
  if (controller_ck_25_1) {
    sub_68 = v_598;
  } else {
    sub_68 = sub_69;
  };
  if (controller_worker) {
    v_612 = sub_68;
    sub_4 = sub_5;
  } else {
    v_612 = sub_5;
    sub_4 = sub_68;
  };
  if (controller_ck_23_1) {
    sub_3 = v_612;
  } else {
    sub_3 = sub_4;
  };
  sub_108 = sub_50;
  sub_107 = sub_108;
  sub_106 = sub_107;
  if (controller_air_failed_recovered) {
    v_578 = sub_52;
    sub_105 = sub_106;
  } else {
    v_578 = sub_106;
    sub_105 = sub_52;
  };
  if (controller_ck_34_1) {
    sub_104 = v_578;
  } else {
    sub_104 = sub_105;
  };
  if (controller_cleaner) {
    v_579 = sub_104;
    sub_103 = sub_7;
  } else {
    v_579 = sub_7;
    sub_103 = sub_104;
  };
  if (controller_ck_25_1) {
    sub_102 = v_579;
  } else {
    sub_102 = sub_103;
  };
  if (controller_c_air_1) {
    sub_123 = sub_22;
  } else {
    sub_123 = sub_80;
  };
  sub_124 = sub_80;
  if (controller_v_271) {
    v_572 = sub_124;
  } else {
    v_572 = sub_123;
  };
  if (controller_c_air_2) {
    sub_122 = sub_123;
  } else {
    sub_122 = v_572;
  };
  if (controller_c_air_1) {
    v_571 = sub_80;
  } else {
    v_571 = sub_22;
  };
  if (controller_v_271) {
    sub_125 = v_571;
  } else {
    sub_125 = sub_124;
  };
  if (controller_v_272) {
    sub_121 = sub_125;
  } else {
    sub_121 = sub_122;
  };
  sub_120 = sub_121;
  sub_119 = sub_120;
  sub_118 = sub_119;
  sub_128 = sub_58;
  sub_127 = sub_128;
  sub_126 = sub_127;
  if (controller_blind_failed_recovered) {
    v_573 = sub_126;
    sub_117 = sub_118;
  } else {
    v_573 = sub_118;
    sub_117 = sub_126;
  };
  if (controller_ck_44_1) {
    sub_116 = v_573;
  } else {
    sub_116 = sub_117;
  };
  if (controller_c_air_1) {
    sub_135 = sub_16;
  } else {
    sub_135 = sub_80;
  };
  if (controller_v_271) {
    v_570 = sub_124;
  } else {
    v_570 = sub_135;
  };
  if (controller_c_air_2) {
    sub_134 = sub_135;
  } else {
    sub_134 = v_570;
  };
  if (controller_c_air_1) {
    v_569 = sub_80;
  } else {
    v_569 = sub_16;
  };
  if (controller_v_271) {
    sub_136 = v_569;
  } else {
    sub_136 = sub_124;
  };
  if (controller_v_272) {
    sub_133 = sub_136;
  } else {
    sub_133 = sub_134;
  };
  sub_132 = sub_133;
  sub_131 = sub_132;
  sub_130 = sub_131;
  sub_139 = sub_64;
  sub_138 = sub_139;
  sub_137 = sub_138;
  if (controller_blind_failed_recovered) {
    v_574 = sub_137;
    sub_129 = sub_130;
  } else {
    v_574 = sub_130;
    sub_129 = sub_137;
  };
  if (controller_ck_44_1) {
    v_575 = v_574;
  } else {
    v_575 = sub_129;
  };
  if (controller_ck_37_1) {
    sub_115 = v_575;
  } else {
    sub_115 = sub_116;
  };
  sub_114 = sub_115;
  sub_113 = sub_114;
  if (controller_air_failed_recovered) {
    v_576 = sub_113;
    sub_112 = sub_106;
  } else {
    v_576 = sub_106;
    sub_112 = sub_113;
  };
  if (controller_ck_34_1) {
    sub_111 = v_576;
  } else {
    sub_111 = sub_112;
  };
  if (controller_cleaner) {
    v_577 = sub_104;
    sub_110 = sub_111;
  } else {
    v_577 = sub_111;
    sub_110 = sub_104;
  };
  if (controller_ck_25_1) {
    sub_109 = v_577;
  } else {
    sub_109 = sub_110;
  };
  if (controller_worker) {
    v_580 = sub_109;
    sub_101 = sub_102;
  } else {
    v_580 = sub_102;
    sub_101 = sub_109;
  };
  if (controller_ck_23_1) {
    sub_100 = v_580;
  } else {
    sub_100 = sub_101;
  };
  if (controller_change_shift) {
    v_613 = sub_100;
    sub_2 = sub_3;
  } else {
    v_613 = sub_3;
    sub_2 = sub_100;
  };
  if (controller_ck_1) {
    sub_1 = v_613;
  } else {
    sub_1 = sub_2;
  };
  sub_154 = true;
  sub_153 = sub_154;
  sub_152 = sub_153;
  sub_151 = sub_152;
  if (controller_c_pc) {
    v_565 = false;
  } else {
    v_565 = sub_151;
  };
  if (controller_c_window) {
    sub_150 = v_565;
  } else {
    sub_150 = false;
  };
  sub_149 = sub_150;
  sub_148 = sub_149;
  if (controller_light_failed_recovered) {
    sub_161 = sub_25;
  } else {
    sub_161 = sub_24;
  };
  sub_160 = sub_161;
  sub_159 = sub_160;
  sub_158 = sub_159;
  if (controller_c_pc) {
    v_564 = false;
  } else {
    v_564 = sub_158;
  };
  if (controller_c_window) {
    sub_157 = v_564;
  } else {
    sub_157 = false;
  };
  sub_156 = sub_157;
  sub_155 = sub_156;
  if (controller_ck_37_1) {
    v_566 = sub_148;
  } else {
    v_566 = sub_155;
  };
  if (controller_light_switch) {
    sub_147 = sub_148;
  } else {
    sub_147 = v_566;
  };
  sub_146 = sub_147;
  sub_145 = sub_146;
  if (controller_c_door) {
    v_558 = false;
    sub_174 = sub_154;
  } else {
    v_558 = sub_154;
    sub_174 = false;
  };
  if (controller_ck_19_1) {
    sub_173 = v_558;
  } else {
    sub_173 = sub_174;
  };
  sub_172 = sub_173;
  sub_171 = sub_172;
  sub_170 = sub_171;
  sub_169 = sub_170;
  sub_168 = sub_169;
  if (controller_c_window) {
    sub_176 = false;
  } else {
    sub_176 = sub_170;
  };
  sub_175 = sub_176;
  if (controller_blind_failed_recovered) {
    v_559 = sub_175;
    sub_167 = sub_168;
  } else {
    v_559 = sub_168;
    sub_167 = sub_175;
  };
  if (controller_ck_44_1) {
    sub_166 = v_559;
  } else {
    sub_166 = sub_167;
  };
  if (controller_c_door) {
    v_557 = false;
    sub_184 = sub_161;
  } else {
    v_557 = sub_161;
    sub_184 = false;
  };
  if (controller_ck_19_1) {
    sub_183 = v_557;
  } else {
    sub_183 = sub_184;
  };
  sub_182 = sub_183;
  sub_181 = sub_182;
  sub_180 = sub_181;
  sub_179 = sub_180;
  sub_178 = sub_179;
  if (controller_c_window) {
    sub_186 = false;
  } else {
    sub_186 = sub_180;
  };
  sub_185 = sub_186;
  if (controller_blind_failed_recovered) {
    v_560 = sub_185;
    sub_177 = sub_178;
  } else {
    v_560 = sub_178;
    sub_177 = sub_185;
  };
  if (controller_ck_44_1) {
    v_561 = v_560;
  } else {
    v_561 = sub_177;
  };
  if (controller_ck_37_1) {
    v_562 = v_561;
  } else {
    v_562 = sub_166;
  };
  if (controller_light_switch) {
    sub_165 = sub_166;
  } else {
    sub_165 = v_562;
  };
  sub_164 = sub_165;
  if (controller_c_air_1) {
    sub_194 = sub_153;
  } else {
    sub_194 = false;
  };
  if (controller_v_271) {
    v_555 = false;
  } else {
    v_555 = sub_194;
  };
  if (controller_c_air_2) {
    sub_193 = sub_194;
  } else {
    sub_193 = v_555;
  };
  if (controller_c_air_1) {
    v_554 = false;
  } else {
    v_554 = sub_153;
  };
  if (controller_v_271) {
    sub_195 = v_554;
  } else {
    sub_195 = false;
  };
  if (controller_v_272) {
    sub_192 = sub_195;
  } else {
    sub_192 = sub_193;
  };
  if (controller_c_pc) {
    sub_191 = false;
  } else {
    sub_191 = sub_192;
  };
  if (controller_c_closet) {
    sub_190 = false;
  } else {
    sub_190 = sub_191;
  };
  sub_189 = sub_190;
  if (controller_c_air_1) {
    sub_200 = sub_160;
  } else {
    sub_200 = false;
  };
  if (controller_v_271) {
    v_553 = false;
  } else {
    v_553 = sub_200;
  };
  if (controller_c_air_2) {
    sub_199 = sub_200;
  } else {
    sub_199 = v_553;
  };
  if (controller_c_air_1) {
    v_552 = false;
  } else {
    v_552 = sub_160;
  };
  if (controller_v_271) {
    sub_201 = v_552;
  } else {
    sub_201 = false;
  };
  if (controller_v_272) {
    sub_198 = sub_201;
  } else {
    sub_198 = sub_199;
  };
  if (controller_c_pc) {
    sub_197 = false;
  } else {
    sub_197 = sub_198;
  };
  if (controller_c_closet) {
    sub_196 = false;
  } else {
    sub_196 = sub_197;
  };
  if (controller_ck_37_1) {
    v_556 = sub_196;
  } else {
    v_556 = sub_189;
  };
  if (controller_light_switch) {
    sub_188 = sub_189;
  } else {
    sub_188 = v_556;
  };
  sub_187 = sub_188;
  if (controller_air_failed_recovered) {
    v_563 = sub_187;
    sub_163 = sub_164;
  } else {
    v_563 = sub_164;
    sub_163 = sub_187;
  };
  if (controller_ck_34_1) {
    sub_162 = v_563;
  } else {
    sub_162 = sub_163;
  };
  if (controller_cleaner) {
    v_567 = sub_162;
    sub_144 = sub_145;
  } else {
    v_567 = sub_145;
    sub_144 = sub_162;
  };
  if (controller_ck_25_1) {
    sub_143 = v_567;
  } else {
    sub_143 = sub_144;
  };
  if (controller_light_failed_recovered) {
    sub_214 = sub_88;
  } else {
    sub_214 = sub_87;
  };
  sub_213 = sub_214;
  if (controller_c_air_1) {
    v_543 = sub_85;
  } else {
    v_543 = sub_213;
  };
  if (controller_v_271) {
    v_544 = v_543;
  } else {
    v_544 = sub_90;
  };
  if (controller_c_air_1) {
    sub_212 = sub_213;
    sub_215 = sub_213;
  } else {
    sub_212 = false;
    sub_215 = sub_85;
  };
  if (controller_v_271) {
    v_542 = sub_89;
  } else {
    v_542 = sub_215;
  };
  if (controller_c_air_2) {
    sub_211 = sub_212;
  } else {
    sub_211 = v_542;
  };
  if (controller_c_air_1) {
    sub_216 = false;
  } else {
    sub_216 = sub_213;
  };
  if (controller_v_271) {
    v_545 = sub_216;
  } else {
    v_545 = sub_90;
  };
  if (controller_c_air_2) {
    v_546 = v_544;
  } else {
    v_546 = v_545;
  };
  if (controller_v_272) {
    v_547 = v_546;
  } else {
    v_547 = sub_211;
  };
  if (controller_c_pc) {
    v_548 = v_547;
  } else {
    v_548 = sub_151;
  };
  if (controller_c_window) {
    sub_210 = v_548;
  } else {
    sub_210 = sub_151;
  };
  sub_209 = sub_210;
  sub_208 = sub_209;
  if (controller_v_271) {
    v_538 = sub_216;
  } else {
    v_538 = sub_99;
  };
  if (controller_c_air_1) {
    v_536 = sub_96;
  } else {
    v_536 = sub_213;
  };
  if (controller_v_271) {
    v_537 = v_536;
  } else {
    v_537 = sub_99;
  };
  if (controller_c_air_2) {
    v_539 = v_537;
  } else {
    v_539 = v_538;
  };
  if (controller_c_air_1) {
    sub_220 = sub_213;
  } else {
    sub_220 = sub_96;
  };
  if (controller_v_271) {
    v_535 = sub_98;
  } else {
    v_535 = sub_220;
  };
  if (controller_c_air_2) {
    sub_219 = sub_212;
  } else {
    sub_219 = v_535;
  };
  if (controller_v_272) {
    v_540 = v_539;
  } else {
    v_540 = sub_219;
  };
  if (controller_c_pc) {
    v_541 = v_540;
  } else {
    v_541 = sub_158;
  };
  if (controller_c_window) {
    sub_218 = v_541;
  } else {
    sub_218 = sub_158;
  };
  sub_217 = sub_218;
  if (controller_ck_37_1) {
    v_549 = sub_217;
  } else {
    v_549 = sub_208;
  };
  if (controller_light_switch) {
    sub_207 = sub_208;
  } else {
    sub_207 = v_549;
  };
  sub_206 = sub_207;
  if (controller_air_failed_recovered) {
    v_550 = sub_206;
    sub_205 = sub_164;
  } else {
    v_550 = sub_164;
    sub_205 = sub_206;
  };
  if (controller_ck_34_1) {
    sub_204 = v_550;
  } else {
    sub_204 = sub_205;
  };
  if (controller_cleaner) {
    v_551 = sub_162;
    sub_203 = sub_204;
  } else {
    v_551 = sub_204;
    sub_203 = sub_162;
  };
  if (controller_ck_25_1) {
    sub_202 = v_551;
  } else {
    sub_202 = sub_203;
  };
  if (controller_worker) {
    v_568 = sub_202;
    sub_142 = sub_143;
  } else {
    v_568 = sub_143;
    sub_142 = sub_202;
  };
  if (controller_ck_23_1) {
    sub_141 = v_568;
  } else {
    sub_141 = sub_142;
  };
  sub_229 = sub_175;
  sub_228 = sub_229;
  sub_227 = sub_228;
  if (controller_air_failed_recovered) {
    v_532 = sub_187;
    sub_226 = sub_227;
  } else {
    v_532 = sub_227;
    sub_226 = sub_187;
  };
  if (controller_ck_34_1) {
    sub_225 = v_532;
  } else {
    sub_225 = sub_226;
  };
  if (controller_cleaner) {
    v_533 = sub_225;
    sub_224 = sub_145;
  } else {
    v_533 = sub_145;
    sub_224 = sub_225;
  };
  if (controller_ck_25_1) {
    sub_223 = v_533;
  } else {
    sub_223 = sub_224;
  };
  if (controller_c_air_1) {
    sub_243 = sub_153;
  } else {
    sub_243 = sub_213;
  };
  sub_244 = sub_213;
  if (controller_v_271) {
    v_525 = sub_244;
  } else {
    v_525 = sub_243;
  };
  if (controller_c_air_2) {
    sub_242 = sub_243;
  } else {
    sub_242 = v_525;
  };
  if (controller_c_air_1) {
    v_524 = sub_213;
  } else {
    v_524 = sub_153;
  };
  if (controller_v_271) {
    sub_245 = v_524;
  } else {
    sub_245 = sub_244;
  };
  if (controller_v_272) {
    sub_241 = sub_245;
  } else {
    sub_241 = sub_242;
  };
  sub_240 = sub_241;
  sub_239 = sub_240;
  sub_238 = sub_239;
  sub_248 = sub_192;
  sub_247 = sub_248;
  sub_246 = sub_247;
  if (controller_blind_failed_recovered) {
    v_526 = sub_246;
    sub_237 = sub_238;
  } else {
    v_526 = sub_238;
    sub_237 = sub_246;
  };
  if (controller_ck_44_1) {
    sub_236 = v_526;
  } else {
    sub_236 = sub_237;
  };
  if (controller_c_air_1) {
    sub_255 = sub_160;
  } else {
    sub_255 = sub_213;
  };
  if (controller_v_271) {
    v_523 = sub_244;
  } else {
    v_523 = sub_255;
  };
  if (controller_c_air_2) {
    sub_254 = sub_255;
  } else {
    sub_254 = v_523;
  };
  if (controller_c_air_1) {
    v = sub_213;
  } else {
    v = sub_160;
  };
  if (controller_v_271) {
    sub_256 = v;
  } else {
    sub_256 = sub_244;
  };
  if (controller_v_272) {
    sub_253 = sub_256;
  } else {
    sub_253 = sub_254;
  };
  sub_252 = sub_253;
  sub_251 = sub_252;
  sub_250 = sub_251;
  sub_259 = sub_198;
  sub_258 = sub_259;
  sub_257 = sub_258;
  if (controller_blind_failed_recovered) {
    v_527 = sub_257;
    sub_249 = sub_250;
  } else {
    v_527 = sub_250;
    sub_249 = sub_257;
  };
  if (controller_ck_44_1) {
    v_528 = v_527;
  } else {
    v_528 = sub_249;
  };
  if (controller_ck_37_1) {
    v_529 = v_528;
  } else {
    v_529 = sub_236;
  };
  if (controller_light_switch) {
    sub_235 = sub_236;
  } else {
    sub_235 = v_529;
  };
  sub_234 = sub_235;
  if (controller_air_failed_recovered) {
    v_530 = sub_234;
    sub_233 = sub_227;
  } else {
    v_530 = sub_227;
    sub_233 = sub_234;
  };
  if (controller_ck_34_1) {
    sub_232 = v_530;
  } else {
    sub_232 = sub_233;
  };
  if (controller_cleaner) {
    v_531 = sub_225;
    sub_231 = sub_232;
  } else {
    v_531 = sub_232;
    sub_231 = sub_225;
  };
  if (controller_ck_25_1) {
    sub_230 = v_531;
  } else {
    sub_230 = sub_231;
  };
  if (controller_worker) {
    v_534 = sub_230;
    sub_222 = sub_223;
  } else {
    v_534 = sub_223;
    sub_222 = sub_230;
  };
  if (controller_ck_23_1) {
    sub_221 = v_534;
  } else {
    sub_221 = sub_222;
  };
  if (controller_change_shift) {
    v_614 = sub_221;
    sub_140 = sub_141;
  } else {
    v_614 = sub_141;
    sub_140 = sub_221;
  };
  if (controller_ck_1) {
    v_615 = v_614;
  } else {
    v_615 = sub_140;
  };
  if (p_controller_c_light_1) {
    sub_0 = v_615;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_light_1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_closet_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered, int controller_ck_1,
  int controller_pnr_14, int controller_ck_19_1, int controller_pnr_13,
  int controller_ck_21_1, int controller_pnr_12, int controller_ck_23_1,
  int controller_pnr_11, int controller_ck_25_1, int controller_pnr_10,
  int controller_ck_27_1, int controller_pnr_9, int controller_ck_29_1,
  int controller_pnr_8, int controller_v_272, int controller_v_271,
  int controller_pnr_7, int controller_ck_34_1, int controller_pnr_6,
  int controller_ck_37_1, int controller_pnr_5, int controller_ck_39_1,
  int controller_pnr_4, int controller_ck_42_1, int controller_pnr_3,
  int controller_ck_44_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_air_2, int controller_c_air_1, int controller_c_window,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_closet_out* _out) {
  
  int v_675;
  int v_674;
  int v_673;
  int v_672;
  int v_671;
  int v_670;
  int v_669;
  int v_668;
  int v_667;
  int v_666;
  int v_665;
  int v_664;
  int v_663;
  int v_662;
  int v_661;
  int v_660;
  int v_659;
  int v_658;
  int v_657;
  int v_656;
  int v_655;
  int v_654;
  int v_653;
  int v_652;
  int v_651;
  int v_650;
  int v_649;
  int v_648;
  int v_647;
  int v_646;
  int v_645;
  int v_644;
  int v_643;
  int v_642;
  int v_641;
  int v_640;
  int v_639;
  int v_638;
  int v_637;
  int v_636;
  int v_635;
  int v_634;
  int v_633;
  int v_632;
  int v_631;
  int v_630;
  int v_629;
  int v_628;
  int v_627;
  int v_626;
  int v_625;
  int v_624;
  int v_623;
  int v_622;
  int v_621;
  int v_620;
  int v_619;
  int v_618;
  int v_617;
  int v_616;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  sub_15 = false;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  if (controller_c_pc) {
    v_670 = false;
  } else {
    v_670 = sub_12;
  };
  if (controller_c_window) {
    sub_11 = v_670;
  } else {
    sub_11 = false;
  };
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (controller_c_door) {
    v_667 = false;
    sub_27 = sub_15;
  } else {
    v_667 = sub_15;
    sub_27 = false;
  };
  if (controller_ck_19_1) {
    sub_26 = v_667;
  } else {
    sub_26 = sub_27;
  };
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  if (controller_c_window) {
    sub_28 = false;
  } else {
    sub_28 = sub_23;
  };
  if (controller_blind_failed_recovered) {
    v_668 = sub_28;
    sub_21 = sub_22;
  } else {
    v_668 = sub_22;
    sub_21 = sub_28;
  };
  if (controller_ck_44_1) {
    sub_20 = v_668;
  } else {
    sub_20 = sub_21;
  };
  sub_19 = sub_20;
  sub_18 = sub_19;
  if (controller_c_air_1) {
    sub_36 = sub_14;
  } else {
    sub_36 = false;
  };
  if (controller_v_271) {
    v_666 = false;
  } else {
    v_666 = sub_36;
  };
  if (controller_c_air_2) {
    sub_35 = sub_36;
  } else {
    sub_35 = v_666;
  };
  if (controller_c_air_1) {
    v_665 = false;
  } else {
    v_665 = sub_14;
  };
  if (controller_v_271) {
    sub_37 = v_665;
  } else {
    sub_37 = false;
  };
  if (controller_v_272) {
    sub_34 = sub_37;
  } else {
    sub_34 = sub_35;
  };
  if (controller_c_pc) {
    sub_33 = false;
  } else {
    sub_33 = sub_34;
  };
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (controller_air_failed_recovered) {
    v_669 = sub_29;
    sub_17 = sub_18;
  } else {
    v_669 = sub_18;
    sub_17 = sub_29;
  };
  if (controller_ck_34_1) {
    sub_16 = v_669;
  } else {
    sub_16 = sub_17;
  };
  if (controller_cleaner) {
    v_671 = sub_16;
    sub_6 = sub_7;
  } else {
    v_671 = sub_7;
    sub_6 = sub_16;
  };
  if (controller_ck_25_1) {
    sub_5 = v_671;
  } else {
    sub_5 = sub_6;
  };
  sub_49 = (controller_ck_39_1&&false);
  v_652 = !(controller_ck_39_1);
  sub_50 = (v_652&&false);
  if (controller_light_failed_recovered) {
    sub_48 = sub_49;
  } else {
    sub_48 = sub_50;
  };
  sub_47 = sub_48;
  if (controller_c_air_1) {
    v_658 = false;
    v_653 = sub_47;
  } else {
    v_658 = sub_47;
    v_653 = false;
  };
  if (controller_light_failed_recovered) {
    sub_53 = sub_50;
  } else {
    sub_53 = sub_49;
  };
  sub_52 = sub_53;
  if (controller_c_air_1) {
    v_656 = sub_52;
    v_654 = sub_52;
    sub_51 = sub_47;
  } else {
    v_656 = sub_47;
    v_654 = false;
    sub_51 = sub_52;
  };
  if (controller_v_271) {
    v_655 = v_654;
  } else {
    v_655 = sub_51;
  };
  if (controller_c_air_2) {
    sub_46 = v_653;
  } else {
    sub_46 = v_655;
  };
  sub_54 = sub_52;
  if (controller_v_271) {
    v_659 = v_658;
    v_657 = v_656;
  } else {
    v_659 = sub_54;
    v_657 = sub_54;
  };
  if (controller_c_air_2) {
    v_660 = v_657;
  } else {
    v_660 = v_659;
  };
  if (controller_v_272) {
    v_661 = v_660;
  } else {
    v_661 = sub_46;
  };
  if (controller_c_pc) {
    v_662 = v_661;
  } else {
    v_662 = sub_12;
  };
  if (controller_c_window) {
    sub_45 = v_662;
  } else {
    sub_45 = sub_12;
  };
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  if (controller_air_failed_recovered) {
    v_663 = sub_42;
    sub_41 = sub_18;
  } else {
    v_663 = sub_18;
    sub_41 = sub_42;
  };
  if (controller_ck_34_1) {
    sub_40 = v_663;
  } else {
    sub_40 = sub_41;
  };
  if (controller_cleaner) {
    v_664 = sub_16;
    sub_39 = sub_40;
  } else {
    v_664 = sub_40;
    sub_39 = sub_16;
  };
  if (controller_ck_25_1) {
    sub_38 = v_664;
  } else {
    sub_38 = sub_39;
  };
  if (controller_worker) {
    v_672 = sub_38;
    sub_4 = sub_5;
  } else {
    v_672 = sub_5;
    sub_4 = sub_38;
  };
  if (controller_ck_23_1) {
    sub_3 = v_672;
  } else {
    sub_3 = sub_4;
  };
  sub_63 = sub_28;
  sub_62 = sub_63;
  sub_61 = sub_62;
  if (controller_air_failed_recovered) {
    v_649 = sub_29;
    sub_60 = sub_61;
  } else {
    v_649 = sub_61;
    sub_60 = sub_29;
  };
  if (controller_ck_34_1) {
    sub_59 = v_649;
  } else {
    sub_59 = sub_60;
  };
  if (controller_cleaner) {
    v_650 = sub_59;
    sub_58 = sub_7;
  } else {
    v_650 = sub_7;
    sub_58 = sub_59;
  };
  if (controller_ck_25_1) {
    sub_57 = v_650;
  } else {
    sub_57 = sub_58;
  };
  if (controller_c_air_1) {
    sub_76 = sub_14;
  } else {
    sub_76 = sub_47;
  };
  sub_77 = sub_47;
  if (controller_v_271) {
    v_645 = sub_77;
  } else {
    v_645 = sub_76;
  };
  if (controller_c_air_2) {
    sub_75 = sub_76;
  } else {
    sub_75 = v_645;
  };
  if (controller_c_air_1) {
    v_644 = sub_47;
  } else {
    v_644 = sub_14;
  };
  if (controller_v_271) {
    sub_78 = v_644;
  } else {
    sub_78 = sub_77;
  };
  if (controller_v_272) {
    sub_74 = sub_78;
  } else {
    sub_74 = sub_75;
  };
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_80 = sub_34;
  sub_79 = sub_80;
  if (controller_blind_failed_recovered) {
    v_646 = sub_79;
    sub_71 = sub_72;
  } else {
    v_646 = sub_72;
    sub_71 = sub_79;
  };
  if (controller_ck_44_1) {
    sub_70 = v_646;
  } else {
    sub_70 = sub_71;
  };
  sub_69 = sub_70;
  sub_68 = sub_69;
  if (controller_air_failed_recovered) {
    v_647 = sub_68;
    sub_67 = sub_61;
  } else {
    v_647 = sub_61;
    sub_67 = sub_68;
  };
  if (controller_ck_34_1) {
    sub_66 = v_647;
  } else {
    sub_66 = sub_67;
  };
  if (controller_cleaner) {
    v_648 = sub_59;
    sub_65 = sub_66;
  } else {
    v_648 = sub_66;
    sub_65 = sub_59;
  };
  if (controller_ck_25_1) {
    sub_64 = v_648;
  } else {
    sub_64 = sub_65;
  };
  if (controller_worker) {
    v_651 = sub_64;
    sub_56 = sub_57;
  } else {
    v_651 = sub_57;
    sub_56 = sub_64;
  };
  if (controller_ck_23_1) {
    sub_55 = v_651;
  } else {
    sub_55 = sub_56;
  };
  if (controller_change_shift) {
    v_673 = sub_55;
    sub_2 = sub_3;
  } else {
    v_673 = sub_3;
    sub_2 = sub_55;
  };
  if (controller_ck_1) {
    sub_1 = v_673;
  } else {
    sub_1 = sub_2;
  };
  sub_94 = true;
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  if (controller_c_pc) {
    v_641 = false;
  } else {
    v_641 = sub_91;
  };
  if (controller_c_window) {
    sub_90 = v_641;
  } else {
    sub_90 = false;
  };
  sub_89 = sub_90;
  sub_88 = sub_89;
  sub_87 = sub_88;
  sub_86 = sub_87;
  if (controller_c_door) {
    v_638 = false;
    sub_106 = sub_94;
  } else {
    v_638 = sub_94;
    sub_106 = false;
  };
  if (controller_ck_19_1) {
    sub_105 = v_638;
  } else {
    sub_105 = sub_106;
  };
  sub_104 = sub_105;
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  if (controller_c_window) {
    sub_107 = false;
  } else {
    sub_107 = sub_102;
  };
  if (controller_blind_failed_recovered) {
    v_639 = sub_107;
    sub_100 = sub_101;
  } else {
    v_639 = sub_101;
    sub_100 = sub_107;
  };
  if (controller_ck_44_1) {
    sub_99 = v_639;
  } else {
    sub_99 = sub_100;
  };
  sub_98 = sub_99;
  sub_97 = sub_98;
  if (controller_air_failed_recovered) {
    v_640 = sub_29;
    sub_96 = sub_97;
  } else {
    v_640 = sub_97;
    sub_96 = sub_29;
  };
  if (controller_ck_34_1) {
    sub_95 = v_640;
  } else {
    sub_95 = sub_96;
  };
  if (controller_cleaner) {
    v_642 = sub_95;
    sub_85 = sub_86;
  } else {
    v_642 = sub_86;
    sub_85 = sub_95;
  };
  if (controller_ck_25_1) {
    sub_84 = v_642;
  } else {
    sub_84 = sub_85;
  };
  v_625 = !(controller_ck_39_1);
  sub_119 = (v_625||false);
  sub_120 = (controller_ck_39_1||false);
  if (controller_light_failed_recovered) {
    sub_118 = sub_119;
  } else {
    sub_118 = sub_120;
  };
  sub_117 = sub_118;
  if (controller_c_air_1) {
    v_631 = false;
    v_626 = sub_117;
  } else {
    v_631 = sub_117;
    v_626 = false;
  };
  if (controller_light_failed_recovered) {
    sub_123 = sub_120;
  } else {
    sub_123 = sub_119;
  };
  sub_122 = sub_123;
  if (controller_c_air_1) {
    v_629 = sub_122;
    v_627 = sub_122;
    sub_121 = sub_117;
  } else {
    v_629 = sub_117;
    v_627 = false;
    sub_121 = sub_122;
  };
  if (controller_v_271) {
    v_628 = v_627;
  } else {
    v_628 = sub_121;
  };
  if (controller_c_air_2) {
    sub_116 = v_626;
  } else {
    sub_116 = v_628;
  };
  sub_124 = sub_122;
  if (controller_v_271) {
    v_632 = v_631;
    v_630 = v_629;
  } else {
    v_632 = sub_124;
    v_630 = sub_124;
  };
  if (controller_c_air_2) {
    v_633 = v_630;
  } else {
    v_633 = v_632;
  };
  if (controller_v_272) {
    v_634 = v_633;
  } else {
    v_634 = sub_116;
  };
  if (controller_c_pc) {
    v_635 = v_634;
  } else {
    v_635 = sub_91;
  };
  if (controller_c_window) {
    sub_115 = v_635;
  } else {
    sub_115 = sub_91;
  };
  sub_114 = sub_115;
  sub_113 = sub_114;
  sub_112 = sub_113;
  if (controller_air_failed_recovered) {
    v_636 = sub_112;
    sub_111 = sub_97;
  } else {
    v_636 = sub_97;
    sub_111 = sub_112;
  };
  if (controller_ck_34_1) {
    sub_110 = v_636;
  } else {
    sub_110 = sub_111;
  };
  if (controller_cleaner) {
    v_637 = sub_95;
    sub_109 = sub_110;
  } else {
    v_637 = sub_110;
    sub_109 = sub_95;
  };
  if (controller_ck_25_1) {
    sub_108 = v_637;
  } else {
    sub_108 = sub_109;
  };
  if (controller_worker) {
    v_643 = sub_108;
    sub_83 = sub_84;
  } else {
    v_643 = sub_84;
    sub_83 = sub_108;
  };
  if (controller_ck_23_1) {
    sub_82 = v_643;
  } else {
    sub_82 = sub_83;
  };
  sub_133 = sub_107;
  sub_132 = sub_133;
  sub_131 = sub_132;
  if (controller_air_failed_recovered) {
    v_622 = sub_29;
    sub_130 = sub_131;
  } else {
    v_622 = sub_131;
    sub_130 = sub_29;
  };
  if (controller_ck_34_1) {
    sub_129 = v_622;
  } else {
    sub_129 = sub_130;
  };
  if (controller_cleaner) {
    v_623 = sub_129;
    sub_128 = sub_86;
  } else {
    v_623 = sub_86;
    sub_128 = sub_129;
  };
  if (controller_ck_25_1) {
    sub_127 = v_623;
  } else {
    sub_127 = sub_128;
  };
  if (controller_c_air_1) {
    sub_146 = sub_93;
  } else {
    sub_146 = sub_117;
  };
  sub_147 = sub_117;
  if (controller_v_271) {
    v_618 = sub_147;
  } else {
    v_618 = sub_146;
  };
  if (controller_c_air_2) {
    sub_145 = sub_146;
  } else {
    sub_145 = v_618;
  };
  if (controller_c_air_1) {
    v_617 = sub_117;
  } else {
    v_617 = sub_93;
  };
  if (controller_v_271) {
    sub_148 = v_617;
  } else {
    sub_148 = sub_147;
  };
  if (controller_v_272) {
    sub_144 = sub_148;
  } else {
    sub_144 = sub_145;
  };
  sub_143 = sub_144;
  sub_142 = sub_143;
  if (controller_c_air_1) {
    sub_153 = sub_93;
  } else {
    sub_153 = false;
  };
  if (controller_v_271) {
    v_616 = false;
  } else {
    v_616 = sub_153;
  };
  if (controller_c_air_2) {
    sub_152 = sub_153;
  } else {
    sub_152 = v_616;
  };
  if (controller_c_air_1) {
    v = false;
  } else {
    v = sub_93;
  };
  if (controller_v_271) {
    sub_154 = v;
  } else {
    sub_154 = false;
  };
  if (controller_v_272) {
    sub_151 = sub_154;
  } else {
    sub_151 = sub_152;
  };
  sub_150 = sub_151;
  sub_149 = sub_150;
  if (controller_blind_failed_recovered) {
    v_619 = sub_149;
    sub_141 = sub_142;
  } else {
    v_619 = sub_142;
    sub_141 = sub_149;
  };
  if (controller_ck_44_1) {
    sub_140 = v_619;
  } else {
    sub_140 = sub_141;
  };
  sub_139 = sub_140;
  sub_138 = sub_139;
  if (controller_air_failed_recovered) {
    v_620 = sub_138;
    sub_137 = sub_131;
  } else {
    v_620 = sub_131;
    sub_137 = sub_138;
  };
  if (controller_ck_34_1) {
    sub_136 = v_620;
  } else {
    sub_136 = sub_137;
  };
  if (controller_cleaner) {
    v_621 = sub_129;
    sub_135 = sub_136;
  } else {
    v_621 = sub_136;
    sub_135 = sub_129;
  };
  if (controller_ck_25_1) {
    sub_134 = v_621;
  } else {
    sub_134 = sub_135;
  };
  if (controller_worker) {
    v_624 = sub_134;
    sub_126 = sub_127;
  } else {
    v_624 = sub_127;
    sub_126 = sub_134;
  };
  if (controller_ck_23_1) {
    sub_125 = v_624;
  } else {
    sub_125 = sub_126;
  };
  if (controller_change_shift) {
    v_674 = sub_125;
    sub_81 = sub_82;
  } else {
    v_674 = sub_82;
    sub_81 = sub_125;
  };
  if (controller_ck_1) {
    v_675 = v_674;
  } else {
    v_675 = sub_81;
  };
  if (p_controller_c_closet) {
    sub_0 = v_675;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_closet = sub_0;;
}

void Controller_controller__controller_controller_controller_c_air_2_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered, int controller_ck_1,
  int controller_pnr_14, int controller_ck_19_1, int controller_pnr_13,
  int controller_ck_21_1, int controller_pnr_12, int controller_ck_23_1,
  int controller_pnr_11, int controller_ck_25_1, int controller_pnr_10,
  int controller_ck_27_1, int controller_pnr_9, int controller_ck_29_1,
  int controller_pnr_8, int controller_v_272, int controller_v_271,
  int controller_pnr_7, int controller_ck_34_1, int controller_pnr_6,
  int controller_ck_37_1, int controller_pnr_5, int controller_ck_39_1,
  int controller_pnr_4, int controller_ck_42_1, int controller_pnr_3,
  int controller_ck_44_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_2_out* _out) {
  
  int v_724;
  int v_723;
  int v_722;
  int v_721;
  int v_720;
  int v_719;
  int v_718;
  int v_717;
  int v_716;
  int v_715;
  int v_714;
  int v_713;
  int v_712;
  int v_711;
  int v_710;
  int v_709;
  int v_708;
  int v_707;
  int v_706;
  int v_705;
  int v_704;
  int v_703;
  int v_702;
  int v_701;
  int v_700;
  int v_699;
  int v_698;
  int v_697;
  int v_696;
  int v_695;
  int v_694;
  int v_693;
  int v_692;
  int v_691;
  int v_690;
  int v_689;
  int v_688;
  int v_687;
  int v_686;
  int v_685;
  int v_684;
  int v_683;
  int v_682;
  int v_681;
  int v_680;
  int v_679;
  int v_678;
  int v_677;
  int v_676;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  sub_14 = false;
  sub_13 = sub_14;
  sub_12 = sub_13;
  if (controller_c_pc) {
    v_719 = false;
  } else {
    v_719 = sub_12;
  };
  if (controller_c_window) {
    sub_11 = v_719;
  } else {
    sub_11 = false;
  };
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (controller_c_door) {
    v_716 = false;
    sub_25 = sub_14;
  } else {
    v_716 = sub_14;
    sub_25 = false;
  };
  if (controller_ck_19_1) {
    sub_24 = v_716;
  } else {
    sub_24 = sub_25;
  };
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (controller_c_window) {
    sub_26 = false;
  } else {
    sub_26 = sub_22;
  };
  if (controller_blind_failed_recovered) {
    v_717 = sub_26;
    sub_20 = sub_21;
  } else {
    v_717 = sub_21;
    sub_20 = sub_26;
  };
  if (controller_ck_44_1) {
    sub_19 = v_717;
  } else {
    sub_19 = sub_20;
  };
  sub_18 = sub_19;
  sub_17 = sub_18;
  if (controller_c_air_1) {
    v_714 = false;
  } else {
    v_714 = sub_13;
  };
  if (controller_v_271) {
    v_715 = v_714;
  } else {
    v_715 = false;
  };
  if (controller_c_air_1) {
    sub_34 = sub_13;
  } else {
    sub_34 = false;
  };
  sub_37 = true;
  sub_36 = sub_37;
  if (controller_c_air_1) {
    sub_35 = sub_36;
  } else {
    sub_35 = false;
  };
  if (controller_v_271) {
    sub_33 = sub_35;
  } else {
    sub_33 = sub_34;
  };
  if (controller_v_272) {
    sub_32 = v_715;
  } else {
    sub_32 = sub_33;
  };
  if (controller_c_pc) {
    sub_31 = false;
  } else {
    sub_31 = sub_32;
  };
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  if (controller_air_failed_recovered) {
    v_718 = sub_27;
    sub_16 = sub_17;
  } else {
    v_718 = sub_17;
    sub_16 = sub_27;
  };
  if (controller_ck_34_1) {
    sub_15 = v_718;
  } else {
    sub_15 = sub_16;
  };
  if (controller_cleaner) {
    v_720 = sub_15;
    sub_6 = sub_7;
  } else {
    v_720 = sub_7;
    sub_6 = sub_15;
  };
  if (controller_ck_25_1) {
    sub_5 = v_720;
  } else {
    sub_5 = sub_6;
  };
  sub_50 = (controller_ck_39_1&&false);
  v_707 = !(controller_ck_39_1);
  sub_51 = (v_707&&false);
  if (controller_light_failed_recovered) {
    sub_49 = sub_50;
  } else {
    sub_49 = sub_51;
  };
  sub_48 = sub_49;
  if (controller_light_failed_recovered) {
    sub_53 = sub_51;
  } else {
    sub_53 = sub_50;
  };
  sub_52 = sub_53;
  if (controller_c_air_1) {
    sub_47 = sub_48;
  } else {
    sub_47 = sub_52;
  };
  sub_56 = !(controller_ck_39_1);
  sub_57 = controller_ck_39_1;
  if (controller_light_failed_recovered) {
    sub_55 = sub_56;
  } else {
    sub_55 = sub_57;
  };
  if (controller_c_air_1) {
    sub_54 = sub_55;
  } else {
    sub_54 = false;
  };
  if (controller_v_271) {
    sub_46 = sub_54;
  } else {
    sub_46 = sub_47;
  };
  sub_58 = sub_52;
  sub_61 = (controller_ck_39_1||false);
  v_706 = !(controller_ck_39_1);
  sub_62 = (v_706||false);
  if (controller_light_failed_recovered) {
    sub_60 = sub_61;
  } else {
    sub_60 = sub_62;
  };
  sub_59 = sub_60;
  if (controller_c_air_1) {
    v_708 = sub_59;
  } else {
    v_708 = sub_48;
  };
  if (controller_v_271) {
    v_709 = v_708;
  } else {
    v_709 = sub_58;
  };
  if (controller_v_272) {
    v_710 = v_709;
  } else {
    v_710 = sub_46;
  };
  if (controller_c_pc) {
    v_711 = v_710;
  } else {
    v_711 = sub_12;
  };
  if (controller_c_window) {
    sub_45 = v_711;
  } else {
    sub_45 = sub_12;
  };
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  if (controller_air_failed_recovered) {
    v_712 = sub_42;
    sub_41 = sub_17;
  } else {
    v_712 = sub_17;
    sub_41 = sub_42;
  };
  if (controller_ck_34_1) {
    sub_40 = v_712;
  } else {
    sub_40 = sub_41;
  };
  if (controller_cleaner) {
    v_713 = sub_15;
    sub_39 = sub_40;
  } else {
    v_713 = sub_40;
    sub_39 = sub_15;
  };
  if (controller_ck_25_1) {
    sub_38 = v_713;
  } else {
    sub_38 = sub_39;
  };
  if (controller_worker) {
    v_721 = sub_38;
    sub_4 = sub_5;
  } else {
    v_721 = sub_5;
    sub_4 = sub_38;
  };
  if (controller_ck_23_1) {
    sub_3 = v_721;
  } else {
    sub_3 = sub_4;
  };
  sub_71 = sub_26;
  sub_70 = sub_71;
  sub_69 = sub_70;
  if (controller_air_failed_recovered) {
    v_703 = sub_27;
    sub_68 = sub_69;
  } else {
    v_703 = sub_69;
    sub_68 = sub_27;
  };
  if (controller_ck_34_1) {
    sub_67 = v_703;
  } else {
    sub_67 = sub_68;
  };
  if (controller_cleaner) {
    v_704 = sub_67;
    sub_66 = sub_7;
  } else {
    v_704 = sub_7;
    sub_66 = sub_67;
  };
  if (controller_ck_25_1) {
    sub_65 = v_704;
  } else {
    sub_65 = sub_66;
  };
  if (controller_c_air_1) {
    v_698 = sub_48;
    sub_84 = sub_13;
  } else {
    v_698 = sub_13;
    sub_84 = sub_48;
  };
  if (controller_light_failed_recovered) {
    sub_85 = sub_57;
  } else {
    sub_85 = sub_56;
  };
  if (controller_c_air_1) {
    v_697 = sub_85;
  } else {
    v_697 = sub_48;
  };
  if (controller_v_271) {
    sub_83 = v_697;
  } else {
    sub_83 = sub_84;
  };
  sub_86 = sub_48;
  if (controller_v_271) {
    v_699 = v_698;
  } else {
    v_699 = sub_86;
  };
  if (controller_v_272) {
    sub_82 = v_699;
  } else {
    sub_82 = sub_83;
  };
  sub_81 = sub_82;
  sub_80 = sub_81;
  sub_88 = sub_32;
  sub_87 = sub_88;
  if (controller_blind_failed_recovered) {
    v_700 = sub_87;
    sub_79 = sub_80;
  } else {
    v_700 = sub_80;
    sub_79 = sub_87;
  };
  if (controller_ck_44_1) {
    sub_78 = v_700;
  } else {
    sub_78 = sub_79;
  };
  sub_77 = sub_78;
  sub_76 = sub_77;
  if (controller_air_failed_recovered) {
    v_701 = sub_76;
    sub_75 = sub_69;
  } else {
    v_701 = sub_69;
    sub_75 = sub_76;
  };
  if (controller_ck_34_1) {
    sub_74 = v_701;
  } else {
    sub_74 = sub_75;
  };
  if (controller_cleaner) {
    v_702 = sub_67;
    sub_73 = sub_74;
  } else {
    v_702 = sub_74;
    sub_73 = sub_67;
  };
  if (controller_ck_25_1) {
    sub_72 = v_702;
  } else {
    sub_72 = sub_73;
  };
  if (controller_worker) {
    v_705 = sub_72;
    sub_64 = sub_65;
  } else {
    v_705 = sub_65;
    sub_64 = sub_72;
  };
  if (controller_ck_23_1) {
    sub_63 = v_705;
  } else {
    sub_63 = sub_64;
  };
  if (controller_change_shift) {
    v_722 = sub_63;
    sub_2 = sub_3;
  } else {
    v_722 = sub_3;
    sub_2 = sub_63;
  };
  if (controller_ck_1) {
    sub_1 = v_722;
  } else {
    sub_1 = sub_2;
  };
  sub_99 = sub_36;
  if (controller_c_pc) {
    v_694 = false;
  } else {
    v_694 = sub_99;
  };
  if (controller_c_window) {
    sub_98 = v_694;
  } else {
    sub_98 = false;
  };
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  sub_94 = sub_95;
  if (controller_c_door) {
    v_691 = false;
    sub_110 = sub_37;
  } else {
    v_691 = sub_37;
    sub_110 = false;
  };
  if (controller_ck_19_1) {
    sub_109 = v_691;
  } else {
    sub_109 = sub_110;
  };
  sub_108 = sub_109;
  sub_107 = sub_108;
  sub_106 = sub_107;
  if (controller_c_window) {
    sub_111 = false;
  } else {
    sub_111 = sub_107;
  };
  if (controller_blind_failed_recovered) {
    v_692 = sub_111;
    sub_105 = sub_106;
  } else {
    v_692 = sub_106;
    sub_105 = sub_111;
  };
  if (controller_ck_44_1) {
    sub_104 = v_692;
  } else {
    sub_104 = sub_105;
  };
  sub_103 = sub_104;
  sub_102 = sub_103;
  if (controller_c_air_1) {
    v_689 = false;
  } else {
    v_689 = sub_36;
  };
  if (controller_v_271) {
    v_690 = v_689;
  } else {
    v_690 = false;
  };
  if (controller_v_272) {
    sub_117 = v_690;
  } else {
    sub_117 = sub_35;
  };
  if (controller_c_pc) {
    sub_116 = false;
  } else {
    sub_116 = sub_117;
  };
  sub_115 = sub_116;
  sub_114 = sub_115;
  sub_113 = sub_114;
  sub_112 = sub_113;
  if (controller_air_failed_recovered) {
    v_693 = sub_112;
    sub_101 = sub_102;
  } else {
    v_693 = sub_102;
    sub_101 = sub_112;
  };
  if (controller_ck_34_1) {
    sub_100 = v_693;
  } else {
    sub_100 = sub_101;
  };
  if (controller_cleaner) {
    v_695 = sub_100;
    sub_93 = sub_94;
  } else {
    v_695 = sub_94;
    sub_93 = sub_100;
  };
  if (controller_ck_25_1) {
    sub_92 = v_695;
  } else {
    sub_92 = sub_93;
  };
  if (controller_light_failed_recovered) {
    sub_129 = sub_62;
  } else {
    sub_129 = sub_61;
  };
  sub_128 = sub_129;
  if (controller_c_air_1) {
    v_683 = sub_59;
    sub_127 = sub_128;
  } else {
    v_683 = sub_128;
    sub_127 = sub_52;
  };
  if (controller_v_271) {
    sub_126 = sub_54;
  } else {
    sub_126 = sub_127;
  };
  sub_130 = sub_59;
  if (controller_v_271) {
    v_684 = v_683;
  } else {
    v_684 = sub_130;
  };
  if (controller_v_272) {
    v_685 = v_684;
  } else {
    v_685 = sub_126;
  };
  if (controller_c_pc) {
    v_686 = v_685;
  } else {
    v_686 = sub_99;
  };
  if (controller_c_window) {
    sub_125 = v_686;
  } else {
    sub_125 = sub_99;
  };
  sub_124 = sub_125;
  sub_123 = sub_124;
  sub_122 = sub_123;
  if (controller_air_failed_recovered) {
    v_687 = sub_122;
    sub_121 = sub_102;
  } else {
    v_687 = sub_102;
    sub_121 = sub_122;
  };
  if (controller_ck_34_1) {
    sub_120 = v_687;
  } else {
    sub_120 = sub_121;
  };
  if (controller_cleaner) {
    v_688 = sub_100;
    sub_119 = sub_120;
  } else {
    v_688 = sub_120;
    sub_119 = sub_100;
  };
  if (controller_ck_25_1) {
    sub_118 = v_688;
  } else {
    sub_118 = sub_119;
  };
  if (controller_worker) {
    v_696 = sub_118;
    sub_91 = sub_92;
  } else {
    v_696 = sub_92;
    sub_91 = sub_118;
  };
  if (controller_ck_23_1) {
    sub_90 = v_696;
  } else {
    sub_90 = sub_91;
  };
  sub_139 = sub_111;
  sub_138 = sub_139;
  sub_137 = sub_138;
  if (controller_air_failed_recovered) {
    v_680 = sub_112;
    sub_136 = sub_137;
  } else {
    v_680 = sub_137;
    sub_136 = sub_112;
  };
  if (controller_ck_34_1) {
    sub_135 = v_680;
  } else {
    sub_135 = sub_136;
  };
  if (controller_cleaner) {
    v_681 = sub_135;
    sub_134 = sub_94;
  } else {
    v_681 = sub_94;
    sub_134 = sub_135;
  };
  if (controller_ck_25_1) {
    sub_133 = v_681;
  } else {
    sub_133 = sub_134;
  };
  if (controller_c_air_1) {
    v = sub_128;
    sub_151 = sub_36;
  } else {
    v = sub_36;
    sub_151 = sub_128;
  };
  sub_152 = sub_128;
  if (controller_v_271) {
    v_676 = v;
  } else {
    v_676 = sub_152;
  };
  if (controller_v_272) {
    sub_150 = v_676;
  } else {
    sub_150 = sub_151;
  };
  sub_149 = sub_150;
  sub_148 = sub_149;
  sub_154 = sub_117;
  sub_153 = sub_154;
  if (controller_blind_failed_recovered) {
    v_677 = sub_153;
    sub_147 = sub_148;
  } else {
    v_677 = sub_148;
    sub_147 = sub_153;
  };
  if (controller_ck_44_1) {
    sub_146 = v_677;
  } else {
    sub_146 = sub_147;
  };
  sub_145 = sub_146;
  sub_144 = sub_145;
  if (controller_air_failed_recovered) {
    v_678 = sub_144;
    sub_143 = sub_137;
  } else {
    v_678 = sub_137;
    sub_143 = sub_144;
  };
  if (controller_ck_34_1) {
    sub_142 = v_678;
  } else {
    sub_142 = sub_143;
  };
  if (controller_cleaner) {
    v_679 = sub_135;
    sub_141 = sub_142;
  } else {
    v_679 = sub_142;
    sub_141 = sub_135;
  };
  if (controller_ck_25_1) {
    sub_140 = v_679;
  } else {
    sub_140 = sub_141;
  };
  if (controller_worker) {
    v_682 = sub_140;
    sub_132 = sub_133;
  } else {
    v_682 = sub_133;
    sub_132 = sub_140;
  };
  if (controller_ck_23_1) {
    sub_131 = v_682;
  } else {
    sub_131 = sub_132;
  };
  if (controller_change_shift) {
    v_723 = sub_131;
    sub_89 = sub_90;
  } else {
    v_723 = sub_90;
    sub_89 = sub_131;
  };
  if (controller_ck_1) {
    v_724 = v_723;
  } else {
    v_724 = sub_89;
  };
  if (p_controller_c_air_2) {
    sub_0 = v_724;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_air_2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_air_1_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered, int controller_ck_1,
  int controller_pnr_14, int controller_ck_19_1, int controller_pnr_13,
  int controller_ck_21_1, int controller_pnr_12, int controller_ck_23_1,
  int controller_pnr_11, int controller_ck_25_1, int controller_pnr_10,
  int controller_ck_27_1, int controller_pnr_9, int controller_ck_29_1,
  int controller_pnr_8, int controller_v_272, int controller_v_271,
  int controller_pnr_7, int controller_ck_34_1, int controller_pnr_6,
  int controller_ck_37_1, int controller_pnr_5, int controller_ck_39_1,
  int controller_pnr_4, int controller_ck_42_1, int controller_pnr_3,
  int controller_ck_44_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_1_out* _out) {
  
  int v_765;
  int v_764;
  int v_763;
  int v_762;
  int v_761;
  int v_760;
  int v_759;
  int v_758;
  int v_757;
  int v_756;
  int v_755;
  int v_754;
  int v_753;
  int v_752;
  int v_751;
  int v_750;
  int v_749;
  int v_748;
  int v_747;
  int v_746;
  int v_745;
  int v_744;
  int v_743;
  int v_742;
  int v_741;
  int v_740;
  int v_739;
  int v_738;
  int v_737;
  int v_736;
  int v_735;
  int v_734;
  int v_733;
  int v_732;
  int v_731;
  int v_730;
  int v_729;
  int v_728;
  int v_727;
  int v_726;
  int v_725;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  sub_13 = false;
  sub_12 = sub_13;
  if (controller_c_pc) {
    v_760 = false;
  } else {
    v_760 = sub_12;
  };
  if (controller_c_window) {
    sub_11 = v_760;
  } else {
    sub_11 = false;
  };
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (controller_c_door) {
    v_757 = false;
    sub_23 = sub_13;
  } else {
    v_757 = sub_13;
    sub_23 = false;
  };
  if (controller_ck_19_1) {
    sub_22 = v_757;
  } else {
    sub_22 = sub_23;
  };
  sub_21 = sub_22;
  sub_20 = sub_21;
  if (controller_c_window) {
    sub_24 = false;
  } else {
    sub_24 = sub_21;
  };
  if (controller_blind_failed_recovered) {
    v_758 = sub_24;
    sub_19 = sub_20;
  } else {
    v_758 = sub_20;
    sub_19 = sub_24;
  };
  if (controller_ck_44_1) {
    sub_18 = v_758;
  } else {
    sub_18 = sub_19;
  };
  sub_17 = sub_18;
  sub_16 = sub_17;
  if (controller_v_271) {
    v_756 = sub_12;
  } else {
    v_756 = false;
  };
  sub_32 = true;
  sub_31 = sub_32;
  if (controller_v_272) {
    sub_30 = v_756;
  } else {
    sub_30 = sub_31;
  };
  if (controller_c_pc) {
    sub_29 = false;
  } else {
    sub_29 = sub_30;
  };
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  if (controller_air_failed_recovered) {
    v_759 = sub_25;
    sub_15 = sub_16;
  } else {
    v_759 = sub_16;
    sub_15 = sub_25;
  };
  if (controller_ck_34_1) {
    sub_14 = v_759;
  } else {
    sub_14 = sub_15;
  };
  if (controller_cleaner) {
    v_761 = sub_14;
    sub_6 = sub_7;
  } else {
    v_761 = sub_7;
    sub_6 = sub_14;
  };
  if (controller_ck_25_1) {
    sub_5 = v_761;
  } else {
    sub_5 = sub_6;
  };
  sub_44 = !(controller_ck_39_1);
  sub_45 = controller_ck_39_1;
  if (controller_light_failed_recovered) {
    sub_43 = sub_44;
  } else {
    sub_43 = sub_45;
  };
  sub_42 = sub_43;
  if (controller_v_271) {
    sub_41 = sub_31;
  } else {
    sub_41 = sub_42;
  };
  v_750 = !(controller_ck_39_1);
  sub_48 = (v_750&&false);
  sub_49 = (controller_ck_39_1&&false);
  if (controller_light_failed_recovered) {
    sub_47 = sub_48;
  } else {
    sub_47 = sub_49;
  };
  sub_46 = sub_47;
  if (controller_light_failed_recovered) {
    sub_51 = sub_45;
  } else {
    sub_51 = sub_44;
  };
  sub_50 = sub_51;
  if (controller_v_271) {
    v_751 = sub_50;
  } else {
    v_751 = sub_46;
  };
  if (controller_v_272) {
    v_752 = v_751;
  } else {
    v_752 = sub_41;
  };
  if (controller_c_pc) {
    v_753 = v_752;
  } else {
    v_753 = sub_12;
  };
  if (controller_c_window) {
    sub_40 = v_753;
  } else {
    sub_40 = sub_12;
  };
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  if (controller_air_failed_recovered) {
    v_754 = sub_37;
    sub_36 = sub_16;
  } else {
    v_754 = sub_16;
    sub_36 = sub_37;
  };
  if (controller_ck_34_1) {
    sub_35 = v_754;
  } else {
    sub_35 = sub_36;
  };
  if (controller_cleaner) {
    v_755 = sub_14;
    sub_34 = sub_35;
  } else {
    v_755 = sub_35;
    sub_34 = sub_14;
  };
  if (controller_ck_25_1) {
    sub_33 = v_755;
  } else {
    sub_33 = sub_34;
  };
  if (controller_worker) {
    v_762 = sub_33;
    sub_4 = sub_5;
  } else {
    v_762 = sub_5;
    sub_4 = sub_33;
  };
  if (controller_ck_23_1) {
    sub_3 = v_762;
  } else {
    sub_3 = sub_4;
  };
  sub_60 = sub_24;
  sub_59 = sub_60;
  sub_58 = sub_59;
  if (controller_air_failed_recovered) {
    v_747 = sub_25;
    sub_57 = sub_58;
  } else {
    v_747 = sub_58;
    sub_57 = sub_25;
  };
  if (controller_ck_34_1) {
    sub_56 = v_747;
  } else {
    sub_56 = sub_57;
  };
  if (controller_cleaner) {
    v_748 = sub_56;
    sub_55 = sub_7;
  } else {
    v_748 = sub_7;
    sub_55 = sub_56;
  };
  if (controller_ck_25_1) {
    sub_54 = v_748;
  } else {
    sub_54 = sub_55;
  };
  if (controller_light_failed_recovered) {
    sub_73 = sub_49;
  } else {
    sub_73 = sub_48;
  };
  sub_72 = sub_73;
  if (controller_v_271) {
    v_743 = sub_12;
  } else {
    v_743 = sub_72;
  };
  if (controller_v_272) {
    sub_71 = v_743;
  } else {
    sub_71 = sub_50;
  };
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_75 = sub_30;
  sub_74 = sub_75;
  if (controller_blind_failed_recovered) {
    v_744 = sub_74;
    sub_68 = sub_69;
  } else {
    v_744 = sub_69;
    sub_68 = sub_74;
  };
  if (controller_ck_44_1) {
    sub_67 = v_744;
  } else {
    sub_67 = sub_68;
  };
  sub_66 = sub_67;
  sub_65 = sub_66;
  if (controller_air_failed_recovered) {
    v_745 = sub_65;
    sub_64 = sub_58;
  } else {
    v_745 = sub_58;
    sub_64 = sub_65;
  };
  if (controller_ck_34_1) {
    sub_63 = v_745;
  } else {
    sub_63 = sub_64;
  };
  if (controller_cleaner) {
    v_746 = sub_56;
    sub_62 = sub_63;
  } else {
    v_746 = sub_63;
    sub_62 = sub_56;
  };
  if (controller_ck_25_1) {
    sub_61 = v_746;
  } else {
    sub_61 = sub_62;
  };
  if (controller_worker) {
    v_749 = sub_61;
    sub_53 = sub_54;
  } else {
    v_749 = sub_54;
    sub_53 = sub_61;
  };
  if (controller_ck_23_1) {
    sub_52 = v_749;
  } else {
    sub_52 = sub_53;
  };
  if (controller_change_shift) {
    v_763 = sub_52;
    sub_2 = sub_3;
  } else {
    v_763 = sub_3;
    sub_2 = sub_52;
  };
  if (controller_ck_1) {
    sub_1 = v_763;
  } else {
    sub_1 = sub_2;
  };
  if (controller_c_pc) {
    v_740 = false;
  } else {
    v_740 = sub_31;
  };
  if (controller_c_window) {
    sub_85 = v_740;
  } else {
    sub_85 = false;
  };
  sub_84 = sub_85;
  sub_83 = sub_84;
  sub_82 = sub_83;
  sub_81 = sub_82;
  if (controller_c_door) {
    v_737 = false;
    sub_95 = sub_32;
  } else {
    v_737 = sub_32;
    sub_95 = false;
  };
  if (controller_ck_19_1) {
    sub_94 = v_737;
  } else {
    sub_94 = sub_95;
  };
  sub_93 = sub_94;
  sub_92 = sub_93;
  if (controller_c_window) {
    sub_96 = false;
  } else {
    sub_96 = sub_93;
  };
  if (controller_blind_failed_recovered) {
    v_738 = sub_96;
    sub_91 = sub_92;
  } else {
    v_738 = sub_92;
    sub_91 = sub_96;
  };
  if (controller_ck_44_1) {
    sub_90 = v_738;
  } else {
    sub_90 = sub_91;
  };
  sub_89 = sub_90;
  sub_88 = sub_89;
  if (controller_air_failed_recovered) {
    v_739 = sub_25;
    sub_87 = sub_88;
  } else {
    v_739 = sub_88;
    sub_87 = sub_25;
  };
  if (controller_ck_34_1) {
    sub_86 = v_739;
  } else {
    sub_86 = sub_87;
  };
  if (controller_cleaner) {
    v_741 = sub_86;
    sub_80 = sub_81;
  } else {
    v_741 = sub_81;
    sub_80 = sub_86;
  };
  if (controller_ck_25_1) {
    sub_79 = v_741;
  } else {
    sub_79 = sub_80;
  };
  sub_107 = (controller_ck_39_1||false);
  v_731 = !(controller_ck_39_1);
  sub_108 = (v_731||false);
  if (controller_light_failed_recovered) {
    sub_106 = sub_107;
  } else {
    sub_106 = sub_108;
  };
  sub_105 = sub_106;
  if (controller_v_271) {
    v_732 = sub_50;
  } else {
    v_732 = sub_105;
  };
  if (controller_v_272) {
    v_733 = v_732;
  } else {
    v_733 = sub_41;
  };
  if (controller_c_pc) {
    v_734 = v_733;
  } else {
    v_734 = sub_31;
  };
  if (controller_c_window) {
    sub_104 = v_734;
  } else {
    sub_104 = sub_31;
  };
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  if (controller_air_failed_recovered) {
    v_735 = sub_101;
    sub_100 = sub_88;
  } else {
    v_735 = sub_88;
    sub_100 = sub_101;
  };
  if (controller_ck_34_1) {
    sub_99 = v_735;
  } else {
    sub_99 = sub_100;
  };
  if (controller_cleaner) {
    v_736 = sub_86;
    sub_98 = sub_99;
  } else {
    v_736 = sub_99;
    sub_98 = sub_86;
  };
  if (controller_ck_25_1) {
    sub_97 = v_736;
  } else {
    sub_97 = sub_98;
  };
  if (controller_worker) {
    v_742 = sub_97;
    sub_78 = sub_79;
  } else {
    v_742 = sub_79;
    sub_78 = sub_97;
  };
  if (controller_ck_23_1) {
    sub_77 = v_742;
  } else {
    sub_77 = sub_78;
  };
  sub_117 = sub_96;
  sub_116 = sub_117;
  sub_115 = sub_116;
  if (controller_air_failed_recovered) {
    v_728 = sub_25;
    sub_114 = sub_115;
  } else {
    v_728 = sub_115;
    sub_114 = sub_25;
  };
  if (controller_ck_34_1) {
    sub_113 = v_728;
  } else {
    sub_113 = sub_114;
  };
  if (controller_cleaner) {
    v_729 = sub_113;
    sub_112 = sub_81;
  } else {
    v_729 = sub_81;
    sub_112 = sub_113;
  };
  if (controller_ck_25_1) {
    sub_111 = v_729;
  } else {
    sub_111 = sub_112;
  };
  if (controller_light_failed_recovered) {
    sub_130 = sub_108;
  } else {
    sub_130 = sub_107;
  };
  sub_129 = sub_130;
  if (controller_v_271) {
    v = sub_42;
  } else {
    v = sub_129;
  };
  if (controller_v_272) {
    sub_128 = v;
  } else {
    sub_128 = sub_31;
  };
  sub_127 = sub_128;
  sub_126 = sub_127;
  if (controller_blind_failed_recovered) {
    v_725 = sub_74;
    sub_125 = sub_126;
  } else {
    v_725 = sub_126;
    sub_125 = sub_74;
  };
  if (controller_ck_44_1) {
    sub_124 = v_725;
  } else {
    sub_124 = sub_125;
  };
  sub_123 = sub_124;
  sub_122 = sub_123;
  if (controller_air_failed_recovered) {
    v_726 = sub_122;
    sub_121 = sub_115;
  } else {
    v_726 = sub_115;
    sub_121 = sub_122;
  };
  if (controller_ck_34_1) {
    sub_120 = v_726;
  } else {
    sub_120 = sub_121;
  };
  if (controller_cleaner) {
    v_727 = sub_113;
    sub_119 = sub_120;
  } else {
    v_727 = sub_120;
    sub_119 = sub_113;
  };
  if (controller_ck_25_1) {
    sub_118 = v_727;
  } else {
    sub_118 = sub_119;
  };
  if (controller_worker) {
    v_730 = sub_118;
    sub_110 = sub_111;
  } else {
    v_730 = sub_111;
    sub_110 = sub_118;
  };
  if (controller_ck_23_1) {
    sub_109 = v_730;
  } else {
    sub_109 = sub_110;
  };
  if (controller_change_shift) {
    v_764 = sub_109;
    sub_76 = sub_77;
  } else {
    v_764 = sub_77;
    sub_76 = sub_109;
  };
  if (controller_ck_1) {
    v_765 = v_764;
  } else {
    v_765 = sub_76;
  };
  if (p_controller_c_air_1) {
    sub_0 = v_765;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_air_1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_window_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered, int controller_ck_1,
  int controller_pnr_14, int controller_ck_19_1, int controller_pnr_13,
  int controller_ck_21_1, int controller_pnr_12, int controller_ck_23_1,
  int controller_pnr_11, int controller_ck_25_1, int controller_pnr_10,
  int controller_ck_27_1, int controller_pnr_9, int controller_ck_29_1,
  int controller_pnr_8, int controller_v_272, int controller_v_271,
  int controller_pnr_7, int controller_ck_34_1, int controller_pnr_6,
  int controller_ck_37_1, int controller_pnr_5, int controller_ck_39_1,
  int controller_pnr_4, int controller_ck_42_1, int controller_pnr_3,
  int controller_ck_44_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_window_out* _out) {
  
  int v_788;
  int v_787;
  int v_786;
  int v_785;
  int v_784;
  int v_783;
  int v_782;
  int v_781;
  int v_780;
  int v_779;
  int v_778;
  int v_777;
  int v_776;
  int v_775;
  int v_774;
  int v_773;
  int v_772;
  int v_771;
  int v_770;
  int v_769;
  int v_768;
  int v_767;
  int v_766;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  sub_11 = true;
  if (controller_c_pc) {
    sub_10 = false;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_22 = p_controller_c_window;
  sub_21 = sub_22;
  if (controller_c_door) {
    v_783 = false;
    sub_20 = sub_21;
  } else {
    v_783 = sub_21;
    sub_20 = false;
  };
  if (controller_ck_19_1) {
    sub_19 = v_783;
  } else {
    sub_19 = sub_20;
  };
  sub_18 = sub_19;
  sub_26 = false;
  if (controller_c_door) {
    v_782 = false;
    sub_25 = sub_26;
  } else {
    v_782 = sub_26;
    sub_25 = false;
  };
  if (controller_ck_19_1) {
    sub_24 = v_782;
  } else {
    sub_24 = sub_25;
  };
  sub_23 = sub_24;
  if (controller_blind_failed_recovered) {
    v_784 = sub_23;
    sub_17 = sub_18;
  } else {
    v_784 = sub_18;
    sub_17 = sub_23;
  };
  if (controller_ck_44_1) {
    sub_16 = v_784;
  } else {
    sub_16 = sub_17;
  };
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_32 = sub_21;
  if (controller_v_271) {
    v_781 = sub_32;
  } else {
    v_781 = false;
  };
  if (controller_v_272) {
    sub_31 = v_781;
  } else {
    sub_31 = sub_32;
  };
  if (controller_c_pc) {
    sub_30 = false;
  } else {
    sub_30 = sub_31;
  };
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  if (controller_air_failed_recovered) {
    v_785 = sub_27;
    sub_13 = sub_14;
  } else {
    v_785 = sub_14;
    sub_13 = sub_27;
  };
  if (controller_ck_34_1) {
    sub_12 = v_785;
  } else {
    sub_12 = sub_13;
  };
  if (controller_cleaner) {
    v_786 = sub_12;
    sub_5 = sub_6;
  } else {
    v_786 = sub_6;
    sub_5 = sub_12;
  };
  if (controller_ck_25_1) {
    sub_4 = v_786;
  } else {
    sub_4 = sub_5;
  };
  v_775 = !(controller_ck_39_1);
  v_776 = (v_775&&sub_22);
  v_774 = (controller_ck_39_1&&sub_22);
  if (controller_light_failed_recovered) {
    sub_42 = v_774;
  } else {
    sub_42 = v_776;
  };
  sub_41 = sub_42;
  if (controller_v_271) {
    v_777 = sub_32;
  } else {
    v_777 = sub_41;
  };
  if (controller_v_272) {
    v_778 = v_777;
  } else {
    v_778 = sub_32;
  };
  if (controller_c_pc) {
    sub_40 = v_778;
  } else {
    sub_40 = sub_32;
  };
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  if (controller_air_failed_recovered) {
    v_779 = sub_37;
    sub_36 = sub_14;
  } else {
    v_779 = sub_14;
    sub_36 = sub_37;
  };
  if (controller_ck_34_1) {
    sub_35 = v_779;
  } else {
    sub_35 = sub_36;
  };
  if (controller_cleaner) {
    v_780 = sub_12;
    sub_34 = sub_35;
  } else {
    v_780 = sub_35;
    sub_34 = sub_12;
  };
  if (controller_ck_25_1) {
    sub_33 = v_780;
  } else {
    sub_33 = sub_34;
  };
  if (controller_worker) {
    v_787 = sub_33;
    sub_3 = sub_4;
  } else {
    v_787 = sub_4;
    sub_3 = sub_33;
  };
  if (controller_ck_23_1) {
    sub_2 = v_787;
  } else {
    sub_2 = sub_3;
  };
  sub_51 = sub_23;
  sub_50 = sub_51;
  sub_49 = sub_50;
  if (controller_air_failed_recovered) {
    v_771 = sub_27;
    sub_48 = sub_49;
  } else {
    v_771 = sub_49;
    sub_48 = sub_27;
  };
  if (controller_ck_34_1) {
    sub_47 = v_771;
  } else {
    sub_47 = sub_48;
  };
  if (controller_cleaner) {
    v_772 = sub_47;
    sub_46 = sub_6;
  } else {
    v_772 = sub_6;
    sub_46 = sub_47;
  };
  if (controller_ck_25_1) {
    sub_45 = v_772;
  } else {
    sub_45 = sub_46;
  };
  if (controller_ck_39_1) {
    v_766 = sub_22;
    v = false;
  } else {
    v_766 = false;
    v = sub_22;
  };
  if (controller_light_failed_recovered) {
    sub_63 = v;
  } else {
    sub_63 = v_766;
  };
  sub_62 = sub_63;
  if (controller_v_271) {
    v_767 = sub_32;
  } else {
    v_767 = sub_62;
  };
  if (controller_v_272) {
    sub_61 = v_767;
  } else {
    sub_61 = sub_32;
  };
  sub_60 = sub_61;
  sub_64 = sub_31;
  if (controller_blind_failed_recovered) {
    v_768 = sub_64;
    sub_59 = sub_60;
  } else {
    v_768 = sub_60;
    sub_59 = sub_64;
  };
  if (controller_ck_44_1) {
    sub_58 = v_768;
  } else {
    sub_58 = sub_59;
  };
  sub_57 = sub_58;
  sub_56 = sub_57;
  if (controller_air_failed_recovered) {
    v_769 = sub_56;
    sub_55 = sub_49;
  } else {
    v_769 = sub_49;
    sub_55 = sub_56;
  };
  if (controller_ck_34_1) {
    sub_54 = v_769;
  } else {
    sub_54 = sub_55;
  };
  if (controller_cleaner) {
    v_770 = sub_47;
    sub_53 = sub_54;
  } else {
    v_770 = sub_54;
    sub_53 = sub_47;
  };
  if (controller_ck_25_1) {
    sub_52 = v_770;
  } else {
    sub_52 = sub_53;
  };
  if (controller_worker) {
    v_773 = sub_52;
    sub_44 = sub_45;
  } else {
    v_773 = sub_45;
    sub_44 = sub_52;
  };
  if (controller_ck_23_1) {
    sub_43 = v_773;
  } else {
    sub_43 = sub_44;
  };
  if (controller_change_shift) {
    v_788 = sub_43;
    sub_1 = sub_2;
  } else {
    v_788 = sub_2;
    sub_1 = sub_43;
  };
  if (controller_ck_1) {
    sub_0 = v_788;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_window = sub_0;;
}

void Controller_controller__controller_controller_controller_c_pc_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered, int controller_ck_1,
  int controller_pnr_14, int controller_ck_19_1, int controller_pnr_13,
  int controller_ck_21_1, int controller_pnr_12, int controller_ck_23_1,
  int controller_pnr_11, int controller_ck_25_1, int controller_pnr_10,
  int controller_ck_27_1, int controller_pnr_9, int controller_ck_29_1,
  int controller_pnr_8, int controller_v_272, int controller_v_271,
  int controller_pnr_7, int controller_ck_34_1, int controller_pnr_6,
  int controller_ck_37_1, int controller_pnr_5, int controller_ck_39_1,
  int controller_pnr_4, int controller_ck_42_1, int controller_pnr_3,
  int controller_ck_44_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_pc_out* _out) {
  
  int v_803;
  int v_802;
  int v_801;
  int v_800;
  int v_799;
  int v_798;
  int v_797;
  int v_796;
  int v_795;
  int v_794;
  int v_793;
  int v_792;
  int v_791;
  int v_790;
  int v_789;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  sub_11 = false;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_20 = p_controller_c_pc;
  sub_19 = sub_20;
  if (controller_c_door) {
    v_799 = false;
    sub_18 = sub_19;
  } else {
    v_799 = sub_19;
    sub_18 = false;
  };
  if (controller_ck_19_1) {
    sub_17 = v_799;
  } else {
    sub_17 = sub_18;
  };
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  if (controller_v_271) {
    v_798 = sub_10;
  } else {
    v_798 = false;
  };
  if (controller_v_272) {
    sub_24 = v_798;
  } else {
    sub_24 = sub_10;
  };
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (controller_air_failed_recovered) {
    v_800 = sub_21;
    sub_13 = sub_14;
  } else {
    v_800 = sub_14;
    sub_13 = sub_21;
  };
  if (controller_ck_34_1) {
    sub_12 = v_800;
  } else {
    sub_12 = sub_13;
  };
  if (controller_cleaner) {
    v_801 = sub_12;
    sub_5 = sub_6;
  } else {
    v_801 = sub_6;
    sub_5 = sub_12;
  };
  if (controller_ck_25_1) {
    sub_4 = v_801;
  } else {
    sub_4 = sub_5;
  };
  sub_32 = sub_19;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (controller_air_failed_recovered) {
    v_796 = sub_29;
    sub_28 = sub_14;
  } else {
    v_796 = sub_14;
    sub_28 = sub_29;
  };
  if (controller_ck_34_1) {
    sub_27 = v_796;
  } else {
    sub_27 = sub_28;
  };
  if (controller_cleaner) {
    v_797 = sub_12;
    sub_26 = sub_27;
  } else {
    v_797 = sub_27;
    sub_26 = sub_12;
  };
  if (controller_ck_25_1) {
    sub_25 = v_797;
  } else {
    sub_25 = sub_26;
  };
  if (controller_worker) {
    v_802 = sub_25;
    sub_3 = sub_4;
  } else {
    v_802 = sub_4;
    sub_3 = sub_25;
  };
  if (controller_ck_23_1) {
    sub_2 = v_802;
  } else {
    sub_2 = sub_3;
  };
  if (controller_ck_39_1) {
    v_790 = sub_20;
    v_789 = false;
  } else {
    v_790 = false;
    v_789 = sub_20;
  };
  if (controller_light_failed_recovered) {
    sub_45 = v_789;
  } else {
    sub_45 = v_790;
  };
  sub_44 = sub_45;
  if (controller_v_271) {
    v_791 = sub_32;
  } else {
    v_791 = sub_44;
  };
  if (controller_v_272) {
    sub_43 = v_791;
  } else {
    sub_43 = sub_32;
  };
  if (controller_v_271) {
    v = sub_32;
  } else {
    v = false;
  };
  if (controller_v_272) {
    sub_46 = v;
  } else {
    sub_46 = sub_32;
  };
  if (controller_blind_failed_recovered) {
    v_792 = sub_46;
    sub_42 = sub_43;
  } else {
    v_792 = sub_43;
    sub_42 = sub_46;
  };
  if (controller_ck_44_1) {
    sub_41 = v_792;
  } else {
    sub_41 = sub_42;
  };
  sub_40 = sub_41;
  sub_39 = sub_40;
  if (controller_air_failed_recovered) {
    v_793 = sub_39;
    sub_38 = sub_14;
  } else {
    v_793 = sub_14;
    sub_38 = sub_39;
  };
  if (controller_ck_34_1) {
    sub_37 = v_793;
  } else {
    sub_37 = sub_38;
  };
  if (controller_cleaner) {
    v_794 = sub_12;
    sub_36 = sub_37;
  } else {
    v_794 = sub_37;
    sub_36 = sub_12;
  };
  if (controller_ck_25_1) {
    sub_35 = v_794;
  } else {
    sub_35 = sub_36;
  };
  if (controller_worker) {
    v_795 = sub_35;
    sub_34 = sub_4;
  } else {
    v_795 = sub_4;
    sub_34 = sub_35;
  };
  if (controller_ck_23_1) {
    sub_33 = v_795;
  } else {
    sub_33 = sub_34;
  };
  if (controller_change_shift) {
    v_803 = sub_33;
    sub_1 = sub_2;
  } else {
    v_803 = sub_2;
    sub_1 = sub_33;
  };
  if (controller_ck_1) {
    sub_0 = v_803;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_pc = sub_0;;
}

void Controller_controller__controller_controller_controller_c_door_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered, int controller_ck_1,
  int controller_pnr_14, int controller_ck_19_1, int controller_pnr_13,
  int controller_ck_21_1, int controller_pnr_12, int controller_ck_23_1,
  int controller_pnr_11, int controller_ck_25_1, int controller_pnr_10,
  int controller_ck_27_1, int controller_pnr_9, int controller_ck_29_1,
  int controller_pnr_8, int controller_v_272, int controller_v_271,
  int controller_pnr_7, int controller_ck_34_1, int controller_pnr_6,
  int controller_ck_37_1, int controller_pnr_5, int controller_ck_39_1,
  int controller_pnr_4, int controller_ck_42_1, int controller_pnr_3,
  int controller_ck_44_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  Controller_controller__controller_controller_controller_c_door_out* _out) {
  
  int v_816;
  int v_815;
  int v_814;
  int v_813;
  int v_812;
  int v_811;
  int v_810;
  int v_809;
  int v_808;
  int v_807;
  int v_806;
  int v_805;
  int v_804;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  sub_11 = p_controller_c_door;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_18 = true;
  if (controller_ck_19_1) {
    sub_17 = false;
  } else {
    sub_17 = sub_18;
  };
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  if (controller_v_271) {
    v_812 = sub_10;
  } else {
    v_812 = false;
  };
  if (controller_v_272) {
    sub_22 = v_812;
  } else {
    sub_22 = sub_10;
  };
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  if (controller_air_failed_recovered) {
    v_813 = sub_19;
    sub_13 = sub_14;
  } else {
    v_813 = sub_14;
    sub_13 = sub_19;
  };
  if (controller_ck_34_1) {
    sub_12 = v_813;
  } else {
    sub_12 = sub_13;
  };
  if (controller_cleaner) {
    v_814 = sub_12;
    sub_5 = sub_6;
  } else {
    v_814 = sub_6;
    sub_5 = sub_12;
  };
  if (controller_ck_25_1) {
    sub_4 = v_814;
  } else {
    sub_4 = sub_5;
  };
  if (controller_air_failed_recovered) {
    v_810 = sub_7;
    sub_26 = sub_14;
  } else {
    v_810 = sub_14;
    sub_26 = sub_7;
  };
  if (controller_ck_34_1) {
    sub_25 = v_810;
  } else {
    sub_25 = sub_26;
  };
  if (controller_cleaner) {
    v_811 = sub_12;
    sub_24 = sub_25;
  } else {
    v_811 = sub_25;
    sub_24 = sub_12;
  };
  if (controller_ck_25_1) {
    sub_23 = v_811;
  } else {
    sub_23 = sub_24;
  };
  if (controller_worker) {
    v_815 = sub_23;
    sub_3 = sub_4;
  } else {
    v_815 = sub_4;
    sub_3 = sub_23;
  };
  if (controller_ck_23_1) {
    sub_2 = v_815;
  } else {
    sub_2 = sub_3;
  };
  if (controller_ck_39_1) {
    v_804 = sub_11;
    v = false;
  } else {
    v_804 = false;
    v = sub_11;
  };
  if (controller_light_failed_recovered) {
    sub_38 = v;
  } else {
    sub_38 = v_804;
  };
  if (controller_v_271) {
    v_805 = sub_10;
  } else {
    v_805 = sub_38;
  };
  if (controller_v_272) {
    sub_37 = v_805;
  } else {
    sub_37 = sub_10;
  };
  if (controller_blind_failed_recovered) {
    v_806 = sub_22;
    sub_36 = sub_37;
  } else {
    v_806 = sub_37;
    sub_36 = sub_22;
  };
  if (controller_ck_44_1) {
    sub_35 = v_806;
  } else {
    sub_35 = sub_36;
  };
  sub_34 = sub_35;
  sub_33 = sub_34;
  if (controller_air_failed_recovered) {
    v_807 = sub_33;
    sub_32 = sub_14;
  } else {
    v_807 = sub_14;
    sub_32 = sub_33;
  };
  if (controller_ck_34_1) {
    sub_31 = v_807;
  } else {
    sub_31 = sub_32;
  };
  if (controller_cleaner) {
    v_808 = sub_12;
    sub_30 = sub_31;
  } else {
    v_808 = sub_31;
    sub_30 = sub_12;
  };
  if (controller_ck_25_1) {
    sub_29 = v_808;
  } else {
    sub_29 = sub_30;
  };
  if (controller_worker) {
    v_809 = sub_29;
    sub_28 = sub_4;
  } else {
    v_809 = sub_4;
    sub_28 = sub_29;
  };
  if (controller_ck_23_1) {
    sub_27 = v_809;
  } else {
    sub_27 = sub_28;
  };
  if (controller_change_shift) {
    v_816 = sub_27;
    sub_1 = sub_2;
  } else {
    v_816 = sub_2;
    sub_1 = sub_27;
  };
  if (controller_ck_1) {
    sub_0 = v_816;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_door = sub_0;;
}

void Controller_controller__controller_controller_step(int controller_change_shift,
                                                       int controller_worker,
                                                       int controller_cleaner,
                                                       int controller_air_failed_recovered,
                                                       int controller_light_switch,
                                                       int controller_light_failed_recovered,
                                                       int controller_blind_switch,
                                                       int controller_blind_failed_recovered,
                                                       int controller_ck_1,
                                                       int controller_pnr_14,
                                                       int controller_ck_19_1,
                                                       int controller_pnr_13,
                                                       int controller_ck_21_1,
                                                       int controller_pnr_12,
                                                       int controller_ck_23_1,
                                                       int controller_pnr_11,
                                                       int controller_ck_25_1,
                                                       int controller_pnr_10,
                                                       int controller_ck_27_1,
                                                       int controller_pnr_9,
                                                       int controller_ck_29_1,
                                                       int controller_pnr_8,
                                                       int controller_v_272,
                                                       int controller_v_271,
                                                       int controller_pnr_7,
                                                       int controller_ck_34_1,
                                                       int controller_pnr_6,
                                                       int controller_ck_37_1,
                                                       int controller_pnr_5,
                                                       int controller_ck_39_1,
                                                       int controller_pnr_4,
                                                       int controller_ck_42_1,
                                                       int controller_pnr_3,
                                                       int controller_ck_44_1,
                                                       int controller_pnr,
                                                       int p_controller_c_blind_2,
                                                       int p_controller_c_blind_1,
                                                       int p_controller_c_light_2,
                                                       int p_controller_c_light_1,
                                                       int p_controller_c_closet,
                                                       int p_controller_c_air_2,
                                                       int p_controller_c_air_1,
                                                       int p_controller_c_window,
                                                       int p_controller_c_pc,
                                                       int p_controller_c_door,
                                                       Controller_controller__controller_controller_out* _out) {
  Controller_controller__controller_controller_controller_c_door_out Controller_controller__controller_controller_controller_c_door_out_st;
  Controller_controller__controller_controller_controller_c_window_out Controller_controller__controller_controller_controller_c_window_out_st;
  Controller_controller__controller_controller_controller_c_blind_1_out Controller_controller__controller_controller_controller_c_blind_1_out_st;
  Controller_controller__controller_controller_controller_c_blind_2_out Controller_controller__controller_controller_controller_c_blind_2_out_st;
  Controller_controller__controller_controller_controller_c_light_1_out Controller_controller__controller_controller_controller_c_light_1_out_st;
  Controller_controller__controller_controller_controller_c_air_1_out Controller_controller__controller_controller_controller_c_air_1_out_st;
  Controller_controller__controller_controller_controller_c_light_2_out Controller_controller__controller_controller_controller_c_light_2_out_st;
  Controller_controller__controller_controller_controller_c_closet_out Controller_controller__controller_controller_controller_c_closet_out_st;
  Controller_controller__controller_controller_controller_c_air_2_out Controller_controller__controller_controller_controller_c_air_2_out_st;
  Controller_controller__controller_controller_controller_c_pc_out Controller_controller__controller_controller_controller_c_pc_out_st;
  Controller_controller__controller_controller_controller_c_door_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_14,
  controller_ck_19_1, controller_pnr_13, controller_ck_21_1,
  controller_pnr_12, controller_ck_23_1, controller_pnr_11,
  controller_ck_25_1, controller_pnr_10, controller_ck_27_1,
  controller_pnr_9, controller_ck_29_1, controller_pnr_8, controller_v_272,
  controller_v_271, controller_pnr_7, controller_ck_34_1, controller_pnr_6,
  controller_ck_37_1, controller_pnr_5, controller_ck_39_1, controller_pnr_4,
  controller_ck_42_1, controller_pnr_3, controller_ck_44_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door,
  &Controller_controller__controller_controller_controller_c_door_out_st);
  _out->controller_c_door = Controller_controller__controller_controller_controller_c_door_out_st.controller_c_door;
  Controller_controller__controller_controller_controller_c_pc_step(controller_change_shift,
                                                                    controller_worker,
                                                                    controller_cleaner,
                                                                    controller_air_failed_recovered,
                                                                    controller_light_switch,
                                                                    controller_light_failed_recovered,
                                                                    controller_blind_switch,
                                                                    controller_blind_failed_recovered,
                                                                    controller_ck_1,
                                                                    controller_pnr_14,
                                                                    controller_ck_19_1,
                                                                    controller_pnr_13,
                                                                    controller_ck_21_1,
                                                                    controller_pnr_12,
                                                                    controller_ck_23_1,
                                                                    controller_pnr_11,
                                                                    controller_ck_25_1,
                                                                    controller_pnr_10,
                                                                    controller_ck_27_1,
                                                                    controller_pnr_9,
                                                                    controller_ck_29_1,
                                                                    controller_pnr_8,
                                                                    controller_v_272,
                                                                    controller_v_271,
                                                                    controller_pnr_7,
                                                                    controller_ck_34_1,
                                                                    controller_pnr_6,
                                                                    controller_ck_37_1,
                                                                    controller_pnr_5,
                                                                    controller_ck_39_1,
                                                                    controller_pnr_4,
                                                                    controller_ck_42_1,
                                                                    controller_pnr_3,
                                                                    controller_ck_44_1,
                                                                    controller_pnr,
                                                                    p_controller_c_blind_2,
                                                                    p_controller_c_blind_1,
                                                                    p_controller_c_light_2,
                                                                    p_controller_c_light_1,
                                                                    p_controller_c_closet,
                                                                    p_controller_c_air_2,
                                                                    p_controller_c_air_1,
                                                                    p_controller_c_window,
                                                                    p_controller_c_pc,
                                                                    p_controller_c_door,
                                                                    _out->controller_c_door,
                                                                    &Controller_controller__controller_controller_controller_c_pc_out_st);
  _out->controller_c_pc = Controller_controller__controller_controller_controller_c_pc_out_st.controller_c_pc;
  Controller_controller__controller_controller_controller_c_window_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_14,
  controller_ck_19_1, controller_pnr_13, controller_ck_21_1,
  controller_pnr_12, controller_ck_23_1, controller_pnr_11,
  controller_ck_25_1, controller_pnr_10, controller_ck_27_1,
  controller_pnr_9, controller_ck_29_1, controller_pnr_8, controller_v_272,
  controller_v_271, controller_pnr_7, controller_ck_34_1, controller_pnr_6,
  controller_ck_37_1, controller_pnr_5, controller_ck_39_1, controller_pnr_4,
  controller_ck_42_1, controller_pnr_3, controller_ck_44_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door, _out->controller_c_pc, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_window_out_st);
  _out->controller_c_window = Controller_controller__controller_controller_controller_c_window_out_st.controller_c_window;
  Controller_controller__controller_controller_controller_c_air_1_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_14,
  controller_ck_19_1, controller_pnr_13, controller_ck_21_1,
  controller_pnr_12, controller_ck_23_1, controller_pnr_11,
  controller_ck_25_1, controller_pnr_10, controller_ck_27_1,
  controller_pnr_9, controller_ck_29_1, controller_pnr_8, controller_v_272,
  controller_v_271, controller_pnr_7, controller_ck_34_1, controller_pnr_6,
  controller_ck_37_1, controller_pnr_5, controller_ck_39_1, controller_pnr_4,
  controller_ck_42_1, controller_pnr_3, controller_ck_44_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door, _out->controller_c_window, _out->controller_c_pc,
  _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_air_1_out_st);
  _out->controller_c_air_1 = Controller_controller__controller_controller_controller_c_air_1_out_st.controller_c_air_1;
  Controller_controller__controller_controller_controller_c_air_2_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_14,
  controller_ck_19_1, controller_pnr_13, controller_ck_21_1,
  controller_pnr_12, controller_ck_23_1, controller_pnr_11,
  controller_ck_25_1, controller_pnr_10, controller_ck_27_1,
  controller_pnr_9, controller_ck_29_1, controller_pnr_8, controller_v_272,
  controller_v_271, controller_pnr_7, controller_ck_34_1, controller_pnr_6,
  controller_ck_37_1, controller_pnr_5, controller_ck_39_1, controller_pnr_4,
  controller_ck_42_1, controller_pnr_3, controller_ck_44_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door, _out->controller_c_air_1, _out->controller_c_window,
  _out->controller_c_pc, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_air_2_out_st);
  _out->controller_c_air_2 = Controller_controller__controller_controller_controller_c_air_2_out_st.controller_c_air_2;
  Controller_controller__controller_controller_controller_c_closet_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_14,
  controller_ck_19_1, controller_pnr_13, controller_ck_21_1,
  controller_pnr_12, controller_ck_23_1, controller_pnr_11,
  controller_ck_25_1, controller_pnr_10, controller_ck_27_1,
  controller_pnr_9, controller_ck_29_1, controller_pnr_8, controller_v_272,
  controller_v_271, controller_pnr_7, controller_ck_34_1, controller_pnr_6,
  controller_ck_37_1, controller_pnr_5, controller_ck_39_1, controller_pnr_4,
  controller_ck_42_1, controller_pnr_3, controller_ck_44_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door, _out->controller_c_air_2, _out->controller_c_air_1,
  _out->controller_c_window, _out->controller_c_pc, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_closet_out_st);
  _out->controller_c_closet = Controller_controller__controller_controller_controller_c_closet_out_st.controller_c_closet;
  Controller_controller__controller_controller_controller_c_light_1_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_14,
  controller_ck_19_1, controller_pnr_13, controller_ck_21_1,
  controller_pnr_12, controller_ck_23_1, controller_pnr_11,
  controller_ck_25_1, controller_pnr_10, controller_ck_27_1,
  controller_pnr_9, controller_ck_29_1, controller_pnr_8, controller_v_272,
  controller_v_271, controller_pnr_7, controller_ck_34_1, controller_pnr_6,
  controller_ck_37_1, controller_pnr_5, controller_ck_39_1, controller_pnr_4,
  controller_ck_42_1, controller_pnr_3, controller_ck_44_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door, _out->controller_c_closet, _out->controller_c_air_2,
  _out->controller_c_air_1, _out->controller_c_window, _out->controller_c_pc,
  _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_light_1_out_st);
  _out->controller_c_light_1 = Controller_controller__controller_controller_controller_c_light_1_out_st.controller_c_light_1;
  Controller_controller__controller_controller_controller_c_light_2_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_14,
  controller_ck_19_1, controller_pnr_13, controller_ck_21_1,
  controller_pnr_12, controller_ck_23_1, controller_pnr_11,
  controller_ck_25_1, controller_pnr_10, controller_ck_27_1,
  controller_pnr_9, controller_ck_29_1, controller_pnr_8, controller_v_272,
  controller_v_271, controller_pnr_7, controller_ck_34_1, controller_pnr_6,
  controller_ck_37_1, controller_pnr_5, controller_ck_39_1, controller_pnr_4,
  controller_ck_42_1, controller_pnr_3, controller_ck_44_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door, _out->controller_c_light_1, _out->controller_c_closet,
  _out->controller_c_air_2, _out->controller_c_air_1,
  _out->controller_c_window, _out->controller_c_pc, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_light_2_out_st);
  _out->controller_c_light_2 = Controller_controller__controller_controller_controller_c_light_2_out_st.controller_c_light_2;
  Controller_controller__controller_controller_controller_c_blind_1_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_14,
  controller_ck_19_1, controller_pnr_13, controller_ck_21_1,
  controller_pnr_12, controller_ck_23_1, controller_pnr_11,
  controller_ck_25_1, controller_pnr_10, controller_ck_27_1,
  controller_pnr_9, controller_ck_29_1, controller_pnr_8, controller_v_272,
  controller_v_271, controller_pnr_7, controller_ck_34_1, controller_pnr_6,
  controller_ck_37_1, controller_pnr_5, controller_ck_39_1, controller_pnr_4,
  controller_ck_42_1, controller_pnr_3, controller_ck_44_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door, _out->controller_c_light_2,
  _out->controller_c_light_1, _out->controller_c_closet,
  _out->controller_c_air_2, _out->controller_c_air_1,
  _out->controller_c_window, _out->controller_c_pc, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_blind_1_out_st);
  _out->controller_c_blind_1 = Controller_controller__controller_controller_controller_c_blind_1_out_st.controller_c_blind_1;
  Controller_controller__controller_controller_controller_c_blind_2_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_14,
  controller_ck_19_1, controller_pnr_13, controller_ck_21_1,
  controller_pnr_12, controller_ck_23_1, controller_pnr_11,
  controller_ck_25_1, controller_pnr_10, controller_ck_27_1,
  controller_pnr_9, controller_ck_29_1, controller_pnr_8, controller_v_272,
  controller_v_271, controller_pnr_7, controller_ck_34_1, controller_pnr_6,
  controller_ck_37_1, controller_pnr_5, controller_ck_39_1, controller_pnr_4,
  controller_ck_42_1, controller_pnr_3, controller_ck_44_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door, _out->controller_c_blind_1,
  _out->controller_c_light_2, _out->controller_c_light_1,
  _out->controller_c_closet, _out->controller_c_air_2,
  _out->controller_c_air_1, _out->controller_c_window, _out->controller_c_pc,
  _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_blind_2_out_st);
  _out->controller_c_blind_2 = Controller_controller__controller_controller_controller_c_blind_2_out_st.controller_c_blind_2;
}

