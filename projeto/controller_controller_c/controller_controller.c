/* --- Generated the 13/8/2018 at 18:53 --- */
/* --- heptagon compiler, version 1.03.00 (compiled mon. aug. 6 15:37:40 CET 2018) --- */
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
  int controller_closet_failed_recovered, int controller_pc_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_17, int controller_ck_35_1, int controller_pnr_16,
  int controller_ck_37_1, int controller_pnr_15, int controller_ck_39_1,
  int controller_pnr_14, int controller_ck_41_1, int controller_pnr_13,
  int controller_v_277, int controller_v_276, int controller_pnr_12,
  int controller_ck_45_1, int controller_pnr_11, int controller_ck_47_1,
  int controller_pnr_10, int controller_ck_50_1, int controller_pnr_9,
  int controller_ck_52_1, int controller_pnr_8, int controller_ck_55_1,
  int controller_pnr_7, int controller_ck_57_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_light_2,
  int controller_c_blind_1, int controller_c_light_1,
  int controller_c_closet, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_blind_2_out* _out) {
  
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
  int sub_552;
  int sub_553;
  int sub_554;
  int sub_555;
  int sub_556;
  int sub_557;
  int sub_558;
  int sub_559;
  int sub_560;
  int sub_561;
  int sub_562;
  int sub_563;
  int sub_564;
  int sub_565;
  int sub_566;
  int sub_567;
  int sub_568;
  int sub_569;
  int sub_570;
  int sub_571;
  int sub_572;
  int sub_573;
  int sub_574;
  int sub_575;
  int sub_576;
  int sub_577;
  int sub_578;
  int sub_579;
  int sub_580;
  int sub_581;
  int sub_582;
  int sub_583;
  sub_24 = false;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  if (controller_c_air_1) {
    sub_17 = sub_18;
  } else {
    sub_17 = false;
  };
  if (controller_c_air_2) {
    sub_16 = sub_17;
  } else {
    sub_16 = false;
  };
  if (controller_c_air_1) {
    sub_26 = false;
  } else {
    sub_26 = sub_18;
  };
  sub_25 = sub_26;
  if (controller_v_276) {
    sub_15 = sub_25;
  } else {
    sub_15 = sub_16;
  };
  if (controller_c_air_2) {
    sub_27 = false;
  } else {
    sub_27 = sub_17;
  };
  if (controller_v_276) {
    v_253 = sub_27;
  } else {
    v_253 = false;
  };
  if (controller_v_277) {
    sub_14 = v_253;
  } else {
    sub_14 = sub_15;
  };
  if (controller_c_door) {
    v_254 = sub_14;
    sub_13 = false;
  } else {
    v_254 = false;
    sub_13 = sub_14;
  };
  if (controller_ck_39_1) {
    sub_12 = v_254;
  } else {
    sub_12 = sub_13;
  };
  sub_11 = sub_12;
  if (controller_cleaner) {
    v_255 = false;
    sub_10 = sub_11;
  } else {
    v_255 = sub_11;
    sub_10 = false;
  };
  if (controller_ck_37_1) {
    sub_9 = v_255;
  } else {
    sub_9 = sub_10;
  };
  if (controller_c_pc) {
    v_256 = sub_9;
    sub_8 = false;
  } else {
    v_256 = false;
    sub_8 = sub_9;
  };
  if (controller_ck_41_1) {
    v_257 = v_256;
  } else {
    v_257 = sub_8;
  };
  if (controller_c_window) {
    sub_7 = v_257;
  } else {
    sub_7 = false;
  };
  if (controller_blind_failed_recovered) {
    sub_41 = sub_20;
    sub_42 = false;
  } else {
    sub_41 = false;
    sub_42 = sub_20;
  };
  if (controller_ck_57_1) {
    sub_40 = sub_42;
  } else {
    sub_40 = sub_41;
  };
  if (controller_light_failed_recovered) {
    v_250 = false;
    sub_39 = sub_40;
  } else {
    v_250 = sub_40;
    sub_39 = false;
  };
  if (controller_ck_52_1) {
    sub_38 = v_250;
  } else {
    sub_38 = sub_39;
  };
  if (controller_c_air_1) {
    sub_37 = false;
  } else {
    sub_37 = sub_38;
  };
  sub_36 = sub_37;
  if (controller_v_276) {
    v_251 = sub_36;
  } else {
    v_251 = false;
  };
  if (controller_c_air_1) {
    sub_44 = sub_38;
  } else {
    sub_44 = false;
  };
  if (controller_c_air_2) {
    sub_43 = sub_44;
  } else {
    sub_43 = false;
  };
  if (controller_v_276) {
    sub_35 = sub_43;
  } else {
    sub_35 = sub_36;
  };
  if (controller_v_277) {
    sub_34 = v_251;
  } else {
    sub_34 = sub_35;
  };
  if (controller_c_door) {
    v_252 = sub_34;
    sub_33 = false;
  } else {
    v_252 = false;
    sub_33 = sub_34;
  };
  if (controller_ck_39_1) {
    sub_32 = v_252;
  } else {
    sub_32 = sub_33;
  };
  sub_31 = sub_32;
  if (controller_cleaner) {
    sub_30 = false;
    sub_45 = sub_31;
  } else {
    sub_30 = sub_31;
    sub_45 = false;
  };
  if (controller_ck_37_1) {
    sub_29 = sub_45;
  } else {
    sub_29 = sub_30;
  };
  if (controller_c_pc) {
    v_258 = sub_29;
    sub_28 = false;
  } else {
    v_258 = false;
    sub_28 = sub_29;
  };
  if (controller_ck_41_1) {
    v_259 = v_258;
  } else {
    v_259 = sub_28;
  };
  if (controller_c_window) {
    v_260 = v_259;
  } else {
    v_260 = false;
  };
  if (controller_c_closet) {
    sub_6 = sub_7;
  } else {
    sub_6 = v_260;
  };
  sub_56 = sub_40;
  if (controller_c_air_1) {
    sub_55 = sub_56;
  } else {
    sub_55 = false;
  };
  if (controller_c_air_2) {
    v_246 = false;
  } else {
    v_246 = sub_55;
  };
  if (controller_v_276) {
    v_247 = v_246;
  } else {
    v_247 = false;
  };
  if (controller_c_air_2) {
    sub_54 = sub_55;
  } else {
    sub_54 = false;
  };
  if (controller_c_air_1) {
    sub_57 = false;
  } else {
    sub_57 = sub_56;
  };
  if (controller_v_276) {
    sub_53 = sub_57;
  } else {
    sub_53 = sub_54;
  };
  if (controller_v_277) {
    sub_52 = v_247;
  } else {
    sub_52 = sub_53;
  };
  if (controller_c_door) {
    v_248 = sub_52;
    sub_51 = false;
  } else {
    v_248 = false;
    sub_51 = sub_52;
  };
  if (controller_ck_39_1) {
    sub_50 = v_248;
  } else {
    sub_50 = sub_51;
  };
  sub_49 = sub_50;
  if (controller_cleaner) {
    v_249 = false;
    sub_48 = sub_49;
  } else {
    v_249 = sub_49;
    sub_48 = false;
  };
  if (controller_ck_37_1) {
    sub_47 = v_249;
  } else {
    sub_47 = sub_48;
  };
  if (controller_c_pc) {
    v_261 = sub_47;
    sub_46 = false;
  } else {
    v_261 = false;
    sub_46 = sub_47;
  };
  if (controller_ck_41_1) {
    v_262 = v_261;
  } else {
    v_262 = sub_46;
  };
  if (controller_c_window) {
    v_263 = v_262;
  } else {
    v_263 = false;
  };
  if (controller_ck_57_1) {
    sub_72 = sub_41;
  } else {
    sub_72 = sub_42;
  };
  if (controller_light_failed_recovered) {
    v_240 = sub_72;
    sub_71 = sub_19;
  } else {
    v_240 = sub_19;
    sub_71 = sub_72;
  };
  if (controller_ck_52_1) {
    sub_70 = v_240;
  } else {
    sub_70 = sub_71;
  };
  if (controller_c_air_1) {
    sub_69 = false;
  } else {
    sub_69 = sub_70;
  };
  sub_68 = sub_69;
  if (controller_v_276) {
    v_241 = sub_68;
  } else {
    v_241 = false;
  };
  if (controller_c_air_1) {
    sub_74 = sub_70;
  } else {
    sub_74 = false;
  };
  if (controller_c_air_2) {
    sub_73 = sub_74;
  } else {
    sub_73 = false;
  };
  if (controller_v_276) {
    sub_67 = sub_73;
  } else {
    sub_67 = sub_68;
  };
  if (controller_v_277) {
    sub_66 = v_241;
  } else {
    sub_66 = sub_67;
  };
  if (controller_c_door) {
    v_242 = sub_66;
    sub_65 = false;
  } else {
    v_242 = false;
    sub_65 = sub_66;
  };
  if (controller_ck_39_1) {
    sub_64 = v_242;
  } else {
    sub_64 = sub_65;
  };
  if (controller_light_failed_recovered) {
    v_237 = false;
    sub_82 = sub_19;
  } else {
    v_237 = sub_19;
    sub_82 = false;
  };
  if (controller_ck_52_1) {
    sub_81 = v_237;
  } else {
    sub_81 = sub_82;
  };
  if (controller_c_air_1) {
    sub_80 = false;
  } else {
    sub_80 = sub_81;
  };
  sub_79 = sub_80;
  if (controller_v_276) {
    v_238 = sub_79;
  } else {
    v_238 = false;
  };
  if (controller_c_air_1) {
    sub_84 = sub_81;
  } else {
    sub_84 = false;
  };
  if (controller_c_air_2) {
    sub_83 = sub_84;
  } else {
    sub_83 = false;
  };
  if (controller_v_276) {
    sub_78 = sub_83;
  } else {
    sub_78 = sub_79;
  };
  if (controller_v_277) {
    sub_77 = v_238;
  } else {
    sub_77 = sub_78;
  };
  if (controller_c_door) {
    v_239 = sub_77;
    sub_76 = false;
  } else {
    v_239 = false;
    sub_76 = sub_77;
  };
  if (controller_ck_39_1) {
    sub_75 = v_239;
  } else {
    sub_75 = sub_76;
  };
  if (controller_change_shift) {
    v_243 = sub_75;
    sub_63 = sub_64;
  } else {
    v_243 = sub_64;
    sub_63 = sub_75;
  };
  if (controller_ck_1) {
    sub_62 = v_243;
  } else {
    sub_62 = sub_63;
  };
  if (controller_cleaner) {
    sub_61 = false;
    sub_85 = sub_62;
  } else {
    sub_61 = sub_62;
    sub_85 = false;
  };
  if (controller_ck_37_1) {
    sub_60 = sub_85;
  } else {
    sub_60 = sub_61;
  };
  if (controller_c_pc) {
    v_244 = sub_60;
    sub_59 = false;
  } else {
    v_244 = false;
    sub_59 = sub_60;
  };
  if (controller_ck_41_1) {
    v_245 = v_244;
  } else {
    v_245 = sub_59;
  };
  if (controller_c_window) {
    sub_58 = v_245;
  } else {
    sub_58 = false;
  };
  if (controller_c_closet) {
    v_264 = v_263;
  } else {
    v_264 = sub_58;
  };
  if (controller_ck_55_1) {
    v_265 = v_264;
  } else {
    v_265 = sub_6;
  };
  sub_107 = true;
  sub_106 = sub_107;
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  if (controller_blind_failed_recovered) {
    sub_102 = sub_20;
    sub_108 = sub_103;
  } else {
    sub_102 = sub_103;
    sub_108 = sub_20;
  };
  if (controller_ck_57_1) {
    sub_101 = sub_108;
  } else {
    sub_101 = sub_102;
  };
  if (controller_blind_failed_recovered) {
    sub_110 = false;
    sub_111 = sub_103;
  } else {
    sub_110 = sub_103;
    sub_111 = false;
  };
  if (controller_ck_57_1) {
    sub_109 = sub_111;
  } else {
    sub_109 = sub_110;
  };
  if (controller_light_failed_recovered) {
    v_226 = sub_109;
    sub_100 = sub_101;
  } else {
    v_226 = sub_101;
    sub_100 = sub_109;
  };
  if (controller_ck_52_1) {
    sub_99 = v_226;
  } else {
    sub_99 = sub_100;
  };
  if (controller_c_air_1) {
    sub_98 = false;
  } else {
    sub_98 = sub_99;
  };
  sub_97 = sub_98;
  if (controller_v_276) {
    v_227 = sub_97;
  } else {
    v_227 = false;
  };
  if (controller_c_air_1) {
    sub_113 = sub_99;
  } else {
    sub_113 = false;
  };
  if (controller_c_air_2) {
    sub_112 = sub_113;
  } else {
    sub_112 = false;
  };
  if (controller_v_276) {
    sub_96 = sub_112;
  } else {
    sub_96 = sub_97;
  };
  if (controller_v_277) {
    sub_95 = v_227;
  } else {
    sub_95 = sub_96;
  };
  if (controller_c_door) {
    v_228 = sub_95;
    sub_94 = false;
  } else {
    v_228 = false;
    sub_94 = sub_95;
  };
  if (controller_ck_39_1) {
    sub_93 = v_228;
  } else {
    sub_93 = sub_94;
  };
  if (controller_light_failed_recovered) {
    v_223 = false;
    sub_121 = sub_101;
  } else {
    v_223 = sub_101;
    sub_121 = false;
  };
  if (controller_ck_52_1) {
    sub_120 = v_223;
  } else {
    sub_120 = sub_121;
  };
  if (controller_c_air_1) {
    sub_119 = false;
  } else {
    sub_119 = sub_120;
  };
  sub_118 = sub_119;
  if (controller_v_276) {
    v_224 = sub_118;
  } else {
    v_224 = false;
  };
  if (controller_c_air_1) {
    sub_123 = sub_120;
  } else {
    sub_123 = false;
  };
  if (controller_c_air_2) {
    sub_122 = sub_123;
  } else {
    sub_122 = false;
  };
  if (controller_v_276) {
    sub_117 = sub_122;
  } else {
    sub_117 = sub_118;
  };
  if (controller_v_277) {
    sub_116 = v_224;
  } else {
    sub_116 = sub_117;
  };
  if (controller_c_door) {
    v_225 = sub_116;
    sub_115 = false;
  } else {
    v_225 = false;
    sub_115 = sub_116;
  };
  if (controller_ck_39_1) {
    sub_114 = v_225;
  } else {
    sub_114 = sub_115;
  };
  if (controller_change_shift) {
    v_229 = sub_114;
    sub_92 = sub_93;
  } else {
    v_229 = sub_93;
    sub_92 = sub_114;
  };
  if (controller_ck_1) {
    sub_91 = v_229;
  } else {
    sub_91 = sub_92;
  };
  if (controller_cleaner) {
    sub_90 = false;
    sub_124 = sub_91;
  } else {
    sub_90 = sub_91;
    sub_124 = false;
  };
  if (controller_ck_37_1) {
    sub_89 = sub_124;
  } else {
    sub_89 = sub_90;
  };
  if (controller_c_pc) {
    v_230 = sub_89;
    sub_88 = false;
  } else {
    v_230 = false;
    sub_88 = sub_89;
  };
  if (controller_ck_41_1) {
    v_231 = v_230;
  } else {
    v_231 = sub_88;
  };
  if (controller_c_window) {
    v_232 = v_231;
  } else {
    v_232 = false;
  };
  if (controller_c_closet) {
    sub_87 = sub_7;
  } else {
    sub_87 = v_232;
  };
  sub_135 = sub_101;
  if (controller_c_air_1) {
    sub_134 = sub_135;
  } else {
    sub_134 = false;
  };
  if (controller_c_air_2) {
    v_219 = false;
  } else {
    v_219 = sub_134;
  };
  if (controller_v_276) {
    v_220 = v_219;
  } else {
    v_220 = false;
  };
  if (controller_c_air_2) {
    sub_133 = sub_134;
  } else {
    sub_133 = false;
  };
  if (controller_c_air_1) {
    sub_136 = false;
  } else {
    sub_136 = sub_135;
  };
  if (controller_v_276) {
    sub_132 = sub_136;
  } else {
    sub_132 = sub_133;
  };
  if (controller_v_277) {
    sub_131 = v_220;
  } else {
    sub_131 = sub_132;
  };
  if (controller_c_door) {
    v_221 = sub_131;
    sub_130 = false;
  } else {
    v_221 = false;
    sub_130 = sub_131;
  };
  if (controller_ck_39_1) {
    sub_129 = v_221;
  } else {
    sub_129 = sub_130;
  };
  sub_128 = sub_129;
  if (controller_cleaner) {
    v_222 = false;
    sub_127 = sub_128;
  } else {
    v_222 = sub_128;
    sub_127 = false;
  };
  if (controller_ck_37_1) {
    sub_126 = v_222;
  } else {
    sub_126 = sub_127;
  };
  if (controller_c_pc) {
    v_233 = sub_126;
    sub_125 = false;
  } else {
    v_233 = false;
    sub_125 = sub_126;
  };
  if (controller_ck_41_1) {
    v_234 = v_233;
  } else {
    v_234 = sub_125;
  };
  if (controller_c_window) {
    v_235 = v_234;
  } else {
    v_235 = false;
  };
  if (controller_c_closet) {
    v_236 = v_235;
  } else {
    v_236 = sub_58;
  };
  if (controller_ck_55_1) {
    sub_86 = v_236;
  } else {
    sub_86 = sub_87;
  };
  if (controller_blind_switch) {
    v_266 = v_265;
  } else {
    v_266 = sub_86;
  };
  if (controller_c_blind_1) {
    sub_5 = v_266;
  } else {
    sub_5 = sub_86;
  };
  if (controller_v_276) {
    sub_147 = sub_79;
  } else {
    sub_147 = sub_83;
  };
  if (controller_c_air_2) {
    sub_148 = false;
  } else {
    sub_148 = sub_84;
  };
  if (controller_v_276) {
    v_205 = sub_148;
  } else {
    v_205 = false;
  };
  if (controller_v_277) {
    sub_146 = v_205;
  } else {
    sub_146 = sub_147;
  };
  if (controller_c_door) {
    v_206 = sub_146;
    sub_145 = false;
  } else {
    v_206 = false;
    sub_145 = sub_146;
  };
  if (controller_ck_39_1) {
    sub_144 = v_206;
  } else {
    sub_144 = sub_145;
  };
  sub_143 = sub_144;
  if (controller_cleaner) {
    v_207 = false;
    sub_142 = sub_143;
  } else {
    v_207 = sub_143;
    sub_142 = false;
  };
  if (controller_ck_37_1) {
    sub_141 = v_207;
  } else {
    sub_141 = sub_142;
  };
  if (controller_c_pc) {
    v_208 = sub_141;
    sub_140 = false;
  } else {
    v_208 = false;
    sub_140 = sub_141;
  };
  if (controller_ck_41_1) {
    v_209 = v_208;
  } else {
    v_209 = sub_140;
  };
  if (controller_c_window) {
    sub_139 = v_209;
  } else {
    sub_139 = false;
  };
  if (controller_light_failed_recovered) {
    v_202 = sub_19;
    sub_160 = sub_40;
  } else {
    v_202 = sub_40;
    sub_160 = sub_19;
  };
  if (controller_ck_52_1) {
    sub_159 = v_202;
  } else {
    sub_159 = sub_160;
  };
  if (controller_c_air_1) {
    sub_158 = false;
  } else {
    sub_158 = sub_159;
  };
  sub_157 = sub_158;
  if (controller_v_276) {
    v_203 = sub_157;
  } else {
    v_203 = false;
  };
  if (controller_c_air_1) {
    sub_162 = sub_159;
  } else {
    sub_162 = false;
  };
  if (controller_c_air_2) {
    sub_161 = sub_162;
  } else {
    sub_161 = false;
  };
  if (controller_v_276) {
    sub_156 = sub_161;
  } else {
    sub_156 = sub_157;
  };
  if (controller_v_277) {
    sub_155 = v_203;
  } else {
    sub_155 = sub_156;
  };
  if (controller_c_door) {
    v_204 = sub_155;
    sub_154 = false;
  } else {
    v_204 = false;
    sub_154 = sub_155;
  };
  if (controller_ck_39_1) {
    sub_153 = v_204;
  } else {
    sub_153 = sub_154;
  };
  sub_152 = sub_153;
  if (controller_cleaner) {
    sub_151 = false;
    sub_163 = sub_152;
  } else {
    sub_151 = sub_152;
    sub_163 = false;
  };
  if (controller_ck_37_1) {
    sub_150 = sub_163;
  } else {
    sub_150 = sub_151;
  };
  if (controller_c_pc) {
    v_210 = sub_150;
    sub_149 = false;
  } else {
    v_210 = false;
    sub_149 = sub_150;
  };
  if (controller_ck_41_1) {
    v_211 = v_210;
  } else {
    v_211 = sub_149;
  };
  if (controller_c_window) {
    v_212 = v_211;
  } else {
    v_212 = false;
  };
  if (controller_c_closet) {
    sub_138 = sub_139;
  } else {
    sub_138 = v_212;
  };
  if (controller_v_276) {
    sub_171 = sub_36;
  } else {
    sub_171 = sub_43;
  };
  if (controller_c_air_2) {
    sub_172 = false;
  } else {
    sub_172 = sub_44;
  };
  if (controller_v_276) {
    v_199 = sub_172;
  } else {
    v_199 = false;
  };
  if (controller_v_277) {
    sub_170 = v_199;
  } else {
    sub_170 = sub_171;
  };
  if (controller_c_door) {
    v_200 = sub_170;
    sub_169 = false;
  } else {
    v_200 = false;
    sub_169 = sub_170;
  };
  if (controller_ck_39_1) {
    sub_168 = v_200;
  } else {
    sub_168 = sub_169;
  };
  sub_167 = sub_168;
  if (controller_cleaner) {
    v_201 = false;
    sub_166 = sub_167;
  } else {
    v_201 = sub_167;
    sub_166 = false;
  };
  if (controller_ck_37_1) {
    sub_165 = v_201;
  } else {
    sub_165 = sub_166;
  };
  if (controller_c_pc) {
    v_213 = sub_165;
    sub_164 = false;
  } else {
    v_213 = false;
    sub_164 = sub_165;
  };
  if (controller_ck_41_1) {
    v_214 = v_213;
  } else {
    v_214 = sub_164;
  };
  if (controller_c_window) {
    v_215 = v_214;
  } else {
    v_215 = false;
  };
  if (controller_v_276) {
    v_195 = sub_25;
    sub_181 = sub_16;
  } else {
    v_195 = false;
    sub_181 = sub_25;
  };
  if (controller_v_277) {
    sub_180 = v_195;
  } else {
    sub_180 = sub_181;
  };
  if (controller_c_door) {
    v_196 = sub_180;
    sub_179 = false;
  } else {
    v_196 = false;
    sub_179 = sub_180;
  };
  if (controller_ck_39_1) {
    sub_178 = v_196;
  } else {
    sub_178 = sub_179;
  };
  sub_177 = sub_178;
  if (controller_cleaner) {
    sub_176 = false;
    sub_182 = sub_177;
  } else {
    sub_176 = sub_177;
    sub_182 = false;
  };
  if (controller_ck_37_1) {
    sub_175 = sub_182;
  } else {
    sub_175 = sub_176;
  };
  if (controller_c_pc) {
    v_197 = sub_175;
    sub_174 = false;
  } else {
    v_197 = false;
    sub_174 = sub_175;
  };
  if (controller_ck_41_1) {
    v_198 = v_197;
  } else {
    v_198 = sub_174;
  };
  if (controller_c_window) {
    sub_173 = v_198;
  } else {
    sub_173 = false;
  };
  if (controller_c_closet) {
    v_216 = v_215;
  } else {
    v_216 = sub_173;
  };
  if (controller_ck_55_1) {
    v_217 = v_216;
  } else {
    v_217 = sub_138;
  };
  if (controller_light_failed_recovered) {
    v_185 = sub_19;
    sub_196 = sub_101;
  } else {
    v_185 = sub_101;
    sub_196 = sub_19;
  };
  if (controller_ck_52_1) {
    sub_195 = v_185;
  } else {
    sub_195 = sub_196;
  };
  if (controller_c_air_1) {
    sub_194 = false;
  } else {
    sub_194 = sub_195;
  };
  sub_193 = sub_194;
  if (controller_v_276) {
    v_186 = sub_193;
  } else {
    v_186 = false;
  };
  if (controller_c_air_1) {
    sub_198 = sub_195;
  } else {
    sub_198 = false;
  };
  if (controller_c_air_2) {
    sub_197 = sub_198;
  } else {
    sub_197 = false;
  };
  if (controller_v_276) {
    sub_192 = sub_197;
  } else {
    sub_192 = sub_193;
  };
  if (controller_v_277) {
    sub_191 = v_186;
  } else {
    sub_191 = sub_192;
  };
  if (controller_c_door) {
    v_187 = sub_191;
    sub_190 = false;
  } else {
    v_187 = false;
    sub_190 = sub_191;
  };
  if (controller_ck_39_1) {
    sub_189 = v_187;
  } else {
    sub_189 = sub_190;
  };
  sub_188 = sub_189;
  if (controller_cleaner) {
    sub_187 = false;
    sub_199 = sub_188;
  } else {
    sub_187 = sub_188;
    sub_199 = false;
  };
  if (controller_ck_37_1) {
    sub_186 = sub_199;
  } else {
    sub_186 = sub_187;
  };
  if (controller_c_pc) {
    v_188 = sub_186;
    sub_185 = false;
  } else {
    v_188 = false;
    sub_185 = sub_186;
  };
  if (controller_ck_41_1) {
    v_189 = v_188;
  } else {
    v_189 = sub_185;
  };
  if (controller_c_window) {
    v_190 = v_189;
  } else {
    v_190 = false;
  };
  if (controller_c_closet) {
    sub_184 = sub_139;
  } else {
    sub_184 = v_190;
  };
  if (controller_v_276) {
    sub_207 = sub_118;
  } else {
    sub_207 = sub_122;
  };
  if (controller_c_air_2) {
    sub_208 = false;
  } else {
    sub_208 = sub_123;
  };
  if (controller_v_276) {
    v_182 = sub_208;
  } else {
    v_182 = false;
  };
  if (controller_v_277) {
    sub_206 = v_182;
  } else {
    sub_206 = sub_207;
  };
  if (controller_c_door) {
    v_183 = sub_206;
    sub_205 = false;
  } else {
    v_183 = false;
    sub_205 = sub_206;
  };
  if (controller_ck_39_1) {
    sub_204 = v_183;
  } else {
    sub_204 = sub_205;
  };
  sub_203 = sub_204;
  if (controller_cleaner) {
    v_184 = false;
    sub_202 = sub_203;
  } else {
    v_184 = sub_203;
    sub_202 = false;
  };
  if (controller_ck_37_1) {
    sub_201 = v_184;
  } else {
    sub_201 = sub_202;
  };
  if (controller_c_pc) {
    v_191 = sub_201;
    sub_200 = false;
  } else {
    v_191 = false;
    sub_200 = sub_201;
  };
  if (controller_ck_41_1) {
    v_192 = v_191;
  } else {
    v_192 = sub_200;
  };
  if (controller_c_window) {
    v_193 = v_192;
  } else {
    v_193 = false;
  };
  if (controller_c_closet) {
    v_194 = v_193;
  } else {
    v_194 = sub_173;
  };
  if (controller_ck_55_1) {
    sub_183 = v_194;
  } else {
    sub_183 = sub_184;
  };
  if (controller_blind_switch) {
    v_218 = v_217;
  } else {
    v_218 = sub_183;
  };
  if (controller_c_blind_1) {
    sub_137 = v_218;
  } else {
    sub_137 = sub_183;
  };
  if (controller_ck_50_1) {
    sub_4 = sub_137;
    v_181 = sub_5;
  } else {
    sub_4 = sub_5;
    v_181 = sub_137;
  };
  if (controller_c_light_2) {
    sub_209 = v_181;
  } else {
    sub_209 = sub_4;
  };
  if (controller_light_switch) {
    v_267 = sub_4;
  } else {
    v_267 = sub_209;
  };
  if (controller_c_light_1) {
    sub_3 = v_267;
  } else {
    sub_3 = sub_209;
  };
  if (controller_ck_37_1) {
    sub_215 = sub_30;
  } else {
    sub_215 = sub_45;
  };
  if (controller_c_pc) {
    v_175 = false;
    sub_214 = sub_215;
  } else {
    v_175 = sub_215;
    sub_214 = false;
  };
  if (controller_ck_41_1) {
    v_176 = v_175;
  } else {
    v_176 = sub_214;
  };
  if (controller_c_window) {
    v_177 = v_176;
  } else {
    v_177 = false;
  };
  sub_224 = sub_38;
  sub_223 = sub_224;
  if (controller_v_276) {
    v_172 = sub_43;
  } else {
    v_172 = sub_223;
  };
  if (controller_v_277) {
    sub_222 = v_172;
  } else {
    sub_222 = sub_172;
  };
  sub_221 = sub_222;
  sub_220 = sub_221;
  if (controller_cleaner) {
    v_173 = sub_220;
    sub_219 = false;
  } else {
    v_173 = false;
    sub_219 = sub_220;
  };
  if (controller_ck_37_1) {
    sub_218 = v_173;
  } else {
    sub_218 = sub_219;
  };
  if (controller_c_pc) {
    v_174 = false;
    sub_217 = sub_218;
  } else {
    v_174 = sub_218;
    sub_217 = false;
  };
  if (controller_ck_41_1) {
    sub_216 = v_174;
  } else {
    sub_216 = sub_217;
  };
  if (controller_c_closet) {
    sub_213 = v_177;
  } else {
    sub_213 = sub_216;
  };
  if (controller_ck_37_1) {
    sub_227 = sub_61;
  } else {
    sub_227 = sub_85;
  };
  if (controller_c_pc) {
    v_169 = false;
    sub_226 = sub_227;
  } else {
    v_169 = sub_227;
    sub_226 = false;
  };
  if (controller_ck_41_1) {
    v_170 = v_169;
  } else {
    v_170 = sub_226;
  };
  if (controller_c_window) {
    v_171 = v_170;
  } else {
    v_171 = false;
  };
  if (controller_c_air_2) {
    sub_236 = false;
  } else {
    sub_236 = sub_74;
  };
  sub_238 = sub_70;
  sub_237 = sub_238;
  if (controller_v_276) {
    v_165 = sub_73;
  } else {
    v_165 = sub_237;
  };
  if (controller_v_277) {
    sub_235 = v_165;
  } else {
    sub_235 = sub_236;
  };
  sub_234 = sub_235;
  sub_242 = sub_81;
  sub_241 = sub_242;
  if (controller_v_276) {
    v_164 = sub_83;
  } else {
    v_164 = sub_241;
  };
  if (controller_v_277) {
    sub_240 = v_164;
  } else {
    sub_240 = sub_148;
  };
  sub_239 = sub_240;
  if (controller_change_shift) {
    v_166 = sub_239;
    sub_233 = sub_234;
  } else {
    v_166 = sub_234;
    sub_233 = sub_239;
  };
  if (controller_ck_1) {
    sub_232 = v_166;
  } else {
    sub_232 = sub_233;
  };
  if (controller_cleaner) {
    v_167 = sub_232;
    sub_231 = false;
  } else {
    v_167 = false;
    sub_231 = sub_232;
  };
  if (controller_ck_37_1) {
    sub_230 = v_167;
  } else {
    sub_230 = sub_231;
  };
  if (controller_c_pc) {
    v_168 = false;
    sub_229 = sub_230;
  } else {
    v_168 = sub_230;
    sub_229 = false;
  };
  if (controller_ck_41_1) {
    sub_228 = v_168;
  } else {
    sub_228 = sub_229;
  };
  if (controller_c_closet) {
    sub_225 = v_171;
  } else {
    sub_225 = sub_228;
  };
  if (controller_ck_55_1) {
    v_178 = sub_225;
  } else {
    v_178 = sub_213;
  };
  if (controller_ck_37_1) {
    sub_246 = sub_90;
  } else {
    sub_246 = sub_124;
  };
  if (controller_c_pc) {
    v_161 = false;
    sub_245 = sub_246;
  } else {
    v_161 = sub_246;
    sub_245 = false;
  };
  if (controller_ck_41_1) {
    v_162 = v_161;
  } else {
    v_162 = sub_245;
  };
  if (controller_c_window) {
    v_163 = v_162;
  } else {
    v_163 = false;
  };
  if (controller_c_air_2) {
    sub_255 = false;
  } else {
    sub_255 = sub_113;
  };
  sub_257 = sub_99;
  sub_256 = sub_257;
  if (controller_v_276) {
    v_157 = sub_112;
  } else {
    v_157 = sub_256;
  };
  if (controller_v_277) {
    sub_254 = v_157;
  } else {
    sub_254 = sub_255;
  };
  sub_253 = sub_254;
  sub_261 = sub_120;
  sub_260 = sub_261;
  if (controller_v_276) {
    v_156 = sub_122;
  } else {
    v_156 = sub_260;
  };
  if (controller_v_277) {
    sub_259 = v_156;
  } else {
    sub_259 = sub_208;
  };
  sub_258 = sub_259;
  if (controller_change_shift) {
    v_158 = sub_258;
    sub_252 = sub_253;
  } else {
    v_158 = sub_253;
    sub_252 = sub_258;
  };
  if (controller_ck_1) {
    sub_251 = v_158;
  } else {
    sub_251 = sub_252;
  };
  if (controller_cleaner) {
    v_159 = sub_251;
    sub_250 = false;
  } else {
    v_159 = false;
    sub_250 = sub_251;
  };
  if (controller_ck_37_1) {
    sub_249 = v_159;
  } else {
    sub_249 = sub_250;
  };
  if (controller_c_pc) {
    v_160 = false;
    sub_248 = sub_249;
  } else {
    v_160 = sub_249;
    sub_248 = false;
  };
  if (controller_ck_41_1) {
    sub_247 = v_160;
  } else {
    sub_247 = sub_248;
  };
  if (controller_c_closet) {
    sub_244 = v_163;
  } else {
    sub_244 = sub_247;
  };
  if (controller_ck_55_1) {
    sub_243 = sub_225;
  } else {
    sub_243 = sub_244;
  };
  if (controller_blind_switch) {
    v_179 = v_178;
  } else {
    v_179 = sub_243;
  };
  if (controller_c_blind_1) {
    sub_212 = v_179;
  } else {
    sub_212 = sub_243;
  };
  if (controller_ck_37_1) {
    sub_265 = sub_151;
  } else {
    sub_265 = sub_163;
  };
  if (controller_c_pc) {
    v_151 = false;
    sub_264 = sub_265;
  } else {
    v_151 = sub_265;
    sub_264 = false;
  };
  if (controller_ck_41_1) {
    v_152 = v_151;
  } else {
    v_152 = sub_264;
  };
  if (controller_c_window) {
    v_153 = v_152;
  } else {
    v_153 = false;
  };
  if (controller_c_air_2) {
    sub_273 = false;
  } else {
    sub_273 = sub_162;
  };
  sub_275 = sub_159;
  sub_274 = sub_275;
  if (controller_v_276) {
    v_148 = sub_161;
  } else {
    v_148 = sub_274;
  };
  if (controller_v_277) {
    sub_272 = v_148;
  } else {
    sub_272 = sub_273;
  };
  sub_271 = sub_272;
  sub_270 = sub_271;
  if (controller_cleaner) {
    v_149 = sub_270;
    sub_269 = false;
  } else {
    v_149 = false;
    sub_269 = sub_270;
  };
  if (controller_ck_37_1) {
    sub_268 = v_149;
  } else {
    sub_268 = sub_269;
  };
  if (controller_c_pc) {
    v_150 = false;
    sub_267 = sub_268;
  } else {
    v_150 = sub_268;
    sub_267 = false;
  };
  if (controller_ck_41_1) {
    sub_266 = v_150;
  } else {
    sub_266 = sub_267;
  };
  if (controller_c_closet) {
    sub_263 = v_153;
  } else {
    sub_263 = sub_266;
  };
  if (controller_ck_37_1) {
    sub_278 = sub_176;
  } else {
    sub_278 = sub_182;
  };
  if (controller_c_pc) {
    v_145 = false;
    sub_277 = sub_278;
  } else {
    v_145 = sub_278;
    sub_277 = false;
  };
  if (controller_ck_41_1) {
    v_146 = v_145;
  } else {
    v_146 = sub_277;
  };
  if (controller_c_window) {
    v_147 = v_146;
  } else {
    v_147 = false;
  };
  sub_287 = sub_18;
  sub_286 = sub_287;
  if (controller_v_276) {
    v_142 = sub_16;
  } else {
    v_142 = sub_286;
  };
  if (controller_v_277) {
    sub_285 = v_142;
  } else {
    sub_285 = sub_27;
  };
  sub_284 = sub_285;
  sub_283 = sub_284;
  if (controller_cleaner) {
    v_143 = sub_283;
    sub_282 = false;
  } else {
    v_143 = false;
    sub_282 = sub_283;
  };
  if (controller_ck_37_1) {
    sub_281 = v_143;
  } else {
    sub_281 = sub_282;
  };
  if (controller_c_pc) {
    v_144 = false;
    sub_280 = sub_281;
  } else {
    v_144 = sub_281;
    sub_280 = false;
  };
  if (controller_ck_41_1) {
    sub_279 = v_144;
  } else {
    sub_279 = sub_280;
  };
  if (controller_c_closet) {
    sub_276 = v_147;
  } else {
    sub_276 = sub_279;
  };
  if (controller_ck_55_1) {
    v_154 = sub_276;
  } else {
    v_154 = sub_263;
  };
  if (controller_ck_37_1) {
    sub_291 = sub_187;
  } else {
    sub_291 = sub_199;
  };
  if (controller_c_pc) {
    v_139 = false;
    sub_290 = sub_291;
  } else {
    v_139 = sub_291;
    sub_290 = false;
  };
  if (controller_ck_41_1) {
    v_140 = v_139;
  } else {
    v_140 = sub_290;
  };
  if (controller_c_window) {
    v_141 = v_140;
  } else {
    v_141 = false;
  };
  if (controller_c_air_2) {
    sub_299 = false;
  } else {
    sub_299 = sub_198;
  };
  sub_301 = sub_195;
  sub_300 = sub_301;
  if (controller_v_276) {
    v_136 = sub_197;
  } else {
    v_136 = sub_300;
  };
  if (controller_v_277) {
    sub_298 = v_136;
  } else {
    sub_298 = sub_299;
  };
  sub_297 = sub_298;
  sub_296 = sub_297;
  if (controller_cleaner) {
    v_137 = sub_296;
    sub_295 = false;
  } else {
    v_137 = false;
    sub_295 = sub_296;
  };
  if (controller_ck_37_1) {
    sub_294 = v_137;
  } else {
    sub_294 = sub_295;
  };
  if (controller_c_pc) {
    v_138 = false;
    sub_293 = sub_294;
  } else {
    v_138 = sub_294;
    sub_293 = false;
  };
  if (controller_ck_41_1) {
    sub_292 = v_138;
  } else {
    sub_292 = sub_293;
  };
  if (controller_c_closet) {
    sub_289 = v_141;
  } else {
    sub_289 = sub_292;
  };
  if (controller_ck_55_1) {
    sub_288 = sub_276;
  } else {
    sub_288 = sub_289;
  };
  if (controller_blind_switch) {
    v_155 = v_154;
  } else {
    v_155 = sub_288;
  };
  if (controller_c_blind_1) {
    sub_262 = v_155;
  } else {
    sub_262 = sub_288;
  };
  if (controller_ck_50_1) {
    sub_211 = sub_262;
    v_135 = sub_212;
  } else {
    sub_211 = sub_212;
    v_135 = sub_262;
  };
  if (controller_c_light_2) {
    sub_302 = v_135;
  } else {
    sub_302 = sub_211;
  };
  if (controller_light_switch) {
    v_180 = sub_211;
  } else {
    v_180 = sub_302;
  };
  if (controller_c_light_1) {
    sub_210 = v_180;
  } else {
    sub_210 = sub_302;
  };
  if (controller_worker) {
    v_268 = sub_210;
    sub_2 = sub_3;
  } else {
    v_268 = sub_3;
    sub_2 = sub_210;
  };
  if (controller_ck_35_1) {
    sub_1 = v_268;
  } else {
    sub_1 = sub_2;
  };
  sub_320 = sub_103;
  sub_319 = sub_320;
  if (controller_c_air_1) {
    sub_318 = sub_319;
  } else {
    sub_318 = false;
  };
  if (controller_c_air_2) {
    sub_317 = sub_318;
  } else {
    sub_317 = false;
  };
  if (controller_c_air_1) {
    sub_322 = false;
  } else {
    sub_322 = sub_319;
  };
  sub_321 = sub_322;
  if (controller_v_276) {
    sub_316 = sub_321;
  } else {
    sub_316 = sub_317;
  };
  if (controller_c_air_2) {
    sub_323 = false;
  } else {
    sub_323 = sub_318;
  };
  if (controller_v_276) {
    v_120 = sub_323;
  } else {
    v_120 = false;
  };
  if (controller_v_277) {
    sub_315 = v_120;
  } else {
    sub_315 = sub_316;
  };
  if (controller_c_door) {
    v_121 = sub_315;
    sub_314 = false;
  } else {
    v_121 = false;
    sub_314 = sub_315;
  };
  if (controller_ck_39_1) {
    sub_313 = v_121;
  } else {
    sub_313 = sub_314;
  };
  sub_312 = sub_313;
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
  if (controller_c_pc) {
    v_123 = sub_310;
    sub_309 = false;
  } else {
    v_123 = false;
    sub_309 = sub_310;
  };
  if (controller_ck_41_1) {
    v_124 = v_123;
  } else {
    v_124 = sub_309;
  };
  if (controller_c_window) {
    sub_308 = v_124;
  } else {
    sub_308 = false;
  };
  if (controller_ck_57_1) {
    sub_336 = sub_110;
  } else {
    sub_336 = sub_111;
  };
  if (controller_light_failed_recovered) {
    v_117 = false;
    sub_335 = sub_336;
  } else {
    v_117 = sub_336;
    sub_335 = false;
  };
  if (controller_ck_52_1) {
    sub_334 = v_117;
  } else {
    sub_334 = sub_335;
  };
  if (controller_c_air_1) {
    sub_333 = false;
  } else {
    sub_333 = sub_334;
  };
  sub_332 = sub_333;
  if (controller_v_276) {
    v_118 = sub_332;
  } else {
    v_118 = false;
  };
  if (controller_c_air_1) {
    sub_338 = sub_334;
  } else {
    sub_338 = false;
  };
  if (controller_c_air_2) {
    sub_337 = sub_338;
  } else {
    sub_337 = false;
  };
  if (controller_v_276) {
    sub_331 = sub_337;
  } else {
    sub_331 = sub_332;
  };
  if (controller_v_277) {
    sub_330 = v_118;
  } else {
    sub_330 = sub_331;
  };
  if (controller_c_door) {
    v_119 = sub_330;
    sub_329 = false;
  } else {
    v_119 = false;
    sub_329 = sub_330;
  };
  if (controller_ck_39_1) {
    sub_328 = v_119;
  } else {
    sub_328 = sub_329;
  };
  sub_327 = sub_328;
  if (controller_cleaner) {
    sub_326 = false;
    sub_339 = sub_327;
  } else {
    sub_326 = sub_327;
    sub_339 = false;
  };
  if (controller_ck_37_1) {
    sub_325 = sub_339;
  } else {
    sub_325 = sub_326;
  };
  if (controller_c_pc) {
    v_125 = sub_325;
    sub_324 = false;
  } else {
    v_125 = false;
    sub_324 = sub_325;
  };
  if (controller_ck_41_1) {
    v_126 = v_125;
  } else {
    v_126 = sub_324;
  };
  if (controller_c_window) {
    v_127 = v_126;
  } else {
    v_127 = false;
  };
  if (controller_c_closet) {
    sub_307 = sub_308;
  } else {
    sub_307 = v_127;
  };
  sub_350 = sub_336;
  if (controller_c_air_1) {
    sub_349 = sub_350;
  } else {
    sub_349 = false;
  };
  if (controller_c_air_2) {
    v_113 = false;
  } else {
    v_113 = sub_349;
  };
  if (controller_v_276) {
    v_114 = v_113;
  } else {
    v_114 = false;
  };
  if (controller_c_air_2) {
    sub_348 = sub_349;
  } else {
    sub_348 = false;
  };
  if (controller_c_air_1) {
    sub_351 = false;
  } else {
    sub_351 = sub_350;
  };
  if (controller_v_276) {
    sub_347 = sub_351;
  } else {
    sub_347 = sub_348;
  };
  if (controller_v_277) {
    sub_346 = v_114;
  } else {
    sub_346 = sub_347;
  };
  if (controller_c_door) {
    v_115 = sub_346;
    sub_345 = false;
  } else {
    v_115 = false;
    sub_345 = sub_346;
  };
  if (controller_ck_39_1) {
    sub_344 = v_115;
  } else {
    sub_344 = sub_345;
  };
  sub_343 = sub_344;
  if (controller_cleaner) {
    v_116 = false;
    sub_342 = sub_343;
  } else {
    v_116 = sub_343;
    sub_342 = false;
  };
  if (controller_ck_37_1) {
    sub_341 = v_116;
  } else {
    sub_341 = sub_342;
  };
  if (controller_c_pc) {
    v_128 = sub_341;
    sub_340 = false;
  } else {
    v_128 = false;
    sub_340 = sub_341;
  };
  if (controller_ck_41_1) {
    v_129 = v_128;
  } else {
    v_129 = sub_340;
  };
  if (controller_c_window) {
    v_130 = v_129;
  } else {
    v_130 = false;
  };
  if (controller_light_failed_recovered) {
    v_107 = sub_109;
    sub_365 = sub_320;
  } else {
    v_107 = sub_320;
    sub_365 = sub_109;
  };
  if (controller_ck_52_1) {
    sub_364 = v_107;
  } else {
    sub_364 = sub_365;
  };
  if (controller_c_air_1) {
    sub_363 = false;
  } else {
    sub_363 = sub_364;
  };
  sub_362 = sub_363;
  if (controller_v_276) {
    v_108 = sub_362;
  } else {
    v_108 = false;
  };
  if (controller_c_air_1) {
    sub_367 = sub_364;
  } else {
    sub_367 = false;
  };
  if (controller_c_air_2) {
    sub_366 = sub_367;
  } else {
    sub_366 = false;
  };
  if (controller_v_276) {
    sub_361 = sub_366;
  } else {
    sub_361 = sub_362;
  };
  if (controller_v_277) {
    sub_360 = v_108;
  } else {
    sub_360 = sub_361;
  };
  if (controller_c_door) {
    v_109 = sub_360;
    sub_359 = false;
  } else {
    v_109 = false;
    sub_359 = sub_360;
  };
  if (controller_ck_39_1) {
    sub_358 = v_109;
  } else {
    sub_358 = sub_359;
  };
  if (controller_light_failed_recovered) {
    v_104 = false;
    sub_375 = sub_320;
  } else {
    v_104 = sub_320;
    sub_375 = false;
  };
  if (controller_ck_52_1) {
    sub_374 = v_104;
  } else {
    sub_374 = sub_375;
  };
  if (controller_c_air_1) {
    sub_373 = false;
  } else {
    sub_373 = sub_374;
  };
  sub_372 = sub_373;
  if (controller_v_276) {
    v_105 = sub_372;
  } else {
    v_105 = false;
  };
  if (controller_c_air_1) {
    sub_377 = sub_374;
  } else {
    sub_377 = false;
  };
  if (controller_c_air_2) {
    sub_376 = sub_377;
  } else {
    sub_376 = false;
  };
  if (controller_v_276) {
    sub_371 = sub_376;
  } else {
    sub_371 = sub_372;
  };
  if (controller_v_277) {
    sub_370 = v_105;
  } else {
    sub_370 = sub_371;
  };
  if (controller_c_door) {
    v_106 = sub_370;
    sub_369 = false;
  } else {
    v_106 = false;
    sub_369 = sub_370;
  };
  if (controller_ck_39_1) {
    sub_368 = v_106;
  } else {
    sub_368 = sub_369;
  };
  if (controller_change_shift) {
    v_110 = sub_368;
    sub_357 = sub_358;
  } else {
    v_110 = sub_358;
    sub_357 = sub_368;
  };
  if (controller_ck_1) {
    sub_356 = v_110;
  } else {
    sub_356 = sub_357;
  };
  if (controller_cleaner) {
    sub_355 = false;
    sub_378 = sub_356;
  } else {
    sub_355 = sub_356;
    sub_378 = false;
  };
  if (controller_ck_37_1) {
    sub_354 = sub_378;
  } else {
    sub_354 = sub_355;
  };
  if (controller_c_pc) {
    v_111 = sub_354;
    sub_353 = false;
  } else {
    v_111 = false;
    sub_353 = sub_354;
  };
  if (controller_ck_41_1) {
    v_112 = v_111;
  } else {
    v_112 = sub_353;
  };
  if (controller_c_window) {
    sub_352 = v_112;
  } else {
    sub_352 = false;
  };
  if (controller_c_closet) {
    v_131 = v_130;
  } else {
    v_131 = sub_352;
  };
  if (controller_ck_55_1) {
    v_132 = v_131;
  } else {
    v_132 = sub_307;
  };
  if (controller_ck_57_1) {
    sub_392 = sub_102;
  } else {
    sub_392 = sub_108;
  };
  sub_391 = sub_392;
  if (controller_c_air_1) {
    sub_390 = sub_391;
  } else {
    sub_390 = false;
  };
  if (controller_c_air_2) {
    v_93 = false;
  } else {
    v_93 = sub_390;
  };
  if (controller_v_276) {
    v_94 = v_93;
  } else {
    v_94 = false;
  };
  if (controller_c_air_2) {
    sub_389 = sub_390;
  } else {
    sub_389 = false;
  };
  if (controller_c_air_1) {
    sub_393 = false;
  } else {
    sub_393 = sub_391;
  };
  if (controller_v_276) {
    sub_388 = sub_393;
  } else {
    sub_388 = sub_389;
  };
  if (controller_v_277) {
    sub_387 = v_94;
  } else {
    sub_387 = sub_388;
  };
  if (controller_c_door) {
    v_95 = sub_387;
    sub_386 = false;
  } else {
    v_95 = false;
    sub_386 = sub_387;
  };
  if (controller_ck_39_1) {
    sub_385 = v_95;
  } else {
    sub_385 = sub_386;
  };
  sub_384 = sub_385;
  if (controller_cleaner) {
    v_96 = false;
    sub_383 = sub_384;
  } else {
    v_96 = sub_384;
    sub_383 = false;
  };
  if (controller_ck_37_1) {
    sub_382 = v_96;
  } else {
    sub_382 = sub_383;
  };
  if (controller_c_pc) {
    v_97 = sub_382;
    sub_381 = false;
  } else {
    v_97 = false;
    sub_381 = sub_382;
  };
  if (controller_ck_41_1) {
    v_98 = v_97;
  } else {
    v_98 = sub_381;
  };
  if (controller_c_window) {
    v_99 = v_98;
  } else {
    v_99 = false;
  };
  if (controller_c_closet) {
    sub_380 = v_99;
  } else {
    sub_380 = sub_352;
  };
  if (controller_light_failed_recovered) {
    v_89 = sub_72;
    sub_406 = sub_392;
  } else {
    v_89 = sub_392;
    sub_406 = sub_72;
  };
  if (controller_ck_52_1) {
    sub_405 = v_89;
  } else {
    sub_405 = sub_406;
  };
  if (controller_c_air_1) {
    sub_404 = false;
  } else {
    sub_404 = sub_405;
  };
  sub_403 = sub_404;
  if (controller_v_276) {
    v_90 = sub_403;
  } else {
    v_90 = false;
  };
  if (controller_c_air_1) {
    sub_408 = sub_405;
  } else {
    sub_408 = false;
  };
  if (controller_c_air_2) {
    sub_407 = sub_408;
  } else {
    sub_407 = false;
  };
  if (controller_v_276) {
    sub_402 = sub_407;
  } else {
    sub_402 = sub_403;
  };
  if (controller_v_277) {
    sub_401 = v_90;
  } else {
    sub_401 = sub_402;
  };
  if (controller_c_door) {
    v_91 = sub_401;
    sub_400 = false;
  } else {
    v_91 = false;
    sub_400 = sub_401;
  };
  if (controller_ck_39_1) {
    sub_399 = v_91;
  } else {
    sub_399 = sub_400;
  };
  if (controller_light_failed_recovered) {
    v_86 = false;
    sub_416 = sub_392;
  } else {
    v_86 = sub_392;
    sub_416 = false;
  };
  if (controller_ck_52_1) {
    sub_415 = v_86;
  } else {
    sub_415 = sub_416;
  };
  if (controller_c_air_1) {
    sub_414 = false;
  } else {
    sub_414 = sub_415;
  };
  sub_413 = sub_414;
  if (controller_v_276) {
    v_87 = sub_413;
  } else {
    v_87 = false;
  };
  if (controller_c_air_1) {
    sub_418 = sub_415;
  } else {
    sub_418 = false;
  };
  if (controller_c_air_2) {
    sub_417 = sub_418;
  } else {
    sub_417 = false;
  };
  if (controller_v_276) {
    sub_412 = sub_417;
  } else {
    sub_412 = sub_413;
  };
  if (controller_v_277) {
    sub_411 = v_87;
  } else {
    sub_411 = sub_412;
  };
  if (controller_c_door) {
    v_88 = sub_411;
    sub_410 = false;
  } else {
    v_88 = false;
    sub_410 = sub_411;
  };
  if (controller_ck_39_1) {
    sub_409 = v_88;
  } else {
    sub_409 = sub_410;
  };
  if (controller_change_shift) {
    v_92 = sub_409;
    sub_398 = sub_399;
  } else {
    v_92 = sub_399;
    sub_398 = sub_409;
  };
  if (controller_ck_1) {
    sub_397 = v_92;
  } else {
    sub_397 = sub_398;
  };
  if (controller_cleaner) {
    sub_396 = false;
    sub_419 = sub_397;
  } else {
    sub_396 = sub_397;
    sub_419 = false;
  };
  if (controller_ck_37_1) {
    sub_395 = sub_419;
  } else {
    sub_395 = sub_396;
  };
  if (controller_c_pc) {
    v_100 = sub_395;
    sub_394 = false;
  } else {
    v_100 = false;
    sub_394 = sub_395;
  };
  if (controller_ck_41_1) {
    v_101 = v_100;
  } else {
    v_101 = sub_394;
  };
  if (controller_c_window) {
    v_102 = v_101;
  } else {
    v_102 = false;
  };
  if (controller_c_closet) {
    v_103 = sub_308;
  } else {
    v_103 = v_102;
  };
  if (controller_ck_55_1) {
    sub_379 = v_103;
  } else {
    sub_379 = sub_380;
  };
  if (controller_blind_switch) {
    v_133 = v_132;
  } else {
    v_133 = sub_379;
  };
  if (controller_c_blind_1) {
    sub_306 = v_133;
  } else {
    sub_306 = sub_379;
  };
  if (controller_v_276) {
    sub_430 = sub_372;
  } else {
    sub_430 = sub_376;
  };
  if (controller_c_air_2) {
    sub_431 = false;
  } else {
    sub_431 = sub_377;
  };
  if (controller_v_276) {
    v_72 = sub_431;
  } else {
    v_72 = false;
  };
  if (controller_v_277) {
    sub_429 = v_72;
  } else {
    sub_429 = sub_430;
  };
  if (controller_c_door) {
    v_73 = sub_429;
    sub_428 = false;
  } else {
    v_73 = false;
    sub_428 = sub_429;
  };
  if (controller_ck_39_1) {
    sub_427 = v_73;
  } else {
    sub_427 = sub_428;
  };
  sub_426 = sub_427;
  if (controller_cleaner) {
    v_74 = false;
    sub_425 = sub_426;
  } else {
    v_74 = sub_426;
    sub_425 = false;
  };
  if (controller_ck_37_1) {
    sub_424 = v_74;
  } else {
    sub_424 = sub_425;
  };
  if (controller_c_pc) {
    v_75 = sub_424;
    sub_423 = false;
  } else {
    v_75 = false;
    sub_423 = sub_424;
  };
  if (controller_ck_41_1) {
    v_76 = v_75;
  } else {
    v_76 = sub_423;
  };
  if (controller_c_window) {
    sub_422 = v_76;
  } else {
    sub_422 = false;
  };
  if (controller_light_failed_recovered) {
    v_69 = sub_320;
    sub_443 = sub_336;
  } else {
    v_69 = sub_336;
    sub_443 = sub_320;
  };
  if (controller_ck_52_1) {
    sub_442 = v_69;
  } else {
    sub_442 = sub_443;
  };
  if (controller_c_air_1) {
    sub_441 = false;
  } else {
    sub_441 = sub_442;
  };
  sub_440 = sub_441;
  if (controller_v_276) {
    v_70 = sub_440;
  } else {
    v_70 = false;
  };
  if (controller_c_air_1) {
    sub_445 = sub_442;
  } else {
    sub_445 = false;
  };
  if (controller_c_air_2) {
    sub_444 = sub_445;
  } else {
    sub_444 = false;
  };
  if (controller_v_276) {
    sub_439 = sub_444;
  } else {
    sub_439 = sub_440;
  };
  if (controller_v_277) {
    sub_438 = v_70;
  } else {
    sub_438 = sub_439;
  };
  if (controller_c_door) {
    v_71 = sub_438;
    sub_437 = false;
  } else {
    v_71 = false;
    sub_437 = sub_438;
  };
  if (controller_ck_39_1) {
    sub_436 = v_71;
  } else {
    sub_436 = sub_437;
  };
  sub_435 = sub_436;
  if (controller_cleaner) {
    sub_434 = false;
    sub_446 = sub_435;
  } else {
    sub_434 = sub_435;
    sub_446 = false;
  };
  if (controller_ck_37_1) {
    sub_433 = sub_446;
  } else {
    sub_433 = sub_434;
  };
  if (controller_c_pc) {
    v_77 = sub_433;
    sub_432 = false;
  } else {
    v_77 = false;
    sub_432 = sub_433;
  };
  if (controller_ck_41_1) {
    v_78 = v_77;
  } else {
    v_78 = sub_432;
  };
  if (controller_c_window) {
    v_79 = v_78;
  } else {
    v_79 = false;
  };
  if (controller_c_closet) {
    sub_421 = sub_422;
  } else {
    sub_421 = v_79;
  };
  if (controller_v_276) {
    sub_454 = sub_332;
  } else {
    sub_454 = sub_337;
  };
  if (controller_c_air_2) {
    sub_455 = false;
  } else {
    sub_455 = sub_338;
  };
  if (controller_v_276) {
    v_66 = sub_455;
  } else {
    v_66 = false;
  };
  if (controller_v_277) {
    sub_453 = v_66;
  } else {
    sub_453 = sub_454;
  };
  if (controller_c_door) {
    v_67 = sub_453;
    sub_452 = false;
  } else {
    v_67 = false;
    sub_452 = sub_453;
  };
  if (controller_ck_39_1) {
    sub_451 = v_67;
  } else {
    sub_451 = sub_452;
  };
  sub_450 = sub_451;
  if (controller_cleaner) {
    v_68 = false;
    sub_449 = sub_450;
  } else {
    v_68 = sub_450;
    sub_449 = false;
  };
  if (controller_ck_37_1) {
    sub_448 = v_68;
  } else {
    sub_448 = sub_449;
  };
  if (controller_c_pc) {
    v_80 = sub_448;
    sub_447 = false;
  } else {
    v_80 = false;
    sub_447 = sub_448;
  };
  if (controller_ck_41_1) {
    v_81 = v_80;
  } else {
    v_81 = sub_447;
  };
  if (controller_c_window) {
    v_82 = v_81;
  } else {
    v_82 = false;
  };
  if (controller_v_276) {
    v_62 = sub_321;
    sub_464 = sub_317;
  } else {
    v_62 = false;
    sub_464 = sub_321;
  };
  if (controller_v_277) {
    sub_463 = v_62;
  } else {
    sub_463 = sub_464;
  };
  if (controller_c_door) {
    v_63 = sub_463;
    sub_462 = false;
  } else {
    v_63 = false;
    sub_462 = sub_463;
  };
  if (controller_ck_39_1) {
    sub_461 = v_63;
  } else {
    sub_461 = sub_462;
  };
  sub_460 = sub_461;
  if (controller_cleaner) {
    sub_459 = false;
    sub_465 = sub_460;
  } else {
    sub_459 = sub_460;
    sub_465 = false;
  };
  if (controller_ck_37_1) {
    sub_458 = sub_465;
  } else {
    sub_458 = sub_459;
  };
  if (controller_c_pc) {
    v_64 = sub_458;
    sub_457 = false;
  } else {
    v_64 = false;
    sub_457 = sub_458;
  };
  if (controller_ck_41_1) {
    v_65 = v_64;
  } else {
    v_65 = sub_457;
  };
  if (controller_c_window) {
    sub_456 = v_65;
  } else {
    sub_456 = false;
  };
  if (controller_c_closet) {
    v_83 = v_82;
  } else {
    v_83 = sub_456;
  };
  if (controller_ck_55_1) {
    v_84 = v_83;
  } else {
    v_84 = sub_421;
  };
  if (controller_v_276) {
    sub_475 = sub_413;
  } else {
    sub_475 = sub_417;
  };
  if (controller_c_air_2) {
    sub_476 = false;
  } else {
    sub_476 = sub_418;
  };
  if (controller_v_276) {
    v_52 = sub_476;
  } else {
    v_52 = false;
  };
  if (controller_v_277) {
    sub_474 = v_52;
  } else {
    sub_474 = sub_475;
  };
  if (controller_c_door) {
    v_53 = sub_474;
    sub_473 = false;
  } else {
    v_53 = false;
    sub_473 = sub_474;
  };
  if (controller_ck_39_1) {
    sub_472 = v_53;
  } else {
    sub_472 = sub_473;
  };
  sub_471 = sub_472;
  if (controller_cleaner) {
    v_54 = false;
    sub_470 = sub_471;
  } else {
    v_54 = sub_471;
    sub_470 = false;
  };
  if (controller_ck_37_1) {
    sub_469 = v_54;
  } else {
    sub_469 = sub_470;
  };
  if (controller_c_pc) {
    v_55 = sub_469;
    sub_468 = false;
  } else {
    v_55 = false;
    sub_468 = sub_469;
  };
  if (controller_ck_41_1) {
    v_56 = v_55;
  } else {
    v_56 = sub_468;
  };
  if (controller_c_window) {
    v_57 = v_56;
  } else {
    v_57 = false;
  };
  if (controller_c_closet) {
    sub_467 = v_57;
  } else {
    sub_467 = sub_456;
  };
  if (controller_light_failed_recovered) {
    v_49 = sub_320;
    sub_488 = sub_392;
  } else {
    v_49 = sub_392;
    sub_488 = sub_320;
  };
  if (controller_ck_52_1) {
    sub_487 = v_49;
  } else {
    sub_487 = sub_488;
  };
  if (controller_c_air_1) {
    sub_486 = false;
  } else {
    sub_486 = sub_487;
  };
  sub_485 = sub_486;
  if (controller_v_276) {
    v_50 = sub_485;
  } else {
    v_50 = false;
  };
  if (controller_c_air_1) {
    sub_490 = sub_487;
  } else {
    sub_490 = false;
  };
  if (controller_c_air_2) {
    sub_489 = sub_490;
  } else {
    sub_489 = false;
  };
  if (controller_v_276) {
    sub_484 = sub_489;
  } else {
    sub_484 = sub_485;
  };
  if (controller_v_277) {
    sub_483 = v_50;
  } else {
    sub_483 = sub_484;
  };
  if (controller_c_door) {
    v_51 = sub_483;
    sub_482 = false;
  } else {
    v_51 = false;
    sub_482 = sub_483;
  };
  if (controller_ck_39_1) {
    sub_481 = v_51;
  } else {
    sub_481 = sub_482;
  };
  sub_480 = sub_481;
  if (controller_cleaner) {
    sub_479 = false;
    sub_491 = sub_480;
  } else {
    sub_479 = sub_480;
    sub_491 = false;
  };
  if (controller_ck_37_1) {
    sub_478 = sub_491;
  } else {
    sub_478 = sub_479;
  };
  if (controller_c_pc) {
    v_58 = sub_478;
    sub_477 = false;
  } else {
    v_58 = false;
    sub_477 = sub_478;
  };
  if (controller_ck_41_1) {
    v_59 = v_58;
  } else {
    v_59 = sub_477;
  };
  if (controller_c_window) {
    v_60 = v_59;
  } else {
    v_60 = false;
  };
  if (controller_c_closet) {
    v_61 = sub_422;
  } else {
    v_61 = v_60;
  };
  if (controller_ck_55_1) {
    sub_466 = v_61;
  } else {
    sub_466 = sub_467;
  };
  if (controller_blind_switch) {
    v_85 = v_84;
  } else {
    v_85 = sub_466;
  };
  if (controller_c_blind_1) {
    sub_420 = v_85;
  } else {
    sub_420 = sub_466;
  };
  if (controller_ck_50_1) {
    sub_305 = sub_420;
    v_48 = sub_306;
  } else {
    sub_305 = sub_306;
    v_48 = sub_420;
  };
  if (controller_c_light_2) {
    sub_492 = v_48;
  } else {
    sub_492 = sub_305;
  };
  if (controller_light_switch) {
    v_134 = sub_305;
  } else {
    v_134 = sub_492;
  };
  if (controller_c_light_1) {
    sub_304 = v_134;
  } else {
    sub_304 = sub_492;
  };
  if (controller_ck_37_1) {
    sub_498 = sub_326;
  } else {
    sub_498 = sub_339;
  };
  if (controller_c_pc) {
    v_42 = false;
    sub_497 = sub_498;
  } else {
    v_42 = sub_498;
    sub_497 = false;
  };
  if (controller_ck_41_1) {
    v_43 = v_42;
  } else {
    v_43 = sub_497;
  };
  if (controller_c_window) {
    v_44 = v_43;
  } else {
    v_44 = false;
  };
  sub_507 = sub_334;
  sub_506 = sub_507;
  if (controller_v_276) {
    v_39 = sub_337;
  } else {
    v_39 = sub_506;
  };
  if (controller_v_277) {
    sub_505 = v_39;
  } else {
    sub_505 = sub_455;
  };
  sub_504 = sub_505;
  sub_503 = sub_504;
  if (controller_cleaner) {
    v_40 = sub_503;
    sub_502 = false;
  } else {
    v_40 = false;
    sub_502 = sub_503;
  };
  if (controller_ck_37_1) {
    sub_501 = v_40;
  } else {
    sub_501 = sub_502;
  };
  if (controller_c_pc) {
    v_41 = false;
    sub_500 = sub_501;
  } else {
    v_41 = sub_501;
    sub_500 = false;
  };
  if (controller_ck_41_1) {
    sub_499 = v_41;
  } else {
    sub_499 = sub_500;
  };
  if (controller_c_closet) {
    sub_496 = v_44;
  } else {
    sub_496 = sub_499;
  };
  if (controller_ck_37_1) {
    sub_510 = sub_355;
  } else {
    sub_510 = sub_378;
  };
  if (controller_c_pc) {
    v_36 = false;
    sub_509 = sub_510;
  } else {
    v_36 = sub_510;
    sub_509 = false;
  };
  if (controller_ck_41_1) {
    v_37 = v_36;
  } else {
    v_37 = sub_509;
  };
  if (controller_c_window) {
    v_38 = v_37;
  } else {
    v_38 = false;
  };
  if (controller_c_air_2) {
    sub_519 = false;
  } else {
    sub_519 = sub_367;
  };
  sub_521 = sub_364;
  sub_520 = sub_521;
  if (controller_v_276) {
    v_32 = sub_366;
  } else {
    v_32 = sub_520;
  };
  if (controller_v_277) {
    sub_518 = v_32;
  } else {
    sub_518 = sub_519;
  };
  sub_517 = sub_518;
  sub_525 = sub_374;
  sub_524 = sub_525;
  if (controller_v_276) {
    v_31 = sub_376;
  } else {
    v_31 = sub_524;
  };
  if (controller_v_277) {
    sub_523 = v_31;
  } else {
    sub_523 = sub_431;
  };
  sub_522 = sub_523;
  if (controller_change_shift) {
    v_33 = sub_522;
    sub_516 = sub_517;
  } else {
    v_33 = sub_517;
    sub_516 = sub_522;
  };
  if (controller_ck_1) {
    sub_515 = v_33;
  } else {
    sub_515 = sub_516;
  };
  if (controller_cleaner) {
    v_34 = sub_515;
    sub_514 = false;
  } else {
    v_34 = false;
    sub_514 = sub_515;
  };
  if (controller_ck_37_1) {
    sub_513 = v_34;
  } else {
    sub_513 = sub_514;
  };
  if (controller_c_pc) {
    v_35 = false;
    sub_512 = sub_513;
  } else {
    v_35 = sub_513;
    sub_512 = false;
  };
  if (controller_ck_41_1) {
    sub_511 = v_35;
  } else {
    sub_511 = sub_512;
  };
  if (controller_c_closet) {
    sub_508 = v_38;
  } else {
    sub_508 = sub_511;
  };
  if (controller_ck_55_1) {
    v_45 = sub_508;
  } else {
    v_45 = sub_496;
  };
  if (controller_ck_37_1) {
    sub_528 = sub_396;
  } else {
    sub_528 = sub_419;
  };
  if (controller_c_pc) {
    v_27 = false;
    sub_527 = sub_528;
  } else {
    v_27 = sub_528;
    sub_527 = false;
  };
  if (controller_ck_41_1) {
    v_28 = v_27;
  } else {
    v_28 = sub_527;
  };
  if (controller_c_window) {
    v_29 = v_28;
  } else {
    v_29 = false;
  };
  if (controller_c_air_2) {
    sub_537 = false;
  } else {
    sub_537 = sub_408;
  };
  sub_539 = sub_405;
  sub_538 = sub_539;
  if (controller_v_276) {
    v_23 = sub_407;
  } else {
    v_23 = sub_538;
  };
  if (controller_v_277) {
    sub_536 = v_23;
  } else {
    sub_536 = sub_537;
  };
  sub_535 = sub_536;
  sub_543 = sub_415;
  sub_542 = sub_543;
  if (controller_v_276) {
    v_22 = sub_417;
  } else {
    v_22 = sub_542;
  };
  if (controller_v_277) {
    sub_541 = v_22;
  } else {
    sub_541 = sub_476;
  };
  sub_540 = sub_541;
  if (controller_change_shift) {
    v_24 = sub_540;
    sub_534 = sub_535;
  } else {
    v_24 = sub_535;
    sub_534 = sub_540;
  };
  if (controller_ck_1) {
    sub_533 = v_24;
  } else {
    sub_533 = sub_534;
  };
  if (controller_cleaner) {
    v_25 = sub_533;
    sub_532 = false;
  } else {
    v_25 = false;
    sub_532 = sub_533;
  };
  if (controller_ck_37_1) {
    sub_531 = v_25;
  } else {
    sub_531 = sub_532;
  };
  if (controller_c_pc) {
    v_26 = false;
    sub_530 = sub_531;
  } else {
    v_26 = sub_531;
    sub_530 = false;
  };
  if (controller_ck_41_1) {
    sub_529 = v_26;
  } else {
    sub_529 = sub_530;
  };
  if (controller_c_closet) {
    v_30 = v_29;
  } else {
    v_30 = sub_529;
  };
  if (controller_ck_55_1) {
    sub_526 = v_30;
  } else {
    sub_526 = sub_508;
  };
  if (controller_blind_switch) {
    v_46 = v_45;
  } else {
    v_46 = sub_526;
  };
  if (controller_c_blind_1) {
    sub_495 = v_46;
  } else {
    sub_495 = sub_526;
  };
  if (controller_ck_37_1) {
    sub_547 = sub_434;
  } else {
    sub_547 = sub_446;
  };
  if (controller_c_pc) {
    v_17 = false;
    sub_546 = sub_547;
  } else {
    v_17 = sub_547;
    sub_546 = false;
  };
  if (controller_ck_41_1) {
    v_18 = v_17;
  } else {
    v_18 = sub_546;
  };
  if (controller_c_window) {
    v_19 = v_18;
  } else {
    v_19 = false;
  };
  if (controller_c_air_2) {
    sub_555 = false;
  } else {
    sub_555 = sub_445;
  };
  sub_557 = sub_442;
  sub_556 = sub_557;
  if (controller_v_276) {
    v_14 = sub_444;
  } else {
    v_14 = sub_556;
  };
  if (controller_v_277) {
    sub_554 = v_14;
  } else {
    sub_554 = sub_555;
  };
  sub_553 = sub_554;
  sub_552 = sub_553;
  if (controller_cleaner) {
    v_15 = sub_552;
    sub_551 = false;
  } else {
    v_15 = false;
    sub_551 = sub_552;
  };
  if (controller_ck_37_1) {
    sub_550 = v_15;
  } else {
    sub_550 = sub_551;
  };
  if (controller_c_pc) {
    v_16 = false;
    sub_549 = sub_550;
  } else {
    v_16 = sub_550;
    sub_549 = false;
  };
  if (controller_ck_41_1) {
    sub_548 = v_16;
  } else {
    sub_548 = sub_549;
  };
  if (controller_c_closet) {
    sub_545 = v_19;
  } else {
    sub_545 = sub_548;
  };
  if (controller_ck_37_1) {
    sub_560 = sub_459;
  } else {
    sub_560 = sub_465;
  };
  if (controller_c_pc) {
    v_11 = false;
    sub_559 = sub_560;
  } else {
    v_11 = sub_560;
    sub_559 = false;
  };
  if (controller_ck_41_1) {
    v_12 = v_11;
  } else {
    v_12 = sub_559;
  };
  if (controller_c_window) {
    v_13 = v_12;
  } else {
    v_13 = false;
  };
  sub_569 = sub_319;
  sub_568 = sub_569;
  if (controller_v_276) {
    v_8 = sub_317;
  } else {
    v_8 = sub_568;
  };
  if (controller_v_277) {
    sub_567 = v_8;
  } else {
    sub_567 = sub_323;
  };
  sub_566 = sub_567;
  sub_565 = sub_566;
  if (controller_cleaner) {
    v_9 = sub_565;
    sub_564 = false;
  } else {
    v_9 = false;
    sub_564 = sub_565;
  };
  if (controller_ck_37_1) {
    sub_563 = v_9;
  } else {
    sub_563 = sub_564;
  };
  if (controller_c_pc) {
    v_10 = false;
    sub_562 = sub_563;
  } else {
    v_10 = sub_563;
    sub_562 = false;
  };
  if (controller_ck_41_1) {
    sub_561 = v_10;
  } else {
    sub_561 = sub_562;
  };
  if (controller_c_closet) {
    sub_558 = v_13;
  } else {
    sub_558 = sub_561;
  };
  if (controller_ck_55_1) {
    v_20 = sub_558;
  } else {
    v_20 = sub_545;
  };
  if (controller_ck_37_1) {
    sub_572 = sub_479;
  } else {
    sub_572 = sub_491;
  };
  if (controller_c_pc) {
    v_4 = false;
    sub_571 = sub_572;
  } else {
    v_4 = sub_572;
    sub_571 = false;
  };
  if (controller_ck_41_1) {
    v_5 = v_4;
  } else {
    v_5 = sub_571;
  };
  if (controller_c_window) {
    v_6 = v_5;
  } else {
    v_6 = false;
  };
  if (controller_c_air_2) {
    sub_580 = false;
  } else {
    sub_580 = sub_490;
  };
  sub_582 = sub_487;
  sub_581 = sub_582;
  if (controller_v_276) {
    v_1 = sub_489;
  } else {
    v_1 = sub_581;
  };
  if (controller_v_277) {
    sub_579 = v_1;
  } else {
    sub_579 = sub_580;
  };
  sub_578 = sub_579;
  sub_577 = sub_578;
  if (controller_cleaner) {
    v_2 = sub_577;
    sub_576 = false;
  } else {
    v_2 = false;
    sub_576 = sub_577;
  };
  if (controller_ck_37_1) {
    sub_575 = v_2;
  } else {
    sub_575 = sub_576;
  };
  if (controller_c_pc) {
    v_3 = false;
    sub_574 = sub_575;
  } else {
    v_3 = sub_575;
    sub_574 = false;
  };
  if (controller_ck_41_1) {
    sub_573 = v_3;
  } else {
    sub_573 = sub_574;
  };
  if (controller_c_closet) {
    v_7 = v_6;
  } else {
    v_7 = sub_573;
  };
  if (controller_ck_55_1) {
    sub_570 = v_7;
  } else {
    sub_570 = sub_558;
  };
  if (controller_blind_switch) {
    v_21 = v_20;
  } else {
    v_21 = sub_570;
  };
  if (controller_c_blind_1) {
    sub_544 = v_21;
  } else {
    sub_544 = sub_570;
  };
  if (controller_ck_50_1) {
    sub_494 = sub_544;
    v = sub_495;
  } else {
    sub_494 = sub_495;
    v = sub_544;
  };
  if (controller_c_light_2) {
    sub_583 = v;
  } else {
    sub_583 = sub_494;
  };
  if (controller_light_switch) {
    v_47 = sub_494;
  } else {
    v_47 = sub_583;
  };
  if (controller_c_light_1) {
    sub_493 = v_47;
  } else {
    sub_493 = sub_583;
  };
  if (controller_worker) {
    v_269 = sub_493;
    sub_303 = sub_304;
  } else {
    v_269 = sub_304;
    sub_303 = sub_493;
  };
  if (controller_ck_35_1) {
    v_270 = v_269;
  } else {
    v_270 = sub_303;
  };
  if (p_controller_c_blind_2) {
    sub_0 = v_270;
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
  int controller_closet_failed_recovered, int controller_pc_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_17, int controller_ck_35_1, int controller_pnr_16,
  int controller_ck_37_1, int controller_pnr_15, int controller_ck_39_1,
  int controller_pnr_14, int controller_ck_41_1, int controller_pnr_13,
  int controller_v_277, int controller_v_276, int controller_pnr_12,
  int controller_ck_45_1, int controller_pnr_11, int controller_ck_47_1,
  int controller_pnr_10, int controller_ck_50_1, int controller_pnr_9,
  int controller_ck_52_1, int controller_pnr_8, int controller_ck_55_1,
  int controller_pnr_7, int controller_ck_57_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_blind_1,
  int controller_c_light_1, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_2_out* _out) {
  
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
  int sub_552;
  int sub_553;
  int sub_554;
  int sub_555;
  int sub_556;
  int sub_557;
  int sub_558;
  int sub_559;
  int sub_560;
  int sub_561;
  int sub_562;
  int sub_563;
  int sub_564;
  int sub_565;
  int sub_566;
  int sub_567;
  int sub_568;
  int sub_569;
  int sub_570;
  int sub_571;
  int sub_572;
  int sub_573;
  int sub_574;
  int sub_575;
  int sub_576;
  int sub_577;
  int sub_578;
  int sub_579;
  int sub_580;
  int sub_581;
  int sub_582;
  int sub_583;
  int sub_584;
  int sub_585;
  int sub_586;
  int sub_587;
  int sub_588;
  int sub_589;
  int sub_590;
  sub_23 = false;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  if (controller_c_air_1) {
    sub_16 = sub_17;
  } else {
    sub_16 = false;
  };
  if (controller_c_air_2) {
    sub_15 = sub_16;
  } else {
    sub_15 = false;
  };
  if (controller_c_air_1) {
    sub_25 = false;
  } else {
    sub_25 = sub_17;
  };
  sub_24 = sub_25;
  if (controller_v_276) {
    sub_14 = sub_24;
  } else {
    sub_14 = sub_15;
  };
  if (controller_c_air_2) {
    sub_26 = false;
  } else {
    sub_26 = sub_16;
  };
  if (controller_v_276) {
    v_515 = sub_26;
  } else {
    v_515 = false;
  };
  if (controller_v_277) {
    sub_13 = v_515;
  } else {
    sub_13 = sub_14;
  };
  if (controller_c_door) {
    v_516 = sub_13;
    sub_12 = false;
  } else {
    v_516 = false;
    sub_12 = sub_13;
  };
  if (controller_ck_39_1) {
    sub_11 = v_516;
  } else {
    sub_11 = sub_12;
  };
  sub_10 = sub_11;
  if (controller_cleaner) {
    v_517 = false;
    sub_9 = sub_10;
  } else {
    v_517 = sub_10;
    sub_9 = false;
  };
  if (controller_ck_37_1) {
    sub_8 = v_517;
  } else {
    sub_8 = sub_9;
  };
  if (controller_c_pc) {
    v_518 = sub_8;
    sub_7 = false;
  } else {
    v_518 = false;
    sub_7 = sub_8;
  };
  if (controller_ck_41_1) {
    v_519 = v_518;
  } else {
    v_519 = sub_7;
  };
  if (controller_c_window) {
    sub_6 = v_519;
  } else {
    sub_6 = false;
  };
  if (controller_blind_failed_recovered) {
    sub_40 = sub_19;
    sub_41 = false;
  } else {
    sub_40 = false;
    sub_41 = sub_19;
  };
  if (controller_ck_57_1) {
    sub_39 = sub_41;
  } else {
    sub_39 = sub_40;
  };
  if (controller_light_failed_recovered) {
    v_512 = false;
    sub_38 = sub_39;
  } else {
    v_512 = sub_39;
    sub_38 = false;
  };
  if (controller_ck_52_1) {
    sub_37 = v_512;
  } else {
    sub_37 = sub_38;
  };
  if (controller_c_air_1) {
    sub_36 = false;
  } else {
    sub_36 = sub_37;
  };
  sub_35 = sub_36;
  if (controller_v_276) {
    v_513 = sub_35;
  } else {
    v_513 = false;
  };
  if (controller_c_air_1) {
    sub_43 = sub_37;
  } else {
    sub_43 = false;
  };
  if (controller_c_air_2) {
    sub_42 = sub_43;
  } else {
    sub_42 = false;
  };
  if (controller_v_276) {
    sub_34 = sub_42;
  } else {
    sub_34 = sub_35;
  };
  if (controller_v_277) {
    sub_33 = v_513;
  } else {
    sub_33 = sub_34;
  };
  if (controller_c_door) {
    v_514 = sub_33;
    sub_32 = false;
  } else {
    v_514 = false;
    sub_32 = sub_33;
  };
  if (controller_ck_39_1) {
    sub_31 = v_514;
  } else {
    sub_31 = sub_32;
  };
  sub_30 = sub_31;
  if (controller_cleaner) {
    sub_29 = false;
    sub_44 = sub_30;
  } else {
    sub_29 = sub_30;
    sub_44 = false;
  };
  if (controller_ck_37_1) {
    sub_28 = sub_44;
  } else {
    sub_28 = sub_29;
  };
  if (controller_c_pc) {
    v_520 = sub_28;
    sub_27 = false;
  } else {
    v_520 = false;
    sub_27 = sub_28;
  };
  if (controller_ck_41_1) {
    v_521 = v_520;
  } else {
    v_521 = sub_27;
  };
  if (controller_c_window) {
    v_522 = v_521;
  } else {
    v_522 = false;
  };
  if (controller_c_closet) {
    sub_5 = sub_6;
  } else {
    sub_5 = v_522;
  };
  sub_56 = sub_39;
  if (controller_c_air_1) {
    sub_55 = sub_56;
  } else {
    sub_55 = false;
  };
  if (controller_c_air_2) {
    v_506 = false;
  } else {
    v_506 = sub_55;
  };
  if (controller_v_276) {
    v_507 = v_506;
  } else {
    v_507 = false;
  };
  if (controller_c_air_2) {
    sub_54 = sub_55;
  } else {
    sub_54 = false;
  };
  if (controller_c_air_1) {
    sub_57 = false;
  } else {
    sub_57 = sub_56;
  };
  if (controller_v_276) {
    sub_53 = sub_57;
  } else {
    sub_53 = sub_54;
  };
  if (controller_v_277) {
    sub_52 = v_507;
  } else {
    sub_52 = sub_53;
  };
  if (controller_c_door) {
    v_508 = sub_52;
    sub_51 = false;
  } else {
    v_508 = false;
    sub_51 = sub_52;
  };
  if (controller_ck_39_1) {
    sub_50 = v_508;
  } else {
    sub_50 = sub_51;
  };
  sub_49 = sub_50;
  if (controller_cleaner) {
    v_509 = false;
    sub_48 = sub_49;
  } else {
    v_509 = sub_49;
    sub_48 = false;
  };
  if (controller_ck_37_1) {
    sub_47 = v_509;
  } else {
    sub_47 = sub_48;
  };
  if (controller_c_pc) {
    v_510 = sub_47;
    sub_46 = false;
  } else {
    v_510 = false;
    sub_46 = sub_47;
  };
  if (controller_ck_41_1) {
    v_511 = v_510;
  } else {
    v_511 = sub_46;
  };
  if (controller_c_window) {
    sub_45 = v_511;
  } else {
    sub_45 = false;
  };
  if (controller_ck_57_1) {
    sub_72 = sub_40;
  } else {
    sub_72 = sub_41;
  };
  if (controller_light_failed_recovered) {
    v_500 = sub_72;
    sub_71 = sub_18;
  } else {
    v_500 = sub_18;
    sub_71 = sub_72;
  };
  if (controller_ck_52_1) {
    sub_70 = v_500;
  } else {
    sub_70 = sub_71;
  };
  if (controller_c_air_1) {
    sub_69 = false;
  } else {
    sub_69 = sub_70;
  };
  sub_68 = sub_69;
  if (controller_v_276) {
    v_501 = sub_68;
  } else {
    v_501 = false;
  };
  if (controller_c_air_1) {
    sub_74 = sub_70;
  } else {
    sub_74 = false;
  };
  if (controller_c_air_2) {
    sub_73 = sub_74;
  } else {
    sub_73 = false;
  };
  if (controller_v_276) {
    sub_67 = sub_73;
  } else {
    sub_67 = sub_68;
  };
  if (controller_v_277) {
    sub_66 = v_501;
  } else {
    sub_66 = sub_67;
  };
  if (controller_c_door) {
    v_502 = sub_66;
    sub_65 = false;
  } else {
    v_502 = false;
    sub_65 = sub_66;
  };
  if (controller_ck_39_1) {
    sub_64 = v_502;
  } else {
    sub_64 = sub_65;
  };
  if (controller_light_failed_recovered) {
    v_497 = false;
    sub_82 = sub_18;
  } else {
    v_497 = sub_18;
    sub_82 = false;
  };
  if (controller_ck_52_1) {
    sub_81 = v_497;
  } else {
    sub_81 = sub_82;
  };
  if (controller_c_air_1) {
    sub_80 = false;
  } else {
    sub_80 = sub_81;
  };
  sub_79 = sub_80;
  if (controller_v_276) {
    v_498 = sub_79;
  } else {
    v_498 = false;
  };
  if (controller_c_air_1) {
    sub_84 = sub_81;
  } else {
    sub_84 = false;
  };
  if (controller_c_air_2) {
    sub_83 = sub_84;
  } else {
    sub_83 = false;
  };
  if (controller_v_276) {
    sub_78 = sub_83;
  } else {
    sub_78 = sub_79;
  };
  if (controller_v_277) {
    sub_77 = v_498;
  } else {
    sub_77 = sub_78;
  };
  if (controller_c_door) {
    v_499 = sub_77;
    sub_76 = false;
  } else {
    v_499 = false;
    sub_76 = sub_77;
  };
  if (controller_ck_39_1) {
    sub_75 = v_499;
  } else {
    sub_75 = sub_76;
  };
  if (controller_change_shift) {
    v_503 = sub_75;
    sub_63 = sub_64;
  } else {
    v_503 = sub_64;
    sub_63 = sub_75;
  };
  if (controller_ck_1) {
    sub_62 = v_503;
  } else {
    sub_62 = sub_63;
  };
  if (controller_cleaner) {
    sub_61 = false;
    sub_85 = sub_62;
  } else {
    sub_61 = sub_62;
    sub_85 = false;
  };
  if (controller_ck_37_1) {
    sub_60 = sub_85;
  } else {
    sub_60 = sub_61;
  };
  if (controller_c_pc) {
    v_504 = sub_60;
    sub_59 = false;
  } else {
    v_504 = false;
    sub_59 = sub_60;
  };
  if (controller_ck_41_1) {
    v_505 = v_504;
  } else {
    v_505 = sub_59;
  };
  if (controller_c_window) {
    sub_58 = v_505;
  } else {
    sub_58 = false;
  };
  if (controller_c_closet) {
    v_523 = sub_45;
  } else {
    v_523 = sub_58;
  };
  if (controller_ck_55_1) {
    v_524 = v_523;
  } else {
    v_524 = sub_5;
  };
  if (controller_c_closet) {
    sub_86 = sub_6;
  } else {
    sub_86 = sub_58;
  };
  if (controller_blind_switch) {
    v_525 = v_524;
  } else {
    v_525 = sub_86;
  };
  if (controller_c_blind_1) {
    sub_4 = v_525;
  } else {
    sub_4 = sub_86;
  };
  if (controller_v_276) {
    sub_96 = sub_79;
  } else {
    sub_96 = sub_83;
  };
  if (controller_c_air_2) {
    sub_97 = false;
  } else {
    sub_97 = sub_84;
  };
  if (controller_v_276) {
    v_492 = sub_97;
  } else {
    v_492 = false;
  };
  if (controller_v_277) {
    sub_95 = v_492;
  } else {
    sub_95 = sub_96;
  };
  if (controller_c_door) {
    v_493 = sub_95;
    sub_94 = false;
  } else {
    v_493 = false;
    sub_94 = sub_95;
  };
  if (controller_ck_39_1) {
    sub_93 = v_493;
  } else {
    sub_93 = sub_94;
  };
  sub_92 = sub_93;
  if (controller_cleaner) {
    v_494 = false;
    sub_91 = sub_92;
  } else {
    v_494 = sub_92;
    sub_91 = false;
  };
  if (controller_ck_37_1) {
    sub_90 = v_494;
  } else {
    sub_90 = sub_91;
  };
  if (controller_c_pc) {
    v_495 = sub_90;
    sub_89 = false;
  } else {
    v_495 = false;
    sub_89 = sub_90;
  };
  if (controller_ck_41_1) {
    v_496 = v_495;
  } else {
    v_496 = sub_89;
  };
  if (controller_c_window) {
    sub_88 = v_496;
  } else {
    sub_88 = false;
  };
  if (controller_light_failed_recovered) {
    v_487 = sub_18;
    sub_110 = sub_39;
  } else {
    v_487 = sub_39;
    sub_110 = sub_18;
  };
  if (controller_ck_52_1) {
    sub_109 = v_487;
  } else {
    sub_109 = sub_110;
  };
  if (controller_c_air_1) {
    sub_108 = false;
  } else {
    sub_108 = sub_109;
  };
  sub_107 = sub_108;
  if (controller_v_276) {
    v_488 = sub_107;
  } else {
    v_488 = false;
  };
  if (controller_c_air_1) {
    sub_112 = sub_109;
  } else {
    sub_112 = false;
  };
  if (controller_c_air_2) {
    sub_111 = sub_112;
  } else {
    sub_111 = false;
  };
  if (controller_v_276) {
    sub_106 = sub_111;
  } else {
    sub_106 = sub_107;
  };
  if (controller_v_277) {
    sub_105 = v_488;
  } else {
    sub_105 = sub_106;
  };
  if (controller_c_door) {
    v_489 = sub_105;
    sub_104 = false;
  } else {
    v_489 = false;
    sub_104 = sub_105;
  };
  if (controller_ck_39_1) {
    sub_103 = v_489;
  } else {
    sub_103 = sub_104;
  };
  sub_102 = sub_103;
  if (controller_cleaner) {
    sub_101 = false;
    sub_113 = sub_102;
  } else {
    sub_101 = sub_102;
    sub_113 = false;
  };
  if (controller_ck_37_1) {
    sub_100 = sub_113;
  } else {
    sub_100 = sub_101;
  };
  if (controller_c_pc) {
    v_490 = sub_100;
    sub_99 = false;
  } else {
    v_490 = false;
    sub_99 = sub_100;
  };
  if (controller_ck_41_1) {
    v_491 = v_490;
  } else {
    v_491 = sub_99;
  };
  if (controller_c_window) {
    sub_98 = v_491;
  } else {
    sub_98 = false;
  };
  if (controller_c_closet) {
    sub_87 = sub_88;
  } else {
    sub_87 = sub_98;
  };
  if (controller_v_276) {
    sub_121 = sub_35;
  } else {
    sub_121 = sub_42;
  };
  if (controller_c_air_2) {
    sub_122 = false;
  } else {
    sub_122 = sub_43;
  };
  if (controller_v_276) {
    v_484 = sub_122;
  } else {
    v_484 = false;
  };
  if (controller_v_277) {
    sub_120 = v_484;
  } else {
    sub_120 = sub_121;
  };
  if (controller_c_door) {
    v_485 = sub_120;
    sub_119 = false;
  } else {
    v_485 = false;
    sub_119 = sub_120;
  };
  if (controller_ck_39_1) {
    sub_118 = v_485;
  } else {
    sub_118 = sub_119;
  };
  sub_117 = sub_118;
  if (controller_cleaner) {
    v_486 = false;
    sub_116 = sub_117;
  } else {
    v_486 = sub_117;
    sub_116 = false;
  };
  if (controller_ck_37_1) {
    sub_115 = v_486;
  } else {
    sub_115 = sub_116;
  };
  if (controller_c_pc) {
    v_526 = sub_115;
    sub_114 = false;
  } else {
    v_526 = false;
    sub_114 = sub_115;
  };
  if (controller_ck_41_1) {
    v_527 = v_526;
  } else {
    v_527 = sub_114;
  };
  if (controller_c_window) {
    v_528 = v_527;
  } else {
    v_528 = false;
  };
  if (controller_v_276) {
    v_480 = sub_24;
    sub_131 = sub_15;
  } else {
    v_480 = false;
    sub_131 = sub_24;
  };
  if (controller_v_277) {
    sub_130 = v_480;
  } else {
    sub_130 = sub_131;
  };
  if (controller_c_door) {
    v_481 = sub_130;
    sub_129 = false;
  } else {
    v_481 = false;
    sub_129 = sub_130;
  };
  if (controller_ck_39_1) {
    sub_128 = v_481;
  } else {
    sub_128 = sub_129;
  };
  sub_127 = sub_128;
  if (controller_cleaner) {
    sub_126 = false;
    sub_132 = sub_127;
  } else {
    sub_126 = sub_127;
    sub_132 = false;
  };
  if (controller_ck_37_1) {
    sub_125 = sub_132;
  } else {
    sub_125 = sub_126;
  };
  if (controller_c_pc) {
    v_482 = sub_125;
    sub_124 = false;
  } else {
    v_482 = false;
    sub_124 = sub_125;
  };
  if (controller_ck_41_1) {
    v_483 = v_482;
  } else {
    v_483 = sub_124;
  };
  if (controller_c_window) {
    sub_123 = v_483;
  } else {
    sub_123 = false;
  };
  if (controller_c_closet) {
    v_529 = v_528;
  } else {
    v_529 = sub_123;
  };
  if (controller_ck_55_1) {
    v_530 = v_529;
  } else {
    v_530 = sub_87;
  };
  if (controller_c_closet) {
    sub_133 = sub_88;
  } else {
    sub_133 = sub_123;
  };
  if (controller_blind_switch) {
    v_531 = v_530;
  } else {
    v_531 = sub_133;
  };
  if (controller_c_blind_1) {
    v_532 = v_531;
  } else {
    v_532 = sub_133;
  };
  if (controller_ck_50_1) {
    sub_3 = v_532;
  } else {
    sub_3 = sub_4;
  };
  sub_153 = true;
  sub_152 = sub_153;
  sub_151 = sub_152;
  sub_150 = sub_151;
  sub_149 = sub_150;
  sub_148 = sub_149;
  sub_147 = sub_148;
  if (controller_c_air_1) {
    sub_146 = sub_147;
  } else {
    sub_146 = false;
  };
  if (controller_c_air_2) {
    sub_145 = sub_146;
  } else {
    sub_145 = false;
  };
  if (controller_c_air_1) {
    sub_155 = false;
  } else {
    sub_155 = sub_147;
  };
  sub_154 = sub_155;
  if (controller_v_276) {
    sub_144 = sub_154;
  } else {
    sub_144 = sub_145;
  };
  if (controller_c_air_2) {
    sub_156 = false;
  } else {
    sub_156 = sub_146;
  };
  if (controller_v_276) {
    v_469 = sub_156;
  } else {
    v_469 = false;
  };
  if (controller_v_277) {
    sub_143 = v_469;
  } else {
    sub_143 = sub_144;
  };
  if (controller_c_door) {
    v_470 = sub_143;
    sub_142 = false;
  } else {
    v_470 = false;
    sub_142 = sub_143;
  };
  if (controller_ck_39_1) {
    sub_141 = v_470;
  } else {
    sub_141 = sub_142;
  };
  sub_140 = sub_141;
  if (controller_cleaner) {
    v_471 = false;
    sub_139 = sub_140;
  } else {
    v_471 = sub_140;
    sub_139 = false;
  };
  if (controller_ck_37_1) {
    sub_138 = v_471;
  } else {
    sub_138 = sub_139;
  };
  if (controller_c_pc) {
    v_472 = sub_138;
    sub_137 = false;
  } else {
    v_472 = false;
    sub_137 = sub_138;
  };
  if (controller_ck_41_1) {
    v_473 = v_472;
  } else {
    v_473 = sub_137;
  };
  if (controller_c_window) {
    sub_136 = v_473;
  } else {
    sub_136 = false;
  };
  if (controller_blind_failed_recovered) {
    sub_170 = sub_149;
    sub_171 = false;
  } else {
    sub_170 = false;
    sub_171 = sub_149;
  };
  if (controller_ck_57_1) {
    sub_169 = sub_171;
  } else {
    sub_169 = sub_170;
  };
  if (controller_light_failed_recovered) {
    v_466 = false;
    sub_168 = sub_169;
  } else {
    v_466 = sub_169;
    sub_168 = false;
  };
  if (controller_ck_52_1) {
    sub_167 = v_466;
  } else {
    sub_167 = sub_168;
  };
  if (controller_c_air_1) {
    sub_166 = false;
  } else {
    sub_166 = sub_167;
  };
  sub_165 = sub_166;
  if (controller_v_276) {
    v_467 = sub_165;
  } else {
    v_467 = false;
  };
  if (controller_c_air_1) {
    sub_173 = sub_167;
  } else {
    sub_173 = false;
  };
  if (controller_c_air_2) {
    sub_172 = sub_173;
  } else {
    sub_172 = false;
  };
  if (controller_v_276) {
    sub_164 = sub_172;
  } else {
    sub_164 = sub_165;
  };
  if (controller_v_277) {
    sub_163 = v_467;
  } else {
    sub_163 = sub_164;
  };
  if (controller_c_door) {
    v_468 = sub_163;
    sub_162 = false;
  } else {
    v_468 = false;
    sub_162 = sub_163;
  };
  if (controller_ck_39_1) {
    sub_161 = v_468;
  } else {
    sub_161 = sub_162;
  };
  sub_160 = sub_161;
  if (controller_cleaner) {
    sub_159 = false;
    sub_174 = sub_160;
  } else {
    sub_159 = sub_160;
    sub_174 = false;
  };
  if (controller_ck_37_1) {
    sub_158 = sub_174;
  } else {
    sub_158 = sub_159;
  };
  if (controller_c_pc) {
    v_474 = sub_158;
    sub_157 = false;
  } else {
    v_474 = false;
    sub_157 = sub_158;
  };
  if (controller_ck_41_1) {
    v_475 = v_474;
  } else {
    v_475 = sub_157;
  };
  if (controller_c_window) {
    v_476 = v_475;
  } else {
    v_476 = false;
  };
  if (controller_c_closet) {
    sub_135 = sub_136;
  } else {
    sub_135 = v_476;
  };
  sub_186 = sub_169;
  if (controller_c_air_1) {
    sub_185 = sub_186;
  } else {
    sub_185 = false;
  };
  if (controller_c_air_2) {
    v_460 = false;
  } else {
    v_460 = sub_185;
  };
  if (controller_v_276) {
    v_461 = v_460;
  } else {
    v_461 = false;
  };
  if (controller_c_air_2) {
    sub_184 = sub_185;
  } else {
    sub_184 = false;
  };
  if (controller_c_air_1) {
    sub_187 = false;
  } else {
    sub_187 = sub_186;
  };
  if (controller_v_276) {
    sub_183 = sub_187;
  } else {
    sub_183 = sub_184;
  };
  if (controller_v_277) {
    sub_182 = v_461;
  } else {
    sub_182 = sub_183;
  };
  if (controller_c_door) {
    v_462 = sub_182;
    sub_181 = false;
  } else {
    v_462 = false;
    sub_181 = sub_182;
  };
  if (controller_ck_39_1) {
    sub_180 = v_462;
  } else {
    sub_180 = sub_181;
  };
  sub_179 = sub_180;
  if (controller_cleaner) {
    v_463 = false;
    sub_178 = sub_179;
  } else {
    v_463 = sub_179;
    sub_178 = false;
  };
  if (controller_ck_37_1) {
    sub_177 = v_463;
  } else {
    sub_177 = sub_178;
  };
  if (controller_c_pc) {
    v_464 = sub_177;
    sub_176 = false;
  } else {
    v_464 = false;
    sub_176 = sub_177;
  };
  if (controller_ck_41_1) {
    v_465 = v_464;
  } else {
    v_465 = sub_176;
  };
  if (controller_c_window) {
    sub_175 = v_465;
  } else {
    sub_175 = false;
  };
  if (controller_ck_57_1) {
    sub_202 = sub_170;
  } else {
    sub_202 = sub_171;
  };
  if (controller_light_failed_recovered) {
    v_454 = sub_202;
    sub_201 = sub_148;
  } else {
    v_454 = sub_148;
    sub_201 = sub_202;
  };
  if (controller_ck_52_1) {
    sub_200 = v_454;
  } else {
    sub_200 = sub_201;
  };
  if (controller_c_air_1) {
    sub_199 = false;
  } else {
    sub_199 = sub_200;
  };
  sub_198 = sub_199;
  if (controller_v_276) {
    v_455 = sub_198;
  } else {
    v_455 = false;
  };
  if (controller_c_air_1) {
    sub_204 = sub_200;
  } else {
    sub_204 = false;
  };
  if (controller_c_air_2) {
    sub_203 = sub_204;
  } else {
    sub_203 = false;
  };
  if (controller_v_276) {
    sub_197 = sub_203;
  } else {
    sub_197 = sub_198;
  };
  if (controller_v_277) {
    sub_196 = v_455;
  } else {
    sub_196 = sub_197;
  };
  if (controller_c_door) {
    v_456 = sub_196;
    sub_195 = false;
  } else {
    v_456 = false;
    sub_195 = sub_196;
  };
  if (controller_ck_39_1) {
    sub_194 = v_456;
  } else {
    sub_194 = sub_195;
  };
  if (controller_light_failed_recovered) {
    v_451 = false;
    sub_212 = sub_148;
  } else {
    v_451 = sub_148;
    sub_212 = false;
  };
  if (controller_ck_52_1) {
    sub_211 = v_451;
  } else {
    sub_211 = sub_212;
  };
  if (controller_c_air_1) {
    sub_210 = false;
  } else {
    sub_210 = sub_211;
  };
  sub_209 = sub_210;
  if (controller_v_276) {
    v_452 = sub_209;
  } else {
    v_452 = false;
  };
  if (controller_c_air_1) {
    sub_214 = sub_211;
  } else {
    sub_214 = false;
  };
  if (controller_c_air_2) {
    sub_213 = sub_214;
  } else {
    sub_213 = false;
  };
  if (controller_v_276) {
    sub_208 = sub_213;
  } else {
    sub_208 = sub_209;
  };
  if (controller_v_277) {
    sub_207 = v_452;
  } else {
    sub_207 = sub_208;
  };
  if (controller_c_door) {
    v_453 = sub_207;
    sub_206 = false;
  } else {
    v_453 = false;
    sub_206 = sub_207;
  };
  if (controller_ck_39_1) {
    sub_205 = v_453;
  } else {
    sub_205 = sub_206;
  };
  if (controller_change_shift) {
    v_457 = sub_205;
    sub_193 = sub_194;
  } else {
    v_457 = sub_194;
    sub_193 = sub_205;
  };
  if (controller_ck_1) {
    sub_192 = v_457;
  } else {
    sub_192 = sub_193;
  };
  if (controller_cleaner) {
    sub_191 = false;
    sub_215 = sub_192;
  } else {
    sub_191 = sub_192;
    sub_215 = false;
  };
  if (controller_ck_37_1) {
    sub_190 = sub_215;
  } else {
    sub_190 = sub_191;
  };
  if (controller_c_pc) {
    v_458 = sub_190;
    sub_189 = false;
  } else {
    v_458 = false;
    sub_189 = sub_190;
  };
  if (controller_ck_41_1) {
    v_459 = v_458;
  } else {
    v_459 = sub_189;
  };
  if (controller_c_window) {
    sub_188 = v_459;
  } else {
    sub_188 = false;
  };
  if (controller_c_closet) {
    v_477 = sub_175;
  } else {
    v_477 = sub_188;
  };
  if (controller_ck_55_1) {
    v_478 = v_477;
  } else {
    v_478 = sub_135;
  };
  if (controller_c_closet) {
    sub_216 = sub_136;
  } else {
    sub_216 = sub_188;
  };
  if (controller_blind_switch) {
    v_479 = v_478;
  } else {
    v_479 = sub_216;
  };
  if (controller_c_blind_1) {
    sub_134 = v_479;
  } else {
    sub_134 = sub_216;
  };
  if (controller_v_276) {
    sub_226 = sub_209;
  } else {
    sub_226 = sub_213;
  };
  if (controller_c_air_2) {
    sub_227 = false;
  } else {
    sub_227 = sub_214;
  };
  if (controller_v_276) {
    v_446 = sub_227;
  } else {
    v_446 = false;
  };
  if (controller_v_277) {
    sub_225 = v_446;
  } else {
    sub_225 = sub_226;
  };
  if (controller_c_door) {
    v_447 = sub_225;
    sub_224 = false;
  } else {
    v_447 = false;
    sub_224 = sub_225;
  };
  if (controller_ck_39_1) {
    sub_223 = v_447;
  } else {
    sub_223 = sub_224;
  };
  sub_222 = sub_223;
  if (controller_cleaner) {
    v_448 = false;
    sub_221 = sub_222;
  } else {
    v_448 = sub_222;
    sub_221 = false;
  };
  if (controller_ck_37_1) {
    sub_220 = v_448;
  } else {
    sub_220 = sub_221;
  };
  if (controller_c_pc) {
    v_449 = sub_220;
    sub_219 = false;
  } else {
    v_449 = false;
    sub_219 = sub_220;
  };
  if (controller_ck_41_1) {
    v_450 = v_449;
  } else {
    v_450 = sub_219;
  };
  if (controller_c_window) {
    sub_218 = v_450;
  } else {
    sub_218 = false;
  };
  if (controller_light_failed_recovered) {
    v_441 = sub_148;
    sub_240 = sub_169;
  } else {
    v_441 = sub_169;
    sub_240 = sub_148;
  };
  if (controller_ck_52_1) {
    sub_239 = v_441;
  } else {
    sub_239 = sub_240;
  };
  if (controller_c_air_1) {
    sub_238 = false;
  } else {
    sub_238 = sub_239;
  };
  sub_237 = sub_238;
  if (controller_v_276) {
    v_442 = sub_237;
  } else {
    v_442 = false;
  };
  if (controller_c_air_1) {
    sub_242 = sub_239;
  } else {
    sub_242 = false;
  };
  if (controller_c_air_2) {
    sub_241 = sub_242;
  } else {
    sub_241 = false;
  };
  if (controller_v_276) {
    sub_236 = sub_241;
  } else {
    sub_236 = sub_237;
  };
  if (controller_v_277) {
    sub_235 = v_442;
  } else {
    sub_235 = sub_236;
  };
  if (controller_c_door) {
    v_443 = sub_235;
    sub_234 = false;
  } else {
    v_443 = false;
    sub_234 = sub_235;
  };
  if (controller_ck_39_1) {
    sub_233 = v_443;
  } else {
    sub_233 = sub_234;
  };
  sub_232 = sub_233;
  if (controller_cleaner) {
    sub_231 = false;
    sub_243 = sub_232;
  } else {
    sub_231 = sub_232;
    sub_243 = false;
  };
  if (controller_ck_37_1) {
    sub_230 = sub_243;
  } else {
    sub_230 = sub_231;
  };
  if (controller_c_pc) {
    v_444 = sub_230;
    sub_229 = false;
  } else {
    v_444 = false;
    sub_229 = sub_230;
  };
  if (controller_ck_41_1) {
    v_445 = v_444;
  } else {
    v_445 = sub_229;
  };
  if (controller_c_window) {
    sub_228 = v_445;
  } else {
    sub_228 = false;
  };
  if (controller_c_closet) {
    sub_217 = sub_218;
  } else {
    sub_217 = sub_228;
  };
  if (controller_v_276) {
    sub_251 = sub_165;
  } else {
    sub_251 = sub_172;
  };
  if (controller_c_air_2) {
    sub_252 = false;
  } else {
    sub_252 = sub_173;
  };
  if (controller_v_276) {
    v_438 = sub_252;
  } else {
    v_438 = false;
  };
  if (controller_v_277) {
    sub_250 = v_438;
  } else {
    sub_250 = sub_251;
  };
  if (controller_c_door) {
    v_439 = sub_250;
    sub_249 = false;
  } else {
    v_439 = false;
    sub_249 = sub_250;
  };
  if (controller_ck_39_1) {
    sub_248 = v_439;
  } else {
    sub_248 = sub_249;
  };
  sub_247 = sub_248;
  if (controller_cleaner) {
    v_440 = false;
    sub_246 = sub_247;
  } else {
    v_440 = sub_247;
    sub_246 = false;
  };
  if (controller_ck_37_1) {
    sub_245 = v_440;
  } else {
    sub_245 = sub_246;
  };
  if (controller_c_pc) {
    v_533 = sub_245;
    sub_244 = false;
  } else {
    v_533 = false;
    sub_244 = sub_245;
  };
  if (controller_ck_41_1) {
    v_534 = v_533;
  } else {
    v_534 = sub_244;
  };
  if (controller_c_window) {
    v_535 = v_534;
  } else {
    v_535 = false;
  };
  if (controller_v_276) {
    v_434 = sub_154;
    sub_261 = sub_145;
  } else {
    v_434 = false;
    sub_261 = sub_154;
  };
  if (controller_v_277) {
    sub_260 = v_434;
  } else {
    sub_260 = sub_261;
  };
  if (controller_c_door) {
    v_435 = sub_260;
    sub_259 = false;
  } else {
    v_435 = false;
    sub_259 = sub_260;
  };
  if (controller_ck_39_1) {
    sub_258 = v_435;
  } else {
    sub_258 = sub_259;
  };
  sub_257 = sub_258;
  if (controller_cleaner) {
    sub_256 = false;
    sub_262 = sub_257;
  } else {
    sub_256 = sub_257;
    sub_262 = false;
  };
  if (controller_ck_37_1) {
    sub_255 = sub_262;
  } else {
    sub_255 = sub_256;
  };
  if (controller_c_pc) {
    v_436 = sub_255;
    sub_254 = false;
  } else {
    v_436 = false;
    sub_254 = sub_255;
  };
  if (controller_ck_41_1) {
    v_437 = v_436;
  } else {
    v_437 = sub_254;
  };
  if (controller_c_window) {
    sub_253 = v_437;
  } else {
    sub_253 = false;
  };
  if (controller_c_closet) {
    v_536 = v_535;
  } else {
    v_536 = sub_253;
  };
  if (controller_ck_55_1) {
    v_537 = v_536;
  } else {
    v_537 = sub_217;
  };
  if (controller_c_closet) {
    sub_263 = sub_218;
  } else {
    sub_263 = sub_253;
  };
  if (controller_blind_switch) {
    v_538 = v_537;
  } else {
    v_538 = sub_263;
  };
  if (controller_c_blind_1) {
    v_539 = v_538;
  } else {
    v_539 = sub_263;
  };
  if (controller_ck_50_1) {
    v_540 = v_539;
  } else {
    v_540 = sub_134;
  };
  if (p_controller_c_light_2) {
    v_541 = v_540;
  } else {
    v_541 = sub_3;
  };
  if (controller_light_failed_recovered) {
    v_413 = sub_148;
    sub_279 = sub_39;
  } else {
    v_413 = sub_39;
    sub_279 = sub_148;
  };
  if (controller_ck_52_1) {
    sub_278 = v_413;
  } else {
    sub_278 = sub_279;
  };
  if (controller_c_air_1) {
    sub_277 = false;
  } else {
    sub_277 = sub_278;
  };
  sub_276 = sub_277;
  if (controller_v_276) {
    v_414 = sub_276;
  } else {
    v_414 = false;
  };
  if (controller_c_air_1) {
    sub_281 = sub_278;
  } else {
    sub_281 = false;
  };
  if (controller_c_air_2) {
    sub_280 = sub_281;
  } else {
    sub_280 = false;
  };
  if (controller_v_276) {
    sub_275 = sub_280;
  } else {
    sub_275 = sub_276;
  };
  if (controller_v_277) {
    sub_274 = v_414;
  } else {
    sub_274 = sub_275;
  };
  if (controller_c_door) {
    v_415 = sub_274;
    sub_273 = false;
  } else {
    v_415 = false;
    sub_273 = sub_274;
  };
  if (controller_ck_39_1) {
    sub_272 = v_415;
  } else {
    sub_272 = sub_273;
  };
  sub_271 = sub_272;
  if (controller_cleaner) {
    sub_270 = false;
    sub_282 = sub_271;
  } else {
    sub_270 = sub_271;
    sub_282 = false;
  };
  if (controller_ck_37_1) {
    sub_269 = sub_282;
  } else {
    sub_269 = sub_270;
  };
  if (controller_c_pc) {
    v_416 = sub_269;
    sub_268 = false;
  } else {
    v_416 = false;
    sub_268 = sub_269;
  };
  if (controller_ck_41_1) {
    v_417 = v_416;
  } else {
    v_417 = sub_268;
  };
  if (controller_c_window) {
    v_418 = v_417;
  } else {
    v_418 = false;
  };
  if (controller_c_closet) {
    sub_267 = sub_6;
  } else {
    sub_267 = v_418;
  };
  if (controller_blind_failed_recovered) {
    sub_298 = sub_149;
    sub_299 = sub_19;
  } else {
    sub_298 = sub_19;
    sub_299 = sub_149;
  };
  if (controller_ck_57_1) {
    sub_297 = sub_299;
  } else {
    sub_297 = sub_298;
  };
  if (controller_light_failed_recovered) {
    v_407 = sub_297;
    sub_296 = sub_18;
  } else {
    v_407 = sub_18;
    sub_296 = sub_297;
  };
  if (controller_ck_52_1) {
    sub_295 = v_407;
  } else {
    sub_295 = sub_296;
  };
  if (controller_c_air_1) {
    sub_294 = false;
  } else {
    sub_294 = sub_295;
  };
  sub_293 = sub_294;
  if (controller_v_276) {
    v_408 = sub_293;
  } else {
    v_408 = false;
  };
  if (controller_c_air_1) {
    sub_301 = sub_295;
  } else {
    sub_301 = false;
  };
  if (controller_c_air_2) {
    sub_300 = sub_301;
  } else {
    sub_300 = false;
  };
  if (controller_v_276) {
    sub_292 = sub_300;
  } else {
    sub_292 = sub_293;
  };
  if (controller_v_277) {
    sub_291 = v_408;
  } else {
    sub_291 = sub_292;
  };
  if (controller_c_door) {
    v_409 = sub_291;
    sub_290 = false;
  } else {
    v_409 = false;
    sub_290 = sub_291;
  };
  if (controller_ck_39_1) {
    sub_289 = v_409;
  } else {
    sub_289 = sub_290;
  };
  if (controller_light_failed_recovered) {
    sub_309 = sub_18;
    sub_310 = sub_148;
  } else {
    sub_309 = sub_148;
    sub_310 = sub_18;
  };
  if (controller_ck_52_1) {
    sub_308 = sub_310;
  } else {
    sub_308 = sub_309;
  };
  if (controller_c_air_1) {
    sub_307 = false;
  } else {
    sub_307 = sub_308;
  };
  sub_306 = sub_307;
  if (controller_v_276) {
    v_405 = sub_306;
  } else {
    v_405 = false;
  };
  if (controller_c_air_1) {
    sub_312 = sub_308;
  } else {
    sub_312 = false;
  };
  if (controller_c_air_2) {
    sub_311 = sub_312;
  } else {
    sub_311 = false;
  };
  if (controller_v_276) {
    sub_305 = sub_311;
  } else {
    sub_305 = sub_306;
  };
  if (controller_v_277) {
    sub_304 = v_405;
  } else {
    sub_304 = sub_305;
  };
  if (controller_c_door) {
    v_406 = sub_304;
    sub_303 = false;
  } else {
    v_406 = false;
    sub_303 = sub_304;
  };
  if (controller_ck_39_1) {
    sub_302 = v_406;
  } else {
    sub_302 = sub_303;
  };
  if (controller_change_shift) {
    v_410 = sub_302;
    sub_288 = sub_289;
  } else {
    v_410 = sub_289;
    sub_288 = sub_302;
  };
  if (controller_ck_1) {
    sub_287 = v_410;
  } else {
    sub_287 = sub_288;
  };
  if (controller_cleaner) {
    sub_286 = false;
    sub_313 = sub_287;
  } else {
    sub_286 = sub_287;
    sub_313 = false;
  };
  if (controller_ck_37_1) {
    sub_285 = sub_313;
  } else {
    sub_285 = sub_286;
  };
  if (controller_c_pc) {
    v_411 = sub_285;
    sub_284 = false;
  } else {
    v_411 = false;
    sub_284 = sub_285;
  };
  if (controller_ck_41_1) {
    v_412 = v_411;
  } else {
    v_412 = sub_284;
  };
  if (controller_c_window) {
    sub_283 = v_412;
  } else {
    sub_283 = false;
  };
  if (controller_c_closet) {
    v_419 = sub_45;
  } else {
    v_419 = sub_283;
  };
  if (controller_ck_55_1) {
    v_420 = v_419;
  } else {
    v_420 = sub_267;
  };
  if (controller_c_closet) {
    sub_314 = sub_6;
  } else {
    sub_314 = sub_283;
  };
  if (controller_blind_switch) {
    v_421 = v_420;
  } else {
    v_421 = sub_314;
  };
  if (controller_c_blind_1) {
    sub_266 = v_421;
  } else {
    sub_266 = sub_314;
  };
  if (controller_v_276) {
    sub_324 = sub_306;
  } else {
    sub_324 = sub_311;
  };
  if (controller_c_air_2) {
    sub_325 = false;
  } else {
    sub_325 = sub_312;
  };
  if (controller_v_276) {
    v_400 = sub_325;
  } else {
    v_400 = false;
  };
  if (controller_v_277) {
    sub_323 = v_400;
  } else {
    sub_323 = sub_324;
  };
  if (controller_c_door) {
    v_401 = sub_323;
    sub_322 = false;
  } else {
    v_401 = false;
    sub_322 = sub_323;
  };
  if (controller_ck_39_1) {
    sub_321 = v_401;
  } else {
    sub_321 = sub_322;
  };
  sub_320 = sub_321;
  if (controller_cleaner) {
    v_402 = false;
    sub_319 = sub_320;
  } else {
    v_402 = sub_320;
    sub_319 = false;
  };
  if (controller_ck_37_1) {
    sub_318 = v_402;
  } else {
    sub_318 = sub_319;
  };
  if (controller_c_pc) {
    v_403 = sub_318;
    sub_317 = false;
  } else {
    v_403 = false;
    sub_317 = sub_318;
  };
  if (controller_ck_41_1) {
    v_404 = v_403;
  } else {
    v_404 = sub_317;
  };
  if (controller_c_window) {
    sub_316 = v_404;
  } else {
    sub_316 = false;
  };
  if (controller_c_closet) {
    sub_315 = sub_316;
  } else {
    sub_315 = sub_98;
  };
  if (controller_light_failed_recovered) {
    sub_337 = sub_39;
    sub_338 = sub_169;
  } else {
    sub_337 = sub_169;
    sub_338 = sub_39;
  };
  if (controller_ck_52_1) {
    sub_336 = sub_338;
  } else {
    sub_336 = sub_337;
  };
  if (controller_c_air_1) {
    sub_335 = sub_336;
  } else {
    sub_335 = false;
  };
  if (controller_c_air_2) {
    v_396 = false;
  } else {
    v_396 = sub_335;
  };
  if (controller_v_276) {
    v_397 = v_396;
  } else {
    v_397 = false;
  };
  if (controller_c_air_2) {
    sub_334 = sub_335;
  } else {
    sub_334 = false;
  };
  if (controller_c_air_1) {
    sub_339 = false;
  } else {
    sub_339 = sub_336;
  };
  if (controller_v_276) {
    sub_333 = sub_339;
  } else {
    sub_333 = sub_334;
  };
  if (controller_v_277) {
    sub_332 = v_397;
  } else {
    sub_332 = sub_333;
  };
  if (controller_c_door) {
    v_398 = sub_332;
    sub_331 = false;
  } else {
    v_398 = false;
    sub_331 = sub_332;
  };
  if (controller_ck_39_1) {
    sub_330 = v_398;
  } else {
    sub_330 = sub_331;
  };
  sub_329 = sub_330;
  if (controller_cleaner) {
    v_399 = false;
    sub_328 = sub_329;
  } else {
    v_399 = sub_329;
    sub_328 = false;
  };
  if (controller_ck_37_1) {
    sub_327 = v_399;
  } else {
    sub_327 = sub_328;
  };
  if (controller_c_pc) {
    v_422 = sub_327;
    sub_326 = false;
  } else {
    v_422 = false;
    sub_326 = sub_327;
  };
  if (controller_ck_41_1) {
    v_423 = v_422;
  } else {
    v_423 = sub_326;
  };
  if (controller_c_window) {
    v_424 = v_423;
  } else {
    v_424 = false;
  };
  if (controller_c_closet) {
    v_425 = v_424;
  } else {
    v_425 = sub_123;
  };
  if (controller_ck_55_1) {
    v_426 = v_425;
  } else {
    v_426 = sub_315;
  };
  if (controller_c_closet) {
    sub_340 = sub_316;
  } else {
    sub_340 = sub_123;
  };
  if (controller_blind_switch) {
    v_427 = v_426;
  } else {
    v_427 = sub_340;
  };
  if (controller_c_blind_1) {
    v_428 = v_427;
  } else {
    v_428 = sub_340;
  };
  if (controller_ck_50_1) {
    sub_265 = v_428;
  } else {
    sub_265 = sub_266;
  };
  if (controller_ck_52_1) {
    sub_354 = sub_309;
  } else {
    sub_354 = sub_310;
  };
  if (controller_c_air_1) {
    sub_353 = sub_354;
  } else {
    sub_353 = false;
  };
  if (controller_c_air_2) {
    sub_352 = sub_353;
  } else {
    sub_352 = false;
  };
  if (controller_c_air_1) {
    sub_356 = false;
  } else {
    sub_356 = sub_354;
  };
  sub_355 = sub_356;
  if (controller_v_276) {
    sub_351 = sub_355;
  } else {
    sub_351 = sub_352;
  };
  if (controller_c_air_2) {
    sub_357 = false;
  } else {
    sub_357 = sub_353;
  };
  if (controller_v_276) {
    v_385 = sub_357;
  } else {
    v_385 = false;
  };
  if (controller_v_277) {
    sub_350 = v_385;
  } else {
    sub_350 = sub_351;
  };
  if (controller_c_door) {
    v_386 = sub_350;
    sub_349 = false;
  } else {
    v_386 = false;
    sub_349 = sub_350;
  };
  if (controller_ck_39_1) {
    sub_348 = v_386;
  } else {
    sub_348 = sub_349;
  };
  sub_347 = sub_348;
  if (controller_cleaner) {
    v_387 = false;
    sub_346 = sub_347;
  } else {
    v_387 = sub_347;
    sub_346 = false;
  };
  if (controller_ck_37_1) {
    sub_345 = v_387;
  } else {
    sub_345 = sub_346;
  };
  if (controller_c_pc) {
    v_388 = sub_345;
    sub_344 = false;
  } else {
    v_388 = false;
    sub_344 = sub_345;
  };
  if (controller_ck_41_1) {
    v_389 = v_388;
  } else {
    v_389 = sub_344;
  };
  if (controller_c_window) {
    sub_343 = v_389;
  } else {
    sub_343 = false;
  };
  if (controller_c_closet) {
    sub_342 = sub_343;
  } else {
    sub_342 = sub_228;
  };
  if (controller_ck_52_1) {
    sub_368 = sub_337;
  } else {
    sub_368 = sub_338;
  };
  if (controller_c_air_1) {
    sub_367 = sub_368;
  } else {
    sub_367 = false;
  };
  if (controller_c_air_2) {
    v_381 = false;
  } else {
    v_381 = sub_367;
  };
  if (controller_v_276) {
    v_382 = v_381;
  } else {
    v_382 = false;
  };
  if (controller_c_air_2) {
    sub_366 = sub_367;
  } else {
    sub_366 = false;
  };
  if (controller_c_air_1) {
    sub_369 = false;
  } else {
    sub_369 = sub_368;
  };
  if (controller_v_276) {
    sub_365 = sub_369;
  } else {
    sub_365 = sub_366;
  };
  if (controller_v_277) {
    sub_364 = v_382;
  } else {
    sub_364 = sub_365;
  };
  if (controller_c_door) {
    v_383 = sub_364;
    sub_363 = false;
  } else {
    v_383 = false;
    sub_363 = sub_364;
  };
  if (controller_ck_39_1) {
    sub_362 = v_383;
  } else {
    sub_362 = sub_363;
  };
  sub_361 = sub_362;
  if (controller_cleaner) {
    v_384 = false;
    sub_360 = sub_361;
  } else {
    v_384 = sub_361;
    sub_360 = false;
  };
  if (controller_ck_37_1) {
    sub_359 = v_384;
  } else {
    sub_359 = sub_360;
  };
  if (controller_c_pc) {
    v_390 = sub_359;
    sub_358 = false;
  } else {
    v_390 = false;
    sub_358 = sub_359;
  };
  if (controller_ck_41_1) {
    v_391 = v_390;
  } else {
    v_391 = sub_358;
  };
  if (controller_c_window) {
    v_392 = v_391;
  } else {
    v_392 = false;
  };
  if (controller_c_closet) {
    v_393 = v_392;
  } else {
    v_393 = sub_253;
  };
  if (controller_ck_55_1) {
    v_394 = v_393;
  } else {
    v_394 = sub_342;
  };
  if (controller_c_closet) {
    sub_370 = sub_343;
  } else {
    sub_370 = sub_253;
  };
  if (controller_blind_switch) {
    v_395 = v_394;
  } else {
    v_395 = sub_370;
  };
  if (controller_c_blind_1) {
    sub_341 = v_395;
  } else {
    sub_341 = sub_370;
  };
  if (controller_light_failed_recovered) {
    v_375 = sub_18;
    sub_383 = sub_169;
  } else {
    v_375 = sub_169;
    sub_383 = sub_18;
  };
  if (controller_ck_52_1) {
    sub_382 = v_375;
  } else {
    sub_382 = sub_383;
  };
  if (controller_c_air_1) {
    sub_381 = false;
  } else {
    sub_381 = sub_382;
  };
  sub_380 = sub_381;
  if (controller_v_276) {
    v_376 = sub_380;
  } else {
    v_376 = false;
  };
  if (controller_c_air_1) {
    sub_385 = sub_382;
  } else {
    sub_385 = false;
  };
  if (controller_c_air_2) {
    sub_384 = sub_385;
  } else {
    sub_384 = false;
  };
  if (controller_v_276) {
    sub_379 = sub_384;
  } else {
    sub_379 = sub_380;
  };
  if (controller_v_277) {
    sub_378 = v_376;
  } else {
    sub_378 = sub_379;
  };
  if (controller_c_door) {
    v_377 = sub_378;
    sub_377 = false;
  } else {
    v_377 = false;
    sub_377 = sub_378;
  };
  if (controller_ck_39_1) {
    sub_376 = v_377;
  } else {
    sub_376 = sub_377;
  };
  sub_375 = sub_376;
  if (controller_cleaner) {
    sub_374 = false;
    sub_386 = sub_375;
  } else {
    sub_374 = sub_375;
    sub_386 = false;
  };
  if (controller_ck_37_1) {
    sub_373 = sub_386;
  } else {
    sub_373 = sub_374;
  };
  if (controller_c_pc) {
    v_378 = sub_373;
    sub_372 = false;
  } else {
    v_378 = false;
    sub_372 = sub_373;
  };
  if (controller_ck_41_1) {
    v_379 = v_378;
  } else {
    v_379 = sub_372;
  };
  if (controller_c_window) {
    v_380 = v_379;
  } else {
    v_380 = false;
  };
  if (controller_c_closet) {
    sub_371 = sub_136;
  } else {
    sub_371 = v_380;
  };
  if (controller_ck_57_1) {
    sub_401 = sub_298;
  } else {
    sub_401 = sub_299;
  };
  if (controller_light_failed_recovered) {
    v_369 = sub_401;
    sub_400 = sub_148;
  } else {
    v_369 = sub_148;
    sub_400 = sub_401;
  };
  if (controller_ck_52_1) {
    sub_399 = v_369;
  } else {
    sub_399 = sub_400;
  };
  if (controller_c_air_1) {
    sub_398 = false;
  } else {
    sub_398 = sub_399;
  };
  sub_397 = sub_398;
  if (controller_v_276) {
    v_370 = sub_397;
  } else {
    v_370 = false;
  };
  if (controller_c_air_1) {
    sub_403 = sub_399;
  } else {
    sub_403 = false;
  };
  if (controller_c_air_2) {
    sub_402 = sub_403;
  } else {
    sub_402 = false;
  };
  if (controller_v_276) {
    sub_396 = sub_402;
  } else {
    sub_396 = sub_397;
  };
  if (controller_v_277) {
    sub_395 = v_370;
  } else {
    sub_395 = sub_396;
  };
  if (controller_c_door) {
    v_371 = sub_395;
    sub_394 = false;
  } else {
    v_371 = false;
    sub_394 = sub_395;
  };
  if (controller_ck_39_1) {
    sub_393 = v_371;
  } else {
    sub_393 = sub_394;
  };
  if (controller_v_276) {
    v_367 = sub_355;
    sub_407 = sub_352;
  } else {
    v_367 = false;
    sub_407 = sub_355;
  };
  if (controller_v_277) {
    sub_406 = v_367;
  } else {
    sub_406 = sub_407;
  };
  if (controller_c_door) {
    v_368 = sub_406;
    sub_405 = false;
  } else {
    v_368 = false;
    sub_405 = sub_406;
  };
  if (controller_ck_39_1) {
    sub_404 = v_368;
  } else {
    sub_404 = sub_405;
  };
  if (controller_change_shift) {
    v_372 = sub_404;
    sub_392 = sub_393;
  } else {
    v_372 = sub_393;
    sub_392 = sub_404;
  };
  if (controller_ck_1) {
    sub_391 = v_372;
  } else {
    sub_391 = sub_392;
  };
  if (controller_cleaner) {
    sub_390 = false;
    sub_408 = sub_391;
  } else {
    sub_390 = sub_391;
    sub_408 = false;
  };
  if (controller_ck_37_1) {
    sub_389 = sub_408;
  } else {
    sub_389 = sub_390;
  };
  if (controller_c_pc) {
    v_373 = sub_389;
    sub_388 = false;
  } else {
    v_373 = false;
    sub_388 = sub_389;
  };
  if (controller_ck_41_1) {
    v_374 = v_373;
  } else {
    v_374 = sub_388;
  };
  if (controller_c_window) {
    sub_387 = v_374;
  } else {
    sub_387 = false;
  };
  if (controller_c_closet) {
    v_429 = sub_175;
  } else {
    v_429 = sub_387;
  };
  if (controller_ck_55_1) {
    v_430 = v_429;
  } else {
    v_430 = sub_371;
  };
  if (controller_c_closet) {
    sub_409 = sub_136;
  } else {
    sub_409 = sub_387;
  };
  if (controller_blind_switch) {
    v_431 = v_430;
  } else {
    v_431 = sub_409;
  };
  if (controller_c_blind_1) {
    v_432 = v_431;
  } else {
    v_432 = sub_409;
  };
  if (controller_ck_50_1) {
    v_433 = v_432;
  } else {
    v_433 = sub_341;
  };
  if (p_controller_c_light_2) {
    sub_264 = v_433;
  } else {
    sub_264 = sub_265;
  };
  if (controller_light_switch) {
    v_542 = v_541;
  } else {
    v_542 = sub_264;
  };
  if (controller_c_light_1) {
    sub_2 = v_542;
  } else {
    sub_2 = sub_264;
  };
  if (controller_ck_37_1) {
    sub_415 = sub_29;
  } else {
    sub_415 = sub_44;
  };
  if (controller_c_pc) {
    v_359 = false;
    sub_414 = sub_415;
  } else {
    v_359 = sub_415;
    sub_414 = false;
  };
  if (controller_ck_41_1) {
    v_360 = v_359;
  } else {
    v_360 = sub_414;
  };
  if (controller_c_window) {
    v_361 = v_360;
  } else {
    v_361 = false;
  };
  sub_424 = sub_37;
  sub_423 = sub_424;
  if (controller_v_276) {
    v_356 = sub_42;
  } else {
    v_356 = sub_423;
  };
  if (controller_v_277) {
    sub_422 = v_356;
  } else {
    sub_422 = sub_122;
  };
  sub_421 = sub_422;
  sub_420 = sub_421;
  if (controller_cleaner) {
    v_357 = sub_420;
    sub_419 = false;
  } else {
    v_357 = false;
    sub_419 = sub_420;
  };
  if (controller_ck_37_1) {
    sub_418 = v_357;
  } else {
    sub_418 = sub_419;
  };
  if (controller_c_pc) {
    v_358 = false;
    sub_417 = sub_418;
  } else {
    v_358 = sub_418;
    sub_417 = false;
  };
  if (controller_ck_41_1) {
    sub_416 = v_358;
  } else {
    sub_416 = sub_417;
  };
  if (controller_c_closet) {
    sub_413 = v_361;
  } else {
    sub_413 = sub_416;
  };
  if (controller_ck_37_1) {
    sub_427 = sub_61;
  } else {
    sub_427 = sub_85;
  };
  if (controller_c_pc) {
    v_353 = false;
    sub_426 = sub_427;
  } else {
    v_353 = sub_427;
    sub_426 = false;
  };
  if (controller_ck_41_1) {
    v_354 = v_353;
  } else {
    v_354 = sub_426;
  };
  if (controller_c_window) {
    v_355 = v_354;
  } else {
    v_355 = false;
  };
  if (controller_c_air_2) {
    sub_436 = false;
  } else {
    sub_436 = sub_74;
  };
  sub_438 = sub_70;
  sub_437 = sub_438;
  if (controller_v_276) {
    v_349 = sub_73;
  } else {
    v_349 = sub_437;
  };
  if (controller_v_277) {
    sub_435 = v_349;
  } else {
    sub_435 = sub_436;
  };
  sub_434 = sub_435;
  sub_442 = sub_81;
  sub_441 = sub_442;
  if (controller_v_276) {
    v_348 = sub_83;
  } else {
    v_348 = sub_441;
  };
  if (controller_v_277) {
    sub_440 = v_348;
  } else {
    sub_440 = sub_97;
  };
  sub_439 = sub_440;
  if (controller_change_shift) {
    v_350 = sub_439;
    sub_433 = sub_434;
  } else {
    v_350 = sub_434;
    sub_433 = sub_439;
  };
  if (controller_ck_1) {
    sub_432 = v_350;
  } else {
    sub_432 = sub_433;
  };
  if (controller_cleaner) {
    v_351 = sub_432;
    sub_431 = false;
  } else {
    v_351 = false;
    sub_431 = sub_432;
  };
  if (controller_ck_37_1) {
    sub_430 = v_351;
  } else {
    sub_430 = sub_431;
  };
  if (controller_c_pc) {
    v_352 = false;
    sub_429 = sub_430;
  } else {
    v_352 = sub_430;
    sub_429 = false;
  };
  if (controller_ck_41_1) {
    sub_428 = v_352;
  } else {
    sub_428 = sub_429;
  };
  if (controller_c_closet) {
    sub_425 = v_355;
  } else {
    sub_425 = sub_428;
  };
  if (controller_ck_55_1) {
    v_362 = sub_425;
  } else {
    v_362 = sub_413;
  };
  if (controller_blind_switch) {
    v_363 = v_362;
  } else {
    v_363 = sub_425;
  };
  if (controller_c_blind_1) {
    sub_412 = v_363;
  } else {
    sub_412 = sub_425;
  };
  if (controller_ck_37_1) {
    sub_446 = sub_101;
  } else {
    sub_446 = sub_113;
  };
  if (controller_c_pc) {
    v_343 = false;
    sub_445 = sub_446;
  } else {
    v_343 = sub_446;
    sub_445 = false;
  };
  if (controller_ck_41_1) {
    v_344 = v_343;
  } else {
    v_344 = sub_445;
  };
  if (controller_c_window) {
    v_345 = v_344;
  } else {
    v_345 = false;
  };
  if (controller_c_air_2) {
    sub_454 = false;
  } else {
    sub_454 = sub_112;
  };
  sub_456 = sub_109;
  sub_455 = sub_456;
  if (controller_v_276) {
    v_340 = sub_111;
  } else {
    v_340 = sub_455;
  };
  if (controller_v_277) {
    sub_453 = v_340;
  } else {
    sub_453 = sub_454;
  };
  sub_452 = sub_453;
  sub_451 = sub_452;
  if (controller_cleaner) {
    v_341 = sub_451;
    sub_450 = false;
  } else {
    v_341 = false;
    sub_450 = sub_451;
  };
  if (controller_ck_37_1) {
    sub_449 = v_341;
  } else {
    sub_449 = sub_450;
  };
  if (controller_c_pc) {
    v_342 = false;
    sub_448 = sub_449;
  } else {
    v_342 = sub_449;
    sub_448 = false;
  };
  if (controller_ck_41_1) {
    sub_447 = v_342;
  } else {
    sub_447 = sub_448;
  };
  if (controller_c_closet) {
    sub_444 = v_345;
  } else {
    sub_444 = sub_447;
  };
  if (controller_ck_37_1) {
    sub_459 = sub_126;
  } else {
    sub_459 = sub_132;
  };
  if (controller_c_pc) {
    v_337 = false;
    sub_458 = sub_459;
  } else {
    v_337 = sub_459;
    sub_458 = false;
  };
  if (controller_ck_41_1) {
    v_338 = v_337;
  } else {
    v_338 = sub_458;
  };
  if (controller_c_window) {
    v_339 = v_338;
  } else {
    v_339 = false;
  };
  sub_468 = sub_17;
  sub_467 = sub_468;
  if (controller_v_276) {
    v_334 = sub_15;
  } else {
    v_334 = sub_467;
  };
  if (controller_v_277) {
    sub_466 = v_334;
  } else {
    sub_466 = sub_26;
  };
  sub_465 = sub_466;
  sub_464 = sub_465;
  if (controller_cleaner) {
    v_335 = sub_464;
    sub_463 = false;
  } else {
    v_335 = false;
    sub_463 = sub_464;
  };
  if (controller_ck_37_1) {
    sub_462 = v_335;
  } else {
    sub_462 = sub_463;
  };
  if (controller_c_pc) {
    v_336 = false;
    sub_461 = sub_462;
  } else {
    v_336 = sub_462;
    sub_461 = false;
  };
  if (controller_ck_41_1) {
    sub_460 = v_336;
  } else {
    sub_460 = sub_461;
  };
  if (controller_c_closet) {
    sub_457 = v_339;
  } else {
    sub_457 = sub_460;
  };
  if (controller_ck_55_1) {
    v_346 = sub_457;
  } else {
    v_346 = sub_444;
  };
  if (controller_blind_switch) {
    v_347 = v_346;
  } else {
    v_347 = sub_457;
  };
  if (controller_c_blind_1) {
    sub_443 = v_347;
  } else {
    sub_443 = sub_457;
  };
  if (controller_ck_50_1) {
    sub_411 = sub_443;
  } else {
    sub_411 = sub_412;
  };
  if (controller_ck_37_1) {
    sub_472 = sub_159;
  } else {
    sub_472 = sub_174;
  };
  if (controller_c_pc) {
    v_329 = false;
    sub_471 = sub_472;
  } else {
    v_329 = sub_472;
    sub_471 = false;
  };
  if (controller_ck_41_1) {
    v_330 = v_329;
  } else {
    v_330 = sub_471;
  };
  if (controller_c_window) {
    v_331 = v_330;
  } else {
    v_331 = false;
  };
  sub_481 = sub_167;
  sub_480 = sub_481;
  if (controller_v_276) {
    v_326 = sub_172;
  } else {
    v_326 = sub_480;
  };
  if (controller_v_277) {
    sub_479 = v_326;
  } else {
    sub_479 = sub_252;
  };
  sub_478 = sub_479;
  sub_477 = sub_478;
  if (controller_cleaner) {
    v_327 = sub_477;
    sub_476 = false;
  } else {
    v_327 = false;
    sub_476 = sub_477;
  };
  if (controller_ck_37_1) {
    sub_475 = v_327;
  } else {
    sub_475 = sub_476;
  };
  if (controller_c_pc) {
    v_328 = false;
    sub_474 = sub_475;
  } else {
    v_328 = sub_475;
    sub_474 = false;
  };
  if (controller_ck_41_1) {
    sub_473 = v_328;
  } else {
    sub_473 = sub_474;
  };
  if (controller_c_closet) {
    sub_470 = v_331;
  } else {
    sub_470 = sub_473;
  };
  if (controller_ck_37_1) {
    sub_484 = sub_191;
  } else {
    sub_484 = sub_215;
  };
  if (controller_c_pc) {
    v_323 = false;
    sub_483 = sub_484;
  } else {
    v_323 = sub_484;
    sub_483 = false;
  };
  if (controller_ck_41_1) {
    v_324 = v_323;
  } else {
    v_324 = sub_483;
  };
  if (controller_c_window) {
    v_325 = v_324;
  } else {
    v_325 = false;
  };
  if (controller_c_air_2) {
    sub_493 = false;
  } else {
    sub_493 = sub_204;
  };
  sub_495 = sub_200;
  sub_494 = sub_495;
  if (controller_v_276) {
    v_319 = sub_203;
  } else {
    v_319 = sub_494;
  };
  if (controller_v_277) {
    sub_492 = v_319;
  } else {
    sub_492 = sub_493;
  };
  sub_491 = sub_492;
  sub_499 = sub_211;
  sub_498 = sub_499;
  if (controller_v_276) {
    v_318 = sub_213;
  } else {
    v_318 = sub_498;
  };
  if (controller_v_277) {
    sub_497 = v_318;
  } else {
    sub_497 = sub_227;
  };
  sub_496 = sub_497;
  if (controller_change_shift) {
    v_320 = sub_496;
    sub_490 = sub_491;
  } else {
    v_320 = sub_491;
    sub_490 = sub_496;
  };
  if (controller_ck_1) {
    sub_489 = v_320;
  } else {
    sub_489 = sub_490;
  };
  if (controller_cleaner) {
    v_321 = sub_489;
    sub_488 = false;
  } else {
    v_321 = false;
    sub_488 = sub_489;
  };
  if (controller_ck_37_1) {
    sub_487 = v_321;
  } else {
    sub_487 = sub_488;
  };
  if (controller_c_pc) {
    v_322 = false;
    sub_486 = sub_487;
  } else {
    v_322 = sub_487;
    sub_486 = false;
  };
  if (controller_ck_41_1) {
    sub_485 = v_322;
  } else {
    sub_485 = sub_486;
  };
  if (controller_c_closet) {
    sub_482 = v_325;
  } else {
    sub_482 = sub_485;
  };
  if (controller_ck_55_1) {
    v_332 = sub_482;
  } else {
    v_332 = sub_470;
  };
  if (controller_blind_switch) {
    v_333 = v_332;
  } else {
    v_333 = sub_482;
  };
  if (controller_c_blind_1) {
    sub_469 = v_333;
  } else {
    sub_469 = sub_482;
  };
  if (controller_ck_37_1) {
    sub_503 = sub_231;
  } else {
    sub_503 = sub_243;
  };
  if (controller_c_pc) {
    v_313 = false;
    sub_502 = sub_503;
  } else {
    v_313 = sub_503;
    sub_502 = false;
  };
  if (controller_ck_41_1) {
    v_314 = v_313;
  } else {
    v_314 = sub_502;
  };
  if (controller_c_window) {
    v_315 = v_314;
  } else {
    v_315 = false;
  };
  if (controller_c_air_2) {
    sub_511 = false;
  } else {
    sub_511 = sub_242;
  };
  sub_513 = sub_239;
  sub_512 = sub_513;
  if (controller_v_276) {
    v_310 = sub_241;
  } else {
    v_310 = sub_512;
  };
  if (controller_v_277) {
    sub_510 = v_310;
  } else {
    sub_510 = sub_511;
  };
  sub_509 = sub_510;
  sub_508 = sub_509;
  if (controller_cleaner) {
    v_311 = sub_508;
    sub_507 = false;
  } else {
    v_311 = false;
    sub_507 = sub_508;
  };
  if (controller_ck_37_1) {
    sub_506 = v_311;
  } else {
    sub_506 = sub_507;
  };
  if (controller_c_pc) {
    v_312 = false;
    sub_505 = sub_506;
  } else {
    v_312 = sub_506;
    sub_505 = false;
  };
  if (controller_ck_41_1) {
    sub_504 = v_312;
  } else {
    sub_504 = sub_505;
  };
  if (controller_c_closet) {
    sub_501 = v_315;
  } else {
    sub_501 = sub_504;
  };
  if (controller_ck_37_1) {
    sub_516 = sub_256;
  } else {
    sub_516 = sub_262;
  };
  if (controller_c_pc) {
    v_307 = false;
    sub_515 = sub_516;
  } else {
    v_307 = sub_516;
    sub_515 = false;
  };
  if (controller_ck_41_1) {
    v_308 = v_307;
  } else {
    v_308 = sub_515;
  };
  if (controller_c_window) {
    v_309 = v_308;
  } else {
    v_309 = false;
  };
  sub_525 = sub_147;
  sub_524 = sub_525;
  if (controller_v_276) {
    v_304 = sub_145;
  } else {
    v_304 = sub_524;
  };
  if (controller_v_277) {
    sub_523 = v_304;
  } else {
    sub_523 = sub_156;
  };
  sub_522 = sub_523;
  sub_521 = sub_522;
  if (controller_cleaner) {
    v_305 = sub_521;
    sub_520 = false;
  } else {
    v_305 = false;
    sub_520 = sub_521;
  };
  if (controller_ck_37_1) {
    sub_519 = v_305;
  } else {
    sub_519 = sub_520;
  };
  if (controller_c_pc) {
    v_306 = false;
    sub_518 = sub_519;
  } else {
    v_306 = sub_519;
    sub_518 = false;
  };
  if (controller_ck_41_1) {
    sub_517 = v_306;
  } else {
    sub_517 = sub_518;
  };
  if (controller_c_closet) {
    sub_514 = v_309;
  } else {
    sub_514 = sub_517;
  };
  if (controller_ck_55_1) {
    v_316 = sub_514;
  } else {
    v_316 = sub_501;
  };
  if (controller_blind_switch) {
    v_317 = v_316;
  } else {
    v_317 = sub_514;
  };
  if (controller_c_blind_1) {
    sub_500 = v_317;
  } else {
    sub_500 = sub_514;
  };
  if (controller_ck_50_1) {
    v_364 = sub_500;
  } else {
    v_364 = sub_469;
  };
  if (p_controller_c_light_2) {
    v_365 = v_364;
  } else {
    v_365 = sub_411;
  };
  if (controller_ck_37_1) {
    sub_531 = sub_270;
  } else {
    sub_531 = sub_282;
  };
  if (controller_c_pc) {
    v_295 = false;
    sub_530 = sub_531;
  } else {
    v_295 = sub_531;
    sub_530 = false;
  };
  if (controller_ck_41_1) {
    v_296 = v_295;
  } else {
    v_296 = sub_530;
  };
  if (controller_c_window) {
    v_297 = v_296;
  } else {
    v_297 = false;
  };
  if (controller_c_air_2) {
    sub_539 = false;
  } else {
    sub_539 = sub_281;
  };
  sub_541 = sub_278;
  sub_540 = sub_541;
  if (controller_v_276) {
    v_292 = sub_280;
  } else {
    v_292 = sub_540;
  };
  if (controller_v_277) {
    sub_538 = v_292;
  } else {
    sub_538 = sub_539;
  };
  sub_537 = sub_538;
  sub_536 = sub_537;
  if (controller_cleaner) {
    v_293 = sub_536;
    sub_535 = false;
  } else {
    v_293 = false;
    sub_535 = sub_536;
  };
  if (controller_ck_37_1) {
    sub_534 = v_293;
  } else {
    sub_534 = sub_535;
  };
  if (controller_c_pc) {
    v_294 = false;
    sub_533 = sub_534;
  } else {
    v_294 = sub_534;
    sub_533 = false;
  };
  if (controller_ck_41_1) {
    sub_532 = v_294;
  } else {
    sub_532 = sub_533;
  };
  if (controller_c_closet) {
    sub_529 = v_297;
  } else {
    sub_529 = sub_532;
  };
  if (controller_ck_37_1) {
    sub_544 = sub_286;
  } else {
    sub_544 = sub_313;
  };
  if (controller_c_pc) {
    v_289 = false;
    sub_543 = sub_544;
  } else {
    v_289 = sub_544;
    sub_543 = false;
  };
  if (controller_ck_41_1) {
    v_290 = v_289;
  } else {
    v_290 = sub_543;
  };
  if (controller_c_window) {
    v_291 = v_290;
  } else {
    v_291 = false;
  };
  if (controller_c_air_2) {
    sub_553 = false;
  } else {
    sub_553 = sub_301;
  };
  sub_555 = sub_295;
  sub_554 = sub_555;
  if (controller_v_276) {
    v_285 = sub_300;
  } else {
    v_285 = sub_554;
  };
  if (controller_v_277) {
    sub_552 = v_285;
  } else {
    sub_552 = sub_553;
  };
  sub_551 = sub_552;
  sub_559 = sub_308;
  sub_558 = sub_559;
  if (controller_v_276) {
    v_284 = sub_311;
  } else {
    v_284 = sub_558;
  };
  if (controller_v_277) {
    sub_557 = v_284;
  } else {
    sub_557 = sub_325;
  };
  sub_556 = sub_557;
  if (controller_change_shift) {
    v_286 = sub_556;
    sub_550 = sub_551;
  } else {
    v_286 = sub_551;
    sub_550 = sub_556;
  };
  if (controller_ck_1) {
    sub_549 = v_286;
  } else {
    sub_549 = sub_550;
  };
  if (controller_cleaner) {
    v_287 = sub_549;
    sub_548 = false;
  } else {
    v_287 = false;
    sub_548 = sub_549;
  };
  if (controller_ck_37_1) {
    sub_547 = v_287;
  } else {
    sub_547 = sub_548;
  };
  if (controller_c_pc) {
    v_288 = false;
    sub_546 = sub_547;
  } else {
    v_288 = sub_547;
    sub_546 = false;
  };
  if (controller_ck_41_1) {
    sub_545 = v_288;
  } else {
    sub_545 = sub_546;
  };
  if (controller_c_closet) {
    sub_542 = v_291;
  } else {
    sub_542 = sub_545;
  };
  if (controller_ck_55_1) {
    v_298 = sub_542;
  } else {
    v_298 = sub_529;
  };
  if (controller_blind_switch) {
    v_299 = v_298;
  } else {
    v_299 = sub_542;
  };
  if (controller_c_blind_1) {
    sub_528 = v_299;
  } else {
    sub_528 = sub_542;
  };
  if (controller_ck_50_1) {
    sub_527 = sub_443;
  } else {
    sub_527 = sub_528;
  };
  if (controller_ck_37_1) {
    sub_562 = sub_374;
  } else {
    sub_562 = sub_386;
  };
  if (controller_c_pc) {
    v_281 = false;
    sub_561 = sub_562;
  } else {
    v_281 = sub_562;
    sub_561 = false;
  };
  if (controller_ck_41_1) {
    v_282 = v_281;
  } else {
    v_282 = sub_561;
  };
  if (controller_c_window) {
    v_283 = v_282;
  } else {
    v_283 = false;
  };
  if (controller_c_air_2) {
    sub_570 = false;
  } else {
    sub_570 = sub_385;
  };
  sub_572 = sub_382;
  sub_571 = sub_572;
  if (controller_v_276) {
    v_278 = sub_384;
  } else {
    v_278 = sub_571;
  };
  if (controller_v_277) {
    sub_569 = v_278;
  } else {
    sub_569 = sub_570;
  };
  sub_568 = sub_569;
  sub_567 = sub_568;
  if (controller_cleaner) {
    v_279 = sub_567;
    sub_566 = false;
  } else {
    v_279 = false;
    sub_566 = sub_567;
  };
  if (controller_ck_37_1) {
    sub_565 = v_279;
  } else {
    sub_565 = sub_566;
  };
  if (controller_c_pc) {
    v_280 = false;
    sub_564 = sub_565;
  } else {
    v_280 = sub_565;
    sub_564 = false;
  };
  if (controller_ck_41_1) {
    sub_563 = v_280;
  } else {
    sub_563 = sub_564;
  };
  if (controller_c_closet) {
    sub_560 = v_283;
  } else {
    sub_560 = sub_563;
  };
  if (controller_ck_37_1) {
    sub_575 = sub_390;
  } else {
    sub_575 = sub_408;
  };
  if (controller_c_pc) {
    v_275 = false;
    sub_574 = sub_575;
  } else {
    v_275 = sub_575;
    sub_574 = false;
  };
  if (controller_ck_41_1) {
    v_276 = v_275;
  } else {
    v_276 = sub_574;
  };
  if (controller_c_window) {
    v_277 = v_276;
  } else {
    v_277 = false;
  };
  if (controller_c_air_2) {
    sub_584 = false;
  } else {
    sub_584 = sub_403;
  };
  sub_586 = sub_399;
  sub_585 = sub_586;
  if (controller_v_276) {
    v_271 = sub_402;
  } else {
    v_271 = sub_585;
  };
  if (controller_v_277) {
    sub_583 = v_271;
  } else {
    sub_583 = sub_584;
  };
  sub_582 = sub_583;
  sub_590 = sub_354;
  sub_589 = sub_590;
  if (controller_v_276) {
    v = sub_352;
  } else {
    v = sub_589;
  };
  if (controller_v_277) {
    sub_588 = v;
  } else {
    sub_588 = sub_357;
  };
  sub_587 = sub_588;
  if (controller_change_shift) {
    v_272 = sub_587;
    sub_581 = sub_582;
  } else {
    v_272 = sub_582;
    sub_581 = sub_587;
  };
  if (controller_ck_1) {
    sub_580 = v_272;
  } else {
    sub_580 = sub_581;
  };
  if (controller_cleaner) {
    v_273 = sub_580;
    sub_579 = false;
  } else {
    v_273 = false;
    sub_579 = sub_580;
  };
  if (controller_ck_37_1) {
    sub_578 = v_273;
  } else {
    sub_578 = sub_579;
  };
  if (controller_c_pc) {
    v_274 = false;
    sub_577 = sub_578;
  } else {
    v_274 = sub_578;
    sub_577 = false;
  };
  if (controller_ck_41_1) {
    sub_576 = v_274;
  } else {
    sub_576 = sub_577;
  };
  if (controller_c_closet) {
    sub_573 = v_277;
  } else {
    sub_573 = sub_576;
  };
  if (controller_ck_55_1) {
    v_300 = sub_573;
  } else {
    v_300 = sub_560;
  };
  if (controller_blind_switch) {
    v_301 = v_300;
  } else {
    v_301 = sub_573;
  };
  if (controller_c_blind_1) {
    v_302 = v_301;
  } else {
    v_302 = sub_573;
  };
  if (controller_ck_50_1) {
    v_303 = v_302;
  } else {
    v_303 = sub_500;
  };
  if (p_controller_c_light_2) {
    sub_526 = v_303;
  } else {
    sub_526 = sub_527;
  };
  if (controller_light_switch) {
    v_366 = v_365;
  } else {
    v_366 = sub_526;
  };
  if (controller_c_light_1) {
    sub_410 = v_366;
  } else {
    sub_410 = sub_526;
  };
  if (controller_worker) {
    v_543 = sub_410;
    sub_1 = sub_2;
  } else {
    v_543 = sub_2;
    sub_1 = sub_410;
  };
  if (controller_ck_35_1) {
    sub_0 = v_543;
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
  int controller_closet_failed_recovered, int controller_pc_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_17, int controller_ck_35_1, int controller_pnr_16,
  int controller_ck_37_1, int controller_pnr_15, int controller_ck_39_1,
  int controller_pnr_14, int controller_ck_41_1, int controller_pnr_13,
  int controller_v_277, int controller_v_276, int controller_pnr_12,
  int controller_ck_45_1, int controller_pnr_11, int controller_ck_47_1,
  int controller_pnr_10, int controller_ck_50_1, int controller_pnr_9,
  int controller_ck_52_1, int controller_pnr_8, int controller_ck_55_1,
  int controller_pnr_7, int controller_ck_57_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_light_1, int controller_c_closet,
  int controller_c_air_2, int controller_c_air_1, int controller_c_window,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_blind_1_out* _out) {
  
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
  int v_546;
  int v_545;
  int v_544;
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
  sub_23 = false;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_27 = true;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  if (p_controller_c_blind_1) {
    sub_18 = sub_24;
  } else {
    sub_18 = sub_19;
  };
  sub_17 = sub_18;
  sub_16 = sub_17;
  if (controller_c_air_1) {
    sub_15 = sub_16;
  } else {
    sub_15 = false;
  };
  if (controller_c_air_2) {
    sub_14 = sub_15;
  } else {
    sub_14 = false;
  };
  if (controller_c_air_1) {
    sub_29 = false;
  } else {
    sub_29 = sub_16;
  };
  sub_28 = sub_29;
  if (controller_v_276) {
    sub_13 = sub_28;
  } else {
    sub_13 = sub_14;
  };
  if (controller_c_air_2) {
    sub_30 = false;
  } else {
    sub_30 = sub_15;
  };
  if (controller_v_276) {
    v_620 = sub_30;
  } else {
    v_620 = false;
  };
  if (controller_v_277) {
    sub_12 = v_620;
  } else {
    sub_12 = sub_13;
  };
  if (controller_c_door) {
    v_621 = sub_12;
    sub_11 = false;
  } else {
    v_621 = false;
    sub_11 = sub_12;
  };
  if (controller_ck_39_1) {
    sub_10 = v_621;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  if (controller_cleaner) {
    v_622 = false;
    sub_8 = sub_9;
  } else {
    v_622 = sub_9;
    sub_8 = false;
  };
  if (controller_ck_37_1) {
    sub_7 = v_622;
  } else {
    sub_7 = sub_8;
  };
  if (controller_c_pc) {
    v_623 = sub_7;
    sub_6 = false;
  } else {
    v_623 = false;
    sub_6 = sub_7;
  };
  if (controller_ck_41_1) {
    v_624 = v_623;
  } else {
    v_624 = sub_6;
  };
  if (controller_c_window) {
    sub_5 = v_624;
  } else {
    sub_5 = false;
  };
  if (controller_blind_failed_recovered) {
    v_615 = sub_19;
    sub_45 = sub_18;
  } else {
    v_615 = sub_18;
    sub_45 = sub_19;
  };
  if (controller_ck_57_1) {
    sub_44 = v_615;
  } else {
    sub_44 = sub_45;
  };
  if (controller_blind_failed_recovered) {
    v_614 = sub_19;
    sub_47 = false;
  } else {
    v_614 = false;
    sub_47 = sub_19;
  };
  if (controller_ck_57_1) {
    sub_46 = v_614;
  } else {
    sub_46 = sub_47;
  };
  if (controller_light_failed_recovered) {
    v_616 = sub_46;
    sub_43 = sub_44;
  } else {
    v_616 = sub_44;
    sub_43 = sub_46;
  };
  if (controller_ck_52_1) {
    sub_42 = v_616;
  } else {
    sub_42 = sub_43;
  };
  if (controller_c_air_1) {
    sub_41 = false;
  } else {
    sub_41 = sub_42;
  };
  sub_40 = sub_41;
  if (controller_v_276) {
    v_617 = sub_40;
  } else {
    v_617 = false;
  };
  if (controller_c_air_1) {
    sub_49 = sub_42;
  } else {
    sub_49 = false;
  };
  if (controller_c_air_2) {
    sub_48 = sub_49;
  } else {
    sub_48 = false;
  };
  if (controller_v_276) {
    sub_39 = sub_48;
  } else {
    sub_39 = sub_40;
  };
  if (controller_v_277) {
    sub_38 = v_617;
  } else {
    sub_38 = sub_39;
  };
  if (controller_c_door) {
    v_618 = sub_38;
    sub_37 = false;
  } else {
    v_618 = false;
    sub_37 = sub_38;
  };
  if (controller_ck_39_1) {
    sub_36 = v_618;
  } else {
    sub_36 = sub_37;
  };
  if (controller_light_failed_recovered) {
    v_611 = false;
    sub_57 = sub_44;
  } else {
    v_611 = sub_44;
    sub_57 = false;
  };
  if (controller_ck_52_1) {
    sub_56 = v_611;
  } else {
    sub_56 = sub_57;
  };
  if (controller_c_air_1) {
    sub_55 = false;
  } else {
    sub_55 = sub_56;
  };
  sub_54 = sub_55;
  if (controller_v_276) {
    v_612 = sub_54;
  } else {
    v_612 = false;
  };
  if (controller_c_air_1) {
    sub_59 = sub_56;
  } else {
    sub_59 = false;
  };
  if (controller_c_air_2) {
    sub_58 = sub_59;
  } else {
    sub_58 = false;
  };
  if (controller_v_276) {
    sub_53 = sub_58;
  } else {
    sub_53 = sub_54;
  };
  if (controller_v_277) {
    sub_52 = v_612;
  } else {
    sub_52 = sub_53;
  };
  if (controller_c_door) {
    v_613 = sub_52;
    sub_51 = false;
  } else {
    v_613 = false;
    sub_51 = sub_52;
  };
  if (controller_ck_39_1) {
    sub_50 = v_613;
  } else {
    sub_50 = sub_51;
  };
  if (controller_change_shift) {
    v_619 = sub_50;
    sub_35 = sub_36;
  } else {
    v_619 = sub_36;
    sub_35 = sub_50;
  };
  if (controller_ck_1) {
    sub_34 = v_619;
  } else {
    sub_34 = sub_35;
  };
  if (controller_cleaner) {
    sub_33 = false;
    sub_60 = sub_34;
  } else {
    sub_33 = sub_34;
    sub_60 = false;
  };
  if (controller_ck_37_1) {
    sub_32 = sub_60;
  } else {
    sub_32 = sub_33;
  };
  if (controller_c_pc) {
    v_625 = sub_32;
    sub_31 = false;
  } else {
    v_625 = false;
    sub_31 = sub_32;
  };
  if (controller_ck_41_1) {
    v_626 = v_625;
  } else {
    v_626 = sub_31;
  };
  if (controller_c_window) {
    v_627 = v_626;
  } else {
    v_627 = false;
  };
  if (controller_c_closet) {
    sub_4 = sub_5;
  } else {
    sub_4 = v_627;
  };
  sub_72 = sub_44;
  if (controller_c_air_1) {
    sub_71 = sub_72;
  } else {
    sub_71 = false;
  };
  if (controller_c_air_2) {
    v_605 = false;
  } else {
    v_605 = sub_71;
  };
  if (controller_v_276) {
    v_606 = v_605;
  } else {
    v_606 = false;
  };
  if (controller_c_air_2) {
    sub_70 = sub_71;
  } else {
    sub_70 = false;
  };
  if (controller_c_air_1) {
    sub_73 = false;
  } else {
    sub_73 = sub_72;
  };
  if (controller_v_276) {
    sub_69 = sub_73;
  } else {
    sub_69 = sub_70;
  };
  if (controller_v_277) {
    sub_68 = v_606;
  } else {
    sub_68 = sub_69;
  };
  if (controller_c_door) {
    v_607 = sub_68;
    sub_67 = false;
  } else {
    v_607 = false;
    sub_67 = sub_68;
  };
  if (controller_ck_39_1) {
    sub_66 = v_607;
  } else {
    sub_66 = sub_67;
  };
  sub_65 = sub_66;
  if (controller_cleaner) {
    v_608 = false;
    sub_64 = sub_65;
  } else {
    v_608 = sub_65;
    sub_64 = false;
  };
  if (controller_ck_37_1) {
    sub_63 = v_608;
  } else {
    sub_63 = sub_64;
  };
  if (controller_c_pc) {
    v_609 = sub_63;
    sub_62 = false;
  } else {
    v_609 = false;
    sub_62 = sub_63;
  };
  if (controller_ck_41_1) {
    v_610 = v_609;
  } else {
    v_610 = sub_62;
  };
  if (controller_c_window) {
    sub_61 = v_610;
  } else {
    sub_61 = false;
  };
  if (controller_blind_failed_recovered) {
    v_598 = sub_18;
    sub_89 = false;
  } else {
    v_598 = false;
    sub_89 = sub_18;
  };
  if (controller_ck_57_1) {
    sub_88 = v_598;
  } else {
    sub_88 = sub_89;
  };
  if (controller_light_failed_recovered) {
    v_599 = sub_88;
    sub_87 = sub_17;
  } else {
    v_599 = sub_17;
    sub_87 = sub_88;
  };
  if (controller_ck_52_1) {
    sub_86 = v_599;
  } else {
    sub_86 = sub_87;
  };
  if (controller_c_air_1) {
    sub_85 = false;
  } else {
    sub_85 = sub_86;
  };
  sub_84 = sub_85;
  if (controller_v_276) {
    v_600 = sub_84;
  } else {
    v_600 = false;
  };
  if (controller_c_air_1) {
    sub_91 = sub_86;
  } else {
    sub_91 = false;
  };
  if (controller_c_air_2) {
    sub_90 = sub_91;
  } else {
    sub_90 = false;
  };
  if (controller_v_276) {
    sub_83 = sub_90;
  } else {
    sub_83 = sub_84;
  };
  if (controller_v_277) {
    sub_82 = v_600;
  } else {
    sub_82 = sub_83;
  };
  if (controller_c_door) {
    v_601 = sub_82;
    sub_81 = false;
  } else {
    v_601 = false;
    sub_81 = sub_82;
  };
  if (controller_ck_39_1) {
    sub_80 = v_601;
  } else {
    sub_80 = sub_81;
  };
  if (controller_light_failed_recovered) {
    v_595 = false;
    sub_99 = sub_17;
  } else {
    v_595 = sub_17;
    sub_99 = false;
  };
  if (controller_ck_52_1) {
    sub_98 = v_595;
  } else {
    sub_98 = sub_99;
  };
  if (controller_c_air_1) {
    sub_97 = false;
  } else {
    sub_97 = sub_98;
  };
  sub_96 = sub_97;
  if (controller_v_276) {
    v_596 = sub_96;
  } else {
    v_596 = false;
  };
  if (controller_c_air_1) {
    sub_101 = sub_98;
  } else {
    sub_101 = false;
  };
  if (controller_c_air_2) {
    sub_100 = sub_101;
  } else {
    sub_100 = false;
  };
  if (controller_v_276) {
    sub_95 = sub_100;
  } else {
    sub_95 = sub_96;
  };
  if (controller_v_277) {
    sub_94 = v_596;
  } else {
    sub_94 = sub_95;
  };
  if (controller_c_door) {
    v_597 = sub_94;
    sub_93 = false;
  } else {
    v_597 = false;
    sub_93 = sub_94;
  };
  if (controller_ck_39_1) {
    sub_92 = v_597;
  } else {
    sub_92 = sub_93;
  };
  if (controller_change_shift) {
    v_602 = sub_92;
    sub_79 = sub_80;
  } else {
    v_602 = sub_80;
    sub_79 = sub_92;
  };
  if (controller_ck_1) {
    sub_78 = v_602;
  } else {
    sub_78 = sub_79;
  };
  if (controller_cleaner) {
    sub_77 = false;
    sub_102 = sub_78;
  } else {
    sub_77 = sub_78;
    sub_102 = false;
  };
  if (controller_ck_37_1) {
    sub_76 = sub_102;
  } else {
    sub_76 = sub_77;
  };
  if (controller_c_pc) {
    v_603 = sub_76;
    sub_75 = false;
  } else {
    v_603 = false;
    sub_75 = sub_76;
  };
  if (controller_ck_41_1) {
    v_604 = v_603;
  } else {
    v_604 = sub_75;
  };
  if (controller_c_window) {
    sub_74 = v_604;
  } else {
    sub_74 = false;
  };
  if (controller_c_closet) {
    v_630 = sub_5;
    v_628 = sub_61;
  } else {
    v_630 = sub_74;
    v_628 = sub_74;
  };
  if (controller_ck_55_1) {
    v_629 = v_628;
  } else {
    v_629 = sub_4;
  };
  if (controller_blind_switch) {
    sub_3 = v_629;
  } else {
    sub_3 = v_630;
  };
  if (controller_v_276) {
    sub_112 = sub_96;
  } else {
    sub_112 = sub_100;
  };
  if (controller_c_air_2) {
    sub_113 = false;
  } else {
    sub_113 = sub_101;
  };
  if (controller_v_276) {
    v_590 = sub_113;
  } else {
    v_590 = false;
  };
  if (controller_v_277) {
    sub_111 = v_590;
  } else {
    sub_111 = sub_112;
  };
  if (controller_c_door) {
    v_591 = sub_111;
    sub_110 = false;
  } else {
    v_591 = false;
    sub_110 = sub_111;
  };
  if (controller_ck_39_1) {
    sub_109 = v_591;
  } else {
    sub_109 = sub_110;
  };
  sub_108 = sub_109;
  if (controller_cleaner) {
    v_592 = false;
    sub_107 = sub_108;
  } else {
    v_592 = sub_108;
    sub_107 = false;
  };
  if (controller_ck_37_1) {
    sub_106 = v_592;
  } else {
    sub_106 = sub_107;
  };
  if (controller_c_pc) {
    v_593 = sub_106;
    sub_105 = false;
  } else {
    v_593 = false;
    sub_105 = sub_106;
  };
  if (controller_ck_41_1) {
    v_594 = v_593;
  } else {
    v_594 = sub_105;
  };
  if (controller_c_window) {
    sub_104 = v_594;
  } else {
    sub_104 = false;
  };
  if (controller_light_failed_recovered) {
    v_585 = sub_17;
    sub_126 = sub_44;
  } else {
    v_585 = sub_44;
    sub_126 = sub_17;
  };
  if (controller_ck_52_1) {
    sub_125 = v_585;
  } else {
    sub_125 = sub_126;
  };
  if (controller_c_air_1) {
    sub_124 = false;
  } else {
    sub_124 = sub_125;
  };
  sub_123 = sub_124;
  if (controller_v_276) {
    v_586 = sub_123;
  } else {
    v_586 = false;
  };
  if (controller_c_air_1) {
    sub_128 = sub_125;
  } else {
    sub_128 = false;
  };
  if (controller_c_air_2) {
    sub_127 = sub_128;
  } else {
    sub_127 = false;
  };
  if (controller_v_276) {
    sub_122 = sub_127;
  } else {
    sub_122 = sub_123;
  };
  if (controller_v_277) {
    sub_121 = v_586;
  } else {
    sub_121 = sub_122;
  };
  if (controller_c_door) {
    v_587 = sub_121;
    sub_120 = false;
  } else {
    v_587 = false;
    sub_120 = sub_121;
  };
  if (controller_ck_39_1) {
    sub_119 = v_587;
  } else {
    sub_119 = sub_120;
  };
  sub_118 = sub_119;
  if (controller_cleaner) {
    sub_117 = false;
    sub_129 = sub_118;
  } else {
    sub_117 = sub_118;
    sub_129 = false;
  };
  if (controller_ck_37_1) {
    sub_116 = sub_129;
  } else {
    sub_116 = sub_117;
  };
  if (controller_c_pc) {
    v_588 = sub_116;
    sub_115 = false;
  } else {
    v_588 = false;
    sub_115 = sub_116;
  };
  if (controller_ck_41_1) {
    v_589 = v_588;
  } else {
    v_589 = sub_115;
  };
  if (controller_c_window) {
    sub_114 = v_589;
  } else {
    sub_114 = false;
  };
  if (controller_c_closet) {
    sub_103 = sub_104;
  } else {
    sub_103 = sub_114;
  };
  if (controller_v_276) {
    sub_137 = sub_54;
  } else {
    sub_137 = sub_58;
  };
  if (controller_c_air_2) {
    sub_138 = false;
  } else {
    sub_138 = sub_59;
  };
  if (controller_v_276) {
    v_582 = sub_138;
  } else {
    v_582 = false;
  };
  if (controller_v_277) {
    sub_136 = v_582;
  } else {
    sub_136 = sub_137;
  };
  if (controller_c_door) {
    v_583 = sub_136;
    sub_135 = false;
  } else {
    v_583 = false;
    sub_135 = sub_136;
  };
  if (controller_ck_39_1) {
    sub_134 = v_583;
  } else {
    sub_134 = sub_135;
  };
  sub_133 = sub_134;
  if (controller_cleaner) {
    v_584 = false;
    sub_132 = sub_133;
  } else {
    v_584 = sub_133;
    sub_132 = false;
  };
  if (controller_ck_37_1) {
    sub_131 = v_584;
  } else {
    sub_131 = sub_132;
  };
  if (controller_c_pc) {
    v_631 = sub_131;
    sub_130 = false;
  } else {
    v_631 = false;
    sub_130 = sub_131;
  };
  if (controller_ck_41_1) {
    v_632 = v_631;
  } else {
    v_632 = sub_130;
  };
  if (controller_c_window) {
    v_633 = v_632;
  } else {
    v_633 = false;
  };
  if (controller_v_276) {
    v_578 = sub_28;
    sub_147 = sub_14;
  } else {
    v_578 = false;
    sub_147 = sub_28;
  };
  if (controller_v_277) {
    sub_146 = v_578;
  } else {
    sub_146 = sub_147;
  };
  if (controller_c_door) {
    v_579 = sub_146;
    sub_145 = false;
  } else {
    v_579 = false;
    sub_145 = sub_146;
  };
  if (controller_ck_39_1) {
    sub_144 = v_579;
  } else {
    sub_144 = sub_145;
  };
  sub_143 = sub_144;
  if (controller_cleaner) {
    sub_142 = false;
    sub_148 = sub_143;
  } else {
    sub_142 = sub_143;
    sub_148 = false;
  };
  if (controller_ck_37_1) {
    sub_141 = sub_148;
  } else {
    sub_141 = sub_142;
  };
  if (controller_c_pc) {
    v_580 = sub_141;
    sub_140 = false;
  } else {
    v_580 = false;
    sub_140 = sub_141;
  };
  if (controller_ck_41_1) {
    v_581 = v_580;
  } else {
    v_581 = sub_140;
  };
  if (controller_c_window) {
    sub_139 = v_581;
  } else {
    sub_139 = false;
  };
  if (controller_c_closet) {
    v_636 = sub_104;
    v_634 = v_633;
  } else {
    v_636 = sub_139;
    v_634 = sub_139;
  };
  if (controller_ck_55_1) {
    v_635 = v_634;
  } else {
    v_635 = sub_103;
  };
  if (controller_blind_switch) {
    v_637 = v_635;
  } else {
    v_637 = v_636;
  };
  if (controller_ck_50_1) {
    v_638 = v_637;
  } else {
    v_638 = sub_3;
  };
  if (controller_c_closet) {
    v_577 = sub_5;
    v_575 = sub_61;
    sub_150 = sub_5;
  } else {
    v_577 = sub_139;
    v_575 = sub_139;
    sub_150 = sub_114;
  };
  if (controller_ck_55_1) {
    v_576 = v_575;
  } else {
    v_576 = sub_150;
  };
  if (controller_blind_switch) {
    sub_149 = v_576;
  } else {
    sub_149 = v_577;
  };
  if (controller_light_switch) {
    v_639 = v_638;
  } else {
    v_639 = sub_149;
  };
  if (controller_c_light_1) {
    sub_2 = v_639;
  } else {
    sub_2 = sub_149;
  };
  if (controller_ck_37_1) {
    sub_155 = sub_33;
  } else {
    sub_155 = sub_60;
  };
  if (controller_c_pc) {
    v_569 = false;
    sub_154 = sub_155;
  } else {
    v_569 = sub_155;
    sub_154 = false;
  };
  if (controller_ck_41_1) {
    v_570 = v_569;
  } else {
    v_570 = sub_154;
  };
  if (controller_c_window) {
    v_571 = v_570;
  } else {
    v_571 = false;
  };
  if (controller_c_air_2) {
    sub_164 = false;
  } else {
    sub_164 = sub_49;
  };
  sub_166 = sub_42;
  sub_165 = sub_166;
  if (controller_v_276) {
    v_565 = sub_48;
  } else {
    v_565 = sub_165;
  };
  if (controller_v_277) {
    sub_163 = v_565;
  } else {
    sub_163 = sub_164;
  };
  sub_162 = sub_163;
  sub_170 = sub_56;
  sub_169 = sub_170;
  if (controller_v_276) {
    v_564 = sub_58;
  } else {
    v_564 = sub_169;
  };
  if (controller_v_277) {
    sub_168 = v_564;
  } else {
    sub_168 = sub_138;
  };
  sub_167 = sub_168;
  if (controller_change_shift) {
    v_566 = sub_167;
    sub_161 = sub_162;
  } else {
    v_566 = sub_162;
    sub_161 = sub_167;
  };
  if (controller_ck_1) {
    sub_160 = v_566;
  } else {
    sub_160 = sub_161;
  };
  if (controller_cleaner) {
    v_567 = sub_160;
    sub_159 = false;
  } else {
    v_567 = false;
    sub_159 = sub_160;
  };
  if (controller_ck_37_1) {
    sub_158 = v_567;
  } else {
    sub_158 = sub_159;
  };
  if (controller_c_pc) {
    v_568 = false;
    sub_157 = sub_158;
  } else {
    v_568 = sub_158;
    sub_157 = false;
  };
  if (controller_ck_41_1) {
    sub_156 = v_568;
  } else {
    sub_156 = sub_157;
  };
  if (controller_c_closet) {
    sub_153 = v_571;
  } else {
    sub_153 = sub_156;
  };
  if (controller_ck_37_1) {
    sub_173 = sub_77;
  } else {
    sub_173 = sub_102;
  };
  if (controller_c_pc) {
    v_561 = false;
    sub_172 = sub_173;
  } else {
    v_561 = sub_173;
    sub_172 = false;
  };
  if (controller_ck_41_1) {
    v_562 = v_561;
  } else {
    v_562 = sub_172;
  };
  if (controller_c_window) {
    v_563 = v_562;
  } else {
    v_563 = false;
  };
  if (controller_c_air_2) {
    sub_182 = false;
  } else {
    sub_182 = sub_91;
  };
  sub_184 = sub_86;
  sub_183 = sub_184;
  if (controller_v_276) {
    v_557 = sub_90;
  } else {
    v_557 = sub_183;
  };
  if (controller_v_277) {
    sub_181 = v_557;
  } else {
    sub_181 = sub_182;
  };
  sub_180 = sub_181;
  sub_188 = sub_98;
  sub_187 = sub_188;
  if (controller_v_276) {
    v_556 = sub_100;
  } else {
    v_556 = sub_187;
  };
  if (controller_v_277) {
    sub_186 = v_556;
  } else {
    sub_186 = sub_113;
  };
  sub_185 = sub_186;
  if (controller_change_shift) {
    v_558 = sub_185;
    sub_179 = sub_180;
  } else {
    v_558 = sub_180;
    sub_179 = sub_185;
  };
  if (controller_ck_1) {
    sub_178 = v_558;
  } else {
    sub_178 = sub_179;
  };
  if (controller_cleaner) {
    v_559 = sub_178;
    sub_177 = false;
  } else {
    v_559 = false;
    sub_177 = sub_178;
  };
  if (controller_ck_37_1) {
    sub_176 = v_559;
  } else {
    sub_176 = sub_177;
  };
  if (controller_c_pc) {
    v_560 = false;
    sub_175 = sub_176;
  } else {
    v_560 = sub_176;
    sub_175 = false;
  };
  if (controller_ck_41_1) {
    sub_174 = v_560;
  } else {
    sub_174 = sub_175;
  };
  if (controller_c_closet) {
    sub_171 = v_563;
  } else {
    sub_171 = sub_174;
  };
  if (controller_ck_55_1) {
    v_572 = sub_171;
  } else {
    v_572 = sub_153;
  };
  if (controller_blind_switch) {
    sub_152 = v_572;
  } else {
    sub_152 = sub_171;
  };
  if (controller_ck_37_1) {
    sub_192 = sub_117;
  } else {
    sub_192 = sub_129;
  };
  if (controller_c_pc) {
    v_552 = false;
    sub_191 = sub_192;
  } else {
    v_552 = sub_192;
    sub_191 = false;
  };
  if (controller_ck_41_1) {
    v_553 = v_552;
  } else {
    v_553 = sub_191;
  };
  if (controller_c_window) {
    v_554 = v_553;
  } else {
    v_554 = false;
  };
  if (controller_c_air_2) {
    sub_200 = false;
  } else {
    sub_200 = sub_128;
  };
  sub_202 = sub_125;
  sub_201 = sub_202;
  if (controller_v_276) {
    v_549 = sub_127;
  } else {
    v_549 = sub_201;
  };
  if (controller_v_277) {
    sub_199 = v_549;
  } else {
    sub_199 = sub_200;
  };
  sub_198 = sub_199;
  sub_197 = sub_198;
  if (controller_cleaner) {
    v_550 = sub_197;
    sub_196 = false;
  } else {
    v_550 = false;
    sub_196 = sub_197;
  };
  if (controller_ck_37_1) {
    sub_195 = v_550;
  } else {
    sub_195 = sub_196;
  };
  if (controller_c_pc) {
    v_551 = false;
    sub_194 = sub_195;
  } else {
    v_551 = sub_195;
    sub_194 = false;
  };
  if (controller_ck_41_1) {
    sub_193 = v_551;
  } else {
    sub_193 = sub_194;
  };
  if (controller_c_closet) {
    sub_190 = v_554;
  } else {
    sub_190 = sub_193;
  };
  if (controller_ck_37_1) {
    sub_205 = sub_142;
  } else {
    sub_205 = sub_148;
  };
  if (controller_c_pc) {
    v_546 = false;
    sub_204 = sub_205;
  } else {
    v_546 = sub_205;
    sub_204 = false;
  };
  if (controller_ck_41_1) {
    v_547 = v_546;
  } else {
    v_547 = sub_204;
  };
  if (controller_c_window) {
    v_548 = v_547;
  } else {
    v_548 = false;
  };
  sub_214 = sub_16;
  sub_213 = sub_214;
  if (controller_v_276) {
    v = sub_14;
  } else {
    v = sub_213;
  };
  if (controller_v_277) {
    sub_212 = v;
  } else {
    sub_212 = sub_30;
  };
  sub_211 = sub_212;
  sub_210 = sub_211;
  if (controller_cleaner) {
    v_544 = sub_210;
    sub_209 = false;
  } else {
    v_544 = false;
    sub_209 = sub_210;
  };
  if (controller_ck_37_1) {
    sub_208 = v_544;
  } else {
    sub_208 = sub_209;
  };
  if (controller_c_pc) {
    v_545 = false;
    sub_207 = sub_208;
  } else {
    v_545 = sub_208;
    sub_207 = false;
  };
  if (controller_ck_41_1) {
    sub_206 = v_545;
  } else {
    sub_206 = sub_207;
  };
  if (controller_c_closet) {
    sub_203 = v_548;
  } else {
    sub_203 = sub_206;
  };
  if (controller_ck_55_1) {
    v_555 = sub_203;
  } else {
    v_555 = sub_190;
  };
  if (controller_blind_switch) {
    sub_189 = v_555;
  } else {
    sub_189 = sub_203;
  };
  if (controller_ck_50_1) {
    v_573 = sub_189;
  } else {
    v_573 = sub_152;
  };
  if (controller_light_switch) {
    v_574 = v_573;
  } else {
    v_574 = sub_189;
  };
  if (controller_c_light_1) {
    sub_151 = v_574;
  } else {
    sub_151 = sub_189;
  };
  if (controller_worker) {
    v_640 = sub_151;
    sub_1 = sub_2;
  } else {
    v_640 = sub_2;
    sub_1 = sub_151;
  };
  if (controller_ck_35_1) {
    sub_0 = v_640;
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
  int controller_closet_failed_recovered, int controller_pc_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_17, int controller_ck_35_1, int controller_pnr_16,
  int controller_ck_37_1, int controller_pnr_15, int controller_ck_39_1,
  int controller_pnr_14, int controller_ck_41_1, int controller_pnr_13,
  int controller_v_277, int controller_v_276, int controller_pnr_12,
  int controller_ck_45_1, int controller_pnr_11, int controller_ck_47_1,
  int controller_pnr_10, int controller_ck_50_1, int controller_pnr_9,
  int controller_ck_52_1, int controller_pnr_8, int controller_ck_55_1,
  int controller_pnr_7, int controller_ck_57_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_1_out* _out) {
  
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
  sub_22 = false;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  if (controller_c_air_1) {
    sub_15 = sub_16;
  } else {
    sub_15 = false;
  };
  if (controller_c_air_2) {
    sub_14 = sub_15;
  } else {
    sub_14 = false;
  };
  if (controller_c_air_1) {
    sub_24 = false;
  } else {
    sub_24 = sub_16;
  };
  sub_23 = sub_24;
  if (controller_v_276) {
    sub_13 = sub_23;
  } else {
    sub_13 = sub_14;
  };
  if (controller_c_air_2) {
    sub_25 = false;
  } else {
    sub_25 = sub_15;
  };
  if (controller_v_276) {
    v_690 = sub_25;
  } else {
    v_690 = false;
  };
  if (controller_v_277) {
    sub_12 = v_690;
  } else {
    sub_12 = sub_13;
  };
  if (controller_c_door) {
    v_691 = sub_12;
    sub_11 = false;
  } else {
    v_691 = false;
    sub_11 = sub_12;
  };
  if (controller_ck_39_1) {
    sub_10 = v_691;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  if (controller_cleaner) {
    v_692 = false;
    sub_8 = sub_9;
  } else {
    v_692 = sub_9;
    sub_8 = false;
  };
  if (controller_ck_37_1) {
    sub_7 = v_692;
  } else {
    sub_7 = sub_8;
  };
  if (controller_c_pc) {
    v_693 = sub_7;
    sub_6 = false;
  } else {
    v_693 = false;
    sub_6 = sub_7;
  };
  if (controller_ck_41_1) {
    v_694 = v_693;
  } else {
    v_694 = sub_6;
  };
  if (controller_c_window) {
    v_695 = v_694;
  } else {
    v_695 = false;
  };
  if (controller_v_276) {
    v_688 = sub_23;
    sub_33 = sub_14;
  } else {
    v_688 = false;
    sub_33 = sub_23;
  };
  if (controller_v_277) {
    sub_32 = v_688;
  } else {
    sub_32 = sub_33;
  };
  if (controller_c_door) {
    v_689 = sub_32;
    sub_31 = false;
  } else {
    v_689 = false;
    sub_31 = sub_32;
  };
  if (controller_ck_39_1) {
    sub_30 = v_689;
  } else {
    sub_30 = sub_31;
  };
  sub_29 = sub_30;
  if (controller_cleaner) {
    sub_28 = false;
    sub_34 = sub_29;
  } else {
    sub_28 = sub_29;
    sub_34 = false;
  };
  if (controller_ck_37_1) {
    sub_27 = sub_34;
  } else {
    sub_27 = sub_28;
  };
  if (controller_c_pc) {
    v_696 = sub_27;
    sub_26 = false;
  } else {
    v_696 = false;
    sub_26 = sub_27;
  };
  if (controller_ck_41_1) {
    v_697 = v_696;
  } else {
    v_697 = sub_26;
  };
  if (controller_c_window) {
    v_698 = v_697;
  } else {
    v_698 = false;
  };
  if (controller_c_closet) {
    sub_5 = v_695;
  } else {
    sub_5 = v_698;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  if (controller_ck_37_1) {
    sub_39 = sub_28;
  } else {
    sub_39 = sub_34;
  };
  if (controller_c_pc) {
    v_685 = false;
    sub_38 = sub_39;
  } else {
    v_685 = sub_39;
    sub_38 = false;
  };
  if (controller_ck_41_1) {
    v_686 = v_685;
  } else {
    v_686 = sub_38;
  };
  if (controller_c_window) {
    v_687 = v_686;
  } else {
    v_687 = false;
  };
  sub_48 = sub_16;
  sub_47 = sub_48;
  if (controller_v_276) {
    v_682 = sub_14;
  } else {
    v_682 = sub_47;
  };
  if (controller_v_277) {
    sub_46 = v_682;
  } else {
    sub_46 = sub_25;
  };
  sub_45 = sub_46;
  sub_44 = sub_45;
  if (controller_cleaner) {
    v_683 = sub_44;
    sub_43 = false;
  } else {
    v_683 = false;
    sub_43 = sub_44;
  };
  if (controller_ck_37_1) {
    sub_42 = v_683;
  } else {
    sub_42 = sub_43;
  };
  if (controller_c_pc) {
    v_684 = false;
    sub_41 = sub_42;
  } else {
    v_684 = sub_42;
    sub_41 = false;
  };
  if (controller_ck_41_1) {
    sub_40 = v_684;
  } else {
    sub_40 = sub_41;
  };
  if (controller_c_closet) {
    sub_37 = v_687;
  } else {
    sub_37 = sub_40;
  };
  sub_36 = sub_37;
  sub_35 = sub_36;
  if (controller_worker) {
    v_699 = sub_35;
    sub_2 = sub_3;
  } else {
    v_699 = sub_3;
    sub_2 = sub_35;
  };
  if (controller_ck_35_1) {
    sub_1 = v_699;
  } else {
    sub_1 = sub_2;
  };
  sub_70 = true;
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_66 = sub_67;
  sub_65 = sub_66;
  sub_64 = sub_65;
  if (controller_c_air_1) {
    sub_63 = sub_64;
  } else {
    sub_63 = false;
  };
  if (controller_c_air_2) {
    sub_62 = sub_63;
  } else {
    sub_62 = false;
  };
  if (controller_c_air_1) {
    sub_72 = false;
  } else {
    sub_72 = sub_64;
  };
  sub_71 = sub_72;
  if (controller_v_276) {
    sub_61 = sub_71;
  } else {
    sub_61 = sub_62;
  };
  if (controller_c_air_2) {
    sub_73 = false;
  } else {
    sub_73 = sub_63;
  };
  if (controller_v_276) {
    v_673 = sub_73;
  } else {
    v_673 = false;
  };
  if (controller_v_277) {
    sub_60 = v_673;
  } else {
    sub_60 = sub_61;
  };
  if (controller_c_door) {
    v_674 = sub_60;
    sub_59 = false;
  } else {
    v_674 = false;
    sub_59 = sub_60;
  };
  if (controller_ck_39_1) {
    sub_58 = v_674;
  } else {
    sub_58 = sub_59;
  };
  sub_57 = sub_58;
  if (controller_cleaner) {
    v_675 = false;
    sub_56 = sub_57;
  } else {
    v_675 = sub_57;
    sub_56 = false;
  };
  if (controller_ck_37_1) {
    sub_55 = v_675;
  } else {
    sub_55 = sub_56;
  };
  if (controller_c_pc) {
    v_676 = sub_55;
    sub_54 = false;
  } else {
    v_676 = false;
    sub_54 = sub_55;
  };
  if (controller_ck_41_1) {
    v_677 = v_676;
  } else {
    v_677 = sub_54;
  };
  if (controller_c_window) {
    sub_53 = v_677;
  } else {
    sub_53 = false;
  };
  if (controller_blind_failed_recovered) {
    v_668 = sub_66;
    sub_88 = sub_18;
  } else {
    v_668 = sub_18;
    sub_88 = sub_66;
  };
  if (controller_ck_57_1) {
    sub_87 = v_668;
  } else {
    sub_87 = sub_88;
  };
  if (controller_light_failed_recovered) {
    v_669 = sub_87;
    sub_86 = sub_65;
  } else {
    v_669 = sub_65;
    sub_86 = sub_87;
  };
  if (controller_ck_52_1) {
    sub_85 = v_669;
  } else {
    sub_85 = sub_86;
  };
  if (controller_c_air_1) {
    sub_84 = false;
  } else {
    sub_84 = sub_85;
  };
  sub_83 = sub_84;
  if (controller_v_276) {
    v_670 = sub_83;
  } else {
    v_670 = false;
  };
  if (controller_c_air_1) {
    sub_90 = sub_85;
  } else {
    sub_90 = false;
  };
  if (controller_c_air_2) {
    sub_89 = sub_90;
  } else {
    sub_89 = false;
  };
  if (controller_v_276) {
    sub_82 = sub_89;
  } else {
    sub_82 = sub_83;
  };
  if (controller_v_277) {
    sub_81 = v_670;
  } else {
    sub_81 = sub_82;
  };
  if (controller_c_door) {
    v_671 = sub_81;
    sub_80 = false;
  } else {
    v_671 = false;
    sub_80 = sub_81;
  };
  if (controller_ck_39_1) {
    sub_79 = v_671;
  } else {
    sub_79 = sub_80;
  };
  if (controller_light_failed_recovered) {
    v_665 = sub_17;
    sub_98 = sub_65;
  } else {
    v_665 = sub_65;
    sub_98 = sub_17;
  };
  if (controller_ck_52_1) {
    sub_97 = v_665;
  } else {
    sub_97 = sub_98;
  };
  if (controller_c_air_1) {
    sub_96 = false;
  } else {
    sub_96 = sub_97;
  };
  sub_95 = sub_96;
  if (controller_v_276) {
    v_666 = sub_95;
  } else {
    v_666 = false;
  };
  if (controller_c_air_1) {
    sub_100 = sub_97;
  } else {
    sub_100 = false;
  };
  if (controller_c_air_2) {
    sub_99 = sub_100;
  } else {
    sub_99 = false;
  };
  if (controller_v_276) {
    sub_94 = sub_99;
  } else {
    sub_94 = sub_95;
  };
  if (controller_v_277) {
    sub_93 = v_666;
  } else {
    sub_93 = sub_94;
  };
  if (controller_c_door) {
    v_667 = sub_93;
    sub_92 = false;
  } else {
    v_667 = false;
    sub_92 = sub_93;
  };
  if (controller_ck_39_1) {
    sub_91 = v_667;
  } else {
    sub_91 = sub_92;
  };
  if (controller_change_shift) {
    v_672 = sub_91;
    sub_78 = sub_79;
  } else {
    v_672 = sub_79;
    sub_78 = sub_91;
  };
  if (controller_ck_1) {
    sub_77 = v_672;
  } else {
    sub_77 = sub_78;
  };
  if (controller_cleaner) {
    sub_76 = false;
    sub_101 = sub_77;
  } else {
    sub_76 = sub_77;
    sub_101 = false;
  };
  if (controller_ck_37_1) {
    sub_75 = sub_101;
  } else {
    sub_75 = sub_76;
  };
  if (controller_c_pc) {
    v_678 = sub_75;
    sub_74 = false;
  } else {
    v_678 = false;
    sub_74 = sub_75;
  };
  if (controller_ck_41_1) {
    v_679 = v_678;
  } else {
    v_679 = sub_74;
  };
  if (controller_c_window) {
    v_680 = v_679;
  } else {
    v_680 = false;
  };
  if (controller_c_closet) {
    sub_52 = sub_53;
  } else {
    sub_52 = v_680;
  };
  sub_51 = sub_52;
  if (controller_v_276) {
    sub_110 = sub_95;
  } else {
    sub_110 = sub_99;
  };
  if (controller_c_air_2) {
    sub_111 = false;
  } else {
    sub_111 = sub_100;
  };
  if (controller_v_276) {
    v_659 = sub_111;
  } else {
    v_659 = false;
  };
  if (controller_v_277) {
    sub_109 = v_659;
  } else {
    sub_109 = sub_110;
  };
  if (controller_c_door) {
    v_660 = sub_109;
    sub_108 = false;
  } else {
    v_660 = false;
    sub_108 = sub_109;
  };
  if (controller_ck_39_1) {
    sub_107 = v_660;
  } else {
    sub_107 = sub_108;
  };
  sub_106 = sub_107;
  if (controller_cleaner) {
    v_661 = false;
    sub_105 = sub_106;
  } else {
    v_661 = sub_106;
    sub_105 = false;
  };
  if (controller_ck_37_1) {
    sub_104 = v_661;
  } else {
    sub_104 = sub_105;
  };
  if (controller_c_pc) {
    v_662 = sub_104;
    sub_103 = false;
  } else {
    v_662 = false;
    sub_103 = sub_104;
  };
  if (controller_ck_41_1) {
    v_663 = v_662;
  } else {
    v_663 = sub_103;
  };
  if (controller_c_window) {
    v_664 = v_663;
  } else {
    v_664 = false;
  };
  if (controller_v_276) {
    v_655 = sub_71;
    sub_120 = sub_62;
  } else {
    v_655 = false;
    sub_120 = sub_71;
  };
  if (controller_v_277) {
    sub_119 = v_655;
  } else {
    sub_119 = sub_120;
  };
  if (controller_c_door) {
    v_656 = sub_119;
    sub_118 = false;
  } else {
    v_656 = false;
    sub_118 = sub_119;
  };
  if (controller_ck_39_1) {
    sub_117 = v_656;
  } else {
    sub_117 = sub_118;
  };
  sub_116 = sub_117;
  if (controller_cleaner) {
    sub_115 = false;
    sub_121 = sub_116;
  } else {
    sub_115 = sub_116;
    sub_121 = false;
  };
  if (controller_ck_37_1) {
    sub_114 = sub_121;
  } else {
    sub_114 = sub_115;
  };
  if (controller_c_pc) {
    v_657 = sub_114;
    sub_113 = false;
  } else {
    v_657 = false;
    sub_113 = sub_114;
  };
  if (controller_ck_41_1) {
    v_658 = v_657;
  } else {
    v_658 = sub_113;
  };
  if (controller_c_window) {
    sub_112 = v_658;
  } else {
    sub_112 = false;
  };
  if (controller_c_closet) {
    sub_102 = v_664;
  } else {
    sub_102 = sub_112;
  };
  if (controller_ck_50_1) {
    v_681 = sub_102;
  } else {
    v_681 = sub_51;
  };
  if (controller_c_closet) {
    sub_122 = sub_53;
  } else {
    sub_122 = sub_112;
  };
  if (controller_light_switch) {
    sub_50 = v_681;
  } else {
    sub_50 = sub_122;
  };
  if (controller_ck_37_1) {
    sub_127 = sub_76;
  } else {
    sub_127 = sub_101;
  };
  if (controller_c_pc) {
    v_651 = false;
    sub_126 = sub_127;
  } else {
    v_651 = sub_127;
    sub_126 = false;
  };
  if (controller_ck_41_1) {
    v_652 = v_651;
  } else {
    v_652 = sub_126;
  };
  if (controller_c_window) {
    v_653 = v_652;
  } else {
    v_653 = false;
  };
  if (controller_c_air_2) {
    sub_136 = false;
  } else {
    sub_136 = sub_90;
  };
  sub_138 = sub_85;
  sub_137 = sub_138;
  if (controller_v_276) {
    v_647 = sub_89;
  } else {
    v_647 = sub_137;
  };
  if (controller_v_277) {
    sub_135 = v_647;
  } else {
    sub_135 = sub_136;
  };
  sub_134 = sub_135;
  sub_142 = sub_97;
  sub_141 = sub_142;
  if (controller_v_276) {
    v_646 = sub_99;
  } else {
    v_646 = sub_141;
  };
  if (controller_v_277) {
    sub_140 = v_646;
  } else {
    sub_140 = sub_111;
  };
  sub_139 = sub_140;
  if (controller_change_shift) {
    v_648 = sub_139;
    sub_133 = sub_134;
  } else {
    v_648 = sub_134;
    sub_133 = sub_139;
  };
  if (controller_ck_1) {
    sub_132 = v_648;
  } else {
    sub_132 = sub_133;
  };
  if (controller_cleaner) {
    v_649 = sub_132;
    sub_131 = false;
  } else {
    v_649 = false;
    sub_131 = sub_132;
  };
  if (controller_ck_37_1) {
    sub_130 = v_649;
  } else {
    sub_130 = sub_131;
  };
  if (controller_c_pc) {
    v_650 = false;
    sub_129 = sub_130;
  } else {
    v_650 = sub_130;
    sub_129 = false;
  };
  if (controller_ck_41_1) {
    sub_128 = v_650;
  } else {
    sub_128 = sub_129;
  };
  if (controller_c_closet) {
    sub_125 = v_653;
  } else {
    sub_125 = sub_128;
  };
  sub_124 = sub_125;
  if (controller_ck_37_1) {
    sub_146 = sub_115;
  } else {
    sub_146 = sub_121;
  };
  if (controller_c_pc) {
    v_643 = false;
    sub_145 = sub_146;
  } else {
    v_643 = sub_146;
    sub_145 = false;
  };
  if (controller_ck_41_1) {
    v_644 = v_643;
  } else {
    v_644 = sub_145;
  };
  if (controller_c_window) {
    v_645 = v_644;
  } else {
    v_645 = false;
  };
  sub_155 = sub_64;
  sub_154 = sub_155;
  if (controller_v_276) {
    v = sub_62;
  } else {
    v = sub_154;
  };
  if (controller_v_277) {
    sub_153 = v;
  } else {
    sub_153 = sub_73;
  };
  sub_152 = sub_153;
  sub_151 = sub_152;
  if (controller_cleaner) {
    v_641 = sub_151;
    sub_150 = false;
  } else {
    v_641 = false;
    sub_150 = sub_151;
  };
  if (controller_ck_37_1) {
    sub_149 = v_641;
  } else {
    sub_149 = sub_150;
  };
  if (controller_c_pc) {
    v_642 = false;
    sub_148 = sub_149;
  } else {
    v_642 = sub_149;
    sub_148 = false;
  };
  if (controller_ck_41_1) {
    sub_147 = v_642;
  } else {
    sub_147 = sub_148;
  };
  if (controller_c_closet) {
    sub_144 = v_645;
  } else {
    sub_144 = sub_147;
  };
  sub_143 = sub_144;
  if (controller_ck_50_1) {
    v_654 = sub_143;
  } else {
    v_654 = sub_124;
  };
  if (controller_light_switch) {
    sub_123 = v_654;
  } else {
    sub_123 = sub_143;
  };
  if (controller_worker) {
    v_700 = sub_123;
    sub_49 = sub_50;
  } else {
    v_700 = sub_50;
    sub_49 = sub_123;
  };
  if (controller_ck_35_1) {
    v_701 = v_700;
  } else {
    v_701 = sub_49;
  };
  if (p_controller_c_light_1) {
    sub_0 = v_701;
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
  int controller_closet_failed_recovered, int controller_pc_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_17, int controller_ck_35_1, int controller_pnr_16,
  int controller_ck_37_1, int controller_pnr_15, int controller_ck_39_1,
  int controller_pnr_14, int controller_ck_41_1, int controller_pnr_13,
  int controller_v_277, int controller_v_276, int controller_pnr_12,
  int controller_ck_45_1, int controller_pnr_11, int controller_ck_47_1,
  int controller_pnr_10, int controller_ck_50_1, int controller_pnr_9,
  int controller_ck_52_1, int controller_pnr_8, int controller_ck_55_1,
  int controller_pnr_7, int controller_ck_57_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_closet_out* _out) {
  
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
  sub_21 = true;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  if (controller_c_air_1) {
    sub_14 = sub_15;
  } else {
    sub_14 = false;
  };
  if (controller_c_air_2) {
    v_712 = false;
  } else {
    v_712 = sub_14;
  };
  if (controller_v_276) {
    v_713 = v_712;
  } else {
    v_713 = false;
  };
  if (controller_c_air_2) {
    sub_13 = sub_14;
  } else {
    sub_13 = false;
  };
  if (controller_c_air_1) {
    sub_23 = false;
  } else {
    sub_23 = sub_15;
  };
  sub_22 = sub_23;
  if (controller_v_276) {
    sub_12 = sub_22;
  } else {
    sub_12 = sub_13;
  };
  if (controller_v_277) {
    sub_11 = v_713;
  } else {
    sub_11 = sub_12;
  };
  if (controller_c_door) {
    v_714 = sub_11;
    sub_10 = false;
  } else {
    v_714 = false;
    sub_10 = sub_11;
  };
  if (controller_ck_39_1) {
    sub_9 = v_714;
  } else {
    sub_9 = sub_10;
  };
  sub_8 = sub_9;
  sub_37 = false;
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  if (controller_c_air_1) {
    sub_30 = false;
  } else {
    sub_30 = sub_31;
  };
  sub_29 = sub_30;
  if (controller_v_276) {
    v_710 = sub_29;
  } else {
    v_710 = false;
  };
  if (controller_c_air_1) {
    sub_39 = sub_31;
  } else {
    sub_39 = false;
  };
  if (controller_c_air_2) {
    sub_38 = sub_39;
  } else {
    sub_38 = false;
  };
  if (controller_v_276) {
    sub_28 = sub_38;
  } else {
    sub_28 = sub_29;
  };
  if (controller_v_277) {
    sub_27 = v_710;
  } else {
    sub_27 = sub_28;
  };
  if (controller_c_door) {
    v_711 = sub_27;
    sub_26 = false;
  } else {
    v_711 = false;
    sub_26 = sub_27;
  };
  if (controller_ck_39_1) {
    sub_25 = v_711;
  } else {
    sub_25 = sub_26;
  };
  sub_24 = sub_25;
  if (controller_cleaner) {
    v_715 = sub_24;
    sub_7 = sub_8;
  } else {
    v_715 = sub_8;
    sub_7 = sub_24;
  };
  if (controller_ck_37_1) {
    sub_6 = v_715;
  } else {
    sub_6 = sub_7;
  };
  if (controller_c_pc) {
    v_716 = sub_6;
    sub_5 = false;
  } else {
    v_716 = false;
    sub_5 = sub_6;
  };
  if (controller_ck_41_1) {
    v_717 = v_716;
  } else {
    v_717 = sub_5;
  };
  if (controller_c_window) {
    sub_4 = v_717;
  } else {
    sub_4 = false;
  };
  sub_3 = sub_4;
  sub_2 = sub_3;
  if (controller_v_276) {
    v_703 = sub_22;
    sub_50 = sub_13;
  } else {
    v_703 = false;
    sub_50 = sub_22;
  };
  if (controller_v_277) {
    sub_49 = v_703;
  } else {
    sub_49 = sub_50;
  };
  if (controller_c_door) {
    v_704 = sub_49;
    sub_48 = false;
  } else {
    v_704 = false;
    sub_48 = sub_49;
  };
  if (controller_ck_39_1) {
    sub_47 = v_704;
  } else {
    sub_47 = sub_48;
  };
  sub_46 = sub_47;
  if (controller_c_air_2) {
    sub_54 = false;
  } else {
    sub_54 = sub_39;
  };
  sub_56 = sub_31;
  sub_55 = sub_56;
  if (controller_v_276) {
    v_702 = sub_38;
  } else {
    v_702 = sub_55;
  };
  if (controller_v_277) {
    sub_53 = v_702;
  } else {
    sub_53 = sub_54;
  };
  sub_52 = sub_53;
  sub_51 = sub_52;
  if (controller_cleaner) {
    v_705 = sub_51;
    sub_45 = sub_46;
  } else {
    v_705 = sub_46;
    sub_45 = sub_51;
  };
  if (controller_ck_37_1) {
    sub_44 = v_705;
  } else {
    sub_44 = sub_45;
  };
  if (controller_c_pc) {
    v_706 = false;
    sub_43 = sub_44;
  } else {
    v_706 = sub_44;
    sub_43 = false;
  };
  if (controller_ck_41_1) {
    v_707 = v_706;
  } else {
    v_707 = sub_43;
  };
  if (controller_cleaner) {
    v = sub_51;
    sub_59 = false;
  } else {
    v = false;
    sub_59 = sub_51;
  };
  if (controller_ck_37_1) {
    sub_58 = v;
  } else {
    sub_58 = sub_59;
  };
  if (controller_c_pc) {
    v_708 = false;
    sub_57 = sub_58;
  } else {
    v_708 = sub_58;
    sub_57 = false;
  };
  if (controller_ck_41_1) {
    v_709 = v_708;
  } else {
    v_709 = sub_57;
  };
  if (controller_c_window) {
    sub_42 = v_707;
  } else {
    sub_42 = v_709;
  };
  sub_41 = sub_42;
  sub_40 = sub_41;
  if (controller_worker) {
    v_718 = sub_40;
    sub_1 = sub_2;
  } else {
    v_718 = sub_2;
    sub_1 = sub_40;
  };
  if (controller_ck_35_1) {
    sub_0 = v_718;
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
  int controller_closet_failed_recovered, int controller_pc_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_17, int controller_ck_35_1, int controller_pnr_16,
  int controller_ck_37_1, int controller_pnr_15, int controller_ck_39_1,
  int controller_pnr_14, int controller_ck_41_1, int controller_pnr_13,
  int controller_v_277, int controller_v_276, int controller_pnr_12,
  int controller_ck_45_1, int controller_pnr_11, int controller_ck_47_1,
  int controller_pnr_10, int controller_ck_50_1, int controller_pnr_9,
  int controller_ck_52_1, int controller_pnr_8, int controller_ck_55_1,
  int controller_pnr_7, int controller_ck_57_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_air_1, int controller_c_window,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_2_out* _out) {
  
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
  sub_19 = true;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  if (controller_c_air_1) {
    sub_13 = sub_14;
  } else {
    sub_13 = false;
  };
  sub_28 = p_controller_c_air_2;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (controller_c_air_1) {
    sub_20 = false;
  } else {
    sub_20 = sub_21;
  };
  if (controller_v_276) {
    sub_12 = sub_20;
  } else {
    sub_12 = sub_13;
  };
  sub_35 = false;
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  if (controller_c_air_1) {
    sub_29 = sub_30;
  } else {
    sub_29 = false;
  };
  if (controller_v_276) {
    v_727 = sub_29;
  } else {
    v_727 = false;
  };
  if (controller_v_277) {
    sub_11 = v_727;
  } else {
    sub_11 = sub_12;
  };
  if (controller_c_door) {
    v_728 = sub_11;
    sub_10 = false;
  } else {
    v_728 = false;
    sub_10 = sub_11;
  };
  if (controller_ck_39_1) {
    sub_9 = v_728;
  } else {
    sub_9 = sub_10;
  };
  sub_8 = sub_9;
  if (controller_v_276) {
    v_725 = sub_20;
    sub_40 = sub_13;
  } else {
    v_725 = false;
    sub_40 = sub_20;
  };
  if (controller_v_277) {
    sub_39 = v_725;
  } else {
    sub_39 = sub_40;
  };
  if (controller_c_door) {
    v_726 = sub_39;
    sub_38 = false;
  } else {
    v_726 = false;
    sub_38 = sub_39;
  };
  if (controller_ck_39_1) {
    sub_37 = v_726;
  } else {
    sub_37 = sub_38;
  };
  sub_36 = sub_37;
  if (controller_cleaner) {
    v_729 = sub_36;
    sub_7 = sub_8;
  } else {
    v_729 = sub_8;
    sub_7 = sub_36;
  };
  if (controller_ck_37_1) {
    sub_6 = v_729;
  } else {
    sub_6 = sub_7;
  };
  if (controller_c_pc) {
    v_730 = sub_6;
    sub_5 = false;
  } else {
    v_730 = false;
    sub_5 = sub_6;
  };
  if (controller_ck_41_1) {
    v_731 = v_730;
  } else {
    v_731 = sub_5;
  };
  if (controller_c_window) {
    sub_4 = v_731;
  } else {
    sub_4 = false;
  };
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_50 = sub_21;
  if (controller_v_276) {
    v_719 = sub_13;
  } else {
    v_719 = sub_50;
  };
  if (controller_v_277) {
    sub_49 = v_719;
  } else {
    sub_49 = sub_29;
  };
  sub_48 = sub_49;
  sub_47 = sub_48;
  if (controller_cleaner) {
    v_720 = sub_47;
    sub_46 = sub_36;
  } else {
    v_720 = sub_36;
    sub_46 = sub_47;
  };
  if (controller_ck_37_1) {
    sub_45 = v_720;
  } else {
    sub_45 = sub_46;
  };
  if (controller_c_pc) {
    v_721 = false;
    sub_44 = sub_45;
  } else {
    v_721 = sub_45;
    sub_44 = false;
  };
  if (controller_ck_41_1) {
    v_722 = v_721;
  } else {
    v_722 = sub_44;
  };
  if (controller_cleaner) {
    v = sub_47;
    sub_53 = false;
  } else {
    v = false;
    sub_53 = sub_47;
  };
  if (controller_ck_37_1) {
    sub_52 = v;
  } else {
    sub_52 = sub_53;
  };
  if (controller_c_pc) {
    v_723 = false;
    sub_51 = sub_52;
  } else {
    v_723 = sub_52;
    sub_51 = false;
  };
  if (controller_ck_41_1) {
    v_724 = v_723;
  } else {
    v_724 = sub_51;
  };
  if (controller_c_window) {
    sub_43 = v_722;
  } else {
    sub_43 = v_724;
  };
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (controller_worker) {
    v_732 = sub_41;
    sub_1 = sub_2;
  } else {
    v_732 = sub_2;
    sub_1 = sub_41;
  };
  if (controller_ck_35_1) {
    sub_0 = v_732;
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
  int controller_closet_failed_recovered, int controller_pc_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_17, int controller_ck_35_1, int controller_pnr_16,
  int controller_ck_37_1, int controller_pnr_15, int controller_ck_39_1,
  int controller_pnr_14, int controller_ck_41_1, int controller_pnr_13,
  int controller_v_277, int controller_v_276, int controller_pnr_12,
  int controller_ck_45_1, int controller_pnr_11, int controller_ck_47_1,
  int controller_pnr_10, int controller_ck_50_1, int controller_pnr_9,
  int controller_ck_52_1, int controller_pnr_8, int controller_ck_55_1,
  int controller_pnr_7, int controller_ck_57_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_1_out* _out) {
  
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
  sub_19 = true;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  if (controller_v_276) {
    v_741 = sub_13;
  } else {
    v_741 = false;
  };
  sub_26 = false;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  if (controller_v_276) {
    sub_12 = sub_20;
  } else {
    sub_12 = sub_13;
  };
  if (controller_v_277) {
    sub_11 = v_741;
  } else {
    sub_11 = sub_12;
  };
  if (controller_c_door) {
    v_742 = sub_11;
    sub_10 = false;
  } else {
    v_742 = false;
    sub_10 = sub_11;
  };
  if (controller_ck_39_1) {
    sub_9 = v_742;
  } else {
    sub_9 = sub_10;
  };
  sub_8 = sub_9;
  if (controller_v_276) {
    v_739 = sub_20;
    sub_31 = sub_13;
  } else {
    v_739 = false;
    sub_31 = sub_20;
  };
  if (controller_v_277) {
    sub_30 = v_739;
  } else {
    sub_30 = sub_31;
  };
  if (controller_c_door) {
    v_740 = sub_30;
    sub_29 = false;
  } else {
    v_740 = false;
    sub_29 = sub_30;
  };
  if (controller_ck_39_1) {
    sub_28 = v_740;
  } else {
    sub_28 = sub_29;
  };
  sub_27 = sub_28;
  if (controller_cleaner) {
    v_743 = sub_27;
    sub_7 = sub_8;
  } else {
    v_743 = sub_8;
    sub_7 = sub_27;
  };
  if (controller_ck_37_1) {
    sub_6 = v_743;
  } else {
    sub_6 = sub_7;
  };
  if (controller_c_pc) {
    v_744 = sub_6;
    sub_5 = false;
  } else {
    v_744 = false;
    sub_5 = sub_6;
  };
  if (controller_ck_41_1) {
    v_745 = v_744;
  } else {
    v_745 = sub_5;
  };
  if (controller_c_window) {
    sub_4 = v_745;
  } else {
    sub_4 = false;
  };
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_48 = p_controller_c_air_1;
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (controller_v_276) {
    v_733 = sub_13;
  } else {
    v_733 = sub_41;
  };
  if (controller_v_277) {
    sub_40 = v_733;
  } else {
    sub_40 = sub_13;
  };
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (controller_cleaner) {
    v_734 = sub_38;
    sub_37 = sub_27;
  } else {
    v_734 = sub_27;
    sub_37 = sub_38;
  };
  if (controller_ck_37_1) {
    sub_36 = v_734;
  } else {
    sub_36 = sub_37;
  };
  if (controller_c_pc) {
    v_735 = false;
    sub_35 = sub_36;
  } else {
    v_735 = sub_36;
    sub_35 = false;
  };
  if (controller_ck_41_1) {
    v_736 = v_735;
  } else {
    v_736 = sub_35;
  };
  if (controller_cleaner) {
    v = sub_38;
    sub_51 = false;
  } else {
    v = false;
    sub_51 = sub_38;
  };
  if (controller_ck_37_1) {
    sub_50 = v;
  } else {
    sub_50 = sub_51;
  };
  if (controller_c_pc) {
    v_737 = false;
    sub_49 = sub_50;
  } else {
    v_737 = sub_50;
    sub_49 = false;
  };
  if (controller_ck_41_1) {
    v_738 = v_737;
  } else {
    v_738 = sub_49;
  };
  if (controller_c_window) {
    sub_34 = v_736;
  } else {
    sub_34 = v_738;
  };
  sub_33 = sub_34;
  sub_32 = sub_33;
  if (controller_worker) {
    v_746 = sub_32;
    sub_1 = sub_2;
  } else {
    v_746 = sub_2;
    sub_1 = sub_32;
  };
  if (controller_ck_35_1) {
    sub_0 = v_746;
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
  int controller_closet_failed_recovered, int controller_pc_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_17, int controller_ck_35_1, int controller_pnr_16,
  int controller_ck_37_1, int controller_pnr_15, int controller_ck_39_1,
  int controller_pnr_14, int controller_ck_41_1, int controller_pnr_13,
  int controller_v_277, int controller_v_276, int controller_pnr_12,
  int controller_ck_45_1, int controller_pnr_11, int controller_ck_47_1,
  int controller_pnr_10, int controller_ck_50_1, int controller_pnr_9,
  int controller_ck_52_1, int controller_pnr_8, int controller_ck_55_1,
  int controller_pnr_7, int controller_ck_57_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_window_out* _out) {
  
  int v_751;
  int v_750;
  int v_749;
  int v_748;
  int v_747;
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
  sub_17 = true;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (controller_v_276) {
    v_748 = sub_11;
  } else {
    v_748 = false;
  };
  if (controller_v_277) {
    sub_10 = v_748;
  } else {
    sub_10 = sub_11;
  };
  if (controller_c_door) {
    v_749 = sub_10;
    sub_9 = false;
  } else {
    v_749 = false;
    sub_9 = sub_10;
  };
  if (controller_ck_39_1) {
    sub_8 = v_749;
  } else {
    sub_8 = sub_9;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (controller_c_pc) {
    v_750 = sub_6;
    sub_5 = false;
  } else {
    v_750 = false;
    sub_5 = sub_6;
  };
  if (controller_ck_41_1) {
    sub_4 = v_750;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_33 = p_controller_c_window;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  if (controller_cleaner) {
    v = sub_24;
    sub_23 = sub_7;
  } else {
    v = sub_7;
    sub_23 = sub_24;
  };
  if (controller_ck_37_1) {
    sub_22 = v;
  } else {
    sub_22 = sub_23;
  };
  if (controller_c_pc) {
    v_747 = false;
    sub_21 = sub_22;
  } else {
    v_747 = sub_22;
    sub_21 = false;
  };
  if (controller_ck_41_1) {
    sub_20 = v_747;
  } else {
    sub_20 = sub_21;
  };
  sub_19 = sub_20;
  sub_18 = sub_19;
  if (controller_worker) {
    v_751 = sub_18;
    sub_1 = sub_2;
  } else {
    v_751 = sub_2;
    sub_1 = sub_18;
  };
  if (controller_ck_35_1) {
    sub_0 = v_751;
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
  int controller_closet_failed_recovered, int controller_pc_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_17, int controller_ck_35_1, int controller_pnr_16,
  int controller_ck_37_1, int controller_pnr_15, int controller_ck_39_1,
  int controller_pnr_14, int controller_ck_41_1, int controller_pnr_13,
  int controller_v_277, int controller_v_276, int controller_pnr_12,
  int controller_ck_45_1, int controller_pnr_11, int controller_ck_47_1,
  int controller_pnr_10, int controller_ck_50_1, int controller_pnr_9,
  int controller_ck_52_1, int controller_pnr_8, int controller_ck_55_1,
  int controller_pnr_7, int controller_ck_57_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_door,
  Controller_controller__controller_controller_controller_c_pc_out* _out) {
  
  int v_758;
  int v_757;
  int v_756;
  int v_755;
  int v_754;
  int v_753;
  int v_752;
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
  sub_16 = false;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  if (controller_v_276) {
    v_756 = sub_10;
  } else {
    v_756 = false;
  };
  if (controller_v_277) {
    sub_9 = v_756;
  } else {
    sub_9 = sub_10;
  };
  if (controller_c_door) {
    v_757 = sub_9;
    sub_8 = false;
  } else {
    v_757 = false;
    sub_8 = sub_9;
  };
  if (controller_ck_39_1) {
    sub_7 = v_757;
  } else {
    sub_7 = sub_8;
  };
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_27 = true;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (controller_v_276) {
    v_754 = sub_21;
  } else {
    v_754 = false;
  };
  if (controller_v_277) {
    sub_20 = v_754;
  } else {
    sub_20 = sub_21;
  };
  if (controller_c_door) {
    v_755 = sub_20;
    sub_19 = false;
  } else {
    v_755 = false;
    sub_19 = sub_20;
  };
  if (controller_ck_39_1) {
    sub_18 = v_755;
  } else {
    sub_18 = sub_19;
  };
  sub_17 = sub_18;
  if (controller_ck_41_1) {
    sub_4 = sub_17;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_34 = sub_21;
  sub_33 = sub_34;
  if (controller_cleaner) {
    v = sub_33;
    sub_32 = sub_17;
  } else {
    v = sub_17;
    sub_32 = sub_33;
  };
  if (controller_ck_37_1) {
    sub_31 = v;
  } else {
    sub_31 = sub_32;
  };
  sub_37 = sub_10;
  sub_36 = sub_37;
  if (controller_cleaner) {
    v_752 = sub_36;
    sub_35 = sub_6;
  } else {
    v_752 = sub_6;
    sub_35 = sub_36;
  };
  if (controller_ck_37_1) {
    v_753 = v_752;
  } else {
    v_753 = sub_35;
  };
  if (controller_ck_41_1) {
    sub_30 = v_753;
  } else {
    sub_30 = sub_31;
  };
  sub_29 = sub_30;
  sub_28 = sub_29;
  if (controller_worker) {
    v_758 = sub_28;
    sub_1 = sub_2;
  } else {
    v_758 = sub_2;
    sub_1 = sub_28;
  };
  if (controller_ck_35_1) {
    sub_0 = v_758;
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
  int controller_closet_failed_recovered, int controller_pc_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_17, int controller_ck_35_1, int controller_pnr_16,
  int controller_ck_37_1, int controller_pnr_15, int controller_ck_39_1,
  int controller_pnr_14, int controller_ck_41_1, int controller_pnr_13,
  int controller_v_277, int controller_v_276, int controller_pnr_12,
  int controller_ck_45_1, int controller_pnr_11, int controller_ck_47_1,
  int controller_pnr_10, int controller_ck_50_1, int controller_pnr_9,
  int controller_ck_52_1, int controller_pnr_8, int controller_ck_55_1,
  int controller_pnr_7, int controller_ck_57_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door,
  Controller_controller__controller_controller_controller_c_door_out* _out) {
  
  int v_762;
  int v_761;
  int v_760;
  int v_759;
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
  sub_14 = false;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  if (controller_v_276) {
    v_759 = sub_8;
  } else {
    v_759 = false;
  };
  if (controller_v_277) {
    sub_7 = v_759;
  } else {
    sub_7 = sub_8;
  };
  sub_21 = true;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  if (controller_v_276) {
    v_760 = sub_15;
  } else {
    v_760 = false;
  };
  if (controller_v_277) {
    v_761 = v_760;
  } else {
    v_761 = sub_15;
  };
  if (controller_ck_39_1) {
    sub_6 = v_761;
  } else {
    sub_6 = sub_7;
  };
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_34 = p_controller_c_door;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  if (controller_cleaner) {
    v = sub_26;
    sub_25 = sub_5;
  } else {
    v = sub_5;
    sub_25 = sub_26;
  };
  if (controller_ck_37_1) {
    sub_24 = v;
  } else {
    sub_24 = sub_25;
  };
  sub_23 = sub_24;
  sub_22 = sub_23;
  if (controller_worker) {
    v_762 = sub_22;
    sub_1 = sub_2;
  } else {
    v_762 = sub_2;
    sub_1 = sub_22;
  };
  if (controller_ck_35_1) {
    sub_0 = v_762;
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
                                                       int controller_closet_failed_recovered,
                                                       int controller_pc_failed_recovered,
                                                       int controller_window_failed_recovered,
                                                       int controller_ck_1,
                                                       int controller_pnr_17,
                                                       int controller_ck_35_1,
                                                       int controller_pnr_16,
                                                       int controller_ck_37_1,
                                                       int controller_pnr_15,
                                                       int controller_ck_39_1,
                                                       int controller_pnr_14,
                                                       int controller_ck_41_1,
                                                       int controller_pnr_13,
                                                       int controller_v_277,
                                                       int controller_v_276,
                                                       int controller_pnr_12,
                                                       int controller_ck_45_1,
                                                       int controller_pnr_11,
                                                       int controller_ck_47_1,
                                                       int controller_pnr_10,
                                                       int controller_ck_50_1,
                                                       int controller_pnr_9,
                                                       int controller_ck_52_1,
                                                       int controller_pnr_8,
                                                       int controller_ck_55_1,
                                                       int controller_pnr_7,
                                                       int controller_ck_57_1,
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
  controller_closet_failed_recovered, controller_pc_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_17,
  controller_ck_35_1, controller_pnr_16, controller_ck_37_1,
  controller_pnr_15, controller_ck_39_1, controller_pnr_14,
  controller_ck_41_1, controller_pnr_13, controller_v_277, controller_v_276,
  controller_pnr_12, controller_ck_45_1, controller_pnr_11,
  controller_ck_47_1, controller_pnr_10, controller_ck_50_1,
  controller_pnr_9, controller_ck_52_1, controller_pnr_8, controller_ck_55_1,
  controller_pnr_7, controller_ck_57_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_light_2, p_controller_c_blind_1,
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
                                                                    controller_door_failed_recovered,
                                                                    controller_closet_failed_recovered,
                                                                    controller_pc_failed_recovered,
                                                                    controller_window_failed_recovered,
                                                                    controller_ck_1,
                                                                    controller_pnr_17,
                                                                    controller_ck_35_1,
                                                                    controller_pnr_16,
                                                                    controller_ck_37_1,
                                                                    controller_pnr_15,
                                                                    controller_ck_39_1,
                                                                    controller_pnr_14,
                                                                    controller_ck_41_1,
                                                                    controller_pnr_13,
                                                                    controller_v_277,
                                                                    controller_v_276,
                                                                    controller_pnr_12,
                                                                    controller_ck_45_1,
                                                                    controller_pnr_11,
                                                                    controller_ck_47_1,
                                                                    controller_pnr_10,
                                                                    controller_ck_50_1,
                                                                    controller_pnr_9,
                                                                    controller_ck_52_1,
                                                                    controller_pnr_8,
                                                                    controller_ck_55_1,
                                                                    controller_pnr_7,
                                                                    controller_ck_57_1,
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
  controller_closet_failed_recovered, controller_pc_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_17,
  controller_ck_35_1, controller_pnr_16, controller_ck_37_1,
  controller_pnr_15, controller_ck_39_1, controller_pnr_14,
  controller_ck_41_1, controller_pnr_13, controller_v_277, controller_v_276,
  controller_pnr_12, controller_ck_45_1, controller_pnr_11,
  controller_ck_47_1, controller_pnr_10, controller_ck_50_1,
  controller_pnr_9, controller_ck_52_1, controller_pnr_8, controller_ck_55_1,
  controller_pnr_7, controller_ck_57_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_light_2, p_controller_c_blind_1,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door, _out->controller_c_pc, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_window_out_st);
  _out->controller_c_window = Controller_controller__controller_controller_controller_c_window_out_st.controller_c_window;
  Controller_controller__controller_controller_controller_c_air_1_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_door_failed_recovered,
  controller_closet_failed_recovered, controller_pc_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_17,
  controller_ck_35_1, controller_pnr_16, controller_ck_37_1,
  controller_pnr_15, controller_ck_39_1, controller_pnr_14,
  controller_ck_41_1, controller_pnr_13, controller_v_277, controller_v_276,
  controller_pnr_12, controller_ck_45_1, controller_pnr_11,
  controller_ck_47_1, controller_pnr_10, controller_ck_50_1,
  controller_pnr_9, controller_ck_52_1, controller_pnr_8, controller_ck_55_1,
  controller_pnr_7, controller_ck_57_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_light_2, p_controller_c_blind_1,
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
  controller_blind_failed_recovered, controller_door_failed_recovered,
  controller_closet_failed_recovered, controller_pc_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_17,
  controller_ck_35_1, controller_pnr_16, controller_ck_37_1,
  controller_pnr_15, controller_ck_39_1, controller_pnr_14,
  controller_ck_41_1, controller_pnr_13, controller_v_277, controller_v_276,
  controller_pnr_12, controller_ck_45_1, controller_pnr_11,
  controller_ck_47_1, controller_pnr_10, controller_ck_50_1,
  controller_pnr_9, controller_ck_52_1, controller_pnr_8, controller_ck_55_1,
  controller_pnr_7, controller_ck_57_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_light_2, p_controller_c_blind_1,
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
  controller_blind_failed_recovered, controller_door_failed_recovered,
  controller_closet_failed_recovered, controller_pc_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_17,
  controller_ck_35_1, controller_pnr_16, controller_ck_37_1,
  controller_pnr_15, controller_ck_39_1, controller_pnr_14,
  controller_ck_41_1, controller_pnr_13, controller_v_277, controller_v_276,
  controller_pnr_12, controller_ck_45_1, controller_pnr_11,
  controller_ck_47_1, controller_pnr_10, controller_ck_50_1,
  controller_pnr_9, controller_ck_52_1, controller_pnr_8, controller_ck_55_1,
  controller_pnr_7, controller_ck_57_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_light_2, p_controller_c_blind_1,
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
  controller_blind_failed_recovered, controller_door_failed_recovered,
  controller_closet_failed_recovered, controller_pc_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_17,
  controller_ck_35_1, controller_pnr_16, controller_ck_37_1,
  controller_pnr_15, controller_ck_39_1, controller_pnr_14,
  controller_ck_41_1, controller_pnr_13, controller_v_277, controller_v_276,
  controller_pnr_12, controller_ck_45_1, controller_pnr_11,
  controller_ck_47_1, controller_pnr_10, controller_ck_50_1,
  controller_pnr_9, controller_ck_52_1, controller_pnr_8, controller_ck_55_1,
  controller_pnr_7, controller_ck_57_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_light_2, p_controller_c_blind_1,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door, _out->controller_c_closet, _out->controller_c_air_2,
  _out->controller_c_air_1, _out->controller_c_window, _out->controller_c_pc,
  _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_light_1_out_st);
  _out->controller_c_light_1 = Controller_controller__controller_controller_controller_c_light_1_out_st.controller_c_light_1;
  Controller_controller__controller_controller_controller_c_blind_1_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_door_failed_recovered,
  controller_closet_failed_recovered, controller_pc_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_17,
  controller_ck_35_1, controller_pnr_16, controller_ck_37_1,
  controller_pnr_15, controller_ck_39_1, controller_pnr_14,
  controller_ck_41_1, controller_pnr_13, controller_v_277, controller_v_276,
  controller_pnr_12, controller_ck_45_1, controller_pnr_11,
  controller_ck_47_1, controller_pnr_10, controller_ck_50_1,
  controller_pnr_9, controller_ck_52_1, controller_pnr_8, controller_ck_55_1,
  controller_pnr_7, controller_ck_57_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_light_2, p_controller_c_blind_1,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door, _out->controller_c_light_1, _out->controller_c_closet,
  _out->controller_c_air_2, _out->controller_c_air_1,
  _out->controller_c_window, _out->controller_c_pc, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_blind_1_out_st);
  _out->controller_c_blind_1 = Controller_controller__controller_controller_controller_c_blind_1_out_st.controller_c_blind_1;
  Controller_controller__controller_controller_controller_c_light_2_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_door_failed_recovered,
  controller_closet_failed_recovered, controller_pc_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_17,
  controller_ck_35_1, controller_pnr_16, controller_ck_37_1,
  controller_pnr_15, controller_ck_39_1, controller_pnr_14,
  controller_ck_41_1, controller_pnr_13, controller_v_277, controller_v_276,
  controller_pnr_12, controller_ck_45_1, controller_pnr_11,
  controller_ck_47_1, controller_pnr_10, controller_ck_50_1,
  controller_pnr_9, controller_ck_52_1, controller_pnr_8, controller_ck_55_1,
  controller_pnr_7, controller_ck_57_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_light_2, p_controller_c_blind_1,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door, _out->controller_c_blind_1,
  _out->controller_c_light_1, _out->controller_c_closet,
  _out->controller_c_air_2, _out->controller_c_air_1,
  _out->controller_c_window, _out->controller_c_pc, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_light_2_out_st);
  _out->controller_c_light_2 = Controller_controller__controller_controller_controller_c_light_2_out_st.controller_c_light_2;
  Controller_controller__controller_controller_controller_c_blind_2_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_door_failed_recovered,
  controller_closet_failed_recovered, controller_pc_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_17,
  controller_ck_35_1, controller_pnr_16, controller_ck_37_1,
  controller_pnr_15, controller_ck_39_1, controller_pnr_14,
  controller_ck_41_1, controller_pnr_13, controller_v_277, controller_v_276,
  controller_pnr_12, controller_ck_45_1, controller_pnr_11,
  controller_ck_47_1, controller_pnr_10, controller_ck_50_1,
  controller_pnr_9, controller_ck_52_1, controller_pnr_8, controller_ck_55_1,
  controller_pnr_7, controller_ck_57_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_light_2, p_controller_c_blind_1,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door, _out->controller_c_light_2,
  _out->controller_c_blind_1, _out->controller_c_light_1,
  _out->controller_c_closet, _out->controller_c_air_2,
  _out->controller_c_air_1, _out->controller_c_window, _out->controller_c_pc,
  _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_blind_2_out_st);
  _out->controller_c_blind_2 = Controller_controller__controller_controller_controller_c_blind_2_out_st.controller_c_blind_2;
}

