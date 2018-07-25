/* --- Generated the 25/7/2018 at 10:17 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
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
  int controller_pnr_9, int controller_ck_11_1, int controller_pnr_8,
  int controller_ck_13_1, int controller_pnr_7, int controller_ck_15_1,
  int controller_pnr_6, int controller_ck_17_1, int controller_pnr_5,
  int controller_ck_19_1, int controller_pnr_4, int controller_ck_21_1,
  int controller_pnr_3, int controller_v_447, int controller_v_446,
  int controller_v_445, int controller_pnr_2, int controller_v_408,
  int controller_v_407, int controller_pnr_1, int controller_v_392,
  int controller_v_391, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_blind_1, int controller_c_light_2,
  int controller_c_light_1, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_blind_2_out* _out) {
  
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
  int sub_494;
  int sub_495;
  int sub_496;
  int sub_497;
  int sub_498;
  int sub_499;
  int sub_500;
  int sub_501;
  int sub_502;
  int sub_503;
  int sub_504;
  int sub_505;
  int sub_506;
  int sub_507;
  int sub_508;
  int sub_509;
  int sub_510;
  int sub_511;
  int sub_512;
  int sub_513;
  int sub_514;
  int sub_515;
  int sub_516;
  int sub_517;
  int sub_518;
  int sub_519;
  int sub_520;
  int sub_521;
  int sub_522;
  int sub_523;
  sub_22 = (controller_ck_17_1||false);
  v_351 = !(controller_ck_17_1);
  sub_23 = (v_351||false);
  if (controller_cleaner) {
    sub_21 = sub_22;
  } else {
    sub_21 = sub_23;
  };
  sub_24 = true;
  if (controller_worker) {
    v_352 = sub_24;
    sub_20 = sub_21;
  } else {
    v_352 = sub_21;
    sub_20 = sub_24;
  };
  if (controller_ck_15_1) {
    sub_19 = v_352;
  } else {
    sub_19 = sub_20;
  };
  if (controller_change_shift) {
    sub_18 = sub_19;
    sub_25 = false;
  } else {
    sub_18 = false;
    sub_25 = sub_19;
  };
  if (controller_ck_1) {
    sub_17 = sub_25;
  } else {
    sub_17 = sub_18;
  };
  sub_16 = sub_17;
  sub_28 = sub_24;
  if (controller_cleaner) {
    sub_31 = sub_23;
  } else {
    sub_31 = sub_22;
  };
  if (controller_worker) {
    sub_30 = sub_31;
    sub_32 = false;
  } else {
    sub_30 = false;
    sub_32 = sub_31;
  };
  if (controller_ck_15_1) {
    sub_29 = sub_32;
  } else {
    sub_29 = sub_30;
  };
  if (controller_change_shift) {
    v_350 = sub_29;
    sub_27 = sub_28;
  } else {
    v_350 = sub_28;
    sub_27 = sub_29;
  };
  if (controller_ck_1) {
    sub_26 = v_350;
  } else {
    sub_26 = sub_27;
  };
  if (controller_c_pc) {
    sub_15 = sub_16;
  } else {
    sub_15 = sub_26;
  };
  v_348 = !(controller_ck_17_1);
  sub_39 = (v_348&&false);
  sub_40 = (controller_ck_17_1&&false);
  if (controller_cleaner) {
    sub_38 = sub_39;
  } else {
    sub_38 = sub_40;
  };
  sub_41 = false;
  if (controller_worker) {
    v_349 = sub_41;
    sub_37 = sub_38;
  } else {
    v_349 = sub_38;
    sub_37 = sub_41;
  };
  if (controller_ck_15_1) {
    sub_36 = v_349;
  } else {
    sub_36 = sub_37;
  };
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  if (controller_c_window) {
    sub_14 = sub_15;
  } else {
    sub_14 = sub_33;
  };
  sub_47 = controller_ck_17_1;
  sub_48 = !(controller_ck_17_1);
  if (controller_cleaner) {
    sub_46 = sub_47;
  } else {
    sub_46 = sub_48;
  };
  if (controller_worker) {
    v_346 = sub_24;
    sub_45 = sub_46;
  } else {
    v_346 = sub_46;
    sub_45 = sub_24;
  };
  if (controller_ck_15_1) {
    sub_44 = v_346;
  } else {
    sub_44 = sub_45;
  };
  if (controller_cleaner) {
    sub_51 = sub_40;
  } else {
    sub_51 = sub_39;
  };
  if (controller_worker) {
    sub_50 = sub_51;
    sub_52 = false;
  } else {
    sub_50 = false;
    sub_52 = sub_51;
  };
  if (controller_ck_15_1) {
    sub_49 = sub_52;
  } else {
    sub_49 = sub_50;
  };
  if (controller_change_shift) {
    v_347 = sub_49;
    sub_43 = sub_44;
  } else {
    v_347 = sub_44;
    sub_43 = sub_49;
  };
  if (controller_ck_1) {
    sub_42 = v_347;
  } else {
    sub_42 = sub_43;
  };
  if (controller_c_pc) {
    v_353 = sub_16;
  } else {
    v_353 = sub_42;
  };
  sub_55 = sub_19;
  sub_54 = sub_55;
  sub_53 = sub_54;
  if (controller_c_window) {
    v_354 = v_353;
  } else {
    v_354 = sub_53;
  };
  if (controller_v_391) {
    sub_13 = v_354;
  } else {
    sub_13 = sub_14;
  };
  if (controller_change_shift) {
    sub_60 = sub_36;
    sub_61 = false;
  } else {
    sub_60 = false;
    sub_61 = sub_36;
  };
  if (controller_ck_1) {
    sub_59 = sub_61;
  } else {
    sub_59 = sub_60;
  };
  sub_58 = sub_59;
  sub_64 = sub_41;
  if (controller_change_shift) {
    v_345 = sub_49;
    sub_63 = sub_64;
  } else {
    v_345 = sub_64;
    sub_63 = sub_49;
  };
  if (controller_ck_1) {
    sub_62 = v_345;
  } else {
    sub_62 = sub_63;
  };
  if (controller_c_pc) {
    sub_57 = sub_58;
  } else {
    sub_57 = sub_62;
  };
  if (controller_c_window) {
    sub_56 = sub_57;
  } else {
    sub_56 = sub_33;
  };
  if (controller_v_392) {
    v_355 = sub_56;
  } else {
    v_355 = sub_13;
  };
  sub_68 = sub_29;
  if (controller_c_pc) {
    sub_67 = false;
  } else {
    sub_67 = sub_68;
  };
  if (controller_c_window) {
    sub_66 = sub_67;
  } else {
    sub_66 = sub_33;
  };
  sub_70 = sub_49;
  if (controller_c_pc) {
    sub_69 = false;
  } else {
    sub_69 = sub_70;
  };
  if (controller_c_window) {
    v_344 = sub_69;
  } else {
    v_344 = sub_53;
  };
  if (controller_v_391) {
    sub_65 = v_344;
  } else {
    sub_65 = sub_66;
  };
  if (controller_v_392) {
    v_356 = sub_65;
  } else {
    v_356 = sub_56;
  };
  if (controller_blind_failed_recovered) {
    sub_12 = v_355;
  } else {
    sub_12 = v_356;
  };
  if (controller_c_window) {
    sub_73 = sub_67;
    sub_74 = sub_69;
  } else {
    sub_73 = false;
    sub_74 = false;
  };
  if (controller_v_391) {
    sub_72 = sub_74;
  } else {
    sub_72 = sub_73;
  };
  if (controller_v_392) {
    v_343 = sub_72;
    v_342 = sub_74;
  } else {
    v_343 = sub_74;
    v_342 = sub_72;
  };
  if (controller_blind_failed_recovered) {
    sub_71 = v_342;
  } else {
    sub_71 = v_343;
  };
  if (controller_c_door) {
    v_357 = sub_71;
    sub_11 = sub_12;
  } else {
    v_357 = sub_12;
    sub_11 = sub_71;
  };
  if (controller_ck_11_1) {
    sub_10 = v_357;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  if (controller_ck_15_1) {
    sub_83 = sub_30;
  } else {
    sub_83 = sub_32;
  };
  if (controller_change_shift) {
    sub_82 = false;
    sub_84 = sub_83;
  } else {
    sub_82 = sub_83;
    sub_84 = false;
  };
  if (controller_ck_1) {
    sub_81 = sub_84;
  } else {
    sub_81 = sub_82;
  };
  sub_80 = sub_81;
  if (controller_worker) {
    sub_88 = sub_31;
    sub_89 = sub_51;
  } else {
    sub_88 = sub_51;
    sub_89 = sub_31;
  };
  if (controller_ck_15_1) {
    sub_87 = sub_89;
  } else {
    sub_87 = sub_88;
  };
  sub_90 = sub_31;
  if (controller_change_shift) {
    v_335 = sub_90;
    sub_86 = sub_87;
  } else {
    v_335 = sub_87;
    sub_86 = sub_90;
  };
  if (controller_ck_1) {
    sub_85 = v_335;
  } else {
    sub_85 = sub_86;
  };
  if (controller_c_pc) {
    v_336 = sub_80;
  } else {
    v_336 = sub_85;
  };
  if (controller_ck_15_1) {
    sub_94 = sub_50;
  } else {
    sub_94 = sub_52;
  };
  if (controller_change_shift) {
    sub_93 = sub_94;
    sub_95 = sub_83;
  } else {
    sub_93 = sub_83;
    sub_95 = sub_94;
  };
  if (controller_ck_1) {
    sub_92 = sub_95;
  } else {
    sub_92 = sub_93;
  };
  sub_91 = sub_92;
  if (controller_c_window) {
    sub_79 = v_336;
  } else {
    sub_79 = sub_91;
  };
  if (controller_ck_15_1) {
    sub_97 = sub_88;
  } else {
    sub_97 = sub_89;
  };
  sub_96 = sub_97;
  if (controller_c_pc) {
    v_337 = sub_80;
  } else {
    v_337 = sub_96;
  };
  sub_100 = sub_83;
  sub_99 = sub_100;
  sub_98 = sub_99;
  if (controller_c_window) {
    v_338 = v_337;
  } else {
    v_338 = sub_98;
  };
  if (controller_v_391) {
    sub_78 = v_338;
  } else {
    sub_78 = sub_79;
  };
  if (controller_change_shift) {
    sub_104 = false;
    sub_105 = sub_94;
  } else {
    sub_104 = sub_94;
    sub_105 = false;
  };
  if (controller_ck_1) {
    sub_103 = sub_105;
  } else {
    sub_103 = sub_104;
  };
  sub_102 = sub_103;
  sub_107 = sub_51;
  sub_106 = sub_107;
  if (controller_c_pc) {
    v_334 = sub_102;
  } else {
    v_334 = sub_106;
  };
  sub_110 = sub_94;
  sub_109 = sub_110;
  sub_108 = sub_109;
  if (controller_c_window) {
    sub_101 = v_334;
  } else {
    sub_101 = sub_108;
  };
  if (controller_v_392) {
    v_339 = sub_101;
  } else {
    v_339 = sub_78;
  };
  if (controller_change_shift) {
    v_330 = sub_29;
    sub_114 = sub_87;
  } else {
    v_330 = sub_87;
    sub_114 = sub_29;
  };
  if (controller_ck_1) {
    sub_113 = v_330;
  } else {
    sub_113 = sub_114;
  };
  if (controller_c_pc) {
    v_331 = false;
  } else {
    v_331 = sub_113;
  };
  if (controller_ck_1) {
    sub_117 = sub_104;
  } else {
    sub_117 = sub_105;
  };
  sub_116 = sub_117;
  sub_115 = sub_116;
  if (controller_c_window) {
    sub_112 = v_331;
  } else {
    sub_112 = sub_115;
  };
  if (controller_change_shift) {
    v_329 = sub_49;
    sub_119 = sub_97;
  } else {
    v_329 = sub_97;
    sub_119 = sub_49;
  };
  if (controller_ck_1) {
    sub_118 = v_329;
  } else {
    sub_118 = sub_119;
  };
  if (controller_c_pc) {
    v_332 = false;
  } else {
    v_332 = sub_118;
  };
  if (controller_ck_1) {
    sub_122 = sub_82;
  } else {
    sub_122 = sub_84;
  };
  sub_121 = sub_122;
  sub_120 = sub_121;
  if (controller_c_window) {
    v_333 = v_332;
  } else {
    v_333 = sub_120;
  };
  if (controller_v_391) {
    sub_111 = v_333;
  } else {
    sub_111 = sub_112;
  };
  if (controller_v_392) {
    v_340 = sub_111;
  } else {
    v_340 = sub_101;
  };
  if (controller_blind_failed_recovered) {
    sub_77 = v_339;
  } else {
    sub_77 = v_340;
  };
  sub_76 = sub_77;
  if (controller_air_failed_recovered) {
    v_341 = sub_76;
  } else {
    v_341 = sub_10;
  };
  if (controller_c_air_2) {
    sub_75 = v_341;
  } else {
    sub_75 = sub_9;
  };
  if (controller_c_air_1) {
    sub_7 = sub_8;
  } else {
    sub_7 = sub_75;
  };
  if (controller_c_closet) {
    sub_128 = sub_110;
  } else {
    sub_128 = sub_35;
  };
  if (controller_c_pc) {
    sub_127 = sub_109;
  } else {
    sub_127 = sub_128;
  };
  sub_126 = sub_127;
  if (controller_c_closet) {
    sub_131 = sub_100;
  } else {
    sub_131 = sub_55;
  };
  if (controller_c_pc) {
    sub_130 = sub_99;
  } else {
    sub_130 = sub_131;
  };
  sub_129 = sub_130;
  if (controller_v_391) {
    sub_125 = sub_129;
  } else {
    sub_125 = sub_126;
  };
  if (controller_v_392) {
    v_328 = sub_125;
    v_327 = sub_126;
  } else {
    v_328 = sub_126;
    v_327 = sub_125;
  };
  if (controller_blind_failed_recovered) {
    sub_124 = v_327;
  } else {
    sub_124 = v_328;
  };
  sub_123 = sub_124;
  if (controller_air_failed_recovered) {
    v_358 = sub_10;
  } else {
    v_358 = sub_123;
  };
  sub_132 = sub_76;
  if (controller_c_air_2) {
    v_359 = v_358;
  } else {
    v_359 = sub_132;
  };
  sub_133 = sub_132;
  if (controller_c_air_1) {
    v_360 = v_359;
  } else {
    v_360 = sub_133;
  };
  if (controller_v_445) {
    sub_6 = v_360;
  } else {
    sub_6 = sub_7;
  };
  if (controller_v_447) {
    sub_5 = sub_133;
  } else {
    sub_5 = sub_6;
  };
  if (controller_c_air_1) {
    v_326 = sub_75;
  } else {
    v_326 = sub_8;
  };
  sub_137 = sub_123;
  sub_136 = sub_137;
  if (controller_air_failed_recovered) {
    v_325 = sub_10;
  } else {
    v_325 = sub_76;
  };
  if (controller_c_air_2) {
    sub_138 = v_325;
  } else {
    sub_138 = sub_132;
  };
  if (controller_c_air_1) {
    v_361 = sub_138;
    sub_135 = sub_136;
  } else {
    v_361 = sub_136;
    sub_135 = sub_138;
  };
  if (controller_v_445) {
    sub_134 = v_326;
  } else {
    sub_134 = sub_135;
  };
  if (controller_air_failed_recovered) {
    v_323 = sub_123;
  } else {
    v_323 = sub_10;
  };
  if (controller_c_air_2) {
    v_324 = v_323;
  } else {
    v_324 = sub_9;
  };
  if (controller_c_air_1) {
    sub_139 = v_324;
  } else {
    sub_139 = sub_8;
  };
  if (controller_v_445) {
    v_362 = v_361;
  } else {
    v_362 = sub_139;
  };
  if (controller_v_447) {
    v_363 = v_362;
  } else {
    v_363 = sub_134;
  };
  if (controller_v_446) {
    v_364 = v_363;
  } else {
    v_364 = sub_5;
  };
  if (controller_c_window) {
    sub_149 = false;
  } else {
    sub_149 = sub_33;
  };
  if (controller_v_391) {
    sub_148 = sub_74;
  } else {
    sub_148 = sub_149;
  };
  if (controller_v_392) {
    v_318 = sub_148;
    v_317 = sub_56;
  } else {
    v_318 = sub_56;
    v_317 = sub_148;
  };
  if (controller_blind_failed_recovered) {
    sub_147 = v_317;
  } else {
    sub_147 = v_318;
  };
  if (controller_v_391) {
    sub_151 = sub_74;
  } else {
    sub_151 = false;
  };
  if (controller_v_392) {
    v_316 = sub_151;
    v_315 = sub_74;
  } else {
    v_316 = sub_74;
    v_315 = sub_151;
  };
  if (controller_blind_failed_recovered) {
    sub_150 = v_315;
  } else {
    sub_150 = v_316;
  };
  if (controller_c_door) {
    v_319 = sub_150;
    sub_146 = sub_147;
  } else {
    v_319 = sub_147;
    sub_146 = sub_150;
  };
  if (controller_ck_11_1) {
    sub_145 = v_319;
  } else {
    sub_145 = sub_146;
  };
  sub_144 = sub_145;
  sub_143 = sub_144;
  if (controller_c_pc) {
    v_311 = false;
  } else {
    v_311 = sub_116;
  };
  if (controller_c_window) {
    sub_156 = v_311;
  } else {
    sub_156 = sub_115;
  };
  if (controller_v_391) {
    sub_155 = sub_74;
  } else {
    sub_155 = sub_156;
  };
  if (controller_v_392) {
    v_313 = sub_155;
    v_312 = sub_101;
  } else {
    v_313 = sub_101;
    v_312 = sub_155;
  };
  if (controller_blind_failed_recovered) {
    sub_154 = v_312;
  } else {
    sub_154 = v_313;
  };
  sub_153 = sub_154;
  if (controller_air_failed_recovered) {
    v_314 = sub_153;
  } else {
    v_314 = sub_145;
  };
  if (controller_c_air_2) {
    sub_152 = v_314;
  } else {
    sub_152 = sub_144;
  };
  if (controller_c_air_1) {
    sub_142 = sub_143;
  } else {
    sub_142 = sub_152;
  };
  if (controller_v_391) {
    sub_159 = false;
  } else {
    sub_159 = sub_126;
  };
  if (controller_v_392) {
    v_310 = sub_159;
    v_309 = sub_126;
  } else {
    v_310 = sub_126;
    v_309 = sub_159;
  };
  if (controller_blind_failed_recovered) {
    sub_158 = v_309;
  } else {
    sub_158 = v_310;
  };
  sub_157 = sub_158;
  if (controller_air_failed_recovered) {
    v_320 = sub_145;
  } else {
    v_320 = sub_157;
  };
  sub_160 = sub_153;
  if (controller_c_air_2) {
    v_321 = v_320;
  } else {
    v_321 = sub_160;
  };
  sub_161 = sub_160;
  if (controller_c_air_1) {
    v_322 = v_321;
  } else {
    v_322 = sub_161;
  };
  if (controller_v_445) {
    sub_141 = v_322;
  } else {
    sub_141 = sub_142;
  };
  if (controller_v_447) {
    sub_140 = sub_161;
  } else {
    sub_140 = sub_141;
  };
  if (controller_c_air_1) {
    v_308 = sub_152;
  } else {
    v_308 = sub_143;
  };
  sub_165 = sub_157;
  sub_164 = sub_165;
  if (controller_air_failed_recovered) {
    v_307 = sub_145;
  } else {
    v_307 = sub_153;
  };
  if (controller_c_air_2) {
    sub_166 = v_307;
  } else {
    sub_166 = sub_160;
  };
  if (controller_c_air_1) {
    v_365 = sub_166;
    sub_163 = sub_164;
  } else {
    v_365 = sub_164;
    sub_163 = sub_166;
  };
  if (controller_v_445) {
    sub_162 = v_308;
  } else {
    sub_162 = sub_163;
  };
  if (controller_air_failed_recovered) {
    v_305 = sub_157;
  } else {
    v_305 = sub_145;
  };
  if (controller_c_air_2) {
    v_306 = v_305;
  } else {
    v_306 = sub_144;
  };
  if (controller_c_air_1) {
    sub_167 = v_306;
  } else {
    sub_167 = sub_143;
  };
  if (controller_v_445) {
    v_366 = v_365;
  } else {
    v_366 = sub_167;
  };
  if (controller_v_447) {
    v_367 = v_366;
  } else {
    v_367 = sub_162;
  };
  if (controller_v_446) {
    v_368 = v_367;
  } else {
    v_368 = sub_140;
  };
  if (controller_blind_switch) {
    v_369 = v_364;
  } else {
    v_369 = v_368;
  };
  if (controller_v_391) {
    v_297 = sub_149;
  } else {
    v_297 = sub_74;
  };
  if (controller_v_392) {
    sub_177 = v_297;
  } else {
    sub_177 = sub_56;
  };
  sub_176 = sub_177;
  if (controller_v_391) {
    v_296 = false;
  } else {
    v_296 = sub_74;
  };
  if (controller_v_392) {
    sub_179 = v_296;
  } else {
    sub_179 = sub_74;
  };
  sub_178 = sub_179;
  if (controller_c_door) {
    v_298 = sub_178;
    sub_175 = sub_176;
  } else {
    v_298 = sub_176;
    sub_175 = sub_178;
  };
  if (controller_ck_11_1) {
    sub_174 = v_298;
  } else {
    sub_174 = sub_175;
  };
  sub_173 = sub_174;
  sub_172 = sub_173;
  if (controller_v_391) {
    v_294 = sub_156;
  } else {
    v_294 = sub_74;
  };
  if (controller_v_392) {
    sub_183 = v_294;
  } else {
    sub_183 = sub_101;
  };
  sub_182 = sub_183;
  sub_181 = sub_182;
  if (controller_air_failed_recovered) {
    v_295 = sub_181;
  } else {
    v_295 = sub_174;
  };
  if (controller_c_air_2) {
    sub_180 = v_295;
  } else {
    sub_180 = sub_173;
  };
  if (controller_c_air_1) {
    sub_171 = sub_172;
  } else {
    sub_171 = sub_180;
  };
  if (controller_v_391) {
    v_293 = sub_126;
  } else {
    v_293 = false;
  };
  if (controller_v_392) {
    sub_186 = v_293;
  } else {
    sub_186 = sub_126;
  };
  sub_185 = sub_186;
  sub_184 = sub_185;
  if (controller_air_failed_recovered) {
    v_299 = sub_174;
  } else {
    v_299 = sub_184;
  };
  sub_187 = sub_181;
  if (controller_c_air_2) {
    v_300 = v_299;
  } else {
    v_300 = sub_187;
  };
  sub_188 = sub_187;
  if (controller_c_air_1) {
    v_301 = v_300;
  } else {
    v_301 = sub_188;
  };
  if (controller_v_445) {
    sub_170 = v_301;
  } else {
    sub_170 = sub_171;
  };
  if (controller_v_447) {
    sub_169 = sub_188;
  } else {
    sub_169 = sub_170;
  };
  if (controller_c_air_1) {
    v_292 = sub_180;
  } else {
    v_292 = sub_172;
  };
  sub_192 = sub_184;
  sub_191 = sub_192;
  if (controller_air_failed_recovered) {
    v_291 = sub_174;
  } else {
    v_291 = sub_181;
  };
  if (controller_c_air_2) {
    sub_193 = v_291;
  } else {
    sub_193 = sub_187;
  };
  if (controller_c_air_1) {
    v_302 = sub_193;
    sub_190 = sub_191;
  } else {
    v_302 = sub_191;
    sub_190 = sub_193;
  };
  if (controller_v_445) {
    sub_189 = v_292;
  } else {
    sub_189 = sub_190;
  };
  if (controller_air_failed_recovered) {
    v_289 = sub_184;
  } else {
    v_289 = sub_174;
  };
  if (controller_c_air_2) {
    v_290 = v_289;
  } else {
    v_290 = sub_173;
  };
  if (controller_c_air_1) {
    sub_194 = v_290;
  } else {
    sub_194 = sub_172;
  };
  if (controller_v_445) {
    v_303 = v_302;
  } else {
    v_303 = sub_194;
  };
  if (controller_v_447) {
    v_304 = v_303;
  } else {
    v_304 = sub_189;
  };
  if (controller_v_446) {
    sub_168 = v_304;
  } else {
    sub_168 = sub_169;
  };
  if (controller_c_blind_1) {
    sub_4 = v_369;
  } else {
    sub_4 = sub_168;
  };
  if (controller_ck_1) {
    sub_208 = sub_60;
  } else {
    sub_208 = sub_61;
  };
  sub_207 = sub_208;
  sub_206 = sub_207;
  if (controller_c_window) {
    sub_205 = sub_67;
  } else {
    sub_205 = sub_206;
  };
  if (controller_ck_1) {
    sub_211 = sub_18;
  } else {
    sub_211 = sub_25;
  };
  sub_210 = sub_211;
  sub_209 = sub_210;
  if (controller_c_window) {
    v_273 = sub_69;
  } else {
    v_273 = sub_209;
  };
  if (controller_v_391) {
    sub_204 = v_273;
  } else {
    sub_204 = sub_205;
  };
  if (controller_c_window) {
    sub_212 = sub_69;
  } else {
    sub_212 = sub_206;
  };
  if (controller_v_392) {
    v_275 = sub_204;
    v_274 = sub_212;
  } else {
    v_275 = sub_212;
    v_274 = sub_204;
  };
  if (controller_blind_failed_recovered) {
    sub_203 = v_274;
  } else {
    sub_203 = v_275;
  };
  if (controller_c_door) {
    v_276 = sub_71;
    sub_202 = sub_203;
  } else {
    v_276 = sub_203;
    sub_202 = sub_71;
  };
  if (controller_ck_11_1) {
    sub_201 = v_276;
  } else {
    sub_201 = sub_202;
  };
  if (controller_air_failed_recovered) {
    v_277 = sub_201;
  } else {
    v_277 = false;
  };
  sub_200 = sub_201;
  sub_199 = sub_200;
  sub_214 = sub_71;
  if (controller_air_failed_recovered) {
    v_272 = sub_214;
  } else {
    v_272 = sub_201;
  };
  if (controller_c_air_2) {
    sub_213 = v_272;
  } else {
    sub_213 = sub_200;
  };
  if (controller_c_air_1) {
    sub_198 = sub_199;
  } else {
    sub_198 = sub_213;
  };
  sub_215 = sub_214;
  if (controller_c_air_2) {
    v_278 = v_277;
  } else {
    v_278 = sub_215;
  };
  sub_216 = sub_215;
  if (controller_c_air_1) {
    v_279 = v_278;
  } else {
    v_279 = sub_216;
  };
  if (controller_v_445) {
    sub_197 = v_279;
  } else {
    sub_197 = sub_198;
  };
  if (controller_v_447) {
    sub_196 = sub_216;
  } else {
    sub_196 = sub_197;
  };
  if (controller_c_air_1) {
    v_271 = sub_213;
  } else {
    v_271 = sub_199;
  };
  if (controller_air_failed_recovered) {
    v_270 = sub_201;
  } else {
    v_270 = sub_214;
  };
  if (controller_c_air_2) {
    sub_219 = v_270;
  } else {
    sub_219 = sub_215;
  };
  if (controller_c_air_1) {
    v_280 = sub_219;
    sub_218 = false;
  } else {
    v_280 = false;
    sub_218 = sub_219;
  };
  if (controller_v_445) {
    sub_217 = v_271;
  } else {
    sub_217 = sub_218;
  };
  if (controller_air_failed_recovered) {
    v_268 = false;
  } else {
    v_268 = sub_201;
  };
  if (controller_c_air_2) {
    v_269 = v_268;
  } else {
    v_269 = sub_200;
  };
  if (controller_c_air_1) {
    sub_220 = v_269;
  } else {
    sub_220 = sub_199;
  };
  if (controller_v_445) {
    v_281 = v_280;
  } else {
    v_281 = sub_220;
  };
  if (controller_v_447) {
    v_282 = v_281;
  } else {
    v_282 = sub_217;
  };
  if (controller_v_446) {
    v_283 = v_282;
  } else {
    v_283 = sub_196;
  };
  if (controller_c_window) {
    sub_230 = false;
  } else {
    sub_230 = sub_206;
  };
  if (controller_v_391) {
    sub_229 = sub_74;
  } else {
    sub_229 = sub_230;
  };
  if (controller_v_392) {
    v_263 = sub_229;
    v_262 = sub_212;
  } else {
    v_263 = sub_212;
    v_262 = sub_229;
  };
  if (controller_blind_failed_recovered) {
    sub_228 = v_262;
  } else {
    sub_228 = v_263;
  };
  if (controller_c_door) {
    v_264 = sub_150;
    sub_227 = sub_228;
  } else {
    v_264 = sub_228;
    sub_227 = sub_150;
  };
  if (controller_ck_11_1) {
    sub_226 = v_264;
  } else {
    sub_226 = sub_227;
  };
  if (controller_air_failed_recovered) {
    v_265 = sub_226;
  } else {
    v_265 = false;
  };
  sub_225 = sub_226;
  sub_224 = sub_225;
  sub_232 = sub_150;
  if (controller_air_failed_recovered) {
    v_261 = sub_232;
  } else {
    v_261 = sub_226;
  };
  if (controller_c_air_2) {
    sub_231 = v_261;
  } else {
    sub_231 = sub_225;
  };
  if (controller_c_air_1) {
    sub_223 = sub_224;
  } else {
    sub_223 = sub_231;
  };
  sub_233 = sub_232;
  if (controller_c_air_2) {
    v_266 = v_265;
  } else {
    v_266 = sub_233;
  };
  sub_234 = sub_233;
  if (controller_c_air_1) {
    v_267 = v_266;
  } else {
    v_267 = sub_234;
  };
  if (controller_v_445) {
    sub_222 = v_267;
  } else {
    sub_222 = sub_223;
  };
  if (controller_v_447) {
    sub_221 = sub_234;
  } else {
    sub_221 = sub_222;
  };
  if (controller_c_air_1) {
    v_260 = sub_231;
  } else {
    v_260 = sub_224;
  };
  if (controller_air_failed_recovered) {
    v_259 = sub_226;
  } else {
    v_259 = sub_232;
  };
  if (controller_c_air_2) {
    sub_237 = v_259;
  } else {
    sub_237 = sub_233;
  };
  if (controller_c_air_1) {
    v_284 = sub_237;
    sub_236 = false;
  } else {
    v_284 = false;
    sub_236 = sub_237;
  };
  if (controller_v_445) {
    sub_235 = v_260;
  } else {
    sub_235 = sub_236;
  };
  if (controller_air_failed_recovered) {
    v_257 = false;
  } else {
    v_257 = sub_226;
  };
  if (controller_c_air_2) {
    v_258 = v_257;
  } else {
    v_258 = sub_225;
  };
  if (controller_c_air_1) {
    sub_238 = v_258;
  } else {
    sub_238 = sub_224;
  };
  if (controller_v_445) {
    v_285 = v_284;
  } else {
    v_285 = sub_238;
  };
  if (controller_v_447) {
    v_286 = v_285;
  } else {
    v_286 = sub_235;
  };
  if (controller_v_446) {
    v_287 = v_286;
  } else {
    v_287 = sub_221;
  };
  if (controller_blind_switch) {
    v_288 = v_283;
  } else {
    v_288 = v_287;
  };
  if (controller_v_391) {
    v_249 = sub_230;
  } else {
    v_249 = sub_74;
  };
  if (controller_v_392) {
    sub_248 = v_249;
  } else {
    sub_248 = sub_212;
  };
  sub_247 = sub_248;
  if (controller_c_door) {
    v_250 = sub_178;
    sub_246 = sub_247;
  } else {
    v_250 = sub_247;
    sub_246 = sub_178;
  };
  if (controller_ck_11_1) {
    sub_245 = v_250;
  } else {
    sub_245 = sub_246;
  };
  if (controller_air_failed_recovered) {
    v_251 = sub_245;
  } else {
    v_251 = false;
  };
  sub_244 = sub_245;
  sub_243 = sub_244;
  sub_250 = sub_178;
  if (controller_air_failed_recovered) {
    v_248 = sub_250;
  } else {
    v_248 = sub_245;
  };
  if (controller_c_air_2) {
    sub_249 = v_248;
  } else {
    sub_249 = sub_244;
  };
  if (controller_c_air_1) {
    sub_242 = sub_243;
  } else {
    sub_242 = sub_249;
  };
  sub_251 = sub_250;
  if (controller_c_air_2) {
    v_252 = v_251;
  } else {
    v_252 = sub_251;
  };
  sub_252 = sub_251;
  if (controller_c_air_1) {
    v_253 = v_252;
  } else {
    v_253 = sub_252;
  };
  if (controller_v_445) {
    sub_241 = v_253;
  } else {
    sub_241 = sub_242;
  };
  if (controller_v_447) {
    sub_240 = sub_252;
  } else {
    sub_240 = sub_241;
  };
  if (controller_c_air_1) {
    v_247 = sub_249;
  } else {
    v_247 = sub_243;
  };
  if (controller_air_failed_recovered) {
    v_246 = sub_245;
  } else {
    v_246 = sub_250;
  };
  if (controller_c_air_2) {
    sub_255 = v_246;
  } else {
    sub_255 = sub_251;
  };
  if (controller_c_air_1) {
    v_254 = sub_255;
    sub_254 = false;
  } else {
    v_254 = false;
    sub_254 = sub_255;
  };
  if (controller_v_445) {
    sub_253 = v_247;
  } else {
    sub_253 = sub_254;
  };
  if (controller_air_failed_recovered) {
    v_244 = false;
  } else {
    v_244 = sub_245;
  };
  if (controller_c_air_2) {
    v_245 = v_244;
  } else {
    v_245 = sub_244;
  };
  if (controller_c_air_1) {
    sub_256 = v_245;
  } else {
    sub_256 = sub_243;
  };
  if (controller_v_445) {
    v_255 = v_254;
  } else {
    v_255 = sub_256;
  };
  if (controller_v_447) {
    v_256 = v_255;
  } else {
    v_256 = sub_253;
  };
  if (controller_v_446) {
    sub_239 = v_256;
  } else {
    sub_239 = sub_240;
  };
  if (controller_c_blind_1) {
    sub_195 = v_288;
  } else {
    sub_195 = sub_239;
  };
  sub_268 = sub_16;
  if (controller_c_window) {
    sub_267 = sub_268;
    sub_269 = sub_268;
  } else {
    sub_267 = sub_33;
    sub_269 = sub_53;
  };
  if (controller_v_391) {
    sub_266 = sub_269;
  } else {
    sub_266 = sub_267;
  };
  sub_271 = sub_58;
  if (controller_c_window) {
    sub_270 = sub_271;
  } else {
    sub_270 = sub_33;
  };
  if (controller_v_392) {
    v_223 = sub_270;
  } else {
    v_223 = sub_266;
  };
  if (controller_c_window) {
    sub_273 = false;
  } else {
    sub_273 = sub_53;
  };
  if (controller_v_391) {
    sub_272 = sub_273;
  } else {
    sub_272 = sub_149;
  };
  if (controller_v_392) {
    v_224 = sub_272;
  } else {
    v_224 = sub_270;
  };
  if (controller_blind_failed_recovered) {
    sub_265 = v_223;
  } else {
    sub_265 = v_224;
  };
  if (controller_c_door) {
    v_225 = false;
    sub_264 = sub_265;
  } else {
    v_225 = sub_265;
    sub_264 = false;
  };
  if (controller_ck_11_1) {
    sub_263 = v_225;
  } else {
    sub_263 = sub_264;
  };
  sub_262 = sub_263;
  sub_261 = sub_262;
  sub_275 = sub_156;
  sub_274 = sub_275;
  if (controller_air_failed_recovered) {
    v_226 = sub_274;
  } else {
    v_226 = sub_263;
  };
  if (controller_c_air_2) {
    v_227 = v_226;
  } else {
    v_227 = sub_262;
  };
  if (controller_c_air_1) {
    sub_260 = sub_261;
  } else {
    sub_260 = v_227;
  };
  if (controller_c_pc) {
    v_222 = sub_102;
  } else {
    v_222 = sub_128;
  };
  if (controller_c_window) {
    sub_278 = v_222;
  } else {
    sub_278 = sub_127;
  };
  sub_277 = sub_278;
  sub_276 = sub_277;
  if (controller_air_failed_recovered) {
    v_228 = sub_263;
  } else {
    v_228 = sub_276;
  };
  sub_282 = sub_115;
  sub_281 = sub_282;
  sub_280 = sub_281;
  if (controller_air_failed_recovered) {
    v_231 = sub_263;
  } else {
    v_231 = sub_280;
  };
  sub_279 = sub_280;
  if (controller_c_air_2) {
    v_229 = v_228;
  } else {
    v_229 = sub_279;
  };
  sub_284 = sub_274;
  if (controller_c_air_2) {
    v_232 = v_231;
  } else {
    v_232 = sub_284;
  };
  sub_283 = sub_284;
  if (controller_c_air_1) {
    v_230 = v_229;
  } else {
    v_230 = sub_283;
  };
  if (controller_v_445) {
    sub_259 = v_230;
  } else {
    sub_259 = sub_260;
  };
  sub_286 = sub_279;
  sub_285 = sub_286;
  if (controller_v_447) {
    sub_258 = sub_285;
  } else {
    sub_258 = sub_259;
  };
  if (controller_air_failed_recovered) {
    v_219 = sub_280;
  } else {
    v_219 = sub_263;
  };
  if (controller_c_air_2) {
    v_220 = v_219;
  } else {
    v_220 = sub_262;
  };
  if (controller_c_air_1) {
    v_221 = v_220;
  } else {
    v_221 = sub_261;
  };
  if (controller_air_failed_recovered) {
    v_217 = sub_263;
  } else {
    v_217 = sub_274;
  };
  if (controller_c_air_2) {
    v_218 = v_217;
  } else {
    v_218 = sub_279;
  };
  sub_290 = sub_276;
  sub_289 = sub_290;
  if (controller_c_air_1) {
    v_233 = v_232;
    sub_288 = sub_289;
  } else {
    v_233 = sub_289;
    sub_288 = v_218;
  };
  if (controller_v_445) {
    sub_287 = v_221;
  } else {
    sub_287 = sub_288;
  };
  if (controller_air_failed_recovered) {
    v_215 = sub_276;
  } else {
    v_215 = sub_263;
  };
  if (controller_c_air_2) {
    v_216 = v_215;
  } else {
    v_216 = sub_262;
  };
  if (controller_c_air_1) {
    sub_291 = v_216;
  } else {
    sub_291 = sub_261;
  };
  if (controller_v_445) {
    v_234 = v_233;
  } else {
    v_234 = sub_291;
  };
  if (controller_v_447) {
    v_235 = v_234;
  } else {
    v_235 = sub_287;
  };
  if (controller_v_446) {
    v_236 = v_235;
  } else {
    v_236 = sub_258;
  };
  if (controller_v_391) {
    sub_300 = false;
  } else {
    sub_300 = sub_149;
  };
  if (controller_v_392) {
    v_208 = sub_300;
    v_207 = sub_270;
  } else {
    v_208 = sub_270;
    v_207 = sub_300;
  };
  if (controller_blind_failed_recovered) {
    sub_299 = v_207;
  } else {
    sub_299 = v_208;
  };
  if (controller_c_door) {
    v_209 = false;
    sub_298 = sub_299;
  } else {
    v_209 = sub_299;
    sub_298 = false;
  };
  if (controller_ck_11_1) {
    sub_297 = v_209;
  } else {
    sub_297 = sub_298;
  };
  if (controller_air_failed_recovered) {
    v_237 = sub_297;
  } else {
    v_237 = sub_280;
  };
  if (controller_c_air_2) {
    v_238 = v_237;
  } else {
    v_238 = sub_284;
  };
  if (controller_c_air_1) {
    v_239 = v_238;
  } else {
    v_239 = sub_289;
  };
  if (controller_air_failed_recovered) {
    v_212 = sub_297;
  } else {
    v_212 = sub_276;
  };
  if (controller_c_air_2) {
    v_213 = v_212;
  } else {
    v_213 = sub_279;
  };
  if (controller_c_air_1) {
    v_214 = v_213;
  } else {
    v_214 = sub_283;
  };
  if (controller_air_failed_recovered) {
    v_210 = sub_274;
  } else {
    v_210 = sub_297;
  };
  sub_296 = sub_297;
  if (controller_c_air_2) {
    v_211 = v_210;
  } else {
    v_211 = sub_296;
  };
  sub_295 = sub_296;
  if (controller_c_air_1) {
    sub_294 = sub_295;
  } else {
    sub_294 = v_211;
  };
  if (controller_v_445) {
    sub_293 = v_214;
  } else {
    sub_293 = sub_294;
  };
  if (controller_v_447) {
    sub_292 = sub_285;
  } else {
    sub_292 = sub_293;
  };
  if (controller_air_failed_recovered) {
    v_204 = sub_280;
  } else {
    v_204 = sub_297;
  };
  if (controller_c_air_2) {
    v_205 = v_204;
  } else {
    v_205 = sub_296;
  };
  if (controller_c_air_1) {
    v_206 = v_205;
  } else {
    v_206 = sub_295;
  };
  if (controller_air_failed_recovered) {
    v_202 = sub_297;
  } else {
    v_202 = sub_274;
  };
  if (controller_c_air_2) {
    v_203 = v_202;
  } else {
    v_203 = sub_279;
  };
  if (controller_c_air_1) {
    sub_302 = sub_289;
  } else {
    sub_302 = v_203;
  };
  if (controller_v_445) {
    sub_301 = v_206;
  } else {
    sub_301 = sub_302;
  };
  if (controller_air_failed_recovered) {
    v_200 = sub_276;
  } else {
    v_200 = sub_297;
  };
  if (controller_c_air_2) {
    v_201 = v_200;
  } else {
    v_201 = sub_296;
  };
  if (controller_c_air_1) {
    sub_303 = v_201;
  } else {
    sub_303 = sub_295;
  };
  if (controller_v_445) {
    v_240 = v_239;
  } else {
    v_240 = sub_303;
  };
  if (controller_v_447) {
    v_241 = v_240;
  } else {
    v_241 = sub_301;
  };
  if (controller_v_446) {
    v_242 = v_241;
  } else {
    v_242 = sub_292;
  };
  if (controller_blind_switch) {
    v_243 = v_236;
  } else {
    v_243 = v_242;
  };
  if (controller_v_391) {
    v_188 = sub_149;
  } else {
    v_188 = false;
  };
  if (controller_v_392) {
    sub_313 = v_188;
  } else {
    sub_313 = sub_270;
  };
  sub_312 = sub_313;
  if (controller_c_door) {
    v_189 = false;
    sub_311 = sub_312;
  } else {
    v_189 = sub_312;
    sub_311 = false;
  };
  if (controller_ck_11_1) {
    sub_310 = v_189;
  } else {
    sub_310 = sub_311;
  };
  if (controller_air_failed_recovered) {
    v_195 = sub_310;
  } else {
    v_195 = sub_280;
  };
  if (controller_c_air_2) {
    v_196 = v_195;
  } else {
    v_196 = sub_284;
  };
  if (controller_c_air_1) {
    v_197 = v_196;
  } else {
    v_197 = sub_289;
  };
  if (controller_air_failed_recovered) {
    v_192 = sub_310;
  } else {
    v_192 = sub_276;
  };
  if (controller_c_air_2) {
    v_193 = v_192;
  } else {
    v_193 = sub_279;
  };
  if (controller_c_air_1) {
    v_194 = v_193;
  } else {
    v_194 = sub_283;
  };
  if (controller_air_failed_recovered) {
    v_190 = sub_274;
  } else {
    v_190 = sub_310;
  };
  sub_309 = sub_310;
  if (controller_c_air_2) {
    v_191 = v_190;
  } else {
    v_191 = sub_309;
  };
  sub_308 = sub_309;
  if (controller_c_air_1) {
    sub_307 = sub_308;
  } else {
    sub_307 = v_191;
  };
  if (controller_v_445) {
    sub_306 = v_194;
  } else {
    sub_306 = sub_307;
  };
  if (controller_v_447) {
    sub_305 = sub_285;
  } else {
    sub_305 = sub_306;
  };
  if (controller_air_failed_recovered) {
    v_185 = sub_280;
  } else {
    v_185 = sub_310;
  };
  if (controller_c_air_2) {
    v_186 = v_185;
  } else {
    v_186 = sub_309;
  };
  if (controller_c_air_1) {
    v_187 = v_186;
  } else {
    v_187 = sub_308;
  };
  if (controller_air_failed_recovered) {
    v_183 = sub_310;
  } else {
    v_183 = sub_274;
  };
  if (controller_c_air_2) {
    v_184 = v_183;
  } else {
    v_184 = sub_279;
  };
  if (controller_c_air_1) {
    sub_315 = sub_289;
  } else {
    sub_315 = v_184;
  };
  if (controller_v_445) {
    sub_314 = v_187;
  } else {
    sub_314 = sub_315;
  };
  if (controller_air_failed_recovered) {
    v_181 = sub_276;
  } else {
    v_181 = sub_310;
  };
  if (controller_c_air_2) {
    v_182 = v_181;
  } else {
    v_182 = sub_309;
  };
  if (controller_c_air_1) {
    sub_316 = v_182;
  } else {
    sub_316 = sub_308;
  };
  if (controller_v_445) {
    v_198 = v_197;
  } else {
    v_198 = sub_316;
  };
  if (controller_v_447) {
    v_199 = v_198;
  } else {
    v_199 = sub_314;
  };
  if (controller_v_446) {
    sub_304 = v_199;
  } else {
    sub_304 = sub_305;
  };
  if (controller_c_blind_1) {
    sub_257 = v_243;
  } else {
    sub_257 = sub_304;
  };
  if (controller_v_407) {
    v_370 = sub_257;
  } else {
    v_370 = sub_195;
  };
  if (controller_v_408) {
    sub_3 = v_370;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  if (controller_v_407) {
    sub_318 = sub_195;
  } else {
    sub_318 = sub_257;
  };
  if (controller_v_408) {
    v_179 = sub_318;
    v_178 = sub_4;
  } else {
    v_179 = sub_4;
    v_178 = sub_318;
  };
  if (controller_light_failed_recovered) {
    v_180 = v_178;
  } else {
    v_180 = v_179;
  };
  if (controller_c_light_1) {
    sub_317 = v_180;
  } else {
    sub_317 = sub_2;
  };
  if (controller_light_switch) {
    v_371 = sub_2;
  } else {
    v_371 = sub_317;
  };
  if (controller_c_light_2) {
    sub_1 = v_371;
  } else {
    sub_1 = sub_317;
  };
  if (controller_c_window) {
    v_160 = sub_57;
    sub_330 = sub_15;
  } else {
    v_160 = sub_53;
    sub_330 = sub_53;
  };
  if (controller_v_392) {
    v_163 = sub_65;
  } else {
    v_163 = sub_330;
  };
  if (controller_cleaner) {
    sub_336 = sub_48;
  } else {
    sub_336 = sub_47;
  };
  if (controller_worker) {
    v_157 = sub_41;
    sub_335 = sub_336;
  } else {
    v_157 = sub_336;
    sub_335 = sub_41;
  };
  if (controller_ck_15_1) {
    sub_334 = v_157;
  } else {
    sub_334 = sub_335;
  };
  if (controller_change_shift) {
    v_158 = sub_29;
    sub_333 = sub_334;
  } else {
    v_158 = sub_334;
    sub_333 = sub_29;
  };
  if (controller_ck_1) {
    sub_332 = v_158;
  } else {
    sub_332 = sub_333;
  };
  if (controller_c_pc) {
    v_159 = sub_58;
  } else {
    v_159 = sub_332;
  };
  if (controller_c_window) {
    sub_331 = v_159;
  } else {
    sub_331 = sub_33;
  };
  if (controller_v_391) {
    v_161 = v_160;
  } else {
    v_161 = sub_331;
  };
  if (controller_v_392) {
    v_162 = v_161;
  } else {
    v_162 = sub_330;
  };
  if (controller_blind_failed_recovered) {
    sub_329 = v_162;
  } else {
    sub_329 = v_163;
  };
  if (controller_v_392) {
    sub_338 = sub_72;
  } else {
    sub_338 = sub_73;
  };
  sub_337 = sub_338;
  if (controller_c_door) {
    v_164 = sub_337;
    sub_328 = sub_329;
  } else {
    v_164 = sub_329;
    sub_328 = sub_337;
  };
  if (controller_ck_11_1) {
    sub_327 = v_164;
  } else {
    sub_327 = sub_328;
  };
  sub_326 = sub_327;
  sub_325 = sub_326;
  sub_343 = sub_90;
  if (controller_c_pc) {
    v_150 = sub_80;
  } else {
    v_150 = sub_343;
  };
  if (controller_c_window) {
    sub_342 = v_150;
  } else {
    sub_342 = sub_98;
  };
  if (controller_v_392) {
    v_155 = sub_111;
  } else {
    v_155 = sub_342;
  };
  sub_345 = sub_87;
  if (controller_c_pc) {
    v_149 = sub_102;
  } else {
    v_149 = sub_345;
  };
  if (controller_c_window) {
    sub_344 = v_149;
  } else {
    sub_344 = sub_108;
  };
  if (controller_change_shift) {
    v_148 = sub_107;
    sub_347 = sub_97;
  } else {
    v_148 = sub_97;
    sub_347 = sub_107;
  };
  if (controller_ck_1) {
    sub_346 = v_148;
  } else {
    sub_346 = sub_347;
  };
  if (controller_c_pc) {
    v_151 = sub_102;
  } else {
    v_151 = sub_346;
  };
  if (controller_ck_1) {
    sub_349 = sub_93;
  } else {
    sub_349 = sub_95;
  };
  sub_348 = sub_349;
  if (controller_c_window) {
    v_152 = v_151;
  } else {
    v_152 = sub_348;
  };
  if (controller_v_391) {
    v_153 = v_152;
  } else {
    v_153 = sub_344;
  };
  if (controller_v_392) {
    v_154 = v_153;
  } else {
    v_154 = sub_342;
  };
  if (controller_blind_failed_recovered) {
    sub_341 = v_154;
  } else {
    sub_341 = v_155;
  };
  sub_340 = sub_341;
  if (controller_air_failed_recovered) {
    v_156 = sub_340;
  } else {
    v_156 = sub_327;
  };
  if (controller_c_air_2) {
    sub_339 = v_156;
  } else {
    sub_339 = sub_326;
  };
  if (controller_c_air_1) {
    sub_324 = sub_325;
  } else {
    sub_324 = sub_339;
  };
  if (controller_v_392) {
    sub_352 = sub_125;
  } else {
    sub_352 = sub_129;
  };
  sub_351 = sub_352;
  sub_350 = sub_351;
  if (controller_air_failed_recovered) {
    v_165 = sub_327;
  } else {
    v_165 = sub_350;
  };
  sub_353 = sub_340;
  if (controller_c_air_2) {
    v_166 = v_165;
  } else {
    v_166 = sub_353;
  };
  sub_354 = sub_353;
  if (controller_c_air_1) {
    v_167 = v_166;
  } else {
    v_167 = sub_354;
  };
  if (controller_v_445) {
    sub_323 = v_167;
  } else {
    sub_323 = sub_324;
  };
  if (controller_v_447) {
    sub_322 = sub_354;
  } else {
    sub_322 = sub_323;
  };
  if (controller_c_air_1) {
    v_147 = sub_339;
  } else {
    v_147 = sub_325;
  };
  sub_358 = sub_350;
  sub_357 = sub_358;
  if (controller_air_failed_recovered) {
    v_146 = sub_327;
  } else {
    v_146 = sub_340;
  };
  if (controller_c_air_2) {
    sub_359 = v_146;
  } else {
    sub_359 = sub_353;
  };
  if (controller_c_air_1) {
    v_168 = sub_359;
    sub_356 = sub_357;
  } else {
    v_168 = sub_357;
    sub_356 = sub_359;
  };
  if (controller_v_445) {
    sub_355 = v_147;
  } else {
    sub_355 = sub_356;
  };
  if (controller_air_failed_recovered) {
    v_144 = sub_350;
  } else {
    v_144 = sub_327;
  };
  if (controller_c_air_2) {
    v_145 = v_144;
  } else {
    v_145 = sub_326;
  };
  if (controller_c_air_1) {
    sub_360 = v_145;
  } else {
    sub_360 = sub_325;
  };
  if (controller_v_445) {
    v_169 = v_168;
  } else {
    v_169 = sub_360;
  };
  if (controller_v_447) {
    v_170 = v_169;
  } else {
    v_170 = sub_355;
  };
  if (controller_v_446) {
    v_171 = v_170;
  } else {
    v_171 = sub_322;
  };
  if (controller_v_391) {
    sub_369 = sub_73;
  } else {
    sub_369 = sub_273;
  };
  if (controller_v_392) {
    v_139 = sub_369;
    v_138 = sub_330;
  } else {
    v_139 = sub_330;
    v_138 = sub_369;
  };
  if (controller_blind_failed_recovered) {
    sub_368 = v_138;
  } else {
    sub_368 = v_139;
  };
  if (controller_v_391) {
    sub_371 = sub_73;
  } else {
    sub_371 = false;
  };
  if (controller_v_392) {
    v_137 = sub_371;
    v_136 = sub_73;
  } else {
    v_137 = sub_73;
    v_136 = sub_371;
  };
  if (controller_blind_failed_recovered) {
    sub_370 = v_136;
  } else {
    sub_370 = v_137;
  };
  if (controller_c_door) {
    v_140 = sub_370;
    sub_367 = sub_368;
  } else {
    v_140 = sub_368;
    sub_367 = sub_370;
  };
  if (controller_ck_11_1) {
    sub_366 = v_140;
  } else {
    sub_366 = sub_367;
  };
  sub_365 = sub_366;
  sub_364 = sub_365;
  if (controller_c_pc) {
    v_132 = false;
  } else {
    v_132 = sub_121;
  };
  if (controller_c_window) {
    sub_376 = v_132;
  } else {
    sub_376 = sub_120;
  };
  if (controller_v_391) {
    sub_375 = sub_73;
  } else {
    sub_375 = sub_376;
  };
  if (controller_v_392) {
    v_134 = sub_375;
    v_133 = sub_342;
  } else {
    v_134 = sub_342;
    v_133 = sub_375;
  };
  if (controller_blind_failed_recovered) {
    sub_374 = v_133;
  } else {
    sub_374 = v_134;
  };
  sub_373 = sub_374;
  if (controller_air_failed_recovered) {
    v_135 = sub_373;
  } else {
    v_135 = sub_366;
  };
  if (controller_c_air_2) {
    sub_372 = v_135;
  } else {
    sub_372 = sub_365;
  };
  if (controller_c_air_1) {
    sub_363 = sub_364;
  } else {
    sub_363 = sub_372;
  };
  if (controller_v_391) {
    sub_379 = false;
  } else {
    sub_379 = sub_129;
  };
  if (controller_v_392) {
    v_131 = sub_379;
    v_130 = sub_129;
  } else {
    v_131 = sub_129;
    v_130 = sub_379;
  };
  if (controller_blind_failed_recovered) {
    sub_378 = v_130;
  } else {
    sub_378 = v_131;
  };
  sub_377 = sub_378;
  if (controller_air_failed_recovered) {
    v_141 = sub_366;
  } else {
    v_141 = sub_377;
  };
  sub_380 = sub_373;
  if (controller_c_air_2) {
    v_142 = v_141;
  } else {
    v_142 = sub_380;
  };
  sub_381 = sub_380;
  if (controller_c_air_1) {
    v_143 = v_142;
  } else {
    v_143 = sub_381;
  };
  if (controller_v_445) {
    sub_362 = v_143;
  } else {
    sub_362 = sub_363;
  };
  if (controller_v_447) {
    sub_361 = sub_381;
  } else {
    sub_361 = sub_362;
  };
  if (controller_c_air_1) {
    v_129 = sub_372;
  } else {
    v_129 = sub_364;
  };
  sub_385 = sub_377;
  sub_384 = sub_385;
  if (controller_air_failed_recovered) {
    v_128 = sub_366;
  } else {
    v_128 = sub_373;
  };
  if (controller_c_air_2) {
    sub_386 = v_128;
  } else {
    sub_386 = sub_380;
  };
  if (controller_c_air_1) {
    v_172 = sub_386;
    sub_383 = sub_384;
  } else {
    v_172 = sub_384;
    sub_383 = sub_386;
  };
  if (controller_v_445) {
    sub_382 = v_129;
  } else {
    sub_382 = sub_383;
  };
  if (controller_air_failed_recovered) {
    v_126 = sub_377;
  } else {
    v_126 = sub_366;
  };
  if (controller_c_air_2) {
    v_127 = v_126;
  } else {
    v_127 = sub_365;
  };
  if (controller_c_air_1) {
    sub_387 = v_127;
  } else {
    sub_387 = sub_364;
  };
  if (controller_v_445) {
    v_173 = v_172;
  } else {
    v_173 = sub_387;
  };
  if (controller_v_447) {
    v_174 = v_173;
  } else {
    v_174 = sub_382;
  };
  if (controller_v_446) {
    v_175 = v_174;
  } else {
    v_175 = sub_361;
  };
  if (controller_blind_switch) {
    v_176 = v_171;
  } else {
    v_176 = v_175;
  };
  if (controller_v_391) {
    v_118 = sub_273;
  } else {
    v_118 = sub_73;
  };
  if (controller_v_392) {
    sub_397 = v_118;
  } else {
    sub_397 = sub_330;
  };
  sub_396 = sub_397;
  if (controller_v_391) {
    v_117 = false;
  } else {
    v_117 = sub_73;
  };
  if (controller_v_392) {
    sub_399 = v_117;
  } else {
    sub_399 = sub_73;
  };
  sub_398 = sub_399;
  if (controller_c_door) {
    v_119 = sub_398;
    sub_395 = sub_396;
  } else {
    v_119 = sub_396;
    sub_395 = sub_398;
  };
  if (controller_ck_11_1) {
    sub_394 = v_119;
  } else {
    sub_394 = sub_395;
  };
  sub_393 = sub_394;
  sub_392 = sub_393;
  if (controller_v_391) {
    v_115 = sub_376;
  } else {
    v_115 = sub_73;
  };
  if (controller_v_392) {
    sub_403 = v_115;
  } else {
    sub_403 = sub_342;
  };
  sub_402 = sub_403;
  sub_401 = sub_402;
  if (controller_air_failed_recovered) {
    v_116 = sub_401;
  } else {
    v_116 = sub_394;
  };
  if (controller_c_air_2) {
    sub_400 = v_116;
  } else {
    sub_400 = sub_393;
  };
  if (controller_c_air_1) {
    sub_391 = sub_392;
  } else {
    sub_391 = sub_400;
  };
  if (controller_v_391) {
    v_114 = sub_129;
  } else {
    v_114 = false;
  };
  if (controller_v_392) {
    sub_406 = v_114;
  } else {
    sub_406 = sub_129;
  };
  sub_405 = sub_406;
  sub_404 = sub_405;
  if (controller_air_failed_recovered) {
    v_120 = sub_394;
  } else {
    v_120 = sub_404;
  };
  sub_407 = sub_401;
  if (controller_c_air_2) {
    v_121 = v_120;
  } else {
    v_121 = sub_407;
  };
  sub_408 = sub_407;
  if (controller_c_air_1) {
    v_122 = v_121;
  } else {
    v_122 = sub_408;
  };
  if (controller_v_445) {
    sub_390 = v_122;
  } else {
    sub_390 = sub_391;
  };
  if (controller_v_447) {
    sub_389 = sub_408;
  } else {
    sub_389 = sub_390;
  };
  if (controller_c_air_1) {
    v_113 = sub_400;
  } else {
    v_113 = sub_392;
  };
  sub_412 = sub_404;
  sub_411 = sub_412;
  if (controller_air_failed_recovered) {
    v_112 = sub_394;
  } else {
    v_112 = sub_401;
  };
  if (controller_c_air_2) {
    sub_413 = v_112;
  } else {
    sub_413 = sub_407;
  };
  if (controller_c_air_1) {
    v_123 = sub_413;
    sub_410 = sub_411;
  } else {
    v_123 = sub_411;
    sub_410 = sub_413;
  };
  if (controller_v_445) {
    sub_409 = v_113;
  } else {
    sub_409 = sub_410;
  };
  if (controller_air_failed_recovered) {
    v_110 = sub_404;
  } else {
    v_110 = sub_394;
  };
  if (controller_c_air_2) {
    v_111 = v_110;
  } else {
    v_111 = sub_393;
  };
  if (controller_c_air_1) {
    sub_414 = v_111;
  } else {
    sub_414 = sub_392;
  };
  if (controller_v_445) {
    v_124 = v_123;
  } else {
    v_124 = sub_414;
  };
  if (controller_v_447) {
    v_125 = v_124;
  } else {
    v_125 = sub_409;
  };
  if (controller_v_446) {
    sub_388 = v_125;
  } else {
    sub_388 = sub_389;
  };
  if (controller_c_blind_1) {
    sub_321 = v_176;
  } else {
    sub_321 = sub_388;
  };
  if (controller_c_window) {
    sub_425 = sub_67;
  } else {
    sub_425 = sub_209;
  };
  if (controller_v_392) {
    sub_424 = sub_204;
  } else {
    sub_424 = sub_425;
  };
  sub_423 = sub_424;
  if (controller_c_door) {
    v_97 = sub_337;
    sub_422 = sub_423;
  } else {
    v_97 = sub_423;
    sub_422 = sub_337;
  };
  if (controller_ck_11_1) {
    sub_421 = v_97;
  } else {
    sub_421 = sub_422;
  };
  if (controller_air_failed_recovered) {
    v_98 = sub_421;
  } else {
    v_98 = false;
  };
  sub_420 = sub_421;
  sub_419 = sub_420;
  sub_427 = sub_337;
  if (controller_air_failed_recovered) {
    v_96 = sub_427;
  } else {
    v_96 = sub_421;
  };
  if (controller_c_air_2) {
    sub_426 = v_96;
  } else {
    sub_426 = sub_420;
  };
  if (controller_c_air_1) {
    sub_418 = sub_419;
  } else {
    sub_418 = sub_426;
  };
  sub_428 = sub_427;
  if (controller_c_air_2) {
    v_99 = v_98;
  } else {
    v_99 = sub_428;
  };
  sub_429 = sub_428;
  if (controller_c_air_1) {
    v_100 = v_99;
  } else {
    v_100 = sub_429;
  };
  if (controller_v_445) {
    sub_417 = v_100;
  } else {
    sub_417 = sub_418;
  };
  if (controller_v_447) {
    sub_416 = sub_429;
  } else {
    sub_416 = sub_417;
  };
  if (controller_c_air_1) {
    v_95 = sub_426;
  } else {
    v_95 = sub_419;
  };
  if (controller_air_failed_recovered) {
    v_94 = sub_421;
  } else {
    v_94 = sub_427;
  };
  if (controller_c_air_2) {
    sub_432 = v_94;
  } else {
    sub_432 = sub_428;
  };
  if (controller_c_air_1) {
    v_101 = sub_432;
    sub_431 = false;
  } else {
    v_101 = false;
    sub_431 = sub_432;
  };
  if (controller_v_445) {
    sub_430 = v_95;
  } else {
    sub_430 = sub_431;
  };
  if (controller_air_failed_recovered) {
    v_92 = false;
  } else {
    v_92 = sub_421;
  };
  if (controller_c_air_2) {
    v_93 = v_92;
  } else {
    v_93 = sub_420;
  };
  if (controller_c_air_1) {
    sub_433 = v_93;
  } else {
    sub_433 = sub_419;
  };
  if (controller_v_445) {
    v_102 = v_101;
  } else {
    v_102 = sub_433;
  };
  if (controller_v_447) {
    v_103 = v_102;
  } else {
    v_103 = sub_430;
  };
  if (controller_v_446) {
    v_104 = v_103;
  } else {
    v_104 = sub_416;
  };
  if (controller_c_window) {
    sub_443 = false;
  } else {
    sub_443 = sub_209;
  };
  if (controller_v_391) {
    sub_442 = sub_73;
  } else {
    sub_442 = sub_443;
  };
  if (controller_v_392) {
    v_87 = sub_442;
    v_86 = sub_425;
  } else {
    v_87 = sub_425;
    v_86 = sub_442;
  };
  if (controller_blind_failed_recovered) {
    sub_441 = v_86;
  } else {
    sub_441 = v_87;
  };
  if (controller_c_door) {
    v_88 = sub_370;
    sub_440 = sub_441;
  } else {
    v_88 = sub_441;
    sub_440 = sub_370;
  };
  if (controller_ck_11_1) {
    sub_439 = v_88;
  } else {
    sub_439 = sub_440;
  };
  if (controller_air_failed_recovered) {
    v_89 = sub_439;
  } else {
    v_89 = false;
  };
  sub_438 = sub_439;
  sub_437 = sub_438;
  sub_445 = sub_370;
  if (controller_air_failed_recovered) {
    v_85 = sub_445;
  } else {
    v_85 = sub_439;
  };
  if (controller_c_air_2) {
    sub_444 = v_85;
  } else {
    sub_444 = sub_438;
  };
  if (controller_c_air_1) {
    sub_436 = sub_437;
  } else {
    sub_436 = sub_444;
  };
  sub_446 = sub_445;
  if (controller_c_air_2) {
    v_90 = v_89;
  } else {
    v_90 = sub_446;
  };
  sub_447 = sub_446;
  if (controller_c_air_1) {
    v_91 = v_90;
  } else {
    v_91 = sub_447;
  };
  if (controller_v_445) {
    sub_435 = v_91;
  } else {
    sub_435 = sub_436;
  };
  if (controller_v_447) {
    sub_434 = sub_447;
  } else {
    sub_434 = sub_435;
  };
  if (controller_c_air_1) {
    v_84 = sub_444;
  } else {
    v_84 = sub_437;
  };
  if (controller_air_failed_recovered) {
    v_83 = sub_439;
  } else {
    v_83 = sub_445;
  };
  if (controller_c_air_2) {
    sub_450 = v_83;
  } else {
    sub_450 = sub_446;
  };
  if (controller_c_air_1) {
    v_105 = sub_450;
    sub_449 = false;
  } else {
    v_105 = false;
    sub_449 = sub_450;
  };
  if (controller_v_445) {
    sub_448 = v_84;
  } else {
    sub_448 = sub_449;
  };
  if (controller_air_failed_recovered) {
    v_81 = false;
  } else {
    v_81 = sub_439;
  };
  if (controller_c_air_2) {
    v_82 = v_81;
  } else {
    v_82 = sub_438;
  };
  if (controller_c_air_1) {
    sub_451 = v_82;
  } else {
    sub_451 = sub_437;
  };
  if (controller_v_445) {
    v_106 = v_105;
  } else {
    v_106 = sub_451;
  };
  if (controller_v_447) {
    v_107 = v_106;
  } else {
    v_107 = sub_448;
  };
  if (controller_v_446) {
    v_108 = v_107;
  } else {
    v_108 = sub_434;
  };
  if (controller_blind_switch) {
    v_109 = v_104;
  } else {
    v_109 = v_108;
  };
  if (controller_v_391) {
    v_73 = sub_443;
  } else {
    v_73 = sub_73;
  };
  if (controller_v_392) {
    sub_461 = v_73;
  } else {
    sub_461 = sub_425;
  };
  sub_460 = sub_461;
  if (controller_c_door) {
    v_74 = sub_398;
    sub_459 = sub_460;
  } else {
    v_74 = sub_460;
    sub_459 = sub_398;
  };
  if (controller_ck_11_1) {
    sub_458 = v_74;
  } else {
    sub_458 = sub_459;
  };
  if (controller_air_failed_recovered) {
    v_75 = sub_458;
  } else {
    v_75 = false;
  };
  sub_457 = sub_458;
  sub_456 = sub_457;
  sub_463 = sub_398;
  if (controller_air_failed_recovered) {
    v_72 = sub_463;
  } else {
    v_72 = sub_458;
  };
  if (controller_c_air_2) {
    sub_462 = v_72;
  } else {
    sub_462 = sub_457;
  };
  if (controller_c_air_1) {
    sub_455 = sub_456;
  } else {
    sub_455 = sub_462;
  };
  sub_464 = sub_463;
  if (controller_c_air_2) {
    v_76 = v_75;
  } else {
    v_76 = sub_464;
  };
  sub_465 = sub_464;
  if (controller_c_air_1) {
    v_77 = v_76;
  } else {
    v_77 = sub_465;
  };
  if (controller_v_445) {
    sub_454 = v_77;
  } else {
    sub_454 = sub_455;
  };
  if (controller_v_447) {
    sub_453 = sub_465;
  } else {
    sub_453 = sub_454;
  };
  if (controller_c_air_1) {
    v_71 = sub_462;
  } else {
    v_71 = sub_456;
  };
  if (controller_air_failed_recovered) {
    v_70 = sub_458;
  } else {
    v_70 = sub_463;
  };
  if (controller_c_air_2) {
    sub_468 = v_70;
  } else {
    sub_468 = sub_464;
  };
  if (controller_c_air_1) {
    v_78 = sub_468;
    sub_467 = false;
  } else {
    v_78 = false;
    sub_467 = sub_468;
  };
  if (controller_v_445) {
    sub_466 = v_71;
  } else {
    sub_466 = sub_467;
  };
  if (controller_air_failed_recovered) {
    v_68 = false;
  } else {
    v_68 = sub_458;
  };
  if (controller_c_air_2) {
    v_69 = v_68;
  } else {
    v_69 = sub_457;
  };
  if (controller_c_air_1) {
    sub_469 = v_69;
  } else {
    sub_469 = sub_456;
  };
  if (controller_v_445) {
    v_79 = v_78;
  } else {
    v_79 = sub_469;
  };
  if (controller_v_447) {
    v_80 = v_79;
  } else {
    v_80 = sub_466;
  };
  if (controller_v_446) {
    sub_452 = v_80;
  } else {
    sub_452 = sub_453;
  };
  if (controller_c_blind_1) {
    sub_415 = v_109;
  } else {
    sub_415 = sub_452;
  };
  if (controller_v_392) {
    v_48 = sub_272;
  } else {
    v_48 = sub_269;
  };
  if (controller_c_window) {
    v_45 = sub_271;
  } else {
    v_45 = sub_53;
  };
  if (controller_v_391) {
    v_46 = v_45;
  } else {
    v_46 = sub_270;
  };
  if (controller_v_392) {
    v_47 = v_46;
  } else {
    v_47 = sub_269;
  };
  if (controller_blind_failed_recovered) {
    sub_478 = v_47;
  } else {
    sub_478 = v_48;
  };
  if (controller_c_door) {
    v_49 = false;
    sub_477 = sub_478;
  } else {
    v_49 = sub_478;
    sub_477 = false;
  };
  if (controller_ck_11_1) {
    sub_476 = v_49;
  } else {
    sub_476 = sub_477;
  };
  sub_475 = sub_476;
  sub_474 = sub_475;
  sub_480 = sub_376;
  sub_479 = sub_480;
  if (controller_air_failed_recovered) {
    v_50 = sub_479;
  } else {
    v_50 = sub_476;
  };
  if (controller_c_air_2) {
    v_51 = v_50;
  } else {
    v_51 = sub_475;
  };
  if (controller_c_air_1) {
    sub_473 = sub_474;
  } else {
    sub_473 = v_51;
  };
  if (controller_c_pc) {
    v_44 = sub_80;
  } else {
    v_44 = sub_131;
  };
  if (controller_c_window) {
    sub_483 = v_44;
  } else {
    sub_483 = sub_130;
  };
  sub_482 = sub_483;
  sub_481 = sub_482;
  if (controller_air_failed_recovered) {
    v_52 = sub_476;
  } else {
    v_52 = sub_481;
  };
  sub_487 = sub_120;
  sub_486 = sub_487;
  sub_485 = sub_486;
  if (controller_air_failed_recovered) {
    v_55 = sub_476;
  } else {
    v_55 = sub_485;
  };
  sub_484 = sub_485;
  if (controller_c_air_2) {
    v_53 = v_52;
  } else {
    v_53 = sub_484;
  };
  sub_489 = sub_479;
  if (controller_c_air_2) {
    v_56 = v_55;
  } else {
    v_56 = sub_489;
  };
  sub_488 = sub_489;
  if (controller_c_air_1) {
    v_54 = v_53;
  } else {
    v_54 = sub_488;
  };
  if (controller_v_445) {
    sub_472 = v_54;
  } else {
    sub_472 = sub_473;
  };
  sub_491 = sub_484;
  sub_490 = sub_491;
  if (controller_v_447) {
    sub_471 = sub_490;
  } else {
    sub_471 = sub_472;
  };
  if (controller_air_failed_recovered) {
    v_41 = sub_485;
  } else {
    v_41 = sub_476;
  };
  if (controller_c_air_2) {
    v_42 = v_41;
  } else {
    v_42 = sub_475;
  };
  if (controller_c_air_1) {
    v_43 = v_42;
  } else {
    v_43 = sub_474;
  };
  if (controller_air_failed_recovered) {
    v_39 = sub_476;
  } else {
    v_39 = sub_479;
  };
  if (controller_c_air_2) {
    v_40 = v_39;
  } else {
    v_40 = sub_484;
  };
  sub_495 = sub_481;
  sub_494 = sub_495;
  if (controller_c_air_1) {
    v_57 = v_56;
    sub_493 = sub_494;
  } else {
    v_57 = sub_494;
    sub_493 = v_40;
  };
  if (controller_v_445) {
    sub_492 = v_43;
  } else {
    sub_492 = sub_493;
  };
  if (controller_air_failed_recovered) {
    v_37 = sub_481;
  } else {
    v_37 = sub_476;
  };
  if (controller_c_air_2) {
    v_38 = v_37;
  } else {
    v_38 = sub_475;
  };
  if (controller_c_air_1) {
    sub_496 = v_38;
  } else {
    sub_496 = sub_474;
  };
  if (controller_v_445) {
    v_58 = v_57;
  } else {
    v_58 = sub_496;
  };
  if (controller_v_447) {
    v_59 = v_58;
  } else {
    v_59 = sub_492;
  };
  if (controller_v_446) {
    v_60 = v_59;
  } else {
    v_60 = sub_471;
  };
  if (controller_v_391) {
    sub_505 = false;
  } else {
    sub_505 = sub_273;
  };
  if (controller_v_392) {
    v_30 = sub_505;
    v_29 = sub_269;
  } else {
    v_30 = sub_269;
    v_29 = sub_505;
  };
  if (controller_blind_failed_recovered) {
    sub_504 = v_29;
  } else {
    sub_504 = v_30;
  };
  if (controller_c_door) {
    v_31 = false;
    sub_503 = sub_504;
  } else {
    v_31 = sub_504;
    sub_503 = false;
  };
  if (controller_ck_11_1) {
    sub_502 = v_31;
  } else {
    sub_502 = sub_503;
  };
  if (controller_air_failed_recovered) {
    v_61 = sub_502;
  } else {
    v_61 = sub_485;
  };
  if (controller_c_air_2) {
    v_62 = v_61;
  } else {
    v_62 = sub_489;
  };
  if (controller_c_air_1) {
    v_63 = v_62;
  } else {
    v_63 = sub_494;
  };
  if (controller_air_failed_recovered) {
    v_34 = sub_502;
  } else {
    v_34 = sub_481;
  };
  if (controller_c_air_2) {
    v_35 = v_34;
  } else {
    v_35 = sub_484;
  };
  if (controller_c_air_1) {
    v_36 = v_35;
  } else {
    v_36 = sub_488;
  };
  if (controller_air_failed_recovered) {
    v_32 = sub_479;
  } else {
    v_32 = sub_502;
  };
  sub_501 = sub_502;
  if (controller_c_air_2) {
    v_33 = v_32;
  } else {
    v_33 = sub_501;
  };
  sub_500 = sub_501;
  if (controller_c_air_1) {
    sub_499 = sub_500;
  } else {
    sub_499 = v_33;
  };
  if (controller_v_445) {
    sub_498 = v_36;
  } else {
    sub_498 = sub_499;
  };
  if (controller_v_447) {
    sub_497 = sub_490;
  } else {
    sub_497 = sub_498;
  };
  if (controller_air_failed_recovered) {
    v_26 = sub_485;
  } else {
    v_26 = sub_502;
  };
  if (controller_c_air_2) {
    v_27 = v_26;
  } else {
    v_27 = sub_501;
  };
  if (controller_c_air_1) {
    v_28 = v_27;
  } else {
    v_28 = sub_500;
  };
  if (controller_air_failed_recovered) {
    v_24 = sub_502;
  } else {
    v_24 = sub_479;
  };
  if (controller_c_air_2) {
    v_25 = v_24;
  } else {
    v_25 = sub_484;
  };
  if (controller_c_air_1) {
    sub_507 = sub_494;
  } else {
    sub_507 = v_25;
  };
  if (controller_v_445) {
    sub_506 = v_28;
  } else {
    sub_506 = sub_507;
  };
  if (controller_air_failed_recovered) {
    v_22 = sub_481;
  } else {
    v_22 = sub_502;
  };
  if (controller_c_air_2) {
    v_23 = v_22;
  } else {
    v_23 = sub_501;
  };
  if (controller_c_air_1) {
    sub_508 = v_23;
  } else {
    sub_508 = sub_500;
  };
  if (controller_v_445) {
    v_64 = v_63;
  } else {
    v_64 = sub_508;
  };
  if (controller_v_447) {
    v_65 = v_64;
  } else {
    v_65 = sub_506;
  };
  if (controller_v_446) {
    v_66 = v_65;
  } else {
    v_66 = sub_497;
  };
  if (controller_blind_switch) {
    v_67 = v_60;
  } else {
    v_67 = v_66;
  };
  if (controller_v_391) {
    v_10 = sub_273;
  } else {
    v_10 = false;
  };
  if (controller_v_392) {
    sub_518 = v_10;
  } else {
    sub_518 = sub_269;
  };
  sub_517 = sub_518;
  if (controller_c_door) {
    v_11 = false;
    sub_516 = sub_517;
  } else {
    v_11 = sub_517;
    sub_516 = false;
  };
  if (controller_ck_11_1) {
    sub_515 = v_11;
  } else {
    sub_515 = sub_516;
  };
  if (controller_air_failed_recovered) {
    v_17 = sub_515;
  } else {
    v_17 = sub_485;
  };
  if (controller_c_air_2) {
    v_18 = v_17;
  } else {
    v_18 = sub_489;
  };
  if (controller_c_air_1) {
    v_19 = v_18;
  } else {
    v_19 = sub_494;
  };
  if (controller_air_failed_recovered) {
    v_14 = sub_515;
  } else {
    v_14 = sub_481;
  };
  if (controller_c_air_2) {
    v_15 = v_14;
  } else {
    v_15 = sub_484;
  };
  if (controller_c_air_1) {
    v_16 = v_15;
  } else {
    v_16 = sub_488;
  };
  if (controller_air_failed_recovered) {
    v_12 = sub_479;
  } else {
    v_12 = sub_515;
  };
  sub_514 = sub_515;
  if (controller_c_air_2) {
    v_13 = v_12;
  } else {
    v_13 = sub_514;
  };
  sub_513 = sub_514;
  if (controller_c_air_1) {
    sub_512 = sub_513;
  } else {
    sub_512 = v_13;
  };
  if (controller_v_445) {
    sub_511 = v_16;
  } else {
    sub_511 = sub_512;
  };
  if (controller_v_447) {
    sub_510 = sub_490;
  } else {
    sub_510 = sub_511;
  };
  if (controller_air_failed_recovered) {
    v_7 = sub_485;
  } else {
    v_7 = sub_515;
  };
  if (controller_c_air_2) {
    v_8 = v_7;
  } else {
    v_8 = sub_514;
  };
  if (controller_c_air_1) {
    v_9 = v_8;
  } else {
    v_9 = sub_513;
  };
  if (controller_air_failed_recovered) {
    v_5 = sub_515;
  } else {
    v_5 = sub_479;
  };
  if (controller_c_air_2) {
    v_6 = v_5;
  } else {
    v_6 = sub_484;
  };
  if (controller_c_air_1) {
    sub_520 = sub_494;
  } else {
    sub_520 = v_6;
  };
  if (controller_v_445) {
    sub_519 = v_9;
  } else {
    sub_519 = sub_520;
  };
  if (controller_air_failed_recovered) {
    v_3 = sub_481;
  } else {
    v_3 = sub_515;
  };
  if (controller_c_air_2) {
    v_4 = v_3;
  } else {
    v_4 = sub_514;
  };
  if (controller_c_air_1) {
    sub_521 = v_4;
  } else {
    sub_521 = sub_513;
  };
  if (controller_v_445) {
    v_20 = v_19;
  } else {
    v_20 = sub_521;
  };
  if (controller_v_447) {
    v_21 = v_20;
  } else {
    v_21 = sub_519;
  };
  if (controller_v_446) {
    sub_509 = v_21;
  } else {
    sub_509 = sub_510;
  };
  if (controller_c_blind_1) {
    sub_470 = v_67;
  } else {
    sub_470 = sub_509;
  };
  if (controller_v_407) {
    v_177 = sub_470;
  } else {
    v_177 = sub_415;
  };
  if (controller_v_408) {
    sub_320 = v_177;
  } else {
    sub_320 = sub_321;
  };
  sub_319 = sub_320;
  if (controller_v_407) {
    sub_523 = sub_415;
  } else {
    sub_523 = sub_470;
  };
  if (controller_v_408) {
    v_1 = sub_523;
    v = sub_321;
  } else {
    v_1 = sub_321;
    v = sub_523;
  };
  if (controller_light_failed_recovered) {
    v_2 = v;
  } else {
    v_2 = v_1;
  };
  if (controller_c_light_1) {
    sub_522 = v_2;
  } else {
    sub_522 = sub_319;
  };
  if (controller_light_switch) {
    v_372 = sub_319;
  } else {
    v_372 = sub_522;
  };
  if (controller_c_light_2) {
    v_373 = v_372;
  } else {
    v_373 = sub_522;
  };
  if (p_controller_c_blind_2) {
    sub_0 = v_373;
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
  int controller_pnr_9, int controller_ck_11_1, int controller_pnr_8,
  int controller_ck_13_1, int controller_pnr_7, int controller_ck_15_1,
  int controller_pnr_6, int controller_ck_17_1, int controller_pnr_5,
  int controller_ck_19_1, int controller_pnr_4, int controller_ck_21_1,
  int controller_pnr_3, int controller_v_447, int controller_v_446,
  int controller_v_445, int controller_pnr_2, int controller_v_408,
  int controller_v_407, int controller_pnr_1, int controller_v_392,
  int controller_v_391, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_light_2, int controller_c_light_1,
  int controller_c_closet, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_blind_1_out* _out) {
  
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
  v_564 = !(controller_ck_17_1);
  sub_22 = (v_564&&false);
  sub_23 = (controller_ck_17_1&&false);
  if (controller_cleaner) {
    sub_21 = sub_22;
  } else {
    sub_21 = sub_23;
  };
  sub_24 = false;
  if (controller_worker) {
    v_565 = sub_24;
    sub_20 = sub_21;
  } else {
    v_565 = sub_21;
    sub_20 = sub_24;
  };
  if (controller_ck_15_1) {
    sub_19 = v_565;
  } else {
    sub_19 = sub_20;
  };
  if (controller_change_shift) {
    sub_18 = sub_19;
    sub_25 = false;
  } else {
    sub_18 = false;
    sub_25 = sub_19;
  };
  if (controller_ck_1) {
    sub_17 = sub_25;
  } else {
    sub_17 = sub_18;
  };
  sub_16 = sub_17;
  sub_28 = sub_24;
  if (controller_cleaner) {
    sub_31 = sub_23;
  } else {
    sub_31 = sub_22;
  };
  if (controller_worker) {
    sub_30 = sub_31;
    sub_32 = false;
  } else {
    sub_30 = false;
    sub_32 = sub_31;
  };
  if (controller_ck_15_1) {
    sub_29 = sub_32;
  } else {
    sub_29 = sub_30;
  };
  if (controller_change_shift) {
    v_563 = sub_29;
    sub_27 = sub_28;
  } else {
    v_563 = sub_28;
    sub_27 = sub_29;
  };
  if (controller_ck_1) {
    sub_26 = v_563;
  } else {
    sub_26 = sub_27;
  };
  if (controller_c_pc) {
    sub_15 = sub_16;
  } else {
    sub_15 = sub_26;
  };
  sub_35 = sub_19;
  sub_34 = sub_35;
  sub_33 = sub_34;
  if (controller_c_window) {
    sub_14 = sub_15;
  } else {
    sub_14 = sub_33;
  };
  sub_43 = (controller_ck_17_1||false);
  v_560 = !(controller_ck_17_1);
  sub_44 = (v_560||false);
  if (controller_cleaner) {
    sub_42 = sub_43;
  } else {
    sub_42 = sub_44;
  };
  sub_45 = true;
  if (controller_worker) {
    v_561 = sub_45;
    sub_41 = sub_42;
  } else {
    v_561 = sub_42;
    sub_41 = sub_45;
  };
  if (controller_ck_15_1) {
    sub_40 = v_561;
  } else {
    sub_40 = sub_41;
  };
  if (controller_change_shift) {
    sub_39 = sub_40;
    sub_46 = false;
  } else {
    sub_39 = false;
    sub_46 = sub_40;
  };
  if (controller_ck_1) {
    sub_38 = sub_46;
  } else {
    sub_38 = sub_39;
  };
  sub_37 = sub_38;
  sub_52 = controller_ck_17_1;
  sub_53 = !(controller_ck_17_1);
  if (controller_cleaner) {
    sub_51 = sub_52;
  } else {
    sub_51 = sub_53;
  };
  if (controller_worker) {
    v_558 = sub_45;
    sub_50 = sub_51;
  } else {
    v_558 = sub_51;
    sub_50 = sub_45;
  };
  if (controller_ck_15_1) {
    sub_49 = v_558;
  } else {
    sub_49 = sub_50;
  };
  if (controller_change_shift) {
    v_559 = sub_29;
    sub_48 = sub_49;
  } else {
    v_559 = sub_49;
    sub_48 = sub_29;
  };
  if (controller_ck_1) {
    sub_47 = v_559;
  } else {
    sub_47 = sub_48;
  };
  if (controller_c_pc) {
    v_562 = sub_37;
  } else {
    v_562 = sub_47;
  };
  sub_56 = sub_40;
  sub_55 = sub_56;
  sub_54 = sub_55;
  if (controller_c_window) {
    sub_36 = v_562;
  } else {
    sub_36 = sub_54;
  };
  sub_60 = sub_45;
  if (controller_cleaner) {
    sub_63 = sub_44;
  } else {
    sub_63 = sub_43;
  };
  if (controller_worker) {
    sub_62 = sub_63;
    sub_64 = false;
  } else {
    sub_62 = false;
    sub_64 = sub_63;
  };
  if (controller_ck_15_1) {
    sub_61 = sub_64;
  } else {
    sub_61 = sub_62;
  };
  if (controller_change_shift) {
    v_557 = sub_61;
    sub_59 = sub_60;
  } else {
    v_557 = sub_60;
    sub_59 = sub_61;
  };
  if (controller_ck_1) {
    sub_58 = v_557;
  } else {
    sub_58 = sub_59;
  };
  if (controller_c_pc) {
    sub_57 = sub_37;
  } else {
    sub_57 = sub_58;
  };
  if (controller_c_window) {
    v_566 = sub_57;
  } else {
    v_566 = sub_33;
  };
  if (controller_v_391) {
    v_567 = v_566;
  } else {
    v_567 = sub_36;
  };
  if (controller_v_392) {
    v_568 = v_567;
  } else {
    v_568 = sub_14;
  };
  sub_68 = sub_29;
  if (controller_c_pc) {
    sub_67 = false;
  } else {
    sub_67 = sub_68;
  };
  if (controller_c_window) {
    sub_66 = sub_67;
  } else {
    sub_66 = sub_54;
  };
  sub_70 = sub_61;
  if (controller_c_pc) {
    sub_69 = false;
  } else {
    sub_69 = sub_70;
  };
  if (controller_c_window) {
    v_556 = sub_69;
  } else {
    v_556 = sub_33;
  };
  if (controller_v_391) {
    sub_65 = v_556;
  } else {
    sub_65 = sub_66;
  };
  if (controller_v_392) {
    v_569 = sub_65;
  } else {
    v_569 = sub_14;
  };
  if (controller_blind_failed_recovered) {
    sub_13 = v_568;
  } else {
    sub_13 = v_569;
  };
  if (controller_c_window) {
    sub_73 = sub_67;
    sub_75 = sub_69;
  } else {
    sub_73 = false;
    sub_75 = false;
  };
  if (controller_v_391) {
    sub_74 = sub_75;
  } else {
    sub_74 = sub_73;
  };
  if (controller_v_392) {
    sub_72 = sub_74;
  } else {
    sub_72 = sub_73;
  };
  sub_71 = sub_72;
  if (controller_c_door) {
    v_570 = sub_71;
    sub_12 = sub_13;
  } else {
    v_570 = sub_13;
    sub_12 = sub_71;
  };
  if (controller_ck_11_1) {
    sub_11 = v_570;
  } else {
    sub_11 = sub_12;
  };
  sub_10 = sub_11;
  sub_9 = sub_10;
  if (controller_ck_15_1) {
    sub_83 = sub_30;
  } else {
    sub_83 = sub_32;
  };
  if (controller_change_shift) {
    sub_82 = false;
    sub_84 = sub_83;
  } else {
    sub_82 = sub_83;
    sub_84 = false;
  };
  if (controller_ck_1) {
    sub_81 = sub_84;
  } else {
    sub_81 = sub_82;
  };
  sub_80 = sub_81;
  sub_86 = sub_31;
  sub_85 = sub_86;
  if (controller_c_pc) {
    v_549 = sub_80;
  } else {
    v_549 = sub_85;
  };
  sub_89 = sub_83;
  sub_88 = sub_89;
  sub_87 = sub_88;
  if (controller_c_window) {
    sub_79 = v_549;
  } else {
    sub_79 = sub_87;
  };
  if (controller_ck_15_1) {
    sub_94 = sub_62;
  } else {
    sub_94 = sub_64;
  };
  if (controller_change_shift) {
    sub_93 = false;
    sub_95 = sub_94;
  } else {
    sub_93 = sub_94;
    sub_95 = false;
  };
  if (controller_ck_1) {
    sub_92 = sub_95;
  } else {
    sub_92 = sub_93;
  };
  sub_91 = sub_92;
  if (controller_worker) {
    sub_98 = sub_31;
    sub_99 = sub_63;
  } else {
    sub_98 = sub_63;
    sub_99 = sub_31;
  };
  if (controller_ck_15_1) {
    sub_97 = sub_99;
  } else {
    sub_97 = sub_98;
  };
  sub_96 = sub_97;
  if (controller_c_pc) {
    v_548 = sub_91;
  } else {
    v_548 = sub_96;
  };
  sub_102 = sub_94;
  sub_101 = sub_102;
  sub_100 = sub_101;
  if (controller_c_window) {
    sub_90 = v_548;
  } else {
    sub_90 = sub_100;
  };
  if (controller_ck_15_1) {
    sub_105 = sub_98;
  } else {
    sub_105 = sub_99;
  };
  sub_106 = sub_63;
  if (controller_change_shift) {
    v_547 = sub_106;
    sub_104 = sub_105;
  } else {
    v_547 = sub_105;
    sub_104 = sub_106;
  };
  if (controller_ck_1) {
    sub_103 = v_547;
  } else {
    sub_103 = sub_104;
  };
  if (controller_c_pc) {
    v_550 = sub_91;
  } else {
    v_550 = sub_103;
  };
  if (controller_change_shift) {
    sub_109 = sub_83;
    sub_110 = sub_94;
  } else {
    sub_109 = sub_94;
    sub_110 = sub_83;
  };
  if (controller_ck_1) {
    sub_108 = sub_110;
  } else {
    sub_108 = sub_109;
  };
  sub_107 = sub_108;
  if (controller_c_window) {
    v_551 = v_550;
  } else {
    v_551 = sub_107;
  };
  if (controller_v_391) {
    v_552 = v_551;
  } else {
    v_552 = sub_90;
  };
  if (controller_v_392) {
    v_553 = v_552;
  } else {
    v_553 = sub_79;
  };
  if (controller_change_shift) {
    v_543 = sub_29;
    sub_114 = sub_97;
  } else {
    v_543 = sub_97;
    sub_114 = sub_29;
  };
  if (controller_ck_1) {
    sub_113 = v_543;
  } else {
    sub_113 = sub_114;
  };
  if (controller_c_pc) {
    v_544 = false;
  } else {
    v_544 = sub_113;
  };
  if (controller_ck_1) {
    sub_117 = sub_93;
  } else {
    sub_117 = sub_95;
  };
  sub_116 = sub_117;
  sub_115 = sub_116;
  if (controller_c_window) {
    sub_112 = v_544;
  } else {
    sub_112 = sub_115;
  };
  if (controller_change_shift) {
    v_542 = sub_61;
    sub_119 = sub_105;
  } else {
    v_542 = sub_105;
    sub_119 = sub_61;
  };
  if (controller_ck_1) {
    sub_118 = v_542;
  } else {
    sub_118 = sub_119;
  };
  if (controller_c_pc) {
    v_545 = false;
  } else {
    v_545 = sub_118;
  };
  if (controller_ck_1) {
    sub_122 = sub_82;
  } else {
    sub_122 = sub_84;
  };
  sub_121 = sub_122;
  sub_120 = sub_121;
  if (controller_c_window) {
    v_546 = v_545;
  } else {
    v_546 = sub_120;
  };
  if (controller_v_391) {
    sub_111 = v_546;
  } else {
    sub_111 = sub_112;
  };
  if (controller_v_392) {
    v_554 = sub_111;
  } else {
    v_554 = sub_79;
  };
  if (controller_blind_failed_recovered) {
    sub_78 = v_553;
  } else {
    sub_78 = v_554;
  };
  sub_77 = sub_78;
  if (controller_air_failed_recovered) {
    v_555 = sub_77;
  } else {
    v_555 = sub_11;
  };
  if (controller_c_air_2) {
    sub_76 = v_555;
  } else {
    sub_76 = sub_10;
  };
  if (controller_c_air_1) {
    sub_8 = sub_9;
  } else {
    sub_8 = sub_76;
  };
  if (controller_c_closet) {
    sub_128 = sub_89;
  } else {
    sub_128 = sub_35;
  };
  if (controller_c_pc) {
    sub_127 = sub_88;
  } else {
    sub_127 = sub_128;
  };
  sub_126 = sub_127;
  if (controller_c_closet) {
    sub_132 = sub_102;
  } else {
    sub_132 = sub_56;
  };
  if (controller_c_pc) {
    sub_131 = sub_101;
  } else {
    sub_131 = sub_132;
  };
  sub_130 = sub_131;
  if (controller_v_391) {
    sub_129 = sub_126;
  } else {
    sub_129 = sub_130;
  };
  if (controller_v_392) {
    sub_125 = sub_129;
  } else {
    sub_125 = sub_126;
  };
  sub_124 = sub_125;
  sub_123 = sub_124;
  if (controller_air_failed_recovered) {
    v_571 = sub_11;
  } else {
    v_571 = sub_123;
  };
  sub_133 = sub_77;
  if (controller_c_air_2) {
    v_572 = v_571;
  } else {
    v_572 = sub_133;
  };
  sub_134 = sub_133;
  if (controller_c_air_1) {
    v_573 = v_572;
  } else {
    v_573 = sub_134;
  };
  if (controller_v_445) {
    sub_7 = v_573;
  } else {
    sub_7 = sub_8;
  };
  if (controller_v_447) {
    sub_6 = sub_134;
  } else {
    sub_6 = sub_7;
  };
  if (controller_c_air_1) {
    v_541 = sub_76;
  } else {
    v_541 = sub_9;
  };
  sub_138 = sub_123;
  sub_137 = sub_138;
  if (controller_air_failed_recovered) {
    v_540 = sub_11;
  } else {
    v_540 = sub_77;
  };
  if (controller_c_air_2) {
    sub_139 = v_540;
  } else {
    sub_139 = sub_133;
  };
  if (controller_c_air_1) {
    v_574 = sub_139;
    sub_136 = sub_137;
  } else {
    v_574 = sub_137;
    sub_136 = sub_139;
  };
  if (controller_v_445) {
    sub_135 = v_541;
  } else {
    sub_135 = sub_136;
  };
  if (controller_air_failed_recovered) {
    v_538 = sub_123;
  } else {
    v_538 = sub_11;
  };
  if (controller_c_air_2) {
    v_539 = v_538;
  } else {
    v_539 = sub_10;
  };
  if (controller_c_air_1) {
    sub_140 = v_539;
  } else {
    sub_140 = sub_9;
  };
  if (controller_v_445) {
    v_575 = v_574;
  } else {
    v_575 = sub_140;
  };
  if (controller_v_447) {
    v_576 = v_575;
  } else {
    v_576 = sub_135;
  };
  if (controller_v_446) {
    sub_5 = v_576;
  } else {
    sub_5 = sub_6;
  };
  sub_4 = sub_5;
  if (controller_ck_1) {
    sub_155 = sub_18;
  } else {
    sub_155 = sub_25;
  };
  sub_154 = sub_155;
  sub_153 = sub_154;
  if (controller_c_window) {
    sub_152 = sub_67;
    v_530 = sub_69;
  } else {
    sub_152 = sub_153;
    v_530 = sub_153;
  };
  if (controller_ck_1) {
    sub_160 = sub_39;
  } else {
    sub_160 = sub_46;
  };
  sub_159 = sub_160;
  sub_158 = sub_159;
  if (controller_c_window) {
    sub_157 = sub_67;
  } else {
    sub_157 = sub_158;
  };
  if (controller_v_391) {
    sub_156 = v_530;
  } else {
    sub_156 = sub_157;
  };
  if (controller_v_392) {
    sub_151 = sub_156;
  } else {
    sub_151 = sub_152;
  };
  sub_150 = sub_151;
  if (controller_c_door) {
    v_531 = sub_71;
    sub_149 = sub_150;
  } else {
    v_531 = sub_150;
    sub_149 = sub_71;
  };
  if (controller_ck_11_1) {
    sub_148 = v_531;
  } else {
    sub_148 = sub_149;
  };
  if (controller_air_failed_recovered) {
    v_532 = sub_148;
  } else {
    v_532 = false;
  };
  sub_147 = sub_148;
  sub_146 = sub_147;
  sub_162 = sub_71;
  if (controller_air_failed_recovered) {
    v_529 = sub_162;
  } else {
    v_529 = sub_148;
  };
  if (controller_c_air_2) {
    sub_161 = v_529;
  } else {
    sub_161 = sub_147;
  };
  if (controller_c_air_1) {
    sub_145 = sub_146;
  } else {
    sub_145 = sub_161;
  };
  sub_163 = sub_162;
  if (controller_c_air_2) {
    v_533 = v_532;
  } else {
    v_533 = sub_163;
  };
  sub_164 = sub_163;
  if (controller_c_air_1) {
    v_534 = v_533;
  } else {
    v_534 = sub_164;
  };
  if (controller_v_445) {
    sub_144 = v_534;
  } else {
    sub_144 = sub_145;
  };
  if (controller_v_447) {
    sub_143 = sub_164;
  } else {
    sub_143 = sub_144;
  };
  if (controller_c_air_1) {
    v_528 = sub_161;
  } else {
    v_528 = sub_146;
  };
  if (controller_air_failed_recovered) {
    v_527 = sub_148;
  } else {
    v_527 = sub_162;
  };
  if (controller_c_air_2) {
    sub_167 = v_527;
  } else {
    sub_167 = sub_163;
  };
  if (controller_c_air_1) {
    v_535 = sub_167;
    sub_166 = false;
  } else {
    v_535 = false;
    sub_166 = sub_167;
  };
  if (controller_v_445) {
    sub_165 = v_528;
  } else {
    sub_165 = sub_166;
  };
  if (controller_air_failed_recovered) {
    v_525 = false;
  } else {
    v_525 = sub_148;
  };
  if (controller_c_air_2) {
    v_526 = v_525;
  } else {
    v_526 = sub_147;
  };
  if (controller_c_air_1) {
    sub_168 = v_526;
  } else {
    sub_168 = sub_146;
  };
  if (controller_v_445) {
    v_536 = v_535;
  } else {
    v_536 = sub_168;
  };
  if (controller_v_447) {
    v_537 = v_536;
  } else {
    v_537 = sub_165;
  };
  if (controller_v_446) {
    sub_142 = v_537;
  } else {
    sub_142 = sub_143;
  };
  sub_141 = sub_142;
  sub_180 = sub_16;
  if (controller_c_window) {
    sub_179 = sub_180;
  } else {
    sub_179 = sub_33;
  };
  sub_182 = sub_37;
  if (controller_c_window) {
    v_510 = sub_182;
    sub_181 = sub_182;
  } else {
    v_510 = sub_33;
    sub_181 = sub_54;
  };
  if (controller_v_391) {
    v_511 = v_510;
  } else {
    v_511 = sub_181;
  };
  if (controller_v_392) {
    v_512 = v_511;
  } else {
    v_512 = sub_179;
  };
  if (controller_c_window) {
    v_509 = false;
    sub_184 = false;
  } else {
    v_509 = sub_33;
    sub_184 = sub_54;
  };
  if (controller_v_391) {
    sub_183 = v_509;
  } else {
    sub_183 = sub_184;
  };
  if (controller_v_392) {
    v_513 = sub_183;
  } else {
    v_513 = sub_179;
  };
  if (controller_blind_failed_recovered) {
    sub_178 = v_512;
  } else {
    sub_178 = v_513;
  };
  if (controller_c_door) {
    v_514 = false;
    sub_177 = sub_178;
  } else {
    v_514 = sub_178;
    sub_177 = false;
  };
  if (controller_ck_11_1) {
    sub_176 = v_514;
  } else {
    sub_176 = sub_177;
  };
  sub_175 = sub_176;
  sub_174 = sub_175;
  if (controller_c_pc) {
    v_508 = false;
  } else {
    v_508 = sub_121;
  };
  if (controller_c_window) {
    sub_187 = v_508;
  } else {
    sub_187 = sub_120;
  };
  sub_186 = sub_187;
  sub_185 = sub_186;
  if (controller_air_failed_recovered) {
    v_515 = sub_185;
  } else {
    v_515 = sub_176;
  };
  if (controller_c_air_2) {
    v_516 = v_515;
  } else {
    v_516 = sub_175;
  };
  if (controller_c_air_1) {
    sub_173 = sub_174;
  } else {
    sub_173 = v_516;
  };
  if (controller_c_pc) {
    v_507 = sub_80;
  } else {
    v_507 = sub_128;
  };
  if (controller_c_window) {
    sub_190 = v_507;
  } else {
    sub_190 = sub_127;
  };
  sub_189 = sub_190;
  sub_188 = sub_189;
  if (controller_air_failed_recovered) {
    v_517 = sub_176;
  } else {
    v_517 = sub_188;
  };
  sub_194 = sub_120;
  sub_193 = sub_194;
  sub_192 = sub_193;
  if (controller_air_failed_recovered) {
    v_520 = sub_176;
  } else {
    v_520 = sub_192;
  };
  sub_191 = sub_192;
  if (controller_c_air_2) {
    v_518 = v_517;
  } else {
    v_518 = sub_191;
  };
  sub_195 = sub_185;
  if (controller_c_air_2) {
    v_521 = v_520;
  } else {
    v_521 = sub_195;
  };
  if (controller_c_air_1) {
    v_519 = v_518;
  } else {
    v_519 = sub_195;
  };
  if (controller_v_445) {
    sub_172 = v_519;
  } else {
    sub_172 = sub_173;
  };
  sub_196 = sub_191;
  if (controller_v_447) {
    sub_171 = sub_196;
  } else {
    sub_171 = sub_172;
  };
  if (controller_air_failed_recovered) {
    v_504 = sub_192;
  } else {
    v_504 = sub_176;
  };
  if (controller_c_air_2) {
    v_505 = v_504;
  } else {
    v_505 = sub_175;
  };
  if (controller_c_air_1) {
    v_506 = v_505;
  } else {
    v_506 = sub_174;
  };
  if (controller_air_failed_recovered) {
    v_502 = sub_176;
  } else {
    v_502 = sub_185;
  };
  if (controller_c_air_2) {
    v_503 = v_502;
  } else {
    v_503 = sub_191;
  };
  sub_200 = sub_188;
  sub_199 = sub_200;
  if (controller_c_air_1) {
    v_522 = v_521;
    sub_198 = sub_199;
  } else {
    v_522 = sub_199;
    sub_198 = v_503;
  };
  if (controller_v_445) {
    sub_197 = v_506;
  } else {
    sub_197 = sub_198;
  };
  if (controller_air_failed_recovered) {
    v_500 = sub_188;
  } else {
    v_500 = sub_176;
  };
  if (controller_c_air_2) {
    v_501 = v_500;
  } else {
    v_501 = sub_175;
  };
  if (controller_c_air_1) {
    sub_201 = v_501;
  } else {
    sub_201 = sub_174;
  };
  if (controller_v_445) {
    v_523 = v_522;
  } else {
    v_523 = sub_201;
  };
  if (controller_v_447) {
    v_524 = v_523;
  } else {
    v_524 = sub_197;
  };
  if (controller_v_446) {
    sub_170 = v_524;
  } else {
    sub_170 = sub_171;
  };
  sub_169 = sub_170;
  if (controller_v_407) {
    v_577 = sub_169;
  } else {
    v_577 = sub_141;
  };
  if (controller_v_408) {
    sub_3 = v_577;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  if (controller_v_407) {
    sub_203 = sub_141;
  } else {
    sub_203 = sub_169;
  };
  if (controller_v_408) {
    v_498 = sub_203;
    v_497 = sub_4;
  } else {
    v_498 = sub_4;
    v_497 = sub_203;
  };
  if (controller_light_failed_recovered) {
    v_499 = v_497;
  } else {
    v_499 = v_498;
  };
  if (controller_c_light_1) {
    sub_202 = v_499;
  } else {
    sub_202 = sub_2;
  };
  if (controller_light_switch) {
    v_578 = sub_2;
  } else {
    v_578 = sub_202;
  };
  if (controller_c_light_2) {
    sub_1 = v_578;
  } else {
    sub_1 = sub_202;
  };
  if (controller_c_window) {
    v_482 = sub_69;
    sub_215 = sub_57;
  } else {
    v_482 = sub_54;
    sub_215 = sub_54;
  };
  if (controller_v_392) {
    v_483 = v_482;
  } else {
    v_483 = sub_215;
  };
  if (controller_blind_failed_recovered) {
    sub_214 = sub_215;
  } else {
    sub_214 = v_483;
  };
  sub_216 = sub_75;
  if (controller_c_door) {
    v_484 = sub_216;
    sub_213 = sub_214;
  } else {
    v_484 = sub_214;
    sub_213 = sub_216;
  };
  if (controller_ck_11_1) {
    sub_212 = v_484;
  } else {
    sub_212 = sub_213;
  };
  sub_211 = sub_212;
  sub_210 = sub_211;
  sub_221 = sub_106;
  if (controller_c_pc) {
    v_477 = sub_91;
  } else {
    v_477 = sub_221;
  };
  if (controller_c_window) {
    sub_220 = v_477;
  } else {
    sub_220 = sub_100;
  };
  if (controller_change_shift) {
    v_476 = sub_61;
    sub_223 = sub_106;
  } else {
    v_476 = sub_106;
    sub_223 = sub_61;
  };
  if (controller_ck_1) {
    sub_222 = v_476;
  } else {
    sub_222 = sub_223;
  };
  if (controller_c_pc) {
    v_478 = false;
  } else {
    v_478 = sub_222;
  };
  if (controller_c_window) {
    v_479 = v_478;
  } else {
    v_479 = sub_115;
  };
  if (controller_v_392) {
    v_480 = v_479;
  } else {
    v_480 = sub_220;
  };
  if (controller_blind_failed_recovered) {
    sub_219 = sub_220;
  } else {
    sub_219 = v_480;
  };
  sub_218 = sub_219;
  if (controller_air_failed_recovered) {
    v_481 = sub_218;
  } else {
    v_481 = sub_212;
  };
  if (controller_c_air_2) {
    sub_217 = v_481;
  } else {
    sub_217 = sub_211;
  };
  if (controller_c_air_1) {
    sub_209 = sub_210;
  } else {
    sub_209 = sub_217;
  };
  sub_225 = sub_130;
  sub_224 = sub_225;
  if (controller_air_failed_recovered) {
    v_485 = sub_212;
  } else {
    v_485 = sub_224;
  };
  sub_226 = sub_218;
  if (controller_c_air_2) {
    v_486 = v_485;
  } else {
    v_486 = sub_226;
  };
  sub_227 = sub_226;
  if (controller_c_air_1) {
    v_487 = v_486;
  } else {
    v_487 = sub_227;
  };
  if (controller_v_445) {
    sub_208 = v_487;
  } else {
    sub_208 = sub_209;
  };
  if (controller_v_447) {
    sub_207 = sub_227;
  } else {
    sub_207 = sub_208;
  };
  if (controller_c_air_1) {
    v_475 = sub_217;
  } else {
    v_475 = sub_210;
  };
  sub_231 = sub_224;
  sub_230 = sub_231;
  if (controller_air_failed_recovered) {
    v_474 = sub_212;
  } else {
    v_474 = sub_218;
  };
  if (controller_c_air_2) {
    sub_232 = v_474;
  } else {
    sub_232 = sub_226;
  };
  if (controller_c_air_1) {
    v_488 = sub_232;
    sub_229 = sub_230;
  } else {
    v_488 = sub_230;
    sub_229 = sub_232;
  };
  if (controller_v_445) {
    sub_228 = v_475;
  } else {
    sub_228 = sub_229;
  };
  if (controller_air_failed_recovered) {
    v_472 = sub_224;
  } else {
    v_472 = sub_212;
  };
  if (controller_c_air_2) {
    v_473 = v_472;
  } else {
    v_473 = sub_211;
  };
  if (controller_c_air_1) {
    sub_233 = v_473;
  } else {
    sub_233 = sub_210;
  };
  if (controller_v_445) {
    v_489 = v_488;
  } else {
    v_489 = sub_233;
  };
  if (controller_v_447) {
    v_490 = v_489;
  } else {
    v_490 = sub_228;
  };
  if (controller_v_446) {
    v_491 = v_490;
  } else {
    v_491 = sub_207;
  };
  if (controller_v_392) {
    v_467 = sub_65;
  } else {
    v_467 = sub_215;
  };
  if (controller_c_window) {
    sub_243 = sub_15;
  } else {
    sub_243 = sub_54;
  };
  if (controller_cleaner) {
    sub_248 = sub_53;
  } else {
    sub_248 = sub_52;
  };
  if (controller_worker) {
    v_462 = sub_24;
    sub_247 = sub_248;
  } else {
    v_462 = sub_248;
    sub_247 = sub_24;
  };
  if (controller_ck_15_1) {
    sub_246 = v_462;
  } else {
    sub_246 = sub_247;
  };
  if (controller_change_shift) {
    v_463 = sub_61;
    sub_245 = sub_246;
  } else {
    v_463 = sub_246;
    sub_245 = sub_61;
  };
  if (controller_ck_1) {
    sub_244 = v_463;
  } else {
    sub_244 = sub_245;
  };
  if (controller_c_pc) {
    v_464 = sub_16;
  } else {
    v_464 = sub_244;
  };
  if (controller_c_window) {
    v_465 = v_464;
  } else {
    v_465 = sub_33;
  };
  if (controller_v_391) {
    sub_242 = v_465;
  } else {
    sub_242 = sub_243;
  };
  if (controller_v_392) {
    v_466 = sub_215;
  } else {
    v_466 = sub_242;
  };
  if (controller_blind_failed_recovered) {
    sub_241 = v_466;
  } else {
    sub_241 = v_467;
  };
  if (controller_v_392) {
    v_461 = sub_74;
    v_460 = sub_75;
  } else {
    v_461 = sub_75;
    v_460 = sub_74;
  };
  if (controller_blind_failed_recovered) {
    sub_249 = v_460;
  } else {
    sub_249 = v_461;
  };
  if (controller_c_door) {
    v_468 = sub_249;
    sub_240 = sub_241;
  } else {
    v_468 = sub_241;
    sub_240 = sub_249;
  };
  if (controller_ck_11_1) {
    sub_239 = v_468;
  } else {
    sub_239 = sub_240;
  };
  sub_238 = sub_239;
  sub_237 = sub_238;
  if (controller_v_392) {
    v_458 = sub_111;
  } else {
    v_458 = sub_220;
  };
  if (controller_change_shift) {
    v_453 = sub_86;
    sub_256 = sub_97;
  } else {
    v_453 = sub_97;
    sub_256 = sub_86;
  };
  if (controller_ck_1) {
    sub_255 = v_453;
  } else {
    sub_255 = sub_256;
  };
  if (controller_c_pc) {
    v_454 = sub_80;
  } else {
    v_454 = sub_255;
  };
  if (controller_ck_1) {
    sub_258 = sub_109;
  } else {
    sub_258 = sub_110;
  };
  sub_257 = sub_258;
  if (controller_c_window) {
    sub_254 = v_454;
  } else {
    sub_254 = sub_257;
  };
  sub_259 = sub_105;
  if (controller_c_pc) {
    v_455 = sub_80;
  } else {
    v_455 = sub_259;
  };
  if (controller_c_window) {
    v_456 = v_455;
  } else {
    v_456 = sub_87;
  };
  if (controller_v_391) {
    sub_253 = v_456;
  } else {
    sub_253 = sub_254;
  };
  if (controller_v_392) {
    v_457 = sub_220;
  } else {
    v_457 = sub_253;
  };
  if (controller_blind_failed_recovered) {
    sub_252 = v_457;
  } else {
    sub_252 = v_458;
  };
  sub_251 = sub_252;
  if (controller_air_failed_recovered) {
    v_459 = sub_251;
  } else {
    v_459 = sub_239;
  };
  if (controller_c_air_2) {
    sub_250 = v_459;
  } else {
    sub_250 = sub_238;
  };
  if (controller_c_air_1) {
    sub_236 = sub_237;
  } else {
    sub_236 = sub_250;
  };
  if (controller_v_392) {
    v_452 = sub_129;
    v_451 = sub_130;
  } else {
    v_452 = sub_130;
    v_451 = sub_129;
  };
  if (controller_blind_failed_recovered) {
    sub_261 = v_451;
  } else {
    sub_261 = v_452;
  };
  sub_260 = sub_261;
  if (controller_air_failed_recovered) {
    v_469 = sub_239;
  } else {
    v_469 = sub_260;
  };
  sub_262 = sub_251;
  if (controller_c_air_2) {
    v_470 = v_469;
  } else {
    v_470 = sub_262;
  };
  sub_263 = sub_262;
  if (controller_c_air_1) {
    v_471 = v_470;
  } else {
    v_471 = sub_263;
  };
  if (controller_v_445) {
    sub_235 = v_471;
  } else {
    sub_235 = sub_236;
  };
  if (controller_v_447) {
    sub_234 = sub_263;
  } else {
    sub_234 = sub_235;
  };
  if (controller_c_air_1) {
    v_450 = sub_250;
  } else {
    v_450 = sub_237;
  };
  sub_267 = sub_260;
  sub_266 = sub_267;
  if (controller_air_failed_recovered) {
    v_449 = sub_239;
  } else {
    v_449 = sub_251;
  };
  if (controller_c_air_2) {
    sub_268 = v_449;
  } else {
    sub_268 = sub_262;
  };
  if (controller_c_air_1) {
    v_492 = sub_268;
    sub_265 = sub_266;
  } else {
    v_492 = sub_266;
    sub_265 = sub_268;
  };
  if (controller_v_445) {
    sub_264 = v_450;
  } else {
    sub_264 = sub_265;
  };
  if (controller_air_failed_recovered) {
    v_447 = sub_260;
  } else {
    v_447 = sub_239;
  };
  if (controller_c_air_2) {
    v_448 = v_447;
  } else {
    v_448 = sub_238;
  };
  if (controller_c_air_1) {
    sub_269 = v_448;
  } else {
    sub_269 = sub_237;
  };
  if (controller_v_445) {
    v_493 = v_492;
  } else {
    v_493 = sub_269;
  };
  if (controller_v_447) {
    v_494 = v_493;
  } else {
    v_494 = sub_264;
  };
  if (controller_v_446) {
    v_495 = v_494;
  } else {
    v_495 = sub_234;
  };
  if (controller_blind_switch) {
    sub_206 = v_491;
  } else {
    sub_206 = v_495;
  };
  if (controller_c_window) {
    sub_279 = sub_69;
  } else {
    sub_279 = sub_158;
  };
  sub_278 = sub_279;
  if (controller_c_door) {
    v_435 = sub_216;
    sub_277 = sub_278;
  } else {
    v_435 = sub_278;
    sub_277 = sub_216;
  };
  if (controller_ck_11_1) {
    sub_276 = v_435;
  } else {
    sub_276 = sub_277;
  };
  if (controller_air_failed_recovered) {
    v_436 = sub_276;
  } else {
    v_436 = false;
  };
  sub_275 = sub_276;
  sub_274 = sub_275;
  sub_281 = sub_216;
  if (controller_air_failed_recovered) {
    v_434 = sub_281;
  } else {
    v_434 = sub_276;
  };
  if (controller_c_air_2) {
    sub_280 = v_434;
  } else {
    sub_280 = sub_275;
  };
  if (controller_c_air_1) {
    sub_273 = sub_274;
  } else {
    sub_273 = sub_280;
  };
  sub_282 = sub_281;
  if (controller_c_air_2) {
    v_437 = v_436;
  } else {
    v_437 = sub_282;
  };
  sub_283 = sub_282;
  if (controller_c_air_1) {
    v_438 = v_437;
  } else {
    v_438 = sub_283;
  };
  if (controller_v_445) {
    sub_272 = v_438;
  } else {
    sub_272 = sub_273;
  };
  if (controller_v_447) {
    sub_271 = sub_283;
  } else {
    sub_271 = sub_272;
  };
  if (controller_c_air_1) {
    v_433 = sub_280;
  } else {
    v_433 = sub_274;
  };
  if (controller_air_failed_recovered) {
    v_432 = sub_276;
  } else {
    v_432 = sub_281;
  };
  if (controller_c_air_2) {
    sub_286 = v_432;
  } else {
    sub_286 = sub_282;
  };
  if (controller_c_air_1) {
    v_439 = sub_286;
    sub_285 = false;
  } else {
    v_439 = false;
    sub_285 = sub_286;
  };
  if (controller_v_445) {
    sub_284 = v_433;
  } else {
    sub_284 = sub_285;
  };
  if (controller_air_failed_recovered) {
    v_430 = false;
  } else {
    v_430 = sub_276;
  };
  if (controller_c_air_2) {
    v_431 = v_430;
  } else {
    v_431 = sub_275;
  };
  if (controller_c_air_1) {
    sub_287 = v_431;
  } else {
    sub_287 = sub_274;
  };
  if (controller_v_445) {
    v_440 = v_439;
  } else {
    v_440 = sub_287;
  };
  if (controller_v_447) {
    v_441 = v_440;
  } else {
    v_441 = sub_284;
  };
  if (controller_v_446) {
    v_442 = v_441;
  } else {
    v_442 = sub_271;
  };
  if (controller_v_392) {
    v_425 = sub_156;
    v_424 = sub_279;
  } else {
    v_425 = sub_279;
    v_424 = sub_156;
  };
  if (controller_blind_failed_recovered) {
    sub_295 = v_424;
  } else {
    sub_295 = v_425;
  };
  if (controller_c_door) {
    v_426 = sub_249;
    sub_294 = sub_295;
  } else {
    v_426 = sub_295;
    sub_294 = sub_249;
  };
  if (controller_ck_11_1) {
    sub_293 = v_426;
  } else {
    sub_293 = sub_294;
  };
  if (controller_air_failed_recovered) {
    v_427 = sub_293;
  } else {
    v_427 = false;
  };
  sub_292 = sub_293;
  sub_291 = sub_292;
  sub_297 = sub_249;
  if (controller_air_failed_recovered) {
    v_423 = sub_297;
  } else {
    v_423 = sub_293;
  };
  if (controller_c_air_2) {
    sub_296 = v_423;
  } else {
    sub_296 = sub_292;
  };
  if (controller_c_air_1) {
    sub_290 = sub_291;
  } else {
    sub_290 = sub_296;
  };
  sub_298 = sub_297;
  if (controller_c_air_2) {
    v_428 = v_427;
  } else {
    v_428 = sub_298;
  };
  sub_299 = sub_298;
  if (controller_c_air_1) {
    v_429 = v_428;
  } else {
    v_429 = sub_299;
  };
  if (controller_v_445) {
    sub_289 = v_429;
  } else {
    sub_289 = sub_290;
  };
  if (controller_v_447) {
    sub_288 = sub_299;
  } else {
    sub_288 = sub_289;
  };
  if (controller_c_air_1) {
    v_422 = sub_296;
  } else {
    v_422 = sub_291;
  };
  if (controller_air_failed_recovered) {
    v_421 = sub_293;
  } else {
    v_421 = sub_297;
  };
  if (controller_c_air_2) {
    sub_302 = v_421;
  } else {
    sub_302 = sub_298;
  };
  if (controller_c_air_1) {
    v_443 = sub_302;
    sub_301 = false;
  } else {
    v_443 = false;
    sub_301 = sub_302;
  };
  if (controller_v_445) {
    sub_300 = v_422;
  } else {
    sub_300 = sub_301;
  };
  if (controller_air_failed_recovered) {
    v_419 = false;
  } else {
    v_419 = sub_293;
  };
  if (controller_c_air_2) {
    v_420 = v_419;
  } else {
    v_420 = sub_292;
  };
  if (controller_c_air_1) {
    sub_303 = v_420;
  } else {
    sub_303 = sub_291;
  };
  if (controller_v_445) {
    v_444 = v_443;
  } else {
    v_444 = sub_303;
  };
  if (controller_v_447) {
    v_445 = v_444;
  } else {
    v_445 = sub_300;
  };
  if (controller_v_446) {
    v_446 = v_445;
  } else {
    v_446 = sub_288;
  };
  if (controller_blind_switch) {
    sub_270 = v_442;
  } else {
    sub_270 = v_446;
  };
  if (controller_v_392) {
    v_400 = sub_184;
  } else {
    v_400 = sub_181;
  };
  if (controller_blind_failed_recovered) {
    sub_312 = sub_181;
  } else {
    sub_312 = v_400;
  };
  if (controller_c_door) {
    v_401 = false;
    sub_311 = sub_312;
  } else {
    v_401 = sub_312;
    sub_311 = false;
  };
  if (controller_ck_11_1) {
    sub_310 = v_401;
  } else {
    sub_310 = sub_311;
  };
  sub_309 = sub_310;
  sub_308 = sub_309;
  if (controller_c_pc) {
    v_399 = false;
  } else {
    v_399 = sub_116;
  };
  if (controller_c_window) {
    sub_315 = v_399;
  } else {
    sub_315 = sub_115;
  };
  sub_314 = sub_315;
  sub_313 = sub_314;
  if (controller_air_failed_recovered) {
    v_402 = sub_313;
  } else {
    v_402 = sub_310;
  };
  if (controller_c_air_2) {
    v_403 = v_402;
  } else {
    v_403 = sub_309;
  };
  if (controller_c_air_1) {
    sub_307 = sub_308;
  } else {
    sub_307 = v_403;
  };
  if (controller_c_pc) {
    v_398 = sub_91;
  } else {
    v_398 = sub_132;
  };
  if (controller_c_window) {
    sub_318 = v_398;
  } else {
    sub_318 = sub_131;
  };
  sub_317 = sub_318;
  sub_316 = sub_317;
  if (controller_air_failed_recovered) {
    v_404 = sub_310;
  } else {
    v_404 = sub_316;
  };
  sub_322 = sub_115;
  sub_321 = sub_322;
  sub_320 = sub_321;
  if (controller_air_failed_recovered) {
    v_407 = sub_310;
  } else {
    v_407 = sub_320;
  };
  sub_319 = sub_320;
  if (controller_c_air_2) {
    v_405 = v_404;
  } else {
    v_405 = sub_319;
  };
  sub_324 = sub_313;
  if (controller_c_air_2) {
    v_408 = v_407;
  } else {
    v_408 = sub_324;
  };
  sub_323 = sub_324;
  if (controller_c_air_1) {
    v_406 = v_405;
  } else {
    v_406 = sub_323;
  };
  if (controller_v_445) {
    sub_306 = v_406;
  } else {
    sub_306 = sub_307;
  };
  sub_326 = sub_319;
  sub_325 = sub_326;
  if (controller_v_447) {
    sub_305 = sub_325;
  } else {
    sub_305 = sub_306;
  };
  if (controller_air_failed_recovered) {
    v_395 = sub_320;
  } else {
    v_395 = sub_310;
  };
  if (controller_c_air_2) {
    v_396 = v_395;
  } else {
    v_396 = sub_309;
  };
  if (controller_c_air_1) {
    v_397 = v_396;
  } else {
    v_397 = sub_308;
  };
  if (controller_air_failed_recovered) {
    v_393 = sub_310;
  } else {
    v_393 = sub_313;
  };
  if (controller_c_air_2) {
    v_394 = v_393;
  } else {
    v_394 = sub_319;
  };
  sub_330 = sub_316;
  sub_329 = sub_330;
  if (controller_c_air_1) {
    v_409 = v_408;
    sub_328 = sub_329;
  } else {
    v_409 = sub_329;
    sub_328 = v_394;
  };
  if (controller_v_445) {
    sub_327 = v_397;
  } else {
    sub_327 = sub_328;
  };
  if (controller_air_failed_recovered) {
    v_391 = sub_316;
  } else {
    v_391 = sub_310;
  };
  if (controller_c_air_2) {
    v_392 = v_391;
  } else {
    v_392 = sub_309;
  };
  if (controller_c_air_1) {
    sub_331 = v_392;
  } else {
    sub_331 = sub_308;
  };
  if (controller_v_445) {
    v_410 = v_409;
  } else {
    v_410 = sub_331;
  };
  if (controller_v_447) {
    v_411 = v_410;
  } else {
    v_411 = sub_327;
  };
  if (controller_v_446) {
    v_412 = v_411;
  } else {
    v_412 = sub_305;
  };
  if (controller_v_392) {
    v_384 = sub_183;
  } else {
    v_384 = sub_181;
  };
  if (controller_c_window) {
    sub_341 = sub_180;
  } else {
    sub_341 = sub_54;
  };
  if (controller_v_391) {
    sub_340 = sub_179;
  } else {
    sub_340 = sub_341;
  };
  if (controller_v_392) {
    v_383 = sub_181;
  } else {
    v_383 = sub_340;
  };
  if (controller_blind_failed_recovered) {
    sub_339 = v_383;
  } else {
    sub_339 = v_384;
  };
  if (controller_c_door) {
    v_385 = false;
    sub_338 = sub_339;
  } else {
    v_385 = sub_339;
    sub_338 = false;
  };
  if (controller_ck_11_1) {
    sub_337 = v_385;
  } else {
    sub_337 = sub_338;
  };
  if (controller_air_failed_recovered) {
    v_413 = sub_337;
  } else {
    v_413 = sub_320;
  };
  if (controller_c_air_2) {
    v_414 = v_413;
  } else {
    v_414 = sub_324;
  };
  if (controller_c_air_1) {
    v_415 = v_414;
  } else {
    v_415 = sub_329;
  };
  if (controller_air_failed_recovered) {
    v_388 = sub_337;
  } else {
    v_388 = sub_316;
  };
  if (controller_c_air_2) {
    v_389 = v_388;
  } else {
    v_389 = sub_319;
  };
  if (controller_c_air_1) {
    v_390 = v_389;
  } else {
    v_390 = sub_323;
  };
  if (controller_air_failed_recovered) {
    v_386 = sub_313;
  } else {
    v_386 = sub_337;
  };
  sub_336 = sub_337;
  if (controller_c_air_2) {
    v_387 = v_386;
  } else {
    v_387 = sub_336;
  };
  sub_335 = sub_336;
  if (controller_c_air_1) {
    sub_334 = sub_335;
  } else {
    sub_334 = v_387;
  };
  if (controller_v_445) {
    sub_333 = v_390;
  } else {
    sub_333 = sub_334;
  };
  if (controller_v_447) {
    sub_332 = sub_325;
  } else {
    sub_332 = sub_333;
  };
  if (controller_air_failed_recovered) {
    v_380 = sub_320;
  } else {
    v_380 = sub_337;
  };
  if (controller_c_air_2) {
    v_381 = v_380;
  } else {
    v_381 = sub_336;
  };
  if (controller_c_air_1) {
    v_382 = v_381;
  } else {
    v_382 = sub_335;
  };
  if (controller_air_failed_recovered) {
    v_378 = sub_337;
  } else {
    v_378 = sub_313;
  };
  if (controller_c_air_2) {
    v_379 = v_378;
  } else {
    v_379 = sub_319;
  };
  if (controller_c_air_1) {
    sub_343 = sub_329;
  } else {
    sub_343 = v_379;
  };
  if (controller_v_445) {
    sub_342 = v_382;
  } else {
    sub_342 = sub_343;
  };
  if (controller_air_failed_recovered) {
    v_376 = sub_316;
  } else {
    v_376 = sub_337;
  };
  if (controller_c_air_2) {
    v_377 = v_376;
  } else {
    v_377 = sub_336;
  };
  if (controller_c_air_1) {
    sub_344 = v_377;
  } else {
    sub_344 = sub_335;
  };
  if (controller_v_445) {
    v_416 = v_415;
  } else {
    v_416 = sub_344;
  };
  if (controller_v_447) {
    v_417 = v_416;
  } else {
    v_417 = sub_342;
  };
  if (controller_v_446) {
    v_418 = v_417;
  } else {
    v_418 = sub_332;
  };
  if (controller_blind_switch) {
    sub_304 = v_412;
  } else {
    sub_304 = v_418;
  };
  if (controller_v_407) {
    v_496 = sub_304;
  } else {
    v_496 = sub_270;
  };
  if (controller_v_408) {
    sub_205 = v_496;
  } else {
    sub_205 = sub_206;
  };
  sub_204 = sub_205;
  if (controller_v_407) {
    sub_346 = sub_270;
  } else {
    sub_346 = sub_304;
  };
  if (controller_v_408) {
    v_374 = sub_346;
    v = sub_206;
  } else {
    v_374 = sub_206;
    v = sub_346;
  };
  if (controller_light_failed_recovered) {
    v_375 = v;
  } else {
    v_375 = v_374;
  };
  if (controller_c_light_1) {
    sub_345 = v_375;
  } else {
    sub_345 = sub_204;
  };
  if (controller_light_switch) {
    v_579 = sub_204;
  } else {
    v_579 = sub_345;
  };
  if (controller_c_light_2) {
    v_580 = v_579;
  } else {
    v_580 = sub_345;
  };
  if (p_controller_c_blind_1) {
    sub_0 = v_580;
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
  int controller_pnr_9, int controller_ck_11_1, int controller_pnr_8,
  int controller_ck_13_1, int controller_pnr_7, int controller_ck_15_1,
  int controller_pnr_6, int controller_ck_17_1, int controller_pnr_5,
  int controller_ck_19_1, int controller_pnr_4, int controller_ck_21_1,
  int controller_pnr_3, int controller_v_447, int controller_v_446,
  int controller_v_445, int controller_pnr_2, int controller_v_408,
  int controller_v_407, int controller_pnr_1, int controller_v_392,
  int controller_v_391, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_light_1, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_2_out* _out) {
  
  int v_904;
  int v_903;
  int v_902;
  int v_901;
  int v_900;
  int v_899;
  int v_898;
  int v_897;
  int v_896;
  int v_895;
  int v_894;
  int v_893;
  int v_892;
  int v_891;
  int v_890;
  int v_889;
  int v_888;
  int v_887;
  int v_886;
  int v_885;
  int v_884;
  int v_883;
  int v_882;
  int v_881;
  int v_880;
  int v_879;
  int v_878;
  int v_877;
  int v_876;
  int v_875;
  int v_874;
  int v_873;
  int v_872;
  int v_871;
  int v_870;
  int v_869;
  int v_868;
  int v_867;
  int v_866;
  int v_865;
  int v_864;
  int v_863;
  int v_862;
  int v_861;
  int v_860;
  int v_859;
  int v_858;
  int v_857;
  int v_856;
  int v_855;
  int v_854;
  int v_853;
  int v_852;
  int v_851;
  int v_850;
  int v_849;
  int v_848;
  int v_847;
  int v_846;
  int v_845;
  int v_844;
  int v_843;
  int v_842;
  int v_841;
  int v_840;
  int v_839;
  int v_838;
  int v_837;
  int v_836;
  int v_835;
  int v_834;
  int v_833;
  int v_832;
  int v_831;
  int v_830;
  int v_829;
  int v_828;
  int v_827;
  int v_826;
  int v_825;
  int v_824;
  int v_823;
  int v_822;
  int v_821;
  int v_820;
  int v_819;
  int v_818;
  int v_817;
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
  v_869 = !(controller_ck_17_1);
  sub_21 = (v_869&&false);
  sub_22 = (controller_ck_17_1&&false);
  if (controller_cleaner) {
    sub_20 = sub_21;
  } else {
    sub_20 = sub_22;
  };
  sub_23 = false;
  if (controller_worker) {
    v_870 = sub_23;
    sub_19 = sub_20;
  } else {
    v_870 = sub_20;
    sub_19 = sub_23;
  };
  if (controller_ck_15_1) {
    sub_18 = v_870;
  } else {
    sub_18 = sub_19;
  };
  if (controller_change_shift) {
    sub_17 = sub_18;
    sub_24 = false;
  } else {
    sub_17 = false;
    sub_24 = sub_18;
  };
  if (controller_ck_1) {
    sub_16 = sub_24;
  } else {
    sub_16 = sub_17;
  };
  sub_15 = sub_16;
  sub_30 = !(controller_ck_17_1);
  sub_31 = controller_ck_17_1;
  if (controller_cleaner) {
    sub_29 = sub_30;
  } else {
    sub_29 = sub_31;
  };
  if (controller_worker) {
    v_867 = sub_23;
    sub_28 = sub_29;
  } else {
    v_867 = sub_29;
    sub_28 = sub_23;
  };
  if (controller_ck_15_1) {
    sub_27 = v_867;
  } else {
    sub_27 = sub_28;
  };
  v_866 = !(controller_ck_17_1);
  sub_35 = (v_866||false);
  sub_36 = (controller_ck_17_1||false);
  if (controller_cleaner) {
    sub_34 = sub_35;
  } else {
    sub_34 = sub_36;
  };
  if (controller_worker) {
    sub_33 = sub_34;
    sub_37 = false;
  } else {
    sub_33 = false;
    sub_37 = sub_34;
  };
  if (controller_ck_15_1) {
    sub_32 = sub_37;
  } else {
    sub_32 = sub_33;
  };
  if (controller_change_shift) {
    v_868 = sub_32;
    sub_26 = sub_27;
  } else {
    v_868 = sub_27;
    sub_26 = sub_32;
  };
  if (controller_ck_1) {
    sub_25 = v_868;
  } else {
    sub_25 = sub_26;
  };
  if (controller_c_pc) {
    sub_14 = sub_15;
  } else {
    sub_14 = sub_25;
  };
  sub_40 = sub_18;
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (controller_c_window) {
    sub_13 = sub_14;
  } else {
    sub_13 = sub_38;
  };
  sub_42 = sub_32;
  if (controller_c_pc) {
    sub_41 = false;
  } else {
    sub_41 = sub_42;
  };
  if (controller_c_window) {
    v_871 = sub_41;
  } else {
    v_871 = sub_38;
  };
  if (controller_v_392) {
    v_872 = v_871;
  } else {
    v_872 = sub_13;
  };
  if (controller_blind_failed_recovered) {
    sub_12 = sub_13;
  } else {
    sub_12 = v_872;
  };
  if (controller_c_window) {
    sub_44 = sub_41;
  } else {
    sub_44 = false;
  };
  sub_43 = sub_44;
  if (controller_c_door) {
    v_873 = sub_43;
    sub_11 = sub_12;
  } else {
    v_873 = sub_12;
    sub_11 = sub_43;
  };
  if (controller_ck_11_1) {
    sub_10 = v_873;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  if (controller_ck_15_1) {
    sub_51 = sub_33;
  } else {
    sub_51 = sub_37;
  };
  if (controller_change_shift) {
    sub_50 = false;
    sub_52 = sub_51;
  } else {
    sub_50 = sub_51;
    sub_52 = false;
  };
  if (controller_ck_1) {
    sub_49 = sub_52;
  } else {
    sub_49 = sub_50;
  };
  sub_48 = sub_49;
  if (controller_cleaner) {
    sub_58 = sub_22;
  } else {
    sub_58 = sub_21;
  };
  if (controller_worker) {
    sub_57 = sub_34;
    sub_59 = sub_58;
  } else {
    sub_57 = sub_58;
    sub_59 = sub_34;
  };
  if (controller_ck_15_1) {
    sub_56 = sub_59;
  } else {
    sub_56 = sub_57;
  };
  sub_60 = sub_34;
  if (controller_change_shift) {
    v_863 = sub_60;
    sub_55 = sub_56;
  } else {
    v_863 = sub_56;
    sub_55 = sub_60;
  };
  if (controller_ck_1) {
    sub_54 = v_863;
  } else {
    sub_54 = sub_55;
  };
  sub_53 = sub_54;
  if (controller_c_pc) {
    v_864 = sub_48;
  } else {
    v_864 = sub_53;
  };
  if (controller_worker) {
    sub_66 = false;
    sub_67 = sub_58;
  } else {
    sub_66 = sub_58;
    sub_67 = false;
  };
  if (controller_ck_15_1) {
    sub_65 = sub_67;
  } else {
    sub_65 = sub_66;
  };
  if (controller_change_shift) {
    sub_64 = sub_65;
    sub_68 = sub_51;
  } else {
    sub_64 = sub_51;
    sub_68 = sub_65;
  };
  if (controller_ck_1) {
    sub_63 = sub_68;
  } else {
    sub_63 = sub_64;
  };
  sub_62 = sub_63;
  sub_61 = sub_62;
  if (controller_c_window) {
    sub_47 = v_864;
  } else {
    sub_47 = sub_61;
  };
  if (controller_change_shift) {
    v_861 = sub_32;
    sub_72 = sub_56;
  } else {
    v_861 = sub_56;
    sub_72 = sub_32;
  };
  if (controller_ck_1) {
    sub_71 = v_861;
  } else {
    sub_71 = sub_72;
  };
  sub_70 = sub_71;
  if (controller_c_pc) {
    v_862 = false;
  } else {
    v_862 = sub_70;
  };
  if (controller_change_shift) {
    sub_76 = sub_65;
    sub_77 = false;
  } else {
    sub_76 = false;
    sub_77 = sub_65;
  };
  if (controller_ck_1) {
    sub_75 = sub_77;
  } else {
    sub_75 = sub_76;
  };
  sub_74 = sub_75;
  sub_73 = sub_74;
  if (controller_c_window) {
    sub_69 = v_862;
  } else {
    sub_69 = sub_73;
  };
  if (controller_v_392) {
    v_865 = sub_69;
  } else {
    v_865 = sub_47;
  };
  if (controller_blind_failed_recovered) {
    sub_46 = sub_47;
  } else {
    sub_46 = v_865;
  };
  sub_45 = sub_46;
  if (controller_air_failed_recovered) {
    v_874 = sub_45;
  } else {
    v_874 = sub_10;
  };
  if (controller_c_air_2) {
    v_875 = v_874;
  } else {
    v_875 = sub_9;
  };
  if (controller_c_air_1) {
    sub_7 = sub_8;
  } else {
    sub_7 = v_875;
  };
  if (controller_ck_1) {
    sub_82 = sub_64;
  } else {
    sub_82 = sub_68;
  };
  sub_81 = sub_82;
  sub_84 = sub_65;
  if (controller_c_closet) {
    sub_83 = sub_84;
  } else {
    sub_83 = sub_40;
  };
  if (controller_c_pc) {
    v_860 = sub_81;
  } else {
    v_860 = sub_83;
  };
  sub_86 = sub_84;
  if (controller_c_pc) {
    sub_85 = sub_86;
  } else {
    sub_85 = sub_83;
  };
  if (controller_c_window) {
    sub_80 = v_860;
  } else {
    sub_80 = sub_85;
  };
  sub_79 = sub_80;
  sub_78 = sub_79;
  if (controller_air_failed_recovered) {
    v_876 = sub_10;
  } else {
    v_876 = sub_78;
  };
  if (controller_c_pc) {
    v_858 = sub_62;
  } else {
    v_858 = sub_53;
  };
  if (controller_c_window) {
    sub_90 = v_858;
  } else {
    sub_90 = sub_61;
  };
  if (controller_c_pc) {
    v_857 = sub_74;
  } else {
    v_857 = sub_70;
  };
  if (controller_c_window) {
    sub_91 = v_857;
  } else {
    sub_91 = sub_73;
  };
  if (controller_v_392) {
    v_859 = sub_91;
  } else {
    v_859 = sub_90;
  };
  if (controller_blind_failed_recovered) {
    sub_89 = sub_90;
  } else {
    sub_89 = v_859;
  };
  sub_88 = sub_89;
  if (controller_air_failed_recovered) {
    v_879 = sub_10;
  } else {
    v_879 = sub_88;
  };
  sub_87 = sub_88;
  if (controller_c_air_2) {
    v_877 = v_876;
  } else {
    v_877 = sub_87;
  };
  sub_92 = sub_45;
  if (controller_c_air_2) {
    v_880 = v_879;
  } else {
    v_880 = sub_92;
  };
  if (controller_c_air_1) {
    v_878 = v_877;
  } else {
    v_878 = sub_92;
  };
  if (controller_v_445) {
    sub_6 = v_878;
  } else {
    sub_6 = sub_7;
  };
  sub_93 = sub_87;
  if (controller_v_447) {
    sub_5 = sub_93;
  } else {
    sub_5 = sub_6;
  };
  if (controller_air_failed_recovered) {
    v_854 = sub_88;
  } else {
    v_854 = sub_10;
  };
  if (controller_c_air_2) {
    v_855 = v_854;
  } else {
    v_855 = sub_9;
  };
  if (controller_c_air_1) {
    v_856 = v_855;
  } else {
    v_856 = sub_8;
  };
  if (controller_air_failed_recovered) {
    v_852 = sub_10;
  } else {
    v_852 = sub_45;
  };
  if (controller_c_air_2) {
    v_853 = v_852;
  } else {
    v_853 = sub_87;
  };
  sub_97 = sub_78;
  sub_96 = sub_97;
  if (controller_c_air_1) {
    v_881 = v_880;
    sub_95 = sub_96;
  } else {
    v_881 = sub_96;
    sub_95 = v_853;
  };
  if (controller_v_445) {
    sub_94 = v_856;
  } else {
    sub_94 = sub_95;
  };
  if (controller_air_failed_recovered) {
    v_850 = sub_78;
  } else {
    v_850 = sub_10;
  };
  if (controller_c_air_2) {
    v_851 = v_850;
  } else {
    v_851 = sub_9;
  };
  if (controller_c_air_1) {
    sub_98 = v_851;
  } else {
    sub_98 = sub_8;
  };
  if (controller_v_445) {
    v_882 = v_881;
  } else {
    v_882 = sub_98;
  };
  if (controller_v_447) {
    v_883 = v_882;
  } else {
    v_883 = sub_94;
  };
  if (controller_v_446) {
    sub_4 = v_883;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  if (controller_cleaner) {
    sub_115 = sub_36;
  } else {
    sub_115 = sub_35;
  };
  sub_116 = true;
  if (controller_worker) {
    v_840 = sub_116;
    sub_114 = sub_115;
  } else {
    v_840 = sub_115;
    sub_114 = sub_116;
  };
  if (controller_ck_15_1) {
    sub_113 = v_840;
  } else {
    sub_113 = sub_114;
  };
  if (controller_change_shift) {
    sub_112 = sub_113;
    sub_117 = false;
  } else {
    sub_112 = false;
    sub_117 = sub_113;
  };
  if (controller_ck_1) {
    sub_111 = sub_117;
  } else {
    sub_111 = sub_112;
  };
  sub_110 = sub_111;
  if (controller_cleaner) {
    sub_122 = sub_31;
  } else {
    sub_122 = sub_30;
  };
  if (controller_worker) {
    v_838 = sub_116;
    sub_121 = sub_122;
  } else {
    v_838 = sub_122;
    sub_121 = sub_116;
  };
  if (controller_ck_15_1) {
    sub_120 = v_838;
    sub_123 = sub_66;
  } else {
    sub_120 = sub_121;
    sub_123 = sub_67;
  };
  if (controller_change_shift) {
    v_839 = sub_123;
    sub_119 = sub_120;
  } else {
    v_839 = sub_120;
    sub_119 = sub_123;
  };
  if (controller_ck_1) {
    sub_118 = v_839;
  } else {
    sub_118 = sub_119;
  };
  if (controller_c_pc) {
    sub_109 = sub_110;
  } else {
    sub_109 = sub_118;
  };
  if (controller_change_shift) {
    sub_127 = sub_113;
    sub_128 = sub_18;
  } else {
    sub_127 = sub_18;
    sub_128 = sub_113;
  };
  if (controller_ck_1) {
    sub_126 = sub_128;
  } else {
    sub_126 = sub_127;
  };
  sub_125 = sub_126;
  sub_124 = sub_125;
  if (controller_c_window) {
    sub_108 = sub_109;
  } else {
    sub_108 = sub_124;
  };
  sub_130 = sub_123;
  if (controller_c_pc) {
    sub_129 = false;
  } else {
    sub_129 = sub_130;
  };
  if (controller_c_window) {
    v_841 = sub_129;
  } else {
    v_841 = sub_124;
  };
  if (controller_v_392) {
    v_842 = v_841;
  } else {
    v_842 = sub_108;
  };
  if (controller_blind_failed_recovered) {
    sub_107 = sub_108;
  } else {
    sub_107 = v_842;
  };
  if (controller_c_window) {
    sub_132 = sub_129;
  } else {
    sub_132 = false;
  };
  sub_131 = sub_132;
  if (controller_c_door) {
    v_843 = sub_131;
    sub_106 = sub_107;
  } else {
    v_843 = sub_107;
    sub_106 = sub_131;
  };
  if (controller_ck_11_1) {
    sub_105 = v_843;
  } else {
    sub_105 = sub_106;
  };
  sub_104 = sub_105;
  sub_103 = sub_104;
  if (controller_ck_15_1) {
    sub_138 = sub_57;
  } else {
    sub_138 = sub_59;
  };
  sub_137 = sub_138;
  if (controller_c_pc) {
    v_835 = sub_48;
  } else {
    v_835 = sub_137;
  };
  sub_141 = sub_51;
  sub_140 = sub_141;
  sub_139 = sub_140;
  if (controller_c_window) {
    sub_136 = v_835;
  } else {
    sub_136 = sub_139;
  };
  if (controller_change_shift) {
    v_833 = sub_123;
    sub_145 = sub_138;
  } else {
    v_833 = sub_138;
    sub_145 = sub_123;
  };
  if (controller_ck_1) {
    sub_144 = v_833;
  } else {
    sub_144 = sub_145;
  };
  sub_143 = sub_144;
  if (controller_c_pc) {
    v_834 = false;
  } else {
    v_834 = sub_143;
  };
  if (controller_ck_1) {
    sub_148 = sub_50;
  } else {
    sub_148 = sub_52;
  };
  sub_147 = sub_148;
  sub_146 = sub_147;
  if (controller_c_window) {
    sub_142 = v_834;
  } else {
    sub_142 = sub_146;
  };
  if (controller_v_392) {
    v_836 = sub_142;
  } else {
    v_836 = sub_136;
  };
  if (controller_blind_failed_recovered) {
    sub_135 = sub_136;
  } else {
    sub_135 = v_836;
  };
  sub_134 = sub_135;
  if (controller_air_failed_recovered) {
    v_837 = sub_134;
  } else {
    v_837 = sub_105;
  };
  if (controller_c_air_2) {
    sub_133 = v_837;
  } else {
    sub_133 = sub_104;
  };
  if (controller_c_air_1) {
    sub_102 = sub_103;
  } else {
    sub_102 = sub_133;
  };
  sub_154 = sub_113;
  if (controller_c_closet) {
    sub_153 = sub_141;
  } else {
    sub_153 = sub_154;
  };
  if (controller_c_pc) {
    sub_152 = sub_140;
  } else {
    sub_152 = sub_153;
  };
  sub_151 = sub_152;
  sub_150 = sub_151;
  sub_149 = sub_150;
  if (controller_air_failed_recovered) {
    v_844 = sub_105;
  } else {
    v_844 = sub_149;
  };
  sub_155 = sub_134;
  if (controller_c_air_2) {
    v_845 = v_844;
  } else {
    v_845 = sub_155;
  };
  sub_156 = sub_155;
  if (controller_c_air_1) {
    v_846 = v_845;
  } else {
    v_846 = sub_156;
  };
  if (controller_v_445) {
    sub_101 = v_846;
  } else {
    sub_101 = sub_102;
  };
  if (controller_v_447) {
    sub_100 = sub_156;
  } else {
    sub_100 = sub_101;
  };
  if (controller_c_air_1) {
    v_832 = sub_133;
  } else {
    v_832 = sub_103;
  };
  sub_160 = sub_149;
  sub_159 = sub_160;
  if (controller_air_failed_recovered) {
    v_831 = sub_105;
  } else {
    v_831 = sub_134;
  };
  if (controller_c_air_2) {
    sub_161 = v_831;
  } else {
    sub_161 = sub_155;
  };
  if (controller_c_air_1) {
    v_847 = sub_161;
    sub_158 = sub_159;
  } else {
    v_847 = sub_159;
    sub_158 = sub_161;
  };
  if (controller_v_445) {
    sub_157 = v_832;
  } else {
    sub_157 = sub_158;
  };
  if (controller_air_failed_recovered) {
    v_829 = sub_149;
  } else {
    v_829 = sub_105;
  };
  if (controller_c_air_2) {
    v_830 = v_829;
  } else {
    v_830 = sub_104;
  };
  if (controller_c_air_1) {
    sub_162 = v_830;
  } else {
    sub_162 = sub_103;
  };
  if (controller_v_445) {
    v_848 = v_847;
  } else {
    v_848 = sub_162;
  };
  if (controller_v_447) {
    v_849 = v_848;
  } else {
    v_849 = sub_157;
  };
  if (controller_v_446) {
    sub_99 = v_849;
  } else {
    sub_99 = sub_100;
  };
  if (controller_v_407) {
    sub_2 = sub_99;
  } else {
    sub_2 = sub_3;
  };
  if (controller_c_window) {
    v_821 = sub_129;
  } else {
    v_821 = sub_38;
  };
  sub_176 = sub_23;
  if (controller_change_shift) {
    v_819 = sub_123;
    sub_175 = sub_176;
  } else {
    v_819 = sub_176;
    sub_175 = sub_123;
  };
  if (controller_ck_1) {
    sub_174 = v_819;
  } else {
    sub_174 = sub_175;
  };
  if (controller_c_pc) {
    v_820 = sub_15;
  } else {
    v_820 = sub_174;
  };
  if (controller_c_window) {
    sub_173 = v_820;
  } else {
    sub_173 = sub_38;
  };
  if (controller_v_392) {
    v_822 = v_821;
  } else {
    v_822 = sub_173;
  };
  if (controller_blind_failed_recovered) {
    sub_172 = sub_173;
  } else {
    sub_172 = v_822;
  };
  if (controller_c_door) {
    v_823 = sub_131;
    sub_171 = sub_172;
  } else {
    v_823 = sub_172;
    sub_171 = sub_131;
  };
  if (controller_ck_11_1) {
    sub_170 = v_823;
  } else {
    sub_170 = sub_171;
  };
  sub_169 = sub_170;
  sub_168 = sub_169;
  if (controller_ck_1) {
    sub_182 = sub_76;
  } else {
    sub_182 = sub_77;
  };
  sub_181 = sub_182;
  sub_185 = sub_58;
  sub_184 = sub_185;
  sub_183 = sub_184;
  if (controller_c_pc) {
    v_814 = sub_181;
  } else {
    v_814 = sub_183;
  };
  sub_186 = sub_86;
  if (controller_c_window) {
    sub_180 = v_814;
  } else {
    sub_180 = sub_186;
  };
  if (controller_change_shift) {
    v_813 = sub_123;
    sub_189 = sub_185;
  } else {
    v_813 = sub_185;
    sub_189 = sub_123;
  };
  if (controller_ck_1) {
    sub_188 = v_813;
  } else {
    sub_188 = sub_189;
  };
  sub_187 = sub_188;
  if (controller_c_pc) {
    v_815 = false;
  } else {
    v_815 = sub_187;
  };
  if (controller_c_window) {
    v_816 = v_815;
  } else {
    v_816 = sub_73;
  };
  if (controller_v_392) {
    v_817 = v_816;
  } else {
    v_817 = sub_180;
  };
  if (controller_blind_failed_recovered) {
    sub_179 = sub_180;
  } else {
    sub_179 = v_817;
  };
  sub_178 = sub_179;
  if (controller_air_failed_recovered) {
    v_818 = sub_178;
  } else {
    v_818 = sub_170;
  };
  if (controller_c_air_2) {
    sub_177 = v_818;
  } else {
    sub_177 = sub_169;
  };
  if (controller_c_air_1) {
    sub_167 = sub_168;
  } else {
    sub_167 = sub_177;
  };
  sub_193 = sub_85;
  sub_192 = sub_193;
  sub_191 = sub_192;
  if (controller_air_failed_recovered) {
    sub_190 = sub_170;
  } else {
    sub_190 = sub_191;
  };
  sub_194 = sub_178;
  if (controller_c_air_2) {
    v_824 = sub_190;
  } else {
    v_824 = sub_194;
  };
  sub_195 = sub_194;
  if (controller_c_air_1) {
    v_825 = v_824;
  } else {
    v_825 = sub_195;
  };
  if (controller_v_445) {
    sub_166 = v_825;
  } else {
    sub_166 = sub_167;
  };
  if (controller_v_447) {
    sub_165 = sub_195;
  } else {
    sub_165 = sub_166;
  };
  if (controller_c_air_1) {
    v_812 = sub_177;
  } else {
    v_812 = sub_168;
  };
  sub_199 = sub_191;
  sub_198 = sub_199;
  if (controller_air_failed_recovered) {
    sub_201 = sub_170;
  } else {
    sub_201 = sub_178;
  };
  if (controller_c_air_2) {
    sub_200 = sub_201;
  } else {
    sub_200 = sub_194;
  };
  if (controller_c_air_1) {
    v_826 = sub_200;
    sub_197 = sub_198;
  } else {
    v_826 = sub_198;
    sub_197 = sub_200;
  };
  if (controller_v_445) {
    sub_196 = v_812;
  } else {
    sub_196 = sub_197;
  };
  if (controller_air_failed_recovered) {
    v_810 = sub_191;
  } else {
    v_810 = sub_170;
  };
  if (controller_c_air_2) {
    v_811 = v_810;
  } else {
    v_811 = sub_169;
  };
  if (controller_c_air_1) {
    sub_202 = v_811;
  } else {
    sub_202 = sub_168;
  };
  if (controller_v_445) {
    v_827 = v_826;
  } else {
    v_827 = sub_202;
  };
  if (controller_v_447) {
    v_828 = v_827;
  } else {
    v_828 = sub_196;
  };
  if (controller_v_446) {
    sub_164 = v_828;
  } else {
    sub_164 = sub_165;
  };
  sub_163 = sub_164;
  if (controller_c_pc) {
    v_800 = sub_147;
  } else {
    v_800 = sub_187;
  };
  if (controller_c_window) {
    v_801 = v_800;
  } else {
    v_801 = sub_73;
  };
  if (controller_c_pc) {
    v_799 = sub_81;
  } else {
    v_799 = sub_183;
  };
  if (controller_c_window) {
    sub_209 = v_799;
  } else {
    sub_209 = sub_186;
  };
  if (controller_v_392) {
    v_802 = v_801;
  } else {
    v_802 = sub_209;
  };
  if (controller_blind_failed_recovered) {
    sub_208 = sub_209;
  } else {
    sub_208 = v_802;
  };
  sub_207 = sub_208;
  if (controller_air_failed_recovered) {
    v_805 = sub_170;
  } else {
    v_805 = sub_207;
  };
  if (controller_c_air_2) {
    v_806 = v_805;
  } else {
    v_806 = sub_194;
  };
  if (controller_c_air_1) {
    v_807 = v_806;
  } else {
    v_807 = sub_198;
  };
  if (controller_v_445) {
    v_808 = v_807;
  } else {
    v_808 = sub_202;
  };
  sub_206 = sub_207;
  if (controller_c_air_2) {
    v_803 = sub_190;
  } else {
    v_803 = sub_206;
  };
  if (controller_c_air_1) {
    v_804 = v_803;
  } else {
    v_804 = sub_195;
  };
  if (controller_v_445) {
    sub_205 = v_804;
  } else {
    sub_205 = sub_167;
  };
  sub_210 = sub_206;
  if (controller_v_447) {
    sub_204 = sub_210;
  } else {
    sub_204 = sub_205;
  };
  if (controller_air_failed_recovered) {
    v_796 = sub_207;
  } else {
    v_796 = sub_170;
  };
  if (controller_c_air_2) {
    v_797 = v_796;
  } else {
    v_797 = sub_169;
  };
  if (controller_c_air_1) {
    v_798 = v_797;
  } else {
    v_798 = sub_168;
  };
  if (controller_c_air_2) {
    v_795 = sub_201;
  } else {
    v_795 = sub_206;
  };
  if (controller_c_air_1) {
    sub_212 = sub_198;
  } else {
    sub_212 = v_795;
  };
  if (controller_v_445) {
    sub_211 = v_798;
  } else {
    sub_211 = sub_212;
  };
  if (controller_v_447) {
    v_809 = v_808;
  } else {
    v_809 = sub_211;
  };
  if (controller_v_446) {
    sub_203 = v_809;
  } else {
    sub_203 = sub_204;
  };
  if (controller_v_407) {
    v_884 = sub_203;
  } else {
    v_884 = sub_163;
  };
  if (controller_v_408) {
    v_885 = v_884;
  } else {
    v_885 = sub_2;
  };
  sub_219 = sub_69;
  sub_218 = sub_219;
  if (controller_air_failed_recovered) {
    v_785 = sub_218;
  } else {
    v_785 = sub_10;
  };
  if (controller_c_air_2) {
    v_786 = v_785;
  } else {
    v_786 = sub_9;
  };
  if (controller_c_air_1) {
    sub_217 = sub_8;
  } else {
    sub_217 = v_786;
  };
  if (controller_c_pc) {
    v_784 = sub_181;
  } else {
    v_784 = sub_83;
  };
  if (controller_c_window) {
    sub_222 = v_784;
  } else {
    sub_222 = sub_85;
  };
  sub_221 = sub_222;
  sub_220 = sub_221;
  if (controller_air_failed_recovered) {
    v_787 = sub_10;
  } else {
    v_787 = sub_220;
  };
  sub_225 = sub_91;
  sub_224 = sub_225;
  if (controller_air_failed_recovered) {
    v_790 = sub_10;
  } else {
    v_790 = sub_224;
  };
  sub_223 = sub_224;
  if (controller_c_air_2) {
    v_788 = v_787;
  } else {
    v_788 = sub_223;
  };
  sub_227 = sub_218;
  if (controller_c_air_2) {
    v_791 = v_790;
  } else {
    v_791 = sub_227;
  };
  sub_226 = sub_227;
  if (controller_c_air_1) {
    v_789 = v_788;
  } else {
    v_789 = sub_226;
  };
  if (controller_v_445) {
    sub_216 = v_789;
  } else {
    sub_216 = sub_217;
  };
  sub_229 = sub_223;
  sub_228 = sub_229;
  if (controller_v_447) {
    sub_215 = sub_228;
  } else {
    sub_215 = sub_216;
  };
  if (controller_air_failed_recovered) {
    v_781 = sub_224;
  } else {
    v_781 = sub_10;
  };
  if (controller_c_air_2) {
    v_782 = v_781;
  } else {
    v_782 = sub_9;
  };
  if (controller_c_air_1) {
    v_783 = v_782;
  } else {
    v_783 = sub_8;
  };
  if (controller_air_failed_recovered) {
    v_779 = sub_10;
  } else {
    v_779 = sub_218;
  };
  if (controller_c_air_2) {
    v_780 = v_779;
  } else {
    v_780 = sub_223;
  };
  sub_233 = sub_220;
  sub_232 = sub_233;
  if (controller_c_air_1) {
    v_792 = v_791;
    sub_231 = sub_232;
  } else {
    v_792 = sub_232;
    sub_231 = v_780;
  };
  if (controller_v_445) {
    sub_230 = v_783;
  } else {
    sub_230 = sub_231;
  };
  if (controller_air_failed_recovered) {
    v_777 = sub_220;
  } else {
    v_777 = sub_10;
  };
  if (controller_c_air_2) {
    v_778 = v_777;
  } else {
    v_778 = sub_9;
  };
  if (controller_c_air_1) {
    sub_234 = v_778;
  } else {
    sub_234 = sub_8;
  };
  if (controller_v_445) {
    v_793 = v_792;
  } else {
    v_793 = sub_234;
  };
  if (controller_v_447) {
    v_794 = v_793;
  } else {
    v_794 = sub_230;
  };
  if (controller_v_446) {
    sub_214 = v_794;
  } else {
    sub_214 = sub_215;
  };
  sub_213 = sub_214;
  sub_240 = sub_142;
  sub_239 = sub_240;
  if (controller_air_failed_recovered) {
    v_767 = sub_239;
  } else {
    v_767 = sub_105;
  };
  if (controller_c_air_2) {
    v_768 = v_767;
  } else {
    v_768 = sub_104;
  };
  if (controller_c_air_1) {
    sub_238 = sub_103;
  } else {
    sub_238 = v_768;
  };
  if (controller_c_pc) {
    v_766 = sub_48;
  } else {
    v_766 = sub_153;
  };
  if (controller_c_window) {
    sub_243 = v_766;
  } else {
    sub_243 = sub_152;
  };
  sub_242 = sub_243;
  sub_241 = sub_242;
  if (controller_air_failed_recovered) {
    v_769 = sub_105;
  } else {
    v_769 = sub_241;
  };
  if (controller_c_pc) {
    v_765 = sub_147;
  } else {
    v_765 = sub_143;
  };
  if (controller_c_window) {
    sub_247 = v_765;
  } else {
    sub_247 = sub_146;
  };
  sub_246 = sub_247;
  sub_245 = sub_246;
  if (controller_air_failed_recovered) {
    v_772 = sub_105;
  } else {
    v_772 = sub_245;
  };
  sub_244 = sub_245;
  if (controller_c_air_2) {
    v_770 = v_769;
  } else {
    v_770 = sub_244;
  };
  sub_249 = sub_239;
  if (controller_c_air_2) {
    v_773 = v_772;
  } else {
    v_773 = sub_249;
  };
  sub_248 = sub_249;
  if (controller_c_air_1) {
    v_771 = v_770;
  } else {
    v_771 = sub_248;
  };
  if (controller_v_445) {
    sub_237 = v_771;
  } else {
    sub_237 = sub_238;
  };
  sub_251 = sub_244;
  sub_250 = sub_251;
  if (controller_v_447) {
    sub_236 = sub_250;
  } else {
    sub_236 = sub_237;
  };
  if (controller_air_failed_recovered) {
    v_762 = sub_245;
  } else {
    v_762 = sub_105;
  };
  if (controller_c_air_2) {
    v_763 = v_762;
  } else {
    v_763 = sub_104;
  };
  if (controller_c_air_1) {
    v_764 = v_763;
  } else {
    v_764 = sub_103;
  };
  if (controller_air_failed_recovered) {
    v_760 = sub_105;
  } else {
    v_760 = sub_239;
  };
  if (controller_c_air_2) {
    v_761 = v_760;
  } else {
    v_761 = sub_244;
  };
  sub_255 = sub_241;
  sub_254 = sub_255;
  if (controller_c_air_1) {
    v_774 = v_773;
    sub_253 = sub_254;
  } else {
    v_774 = sub_254;
    sub_253 = v_761;
  };
  if (controller_v_445) {
    sub_252 = v_764;
  } else {
    sub_252 = sub_253;
  };
  if (controller_air_failed_recovered) {
    v_758 = sub_241;
  } else {
    v_758 = sub_105;
  };
  if (controller_c_air_2) {
    v_759 = v_758;
  } else {
    v_759 = sub_104;
  };
  if (controller_c_air_1) {
    sub_256 = v_759;
  } else {
    sub_256 = sub_103;
  };
  if (controller_v_445) {
    v_775 = v_774;
  } else {
    v_775 = sub_256;
  };
  if (controller_v_447) {
    v_776 = v_775;
  } else {
    v_776 = sub_252;
  };
  if (controller_v_446) {
    sub_235 = v_776;
  } else {
    sub_235 = sub_236;
  };
  if (controller_v_407) {
    v_886 = sub_235;
  } else {
    v_886 = sub_213;
  };
  if (controller_v_408) {
    v_887 = v_886;
  } else {
    v_887 = sub_163;
  };
  if (controller_light_failed_recovered) {
    v_888 = v_885;
  } else {
    v_888 = v_887;
  };
  if (controller_ck_1) {
    sub_271 = sub_17;
  } else {
    sub_271 = sub_24;
  };
  sub_270 = sub_271;
  if (controller_c_window) {
    sub_269 = sub_129;
  } else {
    sub_269 = sub_270;
  };
  sub_268 = sub_269;
  if (controller_c_door) {
    v_750 = sub_131;
    sub_267 = sub_268;
  } else {
    v_750 = sub_268;
    sub_267 = sub_131;
  };
  if (controller_ck_11_1) {
    sub_266 = v_750;
  } else {
    sub_266 = sub_267;
  };
  if (controller_air_failed_recovered) {
    v_751 = sub_266;
  } else {
    v_751 = false;
  };
  sub_265 = sub_266;
  sub_264 = sub_265;
  sub_273 = sub_131;
  if (controller_air_failed_recovered) {
    v_749 = sub_273;
  } else {
    v_749 = sub_266;
  };
  if (controller_c_air_2) {
    sub_272 = v_749;
  } else {
    sub_272 = sub_265;
  };
  if (controller_c_air_1) {
    sub_263 = sub_264;
  } else {
    sub_263 = sub_272;
  };
  sub_274 = sub_273;
  if (controller_c_air_2) {
    v_752 = v_751;
  } else {
    v_752 = sub_274;
  };
  sub_275 = sub_274;
  if (controller_c_air_1) {
    v_753 = v_752;
  } else {
    v_753 = sub_275;
  };
  if (controller_v_445) {
    sub_262 = v_753;
  } else {
    sub_262 = sub_263;
  };
  if (controller_v_447) {
    sub_261 = sub_275;
  } else {
    sub_261 = sub_262;
  };
  if (controller_c_air_1) {
    v_748 = sub_272;
  } else {
    v_748 = sub_264;
  };
  if (controller_air_failed_recovered) {
    v_747 = sub_266;
  } else {
    v_747 = sub_273;
  };
  if (controller_c_air_2) {
    sub_278 = v_747;
  } else {
    sub_278 = sub_274;
  };
  if (controller_c_air_1) {
    v_754 = sub_278;
    sub_277 = false;
  } else {
    v_754 = false;
    sub_277 = sub_278;
  };
  if (controller_v_445) {
    sub_276 = v_748;
  } else {
    sub_276 = sub_277;
  };
  if (controller_air_failed_recovered) {
    v_745 = false;
  } else {
    v_745 = sub_266;
  };
  if (controller_c_air_2) {
    v_746 = v_745;
  } else {
    v_746 = sub_265;
  };
  if (controller_c_air_1) {
    sub_279 = v_746;
  } else {
    sub_279 = sub_264;
  };
  if (controller_v_445) {
    v_755 = v_754;
  } else {
    v_755 = sub_279;
  };
  if (controller_v_447) {
    v_756 = v_755;
  } else {
    v_756 = sub_276;
  };
  if (controller_v_446) {
    sub_260 = v_756;
  } else {
    sub_260 = sub_261;
  };
  sub_259 = sub_260;
  if (controller_c_window) {
    v_732 = false;
    sub_290 = sub_15;
  } else {
    v_732 = sub_38;
    sub_290 = sub_38;
  };
  if (controller_v_392) {
    v_733 = v_732;
  } else {
    v_733 = sub_290;
  };
  if (controller_blind_failed_recovered) {
    sub_289 = sub_290;
  } else {
    sub_289 = v_733;
  };
  if (controller_c_door) {
    v_734 = false;
    sub_288 = sub_289;
  } else {
    v_734 = sub_289;
    sub_288 = false;
  };
  if (controller_ck_11_1) {
    sub_287 = v_734;
  } else {
    sub_287 = sub_288;
  };
  if (controller_air_failed_recovered) {
    v_737 = sub_287;
  } else {
    v_737 = sub_220;
  };
  sub_286 = sub_287;
  sub_285 = sub_286;
  if (controller_c_pc) {
    v_731 = false;
  } else {
    v_731 = sub_74;
  };
  if (controller_c_window) {
    sub_293 = v_731;
  } else {
    sub_293 = sub_73;
  };
  sub_292 = sub_293;
  sub_291 = sub_292;
  if (controller_air_failed_recovered) {
    v_735 = sub_291;
  } else {
    v_735 = sub_287;
  };
  if (controller_c_air_2) {
    v_736 = v_735;
  } else {
    v_736 = sub_286;
  };
  if (controller_c_air_1) {
    sub_284 = sub_285;
  } else {
    sub_284 = v_736;
  };
  sub_297 = sub_73;
  sub_296 = sub_297;
  sub_295 = sub_296;
  if (controller_air_failed_recovered) {
    v_740 = sub_287;
  } else {
    v_740 = sub_295;
  };
  sub_294 = sub_295;
  if (controller_c_air_2) {
    v_738 = v_737;
  } else {
    v_738 = sub_294;
  };
  sub_298 = sub_291;
  if (controller_c_air_2) {
    v_741 = v_740;
  } else {
    v_741 = sub_298;
  };
  if (controller_c_air_1) {
    v_742 = v_741;
    v_739 = v_738;
  } else {
    v_742 = sub_232;
    v_739 = sub_298;
  };
  if (controller_v_445) {
    sub_283 = v_739;
  } else {
    sub_283 = sub_284;
  };
  sub_299 = sub_294;
  if (controller_v_447) {
    sub_282 = sub_299;
  } else {
    sub_282 = sub_283;
  };
  if (controller_air_failed_recovered) {
    v_728 = sub_295;
  } else {
    v_728 = sub_287;
  };
  if (controller_c_air_2) {
    v_729 = v_728;
  } else {
    v_729 = sub_286;
  };
  if (controller_c_air_1) {
    v_730 = v_729;
  } else {
    v_730 = sub_285;
  };
  if (controller_air_failed_recovered) {
    v_726 = sub_287;
  } else {
    v_726 = sub_291;
  };
  if (controller_c_air_2) {
    v_727 = v_726;
  } else {
    v_727 = sub_294;
  };
  if (controller_c_air_1) {
    sub_301 = sub_232;
  } else {
    sub_301 = v_727;
  };
  if (controller_v_445) {
    sub_300 = v_730;
  } else {
    sub_300 = sub_301;
  };
  if (controller_air_failed_recovered) {
    v_724 = sub_220;
  } else {
    v_724 = sub_287;
  };
  if (controller_c_air_2) {
    v_725 = v_724;
  } else {
    v_725 = sub_286;
  };
  if (controller_c_air_1) {
    sub_302 = v_725;
  } else {
    sub_302 = sub_285;
  };
  if (controller_v_445) {
    v_743 = v_742;
  } else {
    v_743 = sub_302;
  };
  if (controller_v_447) {
    v_744 = v_743;
  } else {
    v_744 = sub_300;
  };
  if (controller_v_446) {
    sub_281 = v_744;
  } else {
    sub_281 = sub_282;
  };
  sub_280 = sub_281;
  if (controller_v_407) {
    v_757 = sub_280;
  } else {
    v_757 = sub_259;
  };
  if (controller_v_408) {
    sub_258 = v_757;
  } else {
    sub_258 = sub_163;
  };
  sub_257 = sub_258;
  if (controller_c_light_1) {
    v_889 = v_888;
  } else {
    v_889 = sub_257;
  };
  if (controller_v_407) {
    sub_303 = sub_259;
  } else {
    sub_303 = sub_280;
  };
  if (controller_v_408) {
    v_891 = sub_303;
    v_890 = sub_163;
  } else {
    v_891 = sub_163;
    v_890 = sub_303;
  };
  if (controller_light_failed_recovered) {
    v_892 = v_890;
  } else {
    v_892 = v_891;
  };
  if (controller_c_light_1) {
    v_893 = v_892;
  } else {
    v_893 = sub_257;
  };
  if (controller_light_switch) {
    sub_1 = v_889;
  } else {
    sub_1 = v_893;
  };
  sub_318 = sub_116;
  if (controller_change_shift) {
    v_712 = sub_32;
    sub_317 = sub_318;
  } else {
    v_712 = sub_318;
    sub_317 = sub_32;
  };
  if (controller_ck_1) {
    sub_316 = v_712;
  } else {
    sub_316 = sub_317;
  };
  if (controller_c_pc) {
    v_713 = sub_110;
  } else {
    v_713 = sub_316;
  };
  sub_320 = sub_154;
  sub_319 = sub_320;
  if (controller_c_window) {
    v_714 = sub_41;
    sub_315 = v_713;
  } else {
    v_714 = sub_319;
    sub_315 = sub_319;
  };
  if (controller_v_392) {
    v_715 = v_714;
  } else {
    v_715 = sub_315;
  };
  if (controller_blind_failed_recovered) {
    sub_314 = sub_315;
  } else {
    sub_314 = v_715;
  };
  if (controller_c_door) {
    v_716 = sub_43;
    sub_313 = sub_314;
  } else {
    v_716 = sub_314;
    sub_313 = sub_43;
  };
  if (controller_ck_11_1) {
    sub_312 = v_716;
  } else {
    sub_312 = sub_313;
  };
  sub_311 = sub_312;
  sub_310 = sub_311;
  sub_326 = sub_60;
  sub_325 = sub_326;
  if (controller_c_pc) {
    v_707 = sub_48;
  } else {
    v_707 = sub_325;
  };
  if (controller_c_window) {
    sub_324 = v_707;
  } else {
    sub_324 = sub_139;
  };
  if (controller_change_shift) {
    v_706 = sub_32;
    sub_329 = sub_60;
  } else {
    v_706 = sub_60;
    sub_329 = sub_32;
  };
  if (controller_ck_1) {
    sub_328 = v_706;
  } else {
    sub_328 = sub_329;
  };
  sub_327 = sub_328;
  if (controller_c_pc) {
    v_708 = false;
  } else {
    v_708 = sub_327;
  };
  if (controller_c_window) {
    v_709 = v_708;
  } else {
    v_709 = sub_146;
  };
  if (controller_v_392) {
    v_710 = v_709;
  } else {
    v_710 = sub_324;
  };
  if (controller_blind_failed_recovered) {
    sub_323 = sub_324;
  } else {
    sub_323 = v_710;
  };
  sub_322 = sub_323;
  if (controller_air_failed_recovered) {
    v_711 = sub_322;
  } else {
    v_711 = sub_312;
  };
  if (controller_c_air_2) {
    sub_321 = v_711;
  } else {
    sub_321 = sub_311;
  };
  if (controller_c_air_1) {
    sub_309 = sub_310;
  } else {
    sub_309 = sub_321;
  };
  if (controller_air_failed_recovered) {
    sub_330 = sub_312;
  } else {
    sub_330 = sub_149;
  };
  if (controller_c_pc) {
    v_703 = sub_74;
  } else {
    v_703 = sub_327;
  };
  if (controller_c_window) {
    v_704 = v_703;
  } else {
    v_704 = sub_146;
  };
  if (controller_c_pc) {
    v_702 = sub_62;
  } else {
    v_702 = sub_325;
  };
  if (controller_c_window) {
    sub_334 = v_702;
  } else {
    sub_334 = sub_139;
  };
  if (controller_v_392) {
    v_705 = v_704;
  } else {
    v_705 = sub_334;
  };
  if (controller_blind_failed_recovered) {
    sub_333 = sub_334;
  } else {
    sub_333 = v_705;
  };
  sub_332 = sub_333;
  if (controller_air_failed_recovered) {
    v_719 = sub_312;
  } else {
    v_719 = sub_332;
  };
  sub_331 = sub_332;
  if (controller_c_air_2) {
    v_717 = sub_330;
  } else {
    v_717 = sub_331;
  };
  sub_336 = sub_322;
  if (controller_c_air_2) {
    v_720 = v_719;
  } else {
    v_720 = sub_336;
  };
  if (controller_c_air_1) {
    v_721 = v_720;
  } else {
    v_721 = sub_159;
  };
  sub_335 = sub_336;
  if (controller_c_air_1) {
    v_718 = v_717;
  } else {
    v_718 = sub_335;
  };
  if (controller_v_445) {
    sub_308 = v_718;
  } else {
    sub_308 = sub_309;
  };
  sub_337 = sub_331;
  if (controller_v_447) {
    sub_307 = sub_337;
  } else {
    sub_307 = sub_308;
  };
  if (controller_air_failed_recovered) {
    v_699 = sub_332;
  } else {
    v_699 = sub_312;
  };
  if (controller_c_air_2) {
    v_700 = v_699;
  } else {
    v_700 = sub_311;
  };
  if (controller_c_air_1) {
    v_701 = v_700;
  } else {
    v_701 = sub_310;
  };
  if (controller_air_failed_recovered) {
    sub_340 = sub_312;
  } else {
    sub_340 = sub_322;
  };
  if (controller_c_air_2) {
    v_698 = sub_340;
  } else {
    v_698 = sub_331;
  };
  if (controller_c_air_1) {
    sub_339 = sub_159;
  } else {
    sub_339 = v_698;
  };
  if (controller_v_445) {
    sub_338 = v_701;
  } else {
    sub_338 = sub_339;
  };
  if (controller_air_failed_recovered) {
    v_696 = sub_149;
  } else {
    v_696 = sub_312;
  };
  if (controller_c_air_2) {
    v_697 = v_696;
  } else {
    v_697 = sub_311;
  };
  if (controller_c_air_1) {
    sub_341 = v_697;
  } else {
    sub_341 = sub_310;
  };
  if (controller_v_445) {
    v_722 = v_721;
  } else {
    v_722 = sub_341;
  };
  if (controller_v_447) {
    v_723 = v_722;
  } else {
    v_723 = sub_338;
  };
  if (controller_v_446) {
    sub_306 = v_723;
  } else {
    sub_306 = sub_307;
  };
  sub_305 = sub_306;
  if (controller_c_air_2) {
    v_691 = sub_330;
  } else {
    v_691 = sub_336;
  };
  if (controller_c_air_1) {
    v_692 = v_691;
  } else {
    v_692 = sub_335;
  };
  if (controller_v_445) {
    sub_345 = v_692;
  } else {
    sub_345 = sub_309;
  };
  if (controller_v_447) {
    sub_344 = sub_335;
  } else {
    sub_344 = sub_345;
  };
  if (controller_c_air_1) {
    v_690 = sub_321;
  } else {
    v_690 = sub_310;
  };
  if (controller_c_air_2) {
    sub_348 = sub_340;
  } else {
    sub_348 = sub_336;
  };
  if (controller_c_air_1) {
    v_693 = sub_348;
  } else {
    v_693 = sub_159;
  };
  if (controller_v_445) {
    v_694 = v_693;
  } else {
    v_694 = sub_341;
  };
  if (controller_c_air_1) {
    sub_347 = sub_159;
  } else {
    sub_347 = sub_348;
  };
  if (controller_v_445) {
    sub_346 = v_690;
  } else {
    sub_346 = sub_347;
  };
  if (controller_v_447) {
    v_695 = v_694;
  } else {
    v_695 = sub_346;
  };
  if (controller_v_446) {
    sub_343 = v_695;
  } else {
    sub_343 = sub_344;
  };
  sub_342 = sub_343;
  if (controller_v_407) {
    sub_304 = sub_342;
  } else {
    sub_304 = sub_305;
  };
  if (controller_ck_1) {
    sub_362 = sub_127;
  } else {
    sub_362 = sub_128;
  };
  sub_361 = sub_362;
  sub_360 = sub_361;
  if (controller_c_window) {
    v_681 = sub_41;
    sub_359 = sub_14;
  } else {
    v_681 = sub_360;
    sub_359 = sub_360;
  };
  if (controller_v_392) {
    v_682 = v_681;
  } else {
    v_682 = sub_359;
  };
  if (controller_blind_failed_recovered) {
    sub_358 = sub_359;
  } else {
    sub_358 = v_682;
  };
  if (controller_c_door) {
    v_683 = sub_43;
    sub_357 = sub_358;
  } else {
    v_683 = sub_358;
    sub_357 = sub_43;
  };
  if (controller_ck_11_1) {
    sub_356 = v_683;
  } else {
    sub_356 = sub_357;
  };
  if (controller_air_failed_recovered) {
    v_684 = sub_356;
  } else {
    v_684 = sub_191;
  };
  sub_355 = sub_356;
  sub_354 = sub_355;
  sub_367 = sub_56;
  if (controller_c_pc) {
    v_678 = sub_181;
  } else {
    v_678 = sub_367;
  };
  if (controller_c_window) {
    sub_366 = v_678;
  } else {
    sub_366 = sub_186;
  };
  if (controller_v_392) {
    v_679 = sub_69;
  } else {
    v_679 = sub_366;
  };
  if (controller_blind_failed_recovered) {
    sub_365 = sub_366;
  } else {
    sub_365 = v_679;
  };
  sub_364 = sub_365;
  if (controller_air_failed_recovered) {
    v_680 = sub_364;
  } else {
    v_680 = sub_356;
  };
  if (controller_c_air_2) {
    sub_363 = v_680;
  } else {
    sub_363 = sub_355;
  };
  if (controller_c_air_1) {
    sub_353 = sub_354;
  } else {
    sub_353 = sub_363;
  };
  sub_368 = sub_364;
  if (controller_c_air_2) {
    v_685 = v_684;
  } else {
    v_685 = sub_368;
  };
  sub_369 = sub_368;
  if (controller_c_air_1) {
    v_686 = v_685;
  } else {
    v_686 = sub_369;
  };
  if (controller_v_445) {
    sub_352 = v_686;
  } else {
    sub_352 = sub_353;
  };
  if (controller_v_447) {
    sub_351 = sub_369;
  } else {
    sub_351 = sub_352;
  };
  if (controller_c_air_1) {
    v_677 = sub_363;
  } else {
    v_677 = sub_354;
  };
  if (controller_air_failed_recovered) {
    v_676 = sub_356;
  } else {
    v_676 = sub_364;
  };
  if (controller_c_air_2) {
    sub_372 = v_676;
  } else {
    sub_372 = sub_368;
  };
  if (controller_c_air_1) {
    v_687 = sub_372;
    sub_371 = sub_198;
  } else {
    v_687 = sub_198;
    sub_371 = sub_372;
  };
  if (controller_v_445) {
    sub_370 = v_677;
  } else {
    sub_370 = sub_371;
  };
  if (controller_air_failed_recovered) {
    v_674 = sub_191;
  } else {
    v_674 = sub_356;
  };
  if (controller_c_air_2) {
    v_675 = v_674;
  } else {
    v_675 = sub_355;
  };
  if (controller_c_air_1) {
    sub_373 = v_675;
  } else {
    sub_373 = sub_354;
  };
  if (controller_v_445) {
    v_688 = v_687;
  } else {
    v_688 = sub_373;
  };
  if (controller_v_447) {
    v_689 = v_688;
  } else {
    v_689 = sub_370;
  };
  if (controller_v_446) {
    sub_350 = v_689;
  } else {
    sub_350 = sub_351;
  };
  sub_349 = sub_350;
  if (controller_c_window) {
    v_661 = sub_129;
    sub_383 = sub_109;
  } else {
    v_661 = sub_319;
    sub_383 = sub_319;
  };
  if (controller_v_392) {
    v_662 = v_661;
  } else {
    v_662 = sub_383;
  };
  if (controller_blind_failed_recovered) {
    sub_382 = sub_383;
  } else {
    sub_382 = v_662;
  };
  if (controller_c_door) {
    v_663 = sub_131;
    sub_381 = sub_382;
  } else {
    v_663 = sub_382;
    sub_381 = sub_131;
  };
  if (controller_ck_11_1) {
    sub_380 = v_663;
  } else {
    sub_380 = sub_381;
  };
  sub_379 = sub_380;
  sub_378 = sub_379;
  if (controller_change_shift) {
    v_658 = sub_185;
    sub_389 = sub_138;
  } else {
    v_658 = sub_138;
    sub_389 = sub_185;
  };
  if (controller_ck_1) {
    sub_388 = v_658;
  } else {
    sub_388 = sub_389;
  };
  sub_387 = sub_388;
  if (controller_c_pc) {
    v_659 = sub_181;
  } else {
    v_659 = sub_387;
  };
  sub_390 = sub_81;
  if (controller_c_window) {
    sub_386 = v_659;
  } else {
    sub_386 = sub_390;
  };
  if (controller_v_392) {
    v_660 = sub_142;
  } else {
    v_660 = sub_386;
  };
  if (controller_blind_failed_recovered) {
    sub_385 = sub_386;
  } else {
    sub_385 = v_660;
  };
  sub_384 = sub_385;
  if (controller_air_failed_recovered) {
    v_664 = sub_384;
  } else {
    v_664 = sub_380;
  };
  if (controller_c_air_2) {
    v_665 = v_664;
  } else {
    v_665 = sub_379;
  };
  if (controller_c_air_1) {
    sub_377 = sub_378;
  } else {
    sub_377 = v_665;
  };
  if (controller_c_pc) {
    v_657 = sub_62;
  } else {
    v_657 = sub_153;
  };
  if (controller_c_window) {
    sub_393 = v_657;
  } else {
    sub_393 = sub_152;
  };
  sub_392 = sub_393;
  sub_391 = sub_392;
  if (controller_air_failed_recovered) {
    v_666 = sub_380;
  } else {
    v_666 = sub_391;
  };
  if (controller_c_pc) {
    v_655 = sub_81;
  } else {
    v_655 = sub_387;
  };
  if (controller_c_window) {
    sub_397 = v_655;
  } else {
    sub_397 = sub_390;
  };
  if (controller_v_392) {
    v_656 = sub_247;
  } else {
    v_656 = sub_397;
  };
  if (controller_blind_failed_recovered) {
    sub_396 = sub_397;
  } else {
    sub_396 = v_656;
  };
  sub_395 = sub_396;
  if (controller_air_failed_recovered) {
    v_669 = sub_380;
  } else {
    v_669 = sub_395;
  };
  sub_394 = sub_395;
  if (controller_c_air_2) {
    v_667 = v_666;
  } else {
    v_667 = sub_394;
  };
  sub_398 = sub_384;
  if (controller_c_air_2) {
    v_670 = v_669;
  } else {
    v_670 = sub_398;
  };
  if (controller_c_air_1) {
    v_668 = v_667;
  } else {
    v_668 = sub_398;
  };
  if (controller_v_445) {
    sub_376 = v_668;
  } else {
    sub_376 = sub_377;
  };
  sub_399 = sub_394;
  if (controller_v_447) {
    sub_375 = sub_399;
  } else {
    sub_375 = sub_376;
  };
  if (controller_air_failed_recovered) {
    v_652 = sub_395;
  } else {
    v_652 = sub_380;
  };
  if (controller_c_air_2) {
    v_653 = v_652;
  } else {
    v_653 = sub_379;
  };
  if (controller_c_air_1) {
    v_654 = v_653;
  } else {
    v_654 = sub_378;
  };
  if (controller_air_failed_recovered) {
    v_650 = sub_380;
  } else {
    v_650 = sub_384;
  };
  if (controller_c_air_2) {
    v_651 = v_650;
  } else {
    v_651 = sub_394;
  };
  sub_403 = sub_391;
  sub_402 = sub_403;
  if (controller_c_air_1) {
    v_671 = v_670;
    sub_401 = sub_402;
  } else {
    v_671 = sub_402;
    sub_401 = v_651;
  };
  if (controller_v_445) {
    sub_400 = v_654;
  } else {
    sub_400 = sub_401;
  };
  if (controller_air_failed_recovered) {
    v_648 = sub_391;
  } else {
    v_648 = sub_380;
  };
  if (controller_c_air_2) {
    v_649 = v_648;
  } else {
    v_649 = sub_379;
  };
  if (controller_c_air_1) {
    sub_404 = v_649;
  } else {
    sub_404 = sub_378;
  };
  if (controller_v_445) {
    v_672 = v_671;
  } else {
    v_672 = sub_404;
  };
  if (controller_v_447) {
    v_673 = v_672;
  } else {
    v_673 = sub_400;
  };
  if (controller_v_446) {
    sub_374 = v_673;
  } else {
    sub_374 = sub_375;
  };
  if (controller_v_407) {
    v_894 = sub_374;
  } else {
    v_894 = sub_349;
  };
  if (controller_v_408) {
    v_895 = v_894;
  } else {
    v_895 = sub_304;
  };
  if (controller_air_failed_recovered) {
    v_643 = sub_356;
  } else {
    v_643 = sub_224;
  };
  if (controller_c_air_2) {
    v_644 = v_643;
  } else {
    v_644 = sub_227;
  };
  if (controller_c_air_1) {
    v_645 = v_644;
  } else {
    v_645 = sub_232;
  };
  if (controller_air_failed_recovered) {
    v_640 = sub_356;
  } else {
    v_640 = sub_220;
  };
  if (controller_c_air_2) {
    v_641 = v_640;
  } else {
    v_641 = sub_223;
  };
  if (controller_c_air_1) {
    v_642 = v_641;
  } else {
    v_642 = sub_226;
  };
  if (controller_air_failed_recovered) {
    v_638 = sub_218;
  } else {
    v_638 = sub_356;
  };
  if (controller_c_air_2) {
    v_639 = v_638;
  } else {
    v_639 = sub_355;
  };
  if (controller_c_air_1) {
    sub_409 = sub_354;
  } else {
    sub_409 = v_639;
  };
  if (controller_v_445) {
    sub_408 = v_642;
  } else {
    sub_408 = sub_409;
  };
  if (controller_v_447) {
    sub_407 = sub_228;
  } else {
    sub_407 = sub_408;
  };
  if (controller_air_failed_recovered) {
    v_635 = sub_224;
  } else {
    v_635 = sub_356;
  };
  if (controller_c_air_2) {
    v_636 = v_635;
  } else {
    v_636 = sub_355;
  };
  if (controller_c_air_1) {
    v_637 = v_636;
  } else {
    v_637 = sub_354;
  };
  if (controller_air_failed_recovered) {
    v_633 = sub_356;
  } else {
    v_633 = sub_218;
  };
  if (controller_c_air_2) {
    v_634 = v_633;
  } else {
    v_634 = sub_223;
  };
  if (controller_c_air_1) {
    sub_411 = sub_232;
  } else {
    sub_411 = v_634;
  };
  if (controller_v_445) {
    sub_410 = v_637;
  } else {
    sub_410 = sub_411;
  };
  if (controller_air_failed_recovered) {
    v_631 = sub_220;
  } else {
    v_631 = sub_356;
  };
  if (controller_c_air_2) {
    v_632 = v_631;
  } else {
    v_632 = sub_355;
  };
  if (controller_c_air_1) {
    sub_412 = v_632;
  } else {
    sub_412 = sub_354;
  };
  if (controller_v_445) {
    v_646 = v_645;
  } else {
    v_646 = sub_412;
  };
  if (controller_v_447) {
    v_647 = v_646;
  } else {
    v_647 = sub_410;
  };
  if (controller_v_446) {
    sub_406 = v_647;
  } else {
    sub_406 = sub_407;
  };
  sub_405 = sub_406;
  if (controller_air_failed_recovered) {
    v_626 = sub_380;
  } else {
    v_626 = sub_245;
  };
  if (controller_c_air_2) {
    v_627 = v_626;
  } else {
    v_627 = sub_249;
  };
  if (controller_c_air_1) {
    v_628 = v_627;
  } else {
    v_628 = sub_254;
  };
  if (controller_air_failed_recovered) {
    v_623 = sub_380;
  } else {
    v_623 = sub_241;
  };
  if (controller_c_air_2) {
    v_624 = v_623;
  } else {
    v_624 = sub_244;
  };
  if (controller_c_air_1) {
    v_625 = v_624;
  } else {
    v_625 = sub_248;
  };
  if (controller_air_failed_recovered) {
    v_621 = sub_239;
  } else {
    v_621 = sub_380;
  };
  if (controller_c_air_2) {
    v_622 = v_621;
  } else {
    v_622 = sub_379;
  };
  if (controller_c_air_1) {
    sub_416 = sub_378;
  } else {
    sub_416 = v_622;
  };
  if (controller_v_445) {
    sub_415 = v_625;
  } else {
    sub_415 = sub_416;
  };
  if (controller_v_447) {
    sub_414 = sub_250;
  } else {
    sub_414 = sub_415;
  };
  if (controller_air_failed_recovered) {
    v_618 = sub_245;
  } else {
    v_618 = sub_380;
  };
  if (controller_c_air_2) {
    v_619 = v_618;
  } else {
    v_619 = sub_379;
  };
  if (controller_c_air_1) {
    v_620 = v_619;
  } else {
    v_620 = sub_378;
  };
  if (controller_air_failed_recovered) {
    v_616 = sub_380;
  } else {
    v_616 = sub_239;
  };
  if (controller_c_air_2) {
    v_617 = v_616;
  } else {
    v_617 = sub_244;
  };
  if (controller_c_air_1) {
    sub_418 = sub_254;
  } else {
    sub_418 = v_617;
  };
  if (controller_v_445) {
    sub_417 = v_620;
  } else {
    sub_417 = sub_418;
  };
  if (controller_air_failed_recovered) {
    v_614 = sub_241;
  } else {
    v_614 = sub_380;
  };
  if (controller_c_air_2) {
    v_615 = v_614;
  } else {
    v_615 = sub_379;
  };
  if (controller_c_air_1) {
    sub_419 = v_615;
  } else {
    sub_419 = sub_378;
  };
  if (controller_v_445) {
    v_629 = v_628;
  } else {
    v_629 = sub_419;
  };
  if (controller_v_447) {
    v_630 = v_629;
  } else {
    v_630 = sub_417;
  };
  if (controller_v_446) {
    sub_413 = v_630;
  } else {
    sub_413 = sub_414;
  };
  if (controller_v_407) {
    v_896 = sub_413;
  } else {
    v_896 = sub_405;
  };
  if (controller_v_408) {
    v_897 = v_896;
  } else {
    v_897 = sub_342;
  };
  if (controller_light_failed_recovered) {
    v_898 = v_895;
  } else {
    v_898 = v_897;
  };
  if (controller_ck_1) {
    sub_434 = sub_112;
  } else {
    sub_434 = sub_117;
  };
  sub_433 = sub_434;
  if (controller_c_window) {
    sub_432 = sub_41;
  } else {
    sub_432 = sub_433;
  };
  sub_431 = sub_432;
  if (controller_c_door) {
    v_606 = sub_43;
    sub_430 = sub_431;
  } else {
    v_606 = sub_431;
    sub_430 = sub_43;
  };
  if (controller_ck_11_1) {
    sub_429 = v_606;
  } else {
    sub_429 = sub_430;
  };
  if (controller_air_failed_recovered) {
    v_607 = sub_429;
  } else {
    v_607 = false;
  };
  sub_428 = sub_429;
  sub_427 = sub_428;
  sub_436 = sub_43;
  if (controller_air_failed_recovered) {
    v_605 = sub_436;
  } else {
    v_605 = sub_429;
  };
  if (controller_c_air_2) {
    sub_435 = v_605;
  } else {
    sub_435 = sub_428;
  };
  if (controller_c_air_1) {
    sub_426 = sub_427;
  } else {
    sub_426 = sub_435;
  };
  sub_437 = sub_436;
  if (controller_c_air_2) {
    v_608 = v_607;
  } else {
    v_608 = sub_437;
  };
  sub_438 = sub_437;
  if (controller_c_air_1) {
    v_609 = v_608;
  } else {
    v_609 = sub_438;
  };
  if (controller_v_445) {
    sub_425 = v_609;
  } else {
    sub_425 = sub_426;
  };
  if (controller_v_447) {
    sub_424 = sub_438;
  } else {
    sub_424 = sub_425;
  };
  if (controller_c_air_1) {
    v_604 = sub_435;
  } else {
    v_604 = sub_427;
  };
  if (controller_air_failed_recovered) {
    v_603 = sub_429;
  } else {
    v_603 = sub_436;
  };
  if (controller_c_air_2) {
    sub_441 = v_603;
  } else {
    sub_441 = sub_437;
  };
  if (controller_c_air_1) {
    v_610 = sub_441;
    sub_440 = false;
  } else {
    v_610 = false;
    sub_440 = sub_441;
  };
  if (controller_v_445) {
    sub_439 = v_604;
  } else {
    sub_439 = sub_440;
  };
  if (controller_air_failed_recovered) {
    v_601 = false;
  } else {
    v_601 = sub_429;
  };
  if (controller_c_air_2) {
    v_602 = v_601;
  } else {
    v_602 = sub_428;
  };
  if (controller_c_air_1) {
    sub_442 = v_602;
  } else {
    sub_442 = sub_427;
  };
  if (controller_v_445) {
    v_611 = v_610;
  } else {
    v_611 = sub_442;
  };
  if (controller_v_447) {
    v_612 = v_611;
  } else {
    v_612 = sub_439;
  };
  if (controller_v_446) {
    sub_423 = v_612;
  } else {
    sub_423 = sub_424;
  };
  sub_422 = sub_423;
  if (controller_c_window) {
    v_588 = false;
    sub_453 = sub_110;
  } else {
    v_588 = sub_319;
    sub_453 = sub_319;
  };
  if (controller_v_392) {
    v_589 = v_588;
  } else {
    v_589 = sub_453;
  };
  if (controller_blind_failed_recovered) {
    sub_452 = sub_453;
  } else {
    sub_452 = v_589;
  };
  if (controller_c_door) {
    v_590 = false;
    sub_451 = sub_452;
  } else {
    v_590 = sub_452;
    sub_451 = false;
  };
  if (controller_ck_11_1) {
    sub_450 = v_590;
  } else {
    sub_450 = sub_451;
  };
  if (controller_air_failed_recovered) {
    v_593 = sub_450;
  } else {
    v_593 = sub_241;
  };
  sub_449 = sub_450;
  sub_448 = sub_449;
  if (controller_c_pc) {
    v_587 = false;
  } else {
    v_587 = sub_147;
  };
  if (controller_c_window) {
    sub_456 = v_587;
  } else {
    sub_456 = sub_146;
  };
  sub_455 = sub_456;
  sub_454 = sub_455;
  if (controller_air_failed_recovered) {
    v_591 = sub_454;
  } else {
    v_591 = sub_450;
  };
  if (controller_c_air_2) {
    v_592 = v_591;
  } else {
    v_592 = sub_449;
  };
  if (controller_c_air_1) {
    sub_447 = sub_448;
  } else {
    sub_447 = v_592;
  };
  sub_460 = sub_146;
  sub_459 = sub_460;
  sub_458 = sub_459;
  if (controller_air_failed_recovered) {
    v_596 = sub_450;
  } else {
    v_596 = sub_458;
  };
  sub_457 = sub_458;
  if (controller_c_air_2) {
    v_594 = v_593;
  } else {
    v_594 = sub_457;
  };
  sub_461 = sub_454;
  if (controller_c_air_2) {
    v_597 = v_596;
  } else {
    v_597 = sub_461;
  };
  if (controller_c_air_1) {
    v_598 = v_597;
    v_595 = v_594;
  } else {
    v_598 = sub_254;
    v_595 = sub_461;
  };
  if (controller_v_445) {
    sub_446 = v_595;
  } else {
    sub_446 = sub_447;
  };
  sub_462 = sub_457;
  if (controller_v_447) {
    sub_445 = sub_462;
  } else {
    sub_445 = sub_446;
  };
  if (controller_air_failed_recovered) {
    v_584 = sub_458;
  } else {
    v_584 = sub_450;
  };
  if (controller_c_air_2) {
    v_585 = v_584;
  } else {
    v_585 = sub_449;
  };
  if (controller_c_air_1) {
    v_586 = v_585;
  } else {
    v_586 = sub_448;
  };
  if (controller_air_failed_recovered) {
    v_582 = sub_450;
  } else {
    v_582 = sub_454;
  };
  if (controller_c_air_2) {
    v_583 = v_582;
  } else {
    v_583 = sub_457;
  };
  if (controller_c_air_1) {
    sub_464 = sub_254;
  } else {
    sub_464 = v_583;
  };
  if (controller_v_445) {
    sub_463 = v_586;
  } else {
    sub_463 = sub_464;
  };
  if (controller_air_failed_recovered) {
    v = sub_241;
  } else {
    v = sub_450;
  };
  if (controller_c_air_2) {
    v_581 = v;
  } else {
    v_581 = sub_449;
  };
  if (controller_c_air_1) {
    sub_465 = v_581;
  } else {
    sub_465 = sub_448;
  };
  if (controller_v_445) {
    v_599 = v_598;
  } else {
    v_599 = sub_465;
  };
  if (controller_v_447) {
    v_600 = v_599;
  } else {
    v_600 = sub_463;
  };
  if (controller_v_446) {
    sub_444 = v_600;
  } else {
    sub_444 = sub_445;
  };
  sub_443 = sub_444;
  if (controller_v_407) {
    v_613 = sub_443;
  } else {
    v_613 = sub_422;
  };
  if (controller_v_408) {
    sub_421 = v_613;
  } else {
    sub_421 = sub_342;
  };
  sub_420 = sub_421;
  if (controller_c_light_1) {
    v_899 = v_898;
  } else {
    v_899 = sub_420;
  };
  if (controller_v_407) {
    sub_466 = sub_422;
  } else {
    sub_466 = sub_443;
  };
  if (controller_v_408) {
    v_901 = sub_466;
    v_900 = sub_342;
  } else {
    v_901 = sub_342;
    v_900 = sub_466;
  };
  if (controller_light_failed_recovered) {
    v_902 = v_900;
  } else {
    v_902 = v_901;
  };
  if (controller_c_light_1) {
    v_903 = v_902;
  } else {
    v_903 = sub_420;
  };
  if (controller_light_switch) {
    v_904 = v_899;
  } else {
    v_904 = v_903;
  };
  if (p_controller_c_light_2) {
    sub_0 = v_904;
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
  int controller_pnr_9, int controller_ck_11_1, int controller_pnr_8,
  int controller_ck_13_1, int controller_pnr_7, int controller_ck_15_1,
  int controller_pnr_6, int controller_ck_17_1, int controller_pnr_5,
  int controller_ck_19_1, int controller_pnr_4, int controller_ck_21_1,
  int controller_pnr_3, int controller_v_447, int controller_v_446,
  int controller_v_445, int controller_pnr_2, int controller_v_408,
  int controller_v_407, int controller_pnr_1, int controller_v_392,
  int controller_v_391, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_closet, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_1_out* _out) {
  
  int v_1185;
  int v_1184;
  int v_1183;
  int v_1182;
  int v_1181;
  int v_1180;
  int v_1179;
  int v_1178;
  int v_1177;
  int v_1176;
  int v_1175;
  int v_1174;
  int v_1173;
  int v_1172;
  int v_1171;
  int v_1170;
  int v_1169;
  int v_1168;
  int v_1167;
  int v_1166;
  int v_1165;
  int v_1164;
  int v_1163;
  int v_1162;
  int v_1161;
  int v_1160;
  int v_1159;
  int v_1158;
  int v_1157;
  int v_1156;
  int v_1155;
  int v_1154;
  int v_1153;
  int v_1152;
  int v_1151;
  int v_1150;
  int v_1149;
  int v_1148;
  int v_1147;
  int v_1146;
  int v_1145;
  int v_1144;
  int v_1143;
  int v_1142;
  int v_1141;
  int v_1140;
  int v_1139;
  int v_1138;
  int v_1137;
  int v_1136;
  int v_1135;
  int v_1134;
  int v_1133;
  int v_1132;
  int v_1131;
  int v_1130;
  int v_1129;
  int v_1128;
  int v_1127;
  int v_1126;
  int v_1125;
  int v_1124;
  int v_1123;
  int v_1122;
  int v_1121;
  int v_1120;
  int v_1119;
  int v_1118;
  int v_1117;
  int v_1116;
  int v_1115;
  int v_1114;
  int v_1113;
  int v_1112;
  int v_1111;
  int v_1110;
  int v_1109;
  int v_1108;
  int v_1107;
  int v_1106;
  int v_1105;
  int v_1104;
  int v_1103;
  int v_1102;
  int v_1101;
  int v_1100;
  int v_1099;
  int v_1098;
  int v_1097;
  int v_1096;
  int v_1095;
  int v_1094;
  int v_1093;
  int v_1092;
  int v_1091;
  int v_1090;
  int v_1089;
  int v_1088;
  int v_1087;
  int v_1086;
  int v_1085;
  int v_1084;
  int v_1083;
  int v_1082;
  int v_1081;
  int v_1080;
  int v_1079;
  int v_1078;
  int v_1077;
  int v_1076;
  int v_1075;
  int v_1074;
  int v_1073;
  int v_1072;
  int v_1071;
  int v_1070;
  int v_1069;
  int v_1068;
  int v_1067;
  int v_1066;
  int v_1065;
  int v_1064;
  int v_1063;
  int v_1062;
  int v_1061;
  int v_1060;
  int v_1059;
  int v_1058;
  int v_1057;
  int v_1056;
  int v_1055;
  int v_1054;
  int v_1053;
  int v_1052;
  int v_1051;
  int v_1050;
  int v_1049;
  int v_1048;
  int v_1047;
  int v_1046;
  int v_1045;
  int v_1044;
  int v_1043;
  int v_1042;
  int v_1041;
  int v_1040;
  int v_1039;
  int v_1038;
  int v_1037;
  int v_1036;
  int v_1035;
  int v_1034;
  int v_1033;
  int v_1032;
  int v_1031;
  int v_1030;
  int v_1029;
  int v_1028;
  int v_1027;
  int v_1026;
  int v_1025;
  int v_1024;
  int v_1023;
  int v_1022;
  int v_1021;
  int v_1020;
  int v_1019;
  int v_1018;
  int v_1017;
  int v_1016;
  int v_1015;
  int v_1014;
  int v_1013;
  int v_1012;
  int v_1011;
  int v_1010;
  int v_1009;
  int v_1008;
  int v_1007;
  int v_1006;
  int v_1005;
  int v_1004;
  int v_1003;
  int v_1002;
  int v_1001;
  int v_1000;
  int v_999;
  int v_998;
  int v_997;
  int v_996;
  int v_995;
  int v_994;
  int v_993;
  int v_992;
  int v_991;
  int v_990;
  int v_989;
  int v_988;
  int v_987;
  int v_986;
  int v_985;
  int v_984;
  int v_983;
  int v_982;
  int v_981;
  int v_980;
  int v_979;
  int v_978;
  int v_977;
  int v_976;
  int v_975;
  int v_974;
  int v_973;
  int v_972;
  int v_971;
  int v_970;
  int v_969;
  int v_968;
  int v_967;
  int v_966;
  int v_965;
  int v_964;
  int v_963;
  int v_962;
  int v_961;
  int v_960;
  int v_959;
  int v_958;
  int v_957;
  int v_956;
  int v_955;
  int v_954;
  int v_953;
  int v_952;
  int v_951;
  int v_950;
  int v_949;
  int v_948;
  int v_947;
  int v_946;
  int v_945;
  int v_944;
  int v_943;
  int v_942;
  int v_941;
  int v_940;
  int v_939;
  int v_938;
  int v_937;
  int v_936;
  int v_935;
  int v_934;
  int v_933;
  int v_932;
  int v_931;
  int v_930;
  int v_929;
  int v_928;
  int v_927;
  int v_926;
  int v_925;
  int v_924;
  int v_923;
  int v_922;
  int v_921;
  int v_920;
  int v_919;
  int v_918;
  int v_917;
  int v_916;
  int v_915;
  int v_914;
  int v_913;
  int v_912;
  int v_911;
  int v_910;
  int v_909;
  int v_908;
  int v_907;
  int v_906;
  int v_905;
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
  v_1158 = !(controller_ck_17_1);
  sub_21 = (v_1158&&false);
  sub_22 = (controller_ck_17_1&&false);
  if (controller_cleaner) {
    sub_20 = sub_21;
  } else {
    sub_20 = sub_22;
  };
  sub_23 = false;
  if (controller_worker) {
    v_1159 = sub_23;
    sub_19 = sub_20;
  } else {
    v_1159 = sub_20;
    sub_19 = sub_23;
  };
  if (controller_ck_15_1) {
    sub_18 = v_1159;
  } else {
    sub_18 = sub_19;
  };
  if (controller_change_shift) {
    v_1160 = false;
    sub_17 = sub_18;
  } else {
    v_1160 = sub_18;
    sub_17 = false;
  };
  if (controller_ck_1) {
    sub_16 = v_1160;
  } else {
    sub_16 = sub_17;
  };
  sub_15 = sub_16;
  sub_26 = sub_23;
  if (controller_cleaner) {
    sub_29 = sub_22;
  } else {
    sub_29 = sub_21;
  };
  if (controller_worker) {
    sub_28 = sub_29;
    sub_30 = false;
  } else {
    sub_28 = false;
    sub_30 = sub_29;
  };
  if (controller_ck_15_1) {
    sub_27 = sub_30;
  } else {
    sub_27 = sub_28;
  };
  if (controller_change_shift) {
    v_1157 = sub_27;
    sub_25 = sub_26;
  } else {
    v_1157 = sub_26;
    sub_25 = sub_27;
  };
  if (controller_ck_1) {
    sub_24 = v_1157;
  } else {
    sub_24 = sub_25;
  };
  if (controller_c_pc) {
    v_1161 = sub_15;
  } else {
    v_1161 = sub_24;
  };
  sub_33 = sub_18;
  sub_32 = sub_33;
  sub_31 = sub_32;
  if (controller_c_window) {
    sub_14 = v_1161;
  } else {
    sub_14 = sub_31;
  };
  sub_35 = sub_27;
  if (controller_c_pc) {
    sub_34 = false;
  } else {
    sub_34 = sub_35;
  };
  if (controller_c_window) {
    v_1162 = sub_34;
  } else {
    v_1162 = sub_31;
  };
  if (controller_v_392) {
    v_1163 = v_1162;
  } else {
    v_1163 = sub_14;
  };
  if (controller_blind_failed_recovered) {
    sub_13 = sub_14;
  } else {
    sub_13 = v_1163;
  };
  if (controller_c_window) {
    sub_37 = sub_34;
  } else {
    sub_37 = false;
  };
  sub_36 = sub_37;
  if (controller_c_door) {
    v_1164 = sub_36;
    sub_12 = sub_13;
  } else {
    v_1164 = sub_13;
    sub_12 = sub_36;
  };
  if (controller_ck_11_1) {
    sub_11 = v_1164;
  } else {
    sub_11 = sub_12;
  };
  sub_10 = sub_11;
  sub_9 = sub_10;
  if (controller_ck_15_1) {
    sub_45 = sub_28;
  } else {
    sub_45 = sub_30;
  };
  if (controller_change_shift) {
    sub_44 = false;
    sub_46 = sub_45;
  } else {
    sub_44 = sub_45;
    sub_46 = false;
  };
  if (controller_ck_1) {
    sub_43 = sub_46;
  } else {
    sub_43 = sub_44;
  };
  sub_42 = sub_43;
  sub_49 = sub_29;
  sub_48 = sub_49;
  sub_47 = sub_48;
  if (controller_c_pc) {
    v_1152 = sub_42;
  } else {
    v_1152 = sub_47;
  };
  sub_52 = sub_45;
  sub_51 = sub_52;
  sub_50 = sub_51;
  if (controller_c_window) {
    sub_41 = v_1152;
  } else {
    sub_41 = sub_50;
  };
  if (controller_change_shift) {
    v_1151 = sub_27;
    sub_55 = sub_49;
  } else {
    v_1151 = sub_49;
    sub_55 = sub_27;
  };
  if (controller_ck_1) {
    sub_54 = v_1151;
  } else {
    sub_54 = sub_55;
  };
  sub_53 = sub_54;
  if (controller_c_pc) {
    v_1153 = false;
  } else {
    v_1153 = sub_53;
  };
  if (controller_ck_1) {
    sub_58 = sub_44;
  } else {
    sub_58 = sub_46;
  };
  sub_57 = sub_58;
  sub_56 = sub_57;
  if (controller_c_window) {
    v_1154 = v_1153;
  } else {
    v_1154 = sub_56;
  };
  if (controller_v_392) {
    v_1155 = v_1154;
  } else {
    v_1155 = sub_41;
  };
  if (controller_blind_failed_recovered) {
    sub_40 = sub_41;
  } else {
    sub_40 = v_1155;
  };
  sub_39 = sub_40;
  if (controller_air_failed_recovered) {
    v_1156 = sub_39;
  } else {
    v_1156 = sub_11;
  };
  if (controller_c_air_2) {
    sub_38 = v_1156;
  } else {
    sub_38 = sub_10;
  };
  if (controller_c_air_1) {
    sub_8 = sub_9;
  } else {
    sub_8 = sub_38;
  };
  if (controller_c_closet) {
    sub_64 = sub_52;
  } else {
    sub_64 = sub_33;
  };
  if (controller_c_pc) {
    sub_63 = sub_51;
  } else {
    sub_63 = sub_64;
  };
  sub_62 = sub_63;
  sub_61 = sub_62;
  sub_60 = sub_61;
  if (controller_air_failed_recovered) {
    sub_59 = sub_11;
  } else {
    sub_59 = sub_60;
  };
  v_1146 = !(controller_ck_17_1);
  sub_75 = (v_1146||false);
  sub_76 = (controller_ck_17_1||false);
  if (controller_cleaner) {
    sub_74 = sub_75;
  } else {
    sub_74 = sub_76;
  };
  if (controller_worker) {
    sub_73 = false;
    sub_77 = sub_74;
  } else {
    sub_73 = sub_74;
    sub_77 = false;
  };
  if (controller_ck_15_1) {
    sub_72 = sub_77;
  } else {
    sub_72 = sub_73;
  };
  if (controller_change_shift) {
    sub_71 = sub_72;
    sub_78 = sub_45;
  } else {
    sub_71 = sub_45;
    sub_78 = sub_72;
  };
  if (controller_ck_1) {
    sub_70 = sub_78;
  } else {
    sub_70 = sub_71;
  };
  sub_69 = sub_70;
  if (controller_c_pc) {
    v_1147 = sub_69;
  } else {
    v_1147 = sub_47;
  };
  if (controller_c_window) {
    sub_68 = v_1147;
  } else {
    sub_68 = sub_50;
  };
  if (controller_change_shift) {
    sub_81 = sub_72;
    sub_82 = false;
  } else {
    sub_81 = false;
    sub_82 = sub_72;
  };
  if (controller_ck_1) {
    sub_80 = sub_82;
  } else {
    sub_80 = sub_81;
  };
  sub_79 = sub_80;
  if (controller_c_pc) {
    v_1148 = sub_79;
  } else {
    v_1148 = sub_53;
  };
  if (controller_c_window) {
    v_1149 = v_1148;
  } else {
    v_1149 = sub_56;
  };
  if (controller_v_392) {
    v_1150 = v_1149;
  } else {
    v_1150 = sub_68;
  };
  if (controller_blind_failed_recovered) {
    sub_67 = sub_68;
  } else {
    sub_67 = v_1150;
  };
  sub_66 = sub_67;
  if (controller_air_failed_recovered) {
    v_1167 = sub_11;
  } else {
    v_1167 = sub_66;
  };
  sub_65 = sub_66;
  if (controller_c_air_2) {
    v_1165 = sub_59;
  } else {
    v_1165 = sub_65;
  };
  sub_84 = sub_39;
  if (controller_c_air_2) {
    v_1168 = v_1167;
  } else {
    v_1168 = sub_84;
  };
  sub_83 = sub_84;
  if (controller_c_air_1) {
    v_1166 = v_1165;
  } else {
    v_1166 = sub_83;
  };
  if (controller_v_445) {
    sub_7 = v_1166;
  } else {
    sub_7 = sub_8;
  };
  sub_85 = sub_65;
  if (controller_v_447) {
    sub_6 = sub_85;
  } else {
    sub_6 = sub_7;
  };
  if (controller_air_failed_recovered) {
    v_1143 = sub_66;
  } else {
    v_1143 = sub_11;
  };
  if (controller_c_air_2) {
    v_1144 = v_1143;
  } else {
    v_1144 = sub_10;
  };
  if (controller_c_air_1) {
    v_1145 = v_1144;
  } else {
    v_1145 = sub_9;
  };
  sub_89 = sub_60;
  sub_88 = sub_89;
  if (controller_c_air_1) {
    v_1169 = v_1168;
  } else {
    v_1169 = sub_88;
  };
  if (controller_air_failed_recovered) {
    sub_90 = sub_11;
  } else {
    sub_90 = sub_39;
  };
  if (controller_c_air_2) {
    v_1142 = sub_90;
  } else {
    v_1142 = sub_65;
  };
  if (controller_c_air_1) {
    sub_87 = sub_88;
  } else {
    sub_87 = v_1142;
  };
  if (controller_v_445) {
    sub_86 = v_1145;
  } else {
    sub_86 = sub_87;
  };
  if (controller_air_failed_recovered) {
    v_1140 = sub_60;
  } else {
    v_1140 = sub_11;
  };
  if (controller_c_air_2) {
    v_1141 = v_1140;
  } else {
    v_1141 = sub_10;
  };
  if (controller_c_air_1) {
    sub_91 = v_1141;
  } else {
    sub_91 = sub_9;
  };
  if (controller_v_445) {
    v_1170 = v_1169;
  } else {
    v_1170 = sub_91;
  };
  if (controller_v_447) {
    v_1171 = v_1170;
  } else {
    v_1171 = sub_86;
  };
  if (controller_v_446) {
    sub_5 = v_1171;
  } else {
    sub_5 = sub_6;
  };
  sub_4 = sub_5;
  if (controller_c_air_2) {
    v_1135 = sub_59;
  } else {
    v_1135 = sub_84;
  };
  if (controller_c_air_1) {
    v_1136 = v_1135;
  } else {
    v_1136 = sub_83;
  };
  if (controller_v_445) {
    sub_95 = v_1136;
  } else {
    sub_95 = sub_8;
  };
  if (controller_v_447) {
    sub_94 = sub_83;
  } else {
    sub_94 = sub_95;
  };
  if (controller_c_air_1) {
    v_1134 = sub_38;
  } else {
    v_1134 = sub_9;
  };
  if (controller_c_air_2) {
    sub_98 = sub_90;
  } else {
    sub_98 = sub_84;
  };
  if (controller_c_air_1) {
    v_1137 = sub_98;
  } else {
    v_1137 = sub_88;
  };
  if (controller_v_445) {
    v_1138 = v_1137;
  } else {
    v_1138 = sub_91;
  };
  if (controller_c_air_1) {
    sub_97 = sub_88;
  } else {
    sub_97 = sub_98;
  };
  if (controller_v_445) {
    sub_96 = v_1134;
  } else {
    sub_96 = sub_97;
  };
  if (controller_v_447) {
    v_1139 = v_1138;
  } else {
    v_1139 = sub_96;
  };
  if (controller_v_446) {
    sub_93 = v_1139;
  } else {
    sub_93 = sub_94;
  };
  sub_92 = sub_93;
  if (controller_v_407) {
    sub_3 = sub_92;
  } else {
    sub_3 = sub_4;
  };
  if (controller_cleaner) {
    sub_116 = sub_76;
  } else {
    sub_116 = sub_75;
  };
  sub_117 = true;
  if (controller_worker) {
    v_1123 = sub_117;
    sub_115 = sub_116;
  } else {
    v_1123 = sub_116;
    sub_115 = sub_117;
  };
  if (controller_ck_15_1) {
    sub_114 = v_1123;
  } else {
    sub_114 = sub_115;
  };
  if (controller_change_shift) {
    v_1124 = false;
    sub_113 = sub_114;
  } else {
    v_1124 = sub_114;
    sub_113 = false;
  };
  if (controller_ck_1) {
    sub_112 = v_1124;
  } else {
    sub_112 = sub_113;
  };
  sub_111 = sub_112;
  sub_123 = controller_ck_17_1;
  sub_124 = !(controller_ck_17_1);
  if (controller_cleaner) {
    sub_122 = sub_123;
  } else {
    sub_122 = sub_124;
  };
  if (controller_worker) {
    v_1121 = sub_117;
    sub_121 = sub_122;
  } else {
    v_1121 = sub_122;
    sub_121 = sub_117;
  };
  if (controller_ck_15_1) {
    sub_120 = v_1121;
  } else {
    sub_120 = sub_121;
  };
  if (controller_change_shift) {
    v_1122 = sub_27;
    sub_119 = sub_120;
  } else {
    v_1122 = sub_120;
    sub_119 = sub_27;
  };
  if (controller_ck_1) {
    sub_118 = v_1122;
  } else {
    sub_118 = sub_119;
  };
  if (controller_c_pc) {
    sub_110 = sub_111;
  } else {
    sub_110 = sub_118;
  };
  if (controller_change_shift) {
    sub_128 = sub_114;
    sub_129 = sub_18;
  } else {
    sub_128 = sub_18;
    sub_129 = sub_114;
  };
  if (controller_ck_1) {
    sub_127 = sub_129;
  } else {
    sub_127 = sub_128;
  };
  sub_126 = sub_127;
  sub_125 = sub_126;
  if (controller_c_window) {
    v_1125 = sub_34;
    sub_109 = sub_110;
  } else {
    v_1125 = sub_125;
    sub_109 = sub_125;
  };
  if (controller_v_392) {
    v_1126 = v_1125;
  } else {
    v_1126 = sub_109;
  };
  if (controller_blind_failed_recovered) {
    sub_108 = sub_109;
  } else {
    sub_108 = v_1126;
  };
  if (controller_c_door) {
    v_1127 = sub_36;
    sub_107 = sub_108;
  } else {
    v_1127 = sub_108;
    sub_107 = sub_36;
  };
  if (controller_ck_11_1) {
    sub_106 = v_1127;
  } else {
    sub_106 = sub_107;
  };
  sub_105 = sub_106;
  sub_104 = sub_105;
  if (controller_ck_1) {
    sub_135 = sub_81;
  } else {
    sub_135 = sub_82;
  };
  sub_134 = sub_135;
  if (controller_worker) {
    sub_138 = sub_29;
    sub_139 = sub_74;
  } else {
    sub_138 = sub_74;
    sub_139 = sub_29;
  };
  if (controller_ck_15_1) {
    sub_137 = sub_139;
  } else {
    sub_137 = sub_138;
  };
  sub_136 = sub_137;
  if (controller_c_pc) {
    v_1118 = sub_134;
  } else {
    v_1118 = sub_136;
  };
  sub_142 = sub_72;
  sub_141 = sub_142;
  sub_140 = sub_141;
  if (controller_c_window) {
    sub_133 = v_1118;
  } else {
    sub_133 = sub_140;
  };
  if (controller_change_shift) {
    v_1116 = sub_27;
    sub_146 = sub_137;
  } else {
    v_1116 = sub_137;
    sub_146 = sub_27;
  };
  if (controller_ck_1) {
    sub_145 = v_1116;
  } else {
    sub_145 = sub_146;
  };
  sub_144 = sub_145;
  if (controller_c_pc) {
    v_1117 = false;
  } else {
    v_1117 = sub_144;
  };
  sub_147 = sub_79;
  if (controller_c_window) {
    sub_143 = v_1117;
  } else {
    sub_143 = sub_147;
  };
  if (controller_v_392) {
    v_1119 = sub_143;
  } else {
    v_1119 = sub_133;
  };
  if (controller_blind_failed_recovered) {
    sub_132 = sub_133;
  } else {
    sub_132 = v_1119;
  };
  sub_131 = sub_132;
  if (controller_air_failed_recovered) {
    v_1120 = sub_131;
  } else {
    v_1120 = sub_106;
  };
  if (controller_c_air_2) {
    sub_130 = v_1120;
  } else {
    sub_130 = sub_105;
  };
  if (controller_c_air_1) {
    sub_103 = sub_104;
  } else {
    sub_103 = sub_130;
  };
  sub_153 = sub_114;
  if (controller_c_closet) {
    sub_152 = sub_142;
  } else {
    sub_152 = sub_153;
  };
  if (controller_c_pc) {
    sub_151 = sub_141;
  } else {
    sub_151 = sub_152;
  };
  sub_150 = sub_151;
  sub_149 = sub_150;
  sub_148 = sub_149;
  if (controller_air_failed_recovered) {
    v_1128 = sub_106;
  } else {
    v_1128 = sub_148;
  };
  sub_154 = sub_131;
  if (controller_c_air_2) {
    v_1129 = v_1128;
  } else {
    v_1129 = sub_154;
  };
  sub_155 = sub_154;
  if (controller_c_air_1) {
    v_1130 = v_1129;
  } else {
    v_1130 = sub_155;
  };
  if (controller_v_445) {
    sub_102 = v_1130;
  } else {
    sub_102 = sub_103;
  };
  if (controller_v_447) {
    sub_101 = sub_155;
  } else {
    sub_101 = sub_102;
  };
  if (controller_c_air_1) {
    v_1115 = sub_130;
  } else {
    v_1115 = sub_104;
  };
  sub_159 = sub_148;
  sub_158 = sub_159;
  if (controller_air_failed_recovered) {
    v_1114 = sub_106;
  } else {
    v_1114 = sub_131;
  };
  if (controller_c_air_2) {
    sub_160 = v_1114;
  } else {
    sub_160 = sub_154;
  };
  if (controller_c_air_1) {
    v_1131 = sub_160;
    sub_157 = sub_158;
  } else {
    v_1131 = sub_158;
    sub_157 = sub_160;
  };
  if (controller_v_445) {
    sub_156 = v_1115;
  } else {
    sub_156 = sub_157;
  };
  if (controller_air_failed_recovered) {
    v_1112 = sub_148;
  } else {
    v_1112 = sub_106;
  };
  if (controller_c_air_2) {
    v_1113 = v_1112;
  } else {
    v_1113 = sub_105;
  };
  if (controller_c_air_1) {
    sub_161 = v_1113;
  } else {
    sub_161 = sub_104;
  };
  if (controller_v_445) {
    v_1132 = v_1131;
  } else {
    v_1132 = sub_161;
  };
  if (controller_v_447) {
    v_1133 = v_1132;
  } else {
    v_1133 = sub_156;
  };
  if (controller_v_446) {
    sub_100 = v_1133;
  } else {
    sub_100 = sub_101;
  };
  sub_99 = sub_100;
  if (controller_cleaner) {
    sub_177 = sub_124;
  } else {
    sub_177 = sub_123;
  };
  if (controller_worker) {
    v_1097 = sub_23;
    sub_176 = sub_177;
  } else {
    v_1097 = sub_177;
    sub_176 = sub_23;
  };
  if (controller_ck_15_1) {
    sub_175 = v_1097;
    sub_178 = sub_73;
  } else {
    sub_175 = sub_176;
    sub_178 = sub_77;
  };
  if (controller_change_shift) {
    v_1098 = sub_178;
    sub_174 = sub_175;
  } else {
    v_1098 = sub_175;
    sub_174 = sub_178;
  };
  if (controller_ck_1) {
    sub_173 = v_1098;
  } else {
    sub_173 = sub_174;
  };
  if (controller_c_pc) {
    sub_172 = sub_15;
  } else {
    sub_172 = sub_173;
  };
  if (controller_c_window) {
    sub_171 = sub_172;
  } else {
    sub_171 = sub_31;
  };
  sub_180 = sub_178;
  if (controller_c_pc) {
    sub_179 = false;
  } else {
    sub_179 = sub_180;
  };
  if (controller_c_window) {
    v_1099 = sub_179;
  } else {
    v_1099 = sub_31;
  };
  if (controller_v_392) {
    v_1100 = v_1099;
  } else {
    v_1100 = sub_171;
  };
  if (controller_blind_failed_recovered) {
    sub_170 = sub_171;
  } else {
    sub_170 = v_1100;
  };
  if (controller_c_window) {
    sub_182 = sub_179;
  } else {
    sub_182 = false;
  };
  sub_181 = sub_182;
  if (controller_c_door) {
    v_1101 = sub_181;
    sub_169 = sub_170;
  } else {
    v_1101 = sub_170;
    sub_169 = sub_181;
  };
  if (controller_ck_11_1) {
    sub_168 = v_1101;
  } else {
    sub_168 = sub_169;
  };
  sub_167 = sub_168;
  sub_166 = sub_167;
  if (controller_ck_15_1) {
    sub_189 = sub_138;
  } else {
    sub_189 = sub_139;
  };
  sub_190 = sub_74;
  if (controller_change_shift) {
    v_1094 = sub_190;
    sub_188 = sub_189;
  } else {
    v_1094 = sub_189;
    sub_188 = sub_190;
  };
  if (controller_ck_1) {
    sub_187 = v_1094;
  } else {
    sub_187 = sub_188;
  };
  sub_186 = sub_187;
  if (controller_c_pc) {
    v_1095 = sub_134;
  } else {
    v_1095 = sub_186;
  };
  if (controller_ck_1) {
    sub_193 = sub_71;
  } else {
    sub_193 = sub_78;
  };
  sub_192 = sub_193;
  sub_191 = sub_192;
  if (controller_c_window) {
    sub_185 = v_1095;
  } else {
    sub_185 = sub_191;
  };
  if (controller_change_shift) {
    v_1092 = sub_178;
    sub_197 = sub_189;
  } else {
    v_1092 = sub_189;
    sub_197 = sub_178;
  };
  if (controller_ck_1) {
    sub_196 = v_1092;
  } else {
    sub_196 = sub_197;
  };
  sub_195 = sub_196;
  if (controller_c_pc) {
    v_1093 = false;
  } else {
    v_1093 = sub_195;
  };
  if (controller_c_window) {
    sub_194 = v_1093;
  } else {
    sub_194 = sub_56;
  };
  if (controller_v_392) {
    v_1096 = sub_194;
  } else {
    v_1096 = sub_185;
  };
  if (controller_blind_failed_recovered) {
    sub_184 = sub_185;
  } else {
    sub_184 = v_1096;
  };
  sub_183 = sub_184;
  if (controller_air_failed_recovered) {
    v_1102 = sub_183;
  } else {
    v_1102 = sub_168;
  };
  if (controller_c_air_2) {
    v_1103 = v_1102;
  } else {
    v_1103 = sub_167;
  };
  if (controller_c_air_1) {
    sub_165 = sub_166;
  } else {
    sub_165 = v_1103;
  };
  if (controller_c_pc) {
    v_1091 = sub_69;
  } else {
    v_1091 = sub_64;
  };
  if (controller_c_window) {
    sub_200 = v_1091;
  } else {
    sub_200 = sub_63;
  };
  sub_199 = sub_200;
  sub_198 = sub_199;
  if (controller_air_failed_recovered) {
    v_1104 = sub_168;
  } else {
    v_1104 = sub_198;
  };
  if (controller_c_pc) {
    v_1089 = sub_192;
  } else {
    v_1089 = sub_186;
  };
  if (controller_c_window) {
    sub_204 = v_1089;
  } else {
    sub_204 = sub_191;
  };
  if (controller_c_pc) {
    v_1088 = sub_57;
  } else {
    v_1088 = sub_195;
  };
  if (controller_c_window) {
    sub_205 = v_1088;
  } else {
    sub_205 = sub_56;
  };
  if (controller_v_392) {
    v_1090 = sub_205;
  } else {
    v_1090 = sub_204;
  };
  if (controller_blind_failed_recovered) {
    sub_203 = sub_204;
  } else {
    sub_203 = v_1090;
  };
  sub_202 = sub_203;
  if (controller_air_failed_recovered) {
    v_1107 = sub_168;
  } else {
    v_1107 = sub_202;
  };
  sub_201 = sub_202;
  if (controller_c_air_2) {
    v_1105 = v_1104;
  } else {
    v_1105 = sub_201;
  };
  sub_206 = sub_183;
  if (controller_c_air_2) {
    v_1108 = v_1107;
  } else {
    v_1108 = sub_206;
  };
  if (controller_c_air_1) {
    v_1106 = v_1105;
  } else {
    v_1106 = sub_206;
  };
  if (controller_v_445) {
    sub_164 = v_1106;
  } else {
    sub_164 = sub_165;
  };
  sub_207 = sub_201;
  if (controller_v_447) {
    sub_163 = sub_207;
  } else {
    sub_163 = sub_164;
  };
  if (controller_air_failed_recovered) {
    v_1085 = sub_202;
  } else {
    v_1085 = sub_168;
  };
  if (controller_c_air_2) {
    v_1086 = v_1085;
  } else {
    v_1086 = sub_167;
  };
  if (controller_c_air_1) {
    v_1087 = v_1086;
  } else {
    v_1087 = sub_166;
  };
  if (controller_air_failed_recovered) {
    v_1083 = sub_168;
  } else {
    v_1083 = sub_183;
  };
  if (controller_c_air_2) {
    v_1084 = v_1083;
  } else {
    v_1084 = sub_201;
  };
  sub_211 = sub_198;
  sub_210 = sub_211;
  if (controller_c_air_1) {
    v_1109 = v_1108;
    sub_209 = sub_210;
  } else {
    v_1109 = sub_210;
    sub_209 = v_1084;
  };
  if (controller_v_445) {
    sub_208 = v_1087;
  } else {
    sub_208 = sub_209;
  };
  if (controller_air_failed_recovered) {
    v_1081 = sub_198;
  } else {
    v_1081 = sub_168;
  };
  if (controller_c_air_2) {
    v_1082 = v_1081;
  } else {
    v_1082 = sub_167;
  };
  if (controller_c_air_1) {
    sub_212 = v_1082;
  } else {
    sub_212 = sub_166;
  };
  if (controller_v_445) {
    v_1110 = v_1109;
  } else {
    v_1110 = sub_212;
  };
  if (controller_v_447) {
    v_1111 = v_1110;
  } else {
    v_1111 = sub_208;
  };
  if (controller_v_446) {
    sub_162 = v_1111;
  } else {
    sub_162 = sub_163;
  };
  if (controller_v_407) {
    v_1172 = sub_162;
  } else {
    v_1172 = sub_99;
  };
  if (controller_v_408) {
    v_1173 = v_1172;
  } else {
    v_1173 = sub_3;
  };
  sub_219 = sub_143;
  sub_218 = sub_219;
  if (controller_air_failed_recovered) {
    v_1071 = sub_218;
  } else {
    v_1071 = sub_106;
  };
  if (controller_c_air_2) {
    v_1072 = v_1071;
  } else {
    v_1072 = sub_105;
  };
  if (controller_c_air_1) {
    sub_217 = sub_104;
  } else {
    sub_217 = v_1072;
  };
  if (controller_c_pc) {
    v_1070 = sub_134;
  } else {
    v_1070 = sub_152;
  };
  if (controller_c_window) {
    sub_222 = v_1070;
  } else {
    sub_222 = sub_151;
  };
  sub_221 = sub_222;
  sub_220 = sub_221;
  if (controller_air_failed_recovered) {
    v_1073 = sub_106;
  } else {
    v_1073 = sub_220;
  };
  if (controller_c_pc) {
    v_1069 = sub_79;
  } else {
    v_1069 = sub_144;
  };
  if (controller_c_window) {
    sub_226 = v_1069;
  } else {
    sub_226 = sub_147;
  };
  sub_225 = sub_226;
  sub_224 = sub_225;
  if (controller_air_failed_recovered) {
    v_1076 = sub_106;
  } else {
    v_1076 = sub_224;
  };
  sub_223 = sub_224;
  if (controller_c_air_2) {
    v_1074 = v_1073;
  } else {
    v_1074 = sub_223;
  };
  sub_228 = sub_218;
  if (controller_c_air_2) {
    v_1077 = v_1076;
  } else {
    v_1077 = sub_228;
  };
  sub_227 = sub_228;
  if (controller_c_air_1) {
    v_1075 = v_1074;
  } else {
    v_1075 = sub_227;
  };
  if (controller_v_445) {
    sub_216 = v_1075;
  } else {
    sub_216 = sub_217;
  };
  sub_230 = sub_223;
  sub_229 = sub_230;
  if (controller_v_447) {
    sub_215 = sub_229;
  } else {
    sub_215 = sub_216;
  };
  if (controller_air_failed_recovered) {
    v_1066 = sub_224;
  } else {
    v_1066 = sub_106;
  };
  if (controller_c_air_2) {
    v_1067 = v_1066;
  } else {
    v_1067 = sub_105;
  };
  if (controller_c_air_1) {
    v_1068 = v_1067;
  } else {
    v_1068 = sub_104;
  };
  if (controller_air_failed_recovered) {
    v_1064 = sub_106;
  } else {
    v_1064 = sub_218;
  };
  if (controller_c_air_2) {
    v_1065 = v_1064;
  } else {
    v_1065 = sub_223;
  };
  sub_234 = sub_220;
  sub_233 = sub_234;
  if (controller_c_air_1) {
    v_1078 = v_1077;
    sub_232 = sub_233;
  } else {
    v_1078 = sub_233;
    sub_232 = v_1065;
  };
  if (controller_v_445) {
    sub_231 = v_1068;
  } else {
    sub_231 = sub_232;
  };
  if (controller_air_failed_recovered) {
    v_1062 = sub_220;
  } else {
    v_1062 = sub_106;
  };
  if (controller_c_air_2) {
    v_1063 = v_1062;
  } else {
    v_1063 = sub_105;
  };
  if (controller_c_air_1) {
    sub_235 = v_1063;
  } else {
    sub_235 = sub_104;
  };
  if (controller_v_445) {
    v_1079 = v_1078;
  } else {
    v_1079 = sub_235;
  };
  if (controller_v_447) {
    v_1080 = v_1079;
  } else {
    v_1080 = sub_231;
  };
  if (controller_v_446) {
    sub_214 = v_1080;
  } else {
    sub_214 = sub_215;
  };
  sub_213 = sub_214;
  sub_241 = sub_194;
  sub_240 = sub_241;
  if (controller_air_failed_recovered) {
    v_1052 = sub_240;
  } else {
    v_1052 = sub_168;
  };
  if (controller_c_air_2) {
    v_1053 = v_1052;
  } else {
    v_1053 = sub_167;
  };
  if (controller_c_air_1) {
    sub_239 = sub_166;
  } else {
    sub_239 = v_1053;
  };
  if (controller_c_pc) {
    v_1051 = sub_42;
  } else {
    v_1051 = sub_64;
  };
  if (controller_c_window) {
    sub_244 = v_1051;
  } else {
    sub_244 = sub_63;
  };
  sub_243 = sub_244;
  sub_242 = sub_243;
  if (controller_air_failed_recovered) {
    v_1054 = sub_168;
  } else {
    v_1054 = sub_242;
  };
  sub_247 = sub_205;
  sub_246 = sub_247;
  if (controller_air_failed_recovered) {
    v_1057 = sub_168;
  } else {
    v_1057 = sub_246;
  };
  sub_245 = sub_246;
  if (controller_c_air_2) {
    v_1055 = v_1054;
  } else {
    v_1055 = sub_245;
  };
  sub_249 = sub_240;
  if (controller_c_air_2) {
    v_1058 = v_1057;
  } else {
    v_1058 = sub_249;
  };
  sub_248 = sub_249;
  if (controller_c_air_1) {
    v_1056 = v_1055;
  } else {
    v_1056 = sub_248;
  };
  if (controller_v_445) {
    sub_238 = v_1056;
  } else {
    sub_238 = sub_239;
  };
  sub_251 = sub_245;
  sub_250 = sub_251;
  if (controller_v_447) {
    sub_237 = sub_250;
  } else {
    sub_237 = sub_238;
  };
  if (controller_air_failed_recovered) {
    v_1048 = sub_246;
  } else {
    v_1048 = sub_168;
  };
  if (controller_c_air_2) {
    v_1049 = v_1048;
  } else {
    v_1049 = sub_167;
  };
  if (controller_c_air_1) {
    v_1050 = v_1049;
  } else {
    v_1050 = sub_166;
  };
  if (controller_air_failed_recovered) {
    v_1046 = sub_168;
  } else {
    v_1046 = sub_240;
  };
  if (controller_c_air_2) {
    v_1047 = v_1046;
  } else {
    v_1047 = sub_245;
  };
  sub_255 = sub_242;
  sub_254 = sub_255;
  if (controller_c_air_1) {
    v_1059 = v_1058;
    sub_253 = sub_254;
  } else {
    v_1059 = sub_254;
    sub_253 = v_1047;
  };
  if (controller_v_445) {
    sub_252 = v_1050;
  } else {
    sub_252 = sub_253;
  };
  if (controller_air_failed_recovered) {
    v_1044 = sub_242;
  } else {
    v_1044 = sub_168;
  };
  if (controller_c_air_2) {
    v_1045 = v_1044;
  } else {
    v_1045 = sub_167;
  };
  if (controller_c_air_1) {
    sub_256 = v_1045;
  } else {
    sub_256 = sub_166;
  };
  if (controller_v_445) {
    v_1060 = v_1059;
  } else {
    v_1060 = sub_256;
  };
  if (controller_v_447) {
    v_1061 = v_1060;
  } else {
    v_1061 = sub_252;
  };
  if (controller_v_446) {
    sub_236 = v_1061;
  } else {
    sub_236 = sub_237;
  };
  if (controller_v_407) {
    v_1174 = sub_236;
  } else {
    v_1174 = sub_213;
  };
  if (controller_v_408) {
    v_1175 = v_1174;
  } else {
    v_1175 = sub_92;
  };
  if (controller_light_failed_recovered) {
    sub_2 = v_1173;
  } else {
    sub_2 = v_1175;
  };
  sub_1 = sub_2;
  sub_271 = sub_117;
  if (controller_change_shift) {
    v_1032 = sub_178;
    sub_270 = sub_271;
  } else {
    v_1032 = sub_271;
    sub_270 = sub_178;
  };
  if (controller_ck_1) {
    sub_269 = v_1032;
  } else {
    sub_269 = sub_270;
  };
  if (controller_c_pc) {
    v_1033 = sub_111;
  } else {
    v_1033 = sub_269;
  };
  sub_273 = sub_153;
  sub_272 = sub_273;
  if (controller_c_window) {
    v_1034 = sub_179;
    sub_268 = v_1033;
  } else {
    v_1034 = sub_272;
    sub_268 = sub_272;
  };
  if (controller_v_392) {
    v_1035 = v_1034;
  } else {
    v_1035 = sub_268;
  };
  if (controller_blind_failed_recovered) {
    sub_267 = sub_268;
  } else {
    sub_267 = v_1035;
  };
  if (controller_c_door) {
    v_1036 = sub_181;
    sub_266 = sub_267;
  } else {
    v_1036 = sub_267;
    sub_266 = sub_181;
  };
  if (controller_ck_11_1) {
    sub_265 = v_1036;
  } else {
    sub_265 = sub_266;
  };
  sub_264 = sub_265;
  sub_263 = sub_264;
  sub_279 = sub_190;
  sub_278 = sub_279;
  if (controller_c_pc) {
    v_1029 = sub_134;
  } else {
    v_1029 = sub_278;
  };
  if (controller_c_window) {
    sub_277 = v_1029;
  } else {
    sub_277 = sub_140;
  };
  if (controller_change_shift) {
    v_1027 = sub_178;
    sub_283 = sub_190;
  } else {
    v_1027 = sub_190;
    sub_283 = sub_178;
  };
  if (controller_ck_1) {
    sub_282 = v_1027;
  } else {
    sub_282 = sub_283;
  };
  sub_281 = sub_282;
  if (controller_c_pc) {
    v_1028 = false;
  } else {
    v_1028 = sub_281;
  };
  if (controller_c_window) {
    sub_280 = v_1028;
  } else {
    sub_280 = sub_147;
  };
  if (controller_v_392) {
    v_1030 = sub_280;
  } else {
    v_1030 = sub_277;
  };
  if (controller_blind_failed_recovered) {
    sub_276 = sub_277;
  } else {
    sub_276 = v_1030;
  };
  sub_275 = sub_276;
  if (controller_air_failed_recovered) {
    v_1031 = sub_275;
  } else {
    v_1031 = sub_265;
  };
  if (controller_c_air_2) {
    sub_274 = v_1031;
  } else {
    sub_274 = sub_264;
  };
  if (controller_c_air_1) {
    sub_262 = sub_263;
  } else {
    sub_262 = sub_274;
  };
  if (controller_air_failed_recovered) {
    sub_284 = sub_265;
  } else {
    sub_284 = sub_148;
  };
  if (controller_c_pc) {
    v_1025 = sub_141;
  } else {
    v_1025 = sub_278;
  };
  if (controller_c_window) {
    sub_288 = v_1025;
  } else {
    sub_288 = sub_140;
  };
  if (controller_c_pc) {
    v_1024 = sub_79;
  } else {
    v_1024 = sub_281;
  };
  if (controller_c_window) {
    sub_289 = v_1024;
  } else {
    sub_289 = sub_147;
  };
  if (controller_v_392) {
    v_1026 = sub_289;
  } else {
    v_1026 = sub_288;
  };
  if (controller_blind_failed_recovered) {
    sub_287 = sub_288;
  } else {
    sub_287 = v_1026;
  };
  sub_286 = sub_287;
  if (controller_air_failed_recovered) {
    v_1039 = sub_265;
  } else {
    v_1039 = sub_286;
  };
  sub_285 = sub_286;
  if (controller_c_air_2) {
    v_1037 = sub_284;
  } else {
    v_1037 = sub_285;
  };
  sub_291 = sub_275;
  if (controller_c_air_2) {
    v_1040 = v_1039;
  } else {
    v_1040 = sub_291;
  };
  if (controller_c_air_1) {
    v_1041 = v_1040;
  } else {
    v_1041 = sub_158;
  };
  sub_290 = sub_291;
  if (controller_c_air_1) {
    v_1038 = v_1037;
  } else {
    v_1038 = sub_290;
  };
  if (controller_v_445) {
    sub_261 = v_1038;
  } else {
    sub_261 = sub_262;
  };
  sub_292 = sub_285;
  if (controller_v_447) {
    sub_260 = sub_292;
  } else {
    sub_260 = sub_261;
  };
  if (controller_air_failed_recovered) {
    v_1021 = sub_286;
  } else {
    v_1021 = sub_265;
  };
  if (controller_c_air_2) {
    v_1022 = v_1021;
  } else {
    v_1022 = sub_264;
  };
  if (controller_c_air_1) {
    v_1023 = v_1022;
  } else {
    v_1023 = sub_263;
  };
  if (controller_air_failed_recovered) {
    sub_295 = sub_265;
  } else {
    sub_295 = sub_275;
  };
  if (controller_c_air_2) {
    v_1020 = sub_295;
  } else {
    v_1020 = sub_285;
  };
  if (controller_c_air_1) {
    sub_294 = sub_158;
  } else {
    sub_294 = v_1020;
  };
  if (controller_v_445) {
    sub_293 = v_1023;
  } else {
    sub_293 = sub_294;
  };
  if (controller_air_failed_recovered) {
    v_1018 = sub_148;
  } else {
    v_1018 = sub_265;
  };
  if (controller_c_air_2) {
    v_1019 = v_1018;
  } else {
    v_1019 = sub_264;
  };
  if (controller_c_air_1) {
    sub_296 = v_1019;
  } else {
    sub_296 = sub_263;
  };
  if (controller_v_445) {
    v_1042 = v_1041;
  } else {
    v_1042 = sub_296;
  };
  if (controller_v_447) {
    v_1043 = v_1042;
  } else {
    v_1043 = sub_293;
  };
  if (controller_v_446) {
    sub_259 = v_1043;
  } else {
    sub_259 = sub_260;
  };
  sub_258 = sub_259;
  if (controller_c_air_2) {
    v_1013 = sub_284;
  } else {
    v_1013 = sub_291;
  };
  if (controller_c_air_1) {
    v_1014 = v_1013;
  } else {
    v_1014 = sub_290;
  };
  if (controller_v_445) {
    sub_300 = v_1014;
  } else {
    sub_300 = sub_262;
  };
  if (controller_v_447) {
    sub_299 = sub_290;
  } else {
    sub_299 = sub_300;
  };
  if (controller_c_air_1) {
    v_1012 = sub_274;
  } else {
    v_1012 = sub_263;
  };
  if (controller_c_air_2) {
    sub_303 = sub_295;
  } else {
    sub_303 = sub_291;
  };
  if (controller_c_air_1) {
    v_1015 = sub_303;
  } else {
    v_1015 = sub_158;
  };
  if (controller_v_445) {
    v_1016 = v_1015;
  } else {
    v_1016 = sub_296;
  };
  if (controller_c_air_1) {
    sub_302 = sub_158;
  } else {
    sub_302 = sub_303;
  };
  if (controller_v_445) {
    sub_301 = v_1012;
  } else {
    sub_301 = sub_302;
  };
  if (controller_v_447) {
    v_1017 = v_1016;
  } else {
    v_1017 = sub_301;
  };
  if (controller_v_446) {
    sub_298 = v_1017;
  } else {
    sub_298 = sub_299;
  };
  sub_297 = sub_298;
  if (controller_v_407) {
    v_1176 = sub_258;
    sub_257 = sub_297;
  } else {
    v_1176 = sub_297;
    sub_257 = sub_258;
  };
  if (controller_v_408) {
    v_1177 = v_1176;
  } else {
    v_1177 = sub_257;
  };
  if (controller_air_failed_recovered) {
    v_1004 = sub_265;
  } else {
    v_1004 = sub_220;
  };
  sub_309 = sub_280;
  sub_308 = sub_309;
  if (controller_air_failed_recovered) {
    v_1002 = sub_308;
  } else {
    v_1002 = sub_265;
  };
  if (controller_c_air_2) {
    v_1003 = v_1002;
  } else {
    v_1003 = sub_264;
  };
  if (controller_c_air_1) {
    sub_307 = sub_263;
  } else {
    sub_307 = v_1003;
  };
  sub_312 = sub_289;
  sub_311 = sub_312;
  if (controller_air_failed_recovered) {
    v_1007 = sub_265;
  } else {
    v_1007 = sub_311;
  };
  sub_310 = sub_311;
  if (controller_c_air_2) {
    v_1005 = v_1004;
  } else {
    v_1005 = sub_310;
  };
  sub_313 = sub_308;
  if (controller_c_air_2) {
    v_1008 = v_1007;
  } else {
    v_1008 = sub_313;
  };
  if (controller_c_air_1) {
    v_1009 = v_1008;
    v_1006 = v_1005;
  } else {
    v_1009 = sub_233;
    v_1006 = sub_313;
  };
  if (controller_v_445) {
    sub_306 = v_1006;
  } else {
    sub_306 = sub_307;
  };
  sub_314 = sub_310;
  if (controller_v_447) {
    sub_305 = sub_314;
  } else {
    sub_305 = sub_306;
  };
  if (controller_air_failed_recovered) {
    v_999 = sub_311;
  } else {
    v_999 = sub_265;
  };
  if (controller_c_air_2) {
    v_1000 = v_999;
  } else {
    v_1000 = sub_264;
  };
  if (controller_c_air_1) {
    v_1001 = v_1000;
  } else {
    v_1001 = sub_263;
  };
  if (controller_air_failed_recovered) {
    v_997 = sub_265;
  } else {
    v_997 = sub_308;
  };
  if (controller_c_air_2) {
    v_998 = v_997;
  } else {
    v_998 = sub_310;
  };
  if (controller_c_air_1) {
    sub_316 = sub_233;
  } else {
    sub_316 = v_998;
  };
  if (controller_v_445) {
    sub_315 = v_1001;
  } else {
    sub_315 = sub_316;
  };
  if (controller_air_failed_recovered) {
    v_995 = sub_220;
  } else {
    v_995 = sub_265;
  };
  if (controller_c_air_2) {
    v_996 = v_995;
  } else {
    v_996 = sub_264;
  };
  if (controller_c_air_1) {
    sub_317 = v_996;
  } else {
    sub_317 = sub_263;
  };
  if (controller_v_445) {
    v_1010 = v_1009;
  } else {
    v_1010 = sub_317;
  };
  if (controller_v_447) {
    v_1011 = v_1010;
  } else {
    v_1011 = sub_315;
  };
  if (controller_v_446) {
    sub_304 = v_1011;
  } else {
    sub_304 = sub_305;
  };
  if (controller_v_408) {
    v_1178 = sub_304;
  } else {
    v_1178 = sub_297;
  };
  if (controller_light_failed_recovered) {
    v_1179 = v_1177;
  } else {
    v_1179 = v_1178;
  };
  if (controller_c_window) {
    v_982 = sub_34;
    sub_329 = sub_110;
  } else {
    v_982 = sub_272;
    sub_329 = sub_272;
  };
  if (controller_v_392) {
    v_983 = v_982;
  } else {
    v_983 = sub_329;
  };
  if (controller_blind_failed_recovered) {
    sub_328 = sub_329;
  } else {
    sub_328 = v_983;
  };
  if (controller_c_door) {
    v_984 = sub_36;
    sub_327 = sub_328;
  } else {
    v_984 = sub_328;
    sub_327 = sub_36;
  };
  if (controller_ck_11_1) {
    sub_326 = v_984;
  } else {
    sub_326 = sub_327;
  };
  sub_325 = sub_326;
  sub_324 = sub_325;
  if (controller_change_shift) {
    v_979 = sub_49;
    sub_335 = sub_137;
  } else {
    v_979 = sub_137;
    sub_335 = sub_49;
  };
  if (controller_ck_1) {
    sub_334 = v_979;
  } else {
    sub_334 = sub_335;
  };
  sub_333 = sub_334;
  if (controller_c_pc) {
    v_980 = sub_42;
  } else {
    v_980 = sub_333;
  };
  sub_336 = sub_69;
  if (controller_c_window) {
    sub_332 = v_980;
  } else {
    sub_332 = sub_336;
  };
  if (controller_v_392) {
    v_981 = sub_143;
  } else {
    v_981 = sub_332;
  };
  if (controller_blind_failed_recovered) {
    sub_331 = sub_332;
  } else {
    sub_331 = v_981;
  };
  sub_330 = sub_331;
  if (controller_air_failed_recovered) {
    v_985 = sub_330;
  } else {
    v_985 = sub_326;
  };
  if (controller_c_air_2) {
    v_986 = v_985;
  } else {
    v_986 = sub_325;
  };
  if (controller_c_air_1) {
    sub_323 = sub_324;
  } else {
    sub_323 = v_986;
  };
  if (controller_c_pc) {
    v_978 = sub_192;
  } else {
    v_978 = sub_152;
  };
  if (controller_c_window) {
    sub_339 = v_978;
  } else {
    sub_339 = sub_151;
  };
  sub_338 = sub_339;
  sub_337 = sub_338;
  if (controller_air_failed_recovered) {
    v_987 = sub_326;
  } else {
    v_987 = sub_337;
  };
  if (controller_c_pc) {
    v_976 = sub_69;
  } else {
    v_976 = sub_333;
  };
  if (controller_c_window) {
    sub_343 = v_976;
  } else {
    sub_343 = sub_336;
  };
  if (controller_v_392) {
    v_977 = sub_226;
  } else {
    v_977 = sub_343;
  };
  if (controller_blind_failed_recovered) {
    sub_342 = sub_343;
  } else {
    sub_342 = v_977;
  };
  sub_341 = sub_342;
  if (controller_air_failed_recovered) {
    v_990 = sub_326;
  } else {
    v_990 = sub_341;
  };
  sub_340 = sub_341;
  if (controller_c_air_2) {
    v_988 = v_987;
  } else {
    v_988 = sub_340;
  };
  sub_344 = sub_330;
  if (controller_c_air_2) {
    v_991 = v_990;
  } else {
    v_991 = sub_344;
  };
  if (controller_c_air_1) {
    v_989 = v_988;
  } else {
    v_989 = sub_344;
  };
  if (controller_v_445) {
    sub_322 = v_989;
  } else {
    sub_322 = sub_323;
  };
  sub_345 = sub_340;
  if (controller_v_447) {
    sub_321 = sub_345;
  } else {
    sub_321 = sub_322;
  };
  if (controller_air_failed_recovered) {
    v_973 = sub_341;
  } else {
    v_973 = sub_326;
  };
  if (controller_c_air_2) {
    v_974 = v_973;
  } else {
    v_974 = sub_325;
  };
  if (controller_c_air_1) {
    v_975 = v_974;
  } else {
    v_975 = sub_324;
  };
  if (controller_air_failed_recovered) {
    v_971 = sub_326;
  } else {
    v_971 = sub_330;
  };
  if (controller_c_air_2) {
    v_972 = v_971;
  } else {
    v_972 = sub_340;
  };
  sub_349 = sub_337;
  sub_348 = sub_349;
  if (controller_c_air_1) {
    v_992 = v_991;
    sub_347 = sub_348;
  } else {
    v_992 = sub_348;
    sub_347 = v_972;
  };
  if (controller_v_445) {
    sub_346 = v_975;
  } else {
    sub_346 = sub_347;
  };
  if (controller_air_failed_recovered) {
    v_969 = sub_337;
  } else {
    v_969 = sub_326;
  };
  if (controller_c_air_2) {
    v_970 = v_969;
  } else {
    v_970 = sub_325;
  };
  if (controller_c_air_1) {
    sub_350 = v_970;
  } else {
    sub_350 = sub_324;
  };
  if (controller_v_445) {
    v_993 = v_992;
  } else {
    v_993 = sub_350;
  };
  if (controller_v_447) {
    v_994 = v_993;
  } else {
    v_994 = sub_346;
  };
  if (controller_v_446) {
    sub_320 = v_994;
  } else {
    sub_320 = sub_321;
  };
  sub_319 = sub_320;
  if (controller_ck_1) {
    sub_363 = sub_128;
  } else {
    sub_363 = sub_129;
  };
  sub_362 = sub_363;
  sub_361 = sub_362;
  if (controller_c_window) {
    v_960 = sub_179;
    sub_360 = sub_172;
  } else {
    v_960 = sub_361;
    sub_360 = sub_361;
  };
  if (controller_v_392) {
    v_961 = v_960;
  } else {
    v_961 = sub_360;
  };
  if (controller_blind_failed_recovered) {
    sub_359 = sub_360;
  } else {
    sub_359 = v_961;
  };
  if (controller_c_door) {
    v_962 = sub_181;
    sub_358 = sub_359;
  } else {
    v_962 = sub_359;
    sub_358 = sub_181;
  };
  if (controller_ck_11_1) {
    sub_357 = v_962;
  } else {
    sub_357 = sub_358;
  };
  if (controller_air_failed_recovered) {
    v_963 = sub_357;
  } else {
    v_963 = sub_60;
  };
  sub_356 = sub_357;
  sub_355 = sub_356;
  sub_368 = sub_189;
  if (controller_c_pc) {
    v_957 = sub_42;
  } else {
    v_957 = sub_368;
  };
  if (controller_c_window) {
    sub_367 = v_957;
  } else {
    sub_367 = sub_50;
  };
  if (controller_v_392) {
    v_958 = sub_194;
  } else {
    v_958 = sub_367;
  };
  if (controller_blind_failed_recovered) {
    sub_366 = sub_367;
  } else {
    sub_366 = v_958;
  };
  sub_365 = sub_366;
  if (controller_air_failed_recovered) {
    v_959 = sub_365;
  } else {
    v_959 = sub_357;
  };
  if (controller_c_air_2) {
    sub_364 = v_959;
  } else {
    sub_364 = sub_356;
  };
  if (controller_c_air_1) {
    sub_354 = sub_355;
  } else {
    sub_354 = sub_364;
  };
  sub_369 = sub_365;
  if (controller_c_air_2) {
    v_964 = v_963;
  } else {
    v_964 = sub_369;
  };
  sub_370 = sub_369;
  if (controller_c_air_1) {
    v_965 = v_964;
  } else {
    v_965 = sub_370;
  };
  if (controller_v_445) {
    sub_353 = v_965;
  } else {
    sub_353 = sub_354;
  };
  if (controller_v_447) {
    sub_352 = sub_370;
  } else {
    sub_352 = sub_353;
  };
  if (controller_c_air_1) {
    v_956 = sub_364;
  } else {
    v_956 = sub_355;
  };
  if (controller_air_failed_recovered) {
    v_955 = sub_357;
  } else {
    v_955 = sub_365;
  };
  if (controller_c_air_2) {
    sub_373 = v_955;
  } else {
    sub_373 = sub_369;
  };
  if (controller_c_air_1) {
    v_966 = sub_373;
    sub_372 = sub_88;
  } else {
    v_966 = sub_88;
    sub_372 = sub_373;
  };
  if (controller_v_445) {
    sub_371 = v_956;
  } else {
    sub_371 = sub_372;
  };
  if (controller_air_failed_recovered) {
    v_953 = sub_60;
  } else {
    v_953 = sub_357;
  };
  if (controller_c_air_2) {
    v_954 = v_953;
  } else {
    v_954 = sub_356;
  };
  if (controller_c_air_1) {
    sub_374 = v_954;
  } else {
    sub_374 = sub_355;
  };
  if (controller_v_445) {
    v_967 = v_966;
  } else {
    v_967 = sub_374;
  };
  if (controller_v_447) {
    v_968 = v_967;
  } else {
    v_968 = sub_371;
  };
  if (controller_v_446) {
    sub_351 = v_968;
  } else {
    sub_351 = sub_352;
  };
  if (controller_v_407) {
    sub_318 = sub_351;
  } else {
    sub_318 = sub_319;
  };
  if (controller_c_pc) {
    v_943 = sub_57;
  } else {
    v_943 = sub_281;
  };
  if (controller_c_window) {
    v_944 = v_943;
  } else {
    v_944 = sub_147;
  };
  if (controller_c_pc) {
    v_942 = sub_192;
  } else {
    v_942 = sub_278;
  };
  if (controller_c_window) {
    sub_381 = v_942;
  } else {
    sub_381 = sub_140;
  };
  if (controller_v_392) {
    v_945 = v_944;
  } else {
    v_945 = sub_381;
  };
  if (controller_blind_failed_recovered) {
    sub_380 = sub_381;
  } else {
    sub_380 = v_945;
  };
  sub_379 = sub_380;
  if (controller_air_failed_recovered) {
    v_948 = sub_265;
  } else {
    v_948 = sub_379;
  };
  if (controller_c_air_2) {
    v_949 = v_948;
  } else {
    v_949 = sub_291;
  };
  if (controller_c_air_1) {
    v_950 = v_949;
  } else {
    v_950 = sub_158;
  };
  if (controller_v_445) {
    v_951 = v_950;
  } else {
    v_951 = sub_296;
  };
  sub_378 = sub_379;
  if (controller_c_air_2) {
    v_946 = sub_284;
  } else {
    v_946 = sub_378;
  };
  if (controller_c_air_1) {
    v_947 = v_946;
  } else {
    v_947 = sub_290;
  };
  if (controller_v_445) {
    sub_377 = v_947;
  } else {
    sub_377 = sub_262;
  };
  sub_382 = sub_378;
  if (controller_v_447) {
    sub_376 = sub_382;
  } else {
    sub_376 = sub_377;
  };
  if (controller_air_failed_recovered) {
    v_939 = sub_379;
  } else {
    v_939 = sub_265;
  };
  if (controller_c_air_2) {
    v_940 = v_939;
  } else {
    v_940 = sub_264;
  };
  if (controller_c_air_1) {
    v_941 = v_940;
  } else {
    v_941 = sub_263;
  };
  if (controller_c_air_2) {
    v_938 = sub_295;
  } else {
    v_938 = sub_378;
  };
  if (controller_c_air_1) {
    sub_384 = sub_158;
  } else {
    sub_384 = v_938;
  };
  if (controller_v_445) {
    sub_383 = v_941;
  } else {
    sub_383 = sub_384;
  };
  if (controller_v_447) {
    v_952 = v_951;
  } else {
    v_952 = sub_383;
  };
  if (controller_v_446) {
    sub_375 = v_952;
  } else {
    sub_375 = sub_376;
  };
  if (controller_v_407) {
    v_1180 = sub_375;
  } else {
    v_1180 = sub_297;
  };
  if (controller_v_408) {
    v_1181 = v_1180;
  } else {
    v_1181 = sub_318;
  };
  if (controller_air_failed_recovered) {
    v_933 = sub_326;
  } else {
    v_933 = sub_224;
  };
  if (controller_c_air_2) {
    v_934 = v_933;
  } else {
    v_934 = sub_228;
  };
  if (controller_c_air_1) {
    v_935 = v_934;
  } else {
    v_935 = sub_233;
  };
  if (controller_air_failed_recovered) {
    v_930 = sub_326;
  } else {
    v_930 = sub_220;
  };
  if (controller_c_air_2) {
    v_931 = v_930;
  } else {
    v_931 = sub_223;
  };
  if (controller_c_air_1) {
    v_932 = v_931;
  } else {
    v_932 = sub_227;
  };
  if (controller_air_failed_recovered) {
    v_928 = sub_218;
  } else {
    v_928 = sub_326;
  };
  if (controller_c_air_2) {
    v_929 = v_928;
  } else {
    v_929 = sub_325;
  };
  if (controller_c_air_1) {
    sub_389 = sub_324;
  } else {
    sub_389 = v_929;
  };
  if (controller_v_445) {
    sub_388 = v_932;
  } else {
    sub_388 = sub_389;
  };
  if (controller_v_447) {
    sub_387 = sub_229;
  } else {
    sub_387 = sub_388;
  };
  if (controller_air_failed_recovered) {
    v_925 = sub_224;
  } else {
    v_925 = sub_326;
  };
  if (controller_c_air_2) {
    v_926 = v_925;
  } else {
    v_926 = sub_325;
  };
  if (controller_c_air_1) {
    v_927 = v_926;
  } else {
    v_927 = sub_324;
  };
  if (controller_air_failed_recovered) {
    v_923 = sub_326;
  } else {
    v_923 = sub_218;
  };
  if (controller_c_air_2) {
    v_924 = v_923;
  } else {
    v_924 = sub_223;
  };
  if (controller_c_air_1) {
    sub_391 = sub_233;
  } else {
    sub_391 = v_924;
  };
  if (controller_v_445) {
    sub_390 = v_927;
  } else {
    sub_390 = sub_391;
  };
  if (controller_air_failed_recovered) {
    v_921 = sub_220;
  } else {
    v_921 = sub_326;
  };
  if (controller_c_air_2) {
    v_922 = v_921;
  } else {
    v_922 = sub_325;
  };
  if (controller_c_air_1) {
    sub_392 = v_922;
  } else {
    sub_392 = sub_324;
  };
  if (controller_v_445) {
    v_936 = v_935;
  } else {
    v_936 = sub_392;
  };
  if (controller_v_447) {
    v_937 = v_936;
  } else {
    v_937 = sub_390;
  };
  if (controller_v_446) {
    sub_386 = v_937;
  } else {
    sub_386 = sub_387;
  };
  sub_385 = sub_386;
  if (controller_air_failed_recovered) {
    v_916 = sub_357;
  } else {
    v_916 = sub_246;
  };
  if (controller_c_air_2) {
    v_917 = v_916;
  } else {
    v_917 = sub_249;
  };
  if (controller_c_air_1) {
    v_918 = v_917;
  } else {
    v_918 = sub_254;
  };
  if (controller_air_failed_recovered) {
    v_913 = sub_357;
  } else {
    v_913 = sub_242;
  };
  if (controller_c_air_2) {
    v_914 = v_913;
  } else {
    v_914 = sub_245;
  };
  if (controller_c_air_1) {
    v_915 = v_914;
  } else {
    v_915 = sub_248;
  };
  if (controller_air_failed_recovered) {
    v_911 = sub_240;
  } else {
    v_911 = sub_357;
  };
  if (controller_c_air_2) {
    v_912 = v_911;
  } else {
    v_912 = sub_356;
  };
  if (controller_c_air_1) {
    sub_396 = sub_355;
  } else {
    sub_396 = v_912;
  };
  if (controller_v_445) {
    sub_395 = v_915;
  } else {
    sub_395 = sub_396;
  };
  if (controller_v_447) {
    sub_394 = sub_250;
  } else {
    sub_394 = sub_395;
  };
  if (controller_air_failed_recovered) {
    v_908 = sub_246;
  } else {
    v_908 = sub_357;
  };
  if (controller_c_air_2) {
    v_909 = v_908;
  } else {
    v_909 = sub_356;
  };
  if (controller_c_air_1) {
    v_910 = v_909;
  } else {
    v_910 = sub_355;
  };
  if (controller_air_failed_recovered) {
    v_906 = sub_357;
  } else {
    v_906 = sub_240;
  };
  if (controller_c_air_2) {
    v_907 = v_906;
  } else {
    v_907 = sub_245;
  };
  if (controller_c_air_1) {
    sub_398 = sub_254;
  } else {
    sub_398 = v_907;
  };
  if (controller_v_445) {
    sub_397 = v_910;
  } else {
    sub_397 = sub_398;
  };
  if (controller_air_failed_recovered) {
    v = sub_242;
  } else {
    v = sub_357;
  };
  if (controller_c_air_2) {
    v_905 = v;
  } else {
    v_905 = sub_356;
  };
  if (controller_c_air_1) {
    sub_399 = v_905;
  } else {
    sub_399 = sub_355;
  };
  if (controller_v_445) {
    v_919 = v_918;
  } else {
    v_919 = sub_399;
  };
  if (controller_v_447) {
    v_920 = v_919;
  } else {
    v_920 = sub_397;
  };
  if (controller_v_446) {
    sub_393 = v_920;
  } else {
    sub_393 = sub_394;
  };
  if (controller_v_407) {
    v_1182 = sub_393;
  } else {
    v_1182 = sub_385;
  };
  if (controller_v_408) {
    v_1183 = v_1182;
  } else {
    v_1183 = sub_297;
  };
  if (controller_light_failed_recovered) {
    v_1184 = v_1181;
  } else {
    v_1184 = v_1183;
  };
  if (controller_light_switch) {
    v_1185 = v_1179;
  } else {
    v_1185 = v_1184;
  };
  if (p_controller_c_light_1) {
    sub_0 = v_1185;
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
  int controller_pnr_9, int controller_ck_11_1, int controller_pnr_8,
  int controller_ck_13_1, int controller_pnr_7, int controller_ck_15_1,
  int controller_pnr_6, int controller_ck_17_1, int controller_pnr_5,
  int controller_ck_19_1, int controller_pnr_4, int controller_ck_21_1,
  int controller_pnr_3, int controller_v_447, int controller_v_446,
  int controller_v_445, int controller_pnr_2, int controller_v_408,
  int controller_v_407, int controller_pnr_1, int controller_v_392,
  int controller_v_391, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_air_2, int controller_c_air_1, int controller_c_window,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_closet_out* _out) {
  
  int v_1248;
  int v_1247;
  int v_1246;
  int v_1245;
  int v_1244;
  int v_1243;
  int v_1242;
  int v_1241;
  int v_1240;
  int v_1239;
  int v_1238;
  int v_1237;
  int v_1236;
  int v_1235;
  int v_1234;
  int v_1233;
  int v_1232;
  int v_1231;
  int v_1230;
  int v_1229;
  int v_1228;
  int v_1227;
  int v_1226;
  int v_1225;
  int v_1224;
  int v_1223;
  int v_1222;
  int v_1221;
  int v_1220;
  int v_1219;
  int v_1218;
  int v_1217;
  int v_1216;
  int v_1215;
  int v_1214;
  int v_1213;
  int v_1212;
  int v_1211;
  int v_1210;
  int v_1209;
  int v_1208;
  int v_1207;
  int v_1206;
  int v_1205;
  int v_1204;
  int v_1203;
  int v_1202;
  int v_1201;
  int v_1200;
  int v_1199;
  int v_1198;
  int v_1197;
  int v_1196;
  int v_1195;
  int v_1194;
  int v_1193;
  int v_1192;
  int v_1191;
  int v_1190;
  int v_1189;
  int v_1188;
  int v_1187;
  int v_1186;
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
  sub_19 = p_controller_c_closet;
  if (controller_ck_17_1) {
    sub_18 = sub_19;
    sub_20 = false;
  } else {
    sub_18 = false;
    sub_20 = sub_19;
  };
  if (controller_cleaner) {
    sub_17 = sub_18;
  } else {
    sub_17 = sub_20;
  };
  sub_21 = sub_19;
  if (controller_worker) {
    v_1230 = sub_21;
    sub_16 = sub_17;
  } else {
    v_1230 = sub_17;
    sub_16 = sub_21;
  };
  if (controller_ck_15_1) {
    sub_15 = v_1230;
  } else {
    sub_15 = sub_16;
  };
  if (controller_change_shift) {
    v_1231 = false;
    sub_14 = sub_15;
  } else {
    v_1231 = sub_15;
    sub_14 = false;
  };
  if (controller_ck_1) {
    v_1232 = v_1231;
  } else {
    v_1232 = sub_14;
  };
  sub_23 = sub_21;
  if (controller_cleaner) {
    sub_26 = sub_20;
  } else {
    sub_26 = sub_18;
  };
  if (controller_worker) {
    sub_25 = sub_26;
    sub_27 = false;
  } else {
    sub_25 = false;
    sub_27 = sub_26;
  };
  if (controller_ck_15_1) {
    sub_24 = sub_27;
  } else {
    sub_24 = sub_25;
  };
  if (controller_change_shift) {
    v_1233 = sub_24;
    sub_22 = sub_23;
  } else {
    v_1233 = sub_23;
    sub_22 = sub_24;
  };
  if (controller_ck_1) {
    v_1234 = v_1233;
  } else {
    v_1234 = sub_22;
  };
  if (controller_c_pc) {
    v_1235 = v_1232;
  } else {
    v_1235 = v_1234;
  };
  sub_29 = sub_15;
  sub_28 = sub_29;
  if (controller_c_window) {
    sub_13 = v_1235;
  } else {
    sub_13 = sub_28;
  };
  if (controller_c_pc) {
    sub_30 = false;
  } else {
    sub_30 = sub_24;
  };
  if (controller_c_window) {
    v_1236 = sub_30;
  } else {
    v_1236 = sub_28;
  };
  if (controller_v_392) {
    v_1237 = v_1236;
  } else {
    v_1237 = sub_13;
  };
  if (controller_blind_failed_recovered) {
    sub_12 = sub_13;
  } else {
    sub_12 = v_1237;
  };
  if (controller_c_window) {
    sub_32 = sub_30;
  } else {
    sub_32 = false;
  };
  sub_31 = sub_32;
  if (controller_c_door) {
    v_1238 = sub_31;
    sub_11 = sub_12;
  } else {
    v_1238 = sub_12;
    sub_11 = sub_31;
  };
  if (controller_ck_11_1) {
    sub_10 = v_1238;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  if (controller_ck_15_1) {
    sub_39 = sub_25;
  } else {
    sub_39 = sub_27;
  };
  if (controller_change_shift) {
    sub_38 = false;
    sub_40 = sub_39;
  } else {
    sub_38 = sub_39;
    sub_40 = false;
  };
  if (controller_ck_1) {
    sub_37 = sub_40;
  } else {
    sub_37 = sub_38;
  };
  sub_42 = sub_26;
  sub_41 = sub_42;
  if (controller_c_pc) {
    v_1227 = sub_37;
  } else {
    v_1227 = sub_41;
  };
  sub_44 = sub_39;
  sub_43 = sub_44;
  if (controller_c_window) {
    sub_36 = v_1227;
  } else {
    sub_36 = sub_43;
  };
  if (controller_change_shift) {
    v_1225 = sub_24;
    sub_47 = sub_42;
  } else {
    v_1225 = sub_42;
    sub_47 = sub_24;
  };
  if (controller_ck_1) {
    sub_46 = v_1225;
  } else {
    sub_46 = sub_47;
  };
  if (controller_c_pc) {
    v_1226 = false;
  } else {
    v_1226 = sub_46;
  };
  if (controller_ck_1) {
    sub_49 = sub_38;
  } else {
    sub_49 = sub_40;
  };
  sub_48 = sub_49;
  if (controller_c_window) {
    sub_45 = v_1226;
  } else {
    sub_45 = sub_48;
  };
  if (controller_v_392) {
    v_1228 = sub_45;
  } else {
    v_1228 = sub_36;
  };
  if (controller_blind_failed_recovered) {
    sub_35 = sub_36;
  } else {
    sub_35 = v_1228;
  };
  sub_34 = sub_35;
  if (controller_air_failed_recovered) {
    v_1229 = sub_34;
  } else {
    v_1229 = sub_10;
  };
  if (controller_c_air_2) {
    sub_33 = v_1229;
  } else {
    sub_33 = sub_9;
  };
  if (controller_c_air_1) {
    sub_7 = sub_8;
  } else {
    sub_7 = sub_33;
  };
  v_1223 = (controller_ck_17_1&&false);
  v_1221 = !(controller_ck_17_1);
  v_1222 = (v_1221&&false);
  if (controller_cleaner) {
    sub_58 = v_1222;
  } else {
    sub_58 = v_1223;
  };
  v_1220 = (controller_ck_17_1&&sub_19);
  v_1218 = !(controller_ck_17_1);
  v_1219 = (v_1218&&sub_19);
  if (controller_cleaner) {
    sub_59 = v_1219;
  } else {
    sub_59 = v_1220;
  };
  if (controller_worker) {
    v_1224 = sub_59;
    sub_57 = sub_58;
  } else {
    v_1224 = sub_58;
    sub_57 = sub_59;
  };
  if (controller_ck_15_1) {
    sub_56 = v_1224;
  } else {
    sub_56 = sub_57;
  };
  sub_55 = sub_56;
  if (controller_c_pc) {
    sub_54 = sub_44;
  } else {
    sub_54 = sub_55;
  };
  sub_53 = sub_54;
  sub_52 = sub_53;
  sub_51 = sub_52;
  if (controller_air_failed_recovered) {
    sub_50 = sub_10;
  } else {
    sub_50 = sub_51;
  };
  if (controller_c_pc) {
    v_1216 = sub_44;
  } else {
    v_1216 = sub_41;
  };
  if (controller_c_window) {
    sub_63 = v_1216;
  } else {
    sub_63 = sub_43;
  };
  if (controller_c_pc) {
    v_1215 = sub_49;
  } else {
    v_1215 = sub_46;
  };
  if (controller_c_window) {
    sub_64 = v_1215;
  } else {
    sub_64 = sub_48;
  };
  if (controller_v_392) {
    v_1217 = sub_64;
  } else {
    v_1217 = sub_63;
  };
  if (controller_blind_failed_recovered) {
    sub_62 = sub_63;
  } else {
    sub_62 = v_1217;
  };
  sub_61 = sub_62;
  if (controller_air_failed_recovered) {
    v_1241 = sub_10;
  } else {
    v_1241 = sub_61;
  };
  sub_60 = sub_61;
  if (controller_c_air_2) {
    v_1239 = sub_50;
  } else {
    v_1239 = sub_60;
  };
  sub_66 = sub_34;
  if (controller_c_air_2) {
    v_1242 = v_1241;
  } else {
    v_1242 = sub_66;
  };
  sub_65 = sub_66;
  if (controller_c_air_1) {
    v_1240 = v_1239;
  } else {
    v_1240 = sub_65;
  };
  if (controller_v_445) {
    sub_6 = v_1240;
  } else {
    sub_6 = sub_7;
  };
  sub_67 = sub_60;
  if (controller_v_447) {
    sub_5 = sub_67;
  } else {
    sub_5 = sub_6;
  };
  if (controller_air_failed_recovered) {
    v_1212 = sub_61;
  } else {
    v_1212 = sub_10;
  };
  if (controller_c_air_2) {
    v_1213 = v_1212;
  } else {
    v_1213 = sub_9;
  };
  if (controller_c_air_1) {
    v_1214 = v_1213;
  } else {
    v_1214 = sub_8;
  };
  sub_71 = sub_51;
  sub_70 = sub_71;
  if (controller_c_air_1) {
    v_1243 = v_1242;
  } else {
    v_1243 = sub_70;
  };
  if (controller_air_failed_recovered) {
    sub_72 = sub_10;
  } else {
    sub_72 = sub_34;
  };
  if (controller_c_air_2) {
    v_1211 = sub_72;
  } else {
    v_1211 = sub_60;
  };
  if (controller_c_air_1) {
    sub_69 = sub_70;
  } else {
    sub_69 = v_1211;
  };
  if (controller_v_445) {
    sub_68 = v_1214;
  } else {
    sub_68 = sub_69;
  };
  if (controller_air_failed_recovered) {
    v_1209 = sub_51;
  } else {
    v_1209 = sub_10;
  };
  if (controller_c_air_2) {
    v_1210 = v_1209;
  } else {
    v_1210 = sub_9;
  };
  if (controller_c_air_1) {
    sub_73 = v_1210;
  } else {
    sub_73 = sub_8;
  };
  if (controller_v_445) {
    v_1244 = v_1243;
  } else {
    v_1244 = sub_73;
  };
  if (controller_v_447) {
    v_1245 = v_1244;
  } else {
    v_1245 = sub_68;
  };
  if (controller_v_446) {
    sub_4 = v_1245;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  if (controller_c_air_2) {
    v_1204 = sub_50;
  } else {
    v_1204 = sub_66;
  };
  if (controller_c_air_1) {
    v_1205 = v_1204;
  } else {
    v_1205 = sub_65;
  };
  if (controller_v_445) {
    sub_77 = v_1205;
  } else {
    sub_77 = sub_7;
  };
  if (controller_v_447) {
    sub_76 = sub_65;
  } else {
    sub_76 = sub_77;
  };
  if (controller_c_air_1) {
    v_1203 = sub_33;
  } else {
    v_1203 = sub_8;
  };
  if (controller_c_air_2) {
    sub_80 = sub_72;
  } else {
    sub_80 = sub_66;
  };
  if (controller_c_air_1) {
    v_1206 = sub_80;
  } else {
    v_1206 = sub_70;
  };
  if (controller_v_445) {
    v_1207 = v_1206;
  } else {
    v_1207 = sub_73;
  };
  if (controller_c_air_1) {
    sub_79 = sub_70;
  } else {
    sub_79 = sub_80;
  };
  if (controller_v_445) {
    sub_78 = v_1203;
  } else {
    sub_78 = sub_79;
  };
  if (controller_v_447) {
    v_1208 = v_1207;
  } else {
    v_1208 = sub_78;
  };
  if (controller_v_446) {
    sub_75 = v_1208;
  } else {
    sub_75 = sub_76;
  };
  sub_74 = sub_75;
  if (controller_v_407) {
    v_1246 = sub_3;
    sub_2 = sub_74;
  } else {
    v_1246 = sub_74;
    sub_2 = sub_3;
  };
  if (controller_v_408) {
    v_1247 = v_1246;
  } else {
    v_1247 = sub_2;
  };
  sub_86 = sub_45;
  sub_85 = sub_86;
  if (controller_air_failed_recovered) {
    v_1193 = sub_85;
  } else {
    v_1193 = sub_10;
  };
  if (controller_c_air_2) {
    v_1194 = v_1193;
  } else {
    v_1194 = sub_9;
  };
  if (controller_c_air_1) {
    sub_84 = sub_8;
  } else {
    sub_84 = v_1194;
  };
  if (controller_c_pc) {
    v_1192 = sub_37;
  } else {
    v_1192 = sub_55;
  };
  if (controller_c_window) {
    sub_89 = v_1192;
  } else {
    sub_89 = sub_54;
  };
  sub_88 = sub_89;
  sub_87 = sub_88;
  if (controller_air_failed_recovered) {
    v_1195 = sub_10;
  } else {
    v_1195 = sub_87;
  };
  sub_92 = sub_64;
  sub_91 = sub_92;
  if (controller_air_failed_recovered) {
    v_1198 = sub_10;
  } else {
    v_1198 = sub_91;
  };
  sub_90 = sub_91;
  if (controller_c_air_2) {
    v_1196 = v_1195;
  } else {
    v_1196 = sub_90;
  };
  sub_93 = sub_85;
  if (controller_c_air_2) {
    v_1199 = v_1198;
  } else {
    v_1199 = sub_93;
  };
  if (controller_c_air_1) {
    v_1197 = v_1196;
  } else {
    v_1197 = sub_93;
  };
  if (controller_v_445) {
    sub_83 = v_1197;
  } else {
    sub_83 = sub_84;
  };
  sub_94 = sub_90;
  if (controller_v_447) {
    sub_82 = sub_94;
  } else {
    sub_82 = sub_83;
  };
  if (controller_air_failed_recovered) {
    v_1189 = sub_91;
  } else {
    v_1189 = sub_10;
  };
  if (controller_c_air_2) {
    v_1190 = v_1189;
  } else {
    v_1190 = sub_9;
  };
  if (controller_c_air_1) {
    v_1191 = v_1190;
  } else {
    v_1191 = sub_8;
  };
  if (controller_air_failed_recovered) {
    v_1187 = sub_10;
  } else {
    v_1187 = sub_85;
  };
  if (controller_c_air_2) {
    v_1188 = v_1187;
  } else {
    v_1188 = sub_90;
  };
  sub_98 = sub_87;
  sub_97 = sub_98;
  if (controller_c_air_1) {
    v_1200 = v_1199;
    sub_96 = sub_97;
  } else {
    v_1200 = sub_97;
    sub_96 = v_1188;
  };
  if (controller_v_445) {
    sub_95 = v_1191;
  } else {
    sub_95 = sub_96;
  };
  if (controller_air_failed_recovered) {
    v = sub_87;
  } else {
    v = sub_10;
  };
  if (controller_c_air_2) {
    v_1186 = v;
  } else {
    v_1186 = sub_9;
  };
  if (controller_c_air_1) {
    sub_99 = v_1186;
  } else {
    sub_99 = sub_8;
  };
  if (controller_v_445) {
    v_1201 = v_1200;
  } else {
    v_1201 = sub_99;
  };
  if (controller_v_447) {
    v_1202 = v_1201;
  } else {
    v_1202 = sub_95;
  };
  if (controller_v_446) {
    sub_81 = v_1202;
  } else {
    sub_81 = sub_82;
  };
  if (controller_v_408) {
    v_1248 = sub_81;
  } else {
    v_1248 = sub_74;
  };
  if (controller_light_failed_recovered) {
    sub_1 = v_1247;
  } else {
    sub_1 = v_1248;
  };
  sub_0 = sub_1;
  _out->controller_c_closet = sub_0;;
}

void Controller_controller__controller_controller_controller_c_air_2_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered, int controller_ck_1,
  int controller_pnr_9, int controller_ck_11_1, int controller_pnr_8,
  int controller_ck_13_1, int controller_pnr_7, int controller_ck_15_1,
  int controller_pnr_6, int controller_ck_17_1, int controller_pnr_5,
  int controller_ck_19_1, int controller_pnr_4, int controller_ck_21_1,
  int controller_pnr_3, int controller_v_447, int controller_v_446,
  int controller_v_445, int controller_pnr_2, int controller_v_408,
  int controller_v_407, int controller_pnr_1, int controller_v_392,
  int controller_v_391, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_2_out* _out) {
  
  int v_1458;
  int v_1457;
  int v_1456;
  int v_1455;
  int v_1454;
  int v_1453;
  int v_1452;
  int v_1451;
  int v_1450;
  int v_1449;
  int v_1448;
  int v_1447;
  int v_1446;
  int v_1445;
  int v_1444;
  int v_1443;
  int v_1442;
  int v_1441;
  int v_1440;
  int v_1439;
  int v_1438;
  int v_1437;
  int v_1436;
  int v_1435;
  int v_1434;
  int v_1433;
  int v_1432;
  int v_1431;
  int v_1430;
  int v_1429;
  int v_1428;
  int v_1427;
  int v_1426;
  int v_1425;
  int v_1424;
  int v_1423;
  int v_1422;
  int v_1421;
  int v_1420;
  int v_1419;
  int v_1418;
  int v_1417;
  int v_1416;
  int v_1415;
  int v_1414;
  int v_1413;
  int v_1412;
  int v_1411;
  int v_1410;
  int v_1409;
  int v_1408;
  int v_1407;
  int v_1406;
  int v_1405;
  int v_1404;
  int v_1403;
  int v_1402;
  int v_1401;
  int v_1400;
  int v_1399;
  int v_1398;
  int v_1397;
  int v_1396;
  int v_1395;
  int v_1394;
  int v_1393;
  int v_1392;
  int v_1391;
  int v_1390;
  int v_1389;
  int v_1388;
  int v_1387;
  int v_1386;
  int v_1385;
  int v_1384;
  int v_1383;
  int v_1382;
  int v_1381;
  int v_1380;
  int v_1379;
  int v_1378;
  int v_1377;
  int v_1376;
  int v_1375;
  int v_1374;
  int v_1373;
  int v_1372;
  int v_1371;
  int v_1370;
  int v_1369;
  int v_1368;
  int v_1367;
  int v_1366;
  int v_1365;
  int v_1364;
  int v_1363;
  int v_1362;
  int v_1361;
  int v_1360;
  int v_1359;
  int v_1358;
  int v_1357;
  int v_1356;
  int v_1355;
  int v_1354;
  int v_1353;
  int v_1352;
  int v_1351;
  int v_1350;
  int v_1349;
  int v_1348;
  int v_1347;
  int v_1346;
  int v_1345;
  int v_1344;
  int v_1343;
  int v_1342;
  int v_1341;
  int v_1340;
  int v_1339;
  int v_1338;
  int v_1337;
  int v_1336;
  int v_1335;
  int v_1334;
  int v_1333;
  int v_1332;
  int v_1331;
  int v_1330;
  int v_1329;
  int v_1328;
  int v_1327;
  int v_1326;
  int v_1325;
  int v_1324;
  int v_1323;
  int v_1322;
  int v_1321;
  int v_1320;
  int v_1319;
  int v_1318;
  int v_1317;
  int v_1316;
  int v_1315;
  int v_1314;
  int v_1313;
  int v_1312;
  int v_1311;
  int v_1310;
  int v_1309;
  int v_1308;
  int v_1307;
  int v_1306;
  int v_1305;
  int v_1304;
  int v_1303;
  int v_1302;
  int v_1301;
  int v_1300;
  int v_1299;
  int v_1298;
  int v_1297;
  int v_1296;
  int v_1295;
  int v_1294;
  int v_1293;
  int v_1292;
  int v_1291;
  int v_1290;
  int v_1289;
  int v_1288;
  int v_1287;
  int v_1286;
  int v_1285;
  int v_1284;
  int v_1283;
  int v_1282;
  int v_1281;
  int v_1280;
  int v_1279;
  int v_1278;
  int v_1277;
  int v_1276;
  int v_1275;
  int v_1274;
  int v_1273;
  int v_1272;
  int v_1271;
  int v_1270;
  int v_1269;
  int v_1268;
  int v_1267;
  int v_1266;
  int v_1265;
  int v_1264;
  int v_1263;
  int v_1262;
  int v_1261;
  int v_1260;
  int v_1259;
  int v_1258;
  int v_1257;
  int v_1256;
  int v_1255;
  int v_1254;
  int v_1253;
  int v_1252;
  int v_1251;
  int v_1250;
  int v_1249;
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
  v_1437 = !(controller_ck_17_1);
  sub_19 = (v_1437&&false);
  sub_20 = (controller_ck_17_1&&false);
  if (controller_cleaner) {
    sub_18 = sub_19;
  } else {
    sub_18 = sub_20;
  };
  sub_21 = false;
  if (controller_worker) {
    v_1438 = sub_21;
    sub_17 = sub_18;
  } else {
    v_1438 = sub_18;
    sub_17 = sub_21;
  };
  if (controller_ck_15_1) {
    sub_16 = v_1438;
  } else {
    sub_16 = sub_17;
  };
  if (controller_change_shift) {
    v_1439 = false;
    sub_15 = sub_16;
  } else {
    v_1439 = sub_16;
    sub_15 = false;
  };
  if (controller_ck_1) {
    sub_14 = v_1439;
  } else {
    sub_14 = sub_15;
  };
  sub_23 = sub_21;
  if (controller_cleaner) {
    sub_26 = sub_20;
  } else {
    sub_26 = sub_19;
  };
  if (controller_worker) {
    sub_25 = sub_26;
    sub_27 = false;
  } else {
    sub_25 = false;
    sub_27 = sub_26;
  };
  if (controller_ck_15_1) {
    sub_24 = sub_27;
  } else {
    sub_24 = sub_25;
  };
  if (controller_change_shift) {
    v_1440 = sub_24;
    sub_22 = sub_23;
  } else {
    v_1440 = sub_23;
    sub_22 = sub_24;
  };
  if (controller_ck_1) {
    v_1441 = v_1440;
  } else {
    v_1441 = sub_22;
  };
  if (controller_c_pc) {
    v_1442 = sub_14;
  } else {
    v_1442 = v_1441;
  };
  sub_29 = sub_16;
  sub_28 = sub_29;
  if (controller_c_window) {
    sub_13 = v_1442;
  } else {
    sub_13 = sub_28;
  };
  if (controller_c_pc) {
    sub_30 = false;
  } else {
    sub_30 = sub_24;
  };
  if (controller_c_window) {
    v_1443 = sub_30;
  } else {
    v_1443 = sub_28;
  };
  if (controller_v_392) {
    v_1444 = v_1443;
  } else {
    v_1444 = sub_13;
  };
  if (controller_blind_failed_recovered) {
    sub_12 = sub_13;
  } else {
    sub_12 = v_1444;
  };
  if (controller_c_window) {
    sub_32 = sub_30;
  } else {
    sub_32 = false;
  };
  sub_31 = sub_32;
  if (controller_c_door) {
    v_1445 = sub_31;
    sub_11 = sub_12;
  } else {
    v_1445 = sub_12;
    sub_11 = sub_31;
  };
  if (controller_ck_11_1) {
    sub_10 = v_1445;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  v_1429 = !(controller_ck_17_1);
  sub_42 = (v_1429||false);
  sub_43 = (controller_ck_17_1||false);
  if (controller_cleaner) {
    sub_41 = sub_42;
  } else {
    sub_41 = sub_43;
  };
  if (controller_worker) {
    sub_40 = false;
    sub_44 = sub_41;
  } else {
    sub_40 = sub_41;
    sub_44 = false;
  };
  if (controller_ck_15_1) {
    sub_39 = sub_44;
  } else {
    sub_39 = sub_40;
  };
  if (controller_change_shift) {
    v_1430 = sub_39;
    sub_38 = sub_16;
  } else {
    v_1430 = sub_16;
    sub_38 = sub_39;
  };
  if (controller_ck_1) {
    sub_37 = v_1430;
  } else {
    sub_37 = sub_38;
  };
  if (controller_worker) {
    sub_47 = sub_26;
    sub_48 = sub_41;
  } else {
    sub_47 = sub_41;
    sub_48 = sub_26;
  };
  if (controller_ck_15_1) {
    sub_46 = sub_48;
  } else {
    sub_46 = sub_47;
  };
  if (controller_change_shift) {
    v_1431 = sub_46;
    sub_45 = sub_23;
  } else {
    v_1431 = sub_23;
    sub_45 = sub_46;
  };
  if (controller_ck_1) {
    v_1432 = v_1431;
  } else {
    v_1432 = sub_45;
  };
  if (controller_c_pc) {
    v_1433 = sub_37;
  } else {
    v_1433 = v_1432;
  };
  if (controller_c_window) {
    sub_36 = v_1433;
  } else {
    sub_36 = sub_28;
  };
  if (controller_change_shift) {
    v_1428 = sub_24;
    sub_52 = sub_46;
  } else {
    v_1428 = sub_46;
    sub_52 = sub_24;
  };
  if (controller_ck_1) {
    sub_51 = v_1428;
  } else {
    sub_51 = sub_52;
  };
  if (controller_c_pc) {
    sub_50 = false;
  } else {
    sub_50 = sub_51;
  };
  if (controller_c_window) {
    sub_49 = sub_50;
  } else {
    sub_49 = sub_28;
  };
  if (controller_v_392) {
    v_1434 = sub_49;
  } else {
    v_1434 = sub_36;
  };
  if (controller_blind_failed_recovered) {
    sub_35 = sub_36;
  } else {
    sub_35 = v_1434;
  };
  if (controller_change_shift) {
    sub_56 = false;
    sub_57 = sub_39;
  } else {
    sub_56 = sub_39;
    sub_57 = false;
  };
  if (controller_ck_1) {
    sub_55 = sub_57;
  } else {
    sub_55 = sub_56;
  };
  sub_58 = sub_46;
  if (controller_c_pc) {
    v_1426 = sub_55;
  } else {
    v_1426 = sub_58;
  };
  sub_60 = sub_39;
  sub_59 = sub_60;
  if (controller_c_window) {
    sub_54 = v_1426;
  } else {
    sub_54 = sub_59;
  };
  if (controller_ck_1) {
    sub_63 = sub_56;
  } else {
    sub_63 = sub_57;
  };
  sub_62 = sub_63;
  if (controller_c_window) {
    sub_61 = sub_50;
  } else {
    sub_61 = sub_62;
  };
  if (controller_v_392) {
    v_1427 = sub_61;
  } else {
    v_1427 = sub_54;
  };
  if (controller_blind_failed_recovered) {
    sub_53 = sub_54;
  } else {
    sub_53 = v_1427;
  };
  if (controller_c_door) {
    v_1435 = sub_53;
    sub_34 = sub_35;
  } else {
    v_1435 = sub_35;
    sub_34 = sub_53;
  };
  if (controller_ck_11_1) {
    v_1436 = v_1435;
  } else {
    v_1436 = sub_34;
  };
  if (controller_air_failed_recovered) {
    sub_33 = v_1436;
  } else {
    sub_33 = sub_10;
  };
  if (controller_c_air_1) {
    sub_8 = sub_9;
  } else {
    sub_8 = sub_33;
  };
  if (controller_cleaner) {
    sub_71 = sub_43;
  } else {
    sub_71 = sub_42;
  };
  sub_73 = controller_ck_17_1;
  sub_74 = !(controller_ck_17_1);
  if (controller_cleaner) {
    sub_72 = sub_73;
  } else {
    sub_72 = sub_74;
  };
  if (controller_worker) {
    v_1420 = sub_72;
    sub_70 = sub_71;
  } else {
    v_1420 = sub_71;
    sub_70 = sub_72;
  };
  if (controller_ck_15_1) {
    sub_69 = v_1420;
    sub_75 = sub_25;
  } else {
    sub_69 = sub_70;
    sub_75 = sub_27;
  };
  if (controller_change_shift) {
    v_1421 = sub_75;
    sub_68 = sub_69;
  } else {
    v_1421 = sub_69;
    sub_68 = sub_75;
  };
  if (controller_ck_1) {
    v_1422 = v_1421;
  } else {
    v_1422 = sub_68;
  };
  sub_78 = sub_72;
  sub_79 = sub_26;
  if (controller_change_shift) {
    v_1419 = sub_79;
    sub_77 = sub_78;
  } else {
    v_1419 = sub_78;
    sub_77 = sub_79;
  };
  if (controller_ck_1) {
    sub_76 = v_1419;
  } else {
    sub_76 = sub_77;
  };
  if (controller_c_pc) {
    v_1423 = v_1422;
  } else {
    v_1423 = sub_76;
  };
  sub_81 = sub_69;
  sub_80 = sub_81;
  if (controller_c_window) {
    sub_67 = v_1423;
  } else {
    sub_67 = sub_80;
  };
  if (controller_change_shift) {
    sub_85 = sub_75;
    sub_86 = false;
  } else {
    sub_85 = false;
    sub_86 = sub_75;
  };
  if (controller_ck_1) {
    sub_84 = sub_86;
  } else {
    sub_84 = sub_85;
  };
  if (controller_change_shift) {
    v_1418 = sub_24;
    sub_88 = sub_79;
  } else {
    v_1418 = sub_79;
    sub_88 = sub_24;
  };
  if (controller_ck_1) {
    sub_87 = v_1418;
  } else {
    sub_87 = sub_88;
  };
  if (controller_c_pc) {
    sub_83 = sub_84;
  } else {
    sub_83 = sub_87;
  };
  sub_94 = true;
  if (controller_worker) {
    v_1416 = sub_94;
    sub_93 = sub_71;
  } else {
    v_1416 = sub_71;
    sub_93 = sub_94;
  };
  if (controller_ck_15_1) {
    sub_92 = v_1416;
  } else {
    sub_92 = sub_93;
  };
  if (controller_change_shift) {
    v_1417 = sub_92;
    sub_91 = sub_69;
  } else {
    v_1417 = sub_69;
    sub_91 = sub_92;
  };
  if (controller_ck_1) {
    sub_90 = v_1417;
  } else {
    sub_90 = sub_91;
  };
  sub_89 = sub_90;
  if (controller_c_window) {
    sub_82 = sub_83;
  } else {
    sub_82 = sub_89;
  };
  if (controller_v_392) {
    v_1424 = sub_82;
  } else {
    v_1424 = sub_67;
  };
  if (controller_blind_failed_recovered) {
    sub_66 = sub_67;
  } else {
    sub_66 = v_1424;
  };
  sub_97 = sub_75;
  sub_98 = sub_79;
  if (controller_c_pc) {
    v_1414 = sub_97;
  } else {
    v_1414 = sub_98;
  };
  sub_99 = sub_97;
  if (controller_c_window) {
    sub_96 = v_1414;
  } else {
    sub_96 = sub_99;
  };
  sub_101 = sub_84;
  if (controller_c_window) {
    sub_100 = sub_83;
  } else {
    sub_100 = sub_101;
  };
  if (controller_v_392) {
    v_1415 = sub_100;
  } else {
    v_1415 = sub_96;
  };
  if (controller_blind_failed_recovered) {
    sub_95 = sub_96;
  } else {
    sub_95 = v_1415;
  };
  if (controller_c_door) {
    v_1425 = sub_95;
    sub_65 = sub_66;
  } else {
    v_1425 = sub_66;
    sub_65 = sub_95;
  };
  if (controller_ck_11_1) {
    sub_64 = v_1425;
  } else {
    sub_64 = sub_65;
  };
  sub_104 = sub_78;
  if (controller_c_pc) {
    v_1412 = sub_97;
    sub_105 = sub_97;
  } else {
    v_1412 = sub_104;
    sub_105 = sub_81;
  };
  if (controller_c_window) {
    sub_103 = v_1412;
  } else {
    sub_103 = sub_105;
  };
  if (controller_change_shift) {
    sub_108 = sub_75;
    sub_109 = sub_39;
  } else {
    sub_108 = sub_39;
    sub_109 = sub_75;
  };
  if (controller_ck_1) {
    sub_107 = sub_109;
  } else {
    sub_107 = sub_108;
  };
  if (controller_worker) {
    v_1409 = sub_94;
    sub_113 = sub_72;
  } else {
    v_1409 = sub_72;
    sub_113 = sub_94;
  };
  if (controller_ck_15_1) {
    sub_112 = v_1409;
  } else {
    sub_112 = sub_113;
  };
  if (controller_change_shift) {
    v_1410 = sub_112;
    sub_111 = sub_78;
  } else {
    v_1410 = sub_78;
    sub_111 = sub_112;
  };
  if (controller_ck_1) {
    sub_110 = v_1410;
  } else {
    sub_110 = sub_111;
  };
  if (controller_c_pc) {
    v_1411 = sub_107;
    sub_114 = sub_107;
  } else {
    v_1411 = sub_110;
    sub_114 = sub_90;
  };
  if (controller_c_window) {
    sub_106 = v_1411;
  } else {
    sub_106 = sub_114;
  };
  if (controller_v_392) {
    v_1413 = sub_106;
  } else {
    v_1413 = sub_103;
  };
  if (controller_blind_failed_recovered) {
    sub_102 = sub_103;
  } else {
    sub_102 = v_1413;
  };
  if (controller_air_failed_recovered) {
    v_1446 = sub_64;
  } else {
    v_1446 = sub_102;
  };
  if (controller_ck_1) {
    sub_119 = sub_85;
  } else {
    sub_119 = sub_86;
  };
  if (controller_c_pc) {
    v_1407 = sub_119;
  } else {
    v_1407 = sub_98;
  };
  if (controller_c_window) {
    sub_118 = v_1407;
  } else {
    sub_118 = sub_99;
  };
  if (controller_c_pc) {
    sub_121 = false;
  } else {
    sub_121 = sub_87;
  };
  if (controller_c_window) {
    sub_120 = sub_121;
  } else {
    sub_120 = sub_101;
  };
  if (controller_v_392) {
    v_1408 = sub_120;
  } else {
    v_1408 = sub_118;
  };
  if (controller_blind_failed_recovered) {
    sub_117 = sub_118;
  } else {
    sub_117 = v_1408;
  };
  sub_116 = sub_117;
  sub_115 = sub_116;
  if (controller_c_air_1) {
    v_1447 = v_1446;
  } else {
    v_1447 = sub_115;
  };
  if (controller_v_445) {
    sub_7 = v_1447;
  } else {
    sub_7 = sub_8;
  };
  sub_123 = sub_95;
  sub_122 = sub_123;
  if (controller_v_447) {
    sub_6 = sub_122;
  } else {
    sub_6 = sub_7;
  };
  if (controller_air_failed_recovered) {
    v_1402 = sub_64;
  } else {
    v_1402 = sub_123;
  };
  if (controller_c_pc) {
    sub_130 = sub_97;
  } else {
    sub_130 = sub_29;
  };
  sub_129 = sub_130;
  sub_128 = sub_129;
  sub_127 = sub_128;
  sub_126 = sub_127;
  if (controller_c_air_1) {
    sub_125 = sub_126;
  } else {
    sub_125 = v_1402;
  };
  if (controller_c_pc) {
    sub_134 = sub_63;
  } else {
    sub_134 = sub_51;
  };
  if (controller_c_window) {
    sub_133 = sub_134;
  } else {
    sub_133 = sub_28;
  };
  if (controller_v_392) {
    v_1401 = sub_133;
  } else {
    v_1401 = sub_36;
  };
  if (controller_blind_failed_recovered) {
    sub_132 = sub_36;
  } else {
    sub_132 = v_1401;
  };
  if (controller_c_pc) {
    v_1399 = sub_60;
  } else {
    v_1399 = sub_58;
  };
  if (controller_c_window) {
    sub_136 = v_1399;
    sub_137 = sub_134;
  } else {
    sub_136 = sub_59;
    sub_137 = sub_62;
  };
  if (controller_v_392) {
    v_1400 = sub_137;
  } else {
    v_1400 = sub_136;
  };
  if (controller_blind_failed_recovered) {
    sub_135 = sub_136;
  } else {
    sub_135 = v_1400;
  };
  if (controller_c_door) {
    v_1403 = sub_135;
    sub_131 = sub_132;
  } else {
    v_1403 = sub_132;
    sub_131 = sub_135;
  };
  if (controller_ck_11_1) {
    v_1404 = v_1403;
  } else {
    v_1404 = sub_131;
  };
  if (controller_air_failed_recovered) {
    v_1405 = v_1404;
  } else {
    v_1405 = sub_10;
  };
  if (controller_c_air_1) {
    v_1406 = v_1405;
  } else {
    v_1406 = sub_9;
  };
  if (controller_v_445) {
    sub_124 = v_1406;
  } else {
    sub_124 = sub_125;
  };
  if (controller_change_shift) {
    v_1391 = sub_112;
    sub_142 = sub_23;
  } else {
    v_1391 = sub_23;
    sub_142 = sub_112;
  };
  if (controller_ck_1) {
    v_1392 = v_1391;
  } else {
    v_1392 = sub_142;
  };
  if (controller_c_pc) {
    v_1393 = sub_37;
  } else {
    v_1393 = v_1392;
  };
  if (controller_c_window) {
    sub_141 = v_1393;
  } else {
    sub_141 = sub_28;
  };
  sub_144 = sub_112;
  if (controller_c_pc) {
    sub_143 = sub_60;
  } else {
    sub_143 = sub_144;
  };
  if (controller_c_window) {
    v_1394 = sub_143;
  } else {
    v_1394 = sub_28;
  };
  if (controller_v_392) {
    v_1395 = v_1394;
  } else {
    v_1395 = sub_141;
  };
  if (controller_blind_failed_recovered) {
    sub_140 = sub_141;
  } else {
    sub_140 = v_1395;
  };
  sub_148 = sub_92;
  if (controller_c_pc) {
    sub_147 = sub_60;
  } else {
    sub_147 = sub_148;
  };
  if (controller_c_window) {
    sub_146 = sub_143;
  } else {
    sub_146 = sub_147;
  };
  sub_145 = sub_146;
  if (controller_c_door) {
    v_1396 = sub_145;
    sub_139 = sub_140;
  } else {
    v_1396 = sub_140;
    sub_139 = sub_145;
  };
  if (controller_ck_11_1) {
    v_1397 = v_1396;
  } else {
    v_1397 = sub_139;
  };
  if (controller_air_failed_recovered) {
    v_1398 = v_1397;
  } else {
    v_1398 = sub_10;
  };
  if (controller_c_air_1) {
    sub_138 = v_1398;
  } else {
    sub_138 = sub_9;
  };
  if (controller_change_shift) {
    v_1387 = sub_75;
    sub_154 = sub_92;
  } else {
    v_1387 = sub_92;
    sub_154 = sub_75;
  };
  if (controller_ck_1) {
    sub_153 = v_1387;
  } else {
    sub_153 = sub_154;
  };
  if (controller_c_pc) {
    v_1388 = sub_153;
  } else {
    v_1388 = sub_76;
  };
  if (controller_c_window) {
    sub_152 = v_1388;
    sub_155 = sub_121;
  } else {
    sub_152 = sub_80;
    sub_155 = sub_89;
  };
  if (controller_v_392) {
    v_1389 = sub_155;
  } else {
    v_1389 = sub_152;
  };
  if (controller_blind_failed_recovered) {
    sub_151 = sub_152;
  } else {
    sub_151 = v_1389;
  };
  if (controller_c_door) {
    v_1390 = sub_117;
    sub_150 = sub_151;
  } else {
    v_1390 = sub_151;
    sub_150 = sub_117;
  };
  if (controller_ck_11_1) {
    sub_149 = v_1390;
  } else {
    sub_149 = sub_150;
  };
  if (controller_ck_1) {
    sub_158 = sub_108;
  } else {
    sub_158 = sub_109;
  };
  if (controller_c_pc) {
    v_1385 = sub_158;
  } else {
    v_1385 = sub_98;
  };
  if (controller_c_window) {
    sub_157 = v_1385;
  } else {
    sub_157 = sub_99;
  };
  if (controller_c_pc) {
    v_1384 = sub_63;
  } else {
    v_1384 = sub_87;
  };
  if (controller_c_window) {
    sub_159 = v_1384;
  } else {
    sub_159 = sub_101;
  };
  if (controller_v_392) {
    v_1386 = sub_159;
  } else {
    v_1386 = sub_157;
  };
  if (controller_blind_failed_recovered) {
    sub_156 = sub_157;
  } else {
    sub_156 = v_1386;
  };
  if (controller_air_failed_recovered) {
    v_1448 = sub_149;
  } else {
    v_1448 = sub_156;
  };
  if (controller_c_air_1) {
    v_1449 = v_1448;
  } else {
    v_1449 = sub_126;
  };
  if (controller_v_445) {
    v_1450 = v_1449;
  } else {
    v_1450 = sub_138;
  };
  if (controller_v_447) {
    v_1451 = v_1450;
  } else {
    v_1451 = sub_124;
  };
  if (controller_v_446) {
    sub_5 = v_1451;
  } else {
    sub_5 = sub_6;
  };
  sub_4 = sub_5;
  if (controller_c_pc) {
    v_1376 = sub_60;
  } else {
    v_1376 = sub_110;
  };
  if (controller_c_window) {
    v_1377 = v_1376;
  } else {
    v_1377 = sub_114;
  };
  if (controller_c_pc) {
    v_1375 = sub_158;
  } else {
    v_1375 = sub_104;
  };
  if (controller_c_window) {
    sub_165 = v_1375;
  } else {
    sub_165 = sub_105;
  };
  if (controller_v_392) {
    v_1378 = v_1377;
  } else {
    v_1378 = sub_165;
  };
  if (controller_blind_failed_recovered) {
    sub_164 = sub_165;
  } else {
    sub_164 = v_1378;
  };
  if (controller_air_failed_recovered) {
    v_1379 = sub_149;
  } else {
    v_1379 = sub_164;
  };
  if (controller_c_air_1) {
    v_1380 = v_1379;
  } else {
    v_1380 = sub_115;
  };
  if (controller_v_445) {
    sub_163 = v_1380;
  } else {
    sub_163 = sub_8;
  };
  if (controller_v_447) {
    sub_162 = sub_115;
  } else {
    sub_162 = sub_163;
  };
  if (controller_c_air_1) {
    v_1374 = sub_33;
  } else {
    v_1374 = sub_9;
  };
  if (controller_air_failed_recovered) {
    sub_168 = sub_149;
  } else {
    sub_168 = sub_116;
  };
  if (controller_c_air_1) {
    v_1381 = sub_168;
  } else {
    v_1381 = sub_126;
  };
  if (controller_v_445) {
    v_1382 = v_1381;
  } else {
    v_1382 = sub_138;
  };
  if (controller_c_air_1) {
    sub_167 = sub_126;
  } else {
    sub_167 = sub_168;
  };
  if (controller_v_445) {
    sub_166 = v_1374;
  } else {
    sub_166 = sub_167;
  };
  if (controller_v_447) {
    v_1383 = v_1382;
  } else {
    v_1383 = sub_166;
  };
  if (controller_v_446) {
    sub_161 = v_1383;
  } else {
    sub_161 = sub_162;
  };
  sub_160 = sub_161;
  if (controller_v_407) {
    v_1452 = sub_4;
    sub_3 = sub_160;
  } else {
    v_1452 = sub_160;
    sub_3 = sub_4;
  };
  if (controller_v_408) {
    v_1453 = v_1452;
  } else {
    v_1453 = sub_3;
  };
  if (controller_v_392) {
    v_1362 = sub_49;
  } else {
    v_1362 = sub_13;
  };
  if (controller_blind_failed_recovered) {
    sub_174 = sub_13;
  } else {
    sub_174 = v_1362;
  };
  sub_175 = sub_61;
  if (controller_c_door) {
    v_1363 = sub_175;
    sub_173 = sub_174;
  } else {
    v_1363 = sub_174;
    sub_173 = sub_175;
  };
  if (controller_ck_11_1) {
    v_1364 = v_1363;
  } else {
    v_1364 = sub_173;
  };
  if (controller_air_failed_recovered) {
    v_1365 = v_1364;
  } else {
    v_1365 = sub_10;
  };
  if (controller_c_air_1) {
    sub_172 = sub_9;
  } else {
    sub_172 = v_1365;
  };
  if (controller_change_shift) {
    v_1357 = false;
    sub_180 = sub_69;
  } else {
    v_1357 = sub_69;
    sub_180 = false;
  };
  if (controller_ck_1) {
    v_1358 = v_1357;
  } else {
    v_1358 = sub_180;
  };
  if (controller_change_shift) {
    v_1356 = sub_24;
    sub_182 = sub_78;
  } else {
    v_1356 = sub_78;
    sub_182 = sub_24;
  };
  if (controller_ck_1) {
    sub_181 = v_1356;
  } else {
    sub_181 = sub_182;
  };
  if (controller_c_pc) {
    v_1359 = v_1358;
  } else {
    v_1359 = sub_181;
  };
  if (controller_c_window) {
    sub_179 = v_1359;
  } else {
    sub_179 = sub_89;
  };
  if (controller_v_392) {
    v_1360 = sub_82;
  } else {
    v_1360 = sub_179;
  };
  if (controller_blind_failed_recovered) {
    sub_178 = sub_179;
  } else {
    sub_178 = v_1360;
  };
  sub_183 = sub_100;
  if (controller_c_door) {
    v_1361 = sub_183;
    sub_177 = sub_178;
  } else {
    v_1361 = sub_178;
    sub_177 = sub_183;
  };
  if (controller_ck_11_1) {
    sub_176 = v_1361;
  } else {
    sub_176 = sub_177;
  };
  sub_184 = sub_106;
  if (controller_air_failed_recovered) {
    v_1366 = sub_176;
  } else {
    v_1366 = sub_184;
  };
  sub_186 = sub_120;
  sub_185 = sub_186;
  if (controller_c_air_1) {
    v_1367 = v_1366;
  } else {
    v_1367 = sub_185;
  };
  if (controller_v_445) {
    sub_171 = v_1367;
  } else {
    sub_171 = sub_172;
  };
  sub_188 = sub_183;
  sub_187 = sub_188;
  if (controller_v_447) {
    sub_170 = sub_187;
  } else {
    sub_170 = sub_171;
  };
  if (controller_air_failed_recovered) {
    v_1351 = sub_176;
  } else {
    v_1351 = sub_188;
  };
  if (controller_c_pc) {
    v_1350 = sub_119;
  } else {
    v_1350 = sub_29;
  };
  if (controller_c_window) {
    sub_194 = v_1350;
  } else {
    sub_194 = sub_130;
  };
  sub_193 = sub_194;
  sub_192 = sub_193;
  sub_191 = sub_192;
  if (controller_c_air_1) {
    sub_190 = sub_191;
  } else {
    sub_190 = v_1351;
  };
  if (controller_v_392) {
    v_1349 = sub_133;
  } else {
    v_1349 = sub_13;
  };
  if (controller_blind_failed_recovered) {
    sub_196 = sub_13;
  } else {
    sub_196 = v_1349;
  };
  sub_197 = sub_137;
  if (controller_c_door) {
    v_1352 = sub_197;
    sub_195 = sub_196;
  } else {
    v_1352 = sub_196;
    sub_195 = sub_197;
  };
  if (controller_ck_11_1) {
    v_1353 = v_1352;
  } else {
    v_1353 = sub_195;
  };
  if (controller_air_failed_recovered) {
    v_1354 = v_1353;
  } else {
    v_1354 = sub_10;
  };
  if (controller_c_air_1) {
    v_1355 = v_1354;
  } else {
    v_1355 = sub_9;
  };
  if (controller_v_445) {
    sub_189 = v_1355;
  } else {
    sub_189 = sub_190;
  };
  if (controller_c_pc) {
    sub_201 = sub_55;
  } else {
    sub_201 = sub_144;
  };
  if (controller_c_window) {
    v_1344 = sub_201;
  } else {
    v_1344 = sub_28;
  };
  if (controller_v_392) {
    v_1345 = v_1344;
  } else {
    v_1345 = sub_141;
  };
  if (controller_blind_failed_recovered) {
    sub_200 = sub_141;
  } else {
    sub_200 = v_1345;
  };
  if (controller_c_window) {
    sub_203 = sub_201;
  } else {
    sub_203 = sub_147;
  };
  sub_202 = sub_203;
  if (controller_c_door) {
    v_1346 = sub_202;
    sub_199 = sub_200;
  } else {
    v_1346 = sub_200;
    sub_199 = sub_202;
  };
  if (controller_ck_11_1) {
    v_1347 = v_1346;
  } else {
    v_1347 = sub_199;
  };
  if (controller_air_failed_recovered) {
    v_1348 = v_1347;
  } else {
    v_1348 = sub_10;
  };
  if (controller_c_air_1) {
    sub_198 = v_1348;
  } else {
    sub_198 = sub_9;
  };
  if (controller_change_shift) {
    v_1341 = false;
    sub_208 = sub_92;
  } else {
    v_1341 = sub_92;
    sub_208 = false;
  };
  if (controller_ck_1) {
    sub_207 = v_1341;
  } else {
    sub_207 = sub_208;
  };
  if (controller_c_pc) {
    v_1342 = sub_207;
  } else {
    v_1342 = sub_181;
  };
  if (controller_c_window) {
    sub_206 = v_1342;
  } else {
    sub_206 = sub_89;
  };
  if (controller_v_392) {
    v_1343 = sub_155;
  } else {
    v_1343 = sub_206;
  };
  if (controller_blind_failed_recovered) {
    sub_205 = sub_206;
  } else {
    sub_205 = v_1343;
  };
  if (controller_c_door) {
    v_1368 = sub_186;
    sub_204 = sub_205;
  } else {
    v_1368 = sub_205;
    sub_204 = sub_186;
  };
  if (controller_ck_11_1) {
    v_1369 = v_1368;
  } else {
    v_1369 = sub_204;
  };
  sub_209 = sub_159;
  if (controller_air_failed_recovered) {
    v_1370 = v_1369;
  } else {
    v_1370 = sub_209;
  };
  if (controller_c_air_1) {
    v_1371 = v_1370;
  } else {
    v_1371 = sub_191;
  };
  if (controller_v_445) {
    v_1372 = v_1371;
  } else {
    v_1372 = sub_198;
  };
  if (controller_v_447) {
    v_1373 = v_1372;
  } else {
    v_1373 = sub_189;
  };
  if (controller_v_446) {
    sub_169 = v_1373;
  } else {
    sub_169 = sub_170;
  };
  if (controller_v_408) {
    v_1454 = sub_169;
  } else {
    v_1454 = sub_160;
  };
  if (controller_light_failed_recovered) {
    sub_2 = v_1453;
  } else {
    sub_2 = v_1454;
  };
  sub_222 = sub_94;
  if (controller_ck_15_1) {
    sub_223 = sub_40;
  } else {
    sub_223 = sub_44;
  };
  if (controller_change_shift) {
    v_1329 = sub_223;
    sub_221 = sub_222;
  } else {
    v_1329 = sub_222;
    sub_221 = sub_223;
  };
  if (controller_ck_1) {
    v_1330 = v_1329;
  } else {
    v_1330 = sub_221;
  };
  if (controller_c_pc) {
    v_1331 = sub_207;
  } else {
    v_1331 = v_1330;
  };
  sub_224 = sub_148;
  if (controller_c_window) {
    sub_220 = v_1331;
  } else {
    sub_220 = sub_224;
  };
  if (controller_c_pc) {
    sub_225 = false;
  } else {
    sub_225 = sub_223;
  };
  if (controller_c_window) {
    v_1332 = sub_225;
  } else {
    v_1332 = sub_224;
  };
  if (controller_v_392) {
    v_1333 = v_1332;
  } else {
    v_1333 = sub_220;
  };
  if (controller_blind_failed_recovered) {
    sub_219 = sub_220;
  } else {
    sub_219 = v_1333;
  };
  if (controller_c_window) {
    sub_227 = sub_225;
  } else {
    sub_227 = false;
  };
  sub_226 = sub_227;
  if (controller_c_door) {
    v_1334 = sub_226;
    sub_218 = sub_219;
  } else {
    v_1334 = sub_219;
    sub_218 = sub_226;
  };
  if (controller_ck_11_1) {
    sub_217 = v_1334;
  } else {
    sub_217 = sub_218;
  };
  sub_216 = sub_217;
  if (controller_cleaner) {
    sub_235 = sub_74;
  } else {
    sub_235 = sub_73;
  };
  sub_234 = sub_235;
  sub_236 = sub_41;
  if (controller_change_shift) {
    v_1324 = sub_236;
    sub_233 = sub_234;
  } else {
    v_1324 = sub_234;
    sub_233 = sub_236;
  };
  if (controller_ck_1) {
    sub_232 = v_1324;
  } else {
    sub_232 = sub_233;
  };
  if (controller_c_pc) {
    v_1325 = sub_37;
  } else {
    v_1325 = sub_232;
  };
  if (controller_worker) {
    v_1323 = sub_235;
    sub_240 = sub_18;
  } else {
    v_1323 = sub_18;
    sub_240 = sub_235;
  };
  if (controller_ck_15_1) {
    sub_239 = v_1323;
  } else {
    sub_239 = sub_240;
  };
  sub_238 = sub_239;
  sub_237 = sub_238;
  if (controller_c_window) {
    sub_231 = v_1325;
  } else {
    sub_231 = sub_237;
  };
  if (controller_change_shift) {
    v_1322 = sub_223;
    sub_244 = sub_236;
  } else {
    v_1322 = sub_236;
    sub_244 = sub_223;
  };
  if (controller_ck_1) {
    sub_243 = v_1322;
  } else {
    sub_243 = sub_244;
  };
  if (controller_c_pc) {
    sub_242 = false;
  } else {
    sub_242 = sub_243;
  };
  if (controller_change_shift) {
    v_1321 = sub_16;
    sub_247 = sub_239;
  } else {
    v_1321 = sub_239;
    sub_247 = sub_16;
  };
  if (controller_ck_1) {
    sub_246 = v_1321;
  } else {
    sub_246 = sub_247;
  };
  sub_245 = sub_246;
  if (controller_c_window) {
    sub_241 = sub_242;
  } else {
    sub_241 = sub_245;
  };
  if (controller_v_392) {
    v_1326 = sub_241;
  } else {
    v_1326 = sub_231;
  };
  if (controller_blind_failed_recovered) {
    sub_230 = sub_231;
  } else {
    sub_230 = v_1326;
  };
  sub_250 = sub_236;
  if (controller_c_pc) {
    v_1319 = sub_55;
  } else {
    v_1319 = sub_250;
  };
  if (controller_c_window) {
    sub_249 = v_1319;
    sub_251 = sub_242;
  } else {
    sub_249 = sub_59;
    sub_251 = sub_62;
  };
  if (controller_v_392) {
    v_1320 = sub_251;
  } else {
    v_1320 = sub_249;
  };
  if (controller_blind_failed_recovered) {
    sub_248 = sub_249;
  } else {
    sub_248 = v_1320;
  };
  if (controller_c_door) {
    v_1327 = sub_248;
    sub_229 = sub_230;
  } else {
    v_1327 = sub_230;
    sub_229 = sub_248;
  };
  if (controller_ck_11_1) {
    v_1328 = v_1327;
  } else {
    v_1328 = sub_229;
  };
  if (controller_air_failed_recovered) {
    sub_228 = v_1328;
  } else {
    sub_228 = sub_217;
  };
  if (controller_c_air_1) {
    sub_215 = sub_216;
  } else {
    sub_215 = sub_228;
  };
  if (controller_ck_15_1) {
    sub_257 = sub_47;
  } else {
    sub_257 = sub_48;
  };
  if (controller_change_shift) {
    v_1314 = sub_257;
    sub_256 = sub_222;
  } else {
    v_1314 = sub_222;
    sub_256 = sub_257;
  };
  if (controller_ck_1) {
    v_1315 = v_1314;
  } else {
    v_1315 = sub_256;
  };
  if (controller_c_pc) {
    v_1316 = sub_153;
  } else {
    v_1316 = v_1315;
  };
  if (controller_c_window) {
    sub_255 = v_1316;
  } else {
    sub_255 = sub_224;
  };
  if (controller_change_shift) {
    v_1313 = sub_223;
    sub_261 = sub_257;
  } else {
    v_1313 = sub_257;
    sub_261 = sub_223;
  };
  if (controller_ck_1) {
    sub_260 = v_1313;
  } else {
    sub_260 = sub_261;
  };
  if (controller_c_pc) {
    sub_259 = sub_84;
  } else {
    sub_259 = sub_260;
  };
  if (controller_c_window) {
    sub_258 = sub_259;
  } else {
    sub_258 = sub_224;
  };
  if (controller_v_392) {
    v_1317 = sub_258;
  } else {
    v_1317 = sub_255;
  };
  if (controller_blind_failed_recovered) {
    sub_254 = sub_255;
  } else {
    sub_254 = v_1317;
  };
  sub_264 = sub_257;
  if (controller_c_pc) {
    v_1311 = sub_97;
  } else {
    v_1311 = sub_264;
  };
  if (controller_c_window) {
    sub_263 = v_1311;
    sub_265 = sub_259;
  } else {
    sub_263 = sub_99;
    sub_265 = sub_101;
  };
  if (controller_v_392) {
    v_1312 = sub_265;
  } else {
    v_1312 = sub_263;
  };
  if (controller_blind_failed_recovered) {
    sub_262 = sub_263;
  } else {
    sub_262 = v_1312;
  };
  if (controller_c_door) {
    v_1318 = sub_262;
    sub_253 = sub_254;
  } else {
    v_1318 = sub_254;
    sub_253 = sub_262;
  };
  if (controller_ck_11_1) {
    sub_252 = v_1318;
  } else {
    sub_252 = sub_253;
  };
  sub_266 = sub_145;
  if (controller_air_failed_recovered) {
    v_1335 = sub_252;
  } else {
    v_1335 = sub_266;
  };
  sub_268 = sub_248;
  sub_267 = sub_268;
  if (controller_c_air_1) {
    v_1336 = v_1335;
  } else {
    v_1336 = sub_267;
  };
  if (controller_v_445) {
    sub_214 = v_1336;
  } else {
    sub_214 = sub_215;
  };
  if (controller_c_pc) {
    v_1309 = sub_60;
  } else {
    v_1309 = sub_250;
  };
  if (controller_c_window) {
    sub_272 = v_1309;
  } else {
    sub_272 = sub_59;
  };
  if (controller_c_pc) {
    sub_274 = sub_63;
  } else {
    sub_274 = sub_243;
  };
  if (controller_c_window) {
    sub_273 = sub_274;
  } else {
    sub_273 = sub_62;
  };
  if (controller_v_392) {
    v_1310 = sub_273;
  } else {
    v_1310 = sub_272;
  };
  if (controller_blind_failed_recovered) {
    sub_271 = sub_272;
  } else {
    sub_271 = v_1310;
  };
  sub_270 = sub_271;
  sub_269 = sub_270;
  if (controller_v_447) {
    sub_213 = sub_269;
  } else {
    sub_213 = sub_214;
  };
  sub_280 = sub_147;
  sub_279 = sub_280;
  sub_278 = sub_279;
  sub_277 = sub_278;
  if (controller_c_pc) {
    v_1302 = sub_107;
  } else {
    v_1302 = sub_250;
  };
  if (controller_c_window) {
    sub_282 = v_1302;
  } else {
    sub_282 = sub_59;
  };
  if (controller_c_pc) {
    v_1301 = sub_84;
  } else {
    v_1301 = sub_243;
  };
  if (controller_c_window) {
    sub_283 = v_1301;
  } else {
    sub_283 = sub_62;
  };
  if (controller_v_392) {
    v_1303 = sub_283;
  } else {
    v_1303 = sub_282;
  };
  if (controller_blind_failed_recovered) {
    sub_281 = sub_282;
  } else {
    sub_281 = v_1303;
  };
  if (controller_air_failed_recovered) {
    v_1304 = sub_252;
  } else {
    v_1304 = sub_281;
  };
  if (controller_c_air_1) {
    sub_276 = sub_277;
  } else {
    sub_276 = v_1304;
  };
  if (controller_change_shift) {
    v_1298 = sub_39;
    sub_288 = sub_239;
  } else {
    v_1298 = sub_239;
    sub_288 = sub_39;
  };
  if (controller_ck_1) {
    sub_287 = v_1298;
  } else {
    sub_287 = sub_288;
  };
  if (controller_c_pc) {
    v_1299 = sub_287;
  } else {
    v_1299 = sub_232;
  };
  if (controller_c_window) {
    sub_286 = v_1299;
    sub_289 = sub_274;
  } else {
    sub_286 = sub_237;
    sub_289 = sub_245;
  };
  if (controller_v_392) {
    v_1300 = sub_289;
  } else {
    v_1300 = sub_286;
  };
  if (controller_blind_failed_recovered) {
    sub_285 = sub_286;
  } else {
    sub_285 = v_1300;
  };
  if (controller_c_door) {
    v_1305 = sub_271;
    sub_284 = sub_285;
  } else {
    v_1305 = sub_285;
    sub_284 = sub_271;
  };
  if (controller_ck_11_1) {
    v_1306 = v_1305;
  } else {
    v_1306 = sub_284;
  };
  if (controller_air_failed_recovered) {
    v_1307 = v_1306;
  } else {
    v_1307 = sub_217;
  };
  if (controller_c_air_1) {
    v_1308 = v_1307;
  } else {
    v_1308 = sub_216;
  };
  if (controller_v_445) {
    sub_275 = v_1308;
  } else {
    sub_275 = sub_276;
  };
  if (controller_c_pc) {
    v_1292 = sub_287;
    sub_294 = sub_238;
  } else {
    v_1292 = sub_144;
    sub_294 = sub_148;
  };
  if (controller_c_window) {
    v_1293 = sub_143;
    sub_293 = v_1292;
  } else {
    v_1293 = sub_294;
    sub_293 = sub_294;
  };
  if (controller_v_392) {
    v_1294 = v_1293;
  } else {
    v_1294 = sub_293;
  };
  if (controller_blind_failed_recovered) {
    sub_292 = sub_293;
  } else {
    sub_292 = v_1294;
  };
  if (controller_c_door) {
    v_1295 = sub_145;
    sub_291 = sub_292;
  } else {
    v_1295 = sub_292;
    sub_291 = sub_145;
  };
  if (controller_ck_11_1) {
    v_1296 = v_1295;
  } else {
    v_1296 = sub_291;
  };
  if (controller_air_failed_recovered) {
    v_1297 = v_1296;
  } else {
    v_1297 = sub_217;
  };
  if (controller_c_air_1) {
    sub_290 = v_1297;
  } else {
    sub_290 = sub_216;
  };
  if (controller_c_pc) {
    sub_299 = false;
  } else {
    sub_299 = sub_260;
  };
  if (controller_c_window) {
    sub_298 = sub_299;
  } else {
    sub_298 = sub_224;
  };
  if (controller_v_392) {
    v_1290 = sub_298;
  } else {
    v_1290 = sub_255;
  };
  if (controller_blind_failed_recovered) {
    sub_297 = sub_255;
  } else {
    sub_297 = v_1290;
  };
  if (controller_c_pc) {
    v_1288 = sub_119;
  } else {
    v_1288 = sub_264;
  };
  if (controller_c_window) {
    sub_301 = v_1288;
    sub_302 = sub_299;
  } else {
    sub_301 = sub_99;
    sub_302 = sub_101;
  };
  if (controller_v_392) {
    v_1289 = sub_302;
  } else {
    v_1289 = sub_301;
  };
  if (controller_blind_failed_recovered) {
    sub_300 = sub_301;
  } else {
    sub_300 = v_1289;
  };
  if (controller_c_door) {
    v_1291 = sub_300;
    sub_296 = sub_297;
  } else {
    v_1291 = sub_297;
    sub_296 = sub_300;
  };
  if (controller_ck_11_1) {
    sub_295 = v_1291;
  } else {
    sub_295 = sub_296;
  };
  if (controller_air_failed_recovered) {
    v_1337 = sub_295;
  } else {
    v_1337 = sub_270;
  };
  if (controller_c_air_1) {
    v_1338 = v_1337;
  } else {
    v_1338 = sub_277;
  };
  if (controller_v_445) {
    v_1339 = v_1338;
  } else {
    v_1339 = sub_290;
  };
  if (controller_v_447) {
    v_1340 = v_1339;
  } else {
    v_1340 = sub_275;
  };
  if (controller_v_446) {
    sub_212 = v_1340;
  } else {
    sub_212 = sub_213;
  };
  sub_211 = sub_212;
  if (controller_air_failed_recovered) {
    v_1283 = sub_295;
  } else {
    v_1283 = sub_266;
  };
  if (controller_c_air_1) {
    v_1284 = v_1283;
  } else {
    v_1284 = sub_267;
  };
  if (controller_v_445) {
    sub_306 = v_1284;
  } else {
    sub_306 = sub_215;
  };
  if (controller_v_447) {
    sub_305 = sub_267;
  } else {
    sub_305 = sub_306;
  };
  if (controller_c_air_1) {
    v_1282 = sub_228;
  } else {
    v_1282 = sub_216;
  };
  if (controller_air_failed_recovered) {
    sub_309 = sub_295;
  } else {
    sub_309 = sub_268;
  };
  if (controller_c_air_1) {
    v_1285 = sub_309;
  } else {
    v_1285 = sub_277;
  };
  if (controller_v_445) {
    v_1286 = v_1285;
  } else {
    v_1286 = sub_290;
  };
  if (controller_c_air_1) {
    sub_308 = sub_277;
  } else {
    sub_308 = sub_309;
  };
  if (controller_v_445) {
    sub_307 = v_1282;
  } else {
    sub_307 = sub_308;
  };
  if (controller_v_447) {
    v_1287 = v_1286;
  } else {
    v_1287 = sub_307;
  };
  if (controller_v_446) {
    sub_304 = v_1287;
  } else {
    sub_304 = sub_305;
  };
  sub_303 = sub_304;
  if (controller_v_407) {
    v_1455 = sub_211;
    sub_210 = sub_303;
  } else {
    v_1455 = sub_303;
    sub_210 = sub_211;
  };
  if (controller_v_408) {
    v_1456 = v_1455;
  } else {
    v_1456 = sub_210;
  };
  if (controller_change_shift) {
    v_1268 = sub_223;
    sub_318 = sub_234;
  } else {
    v_1268 = sub_234;
    sub_318 = sub_223;
  };
  if (controller_ck_1) {
    sub_317 = v_1268;
  } else {
    sub_317 = sub_318;
  };
  if (controller_c_pc) {
    v_1269 = sub_14;
  } else {
    v_1269 = sub_317;
  };
  if (controller_c_window) {
    sub_316 = v_1269;
  } else {
    sub_316 = sub_245;
  };
  if (controller_v_392) {
    v_1270 = sub_241;
  } else {
    v_1270 = sub_316;
  };
  if (controller_blind_failed_recovered) {
    sub_315 = sub_316;
  } else {
    sub_315 = v_1270;
  };
  sub_319 = sub_251;
  if (controller_c_door) {
    v_1271 = sub_319;
    sub_314 = sub_315;
  } else {
    v_1271 = sub_315;
    sub_314 = sub_319;
  };
  if (controller_ck_11_1) {
    v_1272 = v_1271;
  } else {
    v_1272 = sub_314;
  };
  if (controller_air_failed_recovered) {
    v_1273 = v_1272;
  } else {
    v_1273 = sub_217;
  };
  if (controller_c_air_1) {
    sub_313 = sub_216;
  } else {
    sub_313 = v_1273;
  };
  if (controller_v_392) {
    v_1266 = sub_258;
  } else {
    v_1266 = sub_220;
  };
  if (controller_blind_failed_recovered) {
    sub_322 = sub_220;
  } else {
    sub_322 = v_1266;
  };
  sub_323 = sub_265;
  if (controller_c_door) {
    v_1267 = sub_323;
    sub_321 = sub_322;
  } else {
    v_1267 = sub_322;
    sub_321 = sub_323;
  };
  if (controller_ck_11_1) {
    sub_320 = v_1267;
  } else {
    sub_320 = sub_321;
  };
  if (controller_c_pc) {
    v_1265 = sub_107;
  } else {
    v_1265 = sub_144;
  };
  if (controller_c_window) {
    sub_325 = v_1265;
  } else {
    sub_325 = sub_147;
  };
  sub_324 = sub_325;
  if (controller_air_failed_recovered) {
    v_1274 = sub_320;
  } else {
    v_1274 = sub_324;
  };
  sub_326 = sub_319;
  if (controller_c_air_1) {
    v_1275 = v_1274;
  } else {
    v_1275 = sub_326;
  };
  if (controller_v_445) {
    sub_312 = v_1275;
  } else {
    sub_312 = sub_313;
  };
  sub_329 = sub_273;
  sub_328 = sub_329;
  sub_327 = sub_328;
  if (controller_v_447) {
    sub_311 = sub_327;
  } else {
    sub_311 = sub_312;
  };
  if (controller_c_pc) {
    v_1259 = sub_55;
  } else {
    v_1259 = sub_148;
  };
  if (controller_c_window) {
    sub_335 = v_1259;
  } else {
    sub_335 = sub_147;
  };
  sub_334 = sub_335;
  sub_333 = sub_334;
  sub_332 = sub_333;
  sub_336 = sub_283;
  if (controller_air_failed_recovered) {
    v_1260 = sub_320;
  } else {
    v_1260 = sub_336;
  };
  if (controller_c_air_1) {
    sub_331 = sub_332;
  } else {
    sub_331 = v_1260;
  };
  if (controller_change_shift) {
    v_1255 = false;
    sub_340 = sub_239;
  } else {
    v_1255 = sub_239;
    sub_340 = false;
  };
  if (controller_ck_1) {
    v_1256 = v_1255;
  } else {
    v_1256 = sub_340;
  };
  if (controller_c_pc) {
    v_1257 = v_1256;
  } else {
    v_1257 = sub_317;
  };
  if (controller_c_window) {
    sub_339 = v_1257;
  } else {
    sub_339 = sub_245;
  };
  if (controller_v_392) {
    v_1258 = sub_289;
  } else {
    v_1258 = sub_339;
  };
  if (controller_blind_failed_recovered) {
    sub_338 = sub_339;
  } else {
    sub_338 = v_1258;
  };
  if (controller_c_door) {
    v_1261 = sub_329;
    sub_337 = sub_338;
  } else {
    v_1261 = sub_338;
    sub_337 = sub_329;
  };
  if (controller_ck_11_1) {
    v_1262 = v_1261;
  } else {
    v_1262 = sub_337;
  };
  if (controller_air_failed_recovered) {
    v_1263 = v_1262;
  } else {
    v_1263 = sub_217;
  };
  if (controller_c_air_1) {
    v_1264 = v_1263;
  } else {
    v_1264 = sub_216;
  };
  if (controller_v_445) {
    sub_330 = v_1264;
  } else {
    sub_330 = sub_331;
  };
  if (controller_c_window) {
    v_1250 = sub_201;
  } else {
    v_1250 = sub_294;
  };
  if (controller_c_pc) {
    v_1249 = sub_37;
  } else {
    v_1249 = sub_144;
  };
  if (controller_c_window) {
    sub_344 = v_1249;
  } else {
    sub_344 = sub_294;
  };
  if (controller_v_392) {
    v_1251 = v_1250;
  } else {
    v_1251 = sub_344;
  };
  if (controller_blind_failed_recovered) {
    sub_343 = sub_344;
  } else {
    sub_343 = v_1251;
  };
  if (controller_c_door) {
    v_1252 = sub_202;
    sub_342 = sub_343;
  } else {
    v_1252 = sub_343;
    sub_342 = sub_202;
  };
  if (controller_ck_11_1) {
    v_1253 = v_1252;
  } else {
    v_1253 = sub_342;
  };
  if (controller_air_failed_recovered) {
    v_1254 = v_1253;
  } else {
    v_1254 = sub_217;
  };
  if (controller_c_air_1) {
    sub_341 = v_1254;
  } else {
    sub_341 = sub_216;
  };
  if (controller_v_392) {
    v = sub_298;
  } else {
    v = sub_220;
  };
  if (controller_blind_failed_recovered) {
    sub_346 = sub_220;
  } else {
    sub_346 = v;
  };
  sub_347 = sub_302;
  if (controller_c_door) {
    v_1276 = sub_347;
    sub_345 = sub_346;
  } else {
    v_1276 = sub_346;
    sub_345 = sub_347;
  };
  if (controller_ck_11_1) {
    v_1277 = v_1276;
  } else {
    v_1277 = sub_345;
  };
  if (controller_air_failed_recovered) {
    v_1278 = v_1277;
  } else {
    v_1278 = sub_328;
  };
  if (controller_c_air_1) {
    v_1279 = v_1278;
  } else {
    v_1279 = sub_332;
  };
  if (controller_v_445) {
    v_1280 = v_1279;
  } else {
    v_1280 = sub_341;
  };
  if (controller_v_447) {
    v_1281 = v_1280;
  } else {
    v_1281 = sub_330;
  };
  if (controller_v_446) {
    sub_310 = v_1281;
  } else {
    sub_310 = sub_311;
  };
  if (controller_v_408) {
    v_1457 = sub_310;
  } else {
    v_1457 = sub_303;
  };
  if (controller_light_failed_recovered) {
    v_1458 = v_1456;
  } else {
    v_1458 = v_1457;
  };
  if (p_controller_c_air_2) {
    sub_1 = v_1458;
  } else {
    sub_1 = sub_2;
  };
  sub_0 = sub_1;
  _out->controller_c_air_2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_air_1_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered, int controller_ck_1,
  int controller_pnr_9, int controller_ck_11_1, int controller_pnr_8,
  int controller_ck_13_1, int controller_pnr_7, int controller_ck_15_1,
  int controller_pnr_6, int controller_ck_17_1, int controller_pnr_5,
  int controller_ck_19_1, int controller_pnr_4, int controller_ck_21_1,
  int controller_pnr_3, int controller_v_447, int controller_v_446,
  int controller_v_445, int controller_pnr_2, int controller_v_408,
  int controller_v_407, int controller_pnr_1, int controller_v_392,
  int controller_v_391, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_1_out* _out) {
  
  int v_1645;
  int v_1644;
  int v_1643;
  int v_1642;
  int v_1641;
  int v_1640;
  int v_1639;
  int v_1638;
  int v_1637;
  int v_1636;
  int v_1635;
  int v_1634;
  int v_1633;
  int v_1632;
  int v_1631;
  int v_1630;
  int v_1629;
  int v_1628;
  int v_1627;
  int v_1626;
  int v_1625;
  int v_1624;
  int v_1623;
  int v_1622;
  int v_1621;
  int v_1620;
  int v_1619;
  int v_1618;
  int v_1617;
  int v_1616;
  int v_1615;
  int v_1614;
  int v_1613;
  int v_1612;
  int v_1611;
  int v_1610;
  int v_1609;
  int v_1608;
  int v_1607;
  int v_1606;
  int v_1605;
  int v_1604;
  int v_1603;
  int v_1602;
  int v_1601;
  int v_1600;
  int v_1599;
  int v_1598;
  int v_1597;
  int v_1596;
  int v_1595;
  int v_1594;
  int v_1593;
  int v_1592;
  int v_1591;
  int v_1590;
  int v_1589;
  int v_1588;
  int v_1587;
  int v_1586;
  int v_1585;
  int v_1584;
  int v_1583;
  int v_1582;
  int v_1581;
  int v_1580;
  int v_1579;
  int v_1578;
  int v_1577;
  int v_1576;
  int v_1575;
  int v_1574;
  int v_1573;
  int v_1572;
  int v_1571;
  int v_1570;
  int v_1569;
  int v_1568;
  int v_1567;
  int v_1566;
  int v_1565;
  int v_1564;
  int v_1563;
  int v_1562;
  int v_1561;
  int v_1560;
  int v_1559;
  int v_1558;
  int v_1557;
  int v_1556;
  int v_1555;
  int v_1554;
  int v_1553;
  int v_1552;
  int v_1551;
  int v_1550;
  int v_1549;
  int v_1548;
  int v_1547;
  int v_1546;
  int v_1545;
  int v_1544;
  int v_1543;
  int v_1542;
  int v_1541;
  int v_1540;
  int v_1539;
  int v_1538;
  int v_1537;
  int v_1536;
  int v_1535;
  int v_1534;
  int v_1533;
  int v_1532;
  int v_1531;
  int v_1530;
  int v_1529;
  int v_1528;
  int v_1527;
  int v_1526;
  int v_1525;
  int v_1524;
  int v_1523;
  int v_1522;
  int v_1521;
  int v_1520;
  int v_1519;
  int v_1518;
  int v_1517;
  int v_1516;
  int v_1515;
  int v_1514;
  int v_1513;
  int v_1512;
  int v_1511;
  int v_1510;
  int v_1509;
  int v_1508;
  int v_1507;
  int v_1506;
  int v_1505;
  int v_1504;
  int v_1503;
  int v_1502;
  int v_1501;
  int v_1500;
  int v_1499;
  int v_1498;
  int v_1497;
  int v_1496;
  int v_1495;
  int v_1494;
  int v_1493;
  int v_1492;
  int v_1491;
  int v_1490;
  int v_1489;
  int v_1488;
  int v_1487;
  int v_1486;
  int v_1485;
  int v_1484;
  int v_1483;
  int v_1482;
  int v_1481;
  int v_1480;
  int v_1479;
  int v_1478;
  int v_1477;
  int v_1476;
  int v_1475;
  int v_1474;
  int v_1473;
  int v_1472;
  int v_1471;
  int v_1470;
  int v_1469;
  int v_1468;
  int v_1467;
  int v_1466;
  int v_1465;
  int v_1464;
  int v_1463;
  int v_1462;
  int v_1461;
  int v_1460;
  int v_1459;
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
  sub_16 = p_controller_c_air_1;
  if (controller_ck_17_1) {
    sub_15 = sub_16;
    sub_17 = false;
  } else {
    sub_15 = false;
    sub_17 = sub_16;
  };
  if (controller_cleaner) {
    sub_14 = sub_15;
  } else {
    sub_14 = sub_17;
  };
  sub_18 = sub_16;
  if (controller_worker) {
    v_1628 = sub_18;
    sub_13 = sub_14;
  } else {
    v_1628 = sub_14;
    sub_13 = sub_18;
  };
  if (controller_ck_15_1) {
    sub_12 = v_1628;
  } else {
    sub_12 = sub_13;
  };
  sub_22 = (controller_ck_17_1&&false);
  v_1626 = !(controller_ck_17_1);
  sub_23 = (v_1626&&false);
  if (controller_cleaner) {
    sub_21 = sub_22;
  } else {
    sub_21 = sub_23;
  };
  if (controller_worker) {
    v_1627 = sub_21;
    sub_20 = false;
  } else {
    v_1627 = false;
    sub_20 = sub_21;
  };
  if (controller_ck_15_1) {
    sub_19 = v_1627;
  } else {
    sub_19 = sub_20;
  };
  if (controller_change_shift) {
    v_1629 = sub_19;
    sub_11 = sub_12;
  } else {
    v_1629 = sub_12;
    sub_11 = sub_19;
  };
  if (controller_ck_1) {
    v_1630 = v_1629;
  } else {
    v_1630 = sub_11;
  };
  sub_25 = sub_18;
  if (controller_cleaner) {
    sub_28 = sub_17;
  } else {
    sub_28 = sub_15;
  };
  if (controller_worker) {
    v_1625 = sub_21;
    sub_27 = sub_28;
  } else {
    v_1625 = sub_28;
    sub_27 = sub_21;
  };
  if (controller_ck_15_1) {
    sub_26 = v_1625;
  } else {
    sub_26 = sub_27;
  };
  if (controller_change_shift) {
    v_1631 = sub_26;
    sub_24 = sub_25;
  } else {
    v_1631 = sub_25;
    sub_24 = sub_26;
  };
  if (controller_ck_1) {
    v_1632 = v_1631;
  } else {
    v_1632 = sub_24;
  };
  if (controller_c_pc) {
    v_1633 = v_1630;
  } else {
    v_1633 = v_1632;
  };
  sub_30 = sub_12;
  sub_29 = sub_30;
  if (controller_c_window) {
    sub_10 = v_1633;
  } else {
    sub_10 = sub_29;
  };
  if (controller_worker) {
    sub_35 = sub_28;
    sub_36 = false;
  } else {
    sub_35 = false;
    sub_36 = sub_28;
  };
  if (controller_ck_15_1) {
    sub_34 = sub_36;
  } else {
    sub_34 = sub_35;
  };
  if (controller_change_shift) {
    v_1623 = sub_34;
    sub_33 = sub_26;
  } else {
    v_1623 = sub_26;
    sub_33 = sub_34;
  };
  if (controller_ck_1) {
    v_1624 = v_1623;
  } else {
    v_1624 = sub_33;
  };
  if (controller_c_pc) {
    sub_32 = false;
  } else {
    sub_32 = v_1624;
  };
  if (controller_c_window) {
    sub_31 = sub_32;
  } else {
    sub_31 = sub_29;
  };
  if (controller_v_392) {
    v_1634 = sub_31;
  } else {
    v_1634 = sub_10;
  };
  if (controller_blind_failed_recovered) {
    sub_9 = sub_10;
  } else {
    sub_9 = v_1634;
  };
  if (controller_change_shift) {
    sub_40 = false;
    sub_41 = sub_19;
  } else {
    sub_40 = sub_19;
    sub_41 = false;
  };
  if (controller_ck_1) {
    sub_39 = sub_41;
  } else {
    sub_39 = sub_40;
  };
  if (controller_c_pc) {
    v_1621 = sub_39;
  } else {
    v_1621 = sub_26;
  };
  sub_42 = sub_19;
  if (controller_c_window) {
    sub_38 = v_1621;
  } else {
    sub_38 = sub_42;
  };
  if (controller_ck_1) {
    sub_44 = sub_40;
  } else {
    sub_44 = sub_41;
  };
  if (controller_c_window) {
    sub_43 = sub_32;
  } else {
    sub_43 = sub_44;
  };
  if (controller_v_392) {
    v_1622 = sub_43;
  } else {
    v_1622 = sub_38;
  };
  if (controller_blind_failed_recovered) {
    sub_37 = sub_38;
  } else {
    sub_37 = v_1622;
  };
  if (controller_c_door) {
    v_1635 = sub_37;
    sub_8 = sub_9;
  } else {
    v_1635 = sub_9;
    sub_8 = sub_37;
  };
  if (controller_ck_11_1) {
    v_1636 = v_1635;
  } else {
    v_1636 = sub_8;
  };
  if (controller_change_shift) {
    v_1615 = sub_34;
    v_1613 = false;
    sub_49 = sub_12;
  } else {
    v_1615 = sub_25;
    v_1613 = sub_12;
    sub_49 = false;
  };
  if (controller_ck_1) {
    v_1614 = v_1613;
  } else {
    v_1614 = sub_49;
  };
  if (controller_change_shift) {
    sub_50 = sub_25;
  } else {
    sub_50 = sub_34;
  };
  if (controller_ck_1) {
    v_1616 = v_1615;
  } else {
    v_1616 = sub_50;
  };
  if (controller_c_pc) {
    v_1617 = v_1614;
  } else {
    v_1617 = v_1616;
  };
  if (controller_c_window) {
    sub_48 = v_1617;
  } else {
    sub_48 = sub_29;
  };
  if (controller_c_pc) {
    sub_51 = false;
  } else {
    sub_51 = sub_34;
  };
  if (controller_c_window) {
    v_1618 = sub_51;
  } else {
    v_1618 = sub_29;
  };
  if (controller_v_392) {
    v_1619 = v_1618;
  } else {
    v_1619 = sub_48;
  };
  if (controller_blind_failed_recovered) {
    sub_47 = sub_48;
  } else {
    sub_47 = v_1619;
  };
  if (controller_c_window) {
    sub_53 = sub_51;
  } else {
    sub_53 = false;
  };
  sub_52 = sub_53;
  if (controller_c_door) {
    v_1620 = sub_52;
    sub_46 = sub_47;
  } else {
    v_1620 = sub_47;
    sub_46 = sub_52;
  };
  if (controller_ck_11_1) {
    sub_45 = v_1620;
  } else {
    sub_45 = sub_46;
  };
  if (controller_air_failed_recovered) {
    sub_7 = v_1636;
  } else {
    sub_7 = sub_45;
  };
  sub_61 = (controller_ck_17_1||false);
  v_1605 = !(controller_ck_17_1);
  sub_62 = (v_1605||false);
  if (controller_cleaner) {
    sub_60 = sub_61;
  } else {
    sub_60 = sub_62;
  };
  sub_63 = true;
  if (controller_worker) {
    v_1606 = sub_63;
    sub_59 = sub_60;
  } else {
    v_1606 = sub_60;
    sub_59 = sub_63;
  };
  if (controller_ck_15_1) {
    sub_58 = v_1606;
    sub_64 = sub_35;
  } else {
    sub_58 = sub_59;
    sub_64 = sub_36;
  };
  if (controller_change_shift) {
    v_1607 = sub_64;
    sub_57 = sub_58;
  } else {
    v_1607 = sub_58;
    sub_57 = sub_64;
  };
  if (controller_ck_1) {
    v_1608 = v_1607;
  } else {
    v_1608 = sub_57;
  };
  sub_68 = (controller_ck_17_1||sub_16);
  v_1604 = !(controller_ck_17_1);
  sub_69 = (v_1604||sub_16);
  if (controller_cleaner) {
    sub_67 = sub_68;
  } else {
    sub_67 = sub_69;
  };
  sub_66 = sub_67;
  sub_70 = sub_28;
  if (controller_change_shift) {
    v_1609 = sub_70;
    sub_65 = sub_66;
  } else {
    v_1609 = sub_66;
    sub_65 = sub_70;
  };
  if (controller_ck_1) {
    v_1610 = v_1609;
  } else {
    v_1610 = sub_65;
  };
  if (controller_c_pc) {
    v_1611 = v_1608;
  } else {
    v_1611 = v_1610;
  };
  if (controller_worker) {
    v_1603 = sub_67;
    sub_73 = sub_60;
  } else {
    v_1603 = sub_60;
    sub_73 = sub_67;
  };
  if (controller_ck_15_1) {
    sub_72 = v_1603;
  } else {
    sub_72 = sub_73;
  };
  sub_71 = sub_72;
  if (controller_c_window) {
    sub_56 = v_1611;
  } else {
    sub_56 = sub_71;
  };
  if (controller_cleaner) {
    sub_80 = sub_62;
  } else {
    sub_80 = sub_61;
  };
  if (controller_worker) {
    v_1602 = sub_80;
    sub_79 = false;
  } else {
    v_1602 = false;
    sub_79 = sub_80;
  };
  if (controller_ck_15_1) {
    sub_78 = v_1602;
  } else {
    sub_78 = sub_79;
  };
  if (controller_change_shift) {
    sub_77 = sub_78;
    sub_81 = false;
  } else {
    sub_77 = false;
    sub_81 = sub_78;
  };
  if (controller_ck_1) {
    sub_76 = sub_81;
  } else {
    sub_76 = sub_77;
  };
  if (controller_change_shift) {
    v_1601 = sub_34;
    sub_83 = sub_70;
  } else {
    v_1601 = sub_70;
    sub_83 = sub_34;
  };
  if (controller_ck_1) {
    sub_82 = v_1601;
  } else {
    sub_82 = sub_83;
  };
  if (controller_c_pc) {
    sub_75 = sub_76;
  } else {
    sub_75 = sub_82;
  };
  if (controller_change_shift) {
    v_1600 = sub_58;
    sub_86 = sub_72;
  } else {
    v_1600 = sub_72;
    sub_86 = sub_58;
  };
  if (controller_ck_1) {
    sub_85 = v_1600;
  } else {
    sub_85 = sub_86;
  };
  sub_84 = sub_85;
  if (controller_c_window) {
    sub_74 = sub_75;
  } else {
    sub_74 = sub_84;
  };
  if (controller_v_392) {
    v_1612 = sub_74;
  } else {
    v_1612 = sub_56;
  };
  if (controller_blind_failed_recovered) {
    sub_55 = sub_56;
  } else {
    sub_55 = v_1612;
  };
  if (controller_change_shift) {
    sub_90 = sub_78;
    sub_91 = sub_64;
  } else {
    sub_90 = sub_64;
    sub_91 = sub_78;
  };
  if (controller_ck_1) {
    sub_89 = sub_91;
  } else {
    sub_89 = sub_90;
  };
  sub_92 = sub_70;
  if (controller_c_pc) {
    v_1598 = sub_89;
  } else {
    v_1598 = sub_92;
  };
  sub_94 = sub_64;
  sub_93 = sub_94;
  if (controller_c_window) {
    sub_88 = v_1598;
  } else {
    sub_88 = sub_93;
  };
  if (controller_change_shift) {
    sub_98 = sub_64;
    sub_99 = false;
  } else {
    sub_98 = false;
    sub_99 = sub_64;
  };
  if (controller_ck_1) {
    sub_97 = sub_99;
  } else {
    sub_97 = sub_98;
  };
  sub_96 = sub_97;
  if (controller_c_window) {
    sub_95 = sub_75;
  } else {
    sub_95 = sub_96;
  };
  if (controller_v_392) {
    v_1599 = sub_95;
  } else {
    v_1599 = sub_88;
  };
  if (controller_blind_failed_recovered) {
    sub_87 = sub_88;
  } else {
    sub_87 = v_1599;
  };
  if (controller_c_door) {
    v_1637 = sub_87;
    sub_54 = sub_55;
  } else {
    v_1637 = sub_55;
    sub_54 = sub_87;
  };
  if (controller_ck_11_1) {
    v_1638 = v_1637;
  } else {
    v_1638 = sub_54;
  };
  if (controller_c_pc) {
    v_1596 = sub_89;
    sub_103 = sub_94;
  } else {
    v_1596 = sub_66;
    sub_103 = sub_71;
  };
  if (controller_c_window) {
    sub_102 = v_1596;
  } else {
    sub_102 = sub_103;
  };
  sub_105 = sub_78;
  if (controller_worker) {
    v_1592 = sub_63;
    sub_108 = sub_67;
  } else {
    v_1592 = sub_67;
    sub_108 = sub_63;
  };
  if (controller_ck_15_1) {
    sub_107 = v_1592;
  } else {
    sub_107 = sub_108;
  };
  if (controller_change_shift) {
    v_1593 = sub_107;
    sub_106 = sub_66;
  } else {
    v_1593 = sub_66;
    sub_106 = sub_107;
  };
  if (controller_ck_1) {
    v_1594 = v_1593;
  } else {
    v_1594 = sub_106;
  };
  if (controller_c_pc) {
    v_1595 = sub_105;
  } else {
    v_1595 = v_1594;
  };
  if (controller_ck_1) {
    sub_110 = sub_90;
  } else {
    sub_110 = sub_91;
  };
  if (controller_c_pc) {
    sub_109 = sub_110;
  } else {
    sub_109 = sub_85;
  };
  if (controller_c_window) {
    sub_104 = v_1595;
  } else {
    sub_104 = sub_109;
  };
  if (controller_v_392) {
    v_1597 = sub_104;
  } else {
    v_1597 = sub_102;
  };
  if (controller_blind_failed_recovered) {
    sub_101 = sub_102;
  } else {
    sub_101 = v_1597;
  };
  sub_100 = sub_101;
  if (controller_air_failed_recovered) {
    v_1639 = v_1638;
  } else {
    v_1639 = sub_100;
  };
  if (controller_v_445) {
    sub_6 = v_1639;
  } else {
    sub_6 = sub_7;
  };
  if (controller_c_pc) {
    v_1590 = sub_94;
  } else {
    v_1590 = sub_92;
  };
  if (controller_c_window) {
    sub_113 = v_1590;
  } else {
    sub_113 = sub_93;
  };
  if (controller_c_pc) {
    v_1589 = sub_97;
  } else {
    v_1589 = sub_82;
  };
  if (controller_c_window) {
    sub_114 = v_1589;
  } else {
    sub_114 = sub_96;
  };
  if (controller_v_392) {
    v_1591 = sub_114;
  } else {
    v_1591 = sub_113;
  };
  if (controller_blind_failed_recovered) {
    sub_112 = sub_113;
  } else {
    sub_112 = v_1591;
  };
  sub_111 = sub_112;
  if (controller_v_447) {
    sub_5 = sub_111;
  } else {
    sub_5 = sub_6;
  };
  if (controller_cleaner) {
    sub_123 = sub_23;
  } else {
    sub_123 = sub_22;
  };
  v_1575 = !(controller_ck_17_1);
  sub_125 = (v_1575&&sub_16);
  sub_126 = (controller_ck_17_1&&sub_16);
  if (controller_cleaner) {
    sub_124 = sub_125;
  } else {
    sub_124 = sub_126;
  };
  if (controller_worker) {
    v_1576 = sub_124;
    sub_122 = sub_123;
  } else {
    v_1576 = sub_123;
    sub_122 = sub_124;
  };
  if (controller_ck_15_1) {
    sub_121 = v_1576;
  } else {
    sub_121 = sub_122;
  };
  if (controller_change_shift) {
    v_1577 = sub_64;
    sub_120 = sub_121;
  } else {
    v_1577 = sub_121;
    sub_120 = sub_64;
  };
  if (controller_ck_1) {
    v_1578 = v_1577;
  } else {
    v_1578 = sub_120;
  };
  if (controller_cleaner) {
    sub_130 = sub_126;
  } else {
    sub_130 = sub_125;
  };
  if (controller_worker) {
    v_1574 = sub_18;
    sub_129 = sub_130;
  } else {
    v_1574 = sub_130;
    sub_129 = sub_18;
  };
  if (controller_ck_15_1) {
    sub_128 = v_1574;
  } else {
    sub_128 = sub_129;
  };
  sub_134 = controller_ck_17_1;
  sub_135 = !(controller_ck_17_1);
  if (controller_cleaner) {
    sub_133 = sub_134;
  } else {
    sub_133 = sub_135;
  };
  if (controller_worker) {
    v_1573 = sub_67;
    sub_132 = sub_133;
  } else {
    v_1573 = sub_133;
    sub_132 = sub_67;
  };
  if (controller_ck_15_1) {
    sub_131 = v_1573;
  } else {
    sub_131 = sub_132;
  };
  if (controller_change_shift) {
    v_1579 = sub_131;
    sub_127 = sub_128;
  } else {
    v_1579 = sub_128;
    sub_127 = sub_131;
  };
  if (controller_ck_1) {
    v_1580 = v_1579;
  } else {
    v_1580 = sub_127;
  };
  if (controller_c_pc) {
    v_1581 = v_1578;
  } else {
    v_1581 = v_1580;
  };
  sub_137 = sub_121;
  if (controller_c_pc) {
    sub_136 = sub_137;
  } else {
    sub_136 = sub_30;
  };
  if (controller_c_window) {
    sub_119 = v_1581;
  } else {
    sub_119 = sub_136;
  };
  if (controller_worker) {
    v_1571 = sub_63;
    sub_142 = sub_133;
  } else {
    v_1571 = sub_133;
    sub_142 = sub_63;
  };
  if (controller_ck_15_1) {
    sub_141 = v_1571;
  } else {
    sub_141 = sub_142;
  };
  if (controller_change_shift) {
    v_1572 = sub_141;
    sub_140 = sub_131;
  } else {
    v_1572 = sub_131;
    sub_140 = sub_141;
  };
  if (controller_ck_1) {
    sub_139 = v_1572;
  } else {
    sub_139 = sub_140;
  };
  if (controller_c_pc) {
    sub_138 = sub_110;
  } else {
    sub_138 = sub_139;
  };
  if (controller_c_window) {
    v_1582 = sub_138;
  } else {
    v_1582 = sub_136;
  };
  if (controller_v_392) {
    v_1583 = v_1582;
  } else {
    v_1583 = sub_119;
  };
  if (controller_blind_failed_recovered) {
    sub_118 = sub_119;
  } else {
    sub_118 = v_1583;
  };
  if (controller_c_window) {
    v_1569 = sub_138;
  } else {
    v_1569 = sub_109;
  };
  sub_145 = sub_131;
  if (controller_c_pc) {
    v_1568 = sub_94;
  } else {
    v_1568 = sub_145;
  };
  if (controller_c_window) {
    sub_144 = v_1568;
  } else {
    sub_144 = sub_103;
  };
  if (controller_v_392) {
    v_1570 = v_1569;
  } else {
    v_1570 = sub_144;
  };
  if (controller_blind_failed_recovered) {
    sub_143 = sub_144;
  } else {
    sub_143 = v_1570;
  };
  if (controller_c_door) {
    v_1584 = sub_143;
    sub_117 = sub_118;
  } else {
    v_1584 = sub_118;
    sub_117 = sub_143;
  };
  if (controller_ck_11_1) {
    v_1585 = v_1584;
  } else {
    v_1585 = sub_117;
  };
  if (controller_air_failed_recovered) {
    sub_116 = v_1585;
  } else {
    sub_116 = sub_143;
  };
  if (controller_change_shift) {
    v_1563 = sub_78;
    sub_150 = sub_12;
  } else {
    v_1563 = sub_12;
    sub_150 = sub_78;
  };
  if (controller_ck_1) {
    sub_149 = v_1563;
  } else {
    sub_149 = sub_150;
  };
  if (controller_worker) {
    v_1562 = sub_80;
    sub_153 = sub_28;
  } else {
    v_1562 = sub_28;
    sub_153 = sub_80;
  };
  if (controller_ck_15_1) {
    sub_152 = v_1562;
  } else {
    sub_152 = sub_153;
  };
  if (controller_change_shift) {
    v_1564 = sub_152;
    sub_151 = sub_25;
  } else {
    v_1564 = sub_25;
    sub_151 = sub_152;
  };
  if (controller_ck_1) {
    v_1565 = v_1564;
  } else {
    v_1565 = sub_151;
  };
  if (controller_c_pc) {
    v_1566 = sub_149;
  } else {
    v_1566 = v_1565;
  };
  if (controller_c_window) {
    sub_148 = v_1566;
  } else {
    sub_148 = sub_29;
  };
  if (controller_change_shift) {
    v_1561 = sub_34;
    sub_157 = sub_152;
  } else {
    v_1561 = sub_152;
    sub_157 = sub_34;
  };
  if (controller_ck_1) {
    sub_156 = v_1561;
  } else {
    sub_156 = sub_157;
  };
  if (controller_c_pc) {
    sub_155 = sub_76;
  } else {
    sub_155 = sub_156;
  };
  if (controller_c_window) {
    sub_154 = sub_155;
  } else {
    sub_154 = sub_29;
  };
  if (controller_v_392) {
    v_1567 = sub_154;
  } else {
    v_1567 = sub_148;
  };
  if (controller_blind_failed_recovered) {
    sub_147 = sub_148;
  } else {
    sub_147 = v_1567;
  };
  sub_160 = sub_152;
  if (controller_c_pc) {
    v_1559 = sub_105;
  } else {
    v_1559 = sub_160;
  };
  sub_161 = sub_105;
  if (controller_c_window) {
    sub_159 = v_1559;
  } else {
    sub_159 = sub_161;
  };
  sub_163 = sub_76;
  if (controller_c_window) {
    sub_162 = sub_155;
  } else {
    sub_162 = sub_163;
  };
  if (controller_v_392) {
    v_1560 = sub_162;
  } else {
    v_1560 = sub_159;
  };
  if (controller_blind_failed_recovered) {
    sub_158 = sub_159;
  } else {
    sub_158 = v_1560;
  };
  if (controller_c_door) {
    v_1586 = sub_158;
    sub_146 = sub_147;
  } else {
    v_1586 = sub_147;
    sub_146 = sub_158;
  };
  if (controller_ck_11_1) {
    v_1587 = v_1586;
  } else {
    v_1587 = sub_146;
  };
  if (controller_air_failed_recovered) {
    v_1588 = v_1587;
  } else {
    v_1588 = sub_45;
  };
  if (controller_v_445) {
    sub_115 = v_1588;
  } else {
    sub_115 = sub_116;
  };
  if (controller_change_shift) {
    v_1552 = sub_107;
    sub_168 = sub_25;
  } else {
    v_1552 = sub_25;
    sub_168 = sub_107;
  };
  if (controller_ck_1) {
    v_1553 = v_1552;
  } else {
    v_1553 = sub_168;
  };
  if (controller_c_pc) {
    v_1554 = sub_149;
  } else {
    v_1554 = v_1553;
  };
  if (controller_c_window) {
    sub_167 = v_1554;
  } else {
    sub_167 = sub_29;
  };
  sub_170 = sub_107;
  if (controller_c_pc) {
    sub_169 = sub_105;
  } else {
    sub_169 = sub_170;
  };
  if (controller_c_window) {
    v_1555 = sub_169;
  } else {
    v_1555 = sub_29;
  };
  if (controller_v_392) {
    v_1556 = v_1555;
  } else {
    v_1556 = sub_167;
  };
  if (controller_blind_failed_recovered) {
    sub_166 = sub_167;
  } else {
    sub_166 = v_1556;
  };
  if (controller_c_pc) {
    sub_173 = sub_105;
  } else {
    sub_173 = sub_58;
  };
  if (controller_c_window) {
    sub_172 = sub_169;
  } else {
    sub_172 = sub_173;
  };
  sub_171 = sub_172;
  if (controller_c_door) {
    v_1557 = sub_171;
    sub_165 = sub_166;
  } else {
    v_1557 = sub_166;
    sub_165 = sub_171;
  };
  if (controller_ck_11_1) {
    v_1558 = v_1557;
  } else {
    v_1558 = sub_165;
  };
  if (controller_air_failed_recovered) {
    sub_164 = v_1558;
  } else {
    sub_164 = sub_45;
  };
  if (controller_change_shift) {
    v_1544 = sub_64;
    sub_178 = sub_72;
  } else {
    v_1544 = sub_72;
    sub_178 = sub_64;
  };
  if (controller_ck_1) {
    v_1545 = v_1544;
  } else {
    v_1545 = sub_178;
  };
  if (controller_cleaner) {
    sub_182 = sub_69;
  } else {
    sub_182 = sub_68;
  };
  if (controller_worker) {
    v_1543 = sub_18;
    sub_181 = sub_182;
  } else {
    v_1543 = sub_182;
    sub_181 = sub_18;
  };
  if (controller_ck_15_1) {
    sub_180 = v_1543;
  } else {
    sub_180 = sub_181;
  };
  if (controller_cleaner) {
    sub_185 = sub_135;
  } else {
    sub_185 = sub_134;
  };
  if (controller_worker) {
    v_1542 = sub_124;
    sub_184 = sub_185;
  } else {
    v_1542 = sub_185;
    sub_184 = sub_124;
  };
  if (controller_ck_15_1) {
    sub_183 = v_1542;
  } else {
    sub_183 = sub_184;
  };
  if (controller_change_shift) {
    v_1546 = sub_183;
    sub_179 = sub_180;
  } else {
    v_1546 = sub_180;
    sub_179 = sub_183;
  };
  if (controller_ck_1) {
    v_1547 = v_1546;
  } else {
    v_1547 = sub_179;
  };
  if (controller_c_pc) {
    v_1548 = v_1545;
    sub_186 = sub_71;
  } else {
    v_1548 = v_1547;
    sub_186 = sub_30;
  };
  if (controller_c_window) {
    sub_177 = v_1548;
  } else {
    sub_177 = sub_186;
  };
  sub_192 = false;
  if (controller_worker) {
    v_1540 = sub_192;
    sub_191 = sub_185;
  } else {
    v_1540 = sub_185;
    sub_191 = sub_192;
  };
  if (controller_ck_15_1) {
    sub_190 = v_1540;
  } else {
    sub_190 = sub_191;
  };
  if (controller_change_shift) {
    v_1541 = sub_190;
    sub_189 = sub_183;
  } else {
    v_1541 = sub_183;
    sub_189 = sub_190;
  };
  if (controller_ck_1) {
    sub_188 = v_1541;
  } else {
    sub_188 = sub_189;
  };
  if (controller_c_pc) {
    sub_187 = sub_42;
  } else {
    sub_187 = sub_188;
  };
  if (controller_c_window) {
    v_1549 = sub_187;
  } else {
    v_1549 = sub_186;
  };
  if (controller_v_392) {
    v_1550 = v_1549;
  } else {
    v_1550 = sub_177;
  };
  if (controller_blind_failed_recovered) {
    sub_176 = sub_177;
  } else {
    sub_176 = v_1550;
  };
  if (controller_change_shift) {
    sub_195 = sub_19;
    sub_196 = sub_64;
  } else {
    sub_195 = sub_64;
    sub_196 = sub_19;
  };
  if (controller_ck_1) {
    v_1536 = sub_196;
  } else {
    v_1536 = sub_195;
  };
  sub_197 = sub_183;
  if (controller_c_pc) {
    v_1537 = v_1536;
    sub_198 = sub_94;
  } else {
    v_1537 = sub_197;
    sub_198 = sub_137;
  };
  if (controller_c_window) {
    sub_194 = v_1537;
  } else {
    sub_194 = sub_198;
  };
  if (controller_ck_1) {
    sub_200 = sub_195;
  } else {
    sub_200 = sub_196;
  };
  if (controller_worker) {
    v_1533 = sub_192;
    sub_203 = sub_123;
  } else {
    v_1533 = sub_123;
    sub_203 = sub_192;
  };
  if (controller_ck_15_1) {
    sub_202 = v_1533;
  } else {
    sub_202 = sub_203;
  };
  if (controller_change_shift) {
    v_1534 = sub_202;
    sub_201 = sub_121;
  } else {
    v_1534 = sub_121;
    sub_201 = sub_202;
  };
  if (controller_ck_1) {
    v_1535 = v_1534;
  } else {
    v_1535 = sub_201;
  };
  if (controller_c_pc) {
    sub_199 = sub_200;
  } else {
    sub_199 = v_1535;
  };
  if (controller_c_window) {
    v_1538 = sub_187;
  } else {
    v_1538 = sub_199;
  };
  if (controller_v_392) {
    v_1539 = v_1538;
  } else {
    v_1539 = sub_194;
  };
  if (controller_blind_failed_recovered) {
    sub_193 = sub_194;
  } else {
    sub_193 = v_1539;
  };
  if (controller_c_door) {
    v_1551 = sub_193;
    sub_175 = sub_176;
  } else {
    v_1551 = sub_176;
    sub_175 = sub_193;
  };
  if (controller_ck_11_1) {
    sub_174 = v_1551;
  } else {
    sub_174 = sub_175;
  };
  if (controller_c_pc) {
    v_1530 = sub_200;
  } else {
    v_1530 = sub_188;
  };
  if (controller_c_window) {
    v_1531 = v_1530;
  } else {
    v_1531 = sub_199;
  };
  if (controller_c_pc) {
    v_1529 = sub_94;
  } else {
    v_1529 = sub_197;
  };
  if (controller_c_window) {
    sub_205 = v_1529;
  } else {
    sub_205 = sub_198;
  };
  if (controller_v_392) {
    v_1532 = v_1531;
  } else {
    v_1532 = sub_205;
  };
  if (controller_blind_failed_recovered) {
    sub_204 = sub_205;
  } else {
    sub_204 = v_1532;
  };
  if (controller_air_failed_recovered) {
    v_1640 = sub_174;
  } else {
    v_1640 = sub_204;
  };
  if (controller_v_445) {
    v_1641 = v_1640;
  } else {
    v_1641 = sub_164;
  };
  if (controller_v_447) {
    v_1642 = v_1641;
  } else {
    v_1642 = sub_115;
  };
  if (controller_v_446) {
    sub_4 = v_1642;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  if (controller_air_failed_recovered) {
    v_1526 = sub_174;
  } else {
    v_1526 = sub_193;
  };
  if (controller_v_445) {
    v_1527 = v_1526;
  } else {
    v_1527 = sub_164;
  };
  if (controller_c_pc) {
    sub_212 = false;
  } else {
    sub_212 = sub_82;
  };
  if (controller_c_window) {
    v_1521 = sub_212;
  } else {
    v_1521 = sub_84;
  };
  if (controller_v_392) {
    v_1522 = v_1521;
  } else {
    v_1522 = sub_56;
  };
  if (controller_blind_failed_recovered) {
    sub_211 = sub_56;
  } else {
    sub_211 = v_1522;
  };
  if (controller_c_window) {
    v_1519 = sub_212;
  } else {
    v_1519 = sub_96;
  };
  if (controller_ck_1) {
    v_1517 = sub_98;
  } else {
    v_1517 = sub_99;
  };
  if (controller_c_pc) {
    v_1518 = v_1517;
  } else {
    v_1518 = sub_92;
  };
  if (controller_c_window) {
    sub_214 = v_1518;
  } else {
    sub_214 = sub_93;
  };
  if (controller_v_392) {
    v_1520 = v_1519;
  } else {
    v_1520 = sub_214;
  };
  if (controller_blind_failed_recovered) {
    sub_213 = sub_214;
  } else {
    sub_213 = v_1520;
  };
  if (controller_c_door) {
    v_1523 = sub_213;
    sub_210 = sub_211;
  } else {
    v_1523 = sub_211;
    sub_210 = sub_213;
  };
  if (controller_ck_11_1) {
    v_1524 = v_1523;
  } else {
    v_1524 = sub_210;
  };
  if (controller_air_failed_recovered) {
    v_1525 = v_1524;
  } else {
    v_1525 = sub_100;
  };
  if (controller_v_445) {
    sub_209 = v_1525;
  } else {
    sub_209 = sub_7;
  };
  sub_215 = sub_213;
  if (controller_v_447) {
    sub_208 = sub_215;
  } else {
    sub_208 = sub_209;
  };
  if (controller_c_pc) {
    sub_220 = sub_105;
  } else {
    sub_220 = sub_139;
  };
  if (controller_c_window) {
    v_1510 = sub_220;
  } else {
    v_1510 = sub_136;
  };
  if (controller_v_392) {
    v_1511 = v_1510;
  } else {
    v_1511 = sub_119;
  };
  if (controller_blind_failed_recovered) {
    sub_219 = sub_119;
  } else {
    sub_219 = v_1511;
  };
  if (controller_c_window) {
    v_1508 = sub_220;
  } else {
    v_1508 = sub_109;
  };
  if (controller_c_pc) {
    v_1507 = sub_89;
  } else {
    v_1507 = sub_145;
  };
  if (controller_c_window) {
    sub_222 = v_1507;
  } else {
    sub_222 = sub_103;
  };
  if (controller_v_392) {
    v_1509 = v_1508;
  } else {
    v_1509 = sub_222;
  };
  if (controller_blind_failed_recovered) {
    sub_221 = sub_222;
  } else {
    sub_221 = v_1509;
  };
  if (controller_c_door) {
    v_1512 = sub_221;
    sub_218 = sub_219;
  } else {
    v_1512 = sub_219;
    sub_218 = sub_221;
  };
  if (controller_ck_11_1) {
    v_1513 = v_1512;
  } else {
    v_1513 = sub_218;
  };
  if (controller_air_failed_recovered) {
    sub_217 = v_1513;
  } else {
    sub_217 = sub_221;
  };
  if (controller_c_pc) {
    sub_225 = false;
  } else {
    sub_225 = sub_156;
  };
  if (controller_c_window) {
    v_1505 = sub_225;
  } else {
    v_1505 = sub_29;
  };
  if (controller_v_392) {
    v_1506 = v_1505;
  } else {
    v_1506 = sub_148;
  };
  if (controller_blind_failed_recovered) {
    sub_224 = sub_148;
  } else {
    sub_224 = v_1506;
  };
  if (controller_c_window) {
    v_1503 = sub_225;
  } else {
    v_1503 = sub_163;
  };
  if (controller_ck_1) {
    sub_228 = sub_77;
  } else {
    sub_228 = sub_81;
  };
  if (controller_c_pc) {
    v_1502 = sub_228;
  } else {
    v_1502 = sub_160;
  };
  if (controller_c_window) {
    sub_227 = v_1502;
  } else {
    sub_227 = sub_161;
  };
  if (controller_v_392) {
    v_1504 = v_1503;
  } else {
    v_1504 = sub_227;
  };
  if (controller_blind_failed_recovered) {
    sub_226 = sub_227;
  } else {
    sub_226 = v_1504;
  };
  if (controller_c_door) {
    v_1514 = sub_226;
    sub_223 = sub_224;
  } else {
    v_1514 = sub_224;
    sub_223 = sub_226;
  };
  if (controller_ck_11_1) {
    v_1515 = v_1514;
  } else {
    v_1515 = sub_223;
  };
  if (controller_air_failed_recovered) {
    v_1516 = v_1515;
  } else {
    v_1516 = sub_45;
  };
  if (controller_v_445) {
    sub_216 = v_1516;
  } else {
    sub_216 = sub_217;
  };
  if (controller_v_447) {
    v_1528 = v_1527;
  } else {
    v_1528 = sub_216;
  };
  if (controller_v_446) {
    sub_207 = v_1528;
  } else {
    sub_207 = sub_208;
  };
  sub_206 = sub_207;
  if (controller_v_407) {
    v_1643 = sub_3;
    sub_2 = sub_206;
  } else {
    v_1643 = sub_206;
    sub_2 = sub_3;
  };
  if (controller_v_408) {
    v_1644 = v_1643;
  } else {
    v_1644 = sub_2;
  };
  if (controller_v_392) {
    v_1491 = sub_31;
  } else {
    v_1491 = sub_48;
  };
  if (controller_blind_failed_recovered) {
    sub_234 = sub_48;
  } else {
    sub_234 = v_1491;
  };
  sub_235 = sub_43;
  if (controller_c_door) {
    v_1492 = sub_235;
    sub_233 = sub_234;
  } else {
    v_1492 = sub_234;
    sub_233 = sub_235;
  };
  if (controller_ck_11_1) {
    v_1493 = v_1492;
  } else {
    v_1493 = sub_233;
  };
  if (controller_air_failed_recovered) {
    sub_232 = v_1493;
  } else {
    sub_232 = sub_45;
  };
  if (controller_change_shift) {
    v_1487 = sub_34;
    v_1485 = false;
    sub_239 = sub_58;
  } else {
    v_1487 = sub_66;
    v_1485 = sub_58;
    sub_239 = false;
  };
  if (controller_ck_1) {
    v_1486 = v_1485;
  } else {
    v_1486 = sub_239;
  };
  if (controller_change_shift) {
    sub_240 = sub_66;
  } else {
    sub_240 = sub_34;
  };
  if (controller_ck_1) {
    v_1488 = v_1487;
  } else {
    v_1488 = sub_240;
  };
  if (controller_c_pc) {
    v_1489 = v_1486;
  } else {
    v_1489 = v_1488;
  };
  if (controller_c_window) {
    sub_238 = v_1489;
  } else {
    sub_238 = sub_84;
  };
  if (controller_v_392) {
    v_1490 = sub_74;
  } else {
    v_1490 = sub_238;
  };
  if (controller_blind_failed_recovered) {
    sub_237 = sub_238;
  } else {
    sub_237 = v_1490;
  };
  sub_241 = sub_95;
  if (controller_c_door) {
    v_1494 = sub_241;
    sub_236 = sub_237;
  } else {
    v_1494 = sub_237;
    sub_236 = sub_241;
  };
  if (controller_ck_11_1) {
    v_1495 = v_1494;
  } else {
    v_1495 = sub_236;
  };
  sub_242 = sub_104;
  if (controller_air_failed_recovered) {
    v_1496 = v_1495;
  } else {
    v_1496 = sub_242;
  };
  if (controller_v_445) {
    sub_231 = v_1496;
  } else {
    sub_231 = sub_232;
  };
  sub_244 = sub_114;
  sub_243 = sub_244;
  if (controller_v_447) {
    sub_230 = sub_243;
  } else {
    sub_230 = sub_231;
  };
  if (controller_change_shift) {
    v_1475 = sub_141;
    v_1473 = sub_78;
    sub_250 = sub_202;
  } else {
    v_1475 = sub_128;
    v_1473 = sub_202;
    sub_250 = sub_78;
  };
  if (controller_ck_1) {
    v_1474 = v_1473;
  } else {
    v_1474 = sub_250;
  };
  if (controller_change_shift) {
    sub_251 = sub_128;
  } else {
    sub_251 = sub_141;
  };
  if (controller_ck_1) {
    v_1476 = v_1475;
  } else {
    v_1476 = sub_251;
  };
  if (controller_c_pc) {
    v_1477 = v_1474;
  } else {
    v_1477 = v_1476;
  };
  if (controller_c_window) {
    sub_249 = v_1477;
  } else {
    sub_249 = sub_136;
  };
  if (controller_change_shift) {
    sub_253 = sub_19;
    sub_254 = sub_78;
  } else {
    sub_253 = sub_78;
    sub_254 = sub_19;
  };
  if (controller_ck_1) {
    v_1472 = sub_254;
  } else {
    v_1472 = sub_253;
  };
  if (controller_c_pc) {
    sub_252 = v_1472;
  } else {
    sub_252 = sub_139;
  };
  if (controller_c_window) {
    v_1478 = sub_252;
  } else {
    v_1478 = sub_136;
  };
  if (controller_v_392) {
    v_1479 = v_1478;
  } else {
    v_1479 = sub_249;
  };
  if (controller_blind_failed_recovered) {
    sub_248 = sub_249;
  } else {
    sub_248 = v_1479;
  };
  if (controller_c_window) {
    sub_256 = sub_252;
  } else {
    sub_256 = sub_109;
  };
  sub_255 = sub_256;
  if (controller_c_door) {
    v_1480 = sub_255;
    sub_247 = sub_248;
  } else {
    v_1480 = sub_248;
    sub_247 = sub_255;
  };
  if (controller_ck_11_1) {
    v_1481 = v_1480;
  } else {
    v_1481 = sub_247;
  };
  if (controller_air_failed_recovered) {
    sub_246 = v_1481;
  } else {
    sub_246 = sub_255;
  };
  if (controller_v_392) {
    v_1471 = sub_154;
  } else {
    v_1471 = sub_48;
  };
  if (controller_blind_failed_recovered) {
    sub_258 = sub_48;
  } else {
    sub_258 = v_1471;
  };
  sub_259 = sub_162;
  if (controller_c_door) {
    v_1482 = sub_259;
    sub_257 = sub_258;
  } else {
    v_1482 = sub_258;
    sub_257 = sub_259;
  };
  if (controller_ck_11_1) {
    v_1483 = v_1482;
  } else {
    v_1483 = sub_257;
  };
  if (controller_air_failed_recovered) {
    v_1484 = v_1483;
  } else {
    v_1484 = sub_45;
  };
  if (controller_v_445) {
    sub_245 = v_1484;
  } else {
    sub_245 = sub_246;
  };
  if (controller_c_pc) {
    sub_263 = sub_228;
  } else {
    sub_263 = sub_170;
  };
  if (controller_c_window) {
    v_1467 = sub_263;
  } else {
    v_1467 = sub_29;
  };
  if (controller_v_392) {
    v_1468 = v_1467;
  } else {
    v_1468 = sub_167;
  };
  if (controller_blind_failed_recovered) {
    sub_262 = sub_167;
  } else {
    sub_262 = v_1468;
  };
  if (controller_c_window) {
    sub_265 = sub_263;
  } else {
    sub_265 = sub_173;
  };
  sub_264 = sub_265;
  if (controller_c_door) {
    v_1469 = sub_264;
    sub_261 = sub_262;
  } else {
    v_1469 = sub_262;
    sub_261 = sub_264;
  };
  if (controller_ck_11_1) {
    v_1470 = v_1469;
  } else {
    v_1470 = sub_261;
  };
  if (controller_air_failed_recovered) {
    sub_260 = v_1470;
  } else {
    sub_260 = sub_45;
  };
  if (controller_change_shift) {
    v_1462 = sub_190;
    v_1460 = sub_19;
    sub_269 = sub_58;
  } else {
    v_1462 = sub_180;
    v_1460 = sub_58;
    sub_269 = sub_19;
  };
  if (controller_ck_1) {
    v_1461 = v_1460;
  } else {
    v_1461 = sub_269;
  };
  if (controller_change_shift) {
    sub_270 = sub_180;
  } else {
    sub_270 = sub_190;
  };
  if (controller_ck_1) {
    v_1463 = v_1462;
  } else {
    v_1463 = sub_270;
  };
  if (controller_c_pc) {
    v_1464 = v_1461;
  } else {
    v_1464 = v_1463;
  };
  if (controller_c_window) {
    sub_268 = v_1464;
  } else {
    sub_268 = sub_186;
  };
  if (controller_c_pc) {
    sub_271 = sub_39;
  } else {
    sub_271 = sub_188;
  };
  if (controller_c_window) {
    v_1465 = sub_271;
  } else {
    v_1465 = sub_186;
  };
  if (controller_v_392) {
    v_1466 = v_1465;
  } else {
    v_1466 = sub_268;
  };
  if (controller_blind_failed_recovered) {
    sub_267 = sub_268;
  } else {
    sub_267 = v_1466;
  };
  if (controller_c_window) {
    sub_273 = sub_271;
  } else {
    sub_273 = sub_199;
  };
  sub_272 = sub_273;
  if (controller_c_door) {
    v_1497 = sub_272;
    sub_266 = sub_267;
  } else {
    v_1497 = sub_267;
    sub_266 = sub_272;
  };
  if (controller_ck_11_1) {
    v_1498 = v_1497;
  } else {
    v_1498 = sub_266;
  };
  if (controller_ck_1) {
    v = sub_253;
  } else {
    v = sub_254;
  };
  if (controller_c_pc) {
    v_1459 = v;
  } else {
    v_1459 = sub_188;
  };
  if (controller_c_window) {
    sub_275 = v_1459;
  } else {
    sub_275 = sub_199;
  };
  sub_274 = sub_275;
  if (controller_air_failed_recovered) {
    v_1499 = v_1498;
  } else {
    v_1499 = sub_274;
  };
  if (controller_v_445) {
    v_1500 = v_1499;
  } else {
    v_1500 = sub_260;
  };
  if (controller_v_447) {
    v_1501 = v_1500;
  } else {
    v_1501 = sub_245;
  };
  if (controller_v_446) {
    sub_229 = v_1501;
  } else {
    sub_229 = sub_230;
  };
  if (controller_v_408) {
    v_1645 = sub_229;
  } else {
    v_1645 = sub_206;
  };
  if (controller_light_failed_recovered) {
    sub_1 = v_1644;
  } else {
    sub_1 = v_1645;
  };
  sub_0 = sub_1;
  _out->controller_c_air_1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_window_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered, int controller_ck_1,
  int controller_pnr_9, int controller_ck_11_1, int controller_pnr_8,
  int controller_ck_13_1, int controller_pnr_7, int controller_ck_15_1,
  int controller_pnr_6, int controller_ck_17_1, int controller_pnr_5,
  int controller_ck_19_1, int controller_pnr_4, int controller_ck_21_1,
  int controller_pnr_3, int controller_v_447, int controller_v_446,
  int controller_v_445, int controller_pnr_2, int controller_v_408,
  int controller_v_407, int controller_pnr_1, int controller_v_392,
  int controller_v_391, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_window_out* _out) {
  
  int v_1714;
  int v_1713;
  int v_1712;
  int v_1711;
  int v_1710;
  int v_1709;
  int v_1708;
  int v_1707;
  int v_1706;
  int v_1705;
  int v_1704;
  int v_1703;
  int v_1702;
  int v_1701;
  int v_1700;
  int v_1699;
  int v_1698;
  int v_1697;
  int v_1696;
  int v_1695;
  int v_1694;
  int v_1693;
  int v_1692;
  int v_1691;
  int v_1690;
  int v_1689;
  int v_1688;
  int v_1687;
  int v_1686;
  int v_1685;
  int v_1684;
  int v_1683;
  int v_1682;
  int v_1681;
  int v_1680;
  int v_1679;
  int v_1678;
  int v_1677;
  int v_1676;
  int v_1675;
  int v_1674;
  int v_1673;
  int v_1672;
  int v_1671;
  int v_1670;
  int v_1669;
  int v_1668;
  int v_1667;
  int v_1666;
  int v_1665;
  int v_1664;
  int v_1663;
  int v_1662;
  int v_1661;
  int v_1660;
  int v_1659;
  int v_1658;
  int v_1657;
  int v_1656;
  int v_1655;
  int v_1654;
  int v_1653;
  int v_1652;
  int v_1651;
  int v_1650;
  int v_1649;
  int v_1648;
  int v_1647;
  int v_1646;
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
  sub_18 = p_controller_c_window;
  if (controller_ck_17_1) {
    sub_17 = sub_18;
    sub_19 = false;
  } else {
    sub_17 = false;
    sub_19 = sub_18;
  };
  if (controller_cleaner) {
    sub_16 = sub_17;
  } else {
    sub_16 = sub_19;
  };
  sub_20 = sub_18;
  if (controller_worker) {
    v_1704 = sub_20;
    sub_15 = sub_16;
  } else {
    v_1704 = sub_16;
    sub_15 = sub_20;
  };
  if (controller_ck_15_1) {
    sub_14 = v_1704;
  } else {
    sub_14 = sub_15;
  };
  v_1702 = !(controller_ck_17_1);
  sub_24 = (v_1702&&false);
  sub_25 = (controller_ck_17_1&&false);
  if (controller_cleaner) {
    sub_23 = sub_24;
  } else {
    sub_23 = sub_25;
  };
  v_1701 = (controller_ck_17_1&&sub_18);
  v_1699 = !(controller_ck_17_1);
  v_1700 = (v_1699&&sub_18);
  if (controller_cleaner) {
    sub_26 = v_1700;
  } else {
    sub_26 = v_1701;
  };
  if (controller_worker) {
    v_1703 = sub_26;
    sub_22 = sub_23;
  } else {
    v_1703 = sub_23;
    sub_22 = sub_26;
  };
  if (controller_ck_15_1) {
    sub_21 = v_1703;
  } else {
    sub_21 = sub_22;
  };
  if (controller_change_shift) {
    v_1705 = sub_21;
    sub_13 = sub_14;
  } else {
    v_1705 = sub_14;
    sub_13 = sub_21;
  };
  if (controller_ck_1) {
    sub_12 = v_1705;
  } else {
    sub_12 = sub_13;
  };
  v_1697 = (controller_ck_17_1||sub_18);
  v_1695 = !(controller_ck_17_1);
  v_1696 = (v_1695||sub_18);
  if (controller_cleaner) {
    sub_30 = v_1696;
  } else {
    sub_30 = v_1697;
  };
  if (controller_worker) {
    v_1698 = sub_20;
    sub_29 = sub_30;
  } else {
    v_1698 = sub_30;
    sub_29 = sub_20;
  };
  if (controller_ck_15_1) {
    sub_28 = v_1698;
  } else {
    sub_28 = sub_29;
  };
  v_1693 = !(controller_ck_17_1);
  if (controller_cleaner) {
    sub_33 = v_1693;
  } else {
    sub_33 = controller_ck_17_1;
  };
  if (controller_worker) {
    v_1694 = sub_26;
    sub_32 = sub_33;
  } else {
    v_1694 = sub_33;
    sub_32 = sub_26;
  };
  if (controller_ck_15_1) {
    sub_31 = v_1694;
  } else {
    sub_31 = sub_32;
  };
  if (controller_change_shift) {
    v_1706 = sub_31;
    sub_27 = sub_28;
  } else {
    v_1706 = sub_28;
    sub_27 = sub_31;
  };
  if (controller_ck_1) {
    v_1707 = v_1706;
  } else {
    v_1707 = sub_27;
  };
  if (controller_c_pc) {
    sub_11 = sub_12;
  } else {
    sub_11 = v_1707;
  };
  sub_38 = false;
  if (controller_worker) {
    v_1692 = sub_38;
    sub_37 = sub_23;
  } else {
    v_1692 = sub_23;
    sub_37 = sub_38;
  };
  if (controller_ck_15_1) {
    sub_36 = v_1692;
  } else {
    sub_36 = sub_37;
  };
  sub_35 = sub_36;
  if (controller_worker) {
    v_1690 = sub_38;
    sub_42 = sub_33;
  } else {
    v_1690 = sub_33;
    sub_42 = sub_38;
  };
  if (controller_ck_15_1) {
    sub_41 = v_1690;
  } else {
    sub_41 = sub_42;
  };
  if (controller_change_shift) {
    v_1691 = sub_41;
    sub_40 = sub_31;
  } else {
    v_1691 = sub_31;
    sub_40 = sub_41;
  };
  if (controller_ck_1) {
    sub_39 = v_1691;
  } else {
    sub_39 = sub_40;
  };
  if (controller_c_pc) {
    sub_34 = sub_35;
  } else {
    sub_34 = sub_39;
  };
  if (controller_v_392) {
    v_1708 = sub_34;
  } else {
    v_1708 = sub_11;
  };
  if (controller_blind_failed_recovered) {
    sub_10 = sub_11;
  } else {
    sub_10 = v_1708;
  };
  if (controller_cleaner) {
    sub_49 = sub_25;
  } else {
    sub_49 = sub_24;
  };
  if (controller_worker) {
    v_1687 = sub_49;
    sub_48 = false;
  } else {
    v_1687 = false;
    sub_48 = sub_49;
  };
  if (controller_ck_15_1) {
    sub_47 = v_1687;
  } else {
    sub_47 = sub_48;
  };
  if (controller_cleaner) {
    sub_52 = sub_19;
  } else {
    sub_52 = sub_17;
  };
  if (controller_worker) {
    v_1686 = sub_52;
    sub_51 = false;
  } else {
    v_1686 = false;
    sub_51 = sub_52;
  };
  if (controller_ck_15_1) {
    sub_50 = v_1686;
  } else {
    sub_50 = sub_51;
  };
  if (controller_change_shift) {
    v_1688 = sub_50;
    sub_46 = sub_47;
  } else {
    v_1688 = sub_47;
    sub_46 = sub_50;
  };
  if (controller_ck_1) {
    sub_45 = v_1688;
  } else {
    sub_45 = sub_46;
  };
  v_1684 = (controller_ck_17_1||false);
  v_1682 = !(controller_ck_17_1);
  v_1683 = (v_1682||false);
  if (controller_cleaner) {
    sub_56 = v_1683;
  } else {
    sub_56 = v_1684;
  };
  if (controller_worker) {
    v_1685 = sub_52;
    sub_55 = sub_56;
  } else {
    v_1685 = sub_56;
    sub_55 = sub_52;
  };
  if (controller_ck_15_1) {
    sub_54 = v_1685;
  } else {
    sub_54 = sub_55;
  };
  sub_53 = sub_54;
  if (controller_c_pc) {
    sub_44 = sub_45;
  } else {
    sub_44 = sub_53;
  };
  if (controller_change_shift) {
    v_1680 = false;
    sub_58 = sub_47;
  } else {
    v_1680 = sub_47;
    sub_58 = false;
  };
  if (controller_ck_1) {
    v_1681 = v_1680;
  } else {
    v_1681 = sub_58;
  };
  if (controller_worker) {
    v_1678 = false;
    sub_62 = sub_56;
  } else {
    v_1678 = sub_56;
    sub_62 = false;
  };
  if (controller_ck_15_1) {
    sub_61 = v_1678;
  } else {
    sub_61 = sub_62;
  };
  if (controller_change_shift) {
    v_1679 = sub_61;
    sub_60 = sub_54;
  } else {
    v_1679 = sub_54;
    sub_60 = sub_61;
  };
  if (controller_ck_1) {
    sub_59 = v_1679;
  } else {
    sub_59 = sub_60;
  };
  if (controller_c_pc) {
    sub_57 = v_1681;
  } else {
    sub_57 = sub_59;
  };
  if (controller_v_392) {
    v_1689 = sub_57;
  } else {
    v_1689 = sub_44;
  };
  if (controller_blind_failed_recovered) {
    sub_43 = sub_44;
  } else {
    sub_43 = v_1689;
  };
  if (controller_c_door) {
    v_1709 = sub_43;
    sub_9 = sub_10;
  } else {
    v_1709 = sub_10;
    sub_9 = sub_43;
  };
  if (controller_ck_11_1) {
    sub_8 = v_1709;
  } else {
    sub_8 = sub_9;
  };
  if (controller_c_pc) {
    v_1675 = sub_35;
  } else {
    v_1675 = sub_41;
  };
  if (controller_change_shift) {
    v_1673 = sub_41;
    v_1671 = sub_36;
    sub_67 = sub_14;
  } else {
    v_1673 = sub_28;
    v_1671 = sub_14;
    sub_67 = sub_36;
  };
  if (controller_ck_1) {
    v_1672 = v_1671;
  } else {
    v_1672 = sub_67;
  };
  if (controller_change_shift) {
    sub_68 = sub_28;
  } else {
    sub_68 = sub_41;
  };
  if (controller_ck_1) {
    v_1674 = v_1673;
  } else {
    v_1674 = sub_68;
  };
  if (controller_c_pc) {
    sub_66 = v_1672;
  } else {
    sub_66 = v_1674;
  };
  if (controller_v_392) {
    v_1676 = v_1675;
  } else {
    v_1676 = sub_66;
  };
  if (controller_blind_failed_recovered) {
    sub_65 = sub_66;
  } else {
    sub_65 = v_1676;
  };
  if (controller_c_pc) {
    sub_70 = false;
  } else {
    sub_70 = sub_61;
  };
  sub_69 = sub_70;
  if (controller_c_door) {
    v_1677 = sub_69;
    sub_64 = sub_65;
  } else {
    v_1677 = sub_65;
    sub_64 = sub_69;
  };
  if (controller_ck_11_1) {
    sub_63 = v_1677;
  } else {
    sub_63 = sub_64;
  };
  if (controller_air_failed_recovered) {
    sub_7 = sub_8;
  } else {
    sub_7 = sub_63;
  };
  if (controller_change_shift) {
    sub_75 = sub_21;
    sub_76 = sub_36;
  } else {
    sub_75 = sub_36;
    sub_76 = sub_21;
  };
  if (controller_ck_1) {
    v_1668 = sub_76;
  } else {
    v_1668 = sub_75;
  };
  if (controller_c_pc) {
    sub_74 = v_1668;
  } else {
    sub_74 = sub_39;
  };
  if (controller_v_392) {
    v_1669 = sub_74;
  } else {
    v_1669 = sub_11;
  };
  if (controller_blind_failed_recovered) {
    sub_73 = sub_11;
  } else {
    sub_73 = v_1669;
  };
  sub_79 = sub_50;
  if (controller_c_pc) {
    sub_78 = sub_79;
  } else {
    sub_78 = sub_53;
  };
  if (controller_change_shift) {
    v_1665 = false;
    sub_81 = sub_50;
  } else {
    v_1665 = sub_50;
    sub_81 = false;
  };
  if (controller_ck_1) {
    v_1666 = v_1665;
  } else {
    v_1666 = sub_81;
  };
  if (controller_c_pc) {
    sub_80 = v_1666;
  } else {
    sub_80 = sub_59;
  };
  if (controller_v_392) {
    v_1667 = sub_80;
  } else {
    v_1667 = sub_78;
  };
  if (controller_blind_failed_recovered) {
    sub_77 = sub_78;
  } else {
    sub_77 = v_1667;
  };
  if (controller_c_door) {
    v_1670 = sub_77;
    sub_72 = sub_73;
  } else {
    v_1670 = sub_73;
    sub_72 = sub_77;
  };
  if (controller_ck_11_1) {
    sub_71 = v_1670;
  } else {
    sub_71 = sub_72;
  };
  sub_85 = sub_28;
  if (controller_c_pc) {
    sub_84 = sub_79;
  } else {
    sub_84 = sub_85;
  };
  sub_83 = sub_84;
  sub_82 = sub_83;
  if (controller_air_failed_recovered) {
    v_1710 = sub_71;
  } else {
    v_1710 = sub_82;
  };
  if (controller_v_445) {
    sub_6 = v_1710;
  } else {
    sub_6 = sub_7;
  };
  sub_86 = sub_77;
  if (controller_v_447) {
    sub_5 = sub_86;
  } else {
    sub_5 = sub_6;
  };
  if (controller_air_failed_recovered) {
    v_1664 = sub_71;
  } else {
    v_1664 = sub_63;
  };
  if (controller_c_pc) {
    v_1661 = sub_21;
    sub_92 = sub_12;
  } else {
    v_1661 = sub_85;
    sub_92 = sub_85;
  };
  if (controller_v_392) {
    v_1662 = v_1661;
  } else {
    v_1662 = sub_92;
  };
  if (controller_blind_failed_recovered) {
    sub_91 = sub_92;
  } else {
    sub_91 = v_1662;
  };
  if (controller_c_door) {
    v_1663 = sub_83;
    sub_90 = sub_91;
  } else {
    v_1663 = sub_91;
    sub_90 = sub_83;
  };
  if (controller_ck_11_1) {
    sub_89 = v_1663;
  } else {
    sub_89 = sub_90;
  };
  if (controller_air_failed_recovered) {
    sub_88 = sub_89;
  } else {
    sub_88 = sub_82;
  };
  if (controller_v_445) {
    sub_87 = v_1664;
  } else {
    sub_87 = sub_88;
  };
  if (controller_air_failed_recovered) {
    sub_94 = sub_89;
  } else {
    sub_94 = sub_63;
  };
  if (controller_v_445) {
    sub_93 = sub_88;
  } else {
    sub_93 = sub_94;
  };
  if (controller_v_447) {
    v_1711 = sub_93;
  } else {
    v_1711 = sub_87;
  };
  if (controller_v_446) {
    sub_4 = v_1711;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  if (controller_air_failed_recovered) {
    v_1659 = sub_8;
  } else {
    v_1659 = sub_82;
  };
  if (controller_v_445) {
    sub_98 = v_1659;
  } else {
    sub_98 = sub_7;
  };
  sub_99 = sub_43;
  if (controller_v_447) {
    sub_97 = sub_99;
  } else {
    sub_97 = sub_98;
  };
  if (controller_v_445) {
    sub_100 = sub_7;
  } else {
    sub_100 = sub_88;
  };
  if (controller_v_447) {
    v_1660 = sub_93;
  } else {
    v_1660 = sub_100;
  };
  if (controller_v_446) {
    sub_96 = v_1660;
  } else {
    sub_96 = sub_97;
  };
  sub_95 = sub_96;
  if (controller_v_407) {
    v_1712 = sub_3;
    sub_2 = sub_95;
  } else {
    v_1712 = sub_95;
    sub_2 = sub_3;
  };
  if (controller_v_408) {
    v_1713 = v_1712;
  } else {
    v_1713 = sub_2;
  };
  if (controller_v_392) {
    v_1652 = sub_34;
  } else {
    v_1652 = sub_66;
  };
  if (controller_blind_failed_recovered) {
    sub_106 = sub_66;
  } else {
    sub_106 = v_1652;
  };
  sub_107 = sub_57;
  if (controller_c_door) {
    v_1653 = sub_107;
    sub_105 = sub_106;
  } else {
    v_1653 = sub_106;
    sub_105 = sub_107;
  };
  if (controller_ck_11_1) {
    v_1654 = v_1653;
  } else {
    v_1654 = sub_105;
  };
  if (controller_air_failed_recovered) {
    sub_104 = v_1654;
  } else {
    sub_104 = sub_63;
  };
  if (controller_v_392) {
    v_1650 = sub_74;
  } else {
    v_1650 = sub_66;
  };
  if (controller_blind_failed_recovered) {
    sub_110 = sub_66;
  } else {
    sub_110 = v_1650;
  };
  sub_111 = sub_80;
  if (controller_c_door) {
    v_1651 = sub_111;
    sub_109 = sub_110;
  } else {
    v_1651 = sub_110;
    sub_109 = sub_111;
  };
  if (controller_ck_11_1) {
    sub_108 = v_1651;
  } else {
    sub_108 = sub_109;
  };
  if (controller_air_failed_recovered) {
    v_1655 = sub_108;
  } else {
    v_1655 = sub_82;
  };
  if (controller_v_445) {
    sub_103 = v_1655;
  } else {
    sub_103 = sub_104;
  };
  sub_112 = sub_111;
  if (controller_v_447) {
    sub_102 = sub_112;
  } else {
    sub_102 = sub_103;
  };
  if (controller_air_failed_recovered) {
    v_1649 = sub_108;
  } else {
    v_1649 = sub_63;
  };
  if (controller_v_445) {
    sub_113 = v_1649;
  } else {
    sub_113 = sub_88;
  };
  if (controller_ck_1) {
    v = sub_75;
  } else {
    v = sub_76;
  };
  if (controller_c_pc) {
    v_1646 = v;
  } else {
    v_1646 = sub_85;
  };
  if (controller_v_392) {
    v_1647 = v_1646;
  } else {
    v_1647 = sub_92;
  };
  if (controller_blind_failed_recovered) {
    sub_117 = sub_92;
  } else {
    sub_117 = v_1647;
  };
  if (controller_c_pc) {
    sub_119 = sub_45;
  } else {
    sub_119 = sub_85;
  };
  sub_118 = sub_119;
  if (controller_c_door) {
    v_1648 = sub_118;
    sub_116 = sub_117;
  } else {
    v_1648 = sub_117;
    sub_116 = sub_118;
  };
  if (controller_ck_11_1) {
    sub_115 = v_1648;
  } else {
    sub_115 = sub_116;
  };
  if (controller_air_failed_recovered) {
    v_1656 = sub_115;
    sub_114 = sub_115;
  } else {
    v_1656 = sub_82;
    sub_114 = sub_63;
  };
  if (controller_v_445) {
    v_1657 = v_1656;
  } else {
    v_1657 = sub_114;
  };
  if (controller_v_447) {
    v_1658 = v_1657;
  } else {
    v_1658 = sub_113;
  };
  if (controller_v_446) {
    sub_101 = v_1658;
  } else {
    sub_101 = sub_102;
  };
  if (controller_v_408) {
    v_1714 = sub_101;
  } else {
    v_1714 = sub_95;
  };
  if (controller_light_failed_recovered) {
    sub_1 = v_1713;
  } else {
    sub_1 = v_1714;
  };
  sub_0 = sub_1;
  _out->controller_c_window = sub_0;;
}

void Controller_controller__controller_controller_controller_c_pc_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered, int controller_ck_1,
  int controller_pnr_9, int controller_ck_11_1, int controller_pnr_8,
  int controller_ck_13_1, int controller_pnr_7, int controller_ck_15_1,
  int controller_pnr_6, int controller_ck_17_1, int controller_pnr_5,
  int controller_ck_19_1, int controller_pnr_4, int controller_ck_21_1,
  int controller_pnr_3, int controller_v_447, int controller_v_446,
  int controller_v_445, int controller_pnr_2, int controller_v_408,
  int controller_v_407, int controller_pnr_1, int controller_v_392,
  int controller_v_391, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_pc_out* _out) {
  
  int v_1734;
  int v_1733;
  int v_1732;
  int v_1731;
  int v_1730;
  int v_1729;
  int v_1728;
  int v_1727;
  int v_1726;
  int v_1725;
  int v_1724;
  int v_1723;
  int v_1722;
  int v_1721;
  int v_1720;
  int v_1719;
  int v_1718;
  int v_1717;
  int v_1716;
  int v_1715;
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
  sub_15 = p_controller_c_pc;
  sub_14 = (controller_ck_17_1&&sub_15);
  v_1729 = !(controller_ck_17_1);
  sub_16 = (v_1729&&sub_15);
  if (controller_cleaner) {
    sub_13 = sub_14;
  } else {
    sub_13 = sub_16;
  };
  sub_17 = sub_15;
  if (controller_worker) {
    v_1730 = sub_17;
    sub_12 = sub_13;
  } else {
    v_1730 = sub_13;
    sub_12 = sub_17;
  };
  if (controller_ck_15_1) {
    sub_11 = v_1730;
  } else {
    sub_11 = sub_12;
  };
  sub_10 = sub_11;
  sub_9 = sub_10;
  v_1725 = !(controller_ck_17_1);
  v_1726 = (v_1725&&false);
  v_1724 = (controller_ck_17_1&&false);
  if (controller_cleaner) {
    sub_22 = v_1724;
  } else {
    sub_22 = v_1726;
  };
  if (controller_ck_17_1) {
    v_1723 = sub_15;
    v_1722 = false;
  } else {
    v_1723 = false;
    v_1722 = sub_15;
  };
  if (controller_cleaner) {
    sub_23 = v_1722;
  } else {
    sub_23 = v_1723;
  };
  if (controller_worker) {
    v_1727 = sub_23;
    sub_21 = sub_22;
  } else {
    v_1727 = sub_22;
    sub_21 = sub_23;
  };
  if (controller_ck_15_1) {
    sub_20 = v_1727;
  } else {
    sub_20 = sub_21;
  };
  sub_19 = sub_20;
  if (controller_worker) {
    v_1720 = false;
    sub_27 = sub_22;
  } else {
    v_1720 = sub_22;
    sub_27 = false;
  };
  if (controller_ck_15_1) {
    sub_26 = v_1720;
  } else {
    sub_26 = sub_27;
  };
  if (controller_change_shift) {
    v_1721 = sub_26;
    sub_25 = sub_20;
  } else {
    v_1721 = sub_20;
    sub_25 = sub_26;
  };
  if (controller_ck_1) {
    sub_24 = v_1721;
  } else {
    sub_24 = sub_25;
  };
  if (controller_v_392) {
    v_1728 = sub_24;
  } else {
    v_1728 = sub_19;
  };
  if (controller_blind_failed_recovered) {
    sub_18 = sub_19;
  } else {
    sub_18 = v_1728;
  };
  if (controller_c_door) {
    v_1731 = sub_18;
    sub_8 = sub_9;
  } else {
    v_1731 = sub_9;
    sub_8 = sub_18;
  };
  if (controller_ck_11_1) {
    sub_7 = v_1731;
  } else {
    sub_7 = sub_8;
  };
  sub_31 = sub_26;
  sub_30 = sub_31;
  if (controller_c_door) {
    v_1719 = sub_30;
    sub_29 = sub_9;
  } else {
    v_1719 = sub_9;
    sub_29 = sub_30;
  };
  if (controller_ck_11_1) {
    sub_28 = v_1719;
  } else {
    sub_28 = sub_29;
  };
  if (controller_air_failed_recovered) {
    sub_6 = sub_7;
  } else {
    sub_6 = sub_28;
  };
  sub_37 = false;
  if (controller_cleaner) {
    sub_38 = sub_16;
  } else {
    sub_38 = sub_14;
  };
  if (controller_worker) {
    v_1718 = sub_38;
    sub_36 = sub_37;
  } else {
    v_1718 = sub_37;
    sub_36 = sub_38;
  };
  if (controller_ck_15_1) {
    sub_35 = v_1718;
  } else {
    sub_35 = sub_36;
  };
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  if (controller_air_failed_recovered) {
    v_1732 = sub_7;
  } else {
    v_1732 = sub_32;
  };
  if (controller_v_445) {
    sub_5 = v_1732;
  } else {
    sub_5 = sub_6;
  };
  sub_39 = sub_18;
  if (controller_v_447) {
    sub_4 = sub_39;
  } else {
    sub_4 = sub_5;
  };
  if (controller_c_door) {
    v_1717 = sub_33;
    sub_43 = sub_9;
  } else {
    v_1717 = sub_9;
    sub_43 = sub_33;
  };
  if (controller_ck_11_1) {
    sub_42 = v_1717;
  } else {
    sub_42 = sub_43;
  };
  if (controller_air_failed_recovered) {
    sub_41 = sub_42;
  } else {
    sub_41 = sub_32;
  };
  if (controller_v_445) {
    sub_40 = sub_6;
  } else {
    sub_40 = sub_41;
  };
  if (controller_air_failed_recovered) {
    sub_45 = sub_42;
  } else {
    sub_45 = sub_28;
  };
  if (controller_v_445) {
    sub_44 = sub_41;
  } else {
    sub_44 = sub_45;
  };
  if (controller_v_447) {
    v_1733 = sub_44;
  } else {
    v_1733 = sub_40;
  };
  if (controller_v_446) {
    sub_3 = v_1733;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  sub_52 = sub_24;
  if (controller_c_door) {
    v = sub_52;
    sub_51 = sub_9;
  } else {
    v = sub_9;
    sub_51 = sub_52;
  };
  if (controller_ck_11_1) {
    sub_50 = v;
  } else {
    sub_50 = sub_51;
  };
  if (controller_air_failed_recovered) {
    v_1715 = sub_50;
    sub_49 = sub_50;
  } else {
    v_1715 = sub_32;
    sub_49 = sub_28;
  };
  if (controller_v_445) {
    sub_48 = v_1715;
  } else {
    sub_48 = sub_49;
  };
  sub_53 = sub_52;
  if (controller_v_447) {
    sub_47 = sub_53;
  } else {
    sub_47 = sub_48;
  };
  if (controller_v_445) {
    sub_54 = sub_49;
  } else {
    sub_54 = sub_41;
  };
  if (controller_v_447) {
    v_1716 = sub_44;
  } else {
    v_1716 = sub_54;
  };
  if (controller_v_446) {
    sub_46 = v_1716;
  } else {
    sub_46 = sub_47;
  };
  if (controller_v_408) {
    v_1734 = sub_46;
  } else {
    v_1734 = sub_2;
  };
  if (controller_light_failed_recovered) {
    sub_1 = sub_2;
  } else {
    sub_1 = v_1734;
  };
  sub_0 = sub_1;
  _out->controller_c_pc = sub_0;;
}

void Controller_controller__controller_controller_controller_c_door_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered, int controller_ck_1,
  int controller_pnr_9, int controller_ck_11_1, int controller_pnr_8,
  int controller_ck_13_1, int controller_pnr_7, int controller_ck_15_1,
  int controller_pnr_6, int controller_ck_17_1, int controller_pnr_5,
  int controller_ck_19_1, int controller_pnr_4, int controller_ck_21_1,
  int controller_pnr_3, int controller_v_447, int controller_v_446,
  int controller_v_445, int controller_pnr_2, int controller_v_408,
  int controller_v_407, int controller_pnr_1, int controller_v_392,
  int controller_v_391, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  Controller_controller__controller_controller_controller_c_door_out* _out) {
  
  int v_1756;
  int v_1755;
  int v_1754;
  int v_1753;
  int v_1752;
  int v_1751;
  int v_1750;
  int v_1749;
  int v_1748;
  int v_1747;
  int v_1746;
  int v_1745;
  int v_1744;
  int v_1743;
  int v_1742;
  int v_1741;
  int v_1740;
  int v_1739;
  int v_1738;
  int v_1737;
  int v_1736;
  int v_1735;
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
  v_1749 = !(controller_ck_17_1);
  sub_12 = p_controller_c_door;
  v_1750 = (v_1749||sub_12);
  v_1748 = (controller_ck_17_1||sub_12);
  if (controller_cleaner) {
    sub_11 = v_1748;
  } else {
    sub_11 = v_1750;
  };
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_17 = true;
  if (controller_worker) {
    v_1746 = sub_17;
    sub_16 = sub_11;
  } else {
    v_1746 = sub_11;
    sub_16 = sub_17;
  };
  if (controller_ck_15_1) {
    sub_15 = v_1746;
  } else {
    sub_15 = sub_16;
  };
  if (controller_change_shift) {
    v_1747 = sub_15;
    sub_14 = sub_10;
  } else {
    v_1747 = sub_10;
    sub_14 = sub_15;
  };
  if (controller_ck_1) {
    sub_13 = v_1747;
  } else {
    sub_13 = sub_14;
  };
  if (controller_v_392) {
    v_1751 = sub_13;
  } else {
    v_1751 = sub_9;
  };
  if (controller_blind_failed_recovered) {
    sub_8 = sub_9;
  } else {
    sub_8 = v_1751;
  };
  v_1745 = (controller_ck_17_1&&sub_12);
  v_1743 = !(controller_ck_17_1);
  v_1744 = (v_1743&&sub_12);
  if (controller_cleaner) {
    sub_20 = v_1744;
  } else {
    sub_20 = v_1745;
  };
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_25 = false;
  if (controller_worker) {
    v_1741 = sub_25;
    sub_24 = sub_20;
  } else {
    v_1741 = sub_20;
    sub_24 = sub_25;
  };
  if (controller_ck_15_1) {
    sub_23 = v_1741;
  } else {
    sub_23 = sub_24;
  };
  if (controller_change_shift) {
    v_1742 = sub_23;
    sub_22 = sub_19;
  } else {
    v_1742 = sub_19;
    sub_22 = sub_23;
  };
  if (controller_ck_1) {
    sub_21 = v_1742;
  } else {
    sub_21 = sub_22;
  };
  if (controller_v_392) {
    v_1752 = sub_21;
  } else {
    v_1752 = sub_18;
  };
  if (controller_blind_failed_recovered) {
    v_1753 = sub_18;
  } else {
    v_1753 = v_1752;
  };
  if (controller_ck_11_1) {
    sub_7 = v_1753;
  } else {
    sub_7 = sub_8;
  };
  sub_28 = sub_15;
  sub_27 = sub_28;
  sub_29 = sub_23;
  if (controller_ck_11_1) {
    sub_26 = sub_29;
  } else {
    sub_26 = sub_27;
  };
  if (controller_air_failed_recovered) {
    sub_6 = sub_7;
  } else {
    sub_6 = sub_26;
  };
  sub_33 = sub_12;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  if (controller_air_failed_recovered) {
    v_1754 = sub_7;
  } else {
    v_1754 = sub_30;
  };
  if (controller_v_445) {
    sub_5 = v_1754;
  } else {
    sub_5 = sub_6;
  };
  if (controller_ck_17_1) {
    v_1739 = sub_12;
    v_1738 = false;
  } else {
    v_1739 = false;
    v_1738 = sub_12;
  };
  if (controller_cleaner) {
    sub_37 = v_1738;
  } else {
    sub_37 = v_1739;
  };
  sub_36 = sub_37;
  sub_35 = sub_36;
  if (controller_worker) {
    v_1736 = false;
    sub_41 = sub_37;
  } else {
    v_1736 = sub_37;
    sub_41 = false;
  };
  if (controller_ck_15_1) {
    sub_40 = v_1736;
  } else {
    sub_40 = sub_41;
  };
  if (controller_change_shift) {
    v_1737 = sub_40;
    sub_39 = sub_36;
  } else {
    v_1737 = sub_36;
    sub_39 = sub_40;
  };
  if (controller_ck_1) {
    sub_38 = v_1737;
  } else {
    sub_38 = sub_39;
  };
  if (controller_v_392) {
    v_1740 = sub_38;
  } else {
    v_1740 = sub_35;
  };
  if (controller_blind_failed_recovered) {
    sub_34 = sub_35;
  } else {
    sub_34 = v_1740;
  };
  if (controller_v_447) {
    sub_4 = sub_34;
  } else {
    sub_4 = sub_5;
  };
  sub_43 = sub_30;
  if (controller_v_445) {
    sub_42 = sub_6;
  } else {
    sub_42 = sub_43;
  };
  if (controller_air_failed_recovered) {
    sub_45 = sub_30;
  } else {
    sub_45 = sub_26;
  };
  if (controller_v_445) {
    sub_44 = sub_43;
  } else {
    sub_44 = sub_45;
  };
  if (controller_v_447) {
    v_1755 = sub_44;
  } else {
    v_1755 = sub_42;
  };
  if (controller_v_446) {
    sub_3 = v_1755;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  sub_51 = sub_13;
  if (controller_ck_11_1) {
    sub_50 = sub_21;
  } else {
    sub_50 = sub_51;
  };
  if (controller_air_failed_recovered) {
    v = sub_50;
    sub_49 = sub_50;
  } else {
    v = sub_30;
    sub_49 = sub_26;
  };
  if (controller_v_445) {
    sub_48 = v;
  } else {
    sub_48 = sub_49;
  };
  sub_52 = sub_38;
  if (controller_v_447) {
    sub_47 = sub_52;
  } else {
    sub_47 = sub_48;
  };
  if (controller_v_445) {
    sub_53 = sub_49;
  } else {
    sub_53 = sub_43;
  };
  if (controller_v_447) {
    v_1735 = sub_44;
  } else {
    v_1735 = sub_53;
  };
  if (controller_v_446) {
    sub_46 = v_1735;
  } else {
    sub_46 = sub_47;
  };
  if (controller_v_408) {
    v_1756 = sub_46;
  } else {
    v_1756 = sub_2;
  };
  if (controller_light_failed_recovered) {
    sub_1 = sub_2;
  } else {
    sub_1 = v_1756;
  };
  sub_0 = sub_1;
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
                                                       int controller_pnr_9,
                                                       int controller_ck_11_1,
                                                       int controller_pnr_8,
                                                       int controller_ck_13_1,
                                                       int controller_pnr_7,
                                                       int controller_ck_15_1,
                                                       int controller_pnr_6,
                                                       int controller_ck_17_1,
                                                       int controller_pnr_5,
                                                       int controller_ck_19_1,
                                                       int controller_pnr_4,
                                                       int controller_ck_21_1,
                                                       int controller_pnr_3,
                                                       int controller_v_447,
                                                       int controller_v_446,
                                                       int controller_v_445,
                                                       int controller_pnr_2,
                                                       int controller_v_408,
                                                       int controller_v_407,
                                                       int controller_pnr_1,
                                                       int controller_v_392,
                                                       int controller_v_391,
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
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_9,
  controller_ck_11_1, controller_pnr_8, controller_ck_13_1, controller_pnr_7,
  controller_ck_15_1, controller_pnr_6, controller_ck_17_1, controller_pnr_5,
  controller_ck_19_1, controller_pnr_4, controller_ck_21_1, controller_pnr_3,
  controller_v_447, controller_v_446, controller_v_445, controller_pnr_2,
  controller_v_408, controller_v_407, controller_pnr_1, controller_v_392,
  controller_v_391, controller_pnr, p_controller_c_blind_2,
  p_controller_c_blind_1, p_controller_c_light_2, p_controller_c_light_1,
  p_controller_c_closet, p_controller_c_air_2, p_controller_c_air_1,
  p_controller_c_window, p_controller_c_pc, p_controller_c_door,
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
                                                                    controller_pnr_9,
                                                                    controller_ck_11_1,
                                                                    controller_pnr_8,
                                                                    controller_ck_13_1,
                                                                    controller_pnr_7,
                                                                    controller_ck_15_1,
                                                                    controller_pnr_6,
                                                                    controller_ck_17_1,
                                                                    controller_pnr_5,
                                                                    controller_ck_19_1,
                                                                    controller_pnr_4,
                                                                    controller_ck_21_1,
                                                                    controller_pnr_3,
                                                                    controller_v_447,
                                                                    controller_v_446,
                                                                    controller_v_445,
                                                                    controller_pnr_2,
                                                                    controller_v_408,
                                                                    controller_v_407,
                                                                    controller_pnr_1,
                                                                    controller_v_392,
                                                                    controller_v_391,
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
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_9,
  controller_ck_11_1, controller_pnr_8, controller_ck_13_1, controller_pnr_7,
  controller_ck_15_1, controller_pnr_6, controller_ck_17_1, controller_pnr_5,
  controller_ck_19_1, controller_pnr_4, controller_ck_21_1, controller_pnr_3,
  controller_v_447, controller_v_446, controller_v_445, controller_pnr_2,
  controller_v_408, controller_v_407, controller_pnr_1, controller_v_392,
  controller_v_391, controller_pnr, p_controller_c_blind_2,
  p_controller_c_blind_1, p_controller_c_light_2, p_controller_c_light_1,
  p_controller_c_closet, p_controller_c_air_2, p_controller_c_air_1,
  p_controller_c_window, p_controller_c_pc, p_controller_c_door,
  _out->controller_c_pc, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_window_out_st);
  _out->controller_c_window = Controller_controller__controller_controller_controller_c_window_out_st.controller_c_window;
  Controller_controller__controller_controller_controller_c_air_1_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_9,
  controller_ck_11_1, controller_pnr_8, controller_ck_13_1, controller_pnr_7,
  controller_ck_15_1, controller_pnr_6, controller_ck_17_1, controller_pnr_5,
  controller_ck_19_1, controller_pnr_4, controller_ck_21_1, controller_pnr_3,
  controller_v_447, controller_v_446, controller_v_445, controller_pnr_2,
  controller_v_408, controller_v_407, controller_pnr_1, controller_v_392,
  controller_v_391, controller_pnr, p_controller_c_blind_2,
  p_controller_c_blind_1, p_controller_c_light_2, p_controller_c_light_1,
  p_controller_c_closet, p_controller_c_air_2, p_controller_c_air_1,
  p_controller_c_window, p_controller_c_pc, p_controller_c_door,
  _out->controller_c_window, _out->controller_c_pc, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_air_1_out_st);
  _out->controller_c_air_1 = Controller_controller__controller_controller_controller_c_air_1_out_st.controller_c_air_1;
  Controller_controller__controller_controller_controller_c_air_2_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_9,
  controller_ck_11_1, controller_pnr_8, controller_ck_13_1, controller_pnr_7,
  controller_ck_15_1, controller_pnr_6, controller_ck_17_1, controller_pnr_5,
  controller_ck_19_1, controller_pnr_4, controller_ck_21_1, controller_pnr_3,
  controller_v_447, controller_v_446, controller_v_445, controller_pnr_2,
  controller_v_408, controller_v_407, controller_pnr_1, controller_v_392,
  controller_v_391, controller_pnr, p_controller_c_blind_2,
  p_controller_c_blind_1, p_controller_c_light_2, p_controller_c_light_1,
  p_controller_c_closet, p_controller_c_air_2, p_controller_c_air_1,
  p_controller_c_window, p_controller_c_pc, p_controller_c_door,
  _out->controller_c_air_1, _out->controller_c_window, _out->controller_c_pc,
  _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_air_2_out_st);
  _out->controller_c_air_2 = Controller_controller__controller_controller_controller_c_air_2_out_st.controller_c_air_2;
  Controller_controller__controller_controller_controller_c_closet_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_9,
  controller_ck_11_1, controller_pnr_8, controller_ck_13_1, controller_pnr_7,
  controller_ck_15_1, controller_pnr_6, controller_ck_17_1, controller_pnr_5,
  controller_ck_19_1, controller_pnr_4, controller_ck_21_1, controller_pnr_3,
  controller_v_447, controller_v_446, controller_v_445, controller_pnr_2,
  controller_v_408, controller_v_407, controller_pnr_1, controller_v_392,
  controller_v_391, controller_pnr, p_controller_c_blind_2,
  p_controller_c_blind_1, p_controller_c_light_2, p_controller_c_light_1,
  p_controller_c_closet, p_controller_c_air_2, p_controller_c_air_1,
  p_controller_c_window, p_controller_c_pc, p_controller_c_door,
  _out->controller_c_air_2, _out->controller_c_air_1,
  _out->controller_c_window, _out->controller_c_pc, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_closet_out_st);
  _out->controller_c_closet = Controller_controller__controller_controller_controller_c_closet_out_st.controller_c_closet;
  Controller_controller__controller_controller_controller_c_light_1_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_9,
  controller_ck_11_1, controller_pnr_8, controller_ck_13_1, controller_pnr_7,
  controller_ck_15_1, controller_pnr_6, controller_ck_17_1, controller_pnr_5,
  controller_ck_19_1, controller_pnr_4, controller_ck_21_1, controller_pnr_3,
  controller_v_447, controller_v_446, controller_v_445, controller_pnr_2,
  controller_v_408, controller_v_407, controller_pnr_1, controller_v_392,
  controller_v_391, controller_pnr, p_controller_c_blind_2,
  p_controller_c_blind_1, p_controller_c_light_2, p_controller_c_light_1,
  p_controller_c_closet, p_controller_c_air_2, p_controller_c_air_1,
  p_controller_c_window, p_controller_c_pc, p_controller_c_door,
  _out->controller_c_closet, _out->controller_c_air_2,
  _out->controller_c_air_1, _out->controller_c_window, _out->controller_c_pc,
  _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_light_1_out_st);
  _out->controller_c_light_1 = Controller_controller__controller_controller_controller_c_light_1_out_st.controller_c_light_1;
  Controller_controller__controller_controller_controller_c_light_2_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_9,
  controller_ck_11_1, controller_pnr_8, controller_ck_13_1, controller_pnr_7,
  controller_ck_15_1, controller_pnr_6, controller_ck_17_1, controller_pnr_5,
  controller_ck_19_1, controller_pnr_4, controller_ck_21_1, controller_pnr_3,
  controller_v_447, controller_v_446, controller_v_445, controller_pnr_2,
  controller_v_408, controller_v_407, controller_pnr_1, controller_v_392,
  controller_v_391, controller_pnr, p_controller_c_blind_2,
  p_controller_c_blind_1, p_controller_c_light_2, p_controller_c_light_1,
  p_controller_c_closet, p_controller_c_air_2, p_controller_c_air_1,
  p_controller_c_window, p_controller_c_pc, p_controller_c_door,
  _out->controller_c_light_1, _out->controller_c_closet,
  _out->controller_c_air_2, _out->controller_c_air_1,
  _out->controller_c_window, _out->controller_c_pc, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_light_2_out_st);
  _out->controller_c_light_2 = Controller_controller__controller_controller_controller_c_light_2_out_st.controller_c_light_2;
  Controller_controller__controller_controller_controller_c_blind_1_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_9,
  controller_ck_11_1, controller_pnr_8, controller_ck_13_1, controller_pnr_7,
  controller_ck_15_1, controller_pnr_6, controller_ck_17_1, controller_pnr_5,
  controller_ck_19_1, controller_pnr_4, controller_ck_21_1, controller_pnr_3,
  controller_v_447, controller_v_446, controller_v_445, controller_pnr_2,
  controller_v_408, controller_v_407, controller_pnr_1, controller_v_392,
  controller_v_391, controller_pnr, p_controller_c_blind_2,
  p_controller_c_blind_1, p_controller_c_light_2, p_controller_c_light_1,
  p_controller_c_closet, p_controller_c_air_2, p_controller_c_air_1,
  p_controller_c_window, p_controller_c_pc, p_controller_c_door,
  _out->controller_c_light_2, _out->controller_c_light_1,
  _out->controller_c_closet, _out->controller_c_air_2,
  _out->controller_c_air_1, _out->controller_c_window, _out->controller_c_pc,
  _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_blind_1_out_st);
  _out->controller_c_blind_1 = Controller_controller__controller_controller_controller_c_blind_1_out_st.controller_c_blind_1;
  Controller_controller__controller_controller_controller_c_blind_2_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_9,
  controller_ck_11_1, controller_pnr_8, controller_ck_13_1, controller_pnr_7,
  controller_ck_15_1, controller_pnr_6, controller_ck_17_1, controller_pnr_5,
  controller_ck_19_1, controller_pnr_4, controller_ck_21_1, controller_pnr_3,
  controller_v_447, controller_v_446, controller_v_445, controller_pnr_2,
  controller_v_408, controller_v_407, controller_pnr_1, controller_v_392,
  controller_v_391, controller_pnr, p_controller_c_blind_2,
  p_controller_c_blind_1, p_controller_c_light_2, p_controller_c_light_1,
  p_controller_c_closet, p_controller_c_air_2, p_controller_c_air_1,
  p_controller_c_window, p_controller_c_pc, p_controller_c_door,
  _out->controller_c_blind_1, _out->controller_c_light_2,
  _out->controller_c_light_1, _out->controller_c_closet,
  _out->controller_c_air_2, _out->controller_c_air_1,
  _out->controller_c_window, _out->controller_c_pc, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_blind_2_out_st);
  _out->controller_c_blind_2 = Controller_controller__controller_controller_controller_c_blind_2_out_st.controller_c_blind_2;
}

