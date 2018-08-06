/* --- Generated the 5/8/2018 at 17:49 --- */
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
  int controller_blind_failed_recovered,
  int controller_door_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_20, int controller_ck_35_1, int controller_pnr_19,
  int controller_ck_37_1, int controller_pnr_18, int controller_ck_39_1,
  int controller_pnr_17, int controller_ck_41_1, int controller_pnr_16,
  int controller_ck_44_1, int controller_pnr_15, int controller_ck_46_1,
  int controller_pnr_14, int controller_v_277, int controller_v_276,
  int controller_pnr_13, int controller_ck_51_1, int controller_pnr_12,
  int controller_ck_54_1, int controller_pnr_11, int controller_ck_56_1,
  int controller_pnr_10, int controller_ck_59_1, int controller_pnr_9,
  int controller_ck_61_1, int controller_pnr_8, int controller_ck_64_1,
  int controller_pnr_7, int controller_ck_66_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_light_2,
  int controller_c_blind_1, int controller_c_light_1,
  int controller_c_closet, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_blind_2_out* _out) {
  
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
  int sub_524;
  int sub_525;
  int sub_526;
  int sub_527;
  int sub_528;
  int sub_529;
  int sub_530;
  int sub_531;
  int sub_532;
  int sub_533;
  int sub_534;
  int sub_535;
  int sub_536;
  int sub_537;
  sub_22 = false;
  sub_24 = (controller_c_door&&false);
  v_234 = !(controller_c_door);
  sub_25 = (v_234&&false);
  if (controller_ck_44_1) {
    sub_23 = sub_25;
  } else {
    sub_23 = sub_24;
  };
  if (controller_door_failed_recovered) {
    v_235 = sub_23;
    sub_21 = sub_22;
  } else {
    v_235 = sub_22;
    sub_21 = sub_23;
  };
  if (controller_ck_46_1) {
    sub_20 = v_235;
  } else {
    sub_20 = sub_21;
  };
  if (controller_window_failed_recovered) {
    v_236 = false;
    sub_26 = sub_20;
  } else {
    v_236 = sub_20;
    sub_26 = false;
  };
  if (controller_ck_56_1) {
    v_237 = v_236;
  } else {
    v_237 = sub_26;
  };
  if (controller_c_window) {
    sub_19 = sub_20;
  } else {
    sub_19 = v_237;
  };
  if (controller_ck_39_1) {
    sub_18 = sub_19;
    sub_27 = false;
  } else {
    sub_18 = false;
    sub_27 = sub_19;
  };
  if (controller_c_pc) {
    sub_17 = sub_18;
  } else {
    sub_17 = sub_27;
  };
  if (controller_cleaner) {
    sub_16 = sub_17;
    sub_28 = false;
  } else {
    sub_16 = false;
    sub_28 = sub_17;
  };
  if (controller_ck_37_1) {
    sub_15 = sub_28;
  } else {
    sub_15 = sub_16;
  };
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  if (controller_ck_44_1) {
    sub_40 = sub_24;
  } else {
    sub_40 = sub_25;
  };
  if (controller_door_failed_recovered) {
    v_230 = sub_40;
    sub_39 = sub_22;
  } else {
    v_230 = sub_22;
    sub_39 = sub_40;
  };
  if (controller_ck_46_1) {
    sub_38 = v_230;
  } else {
    sub_38 = sub_39;
  };
  sub_37 = sub_38;
  if (controller_door_failed_recovered) {
    v_229 = false;
    sub_43 = sub_22;
  } else {
    v_229 = sub_22;
    sub_43 = false;
  };
  if (controller_ck_46_1) {
    sub_42 = v_229;
  } else {
    sub_42 = sub_43;
  };
  if (controller_window_failed_recovered) {
    v_231 = sub_42;
    sub_41 = sub_38;
  } else {
    v_231 = sub_38;
    sub_41 = sub_42;
  };
  if (controller_ck_56_1) {
    v_232 = v_231;
  } else {
    v_232 = sub_41;
  };
  if (controller_c_window) {
    sub_36 = sub_37;
  } else {
    sub_36 = v_232;
  };
  if (controller_ck_39_1) {
    sub_35 = sub_36;
    sub_44 = false;
  } else {
    sub_35 = false;
    sub_44 = sub_36;
  };
  if (controller_c_pc) {
    sub_34 = sub_35;
  } else {
    sub_34 = sub_44;
  };
  if (controller_cleaner) {
    v_233 = sub_34;
    sub_33 = false;
  } else {
    v_233 = false;
    sub_33 = sub_34;
  };
  if (controller_ck_37_1) {
    sub_32 = v_233;
  } else {
    sub_32 = sub_33;
  };
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (controller_c_closet) {
    sub_11 = sub_12;
    sub_45 = sub_12;
  } else {
    sub_11 = sub_29;
    sub_45 = false;
  };
  if (controller_blind_failed_recovered) {
    v_238 = sub_45;
    sub_10 = sub_11;
  } else {
    v_238 = sub_11;
    sub_10 = sub_45;
  };
  if (controller_ck_66_1) {
    sub_9 = v_238;
  } else {
    sub_9 = sub_10;
  };
  if (controller_window_failed_recovered) {
    v_227 = false;
    sub_57 = sub_38;
  } else {
    v_227 = sub_38;
    sub_57 = false;
  };
  if (controller_ck_56_1) {
    sub_56 = v_227;
  } else {
    sub_56 = sub_57;
  };
  if (controller_c_window) {
    sub_55 = sub_56;
  } else {
    sub_55 = sub_37;
  };
  if (controller_ck_39_1) {
    sub_54 = sub_55;
    sub_58 = false;
  } else {
    sub_54 = false;
    sub_58 = sub_55;
  };
  if (controller_c_pc) {
    sub_53 = sub_54;
  } else {
    sub_53 = sub_58;
  };
  if (controller_cleaner) {
    v_228 = sub_53;
    sub_52 = false;
  } else {
    v_228 = false;
    sub_52 = sub_53;
  };
  if (controller_ck_37_1) {
    sub_51 = v_228;
  } else {
    sub_51 = sub_52;
  };
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  if (controller_c_closet) {
    sub_47 = false;
  } else {
    sub_47 = sub_48;
  };
  if (controller_blind_failed_recovered) {
    v_239 = sub_47;
    sub_46 = sub_11;
  } else {
    v_239 = sub_11;
    sub_46 = sub_47;
  };
  if (controller_ck_66_1) {
    v_240 = v_239;
  } else {
    v_240 = sub_46;
  };
  if (controller_ck_64_1) {
    v_241 = v_240;
  } else {
    v_241 = sub_9;
  };
  sub_75 = true;
  sub_77 = (controller_c_door||false);
  v_220 = !(controller_c_door);
  sub_78 = (v_220||false);
  if (controller_ck_44_1) {
    sub_76 = sub_78;
  } else {
    sub_76 = sub_77;
  };
  if (controller_door_failed_recovered) {
    v_221 = sub_76;
    sub_74 = sub_75;
  } else {
    v_221 = sub_75;
    sub_74 = sub_76;
  };
  if (controller_ck_46_1) {
    sub_73 = v_221;
  } else {
    sub_73 = sub_74;
  };
  if (controller_window_failed_recovered) {
    v_222 = false;
    sub_72 = sub_73;
  } else {
    v_222 = sub_73;
    sub_72 = false;
  };
  if (controller_ck_56_1) {
    sub_71 = v_222;
  } else {
    sub_71 = sub_72;
  };
  sub_79 = sub_73;
  if (controller_c_window) {
    sub_70 = sub_71;
  } else {
    sub_70 = sub_79;
  };
  if (controller_ck_39_1) {
    sub_69 = sub_70;
    sub_80 = false;
  } else {
    sub_69 = false;
    sub_80 = sub_70;
  };
  if (controller_c_pc) {
    sub_68 = sub_69;
  } else {
    sub_68 = sub_80;
  };
  if (controller_cleaner) {
    v_223 = sub_68;
    sub_67 = false;
  } else {
    v_223 = false;
    sub_67 = sub_68;
  };
  if (controller_ck_37_1) {
    sub_66 = v_223;
  } else {
    sub_66 = sub_67;
  };
  sub_65 = sub_66;
  sub_64 = sub_65;
  sub_63 = sub_64;
  if (controller_c_closet) {
    sub_62 = sub_12;
  } else {
    sub_62 = sub_63;
  };
  if (controller_blind_failed_recovered) {
    v_224 = sub_62;
    sub_61 = sub_11;
  } else {
    v_224 = sub_11;
    sub_61 = sub_62;
  };
  if (controller_ck_66_1) {
    sub_60 = v_224;
  } else {
    sub_60 = sub_61;
  };
  if (controller_ck_44_1) {
    sub_93 = sub_77;
  } else {
    sub_93 = sub_78;
  };
  if (controller_door_failed_recovered) {
    v_217 = sub_93;
    sub_92 = sub_75;
  } else {
    v_217 = sub_75;
    sub_92 = sub_93;
  };
  if (controller_ck_46_1) {
    sub_91 = v_217;
  } else {
    sub_91 = sub_92;
  };
  if (controller_window_failed_recovered) {
    v_218 = false;
    sub_94 = sub_91;
  } else {
    v_218 = sub_91;
    sub_94 = false;
  };
  if (controller_ck_56_1) {
    v_219 = v_218;
  } else {
    v_219 = sub_94;
  };
  if (controller_c_window) {
    sub_90 = sub_91;
  } else {
    sub_90 = v_219;
  };
  if (controller_ck_39_1) {
    sub_89 = sub_90;
    sub_95 = false;
  } else {
    sub_89 = false;
    sub_95 = sub_90;
  };
  if (controller_c_pc) {
    sub_88 = sub_89;
  } else {
    sub_88 = sub_95;
  };
  if (controller_cleaner) {
    sub_87 = sub_88;
    sub_96 = false;
  } else {
    sub_87 = false;
    sub_96 = sub_88;
  };
  if (controller_ck_37_1) {
    sub_86 = sub_96;
  } else {
    sub_86 = sub_87;
  };
  sub_85 = sub_86;
  sub_84 = sub_85;
  sub_83 = sub_84;
  if (controller_c_closet) {
    sub_82 = sub_83;
  } else {
    sub_82 = sub_48;
  };
  if (controller_blind_failed_recovered) {
    v_225 = sub_82;
    sub_81 = sub_11;
  } else {
    v_225 = sub_11;
    sub_81 = sub_82;
  };
  if (controller_ck_66_1) {
    v_226 = v_225;
  } else {
    v_226 = sub_81;
  };
  if (controller_ck_64_1) {
    sub_59 = v_226;
  } else {
    sub_59 = sub_60;
  };
  if (controller_blind_switch) {
    v_242 = v_241;
  } else {
    v_242 = sub_59;
  };
  if (controller_c_blind_1) {
    sub_8 = v_242;
  } else {
    sub_8 = sub_59;
  };
  sub_99 = sub_45;
  if (controller_change_shift) {
    v_212 = false;
    sub_105 = sub_51;
  } else {
    v_212 = sub_51;
    sub_105 = false;
  };
  if (controller_ck_1) {
    sub_104 = v_212;
  } else {
    sub_104 = sub_105;
  };
  sub_103 = sub_104;
  sub_102 = sub_103;
  if (controller_c_closet) {
    sub_101 = false;
  } else {
    sub_101 = sub_102;
  };
  if (controller_blind_failed_recovered) {
    v_213 = sub_101;
    sub_100 = sub_45;
  } else {
    v_213 = sub_45;
    sub_100 = sub_101;
  };
  if (controller_ck_66_1) {
    v_214 = v_213;
  } else {
    v_214 = sub_100;
  };
  if (controller_ck_64_1) {
    v_215 = v_214;
  } else {
    v_215 = sub_99;
  };
  if (controller_change_shift) {
    v_208 = false;
    sub_113 = sub_66;
  } else {
    v_208 = sub_66;
    sub_113 = false;
  };
  if (controller_ck_1) {
    sub_112 = v_208;
  } else {
    sub_112 = sub_113;
  };
  sub_111 = sub_112;
  sub_110 = sub_111;
  if (controller_c_closet) {
    sub_109 = sub_12;
  } else {
    sub_109 = sub_110;
  };
  if (controller_blind_failed_recovered) {
    v_209 = sub_109;
    sub_108 = sub_45;
  } else {
    v_209 = sub_45;
    sub_108 = sub_109;
  };
  if (controller_ck_66_1) {
    sub_107 = v_209;
  } else {
    sub_107 = sub_108;
  };
  if (controller_c_closet) {
    sub_115 = sub_83;
  } else {
    sub_115 = sub_102;
  };
  if (controller_blind_failed_recovered) {
    v_210 = sub_115;
    sub_114 = sub_45;
  } else {
    v_210 = sub_45;
    sub_114 = sub_115;
  };
  if (controller_ck_66_1) {
    v_211 = v_210;
  } else {
    v_211 = sub_114;
  };
  if (controller_ck_64_1) {
    sub_106 = v_211;
  } else {
    sub_106 = sub_107;
  };
  if (controller_blind_switch) {
    v_216 = v_215;
  } else {
    v_216 = sub_106;
  };
  if (controller_c_blind_1) {
    sub_98 = v_216;
  } else {
    sub_98 = sub_106;
  };
  if (controller_c_closet) {
    sub_119 = false;
  } else {
    sub_119 = sub_29;
  };
  sub_127 = sub_56;
  if (controller_ck_39_1) {
    sub_126 = sub_127;
    sub_128 = false;
  } else {
    sub_126 = false;
    sub_128 = sub_127;
  };
  if (controller_c_pc) {
    sub_125 = sub_126;
  } else {
    sub_125 = sub_128;
  };
  if (controller_cleaner) {
    v_204 = sub_125;
    sub_124 = false;
  } else {
    v_204 = false;
    sub_124 = sub_125;
  };
  if (controller_ck_37_1) {
    sub_123 = v_204;
  } else {
    sub_123 = sub_124;
  };
  sub_122 = sub_123;
  sub_121 = sub_122;
  if (controller_c_closet) {
    sub_120 = false;
  } else {
    sub_120 = sub_121;
  };
  if (controller_blind_failed_recovered) {
    v_205 = sub_120;
    sub_118 = sub_119;
  } else {
    v_205 = sub_119;
    sub_118 = sub_120;
  };
  if (controller_ck_66_1) {
    sub_117 = v_205;
  } else {
    sub_117 = sub_118;
  };
  if (controller_blind_failed_recovered) {
    v_203 = sub_47;
    sub_130 = sub_119;
  } else {
    v_203 = sub_119;
    sub_130 = sub_47;
  };
  if (controller_ck_66_1) {
    sub_129 = v_203;
  } else {
    sub_129 = sub_130;
  };
  if (controller_ck_64_1) {
    v_206 = sub_129;
  } else {
    v_206 = sub_117;
  };
  if (controller_window_failed_recovered) {
    sub_142 = sub_38;
    sub_143 = sub_73;
  } else {
    sub_142 = sub_73;
    sub_143 = sub_38;
  };
  if (controller_ck_56_1) {
    v_200 = sub_143;
  } else {
    v_200 = sub_142;
  };
  if (controller_c_window) {
    sub_141 = sub_56;
  } else {
    sub_141 = v_200;
  };
  if (controller_ck_39_1) {
    sub_140 = sub_141;
    sub_144 = false;
  } else {
    sub_140 = false;
    sub_144 = sub_141;
  };
  if (controller_c_pc) {
    sub_139 = sub_140;
  } else {
    sub_139 = sub_144;
  };
  if (controller_cleaner) {
    v_201 = sub_139;
    sub_138 = false;
  } else {
    v_201 = false;
    sub_138 = sub_139;
  };
  if (controller_ck_37_1) {
    sub_137 = v_201;
  } else {
    sub_137 = sub_138;
  };
  sub_136 = sub_137;
  sub_135 = sub_136;
  if (controller_c_closet) {
    sub_134 = false;
  } else {
    sub_134 = sub_135;
  };
  if (controller_blind_failed_recovered) {
    v_202 = sub_134;
    sub_133 = sub_119;
  } else {
    v_202 = sub_119;
    sub_133 = sub_134;
  };
  if (controller_ck_66_1) {
    sub_132 = v_202;
  } else {
    sub_132 = sub_133;
  };
  if (controller_ck_64_1) {
    sub_131 = sub_129;
  } else {
    sub_131 = sub_132;
  };
  if (controller_blind_switch) {
    v_207 = v_206;
  } else {
    v_207 = sub_131;
  };
  if (controller_c_blind_1) {
    sub_116 = v_207;
  } else {
    sub_116 = sub_131;
  };
  if (controller_ck_59_1) {
    sub_97 = sub_116;
  } else {
    sub_97 = sub_98;
  };
  if (controller_light_failed_recovered) {
    v_243 = sub_97;
    sub_7 = sub_8;
  } else {
    v_243 = sub_8;
    sub_7 = sub_97;
  };
  if (controller_ck_61_1) {
    sub_6 = v_243;
  } else {
    sub_6 = sub_7;
  };
  if (controller_ck_59_1) {
    sub_147 = sub_98;
  } else {
    sub_147 = sub_116;
  };
  if (controller_light_failed_recovered) {
    v_198 = sub_147;
    sub_146 = sub_8;
  } else {
    v_198 = sub_8;
    sub_146 = sub_147;
  };
  if (controller_ck_61_1) {
    v_199 = v_198;
  } else {
    v_199 = sub_146;
  };
  if (controller_c_light_2) {
    sub_145 = v_199;
  } else {
    sub_145 = sub_6;
  };
  if (controller_light_switch) {
    v_244 = sub_6;
  } else {
    v_244 = sub_145;
  };
  if (controller_c_light_1) {
    sub_5 = v_244;
  } else {
    sub_5 = sub_145;
  };
  if (controller_v_277) {
    v_188 = sub_14;
  } else {
    v_188 = false;
  };
  if (controller_v_276) {
    v_189 = v_188;
  } else {
    v_189 = false;
  };
  if (controller_v_277) {
    sub_156 = false;
  } else {
    sub_156 = sub_14;
  };
  if (controller_v_276) {
    v_187 = false;
  } else {
    v_187 = sub_156;
  };
  if (controller_c_air_2) {
    v_190 = v_187;
  } else {
    v_190 = v_189;
  };
  if (controller_v_276) {
    sub_157 = sub_156;
  } else {
    sub_157 = false;
  };
  if (controller_c_air_1) {
    sub_155 = v_190;
  } else {
    sub_155 = sub_157;
  };
  if (controller_ck_37_1) {
    sub_161 = sub_16;
  } else {
    sub_161 = sub_28;
  };
  sub_160 = sub_161;
  if (controller_v_277) {
    sub_159 = false;
  } else {
    sub_159 = sub_160;
  };
  if (controller_v_276) {
    v_185 = sub_159;
  } else {
    v_185 = false;
  };
  if (controller_c_air_2) {
    v_186 = v_185;
  } else {
    v_186 = false;
  };
  if (controller_v_277) {
    v_184 = sub_160;
  } else {
    v_184 = false;
  };
  if (controller_v_276) {
    sub_162 = v_184;
  } else {
    sub_162 = sub_159;
  };
  if (controller_c_air_1) {
    sub_158 = v_186;
  } else {
    sub_158 = sub_162;
  };
  if (controller_c_closet) {
    sub_154 = sub_155;
    sub_163 = sub_155;
  } else {
    sub_154 = sub_158;
    sub_163 = false;
  };
  if (controller_blind_failed_recovered) {
    v_191 = sub_163;
    sub_153 = sub_154;
  } else {
    v_191 = sub_154;
    sub_153 = sub_163;
  };
  if (controller_ck_66_1) {
    sub_152 = v_191;
  } else {
    sub_152 = sub_153;
  };
  if (controller_c_closet) {
    sub_165 = false;
  } else {
    sub_165 = sub_158;
  };
  if (controller_blind_failed_recovered) {
    v_192 = sub_165;
    sub_164 = sub_154;
  } else {
    v_192 = sub_154;
    sub_164 = sub_165;
  };
  if (controller_ck_66_1) {
    v_193 = v_192;
  } else {
    v_193 = sub_164;
  };
  if (controller_ck_64_1) {
    v_194 = v_193;
  } else {
    v_194 = sub_152;
  };
  if (controller_ck_37_1) {
    sub_173 = sub_87;
  } else {
    sub_173 = sub_96;
  };
  sub_172 = sub_173;
  if (controller_v_277) {
    sub_171 = false;
  } else {
    sub_171 = sub_172;
  };
  if (controller_v_276) {
    v_179 = sub_171;
  } else {
    v_179 = false;
  };
  if (controller_c_air_2) {
    v_180 = v_179;
  } else {
    v_180 = false;
  };
  if (controller_v_277) {
    v_178 = sub_172;
  } else {
    v_178 = false;
  };
  if (controller_v_276) {
    sub_174 = v_178;
  } else {
    sub_174 = sub_171;
  };
  if (controller_c_air_1) {
    sub_170 = v_180;
  } else {
    sub_170 = sub_174;
  };
  if (controller_c_closet) {
    sub_169 = sub_155;
  } else {
    sub_169 = sub_170;
  };
  if (controller_blind_failed_recovered) {
    v_181 = sub_169;
    sub_168 = sub_154;
  } else {
    v_181 = sub_154;
    sub_168 = sub_169;
  };
  if (controller_ck_66_1) {
    sub_167 = v_181;
  } else {
    sub_167 = sub_168;
  };
  if (controller_v_277) {
    v_175 = sub_85;
  } else {
    v_175 = false;
  };
  if (controller_v_276) {
    v_176 = v_175;
  } else {
    v_176 = false;
  };
  if (controller_v_277) {
    sub_178 = false;
  } else {
    sub_178 = sub_85;
  };
  if (controller_v_276) {
    v_174 = false;
  } else {
    v_174 = sub_178;
  };
  if (controller_c_air_2) {
    v_177 = v_174;
  } else {
    v_177 = v_176;
  };
  if (controller_v_276) {
    sub_179 = sub_178;
  } else {
    sub_179 = false;
  };
  if (controller_c_air_1) {
    sub_177 = v_177;
  } else {
    sub_177 = sub_179;
  };
  if (controller_c_closet) {
    sub_176 = sub_177;
  } else {
    sub_176 = sub_158;
  };
  if (controller_blind_failed_recovered) {
    v_182 = sub_176;
    sub_175 = sub_154;
  } else {
    v_182 = sub_154;
    sub_175 = sub_176;
  };
  if (controller_ck_66_1) {
    v_183 = v_182;
  } else {
    v_183 = sub_175;
  };
  if (controller_ck_64_1) {
    sub_166 = v_183;
  } else {
    sub_166 = sub_167;
  };
  if (controller_blind_switch) {
    v_195 = v_194;
  } else {
    v_195 = sub_166;
  };
  if (controller_c_blind_1) {
    sub_151 = v_195;
  } else {
    sub_151 = sub_166;
  };
  sub_182 = sub_163;
  if (controller_change_shift) {
    v_167 = false;
    sub_188 = sub_161;
  } else {
    v_167 = sub_161;
    sub_188 = false;
  };
  if (controller_ck_1) {
    sub_187 = v_167;
  } else {
    sub_187 = sub_188;
  };
  if (controller_v_277) {
    sub_186 = false;
  } else {
    sub_186 = sub_187;
  };
  if (controller_v_276) {
    v_168 = sub_186;
  } else {
    v_168 = false;
  };
  if (controller_c_air_2) {
    v_169 = v_168;
  } else {
    v_169 = false;
  };
  if (controller_v_277) {
    v_166 = sub_187;
  } else {
    v_166 = false;
  };
  if (controller_v_276) {
    sub_189 = v_166;
  } else {
    sub_189 = sub_186;
  };
  if (controller_c_air_1) {
    sub_185 = v_169;
  } else {
    sub_185 = sub_189;
  };
  if (controller_c_closet) {
    sub_184 = false;
  } else {
    sub_184 = sub_185;
  };
  if (controller_blind_failed_recovered) {
    v_170 = sub_184;
    sub_183 = sub_163;
  } else {
    v_170 = sub_163;
    sub_183 = sub_184;
  };
  if (controller_ck_66_1) {
    v_171 = v_170;
  } else {
    v_171 = sub_183;
  };
  if (controller_ck_64_1) {
    v_172 = v_171;
  } else {
    v_172 = sub_182;
  };
  if (controller_change_shift) {
    v_160 = false;
    sub_197 = sub_173;
  } else {
    v_160 = sub_173;
    sub_197 = false;
  };
  if (controller_ck_1) {
    sub_196 = v_160;
  } else {
    sub_196 = sub_197;
  };
  if (controller_v_277) {
    sub_195 = false;
  } else {
    sub_195 = sub_196;
  };
  if (controller_v_276) {
    v_161 = sub_195;
  } else {
    v_161 = false;
  };
  if (controller_c_air_2) {
    v_162 = v_161;
  } else {
    v_162 = false;
  };
  if (controller_v_277) {
    v_159 = sub_196;
  } else {
    v_159 = false;
  };
  if (controller_v_276) {
    sub_198 = v_159;
  } else {
    sub_198 = sub_195;
  };
  if (controller_c_air_1) {
    sub_194 = v_162;
  } else {
    sub_194 = sub_198;
  };
  if (controller_c_closet) {
    sub_193 = sub_155;
  } else {
    sub_193 = sub_194;
  };
  if (controller_blind_failed_recovered) {
    v_163 = sub_193;
    sub_192 = sub_163;
  } else {
    v_163 = sub_163;
    sub_192 = sub_193;
  };
  if (controller_ck_66_1) {
    sub_191 = v_163;
  } else {
    sub_191 = sub_192;
  };
  if (controller_c_closet) {
    sub_200 = sub_177;
  } else {
    sub_200 = sub_185;
  };
  if (controller_blind_failed_recovered) {
    v_164 = sub_200;
    sub_199 = sub_163;
  } else {
    v_164 = sub_163;
    sub_199 = sub_200;
  };
  if (controller_ck_66_1) {
    v_165 = v_164;
  } else {
    v_165 = sub_199;
  };
  if (controller_ck_64_1) {
    sub_190 = v_165;
  } else {
    sub_190 = sub_191;
  };
  if (controller_blind_switch) {
    v_173 = v_172;
  } else {
    v_173 = sub_190;
  };
  if (controller_c_blind_1) {
    sub_181 = v_173;
  } else {
    sub_181 = sub_190;
  };
  sub_203 = sub_165;
  sub_202 = sub_203;
  sub_201 = sub_202;
  if (controller_ck_59_1) {
    sub_180 = sub_201;
  } else {
    sub_180 = sub_181;
  };
  if (controller_light_failed_recovered) {
    v_196 = sub_180;
    sub_150 = sub_151;
  } else {
    v_196 = sub_151;
    sub_150 = sub_180;
  };
  if (controller_ck_61_1) {
    sub_149 = v_196;
  } else {
    sub_149 = sub_150;
  };
  if (controller_ck_59_1) {
    sub_206 = sub_181;
  } else {
    sub_206 = sub_201;
  };
  if (controller_light_failed_recovered) {
    v_157 = sub_206;
    sub_205 = sub_151;
  } else {
    v_157 = sub_151;
    sub_205 = sub_206;
  };
  if (controller_ck_61_1) {
    v_158 = v_157;
  } else {
    v_158 = sub_205;
  };
  if (controller_c_light_2) {
    sub_204 = v_158;
  } else {
    sub_204 = sub_149;
  };
  if (controller_light_switch) {
    v_197 = sub_149;
  } else {
    v_197 = sub_204;
  };
  if (controller_c_light_1) {
    sub_148 = v_197;
  } else {
    sub_148 = sub_204;
  };
  if (controller_air_failed_recovered) {
    v_245 = sub_148;
    sub_4 = sub_5;
  } else {
    v_245 = sub_5;
    sub_4 = sub_148;
  };
  if (controller_ck_51_1) {
    sub_3 = v_245;
  } else {
    sub_3 = sub_4;
  };
  if (controller_c_pc) {
    sub_220 = sub_44;
  } else {
    sub_220 = sub_35;
  };
  if (controller_cleaner) {
    sub_219 = sub_220;
    sub_221 = false;
  } else {
    sub_219 = false;
    sub_221 = sub_220;
  };
  if (controller_ck_37_1) {
    sub_218 = sub_221;
  } else {
    sub_218 = sub_219;
  };
  sub_217 = sub_218;
  sub_216 = sub_217;
  if (controller_ck_37_1) {
    sub_224 = sub_219;
  } else {
    sub_224 = sub_221;
  };
  sub_223 = sub_224;
  sub_222 = sub_223;
  if (controller_c_closet) {
    sub_215 = sub_216;
  } else {
    sub_215 = sub_222;
  };
  if (controller_blind_failed_recovered) {
    v_151 = false;
    sub_214 = sub_215;
  } else {
    v_151 = sub_215;
    sub_214 = false;
  };
  if (controller_ck_66_1) {
    sub_213 = v_151;
  } else {
    sub_213 = sub_214;
  };
  if (controller_c_pc) {
    sub_232 = sub_58;
  } else {
    sub_232 = sub_54;
  };
  if (controller_cleaner) {
    sub_231 = sub_232;
    sub_233 = false;
  } else {
    sub_231 = false;
    sub_233 = sub_232;
  };
  if (controller_ck_37_1) {
    sub_230 = sub_233;
  } else {
    sub_230 = sub_231;
  };
  sub_229 = sub_230;
  sub_228 = sub_229;
  if (controller_ck_37_1) {
    sub_236 = sub_231;
  } else {
    sub_236 = sub_233;
  };
  sub_235 = sub_236;
  sub_234 = sub_235;
  if (controller_c_closet) {
    sub_227 = sub_228;
  } else {
    sub_227 = sub_234;
  };
  if (controller_blind_failed_recovered) {
    v_150 = sub_227;
    sub_226 = sub_215;
  } else {
    v_150 = sub_215;
    sub_226 = sub_227;
  };
  if (controller_ck_66_1) {
    sub_225 = v_150;
  } else {
    sub_225 = sub_226;
  };
  if (controller_ck_64_1) {
    v_152 = sub_225;
  } else {
    v_152 = sub_213;
  };
  if (controller_c_pc) {
    sub_245 = sub_80;
  } else {
    sub_245 = sub_69;
  };
  if (controller_cleaner) {
    sub_244 = sub_245;
    sub_246 = false;
  } else {
    sub_244 = false;
    sub_246 = sub_245;
  };
  if (controller_ck_37_1) {
    sub_243 = sub_246;
  } else {
    sub_243 = sub_244;
  };
  sub_242 = sub_243;
  sub_241 = sub_242;
  if (controller_ck_37_1) {
    sub_249 = sub_244;
  } else {
    sub_249 = sub_246;
  };
  sub_248 = sub_249;
  sub_247 = sub_248;
  if (controller_c_closet) {
    sub_240 = sub_241;
  } else {
    sub_240 = sub_247;
  };
  if (controller_blind_failed_recovered) {
    v_149 = sub_240;
    sub_239 = sub_215;
  } else {
    v_149 = sub_215;
    sub_239 = sub_240;
  };
  if (controller_ck_66_1) {
    sub_238 = v_149;
  } else {
    sub_238 = sub_239;
  };
  if (controller_ck_64_1) {
    sub_237 = sub_225;
  } else {
    sub_237 = sub_238;
  };
  if (controller_blind_switch) {
    v_153 = v_152;
  } else {
    v_153 = sub_237;
  };
  if (controller_c_blind_1) {
    sub_212 = v_153;
  } else {
    sub_212 = sub_237;
  };
  if (controller_change_shift) {
    v_145 = false;
    sub_257 = sub_230;
  } else {
    v_145 = sub_230;
    sub_257 = false;
  };
  if (controller_ck_1) {
    sub_256 = v_145;
  } else {
    sub_256 = sub_257;
  };
  sub_255 = sub_256;
  if (controller_change_shift) {
    v_144 = false;
    sub_260 = sub_236;
  } else {
    v_144 = sub_236;
    sub_260 = false;
  };
  if (controller_ck_1) {
    sub_259 = v_144;
  } else {
    sub_259 = sub_260;
  };
  sub_258 = sub_259;
  if (controller_c_closet) {
    sub_254 = sub_255;
  } else {
    sub_254 = sub_258;
  };
  if (controller_blind_failed_recovered) {
    v_146 = sub_254;
    sub_253 = false;
  } else {
    v_146 = false;
    sub_253 = sub_254;
  };
  if (controller_ck_66_1) {
    sub_252 = v_146;
  } else {
    sub_252 = sub_253;
  };
  if (controller_ck_64_1) {
    v_147 = sub_252;
  } else {
    v_147 = false;
  };
  if (controller_change_shift) {
    v_142 = false;
    sub_267 = sub_243;
  } else {
    v_142 = sub_243;
    sub_267 = false;
  };
  if (controller_ck_1) {
    sub_266 = v_142;
  } else {
    sub_266 = sub_267;
  };
  sub_265 = sub_266;
  if (controller_change_shift) {
    v_141 = false;
    sub_270 = sub_249;
  } else {
    v_141 = sub_249;
    sub_270 = false;
  };
  if (controller_ck_1) {
    sub_269 = v_141;
  } else {
    sub_269 = sub_270;
  };
  sub_268 = sub_269;
  if (controller_c_closet) {
    sub_264 = sub_265;
  } else {
    sub_264 = sub_268;
  };
  if (controller_blind_failed_recovered) {
    v_143 = sub_264;
    sub_263 = false;
  } else {
    v_143 = false;
    sub_263 = sub_264;
  };
  if (controller_ck_66_1) {
    sub_262 = v_143;
  } else {
    sub_262 = sub_263;
  };
  if (controller_ck_64_1) {
    sub_261 = sub_252;
  } else {
    sub_261 = sub_262;
  };
  if (controller_blind_switch) {
    v_148 = v_147;
  } else {
    v_148 = sub_261;
  };
  sub_271 = sub_261;
  if (controller_c_blind_1) {
    sub_251 = v_148;
  } else {
    sub_251 = sub_271;
  };
  if (controller_c_pc) {
    sub_280 = sub_128;
  } else {
    sub_280 = sub_126;
  };
  if (controller_cleaner) {
    sub_279 = sub_280;
    sub_281 = false;
  } else {
    sub_279 = false;
    sub_281 = sub_280;
  };
  if (controller_ck_37_1) {
    sub_278 = sub_281;
  } else {
    sub_278 = sub_279;
  };
  sub_277 = sub_278;
  sub_276 = sub_277;
  if (controller_ck_37_1) {
    sub_284 = sub_279;
  } else {
    sub_284 = sub_281;
  };
  sub_283 = sub_284;
  sub_282 = sub_283;
  if (controller_c_closet) {
    sub_275 = sub_276;
  } else {
    sub_275 = sub_282;
  };
  if (controller_blind_failed_recovered) {
    v_138 = sub_275;
    sub_274 = sub_215;
  } else {
    v_138 = sub_215;
    sub_274 = sub_275;
  };
  if (controller_ck_66_1) {
    sub_273 = v_138;
  } else {
    sub_273 = sub_274;
  };
  if (controller_ck_64_1) {
    v_139 = sub_225;
  } else {
    v_139 = sub_273;
  };
  if (controller_c_pc) {
    sub_293 = sub_144;
  } else {
    sub_293 = sub_140;
  };
  if (controller_cleaner) {
    sub_292 = sub_293;
    sub_294 = false;
  } else {
    sub_292 = false;
    sub_294 = sub_293;
  };
  if (controller_ck_37_1) {
    sub_291 = sub_294;
  } else {
    sub_291 = sub_292;
  };
  sub_290 = sub_291;
  sub_289 = sub_290;
  if (controller_ck_37_1) {
    sub_297 = sub_292;
  } else {
    sub_297 = sub_294;
  };
  sub_296 = sub_297;
  sub_295 = sub_296;
  if (controller_c_closet) {
    sub_288 = sub_289;
  } else {
    sub_288 = sub_295;
  };
  if (controller_blind_failed_recovered) {
    v_137 = sub_288;
    sub_287 = sub_215;
  } else {
    v_137 = sub_215;
    sub_287 = sub_288;
  };
  if (controller_ck_66_1) {
    sub_286 = v_137;
  } else {
    sub_286 = sub_287;
  };
  if (controller_ck_64_1) {
    sub_285 = sub_225;
  } else {
    sub_285 = sub_286;
  };
  if (controller_blind_switch) {
    v_140 = v_139;
  } else {
    v_140 = sub_285;
  };
  if (controller_c_blind_1) {
    sub_272 = v_140;
  } else {
    sub_272 = sub_285;
  };
  if (controller_ck_59_1) {
    sub_250 = sub_272;
  } else {
    sub_250 = sub_251;
  };
  if (controller_light_failed_recovered) {
    v_154 = sub_250;
    sub_211 = sub_212;
  } else {
    v_154 = sub_212;
    sub_211 = sub_250;
  };
  if (controller_ck_61_1) {
    sub_210 = v_154;
  } else {
    sub_210 = sub_211;
  };
  if (controller_ck_59_1) {
    sub_300 = sub_251;
  } else {
    sub_300 = sub_272;
  };
  if (controller_light_failed_recovered) {
    v_135 = sub_300;
    sub_299 = sub_212;
  } else {
    v_135 = sub_212;
    sub_299 = sub_300;
  };
  if (controller_ck_61_1) {
    v_136 = v_135;
  } else {
    v_136 = sub_299;
  };
  if (controller_c_light_2) {
    sub_298 = v_136;
  } else {
    sub_298 = sub_210;
  };
  if (controller_light_switch) {
    v_155 = sub_210;
  } else {
    v_155 = sub_298;
  };
  if (controller_c_light_1) {
    sub_209 = v_155;
  } else {
    sub_209 = sub_298;
  };
  if (controller_c_pc) {
    sub_312 = sub_27;
  } else {
    sub_312 = sub_18;
  };
  if (controller_cleaner) {
    v_122 = false;
    sub_311 = sub_312;
  } else {
    v_122 = sub_312;
    sub_311 = false;
  };
  if (controller_ck_37_1) {
    sub_310 = v_122;
  } else {
    sub_310 = sub_311;
  };
  sub_309 = sub_310;
  if (controller_v_277) {
    sub_308 = false;
  } else {
    sub_308 = sub_309;
  };
  if (controller_v_276) {
    v_123 = sub_308;
  } else {
    v_123 = false;
  };
  if (controller_c_air_2) {
    v_124 = v_123;
  } else {
    v_124 = false;
  };
  if (controller_v_277) {
    v_121 = sub_309;
  } else {
    v_121 = false;
  };
  if (controller_v_276) {
    sub_313 = v_121;
  } else {
    sub_313 = sub_308;
  };
  if (controller_c_air_1) {
    v_125 = v_124;
  } else {
    v_125 = sub_313;
  };
  sub_321 = sub_22;
  sub_320 = sub_321;
  sub_319 = sub_320;
  if (controller_ck_39_1) {
    v_119 = sub_319;
    v_118 = false;
  } else {
    v_119 = false;
    v_118 = sub_319;
  };
  if (controller_c_pc) {
    sub_318 = v_118;
  } else {
    sub_318 = v_119;
  };
  if (controller_cleaner) {
    v_120 = sub_318;
    sub_317 = false;
  } else {
    v_120 = false;
    sub_317 = sub_318;
  };
  if (controller_ck_37_1) {
    sub_316 = v_120;
  } else {
    sub_316 = sub_317;
  };
  sub_315 = sub_316;
  if (controller_v_277) {
    v_126 = false;
  } else {
    v_126 = sub_315;
  };
  if (controller_v_276) {
    v_127 = v_126;
  } else {
    v_127 = sub_315;
  };
  if (controller_v_277) {
    sub_314 = sub_315;
  } else {
    sub_314 = false;
  };
  if (controller_c_air_2) {
    v_128 = sub_314;
  } else {
    v_128 = v_127;
  };
  if (controller_v_276) {
    sub_322 = false;
  } else {
    sub_322 = sub_314;
  };
  if (controller_c_air_1) {
    v_129 = v_128;
  } else {
    v_129 = sub_322;
  };
  if (controller_c_closet) {
    sub_307 = v_125;
  } else {
    sub_307 = v_129;
  };
  if (controller_blind_failed_recovered) {
    v_130 = false;
    sub_306 = sub_307;
  } else {
    v_130 = sub_307;
    sub_306 = false;
  };
  if (controller_ck_66_1) {
    sub_305 = v_130;
  } else {
    sub_305 = sub_306;
  };
  sub_323 = sub_307;
  if (controller_ck_64_1) {
    v_131 = sub_323;
  } else {
    v_131 = sub_305;
  };
  if (controller_c_pc) {
    sub_332 = sub_95;
  } else {
    sub_332 = sub_89;
  };
  if (controller_cleaner) {
    v_110 = false;
    sub_331 = sub_332;
  } else {
    v_110 = sub_332;
    sub_331 = false;
  };
  if (controller_ck_37_1) {
    sub_330 = v_110;
  } else {
    sub_330 = sub_331;
  };
  sub_329 = sub_330;
  if (controller_v_277) {
    sub_328 = false;
  } else {
    sub_328 = sub_329;
  };
  if (controller_v_276) {
    v_111 = sub_328;
  } else {
    v_111 = false;
  };
  if (controller_c_air_2) {
    v_112 = v_111;
  } else {
    v_112 = false;
  };
  if (controller_v_277) {
    v_109 = sub_329;
  } else {
    v_109 = false;
  };
  if (controller_v_276) {
    sub_333 = v_109;
  } else {
    sub_333 = sub_328;
  };
  if (controller_c_air_1) {
    v_113 = v_112;
  } else {
    v_113 = sub_333;
  };
  sub_341 = sub_75;
  sub_340 = sub_341;
  sub_339 = sub_340;
  if (controller_ck_39_1) {
    v_107 = sub_339;
    v_106 = false;
  } else {
    v_107 = false;
    v_106 = sub_339;
  };
  if (controller_c_pc) {
    sub_338 = v_106;
  } else {
    sub_338 = v_107;
  };
  if (controller_cleaner) {
    v_108 = sub_338;
    sub_337 = false;
  } else {
    v_108 = false;
    sub_337 = sub_338;
  };
  if (controller_ck_37_1) {
    sub_336 = v_108;
  } else {
    sub_336 = sub_337;
  };
  sub_335 = sub_336;
  if (controller_v_277) {
    v_114 = false;
  } else {
    v_114 = sub_335;
  };
  if (controller_v_276) {
    v_115 = v_114;
  } else {
    v_115 = sub_335;
  };
  if (controller_v_277) {
    sub_334 = sub_335;
  } else {
    sub_334 = false;
  };
  if (controller_c_air_2) {
    v_116 = sub_334;
  } else {
    v_116 = v_115;
  };
  if (controller_v_276) {
    sub_342 = false;
  } else {
    sub_342 = sub_334;
  };
  if (controller_c_air_1) {
    v_117 = v_116;
  } else {
    v_117 = sub_342;
  };
  if (controller_c_closet) {
    sub_327 = v_113;
  } else {
    sub_327 = v_117;
  };
  if (controller_blind_failed_recovered) {
    sub_326 = sub_307;
    sub_343 = sub_327;
  } else {
    sub_326 = sub_327;
    sub_343 = sub_307;
  };
  if (controller_ck_66_1) {
    sub_325 = sub_343;
  } else {
    sub_325 = sub_326;
  };
  if (controller_ck_64_1) {
    sub_324 = sub_323;
  } else {
    sub_324 = sub_325;
  };
  if (controller_blind_switch) {
    v_132 = v_131;
  } else {
    v_132 = sub_324;
  };
  if (controller_c_blind_1) {
    sub_304 = v_132;
  } else {
    sub_304 = sub_324;
  };
  if (controller_change_shift) {
    v_95 = false;
    sub_351 = sub_310;
  } else {
    v_95 = sub_310;
    sub_351 = false;
  };
  if (controller_ck_1) {
    sub_350 = v_95;
  } else {
    sub_350 = sub_351;
  };
  if (controller_v_277) {
    sub_349 = false;
  } else {
    sub_349 = sub_350;
  };
  if (controller_v_276) {
    v_96 = sub_349;
  } else {
    v_96 = false;
  };
  if (controller_c_air_2) {
    v_97 = v_96;
  } else {
    v_97 = false;
  };
  if (controller_v_277) {
    v_94 = sub_350;
  } else {
    v_94 = false;
  };
  if (controller_v_276) {
    sub_352 = v_94;
  } else {
    sub_352 = sub_349;
  };
  if (controller_c_air_1) {
    v_98 = v_97;
  } else {
    v_98 = sub_352;
  };
  if (controller_change_shift) {
    v_93 = false;
    sub_355 = sub_316;
  } else {
    v_93 = sub_316;
    sub_355 = false;
  };
  if (controller_ck_1) {
    sub_354 = v_93;
  } else {
    sub_354 = sub_355;
  };
  if (controller_v_277) {
    v_99 = false;
  } else {
    v_99 = sub_354;
  };
  if (controller_v_276) {
    v_100 = v_99;
  } else {
    v_100 = sub_354;
  };
  if (controller_v_277) {
    sub_353 = sub_354;
  } else {
    sub_353 = false;
  };
  if (controller_c_air_2) {
    v_101 = sub_353;
  } else {
    v_101 = v_100;
  };
  if (controller_v_276) {
    sub_356 = false;
  } else {
    sub_356 = sub_353;
  };
  if (controller_c_air_1) {
    v_102 = v_101;
  } else {
    v_102 = sub_356;
  };
  if (controller_c_closet) {
    sub_348 = v_98;
  } else {
    sub_348 = v_102;
  };
  if (controller_blind_failed_recovered) {
    v_103 = sub_348;
    sub_347 = false;
  } else {
    v_103 = false;
    sub_347 = sub_348;
  };
  if (controller_ck_66_1) {
    sub_346 = v_103;
  } else {
    sub_346 = sub_347;
  };
  if (controller_ck_64_1) {
    v_104 = sub_346;
  } else {
    v_104 = false;
  };
  if (controller_change_shift) {
    v_84 = false;
    sub_363 = sub_330;
  } else {
    v_84 = sub_330;
    sub_363 = false;
  };
  if (controller_ck_1) {
    sub_362 = v_84;
  } else {
    sub_362 = sub_363;
  };
  if (controller_v_277) {
    sub_361 = false;
  } else {
    sub_361 = sub_362;
  };
  if (controller_v_276) {
    v_85 = sub_361;
  } else {
    v_85 = false;
  };
  if (controller_c_air_2) {
    v_86 = v_85;
  } else {
    v_86 = false;
  };
  if (controller_v_277) {
    v_83 = sub_362;
  } else {
    v_83 = false;
  };
  if (controller_v_276) {
    sub_364 = v_83;
  } else {
    sub_364 = sub_361;
  };
  if (controller_c_air_1) {
    v_87 = v_86;
  } else {
    v_87 = sub_364;
  };
  if (controller_change_shift) {
    v_82 = false;
    sub_367 = sub_336;
  } else {
    v_82 = sub_336;
    sub_367 = false;
  };
  if (controller_ck_1) {
    sub_366 = v_82;
  } else {
    sub_366 = sub_367;
  };
  if (controller_v_277) {
    v_88 = false;
  } else {
    v_88 = sub_366;
  };
  if (controller_v_276) {
    v_89 = v_88;
  } else {
    v_89 = sub_366;
  };
  if (controller_v_277) {
    sub_365 = sub_366;
  } else {
    sub_365 = false;
  };
  if (controller_c_air_2) {
    v_90 = sub_365;
  } else {
    v_90 = v_89;
  };
  if (controller_v_276) {
    sub_368 = false;
  } else {
    sub_368 = sub_365;
  };
  if (controller_c_air_1) {
    v_91 = v_90;
  } else {
    v_91 = sub_368;
  };
  if (controller_c_closet) {
    sub_360 = v_87;
  } else {
    sub_360 = v_91;
  };
  if (controller_blind_failed_recovered) {
    v_92 = sub_360;
    sub_359 = false;
  } else {
    v_92 = false;
    sub_359 = sub_360;
  };
  if (controller_ck_66_1) {
    sub_358 = v_92;
  } else {
    sub_358 = sub_359;
  };
  if (controller_ck_64_1) {
    sub_357 = sub_346;
  } else {
    sub_357 = sub_358;
  };
  if (controller_blind_switch) {
    v_105 = v_104;
  } else {
    v_105 = sub_357;
  };
  sub_369 = sub_357;
  if (controller_c_blind_1) {
    sub_345 = v_105;
  } else {
    sub_345 = sub_369;
  };
  sub_371 = sub_323;
  sub_370 = sub_371;
  if (controller_ck_59_1) {
    sub_344 = sub_370;
  } else {
    sub_344 = sub_345;
  };
  if (controller_light_failed_recovered) {
    v_133 = sub_344;
    sub_303 = sub_304;
  } else {
    v_133 = sub_304;
    sub_303 = sub_344;
  };
  if (controller_ck_61_1) {
    sub_302 = v_133;
  } else {
    sub_302 = sub_303;
  };
  if (controller_ck_59_1) {
    sub_374 = sub_345;
  } else {
    sub_374 = sub_370;
  };
  if (controller_light_failed_recovered) {
    v_80 = sub_374;
    sub_373 = sub_304;
  } else {
    v_80 = sub_304;
    sub_373 = sub_374;
  };
  if (controller_ck_61_1) {
    v_81 = v_80;
  } else {
    v_81 = sub_373;
  };
  if (controller_c_light_2) {
    sub_372 = v_81;
  } else {
    sub_372 = sub_302;
  };
  if (controller_light_switch) {
    v_134 = sub_302;
  } else {
    v_134 = sub_372;
  };
  if (controller_c_light_1) {
    sub_301 = v_134;
  } else {
    sub_301 = sub_372;
  };
  if (controller_air_failed_recovered) {
    v_156 = sub_301;
    sub_208 = sub_209;
  } else {
    v_156 = sub_209;
    sub_208 = sub_301;
  };
  if (controller_ck_51_1) {
    sub_207 = v_156;
  } else {
    sub_207 = sub_208;
  };
  if (controller_worker) {
    v_246 = sub_207;
    sub_2 = sub_3;
  } else {
    v_246 = sub_3;
    sub_2 = sub_207;
  };
  if (controller_ck_35_1) {
    sub_1 = v_246;
  } else {
    sub_1 = sub_2;
  };
  if (controller_door_failed_recovered) {
    v_68 = false;
    sub_395 = sub_75;
  } else {
    v_68 = sub_75;
    sub_395 = false;
  };
  if (controller_ck_46_1) {
    sub_394 = v_68;
  } else {
    sub_394 = sub_395;
  };
  if (controller_window_failed_recovered) {
    v_69 = sub_394;
    sub_393 = sub_73;
  } else {
    v_69 = sub_73;
    sub_393 = sub_394;
  };
  if (controller_ck_56_1) {
    v_70 = v_69;
  } else {
    v_70 = sub_393;
  };
  if (controller_c_window) {
    sub_392 = sub_79;
  } else {
    sub_392 = v_70;
  };
  if (controller_ck_39_1) {
    sub_391 = sub_392;
    sub_396 = false;
  } else {
    sub_391 = false;
    sub_396 = sub_392;
  };
  if (controller_c_pc) {
    sub_390 = sub_391;
  } else {
    sub_390 = sub_396;
  };
  if (controller_cleaner) {
    v_71 = sub_390;
    sub_389 = false;
  } else {
    v_71 = false;
    sub_389 = sub_390;
  };
  if (controller_ck_37_1) {
    sub_388 = v_71;
  } else {
    sub_388 = sub_389;
  };
  sub_387 = sub_388;
  sub_386 = sub_387;
  sub_385 = sub_386;
  if (controller_c_closet) {
    sub_384 = sub_83;
    sub_397 = sub_83;
  } else {
    sub_384 = sub_385;
    sub_397 = false;
  };
  if (controller_blind_failed_recovered) {
    v_72 = sub_397;
    sub_383 = sub_384;
  } else {
    v_72 = sub_384;
    sub_383 = sub_397;
  };
  if (controller_ck_66_1) {
    sub_382 = v_72;
  } else {
    sub_382 = sub_383;
  };
  if (controller_c_closet) {
    sub_399 = false;
  } else {
    sub_399 = sub_63;
  };
  if (controller_blind_failed_recovered) {
    v_73 = sub_399;
    sub_398 = sub_384;
  } else {
    v_73 = sub_384;
    sub_398 = sub_399;
  };
  if (controller_ck_66_1) {
    v_74 = v_73;
  } else {
    v_74 = sub_398;
  };
  if (controller_ck_64_1) {
    v_75 = v_74;
  } else {
    v_75 = sub_382;
  };
  if (controller_blind_failed_recovered) {
    v_66 = sub_82;
    v_65 = sub_62;
    sub_402 = sub_384;
  } else {
    v_66 = sub_384;
    v_65 = sub_384;
    sub_402 = sub_62;
  };
  if (controller_ck_66_1) {
    sub_401 = v_65;
  } else {
    sub_401 = sub_402;
  };
  if (controller_blind_failed_recovered) {
    sub_403 = sub_384;
  } else {
    sub_403 = sub_82;
  };
  if (controller_ck_66_1) {
    v_67 = v_66;
  } else {
    v_67 = sub_403;
  };
  if (controller_ck_64_1) {
    sub_400 = v_67;
  } else {
    sub_400 = sub_401;
  };
  if (controller_blind_switch) {
    v_76 = v_75;
  } else {
    v_76 = sub_400;
  };
  if (controller_c_blind_1) {
    sub_381 = v_76;
  } else {
    sub_381 = sub_400;
  };
  sub_406 = sub_397;
  if (controller_c_closet) {
    sub_408 = false;
  } else {
    sub_408 = sub_110;
  };
  if (controller_blind_failed_recovered) {
    v_61 = sub_408;
    sub_407 = sub_397;
  } else {
    v_61 = sub_397;
    sub_407 = sub_408;
  };
  if (controller_ck_66_1) {
    v_62 = v_61;
  } else {
    v_62 = sub_407;
  };
  if (controller_ck_64_1) {
    v_63 = v_62;
  } else {
    v_63 = sub_406;
  };
  if (controller_blind_failed_recovered) {
    v_59 = sub_115;
    v_58 = sub_109;
    sub_411 = sub_397;
  } else {
    v_59 = sub_397;
    v_58 = sub_397;
    sub_411 = sub_109;
  };
  if (controller_ck_66_1) {
    sub_410 = v_58;
  } else {
    sub_410 = sub_411;
  };
  if (controller_blind_failed_recovered) {
    sub_412 = sub_397;
  } else {
    sub_412 = sub_115;
  };
  if (controller_ck_66_1) {
    v_60 = v_59;
  } else {
    v_60 = sub_412;
  };
  if (controller_ck_64_1) {
    sub_409 = v_60;
  } else {
    sub_409 = sub_410;
  };
  if (controller_blind_switch) {
    v_64 = v_63;
  } else {
    v_64 = sub_409;
  };
  if (controller_c_blind_1) {
    sub_405 = v_64;
  } else {
    sub_405 = sub_409;
  };
  if (controller_c_closet) {
    sub_416 = false;
  } else {
    sub_416 = sub_385;
  };
  sub_424 = sub_71;
  if (controller_ck_39_1) {
    sub_423 = sub_424;
    sub_425 = false;
  } else {
    sub_423 = false;
    sub_425 = sub_424;
  };
  if (controller_c_pc) {
    sub_422 = sub_423;
  } else {
    sub_422 = sub_425;
  };
  if (controller_cleaner) {
    v_54 = sub_422;
    sub_421 = false;
  } else {
    v_54 = false;
    sub_421 = sub_422;
  };
  if (controller_ck_37_1) {
    sub_420 = v_54;
  } else {
    sub_420 = sub_421;
  };
  sub_419 = sub_420;
  sub_418 = sub_419;
  if (controller_c_closet) {
    sub_417 = false;
  } else {
    sub_417 = sub_418;
  };
  if (controller_blind_failed_recovered) {
    v_55 = sub_417;
    sub_415 = sub_416;
  } else {
    v_55 = sub_416;
    sub_415 = sub_417;
  };
  if (controller_ck_66_1) {
    sub_414 = v_55;
  } else {
    sub_414 = sub_415;
  };
  if (controller_blind_failed_recovered) {
    v_53 = sub_399;
    sub_427 = sub_416;
  } else {
    v_53 = sub_416;
    sub_427 = sub_399;
  };
  if (controller_ck_66_1) {
    sub_426 = v_53;
  } else {
    sub_426 = sub_427;
  };
  if (controller_ck_64_1) {
    v_56 = sub_426;
  } else {
    v_56 = sub_414;
  };
  if (controller_ck_56_1) {
    v_49 = sub_142;
  } else {
    v_49 = sub_143;
  };
  if (controller_c_window) {
    sub_437 = sub_71;
  } else {
    sub_437 = v_49;
  };
  if (controller_ck_39_1) {
    sub_436 = sub_437;
    sub_438 = false;
  } else {
    sub_436 = false;
    sub_438 = sub_437;
  };
  if (controller_c_pc) {
    sub_435 = sub_436;
  } else {
    sub_435 = sub_438;
  };
  if (controller_cleaner) {
    v_50 = sub_435;
    sub_434 = false;
  } else {
    v_50 = false;
    sub_434 = sub_435;
  };
  if (controller_ck_37_1) {
    sub_433 = v_50;
  } else {
    sub_433 = sub_434;
  };
  sub_432 = sub_433;
  sub_431 = sub_432;
  if (controller_c_closet) {
    sub_430 = false;
  } else {
    sub_430 = sub_431;
  };
  if (controller_blind_failed_recovered) {
    v_51 = sub_430;
    sub_429 = sub_416;
  } else {
    v_51 = sub_416;
    sub_429 = sub_430;
  };
  if (controller_ck_66_1) {
    v_52 = v_51;
  } else {
    v_52 = sub_429;
  };
  if (controller_ck_64_1) {
    sub_428 = v_52;
  } else {
    sub_428 = sub_426;
  };
  if (controller_blind_switch) {
    v_57 = v_56;
  } else {
    v_57 = sub_428;
  };
  if (controller_c_blind_1) {
    sub_413 = v_57;
  } else {
    sub_413 = sub_428;
  };
  if (controller_ck_59_1) {
    sub_404 = sub_413;
  } else {
    sub_404 = sub_405;
  };
  if (controller_light_failed_recovered) {
    v_77 = sub_404;
    sub_380 = sub_381;
  } else {
    v_77 = sub_381;
    sub_380 = sub_404;
  };
  if (controller_ck_61_1) {
    sub_379 = v_77;
  } else {
    sub_379 = sub_380;
  };
  if (controller_ck_59_1) {
    sub_441 = sub_405;
  } else {
    sub_441 = sub_413;
  };
  if (controller_light_failed_recovered) {
    v_47 = sub_441;
    sub_440 = sub_381;
  } else {
    v_47 = sub_381;
    sub_440 = sub_441;
  };
  if (controller_ck_61_1) {
    v_48 = v_47;
  } else {
    v_48 = sub_440;
  };
  if (controller_c_light_2) {
    sub_439 = v_48;
  } else {
    sub_439 = sub_379;
  };
  if (controller_light_switch) {
    v_78 = sub_379;
  } else {
    v_78 = sub_439;
  };
  if (controller_c_light_1) {
    sub_378 = v_78;
  } else {
    sub_378 = sub_439;
  };
  if (controller_c_closet) {
    sub_448 = sub_177;
    sub_449 = sub_177;
  } else {
    sub_448 = sub_170;
    sub_449 = false;
  };
  if (controller_blind_failed_recovered) {
    v_40 = sub_449;
    sub_447 = sub_448;
  } else {
    v_40 = sub_448;
    sub_447 = sub_449;
  };
  if (controller_ck_66_1) {
    sub_446 = v_40;
  } else {
    sub_446 = sub_447;
  };
  if (controller_c_closet) {
    sub_451 = false;
  } else {
    sub_451 = sub_170;
  };
  if (controller_blind_failed_recovered) {
    v_41 = sub_451;
    sub_450 = sub_448;
  } else {
    v_41 = sub_448;
    sub_450 = sub_451;
  };
  if (controller_ck_66_1) {
    v_42 = v_41;
  } else {
    v_42 = sub_450;
  };
  if (controller_ck_64_1) {
    v_43 = v_42;
  } else {
    v_43 = sub_446;
  };
  if (controller_blind_failed_recovered) {
    v_38 = sub_176;
    v_37 = sub_169;
    sub_454 = sub_448;
  } else {
    v_38 = sub_448;
    v_37 = sub_448;
    sub_454 = sub_169;
  };
  if (controller_ck_66_1) {
    sub_453 = v_37;
  } else {
    sub_453 = sub_454;
  };
  if (controller_blind_failed_recovered) {
    sub_455 = sub_448;
  } else {
    sub_455 = sub_176;
  };
  if (controller_ck_66_1) {
    v_39 = v_38;
  } else {
    v_39 = sub_455;
  };
  if (controller_ck_64_1) {
    sub_452 = v_39;
  } else {
    sub_452 = sub_453;
  };
  if (controller_blind_switch) {
    v_44 = v_43;
  } else {
    v_44 = sub_452;
  };
  if (controller_c_blind_1) {
    sub_445 = v_44;
  } else {
    sub_445 = sub_452;
  };
  sub_458 = sub_449;
  if (controller_c_closet) {
    sub_460 = false;
  } else {
    sub_460 = sub_194;
  };
  if (controller_blind_failed_recovered) {
    v_33 = sub_460;
    sub_459 = sub_449;
  } else {
    v_33 = sub_449;
    sub_459 = sub_460;
  };
  if (controller_ck_66_1) {
    v_34 = v_33;
  } else {
    v_34 = sub_459;
  };
  if (controller_ck_64_1) {
    v_35 = v_34;
  } else {
    v_35 = sub_458;
  };
  if (controller_blind_failed_recovered) {
    v_31 = sub_200;
    v_30 = sub_193;
    sub_463 = sub_449;
  } else {
    v_31 = sub_449;
    v_30 = sub_449;
    sub_463 = sub_193;
  };
  if (controller_ck_66_1) {
    sub_462 = v_30;
  } else {
    sub_462 = sub_463;
  };
  if (controller_blind_failed_recovered) {
    sub_464 = sub_449;
  } else {
    sub_464 = sub_200;
  };
  if (controller_ck_66_1) {
    v_32 = v_31;
  } else {
    v_32 = sub_464;
  };
  if (controller_ck_64_1) {
    sub_461 = v_32;
  } else {
    sub_461 = sub_462;
  };
  if (controller_blind_switch) {
    v_36 = v_35;
  } else {
    v_36 = sub_461;
  };
  if (controller_c_blind_1) {
    sub_457 = v_36;
  } else {
    sub_457 = sub_461;
  };
  sub_467 = sub_451;
  sub_466 = sub_467;
  sub_465 = sub_466;
  if (controller_ck_59_1) {
    sub_456 = sub_465;
  } else {
    sub_456 = sub_457;
  };
  if (controller_light_failed_recovered) {
    v_45 = sub_456;
    sub_444 = sub_445;
  } else {
    v_45 = sub_445;
    sub_444 = sub_456;
  };
  if (controller_ck_61_1) {
    sub_443 = v_45;
  } else {
    sub_443 = sub_444;
  };
  if (controller_ck_59_1) {
    sub_470 = sub_457;
  } else {
    sub_470 = sub_465;
  };
  if (controller_light_failed_recovered) {
    v_28 = sub_470;
    sub_469 = sub_445;
  } else {
    v_28 = sub_445;
    sub_469 = sub_470;
  };
  if (controller_ck_61_1) {
    v_29 = v_28;
  } else {
    v_29 = sub_469;
  };
  if (controller_c_light_2) {
    sub_468 = v_29;
  } else {
    sub_468 = sub_443;
  };
  if (controller_light_switch) {
    v_46 = sub_443;
  } else {
    v_46 = sub_468;
  };
  if (controller_c_light_1) {
    sub_442 = v_46;
  } else {
    sub_442 = sub_468;
  };
  if (controller_air_failed_recovered) {
    v_79 = sub_442;
    sub_377 = sub_378;
  } else {
    v_79 = sub_378;
    sub_377 = sub_442;
  };
  if (controller_ck_51_1) {
    sub_376 = v_79;
  } else {
    sub_376 = sub_377;
  };
  if (controller_c_pc) {
    sub_484 = sub_396;
  } else {
    sub_484 = sub_391;
  };
  if (controller_cleaner) {
    sub_483 = sub_484;
    sub_485 = false;
  } else {
    sub_483 = false;
    sub_485 = sub_484;
  };
  if (controller_ck_37_1) {
    sub_482 = sub_485;
  } else {
    sub_482 = sub_483;
  };
  sub_481 = sub_482;
  sub_480 = sub_481;
  if (controller_ck_37_1) {
    sub_488 = sub_483;
  } else {
    sub_488 = sub_485;
  };
  sub_487 = sub_488;
  sub_486 = sub_487;
  if (controller_c_closet) {
    sub_479 = sub_480;
  } else {
    sub_479 = sub_486;
  };
  if (controller_blind_failed_recovered) {
    v_22 = false;
    sub_478 = sub_479;
  } else {
    v_22 = sub_479;
    sub_478 = false;
  };
  if (controller_ck_66_1) {
    sub_477 = v_22;
  } else {
    sub_477 = sub_478;
  };
  if (controller_blind_failed_recovered) {
    v_21 = sub_240;
    sub_490 = sub_479;
  } else {
    v_21 = sub_479;
    sub_490 = sub_240;
  };
  if (controller_ck_66_1) {
    sub_489 = v_21;
  } else {
    sub_489 = sub_490;
  };
  if (controller_ck_64_1) {
    v_23 = sub_489;
  } else {
    v_23 = sub_477;
  };
  if (controller_blind_failed_recovered) {
    v_19 = sub_227;
    sub_492 = sub_479;
  } else {
    v_19 = sub_479;
    sub_492 = sub_227;
  };
  if (controller_ck_66_1) {
    v_20 = v_19;
  } else {
    v_20 = sub_492;
  };
  if (controller_ck_64_1) {
    sub_491 = v_20;
  } else {
    sub_491 = sub_489;
  };
  if (controller_blind_switch) {
    v_24 = v_23;
  } else {
    v_24 = sub_491;
  };
  if (controller_c_blind_1) {
    sub_476 = v_24;
  } else {
    sub_476 = sub_491;
  };
  if (controller_ck_64_1) {
    v_17 = sub_262;
  } else {
    v_17 = false;
  };
  if (controller_blind_switch) {
    v_18 = v_17;
  } else {
    v_18 = sub_261;
  };
  if (controller_c_blind_1) {
    sub_494 = v_18;
  } else {
    sub_494 = sub_271;
  };
  if (controller_c_pc) {
    sub_503 = sub_425;
  } else {
    sub_503 = sub_423;
  };
  if (controller_cleaner) {
    sub_502 = sub_503;
    sub_504 = false;
  } else {
    sub_502 = false;
    sub_504 = sub_503;
  };
  if (controller_ck_37_1) {
    sub_501 = sub_504;
  } else {
    sub_501 = sub_502;
  };
  sub_500 = sub_501;
  sub_499 = sub_500;
  if (controller_ck_37_1) {
    sub_507 = sub_502;
  } else {
    sub_507 = sub_504;
  };
  sub_506 = sub_507;
  sub_505 = sub_506;
  if (controller_c_closet) {
    sub_498 = sub_499;
  } else {
    sub_498 = sub_505;
  };
  if (controller_blind_failed_recovered) {
    v_14 = sub_498;
    sub_497 = sub_479;
  } else {
    v_14 = sub_479;
    sub_497 = sub_498;
  };
  if (controller_ck_66_1) {
    sub_496 = v_14;
  } else {
    sub_496 = sub_497;
  };
  if (controller_ck_64_1) {
    v_15 = sub_489;
  } else {
    v_15 = sub_496;
  };
  if (controller_c_pc) {
    sub_515 = sub_438;
  } else {
    sub_515 = sub_436;
  };
  if (controller_cleaner) {
    sub_514 = sub_515;
    sub_516 = false;
  } else {
    sub_514 = false;
    sub_516 = sub_515;
  };
  if (controller_ck_37_1) {
    sub_513 = sub_516;
  } else {
    sub_513 = sub_514;
  };
  sub_512 = sub_513;
  sub_511 = sub_512;
  if (controller_ck_37_1) {
    sub_519 = sub_514;
  } else {
    sub_519 = sub_516;
  };
  sub_518 = sub_519;
  sub_517 = sub_518;
  if (controller_c_closet) {
    sub_510 = sub_511;
  } else {
    sub_510 = sub_517;
  };
  if (controller_blind_failed_recovered) {
    v_12 = sub_510;
    sub_509 = sub_479;
  } else {
    v_12 = sub_479;
    sub_509 = sub_510;
  };
  if (controller_ck_66_1) {
    v_13 = v_12;
  } else {
    v_13 = sub_509;
  };
  if (controller_ck_64_1) {
    sub_508 = v_13;
  } else {
    sub_508 = sub_489;
  };
  if (controller_blind_switch) {
    v_16 = v_15;
  } else {
    v_16 = sub_508;
  };
  if (controller_c_blind_1) {
    sub_495 = v_16;
  } else {
    sub_495 = sub_508;
  };
  if (controller_ck_59_1) {
    sub_493 = sub_495;
  } else {
    sub_493 = sub_494;
  };
  if (controller_light_failed_recovered) {
    v_25 = sub_493;
    sub_475 = sub_476;
  } else {
    v_25 = sub_476;
    sub_475 = sub_493;
  };
  if (controller_ck_61_1) {
    sub_474 = v_25;
  } else {
    sub_474 = sub_475;
  };
  if (controller_ck_59_1) {
    sub_522 = sub_494;
  } else {
    sub_522 = sub_495;
  };
  if (controller_light_failed_recovered) {
    v_10 = sub_522;
    sub_521 = sub_476;
  } else {
    v_10 = sub_476;
    sub_521 = sub_522;
  };
  if (controller_ck_61_1) {
    v_11 = v_10;
  } else {
    v_11 = sub_521;
  };
  if (controller_c_light_2) {
    sub_520 = v_11;
  } else {
    sub_520 = sub_474;
  };
  if (controller_light_switch) {
    v_26 = sub_474;
  } else {
    v_26 = sub_520;
  };
  if (controller_c_light_1) {
    sub_473 = v_26;
  } else {
    sub_473 = sub_520;
  };
  if (controller_blind_failed_recovered) {
    v_5 = false;
    sub_528 = sub_327;
  } else {
    v_5 = sub_327;
    sub_528 = false;
  };
  if (controller_ck_66_1) {
    sub_527 = v_5;
  } else {
    sub_527 = sub_528;
  };
  sub_529 = sub_327;
  if (controller_ck_64_1) {
    v_6 = sub_529;
  } else {
    v_6 = sub_527;
  };
  if (controller_ck_66_1) {
    v_4 = sub_326;
  } else {
    v_4 = sub_343;
  };
  if (controller_ck_64_1) {
    sub_530 = v_4;
  } else {
    sub_530 = sub_529;
  };
  if (controller_blind_switch) {
    v_7 = v_6;
  } else {
    v_7 = sub_530;
  };
  if (controller_c_blind_1) {
    sub_526 = v_7;
  } else {
    sub_526 = sub_530;
  };
  if (controller_ck_64_1) {
    v_2 = sub_358;
  } else {
    v_2 = false;
  };
  if (controller_blind_switch) {
    v_3 = v_2;
  } else {
    v_3 = sub_357;
  };
  if (controller_c_blind_1) {
    sub_532 = v_3;
  } else {
    sub_532 = sub_369;
  };
  sub_534 = sub_529;
  sub_533 = sub_534;
  if (controller_ck_59_1) {
    sub_531 = sub_533;
  } else {
    sub_531 = sub_532;
  };
  if (controller_light_failed_recovered) {
    v_8 = sub_531;
    sub_525 = sub_526;
  } else {
    v_8 = sub_526;
    sub_525 = sub_531;
  };
  if (controller_ck_61_1) {
    sub_524 = v_8;
  } else {
    sub_524 = sub_525;
  };
  if (controller_ck_59_1) {
    sub_537 = sub_532;
  } else {
    sub_537 = sub_533;
  };
  if (controller_light_failed_recovered) {
    v = sub_537;
    sub_536 = sub_526;
  } else {
    v = sub_526;
    sub_536 = sub_537;
  };
  if (controller_ck_61_1) {
    v_1 = v;
  } else {
    v_1 = sub_536;
  };
  if (controller_c_light_2) {
    sub_535 = v_1;
  } else {
    sub_535 = sub_524;
  };
  if (controller_light_switch) {
    v_9 = sub_524;
  } else {
    v_9 = sub_535;
  };
  if (controller_c_light_1) {
    sub_523 = v_9;
  } else {
    sub_523 = sub_535;
  };
  if (controller_air_failed_recovered) {
    v_27 = sub_523;
    sub_472 = sub_473;
  } else {
    v_27 = sub_473;
    sub_472 = sub_523;
  };
  if (controller_ck_51_1) {
    sub_471 = v_27;
  } else {
    sub_471 = sub_472;
  };
  if (controller_worker) {
    v_247 = sub_471;
    sub_375 = sub_376;
  } else {
    v_247 = sub_376;
    sub_375 = sub_471;
  };
  if (controller_ck_35_1) {
    v_248 = v_247;
  } else {
    v_248 = sub_375;
  };
  if (p_controller_c_blind_2) {
    sub_0 = v_248;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_blind_2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_light_2_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered,
  int controller_door_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_20, int controller_ck_35_1, int controller_pnr_19,
  int controller_ck_37_1, int controller_pnr_18, int controller_ck_39_1,
  int controller_pnr_17, int controller_ck_41_1, int controller_pnr_16,
  int controller_ck_44_1, int controller_pnr_15, int controller_ck_46_1,
  int controller_pnr_14, int controller_v_277, int controller_v_276,
  int controller_pnr_13, int controller_ck_51_1, int controller_pnr_12,
  int controller_ck_54_1, int controller_pnr_11, int controller_ck_56_1,
  int controller_pnr_10, int controller_ck_59_1, int controller_pnr_9,
  int controller_ck_61_1, int controller_pnr_8, int controller_ck_64_1,
  int controller_pnr_7, int controller_ck_66_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_blind_1,
  int controller_c_light_1, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_2_out* _out) {
  
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
  int sub_524;
  int sub_525;
  int sub_526;
  int sub_527;
  int sub_528;
  int sub_529;
  int sub_530;
  int sub_531;
  int sub_532;
  int sub_533;
  int sub_534;
  int sub_535;
  int sub_536;
  int sub_537;
  int sub_538;
  int sub_539;
  int sub_540;
  int sub_541;
  int sub_542;
  int sub_543;
  int sub_544;
  int sub_545;
  int sub_546;
  int sub_547;
  int sub_548;
  int sub_549;
  int sub_550;
  int sub_551;
  sub_21 = false;
  sub_23 = (controller_c_door&&false);
  v_531 = !(controller_c_door);
  sub_24 = (v_531&&false);
  if (controller_ck_44_1) {
    sub_22 = sub_24;
  } else {
    sub_22 = sub_23;
  };
  if (controller_door_failed_recovered) {
    v_532 = sub_22;
    sub_20 = sub_21;
  } else {
    v_532 = sub_21;
    sub_20 = sub_22;
  };
  if (controller_ck_46_1) {
    sub_19 = v_532;
  } else {
    sub_19 = sub_20;
  };
  if (controller_window_failed_recovered) {
    v_533 = false;
    sub_25 = sub_19;
  } else {
    v_533 = sub_19;
    sub_25 = false;
  };
  if (controller_ck_56_1) {
    v_534 = v_533;
  } else {
    v_534 = sub_25;
  };
  if (controller_c_window) {
    sub_18 = sub_19;
  } else {
    sub_18 = v_534;
  };
  if (controller_ck_39_1) {
    sub_17 = sub_18;
    sub_26 = false;
  } else {
    sub_17 = false;
    sub_26 = sub_18;
  };
  if (controller_c_pc) {
    sub_16 = sub_17;
  } else {
    sub_16 = sub_26;
  };
  if (controller_cleaner) {
    sub_15 = sub_16;
    sub_27 = false;
  } else {
    sub_15 = false;
    sub_27 = sub_16;
  };
  if (controller_ck_37_1) {
    sub_14 = sub_27;
  } else {
    sub_14 = sub_15;
  };
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (controller_ck_44_1) {
    sub_39 = sub_23;
  } else {
    sub_39 = sub_24;
  };
  if (controller_door_failed_recovered) {
    v_527 = sub_39;
    sub_38 = sub_21;
  } else {
    v_527 = sub_21;
    sub_38 = sub_39;
  };
  if (controller_ck_46_1) {
    sub_37 = v_527;
  } else {
    sub_37 = sub_38;
  };
  sub_36 = sub_37;
  if (controller_door_failed_recovered) {
    v_526 = false;
    sub_42 = sub_21;
  } else {
    v_526 = sub_21;
    sub_42 = false;
  };
  if (controller_ck_46_1) {
    sub_41 = v_526;
  } else {
    sub_41 = sub_42;
  };
  if (controller_window_failed_recovered) {
    v_528 = sub_41;
    sub_40 = sub_37;
  } else {
    v_528 = sub_37;
    sub_40 = sub_41;
  };
  if (controller_ck_56_1) {
    v_529 = v_528;
  } else {
    v_529 = sub_40;
  };
  if (controller_c_window) {
    sub_35 = sub_36;
  } else {
    sub_35 = v_529;
  };
  if (controller_ck_39_1) {
    sub_34 = sub_35;
    sub_43 = false;
  } else {
    sub_34 = false;
    sub_43 = sub_35;
  };
  if (controller_c_pc) {
    sub_33 = sub_34;
  } else {
    sub_33 = sub_43;
  };
  if (controller_cleaner) {
    v_530 = sub_33;
    sub_32 = false;
  } else {
    v_530 = false;
    sub_32 = sub_33;
  };
  if (controller_ck_37_1) {
    sub_31 = v_530;
  } else {
    sub_31 = sub_32;
  };
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  if (controller_c_closet) {
    sub_10 = sub_11;
    sub_44 = sub_11;
  } else {
    sub_10 = sub_28;
    sub_44 = false;
  };
  if (controller_blind_failed_recovered) {
    v_535 = sub_44;
    sub_9 = sub_10;
  } else {
    v_535 = sub_10;
    sub_9 = sub_44;
  };
  if (controller_ck_66_1) {
    sub_8 = v_535;
  } else {
    sub_8 = sub_9;
  };
  if (controller_window_failed_recovered) {
    v_524 = false;
    sub_56 = sub_37;
  } else {
    v_524 = sub_37;
    sub_56 = false;
  };
  if (controller_ck_56_1) {
    sub_55 = v_524;
  } else {
    sub_55 = sub_56;
  };
  if (controller_c_window) {
    sub_54 = sub_55;
  } else {
    sub_54 = sub_36;
  };
  if (controller_ck_39_1) {
    sub_53 = sub_54;
    sub_57 = false;
  } else {
    sub_53 = false;
    sub_57 = sub_54;
  };
  if (controller_c_pc) {
    sub_52 = sub_53;
  } else {
    sub_52 = sub_57;
  };
  if (controller_cleaner) {
    v_525 = sub_52;
    sub_51 = false;
  } else {
    v_525 = false;
    sub_51 = sub_52;
  };
  if (controller_ck_37_1) {
    sub_50 = v_525;
  } else {
    sub_50 = sub_51;
  };
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  if (controller_c_closet) {
    sub_46 = false;
  } else {
    sub_46 = sub_47;
  };
  if (controller_blind_failed_recovered) {
    v_536 = sub_46;
    sub_45 = sub_10;
  } else {
    v_536 = sub_10;
    sub_45 = sub_46;
  };
  if (controller_ck_66_1) {
    v_537 = v_536;
  } else {
    v_537 = sub_45;
  };
  if (controller_ck_64_1) {
    v_538 = v_537;
  } else {
    v_538 = sub_8;
  };
  if (controller_c_closet) {
    sub_60 = sub_11;
  } else {
    sub_60 = sub_47;
  };
  if (controller_blind_failed_recovered) {
    v_523 = sub_60;
    sub_59 = sub_10;
  } else {
    v_523 = sub_10;
    sub_59 = sub_60;
  };
  if (controller_ck_66_1) {
    sub_58 = v_523;
  } else {
    sub_58 = sub_59;
  };
  if (controller_blind_switch) {
    v_539 = v_538;
  } else {
    v_539 = sub_58;
  };
  if (controller_c_blind_1) {
    sub_7 = v_539;
  } else {
    sub_7 = sub_58;
  };
  sub_63 = sub_44;
  if (controller_change_shift) {
    v_515 = false;
    sub_69 = sub_50;
  } else {
    v_515 = sub_50;
    sub_69 = false;
  };
  if (controller_ck_1) {
    sub_68 = v_515;
  } else {
    sub_68 = sub_69;
  };
  sub_67 = sub_68;
  sub_66 = sub_67;
  if (controller_c_closet) {
    sub_65 = false;
  } else {
    sub_65 = sub_66;
  };
  if (controller_blind_failed_recovered) {
    v_516 = sub_65;
    sub_64 = sub_44;
  } else {
    v_516 = sub_44;
    sub_64 = sub_65;
  };
  if (controller_ck_66_1) {
    v_517 = v_516;
  } else {
    v_517 = sub_64;
  };
  if (controller_ck_64_1) {
    v_518 = v_517;
  } else {
    v_518 = sub_63;
  };
  if (controller_c_closet) {
    sub_72 = sub_11;
  } else {
    sub_72 = sub_66;
  };
  if (controller_blind_failed_recovered) {
    v_514 = sub_72;
    sub_71 = sub_44;
  } else {
    v_514 = sub_44;
    sub_71 = sub_72;
  };
  if (controller_ck_66_1) {
    sub_70 = v_514;
  } else {
    sub_70 = sub_71;
  };
  if (controller_blind_switch) {
    v_519 = v_518;
  } else {
    v_519 = sub_70;
  };
  if (controller_c_blind_1) {
    sub_62 = v_519;
  } else {
    sub_62 = sub_70;
  };
  if (controller_c_closet) {
    sub_75 = false;
  } else {
    sub_75 = sub_28;
  };
  sub_84 = sub_55;
  if (controller_ck_39_1) {
    sub_83 = sub_84;
    sub_85 = false;
  } else {
    sub_83 = false;
    sub_85 = sub_84;
  };
  if (controller_c_pc) {
    sub_82 = sub_83;
  } else {
    sub_82 = sub_85;
  };
  if (controller_cleaner) {
    v_512 = sub_82;
    sub_81 = false;
  } else {
    v_512 = false;
    sub_81 = sub_82;
  };
  if (controller_ck_37_1) {
    sub_80 = v_512;
  } else {
    sub_80 = sub_81;
  };
  sub_79 = sub_80;
  sub_78 = sub_79;
  sub_77 = sub_78;
  if (controller_c_closet) {
    sub_76 = false;
  } else {
    sub_76 = sub_77;
  };
  if (controller_blind_failed_recovered) {
    v_513 = sub_76;
    sub_74 = sub_75;
  } else {
    v_513 = sub_75;
    sub_74 = sub_76;
  };
  if (controller_ck_66_1) {
    sub_73 = v_513;
  } else {
    sub_73 = sub_74;
  };
  if (controller_blind_failed_recovered) {
    v_511 = sub_46;
    sub_87 = sub_75;
  } else {
    v_511 = sub_75;
    sub_87 = sub_46;
  };
  if (controller_ck_66_1) {
    sub_86 = v_511;
  } else {
    sub_86 = sub_87;
  };
  if (controller_ck_64_1) {
    v_520 = sub_86;
  } else {
    v_520 = sub_73;
  };
  if (controller_blind_switch) {
    v_521 = v_520;
  } else {
    v_521 = sub_86;
  };
  if (controller_c_blind_1) {
    v_522 = v_521;
  } else {
    v_522 = sub_86;
  };
  if (controller_ck_59_1) {
    sub_61 = v_522;
  } else {
    sub_61 = sub_62;
  };
  if (controller_light_failed_recovered) {
    v_540 = sub_61;
    sub_6 = sub_7;
  } else {
    v_540 = sub_7;
    sub_6 = sub_61;
  };
  if (controller_ck_61_1) {
    v_541 = v_540;
  } else {
    v_541 = sub_6;
  };
  sub_106 = true;
  sub_108 = (controller_c_door||false);
  v_495 = !(controller_c_door);
  sub_109 = (v_495||false);
  if (controller_ck_44_1) {
    sub_107 = sub_109;
  } else {
    sub_107 = sub_108;
  };
  if (controller_door_failed_recovered) {
    v_496 = sub_107;
    sub_105 = sub_106;
  } else {
    v_496 = sub_106;
    sub_105 = sub_107;
  };
  if (controller_ck_46_1) {
    sub_104 = v_496;
  } else {
    sub_104 = sub_105;
  };
  sub_103 = sub_104;
  if (controller_door_failed_recovered) {
    v_494 = false;
    sub_112 = sub_106;
  } else {
    v_494 = sub_106;
    sub_112 = false;
  };
  if (controller_ck_46_1) {
    sub_111 = v_494;
  } else {
    sub_111 = sub_112;
  };
  if (controller_window_failed_recovered) {
    v_497 = sub_111;
    sub_110 = sub_104;
  } else {
    v_497 = sub_104;
    sub_110 = sub_111;
  };
  if (controller_ck_56_1) {
    v_498 = v_497;
  } else {
    v_498 = sub_110;
  };
  if (controller_c_window) {
    sub_102 = sub_103;
  } else {
    sub_102 = v_498;
  };
  if (controller_ck_39_1) {
    sub_101 = sub_102;
    sub_113 = false;
  } else {
    sub_101 = false;
    sub_113 = sub_102;
  };
  if (controller_c_pc) {
    sub_100 = sub_101;
  } else {
    sub_100 = sub_113;
  };
  if (controller_cleaner) {
    v_499 = sub_100;
    sub_99 = false;
  } else {
    v_499 = false;
    sub_99 = sub_100;
  };
  if (controller_ck_37_1) {
    sub_98 = v_499;
  } else {
    sub_98 = sub_99;
  };
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  if (controller_c_closet) {
    sub_94 = sub_11;
  } else {
    sub_94 = sub_95;
  };
  if (controller_window_failed_recovered) {
    v_492 = false;
    sub_124 = sub_104;
  } else {
    v_492 = sub_104;
    sub_124 = false;
  };
  if (controller_ck_56_1) {
    sub_123 = v_492;
  } else {
    sub_123 = sub_124;
  };
  sub_122 = sub_123;
  if (controller_ck_39_1) {
    sub_121 = sub_122;
    sub_125 = false;
  } else {
    sub_121 = false;
    sub_125 = sub_122;
  };
  if (controller_c_pc) {
    sub_120 = sub_121;
  } else {
    sub_120 = sub_125;
  };
  if (controller_cleaner) {
    v_493 = sub_120;
    sub_119 = false;
  } else {
    v_493 = false;
    sub_119 = sub_120;
  };
  if (controller_ck_37_1) {
    sub_118 = v_493;
  } else {
    sub_118 = sub_119;
  };
  sub_117 = sub_118;
  sub_116 = sub_117;
  sub_115 = sub_116;
  if (controller_c_closet) {
    sub_114 = sub_11;
  } else {
    sub_114 = sub_115;
  };
  if (controller_blind_failed_recovered) {
    v_500 = sub_114;
    sub_93 = sub_94;
  } else {
    v_500 = sub_94;
    sub_93 = sub_114;
  };
  if (controller_ck_66_1) {
    sub_92 = v_500;
  } else {
    sub_92 = sub_93;
  };
  if (controller_c_window) {
    sub_136 = sub_123;
  } else {
    sub_136 = sub_103;
  };
  if (controller_ck_39_1) {
    sub_135 = sub_136;
    sub_137 = false;
  } else {
    sub_135 = false;
    sub_137 = sub_136;
  };
  if (controller_c_pc) {
    sub_134 = sub_135;
  } else {
    sub_134 = sub_137;
  };
  if (controller_cleaner) {
    v_491 = sub_134;
    sub_133 = false;
  } else {
    v_491 = false;
    sub_133 = sub_134;
  };
  if (controller_ck_37_1) {
    sub_132 = v_491;
  } else {
    sub_132 = sub_133;
  };
  if (controller_change_shift) {
    sub_131 = sub_50;
    sub_138 = sub_132;
  } else {
    sub_131 = sub_132;
    sub_138 = sub_50;
  };
  if (controller_ck_1) {
    sub_130 = sub_138;
  } else {
    sub_130 = sub_131;
  };
  sub_129 = sub_130;
  sub_128 = sub_129;
  if (controller_c_closet) {
    sub_127 = false;
  } else {
    sub_127 = sub_128;
  };
  if (controller_blind_failed_recovered) {
    v_501 = sub_127;
    sub_126 = sub_94;
  } else {
    v_501 = sub_94;
    sub_126 = sub_127;
  };
  if (controller_ck_66_1) {
    v_502 = v_501;
  } else {
    v_502 = sub_126;
  };
  if (controller_ck_64_1) {
    v_503 = v_502;
  } else {
    v_503 = sub_92;
  };
  if (controller_c_closet) {
    sub_141 = sub_11;
  } else {
    sub_141 = sub_128;
  };
  if (controller_blind_failed_recovered) {
    v_490 = sub_141;
    sub_140 = sub_94;
  } else {
    v_490 = sub_94;
    sub_140 = sub_141;
  };
  if (controller_ck_66_1) {
    sub_139 = v_490;
  } else {
    sub_139 = sub_140;
  };
  if (controller_blind_switch) {
    v_504 = v_503;
  } else {
    v_504 = sub_139;
  };
  if (controller_c_blind_1) {
    sub_91 = v_504;
  } else {
    sub_91 = sub_139;
  };
  if (controller_ck_44_1) {
    sub_155 = sub_108;
  } else {
    sub_155 = sub_109;
  };
  if (controller_door_failed_recovered) {
    v_486 = sub_155;
    sub_154 = sub_106;
  } else {
    v_486 = sub_106;
    sub_154 = sub_155;
  };
  if (controller_ck_46_1) {
    sub_153 = v_486;
  } else {
    sub_153 = sub_154;
  };
  if (controller_window_failed_recovered) {
    v_487 = false;
    sub_156 = sub_153;
  } else {
    v_487 = sub_153;
    sub_156 = false;
  };
  if (controller_ck_56_1) {
    v_488 = v_487;
  } else {
    v_488 = sub_156;
  };
  if (controller_c_window) {
    sub_152 = sub_153;
  } else {
    sub_152 = v_488;
  };
  if (controller_ck_39_1) {
    sub_151 = sub_152;
    sub_157 = false;
  } else {
    sub_151 = false;
    sub_157 = sub_152;
  };
  if (controller_c_pc) {
    sub_150 = sub_151;
  } else {
    sub_150 = sub_157;
  };
  if (controller_cleaner) {
    sub_149 = sub_150;
    sub_158 = false;
  } else {
    sub_149 = false;
    sub_158 = sub_150;
  };
  if (controller_ck_37_1) {
    sub_148 = sub_158;
  } else {
    sub_148 = sub_149;
  };
  sub_147 = sub_148;
  sub_146 = sub_147;
  sub_145 = sub_146;
  if (controller_c_closet) {
    sub_144 = sub_145;
  } else {
    sub_144 = sub_28;
  };
  if (controller_blind_failed_recovered) {
    v_505 = sub_46;
  } else {
    v_505 = sub_144;
  };
  if (controller_c_closet) {
    sub_159 = sub_145;
  } else {
    sub_159 = sub_77;
  };
  if (controller_blind_failed_recovered) {
    v_489 = sub_159;
    sub_143 = sub_144;
  } else {
    v_489 = sub_144;
    sub_143 = sub_159;
  };
  if (controller_ck_66_1) {
    sub_142 = v_489;
  } else {
    sub_142 = sub_143;
  };
  if (controller_blind_failed_recovered) {
    sub_160 = sub_144;
  } else {
    sub_160 = sub_46;
  };
  if (controller_ck_66_1) {
    v_506 = v_505;
  } else {
    v_506 = sub_160;
  };
  if (controller_ck_64_1) {
    v_507 = v_506;
  } else {
    v_507 = sub_142;
  };
  if (controller_c_closet) {
    sub_163 = sub_145;
  } else {
    sub_163 = sub_47;
  };
  if (controller_blind_failed_recovered) {
    v_485 = sub_163;
    sub_162 = sub_144;
  } else {
    v_485 = sub_144;
    sub_162 = sub_163;
  };
  if (controller_ck_66_1) {
    sub_161 = v_485;
  } else {
    sub_161 = sub_162;
  };
  if (controller_blind_switch) {
    v_508 = v_507;
  } else {
    v_508 = sub_161;
  };
  if (controller_c_blind_1) {
    v_509 = v_508;
  } else {
    v_509 = sub_161;
  };
  if (controller_ck_59_1) {
    sub_90 = v_509;
  } else {
    sub_90 = sub_91;
  };
  if (controller_light_failed_recovered) {
    v_510 = sub_90;
    sub_89 = sub_7;
  } else {
    v_510 = sub_7;
    sub_89 = sub_90;
  };
  if (controller_ck_61_1) {
    sub_88 = v_510;
  } else {
    sub_88 = sub_89;
  };
  if (controller_light_switch) {
    v_542 = v_541;
  } else {
    v_542 = sub_88;
  };
  if (controller_c_light_1) {
    sub_5 = v_542;
  } else {
    sub_5 = sub_88;
  };
  if (controller_v_277) {
    v_474 = sub_13;
  } else {
    v_474 = false;
  };
  if (controller_v_276) {
    v_475 = v_474;
  } else {
    v_475 = false;
  };
  if (controller_v_277) {
    sub_171 = false;
  } else {
    sub_171 = sub_13;
  };
  if (controller_v_276) {
    v_473 = false;
  } else {
    v_473 = sub_171;
  };
  if (controller_c_air_2) {
    v_476 = v_473;
  } else {
    v_476 = v_475;
  };
  if (controller_v_276) {
    sub_172 = sub_171;
  } else {
    sub_172 = false;
  };
  if (controller_c_air_1) {
    sub_170 = v_476;
  } else {
    sub_170 = sub_172;
  };
  if (controller_ck_37_1) {
    sub_176 = sub_15;
  } else {
    sub_176 = sub_27;
  };
  sub_175 = sub_176;
  if (controller_v_277) {
    sub_174 = false;
  } else {
    sub_174 = sub_175;
  };
  if (controller_v_276) {
    v_471 = sub_174;
  } else {
    v_471 = false;
  };
  if (controller_c_air_2) {
    v_472 = v_471;
  } else {
    v_472 = false;
  };
  if (controller_v_277) {
    v_470 = sub_175;
  } else {
    v_470 = false;
  };
  if (controller_v_276) {
    sub_177 = v_470;
  } else {
    sub_177 = sub_174;
  };
  if (controller_c_air_1) {
    sub_173 = v_472;
  } else {
    sub_173 = sub_177;
  };
  if (controller_c_closet) {
    sub_169 = sub_170;
    sub_178 = sub_170;
  } else {
    sub_169 = sub_173;
    sub_178 = false;
  };
  if (controller_blind_failed_recovered) {
    v_477 = sub_178;
    sub_168 = sub_169;
  } else {
    v_477 = sub_169;
    sub_168 = sub_178;
  };
  if (controller_ck_66_1) {
    sub_167 = v_477;
  } else {
    sub_167 = sub_168;
  };
  if (controller_c_closet) {
    sub_180 = false;
  } else {
    sub_180 = sub_173;
  };
  if (controller_blind_failed_recovered) {
    v_478 = sub_180;
    sub_179 = sub_169;
  } else {
    v_478 = sub_169;
    sub_179 = sub_180;
  };
  if (controller_ck_66_1) {
    v_479 = v_478;
  } else {
    v_479 = sub_179;
  };
  if (controller_ck_64_1) {
    v_480 = v_479;
  } else {
    v_480 = sub_167;
  };
  sub_181 = sub_169;
  if (controller_blind_switch) {
    v_481 = v_480;
  } else {
    v_481 = sub_181;
  };
  if (controller_c_blind_1) {
    sub_166 = v_481;
  } else {
    sub_166 = sub_181;
  };
  sub_184 = sub_178;
  if (controller_change_shift) {
    v_463 = false;
    sub_190 = sub_176;
  } else {
    v_463 = sub_176;
    sub_190 = false;
  };
  if (controller_ck_1) {
    sub_189 = v_463;
  } else {
    sub_189 = sub_190;
  };
  if (controller_v_277) {
    sub_188 = false;
  } else {
    sub_188 = sub_189;
  };
  if (controller_v_276) {
    v_464 = sub_188;
  } else {
    v_464 = false;
  };
  if (controller_c_air_2) {
    v_465 = v_464;
  } else {
    v_465 = false;
  };
  if (controller_v_277) {
    v_462 = sub_189;
  } else {
    v_462 = false;
  };
  if (controller_v_276) {
    sub_191 = v_462;
  } else {
    sub_191 = sub_188;
  };
  if (controller_c_air_1) {
    sub_187 = v_465;
  } else {
    sub_187 = sub_191;
  };
  if (controller_c_closet) {
    sub_186 = false;
  } else {
    sub_186 = sub_187;
  };
  if (controller_blind_failed_recovered) {
    v_466 = sub_186;
    sub_185 = sub_178;
  } else {
    v_466 = sub_178;
    sub_185 = sub_186;
  };
  if (controller_ck_66_1) {
    v_467 = v_466;
  } else {
    v_467 = sub_185;
  };
  if (controller_ck_64_1) {
    v_468 = v_467;
  } else {
    v_468 = sub_184;
  };
  if (controller_c_closet) {
    sub_194 = sub_170;
  } else {
    sub_194 = sub_187;
  };
  if (controller_blind_failed_recovered) {
    v_461 = sub_194;
    sub_193 = sub_178;
  } else {
    v_461 = sub_178;
    sub_193 = sub_194;
  };
  if (controller_ck_66_1) {
    sub_192 = v_461;
  } else {
    sub_192 = sub_193;
  };
  if (controller_blind_switch) {
    v_469 = v_468;
  } else {
    v_469 = sub_192;
  };
  if (controller_c_blind_1) {
    sub_183 = v_469;
  } else {
    sub_183 = sub_192;
  };
  sub_196 = sub_180;
  sub_195 = sub_196;
  if (controller_ck_59_1) {
    sub_182 = sub_195;
  } else {
    sub_182 = sub_183;
  };
  if (controller_light_failed_recovered) {
    v_482 = sub_182;
    sub_165 = sub_166;
  } else {
    v_482 = sub_166;
    sub_165 = sub_182;
  };
  if (controller_ck_61_1) {
    v_483 = v_482;
  } else {
    v_483 = sub_165;
  };
  if (controller_ck_37_1) {
    sub_206 = sub_149;
  } else {
    sub_206 = sub_158;
  };
  sub_205 = sub_206;
  if (controller_v_277) {
    sub_204 = false;
  } else {
    sub_204 = sub_205;
  };
  if (controller_v_276) {
    v_449 = sub_204;
  } else {
    v_449 = false;
  };
  if (controller_c_air_2) {
    v_450 = v_449;
  } else {
    v_450 = false;
  };
  if (controller_v_277) {
    v_448 = sub_205;
  } else {
    v_448 = false;
  };
  if (controller_v_276) {
    sub_207 = v_448;
  } else {
    sub_207 = sub_204;
  };
  if (controller_c_air_1) {
    sub_203 = v_450;
  } else {
    sub_203 = sub_207;
  };
  if (controller_c_closet) {
    sub_202 = sub_170;
  } else {
    sub_202 = sub_203;
  };
  sub_201 = sub_202;
  if (controller_change_shift) {
    sub_213 = sub_176;
    sub_214 = sub_206;
  } else {
    sub_213 = sub_206;
    sub_214 = sub_176;
  };
  if (controller_ck_1) {
    sub_212 = sub_214;
  } else {
    sub_212 = sub_213;
  };
  if (controller_v_277) {
    sub_211 = false;
  } else {
    sub_211 = sub_212;
  };
  if (controller_v_276) {
    v_446 = sub_211;
  } else {
    v_446 = false;
  };
  if (controller_c_air_2) {
    v_447 = v_446;
  } else {
    v_447 = false;
  };
  if (controller_v_277) {
    v_445 = sub_212;
  } else {
    v_445 = false;
  };
  if (controller_v_276) {
    sub_215 = v_445;
  } else {
    sub_215 = sub_211;
  };
  if (controller_c_air_1) {
    sub_210 = v_447;
  } else {
    sub_210 = sub_215;
  };
  if (controller_c_closet) {
    sub_209 = false;
  } else {
    sub_209 = sub_210;
  };
  if (controller_blind_failed_recovered) {
    v_451 = sub_209;
    sub_208 = sub_202;
  } else {
    v_451 = sub_202;
    sub_208 = sub_209;
  };
  if (controller_ck_66_1) {
    v_452 = v_451;
  } else {
    v_452 = sub_208;
  };
  if (controller_ck_64_1) {
    v_453 = v_452;
  } else {
    v_453 = sub_201;
  };
  if (controller_c_closet) {
    sub_218 = sub_170;
  } else {
    sub_218 = sub_210;
  };
  if (controller_blind_failed_recovered) {
    v_444 = sub_218;
    sub_217 = sub_202;
  } else {
    v_444 = sub_202;
    sub_217 = sub_218;
  };
  if (controller_ck_66_1) {
    sub_216 = v_444;
  } else {
    sub_216 = sub_217;
  };
  if (controller_blind_switch) {
    v_454 = v_453;
  } else {
    v_454 = sub_216;
  };
  if (controller_c_blind_1) {
    sub_200 = v_454;
  } else {
    sub_200 = sub_216;
  };
  if (controller_v_277) {
    v_441 = sub_147;
  } else {
    v_441 = false;
  };
  if (controller_v_276) {
    v_442 = v_441;
  } else {
    v_442 = false;
  };
  if (controller_v_277) {
    sub_222 = false;
  } else {
    sub_222 = sub_147;
  };
  if (controller_v_276) {
    v_440 = false;
  } else {
    v_440 = sub_222;
  };
  if (controller_c_air_2) {
    v_443 = v_440;
  } else {
    v_443 = v_442;
  };
  if (controller_v_276) {
    sub_223 = sub_222;
  } else {
    sub_223 = false;
  };
  if (controller_c_air_1) {
    sub_221 = v_443;
  } else {
    sub_221 = sub_223;
  };
  if (controller_c_closet) {
    sub_220 = sub_221;
  } else {
    sub_220 = sub_173;
  };
  if (controller_blind_failed_recovered) {
    v_455 = sub_180;
  } else {
    v_455 = sub_220;
  };
  sub_219 = sub_220;
  if (controller_blind_failed_recovered) {
    sub_224 = sub_220;
  } else {
    sub_224 = sub_180;
  };
  if (controller_ck_66_1) {
    v_456 = v_455;
  } else {
    v_456 = sub_224;
  };
  if (controller_ck_64_1) {
    v_457 = v_456;
  } else {
    v_457 = sub_219;
  };
  if (controller_blind_switch) {
    v_458 = v_457;
  } else {
    v_458 = sub_219;
  };
  if (controller_c_blind_1) {
    v_459 = v_458;
  } else {
    v_459 = sub_219;
  };
  if (controller_ck_59_1) {
    sub_199 = v_459;
  } else {
    sub_199 = sub_200;
  };
  if (controller_light_failed_recovered) {
    v_460 = sub_199;
    sub_198 = sub_166;
  } else {
    v_460 = sub_166;
    sub_198 = sub_199;
  };
  if (controller_ck_61_1) {
    sub_197 = v_460;
  } else {
    sub_197 = sub_198;
  };
  if (controller_light_switch) {
    v_484 = v_483;
  } else {
    v_484 = sub_197;
  };
  if (controller_c_light_1) {
    sub_164 = v_484;
  } else {
    sub_164 = sub_197;
  };
  if (controller_air_failed_recovered) {
    v_543 = sub_164;
    sub_4 = sub_5;
  } else {
    v_543 = sub_5;
    sub_4 = sub_164;
  };
  if (controller_ck_51_1) {
    sub_3 = v_543;
  } else {
    sub_3 = sub_4;
  };
  if (controller_c_pc) {
    sub_237 = sub_43;
  } else {
    sub_237 = sub_34;
  };
  if (controller_cleaner) {
    sub_236 = sub_237;
    sub_238 = false;
  } else {
    sub_236 = false;
    sub_238 = sub_237;
  };
  if (controller_ck_37_1) {
    sub_235 = sub_238;
  } else {
    sub_235 = sub_236;
  };
  sub_234 = sub_235;
  sub_233 = sub_234;
  if (controller_ck_37_1) {
    sub_241 = sub_236;
  } else {
    sub_241 = sub_238;
  };
  sub_240 = sub_241;
  sub_239 = sub_240;
  if (controller_c_closet) {
    sub_232 = sub_233;
  } else {
    sub_232 = sub_239;
  };
  if (controller_blind_failed_recovered) {
    v_433 = false;
    sub_231 = sub_232;
  } else {
    v_433 = sub_232;
    sub_231 = false;
  };
  if (controller_ck_66_1) {
    sub_230 = v_433;
  } else {
    sub_230 = sub_231;
  };
  if (controller_c_pc) {
    sub_249 = sub_57;
  } else {
    sub_249 = sub_53;
  };
  if (controller_cleaner) {
    sub_248 = sub_249;
    sub_250 = false;
  } else {
    sub_248 = false;
    sub_250 = sub_249;
  };
  if (controller_ck_37_1) {
    sub_247 = sub_250;
  } else {
    sub_247 = sub_248;
  };
  sub_246 = sub_247;
  sub_245 = sub_246;
  if (controller_ck_37_1) {
    sub_253 = sub_248;
  } else {
    sub_253 = sub_250;
  };
  sub_252 = sub_253;
  sub_251 = sub_252;
  if (controller_c_closet) {
    sub_244 = sub_245;
  } else {
    sub_244 = sub_251;
  };
  if (controller_blind_failed_recovered) {
    v_432 = sub_244;
    sub_243 = sub_232;
  } else {
    v_432 = sub_232;
    sub_243 = sub_244;
  };
  if (controller_ck_66_1) {
    sub_242 = v_432;
  } else {
    sub_242 = sub_243;
  };
  if (controller_ck_64_1) {
    v_434 = sub_242;
  } else {
    v_434 = sub_230;
  };
  if (controller_blind_switch) {
    v_435 = v_434;
  } else {
    v_435 = sub_242;
  };
  sub_254 = sub_242;
  if (controller_c_blind_1) {
    sub_229 = v_435;
  } else {
    sub_229 = sub_254;
  };
  if (controller_change_shift) {
    v_428 = false;
    sub_262 = sub_247;
  } else {
    v_428 = sub_247;
    sub_262 = false;
  };
  if (controller_ck_1) {
    sub_261 = v_428;
  } else {
    sub_261 = sub_262;
  };
  sub_260 = sub_261;
  if (controller_change_shift) {
    v_427 = false;
    sub_265 = sub_253;
  } else {
    v_427 = sub_253;
    sub_265 = false;
  };
  if (controller_ck_1) {
    sub_264 = v_427;
  } else {
    sub_264 = sub_265;
  };
  sub_263 = sub_264;
  if (controller_c_closet) {
    sub_259 = sub_260;
  } else {
    sub_259 = sub_263;
  };
  if (controller_blind_failed_recovered) {
    v_429 = sub_259;
    sub_258 = false;
  } else {
    v_429 = false;
    sub_258 = sub_259;
  };
  if (controller_ck_66_1) {
    sub_257 = v_429;
  } else {
    sub_257 = sub_258;
  };
  if (controller_ck_64_1) {
    v_430 = sub_257;
  } else {
    v_430 = false;
  };
  if (controller_blind_switch) {
    v_431 = v_430;
  } else {
    v_431 = sub_257;
  };
  if (controller_c_blind_1) {
    sub_256 = v_431;
  } else {
    sub_256 = sub_257;
  };
  if (controller_c_pc) {
    sub_274 = sub_85;
  } else {
    sub_274 = sub_83;
  };
  if (controller_cleaner) {
    sub_273 = sub_274;
    sub_275 = false;
  } else {
    sub_273 = false;
    sub_275 = sub_274;
  };
  if (controller_ck_37_1) {
    sub_272 = sub_275;
  } else {
    sub_272 = sub_273;
  };
  sub_271 = sub_272;
  sub_270 = sub_271;
  if (controller_ck_37_1) {
    sub_278 = sub_273;
  } else {
    sub_278 = sub_275;
  };
  sub_277 = sub_278;
  sub_276 = sub_277;
  if (controller_c_closet) {
    sub_269 = sub_270;
  } else {
    sub_269 = sub_276;
  };
  if (controller_blind_failed_recovered) {
    v_424 = sub_269;
    sub_268 = sub_232;
  } else {
    v_424 = sub_232;
    sub_268 = sub_269;
  };
  if (controller_ck_66_1) {
    sub_267 = v_424;
  } else {
    sub_267 = sub_268;
  };
  if (controller_ck_64_1) {
    v_425 = sub_242;
  } else {
    v_425 = sub_267;
  };
  if (controller_blind_switch) {
    v_426 = v_425;
  } else {
    v_426 = sub_242;
  };
  if (controller_c_blind_1) {
    sub_266 = v_426;
  } else {
    sub_266 = sub_254;
  };
  if (controller_ck_59_1) {
    sub_255 = sub_266;
  } else {
    sub_255 = sub_256;
  };
  if (controller_light_failed_recovered) {
    v_436 = sub_255;
    sub_228 = sub_229;
  } else {
    v_436 = sub_229;
    sub_228 = sub_255;
  };
  if (controller_ck_61_1) {
    v_437 = v_436;
  } else {
    v_437 = sub_228;
  };
  if (controller_c_pc) {
    sub_290 = sub_113;
  } else {
    sub_290 = sub_101;
  };
  if (controller_cleaner) {
    sub_289 = sub_290;
    sub_291 = false;
  } else {
    sub_289 = false;
    sub_291 = sub_290;
  };
  if (controller_ck_37_1) {
    sub_288 = sub_291;
  } else {
    sub_288 = sub_289;
  };
  sub_287 = sub_288;
  sub_286 = sub_287;
  if (controller_ck_37_1) {
    sub_294 = sub_289;
  } else {
    sub_294 = sub_291;
  };
  sub_293 = sub_294;
  sub_292 = sub_293;
  if (controller_c_closet) {
    sub_285 = sub_286;
  } else {
    sub_285 = sub_292;
  };
  if (controller_c_pc) {
    sub_300 = sub_125;
  } else {
    sub_300 = sub_121;
  };
  if (controller_cleaner) {
    sub_299 = sub_300;
    sub_301 = false;
  } else {
    sub_299 = false;
    sub_301 = sub_300;
  };
  if (controller_ck_37_1) {
    sub_298 = sub_301;
  } else {
    sub_298 = sub_299;
  };
  sub_297 = sub_298;
  sub_296 = sub_297;
  if (controller_ck_37_1) {
    sub_304 = sub_299;
  } else {
    sub_304 = sub_301;
  };
  sub_303 = sub_304;
  sub_302 = sub_303;
  if (controller_c_closet) {
    sub_295 = sub_296;
  } else {
    sub_295 = sub_302;
  };
  if (controller_blind_failed_recovered) {
    v_420 = sub_295;
    sub_284 = sub_285;
  } else {
    v_420 = sub_285;
    sub_284 = sub_295;
  };
  if (controller_ck_66_1) {
    sub_283 = v_420;
  } else {
    sub_283 = sub_284;
  };
  if (controller_c_pc) {
    sub_313 = sub_137;
  } else {
    sub_313 = sub_135;
  };
  if (controller_cleaner) {
    sub_312 = sub_313;
    sub_314 = false;
  } else {
    sub_312 = false;
    sub_314 = sub_313;
  };
  if (controller_ck_37_1) {
    sub_311 = sub_314;
  } else {
    sub_311 = sub_312;
  };
  if (controller_change_shift) {
    sub_310 = sub_247;
    sub_315 = sub_311;
  } else {
    sub_310 = sub_311;
    sub_315 = sub_247;
  };
  if (controller_ck_1) {
    sub_309 = sub_315;
  } else {
    sub_309 = sub_310;
  };
  sub_308 = sub_309;
  if (controller_ck_37_1) {
    sub_319 = sub_312;
  } else {
    sub_319 = sub_314;
  };
  if (controller_change_shift) {
    sub_318 = sub_253;
    sub_320 = sub_319;
  } else {
    sub_318 = sub_319;
    sub_320 = sub_253;
  };
  if (controller_ck_1) {
    sub_317 = sub_320;
  } else {
    sub_317 = sub_318;
  };
  sub_316 = sub_317;
  if (controller_c_closet) {
    sub_307 = sub_308;
  } else {
    sub_307 = sub_316;
  };
  if (controller_blind_failed_recovered) {
    v_419 = sub_307;
    sub_306 = sub_285;
  } else {
    v_419 = sub_285;
    sub_306 = sub_307;
  };
  if (controller_ck_66_1) {
    sub_305 = v_419;
  } else {
    sub_305 = sub_306;
  };
  if (controller_ck_64_1) {
    v_421 = sub_305;
  } else {
    v_421 = sub_283;
  };
  if (controller_blind_switch) {
    v_422 = v_421;
  } else {
    v_422 = sub_305;
  };
  if (controller_c_blind_1) {
    sub_282 = v_422;
  } else {
    sub_282 = sub_305;
  };
  if (controller_ck_59_1) {
    sub_281 = sub_266;
  } else {
    sub_281 = sub_282;
  };
  if (controller_light_failed_recovered) {
    v_423 = sub_281;
    sub_280 = sub_229;
  } else {
    v_423 = sub_229;
    sub_280 = sub_281;
  };
  if (controller_ck_61_1) {
    sub_279 = v_423;
  } else {
    sub_279 = sub_280;
  };
  if (controller_light_switch) {
    v_438 = v_437;
  } else {
    v_438 = sub_279;
  };
  if (controller_c_light_1) {
    sub_227 = v_438;
  } else {
    sub_227 = sub_279;
  };
  if (controller_c_pc) {
    sub_331 = sub_26;
  } else {
    sub_331 = sub_17;
  };
  if (controller_cleaner) {
    v_405 = false;
    sub_330 = sub_331;
  } else {
    v_405 = sub_331;
    sub_330 = false;
  };
  if (controller_ck_37_1) {
    sub_329 = v_405;
  } else {
    sub_329 = sub_330;
  };
  sub_328 = sub_329;
  if (controller_v_277) {
    sub_327 = false;
  } else {
    sub_327 = sub_328;
  };
  if (controller_v_276) {
    v_406 = sub_327;
  } else {
    v_406 = false;
  };
  if (controller_c_air_2) {
    v_407 = v_406;
  } else {
    v_407 = false;
  };
  if (controller_v_277) {
    v_404 = sub_328;
  } else {
    v_404 = false;
  };
  if (controller_v_276) {
    sub_332 = v_404;
  } else {
    sub_332 = sub_327;
  };
  if (controller_c_air_1) {
    v_408 = v_407;
  } else {
    v_408 = sub_332;
  };
  sub_340 = sub_21;
  sub_339 = sub_340;
  sub_338 = sub_339;
  if (controller_ck_39_1) {
    v_402 = sub_338;
    v_401 = false;
  } else {
    v_402 = false;
    v_401 = sub_338;
  };
  if (controller_c_pc) {
    sub_337 = v_401;
  } else {
    sub_337 = v_402;
  };
  if (controller_cleaner) {
    v_403 = sub_337;
    sub_336 = false;
  } else {
    v_403 = false;
    sub_336 = sub_337;
  };
  if (controller_ck_37_1) {
    sub_335 = v_403;
  } else {
    sub_335 = sub_336;
  };
  sub_334 = sub_335;
  if (controller_v_277) {
    v_409 = false;
  } else {
    v_409 = sub_334;
  };
  if (controller_v_276) {
    v_410 = v_409;
  } else {
    v_410 = sub_334;
  };
  if (controller_v_277) {
    sub_333 = sub_334;
  } else {
    sub_333 = false;
  };
  if (controller_c_air_2) {
    v_411 = sub_333;
  } else {
    v_411 = v_410;
  };
  if (controller_v_276) {
    sub_341 = false;
  } else {
    sub_341 = sub_333;
  };
  if (controller_c_air_1) {
    v_412 = v_411;
  } else {
    v_412 = sub_341;
  };
  if (controller_c_closet) {
    sub_326 = v_408;
  } else {
    sub_326 = v_412;
  };
  if (controller_blind_failed_recovered) {
    v_413 = false;
    sub_325 = sub_326;
  } else {
    v_413 = sub_326;
    sub_325 = false;
  };
  if (controller_ck_66_1) {
    sub_324 = v_413;
  } else {
    sub_324 = sub_325;
  };
  sub_342 = sub_326;
  if (controller_ck_64_1) {
    v_414 = sub_342;
  } else {
    v_414 = sub_324;
  };
  if (controller_blind_switch) {
    v_415 = v_414;
  } else {
    v_415 = sub_342;
  };
  sub_343 = sub_342;
  if (controller_c_blind_1) {
    sub_323 = v_415;
  } else {
    sub_323 = sub_343;
  };
  if (controller_change_shift) {
    v_390 = false;
    sub_351 = sub_329;
  } else {
    v_390 = sub_329;
    sub_351 = false;
  };
  if (controller_ck_1) {
    sub_350 = v_390;
  } else {
    sub_350 = sub_351;
  };
  if (controller_v_277) {
    sub_349 = false;
  } else {
    sub_349 = sub_350;
  };
  if (controller_v_276) {
    v_391 = sub_349;
  } else {
    v_391 = false;
  };
  if (controller_c_air_2) {
    v_392 = v_391;
  } else {
    v_392 = false;
  };
  if (controller_v_277) {
    v_389 = sub_350;
  } else {
    v_389 = false;
  };
  if (controller_v_276) {
    sub_352 = v_389;
  } else {
    sub_352 = sub_349;
  };
  if (controller_c_air_1) {
    v_393 = v_392;
  } else {
    v_393 = sub_352;
  };
  if (controller_change_shift) {
    v_388 = false;
    sub_355 = sub_335;
  } else {
    v_388 = sub_335;
    sub_355 = false;
  };
  if (controller_ck_1) {
    sub_354 = v_388;
  } else {
    sub_354 = sub_355;
  };
  if (controller_v_277) {
    v_394 = false;
  } else {
    v_394 = sub_354;
  };
  if (controller_v_276) {
    v_395 = v_394;
  } else {
    v_395 = sub_354;
  };
  if (controller_v_277) {
    sub_353 = sub_354;
  } else {
    sub_353 = false;
  };
  if (controller_c_air_2) {
    v_396 = sub_353;
  } else {
    v_396 = v_395;
  };
  if (controller_v_276) {
    sub_356 = false;
  } else {
    sub_356 = sub_353;
  };
  if (controller_c_air_1) {
    v_397 = v_396;
  } else {
    v_397 = sub_356;
  };
  if (controller_c_closet) {
    sub_348 = v_393;
  } else {
    sub_348 = v_397;
  };
  if (controller_blind_failed_recovered) {
    v_398 = sub_348;
    sub_347 = false;
  } else {
    v_398 = false;
    sub_347 = sub_348;
  };
  if (controller_ck_66_1) {
    sub_346 = v_398;
  } else {
    sub_346 = sub_347;
  };
  if (controller_ck_64_1) {
    v_399 = sub_346;
  } else {
    v_399 = false;
  };
  if (controller_blind_switch) {
    v_400 = v_399;
  } else {
    v_400 = sub_346;
  };
  if (controller_c_blind_1) {
    sub_345 = v_400;
  } else {
    sub_345 = sub_346;
  };
  sub_357 = sub_343;
  if (controller_ck_59_1) {
    sub_344 = sub_357;
  } else {
    sub_344 = sub_345;
  };
  if (controller_light_failed_recovered) {
    v_416 = sub_344;
    sub_322 = sub_323;
  } else {
    v_416 = sub_323;
    sub_322 = sub_344;
  };
  if (controller_ck_61_1) {
    v_417 = v_416;
  } else {
    v_417 = sub_322;
  };
  if (controller_c_pc) {
    sub_368 = sub_157;
  } else {
    sub_368 = sub_151;
  };
  if (controller_cleaner) {
    v_377 = false;
    sub_367 = sub_368;
  } else {
    v_377 = sub_368;
    sub_367 = false;
  };
  if (controller_ck_37_1) {
    sub_366 = v_377;
  } else {
    sub_366 = sub_367;
  };
  sub_365 = sub_366;
  if (controller_v_277) {
    sub_364 = false;
  } else {
    sub_364 = sub_365;
  };
  if (controller_v_276) {
    v_378 = sub_364;
  } else {
    v_378 = false;
  };
  if (controller_c_air_2) {
    v_379 = v_378;
  } else {
    v_379 = false;
  };
  if (controller_v_277) {
    v_376 = sub_365;
  } else {
    v_376 = false;
  };
  if (controller_v_276) {
    sub_369 = v_376;
  } else {
    sub_369 = sub_364;
  };
  if (controller_c_air_1) {
    v_380 = v_379;
  } else {
    v_380 = sub_369;
  };
  sub_377 = sub_106;
  sub_376 = sub_377;
  sub_375 = sub_376;
  if (controller_ck_39_1) {
    v_374 = sub_375;
    v_373 = false;
  } else {
    v_374 = false;
    v_373 = sub_375;
  };
  if (controller_c_pc) {
    sub_374 = v_373;
  } else {
    sub_374 = v_374;
  };
  if (controller_cleaner) {
    v_375 = sub_374;
    sub_373 = false;
  } else {
    v_375 = false;
    sub_373 = sub_374;
  };
  if (controller_ck_37_1) {
    sub_372 = v_375;
  } else {
    sub_372 = sub_373;
  };
  sub_371 = sub_372;
  if (controller_v_277) {
    v_381 = false;
  } else {
    v_381 = sub_371;
  };
  if (controller_v_276) {
    v_382 = v_381;
  } else {
    v_382 = sub_371;
  };
  if (controller_v_277) {
    sub_370 = sub_371;
  } else {
    sub_370 = false;
  };
  if (controller_c_air_2) {
    v_383 = sub_370;
  } else {
    v_383 = v_382;
  };
  if (controller_v_276) {
    sub_378 = false;
  } else {
    sub_378 = sub_370;
  };
  if (controller_c_air_1) {
    v_384 = v_383;
  } else {
    v_384 = sub_378;
  };
  if (controller_c_closet) {
    sub_363 = v_380;
  } else {
    sub_363 = v_384;
  };
  sub_362 = sub_363;
  if (controller_change_shift) {
    sub_384 = sub_329;
    sub_385 = sub_366;
  } else {
    sub_384 = sub_366;
    sub_385 = sub_329;
  };
  if (controller_ck_1) {
    sub_383 = sub_385;
  } else {
    sub_383 = sub_384;
  };
  if (controller_v_277) {
    sub_382 = false;
  } else {
    sub_382 = sub_383;
  };
  if (controller_v_276) {
    v_365 = sub_382;
  } else {
    v_365 = false;
  };
  if (controller_c_air_2) {
    v_366 = v_365;
  } else {
    v_366 = false;
  };
  if (controller_v_277) {
    v_364 = sub_383;
  } else {
    v_364 = false;
  };
  if (controller_v_276) {
    sub_386 = v_364;
  } else {
    sub_386 = sub_382;
  };
  if (controller_c_air_1) {
    v_367 = v_366;
  } else {
    v_367 = sub_386;
  };
  if (controller_change_shift) {
    sub_389 = sub_335;
    sub_390 = sub_372;
  } else {
    sub_389 = sub_372;
    sub_390 = sub_335;
  };
  if (controller_ck_1) {
    sub_388 = sub_390;
  } else {
    sub_388 = sub_389;
  };
  if (controller_v_277) {
    v_368 = false;
  } else {
    v_368 = sub_388;
  };
  if (controller_v_276) {
    v_369 = v_368;
  } else {
    v_369 = sub_388;
  };
  if (controller_v_277) {
    sub_387 = sub_388;
  } else {
    sub_387 = false;
  };
  if (controller_c_air_2) {
    v_370 = sub_387;
  } else {
    v_370 = v_369;
  };
  if (controller_v_276) {
    sub_391 = false;
  } else {
    sub_391 = sub_387;
  };
  if (controller_c_air_1) {
    v_371 = v_370;
  } else {
    v_371 = sub_391;
  };
  if (controller_c_closet) {
    sub_381 = v_367;
  } else {
    sub_381 = v_371;
  };
  if (controller_blind_failed_recovered) {
    v_372 = sub_381;
    sub_380 = sub_363;
  } else {
    v_372 = sub_363;
    sub_380 = sub_381;
  };
  if (controller_ck_66_1) {
    sub_379 = v_372;
  } else {
    sub_379 = sub_380;
  };
  if (controller_ck_64_1) {
    v_385 = sub_379;
  } else {
    v_385 = sub_362;
  };
  if (controller_blind_switch) {
    v_386 = v_385;
  } else {
    v_386 = sub_379;
  };
  if (controller_c_blind_1) {
    sub_361 = v_386;
  } else {
    sub_361 = sub_379;
  };
  if (controller_ck_59_1) {
    sub_360 = sub_357;
  } else {
    sub_360 = sub_361;
  };
  if (controller_light_failed_recovered) {
    v_387 = sub_360;
    sub_359 = sub_323;
  } else {
    v_387 = sub_323;
    sub_359 = sub_360;
  };
  if (controller_ck_61_1) {
    sub_358 = v_387;
  } else {
    sub_358 = sub_359;
  };
  if (controller_light_switch) {
    v_418 = v_417;
  } else {
    v_418 = sub_358;
  };
  if (controller_c_light_1) {
    sub_321 = v_418;
  } else {
    sub_321 = sub_358;
  };
  if (controller_air_failed_recovered) {
    v_439 = sub_321;
    sub_226 = sub_227;
  } else {
    v_439 = sub_227;
    sub_226 = sub_321;
  };
  if (controller_ck_51_1) {
    sub_225 = v_439;
  } else {
    sub_225 = sub_226;
  };
  if (controller_worker) {
    v_544 = sub_225;
    sub_2 = sub_3;
  } else {
    v_544 = sub_3;
    sub_2 = sub_225;
  };
  if (controller_ck_35_1) {
    sub_1 = v_544;
  } else {
    sub_1 = sub_2;
  };
  if (controller_c_closet) {
    sub_400 = sub_145;
    sub_401 = sub_145;
  } else {
    sub_400 = sub_95;
    sub_401 = false;
  };
  if (controller_blind_failed_recovered) {
    v_355 = sub_401;
    sub_399 = sub_400;
  } else {
    v_355 = sub_400;
    sub_399 = sub_401;
  };
  if (controller_ck_66_1) {
    sub_398 = v_355;
  } else {
    sub_398 = sub_399;
  };
  sub_406 = sub_132;
  sub_405 = sub_406;
  sub_404 = sub_405;
  if (controller_c_closet) {
    sub_403 = false;
  } else {
    sub_403 = sub_404;
  };
  if (controller_blind_failed_recovered) {
    v_356 = sub_403;
    sub_402 = sub_400;
  } else {
    v_356 = sub_400;
    sub_402 = sub_403;
  };
  if (controller_ck_66_1) {
    v_357 = v_356;
  } else {
    v_357 = sub_402;
  };
  if (controller_ck_64_1) {
    v_358 = v_357;
  } else {
    v_358 = sub_398;
  };
  if (controller_c_closet) {
    sub_409 = sub_145;
  } else {
    sub_409 = sub_404;
  };
  if (controller_blind_failed_recovered) {
    v_354 = sub_409;
    sub_408 = sub_400;
  } else {
    v_354 = sub_400;
    sub_408 = sub_409;
  };
  if (controller_ck_66_1) {
    sub_407 = v_354;
  } else {
    sub_407 = sub_408;
  };
  if (controller_blind_switch) {
    v_359 = v_358;
  } else {
    v_359 = sub_407;
  };
  if (controller_c_blind_1) {
    sub_397 = v_359;
  } else {
    sub_397 = sub_407;
  };
  sub_412 = sub_401;
  if (controller_change_shift) {
    v_346 = false;
    sub_418 = sub_132;
  } else {
    v_346 = sub_132;
    sub_418 = false;
  };
  if (controller_ck_1) {
    sub_417 = v_346;
  } else {
    sub_417 = sub_418;
  };
  sub_416 = sub_417;
  sub_415 = sub_416;
  if (controller_c_closet) {
    sub_414 = false;
  } else {
    sub_414 = sub_415;
  };
  if (controller_blind_failed_recovered) {
    v_347 = sub_414;
    sub_413 = sub_401;
  } else {
    v_347 = sub_401;
    sub_413 = sub_414;
  };
  if (controller_ck_66_1) {
    v_348 = v_347;
  } else {
    v_348 = sub_413;
  };
  if (controller_ck_64_1) {
    v_349 = v_348;
  } else {
    v_349 = sub_412;
  };
  if (controller_c_closet) {
    sub_421 = sub_145;
  } else {
    sub_421 = sub_415;
  };
  if (controller_blind_failed_recovered) {
    v_345 = sub_421;
    sub_420 = sub_401;
  } else {
    v_345 = sub_401;
    sub_420 = sub_421;
  };
  if (controller_ck_66_1) {
    sub_419 = v_345;
  } else {
    sub_419 = sub_420;
  };
  if (controller_blind_switch) {
    v_350 = v_349;
  } else {
    v_350 = sub_419;
  };
  if (controller_c_blind_1) {
    sub_411 = v_350;
  } else {
    sub_411 = sub_419;
  };
  if (controller_c_closet) {
    sub_424 = false;
    sub_425 = false;
  } else {
    sub_424 = sub_95;
    sub_425 = sub_115;
  };
  if (controller_blind_failed_recovered) {
    v_344 = sub_425;
    sub_423 = sub_424;
  } else {
    v_344 = sub_424;
    sub_423 = sub_425;
  };
  if (controller_ck_66_1) {
    sub_422 = v_344;
  } else {
    sub_422 = sub_423;
  };
  if (controller_blind_failed_recovered) {
    v_343 = sub_403;
    sub_427 = sub_424;
  } else {
    v_343 = sub_424;
    sub_427 = sub_403;
  };
  if (controller_ck_66_1) {
    sub_426 = v_343;
  } else {
    sub_426 = sub_427;
  };
  if (controller_ck_64_1) {
    v_351 = sub_426;
  } else {
    v_351 = sub_422;
  };
  if (controller_blind_switch) {
    v_352 = v_351;
  } else {
    v_352 = sub_426;
  };
  if (controller_c_blind_1) {
    v_353 = v_352;
  } else {
    v_353 = sub_426;
  };
  if (controller_ck_59_1) {
    sub_410 = v_353;
  } else {
    sub_410 = sub_411;
  };
  if (controller_light_failed_recovered) {
    v_360 = sub_410;
    sub_396 = sub_397;
  } else {
    v_360 = sub_397;
    sub_396 = sub_410;
  };
  if (controller_ck_61_1) {
    v_361 = v_360;
  } else {
    v_361 = sub_396;
  };
  if (controller_blind_failed_recovered) {
    v_333 = sub_403;
    sub_432 = sub_94;
  } else {
    v_333 = sub_94;
    sub_432 = sub_403;
  };
  if (controller_ck_66_1) {
    v_334 = v_333;
  } else {
    v_334 = sub_432;
  };
  if (controller_ck_64_1) {
    v_335 = v_334;
  } else {
    v_335 = sub_92;
  };
  if (controller_c_closet) {
    sub_435 = sub_11;
  } else {
    sub_435 = sub_404;
  };
  if (controller_blind_failed_recovered) {
    v_332 = sub_435;
    sub_434 = sub_94;
  } else {
    v_332 = sub_94;
    sub_434 = sub_435;
  };
  if (controller_ck_66_1) {
    sub_433 = v_332;
  } else {
    sub_433 = sub_434;
  };
  if (controller_blind_switch) {
    v_336 = v_335;
  } else {
    v_336 = sub_433;
  };
  if (controller_c_blind_1) {
    sub_431 = v_336;
  } else {
    sub_431 = sub_433;
  };
  if (controller_ck_1) {
    sub_440 = sub_131;
  } else {
    sub_440 = sub_138;
  };
  sub_439 = sub_440;
  sub_438 = sub_439;
  if (controller_c_closet) {
    sub_437 = false;
  } else {
    sub_437 = sub_438;
  };
  if (controller_blind_failed_recovered) {
    v_337 = sub_437;
    sub_436 = sub_144;
  } else {
    v_337 = sub_144;
    sub_436 = sub_437;
  };
  if (controller_ck_66_1) {
    v_338 = v_337;
  } else {
    v_338 = sub_436;
  };
  if (controller_ck_64_1) {
    v_339 = v_338;
  } else {
    v_339 = sub_142;
  };
  if (controller_c_closet) {
    sub_443 = sub_145;
  } else {
    sub_443 = sub_438;
  };
  if (controller_blind_failed_recovered) {
    v_331 = sub_443;
    sub_442 = sub_144;
  } else {
    v_331 = sub_144;
    sub_442 = sub_443;
  };
  if (controller_ck_66_1) {
    sub_441 = v_331;
  } else {
    sub_441 = sub_442;
  };
  if (controller_blind_switch) {
    v_340 = v_339;
  } else {
    v_340 = sub_441;
  };
  if (controller_c_blind_1) {
    v_341 = v_340;
  } else {
    v_341 = sub_441;
  };
  if (controller_ck_59_1) {
    sub_430 = v_341;
  } else {
    sub_430 = sub_431;
  };
  if (controller_light_failed_recovered) {
    v_342 = sub_430;
    sub_429 = sub_397;
  } else {
    v_342 = sub_397;
    sub_429 = sub_430;
  };
  if (controller_ck_61_1) {
    sub_428 = v_342;
  } else {
    sub_428 = sub_429;
  };
  if (controller_light_switch) {
    v_362 = v_361;
  } else {
    v_362 = sub_428;
  };
  if (controller_c_light_1) {
    sub_395 = v_362;
  } else {
    sub_395 = sub_428;
  };
  if (controller_c_closet) {
    sub_449 = sub_221;
    sub_450 = sub_221;
  } else {
    sub_449 = sub_203;
    sub_450 = false;
  };
  if (controller_blind_failed_recovered) {
    v_323 = sub_450;
    sub_448 = sub_449;
  } else {
    v_323 = sub_449;
    sub_448 = sub_450;
  };
  if (controller_ck_66_1) {
    sub_447 = v_323;
  } else {
    sub_447 = sub_448;
  };
  if (controller_c_closet) {
    sub_452 = false;
  } else {
    sub_452 = sub_203;
  };
  if (controller_blind_failed_recovered) {
    v_324 = sub_452;
    sub_451 = sub_449;
  } else {
    v_324 = sub_449;
    sub_451 = sub_452;
  };
  if (controller_ck_66_1) {
    v_325 = v_324;
  } else {
    v_325 = sub_451;
  };
  if (controller_ck_64_1) {
    v_326 = v_325;
  } else {
    v_326 = sub_447;
  };
  sub_453 = sub_449;
  if (controller_blind_switch) {
    v_327 = v_326;
  } else {
    v_327 = sub_453;
  };
  if (controller_c_blind_1) {
    sub_446 = v_327;
  } else {
    sub_446 = sub_453;
  };
  sub_456 = sub_450;
  if (controller_change_shift) {
    v_316 = false;
    sub_462 = sub_206;
  } else {
    v_316 = sub_206;
    sub_462 = false;
  };
  if (controller_ck_1) {
    sub_461 = v_316;
  } else {
    sub_461 = sub_462;
  };
  if (controller_v_277) {
    sub_460 = false;
  } else {
    sub_460 = sub_461;
  };
  if (controller_v_276) {
    v_317 = sub_460;
  } else {
    v_317 = false;
  };
  if (controller_c_air_2) {
    v_318 = v_317;
  } else {
    v_318 = false;
  };
  if (controller_v_277) {
    v_315 = sub_461;
  } else {
    v_315 = false;
  };
  if (controller_v_276) {
    sub_463 = v_315;
  } else {
    sub_463 = sub_460;
  };
  if (controller_c_air_1) {
    sub_459 = v_318;
  } else {
    sub_459 = sub_463;
  };
  if (controller_c_closet) {
    sub_458 = false;
  } else {
    sub_458 = sub_459;
  };
  if (controller_blind_failed_recovered) {
    v_319 = sub_458;
    sub_457 = sub_450;
  } else {
    v_319 = sub_450;
    sub_457 = sub_458;
  };
  if (controller_ck_66_1) {
    v_320 = v_319;
  } else {
    v_320 = sub_457;
  };
  if (controller_ck_64_1) {
    v_321 = v_320;
  } else {
    v_321 = sub_456;
  };
  if (controller_c_closet) {
    sub_466 = sub_221;
  } else {
    sub_466 = sub_459;
  };
  if (controller_blind_failed_recovered) {
    v_314 = sub_466;
    sub_465 = sub_450;
  } else {
    v_314 = sub_450;
    sub_465 = sub_466;
  };
  if (controller_ck_66_1) {
    sub_464 = v_314;
  } else {
    sub_464 = sub_465;
  };
  if (controller_blind_switch) {
    v_322 = v_321;
  } else {
    v_322 = sub_464;
  };
  if (controller_c_blind_1) {
    sub_455 = v_322;
  } else {
    sub_455 = sub_464;
  };
  sub_468 = sub_452;
  sub_467 = sub_468;
  if (controller_ck_59_1) {
    sub_454 = sub_467;
  } else {
    sub_454 = sub_455;
  };
  if (controller_light_failed_recovered) {
    v_328 = sub_454;
    sub_445 = sub_446;
  } else {
    v_328 = sub_446;
    sub_445 = sub_454;
  };
  if (controller_ck_61_1) {
    v_329 = v_328;
  } else {
    v_329 = sub_445;
  };
  if (controller_blind_failed_recovered) {
    v_304 = sub_452;
    sub_473 = sub_202;
  } else {
    v_304 = sub_202;
    sub_473 = sub_452;
  };
  if (controller_ck_66_1) {
    v_305 = v_304;
  } else {
    v_305 = sub_473;
  };
  if (controller_ck_64_1) {
    v_306 = v_305;
  } else {
    v_306 = sub_201;
  };
  if (controller_blind_switch) {
    v_307 = v_306;
  } else {
    v_307 = sub_201;
  };
  if (controller_c_blind_1) {
    sub_472 = v_307;
  } else {
    sub_472 = sub_201;
  };
  if (controller_ck_1) {
    sub_478 = sub_213;
  } else {
    sub_478 = sub_214;
  };
  if (controller_v_277) {
    sub_477 = false;
  } else {
    sub_477 = sub_478;
  };
  if (controller_v_276) {
    v_302 = sub_477;
  } else {
    v_302 = false;
  };
  if (controller_c_air_2) {
    v_303 = v_302;
  } else {
    v_303 = false;
  };
  if (controller_v_277) {
    v_301 = sub_478;
  } else {
    v_301 = false;
  };
  if (controller_v_276) {
    sub_479 = v_301;
  } else {
    sub_479 = sub_477;
  };
  if (controller_c_air_1) {
    sub_476 = v_303;
  } else {
    sub_476 = sub_479;
  };
  if (controller_c_closet) {
    sub_475 = false;
  } else {
    sub_475 = sub_476;
  };
  if (controller_blind_failed_recovered) {
    v_308 = sub_475;
    sub_474 = sub_220;
  } else {
    v_308 = sub_220;
    sub_474 = sub_475;
  };
  if (controller_ck_66_1) {
    v_309 = v_308;
  } else {
    v_309 = sub_474;
  };
  if (controller_ck_64_1) {
    v_310 = v_309;
  } else {
    v_310 = sub_219;
  };
  if (controller_c_closet) {
    sub_482 = sub_221;
  } else {
    sub_482 = sub_476;
  };
  if (controller_blind_failed_recovered) {
    v_300 = sub_482;
    sub_481 = sub_220;
  } else {
    v_300 = sub_220;
    sub_481 = sub_482;
  };
  if (controller_ck_66_1) {
    sub_480 = v_300;
  } else {
    sub_480 = sub_481;
  };
  if (controller_blind_switch) {
    v_311 = v_310;
  } else {
    v_311 = sub_480;
  };
  if (controller_c_blind_1) {
    v_312 = v_311;
  } else {
    v_312 = sub_480;
  };
  if (controller_ck_59_1) {
    sub_471 = v_312;
  } else {
    sub_471 = sub_472;
  };
  if (controller_light_failed_recovered) {
    v_313 = sub_471;
    sub_470 = sub_446;
  } else {
    v_313 = sub_446;
    sub_470 = sub_471;
  };
  if (controller_ck_61_1) {
    sub_469 = v_313;
  } else {
    sub_469 = sub_470;
  };
  if (controller_light_switch) {
    v_330 = v_329;
  } else {
    v_330 = sub_469;
  };
  if (controller_c_light_1) {
    sub_444 = v_330;
  } else {
    sub_444 = sub_469;
  };
  if (controller_air_failed_recovered) {
    v_363 = sub_444;
    sub_394 = sub_395;
  } else {
    v_363 = sub_395;
    sub_394 = sub_444;
  };
  if (controller_ck_51_1) {
    sub_393 = v_363;
  } else {
    sub_393 = sub_394;
  };
  if (controller_blind_failed_recovered) {
    v_293 = false;
    sub_489 = sub_285;
  } else {
    v_293 = sub_285;
    sub_489 = false;
  };
  if (controller_ck_66_1) {
    sub_488 = v_293;
  } else {
    sub_488 = sub_489;
  };
  sub_494 = sub_311;
  sub_493 = sub_494;
  sub_496 = sub_319;
  sub_495 = sub_496;
  if (controller_c_closet) {
    sub_492 = sub_493;
  } else {
    sub_492 = sub_495;
  };
  if (controller_blind_failed_recovered) {
    v_292 = sub_492;
    sub_491 = sub_285;
  } else {
    v_292 = sub_285;
    sub_491 = sub_492;
  };
  if (controller_ck_66_1) {
    sub_490 = v_292;
  } else {
    sub_490 = sub_491;
  };
  if (controller_ck_64_1) {
    v_294 = sub_490;
  } else {
    v_294 = sub_488;
  };
  if (controller_blind_switch) {
    v_295 = v_294;
  } else {
    v_295 = sub_490;
  };
  sub_497 = sub_490;
  if (controller_c_blind_1) {
    sub_487 = v_295;
  } else {
    sub_487 = sub_497;
  };
  if (controller_change_shift) {
    v_288 = false;
    sub_505 = sub_311;
  } else {
    v_288 = sub_311;
    sub_505 = false;
  };
  if (controller_ck_1) {
    sub_504 = v_288;
  } else {
    sub_504 = sub_505;
  };
  sub_503 = sub_504;
  if (controller_change_shift) {
    v_287 = false;
    sub_508 = sub_319;
  } else {
    v_287 = sub_319;
    sub_508 = false;
  };
  if (controller_ck_1) {
    sub_507 = v_287;
  } else {
    sub_507 = sub_508;
  };
  sub_506 = sub_507;
  if (controller_c_closet) {
    sub_502 = sub_503;
  } else {
    sub_502 = sub_506;
  };
  if (controller_blind_failed_recovered) {
    v_289 = sub_502;
    sub_501 = false;
  } else {
    v_289 = false;
    sub_501 = sub_502;
  };
  if (controller_ck_66_1) {
    sub_500 = v_289;
  } else {
    sub_500 = sub_501;
  };
  if (controller_ck_64_1) {
    v_290 = sub_500;
  } else {
    v_290 = false;
  };
  if (controller_blind_switch) {
    v_291 = v_290;
  } else {
    v_291 = sub_500;
  };
  if (controller_c_blind_1) {
    sub_499 = v_291;
  } else {
    sub_499 = sub_500;
  };
  if (controller_ck_64_1) {
    v_285 = sub_490;
  } else {
    v_285 = sub_283;
  };
  if (controller_blind_switch) {
    v_286 = v_285;
  } else {
    v_286 = sub_490;
  };
  if (controller_c_blind_1) {
    sub_509 = v_286;
  } else {
    sub_509 = sub_497;
  };
  if (controller_ck_59_1) {
    sub_498 = sub_509;
  } else {
    sub_498 = sub_499;
  };
  if (controller_light_failed_recovered) {
    v_296 = sub_498;
    sub_486 = sub_487;
  } else {
    v_296 = sub_487;
    sub_486 = sub_498;
  };
  if (controller_ck_61_1) {
    v_297 = v_296;
  } else {
    v_297 = sub_486;
  };
  if (controller_ck_1) {
    sub_517 = sub_310;
  } else {
    sub_517 = sub_315;
  };
  sub_516 = sub_517;
  if (controller_ck_1) {
    sub_519 = sub_318;
  } else {
    sub_519 = sub_320;
  };
  sub_518 = sub_519;
  if (controller_c_closet) {
    sub_515 = sub_516;
  } else {
    sub_515 = sub_518;
  };
  if (controller_blind_failed_recovered) {
    v_280 = sub_515;
    sub_514 = sub_232;
  } else {
    v_280 = sub_232;
    sub_514 = sub_515;
  };
  if (controller_ck_66_1) {
    sub_513 = v_280;
  } else {
    sub_513 = sub_514;
  };
  if (controller_ck_64_1) {
    v_281 = sub_513;
  } else {
    v_281 = sub_267;
  };
  if (controller_blind_switch) {
    v_282 = v_281;
  } else {
    v_282 = sub_513;
  };
  if (controller_c_blind_1) {
    v_283 = v_282;
  } else {
    v_283 = sub_513;
  };
  if (controller_ck_59_1) {
    sub_512 = v_283;
  } else {
    sub_512 = sub_509;
  };
  if (controller_light_failed_recovered) {
    v_284 = sub_512;
    sub_511 = sub_487;
  } else {
    v_284 = sub_487;
    sub_511 = sub_512;
  };
  if (controller_ck_61_1) {
    sub_510 = v_284;
  } else {
    sub_510 = sub_511;
  };
  if (controller_light_switch) {
    v_298 = v_297;
  } else {
    v_298 = sub_510;
  };
  if (controller_c_light_1) {
    sub_485 = v_298;
  } else {
    sub_485 = sub_510;
  };
  if (controller_blind_failed_recovered) {
    v_274 = false;
    sub_524 = sub_363;
  } else {
    v_274 = sub_363;
    sub_524 = false;
  };
  if (controller_ck_66_1) {
    sub_523 = v_274;
  } else {
    sub_523 = sub_524;
  };
  if (controller_ck_64_1) {
    v_275 = sub_362;
  } else {
    v_275 = sub_523;
  };
  if (controller_blind_switch) {
    v_276 = v_275;
  } else {
    v_276 = sub_362;
  };
  sub_525 = sub_362;
  if (controller_c_blind_1) {
    sub_522 = v_276;
  } else {
    sub_522 = sub_525;
  };
  if (controller_change_shift) {
    v_263 = false;
    sub_533 = sub_366;
  } else {
    v_263 = sub_366;
    sub_533 = false;
  };
  if (controller_ck_1) {
    sub_532 = v_263;
  } else {
    sub_532 = sub_533;
  };
  if (controller_v_277) {
    sub_531 = false;
  } else {
    sub_531 = sub_532;
  };
  if (controller_v_276) {
    v_264 = sub_531;
  } else {
    v_264 = false;
  };
  if (controller_c_air_2) {
    v_265 = v_264;
  } else {
    v_265 = false;
  };
  if (controller_v_277) {
    v_262 = sub_532;
  } else {
    v_262 = false;
  };
  if (controller_v_276) {
    sub_534 = v_262;
  } else {
    sub_534 = sub_531;
  };
  if (controller_c_air_1) {
    v_266 = v_265;
  } else {
    v_266 = sub_534;
  };
  if (controller_change_shift) {
    v_261 = false;
    sub_537 = sub_372;
  } else {
    v_261 = sub_372;
    sub_537 = false;
  };
  if (controller_ck_1) {
    sub_536 = v_261;
  } else {
    sub_536 = sub_537;
  };
  if (controller_v_277) {
    v_267 = false;
  } else {
    v_267 = sub_536;
  };
  if (controller_v_276) {
    v_268 = v_267;
  } else {
    v_268 = sub_536;
  };
  if (controller_v_277) {
    sub_535 = sub_536;
  } else {
    sub_535 = false;
  };
  if (controller_c_air_2) {
    v_269 = sub_535;
  } else {
    v_269 = v_268;
  };
  if (controller_v_276) {
    sub_538 = false;
  } else {
    sub_538 = sub_535;
  };
  if (controller_c_air_1) {
    v_270 = v_269;
  } else {
    v_270 = sub_538;
  };
  if (controller_c_closet) {
    sub_530 = v_266;
  } else {
    sub_530 = v_270;
  };
  if (controller_blind_failed_recovered) {
    v_271 = sub_530;
    sub_529 = false;
  } else {
    v_271 = false;
    sub_529 = sub_530;
  };
  if (controller_ck_66_1) {
    sub_528 = v_271;
  } else {
    sub_528 = sub_529;
  };
  if (controller_ck_64_1) {
    v_272 = sub_528;
  } else {
    v_272 = false;
  };
  if (controller_blind_switch) {
    v_273 = v_272;
  } else {
    v_273 = sub_528;
  };
  if (controller_c_blind_1) {
    sub_527 = v_273;
  } else {
    sub_527 = sub_528;
  };
  sub_539 = sub_525;
  if (controller_ck_59_1) {
    sub_526 = sub_539;
  } else {
    sub_526 = sub_527;
  };
  if (controller_light_failed_recovered) {
    v_277 = sub_526;
    sub_521 = sub_522;
  } else {
    v_277 = sub_522;
    sub_521 = sub_526;
  };
  if (controller_ck_61_1) {
    v_278 = v_277;
  } else {
    v_278 = sub_521;
  };
  if (controller_ck_1) {
    sub_547 = sub_384;
  } else {
    sub_547 = sub_385;
  };
  if (controller_v_277) {
    sub_546 = false;
  } else {
    sub_546 = sub_547;
  };
  if (controller_v_276) {
    v_249 = sub_546;
  } else {
    v_249 = false;
  };
  if (controller_c_air_2) {
    v_250 = v_249;
  } else {
    v_250 = false;
  };
  if (controller_v_277) {
    v = sub_547;
  } else {
    v = false;
  };
  if (controller_v_276) {
    sub_548 = v;
  } else {
    sub_548 = sub_546;
  };
  if (controller_c_air_1) {
    v_251 = v_250;
  } else {
    v_251 = sub_548;
  };
  if (controller_ck_1) {
    sub_550 = sub_389;
  } else {
    sub_550 = sub_390;
  };
  if (controller_v_277) {
    v_252 = false;
  } else {
    v_252 = sub_550;
  };
  if (controller_v_276) {
    v_253 = v_252;
  } else {
    v_253 = sub_550;
  };
  if (controller_v_277) {
    sub_549 = sub_550;
  } else {
    sub_549 = false;
  };
  if (controller_c_air_2) {
    v_254 = sub_549;
  } else {
    v_254 = v_253;
  };
  if (controller_v_276) {
    sub_551 = false;
  } else {
    sub_551 = sub_549;
  };
  if (controller_c_air_1) {
    v_255 = v_254;
  } else {
    v_255 = sub_551;
  };
  if (controller_c_closet) {
    sub_545 = v_251;
  } else {
    sub_545 = v_255;
  };
  if (controller_blind_failed_recovered) {
    v_256 = sub_545;
    sub_544 = sub_326;
  } else {
    v_256 = sub_326;
    sub_544 = sub_545;
  };
  if (controller_ck_66_1) {
    sub_543 = v_256;
  } else {
    sub_543 = sub_544;
  };
  if (controller_ck_64_1) {
    v_257 = sub_543;
  } else {
    v_257 = sub_342;
  };
  if (controller_blind_switch) {
    v_258 = v_257;
  } else {
    v_258 = sub_543;
  };
  if (controller_c_blind_1) {
    v_259 = v_258;
  } else {
    v_259 = sub_543;
  };
  if (controller_ck_59_1) {
    sub_542 = v_259;
  } else {
    sub_542 = sub_539;
  };
  if (controller_light_failed_recovered) {
    v_260 = sub_542;
    sub_541 = sub_522;
  } else {
    v_260 = sub_522;
    sub_541 = sub_542;
  };
  if (controller_ck_61_1) {
    sub_540 = v_260;
  } else {
    sub_540 = sub_541;
  };
  if (controller_light_switch) {
    v_279 = v_278;
  } else {
    v_279 = sub_540;
  };
  if (controller_c_light_1) {
    sub_520 = v_279;
  } else {
    sub_520 = sub_540;
  };
  if (controller_air_failed_recovered) {
    v_299 = sub_520;
    sub_484 = sub_485;
  } else {
    v_299 = sub_485;
    sub_484 = sub_520;
  };
  if (controller_ck_51_1) {
    sub_483 = v_299;
  } else {
    sub_483 = sub_484;
  };
  if (controller_worker) {
    v_545 = sub_483;
    sub_392 = sub_393;
  } else {
    v_545 = sub_393;
    sub_392 = sub_483;
  };
  if (controller_ck_35_1) {
    v_546 = v_545;
  } else {
    v_546 = sub_392;
  };
  if (p_controller_c_light_2) {
    sub_0 = v_546;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_light_2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_blind_1_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered,
  int controller_door_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_20, int controller_ck_35_1, int controller_pnr_19,
  int controller_ck_37_1, int controller_pnr_18, int controller_ck_39_1,
  int controller_pnr_17, int controller_ck_41_1, int controller_pnr_16,
  int controller_ck_44_1, int controller_pnr_15, int controller_ck_46_1,
  int controller_pnr_14, int controller_v_277, int controller_v_276,
  int controller_pnr_13, int controller_ck_51_1, int controller_pnr_12,
  int controller_ck_54_1, int controller_pnr_11, int controller_ck_56_1,
  int controller_pnr_10, int controller_ck_59_1, int controller_pnr_9,
  int controller_ck_61_1, int controller_pnr_8, int controller_ck_64_1,
  int controller_pnr_7, int controller_ck_66_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_light_1, int controller_c_closet,
  int controller_c_air_2, int controller_c_air_1, int controller_c_window,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_blind_1_out* _out) {
  
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
  sub_21 = false;
  sub_23 = (controller_c_door&&false);
  v_711 = !(controller_c_door);
  sub_24 = (v_711&&false);
  if (controller_ck_44_1) {
    sub_22 = sub_24;
  } else {
    sub_22 = sub_23;
  };
  if (controller_door_failed_recovered) {
    v_712 = sub_22;
    sub_20 = sub_21;
  } else {
    v_712 = sub_21;
    sub_20 = sub_22;
  };
  if (controller_ck_46_1) {
    sub_19 = v_712;
  } else {
    sub_19 = sub_20;
  };
  if (controller_window_failed_recovered) {
    v_713 = false;
    sub_25 = sub_19;
  } else {
    v_713 = sub_19;
    sub_25 = false;
  };
  if (controller_ck_56_1) {
    v_714 = v_713;
  } else {
    v_714 = sub_25;
  };
  if (controller_c_window) {
    sub_18 = sub_19;
  } else {
    sub_18 = v_714;
  };
  if (controller_ck_39_1) {
    sub_17 = sub_18;
    sub_26 = false;
  } else {
    sub_17 = false;
    sub_26 = sub_18;
  };
  if (controller_c_pc) {
    sub_16 = sub_17;
  } else {
    sub_16 = sub_26;
  };
  if (controller_cleaner) {
    sub_15 = sub_16;
    sub_27 = false;
  } else {
    sub_15 = false;
    sub_27 = sub_16;
  };
  if (controller_ck_37_1) {
    sub_14 = sub_27;
  } else {
    sub_14 = sub_15;
  };
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (controller_ck_44_1) {
    sub_39 = sub_23;
  } else {
    sub_39 = sub_24;
  };
  if (controller_door_failed_recovered) {
    v_707 = sub_39;
    sub_38 = sub_21;
  } else {
    v_707 = sub_21;
    sub_38 = sub_39;
  };
  if (controller_ck_46_1) {
    sub_37 = v_707;
  } else {
    sub_37 = sub_38;
  };
  sub_36 = sub_37;
  if (controller_door_failed_recovered) {
    v_706 = false;
    sub_42 = sub_21;
  } else {
    v_706 = sub_21;
    sub_42 = false;
  };
  if (controller_ck_46_1) {
    sub_41 = v_706;
  } else {
    sub_41 = sub_42;
  };
  if (controller_window_failed_recovered) {
    v_708 = sub_41;
    sub_40 = sub_37;
  } else {
    v_708 = sub_37;
    sub_40 = sub_41;
  };
  if (controller_ck_56_1) {
    v_709 = v_708;
  } else {
    v_709 = sub_40;
  };
  if (controller_c_window) {
    sub_35 = sub_36;
  } else {
    sub_35 = v_709;
  };
  if (controller_ck_39_1) {
    sub_34 = sub_35;
    sub_43 = false;
  } else {
    sub_34 = false;
    sub_43 = sub_35;
  };
  if (controller_c_pc) {
    sub_33 = sub_34;
  } else {
    sub_33 = sub_43;
  };
  if (controller_cleaner) {
    v_710 = sub_33;
    sub_32 = false;
  } else {
    v_710 = false;
    sub_32 = sub_33;
  };
  if (controller_ck_37_1) {
    sub_31 = v_710;
  } else {
    sub_31 = sub_32;
  };
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  if (controller_c_closet) {
    sub_10 = sub_11;
  } else {
    sub_10 = sub_28;
  };
  if (controller_window_failed_recovered) {
    v_703 = false;
    sub_53 = sub_37;
  } else {
    v_703 = sub_37;
    sub_53 = false;
  };
  if (controller_ck_56_1) {
    v_704 = v_703;
  } else {
    v_704 = sub_53;
  };
  if (controller_c_window) {
    sub_52 = v_704;
  } else {
    sub_52 = sub_36;
  };
  if (controller_ck_39_1) {
    sub_51 = sub_52;
    sub_54 = false;
  } else {
    sub_51 = false;
    sub_54 = sub_52;
  };
  if (controller_c_pc) {
    sub_50 = sub_51;
  } else {
    sub_50 = sub_54;
  };
  if (controller_cleaner) {
    v_705 = sub_50;
    sub_49 = false;
  } else {
    v_705 = false;
    sub_49 = sub_50;
  };
  if (controller_ck_37_1) {
    sub_48 = v_705;
  } else {
    sub_48 = sub_49;
  };
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  if (controller_c_closet) {
    sub_44 = sub_11;
  } else {
    sub_44 = sub_45;
  };
  if (controller_blind_failed_recovered) {
    v_715 = sub_44;
    sub_9 = sub_10;
  } else {
    v_715 = sub_10;
    sub_9 = sub_44;
  };
  if (controller_ck_66_1) {
    sub_8 = v_715;
  } else {
    sub_8 = sub_9;
  };
  sub_7 = sub_8;
  if (controller_c_closet) {
    sub_59 = sub_11;
  } else {
    sub_59 = false;
  };
  if (controller_change_shift) {
    v_701 = false;
    sub_64 = sub_48;
  } else {
    v_701 = sub_48;
    sub_64 = false;
  };
  if (controller_ck_1) {
    sub_63 = v_701;
  } else {
    sub_63 = sub_64;
  };
  sub_62 = sub_63;
  sub_61 = sub_62;
  if (controller_c_closet) {
    sub_60 = sub_11;
  } else {
    sub_60 = sub_61;
  };
  if (controller_blind_failed_recovered) {
    v_702 = sub_60;
    sub_58 = sub_59;
  } else {
    v_702 = sub_59;
    sub_58 = sub_60;
  };
  if (controller_ck_66_1) {
    sub_57 = v_702;
  } else {
    sub_57 = sub_58;
  };
  sub_56 = sub_57;
  if (controller_c_closet) {
    sub_67 = false;
    sub_68 = false;
  } else {
    sub_67 = sub_28;
    sub_68 = sub_45;
  };
  if (controller_blind_failed_recovered) {
    v_700 = sub_68;
    sub_66 = sub_67;
  } else {
    v_700 = sub_67;
    sub_66 = sub_68;
  };
  if (controller_ck_66_1) {
    sub_65 = v_700;
  } else {
    sub_65 = sub_66;
  };
  if (controller_ck_59_1) {
    sub_55 = sub_65;
  } else {
    sub_55 = sub_56;
  };
  if (controller_light_failed_recovered) {
    v_716 = sub_55;
    sub_6 = sub_7;
  } else {
    v_716 = sub_7;
    sub_6 = sub_55;
  };
  if (controller_ck_61_1) {
    v_717 = v_716;
  } else {
    v_717 = sub_6;
  };
  sub_69 = sub_7;
  if (controller_light_switch) {
    v_718 = v_717;
  } else {
    v_718 = sub_69;
  };
  if (controller_c_light_1) {
    sub_5 = v_718;
  } else {
    sub_5 = sub_69;
  };
  if (controller_v_277) {
    v_694 = sub_13;
  } else {
    v_694 = false;
  };
  if (controller_v_276) {
    v_695 = v_694;
  } else {
    v_695 = false;
  };
  if (controller_v_277) {
    sub_76 = false;
  } else {
    sub_76 = sub_13;
  };
  if (controller_v_276) {
    v_693 = false;
  } else {
    v_693 = sub_76;
  };
  if (controller_c_air_2) {
    v_696 = v_693;
  } else {
    v_696 = v_695;
  };
  if (controller_v_276) {
    sub_77 = sub_76;
  } else {
    sub_77 = false;
  };
  if (controller_c_air_1) {
    sub_75 = v_696;
  } else {
    sub_75 = sub_77;
  };
  if (controller_ck_37_1) {
    sub_81 = sub_15;
  } else {
    sub_81 = sub_27;
  };
  sub_80 = sub_81;
  if (controller_v_277) {
    sub_79 = false;
  } else {
    sub_79 = sub_80;
  };
  if (controller_v_276) {
    v_691 = sub_79;
  } else {
    v_691 = false;
  };
  if (controller_c_air_2) {
    v_692 = v_691;
  } else {
    v_692 = false;
  };
  if (controller_v_277) {
    v_690 = sub_80;
  } else {
    v_690 = false;
  };
  if (controller_v_276) {
    sub_82 = v_690;
  } else {
    sub_82 = sub_79;
  };
  if (controller_c_air_1) {
    sub_78 = v_692;
  } else {
    sub_78 = sub_82;
  };
  if (controller_c_closet) {
    sub_74 = sub_75;
  } else {
    sub_74 = sub_78;
  };
  sub_73 = sub_74;
  sub_72 = sub_73;
  if (controller_c_closet) {
    sub_87 = sub_75;
  } else {
    sub_87 = false;
  };
  if (controller_change_shift) {
    v_686 = false;
    sub_92 = sub_81;
  } else {
    v_686 = sub_81;
    sub_92 = false;
  };
  if (controller_ck_1) {
    sub_91 = v_686;
  } else {
    sub_91 = sub_92;
  };
  if (controller_v_277) {
    sub_90 = false;
  } else {
    sub_90 = sub_91;
  };
  if (controller_v_276) {
    v_687 = sub_90;
  } else {
    v_687 = false;
  };
  if (controller_c_air_2) {
    v_688 = v_687;
  } else {
    v_688 = false;
  };
  if (controller_v_277) {
    v_685 = sub_91;
  } else {
    v_685 = false;
  };
  if (controller_v_276) {
    sub_93 = v_685;
  } else {
    sub_93 = sub_90;
  };
  if (controller_c_air_1) {
    sub_89 = v_688;
  } else {
    sub_89 = sub_93;
  };
  if (controller_c_closet) {
    sub_88 = sub_75;
  } else {
    sub_88 = sub_89;
  };
  if (controller_blind_failed_recovered) {
    v_689 = sub_88;
    sub_86 = sub_87;
  } else {
    v_689 = sub_87;
    sub_86 = sub_88;
  };
  if (controller_ck_66_1) {
    sub_85 = v_689;
  } else {
    sub_85 = sub_86;
  };
  sub_84 = sub_85;
  if (controller_c_closet) {
    sub_95 = false;
  } else {
    sub_95 = sub_78;
  };
  sub_94 = sub_95;
  if (controller_ck_59_1) {
    sub_83 = sub_94;
  } else {
    sub_83 = sub_84;
  };
  if (controller_light_failed_recovered) {
    v_697 = sub_83;
    sub_71 = sub_72;
  } else {
    v_697 = sub_72;
    sub_71 = sub_83;
  };
  if (controller_ck_61_1) {
    v_698 = v_697;
  } else {
    v_698 = sub_71;
  };
  sub_96 = sub_72;
  if (controller_light_switch) {
    v_699 = v_698;
  } else {
    v_699 = sub_96;
  };
  if (controller_c_light_1) {
    sub_70 = v_699;
  } else {
    sub_70 = sub_96;
  };
  if (controller_air_failed_recovered) {
    v_719 = sub_70;
    sub_4 = sub_5;
  } else {
    v_719 = sub_5;
    sub_4 = sub_70;
  };
  if (controller_ck_51_1) {
    sub_3 = v_719;
  } else {
    sub_3 = sub_4;
  };
  if (controller_c_pc) {
    sub_109 = sub_43;
  } else {
    sub_109 = sub_34;
  };
  if (controller_cleaner) {
    sub_108 = sub_109;
    sub_110 = false;
  } else {
    sub_108 = false;
    sub_110 = sub_109;
  };
  if (controller_ck_37_1) {
    sub_107 = sub_110;
  } else {
    sub_107 = sub_108;
  };
  sub_106 = sub_107;
  sub_105 = sub_106;
  if (controller_ck_37_1) {
    sub_113 = sub_108;
  } else {
    sub_113 = sub_110;
  };
  sub_112 = sub_113;
  sub_111 = sub_112;
  if (controller_c_closet) {
    sub_104 = sub_105;
  } else {
    sub_104 = sub_111;
  };
  if (controller_c_pc) {
    sub_119 = sub_54;
  } else {
    sub_119 = sub_51;
  };
  if (controller_cleaner) {
    sub_118 = sub_119;
    sub_120 = false;
  } else {
    sub_118 = false;
    sub_120 = sub_119;
  };
  if (controller_ck_37_1) {
    sub_117 = sub_120;
  } else {
    sub_117 = sub_118;
  };
  sub_116 = sub_117;
  sub_115 = sub_116;
  if (controller_ck_37_1) {
    sub_123 = sub_118;
  } else {
    sub_123 = sub_120;
  };
  sub_122 = sub_123;
  sub_121 = sub_122;
  if (controller_c_closet) {
    sub_114 = sub_115;
  } else {
    sub_114 = sub_121;
  };
  if (controller_blind_failed_recovered) {
    v_680 = sub_114;
    sub_103 = sub_104;
  } else {
    v_680 = sub_104;
    sub_103 = sub_114;
  };
  if (controller_ck_66_1) {
    sub_102 = v_680;
  } else {
    sub_102 = sub_103;
  };
  sub_101 = sub_102;
  if (controller_change_shift) {
    v_678 = false;
    sub_131 = sub_117;
  } else {
    v_678 = sub_117;
    sub_131 = false;
  };
  if (controller_ck_1) {
    sub_130 = v_678;
  } else {
    sub_130 = sub_131;
  };
  sub_129 = sub_130;
  if (controller_change_shift) {
    v_677 = false;
    sub_134 = sub_123;
  } else {
    v_677 = sub_123;
    sub_134 = false;
  };
  if (controller_ck_1) {
    sub_133 = v_677;
  } else {
    sub_133 = sub_134;
  };
  sub_132 = sub_133;
  if (controller_c_closet) {
    sub_128 = sub_129;
  } else {
    sub_128 = sub_132;
  };
  if (controller_blind_failed_recovered) {
    v_679 = sub_128;
    sub_127 = false;
  } else {
    v_679 = false;
    sub_127 = sub_128;
  };
  if (controller_ck_66_1) {
    sub_126 = v_679;
  } else {
    sub_126 = sub_127;
  };
  sub_125 = sub_126;
  if (controller_ck_59_1) {
    sub_124 = sub_101;
  } else {
    sub_124 = sub_125;
  };
  if (controller_light_failed_recovered) {
    v_681 = sub_124;
    sub_100 = sub_101;
  } else {
    v_681 = sub_101;
    sub_100 = sub_124;
  };
  if (controller_ck_61_1) {
    v_682 = v_681;
  } else {
    v_682 = sub_100;
  };
  sub_135 = sub_101;
  if (controller_light_switch) {
    v_683 = v_682;
  } else {
    v_683 = sub_135;
  };
  if (controller_c_light_1) {
    sub_99 = v_683;
  } else {
    sub_99 = sub_135;
  };
  if (controller_c_pc) {
    sub_145 = sub_26;
  } else {
    sub_145 = sub_17;
  };
  if (controller_cleaner) {
    v_666 = false;
    sub_144 = sub_145;
  } else {
    v_666 = sub_145;
    sub_144 = false;
  };
  if (controller_ck_37_1) {
    sub_143 = v_666;
  } else {
    sub_143 = sub_144;
  };
  sub_142 = sub_143;
  if (controller_v_277) {
    sub_141 = false;
  } else {
    sub_141 = sub_142;
  };
  if (controller_v_276) {
    v_667 = sub_141;
  } else {
    v_667 = false;
  };
  if (controller_c_air_2) {
    v_668 = v_667;
  } else {
    v_668 = false;
  };
  if (controller_v_277) {
    v_665 = sub_142;
  } else {
    v_665 = false;
  };
  if (controller_v_276) {
    sub_146 = v_665;
  } else {
    sub_146 = sub_141;
  };
  if (controller_c_air_1) {
    v_669 = v_668;
  } else {
    v_669 = sub_146;
  };
  sub_154 = sub_21;
  sub_153 = sub_154;
  sub_152 = sub_153;
  if (controller_ck_39_1) {
    v_663 = sub_152;
    v_662 = false;
  } else {
    v_663 = false;
    v_662 = sub_152;
  };
  if (controller_c_pc) {
    sub_151 = v_662;
  } else {
    sub_151 = v_663;
  };
  if (controller_cleaner) {
    v_664 = sub_151;
    sub_150 = false;
  } else {
    v_664 = false;
    sub_150 = sub_151;
  };
  if (controller_ck_37_1) {
    sub_149 = v_664;
  } else {
    sub_149 = sub_150;
  };
  sub_148 = sub_149;
  if (controller_v_277) {
    v_670 = false;
  } else {
    v_670 = sub_148;
  };
  if (controller_v_276) {
    v_671 = v_670;
  } else {
    v_671 = sub_148;
  };
  if (controller_v_277) {
    sub_147 = sub_148;
  } else {
    sub_147 = false;
  };
  if (controller_c_air_2) {
    v_672 = sub_147;
  } else {
    v_672 = v_671;
  };
  if (controller_v_276) {
    sub_155 = false;
  } else {
    sub_155 = sub_147;
  };
  if (controller_c_air_1) {
    v_673 = v_672;
  } else {
    v_673 = sub_155;
  };
  if (controller_c_closet) {
    sub_140 = v_669;
  } else {
    sub_140 = v_673;
  };
  sub_139 = sub_140;
  sub_138 = sub_139;
  if (controller_change_shift) {
    v_653 = false;
    sub_163 = sub_143;
  } else {
    v_653 = sub_143;
    sub_163 = false;
  };
  if (controller_ck_1) {
    sub_162 = v_653;
  } else {
    sub_162 = sub_163;
  };
  if (controller_v_277) {
    sub_161 = false;
  } else {
    sub_161 = sub_162;
  };
  if (controller_v_276) {
    v_654 = sub_161;
  } else {
    v_654 = false;
  };
  if (controller_c_air_2) {
    v_655 = v_654;
  } else {
    v_655 = false;
  };
  if (controller_v_277) {
    v_652 = sub_162;
  } else {
    v_652 = false;
  };
  if (controller_v_276) {
    sub_164 = v_652;
  } else {
    sub_164 = sub_161;
  };
  if (controller_c_air_1) {
    v_656 = v_655;
  } else {
    v_656 = sub_164;
  };
  if (controller_change_shift) {
    v_651 = false;
    sub_167 = sub_149;
  } else {
    v_651 = sub_149;
    sub_167 = false;
  };
  if (controller_ck_1) {
    sub_166 = v_651;
  } else {
    sub_166 = sub_167;
  };
  if (controller_v_277) {
    v_657 = false;
  } else {
    v_657 = sub_166;
  };
  if (controller_v_276) {
    v_658 = v_657;
  } else {
    v_658 = sub_166;
  };
  if (controller_v_277) {
    sub_165 = sub_166;
  } else {
    sub_165 = false;
  };
  if (controller_c_air_2) {
    v_659 = sub_165;
  } else {
    v_659 = v_658;
  };
  if (controller_v_276) {
    sub_168 = false;
  } else {
    sub_168 = sub_165;
  };
  if (controller_c_air_1) {
    v_660 = v_659;
  } else {
    v_660 = sub_168;
  };
  if (controller_c_closet) {
    sub_160 = v_656;
  } else {
    sub_160 = v_660;
  };
  if (controller_blind_failed_recovered) {
    v_661 = sub_160;
    sub_159 = false;
  } else {
    v_661 = false;
    sub_159 = sub_160;
  };
  if (controller_ck_66_1) {
    sub_158 = v_661;
  } else {
    sub_158 = sub_159;
  };
  sub_157 = sub_158;
  if (controller_ck_59_1) {
    sub_156 = sub_138;
  } else {
    sub_156 = sub_157;
  };
  if (controller_light_failed_recovered) {
    v_674 = sub_156;
    sub_137 = sub_138;
  } else {
    v_674 = sub_138;
    sub_137 = sub_156;
  };
  if (controller_ck_61_1) {
    v_675 = v_674;
  } else {
    v_675 = sub_137;
  };
  sub_169 = sub_138;
  if (controller_light_switch) {
    v_676 = v_675;
  } else {
    v_676 = sub_169;
  };
  if (controller_c_light_1) {
    sub_136 = v_676;
  } else {
    sub_136 = sub_169;
  };
  if (controller_air_failed_recovered) {
    v_684 = sub_136;
    sub_98 = sub_99;
  } else {
    v_684 = sub_99;
    sub_98 = sub_136;
  };
  if (controller_ck_51_1) {
    sub_97 = v_684;
  } else {
    sub_97 = sub_98;
  };
  if (controller_worker) {
    v_720 = sub_97;
    sub_2 = sub_3;
  } else {
    v_720 = sub_3;
    sub_2 = sub_97;
  };
  if (controller_ck_35_1) {
    sub_1 = v_720;
  } else {
    sub_1 = sub_2;
  };
  sub_189 = true;
  v_641 = !(controller_c_door);
  sub_191 = (v_641||false);
  sub_192 = (controller_c_door||false);
  if (controller_ck_44_1) {
    sub_190 = sub_192;
  } else {
    sub_190 = sub_191;
  };
  if (controller_door_failed_recovered) {
    v_642 = sub_190;
    sub_188 = sub_189;
  } else {
    v_642 = sub_189;
    sub_188 = sub_190;
  };
  if (controller_ck_46_1) {
    sub_187 = v_642;
  } else {
    sub_187 = sub_188;
  };
  if (controller_window_failed_recovered) {
    v_643 = false;
    sub_193 = sub_187;
  } else {
    v_643 = sub_187;
    sub_193 = false;
  };
  if (controller_ck_56_1) {
    v_644 = v_643;
  } else {
    v_644 = sub_193;
  };
  if (controller_c_window) {
    sub_186 = sub_187;
  } else {
    sub_186 = v_644;
  };
  if (controller_ck_39_1) {
    sub_185 = sub_186;
    sub_194 = false;
  } else {
    sub_185 = false;
    sub_194 = sub_186;
  };
  if (controller_c_pc) {
    sub_184 = sub_185;
  } else {
    sub_184 = sub_194;
  };
  if (controller_cleaner) {
    sub_183 = sub_184;
    sub_195 = false;
  } else {
    sub_183 = false;
    sub_195 = sub_184;
  };
  if (controller_ck_37_1) {
    sub_182 = sub_195;
  } else {
    sub_182 = sub_183;
  };
  sub_181 = sub_182;
  sub_180 = sub_181;
  sub_179 = sub_180;
  if (controller_ck_44_1) {
    sub_207 = sub_191;
  } else {
    sub_207 = sub_192;
  };
  if (controller_door_failed_recovered) {
    v_637 = sub_207;
    sub_206 = sub_189;
  } else {
    v_637 = sub_189;
    sub_206 = sub_207;
  };
  if (controller_ck_46_1) {
    sub_205 = v_637;
  } else {
    sub_205 = sub_206;
  };
  sub_204 = sub_205;
  if (controller_door_failed_recovered) {
    v_636 = false;
    sub_210 = sub_189;
  } else {
    v_636 = sub_189;
    sub_210 = false;
  };
  if (controller_ck_46_1) {
    sub_209 = v_636;
  } else {
    sub_209 = sub_210;
  };
  if (controller_window_failed_recovered) {
    v_638 = sub_209;
    sub_208 = sub_205;
  } else {
    v_638 = sub_205;
    sub_208 = sub_209;
  };
  if (controller_ck_56_1) {
    v_639 = v_638;
  } else {
    v_639 = sub_208;
  };
  if (controller_c_window) {
    sub_203 = sub_204;
  } else {
    sub_203 = v_639;
  };
  if (controller_ck_39_1) {
    sub_202 = sub_203;
    sub_211 = false;
  } else {
    sub_202 = false;
    sub_211 = sub_203;
  };
  if (controller_c_pc) {
    sub_201 = sub_202;
  } else {
    sub_201 = sub_211;
  };
  if (controller_cleaner) {
    v_640 = sub_201;
    sub_200 = false;
  } else {
    v_640 = false;
    sub_200 = sub_201;
  };
  if (controller_ck_37_1) {
    sub_199 = v_640;
  } else {
    sub_199 = sub_200;
  };
  sub_198 = sub_199;
  sub_197 = sub_198;
  sub_196 = sub_197;
  if (controller_c_closet) {
    sub_178 = sub_179;
    sub_212 = sub_179;
  } else {
    sub_178 = sub_196;
    sub_212 = sub_45;
  };
  if (controller_blind_failed_recovered) {
    v_645 = sub_212;
    sub_177 = sub_178;
  } else {
    v_645 = sub_178;
    sub_177 = sub_212;
  };
  if (controller_ck_66_1) {
    sub_176 = v_645;
  } else {
    sub_176 = sub_177;
  };
  if (controller_window_failed_recovered) {
    v_633 = false;
    sub_225 = sub_205;
  } else {
    v_633 = sub_205;
    sub_225 = false;
  };
  if (controller_ck_56_1) {
    sub_224 = v_633;
  } else {
    sub_224 = sub_225;
  };
  if (controller_c_window) {
    sub_223 = sub_224;
  } else {
    sub_223 = sub_204;
  };
  if (controller_ck_39_1) {
    sub_222 = sub_223;
    sub_226 = false;
  } else {
    sub_222 = false;
    sub_226 = sub_223;
  };
  if (controller_c_pc) {
    sub_221 = sub_222;
  } else {
    sub_221 = sub_226;
  };
  if (controller_cleaner) {
    v_634 = sub_221;
    sub_220 = false;
  } else {
    v_634 = false;
    sub_220 = sub_221;
  };
  if (controller_ck_37_1) {
    sub_219 = v_634;
  } else {
    sub_219 = sub_220;
  };
  sub_218 = sub_219;
  sub_217 = sub_218;
  sub_216 = sub_217;
  if (controller_c_closet) {
    sub_215 = sub_11;
  } else {
    sub_215 = sub_216;
  };
  if (controller_blind_failed_recovered) {
    v_635 = sub_215;
    sub_214 = sub_178;
  } else {
    v_635 = sub_178;
    sub_214 = sub_215;
  };
  if (controller_ck_66_1) {
    sub_213 = v_635;
  } else {
    sub_213 = sub_214;
  };
  if (controller_ck_64_1) {
    v_646 = sub_213;
  } else {
    v_646 = sub_176;
  };
  if (controller_c_closet) {
    sub_229 = sub_179;
  } else {
    sub_229 = sub_216;
  };
  if (controller_blind_failed_recovered) {
    v_632 = sub_229;
    sub_228 = sub_178;
  } else {
    v_632 = sub_178;
    sub_228 = sub_229;
  };
  if (controller_ck_66_1) {
    sub_227 = v_632;
  } else {
    sub_227 = sub_228;
  };
  if (controller_blind_switch) {
    sub_175 = v_646;
  } else {
    sub_175 = sub_227;
  };
  if (controller_c_closet) {
    sub_234 = sub_179;
    sub_235 = sub_179;
  } else {
    sub_234 = false;
    sub_235 = sub_61;
  };
  if (controller_blind_failed_recovered) {
    v_624 = sub_235;
    sub_233 = sub_234;
  } else {
    v_624 = sub_234;
    sub_233 = sub_235;
  };
  if (controller_ck_66_1) {
    sub_232 = v_624;
  } else {
    sub_232 = sub_233;
  };
  if (controller_change_shift) {
    v_623 = false;
    sub_241 = sub_219;
  } else {
    v_623 = sub_219;
    sub_241 = false;
  };
  if (controller_ck_1) {
    sub_240 = v_623;
  } else {
    sub_240 = sub_241;
  };
  sub_239 = sub_240;
  sub_238 = sub_239;
  if (controller_c_closet) {
    sub_237 = sub_11;
  } else {
    sub_237 = sub_238;
  };
  if (controller_blind_failed_recovered) {
    v_625 = sub_237;
    sub_236 = sub_234;
  } else {
    v_625 = sub_234;
    sub_236 = sub_237;
  };
  if (controller_ck_66_1) {
    v_626 = v_625;
  } else {
    v_626 = sub_236;
  };
  if (controller_ck_64_1) {
    v_627 = v_626;
  } else {
    v_627 = sub_232;
  };
  if (controller_c_closet) {
    sub_243 = sub_179;
  } else {
    sub_243 = sub_238;
  };
  if (controller_blind_failed_recovered) {
    v_628 = sub_243;
    sub_242 = sub_234;
  } else {
    v_628 = sub_234;
    sub_242 = sub_243;
  };
  if (controller_ck_66_1) {
    v_629 = v_628;
  } else {
    v_629 = sub_242;
  };
  if (controller_blind_switch) {
    sub_231 = v_627;
  } else {
    sub_231 = v_629;
  };
  if (controller_c_closet) {
    sub_246 = false;
  } else {
    sub_246 = sub_196;
  };
  if (controller_window_failed_recovered) {
    v_619 = sub_37;
    sub_256 = sub_205;
  } else {
    v_619 = sub_205;
    sub_256 = sub_37;
  };
  if (controller_ck_56_1) {
    v_620 = v_619;
  } else {
    v_620 = sub_256;
  };
  if (controller_c_window) {
    sub_255 = sub_224;
  } else {
    sub_255 = v_620;
  };
  if (controller_ck_39_1) {
    sub_254 = sub_255;
    sub_257 = false;
  } else {
    sub_254 = false;
    sub_257 = sub_255;
  };
  if (controller_c_pc) {
    sub_253 = sub_254;
  } else {
    sub_253 = sub_257;
  };
  if (controller_cleaner) {
    v_621 = sub_253;
    sub_252 = false;
  } else {
    v_621 = false;
    sub_252 = sub_253;
  };
  if (controller_ck_37_1) {
    sub_251 = v_621;
  } else {
    sub_251 = sub_252;
  };
  sub_250 = sub_251;
  sub_249 = sub_250;
  sub_248 = sub_249;
  if (controller_c_closet) {
    sub_247 = false;
  } else {
    sub_247 = sub_248;
  };
  if (controller_blind_failed_recovered) {
    v_622 = sub_247;
    sub_245 = sub_246;
  } else {
    v_622 = sub_246;
    sub_245 = sub_247;
  };
  if (controller_ck_66_1) {
    sub_244 = v_622;
  } else {
    sub_244 = sub_245;
  };
  if (controller_c_closet) {
    sub_260 = false;
  } else {
    sub_260 = sub_216;
  };
  if (controller_blind_failed_recovered) {
    v_618 = sub_260;
    sub_259 = sub_246;
  } else {
    v_618 = sub_246;
    sub_259 = sub_260;
  };
  if (controller_ck_66_1) {
    sub_258 = v_618;
  } else {
    sub_258 = sub_259;
  };
  if (controller_ck_64_1) {
    v_630 = sub_258;
  } else {
    v_630 = sub_244;
  };
  if (controller_blind_switch) {
    v_631 = v_630;
  } else {
    v_631 = sub_258;
  };
  if (controller_ck_59_1) {
    sub_230 = v_631;
  } else {
    sub_230 = sub_231;
  };
  if (controller_light_failed_recovered) {
    v_647 = sub_230;
    sub_174 = sub_175;
  } else {
    v_647 = sub_175;
    sub_174 = sub_230;
  };
  if (controller_ck_61_1) {
    v_648 = v_647;
  } else {
    v_648 = sub_174;
  };
  if (controller_c_closet) {
    sub_266 = sub_179;
  } else {
    sub_266 = sub_248;
  };
  if (controller_blind_failed_recovered) {
    v_615 = sub_266;
    sub_265 = sub_178;
  } else {
    v_615 = sub_178;
    sub_265 = sub_266;
  };
  if (controller_ck_66_1) {
    sub_264 = v_615;
  } else {
    sub_264 = sub_265;
  };
  if (controller_ck_64_1) {
    v_616 = sub_213;
  } else {
    v_616 = sub_264;
  };
  if (controller_blind_switch) {
    sub_263 = v_616;
  } else {
    sub_263 = sub_227;
  };
  if (controller_light_failed_recovered) {
    v_617 = sub_263;
    sub_262 = sub_175;
  } else {
    v_617 = sub_175;
    sub_262 = sub_263;
  };
  if (controller_ck_61_1) {
    sub_261 = v_617;
  } else {
    sub_261 = sub_262;
  };
  if (controller_light_switch) {
    v_649 = v_648;
  } else {
    v_649 = sub_261;
  };
  if (controller_c_light_1) {
    sub_173 = v_649;
  } else {
    sub_173 = sub_261;
  };
  if (controller_v_277) {
    v_607 = sub_181;
  } else {
    v_607 = false;
  };
  if (controller_v_276) {
    v_608 = v_607;
  } else {
    v_608 = false;
  };
  if (controller_v_277) {
    sub_274 = false;
  } else {
    sub_274 = sub_181;
  };
  if (controller_v_276) {
    v_606 = false;
  } else {
    v_606 = sub_274;
  };
  if (controller_c_air_2) {
    v_609 = v_606;
  } else {
    v_609 = v_608;
  };
  if (controller_v_276) {
    sub_275 = sub_274;
  } else {
    sub_275 = false;
  };
  if (controller_c_air_1) {
    sub_273 = v_609;
  } else {
    sub_273 = sub_275;
  };
  if (controller_ck_37_1) {
    sub_279 = sub_183;
  } else {
    sub_279 = sub_195;
  };
  sub_278 = sub_279;
  if (controller_v_277) {
    sub_277 = false;
  } else {
    sub_277 = sub_278;
  };
  if (controller_v_276) {
    v_604 = sub_277;
  } else {
    v_604 = false;
  };
  if (controller_c_air_2) {
    v_605 = v_604;
  } else {
    v_605 = false;
  };
  if (controller_v_277) {
    v_603 = sub_278;
  } else {
    v_603 = false;
  };
  if (controller_v_276) {
    sub_280 = v_603;
  } else {
    sub_280 = sub_277;
  };
  if (controller_c_air_1) {
    sub_276 = v_605;
  } else {
    sub_276 = sub_280;
  };
  if (controller_c_closet) {
    sub_272 = sub_273;
    sub_281 = sub_273;
  } else {
    sub_272 = sub_276;
    sub_281 = sub_78;
  };
  if (controller_blind_failed_recovered) {
    v_610 = sub_281;
    sub_271 = sub_272;
  } else {
    v_610 = sub_272;
    sub_271 = sub_281;
  };
  if (controller_ck_66_1) {
    sub_270 = v_610;
  } else {
    sub_270 = sub_271;
  };
  if (controller_c_closet) {
    sub_284 = sub_75;
  } else {
    sub_284 = sub_276;
  };
  if (controller_blind_failed_recovered) {
    v_602 = sub_284;
    sub_283 = sub_272;
  } else {
    v_602 = sub_272;
    sub_283 = sub_284;
  };
  if (controller_ck_66_1) {
    sub_282 = v_602;
  } else {
    sub_282 = sub_283;
  };
  if (controller_ck_64_1) {
    v_611 = sub_282;
  } else {
    v_611 = sub_270;
  };
  sub_285 = sub_272;
  if (controller_blind_switch) {
    sub_269 = v_611;
  } else {
    sub_269 = sub_285;
  };
  if (controller_c_closet) {
    sub_290 = sub_273;
    sub_291 = sub_273;
  } else {
    sub_290 = false;
    sub_291 = sub_89;
  };
  if (controller_blind_failed_recovered) {
    v_596 = sub_291;
    sub_289 = sub_290;
  } else {
    v_596 = sub_290;
    sub_289 = sub_291;
  };
  if (controller_ck_66_1) {
    sub_288 = v_596;
  } else {
    sub_288 = sub_289;
  };
  if (controller_change_shift) {
    v_593 = false;
    sub_297 = sub_279;
  } else {
    v_593 = sub_279;
    sub_297 = false;
  };
  if (controller_ck_1) {
    sub_296 = v_593;
  } else {
    sub_296 = sub_297;
  };
  if (controller_v_277) {
    sub_295 = false;
  } else {
    sub_295 = sub_296;
  };
  if (controller_v_276) {
    v_594 = sub_295;
  } else {
    v_594 = false;
  };
  if (controller_c_air_2) {
    v_595 = v_594;
  } else {
    v_595 = false;
  };
  if (controller_v_277) {
    v_592 = sub_296;
  } else {
    v_592 = false;
  };
  if (controller_v_276) {
    sub_298 = v_592;
  } else {
    sub_298 = sub_295;
  };
  if (controller_c_air_1) {
    sub_294 = v_595;
  } else {
    sub_294 = sub_298;
  };
  if (controller_c_closet) {
    sub_293 = sub_75;
  } else {
    sub_293 = sub_294;
  };
  if (controller_blind_failed_recovered) {
    v_597 = sub_293;
    sub_292 = sub_290;
  } else {
    v_597 = sub_290;
    sub_292 = sub_293;
  };
  if (controller_ck_66_1) {
    v_598 = v_597;
  } else {
    v_598 = sub_292;
  };
  if (controller_ck_64_1) {
    v_599 = v_598;
  } else {
    v_599 = sub_288;
  };
  if (controller_c_closet) {
    sub_300 = sub_273;
  } else {
    sub_300 = sub_294;
  };
  if (controller_blind_failed_recovered) {
    v_600 = sub_300;
    sub_299 = sub_290;
  } else {
    v_600 = sub_290;
    sub_299 = sub_300;
  };
  if (controller_ck_66_1) {
    v_601 = v_600;
  } else {
    v_601 = sub_299;
  };
  if (controller_blind_switch) {
    sub_287 = v_599;
  } else {
    sub_287 = v_601;
  };
  if (controller_c_closet) {
    sub_302 = false;
  } else {
    sub_302 = sub_276;
  };
  sub_301 = sub_302;
  if (controller_ck_59_1) {
    sub_286 = sub_301;
  } else {
    sub_286 = sub_287;
  };
  if (controller_light_failed_recovered) {
    v_612 = sub_286;
    sub_268 = sub_269;
  } else {
    v_612 = sub_269;
    sub_268 = sub_286;
  };
  if (controller_ck_61_1) {
    v_613 = v_612;
  } else {
    v_613 = sub_268;
  };
  if (controller_ck_64_1) {
    v_590 = sub_282;
  } else {
    v_590 = sub_285;
  };
  if (controller_blind_switch) {
    sub_305 = v_590;
  } else {
    sub_305 = sub_285;
  };
  if (controller_light_failed_recovered) {
    v_591 = sub_305;
    sub_304 = sub_269;
  } else {
    v_591 = sub_269;
    sub_304 = sub_305;
  };
  if (controller_ck_61_1) {
    sub_303 = v_591;
  } else {
    sub_303 = sub_304;
  };
  if (controller_light_switch) {
    v_614 = v_613;
  } else {
    v_614 = sub_303;
  };
  if (controller_c_light_1) {
    sub_267 = v_614;
  } else {
    sub_267 = sub_303;
  };
  if (controller_air_failed_recovered) {
    v_650 = sub_267;
    sub_172 = sub_173;
  } else {
    v_650 = sub_173;
    sub_172 = sub_267;
  };
  if (controller_ck_51_1) {
    sub_171 = v_650;
  } else {
    sub_171 = sub_172;
  };
  if (controller_c_pc) {
    sub_318 = sub_211;
  } else {
    sub_318 = sub_202;
  };
  if (controller_cleaner) {
    sub_317 = sub_318;
    sub_319 = false;
  } else {
    sub_317 = false;
    sub_319 = sub_318;
  };
  if (controller_ck_37_1) {
    sub_316 = sub_319;
  } else {
    sub_316 = sub_317;
  };
  sub_315 = sub_316;
  sub_314 = sub_315;
  if (controller_ck_37_1) {
    sub_322 = sub_317;
  } else {
    sub_322 = sub_319;
  };
  sub_321 = sub_322;
  sub_320 = sub_321;
  if (controller_c_closet) {
    sub_313 = sub_314;
  } else {
    sub_313 = sub_320;
  };
  if (controller_blind_failed_recovered) {
    v_584 = sub_114;
    sub_312 = sub_313;
  } else {
    v_584 = sub_313;
    sub_312 = sub_114;
  };
  if (controller_ck_66_1) {
    sub_311 = v_584;
  } else {
    sub_311 = sub_312;
  };
  if (controller_c_pc) {
    sub_330 = sub_226;
  } else {
    sub_330 = sub_222;
  };
  if (controller_cleaner) {
    sub_329 = sub_330;
    sub_331 = false;
  } else {
    sub_329 = false;
    sub_331 = sub_330;
  };
  if (controller_ck_37_1) {
    sub_328 = sub_331;
  } else {
    sub_328 = sub_329;
  };
  sub_327 = sub_328;
  sub_326 = sub_327;
  if (controller_ck_37_1) {
    sub_334 = sub_329;
  } else {
    sub_334 = sub_331;
  };
  sub_333 = sub_334;
  sub_332 = sub_333;
  if (controller_c_closet) {
    sub_325 = sub_326;
  } else {
    sub_325 = sub_332;
  };
  if (controller_blind_failed_recovered) {
    v_583 = sub_325;
    sub_324 = sub_313;
  } else {
    v_583 = sub_313;
    sub_324 = sub_325;
  };
  if (controller_ck_66_1) {
    sub_323 = v_583;
  } else {
    sub_323 = sub_324;
  };
  if (controller_ck_64_1) {
    v_585 = sub_323;
  } else {
    v_585 = sub_311;
  };
  if (controller_blind_switch) {
    sub_310 = v_585;
  } else {
    sub_310 = sub_323;
  };
  if (controller_change_shift) {
    v_580 = false;
    sub_342 = sub_328;
  } else {
    v_580 = sub_328;
    sub_342 = false;
  };
  if (controller_ck_1) {
    sub_341 = v_580;
  } else {
    sub_341 = sub_342;
  };
  sub_340 = sub_341;
  if (controller_change_shift) {
    v_579 = false;
    sub_345 = sub_334;
  } else {
    v_579 = sub_334;
    sub_345 = false;
  };
  if (controller_ck_1) {
    sub_344 = v_579;
  } else {
    sub_344 = sub_345;
  };
  sub_343 = sub_344;
  if (controller_c_closet) {
    sub_339 = sub_340;
  } else {
    sub_339 = sub_343;
  };
  if (controller_blind_failed_recovered) {
    v_581 = sub_339;
    sub_338 = false;
  } else {
    v_581 = false;
    sub_338 = sub_339;
  };
  if (controller_ck_66_1) {
    sub_337 = v_581;
  } else {
    sub_337 = sub_338;
  };
  if (controller_ck_64_1) {
    v_582 = sub_337;
  } else {
    v_582 = sub_126;
  };
  if (controller_blind_switch) {
    sub_336 = v_582;
  } else {
    sub_336 = sub_337;
  };
  if (controller_c_pc) {
    sub_354 = sub_257;
  } else {
    sub_354 = sub_254;
  };
  if (controller_cleaner) {
    sub_353 = sub_354;
    sub_355 = false;
  } else {
    sub_353 = false;
    sub_355 = sub_354;
  };
  if (controller_ck_37_1) {
    sub_352 = sub_355;
  } else {
    sub_352 = sub_353;
  };
  sub_351 = sub_352;
  sub_350 = sub_351;
  if (controller_ck_37_1) {
    sub_358 = sub_353;
  } else {
    sub_358 = sub_355;
  };
  sub_357 = sub_358;
  sub_356 = sub_357;
  if (controller_c_closet) {
    sub_349 = sub_350;
  } else {
    sub_349 = sub_356;
  };
  if (controller_blind_failed_recovered) {
    v_577 = sub_349;
    sub_348 = sub_313;
  } else {
    v_577 = sub_313;
    sub_348 = sub_349;
  };
  if (controller_ck_66_1) {
    sub_347 = v_577;
  } else {
    sub_347 = sub_348;
  };
  if (controller_ck_64_1) {
    v_578 = sub_323;
  } else {
    v_578 = sub_347;
  };
  if (controller_blind_switch) {
    sub_346 = v_578;
  } else {
    sub_346 = sub_323;
  };
  if (controller_ck_59_1) {
    sub_335 = sub_346;
  } else {
    sub_335 = sub_336;
  };
  if (controller_light_failed_recovered) {
    v_586 = sub_335;
    sub_309 = sub_310;
  } else {
    v_586 = sub_310;
    sub_309 = sub_335;
  };
  if (controller_ck_61_1) {
    v_587 = v_586;
  } else {
    v_587 = sub_309;
  };
  if (controller_light_failed_recovered) {
    v_576 = sub_346;
    sub_360 = sub_310;
  } else {
    v_576 = sub_310;
    sub_360 = sub_346;
  };
  if (controller_ck_61_1) {
    sub_359 = v_576;
  } else {
    sub_359 = sub_360;
  };
  if (controller_light_switch) {
    v_588 = v_587;
  } else {
    v_588 = sub_359;
  };
  if (controller_c_light_1) {
    sub_308 = v_588;
  } else {
    sub_308 = sub_359;
  };
  if (controller_c_pc) {
    sub_371 = sub_194;
  } else {
    sub_371 = sub_185;
  };
  if (controller_cleaner) {
    v_563 = false;
    sub_370 = sub_371;
  } else {
    v_563 = sub_371;
    sub_370 = false;
  };
  if (controller_ck_37_1) {
    sub_369 = v_563;
  } else {
    sub_369 = sub_370;
  };
  sub_368 = sub_369;
  if (controller_v_277) {
    sub_367 = false;
  } else {
    sub_367 = sub_368;
  };
  if (controller_v_276) {
    v_564 = sub_367;
  } else {
    v_564 = false;
  };
  if (controller_c_air_2) {
    v_565 = v_564;
  } else {
    v_565 = false;
  };
  if (controller_v_277) {
    v_562 = sub_368;
  } else {
    v_562 = false;
  };
  if (controller_v_276) {
    sub_372 = v_562;
  } else {
    sub_372 = sub_367;
  };
  if (controller_c_air_1) {
    v_566 = v_565;
  } else {
    v_566 = sub_372;
  };
  sub_380 = sub_189;
  sub_379 = sub_380;
  sub_378 = sub_379;
  if (controller_ck_39_1) {
    v_560 = sub_378;
    v_559 = false;
  } else {
    v_560 = false;
    v_559 = sub_378;
  };
  if (controller_c_pc) {
    sub_377 = v_559;
  } else {
    sub_377 = v_560;
  };
  if (controller_cleaner) {
    v_561 = sub_377;
    sub_376 = false;
  } else {
    v_561 = false;
    sub_376 = sub_377;
  };
  if (controller_ck_37_1) {
    sub_375 = v_561;
  } else {
    sub_375 = sub_376;
  };
  sub_374 = sub_375;
  if (controller_v_277) {
    v_567 = false;
  } else {
    v_567 = sub_374;
  };
  if (controller_v_276) {
    v_568 = v_567;
  } else {
    v_568 = sub_374;
  };
  if (controller_v_277) {
    sub_373 = sub_374;
  } else {
    sub_373 = false;
  };
  if (controller_c_air_2) {
    v_569 = sub_373;
  } else {
    v_569 = v_568;
  };
  if (controller_v_276) {
    sub_381 = false;
  } else {
    sub_381 = sub_373;
  };
  if (controller_c_air_1) {
    v_570 = v_569;
  } else {
    v_570 = sub_381;
  };
  if (controller_c_closet) {
    sub_366 = v_566;
  } else {
    sub_366 = v_570;
  };
  if (controller_blind_failed_recovered) {
    v_571 = sub_140;
    sub_365 = sub_366;
  } else {
    v_571 = sub_366;
    sub_365 = sub_140;
  };
  if (controller_ck_66_1) {
    sub_364 = v_571;
  } else {
    sub_364 = sub_365;
  };
  sub_382 = sub_366;
  if (controller_ck_64_1) {
    v_572 = sub_382;
  } else {
    v_572 = sub_364;
  };
  if (controller_blind_switch) {
    sub_363 = v_572;
  } else {
    sub_363 = sub_382;
  };
  if (controller_change_shift) {
    v_549 = false;
    sub_390 = sub_369;
  } else {
    v_549 = sub_369;
    sub_390 = false;
  };
  if (controller_ck_1) {
    sub_389 = v_549;
  } else {
    sub_389 = sub_390;
  };
  if (controller_v_277) {
    sub_388 = false;
  } else {
    sub_388 = sub_389;
  };
  if (controller_v_276) {
    v_550 = sub_388;
  } else {
    v_550 = false;
  };
  if (controller_c_air_2) {
    v_551 = v_550;
  } else {
    v_551 = false;
  };
  if (controller_v_277) {
    v_548 = sub_389;
  } else {
    v_548 = false;
  };
  if (controller_v_276) {
    sub_391 = v_548;
  } else {
    sub_391 = sub_388;
  };
  if (controller_c_air_1) {
    v_552 = v_551;
  } else {
    v_552 = sub_391;
  };
  if (controller_change_shift) {
    v_547 = false;
    sub_394 = sub_375;
  } else {
    v_547 = sub_375;
    sub_394 = false;
  };
  if (controller_ck_1) {
    sub_393 = v_547;
  } else {
    sub_393 = sub_394;
  };
  if (controller_v_277) {
    v_553 = false;
  } else {
    v_553 = sub_393;
  };
  if (controller_v_276) {
    v_554 = v_553;
  } else {
    v_554 = sub_393;
  };
  if (controller_v_277) {
    sub_392 = sub_393;
  } else {
    sub_392 = false;
  };
  if (controller_c_air_2) {
    v_555 = sub_392;
  } else {
    v_555 = v_554;
  };
  if (controller_v_276) {
    sub_395 = false;
  } else {
    sub_395 = sub_392;
  };
  if (controller_c_air_1) {
    v_556 = v_555;
  } else {
    v_556 = sub_395;
  };
  if (controller_c_closet) {
    sub_387 = v_552;
  } else {
    sub_387 = v_556;
  };
  if (controller_blind_failed_recovered) {
    v_557 = sub_387;
    sub_386 = false;
  } else {
    v_557 = false;
    sub_386 = sub_387;
  };
  if (controller_ck_66_1) {
    sub_385 = v_557;
  } else {
    sub_385 = sub_386;
  };
  if (controller_ck_64_1) {
    v_558 = sub_385;
  } else {
    v_558 = sub_158;
  };
  if (controller_blind_switch) {
    sub_384 = v_558;
  } else {
    sub_384 = sub_385;
  };
  sub_396 = sub_382;
  if (controller_ck_59_1) {
    sub_383 = sub_396;
  } else {
    sub_383 = sub_384;
  };
  if (controller_light_failed_recovered) {
    v_573 = sub_383;
    sub_362 = sub_363;
  } else {
    v_573 = sub_363;
    sub_362 = sub_383;
  };
  if (controller_ck_61_1) {
    v_574 = v_573;
  } else {
    v_574 = sub_362;
  };
  if (controller_light_failed_recovered) {
    v = sub_396;
    sub_398 = sub_363;
  } else {
    v = sub_363;
    sub_398 = sub_396;
  };
  if (controller_ck_61_1) {
    sub_397 = v;
  } else {
    sub_397 = sub_398;
  };
  if (controller_light_switch) {
    v_575 = v_574;
  } else {
    v_575 = sub_397;
  };
  if (controller_c_light_1) {
    sub_361 = v_575;
  } else {
    sub_361 = sub_397;
  };
  if (controller_air_failed_recovered) {
    v_589 = sub_361;
    sub_307 = sub_308;
  } else {
    v_589 = sub_308;
    sub_307 = sub_361;
  };
  if (controller_ck_51_1) {
    sub_306 = v_589;
  } else {
    sub_306 = sub_307;
  };
  if (controller_worker) {
    v_721 = sub_306;
    sub_170 = sub_171;
  } else {
    v_721 = sub_171;
    sub_170 = sub_306;
  };
  if (controller_ck_35_1) {
    v_722 = v_721;
  } else {
    v_722 = sub_170;
  };
  if (p_controller_c_blind_1) {
    sub_0 = v_722;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_blind_1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_light_1_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered,
  int controller_door_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_20, int controller_ck_35_1, int controller_pnr_19,
  int controller_ck_37_1, int controller_pnr_18, int controller_ck_39_1,
  int controller_pnr_17, int controller_ck_41_1, int controller_pnr_16,
  int controller_ck_44_1, int controller_pnr_15, int controller_ck_46_1,
  int controller_pnr_14, int controller_v_277, int controller_v_276,
  int controller_pnr_13, int controller_ck_51_1, int controller_pnr_12,
  int controller_ck_54_1, int controller_pnr_11, int controller_ck_56_1,
  int controller_pnr_10, int controller_ck_59_1, int controller_pnr_9,
  int controller_ck_61_1, int controller_pnr_8, int controller_ck_64_1,
  int controller_pnr_7, int controller_ck_66_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_1_out* _out) {
  
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
  sub_21 = false;
  sub_23 = (controller_c_door&&false);
  v_817 = !(controller_c_door);
  sub_24 = (v_817&&false);
  if (controller_ck_44_1) {
    sub_22 = sub_24;
  } else {
    sub_22 = sub_23;
  };
  if (controller_door_failed_recovered) {
    v_818 = sub_22;
    sub_20 = sub_21;
  } else {
    v_818 = sub_21;
    sub_20 = sub_22;
  };
  if (controller_ck_46_1) {
    sub_19 = v_818;
  } else {
    sub_19 = sub_20;
  };
  if (controller_window_failed_recovered) {
    v_819 = false;
    sub_25 = sub_19;
  } else {
    v_819 = sub_19;
    sub_25 = false;
  };
  if (controller_ck_56_1) {
    v_820 = v_819;
  } else {
    v_820 = sub_25;
  };
  if (controller_c_window) {
    sub_18 = sub_19;
  } else {
    sub_18 = v_820;
  };
  if (controller_ck_39_1) {
    sub_17 = sub_18;
    sub_26 = false;
  } else {
    sub_17 = false;
    sub_26 = sub_18;
  };
  if (controller_c_pc) {
    sub_16 = sub_17;
  } else {
    sub_16 = sub_26;
  };
  if (controller_cleaner) {
    sub_15 = sub_16;
    sub_27 = false;
  } else {
    sub_15 = false;
    sub_27 = sub_16;
  };
  if (controller_ck_37_1) {
    sub_14 = sub_27;
  } else {
    sub_14 = sub_15;
  };
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (controller_ck_44_1) {
    sub_39 = sub_23;
  } else {
    sub_39 = sub_24;
  };
  if (controller_door_failed_recovered) {
    v_813 = sub_39;
    sub_38 = sub_21;
  } else {
    v_813 = sub_21;
    sub_38 = sub_39;
  };
  if (controller_ck_46_1) {
    sub_37 = v_813;
  } else {
    sub_37 = sub_38;
  };
  sub_36 = sub_37;
  if (controller_door_failed_recovered) {
    v_812 = false;
    sub_42 = sub_21;
  } else {
    v_812 = sub_21;
    sub_42 = false;
  };
  if (controller_ck_46_1) {
    sub_41 = v_812;
  } else {
    sub_41 = sub_42;
  };
  if (controller_window_failed_recovered) {
    v_814 = sub_41;
    sub_40 = sub_37;
  } else {
    v_814 = sub_37;
    sub_40 = sub_41;
  };
  if (controller_ck_56_1) {
    v_815 = v_814;
  } else {
    v_815 = sub_40;
  };
  if (controller_c_window) {
    sub_35 = sub_36;
  } else {
    sub_35 = v_815;
  };
  if (controller_ck_39_1) {
    sub_34 = sub_35;
    sub_43 = false;
  } else {
    sub_34 = false;
    sub_43 = sub_35;
  };
  if (controller_c_pc) {
    sub_33 = sub_34;
  } else {
    sub_33 = sub_43;
  };
  if (controller_cleaner) {
    v_816 = sub_33;
    sub_32 = false;
  } else {
    v_816 = false;
    sub_32 = sub_33;
  };
  if (controller_ck_37_1) {
    sub_31 = v_816;
  } else {
    sub_31 = sub_32;
  };
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  if (controller_c_closet) {
    sub_10 = sub_11;
  } else {
    sub_10 = sub_28;
  };
  if (controller_window_failed_recovered) {
    v_809 = false;
    sub_52 = sub_37;
  } else {
    v_809 = sub_37;
    sub_52 = false;
  };
  if (controller_ck_56_1) {
    v_810 = v_809;
  } else {
    v_810 = sub_52;
  };
  if (controller_c_window) {
    sub_51 = v_810;
  } else {
    sub_51 = sub_36;
  };
  if (controller_ck_39_1) {
    sub_50 = sub_51;
    sub_53 = false;
  } else {
    sub_50 = false;
    sub_53 = sub_51;
  };
  if (controller_c_pc) {
    sub_49 = sub_50;
  } else {
    sub_49 = sub_53;
  };
  if (controller_cleaner) {
    v_811 = sub_49;
    sub_48 = false;
  } else {
    v_811 = false;
    sub_48 = sub_49;
  };
  if (controller_ck_37_1) {
    sub_47 = v_811;
  } else {
    sub_47 = sub_48;
  };
  sub_46 = sub_47;
  sub_45 = sub_46;
  if (controller_c_closet) {
    sub_44 = sub_11;
  } else {
    sub_44 = sub_45;
  };
  if (controller_blind_failed_recovered) {
    v_821 = sub_44;
    sub_9 = sub_10;
  } else {
    v_821 = sub_10;
    sub_9 = sub_44;
  };
  if (controller_ck_66_1) {
    sub_8 = v_821;
  } else {
    sub_8 = sub_9;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (controller_v_277) {
    v_806 = sub_13;
  } else {
    v_806 = false;
  };
  if (controller_v_276) {
    v_807 = v_806;
  } else {
    v_807 = false;
  };
  if (controller_v_277) {
    sub_60 = false;
  } else {
    sub_60 = sub_13;
  };
  if (controller_v_276) {
    v_805 = false;
  } else {
    v_805 = sub_60;
  };
  if (controller_c_air_2) {
    v_808 = v_805;
  } else {
    v_808 = v_807;
  };
  if (controller_v_276) {
    sub_61 = sub_60;
  } else {
    sub_61 = false;
  };
  if (controller_c_air_1) {
    sub_59 = v_808;
  } else {
    sub_59 = sub_61;
  };
  if (controller_ck_37_1) {
    sub_65 = sub_15;
  } else {
    sub_65 = sub_27;
  };
  sub_64 = sub_65;
  if (controller_v_277) {
    sub_63 = false;
  } else {
    sub_63 = sub_64;
  };
  if (controller_v_276) {
    v_803 = sub_63;
  } else {
    v_803 = false;
  };
  if (controller_c_air_2) {
    v_804 = v_803;
  } else {
    v_804 = false;
  };
  if (controller_v_277) {
    v_802 = sub_64;
  } else {
    v_802 = false;
  };
  if (controller_v_276) {
    sub_66 = v_802;
  } else {
    sub_66 = sub_63;
  };
  if (controller_c_air_1) {
    sub_62 = v_804;
  } else {
    sub_62 = sub_66;
  };
  if (controller_c_closet) {
    sub_58 = sub_59;
  } else {
    sub_58 = sub_62;
  };
  sub_57 = sub_58;
  sub_56 = sub_57;
  sub_55 = sub_56;
  sub_54 = sub_55;
  if (controller_air_failed_recovered) {
    v_822 = sub_54;
    sub_4 = sub_5;
  } else {
    v_822 = sub_5;
    sub_4 = sub_54;
  };
  if (controller_ck_51_1) {
    sub_3 = v_822;
  } else {
    sub_3 = sub_4;
  };
  if (controller_c_pc) {
    sub_79 = sub_43;
  } else {
    sub_79 = sub_34;
  };
  if (controller_cleaner) {
    sub_78 = sub_79;
    sub_80 = false;
  } else {
    sub_78 = false;
    sub_80 = sub_79;
  };
  if (controller_ck_37_1) {
    sub_77 = sub_80;
  } else {
    sub_77 = sub_78;
  };
  sub_76 = sub_77;
  sub_75 = sub_76;
  if (controller_ck_37_1) {
    sub_83 = sub_78;
  } else {
    sub_83 = sub_80;
  };
  sub_82 = sub_83;
  sub_81 = sub_82;
  if (controller_c_closet) {
    sub_74 = sub_75;
  } else {
    sub_74 = sub_81;
  };
  if (controller_c_pc) {
    sub_89 = sub_53;
  } else {
    sub_89 = sub_50;
  };
  if (controller_cleaner) {
    sub_88 = sub_89;
    sub_90 = false;
  } else {
    sub_88 = false;
    sub_90 = sub_89;
  };
  if (controller_ck_37_1) {
    sub_87 = sub_90;
  } else {
    sub_87 = sub_88;
  };
  sub_86 = sub_87;
  sub_85 = sub_86;
  if (controller_ck_37_1) {
    sub_93 = sub_88;
  } else {
    sub_93 = sub_90;
  };
  sub_92 = sub_93;
  sub_91 = sub_92;
  if (controller_c_closet) {
    sub_84 = sub_85;
  } else {
    sub_84 = sub_91;
  };
  if (controller_blind_failed_recovered) {
    v_800 = sub_84;
    sub_73 = sub_74;
  } else {
    v_800 = sub_74;
    sub_73 = sub_84;
  };
  if (controller_ck_66_1) {
    sub_72 = v_800;
  } else {
    sub_72 = sub_73;
  };
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  if (controller_c_pc) {
    sub_103 = sub_26;
  } else {
    sub_103 = sub_17;
  };
  if (controller_cleaner) {
    v_792 = false;
    sub_102 = sub_103;
  } else {
    v_792 = sub_103;
    sub_102 = false;
  };
  if (controller_ck_37_1) {
    sub_101 = v_792;
  } else {
    sub_101 = sub_102;
  };
  sub_100 = sub_101;
  if (controller_v_277) {
    sub_99 = false;
  } else {
    sub_99 = sub_100;
  };
  if (controller_v_276) {
    v_793 = sub_99;
  } else {
    v_793 = false;
  };
  if (controller_c_air_2) {
    v_794 = v_793;
  } else {
    v_794 = false;
  };
  if (controller_v_277) {
    v_791 = sub_100;
  } else {
    v_791 = false;
  };
  if (controller_v_276) {
    sub_104 = v_791;
  } else {
    sub_104 = sub_99;
  };
  if (controller_c_air_1) {
    v_795 = v_794;
  } else {
    v_795 = sub_104;
  };
  sub_112 = sub_21;
  sub_111 = sub_112;
  sub_110 = sub_111;
  if (controller_ck_39_1) {
    v_789 = sub_110;
    v_788 = false;
  } else {
    v_789 = false;
    v_788 = sub_110;
  };
  if (controller_c_pc) {
    sub_109 = v_788;
  } else {
    sub_109 = v_789;
  };
  if (controller_cleaner) {
    v_790 = sub_109;
    sub_108 = false;
  } else {
    v_790 = false;
    sub_108 = sub_109;
  };
  if (controller_ck_37_1) {
    sub_107 = v_790;
  } else {
    sub_107 = sub_108;
  };
  sub_106 = sub_107;
  if (controller_v_277) {
    v_796 = false;
  } else {
    v_796 = sub_106;
  };
  if (controller_v_276) {
    v_797 = v_796;
  } else {
    v_797 = sub_106;
  };
  if (controller_v_277) {
    sub_105 = sub_106;
  } else {
    sub_105 = false;
  };
  if (controller_c_air_2) {
    v_798 = sub_105;
  } else {
    v_798 = v_797;
  };
  if (controller_v_276) {
    sub_113 = false;
  } else {
    sub_113 = sub_105;
  };
  if (controller_c_air_1) {
    v_799 = v_798;
  } else {
    v_799 = sub_113;
  };
  if (controller_c_closet) {
    sub_98 = v_795;
  } else {
    sub_98 = v_799;
  };
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  sub_94 = sub_95;
  if (controller_air_failed_recovered) {
    v_801 = sub_94;
    sub_68 = sub_69;
  } else {
    v_801 = sub_69;
    sub_68 = sub_94;
  };
  if (controller_ck_51_1) {
    sub_67 = v_801;
  } else {
    sub_67 = sub_68;
  };
  if (controller_worker) {
    v_823 = sub_67;
    sub_2 = sub_3;
  } else {
    v_823 = sub_3;
    sub_2 = sub_67;
  };
  if (controller_ck_35_1) {
    sub_1 = v_823;
  } else {
    sub_1 = sub_2;
  };
  sub_133 = true;
  v_780 = !(controller_c_door);
  sub_135 = (v_780||false);
  sub_136 = (controller_c_door||false);
  if (controller_ck_44_1) {
    sub_134 = sub_136;
  } else {
    sub_134 = sub_135;
  };
  if (controller_door_failed_recovered) {
    v_781 = sub_134;
    sub_132 = sub_133;
  } else {
    v_781 = sub_133;
    sub_132 = sub_134;
  };
  if (controller_ck_46_1) {
    sub_131 = v_781;
  } else {
    sub_131 = sub_132;
  };
  if (controller_window_failed_recovered) {
    v_782 = false;
    sub_137 = sub_131;
  } else {
    v_782 = sub_131;
    sub_137 = false;
  };
  if (controller_ck_56_1) {
    v_783 = v_782;
  } else {
    v_783 = sub_137;
  };
  if (controller_c_window) {
    sub_130 = sub_131;
  } else {
    sub_130 = v_783;
  };
  if (controller_ck_39_1) {
    sub_129 = sub_130;
    sub_138 = false;
  } else {
    sub_129 = false;
    sub_138 = sub_130;
  };
  if (controller_c_pc) {
    sub_128 = sub_129;
  } else {
    sub_128 = sub_138;
  };
  if (controller_cleaner) {
    sub_127 = sub_128;
    sub_139 = false;
  } else {
    sub_127 = false;
    sub_139 = sub_128;
  };
  if (controller_ck_37_1) {
    sub_126 = sub_139;
  } else {
    sub_126 = sub_127;
  };
  sub_125 = sub_126;
  sub_124 = sub_125;
  sub_123 = sub_124;
  if (controller_ck_44_1) {
    sub_151 = sub_135;
  } else {
    sub_151 = sub_136;
  };
  if (controller_door_failed_recovered) {
    v_776 = sub_151;
    sub_150 = sub_133;
  } else {
    v_776 = sub_133;
    sub_150 = sub_151;
  };
  if (controller_ck_46_1) {
    sub_149 = v_776;
  } else {
    sub_149 = sub_150;
  };
  sub_148 = sub_149;
  if (controller_door_failed_recovered) {
    v_775 = false;
    sub_154 = sub_133;
  } else {
    v_775 = sub_133;
    sub_154 = false;
  };
  if (controller_ck_46_1) {
    sub_153 = v_775;
  } else {
    sub_153 = sub_154;
  };
  if (controller_window_failed_recovered) {
    v_777 = sub_153;
    sub_152 = sub_149;
  } else {
    v_777 = sub_149;
    sub_152 = sub_153;
  };
  if (controller_ck_56_1) {
    v_778 = v_777;
  } else {
    v_778 = sub_152;
  };
  if (controller_c_window) {
    sub_147 = sub_148;
  } else {
    sub_147 = v_778;
  };
  if (controller_ck_39_1) {
    sub_146 = sub_147;
    sub_155 = false;
  } else {
    sub_146 = false;
    sub_155 = sub_147;
  };
  if (controller_c_pc) {
    sub_145 = sub_146;
  } else {
    sub_145 = sub_155;
  };
  if (controller_cleaner) {
    v_779 = sub_145;
    sub_144 = false;
  } else {
    v_779 = false;
    sub_144 = sub_145;
  };
  if (controller_ck_37_1) {
    sub_143 = v_779;
  } else {
    sub_143 = sub_144;
  };
  sub_142 = sub_143;
  sub_141 = sub_142;
  sub_140 = sub_141;
  if (controller_c_closet) {
    sub_122 = sub_123;
  } else {
    sub_122 = sub_140;
  };
  if (controller_window_failed_recovered) {
    v_772 = false;
    sub_165 = sub_149;
  } else {
    v_772 = sub_149;
    sub_165 = false;
  };
  if (controller_ck_56_1) {
    v_773 = v_772;
  } else {
    v_773 = sub_165;
  };
  if (controller_c_window) {
    sub_164 = v_773;
  } else {
    sub_164 = sub_148;
  };
  if (controller_ck_39_1) {
    sub_163 = sub_164;
    sub_166 = false;
  } else {
    sub_163 = false;
    sub_166 = sub_164;
  };
  if (controller_c_pc) {
    sub_162 = sub_163;
  } else {
    sub_162 = sub_166;
  };
  if (controller_cleaner) {
    v_774 = sub_162;
    sub_161 = false;
  } else {
    v_774 = false;
    sub_161 = sub_162;
  };
  if (controller_ck_37_1) {
    sub_160 = v_774;
  } else {
    sub_160 = sub_161;
  };
  sub_159 = sub_160;
  sub_158 = sub_159;
  sub_157 = sub_158;
  if (controller_c_closet) {
    sub_156 = sub_123;
  } else {
    sub_156 = sub_157;
  };
  if (controller_blind_failed_recovered) {
    v_784 = sub_156;
    sub_121 = sub_122;
  } else {
    v_784 = sub_122;
    sub_121 = sub_156;
  };
  if (controller_ck_66_1) {
    sub_120 = v_784;
  } else {
    sub_120 = sub_121;
  };
  sub_119 = sub_120;
  if (controller_c_closet) {
    sub_171 = sub_123;
  } else {
    sub_171 = sub_28;
  };
  if (controller_change_shift) {
    v_770 = sub_47;
    sub_175 = sub_160;
  } else {
    v_770 = sub_160;
    sub_175 = sub_47;
  };
  if (controller_ck_1) {
    sub_174 = v_770;
  } else {
    sub_174 = sub_175;
  };
  sub_173 = sub_174;
  if (controller_c_closet) {
    sub_172 = sub_123;
  } else {
    sub_172 = sub_173;
  };
  if (controller_blind_failed_recovered) {
    v_771 = sub_172;
    sub_170 = sub_171;
  } else {
    v_771 = sub_171;
    sub_170 = sub_172;
  };
  if (controller_ck_66_1) {
    sub_169 = v_771;
  } else {
    sub_169 = sub_170;
  };
  sub_168 = sub_169;
  if (controller_c_closet) {
    sub_178 = sub_11;
    sub_179 = sub_11;
  } else {
    sub_178 = sub_140;
    sub_179 = sub_157;
  };
  if (controller_blind_failed_recovered) {
    v_769 = sub_179;
    sub_177 = sub_178;
  } else {
    v_769 = sub_178;
    sub_177 = sub_179;
  };
  if (controller_ck_66_1) {
    sub_176 = v_769;
  } else {
    sub_176 = sub_177;
  };
  if (controller_ck_59_1) {
    sub_167 = sub_176;
  } else {
    sub_167 = sub_168;
  };
  if (controller_light_failed_recovered) {
    v_785 = sub_167;
    sub_118 = sub_119;
  } else {
    v_785 = sub_119;
    sub_118 = sub_167;
  };
  if (controller_ck_61_1) {
    v_786 = v_785;
  } else {
    v_786 = sub_118;
  };
  if (controller_light_switch) {
    sub_117 = v_786;
  } else {
    sub_117 = sub_119;
  };
  if (controller_v_277) {
    v_764 = sub_125;
  } else {
    v_764 = false;
  };
  if (controller_v_276) {
    v_765 = v_764;
  } else {
    v_765 = false;
  };
  if (controller_v_277) {
    sub_186 = false;
  } else {
    sub_186 = sub_125;
  };
  if (controller_v_276) {
    v_763 = false;
  } else {
    v_763 = sub_186;
  };
  if (controller_c_air_2) {
    v_766 = v_763;
  } else {
    v_766 = v_765;
  };
  if (controller_v_276) {
    sub_187 = sub_186;
  } else {
    sub_187 = false;
  };
  if (controller_c_air_1) {
    sub_185 = v_766;
  } else {
    sub_185 = sub_187;
  };
  if (controller_ck_37_1) {
    sub_191 = sub_127;
  } else {
    sub_191 = sub_139;
  };
  sub_190 = sub_191;
  if (controller_v_277) {
    sub_189 = false;
  } else {
    sub_189 = sub_190;
  };
  if (controller_v_276) {
    v_761 = sub_189;
  } else {
    v_761 = false;
  };
  if (controller_c_air_2) {
    v_762 = v_761;
  } else {
    v_762 = false;
  };
  if (controller_v_277) {
    v_760 = sub_190;
  } else {
    v_760 = false;
  };
  if (controller_v_276) {
    sub_192 = v_760;
  } else {
    sub_192 = sub_189;
  };
  if (controller_c_air_1) {
    sub_188 = v_762;
  } else {
    sub_188 = sub_192;
  };
  if (controller_c_closet) {
    sub_184 = sub_185;
  } else {
    sub_184 = sub_188;
  };
  sub_183 = sub_184;
  sub_182 = sub_183;
  if (controller_c_closet) {
    sub_197 = sub_185;
  } else {
    sub_197 = sub_62;
  };
  if (controller_change_shift) {
    v_755 = sub_65;
    sub_201 = sub_191;
  } else {
    v_755 = sub_191;
    sub_201 = sub_65;
  };
  if (controller_ck_1) {
    sub_200 = v_755;
  } else {
    sub_200 = sub_201;
  };
  if (controller_v_277) {
    sub_199 = false;
  } else {
    sub_199 = sub_200;
  };
  if (controller_v_276) {
    v_756 = sub_199;
  } else {
    v_756 = false;
  };
  if (controller_c_air_2) {
    v_757 = v_756;
  } else {
    v_757 = false;
  };
  if (controller_v_277) {
    v_754 = sub_200;
  } else {
    v_754 = false;
  };
  if (controller_v_276) {
    sub_202 = v_754;
  } else {
    sub_202 = sub_199;
  };
  if (controller_c_air_1) {
    v_758 = v_757;
  } else {
    v_758 = sub_202;
  };
  if (controller_c_closet) {
    sub_198 = sub_185;
  } else {
    sub_198 = v_758;
  };
  if (controller_blind_failed_recovered) {
    v_759 = sub_198;
    sub_196 = sub_197;
  } else {
    v_759 = sub_197;
    sub_196 = sub_198;
  };
  if (controller_ck_66_1) {
    sub_195 = v_759;
  } else {
    sub_195 = sub_196;
  };
  sub_194 = sub_195;
  if (controller_c_closet) {
    sub_204 = sub_59;
  } else {
    sub_204 = sub_188;
  };
  sub_203 = sub_204;
  if (controller_ck_59_1) {
    sub_193 = sub_203;
  } else {
    sub_193 = sub_194;
  };
  if (controller_light_failed_recovered) {
    v_767 = sub_193;
    sub_181 = sub_182;
  } else {
    v_767 = sub_182;
    sub_181 = sub_193;
  };
  if (controller_ck_61_1) {
    v_768 = v_767;
  } else {
    v_768 = sub_181;
  };
  if (controller_light_switch) {
    sub_180 = v_768;
  } else {
    sub_180 = sub_182;
  };
  if (controller_air_failed_recovered) {
    v_787 = sub_180;
    sub_116 = sub_117;
  } else {
    v_787 = sub_117;
    sub_116 = sub_180;
  };
  if (controller_ck_51_1) {
    sub_115 = v_787;
  } else {
    sub_115 = sub_116;
  };
  if (controller_c_pc) {
    sub_217 = sub_155;
  } else {
    sub_217 = sub_146;
  };
  if (controller_cleaner) {
    sub_216 = sub_217;
    sub_218 = false;
  } else {
    sub_216 = false;
    sub_218 = sub_217;
  };
  if (controller_ck_37_1) {
    sub_215 = sub_218;
  } else {
    sub_215 = sub_216;
  };
  sub_214 = sub_215;
  sub_213 = sub_214;
  if (controller_ck_37_1) {
    sub_221 = sub_216;
  } else {
    sub_221 = sub_218;
  };
  sub_220 = sub_221;
  sub_219 = sub_220;
  if (controller_c_closet) {
    sub_212 = sub_213;
  } else {
    sub_212 = sub_219;
  };
  if (controller_c_pc) {
    sub_227 = sub_166;
  } else {
    sub_227 = sub_163;
  };
  if (controller_cleaner) {
    sub_226 = sub_227;
    sub_228 = false;
  } else {
    sub_226 = false;
    sub_228 = sub_227;
  };
  if (controller_ck_37_1) {
    sub_225 = sub_228;
  } else {
    sub_225 = sub_226;
  };
  sub_224 = sub_225;
  sub_223 = sub_224;
  if (controller_ck_37_1) {
    sub_231 = sub_226;
  } else {
    sub_231 = sub_228;
  };
  sub_230 = sub_231;
  sub_229 = sub_230;
  if (controller_c_closet) {
    sub_222 = sub_223;
  } else {
    sub_222 = sub_229;
  };
  if (controller_blind_failed_recovered) {
    v_750 = sub_222;
    sub_211 = sub_212;
  } else {
    v_750 = sub_212;
    sub_211 = sub_222;
  };
  if (controller_ck_66_1) {
    sub_210 = v_750;
  } else {
    sub_210 = sub_211;
  };
  sub_209 = sub_210;
  if (controller_change_shift) {
    v_748 = sub_87;
    sub_239 = sub_225;
  } else {
    v_748 = sub_225;
    sub_239 = sub_87;
  };
  if (controller_ck_1) {
    sub_238 = v_748;
  } else {
    sub_238 = sub_239;
  };
  sub_237 = sub_238;
  if (controller_change_shift) {
    v_747 = sub_93;
    sub_242 = sub_231;
  } else {
    v_747 = sub_231;
    sub_242 = sub_93;
  };
  if (controller_ck_1) {
    sub_241 = v_747;
  } else {
    sub_241 = sub_242;
  };
  sub_240 = sub_241;
  if (controller_c_closet) {
    sub_236 = sub_237;
  } else {
    sub_236 = sub_240;
  };
  if (controller_blind_failed_recovered) {
    v_749 = sub_236;
    sub_235 = sub_74;
  } else {
    v_749 = sub_74;
    sub_235 = sub_236;
  };
  if (controller_ck_66_1) {
    sub_234 = v_749;
  } else {
    sub_234 = sub_235;
  };
  sub_233 = sub_234;
  if (controller_ck_59_1) {
    sub_232 = sub_209;
  } else {
    sub_232 = sub_233;
  };
  if (controller_light_failed_recovered) {
    v_751 = sub_232;
    sub_208 = sub_209;
  } else {
    v_751 = sub_209;
    sub_208 = sub_232;
  };
  if (controller_ck_61_1) {
    v_752 = v_751;
  } else {
    v_752 = sub_208;
  };
  if (controller_light_switch) {
    sub_207 = v_752;
  } else {
    sub_207 = sub_209;
  };
  if (controller_c_pc) {
    sub_252 = sub_138;
  } else {
    sub_252 = sub_129;
  };
  if (controller_cleaner) {
    v_737 = false;
    sub_251 = sub_252;
  } else {
    v_737 = sub_252;
    sub_251 = false;
  };
  if (controller_ck_37_1) {
    sub_250 = v_737;
  } else {
    sub_250 = sub_251;
  };
  sub_249 = sub_250;
  if (controller_v_277) {
    sub_248 = false;
  } else {
    sub_248 = sub_249;
  };
  if (controller_v_276) {
    v_738 = sub_248;
  } else {
    v_738 = false;
  };
  if (controller_c_air_2) {
    v_739 = v_738;
  } else {
    v_739 = false;
  };
  if (controller_v_277) {
    v_736 = sub_249;
  } else {
    v_736 = false;
  };
  if (controller_v_276) {
    sub_253 = v_736;
  } else {
    sub_253 = sub_248;
  };
  if (controller_c_air_1) {
    v_740 = v_739;
  } else {
    v_740 = sub_253;
  };
  sub_261 = sub_133;
  sub_260 = sub_261;
  sub_259 = sub_260;
  if (controller_ck_39_1) {
    v_734 = sub_259;
    v_733 = false;
  } else {
    v_734 = false;
    v_733 = sub_259;
  };
  if (controller_c_pc) {
    sub_258 = v_733;
  } else {
    sub_258 = v_734;
  };
  if (controller_cleaner) {
    v_735 = sub_258;
    sub_257 = false;
  } else {
    v_735 = false;
    sub_257 = sub_258;
  };
  if (controller_ck_37_1) {
    sub_256 = v_735;
  } else {
    sub_256 = sub_257;
  };
  sub_255 = sub_256;
  if (controller_v_277) {
    v_741 = false;
  } else {
    v_741 = sub_255;
  };
  if (controller_v_276) {
    v_742 = v_741;
  } else {
    v_742 = sub_255;
  };
  if (controller_v_277) {
    sub_254 = sub_255;
  } else {
    sub_254 = false;
  };
  if (controller_c_air_2) {
    v_743 = sub_254;
  } else {
    v_743 = v_742;
  };
  if (controller_v_276) {
    sub_262 = false;
  } else {
    sub_262 = sub_254;
  };
  if (controller_c_air_1) {
    v_744 = v_743;
  } else {
    v_744 = sub_262;
  };
  if (controller_c_closet) {
    sub_247 = v_740;
  } else {
    sub_247 = v_744;
  };
  sub_246 = sub_247;
  sub_245 = sub_246;
  if (controller_change_shift) {
    v_724 = sub_101;
    sub_270 = sub_250;
  } else {
    v_724 = sub_250;
    sub_270 = sub_101;
  };
  if (controller_ck_1) {
    sub_269 = v_724;
  } else {
    sub_269 = sub_270;
  };
  if (controller_v_277) {
    sub_268 = false;
  } else {
    sub_268 = sub_269;
  };
  if (controller_v_276) {
    v_725 = sub_268;
  } else {
    v_725 = false;
  };
  if (controller_c_air_2) {
    v_726 = v_725;
  } else {
    v_726 = false;
  };
  if (controller_v_277) {
    v_723 = sub_269;
  } else {
    v_723 = false;
  };
  if (controller_v_276) {
    sub_271 = v_723;
  } else {
    sub_271 = sub_268;
  };
  if (controller_c_air_1) {
    v_727 = v_726;
  } else {
    v_727 = sub_271;
  };
  if (controller_change_shift) {
    v = sub_107;
    sub_274 = sub_256;
  } else {
    v = sub_256;
    sub_274 = sub_107;
  };
  if (controller_ck_1) {
    sub_273 = v;
  } else {
    sub_273 = sub_274;
  };
  if (controller_v_277) {
    v_728 = false;
  } else {
    v_728 = sub_273;
  };
  if (controller_v_276) {
    v_729 = v_728;
  } else {
    v_729 = sub_273;
  };
  if (controller_v_277) {
    sub_272 = sub_273;
  } else {
    sub_272 = false;
  };
  if (controller_c_air_2) {
    v_730 = sub_272;
  } else {
    v_730 = v_729;
  };
  if (controller_v_276) {
    sub_275 = false;
  } else {
    sub_275 = sub_272;
  };
  if (controller_c_air_1) {
    v_731 = v_730;
  } else {
    v_731 = sub_275;
  };
  if (controller_c_closet) {
    sub_267 = v_727;
  } else {
    sub_267 = v_731;
  };
  if (controller_blind_failed_recovered) {
    v_732 = sub_267;
    sub_266 = sub_98;
  } else {
    v_732 = sub_98;
    sub_266 = sub_267;
  };
  if (controller_ck_66_1) {
    sub_265 = v_732;
  } else {
    sub_265 = sub_266;
  };
  sub_264 = sub_265;
  if (controller_ck_59_1) {
    sub_263 = sub_245;
  } else {
    sub_263 = sub_264;
  };
  if (controller_light_failed_recovered) {
    v_745 = sub_263;
    sub_244 = sub_245;
  } else {
    v_745 = sub_245;
    sub_244 = sub_263;
  };
  if (controller_ck_61_1) {
    v_746 = v_745;
  } else {
    v_746 = sub_244;
  };
  if (controller_light_switch) {
    sub_243 = v_746;
  } else {
    sub_243 = sub_245;
  };
  if (controller_air_failed_recovered) {
    v_753 = sub_243;
    sub_206 = sub_207;
  } else {
    v_753 = sub_207;
    sub_206 = sub_243;
  };
  if (controller_ck_51_1) {
    sub_205 = v_753;
  } else {
    sub_205 = sub_206;
  };
  if (controller_worker) {
    v_824 = sub_205;
    sub_114 = sub_115;
  } else {
    v_824 = sub_115;
    sub_114 = sub_205;
  };
  if (controller_ck_35_1) {
    v_825 = v_824;
  } else {
    v_825 = sub_114;
  };
  if (p_controller_c_light_1) {
    sub_0 = v_825;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_light_1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_closet_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered,
  int controller_door_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_20, int controller_ck_35_1, int controller_pnr_19,
  int controller_ck_37_1, int controller_pnr_18, int controller_ck_39_1,
  int controller_pnr_17, int controller_ck_41_1, int controller_pnr_16,
  int controller_ck_44_1, int controller_pnr_15, int controller_ck_46_1,
  int controller_pnr_14, int controller_v_277, int controller_v_276,
  int controller_pnr_13, int controller_ck_51_1, int controller_pnr_12,
  int controller_ck_54_1, int controller_pnr_11, int controller_ck_56_1,
  int controller_pnr_10, int controller_ck_59_1, int controller_pnr_9,
  int controller_ck_61_1, int controller_pnr_8, int controller_ck_64_1,
  int controller_pnr_7, int controller_ck_66_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_closet_out* _out) {
  
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
  sub_19 = true;
  v_868 = !(controller_c_door);
  sub_21 = (v_868||false);
  sub_22 = (controller_c_door||false);
  if (controller_ck_44_1) {
    sub_20 = sub_22;
  } else {
    sub_20 = sub_21;
  };
  if (controller_door_failed_recovered) {
    v_869 = sub_20;
    sub_18 = sub_19;
  } else {
    v_869 = sub_19;
    sub_18 = sub_20;
  };
  if (controller_ck_46_1) {
    sub_17 = v_869;
  } else {
    sub_17 = sub_18;
  };
  if (controller_window_failed_recovered) {
    v_870 = false;
    sub_23 = sub_17;
  } else {
    v_870 = sub_17;
    sub_23 = false;
  };
  if (controller_ck_56_1) {
    v_871 = v_870;
  } else {
    v_871 = sub_23;
  };
  if (controller_c_window) {
    sub_16 = sub_17;
  } else {
    sub_16 = v_871;
  };
  if (controller_ck_39_1) {
    sub_15 = sub_16;
    sub_24 = false;
  } else {
    sub_15 = false;
    sub_24 = sub_16;
  };
  if (controller_c_pc) {
    sub_14 = sub_15;
  } else {
    sub_14 = sub_24;
  };
  sub_31 = false;
  v_864 = !(controller_c_door);
  sub_33 = (v_864&&false);
  sub_34 = (controller_c_door&&false);
  if (controller_ck_44_1) {
    sub_32 = sub_34;
  } else {
    sub_32 = sub_33;
  };
  if (controller_door_failed_recovered) {
    v_865 = sub_32;
    sub_30 = sub_31;
  } else {
    v_865 = sub_31;
    sub_30 = sub_32;
  };
  if (controller_ck_46_1) {
    sub_29 = v_865;
  } else {
    sub_29 = sub_30;
  };
  sub_28 = sub_29;
  if (controller_door_failed_recovered) {
    v_863 = false;
    sub_37 = sub_31;
  } else {
    v_863 = sub_31;
    sub_37 = false;
  };
  if (controller_ck_46_1) {
    sub_36 = v_863;
  } else {
    sub_36 = sub_37;
  };
  if (controller_window_failed_recovered) {
    v_866 = sub_36;
    sub_35 = sub_29;
  } else {
    v_866 = sub_29;
    sub_35 = sub_36;
  };
  if (controller_ck_56_1) {
    v_867 = v_866;
  } else {
    v_867 = sub_35;
  };
  if (controller_c_window) {
    sub_27 = sub_28;
  } else {
    sub_27 = v_867;
  };
  if (controller_ck_39_1) {
    sub_26 = sub_27;
    sub_38 = false;
  } else {
    sub_26 = false;
    sub_38 = sub_27;
  };
  if (controller_c_pc) {
    sub_25 = sub_26;
  } else {
    sub_25 = sub_38;
  };
  if (controller_cleaner) {
    v_872 = sub_25;
    sub_13 = sub_14;
  } else {
    v_872 = sub_14;
    sub_13 = sub_25;
  };
  if (controller_ck_37_1) {
    sub_12 = v_872;
  } else {
    sub_12 = sub_13;
  };
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  if (controller_window_failed_recovered) {
    v_860 = false;
    sub_47 = sub_29;
  } else {
    v_860 = sub_29;
    sub_47 = false;
  };
  if (controller_ck_56_1) {
    v_861 = v_860;
  } else {
    v_861 = sub_47;
  };
  if (controller_c_window) {
    sub_46 = v_861;
  } else {
    sub_46 = sub_28;
  };
  if (controller_ck_39_1) {
    sub_45 = sub_46;
    sub_48 = false;
  } else {
    sub_45 = false;
    sub_48 = sub_46;
  };
  if (controller_c_pc) {
    sub_44 = sub_45;
  } else {
    sub_44 = sub_48;
  };
  if (controller_cleaner) {
    v_862 = sub_44;
    sub_43 = sub_14;
  } else {
    v_862 = sub_14;
    sub_43 = sub_44;
  };
  if (controller_ck_37_1) {
    sub_42 = v_862;
  } else {
    sub_42 = sub_43;
  };
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  if (controller_blind_failed_recovered) {
    v_873 = sub_39;
    sub_8 = sub_9;
  } else {
    v_873 = sub_9;
    sub_8 = sub_39;
  };
  if (controller_ck_66_1) {
    sub_7 = v_873;
  } else {
    sub_7 = sub_8;
  };
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  if (controller_cleaner) {
    v_855 = false;
    sub_57 = sub_14;
  } else {
    v_855 = sub_14;
    sub_57 = false;
  };
  if (controller_ck_37_1) {
    sub_56 = v_855;
  } else {
    sub_56 = sub_57;
  };
  sub_55 = sub_56;
  if (controller_v_277) {
    v_857 = sub_55;
  } else {
    v_857 = false;
  };
  if (controller_v_276) {
    v_858 = v_857;
  } else {
    v_858 = false;
  };
  if (controller_v_277) {
    sub_54 = false;
  } else {
    sub_54 = sub_55;
  };
  if (controller_ck_44_1) {
    sub_66 = sub_33;
  } else {
    sub_66 = sub_34;
  };
  if (controller_door_failed_recovered) {
    v_849 = sub_66;
    sub_65 = sub_31;
  } else {
    v_849 = sub_31;
    sub_65 = sub_66;
  };
  if (controller_ck_46_1) {
    sub_64 = v_849;
  } else {
    sub_64 = sub_65;
  };
  if (controller_window_failed_recovered) {
    v_850 = false;
    sub_67 = sub_64;
  } else {
    v_850 = sub_64;
    sub_67 = false;
  };
  if (controller_ck_56_1) {
    v_851 = v_850;
  } else {
    v_851 = sub_67;
  };
  if (controller_c_window) {
    sub_63 = sub_64;
  } else {
    sub_63 = v_851;
  };
  if (controller_ck_39_1) {
    v_853 = false;
    v_852 = sub_63;
  } else {
    v_853 = sub_63;
    v_852 = false;
  };
  if (controller_c_pc) {
    sub_62 = v_852;
  } else {
    sub_62 = v_853;
  };
  if (controller_cleaner) {
    v_854 = sub_62;
    sub_61 = false;
  } else {
    v_854 = false;
    sub_61 = sub_62;
  };
  if (controller_ck_37_1) {
    sub_60 = v_854;
  } else {
    sub_60 = sub_61;
  };
  sub_59 = sub_60;
  if (controller_v_277) {
    sub_58 = false;
  } else {
    sub_58 = sub_59;
  };
  if (controller_v_276) {
    v_856 = sub_58;
  } else {
    v_856 = sub_54;
  };
  if (controller_c_air_2) {
    v_859 = v_856;
  } else {
    v_859 = v_858;
  };
  if (controller_v_277) {
    v_848 = sub_59;
  } else {
    v_848 = sub_55;
  };
  if (controller_v_276) {
    sub_68 = v_848;
  } else {
    sub_68 = sub_58;
  };
  if (controller_c_air_1) {
    sub_53 = v_859;
  } else {
    sub_53 = sub_68;
  };
  sub_52 = sub_53;
  sub_51 = sub_52;
  sub_50 = sub_51;
  sub_49 = sub_50;
  if (controller_air_failed_recovered) {
    v_874 = sub_49;
    sub_3 = sub_4;
  } else {
    v_874 = sub_4;
    sub_3 = sub_49;
  };
  if (controller_ck_51_1) {
    sub_2 = v_874;
  } else {
    sub_2 = sub_3;
  };
  if (controller_ck_44_1) {
    sub_86 = sub_21;
  } else {
    sub_86 = sub_22;
  };
  if (controller_door_failed_recovered) {
    v_840 = sub_86;
    sub_85 = sub_19;
  } else {
    v_840 = sub_19;
    sub_85 = sub_86;
  };
  if (controller_ck_46_1) {
    sub_84 = v_840;
  } else {
    sub_84 = sub_85;
  };
  sub_83 = sub_84;
  if (controller_door_failed_recovered) {
    v_839 = false;
    sub_89 = sub_19;
  } else {
    v_839 = sub_19;
    sub_89 = false;
  };
  if (controller_ck_46_1) {
    sub_88 = v_839;
  } else {
    sub_88 = sub_89;
  };
  if (controller_window_failed_recovered) {
    v_841 = sub_88;
    sub_87 = sub_84;
  } else {
    v_841 = sub_84;
    sub_87 = sub_88;
  };
  if (controller_ck_56_1) {
    v_842 = v_841;
  } else {
    v_842 = sub_87;
  };
  if (controller_c_window) {
    sub_82 = sub_83;
  } else {
    sub_82 = v_842;
  };
  if (controller_ck_39_1) {
    v_844 = sub_82;
    v_843 = false;
  } else {
    v_844 = false;
    v_843 = sub_82;
  };
  if (controller_c_pc) {
    sub_81 = v_843;
    sub_90 = sub_38;
  } else {
    sub_81 = v_844;
    sub_90 = sub_26;
  };
  if (controller_cleaner) {
    v_845 = sub_90;
    sub_80 = sub_81;
  } else {
    v_845 = sub_81;
    sub_80 = sub_90;
  };
  if (controller_ck_37_1) {
    sub_79 = v_845;
  } else {
    sub_79 = sub_80;
  };
  sub_78 = sub_79;
  sub_77 = sub_78;
  sub_76 = sub_77;
  if (controller_window_failed_recovered) {
    v_834 = false;
    sub_98 = sub_84;
  } else {
    v_834 = sub_84;
    sub_98 = false;
  };
  if (controller_ck_56_1) {
    v_835 = v_834;
  } else {
    v_835 = sub_98;
  };
  if (controller_c_window) {
    sub_97 = v_835;
  } else {
    sub_97 = sub_83;
  };
  if (controller_ck_39_1) {
    v_837 = sub_97;
    v_836 = false;
  } else {
    v_837 = false;
    v_836 = sub_97;
  };
  if (controller_c_pc) {
    sub_96 = v_836;
    sub_99 = sub_48;
  } else {
    sub_96 = v_837;
    sub_99 = sub_45;
  };
  if (controller_cleaner) {
    v_838 = sub_99;
    sub_95 = sub_96;
  } else {
    v_838 = sub_96;
    sub_95 = sub_99;
  };
  if (controller_ck_37_1) {
    sub_94 = v_838;
  } else {
    sub_94 = sub_95;
  };
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  if (controller_blind_failed_recovered) {
    v_846 = sub_91;
    sub_75 = sub_76;
  } else {
    v_846 = sub_76;
    sub_75 = sub_91;
  };
  if (controller_ck_66_1) {
    sub_74 = v_846;
  } else {
    sub_74 = sub_75;
  };
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_112 = sub_31;
  sub_111 = sub_112;
  sub_110 = sub_111;
  if (controller_ck_39_1) {
    v_828 = sub_110;
    v_827 = false;
  } else {
    v_828 = false;
    v_827 = sub_110;
  };
  if (controller_c_pc) {
    sub_109 = v_827;
  } else {
    sub_109 = v_828;
  };
  if (controller_cleaner) {
    v_829 = sub_109;
    sub_108 = false;
  } else {
    v_829 = false;
    sub_108 = sub_109;
  };
  if (controller_ck_37_1) {
    sub_107 = v_829;
  } else {
    sub_107 = sub_108;
  };
  sub_106 = sub_107;
  if (controller_v_277) {
    v_831 = false;
  } else {
    v_831 = sub_106;
  };
  if (controller_v_276) {
    v_832 = v_831;
  } else {
    v_832 = sub_106;
  };
  if (controller_v_277) {
    sub_105 = sub_106;
  } else {
    sub_105 = false;
  };
  if (controller_c_pc) {
    sub_117 = sub_24;
  } else {
    sub_117 = sub_15;
  };
  if (controller_cleaner) {
    v_826 = false;
    sub_116 = sub_117;
  } else {
    v_826 = sub_117;
    sub_116 = false;
  };
  if (controller_ck_37_1) {
    sub_115 = v_826;
  } else {
    sub_115 = sub_116;
  };
  sub_114 = sub_115;
  if (controller_v_277) {
    sub_113 = sub_106;
  } else {
    sub_113 = sub_114;
  };
  if (controller_v_276) {
    v_830 = sub_113;
  } else {
    v_830 = sub_105;
  };
  if (controller_c_air_2) {
    v_833 = v_830;
  } else {
    v_833 = v_832;
  };
  if (controller_v_277) {
    v = sub_114;
  } else {
    v = false;
  };
  if (controller_v_276) {
    sub_118 = v;
  } else {
    sub_118 = sub_113;
  };
  if (controller_c_air_1) {
    sub_104 = v_833;
  } else {
    sub_104 = sub_118;
  };
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  sub_100 = sub_101;
  if (controller_air_failed_recovered) {
    v_847 = sub_100;
    sub_70 = sub_71;
  } else {
    v_847 = sub_71;
    sub_70 = sub_100;
  };
  if (controller_ck_51_1) {
    sub_69 = v_847;
  } else {
    sub_69 = sub_70;
  };
  if (controller_worker) {
    v_875 = sub_69;
    sub_1 = sub_2;
  } else {
    v_875 = sub_2;
    sub_1 = sub_69;
  };
  if (controller_ck_35_1) {
    sub_0 = v_875;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_closet = sub_0;;
}

void Controller_controller__controller_controller_controller_c_air_2_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered,
  int controller_door_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_20, int controller_ck_35_1, int controller_pnr_19,
  int controller_ck_37_1, int controller_pnr_18, int controller_ck_39_1,
  int controller_pnr_17, int controller_ck_41_1, int controller_pnr_16,
  int controller_ck_44_1, int controller_pnr_15, int controller_ck_46_1,
  int controller_pnr_14, int controller_v_277, int controller_v_276,
  int controller_pnr_13, int controller_ck_51_1, int controller_pnr_12,
  int controller_ck_54_1, int controller_pnr_11, int controller_ck_56_1,
  int controller_pnr_10, int controller_ck_59_1, int controller_pnr_9,
  int controller_ck_61_1, int controller_pnr_8, int controller_ck_64_1,
  int controller_pnr_7, int controller_ck_66_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_air_1, int controller_c_window,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_2_out* _out) {
  
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
  sub_19 = false;
  sub_21 = (controller_c_door&&false);
  v_920 = !(controller_c_door);
  sub_22 = (v_920&&false);
  if (controller_ck_44_1) {
    sub_20 = sub_22;
  } else {
    sub_20 = sub_21;
  };
  if (controller_door_failed_recovered) {
    v_921 = sub_20;
    sub_18 = sub_19;
  } else {
    v_921 = sub_19;
    sub_18 = sub_20;
  };
  if (controller_ck_46_1) {
    sub_17 = v_921;
  } else {
    sub_17 = sub_18;
  };
  if (controller_window_failed_recovered) {
    v_922 = false;
    sub_23 = sub_17;
  } else {
    v_922 = sub_17;
    sub_23 = false;
  };
  if (controller_ck_56_1) {
    v_923 = v_922;
  } else {
    v_923 = sub_23;
  };
  if (controller_c_window) {
    sub_16 = sub_17;
  } else {
    sub_16 = v_923;
  };
  if (controller_ck_39_1) {
    sub_15 = sub_16;
    sub_24 = false;
  } else {
    sub_15 = false;
    sub_24 = sub_16;
  };
  if (controller_c_pc) {
    sub_14 = sub_15;
  } else {
    sub_14 = sub_24;
  };
  if (controller_ck_44_1) {
    sub_31 = sub_21;
  } else {
    sub_31 = sub_22;
  };
  if (controller_door_failed_recovered) {
    v_917 = sub_31;
    sub_30 = sub_19;
  } else {
    v_917 = sub_19;
    sub_30 = sub_31;
  };
  if (controller_ck_46_1) {
    sub_29 = v_917;
  } else {
    sub_29 = sub_30;
  };
  sub_28 = sub_29;
  if (controller_door_failed_recovered) {
    v_916 = false;
    sub_34 = sub_19;
  } else {
    v_916 = sub_19;
    sub_34 = false;
  };
  if (controller_ck_46_1) {
    sub_33 = v_916;
  } else {
    sub_33 = sub_34;
  };
  if (controller_window_failed_recovered) {
    v_918 = sub_33;
    sub_32 = sub_29;
  } else {
    v_918 = sub_29;
    sub_32 = sub_33;
  };
  if (controller_ck_56_1) {
    v_919 = v_918;
  } else {
    v_919 = sub_32;
  };
  if (controller_c_window) {
    sub_27 = sub_28;
  } else {
    sub_27 = v_919;
  };
  if (controller_ck_39_1) {
    sub_26 = sub_27;
    sub_35 = false;
  } else {
    sub_26 = false;
    sub_35 = sub_27;
  };
  if (controller_c_pc) {
    sub_25 = sub_26;
  } else {
    sub_25 = sub_35;
  };
  if (controller_cleaner) {
    v_924 = sub_25;
    sub_13 = sub_14;
  } else {
    v_924 = sub_14;
    sub_13 = sub_25;
  };
  if (controller_ck_37_1) {
    sub_12 = v_924;
  } else {
    sub_12 = sub_13;
  };
  sub_11 = sub_12;
  sub_10 = sub_11;
  if (controller_window_failed_recovered) {
    v_913 = false;
    sub_43 = sub_29;
  } else {
    v_913 = sub_29;
    sub_43 = false;
  };
  if (controller_ck_56_1) {
    v_914 = v_913;
  } else {
    v_914 = sub_43;
  };
  if (controller_c_window) {
    sub_42 = v_914;
  } else {
    sub_42 = sub_28;
  };
  if (controller_ck_39_1) {
    sub_41 = sub_42;
    sub_44 = false;
  } else {
    sub_41 = false;
    sub_44 = sub_42;
  };
  if (controller_c_pc) {
    sub_40 = sub_41;
  } else {
    sub_40 = sub_44;
  };
  if (controller_cleaner) {
    v_915 = sub_40;
    sub_39 = sub_14;
  } else {
    v_915 = sub_14;
    sub_39 = sub_40;
  };
  if (controller_ck_37_1) {
    sub_38 = v_915;
  } else {
    sub_38 = sub_39;
  };
  sub_37 = sub_38;
  sub_36 = sub_37;
  if (controller_blind_failed_recovered) {
    v_925 = sub_36;
    sub_9 = sub_10;
  } else {
    v_925 = sub_10;
    sub_9 = sub_36;
  };
  if (controller_ck_66_1) {
    sub_8 = v_925;
  } else {
    sub_8 = sub_9;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_60 = true;
  v_906 = !(controller_c_door);
  sub_62 = (v_906||false);
  sub_63 = (controller_c_door||false);
  if (controller_ck_44_1) {
    sub_61 = sub_63;
  } else {
    sub_61 = sub_62;
  };
  if (controller_door_failed_recovered) {
    v_907 = sub_61;
    sub_59 = sub_60;
  } else {
    v_907 = sub_60;
    sub_59 = sub_61;
  };
  if (controller_ck_46_1) {
    sub_58 = v_907;
  } else {
    sub_58 = sub_59;
  };
  if (controller_window_failed_recovered) {
    v_908 = false;
    sub_64 = sub_58;
  } else {
    v_908 = sub_58;
    sub_64 = false;
  };
  if (controller_ck_56_1) {
    v_909 = v_908;
  } else {
    v_909 = sub_64;
  };
  if (controller_c_window) {
    sub_57 = sub_58;
  } else {
    sub_57 = v_909;
  };
  if (controller_ck_39_1) {
    sub_56 = sub_57;
    sub_65 = false;
  } else {
    sub_56 = false;
    sub_65 = sub_57;
  };
  if (controller_c_pc) {
    sub_55 = sub_56;
  } else {
    sub_55 = sub_65;
  };
  if (controller_cleaner) {
    sub_54 = sub_55;
    sub_66 = false;
  } else {
    sub_54 = false;
    sub_66 = sub_55;
  };
  if (controller_ck_37_1) {
    sub_53 = sub_66;
  } else {
    sub_53 = sub_54;
  };
  sub_52 = sub_53;
  if (controller_v_277) {
    sub_51 = false;
  } else {
    sub_51 = sub_52;
  };
  if (controller_ck_37_1) {
    sub_68 = sub_54;
  } else {
    sub_68 = sub_66;
  };
  sub_67 = sub_68;
  if (controller_cleaner) {
    sub_71 = sub_14;
    sub_72 = false;
  } else {
    sub_71 = false;
    sub_72 = sub_14;
  };
  if (controller_ck_37_1) {
    sub_70 = sub_72;
  } else {
    sub_70 = sub_71;
  };
  sub_69 = sub_70;
  if (controller_v_277) {
    v_910 = sub_69;
  } else {
    v_910 = sub_67;
  };
  if (controller_v_276) {
    sub_50 = v_910;
  } else {
    sub_50 = sub_51;
  };
  if (controller_ck_37_1) {
    sub_75 = sub_71;
  } else {
    sub_75 = sub_72;
  };
  sub_74 = sub_75;
  if (controller_v_277) {
    v_911 = sub_74;
    sub_73 = false;
  } else {
    v_911 = sub_69;
    sub_73 = sub_74;
  };
  if (controller_v_276) {
    v_912 = v_911;
  } else {
    v_912 = sub_73;
  };
  if (controller_c_air_1) {
    sub_49 = sub_50;
  } else {
    sub_49 = v_912;
  };
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  if (controller_air_failed_recovered) {
    v_926 = sub_45;
    sub_4 = sub_5;
  } else {
    v_926 = sub_5;
    sub_4 = sub_45;
  };
  if (controller_ck_51_1) {
    sub_3 = v_926;
  } else {
    sub_3 = sub_4;
  };
  if (controller_c_pc) {
    sub_86 = sub_35;
  } else {
    sub_86 = sub_26;
  };
  sub_85 = sub_86;
  sub_84 = sub_85;
  sub_83 = sub_84;
  if (controller_c_pc) {
    sub_90 = sub_44;
  } else {
    sub_90 = sub_41;
  };
  sub_89 = sub_90;
  sub_88 = sub_89;
  sub_87 = sub_88;
  if (controller_blind_failed_recovered) {
    v_904 = sub_87;
    sub_82 = sub_83;
  } else {
    v_904 = sub_83;
    sub_82 = sub_87;
  };
  if (controller_ck_66_1) {
    sub_81 = v_904;
  } else {
    sub_81 = sub_82;
  };
  sub_80 = sub_81;
  sub_79 = sub_80;
  sub_78 = sub_79;
  sub_102 = sub_19;
  sub_101 = sub_102;
  sub_100 = sub_101;
  if (controller_ck_39_1) {
    v_899 = sub_100;
    v_898 = false;
  } else {
    v_899 = false;
    v_898 = sub_100;
  };
  if (controller_c_pc) {
    sub_99 = v_898;
  } else {
    sub_99 = v_899;
  };
  if (controller_cleaner) {
    v_900 = sub_99;
    sub_98 = false;
  } else {
    v_900 = false;
    sub_98 = sub_99;
  };
  if (controller_ck_37_1) {
    sub_97 = v_900;
  } else {
    sub_97 = sub_98;
  };
  sub_96 = sub_97;
  if (controller_c_pc) {
    sub_107 = sub_65;
  } else {
    sub_107 = sub_56;
  };
  if (controller_cleaner) {
    v_897 = sub_99;
    sub_106 = sub_107;
  } else {
    v_897 = sub_107;
    sub_106 = sub_99;
  };
  if (controller_ck_37_1) {
    sub_105 = v_897;
  } else {
    sub_105 = sub_106;
  };
  sub_104 = sub_105;
  sub_114 = sub_60;
  sub_113 = sub_114;
  sub_112 = sub_113;
  if (controller_ck_39_1) {
    v_895 = sub_112;
    v_894 = false;
  } else {
    v_895 = false;
    v_894 = sub_112;
  };
  if (controller_c_pc) {
    sub_111 = v_894;
  } else {
    sub_111 = v_895;
  };
  if (controller_cleaner) {
    v_896 = sub_111;
    sub_110 = false;
  } else {
    v_896 = false;
    sub_110 = sub_111;
  };
  if (controller_ck_37_1) {
    sub_109 = v_896;
  } else {
    sub_109 = sub_110;
  };
  sub_108 = sub_109;
  if (controller_v_277) {
    sub_103 = sub_108;
  } else {
    sub_103 = sub_104;
  };
  if (controller_v_276) {
    v_901 = sub_103;
  } else {
    v_901 = sub_96;
  };
  if (controller_c_pc) {
    sub_119 = sub_24;
  } else {
    sub_119 = sub_15;
  };
  if (controller_cleaner) {
    v_893 = false;
    sub_118 = sub_119;
  } else {
    v_893 = sub_119;
    sub_118 = false;
  };
  if (controller_ck_37_1) {
    sub_117 = v_893;
  } else {
    sub_117 = sub_118;
  };
  sub_116 = sub_117;
  if (controller_v_277) {
    v_902 = sub_116;
    sub_115 = sub_96;
  } else {
    v_902 = false;
    sub_115 = sub_116;
  };
  if (controller_v_276) {
    v_903 = v_902;
  } else {
    v_903 = sub_115;
  };
  if (controller_c_air_1) {
    sub_95 = v_901;
  } else {
    sub_95 = v_903;
  };
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  if (controller_air_failed_recovered) {
    v_905 = sub_91;
    sub_77 = sub_78;
  } else {
    v_905 = sub_78;
    sub_77 = sub_91;
  };
  if (controller_ck_51_1) {
    sub_76 = v_905;
  } else {
    sub_76 = sub_77;
  };
  if (controller_worker) {
    v_927 = sub_76;
    sub_2 = sub_3;
  } else {
    v_927 = sub_3;
    sub_2 = sub_76;
  };
  if (controller_ck_35_1) {
    sub_1 = v_927;
  } else {
    sub_1 = sub_2;
  };
  if (controller_ck_44_1) {
    sub_138 = sub_62;
  } else {
    sub_138 = sub_63;
  };
  if (controller_door_failed_recovered) {
    v_887 = sub_138;
    sub_137 = sub_60;
  } else {
    v_887 = sub_60;
    sub_137 = sub_138;
  };
  if (controller_ck_46_1) {
    sub_136 = v_887;
  } else {
    sub_136 = sub_137;
  };
  sub_135 = sub_136;
  if (controller_door_failed_recovered) {
    v_886 = false;
    sub_141 = sub_60;
  } else {
    v_886 = sub_60;
    sub_141 = false;
  };
  if (controller_ck_46_1) {
    sub_140 = v_886;
  } else {
    sub_140 = sub_141;
  };
  if (controller_window_failed_recovered) {
    v_888 = sub_140;
    sub_139 = sub_136;
  } else {
    v_888 = sub_136;
    sub_139 = sub_140;
  };
  if (controller_ck_56_1) {
    v_889 = v_888;
  } else {
    v_889 = sub_139;
  };
  if (controller_c_window) {
    sub_134 = sub_135;
  } else {
    sub_134 = v_889;
  };
  if (controller_ck_39_1) {
    sub_133 = sub_134;
    sub_142 = false;
  } else {
    sub_133 = false;
    sub_142 = sub_134;
  };
  if (controller_c_pc) {
    sub_132 = sub_133;
  } else {
    sub_132 = sub_142;
  };
  if (controller_cleaner) {
    v_890 = sub_132;
    sub_131 = sub_55;
  } else {
    v_890 = sub_55;
    sub_131 = sub_132;
  };
  if (controller_ck_37_1) {
    sub_130 = v_890;
  } else {
    sub_130 = sub_131;
  };
  sub_129 = sub_130;
  sub_128 = sub_129;
  if (controller_window_failed_recovered) {
    v_883 = false;
    sub_150 = sub_136;
  } else {
    v_883 = sub_136;
    sub_150 = false;
  };
  if (controller_ck_56_1) {
    v_884 = v_883;
  } else {
    v_884 = sub_150;
  };
  if (controller_c_window) {
    sub_149 = v_884;
  } else {
    sub_149 = sub_135;
  };
  if (controller_ck_39_1) {
    sub_148 = sub_149;
    sub_151 = false;
  } else {
    sub_148 = false;
    sub_151 = sub_149;
  };
  if (controller_c_pc) {
    sub_147 = sub_148;
  } else {
    sub_147 = sub_151;
  };
  if (controller_cleaner) {
    v_885 = sub_147;
    sub_146 = sub_55;
  } else {
    v_885 = sub_55;
    sub_146 = sub_147;
  };
  if (controller_ck_37_1) {
    sub_145 = v_885;
  } else {
    sub_145 = sub_146;
  };
  sub_144 = sub_145;
  sub_143 = sub_144;
  if (controller_blind_failed_recovered) {
    v_891 = sub_143;
    sub_127 = sub_128;
  } else {
    v_891 = sub_128;
    sub_127 = sub_143;
  };
  if (controller_ck_66_1) {
    sub_126 = v_891;
  } else {
    sub_126 = sub_127;
  };
  sub_125 = sub_126;
  sub_124 = sub_125;
  sub_123 = sub_124;
  if (controller_v_277) {
    v_881 = sub_67;
    sub_157 = false;
  } else {
    v_881 = sub_52;
    sub_157 = sub_67;
  };
  if (controller_v_276) {
    v_882 = v_881;
  } else {
    v_882 = sub_157;
  };
  if (controller_c_air_1) {
    sub_156 = sub_50;
  } else {
    sub_156 = v_882;
  };
  sub_155 = sub_156;
  sub_154 = sub_155;
  sub_153 = sub_154;
  sub_152 = sub_153;
  if (controller_air_failed_recovered) {
    v_892 = sub_152;
    sub_122 = sub_123;
  } else {
    v_892 = sub_123;
    sub_122 = sub_152;
  };
  if (controller_ck_51_1) {
    sub_121 = v_892;
  } else {
    sub_121 = sub_122;
  };
  if (controller_c_pc) {
    sub_168 = sub_142;
  } else {
    sub_168 = sub_133;
  };
  sub_167 = sub_168;
  sub_166 = sub_167;
  sub_165 = sub_166;
  if (controller_c_pc) {
    sub_172 = sub_151;
  } else {
    sub_172 = sub_148;
  };
  sub_171 = sub_172;
  sub_170 = sub_171;
  sub_169 = sub_170;
  if (controller_blind_failed_recovered) {
    v_879 = sub_169;
    sub_164 = sub_165;
  } else {
    v_879 = sub_165;
    sub_164 = sub_169;
  };
  if (controller_ck_66_1) {
    sub_163 = v_879;
  } else {
    sub_163 = sub_164;
  };
  sub_162 = sub_163;
  sub_161 = sub_162;
  sub_160 = sub_161;
  if (controller_v_277) {
    sub_178 = sub_108;
  } else {
    sub_178 = sub_96;
  };
  if (controller_v_276) {
    v_876 = sub_103;
  } else {
    v_876 = sub_178;
  };
  if (controller_cleaner) {
    v = false;
    sub_182 = sub_107;
  } else {
    v = sub_107;
    sub_182 = false;
  };
  if (controller_ck_37_1) {
    sub_181 = v;
  } else {
    sub_181 = sub_182;
  };
  sub_180 = sub_181;
  if (controller_v_277) {
    v_877 = sub_180;
    sub_179 = sub_108;
  } else {
    v_877 = false;
    sub_179 = sub_180;
  };
  if (controller_v_276) {
    v_878 = v_877;
  } else {
    v_878 = sub_179;
  };
  if (controller_c_air_1) {
    sub_177 = v_876;
  } else {
    sub_177 = v_878;
  };
  sub_176 = sub_177;
  sub_175 = sub_176;
  sub_174 = sub_175;
  sub_173 = sub_174;
  if (controller_air_failed_recovered) {
    v_880 = sub_173;
    sub_159 = sub_160;
  } else {
    v_880 = sub_160;
    sub_159 = sub_173;
  };
  if (controller_ck_51_1) {
    sub_158 = v_880;
  } else {
    sub_158 = sub_159;
  };
  if (controller_worker) {
    v_928 = sub_158;
    sub_120 = sub_121;
  } else {
    v_928 = sub_121;
    sub_120 = sub_158;
  };
  if (controller_ck_35_1) {
    v_929 = v_928;
  } else {
    v_929 = sub_120;
  };
  if (p_controller_c_air_2) {
    sub_0 = v_929;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_air_2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_air_1_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered,
  int controller_door_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_20, int controller_ck_35_1, int controller_pnr_19,
  int controller_ck_37_1, int controller_pnr_18, int controller_ck_39_1,
  int controller_pnr_17, int controller_ck_41_1, int controller_pnr_16,
  int controller_ck_44_1, int controller_pnr_15, int controller_ck_46_1,
  int controller_pnr_14, int controller_v_277, int controller_v_276,
  int controller_pnr_13, int controller_ck_51_1, int controller_pnr_12,
  int controller_ck_54_1, int controller_pnr_11, int controller_ck_56_1,
  int controller_pnr_10, int controller_ck_59_1, int controller_pnr_9,
  int controller_ck_61_1, int controller_pnr_8, int controller_ck_64_1,
  int controller_pnr_7, int controller_ck_66_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_1_out* _out) {
  
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
  sub_17 = false;
  sub_18 = true;
  if (p_controller_c_air_1) {
    sub_16 = sub_18;
  } else {
    sub_16 = sub_17;
  };
  sub_21 = (controller_c_door&&false);
  v_955 = !(controller_c_door);
  sub_22 = (v_955&&false);
  if (controller_ck_44_1) {
    sub_20 = sub_22;
  } else {
    sub_20 = sub_21;
  };
  v_954 = !(controller_c_door);
  sub_24 = (v_954||false);
  sub_25 = (controller_c_door||false);
  if (controller_ck_44_1) {
    sub_23 = sub_25;
  } else {
    sub_23 = sub_24;
  };
  if (p_controller_c_air_1) {
    sub_19 = sub_23;
  } else {
    sub_19 = sub_20;
  };
  if (controller_door_failed_recovered) {
    v_956 = sub_19;
    sub_15 = sub_16;
  } else {
    v_956 = sub_16;
    sub_15 = sub_19;
  };
  if (controller_ck_46_1) {
    sub_14 = v_956;
  } else {
    sub_14 = sub_15;
  };
  if (controller_window_failed_recovered) {
    v_957 = false;
    sub_26 = sub_14;
  } else {
    v_957 = sub_14;
    sub_26 = false;
  };
  if (controller_ck_56_1) {
    v_958 = v_957;
  } else {
    v_958 = sub_26;
  };
  if (controller_c_window) {
    sub_13 = sub_14;
  } else {
    sub_13 = v_958;
  };
  if (controller_ck_39_1) {
    v_960 = false;
    v_959 = sub_13;
  } else {
    v_960 = sub_13;
    v_959 = false;
  };
  if (controller_c_pc) {
    sub_12 = v_959;
  } else {
    sub_12 = v_960;
  };
  if (controller_ck_44_1) {
    v_950 = sub_24;
    sub_34 = sub_21;
  } else {
    v_950 = sub_25;
    sub_34 = sub_22;
  };
  if (p_controller_c_air_1) {
    sub_33 = v_950;
  } else {
    sub_33 = sub_34;
  };
  if (controller_door_failed_recovered) {
    v_951 = sub_33;
    sub_32 = sub_16;
  } else {
    v_951 = sub_16;
    sub_32 = sub_33;
  };
  if (controller_ck_46_1) {
    sub_31 = v_951;
  } else {
    sub_31 = sub_32;
  };
  sub_30 = sub_31;
  if (controller_door_failed_recovered) {
    v_949 = false;
    sub_37 = sub_16;
  } else {
    v_949 = sub_16;
    sub_37 = false;
  };
  if (controller_ck_46_1) {
    sub_36 = v_949;
  } else {
    sub_36 = sub_37;
  };
  if (controller_window_failed_recovered) {
    v_952 = sub_36;
    sub_35 = sub_31;
  } else {
    v_952 = sub_31;
    sub_35 = sub_36;
  };
  if (controller_ck_56_1) {
    v_953 = v_952;
  } else {
    v_953 = sub_35;
  };
  if (controller_c_window) {
    sub_29 = sub_30;
  } else {
    sub_29 = v_953;
  };
  if (controller_ck_39_1) {
    sub_28 = sub_29;
    sub_38 = false;
  } else {
    sub_28 = false;
    sub_38 = sub_29;
  };
  if (controller_c_pc) {
    sub_27 = sub_28;
  } else {
    sub_27 = sub_38;
  };
  if (controller_cleaner) {
    v_961 = sub_27;
    sub_11 = sub_12;
  } else {
    v_961 = sub_12;
    sub_11 = sub_27;
  };
  if (controller_ck_37_1) {
    sub_10 = v_961;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  if (controller_window_failed_recovered) {
    v_946 = false;
    sub_45 = sub_31;
  } else {
    v_946 = sub_31;
    sub_45 = false;
  };
  if (controller_ck_56_1) {
    v_947 = v_946;
  } else {
    v_947 = sub_45;
  };
  if (controller_c_window) {
    sub_44 = v_947;
  } else {
    sub_44 = sub_30;
  };
  if (controller_ck_39_1) {
    sub_43 = sub_44;
    sub_46 = false;
  } else {
    sub_43 = false;
    sub_46 = sub_44;
  };
  if (controller_c_pc) {
    sub_42 = sub_43;
  } else {
    sub_42 = sub_46;
  };
  if (controller_cleaner) {
    v_948 = sub_42;
    sub_41 = sub_12;
  } else {
    v_948 = sub_12;
    sub_41 = sub_42;
  };
  if (controller_ck_37_1) {
    sub_40 = v_948;
  } else {
    sub_40 = sub_41;
  };
  sub_39 = sub_40;
  if (controller_blind_failed_recovered) {
    v_962 = sub_39;
    sub_8 = sub_9;
  } else {
    v_962 = sub_9;
    sub_8 = sub_39;
  };
  if (controller_ck_66_1) {
    sub_7 = v_962;
  } else {
    sub_7 = sub_8;
  };
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  if (controller_door_failed_recovered) {
    v_942 = sub_23;
    sub_60 = sub_18;
  } else {
    v_942 = sub_18;
    sub_60 = sub_23;
  };
  if (controller_ck_46_1) {
    sub_59 = v_942;
  } else {
    sub_59 = sub_60;
  };
  if (controller_window_failed_recovered) {
    v_943 = false;
    sub_61 = sub_59;
  } else {
    v_943 = sub_59;
    sub_61 = false;
  };
  if (controller_ck_56_1) {
    v_944 = v_943;
  } else {
    v_944 = sub_61;
  };
  if (controller_c_window) {
    sub_58 = sub_59;
  } else {
    sub_58 = v_944;
  };
  if (controller_ck_39_1) {
    sub_57 = sub_58;
    sub_62 = false;
  } else {
    sub_57 = false;
    sub_62 = sub_58;
  };
  if (controller_c_pc) {
    sub_56 = sub_57;
  } else {
    sub_56 = sub_62;
  };
  if (controller_door_failed_recovered) {
    v_939 = sub_20;
    sub_67 = sub_17;
  } else {
    v_939 = sub_17;
    sub_67 = sub_20;
  };
  if (controller_ck_46_1) {
    sub_66 = v_939;
  } else {
    sub_66 = sub_67;
  };
  if (controller_window_failed_recovered) {
    v_940 = false;
    sub_68 = sub_66;
  } else {
    v_940 = sub_66;
    sub_68 = false;
  };
  if (controller_ck_56_1) {
    v_941 = v_940;
  } else {
    v_941 = sub_68;
  };
  if (controller_c_window) {
    sub_65 = sub_66;
  } else {
    sub_65 = v_941;
  };
  if (controller_ck_39_1) {
    sub_64 = sub_65;
    sub_69 = false;
  } else {
    sub_64 = false;
    sub_69 = sub_65;
  };
  if (controller_c_pc) {
    sub_63 = sub_64;
  } else {
    sub_63 = sub_69;
  };
  if (controller_cleaner) {
    sub_55 = sub_56;
    sub_70 = sub_63;
  } else {
    sub_55 = sub_63;
    sub_70 = sub_56;
  };
  if (controller_ck_37_1) {
    sub_54 = sub_70;
  } else {
    sub_54 = sub_55;
  };
  sub_53 = sub_54;
  if (controller_v_277) {
    sub_52 = false;
  } else {
    sub_52 = sub_53;
  };
  if (controller_ck_37_1) {
    sub_72 = sub_55;
  } else {
    sub_72 = sub_70;
  };
  sub_71 = sub_72;
  if (controller_v_277) {
    v_945 = sub_53;
  } else {
    v_945 = sub_71;
  };
  if (controller_v_276) {
    sub_51 = v_945;
  } else {
    sub_51 = sub_52;
  };
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  if (controller_air_failed_recovered) {
    v_963 = sub_47;
    sub_3 = sub_4;
  } else {
    v_963 = sub_4;
    sub_3 = sub_47;
  };
  if (controller_ck_51_1) {
    sub_2 = v_963;
  } else {
    sub_2 = sub_3;
  };
  if (controller_c_pc) {
    sub_82 = sub_38;
  } else {
    sub_82 = sub_28;
  };
  sub_81 = sub_82;
  sub_80 = sub_81;
  if (controller_c_pc) {
    sub_85 = sub_46;
  } else {
    sub_85 = sub_43;
  };
  sub_84 = sub_85;
  sub_83 = sub_84;
  if (controller_blind_failed_recovered) {
    v_937 = sub_83;
    sub_79 = sub_80;
  } else {
    v_937 = sub_80;
    sub_79 = sub_83;
  };
  if (controller_ck_66_1) {
    sub_78 = v_937;
  } else {
    sub_78 = sub_79;
  };
  sub_77 = sub_78;
  sub_76 = sub_77;
  sub_75 = sub_76;
  if (controller_c_pc) {
    sub_95 = sub_69;
  } else {
    sub_95 = sub_64;
  };
  sub_99 = sub_18;
  sub_98 = sub_99;
  sub_97 = sub_98;
  if (controller_ck_39_1) {
    v_934 = sub_97;
    v_933 = false;
  } else {
    v_934 = false;
    v_933 = sub_97;
  };
  if (controller_c_pc) {
    sub_96 = v_933;
  } else {
    sub_96 = v_934;
  };
  if (controller_cleaner) {
    v_935 = sub_96;
    sub_94 = sub_95;
  } else {
    v_935 = sub_95;
    sub_94 = sub_96;
  };
  if (controller_ck_37_1) {
    sub_93 = v_935;
  } else {
    sub_93 = sub_94;
  };
  sub_92 = sub_93;
  sub_105 = sub_16;
  sub_104 = sub_105;
  sub_103 = sub_104;
  if (controller_ck_39_1) {
    v_931 = sub_103;
    v_930 = false;
  } else {
    v_931 = false;
    v_930 = sub_103;
  };
  if (controller_c_pc) {
    sub_102 = v_930;
  } else {
    sub_102 = v_931;
  };
  if (controller_cleaner) {
    v_932 = sub_102;
    sub_101 = false;
  } else {
    v_932 = false;
    sub_101 = sub_102;
  };
  if (controller_ck_37_1) {
    sub_100 = v_932;
  } else {
    sub_100 = sub_101;
  };
  if (controller_v_277) {
    sub_91 = sub_100;
  } else {
    sub_91 = sub_92;
  };
  if (controller_c_pc) {
    sub_109 = sub_62;
  } else {
    sub_109 = sub_57;
  };
  if (controller_cleaner) {
    v = sub_96;
    sub_108 = sub_109;
  } else {
    v = sub_109;
    sub_108 = sub_96;
  };
  if (controller_ck_37_1) {
    sub_107 = v;
  } else {
    sub_107 = sub_108;
  };
  sub_106 = sub_107;
  if (controller_v_277) {
    v_936 = sub_92;
  } else {
    v_936 = sub_106;
  };
  if (controller_v_276) {
    sub_90 = v_936;
  } else {
    sub_90 = sub_91;
  };
  sub_89 = sub_90;
  sub_88 = sub_89;
  sub_87 = sub_88;
  sub_86 = sub_87;
  if (controller_air_failed_recovered) {
    v_938 = sub_86;
    sub_74 = sub_75;
  } else {
    v_938 = sub_75;
    sub_74 = sub_86;
  };
  if (controller_ck_51_1) {
    sub_73 = v_938;
  } else {
    sub_73 = sub_74;
  };
  if (controller_worker) {
    v_964 = sub_73;
    sub_1 = sub_2;
  } else {
    v_964 = sub_2;
    sub_1 = sub_73;
  };
  if (controller_ck_35_1) {
    sub_0 = v_964;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_air_1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_window_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered,
  int controller_door_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_20, int controller_ck_35_1, int controller_pnr_19,
  int controller_ck_37_1, int controller_pnr_18, int controller_ck_39_1,
  int controller_pnr_17, int controller_ck_41_1, int controller_pnr_16,
  int controller_ck_44_1, int controller_pnr_15, int controller_ck_46_1,
  int controller_pnr_14, int controller_v_277, int controller_v_276,
  int controller_pnr_13, int controller_ck_51_1, int controller_pnr_12,
  int controller_ck_54_1, int controller_pnr_11, int controller_ck_56_1,
  int controller_pnr_10, int controller_ck_59_1, int controller_pnr_9,
  int controller_ck_61_1, int controller_pnr_8, int controller_ck_64_1,
  int controller_pnr_7, int controller_ck_66_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_window_out* _out) {
  
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
  sub_19 = false;
  sub_21 = (controller_c_door&&false);
  v_988 = !(controller_c_door);
  sub_22 = (v_988&&false);
  if (controller_ck_44_1) {
    sub_20 = sub_22;
  } else {
    sub_20 = sub_21;
  };
  if (controller_door_failed_recovered) {
    v_989 = sub_20;
    sub_18 = sub_19;
  } else {
    v_989 = sub_19;
    sub_18 = sub_20;
  };
  if (controller_ck_46_1) {
    sub_17 = v_989;
  } else {
    sub_17 = sub_18;
  };
  sub_25 = true;
  v_986 = !(controller_c_door);
  sub_27 = (v_986||false);
  sub_28 = (controller_c_door||false);
  if (controller_ck_44_1) {
    sub_26 = sub_28;
  } else {
    sub_26 = sub_27;
  };
  if (controller_door_failed_recovered) {
    v_987 = sub_26;
    sub_24 = sub_25;
  } else {
    v_987 = sub_25;
    sub_24 = sub_26;
  };
  if (controller_ck_46_1) {
    sub_23 = v_987;
  } else {
    sub_23 = sub_24;
  };
  if (controller_window_failed_recovered) {
    v_990 = sub_23;
    sub_16 = sub_17;
  } else {
    v_990 = sub_17;
    sub_16 = sub_23;
  };
  if (controller_ck_56_1) {
    sub_15 = v_990;
  } else {
    sub_15 = sub_16;
  };
  if (controller_ck_39_1) {
    sub_14 = sub_15;
    sub_29 = false;
  } else {
    sub_14 = false;
    sub_29 = sub_15;
  };
  if (controller_c_pc) {
    sub_13 = sub_14;
  } else {
    sub_13 = sub_29;
  };
  if (controller_ck_44_1) {
    sub_36 = sub_21;
  } else {
    sub_36 = sub_22;
  };
  if (controller_door_failed_recovered) {
    v_984 = sub_36;
    sub_35 = sub_19;
  } else {
    v_984 = sub_19;
    sub_35 = sub_36;
  };
  if (controller_ck_46_1) {
    sub_34 = v_984;
  } else {
    sub_34 = sub_35;
  };
  if (controller_ck_44_1) {
    sub_39 = sub_27;
  } else {
    sub_39 = sub_28;
  };
  if (controller_door_failed_recovered) {
    v_983 = sub_39;
    sub_38 = sub_19;
  } else {
    v_983 = sub_19;
    sub_38 = sub_39;
  };
  if (controller_ck_46_1) {
    sub_37 = v_983;
  } else {
    sub_37 = sub_38;
  };
  if (controller_window_failed_recovered) {
    v_985 = sub_37;
    sub_33 = sub_34;
  } else {
    v_985 = sub_34;
    sub_33 = sub_37;
  };
  if (controller_ck_56_1) {
    sub_32 = v_985;
  } else {
    sub_32 = sub_33;
  };
  if (controller_ck_39_1) {
    sub_31 = sub_32;
    sub_40 = false;
  } else {
    sub_31 = false;
    sub_40 = sub_32;
  };
  if (controller_c_pc) {
    sub_30 = sub_31;
  } else {
    sub_30 = sub_40;
  };
  if (controller_cleaner) {
    v_991 = sub_30;
    sub_12 = sub_13;
  } else {
    v_991 = sub_13;
    sub_12 = sub_30;
  };
  if (controller_ck_37_1) {
    sub_11 = v_991;
  } else {
    sub_11 = sub_12;
  };
  sub_10 = sub_11;
  sub_46 = sub_34;
  if (controller_ck_39_1) {
    sub_45 = sub_46;
    sub_47 = false;
  } else {
    sub_45 = false;
    sub_47 = sub_46;
  };
  if (controller_c_pc) {
    sub_44 = sub_45;
  } else {
    sub_44 = sub_47;
  };
  if (controller_cleaner) {
    v_982 = sub_44;
    sub_43 = sub_13;
  } else {
    v_982 = sub_13;
    sub_43 = sub_44;
  };
  if (controller_ck_37_1) {
    sub_42 = v_982;
  } else {
    sub_42 = sub_43;
  };
  sub_41 = sub_42;
  if (controller_blind_failed_recovered) {
    v_992 = sub_41;
    sub_9 = sub_10;
  } else {
    v_992 = sub_10;
    sub_9 = sub_41;
  };
  if (controller_ck_66_1) {
    sub_8 = v_992;
  } else {
    sub_8 = sub_9;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_55 = sub_13;
  sub_54 = sub_55;
  if (controller_v_277) {
    sub_53 = false;
  } else {
    sub_53 = sub_54;
  };
  if (controller_v_276) {
    sub_52 = sub_54;
  } else {
    sub_52 = sub_53;
  };
  sub_51 = sub_52;
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  if (controller_air_failed_recovered) {
    v_993 = sub_48;
    sub_4 = sub_5;
  } else {
    v_993 = sub_5;
    sub_4 = sub_48;
  };
  if (controller_ck_51_1) {
    sub_3 = v_993;
  } else {
    sub_3 = sub_4;
  };
  if (controller_c_pc) {
    sub_65 = sub_40;
  } else {
    sub_65 = sub_31;
  };
  sub_64 = sub_65;
  sub_63 = sub_64;
  if (controller_c_pc) {
    sub_68 = sub_47;
  } else {
    sub_68 = sub_45;
  };
  sub_67 = sub_68;
  sub_66 = sub_67;
  if (controller_blind_failed_recovered) {
    v_980 = sub_66;
    sub_62 = sub_63;
  } else {
    v_980 = sub_63;
    sub_62 = sub_66;
  };
  if (controller_ck_66_1) {
    sub_61 = v_980;
  } else {
    sub_61 = sub_62;
  };
  sub_60 = sub_61;
  sub_59 = sub_60;
  sub_58 = sub_59;
  if (controller_c_pc) {
    sub_78 = sub_29;
  } else {
    sub_78 = sub_14;
  };
  sub_81 = sub_19;
  sub_80 = sub_81;
  if (controller_ck_39_1) {
    v_978 = sub_80;
    v_977 = false;
  } else {
    v_978 = false;
    v_977 = sub_80;
  };
  if (controller_c_pc) {
    sub_79 = v_977;
  } else {
    sub_79 = v_978;
  };
  if (controller_cleaner) {
    v_979 = sub_79;
    sub_77 = sub_78;
  } else {
    v_979 = sub_78;
    sub_77 = sub_79;
  };
  if (controller_ck_37_1) {
    sub_76 = v_979;
  } else {
    sub_76 = sub_77;
  };
  sub_75 = sub_76;
  if (controller_cleaner) {
    v_976 = sub_79;
    sub_83 = false;
  } else {
    v_976 = false;
    sub_83 = sub_79;
  };
  if (controller_ck_37_1) {
    sub_82 = v_976;
  } else {
    sub_82 = sub_83;
  };
  if (controller_v_277) {
    sub_74 = sub_82;
  } else {
    sub_74 = sub_75;
  };
  if (controller_v_276) {
    sub_73 = sub_75;
  } else {
    sub_73 = sub_74;
  };
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  if (controller_air_failed_recovered) {
    v_981 = sub_69;
    sub_57 = sub_58;
  } else {
    v_981 = sub_58;
    sub_57 = sub_69;
  };
  if (controller_ck_51_1) {
    sub_56 = v_981;
  } else {
    sub_56 = sub_57;
  };
  if (controller_worker) {
    v_994 = sub_56;
    sub_2 = sub_3;
  } else {
    v_994 = sub_3;
    sub_2 = sub_56;
  };
  if (controller_ck_35_1) {
    sub_1 = v_994;
  } else {
    sub_1 = sub_2;
  };
  sub_97 = sub_23;
  if (controller_ck_39_1) {
    sub_96 = sub_97;
    sub_98 = false;
  } else {
    sub_96 = false;
    sub_98 = sub_97;
  };
  if (controller_c_pc) {
    sub_95 = sub_96;
  } else {
    sub_95 = sub_98;
  };
  if (controller_door_failed_recovered) {
    v_972 = sub_39;
    sub_103 = sub_25;
  } else {
    v_972 = sub_25;
    sub_103 = sub_39;
  };
  if (controller_ck_46_1) {
    sub_102 = v_972;
  } else {
    sub_102 = sub_103;
  };
  sub_101 = sub_102;
  if (controller_ck_39_1) {
    sub_100 = sub_101;
    sub_104 = false;
  } else {
    sub_100 = false;
    sub_104 = sub_101;
  };
  if (controller_c_pc) {
    sub_99 = sub_100;
  } else {
    sub_99 = sub_104;
  };
  if (controller_cleaner) {
    v_973 = sub_99;
    sub_94 = sub_95;
  } else {
    v_973 = sub_95;
    sub_94 = sub_99;
  };
  if (controller_ck_37_1) {
    sub_93 = v_973;
  } else {
    sub_93 = sub_94;
  };
  sub_92 = sub_93;
  if (controller_window_failed_recovered) {
    v_970 = sub_34;
    sub_111 = sub_102;
  } else {
    v_970 = sub_102;
    sub_111 = sub_34;
  };
  if (controller_ck_56_1) {
    sub_110 = v_970;
  } else {
    sub_110 = sub_111;
  };
  if (controller_ck_39_1) {
    sub_109 = sub_110;
    sub_112 = false;
  } else {
    sub_109 = false;
    sub_112 = sub_110;
  };
  if (controller_c_pc) {
    sub_108 = sub_109;
  } else {
    sub_108 = sub_112;
  };
  if (controller_cleaner) {
    v_971 = sub_108;
    sub_107 = sub_95;
  } else {
    v_971 = sub_95;
    sub_107 = sub_108;
  };
  if (controller_ck_37_1) {
    sub_106 = v_971;
  } else {
    sub_106 = sub_107;
  };
  sub_105 = sub_106;
  if (controller_blind_failed_recovered) {
    v_974 = sub_105;
    sub_91 = sub_92;
  } else {
    v_974 = sub_92;
    sub_91 = sub_105;
  };
  if (controller_ck_66_1) {
    sub_90 = v_974;
  } else {
    sub_90 = sub_91;
  };
  sub_89 = sub_90;
  sub_88 = sub_89;
  sub_87 = sub_88;
  sub_120 = sub_95;
  sub_119 = sub_120;
  if (controller_v_277) {
    sub_118 = false;
  } else {
    sub_118 = sub_119;
  };
  if (controller_v_276) {
    sub_117 = sub_119;
  } else {
    sub_117 = sub_118;
  };
  sub_116 = sub_117;
  sub_115 = sub_116;
  sub_114 = sub_115;
  sub_113 = sub_114;
  if (controller_air_failed_recovered) {
    v_975 = sub_113;
    sub_86 = sub_87;
  } else {
    v_975 = sub_87;
    sub_86 = sub_113;
  };
  if (controller_ck_51_1) {
    sub_85 = v_975;
  } else {
    sub_85 = sub_86;
  };
  if (controller_c_pc) {
    sub_130 = sub_104;
  } else {
    sub_130 = sub_100;
  };
  sub_129 = sub_130;
  sub_128 = sub_129;
  if (controller_c_pc) {
    sub_133 = sub_112;
  } else {
    sub_133 = sub_109;
  };
  sub_132 = sub_133;
  sub_131 = sub_132;
  if (controller_blind_failed_recovered) {
    v_968 = sub_131;
    sub_127 = sub_128;
  } else {
    v_968 = sub_128;
    sub_127 = sub_131;
  };
  if (controller_ck_66_1) {
    sub_126 = v_968;
  } else {
    sub_126 = sub_127;
  };
  sub_125 = sub_126;
  sub_124 = sub_125;
  sub_123 = sub_124;
  if (controller_c_pc) {
    sub_143 = sub_98;
  } else {
    sub_143 = sub_96;
  };
  sub_146 = sub_25;
  sub_145 = sub_146;
  if (controller_ck_39_1) {
    v_966 = sub_145;
    v_965 = false;
  } else {
    v_966 = false;
    v_965 = sub_145;
  };
  if (controller_c_pc) {
    sub_144 = v_965;
  } else {
    sub_144 = v_966;
  };
  if (controller_cleaner) {
    v_967 = sub_144;
    sub_142 = sub_143;
  } else {
    v_967 = sub_143;
    sub_142 = sub_144;
  };
  if (controller_ck_37_1) {
    sub_141 = v_967;
  } else {
    sub_141 = sub_142;
  };
  sub_140 = sub_141;
  if (controller_cleaner) {
    v = sub_144;
    sub_148 = false;
  } else {
    v = false;
    sub_148 = sub_144;
  };
  if (controller_ck_37_1) {
    sub_147 = v;
  } else {
    sub_147 = sub_148;
  };
  if (controller_v_277) {
    sub_139 = sub_147;
  } else {
    sub_139 = sub_140;
  };
  if (controller_v_276) {
    sub_138 = sub_140;
  } else {
    sub_138 = sub_139;
  };
  sub_137 = sub_138;
  sub_136 = sub_137;
  sub_135 = sub_136;
  sub_134 = sub_135;
  if (controller_air_failed_recovered) {
    v_969 = sub_134;
    sub_122 = sub_123;
  } else {
    v_969 = sub_123;
    sub_122 = sub_134;
  };
  if (controller_ck_51_1) {
    sub_121 = v_969;
  } else {
    sub_121 = sub_122;
  };
  if (controller_worker) {
    v_995 = sub_121;
    sub_84 = sub_85;
  } else {
    v_995 = sub_85;
    sub_84 = sub_121;
  };
  if (controller_ck_35_1) {
    v_996 = v_995;
  } else {
    v_996 = sub_84;
  };
  if (p_controller_c_window) {
    sub_0 = v_996;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_window = sub_0;;
}

void Controller_controller__controller_controller_controller_c_pc_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered,
  int controller_door_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_20, int controller_ck_35_1, int controller_pnr_19,
  int controller_ck_37_1, int controller_pnr_18, int controller_ck_39_1,
  int controller_pnr_17, int controller_ck_41_1, int controller_pnr_16,
  int controller_ck_44_1, int controller_pnr_15, int controller_ck_46_1,
  int controller_pnr_14, int controller_v_277, int controller_v_276,
  int controller_pnr_13, int controller_ck_51_1, int controller_pnr_12,
  int controller_ck_54_1, int controller_pnr_11, int controller_ck_56_1,
  int controller_pnr_10, int controller_ck_59_1, int controller_pnr_9,
  int controller_ck_61_1, int controller_pnr_8, int controller_ck_64_1,
  int controller_pnr_7, int controller_ck_66_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_door,
  Controller_controller__controller_controller_controller_c_pc_out* _out) {
  
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
  sub_15 = false;
  sub_17 = (controller_c_door&&false);
  v_1003 = !(controller_c_door);
  sub_18 = (v_1003&&false);
  if (controller_ck_44_1) {
    sub_16 = sub_18;
  } else {
    sub_16 = sub_17;
  };
  if (controller_door_failed_recovered) {
    v_1004 = sub_16;
    sub_14 = sub_15;
  } else {
    v_1004 = sub_15;
    sub_14 = sub_16;
  };
  if (controller_ck_46_1) {
    sub_13 = v_1004;
  } else {
    sub_13 = sub_14;
  };
  sub_12 = sub_13;
  sub_22 = true;
  v_1001 = !(controller_c_door);
  sub_24 = (v_1001||false);
  sub_25 = (controller_c_door||false);
  if (controller_ck_44_1) {
    sub_23 = sub_25;
  } else {
    sub_23 = sub_24;
  };
  if (controller_door_failed_recovered) {
    v_1002 = sub_23;
    sub_21 = sub_22;
  } else {
    v_1002 = sub_22;
    sub_21 = sub_23;
  };
  if (controller_ck_46_1) {
    sub_20 = v_1002;
  } else {
    sub_20 = sub_21;
  };
  sub_19 = sub_20;
  if (controller_ck_39_1) {
    sub_11 = sub_19;
  } else {
    sub_11 = sub_12;
  };
  if (controller_ck_44_1) {
    sub_30 = sub_17;
  } else {
    sub_30 = sub_18;
  };
  if (controller_door_failed_recovered) {
    v_1000 = sub_30;
    sub_29 = sub_15;
  } else {
    v_1000 = sub_15;
    sub_29 = sub_30;
  };
  if (controller_ck_46_1) {
    sub_28 = v_1000;
  } else {
    sub_28 = sub_29;
  };
  sub_27 = sub_28;
  if (controller_ck_44_1) {
    sub_34 = sub_24;
  } else {
    sub_34 = sub_25;
  };
  if (controller_door_failed_recovered) {
    v_999 = sub_34;
    sub_33 = sub_22;
  } else {
    v_999 = sub_22;
    sub_33 = sub_34;
  };
  if (controller_ck_46_1) {
    sub_32 = v_999;
  } else {
    sub_32 = sub_33;
  };
  sub_31 = sub_32;
  if (controller_ck_39_1) {
    sub_26 = sub_31;
  } else {
    sub_26 = sub_27;
  };
  if (controller_cleaner) {
    v_1005 = sub_26;
    sub_10 = sub_11;
  } else {
    v_1005 = sub_11;
    sub_10 = sub_26;
  };
  if (controller_ck_37_1) {
    sub_9 = v_1005;
  } else {
    sub_9 = sub_10;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_42 = sub_11;
  sub_41 = sub_42;
  if (controller_v_277) {
    sub_40 = false;
  } else {
    sub_40 = sub_41;
  };
  if (controller_v_276) {
    sub_39 = sub_41;
  } else {
    sub_39 = sub_40;
  };
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  if (controller_air_failed_recovered) {
    v_1006 = sub_35;
    sub_3 = sub_4;
  } else {
    v_1006 = sub_4;
    sub_3 = sub_35;
  };
  if (controller_ck_51_1) {
    sub_2 = v_1006;
  } else {
    sub_2 = sub_3;
  };
  if (controller_ck_39_1) {
    sub_51 = sub_27;
  } else {
    sub_51 = sub_31;
  };
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  if (controller_ck_39_1) {
    sub_61 = sub_12;
  } else {
    sub_61 = sub_19;
  };
  sub_64 = sub_22;
  sub_63 = sub_64;
  sub_65 = sub_15;
  if (controller_ck_39_1) {
    sub_62 = sub_65;
  } else {
    sub_62 = sub_63;
  };
  if (controller_cleaner) {
    v_997 = sub_62;
    sub_60 = sub_61;
  } else {
    v_997 = sub_61;
    sub_60 = sub_62;
  };
  if (controller_ck_37_1) {
    sub_59 = v_997;
  } else {
    sub_59 = sub_60;
  };
  sub_58 = sub_59;
  if (controller_cleaner) {
    v = sub_62;
    sub_67 = false;
  } else {
    v = false;
    sub_67 = sub_62;
  };
  if (controller_ck_37_1) {
    sub_66 = v;
  } else {
    sub_66 = sub_67;
  };
  if (controller_v_277) {
    sub_57 = sub_66;
  } else {
    sub_57 = sub_58;
  };
  if (controller_v_276) {
    sub_56 = sub_58;
  } else {
    sub_56 = sub_57;
  };
  sub_55 = sub_56;
  sub_54 = sub_55;
  sub_53 = sub_54;
  sub_52 = sub_53;
  if (controller_air_failed_recovered) {
    v_998 = sub_52;
    sub_44 = sub_45;
  } else {
    v_998 = sub_45;
    sub_44 = sub_52;
  };
  if (controller_ck_51_1) {
    sub_43 = v_998;
  } else {
    sub_43 = sub_44;
  };
  if (controller_worker) {
    v_1007 = sub_43;
    sub_1 = sub_2;
  } else {
    v_1007 = sub_2;
    sub_1 = sub_43;
  };
  if (controller_ck_35_1) {
    sub_0 = v_1007;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_pc = sub_0;;
}

void Controller_controller__controller_controller_controller_c_door_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered,
  int controller_door_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_20, int controller_ck_35_1, int controller_pnr_19,
  int controller_ck_37_1, int controller_pnr_18, int controller_ck_39_1,
  int controller_pnr_17, int controller_ck_41_1, int controller_pnr_16,
  int controller_ck_44_1, int controller_pnr_15, int controller_ck_46_1,
  int controller_pnr_14, int controller_v_277, int controller_v_276,
  int controller_pnr_13, int controller_ck_51_1, int controller_pnr_12,
  int controller_ck_54_1, int controller_pnr_11, int controller_ck_56_1,
  int controller_pnr_10, int controller_ck_59_1, int controller_pnr_9,
  int controller_ck_61_1, int controller_pnr_8, int controller_ck_64_1,
  int controller_pnr_7, int controller_ck_66_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door,
  Controller_controller__controller_controller_controller_c_door_out* _out) {
  
  int v_1014;
  int v_1013;
  int v_1012;
  int v_1011;
  int v_1010;
  int v_1009;
  int v_1008;
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
  sub_14 = p_controller_c_door;
  sub_15 = controller_ck_44_1;
  if (controller_door_failed_recovered) {
    v_1011 = sub_15;
    sub_13 = sub_14;
  } else {
    v_1011 = sub_14;
    sub_13 = sub_15;
  };
  if (controller_ck_46_1) {
    sub_12 = v_1011;
  } else {
    sub_12 = sub_13;
  };
  sub_11 = sub_12;
  sub_19 = !(controller_ck_44_1);
  if (controller_door_failed_recovered) {
    v_1010 = sub_19;
    sub_18 = sub_14;
  } else {
    v_1010 = sub_14;
    sub_18 = sub_19;
  };
  if (controller_ck_46_1) {
    sub_17 = v_1010;
  } else {
    sub_17 = sub_18;
  };
  sub_16 = sub_17;
  if (controller_cleaner) {
    v_1012 = sub_16;
    sub_10 = sub_11;
  } else {
    v_1012 = sub_11;
    sub_10 = sub_16;
  };
  if (controller_ck_37_1) {
    sub_9 = v_1012;
  } else {
    sub_9 = sub_10;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_27 = sub_11;
  sub_26 = sub_27;
  if (controller_v_277) {
    sub_25 = false;
  } else {
    sub_25 = sub_26;
  };
  if (controller_v_276) {
    sub_24 = sub_26;
  } else {
    sub_24 = sub_25;
  };
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  if (controller_air_failed_recovered) {
    v_1013 = sub_20;
    sub_3 = sub_4;
  } else {
    v_1013 = sub_4;
    sub_3 = sub_20;
  };
  if (controller_ck_51_1) {
    sub_2 = v_1013;
  } else {
    sub_2 = sub_3;
  };
  sub_35 = sub_16;
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_46 = sub_14;
  sub_45 = sub_46;
  if (controller_cleaner) {
    v_1008 = sub_45;
    sub_44 = sub_11;
  } else {
    v_1008 = sub_11;
    sub_44 = sub_45;
  };
  if (controller_ck_37_1) {
    sub_43 = v_1008;
  } else {
    sub_43 = sub_44;
  };
  sub_42 = sub_43;
  if (controller_cleaner) {
    v = sub_45;
    sub_48 = false;
  } else {
    v = false;
    sub_48 = sub_45;
  };
  if (controller_ck_37_1) {
    sub_47 = v;
  } else {
    sub_47 = sub_48;
  };
  if (controller_v_277) {
    sub_41 = sub_47;
  } else {
    sub_41 = sub_42;
  };
  if (controller_v_276) {
    sub_40 = sub_42;
  } else {
    sub_40 = sub_41;
  };
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  if (controller_air_failed_recovered) {
    v_1009 = sub_36;
    sub_29 = sub_30;
  } else {
    v_1009 = sub_30;
    sub_29 = sub_36;
  };
  if (controller_ck_51_1) {
    sub_28 = v_1009;
  } else {
    sub_28 = sub_29;
  };
  if (controller_worker) {
    v_1014 = sub_28;
    sub_1 = sub_2;
  } else {
    v_1014 = sub_2;
    sub_1 = sub_28;
  };
  if (controller_ck_35_1) {
    sub_0 = v_1014;
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
                                                       int controller_door_failed_recovered,
                                                       int controller_window_failed_recovered,
                                                       int controller_ck_1,
                                                       int controller_pnr_20,
                                                       int controller_ck_35_1,
                                                       int controller_pnr_19,
                                                       int controller_ck_37_1,
                                                       int controller_pnr_18,
                                                       int controller_ck_39_1,
                                                       int controller_pnr_17,
                                                       int controller_ck_41_1,
                                                       int controller_pnr_16,
                                                       int controller_ck_44_1,
                                                       int controller_pnr_15,
                                                       int controller_ck_46_1,
                                                       int controller_pnr_14,
                                                       int controller_v_277,
                                                       int controller_v_276,
                                                       int controller_pnr_13,
                                                       int controller_ck_51_1,
                                                       int controller_pnr_12,
                                                       int controller_ck_54_1,
                                                       int controller_pnr_11,
                                                       int controller_ck_56_1,
                                                       int controller_pnr_10,
                                                       int controller_ck_59_1,
                                                       int controller_pnr_9,
                                                       int controller_ck_61_1,
                                                       int controller_pnr_8,
                                                       int controller_ck_64_1,
                                                       int controller_pnr_7,
                                                       int controller_ck_66_1,
                                                       int controller_pnr,
                                                       int p_controller_c_blind_2,
                                                       int p_controller_c_light_2,
                                                       int p_controller_c_blind_1,
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
  controller_blind_failed_recovered, controller_door_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_20,
  controller_ck_35_1, controller_pnr_19, controller_ck_37_1,
  controller_pnr_18, controller_ck_39_1, controller_pnr_17,
  controller_ck_41_1, controller_pnr_16, controller_ck_44_1,
  controller_pnr_15, controller_ck_46_1, controller_pnr_14, controller_v_277,
  controller_v_276, controller_pnr_13, controller_ck_51_1, controller_pnr_12,
  controller_ck_54_1, controller_pnr_11, controller_ck_56_1,
  controller_pnr_10, controller_ck_59_1, controller_pnr_9,
  controller_ck_61_1, controller_pnr_8, controller_ck_64_1, controller_pnr_7,
  controller_ck_66_1, controller_pnr, p_controller_c_blind_2,
  p_controller_c_light_2, p_controller_c_blind_1, p_controller_c_light_1,
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
                                                                    controller_door_failed_recovered,
                                                                    controller_window_failed_recovered,
                                                                    controller_ck_1,
                                                                    controller_pnr_20,
                                                                    controller_ck_35_1,
                                                                    controller_pnr_19,
                                                                    controller_ck_37_1,
                                                                    controller_pnr_18,
                                                                    controller_ck_39_1,
                                                                    controller_pnr_17,
                                                                    controller_ck_41_1,
                                                                    controller_pnr_16,
                                                                    controller_ck_44_1,
                                                                    controller_pnr_15,
                                                                    controller_ck_46_1,
                                                                    controller_pnr_14,
                                                                    controller_v_277,
                                                                    controller_v_276,
                                                                    controller_pnr_13,
                                                                    controller_ck_51_1,
                                                                    controller_pnr_12,
                                                                    controller_ck_54_1,
                                                                    controller_pnr_11,
                                                                    controller_ck_56_1,
                                                                    controller_pnr_10,
                                                                    controller_ck_59_1,
                                                                    controller_pnr_9,
                                                                    controller_ck_61_1,
                                                                    controller_pnr_8,
                                                                    controller_ck_64_1,
                                                                    controller_pnr_7,
                                                                    controller_ck_66_1,
                                                                    controller_pnr,
                                                                    p_controller_c_blind_2,
                                                                    p_controller_c_light_2,
                                                                    p_controller_c_blind_1,
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
  controller_blind_failed_recovered, controller_door_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_20,
  controller_ck_35_1, controller_pnr_19, controller_ck_37_1,
  controller_pnr_18, controller_ck_39_1, controller_pnr_17,
  controller_ck_41_1, controller_pnr_16, controller_ck_44_1,
  controller_pnr_15, controller_ck_46_1, controller_pnr_14, controller_v_277,
  controller_v_276, controller_pnr_13, controller_ck_51_1, controller_pnr_12,
  controller_ck_54_1, controller_pnr_11, controller_ck_56_1,
  controller_pnr_10, controller_ck_59_1, controller_pnr_9,
  controller_ck_61_1, controller_pnr_8, controller_ck_64_1, controller_pnr_7,
  controller_ck_66_1, controller_pnr, p_controller_c_blind_2,
  p_controller_c_light_2, p_controller_c_blind_1, p_controller_c_light_1,
  p_controller_c_closet, p_controller_c_air_2, p_controller_c_air_1,
  p_controller_c_window, p_controller_c_pc, p_controller_c_door,
  _out->controller_c_pc, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_window_out_st);
  _out->controller_c_window = Controller_controller__controller_controller_controller_c_window_out_st.controller_c_window;
  Controller_controller__controller_controller_controller_c_air_1_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_door_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_20,
  controller_ck_35_1, controller_pnr_19, controller_ck_37_1,
  controller_pnr_18, controller_ck_39_1, controller_pnr_17,
  controller_ck_41_1, controller_pnr_16, controller_ck_44_1,
  controller_pnr_15, controller_ck_46_1, controller_pnr_14, controller_v_277,
  controller_v_276, controller_pnr_13, controller_ck_51_1, controller_pnr_12,
  controller_ck_54_1, controller_pnr_11, controller_ck_56_1,
  controller_pnr_10, controller_ck_59_1, controller_pnr_9,
  controller_ck_61_1, controller_pnr_8, controller_ck_64_1, controller_pnr_7,
  controller_ck_66_1, controller_pnr, p_controller_c_blind_2,
  p_controller_c_light_2, p_controller_c_blind_1, p_controller_c_light_1,
  p_controller_c_closet, p_controller_c_air_2, p_controller_c_air_1,
  p_controller_c_window, p_controller_c_pc, p_controller_c_door,
  _out->controller_c_window, _out->controller_c_pc, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_air_1_out_st);
  _out->controller_c_air_1 = Controller_controller__controller_controller_controller_c_air_1_out_st.controller_c_air_1;
  Controller_controller__controller_controller_controller_c_air_2_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_door_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_20,
  controller_ck_35_1, controller_pnr_19, controller_ck_37_1,
  controller_pnr_18, controller_ck_39_1, controller_pnr_17,
  controller_ck_41_1, controller_pnr_16, controller_ck_44_1,
  controller_pnr_15, controller_ck_46_1, controller_pnr_14, controller_v_277,
  controller_v_276, controller_pnr_13, controller_ck_51_1, controller_pnr_12,
  controller_ck_54_1, controller_pnr_11, controller_ck_56_1,
  controller_pnr_10, controller_ck_59_1, controller_pnr_9,
  controller_ck_61_1, controller_pnr_8, controller_ck_64_1, controller_pnr_7,
  controller_ck_66_1, controller_pnr, p_controller_c_blind_2,
  p_controller_c_light_2, p_controller_c_blind_1, p_controller_c_light_1,
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
  controller_blind_failed_recovered, controller_door_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_20,
  controller_ck_35_1, controller_pnr_19, controller_ck_37_1,
  controller_pnr_18, controller_ck_39_1, controller_pnr_17,
  controller_ck_41_1, controller_pnr_16, controller_ck_44_1,
  controller_pnr_15, controller_ck_46_1, controller_pnr_14, controller_v_277,
  controller_v_276, controller_pnr_13, controller_ck_51_1, controller_pnr_12,
  controller_ck_54_1, controller_pnr_11, controller_ck_56_1,
  controller_pnr_10, controller_ck_59_1, controller_pnr_9,
  controller_ck_61_1, controller_pnr_8, controller_ck_64_1, controller_pnr_7,
  controller_ck_66_1, controller_pnr, p_controller_c_blind_2,
  p_controller_c_light_2, p_controller_c_blind_1, p_controller_c_light_1,
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
  controller_blind_failed_recovered, controller_door_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_20,
  controller_ck_35_1, controller_pnr_19, controller_ck_37_1,
  controller_pnr_18, controller_ck_39_1, controller_pnr_17,
  controller_ck_41_1, controller_pnr_16, controller_ck_44_1,
  controller_pnr_15, controller_ck_46_1, controller_pnr_14, controller_v_277,
  controller_v_276, controller_pnr_13, controller_ck_51_1, controller_pnr_12,
  controller_ck_54_1, controller_pnr_11, controller_ck_56_1,
  controller_pnr_10, controller_ck_59_1, controller_pnr_9,
  controller_ck_61_1, controller_pnr_8, controller_ck_64_1, controller_pnr_7,
  controller_ck_66_1, controller_pnr, p_controller_c_blind_2,
  p_controller_c_light_2, p_controller_c_blind_1, p_controller_c_light_1,
  p_controller_c_closet, p_controller_c_air_2, p_controller_c_air_1,
  p_controller_c_window, p_controller_c_pc, p_controller_c_door,
  _out->controller_c_closet, _out->controller_c_air_2,
  _out->controller_c_air_1, _out->controller_c_window, _out->controller_c_pc,
  _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_light_1_out_st);
  _out->controller_c_light_1 = Controller_controller__controller_controller_controller_c_light_1_out_st.controller_c_light_1;
  Controller_controller__controller_controller_controller_c_blind_1_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_door_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_20,
  controller_ck_35_1, controller_pnr_19, controller_ck_37_1,
  controller_pnr_18, controller_ck_39_1, controller_pnr_17,
  controller_ck_41_1, controller_pnr_16, controller_ck_44_1,
  controller_pnr_15, controller_ck_46_1, controller_pnr_14, controller_v_277,
  controller_v_276, controller_pnr_13, controller_ck_51_1, controller_pnr_12,
  controller_ck_54_1, controller_pnr_11, controller_ck_56_1,
  controller_pnr_10, controller_ck_59_1, controller_pnr_9,
  controller_ck_61_1, controller_pnr_8, controller_ck_64_1, controller_pnr_7,
  controller_ck_66_1, controller_pnr, p_controller_c_blind_2,
  p_controller_c_light_2, p_controller_c_blind_1, p_controller_c_light_1,
  p_controller_c_closet, p_controller_c_air_2, p_controller_c_air_1,
  p_controller_c_window, p_controller_c_pc, p_controller_c_door,
  _out->controller_c_light_1, _out->controller_c_closet,
  _out->controller_c_air_2, _out->controller_c_air_1,
  _out->controller_c_window, _out->controller_c_pc, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_blind_1_out_st);
  _out->controller_c_blind_1 = Controller_controller__controller_controller_controller_c_blind_1_out_st.controller_c_blind_1;
  Controller_controller__controller_controller_controller_c_light_2_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_door_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_20,
  controller_ck_35_1, controller_pnr_19, controller_ck_37_1,
  controller_pnr_18, controller_ck_39_1, controller_pnr_17,
  controller_ck_41_1, controller_pnr_16, controller_ck_44_1,
  controller_pnr_15, controller_ck_46_1, controller_pnr_14, controller_v_277,
  controller_v_276, controller_pnr_13, controller_ck_51_1, controller_pnr_12,
  controller_ck_54_1, controller_pnr_11, controller_ck_56_1,
  controller_pnr_10, controller_ck_59_1, controller_pnr_9,
  controller_ck_61_1, controller_pnr_8, controller_ck_64_1, controller_pnr_7,
  controller_ck_66_1, controller_pnr, p_controller_c_blind_2,
  p_controller_c_light_2, p_controller_c_blind_1, p_controller_c_light_1,
  p_controller_c_closet, p_controller_c_air_2, p_controller_c_air_1,
  p_controller_c_window, p_controller_c_pc, p_controller_c_door,
  _out->controller_c_blind_1, _out->controller_c_light_1,
  _out->controller_c_closet, _out->controller_c_air_2,
  _out->controller_c_air_1, _out->controller_c_window, _out->controller_c_pc,
  _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_light_2_out_st);
  _out->controller_c_light_2 = Controller_controller__controller_controller_controller_c_light_2_out_st.controller_c_light_2;
  Controller_controller__controller_controller_controller_c_blind_2_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_door_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_20,
  controller_ck_35_1, controller_pnr_19, controller_ck_37_1,
  controller_pnr_18, controller_ck_39_1, controller_pnr_17,
  controller_ck_41_1, controller_pnr_16, controller_ck_44_1,
  controller_pnr_15, controller_ck_46_1, controller_pnr_14, controller_v_277,
  controller_v_276, controller_pnr_13, controller_ck_51_1, controller_pnr_12,
  controller_ck_54_1, controller_pnr_11, controller_ck_56_1,
  controller_pnr_10, controller_ck_59_1, controller_pnr_9,
  controller_ck_61_1, controller_pnr_8, controller_ck_64_1, controller_pnr_7,
  controller_ck_66_1, controller_pnr, p_controller_c_blind_2,
  p_controller_c_light_2, p_controller_c_blind_1, p_controller_c_light_1,
  p_controller_c_closet, p_controller_c_air_2, p_controller_c_air_1,
  p_controller_c_window, p_controller_c_pc, p_controller_c_door,
  _out->controller_c_light_2, _out->controller_c_blind_1,
  _out->controller_c_light_1, _out->controller_c_closet,
  _out->controller_c_air_2, _out->controller_c_air_1,
  _out->controller_c_window, _out->controller_c_pc, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_blind_2_out_st);
  _out->controller_c_blind_2 = Controller_controller__controller_controller_controller_c_blind_2_out_st.controller_c_blind_2;
}

