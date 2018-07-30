/* --- Generated the 29/7/2018 at 13:21 --- */
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
  int controller_pnr_9, int controller_ck_11_1, int controller_pnr_8,
  int controller_ck_13_1, int controller_pnr_7, int controller_ck_15_1,
  int controller_pnr_6, int controller_ck_17_1, int controller_pnr_5,
  int controller_ck_19_1, int controller_pnr_4, int controller_ck_21_1,
  int controller_pnr_3, int controller_v_450, int controller_v_449,
  int controller_v_448, int controller_pnr_2, int controller_v_411,
  int controller_v_410, int controller_pnr_1, int controller_v_395,
  int controller_v_394, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_blind_1, int controller_c_light_2,
  int controller_c_light_1, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_blind_2_out* _out) {
  
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
  sub_22 = (controller_ck_17_1||false);
  v_472 = !(controller_ck_17_1);
  sub_23 = (v_472||false);
  if (controller_cleaner) {
    sub_21 = sub_22;
  } else {
    sub_21 = sub_23;
  };
  sub_24 = true;
  if (controller_worker) {
    v_473 = sub_24;
    sub_20 = sub_21;
  } else {
    v_473 = sub_21;
    sub_20 = sub_24;
  };
  if (controller_ck_15_1) {
    sub_19 = v_473;
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
  sub_27 = sub_24;
  if (controller_cleaner) {
    sub_30 = sub_23;
  } else {
    sub_30 = sub_22;
  };
  if (controller_worker) {
    sub_29 = sub_30;
    sub_31 = false;
  } else {
    sub_29 = false;
    sub_31 = sub_30;
  };
  if (controller_ck_15_1) {
    sub_28 = sub_31;
  } else {
    sub_28 = sub_29;
  };
  if (controller_change_shift) {
    v_474 = sub_28;
    sub_26 = sub_27;
  } else {
    v_474 = sub_27;
    sub_26 = sub_28;
  };
  if (controller_ck_1) {
    v_475 = v_474;
  } else {
    v_475 = sub_26;
  };
  if (controller_c_pc) {
    sub_16 = sub_17;
  } else {
    sub_16 = v_475;
  };
  v_470 = !(controller_ck_17_1);
  sub_37 = (v_470&&false);
  sub_38 = (controller_ck_17_1&&false);
  if (controller_cleaner) {
    sub_36 = sub_37;
  } else {
    sub_36 = sub_38;
  };
  sub_39 = false;
  if (controller_worker) {
    v_471 = sub_39;
    sub_35 = sub_36;
  } else {
    v_471 = sub_36;
    sub_35 = sub_39;
  };
  if (controller_ck_15_1) {
    sub_34 = v_471;
  } else {
    sub_34 = sub_35;
  };
  sub_33 = sub_34;
  sub_32 = sub_33;
  if (controller_c_window) {
    sub_15 = sub_16;
  } else {
    sub_15 = sub_32;
  };
  sub_14 = sub_15;
  sub_45 = controller_ck_17_1;
  sub_46 = !(controller_ck_17_1);
  if (controller_cleaner) {
    sub_44 = sub_45;
  } else {
    sub_44 = sub_46;
  };
  if (controller_worker) {
    v_466 = sub_24;
    sub_43 = sub_44;
  } else {
    v_466 = sub_44;
    sub_43 = sub_24;
  };
  if (controller_ck_15_1) {
    sub_42 = v_466;
  } else {
    sub_42 = sub_43;
  };
  if (controller_cleaner) {
    sub_49 = sub_38;
  } else {
    sub_49 = sub_37;
  };
  if (controller_worker) {
    sub_48 = sub_49;
    sub_50 = false;
  } else {
    sub_48 = false;
    sub_50 = sub_49;
  };
  if (controller_ck_15_1) {
    sub_47 = sub_50;
  } else {
    sub_47 = sub_48;
  };
  if (controller_change_shift) {
    v_467 = sub_47;
    sub_41 = sub_42;
  } else {
    v_467 = sub_42;
    sub_41 = sub_47;
  };
  if (controller_ck_1) {
    v_468 = v_467;
  } else {
    v_468 = sub_41;
  };
  if (controller_c_pc) {
    v_469 = sub_17;
  } else {
    v_469 = v_468;
  };
  sub_52 = sub_19;
  sub_51 = sub_52;
  if (controller_c_window) {
    sub_40 = v_469;
  } else {
    sub_40 = sub_51;
  };
  if (controller_v_394) {
    sub_13 = sub_40;
  } else {
    sub_13 = sub_14;
  };
  if (controller_change_shift) {
    sub_57 = sub_34;
    sub_58 = false;
  } else {
    sub_57 = false;
    sub_58 = sub_34;
  };
  if (controller_ck_1) {
    sub_56 = sub_58;
  } else {
    sub_56 = sub_57;
  };
  sub_60 = sub_39;
  if (controller_change_shift) {
    v_464 = sub_47;
    sub_59 = sub_60;
  } else {
    v_464 = sub_60;
    sub_59 = sub_47;
  };
  if (controller_ck_1) {
    v_465 = v_464;
  } else {
    v_465 = sub_59;
  };
  if (controller_c_pc) {
    sub_55 = sub_56;
  } else {
    sub_55 = v_465;
  };
  if (controller_c_window) {
    sub_54 = sub_55;
  } else {
    sub_54 = sub_32;
  };
  sub_53 = sub_54;
  if (controller_v_395) {
    v_476 = sub_53;
  } else {
    v_476 = sub_13;
  };
  if (controller_c_pc) {
    sub_64 = false;
  } else {
    sub_64 = sub_28;
  };
  if (controller_c_window) {
    sub_63 = sub_64;
  } else {
    sub_63 = sub_32;
  };
  sub_62 = sub_63;
  if (controller_c_pc) {
    sub_66 = false;
  } else {
    sub_66 = sub_47;
  };
  if (controller_c_window) {
    sub_65 = sub_66;
  } else {
    sub_65 = sub_51;
  };
  if (controller_v_394) {
    sub_61 = sub_65;
  } else {
    sub_61 = sub_62;
  };
  if (controller_v_395) {
    v_477 = sub_61;
  } else {
    v_477 = sub_53;
  };
  if (controller_blind_failed_recovered) {
    sub_12 = v_476;
  } else {
    sub_12 = v_477;
  };
  if (controller_c_window) {
    sub_70 = sub_64;
  } else {
    sub_70 = false;
  };
  sub_69 = sub_70;
  if (controller_c_window) {
    sub_72 = sub_66;
  } else {
    sub_72 = false;
  };
  sub_71 = sub_72;
  if (controller_v_394) {
    sub_68 = sub_71;
  } else {
    sub_68 = sub_69;
  };
  if (controller_v_395) {
    v_463 = sub_68;
    v_462 = sub_71;
  } else {
    v_463 = sub_71;
    v_462 = sub_68;
  };
  if (controller_blind_failed_recovered) {
    sub_67 = v_462;
  } else {
    sub_67 = v_463;
  };
  if (controller_c_door) {
    v_478 = sub_67;
    sub_11 = sub_12;
  } else {
    v_478 = sub_12;
    sub_11 = sub_67;
  };
  if (controller_ck_11_1) {
    sub_10 = v_478;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  if (controller_ck_15_1) {
    sub_80 = sub_29;
  } else {
    sub_80 = sub_31;
  };
  if (controller_change_shift) {
    sub_79 = false;
    sub_81 = sub_80;
  } else {
    sub_79 = sub_80;
    sub_81 = false;
  };
  if (controller_ck_1) {
    sub_78 = sub_81;
  } else {
    sub_78 = sub_79;
  };
  if (controller_worker) {
    sub_84 = sub_30;
    sub_85 = sub_49;
  } else {
    sub_84 = sub_49;
    sub_85 = sub_30;
  };
  if (controller_ck_15_1) {
    sub_83 = sub_85;
  } else {
    sub_83 = sub_84;
  };
  sub_86 = sub_30;
  if (controller_change_shift) {
    v_457 = sub_86;
    sub_82 = sub_83;
  } else {
    v_457 = sub_83;
    sub_82 = sub_86;
  };
  if (controller_ck_1) {
    v_458 = v_457;
  } else {
    v_458 = sub_82;
  };
  if (controller_c_pc) {
    v_459 = sub_78;
  } else {
    v_459 = v_458;
  };
  if (controller_ck_15_1) {
    sub_90 = sub_48;
  } else {
    sub_90 = sub_50;
  };
  if (controller_change_shift) {
    sub_89 = sub_90;
    sub_91 = sub_80;
  } else {
    sub_89 = sub_80;
    sub_91 = sub_90;
  };
  if (controller_ck_1) {
    sub_88 = sub_91;
  } else {
    sub_88 = sub_89;
  };
  sub_87 = sub_88;
  if (controller_c_window) {
    sub_77 = v_459;
  } else {
    sub_77 = sub_87;
  };
  sub_76 = sub_77;
  if (controller_ck_15_1) {
    sub_93 = sub_84;
  } else {
    sub_93 = sub_85;
  };
  if (controller_c_pc) {
    v_456 = sub_78;
  } else {
    v_456 = sub_93;
  };
  sub_95 = sub_80;
  sub_94 = sub_95;
  if (controller_c_window) {
    sub_92 = v_456;
  } else {
    sub_92 = sub_94;
  };
  if (controller_v_394) {
    sub_75 = sub_92;
  } else {
    sub_75 = sub_76;
  };
  if (controller_change_shift) {
    sub_99 = false;
    sub_100 = sub_90;
  } else {
    sub_99 = sub_90;
    sub_100 = false;
  };
  if (controller_ck_1) {
    sub_98 = sub_100;
  } else {
    sub_98 = sub_99;
  };
  sub_101 = sub_49;
  if (controller_c_pc) {
    v_455 = sub_98;
  } else {
    v_455 = sub_101;
  };
  sub_103 = sub_90;
  sub_102 = sub_103;
  if (controller_c_window) {
    sub_97 = v_455;
  } else {
    sub_97 = sub_102;
  };
  sub_96 = sub_97;
  if (controller_v_395) {
    v_460 = sub_96;
  } else {
    v_460 = sub_75;
  };
  if (controller_change_shift) {
    v_452 = sub_28;
    sub_107 = sub_83;
  } else {
    v_452 = sub_83;
    sub_107 = sub_28;
  };
  if (controller_ck_1) {
    v_453 = v_452;
  } else {
    v_453 = sub_107;
  };
  if (controller_c_pc) {
    v_454 = false;
  } else {
    v_454 = v_453;
  };
  if (controller_ck_1) {
    sub_109 = sub_99;
  } else {
    sub_109 = sub_100;
  };
  sub_108 = sub_109;
  if (controller_c_window) {
    sub_106 = v_454;
  } else {
    sub_106 = sub_108;
  };
  sub_105 = sub_106;
  if (controller_change_shift) {
    v_449 = sub_47;
    sub_111 = sub_93;
  } else {
    v_449 = sub_93;
    sub_111 = sub_47;
  };
  if (controller_ck_1) {
    v_450 = v_449;
  } else {
    v_450 = sub_111;
  };
  if (controller_c_pc) {
    v_451 = false;
  } else {
    v_451 = v_450;
  };
  if (controller_ck_1) {
    sub_113 = sub_79;
  } else {
    sub_113 = sub_81;
  };
  sub_112 = sub_113;
  if (controller_c_window) {
    sub_110 = v_451;
  } else {
    sub_110 = sub_112;
  };
  if (controller_v_394) {
    sub_104 = sub_110;
  } else {
    sub_104 = sub_105;
  };
  if (controller_v_395) {
    v_461 = sub_104;
  } else {
    v_461 = sub_96;
  };
  if (controller_blind_failed_recovered) {
    sub_74 = v_460;
  } else {
    sub_74 = v_461;
  };
  sub_73 = sub_74;
  if (controller_air_failed_recovered) {
    v_479 = sub_73;
  } else {
    v_479 = sub_10;
  };
  if (controller_c_air_2) {
    v_480 = v_479;
  } else {
    v_480 = sub_9;
  };
  if (controller_c_air_1) {
    sub_7 = sub_8;
  } else {
    sub_7 = v_480;
  };
  if (controller_c_pc) {
    sub_118 = sub_103;
  } else {
    sub_118 = sub_33;
  };
  if (controller_c_closet) {
    sub_117 = sub_102;
  } else {
    sub_117 = sub_118;
  };
  if (controller_c_pc) {
    sub_120 = sub_95;
  } else {
    sub_120 = sub_52;
  };
  if (controller_c_closet) {
    sub_119 = sub_94;
  } else {
    sub_119 = sub_120;
  };
  if (controller_v_394) {
    sub_116 = sub_119;
  } else {
    sub_116 = sub_117;
  };
  if (controller_v_395) {
    v_448 = sub_116;
    v_447 = sub_117;
  } else {
    v_448 = sub_117;
    v_447 = sub_116;
  };
  if (controller_blind_failed_recovered) {
    sub_115 = v_447;
  } else {
    sub_115 = v_448;
  };
  sub_114 = sub_115;
  if (controller_air_failed_recovered) {
    v_481 = sub_10;
  } else {
    v_481 = sub_114;
  };
  if (controller_change_shift) {
    v_442 = sub_80;
    sub_127 = sub_83;
  } else {
    v_442 = sub_83;
    sub_127 = sub_80;
  };
  if (controller_ck_1) {
    v_443 = v_442;
  } else {
    v_443 = sub_127;
  };
  if (controller_c_pc) {
    v_444 = sub_78;
  } else {
    v_444 = v_443;
  };
  if (controller_c_window) {
    sub_126 = v_444;
  } else {
    sub_126 = sub_87;
  };
  sub_125 = sub_126;
  if (controller_change_shift) {
    v_439 = sub_80;
    sub_129 = sub_93;
  } else {
    v_439 = sub_93;
    sub_129 = sub_80;
  };
  if (controller_ck_1) {
    v_440 = v_439;
  } else {
    v_440 = sub_129;
  };
  if (controller_c_pc) {
    v_441 = sub_78;
  } else {
    v_441 = v_440;
  };
  if (controller_c_window) {
    sub_128 = v_441;
  } else {
    sub_128 = sub_94;
  };
  if (controller_v_394) {
    sub_124 = sub_128;
  } else {
    sub_124 = sub_125;
  };
  if (controller_change_shift) {
    v_436 = sub_90;
    sub_132 = sub_101;
  } else {
    v_436 = sub_101;
    sub_132 = sub_90;
  };
  if (controller_ck_1) {
    v_437 = v_436;
  } else {
    v_437 = sub_132;
  };
  if (controller_c_pc) {
    v_438 = sub_98;
  } else {
    v_438 = v_437;
  };
  if (controller_c_window) {
    sub_131 = v_438;
  } else {
    sub_131 = sub_102;
  };
  sub_130 = sub_131;
  if (controller_v_395) {
    v_445 = sub_130;
  } else {
    v_445 = sub_124;
  };
  if (controller_change_shift) {
    v_433 = false;
    sub_136 = sub_83;
  } else {
    v_433 = sub_83;
    sub_136 = false;
  };
  if (controller_ck_1) {
    v_434 = v_433;
  } else {
    v_434 = sub_136;
  };
  if (controller_c_pc) {
    v_435 = false;
  } else {
    v_435 = v_434;
  };
  if (controller_c_window) {
    sub_135 = v_435;
  } else {
    sub_135 = sub_108;
  };
  sub_134 = sub_135;
  if (controller_change_shift) {
    v_430 = false;
    sub_138 = sub_93;
  } else {
    v_430 = sub_93;
    sub_138 = false;
  };
  if (controller_ck_1) {
    v_431 = v_430;
  } else {
    v_431 = sub_138;
  };
  if (controller_c_pc) {
    v_432 = false;
  } else {
    v_432 = v_431;
  };
  if (controller_c_window) {
    sub_137 = v_432;
  } else {
    sub_137 = sub_112;
  };
  if (controller_v_394) {
    sub_133 = sub_137;
  } else {
    sub_133 = sub_134;
  };
  if (controller_v_395) {
    v_446 = sub_133;
  } else {
    v_446 = sub_130;
  };
  if (controller_blind_failed_recovered) {
    sub_123 = v_445;
  } else {
    sub_123 = v_446;
  };
  sub_122 = sub_123;
  if (controller_air_failed_recovered) {
    v_484 = sub_10;
  } else {
    v_484 = sub_122;
  };
  sub_121 = sub_122;
  if (controller_c_air_2) {
    v_482 = v_481;
  } else {
    v_482 = sub_121;
  };
  sub_139 = sub_73;
  if (controller_c_air_2) {
    v_485 = v_484;
  } else {
    v_485 = sub_139;
  };
  if (controller_c_air_1) {
    v_483 = v_482;
  } else {
    v_483 = sub_139;
  };
  if (controller_v_448) {
    sub_6 = v_483;
  } else {
    sub_6 = sub_7;
  };
  sub_140 = sub_121;
  if (controller_v_450) {
    sub_5 = sub_140;
  } else {
    sub_5 = sub_6;
  };
  if (controller_air_failed_recovered) {
    v_427 = sub_122;
  } else {
    v_427 = sub_10;
  };
  if (controller_c_air_2) {
    v_428 = v_427;
  } else {
    v_428 = sub_9;
  };
  if (controller_c_air_1) {
    v_429 = v_428;
  } else {
    v_429 = sub_8;
  };
  if (controller_air_failed_recovered) {
    v_425 = sub_10;
  } else {
    v_425 = sub_73;
  };
  if (controller_c_air_2) {
    v_426 = v_425;
  } else {
    v_426 = sub_121;
  };
  sub_144 = sub_114;
  sub_143 = sub_144;
  if (controller_c_air_1) {
    v_486 = v_485;
    sub_142 = sub_143;
  } else {
    v_486 = sub_143;
    sub_142 = v_426;
  };
  if (controller_v_448) {
    sub_141 = v_429;
  } else {
    sub_141 = sub_142;
  };
  if (controller_air_failed_recovered) {
    v_423 = sub_114;
  } else {
    v_423 = sub_10;
  };
  if (controller_c_air_2) {
    v_424 = v_423;
  } else {
    v_424 = sub_9;
  };
  if (controller_c_air_1) {
    sub_145 = v_424;
  } else {
    sub_145 = sub_8;
  };
  if (controller_v_448) {
    v_487 = v_486;
  } else {
    v_487 = sub_145;
  };
  if (controller_v_450) {
    v_488 = v_487;
  } else {
    v_488 = sub_141;
  };
  if (controller_v_449) {
    v_489 = v_488;
  } else {
    v_489 = sub_5;
  };
  if (controller_c_window) {
    sub_156 = false;
  } else {
    sub_156 = sub_32;
  };
  sub_155 = sub_156;
  if (controller_v_394) {
    sub_154 = sub_71;
  } else {
    sub_154 = sub_155;
  };
  if (controller_v_395) {
    v_416 = sub_154;
    v_415 = sub_53;
  } else {
    v_416 = sub_53;
    v_415 = sub_154;
  };
  if (controller_blind_failed_recovered) {
    sub_153 = v_415;
  } else {
    sub_153 = v_416;
  };
  if (controller_v_394) {
    sub_158 = sub_71;
  } else {
    sub_158 = false;
  };
  if (controller_v_395) {
    v_414 = sub_158;
    v_413 = sub_71;
  } else {
    v_414 = sub_71;
    v_413 = sub_158;
  };
  if (controller_blind_failed_recovered) {
    sub_157 = v_413;
  } else {
    sub_157 = v_414;
  };
  if (controller_c_door) {
    v_417 = sub_157;
    sub_152 = sub_153;
  } else {
    v_417 = sub_153;
    sub_152 = sub_157;
  };
  if (controller_ck_11_1) {
    sub_151 = v_417;
  } else {
    sub_151 = sub_152;
  };
  sub_150 = sub_151;
  sub_149 = sub_150;
  if (controller_c_pc) {
    v_410 = false;
  } else {
    v_410 = sub_109;
  };
  if (controller_c_window) {
    sub_163 = v_410;
  } else {
    sub_163 = sub_108;
  };
  sub_162 = sub_163;
  if (controller_v_394) {
    sub_161 = sub_71;
  } else {
    sub_161 = sub_162;
  };
  if (controller_v_395) {
    v_412 = sub_161;
    v_411 = sub_96;
  } else {
    v_412 = sub_96;
    v_411 = sub_161;
  };
  if (controller_blind_failed_recovered) {
    sub_160 = v_411;
  } else {
    sub_160 = v_412;
  };
  sub_159 = sub_160;
  if (controller_air_failed_recovered) {
    v_418 = sub_159;
  } else {
    v_418 = sub_151;
  };
  if (controller_c_air_2) {
    v_419 = v_418;
  } else {
    v_419 = sub_150;
  };
  if (controller_c_air_1) {
    sub_148 = sub_149;
  } else {
    sub_148 = v_419;
  };
  if (controller_v_394) {
    sub_166 = false;
  } else {
    sub_166 = sub_117;
  };
  if (controller_v_395) {
    v_409 = sub_166;
    v_408 = sub_117;
  } else {
    v_409 = sub_117;
    v_408 = sub_166;
  };
  if (controller_blind_failed_recovered) {
    sub_165 = v_408;
  } else {
    sub_165 = v_409;
  };
  sub_164 = sub_165;
  if (controller_air_failed_recovered) {
    v_420 = sub_151;
  } else {
    v_420 = sub_164;
  };
  if (controller_change_shift) {
    v_403 = false;
    sub_173 = sub_47;
  } else {
    v_403 = sub_47;
    sub_173 = false;
  };
  if (controller_ck_1) {
    v_404 = v_403;
  } else {
    v_404 = sub_173;
  };
  if (controller_c_pc) {
    v_405 = false;
  } else {
    v_405 = v_404;
  };
  if (controller_c_window) {
    sub_172 = v_405;
  } else {
    sub_172 = false;
  };
  sub_171 = sub_172;
  if (controller_v_394) {
    sub_170 = sub_171;
  } else {
    sub_170 = sub_162;
  };
  if (controller_v_395) {
    v_407 = sub_170;
    v_406 = sub_130;
  } else {
    v_407 = sub_130;
    v_406 = sub_170;
  };
  if (controller_blind_failed_recovered) {
    sub_169 = v_406;
  } else {
    sub_169 = v_407;
  };
  sub_168 = sub_169;
  if (controller_air_failed_recovered) {
    v_490 = sub_151;
  } else {
    v_490 = sub_168;
  };
  sub_167 = sub_168;
  if (controller_c_air_2) {
    v_421 = v_420;
  } else {
    v_421 = sub_167;
  };
  sub_174 = sub_159;
  if (controller_c_air_2) {
    v_491 = v_490;
  } else {
    v_491 = sub_174;
  };
  if (controller_c_air_1) {
    v_422 = v_421;
  } else {
    v_422 = sub_174;
  };
  if (controller_v_448) {
    sub_147 = v_422;
  } else {
    sub_147 = sub_148;
  };
  sub_175 = sub_167;
  if (controller_v_450) {
    sub_146 = sub_175;
  } else {
    sub_146 = sub_147;
  };
  if (controller_air_failed_recovered) {
    v_400 = sub_168;
  } else {
    v_400 = sub_151;
  };
  if (controller_c_air_2) {
    v_401 = v_400;
  } else {
    v_401 = sub_150;
  };
  if (controller_c_air_1) {
    v_402 = v_401;
  } else {
    v_402 = sub_149;
  };
  if (controller_air_failed_recovered) {
    v_398 = sub_151;
  } else {
    v_398 = sub_159;
  };
  if (controller_c_air_2) {
    v_399 = v_398;
  } else {
    v_399 = sub_167;
  };
  sub_179 = sub_164;
  sub_178 = sub_179;
  if (controller_c_air_1) {
    v_492 = v_491;
    sub_177 = sub_178;
  } else {
    v_492 = sub_178;
    sub_177 = v_399;
  };
  if (controller_v_448) {
    sub_176 = v_402;
  } else {
    sub_176 = sub_177;
  };
  if (controller_air_failed_recovered) {
    v_396 = sub_164;
  } else {
    v_396 = sub_151;
  };
  if (controller_c_air_2) {
    v_397 = v_396;
  } else {
    v_397 = sub_150;
  };
  if (controller_c_air_1) {
    sub_180 = v_397;
  } else {
    sub_180 = sub_149;
  };
  if (controller_v_448) {
    v_493 = v_492;
  } else {
    v_493 = sub_180;
  };
  if (controller_v_450) {
    v_494 = v_493;
  } else {
    v_494 = sub_176;
  };
  if (controller_v_449) {
    v_495 = v_494;
  } else {
    v_495 = sub_146;
  };
  if (controller_blind_switch) {
    v_496 = v_489;
  } else {
    v_496 = v_495;
  };
  if (controller_v_394) {
    v_384 = sub_155;
  } else {
    v_384 = sub_71;
  };
  if (controller_v_395) {
    sub_190 = v_384;
  } else {
    sub_190 = sub_53;
  };
  sub_189 = sub_190;
  if (controller_v_394) {
    v_383 = false;
  } else {
    v_383 = sub_71;
  };
  if (controller_v_395) {
    sub_192 = v_383;
  } else {
    sub_192 = sub_71;
  };
  sub_191 = sub_192;
  if (controller_c_door) {
    v_385 = sub_191;
    sub_188 = sub_189;
  } else {
    v_385 = sub_189;
    sub_188 = sub_191;
  };
  if (controller_ck_11_1) {
    sub_187 = v_385;
  } else {
    sub_187 = sub_188;
  };
  sub_186 = sub_187;
  sub_185 = sub_186;
  if (controller_v_394) {
    v_382 = sub_162;
  } else {
    v_382 = sub_71;
  };
  if (controller_v_395) {
    sub_195 = v_382;
  } else {
    sub_195 = sub_96;
  };
  sub_194 = sub_195;
  sub_193 = sub_194;
  if (controller_air_failed_recovered) {
    v_386 = sub_193;
  } else {
    v_386 = sub_187;
  };
  if (controller_c_air_2) {
    v_387 = v_386;
  } else {
    v_387 = sub_186;
  };
  if (controller_c_air_1) {
    sub_184 = sub_185;
  } else {
    sub_184 = v_387;
  };
  if (controller_v_394) {
    v_381 = sub_117;
  } else {
    v_381 = false;
  };
  if (controller_v_395) {
    sub_198 = v_381;
  } else {
    sub_198 = sub_117;
  };
  sub_197 = sub_198;
  sub_196 = sub_197;
  if (controller_air_failed_recovered) {
    v_388 = sub_187;
  } else {
    v_388 = sub_196;
  };
  if (controller_v_394) {
    v_380 = sub_162;
  } else {
    v_380 = sub_171;
  };
  if (controller_v_395) {
    sub_202 = v_380;
  } else {
    sub_202 = sub_130;
  };
  sub_201 = sub_202;
  sub_200 = sub_201;
  if (controller_air_failed_recovered) {
    v_391 = sub_187;
  } else {
    v_391 = sub_200;
  };
  sub_199 = sub_200;
  if (controller_c_air_2) {
    v_389 = v_388;
  } else {
    v_389 = sub_199;
  };
  sub_203 = sub_193;
  if (controller_c_air_2) {
    v_392 = v_391;
  } else {
    v_392 = sub_203;
  };
  if (controller_c_air_1) {
    v_390 = v_389;
  } else {
    v_390 = sub_203;
  };
  if (controller_v_448) {
    sub_183 = v_390;
  } else {
    sub_183 = sub_184;
  };
  sub_204 = sub_199;
  if (controller_v_450) {
    sub_182 = sub_204;
  } else {
    sub_182 = sub_183;
  };
  if (controller_air_failed_recovered) {
    v_377 = sub_200;
  } else {
    v_377 = sub_187;
  };
  if (controller_c_air_2) {
    v_378 = v_377;
  } else {
    v_378 = sub_186;
  };
  if (controller_c_air_1) {
    v_379 = v_378;
  } else {
    v_379 = sub_185;
  };
  if (controller_air_failed_recovered) {
    v_375 = sub_187;
  } else {
    v_375 = sub_193;
  };
  if (controller_c_air_2) {
    v_376 = v_375;
  } else {
    v_376 = sub_199;
  };
  sub_208 = sub_196;
  sub_207 = sub_208;
  if (controller_c_air_1) {
    v_393 = v_392;
    sub_206 = sub_207;
  } else {
    v_393 = sub_207;
    sub_206 = v_376;
  };
  if (controller_v_448) {
    sub_205 = v_379;
  } else {
    sub_205 = sub_206;
  };
  if (controller_air_failed_recovered) {
    v_373 = sub_196;
  } else {
    v_373 = sub_187;
  };
  if (controller_c_air_2) {
    v_374 = v_373;
  } else {
    v_374 = sub_186;
  };
  if (controller_c_air_1) {
    sub_209 = v_374;
  } else {
    sub_209 = sub_185;
  };
  if (controller_v_448) {
    v_394 = v_393;
  } else {
    v_394 = sub_209;
  };
  if (controller_v_450) {
    v_395 = v_394;
  } else {
    v_395 = sub_205;
  };
  if (controller_v_449) {
    sub_181 = v_395;
  } else {
    sub_181 = sub_182;
  };
  if (controller_c_blind_1) {
    sub_4 = v_496;
  } else {
    sub_4 = sub_181;
  };
  if (controller_ck_1) {
    sub_223 = sub_57;
  } else {
    sub_223 = sub_58;
  };
  sub_222 = sub_223;
  if (controller_c_window) {
    sub_221 = sub_64;
  } else {
    sub_221 = sub_222;
  };
  sub_220 = sub_221;
  if (controller_ck_1) {
    sub_226 = sub_18;
  } else {
    sub_226 = sub_25;
  };
  sub_225 = sub_226;
  if (controller_c_window) {
    sub_224 = sub_66;
  } else {
    sub_224 = sub_225;
  };
  if (controller_v_394) {
    sub_219 = sub_224;
  } else {
    sub_219 = sub_220;
  };
  if (controller_c_window) {
    sub_228 = sub_66;
  } else {
    sub_228 = sub_222;
  };
  sub_227 = sub_228;
  if (controller_v_395) {
    v_353 = sub_219;
    v_352 = sub_227;
  } else {
    v_353 = sub_227;
    v_352 = sub_219;
  };
  if (controller_blind_failed_recovered) {
    sub_218 = v_352;
  } else {
    sub_218 = v_353;
  };
  if (controller_c_door) {
    v_354 = sub_67;
    sub_217 = sub_218;
  } else {
    v_354 = sub_218;
    sub_217 = sub_67;
  };
  if (controller_ck_11_1) {
    sub_216 = v_354;
  } else {
    sub_216 = sub_217;
  };
  if (controller_air_failed_recovered) {
    v_357 = sub_216;
  } else {
    v_357 = false;
  };
  sub_215 = sub_216;
  sub_214 = sub_215;
  sub_229 = sub_67;
  if (controller_air_failed_recovered) {
    v_355 = sub_229;
  } else {
    v_355 = sub_216;
  };
  if (controller_c_air_2) {
    v_356 = v_355;
  } else {
    v_356 = sub_215;
  };
  if (controller_c_air_1) {
    sub_213 = sub_214;
  } else {
    sub_213 = v_356;
  };
  if (controller_change_shift) {
    v_347 = false;
    sub_236 = sub_28;
  } else {
    v_347 = sub_28;
    sub_236 = false;
  };
  if (controller_ck_1) {
    v_348 = v_347;
  } else {
    v_348 = sub_236;
  };
  if (controller_c_pc) {
    v_349 = false;
  } else {
    v_349 = v_348;
  };
  if (controller_c_window) {
    sub_235 = v_349;
  } else {
    sub_235 = false;
  };
  sub_234 = sub_235;
  if (controller_v_394) {
    sub_233 = sub_171;
  } else {
    sub_233 = sub_234;
  };
  if (controller_v_395) {
    v_351 = sub_233;
    v_350 = sub_171;
  } else {
    v_351 = sub_171;
    v_350 = sub_233;
  };
  if (controller_blind_failed_recovered) {
    sub_232 = v_350;
  } else {
    sub_232 = v_351;
  };
  sub_231 = sub_232;
  if (controller_air_failed_recovered) {
    v_360 = sub_216;
  } else {
    v_360 = sub_231;
  };
  sub_230 = sub_231;
  if (controller_c_air_2) {
    v_358 = v_357;
  } else {
    v_358 = sub_230;
  };
  sub_237 = sub_229;
  if (controller_c_air_2) {
    v_361 = v_360;
  } else {
    v_361 = sub_237;
  };
  if (controller_c_air_1) {
    v_362 = v_361;
    v_359 = v_358;
  } else {
    v_362 = false;
    v_359 = sub_237;
  };
  if (controller_v_448) {
    sub_212 = v_359;
  } else {
    sub_212 = sub_213;
  };
  sub_238 = sub_230;
  if (controller_v_450) {
    sub_211 = sub_238;
  } else {
    sub_211 = sub_212;
  };
  if (controller_air_failed_recovered) {
    v_344 = sub_231;
  } else {
    v_344 = sub_216;
  };
  if (controller_c_air_2) {
    v_345 = v_344;
  } else {
    v_345 = sub_215;
  };
  if (controller_c_air_1) {
    v_346 = v_345;
  } else {
    v_346 = sub_214;
  };
  if (controller_air_failed_recovered) {
    v_342 = sub_216;
  } else {
    v_342 = sub_229;
  };
  if (controller_c_air_2) {
    v_343 = v_342;
  } else {
    v_343 = sub_230;
  };
  if (controller_c_air_1) {
    sub_240 = false;
  } else {
    sub_240 = v_343;
  };
  if (controller_v_448) {
    sub_239 = v_346;
  } else {
    sub_239 = sub_240;
  };
  if (controller_air_failed_recovered) {
    v_340 = false;
  } else {
    v_340 = sub_216;
  };
  if (controller_c_air_2) {
    v_341 = v_340;
  } else {
    v_341 = sub_215;
  };
  if (controller_c_air_1) {
    sub_241 = v_341;
  } else {
    sub_241 = sub_214;
  };
  if (controller_v_448) {
    v_363 = v_362;
  } else {
    v_363 = sub_241;
  };
  if (controller_v_450) {
    v_364 = v_363;
  } else {
    v_364 = sub_239;
  };
  if (controller_v_449) {
    v_365 = v_364;
  } else {
    v_365 = sub_211;
  };
  if (controller_c_window) {
    sub_252 = false;
  } else {
    sub_252 = sub_222;
  };
  sub_251 = sub_252;
  if (controller_v_394) {
    sub_250 = sub_71;
  } else {
    sub_250 = sub_251;
  };
  if (controller_v_395) {
    v_333 = sub_250;
    v_332 = sub_227;
  } else {
    v_333 = sub_227;
    v_332 = sub_250;
  };
  if (controller_blind_failed_recovered) {
    sub_249 = v_332;
  } else {
    sub_249 = v_333;
  };
  if (controller_c_door) {
    v_334 = sub_157;
    sub_248 = sub_249;
  } else {
    v_334 = sub_249;
    sub_248 = sub_157;
  };
  if (controller_ck_11_1) {
    sub_247 = v_334;
  } else {
    sub_247 = sub_248;
  };
  if (controller_air_failed_recovered) {
    v_337 = sub_247;
  } else {
    v_337 = false;
  };
  sub_246 = sub_247;
  sub_245 = sub_246;
  sub_253 = sub_157;
  if (controller_air_failed_recovered) {
    v_335 = sub_253;
  } else {
    v_335 = sub_247;
  };
  if (controller_c_air_2) {
    v_336 = v_335;
  } else {
    v_336 = sub_246;
  };
  if (controller_c_air_1) {
    sub_244 = sub_245;
  } else {
    sub_244 = v_336;
  };
  if (controller_v_394) {
    sub_257 = sub_171;
  } else {
    sub_257 = false;
  };
  if (controller_v_395) {
    v_331 = sub_257;
    v_330 = sub_171;
  } else {
    v_331 = sub_171;
    v_330 = sub_257;
  };
  if (controller_blind_failed_recovered) {
    sub_256 = v_330;
  } else {
    sub_256 = v_331;
  };
  sub_255 = sub_256;
  if (controller_air_failed_recovered) {
    v_366 = sub_247;
  } else {
    v_366 = sub_255;
  };
  sub_254 = sub_255;
  if (controller_c_air_2) {
    v_338 = v_337;
  } else {
    v_338 = sub_254;
  };
  sub_258 = sub_253;
  if (controller_c_air_2) {
    v_367 = v_366;
  } else {
    v_367 = sub_258;
  };
  if (controller_c_air_1) {
    v_368 = v_367;
    v_339 = v_338;
  } else {
    v_368 = false;
    v_339 = sub_258;
  };
  if (controller_v_448) {
    sub_243 = v_339;
  } else {
    sub_243 = sub_244;
  };
  sub_259 = sub_254;
  if (controller_v_450) {
    sub_242 = sub_259;
  } else {
    sub_242 = sub_243;
  };
  if (controller_air_failed_recovered) {
    v_327 = sub_255;
  } else {
    v_327 = sub_247;
  };
  if (controller_c_air_2) {
    v_328 = v_327;
  } else {
    v_328 = sub_246;
  };
  if (controller_c_air_1) {
    v_329 = v_328;
  } else {
    v_329 = sub_245;
  };
  if (controller_air_failed_recovered) {
    v_325 = sub_247;
  } else {
    v_325 = sub_253;
  };
  if (controller_c_air_2) {
    v_326 = v_325;
  } else {
    v_326 = sub_254;
  };
  if (controller_c_air_1) {
    sub_261 = false;
  } else {
    sub_261 = v_326;
  };
  if (controller_v_448) {
    sub_260 = v_329;
  } else {
    sub_260 = sub_261;
  };
  if (controller_air_failed_recovered) {
    v_323 = false;
  } else {
    v_323 = sub_247;
  };
  if (controller_c_air_2) {
    v_324 = v_323;
  } else {
    v_324 = sub_246;
  };
  if (controller_c_air_1) {
    sub_262 = v_324;
  } else {
    sub_262 = sub_245;
  };
  if (controller_v_448) {
    v_369 = v_368;
  } else {
    v_369 = sub_262;
  };
  if (controller_v_450) {
    v_370 = v_369;
  } else {
    v_370 = sub_260;
  };
  if (controller_v_449) {
    v_371 = v_370;
  } else {
    v_371 = sub_242;
  };
  if (controller_blind_switch) {
    v_372 = v_365;
  } else {
    v_372 = v_371;
  };
  if (controller_v_394) {
    v_311 = sub_251;
  } else {
    v_311 = sub_71;
  };
  if (controller_v_395) {
    sub_272 = v_311;
  } else {
    sub_272 = sub_227;
  };
  sub_271 = sub_272;
  if (controller_c_door) {
    v_312 = sub_191;
    sub_270 = sub_271;
  } else {
    v_312 = sub_271;
    sub_270 = sub_191;
  };
  if (controller_ck_11_1) {
    sub_269 = v_312;
  } else {
    sub_269 = sub_270;
  };
  if (controller_air_failed_recovered) {
    v_315 = sub_269;
  } else {
    v_315 = false;
  };
  sub_268 = sub_269;
  sub_267 = sub_268;
  sub_273 = sub_191;
  if (controller_air_failed_recovered) {
    v_313 = sub_273;
  } else {
    v_313 = sub_269;
  };
  if (controller_c_air_2) {
    v_314 = v_313;
  } else {
    v_314 = sub_268;
  };
  if (controller_c_air_1) {
    sub_266 = sub_267;
  } else {
    sub_266 = v_314;
  };
  if (controller_v_394) {
    v_310 = false;
  } else {
    v_310 = sub_171;
  };
  if (controller_v_395) {
    sub_277 = v_310;
  } else {
    sub_277 = sub_171;
  };
  sub_276 = sub_277;
  sub_275 = sub_276;
  if (controller_air_failed_recovered) {
    v_318 = sub_269;
  } else {
    v_318 = sub_275;
  };
  sub_274 = sub_275;
  if (controller_c_air_2) {
    v_316 = v_315;
  } else {
    v_316 = sub_274;
  };
  sub_278 = sub_273;
  if (controller_c_air_2) {
    v_319 = v_318;
  } else {
    v_319 = sub_278;
  };
  if (controller_c_air_1) {
    v_320 = v_319;
    v_317 = v_316;
  } else {
    v_320 = false;
    v_317 = sub_278;
  };
  if (controller_v_448) {
    sub_265 = v_317;
  } else {
    sub_265 = sub_266;
  };
  sub_279 = sub_274;
  if (controller_v_450) {
    sub_264 = sub_279;
  } else {
    sub_264 = sub_265;
  };
  if (controller_air_failed_recovered) {
    v_307 = sub_275;
  } else {
    v_307 = sub_269;
  };
  if (controller_c_air_2) {
    v_308 = v_307;
  } else {
    v_308 = sub_268;
  };
  if (controller_c_air_1) {
    v_309 = v_308;
  } else {
    v_309 = sub_267;
  };
  if (controller_air_failed_recovered) {
    v_305 = sub_269;
  } else {
    v_305 = sub_273;
  };
  if (controller_c_air_2) {
    v_306 = v_305;
  } else {
    v_306 = sub_274;
  };
  if (controller_c_air_1) {
    sub_281 = false;
  } else {
    sub_281 = v_306;
  };
  if (controller_v_448) {
    sub_280 = v_309;
  } else {
    sub_280 = sub_281;
  };
  if (controller_air_failed_recovered) {
    v_303 = false;
  } else {
    v_303 = sub_269;
  };
  if (controller_c_air_2) {
    v_304 = v_303;
  } else {
    v_304 = sub_268;
  };
  if (controller_c_air_1) {
    sub_282 = v_304;
  } else {
    sub_282 = sub_267;
  };
  if (controller_v_448) {
    v_321 = v_320;
  } else {
    v_321 = sub_282;
  };
  if (controller_v_450) {
    v_322 = v_321;
  } else {
    v_322 = sub_280;
  };
  if (controller_v_449) {
    sub_263 = v_322;
  } else {
    sub_263 = sub_264;
  };
  if (controller_c_blind_1) {
    sub_210 = v_372;
  } else {
    sub_210 = sub_263;
  };
  sub_295 = sub_17;
  if (controller_c_window) {
    sub_294 = sub_295;
  } else {
    sub_294 = sub_32;
  };
  sub_293 = sub_294;
  if (controller_c_window) {
    sub_297 = sub_295;
  } else {
    sub_297 = sub_51;
  };
  sub_296 = sub_297;
  if (controller_v_394) {
    sub_292 = sub_296;
  } else {
    sub_292 = sub_293;
  };
  sub_300 = sub_56;
  if (controller_c_window) {
    sub_299 = sub_300;
  } else {
    sub_299 = sub_32;
  };
  sub_298 = sub_299;
  if (controller_v_395) {
    v_282 = sub_298;
  } else {
    v_282 = sub_292;
  };
  if (controller_c_window) {
    sub_303 = false;
  } else {
    sub_303 = sub_51;
  };
  sub_302 = sub_303;
  if (controller_v_394) {
    sub_301 = sub_302;
  } else {
    sub_301 = sub_155;
  };
  if (controller_v_395) {
    v_283 = sub_301;
  } else {
    v_283 = sub_298;
  };
  if (controller_blind_failed_recovered) {
    sub_291 = v_282;
  } else {
    sub_291 = v_283;
  };
  if (controller_c_door) {
    v_284 = false;
    sub_290 = sub_291;
  } else {
    v_284 = sub_291;
    sub_290 = false;
  };
  if (controller_ck_11_1) {
    sub_289 = v_284;
  } else {
    sub_289 = sub_290;
  };
  sub_288 = sub_289;
  sub_287 = sub_288;
  sub_305 = sub_162;
  sub_304 = sub_305;
  if (controller_air_failed_recovered) {
    v_285 = sub_304;
  } else {
    v_285 = sub_289;
  };
  if (controller_c_air_2) {
    v_286 = v_285;
  } else {
    v_286 = sub_288;
  };
  if (controller_c_air_1) {
    sub_286 = sub_287;
  } else {
    sub_286 = v_286;
  };
  if (controller_c_pc) {
    v_280 = sub_98;
  } else {
    v_280 = sub_33;
  };
  if (controller_c_window) {
    v_281 = v_280;
  } else {
    v_281 = sub_118;
  };
  if (controller_c_pc) {
    v_278 = sub_98;
  } else {
    v_278 = sub_103;
  };
  if (controller_c_window) {
    v_279 = v_278;
  } else {
    v_279 = sub_102;
  };
  if (controller_c_closet) {
    sub_308 = v_279;
  } else {
    sub_308 = v_281;
  };
  sub_307 = sub_308;
  sub_306 = sub_307;
  if (controller_air_failed_recovered) {
    v_287 = sub_289;
  } else {
    v_287 = sub_306;
  };
  sub_313 = sub_108;
  sub_312 = sub_313;
  sub_311 = sub_312;
  sub_310 = sub_311;
  if (controller_air_failed_recovered) {
    v_290 = sub_289;
  } else {
    v_290 = sub_310;
  };
  sub_309 = sub_310;
  if (controller_c_air_2) {
    v_288 = v_287;
  } else {
    v_288 = sub_309;
  };
  sub_315 = sub_304;
  if (controller_c_air_2) {
    v_291 = v_290;
  } else {
    v_291 = sub_315;
  };
  sub_314 = sub_315;
  if (controller_c_air_1) {
    v_289 = v_288;
  } else {
    v_289 = sub_314;
  };
  if (controller_v_448) {
    sub_285 = v_289;
  } else {
    sub_285 = sub_286;
  };
  sub_317 = sub_309;
  sub_316 = sub_317;
  if (controller_v_450) {
    sub_284 = sub_316;
  } else {
    sub_284 = sub_285;
  };
  if (controller_air_failed_recovered) {
    v_275 = sub_310;
  } else {
    v_275 = sub_289;
  };
  if (controller_c_air_2) {
    v_276 = v_275;
  } else {
    v_276 = sub_288;
  };
  if (controller_c_air_1) {
    v_277 = v_276;
  } else {
    v_277 = sub_287;
  };
  if (controller_air_failed_recovered) {
    v_273 = sub_289;
  } else {
    v_273 = sub_304;
  };
  if (controller_c_air_2) {
    v_274 = v_273;
  } else {
    v_274 = sub_309;
  };
  sub_321 = sub_306;
  sub_320 = sub_321;
  if (controller_c_air_1) {
    v_292 = v_291;
    sub_319 = sub_320;
  } else {
    v_292 = sub_320;
    sub_319 = v_274;
  };
  if (controller_v_448) {
    sub_318 = v_277;
  } else {
    sub_318 = sub_319;
  };
  if (controller_air_failed_recovered) {
    v_271 = sub_306;
  } else {
    v_271 = sub_289;
  };
  if (controller_c_air_2) {
    v_272 = v_271;
  } else {
    v_272 = sub_288;
  };
  if (controller_c_air_1) {
    sub_322 = v_272;
  } else {
    sub_322 = sub_287;
  };
  if (controller_v_448) {
    v_293 = v_292;
  } else {
    v_293 = sub_322;
  };
  if (controller_v_450) {
    v_294 = v_293;
  } else {
    v_294 = sub_318;
  };
  if (controller_v_449) {
    v_295 = v_294;
  } else {
    v_295 = sub_284;
  };
  if (controller_v_394) {
    sub_331 = false;
  } else {
    sub_331 = sub_155;
  };
  if (controller_v_395) {
    v_264 = sub_331;
    v_263 = sub_298;
  } else {
    v_264 = sub_298;
    v_263 = sub_331;
  };
  if (controller_blind_failed_recovered) {
    sub_330 = v_263;
  } else {
    sub_330 = v_264;
  };
  if (controller_c_door) {
    v_265 = false;
    sub_329 = sub_330;
  } else {
    v_265 = sub_330;
    sub_329 = false;
  };
  if (controller_ck_11_1) {
    sub_328 = v_265;
  } else {
    sub_328 = sub_329;
  };
  if (controller_air_failed_recovered) {
    v_296 = sub_328;
  } else {
    v_296 = sub_310;
  };
  if (controller_c_air_2) {
    v_297 = v_296;
  } else {
    v_297 = sub_315;
  };
  if (controller_c_air_1) {
    v_298 = v_297;
  } else {
    v_298 = sub_320;
  };
  if (controller_air_failed_recovered) {
    v_268 = sub_328;
  } else {
    v_268 = sub_306;
  };
  if (controller_c_air_2) {
    v_269 = v_268;
  } else {
    v_269 = sub_309;
  };
  if (controller_c_air_1) {
    v_270 = v_269;
  } else {
    v_270 = sub_314;
  };
  if (controller_air_failed_recovered) {
    v_266 = sub_304;
  } else {
    v_266 = sub_328;
  };
  sub_327 = sub_328;
  if (controller_c_air_2) {
    v_267 = v_266;
  } else {
    v_267 = sub_327;
  };
  sub_326 = sub_327;
  if (controller_c_air_1) {
    sub_325 = sub_326;
  } else {
    sub_325 = v_267;
  };
  if (controller_v_448) {
    sub_324 = v_270;
  } else {
    sub_324 = sub_325;
  };
  if (controller_v_450) {
    sub_323 = sub_316;
  } else {
    sub_323 = sub_324;
  };
  if (controller_air_failed_recovered) {
    v_260 = sub_310;
  } else {
    v_260 = sub_328;
  };
  if (controller_c_air_2) {
    v_261 = v_260;
  } else {
    v_261 = sub_327;
  };
  if (controller_c_air_1) {
    v_262 = v_261;
  } else {
    v_262 = sub_326;
  };
  if (controller_air_failed_recovered) {
    v_258 = sub_328;
  } else {
    v_258 = sub_304;
  };
  if (controller_c_air_2) {
    v_259 = v_258;
  } else {
    v_259 = sub_309;
  };
  if (controller_c_air_1) {
    sub_333 = sub_320;
  } else {
    sub_333 = v_259;
  };
  if (controller_v_448) {
    sub_332 = v_262;
  } else {
    sub_332 = sub_333;
  };
  if (controller_air_failed_recovered) {
    v_256 = sub_306;
  } else {
    v_256 = sub_328;
  };
  if (controller_c_air_2) {
    v_257 = v_256;
  } else {
    v_257 = sub_327;
  };
  if (controller_c_air_1) {
    sub_334 = v_257;
  } else {
    sub_334 = sub_326;
  };
  if (controller_v_448) {
    v_299 = v_298;
  } else {
    v_299 = sub_334;
  };
  if (controller_v_450) {
    v_300 = v_299;
  } else {
    v_300 = sub_332;
  };
  if (controller_v_449) {
    v_301 = v_300;
  } else {
    v_301 = sub_323;
  };
  if (controller_blind_switch) {
    v_302 = v_295;
  } else {
    v_302 = v_301;
  };
  if (controller_v_394) {
    v_244 = sub_155;
  } else {
    v_244 = false;
  };
  if (controller_v_395) {
    sub_344 = v_244;
  } else {
    sub_344 = sub_298;
  };
  sub_343 = sub_344;
  if (controller_c_door) {
    v_245 = false;
    sub_342 = sub_343;
  } else {
    v_245 = sub_343;
    sub_342 = false;
  };
  if (controller_ck_11_1) {
    sub_341 = v_245;
  } else {
    sub_341 = sub_342;
  };
  if (controller_air_failed_recovered) {
    v_251 = sub_341;
  } else {
    v_251 = sub_310;
  };
  if (controller_c_air_2) {
    v_252 = v_251;
  } else {
    v_252 = sub_315;
  };
  if (controller_c_air_1) {
    v_253 = v_252;
  } else {
    v_253 = sub_320;
  };
  if (controller_air_failed_recovered) {
    v_248 = sub_341;
  } else {
    v_248 = sub_306;
  };
  if (controller_c_air_2) {
    v_249 = v_248;
  } else {
    v_249 = sub_309;
  };
  if (controller_c_air_1) {
    v_250 = v_249;
  } else {
    v_250 = sub_314;
  };
  if (controller_air_failed_recovered) {
    v_246 = sub_304;
  } else {
    v_246 = sub_341;
  };
  sub_340 = sub_341;
  if (controller_c_air_2) {
    v_247 = v_246;
  } else {
    v_247 = sub_340;
  };
  sub_339 = sub_340;
  if (controller_c_air_1) {
    sub_338 = sub_339;
  } else {
    sub_338 = v_247;
  };
  if (controller_v_448) {
    sub_337 = v_250;
  } else {
    sub_337 = sub_338;
  };
  if (controller_v_450) {
    sub_336 = sub_316;
  } else {
    sub_336 = sub_337;
  };
  if (controller_air_failed_recovered) {
    v_241 = sub_310;
  } else {
    v_241 = sub_341;
  };
  if (controller_c_air_2) {
    v_242 = v_241;
  } else {
    v_242 = sub_340;
  };
  if (controller_c_air_1) {
    v_243 = v_242;
  } else {
    v_243 = sub_339;
  };
  if (controller_air_failed_recovered) {
    v_239 = sub_341;
  } else {
    v_239 = sub_304;
  };
  if (controller_c_air_2) {
    v_240 = v_239;
  } else {
    v_240 = sub_309;
  };
  if (controller_c_air_1) {
    sub_346 = sub_320;
  } else {
    sub_346 = v_240;
  };
  if (controller_v_448) {
    sub_345 = v_243;
  } else {
    sub_345 = sub_346;
  };
  if (controller_air_failed_recovered) {
    v_237 = sub_306;
  } else {
    v_237 = sub_341;
  };
  if (controller_c_air_2) {
    v_238 = v_237;
  } else {
    v_238 = sub_340;
  };
  if (controller_c_air_1) {
    sub_347 = v_238;
  } else {
    sub_347 = sub_339;
  };
  if (controller_v_448) {
    v_254 = v_253;
  } else {
    v_254 = sub_347;
  };
  if (controller_v_450) {
    v_255 = v_254;
  } else {
    v_255 = sub_345;
  };
  if (controller_v_449) {
    sub_335 = v_255;
  } else {
    sub_335 = sub_336;
  };
  if (controller_c_blind_1) {
    sub_283 = v_302;
  } else {
    sub_283 = sub_335;
  };
  if (controller_v_410) {
    v_497 = sub_283;
  } else {
    v_497 = sub_210;
  };
  if (controller_v_411) {
    sub_3 = v_497;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  if (controller_v_410) {
    sub_349 = sub_210;
  } else {
    sub_349 = sub_283;
  };
  if (controller_v_411) {
    v_235 = sub_349;
    v_234 = sub_4;
  } else {
    v_235 = sub_4;
    v_234 = sub_349;
  };
  if (controller_light_failed_recovered) {
    v_236 = v_234;
  } else {
    v_236 = v_235;
  };
  if (controller_c_light_1) {
    sub_348 = v_236;
  } else {
    sub_348 = sub_2;
  };
  if (controller_light_switch) {
    v_498 = sub_2;
  } else {
    v_498 = sub_348;
  };
  if (controller_c_light_2) {
    sub_1 = v_498;
  } else {
    sub_1 = sub_348;
  };
  if (controller_c_window) {
    sub_362 = sub_16;
  } else {
    sub_362 = sub_51;
  };
  sub_361 = sub_362;
  if (controller_v_395) {
    v_213 = sub_61;
  } else {
    v_213 = sub_361;
  };
  if (controller_cleaner) {
    sub_368 = sub_46;
  } else {
    sub_368 = sub_45;
  };
  if (controller_worker) {
    v_207 = sub_39;
    sub_367 = sub_368;
  } else {
    v_207 = sub_368;
    sub_367 = sub_39;
  };
  if (controller_ck_15_1) {
    sub_366 = v_207;
  } else {
    sub_366 = sub_367;
  };
  if (controller_change_shift) {
    v_208 = sub_28;
    sub_365 = sub_366;
  } else {
    v_208 = sub_366;
    sub_365 = sub_28;
  };
  if (controller_ck_1) {
    v_209 = v_208;
  } else {
    v_209 = sub_365;
  };
  if (controller_c_pc) {
    v_210 = sub_56;
  } else {
    v_210 = v_209;
  };
  if (controller_c_window) {
    sub_364 = v_210;
  } else {
    sub_364 = sub_32;
  };
  sub_363 = sub_364;
  if (controller_c_window) {
    sub_369 = sub_55;
  } else {
    sub_369 = sub_51;
  };
  if (controller_v_394) {
    v_211 = sub_369;
  } else {
    v_211 = sub_363;
  };
  if (controller_v_395) {
    v_212 = v_211;
  } else {
    v_212 = sub_361;
  };
  if (controller_blind_failed_recovered) {
    sub_360 = v_212;
  } else {
    sub_360 = v_213;
  };
  if (controller_v_395) {
    sub_371 = sub_68;
  } else {
    sub_371 = sub_69;
  };
  sub_370 = sub_371;
  if (controller_c_door) {
    v_214 = sub_370;
    sub_359 = sub_360;
  } else {
    v_214 = sub_360;
    sub_359 = sub_370;
  };
  if (controller_ck_11_1) {
    sub_358 = v_214;
  } else {
    sub_358 = sub_359;
  };
  sub_357 = sub_358;
  sub_356 = sub_357;
  if (controller_c_pc) {
    v_203 = sub_78;
  } else {
    v_203 = sub_86;
  };
  if (controller_c_window) {
    sub_375 = v_203;
  } else {
    sub_375 = sub_94;
  };
  sub_374 = sub_375;
  if (controller_v_395) {
    v_206 = sub_104;
  } else {
    v_206 = sub_374;
  };
  if (controller_c_pc) {
    v_202 = sub_98;
  } else {
    v_202 = sub_83;
  };
  if (controller_c_window) {
    sub_377 = v_202;
  } else {
    sub_377 = sub_102;
  };
  sub_376 = sub_377;
  if (controller_change_shift) {
    v_199 = sub_101;
    sub_379 = sub_93;
  } else {
    v_199 = sub_93;
    sub_379 = sub_101;
  };
  if (controller_ck_1) {
    v_200 = v_199;
  } else {
    v_200 = sub_379;
  };
  if (controller_c_pc) {
    v_201 = sub_98;
  } else {
    v_201 = v_200;
  };
  if (controller_ck_1) {
    sub_381 = sub_89;
  } else {
    sub_381 = sub_91;
  };
  sub_380 = sub_381;
  if (controller_c_window) {
    sub_378 = v_201;
  } else {
    sub_378 = sub_380;
  };
  if (controller_v_394) {
    v_204 = sub_378;
  } else {
    v_204 = sub_376;
  };
  if (controller_v_395) {
    v_205 = v_204;
  } else {
    v_205 = sub_374;
  };
  if (controller_blind_failed_recovered) {
    sub_373 = v_205;
  } else {
    sub_373 = v_206;
  };
  sub_372 = sub_373;
  if (controller_air_failed_recovered) {
    v_215 = sub_372;
  } else {
    v_215 = sub_358;
  };
  if (controller_c_air_2) {
    v_216 = v_215;
  } else {
    v_216 = sub_357;
  };
  if (controller_c_air_1) {
    sub_355 = sub_356;
  } else {
    sub_355 = v_216;
  };
  if (controller_v_395) {
    sub_384 = sub_116;
  } else {
    sub_384 = sub_119;
  };
  sub_383 = sub_384;
  sub_382 = sub_383;
  if (controller_air_failed_recovered) {
    v_217 = sub_358;
  } else {
    v_217 = sub_382;
  };
  if (controller_change_shift) {
    v_193 = sub_80;
    sub_390 = sub_86;
  } else {
    v_193 = sub_86;
    sub_390 = sub_80;
  };
  if (controller_ck_1) {
    v_194 = v_193;
  } else {
    v_194 = sub_390;
  };
  if (controller_c_pc) {
    v_195 = sub_78;
  } else {
    v_195 = v_194;
  };
  if (controller_c_window) {
    sub_389 = v_195;
  } else {
    sub_389 = sub_94;
  };
  sub_388 = sub_389;
  if (controller_v_395) {
    v_198 = sub_133;
  } else {
    v_198 = sub_388;
  };
  if (controller_change_shift) {
    v_190 = sub_90;
    sub_393 = sub_83;
  } else {
    v_190 = sub_83;
    sub_393 = sub_90;
  };
  if (controller_ck_1) {
    v_191 = v_190;
  } else {
    v_191 = sub_393;
  };
  if (controller_c_pc) {
    v_192 = sub_98;
  } else {
    v_192 = v_191;
  };
  if (controller_c_window) {
    sub_392 = v_192;
  } else {
    sub_392 = sub_102;
  };
  sub_391 = sub_392;
  if (controller_change_shift) {
    v_187 = sub_90;
    sub_395 = sub_93;
  } else {
    v_187 = sub_93;
    sub_395 = sub_90;
  };
  if (controller_ck_1) {
    v_188 = v_187;
  } else {
    v_188 = sub_395;
  };
  if (controller_c_pc) {
    v_189 = sub_98;
  } else {
    v_189 = v_188;
  };
  if (controller_c_window) {
    sub_394 = v_189;
  } else {
    sub_394 = sub_380;
  };
  if (controller_v_394) {
    v_196 = sub_394;
  } else {
    v_196 = sub_391;
  };
  if (controller_v_395) {
    v_197 = v_196;
  } else {
    v_197 = sub_388;
  };
  if (controller_blind_failed_recovered) {
    sub_387 = v_197;
  } else {
    sub_387 = v_198;
  };
  sub_386 = sub_387;
  if (controller_air_failed_recovered) {
    v_220 = sub_358;
  } else {
    v_220 = sub_386;
  };
  sub_385 = sub_386;
  if (controller_c_air_2) {
    v_218 = v_217;
  } else {
    v_218 = sub_385;
  };
  sub_396 = sub_372;
  if (controller_c_air_2) {
    v_221 = v_220;
  } else {
    v_221 = sub_396;
  };
  if (controller_c_air_1) {
    v_219 = v_218;
  } else {
    v_219 = sub_396;
  };
  if (controller_v_448) {
    sub_354 = v_219;
  } else {
    sub_354 = sub_355;
  };
  sub_397 = sub_385;
  if (controller_v_450) {
    sub_353 = sub_397;
  } else {
    sub_353 = sub_354;
  };
  if (controller_air_failed_recovered) {
    v_184 = sub_386;
  } else {
    v_184 = sub_358;
  };
  if (controller_c_air_2) {
    v_185 = v_184;
  } else {
    v_185 = sub_357;
  };
  if (controller_c_air_1) {
    v_186 = v_185;
  } else {
    v_186 = sub_356;
  };
  if (controller_air_failed_recovered) {
    v_182 = sub_358;
  } else {
    v_182 = sub_372;
  };
  if (controller_c_air_2) {
    v_183 = v_182;
  } else {
    v_183 = sub_385;
  };
  sub_401 = sub_382;
  sub_400 = sub_401;
  if (controller_c_air_1) {
    v_222 = v_221;
    sub_399 = sub_400;
  } else {
    v_222 = sub_400;
    sub_399 = v_183;
  };
  if (controller_v_448) {
    sub_398 = v_186;
  } else {
    sub_398 = sub_399;
  };
  if (controller_air_failed_recovered) {
    v_180 = sub_382;
  } else {
    v_180 = sub_358;
  };
  if (controller_c_air_2) {
    v_181 = v_180;
  } else {
    v_181 = sub_357;
  };
  if (controller_c_air_1) {
    sub_402 = v_181;
  } else {
    sub_402 = sub_356;
  };
  if (controller_v_448) {
    v_223 = v_222;
  } else {
    v_223 = sub_402;
  };
  if (controller_v_450) {
    v_224 = v_223;
  } else {
    v_224 = sub_398;
  };
  if (controller_v_449) {
    v_225 = v_224;
  } else {
    v_225 = sub_353;
  };
  if (controller_v_394) {
    sub_411 = sub_69;
  } else {
    sub_411 = sub_302;
  };
  if (controller_v_395) {
    v_173 = sub_411;
    v_172 = sub_361;
  } else {
    v_173 = sub_361;
    v_172 = sub_411;
  };
  if (controller_blind_failed_recovered) {
    sub_410 = v_172;
  } else {
    sub_410 = v_173;
  };
  if (controller_v_394) {
    sub_413 = sub_69;
  } else {
    sub_413 = false;
  };
  if (controller_v_395) {
    v_171 = sub_413;
    v_170 = sub_69;
  } else {
    v_171 = sub_69;
    v_170 = sub_413;
  };
  if (controller_blind_failed_recovered) {
    sub_412 = v_170;
  } else {
    sub_412 = v_171;
  };
  if (controller_c_door) {
    v_174 = sub_412;
    sub_409 = sub_410;
  } else {
    v_174 = sub_410;
    sub_409 = sub_412;
  };
  if (controller_ck_11_1) {
    sub_408 = v_174;
  } else {
    sub_408 = sub_409;
  };
  sub_407 = sub_408;
  sub_406 = sub_407;
  if (controller_c_pc) {
    v_167 = false;
  } else {
    v_167 = sub_113;
  };
  if (controller_c_window) {
    sub_418 = v_167;
  } else {
    sub_418 = sub_112;
  };
  sub_417 = sub_418;
  if (controller_v_394) {
    sub_416 = sub_69;
  } else {
    sub_416 = sub_417;
  };
  if (controller_v_395) {
    v_169 = sub_416;
    v_168 = sub_374;
  } else {
    v_169 = sub_374;
    v_168 = sub_416;
  };
  if (controller_blind_failed_recovered) {
    sub_415 = v_168;
  } else {
    sub_415 = v_169;
  };
  sub_414 = sub_415;
  if (controller_air_failed_recovered) {
    v_175 = sub_414;
  } else {
    v_175 = sub_408;
  };
  if (controller_c_air_2) {
    v_176 = v_175;
  } else {
    v_176 = sub_407;
  };
  if (controller_c_air_1) {
    sub_405 = sub_406;
  } else {
    sub_405 = v_176;
  };
  if (controller_v_394) {
    sub_421 = false;
  } else {
    sub_421 = sub_119;
  };
  if (controller_v_395) {
    v_166 = sub_421;
    v_165 = sub_119;
  } else {
    v_166 = sub_119;
    v_165 = sub_421;
  };
  if (controller_blind_failed_recovered) {
    sub_420 = v_165;
  } else {
    sub_420 = v_166;
  };
  sub_419 = sub_420;
  if (controller_air_failed_recovered) {
    v_177 = sub_408;
  } else {
    v_177 = sub_419;
  };
  if (controller_v_394) {
    sub_425 = sub_234;
  } else {
    sub_425 = sub_417;
  };
  if (controller_v_395) {
    v_164 = sub_425;
    v_163 = sub_388;
  } else {
    v_164 = sub_388;
    v_163 = sub_425;
  };
  if (controller_blind_failed_recovered) {
    sub_424 = v_163;
  } else {
    sub_424 = v_164;
  };
  sub_423 = sub_424;
  if (controller_air_failed_recovered) {
    v_226 = sub_408;
  } else {
    v_226 = sub_423;
  };
  sub_422 = sub_423;
  if (controller_c_air_2) {
    v_178 = v_177;
  } else {
    v_178 = sub_422;
  };
  sub_426 = sub_414;
  if (controller_c_air_2) {
    v_227 = v_226;
  } else {
    v_227 = sub_426;
  };
  if (controller_c_air_1) {
    v_179 = v_178;
  } else {
    v_179 = sub_426;
  };
  if (controller_v_448) {
    sub_404 = v_179;
  } else {
    sub_404 = sub_405;
  };
  sub_427 = sub_422;
  if (controller_v_450) {
    sub_403 = sub_427;
  } else {
    sub_403 = sub_404;
  };
  if (controller_air_failed_recovered) {
    v_160 = sub_423;
  } else {
    v_160 = sub_408;
  };
  if (controller_c_air_2) {
    v_161 = v_160;
  } else {
    v_161 = sub_407;
  };
  if (controller_c_air_1) {
    v_162 = v_161;
  } else {
    v_162 = sub_406;
  };
  if (controller_air_failed_recovered) {
    v_158 = sub_408;
  } else {
    v_158 = sub_414;
  };
  if (controller_c_air_2) {
    v_159 = v_158;
  } else {
    v_159 = sub_422;
  };
  sub_431 = sub_419;
  sub_430 = sub_431;
  if (controller_c_air_1) {
    v_228 = v_227;
    sub_429 = sub_430;
  } else {
    v_228 = sub_430;
    sub_429 = v_159;
  };
  if (controller_v_448) {
    sub_428 = v_162;
  } else {
    sub_428 = sub_429;
  };
  if (controller_air_failed_recovered) {
    v_156 = sub_419;
  } else {
    v_156 = sub_408;
  };
  if (controller_c_air_2) {
    v_157 = v_156;
  } else {
    v_157 = sub_407;
  };
  if (controller_c_air_1) {
    sub_432 = v_157;
  } else {
    sub_432 = sub_406;
  };
  if (controller_v_448) {
    v_229 = v_228;
  } else {
    v_229 = sub_432;
  };
  if (controller_v_450) {
    v_230 = v_229;
  } else {
    v_230 = sub_428;
  };
  if (controller_v_449) {
    v_231 = v_230;
  } else {
    v_231 = sub_403;
  };
  if (controller_blind_switch) {
    v_232 = v_225;
  } else {
    v_232 = v_231;
  };
  if (controller_v_394) {
    v_144 = sub_302;
  } else {
    v_144 = sub_69;
  };
  if (controller_v_395) {
    sub_442 = v_144;
  } else {
    sub_442 = sub_361;
  };
  sub_441 = sub_442;
  if (controller_v_394) {
    v_143 = false;
  } else {
    v_143 = sub_69;
  };
  if (controller_v_395) {
    sub_444 = v_143;
  } else {
    sub_444 = sub_69;
  };
  sub_443 = sub_444;
  if (controller_c_door) {
    v_145 = sub_443;
    sub_440 = sub_441;
  } else {
    v_145 = sub_441;
    sub_440 = sub_443;
  };
  if (controller_ck_11_1) {
    sub_439 = v_145;
  } else {
    sub_439 = sub_440;
  };
  sub_438 = sub_439;
  sub_437 = sub_438;
  if (controller_v_394) {
    v_142 = sub_417;
  } else {
    v_142 = sub_69;
  };
  if (controller_v_395) {
    sub_447 = v_142;
  } else {
    sub_447 = sub_374;
  };
  sub_446 = sub_447;
  sub_445 = sub_446;
  if (controller_air_failed_recovered) {
    v_146 = sub_445;
  } else {
    v_146 = sub_439;
  };
  if (controller_c_air_2) {
    v_147 = v_146;
  } else {
    v_147 = sub_438;
  };
  if (controller_c_air_1) {
    sub_436 = sub_437;
  } else {
    sub_436 = v_147;
  };
  if (controller_v_394) {
    v_141 = sub_119;
  } else {
    v_141 = false;
  };
  if (controller_v_395) {
    sub_450 = v_141;
  } else {
    sub_450 = sub_119;
  };
  sub_449 = sub_450;
  sub_448 = sub_449;
  if (controller_air_failed_recovered) {
    v_148 = sub_439;
  } else {
    v_148 = sub_448;
  };
  if (controller_v_394) {
    v_140 = sub_417;
  } else {
    v_140 = sub_234;
  };
  if (controller_v_395) {
    sub_454 = v_140;
  } else {
    sub_454 = sub_388;
  };
  sub_453 = sub_454;
  sub_452 = sub_453;
  if (controller_air_failed_recovered) {
    v_151 = sub_439;
  } else {
    v_151 = sub_452;
  };
  sub_451 = sub_452;
  if (controller_c_air_2) {
    v_149 = v_148;
  } else {
    v_149 = sub_451;
  };
  sub_455 = sub_445;
  if (controller_c_air_2) {
    v_152 = v_151;
  } else {
    v_152 = sub_455;
  };
  if (controller_c_air_1) {
    v_150 = v_149;
  } else {
    v_150 = sub_455;
  };
  if (controller_v_448) {
    sub_435 = v_150;
  } else {
    sub_435 = sub_436;
  };
  sub_456 = sub_451;
  if (controller_v_450) {
    sub_434 = sub_456;
  } else {
    sub_434 = sub_435;
  };
  if (controller_air_failed_recovered) {
    v_137 = sub_452;
  } else {
    v_137 = sub_439;
  };
  if (controller_c_air_2) {
    v_138 = v_137;
  } else {
    v_138 = sub_438;
  };
  if (controller_c_air_1) {
    v_139 = v_138;
  } else {
    v_139 = sub_437;
  };
  if (controller_air_failed_recovered) {
    v_135 = sub_439;
  } else {
    v_135 = sub_445;
  };
  if (controller_c_air_2) {
    v_136 = v_135;
  } else {
    v_136 = sub_451;
  };
  sub_460 = sub_448;
  sub_459 = sub_460;
  if (controller_c_air_1) {
    v_153 = v_152;
    sub_458 = sub_459;
  } else {
    v_153 = sub_459;
    sub_458 = v_136;
  };
  if (controller_v_448) {
    sub_457 = v_139;
  } else {
    sub_457 = sub_458;
  };
  if (controller_air_failed_recovered) {
    v_133 = sub_448;
  } else {
    v_133 = sub_439;
  };
  if (controller_c_air_2) {
    v_134 = v_133;
  } else {
    v_134 = sub_438;
  };
  if (controller_c_air_1) {
    sub_461 = v_134;
  } else {
    sub_461 = sub_437;
  };
  if (controller_v_448) {
    v_154 = v_153;
  } else {
    v_154 = sub_461;
  };
  if (controller_v_450) {
    v_155 = v_154;
  } else {
    v_155 = sub_457;
  };
  if (controller_v_449) {
    sub_433 = v_155;
  } else {
    sub_433 = sub_434;
  };
  if (controller_c_blind_1) {
    sub_352 = v_232;
  } else {
    sub_352 = sub_433;
  };
  if (controller_c_window) {
    sub_473 = sub_64;
  } else {
    sub_473 = sub_225;
  };
  sub_472 = sub_473;
  if (controller_v_395) {
    sub_471 = sub_219;
  } else {
    sub_471 = sub_472;
  };
  sub_470 = sub_471;
  if (controller_c_door) {
    v_114 = sub_370;
    sub_469 = sub_470;
  } else {
    v_114 = sub_470;
    sub_469 = sub_370;
  };
  if (controller_ck_11_1) {
    sub_468 = v_114;
  } else {
    sub_468 = sub_469;
  };
  if (controller_air_failed_recovered) {
    v_117 = sub_468;
  } else {
    v_117 = false;
  };
  sub_467 = sub_468;
  sub_466 = sub_467;
  sub_474 = sub_370;
  if (controller_air_failed_recovered) {
    v_115 = sub_474;
  } else {
    v_115 = sub_468;
  };
  if (controller_c_air_2) {
    v_116 = v_115;
  } else {
    v_116 = sub_467;
  };
  if (controller_c_air_1) {
    sub_465 = sub_466;
  } else {
    sub_465 = v_116;
  };
  if (controller_v_395) {
    sub_478 = sub_233;
  } else {
    sub_478 = sub_234;
  };
  sub_477 = sub_478;
  sub_476 = sub_477;
  if (controller_air_failed_recovered) {
    v_120 = sub_468;
  } else {
    v_120 = sub_476;
  };
  sub_475 = sub_476;
  if (controller_c_air_2) {
    v_118 = v_117;
  } else {
    v_118 = sub_475;
  };
  sub_479 = sub_474;
  if (controller_c_air_2) {
    v_121 = v_120;
  } else {
    v_121 = sub_479;
  };
  if (controller_c_air_1) {
    v_122 = v_121;
    v_119 = v_118;
  } else {
    v_122 = false;
    v_119 = sub_479;
  };
  if (controller_v_448) {
    sub_464 = v_119;
  } else {
    sub_464 = sub_465;
  };
  sub_480 = sub_475;
  if (controller_v_450) {
    sub_463 = sub_480;
  } else {
    sub_463 = sub_464;
  };
  if (controller_air_failed_recovered) {
    v_111 = sub_476;
  } else {
    v_111 = sub_468;
  };
  if (controller_c_air_2) {
    v_112 = v_111;
  } else {
    v_112 = sub_467;
  };
  if (controller_c_air_1) {
    v_113 = v_112;
  } else {
    v_113 = sub_466;
  };
  if (controller_air_failed_recovered) {
    v_109 = sub_468;
  } else {
    v_109 = sub_474;
  };
  if (controller_c_air_2) {
    v_110 = v_109;
  } else {
    v_110 = sub_475;
  };
  if (controller_c_air_1) {
    sub_482 = false;
  } else {
    sub_482 = v_110;
  };
  if (controller_v_448) {
    sub_481 = v_113;
  } else {
    sub_481 = sub_482;
  };
  if (controller_air_failed_recovered) {
    v_107 = false;
  } else {
    v_107 = sub_468;
  };
  if (controller_c_air_2) {
    v_108 = v_107;
  } else {
    v_108 = sub_467;
  };
  if (controller_c_air_1) {
    sub_483 = v_108;
  } else {
    sub_483 = sub_466;
  };
  if (controller_v_448) {
    v_123 = v_122;
  } else {
    v_123 = sub_483;
  };
  if (controller_v_450) {
    v_124 = v_123;
  } else {
    v_124 = sub_481;
  };
  if (controller_v_449) {
    v_125 = v_124;
  } else {
    v_125 = sub_463;
  };
  if (controller_c_window) {
    sub_494 = false;
  } else {
    sub_494 = sub_225;
  };
  sub_493 = sub_494;
  if (controller_v_394) {
    sub_492 = sub_69;
  } else {
    sub_492 = sub_493;
  };
  if (controller_v_395) {
    v_100 = sub_492;
    v_99 = sub_472;
  } else {
    v_100 = sub_472;
    v_99 = sub_492;
  };
  if (controller_blind_failed_recovered) {
    sub_491 = v_99;
  } else {
    sub_491 = v_100;
  };
  if (controller_c_door) {
    v_101 = sub_412;
    sub_490 = sub_491;
  } else {
    v_101 = sub_491;
    sub_490 = sub_412;
  };
  if (controller_ck_11_1) {
    sub_489 = v_101;
  } else {
    sub_489 = sub_490;
  };
  if (controller_air_failed_recovered) {
    v_104 = sub_489;
  } else {
    v_104 = false;
  };
  sub_488 = sub_489;
  sub_487 = sub_488;
  sub_495 = sub_412;
  if (controller_air_failed_recovered) {
    v_102 = sub_495;
  } else {
    v_102 = sub_489;
  };
  if (controller_c_air_2) {
    v_103 = v_102;
  } else {
    v_103 = sub_488;
  };
  if (controller_c_air_1) {
    sub_486 = sub_487;
  } else {
    sub_486 = v_103;
  };
  if (controller_v_394) {
    sub_499 = sub_234;
  } else {
    sub_499 = false;
  };
  if (controller_v_395) {
    v_98 = sub_499;
    v_97 = sub_234;
  } else {
    v_98 = sub_234;
    v_97 = sub_499;
  };
  if (controller_blind_failed_recovered) {
    sub_498 = v_97;
  } else {
    sub_498 = v_98;
  };
  sub_497 = sub_498;
  if (controller_air_failed_recovered) {
    v_126 = sub_489;
  } else {
    v_126 = sub_497;
  };
  sub_496 = sub_497;
  if (controller_c_air_2) {
    v_105 = v_104;
  } else {
    v_105 = sub_496;
  };
  sub_500 = sub_495;
  if (controller_c_air_2) {
    v_127 = v_126;
  } else {
    v_127 = sub_500;
  };
  if (controller_c_air_1) {
    v_128 = v_127;
    v_106 = v_105;
  } else {
    v_128 = false;
    v_106 = sub_500;
  };
  if (controller_v_448) {
    sub_485 = v_106;
  } else {
    sub_485 = sub_486;
  };
  sub_501 = sub_496;
  if (controller_v_450) {
    sub_484 = sub_501;
  } else {
    sub_484 = sub_485;
  };
  if (controller_air_failed_recovered) {
    v_94 = sub_497;
  } else {
    v_94 = sub_489;
  };
  if (controller_c_air_2) {
    v_95 = v_94;
  } else {
    v_95 = sub_488;
  };
  if (controller_c_air_1) {
    v_96 = v_95;
  } else {
    v_96 = sub_487;
  };
  if (controller_air_failed_recovered) {
    v_92 = sub_489;
  } else {
    v_92 = sub_495;
  };
  if (controller_c_air_2) {
    v_93 = v_92;
  } else {
    v_93 = sub_496;
  };
  if (controller_c_air_1) {
    sub_503 = false;
  } else {
    sub_503 = v_93;
  };
  if (controller_v_448) {
    sub_502 = v_96;
  } else {
    sub_502 = sub_503;
  };
  if (controller_air_failed_recovered) {
    v_90 = false;
  } else {
    v_90 = sub_489;
  };
  if (controller_c_air_2) {
    v_91 = v_90;
  } else {
    v_91 = sub_488;
  };
  if (controller_c_air_1) {
    sub_504 = v_91;
  } else {
    sub_504 = sub_487;
  };
  if (controller_v_448) {
    v_129 = v_128;
  } else {
    v_129 = sub_504;
  };
  if (controller_v_450) {
    v_130 = v_129;
  } else {
    v_130 = sub_502;
  };
  if (controller_v_449) {
    v_131 = v_130;
  } else {
    v_131 = sub_484;
  };
  if (controller_blind_switch) {
    v_132 = v_125;
  } else {
    v_132 = v_131;
  };
  if (controller_v_394) {
    v_78 = sub_493;
  } else {
    v_78 = sub_69;
  };
  if (controller_v_395) {
    sub_514 = v_78;
  } else {
    sub_514 = sub_472;
  };
  sub_513 = sub_514;
  if (controller_c_door) {
    v_79 = sub_443;
    sub_512 = sub_513;
  } else {
    v_79 = sub_513;
    sub_512 = sub_443;
  };
  if (controller_ck_11_1) {
    sub_511 = v_79;
  } else {
    sub_511 = sub_512;
  };
  if (controller_air_failed_recovered) {
    v_82 = sub_511;
  } else {
    v_82 = false;
  };
  sub_510 = sub_511;
  sub_509 = sub_510;
  sub_515 = sub_443;
  if (controller_air_failed_recovered) {
    v_80 = sub_515;
  } else {
    v_80 = sub_511;
  };
  if (controller_c_air_2) {
    v_81 = v_80;
  } else {
    v_81 = sub_510;
  };
  if (controller_c_air_1) {
    sub_508 = sub_509;
  } else {
    sub_508 = v_81;
  };
  if (controller_v_394) {
    v_77 = false;
  } else {
    v_77 = sub_234;
  };
  if (controller_v_395) {
    sub_519 = v_77;
  } else {
    sub_519 = sub_234;
  };
  sub_518 = sub_519;
  sub_517 = sub_518;
  if (controller_air_failed_recovered) {
    v_85 = sub_511;
  } else {
    v_85 = sub_517;
  };
  sub_516 = sub_517;
  if (controller_c_air_2) {
    v_83 = v_82;
  } else {
    v_83 = sub_516;
  };
  sub_520 = sub_515;
  if (controller_c_air_2) {
    v_86 = v_85;
  } else {
    v_86 = sub_520;
  };
  if (controller_c_air_1) {
    v_87 = v_86;
    v_84 = v_83;
  } else {
    v_87 = false;
    v_84 = sub_520;
  };
  if (controller_v_448) {
    sub_507 = v_84;
  } else {
    sub_507 = sub_508;
  };
  sub_521 = sub_516;
  if (controller_v_450) {
    sub_506 = sub_521;
  } else {
    sub_506 = sub_507;
  };
  if (controller_air_failed_recovered) {
    v_74 = sub_517;
  } else {
    v_74 = sub_511;
  };
  if (controller_c_air_2) {
    v_75 = v_74;
  } else {
    v_75 = sub_510;
  };
  if (controller_c_air_1) {
    v_76 = v_75;
  } else {
    v_76 = sub_509;
  };
  if (controller_air_failed_recovered) {
    v_72 = sub_511;
  } else {
    v_72 = sub_515;
  };
  if (controller_c_air_2) {
    v_73 = v_72;
  } else {
    v_73 = sub_516;
  };
  if (controller_c_air_1) {
    sub_523 = false;
  } else {
    sub_523 = v_73;
  };
  if (controller_v_448) {
    sub_522 = v_76;
  } else {
    sub_522 = sub_523;
  };
  if (controller_air_failed_recovered) {
    v_70 = false;
  } else {
    v_70 = sub_511;
  };
  if (controller_c_air_2) {
    v_71 = v_70;
  } else {
    v_71 = sub_510;
  };
  if (controller_c_air_1) {
    sub_524 = v_71;
  } else {
    sub_524 = sub_509;
  };
  if (controller_v_448) {
    v_88 = v_87;
  } else {
    v_88 = sub_524;
  };
  if (controller_v_450) {
    v_89 = v_88;
  } else {
    v_89 = sub_522;
  };
  if (controller_v_449) {
    sub_505 = v_89;
  } else {
    sub_505 = sub_506;
  };
  if (controller_c_blind_1) {
    sub_462 = v_132;
  } else {
    sub_462 = sub_505;
  };
  if (controller_v_395) {
    v_50 = sub_301;
  } else {
    v_50 = sub_296;
  };
  if (controller_c_window) {
    sub_534 = sub_300;
  } else {
    sub_534 = sub_51;
  };
  if (controller_v_394) {
    v_48 = sub_534;
  } else {
    v_48 = sub_298;
  };
  if (controller_v_395) {
    v_49 = v_48;
  } else {
    v_49 = sub_296;
  };
  if (controller_blind_failed_recovered) {
    sub_533 = v_49;
  } else {
    sub_533 = v_50;
  };
  if (controller_c_door) {
    v_51 = false;
    sub_532 = sub_533;
  } else {
    v_51 = sub_533;
    sub_532 = false;
  };
  if (controller_ck_11_1) {
    sub_531 = v_51;
  } else {
    sub_531 = sub_532;
  };
  sub_530 = sub_531;
  sub_529 = sub_530;
  sub_536 = sub_417;
  sub_535 = sub_536;
  if (controller_air_failed_recovered) {
    v_52 = sub_535;
  } else {
    v_52 = sub_531;
  };
  if (controller_c_air_2) {
    v_53 = v_52;
  } else {
    v_53 = sub_530;
  };
  if (controller_c_air_1) {
    sub_528 = sub_529;
  } else {
    sub_528 = v_53;
  };
  if (controller_c_pc) {
    v_46 = sub_78;
  } else {
    v_46 = sub_52;
  };
  if (controller_c_window) {
    v_47 = v_46;
  } else {
    v_47 = sub_120;
  };
  if (controller_c_pc) {
    v_44 = sub_78;
  } else {
    v_44 = sub_95;
  };
  if (controller_c_window) {
    v_45 = v_44;
  } else {
    v_45 = sub_94;
  };
  if (controller_c_closet) {
    sub_539 = v_45;
  } else {
    sub_539 = v_47;
  };
  sub_538 = sub_539;
  sub_537 = sub_538;
  if (controller_air_failed_recovered) {
    v_54 = sub_531;
  } else {
    v_54 = sub_537;
  };
  sub_544 = sub_112;
  sub_543 = sub_544;
  sub_542 = sub_543;
  sub_541 = sub_542;
  if (controller_air_failed_recovered) {
    v_57 = sub_531;
  } else {
    v_57 = sub_541;
  };
  sub_540 = sub_541;
  if (controller_c_air_2) {
    v_55 = v_54;
  } else {
    v_55 = sub_540;
  };
  sub_546 = sub_535;
  if (controller_c_air_2) {
    v_58 = v_57;
  } else {
    v_58 = sub_546;
  };
  sub_545 = sub_546;
  if (controller_c_air_1) {
    v_56 = v_55;
  } else {
    v_56 = sub_545;
  };
  if (controller_v_448) {
    sub_527 = v_56;
  } else {
    sub_527 = sub_528;
  };
  sub_548 = sub_540;
  sub_547 = sub_548;
  if (controller_v_450) {
    sub_526 = sub_547;
  } else {
    sub_526 = sub_527;
  };
  if (controller_air_failed_recovered) {
    v_41 = sub_541;
  } else {
    v_41 = sub_531;
  };
  if (controller_c_air_2) {
    v_42 = v_41;
  } else {
    v_42 = sub_530;
  };
  if (controller_c_air_1) {
    v_43 = v_42;
  } else {
    v_43 = sub_529;
  };
  if (controller_air_failed_recovered) {
    v_39 = sub_531;
  } else {
    v_39 = sub_535;
  };
  if (controller_c_air_2) {
    v_40 = v_39;
  } else {
    v_40 = sub_540;
  };
  sub_552 = sub_537;
  sub_551 = sub_552;
  if (controller_c_air_1) {
    v_59 = v_58;
    sub_550 = sub_551;
  } else {
    v_59 = sub_551;
    sub_550 = v_40;
  };
  if (controller_v_448) {
    sub_549 = v_43;
  } else {
    sub_549 = sub_550;
  };
  if (controller_air_failed_recovered) {
    v_37 = sub_537;
  } else {
    v_37 = sub_531;
  };
  if (controller_c_air_2) {
    v_38 = v_37;
  } else {
    v_38 = sub_530;
  };
  if (controller_c_air_1) {
    sub_553 = v_38;
  } else {
    sub_553 = sub_529;
  };
  if (controller_v_448) {
    v_60 = v_59;
  } else {
    v_60 = sub_553;
  };
  if (controller_v_450) {
    v_61 = v_60;
  } else {
    v_61 = sub_549;
  };
  if (controller_v_449) {
    v_62 = v_61;
  } else {
    v_62 = sub_526;
  };
  if (controller_v_394) {
    sub_562 = false;
  } else {
    sub_562 = sub_302;
  };
  if (controller_v_395) {
    v_30 = sub_562;
    v_29 = sub_296;
  } else {
    v_30 = sub_296;
    v_29 = sub_562;
  };
  if (controller_blind_failed_recovered) {
    sub_561 = v_29;
  } else {
    sub_561 = v_30;
  };
  if (controller_c_door) {
    v_31 = false;
    sub_560 = sub_561;
  } else {
    v_31 = sub_561;
    sub_560 = false;
  };
  if (controller_ck_11_1) {
    sub_559 = v_31;
  } else {
    sub_559 = sub_560;
  };
  if (controller_air_failed_recovered) {
    v_63 = sub_559;
  } else {
    v_63 = sub_541;
  };
  if (controller_c_air_2) {
    v_64 = v_63;
  } else {
    v_64 = sub_546;
  };
  if (controller_c_air_1) {
    v_65 = v_64;
  } else {
    v_65 = sub_551;
  };
  if (controller_air_failed_recovered) {
    v_34 = sub_559;
  } else {
    v_34 = sub_537;
  };
  if (controller_c_air_2) {
    v_35 = v_34;
  } else {
    v_35 = sub_540;
  };
  if (controller_c_air_1) {
    v_36 = v_35;
  } else {
    v_36 = sub_545;
  };
  if (controller_air_failed_recovered) {
    v_32 = sub_535;
  } else {
    v_32 = sub_559;
  };
  sub_558 = sub_559;
  if (controller_c_air_2) {
    v_33 = v_32;
  } else {
    v_33 = sub_558;
  };
  sub_557 = sub_558;
  if (controller_c_air_1) {
    sub_556 = sub_557;
  } else {
    sub_556 = v_33;
  };
  if (controller_v_448) {
    sub_555 = v_36;
  } else {
    sub_555 = sub_556;
  };
  if (controller_v_450) {
    sub_554 = sub_547;
  } else {
    sub_554 = sub_555;
  };
  if (controller_air_failed_recovered) {
    v_26 = sub_541;
  } else {
    v_26 = sub_559;
  };
  if (controller_c_air_2) {
    v_27 = v_26;
  } else {
    v_27 = sub_558;
  };
  if (controller_c_air_1) {
    v_28 = v_27;
  } else {
    v_28 = sub_557;
  };
  if (controller_air_failed_recovered) {
    v_24 = sub_559;
  } else {
    v_24 = sub_535;
  };
  if (controller_c_air_2) {
    v_25 = v_24;
  } else {
    v_25 = sub_540;
  };
  if (controller_c_air_1) {
    sub_564 = sub_551;
  } else {
    sub_564 = v_25;
  };
  if (controller_v_448) {
    sub_563 = v_28;
  } else {
    sub_563 = sub_564;
  };
  if (controller_air_failed_recovered) {
    v_22 = sub_537;
  } else {
    v_22 = sub_559;
  };
  if (controller_c_air_2) {
    v_23 = v_22;
  } else {
    v_23 = sub_558;
  };
  if (controller_c_air_1) {
    sub_565 = v_23;
  } else {
    sub_565 = sub_557;
  };
  if (controller_v_448) {
    v_66 = v_65;
  } else {
    v_66 = sub_565;
  };
  if (controller_v_450) {
    v_67 = v_66;
  } else {
    v_67 = sub_563;
  };
  if (controller_v_449) {
    v_68 = v_67;
  } else {
    v_68 = sub_554;
  };
  if (controller_blind_switch) {
    v_69 = v_62;
  } else {
    v_69 = v_68;
  };
  if (controller_v_394) {
    v_10 = sub_302;
  } else {
    v_10 = false;
  };
  if (controller_v_395) {
    sub_575 = v_10;
  } else {
    sub_575 = sub_296;
  };
  sub_574 = sub_575;
  if (controller_c_door) {
    v_11 = false;
    sub_573 = sub_574;
  } else {
    v_11 = sub_574;
    sub_573 = false;
  };
  if (controller_ck_11_1) {
    sub_572 = v_11;
  } else {
    sub_572 = sub_573;
  };
  if (controller_air_failed_recovered) {
    v_17 = sub_572;
  } else {
    v_17 = sub_541;
  };
  if (controller_c_air_2) {
    v_18 = v_17;
  } else {
    v_18 = sub_546;
  };
  if (controller_c_air_1) {
    v_19 = v_18;
  } else {
    v_19 = sub_551;
  };
  if (controller_air_failed_recovered) {
    v_14 = sub_572;
  } else {
    v_14 = sub_537;
  };
  if (controller_c_air_2) {
    v_15 = v_14;
  } else {
    v_15 = sub_540;
  };
  if (controller_c_air_1) {
    v_16 = v_15;
  } else {
    v_16 = sub_545;
  };
  if (controller_air_failed_recovered) {
    v_12 = sub_535;
  } else {
    v_12 = sub_572;
  };
  sub_571 = sub_572;
  if (controller_c_air_2) {
    v_13 = v_12;
  } else {
    v_13 = sub_571;
  };
  sub_570 = sub_571;
  if (controller_c_air_1) {
    sub_569 = sub_570;
  } else {
    sub_569 = v_13;
  };
  if (controller_v_448) {
    sub_568 = v_16;
  } else {
    sub_568 = sub_569;
  };
  if (controller_v_450) {
    sub_567 = sub_547;
  } else {
    sub_567 = sub_568;
  };
  if (controller_air_failed_recovered) {
    v_7 = sub_541;
  } else {
    v_7 = sub_572;
  };
  if (controller_c_air_2) {
    v_8 = v_7;
  } else {
    v_8 = sub_571;
  };
  if (controller_c_air_1) {
    v_9 = v_8;
  } else {
    v_9 = sub_570;
  };
  if (controller_air_failed_recovered) {
    v_5 = sub_572;
  } else {
    v_5 = sub_535;
  };
  if (controller_c_air_2) {
    v_6 = v_5;
  } else {
    v_6 = sub_540;
  };
  if (controller_c_air_1) {
    sub_577 = sub_551;
  } else {
    sub_577 = v_6;
  };
  if (controller_v_448) {
    sub_576 = v_9;
  } else {
    sub_576 = sub_577;
  };
  if (controller_air_failed_recovered) {
    v_3 = sub_537;
  } else {
    v_3 = sub_572;
  };
  if (controller_c_air_2) {
    v_4 = v_3;
  } else {
    v_4 = sub_571;
  };
  if (controller_c_air_1) {
    sub_578 = v_4;
  } else {
    sub_578 = sub_570;
  };
  if (controller_v_448) {
    v_20 = v_19;
  } else {
    v_20 = sub_578;
  };
  if (controller_v_450) {
    v_21 = v_20;
  } else {
    v_21 = sub_576;
  };
  if (controller_v_449) {
    sub_566 = v_21;
  } else {
    sub_566 = sub_567;
  };
  if (controller_c_blind_1) {
    sub_525 = v_69;
  } else {
    sub_525 = sub_566;
  };
  if (controller_v_410) {
    v_233 = sub_525;
  } else {
    v_233 = sub_462;
  };
  if (controller_v_411) {
    sub_351 = v_233;
  } else {
    sub_351 = sub_352;
  };
  sub_350 = sub_351;
  if (controller_v_410) {
    sub_580 = sub_462;
  } else {
    sub_580 = sub_525;
  };
  if (controller_v_411) {
    v_1 = sub_580;
    v = sub_352;
  } else {
    v_1 = sub_352;
    v = sub_580;
  };
  if (controller_light_failed_recovered) {
    v_2 = v;
  } else {
    v_2 = v_1;
  };
  if (controller_c_light_1) {
    sub_579 = v_2;
  } else {
    sub_579 = sub_350;
  };
  if (controller_light_switch) {
    v_499 = sub_350;
  } else {
    v_499 = sub_579;
  };
  if (controller_c_light_2) {
    v_500 = v_499;
  } else {
    v_500 = sub_579;
  };
  if (p_controller_c_blind_2) {
    sub_0 = v_500;
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
  int controller_pnr_3, int controller_v_450, int controller_v_449,
  int controller_v_448, int controller_pnr_2, int controller_v_411,
  int controller_v_410, int controller_pnr_1, int controller_v_395,
  int controller_v_394, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_light_2, int controller_c_light_1,
  int controller_c_closet, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_blind_1_out* _out) {
  
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
  v_767 = !(controller_ck_17_1);
  sub_22 = (v_767&&false);
  sub_23 = (controller_ck_17_1&&false);
  if (controller_cleaner) {
    sub_21 = sub_22;
  } else {
    sub_21 = sub_23;
  };
  sub_24 = false;
  if (controller_worker) {
    v_768 = sub_24;
    sub_20 = sub_21;
  } else {
    v_768 = sub_21;
    sub_20 = sub_24;
  };
  if (controller_ck_15_1) {
    sub_19 = v_768;
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
  sub_27 = sub_24;
  if (controller_cleaner) {
    sub_30 = sub_23;
  } else {
    sub_30 = sub_22;
  };
  if (controller_worker) {
    sub_29 = sub_30;
    sub_31 = false;
  } else {
    sub_29 = false;
    sub_31 = sub_30;
  };
  if (controller_ck_15_1) {
    sub_28 = sub_31;
  } else {
    sub_28 = sub_29;
  };
  if (controller_change_shift) {
    v_769 = sub_28;
    sub_26 = sub_27;
  } else {
    v_769 = sub_27;
    sub_26 = sub_28;
  };
  if (controller_ck_1) {
    v_770 = v_769;
  } else {
    v_770 = sub_26;
  };
  if (controller_c_pc) {
    sub_16 = sub_17;
  } else {
    sub_16 = v_770;
  };
  sub_33 = sub_19;
  sub_32 = sub_33;
  if (controller_c_window) {
    sub_15 = sub_16;
  } else {
    sub_15 = sub_32;
  };
  sub_14 = sub_15;
  sub_41 = (controller_ck_17_1||false);
  v_762 = !(controller_ck_17_1);
  sub_42 = (v_762||false);
  if (controller_cleaner) {
    sub_40 = sub_41;
  } else {
    sub_40 = sub_42;
  };
  sub_43 = true;
  if (controller_worker) {
    v_763 = sub_43;
    sub_39 = sub_40;
  } else {
    v_763 = sub_40;
    sub_39 = sub_43;
  };
  if (controller_ck_15_1) {
    sub_38 = v_763;
  } else {
    sub_38 = sub_39;
  };
  if (controller_change_shift) {
    sub_37 = sub_38;
    sub_44 = false;
  } else {
    sub_37 = false;
    sub_44 = sub_38;
  };
  if (controller_ck_1) {
    sub_36 = sub_44;
  } else {
    sub_36 = sub_37;
  };
  sub_49 = controller_ck_17_1;
  sub_50 = !(controller_ck_17_1);
  if (controller_cleaner) {
    sub_48 = sub_49;
  } else {
    sub_48 = sub_50;
  };
  if (controller_worker) {
    v_761 = sub_43;
    sub_47 = sub_48;
  } else {
    v_761 = sub_48;
    sub_47 = sub_43;
  };
  if (controller_ck_15_1) {
    sub_46 = v_761;
  } else {
    sub_46 = sub_47;
  };
  if (controller_change_shift) {
    v_764 = sub_28;
    sub_45 = sub_46;
  } else {
    v_764 = sub_46;
    sub_45 = sub_28;
  };
  if (controller_ck_1) {
    v_765 = v_764;
  } else {
    v_765 = sub_45;
  };
  if (controller_c_pc) {
    v_766 = sub_36;
  } else {
    v_766 = v_765;
  };
  sub_52 = sub_38;
  sub_51 = sub_52;
  if (controller_c_window) {
    sub_35 = v_766;
  } else {
    sub_35 = sub_51;
  };
  sub_34 = sub_35;
  sub_56 = sub_43;
  if (controller_cleaner) {
    sub_59 = sub_42;
  } else {
    sub_59 = sub_41;
  };
  if (controller_worker) {
    sub_58 = sub_59;
    sub_60 = false;
  } else {
    sub_58 = false;
    sub_60 = sub_59;
  };
  if (controller_ck_15_1) {
    sub_57 = sub_60;
  } else {
    sub_57 = sub_58;
  };
  if (controller_change_shift) {
    v_759 = sub_57;
    sub_55 = sub_56;
  } else {
    v_759 = sub_56;
    sub_55 = sub_57;
  };
  if (controller_ck_1) {
    v_760 = v_759;
  } else {
    v_760 = sub_55;
  };
  if (controller_c_pc) {
    sub_54 = sub_36;
  } else {
    sub_54 = v_760;
  };
  if (controller_c_window) {
    sub_53 = sub_54;
  } else {
    sub_53 = sub_32;
  };
  if (controller_v_394) {
    v_771 = sub_53;
  } else {
    v_771 = sub_34;
  };
  if (controller_v_395) {
    v_772 = v_771;
  } else {
    v_772 = sub_14;
  };
  if (controller_c_pc) {
    sub_64 = false;
  } else {
    sub_64 = sub_28;
  };
  if (controller_c_window) {
    sub_63 = sub_64;
  } else {
    sub_63 = sub_51;
  };
  sub_62 = sub_63;
  if (controller_c_pc) {
    sub_66 = false;
  } else {
    sub_66 = sub_57;
  };
  if (controller_c_window) {
    sub_65 = sub_66;
  } else {
    sub_65 = sub_32;
  };
  if (controller_v_394) {
    sub_61 = sub_65;
  } else {
    sub_61 = sub_62;
  };
  if (controller_v_395) {
    v_773 = sub_61;
  } else {
    v_773 = sub_14;
  };
  if (controller_blind_failed_recovered) {
    sub_13 = v_772;
  } else {
    sub_13 = v_773;
  };
  if (controller_c_window) {
    sub_70 = sub_64;
  } else {
    sub_70 = false;
  };
  sub_69 = sub_70;
  if (controller_c_window) {
    sub_73 = sub_66;
  } else {
    sub_73 = false;
  };
  sub_72 = sub_73;
  if (controller_v_394) {
    sub_71 = sub_72;
  } else {
    sub_71 = sub_69;
  };
  if (controller_v_395) {
    sub_68 = sub_71;
  } else {
    sub_68 = sub_69;
  };
  sub_67 = sub_68;
  if (controller_c_door) {
    v_774 = sub_67;
    sub_12 = sub_13;
  } else {
    v_774 = sub_13;
    sub_12 = sub_67;
  };
  if (controller_ck_11_1) {
    sub_11 = v_774;
  } else {
    sub_11 = sub_12;
  };
  sub_10 = sub_11;
  sub_9 = sub_10;
  if (controller_ck_15_1) {
    sub_80 = sub_29;
  } else {
    sub_80 = sub_31;
  };
  if (controller_change_shift) {
    sub_79 = false;
    sub_81 = sub_80;
  } else {
    sub_79 = sub_80;
    sub_81 = false;
  };
  if (controller_ck_1) {
    sub_78 = sub_81;
  } else {
    sub_78 = sub_79;
  };
  sub_82 = sub_30;
  if (controller_c_pc) {
    v_755 = sub_78;
  } else {
    v_755 = sub_82;
  };
  sub_84 = sub_80;
  sub_83 = sub_84;
  if (controller_c_window) {
    sub_77 = v_755;
  } else {
    sub_77 = sub_83;
  };
  sub_76 = sub_77;
  if (controller_ck_15_1) {
    sub_89 = sub_58;
  } else {
    sub_89 = sub_60;
  };
  if (controller_change_shift) {
    sub_88 = false;
    sub_90 = sub_89;
  } else {
    sub_88 = sub_89;
    sub_90 = false;
  };
  if (controller_ck_1) {
    sub_87 = sub_90;
  } else {
    sub_87 = sub_88;
  };
  if (controller_worker) {
    sub_92 = sub_30;
    sub_93 = sub_59;
  } else {
    sub_92 = sub_59;
    sub_93 = sub_30;
  };
  if (controller_ck_15_1) {
    sub_91 = sub_93;
  } else {
    sub_91 = sub_92;
  };
  if (controller_c_pc) {
    v_754 = sub_87;
  } else {
    v_754 = sub_91;
  };
  sub_95 = sub_89;
  sub_94 = sub_95;
  if (controller_c_window) {
    sub_86 = v_754;
  } else {
    sub_86 = sub_94;
  };
  sub_85 = sub_86;
  if (controller_ck_15_1) {
    sub_98 = sub_92;
  } else {
    sub_98 = sub_93;
  };
  sub_99 = sub_59;
  if (controller_change_shift) {
    v_751 = sub_99;
    sub_97 = sub_98;
  } else {
    v_751 = sub_98;
    sub_97 = sub_99;
  };
  if (controller_ck_1) {
    v_752 = v_751;
  } else {
    v_752 = sub_97;
  };
  if (controller_c_pc) {
    v_753 = sub_87;
  } else {
    v_753 = v_752;
  };
  if (controller_change_shift) {
    sub_102 = sub_80;
    sub_103 = sub_89;
  } else {
    sub_102 = sub_89;
    sub_103 = sub_80;
  };
  if (controller_ck_1) {
    sub_101 = sub_103;
  } else {
    sub_101 = sub_102;
  };
  sub_100 = sub_101;
  if (controller_c_window) {
    sub_96 = v_753;
  } else {
    sub_96 = sub_100;
  };
  if (controller_v_394) {
    v_756 = sub_96;
  } else {
    v_756 = sub_85;
  };
  if (controller_v_395) {
    v_757 = v_756;
  } else {
    v_757 = sub_76;
  };
  if (controller_change_shift) {
    v_748 = sub_28;
    sub_107 = sub_91;
  } else {
    v_748 = sub_91;
    sub_107 = sub_28;
  };
  if (controller_ck_1) {
    v_749 = v_748;
  } else {
    v_749 = sub_107;
  };
  if (controller_c_pc) {
    v_750 = false;
  } else {
    v_750 = v_749;
  };
  if (controller_ck_1) {
    sub_109 = sub_88;
  } else {
    sub_109 = sub_90;
  };
  sub_108 = sub_109;
  if (controller_c_window) {
    sub_106 = v_750;
  } else {
    sub_106 = sub_108;
  };
  sub_105 = sub_106;
  if (controller_change_shift) {
    v_745 = sub_57;
    sub_111 = sub_98;
  } else {
    v_745 = sub_98;
    sub_111 = sub_57;
  };
  if (controller_ck_1) {
    v_746 = v_745;
  } else {
    v_746 = sub_111;
  };
  if (controller_c_pc) {
    v_747 = false;
  } else {
    v_747 = v_746;
  };
  if (controller_ck_1) {
    sub_113 = sub_79;
  } else {
    sub_113 = sub_81;
  };
  sub_112 = sub_113;
  if (controller_c_window) {
    sub_110 = v_747;
  } else {
    sub_110 = sub_112;
  };
  if (controller_v_394) {
    sub_104 = sub_110;
  } else {
    sub_104 = sub_105;
  };
  if (controller_v_395) {
    v_758 = sub_104;
  } else {
    v_758 = sub_76;
  };
  if (controller_blind_failed_recovered) {
    sub_75 = v_757;
  } else {
    sub_75 = v_758;
  };
  sub_74 = sub_75;
  if (controller_air_failed_recovered) {
    v_775 = sub_74;
  } else {
    v_775 = sub_11;
  };
  if (controller_c_air_2) {
    v_776 = v_775;
  } else {
    v_776 = sub_10;
  };
  if (controller_c_air_1) {
    sub_8 = sub_9;
  } else {
    sub_8 = v_776;
  };
  if (controller_c_pc) {
    sub_118 = sub_84;
  } else {
    sub_118 = sub_33;
  };
  if (controller_c_closet) {
    sub_117 = sub_83;
  } else {
    sub_117 = sub_118;
  };
  if (controller_c_pc) {
    sub_121 = sub_95;
  } else {
    sub_121 = sub_52;
  };
  if (controller_c_closet) {
    sub_120 = sub_94;
  } else {
    sub_120 = sub_121;
  };
  if (controller_v_394) {
    sub_119 = sub_117;
  } else {
    sub_119 = sub_120;
  };
  if (controller_v_395) {
    sub_116 = sub_119;
  } else {
    sub_116 = sub_117;
  };
  sub_115 = sub_116;
  sub_114 = sub_115;
  if (controller_air_failed_recovered) {
    v_777 = sub_11;
  } else {
    v_777 = sub_114;
  };
  if (controller_change_shift) {
    v_739 = sub_80;
    sub_127 = sub_82;
  } else {
    v_739 = sub_82;
    sub_127 = sub_80;
  };
  if (controller_ck_1) {
    v_740 = v_739;
  } else {
    v_740 = sub_127;
  };
  if (controller_c_pc) {
    v_741 = sub_78;
  } else {
    v_741 = v_740;
  };
  if (controller_c_window) {
    sub_126 = v_741;
  } else {
    sub_126 = sub_83;
  };
  sub_125 = sub_126;
  if (controller_change_shift) {
    v_736 = sub_89;
    sub_130 = sub_91;
  } else {
    v_736 = sub_91;
    sub_130 = sub_89;
  };
  if (controller_ck_1) {
    v_737 = v_736;
  } else {
    v_737 = sub_130;
  };
  if (controller_c_pc) {
    v_738 = sub_87;
  } else {
    v_738 = v_737;
  };
  if (controller_c_window) {
    sub_129 = v_738;
  } else {
    sub_129 = sub_94;
  };
  sub_128 = sub_129;
  if (controller_change_shift) {
    v_733 = sub_89;
    sub_132 = sub_98;
  } else {
    v_733 = sub_98;
    sub_132 = sub_89;
  };
  if (controller_ck_1) {
    v_734 = v_733;
  } else {
    v_734 = sub_132;
  };
  if (controller_c_pc) {
    v_735 = sub_87;
  } else {
    v_735 = v_734;
  };
  if (controller_c_window) {
    sub_131 = v_735;
  } else {
    sub_131 = sub_100;
  };
  if (controller_v_394) {
    v_742 = sub_131;
  } else {
    v_742 = sub_128;
  };
  if (controller_v_395) {
    v_743 = v_742;
  } else {
    v_743 = sub_125;
  };
  if (controller_change_shift) {
    v_730 = false;
    sub_136 = sub_91;
  } else {
    v_730 = sub_91;
    sub_136 = false;
  };
  if (controller_ck_1) {
    v_731 = v_730;
  } else {
    v_731 = sub_136;
  };
  if (controller_c_pc) {
    v_732 = false;
  } else {
    v_732 = v_731;
  };
  if (controller_c_window) {
    sub_135 = v_732;
  } else {
    sub_135 = sub_108;
  };
  sub_134 = sub_135;
  if (controller_change_shift) {
    v_727 = false;
    sub_138 = sub_98;
  } else {
    v_727 = sub_98;
    sub_138 = false;
  };
  if (controller_ck_1) {
    v_728 = v_727;
  } else {
    v_728 = sub_138;
  };
  if (controller_c_pc) {
    v_729 = false;
  } else {
    v_729 = v_728;
  };
  if (controller_c_window) {
    sub_137 = v_729;
  } else {
    sub_137 = sub_112;
  };
  if (controller_v_394) {
    sub_133 = sub_137;
  } else {
    sub_133 = sub_134;
  };
  if (controller_v_395) {
    v_744 = sub_133;
  } else {
    v_744 = sub_125;
  };
  if (controller_blind_failed_recovered) {
    sub_124 = v_743;
  } else {
    sub_124 = v_744;
  };
  sub_123 = sub_124;
  if (controller_air_failed_recovered) {
    v_780 = sub_11;
  } else {
    v_780 = sub_123;
  };
  sub_122 = sub_123;
  if (controller_c_air_2) {
    v_778 = v_777;
  } else {
    v_778 = sub_122;
  };
  sub_139 = sub_74;
  if (controller_c_air_2) {
    v_781 = v_780;
  } else {
    v_781 = sub_139;
  };
  if (controller_c_air_1) {
    v_779 = v_778;
  } else {
    v_779 = sub_139;
  };
  if (controller_v_448) {
    sub_7 = v_779;
  } else {
    sub_7 = sub_8;
  };
  sub_140 = sub_122;
  if (controller_v_450) {
    sub_6 = sub_140;
  } else {
    sub_6 = sub_7;
  };
  if (controller_air_failed_recovered) {
    v_724 = sub_123;
  } else {
    v_724 = sub_11;
  };
  if (controller_c_air_2) {
    v_725 = v_724;
  } else {
    v_725 = sub_10;
  };
  if (controller_c_air_1) {
    v_726 = v_725;
  } else {
    v_726 = sub_9;
  };
  if (controller_air_failed_recovered) {
    v_722 = sub_11;
  } else {
    v_722 = sub_74;
  };
  if (controller_c_air_2) {
    v_723 = v_722;
  } else {
    v_723 = sub_122;
  };
  sub_144 = sub_114;
  sub_143 = sub_144;
  if (controller_c_air_1) {
    v_782 = v_781;
    sub_142 = sub_143;
  } else {
    v_782 = sub_143;
    sub_142 = v_723;
  };
  if (controller_v_448) {
    sub_141 = v_726;
  } else {
    sub_141 = sub_142;
  };
  if (controller_air_failed_recovered) {
    v_720 = sub_114;
  } else {
    v_720 = sub_11;
  };
  if (controller_c_air_2) {
    v_721 = v_720;
  } else {
    v_721 = sub_10;
  };
  if (controller_c_air_1) {
    sub_145 = v_721;
  } else {
    sub_145 = sub_9;
  };
  if (controller_v_448) {
    v_783 = v_782;
  } else {
    v_783 = sub_145;
  };
  if (controller_v_450) {
    v_784 = v_783;
  } else {
    v_784 = sub_141;
  };
  if (controller_v_449) {
    sub_5 = v_784;
  } else {
    sub_5 = sub_6;
  };
  sub_4 = sub_5;
  if (controller_ck_1) {
    sub_160 = sub_18;
  } else {
    sub_160 = sub_25;
  };
  sub_159 = sub_160;
  if (controller_c_window) {
    sub_158 = sub_64;
  } else {
    sub_158 = sub_159;
  };
  sub_157 = sub_158;
  if (controller_ck_1) {
    sub_165 = sub_37;
  } else {
    sub_165 = sub_44;
  };
  sub_164 = sub_165;
  if (controller_c_window) {
    sub_163 = sub_64;
  } else {
    sub_163 = sub_164;
  };
  sub_162 = sub_163;
  if (controller_c_window) {
    sub_166 = sub_66;
  } else {
    sub_166 = sub_159;
  };
  if (controller_v_394) {
    sub_161 = sub_166;
  } else {
    sub_161 = sub_162;
  };
  if (controller_v_395) {
    sub_156 = sub_161;
  } else {
    sub_156 = sub_157;
  };
  sub_155 = sub_156;
  if (controller_c_door) {
    v_709 = sub_67;
    sub_154 = sub_155;
  } else {
    v_709 = sub_155;
    sub_154 = sub_67;
  };
  if (controller_ck_11_1) {
    sub_153 = v_709;
  } else {
    sub_153 = sub_154;
  };
  if (controller_air_failed_recovered) {
    v_712 = sub_153;
  } else {
    v_712 = false;
  };
  sub_152 = sub_153;
  sub_151 = sub_152;
  sub_167 = sub_67;
  if (controller_air_failed_recovered) {
    v_710 = sub_167;
  } else {
    v_710 = sub_153;
  };
  if (controller_c_air_2) {
    v_711 = v_710;
  } else {
    v_711 = sub_152;
  };
  if (controller_c_air_1) {
    sub_150 = sub_151;
  } else {
    sub_150 = v_711;
  };
  if (controller_change_shift) {
    v_706 = false;
    sub_174 = sub_28;
  } else {
    v_706 = sub_28;
    sub_174 = false;
  };
  if (controller_ck_1) {
    v_707 = v_706;
  } else {
    v_707 = sub_174;
  };
  if (controller_c_pc) {
    v_708 = false;
  } else {
    v_708 = v_707;
  };
  if (controller_c_window) {
    sub_173 = v_708;
  } else {
    sub_173 = false;
  };
  sub_172 = sub_173;
  if (controller_change_shift) {
    v_703 = false;
    sub_178 = sub_57;
  } else {
    v_703 = sub_57;
    sub_178 = false;
  };
  if (controller_ck_1) {
    v_704 = v_703;
  } else {
    v_704 = sub_178;
  };
  if (controller_c_pc) {
    v_705 = false;
  } else {
    v_705 = v_704;
  };
  if (controller_c_window) {
    sub_177 = v_705;
  } else {
    sub_177 = false;
  };
  sub_176 = sub_177;
  if (controller_v_394) {
    sub_175 = sub_176;
  } else {
    sub_175 = sub_172;
  };
  if (controller_v_395) {
    sub_171 = sub_175;
  } else {
    sub_171 = sub_172;
  };
  sub_170 = sub_171;
  sub_169 = sub_170;
  if (controller_air_failed_recovered) {
    v_715 = sub_153;
  } else {
    v_715 = sub_169;
  };
  sub_168 = sub_169;
  if (controller_c_air_2) {
    v_713 = v_712;
  } else {
    v_713 = sub_168;
  };
  sub_179 = sub_167;
  if (controller_c_air_2) {
    v_716 = v_715;
  } else {
    v_716 = sub_179;
  };
  if (controller_c_air_1) {
    v_717 = v_716;
    v_714 = v_713;
  } else {
    v_717 = false;
    v_714 = sub_179;
  };
  if (controller_v_448) {
    sub_149 = v_714;
  } else {
    sub_149 = sub_150;
  };
  sub_180 = sub_168;
  if (controller_v_450) {
    sub_148 = sub_180;
  } else {
    sub_148 = sub_149;
  };
  if (controller_air_failed_recovered) {
    v_700 = sub_169;
  } else {
    v_700 = sub_153;
  };
  if (controller_c_air_2) {
    v_701 = v_700;
  } else {
    v_701 = sub_152;
  };
  if (controller_c_air_1) {
    v_702 = v_701;
  } else {
    v_702 = sub_151;
  };
  if (controller_air_failed_recovered) {
    v_698 = sub_153;
  } else {
    v_698 = sub_167;
  };
  if (controller_c_air_2) {
    v_699 = v_698;
  } else {
    v_699 = sub_168;
  };
  if (controller_c_air_1) {
    sub_182 = false;
  } else {
    sub_182 = v_699;
  };
  if (controller_v_448) {
    sub_181 = v_702;
  } else {
    sub_181 = sub_182;
  };
  if (controller_air_failed_recovered) {
    v_696 = false;
  } else {
    v_696 = sub_153;
  };
  if (controller_c_air_2) {
    v_697 = v_696;
  } else {
    v_697 = sub_152;
  };
  if (controller_c_air_1) {
    sub_183 = v_697;
  } else {
    sub_183 = sub_151;
  };
  if (controller_v_448) {
    v_718 = v_717;
  } else {
    v_718 = sub_183;
  };
  if (controller_v_450) {
    v_719 = v_718;
  } else {
    v_719 = sub_181;
  };
  if (controller_v_449) {
    sub_147 = v_719;
  } else {
    sub_147 = sub_148;
  };
  sub_146 = sub_147;
  sub_196 = sub_17;
  if (controller_c_window) {
    sub_195 = sub_196;
  } else {
    sub_195 = sub_32;
  };
  sub_194 = sub_195;
  sub_199 = sub_36;
  if (controller_c_window) {
    sub_198 = sub_199;
  } else {
    sub_198 = sub_51;
  };
  sub_197 = sub_198;
  if (controller_c_window) {
    sub_200 = sub_199;
  } else {
    sub_200 = sub_32;
  };
  if (controller_v_394) {
    v_682 = sub_200;
  } else {
    v_682 = sub_197;
  };
  if (controller_v_395) {
    v_683 = v_682;
  } else {
    v_683 = sub_194;
  };
  if (controller_c_window) {
    sub_203 = false;
  } else {
    sub_203 = sub_51;
  };
  sub_202 = sub_203;
  if (controller_c_window) {
    sub_204 = false;
  } else {
    sub_204 = sub_32;
  };
  if (controller_v_394) {
    sub_201 = sub_204;
  } else {
    sub_201 = sub_202;
  };
  if (controller_v_395) {
    v_684 = sub_201;
  } else {
    v_684 = sub_194;
  };
  if (controller_blind_failed_recovered) {
    sub_193 = v_683;
  } else {
    sub_193 = v_684;
  };
  if (controller_c_door) {
    v_685 = false;
    sub_192 = sub_193;
  } else {
    v_685 = sub_193;
    sub_192 = false;
  };
  if (controller_ck_11_1) {
    sub_191 = v_685;
  } else {
    sub_191 = sub_192;
  };
  sub_190 = sub_191;
  sub_189 = sub_190;
  if (controller_c_pc) {
    v_681 = false;
  } else {
    v_681 = sub_113;
  };
  if (controller_c_window) {
    sub_208 = v_681;
  } else {
    sub_208 = sub_112;
  };
  sub_207 = sub_208;
  sub_206 = sub_207;
  sub_205 = sub_206;
  if (controller_air_failed_recovered) {
    v_686 = sub_205;
  } else {
    v_686 = sub_191;
  };
  if (controller_c_air_2) {
    v_687 = v_686;
  } else {
    v_687 = sub_190;
  };
  if (controller_c_air_1) {
    sub_188 = sub_189;
  } else {
    sub_188 = v_687;
  };
  if (controller_c_pc) {
    v_679 = sub_78;
  } else {
    v_679 = sub_33;
  };
  if (controller_c_window) {
    v_680 = v_679;
  } else {
    v_680 = sub_118;
  };
  if (controller_c_pc) {
    v_677 = sub_78;
  } else {
    v_677 = sub_84;
  };
  if (controller_c_window) {
    v_678 = v_677;
  } else {
    v_678 = sub_83;
  };
  if (controller_c_closet) {
    sub_211 = v_678;
  } else {
    sub_211 = v_680;
  };
  sub_210 = sub_211;
  sub_209 = sub_210;
  if (controller_air_failed_recovered) {
    v_688 = sub_191;
  } else {
    v_688 = sub_209;
  };
  sub_216 = sub_112;
  sub_215 = sub_216;
  sub_214 = sub_215;
  sub_213 = sub_214;
  if (controller_air_failed_recovered) {
    v_691 = sub_191;
  } else {
    v_691 = sub_213;
  };
  sub_212 = sub_213;
  if (controller_c_air_2) {
    v_689 = v_688;
  } else {
    v_689 = sub_212;
  };
  sub_217 = sub_205;
  if (controller_c_air_2) {
    v_692 = v_691;
  } else {
    v_692 = sub_217;
  };
  if (controller_c_air_1) {
    v_690 = v_689;
  } else {
    v_690 = sub_217;
  };
  if (controller_v_448) {
    sub_187 = v_690;
  } else {
    sub_187 = sub_188;
  };
  sub_218 = sub_212;
  if (controller_v_450) {
    sub_186 = sub_218;
  } else {
    sub_186 = sub_187;
  };
  if (controller_air_failed_recovered) {
    v_674 = sub_213;
  } else {
    v_674 = sub_191;
  };
  if (controller_c_air_2) {
    v_675 = v_674;
  } else {
    v_675 = sub_190;
  };
  if (controller_c_air_1) {
    v_676 = v_675;
  } else {
    v_676 = sub_189;
  };
  if (controller_air_failed_recovered) {
    v_672 = sub_191;
  } else {
    v_672 = sub_205;
  };
  if (controller_c_air_2) {
    v_673 = v_672;
  } else {
    v_673 = sub_212;
  };
  sub_222 = sub_209;
  sub_221 = sub_222;
  if (controller_c_air_1) {
    v_693 = v_692;
    sub_220 = sub_221;
  } else {
    v_693 = sub_221;
    sub_220 = v_673;
  };
  if (controller_v_448) {
    sub_219 = v_676;
  } else {
    sub_219 = sub_220;
  };
  if (controller_air_failed_recovered) {
    v_670 = sub_209;
  } else {
    v_670 = sub_191;
  };
  if (controller_c_air_2) {
    v_671 = v_670;
  } else {
    v_671 = sub_190;
  };
  if (controller_c_air_1) {
    sub_223 = v_671;
  } else {
    sub_223 = sub_189;
  };
  if (controller_v_448) {
    v_694 = v_693;
  } else {
    v_694 = sub_223;
  };
  if (controller_v_450) {
    v_695 = v_694;
  } else {
    v_695 = sub_219;
  };
  if (controller_v_449) {
    sub_185 = v_695;
  } else {
    sub_185 = sub_186;
  };
  sub_184 = sub_185;
  if (controller_v_410) {
    v_785 = sub_184;
  } else {
    v_785 = sub_146;
  };
  if (controller_v_411) {
    sub_3 = v_785;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  if (controller_v_410) {
    sub_225 = sub_146;
  } else {
    sub_225 = sub_184;
  };
  if (controller_v_411) {
    v_668 = sub_225;
    v_667 = sub_4;
  } else {
    v_668 = sub_4;
    v_667 = sub_225;
  };
  if (controller_light_failed_recovered) {
    v_669 = v_667;
  } else {
    v_669 = v_668;
  };
  if (controller_c_light_1) {
    sub_224 = v_669;
  } else {
    sub_224 = sub_2;
  };
  if (controller_light_switch) {
    v_786 = sub_2;
  } else {
    v_786 = sub_224;
  };
  if (controller_c_light_2) {
    sub_1 = v_786;
  } else {
    sub_1 = sub_224;
  };
  if (controller_c_window) {
    sub_238 = sub_54;
  } else {
    sub_238 = sub_51;
  };
  sub_237 = sub_238;
  if (controller_c_window) {
    sub_239 = sub_66;
  } else {
    sub_239 = sub_51;
  };
  if (controller_v_395) {
    v_647 = sub_239;
  } else {
    v_647 = sub_237;
  };
  if (controller_blind_failed_recovered) {
    sub_236 = sub_237;
  } else {
    sub_236 = v_647;
  };
  sub_240 = sub_72;
  if (controller_c_door) {
    v_648 = sub_240;
    sub_235 = sub_236;
  } else {
    v_648 = sub_236;
    sub_235 = sub_240;
  };
  if (controller_ck_11_1) {
    sub_234 = v_648;
  } else {
    sub_234 = sub_235;
  };
  sub_233 = sub_234;
  sub_232 = sub_233;
  if (controller_c_pc) {
    v_645 = sub_87;
  } else {
    v_645 = sub_99;
  };
  if (controller_c_window) {
    sub_244 = v_645;
  } else {
    sub_244 = sub_94;
  };
  sub_243 = sub_244;
  if (controller_change_shift) {
    v_642 = sub_57;
    sub_246 = sub_99;
  } else {
    v_642 = sub_99;
    sub_246 = sub_57;
  };
  if (controller_ck_1) {
    v_643 = v_642;
  } else {
    v_643 = sub_246;
  };
  if (controller_c_pc) {
    v_644 = false;
  } else {
    v_644 = v_643;
  };
  if (controller_c_window) {
    sub_245 = v_644;
  } else {
    sub_245 = sub_108;
  };
  if (controller_v_395) {
    v_646 = sub_245;
  } else {
    v_646 = sub_243;
  };
  if (controller_blind_failed_recovered) {
    sub_242 = sub_243;
  } else {
    sub_242 = v_646;
  };
  sub_241 = sub_242;
  if (controller_air_failed_recovered) {
    v_649 = sub_241;
  } else {
    v_649 = sub_234;
  };
  if (controller_c_air_2) {
    v_650 = v_649;
  } else {
    v_650 = sub_233;
  };
  if (controller_c_air_1) {
    sub_231 = sub_232;
  } else {
    sub_231 = v_650;
  };
  sub_248 = sub_120;
  sub_247 = sub_248;
  if (controller_air_failed_recovered) {
    v_651 = sub_234;
  } else {
    v_651 = sub_247;
  };
  if (controller_change_shift) {
    v_638 = sub_89;
    sub_254 = sub_99;
  } else {
    v_638 = sub_99;
    sub_254 = sub_89;
  };
  if (controller_ck_1) {
    v_639 = v_638;
  } else {
    v_639 = sub_254;
  };
  if (controller_c_pc) {
    v_640 = sub_87;
  } else {
    v_640 = v_639;
  };
  if (controller_c_window) {
    sub_253 = v_640;
  } else {
    sub_253 = sub_94;
  };
  sub_252 = sub_253;
  if (controller_change_shift) {
    v_635 = false;
    sub_256 = sub_99;
  } else {
    v_635 = sub_99;
    sub_256 = false;
  };
  if (controller_ck_1) {
    v_636 = v_635;
  } else {
    v_636 = sub_256;
  };
  if (controller_c_pc) {
    v_637 = false;
  } else {
    v_637 = v_636;
  };
  if (controller_c_window) {
    sub_255 = v_637;
  } else {
    sub_255 = sub_108;
  };
  if (controller_v_395) {
    v_641 = sub_255;
  } else {
    v_641 = sub_252;
  };
  if (controller_blind_failed_recovered) {
    sub_251 = sub_252;
  } else {
    sub_251 = v_641;
  };
  sub_250 = sub_251;
  if (controller_air_failed_recovered) {
    v_654 = sub_234;
  } else {
    v_654 = sub_250;
  };
  sub_249 = sub_250;
  if (controller_c_air_2) {
    v_652 = v_651;
  } else {
    v_652 = sub_249;
  };
  sub_257 = sub_241;
  if (controller_c_air_2) {
    v_655 = v_654;
  } else {
    v_655 = sub_257;
  };
  if (controller_c_air_1) {
    v_653 = v_652;
  } else {
    v_653 = sub_257;
  };
  if (controller_v_448) {
    sub_230 = v_653;
  } else {
    sub_230 = sub_231;
  };
  sub_258 = sub_249;
  if (controller_v_450) {
    sub_229 = sub_258;
  } else {
    sub_229 = sub_230;
  };
  if (controller_air_failed_recovered) {
    v_632 = sub_250;
  } else {
    v_632 = sub_234;
  };
  if (controller_c_air_2) {
    v_633 = v_632;
  } else {
    v_633 = sub_233;
  };
  if (controller_c_air_1) {
    v_634 = v_633;
  } else {
    v_634 = sub_232;
  };
  if (controller_air_failed_recovered) {
    v_630 = sub_234;
  } else {
    v_630 = sub_241;
  };
  if (controller_c_air_2) {
    v_631 = v_630;
  } else {
    v_631 = sub_249;
  };
  sub_262 = sub_247;
  sub_261 = sub_262;
  if (controller_c_air_1) {
    v_656 = v_655;
    sub_260 = sub_261;
  } else {
    v_656 = sub_261;
    sub_260 = v_631;
  };
  if (controller_v_448) {
    sub_259 = v_634;
  } else {
    sub_259 = sub_260;
  };
  if (controller_air_failed_recovered) {
    v_628 = sub_247;
  } else {
    v_628 = sub_234;
  };
  if (controller_c_air_2) {
    v_629 = v_628;
  } else {
    v_629 = sub_233;
  };
  if (controller_c_air_1) {
    sub_263 = v_629;
  } else {
    sub_263 = sub_232;
  };
  if (controller_v_448) {
    v_657 = v_656;
  } else {
    v_657 = sub_263;
  };
  if (controller_v_450) {
    v_658 = v_657;
  } else {
    v_658 = sub_259;
  };
  if (controller_v_449) {
    v_659 = v_658;
  } else {
    v_659 = sub_229;
  };
  if (controller_v_395) {
    v_621 = sub_61;
  } else {
    v_621 = sub_237;
  };
  if (controller_c_window) {
    sub_274 = sub_16;
  } else {
    sub_274 = sub_51;
  };
  sub_273 = sub_274;
  if (controller_cleaner) {
    sub_279 = sub_50;
  } else {
    sub_279 = sub_49;
  };
  if (controller_worker) {
    v_616 = sub_24;
    sub_278 = sub_279;
  } else {
    v_616 = sub_279;
    sub_278 = sub_24;
  };
  if (controller_ck_15_1) {
    sub_277 = v_616;
  } else {
    sub_277 = sub_278;
  };
  if (controller_change_shift) {
    v_617 = sub_57;
    sub_276 = sub_277;
  } else {
    v_617 = sub_277;
    sub_276 = sub_57;
  };
  if (controller_ck_1) {
    v_618 = v_617;
  } else {
    v_618 = sub_276;
  };
  if (controller_c_pc) {
    v_619 = sub_17;
  } else {
    v_619 = v_618;
  };
  if (controller_c_window) {
    sub_275 = v_619;
  } else {
    sub_275 = sub_32;
  };
  if (controller_v_394) {
    sub_272 = sub_275;
  } else {
    sub_272 = sub_273;
  };
  if (controller_v_395) {
    v_620 = sub_237;
  } else {
    v_620 = sub_272;
  };
  if (controller_blind_failed_recovered) {
    sub_271 = v_620;
  } else {
    sub_271 = v_621;
  };
  if (controller_v_395) {
    v_615 = sub_71;
    v_614 = sub_72;
  } else {
    v_615 = sub_72;
    v_614 = sub_71;
  };
  if (controller_blind_failed_recovered) {
    sub_280 = v_614;
  } else {
    sub_280 = v_615;
  };
  if (controller_c_door) {
    v_622 = sub_280;
    sub_270 = sub_271;
  } else {
    v_622 = sub_271;
    sub_270 = sub_280;
  };
  if (controller_ck_11_1) {
    sub_269 = v_622;
  } else {
    sub_269 = sub_270;
  };
  sub_268 = sub_269;
  sub_267 = sub_268;
  if (controller_v_395) {
    v_613 = sub_104;
  } else {
    v_613 = sub_243;
  };
  if (controller_change_shift) {
    v_609 = sub_82;
    sub_286 = sub_91;
  } else {
    v_609 = sub_91;
    sub_286 = sub_82;
  };
  if (controller_ck_1) {
    v_610 = v_609;
  } else {
    v_610 = sub_286;
  };
  if (controller_c_pc) {
    v_611 = sub_78;
  } else {
    v_611 = v_610;
  };
  if (controller_ck_1) {
    sub_288 = sub_102;
  } else {
    sub_288 = sub_103;
  };
  sub_287 = sub_288;
  if (controller_c_window) {
    sub_285 = v_611;
  } else {
    sub_285 = sub_287;
  };
  sub_284 = sub_285;
  if (controller_c_pc) {
    v_608 = sub_78;
  } else {
    v_608 = sub_98;
  };
  if (controller_c_window) {
    sub_289 = v_608;
  } else {
    sub_289 = sub_83;
  };
  if (controller_v_394) {
    sub_283 = sub_289;
  } else {
    sub_283 = sub_284;
  };
  if (controller_v_395) {
    v_612 = sub_243;
  } else {
    v_612 = sub_283;
  };
  if (controller_blind_failed_recovered) {
    sub_282 = v_612;
  } else {
    sub_282 = v_613;
  };
  sub_281 = sub_282;
  if (controller_air_failed_recovered) {
    v_623 = sub_281;
  } else {
    v_623 = sub_269;
  };
  if (controller_c_air_2) {
    v_624 = v_623;
  } else {
    v_624 = sub_268;
  };
  if (controller_c_air_1) {
    sub_266 = sub_267;
  } else {
    sub_266 = v_624;
  };
  if (controller_v_395) {
    v_607 = sub_119;
    v_606 = sub_120;
  } else {
    v_607 = sub_120;
    v_606 = sub_119;
  };
  if (controller_blind_failed_recovered) {
    sub_291 = v_606;
  } else {
    sub_291 = v_607;
  };
  sub_290 = sub_291;
  if (controller_air_failed_recovered) {
    v_625 = sub_269;
  } else {
    v_625 = sub_290;
  };
  if (controller_v_395) {
    v_605 = sub_133;
  } else {
    v_605 = sub_252;
  };
  if (controller_change_shift) {
    v_601 = sub_80;
    sub_298 = sub_91;
  } else {
    v_601 = sub_91;
    sub_298 = sub_80;
  };
  if (controller_ck_1) {
    v_602 = v_601;
  } else {
    v_602 = sub_298;
  };
  if (controller_c_pc) {
    v_603 = sub_78;
  } else {
    v_603 = v_602;
  };
  if (controller_c_window) {
    sub_297 = v_603;
  } else {
    sub_297 = sub_287;
  };
  sub_296 = sub_297;
  if (controller_change_shift) {
    v_598 = sub_80;
    sub_300 = sub_98;
  } else {
    v_598 = sub_98;
    sub_300 = sub_80;
  };
  if (controller_ck_1) {
    v_599 = v_598;
  } else {
    v_599 = sub_300;
  };
  if (controller_c_pc) {
    v_600 = sub_78;
  } else {
    v_600 = v_599;
  };
  if (controller_c_window) {
    sub_299 = v_600;
  } else {
    sub_299 = sub_83;
  };
  if (controller_v_394) {
    sub_295 = sub_299;
  } else {
    sub_295 = sub_296;
  };
  if (controller_v_395) {
    v_604 = sub_252;
  } else {
    v_604 = sub_295;
  };
  if (controller_blind_failed_recovered) {
    sub_294 = v_604;
  } else {
    sub_294 = v_605;
  };
  sub_293 = sub_294;
  if (controller_air_failed_recovered) {
    v_660 = sub_269;
  } else {
    v_660 = sub_293;
  };
  sub_292 = sub_293;
  if (controller_c_air_2) {
    v_626 = v_625;
  } else {
    v_626 = sub_292;
  };
  sub_301 = sub_281;
  if (controller_c_air_2) {
    v_661 = v_660;
  } else {
    v_661 = sub_301;
  };
  if (controller_c_air_1) {
    v_627 = v_626;
  } else {
    v_627 = sub_301;
  };
  if (controller_v_448) {
    sub_265 = v_627;
  } else {
    sub_265 = sub_266;
  };
  sub_302 = sub_292;
  if (controller_v_450) {
    sub_264 = sub_302;
  } else {
    sub_264 = sub_265;
  };
  if (controller_air_failed_recovered) {
    v_595 = sub_293;
  } else {
    v_595 = sub_269;
  };
  if (controller_c_air_2) {
    v_596 = v_595;
  } else {
    v_596 = sub_268;
  };
  if (controller_c_air_1) {
    v_597 = v_596;
  } else {
    v_597 = sub_267;
  };
  if (controller_air_failed_recovered) {
    v_593 = sub_269;
  } else {
    v_593 = sub_281;
  };
  if (controller_c_air_2) {
    v_594 = v_593;
  } else {
    v_594 = sub_292;
  };
  sub_306 = sub_290;
  sub_305 = sub_306;
  if (controller_c_air_1) {
    v_662 = v_661;
    sub_304 = sub_305;
  } else {
    v_662 = sub_305;
    sub_304 = v_594;
  };
  if (controller_v_448) {
    sub_303 = v_597;
  } else {
    sub_303 = sub_304;
  };
  if (controller_air_failed_recovered) {
    v_591 = sub_290;
  } else {
    v_591 = sub_269;
  };
  if (controller_c_air_2) {
    v_592 = v_591;
  } else {
    v_592 = sub_268;
  };
  if (controller_c_air_1) {
    sub_307 = v_592;
  } else {
    sub_307 = sub_267;
  };
  if (controller_v_448) {
    v_663 = v_662;
  } else {
    v_663 = sub_307;
  };
  if (controller_v_450) {
    v_664 = v_663;
  } else {
    v_664 = sub_303;
  };
  if (controller_v_449) {
    v_665 = v_664;
  } else {
    v_665 = sub_264;
  };
  if (controller_blind_switch) {
    sub_228 = v_659;
  } else {
    sub_228 = v_665;
  };
  if (controller_c_window) {
    sub_318 = sub_66;
  } else {
    sub_318 = sub_164;
  };
  sub_317 = sub_318;
  sub_316 = sub_317;
  if (controller_c_door) {
    v_573 = sub_240;
    sub_315 = sub_316;
  } else {
    v_573 = sub_316;
    sub_315 = sub_240;
  };
  if (controller_ck_11_1) {
    sub_314 = v_573;
  } else {
    sub_314 = sub_315;
  };
  if (controller_air_failed_recovered) {
    v_576 = sub_314;
  } else {
    v_576 = false;
  };
  sub_313 = sub_314;
  sub_312 = sub_313;
  sub_319 = sub_240;
  if (controller_air_failed_recovered) {
    v_574 = sub_319;
  } else {
    v_574 = sub_314;
  };
  if (controller_c_air_2) {
    v_575 = v_574;
  } else {
    v_575 = sub_313;
  };
  if (controller_c_air_1) {
    sub_311 = sub_312;
  } else {
    sub_311 = v_575;
  };
  sub_322 = sub_176;
  sub_321 = sub_322;
  if (controller_air_failed_recovered) {
    v_579 = sub_314;
  } else {
    v_579 = sub_321;
  };
  sub_320 = sub_321;
  if (controller_c_air_2) {
    v_577 = v_576;
  } else {
    v_577 = sub_320;
  };
  sub_323 = sub_319;
  if (controller_c_air_2) {
    v_580 = v_579;
  } else {
    v_580 = sub_323;
  };
  if (controller_c_air_1) {
    v_581 = v_580;
    v_578 = v_577;
  } else {
    v_581 = false;
    v_578 = sub_323;
  };
  if (controller_v_448) {
    sub_310 = v_578;
  } else {
    sub_310 = sub_311;
  };
  sub_324 = sub_320;
  if (controller_v_450) {
    sub_309 = sub_324;
  } else {
    sub_309 = sub_310;
  };
  if (controller_air_failed_recovered) {
    v_570 = sub_321;
  } else {
    v_570 = sub_314;
  };
  if (controller_c_air_2) {
    v_571 = v_570;
  } else {
    v_571 = sub_313;
  };
  if (controller_c_air_1) {
    v_572 = v_571;
  } else {
    v_572 = sub_312;
  };
  if (controller_air_failed_recovered) {
    v_568 = sub_314;
  } else {
    v_568 = sub_319;
  };
  if (controller_c_air_2) {
    v_569 = v_568;
  } else {
    v_569 = sub_320;
  };
  if (controller_c_air_1) {
    sub_326 = false;
  } else {
    sub_326 = v_569;
  };
  if (controller_v_448) {
    sub_325 = v_572;
  } else {
    sub_325 = sub_326;
  };
  if (controller_air_failed_recovered) {
    v_566 = false;
  } else {
    v_566 = sub_314;
  };
  if (controller_c_air_2) {
    v_567 = v_566;
  } else {
    v_567 = sub_313;
  };
  if (controller_c_air_1) {
    sub_327 = v_567;
  } else {
    sub_327 = sub_312;
  };
  if (controller_v_448) {
    v_582 = v_581;
  } else {
    v_582 = sub_327;
  };
  if (controller_v_450) {
    v_583 = v_582;
  } else {
    v_583 = sub_325;
  };
  if (controller_v_449) {
    v_584 = v_583;
  } else {
    v_584 = sub_309;
  };
  if (controller_v_395) {
    v_559 = sub_161;
    v_558 = sub_317;
  } else {
    v_559 = sub_317;
    v_558 = sub_161;
  };
  if (controller_blind_failed_recovered) {
    sub_335 = v_558;
  } else {
    sub_335 = v_559;
  };
  if (controller_c_door) {
    v_560 = sub_280;
    sub_334 = sub_335;
  } else {
    v_560 = sub_335;
    sub_334 = sub_280;
  };
  if (controller_ck_11_1) {
    sub_333 = v_560;
  } else {
    sub_333 = sub_334;
  };
  if (controller_air_failed_recovered) {
    v_563 = sub_333;
  } else {
    v_563 = false;
  };
  sub_332 = sub_333;
  sub_331 = sub_332;
  sub_336 = sub_280;
  if (controller_air_failed_recovered) {
    v_561 = sub_336;
  } else {
    v_561 = sub_333;
  };
  if (controller_c_air_2) {
    v_562 = v_561;
  } else {
    v_562 = sub_332;
  };
  if (controller_c_air_1) {
    sub_330 = sub_331;
  } else {
    sub_330 = v_562;
  };
  if (controller_v_395) {
    v_557 = sub_175;
    v_556 = sub_176;
  } else {
    v_557 = sub_176;
    v_556 = sub_175;
  };
  if (controller_blind_failed_recovered) {
    sub_339 = v_556;
  } else {
    sub_339 = v_557;
  };
  sub_338 = sub_339;
  if (controller_air_failed_recovered) {
    v_585 = sub_333;
  } else {
    v_585 = sub_338;
  };
  sub_337 = sub_338;
  if (controller_c_air_2) {
    v_564 = v_563;
  } else {
    v_564 = sub_337;
  };
  sub_340 = sub_336;
  if (controller_c_air_2) {
    v_586 = v_585;
  } else {
    v_586 = sub_340;
  };
  if (controller_c_air_1) {
    v_587 = v_586;
    v_565 = v_564;
  } else {
    v_587 = false;
    v_565 = sub_340;
  };
  if (controller_v_448) {
    sub_329 = v_565;
  } else {
    sub_329 = sub_330;
  };
  sub_341 = sub_337;
  if (controller_v_450) {
    sub_328 = sub_341;
  } else {
    sub_328 = sub_329;
  };
  if (controller_air_failed_recovered) {
    v_553 = sub_338;
  } else {
    v_553 = sub_333;
  };
  if (controller_c_air_2) {
    v_554 = v_553;
  } else {
    v_554 = sub_332;
  };
  if (controller_c_air_1) {
    v_555 = v_554;
  } else {
    v_555 = sub_331;
  };
  if (controller_air_failed_recovered) {
    v_551 = sub_333;
  } else {
    v_551 = sub_336;
  };
  if (controller_c_air_2) {
    v_552 = v_551;
  } else {
    v_552 = sub_337;
  };
  if (controller_c_air_1) {
    sub_343 = false;
  } else {
    sub_343 = v_552;
  };
  if (controller_v_448) {
    sub_342 = v_555;
  } else {
    sub_342 = sub_343;
  };
  if (controller_air_failed_recovered) {
    v_549 = false;
  } else {
    v_549 = sub_333;
  };
  if (controller_c_air_2) {
    v_550 = v_549;
  } else {
    v_550 = sub_332;
  };
  if (controller_c_air_1) {
    sub_344 = v_550;
  } else {
    sub_344 = sub_331;
  };
  if (controller_v_448) {
    v_588 = v_587;
  } else {
    v_588 = sub_344;
  };
  if (controller_v_450) {
    v_589 = v_588;
  } else {
    v_589 = sub_342;
  };
  if (controller_v_449) {
    v_590 = v_589;
  } else {
    v_590 = sub_328;
  };
  if (controller_blind_switch) {
    sub_308 = v_584;
  } else {
    sub_308 = v_590;
  };
  if (controller_v_395) {
    v_530 = sub_202;
  } else {
    v_530 = sub_197;
  };
  if (controller_blind_failed_recovered) {
    sub_353 = sub_197;
  } else {
    sub_353 = v_530;
  };
  if (controller_c_door) {
    v_531 = false;
    sub_352 = sub_353;
  } else {
    v_531 = sub_353;
    sub_352 = false;
  };
  if (controller_ck_11_1) {
    sub_351 = v_531;
  } else {
    sub_351 = sub_352;
  };
  sub_350 = sub_351;
  sub_349 = sub_350;
  if (controller_c_pc) {
    v_529 = false;
  } else {
    v_529 = sub_109;
  };
  if (controller_c_window) {
    sub_357 = v_529;
  } else {
    sub_357 = sub_108;
  };
  sub_356 = sub_357;
  sub_355 = sub_356;
  sub_354 = sub_355;
  if (controller_air_failed_recovered) {
    v_532 = sub_354;
  } else {
    v_532 = sub_351;
  };
  if (controller_c_air_2) {
    v_533 = v_532;
  } else {
    v_533 = sub_350;
  };
  if (controller_c_air_1) {
    sub_348 = sub_349;
  } else {
    sub_348 = v_533;
  };
  if (controller_c_pc) {
    v_527 = sub_87;
  } else {
    v_527 = sub_52;
  };
  if (controller_c_window) {
    v_528 = v_527;
  } else {
    v_528 = sub_121;
  };
  if (controller_c_pc) {
    v_525 = sub_87;
  } else {
    v_525 = sub_95;
  };
  if (controller_c_window) {
    v_526 = v_525;
  } else {
    v_526 = sub_94;
  };
  if (controller_c_closet) {
    sub_360 = v_526;
  } else {
    sub_360 = v_528;
  };
  sub_359 = sub_360;
  sub_358 = sub_359;
  if (controller_air_failed_recovered) {
    v_534 = sub_351;
  } else {
    v_534 = sub_358;
  };
  sub_365 = sub_108;
  sub_364 = sub_365;
  sub_363 = sub_364;
  sub_362 = sub_363;
  if (controller_air_failed_recovered) {
    v_537 = sub_351;
  } else {
    v_537 = sub_362;
  };
  sub_361 = sub_362;
  if (controller_c_air_2) {
    v_535 = v_534;
  } else {
    v_535 = sub_361;
  };
  sub_367 = sub_354;
  if (controller_c_air_2) {
    v_538 = v_537;
  } else {
    v_538 = sub_367;
  };
  sub_366 = sub_367;
  if (controller_c_air_1) {
    v_536 = v_535;
  } else {
    v_536 = sub_366;
  };
  if (controller_v_448) {
    sub_347 = v_536;
  } else {
    sub_347 = sub_348;
  };
  sub_369 = sub_361;
  sub_368 = sub_369;
  if (controller_v_450) {
    sub_346 = sub_368;
  } else {
    sub_346 = sub_347;
  };
  if (controller_air_failed_recovered) {
    v_522 = sub_362;
  } else {
    v_522 = sub_351;
  };
  if (controller_c_air_2) {
    v_523 = v_522;
  } else {
    v_523 = sub_350;
  };
  if (controller_c_air_1) {
    v_524 = v_523;
  } else {
    v_524 = sub_349;
  };
  if (controller_air_failed_recovered) {
    v_520 = sub_351;
  } else {
    v_520 = sub_354;
  };
  if (controller_c_air_2) {
    v_521 = v_520;
  } else {
    v_521 = sub_361;
  };
  sub_373 = sub_358;
  sub_372 = sub_373;
  if (controller_c_air_1) {
    v_539 = v_538;
    sub_371 = sub_372;
  } else {
    v_539 = sub_372;
    sub_371 = v_521;
  };
  if (controller_v_448) {
    sub_370 = v_524;
  } else {
    sub_370 = sub_371;
  };
  if (controller_air_failed_recovered) {
    v_518 = sub_358;
  } else {
    v_518 = sub_351;
  };
  if (controller_c_air_2) {
    v_519 = v_518;
  } else {
    v_519 = sub_350;
  };
  if (controller_c_air_1) {
    sub_374 = v_519;
  } else {
    sub_374 = sub_349;
  };
  if (controller_v_448) {
    v_540 = v_539;
  } else {
    v_540 = sub_374;
  };
  if (controller_v_450) {
    v_541 = v_540;
  } else {
    v_541 = sub_370;
  };
  if (controller_v_449) {
    v_542 = v_541;
  } else {
    v_542 = sub_346;
  };
  if (controller_v_395) {
    v_511 = sub_201;
  } else {
    v_511 = sub_197;
  };
  if (controller_c_window) {
    sub_385 = sub_196;
  } else {
    sub_385 = sub_51;
  };
  sub_384 = sub_385;
  if (controller_v_394) {
    sub_383 = sub_194;
  } else {
    sub_383 = sub_384;
  };
  if (controller_v_395) {
    v_510 = sub_197;
  } else {
    v_510 = sub_383;
  };
  if (controller_blind_failed_recovered) {
    sub_382 = v_510;
  } else {
    sub_382 = v_511;
  };
  if (controller_c_door) {
    v_512 = false;
    sub_381 = sub_382;
  } else {
    v_512 = sub_382;
    sub_381 = false;
  };
  if (controller_ck_11_1) {
    sub_380 = v_512;
  } else {
    sub_380 = sub_381;
  };
  if (controller_air_failed_recovered) {
    v_543 = sub_380;
  } else {
    v_543 = sub_362;
  };
  if (controller_c_air_2) {
    v_544 = v_543;
  } else {
    v_544 = sub_367;
  };
  if (controller_c_air_1) {
    v_545 = v_544;
  } else {
    v_545 = sub_372;
  };
  if (controller_air_failed_recovered) {
    v_515 = sub_380;
  } else {
    v_515 = sub_358;
  };
  if (controller_c_air_2) {
    v_516 = v_515;
  } else {
    v_516 = sub_361;
  };
  if (controller_c_air_1) {
    v_517 = v_516;
  } else {
    v_517 = sub_366;
  };
  if (controller_air_failed_recovered) {
    v_513 = sub_354;
  } else {
    v_513 = sub_380;
  };
  sub_379 = sub_380;
  if (controller_c_air_2) {
    v_514 = v_513;
  } else {
    v_514 = sub_379;
  };
  sub_378 = sub_379;
  if (controller_c_air_1) {
    sub_377 = sub_378;
  } else {
    sub_377 = v_514;
  };
  if (controller_v_448) {
    sub_376 = v_517;
  } else {
    sub_376 = sub_377;
  };
  if (controller_v_450) {
    sub_375 = sub_368;
  } else {
    sub_375 = sub_376;
  };
  if (controller_air_failed_recovered) {
    v_507 = sub_362;
  } else {
    v_507 = sub_380;
  };
  if (controller_c_air_2) {
    v_508 = v_507;
  } else {
    v_508 = sub_379;
  };
  if (controller_c_air_1) {
    v_509 = v_508;
  } else {
    v_509 = sub_378;
  };
  if (controller_air_failed_recovered) {
    v_505 = sub_380;
  } else {
    v_505 = sub_354;
  };
  if (controller_c_air_2) {
    v_506 = v_505;
  } else {
    v_506 = sub_361;
  };
  if (controller_c_air_1) {
    sub_387 = sub_372;
  } else {
    sub_387 = v_506;
  };
  if (controller_v_448) {
    sub_386 = v_509;
  } else {
    sub_386 = sub_387;
  };
  if (controller_air_failed_recovered) {
    v_503 = sub_358;
  } else {
    v_503 = sub_380;
  };
  if (controller_c_air_2) {
    v_504 = v_503;
  } else {
    v_504 = sub_379;
  };
  if (controller_c_air_1) {
    sub_388 = v_504;
  } else {
    sub_388 = sub_378;
  };
  if (controller_v_448) {
    v_546 = v_545;
  } else {
    v_546 = sub_388;
  };
  if (controller_v_450) {
    v_547 = v_546;
  } else {
    v_547 = sub_386;
  };
  if (controller_v_449) {
    v_548 = v_547;
  } else {
    v_548 = sub_375;
  };
  if (controller_blind_switch) {
    sub_345 = v_542;
  } else {
    sub_345 = v_548;
  };
  if (controller_v_410) {
    v_666 = sub_345;
  } else {
    v_666 = sub_308;
  };
  if (controller_v_411) {
    sub_227 = v_666;
  } else {
    sub_227 = sub_228;
  };
  sub_226 = sub_227;
  if (controller_v_410) {
    sub_390 = sub_308;
  } else {
    sub_390 = sub_345;
  };
  if (controller_v_411) {
    v_501 = sub_390;
    v = sub_228;
  } else {
    v_501 = sub_228;
    v = sub_390;
  };
  if (controller_light_failed_recovered) {
    v_502 = v;
  } else {
    v_502 = v_501;
  };
  if (controller_c_light_1) {
    sub_389 = v_502;
  } else {
    sub_389 = sub_226;
  };
  if (controller_light_switch) {
    v_787 = sub_226;
  } else {
    v_787 = sub_389;
  };
  if (controller_c_light_2) {
    v_788 = v_787;
  } else {
    v_788 = sub_389;
  };
  if (p_controller_c_blind_1) {
    sub_0 = v_788;
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
  int controller_pnr_3, int controller_v_450, int controller_v_449,
  int controller_v_448, int controller_pnr_2, int controller_v_411,
  int controller_v_410, int controller_pnr_1, int controller_v_395,
  int controller_v_394, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_light_1, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_2_out* _out) {
  
  int v_1190;
  int v_1189;
  int v_1188;
  int v_1187;
  int v_1186;
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
  v_1154 = !(controller_ck_17_1);
  sub_21 = (v_1154&&false);
  sub_22 = (controller_ck_17_1&&false);
  if (controller_cleaner) {
    sub_20 = sub_21;
  } else {
    sub_20 = sub_22;
  };
  sub_23 = false;
  if (controller_worker) {
    v_1155 = sub_23;
    sub_19 = sub_20;
  } else {
    v_1155 = sub_20;
    sub_19 = sub_23;
  };
  if (controller_ck_15_1) {
    sub_18 = v_1155;
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
  sub_29 = !(controller_ck_17_1);
  sub_30 = controller_ck_17_1;
  if (controller_cleaner) {
    sub_28 = sub_29;
  } else {
    sub_28 = sub_30;
  };
  if (controller_worker) {
    v_1153 = sub_23;
    sub_27 = sub_28;
  } else {
    v_1153 = sub_28;
    sub_27 = sub_23;
  };
  if (controller_ck_15_1) {
    sub_26 = v_1153;
  } else {
    sub_26 = sub_27;
  };
  v_1152 = !(controller_ck_17_1);
  sub_34 = (v_1152||false);
  sub_35 = (controller_ck_17_1||false);
  if (controller_cleaner) {
    sub_33 = sub_34;
  } else {
    sub_33 = sub_35;
  };
  if (controller_worker) {
    sub_32 = sub_33;
    sub_36 = false;
  } else {
    sub_32 = false;
    sub_36 = sub_33;
  };
  if (controller_ck_15_1) {
    sub_31 = sub_36;
  } else {
    sub_31 = sub_32;
  };
  if (controller_change_shift) {
    v_1156 = sub_31;
    sub_25 = sub_26;
  } else {
    v_1156 = sub_26;
    sub_25 = sub_31;
  };
  if (controller_ck_1) {
    v_1157 = v_1156;
  } else {
    v_1157 = sub_25;
  };
  if (controller_c_pc) {
    sub_15 = sub_16;
  } else {
    sub_15 = v_1157;
  };
  sub_38 = sub_18;
  sub_37 = sub_38;
  if (controller_c_window) {
    sub_14 = sub_15;
  } else {
    sub_14 = sub_37;
  };
  sub_13 = sub_14;
  if (controller_c_pc) {
    sub_40 = false;
  } else {
    sub_40 = sub_31;
  };
  if (controller_c_window) {
    sub_39 = sub_40;
  } else {
    sub_39 = sub_37;
  };
  if (controller_v_395) {
    v_1158 = sub_39;
  } else {
    v_1158 = sub_13;
  };
  if (controller_blind_failed_recovered) {
    sub_12 = sub_13;
  } else {
    sub_12 = v_1158;
  };
  if (controller_c_window) {
    sub_43 = sub_40;
  } else {
    sub_43 = false;
  };
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (controller_c_door) {
    v_1159 = sub_41;
    sub_11 = sub_12;
  } else {
    v_1159 = sub_12;
    sub_11 = sub_41;
  };
  if (controller_ck_11_1) {
    sub_10 = v_1159;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  if (controller_ck_15_1) {
    sub_50 = sub_32;
  } else {
    sub_50 = sub_36;
  };
  if (controller_change_shift) {
    sub_49 = false;
    sub_51 = sub_50;
  } else {
    sub_49 = sub_50;
    sub_51 = false;
  };
  if (controller_ck_1) {
    sub_48 = sub_51;
  } else {
    sub_48 = sub_49;
  };
  if (controller_cleaner) {
    sub_55 = sub_22;
  } else {
    sub_55 = sub_21;
  };
  if (controller_worker) {
    sub_54 = sub_33;
    sub_56 = sub_55;
  } else {
    sub_54 = sub_55;
    sub_56 = sub_33;
  };
  if (controller_ck_15_1) {
    sub_53 = sub_56;
  } else {
    sub_53 = sub_54;
  };
  sub_57 = sub_33;
  if (controller_change_shift) {
    v_1148 = sub_57;
    sub_52 = sub_53;
  } else {
    v_1148 = sub_53;
    sub_52 = sub_57;
  };
  if (controller_ck_1) {
    v_1149 = v_1148;
  } else {
    v_1149 = sub_52;
  };
  if (controller_c_pc) {
    v_1150 = sub_48;
  } else {
    v_1150 = v_1149;
  };
  if (controller_worker) {
    sub_62 = false;
    sub_63 = sub_55;
  } else {
    sub_62 = sub_55;
    sub_63 = false;
  };
  if (controller_ck_15_1) {
    sub_61 = sub_63;
  } else {
    sub_61 = sub_62;
  };
  if (controller_change_shift) {
    sub_60 = sub_61;
    sub_64 = sub_50;
  } else {
    sub_60 = sub_50;
    sub_64 = sub_61;
  };
  if (controller_ck_1) {
    sub_59 = sub_64;
  } else {
    sub_59 = sub_60;
  };
  sub_58 = sub_59;
  if (controller_c_window) {
    sub_47 = v_1150;
  } else {
    sub_47 = sub_58;
  };
  sub_46 = sub_47;
  if (controller_change_shift) {
    v_1145 = sub_31;
    sub_67 = sub_53;
  } else {
    v_1145 = sub_53;
    sub_67 = sub_31;
  };
  if (controller_ck_1) {
    v_1146 = v_1145;
  } else {
    v_1146 = sub_67;
  };
  if (controller_c_pc) {
    v_1147 = false;
  } else {
    v_1147 = v_1146;
  };
  if (controller_change_shift) {
    sub_70 = sub_61;
    sub_71 = false;
  } else {
    sub_70 = false;
    sub_71 = sub_61;
  };
  if (controller_ck_1) {
    sub_69 = sub_71;
  } else {
    sub_69 = sub_70;
  };
  sub_68 = sub_69;
  if (controller_c_window) {
    sub_66 = v_1147;
  } else {
    sub_66 = sub_68;
  };
  sub_65 = sub_66;
  if (controller_v_395) {
    v_1151 = sub_65;
  } else {
    v_1151 = sub_46;
  };
  if (controller_blind_failed_recovered) {
    sub_45 = sub_46;
  } else {
    sub_45 = v_1151;
  };
  sub_44 = sub_45;
  if (controller_air_failed_recovered) {
    v_1160 = sub_44;
  } else {
    v_1160 = sub_10;
  };
  if (controller_c_air_2) {
    v_1161 = v_1160;
  } else {
    v_1161 = sub_9;
  };
  if (controller_c_air_1) {
    sub_7 = sub_8;
  } else {
    sub_7 = v_1161;
  };
  if (controller_ck_1) {
    sub_75 = sub_60;
  } else {
    sub_75 = sub_64;
  };
  if (controller_c_pc) {
    v_1143 = sub_75;
  } else {
    v_1143 = sub_38;
  };
  sub_76 = sub_61;
  if (controller_c_pc) {
    v_1141 = sub_75;
  } else {
    v_1141 = sub_76;
  };
  sub_77 = sub_76;
  if (controller_c_window) {
    v_1142 = v_1141;
  } else {
    v_1142 = sub_77;
  };
  if (controller_c_pc) {
    sub_78 = sub_76;
  } else {
    sub_78 = sub_38;
  };
  if (controller_c_window) {
    v_1144 = v_1143;
  } else {
    v_1144 = sub_78;
  };
  if (controller_c_closet) {
    sub_74 = v_1142;
  } else {
    sub_74 = v_1144;
  };
  sub_73 = sub_74;
  sub_72 = sub_73;
  if (controller_air_failed_recovered) {
    v_1162 = sub_10;
  } else {
    v_1162 = sub_72;
  };
  if (controller_change_shift) {
    v_1137 = sub_50;
    sub_84 = sub_53;
  } else {
    v_1137 = sub_53;
    sub_84 = sub_50;
  };
  if (controller_ck_1) {
    v_1138 = v_1137;
  } else {
    v_1138 = sub_84;
  };
  if (controller_c_pc) {
    v_1139 = sub_59;
  } else {
    v_1139 = v_1138;
  };
  if (controller_c_window) {
    sub_83 = v_1139;
  } else {
    sub_83 = sub_58;
  };
  sub_82 = sub_83;
  if (controller_change_shift) {
    v_1135 = false;
    sub_88 = sub_53;
  } else {
    v_1135 = sub_53;
    sub_88 = false;
  };
  if (controller_ck_1) {
    sub_87 = v_1135;
  } else {
    sub_87 = sub_88;
  };
  if (controller_c_pc) {
    v_1136 = sub_69;
  } else {
    v_1136 = sub_87;
  };
  if (controller_c_window) {
    sub_86 = v_1136;
  } else {
    sub_86 = sub_68;
  };
  sub_85 = sub_86;
  if (controller_v_395) {
    v_1140 = sub_85;
  } else {
    v_1140 = sub_82;
  };
  if (controller_blind_failed_recovered) {
    sub_81 = sub_82;
  } else {
    sub_81 = v_1140;
  };
  sub_80 = sub_81;
  if (controller_air_failed_recovered) {
    v_1165 = sub_10;
  } else {
    v_1165 = sub_80;
  };
  sub_79 = sub_80;
  if (controller_c_air_2) {
    v_1163 = v_1162;
  } else {
    v_1163 = sub_79;
  };
  sub_89 = sub_44;
  if (controller_c_air_2) {
    v_1166 = v_1165;
  } else {
    v_1166 = sub_89;
  };
  if (controller_c_air_1) {
    v_1164 = v_1163;
  } else {
    v_1164 = sub_89;
  };
  if (controller_v_448) {
    sub_6 = v_1164;
  } else {
    sub_6 = sub_7;
  };
  sub_90 = sub_79;
  if (controller_v_450) {
    sub_5 = sub_90;
  } else {
    sub_5 = sub_6;
  };
  if (controller_air_failed_recovered) {
    v_1132 = sub_80;
  } else {
    v_1132 = sub_10;
  };
  if (controller_c_air_2) {
    v_1133 = v_1132;
  } else {
    v_1133 = sub_9;
  };
  if (controller_c_air_1) {
    v_1134 = v_1133;
  } else {
    v_1134 = sub_8;
  };
  if (controller_air_failed_recovered) {
    v_1130 = sub_10;
  } else {
    v_1130 = sub_44;
  };
  if (controller_c_air_2) {
    v_1131 = v_1130;
  } else {
    v_1131 = sub_79;
  };
  sub_94 = sub_72;
  sub_93 = sub_94;
  if (controller_c_air_1) {
    v_1167 = v_1166;
    sub_92 = sub_93;
  } else {
    v_1167 = sub_93;
    sub_92 = v_1131;
  };
  if (controller_v_448) {
    sub_91 = v_1134;
  } else {
    sub_91 = sub_92;
  };
  if (controller_air_failed_recovered) {
    v_1128 = sub_72;
  } else {
    v_1128 = sub_10;
  };
  if (controller_c_air_2) {
    v_1129 = v_1128;
  } else {
    v_1129 = sub_9;
  };
  if (controller_c_air_1) {
    sub_95 = v_1129;
  } else {
    sub_95 = sub_8;
  };
  if (controller_v_448) {
    v_1168 = v_1167;
  } else {
    v_1168 = sub_95;
  };
  if (controller_v_450) {
    v_1169 = v_1168;
  } else {
    v_1169 = sub_91;
  };
  if (controller_v_449) {
    sub_4 = v_1169;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  if (controller_cleaner) {
    sub_112 = sub_35;
  } else {
    sub_112 = sub_34;
  };
  sub_113 = true;
  if (controller_worker) {
    v_1113 = sub_113;
    sub_111 = sub_112;
  } else {
    v_1113 = sub_112;
    sub_111 = sub_113;
  };
  if (controller_ck_15_1) {
    sub_110 = v_1113;
  } else {
    sub_110 = sub_111;
  };
  if (controller_change_shift) {
    sub_109 = sub_110;
    sub_114 = false;
  } else {
    sub_109 = false;
    sub_114 = sub_110;
  };
  if (controller_ck_1) {
    sub_108 = sub_114;
  } else {
    sub_108 = sub_109;
  };
  if (controller_cleaner) {
    sub_118 = sub_30;
  } else {
    sub_118 = sub_29;
  };
  if (controller_worker) {
    v_1112 = sub_113;
    sub_117 = sub_118;
  } else {
    v_1112 = sub_118;
    sub_117 = sub_113;
  };
  if (controller_ck_15_1) {
    sub_116 = v_1112;
    sub_119 = sub_62;
  } else {
    sub_116 = sub_117;
    sub_119 = sub_63;
  };
  if (controller_change_shift) {
    v_1114 = sub_119;
    sub_115 = sub_116;
  } else {
    v_1114 = sub_116;
    sub_115 = sub_119;
  };
  if (controller_ck_1) {
    v_1115 = v_1114;
  } else {
    v_1115 = sub_115;
  };
  if (controller_c_pc) {
    sub_107 = sub_108;
  } else {
    sub_107 = v_1115;
  };
  if (controller_change_shift) {
    sub_122 = sub_110;
    sub_123 = sub_18;
  } else {
    sub_122 = sub_18;
    sub_123 = sub_110;
  };
  if (controller_ck_1) {
    sub_121 = sub_123;
  } else {
    sub_121 = sub_122;
  };
  sub_120 = sub_121;
  if (controller_c_window) {
    sub_106 = sub_107;
  } else {
    sub_106 = sub_120;
  };
  sub_105 = sub_106;
  if (controller_c_pc) {
    sub_125 = false;
  } else {
    sub_125 = sub_119;
  };
  if (controller_c_window) {
    sub_124 = sub_125;
  } else {
    sub_124 = sub_120;
  };
  if (controller_v_395) {
    v_1116 = sub_124;
  } else {
    v_1116 = sub_105;
  };
  if (controller_blind_failed_recovered) {
    sub_104 = sub_105;
  } else {
    sub_104 = v_1116;
  };
  if (controller_c_window) {
    sub_128 = sub_125;
  } else {
    sub_128 = false;
  };
  sub_127 = sub_128;
  sub_126 = sub_127;
  if (controller_c_door) {
    v_1117 = sub_126;
    sub_103 = sub_104;
  } else {
    v_1117 = sub_104;
    sub_103 = sub_126;
  };
  if (controller_ck_11_1) {
    sub_102 = v_1117;
  } else {
    sub_102 = sub_103;
  };
  sub_101 = sub_102;
  sub_100 = sub_101;
  if (controller_ck_15_1) {
    sub_133 = sub_54;
  } else {
    sub_133 = sub_56;
  };
  if (controller_c_pc) {
    v_1110 = sub_48;
  } else {
    v_1110 = sub_133;
  };
  sub_135 = sub_50;
  sub_134 = sub_135;
  if (controller_c_window) {
    sub_132 = v_1110;
  } else {
    sub_132 = sub_134;
  };
  sub_131 = sub_132;
  if (controller_change_shift) {
    v_1107 = sub_119;
    sub_138 = sub_133;
  } else {
    v_1107 = sub_133;
    sub_138 = sub_119;
  };
  if (controller_ck_1) {
    v_1108 = v_1107;
  } else {
    v_1108 = sub_138;
  };
  if (controller_c_pc) {
    v_1109 = false;
  } else {
    v_1109 = v_1108;
  };
  if (controller_ck_1) {
    sub_140 = sub_49;
  } else {
    sub_140 = sub_51;
  };
  sub_139 = sub_140;
  if (controller_c_window) {
    sub_137 = v_1109;
  } else {
    sub_137 = sub_139;
  };
  sub_136 = sub_137;
  if (controller_v_395) {
    v_1111 = sub_136;
  } else {
    v_1111 = sub_131;
  };
  if (controller_blind_failed_recovered) {
    sub_130 = sub_131;
  } else {
    sub_130 = v_1111;
  };
  sub_129 = sub_130;
  if (controller_air_failed_recovered) {
    v_1118 = sub_129;
  } else {
    v_1118 = sub_102;
  };
  if (controller_c_air_2) {
    v_1119 = v_1118;
  } else {
    v_1119 = sub_101;
  };
  if (controller_c_air_1) {
    sub_99 = sub_100;
  } else {
    sub_99 = v_1119;
  };
  sub_145 = sub_110;
  if (controller_c_pc) {
    sub_144 = sub_135;
  } else {
    sub_144 = sub_145;
  };
  if (controller_c_closet) {
    sub_143 = sub_134;
  } else {
    sub_143 = sub_144;
  };
  sub_142 = sub_143;
  sub_141 = sub_142;
  if (controller_air_failed_recovered) {
    v_1120 = sub_102;
  } else {
    v_1120 = sub_141;
  };
  if (controller_change_shift) {
    v_1103 = sub_50;
    sub_151 = sub_133;
  } else {
    v_1103 = sub_133;
    sub_151 = sub_50;
  };
  if (controller_ck_1) {
    v_1104 = v_1103;
  } else {
    v_1104 = sub_151;
  };
  if (controller_c_pc) {
    v_1105 = sub_48;
  } else {
    v_1105 = v_1104;
  };
  if (controller_c_window) {
    sub_150 = v_1105;
  } else {
    sub_150 = sub_134;
  };
  sub_149 = sub_150;
  if (controller_change_shift) {
    v_1101 = false;
    sub_154 = sub_133;
  } else {
    v_1101 = sub_133;
    sub_154 = false;
  };
  if (controller_ck_1) {
    sub_153 = v_1101;
  } else {
    sub_153 = sub_154;
  };
  if (controller_c_pc) {
    v_1102 = false;
  } else {
    v_1102 = sub_153;
  };
  if (controller_c_window) {
    sub_152 = v_1102;
  } else {
    sub_152 = sub_139;
  };
  if (controller_v_395) {
    v_1106 = sub_152;
  } else {
    v_1106 = sub_149;
  };
  if (controller_blind_failed_recovered) {
    sub_148 = sub_149;
  } else {
    sub_148 = v_1106;
  };
  sub_147 = sub_148;
  if (controller_air_failed_recovered) {
    v_1123 = sub_102;
  } else {
    v_1123 = sub_147;
  };
  sub_146 = sub_147;
  if (controller_c_air_2) {
    v_1121 = v_1120;
  } else {
    v_1121 = sub_146;
  };
  sub_155 = sub_129;
  if (controller_c_air_2) {
    v_1124 = v_1123;
  } else {
    v_1124 = sub_155;
  };
  if (controller_c_air_1) {
    v_1122 = v_1121;
  } else {
    v_1122 = sub_155;
  };
  if (controller_v_448) {
    sub_98 = v_1122;
  } else {
    sub_98 = sub_99;
  };
  sub_156 = sub_146;
  if (controller_v_450) {
    sub_97 = sub_156;
  } else {
    sub_97 = sub_98;
  };
  if (controller_air_failed_recovered) {
    v_1098 = sub_147;
  } else {
    v_1098 = sub_102;
  };
  if (controller_c_air_2) {
    v_1099 = v_1098;
  } else {
    v_1099 = sub_101;
  };
  if (controller_c_air_1) {
    v_1100 = v_1099;
  } else {
    v_1100 = sub_100;
  };
  if (controller_air_failed_recovered) {
    v_1096 = sub_102;
  } else {
    v_1096 = sub_129;
  };
  if (controller_c_air_2) {
    v_1097 = v_1096;
  } else {
    v_1097 = sub_146;
  };
  sub_160 = sub_141;
  sub_159 = sub_160;
  if (controller_c_air_1) {
    v_1125 = v_1124;
    sub_158 = sub_159;
  } else {
    v_1125 = sub_159;
    sub_158 = v_1097;
  };
  if (controller_v_448) {
    sub_157 = v_1100;
  } else {
    sub_157 = sub_158;
  };
  if (controller_air_failed_recovered) {
    v_1094 = sub_141;
  } else {
    v_1094 = sub_102;
  };
  if (controller_c_air_2) {
    v_1095 = v_1094;
  } else {
    v_1095 = sub_101;
  };
  if (controller_c_air_1) {
    sub_161 = v_1095;
  } else {
    sub_161 = sub_100;
  };
  if (controller_v_448) {
    v_1126 = v_1125;
  } else {
    v_1126 = sub_161;
  };
  if (controller_v_450) {
    v_1127 = v_1126;
  } else {
    v_1127 = sub_157;
  };
  if (controller_v_449) {
    sub_96 = v_1127;
  } else {
    sub_96 = sub_97;
  };
  if (controller_v_410) {
    sub_2 = sub_96;
  } else {
    sub_2 = sub_3;
  };
  sub_175 = sub_23;
  if (controller_change_shift) {
    v_1080 = sub_119;
    sub_174 = sub_175;
  } else {
    v_1080 = sub_175;
    sub_174 = sub_119;
  };
  if (controller_ck_1) {
    v_1081 = v_1080;
  } else {
    v_1081 = sub_174;
  };
  if (controller_c_pc) {
    v_1082 = sub_16;
  } else {
    v_1082 = v_1081;
  };
  if (controller_c_window) {
    sub_173 = v_1082;
  } else {
    sub_173 = sub_37;
  };
  sub_172 = sub_173;
  if (controller_c_window) {
    sub_176 = sub_125;
  } else {
    sub_176 = sub_37;
  };
  if (controller_v_395) {
    v_1083 = sub_176;
  } else {
    v_1083 = sub_172;
  };
  if (controller_blind_failed_recovered) {
    sub_171 = sub_172;
  } else {
    sub_171 = v_1083;
  };
  if (controller_c_door) {
    v_1084 = sub_126;
    sub_170 = sub_171;
  } else {
    v_1084 = sub_171;
    sub_170 = sub_126;
  };
  if (controller_ck_11_1) {
    sub_169 = v_1084;
  } else {
    sub_169 = sub_170;
  };
  sub_168 = sub_169;
  sub_167 = sub_168;
  if (controller_ck_1) {
    sub_181 = sub_70;
  } else {
    sub_181 = sub_71;
  };
  sub_182 = sub_55;
  if (controller_c_pc) {
    v_1078 = sub_181;
  } else {
    v_1078 = sub_182;
  };
  if (controller_c_window) {
    sub_180 = v_1078;
  } else {
    sub_180 = sub_77;
  };
  sub_179 = sub_180;
  if (controller_change_shift) {
    v_1075 = sub_119;
    sub_184 = sub_182;
  } else {
    v_1075 = sub_182;
    sub_184 = sub_119;
  };
  if (controller_ck_1) {
    v_1076 = v_1075;
  } else {
    v_1076 = sub_184;
  };
  if (controller_c_pc) {
    v_1077 = false;
  } else {
    v_1077 = v_1076;
  };
  if (controller_c_window) {
    sub_183 = v_1077;
  } else {
    sub_183 = sub_68;
  };
  if (controller_v_395) {
    v_1079 = sub_183;
  } else {
    v_1079 = sub_179;
  };
  if (controller_blind_failed_recovered) {
    sub_178 = sub_179;
  } else {
    sub_178 = v_1079;
  };
  sub_177 = sub_178;
  if (controller_air_failed_recovered) {
    v_1085 = sub_177;
  } else {
    v_1085 = sub_169;
  };
  if (controller_c_air_2) {
    v_1086 = v_1085;
  } else {
    v_1086 = sub_168;
  };
  if (controller_c_air_1) {
    sub_166 = sub_167;
  } else {
    sub_166 = v_1086;
  };
  if (controller_c_closet) {
    sub_188 = sub_77;
  } else {
    sub_188 = sub_78;
  };
  sub_187 = sub_188;
  sub_186 = sub_187;
  if (controller_air_failed_recovered) {
    sub_185 = sub_169;
  } else {
    sub_185 = sub_186;
  };
  if (controller_change_shift) {
    v_1072 = sub_61;
    sub_195 = sub_182;
  } else {
    v_1072 = sub_182;
    sub_195 = sub_61;
  };
  if (controller_ck_1) {
    sub_194 = v_1072;
  } else {
    sub_194 = sub_195;
  };
  if (controller_c_pc) {
    v_1073 = sub_181;
  } else {
    v_1073 = sub_194;
  };
  if (controller_c_window) {
    sub_193 = v_1073;
  } else {
    sub_193 = sub_77;
  };
  sub_192 = sub_193;
  if (controller_change_shift) {
    v_1070 = false;
    sub_198 = sub_182;
  } else {
    v_1070 = sub_182;
    sub_198 = false;
  };
  if (controller_ck_1) {
    sub_197 = v_1070;
  } else {
    sub_197 = sub_198;
  };
  if (controller_c_pc) {
    v_1071 = false;
  } else {
    v_1071 = sub_197;
  };
  if (controller_c_window) {
    sub_196 = v_1071;
  } else {
    sub_196 = sub_68;
  };
  if (controller_v_395) {
    v_1074 = sub_196;
  } else {
    v_1074 = sub_192;
  };
  if (controller_blind_failed_recovered) {
    sub_191 = sub_192;
  } else {
    sub_191 = v_1074;
  };
  sub_190 = sub_191;
  if (controller_air_failed_recovered) {
    v_1089 = sub_169;
  } else {
    v_1089 = sub_190;
  };
  sub_189 = sub_190;
  if (controller_c_air_2) {
    v_1087 = sub_185;
  } else {
    v_1087 = sub_189;
  };
  sub_200 = sub_177;
  if (controller_c_air_2) {
    v_1090 = v_1089;
  } else {
    v_1090 = sub_200;
  };
  sub_199 = sub_200;
  if (controller_c_air_1) {
    v_1088 = v_1087;
  } else {
    v_1088 = sub_199;
  };
  if (controller_v_448) {
    sub_165 = v_1088;
  } else {
    sub_165 = sub_166;
  };
  sub_201 = sub_189;
  if (controller_v_450) {
    sub_164 = sub_201;
  } else {
    sub_164 = sub_165;
  };
  if (controller_air_failed_recovered) {
    v_1067 = sub_190;
  } else {
    v_1067 = sub_169;
  };
  if (controller_c_air_2) {
    v_1068 = v_1067;
  } else {
    v_1068 = sub_168;
  };
  if (controller_c_air_1) {
    v_1069 = v_1068;
  } else {
    v_1069 = sub_167;
  };
  sub_205 = sub_186;
  sub_204 = sub_205;
  if (controller_c_air_1) {
    v_1091 = v_1090;
  } else {
    v_1091 = sub_204;
  };
  if (controller_air_failed_recovered) {
    sub_206 = sub_169;
  } else {
    sub_206 = sub_177;
  };
  if (controller_c_air_2) {
    v_1066 = sub_206;
  } else {
    v_1066 = sub_189;
  };
  if (controller_c_air_1) {
    sub_203 = sub_204;
  } else {
    sub_203 = v_1066;
  };
  if (controller_v_448) {
    sub_202 = v_1069;
  } else {
    sub_202 = sub_203;
  };
  if (controller_air_failed_recovered) {
    v_1064 = sub_186;
  } else {
    v_1064 = sub_169;
  };
  if (controller_c_air_2) {
    v_1065 = v_1064;
  } else {
    v_1065 = sub_168;
  };
  if (controller_c_air_1) {
    sub_207 = v_1065;
  } else {
    sub_207 = sub_167;
  };
  if (controller_v_448) {
    v_1092 = v_1091;
  } else {
    v_1092 = sub_207;
  };
  if (controller_v_450) {
    v_1093 = v_1092;
  } else {
    v_1093 = sub_202;
  };
  if (controller_v_449) {
    sub_163 = v_1093;
  } else {
    sub_163 = sub_164;
  };
  sub_162 = sub_163;
  if (controller_c_pc) {
    v_1055 = sub_75;
  } else {
    v_1055 = sub_194;
  };
  if (controller_c_window) {
    sub_215 = v_1055;
  } else {
    sub_215 = sub_77;
  };
  sub_214 = sub_215;
  if (controller_c_pc) {
    v_1054 = sub_140;
  } else {
    v_1054 = sub_197;
  };
  if (controller_c_window) {
    sub_216 = v_1054;
  } else {
    sub_216 = sub_68;
  };
  if (controller_v_395) {
    v_1056 = sub_216;
  } else {
    v_1056 = sub_214;
  };
  if (controller_blind_failed_recovered) {
    sub_213 = sub_214;
  } else {
    sub_213 = v_1056;
  };
  sub_212 = sub_213;
  if (controller_air_failed_recovered) {
    v_1059 = sub_169;
  } else {
    v_1059 = sub_212;
  };
  if (controller_c_air_2) {
    v_1060 = v_1059;
  } else {
    v_1060 = sub_200;
  };
  if (controller_c_air_1) {
    v_1061 = v_1060;
  } else {
    v_1061 = sub_204;
  };
  if (controller_v_448) {
    v_1062 = v_1061;
  } else {
    v_1062 = sub_207;
  };
  sub_211 = sub_212;
  if (controller_c_air_2) {
    v_1057 = sub_185;
  } else {
    v_1057 = sub_211;
  };
  if (controller_c_air_1) {
    v_1058 = v_1057;
  } else {
    v_1058 = sub_199;
  };
  if (controller_v_448) {
    sub_210 = v_1058;
  } else {
    sub_210 = sub_166;
  };
  sub_217 = sub_211;
  if (controller_v_450) {
    sub_209 = sub_217;
  } else {
    sub_209 = sub_210;
  };
  if (controller_air_failed_recovered) {
    v_1051 = sub_212;
  } else {
    v_1051 = sub_169;
  };
  if (controller_c_air_2) {
    v_1052 = v_1051;
  } else {
    v_1052 = sub_168;
  };
  if (controller_c_air_1) {
    v_1053 = v_1052;
  } else {
    v_1053 = sub_167;
  };
  if (controller_c_air_2) {
    v_1050 = sub_206;
  } else {
    v_1050 = sub_211;
  };
  if (controller_c_air_1) {
    sub_219 = sub_204;
  } else {
    sub_219 = v_1050;
  };
  if (controller_v_448) {
    sub_218 = v_1053;
  } else {
    sub_218 = sub_219;
  };
  if (controller_v_450) {
    v_1063 = v_1062;
  } else {
    v_1063 = sub_218;
  };
  if (controller_v_449) {
    sub_208 = v_1063;
  } else {
    sub_208 = sub_209;
  };
  if (controller_v_410) {
    v_1170 = sub_208;
  } else {
    v_1170 = sub_162;
  };
  if (controller_v_411) {
    v_1171 = v_1170;
  } else {
    v_1171 = sub_2;
  };
  sub_226 = sub_65;
  sub_225 = sub_226;
  if (controller_air_failed_recovered) {
    v_1040 = sub_225;
  } else {
    v_1040 = sub_10;
  };
  if (controller_c_air_2) {
    v_1041 = v_1040;
  } else {
    v_1041 = sub_9;
  };
  if (controller_c_air_1) {
    sub_224 = sub_8;
  } else {
    sub_224 = v_1041;
  };
  if (controller_c_pc) {
    v_1038 = sub_181;
  } else {
    v_1038 = sub_38;
  };
  if (controller_c_window) {
    v_1039 = v_1038;
  } else {
    v_1039 = sub_78;
  };
  if (controller_c_pc) {
    v_1036 = sub_181;
  } else {
    v_1036 = sub_76;
  };
  if (controller_c_window) {
    v_1037 = v_1036;
  } else {
    v_1037 = sub_77;
  };
  if (controller_c_closet) {
    sub_229 = v_1037;
  } else {
    sub_229 = v_1039;
  };
  sub_228 = sub_229;
  sub_227 = sub_228;
  if (controller_air_failed_recovered) {
    v_1042 = sub_10;
  } else {
    v_1042 = sub_227;
  };
  sub_232 = sub_85;
  sub_231 = sub_232;
  if (controller_air_failed_recovered) {
    v_1045 = sub_10;
  } else {
    v_1045 = sub_231;
  };
  sub_230 = sub_231;
  if (controller_c_air_2) {
    v_1043 = v_1042;
  } else {
    v_1043 = sub_230;
  };
  sub_234 = sub_225;
  if (controller_c_air_2) {
    v_1046 = v_1045;
  } else {
    v_1046 = sub_234;
  };
  sub_233 = sub_234;
  if (controller_c_air_1) {
    v_1044 = v_1043;
  } else {
    v_1044 = sub_233;
  };
  if (controller_v_448) {
    sub_223 = v_1044;
  } else {
    sub_223 = sub_224;
  };
  sub_236 = sub_230;
  sub_235 = sub_236;
  if (controller_v_450) {
    sub_222 = sub_235;
  } else {
    sub_222 = sub_223;
  };
  if (controller_air_failed_recovered) {
    v_1033 = sub_231;
  } else {
    v_1033 = sub_10;
  };
  if (controller_c_air_2) {
    v_1034 = v_1033;
  } else {
    v_1034 = sub_9;
  };
  if (controller_c_air_1) {
    v_1035 = v_1034;
  } else {
    v_1035 = sub_8;
  };
  if (controller_air_failed_recovered) {
    v_1031 = sub_10;
  } else {
    v_1031 = sub_225;
  };
  if (controller_c_air_2) {
    v_1032 = v_1031;
  } else {
    v_1032 = sub_230;
  };
  sub_240 = sub_227;
  sub_239 = sub_240;
  if (controller_c_air_1) {
    v_1047 = v_1046;
    sub_238 = sub_239;
  } else {
    v_1047 = sub_239;
    sub_238 = v_1032;
  };
  if (controller_v_448) {
    sub_237 = v_1035;
  } else {
    sub_237 = sub_238;
  };
  if (controller_air_failed_recovered) {
    v_1029 = sub_227;
  } else {
    v_1029 = sub_10;
  };
  if (controller_c_air_2) {
    v_1030 = v_1029;
  } else {
    v_1030 = sub_9;
  };
  if (controller_c_air_1) {
    sub_241 = v_1030;
  } else {
    sub_241 = sub_8;
  };
  if (controller_v_448) {
    v_1048 = v_1047;
  } else {
    v_1048 = sub_241;
  };
  if (controller_v_450) {
    v_1049 = v_1048;
  } else {
    v_1049 = sub_237;
  };
  if (controller_v_449) {
    sub_221 = v_1049;
  } else {
    sub_221 = sub_222;
  };
  sub_220 = sub_221;
  sub_247 = sub_136;
  sub_246 = sub_247;
  if (controller_air_failed_recovered) {
    v_1019 = sub_246;
  } else {
    v_1019 = sub_102;
  };
  if (controller_c_air_2) {
    v_1020 = v_1019;
  } else {
    v_1020 = sub_101;
  };
  if (controller_c_air_1) {
    sub_245 = sub_100;
  } else {
    sub_245 = v_1020;
  };
  if (controller_c_pc) {
    v_1017 = sub_48;
  } else {
    v_1017 = sub_145;
  };
  if (controller_c_window) {
    v_1018 = v_1017;
  } else {
    v_1018 = sub_144;
  };
  if (controller_c_pc) {
    v_1015 = sub_48;
  } else {
    v_1015 = sub_135;
  };
  if (controller_c_window) {
    v_1016 = v_1015;
  } else {
    v_1016 = sub_134;
  };
  if (controller_c_closet) {
    sub_250 = v_1016;
  } else {
    sub_250 = v_1018;
  };
  sub_249 = sub_250;
  sub_248 = sub_249;
  if (controller_air_failed_recovered) {
    v_1021 = sub_102;
  } else {
    v_1021 = sub_248;
  };
  if (controller_c_pc) {
    v_1014 = sub_140;
  } else {
    v_1014 = sub_153;
  };
  if (controller_c_window) {
    sub_255 = v_1014;
  } else {
    sub_255 = sub_139;
  };
  sub_254 = sub_255;
  sub_253 = sub_254;
  sub_252 = sub_253;
  if (controller_air_failed_recovered) {
    v_1024 = sub_102;
  } else {
    v_1024 = sub_252;
  };
  sub_251 = sub_252;
  if (controller_c_air_2) {
    v_1022 = v_1021;
  } else {
    v_1022 = sub_251;
  };
  sub_257 = sub_246;
  if (controller_c_air_2) {
    v_1025 = v_1024;
  } else {
    v_1025 = sub_257;
  };
  sub_256 = sub_257;
  if (controller_c_air_1) {
    v_1023 = v_1022;
  } else {
    v_1023 = sub_256;
  };
  if (controller_v_448) {
    sub_244 = v_1023;
  } else {
    sub_244 = sub_245;
  };
  sub_259 = sub_251;
  sub_258 = sub_259;
  if (controller_v_450) {
    sub_243 = sub_258;
  } else {
    sub_243 = sub_244;
  };
  if (controller_air_failed_recovered) {
    v_1011 = sub_252;
  } else {
    v_1011 = sub_102;
  };
  if (controller_c_air_2) {
    v_1012 = v_1011;
  } else {
    v_1012 = sub_101;
  };
  if (controller_c_air_1) {
    v_1013 = v_1012;
  } else {
    v_1013 = sub_100;
  };
  if (controller_air_failed_recovered) {
    v_1009 = sub_102;
  } else {
    v_1009 = sub_246;
  };
  if (controller_c_air_2) {
    v_1010 = v_1009;
  } else {
    v_1010 = sub_251;
  };
  sub_263 = sub_248;
  sub_262 = sub_263;
  if (controller_c_air_1) {
    v_1026 = v_1025;
    sub_261 = sub_262;
  } else {
    v_1026 = sub_262;
    sub_261 = v_1010;
  };
  if (controller_v_448) {
    sub_260 = v_1013;
  } else {
    sub_260 = sub_261;
  };
  if (controller_air_failed_recovered) {
    v_1007 = sub_248;
  } else {
    v_1007 = sub_102;
  };
  if (controller_c_air_2) {
    v_1008 = v_1007;
  } else {
    v_1008 = sub_101;
  };
  if (controller_c_air_1) {
    sub_264 = v_1008;
  } else {
    sub_264 = sub_100;
  };
  if (controller_v_448) {
    v_1027 = v_1026;
  } else {
    v_1027 = sub_264;
  };
  if (controller_v_450) {
    v_1028 = v_1027;
  } else {
    v_1028 = sub_260;
  };
  if (controller_v_449) {
    sub_242 = v_1028;
  } else {
    sub_242 = sub_243;
  };
  if (controller_v_410) {
    v_1172 = sub_242;
  } else {
    v_1172 = sub_220;
  };
  if (controller_v_411) {
    v_1173 = v_1172;
  } else {
    v_1173 = sub_162;
  };
  if (controller_light_failed_recovered) {
    v_1174 = v_1171;
  } else {
    v_1174 = v_1173;
  };
  if (controller_ck_1) {
    sub_279 = sub_17;
  } else {
    sub_279 = sub_24;
  };
  if (controller_c_window) {
    sub_278 = sub_125;
  } else {
    sub_278 = sub_279;
  };
  sub_277 = sub_278;
  sub_276 = sub_277;
  if (controller_c_door) {
    v_995 = sub_126;
    sub_275 = sub_276;
  } else {
    v_995 = sub_276;
    sub_275 = sub_126;
  };
  if (controller_ck_11_1) {
    sub_274 = v_995;
  } else {
    sub_274 = sub_275;
  };
  if (controller_air_failed_recovered) {
    v_998 = sub_274;
  } else {
    v_998 = false;
  };
  sub_273 = sub_274;
  sub_272 = sub_273;
  sub_280 = sub_126;
  if (controller_air_failed_recovered) {
    v_996 = sub_280;
  } else {
    v_996 = sub_274;
  };
  if (controller_c_air_2) {
    v_997 = v_996;
  } else {
    v_997 = sub_273;
  };
  if (controller_c_air_1) {
    sub_271 = sub_272;
  } else {
    sub_271 = v_997;
  };
  if (controller_change_shift) {
    v_992 = false;
    sub_286 = sub_119;
  } else {
    v_992 = sub_119;
    sub_286 = false;
  };
  if (controller_ck_1) {
    v_993 = v_992;
  } else {
    v_993 = sub_286;
  };
  if (controller_c_pc) {
    v_994 = false;
  } else {
    v_994 = v_993;
  };
  if (controller_c_window) {
    sub_285 = v_994;
  } else {
    sub_285 = false;
  };
  sub_284 = sub_285;
  sub_283 = sub_284;
  sub_282 = sub_283;
  if (controller_air_failed_recovered) {
    v_1001 = sub_274;
  } else {
    v_1001 = sub_282;
  };
  sub_281 = sub_282;
  if (controller_c_air_2) {
    v_999 = v_998;
  } else {
    v_999 = sub_281;
  };
  sub_287 = sub_280;
  if (controller_c_air_2) {
    v_1002 = v_1001;
  } else {
    v_1002 = sub_287;
  };
  if (controller_c_air_1) {
    v_1003 = v_1002;
    v_1000 = v_999;
  } else {
    v_1003 = false;
    v_1000 = sub_287;
  };
  if (controller_v_448) {
    sub_270 = v_1000;
  } else {
    sub_270 = sub_271;
  };
  sub_288 = sub_281;
  if (controller_v_450) {
    sub_269 = sub_288;
  } else {
    sub_269 = sub_270;
  };
  if (controller_air_failed_recovered) {
    v_989 = sub_282;
  } else {
    v_989 = sub_274;
  };
  if (controller_c_air_2) {
    v_990 = v_989;
  } else {
    v_990 = sub_273;
  };
  if (controller_c_air_1) {
    v_991 = v_990;
  } else {
    v_991 = sub_272;
  };
  if (controller_air_failed_recovered) {
    v_987 = sub_274;
  } else {
    v_987 = sub_280;
  };
  if (controller_c_air_2) {
    v_988 = v_987;
  } else {
    v_988 = sub_281;
  };
  if (controller_c_air_1) {
    sub_290 = false;
  } else {
    sub_290 = v_988;
  };
  if (controller_v_448) {
    sub_289 = v_991;
  } else {
    sub_289 = sub_290;
  };
  if (controller_air_failed_recovered) {
    v_985 = false;
  } else {
    v_985 = sub_274;
  };
  if (controller_c_air_2) {
    v_986 = v_985;
  } else {
    v_986 = sub_273;
  };
  if (controller_c_air_1) {
    sub_291 = v_986;
  } else {
    sub_291 = sub_272;
  };
  if (controller_v_448) {
    v_1004 = v_1003;
  } else {
    v_1004 = sub_291;
  };
  if (controller_v_450) {
    v_1005 = v_1004;
  } else {
    v_1005 = sub_289;
  };
  if (controller_v_449) {
    sub_268 = v_1005;
  } else {
    sub_268 = sub_269;
  };
  sub_267 = sub_268;
  if (controller_c_window) {
    sub_303 = sub_16;
  } else {
    sub_303 = sub_37;
  };
  sub_302 = sub_303;
  if (controller_c_window) {
    sub_304 = false;
  } else {
    sub_304 = sub_37;
  };
  if (controller_v_395) {
    v_973 = sub_304;
  } else {
    v_973 = sub_302;
  };
  if (controller_blind_failed_recovered) {
    sub_301 = sub_302;
  } else {
    sub_301 = v_973;
  };
  if (controller_c_door) {
    v_974 = false;
    sub_300 = sub_301;
  } else {
    v_974 = sub_301;
    sub_300 = false;
  };
  if (controller_ck_11_1) {
    sub_299 = v_974;
  } else {
    sub_299 = sub_300;
  };
  if (controller_air_failed_recovered) {
    v_977 = sub_299;
  } else {
    v_977 = sub_227;
  };
  sub_298 = sub_299;
  sub_297 = sub_298;
  if (controller_c_pc) {
    v_972 = false;
  } else {
    v_972 = sub_69;
  };
  if (controller_c_window) {
    sub_308 = v_972;
  } else {
    sub_308 = sub_68;
  };
  sub_307 = sub_308;
  sub_306 = sub_307;
  sub_305 = sub_306;
  if (controller_air_failed_recovered) {
    v_975 = sub_305;
  } else {
    v_975 = sub_299;
  };
  if (controller_c_air_2) {
    v_976 = v_975;
  } else {
    v_976 = sub_298;
  };
  if (controller_c_air_1) {
    sub_296 = sub_297;
  } else {
    sub_296 = v_976;
  };
  sub_313 = sub_68;
  sub_312 = sub_313;
  sub_311 = sub_312;
  sub_310 = sub_311;
  if (controller_air_failed_recovered) {
    v_980 = sub_299;
  } else {
    v_980 = sub_310;
  };
  sub_309 = sub_310;
  if (controller_c_air_2) {
    v_978 = v_977;
  } else {
    v_978 = sub_309;
  };
  sub_314 = sub_305;
  if (controller_c_air_2) {
    v_981 = v_980;
  } else {
    v_981 = sub_314;
  };
  if (controller_c_air_1) {
    v_982 = v_981;
    v_979 = v_978;
  } else {
    v_982 = sub_239;
    v_979 = sub_314;
  };
  if (controller_v_448) {
    sub_295 = v_979;
  } else {
    sub_295 = sub_296;
  };
  sub_315 = sub_309;
  if (controller_v_450) {
    sub_294 = sub_315;
  } else {
    sub_294 = sub_295;
  };
  if (controller_air_failed_recovered) {
    v_969 = sub_310;
  } else {
    v_969 = sub_299;
  };
  if (controller_c_air_2) {
    v_970 = v_969;
  } else {
    v_970 = sub_298;
  };
  if (controller_c_air_1) {
    v_971 = v_970;
  } else {
    v_971 = sub_297;
  };
  if (controller_air_failed_recovered) {
    v_967 = sub_299;
  } else {
    v_967 = sub_305;
  };
  if (controller_c_air_2) {
    v_968 = v_967;
  } else {
    v_968 = sub_309;
  };
  if (controller_c_air_1) {
    sub_317 = sub_239;
  } else {
    sub_317 = v_968;
  };
  if (controller_v_448) {
    sub_316 = v_971;
  } else {
    sub_316 = sub_317;
  };
  if (controller_air_failed_recovered) {
    v_965 = sub_227;
  } else {
    v_965 = sub_299;
  };
  if (controller_c_air_2) {
    v_966 = v_965;
  } else {
    v_966 = sub_298;
  };
  if (controller_c_air_1) {
    sub_318 = v_966;
  } else {
    sub_318 = sub_297;
  };
  if (controller_v_448) {
    v_983 = v_982;
  } else {
    v_983 = sub_318;
  };
  if (controller_v_450) {
    v_984 = v_983;
  } else {
    v_984 = sub_316;
  };
  if (controller_v_449) {
    sub_293 = v_984;
  } else {
    sub_293 = sub_294;
  };
  sub_292 = sub_293;
  if (controller_v_410) {
    v_1006 = sub_292;
  } else {
    v_1006 = sub_267;
  };
  if (controller_v_411) {
    sub_266 = v_1006;
  } else {
    sub_266 = sub_162;
  };
  sub_265 = sub_266;
  if (controller_c_light_1) {
    v_1175 = v_1174;
  } else {
    v_1175 = sub_265;
  };
  if (controller_v_410) {
    sub_319 = sub_267;
  } else {
    sub_319 = sub_292;
  };
  if (controller_v_411) {
    v_1177 = sub_319;
    v_1176 = sub_162;
  } else {
    v_1177 = sub_162;
    v_1176 = sub_319;
  };
  if (controller_light_failed_recovered) {
    v_1178 = v_1176;
  } else {
    v_1178 = v_1177;
  };
  if (controller_c_light_1) {
    v_1179 = v_1178;
  } else {
    v_1179 = sub_265;
  };
  if (controller_light_switch) {
    sub_1 = v_1175;
  } else {
    sub_1 = v_1179;
  };
  sub_334 = sub_113;
  if (controller_change_shift) {
    v_951 = sub_31;
    sub_333 = sub_334;
  } else {
    v_951 = sub_334;
    sub_333 = sub_31;
  };
  if (controller_ck_1) {
    v_952 = v_951;
  } else {
    v_952 = sub_333;
  };
  if (controller_c_pc) {
    v_953 = sub_108;
  } else {
    v_953 = v_952;
  };
  sub_335 = sub_145;
  if (controller_c_window) {
    sub_332 = v_953;
  } else {
    sub_332 = sub_335;
  };
  sub_331 = sub_332;
  if (controller_c_window) {
    sub_336 = sub_40;
  } else {
    sub_336 = sub_335;
  };
  if (controller_v_395) {
    v_954 = sub_336;
  } else {
    v_954 = sub_331;
  };
  if (controller_blind_failed_recovered) {
    sub_330 = sub_331;
  } else {
    sub_330 = v_954;
  };
  if (controller_c_door) {
    v_955 = sub_41;
    sub_329 = sub_330;
  } else {
    v_955 = sub_330;
    sub_329 = sub_41;
  };
  if (controller_ck_11_1) {
    sub_328 = v_955;
  } else {
    sub_328 = sub_329;
  };
  sub_327 = sub_328;
  sub_326 = sub_327;
  if (controller_c_pc) {
    v_949 = sub_48;
  } else {
    v_949 = sub_57;
  };
  if (controller_c_window) {
    sub_340 = v_949;
  } else {
    sub_340 = sub_134;
  };
  sub_339 = sub_340;
  if (controller_change_shift) {
    v_946 = sub_31;
    sub_342 = sub_57;
  } else {
    v_946 = sub_57;
    sub_342 = sub_31;
  };
  if (controller_ck_1) {
    v_947 = v_946;
  } else {
    v_947 = sub_342;
  };
  if (controller_c_pc) {
    v_948 = false;
  } else {
    v_948 = v_947;
  };
  if (controller_c_window) {
    sub_341 = v_948;
  } else {
    sub_341 = sub_139;
  };
  if (controller_v_395) {
    v_950 = sub_341;
  } else {
    v_950 = sub_339;
  };
  if (controller_blind_failed_recovered) {
    sub_338 = sub_339;
  } else {
    sub_338 = v_950;
  };
  sub_337 = sub_338;
  if (controller_air_failed_recovered) {
    v_956 = sub_337;
  } else {
    v_956 = sub_328;
  };
  if (controller_c_air_2) {
    v_957 = v_956;
  } else {
    v_957 = sub_327;
  };
  if (controller_c_air_1) {
    sub_325 = sub_326;
  } else {
    sub_325 = v_957;
  };
  if (controller_air_failed_recovered) {
    sub_343 = sub_328;
  } else {
    sub_343 = sub_141;
  };
  if (controller_change_shift) {
    v_943 = sub_50;
    sub_350 = sub_57;
  } else {
    v_943 = sub_57;
    sub_350 = sub_50;
  };
  if (controller_ck_1) {
    sub_349 = v_943;
  } else {
    sub_349 = sub_350;
  };
  if (controller_c_pc) {
    v_944 = sub_59;
  } else {
    v_944 = sub_349;
  };
  if (controller_c_window) {
    sub_348 = v_944;
  } else {
    sub_348 = sub_134;
  };
  sub_347 = sub_348;
  if (controller_change_shift) {
    v_941 = false;
    sub_353 = sub_57;
  } else {
    v_941 = sub_57;
    sub_353 = false;
  };
  if (controller_ck_1) {
    sub_352 = v_941;
  } else {
    sub_352 = sub_353;
  };
  if (controller_c_pc) {
    v_942 = sub_69;
  } else {
    v_942 = sub_352;
  };
  if (controller_c_window) {
    sub_351 = v_942;
  } else {
    sub_351 = sub_139;
  };
  if (controller_v_395) {
    v_945 = sub_351;
  } else {
    v_945 = sub_347;
  };
  if (controller_blind_failed_recovered) {
    sub_346 = sub_347;
  } else {
    sub_346 = v_945;
  };
  sub_345 = sub_346;
  if (controller_air_failed_recovered) {
    v_960 = sub_328;
  } else {
    v_960 = sub_345;
  };
  sub_344 = sub_345;
  if (controller_c_air_2) {
    v_958 = sub_343;
  } else {
    v_958 = sub_344;
  };
  sub_355 = sub_337;
  if (controller_c_air_2) {
    v_961 = v_960;
  } else {
    v_961 = sub_355;
  };
  if (controller_c_air_1) {
    v_962 = v_961;
  } else {
    v_962 = sub_159;
  };
  sub_354 = sub_355;
  if (controller_c_air_1) {
    v_959 = v_958;
  } else {
    v_959 = sub_354;
  };
  if (controller_v_448) {
    sub_324 = v_959;
  } else {
    sub_324 = sub_325;
  };
  sub_356 = sub_344;
  if (controller_v_450) {
    sub_323 = sub_356;
  } else {
    sub_323 = sub_324;
  };
  if (controller_air_failed_recovered) {
    v_938 = sub_345;
  } else {
    v_938 = sub_328;
  };
  if (controller_c_air_2) {
    v_939 = v_938;
  } else {
    v_939 = sub_327;
  };
  if (controller_c_air_1) {
    v_940 = v_939;
  } else {
    v_940 = sub_326;
  };
  if (controller_air_failed_recovered) {
    sub_359 = sub_328;
  } else {
    sub_359 = sub_337;
  };
  if (controller_c_air_2) {
    v_937 = sub_359;
  } else {
    v_937 = sub_344;
  };
  if (controller_c_air_1) {
    sub_358 = sub_159;
  } else {
    sub_358 = v_937;
  };
  if (controller_v_448) {
    sub_357 = v_940;
  } else {
    sub_357 = sub_358;
  };
  if (controller_air_failed_recovered) {
    v_935 = sub_141;
  } else {
    v_935 = sub_328;
  };
  if (controller_c_air_2) {
    v_936 = v_935;
  } else {
    v_936 = sub_327;
  };
  if (controller_c_air_1) {
    sub_360 = v_936;
  } else {
    sub_360 = sub_326;
  };
  if (controller_v_448) {
    v_963 = v_962;
  } else {
    v_963 = sub_360;
  };
  if (controller_v_450) {
    v_964 = v_963;
  } else {
    v_964 = sub_357;
  };
  if (controller_v_449) {
    sub_322 = v_964;
  } else {
    sub_322 = sub_323;
  };
  sub_321 = sub_322;
  if (controller_c_pc) {
    v_926 = sub_48;
  } else {
    v_926 = sub_349;
  };
  if (controller_c_window) {
    sub_369 = v_926;
  } else {
    sub_369 = sub_134;
  };
  sub_368 = sub_369;
  if (controller_c_pc) {
    v_925 = false;
  } else {
    v_925 = sub_352;
  };
  if (controller_c_window) {
    sub_370 = v_925;
  } else {
    sub_370 = sub_139;
  };
  if (controller_v_395) {
    v_927 = sub_370;
  } else {
    v_927 = sub_368;
  };
  if (controller_blind_failed_recovered) {
    sub_367 = sub_368;
  } else {
    sub_367 = v_927;
  };
  sub_366 = sub_367;
  if (controller_air_failed_recovered) {
    v_930 = sub_328;
  } else {
    v_930 = sub_366;
  };
  if (controller_c_air_2) {
    v_931 = v_930;
  } else {
    v_931 = sub_355;
  };
  if (controller_c_air_1) {
    v_932 = v_931;
  } else {
    v_932 = sub_159;
  };
  if (controller_v_448) {
    v_933 = v_932;
  } else {
    v_933 = sub_360;
  };
  sub_365 = sub_366;
  if (controller_c_air_2) {
    v_928 = sub_343;
  } else {
    v_928 = sub_365;
  };
  if (controller_c_air_1) {
    v_929 = v_928;
  } else {
    v_929 = sub_354;
  };
  if (controller_v_448) {
    sub_364 = v_929;
  } else {
    sub_364 = sub_325;
  };
  sub_371 = sub_365;
  if (controller_v_450) {
    sub_363 = sub_371;
  } else {
    sub_363 = sub_364;
  };
  if (controller_air_failed_recovered) {
    v_922 = sub_366;
  } else {
    v_922 = sub_328;
  };
  if (controller_c_air_2) {
    v_923 = v_922;
  } else {
    v_923 = sub_327;
  };
  if (controller_c_air_1) {
    v_924 = v_923;
  } else {
    v_924 = sub_326;
  };
  if (controller_c_air_2) {
    v_921 = sub_359;
  } else {
    v_921 = sub_365;
  };
  if (controller_c_air_1) {
    sub_373 = sub_159;
  } else {
    sub_373 = v_921;
  };
  if (controller_v_448) {
    sub_372 = v_924;
  } else {
    sub_372 = sub_373;
  };
  if (controller_v_450) {
    v_934 = v_933;
  } else {
    v_934 = sub_372;
  };
  if (controller_v_449) {
    sub_362 = v_934;
  } else {
    sub_362 = sub_363;
  };
  sub_361 = sub_362;
  if (controller_v_410) {
    sub_320 = sub_361;
  } else {
    sub_320 = sub_321;
  };
  if (controller_ck_1) {
    sub_387 = sub_122;
  } else {
    sub_387 = sub_123;
  };
  sub_386 = sub_387;
  if (controller_c_window) {
    sub_385 = sub_15;
  } else {
    sub_385 = sub_386;
  };
  sub_384 = sub_385;
  if (controller_c_window) {
    sub_388 = sub_40;
  } else {
    sub_388 = sub_386;
  };
  if (controller_v_395) {
    v_909 = sub_388;
  } else {
    v_909 = sub_384;
  };
  if (controller_blind_failed_recovered) {
    sub_383 = sub_384;
  } else {
    sub_383 = v_909;
  };
  if (controller_c_door) {
    v_910 = sub_41;
    sub_382 = sub_383;
  } else {
    v_910 = sub_383;
    sub_382 = sub_41;
  };
  if (controller_ck_11_1) {
    sub_381 = v_910;
  } else {
    sub_381 = sub_382;
  };
  if (controller_air_failed_recovered) {
    v_913 = sub_381;
  } else {
    v_913 = sub_186;
  };
  sub_380 = sub_381;
  sub_379 = sub_380;
  if (controller_c_pc) {
    v_907 = sub_181;
  } else {
    v_907 = sub_53;
  };
  if (controller_c_window) {
    sub_392 = v_907;
  } else {
    sub_392 = sub_77;
  };
  sub_391 = sub_392;
  if (controller_v_395) {
    v_908 = sub_65;
  } else {
    v_908 = sub_391;
  };
  if (controller_blind_failed_recovered) {
    sub_390 = sub_391;
  } else {
    sub_390 = v_908;
  };
  sub_389 = sub_390;
  if (controller_air_failed_recovered) {
    v_911 = sub_389;
  } else {
    v_911 = sub_381;
  };
  if (controller_c_air_2) {
    v_912 = v_911;
  } else {
    v_912 = sub_380;
  };
  if (controller_c_air_1) {
    sub_378 = sub_379;
  } else {
    sub_378 = v_912;
  };
  if (controller_change_shift) {
    v_903 = sub_61;
    sub_398 = sub_53;
  } else {
    v_903 = sub_53;
    sub_398 = sub_61;
  };
  if (controller_ck_1) {
    v_904 = v_903;
  } else {
    v_904 = sub_398;
  };
  if (controller_c_pc) {
    v_905 = sub_181;
  } else {
    v_905 = v_904;
  };
  if (controller_c_window) {
    sub_397 = v_905;
  } else {
    sub_397 = sub_77;
  };
  sub_396 = sub_397;
  if (controller_c_pc) {
    v_902 = false;
  } else {
    v_902 = sub_87;
  };
  if (controller_c_window) {
    sub_399 = v_902;
  } else {
    sub_399 = sub_68;
  };
  if (controller_v_395) {
    v_906 = sub_399;
  } else {
    v_906 = sub_396;
  };
  if (controller_blind_failed_recovered) {
    sub_395 = sub_396;
  } else {
    sub_395 = v_906;
  };
  sub_394 = sub_395;
  if (controller_air_failed_recovered) {
    v_916 = sub_381;
  } else {
    v_916 = sub_394;
  };
  sub_393 = sub_394;
  if (controller_c_air_2) {
    v_914 = v_913;
  } else {
    v_914 = sub_393;
  };
  sub_400 = sub_389;
  if (controller_c_air_2) {
    v_917 = v_916;
  } else {
    v_917 = sub_400;
  };
  if (controller_c_air_1) {
    v_918 = v_917;
    v_915 = v_914;
  } else {
    v_918 = sub_204;
    v_915 = sub_400;
  };
  if (controller_v_448) {
    sub_377 = v_915;
  } else {
    sub_377 = sub_378;
  };
  sub_401 = sub_393;
  if (controller_v_450) {
    sub_376 = sub_401;
  } else {
    sub_376 = sub_377;
  };
  if (controller_air_failed_recovered) {
    v_899 = sub_394;
  } else {
    v_899 = sub_381;
  };
  if (controller_c_air_2) {
    v_900 = v_899;
  } else {
    v_900 = sub_380;
  };
  if (controller_c_air_1) {
    v_901 = v_900;
  } else {
    v_901 = sub_379;
  };
  if (controller_air_failed_recovered) {
    v_897 = sub_381;
  } else {
    v_897 = sub_389;
  };
  if (controller_c_air_2) {
    v_898 = v_897;
  } else {
    v_898 = sub_393;
  };
  if (controller_c_air_1) {
    sub_403 = sub_204;
  } else {
    sub_403 = v_898;
  };
  if (controller_v_448) {
    sub_402 = v_901;
  } else {
    sub_402 = sub_403;
  };
  if (controller_air_failed_recovered) {
    v_895 = sub_186;
  } else {
    v_895 = sub_381;
  };
  if (controller_c_air_2) {
    v_896 = v_895;
  } else {
    v_896 = sub_380;
  };
  if (controller_c_air_1) {
    sub_404 = v_896;
  } else {
    sub_404 = sub_379;
  };
  if (controller_v_448) {
    v_919 = v_918;
  } else {
    v_919 = sub_404;
  };
  if (controller_v_450) {
    v_920 = v_919;
  } else {
    v_920 = sub_402;
  };
  if (controller_v_449) {
    sub_375 = v_920;
  } else {
    sub_375 = sub_376;
  };
  sub_374 = sub_375;
  if (controller_c_window) {
    sub_415 = sub_107;
  } else {
    sub_415 = sub_335;
  };
  sub_414 = sub_415;
  if (controller_c_window) {
    sub_416 = sub_125;
  } else {
    sub_416 = sub_335;
  };
  if (controller_v_395) {
    v_883 = sub_416;
  } else {
    v_883 = sub_414;
  };
  if (controller_blind_failed_recovered) {
    sub_413 = sub_414;
  } else {
    sub_413 = v_883;
  };
  if (controller_c_door) {
    v_884 = sub_126;
    sub_412 = sub_413;
  } else {
    v_884 = sub_413;
    sub_412 = sub_126;
  };
  if (controller_ck_11_1) {
    sub_411 = v_884;
  } else {
    sub_411 = sub_412;
  };
  sub_410 = sub_411;
  sub_409 = sub_410;
  if (controller_change_shift) {
    v_879 = sub_182;
    sub_421 = sub_133;
  } else {
    v_879 = sub_133;
    sub_421 = sub_182;
  };
  if (controller_ck_1) {
    v_880 = v_879;
  } else {
    v_880 = sub_421;
  };
  if (controller_c_pc) {
    v_881 = sub_181;
  } else {
    v_881 = v_880;
  };
  sub_422 = sub_75;
  if (controller_c_window) {
    sub_420 = v_881;
  } else {
    sub_420 = sub_422;
  };
  sub_419 = sub_420;
  if (controller_v_395) {
    v_882 = sub_136;
  } else {
    v_882 = sub_419;
  };
  if (controller_blind_failed_recovered) {
    sub_418 = sub_419;
  } else {
    sub_418 = v_882;
  };
  sub_417 = sub_418;
  if (controller_air_failed_recovered) {
    v_885 = sub_417;
  } else {
    v_885 = sub_411;
  };
  if (controller_c_air_2) {
    v_886 = v_885;
  } else {
    v_886 = sub_410;
  };
  if (controller_c_air_1) {
    sub_408 = sub_409;
  } else {
    sub_408 = v_886;
  };
  if (controller_c_pc) {
    v_877 = sub_59;
  } else {
    v_877 = sub_145;
  };
  if (controller_c_window) {
    v_878 = v_877;
  } else {
    v_878 = sub_144;
  };
  if (controller_c_pc) {
    v_875 = sub_59;
  } else {
    v_875 = sub_135;
  };
  if (controller_c_window) {
    v_876 = v_875;
  } else {
    v_876 = sub_134;
  };
  if (controller_c_closet) {
    sub_425 = v_876;
  } else {
    sub_425 = v_878;
  };
  sub_424 = sub_425;
  sub_423 = sub_424;
  if (controller_air_failed_recovered) {
    v_887 = sub_411;
  } else {
    v_887 = sub_423;
  };
  if (controller_change_shift) {
    v_871 = sub_61;
    sub_431 = sub_133;
  } else {
    v_871 = sub_133;
    sub_431 = sub_61;
  };
  if (controller_ck_1) {
    v_872 = v_871;
  } else {
    v_872 = sub_431;
  };
  if (controller_c_pc) {
    v_873 = sub_75;
  } else {
    v_873 = v_872;
  };
  if (controller_c_window) {
    sub_430 = v_873;
  } else {
    sub_430 = sub_422;
  };
  sub_429 = sub_430;
  if (controller_v_395) {
    v_874 = sub_254;
  } else {
    v_874 = sub_429;
  };
  if (controller_blind_failed_recovered) {
    sub_428 = sub_429;
  } else {
    sub_428 = v_874;
  };
  sub_427 = sub_428;
  if (controller_air_failed_recovered) {
    v_890 = sub_411;
  } else {
    v_890 = sub_427;
  };
  sub_426 = sub_427;
  if (controller_c_air_2) {
    v_888 = v_887;
  } else {
    v_888 = sub_426;
  };
  sub_432 = sub_417;
  if (controller_c_air_2) {
    v_891 = v_890;
  } else {
    v_891 = sub_432;
  };
  if (controller_c_air_1) {
    v_889 = v_888;
  } else {
    v_889 = sub_432;
  };
  if (controller_v_448) {
    sub_407 = v_889;
  } else {
    sub_407 = sub_408;
  };
  sub_433 = sub_426;
  if (controller_v_450) {
    sub_406 = sub_433;
  } else {
    sub_406 = sub_407;
  };
  if (controller_air_failed_recovered) {
    v_868 = sub_427;
  } else {
    v_868 = sub_411;
  };
  if (controller_c_air_2) {
    v_869 = v_868;
  } else {
    v_869 = sub_410;
  };
  if (controller_c_air_1) {
    v_870 = v_869;
  } else {
    v_870 = sub_409;
  };
  if (controller_air_failed_recovered) {
    v_866 = sub_411;
  } else {
    v_866 = sub_417;
  };
  if (controller_c_air_2) {
    v_867 = v_866;
  } else {
    v_867 = sub_426;
  };
  sub_437 = sub_423;
  sub_436 = sub_437;
  if (controller_c_air_1) {
    v_892 = v_891;
    sub_435 = sub_436;
  } else {
    v_892 = sub_436;
    sub_435 = v_867;
  };
  if (controller_v_448) {
    sub_434 = v_870;
  } else {
    sub_434 = sub_435;
  };
  if (controller_air_failed_recovered) {
    v_864 = sub_423;
  } else {
    v_864 = sub_411;
  };
  if (controller_c_air_2) {
    v_865 = v_864;
  } else {
    v_865 = sub_410;
  };
  if (controller_c_air_1) {
    sub_438 = v_865;
  } else {
    sub_438 = sub_409;
  };
  if (controller_v_448) {
    v_893 = v_892;
  } else {
    v_893 = sub_438;
  };
  if (controller_v_450) {
    v_894 = v_893;
  } else {
    v_894 = sub_434;
  };
  if (controller_v_449) {
    sub_405 = v_894;
  } else {
    sub_405 = sub_406;
  };
  if (controller_v_410) {
    v_1180 = sub_405;
  } else {
    v_1180 = sub_374;
  };
  if (controller_v_411) {
    v_1181 = v_1180;
  } else {
    v_1181 = sub_320;
  };
  if (controller_air_failed_recovered) {
    v_859 = sub_381;
  } else {
    v_859 = sub_231;
  };
  if (controller_c_air_2) {
    v_860 = v_859;
  } else {
    v_860 = sub_234;
  };
  if (controller_c_air_1) {
    v_861 = v_860;
  } else {
    v_861 = sub_239;
  };
  if (controller_air_failed_recovered) {
    v_856 = sub_381;
  } else {
    v_856 = sub_227;
  };
  if (controller_c_air_2) {
    v_857 = v_856;
  } else {
    v_857 = sub_230;
  };
  if (controller_c_air_1) {
    v_858 = v_857;
  } else {
    v_858 = sub_233;
  };
  if (controller_air_failed_recovered) {
    v_854 = sub_225;
  } else {
    v_854 = sub_381;
  };
  if (controller_c_air_2) {
    v_855 = v_854;
  } else {
    v_855 = sub_380;
  };
  if (controller_c_air_1) {
    sub_443 = sub_379;
  } else {
    sub_443 = v_855;
  };
  if (controller_v_448) {
    sub_442 = v_858;
  } else {
    sub_442 = sub_443;
  };
  if (controller_v_450) {
    sub_441 = sub_235;
  } else {
    sub_441 = sub_442;
  };
  if (controller_air_failed_recovered) {
    v_851 = sub_231;
  } else {
    v_851 = sub_381;
  };
  if (controller_c_air_2) {
    v_852 = v_851;
  } else {
    v_852 = sub_380;
  };
  if (controller_c_air_1) {
    v_853 = v_852;
  } else {
    v_853 = sub_379;
  };
  if (controller_air_failed_recovered) {
    v_849 = sub_381;
  } else {
    v_849 = sub_225;
  };
  if (controller_c_air_2) {
    v_850 = v_849;
  } else {
    v_850 = sub_230;
  };
  if (controller_c_air_1) {
    sub_445 = sub_239;
  } else {
    sub_445 = v_850;
  };
  if (controller_v_448) {
    sub_444 = v_853;
  } else {
    sub_444 = sub_445;
  };
  if (controller_air_failed_recovered) {
    v_847 = sub_227;
  } else {
    v_847 = sub_381;
  };
  if (controller_c_air_2) {
    v_848 = v_847;
  } else {
    v_848 = sub_380;
  };
  if (controller_c_air_1) {
    sub_446 = v_848;
  } else {
    sub_446 = sub_379;
  };
  if (controller_v_448) {
    v_862 = v_861;
  } else {
    v_862 = sub_446;
  };
  if (controller_v_450) {
    v_863 = v_862;
  } else {
    v_863 = sub_444;
  };
  if (controller_v_449) {
    sub_440 = v_863;
  } else {
    sub_440 = sub_441;
  };
  sub_439 = sub_440;
  if (controller_air_failed_recovered) {
    v_842 = sub_411;
  } else {
    v_842 = sub_252;
  };
  if (controller_c_air_2) {
    v_843 = v_842;
  } else {
    v_843 = sub_257;
  };
  if (controller_c_air_1) {
    v_844 = v_843;
  } else {
    v_844 = sub_262;
  };
  if (controller_air_failed_recovered) {
    v_839 = sub_411;
  } else {
    v_839 = sub_248;
  };
  if (controller_c_air_2) {
    v_840 = v_839;
  } else {
    v_840 = sub_251;
  };
  if (controller_c_air_1) {
    v_841 = v_840;
  } else {
    v_841 = sub_256;
  };
  if (controller_air_failed_recovered) {
    v_837 = sub_246;
  } else {
    v_837 = sub_411;
  };
  if (controller_c_air_2) {
    v_838 = v_837;
  } else {
    v_838 = sub_410;
  };
  if (controller_c_air_1) {
    sub_450 = sub_409;
  } else {
    sub_450 = v_838;
  };
  if (controller_v_448) {
    sub_449 = v_841;
  } else {
    sub_449 = sub_450;
  };
  if (controller_v_450) {
    sub_448 = sub_258;
  } else {
    sub_448 = sub_449;
  };
  if (controller_air_failed_recovered) {
    v_834 = sub_252;
  } else {
    v_834 = sub_411;
  };
  if (controller_c_air_2) {
    v_835 = v_834;
  } else {
    v_835 = sub_410;
  };
  if (controller_c_air_1) {
    v_836 = v_835;
  } else {
    v_836 = sub_409;
  };
  if (controller_air_failed_recovered) {
    v_832 = sub_411;
  } else {
    v_832 = sub_246;
  };
  if (controller_c_air_2) {
    v_833 = v_832;
  } else {
    v_833 = sub_251;
  };
  if (controller_c_air_1) {
    sub_452 = sub_262;
  } else {
    sub_452 = v_833;
  };
  if (controller_v_448) {
    sub_451 = v_836;
  } else {
    sub_451 = sub_452;
  };
  if (controller_air_failed_recovered) {
    v_830 = sub_248;
  } else {
    v_830 = sub_411;
  };
  if (controller_c_air_2) {
    v_831 = v_830;
  } else {
    v_831 = sub_410;
  };
  if (controller_c_air_1) {
    sub_453 = v_831;
  } else {
    sub_453 = sub_409;
  };
  if (controller_v_448) {
    v_845 = v_844;
  } else {
    v_845 = sub_453;
  };
  if (controller_v_450) {
    v_846 = v_845;
  } else {
    v_846 = sub_451;
  };
  if (controller_v_449) {
    sub_447 = v_846;
  } else {
    sub_447 = sub_448;
  };
  if (controller_v_410) {
    v_1182 = sub_447;
  } else {
    v_1182 = sub_439;
  };
  if (controller_v_411) {
    v_1183 = v_1182;
  } else {
    v_1183 = sub_361;
  };
  if (controller_light_failed_recovered) {
    v_1184 = v_1181;
  } else {
    v_1184 = v_1183;
  };
  if (controller_ck_1) {
    sub_468 = sub_109;
  } else {
    sub_468 = sub_114;
  };
  if (controller_c_window) {
    sub_467 = sub_40;
  } else {
    sub_467 = sub_468;
  };
  sub_466 = sub_467;
  sub_465 = sub_466;
  if (controller_c_door) {
    v_818 = sub_41;
    sub_464 = sub_465;
  } else {
    v_818 = sub_465;
    sub_464 = sub_41;
  };
  if (controller_ck_11_1) {
    sub_463 = v_818;
  } else {
    sub_463 = sub_464;
  };
  if (controller_air_failed_recovered) {
    v_821 = sub_463;
  } else {
    v_821 = false;
  };
  sub_462 = sub_463;
  sub_461 = sub_462;
  sub_469 = sub_41;
  if (controller_air_failed_recovered) {
    v_819 = sub_469;
  } else {
    v_819 = sub_463;
  };
  if (controller_c_air_2) {
    v_820 = v_819;
  } else {
    v_820 = sub_462;
  };
  if (controller_c_air_1) {
    sub_460 = sub_461;
  } else {
    sub_460 = v_820;
  };
  if (controller_change_shift) {
    v_815 = false;
    sub_475 = sub_31;
  } else {
    v_815 = sub_31;
    sub_475 = false;
  };
  if (controller_ck_1) {
    v_816 = v_815;
  } else {
    v_816 = sub_475;
  };
  if (controller_c_pc) {
    v_817 = false;
  } else {
    v_817 = v_816;
  };
  if (controller_c_window) {
    sub_474 = v_817;
  } else {
    sub_474 = false;
  };
  sub_473 = sub_474;
  sub_472 = sub_473;
  sub_471 = sub_472;
  if (controller_air_failed_recovered) {
    v_824 = sub_463;
  } else {
    v_824 = sub_471;
  };
  sub_470 = sub_471;
  if (controller_c_air_2) {
    v_822 = v_821;
  } else {
    v_822 = sub_470;
  };
  sub_476 = sub_469;
  if (controller_c_air_2) {
    v_825 = v_824;
  } else {
    v_825 = sub_476;
  };
  if (controller_c_air_1) {
    v_826 = v_825;
    v_823 = v_822;
  } else {
    v_826 = false;
    v_823 = sub_476;
  };
  if (controller_v_448) {
    sub_459 = v_823;
  } else {
    sub_459 = sub_460;
  };
  sub_477 = sub_470;
  if (controller_v_450) {
    sub_458 = sub_477;
  } else {
    sub_458 = sub_459;
  };
  if (controller_air_failed_recovered) {
    v_812 = sub_471;
  } else {
    v_812 = sub_463;
  };
  if (controller_c_air_2) {
    v_813 = v_812;
  } else {
    v_813 = sub_462;
  };
  if (controller_c_air_1) {
    v_814 = v_813;
  } else {
    v_814 = sub_461;
  };
  if (controller_air_failed_recovered) {
    v_810 = sub_463;
  } else {
    v_810 = sub_469;
  };
  if (controller_c_air_2) {
    v_811 = v_810;
  } else {
    v_811 = sub_470;
  };
  if (controller_c_air_1) {
    sub_479 = false;
  } else {
    sub_479 = v_811;
  };
  if (controller_v_448) {
    sub_478 = v_814;
  } else {
    sub_478 = sub_479;
  };
  if (controller_air_failed_recovered) {
    v_808 = false;
  } else {
    v_808 = sub_463;
  };
  if (controller_c_air_2) {
    v_809 = v_808;
  } else {
    v_809 = sub_462;
  };
  if (controller_c_air_1) {
    sub_480 = v_809;
  } else {
    sub_480 = sub_461;
  };
  if (controller_v_448) {
    v_827 = v_826;
  } else {
    v_827 = sub_480;
  };
  if (controller_v_450) {
    v_828 = v_827;
  } else {
    v_828 = sub_478;
  };
  if (controller_v_449) {
    sub_457 = v_828;
  } else {
    sub_457 = sub_458;
  };
  sub_456 = sub_457;
  if (controller_c_window) {
    sub_492 = sub_108;
  } else {
    sub_492 = sub_335;
  };
  sub_491 = sub_492;
  if (controller_c_window) {
    sub_493 = false;
  } else {
    sub_493 = sub_335;
  };
  if (controller_v_395) {
    v_796 = sub_493;
  } else {
    v_796 = sub_491;
  };
  if (controller_blind_failed_recovered) {
    sub_490 = sub_491;
  } else {
    sub_490 = v_796;
  };
  if (controller_c_door) {
    v_797 = false;
    sub_489 = sub_490;
  } else {
    v_797 = sub_490;
    sub_489 = false;
  };
  if (controller_ck_11_1) {
    sub_488 = v_797;
  } else {
    sub_488 = sub_489;
  };
  if (controller_air_failed_recovered) {
    v_800 = sub_488;
  } else {
    v_800 = sub_248;
  };
  sub_487 = sub_488;
  sub_486 = sub_487;
  if (controller_c_pc) {
    v_795 = false;
  } else {
    v_795 = sub_140;
  };
  if (controller_c_window) {
    sub_497 = v_795;
  } else {
    sub_497 = sub_139;
  };
  sub_496 = sub_497;
  sub_495 = sub_496;
  sub_494 = sub_495;
  if (controller_air_failed_recovered) {
    v_798 = sub_494;
  } else {
    v_798 = sub_488;
  };
  if (controller_c_air_2) {
    v_799 = v_798;
  } else {
    v_799 = sub_487;
  };
  if (controller_c_air_1) {
    sub_485 = sub_486;
  } else {
    sub_485 = v_799;
  };
  sub_502 = sub_139;
  sub_501 = sub_502;
  sub_500 = sub_501;
  sub_499 = sub_500;
  if (controller_air_failed_recovered) {
    v_803 = sub_488;
  } else {
    v_803 = sub_499;
  };
  sub_498 = sub_499;
  if (controller_c_air_2) {
    v_801 = v_800;
  } else {
    v_801 = sub_498;
  };
  sub_503 = sub_494;
  if (controller_c_air_2) {
    v_804 = v_803;
  } else {
    v_804 = sub_503;
  };
  if (controller_c_air_1) {
    v_805 = v_804;
    v_802 = v_801;
  } else {
    v_805 = sub_262;
    v_802 = sub_503;
  };
  if (controller_v_448) {
    sub_484 = v_802;
  } else {
    sub_484 = sub_485;
  };
  sub_504 = sub_498;
  if (controller_v_450) {
    sub_483 = sub_504;
  } else {
    sub_483 = sub_484;
  };
  if (controller_air_failed_recovered) {
    v_792 = sub_499;
  } else {
    v_792 = sub_488;
  };
  if (controller_c_air_2) {
    v_793 = v_792;
  } else {
    v_793 = sub_487;
  };
  if (controller_c_air_1) {
    v_794 = v_793;
  } else {
    v_794 = sub_486;
  };
  if (controller_air_failed_recovered) {
    v_790 = sub_488;
  } else {
    v_790 = sub_494;
  };
  if (controller_c_air_2) {
    v_791 = v_790;
  } else {
    v_791 = sub_498;
  };
  if (controller_c_air_1) {
    sub_506 = sub_262;
  } else {
    sub_506 = v_791;
  };
  if (controller_v_448) {
    sub_505 = v_794;
  } else {
    sub_505 = sub_506;
  };
  if (controller_air_failed_recovered) {
    v = sub_248;
  } else {
    v = sub_488;
  };
  if (controller_c_air_2) {
    v_789 = v;
  } else {
    v_789 = sub_487;
  };
  if (controller_c_air_1) {
    sub_507 = v_789;
  } else {
    sub_507 = sub_486;
  };
  if (controller_v_448) {
    v_806 = v_805;
  } else {
    v_806 = sub_507;
  };
  if (controller_v_450) {
    v_807 = v_806;
  } else {
    v_807 = sub_505;
  };
  if (controller_v_449) {
    sub_482 = v_807;
  } else {
    sub_482 = sub_483;
  };
  sub_481 = sub_482;
  if (controller_v_410) {
    v_829 = sub_481;
  } else {
    v_829 = sub_456;
  };
  if (controller_v_411) {
    sub_455 = v_829;
  } else {
    sub_455 = sub_361;
  };
  sub_454 = sub_455;
  if (controller_c_light_1) {
    v_1185 = v_1184;
  } else {
    v_1185 = sub_454;
  };
  if (controller_v_410) {
    sub_508 = sub_456;
  } else {
    sub_508 = sub_481;
  };
  if (controller_v_411) {
    v_1187 = sub_508;
    v_1186 = sub_361;
  } else {
    v_1187 = sub_361;
    v_1186 = sub_508;
  };
  if (controller_light_failed_recovered) {
    v_1188 = v_1186;
  } else {
    v_1188 = v_1187;
  };
  if (controller_c_light_1) {
    v_1189 = v_1188;
  } else {
    v_1189 = sub_454;
  };
  if (controller_light_switch) {
    v_1190 = v_1185;
  } else {
    v_1190 = v_1189;
  };
  if (p_controller_c_light_2) {
    sub_0 = v_1190;
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
  int controller_pnr_3, int controller_v_450, int controller_v_449,
  int controller_v_448, int controller_pnr_2, int controller_v_411,
  int controller_v_410, int controller_pnr_1, int controller_v_395,
  int controller_v_394, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_closet, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_1_out* _out) {
  
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
  v_1504 = !(controller_ck_17_1);
  sub_21 = (v_1504&&false);
  sub_22 = (controller_ck_17_1&&false);
  if (controller_cleaner) {
    sub_20 = sub_21;
  } else {
    sub_20 = sub_22;
  };
  sub_23 = false;
  if (controller_worker) {
    v_1505 = sub_23;
    sub_19 = sub_20;
  } else {
    v_1505 = sub_20;
    sub_19 = sub_23;
  };
  if (controller_ck_15_1) {
    sub_18 = v_1505;
  } else {
    sub_18 = sub_19;
  };
  if (controller_change_shift) {
    v_1506 = false;
    sub_17 = sub_18;
  } else {
    v_1506 = sub_18;
    sub_17 = false;
  };
  if (controller_ck_1) {
    sub_16 = v_1506;
  } else {
    sub_16 = sub_17;
  };
  sub_25 = sub_23;
  if (controller_cleaner) {
    sub_28 = sub_22;
  } else {
    sub_28 = sub_21;
  };
  if (controller_worker) {
    sub_27 = sub_28;
    sub_29 = false;
  } else {
    sub_27 = false;
    sub_29 = sub_28;
  };
  if (controller_ck_15_1) {
    sub_26 = sub_29;
  } else {
    sub_26 = sub_27;
  };
  if (controller_change_shift) {
    v_1507 = sub_26;
    sub_24 = sub_25;
  } else {
    v_1507 = sub_25;
    sub_24 = sub_26;
  };
  if (controller_ck_1) {
    v_1508 = v_1507;
  } else {
    v_1508 = sub_24;
  };
  if (controller_c_pc) {
    v_1509 = sub_16;
  } else {
    v_1509 = v_1508;
  };
  sub_31 = sub_18;
  sub_30 = sub_31;
  if (controller_c_window) {
    sub_15 = v_1509;
  } else {
    sub_15 = sub_30;
  };
  sub_14 = sub_15;
  if (controller_c_pc) {
    sub_33 = false;
  } else {
    sub_33 = sub_26;
  };
  if (controller_c_window) {
    sub_32 = sub_33;
  } else {
    sub_32 = sub_30;
  };
  if (controller_v_395) {
    v_1510 = sub_32;
  } else {
    v_1510 = sub_14;
  };
  if (controller_blind_failed_recovered) {
    sub_13 = sub_14;
  } else {
    sub_13 = v_1510;
  };
  if (controller_c_window) {
    sub_36 = sub_33;
  } else {
    sub_36 = false;
  };
  sub_35 = sub_36;
  sub_34 = sub_35;
  if (controller_c_door) {
    v_1511 = sub_34;
    sub_12 = sub_13;
  } else {
    v_1511 = sub_13;
    sub_12 = sub_34;
  };
  if (controller_ck_11_1) {
    sub_11 = v_1511;
  } else {
    sub_11 = sub_12;
  };
  sub_10 = sub_11;
  sub_9 = sub_10;
  if (controller_ck_15_1) {
    sub_43 = sub_27;
  } else {
    sub_43 = sub_29;
  };
  if (controller_change_shift) {
    sub_42 = false;
    sub_44 = sub_43;
  } else {
    sub_42 = sub_43;
    sub_44 = false;
  };
  if (controller_ck_1) {
    sub_41 = sub_44;
  } else {
    sub_41 = sub_42;
  };
  sub_45 = sub_28;
  if (controller_c_pc) {
    v_1502 = sub_41;
  } else {
    v_1502 = sub_45;
  };
  sub_47 = sub_43;
  sub_46 = sub_47;
  if (controller_c_window) {
    sub_40 = v_1502;
  } else {
    sub_40 = sub_46;
  };
  sub_39 = sub_40;
  if (controller_change_shift) {
    v_1499 = sub_26;
    sub_49 = sub_45;
  } else {
    v_1499 = sub_45;
    sub_49 = sub_26;
  };
  if (controller_ck_1) {
    v_1500 = v_1499;
  } else {
    v_1500 = sub_49;
  };
  if (controller_c_pc) {
    v_1501 = false;
  } else {
    v_1501 = v_1500;
  };
  if (controller_ck_1) {
    sub_51 = sub_42;
  } else {
    sub_51 = sub_44;
  };
  sub_50 = sub_51;
  if (controller_c_window) {
    sub_48 = v_1501;
  } else {
    sub_48 = sub_50;
  };
  if (controller_v_395) {
    v_1503 = sub_48;
  } else {
    v_1503 = sub_39;
  };
  if (controller_blind_failed_recovered) {
    sub_38 = sub_39;
  } else {
    sub_38 = v_1503;
  };
  sub_37 = sub_38;
  if (controller_air_failed_recovered) {
    v_1512 = sub_37;
  } else {
    v_1512 = sub_11;
  };
  if (controller_c_air_2) {
    v_1513 = v_1512;
  } else {
    v_1513 = sub_10;
  };
  if (controller_c_air_1) {
    sub_8 = sub_9;
  } else {
    sub_8 = v_1513;
  };
  if (controller_c_pc) {
    sub_56 = sub_47;
  } else {
    sub_56 = sub_31;
  };
  if (controller_c_closet) {
    sub_55 = sub_46;
  } else {
    sub_55 = sub_56;
  };
  sub_54 = sub_55;
  sub_53 = sub_54;
  if (controller_air_failed_recovered) {
    sub_52 = sub_11;
  } else {
    sub_52 = sub_53;
  };
  v_1496 = !(controller_ck_17_1);
  sub_67 = (v_1496||false);
  sub_68 = (controller_ck_17_1||false);
  if (controller_cleaner) {
    sub_66 = sub_67;
  } else {
    sub_66 = sub_68;
  };
  if (controller_worker) {
    sub_65 = false;
    sub_69 = sub_66;
  } else {
    sub_65 = sub_66;
    sub_69 = false;
  };
  if (controller_ck_15_1) {
    sub_64 = sub_69;
  } else {
    sub_64 = sub_65;
  };
  if (controller_change_shift) {
    sub_63 = sub_64;
    sub_70 = sub_43;
  } else {
    sub_63 = sub_43;
    sub_70 = sub_64;
  };
  if (controller_ck_1) {
    sub_62 = sub_70;
  } else {
    sub_62 = sub_63;
  };
  if (controller_change_shift) {
    v_1495 = sub_43;
    sub_72 = sub_45;
  } else {
    v_1495 = sub_45;
    sub_72 = sub_43;
  };
  if (controller_ck_1) {
    sub_71 = v_1495;
  } else {
    sub_71 = sub_72;
  };
  if (controller_c_pc) {
    v_1497 = sub_62;
  } else {
    v_1497 = sub_71;
  };
  if (controller_c_window) {
    sub_61 = v_1497;
  } else {
    sub_61 = sub_46;
  };
  sub_60 = sub_61;
  if (controller_change_shift) {
    sub_75 = sub_64;
    sub_76 = false;
  } else {
    sub_75 = false;
    sub_76 = sub_64;
  };
  if (controller_ck_1) {
    sub_74 = sub_76;
  } else {
    sub_74 = sub_75;
  };
  if (controller_change_shift) {
    v_1493 = false;
    sub_78 = sub_45;
  } else {
    v_1493 = sub_45;
    sub_78 = false;
  };
  if (controller_ck_1) {
    sub_77 = v_1493;
  } else {
    sub_77 = sub_78;
  };
  if (controller_c_pc) {
    v_1494 = sub_74;
  } else {
    v_1494 = sub_77;
  };
  if (controller_c_window) {
    sub_73 = v_1494;
  } else {
    sub_73 = sub_50;
  };
  if (controller_v_395) {
    v_1498 = sub_73;
  } else {
    v_1498 = sub_60;
  };
  if (controller_blind_failed_recovered) {
    sub_59 = sub_60;
  } else {
    sub_59 = v_1498;
  };
  sub_58 = sub_59;
  if (controller_air_failed_recovered) {
    v_1516 = sub_11;
  } else {
    v_1516 = sub_58;
  };
  sub_57 = sub_58;
  if (controller_c_air_2) {
    v_1514 = sub_52;
  } else {
    v_1514 = sub_57;
  };
  sub_80 = sub_37;
  if (controller_c_air_2) {
    v_1517 = v_1516;
  } else {
    v_1517 = sub_80;
  };
  sub_79 = sub_80;
  if (controller_c_air_1) {
    v_1515 = v_1514;
  } else {
    v_1515 = sub_79;
  };
  if (controller_v_448) {
    sub_7 = v_1515;
  } else {
    sub_7 = sub_8;
  };
  sub_81 = sub_57;
  if (controller_v_450) {
    sub_6 = sub_81;
  } else {
    sub_6 = sub_7;
  };
  if (controller_air_failed_recovered) {
    v_1490 = sub_58;
  } else {
    v_1490 = sub_11;
  };
  if (controller_c_air_2) {
    v_1491 = v_1490;
  } else {
    v_1491 = sub_10;
  };
  if (controller_c_air_1) {
    v_1492 = v_1491;
  } else {
    v_1492 = sub_9;
  };
  sub_85 = sub_53;
  sub_84 = sub_85;
  if (controller_c_air_1) {
    v_1518 = v_1517;
  } else {
    v_1518 = sub_84;
  };
  if (controller_air_failed_recovered) {
    sub_86 = sub_11;
  } else {
    sub_86 = sub_37;
  };
  if (controller_c_air_2) {
    v_1489 = sub_86;
  } else {
    v_1489 = sub_57;
  };
  if (controller_c_air_1) {
    sub_83 = sub_84;
  } else {
    sub_83 = v_1489;
  };
  if (controller_v_448) {
    sub_82 = v_1492;
  } else {
    sub_82 = sub_83;
  };
  if (controller_air_failed_recovered) {
    v_1487 = sub_53;
  } else {
    v_1487 = sub_11;
  };
  if (controller_c_air_2) {
    v_1488 = v_1487;
  } else {
    v_1488 = sub_10;
  };
  if (controller_c_air_1) {
    sub_87 = v_1488;
  } else {
    sub_87 = sub_9;
  };
  if (controller_v_448) {
    v_1519 = v_1518;
  } else {
    v_1519 = sub_87;
  };
  if (controller_v_450) {
    v_1520 = v_1519;
  } else {
    v_1520 = sub_82;
  };
  if (controller_v_449) {
    sub_5 = v_1520;
  } else {
    sub_5 = sub_6;
  };
  sub_4 = sub_5;
  if (controller_c_pc) {
    v_1478 = sub_41;
  } else {
    v_1478 = sub_71;
  };
  if (controller_c_window) {
    sub_96 = v_1478;
  } else {
    sub_96 = sub_46;
  };
  sub_95 = sub_96;
  if (controller_c_pc) {
    v_1477 = false;
  } else {
    v_1477 = sub_77;
  };
  if (controller_c_window) {
    sub_97 = v_1477;
  } else {
    sub_97 = sub_50;
  };
  if (controller_v_395) {
    v_1479 = sub_97;
  } else {
    v_1479 = sub_95;
  };
  if (controller_blind_failed_recovered) {
    sub_94 = sub_95;
  } else {
    sub_94 = v_1479;
  };
  sub_93 = sub_94;
  if (controller_air_failed_recovered) {
    v_1482 = sub_11;
  } else {
    v_1482 = sub_93;
  };
  if (controller_c_air_2) {
    v_1483 = v_1482;
  } else {
    v_1483 = sub_80;
  };
  if (controller_c_air_1) {
    v_1484 = v_1483;
  } else {
    v_1484 = sub_84;
  };
  if (controller_v_448) {
    v_1485 = v_1484;
  } else {
    v_1485 = sub_87;
  };
  sub_92 = sub_93;
  if (controller_c_air_2) {
    v_1480 = sub_52;
  } else {
    v_1480 = sub_92;
  };
  if (controller_c_air_1) {
    v_1481 = v_1480;
  } else {
    v_1481 = sub_79;
  };
  if (controller_v_448) {
    sub_91 = v_1481;
  } else {
    sub_91 = sub_8;
  };
  sub_98 = sub_92;
  if (controller_v_450) {
    sub_90 = sub_98;
  } else {
    sub_90 = sub_91;
  };
  if (controller_air_failed_recovered) {
    v_1474 = sub_93;
  } else {
    v_1474 = sub_11;
  };
  if (controller_c_air_2) {
    v_1475 = v_1474;
  } else {
    v_1475 = sub_10;
  };
  if (controller_c_air_1) {
    v_1476 = v_1475;
  } else {
    v_1476 = sub_9;
  };
  if (controller_c_air_2) {
    v_1473 = sub_86;
  } else {
    v_1473 = sub_92;
  };
  if (controller_c_air_1) {
    sub_100 = sub_84;
  } else {
    sub_100 = v_1473;
  };
  if (controller_v_448) {
    sub_99 = v_1476;
  } else {
    sub_99 = sub_100;
  };
  if (controller_v_450) {
    v_1486 = v_1485;
  } else {
    v_1486 = sub_99;
  };
  if (controller_v_449) {
    sub_89 = v_1486;
  } else {
    sub_89 = sub_90;
  };
  sub_88 = sub_89;
  if (controller_v_410) {
    sub_3 = sub_88;
  } else {
    sub_3 = sub_4;
  };
  if (controller_cleaner) {
    sub_118 = sub_68;
  } else {
    sub_118 = sub_67;
  };
  sub_119 = true;
  if (controller_worker) {
    v_1457 = sub_119;
    sub_117 = sub_118;
  } else {
    v_1457 = sub_118;
    sub_117 = sub_119;
  };
  if (controller_ck_15_1) {
    sub_116 = v_1457;
  } else {
    sub_116 = sub_117;
  };
  if (controller_change_shift) {
    v_1458 = false;
    sub_115 = sub_116;
  } else {
    v_1458 = sub_116;
    sub_115 = false;
  };
  if (controller_ck_1) {
    sub_114 = v_1458;
  } else {
    sub_114 = sub_115;
  };
  sub_124 = controller_ck_17_1;
  sub_125 = !(controller_ck_17_1);
  if (controller_cleaner) {
    sub_123 = sub_124;
  } else {
    sub_123 = sub_125;
  };
  if (controller_worker) {
    v_1456 = sub_119;
    sub_122 = sub_123;
  } else {
    v_1456 = sub_123;
    sub_122 = sub_119;
  };
  if (controller_ck_15_1) {
    sub_121 = v_1456;
  } else {
    sub_121 = sub_122;
  };
  if (controller_change_shift) {
    v_1459 = sub_26;
    sub_120 = sub_121;
  } else {
    v_1459 = sub_121;
    sub_120 = sub_26;
  };
  if (controller_ck_1) {
    v_1460 = v_1459;
  } else {
    v_1460 = sub_120;
  };
  if (controller_c_pc) {
    sub_113 = sub_114;
  } else {
    sub_113 = v_1460;
  };
  if (controller_change_shift) {
    sub_128 = sub_116;
    sub_129 = sub_18;
  } else {
    sub_128 = sub_18;
    sub_129 = sub_116;
  };
  if (controller_ck_1) {
    sub_127 = sub_129;
  } else {
    sub_127 = sub_128;
  };
  sub_126 = sub_127;
  if (controller_c_window) {
    sub_112 = sub_113;
  } else {
    sub_112 = sub_126;
  };
  sub_111 = sub_112;
  if (controller_c_window) {
    sub_130 = sub_33;
  } else {
    sub_130 = sub_126;
  };
  if (controller_v_395) {
    v_1461 = sub_130;
  } else {
    v_1461 = sub_111;
  };
  if (controller_blind_failed_recovered) {
    sub_110 = sub_111;
  } else {
    sub_110 = v_1461;
  };
  if (controller_c_door) {
    v_1462 = sub_34;
    sub_109 = sub_110;
  } else {
    v_1462 = sub_110;
    sub_109 = sub_34;
  };
  if (controller_ck_11_1) {
    sub_108 = v_1462;
  } else {
    sub_108 = sub_109;
  };
  sub_107 = sub_108;
  sub_106 = sub_107;
  if (controller_ck_1) {
    sub_135 = sub_75;
  } else {
    sub_135 = sub_76;
  };
  if (controller_worker) {
    sub_137 = sub_28;
    sub_138 = sub_66;
  } else {
    sub_137 = sub_66;
    sub_138 = sub_28;
  };
  if (controller_ck_15_1) {
    sub_136 = sub_138;
  } else {
    sub_136 = sub_137;
  };
  if (controller_c_pc) {
    v_1454 = sub_135;
  } else {
    v_1454 = sub_136;
  };
  sub_140 = sub_64;
  sub_139 = sub_140;
  if (controller_c_window) {
    sub_134 = v_1454;
  } else {
    sub_134 = sub_139;
  };
  sub_133 = sub_134;
  if (controller_change_shift) {
    v_1451 = sub_26;
    sub_143 = sub_136;
  } else {
    v_1451 = sub_136;
    sub_143 = sub_26;
  };
  if (controller_ck_1) {
    v_1452 = v_1451;
  } else {
    v_1452 = sub_143;
  };
  if (controller_c_pc) {
    v_1453 = false;
  } else {
    v_1453 = v_1452;
  };
  sub_144 = sub_74;
  if (controller_c_window) {
    sub_142 = v_1453;
  } else {
    sub_142 = sub_144;
  };
  sub_141 = sub_142;
  if (controller_v_395) {
    v_1455 = sub_141;
  } else {
    v_1455 = sub_133;
  };
  if (controller_blind_failed_recovered) {
    sub_132 = sub_133;
  } else {
    sub_132 = v_1455;
  };
  sub_131 = sub_132;
  if (controller_air_failed_recovered) {
    v_1463 = sub_131;
  } else {
    v_1463 = sub_108;
  };
  if (controller_c_air_2) {
    v_1464 = v_1463;
  } else {
    v_1464 = sub_107;
  };
  if (controller_c_air_1) {
    sub_105 = sub_106;
  } else {
    sub_105 = v_1464;
  };
  sub_149 = sub_116;
  if (controller_c_pc) {
    sub_148 = sub_140;
  } else {
    sub_148 = sub_149;
  };
  if (controller_c_closet) {
    sub_147 = sub_139;
  } else {
    sub_147 = sub_148;
  };
  sub_146 = sub_147;
  sub_145 = sub_146;
  if (controller_air_failed_recovered) {
    v_1465 = sub_108;
  } else {
    v_1465 = sub_145;
  };
  if (controller_change_shift) {
    v_1447 = sub_64;
    sub_155 = sub_136;
  } else {
    v_1447 = sub_136;
    sub_155 = sub_64;
  };
  if (controller_ck_1) {
    v_1448 = v_1447;
  } else {
    v_1448 = sub_155;
  };
  if (controller_c_pc) {
    v_1449 = sub_135;
  } else {
    v_1449 = v_1448;
  };
  if (controller_c_window) {
    sub_154 = v_1449;
  } else {
    sub_154 = sub_139;
  };
  sub_153 = sub_154;
  if (controller_change_shift) {
    v_1445 = false;
    sub_158 = sub_136;
  } else {
    v_1445 = sub_136;
    sub_158 = false;
  };
  if (controller_ck_1) {
    sub_157 = v_1445;
  } else {
    sub_157 = sub_158;
  };
  if (controller_c_pc) {
    v_1446 = false;
  } else {
    v_1446 = sub_157;
  };
  if (controller_c_window) {
    sub_156 = v_1446;
  } else {
    sub_156 = sub_144;
  };
  if (controller_v_395) {
    v_1450 = sub_156;
  } else {
    v_1450 = sub_153;
  };
  if (controller_blind_failed_recovered) {
    sub_152 = sub_153;
  } else {
    sub_152 = v_1450;
  };
  sub_151 = sub_152;
  if (controller_air_failed_recovered) {
    v_1468 = sub_108;
  } else {
    v_1468 = sub_151;
  };
  sub_150 = sub_151;
  if (controller_c_air_2) {
    v_1466 = v_1465;
  } else {
    v_1466 = sub_150;
  };
  sub_159 = sub_131;
  if (controller_c_air_2) {
    v_1469 = v_1468;
  } else {
    v_1469 = sub_159;
  };
  if (controller_c_air_1) {
    v_1467 = v_1466;
  } else {
    v_1467 = sub_159;
  };
  if (controller_v_448) {
    sub_104 = v_1467;
  } else {
    sub_104 = sub_105;
  };
  sub_160 = sub_150;
  if (controller_v_450) {
    sub_103 = sub_160;
  } else {
    sub_103 = sub_104;
  };
  if (controller_air_failed_recovered) {
    v_1442 = sub_151;
  } else {
    v_1442 = sub_108;
  };
  if (controller_c_air_2) {
    v_1443 = v_1442;
  } else {
    v_1443 = sub_107;
  };
  if (controller_c_air_1) {
    v_1444 = v_1443;
  } else {
    v_1444 = sub_106;
  };
  if (controller_air_failed_recovered) {
    v_1440 = sub_108;
  } else {
    v_1440 = sub_131;
  };
  if (controller_c_air_2) {
    v_1441 = v_1440;
  } else {
    v_1441 = sub_150;
  };
  sub_164 = sub_145;
  sub_163 = sub_164;
  if (controller_c_air_1) {
    v_1470 = v_1469;
    sub_162 = sub_163;
  } else {
    v_1470 = sub_163;
    sub_162 = v_1441;
  };
  if (controller_v_448) {
    sub_161 = v_1444;
  } else {
    sub_161 = sub_162;
  };
  if (controller_air_failed_recovered) {
    v_1438 = sub_145;
  } else {
    v_1438 = sub_108;
  };
  if (controller_c_air_2) {
    v_1439 = v_1438;
  } else {
    v_1439 = sub_107;
  };
  if (controller_c_air_1) {
    sub_165 = v_1439;
  } else {
    sub_165 = sub_106;
  };
  if (controller_v_448) {
    v_1471 = v_1470;
  } else {
    v_1471 = sub_165;
  };
  if (controller_v_450) {
    v_1472 = v_1471;
  } else {
    v_1472 = sub_161;
  };
  if (controller_v_449) {
    sub_102 = v_1472;
  } else {
    sub_102 = sub_103;
  };
  sub_101 = sub_102;
  if (controller_cleaner) {
    sub_181 = sub_125;
  } else {
    sub_181 = sub_124;
  };
  if (controller_worker) {
    v_1423 = sub_23;
    sub_180 = sub_181;
  } else {
    v_1423 = sub_181;
    sub_180 = sub_23;
  };
  if (controller_ck_15_1) {
    sub_179 = v_1423;
    sub_182 = sub_65;
  } else {
    sub_179 = sub_180;
    sub_182 = sub_69;
  };
  if (controller_change_shift) {
    v_1424 = sub_182;
    sub_178 = sub_179;
  } else {
    v_1424 = sub_179;
    sub_178 = sub_182;
  };
  if (controller_ck_1) {
    v_1425 = v_1424;
  } else {
    v_1425 = sub_178;
  };
  if (controller_c_pc) {
    sub_177 = sub_16;
  } else {
    sub_177 = v_1425;
  };
  if (controller_c_window) {
    sub_176 = sub_177;
  } else {
    sub_176 = sub_30;
  };
  sub_175 = sub_176;
  if (controller_c_pc) {
    sub_184 = false;
  } else {
    sub_184 = sub_182;
  };
  if (controller_c_window) {
    sub_183 = sub_184;
  } else {
    sub_183 = sub_30;
  };
  if (controller_v_395) {
    v_1426 = sub_183;
  } else {
    v_1426 = sub_175;
  };
  if (controller_blind_failed_recovered) {
    sub_174 = sub_175;
  } else {
    sub_174 = v_1426;
  };
  if (controller_c_window) {
    sub_187 = sub_184;
  } else {
    sub_187 = false;
  };
  sub_186 = sub_187;
  sub_185 = sub_186;
  if (controller_c_door) {
    v_1427 = sub_185;
    sub_173 = sub_174;
  } else {
    v_1427 = sub_174;
    sub_173 = sub_185;
  };
  if (controller_ck_11_1) {
    sub_172 = v_1427;
  } else {
    sub_172 = sub_173;
  };
  sub_171 = sub_172;
  sub_170 = sub_171;
  if (controller_ck_15_1) {
    sub_193 = sub_137;
  } else {
    sub_193 = sub_138;
  };
  sub_194 = sub_66;
  if (controller_change_shift) {
    v_1419 = sub_194;
    sub_192 = sub_193;
  } else {
    v_1419 = sub_193;
    sub_192 = sub_194;
  };
  if (controller_ck_1) {
    v_1420 = v_1419;
  } else {
    v_1420 = sub_192;
  };
  if (controller_c_pc) {
    v_1421 = sub_135;
  } else {
    v_1421 = v_1420;
  };
  if (controller_ck_1) {
    sub_196 = sub_63;
  } else {
    sub_196 = sub_70;
  };
  sub_195 = sub_196;
  if (controller_c_window) {
    sub_191 = v_1421;
  } else {
    sub_191 = sub_195;
  };
  sub_190 = sub_191;
  if (controller_change_shift) {
    v_1416 = sub_182;
    sub_199 = sub_193;
  } else {
    v_1416 = sub_193;
    sub_199 = sub_182;
  };
  if (controller_ck_1) {
    v_1417 = v_1416;
  } else {
    v_1417 = sub_199;
  };
  if (controller_c_pc) {
    v_1418 = false;
  } else {
    v_1418 = v_1417;
  };
  if (controller_c_window) {
    sub_198 = v_1418;
  } else {
    sub_198 = sub_50;
  };
  sub_197 = sub_198;
  if (controller_v_395) {
    v_1422 = sub_197;
  } else {
    v_1422 = sub_190;
  };
  if (controller_blind_failed_recovered) {
    sub_189 = sub_190;
  } else {
    sub_189 = v_1422;
  };
  sub_188 = sub_189;
  if (controller_air_failed_recovered) {
    v_1428 = sub_188;
  } else {
    v_1428 = sub_172;
  };
  if (controller_c_air_2) {
    v_1429 = v_1428;
  } else {
    v_1429 = sub_171;
  };
  if (controller_c_air_1) {
    sub_169 = sub_170;
  } else {
    sub_169 = v_1429;
  };
  if (controller_c_pc) {
    v_1414 = sub_62;
  } else {
    v_1414 = sub_31;
  };
  if (controller_c_window) {
    v_1415 = v_1414;
  } else {
    v_1415 = sub_56;
  };
  if (controller_c_pc) {
    v_1412 = sub_62;
  } else {
    v_1412 = sub_47;
  };
  if (controller_c_window) {
    v_1413 = v_1412;
  } else {
    v_1413 = sub_46;
  };
  if (controller_c_closet) {
    sub_202 = v_1413;
  } else {
    sub_202 = v_1415;
  };
  sub_201 = sub_202;
  sub_200 = sub_201;
  if (controller_air_failed_recovered) {
    v_1430 = sub_172;
  } else {
    v_1430 = sub_200;
  };
  if (controller_change_shift) {
    v_1408 = sub_64;
    sub_208 = sub_193;
  } else {
    v_1408 = sub_193;
    sub_208 = sub_64;
  };
  if (controller_ck_1) {
    v_1409 = v_1408;
  } else {
    v_1409 = sub_208;
  };
  if (controller_c_pc) {
    v_1410 = sub_196;
  } else {
    v_1410 = v_1409;
  };
  if (controller_c_window) {
    sub_207 = v_1410;
  } else {
    sub_207 = sub_195;
  };
  sub_206 = sub_207;
  if (controller_change_shift) {
    v_1406 = false;
    sub_212 = sub_193;
  } else {
    v_1406 = sub_193;
    sub_212 = false;
  };
  if (controller_ck_1) {
    sub_211 = v_1406;
  } else {
    sub_211 = sub_212;
  };
  if (controller_c_pc) {
    v_1407 = sub_51;
  } else {
    v_1407 = sub_211;
  };
  if (controller_c_window) {
    sub_210 = v_1407;
  } else {
    sub_210 = sub_50;
  };
  sub_209 = sub_210;
  if (controller_v_395) {
    v_1411 = sub_209;
  } else {
    v_1411 = sub_206;
  };
  if (controller_blind_failed_recovered) {
    sub_205 = sub_206;
  } else {
    sub_205 = v_1411;
  };
  sub_204 = sub_205;
  if (controller_air_failed_recovered) {
    v_1433 = sub_172;
  } else {
    v_1433 = sub_204;
  };
  sub_203 = sub_204;
  if (controller_c_air_2) {
    v_1431 = v_1430;
  } else {
    v_1431 = sub_203;
  };
  sub_213 = sub_188;
  if (controller_c_air_2) {
    v_1434 = v_1433;
  } else {
    v_1434 = sub_213;
  };
  if (controller_c_air_1) {
    v_1432 = v_1431;
  } else {
    v_1432 = sub_213;
  };
  if (controller_v_448) {
    sub_168 = v_1432;
  } else {
    sub_168 = sub_169;
  };
  sub_214 = sub_203;
  if (controller_v_450) {
    sub_167 = sub_214;
  } else {
    sub_167 = sub_168;
  };
  if (controller_air_failed_recovered) {
    v_1403 = sub_204;
  } else {
    v_1403 = sub_172;
  };
  if (controller_c_air_2) {
    v_1404 = v_1403;
  } else {
    v_1404 = sub_171;
  };
  if (controller_c_air_1) {
    v_1405 = v_1404;
  } else {
    v_1405 = sub_170;
  };
  if (controller_air_failed_recovered) {
    v_1401 = sub_172;
  } else {
    v_1401 = sub_188;
  };
  if (controller_c_air_2) {
    v_1402 = v_1401;
  } else {
    v_1402 = sub_203;
  };
  sub_218 = sub_200;
  sub_217 = sub_218;
  if (controller_c_air_1) {
    v_1435 = v_1434;
    sub_216 = sub_217;
  } else {
    v_1435 = sub_217;
    sub_216 = v_1402;
  };
  if (controller_v_448) {
    sub_215 = v_1405;
  } else {
    sub_215 = sub_216;
  };
  if (controller_air_failed_recovered) {
    v_1399 = sub_200;
  } else {
    v_1399 = sub_172;
  };
  if (controller_c_air_2) {
    v_1400 = v_1399;
  } else {
    v_1400 = sub_171;
  };
  if (controller_c_air_1) {
    sub_219 = v_1400;
  } else {
    sub_219 = sub_170;
  };
  if (controller_v_448) {
    v_1436 = v_1435;
  } else {
    v_1436 = sub_219;
  };
  if (controller_v_450) {
    v_1437 = v_1436;
  } else {
    v_1437 = sub_215;
  };
  if (controller_v_449) {
    sub_166 = v_1437;
  } else {
    sub_166 = sub_167;
  };
  if (controller_v_410) {
    v_1521 = sub_166;
  } else {
    v_1521 = sub_101;
  };
  if (controller_v_411) {
    v_1522 = v_1521;
  } else {
    v_1522 = sub_3;
  };
  sub_226 = sub_141;
  sub_225 = sub_226;
  if (controller_air_failed_recovered) {
    v_1389 = sub_225;
  } else {
    v_1389 = sub_108;
  };
  if (controller_c_air_2) {
    v_1390 = v_1389;
  } else {
    v_1390 = sub_107;
  };
  if (controller_c_air_1) {
    sub_224 = sub_106;
  } else {
    sub_224 = v_1390;
  };
  if (controller_c_pc) {
    v_1387 = sub_135;
  } else {
    v_1387 = sub_149;
  };
  if (controller_c_window) {
    v_1388 = v_1387;
  } else {
    v_1388 = sub_148;
  };
  if (controller_c_pc) {
    v_1385 = sub_135;
  } else {
    v_1385 = sub_140;
  };
  if (controller_c_window) {
    v_1386 = v_1385;
  } else {
    v_1386 = sub_139;
  };
  if (controller_c_closet) {
    sub_229 = v_1386;
  } else {
    sub_229 = v_1388;
  };
  sub_228 = sub_229;
  sub_227 = sub_228;
  if (controller_air_failed_recovered) {
    v_1391 = sub_108;
  } else {
    v_1391 = sub_227;
  };
  if (controller_c_pc) {
    v_1384 = sub_74;
  } else {
    v_1384 = sub_157;
  };
  if (controller_c_window) {
    sub_234 = v_1384;
  } else {
    sub_234 = sub_144;
  };
  sub_233 = sub_234;
  sub_232 = sub_233;
  sub_231 = sub_232;
  if (controller_air_failed_recovered) {
    v_1394 = sub_108;
  } else {
    v_1394 = sub_231;
  };
  sub_230 = sub_231;
  if (controller_c_air_2) {
    v_1392 = v_1391;
  } else {
    v_1392 = sub_230;
  };
  sub_236 = sub_225;
  if (controller_c_air_2) {
    v_1395 = v_1394;
  } else {
    v_1395 = sub_236;
  };
  sub_235 = sub_236;
  if (controller_c_air_1) {
    v_1393 = v_1392;
  } else {
    v_1393 = sub_235;
  };
  if (controller_v_448) {
    sub_223 = v_1393;
  } else {
    sub_223 = sub_224;
  };
  sub_238 = sub_230;
  sub_237 = sub_238;
  if (controller_v_450) {
    sub_222 = sub_237;
  } else {
    sub_222 = sub_223;
  };
  if (controller_air_failed_recovered) {
    v_1381 = sub_231;
  } else {
    v_1381 = sub_108;
  };
  if (controller_c_air_2) {
    v_1382 = v_1381;
  } else {
    v_1382 = sub_107;
  };
  if (controller_c_air_1) {
    v_1383 = v_1382;
  } else {
    v_1383 = sub_106;
  };
  if (controller_air_failed_recovered) {
    v_1379 = sub_108;
  } else {
    v_1379 = sub_225;
  };
  if (controller_c_air_2) {
    v_1380 = v_1379;
  } else {
    v_1380 = sub_230;
  };
  sub_242 = sub_227;
  sub_241 = sub_242;
  if (controller_c_air_1) {
    v_1396 = v_1395;
    sub_240 = sub_241;
  } else {
    v_1396 = sub_241;
    sub_240 = v_1380;
  };
  if (controller_v_448) {
    sub_239 = v_1383;
  } else {
    sub_239 = sub_240;
  };
  if (controller_air_failed_recovered) {
    v_1377 = sub_227;
  } else {
    v_1377 = sub_108;
  };
  if (controller_c_air_2) {
    v_1378 = v_1377;
  } else {
    v_1378 = sub_107;
  };
  if (controller_c_air_1) {
    sub_243 = v_1378;
  } else {
    sub_243 = sub_106;
  };
  if (controller_v_448) {
    v_1397 = v_1396;
  } else {
    v_1397 = sub_243;
  };
  if (controller_v_450) {
    v_1398 = v_1397;
  } else {
    v_1398 = sub_239;
  };
  if (controller_v_449) {
    sub_221 = v_1398;
  } else {
    sub_221 = sub_222;
  };
  sub_220 = sub_221;
  sub_249 = sub_197;
  sub_248 = sub_249;
  if (controller_air_failed_recovered) {
    v_1367 = sub_248;
  } else {
    v_1367 = sub_172;
  };
  if (controller_c_air_2) {
    v_1368 = v_1367;
  } else {
    v_1368 = sub_171;
  };
  if (controller_c_air_1) {
    sub_247 = sub_170;
  } else {
    sub_247 = v_1368;
  };
  if (controller_c_pc) {
    v_1365 = sub_41;
  } else {
    v_1365 = sub_31;
  };
  if (controller_c_window) {
    v_1366 = v_1365;
  } else {
    v_1366 = sub_56;
  };
  if (controller_c_pc) {
    v_1363 = sub_41;
  } else {
    v_1363 = sub_47;
  };
  if (controller_c_window) {
    v_1364 = v_1363;
  } else {
    v_1364 = sub_46;
  };
  if (controller_c_closet) {
    sub_252 = v_1364;
  } else {
    sub_252 = v_1366;
  };
  sub_251 = sub_252;
  sub_250 = sub_251;
  if (controller_air_failed_recovered) {
    v_1369 = sub_172;
  } else {
    v_1369 = sub_250;
  };
  sub_255 = sub_209;
  sub_254 = sub_255;
  if (controller_air_failed_recovered) {
    v_1372 = sub_172;
  } else {
    v_1372 = sub_254;
  };
  sub_253 = sub_254;
  if (controller_c_air_2) {
    v_1370 = v_1369;
  } else {
    v_1370 = sub_253;
  };
  sub_257 = sub_248;
  if (controller_c_air_2) {
    v_1373 = v_1372;
  } else {
    v_1373 = sub_257;
  };
  sub_256 = sub_257;
  if (controller_c_air_1) {
    v_1371 = v_1370;
  } else {
    v_1371 = sub_256;
  };
  if (controller_v_448) {
    sub_246 = v_1371;
  } else {
    sub_246 = sub_247;
  };
  sub_259 = sub_253;
  sub_258 = sub_259;
  if (controller_v_450) {
    sub_245 = sub_258;
  } else {
    sub_245 = sub_246;
  };
  if (controller_air_failed_recovered) {
    v_1360 = sub_254;
  } else {
    v_1360 = sub_172;
  };
  if (controller_c_air_2) {
    v_1361 = v_1360;
  } else {
    v_1361 = sub_171;
  };
  if (controller_c_air_1) {
    v_1362 = v_1361;
  } else {
    v_1362 = sub_170;
  };
  if (controller_air_failed_recovered) {
    v_1358 = sub_172;
  } else {
    v_1358 = sub_248;
  };
  if (controller_c_air_2) {
    v_1359 = v_1358;
  } else {
    v_1359 = sub_253;
  };
  sub_263 = sub_250;
  sub_262 = sub_263;
  if (controller_c_air_1) {
    v_1374 = v_1373;
    sub_261 = sub_262;
  } else {
    v_1374 = sub_262;
    sub_261 = v_1359;
  };
  if (controller_v_448) {
    sub_260 = v_1362;
  } else {
    sub_260 = sub_261;
  };
  if (controller_air_failed_recovered) {
    v_1356 = sub_250;
  } else {
    v_1356 = sub_172;
  };
  if (controller_c_air_2) {
    v_1357 = v_1356;
  } else {
    v_1357 = sub_171;
  };
  if (controller_c_air_1) {
    sub_264 = v_1357;
  } else {
    sub_264 = sub_170;
  };
  if (controller_v_448) {
    v_1375 = v_1374;
  } else {
    v_1375 = sub_264;
  };
  if (controller_v_450) {
    v_1376 = v_1375;
  } else {
    v_1376 = sub_260;
  };
  if (controller_v_449) {
    sub_244 = v_1376;
  } else {
    sub_244 = sub_245;
  };
  if (controller_v_410) {
    v_1523 = sub_244;
  } else {
    v_1523 = sub_220;
  };
  if (controller_v_411) {
    v_1524 = v_1523;
  } else {
    v_1524 = sub_88;
  };
  if (controller_light_failed_recovered) {
    sub_2 = v_1522;
  } else {
    sub_2 = v_1524;
  };
  sub_1 = sub_2;
  sub_279 = sub_119;
  if (controller_change_shift) {
    v_1342 = sub_182;
    sub_278 = sub_279;
  } else {
    v_1342 = sub_279;
    sub_278 = sub_182;
  };
  if (controller_ck_1) {
    v_1343 = v_1342;
  } else {
    v_1343 = sub_278;
  };
  if (controller_c_pc) {
    v_1344 = sub_114;
  } else {
    v_1344 = v_1343;
  };
  sub_280 = sub_149;
  if (controller_c_window) {
    sub_277 = v_1344;
  } else {
    sub_277 = sub_280;
  };
  sub_276 = sub_277;
  if (controller_c_window) {
    sub_281 = sub_184;
  } else {
    sub_281 = sub_280;
  };
  if (controller_v_395) {
    v_1345 = sub_281;
  } else {
    v_1345 = sub_276;
  };
  if (controller_blind_failed_recovered) {
    sub_275 = sub_276;
  } else {
    sub_275 = v_1345;
  };
  if (controller_c_door) {
    v_1346 = sub_185;
    sub_274 = sub_275;
  } else {
    v_1346 = sub_275;
    sub_274 = sub_185;
  };
  if (controller_ck_11_1) {
    sub_273 = v_1346;
  } else {
    sub_273 = sub_274;
  };
  sub_272 = sub_273;
  sub_271 = sub_272;
  if (controller_c_pc) {
    v_1340 = sub_135;
  } else {
    v_1340 = sub_194;
  };
  if (controller_c_window) {
    sub_285 = v_1340;
  } else {
    sub_285 = sub_139;
  };
  sub_284 = sub_285;
  if (controller_change_shift) {
    v_1337 = sub_182;
    sub_288 = sub_194;
  } else {
    v_1337 = sub_194;
    sub_288 = sub_182;
  };
  if (controller_ck_1) {
    v_1338 = v_1337;
  } else {
    v_1338 = sub_288;
  };
  if (controller_c_pc) {
    v_1339 = false;
  } else {
    v_1339 = v_1338;
  };
  if (controller_c_window) {
    sub_287 = v_1339;
  } else {
    sub_287 = sub_144;
  };
  sub_286 = sub_287;
  if (controller_v_395) {
    v_1341 = sub_286;
  } else {
    v_1341 = sub_284;
  };
  if (controller_blind_failed_recovered) {
    sub_283 = sub_284;
  } else {
    sub_283 = v_1341;
  };
  sub_282 = sub_283;
  if (controller_air_failed_recovered) {
    v_1347 = sub_282;
  } else {
    v_1347 = sub_273;
  };
  if (controller_c_air_2) {
    v_1348 = v_1347;
  } else {
    v_1348 = sub_272;
  };
  if (controller_c_air_1) {
    sub_270 = sub_271;
  } else {
    sub_270 = v_1348;
  };
  if (controller_air_failed_recovered) {
    sub_289 = sub_273;
  } else {
    sub_289 = sub_145;
  };
  if (controller_change_shift) {
    v_1334 = sub_64;
    sub_296 = sub_194;
  } else {
    v_1334 = sub_194;
    sub_296 = sub_64;
  };
  if (controller_ck_1) {
    sub_295 = v_1334;
  } else {
    sub_295 = sub_296;
  };
  if (controller_c_pc) {
    v_1335 = sub_140;
  } else {
    v_1335 = sub_295;
  };
  if (controller_c_window) {
    sub_294 = v_1335;
  } else {
    sub_294 = sub_139;
  };
  sub_293 = sub_294;
  if (controller_change_shift) {
    v_1332 = false;
    sub_300 = sub_194;
  } else {
    v_1332 = sub_194;
    sub_300 = false;
  };
  if (controller_ck_1) {
    sub_299 = v_1332;
  } else {
    sub_299 = sub_300;
  };
  if (controller_c_pc) {
    v_1333 = sub_74;
  } else {
    v_1333 = sub_299;
  };
  if (controller_c_window) {
    sub_298 = v_1333;
  } else {
    sub_298 = sub_144;
  };
  sub_297 = sub_298;
  if (controller_v_395) {
    v_1336 = sub_297;
  } else {
    v_1336 = sub_293;
  };
  if (controller_blind_failed_recovered) {
    sub_292 = sub_293;
  } else {
    sub_292 = v_1336;
  };
  sub_291 = sub_292;
  if (controller_air_failed_recovered) {
    v_1351 = sub_273;
  } else {
    v_1351 = sub_291;
  };
  sub_290 = sub_291;
  if (controller_c_air_2) {
    v_1349 = sub_289;
  } else {
    v_1349 = sub_290;
  };
  sub_302 = sub_282;
  if (controller_c_air_2) {
    v_1352 = v_1351;
  } else {
    v_1352 = sub_302;
  };
  if (controller_c_air_1) {
    v_1353 = v_1352;
  } else {
    v_1353 = sub_163;
  };
  sub_301 = sub_302;
  if (controller_c_air_1) {
    v_1350 = v_1349;
  } else {
    v_1350 = sub_301;
  };
  if (controller_v_448) {
    sub_269 = v_1350;
  } else {
    sub_269 = sub_270;
  };
  sub_303 = sub_290;
  if (controller_v_450) {
    sub_268 = sub_303;
  } else {
    sub_268 = sub_269;
  };
  if (controller_air_failed_recovered) {
    v_1329 = sub_291;
  } else {
    v_1329 = sub_273;
  };
  if (controller_c_air_2) {
    v_1330 = v_1329;
  } else {
    v_1330 = sub_272;
  };
  if (controller_c_air_1) {
    v_1331 = v_1330;
  } else {
    v_1331 = sub_271;
  };
  if (controller_air_failed_recovered) {
    sub_306 = sub_273;
  } else {
    sub_306 = sub_282;
  };
  if (controller_c_air_2) {
    v_1328 = sub_306;
  } else {
    v_1328 = sub_290;
  };
  if (controller_c_air_1) {
    sub_305 = sub_163;
  } else {
    sub_305 = v_1328;
  };
  if (controller_v_448) {
    sub_304 = v_1331;
  } else {
    sub_304 = sub_305;
  };
  if (controller_air_failed_recovered) {
    v_1326 = sub_145;
  } else {
    v_1326 = sub_273;
  };
  if (controller_c_air_2) {
    v_1327 = v_1326;
  } else {
    v_1327 = sub_272;
  };
  if (controller_c_air_1) {
    sub_307 = v_1327;
  } else {
    sub_307 = sub_271;
  };
  if (controller_v_448) {
    v_1354 = v_1353;
  } else {
    v_1354 = sub_307;
  };
  if (controller_v_450) {
    v_1355 = v_1354;
  } else {
    v_1355 = sub_304;
  };
  if (controller_v_449) {
    sub_267 = v_1355;
  } else {
    sub_267 = sub_268;
  };
  sub_266 = sub_267;
  if (controller_c_pc) {
    v_1317 = sub_135;
  } else {
    v_1317 = sub_295;
  };
  if (controller_c_window) {
    sub_316 = v_1317;
  } else {
    sub_316 = sub_139;
  };
  sub_315 = sub_316;
  if (controller_c_pc) {
    v_1316 = false;
  } else {
    v_1316 = sub_299;
  };
  if (controller_c_window) {
    sub_317 = v_1316;
  } else {
    sub_317 = sub_144;
  };
  if (controller_v_395) {
    v_1318 = sub_317;
  } else {
    v_1318 = sub_315;
  };
  if (controller_blind_failed_recovered) {
    sub_314 = sub_315;
  } else {
    sub_314 = v_1318;
  };
  sub_313 = sub_314;
  if (controller_air_failed_recovered) {
    v_1321 = sub_273;
  } else {
    v_1321 = sub_313;
  };
  if (controller_c_air_2) {
    v_1322 = v_1321;
  } else {
    v_1322 = sub_302;
  };
  if (controller_c_air_1) {
    v_1323 = v_1322;
  } else {
    v_1323 = sub_163;
  };
  if (controller_v_448) {
    v_1324 = v_1323;
  } else {
    v_1324 = sub_307;
  };
  sub_312 = sub_313;
  if (controller_c_air_2) {
    v_1319 = sub_289;
  } else {
    v_1319 = sub_312;
  };
  if (controller_c_air_1) {
    v_1320 = v_1319;
  } else {
    v_1320 = sub_301;
  };
  if (controller_v_448) {
    sub_311 = v_1320;
  } else {
    sub_311 = sub_270;
  };
  sub_318 = sub_312;
  if (controller_v_450) {
    sub_310 = sub_318;
  } else {
    sub_310 = sub_311;
  };
  if (controller_air_failed_recovered) {
    v_1313 = sub_313;
  } else {
    v_1313 = sub_273;
  };
  if (controller_c_air_2) {
    v_1314 = v_1313;
  } else {
    v_1314 = sub_272;
  };
  if (controller_c_air_1) {
    v_1315 = v_1314;
  } else {
    v_1315 = sub_271;
  };
  if (controller_c_air_2) {
    v_1312 = sub_306;
  } else {
    v_1312 = sub_312;
  };
  if (controller_c_air_1) {
    sub_320 = sub_163;
  } else {
    sub_320 = v_1312;
  };
  if (controller_v_448) {
    sub_319 = v_1315;
  } else {
    sub_319 = sub_320;
  };
  if (controller_v_450) {
    v_1325 = v_1324;
  } else {
    v_1325 = sub_319;
  };
  if (controller_v_449) {
    sub_309 = v_1325;
  } else {
    sub_309 = sub_310;
  };
  sub_308 = sub_309;
  if (controller_v_410) {
    v_1525 = sub_266;
    sub_265 = sub_308;
  } else {
    v_1525 = sub_308;
    sub_265 = sub_266;
  };
  if (controller_v_411) {
    v_1526 = v_1525;
  } else {
    v_1526 = sub_265;
  };
  if (controller_air_failed_recovered) {
    v_1304 = sub_273;
  } else {
    v_1304 = sub_227;
  };
  sub_326 = sub_286;
  sub_325 = sub_326;
  if (controller_air_failed_recovered) {
    v_1302 = sub_325;
  } else {
    v_1302 = sub_273;
  };
  if (controller_c_air_2) {
    v_1303 = v_1302;
  } else {
    v_1303 = sub_272;
  };
  if (controller_c_air_1) {
    sub_324 = sub_271;
  } else {
    sub_324 = v_1303;
  };
  sub_329 = sub_297;
  sub_328 = sub_329;
  if (controller_air_failed_recovered) {
    v_1307 = sub_273;
  } else {
    v_1307 = sub_328;
  };
  sub_327 = sub_328;
  if (controller_c_air_2) {
    v_1305 = v_1304;
  } else {
    v_1305 = sub_327;
  };
  sub_330 = sub_325;
  if (controller_c_air_2) {
    v_1308 = v_1307;
  } else {
    v_1308 = sub_330;
  };
  if (controller_c_air_1) {
    v_1309 = v_1308;
    v_1306 = v_1305;
  } else {
    v_1309 = sub_241;
    v_1306 = sub_330;
  };
  if (controller_v_448) {
    sub_323 = v_1306;
  } else {
    sub_323 = sub_324;
  };
  sub_331 = sub_327;
  if (controller_v_450) {
    sub_322 = sub_331;
  } else {
    sub_322 = sub_323;
  };
  if (controller_air_failed_recovered) {
    v_1299 = sub_328;
  } else {
    v_1299 = sub_273;
  };
  if (controller_c_air_2) {
    v_1300 = v_1299;
  } else {
    v_1300 = sub_272;
  };
  if (controller_c_air_1) {
    v_1301 = v_1300;
  } else {
    v_1301 = sub_271;
  };
  if (controller_air_failed_recovered) {
    v_1297 = sub_273;
  } else {
    v_1297 = sub_325;
  };
  if (controller_c_air_2) {
    v_1298 = v_1297;
  } else {
    v_1298 = sub_327;
  };
  if (controller_c_air_1) {
    sub_333 = sub_241;
  } else {
    sub_333 = v_1298;
  };
  if (controller_v_448) {
    sub_332 = v_1301;
  } else {
    sub_332 = sub_333;
  };
  if (controller_air_failed_recovered) {
    v_1295 = sub_227;
  } else {
    v_1295 = sub_273;
  };
  if (controller_c_air_2) {
    v_1296 = v_1295;
  } else {
    v_1296 = sub_272;
  };
  if (controller_c_air_1) {
    sub_334 = v_1296;
  } else {
    sub_334 = sub_271;
  };
  if (controller_v_448) {
    v_1310 = v_1309;
  } else {
    v_1310 = sub_334;
  };
  if (controller_v_450) {
    v_1311 = v_1310;
  } else {
    v_1311 = sub_332;
  };
  if (controller_v_449) {
    sub_321 = v_1311;
  } else {
    sub_321 = sub_322;
  };
  if (controller_v_411) {
    v_1527 = sub_321;
  } else {
    v_1527 = sub_308;
  };
  if (controller_light_failed_recovered) {
    v_1528 = v_1526;
  } else {
    v_1528 = v_1527;
  };
  if (controller_c_window) {
    sub_347 = sub_113;
  } else {
    sub_347 = sub_280;
  };
  sub_346 = sub_347;
  if (controller_c_window) {
    sub_348 = sub_33;
  } else {
    sub_348 = sub_280;
  };
  if (controller_v_395) {
    v_1283 = sub_348;
  } else {
    v_1283 = sub_346;
  };
  if (controller_blind_failed_recovered) {
    sub_345 = sub_346;
  } else {
    sub_345 = v_1283;
  };
  if (controller_c_door) {
    v_1284 = sub_34;
    sub_344 = sub_345;
  } else {
    v_1284 = sub_345;
    sub_344 = sub_34;
  };
  if (controller_ck_11_1) {
    sub_343 = v_1284;
  } else {
    sub_343 = sub_344;
  };
  sub_342 = sub_343;
  sub_341 = sub_342;
  if (controller_change_shift) {
    v_1279 = sub_45;
    sub_353 = sub_136;
  } else {
    v_1279 = sub_136;
    sub_353 = sub_45;
  };
  if (controller_ck_1) {
    v_1280 = v_1279;
  } else {
    v_1280 = sub_353;
  };
  if (controller_c_pc) {
    v_1281 = sub_41;
  } else {
    v_1281 = v_1280;
  };
  sub_354 = sub_62;
  if (controller_c_window) {
    sub_352 = v_1281;
  } else {
    sub_352 = sub_354;
  };
  sub_351 = sub_352;
  if (controller_v_395) {
    v_1282 = sub_141;
  } else {
    v_1282 = sub_351;
  };
  if (controller_blind_failed_recovered) {
    sub_350 = sub_351;
  } else {
    sub_350 = v_1282;
  };
  sub_349 = sub_350;
  if (controller_air_failed_recovered) {
    v_1285 = sub_349;
  } else {
    v_1285 = sub_343;
  };
  if (controller_c_air_2) {
    v_1286 = v_1285;
  } else {
    v_1286 = sub_342;
  };
  if (controller_c_air_1) {
    sub_340 = sub_341;
  } else {
    sub_340 = v_1286;
  };
  if (controller_c_pc) {
    v_1277 = sub_196;
  } else {
    v_1277 = sub_149;
  };
  if (controller_c_window) {
    v_1278 = v_1277;
  } else {
    v_1278 = sub_148;
  };
  if (controller_c_pc) {
    v_1275 = sub_196;
  } else {
    v_1275 = sub_140;
  };
  if (controller_c_window) {
    v_1276 = v_1275;
  } else {
    v_1276 = sub_139;
  };
  if (controller_c_closet) {
    sub_357 = v_1276;
  } else {
    sub_357 = v_1278;
  };
  sub_356 = sub_357;
  sub_355 = sub_356;
  if (controller_air_failed_recovered) {
    v_1287 = sub_343;
  } else {
    v_1287 = sub_355;
  };
  if (controller_change_shift) {
    v_1271 = sub_43;
    sub_363 = sub_136;
  } else {
    v_1271 = sub_136;
    sub_363 = sub_43;
  };
  if (controller_ck_1) {
    v_1272 = v_1271;
  } else {
    v_1272 = sub_363;
  };
  if (controller_c_pc) {
    v_1273 = sub_62;
  } else {
    v_1273 = v_1272;
  };
  if (controller_c_window) {
    sub_362 = v_1273;
  } else {
    sub_362 = sub_354;
  };
  sub_361 = sub_362;
  if (controller_v_395) {
    v_1274 = sub_233;
  } else {
    v_1274 = sub_361;
  };
  if (controller_blind_failed_recovered) {
    sub_360 = sub_361;
  } else {
    sub_360 = v_1274;
  };
  sub_359 = sub_360;
  if (controller_air_failed_recovered) {
    v_1290 = sub_343;
  } else {
    v_1290 = sub_359;
  };
  sub_358 = sub_359;
  if (controller_c_air_2) {
    v_1288 = v_1287;
  } else {
    v_1288 = sub_358;
  };
  sub_364 = sub_349;
  if (controller_c_air_2) {
    v_1291 = v_1290;
  } else {
    v_1291 = sub_364;
  };
  if (controller_c_air_1) {
    v_1289 = v_1288;
  } else {
    v_1289 = sub_364;
  };
  if (controller_v_448) {
    sub_339 = v_1289;
  } else {
    sub_339 = sub_340;
  };
  sub_365 = sub_358;
  if (controller_v_450) {
    sub_338 = sub_365;
  } else {
    sub_338 = sub_339;
  };
  if (controller_air_failed_recovered) {
    v_1268 = sub_359;
  } else {
    v_1268 = sub_343;
  };
  if (controller_c_air_2) {
    v_1269 = v_1268;
  } else {
    v_1269 = sub_342;
  };
  if (controller_c_air_1) {
    v_1270 = v_1269;
  } else {
    v_1270 = sub_341;
  };
  if (controller_air_failed_recovered) {
    v_1266 = sub_343;
  } else {
    v_1266 = sub_349;
  };
  if (controller_c_air_2) {
    v_1267 = v_1266;
  } else {
    v_1267 = sub_358;
  };
  sub_369 = sub_355;
  sub_368 = sub_369;
  if (controller_c_air_1) {
    v_1292 = v_1291;
    sub_367 = sub_368;
  } else {
    v_1292 = sub_368;
    sub_367 = v_1267;
  };
  if (controller_v_448) {
    sub_366 = v_1270;
  } else {
    sub_366 = sub_367;
  };
  if (controller_air_failed_recovered) {
    v_1264 = sub_355;
  } else {
    v_1264 = sub_343;
  };
  if (controller_c_air_2) {
    v_1265 = v_1264;
  } else {
    v_1265 = sub_342;
  };
  if (controller_c_air_1) {
    sub_370 = v_1265;
  } else {
    sub_370 = sub_341;
  };
  if (controller_v_448) {
    v_1293 = v_1292;
  } else {
    v_1293 = sub_370;
  };
  if (controller_v_450) {
    v_1294 = v_1293;
  } else {
    v_1294 = sub_366;
  };
  if (controller_v_449) {
    sub_337 = v_1294;
  } else {
    sub_337 = sub_338;
  };
  sub_336 = sub_337;
  if (controller_ck_1) {
    sub_383 = sub_128;
  } else {
    sub_383 = sub_129;
  };
  sub_382 = sub_383;
  if (controller_c_window) {
    sub_381 = sub_177;
  } else {
    sub_381 = sub_382;
  };
  sub_380 = sub_381;
  if (controller_c_window) {
    sub_384 = sub_184;
  } else {
    sub_384 = sub_382;
  };
  if (controller_v_395) {
    v_1252 = sub_384;
  } else {
    v_1252 = sub_380;
  };
  if (controller_blind_failed_recovered) {
    sub_379 = sub_380;
  } else {
    sub_379 = v_1252;
  };
  if (controller_c_door) {
    v_1253 = sub_185;
    sub_378 = sub_379;
  } else {
    v_1253 = sub_379;
    sub_378 = sub_185;
  };
  if (controller_ck_11_1) {
    sub_377 = v_1253;
  } else {
    sub_377 = sub_378;
  };
  if (controller_air_failed_recovered) {
    v_1256 = sub_377;
  } else {
    v_1256 = sub_53;
  };
  sub_376 = sub_377;
  sub_375 = sub_376;
  if (controller_c_pc) {
    v_1250 = sub_41;
  } else {
    v_1250 = sub_193;
  };
  if (controller_c_window) {
    sub_388 = v_1250;
  } else {
    sub_388 = sub_46;
  };
  sub_387 = sub_388;
  if (controller_v_395) {
    v_1251 = sub_197;
  } else {
    v_1251 = sub_387;
  };
  if (controller_blind_failed_recovered) {
    sub_386 = sub_387;
  } else {
    sub_386 = v_1251;
  };
  sub_385 = sub_386;
  if (controller_air_failed_recovered) {
    v_1254 = sub_385;
  } else {
    v_1254 = sub_377;
  };
  if (controller_c_air_2) {
    v_1255 = v_1254;
  } else {
    v_1255 = sub_376;
  };
  if (controller_c_air_1) {
    sub_374 = sub_375;
  } else {
    sub_374 = v_1255;
  };
  if (controller_change_shift) {
    v_1246 = sub_43;
    sub_394 = sub_193;
  } else {
    v_1246 = sub_193;
    sub_394 = sub_43;
  };
  if (controller_ck_1) {
    v_1247 = v_1246;
  } else {
    v_1247 = sub_394;
  };
  if (controller_c_pc) {
    v_1248 = sub_41;
  } else {
    v_1248 = v_1247;
  };
  if (controller_c_window) {
    sub_393 = v_1248;
  } else {
    sub_393 = sub_46;
  };
  sub_392 = sub_393;
  if (controller_c_pc) {
    v_1245 = false;
  } else {
    v_1245 = sub_211;
  };
  if (controller_c_window) {
    sub_395 = v_1245;
  } else {
    sub_395 = sub_50;
  };
  if (controller_v_395) {
    v_1249 = sub_395;
  } else {
    v_1249 = sub_392;
  };
  if (controller_blind_failed_recovered) {
    sub_391 = sub_392;
  } else {
    sub_391 = v_1249;
  };
  sub_390 = sub_391;
  if (controller_air_failed_recovered) {
    v_1259 = sub_377;
  } else {
    v_1259 = sub_390;
  };
  sub_389 = sub_390;
  if (controller_c_air_2) {
    v_1257 = v_1256;
  } else {
    v_1257 = sub_389;
  };
  sub_396 = sub_385;
  if (controller_c_air_2) {
    v_1260 = v_1259;
  } else {
    v_1260 = sub_396;
  };
  if (controller_c_air_1) {
    v_1261 = v_1260;
    v_1258 = v_1257;
  } else {
    v_1261 = sub_84;
    v_1258 = sub_396;
  };
  if (controller_v_448) {
    sub_373 = v_1258;
  } else {
    sub_373 = sub_374;
  };
  sub_397 = sub_389;
  if (controller_v_450) {
    sub_372 = sub_397;
  } else {
    sub_372 = sub_373;
  };
  if (controller_air_failed_recovered) {
    v_1242 = sub_390;
  } else {
    v_1242 = sub_377;
  };
  if (controller_c_air_2) {
    v_1243 = v_1242;
  } else {
    v_1243 = sub_376;
  };
  if (controller_c_air_1) {
    v_1244 = v_1243;
  } else {
    v_1244 = sub_375;
  };
  if (controller_air_failed_recovered) {
    v_1240 = sub_377;
  } else {
    v_1240 = sub_385;
  };
  if (controller_c_air_2) {
    v_1241 = v_1240;
  } else {
    v_1241 = sub_389;
  };
  if (controller_c_air_1) {
    sub_399 = sub_84;
  } else {
    sub_399 = v_1241;
  };
  if (controller_v_448) {
    sub_398 = v_1244;
  } else {
    sub_398 = sub_399;
  };
  if (controller_air_failed_recovered) {
    v_1238 = sub_53;
  } else {
    v_1238 = sub_377;
  };
  if (controller_c_air_2) {
    v_1239 = v_1238;
  } else {
    v_1239 = sub_376;
  };
  if (controller_c_air_1) {
    sub_400 = v_1239;
  } else {
    sub_400 = sub_375;
  };
  if (controller_v_448) {
    v_1262 = v_1261;
  } else {
    v_1262 = sub_400;
  };
  if (controller_v_450) {
    v_1263 = v_1262;
  } else {
    v_1263 = sub_398;
  };
  if (controller_v_449) {
    sub_371 = v_1263;
  } else {
    sub_371 = sub_372;
  };
  if (controller_v_410) {
    sub_335 = sub_371;
  } else {
    sub_335 = sub_336;
  };
  if (controller_c_pc) {
    v_1229 = sub_196;
  } else {
    v_1229 = sub_295;
  };
  if (controller_c_window) {
    sub_408 = v_1229;
  } else {
    sub_408 = sub_139;
  };
  sub_407 = sub_408;
  if (controller_c_pc) {
    v_1228 = sub_51;
  } else {
    v_1228 = sub_299;
  };
  if (controller_c_window) {
    sub_409 = v_1228;
  } else {
    sub_409 = sub_144;
  };
  if (controller_v_395) {
    v_1230 = sub_409;
  } else {
    v_1230 = sub_407;
  };
  if (controller_blind_failed_recovered) {
    sub_406 = sub_407;
  } else {
    sub_406 = v_1230;
  };
  sub_405 = sub_406;
  if (controller_air_failed_recovered) {
    v_1233 = sub_273;
  } else {
    v_1233 = sub_405;
  };
  if (controller_c_air_2) {
    v_1234 = v_1233;
  } else {
    v_1234 = sub_302;
  };
  if (controller_c_air_1) {
    v_1235 = v_1234;
  } else {
    v_1235 = sub_163;
  };
  if (controller_v_448) {
    v_1236 = v_1235;
  } else {
    v_1236 = sub_307;
  };
  sub_404 = sub_405;
  if (controller_c_air_2) {
    v_1231 = sub_289;
  } else {
    v_1231 = sub_404;
  };
  if (controller_c_air_1) {
    v_1232 = v_1231;
  } else {
    v_1232 = sub_301;
  };
  if (controller_v_448) {
    sub_403 = v_1232;
  } else {
    sub_403 = sub_270;
  };
  sub_410 = sub_404;
  if (controller_v_450) {
    sub_402 = sub_410;
  } else {
    sub_402 = sub_403;
  };
  if (controller_air_failed_recovered) {
    v_1225 = sub_405;
  } else {
    v_1225 = sub_273;
  };
  if (controller_c_air_2) {
    v_1226 = v_1225;
  } else {
    v_1226 = sub_272;
  };
  if (controller_c_air_1) {
    v_1227 = v_1226;
  } else {
    v_1227 = sub_271;
  };
  if (controller_c_air_2) {
    v_1224 = sub_306;
  } else {
    v_1224 = sub_404;
  };
  if (controller_c_air_1) {
    sub_412 = sub_163;
  } else {
    sub_412 = v_1224;
  };
  if (controller_v_448) {
    sub_411 = v_1227;
  } else {
    sub_411 = sub_412;
  };
  if (controller_v_450) {
    v_1237 = v_1236;
  } else {
    v_1237 = sub_411;
  };
  if (controller_v_449) {
    sub_401 = v_1237;
  } else {
    sub_401 = sub_402;
  };
  if (controller_v_410) {
    v_1529 = sub_401;
  } else {
    v_1529 = sub_308;
  };
  if (controller_v_411) {
    v_1530 = v_1529;
  } else {
    v_1530 = sub_335;
  };
  if (controller_air_failed_recovered) {
    v_1219 = sub_343;
  } else {
    v_1219 = sub_231;
  };
  if (controller_c_air_2) {
    v_1220 = v_1219;
  } else {
    v_1220 = sub_236;
  };
  if (controller_c_air_1) {
    v_1221 = v_1220;
  } else {
    v_1221 = sub_241;
  };
  if (controller_air_failed_recovered) {
    v_1216 = sub_343;
  } else {
    v_1216 = sub_227;
  };
  if (controller_c_air_2) {
    v_1217 = v_1216;
  } else {
    v_1217 = sub_230;
  };
  if (controller_c_air_1) {
    v_1218 = v_1217;
  } else {
    v_1218 = sub_235;
  };
  if (controller_air_failed_recovered) {
    v_1214 = sub_225;
  } else {
    v_1214 = sub_343;
  };
  if (controller_c_air_2) {
    v_1215 = v_1214;
  } else {
    v_1215 = sub_342;
  };
  if (controller_c_air_1) {
    sub_417 = sub_341;
  } else {
    sub_417 = v_1215;
  };
  if (controller_v_448) {
    sub_416 = v_1218;
  } else {
    sub_416 = sub_417;
  };
  if (controller_v_450) {
    sub_415 = sub_237;
  } else {
    sub_415 = sub_416;
  };
  if (controller_air_failed_recovered) {
    v_1211 = sub_231;
  } else {
    v_1211 = sub_343;
  };
  if (controller_c_air_2) {
    v_1212 = v_1211;
  } else {
    v_1212 = sub_342;
  };
  if (controller_c_air_1) {
    v_1213 = v_1212;
  } else {
    v_1213 = sub_341;
  };
  if (controller_air_failed_recovered) {
    v_1209 = sub_343;
  } else {
    v_1209 = sub_225;
  };
  if (controller_c_air_2) {
    v_1210 = v_1209;
  } else {
    v_1210 = sub_230;
  };
  if (controller_c_air_1) {
    sub_419 = sub_241;
  } else {
    sub_419 = v_1210;
  };
  if (controller_v_448) {
    sub_418 = v_1213;
  } else {
    sub_418 = sub_419;
  };
  if (controller_air_failed_recovered) {
    v_1207 = sub_227;
  } else {
    v_1207 = sub_343;
  };
  if (controller_c_air_2) {
    v_1208 = v_1207;
  } else {
    v_1208 = sub_342;
  };
  if (controller_c_air_1) {
    sub_420 = v_1208;
  } else {
    sub_420 = sub_341;
  };
  if (controller_v_448) {
    v_1222 = v_1221;
  } else {
    v_1222 = sub_420;
  };
  if (controller_v_450) {
    v_1223 = v_1222;
  } else {
    v_1223 = sub_418;
  };
  if (controller_v_449) {
    sub_414 = v_1223;
  } else {
    sub_414 = sub_415;
  };
  sub_413 = sub_414;
  if (controller_air_failed_recovered) {
    v_1202 = sub_377;
  } else {
    v_1202 = sub_254;
  };
  if (controller_c_air_2) {
    v_1203 = v_1202;
  } else {
    v_1203 = sub_257;
  };
  if (controller_c_air_1) {
    v_1204 = v_1203;
  } else {
    v_1204 = sub_262;
  };
  if (controller_air_failed_recovered) {
    v_1199 = sub_377;
  } else {
    v_1199 = sub_250;
  };
  if (controller_c_air_2) {
    v_1200 = v_1199;
  } else {
    v_1200 = sub_253;
  };
  if (controller_c_air_1) {
    v_1201 = v_1200;
  } else {
    v_1201 = sub_256;
  };
  if (controller_air_failed_recovered) {
    v_1197 = sub_248;
  } else {
    v_1197 = sub_377;
  };
  if (controller_c_air_2) {
    v_1198 = v_1197;
  } else {
    v_1198 = sub_376;
  };
  if (controller_c_air_1) {
    sub_424 = sub_375;
  } else {
    sub_424 = v_1198;
  };
  if (controller_v_448) {
    sub_423 = v_1201;
  } else {
    sub_423 = sub_424;
  };
  if (controller_v_450) {
    sub_422 = sub_258;
  } else {
    sub_422 = sub_423;
  };
  if (controller_air_failed_recovered) {
    v_1194 = sub_254;
  } else {
    v_1194 = sub_377;
  };
  if (controller_c_air_2) {
    v_1195 = v_1194;
  } else {
    v_1195 = sub_376;
  };
  if (controller_c_air_1) {
    v_1196 = v_1195;
  } else {
    v_1196 = sub_375;
  };
  if (controller_air_failed_recovered) {
    v_1192 = sub_377;
  } else {
    v_1192 = sub_248;
  };
  if (controller_c_air_2) {
    v_1193 = v_1192;
  } else {
    v_1193 = sub_253;
  };
  if (controller_c_air_1) {
    sub_426 = sub_262;
  } else {
    sub_426 = v_1193;
  };
  if (controller_v_448) {
    sub_425 = v_1196;
  } else {
    sub_425 = sub_426;
  };
  if (controller_air_failed_recovered) {
    v = sub_250;
  } else {
    v = sub_377;
  };
  if (controller_c_air_2) {
    v_1191 = v;
  } else {
    v_1191 = sub_376;
  };
  if (controller_c_air_1) {
    sub_427 = v_1191;
  } else {
    sub_427 = sub_375;
  };
  if (controller_v_448) {
    v_1205 = v_1204;
  } else {
    v_1205 = sub_427;
  };
  if (controller_v_450) {
    v_1206 = v_1205;
  } else {
    v_1206 = sub_425;
  };
  if (controller_v_449) {
    sub_421 = v_1206;
  } else {
    sub_421 = sub_422;
  };
  if (controller_v_410) {
    v_1531 = sub_421;
  } else {
    v_1531 = sub_413;
  };
  if (controller_v_411) {
    v_1532 = v_1531;
  } else {
    v_1532 = sub_308;
  };
  if (controller_light_failed_recovered) {
    v_1533 = v_1530;
  } else {
    v_1533 = v_1532;
  };
  if (controller_light_switch) {
    v_1534 = v_1528;
  } else {
    v_1534 = v_1533;
  };
  if (p_controller_c_light_1) {
    sub_0 = v_1534;
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
  int controller_pnr_3, int controller_v_450, int controller_v_449,
  int controller_v_448, int controller_pnr_2, int controller_v_411,
  int controller_v_410, int controller_pnr_1, int controller_v_395,
  int controller_v_394, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_air_2, int controller_c_air_1, int controller_c_window,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_closet_out* _out) {
  
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
  v_1653 = !(controller_ck_17_1);
  sub_19 = (v_1653&&false);
  sub_20 = (controller_ck_17_1&&false);
  if (controller_cleaner) {
    sub_18 = sub_19;
  } else {
    sub_18 = sub_20;
  };
  sub_21 = false;
  if (controller_worker) {
    v_1654 = sub_21;
    sub_17 = sub_18;
  } else {
    v_1654 = sub_18;
    sub_17 = sub_21;
  };
  if (controller_ck_15_1) {
    sub_16 = v_1654;
  } else {
    sub_16 = sub_17;
  };
  if (controller_change_shift) {
    v_1655 = false;
    sub_15 = sub_16;
  } else {
    v_1655 = sub_16;
    sub_15 = false;
  };
  if (controller_ck_1) {
    v_1656 = v_1655;
  } else {
    v_1656 = sub_15;
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
    v_1657 = sub_24;
    sub_22 = sub_23;
  } else {
    v_1657 = sub_23;
    sub_22 = sub_24;
  };
  if (controller_ck_1) {
    v_1658 = v_1657;
  } else {
    v_1658 = sub_22;
  };
  if (controller_c_pc) {
    v_1659 = v_1656;
  } else {
    v_1659 = v_1658;
  };
  sub_29 = sub_16;
  sub_28 = sub_29;
  if (controller_c_window) {
    sub_14 = v_1659;
  } else {
    sub_14 = sub_28;
  };
  if (controller_c_pc) {
    sub_30 = false;
  } else {
    sub_30 = sub_24;
  };
  if (controller_c_window) {
    v_1660 = sub_30;
  } else {
    v_1660 = sub_28;
  };
  if (controller_v_395) {
    v_1661 = v_1660;
  } else {
    v_1661 = sub_14;
  };
  if (controller_blind_failed_recovered) {
    sub_13 = sub_14;
  } else {
    sub_13 = v_1661;
  };
  if (controller_c_window) {
    sub_32 = sub_30;
  } else {
    sub_32 = false;
  };
  sub_31 = sub_32;
  if (controller_c_door) {
    v_1662 = sub_31;
    sub_12 = sub_13;
  } else {
    v_1662 = sub_13;
    sub_12 = sub_31;
  };
  if (controller_ck_11_1) {
    sub_11 = v_1662;
  } else {
    sub_11 = sub_12;
  };
  sub_10 = sub_11;
  sub_9 = sub_10;
  if (controller_ck_15_1) {
    sub_38 = sub_25;
  } else {
    sub_38 = sub_27;
  };
  if (controller_change_shift) {
    sub_37 = false;
    sub_39 = sub_38;
  } else {
    sub_37 = sub_38;
    sub_39 = false;
  };
  if (controller_ck_1) {
    sub_36 = sub_39;
  } else {
    sub_36 = sub_37;
  };
  sub_40 = sub_26;
  if (controller_c_pc) {
    v_1651 = sub_36;
  } else {
    v_1651 = sub_40;
  };
  sub_42 = sub_38;
  sub_41 = sub_42;
  if (controller_c_window) {
    sub_35 = v_1651;
  } else {
    sub_35 = sub_41;
  };
  if (controller_change_shift) {
    v_1648 = sub_24;
    sub_44 = sub_40;
  } else {
    v_1648 = sub_40;
    sub_44 = sub_24;
  };
  if (controller_ck_1) {
    v_1649 = v_1648;
  } else {
    v_1649 = sub_44;
  };
  if (controller_c_pc) {
    v_1650 = false;
  } else {
    v_1650 = v_1649;
  };
  if (controller_ck_1) {
    sub_46 = sub_37;
  } else {
    sub_46 = sub_39;
  };
  sub_45 = sub_46;
  if (controller_c_window) {
    sub_43 = v_1650;
  } else {
    sub_43 = sub_45;
  };
  if (controller_v_395) {
    v_1652 = sub_43;
  } else {
    v_1652 = sub_35;
  };
  if (controller_blind_failed_recovered) {
    sub_34 = sub_35;
  } else {
    sub_34 = v_1652;
  };
  sub_33 = sub_34;
  if (controller_air_failed_recovered) {
    v_1663 = sub_33;
  } else {
    v_1663 = sub_11;
  };
  if (controller_c_air_2) {
    v_1664 = v_1663;
  } else {
    v_1664 = sub_10;
  };
  if (controller_c_air_1) {
    sub_8 = sub_9;
  } else {
    sub_8 = v_1664;
  };
  if (controller_c_pc) {
    sub_51 = sub_42;
  } else {
    sub_51 = sub_29;
  };
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  if (controller_air_failed_recovered) {
    sub_47 = sub_11;
  } else {
    sub_47 = sub_48;
  };
  if (controller_change_shift) {
    v_1645 = sub_38;
    sub_57 = sub_40;
  } else {
    v_1645 = sub_40;
    sub_57 = sub_38;
  };
  if (controller_ck_1) {
    sub_56 = v_1645;
  } else {
    sub_56 = sub_57;
  };
  if (controller_c_pc) {
    v_1646 = sub_42;
  } else {
    v_1646 = sub_56;
  };
  if (controller_c_window) {
    sub_55 = v_1646;
  } else {
    sub_55 = sub_41;
  };
  if (controller_change_shift) {
    v_1643 = false;
    sub_60 = sub_40;
  } else {
    v_1643 = sub_40;
    sub_60 = false;
  };
  if (controller_ck_1) {
    sub_59 = v_1643;
  } else {
    sub_59 = sub_60;
  };
  if (controller_c_pc) {
    v_1644 = sub_46;
  } else {
    v_1644 = sub_59;
  };
  if (controller_c_window) {
    sub_58 = v_1644;
  } else {
    sub_58 = sub_45;
  };
  if (controller_v_395) {
    v_1647 = sub_58;
  } else {
    v_1647 = sub_55;
  };
  if (controller_blind_failed_recovered) {
    sub_54 = sub_55;
  } else {
    sub_54 = v_1647;
  };
  sub_53 = sub_54;
  if (controller_air_failed_recovered) {
    v_1667 = sub_11;
  } else {
    v_1667 = sub_53;
  };
  sub_52 = sub_53;
  if (controller_c_air_2) {
    v_1665 = sub_47;
  } else {
    v_1665 = sub_52;
  };
  sub_62 = sub_33;
  if (controller_c_air_2) {
    v_1668 = v_1667;
  } else {
    v_1668 = sub_62;
  };
  sub_61 = sub_62;
  if (controller_c_air_1) {
    v_1666 = v_1665;
  } else {
    v_1666 = sub_61;
  };
  if (controller_v_448) {
    sub_7 = v_1666;
  } else {
    sub_7 = sub_8;
  };
  sub_63 = sub_52;
  if (controller_v_450) {
    sub_6 = sub_63;
  } else {
    sub_6 = sub_7;
  };
  if (controller_air_failed_recovered) {
    v_1640 = sub_53;
  } else {
    v_1640 = sub_11;
  };
  if (controller_c_air_2) {
    v_1641 = v_1640;
  } else {
    v_1641 = sub_10;
  };
  if (controller_c_air_1) {
    v_1642 = v_1641;
  } else {
    v_1642 = sub_9;
  };
  sub_67 = sub_48;
  sub_66 = sub_67;
  if (controller_c_air_1) {
    v_1669 = v_1668;
  } else {
    v_1669 = sub_66;
  };
  if (controller_air_failed_recovered) {
    sub_68 = sub_11;
  } else {
    sub_68 = sub_33;
  };
  if (controller_c_air_2) {
    v_1639 = sub_68;
  } else {
    v_1639 = sub_52;
  };
  if (controller_c_air_1) {
    sub_65 = sub_66;
  } else {
    sub_65 = v_1639;
  };
  if (controller_v_448) {
    sub_64 = v_1642;
  } else {
    sub_64 = sub_65;
  };
  if (controller_air_failed_recovered) {
    v_1637 = sub_48;
  } else {
    v_1637 = sub_11;
  };
  if (controller_c_air_2) {
    v_1638 = v_1637;
  } else {
    v_1638 = sub_10;
  };
  if (controller_c_air_1) {
    sub_69 = v_1638;
  } else {
    sub_69 = sub_9;
  };
  if (controller_v_448) {
    v_1670 = v_1669;
  } else {
    v_1670 = sub_69;
  };
  if (controller_v_450) {
    v_1671 = v_1670;
  } else {
    v_1671 = sub_64;
  };
  if (controller_v_449) {
    sub_5 = v_1671;
  } else {
    sub_5 = sub_6;
  };
  sub_4 = sub_5;
  if (controller_c_pc) {
    v_1627 = false;
  } else {
    v_1627 = sub_59;
  };
  if (controller_c_window) {
    v_1628 = v_1627;
  } else {
    v_1628 = sub_45;
  };
  if (controller_c_pc) {
    v_1626 = sub_36;
  } else {
    v_1626 = sub_56;
  };
  if (controller_c_window) {
    sub_77 = v_1626;
  } else {
    sub_77 = sub_41;
  };
  if (controller_v_395) {
    v_1629 = v_1628;
  } else {
    v_1629 = sub_77;
  };
  if (controller_blind_failed_recovered) {
    sub_76 = sub_77;
  } else {
    sub_76 = v_1629;
  };
  sub_75 = sub_76;
  if (controller_air_failed_recovered) {
    v_1632 = sub_11;
  } else {
    v_1632 = sub_75;
  };
  if (controller_c_air_2) {
    v_1633 = v_1632;
  } else {
    v_1633 = sub_62;
  };
  if (controller_c_air_1) {
    v_1634 = v_1633;
  } else {
    v_1634 = sub_66;
  };
  if (controller_v_448) {
    v_1635 = v_1634;
  } else {
    v_1635 = sub_69;
  };
  sub_74 = sub_75;
  if (controller_c_air_2) {
    v_1630 = sub_47;
  } else {
    v_1630 = sub_74;
  };
  if (controller_c_air_1) {
    v_1631 = v_1630;
  } else {
    v_1631 = sub_61;
  };
  if (controller_v_448) {
    sub_73 = v_1631;
  } else {
    sub_73 = sub_8;
  };
  sub_78 = sub_74;
  if (controller_v_450) {
    sub_72 = sub_78;
  } else {
    sub_72 = sub_73;
  };
  if (controller_air_failed_recovered) {
    v_1623 = sub_75;
  } else {
    v_1623 = sub_11;
  };
  if (controller_c_air_2) {
    v_1624 = v_1623;
  } else {
    v_1624 = sub_10;
  };
  if (controller_c_air_1) {
    v_1625 = v_1624;
  } else {
    v_1625 = sub_9;
  };
  if (controller_c_air_2) {
    v_1622 = sub_68;
  } else {
    v_1622 = sub_74;
  };
  if (controller_c_air_1) {
    sub_80 = sub_66;
  } else {
    sub_80 = v_1622;
  };
  if (controller_v_448) {
    sub_79 = v_1625;
  } else {
    sub_79 = sub_80;
  };
  if (controller_v_450) {
    v_1636 = v_1635;
  } else {
    v_1636 = sub_79;
  };
  if (controller_v_449) {
    sub_71 = v_1636;
  } else {
    sub_71 = sub_72;
  };
  sub_70 = sub_71;
  if (controller_v_410) {
    v_1672 = sub_4;
    sub_3 = sub_70;
  } else {
    v_1672 = sub_70;
    sub_3 = sub_4;
  };
  if (controller_v_411) {
    v_1673 = v_1672;
  } else {
    v_1673 = sub_3;
  };
  sub_86 = sub_43;
  sub_85 = sub_86;
  if (controller_air_failed_recovered) {
    v_1612 = sub_85;
  } else {
    v_1612 = sub_11;
  };
  if (controller_c_air_2) {
    v_1613 = v_1612;
  } else {
    v_1613 = sub_10;
  };
  if (controller_c_air_1) {
    sub_84 = sub_9;
  } else {
    sub_84 = v_1613;
  };
  if (controller_c_pc) {
    v_1611 = sub_36;
  } else {
    v_1611 = sub_29;
  };
  if (controller_c_window) {
    sub_89 = v_1611;
  } else {
    sub_89 = sub_51;
  };
  sub_88 = sub_89;
  sub_87 = sub_88;
  if (controller_air_failed_recovered) {
    v_1614 = sub_11;
  } else {
    v_1614 = sub_87;
  };
  sub_92 = sub_58;
  sub_91 = sub_92;
  if (controller_air_failed_recovered) {
    v_1617 = sub_11;
  } else {
    v_1617 = sub_91;
  };
  sub_90 = sub_91;
  if (controller_c_air_2) {
    v_1615 = v_1614;
  } else {
    v_1615 = sub_90;
  };
  sub_93 = sub_85;
  if (controller_c_air_2) {
    v_1618 = v_1617;
  } else {
    v_1618 = sub_93;
  };
  if (controller_c_air_1) {
    v_1616 = v_1615;
  } else {
    v_1616 = sub_93;
  };
  if (controller_v_448) {
    sub_83 = v_1616;
  } else {
    sub_83 = sub_84;
  };
  sub_94 = sub_90;
  if (controller_v_450) {
    sub_82 = sub_94;
  } else {
    sub_82 = sub_83;
  };
  if (controller_air_failed_recovered) {
    v_1608 = sub_91;
  } else {
    v_1608 = sub_11;
  };
  if (controller_c_air_2) {
    v_1609 = v_1608;
  } else {
    v_1609 = sub_10;
  };
  if (controller_c_air_1) {
    v_1610 = v_1609;
  } else {
    v_1610 = sub_9;
  };
  if (controller_air_failed_recovered) {
    v_1606 = sub_11;
  } else {
    v_1606 = sub_85;
  };
  if (controller_c_air_2) {
    v_1607 = v_1606;
  } else {
    v_1607 = sub_90;
  };
  sub_98 = sub_87;
  sub_97 = sub_98;
  if (controller_c_air_1) {
    v_1619 = v_1618;
    sub_96 = sub_97;
  } else {
    v_1619 = sub_97;
    sub_96 = v_1607;
  };
  if (controller_v_448) {
    sub_95 = v_1610;
  } else {
    sub_95 = sub_96;
  };
  if (controller_air_failed_recovered) {
    v_1604 = sub_87;
  } else {
    v_1604 = sub_11;
  };
  if (controller_c_air_2) {
    v_1605 = v_1604;
  } else {
    v_1605 = sub_10;
  };
  if (controller_c_air_1) {
    sub_99 = v_1605;
  } else {
    sub_99 = sub_9;
  };
  if (controller_v_448) {
    v_1620 = v_1619;
  } else {
    v_1620 = sub_99;
  };
  if (controller_v_450) {
    v_1621 = v_1620;
  } else {
    v_1621 = sub_95;
  };
  if (controller_v_449) {
    sub_81 = v_1621;
  } else {
    sub_81 = sub_82;
  };
  if (controller_v_411) {
    v_1674 = sub_81;
  } else {
    v_1674 = sub_70;
  };
  if (controller_light_failed_recovered) {
    sub_2 = v_1673;
  } else {
    sub_2 = v_1674;
  };
  sub_116 = (controller_ck_17_1||false);
  v_1585 = !(controller_ck_17_1);
  sub_117 = (v_1585||false);
  if (controller_cleaner) {
    sub_115 = sub_116;
  } else {
    sub_115 = sub_117;
  };
  sub_118 = true;
  if (controller_worker) {
    v_1586 = sub_118;
    sub_114 = sub_115;
  } else {
    v_1586 = sub_115;
    sub_114 = sub_118;
  };
  if (controller_ck_15_1) {
    sub_113 = v_1586;
  } else {
    sub_113 = sub_114;
  };
  if (controller_change_shift) {
    v_1587 = false;
    sub_112 = sub_113;
  } else {
    v_1587 = sub_113;
    sub_112 = false;
  };
  if (controller_ck_1) {
    v_1588 = v_1587;
  } else {
    v_1588 = sub_112;
  };
  sub_120 = sub_118;
  if (controller_cleaner) {
    sub_123 = sub_117;
  } else {
    sub_123 = sub_116;
  };
  if (controller_worker) {
    sub_122 = sub_123;
    sub_124 = false;
  } else {
    sub_122 = false;
    sub_124 = sub_123;
  };
  if (controller_ck_15_1) {
    sub_121 = sub_124;
  } else {
    sub_121 = sub_122;
  };
  if (controller_change_shift) {
    v_1589 = sub_121;
    sub_119 = sub_120;
  } else {
    v_1589 = sub_120;
    sub_119 = sub_121;
  };
  if (controller_ck_1) {
    v_1590 = v_1589;
  } else {
    v_1590 = sub_119;
  };
  if (controller_c_pc) {
    v_1591 = v_1588;
  } else {
    v_1591 = v_1590;
  };
  sub_126 = sub_113;
  sub_125 = sub_126;
  if (controller_c_window) {
    sub_111 = v_1591;
  } else {
    sub_111 = sub_125;
  };
  if (controller_c_pc) {
    sub_127 = false;
  } else {
    sub_127 = sub_121;
  };
  if (controller_c_window) {
    v_1592 = sub_127;
  } else {
    v_1592 = sub_125;
  };
  if (controller_v_395) {
    v_1593 = v_1592;
  } else {
    v_1593 = sub_111;
  };
  if (controller_blind_failed_recovered) {
    sub_110 = sub_111;
  } else {
    sub_110 = v_1593;
  };
  if (controller_c_window) {
    sub_129 = sub_127;
  } else {
    sub_129 = false;
  };
  sub_128 = sub_129;
  if (controller_c_door) {
    v_1594 = sub_128;
    sub_109 = sub_110;
  } else {
    v_1594 = sub_110;
    sub_109 = sub_128;
  };
  if (controller_ck_11_1) {
    sub_108 = v_1594;
  } else {
    sub_108 = sub_109;
  };
  sub_107 = sub_108;
  sub_106 = sub_107;
  if (controller_ck_15_1) {
    sub_135 = sub_122;
  } else {
    sub_135 = sub_124;
  };
  if (controller_change_shift) {
    sub_134 = false;
    sub_136 = sub_135;
  } else {
    sub_134 = sub_135;
    sub_136 = false;
  };
  if (controller_ck_1) {
    sub_133 = sub_136;
  } else {
    sub_133 = sub_134;
  };
  sub_137 = sub_123;
  if (controller_c_pc) {
    v_1583 = sub_133;
  } else {
    v_1583 = sub_137;
  };
  sub_139 = sub_135;
  sub_138 = sub_139;
  if (controller_c_window) {
    sub_132 = v_1583;
  } else {
    sub_132 = sub_138;
  };
  if (controller_change_shift) {
    v_1580 = sub_121;
    sub_141 = sub_137;
  } else {
    v_1580 = sub_137;
    sub_141 = sub_121;
  };
  if (controller_ck_1) {
    v_1581 = v_1580;
  } else {
    v_1581 = sub_141;
  };
  if (controller_c_pc) {
    v_1582 = false;
  } else {
    v_1582 = v_1581;
  };
  if (controller_ck_1) {
    sub_143 = sub_134;
  } else {
    sub_143 = sub_136;
  };
  sub_142 = sub_143;
  if (controller_c_window) {
    sub_140 = v_1582;
  } else {
    sub_140 = sub_142;
  };
  if (controller_v_395) {
    v_1584 = sub_140;
  } else {
    v_1584 = sub_132;
  };
  if (controller_blind_failed_recovered) {
    sub_131 = sub_132;
  } else {
    sub_131 = v_1584;
  };
  sub_130 = sub_131;
  if (controller_air_failed_recovered) {
    v_1595 = sub_130;
  } else {
    v_1595 = sub_108;
  };
  if (controller_c_air_2) {
    v_1596 = v_1595;
  } else {
    v_1596 = sub_107;
  };
  if (controller_c_air_1) {
    sub_105 = sub_106;
  } else {
    sub_105 = v_1596;
  };
  v_1578 = !(controller_ck_17_1);
  if (controller_cleaner) {
    sub_152 = v_1578;
  } else {
    sub_152 = controller_ck_17_1;
  };
  if (controller_worker) {
    v_1579 = sub_152;
    sub_151 = sub_18;
  } else {
    v_1579 = sub_18;
    sub_151 = sub_152;
  };
  if (controller_ck_15_1) {
    sub_150 = v_1579;
  } else {
    sub_150 = sub_151;
  };
  sub_149 = sub_150;
  if (controller_c_pc) {
    sub_148 = sub_139;
  } else {
    sub_148 = sub_149;
  };
  sub_147 = sub_148;
  sub_146 = sub_147;
  sub_145 = sub_146;
  if (controller_air_failed_recovered) {
    sub_144 = sub_108;
  } else {
    sub_144 = sub_145;
  };
  if (controller_change_shift) {
    v_1575 = sub_135;
    sub_158 = sub_137;
  } else {
    v_1575 = sub_137;
    sub_158 = sub_135;
  };
  if (controller_ck_1) {
    sub_157 = v_1575;
  } else {
    sub_157 = sub_158;
  };
  if (controller_c_pc) {
    v_1576 = sub_139;
  } else {
    v_1576 = sub_157;
  };
  if (controller_c_window) {
    sub_156 = v_1576;
  } else {
    sub_156 = sub_138;
  };
  if (controller_change_shift) {
    v_1573 = false;
    sub_161 = sub_137;
  } else {
    v_1573 = sub_137;
    sub_161 = false;
  };
  if (controller_ck_1) {
    sub_160 = v_1573;
  } else {
    sub_160 = sub_161;
  };
  if (controller_c_pc) {
    v_1574 = sub_143;
  } else {
    v_1574 = sub_160;
  };
  if (controller_c_window) {
    sub_159 = v_1574;
  } else {
    sub_159 = sub_142;
  };
  if (controller_v_395) {
    v_1577 = sub_159;
  } else {
    v_1577 = sub_156;
  };
  if (controller_blind_failed_recovered) {
    sub_155 = sub_156;
  } else {
    sub_155 = v_1577;
  };
  sub_154 = sub_155;
  if (controller_air_failed_recovered) {
    v_1599 = sub_108;
  } else {
    v_1599 = sub_154;
  };
  sub_153 = sub_154;
  if (controller_c_air_2) {
    v_1597 = sub_144;
  } else {
    v_1597 = sub_153;
  };
  sub_163 = sub_130;
  if (controller_c_air_2) {
    v_1600 = v_1599;
  } else {
    v_1600 = sub_163;
  };
  sub_162 = sub_163;
  if (controller_c_air_1) {
    v_1598 = v_1597;
  } else {
    v_1598 = sub_162;
  };
  if (controller_v_448) {
    sub_104 = v_1598;
  } else {
    sub_104 = sub_105;
  };
  sub_164 = sub_153;
  if (controller_v_450) {
    sub_103 = sub_164;
  } else {
    sub_103 = sub_104;
  };
  if (controller_air_failed_recovered) {
    v_1570 = sub_154;
  } else {
    v_1570 = sub_108;
  };
  if (controller_c_air_2) {
    v_1571 = v_1570;
  } else {
    v_1571 = sub_107;
  };
  if (controller_c_air_1) {
    v_1572 = v_1571;
  } else {
    v_1572 = sub_106;
  };
  sub_168 = sub_145;
  sub_167 = sub_168;
  if (controller_c_air_1) {
    v_1601 = v_1600;
  } else {
    v_1601 = sub_167;
  };
  if (controller_air_failed_recovered) {
    sub_169 = sub_108;
  } else {
    sub_169 = sub_130;
  };
  if (controller_c_air_2) {
    v_1569 = sub_169;
  } else {
    v_1569 = sub_153;
  };
  if (controller_c_air_1) {
    sub_166 = sub_167;
  } else {
    sub_166 = v_1569;
  };
  if (controller_v_448) {
    sub_165 = v_1572;
  } else {
    sub_165 = sub_166;
  };
  if (controller_air_failed_recovered) {
    v_1567 = sub_145;
  } else {
    v_1567 = sub_108;
  };
  if (controller_c_air_2) {
    v_1568 = v_1567;
  } else {
    v_1568 = sub_107;
  };
  if (controller_c_air_1) {
    sub_170 = v_1568;
  } else {
    sub_170 = sub_106;
  };
  if (controller_v_448) {
    v_1602 = v_1601;
  } else {
    v_1602 = sub_170;
  };
  if (controller_v_450) {
    v_1603 = v_1602;
  } else {
    v_1603 = sub_165;
  };
  if (controller_v_449) {
    sub_102 = v_1603;
  } else {
    sub_102 = sub_103;
  };
  sub_101 = sub_102;
  if (controller_c_pc) {
    v_1557 = false;
  } else {
    v_1557 = sub_160;
  };
  if (controller_c_window) {
    v_1558 = v_1557;
  } else {
    v_1558 = sub_142;
  };
  if (controller_c_pc) {
    v_1556 = sub_133;
  } else {
    v_1556 = sub_157;
  };
  if (controller_c_window) {
    sub_178 = v_1556;
  } else {
    sub_178 = sub_138;
  };
  if (controller_v_395) {
    v_1559 = v_1558;
  } else {
    v_1559 = sub_178;
  };
  if (controller_blind_failed_recovered) {
    sub_177 = sub_178;
  } else {
    sub_177 = v_1559;
  };
  sub_176 = sub_177;
  if (controller_air_failed_recovered) {
    v_1562 = sub_108;
  } else {
    v_1562 = sub_176;
  };
  if (controller_c_air_2) {
    v_1563 = v_1562;
  } else {
    v_1563 = sub_163;
  };
  if (controller_c_air_1) {
    v_1564 = v_1563;
  } else {
    v_1564 = sub_167;
  };
  if (controller_v_448) {
    v_1565 = v_1564;
  } else {
    v_1565 = sub_170;
  };
  sub_175 = sub_176;
  if (controller_c_air_2) {
    v_1560 = sub_144;
  } else {
    v_1560 = sub_175;
  };
  if (controller_c_air_1) {
    v_1561 = v_1560;
  } else {
    v_1561 = sub_162;
  };
  if (controller_v_448) {
    sub_174 = v_1561;
  } else {
    sub_174 = sub_105;
  };
  sub_179 = sub_175;
  if (controller_v_450) {
    sub_173 = sub_179;
  } else {
    sub_173 = sub_174;
  };
  if (controller_air_failed_recovered) {
    v_1553 = sub_176;
  } else {
    v_1553 = sub_108;
  };
  if (controller_c_air_2) {
    v_1554 = v_1553;
  } else {
    v_1554 = sub_107;
  };
  if (controller_c_air_1) {
    v_1555 = v_1554;
  } else {
    v_1555 = sub_106;
  };
  if (controller_c_air_2) {
    v_1552 = sub_169;
  } else {
    v_1552 = sub_175;
  };
  if (controller_c_air_1) {
    sub_181 = sub_167;
  } else {
    sub_181 = v_1552;
  };
  if (controller_v_448) {
    sub_180 = v_1555;
  } else {
    sub_180 = sub_181;
  };
  if (controller_v_450) {
    v_1566 = v_1565;
  } else {
    v_1566 = sub_180;
  };
  if (controller_v_449) {
    sub_172 = v_1566;
  } else {
    sub_172 = sub_173;
  };
  sub_171 = sub_172;
  if (controller_v_410) {
    v_1675 = sub_101;
    sub_100 = sub_171;
  } else {
    v_1675 = sub_171;
    sub_100 = sub_101;
  };
  if (controller_v_411) {
    v_1676 = v_1675;
  } else {
    v_1676 = sub_100;
  };
  sub_187 = sub_140;
  sub_186 = sub_187;
  if (controller_air_failed_recovered) {
    v_1542 = sub_186;
  } else {
    v_1542 = sub_108;
  };
  if (controller_c_air_2) {
    v_1543 = v_1542;
  } else {
    v_1543 = sub_107;
  };
  if (controller_c_air_1) {
    sub_185 = sub_106;
  } else {
    sub_185 = v_1543;
  };
  if (controller_c_pc) {
    v_1541 = sub_133;
  } else {
    v_1541 = sub_149;
  };
  if (controller_c_window) {
    sub_190 = v_1541;
  } else {
    sub_190 = sub_148;
  };
  sub_189 = sub_190;
  sub_188 = sub_189;
  if (controller_air_failed_recovered) {
    v_1544 = sub_108;
  } else {
    v_1544 = sub_188;
  };
  sub_193 = sub_159;
  sub_192 = sub_193;
  if (controller_air_failed_recovered) {
    v_1547 = sub_108;
  } else {
    v_1547 = sub_192;
  };
  sub_191 = sub_192;
  if (controller_c_air_2) {
    v_1545 = v_1544;
  } else {
    v_1545 = sub_191;
  };
  sub_194 = sub_186;
  if (controller_c_air_2) {
    v_1548 = v_1547;
  } else {
    v_1548 = sub_194;
  };
  if (controller_c_air_1) {
    v_1546 = v_1545;
  } else {
    v_1546 = sub_194;
  };
  if (controller_v_448) {
    sub_184 = v_1546;
  } else {
    sub_184 = sub_185;
  };
  sub_195 = sub_191;
  if (controller_v_450) {
    sub_183 = sub_195;
  } else {
    sub_183 = sub_184;
  };
  if (controller_air_failed_recovered) {
    v_1538 = sub_192;
  } else {
    v_1538 = sub_108;
  };
  if (controller_c_air_2) {
    v_1539 = v_1538;
  } else {
    v_1539 = sub_107;
  };
  if (controller_c_air_1) {
    v_1540 = v_1539;
  } else {
    v_1540 = sub_106;
  };
  if (controller_air_failed_recovered) {
    v_1536 = sub_108;
  } else {
    v_1536 = sub_186;
  };
  if (controller_c_air_2) {
    v_1537 = v_1536;
  } else {
    v_1537 = sub_191;
  };
  sub_199 = sub_188;
  sub_198 = sub_199;
  if (controller_c_air_1) {
    v_1549 = v_1548;
    sub_197 = sub_198;
  } else {
    v_1549 = sub_198;
    sub_197 = v_1537;
  };
  if (controller_v_448) {
    sub_196 = v_1540;
  } else {
    sub_196 = sub_197;
  };
  if (controller_air_failed_recovered) {
    v = sub_188;
  } else {
    v = sub_108;
  };
  if (controller_c_air_2) {
    v_1535 = v;
  } else {
    v_1535 = sub_107;
  };
  if (controller_c_air_1) {
    sub_200 = v_1535;
  } else {
    sub_200 = sub_106;
  };
  if (controller_v_448) {
    v_1550 = v_1549;
  } else {
    v_1550 = sub_200;
  };
  if (controller_v_450) {
    v_1551 = v_1550;
  } else {
    v_1551 = sub_196;
  };
  if (controller_v_449) {
    sub_182 = v_1551;
  } else {
    sub_182 = sub_183;
  };
  if (controller_v_411) {
    v_1677 = sub_182;
  } else {
    v_1677 = sub_171;
  };
  if (controller_light_failed_recovered) {
    v_1678 = v_1676;
  } else {
    v_1678 = v_1677;
  };
  if (p_controller_c_closet) {
    sub_1 = v_1678;
  } else {
    sub_1 = sub_2;
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
  int controller_pnr_3, int controller_v_450, int controller_v_449,
  int controller_v_448, int controller_pnr_2, int controller_v_411,
  int controller_v_410, int controller_pnr_1, int controller_v_395,
  int controller_v_394, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_2_out* _out) {
  
  int v_1908;
  int v_1907;
  int v_1906;
  int v_1905;
  int v_1904;
  int v_1903;
  int v_1902;
  int v_1901;
  int v_1900;
  int v_1899;
  int v_1898;
  int v_1897;
  int v_1896;
  int v_1895;
  int v_1894;
  int v_1893;
  int v_1892;
  int v_1891;
  int v_1890;
  int v_1889;
  int v_1888;
  int v_1887;
  int v_1886;
  int v_1885;
  int v_1884;
  int v_1883;
  int v_1882;
  int v_1881;
  int v_1880;
  int v_1879;
  int v_1878;
  int v_1877;
  int v_1876;
  int v_1875;
  int v_1874;
  int v_1873;
  int v_1872;
  int v_1871;
  int v_1870;
  int v_1869;
  int v_1868;
  int v_1867;
  int v_1866;
  int v_1865;
  int v_1864;
  int v_1863;
  int v_1862;
  int v_1861;
  int v_1860;
  int v_1859;
  int v_1858;
  int v_1857;
  int v_1856;
  int v_1855;
  int v_1854;
  int v_1853;
  int v_1852;
  int v_1851;
  int v_1850;
  int v_1849;
  int v_1848;
  int v_1847;
  int v_1846;
  int v_1845;
  int v_1844;
  int v_1843;
  int v_1842;
  int v_1841;
  int v_1840;
  int v_1839;
  int v_1838;
  int v_1837;
  int v_1836;
  int v_1835;
  int v_1834;
  int v_1833;
  int v_1832;
  int v_1831;
  int v_1830;
  int v_1829;
  int v_1828;
  int v_1827;
  int v_1826;
  int v_1825;
  int v_1824;
  int v_1823;
  int v_1822;
  int v_1821;
  int v_1820;
  int v_1819;
  int v_1818;
  int v_1817;
  int v_1816;
  int v_1815;
  int v_1814;
  int v_1813;
  int v_1812;
  int v_1811;
  int v_1810;
  int v_1809;
  int v_1808;
  int v_1807;
  int v_1806;
  int v_1805;
  int v_1804;
  int v_1803;
  int v_1802;
  int v_1801;
  int v_1800;
  int v_1799;
  int v_1798;
  int v_1797;
  int v_1796;
  int v_1795;
  int v_1794;
  int v_1793;
  int v_1792;
  int v_1791;
  int v_1790;
  int v_1789;
  int v_1788;
  int v_1787;
  int v_1786;
  int v_1785;
  int v_1784;
  int v_1783;
  int v_1782;
  int v_1781;
  int v_1780;
  int v_1779;
  int v_1778;
  int v_1777;
  int v_1776;
  int v_1775;
  int v_1774;
  int v_1773;
  int v_1772;
  int v_1771;
  int v_1770;
  int v_1769;
  int v_1768;
  int v_1767;
  int v_1766;
  int v_1765;
  int v_1764;
  int v_1763;
  int v_1762;
  int v_1761;
  int v_1760;
  int v_1759;
  int v_1758;
  int v_1757;
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
  v_1885 = !(controller_ck_17_1);
  sub_19 = (v_1885&&false);
  sub_20 = (controller_ck_17_1&&false);
  if (controller_cleaner) {
    sub_18 = sub_19;
  } else {
    sub_18 = sub_20;
  };
  sub_21 = false;
  if (controller_worker) {
    v_1886 = sub_21;
    sub_17 = sub_18;
  } else {
    v_1886 = sub_18;
    sub_17 = sub_21;
  };
  if (controller_ck_15_1) {
    sub_16 = v_1886;
  } else {
    sub_16 = sub_17;
  };
  if (controller_change_shift) {
    v_1887 = false;
    sub_15 = sub_16;
  } else {
    v_1887 = sub_16;
    sub_15 = false;
  };
  if (controller_ck_1) {
    sub_14 = v_1887;
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
    v_1888 = sub_24;
    sub_22 = sub_23;
  } else {
    v_1888 = sub_23;
    sub_22 = sub_24;
  };
  if (controller_ck_1) {
    v_1889 = v_1888;
  } else {
    v_1889 = sub_22;
  };
  if (controller_c_pc) {
    v_1890 = sub_14;
  } else {
    v_1890 = v_1889;
  };
  sub_29 = sub_16;
  sub_28 = sub_29;
  if (controller_c_window) {
    sub_13 = v_1890;
  } else {
    sub_13 = sub_28;
  };
  if (controller_c_pc) {
    sub_30 = false;
  } else {
    sub_30 = sub_24;
  };
  if (controller_c_window) {
    v_1891 = sub_30;
  } else {
    v_1891 = sub_28;
  };
  if (controller_v_395) {
    v_1892 = v_1891;
  } else {
    v_1892 = sub_13;
  };
  if (controller_blind_failed_recovered) {
    sub_12 = sub_13;
  } else {
    sub_12 = v_1892;
  };
  sub_37 = (controller_ck_17_1||false);
  v_1879 = !(controller_ck_17_1);
  sub_38 = (v_1879||false);
  if (controller_cleaner) {
    sub_36 = sub_37;
  } else {
    sub_36 = sub_38;
  };
  sub_39 = true;
  if (controller_worker) {
    v_1880 = sub_39;
    sub_35 = sub_36;
  } else {
    v_1880 = sub_36;
    sub_35 = sub_39;
  };
  if (controller_ck_15_1) {
    sub_34 = v_1880;
  } else {
    sub_34 = sub_35;
  };
  if (controller_change_shift) {
    v_1881 = false;
    sub_33 = sub_34;
  } else {
    v_1881 = sub_34;
    sub_33 = false;
  };
  if (controller_ck_1) {
    sub_32 = v_1881;
  } else {
    sub_32 = sub_33;
  };
  sub_41 = sub_39;
  if (controller_cleaner) {
    sub_44 = sub_38;
  } else {
    sub_44 = sub_37;
  };
  if (controller_worker) {
    sub_43 = sub_44;
    sub_45 = false;
  } else {
    sub_43 = false;
    sub_45 = sub_44;
  };
  if (controller_ck_15_1) {
    sub_42 = sub_45;
  } else {
    sub_42 = sub_43;
  };
  if (controller_change_shift) {
    v_1882 = sub_42;
    sub_40 = sub_41;
  } else {
    v_1882 = sub_41;
    sub_40 = sub_42;
  };
  if (controller_ck_1) {
    v_1883 = v_1882;
  } else {
    v_1883 = sub_40;
  };
  if (controller_c_pc) {
    v_1884 = sub_32;
  } else {
    v_1884 = v_1883;
  };
  sub_47 = sub_34;
  sub_46 = sub_47;
  if (controller_c_window) {
    sub_31 = v_1884;
  } else {
    sub_31 = sub_46;
  };
  if (controller_c_pc) {
    sub_48 = false;
  } else {
    sub_48 = sub_42;
  };
  if (controller_c_window) {
    v_1893 = sub_48;
  } else {
    v_1893 = sub_46;
  };
  if (controller_v_395) {
    v_1894 = v_1893;
  } else {
    v_1894 = sub_31;
  };
  if (controller_blind_failed_recovered) {
    v_1895 = sub_31;
  } else {
    v_1895 = v_1894;
  };
  if (p_controller_c_air_2) {
    sub_11 = v_1895;
  } else {
    sub_11 = sub_12;
  };
  if (controller_c_window) {
    sub_51 = sub_30;
  } else {
    sub_51 = false;
  };
  sub_50 = sub_51;
  if (controller_c_window) {
    sub_52 = sub_48;
  } else {
    sub_52 = false;
  };
  if (p_controller_c_air_2) {
    sub_49 = sub_52;
  } else {
    sub_49 = sub_50;
  };
  if (controller_c_door) {
    v_1896 = sub_49;
    sub_10 = sub_11;
  } else {
    v_1896 = sub_11;
    sub_10 = sub_49;
  };
  if (controller_ck_11_1) {
    sub_9 = v_1896;
  } else {
    sub_9 = sub_10;
  };
  sub_8 = sub_9;
  if (controller_ck_15_1) {
    sub_59 = sub_43;
  } else {
    sub_59 = sub_45;
  };
  if (controller_change_shift) {
    v_1872 = sub_59;
    sub_58 = sub_16;
  } else {
    v_1872 = sub_16;
    sub_58 = sub_59;
  };
  if (controller_ck_1) {
    sub_57 = v_1872;
  } else {
    sub_57 = sub_58;
  };
  if (controller_worker) {
    sub_62 = sub_26;
    sub_63 = sub_44;
  } else {
    sub_62 = sub_44;
    sub_63 = sub_26;
  };
  if (controller_ck_15_1) {
    sub_61 = sub_63;
  } else {
    sub_61 = sub_62;
  };
  if (controller_change_shift) {
    v_1873 = sub_61;
    sub_60 = sub_23;
  } else {
    v_1873 = sub_23;
    sub_60 = sub_61;
  };
  if (controller_ck_1) {
    v_1874 = v_1873;
  } else {
    v_1874 = sub_60;
  };
  if (controller_c_pc) {
    v_1875 = sub_57;
  } else {
    v_1875 = v_1874;
  };
  if (controller_c_window) {
    sub_56 = v_1875;
  } else {
    sub_56 = sub_28;
  };
  if (controller_change_shift) {
    v_1871 = sub_24;
    sub_67 = sub_61;
  } else {
    v_1871 = sub_61;
    sub_67 = sub_24;
  };
  if (controller_ck_1) {
    sub_66 = v_1871;
  } else {
    sub_66 = sub_67;
  };
  if (controller_c_pc) {
    sub_65 = false;
  } else {
    sub_65 = sub_66;
  };
  if (controller_c_window) {
    sub_64 = sub_65;
  } else {
    sub_64 = sub_28;
  };
  if (controller_v_395) {
    v_1876 = sub_64;
  } else {
    v_1876 = sub_56;
  };
  if (controller_blind_failed_recovered) {
    sub_55 = sub_56;
  } else {
    sub_55 = v_1876;
  };
  sub_72 = !(controller_ck_17_1);
  sub_73 = controller_ck_17_1;
  if (controller_cleaner) {
    sub_71 = sub_72;
  } else {
    sub_71 = sub_73;
  };
  sub_70 = sub_71;
  sub_74 = sub_44;
  if (controller_change_shift) {
    v_1868 = sub_74;
    sub_69 = sub_70;
  } else {
    v_1868 = sub_70;
    sub_69 = sub_74;
  };
  if (controller_ck_1) {
    v_1869 = v_1868;
  } else {
    v_1869 = sub_69;
  };
  if (controller_c_pc) {
    v_1870 = sub_57;
  } else {
    v_1870 = v_1869;
  };
  if (controller_worker) {
    v_1867 = sub_71;
    sub_78 = sub_18;
  } else {
    v_1867 = sub_18;
    sub_78 = sub_71;
  };
  if (controller_ck_15_1) {
    sub_77 = v_1867;
  } else {
    sub_77 = sub_78;
  };
  sub_76 = sub_77;
  sub_75 = sub_76;
  if (controller_c_window) {
    sub_68 = v_1870;
  } else {
    sub_68 = sub_75;
  };
  if (controller_change_shift) {
    v_1866 = sub_42;
    sub_82 = sub_74;
  } else {
    v_1866 = sub_74;
    sub_82 = sub_42;
  };
  if (controller_ck_1) {
    sub_81 = v_1866;
  } else {
    sub_81 = sub_82;
  };
  if (controller_c_pc) {
    sub_80 = false;
  } else {
    sub_80 = sub_81;
  };
  if (controller_change_shift) {
    v_1865 = sub_16;
    sub_85 = sub_77;
  } else {
    v_1865 = sub_77;
    sub_85 = sub_16;
  };
  if (controller_ck_1) {
    sub_84 = v_1865;
  } else {
    sub_84 = sub_85;
  };
  sub_83 = sub_84;
  if (controller_c_window) {
    sub_79 = sub_80;
  } else {
    sub_79 = sub_83;
  };
  if (controller_v_395) {
    v_1877 = sub_79;
  } else {
    v_1877 = sub_68;
  };
  if (controller_blind_failed_recovered) {
    v_1878 = sub_68;
  } else {
    v_1878 = v_1877;
  };
  if (p_controller_c_air_2) {
    sub_54 = v_1878;
  } else {
    sub_54 = sub_55;
  };
  if (controller_change_shift) {
    sub_90 = false;
    sub_91 = sub_59;
  } else {
    sub_90 = sub_59;
    sub_91 = false;
  };
  if (controller_ck_1) {
    sub_89 = sub_91;
  } else {
    sub_89 = sub_90;
  };
  sub_92 = sub_61;
  if (controller_c_pc) {
    v_1863 = sub_89;
  } else {
    v_1863 = sub_92;
  };
  sub_94 = sub_59;
  sub_93 = sub_94;
  if (controller_c_window) {
    sub_88 = v_1863;
  } else {
    sub_88 = sub_93;
  };
  if (controller_ck_1) {
    sub_97 = sub_90;
  } else {
    sub_97 = sub_91;
  };
  sub_96 = sub_97;
  if (controller_c_window) {
    sub_95 = sub_65;
  } else {
    sub_95 = sub_96;
  };
  if (controller_v_395) {
    v_1864 = sub_95;
  } else {
    v_1864 = sub_88;
  };
  if (controller_blind_failed_recovered) {
    sub_87 = sub_88;
  } else {
    sub_87 = v_1864;
  };
  sub_100 = sub_74;
  if (controller_c_pc) {
    v_1861 = sub_89;
  } else {
    v_1861 = sub_100;
  };
  if (controller_c_window) {
    sub_99 = v_1861;
    sub_101 = sub_80;
  } else {
    sub_99 = sub_93;
    sub_101 = sub_96;
  };
  if (controller_v_395) {
    v_1862 = sub_101;
  } else {
    v_1862 = sub_99;
  };
  if (controller_blind_failed_recovered) {
    sub_98 = sub_99;
  } else {
    sub_98 = v_1862;
  };
  if (p_controller_c_air_2) {
    sub_86 = sub_98;
  } else {
    sub_86 = sub_87;
  };
  if (controller_c_door) {
    v_1897 = sub_86;
    sub_53 = sub_54;
  } else {
    v_1897 = sub_54;
    sub_53 = sub_86;
  };
  if (controller_ck_11_1) {
    v_1898 = v_1897;
  } else {
    v_1898 = sub_53;
  };
  if (controller_air_failed_recovered) {
    v_1899 = v_1898;
  } else {
    v_1899 = sub_9;
  };
  if (controller_c_air_1) {
    sub_7 = sub_8;
  } else {
    sub_7 = v_1899;
  };
  if (controller_cleaner) {
    sub_110 = sub_73;
  } else {
    sub_110 = sub_72;
  };
  if (controller_worker) {
    v_1853 = sub_110;
    sub_109 = sub_36;
  } else {
    v_1853 = sub_36;
    sub_109 = sub_110;
  };
  if (controller_ck_15_1) {
    sub_108 = v_1853;
    sub_111 = sub_25;
  } else {
    sub_108 = sub_109;
    sub_111 = sub_27;
  };
  if (controller_change_shift) {
    v_1854 = sub_111;
    sub_107 = sub_108;
  } else {
    v_1854 = sub_108;
    sub_107 = sub_111;
  };
  if (controller_ck_1) {
    v_1855 = v_1854;
  } else {
    v_1855 = sub_107;
  };
  sub_114 = sub_110;
  if (controller_ck_15_1) {
    sub_115 = sub_62;
  } else {
    sub_115 = sub_63;
  };
  if (controller_change_shift) {
    v_1852 = sub_115;
    sub_113 = sub_114;
  } else {
    v_1852 = sub_114;
    sub_113 = sub_115;
  };
  if (controller_ck_1) {
    sub_112 = v_1852;
  } else {
    sub_112 = sub_113;
  };
  if (controller_c_pc) {
    v_1856 = v_1855;
  } else {
    v_1856 = sub_112;
  };
  sub_117 = sub_108;
  sub_116 = sub_117;
  if (controller_c_window) {
    sub_106 = v_1856;
  } else {
    sub_106 = sub_116;
  };
  if (controller_change_shift) {
    sub_121 = sub_111;
    sub_122 = false;
  } else {
    sub_121 = false;
    sub_122 = sub_111;
  };
  if (controller_ck_1) {
    sub_120 = sub_122;
  } else {
    sub_120 = sub_121;
  };
  sub_125 = sub_26;
  if (controller_change_shift) {
    v_1851 = sub_42;
    sub_124 = sub_125;
  } else {
    v_1851 = sub_125;
    sub_124 = sub_42;
  };
  if (controller_ck_1) {
    sub_123 = v_1851;
  } else {
    sub_123 = sub_124;
  };
  if (controller_c_pc) {
    sub_119 = sub_120;
  } else {
    sub_119 = sub_123;
  };
  if (controller_change_shift) {
    v_1850 = sub_34;
    sub_128 = sub_108;
  } else {
    v_1850 = sub_108;
    sub_128 = sub_34;
  };
  if (controller_ck_1) {
    sub_127 = v_1850;
  } else {
    sub_127 = sub_128;
  };
  sub_126 = sub_127;
  if (controller_c_window) {
    sub_118 = sub_119;
  } else {
    sub_118 = sub_126;
  };
  if (controller_v_395) {
    v_1857 = sub_118;
  } else {
    v_1857 = sub_106;
  };
  if (controller_blind_failed_recovered) {
    sub_105 = sub_106;
  } else {
    sub_105 = v_1857;
  };
  if (controller_change_shift) {
    v_1847 = sub_115;
    v_1846 = sub_111;
    sub_131 = sub_34;
  } else {
    v_1847 = sub_41;
    v_1846 = sub_34;
    sub_131 = sub_111;
  };
  if (controller_ck_1) {
    sub_130 = v_1846;
  } else {
    sub_130 = sub_131;
  };
  if (controller_change_shift) {
    sub_132 = sub_41;
  } else {
    sub_132 = sub_115;
  };
  if (controller_ck_1) {
    v_1848 = v_1847;
  } else {
    v_1848 = sub_132;
  };
  if (controller_c_pc) {
    v_1849 = sub_130;
  } else {
    v_1849 = v_1848;
  };
  if (controller_c_window) {
    sub_129 = v_1849;
  } else {
    sub_129 = sub_46;
  };
  if (controller_change_shift) {
    v_1845 = sub_42;
    sub_136 = sub_115;
  } else {
    v_1845 = sub_115;
    sub_136 = sub_42;
  };
  if (controller_ck_1) {
    sub_135 = v_1845;
  } else {
    sub_135 = sub_136;
  };
  if (controller_c_pc) {
    sub_134 = sub_120;
  } else {
    sub_134 = sub_135;
  };
  if (controller_c_window) {
    sub_133 = sub_134;
  } else {
    sub_133 = sub_46;
  };
  if (controller_v_395) {
    v_1858 = sub_133;
  } else {
    v_1858 = sub_129;
  };
  if (controller_blind_failed_recovered) {
    v_1859 = sub_129;
  } else {
    v_1859 = v_1858;
  };
  if (p_controller_c_air_2) {
    sub_104 = v_1859;
  } else {
    sub_104 = sub_105;
  };
  sub_140 = sub_111;
  if (controller_change_shift) {
    v_1840 = sub_115;
    sub_142 = sub_125;
  } else {
    v_1840 = sub_125;
    sub_142 = sub_115;
  };
  if (controller_ck_1) {
    sub_141 = v_1840;
  } else {
    sub_141 = sub_142;
  };
  if (controller_c_pc) {
    v_1841 = sub_140;
  } else {
    v_1841 = sub_141;
  };
  sub_143 = sub_140;
  if (controller_c_window) {
    sub_139 = v_1841;
  } else {
    sub_139 = sub_143;
  };
  sub_145 = sub_120;
  if (controller_c_window) {
    sub_144 = sub_119;
  } else {
    sub_144 = sub_145;
  };
  if (controller_v_395) {
    v_1842 = sub_144;
  } else {
    v_1842 = sub_139;
  };
  if (controller_blind_failed_recovered) {
    sub_138 = sub_139;
  } else {
    sub_138 = v_1842;
  };
  sub_147 = sub_115;
  if (controller_c_pc) {
    v_1839 = sub_140;
  } else {
    v_1839 = sub_147;
  };
  if (controller_c_window) {
    sub_146 = v_1839;
    sub_148 = sub_134;
  } else {
    sub_146 = sub_143;
    sub_148 = sub_145;
  };
  if (controller_v_395) {
    v_1843 = sub_148;
  } else {
    v_1843 = sub_146;
  };
  if (controller_blind_failed_recovered) {
    v_1844 = sub_146;
  } else {
    v_1844 = v_1843;
  };
  if (p_controller_c_air_2) {
    sub_137 = v_1844;
  } else {
    sub_137 = sub_138;
  };
  if (controller_c_door) {
    v_1860 = sub_137;
    sub_103 = sub_104;
  } else {
    v_1860 = sub_104;
    sub_103 = sub_137;
  };
  if (controller_ck_11_1) {
    sub_102 = v_1860;
  } else {
    sub_102 = sub_103;
  };
  if (controller_change_shift) {
    v_1836 = sub_108;
    sub_153 = sub_114;
  } else {
    v_1836 = sub_114;
    sub_153 = sub_108;
  };
  if (controller_ck_1) {
    sub_152 = v_1836;
  } else {
    sub_152 = sub_153;
  };
  if (controller_c_pc) {
    v_1837 = sub_140;
    sub_154 = sub_140;
  } else {
    v_1837 = sub_152;
    sub_154 = sub_117;
  };
  if (controller_c_window) {
    sub_151 = v_1837;
  } else {
    sub_151 = sub_154;
  };
  if (controller_change_shift) {
    sub_157 = sub_111;
    sub_158 = sub_59;
  } else {
    sub_157 = sub_59;
    sub_158 = sub_111;
  };
  if (controller_ck_1) {
    sub_156 = sub_158;
  } else {
    sub_156 = sub_157;
  };
  if (controller_change_shift) {
    v_1834 = sub_34;
    sub_160 = sub_114;
  } else {
    v_1834 = sub_114;
    sub_160 = sub_34;
  };
  if (controller_ck_1) {
    sub_159 = v_1834;
  } else {
    sub_159 = sub_160;
  };
  if (controller_c_pc) {
    v_1835 = sub_156;
    sub_161 = sub_156;
  } else {
    v_1835 = sub_159;
    sub_161 = sub_127;
  };
  if (controller_c_window) {
    sub_155 = v_1835;
  } else {
    sub_155 = sub_161;
  };
  if (controller_v_395) {
    v_1838 = sub_155;
  } else {
    v_1838 = sub_151;
  };
  if (controller_blind_failed_recovered) {
    sub_150 = sub_151;
  } else {
    sub_150 = v_1838;
  };
  if (controller_worker) {
    v_1831 = sub_39;
    sub_167 = sub_110;
  } else {
    v_1831 = sub_110;
    sub_167 = sub_39;
  };
  if (controller_ck_15_1) {
    sub_166 = v_1831;
  } else {
    sub_166 = sub_167;
  };
  if (controller_change_shift) {
    v_1832 = sub_34;
    sub_165 = sub_166;
  } else {
    v_1832 = sub_166;
    sub_165 = sub_34;
  };
  if (controller_ck_1) {
    sub_164 = v_1832;
  } else {
    sub_164 = sub_165;
  };
  if (controller_c_pc) {
    v_1833 = sub_94;
    sub_168 = sub_94;
  } else {
    v_1833 = sub_164;
    sub_168 = sub_47;
  };
  if (controller_c_window) {
    sub_163 = v_1833;
  } else {
    sub_163 = sub_168;
  };
  sub_162 = sub_163;
  if (p_controller_c_air_2) {
    sub_149 = sub_162;
  } else {
    sub_149 = sub_150;
  };
  if (controller_air_failed_recovered) {
    v_1900 = sub_102;
  } else {
    v_1900 = sub_149;
  };
  if (controller_ck_1) {
    sub_174 = sub_121;
  } else {
    sub_174 = sub_122;
  };
  sub_175 = sub_125;
  if (controller_c_pc) {
    v_1829 = sub_174;
  } else {
    v_1829 = sub_175;
  };
  if (controller_c_window) {
    sub_173 = v_1829;
  } else {
    sub_173 = sub_143;
  };
  if (controller_change_shift) {
    v_1828 = sub_24;
    sub_179 = sub_125;
  } else {
    v_1828 = sub_125;
    sub_179 = sub_24;
  };
  if (controller_ck_1) {
    sub_178 = v_1828;
  } else {
    sub_178 = sub_179;
  };
  if (controller_c_pc) {
    sub_177 = false;
  } else {
    sub_177 = sub_178;
  };
  if (controller_c_window) {
    sub_176 = sub_177;
  } else {
    sub_176 = sub_145;
  };
  if (controller_v_395) {
    v_1830 = sub_176;
  } else {
    v_1830 = sub_173;
  };
  if (controller_blind_failed_recovered) {
    sub_172 = sub_173;
  } else {
    sub_172 = v_1830;
  };
  if (p_controller_c_air_2) {
    sub_171 = sub_98;
  } else {
    sub_171 = sub_172;
  };
  sub_170 = sub_171;
  sub_169 = sub_170;
  if (controller_c_air_1) {
    v_1901 = v_1900;
  } else {
    v_1901 = sub_169;
  };
  if (controller_v_448) {
    sub_6 = v_1901;
  } else {
    sub_6 = sub_7;
  };
  if (controller_change_shift) {
    v_1823 = sub_111;
    sub_186 = sub_125;
  } else {
    v_1823 = sub_125;
    sub_186 = sub_111;
  };
  if (controller_ck_1) {
    sub_185 = v_1823;
  } else {
    sub_185 = sub_186;
  };
  if (controller_c_pc) {
    v_1824 = sub_140;
  } else {
    v_1824 = sub_185;
  };
  if (controller_c_window) {
    sub_184 = v_1824;
  } else {
    sub_184 = sub_143;
  };
  if (controller_change_shift) {
    v_1821 = false;
    sub_189 = sub_125;
  } else {
    v_1821 = sub_125;
    sub_189 = false;
  };
  if (controller_ck_1) {
    sub_188 = v_1821;
  } else {
    sub_188 = sub_189;
  };
  if (controller_c_pc) {
    v_1822 = sub_120;
  } else {
    v_1822 = sub_188;
  };
  if (controller_c_window) {
    sub_187 = v_1822;
  } else {
    sub_187 = sub_145;
  };
  if (controller_v_395) {
    v_1825 = sub_187;
  } else {
    v_1825 = sub_184;
  };
  if (controller_blind_failed_recovered) {
    sub_183 = sub_184;
  } else {
    sub_183 = v_1825;
  };
  if (controller_change_shift) {
    v_1819 = sub_59;
    sub_192 = sub_74;
  } else {
    v_1819 = sub_74;
    sub_192 = sub_59;
  };
  if (controller_ck_1) {
    sub_191 = v_1819;
  } else {
    sub_191 = sub_192;
  };
  if (controller_c_pc) {
    v_1820 = sub_94;
  } else {
    v_1820 = sub_191;
  };
  if (controller_c_window) {
    sub_190 = v_1820;
  } else {
    sub_190 = sub_93;
  };
  if (controller_change_shift) {
    v_1817 = false;
    sub_195 = sub_74;
  } else {
    v_1817 = sub_74;
    sub_195 = false;
  };
  if (controller_ck_1) {
    sub_194 = v_1817;
  } else {
    sub_194 = sub_195;
  };
  if (controller_c_pc) {
    v_1818 = sub_97;
  } else {
    v_1818 = sub_194;
  };
  if (controller_c_window) {
    sub_193 = v_1818;
  } else {
    sub_193 = sub_96;
  };
  if (controller_v_395) {
    v_1826 = sub_193;
  } else {
    v_1826 = sub_190;
  };
  if (controller_blind_failed_recovered) {
    v_1827 = sub_190;
  } else {
    v_1827 = v_1826;
  };
  if (p_controller_c_air_2) {
    sub_182 = v_1827;
  } else {
    sub_182 = sub_183;
  };
  sub_181 = sub_182;
  sub_180 = sub_181;
  if (controller_v_450) {
    sub_5 = sub_180;
  } else {
    sub_5 = sub_6;
  };
  if (controller_c_pc) {
    sub_203 = sub_140;
  } else {
    sub_203 = sub_29;
  };
  sub_202 = sub_203;
  sub_201 = sub_202;
  sub_204 = sub_168;
  if (p_controller_c_air_2) {
    sub_200 = sub_204;
  } else {
    sub_200 = sub_201;
  };
  sub_199 = sub_200;
  sub_198 = sub_199;
  if (controller_c_pc) {
    v_1809 = sub_156;
  } else {
    v_1809 = sub_100;
  };
  if (controller_c_window) {
    sub_206 = v_1809;
  } else {
    sub_206 = sub_93;
  };
  if (controller_c_pc) {
    v_1808 = sub_120;
  } else {
    v_1808 = sub_81;
  };
  if (controller_c_window) {
    sub_207 = v_1808;
  } else {
    sub_207 = sub_96;
  };
  if (controller_v_395) {
    v_1810 = sub_207;
  } else {
    v_1810 = sub_206;
  };
  if (controller_blind_failed_recovered) {
    v_1811 = sub_206;
  } else {
    v_1811 = v_1810;
  };
  if (p_controller_c_air_2) {
    sub_205 = v_1811;
  } else {
    sub_205 = sub_138;
  };
  if (controller_air_failed_recovered) {
    v_1812 = sub_102;
  } else {
    v_1812 = sub_205;
  };
  if (controller_c_air_1) {
    sub_197 = sub_198;
  } else {
    sub_197 = v_1812;
  };
  if (controller_c_pc) {
    sub_212 = sub_97;
  } else {
    sub_212 = sub_66;
  };
  if (controller_c_window) {
    sub_211 = sub_212;
  } else {
    sub_211 = sub_28;
  };
  if (controller_v_395) {
    v_1805 = sub_211;
  } else {
    v_1805 = sub_56;
  };
  if (controller_blind_failed_recovered) {
    sub_210 = sub_56;
  } else {
    sub_210 = v_1805;
  };
  if (controller_change_shift) {
    v_1803 = sub_59;
    sub_215 = sub_77;
  } else {
    v_1803 = sub_77;
    sub_215 = sub_59;
  };
  if (controller_ck_1) {
    sub_214 = v_1803;
  } else {
    sub_214 = sub_215;
  };
  if (controller_change_shift) {
    v_1802 = sub_61;
    sub_217 = sub_70;
  } else {
    v_1802 = sub_70;
    sub_217 = sub_61;
  };
  if (controller_ck_1) {
    sub_216 = v_1802;
  } else {
    sub_216 = sub_217;
  };
  if (controller_c_pc) {
    v_1804 = sub_214;
  } else {
    v_1804 = sub_216;
  };
  if (controller_c_window) {
    sub_213 = v_1804;
  } else {
    sub_213 = sub_75;
  };
  if (controller_change_shift) {
    v_1801 = sub_24;
    sub_221 = sub_74;
  } else {
    v_1801 = sub_74;
    sub_221 = sub_24;
  };
  if (controller_ck_1) {
    sub_220 = v_1801;
  } else {
    sub_220 = sub_221;
  };
  if (controller_c_pc) {
    sub_219 = sub_97;
  } else {
    sub_219 = sub_220;
  };
  if (controller_c_window) {
    sub_218 = sub_219;
  } else {
    sub_218 = sub_83;
  };
  if (controller_v_395) {
    v_1806 = sub_218;
  } else {
    v_1806 = sub_213;
  };
  if (controller_blind_failed_recovered) {
    v_1807 = sub_213;
  } else {
    v_1807 = v_1806;
  };
  if (p_controller_c_air_2) {
    sub_209 = v_1807;
  } else {
    sub_209 = sub_210;
  };
  if (controller_c_pc) {
    v_1799 = sub_94;
  } else {
    v_1799 = sub_92;
  };
  if (controller_c_window) {
    sub_224 = v_1799;
    sub_225 = sub_212;
  } else {
    sub_224 = sub_93;
    sub_225 = sub_96;
  };
  if (controller_v_395) {
    v_1800 = sub_225;
  } else {
    v_1800 = sub_224;
  };
  if (controller_blind_failed_recovered) {
    sub_223 = sub_224;
  } else {
    sub_223 = v_1800;
  };
  if (controller_change_shift) {
    v_1796 = sub_61;
    sub_229 = sub_74;
  } else {
    v_1796 = sub_74;
    sub_229 = sub_61;
  };
  if (controller_ck_1) {
    sub_228 = v_1796;
  } else {
    sub_228 = sub_229;
  };
  if (controller_c_pc) {
    v_1797 = sub_94;
  } else {
    v_1797 = sub_228;
  };
  if (controller_c_window) {
    sub_227 = v_1797;
    sub_230 = sub_219;
  } else {
    sub_227 = sub_93;
    sub_230 = sub_96;
  };
  if (controller_v_395) {
    v_1798 = sub_230;
  } else {
    v_1798 = sub_227;
  };
  if (controller_blind_failed_recovered) {
    sub_226 = sub_227;
  } else {
    sub_226 = v_1798;
  };
  if (p_controller_c_air_2) {
    sub_222 = sub_226;
  } else {
    sub_222 = sub_223;
  };
  if (controller_c_door) {
    v_1813 = sub_222;
    sub_208 = sub_209;
  } else {
    v_1813 = sub_209;
    sub_208 = sub_222;
  };
  if (controller_ck_11_1) {
    v_1814 = v_1813;
  } else {
    v_1814 = sub_208;
  };
  if (controller_air_failed_recovered) {
    v_1815 = v_1814;
  } else {
    v_1815 = sub_9;
  };
  if (controller_c_air_1) {
    v_1816 = v_1815;
  } else {
    v_1816 = sub_8;
  };
  if (controller_v_448) {
    sub_196 = v_1816;
  } else {
    sub_196 = sub_197;
  };
  if (controller_change_shift) {
    v_1785 = sub_166;
    sub_236 = sub_23;
  } else {
    v_1785 = sub_23;
    sub_236 = sub_166;
  };
  if (controller_ck_1) {
    v_1786 = v_1785;
  } else {
    v_1786 = sub_236;
  };
  if (controller_c_pc) {
    v_1787 = sub_57;
  } else {
    v_1787 = v_1786;
  };
  if (controller_c_window) {
    sub_235 = v_1787;
  } else {
    sub_235 = sub_28;
  };
  sub_238 = sub_166;
  if (controller_c_pc) {
    sub_237 = sub_94;
  } else {
    sub_237 = sub_238;
  };
  if (controller_c_window) {
    v_1788 = sub_237;
  } else {
    v_1788 = sub_28;
  };
  if (controller_v_395) {
    v_1789 = v_1788;
  } else {
    v_1789 = sub_235;
  };
  if (controller_blind_failed_recovered) {
    sub_234 = sub_235;
  } else {
    sub_234 = v_1789;
  };
  if (controller_c_pc) {
    v_1784 = sub_214;
    sub_240 = sub_76;
  } else {
    v_1784 = sub_238;
    sub_240 = sub_47;
  };
  if (controller_c_window) {
    v_1790 = sub_237;
    sub_239 = v_1784;
  } else {
    v_1790 = sub_240;
    sub_239 = sub_240;
  };
  if (controller_v_395) {
    v_1791 = v_1790;
  } else {
    v_1791 = sub_239;
  };
  if (controller_blind_failed_recovered) {
    v_1792 = sub_239;
  } else {
    v_1792 = v_1791;
  };
  if (p_controller_c_air_2) {
    sub_233 = v_1792;
  } else {
    sub_233 = sub_234;
  };
  if (controller_c_window) {
    sub_242 = sub_237;
  } else {
    sub_242 = sub_168;
  };
  sub_241 = sub_242;
  if (controller_c_door) {
    v_1793 = sub_241;
    sub_232 = sub_233;
  } else {
    v_1793 = sub_233;
    sub_232 = sub_241;
  };
  if (controller_ck_11_1) {
    v_1794 = v_1793;
  } else {
    v_1794 = sub_232;
  };
  if (controller_air_failed_recovered) {
    v_1795 = v_1794;
  } else {
    v_1795 = sub_9;
  };
  if (controller_c_air_1) {
    sub_231 = v_1795;
  } else {
    sub_231 = sub_8;
  };
  if (controller_change_shift) {
    v_1779 = sub_125;
    sub_248 = sub_114;
  } else {
    v_1779 = sub_114;
    sub_248 = sub_125;
  };
  if (controller_ck_1) {
    v_1780 = v_1779;
  } else {
    v_1780 = sub_248;
  };
  if (controller_c_pc) {
    v_1781 = sub_130;
  } else {
    v_1781 = v_1780;
  };
  if (controller_c_window) {
    sub_247 = v_1781;
    sub_249 = sub_177;
  } else {
    sub_247 = sub_116;
    sub_249 = sub_126;
  };
  if (controller_v_395) {
    v_1782 = sub_249;
  } else {
    v_1782 = sub_247;
  };
  if (controller_blind_failed_recovered) {
    sub_246 = sub_247;
  } else {
    sub_246 = v_1782;
  };
  if (controller_c_pc) {
    sub_252 = false;
  } else {
    sub_252 = sub_135;
  };
  if (controller_c_window) {
    sub_251 = sub_252;
  } else {
    sub_251 = sub_46;
  };
  if (controller_v_395) {
    v_1778 = sub_251;
  } else {
    v_1778 = sub_129;
  };
  if (controller_blind_failed_recovered) {
    sub_250 = sub_129;
  } else {
    sub_250 = v_1778;
  };
  if (p_controller_c_air_2) {
    sub_245 = sub_250;
  } else {
    sub_245 = sub_246;
  };
  if (controller_c_pc) {
    v_1776 = sub_174;
  } else {
    v_1776 = sub_147;
  };
  if (controller_c_window) {
    sub_255 = v_1776;
    sub_256 = sub_252;
  } else {
    sub_255 = sub_143;
    sub_256 = sub_145;
  };
  if (controller_v_395) {
    v_1777 = sub_256;
  } else {
    v_1777 = sub_255;
  };
  if (controller_blind_failed_recovered) {
    sub_254 = sub_255;
  } else {
    sub_254 = v_1777;
  };
  if (p_controller_c_air_2) {
    sub_253 = sub_254;
  } else {
    sub_253 = sub_172;
  };
  if (controller_c_door) {
    v_1783 = sub_253;
    sub_244 = sub_245;
  } else {
    v_1783 = sub_245;
    sub_244 = sub_253;
  };
  if (controller_ck_11_1) {
    sub_243 = v_1783;
  } else {
    sub_243 = sub_244;
  };
  if (controller_ck_1) {
    sub_260 = sub_157;
  } else {
    sub_260 = sub_158;
  };
  if (controller_c_pc) {
    v_1774 = sub_260;
  } else {
    v_1774 = sub_175;
  };
  if (controller_c_window) {
    sub_259 = v_1774;
  } else {
    sub_259 = sub_143;
  };
  if (controller_c_pc) {
    v_1773 = sub_97;
  } else {
    v_1773 = sub_178;
  };
  if (controller_c_window) {
    sub_261 = v_1773;
  } else {
    sub_261 = sub_145;
  };
  if (controller_v_395) {
    v_1775 = sub_261;
  } else {
    v_1775 = sub_259;
  };
  if (controller_blind_failed_recovered) {
    sub_258 = sub_259;
  } else {
    sub_258 = v_1775;
  };
  if (p_controller_c_air_2) {
    sub_257 = sub_226;
  } else {
    sub_257 = sub_258;
  };
  if (controller_air_failed_recovered) {
    v_1902 = sub_243;
  } else {
    v_1902 = sub_257;
  };
  if (controller_c_air_1) {
    v_1903 = v_1902;
  } else {
    v_1903 = sub_198;
  };
  if (controller_v_448) {
    v_1904 = v_1903;
  } else {
    v_1904 = sub_231;
  };
  if (controller_v_450) {
    v_1905 = v_1904;
  } else {
    v_1905 = sub_196;
  };
  if (controller_v_449) {
    sub_4 = v_1905;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  if (controller_c_pc) {
    v_1763 = sub_130;
  } else {
    v_1763 = sub_112;
  };
  if (controller_c_window) {
    sub_270 = v_1763;
  } else {
    sub_270 = sub_116;
  };
  if (controller_c_pc) {
    sub_271 = false;
  } else {
    sub_271 = sub_123;
  };
  if (controller_c_window) {
    v_1764 = sub_271;
  } else {
    v_1764 = sub_126;
  };
  if (controller_v_395) {
    v_1765 = v_1764;
  } else {
    v_1765 = sub_270;
  };
  if (controller_blind_failed_recovered) {
    sub_269 = sub_270;
  } else {
    sub_269 = v_1765;
  };
  if (p_controller_c_air_2) {
    sub_268 = sub_250;
  } else {
    sub_268 = sub_269;
  };
  if (controller_c_window) {
    v_1761 = sub_271;
  } else {
    v_1761 = sub_145;
  };
  if (controller_c_pc) {
    v_1760 = sub_174;
  } else {
    v_1760 = sub_141;
  };
  if (controller_c_window) {
    sub_274 = v_1760;
  } else {
    sub_274 = sub_143;
  };
  if (controller_v_395) {
    v_1762 = v_1761;
  } else {
    v_1762 = sub_274;
  };
  if (controller_blind_failed_recovered) {
    sub_273 = sub_274;
  } else {
    sub_273 = v_1762;
  };
  if (p_controller_c_air_2) {
    sub_272 = sub_254;
  } else {
    sub_272 = sub_273;
  };
  if (controller_c_door) {
    v_1766 = sub_272;
    sub_267 = sub_268;
  } else {
    v_1766 = sub_268;
    sub_267 = sub_272;
  };
  if (controller_ck_11_1) {
    sub_266 = v_1766;
  } else {
    sub_266 = sub_267;
  };
  if (controller_c_pc) {
    v_1757 = sub_94;
  } else {
    v_1757 = sub_159;
  };
  if (controller_c_window) {
    v_1758 = v_1757;
  } else {
    v_1758 = sub_161;
  };
  if (controller_c_pc) {
    v_1756 = sub_260;
  } else {
    v_1756 = sub_152;
  };
  if (controller_c_window) {
    sub_277 = v_1756;
  } else {
    sub_277 = sub_154;
  };
  if (controller_v_395) {
    v_1759 = v_1758;
  } else {
    v_1759 = sub_277;
  };
  if (controller_blind_failed_recovered) {
    sub_276 = sub_277;
  } else {
    sub_276 = v_1759;
  };
  if (p_controller_c_air_2) {
    sub_275 = sub_162;
  } else {
    sub_275 = sub_276;
  };
  if (controller_air_failed_recovered) {
    v_1767 = sub_266;
  } else {
    v_1767 = sub_275;
  };
  if (controller_c_air_1) {
    v_1768 = v_1767;
  } else {
    v_1768 = sub_169;
  };
  if (controller_v_448) {
    sub_265 = v_1768;
  } else {
    sub_265 = sub_7;
  };
  if (controller_c_pc) {
    v_1752 = false;
  } else {
    v_1752 = sub_194;
  };
  if (controller_c_window) {
    v_1753 = v_1752;
  } else {
    v_1753 = sub_96;
  };
  if (controller_c_pc) {
    v_1749 = false;
  } else {
    v_1749 = sub_188;
  };
  if (controller_c_window) {
    v_1750 = v_1749;
  } else {
    v_1750 = sub_145;
  };
  if (controller_c_pc) {
    v_1748 = sub_174;
  } else {
    v_1748 = sub_185;
  };
  if (controller_c_window) {
    sub_282 = v_1748;
  } else {
    sub_282 = sub_143;
  };
  if (controller_v_395) {
    v_1751 = v_1750;
  } else {
    v_1751 = sub_282;
  };
  if (controller_blind_failed_recovered) {
    sub_281 = sub_282;
  } else {
    sub_281 = v_1751;
  };
  if (controller_c_pc) {
    v_1747 = sub_89;
  } else {
    v_1747 = sub_191;
  };
  if (controller_c_window) {
    sub_283 = v_1747;
  } else {
    sub_283 = sub_93;
  };
  if (controller_v_395) {
    v_1754 = v_1753;
  } else {
    v_1754 = sub_283;
  };
  if (controller_blind_failed_recovered) {
    v_1755 = sub_283;
  } else {
    v_1755 = v_1754;
  };
  if (p_controller_c_air_2) {
    sub_280 = v_1755;
  } else {
    sub_280 = sub_281;
  };
  sub_279 = sub_280;
  sub_278 = sub_279;
  if (controller_v_450) {
    sub_264 = sub_278;
  } else {
    sub_264 = sub_265;
  };
  if (p_controller_c_air_2) {
    sub_286 = sub_98;
  } else {
    sub_286 = sub_273;
  };
  if (controller_air_failed_recovered) {
    v_1742 = sub_266;
  } else {
    v_1742 = sub_286;
  };
  if (controller_c_air_1) {
    sub_285 = sub_198;
  } else {
    sub_285 = v_1742;
  };
  if (controller_c_pc) {
    v_1738 = sub_57;
  } else {
    v_1738 = sub_216;
  };
  if (controller_c_window) {
    sub_289 = v_1738;
  } else {
    sub_289 = sub_75;
  };
  if (controller_c_pc) {
    sub_290 = false;
  } else {
    sub_290 = sub_220;
  };
  if (controller_c_window) {
    v_1739 = sub_290;
  } else {
    v_1739 = sub_83;
  };
  if (controller_v_395) {
    v_1740 = v_1739;
  } else {
    v_1740 = sub_289;
  };
  if (controller_blind_failed_recovered) {
    v_1741 = sub_289;
  } else {
    v_1741 = v_1740;
  };
  if (p_controller_c_air_2) {
    sub_288 = v_1741;
  } else {
    sub_288 = sub_55;
  };
  if (controller_c_window) {
    v_1736 = sub_290;
  } else {
    v_1736 = sub_96;
  };
  if (controller_c_pc) {
    v_1735 = sub_89;
  } else {
    v_1735 = sub_228;
  };
  if (controller_c_window) {
    sub_293 = v_1735;
  } else {
    sub_293 = sub_93;
  };
  if (controller_v_395) {
    v_1737 = v_1736;
  } else {
    v_1737 = sub_293;
  };
  if (controller_blind_failed_recovered) {
    sub_292 = sub_293;
  } else {
    sub_292 = v_1737;
  };
  if (p_controller_c_air_2) {
    sub_291 = sub_292;
  } else {
    sub_291 = sub_87;
  };
  if (controller_c_door) {
    v_1743 = sub_291;
    sub_287 = sub_288;
  } else {
    v_1743 = sub_288;
    sub_287 = sub_291;
  };
  if (controller_ck_11_1) {
    v_1744 = v_1743;
  } else {
    v_1744 = sub_287;
  };
  if (controller_air_failed_recovered) {
    v_1745 = v_1744;
  } else {
    v_1745 = sub_9;
  };
  if (controller_c_air_1) {
    v_1746 = v_1745;
  } else {
    v_1746 = sub_8;
  };
  if (controller_v_448) {
    sub_284 = v_1746;
  } else {
    sub_284 = sub_285;
  };
  if (p_controller_c_air_2) {
    sub_294 = sub_292;
  } else {
    sub_294 = sub_172;
  };
  if (controller_air_failed_recovered) {
    v_1769 = sub_243;
  } else {
    v_1769 = sub_294;
  };
  if (controller_c_air_1) {
    v_1770 = v_1769;
  } else {
    v_1770 = sub_198;
  };
  if (controller_v_448) {
    v_1771 = v_1770;
  } else {
    v_1771 = sub_231;
  };
  if (controller_v_450) {
    v_1772 = v_1771;
  } else {
    v_1772 = sub_284;
  };
  if (controller_v_449) {
    sub_263 = v_1772;
  } else {
    sub_263 = sub_264;
  };
  sub_262 = sub_263;
  if (controller_v_410) {
    v_1906 = sub_3;
    sub_2 = sub_262;
  } else {
    v_1906 = sub_262;
    sub_2 = sub_3;
  };
  if (controller_v_411) {
    v_1907 = v_1906;
  } else {
    v_1907 = sub_2;
  };
  if (controller_v_395) {
    v_1721 = sub_64;
  } else {
    v_1721 = sub_13;
  };
  if (controller_blind_failed_recovered) {
    sub_301 = sub_13;
  } else {
    sub_301 = v_1721;
  };
  if (controller_change_shift) {
    v_1718 = sub_42;
    sub_303 = sub_70;
  } else {
    v_1718 = sub_70;
    sub_303 = sub_42;
  };
  if (controller_ck_1) {
    v_1719 = v_1718;
  } else {
    v_1719 = sub_303;
  };
  if (controller_c_pc) {
    v_1720 = sub_14;
  } else {
    v_1720 = v_1719;
  };
  if (controller_c_window) {
    sub_302 = v_1720;
  } else {
    sub_302 = sub_83;
  };
  if (controller_v_395) {
    v_1722 = sub_79;
  } else {
    v_1722 = sub_302;
  };
  if (controller_blind_failed_recovered) {
    v_1723 = sub_302;
  } else {
    v_1723 = v_1722;
  };
  if (p_controller_c_air_2) {
    sub_300 = v_1723;
  } else {
    sub_300 = sub_301;
  };
  sub_305 = sub_95;
  sub_306 = sub_101;
  if (p_controller_c_air_2) {
    sub_304 = sub_306;
  } else {
    sub_304 = sub_305;
  };
  if (controller_c_door) {
    v_1724 = sub_304;
    sub_299 = sub_300;
  } else {
    v_1724 = sub_300;
    sub_299 = sub_304;
  };
  if (controller_ck_11_1) {
    v_1725 = v_1724;
  } else {
    v_1725 = sub_299;
  };
  if (controller_air_failed_recovered) {
    v_1726 = v_1725;
  } else {
    v_1726 = sub_9;
  };
  if (controller_c_air_1) {
    sub_298 = sub_8;
  } else {
    sub_298 = v_1726;
  };
  if (controller_v_395) {
    v_1715 = sub_133;
  } else {
    v_1715 = sub_31;
  };
  if (controller_blind_failed_recovered) {
    v_1716 = sub_31;
  } else {
    v_1716 = v_1715;
  };
  if (controller_change_shift) {
    v_1711 = sub_42;
    v_1709 = false;
    sub_312 = sub_108;
  } else {
    v_1711 = sub_114;
    v_1709 = sub_108;
    sub_312 = false;
  };
  if (controller_ck_1) {
    v_1710 = v_1709;
  } else {
    v_1710 = sub_312;
  };
  if (controller_change_shift) {
    sub_313 = sub_114;
  } else {
    sub_313 = sub_42;
  };
  if (controller_ck_1) {
    v_1712 = v_1711;
  } else {
    v_1712 = sub_313;
  };
  if (controller_c_pc) {
    v_1713 = v_1710;
  } else {
    v_1713 = v_1712;
  };
  if (controller_c_window) {
    sub_311 = v_1713;
  } else {
    sub_311 = sub_126;
  };
  if (controller_v_395) {
    v_1714 = sub_118;
  } else {
    v_1714 = sub_311;
  };
  if (controller_blind_failed_recovered) {
    sub_310 = sub_311;
  } else {
    sub_310 = v_1714;
  };
  if (p_controller_c_air_2) {
    sub_309 = v_1716;
  } else {
    sub_309 = sub_310;
  };
  sub_315 = sub_144;
  if (p_controller_c_air_2) {
    sub_314 = sub_148;
  } else {
    sub_314 = sub_315;
  };
  if (controller_c_door) {
    v_1717 = sub_314;
    sub_308 = sub_309;
  } else {
    v_1717 = sub_309;
    sub_308 = sub_314;
  };
  if (controller_ck_11_1) {
    sub_307 = v_1717;
  } else {
    sub_307 = sub_308;
  };
  sub_317 = sub_155;
  if (controller_c_pc) {
    v_1708 = sub_156;
  } else {
    v_1708 = sub_164;
  };
  if (controller_c_window) {
    sub_318 = v_1708;
  } else {
    sub_318 = sub_168;
  };
  if (p_controller_c_air_2) {
    sub_316 = sub_318;
  } else {
    sub_316 = sub_317;
  };
  if (controller_air_failed_recovered) {
    v_1727 = sub_307;
  } else {
    v_1727 = sub_316;
  };
  sub_321 = sub_176;
  if (p_controller_c_air_2) {
    sub_320 = sub_306;
  } else {
    sub_320 = sub_321;
  };
  sub_319 = sub_320;
  if (controller_c_air_1) {
    v_1728 = v_1727;
  } else {
    v_1728 = sub_319;
  };
  if (controller_v_448) {
    sub_297 = v_1728;
  } else {
    sub_297 = sub_298;
  };
  sub_325 = sub_187;
  if (p_controller_c_air_2) {
    sub_324 = sub_193;
  } else {
    sub_324 = sub_325;
  };
  sub_323 = sub_324;
  sub_322 = sub_323;
  if (controller_v_450) {
    sub_296 = sub_322;
  } else {
    sub_296 = sub_297;
  };
  if (controller_c_pc) {
    v_1702 = sub_174;
  } else {
    v_1702 = sub_29;
  };
  if (controller_c_window) {
    sub_332 = v_1702;
  } else {
    sub_332 = sub_203;
  };
  sub_331 = sub_332;
  if (controller_c_pc) {
    v_1701 = sub_89;
  } else {
    v_1701 = sub_47;
  };
  if (controller_c_window) {
    sub_333 = v_1701;
  } else {
    sub_333 = sub_168;
  };
  if (p_controller_c_air_2) {
    sub_330 = sub_333;
  } else {
    sub_330 = sub_331;
  };
  sub_329 = sub_330;
  sub_328 = sub_329;
  if (p_controller_c_air_2) {
    sub_334 = sub_207;
  } else {
    sub_334 = sub_315;
  };
  if (controller_air_failed_recovered) {
    v_1703 = sub_307;
  } else {
    v_1703 = sub_334;
  };
  if (controller_c_air_1) {
    sub_327 = sub_328;
  } else {
    sub_327 = v_1703;
  };
  if (controller_v_395) {
    v_1698 = sub_211;
  } else {
    v_1698 = sub_13;
  };
  if (controller_blind_failed_recovered) {
    sub_337 = sub_13;
  } else {
    sub_337 = v_1698;
  };
  if (controller_change_shift) {
    v_1695 = sub_24;
    v_1693 = false;
    sub_339 = sub_77;
  } else {
    v_1695 = sub_70;
    v_1693 = sub_77;
    sub_339 = false;
  };
  if (controller_ck_1) {
    v_1694 = v_1693;
  } else {
    v_1694 = sub_339;
  };
  if (controller_change_shift) {
    sub_340 = sub_70;
  } else {
    sub_340 = sub_24;
  };
  if (controller_ck_1) {
    v_1696 = v_1695;
  } else {
    v_1696 = sub_340;
  };
  if (controller_c_pc) {
    v_1697 = v_1694;
  } else {
    v_1697 = v_1696;
  };
  if (controller_c_window) {
    sub_338 = v_1697;
  } else {
    sub_338 = sub_83;
  };
  if (controller_v_395) {
    v_1699 = sub_218;
  } else {
    v_1699 = sub_338;
  };
  if (controller_blind_failed_recovered) {
    v_1700 = sub_338;
  } else {
    v_1700 = v_1699;
  };
  if (p_controller_c_air_2) {
    sub_336 = v_1700;
  } else {
    sub_336 = sub_337;
  };
  sub_342 = sub_225;
  sub_343 = sub_230;
  if (p_controller_c_air_2) {
    sub_341 = sub_343;
  } else {
    sub_341 = sub_342;
  };
  if (controller_c_door) {
    v_1704 = sub_341;
    sub_335 = sub_336;
  } else {
    v_1704 = sub_336;
    sub_335 = sub_341;
  };
  if (controller_ck_11_1) {
    v_1705 = v_1704;
  } else {
    v_1705 = sub_335;
  };
  if (controller_air_failed_recovered) {
    v_1706 = v_1705;
  } else {
    v_1706 = sub_9;
  };
  if (controller_c_air_1) {
    v_1707 = v_1706;
  } else {
    v_1707 = sub_8;
  };
  if (controller_v_448) {
    sub_326 = v_1707;
  } else {
    sub_326 = sub_327;
  };
  if (controller_c_pc) {
    sub_348 = sub_89;
  } else {
    sub_348 = sub_238;
  };
  if (controller_c_window) {
    v_1687 = sub_348;
    v_1685 = sub_348;
  } else {
    v_1687 = sub_240;
    v_1685 = sub_28;
  };
  if (controller_v_395) {
    v_1686 = v_1685;
  } else {
    v_1686 = sub_235;
  };
  if (controller_blind_failed_recovered) {
    sub_347 = sub_235;
  } else {
    sub_347 = v_1686;
  };
  if (controller_c_pc) {
    v_1684 = sub_57;
  } else {
    v_1684 = sub_238;
  };
  if (controller_c_window) {
    sub_349 = v_1684;
  } else {
    sub_349 = sub_240;
  };
  if (controller_v_395) {
    v_1688 = v_1687;
  } else {
    v_1688 = sub_349;
  };
  if (controller_blind_failed_recovered) {
    v_1689 = sub_349;
  } else {
    v_1689 = v_1688;
  };
  if (p_controller_c_air_2) {
    sub_346 = v_1689;
  } else {
    sub_346 = sub_347;
  };
  if (controller_c_window) {
    sub_351 = sub_348;
  } else {
    sub_351 = sub_168;
  };
  sub_350 = sub_351;
  if (controller_c_door) {
    v_1690 = sub_350;
    sub_345 = sub_346;
  } else {
    v_1690 = sub_346;
    sub_345 = sub_350;
  };
  if (controller_ck_11_1) {
    v_1691 = v_1690;
  } else {
    v_1691 = sub_345;
  };
  if (controller_air_failed_recovered) {
    v_1692 = v_1691;
  } else {
    v_1692 = sub_9;
  };
  if (controller_c_air_1) {
    sub_344 = v_1692;
  } else {
    sub_344 = sub_8;
  };
  if (controller_v_395) {
    v_1682 = sub_251;
  } else {
    v_1682 = sub_31;
  };
  if (controller_blind_failed_recovered) {
    v_1683 = sub_31;
  } else {
    v_1683 = v_1682;
  };
  if (controller_change_shift) {
    v = sub_24;
    sub_356 = sub_114;
  } else {
    v = sub_114;
    sub_356 = sub_24;
  };
  if (controller_ck_1) {
    v_1679 = v;
  } else {
    v_1679 = sub_356;
  };
  if (controller_c_pc) {
    v_1680 = sub_32;
  } else {
    v_1680 = v_1679;
  };
  if (controller_c_window) {
    sub_355 = v_1680;
  } else {
    sub_355 = sub_126;
  };
  if (controller_v_395) {
    v_1681 = sub_249;
  } else {
    v_1681 = sub_355;
  };
  if (controller_blind_failed_recovered) {
    sub_354 = sub_355;
  } else {
    sub_354 = v_1681;
  };
  if (p_controller_c_air_2) {
    sub_353 = v_1683;
    sub_357 = sub_256;
  } else {
    sub_353 = sub_354;
    sub_357 = sub_321;
  };
  if (controller_c_door) {
    v_1729 = sub_357;
    sub_352 = sub_353;
  } else {
    v_1729 = sub_353;
    sub_352 = sub_357;
  };
  if (controller_ck_11_1) {
    v_1730 = v_1729;
  } else {
    v_1730 = sub_352;
  };
  sub_359 = sub_261;
  if (p_controller_c_air_2) {
    sub_358 = sub_343;
  } else {
    sub_358 = sub_359;
  };
  if (controller_air_failed_recovered) {
    v_1731 = v_1730;
  } else {
    v_1731 = sub_358;
  };
  if (controller_c_air_1) {
    v_1732 = v_1731;
  } else {
    v_1732 = sub_328;
  };
  if (controller_v_448) {
    v_1733 = v_1732;
  } else {
    v_1733 = sub_344;
  };
  if (controller_v_450) {
    v_1734 = v_1733;
  } else {
    v_1734 = sub_326;
  };
  if (controller_v_449) {
    sub_295 = v_1734;
  } else {
    sub_295 = sub_296;
  };
  if (controller_v_411) {
    v_1908 = sub_295;
  } else {
    v_1908 = sub_262;
  };
  if (controller_light_failed_recovered) {
    sub_1 = v_1907;
  } else {
    sub_1 = v_1908;
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
  int controller_pnr_3, int controller_v_450, int controller_v_449,
  int controller_v_448, int controller_pnr_2, int controller_v_411,
  int controller_v_410, int controller_pnr_1, int controller_v_395,
  int controller_v_394, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_1_out* _out) {
  
  int v_2102;
  int v_2101;
  int v_2100;
  int v_2099;
  int v_2098;
  int v_2097;
  int v_2096;
  int v_2095;
  int v_2094;
  int v_2093;
  int v_2092;
  int v_2091;
  int v_2090;
  int v_2089;
  int v_2088;
  int v_2087;
  int v_2086;
  int v_2085;
  int v_2084;
  int v_2083;
  int v_2082;
  int v_2081;
  int v_2080;
  int v_2079;
  int v_2078;
  int v_2077;
  int v_2076;
  int v_2075;
  int v_2074;
  int v_2073;
  int v_2072;
  int v_2071;
  int v_2070;
  int v_2069;
  int v_2068;
  int v_2067;
  int v_2066;
  int v_2065;
  int v_2064;
  int v_2063;
  int v_2062;
  int v_2061;
  int v_2060;
  int v_2059;
  int v_2058;
  int v_2057;
  int v_2056;
  int v_2055;
  int v_2054;
  int v_2053;
  int v_2052;
  int v_2051;
  int v_2050;
  int v_2049;
  int v_2048;
  int v_2047;
  int v_2046;
  int v_2045;
  int v_2044;
  int v_2043;
  int v_2042;
  int v_2041;
  int v_2040;
  int v_2039;
  int v_2038;
  int v_2037;
  int v_2036;
  int v_2035;
  int v_2034;
  int v_2033;
  int v_2032;
  int v_2031;
  int v_2030;
  int v_2029;
  int v_2028;
  int v_2027;
  int v_2026;
  int v_2025;
  int v_2024;
  int v_2023;
  int v_2022;
  int v_2021;
  int v_2020;
  int v_2019;
  int v_2018;
  int v_2017;
  int v_2016;
  int v_2015;
  int v_2014;
  int v_2013;
  int v_2012;
  int v_2011;
  int v_2010;
  int v_2009;
  int v_2008;
  int v_2007;
  int v_2006;
  int v_2005;
  int v_2004;
  int v_2003;
  int v_2002;
  int v_2001;
  int v_2000;
  int v_1999;
  int v_1998;
  int v_1997;
  int v_1996;
  int v_1995;
  int v_1994;
  int v_1993;
  int v_1992;
  int v_1991;
  int v_1990;
  int v_1989;
  int v_1988;
  int v_1987;
  int v_1986;
  int v_1985;
  int v_1984;
  int v_1983;
  int v_1982;
  int v_1981;
  int v_1980;
  int v_1979;
  int v_1978;
  int v_1977;
  int v_1976;
  int v_1975;
  int v_1974;
  int v_1973;
  int v_1972;
  int v_1971;
  int v_1970;
  int v_1969;
  int v_1968;
  int v_1967;
  int v_1966;
  int v_1965;
  int v_1964;
  int v_1963;
  int v_1962;
  int v_1961;
  int v_1960;
  int v_1959;
  int v_1958;
  int v_1957;
  int v_1956;
  int v_1955;
  int v_1954;
  int v_1953;
  int v_1952;
  int v_1951;
  int v_1950;
  int v_1949;
  int v_1948;
  int v_1947;
  int v_1946;
  int v_1945;
  int v_1944;
  int v_1943;
  int v_1942;
  int v_1941;
  int v_1940;
  int v_1939;
  int v_1938;
  int v_1937;
  int v_1936;
  int v_1935;
  int v_1934;
  int v_1933;
  int v_1932;
  int v_1931;
  int v_1930;
  int v_1929;
  int v_1928;
  int v_1927;
  int v_1926;
  int v_1925;
  int v_1924;
  int v_1923;
  int v_1922;
  int v_1921;
  int v_1920;
  int v_1919;
  int v_1918;
  int v_1917;
  int v_1916;
  int v_1915;
  int v_1914;
  int v_1913;
  int v_1912;
  int v_1911;
  int v_1910;
  int v_1909;
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
    v_2085 = sub_18;
    sub_13 = sub_14;
  } else {
    v_2085 = sub_14;
    sub_13 = sub_18;
  };
  if (controller_ck_15_1) {
    sub_12 = v_2085;
  } else {
    sub_12 = sub_13;
  };
  sub_22 = (controller_ck_17_1&&false);
  v_2083 = !(controller_ck_17_1);
  sub_23 = (v_2083&&false);
  if (controller_cleaner) {
    sub_21 = sub_22;
  } else {
    sub_21 = sub_23;
  };
  if (controller_worker) {
    v_2084 = sub_21;
    sub_20 = false;
  } else {
    v_2084 = false;
    sub_20 = sub_21;
  };
  if (controller_ck_15_1) {
    sub_19 = v_2084;
  } else {
    sub_19 = sub_20;
  };
  if (controller_change_shift) {
    v_2086 = sub_19;
    sub_11 = sub_12;
  } else {
    v_2086 = sub_12;
    sub_11 = sub_19;
  };
  if (controller_ck_1) {
    v_2087 = v_2086;
  } else {
    v_2087 = sub_11;
  };
  sub_25 = sub_18;
  if (controller_cleaner) {
    sub_28 = sub_17;
  } else {
    sub_28 = sub_15;
  };
  if (controller_worker) {
    v_2082 = sub_21;
    sub_27 = sub_28;
  } else {
    v_2082 = sub_28;
    sub_27 = sub_21;
  };
  if (controller_ck_15_1) {
    sub_26 = v_2082;
  } else {
    sub_26 = sub_27;
  };
  if (controller_change_shift) {
    v_2088 = sub_26;
    sub_24 = sub_25;
  } else {
    v_2088 = sub_25;
    sub_24 = sub_26;
  };
  if (controller_ck_1) {
    v_2089 = v_2088;
  } else {
    v_2089 = sub_24;
  };
  if (controller_c_pc) {
    v_2090 = v_2087;
  } else {
    v_2090 = v_2089;
  };
  sub_30 = sub_12;
  sub_29 = sub_30;
  if (controller_c_window) {
    sub_10 = v_2090;
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
    v_2080 = sub_34;
    sub_33 = sub_26;
  } else {
    v_2080 = sub_26;
    sub_33 = sub_34;
  };
  if (controller_ck_1) {
    v_2081 = v_2080;
  } else {
    v_2081 = sub_33;
  };
  if (controller_c_pc) {
    sub_32 = false;
  } else {
    sub_32 = v_2081;
  };
  if (controller_c_window) {
    sub_31 = sub_32;
  } else {
    sub_31 = sub_29;
  };
  if (controller_v_395) {
    v_2091 = sub_31;
  } else {
    v_2091 = sub_10;
  };
  if (controller_blind_failed_recovered) {
    sub_9 = sub_10;
  } else {
    sub_9 = v_2091;
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
    v_2078 = sub_39;
  } else {
    v_2078 = sub_26;
  };
  sub_42 = sub_19;
  if (controller_c_window) {
    sub_38 = v_2078;
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
  if (controller_v_395) {
    v_2079 = sub_43;
  } else {
    v_2079 = sub_38;
  };
  if (controller_blind_failed_recovered) {
    sub_37 = sub_38;
  } else {
    sub_37 = v_2079;
  };
  if (controller_c_door) {
    v_2092 = sub_37;
    sub_8 = sub_9;
  } else {
    v_2092 = sub_9;
    sub_8 = sub_37;
  };
  if (controller_ck_11_1) {
    v_2093 = v_2092;
  } else {
    v_2093 = sub_8;
  };
  if (controller_change_shift) {
    v_2072 = sub_34;
    v_2070 = false;
    sub_49 = sub_12;
  } else {
    v_2072 = sub_25;
    v_2070 = sub_12;
    sub_49 = false;
  };
  if (controller_ck_1) {
    v_2071 = v_2070;
  } else {
    v_2071 = sub_49;
  };
  if (controller_change_shift) {
    sub_50 = sub_25;
  } else {
    sub_50 = sub_34;
  };
  if (controller_ck_1) {
    v_2073 = v_2072;
  } else {
    v_2073 = sub_50;
  };
  if (controller_c_pc) {
    v_2074 = v_2071;
  } else {
    v_2074 = v_2073;
  };
  if (controller_c_window) {
    sub_48 = v_2074;
  } else {
    sub_48 = sub_29;
  };
  if (controller_c_pc) {
    sub_51 = false;
  } else {
    sub_51 = sub_34;
  };
  if (controller_c_window) {
    v_2075 = sub_51;
  } else {
    v_2075 = sub_29;
  };
  if (controller_v_395) {
    v_2076 = v_2075;
  } else {
    v_2076 = sub_48;
  };
  if (controller_blind_failed_recovered) {
    sub_47 = sub_48;
  } else {
    sub_47 = v_2076;
  };
  if (controller_c_window) {
    sub_53 = sub_51;
  } else {
    sub_53 = false;
  };
  sub_52 = sub_53;
  if (controller_c_door) {
    v_2077 = sub_52;
    sub_46 = sub_47;
  } else {
    v_2077 = sub_47;
    sub_46 = sub_52;
  };
  if (controller_ck_11_1) {
    sub_45 = v_2077;
  } else {
    sub_45 = sub_46;
  };
  if (controller_air_failed_recovered) {
    sub_7 = v_2093;
  } else {
    sub_7 = sub_45;
  };
  sub_61 = (controller_ck_17_1||false);
  v_2062 = !(controller_ck_17_1);
  sub_62 = (v_2062||false);
  if (controller_cleaner) {
    sub_60 = sub_61;
  } else {
    sub_60 = sub_62;
  };
  sub_63 = true;
  if (controller_worker) {
    v_2063 = sub_63;
    sub_59 = sub_60;
  } else {
    v_2063 = sub_60;
    sub_59 = sub_63;
  };
  if (controller_ck_15_1) {
    sub_58 = v_2063;
    sub_64 = sub_35;
  } else {
    sub_58 = sub_59;
    sub_64 = sub_36;
  };
  if (controller_change_shift) {
    v_2064 = sub_64;
    sub_57 = sub_58;
  } else {
    v_2064 = sub_58;
    sub_57 = sub_64;
  };
  if (controller_ck_1) {
    v_2065 = v_2064;
  } else {
    v_2065 = sub_57;
  };
  sub_68 = (controller_ck_17_1||sub_16);
  v_2061 = !(controller_ck_17_1);
  sub_69 = (v_2061||sub_16);
  if (controller_cleaner) {
    sub_67 = sub_68;
  } else {
    sub_67 = sub_69;
  };
  sub_66 = sub_67;
  sub_70 = sub_28;
  if (controller_change_shift) {
    v_2066 = sub_70;
    sub_65 = sub_66;
  } else {
    v_2066 = sub_66;
    sub_65 = sub_70;
  };
  if (controller_ck_1) {
    v_2067 = v_2066;
  } else {
    v_2067 = sub_65;
  };
  if (controller_c_pc) {
    v_2068 = v_2065;
  } else {
    v_2068 = v_2067;
  };
  if (controller_worker) {
    v_2060 = sub_67;
    sub_73 = sub_60;
  } else {
    v_2060 = sub_60;
    sub_73 = sub_67;
  };
  if (controller_ck_15_1) {
    sub_72 = v_2060;
  } else {
    sub_72 = sub_73;
  };
  sub_71 = sub_72;
  if (controller_c_window) {
    sub_56 = v_2068;
  } else {
    sub_56 = sub_71;
  };
  if (controller_cleaner) {
    sub_80 = sub_62;
  } else {
    sub_80 = sub_61;
  };
  if (controller_worker) {
    v_2059 = sub_80;
    sub_79 = false;
  } else {
    v_2059 = false;
    sub_79 = sub_80;
  };
  if (controller_ck_15_1) {
    sub_78 = v_2059;
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
    v_2058 = sub_34;
    sub_83 = sub_70;
  } else {
    v_2058 = sub_70;
    sub_83 = sub_34;
  };
  if (controller_ck_1) {
    sub_82 = v_2058;
  } else {
    sub_82 = sub_83;
  };
  if (controller_c_pc) {
    sub_75 = sub_76;
  } else {
    sub_75 = sub_82;
  };
  if (controller_change_shift) {
    v_2057 = sub_58;
    sub_86 = sub_72;
  } else {
    v_2057 = sub_72;
    sub_86 = sub_58;
  };
  if (controller_ck_1) {
    sub_85 = v_2057;
  } else {
    sub_85 = sub_86;
  };
  sub_84 = sub_85;
  if (controller_c_window) {
    sub_74 = sub_75;
  } else {
    sub_74 = sub_84;
  };
  if (controller_v_395) {
    v_2069 = sub_74;
  } else {
    v_2069 = sub_56;
  };
  if (controller_blind_failed_recovered) {
    sub_55 = sub_56;
  } else {
    sub_55 = v_2069;
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
    v_2055 = sub_89;
  } else {
    v_2055 = sub_92;
  };
  sub_94 = sub_64;
  sub_93 = sub_94;
  if (controller_c_window) {
    sub_88 = v_2055;
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
  if (controller_v_395) {
    v_2056 = sub_95;
  } else {
    v_2056 = sub_88;
  };
  if (controller_blind_failed_recovered) {
    sub_87 = sub_88;
  } else {
    sub_87 = v_2056;
  };
  if (controller_c_door) {
    v_2094 = sub_87;
    sub_54 = sub_55;
  } else {
    v_2094 = sub_55;
    sub_54 = sub_87;
  };
  if (controller_ck_11_1) {
    v_2095 = v_2094;
  } else {
    v_2095 = sub_54;
  };
  sub_107 = controller_ck_17_1;
  sub_108 = !(controller_ck_17_1);
  if (controller_cleaner) {
    sub_106 = sub_107;
  } else {
    sub_106 = sub_108;
  };
  if (controller_worker) {
    v_2050 = sub_67;
    sub_105 = sub_106;
  } else {
    v_2050 = sub_106;
    sub_105 = sub_67;
  };
  if (controller_ck_15_1) {
    sub_104 = v_2050;
  } else {
    sub_104 = sub_105;
  };
  if (controller_change_shift) {
    v_2051 = sub_104;
    sub_103 = sub_66;
  } else {
    v_2051 = sub_66;
    sub_103 = sub_104;
  };
  if (controller_ck_1) {
    v_2052 = v_2051;
  } else {
    v_2052 = sub_103;
  };
  if (controller_c_pc) {
    v_2053 = sub_89;
    sub_109 = sub_94;
  } else {
    v_2053 = v_2052;
    sub_109 = sub_71;
  };
  if (controller_c_window) {
    sub_102 = v_2053;
  } else {
    sub_102 = sub_109;
  };
  sub_111 = sub_78;
  if (controller_worker) {
    v_2046 = sub_63;
    sub_114 = sub_106;
  } else {
    v_2046 = sub_106;
    sub_114 = sub_63;
  };
  if (controller_ck_15_1) {
    sub_113 = v_2046;
  } else {
    sub_113 = sub_114;
  };
  if (controller_change_shift) {
    v_2047 = sub_113;
    sub_112 = sub_66;
  } else {
    v_2047 = sub_66;
    sub_112 = sub_113;
  };
  if (controller_ck_1) {
    v_2048 = v_2047;
  } else {
    v_2048 = sub_112;
  };
  if (controller_c_pc) {
    v_2049 = sub_111;
  } else {
    v_2049 = v_2048;
  };
  if (controller_ck_1) {
    sub_116 = sub_90;
  } else {
    sub_116 = sub_91;
  };
  if (controller_c_pc) {
    sub_115 = sub_116;
  } else {
    sub_115 = sub_85;
  };
  if (controller_c_window) {
    sub_110 = v_2049;
  } else {
    sub_110 = sub_115;
  };
  if (controller_v_395) {
    v_2054 = sub_110;
  } else {
    v_2054 = sub_102;
  };
  if (controller_blind_failed_recovered) {
    sub_101 = sub_102;
  } else {
    sub_101 = v_2054;
  };
  sub_100 = sub_101;
  if (controller_air_failed_recovered) {
    v_2096 = v_2095;
  } else {
    v_2096 = sub_100;
  };
  if (controller_v_448) {
    sub_6 = v_2096;
  } else {
    sub_6 = sub_7;
  };
  if (controller_change_shift) {
    v_2043 = sub_64;
    sub_121 = sub_70;
  } else {
    v_2043 = sub_70;
    sub_121 = sub_64;
  };
  if (controller_ck_1) {
    sub_120 = v_2043;
  } else {
    sub_120 = sub_121;
  };
  if (controller_c_pc) {
    v_2044 = sub_94;
  } else {
    v_2044 = sub_120;
  };
  if (controller_c_window) {
    sub_119 = v_2044;
  } else {
    sub_119 = sub_93;
  };
  if (controller_change_shift) {
    v_2041 = false;
    sub_124 = sub_70;
  } else {
    v_2041 = sub_70;
    sub_124 = false;
  };
  if (controller_ck_1) {
    sub_123 = v_2041;
  } else {
    sub_123 = sub_124;
  };
  if (controller_c_pc) {
    v_2042 = sub_97;
  } else {
    v_2042 = sub_123;
  };
  if (controller_c_window) {
    sub_122 = v_2042;
  } else {
    sub_122 = sub_96;
  };
  if (controller_v_395) {
    v_2045 = sub_122;
  } else {
    v_2045 = sub_119;
  };
  if (controller_blind_failed_recovered) {
    sub_118 = sub_119;
  } else {
    sub_118 = v_2045;
  };
  sub_117 = sub_118;
  if (controller_v_450) {
    sub_5 = sub_117;
  } else {
    sub_5 = sub_6;
  };
  if (controller_cleaner) {
    sub_133 = sub_23;
  } else {
    sub_133 = sub_22;
  };
  v_2027 = !(controller_ck_17_1);
  sub_135 = (v_2027&&sub_16);
  sub_136 = (controller_ck_17_1&&sub_16);
  if (controller_cleaner) {
    sub_134 = sub_135;
  } else {
    sub_134 = sub_136;
  };
  if (controller_worker) {
    v_2028 = sub_134;
    sub_132 = sub_133;
  } else {
    v_2028 = sub_133;
    sub_132 = sub_134;
  };
  if (controller_ck_15_1) {
    sub_131 = v_2028;
  } else {
    sub_131 = sub_132;
  };
  if (controller_change_shift) {
    v_2029 = sub_64;
    sub_130 = sub_131;
  } else {
    v_2029 = sub_131;
    sub_130 = sub_64;
  };
  if (controller_ck_1) {
    v_2030 = v_2029;
  } else {
    v_2030 = sub_130;
  };
  if (controller_cleaner) {
    sub_140 = sub_136;
  } else {
    sub_140 = sub_135;
  };
  if (controller_worker) {
    v_2026 = sub_18;
    sub_139 = sub_140;
  } else {
    v_2026 = sub_140;
    sub_139 = sub_18;
  };
  if (controller_ck_15_1) {
    sub_138 = v_2026;
  } else {
    sub_138 = sub_139;
  };
  if (controller_change_shift) {
    v_2031 = sub_104;
    sub_137 = sub_138;
  } else {
    v_2031 = sub_138;
    sub_137 = sub_104;
  };
  if (controller_ck_1) {
    v_2032 = v_2031;
  } else {
    v_2032 = sub_137;
  };
  if (controller_c_pc) {
    v_2033 = v_2030;
  } else {
    v_2033 = v_2032;
  };
  sub_142 = sub_131;
  if (controller_c_pc) {
    sub_141 = sub_142;
  } else {
    sub_141 = sub_30;
  };
  if (controller_c_window) {
    sub_129 = v_2033;
  } else {
    sub_129 = sub_141;
  };
  if (controller_change_shift) {
    v_2025 = sub_113;
    sub_145 = sub_104;
  } else {
    v_2025 = sub_104;
    sub_145 = sub_113;
  };
  if (controller_ck_1) {
    sub_144 = v_2025;
  } else {
    sub_144 = sub_145;
  };
  if (controller_c_pc) {
    sub_143 = sub_116;
  } else {
    sub_143 = sub_144;
  };
  if (controller_c_window) {
    v_2034 = sub_143;
  } else {
    v_2034 = sub_141;
  };
  if (controller_v_395) {
    v_2035 = v_2034;
  } else {
    v_2035 = sub_129;
  };
  if (controller_blind_failed_recovered) {
    sub_128 = sub_129;
  } else {
    sub_128 = v_2035;
  };
  if (controller_c_window) {
    v_2023 = sub_143;
  } else {
    v_2023 = sub_115;
  };
  sub_148 = sub_104;
  if (controller_c_pc) {
    v_2022 = sub_94;
  } else {
    v_2022 = sub_148;
  };
  if (controller_c_window) {
    sub_147 = v_2022;
  } else {
    sub_147 = sub_109;
  };
  if (controller_v_395) {
    v_2024 = v_2023;
  } else {
    v_2024 = sub_147;
  };
  if (controller_blind_failed_recovered) {
    sub_146 = sub_147;
  } else {
    sub_146 = v_2024;
  };
  if (controller_c_door) {
    v_2036 = sub_146;
    sub_127 = sub_128;
  } else {
    v_2036 = sub_128;
    sub_127 = sub_146;
  };
  if (controller_ck_11_1) {
    v_2037 = v_2036;
  } else {
    v_2037 = sub_127;
  };
  if (controller_air_failed_recovered) {
    sub_126 = v_2037;
  } else {
    sub_126 = sub_146;
  };
  if (controller_change_shift) {
    v_2017 = sub_78;
    sub_153 = sub_12;
  } else {
    v_2017 = sub_12;
    sub_153 = sub_78;
  };
  if (controller_ck_1) {
    sub_152 = v_2017;
  } else {
    sub_152 = sub_153;
  };
  if (controller_worker) {
    v_2016 = sub_80;
    sub_156 = sub_28;
  } else {
    v_2016 = sub_28;
    sub_156 = sub_80;
  };
  if (controller_ck_15_1) {
    sub_155 = v_2016;
  } else {
    sub_155 = sub_156;
  };
  if (controller_change_shift) {
    v_2018 = sub_155;
    sub_154 = sub_25;
  } else {
    v_2018 = sub_25;
    sub_154 = sub_155;
  };
  if (controller_ck_1) {
    v_2019 = v_2018;
  } else {
    v_2019 = sub_154;
  };
  if (controller_c_pc) {
    v_2020 = sub_152;
  } else {
    v_2020 = v_2019;
  };
  if (controller_c_window) {
    sub_151 = v_2020;
  } else {
    sub_151 = sub_29;
  };
  if (controller_change_shift) {
    v_2015 = sub_34;
    sub_160 = sub_155;
  } else {
    v_2015 = sub_155;
    sub_160 = sub_34;
  };
  if (controller_ck_1) {
    sub_159 = v_2015;
  } else {
    sub_159 = sub_160;
  };
  if (controller_c_pc) {
    sub_158 = sub_76;
  } else {
    sub_158 = sub_159;
  };
  if (controller_c_window) {
    sub_157 = sub_158;
  } else {
    sub_157 = sub_29;
  };
  if (controller_v_395) {
    v_2021 = sub_157;
  } else {
    v_2021 = sub_151;
  };
  if (controller_blind_failed_recovered) {
    sub_150 = sub_151;
  } else {
    sub_150 = v_2021;
  };
  sub_163 = sub_155;
  if (controller_c_pc) {
    v_2013 = sub_111;
  } else {
    v_2013 = sub_163;
  };
  sub_164 = sub_111;
  if (controller_c_window) {
    sub_162 = v_2013;
  } else {
    sub_162 = sub_164;
  };
  sub_166 = sub_76;
  if (controller_c_window) {
    sub_165 = sub_158;
  } else {
    sub_165 = sub_166;
  };
  if (controller_v_395) {
    v_2014 = sub_165;
  } else {
    v_2014 = sub_162;
  };
  if (controller_blind_failed_recovered) {
    sub_161 = sub_162;
  } else {
    sub_161 = v_2014;
  };
  if (controller_c_door) {
    v_2038 = sub_161;
    sub_149 = sub_150;
  } else {
    v_2038 = sub_150;
    sub_149 = sub_161;
  };
  if (controller_ck_11_1) {
    v_2039 = v_2038;
  } else {
    v_2039 = sub_149;
  };
  if (controller_air_failed_recovered) {
    v_2040 = v_2039;
  } else {
    v_2040 = sub_45;
  };
  if (controller_v_448) {
    sub_125 = v_2040;
  } else {
    sub_125 = sub_126;
  };
  if (controller_worker) {
    v_2005 = sub_63;
    sub_173 = sub_67;
  } else {
    v_2005 = sub_67;
    sub_173 = sub_63;
  };
  if (controller_ck_15_1) {
    sub_172 = v_2005;
  } else {
    sub_172 = sub_173;
  };
  if (controller_change_shift) {
    v_2006 = sub_172;
    sub_171 = sub_25;
  } else {
    v_2006 = sub_25;
    sub_171 = sub_172;
  };
  if (controller_ck_1) {
    v_2007 = v_2006;
  } else {
    v_2007 = sub_171;
  };
  if (controller_c_pc) {
    v_2008 = sub_152;
  } else {
    v_2008 = v_2007;
  };
  if (controller_c_window) {
    sub_170 = v_2008;
  } else {
    sub_170 = sub_29;
  };
  sub_175 = sub_172;
  if (controller_c_pc) {
    sub_174 = sub_111;
  } else {
    sub_174 = sub_175;
  };
  if (controller_c_window) {
    v_2009 = sub_174;
  } else {
    v_2009 = sub_29;
  };
  if (controller_v_395) {
    v_2010 = v_2009;
  } else {
    v_2010 = sub_170;
  };
  if (controller_blind_failed_recovered) {
    sub_169 = sub_170;
  } else {
    sub_169 = v_2010;
  };
  if (controller_c_pc) {
    sub_178 = sub_111;
  } else {
    sub_178 = sub_58;
  };
  if (controller_c_window) {
    sub_177 = sub_174;
  } else {
    sub_177 = sub_178;
  };
  sub_176 = sub_177;
  if (controller_c_door) {
    v_2011 = sub_176;
    sub_168 = sub_169;
  } else {
    v_2011 = sub_169;
    sub_168 = sub_176;
  };
  if (controller_ck_11_1) {
    v_2012 = v_2011;
  } else {
    v_2012 = sub_168;
  };
  if (controller_air_failed_recovered) {
    sub_167 = v_2012;
  } else {
    sub_167 = sub_45;
  };
  if (controller_change_shift) {
    v_1997 = sub_64;
    sub_183 = sub_72;
  } else {
    v_1997 = sub_72;
    sub_183 = sub_64;
  };
  if (controller_ck_1) {
    v_1998 = v_1997;
  } else {
    v_1998 = sub_183;
  };
  if (controller_cleaner) {
    sub_187 = sub_69;
  } else {
    sub_187 = sub_68;
  };
  if (controller_worker) {
    v_1996 = sub_18;
    sub_186 = sub_187;
  } else {
    v_1996 = sub_187;
    sub_186 = sub_18;
  };
  if (controller_ck_15_1) {
    sub_185 = v_1996;
  } else {
    sub_185 = sub_186;
  };
  if (controller_cleaner) {
    sub_190 = sub_108;
  } else {
    sub_190 = sub_107;
  };
  if (controller_worker) {
    v_1995 = sub_134;
    sub_189 = sub_190;
  } else {
    v_1995 = sub_190;
    sub_189 = sub_134;
  };
  if (controller_ck_15_1) {
    sub_188 = v_1995;
  } else {
    sub_188 = sub_189;
  };
  if (controller_change_shift) {
    v_1999 = sub_188;
    sub_184 = sub_185;
  } else {
    v_1999 = sub_185;
    sub_184 = sub_188;
  };
  if (controller_ck_1) {
    v_2000 = v_1999;
  } else {
    v_2000 = sub_184;
  };
  if (controller_c_pc) {
    v_2001 = v_1998;
    sub_191 = sub_71;
  } else {
    v_2001 = v_2000;
    sub_191 = sub_30;
  };
  if (controller_c_window) {
    sub_182 = v_2001;
  } else {
    sub_182 = sub_191;
  };
  sub_197 = false;
  if (controller_worker) {
    v_1993 = sub_197;
    sub_196 = sub_190;
  } else {
    v_1993 = sub_190;
    sub_196 = sub_197;
  };
  if (controller_ck_15_1) {
    sub_195 = v_1993;
  } else {
    sub_195 = sub_196;
  };
  if (controller_change_shift) {
    v_1994 = sub_195;
    sub_194 = sub_188;
  } else {
    v_1994 = sub_188;
    sub_194 = sub_195;
  };
  if (controller_ck_1) {
    sub_193 = v_1994;
  } else {
    sub_193 = sub_194;
  };
  if (controller_c_pc) {
    sub_192 = sub_42;
  } else {
    sub_192 = sub_193;
  };
  if (controller_c_window) {
    v_2002 = sub_192;
  } else {
    v_2002 = sub_191;
  };
  if (controller_v_395) {
    v_2003 = v_2002;
  } else {
    v_2003 = sub_182;
  };
  if (controller_blind_failed_recovered) {
    sub_181 = sub_182;
  } else {
    sub_181 = v_2003;
  };
  if (controller_change_shift) {
    sub_200 = sub_19;
    sub_201 = sub_64;
  } else {
    sub_200 = sub_64;
    sub_201 = sub_19;
  };
  if (controller_ck_1) {
    v_1989 = sub_201;
  } else {
    v_1989 = sub_200;
  };
  sub_202 = sub_188;
  if (controller_c_pc) {
    v_1990 = v_1989;
    sub_203 = sub_94;
  } else {
    v_1990 = sub_202;
    sub_203 = sub_142;
  };
  if (controller_c_window) {
    sub_199 = v_1990;
  } else {
    sub_199 = sub_203;
  };
  if (controller_ck_1) {
    sub_205 = sub_200;
  } else {
    sub_205 = sub_201;
  };
  if (controller_worker) {
    v_1986 = sub_197;
    sub_208 = sub_133;
  } else {
    v_1986 = sub_133;
    sub_208 = sub_197;
  };
  if (controller_ck_15_1) {
    sub_207 = v_1986;
  } else {
    sub_207 = sub_208;
  };
  if (controller_change_shift) {
    v_1987 = sub_207;
    sub_206 = sub_131;
  } else {
    v_1987 = sub_131;
    sub_206 = sub_207;
  };
  if (controller_ck_1) {
    v_1988 = v_1987;
  } else {
    v_1988 = sub_206;
  };
  if (controller_c_pc) {
    sub_204 = sub_205;
  } else {
    sub_204 = v_1988;
  };
  if (controller_c_window) {
    v_1991 = sub_192;
  } else {
    v_1991 = sub_204;
  };
  if (controller_v_395) {
    v_1992 = v_1991;
  } else {
    v_1992 = sub_199;
  };
  if (controller_blind_failed_recovered) {
    sub_198 = sub_199;
  } else {
    sub_198 = v_1992;
  };
  if (controller_c_door) {
    v_2004 = sub_198;
    sub_180 = sub_181;
  } else {
    v_2004 = sub_181;
    sub_180 = sub_198;
  };
  if (controller_ck_11_1) {
    sub_179 = v_2004;
  } else {
    sub_179 = sub_180;
  };
  if (controller_c_pc) {
    v_1983 = sub_205;
  } else {
    v_1983 = sub_193;
  };
  if (controller_c_window) {
    v_1984 = v_1983;
  } else {
    v_1984 = sub_204;
  };
  if (controller_c_pc) {
    v_1982 = sub_94;
  } else {
    v_1982 = sub_202;
  };
  if (controller_c_window) {
    sub_210 = v_1982;
  } else {
    sub_210 = sub_203;
  };
  if (controller_v_395) {
    v_1985 = v_1984;
  } else {
    v_1985 = sub_210;
  };
  if (controller_blind_failed_recovered) {
    sub_209 = sub_210;
  } else {
    sub_209 = v_1985;
  };
  if (controller_air_failed_recovered) {
    v_2097 = sub_179;
  } else {
    v_2097 = sub_209;
  };
  if (controller_v_448) {
    v_2098 = v_2097;
  } else {
    v_2098 = sub_167;
  };
  if (controller_v_450) {
    v_2099 = v_2098;
  } else {
    v_2099 = sub_125;
  };
  if (controller_v_449) {
    sub_4 = v_2099;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  if (controller_air_failed_recovered) {
    v_1979 = sub_179;
  } else {
    v_1979 = sub_198;
  };
  if (controller_v_448) {
    v_1980 = v_1979;
  } else {
    v_1980 = sub_167;
  };
  if (controller_c_pc) {
    sub_217 = false;
  } else {
    sub_217 = sub_82;
  };
  if (controller_c_window) {
    v_1974 = sub_217;
  } else {
    v_1974 = sub_84;
  };
  if (controller_v_395) {
    v_1975 = v_1974;
  } else {
    v_1975 = sub_56;
  };
  if (controller_blind_failed_recovered) {
    sub_216 = sub_56;
  } else {
    sub_216 = v_1975;
  };
  if (controller_c_window) {
    v_1972 = sub_217;
  } else {
    v_1972 = sub_96;
  };
  if (controller_ck_1) {
    sub_220 = sub_98;
  } else {
    sub_220 = sub_99;
  };
  if (controller_c_pc) {
    v_1971 = sub_220;
  } else {
    v_1971 = sub_92;
  };
  if (controller_c_window) {
    sub_219 = v_1971;
  } else {
    sub_219 = sub_93;
  };
  if (controller_v_395) {
    v_1973 = v_1972;
  } else {
    v_1973 = sub_219;
  };
  if (controller_blind_failed_recovered) {
    sub_218 = sub_219;
  } else {
    sub_218 = v_1973;
  };
  if (controller_c_door) {
    v_1976 = sub_218;
    sub_215 = sub_216;
  } else {
    v_1976 = sub_216;
    sub_215 = sub_218;
  };
  if (controller_ck_11_1) {
    v_1977 = v_1976;
  } else {
    v_1977 = sub_215;
  };
  if (controller_air_failed_recovered) {
    v_1978 = v_1977;
  } else {
    v_1978 = sub_100;
  };
  if (controller_v_448) {
    sub_214 = v_1978;
  } else {
    sub_214 = sub_7;
  };
  if (controller_c_pc) {
    v_1968 = false;
  } else {
    v_1968 = sub_123;
  };
  if (controller_c_window) {
    v_1969 = v_1968;
  } else {
    v_1969 = sub_96;
  };
  if (controller_c_pc) {
    v_1967 = sub_220;
  } else {
    v_1967 = sub_120;
  };
  if (controller_c_window) {
    sub_223 = v_1967;
  } else {
    sub_223 = sub_93;
  };
  if (controller_v_395) {
    v_1970 = v_1969;
  } else {
    v_1970 = sub_223;
  };
  if (controller_blind_failed_recovered) {
    sub_222 = sub_223;
  } else {
    sub_222 = v_1970;
  };
  sub_221 = sub_222;
  if (controller_v_450) {
    sub_213 = sub_221;
  } else {
    sub_213 = sub_214;
  };
  if (controller_c_pc) {
    sub_228 = sub_111;
  } else {
    sub_228 = sub_144;
  };
  if (controller_c_window) {
    v_1960 = sub_228;
  } else {
    v_1960 = sub_141;
  };
  if (controller_v_395) {
    v_1961 = v_1960;
  } else {
    v_1961 = sub_129;
  };
  if (controller_blind_failed_recovered) {
    sub_227 = sub_129;
  } else {
    sub_227 = v_1961;
  };
  if (controller_c_window) {
    v_1958 = sub_228;
  } else {
    v_1958 = sub_115;
  };
  if (controller_c_pc) {
    v_1957 = sub_89;
  } else {
    v_1957 = sub_148;
  };
  if (controller_c_window) {
    sub_230 = v_1957;
  } else {
    sub_230 = sub_109;
  };
  if (controller_v_395) {
    v_1959 = v_1958;
  } else {
    v_1959 = sub_230;
  };
  if (controller_blind_failed_recovered) {
    sub_229 = sub_230;
  } else {
    sub_229 = v_1959;
  };
  if (controller_c_door) {
    v_1962 = sub_229;
    sub_226 = sub_227;
  } else {
    v_1962 = sub_227;
    sub_226 = sub_229;
  };
  if (controller_ck_11_1) {
    v_1963 = v_1962;
  } else {
    v_1963 = sub_226;
  };
  if (controller_air_failed_recovered) {
    sub_225 = v_1963;
  } else {
    sub_225 = sub_229;
  };
  if (controller_c_pc) {
    sub_233 = false;
  } else {
    sub_233 = sub_159;
  };
  if (controller_c_window) {
    v_1955 = sub_233;
  } else {
    v_1955 = sub_29;
  };
  if (controller_v_395) {
    v_1956 = v_1955;
  } else {
    v_1956 = sub_151;
  };
  if (controller_blind_failed_recovered) {
    sub_232 = sub_151;
  } else {
    sub_232 = v_1956;
  };
  if (controller_c_window) {
    v_1953 = sub_233;
  } else {
    v_1953 = sub_166;
  };
  if (controller_ck_1) {
    sub_236 = sub_77;
  } else {
    sub_236 = sub_81;
  };
  if (controller_c_pc) {
    v_1952 = sub_236;
  } else {
    v_1952 = sub_163;
  };
  if (controller_c_window) {
    sub_235 = v_1952;
  } else {
    sub_235 = sub_164;
  };
  if (controller_v_395) {
    v_1954 = v_1953;
  } else {
    v_1954 = sub_235;
  };
  if (controller_blind_failed_recovered) {
    sub_234 = sub_235;
  } else {
    sub_234 = v_1954;
  };
  if (controller_c_door) {
    v_1964 = sub_234;
    sub_231 = sub_232;
  } else {
    v_1964 = sub_232;
    sub_231 = sub_234;
  };
  if (controller_ck_11_1) {
    v_1965 = v_1964;
  } else {
    v_1965 = sub_231;
  };
  if (controller_air_failed_recovered) {
    v_1966 = v_1965;
  } else {
    v_1966 = sub_45;
  };
  if (controller_v_448) {
    sub_224 = v_1966;
  } else {
    sub_224 = sub_225;
  };
  if (controller_v_450) {
    v_1981 = v_1980;
  } else {
    v_1981 = sub_224;
  };
  if (controller_v_449) {
    sub_212 = v_1981;
  } else {
    sub_212 = sub_213;
  };
  sub_211 = sub_212;
  if (controller_v_410) {
    v_2100 = sub_3;
    sub_2 = sub_211;
  } else {
    v_2100 = sub_211;
    sub_2 = sub_3;
  };
  if (controller_v_411) {
    v_2101 = v_2100;
  } else {
    v_2101 = sub_2;
  };
  if (controller_v_395) {
    v_1941 = sub_31;
  } else {
    v_1941 = sub_48;
  };
  if (controller_blind_failed_recovered) {
    sub_242 = sub_48;
  } else {
    sub_242 = v_1941;
  };
  sub_243 = sub_43;
  if (controller_c_door) {
    v_1942 = sub_243;
    sub_241 = sub_242;
  } else {
    v_1942 = sub_242;
    sub_241 = sub_243;
  };
  if (controller_ck_11_1) {
    v_1943 = v_1942;
  } else {
    v_1943 = sub_241;
  };
  if (controller_air_failed_recovered) {
    sub_240 = v_1943;
  } else {
    sub_240 = sub_45;
  };
  if (controller_change_shift) {
    v_1937 = sub_34;
    v_1935 = false;
    sub_247 = sub_58;
  } else {
    v_1937 = sub_66;
    v_1935 = sub_58;
    sub_247 = false;
  };
  if (controller_ck_1) {
    v_1936 = v_1935;
  } else {
    v_1936 = sub_247;
  };
  if (controller_change_shift) {
    sub_248 = sub_66;
  } else {
    sub_248 = sub_34;
  };
  if (controller_ck_1) {
    v_1938 = v_1937;
  } else {
    v_1938 = sub_248;
  };
  if (controller_c_pc) {
    v_1939 = v_1936;
  } else {
    v_1939 = v_1938;
  };
  if (controller_c_window) {
    sub_246 = v_1939;
  } else {
    sub_246 = sub_84;
  };
  if (controller_v_395) {
    v_1940 = sub_74;
  } else {
    v_1940 = sub_246;
  };
  if (controller_blind_failed_recovered) {
    sub_245 = sub_246;
  } else {
    sub_245 = v_1940;
  };
  sub_249 = sub_95;
  if (controller_c_door) {
    v_1944 = sub_249;
    sub_244 = sub_245;
  } else {
    v_1944 = sub_245;
    sub_244 = sub_249;
  };
  if (controller_ck_11_1) {
    v_1945 = v_1944;
  } else {
    v_1945 = sub_244;
  };
  sub_250 = sub_110;
  if (controller_air_failed_recovered) {
    v_1946 = v_1945;
  } else {
    v_1946 = sub_250;
  };
  if (controller_v_448) {
    sub_239 = v_1946;
  } else {
    sub_239 = sub_240;
  };
  sub_252 = sub_122;
  sub_251 = sub_252;
  if (controller_v_450) {
    sub_238 = sub_251;
  } else {
    sub_238 = sub_239;
  };
  if (controller_change_shift) {
    v_1925 = sub_113;
    v_1923 = sub_78;
    sub_258 = sub_207;
  } else {
    v_1925 = sub_138;
    v_1923 = sub_207;
    sub_258 = sub_78;
  };
  if (controller_ck_1) {
    v_1924 = v_1923;
  } else {
    v_1924 = sub_258;
  };
  if (controller_change_shift) {
    sub_259 = sub_138;
  } else {
    sub_259 = sub_113;
  };
  if (controller_ck_1) {
    v_1926 = v_1925;
  } else {
    v_1926 = sub_259;
  };
  if (controller_c_pc) {
    v_1927 = v_1924;
  } else {
    v_1927 = v_1926;
  };
  if (controller_c_window) {
    sub_257 = v_1927;
  } else {
    sub_257 = sub_141;
  };
  if (controller_change_shift) {
    sub_261 = sub_19;
    sub_262 = sub_78;
  } else {
    sub_261 = sub_78;
    sub_262 = sub_19;
  };
  if (controller_ck_1) {
    v_1922 = sub_262;
  } else {
    v_1922 = sub_261;
  };
  if (controller_c_pc) {
    sub_260 = v_1922;
  } else {
    sub_260 = sub_144;
  };
  if (controller_c_window) {
    v_1928 = sub_260;
  } else {
    v_1928 = sub_141;
  };
  if (controller_v_395) {
    v_1929 = v_1928;
  } else {
    v_1929 = sub_257;
  };
  if (controller_blind_failed_recovered) {
    sub_256 = sub_257;
  } else {
    sub_256 = v_1929;
  };
  if (controller_c_window) {
    sub_264 = sub_260;
  } else {
    sub_264 = sub_115;
  };
  sub_263 = sub_264;
  if (controller_c_door) {
    v_1930 = sub_263;
    sub_255 = sub_256;
  } else {
    v_1930 = sub_256;
    sub_255 = sub_263;
  };
  if (controller_ck_11_1) {
    v_1931 = v_1930;
  } else {
    v_1931 = sub_255;
  };
  if (controller_air_failed_recovered) {
    sub_254 = v_1931;
  } else {
    sub_254 = sub_263;
  };
  if (controller_v_395) {
    v_1921 = sub_157;
  } else {
    v_1921 = sub_48;
  };
  if (controller_blind_failed_recovered) {
    sub_266 = sub_48;
  } else {
    sub_266 = v_1921;
  };
  sub_267 = sub_165;
  if (controller_c_door) {
    v_1932 = sub_267;
    sub_265 = sub_266;
  } else {
    v_1932 = sub_266;
    sub_265 = sub_267;
  };
  if (controller_ck_11_1) {
    v_1933 = v_1932;
  } else {
    v_1933 = sub_265;
  };
  if (controller_air_failed_recovered) {
    v_1934 = v_1933;
  } else {
    v_1934 = sub_45;
  };
  if (controller_v_448) {
    sub_253 = v_1934;
  } else {
    sub_253 = sub_254;
  };
  if (controller_c_pc) {
    sub_271 = sub_236;
  } else {
    sub_271 = sub_175;
  };
  if (controller_c_window) {
    v_1917 = sub_271;
  } else {
    v_1917 = sub_29;
  };
  if (controller_v_395) {
    v_1918 = v_1917;
  } else {
    v_1918 = sub_170;
  };
  if (controller_blind_failed_recovered) {
    sub_270 = sub_170;
  } else {
    sub_270 = v_1918;
  };
  if (controller_c_window) {
    sub_273 = sub_271;
  } else {
    sub_273 = sub_178;
  };
  sub_272 = sub_273;
  if (controller_c_door) {
    v_1919 = sub_272;
    sub_269 = sub_270;
  } else {
    v_1919 = sub_270;
    sub_269 = sub_272;
  };
  if (controller_ck_11_1) {
    v_1920 = v_1919;
  } else {
    v_1920 = sub_269;
  };
  if (controller_air_failed_recovered) {
    sub_268 = v_1920;
  } else {
    sub_268 = sub_45;
  };
  if (controller_change_shift) {
    v_1912 = sub_195;
    v_1910 = sub_19;
    sub_277 = sub_58;
  } else {
    v_1912 = sub_185;
    v_1910 = sub_58;
    sub_277 = sub_19;
  };
  if (controller_ck_1) {
    v_1911 = v_1910;
  } else {
    v_1911 = sub_277;
  };
  if (controller_change_shift) {
    sub_278 = sub_185;
  } else {
    sub_278 = sub_195;
  };
  if (controller_ck_1) {
    v_1913 = v_1912;
  } else {
    v_1913 = sub_278;
  };
  if (controller_c_pc) {
    v_1914 = v_1911;
  } else {
    v_1914 = v_1913;
  };
  if (controller_c_window) {
    sub_276 = v_1914;
  } else {
    sub_276 = sub_191;
  };
  if (controller_c_pc) {
    sub_279 = sub_39;
  } else {
    sub_279 = sub_193;
  };
  if (controller_c_window) {
    v_1915 = sub_279;
  } else {
    v_1915 = sub_191;
  };
  if (controller_v_395) {
    v_1916 = v_1915;
  } else {
    v_1916 = sub_276;
  };
  if (controller_blind_failed_recovered) {
    sub_275 = sub_276;
  } else {
    sub_275 = v_1916;
  };
  if (controller_c_window) {
    sub_281 = sub_279;
  } else {
    sub_281 = sub_204;
  };
  sub_280 = sub_281;
  if (controller_c_door) {
    v_1947 = sub_280;
    sub_274 = sub_275;
  } else {
    v_1947 = sub_275;
    sub_274 = sub_280;
  };
  if (controller_ck_11_1) {
    v_1948 = v_1947;
  } else {
    v_1948 = sub_274;
  };
  if (controller_ck_1) {
    v = sub_261;
  } else {
    v = sub_262;
  };
  if (controller_c_pc) {
    v_1909 = v;
  } else {
    v_1909 = sub_193;
  };
  if (controller_c_window) {
    sub_283 = v_1909;
  } else {
    sub_283 = sub_204;
  };
  sub_282 = sub_283;
  if (controller_air_failed_recovered) {
    v_1949 = v_1948;
  } else {
    v_1949 = sub_282;
  };
  if (controller_v_448) {
    v_1950 = v_1949;
  } else {
    v_1950 = sub_268;
  };
  if (controller_v_450) {
    v_1951 = v_1950;
  } else {
    v_1951 = sub_253;
  };
  if (controller_v_449) {
    sub_237 = v_1951;
  } else {
    sub_237 = sub_238;
  };
  if (controller_v_411) {
    v_2102 = sub_237;
  } else {
    v_2102 = sub_211;
  };
  if (controller_light_failed_recovered) {
    sub_1 = v_2101;
  } else {
    sub_1 = v_2102;
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
  int controller_pnr_3, int controller_v_450, int controller_v_449,
  int controller_v_448, int controller_pnr_2, int controller_v_411,
  int controller_v_410, int controller_pnr_1, int controller_v_395,
  int controller_v_394, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_window_out* _out) {
  
  int v_2174;
  int v_2173;
  int v_2172;
  int v_2171;
  int v_2170;
  int v_2169;
  int v_2168;
  int v_2167;
  int v_2166;
  int v_2165;
  int v_2164;
  int v_2163;
  int v_2162;
  int v_2161;
  int v_2160;
  int v_2159;
  int v_2158;
  int v_2157;
  int v_2156;
  int v_2155;
  int v_2154;
  int v_2153;
  int v_2152;
  int v_2151;
  int v_2150;
  int v_2149;
  int v_2148;
  int v_2147;
  int v_2146;
  int v_2145;
  int v_2144;
  int v_2143;
  int v_2142;
  int v_2141;
  int v_2140;
  int v_2139;
  int v_2138;
  int v_2137;
  int v_2136;
  int v_2135;
  int v_2134;
  int v_2133;
  int v_2132;
  int v_2131;
  int v_2130;
  int v_2129;
  int v_2128;
  int v_2127;
  int v_2126;
  int v_2125;
  int v_2124;
  int v_2123;
  int v_2122;
  int v_2121;
  int v_2120;
  int v_2119;
  int v_2118;
  int v_2117;
  int v_2116;
  int v_2115;
  int v_2114;
  int v_2113;
  int v_2112;
  int v_2111;
  int v_2110;
  int v_2109;
  int v_2108;
  int v_2107;
  int v_2106;
  int v_2105;
  int v_2104;
  int v_2103;
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
    v_2164 = sub_20;
    sub_15 = sub_16;
  } else {
    v_2164 = sub_16;
    sub_15 = sub_20;
  };
  if (controller_ck_15_1) {
    sub_14 = v_2164;
  } else {
    sub_14 = sub_15;
  };
  v_2162 = !(controller_ck_17_1);
  sub_24 = (v_2162&&false);
  sub_25 = (controller_ck_17_1&&false);
  if (controller_cleaner) {
    sub_23 = sub_24;
  } else {
    sub_23 = sub_25;
  };
  v_2161 = (controller_ck_17_1&&sub_18);
  v_2159 = !(controller_ck_17_1);
  v_2160 = (v_2159&&sub_18);
  if (controller_cleaner) {
    sub_26 = v_2160;
  } else {
    sub_26 = v_2161;
  };
  if (controller_worker) {
    v_2163 = sub_26;
    sub_22 = sub_23;
  } else {
    v_2163 = sub_23;
    sub_22 = sub_26;
  };
  if (controller_ck_15_1) {
    sub_21 = v_2163;
  } else {
    sub_21 = sub_22;
  };
  if (controller_change_shift) {
    v_2165 = sub_21;
    sub_13 = sub_14;
  } else {
    v_2165 = sub_14;
    sub_13 = sub_21;
  };
  if (controller_ck_1) {
    sub_12 = v_2165;
  } else {
    sub_12 = sub_13;
  };
  v_2157 = (controller_ck_17_1||sub_18);
  v_2155 = !(controller_ck_17_1);
  v_2156 = (v_2155||sub_18);
  if (controller_cleaner) {
    sub_30 = v_2156;
  } else {
    sub_30 = v_2157;
  };
  if (controller_worker) {
    v_2158 = sub_20;
    sub_29 = sub_30;
  } else {
    v_2158 = sub_30;
    sub_29 = sub_20;
  };
  if (controller_ck_15_1) {
    sub_28 = v_2158;
  } else {
    sub_28 = sub_29;
  };
  v_2153 = !(controller_ck_17_1);
  if (controller_cleaner) {
    sub_33 = v_2153;
  } else {
    sub_33 = controller_ck_17_1;
  };
  if (controller_worker) {
    v_2154 = sub_26;
    sub_32 = sub_33;
  } else {
    v_2154 = sub_33;
    sub_32 = sub_26;
  };
  if (controller_ck_15_1) {
    sub_31 = v_2154;
  } else {
    sub_31 = sub_32;
  };
  if (controller_change_shift) {
    v_2166 = sub_31;
    sub_27 = sub_28;
  } else {
    v_2166 = sub_28;
    sub_27 = sub_31;
  };
  if (controller_ck_1) {
    v_2167 = v_2166;
  } else {
    v_2167 = sub_27;
  };
  if (controller_c_pc) {
    sub_11 = sub_12;
  } else {
    sub_11 = v_2167;
  };
  sub_38 = false;
  if (controller_worker) {
    v_2152 = sub_38;
    sub_37 = sub_23;
  } else {
    v_2152 = sub_23;
    sub_37 = sub_38;
  };
  if (controller_ck_15_1) {
    sub_36 = v_2152;
  } else {
    sub_36 = sub_37;
  };
  sub_35 = sub_36;
  if (controller_worker) {
    v_2150 = sub_38;
    sub_42 = sub_33;
  } else {
    v_2150 = sub_33;
    sub_42 = sub_38;
  };
  if (controller_ck_15_1) {
    sub_41 = v_2150;
  } else {
    sub_41 = sub_42;
  };
  if (controller_change_shift) {
    v_2151 = sub_41;
    sub_40 = sub_31;
  } else {
    v_2151 = sub_31;
    sub_40 = sub_41;
  };
  if (controller_ck_1) {
    sub_39 = v_2151;
  } else {
    sub_39 = sub_40;
  };
  if (controller_c_pc) {
    sub_34 = sub_35;
  } else {
    sub_34 = sub_39;
  };
  if (controller_v_395) {
    v_2168 = sub_34;
  } else {
    v_2168 = sub_11;
  };
  if (controller_blind_failed_recovered) {
    sub_10 = sub_11;
  } else {
    sub_10 = v_2168;
  };
  if (controller_cleaner) {
    sub_49 = sub_25;
  } else {
    sub_49 = sub_24;
  };
  if (controller_worker) {
    v_2147 = sub_49;
    sub_48 = false;
  } else {
    v_2147 = false;
    sub_48 = sub_49;
  };
  if (controller_ck_15_1) {
    sub_47 = v_2147;
  } else {
    sub_47 = sub_48;
  };
  if (controller_cleaner) {
    sub_52 = sub_19;
  } else {
    sub_52 = sub_17;
  };
  if (controller_worker) {
    v_2146 = sub_52;
    sub_51 = false;
  } else {
    v_2146 = false;
    sub_51 = sub_52;
  };
  if (controller_ck_15_1) {
    sub_50 = v_2146;
  } else {
    sub_50 = sub_51;
  };
  if (controller_change_shift) {
    v_2148 = sub_50;
    sub_46 = sub_47;
  } else {
    v_2148 = sub_47;
    sub_46 = sub_50;
  };
  if (controller_ck_1) {
    sub_45 = v_2148;
  } else {
    sub_45 = sub_46;
  };
  v_2144 = (controller_ck_17_1||false);
  v_2142 = !(controller_ck_17_1);
  v_2143 = (v_2142||false);
  if (controller_cleaner) {
    sub_56 = v_2143;
  } else {
    sub_56 = v_2144;
  };
  if (controller_worker) {
    v_2145 = sub_52;
    sub_55 = sub_56;
  } else {
    v_2145 = sub_56;
    sub_55 = sub_52;
  };
  if (controller_ck_15_1) {
    sub_54 = v_2145;
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
    v_2141 = false;
    sub_59 = sub_47;
  } else {
    v_2141 = sub_47;
    sub_59 = false;
  };
  if (controller_ck_1) {
    sub_58 = v_2141;
  } else {
    sub_58 = sub_59;
  };
  if (controller_worker) {
    v_2139 = false;
    sub_63 = sub_56;
  } else {
    v_2139 = sub_56;
    sub_63 = false;
  };
  if (controller_ck_15_1) {
    sub_62 = v_2139;
  } else {
    sub_62 = sub_63;
  };
  if (controller_change_shift) {
    v_2140 = sub_62;
    sub_61 = sub_54;
  } else {
    v_2140 = sub_54;
    sub_61 = sub_62;
  };
  if (controller_ck_1) {
    sub_60 = v_2140;
  } else {
    sub_60 = sub_61;
  };
  if (controller_c_pc) {
    sub_57 = sub_58;
  } else {
    sub_57 = sub_60;
  };
  if (controller_v_395) {
    v_2149 = sub_57;
  } else {
    v_2149 = sub_44;
  };
  if (controller_blind_failed_recovered) {
    sub_43 = sub_44;
  } else {
    sub_43 = v_2149;
  };
  if (controller_c_door) {
    v_2169 = sub_43;
    sub_9 = sub_10;
  } else {
    v_2169 = sub_10;
    sub_9 = sub_43;
  };
  if (controller_ck_11_1) {
    sub_8 = v_2169;
  } else {
    sub_8 = sub_9;
  };
  if (controller_c_pc) {
    v_2136 = sub_35;
  } else {
    v_2136 = sub_41;
  };
  if (controller_change_shift) {
    v_2134 = sub_41;
    v_2132 = sub_36;
    sub_68 = sub_14;
  } else {
    v_2134 = sub_28;
    v_2132 = sub_14;
    sub_68 = sub_36;
  };
  if (controller_ck_1) {
    v_2133 = v_2132;
  } else {
    v_2133 = sub_68;
  };
  if (controller_change_shift) {
    sub_69 = sub_28;
  } else {
    sub_69 = sub_41;
  };
  if (controller_ck_1) {
    v_2135 = v_2134;
  } else {
    v_2135 = sub_69;
  };
  if (controller_c_pc) {
    sub_67 = v_2133;
  } else {
    sub_67 = v_2135;
  };
  if (controller_v_395) {
    v_2137 = v_2136;
  } else {
    v_2137 = sub_67;
  };
  if (controller_blind_failed_recovered) {
    sub_66 = sub_67;
  } else {
    sub_66 = v_2137;
  };
  if (controller_c_pc) {
    sub_71 = false;
  } else {
    sub_71 = sub_62;
  };
  sub_70 = sub_71;
  if (controller_c_door) {
    v_2138 = sub_70;
    sub_65 = sub_66;
  } else {
    v_2138 = sub_66;
    sub_65 = sub_70;
  };
  if (controller_ck_11_1) {
    sub_64 = v_2138;
  } else {
    sub_64 = sub_65;
  };
  if (controller_air_failed_recovered) {
    sub_7 = sub_8;
  } else {
    sub_7 = sub_64;
  };
  if (controller_change_shift) {
    sub_76 = sub_21;
    sub_77 = sub_36;
  } else {
    sub_76 = sub_36;
    sub_77 = sub_21;
  };
  if (controller_ck_1) {
    v_2129 = sub_77;
  } else {
    v_2129 = sub_76;
  };
  if (controller_c_pc) {
    sub_75 = v_2129;
  } else {
    sub_75 = sub_39;
  };
  if (controller_v_395) {
    v_2130 = sub_75;
  } else {
    v_2130 = sub_11;
  };
  if (controller_blind_failed_recovered) {
    sub_74 = sub_11;
  } else {
    sub_74 = v_2130;
  };
  sub_80 = sub_50;
  if (controller_c_pc) {
    sub_79 = sub_80;
  } else {
    sub_79 = sub_53;
  };
  if (controller_change_shift) {
    v_2127 = false;
    sub_83 = sub_50;
  } else {
    v_2127 = sub_50;
    sub_83 = false;
  };
  if (controller_ck_1) {
    sub_82 = v_2127;
  } else {
    sub_82 = sub_83;
  };
  if (controller_c_pc) {
    sub_81 = sub_82;
  } else {
    sub_81 = sub_60;
  };
  if (controller_v_395) {
    v_2128 = sub_81;
  } else {
    v_2128 = sub_79;
  };
  if (controller_blind_failed_recovered) {
    sub_78 = sub_79;
  } else {
    sub_78 = v_2128;
  };
  if (controller_c_door) {
    v_2131 = sub_78;
    sub_73 = sub_74;
  } else {
    v_2131 = sub_74;
    sub_73 = sub_78;
  };
  if (controller_ck_11_1) {
    sub_72 = v_2131;
  } else {
    sub_72 = sub_73;
  };
  sub_87 = sub_28;
  if (controller_c_pc) {
    sub_86 = sub_80;
  } else {
    sub_86 = sub_87;
  };
  sub_85 = sub_86;
  sub_84 = sub_85;
  if (controller_air_failed_recovered) {
    v_2170 = sub_72;
  } else {
    v_2170 = sub_84;
  };
  if (controller_v_448) {
    sub_6 = v_2170;
  } else {
    sub_6 = sub_7;
  };
  if (controller_change_shift) {
    v_2125 = sub_50;
    sub_92 = sub_54;
  } else {
    v_2125 = sub_54;
    sub_92 = sub_50;
  };
  if (controller_ck_1) {
    sub_91 = v_2125;
  } else {
    sub_91 = sub_92;
  };
  if (controller_c_pc) {
    sub_90 = sub_80;
  } else {
    sub_90 = sub_91;
  };
  if (controller_change_shift) {
    v_2124 = false;
    sub_95 = sub_54;
  } else {
    v_2124 = sub_54;
    sub_95 = false;
  };
  if (controller_ck_1) {
    sub_94 = v_2124;
  } else {
    sub_94 = sub_95;
  };
  if (controller_c_pc) {
    sub_93 = sub_82;
  } else {
    sub_93 = sub_94;
  };
  if (controller_v_395) {
    v_2126 = sub_93;
  } else {
    v_2126 = sub_90;
  };
  if (controller_blind_failed_recovered) {
    sub_89 = sub_90;
  } else {
    sub_89 = v_2126;
  };
  sub_88 = sub_89;
  if (controller_v_450) {
    sub_5 = sub_88;
  } else {
    sub_5 = sub_6;
  };
  if (controller_air_failed_recovered) {
    v_2123 = sub_72;
  } else {
    v_2123 = sub_64;
  };
  if (controller_c_pc) {
    v_2120 = sub_21;
    sub_101 = sub_12;
  } else {
    v_2120 = sub_87;
    sub_101 = sub_87;
  };
  if (controller_v_395) {
    v_2121 = v_2120;
  } else {
    v_2121 = sub_101;
  };
  if (controller_blind_failed_recovered) {
    sub_100 = sub_101;
  } else {
    sub_100 = v_2121;
  };
  if (controller_c_door) {
    v_2122 = sub_85;
    sub_99 = sub_100;
  } else {
    v_2122 = sub_100;
    sub_99 = sub_85;
  };
  if (controller_ck_11_1) {
    sub_98 = v_2122;
  } else {
    sub_98 = sub_99;
  };
  if (controller_air_failed_recovered) {
    sub_97 = sub_98;
  } else {
    sub_97 = sub_84;
  };
  if (controller_v_448) {
    sub_96 = v_2123;
  } else {
    sub_96 = sub_97;
  };
  if (controller_air_failed_recovered) {
    sub_103 = sub_98;
  } else {
    sub_103 = sub_64;
  };
  if (controller_v_448) {
    sub_102 = sub_97;
  } else {
    sub_102 = sub_103;
  };
  if (controller_v_450) {
    v_2171 = sub_102;
  } else {
    v_2171 = sub_96;
  };
  if (controller_v_449) {
    sub_4 = v_2171;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  if (controller_air_failed_recovered) {
    v_2118 = sub_8;
  } else {
    v_2118 = sub_84;
  };
  if (controller_v_448) {
    sub_107 = v_2118;
  } else {
    sub_107 = sub_7;
  };
  if (controller_c_pc) {
    v_2116 = sub_58;
    sub_110 = sub_45;
  } else {
    v_2116 = sub_94;
    sub_110 = sub_91;
  };
  if (controller_v_395) {
    v_2117 = v_2116;
  } else {
    v_2117 = sub_110;
  };
  if (controller_blind_failed_recovered) {
    sub_109 = sub_110;
  } else {
    sub_109 = v_2117;
  };
  sub_108 = sub_109;
  if (controller_v_450) {
    sub_106 = sub_108;
  } else {
    sub_106 = sub_107;
  };
  if (controller_v_448) {
    sub_111 = sub_7;
  } else {
    sub_111 = sub_97;
  };
  if (controller_v_450) {
    v_2119 = sub_102;
  } else {
    v_2119 = sub_111;
  };
  if (controller_v_449) {
    sub_105 = v_2119;
  } else {
    sub_105 = sub_106;
  };
  sub_104 = sub_105;
  if (controller_v_410) {
    v_2172 = sub_3;
    sub_2 = sub_104;
  } else {
    v_2172 = sub_104;
    sub_2 = sub_3;
  };
  if (controller_v_411) {
    v_2173 = v_2172;
  } else {
    v_2173 = sub_2;
  };
  if (controller_v_395) {
    v_2109 = sub_34;
  } else {
    v_2109 = sub_67;
  };
  if (controller_blind_failed_recovered) {
    sub_117 = sub_67;
  } else {
    sub_117 = v_2109;
  };
  sub_118 = sub_57;
  if (controller_c_door) {
    v_2110 = sub_118;
    sub_116 = sub_117;
  } else {
    v_2110 = sub_117;
    sub_116 = sub_118;
  };
  if (controller_ck_11_1) {
    v_2111 = v_2110;
  } else {
    v_2111 = sub_116;
  };
  if (controller_air_failed_recovered) {
    sub_115 = v_2111;
  } else {
    sub_115 = sub_64;
  };
  if (controller_v_395) {
    v_2107 = sub_75;
  } else {
    v_2107 = sub_67;
  };
  if (controller_blind_failed_recovered) {
    sub_121 = sub_67;
  } else {
    sub_121 = v_2107;
  };
  sub_122 = sub_81;
  if (controller_c_door) {
    v_2108 = sub_122;
    sub_120 = sub_121;
  } else {
    v_2108 = sub_121;
    sub_120 = sub_122;
  };
  if (controller_ck_11_1) {
    sub_119 = v_2108;
  } else {
    sub_119 = sub_120;
  };
  if (controller_air_failed_recovered) {
    v_2112 = sub_119;
  } else {
    v_2112 = sub_84;
  };
  if (controller_v_448) {
    sub_114 = v_2112;
  } else {
    sub_114 = sub_115;
  };
  sub_124 = sub_93;
  sub_123 = sub_124;
  if (controller_v_450) {
    sub_113 = sub_123;
  } else {
    sub_113 = sub_114;
  };
  if (controller_air_failed_recovered) {
    v_2106 = sub_119;
  } else {
    v_2106 = sub_64;
  };
  if (controller_v_448) {
    sub_125 = v_2106;
  } else {
    sub_125 = sub_97;
  };
  if (controller_ck_1) {
    v = sub_76;
  } else {
    v = sub_77;
  };
  if (controller_c_pc) {
    v_2103 = v;
  } else {
    v_2103 = sub_87;
  };
  if (controller_v_395) {
    v_2104 = v_2103;
  } else {
    v_2104 = sub_101;
  };
  if (controller_blind_failed_recovered) {
    sub_129 = sub_101;
  } else {
    sub_129 = v_2104;
  };
  if (controller_c_pc) {
    sub_131 = sub_45;
  } else {
    sub_131 = sub_87;
  };
  sub_130 = sub_131;
  if (controller_c_door) {
    v_2105 = sub_130;
    sub_128 = sub_129;
  } else {
    v_2105 = sub_129;
    sub_128 = sub_130;
  };
  if (controller_ck_11_1) {
    sub_127 = v_2105;
  } else {
    sub_127 = sub_128;
  };
  if (controller_air_failed_recovered) {
    v_2113 = sub_127;
    sub_126 = sub_127;
  } else {
    v_2113 = sub_84;
    sub_126 = sub_64;
  };
  if (controller_v_448) {
    v_2114 = v_2113;
  } else {
    v_2114 = sub_126;
  };
  if (controller_v_450) {
    v_2115 = v_2114;
  } else {
    v_2115 = sub_125;
  };
  if (controller_v_449) {
    sub_112 = v_2115;
  } else {
    sub_112 = sub_113;
  };
  if (controller_v_411) {
    v_2174 = sub_112;
  } else {
    v_2174 = sub_104;
  };
  if (controller_light_failed_recovered) {
    sub_1 = v_2173;
  } else {
    sub_1 = v_2174;
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
  int controller_pnr_3, int controller_v_450, int controller_v_449,
  int controller_v_448, int controller_pnr_2, int controller_v_411,
  int controller_v_410, int controller_pnr_1, int controller_v_395,
  int controller_v_394, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_pc_out* _out) {
  
  int v_2198;
  int v_2197;
  int v_2196;
  int v_2195;
  int v_2194;
  int v_2193;
  int v_2192;
  int v_2191;
  int v_2190;
  int v_2189;
  int v_2188;
  int v_2187;
  int v_2186;
  int v_2185;
  int v_2184;
  int v_2183;
  int v_2182;
  int v_2181;
  int v_2180;
  int v_2179;
  int v_2178;
  int v_2177;
  int v_2176;
  int v_2175;
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
  sub_15 = p_controller_c_pc;
  sub_14 = (controller_ck_17_1&&sub_15);
  v_2193 = !(controller_ck_17_1);
  sub_16 = (v_2193&&sub_15);
  if (controller_cleaner) {
    sub_13 = sub_14;
  } else {
    sub_13 = sub_16;
  };
  sub_17 = sub_15;
  if (controller_worker) {
    v_2194 = sub_17;
    sub_12 = sub_13;
  } else {
    v_2194 = sub_13;
    sub_12 = sub_17;
  };
  if (controller_ck_15_1) {
    sub_11 = v_2194;
  } else {
    sub_11 = sub_12;
  };
  sub_10 = sub_11;
  sub_9 = sub_10;
  v_2189 = !(controller_ck_17_1);
  v_2190 = (v_2189&&false);
  v_2188 = (controller_ck_17_1&&false);
  if (controller_cleaner) {
    sub_22 = v_2188;
  } else {
    sub_22 = v_2190;
  };
  if (controller_ck_17_1) {
    v_2187 = sub_15;
    v_2186 = false;
  } else {
    v_2187 = false;
    v_2186 = sub_15;
  };
  if (controller_cleaner) {
    sub_23 = v_2186;
  } else {
    sub_23 = v_2187;
  };
  if (controller_worker) {
    v_2191 = sub_23;
    sub_21 = sub_22;
  } else {
    v_2191 = sub_22;
    sub_21 = sub_23;
  };
  if (controller_ck_15_1) {
    sub_20 = v_2191;
  } else {
    sub_20 = sub_21;
  };
  sub_19 = sub_20;
  if (controller_worker) {
    v_2184 = false;
    sub_27 = sub_22;
  } else {
    v_2184 = sub_22;
    sub_27 = false;
  };
  if (controller_ck_15_1) {
    sub_26 = v_2184;
  } else {
    sub_26 = sub_27;
  };
  if (controller_change_shift) {
    v_2185 = sub_26;
    sub_25 = sub_20;
  } else {
    v_2185 = sub_20;
    sub_25 = sub_26;
  };
  if (controller_ck_1) {
    sub_24 = v_2185;
  } else {
    sub_24 = sub_25;
  };
  if (controller_v_395) {
    v_2192 = sub_24;
  } else {
    v_2192 = sub_19;
  };
  if (controller_blind_failed_recovered) {
    sub_18 = sub_19;
  } else {
    sub_18 = v_2192;
  };
  if (controller_c_door) {
    v_2195 = sub_18;
    sub_8 = sub_9;
  } else {
    v_2195 = sub_9;
    sub_8 = sub_18;
  };
  if (controller_ck_11_1) {
    sub_7 = v_2195;
  } else {
    sub_7 = sub_8;
  };
  sub_31 = sub_26;
  sub_30 = sub_31;
  if (controller_c_door) {
    v_2183 = sub_30;
    sub_29 = sub_9;
  } else {
    v_2183 = sub_9;
    sub_29 = sub_30;
  };
  if (controller_ck_11_1) {
    sub_28 = v_2183;
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
    v_2182 = sub_38;
    sub_36 = sub_37;
  } else {
    v_2182 = sub_37;
    sub_36 = sub_38;
  };
  if (controller_ck_15_1) {
    sub_35 = v_2182;
  } else {
    sub_35 = sub_36;
  };
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  if (controller_air_failed_recovered) {
    v_2196 = sub_7;
  } else {
    v_2196 = sub_32;
  };
  if (controller_v_448) {
    sub_5 = v_2196;
  } else {
    sub_5 = sub_6;
  };
  if (controller_worker) {
    v_2179 = sub_23;
    sub_44 = false;
  } else {
    v_2179 = false;
    sub_44 = sub_23;
  };
  if (controller_ck_15_1) {
    sub_43 = v_2179;
  } else {
    sub_43 = sub_44;
  };
  if (controller_change_shift) {
    v_2180 = sub_43;
    sub_42 = sub_20;
  } else {
    v_2180 = sub_20;
    sub_42 = sub_43;
  };
  if (controller_ck_1) {
    sub_41 = v_2180;
  } else {
    sub_41 = sub_42;
  };
  if (controller_change_shift) {
    v_2178 = false;
    sub_46 = sub_20;
  } else {
    v_2178 = sub_20;
    sub_46 = false;
  };
  if (controller_ck_1) {
    sub_45 = v_2178;
  } else {
    sub_45 = sub_46;
  };
  if (controller_v_395) {
    v_2181 = sub_45;
  } else {
    v_2181 = sub_41;
  };
  if (controller_blind_failed_recovered) {
    sub_40 = sub_41;
  } else {
    sub_40 = v_2181;
  };
  sub_39 = sub_40;
  if (controller_v_450) {
    sub_4 = sub_39;
  } else {
    sub_4 = sub_5;
  };
  if (controller_c_door) {
    v_2177 = sub_33;
    sub_50 = sub_9;
  } else {
    v_2177 = sub_9;
    sub_50 = sub_33;
  };
  if (controller_ck_11_1) {
    sub_49 = v_2177;
  } else {
    sub_49 = sub_50;
  };
  if (controller_air_failed_recovered) {
    sub_48 = sub_49;
  } else {
    sub_48 = sub_32;
  };
  if (controller_v_448) {
    sub_47 = sub_6;
  } else {
    sub_47 = sub_48;
  };
  if (controller_air_failed_recovered) {
    sub_52 = sub_49;
  } else {
    sub_52 = sub_28;
  };
  if (controller_v_448) {
    sub_51 = sub_48;
  } else {
    sub_51 = sub_52;
  };
  if (controller_v_450) {
    v_2197 = sub_51;
  } else {
    v_2197 = sub_47;
  };
  if (controller_v_449) {
    sub_3 = v_2197;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  sub_59 = sub_24;
  if (controller_c_door) {
    v = sub_59;
    sub_58 = sub_9;
  } else {
    v = sub_9;
    sub_58 = sub_59;
  };
  if (controller_ck_11_1) {
    sub_57 = v;
  } else {
    sub_57 = sub_58;
  };
  if (controller_air_failed_recovered) {
    v_2175 = sub_57;
    sub_56 = sub_57;
  } else {
    v_2175 = sub_32;
    sub_56 = sub_28;
  };
  if (controller_v_448) {
    sub_55 = v_2175;
  } else {
    sub_55 = sub_56;
  };
  sub_61 = sub_45;
  sub_60 = sub_61;
  if (controller_v_450) {
    sub_54 = sub_60;
  } else {
    sub_54 = sub_55;
  };
  if (controller_v_448) {
    sub_62 = sub_56;
  } else {
    sub_62 = sub_48;
  };
  if (controller_v_450) {
    v_2176 = sub_51;
  } else {
    v_2176 = sub_62;
  };
  if (controller_v_449) {
    sub_53 = v_2176;
  } else {
    sub_53 = sub_54;
  };
  if (controller_v_411) {
    v_2198 = sub_53;
  } else {
    v_2198 = sub_2;
  };
  if (controller_light_failed_recovered) {
    sub_1 = sub_2;
  } else {
    sub_1 = v_2198;
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
  int controller_pnr_3, int controller_v_450, int controller_v_449,
  int controller_v_448, int controller_pnr_2, int controller_v_411,
  int controller_v_410, int controller_pnr_1, int controller_v_395,
  int controller_v_394, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  Controller_controller__controller_controller_controller_c_door_out* _out) {
  
  int v_2221;
  int v_2220;
  int v_2219;
  int v_2218;
  int v_2217;
  int v_2216;
  int v_2215;
  int v_2214;
  int v_2213;
  int v_2212;
  int v_2211;
  int v_2210;
  int v_2209;
  int v_2208;
  int v_2207;
  int v_2206;
  int v_2205;
  int v_2204;
  int v_2203;
  int v_2202;
  int v_2201;
  int v_2200;
  int v_2199;
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
  v_2214 = !(controller_ck_17_1);
  sub_12 = p_controller_c_door;
  v_2215 = (v_2214||sub_12);
  v_2213 = (controller_ck_17_1||sub_12);
  if (controller_cleaner) {
    sub_11 = v_2213;
  } else {
    sub_11 = v_2215;
  };
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_17 = true;
  if (controller_worker) {
    v_2211 = sub_17;
    sub_16 = sub_11;
  } else {
    v_2211 = sub_11;
    sub_16 = sub_17;
  };
  if (controller_ck_15_1) {
    sub_15 = v_2211;
  } else {
    sub_15 = sub_16;
  };
  if (controller_change_shift) {
    v_2212 = sub_15;
    sub_14 = sub_10;
  } else {
    v_2212 = sub_10;
    sub_14 = sub_15;
  };
  if (controller_ck_1) {
    sub_13 = v_2212;
  } else {
    sub_13 = sub_14;
  };
  if (controller_v_395) {
    v_2216 = sub_13;
  } else {
    v_2216 = sub_9;
  };
  if (controller_blind_failed_recovered) {
    sub_8 = sub_9;
  } else {
    sub_8 = v_2216;
  };
  v_2210 = (controller_ck_17_1&&sub_12);
  v_2208 = !(controller_ck_17_1);
  v_2209 = (v_2208&&sub_12);
  if (controller_cleaner) {
    sub_20 = v_2209;
  } else {
    sub_20 = v_2210;
  };
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_25 = false;
  if (controller_worker) {
    v_2206 = sub_25;
    sub_24 = sub_20;
  } else {
    v_2206 = sub_20;
    sub_24 = sub_25;
  };
  if (controller_ck_15_1) {
    sub_23 = v_2206;
  } else {
    sub_23 = sub_24;
  };
  if (controller_change_shift) {
    v_2207 = sub_23;
    sub_22 = sub_19;
  } else {
    v_2207 = sub_19;
    sub_22 = sub_23;
  };
  if (controller_ck_1) {
    sub_21 = v_2207;
  } else {
    sub_21 = sub_22;
  };
  if (controller_v_395) {
    v_2217 = sub_21;
  } else {
    v_2217 = sub_18;
  };
  if (controller_blind_failed_recovered) {
    v_2218 = sub_18;
  } else {
    v_2218 = v_2217;
  };
  if (controller_ck_11_1) {
    sub_7 = v_2218;
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
    v_2219 = sub_7;
  } else {
    v_2219 = sub_30;
  };
  if (controller_v_448) {
    sub_5 = v_2219;
  } else {
    sub_5 = sub_6;
  };
  if (controller_ck_17_1) {
    v_2203 = sub_12;
    v_2202 = false;
  } else {
    v_2203 = false;
    v_2202 = sub_12;
  };
  if (controller_cleaner) {
    sub_38 = v_2202;
  } else {
    sub_38 = v_2203;
  };
  sub_37 = sub_38;
  if (controller_worker) {
    v_2201 = sub_38;
    sub_40 = false;
  } else {
    v_2201 = false;
    sub_40 = sub_38;
  };
  if (controller_ck_15_1) {
    sub_39 = v_2201;
  } else {
    sub_39 = sub_40;
  };
  if (controller_change_shift) {
    v_2204 = sub_39;
    sub_36 = sub_37;
  } else {
    v_2204 = sub_37;
    sub_36 = sub_39;
  };
  if (controller_ck_1) {
    sub_35 = v_2204;
  } else {
    sub_35 = sub_36;
  };
  if (controller_change_shift) {
    v_2200 = false;
    sub_42 = sub_37;
  } else {
    v_2200 = sub_37;
    sub_42 = false;
  };
  if (controller_ck_1) {
    sub_41 = v_2200;
  } else {
    sub_41 = sub_42;
  };
  if (controller_v_395) {
    v_2205 = sub_41;
  } else {
    v_2205 = sub_35;
  };
  if (controller_blind_failed_recovered) {
    sub_34 = sub_35;
  } else {
    sub_34 = v_2205;
  };
  if (controller_v_450) {
    sub_4 = sub_34;
  } else {
    sub_4 = sub_5;
  };
  sub_44 = sub_30;
  if (controller_v_448) {
    sub_43 = sub_6;
  } else {
    sub_43 = sub_44;
  };
  if (controller_air_failed_recovered) {
    sub_46 = sub_30;
  } else {
    sub_46 = sub_26;
  };
  if (controller_v_448) {
    sub_45 = sub_44;
  } else {
    sub_45 = sub_46;
  };
  if (controller_v_450) {
    v_2220 = sub_45;
  } else {
    v_2220 = sub_43;
  };
  if (controller_v_449) {
    sub_3 = v_2220;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  sub_52 = sub_13;
  if (controller_ck_11_1) {
    sub_51 = sub_21;
  } else {
    sub_51 = sub_52;
  };
  if (controller_air_failed_recovered) {
    v = sub_51;
    sub_50 = sub_51;
  } else {
    v = sub_30;
    sub_50 = sub_26;
  };
  if (controller_v_448) {
    sub_49 = v;
  } else {
    sub_49 = sub_50;
  };
  sub_53 = sub_41;
  if (controller_v_450) {
    sub_48 = sub_53;
  } else {
    sub_48 = sub_49;
  };
  if (controller_v_448) {
    sub_54 = sub_50;
  } else {
    sub_54 = sub_44;
  };
  if (controller_v_450) {
    v_2199 = sub_45;
  } else {
    v_2199 = sub_54;
  };
  if (controller_v_449) {
    sub_47 = v_2199;
  } else {
    sub_47 = sub_48;
  };
  if (controller_v_411) {
    v_2221 = sub_47;
  } else {
    v_2221 = sub_2;
  };
  if (controller_light_failed_recovered) {
    sub_1 = sub_2;
  } else {
    sub_1 = v_2221;
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
                                                       int controller_v_450,
                                                       int controller_v_449,
                                                       int controller_v_448,
                                                       int controller_pnr_2,
                                                       int controller_v_411,
                                                       int controller_v_410,
                                                       int controller_pnr_1,
                                                       int controller_v_395,
                                                       int controller_v_394,
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
  controller_v_450, controller_v_449, controller_v_448, controller_pnr_2,
  controller_v_411, controller_v_410, controller_pnr_1, controller_v_395,
  controller_v_394, controller_pnr, p_controller_c_blind_2,
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
                                                                    controller_v_450,
                                                                    controller_v_449,
                                                                    controller_v_448,
                                                                    controller_pnr_2,
                                                                    controller_v_411,
                                                                    controller_v_410,
                                                                    controller_pnr_1,
                                                                    controller_v_395,
                                                                    controller_v_394,
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
  controller_v_450, controller_v_449, controller_v_448, controller_pnr_2,
  controller_v_411, controller_v_410, controller_pnr_1, controller_v_395,
  controller_v_394, controller_pnr, p_controller_c_blind_2,
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
  controller_v_450, controller_v_449, controller_v_448, controller_pnr_2,
  controller_v_411, controller_v_410, controller_pnr_1, controller_v_395,
  controller_v_394, controller_pnr, p_controller_c_blind_2,
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
  controller_v_450, controller_v_449, controller_v_448, controller_pnr_2,
  controller_v_411, controller_v_410, controller_pnr_1, controller_v_395,
  controller_v_394, controller_pnr, p_controller_c_blind_2,
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
  controller_v_450, controller_v_449, controller_v_448, controller_pnr_2,
  controller_v_411, controller_v_410, controller_pnr_1, controller_v_395,
  controller_v_394, controller_pnr, p_controller_c_blind_2,
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
  controller_v_450, controller_v_449, controller_v_448, controller_pnr_2,
  controller_v_411, controller_v_410, controller_pnr_1, controller_v_395,
  controller_v_394, controller_pnr, p_controller_c_blind_2,
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
  controller_v_450, controller_v_449, controller_v_448, controller_pnr_2,
  controller_v_411, controller_v_410, controller_pnr_1, controller_v_395,
  controller_v_394, controller_pnr, p_controller_c_blind_2,
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
  controller_v_450, controller_v_449, controller_v_448, controller_pnr_2,
  controller_v_411, controller_v_410, controller_pnr_1, controller_v_395,
  controller_v_394, controller_pnr, p_controller_c_blind_2,
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
  controller_v_450, controller_v_449, controller_v_448, controller_pnr_2,
  controller_v_411, controller_v_410, controller_pnr_1, controller_v_395,
  controller_v_394, controller_pnr, p_controller_c_blind_2,
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

