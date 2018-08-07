/* --- Generated the 6/8/2018 at 21:17 --- */
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
  int controller_pnr_22, int controller_ck_35_1, int controller_pnr_21,
  int controller_ck_37_1, int controller_pnr_20, int controller_ck_40_1,
  int controller_pnr_19, int controller_ck_42_1, int controller_pnr_18,
  int controller_ck_45_1, int controller_pnr_17, int controller_ck_47_1,
  int controller_pnr_16, int controller_v_277, int controller_v_276,
  int controller_pnr_15, int controller_ck_52_1, int controller_pnr_14,
  int controller_ck_55_1, int controller_pnr_13, int controller_ck_57_1,
  int controller_pnr_12, int controller_ck_60_1, int controller_pnr_11,
  int controller_ck_62_1, int controller_pnr_10, int controller_ck_65_1,
  int controller_pnr_9, int controller_ck_67_1, int controller_pnr_8,
  int controller_ck_70_1, int controller_pnr_7, int controller_ck_72_1,
  int controller_pnr, int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_light_2,
  int controller_c_blind_1, int controller_c_light_1,
  int controller_c_closet, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_blind_2_out* _out) {
  
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
  int sub_591;
  int sub_592;
  int sub_593;
  int sub_594;
  int sub_595;
  int sub_596;
  int sub_597;
  int sub_598;
  int sub_599;
  int sub_600;
  int sub_601;
  int sub_602;
  int sub_603;
  int sub_604;
  int sub_605;
  int sub_606;
  int sub_607;
  int sub_608;
  int sub_609;
  int sub_610;
  int sub_611;
  int sub_612;
  int sub_613;
  int sub_614;
  int sub_615;
  int sub_616;
  int sub_617;
  int sub_618;
  int sub_619;
  int sub_620;
  int sub_621;
  int sub_622;
  int sub_623;
  int sub_624;
  int sub_625;
  int sub_626;
  int sub_627;
  int sub_628;
  int sub_629;
  int sub_630;
  int sub_631;
  int sub_632;
  int sub_633;
  int sub_634;
  int sub_635;
  int sub_636;
  int sub_637;
  int sub_638;
  int sub_639;
  int sub_640;
  int sub_641;
  int sub_642;
  int sub_643;
  int sub_644;
  int sub_645;
  int sub_646;
  int sub_647;
  int sub_648;
  int sub_649;
  int sub_650;
  int sub_651;
  int sub_652;
  int sub_653;
  int sub_654;
  int sub_655;
  int sub_656;
  int sub_657;
  int sub_658;
  int sub_659;
  int sub_660;
  int sub_661;
  int sub_662;
  int sub_663;
  int sub_664;
  int sub_665;
  int sub_666;
  int sub_667;
  int sub_668;
  int sub_669;
  int sub_670;
  int sub_671;
  int sub_672;
  int sub_673;
  int sub_674;
  int sub_675;
  int sub_676;
  int sub_677;
  int sub_678;
  int sub_679;
  int sub_680;
  int sub_681;
  int sub_682;
  int sub_683;
  int sub_684;
  int sub_685;
  int sub_686;
  int sub_687;
  int sub_688;
  int sub_689;
  int sub_690;
  int sub_691;
  int sub_692;
  int sub_693;
  int sub_694;
  int sub_695;
  int sub_696;
  int sub_697;
  int sub_698;
  int sub_699;
  int sub_700;
  int sub_701;
  int sub_702;
  int sub_703;
  int sub_704;
  int sub_705;
  int sub_706;
  int sub_707;
  int sub_708;
  int sub_709;
  int sub_710;
  int sub_711;
  int sub_712;
  int sub_713;
  int sub_714;
  int sub_715;
  int sub_716;
  int sub_717;
  int sub_718;
  int sub_719;
  int sub_720;
  int sub_721;
  int sub_722;
  int sub_723;
  int sub_724;
  int sub_725;
  int sub_726;
  int sub_727;
  int sub_728;
  int sub_729;
  int sub_730;
  int sub_731;
  int sub_732;
  int sub_733;
  int sub_734;
  int sub_735;
  int sub_736;
  int sub_737;
  int sub_738;
  int sub_739;
  int sub_740;
  int sub_741;
  int sub_742;
  int sub_743;
  int sub_744;
  int sub_745;
  int sub_746;
  int sub_747;
  int sub_748;
  int sub_749;
  int sub_750;
  int sub_751;
  int sub_752;
  int sub_753;
  int sub_754;
  int sub_755;
  int sub_756;
  int sub_757;
  int sub_758;
  int sub_759;
  int sub_760;
  int sub_761;
  int sub_762;
  int sub_763;
  int sub_764;
  int sub_765;
  int sub_766;
  int sub_767;
  int sub_768;
  int sub_769;
  int sub_770;
  int sub_771;
  int sub_772;
  int sub_773;
  int sub_774;
  int sub_775;
  int sub_776;
  int sub_777;
  int sub_778;
  int sub_779;
  v_308 = (controller_pc_failed_recovered&&false);
  v_307 = !(controller_pc_failed_recovered);
  sub_27 = (v_307&&false);
  if (controller_ck_47_1) {
    sub_26 = v_308;
  } else {
    sub_26 = sub_27;
  };
  sub_28 = false;
  if (controller_c_pc) {
    sub_25 = sub_26;
    sub_29 = sub_28;
  } else {
    sub_25 = sub_28;
    sub_29 = sub_26;
  };
  if (controller_ck_45_1) {
    sub_24 = sub_29;
  } else {
    sub_24 = sub_25;
  };
  if (controller_door_failed_recovered) {
    v_309 = false;
    sub_23 = sub_24;
  } else {
    v_309 = sub_24;
    sub_23 = false;
  };
  if (controller_ck_42_1) {
    sub_22 = v_309;
  } else {
    sub_22 = sub_23;
  };
  sub_30 = sub_24;
  if (controller_c_door) {
    sub_21 = sub_22;
    sub_31 = sub_30;
  } else {
    sub_21 = sub_30;
    sub_31 = sub_22;
  };
  if (controller_ck_40_1) {
    sub_20 = sub_31;
  } else {
    sub_20 = sub_21;
  };
  if (controller_window_failed_recovered) {
    v_310 = false;
    sub_32 = sub_20;
  } else {
    v_310 = sub_20;
    sub_32 = false;
  };
  if (controller_ck_57_1) {
    v_311 = v_310;
  } else {
    v_311 = sub_32;
  };
  if (controller_c_window) {
    sub_19 = sub_20;
  } else {
    sub_19 = v_311;
  };
  if (controller_ck_40_1) {
    sub_35 = sub_21;
  } else {
    sub_35 = sub_31;
  };
  sub_34 = sub_35;
  sub_37 = sub_22;
  if (controller_window_failed_recovered) {
    v_305 = sub_37;
    sub_36 = sub_35;
  } else {
    v_305 = sub_35;
    sub_36 = sub_37;
  };
  if (controller_ck_57_1) {
    v_306 = v_305;
  } else {
    v_306 = sub_36;
  };
  if (controller_c_window) {
    sub_33 = sub_34;
  } else {
    sub_33 = v_306;
  };
  if (controller_cleaner) {
    v_312 = sub_33;
    sub_18 = sub_19;
  } else {
    v_312 = sub_19;
    sub_18 = sub_33;
  };
  if (controller_ck_37_1) {
    sub_17 = v_312;
  } else {
    sub_17 = sub_18;
  };
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  if (controller_cleaner) {
    sub_43 = sub_19;
    sub_44 = false;
  } else {
    sub_43 = false;
    sub_44 = sub_19;
  };
  if (controller_ck_37_1) {
    sub_42 = sub_44;
  } else {
    sub_42 = sub_43;
  };
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  if (controller_cleaner) {
    v_304 = sub_33;
    sub_49 = false;
  } else {
    v_304 = false;
    sub_49 = sub_33;
  };
  if (controller_ck_37_1) {
    sub_48 = v_304;
  } else {
    sub_48 = sub_49;
  };
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  if (controller_c_closet) {
    sub_38 = sub_39;
  } else {
    sub_38 = sub_45;
  };
  if (controller_closet_failed_recovered) {
    v_313 = sub_38;
    sub_12 = sub_13;
  } else {
    v_313 = sub_13;
    sub_12 = sub_38;
  };
  if (controller_ck_62_1) {
    sub_11 = v_313;
  } else {
    sub_11 = sub_12;
  };
  sub_52 = sub_39;
  if (controller_c_closet) {
    sub_53 = sub_39;
  } else {
    sub_53 = false;
  };
  if (controller_closet_failed_recovered) {
    v_303 = sub_53;
    sub_51 = sub_52;
  } else {
    v_303 = sub_52;
    sub_51 = sub_53;
  };
  if (controller_ck_62_1) {
    sub_50 = v_303;
  } else {
    sub_50 = sub_51;
  };
  if (controller_blind_failed_recovered) {
    v_314 = sub_50;
    sub_10 = sub_11;
  } else {
    v_314 = sub_11;
    sub_10 = sub_50;
  };
  if (controller_ck_72_1) {
    sub_9 = v_314;
  } else {
    sub_9 = sub_10;
  };
  if (controller_window_failed_recovered) {
    v_300 = false;
    sub_65 = sub_35;
  } else {
    v_300 = sub_35;
    sub_65 = false;
  };
  if (controller_ck_57_1) {
    sub_64 = v_300;
  } else {
    sub_64 = sub_65;
  };
  if (controller_c_window) {
    sub_63 = sub_64;
  } else {
    sub_63 = sub_34;
  };
  if (controller_cleaner) {
    v_301 = sub_63;
    sub_62 = false;
  } else {
    v_301 = false;
    sub_62 = sub_63;
  };
  if (controller_ck_37_1) {
    sub_61 = v_301;
  } else {
    sub_61 = sub_62;
  };
  sub_60 = sub_61;
  sub_59 = sub_60;
  sub_58 = sub_59;
  sub_57 = sub_58;
  if (controller_c_closet) {
    sub_66 = false;
  } else {
    sub_66 = sub_58;
  };
  if (controller_closet_failed_recovered) {
    v_302 = sub_66;
    sub_56 = sub_57;
  } else {
    v_302 = sub_57;
    sub_56 = sub_66;
  };
  if (controller_ck_62_1) {
    sub_55 = v_302;
  } else {
    sub_55 = sub_56;
  };
  if (controller_blind_failed_recovered) {
    v_315 = sub_55;
    sub_54 = sub_11;
  } else {
    v_315 = sub_11;
    sub_54 = sub_55;
  };
  if (controller_ck_72_1) {
    v_316 = v_315;
  } else {
    v_316 = sub_54;
  };
  if (controller_ck_70_1) {
    v_317 = v_316;
  } else {
    v_317 = sub_9;
  };
  v_292 = !(controller_pc_failed_recovered);
  v_293 = (v_292||false);
  sub_87 = (controller_pc_failed_recovered||false);
  if (controller_ck_47_1) {
    sub_86 = v_293;
  } else {
    sub_86 = sub_87;
  };
  sub_88 = true;
  if (controller_c_pc) {
    sub_85 = sub_86;
    sub_89 = sub_88;
  } else {
    sub_85 = sub_88;
    sub_89 = sub_86;
  };
  if (controller_ck_45_1) {
    sub_84 = sub_89;
  } else {
    sub_84 = sub_85;
  };
  sub_83 = sub_84;
  if (controller_door_failed_recovered) {
    v_291 = false;
    sub_91 = sub_84;
  } else {
    v_291 = sub_84;
    sub_91 = false;
  };
  if (controller_ck_42_1) {
    sub_90 = v_291;
  } else {
    sub_90 = sub_91;
  };
  if (controller_c_door) {
    sub_82 = sub_83;
    sub_92 = sub_90;
  } else {
    sub_82 = sub_90;
    sub_92 = sub_83;
  };
  if (controller_ck_40_1) {
    sub_81 = sub_92;
  } else {
    sub_81 = sub_82;
  };
  if (controller_window_failed_recovered) {
    v_294 = false;
    sub_80 = sub_81;
  } else {
    v_294 = sub_81;
    sub_80 = false;
  };
  if (controller_ck_57_1) {
    sub_79 = v_294;
  } else {
    sub_79 = sub_80;
  };
  sub_93 = sub_81;
  if (controller_c_window) {
    sub_78 = sub_79;
  } else {
    sub_78 = sub_93;
  };
  if (controller_cleaner) {
    v_295 = sub_78;
    sub_77 = sub_19;
  } else {
    v_295 = sub_19;
    sub_77 = sub_78;
  };
  if (controller_ck_37_1) {
    sub_76 = v_295;
  } else {
    sub_76 = sub_77;
  };
  sub_75 = sub_76;
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_72 = sub_73;
  if (controller_cleaner) {
    v_290 = sub_78;
    sub_99 = false;
  } else {
    v_290 = false;
    sub_99 = sub_78;
  };
  if (controller_ck_37_1) {
    sub_98 = v_290;
  } else {
    sub_98 = sub_99;
  };
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  if (controller_c_closet) {
    sub_94 = sub_39;
  } else {
    sub_94 = sub_95;
  };
  if (controller_closet_failed_recovered) {
    v_296 = sub_94;
    sub_71 = sub_72;
  } else {
    v_296 = sub_72;
    sub_71 = sub_94;
  };
  if (controller_ck_62_1) {
    sub_70 = v_296;
  } else {
    sub_70 = sub_71;
  };
  if (controller_blind_failed_recovered) {
    v_297 = sub_70;
    sub_69 = sub_11;
  } else {
    v_297 = sub_11;
    sub_69 = sub_70;
  };
  if (controller_ck_72_1) {
    sub_68 = v_297;
  } else {
    sub_68 = sub_69;
  };
  if (controller_ck_40_1) {
    sub_110 = sub_82;
  } else {
    sub_110 = sub_92;
  };
  if (controller_window_failed_recovered) {
    v_286 = false;
    sub_111 = sub_110;
  } else {
    v_286 = sub_110;
    sub_111 = false;
  };
  if (controller_ck_57_1) {
    v_287 = v_286;
  } else {
    v_287 = sub_111;
  };
  if (controller_c_window) {
    sub_109 = sub_110;
  } else {
    sub_109 = v_287;
  };
  if (controller_cleaner) {
    v_288 = sub_63;
    sub_108 = sub_109;
  } else {
    v_288 = sub_109;
    sub_108 = sub_63;
  };
  if (controller_ck_37_1) {
    sub_107 = v_288;
  } else {
    sub_107 = sub_108;
  };
  sub_106 = sub_107;
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  if (controller_cleaner) {
    sub_117 = sub_109;
    sub_118 = false;
  } else {
    sub_117 = false;
    sub_118 = sub_109;
  };
  if (controller_ck_37_1) {
    sub_116 = sub_118;
  } else {
    sub_116 = sub_117;
  };
  sub_115 = sub_116;
  sub_114 = sub_115;
  sub_113 = sub_114;
  if (controller_c_closet) {
    sub_112 = sub_113;
  } else {
    sub_112 = sub_58;
  };
  if (controller_closet_failed_recovered) {
    v_289 = sub_112;
    sub_102 = sub_103;
  } else {
    v_289 = sub_103;
    sub_102 = sub_112;
  };
  if (controller_ck_62_1) {
    sub_101 = v_289;
  } else {
    sub_101 = sub_102;
  };
  if (controller_blind_failed_recovered) {
    v_298 = sub_101;
    sub_100 = sub_11;
  } else {
    v_298 = sub_11;
    sub_100 = sub_101;
  };
  if (controller_ck_72_1) {
    v_299 = v_298;
  } else {
    v_299 = sub_100;
  };
  if (controller_ck_70_1) {
    sub_67 = v_299;
  } else {
    sub_67 = sub_68;
  };
  if (controller_blind_switch) {
    v_318 = v_317;
  } else {
    v_318 = sub_67;
  };
  if (controller_c_blind_1) {
    sub_8 = v_318;
  } else {
    sub_8 = sub_67;
  };
  sub_121 = sub_50;
  if (controller_change_shift) {
    v_280 = false;
    sub_129 = sub_61;
  } else {
    v_280 = sub_61;
    sub_129 = false;
  };
  if (controller_ck_1) {
    sub_128 = v_280;
  } else {
    sub_128 = sub_129;
  };
  sub_127 = sub_128;
  sub_126 = sub_127;
  sub_125 = sub_126;
  if (controller_c_closet) {
    sub_130 = false;
  } else {
    sub_130 = sub_126;
  };
  if (controller_closet_failed_recovered) {
    v_281 = sub_130;
    sub_124 = sub_125;
  } else {
    v_281 = sub_125;
    sub_124 = sub_130;
  };
  if (controller_ck_62_1) {
    sub_123 = v_281;
  } else {
    sub_123 = sub_124;
  };
  if (controller_blind_failed_recovered) {
    v_282 = sub_123;
    sub_122 = sub_50;
  } else {
    v_282 = sub_50;
    sub_122 = sub_123;
  };
  if (controller_ck_72_1) {
    v_283 = v_282;
  } else {
    v_283 = sub_122;
  };
  if (controller_ck_70_1) {
    v_284 = v_283;
  } else {
    v_284 = sub_121;
  };
  if (controller_change_shift) {
    v_275 = sub_42;
    sub_140 = sub_76;
  } else {
    v_275 = sub_76;
    sub_140 = sub_42;
  };
  if (controller_ck_1) {
    sub_139 = v_275;
  } else {
    sub_139 = sub_140;
  };
  sub_138 = sub_139;
  sub_137 = sub_138;
  sub_136 = sub_137;
  if (controller_change_shift) {
    v_274 = false;
    sub_145 = sub_98;
  } else {
    v_274 = sub_98;
    sub_145 = false;
  };
  if (controller_ck_1) {
    sub_144 = v_274;
  } else {
    sub_144 = sub_145;
  };
  sub_143 = sub_144;
  sub_142 = sub_143;
  if (controller_c_closet) {
    sub_141 = sub_39;
  } else {
    sub_141 = sub_142;
  };
  if (controller_closet_failed_recovered) {
    v_276 = sub_141;
    sub_135 = sub_136;
  } else {
    v_276 = sub_136;
    sub_135 = sub_141;
  };
  if (controller_ck_62_1) {
    sub_134 = v_276;
  } else {
    sub_134 = sub_135;
  };
  if (controller_blind_failed_recovered) {
    v_277 = sub_134;
    sub_133 = sub_50;
  } else {
    v_277 = sub_50;
    sub_133 = sub_134;
  };
  if (controller_ck_72_1) {
    sub_132 = v_277;
  } else {
    sub_132 = sub_133;
  };
  if (controller_change_shift) {
    v_272 = sub_116;
    sub_153 = sub_107;
  } else {
    v_272 = sub_107;
    sub_153 = sub_116;
  };
  if (controller_ck_1) {
    sub_152 = v_272;
  } else {
    sub_152 = sub_153;
  };
  sub_151 = sub_152;
  sub_150 = sub_151;
  sub_149 = sub_150;
  if (controller_c_closet) {
    sub_154 = sub_113;
  } else {
    sub_154 = sub_126;
  };
  if (controller_closet_failed_recovered) {
    v_273 = sub_154;
    sub_148 = sub_149;
  } else {
    v_273 = sub_149;
    sub_148 = sub_154;
  };
  if (controller_ck_62_1) {
    sub_147 = v_273;
  } else {
    sub_147 = sub_148;
  };
  if (controller_blind_failed_recovered) {
    v_278 = sub_147;
    sub_146 = sub_50;
  } else {
    v_278 = sub_50;
    sub_146 = sub_147;
  };
  if (controller_ck_72_1) {
    v_279 = v_278;
  } else {
    v_279 = sub_146;
  };
  if (controller_ck_70_1) {
    sub_131 = v_279;
  } else {
    sub_131 = sub_132;
  };
  if (controller_blind_switch) {
    v_285 = v_284;
  } else {
    v_285 = sub_131;
  };
  if (controller_c_blind_1) {
    sub_120 = v_285;
  } else {
    sub_120 = sub_131;
  };
  sub_160 = sub_45;
  if (controller_c_closet) {
    sub_161 = false;
  } else {
    sub_161 = sub_45;
  };
  if (controller_closet_failed_recovered) {
    v_268 = sub_161;
    sub_159 = sub_160;
  } else {
    v_268 = sub_160;
    sub_159 = sub_161;
  };
  if (controller_ck_62_1) {
    sub_158 = v_268;
  } else {
    sub_158 = sub_159;
  };
  sub_170 = sub_64;
  if (controller_cleaner) {
    v_266 = sub_170;
    sub_169 = false;
  } else {
    v_266 = false;
    sub_169 = sub_170;
  };
  if (controller_ck_37_1) {
    sub_168 = v_266;
  } else {
    sub_168 = sub_169;
  };
  sub_167 = sub_168;
  sub_166 = sub_167;
  sub_165 = sub_166;
  sub_164 = sub_165;
  if (controller_c_closet) {
    sub_171 = false;
  } else {
    sub_171 = sub_165;
  };
  if (controller_closet_failed_recovered) {
    v_267 = sub_171;
    sub_163 = sub_164;
  } else {
    v_267 = sub_164;
    sub_163 = sub_171;
  };
  if (controller_ck_62_1) {
    sub_162 = v_267;
  } else {
    sub_162 = sub_163;
  };
  if (controller_blind_failed_recovered) {
    v_269 = sub_162;
    sub_157 = sub_158;
  } else {
    v_269 = sub_158;
    sub_157 = sub_162;
  };
  if (controller_ck_72_1) {
    sub_156 = v_269;
  } else {
    sub_156 = sub_157;
  };
  if (controller_blind_failed_recovered) {
    v_265 = sub_55;
    sub_173 = sub_158;
  } else {
    v_265 = sub_158;
    sub_173 = sub_55;
  };
  if (controller_ck_72_1) {
    sub_172 = v_265;
  } else {
    sub_172 = sub_173;
  };
  if (controller_ck_70_1) {
    v_270 = sub_172;
  } else {
    v_270 = sub_156;
  };
  if (controller_window_failed_recovered) {
    sub_186 = sub_35;
    sub_187 = sub_81;
  } else {
    sub_186 = sub_81;
    sub_187 = sub_35;
  };
  if (controller_ck_57_1) {
    v_261 = sub_187;
  } else {
    v_261 = sub_186;
  };
  if (controller_c_window) {
    sub_185 = sub_64;
  } else {
    sub_185 = v_261;
  };
  if (controller_cleaner) {
    v_262 = sub_185;
    sub_184 = false;
  } else {
    v_262 = false;
    sub_184 = sub_185;
  };
  if (controller_ck_37_1) {
    sub_183 = v_262;
  } else {
    sub_183 = sub_184;
  };
  sub_182 = sub_183;
  sub_181 = sub_182;
  sub_180 = sub_181;
  sub_179 = sub_180;
  if (controller_c_closet) {
    sub_188 = false;
  } else {
    sub_188 = sub_180;
  };
  if (controller_closet_failed_recovered) {
    v_263 = sub_188;
    sub_178 = sub_179;
  } else {
    v_263 = sub_179;
    sub_178 = sub_188;
  };
  if (controller_ck_62_1) {
    sub_177 = v_263;
  } else {
    sub_177 = sub_178;
  };
  if (controller_blind_failed_recovered) {
    v_264 = sub_177;
    sub_176 = sub_158;
  } else {
    v_264 = sub_158;
    sub_176 = sub_177;
  };
  if (controller_ck_72_1) {
    sub_175 = v_264;
  } else {
    sub_175 = sub_176;
  };
  if (controller_ck_70_1) {
    sub_174 = sub_172;
  } else {
    sub_174 = sub_175;
  };
  if (controller_blind_switch) {
    v_271 = v_270;
  } else {
    v_271 = sub_174;
  };
  if (controller_c_blind_1) {
    sub_155 = v_271;
  } else {
    sub_155 = sub_174;
  };
  if (controller_ck_65_1) {
    sub_119 = sub_155;
  } else {
    sub_119 = sub_120;
  };
  if (controller_light_failed_recovered) {
    v_319 = sub_119;
    sub_7 = sub_8;
  } else {
    v_319 = sub_8;
    sub_7 = sub_119;
  };
  if (controller_ck_67_1) {
    sub_6 = v_319;
  } else {
    sub_6 = sub_7;
  };
  if (controller_ck_65_1) {
    sub_191 = sub_120;
  } else {
    sub_191 = sub_155;
  };
  if (controller_light_failed_recovered) {
    v_259 = sub_191;
    sub_190 = sub_8;
  } else {
    v_259 = sub_8;
    sub_190 = sub_191;
  };
  if (controller_ck_67_1) {
    v_260 = v_259;
  } else {
    v_260 = sub_190;
  };
  if (controller_c_light_2) {
    sub_189 = v_260;
  } else {
    sub_189 = sub_6;
  };
  if (controller_light_switch) {
    v_320 = sub_6;
  } else {
    v_320 = sub_189;
  };
  if (controller_c_light_1) {
    sub_5 = v_320;
  } else {
    sub_5 = sub_189;
  };
  if (controller_v_277) {
    sub_202 = false;
  } else {
    sub_202 = sub_41;
  };
  if (controller_ck_37_1) {
    sub_205 = sub_43;
  } else {
    sub_205 = sub_44;
  };
  sub_204 = sub_205;
  if (controller_v_277) {
    sub_203 = false;
  } else {
    sub_203 = sub_204;
  };
  if (controller_v_276) {
    v_249 = sub_203;
  } else {
    v_249 = sub_202;
  };
  if (controller_v_277) {
    v_248 = sub_41;
  } else {
    v_248 = false;
  };
  if (controller_v_276) {
    sub_206 = v_248;
  } else {
    sub_206 = false;
  };
  if (controller_c_air_2) {
    v_250 = v_249;
  } else {
    v_250 = sub_206;
  };
  if (controller_v_277) {
    v_247 = sub_204;
  } else {
    v_247 = sub_41;
  };
  if (controller_v_276) {
    sub_207 = v_247;
  } else {
    sub_207 = sub_203;
  };
  if (controller_c_air_1) {
    sub_201 = v_250;
  } else {
    sub_201 = sub_207;
  };
  sub_200 = sub_201;
  if (controller_v_276) {
    v_245 = false;
  } else {
    v_245 = sub_202;
  };
  if (controller_c_air_2) {
    v_246 = v_245;
  } else {
    v_246 = sub_206;
  };
  if (controller_v_276) {
    sub_210 = sub_202;
  } else {
    sub_210 = false;
  };
  if (controller_c_air_1) {
    sub_209 = v_246;
  } else {
    sub_209 = sub_210;
  };
  if (controller_v_276) {
    v_243 = sub_203;
  } else {
    v_243 = false;
  };
  if (controller_c_air_2) {
    v_244 = v_243;
  } else {
    v_244 = false;
  };
  if (controller_v_277) {
    v_242 = sub_204;
  } else {
    v_242 = false;
  };
  if (controller_v_276) {
    sub_212 = v_242;
  } else {
    sub_212 = sub_203;
  };
  if (controller_c_air_1) {
    sub_211 = v_244;
  } else {
    sub_211 = sub_212;
  };
  if (controller_c_closet) {
    sub_208 = sub_209;
  } else {
    sub_208 = sub_211;
  };
  if (controller_closet_failed_recovered) {
    v_251 = sub_208;
    sub_199 = sub_200;
  } else {
    v_251 = sub_200;
    sub_199 = sub_208;
  };
  if (controller_ck_62_1) {
    sub_198 = v_251;
  } else {
    sub_198 = sub_199;
  };
  sub_215 = sub_209;
  if (controller_c_closet) {
    sub_216 = sub_209;
  } else {
    sub_216 = false;
  };
  if (controller_closet_failed_recovered) {
    v_241 = sub_216;
    sub_214 = sub_215;
  } else {
    v_241 = sub_215;
    sub_214 = sub_216;
  };
  if (controller_ck_62_1) {
    sub_213 = v_241;
  } else {
    sub_213 = sub_214;
  };
  if (controller_blind_failed_recovered) {
    v_252 = sub_213;
    sub_197 = sub_198;
  } else {
    v_252 = sub_198;
    sub_197 = sub_213;
  };
  if (controller_ck_72_1) {
    sub_196 = v_252;
  } else {
    sub_196 = sub_197;
  };
  sub_220 = sub_211;
  if (controller_c_closet) {
    sub_221 = false;
  } else {
    sub_221 = sub_211;
  };
  if (controller_closet_failed_recovered) {
    v_240 = sub_221;
    sub_219 = sub_220;
  } else {
    v_240 = sub_220;
    sub_219 = sub_221;
  };
  if (controller_ck_62_1) {
    sub_218 = v_240;
  } else {
    sub_218 = sub_219;
  };
  if (controller_blind_failed_recovered) {
    v_253 = sub_218;
    sub_217 = sub_198;
  } else {
    v_253 = sub_198;
    sub_217 = sub_218;
  };
  if (controller_ck_72_1) {
    v_254 = v_253;
  } else {
    v_254 = sub_217;
  };
  if (controller_ck_70_1) {
    v_255 = v_254;
  } else {
    v_255 = sub_196;
  };
  if (controller_ck_37_1) {
    sub_231 = sub_117;
  } else {
    sub_231 = sub_118;
  };
  sub_230 = sub_231;
  if (controller_v_277) {
    sub_229 = false;
  } else {
    sub_229 = sub_230;
  };
  if (controller_v_276) {
    v_234 = sub_229;
  } else {
    v_234 = sub_202;
  };
  if (controller_c_air_2) {
    v_235 = v_234;
  } else {
    v_235 = sub_206;
  };
  if (controller_v_277) {
    v_233 = sub_230;
  } else {
    v_233 = sub_41;
  };
  if (controller_v_276) {
    sub_232 = v_233;
  } else {
    sub_232 = sub_229;
  };
  if (controller_c_air_1) {
    sub_228 = v_235;
  } else {
    sub_228 = sub_232;
  };
  sub_227 = sub_228;
  if (controller_v_276) {
    v_231 = sub_229;
  } else {
    v_231 = false;
  };
  if (controller_c_air_2) {
    v_232 = v_231;
  } else {
    v_232 = false;
  };
  if (controller_v_277) {
    v_230 = sub_230;
  } else {
    v_230 = false;
  };
  if (controller_v_276) {
    sub_235 = v_230;
  } else {
    sub_235 = sub_229;
  };
  if (controller_c_air_1) {
    sub_234 = v_232;
  } else {
    sub_234 = sub_235;
  };
  if (controller_c_closet) {
    sub_233 = sub_209;
  } else {
    sub_233 = sub_234;
  };
  if (controller_closet_failed_recovered) {
    v_236 = sub_233;
    sub_226 = sub_227;
  } else {
    v_236 = sub_227;
    sub_226 = sub_233;
  };
  if (controller_ck_62_1) {
    sub_225 = v_236;
  } else {
    sub_225 = sub_226;
  };
  if (controller_blind_failed_recovered) {
    v_237 = sub_225;
    sub_224 = sub_198;
  } else {
    v_237 = sub_198;
    sub_224 = sub_225;
  };
  if (controller_ck_72_1) {
    sub_223 = v_237;
  } else {
    sub_223 = sub_224;
  };
  if (controller_v_277) {
    sub_241 = false;
  } else {
    sub_241 = sub_115;
  };
  if (controller_v_276) {
    v_227 = sub_203;
  } else {
    v_227 = sub_241;
  };
  if (controller_v_277) {
    v_226 = sub_115;
  } else {
    v_226 = false;
  };
  if (controller_v_276) {
    sub_242 = v_226;
  } else {
    sub_242 = false;
  };
  if (controller_c_air_2) {
    v_228 = v_227;
  } else {
    v_228 = sub_242;
  };
  if (controller_v_277) {
    v_225 = sub_204;
  } else {
    v_225 = sub_115;
  };
  if (controller_v_276) {
    sub_243 = v_225;
  } else {
    sub_243 = sub_203;
  };
  if (controller_c_air_1) {
    sub_240 = v_228;
  } else {
    sub_240 = sub_243;
  };
  sub_239 = sub_240;
  if (controller_v_276) {
    v_223 = false;
  } else {
    v_223 = sub_241;
  };
  if (controller_c_air_2) {
    v_224 = v_223;
  } else {
    v_224 = sub_242;
  };
  if (controller_v_276) {
    sub_246 = sub_241;
  } else {
    sub_246 = false;
  };
  if (controller_c_air_1) {
    sub_245 = v_224;
  } else {
    sub_245 = sub_246;
  };
  if (controller_c_closet) {
    sub_244 = sub_245;
  } else {
    sub_244 = sub_211;
  };
  if (controller_closet_failed_recovered) {
    v_229 = sub_244;
    sub_238 = sub_239;
  } else {
    v_229 = sub_239;
    sub_238 = sub_244;
  };
  if (controller_ck_62_1) {
    sub_237 = v_229;
  } else {
    sub_237 = sub_238;
  };
  if (controller_blind_failed_recovered) {
    v_238 = sub_237;
    sub_236 = sub_198;
  } else {
    v_238 = sub_198;
    sub_236 = sub_237;
  };
  if (controller_ck_72_1) {
    v_239 = v_238;
  } else {
    v_239 = sub_236;
  };
  if (controller_ck_70_1) {
    sub_222 = v_239;
  } else {
    sub_222 = sub_223;
  };
  if (controller_blind_switch) {
    v_256 = v_255;
  } else {
    v_256 = sub_222;
  };
  if (controller_c_blind_1) {
    sub_195 = v_256;
  } else {
    sub_195 = sub_222;
  };
  sub_249 = sub_213;
  if (controller_change_shift) {
    v_215 = false;
    sub_257 = sub_205;
  } else {
    v_215 = sub_205;
    sub_257 = false;
  };
  if (controller_ck_1) {
    sub_256 = v_215;
  } else {
    sub_256 = sub_257;
  };
  if (controller_v_277) {
    sub_255 = false;
  } else {
    sub_255 = sub_256;
  };
  if (controller_v_276) {
    v_216 = sub_255;
  } else {
    v_216 = false;
  };
  if (controller_c_air_2) {
    v_217 = v_216;
  } else {
    v_217 = false;
  };
  if (controller_v_277) {
    v_214 = sub_256;
  } else {
    v_214 = false;
  };
  if (controller_v_276) {
    sub_258 = v_214;
  } else {
    sub_258 = sub_255;
  };
  if (controller_c_air_1) {
    sub_254 = v_217;
  } else {
    sub_254 = sub_258;
  };
  sub_253 = sub_254;
  if (controller_c_closet) {
    sub_259 = false;
  } else {
    sub_259 = sub_254;
  };
  if (controller_closet_failed_recovered) {
    v_218 = sub_259;
    sub_252 = sub_253;
  } else {
    v_218 = sub_253;
    sub_252 = sub_259;
  };
  if (controller_ck_62_1) {
    sub_251 = v_218;
  } else {
    sub_251 = sub_252;
  };
  if (controller_blind_failed_recovered) {
    v_219 = sub_251;
    sub_250 = sub_213;
  } else {
    v_219 = sub_213;
    sub_250 = sub_251;
  };
  if (controller_ck_72_1) {
    v_220 = v_219;
  } else {
    v_220 = sub_250;
  };
  if (controller_ck_70_1) {
    v_221 = v_220;
  } else {
    v_221 = sub_249;
  };
  if (controller_change_shift) {
    v_207 = false;
    sub_269 = sub_231;
  } else {
    v_207 = sub_231;
    sub_269 = false;
  };
  if (controller_ck_1) {
    sub_268 = v_207;
  } else {
    sub_268 = sub_269;
  };
  if (controller_v_277) {
    sub_267 = false;
  } else {
    sub_267 = sub_268;
  };
  if (controller_v_276) {
    v_208 = sub_267;
  } else {
    v_208 = sub_202;
  };
  if (controller_c_air_2) {
    v_209 = v_208;
  } else {
    v_209 = sub_206;
  };
  if (controller_v_277) {
    v_206 = sub_268;
  } else {
    v_206 = sub_41;
  };
  if (controller_v_276) {
    sub_270 = v_206;
  } else {
    sub_270 = sub_267;
  };
  if (controller_c_air_1) {
    sub_266 = v_209;
  } else {
    sub_266 = sub_270;
  };
  sub_265 = sub_266;
  if (controller_v_276) {
    v_204 = sub_267;
  } else {
    v_204 = false;
  };
  if (controller_c_air_2) {
    v_205 = v_204;
  } else {
    v_205 = false;
  };
  if (controller_v_277) {
    v_203 = sub_268;
  } else {
    v_203 = false;
  };
  if (controller_v_276) {
    sub_273 = v_203;
  } else {
    sub_273 = sub_267;
  };
  if (controller_c_air_1) {
    sub_272 = v_205;
  } else {
    sub_272 = sub_273;
  };
  if (controller_c_closet) {
    sub_271 = sub_209;
  } else {
    sub_271 = sub_272;
  };
  if (controller_closet_failed_recovered) {
    v_210 = sub_271;
    sub_264 = sub_265;
  } else {
    v_210 = sub_265;
    sub_264 = sub_271;
  };
  if (controller_ck_62_1) {
    sub_263 = v_210;
  } else {
    sub_263 = sub_264;
  };
  if (controller_blind_failed_recovered) {
    v_211 = sub_263;
    sub_262 = sub_213;
  } else {
    v_211 = sub_213;
    sub_262 = sub_263;
  };
  if (controller_ck_72_1) {
    sub_261 = v_211;
  } else {
    sub_261 = sub_262;
  };
  if (controller_v_276) {
    v_200 = sub_255;
  } else {
    v_200 = sub_241;
  };
  if (controller_c_air_2) {
    v_201 = v_200;
  } else {
    v_201 = sub_242;
  };
  if (controller_v_277) {
    v_199 = sub_256;
  } else {
    v_199 = sub_115;
  };
  if (controller_v_276) {
    sub_279 = v_199;
  } else {
    sub_279 = sub_255;
  };
  if (controller_c_air_1) {
    sub_278 = v_201;
  } else {
    sub_278 = sub_279;
  };
  sub_277 = sub_278;
  if (controller_c_closet) {
    sub_280 = sub_245;
  } else {
    sub_280 = sub_254;
  };
  if (controller_closet_failed_recovered) {
    v_202 = sub_280;
    sub_276 = sub_277;
  } else {
    v_202 = sub_277;
    sub_276 = sub_280;
  };
  if (controller_ck_62_1) {
    sub_275 = v_202;
  } else {
    sub_275 = sub_276;
  };
  if (controller_blind_failed_recovered) {
    v_212 = sub_275;
    sub_274 = sub_213;
  } else {
    v_212 = sub_213;
    sub_274 = sub_275;
  };
  if (controller_ck_72_1) {
    v_213 = v_212;
  } else {
    v_213 = sub_274;
  };
  if (controller_ck_70_1) {
    sub_260 = v_213;
  } else {
    sub_260 = sub_261;
  };
  if (controller_blind_switch) {
    v_222 = v_221;
  } else {
    v_222 = sub_260;
  };
  if (controller_c_blind_1) {
    sub_248 = v_222;
  } else {
    sub_248 = sub_260;
  };
  sub_283 = sub_218;
  sub_282 = sub_283;
  sub_281 = sub_282;
  if (controller_ck_65_1) {
    sub_247 = sub_281;
  } else {
    sub_247 = sub_248;
  };
  if (controller_light_failed_recovered) {
    v_257 = sub_247;
    sub_194 = sub_195;
  } else {
    v_257 = sub_195;
    sub_194 = sub_247;
  };
  if (controller_ck_67_1) {
    sub_193 = v_257;
  } else {
    sub_193 = sub_194;
  };
  if (controller_ck_65_1) {
    sub_286 = sub_248;
  } else {
    sub_286 = sub_281;
  };
  if (controller_light_failed_recovered) {
    v_197 = sub_286;
    sub_285 = sub_195;
  } else {
    v_197 = sub_195;
    sub_285 = sub_286;
  };
  if (controller_ck_67_1) {
    v_198 = v_197;
  } else {
    v_198 = sub_285;
  };
  if (controller_c_light_2) {
    sub_284 = v_198;
  } else {
    sub_284 = sub_193;
  };
  if (controller_light_switch) {
    v_258 = sub_193;
  } else {
    v_258 = sub_284;
  };
  if (controller_c_light_1) {
    sub_192 = v_258;
  } else {
    sub_192 = sub_284;
  };
  if (controller_air_failed_recovered) {
    v_321 = sub_192;
    sub_4 = sub_5;
  } else {
    v_321 = sub_5;
    sub_4 = sub_192;
  };
  if (controller_ck_52_1) {
    sub_3 = v_321;
  } else {
    sub_3 = sub_4;
  };
  if (controller_ck_45_1) {
    sub_307 = sub_25;
  } else {
    sub_307 = sub_29;
  };
  sub_306 = sub_307;
  if (controller_door_failed_recovered) {
    v_187 = false;
    sub_309 = sub_307;
  } else {
    v_187 = sub_307;
    sub_309 = false;
  };
  if (controller_ck_42_1) {
    sub_308 = v_187;
  } else {
    sub_308 = sub_309;
  };
  if (controller_c_door) {
    sub_305 = sub_306;
    sub_310 = sub_308;
  } else {
    sub_305 = sub_308;
    sub_310 = sub_306;
  };
  if (controller_ck_40_1) {
    sub_304 = sub_310;
  } else {
    sub_304 = sub_305;
  };
  sub_303 = sub_304;
  sub_312 = sub_308;
  if (controller_window_failed_recovered) {
    v_188 = sub_312;
    sub_311 = sub_304;
  } else {
    v_188 = sub_304;
    sub_311 = sub_312;
  };
  if (controller_ck_57_1) {
    v_189 = v_188;
  } else {
    v_189 = sub_311;
  };
  if (controller_c_window) {
    sub_302 = sub_303;
  } else {
    sub_302 = v_189;
  };
  sub_301 = sub_302;
  sub_300 = sub_301;
  sub_299 = sub_300;
  sub_298 = sub_299;
  sub_297 = sub_298;
  if (controller_cleaner) {
    sub_317 = sub_302;
    sub_318 = false;
  } else {
    sub_317 = false;
    sub_318 = sub_302;
  };
  if (controller_ck_37_1) {
    sub_316 = sub_318;
  } else {
    sub_316 = sub_317;
  };
  sub_315 = sub_316;
  sub_314 = sub_315;
  if (controller_ck_37_1) {
    sub_321 = sub_317;
  } else {
    sub_321 = sub_318;
  };
  sub_320 = sub_321;
  sub_319 = sub_320;
  if (controller_c_closet) {
    sub_313 = sub_314;
  } else {
    sub_313 = sub_319;
  };
  if (controller_closet_failed_recovered) {
    v_190 = sub_313;
    sub_296 = sub_297;
  } else {
    v_190 = sub_297;
    sub_296 = sub_313;
  };
  if (controller_ck_62_1) {
    sub_295 = v_190;
  } else {
    sub_295 = sub_296;
  };
  if (controller_blind_failed_recovered) {
    v_191 = false;
    sub_294 = sub_295;
  } else {
    v_191 = sub_295;
    sub_294 = false;
  };
  if (controller_ck_72_1) {
    sub_293 = v_191;
  } else {
    sub_293 = sub_294;
  };
  if (controller_window_failed_recovered) {
    v_184 = false;
    sub_333 = sub_304;
  } else {
    v_184 = sub_304;
    sub_333 = false;
  };
  if (controller_ck_57_1) {
    sub_332 = v_184;
  } else {
    sub_332 = sub_333;
  };
  if (controller_c_window) {
    sub_331 = sub_332;
  } else {
    sub_331 = sub_303;
  };
  sub_330 = sub_331;
  sub_329 = sub_330;
  sub_328 = sub_329;
  sub_327 = sub_328;
  sub_326 = sub_327;
  if (controller_cleaner) {
    sub_338 = sub_331;
    sub_339 = false;
  } else {
    sub_338 = false;
    sub_339 = sub_331;
  };
  if (controller_ck_37_1) {
    sub_337 = sub_339;
  } else {
    sub_337 = sub_338;
  };
  sub_336 = sub_337;
  sub_335 = sub_336;
  if (controller_ck_37_1) {
    sub_342 = sub_338;
  } else {
    sub_342 = sub_339;
  };
  sub_341 = sub_342;
  sub_340 = sub_341;
  if (controller_c_closet) {
    sub_334 = sub_335;
  } else {
    sub_334 = sub_340;
  };
  if (controller_closet_failed_recovered) {
    v_185 = sub_334;
    sub_325 = sub_326;
  } else {
    v_185 = sub_326;
    sub_325 = sub_334;
  };
  if (controller_ck_62_1) {
    sub_324 = v_185;
  } else {
    sub_324 = sub_325;
  };
  if (controller_blind_failed_recovered) {
    v_186 = sub_324;
    sub_323 = sub_295;
  } else {
    v_186 = sub_295;
    sub_323 = sub_324;
  };
  if (controller_ck_72_1) {
    sub_322 = v_186;
  } else {
    sub_322 = sub_323;
  };
  if (controller_ck_70_1) {
    v_192 = sub_322;
  } else {
    v_192 = sub_293;
  };
  if (controller_ck_45_1) {
    sub_359 = sub_85;
  } else {
    sub_359 = sub_89;
  };
  sub_358 = sub_359;
  if (controller_door_failed_recovered) {
    v_180 = false;
    sub_361 = sub_359;
  } else {
    v_180 = sub_359;
    sub_361 = false;
  };
  if (controller_ck_42_1) {
    sub_360 = v_180;
  } else {
    sub_360 = sub_361;
  };
  if (controller_c_door) {
    sub_357 = sub_358;
    sub_362 = sub_360;
  } else {
    sub_357 = sub_360;
    sub_362 = sub_358;
  };
  if (controller_ck_40_1) {
    sub_356 = sub_362;
  } else {
    sub_356 = sub_357;
  };
  if (controller_window_failed_recovered) {
    v_181 = false;
    sub_355 = sub_356;
  } else {
    v_181 = sub_356;
    sub_355 = false;
  };
  if (controller_ck_57_1) {
    sub_354 = v_181;
  } else {
    sub_354 = sub_355;
  };
  sub_363 = sub_356;
  if (controller_c_window) {
    sub_353 = sub_354;
  } else {
    sub_353 = sub_363;
  };
  sub_352 = sub_353;
  sub_351 = sub_352;
  sub_350 = sub_351;
  sub_349 = sub_350;
  sub_348 = sub_349;
  if (controller_cleaner) {
    sub_368 = sub_353;
    sub_369 = false;
  } else {
    sub_368 = false;
    sub_369 = sub_353;
  };
  if (controller_ck_37_1) {
    sub_367 = sub_369;
  } else {
    sub_367 = sub_368;
  };
  sub_366 = sub_367;
  sub_365 = sub_366;
  if (controller_ck_37_1) {
    sub_372 = sub_368;
  } else {
    sub_372 = sub_369;
  };
  sub_371 = sub_372;
  sub_370 = sub_371;
  if (controller_c_closet) {
    sub_364 = sub_365;
  } else {
    sub_364 = sub_370;
  };
  if (controller_closet_failed_recovered) {
    v_182 = sub_364;
    sub_347 = sub_348;
  } else {
    v_182 = sub_348;
    sub_347 = sub_364;
  };
  if (controller_ck_62_1) {
    sub_346 = v_182;
  } else {
    sub_346 = sub_347;
  };
  if (controller_blind_failed_recovered) {
    v_183 = sub_346;
    sub_345 = sub_295;
  } else {
    v_183 = sub_295;
    sub_345 = sub_346;
  };
  if (controller_ck_72_1) {
    sub_344 = v_183;
  } else {
    sub_344 = sub_345;
  };
  if (controller_ck_70_1) {
    sub_343 = sub_322;
  } else {
    sub_343 = sub_344;
  };
  if (controller_blind_switch) {
    v_193 = v_192;
  } else {
    v_193 = sub_343;
  };
  if (controller_c_blind_1) {
    sub_292 = v_193;
  } else {
    sub_292 = sub_343;
  };
  if (controller_change_shift) {
    v_175 = false;
    sub_383 = sub_330;
  } else {
    v_175 = sub_330;
    sub_383 = false;
  };
  if (controller_ck_1) {
    sub_382 = v_175;
  } else {
    sub_382 = sub_383;
  };
  sub_381 = sub_382;
  sub_380 = sub_381;
  sub_379 = sub_380;
  if (controller_change_shift) {
    v_174 = false;
    sub_387 = sub_337;
  } else {
    v_174 = sub_337;
    sub_387 = false;
  };
  if (controller_ck_1) {
    sub_386 = v_174;
  } else {
    sub_386 = sub_387;
  };
  sub_385 = sub_386;
  if (controller_change_shift) {
    v_173 = false;
    sub_390 = sub_342;
  } else {
    v_173 = sub_342;
    sub_390 = false;
  };
  if (controller_ck_1) {
    sub_389 = v_173;
  } else {
    sub_389 = sub_390;
  };
  sub_388 = sub_389;
  if (controller_c_closet) {
    sub_384 = sub_385;
  } else {
    sub_384 = sub_388;
  };
  if (controller_closet_failed_recovered) {
    v_176 = sub_384;
    sub_378 = sub_379;
  } else {
    v_176 = sub_379;
    sub_378 = sub_384;
  };
  if (controller_ck_62_1) {
    sub_377 = v_176;
  } else {
    sub_377 = sub_378;
  };
  if (controller_blind_failed_recovered) {
    v_177 = sub_377;
    sub_376 = false;
  } else {
    v_177 = false;
    sub_376 = sub_377;
  };
  if (controller_ck_72_1) {
    sub_375 = v_177;
  } else {
    sub_375 = sub_376;
  };
  if (controller_ck_70_1) {
    v_178 = sub_375;
  } else {
    v_178 = false;
  };
  if (controller_change_shift) {
    v_170 = false;
    sub_400 = sub_352;
  } else {
    v_170 = sub_352;
    sub_400 = false;
  };
  if (controller_ck_1) {
    sub_399 = v_170;
  } else {
    sub_399 = sub_400;
  };
  sub_398 = sub_399;
  sub_397 = sub_398;
  sub_396 = sub_397;
  if (controller_change_shift) {
    v_169 = false;
    sub_404 = sub_367;
  } else {
    v_169 = sub_367;
    sub_404 = false;
  };
  if (controller_ck_1) {
    sub_403 = v_169;
  } else {
    sub_403 = sub_404;
  };
  sub_402 = sub_403;
  if (controller_change_shift) {
    v_168 = false;
    sub_407 = sub_372;
  } else {
    v_168 = sub_372;
    sub_407 = false;
  };
  if (controller_ck_1) {
    sub_406 = v_168;
  } else {
    sub_406 = sub_407;
  };
  sub_405 = sub_406;
  if (controller_c_closet) {
    sub_401 = sub_402;
  } else {
    sub_401 = sub_405;
  };
  if (controller_closet_failed_recovered) {
    v_171 = sub_401;
    sub_395 = sub_396;
  } else {
    v_171 = sub_396;
    sub_395 = sub_401;
  };
  if (controller_ck_62_1) {
    sub_394 = v_171;
  } else {
    sub_394 = sub_395;
  };
  if (controller_blind_failed_recovered) {
    v_172 = sub_394;
    sub_393 = false;
  } else {
    v_172 = false;
    sub_393 = sub_394;
  };
  if (controller_ck_72_1) {
    sub_392 = v_172;
  } else {
    sub_392 = sub_393;
  };
  if (controller_ck_70_1) {
    sub_391 = sub_375;
  } else {
    sub_391 = sub_392;
  };
  if (controller_blind_switch) {
    v_179 = v_178;
  } else {
    v_179 = sub_391;
  };
  sub_408 = sub_391;
  if (controller_c_blind_1) {
    sub_374 = v_179;
  } else {
    sub_374 = sub_408;
  };
  sub_419 = sub_332;
  sub_418 = sub_419;
  sub_417 = sub_418;
  sub_416 = sub_417;
  sub_415 = sub_416;
  sub_414 = sub_415;
  if (controller_cleaner) {
    sub_424 = sub_419;
    sub_425 = false;
  } else {
    sub_424 = false;
    sub_425 = sub_419;
  };
  if (controller_ck_37_1) {
    sub_423 = sub_425;
  } else {
    sub_423 = sub_424;
  };
  sub_422 = sub_423;
  sub_421 = sub_422;
  if (controller_ck_37_1) {
    sub_428 = sub_424;
  } else {
    sub_428 = sub_425;
  };
  sub_427 = sub_428;
  sub_426 = sub_427;
  if (controller_c_closet) {
    sub_420 = sub_421;
  } else {
    sub_420 = sub_426;
  };
  if (controller_closet_failed_recovered) {
    v_164 = sub_420;
    sub_413 = sub_414;
  } else {
    v_164 = sub_414;
    sub_413 = sub_420;
  };
  if (controller_ck_62_1) {
    sub_412 = v_164;
  } else {
    sub_412 = sub_413;
  };
  if (controller_blind_failed_recovered) {
    v_165 = sub_412;
    sub_411 = sub_295;
  } else {
    v_165 = sub_295;
    sub_411 = sub_412;
  };
  if (controller_ck_72_1) {
    sub_410 = v_165;
  } else {
    sub_410 = sub_411;
  };
  if (controller_ck_70_1) {
    v_166 = sub_322;
  } else {
    v_166 = sub_410;
  };
  if (controller_window_failed_recovered) {
    sub_440 = sub_304;
    sub_441 = sub_356;
  } else {
    sub_440 = sub_356;
    sub_441 = sub_304;
  };
  if (controller_ck_57_1) {
    v_161 = sub_441;
  } else {
    v_161 = sub_440;
  };
  if (controller_c_window) {
    sub_439 = sub_332;
  } else {
    sub_439 = v_161;
  };
  sub_438 = sub_439;
  sub_437 = sub_438;
  sub_436 = sub_437;
  sub_435 = sub_436;
  sub_434 = sub_435;
  if (controller_cleaner) {
    sub_446 = sub_439;
    sub_447 = false;
  } else {
    sub_446 = false;
    sub_447 = sub_439;
  };
  if (controller_ck_37_1) {
    sub_445 = sub_447;
  } else {
    sub_445 = sub_446;
  };
  sub_444 = sub_445;
  sub_443 = sub_444;
  if (controller_ck_37_1) {
    sub_450 = sub_446;
  } else {
    sub_450 = sub_447;
  };
  sub_449 = sub_450;
  sub_448 = sub_449;
  if (controller_c_closet) {
    sub_442 = sub_443;
  } else {
    sub_442 = sub_448;
  };
  if (controller_closet_failed_recovered) {
    v_162 = sub_442;
    sub_433 = sub_434;
  } else {
    v_162 = sub_434;
    sub_433 = sub_442;
  };
  if (controller_ck_62_1) {
    sub_432 = v_162;
  } else {
    sub_432 = sub_433;
  };
  if (controller_blind_failed_recovered) {
    v_163 = sub_432;
    sub_431 = sub_295;
  } else {
    v_163 = sub_295;
    sub_431 = sub_432;
  };
  if (controller_ck_72_1) {
    sub_430 = v_163;
  } else {
    sub_430 = sub_431;
  };
  if (controller_ck_70_1) {
    sub_429 = sub_322;
  } else {
    sub_429 = sub_430;
  };
  if (controller_blind_switch) {
    v_167 = v_166;
  } else {
    v_167 = sub_429;
  };
  if (controller_c_blind_1) {
    sub_409 = v_167;
  } else {
    sub_409 = sub_429;
  };
  if (controller_ck_65_1) {
    sub_373 = sub_409;
  } else {
    sub_373 = sub_374;
  };
  if (controller_light_failed_recovered) {
    v_194 = sub_373;
    sub_291 = sub_292;
  } else {
    v_194 = sub_292;
    sub_291 = sub_373;
  };
  if (controller_ck_67_1) {
    sub_290 = v_194;
  } else {
    sub_290 = sub_291;
  };
  if (controller_ck_65_1) {
    sub_453 = sub_374;
  } else {
    sub_453 = sub_409;
  };
  if (controller_light_failed_recovered) {
    v_159 = sub_453;
    sub_452 = sub_292;
  } else {
    v_159 = sub_292;
    sub_452 = sub_453;
  };
  if (controller_ck_67_1) {
    v_160 = v_159;
  } else {
    v_160 = sub_452;
  };
  if (controller_c_light_2) {
    sub_451 = v_160;
  } else {
    sub_451 = sub_290;
  };
  if (controller_light_switch) {
    v_195 = sub_290;
  } else {
    v_195 = sub_451;
  };
  if (controller_c_light_1) {
    sub_289 = v_195;
  } else {
    sub_289 = sub_451;
  };
  sub_470 = sub_306;
  sub_469 = sub_470;
  sub_468 = sub_469;
  if (controller_cleaner) {
    v_150 = sub_468;
    sub_467 = false;
  } else {
    v_150 = false;
    sub_467 = sub_468;
  };
  if (controller_ck_37_1) {
    sub_466 = v_150;
  } else {
    sub_466 = sub_467;
  };
  sub_465 = sub_466;
  if (controller_v_277) {
    sub_464 = sub_465;
  } else {
    sub_464 = false;
  };
  if (controller_ck_40_1) {
    sub_476 = sub_305;
  } else {
    sub_476 = sub_310;
  };
  if (controller_window_failed_recovered) {
    v_147 = false;
    sub_477 = sub_476;
  } else {
    v_147 = sub_476;
    sub_477 = false;
  };
  if (controller_ck_57_1) {
    v_148 = v_147;
  } else {
    v_148 = sub_477;
  };
  if (controller_c_window) {
    sub_475 = sub_476;
  } else {
    sub_475 = v_148;
  };
  if (controller_cleaner) {
    v_149 = false;
    sub_474 = sub_475;
  } else {
    v_149 = sub_475;
    sub_474 = false;
  };
  if (controller_ck_37_1) {
    sub_473 = v_149;
  } else {
    sub_473 = sub_474;
  };
  sub_472 = sub_473;
  if (controller_v_277) {
    sub_471 = sub_465;
  } else {
    sub_471 = sub_472;
  };
  if (controller_v_276) {
    v_151 = sub_471;
  } else {
    v_151 = sub_464;
  };
  if (controller_v_277) {
    v_146 = false;
  } else {
    v_146 = sub_465;
  };
  if (controller_v_276) {
    sub_478 = v_146;
  } else {
    sub_478 = sub_465;
  };
  if (controller_c_air_2) {
    v_152 = v_151;
  } else {
    v_152 = sub_478;
  };
  if (controller_v_277) {
    sub_480 = sub_472;
  } else {
    sub_480 = false;
  };
  if (controller_v_276) {
    sub_479 = sub_480;
  } else {
    sub_479 = sub_471;
  };
  if (controller_c_air_1) {
    sub_463 = v_152;
  } else {
    sub_463 = sub_479;
  };
  sub_462 = sub_463;
  if (controller_c_air_2) {
    v_144 = sub_464;
  } else {
    v_144 = sub_478;
  };
  if (controller_v_277) {
    sub_482 = false;
  } else {
    sub_482 = sub_472;
  };
  if (controller_v_276) {
    v_141 = sub_482;
  } else {
    v_141 = false;
  };
  if (controller_c_air_2) {
    v_142 = v_141;
  } else {
    v_142 = false;
  };
  if (controller_v_276) {
    sub_483 = sub_480;
  } else {
    sub_483 = sub_482;
  };
  if (controller_c_air_1) {
    v_143 = v_142;
  } else {
    v_143 = sub_483;
  };
  if (controller_v_276) {
    sub_484 = false;
  } else {
    sub_484 = sub_464;
  };
  if (controller_c_air_1) {
    v_145 = v_144;
  } else {
    v_145 = sub_484;
  };
  if (controller_c_closet) {
    sub_481 = v_143;
  } else {
    sub_481 = v_145;
  };
  if (controller_closet_failed_recovered) {
    v_153 = sub_481;
    sub_461 = sub_462;
  } else {
    v_153 = sub_462;
    sub_461 = sub_481;
  };
  if (controller_ck_62_1) {
    sub_460 = v_153;
  } else {
    sub_460 = sub_461;
  };
  if (controller_blind_failed_recovered) {
    v_154 = false;
    sub_459 = sub_460;
  } else {
    v_154 = sub_460;
    sub_459 = false;
  };
  if (controller_ck_72_1) {
    sub_458 = v_154;
  } else {
    sub_458 = sub_459;
  };
  sub_485 = sub_460;
  if (controller_ck_70_1) {
    v_155 = sub_485;
  } else {
    v_155 = sub_458;
  };
  sub_499 = sub_358;
  sub_498 = sub_499;
  sub_497 = sub_498;
  if (controller_cleaner) {
    v_137 = sub_497;
    sub_496 = false;
  } else {
    v_137 = false;
    sub_496 = sub_497;
  };
  if (controller_ck_37_1) {
    sub_495 = v_137;
  } else {
    sub_495 = sub_496;
  };
  sub_494 = sub_495;
  if (controller_v_277) {
    sub_493 = sub_494;
  } else {
    sub_493 = false;
  };
  if (controller_ck_40_1) {
    sub_505 = sub_357;
  } else {
    sub_505 = sub_362;
  };
  if (controller_window_failed_recovered) {
    v_134 = false;
    sub_506 = sub_505;
  } else {
    v_134 = sub_505;
    sub_506 = false;
  };
  if (controller_ck_57_1) {
    v_135 = v_134;
  } else {
    v_135 = sub_506;
  };
  if (controller_c_window) {
    sub_504 = sub_505;
  } else {
    sub_504 = v_135;
  };
  if (controller_cleaner) {
    v_136 = false;
    sub_503 = sub_504;
  } else {
    v_136 = sub_504;
    sub_503 = false;
  };
  if (controller_ck_37_1) {
    sub_502 = v_136;
  } else {
    sub_502 = sub_503;
  };
  sub_501 = sub_502;
  if (controller_v_277) {
    sub_500 = sub_494;
  } else {
    sub_500 = sub_501;
  };
  if (controller_v_276) {
    v_138 = sub_500;
  } else {
    v_138 = sub_493;
  };
  if (controller_v_277) {
    v_133 = false;
  } else {
    v_133 = sub_494;
  };
  if (controller_v_276) {
    sub_507 = v_133;
  } else {
    sub_507 = sub_494;
  };
  if (controller_c_air_2) {
    v_139 = v_138;
  } else {
    v_139 = sub_507;
  };
  if (controller_v_277) {
    sub_509 = sub_501;
  } else {
    sub_509 = false;
  };
  if (controller_v_276) {
    sub_508 = sub_509;
  } else {
    sub_508 = sub_500;
  };
  if (controller_c_air_1) {
    sub_492 = v_139;
  } else {
    sub_492 = sub_508;
  };
  sub_491 = sub_492;
  if (controller_c_air_2) {
    v_131 = sub_493;
  } else {
    v_131 = sub_507;
  };
  if (controller_v_277) {
    sub_511 = false;
  } else {
    sub_511 = sub_501;
  };
  if (controller_v_276) {
    v_128 = sub_511;
  } else {
    v_128 = false;
  };
  if (controller_c_air_2) {
    v_129 = v_128;
  } else {
    v_129 = false;
  };
  if (controller_v_276) {
    sub_512 = sub_509;
  } else {
    sub_512 = sub_511;
  };
  if (controller_c_air_1) {
    v_130 = v_129;
  } else {
    v_130 = sub_512;
  };
  if (controller_v_276) {
    sub_513 = false;
  } else {
    sub_513 = sub_493;
  };
  if (controller_c_air_1) {
    v_132 = v_131;
  } else {
    v_132 = sub_513;
  };
  if (controller_c_closet) {
    sub_510 = v_130;
  } else {
    sub_510 = v_132;
  };
  if (controller_closet_failed_recovered) {
    v_140 = sub_510;
    sub_490 = sub_491;
  } else {
    v_140 = sub_491;
    sub_490 = sub_510;
  };
  if (controller_ck_62_1) {
    sub_489 = v_140;
  } else {
    sub_489 = sub_490;
  };
  if (controller_blind_failed_recovered) {
    sub_488 = sub_460;
    sub_514 = sub_489;
  } else {
    sub_488 = sub_489;
    sub_514 = sub_460;
  };
  if (controller_ck_72_1) {
    sub_487 = sub_514;
  } else {
    sub_487 = sub_488;
  };
  if (controller_ck_70_1) {
    sub_486 = sub_485;
  } else {
    sub_486 = sub_487;
  };
  if (controller_blind_switch) {
    v_156 = v_155;
  } else {
    v_156 = sub_486;
  };
  if (controller_c_blind_1) {
    sub_457 = v_156;
  } else {
    sub_457 = sub_486;
  };
  if (controller_change_shift) {
    v_121 = false;
    sub_525 = sub_466;
  } else {
    v_121 = sub_466;
    sub_525 = false;
  };
  if (controller_ck_1) {
    sub_524 = v_121;
  } else {
    sub_524 = sub_525;
  };
  if (controller_v_277) {
    sub_523 = sub_524;
  } else {
    sub_523 = false;
  };
  if (controller_change_shift) {
    v_120 = false;
    sub_528 = sub_473;
  } else {
    v_120 = sub_473;
    sub_528 = false;
  };
  if (controller_ck_1) {
    sub_527 = v_120;
  } else {
    sub_527 = sub_528;
  };
  if (controller_v_277) {
    sub_526 = sub_524;
  } else {
    sub_526 = sub_527;
  };
  if (controller_v_276) {
    v_122 = sub_526;
  } else {
    v_122 = sub_523;
  };
  if (controller_v_277) {
    v_119 = false;
  } else {
    v_119 = sub_524;
  };
  if (controller_v_276) {
    sub_529 = v_119;
  } else {
    sub_529 = sub_524;
  };
  if (controller_c_air_2) {
    v_123 = v_122;
  } else {
    v_123 = sub_529;
  };
  if (controller_v_277) {
    sub_531 = sub_527;
  } else {
    sub_531 = false;
  };
  if (controller_v_276) {
    sub_530 = sub_531;
  } else {
    sub_530 = sub_526;
  };
  if (controller_c_air_1) {
    sub_522 = v_123;
  } else {
    sub_522 = sub_530;
  };
  sub_521 = sub_522;
  if (controller_c_air_2) {
    v_117 = sub_523;
  } else {
    v_117 = sub_529;
  };
  if (controller_v_277) {
    sub_533 = false;
  } else {
    sub_533 = sub_527;
  };
  if (controller_v_276) {
    v_114 = sub_533;
  } else {
    v_114 = false;
  };
  if (controller_c_air_2) {
    v_115 = v_114;
  } else {
    v_115 = false;
  };
  if (controller_v_276) {
    sub_534 = sub_531;
  } else {
    sub_534 = sub_533;
  };
  if (controller_c_air_1) {
    v_116 = v_115;
  } else {
    v_116 = sub_534;
  };
  if (controller_v_276) {
    sub_535 = false;
  } else {
    sub_535 = sub_523;
  };
  if (controller_c_air_1) {
    v_118 = v_117;
  } else {
    v_118 = sub_535;
  };
  if (controller_c_closet) {
    sub_532 = v_116;
  } else {
    sub_532 = v_118;
  };
  if (controller_closet_failed_recovered) {
    v_124 = sub_532;
    sub_520 = sub_521;
  } else {
    v_124 = sub_521;
    sub_520 = sub_532;
  };
  if (controller_ck_62_1) {
    sub_519 = v_124;
  } else {
    sub_519 = sub_520;
  };
  if (controller_blind_failed_recovered) {
    v_125 = sub_519;
    sub_518 = false;
  } else {
    v_125 = false;
    sub_518 = sub_519;
  };
  if (controller_ck_72_1) {
    sub_517 = v_125;
  } else {
    sub_517 = sub_518;
  };
  if (controller_ck_70_1) {
    v_126 = sub_517;
  } else {
    v_126 = false;
  };
  if (controller_change_shift) {
    v_109 = false;
    sub_545 = sub_495;
  } else {
    v_109 = sub_495;
    sub_545 = false;
  };
  if (controller_ck_1) {
    sub_544 = v_109;
  } else {
    sub_544 = sub_545;
  };
  if (controller_v_277) {
    sub_543 = sub_544;
  } else {
    sub_543 = false;
  };
  if (controller_change_shift) {
    v_108 = false;
    sub_548 = sub_502;
  } else {
    v_108 = sub_502;
    sub_548 = false;
  };
  if (controller_ck_1) {
    sub_547 = v_108;
  } else {
    sub_547 = sub_548;
  };
  if (controller_v_277) {
    sub_546 = sub_544;
  } else {
    sub_546 = sub_547;
  };
  if (controller_v_276) {
    v_110 = sub_546;
  } else {
    v_110 = sub_543;
  };
  if (controller_v_277) {
    v_107 = false;
  } else {
    v_107 = sub_544;
  };
  if (controller_v_276) {
    sub_549 = v_107;
  } else {
    sub_549 = sub_544;
  };
  if (controller_c_air_2) {
    v_111 = v_110;
  } else {
    v_111 = sub_549;
  };
  if (controller_v_277) {
    sub_551 = sub_547;
  } else {
    sub_551 = false;
  };
  if (controller_v_276) {
    sub_550 = sub_551;
  } else {
    sub_550 = sub_546;
  };
  if (controller_c_air_1) {
    sub_542 = v_111;
  } else {
    sub_542 = sub_550;
  };
  sub_541 = sub_542;
  if (controller_c_air_2) {
    v_105 = sub_543;
  } else {
    v_105 = sub_549;
  };
  if (controller_v_277) {
    sub_553 = false;
  } else {
    sub_553 = sub_547;
  };
  if (controller_v_276) {
    v_102 = sub_553;
  } else {
    v_102 = false;
  };
  if (controller_c_air_2) {
    v_103 = v_102;
  } else {
    v_103 = false;
  };
  if (controller_v_276) {
    sub_554 = sub_551;
  } else {
    sub_554 = sub_553;
  };
  if (controller_c_air_1) {
    v_104 = v_103;
  } else {
    v_104 = sub_554;
  };
  if (controller_v_276) {
    sub_555 = false;
  } else {
    sub_555 = sub_543;
  };
  if (controller_c_air_1) {
    v_106 = v_105;
  } else {
    v_106 = sub_555;
  };
  if (controller_c_closet) {
    sub_552 = v_104;
  } else {
    sub_552 = v_106;
  };
  if (controller_closet_failed_recovered) {
    v_112 = sub_552;
    sub_540 = sub_541;
  } else {
    v_112 = sub_541;
    sub_540 = sub_552;
  };
  if (controller_ck_62_1) {
    sub_539 = v_112;
  } else {
    sub_539 = sub_540;
  };
  if (controller_blind_failed_recovered) {
    v_113 = sub_539;
    sub_538 = false;
  } else {
    v_113 = false;
    sub_538 = sub_539;
  };
  if (controller_ck_72_1) {
    sub_537 = v_113;
  } else {
    sub_537 = sub_538;
  };
  if (controller_ck_70_1) {
    sub_536 = sub_517;
  } else {
    sub_536 = sub_537;
  };
  if (controller_blind_switch) {
    v_127 = v_126;
  } else {
    v_127 = sub_536;
  };
  sub_556 = sub_536;
  if (controller_c_blind_1) {
    sub_516 = v_127;
  } else {
    sub_516 = sub_556;
  };
  sub_558 = sub_485;
  sub_557 = sub_558;
  if (controller_ck_65_1) {
    sub_515 = sub_557;
  } else {
    sub_515 = sub_516;
  };
  if (controller_light_failed_recovered) {
    v_157 = sub_515;
    sub_456 = sub_457;
  } else {
    v_157 = sub_457;
    sub_456 = sub_515;
  };
  if (controller_ck_67_1) {
    sub_455 = v_157;
  } else {
    sub_455 = sub_456;
  };
  if (controller_ck_65_1) {
    sub_561 = sub_516;
  } else {
    sub_561 = sub_557;
  };
  if (controller_light_failed_recovered) {
    v_100 = sub_561;
    sub_560 = sub_457;
  } else {
    v_100 = sub_457;
    sub_560 = sub_561;
  };
  if (controller_ck_67_1) {
    v_101 = v_100;
  } else {
    v_101 = sub_560;
  };
  if (controller_c_light_2) {
    sub_559 = v_101;
  } else {
    sub_559 = sub_455;
  };
  if (controller_light_switch) {
    v_158 = sub_455;
  } else {
    v_158 = sub_559;
  };
  if (controller_c_light_1) {
    sub_454 = v_158;
  } else {
    sub_454 = sub_559;
  };
  if (controller_air_failed_recovered) {
    v_196 = sub_454;
    sub_288 = sub_289;
  } else {
    v_196 = sub_289;
    sub_288 = sub_454;
  };
  if (controller_ck_52_1) {
    sub_287 = v_196;
  } else {
    sub_287 = sub_288;
  };
  if (controller_worker) {
    v_322 = sub_287;
    sub_2 = sub_3;
  } else {
    v_322 = sub_3;
    sub_2 = sub_287;
  };
  if (controller_ck_35_1) {
    sub_1 = v_322;
  } else {
    sub_1 = sub_2;
  };
  sub_581 = sub_90;
  if (controller_window_failed_recovered) {
    v_88 = sub_581;
    sub_580 = sub_81;
  } else {
    v_88 = sub_81;
    sub_580 = sub_581;
  };
  if (controller_ck_57_1) {
    v_89 = v_88;
  } else {
    v_89 = sub_580;
  };
  if (controller_c_window) {
    sub_579 = sub_93;
  } else {
    sub_579 = v_89;
  };
  if (controller_cleaner) {
    v_90 = sub_579;
    sub_578 = sub_109;
  } else {
    v_90 = sub_109;
    sub_578 = sub_579;
  };
  if (controller_ck_37_1) {
    sub_577 = v_90;
  } else {
    sub_577 = sub_578;
  };
  sub_576 = sub_577;
  sub_575 = sub_576;
  sub_574 = sub_575;
  sub_573 = sub_574;
  if (controller_cleaner) {
    v_87 = sub_579;
    sub_587 = false;
  } else {
    v_87 = false;
    sub_587 = sub_579;
  };
  if (controller_ck_37_1) {
    sub_586 = v_87;
  } else {
    sub_586 = sub_587;
  };
  sub_585 = sub_586;
  sub_584 = sub_585;
  sub_583 = sub_584;
  if (controller_c_closet) {
    sub_582 = sub_113;
  } else {
    sub_582 = sub_583;
  };
  if (controller_closet_failed_recovered) {
    v_91 = sub_582;
    sub_572 = sub_573;
  } else {
    v_91 = sub_573;
    sub_572 = sub_582;
  };
  if (controller_ck_62_1) {
    sub_571 = v_91;
  } else {
    sub_571 = sub_572;
  };
  sub_590 = sub_113;
  if (controller_c_closet) {
    sub_591 = sub_113;
  } else {
    sub_591 = false;
  };
  if (controller_closet_failed_recovered) {
    v_86 = sub_591;
    sub_589 = sub_590;
  } else {
    v_86 = sub_590;
    sub_589 = sub_591;
  };
  if (controller_ck_62_1) {
    sub_588 = v_86;
  } else {
    sub_588 = sub_589;
  };
  if (controller_blind_failed_recovered) {
    v_92 = sub_588;
    sub_570 = sub_571;
  } else {
    v_92 = sub_571;
    sub_570 = sub_588;
  };
  if (controller_ck_72_1) {
    sub_569 = v_92;
  } else {
    sub_569 = sub_570;
  };
  sub_595 = sub_95;
  if (controller_c_closet) {
    sub_596 = false;
  } else {
    sub_596 = sub_95;
  };
  if (controller_closet_failed_recovered) {
    v_85 = sub_596;
    sub_594 = sub_595;
  } else {
    v_85 = sub_595;
    sub_594 = sub_596;
  };
  if (controller_ck_62_1) {
    sub_593 = v_85;
  } else {
    sub_593 = sub_594;
  };
  if (controller_blind_failed_recovered) {
    v_93 = sub_593;
    sub_592 = sub_571;
  } else {
    v_93 = sub_571;
    sub_592 = sub_593;
  };
  if (controller_ck_72_1) {
    v_94 = v_93;
  } else {
    v_94 = sub_592;
  };
  if (controller_ck_70_1) {
    v_95 = v_94;
  } else {
    v_95 = sub_569;
  };
  if (controller_blind_failed_recovered) {
    v_83 = sub_101;
    v_82 = sub_70;
    sub_599 = sub_571;
  } else {
    v_83 = sub_571;
    v_82 = sub_571;
    sub_599 = sub_70;
  };
  if (controller_ck_72_1) {
    sub_598 = v_82;
  } else {
    sub_598 = sub_599;
  };
  if (controller_blind_failed_recovered) {
    sub_600 = sub_571;
  } else {
    sub_600 = sub_101;
  };
  if (controller_ck_72_1) {
    v_84 = v_83;
  } else {
    v_84 = sub_600;
  };
  if (controller_ck_70_1) {
    sub_597 = v_84;
  } else {
    sub_597 = sub_598;
  };
  if (controller_blind_switch) {
    v_96 = v_95;
  } else {
    v_96 = sub_597;
  };
  if (controller_c_blind_1) {
    sub_568 = v_96;
  } else {
    sub_568 = sub_597;
  };
  sub_603 = sub_588;
  sub_607 = sub_142;
  if (controller_c_closet) {
    sub_608 = false;
  } else {
    sub_608 = sub_142;
  };
  if (controller_closet_failed_recovered) {
    v_77 = sub_608;
    sub_606 = sub_607;
  } else {
    v_77 = sub_607;
    sub_606 = sub_608;
  };
  if (controller_ck_62_1) {
    sub_605 = v_77;
  } else {
    sub_605 = sub_606;
  };
  if (controller_blind_failed_recovered) {
    v_78 = sub_605;
    sub_604 = sub_588;
  } else {
    v_78 = sub_588;
    sub_604 = sub_605;
  };
  if (controller_ck_72_1) {
    v_79 = v_78;
  } else {
    v_79 = sub_604;
  };
  if (controller_ck_70_1) {
    v_80 = v_79;
  } else {
    v_80 = sub_603;
  };
  if (controller_blind_failed_recovered) {
    v_75 = sub_147;
    v_74 = sub_134;
    sub_611 = sub_588;
  } else {
    v_75 = sub_588;
    v_74 = sub_588;
    sub_611 = sub_134;
  };
  if (controller_ck_72_1) {
    sub_610 = v_74;
  } else {
    sub_610 = sub_611;
  };
  if (controller_blind_failed_recovered) {
    sub_612 = sub_588;
  } else {
    sub_612 = sub_147;
  };
  if (controller_ck_72_1) {
    v_76 = v_75;
  } else {
    v_76 = sub_612;
  };
  if (controller_ck_70_1) {
    sub_609 = v_76;
  } else {
    sub_609 = sub_610;
  };
  if (controller_blind_switch) {
    v_81 = v_80;
  } else {
    v_81 = sub_609;
  };
  if (controller_c_blind_1) {
    sub_602 = v_81;
  } else {
    sub_602 = sub_609;
  };
  sub_618 = sub_583;
  if (controller_c_closet) {
    sub_619 = false;
  } else {
    sub_619 = sub_583;
  };
  if (controller_closet_failed_recovered) {
    v_70 = sub_619;
    sub_617 = sub_618;
  } else {
    v_70 = sub_618;
    sub_617 = sub_619;
  };
  if (controller_ck_62_1) {
    sub_616 = v_70;
  } else {
    sub_616 = sub_617;
  };
  sub_628 = sub_79;
  if (controller_cleaner) {
    v_68 = sub_628;
    sub_627 = false;
  } else {
    v_68 = false;
    sub_627 = sub_628;
  };
  if (controller_ck_37_1) {
    sub_626 = v_68;
  } else {
    sub_626 = sub_627;
  };
  sub_625 = sub_626;
  sub_624 = sub_625;
  sub_623 = sub_624;
  sub_622 = sub_623;
  if (controller_c_closet) {
    sub_629 = false;
  } else {
    sub_629 = sub_623;
  };
  if (controller_closet_failed_recovered) {
    v_69 = sub_629;
    sub_621 = sub_622;
  } else {
    v_69 = sub_622;
    sub_621 = sub_629;
  };
  if (controller_ck_62_1) {
    sub_620 = v_69;
  } else {
    sub_620 = sub_621;
  };
  if (controller_blind_failed_recovered) {
    v_71 = sub_620;
    sub_615 = sub_616;
  } else {
    v_71 = sub_616;
    sub_615 = sub_620;
  };
  if (controller_ck_72_1) {
    sub_614 = v_71;
  } else {
    sub_614 = sub_615;
  };
  if (controller_blind_failed_recovered) {
    v_67 = sub_593;
    sub_631 = sub_616;
  } else {
    v_67 = sub_616;
    sub_631 = sub_593;
  };
  if (controller_ck_72_1) {
    sub_630 = v_67;
  } else {
    sub_630 = sub_631;
  };
  if (controller_ck_70_1) {
    v_72 = sub_630;
  } else {
    v_72 = sub_614;
  };
  if (controller_ck_57_1) {
    v_62 = sub_186;
  } else {
    v_62 = sub_187;
  };
  if (controller_c_window) {
    sub_642 = sub_79;
  } else {
    sub_642 = v_62;
  };
  if (controller_cleaner) {
    v_63 = sub_642;
    sub_641 = false;
  } else {
    v_63 = false;
    sub_641 = sub_642;
  };
  if (controller_ck_37_1) {
    sub_640 = v_63;
  } else {
    sub_640 = sub_641;
  };
  sub_639 = sub_640;
  sub_638 = sub_639;
  sub_637 = sub_638;
  sub_636 = sub_637;
  if (controller_c_closet) {
    sub_643 = false;
  } else {
    sub_643 = sub_637;
  };
  if (controller_closet_failed_recovered) {
    v_64 = sub_643;
    sub_635 = sub_636;
  } else {
    v_64 = sub_636;
    sub_635 = sub_643;
  };
  if (controller_ck_62_1) {
    sub_634 = v_64;
  } else {
    sub_634 = sub_635;
  };
  if (controller_blind_failed_recovered) {
    v_65 = sub_634;
    sub_633 = sub_616;
  } else {
    v_65 = sub_616;
    sub_633 = sub_634;
  };
  if (controller_ck_72_1) {
    v_66 = v_65;
  } else {
    v_66 = sub_633;
  };
  if (controller_ck_70_1) {
    sub_632 = v_66;
  } else {
    sub_632 = sub_630;
  };
  if (controller_blind_switch) {
    v_73 = v_72;
  } else {
    v_73 = sub_632;
  };
  if (controller_c_blind_1) {
    sub_613 = v_73;
  } else {
    sub_613 = sub_632;
  };
  if (controller_ck_65_1) {
    sub_601 = sub_613;
  } else {
    sub_601 = sub_602;
  };
  if (controller_light_failed_recovered) {
    v_97 = sub_601;
    sub_567 = sub_568;
  } else {
    v_97 = sub_568;
    sub_567 = sub_601;
  };
  if (controller_ck_67_1) {
    sub_566 = v_97;
  } else {
    sub_566 = sub_567;
  };
  if (controller_ck_65_1) {
    sub_646 = sub_602;
  } else {
    sub_646 = sub_613;
  };
  if (controller_light_failed_recovered) {
    v_60 = sub_646;
    sub_645 = sub_568;
  } else {
    v_60 = sub_568;
    sub_645 = sub_646;
  };
  if (controller_ck_67_1) {
    v_61 = v_60;
  } else {
    v_61 = sub_645;
  };
  if (controller_c_light_2) {
    sub_644 = v_61;
  } else {
    sub_644 = sub_566;
  };
  if (controller_light_switch) {
    v_98 = sub_566;
  } else {
    v_98 = sub_644;
  };
  if (controller_c_light_1) {
    sub_565 = v_98;
  } else {
    sub_565 = sub_644;
  };
  if (controller_v_276) {
    v_50 = sub_229;
  } else {
    v_50 = sub_241;
  };
  if (controller_c_air_2) {
    v_51 = v_50;
  } else {
    v_51 = sub_242;
  };
  if (controller_v_277) {
    v_49 = sub_230;
  } else {
    v_49 = sub_115;
  };
  if (controller_v_276) {
    sub_657 = v_49;
  } else {
    sub_657 = sub_229;
  };
  if (controller_c_air_1) {
    sub_656 = v_51;
  } else {
    sub_656 = sub_657;
  };
  sub_655 = sub_656;
  if (controller_c_closet) {
    sub_658 = sub_245;
  } else {
    sub_658 = sub_234;
  };
  if (controller_closet_failed_recovered) {
    v_52 = sub_658;
    sub_654 = sub_655;
  } else {
    v_52 = sub_655;
    sub_654 = sub_658;
  };
  if (controller_ck_62_1) {
    sub_653 = v_52;
  } else {
    sub_653 = sub_654;
  };
  sub_661 = sub_245;
  if (controller_c_closet) {
    sub_662 = sub_245;
  } else {
    sub_662 = false;
  };
  if (controller_closet_failed_recovered) {
    v_48 = sub_662;
    sub_660 = sub_661;
  } else {
    v_48 = sub_661;
    sub_660 = sub_662;
  };
  if (controller_ck_62_1) {
    sub_659 = v_48;
  } else {
    sub_659 = sub_660;
  };
  if (controller_blind_failed_recovered) {
    v_53 = sub_659;
    sub_652 = sub_653;
  } else {
    v_53 = sub_653;
    sub_652 = sub_659;
  };
  if (controller_ck_72_1) {
    sub_651 = v_53;
  } else {
    sub_651 = sub_652;
  };
  sub_666 = sub_234;
  if (controller_c_closet) {
    sub_667 = false;
  } else {
    sub_667 = sub_234;
  };
  if (controller_closet_failed_recovered) {
    v_47 = sub_667;
    sub_665 = sub_666;
  } else {
    v_47 = sub_666;
    sub_665 = sub_667;
  };
  if (controller_ck_62_1) {
    sub_664 = v_47;
  } else {
    sub_664 = sub_665;
  };
  if (controller_blind_failed_recovered) {
    v_54 = sub_664;
    sub_663 = sub_653;
  } else {
    v_54 = sub_653;
    sub_663 = sub_664;
  };
  if (controller_ck_72_1) {
    v_55 = v_54;
  } else {
    v_55 = sub_663;
  };
  if (controller_ck_70_1) {
    v_56 = v_55;
  } else {
    v_56 = sub_651;
  };
  if (controller_blind_failed_recovered) {
    v_45 = sub_237;
    v_44 = sub_225;
    sub_670 = sub_653;
  } else {
    v_45 = sub_653;
    v_44 = sub_653;
    sub_670 = sub_225;
  };
  if (controller_ck_72_1) {
    sub_669 = v_44;
  } else {
    sub_669 = sub_670;
  };
  if (controller_blind_failed_recovered) {
    sub_671 = sub_653;
  } else {
    sub_671 = sub_237;
  };
  if (controller_ck_72_1) {
    v_46 = v_45;
  } else {
    v_46 = sub_671;
  };
  if (controller_ck_70_1) {
    sub_668 = v_46;
  } else {
    sub_668 = sub_669;
  };
  if (controller_blind_switch) {
    v_57 = v_56;
  } else {
    v_57 = sub_668;
  };
  if (controller_c_blind_1) {
    sub_650 = v_57;
  } else {
    sub_650 = sub_668;
  };
  sub_674 = sub_659;
  sub_678 = sub_272;
  if (controller_c_closet) {
    sub_679 = false;
  } else {
    sub_679 = sub_272;
  };
  if (controller_closet_failed_recovered) {
    v_39 = sub_679;
    sub_677 = sub_678;
  } else {
    v_39 = sub_678;
    sub_677 = sub_679;
  };
  if (controller_ck_62_1) {
    sub_676 = v_39;
  } else {
    sub_676 = sub_677;
  };
  if (controller_blind_failed_recovered) {
    v_40 = sub_676;
    sub_675 = sub_659;
  } else {
    v_40 = sub_659;
    sub_675 = sub_676;
  };
  if (controller_ck_72_1) {
    v_41 = v_40;
  } else {
    v_41 = sub_675;
  };
  if (controller_ck_70_1) {
    v_42 = v_41;
  } else {
    v_42 = sub_674;
  };
  if (controller_blind_failed_recovered) {
    v_37 = sub_275;
    v_36 = sub_263;
    sub_682 = sub_659;
  } else {
    v_37 = sub_659;
    v_36 = sub_659;
    sub_682 = sub_263;
  };
  if (controller_ck_72_1) {
    sub_681 = v_36;
  } else {
    sub_681 = sub_682;
  };
  if (controller_blind_failed_recovered) {
    sub_683 = sub_659;
  } else {
    sub_683 = sub_275;
  };
  if (controller_ck_72_1) {
    v_38 = v_37;
  } else {
    v_38 = sub_683;
  };
  if (controller_ck_70_1) {
    sub_680 = v_38;
  } else {
    sub_680 = sub_681;
  };
  if (controller_blind_switch) {
    v_43 = v_42;
  } else {
    v_43 = sub_680;
  };
  if (controller_c_blind_1) {
    sub_673 = v_43;
  } else {
    sub_673 = sub_680;
  };
  sub_686 = sub_664;
  sub_685 = sub_686;
  sub_684 = sub_685;
  if (controller_ck_65_1) {
    sub_672 = sub_684;
  } else {
    sub_672 = sub_673;
  };
  if (controller_light_failed_recovered) {
    v_58 = sub_672;
    sub_649 = sub_650;
  } else {
    v_58 = sub_650;
    sub_649 = sub_672;
  };
  if (controller_ck_67_1) {
    sub_648 = v_58;
  } else {
    sub_648 = sub_649;
  };
  if (controller_ck_65_1) {
    sub_689 = sub_673;
  } else {
    sub_689 = sub_684;
  };
  if (controller_light_failed_recovered) {
    v_34 = sub_689;
    sub_688 = sub_650;
  } else {
    v_34 = sub_650;
    sub_688 = sub_689;
  };
  if (controller_ck_67_1) {
    v_35 = v_34;
  } else {
    v_35 = sub_688;
  };
  if (controller_c_light_2) {
    sub_687 = v_35;
  } else {
    sub_687 = sub_648;
  };
  if (controller_light_switch) {
    v_59 = sub_648;
  } else {
    v_59 = sub_687;
  };
  if (controller_c_light_1) {
    sub_647 = v_59;
  } else {
    sub_647 = sub_687;
  };
  if (controller_air_failed_recovered) {
    v_99 = sub_647;
    sub_564 = sub_565;
  } else {
    v_99 = sub_565;
    sub_564 = sub_647;
  };
  if (controller_ck_52_1) {
    sub_563 = v_99;
  } else {
    sub_563 = sub_564;
  };
  sub_707 = sub_360;
  if (controller_window_failed_recovered) {
    v_25 = sub_707;
    sub_706 = sub_356;
  } else {
    v_25 = sub_356;
    sub_706 = sub_707;
  };
  if (controller_ck_57_1) {
    v_26 = v_25;
  } else {
    v_26 = sub_706;
  };
  if (controller_c_window) {
    sub_705 = sub_363;
  } else {
    sub_705 = v_26;
  };
  sub_704 = sub_705;
  sub_703 = sub_704;
  sub_702 = sub_703;
  sub_701 = sub_702;
  sub_700 = sub_701;
  if (controller_cleaner) {
    sub_712 = sub_705;
    sub_713 = false;
  } else {
    sub_712 = false;
    sub_713 = sub_705;
  };
  if (controller_ck_37_1) {
    sub_711 = sub_713;
  } else {
    sub_711 = sub_712;
  };
  sub_710 = sub_711;
  sub_709 = sub_710;
  if (controller_ck_37_1) {
    sub_716 = sub_712;
  } else {
    sub_716 = sub_713;
  };
  sub_715 = sub_716;
  sub_714 = sub_715;
  if (controller_c_closet) {
    sub_708 = sub_709;
  } else {
    sub_708 = sub_714;
  };
  if (controller_closet_failed_recovered) {
    v_27 = sub_708;
    sub_699 = sub_700;
  } else {
    v_27 = sub_700;
    sub_699 = sub_708;
  };
  if (controller_ck_62_1) {
    sub_698 = v_27;
  } else {
    sub_698 = sub_699;
  };
  if (controller_blind_failed_recovered) {
    v_28 = false;
    sub_697 = sub_698;
  } else {
    v_28 = sub_698;
    sub_697 = false;
  };
  if (controller_ck_72_1) {
    sub_696 = v_28;
  } else {
    sub_696 = sub_697;
  };
  if (controller_blind_failed_recovered) {
    v_24 = sub_346;
    sub_718 = sub_698;
  } else {
    v_24 = sub_698;
    sub_718 = sub_346;
  };
  if (controller_ck_72_1) {
    sub_717 = v_24;
  } else {
    sub_717 = sub_718;
  };
  if (controller_ck_70_1) {
    v_29 = sub_717;
  } else {
    v_29 = sub_696;
  };
  if (controller_blind_failed_recovered) {
    v_22 = sub_324;
    sub_720 = sub_698;
  } else {
    v_22 = sub_698;
    sub_720 = sub_324;
  };
  if (controller_ck_72_1) {
    v_23 = v_22;
  } else {
    v_23 = sub_720;
  };
  if (controller_ck_70_1) {
    sub_719 = v_23;
  } else {
    sub_719 = sub_717;
  };
  if (controller_blind_switch) {
    v_30 = v_29;
  } else {
    v_30 = sub_719;
  };
  if (controller_c_blind_1) {
    sub_695 = v_30;
  } else {
    sub_695 = sub_719;
  };
  if (controller_ck_70_1) {
    v_20 = sub_392;
  } else {
    v_20 = false;
  };
  if (controller_blind_switch) {
    v_21 = v_20;
  } else {
    v_21 = sub_391;
  };
  if (controller_c_blind_1) {
    sub_722 = v_21;
  } else {
    sub_722 = sub_408;
  };
  sub_733 = sub_354;
  sub_732 = sub_733;
  sub_731 = sub_732;
  sub_730 = sub_731;
  sub_729 = sub_730;
  sub_728 = sub_729;
  if (controller_cleaner) {
    sub_738 = sub_733;
    sub_739 = false;
  } else {
    sub_738 = false;
    sub_739 = sub_733;
  };
  if (controller_ck_37_1) {
    sub_737 = sub_739;
  } else {
    sub_737 = sub_738;
  };
  sub_736 = sub_737;
  sub_735 = sub_736;
  if (controller_ck_37_1) {
    sub_742 = sub_738;
  } else {
    sub_742 = sub_739;
  };
  sub_741 = sub_742;
  sub_740 = sub_741;
  if (controller_c_closet) {
    sub_734 = sub_735;
  } else {
    sub_734 = sub_740;
  };
  if (controller_closet_failed_recovered) {
    v_16 = sub_734;
    sub_727 = sub_728;
  } else {
    v_16 = sub_728;
    sub_727 = sub_734;
  };
  if (controller_ck_62_1) {
    sub_726 = v_16;
  } else {
    sub_726 = sub_727;
  };
  if (controller_blind_failed_recovered) {
    v_17 = sub_726;
    sub_725 = sub_698;
  } else {
    v_17 = sub_698;
    sub_725 = sub_726;
  };
  if (controller_ck_72_1) {
    sub_724 = v_17;
  } else {
    sub_724 = sub_725;
  };
  if (controller_ck_70_1) {
    v_18 = sub_717;
  } else {
    v_18 = sub_724;
  };
  if (controller_ck_57_1) {
    v_12 = sub_440;
  } else {
    v_12 = sub_441;
  };
  if (controller_c_window) {
    sub_752 = sub_354;
  } else {
    sub_752 = v_12;
  };
  sub_751 = sub_752;
  sub_750 = sub_751;
  sub_749 = sub_750;
  sub_748 = sub_749;
  sub_747 = sub_748;
  if (controller_cleaner) {
    sub_757 = sub_752;
    sub_758 = false;
  } else {
    sub_757 = false;
    sub_758 = sub_752;
  };
  if (controller_ck_37_1) {
    sub_756 = sub_758;
  } else {
    sub_756 = sub_757;
  };
  sub_755 = sub_756;
  sub_754 = sub_755;
  if (controller_ck_37_1) {
    sub_761 = sub_757;
  } else {
    sub_761 = sub_758;
  };
  sub_760 = sub_761;
  sub_759 = sub_760;
  if (controller_c_closet) {
    sub_753 = sub_754;
  } else {
    sub_753 = sub_759;
  };
  if (controller_closet_failed_recovered) {
    v_13 = sub_753;
    sub_746 = sub_747;
  } else {
    v_13 = sub_747;
    sub_746 = sub_753;
  };
  if (controller_ck_62_1) {
    sub_745 = v_13;
  } else {
    sub_745 = sub_746;
  };
  if (controller_blind_failed_recovered) {
    v_14 = sub_745;
    sub_744 = sub_698;
  } else {
    v_14 = sub_698;
    sub_744 = sub_745;
  };
  if (controller_ck_72_1) {
    v_15 = v_14;
  } else {
    v_15 = sub_744;
  };
  if (controller_ck_70_1) {
    sub_743 = v_15;
  } else {
    sub_743 = sub_717;
  };
  if (controller_blind_switch) {
    v_19 = v_18;
  } else {
    v_19 = sub_743;
  };
  if (controller_c_blind_1) {
    sub_723 = v_19;
  } else {
    sub_723 = sub_743;
  };
  if (controller_ck_65_1) {
    sub_721 = sub_723;
  } else {
    sub_721 = sub_722;
  };
  if (controller_light_failed_recovered) {
    v_31 = sub_721;
    sub_694 = sub_695;
  } else {
    v_31 = sub_695;
    sub_694 = sub_721;
  };
  if (controller_ck_67_1) {
    sub_693 = v_31;
  } else {
    sub_693 = sub_694;
  };
  if (controller_ck_65_1) {
    sub_764 = sub_722;
  } else {
    sub_764 = sub_723;
  };
  if (controller_light_failed_recovered) {
    v_10 = sub_764;
    sub_763 = sub_695;
  } else {
    v_10 = sub_695;
    sub_763 = sub_764;
  };
  if (controller_ck_67_1) {
    v_11 = v_10;
  } else {
    v_11 = sub_763;
  };
  if (controller_c_light_2) {
    sub_762 = v_11;
  } else {
    sub_762 = sub_693;
  };
  if (controller_light_switch) {
    v_32 = sub_693;
  } else {
    v_32 = sub_762;
  };
  if (controller_c_light_1) {
    sub_692 = v_32;
  } else {
    sub_692 = sub_762;
  };
  if (controller_blind_failed_recovered) {
    v_5 = false;
    sub_770 = sub_489;
  } else {
    v_5 = sub_489;
    sub_770 = false;
  };
  if (controller_ck_72_1) {
    sub_769 = v_5;
  } else {
    sub_769 = sub_770;
  };
  sub_771 = sub_489;
  if (controller_ck_70_1) {
    v_6 = sub_771;
  } else {
    v_6 = sub_769;
  };
  if (controller_ck_72_1) {
    v_4 = sub_488;
  } else {
    v_4 = sub_514;
  };
  if (controller_ck_70_1) {
    sub_772 = v_4;
  } else {
    sub_772 = sub_771;
  };
  if (controller_blind_switch) {
    v_7 = v_6;
  } else {
    v_7 = sub_772;
  };
  if (controller_c_blind_1) {
    sub_768 = v_7;
  } else {
    sub_768 = sub_772;
  };
  if (controller_ck_70_1) {
    v_2 = sub_537;
  } else {
    v_2 = false;
  };
  if (controller_blind_switch) {
    v_3 = v_2;
  } else {
    v_3 = sub_536;
  };
  if (controller_c_blind_1) {
    sub_774 = v_3;
  } else {
    sub_774 = sub_556;
  };
  sub_776 = sub_771;
  sub_775 = sub_776;
  if (controller_ck_65_1) {
    sub_773 = sub_775;
  } else {
    sub_773 = sub_774;
  };
  if (controller_light_failed_recovered) {
    v_8 = sub_773;
    sub_767 = sub_768;
  } else {
    v_8 = sub_768;
    sub_767 = sub_773;
  };
  if (controller_ck_67_1) {
    sub_766 = v_8;
  } else {
    sub_766 = sub_767;
  };
  if (controller_ck_65_1) {
    sub_779 = sub_774;
  } else {
    sub_779 = sub_775;
  };
  if (controller_light_failed_recovered) {
    v = sub_779;
    sub_778 = sub_768;
  } else {
    v = sub_768;
    sub_778 = sub_779;
  };
  if (controller_ck_67_1) {
    v_1 = v;
  } else {
    v_1 = sub_778;
  };
  if (controller_c_light_2) {
    sub_777 = v_1;
  } else {
    sub_777 = sub_766;
  };
  if (controller_light_switch) {
    v_9 = sub_766;
  } else {
    v_9 = sub_777;
  };
  if (controller_c_light_1) {
    sub_765 = v_9;
  } else {
    sub_765 = sub_777;
  };
  if (controller_air_failed_recovered) {
    v_33 = sub_765;
    sub_691 = sub_692;
  } else {
    v_33 = sub_692;
    sub_691 = sub_765;
  };
  if (controller_ck_52_1) {
    sub_690 = v_33;
  } else {
    sub_690 = sub_691;
  };
  if (controller_worker) {
    v_323 = sub_690;
    sub_562 = sub_563;
  } else {
    v_323 = sub_563;
    sub_562 = sub_690;
  };
  if (controller_ck_35_1) {
    v_324 = v_323;
  } else {
    v_324 = sub_562;
  };
  if (p_controller_c_blind_2) {
    sub_0 = v_324;
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
  int controller_pnr_22, int controller_ck_35_1, int controller_pnr_21,
  int controller_ck_37_1, int controller_pnr_20, int controller_ck_40_1,
  int controller_pnr_19, int controller_ck_42_1, int controller_pnr_18,
  int controller_ck_45_1, int controller_pnr_17, int controller_ck_47_1,
  int controller_pnr_16, int controller_v_277, int controller_v_276,
  int controller_pnr_15, int controller_ck_52_1, int controller_pnr_14,
  int controller_ck_55_1, int controller_pnr_13, int controller_ck_57_1,
  int controller_pnr_12, int controller_ck_60_1, int controller_pnr_11,
  int controller_ck_62_1, int controller_pnr_10, int controller_ck_65_1,
  int controller_pnr_9, int controller_ck_67_1, int controller_pnr_8,
  int controller_ck_70_1, int controller_pnr_7, int controller_ck_72_1,
  int controller_pnr, int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_blind_1,
  int controller_c_light_1, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_2_out* _out) {
  
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
  int sub_591;
  int sub_592;
  int sub_593;
  int sub_594;
  int sub_595;
  int sub_596;
  int sub_597;
  int sub_598;
  int sub_599;
  int sub_600;
  int sub_601;
  int sub_602;
  int sub_603;
  int sub_604;
  int sub_605;
  int sub_606;
  int sub_607;
  int sub_608;
  int sub_609;
  int sub_610;
  int sub_611;
  int sub_612;
  int sub_613;
  int sub_614;
  int sub_615;
  int sub_616;
  int sub_617;
  int sub_618;
  int sub_619;
  int sub_620;
  int sub_621;
  int sub_622;
  int sub_623;
  int sub_624;
  int sub_625;
  int sub_626;
  int sub_627;
  int sub_628;
  int sub_629;
  int sub_630;
  int sub_631;
  int sub_632;
  int sub_633;
  int sub_634;
  int sub_635;
  int sub_636;
  int sub_637;
  int sub_638;
  int sub_639;
  int sub_640;
  int sub_641;
  int sub_642;
  int sub_643;
  int sub_644;
  int sub_645;
  int sub_646;
  int sub_647;
  int sub_648;
  int sub_649;
  int sub_650;
  int sub_651;
  int sub_652;
  int sub_653;
  int sub_654;
  int sub_655;
  int sub_656;
  int sub_657;
  int sub_658;
  int sub_659;
  int sub_660;
  int sub_661;
  int sub_662;
  int sub_663;
  int sub_664;
  int sub_665;
  int sub_666;
  int sub_667;
  int sub_668;
  int sub_669;
  int sub_670;
  int sub_671;
  int sub_672;
  int sub_673;
  int sub_674;
  int sub_675;
  int sub_676;
  int sub_677;
  int sub_678;
  int sub_679;
  int sub_680;
  int sub_681;
  int sub_682;
  int sub_683;
  int sub_684;
  int sub_685;
  int sub_686;
  int sub_687;
  int sub_688;
  int sub_689;
  int sub_690;
  int sub_691;
  int sub_692;
  int sub_693;
  int sub_694;
  int sub_695;
  int sub_696;
  int sub_697;
  int sub_698;
  int sub_699;
  int sub_700;
  int sub_701;
  int sub_702;
  int sub_703;
  int sub_704;
  int sub_705;
  int sub_706;
  int sub_707;
  int sub_708;
  int sub_709;
  int sub_710;
  int sub_711;
  int sub_712;
  int sub_713;
  int sub_714;
  int sub_715;
  int sub_716;
  int sub_717;
  int sub_718;
  int sub_719;
  int sub_720;
  int sub_721;
  int sub_722;
  int sub_723;
  int sub_724;
  int sub_725;
  int sub_726;
  int sub_727;
  int sub_728;
  int sub_729;
  int sub_730;
  int sub_731;
  int sub_732;
  int sub_733;
  int sub_734;
  int sub_735;
  int sub_736;
  int sub_737;
  int sub_738;
  int sub_739;
  int sub_740;
  int sub_741;
  int sub_742;
  int sub_743;
  int sub_744;
  int sub_745;
  int sub_746;
  int sub_747;
  int sub_748;
  int sub_749;
  int sub_750;
  int sub_751;
  int sub_752;
  int sub_753;
  int sub_754;
  int sub_755;
  int sub_756;
  int sub_757;
  int sub_758;
  int sub_759;
  int sub_760;
  int sub_761;
  int sub_762;
  int sub_763;
  int sub_764;
  int sub_765;
  int sub_766;
  int sub_767;
  int sub_768;
  int sub_769;
  int sub_770;
  int sub_771;
  int sub_772;
  int sub_773;
  int sub_774;
  int sub_775;
  int sub_776;
  int sub_777;
  int sub_778;
  int sub_779;
  int sub_780;
  int sub_781;
  int sub_782;
  int sub_783;
  int sub_784;
  int sub_785;
  int sub_786;
  int sub_787;
  int sub_788;
  int sub_789;
  int sub_790;
  int sub_791;
  int sub_792;
  int sub_793;
  int sub_794;
  int sub_795;
  int sub_796;
  int sub_797;
  int sub_798;
  int sub_799;
  int sub_800;
  int sub_801;
  int sub_802;
  int sub_803;
  int sub_804;
  int sub_805;
  int sub_806;
  int sub_807;
  int sub_808;
  int sub_809;
  int sub_810;
  int sub_811;
  int sub_812;
  int sub_813;
  int sub_814;
  int sub_815;
  int sub_816;
  int sub_817;
  int sub_818;
  int sub_819;
  int sub_820;
  int sub_821;
  int sub_822;
  int sub_823;
  int sub_824;
  int sub_825;
  int sub_826;
  int sub_827;
  int sub_828;
  int sub_829;
  int sub_830;
  int sub_831;
  int sub_832;
  int sub_833;
  int sub_834;
  int sub_835;
  int sub_836;
  int sub_837;
  int sub_838;
  int sub_839;
  int sub_840;
  int sub_841;
  int sub_842;
  int sub_843;
  int sub_844;
  int sub_845;
  int sub_846;
  int sub_847;
  int sub_848;
  int sub_849;
  int sub_850;
  int sub_851;
  int sub_852;
  int sub_853;
  int sub_854;
  int sub_855;
  int sub_856;
  int sub_857;
  int sub_858;
  int sub_859;
  int sub_860;
  int sub_861;
  int sub_862;
  int sub_863;
  int sub_864;
  int sub_865;
  int sub_866;
  int sub_867;
  int sub_868;
  int sub_869;
  int sub_870;
  int sub_871;
  int sub_872;
  int sub_873;
  int sub_874;
  int sub_875;
  int sub_876;
  int sub_877;
  int sub_878;
  int sub_879;
  int sub_880;
  int sub_881;
  int sub_882;
  int sub_883;
  int sub_884;
  int sub_885;
  int sub_886;
  int sub_887;
  v_707 = (controller_pc_failed_recovered&&false);
  v_706 = !(controller_pc_failed_recovered);
  sub_26 = (v_706&&false);
  if (controller_ck_47_1) {
    sub_25 = v_707;
  } else {
    sub_25 = sub_26;
  };
  sub_27 = false;
  if (controller_c_pc) {
    sub_24 = sub_25;
    sub_28 = sub_27;
  } else {
    sub_24 = sub_27;
    sub_28 = sub_25;
  };
  if (controller_ck_45_1) {
    sub_23 = sub_28;
  } else {
    sub_23 = sub_24;
  };
  if (controller_door_failed_recovered) {
    v_708 = false;
    sub_22 = sub_23;
  } else {
    v_708 = sub_23;
    sub_22 = false;
  };
  if (controller_ck_42_1) {
    sub_21 = v_708;
  } else {
    sub_21 = sub_22;
  };
  sub_29 = sub_23;
  if (controller_c_door) {
    sub_20 = sub_21;
    sub_30 = sub_29;
  } else {
    sub_20 = sub_29;
    sub_30 = sub_21;
  };
  if (controller_ck_40_1) {
    sub_19 = sub_30;
  } else {
    sub_19 = sub_20;
  };
  if (controller_window_failed_recovered) {
    v_709 = false;
    sub_31 = sub_19;
  } else {
    v_709 = sub_19;
    sub_31 = false;
  };
  if (controller_ck_57_1) {
    v_710 = v_709;
  } else {
    v_710 = sub_31;
  };
  if (controller_c_window) {
    sub_18 = sub_19;
  } else {
    sub_18 = v_710;
  };
  if (controller_ck_40_1) {
    sub_34 = sub_20;
  } else {
    sub_34 = sub_30;
  };
  sub_33 = sub_34;
  sub_36 = sub_21;
  if (controller_window_failed_recovered) {
    v_704 = sub_36;
    sub_35 = sub_34;
  } else {
    v_704 = sub_34;
    sub_35 = sub_36;
  };
  if (controller_ck_57_1) {
    v_705 = v_704;
  } else {
    v_705 = sub_35;
  };
  if (controller_c_window) {
    sub_32 = sub_33;
  } else {
    sub_32 = v_705;
  };
  if (controller_cleaner) {
    v_711 = sub_32;
    sub_17 = sub_18;
  } else {
    v_711 = sub_18;
    sub_17 = sub_32;
  };
  if (controller_ck_37_1) {
    sub_16 = v_711;
  } else {
    sub_16 = sub_17;
  };
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  if (controller_cleaner) {
    sub_42 = sub_18;
    sub_43 = false;
  } else {
    sub_42 = false;
    sub_43 = sub_18;
  };
  if (controller_ck_37_1) {
    sub_41 = sub_43;
  } else {
    sub_41 = sub_42;
  };
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (controller_cleaner) {
    v_703 = sub_32;
    sub_48 = false;
  } else {
    v_703 = false;
    sub_48 = sub_32;
  };
  if (controller_ck_37_1) {
    sub_47 = v_703;
  } else {
    sub_47 = sub_48;
  };
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  if (controller_c_closet) {
    sub_37 = sub_38;
  } else {
    sub_37 = sub_44;
  };
  if (controller_closet_failed_recovered) {
    v_712 = sub_37;
    sub_11 = sub_12;
  } else {
    v_712 = sub_12;
    sub_11 = sub_37;
  };
  if (controller_ck_62_1) {
    sub_10 = v_712;
  } else {
    sub_10 = sub_11;
  };
  sub_51 = sub_38;
  if (controller_c_closet) {
    sub_52 = sub_38;
  } else {
    sub_52 = false;
  };
  if (controller_closet_failed_recovered) {
    v_702 = sub_52;
    sub_50 = sub_51;
  } else {
    v_702 = sub_51;
    sub_50 = sub_52;
  };
  if (controller_ck_62_1) {
    sub_49 = v_702;
  } else {
    sub_49 = sub_50;
  };
  if (controller_blind_failed_recovered) {
    v_713 = sub_49;
    sub_9 = sub_10;
  } else {
    v_713 = sub_10;
    sub_9 = sub_49;
  };
  if (controller_ck_72_1) {
    sub_8 = v_713;
  } else {
    sub_8 = sub_9;
  };
  if (controller_window_failed_recovered) {
    v_699 = false;
    sub_64 = sub_34;
  } else {
    v_699 = sub_34;
    sub_64 = false;
  };
  if (controller_ck_57_1) {
    sub_63 = v_699;
  } else {
    sub_63 = sub_64;
  };
  if (controller_c_window) {
    sub_62 = sub_63;
  } else {
    sub_62 = sub_33;
  };
  if (controller_cleaner) {
    v_700 = sub_62;
    sub_61 = false;
  } else {
    v_700 = false;
    sub_61 = sub_62;
  };
  if (controller_ck_37_1) {
    sub_60 = v_700;
  } else {
    sub_60 = sub_61;
  };
  sub_59 = sub_60;
  sub_58 = sub_59;
  sub_57 = sub_58;
  sub_56 = sub_57;
  if (controller_c_closet) {
    sub_65 = false;
  } else {
    sub_65 = sub_57;
  };
  if (controller_closet_failed_recovered) {
    v_701 = sub_65;
    sub_55 = sub_56;
  } else {
    v_701 = sub_56;
    sub_55 = sub_65;
  };
  if (controller_ck_62_1) {
    sub_54 = v_701;
  } else {
    sub_54 = sub_55;
  };
  if (controller_blind_failed_recovered) {
    v_714 = sub_54;
    sub_53 = sub_10;
  } else {
    v_714 = sub_10;
    sub_53 = sub_54;
  };
  if (controller_ck_72_1) {
    v_715 = v_714;
  } else {
    v_715 = sub_53;
  };
  if (controller_ck_70_1) {
    v_716 = v_715;
  } else {
    v_716 = sub_8;
  };
  if (controller_cleaner) {
    v_696 = sub_62;
    sub_75 = sub_18;
  } else {
    v_696 = sub_18;
    sub_75 = sub_62;
  };
  if (controller_ck_37_1) {
    sub_74 = v_696;
  } else {
    sub_74 = sub_75;
  };
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  if (controller_c_closet) {
    sub_76 = sub_38;
  } else {
    sub_76 = sub_57;
  };
  if (controller_closet_failed_recovered) {
    v_697 = sub_76;
    sub_69 = sub_70;
  } else {
    v_697 = sub_70;
    sub_69 = sub_76;
  };
  if (controller_ck_62_1) {
    sub_68 = v_697;
  } else {
    sub_68 = sub_69;
  };
  if (controller_blind_failed_recovered) {
    v_698 = sub_68;
    sub_67 = sub_10;
  } else {
    v_698 = sub_10;
    sub_67 = sub_68;
  };
  if (controller_ck_72_1) {
    sub_66 = v_698;
  } else {
    sub_66 = sub_67;
  };
  if (controller_blind_switch) {
    v_717 = v_716;
  } else {
    v_717 = sub_66;
  };
  if (controller_c_blind_1) {
    sub_7 = v_717;
  } else {
    sub_7 = sub_66;
  };
  sub_79 = sub_49;
  if (controller_change_shift) {
    v_687 = false;
    sub_87 = sub_60;
  } else {
    v_687 = sub_60;
    sub_87 = false;
  };
  if (controller_ck_1) {
    sub_86 = v_687;
  } else {
    sub_86 = sub_87;
  };
  sub_85 = sub_86;
  sub_84 = sub_85;
  sub_83 = sub_84;
  if (controller_c_closet) {
    sub_88 = false;
  } else {
    sub_88 = sub_84;
  };
  if (controller_closet_failed_recovered) {
    v_688 = sub_88;
    sub_82 = sub_83;
  } else {
    v_688 = sub_83;
    sub_82 = sub_88;
  };
  if (controller_ck_62_1) {
    sub_81 = v_688;
  } else {
    sub_81 = sub_82;
  };
  if (controller_blind_failed_recovered) {
    v_689 = sub_81;
    sub_80 = sub_49;
  } else {
    v_689 = sub_49;
    sub_80 = sub_81;
  };
  if (controller_ck_72_1) {
    v_690 = v_689;
  } else {
    v_690 = sub_80;
  };
  if (controller_ck_70_1) {
    v_691 = v_690;
  } else {
    v_691 = sub_79;
  };
  if (controller_change_shift) {
    v_684 = sub_41;
    sub_97 = sub_74;
  } else {
    v_684 = sub_74;
    sub_97 = sub_41;
  };
  if (controller_ck_1) {
    sub_96 = v_684;
  } else {
    sub_96 = sub_97;
  };
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  if (controller_c_closet) {
    sub_98 = sub_38;
  } else {
    sub_98 = sub_84;
  };
  if (controller_closet_failed_recovered) {
    v_685 = sub_98;
    sub_92 = sub_93;
  } else {
    v_685 = sub_93;
    sub_92 = sub_98;
  };
  if (controller_ck_62_1) {
    sub_91 = v_685;
  } else {
    sub_91 = sub_92;
  };
  if (controller_blind_failed_recovered) {
    v_686 = sub_91;
    sub_90 = sub_49;
  } else {
    v_686 = sub_49;
    sub_90 = sub_91;
  };
  if (controller_ck_72_1) {
    sub_89 = v_686;
  } else {
    sub_89 = sub_90;
  };
  if (controller_blind_switch) {
    v_692 = v_691;
  } else {
    v_692 = sub_89;
  };
  if (controller_c_blind_1) {
    sub_78 = v_692;
  } else {
    sub_78 = sub_89;
  };
  sub_103 = sub_44;
  if (controller_c_closet) {
    sub_104 = false;
  } else {
    sub_104 = sub_44;
  };
  if (controller_closet_failed_recovered) {
    v_682 = sub_104;
    sub_102 = sub_103;
  } else {
    v_682 = sub_103;
    sub_102 = sub_104;
  };
  if (controller_ck_62_1) {
    sub_101 = v_682;
  } else {
    sub_101 = sub_102;
  };
  sub_113 = sub_63;
  if (controller_cleaner) {
    v_680 = sub_113;
    sub_112 = false;
  } else {
    v_680 = false;
    sub_112 = sub_113;
  };
  if (controller_ck_37_1) {
    sub_111 = v_680;
  } else {
    sub_111 = sub_112;
  };
  sub_110 = sub_111;
  sub_109 = sub_110;
  sub_108 = sub_109;
  sub_107 = sub_108;
  if (controller_c_closet) {
    sub_114 = false;
  } else {
    sub_114 = sub_108;
  };
  if (controller_closet_failed_recovered) {
    v_681 = sub_114;
    sub_106 = sub_107;
  } else {
    v_681 = sub_107;
    sub_106 = sub_114;
  };
  if (controller_ck_62_1) {
    sub_105 = v_681;
  } else {
    sub_105 = sub_106;
  };
  if (controller_blind_failed_recovered) {
    v_683 = sub_105;
    sub_100 = sub_101;
  } else {
    v_683 = sub_101;
    sub_100 = sub_105;
  };
  if (controller_ck_72_1) {
    sub_99 = v_683;
  } else {
    sub_99 = sub_100;
  };
  if (controller_blind_failed_recovered) {
    v_679 = sub_54;
    sub_116 = sub_101;
  } else {
    v_679 = sub_101;
    sub_116 = sub_54;
  };
  if (controller_ck_72_1) {
    sub_115 = v_679;
  } else {
    sub_115 = sub_116;
  };
  if (controller_ck_70_1) {
    v_693 = sub_115;
  } else {
    v_693 = sub_99;
  };
  if (controller_blind_switch) {
    v_694 = v_693;
  } else {
    v_694 = sub_115;
  };
  if (controller_c_blind_1) {
    v_695 = v_694;
  } else {
    v_695 = sub_115;
  };
  if (controller_ck_65_1) {
    sub_77 = v_695;
  } else {
    sub_77 = sub_78;
  };
  if (controller_light_failed_recovered) {
    v_718 = sub_77;
    sub_6 = sub_7;
  } else {
    v_718 = sub_7;
    sub_6 = sub_77;
  };
  if (controller_ck_67_1) {
    v_719 = v_718;
  } else {
    v_719 = sub_6;
  };
  v_662 = !(controller_pc_failed_recovered);
  v_663 = (v_662||false);
  sub_139 = (controller_pc_failed_recovered||false);
  if (controller_ck_47_1) {
    sub_138 = v_663;
  } else {
    sub_138 = sub_139;
  };
  sub_140 = true;
  if (controller_c_pc) {
    sub_137 = sub_138;
    sub_141 = sub_140;
  } else {
    sub_137 = sub_140;
    sub_141 = sub_138;
  };
  if (controller_ck_45_1) {
    sub_136 = sub_141;
  } else {
    sub_136 = sub_137;
  };
  sub_135 = sub_136;
  if (controller_door_failed_recovered) {
    v_661 = false;
    sub_143 = sub_136;
  } else {
    v_661 = sub_136;
    sub_143 = false;
  };
  if (controller_ck_42_1) {
    sub_142 = v_661;
  } else {
    sub_142 = sub_143;
  };
  if (controller_c_door) {
    sub_134 = sub_135;
    sub_144 = sub_142;
  } else {
    sub_134 = sub_142;
    sub_144 = sub_135;
  };
  if (controller_ck_40_1) {
    sub_133 = sub_144;
  } else {
    sub_133 = sub_134;
  };
  sub_132 = sub_133;
  sub_146 = sub_142;
  if (controller_window_failed_recovered) {
    v_664 = sub_146;
    sub_145 = sub_133;
  } else {
    v_664 = sub_133;
    sub_145 = sub_146;
  };
  if (controller_ck_57_1) {
    v_665 = v_664;
  } else {
    v_665 = sub_145;
  };
  if (controller_c_window) {
    sub_131 = sub_132;
  } else {
    sub_131 = v_665;
  };
  if (controller_cleaner) {
    v_666 = sub_131;
    sub_130 = sub_18;
  } else {
    v_666 = sub_18;
    sub_130 = sub_131;
  };
  if (controller_ck_37_1) {
    sub_129 = v_666;
  } else {
    sub_129 = sub_130;
  };
  sub_128 = sub_129;
  sub_127 = sub_128;
  sub_126 = sub_127;
  sub_125 = sub_126;
  if (controller_cleaner) {
    v_660 = sub_131;
    sub_152 = false;
  } else {
    v_660 = false;
    sub_152 = sub_131;
  };
  if (controller_ck_37_1) {
    sub_151 = v_660;
  } else {
    sub_151 = sub_152;
  };
  sub_150 = sub_151;
  sub_149 = sub_150;
  sub_148 = sub_149;
  if (controller_c_closet) {
    sub_147 = sub_38;
  } else {
    sub_147 = sub_148;
  };
  if (controller_closet_failed_recovered) {
    v_667 = sub_147;
    sub_124 = sub_125;
  } else {
    v_667 = sub_125;
    sub_124 = sub_147;
  };
  if (controller_ck_62_1) {
    sub_123 = v_667;
  } else {
    sub_123 = sub_124;
  };
  if (controller_window_failed_recovered) {
    v_657 = false;
    sub_163 = sub_133;
  } else {
    v_657 = sub_133;
    sub_163 = false;
  };
  if (controller_ck_57_1) {
    sub_162 = v_657;
  } else {
    sub_162 = sub_163;
  };
  sub_161 = sub_162;
  if (controller_cleaner) {
    v_658 = sub_161;
    sub_160 = sub_18;
  } else {
    v_658 = sub_18;
    sub_160 = sub_161;
  };
  if (controller_ck_37_1) {
    sub_159 = v_658;
  } else {
    sub_159 = sub_160;
  };
  sub_158 = sub_159;
  sub_157 = sub_158;
  sub_156 = sub_157;
  sub_155 = sub_156;
  if (controller_cleaner) {
    v_656 = sub_161;
    sub_169 = false;
  } else {
    v_656 = false;
    sub_169 = sub_161;
  };
  if (controller_ck_37_1) {
    sub_168 = v_656;
  } else {
    sub_168 = sub_169;
  };
  sub_167 = sub_168;
  sub_166 = sub_167;
  sub_165 = sub_166;
  if (controller_c_closet) {
    sub_164 = sub_38;
  } else {
    sub_164 = sub_165;
  };
  if (controller_closet_failed_recovered) {
    v_659 = sub_164;
    sub_154 = sub_155;
  } else {
    v_659 = sub_155;
    sub_154 = sub_164;
  };
  if (controller_ck_62_1) {
    sub_153 = v_659;
  } else {
    sub_153 = sub_154;
  };
  if (controller_blind_failed_recovered) {
    v_668 = sub_153;
    sub_122 = sub_123;
  } else {
    v_668 = sub_123;
    sub_122 = sub_153;
  };
  if (controller_ck_72_1) {
    sub_121 = v_668;
  } else {
    sub_121 = sub_122;
  };
  if (controller_c_window) {
    sub_180 = sub_162;
  } else {
    sub_180 = sub_132;
  };
  if (controller_cleaner) {
    v_654 = sub_180;
    sub_179 = false;
  } else {
    v_654 = false;
    sub_179 = sub_180;
  };
  if (controller_ck_37_1) {
    sub_178 = v_654;
  } else {
    sub_178 = sub_179;
  };
  if (controller_change_shift) {
    sub_177 = sub_60;
    sub_181 = sub_178;
  } else {
    sub_177 = sub_178;
    sub_181 = sub_60;
  };
  if (controller_ck_1) {
    sub_176 = sub_181;
  } else {
    sub_176 = sub_177;
  };
  sub_175 = sub_176;
  sub_174 = sub_175;
  sub_173 = sub_174;
  if (controller_c_closet) {
    sub_182 = false;
  } else {
    sub_182 = sub_174;
  };
  if (controller_closet_failed_recovered) {
    v_655 = sub_182;
    sub_172 = sub_173;
  } else {
    v_655 = sub_173;
    sub_172 = sub_182;
  };
  if (controller_ck_62_1) {
    sub_171 = v_655;
  } else {
    sub_171 = sub_172;
  };
  if (controller_blind_failed_recovered) {
    v_669 = sub_171;
    sub_170 = sub_123;
  } else {
    v_669 = sub_123;
    sub_170 = sub_171;
  };
  if (controller_ck_72_1) {
    v_670 = v_669;
  } else {
    v_670 = sub_170;
  };
  if (controller_ck_70_1) {
    v_671 = v_670;
  } else {
    v_671 = sub_121;
  };
  if (controller_cleaner) {
    v_650 = sub_180;
    sub_193 = sub_18;
  } else {
    v_650 = sub_18;
    sub_193 = sub_180;
  };
  if (controller_ck_37_1) {
    sub_192 = v_650;
  } else {
    sub_192 = sub_193;
  };
  if (controller_change_shift) {
    v_651 = sub_192;
    sub_191 = sub_74;
  } else {
    v_651 = sub_74;
    sub_191 = sub_192;
  };
  if (controller_ck_1) {
    sub_190 = v_651;
  } else {
    sub_190 = sub_191;
  };
  sub_189 = sub_190;
  sub_188 = sub_189;
  sub_187 = sub_188;
  if (controller_c_closet) {
    sub_194 = sub_38;
  } else {
    sub_194 = sub_174;
  };
  if (controller_closet_failed_recovered) {
    v_652 = sub_194;
    sub_186 = sub_187;
  } else {
    v_652 = sub_187;
    sub_186 = sub_194;
  };
  if (controller_ck_62_1) {
    sub_185 = v_652;
  } else {
    sub_185 = sub_186;
  };
  if (controller_blind_failed_recovered) {
    v_653 = sub_185;
    sub_184 = sub_123;
  } else {
    v_653 = sub_123;
    sub_184 = sub_185;
  };
  if (controller_ck_72_1) {
    sub_183 = v_653;
  } else {
    sub_183 = sub_184;
  };
  if (controller_blind_switch) {
    v_672 = v_671;
  } else {
    v_672 = sub_183;
  };
  if (controller_c_blind_1) {
    sub_120 = v_672;
  } else {
    sub_120 = sub_183;
  };
  if (controller_ck_40_1) {
    sub_206 = sub_134;
  } else {
    sub_206 = sub_144;
  };
  if (controller_window_failed_recovered) {
    v_645 = false;
    sub_207 = sub_206;
  } else {
    v_645 = sub_206;
    sub_207 = false;
  };
  if (controller_ck_57_1) {
    v_646 = v_645;
  } else {
    v_646 = sub_207;
  };
  if (controller_c_window) {
    sub_205 = sub_206;
  } else {
    sub_205 = v_646;
  };
  if (controller_cleaner) {
    v_647 = sub_32;
    sub_204 = sub_205;
  } else {
    v_647 = sub_205;
    sub_204 = sub_32;
  };
  if (controller_ck_37_1) {
    sub_203 = v_647;
  } else {
    sub_203 = sub_204;
  };
  sub_202 = sub_203;
  sub_201 = sub_202;
  sub_200 = sub_201;
  sub_199 = sub_200;
  if (controller_cleaner) {
    sub_213 = sub_205;
    sub_214 = false;
  } else {
    sub_213 = false;
    sub_214 = sub_205;
  };
  if (controller_ck_37_1) {
    sub_212 = sub_214;
  } else {
    sub_212 = sub_213;
  };
  sub_211 = sub_212;
  sub_210 = sub_211;
  sub_209 = sub_210;
  if (controller_c_closet) {
    sub_208 = sub_209;
  } else {
    sub_208 = sub_44;
  };
  if (controller_closet_failed_recovered) {
    v_648 = sub_208;
    sub_198 = sub_199;
  } else {
    v_648 = sub_199;
    sub_198 = sub_208;
  };
  if (controller_ck_62_1) {
    sub_197 = v_648;
  } else {
    sub_197 = sub_198;
  };
  if (controller_blind_failed_recovered) {
    v_673 = sub_54;
  } else {
    v_673 = sub_197;
  };
  if (controller_cleaner) {
    v_643 = sub_113;
    sub_222 = sub_205;
  } else {
    v_643 = sub_205;
    sub_222 = sub_113;
  };
  if (controller_ck_37_1) {
    sub_221 = v_643;
  } else {
    sub_221 = sub_222;
  };
  sub_220 = sub_221;
  sub_219 = sub_220;
  sub_218 = sub_219;
  sub_217 = sub_218;
  if (controller_c_closet) {
    sub_223 = sub_209;
  } else {
    sub_223 = sub_108;
  };
  if (controller_closet_failed_recovered) {
    v_644 = sub_223;
    sub_216 = sub_217;
  } else {
    v_644 = sub_217;
    sub_216 = sub_223;
  };
  if (controller_ck_62_1) {
    sub_215 = v_644;
  } else {
    sub_215 = sub_216;
  };
  if (controller_blind_failed_recovered) {
    v_649 = sub_215;
    sub_196 = sub_197;
  } else {
    v_649 = sub_197;
    sub_196 = sub_215;
  };
  if (controller_ck_72_1) {
    sub_195 = v_649;
  } else {
    sub_195 = sub_196;
  };
  if (controller_blind_failed_recovered) {
    sub_224 = sub_197;
  } else {
    sub_224 = sub_54;
  };
  if (controller_ck_72_1) {
    v_674 = v_673;
  } else {
    v_674 = sub_224;
  };
  if (controller_ck_70_1) {
    v_675 = v_674;
  } else {
    v_675 = sub_195;
  };
  if (controller_cleaner) {
    v_640 = sub_62;
    sub_234 = sub_205;
  } else {
    v_640 = sub_205;
    sub_234 = sub_62;
  };
  if (controller_ck_37_1) {
    sub_233 = v_640;
  } else {
    sub_233 = sub_234;
  };
  sub_232 = sub_233;
  sub_231 = sub_232;
  sub_230 = sub_231;
  sub_229 = sub_230;
  if (controller_c_closet) {
    sub_235 = sub_209;
  } else {
    sub_235 = sub_57;
  };
  if (controller_closet_failed_recovered) {
    v_641 = sub_235;
    sub_228 = sub_229;
  } else {
    v_641 = sub_229;
    sub_228 = sub_235;
  };
  if (controller_ck_62_1) {
    sub_227 = v_641;
  } else {
    sub_227 = sub_228;
  };
  if (controller_blind_failed_recovered) {
    v_642 = sub_227;
    sub_226 = sub_197;
  } else {
    v_642 = sub_197;
    sub_226 = sub_227;
  };
  if (controller_ck_72_1) {
    sub_225 = v_642;
  } else {
    sub_225 = sub_226;
  };
  if (controller_blind_switch) {
    v_676 = v_675;
  } else {
    v_676 = sub_225;
  };
  if (controller_c_blind_1) {
    v_677 = v_676;
  } else {
    v_677 = sub_225;
  };
  if (controller_ck_65_1) {
    sub_119 = v_677;
  } else {
    sub_119 = sub_120;
  };
  if (controller_light_failed_recovered) {
    v_678 = sub_119;
    sub_118 = sub_7;
  } else {
    v_678 = sub_7;
    sub_118 = sub_119;
  };
  if (controller_ck_67_1) {
    sub_117 = v_678;
  } else {
    sub_117 = sub_118;
  };
  if (controller_light_switch) {
    v_720 = v_719;
  } else {
    v_720 = sub_117;
  };
  if (controller_c_light_1) {
    sub_5 = v_720;
  } else {
    sub_5 = sub_117;
  };
  if (controller_v_277) {
    sub_245 = false;
  } else {
    sub_245 = sub_40;
  };
  if (controller_ck_37_1) {
    sub_248 = sub_42;
  } else {
    sub_248 = sub_43;
  };
  sub_247 = sub_248;
  if (controller_v_277) {
    sub_246 = false;
  } else {
    sub_246 = sub_247;
  };
  if (controller_v_276) {
    v_629 = sub_246;
  } else {
    v_629 = sub_245;
  };
  if (controller_v_277) {
    v_628 = sub_40;
  } else {
    v_628 = false;
  };
  if (controller_v_276) {
    sub_249 = v_628;
  } else {
    sub_249 = false;
  };
  if (controller_c_air_2) {
    v_630 = v_629;
  } else {
    v_630 = sub_249;
  };
  if (controller_v_277) {
    v_627 = sub_247;
  } else {
    v_627 = sub_40;
  };
  if (controller_v_276) {
    sub_250 = v_627;
  } else {
    sub_250 = sub_246;
  };
  if (controller_c_air_1) {
    sub_244 = v_630;
  } else {
    sub_244 = sub_250;
  };
  sub_243 = sub_244;
  if (controller_v_276) {
    v_625 = false;
  } else {
    v_625 = sub_245;
  };
  if (controller_c_air_2) {
    v_626 = v_625;
  } else {
    v_626 = sub_249;
  };
  if (controller_v_276) {
    sub_253 = sub_245;
  } else {
    sub_253 = false;
  };
  if (controller_c_air_1) {
    sub_252 = v_626;
  } else {
    sub_252 = sub_253;
  };
  if (controller_v_276) {
    v_623 = sub_246;
  } else {
    v_623 = false;
  };
  if (controller_c_air_2) {
    v_624 = v_623;
  } else {
    v_624 = false;
  };
  if (controller_v_277) {
    v_622 = sub_247;
  } else {
    v_622 = false;
  };
  if (controller_v_276) {
    sub_255 = v_622;
  } else {
    sub_255 = sub_246;
  };
  if (controller_c_air_1) {
    sub_254 = v_624;
  } else {
    sub_254 = sub_255;
  };
  if (controller_c_closet) {
    sub_251 = sub_252;
  } else {
    sub_251 = sub_254;
  };
  if (controller_closet_failed_recovered) {
    v_631 = sub_251;
    sub_242 = sub_243;
  } else {
    v_631 = sub_243;
    sub_242 = sub_251;
  };
  if (controller_ck_62_1) {
    sub_241 = v_631;
  } else {
    sub_241 = sub_242;
  };
  sub_258 = sub_252;
  if (controller_c_closet) {
    sub_259 = sub_252;
  } else {
    sub_259 = false;
  };
  if (controller_closet_failed_recovered) {
    v_621 = sub_259;
    sub_257 = sub_258;
  } else {
    v_621 = sub_258;
    sub_257 = sub_259;
  };
  if (controller_ck_62_1) {
    sub_256 = v_621;
  } else {
    sub_256 = sub_257;
  };
  if (controller_blind_failed_recovered) {
    v_632 = sub_256;
    sub_240 = sub_241;
  } else {
    v_632 = sub_241;
    sub_240 = sub_256;
  };
  if (controller_ck_72_1) {
    sub_239 = v_632;
  } else {
    sub_239 = sub_240;
  };
  sub_263 = sub_254;
  if (controller_c_closet) {
    sub_264 = false;
  } else {
    sub_264 = sub_254;
  };
  if (controller_closet_failed_recovered) {
    v_620 = sub_264;
    sub_262 = sub_263;
  } else {
    v_620 = sub_263;
    sub_262 = sub_264;
  };
  if (controller_ck_62_1) {
    sub_261 = v_620;
  } else {
    sub_261 = sub_262;
  };
  if (controller_blind_failed_recovered) {
    v_633 = sub_261;
    sub_260 = sub_241;
  } else {
    v_633 = sub_241;
    sub_260 = sub_261;
  };
  if (controller_ck_72_1) {
    v_634 = v_633;
  } else {
    v_634 = sub_260;
  };
  if (controller_ck_70_1) {
    v_635 = v_634;
  } else {
    v_635 = sub_239;
  };
  sub_265 = sub_241;
  if (controller_blind_switch) {
    v_636 = v_635;
  } else {
    v_636 = sub_265;
  };
  if (controller_c_blind_1) {
    sub_238 = v_636;
  } else {
    sub_238 = sub_265;
  };
  sub_268 = sub_256;
  if (controller_change_shift) {
    v_612 = false;
    sub_276 = sub_248;
  } else {
    v_612 = sub_248;
    sub_276 = false;
  };
  if (controller_ck_1) {
    sub_275 = v_612;
  } else {
    sub_275 = sub_276;
  };
  if (controller_v_277) {
    sub_274 = false;
  } else {
    sub_274 = sub_275;
  };
  if (controller_v_276) {
    v_613 = sub_274;
  } else {
    v_613 = false;
  };
  if (controller_c_air_2) {
    v_614 = v_613;
  } else {
    v_614 = false;
  };
  if (controller_v_277) {
    v_611 = sub_275;
  } else {
    v_611 = false;
  };
  if (controller_v_276) {
    sub_277 = v_611;
  } else {
    sub_277 = sub_274;
  };
  if (controller_c_air_1) {
    sub_273 = v_614;
  } else {
    sub_273 = sub_277;
  };
  sub_272 = sub_273;
  if (controller_c_closet) {
    sub_278 = false;
  } else {
    sub_278 = sub_273;
  };
  if (controller_closet_failed_recovered) {
    v_615 = sub_278;
    sub_271 = sub_272;
  } else {
    v_615 = sub_272;
    sub_271 = sub_278;
  };
  if (controller_ck_62_1) {
    sub_270 = v_615;
  } else {
    sub_270 = sub_271;
  };
  if (controller_blind_failed_recovered) {
    v_616 = sub_270;
    sub_269 = sub_256;
  } else {
    v_616 = sub_256;
    sub_269 = sub_270;
  };
  if (controller_ck_72_1) {
    v_617 = v_616;
  } else {
    v_617 = sub_269;
  };
  if (controller_ck_70_1) {
    v_618 = v_617;
  } else {
    v_618 = sub_268;
  };
  if (controller_v_276) {
    v_607 = sub_274;
  } else {
    v_607 = sub_245;
  };
  if (controller_c_air_2) {
    v_608 = v_607;
  } else {
    v_608 = sub_249;
  };
  if (controller_v_277) {
    v_606 = sub_275;
  } else {
    v_606 = sub_40;
  };
  if (controller_v_276) {
    sub_285 = v_606;
  } else {
    sub_285 = sub_274;
  };
  if (controller_c_air_1) {
    sub_284 = v_608;
  } else {
    sub_284 = sub_285;
  };
  sub_283 = sub_284;
  if (controller_c_closet) {
    sub_286 = sub_252;
  } else {
    sub_286 = sub_273;
  };
  if (controller_closet_failed_recovered) {
    v_609 = sub_286;
    sub_282 = sub_283;
  } else {
    v_609 = sub_283;
    sub_282 = sub_286;
  };
  if (controller_ck_62_1) {
    sub_281 = v_609;
  } else {
    sub_281 = sub_282;
  };
  if (controller_blind_failed_recovered) {
    v_610 = sub_281;
    sub_280 = sub_256;
  } else {
    v_610 = sub_256;
    sub_280 = sub_281;
  };
  if (controller_ck_72_1) {
    sub_279 = v_610;
  } else {
    sub_279 = sub_280;
  };
  if (controller_blind_switch) {
    v_619 = v_618;
  } else {
    v_619 = sub_279;
  };
  if (controller_c_blind_1) {
    sub_267 = v_619;
  } else {
    sub_267 = sub_279;
  };
  sub_288 = sub_261;
  sub_287 = sub_288;
  if (controller_ck_65_1) {
    sub_266 = sub_287;
  } else {
    sub_266 = sub_267;
  };
  if (controller_light_failed_recovered) {
    v_637 = sub_266;
    sub_237 = sub_238;
  } else {
    v_637 = sub_238;
    sub_237 = sub_266;
  };
  if (controller_ck_67_1) {
    v_638 = v_637;
  } else {
    v_638 = sub_237;
  };
  if (controller_ck_37_1) {
    sub_300 = sub_213;
  } else {
    sub_300 = sub_214;
  };
  sub_299 = sub_300;
  if (controller_v_277) {
    sub_298 = false;
  } else {
    sub_298 = sub_299;
  };
  if (controller_v_276) {
    v_593 = sub_298;
  } else {
    v_593 = sub_245;
  };
  if (controller_c_air_2) {
    v_594 = v_593;
  } else {
    v_594 = sub_249;
  };
  if (controller_v_277) {
    v_592 = sub_299;
  } else {
    v_592 = sub_40;
  };
  if (controller_v_276) {
    sub_301 = v_592;
  } else {
    sub_301 = sub_298;
  };
  if (controller_c_air_1) {
    sub_297 = v_594;
  } else {
    sub_297 = sub_301;
  };
  sub_296 = sub_297;
  if (controller_v_276) {
    v_590 = sub_298;
  } else {
    v_590 = false;
  };
  if (controller_c_air_2) {
    v_591 = v_590;
  } else {
    v_591 = false;
  };
  if (controller_v_277) {
    v_589 = sub_299;
  } else {
    v_589 = false;
  };
  if (controller_v_276) {
    sub_304 = v_589;
  } else {
    sub_304 = sub_298;
  };
  if (controller_c_air_1) {
    sub_303 = v_591;
  } else {
    sub_303 = sub_304;
  };
  if (controller_c_closet) {
    sub_302 = sub_252;
  } else {
    sub_302 = sub_303;
  };
  if (controller_closet_failed_recovered) {
    v_595 = sub_302;
    sub_295 = sub_296;
  } else {
    v_595 = sub_296;
    sub_295 = sub_302;
  };
  if (controller_ck_62_1) {
    sub_294 = v_595;
  } else {
    sub_294 = sub_295;
  };
  sub_293 = sub_294;
  if (controller_change_shift) {
    sub_312 = sub_248;
    sub_313 = sub_300;
  } else {
    sub_312 = sub_300;
    sub_313 = sub_248;
  };
  if (controller_ck_1) {
    sub_311 = sub_313;
  } else {
    sub_311 = sub_312;
  };
  if (controller_v_277) {
    sub_310 = false;
  } else {
    sub_310 = sub_311;
  };
  if (controller_v_276) {
    v_586 = sub_310;
  } else {
    v_586 = false;
  };
  if (controller_c_air_2) {
    v_587 = v_586;
  } else {
    v_587 = false;
  };
  if (controller_v_277) {
    v_585 = sub_311;
  } else {
    v_585 = false;
  };
  if (controller_v_276) {
    sub_314 = v_585;
  } else {
    sub_314 = sub_310;
  };
  if (controller_c_air_1) {
    sub_309 = v_587;
  } else {
    sub_309 = sub_314;
  };
  sub_308 = sub_309;
  if (controller_c_closet) {
    sub_315 = false;
  } else {
    sub_315 = sub_309;
  };
  if (controller_closet_failed_recovered) {
    v_588 = sub_315;
    sub_307 = sub_308;
  } else {
    v_588 = sub_308;
    sub_307 = sub_315;
  };
  if (controller_ck_62_1) {
    sub_306 = v_588;
  } else {
    sub_306 = sub_307;
  };
  if (controller_blind_failed_recovered) {
    v_596 = sub_306;
    sub_305 = sub_294;
  } else {
    v_596 = sub_294;
    sub_305 = sub_306;
  };
  if (controller_ck_72_1) {
    v_597 = v_596;
  } else {
    v_597 = sub_305;
  };
  if (controller_ck_70_1) {
    v_598 = v_597;
  } else {
    v_598 = sub_293;
  };
  if (controller_v_276) {
    v_581 = sub_310;
  } else {
    v_581 = sub_245;
  };
  if (controller_c_air_2) {
    v_582 = v_581;
  } else {
    v_582 = sub_249;
  };
  if (controller_v_277) {
    v_580 = sub_311;
  } else {
    v_580 = sub_40;
  };
  if (controller_v_276) {
    sub_322 = v_580;
  } else {
    sub_322 = sub_310;
  };
  if (controller_c_air_1) {
    sub_321 = v_582;
  } else {
    sub_321 = sub_322;
  };
  sub_320 = sub_321;
  if (controller_c_closet) {
    sub_323 = sub_252;
  } else {
    sub_323 = sub_309;
  };
  if (controller_closet_failed_recovered) {
    v_583 = sub_323;
    sub_319 = sub_320;
  } else {
    v_583 = sub_320;
    sub_319 = sub_323;
  };
  if (controller_ck_62_1) {
    sub_318 = v_583;
  } else {
    sub_318 = sub_319;
  };
  if (controller_blind_failed_recovered) {
    v_584 = sub_318;
    sub_317 = sub_294;
  } else {
    v_584 = sub_294;
    sub_317 = sub_318;
  };
  if (controller_ck_72_1) {
    sub_316 = v_584;
  } else {
    sub_316 = sub_317;
  };
  if (controller_blind_switch) {
    v_599 = v_598;
  } else {
    v_599 = sub_316;
  };
  if (controller_c_blind_1) {
    sub_292 = v_599;
  } else {
    sub_292 = sub_316;
  };
  if (controller_v_277) {
    sub_329 = false;
  } else {
    sub_329 = sub_211;
  };
  if (controller_v_276) {
    v_577 = sub_246;
  } else {
    v_577 = sub_329;
  };
  if (controller_v_277) {
    v_576 = sub_211;
  } else {
    v_576 = false;
  };
  if (controller_v_276) {
    sub_330 = v_576;
  } else {
    sub_330 = false;
  };
  if (controller_c_air_2) {
    v_578 = v_577;
  } else {
    v_578 = sub_330;
  };
  if (controller_v_277) {
    v_575 = sub_247;
  } else {
    v_575 = sub_211;
  };
  if (controller_v_276) {
    sub_331 = v_575;
  } else {
    sub_331 = sub_246;
  };
  if (controller_c_air_1) {
    sub_328 = v_578;
  } else {
    sub_328 = sub_331;
  };
  sub_327 = sub_328;
  if (controller_v_276) {
    v_573 = false;
  } else {
    v_573 = sub_329;
  };
  if (controller_c_air_2) {
    v_574 = v_573;
  } else {
    v_574 = sub_330;
  };
  if (controller_v_276) {
    sub_334 = sub_329;
  } else {
    sub_334 = false;
  };
  if (controller_c_air_1) {
    sub_333 = v_574;
  } else {
    sub_333 = sub_334;
  };
  if (controller_c_closet) {
    sub_332 = sub_333;
  } else {
    sub_332 = sub_254;
  };
  if (controller_closet_failed_recovered) {
    v_579 = sub_332;
    sub_326 = sub_327;
  } else {
    v_579 = sub_327;
    sub_326 = sub_332;
  };
  if (controller_ck_62_1) {
    sub_325 = v_579;
  } else {
    sub_325 = sub_326;
  };
  if (controller_blind_failed_recovered) {
    v_600 = sub_261;
  } else {
    v_600 = sub_325;
  };
  sub_324 = sub_325;
  if (controller_blind_failed_recovered) {
    sub_335 = sub_325;
  } else {
    sub_335 = sub_261;
  };
  if (controller_ck_72_1) {
    v_601 = v_600;
  } else {
    v_601 = sub_335;
  };
  if (controller_ck_70_1) {
    v_602 = v_601;
  } else {
    v_602 = sub_324;
  };
  if (controller_blind_switch) {
    v_603 = v_602;
  } else {
    v_603 = sub_324;
  };
  if (controller_c_blind_1) {
    v_604 = v_603;
  } else {
    v_604 = sub_324;
  };
  if (controller_ck_65_1) {
    sub_291 = v_604;
  } else {
    sub_291 = sub_292;
  };
  if (controller_light_failed_recovered) {
    v_605 = sub_291;
    sub_290 = sub_238;
  } else {
    v_605 = sub_238;
    sub_290 = sub_291;
  };
  if (controller_ck_67_1) {
    sub_289 = v_605;
  } else {
    sub_289 = sub_290;
  };
  if (controller_light_switch) {
    v_639 = v_638;
  } else {
    v_639 = sub_289;
  };
  if (controller_c_light_1) {
    sub_236 = v_639;
  } else {
    sub_236 = sub_289;
  };
  if (controller_air_failed_recovered) {
    v_721 = sub_236;
    sub_4 = sub_5;
  } else {
    v_721 = sub_5;
    sub_4 = sub_236;
  };
  if (controller_ck_52_1) {
    sub_3 = v_721;
  } else {
    sub_3 = sub_4;
  };
  if (controller_ck_45_1) {
    sub_355 = sub_24;
  } else {
    sub_355 = sub_28;
  };
  sub_354 = sub_355;
  if (controller_door_failed_recovered) {
    v_562 = false;
    sub_357 = sub_355;
  } else {
    v_562 = sub_355;
    sub_357 = false;
  };
  if (controller_ck_42_1) {
    sub_356 = v_562;
  } else {
    sub_356 = sub_357;
  };
  if (controller_c_door) {
    sub_353 = sub_354;
    sub_358 = sub_356;
  } else {
    sub_353 = sub_356;
    sub_358 = sub_354;
  };
  if (controller_ck_40_1) {
    sub_352 = sub_358;
  } else {
    sub_352 = sub_353;
  };
  sub_351 = sub_352;
  sub_360 = sub_356;
  if (controller_window_failed_recovered) {
    v_563 = sub_360;
    sub_359 = sub_352;
  } else {
    v_563 = sub_352;
    sub_359 = sub_360;
  };
  if (controller_ck_57_1) {
    v_564 = v_563;
  } else {
    v_564 = sub_359;
  };
  if (controller_c_window) {
    sub_350 = sub_351;
  } else {
    sub_350 = v_564;
  };
  sub_349 = sub_350;
  sub_348 = sub_349;
  sub_347 = sub_348;
  sub_346 = sub_347;
  sub_345 = sub_346;
  if (controller_cleaner) {
    sub_365 = sub_350;
    sub_366 = false;
  } else {
    sub_365 = false;
    sub_366 = sub_350;
  };
  if (controller_ck_37_1) {
    sub_364 = sub_366;
  } else {
    sub_364 = sub_365;
  };
  sub_363 = sub_364;
  sub_362 = sub_363;
  if (controller_ck_37_1) {
    sub_369 = sub_365;
  } else {
    sub_369 = sub_366;
  };
  sub_368 = sub_369;
  sub_367 = sub_368;
  if (controller_c_closet) {
    sub_361 = sub_362;
  } else {
    sub_361 = sub_367;
  };
  if (controller_closet_failed_recovered) {
    v_565 = sub_361;
    sub_344 = sub_345;
  } else {
    v_565 = sub_345;
    sub_344 = sub_361;
  };
  if (controller_ck_62_1) {
    sub_343 = v_565;
  } else {
    sub_343 = sub_344;
  };
  if (controller_blind_failed_recovered) {
    v_566 = false;
    sub_342 = sub_343;
  } else {
    v_566 = sub_343;
    sub_342 = false;
  };
  if (controller_ck_72_1) {
    sub_341 = v_566;
  } else {
    sub_341 = sub_342;
  };
  if (controller_window_failed_recovered) {
    v_559 = false;
    sub_381 = sub_352;
  } else {
    v_559 = sub_352;
    sub_381 = false;
  };
  if (controller_ck_57_1) {
    sub_380 = v_559;
  } else {
    sub_380 = sub_381;
  };
  if (controller_c_window) {
    sub_379 = sub_380;
  } else {
    sub_379 = sub_351;
  };
  sub_378 = sub_379;
  sub_377 = sub_378;
  sub_376 = sub_377;
  sub_375 = sub_376;
  sub_374 = sub_375;
  if (controller_cleaner) {
    sub_386 = sub_379;
    sub_387 = false;
  } else {
    sub_386 = false;
    sub_387 = sub_379;
  };
  if (controller_ck_37_1) {
    sub_385 = sub_387;
  } else {
    sub_385 = sub_386;
  };
  sub_384 = sub_385;
  sub_383 = sub_384;
  if (controller_ck_37_1) {
    sub_390 = sub_386;
  } else {
    sub_390 = sub_387;
  };
  sub_389 = sub_390;
  sub_388 = sub_389;
  if (controller_c_closet) {
    sub_382 = sub_383;
  } else {
    sub_382 = sub_388;
  };
  if (controller_closet_failed_recovered) {
    v_560 = sub_382;
    sub_373 = sub_374;
  } else {
    v_560 = sub_374;
    sub_373 = sub_382;
  };
  if (controller_ck_62_1) {
    sub_372 = v_560;
  } else {
    sub_372 = sub_373;
  };
  if (controller_blind_failed_recovered) {
    v_561 = sub_372;
    sub_371 = sub_343;
  } else {
    v_561 = sub_343;
    sub_371 = sub_372;
  };
  if (controller_ck_72_1) {
    sub_370 = v_561;
  } else {
    sub_370 = sub_371;
  };
  if (controller_ck_70_1) {
    v_567 = sub_370;
  } else {
    v_567 = sub_341;
  };
  if (controller_blind_switch) {
    v_568 = v_567;
  } else {
    v_568 = sub_370;
  };
  sub_391 = sub_370;
  if (controller_c_blind_1) {
    sub_340 = v_568;
  } else {
    sub_340 = sub_391;
  };
  if (controller_change_shift) {
    v_554 = false;
    sub_402 = sub_378;
  } else {
    v_554 = sub_378;
    sub_402 = false;
  };
  if (controller_ck_1) {
    sub_401 = v_554;
  } else {
    sub_401 = sub_402;
  };
  sub_400 = sub_401;
  sub_399 = sub_400;
  sub_398 = sub_399;
  if (controller_change_shift) {
    v_553 = false;
    sub_406 = sub_385;
  } else {
    v_553 = sub_385;
    sub_406 = false;
  };
  if (controller_ck_1) {
    sub_405 = v_553;
  } else {
    sub_405 = sub_406;
  };
  sub_404 = sub_405;
  if (controller_change_shift) {
    v_552 = false;
    sub_409 = sub_390;
  } else {
    v_552 = sub_390;
    sub_409 = false;
  };
  if (controller_ck_1) {
    sub_408 = v_552;
  } else {
    sub_408 = sub_409;
  };
  sub_407 = sub_408;
  if (controller_c_closet) {
    sub_403 = sub_404;
  } else {
    sub_403 = sub_407;
  };
  if (controller_closet_failed_recovered) {
    v_555 = sub_403;
    sub_397 = sub_398;
  } else {
    v_555 = sub_398;
    sub_397 = sub_403;
  };
  if (controller_ck_62_1) {
    sub_396 = v_555;
  } else {
    sub_396 = sub_397;
  };
  if (controller_blind_failed_recovered) {
    v_556 = sub_396;
    sub_395 = false;
  } else {
    v_556 = false;
    sub_395 = sub_396;
  };
  if (controller_ck_72_1) {
    sub_394 = v_556;
  } else {
    sub_394 = sub_395;
  };
  if (controller_ck_70_1) {
    v_557 = sub_394;
  } else {
    v_557 = false;
  };
  if (controller_blind_switch) {
    v_558 = v_557;
  } else {
    v_558 = sub_394;
  };
  if (controller_c_blind_1) {
    sub_393 = v_558;
  } else {
    sub_393 = sub_394;
  };
  sub_420 = sub_380;
  sub_419 = sub_420;
  sub_418 = sub_419;
  sub_417 = sub_418;
  sub_416 = sub_417;
  sub_415 = sub_416;
  if (controller_cleaner) {
    sub_425 = sub_420;
    sub_426 = false;
  } else {
    sub_425 = false;
    sub_426 = sub_420;
  };
  if (controller_ck_37_1) {
    sub_424 = sub_426;
  } else {
    sub_424 = sub_425;
  };
  sub_423 = sub_424;
  sub_422 = sub_423;
  if (controller_ck_37_1) {
    sub_429 = sub_425;
  } else {
    sub_429 = sub_426;
  };
  sub_428 = sub_429;
  sub_427 = sub_428;
  if (controller_c_closet) {
    sub_421 = sub_422;
  } else {
    sub_421 = sub_427;
  };
  if (controller_closet_failed_recovered) {
    v_548 = sub_421;
    sub_414 = sub_415;
  } else {
    v_548 = sub_415;
    sub_414 = sub_421;
  };
  if (controller_ck_62_1) {
    sub_413 = v_548;
  } else {
    sub_413 = sub_414;
  };
  if (controller_blind_failed_recovered) {
    v_549 = sub_413;
    sub_412 = sub_343;
  } else {
    v_549 = sub_343;
    sub_412 = sub_413;
  };
  if (controller_ck_72_1) {
    sub_411 = v_549;
  } else {
    sub_411 = sub_412;
  };
  if (controller_ck_70_1) {
    v_550 = sub_370;
  } else {
    v_550 = sub_411;
  };
  if (controller_blind_switch) {
    v_551 = v_550;
  } else {
    v_551 = sub_370;
  };
  if (controller_c_blind_1) {
    sub_410 = v_551;
  } else {
    sub_410 = sub_391;
  };
  if (controller_ck_65_1) {
    sub_392 = sub_410;
  } else {
    sub_392 = sub_393;
  };
  if (controller_light_failed_recovered) {
    v_569 = sub_392;
    sub_339 = sub_340;
  } else {
    v_569 = sub_340;
    sub_339 = sub_392;
  };
  if (controller_ck_67_1) {
    v_570 = v_569;
  } else {
    v_570 = sub_339;
  };
  if (controller_ck_45_1) {
    sub_448 = sub_137;
  } else {
    sub_448 = sub_141;
  };
  sub_447 = sub_448;
  if (controller_door_failed_recovered) {
    v_540 = false;
    sub_450 = sub_448;
  } else {
    v_540 = sub_448;
    sub_450 = false;
  };
  if (controller_ck_42_1) {
    sub_449 = v_540;
  } else {
    sub_449 = sub_450;
  };
  if (controller_c_door) {
    sub_446 = sub_447;
    sub_451 = sub_449;
  } else {
    sub_446 = sub_449;
    sub_451 = sub_447;
  };
  if (controller_ck_40_1) {
    sub_445 = sub_451;
  } else {
    sub_445 = sub_446;
  };
  sub_444 = sub_445;
  sub_453 = sub_449;
  if (controller_window_failed_recovered) {
    v_541 = sub_453;
    sub_452 = sub_445;
  } else {
    v_541 = sub_445;
    sub_452 = sub_453;
  };
  if (controller_ck_57_1) {
    v_542 = v_541;
  } else {
    v_542 = sub_452;
  };
  if (controller_c_window) {
    sub_443 = sub_444;
  } else {
    sub_443 = v_542;
  };
  sub_442 = sub_443;
  sub_441 = sub_442;
  sub_440 = sub_441;
  sub_439 = sub_440;
  sub_438 = sub_439;
  if (controller_cleaner) {
    sub_458 = sub_443;
    sub_459 = false;
  } else {
    sub_458 = false;
    sub_459 = sub_443;
  };
  if (controller_ck_37_1) {
    sub_457 = sub_459;
  } else {
    sub_457 = sub_458;
  };
  sub_456 = sub_457;
  sub_455 = sub_456;
  if (controller_ck_37_1) {
    sub_462 = sub_458;
  } else {
    sub_462 = sub_459;
  };
  sub_461 = sub_462;
  sub_460 = sub_461;
  if (controller_c_closet) {
    sub_454 = sub_455;
  } else {
    sub_454 = sub_460;
  };
  if (controller_closet_failed_recovered) {
    v_543 = sub_454;
    sub_437 = sub_438;
  } else {
    v_543 = sub_438;
    sub_437 = sub_454;
  };
  if (controller_ck_62_1) {
    sub_436 = v_543;
  } else {
    sub_436 = sub_437;
  };
  if (controller_window_failed_recovered) {
    v_538 = false;
    sub_472 = sub_445;
  } else {
    v_538 = sub_445;
    sub_472 = false;
  };
  if (controller_ck_57_1) {
    sub_471 = v_538;
  } else {
    sub_471 = sub_472;
  };
  sub_470 = sub_471;
  sub_469 = sub_470;
  sub_468 = sub_469;
  sub_467 = sub_468;
  sub_466 = sub_467;
  sub_465 = sub_466;
  if (controller_cleaner) {
    sub_477 = sub_470;
    sub_478 = false;
  } else {
    sub_477 = false;
    sub_478 = sub_470;
  };
  if (controller_ck_37_1) {
    sub_476 = sub_478;
  } else {
    sub_476 = sub_477;
  };
  sub_475 = sub_476;
  sub_474 = sub_475;
  if (controller_ck_37_1) {
    sub_481 = sub_477;
  } else {
    sub_481 = sub_478;
  };
  sub_480 = sub_481;
  sub_479 = sub_480;
  if (controller_c_closet) {
    sub_473 = sub_474;
  } else {
    sub_473 = sub_479;
  };
  if (controller_closet_failed_recovered) {
    v_539 = sub_473;
    sub_464 = sub_465;
  } else {
    v_539 = sub_465;
    sub_464 = sub_473;
  };
  if (controller_ck_62_1) {
    sub_463 = v_539;
  } else {
    sub_463 = sub_464;
  };
  if (controller_blind_failed_recovered) {
    v_544 = sub_463;
    sub_435 = sub_436;
  } else {
    v_544 = sub_436;
    sub_435 = sub_463;
  };
  if (controller_ck_72_1) {
    sub_434 = v_544;
  } else {
    sub_434 = sub_435;
  };
  if (controller_c_window) {
    sub_492 = sub_471;
  } else {
    sub_492 = sub_444;
  };
  sub_491 = sub_492;
  if (controller_change_shift) {
    sub_490 = sub_378;
    sub_493 = sub_491;
  } else {
    sub_490 = sub_491;
    sub_493 = sub_378;
  };
  if (controller_ck_1) {
    sub_489 = sub_493;
  } else {
    sub_489 = sub_490;
  };
  sub_488 = sub_489;
  sub_487 = sub_488;
  sub_486 = sub_487;
  if (controller_cleaner) {
    sub_499 = sub_492;
    sub_500 = false;
  } else {
    sub_499 = false;
    sub_500 = sub_492;
  };
  if (controller_ck_37_1) {
    sub_498 = sub_500;
  } else {
    sub_498 = sub_499;
  };
  if (controller_change_shift) {
    sub_497 = sub_385;
    sub_501 = sub_498;
  } else {
    sub_497 = sub_498;
    sub_501 = sub_385;
  };
  if (controller_ck_1) {
    sub_496 = sub_501;
  } else {
    sub_496 = sub_497;
  };
  sub_495 = sub_496;
  if (controller_ck_37_1) {
    sub_505 = sub_499;
  } else {
    sub_505 = sub_500;
  };
  if (controller_change_shift) {
    sub_504 = sub_390;
    sub_506 = sub_505;
  } else {
    sub_504 = sub_505;
    sub_506 = sub_390;
  };
  if (controller_ck_1) {
    sub_503 = sub_506;
  } else {
    sub_503 = sub_504;
  };
  sub_502 = sub_503;
  if (controller_c_closet) {
    sub_494 = sub_495;
  } else {
    sub_494 = sub_502;
  };
  if (controller_closet_failed_recovered) {
    v_536 = sub_494;
    sub_485 = sub_486;
  } else {
    v_536 = sub_486;
    sub_485 = sub_494;
  };
  if (controller_ck_62_1) {
    sub_484 = v_536;
  } else {
    sub_484 = sub_485;
  };
  if (controller_blind_failed_recovered) {
    v_537 = sub_484;
    sub_483 = sub_436;
  } else {
    v_537 = sub_436;
    sub_483 = sub_484;
  };
  if (controller_ck_72_1) {
    sub_482 = v_537;
  } else {
    sub_482 = sub_483;
  };
  if (controller_ck_70_1) {
    v_545 = sub_482;
  } else {
    v_545 = sub_434;
  };
  if (controller_blind_switch) {
    v_546 = v_545;
  } else {
    v_546 = sub_482;
  };
  if (controller_c_blind_1) {
    sub_433 = v_546;
  } else {
    sub_433 = sub_482;
  };
  if (controller_ck_65_1) {
    sub_432 = sub_410;
  } else {
    sub_432 = sub_433;
  };
  if (controller_light_failed_recovered) {
    v_547 = sub_432;
    sub_431 = sub_340;
  } else {
    v_547 = sub_340;
    sub_431 = sub_432;
  };
  if (controller_ck_67_1) {
    sub_430 = v_547;
  } else {
    sub_430 = sub_431;
  };
  if (controller_light_switch) {
    v_571 = v_570;
  } else {
    v_571 = sub_430;
  };
  if (controller_c_light_1) {
    sub_338 = v_571;
  } else {
    sub_338 = sub_430;
  };
  sub_522 = sub_354;
  sub_521 = sub_522;
  sub_520 = sub_521;
  if (controller_cleaner) {
    v_526 = sub_520;
    sub_519 = false;
  } else {
    v_526 = false;
    sub_519 = sub_520;
  };
  if (controller_ck_37_1) {
    sub_518 = v_526;
  } else {
    sub_518 = sub_519;
  };
  sub_517 = sub_518;
  if (controller_v_277) {
    sub_516 = sub_517;
  } else {
    sub_516 = false;
  };
  if (controller_ck_40_1) {
    sub_528 = sub_353;
  } else {
    sub_528 = sub_358;
  };
  if (controller_window_failed_recovered) {
    v_523 = false;
    sub_529 = sub_528;
  } else {
    v_523 = sub_528;
    sub_529 = false;
  };
  if (controller_ck_57_1) {
    v_524 = v_523;
  } else {
    v_524 = sub_529;
  };
  if (controller_c_window) {
    sub_527 = sub_528;
  } else {
    sub_527 = v_524;
  };
  if (controller_cleaner) {
    v_525 = false;
    sub_526 = sub_527;
  } else {
    v_525 = sub_527;
    sub_526 = false;
  };
  if (controller_ck_37_1) {
    sub_525 = v_525;
  } else {
    sub_525 = sub_526;
  };
  sub_524 = sub_525;
  if (controller_v_277) {
    sub_523 = sub_517;
  } else {
    sub_523 = sub_524;
  };
  if (controller_v_276) {
    v_527 = sub_523;
  } else {
    v_527 = sub_516;
  };
  if (controller_v_277) {
    v_522 = false;
  } else {
    v_522 = sub_517;
  };
  if (controller_v_276) {
    sub_530 = v_522;
  } else {
    sub_530 = sub_517;
  };
  if (controller_c_air_2) {
    v_528 = v_527;
  } else {
    v_528 = sub_530;
  };
  if (controller_v_277) {
    sub_532 = sub_524;
  } else {
    sub_532 = false;
  };
  if (controller_v_276) {
    sub_531 = sub_532;
  } else {
    sub_531 = sub_523;
  };
  if (controller_c_air_1) {
    sub_515 = v_528;
  } else {
    sub_515 = sub_531;
  };
  sub_514 = sub_515;
  if (controller_c_air_2) {
    v_520 = sub_516;
  } else {
    v_520 = sub_530;
  };
  if (controller_v_277) {
    sub_534 = false;
  } else {
    sub_534 = sub_524;
  };
  if (controller_v_276) {
    v_517 = sub_534;
  } else {
    v_517 = false;
  };
  if (controller_c_air_2) {
    v_518 = v_517;
  } else {
    v_518 = false;
  };
  if (controller_v_276) {
    sub_535 = sub_532;
  } else {
    sub_535 = sub_534;
  };
  if (controller_c_air_1) {
    v_519 = v_518;
  } else {
    v_519 = sub_535;
  };
  if (controller_v_276) {
    sub_536 = false;
  } else {
    sub_536 = sub_516;
  };
  if (controller_c_air_1) {
    v_521 = v_520;
  } else {
    v_521 = sub_536;
  };
  if (controller_c_closet) {
    sub_533 = v_519;
  } else {
    sub_533 = v_521;
  };
  if (controller_closet_failed_recovered) {
    v_529 = sub_533;
    sub_513 = sub_514;
  } else {
    v_529 = sub_514;
    sub_513 = sub_533;
  };
  if (controller_ck_62_1) {
    sub_512 = v_529;
  } else {
    sub_512 = sub_513;
  };
  if (controller_blind_failed_recovered) {
    v_530 = false;
    sub_511 = sub_512;
  } else {
    v_530 = sub_512;
    sub_511 = false;
  };
  if (controller_ck_72_1) {
    sub_510 = v_530;
  } else {
    sub_510 = sub_511;
  };
  sub_537 = sub_512;
  if (controller_ck_70_1) {
    v_531 = sub_537;
  } else {
    v_531 = sub_510;
  };
  if (controller_blind_switch) {
    v_532 = v_531;
  } else {
    v_532 = sub_537;
  };
  sub_538 = sub_537;
  if (controller_c_blind_1) {
    sub_509 = v_532;
  } else {
    sub_509 = sub_538;
  };
  if (controller_change_shift) {
    v_510 = false;
    sub_549 = sub_518;
  } else {
    v_510 = sub_518;
    sub_549 = false;
  };
  if (controller_ck_1) {
    sub_548 = v_510;
  } else {
    sub_548 = sub_549;
  };
  if (controller_v_277) {
    sub_547 = sub_548;
  } else {
    sub_547 = false;
  };
  if (controller_change_shift) {
    v_509 = false;
    sub_552 = sub_525;
  } else {
    v_509 = sub_525;
    sub_552 = false;
  };
  if (controller_ck_1) {
    sub_551 = v_509;
  } else {
    sub_551 = sub_552;
  };
  if (controller_v_277) {
    sub_550 = sub_548;
  } else {
    sub_550 = sub_551;
  };
  if (controller_v_276) {
    v_511 = sub_550;
  } else {
    v_511 = sub_547;
  };
  if (controller_v_277) {
    v_508 = false;
  } else {
    v_508 = sub_548;
  };
  if (controller_v_276) {
    sub_553 = v_508;
  } else {
    sub_553 = sub_548;
  };
  if (controller_c_air_2) {
    v_512 = v_511;
  } else {
    v_512 = sub_553;
  };
  if (controller_v_277) {
    sub_555 = sub_551;
  } else {
    sub_555 = false;
  };
  if (controller_v_276) {
    sub_554 = sub_555;
  } else {
    sub_554 = sub_550;
  };
  if (controller_c_air_1) {
    sub_546 = v_512;
  } else {
    sub_546 = sub_554;
  };
  sub_545 = sub_546;
  if (controller_c_air_2) {
    v_506 = sub_547;
  } else {
    v_506 = sub_553;
  };
  if (controller_v_277) {
    sub_557 = false;
  } else {
    sub_557 = sub_551;
  };
  if (controller_v_276) {
    v_503 = sub_557;
  } else {
    v_503 = false;
  };
  if (controller_c_air_2) {
    v_504 = v_503;
  } else {
    v_504 = false;
  };
  if (controller_v_276) {
    sub_558 = sub_555;
  } else {
    sub_558 = sub_557;
  };
  if (controller_c_air_1) {
    v_505 = v_504;
  } else {
    v_505 = sub_558;
  };
  if (controller_v_276) {
    sub_559 = false;
  } else {
    sub_559 = sub_547;
  };
  if (controller_c_air_1) {
    v_507 = v_506;
  } else {
    v_507 = sub_559;
  };
  if (controller_c_closet) {
    sub_556 = v_505;
  } else {
    sub_556 = v_507;
  };
  if (controller_closet_failed_recovered) {
    v_513 = sub_556;
    sub_544 = sub_545;
  } else {
    v_513 = sub_545;
    sub_544 = sub_556;
  };
  if (controller_ck_62_1) {
    sub_543 = v_513;
  } else {
    sub_543 = sub_544;
  };
  if (controller_blind_failed_recovered) {
    v_514 = sub_543;
    sub_542 = false;
  } else {
    v_514 = false;
    sub_542 = sub_543;
  };
  if (controller_ck_72_1) {
    sub_541 = v_514;
  } else {
    sub_541 = sub_542;
  };
  if (controller_ck_70_1) {
    v_515 = sub_541;
  } else {
    v_515 = false;
  };
  if (controller_blind_switch) {
    v_516 = v_515;
  } else {
    v_516 = sub_541;
  };
  if (controller_c_blind_1) {
    sub_540 = v_516;
  } else {
    sub_540 = sub_541;
  };
  sub_560 = sub_538;
  if (controller_ck_65_1) {
    sub_539 = sub_560;
  } else {
    sub_539 = sub_540;
  };
  if (controller_light_failed_recovered) {
    v_533 = sub_539;
    sub_508 = sub_509;
  } else {
    v_533 = sub_509;
    sub_508 = sub_539;
  };
  if (controller_ck_67_1) {
    v_534 = v_533;
  } else {
    v_534 = sub_508;
  };
  sub_576 = sub_447;
  sub_575 = sub_576;
  sub_574 = sub_575;
  if (controller_cleaner) {
    v_496 = sub_574;
    sub_573 = false;
  } else {
    v_496 = false;
    sub_573 = sub_574;
  };
  if (controller_ck_37_1) {
    sub_572 = v_496;
  } else {
    sub_572 = sub_573;
  };
  sub_571 = sub_572;
  if (controller_v_277) {
    sub_570 = sub_571;
  } else {
    sub_570 = false;
  };
  if (controller_ck_40_1) {
    sub_582 = sub_446;
  } else {
    sub_582 = sub_451;
  };
  if (controller_window_failed_recovered) {
    v_493 = false;
    sub_583 = sub_582;
  } else {
    v_493 = sub_582;
    sub_583 = false;
  };
  if (controller_ck_57_1) {
    v_494 = v_493;
  } else {
    v_494 = sub_583;
  };
  if (controller_c_window) {
    sub_581 = sub_582;
  } else {
    sub_581 = v_494;
  };
  if (controller_cleaner) {
    v_495 = false;
    sub_580 = sub_581;
  } else {
    v_495 = sub_581;
    sub_580 = false;
  };
  if (controller_ck_37_1) {
    sub_579 = v_495;
  } else {
    sub_579 = sub_580;
  };
  sub_578 = sub_579;
  if (controller_v_277) {
    sub_577 = sub_571;
  } else {
    sub_577 = sub_578;
  };
  if (controller_v_276) {
    v_497 = sub_577;
  } else {
    v_497 = sub_570;
  };
  if (controller_v_277) {
    v_492 = false;
  } else {
    v_492 = sub_571;
  };
  if (controller_v_276) {
    sub_584 = v_492;
  } else {
    sub_584 = sub_571;
  };
  if (controller_c_air_2) {
    v_498 = v_497;
  } else {
    v_498 = sub_584;
  };
  if (controller_v_277) {
    sub_586 = sub_578;
  } else {
    sub_586 = false;
  };
  if (controller_v_276) {
    sub_585 = sub_586;
  } else {
    sub_585 = sub_577;
  };
  if (controller_c_air_1) {
    sub_569 = v_498;
  } else {
    sub_569 = sub_585;
  };
  sub_568 = sub_569;
  if (controller_c_air_2) {
    v_490 = sub_570;
  } else {
    v_490 = sub_584;
  };
  if (controller_v_277) {
    sub_588 = false;
  } else {
    sub_588 = sub_578;
  };
  if (controller_v_276) {
    v_487 = sub_588;
  } else {
    v_487 = false;
  };
  if (controller_c_air_2) {
    v_488 = v_487;
  } else {
    v_488 = false;
  };
  if (controller_v_276) {
    sub_589 = sub_586;
  } else {
    sub_589 = sub_588;
  };
  if (controller_c_air_1) {
    v_489 = v_488;
  } else {
    v_489 = sub_589;
  };
  if (controller_v_276) {
    sub_590 = false;
  } else {
    sub_590 = sub_570;
  };
  if (controller_c_air_1) {
    v_491 = v_490;
  } else {
    v_491 = sub_590;
  };
  if (controller_c_closet) {
    sub_587 = v_489;
  } else {
    sub_587 = v_491;
  };
  if (controller_closet_failed_recovered) {
    v_499 = sub_587;
    sub_567 = sub_568;
  } else {
    v_499 = sub_568;
    sub_567 = sub_587;
  };
  if (controller_ck_62_1) {
    sub_566 = v_499;
  } else {
    sub_566 = sub_567;
  };
  sub_565 = sub_566;
  if (controller_change_shift) {
    sub_599 = sub_518;
    sub_600 = sub_572;
  } else {
    sub_599 = sub_572;
    sub_600 = sub_518;
  };
  if (controller_ck_1) {
    sub_598 = sub_600;
  } else {
    sub_598 = sub_599;
  };
  if (controller_v_277) {
    sub_597 = sub_598;
  } else {
    sub_597 = false;
  };
  if (controller_change_shift) {
    sub_603 = sub_525;
    sub_604 = sub_579;
  } else {
    sub_603 = sub_579;
    sub_604 = sub_525;
  };
  if (controller_ck_1) {
    sub_602 = sub_604;
  } else {
    sub_602 = sub_603;
  };
  if (controller_v_277) {
    sub_601 = sub_598;
  } else {
    sub_601 = sub_602;
  };
  if (controller_v_276) {
    v_483 = sub_601;
  } else {
    v_483 = sub_597;
  };
  if (controller_v_277) {
    v_482 = false;
  } else {
    v_482 = sub_598;
  };
  if (controller_v_276) {
    sub_605 = v_482;
  } else {
    sub_605 = sub_598;
  };
  if (controller_c_air_2) {
    v_484 = v_483;
  } else {
    v_484 = sub_605;
  };
  if (controller_v_277) {
    sub_607 = sub_602;
  } else {
    sub_607 = false;
  };
  if (controller_v_276) {
    sub_606 = sub_607;
  } else {
    sub_606 = sub_601;
  };
  if (controller_c_air_1) {
    sub_596 = v_484;
  } else {
    sub_596 = sub_606;
  };
  sub_595 = sub_596;
  if (controller_c_air_2) {
    v_480 = sub_597;
  } else {
    v_480 = sub_605;
  };
  if (controller_v_277) {
    sub_609 = false;
  } else {
    sub_609 = sub_602;
  };
  if (controller_v_276) {
    v_477 = sub_609;
  } else {
    v_477 = false;
  };
  if (controller_c_air_2) {
    v_478 = v_477;
  } else {
    v_478 = false;
  };
  if (controller_v_276) {
    sub_610 = sub_607;
  } else {
    sub_610 = sub_609;
  };
  if (controller_c_air_1) {
    v_479 = v_478;
  } else {
    v_479 = sub_610;
  };
  if (controller_v_276) {
    sub_611 = false;
  } else {
    sub_611 = sub_597;
  };
  if (controller_c_air_1) {
    v_481 = v_480;
  } else {
    v_481 = sub_611;
  };
  if (controller_c_closet) {
    sub_608 = v_479;
  } else {
    sub_608 = v_481;
  };
  if (controller_closet_failed_recovered) {
    v_485 = sub_608;
    sub_594 = sub_595;
  } else {
    v_485 = sub_595;
    sub_594 = sub_608;
  };
  if (controller_ck_62_1) {
    sub_593 = v_485;
  } else {
    sub_593 = sub_594;
  };
  if (controller_blind_failed_recovered) {
    v_486 = sub_593;
    sub_592 = sub_566;
  } else {
    v_486 = sub_566;
    sub_592 = sub_593;
  };
  if (controller_ck_72_1) {
    sub_591 = v_486;
  } else {
    sub_591 = sub_592;
  };
  if (controller_ck_70_1) {
    v_500 = sub_591;
  } else {
    v_500 = sub_565;
  };
  if (controller_blind_switch) {
    v_501 = v_500;
  } else {
    v_501 = sub_591;
  };
  if (controller_c_blind_1) {
    sub_564 = v_501;
  } else {
    sub_564 = sub_591;
  };
  if (controller_ck_65_1) {
    sub_563 = sub_560;
  } else {
    sub_563 = sub_564;
  };
  if (controller_light_failed_recovered) {
    v_502 = sub_563;
    sub_562 = sub_509;
  } else {
    v_502 = sub_509;
    sub_562 = sub_563;
  };
  if (controller_ck_67_1) {
    sub_561 = v_502;
  } else {
    sub_561 = sub_562;
  };
  if (controller_light_switch) {
    v_535 = v_534;
  } else {
    v_535 = sub_561;
  };
  if (controller_c_light_1) {
    sub_507 = v_535;
  } else {
    sub_507 = sub_561;
  };
  if (controller_air_failed_recovered) {
    v_572 = sub_507;
    sub_337 = sub_338;
  } else {
    v_572 = sub_338;
    sub_337 = sub_507;
  };
  if (controller_ck_52_1) {
    sub_336 = v_572;
  } else {
    sub_336 = sub_337;
  };
  if (controller_worker) {
    v_722 = sub_336;
    sub_2 = sub_3;
  } else {
    v_722 = sub_3;
    sub_2 = sub_336;
  };
  if (controller_ck_35_1) {
    sub_1 = v_722;
  } else {
    sub_1 = sub_2;
  };
  if (controller_cleaner) {
    v_466 = sub_131;
    sub_627 = sub_205;
  } else {
    v_466 = sub_205;
    sub_627 = sub_131;
  };
  if (controller_ck_37_1) {
    sub_626 = v_466;
  } else {
    sub_626 = sub_627;
  };
  sub_625 = sub_626;
  sub_624 = sub_625;
  sub_623 = sub_624;
  sub_622 = sub_623;
  if (controller_c_closet) {
    sub_628 = sub_209;
  } else {
    sub_628 = sub_148;
  };
  if (controller_closet_failed_recovered) {
    v_467 = sub_628;
    sub_621 = sub_622;
  } else {
    v_467 = sub_622;
    sub_621 = sub_628;
  };
  if (controller_ck_62_1) {
    sub_620 = v_467;
  } else {
    sub_620 = sub_621;
  };
  sub_631 = sub_209;
  if (controller_c_closet) {
    sub_632 = sub_209;
  } else {
    sub_632 = false;
  };
  if (controller_closet_failed_recovered) {
    v_465 = sub_632;
    sub_630 = sub_631;
  } else {
    v_465 = sub_631;
    sub_630 = sub_632;
  };
  if (controller_ck_62_1) {
    sub_629 = v_465;
  } else {
    sub_629 = sub_630;
  };
  if (controller_blind_failed_recovered) {
    v_468 = sub_629;
    sub_619 = sub_620;
  } else {
    v_468 = sub_620;
    sub_619 = sub_629;
  };
  if (controller_ck_72_1) {
    sub_618 = v_468;
  } else {
    sub_618 = sub_619;
  };
  sub_639 = sub_178;
  sub_638 = sub_639;
  sub_637 = sub_638;
  sub_636 = sub_637;
  if (controller_c_closet) {
    sub_640 = false;
  } else {
    sub_640 = sub_637;
  };
  if (controller_closet_failed_recovered) {
    v_464 = sub_640;
    sub_635 = sub_636;
  } else {
    v_464 = sub_636;
    sub_635 = sub_640;
  };
  if (controller_ck_62_1) {
    sub_634 = v_464;
  } else {
    sub_634 = sub_635;
  };
  if (controller_blind_failed_recovered) {
    v_469 = sub_634;
    sub_633 = sub_620;
  } else {
    v_469 = sub_620;
    sub_633 = sub_634;
  };
  if (controller_ck_72_1) {
    v_470 = v_469;
  } else {
    v_470 = sub_633;
  };
  if (controller_ck_70_1) {
    v_471 = v_470;
  } else {
    v_471 = sub_618;
  };
  if (controller_cleaner) {
    v_461 = sub_180;
    sub_650 = sub_205;
  } else {
    v_461 = sub_205;
    sub_650 = sub_180;
  };
  if (controller_ck_37_1) {
    sub_649 = v_461;
  } else {
    sub_649 = sub_650;
  };
  sub_648 = sub_649;
  sub_647 = sub_648;
  sub_646 = sub_647;
  sub_645 = sub_646;
  if (controller_c_closet) {
    sub_651 = sub_209;
  } else {
    sub_651 = sub_637;
  };
  if (controller_closet_failed_recovered) {
    v_462 = sub_651;
    sub_644 = sub_645;
  } else {
    v_462 = sub_645;
    sub_644 = sub_651;
  };
  if (controller_ck_62_1) {
    sub_643 = v_462;
  } else {
    sub_643 = sub_644;
  };
  if (controller_blind_failed_recovered) {
    v_463 = sub_643;
    sub_642 = sub_620;
  } else {
    v_463 = sub_620;
    sub_642 = sub_643;
  };
  if (controller_ck_72_1) {
    sub_641 = v_463;
  } else {
    sub_641 = sub_642;
  };
  if (controller_blind_switch) {
    v_472 = v_471;
  } else {
    v_472 = sub_641;
  };
  if (controller_c_blind_1) {
    sub_617 = v_472;
  } else {
    sub_617 = sub_641;
  };
  sub_654 = sub_629;
  if (controller_change_shift) {
    v_452 = false;
    sub_662 = sub_178;
  } else {
    v_452 = sub_178;
    sub_662 = false;
  };
  if (controller_ck_1) {
    sub_661 = v_452;
  } else {
    sub_661 = sub_662;
  };
  sub_660 = sub_661;
  sub_659 = sub_660;
  sub_658 = sub_659;
  if (controller_c_closet) {
    sub_663 = false;
  } else {
    sub_663 = sub_659;
  };
  if (controller_closet_failed_recovered) {
    v_453 = sub_663;
    sub_657 = sub_658;
  } else {
    v_453 = sub_658;
    sub_657 = sub_663;
  };
  if (controller_ck_62_1) {
    sub_656 = v_453;
  } else {
    sub_656 = sub_657;
  };
  if (controller_blind_failed_recovered) {
    v_454 = sub_656;
    sub_655 = sub_629;
  } else {
    v_454 = sub_629;
    sub_655 = sub_656;
  };
  if (controller_ck_72_1) {
    v_455 = v_454;
  } else {
    v_455 = sub_655;
  };
  if (controller_ck_70_1) {
    v_456 = v_455;
  } else {
    v_456 = sub_654;
  };
  if (controller_change_shift) {
    v_449 = sub_212;
    sub_672 = sub_649;
  } else {
    v_449 = sub_649;
    sub_672 = sub_212;
  };
  if (controller_ck_1) {
    sub_671 = v_449;
  } else {
    sub_671 = sub_672;
  };
  sub_670 = sub_671;
  sub_669 = sub_670;
  sub_668 = sub_669;
  if (controller_c_closet) {
    sub_673 = sub_209;
  } else {
    sub_673 = sub_659;
  };
  if (controller_closet_failed_recovered) {
    v_450 = sub_673;
    sub_667 = sub_668;
  } else {
    v_450 = sub_668;
    sub_667 = sub_673;
  };
  if (controller_ck_62_1) {
    sub_666 = v_450;
  } else {
    sub_666 = sub_667;
  };
  if (controller_blind_failed_recovered) {
    v_451 = sub_666;
    sub_665 = sub_629;
  } else {
    v_451 = sub_629;
    sub_665 = sub_666;
  };
  if (controller_ck_72_1) {
    sub_664 = v_451;
  } else {
    sub_664 = sub_665;
  };
  if (controller_blind_switch) {
    v_457 = v_456;
  } else {
    v_457 = sub_664;
  };
  if (controller_c_blind_1) {
    sub_653 = v_457;
  } else {
    sub_653 = sub_664;
  };
  sub_678 = sub_148;
  if (controller_c_closet) {
    sub_679 = false;
  } else {
    sub_679 = sub_148;
  };
  if (controller_closet_failed_recovered) {
    v_447 = sub_679;
    sub_677 = sub_678;
  } else {
    v_447 = sub_678;
    sub_677 = sub_679;
  };
  if (controller_ck_62_1) {
    sub_676 = v_447;
  } else {
    sub_676 = sub_677;
  };
  sub_682 = sub_165;
  if (controller_c_closet) {
    sub_683 = false;
  } else {
    sub_683 = sub_165;
  };
  if (controller_closet_failed_recovered) {
    v_446 = sub_683;
    sub_681 = sub_682;
  } else {
    v_446 = sub_682;
    sub_681 = sub_683;
  };
  if (controller_ck_62_1) {
    sub_680 = v_446;
  } else {
    sub_680 = sub_681;
  };
  if (controller_blind_failed_recovered) {
    v_448 = sub_680;
    sub_675 = sub_676;
  } else {
    v_448 = sub_676;
    sub_675 = sub_680;
  };
  if (controller_ck_72_1) {
    sub_674 = v_448;
  } else {
    sub_674 = sub_675;
  };
  if (controller_blind_failed_recovered) {
    v_445 = sub_634;
    sub_685 = sub_676;
  } else {
    v_445 = sub_676;
    sub_685 = sub_634;
  };
  if (controller_ck_72_1) {
    sub_684 = v_445;
  } else {
    sub_684 = sub_685;
  };
  if (controller_ck_70_1) {
    v_458 = sub_684;
  } else {
    v_458 = sub_674;
  };
  if (controller_blind_switch) {
    v_459 = v_458;
  } else {
    v_459 = sub_684;
  };
  if (controller_c_blind_1) {
    v_460 = v_459;
  } else {
    v_460 = sub_684;
  };
  if (controller_ck_65_1) {
    sub_652 = v_460;
  } else {
    sub_652 = sub_653;
  };
  if (controller_light_failed_recovered) {
    v_473 = sub_652;
    sub_616 = sub_617;
  } else {
    v_473 = sub_617;
    sub_616 = sub_652;
  };
  if (controller_ck_67_1) {
    v_474 = v_473;
  } else {
    v_474 = sub_616;
  };
  if (controller_blind_failed_recovered) {
    v_435 = sub_634;
    sub_690 = sub_123;
  } else {
    v_435 = sub_123;
    sub_690 = sub_634;
  };
  if (controller_ck_72_1) {
    v_436 = v_435;
  } else {
    v_436 = sub_690;
  };
  if (controller_ck_70_1) {
    v_437 = v_436;
  } else {
    v_437 = sub_121;
  };
  sub_698 = sub_192;
  sub_697 = sub_698;
  sub_696 = sub_697;
  sub_695 = sub_696;
  if (controller_c_closet) {
    sub_699 = sub_38;
  } else {
    sub_699 = sub_637;
  };
  if (controller_closet_failed_recovered) {
    v_433 = sub_699;
    sub_694 = sub_695;
  } else {
    v_433 = sub_695;
    sub_694 = sub_699;
  };
  if (controller_ck_62_1) {
    sub_693 = v_433;
  } else {
    sub_693 = sub_694;
  };
  if (controller_blind_failed_recovered) {
    v_434 = sub_693;
    sub_692 = sub_123;
  } else {
    v_434 = sub_123;
    sub_692 = sub_693;
  };
  if (controller_ck_72_1) {
    sub_691 = v_434;
  } else {
    sub_691 = sub_692;
  };
  if (controller_blind_switch) {
    v_438 = v_437;
  } else {
    v_438 = sub_691;
  };
  if (controller_c_blind_1) {
    sub_689 = v_438;
  } else {
    sub_689 = sub_691;
  };
  if (controller_ck_1) {
    sub_706 = sub_177;
  } else {
    sub_706 = sub_181;
  };
  sub_705 = sub_706;
  sub_704 = sub_705;
  sub_703 = sub_704;
  if (controller_c_closet) {
    sub_707 = false;
  } else {
    sub_707 = sub_704;
  };
  if (controller_closet_failed_recovered) {
    v_432 = sub_707;
    sub_702 = sub_703;
  } else {
    v_432 = sub_703;
    sub_702 = sub_707;
  };
  if (controller_ck_62_1) {
    sub_701 = v_432;
  } else {
    sub_701 = sub_702;
  };
  if (controller_blind_failed_recovered) {
    v_439 = sub_701;
    sub_700 = sub_197;
  } else {
    v_439 = sub_197;
    sub_700 = sub_701;
  };
  if (controller_ck_72_1) {
    v_440 = v_439;
  } else {
    v_440 = sub_700;
  };
  if (controller_ck_70_1) {
    v_441 = v_440;
  } else {
    v_441 = sub_195;
  };
  if (controller_change_shift) {
    v_429 = sub_233;
    sub_716 = sub_649;
  } else {
    v_429 = sub_649;
    sub_716 = sub_233;
  };
  if (controller_ck_1) {
    sub_715 = v_429;
  } else {
    sub_715 = sub_716;
  };
  sub_714 = sub_715;
  sub_713 = sub_714;
  sub_712 = sub_713;
  if (controller_c_closet) {
    sub_717 = sub_209;
  } else {
    sub_717 = sub_704;
  };
  if (controller_closet_failed_recovered) {
    v_430 = sub_717;
    sub_711 = sub_712;
  } else {
    v_430 = sub_712;
    sub_711 = sub_717;
  };
  if (controller_ck_62_1) {
    sub_710 = v_430;
  } else {
    sub_710 = sub_711;
  };
  if (controller_blind_failed_recovered) {
    v_431 = sub_710;
    sub_709 = sub_197;
  } else {
    v_431 = sub_197;
    sub_709 = sub_710;
  };
  if (controller_ck_72_1) {
    sub_708 = v_431;
  } else {
    sub_708 = sub_709;
  };
  if (controller_blind_switch) {
    v_442 = v_441;
  } else {
    v_442 = sub_708;
  };
  if (controller_c_blind_1) {
    v_443 = v_442;
  } else {
    v_443 = sub_708;
  };
  if (controller_ck_65_1) {
    sub_688 = v_443;
  } else {
    sub_688 = sub_689;
  };
  if (controller_light_failed_recovered) {
    v_444 = sub_688;
    sub_687 = sub_617;
  } else {
    v_444 = sub_617;
    sub_687 = sub_688;
  };
  if (controller_ck_67_1) {
    sub_686 = v_444;
  } else {
    sub_686 = sub_687;
  };
  if (controller_light_switch) {
    v_475 = v_474;
  } else {
    v_475 = sub_686;
  };
  if (controller_c_light_1) {
    sub_615 = v_475;
  } else {
    sub_615 = sub_686;
  };
  if (controller_v_276) {
    v_418 = sub_298;
  } else {
    v_418 = sub_329;
  };
  if (controller_c_air_2) {
    v_419 = v_418;
  } else {
    v_419 = sub_330;
  };
  if (controller_v_277) {
    v_417 = sub_299;
  } else {
    v_417 = sub_211;
  };
  if (controller_v_276) {
    sub_727 = v_417;
  } else {
    sub_727 = sub_298;
  };
  if (controller_c_air_1) {
    sub_726 = v_419;
  } else {
    sub_726 = sub_727;
  };
  sub_725 = sub_726;
  if (controller_c_closet) {
    sub_728 = sub_333;
  } else {
    sub_728 = sub_303;
  };
  if (controller_closet_failed_recovered) {
    v_420 = sub_728;
    sub_724 = sub_725;
  } else {
    v_420 = sub_725;
    sub_724 = sub_728;
  };
  if (controller_ck_62_1) {
    sub_723 = v_420;
  } else {
    sub_723 = sub_724;
  };
  sub_731 = sub_333;
  if (controller_c_closet) {
    sub_732 = sub_333;
  } else {
    sub_732 = false;
  };
  if (controller_closet_failed_recovered) {
    v_416 = sub_732;
    sub_730 = sub_731;
  } else {
    v_416 = sub_731;
    sub_730 = sub_732;
  };
  if (controller_ck_62_1) {
    sub_729 = v_416;
  } else {
    sub_729 = sub_730;
  };
  if (controller_blind_failed_recovered) {
    v_421 = sub_729;
    sub_722 = sub_723;
  } else {
    v_421 = sub_723;
    sub_722 = sub_729;
  };
  if (controller_ck_72_1) {
    sub_721 = v_421;
  } else {
    sub_721 = sub_722;
  };
  sub_736 = sub_303;
  if (controller_c_closet) {
    sub_737 = false;
  } else {
    sub_737 = sub_303;
  };
  if (controller_closet_failed_recovered) {
    v_415 = sub_737;
    sub_735 = sub_736;
  } else {
    v_415 = sub_736;
    sub_735 = sub_737;
  };
  if (controller_ck_62_1) {
    sub_734 = v_415;
  } else {
    sub_734 = sub_735;
  };
  if (controller_blind_failed_recovered) {
    v_422 = sub_734;
    sub_733 = sub_723;
  } else {
    v_422 = sub_723;
    sub_733 = sub_734;
  };
  if (controller_ck_72_1) {
    v_423 = v_422;
  } else {
    v_423 = sub_733;
  };
  if (controller_ck_70_1) {
    v_424 = v_423;
  } else {
    v_424 = sub_721;
  };
  sub_738 = sub_723;
  if (controller_blind_switch) {
    v_425 = v_424;
  } else {
    v_425 = sub_738;
  };
  if (controller_c_blind_1) {
    sub_720 = v_425;
  } else {
    sub_720 = sub_738;
  };
  sub_741 = sub_729;
  if (controller_change_shift) {
    v_407 = false;
    sub_749 = sub_300;
  } else {
    v_407 = sub_300;
    sub_749 = false;
  };
  if (controller_ck_1) {
    sub_748 = v_407;
  } else {
    sub_748 = sub_749;
  };
  if (controller_v_277) {
    sub_747 = false;
  } else {
    sub_747 = sub_748;
  };
  if (controller_v_276) {
    v_408 = sub_747;
  } else {
    v_408 = false;
  };
  if (controller_c_air_2) {
    v_409 = v_408;
  } else {
    v_409 = false;
  };
  if (controller_v_277) {
    v_406 = sub_748;
  } else {
    v_406 = false;
  };
  if (controller_v_276) {
    sub_750 = v_406;
  } else {
    sub_750 = sub_747;
  };
  if (controller_c_air_1) {
    sub_746 = v_409;
  } else {
    sub_746 = sub_750;
  };
  sub_745 = sub_746;
  if (controller_c_closet) {
    sub_751 = false;
  } else {
    sub_751 = sub_746;
  };
  if (controller_closet_failed_recovered) {
    v_410 = sub_751;
    sub_744 = sub_745;
  } else {
    v_410 = sub_745;
    sub_744 = sub_751;
  };
  if (controller_ck_62_1) {
    sub_743 = v_410;
  } else {
    sub_743 = sub_744;
  };
  if (controller_blind_failed_recovered) {
    v_411 = sub_743;
    sub_742 = sub_729;
  } else {
    v_411 = sub_729;
    sub_742 = sub_743;
  };
  if (controller_ck_72_1) {
    v_412 = v_411;
  } else {
    v_412 = sub_742;
  };
  if (controller_ck_70_1) {
    v_413 = v_412;
  } else {
    v_413 = sub_741;
  };
  if (controller_v_276) {
    v_402 = sub_747;
  } else {
    v_402 = sub_329;
  };
  if (controller_c_air_2) {
    v_403 = v_402;
  } else {
    v_403 = sub_330;
  };
  if (controller_v_277) {
    v_401 = sub_748;
  } else {
    v_401 = sub_211;
  };
  if (controller_v_276) {
    sub_758 = v_401;
  } else {
    sub_758 = sub_747;
  };
  if (controller_c_air_1) {
    sub_757 = v_403;
  } else {
    sub_757 = sub_758;
  };
  sub_756 = sub_757;
  if (controller_c_closet) {
    sub_759 = sub_333;
  } else {
    sub_759 = sub_746;
  };
  if (controller_closet_failed_recovered) {
    v_404 = sub_759;
    sub_755 = sub_756;
  } else {
    v_404 = sub_756;
    sub_755 = sub_759;
  };
  if (controller_ck_62_1) {
    sub_754 = v_404;
  } else {
    sub_754 = sub_755;
  };
  if (controller_blind_failed_recovered) {
    v_405 = sub_754;
    sub_753 = sub_729;
  } else {
    v_405 = sub_729;
    sub_753 = sub_754;
  };
  if (controller_ck_72_1) {
    sub_752 = v_405;
  } else {
    sub_752 = sub_753;
  };
  if (controller_blind_switch) {
    v_414 = v_413;
  } else {
    v_414 = sub_752;
  };
  if (controller_c_blind_1) {
    sub_740 = v_414;
  } else {
    sub_740 = sub_752;
  };
  sub_761 = sub_734;
  sub_760 = sub_761;
  if (controller_ck_65_1) {
    sub_739 = sub_760;
  } else {
    sub_739 = sub_740;
  };
  if (controller_light_failed_recovered) {
    v_426 = sub_739;
    sub_719 = sub_720;
  } else {
    v_426 = sub_720;
    sub_719 = sub_739;
  };
  if (controller_ck_67_1) {
    v_427 = v_426;
  } else {
    v_427 = sub_719;
  };
  if (controller_blind_failed_recovered) {
    v_391 = sub_734;
    sub_766 = sub_294;
  } else {
    v_391 = sub_294;
    sub_766 = sub_734;
  };
  if (controller_ck_72_1) {
    v_392 = v_391;
  } else {
    v_392 = sub_766;
  };
  if (controller_ck_70_1) {
    v_393 = v_392;
  } else {
    v_393 = sub_293;
  };
  if (controller_blind_switch) {
    v_394 = v_393;
  } else {
    v_394 = sub_293;
  };
  if (controller_c_blind_1) {
    sub_765 = v_394;
  } else {
    sub_765 = sub_293;
  };
  if (controller_ck_1) {
    sub_773 = sub_312;
  } else {
    sub_773 = sub_313;
  };
  if (controller_v_277) {
    sub_772 = false;
  } else {
    sub_772 = sub_773;
  };
  if (controller_v_276) {
    v_388 = sub_772;
  } else {
    v_388 = false;
  };
  if (controller_c_air_2) {
    v_389 = v_388;
  } else {
    v_389 = false;
  };
  if (controller_v_277) {
    v_387 = sub_773;
  } else {
    v_387 = false;
  };
  if (controller_v_276) {
    sub_774 = v_387;
  } else {
    sub_774 = sub_772;
  };
  if (controller_c_air_1) {
    sub_771 = v_389;
  } else {
    sub_771 = sub_774;
  };
  sub_770 = sub_771;
  if (controller_c_closet) {
    sub_775 = false;
  } else {
    sub_775 = sub_771;
  };
  if (controller_closet_failed_recovered) {
    v_390 = sub_775;
    sub_769 = sub_770;
  } else {
    v_390 = sub_770;
    sub_769 = sub_775;
  };
  if (controller_ck_62_1) {
    sub_768 = v_390;
  } else {
    sub_768 = sub_769;
  };
  if (controller_blind_failed_recovered) {
    v_395 = sub_768;
    sub_767 = sub_325;
  } else {
    v_395 = sub_325;
    sub_767 = sub_768;
  };
  if (controller_ck_72_1) {
    v_396 = v_395;
  } else {
    v_396 = sub_767;
  };
  if (controller_ck_70_1) {
    v_397 = v_396;
  } else {
    v_397 = sub_324;
  };
  if (controller_v_276) {
    v_383 = sub_772;
  } else {
    v_383 = sub_329;
  };
  if (controller_c_air_2) {
    v_384 = v_383;
  } else {
    v_384 = sub_330;
  };
  if (controller_v_277) {
    v_382 = sub_773;
  } else {
    v_382 = sub_211;
  };
  if (controller_v_276) {
    sub_782 = v_382;
  } else {
    sub_782 = sub_772;
  };
  if (controller_c_air_1) {
    sub_781 = v_384;
  } else {
    sub_781 = sub_782;
  };
  sub_780 = sub_781;
  if (controller_c_closet) {
    sub_783 = sub_333;
  } else {
    sub_783 = sub_771;
  };
  if (controller_closet_failed_recovered) {
    v_385 = sub_783;
    sub_779 = sub_780;
  } else {
    v_385 = sub_780;
    sub_779 = sub_783;
  };
  if (controller_ck_62_1) {
    sub_778 = v_385;
  } else {
    sub_778 = sub_779;
  };
  if (controller_blind_failed_recovered) {
    v_386 = sub_778;
    sub_777 = sub_325;
  } else {
    v_386 = sub_325;
    sub_777 = sub_778;
  };
  if (controller_ck_72_1) {
    sub_776 = v_386;
  } else {
    sub_776 = sub_777;
  };
  if (controller_blind_switch) {
    v_398 = v_397;
  } else {
    v_398 = sub_776;
  };
  if (controller_c_blind_1) {
    v_399 = v_398;
  } else {
    v_399 = sub_776;
  };
  if (controller_ck_65_1) {
    sub_764 = v_399;
  } else {
    sub_764 = sub_765;
  };
  if (controller_light_failed_recovered) {
    v_400 = sub_764;
    sub_763 = sub_720;
  } else {
    v_400 = sub_720;
    sub_763 = sub_764;
  };
  if (controller_ck_67_1) {
    sub_762 = v_400;
  } else {
    sub_762 = sub_763;
  };
  if (controller_light_switch) {
    v_428 = v_427;
  } else {
    v_428 = sub_762;
  };
  if (controller_c_light_1) {
    sub_718 = v_428;
  } else {
    sub_718 = sub_762;
  };
  if (controller_air_failed_recovered) {
    v_476 = sub_718;
    sub_614 = sub_615;
  } else {
    v_476 = sub_615;
    sub_614 = sub_718;
  };
  if (controller_ck_52_1) {
    sub_613 = v_476;
  } else {
    sub_613 = sub_614;
  };
  if (controller_blind_failed_recovered) {
    v_375 = false;
    sub_790 = sub_436;
  } else {
    v_375 = sub_436;
    sub_790 = false;
  };
  if (controller_ck_72_1) {
    sub_789 = v_375;
  } else {
    sub_789 = sub_790;
  };
  sub_798 = sub_491;
  sub_797 = sub_798;
  sub_796 = sub_797;
  sub_795 = sub_796;
  sub_801 = sub_498;
  sub_800 = sub_801;
  sub_803 = sub_505;
  sub_802 = sub_803;
  if (controller_c_closet) {
    sub_799 = sub_800;
  } else {
    sub_799 = sub_802;
  };
  if (controller_closet_failed_recovered) {
    v_373 = sub_799;
    sub_794 = sub_795;
  } else {
    v_373 = sub_795;
    sub_794 = sub_799;
  };
  if (controller_ck_62_1) {
    sub_793 = v_373;
  } else {
    sub_793 = sub_794;
  };
  if (controller_blind_failed_recovered) {
    v_374 = sub_793;
    sub_792 = sub_436;
  } else {
    v_374 = sub_436;
    sub_792 = sub_793;
  };
  if (controller_ck_72_1) {
    sub_791 = v_374;
  } else {
    sub_791 = sub_792;
  };
  if (controller_ck_70_1) {
    v_376 = sub_791;
  } else {
    v_376 = sub_789;
  };
  if (controller_blind_switch) {
    v_377 = v_376;
  } else {
    v_377 = sub_791;
  };
  sub_804 = sub_791;
  if (controller_c_blind_1) {
    sub_788 = v_377;
  } else {
    sub_788 = sub_804;
  };
  if (controller_change_shift) {
    v_368 = false;
    sub_815 = sub_491;
  } else {
    v_368 = sub_491;
    sub_815 = false;
  };
  if (controller_ck_1) {
    sub_814 = v_368;
  } else {
    sub_814 = sub_815;
  };
  sub_813 = sub_814;
  sub_812 = sub_813;
  sub_811 = sub_812;
  if (controller_change_shift) {
    v_367 = false;
    sub_819 = sub_498;
  } else {
    v_367 = sub_498;
    sub_819 = false;
  };
  if (controller_ck_1) {
    sub_818 = v_367;
  } else {
    sub_818 = sub_819;
  };
  sub_817 = sub_818;
  if (controller_change_shift) {
    v_366 = false;
    sub_822 = sub_505;
  } else {
    v_366 = sub_505;
    sub_822 = false;
  };
  if (controller_ck_1) {
    sub_821 = v_366;
  } else {
    sub_821 = sub_822;
  };
  sub_820 = sub_821;
  if (controller_c_closet) {
    sub_816 = sub_817;
  } else {
    sub_816 = sub_820;
  };
  if (controller_closet_failed_recovered) {
    v_369 = sub_816;
    sub_810 = sub_811;
  } else {
    v_369 = sub_811;
    sub_810 = sub_816;
  };
  if (controller_ck_62_1) {
    sub_809 = v_369;
  } else {
    sub_809 = sub_810;
  };
  if (controller_blind_failed_recovered) {
    v_370 = sub_809;
    sub_808 = false;
  } else {
    v_370 = false;
    sub_808 = sub_809;
  };
  if (controller_ck_72_1) {
    sub_807 = v_370;
  } else {
    sub_807 = sub_808;
  };
  if (controller_ck_70_1) {
    v_371 = sub_807;
  } else {
    v_371 = false;
  };
  if (controller_blind_switch) {
    v_372 = v_371;
  } else {
    v_372 = sub_807;
  };
  if (controller_c_blind_1) {
    sub_806 = v_372;
  } else {
    sub_806 = sub_807;
  };
  if (controller_ck_70_1) {
    v_364 = sub_791;
  } else {
    v_364 = sub_434;
  };
  if (controller_blind_switch) {
    v_365 = v_364;
  } else {
    v_365 = sub_791;
  };
  if (controller_c_blind_1) {
    sub_823 = v_365;
  } else {
    sub_823 = sub_804;
  };
  if (controller_ck_65_1) {
    sub_805 = sub_823;
  } else {
    sub_805 = sub_806;
  };
  if (controller_light_failed_recovered) {
    v_378 = sub_805;
    sub_787 = sub_788;
  } else {
    v_378 = sub_788;
    sub_787 = sub_805;
  };
  if (controller_ck_67_1) {
    v_379 = v_378;
  } else {
    v_379 = sub_787;
  };
  if (controller_ck_1) {
    sub_834 = sub_490;
  } else {
    sub_834 = sub_493;
  };
  sub_833 = sub_834;
  sub_832 = sub_833;
  sub_831 = sub_832;
  if (controller_ck_1) {
    sub_837 = sub_497;
  } else {
    sub_837 = sub_501;
  };
  sub_836 = sub_837;
  if (controller_ck_1) {
    sub_839 = sub_504;
  } else {
    sub_839 = sub_506;
  };
  sub_838 = sub_839;
  if (controller_c_closet) {
    sub_835 = sub_836;
  } else {
    sub_835 = sub_838;
  };
  if (controller_closet_failed_recovered) {
    v_358 = sub_835;
    sub_830 = sub_831;
  } else {
    v_358 = sub_831;
    sub_830 = sub_835;
  };
  if (controller_ck_62_1) {
    sub_829 = v_358;
  } else {
    sub_829 = sub_830;
  };
  if (controller_blind_failed_recovered) {
    v_359 = sub_829;
    sub_828 = sub_343;
  } else {
    v_359 = sub_343;
    sub_828 = sub_829;
  };
  if (controller_ck_72_1) {
    sub_827 = v_359;
  } else {
    sub_827 = sub_828;
  };
  if (controller_ck_70_1) {
    v_360 = sub_827;
  } else {
    v_360 = sub_411;
  };
  if (controller_blind_switch) {
    v_361 = v_360;
  } else {
    v_361 = sub_827;
  };
  if (controller_c_blind_1) {
    v_362 = v_361;
  } else {
    v_362 = sub_827;
  };
  if (controller_ck_65_1) {
    sub_826 = v_362;
  } else {
    sub_826 = sub_823;
  };
  if (controller_light_failed_recovered) {
    v_363 = sub_826;
    sub_825 = sub_788;
  } else {
    v_363 = sub_788;
    sub_825 = sub_826;
  };
  if (controller_ck_67_1) {
    sub_824 = v_363;
  } else {
    sub_824 = sub_825;
  };
  if (controller_light_switch) {
    v_380 = v_379;
  } else {
    v_380 = sub_824;
  };
  if (controller_c_light_1) {
    sub_786 = v_380;
  } else {
    sub_786 = sub_824;
  };
  if (controller_blind_failed_recovered) {
    v_352 = false;
    sub_844 = sub_566;
  } else {
    v_352 = sub_566;
    sub_844 = false;
  };
  if (controller_ck_72_1) {
    sub_843 = v_352;
  } else {
    sub_843 = sub_844;
  };
  if (controller_ck_70_1) {
    v_353 = sub_565;
  } else {
    v_353 = sub_843;
  };
  if (controller_blind_switch) {
    v_354 = v_353;
  } else {
    v_354 = sub_565;
  };
  sub_845 = sub_565;
  if (controller_c_blind_1) {
    sub_842 = v_354;
  } else {
    sub_842 = sub_845;
  };
  if (controller_change_shift) {
    v_345 = false;
    sub_856 = sub_572;
  } else {
    v_345 = sub_572;
    sub_856 = false;
  };
  if (controller_ck_1) {
    sub_855 = v_345;
  } else {
    sub_855 = sub_856;
  };
  if (controller_v_277) {
    sub_854 = sub_855;
  } else {
    sub_854 = false;
  };
  if (controller_change_shift) {
    v_344 = false;
    sub_859 = sub_579;
  } else {
    v_344 = sub_579;
    sub_859 = false;
  };
  if (controller_ck_1) {
    sub_858 = v_344;
  } else {
    sub_858 = sub_859;
  };
  if (controller_v_277) {
    sub_857 = sub_855;
  } else {
    sub_857 = sub_858;
  };
  if (controller_v_276) {
    v_346 = sub_857;
  } else {
    v_346 = sub_854;
  };
  if (controller_v_277) {
    v_343 = false;
  } else {
    v_343 = sub_855;
  };
  if (controller_v_276) {
    sub_860 = v_343;
  } else {
    sub_860 = sub_855;
  };
  if (controller_c_air_2) {
    v_347 = v_346;
  } else {
    v_347 = sub_860;
  };
  if (controller_v_277) {
    sub_862 = sub_858;
  } else {
    sub_862 = false;
  };
  if (controller_v_276) {
    sub_861 = sub_862;
  } else {
    sub_861 = sub_857;
  };
  if (controller_c_air_1) {
    sub_853 = v_347;
  } else {
    sub_853 = sub_861;
  };
  sub_852 = sub_853;
  if (controller_c_air_2) {
    v_341 = sub_854;
  } else {
    v_341 = sub_860;
  };
  if (controller_v_277) {
    sub_864 = false;
  } else {
    sub_864 = sub_858;
  };
  if (controller_v_276) {
    v_338 = sub_864;
  } else {
    v_338 = false;
  };
  if (controller_c_air_2) {
    v_339 = v_338;
  } else {
    v_339 = false;
  };
  if (controller_v_276) {
    sub_865 = sub_862;
  } else {
    sub_865 = sub_864;
  };
  if (controller_c_air_1) {
    v_340 = v_339;
  } else {
    v_340 = sub_865;
  };
  if (controller_v_276) {
    sub_866 = false;
  } else {
    sub_866 = sub_854;
  };
  if (controller_c_air_1) {
    v_342 = v_341;
  } else {
    v_342 = sub_866;
  };
  if (controller_c_closet) {
    sub_863 = v_340;
  } else {
    sub_863 = v_342;
  };
  if (controller_closet_failed_recovered) {
    v_348 = sub_863;
    sub_851 = sub_852;
  } else {
    v_348 = sub_852;
    sub_851 = sub_863;
  };
  if (controller_ck_62_1) {
    sub_850 = v_348;
  } else {
    sub_850 = sub_851;
  };
  if (controller_blind_failed_recovered) {
    v_349 = sub_850;
    sub_849 = false;
  } else {
    v_349 = false;
    sub_849 = sub_850;
  };
  if (controller_ck_72_1) {
    sub_848 = v_349;
  } else {
    sub_848 = sub_849;
  };
  if (controller_ck_70_1) {
    v_350 = sub_848;
  } else {
    v_350 = false;
  };
  if (controller_blind_switch) {
    v_351 = v_350;
  } else {
    v_351 = sub_848;
  };
  if (controller_c_blind_1) {
    sub_847 = v_351;
  } else {
    sub_847 = sub_848;
  };
  sub_867 = sub_845;
  if (controller_ck_65_1) {
    sub_846 = sub_867;
  } else {
    sub_846 = sub_847;
  };
  if (controller_light_failed_recovered) {
    v_355 = sub_846;
    sub_841 = sub_842;
  } else {
    v_355 = sub_842;
    sub_841 = sub_846;
  };
  if (controller_ck_67_1) {
    v_356 = v_355;
  } else {
    v_356 = sub_841;
  };
  if (controller_ck_1) {
    sub_878 = sub_599;
  } else {
    sub_878 = sub_600;
  };
  if (controller_v_277) {
    sub_877 = sub_878;
  } else {
    sub_877 = false;
  };
  if (controller_ck_1) {
    sub_880 = sub_603;
  } else {
    sub_880 = sub_604;
  };
  if (controller_v_277) {
    sub_879 = sub_878;
  } else {
    sub_879 = sub_880;
  };
  if (controller_v_276) {
    v_330 = sub_879;
  } else {
    v_330 = sub_877;
  };
  if (controller_v_277) {
    v_329 = false;
  } else {
    v_329 = sub_878;
  };
  if (controller_v_276) {
    sub_881 = v_329;
  } else {
    sub_881 = sub_878;
  };
  if (controller_c_air_2) {
    v_331 = v_330;
  } else {
    v_331 = sub_881;
  };
  if (controller_v_277) {
    sub_883 = sub_880;
  } else {
    sub_883 = false;
  };
  if (controller_v_276) {
    sub_882 = sub_883;
  } else {
    sub_882 = sub_879;
  };
  if (controller_c_air_1) {
    sub_876 = v_331;
  } else {
    sub_876 = sub_882;
  };
  sub_875 = sub_876;
  if (controller_c_air_2) {
    v_327 = sub_877;
  } else {
    v_327 = sub_881;
  };
  if (controller_v_277) {
    sub_885 = false;
  } else {
    sub_885 = sub_880;
  };
  if (controller_v_276) {
    v = sub_885;
  } else {
    v = false;
  };
  if (controller_c_air_2) {
    v_325 = v;
  } else {
    v_325 = false;
  };
  if (controller_v_276) {
    sub_886 = sub_883;
  } else {
    sub_886 = sub_885;
  };
  if (controller_c_air_1) {
    v_326 = v_325;
  } else {
    v_326 = sub_886;
  };
  if (controller_v_276) {
    sub_887 = false;
  } else {
    sub_887 = sub_877;
  };
  if (controller_c_air_1) {
    v_328 = v_327;
  } else {
    v_328 = sub_887;
  };
  if (controller_c_closet) {
    sub_884 = v_326;
  } else {
    sub_884 = v_328;
  };
  if (controller_closet_failed_recovered) {
    v_332 = sub_884;
    sub_874 = sub_875;
  } else {
    v_332 = sub_875;
    sub_874 = sub_884;
  };
  if (controller_ck_62_1) {
    sub_873 = v_332;
  } else {
    sub_873 = sub_874;
  };
  if (controller_blind_failed_recovered) {
    v_333 = sub_873;
    sub_872 = sub_512;
  } else {
    v_333 = sub_512;
    sub_872 = sub_873;
  };
  if (controller_ck_72_1) {
    sub_871 = v_333;
  } else {
    sub_871 = sub_872;
  };
  if (controller_ck_70_1) {
    v_334 = sub_871;
  } else {
    v_334 = sub_537;
  };
  if (controller_blind_switch) {
    v_335 = v_334;
  } else {
    v_335 = sub_871;
  };
  if (controller_c_blind_1) {
    v_336 = v_335;
  } else {
    v_336 = sub_871;
  };
  if (controller_ck_65_1) {
    sub_870 = v_336;
  } else {
    sub_870 = sub_867;
  };
  if (controller_light_failed_recovered) {
    v_337 = sub_870;
    sub_869 = sub_842;
  } else {
    v_337 = sub_842;
    sub_869 = sub_870;
  };
  if (controller_ck_67_1) {
    sub_868 = v_337;
  } else {
    sub_868 = sub_869;
  };
  if (controller_light_switch) {
    v_357 = v_356;
  } else {
    v_357 = sub_868;
  };
  if (controller_c_light_1) {
    sub_840 = v_357;
  } else {
    sub_840 = sub_868;
  };
  if (controller_air_failed_recovered) {
    v_381 = sub_840;
    sub_785 = sub_786;
  } else {
    v_381 = sub_786;
    sub_785 = sub_840;
  };
  if (controller_ck_52_1) {
    sub_784 = v_381;
  } else {
    sub_784 = sub_785;
  };
  if (controller_worker) {
    v_723 = sub_784;
    sub_612 = sub_613;
  } else {
    v_723 = sub_613;
    sub_612 = sub_784;
  };
  if (controller_ck_35_1) {
    v_724 = v_723;
  } else {
    v_724 = sub_612;
  };
  if (p_controller_c_light_2) {
    sub_0 = v_724;
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
  int controller_pnr_22, int controller_ck_35_1, int controller_pnr_21,
  int controller_ck_37_1, int controller_pnr_20, int controller_ck_40_1,
  int controller_pnr_19, int controller_ck_42_1, int controller_pnr_18,
  int controller_ck_45_1, int controller_pnr_17, int controller_ck_47_1,
  int controller_pnr_16, int controller_v_277, int controller_v_276,
  int controller_pnr_15, int controller_ck_52_1, int controller_pnr_14,
  int controller_ck_55_1, int controller_pnr_13, int controller_ck_57_1,
  int controller_pnr_12, int controller_ck_60_1, int controller_pnr_11,
  int controller_ck_62_1, int controller_pnr_10, int controller_ck_65_1,
  int controller_pnr_9, int controller_ck_67_1, int controller_pnr_8,
  int controller_ck_70_1, int controller_pnr_7, int controller_ck_72_1,
  int controller_pnr, int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_light_1, int controller_c_closet,
  int controller_c_air_2, int controller_c_air_1, int controller_c_window,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_blind_1_out* _out) {
  
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
  int sub_591;
  int sub_592;
  int sub_593;
  int sub_594;
  int sub_595;
  int sub_596;
  int sub_597;
  int sub_598;
  int sub_599;
  int sub_600;
  int sub_601;
  int sub_602;
  int sub_603;
  int sub_604;
  int sub_605;
  int sub_606;
  int sub_607;
  int sub_608;
  int sub_609;
  int sub_610;
  int sub_611;
  int sub_612;
  int sub_613;
  int sub_614;
  int sub_615;
  int sub_616;
  int sub_617;
  int sub_618;
  int sub_619;
  int sub_620;
  int sub_621;
  int sub_622;
  int sub_623;
  int sub_624;
  int sub_625;
  int sub_626;
  int sub_627;
  int sub_628;
  int sub_629;
  int sub_630;
  int sub_631;
  int sub_632;
  int sub_633;
  int sub_634;
  int sub_635;
  int sub_636;
  int sub_637;
  int sub_638;
  int sub_639;
  int sub_640;
  int sub_641;
  int sub_642;
  int sub_643;
  int sub_644;
  int sub_645;
  int sub_646;
  int sub_647;
  int sub_648;
  int sub_649;
  v_972 = (controller_pc_failed_recovered&&false);
  v_971 = !(controller_pc_failed_recovered);
  sub_26 = (v_971&&false);
  if (controller_ck_47_1) {
    sub_25 = v_972;
  } else {
    sub_25 = sub_26;
  };
  sub_27 = false;
  if (controller_c_pc) {
    sub_24 = sub_25;
    sub_28 = sub_27;
  } else {
    sub_24 = sub_27;
    sub_28 = sub_25;
  };
  if (controller_ck_45_1) {
    sub_23 = sub_28;
  } else {
    sub_23 = sub_24;
  };
  if (controller_door_failed_recovered) {
    v_973 = false;
    sub_22 = sub_23;
  } else {
    v_973 = sub_23;
    sub_22 = false;
  };
  if (controller_ck_42_1) {
    sub_21 = v_973;
  } else {
    sub_21 = sub_22;
  };
  sub_29 = sub_23;
  if (controller_c_door) {
    sub_20 = sub_21;
    sub_30 = sub_29;
  } else {
    sub_20 = sub_29;
    sub_30 = sub_21;
  };
  if (controller_ck_40_1) {
    sub_19 = sub_30;
  } else {
    sub_19 = sub_20;
  };
  if (controller_window_failed_recovered) {
    v_974 = false;
    sub_31 = sub_19;
  } else {
    v_974 = sub_19;
    sub_31 = false;
  };
  if (controller_ck_57_1) {
    v_975 = v_974;
  } else {
    v_975 = sub_31;
  };
  if (controller_c_window) {
    sub_18 = sub_19;
  } else {
    sub_18 = v_975;
  };
  if (controller_ck_40_1) {
    sub_34 = sub_20;
  } else {
    sub_34 = sub_30;
  };
  sub_33 = sub_34;
  sub_36 = sub_21;
  if (controller_window_failed_recovered) {
    v_969 = sub_36;
    sub_35 = sub_34;
  } else {
    v_969 = sub_34;
    sub_35 = sub_36;
  };
  if (controller_ck_57_1) {
    v_970 = v_969;
  } else {
    v_970 = sub_35;
  };
  if (controller_c_window) {
    sub_32 = sub_33;
  } else {
    sub_32 = v_970;
  };
  if (controller_cleaner) {
    v_976 = sub_32;
    sub_17 = sub_18;
  } else {
    v_976 = sub_18;
    sub_17 = sub_32;
  };
  if (controller_ck_37_1) {
    sub_16 = v_976;
  } else {
    sub_16 = sub_17;
  };
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  if (controller_cleaner) {
    sub_42 = sub_18;
    sub_43 = false;
  } else {
    sub_42 = false;
    sub_43 = sub_18;
  };
  if (controller_ck_37_1) {
    sub_41 = sub_43;
  } else {
    sub_41 = sub_42;
  };
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (controller_cleaner) {
    v_968 = sub_32;
    sub_48 = false;
  } else {
    v_968 = false;
    sub_48 = sub_32;
  };
  if (controller_ck_37_1) {
    sub_47 = v_968;
  } else {
    sub_47 = sub_48;
  };
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  if (controller_c_closet) {
    sub_37 = sub_38;
  } else {
    sub_37 = sub_44;
  };
  if (controller_closet_failed_recovered) {
    v_977 = sub_37;
    sub_11 = sub_12;
  } else {
    v_977 = sub_12;
    sub_11 = sub_37;
  };
  if (controller_ck_62_1) {
    sub_10 = v_977;
  } else {
    sub_10 = sub_11;
  };
  if (controller_window_failed_recovered) {
    v_964 = false;
    sub_58 = sub_34;
  } else {
    v_964 = sub_34;
    sub_58 = false;
  };
  if (controller_ck_57_1) {
    v_965 = v_964;
  } else {
    v_965 = sub_58;
  };
  if (controller_c_window) {
    sub_57 = v_965;
  } else {
    sub_57 = sub_33;
  };
  if (controller_cleaner) {
    v_966 = sub_57;
    sub_56 = sub_18;
  } else {
    v_966 = sub_18;
    sub_56 = sub_57;
  };
  if (controller_ck_37_1) {
    sub_55 = v_966;
  } else {
    sub_55 = sub_56;
  };
  sub_54 = sub_55;
  sub_53 = sub_54;
  sub_52 = sub_53;
  sub_51 = sub_52;
  if (controller_cleaner) {
    v_963 = sub_57;
    sub_64 = false;
  } else {
    v_963 = false;
    sub_64 = sub_57;
  };
  if (controller_ck_37_1) {
    sub_63 = v_963;
  } else {
    sub_63 = sub_64;
  };
  sub_62 = sub_63;
  sub_61 = sub_62;
  sub_60 = sub_61;
  if (controller_c_closet) {
    sub_59 = sub_38;
  } else {
    sub_59 = sub_60;
  };
  if (controller_closet_failed_recovered) {
    v_967 = sub_59;
    sub_50 = sub_51;
  } else {
    v_967 = sub_51;
    sub_50 = sub_59;
  };
  if (controller_ck_62_1) {
    sub_49 = v_967;
  } else {
    sub_49 = sub_50;
  };
  if (controller_blind_failed_recovered) {
    v_978 = sub_49;
    sub_9 = sub_10;
  } else {
    v_978 = sub_10;
    sub_9 = sub_49;
  };
  if (controller_ck_72_1) {
    sub_8 = v_978;
  } else {
    sub_8 = sub_9;
  };
  sub_7 = sub_8;
  sub_71 = sub_38;
  if (controller_c_closet) {
    sub_72 = sub_38;
  } else {
    sub_72 = false;
  };
  if (controller_closet_failed_recovered) {
    v_961 = sub_72;
    sub_70 = sub_71;
  } else {
    v_961 = sub_71;
    sub_70 = sub_72;
  };
  if (controller_ck_62_1) {
    sub_69 = v_961;
  } else {
    sub_69 = sub_70;
  };
  if (controller_change_shift) {
    v_959 = sub_41;
    sub_79 = sub_55;
  } else {
    v_959 = sub_55;
    sub_79 = sub_41;
  };
  if (controller_ck_1) {
    sub_78 = v_959;
  } else {
    sub_78 = sub_79;
  };
  sub_77 = sub_78;
  sub_76 = sub_77;
  sub_75 = sub_76;
  if (controller_change_shift) {
    v_958 = false;
    sub_84 = sub_63;
  } else {
    v_958 = sub_63;
    sub_84 = false;
  };
  if (controller_ck_1) {
    sub_83 = v_958;
  } else {
    sub_83 = sub_84;
  };
  sub_82 = sub_83;
  sub_81 = sub_82;
  if (controller_c_closet) {
    sub_80 = sub_38;
  } else {
    sub_80 = sub_81;
  };
  if (controller_closet_failed_recovered) {
    v_960 = sub_80;
    sub_74 = sub_75;
  } else {
    v_960 = sub_75;
    sub_74 = sub_80;
  };
  if (controller_ck_62_1) {
    sub_73 = v_960;
  } else {
    sub_73 = sub_74;
  };
  if (controller_blind_failed_recovered) {
    v_962 = sub_73;
    sub_68 = sub_69;
  } else {
    v_962 = sub_69;
    sub_68 = sub_73;
  };
  if (controller_ck_72_1) {
    sub_67 = v_962;
  } else {
    sub_67 = sub_68;
  };
  sub_66 = sub_67;
  sub_89 = sub_44;
  if (controller_c_closet) {
    sub_90 = false;
  } else {
    sub_90 = sub_44;
  };
  if (controller_closet_failed_recovered) {
    v_956 = sub_90;
    sub_88 = sub_89;
  } else {
    v_956 = sub_89;
    sub_88 = sub_90;
  };
  if (controller_ck_62_1) {
    sub_87 = v_956;
  } else {
    sub_87 = sub_88;
  };
  sub_93 = sub_60;
  if (controller_c_closet) {
    sub_94 = false;
  } else {
    sub_94 = sub_60;
  };
  if (controller_closet_failed_recovered) {
    v_955 = sub_94;
    sub_92 = sub_93;
  } else {
    v_955 = sub_93;
    sub_92 = sub_94;
  };
  if (controller_ck_62_1) {
    sub_91 = v_955;
  } else {
    sub_91 = sub_92;
  };
  if (controller_blind_failed_recovered) {
    v_957 = sub_91;
    sub_86 = sub_87;
  } else {
    v_957 = sub_87;
    sub_86 = sub_91;
  };
  if (controller_ck_72_1) {
    sub_85 = v_957;
  } else {
    sub_85 = sub_86;
  };
  if (controller_ck_65_1) {
    sub_65 = sub_85;
  } else {
    sub_65 = sub_66;
  };
  if (controller_light_failed_recovered) {
    v_979 = sub_65;
    sub_6 = sub_7;
  } else {
    v_979 = sub_7;
    sub_6 = sub_65;
  };
  if (controller_ck_67_1) {
    v_980 = v_979;
  } else {
    v_980 = sub_6;
  };
  sub_95 = sub_7;
  if (controller_light_switch) {
    v_981 = v_980;
  } else {
    v_981 = sub_95;
  };
  if (controller_c_light_1) {
    sub_5 = v_981;
  } else {
    sub_5 = sub_95;
  };
  if (controller_v_277) {
    sub_104 = false;
  } else {
    sub_104 = sub_40;
  };
  if (controller_ck_37_1) {
    sub_107 = sub_42;
  } else {
    sub_107 = sub_43;
  };
  sub_106 = sub_107;
  if (controller_v_277) {
    sub_105 = false;
  } else {
    sub_105 = sub_106;
  };
  if (controller_v_276) {
    v_949 = sub_105;
  } else {
    v_949 = sub_104;
  };
  if (controller_v_277) {
    v_948 = sub_40;
  } else {
    v_948 = false;
  };
  if (controller_v_276) {
    sub_108 = v_948;
  } else {
    sub_108 = false;
  };
  if (controller_c_air_2) {
    v_950 = v_949;
  } else {
    v_950 = sub_108;
  };
  if (controller_v_277) {
    v_947 = sub_106;
  } else {
    v_947 = sub_40;
  };
  if (controller_v_276) {
    sub_109 = v_947;
  } else {
    sub_109 = sub_105;
  };
  if (controller_c_air_1) {
    sub_103 = v_950;
  } else {
    sub_103 = sub_109;
  };
  sub_102 = sub_103;
  if (controller_v_276) {
    v_945 = false;
  } else {
    v_945 = sub_104;
  };
  if (controller_c_air_2) {
    v_946 = v_945;
  } else {
    v_946 = sub_108;
  };
  if (controller_v_276) {
    sub_112 = sub_104;
  } else {
    sub_112 = false;
  };
  if (controller_c_air_1) {
    sub_111 = v_946;
  } else {
    sub_111 = sub_112;
  };
  if (controller_v_276) {
    v_943 = sub_105;
  } else {
    v_943 = false;
  };
  if (controller_c_air_2) {
    v_944 = v_943;
  } else {
    v_944 = false;
  };
  if (controller_v_277) {
    v_942 = sub_106;
  } else {
    v_942 = false;
  };
  if (controller_v_276) {
    sub_114 = v_942;
  } else {
    sub_114 = sub_105;
  };
  if (controller_c_air_1) {
    sub_113 = v_944;
  } else {
    sub_113 = sub_114;
  };
  if (controller_c_closet) {
    sub_110 = sub_111;
  } else {
    sub_110 = sub_113;
  };
  if (controller_closet_failed_recovered) {
    v_951 = sub_110;
    sub_101 = sub_102;
  } else {
    v_951 = sub_102;
    sub_101 = sub_110;
  };
  if (controller_ck_62_1) {
    sub_100 = v_951;
  } else {
    sub_100 = sub_101;
  };
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_121 = sub_111;
  if (controller_c_closet) {
    sub_122 = sub_111;
  } else {
    sub_122 = false;
  };
  if (controller_closet_failed_recovered) {
    v_940 = sub_122;
    sub_120 = sub_121;
  } else {
    v_940 = sub_121;
    sub_120 = sub_122;
  };
  if (controller_ck_62_1) {
    sub_119 = v_940;
  } else {
    sub_119 = sub_120;
  };
  if (controller_change_shift) {
    v_936 = false;
    sub_129 = sub_107;
  } else {
    v_936 = sub_107;
    sub_129 = false;
  };
  if (controller_ck_1) {
    sub_128 = v_936;
  } else {
    sub_128 = sub_129;
  };
  if (controller_v_277) {
    sub_127 = false;
  } else {
    sub_127 = sub_128;
  };
  if (controller_v_276) {
    v_937 = sub_127;
  } else {
    v_937 = sub_104;
  };
  if (controller_c_air_2) {
    v_938 = v_937;
  } else {
    v_938 = sub_108;
  };
  if (controller_v_277) {
    v_935 = sub_128;
  } else {
    v_935 = sub_40;
  };
  if (controller_v_276) {
    sub_130 = v_935;
  } else {
    sub_130 = sub_127;
  };
  if (controller_c_air_1) {
    sub_126 = v_938;
  } else {
    sub_126 = sub_130;
  };
  sub_125 = sub_126;
  if (controller_v_276) {
    v_933 = sub_127;
  } else {
    v_933 = false;
  };
  if (controller_c_air_2) {
    v_934 = v_933;
  } else {
    v_934 = false;
  };
  if (controller_v_277) {
    v_932 = sub_128;
  } else {
    v_932 = false;
  };
  if (controller_v_276) {
    sub_133 = v_932;
  } else {
    sub_133 = sub_127;
  };
  if (controller_c_air_1) {
    sub_132 = v_934;
  } else {
    sub_132 = sub_133;
  };
  if (controller_c_closet) {
    sub_131 = sub_111;
  } else {
    sub_131 = sub_132;
  };
  if (controller_closet_failed_recovered) {
    v_939 = sub_131;
    sub_124 = sub_125;
  } else {
    v_939 = sub_125;
    sub_124 = sub_131;
  };
  if (controller_ck_62_1) {
    sub_123 = v_939;
  } else {
    sub_123 = sub_124;
  };
  if (controller_blind_failed_recovered) {
    v_941 = sub_123;
    sub_118 = sub_119;
  } else {
    v_941 = sub_119;
    sub_118 = sub_123;
  };
  if (controller_ck_72_1) {
    sub_117 = v_941;
  } else {
    sub_117 = sub_118;
  };
  sub_116 = sub_117;
  sub_137 = sub_113;
  if (controller_c_closet) {
    sub_138 = false;
  } else {
    sub_138 = sub_113;
  };
  if (controller_closet_failed_recovered) {
    v_931 = sub_138;
    sub_136 = sub_137;
  } else {
    v_931 = sub_137;
    sub_136 = sub_138;
  };
  if (controller_ck_62_1) {
    sub_135 = v_931;
  } else {
    sub_135 = sub_136;
  };
  sub_134 = sub_135;
  if (controller_ck_65_1) {
    sub_115 = sub_134;
  } else {
    sub_115 = sub_116;
  };
  if (controller_light_failed_recovered) {
    v_952 = sub_115;
    sub_97 = sub_98;
  } else {
    v_952 = sub_98;
    sub_97 = sub_115;
  };
  if (controller_ck_67_1) {
    v_953 = v_952;
  } else {
    v_953 = sub_97;
  };
  sub_139 = sub_98;
  if (controller_light_switch) {
    v_954 = v_953;
  } else {
    v_954 = sub_139;
  };
  if (controller_c_light_1) {
    sub_96 = v_954;
  } else {
    sub_96 = sub_139;
  };
  if (controller_air_failed_recovered) {
    v_982 = sub_96;
    sub_4 = sub_5;
  } else {
    v_982 = sub_5;
    sub_4 = sub_96;
  };
  if (controller_ck_52_1) {
    sub_3 = v_982;
  } else {
    sub_3 = sub_4;
  };
  if (controller_ck_45_1) {
    sub_159 = sub_24;
  } else {
    sub_159 = sub_28;
  };
  sub_158 = sub_159;
  if (controller_door_failed_recovered) {
    v_922 = false;
    sub_161 = sub_159;
  } else {
    v_922 = sub_159;
    sub_161 = false;
  };
  if (controller_ck_42_1) {
    sub_160 = v_922;
  } else {
    sub_160 = sub_161;
  };
  if (controller_c_door) {
    sub_157 = sub_158;
    sub_162 = sub_160;
  } else {
    sub_157 = sub_160;
    sub_162 = sub_158;
  };
  if (controller_ck_40_1) {
    sub_156 = sub_162;
  } else {
    sub_156 = sub_157;
  };
  sub_155 = sub_156;
  sub_164 = sub_160;
  if (controller_window_failed_recovered) {
    v_923 = sub_164;
    sub_163 = sub_156;
  } else {
    v_923 = sub_156;
    sub_163 = sub_164;
  };
  if (controller_ck_57_1) {
    v_924 = v_923;
  } else {
    v_924 = sub_163;
  };
  if (controller_c_window) {
    sub_154 = sub_155;
  } else {
    sub_154 = v_924;
  };
  sub_153 = sub_154;
  sub_152 = sub_153;
  sub_151 = sub_152;
  sub_150 = sub_151;
  sub_149 = sub_150;
  if (controller_cleaner) {
    sub_169 = sub_154;
    sub_170 = false;
  } else {
    sub_169 = false;
    sub_170 = sub_154;
  };
  if (controller_ck_37_1) {
    sub_168 = sub_170;
  } else {
    sub_168 = sub_169;
  };
  sub_167 = sub_168;
  sub_166 = sub_167;
  if (controller_ck_37_1) {
    sub_173 = sub_169;
  } else {
    sub_173 = sub_170;
  };
  sub_172 = sub_173;
  sub_171 = sub_172;
  if (controller_c_closet) {
    sub_165 = sub_166;
  } else {
    sub_165 = sub_171;
  };
  if (controller_closet_failed_recovered) {
    v_925 = sub_165;
    sub_148 = sub_149;
  } else {
    v_925 = sub_149;
    sub_148 = sub_165;
  };
  if (controller_ck_62_1) {
    sub_147 = v_925;
  } else {
    sub_147 = sub_148;
  };
  if (controller_window_failed_recovered) {
    v_919 = false;
    sub_182 = sub_156;
  } else {
    v_919 = sub_156;
    sub_182 = false;
  };
  if (controller_ck_57_1) {
    v_920 = v_919;
  } else {
    v_920 = sub_182;
  };
  if (controller_c_window) {
    sub_181 = v_920;
  } else {
    sub_181 = sub_155;
  };
  sub_180 = sub_181;
  sub_179 = sub_180;
  sub_178 = sub_179;
  sub_177 = sub_178;
  sub_176 = sub_177;
  if (controller_cleaner) {
    sub_187 = sub_181;
    sub_188 = false;
  } else {
    sub_187 = false;
    sub_188 = sub_181;
  };
  if (controller_ck_37_1) {
    sub_186 = sub_188;
  } else {
    sub_186 = sub_187;
  };
  sub_185 = sub_186;
  sub_184 = sub_185;
  if (controller_ck_37_1) {
    sub_191 = sub_187;
  } else {
    sub_191 = sub_188;
  };
  sub_190 = sub_191;
  sub_189 = sub_190;
  if (controller_c_closet) {
    sub_183 = sub_184;
  } else {
    sub_183 = sub_189;
  };
  if (controller_closet_failed_recovered) {
    v_921 = sub_183;
    sub_175 = sub_176;
  } else {
    v_921 = sub_176;
    sub_175 = sub_183;
  };
  if (controller_ck_62_1) {
    sub_174 = v_921;
  } else {
    sub_174 = sub_175;
  };
  if (controller_blind_failed_recovered) {
    v_926 = sub_174;
    sub_146 = sub_147;
  } else {
    v_926 = sub_147;
    sub_146 = sub_174;
  };
  if (controller_ck_72_1) {
    sub_145 = v_926;
  } else {
    sub_145 = sub_146;
  };
  sub_144 = sub_145;
  if (controller_change_shift) {
    v_916 = false;
    sub_202 = sub_180;
  } else {
    v_916 = sub_180;
    sub_202 = false;
  };
  if (controller_ck_1) {
    sub_201 = v_916;
  } else {
    sub_201 = sub_202;
  };
  sub_200 = sub_201;
  sub_199 = sub_200;
  sub_198 = sub_199;
  if (controller_change_shift) {
    v_915 = false;
    sub_206 = sub_186;
  } else {
    v_915 = sub_186;
    sub_206 = false;
  };
  if (controller_ck_1) {
    sub_205 = v_915;
  } else {
    sub_205 = sub_206;
  };
  sub_204 = sub_205;
  if (controller_change_shift) {
    v_914 = false;
    sub_209 = sub_191;
  } else {
    v_914 = sub_191;
    sub_209 = false;
  };
  if (controller_ck_1) {
    sub_208 = v_914;
  } else {
    sub_208 = sub_209;
  };
  sub_207 = sub_208;
  if (controller_c_closet) {
    sub_203 = sub_204;
  } else {
    sub_203 = sub_207;
  };
  if (controller_closet_failed_recovered) {
    v_917 = sub_203;
    sub_197 = sub_198;
  } else {
    v_917 = sub_198;
    sub_197 = sub_203;
  };
  if (controller_ck_62_1) {
    sub_196 = v_917;
  } else {
    sub_196 = sub_197;
  };
  if (controller_blind_failed_recovered) {
    v_918 = sub_196;
    sub_195 = false;
  } else {
    v_918 = false;
    sub_195 = sub_196;
  };
  if (controller_ck_72_1) {
    sub_194 = v_918;
  } else {
    sub_194 = sub_195;
  };
  sub_193 = sub_194;
  if (controller_ck_65_1) {
    sub_192 = sub_144;
  } else {
    sub_192 = sub_193;
  };
  if (controller_light_failed_recovered) {
    v_927 = sub_192;
    sub_143 = sub_144;
  } else {
    v_927 = sub_144;
    sub_143 = sub_192;
  };
  if (controller_ck_67_1) {
    v_928 = v_927;
  } else {
    v_928 = sub_143;
  };
  sub_210 = sub_144;
  if (controller_light_switch) {
    v_929 = v_928;
  } else {
    v_929 = sub_210;
  };
  if (controller_c_light_1) {
    sub_142 = v_929;
  } else {
    sub_142 = sub_210;
  };
  sub_225 = sub_158;
  sub_224 = sub_225;
  sub_223 = sub_224;
  if (controller_cleaner) {
    v_907 = sub_223;
    sub_222 = false;
  } else {
    v_907 = false;
    sub_222 = sub_223;
  };
  if (controller_ck_37_1) {
    sub_221 = v_907;
  } else {
    sub_221 = sub_222;
  };
  sub_220 = sub_221;
  if (controller_v_277) {
    sub_219 = sub_220;
  } else {
    sub_219 = false;
  };
  if (controller_ck_40_1) {
    sub_231 = sub_157;
  } else {
    sub_231 = sub_162;
  };
  if (controller_window_failed_recovered) {
    v_904 = false;
    sub_232 = sub_231;
  } else {
    v_904 = sub_231;
    sub_232 = false;
  };
  if (controller_ck_57_1) {
    v_905 = v_904;
  } else {
    v_905 = sub_232;
  };
  if (controller_c_window) {
    sub_230 = sub_231;
  } else {
    sub_230 = v_905;
  };
  if (controller_cleaner) {
    v_906 = false;
    sub_229 = sub_230;
  } else {
    v_906 = sub_230;
    sub_229 = false;
  };
  if (controller_ck_37_1) {
    sub_228 = v_906;
  } else {
    sub_228 = sub_229;
  };
  sub_227 = sub_228;
  if (controller_v_277) {
    sub_226 = sub_220;
  } else {
    sub_226 = sub_227;
  };
  if (controller_v_276) {
    v_908 = sub_226;
  } else {
    v_908 = sub_219;
  };
  if (controller_v_277) {
    v_903 = false;
  } else {
    v_903 = sub_220;
  };
  if (controller_v_276) {
    sub_233 = v_903;
  } else {
    sub_233 = sub_220;
  };
  if (controller_c_air_2) {
    v_909 = v_908;
  } else {
    v_909 = sub_233;
  };
  if (controller_v_277) {
    sub_235 = sub_227;
  } else {
    sub_235 = false;
  };
  if (controller_v_276) {
    sub_234 = sub_235;
  } else {
    sub_234 = sub_226;
  };
  if (controller_c_air_1) {
    sub_218 = v_909;
  } else {
    sub_218 = sub_234;
  };
  sub_217 = sub_218;
  if (controller_c_air_2) {
    v_901 = sub_219;
  } else {
    v_901 = sub_233;
  };
  if (controller_v_277) {
    sub_237 = false;
  } else {
    sub_237 = sub_227;
  };
  if (controller_v_276) {
    v_898 = sub_237;
  } else {
    v_898 = false;
  };
  if (controller_c_air_2) {
    v_899 = v_898;
  } else {
    v_899 = false;
  };
  if (controller_v_276) {
    sub_238 = sub_235;
  } else {
    sub_238 = sub_237;
  };
  if (controller_c_air_1) {
    v_900 = v_899;
  } else {
    v_900 = sub_238;
  };
  if (controller_v_276) {
    sub_239 = false;
  } else {
    sub_239 = sub_219;
  };
  if (controller_c_air_1) {
    v_902 = v_901;
  } else {
    v_902 = sub_239;
  };
  if (controller_c_closet) {
    sub_236 = v_900;
  } else {
    sub_236 = v_902;
  };
  if (controller_closet_failed_recovered) {
    v_910 = sub_236;
    sub_216 = sub_217;
  } else {
    v_910 = sub_217;
    sub_216 = sub_236;
  };
  if (controller_ck_62_1) {
    sub_215 = v_910;
  } else {
    sub_215 = sub_216;
  };
  sub_214 = sub_215;
  sub_213 = sub_214;
  if (controller_change_shift) {
    v_893 = false;
    sub_250 = sub_221;
  } else {
    v_893 = sub_221;
    sub_250 = false;
  };
  if (controller_ck_1) {
    sub_249 = v_893;
  } else {
    sub_249 = sub_250;
  };
  if (controller_v_277) {
    sub_248 = sub_249;
  } else {
    sub_248 = false;
  };
  if (controller_change_shift) {
    v_892 = false;
    sub_253 = sub_228;
  } else {
    v_892 = sub_228;
    sub_253 = false;
  };
  if (controller_ck_1) {
    sub_252 = v_892;
  } else {
    sub_252 = sub_253;
  };
  if (controller_v_277) {
    sub_251 = sub_249;
  } else {
    sub_251 = sub_252;
  };
  if (controller_v_276) {
    v_894 = sub_251;
  } else {
    v_894 = sub_248;
  };
  if (controller_v_277) {
    v_891 = false;
  } else {
    v_891 = sub_249;
  };
  if (controller_v_276) {
    sub_254 = v_891;
  } else {
    sub_254 = sub_249;
  };
  if (controller_c_air_2) {
    v_895 = v_894;
  } else {
    v_895 = sub_254;
  };
  if (controller_v_277) {
    sub_256 = sub_252;
  } else {
    sub_256 = false;
  };
  if (controller_v_276) {
    sub_255 = sub_256;
  } else {
    sub_255 = sub_251;
  };
  if (controller_c_air_1) {
    sub_247 = v_895;
  } else {
    sub_247 = sub_255;
  };
  sub_246 = sub_247;
  if (controller_c_air_2) {
    v_889 = sub_248;
  } else {
    v_889 = sub_254;
  };
  if (controller_v_277) {
    sub_258 = false;
  } else {
    sub_258 = sub_252;
  };
  if (controller_v_276) {
    v_886 = sub_258;
  } else {
    v_886 = false;
  };
  if (controller_c_air_2) {
    v_887 = v_886;
  } else {
    v_887 = false;
  };
  if (controller_v_276) {
    sub_259 = sub_256;
  } else {
    sub_259 = sub_258;
  };
  if (controller_c_air_1) {
    v_888 = v_887;
  } else {
    v_888 = sub_259;
  };
  if (controller_v_276) {
    sub_260 = false;
  } else {
    sub_260 = sub_248;
  };
  if (controller_c_air_1) {
    v_890 = v_889;
  } else {
    v_890 = sub_260;
  };
  if (controller_c_closet) {
    sub_257 = v_888;
  } else {
    sub_257 = v_890;
  };
  if (controller_closet_failed_recovered) {
    v_896 = sub_257;
    sub_245 = sub_246;
  } else {
    v_896 = sub_246;
    sub_245 = sub_257;
  };
  if (controller_ck_62_1) {
    sub_244 = v_896;
  } else {
    sub_244 = sub_245;
  };
  if (controller_blind_failed_recovered) {
    v_897 = sub_244;
    sub_243 = false;
  } else {
    v_897 = false;
    sub_243 = sub_244;
  };
  if (controller_ck_72_1) {
    sub_242 = v_897;
  } else {
    sub_242 = sub_243;
  };
  sub_241 = sub_242;
  if (controller_ck_65_1) {
    sub_240 = sub_213;
  } else {
    sub_240 = sub_241;
  };
  if (controller_light_failed_recovered) {
    v_911 = sub_240;
    sub_212 = sub_213;
  } else {
    v_911 = sub_213;
    sub_212 = sub_240;
  };
  if (controller_ck_67_1) {
    v_912 = v_911;
  } else {
    v_912 = sub_212;
  };
  sub_261 = sub_213;
  if (controller_light_switch) {
    v_913 = v_912;
  } else {
    v_913 = sub_261;
  };
  if (controller_c_light_1) {
    sub_211 = v_913;
  } else {
    sub_211 = sub_261;
  };
  if (controller_air_failed_recovered) {
    v_930 = sub_211;
    sub_141 = sub_142;
  } else {
    v_930 = sub_142;
    sub_141 = sub_211;
  };
  if (controller_ck_52_1) {
    sub_140 = v_930;
  } else {
    sub_140 = sub_141;
  };
  if (controller_worker) {
    v_983 = sub_140;
    sub_2 = sub_3;
  } else {
    v_983 = sub_3;
    sub_2 = sub_140;
  };
  if (controller_ck_35_1) {
    sub_1 = v_983;
  } else {
    sub_1 = sub_2;
  };
  v_873 = !(controller_pc_failed_recovered);
  v_874 = (v_873||false);
  sub_286 = (controller_pc_failed_recovered||false);
  if (controller_ck_47_1) {
    sub_285 = v_874;
  } else {
    sub_285 = sub_286;
  };
  sub_287 = true;
  if (controller_c_pc) {
    sub_284 = sub_285;
    sub_288 = sub_287;
  } else {
    sub_284 = sub_287;
    sub_288 = sub_285;
  };
  if (controller_ck_45_1) {
    sub_283 = sub_288;
  } else {
    sub_283 = sub_284;
  };
  if (controller_door_failed_recovered) {
    v_875 = false;
    sub_282 = sub_283;
  } else {
    v_875 = sub_283;
    sub_282 = false;
  };
  if (controller_ck_42_1) {
    sub_281 = v_875;
  } else {
    sub_281 = sub_282;
  };
  sub_289 = sub_283;
  if (controller_c_door) {
    sub_280 = sub_281;
    sub_290 = sub_289;
  } else {
    sub_280 = sub_289;
    sub_290 = sub_281;
  };
  if (controller_ck_40_1) {
    sub_279 = sub_290;
  } else {
    sub_279 = sub_280;
  };
  if (controller_window_failed_recovered) {
    v_876 = false;
    sub_291 = sub_279;
  } else {
    v_876 = sub_279;
    sub_291 = false;
  };
  if (controller_ck_57_1) {
    v_877 = v_876;
  } else {
    v_877 = sub_291;
  };
  if (controller_c_window) {
    sub_278 = sub_279;
  } else {
    sub_278 = v_877;
  };
  if (controller_ck_40_1) {
    sub_294 = sub_280;
  } else {
    sub_294 = sub_290;
  };
  sub_293 = sub_294;
  sub_296 = sub_281;
  if (controller_window_failed_recovered) {
    v_871 = sub_296;
    sub_295 = sub_294;
  } else {
    v_871 = sub_294;
    sub_295 = sub_296;
  };
  if (controller_ck_57_1) {
    v_872 = v_871;
  } else {
    v_872 = sub_295;
  };
  if (controller_c_window) {
    sub_292 = sub_293;
  } else {
    sub_292 = v_872;
  };
  if (controller_cleaner) {
    v_878 = sub_292;
    sub_277 = sub_278;
  } else {
    v_878 = sub_278;
    sub_277 = sub_292;
  };
  if (controller_ck_37_1) {
    sub_276 = v_878;
  } else {
    sub_276 = sub_277;
  };
  sub_275 = sub_276;
  sub_274 = sub_275;
  sub_273 = sub_274;
  sub_272 = sub_273;
  if (controller_cleaner) {
    sub_302 = sub_278;
    sub_303 = false;
  } else {
    sub_302 = false;
    sub_303 = sub_278;
  };
  if (controller_ck_37_1) {
    sub_301 = sub_303;
  } else {
    sub_301 = sub_302;
  };
  sub_300 = sub_301;
  sub_299 = sub_300;
  sub_298 = sub_299;
  if (controller_cleaner) {
    v_870 = sub_292;
    sub_308 = false;
  } else {
    v_870 = false;
    sub_308 = sub_292;
  };
  if (controller_ck_37_1) {
    sub_307 = v_870;
  } else {
    sub_307 = sub_308;
  };
  sub_306 = sub_307;
  sub_305 = sub_306;
  sub_304 = sub_305;
  if (controller_c_closet) {
    sub_297 = sub_298;
  } else {
    sub_297 = sub_304;
  };
  if (controller_closet_failed_recovered) {
    v_879 = sub_297;
    sub_271 = sub_272;
  } else {
    v_879 = sub_272;
    sub_271 = sub_297;
  };
  if (controller_ck_62_1) {
    sub_270 = v_879;
  } else {
    sub_270 = sub_271;
  };
  if (controller_cleaner) {
    v_868 = sub_57;
    sub_316 = sub_278;
  } else {
    v_868 = sub_278;
    sub_316 = sub_57;
  };
  if (controller_ck_37_1) {
    sub_315 = v_868;
  } else {
    sub_315 = sub_316;
  };
  sub_314 = sub_315;
  sub_313 = sub_314;
  sub_312 = sub_313;
  sub_311 = sub_312;
  if (controller_c_closet) {
    sub_317 = sub_298;
  } else {
    sub_317 = sub_60;
  };
  if (controller_closet_failed_recovered) {
    v_869 = sub_317;
    sub_310 = sub_311;
  } else {
    v_869 = sub_311;
    sub_310 = sub_317;
  };
  if (controller_ck_62_1) {
    sub_309 = v_869;
  } else {
    sub_309 = sub_310;
  };
  if (controller_blind_failed_recovered) {
    v_880 = sub_309;
    sub_269 = sub_270;
  } else {
    v_880 = sub_270;
    sub_269 = sub_309;
  };
  if (controller_ck_72_1) {
    sub_268 = v_880;
  } else {
    sub_268 = sub_269;
  };
  if (controller_window_failed_recovered) {
    v_864 = false;
    sub_330 = sub_294;
  } else {
    v_864 = sub_294;
    sub_330 = false;
  };
  if (controller_ck_57_1) {
    sub_329 = v_864;
  } else {
    sub_329 = sub_330;
  };
  if (controller_c_window) {
    sub_328 = sub_329;
  } else {
    sub_328 = sub_293;
  };
  if (controller_cleaner) {
    v_865 = sub_328;
    sub_327 = sub_18;
  } else {
    v_865 = sub_18;
    sub_327 = sub_328;
  };
  if (controller_ck_37_1) {
    sub_326 = v_865;
  } else {
    sub_326 = sub_327;
  };
  sub_325 = sub_326;
  sub_324 = sub_325;
  sub_323 = sub_324;
  sub_322 = sub_323;
  if (controller_cleaner) {
    v_863 = sub_328;
    sub_336 = false;
  } else {
    v_863 = false;
    sub_336 = sub_328;
  };
  if (controller_ck_37_1) {
    sub_335 = v_863;
  } else {
    sub_335 = sub_336;
  };
  sub_334 = sub_335;
  sub_333 = sub_334;
  sub_332 = sub_333;
  if (controller_c_closet) {
    sub_331 = sub_38;
  } else {
    sub_331 = sub_332;
  };
  if (controller_closet_failed_recovered) {
    v_866 = sub_331;
    sub_321 = sub_322;
  } else {
    v_866 = sub_322;
    sub_321 = sub_331;
  };
  if (controller_ck_62_1) {
    sub_320 = v_866;
  } else {
    sub_320 = sub_321;
  };
  if (controller_blind_failed_recovered) {
    v_867 = sub_320;
    sub_319 = sub_270;
  } else {
    v_867 = sub_270;
    sub_319 = sub_320;
  };
  if (controller_ck_72_1) {
    sub_318 = v_867;
  } else {
    sub_318 = sub_319;
  };
  if (controller_ck_70_1) {
    v_881 = sub_318;
  } else {
    v_881 = sub_268;
  };
  if (controller_cleaner) {
    v_860 = sub_328;
    sub_346 = sub_278;
  } else {
    v_860 = sub_278;
    sub_346 = sub_328;
  };
  if (controller_ck_37_1) {
    sub_345 = v_860;
  } else {
    sub_345 = sub_346;
  };
  sub_344 = sub_345;
  sub_343 = sub_344;
  sub_342 = sub_343;
  sub_341 = sub_342;
  if (controller_c_closet) {
    sub_347 = sub_298;
  } else {
    sub_347 = sub_332;
  };
  if (controller_closet_failed_recovered) {
    v_861 = sub_347;
    sub_340 = sub_341;
  } else {
    v_861 = sub_341;
    sub_340 = sub_347;
  };
  if (controller_ck_62_1) {
    sub_339 = v_861;
  } else {
    sub_339 = sub_340;
  };
  if (controller_blind_failed_recovered) {
    v_862 = sub_339;
    sub_338 = sub_270;
  } else {
    v_862 = sub_270;
    sub_338 = sub_339;
  };
  if (controller_ck_72_1) {
    sub_337 = v_862;
  } else {
    sub_337 = sub_338;
  };
  if (controller_blind_switch) {
    sub_267 = v_881;
  } else {
    sub_267 = sub_337;
  };
  sub_354 = sub_298;
  if (controller_c_closet) {
    sub_355 = sub_298;
  } else {
    sub_355 = false;
  };
  if (controller_closet_failed_recovered) {
    v_851 = sub_355;
    sub_353 = sub_354;
  } else {
    v_851 = sub_354;
    sub_353 = sub_355;
  };
  if (controller_ck_62_1) {
    sub_352 = v_851;
  } else {
    sub_352 = sub_353;
  };
  if (controller_change_shift) {
    v_849 = sub_301;
    sub_362 = sub_315;
  } else {
    v_849 = sub_315;
    sub_362 = sub_301;
  };
  if (controller_ck_1) {
    sub_361 = v_849;
  } else {
    sub_361 = sub_362;
  };
  sub_360 = sub_361;
  sub_359 = sub_360;
  sub_358 = sub_359;
  if (controller_c_closet) {
    sub_363 = sub_298;
  } else {
    sub_363 = sub_81;
  };
  if (controller_closet_failed_recovered) {
    v_850 = sub_363;
    sub_357 = sub_358;
  } else {
    v_850 = sub_358;
    sub_357 = sub_363;
  };
  if (controller_ck_62_1) {
    sub_356 = v_850;
  } else {
    sub_356 = sub_357;
  };
  if (controller_blind_failed_recovered) {
    v_852 = sub_356;
    sub_351 = sub_352;
  } else {
    v_852 = sub_352;
    sub_351 = sub_356;
  };
  if (controller_ck_72_1) {
    sub_350 = v_852;
  } else {
    sub_350 = sub_351;
  };
  if (controller_change_shift) {
    v_847 = sub_41;
    sub_371 = sub_326;
  } else {
    v_847 = sub_326;
    sub_371 = sub_41;
  };
  if (controller_ck_1) {
    sub_370 = v_847;
  } else {
    sub_370 = sub_371;
  };
  sub_369 = sub_370;
  sub_368 = sub_369;
  sub_367 = sub_368;
  if (controller_change_shift) {
    v_846 = false;
    sub_376 = sub_335;
  } else {
    v_846 = sub_335;
    sub_376 = false;
  };
  if (controller_ck_1) {
    sub_375 = v_846;
  } else {
    sub_375 = sub_376;
  };
  sub_374 = sub_375;
  sub_373 = sub_374;
  if (controller_c_closet) {
    sub_372 = sub_38;
  } else {
    sub_372 = sub_373;
  };
  if (controller_closet_failed_recovered) {
    v_848 = sub_372;
    sub_366 = sub_367;
  } else {
    v_848 = sub_367;
    sub_366 = sub_372;
  };
  if (controller_ck_62_1) {
    sub_365 = v_848;
  } else {
    sub_365 = sub_366;
  };
  if (controller_blind_failed_recovered) {
    v_853 = sub_365;
    sub_364 = sub_352;
  } else {
    v_853 = sub_352;
    sub_364 = sub_365;
  };
  if (controller_ck_72_1) {
    v_854 = v_853;
  } else {
    v_854 = sub_364;
  };
  if (controller_ck_70_1) {
    v_855 = v_854;
  } else {
    v_855 = sub_350;
  };
  if (controller_change_shift) {
    v_844 = sub_301;
    sub_384 = sub_345;
  } else {
    v_844 = sub_345;
    sub_384 = sub_301;
  };
  if (controller_ck_1) {
    sub_383 = v_844;
  } else {
    sub_383 = sub_384;
  };
  sub_382 = sub_383;
  sub_381 = sub_382;
  sub_380 = sub_381;
  if (controller_c_closet) {
    sub_385 = sub_298;
  } else {
    sub_385 = sub_373;
  };
  if (controller_closet_failed_recovered) {
    v_845 = sub_385;
    sub_379 = sub_380;
  } else {
    v_845 = sub_380;
    sub_379 = sub_385;
  };
  if (controller_ck_62_1) {
    sub_378 = v_845;
  } else {
    sub_378 = sub_379;
  };
  if (controller_blind_failed_recovered) {
    v_856 = sub_378;
    sub_377 = sub_352;
  } else {
    v_856 = sub_352;
    sub_377 = sub_378;
  };
  if (controller_ck_72_1) {
    v_857 = v_856;
  } else {
    v_857 = sub_377;
  };
  if (controller_blind_switch) {
    sub_349 = v_855;
  } else {
    sub_349 = v_857;
  };
  sub_390 = sub_304;
  if (controller_c_closet) {
    sub_391 = false;
  } else {
    sub_391 = sub_304;
  };
  if (controller_closet_failed_recovered) {
    v_842 = sub_391;
    sub_389 = sub_390;
  } else {
    v_842 = sub_390;
    sub_389 = sub_391;
  };
  if (controller_ck_62_1) {
    sub_388 = v_842;
  } else {
    sub_388 = sub_389;
  };
  if (controller_window_failed_recovered) {
    v_838 = sub_34;
    sub_401 = sub_294;
  } else {
    v_838 = sub_294;
    sub_401 = sub_34;
  };
  if (controller_ck_57_1) {
    v_839 = v_838;
  } else {
    v_839 = sub_401;
  };
  if (controller_c_window) {
    sub_400 = sub_329;
  } else {
    sub_400 = v_839;
  };
  if (controller_cleaner) {
    v_840 = sub_400;
    sub_399 = false;
  } else {
    v_840 = false;
    sub_399 = sub_400;
  };
  if (controller_ck_37_1) {
    sub_398 = v_840;
  } else {
    sub_398 = sub_399;
  };
  sub_397 = sub_398;
  sub_396 = sub_397;
  sub_395 = sub_396;
  sub_394 = sub_395;
  if (controller_c_closet) {
    sub_402 = false;
  } else {
    sub_402 = sub_395;
  };
  if (controller_closet_failed_recovered) {
    v_841 = sub_402;
    sub_393 = sub_394;
  } else {
    v_841 = sub_394;
    sub_393 = sub_402;
  };
  if (controller_ck_62_1) {
    sub_392 = v_841;
  } else {
    sub_392 = sub_393;
  };
  if (controller_blind_failed_recovered) {
    v_843 = sub_392;
    sub_387 = sub_388;
  } else {
    v_843 = sub_388;
    sub_387 = sub_392;
  };
  if (controller_ck_72_1) {
    sub_386 = v_843;
  } else {
    sub_386 = sub_387;
  };
  sub_407 = sub_332;
  if (controller_c_closet) {
    sub_408 = false;
  } else {
    sub_408 = sub_332;
  };
  if (controller_closet_failed_recovered) {
    v_836 = sub_408;
    sub_406 = sub_407;
  } else {
    v_836 = sub_407;
    sub_406 = sub_408;
  };
  if (controller_ck_62_1) {
    sub_405 = v_836;
  } else {
    sub_405 = sub_406;
  };
  if (controller_blind_failed_recovered) {
    v_837 = sub_405;
    sub_404 = sub_388;
  } else {
    v_837 = sub_388;
    sub_404 = sub_405;
  };
  if (controller_ck_72_1) {
    sub_403 = v_837;
  } else {
    sub_403 = sub_404;
  };
  if (controller_ck_70_1) {
    v_858 = sub_403;
  } else {
    v_858 = sub_386;
  };
  if (controller_blind_switch) {
    v_859 = v_858;
  } else {
    v_859 = sub_403;
  };
  if (controller_ck_65_1) {
    sub_348 = v_859;
  } else {
    sub_348 = sub_349;
  };
  if (controller_light_failed_recovered) {
    v_882 = sub_348;
    sub_266 = sub_267;
  } else {
    v_882 = sub_267;
    sub_266 = sub_348;
  };
  if (controller_ck_67_1) {
    v_883 = v_882;
  } else {
    v_883 = sub_266;
  };
  if (controller_cleaner) {
    v_831 = sub_400;
    sub_421 = sub_278;
  } else {
    v_831 = sub_278;
    sub_421 = sub_400;
  };
  if (controller_ck_37_1) {
    sub_420 = v_831;
  } else {
    sub_420 = sub_421;
  };
  sub_419 = sub_420;
  sub_418 = sub_419;
  sub_417 = sub_418;
  sub_416 = sub_417;
  if (controller_c_closet) {
    sub_422 = sub_298;
  } else {
    sub_422 = sub_395;
  };
  if (controller_closet_failed_recovered) {
    v_832 = sub_422;
    sub_415 = sub_416;
  } else {
    v_832 = sub_416;
    sub_415 = sub_422;
  };
  if (controller_ck_62_1) {
    sub_414 = v_832;
  } else {
    sub_414 = sub_415;
  };
  if (controller_blind_failed_recovered) {
    v_833 = sub_414;
    sub_413 = sub_270;
  } else {
    v_833 = sub_270;
    sub_413 = sub_414;
  };
  if (controller_ck_72_1) {
    sub_412 = v_833;
  } else {
    sub_412 = sub_413;
  };
  if (controller_ck_70_1) {
    v_834 = sub_318;
  } else {
    v_834 = sub_412;
  };
  if (controller_blind_switch) {
    sub_411 = v_834;
  } else {
    sub_411 = sub_337;
  };
  if (controller_light_failed_recovered) {
    v_835 = sub_411;
    sub_410 = sub_267;
  } else {
    v_835 = sub_267;
    sub_410 = sub_411;
  };
  if (controller_ck_67_1) {
    sub_409 = v_835;
  } else {
    sub_409 = sub_410;
  };
  if (controller_light_switch) {
    v_884 = v_883;
  } else {
    v_884 = sub_409;
  };
  if (controller_c_light_1) {
    sub_265 = v_884;
  } else {
    sub_265 = sub_409;
  };
  if (controller_v_277) {
    sub_432 = false;
  } else {
    sub_432 = sub_300;
  };
  if (controller_ck_37_1) {
    sub_435 = sub_302;
  } else {
    sub_435 = sub_303;
  };
  sub_434 = sub_435;
  if (controller_v_277) {
    sub_433 = false;
  } else {
    sub_433 = sub_434;
  };
  if (controller_v_276) {
    v_823 = sub_433;
  } else {
    v_823 = sub_432;
  };
  if (controller_v_277) {
    v_822 = sub_300;
  } else {
    v_822 = false;
  };
  if (controller_v_276) {
    sub_436 = v_822;
  } else {
    sub_436 = false;
  };
  if (controller_c_air_2) {
    v_824 = v_823;
  } else {
    v_824 = sub_436;
  };
  if (controller_v_277) {
    v_821 = sub_434;
  } else {
    v_821 = sub_300;
  };
  if (controller_v_276) {
    sub_437 = v_821;
  } else {
    sub_437 = sub_433;
  };
  if (controller_c_air_1) {
    sub_431 = v_824;
  } else {
    sub_431 = sub_437;
  };
  sub_430 = sub_431;
  if (controller_v_276) {
    v_819 = false;
  } else {
    v_819 = sub_432;
  };
  if (controller_c_air_2) {
    v_820 = v_819;
  } else {
    v_820 = sub_436;
  };
  if (controller_v_276) {
    sub_440 = sub_432;
  } else {
    sub_440 = false;
  };
  if (controller_c_air_1) {
    sub_439 = v_820;
  } else {
    sub_439 = sub_440;
  };
  if (controller_v_276) {
    v_817 = sub_433;
  } else {
    v_817 = false;
  };
  if (controller_c_air_2) {
    v_818 = v_817;
  } else {
    v_818 = false;
  };
  if (controller_v_277) {
    v_816 = sub_434;
  } else {
    v_816 = false;
  };
  if (controller_v_276) {
    sub_442 = v_816;
  } else {
    sub_442 = sub_433;
  };
  if (controller_c_air_1) {
    sub_441 = v_818;
  } else {
    sub_441 = sub_442;
  };
  if (controller_c_closet) {
    sub_438 = sub_439;
  } else {
    sub_438 = sub_441;
  };
  if (controller_closet_failed_recovered) {
    v_825 = sub_438;
    sub_429 = sub_430;
  } else {
    v_825 = sub_430;
    sub_429 = sub_438;
  };
  if (controller_ck_62_1) {
    sub_428 = v_825;
  } else {
    sub_428 = sub_429;
  };
  if (controller_v_276) {
    v_813 = sub_105;
  } else {
    v_813 = sub_432;
  };
  if (controller_c_air_2) {
    v_814 = v_813;
  } else {
    v_814 = sub_436;
  };
  if (controller_v_277) {
    v_812 = sub_106;
  } else {
    v_812 = sub_300;
  };
  if (controller_v_276) {
    sub_447 = v_812;
  } else {
    sub_447 = sub_105;
  };
  if (controller_c_air_1) {
    sub_446 = v_814;
  } else {
    sub_446 = sub_447;
  };
  sub_445 = sub_446;
  if (controller_c_closet) {
    sub_448 = sub_439;
  } else {
    sub_448 = sub_113;
  };
  if (controller_closet_failed_recovered) {
    v_815 = sub_448;
    sub_444 = sub_445;
  } else {
    v_815 = sub_445;
    sub_444 = sub_448;
  };
  if (controller_ck_62_1) {
    sub_443 = v_815;
  } else {
    sub_443 = sub_444;
  };
  if (controller_blind_failed_recovered) {
    v_826 = sub_443;
    sub_427 = sub_428;
  } else {
    v_826 = sub_428;
    sub_427 = sub_443;
  };
  if (controller_ck_72_1) {
    sub_426 = v_826;
  } else {
    sub_426 = sub_427;
  };
  if (controller_v_276) {
    v_808 = sub_433;
  } else {
    v_808 = sub_104;
  };
  if (controller_c_air_2) {
    v_809 = v_808;
  } else {
    v_809 = sub_108;
  };
  if (controller_v_277) {
    v_807 = sub_434;
  } else {
    v_807 = sub_40;
  };
  if (controller_v_276) {
    sub_455 = v_807;
  } else {
    sub_455 = sub_433;
  };
  if (controller_c_air_1) {
    sub_454 = v_809;
  } else {
    sub_454 = sub_455;
  };
  sub_453 = sub_454;
  if (controller_c_closet) {
    sub_456 = sub_111;
  } else {
    sub_456 = sub_441;
  };
  if (controller_closet_failed_recovered) {
    v_810 = sub_456;
    sub_452 = sub_453;
  } else {
    v_810 = sub_453;
    sub_452 = sub_456;
  };
  if (controller_ck_62_1) {
    sub_451 = v_810;
  } else {
    sub_451 = sub_452;
  };
  if (controller_blind_failed_recovered) {
    v_811 = sub_451;
    sub_450 = sub_428;
  } else {
    v_811 = sub_428;
    sub_450 = sub_451;
  };
  if (controller_ck_72_1) {
    sub_449 = v_811;
  } else {
    sub_449 = sub_450;
  };
  if (controller_ck_70_1) {
    v_827 = sub_449;
  } else {
    v_827 = sub_426;
  };
  sub_457 = sub_428;
  if (controller_blind_switch) {
    sub_425 = v_827;
  } else {
    sub_425 = sub_457;
  };
  sub_464 = sub_439;
  if (controller_c_closet) {
    sub_465 = sub_439;
  } else {
    sub_465 = false;
  };
  if (controller_closet_failed_recovered) {
    v_800 = sub_465;
    sub_463 = sub_464;
  } else {
    v_800 = sub_464;
    sub_463 = sub_465;
  };
  if (controller_ck_62_1) {
    sub_462 = v_800;
  } else {
    sub_462 = sub_463;
  };
  if (controller_v_276) {
    v_797 = sub_127;
  } else {
    v_797 = sub_432;
  };
  if (controller_c_air_2) {
    v_798 = v_797;
  } else {
    v_798 = sub_436;
  };
  if (controller_v_277) {
    v_796 = sub_128;
  } else {
    v_796 = sub_300;
  };
  if (controller_v_276) {
    sub_470 = v_796;
  } else {
    sub_470 = sub_127;
  };
  if (controller_c_air_1) {
    sub_469 = v_798;
  } else {
    sub_469 = sub_470;
  };
  sub_468 = sub_469;
  if (controller_c_closet) {
    sub_471 = sub_439;
  } else {
    sub_471 = sub_132;
  };
  if (controller_closet_failed_recovered) {
    v_799 = sub_471;
    sub_467 = sub_468;
  } else {
    v_799 = sub_468;
    sub_467 = sub_471;
  };
  if (controller_ck_62_1) {
    sub_466 = v_799;
  } else {
    sub_466 = sub_467;
  };
  if (controller_blind_failed_recovered) {
    v_801 = sub_466;
    sub_461 = sub_462;
  } else {
    v_801 = sub_462;
    sub_461 = sub_466;
  };
  if (controller_ck_72_1) {
    sub_460 = v_801;
  } else {
    sub_460 = sub_461;
  };
  if (controller_change_shift) {
    v_792 = false;
    sub_479 = sub_435;
  } else {
    v_792 = sub_435;
    sub_479 = false;
  };
  if (controller_ck_1) {
    sub_478 = v_792;
  } else {
    sub_478 = sub_479;
  };
  if (controller_v_277) {
    sub_477 = false;
  } else {
    sub_477 = sub_478;
  };
  if (controller_v_276) {
    v_793 = sub_477;
  } else {
    v_793 = sub_104;
  };
  if (controller_c_air_2) {
    v_794 = v_793;
  } else {
    v_794 = sub_108;
  };
  if (controller_v_277) {
    v_791 = sub_478;
  } else {
    v_791 = sub_40;
  };
  if (controller_v_276) {
    sub_480 = v_791;
  } else {
    sub_480 = sub_477;
  };
  if (controller_c_air_1) {
    sub_476 = v_794;
  } else {
    sub_476 = sub_480;
  };
  sub_475 = sub_476;
  if (controller_v_276) {
    v_789 = sub_477;
  } else {
    v_789 = false;
  };
  if (controller_c_air_2) {
    v_790 = v_789;
  } else {
    v_790 = false;
  };
  if (controller_v_277) {
    v_788 = sub_478;
  } else {
    v_788 = false;
  };
  if (controller_v_276) {
    sub_483 = v_788;
  } else {
    sub_483 = sub_477;
  };
  if (controller_c_air_1) {
    sub_482 = v_790;
  } else {
    sub_482 = sub_483;
  };
  if (controller_c_closet) {
    sub_481 = sub_111;
  } else {
    sub_481 = sub_482;
  };
  if (controller_closet_failed_recovered) {
    v_795 = sub_481;
    sub_474 = sub_475;
  } else {
    v_795 = sub_475;
    sub_474 = sub_481;
  };
  if (controller_ck_62_1) {
    sub_473 = v_795;
  } else {
    sub_473 = sub_474;
  };
  if (controller_blind_failed_recovered) {
    v_802 = sub_473;
    sub_472 = sub_462;
  } else {
    v_802 = sub_462;
    sub_472 = sub_473;
  };
  if (controller_ck_72_1) {
    v_803 = v_802;
  } else {
    v_803 = sub_472;
  };
  if (controller_ck_70_1) {
    v_804 = v_803;
  } else {
    v_804 = sub_460;
  };
  if (controller_v_276) {
    v_785 = sub_477;
  } else {
    v_785 = sub_432;
  };
  if (controller_c_air_2) {
    v_786 = v_785;
  } else {
    v_786 = sub_436;
  };
  if (controller_v_277) {
    v_784 = sub_478;
  } else {
    v_784 = sub_300;
  };
  if (controller_v_276) {
    sub_489 = v_784;
  } else {
    sub_489 = sub_477;
  };
  if (controller_c_air_1) {
    sub_488 = v_786;
  } else {
    sub_488 = sub_489;
  };
  sub_487 = sub_488;
  if (controller_c_closet) {
    sub_490 = sub_439;
  } else {
    sub_490 = sub_482;
  };
  if (controller_closet_failed_recovered) {
    v_787 = sub_490;
    sub_486 = sub_487;
  } else {
    v_787 = sub_487;
    sub_486 = sub_490;
  };
  if (controller_ck_62_1) {
    sub_485 = v_787;
  } else {
    sub_485 = sub_486;
  };
  if (controller_blind_failed_recovered) {
    v_805 = sub_485;
    sub_484 = sub_462;
  } else {
    v_805 = sub_462;
    sub_484 = sub_485;
  };
  if (controller_ck_72_1) {
    v_806 = v_805;
  } else {
    v_806 = sub_484;
  };
  if (controller_blind_switch) {
    sub_459 = v_804;
  } else {
    sub_459 = v_806;
  };
  sub_494 = sub_441;
  if (controller_c_closet) {
    sub_495 = false;
  } else {
    sub_495 = sub_441;
  };
  if (controller_closet_failed_recovered) {
    v_783 = sub_495;
    sub_493 = sub_494;
  } else {
    v_783 = sub_494;
    sub_493 = sub_495;
  };
  if (controller_ck_62_1) {
    sub_492 = v_783;
  } else {
    sub_492 = sub_493;
  };
  sub_491 = sub_492;
  if (controller_ck_65_1) {
    sub_458 = sub_491;
  } else {
    sub_458 = sub_459;
  };
  if (controller_light_failed_recovered) {
    v_828 = sub_458;
    sub_424 = sub_425;
  } else {
    v_828 = sub_425;
    sub_424 = sub_458;
  };
  if (controller_ck_67_1) {
    v_829 = v_828;
  } else {
    v_829 = sub_424;
  };
  if (controller_ck_70_1) {
    v_781 = sub_449;
  } else {
    v_781 = sub_457;
  };
  if (controller_blind_switch) {
    sub_498 = v_781;
  } else {
    sub_498 = sub_457;
  };
  if (controller_light_failed_recovered) {
    v_782 = sub_498;
    sub_497 = sub_425;
  } else {
    v_782 = sub_425;
    sub_497 = sub_498;
  };
  if (controller_ck_67_1) {
    sub_496 = v_782;
  } else {
    sub_496 = sub_497;
  };
  if (controller_light_switch) {
    v_830 = v_829;
  } else {
    v_830 = sub_496;
  };
  if (controller_c_light_1) {
    sub_423 = v_830;
  } else {
    sub_423 = sub_496;
  };
  if (controller_air_failed_recovered) {
    v_885 = sub_423;
    sub_264 = sub_265;
  } else {
    v_885 = sub_265;
    sub_264 = sub_423;
  };
  if (controller_ck_52_1) {
    sub_263 = v_885;
  } else {
    sub_263 = sub_264;
  };
  if (controller_ck_45_1) {
    sub_518 = sub_284;
  } else {
    sub_518 = sub_288;
  };
  sub_517 = sub_518;
  if (controller_door_failed_recovered) {
    v_771 = false;
    sub_520 = sub_518;
  } else {
    v_771 = sub_518;
    sub_520 = false;
  };
  if (controller_ck_42_1) {
    sub_519 = v_771;
  } else {
    sub_519 = sub_520;
  };
  if (controller_c_door) {
    sub_516 = sub_517;
    sub_521 = sub_519;
  } else {
    sub_516 = sub_519;
    sub_521 = sub_517;
  };
  if (controller_ck_40_1) {
    sub_515 = sub_521;
  } else {
    sub_515 = sub_516;
  };
  sub_514 = sub_515;
  sub_523 = sub_519;
  if (controller_window_failed_recovered) {
    v_772 = sub_523;
    sub_522 = sub_515;
  } else {
    v_772 = sub_515;
    sub_522 = sub_523;
  };
  if (controller_ck_57_1) {
    v_773 = v_772;
  } else {
    v_773 = sub_522;
  };
  if (controller_c_window) {
    sub_513 = sub_514;
  } else {
    sub_513 = v_773;
  };
  sub_512 = sub_513;
  sub_511 = sub_512;
  sub_510 = sub_511;
  sub_509 = sub_510;
  sub_508 = sub_509;
  if (controller_cleaner) {
    sub_528 = sub_513;
    sub_529 = false;
  } else {
    sub_528 = false;
    sub_529 = sub_513;
  };
  if (controller_ck_37_1) {
    sub_527 = sub_529;
  } else {
    sub_527 = sub_528;
  };
  sub_526 = sub_527;
  sub_525 = sub_526;
  if (controller_ck_37_1) {
    sub_532 = sub_528;
  } else {
    sub_532 = sub_529;
  };
  sub_531 = sub_532;
  sub_530 = sub_531;
  if (controller_c_closet) {
    sub_524 = sub_525;
  } else {
    sub_524 = sub_530;
  };
  if (controller_closet_failed_recovered) {
    v_774 = sub_524;
    sub_507 = sub_508;
  } else {
    v_774 = sub_508;
    sub_507 = sub_524;
  };
  if (controller_ck_62_1) {
    sub_506 = v_774;
  } else {
    sub_506 = sub_507;
  };
  if (controller_blind_failed_recovered) {
    v_775 = sub_174;
    sub_505 = sub_506;
  } else {
    v_775 = sub_506;
    sub_505 = sub_174;
  };
  if (controller_ck_72_1) {
    sub_504 = v_775;
  } else {
    sub_504 = sub_505;
  };
  if (controller_window_failed_recovered) {
    v_768 = false;
    sub_544 = sub_515;
  } else {
    v_768 = sub_515;
    sub_544 = false;
  };
  if (controller_ck_57_1) {
    sub_543 = v_768;
  } else {
    sub_543 = sub_544;
  };
  if (controller_c_window) {
    sub_542 = sub_543;
  } else {
    sub_542 = sub_514;
  };
  sub_541 = sub_542;
  sub_540 = sub_541;
  sub_539 = sub_540;
  sub_538 = sub_539;
  sub_537 = sub_538;
  if (controller_cleaner) {
    sub_549 = sub_542;
    sub_550 = false;
  } else {
    sub_549 = false;
    sub_550 = sub_542;
  };
  if (controller_ck_37_1) {
    sub_548 = sub_550;
  } else {
    sub_548 = sub_549;
  };
  sub_547 = sub_548;
  sub_546 = sub_547;
  if (controller_ck_37_1) {
    sub_553 = sub_549;
  } else {
    sub_553 = sub_550;
  };
  sub_552 = sub_553;
  sub_551 = sub_552;
  if (controller_c_closet) {
    sub_545 = sub_546;
  } else {
    sub_545 = sub_551;
  };
  if (controller_closet_failed_recovered) {
    v_769 = sub_545;
    sub_536 = sub_537;
  } else {
    v_769 = sub_537;
    sub_536 = sub_545;
  };
  if (controller_ck_62_1) {
    sub_535 = v_769;
  } else {
    sub_535 = sub_536;
  };
  if (controller_blind_failed_recovered) {
    v_770 = sub_535;
    sub_534 = sub_506;
  } else {
    v_770 = sub_506;
    sub_534 = sub_535;
  };
  if (controller_ck_72_1) {
    sub_533 = v_770;
  } else {
    sub_533 = sub_534;
  };
  if (controller_ck_70_1) {
    v_776 = sub_533;
  } else {
    v_776 = sub_504;
  };
  if (controller_blind_switch) {
    sub_503 = v_776;
  } else {
    sub_503 = sub_533;
  };
  if (controller_change_shift) {
    v_764 = false;
    sub_564 = sub_541;
  } else {
    v_764 = sub_541;
    sub_564 = false;
  };
  if (controller_ck_1) {
    sub_563 = v_764;
  } else {
    sub_563 = sub_564;
  };
  sub_562 = sub_563;
  sub_561 = sub_562;
  sub_560 = sub_561;
  if (controller_change_shift) {
    v_763 = false;
    sub_568 = sub_548;
  } else {
    v_763 = sub_548;
    sub_568 = false;
  };
  if (controller_ck_1) {
    sub_567 = v_763;
  } else {
    sub_567 = sub_568;
  };
  sub_566 = sub_567;
  if (controller_change_shift) {
    v_762 = false;
    sub_571 = sub_553;
  } else {
    v_762 = sub_553;
    sub_571 = false;
  };
  if (controller_ck_1) {
    sub_570 = v_762;
  } else {
    sub_570 = sub_571;
  };
  sub_569 = sub_570;
  if (controller_c_closet) {
    sub_565 = sub_566;
  } else {
    sub_565 = sub_569;
  };
  if (controller_closet_failed_recovered) {
    v_765 = sub_565;
    sub_559 = sub_560;
  } else {
    v_765 = sub_560;
    sub_559 = sub_565;
  };
  if (controller_ck_62_1) {
    sub_558 = v_765;
  } else {
    sub_558 = sub_559;
  };
  if (controller_blind_failed_recovered) {
    v_766 = sub_558;
    sub_557 = false;
  } else {
    v_766 = false;
    sub_557 = sub_558;
  };
  if (controller_ck_72_1) {
    sub_556 = v_766;
  } else {
    sub_556 = sub_557;
  };
  if (controller_ck_70_1) {
    v_767 = sub_556;
  } else {
    v_767 = sub_194;
  };
  if (controller_blind_switch) {
    sub_555 = v_767;
  } else {
    sub_555 = sub_556;
  };
  if (controller_window_failed_recovered) {
    v_757 = sub_156;
    sub_583 = sub_515;
  } else {
    v_757 = sub_515;
    sub_583 = sub_156;
  };
  if (controller_ck_57_1) {
    v_758 = v_757;
  } else {
    v_758 = sub_583;
  };
  if (controller_c_window) {
    sub_582 = sub_543;
  } else {
    sub_582 = v_758;
  };
  sub_581 = sub_582;
  sub_580 = sub_581;
  sub_579 = sub_580;
  sub_578 = sub_579;
  sub_577 = sub_578;
  if (controller_cleaner) {
    sub_588 = sub_582;
    sub_589 = false;
  } else {
    sub_588 = false;
    sub_589 = sub_582;
  };
  if (controller_ck_37_1) {
    sub_587 = sub_589;
  } else {
    sub_587 = sub_588;
  };
  sub_586 = sub_587;
  sub_585 = sub_586;
  if (controller_ck_37_1) {
    sub_592 = sub_588;
  } else {
    sub_592 = sub_589;
  };
  sub_591 = sub_592;
  sub_590 = sub_591;
  if (controller_c_closet) {
    sub_584 = sub_585;
  } else {
    sub_584 = sub_590;
  };
  if (controller_closet_failed_recovered) {
    v_759 = sub_584;
    sub_576 = sub_577;
  } else {
    v_759 = sub_577;
    sub_576 = sub_584;
  };
  if (controller_ck_62_1) {
    sub_575 = v_759;
  } else {
    sub_575 = sub_576;
  };
  if (controller_blind_failed_recovered) {
    v_760 = sub_575;
    sub_574 = sub_506;
  } else {
    v_760 = sub_506;
    sub_574 = sub_575;
  };
  if (controller_ck_72_1) {
    sub_573 = v_760;
  } else {
    sub_573 = sub_574;
  };
  if (controller_ck_70_1) {
    v_761 = sub_533;
  } else {
    v_761 = sub_573;
  };
  if (controller_blind_switch) {
    sub_572 = v_761;
  } else {
    sub_572 = sub_533;
  };
  if (controller_ck_65_1) {
    sub_554 = sub_572;
  } else {
    sub_554 = sub_555;
  };
  if (controller_light_failed_recovered) {
    v_777 = sub_554;
    sub_502 = sub_503;
  } else {
    v_777 = sub_503;
    sub_502 = sub_554;
  };
  if (controller_ck_67_1) {
    v_778 = v_777;
  } else {
    v_778 = sub_502;
  };
  if (controller_light_failed_recovered) {
    v_756 = sub_572;
    sub_594 = sub_503;
  } else {
    v_756 = sub_503;
    sub_594 = sub_572;
  };
  if (controller_ck_67_1) {
    sub_593 = v_756;
  } else {
    sub_593 = sub_594;
  };
  if (controller_light_switch) {
    v_779 = v_778;
  } else {
    v_779 = sub_593;
  };
  if (controller_c_light_1) {
    sub_501 = v_779;
  } else {
    sub_501 = sub_593;
  };
  sub_610 = sub_517;
  sub_609 = sub_610;
  sub_608 = sub_609;
  if (controller_cleaner) {
    v_747 = sub_608;
    sub_607 = false;
  } else {
    v_747 = false;
    sub_607 = sub_608;
  };
  if (controller_ck_37_1) {
    sub_606 = v_747;
  } else {
    sub_606 = sub_607;
  };
  sub_605 = sub_606;
  if (controller_v_277) {
    sub_604 = sub_605;
  } else {
    sub_604 = false;
  };
  if (controller_ck_40_1) {
    sub_616 = sub_516;
  } else {
    sub_616 = sub_521;
  };
  if (controller_window_failed_recovered) {
    v_744 = false;
    sub_617 = sub_616;
  } else {
    v_744 = sub_616;
    sub_617 = false;
  };
  if (controller_ck_57_1) {
    v_745 = v_744;
  } else {
    v_745 = sub_617;
  };
  if (controller_c_window) {
    sub_615 = sub_616;
  } else {
    sub_615 = v_745;
  };
  if (controller_cleaner) {
    v_746 = false;
    sub_614 = sub_615;
  } else {
    v_746 = sub_615;
    sub_614 = false;
  };
  if (controller_ck_37_1) {
    sub_613 = v_746;
  } else {
    sub_613 = sub_614;
  };
  sub_612 = sub_613;
  if (controller_v_277) {
    sub_611 = sub_605;
  } else {
    sub_611 = sub_612;
  };
  if (controller_v_276) {
    v_748 = sub_611;
  } else {
    v_748 = sub_604;
  };
  if (controller_v_277) {
    v_743 = false;
  } else {
    v_743 = sub_605;
  };
  if (controller_v_276) {
    sub_618 = v_743;
  } else {
    sub_618 = sub_605;
  };
  if (controller_c_air_2) {
    v_749 = v_748;
  } else {
    v_749 = sub_618;
  };
  if (controller_v_277) {
    sub_620 = sub_612;
  } else {
    sub_620 = false;
  };
  if (controller_v_276) {
    sub_619 = sub_620;
  } else {
    sub_619 = sub_611;
  };
  if (controller_c_air_1) {
    sub_603 = v_749;
  } else {
    sub_603 = sub_619;
  };
  sub_602 = sub_603;
  if (controller_c_air_2) {
    v_741 = sub_604;
  } else {
    v_741 = sub_618;
  };
  if (controller_v_277) {
    sub_622 = false;
  } else {
    sub_622 = sub_612;
  };
  if (controller_v_276) {
    v_738 = sub_622;
  } else {
    v_738 = false;
  };
  if (controller_c_air_2) {
    v_739 = v_738;
  } else {
    v_739 = false;
  };
  if (controller_v_276) {
    sub_623 = sub_620;
  } else {
    sub_623 = sub_622;
  };
  if (controller_c_air_1) {
    v_740 = v_739;
  } else {
    v_740 = sub_623;
  };
  if (controller_v_276) {
    sub_624 = false;
  } else {
    sub_624 = sub_604;
  };
  if (controller_c_air_1) {
    v_742 = v_741;
  } else {
    v_742 = sub_624;
  };
  if (controller_c_closet) {
    sub_621 = v_740;
  } else {
    sub_621 = v_742;
  };
  if (controller_closet_failed_recovered) {
    v_750 = sub_621;
    sub_601 = sub_602;
  } else {
    v_750 = sub_602;
    sub_601 = sub_621;
  };
  if (controller_ck_62_1) {
    sub_600 = v_750;
  } else {
    sub_600 = sub_601;
  };
  if (controller_blind_failed_recovered) {
    v_751 = sub_215;
    sub_599 = sub_600;
  } else {
    v_751 = sub_600;
    sub_599 = sub_215;
  };
  if (controller_ck_72_1) {
    sub_598 = v_751;
  } else {
    sub_598 = sub_599;
  };
  sub_625 = sub_600;
  if (controller_ck_70_1) {
    v_752 = sub_625;
  } else {
    v_752 = sub_598;
  };
  if (controller_blind_switch) {
    sub_597 = v_752;
  } else {
    sub_597 = sub_625;
  };
  if (controller_change_shift) {
    v_732 = false;
    sub_636 = sub_606;
  } else {
    v_732 = sub_606;
    sub_636 = false;
  };
  if (controller_ck_1) {
    sub_635 = v_732;
  } else {
    sub_635 = sub_636;
  };
  if (controller_v_277) {
    sub_634 = sub_635;
  } else {
    sub_634 = false;
  };
  if (controller_change_shift) {
    v_731 = false;
    sub_639 = sub_613;
  } else {
    v_731 = sub_613;
    sub_639 = false;
  };
  if (controller_ck_1) {
    sub_638 = v_731;
  } else {
    sub_638 = sub_639;
  };
  if (controller_v_277) {
    sub_637 = sub_635;
  } else {
    sub_637 = sub_638;
  };
  if (controller_v_276) {
    v_733 = sub_637;
  } else {
    v_733 = sub_634;
  };
  if (controller_v_277) {
    v_730 = false;
  } else {
    v_730 = sub_635;
  };
  if (controller_v_276) {
    sub_640 = v_730;
  } else {
    sub_640 = sub_635;
  };
  if (controller_c_air_2) {
    v_734 = v_733;
  } else {
    v_734 = sub_640;
  };
  if (controller_v_277) {
    sub_642 = sub_638;
  } else {
    sub_642 = false;
  };
  if (controller_v_276) {
    sub_641 = sub_642;
  } else {
    sub_641 = sub_637;
  };
  if (controller_c_air_1) {
    sub_633 = v_734;
  } else {
    sub_633 = sub_641;
  };
  sub_632 = sub_633;
  if (controller_c_air_2) {
    v_728 = sub_634;
  } else {
    v_728 = sub_640;
  };
  if (controller_v_277) {
    sub_644 = false;
  } else {
    sub_644 = sub_638;
  };
  if (controller_v_276) {
    v_725 = sub_644;
  } else {
    v_725 = false;
  };
  if (controller_c_air_2) {
    v_726 = v_725;
  } else {
    v_726 = false;
  };
  if (controller_v_276) {
    sub_645 = sub_642;
  } else {
    sub_645 = sub_644;
  };
  if (controller_c_air_1) {
    v_727 = v_726;
  } else {
    v_727 = sub_645;
  };
  if (controller_v_276) {
    sub_646 = false;
  } else {
    sub_646 = sub_634;
  };
  if (controller_c_air_1) {
    v_729 = v_728;
  } else {
    v_729 = sub_646;
  };
  if (controller_c_closet) {
    sub_643 = v_727;
  } else {
    sub_643 = v_729;
  };
  if (controller_closet_failed_recovered) {
    v_735 = sub_643;
    sub_631 = sub_632;
  } else {
    v_735 = sub_632;
    sub_631 = sub_643;
  };
  if (controller_ck_62_1) {
    sub_630 = v_735;
  } else {
    sub_630 = sub_631;
  };
  if (controller_blind_failed_recovered) {
    v_736 = sub_630;
    sub_629 = false;
  } else {
    v_736 = false;
    sub_629 = sub_630;
  };
  if (controller_ck_72_1) {
    sub_628 = v_736;
  } else {
    sub_628 = sub_629;
  };
  if (controller_ck_70_1) {
    v_737 = sub_628;
  } else {
    v_737 = sub_242;
  };
  if (controller_blind_switch) {
    sub_627 = v_737;
  } else {
    sub_627 = sub_628;
  };
  sub_647 = sub_625;
  if (controller_ck_65_1) {
    sub_626 = sub_647;
  } else {
    sub_626 = sub_627;
  };
  if (controller_light_failed_recovered) {
    v_753 = sub_626;
    sub_596 = sub_597;
  } else {
    v_753 = sub_597;
    sub_596 = sub_626;
  };
  if (controller_ck_67_1) {
    v_754 = v_753;
  } else {
    v_754 = sub_596;
  };
  if (controller_light_failed_recovered) {
    v = sub_647;
    sub_649 = sub_597;
  } else {
    v = sub_597;
    sub_649 = sub_647;
  };
  if (controller_ck_67_1) {
    sub_648 = v;
  } else {
    sub_648 = sub_649;
  };
  if (controller_light_switch) {
    v_755 = v_754;
  } else {
    v_755 = sub_648;
  };
  if (controller_c_light_1) {
    sub_595 = v_755;
  } else {
    sub_595 = sub_648;
  };
  if (controller_air_failed_recovered) {
    v_780 = sub_595;
    sub_500 = sub_501;
  } else {
    v_780 = sub_501;
    sub_500 = sub_595;
  };
  if (controller_ck_52_1) {
    sub_499 = v_780;
  } else {
    sub_499 = sub_500;
  };
  if (controller_worker) {
    v_984 = sub_499;
    sub_262 = sub_263;
  } else {
    v_984 = sub_263;
    sub_262 = sub_499;
  };
  if (controller_ck_35_1) {
    v_985 = v_984;
  } else {
    v_985 = sub_262;
  };
  if (p_controller_c_blind_1) {
    sub_0 = v_985;
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
  int controller_pnr_22, int controller_ck_35_1, int controller_pnr_21,
  int controller_ck_37_1, int controller_pnr_20, int controller_ck_40_1,
  int controller_pnr_19, int controller_ck_42_1, int controller_pnr_18,
  int controller_ck_45_1, int controller_pnr_17, int controller_ck_47_1,
  int controller_pnr_16, int controller_v_277, int controller_v_276,
  int controller_pnr_15, int controller_ck_52_1, int controller_pnr_14,
  int controller_ck_55_1, int controller_pnr_13, int controller_ck_57_1,
  int controller_pnr_12, int controller_ck_60_1, int controller_pnr_11,
  int controller_ck_62_1, int controller_pnr_10, int controller_ck_65_1,
  int controller_pnr_9, int controller_ck_67_1, int controller_pnr_8,
  int controller_ck_70_1, int controller_pnr_7, int controller_ck_72_1,
  int controller_pnr, int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_1_out* _out) {
  
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
  v_1130 = (controller_pc_failed_recovered&&false);
  v_1129 = !(controller_pc_failed_recovered);
  sub_26 = (v_1129&&false);
  if (controller_ck_47_1) {
    sub_25 = v_1130;
  } else {
    sub_25 = sub_26;
  };
  sub_27 = false;
  if (controller_c_pc) {
    sub_24 = sub_25;
    sub_28 = sub_27;
  } else {
    sub_24 = sub_27;
    sub_28 = sub_25;
  };
  if (controller_ck_45_1) {
    sub_23 = sub_28;
  } else {
    sub_23 = sub_24;
  };
  if (controller_door_failed_recovered) {
    v_1131 = false;
    sub_22 = sub_23;
  } else {
    v_1131 = sub_23;
    sub_22 = false;
  };
  if (controller_ck_42_1) {
    sub_21 = v_1131;
  } else {
    sub_21 = sub_22;
  };
  sub_29 = sub_23;
  if (controller_c_door) {
    sub_20 = sub_21;
    sub_30 = sub_29;
  } else {
    sub_20 = sub_29;
    sub_30 = sub_21;
  };
  if (controller_ck_40_1) {
    sub_19 = sub_30;
  } else {
    sub_19 = sub_20;
  };
  if (controller_window_failed_recovered) {
    v_1132 = false;
    sub_31 = sub_19;
  } else {
    v_1132 = sub_19;
    sub_31 = false;
  };
  if (controller_ck_57_1) {
    v_1133 = v_1132;
  } else {
    v_1133 = sub_31;
  };
  if (controller_c_window) {
    sub_18 = sub_19;
  } else {
    sub_18 = v_1133;
  };
  if (controller_ck_40_1) {
    sub_34 = sub_20;
  } else {
    sub_34 = sub_30;
  };
  sub_33 = sub_34;
  sub_36 = sub_21;
  if (controller_window_failed_recovered) {
    v_1127 = sub_36;
    sub_35 = sub_34;
  } else {
    v_1127 = sub_34;
    sub_35 = sub_36;
  };
  if (controller_ck_57_1) {
    v_1128 = v_1127;
  } else {
    v_1128 = sub_35;
  };
  if (controller_c_window) {
    sub_32 = sub_33;
  } else {
    sub_32 = v_1128;
  };
  if (controller_cleaner) {
    v_1134 = sub_32;
    sub_17 = sub_18;
  } else {
    v_1134 = sub_18;
    sub_17 = sub_32;
  };
  if (controller_ck_37_1) {
    sub_16 = v_1134;
  } else {
    sub_16 = sub_17;
  };
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  if (controller_cleaner) {
    sub_42 = sub_18;
    sub_43 = false;
  } else {
    sub_42 = false;
    sub_43 = sub_18;
  };
  if (controller_ck_37_1) {
    sub_41 = sub_43;
  } else {
    sub_41 = sub_42;
  };
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (controller_cleaner) {
    v_1126 = sub_32;
    sub_48 = false;
  } else {
    v_1126 = false;
    sub_48 = sub_32;
  };
  if (controller_ck_37_1) {
    sub_47 = v_1126;
  } else {
    sub_47 = sub_48;
  };
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  if (controller_c_closet) {
    sub_37 = sub_38;
  } else {
    sub_37 = sub_44;
  };
  if (controller_closet_failed_recovered) {
    v_1135 = sub_37;
    sub_11 = sub_12;
  } else {
    v_1135 = sub_12;
    sub_11 = sub_37;
  };
  if (controller_ck_62_1) {
    sub_10 = v_1135;
  } else {
    sub_10 = sub_11;
  };
  if (controller_window_failed_recovered) {
    v_1122 = false;
    sub_58 = sub_34;
  } else {
    v_1122 = sub_34;
    sub_58 = false;
  };
  if (controller_ck_57_1) {
    v_1123 = v_1122;
  } else {
    v_1123 = sub_58;
  };
  if (controller_c_window) {
    sub_57 = v_1123;
  } else {
    sub_57 = sub_33;
  };
  if (controller_cleaner) {
    v_1124 = sub_57;
    sub_56 = sub_18;
  } else {
    v_1124 = sub_18;
    sub_56 = sub_57;
  };
  if (controller_ck_37_1) {
    sub_55 = v_1124;
  } else {
    sub_55 = sub_56;
  };
  sub_54 = sub_55;
  sub_53 = sub_54;
  sub_52 = sub_53;
  sub_51 = sub_52;
  if (controller_cleaner) {
    v_1121 = sub_57;
    sub_63 = false;
  } else {
    v_1121 = false;
    sub_63 = sub_57;
  };
  if (controller_ck_37_1) {
    sub_62 = v_1121;
  } else {
    sub_62 = sub_63;
  };
  sub_61 = sub_62;
  sub_60 = sub_61;
  if (controller_c_closet) {
    sub_59 = sub_38;
  } else {
    sub_59 = sub_60;
  };
  if (controller_closet_failed_recovered) {
    v_1125 = sub_59;
    sub_50 = sub_51;
  } else {
    v_1125 = sub_51;
    sub_50 = sub_59;
  };
  if (controller_ck_62_1) {
    sub_49 = v_1125;
  } else {
    sub_49 = sub_50;
  };
  if (controller_blind_failed_recovered) {
    v_1136 = sub_49;
    sub_9 = sub_10;
  } else {
    v_1136 = sub_10;
    sub_9 = sub_49;
  };
  if (controller_ck_72_1) {
    sub_8 = v_1136;
  } else {
    sub_8 = sub_9;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (controller_v_277) {
    sub_72 = false;
  } else {
    sub_72 = sub_40;
  };
  if (controller_ck_37_1) {
    sub_75 = sub_42;
  } else {
    sub_75 = sub_43;
  };
  sub_74 = sub_75;
  if (controller_v_277) {
    sub_73 = false;
  } else {
    sub_73 = sub_74;
  };
  if (controller_v_276) {
    v_1118 = sub_73;
  } else {
    v_1118 = sub_72;
  };
  if (controller_v_277) {
    v_1117 = sub_40;
  } else {
    v_1117 = false;
  };
  if (controller_v_276) {
    sub_76 = v_1117;
  } else {
    sub_76 = false;
  };
  if (controller_c_air_2) {
    v_1119 = v_1118;
  } else {
    v_1119 = sub_76;
  };
  if (controller_v_277) {
    v_1116 = sub_74;
  } else {
    v_1116 = sub_40;
  };
  if (controller_v_276) {
    sub_77 = v_1116;
  } else {
    sub_77 = sub_73;
  };
  if (controller_c_air_1) {
    sub_71 = v_1119;
  } else {
    sub_71 = sub_77;
  };
  sub_70 = sub_71;
  if (controller_v_276) {
    v_1114 = false;
  } else {
    v_1114 = sub_72;
  };
  if (controller_c_air_2) {
    v_1115 = v_1114;
  } else {
    v_1115 = sub_76;
  };
  if (controller_v_276) {
    sub_80 = sub_72;
  } else {
    sub_80 = false;
  };
  if (controller_c_air_1) {
    sub_79 = v_1115;
  } else {
    sub_79 = sub_80;
  };
  if (controller_v_276) {
    v_1112 = sub_73;
  } else {
    v_1112 = false;
  };
  if (controller_c_air_2) {
    v_1113 = v_1112;
  } else {
    v_1113 = false;
  };
  if (controller_v_277) {
    v_1111 = sub_74;
  } else {
    v_1111 = false;
  };
  if (controller_v_276) {
    sub_82 = v_1111;
  } else {
    sub_82 = sub_73;
  };
  if (controller_c_air_1) {
    sub_81 = v_1113;
  } else {
    sub_81 = sub_82;
  };
  if (controller_c_closet) {
    sub_78 = sub_79;
  } else {
    sub_78 = sub_81;
  };
  if (controller_closet_failed_recovered) {
    v_1120 = sub_78;
    sub_69 = sub_70;
  } else {
    v_1120 = sub_70;
    sub_69 = sub_78;
  };
  if (controller_ck_62_1) {
    sub_68 = v_1120;
  } else {
    sub_68 = sub_69;
  };
  sub_67 = sub_68;
  sub_66 = sub_67;
  sub_65 = sub_66;
  sub_64 = sub_65;
  if (controller_air_failed_recovered) {
    v_1137 = sub_64;
    sub_4 = sub_5;
  } else {
    v_1137 = sub_5;
    sub_4 = sub_64;
  };
  if (controller_ck_52_1) {
    sub_3 = v_1137;
  } else {
    sub_3 = sub_4;
  };
  if (controller_ck_45_1) {
    sub_102 = sub_24;
  } else {
    sub_102 = sub_28;
  };
  sub_101 = sub_102;
  if (controller_door_failed_recovered) {
    v_1105 = false;
    sub_104 = sub_102;
  } else {
    v_1105 = sub_102;
    sub_104 = false;
  };
  if (controller_ck_42_1) {
    sub_103 = v_1105;
  } else {
    sub_103 = sub_104;
  };
  if (controller_c_door) {
    sub_100 = sub_101;
    sub_105 = sub_103;
  } else {
    sub_100 = sub_103;
    sub_105 = sub_101;
  };
  if (controller_ck_40_1) {
    sub_99 = sub_105;
  } else {
    sub_99 = sub_100;
  };
  sub_98 = sub_99;
  sub_107 = sub_103;
  if (controller_window_failed_recovered) {
    v_1106 = sub_107;
    sub_106 = sub_99;
  } else {
    v_1106 = sub_99;
    sub_106 = sub_107;
  };
  if (controller_ck_57_1) {
    v_1107 = v_1106;
  } else {
    v_1107 = sub_106;
  };
  if (controller_c_window) {
    sub_97 = sub_98;
  } else {
    sub_97 = v_1107;
  };
  sub_96 = sub_97;
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  if (controller_cleaner) {
    sub_112 = sub_97;
    sub_113 = false;
  } else {
    sub_112 = false;
    sub_113 = sub_97;
  };
  if (controller_ck_37_1) {
    sub_111 = sub_113;
  } else {
    sub_111 = sub_112;
  };
  sub_110 = sub_111;
  sub_109 = sub_110;
  if (controller_ck_37_1) {
    sub_116 = sub_112;
  } else {
    sub_116 = sub_113;
  };
  sub_115 = sub_116;
  sub_114 = sub_115;
  if (controller_c_closet) {
    sub_108 = sub_109;
  } else {
    sub_108 = sub_114;
  };
  if (controller_closet_failed_recovered) {
    v_1108 = sub_108;
    sub_91 = sub_92;
  } else {
    v_1108 = sub_92;
    sub_91 = sub_108;
  };
  if (controller_ck_62_1) {
    sub_90 = v_1108;
  } else {
    sub_90 = sub_91;
  };
  if (controller_window_failed_recovered) {
    v_1102 = false;
    sub_125 = sub_99;
  } else {
    v_1102 = sub_99;
    sub_125 = false;
  };
  if (controller_ck_57_1) {
    v_1103 = v_1102;
  } else {
    v_1103 = sub_125;
  };
  if (controller_c_window) {
    sub_124 = v_1103;
  } else {
    sub_124 = sub_98;
  };
  sub_123 = sub_124;
  sub_122 = sub_123;
  sub_121 = sub_122;
  sub_120 = sub_121;
  sub_119 = sub_120;
  if (controller_cleaner) {
    sub_130 = sub_124;
    sub_131 = false;
  } else {
    sub_130 = false;
    sub_131 = sub_124;
  };
  if (controller_ck_37_1) {
    sub_129 = sub_131;
  } else {
    sub_129 = sub_130;
  };
  sub_128 = sub_129;
  sub_127 = sub_128;
  if (controller_ck_37_1) {
    sub_134 = sub_130;
  } else {
    sub_134 = sub_131;
  };
  sub_133 = sub_134;
  sub_132 = sub_133;
  if (controller_c_closet) {
    sub_126 = sub_127;
  } else {
    sub_126 = sub_132;
  };
  if (controller_closet_failed_recovered) {
    v_1104 = sub_126;
    sub_118 = sub_119;
  } else {
    v_1104 = sub_119;
    sub_118 = sub_126;
  };
  if (controller_ck_62_1) {
    sub_117 = v_1104;
  } else {
    sub_117 = sub_118;
  };
  if (controller_blind_failed_recovered) {
    v_1109 = sub_117;
    sub_89 = sub_90;
  } else {
    v_1109 = sub_90;
    sub_89 = sub_117;
  };
  if (controller_ck_72_1) {
    sub_88 = v_1109;
  } else {
    sub_88 = sub_89;
  };
  sub_87 = sub_88;
  sub_86 = sub_87;
  sub_85 = sub_86;
  sub_149 = sub_101;
  sub_148 = sub_149;
  sub_147 = sub_148;
  if (controller_cleaner) {
    v_1098 = sub_147;
    sub_146 = false;
  } else {
    v_1098 = false;
    sub_146 = sub_147;
  };
  if (controller_ck_37_1) {
    sub_145 = v_1098;
  } else {
    sub_145 = sub_146;
  };
  sub_144 = sub_145;
  if (controller_v_277) {
    sub_143 = sub_144;
  } else {
    sub_143 = false;
  };
  if (controller_ck_40_1) {
    sub_155 = sub_100;
  } else {
    sub_155 = sub_105;
  };
  if (controller_window_failed_recovered) {
    v_1095 = false;
    sub_156 = sub_155;
  } else {
    v_1095 = sub_155;
    sub_156 = false;
  };
  if (controller_ck_57_1) {
    v_1096 = v_1095;
  } else {
    v_1096 = sub_156;
  };
  if (controller_c_window) {
    sub_154 = sub_155;
  } else {
    sub_154 = v_1096;
  };
  if (controller_cleaner) {
    v_1097 = false;
    sub_153 = sub_154;
  } else {
    v_1097 = sub_154;
    sub_153 = false;
  };
  if (controller_ck_37_1) {
    sub_152 = v_1097;
  } else {
    sub_152 = sub_153;
  };
  sub_151 = sub_152;
  if (controller_v_277) {
    sub_150 = sub_144;
  } else {
    sub_150 = sub_151;
  };
  if (controller_v_276) {
    v_1099 = sub_150;
  } else {
    v_1099 = sub_143;
  };
  if (controller_v_277) {
    v_1094 = false;
  } else {
    v_1094 = sub_144;
  };
  if (controller_v_276) {
    sub_157 = v_1094;
  } else {
    sub_157 = sub_144;
  };
  if (controller_c_air_2) {
    v_1100 = v_1099;
  } else {
    v_1100 = sub_157;
  };
  if (controller_v_277) {
    sub_159 = sub_151;
  } else {
    sub_159 = false;
  };
  if (controller_v_276) {
    sub_158 = sub_159;
  } else {
    sub_158 = sub_150;
  };
  if (controller_c_air_1) {
    sub_142 = v_1100;
  } else {
    sub_142 = sub_158;
  };
  sub_141 = sub_142;
  if (controller_c_air_2) {
    v_1092 = sub_143;
  } else {
    v_1092 = sub_157;
  };
  if (controller_v_277) {
    sub_161 = false;
  } else {
    sub_161 = sub_151;
  };
  if (controller_v_276) {
    v_1089 = sub_161;
  } else {
    v_1089 = false;
  };
  if (controller_c_air_2) {
    v_1090 = v_1089;
  } else {
    v_1090 = false;
  };
  if (controller_v_276) {
    sub_162 = sub_159;
  } else {
    sub_162 = sub_161;
  };
  if (controller_c_air_1) {
    v_1091 = v_1090;
  } else {
    v_1091 = sub_162;
  };
  if (controller_v_276) {
    sub_163 = false;
  } else {
    sub_163 = sub_143;
  };
  if (controller_c_air_1) {
    v_1093 = v_1092;
  } else {
    v_1093 = sub_163;
  };
  if (controller_c_closet) {
    sub_160 = v_1091;
  } else {
    sub_160 = v_1093;
  };
  if (controller_closet_failed_recovered) {
    v_1101 = sub_160;
    sub_140 = sub_141;
  } else {
    v_1101 = sub_141;
    sub_140 = sub_160;
  };
  if (controller_ck_62_1) {
    sub_139 = v_1101;
  } else {
    sub_139 = sub_140;
  };
  sub_138 = sub_139;
  sub_137 = sub_138;
  sub_136 = sub_137;
  sub_135 = sub_136;
  if (controller_air_failed_recovered) {
    v_1110 = sub_135;
    sub_84 = sub_85;
  } else {
    v_1110 = sub_85;
    sub_84 = sub_135;
  };
  if (controller_ck_52_1) {
    sub_83 = v_1110;
  } else {
    sub_83 = sub_84;
  };
  if (controller_worker) {
    v_1138 = sub_83;
    sub_2 = sub_3;
  } else {
    v_1138 = sub_3;
    sub_2 = sub_83;
  };
  if (controller_ck_35_1) {
    sub_1 = v_1138;
  } else {
    sub_1 = sub_2;
  };
  v_1078 = !(controller_pc_failed_recovered);
  v_1079 = (v_1078||false);
  sub_188 = (controller_pc_failed_recovered||false);
  if (controller_ck_47_1) {
    sub_187 = v_1079;
  } else {
    sub_187 = sub_188;
  };
  sub_189 = true;
  if (controller_c_pc) {
    sub_186 = sub_187;
    sub_190 = sub_189;
  } else {
    sub_186 = sub_189;
    sub_190 = sub_187;
  };
  if (controller_ck_45_1) {
    sub_185 = sub_190;
  } else {
    sub_185 = sub_186;
  };
  if (controller_door_failed_recovered) {
    v_1080 = false;
    sub_184 = sub_185;
  } else {
    v_1080 = sub_185;
    sub_184 = false;
  };
  if (controller_ck_42_1) {
    sub_183 = v_1080;
  } else {
    sub_183 = sub_184;
  };
  sub_191 = sub_185;
  if (controller_c_door) {
    sub_182 = sub_183;
    sub_192 = sub_191;
  } else {
    sub_182 = sub_191;
    sub_192 = sub_183;
  };
  if (controller_ck_40_1) {
    sub_181 = sub_192;
  } else {
    sub_181 = sub_182;
  };
  if (controller_window_failed_recovered) {
    v_1081 = false;
    sub_193 = sub_181;
  } else {
    v_1081 = sub_181;
    sub_193 = false;
  };
  if (controller_ck_57_1) {
    v_1082 = v_1081;
  } else {
    v_1082 = sub_193;
  };
  if (controller_c_window) {
    sub_180 = sub_181;
  } else {
    sub_180 = v_1082;
  };
  if (controller_ck_40_1) {
    sub_196 = sub_182;
  } else {
    sub_196 = sub_192;
  };
  sub_195 = sub_196;
  sub_198 = sub_183;
  if (controller_window_failed_recovered) {
    v_1076 = sub_198;
    sub_197 = sub_196;
  } else {
    v_1076 = sub_196;
    sub_197 = sub_198;
  };
  if (controller_ck_57_1) {
    v_1077 = v_1076;
  } else {
    v_1077 = sub_197;
  };
  if (controller_c_window) {
    sub_194 = sub_195;
  } else {
    sub_194 = v_1077;
  };
  if (controller_cleaner) {
    v_1083 = sub_194;
    sub_179 = sub_180;
  } else {
    v_1083 = sub_180;
    sub_179 = sub_194;
  };
  if (controller_ck_37_1) {
    sub_178 = v_1083;
  } else {
    sub_178 = sub_179;
  };
  sub_177 = sub_178;
  sub_176 = sub_177;
  sub_175 = sub_176;
  sub_174 = sub_175;
  if (controller_cleaner) {
    sub_204 = sub_180;
    sub_205 = false;
  } else {
    sub_204 = false;
    sub_205 = sub_180;
  };
  if (controller_ck_37_1) {
    sub_203 = sub_205;
  } else {
    sub_203 = sub_204;
  };
  sub_202 = sub_203;
  sub_201 = sub_202;
  sub_200 = sub_201;
  if (controller_cleaner) {
    v_1075 = sub_194;
    sub_210 = false;
  } else {
    v_1075 = false;
    sub_210 = sub_194;
  };
  if (controller_ck_37_1) {
    sub_209 = v_1075;
  } else {
    sub_209 = sub_210;
  };
  sub_208 = sub_209;
  sub_207 = sub_208;
  sub_206 = sub_207;
  if (controller_c_closet) {
    sub_199 = sub_200;
  } else {
    sub_199 = sub_206;
  };
  if (controller_closet_failed_recovered) {
    v_1084 = sub_199;
    sub_173 = sub_174;
  } else {
    v_1084 = sub_174;
    sub_173 = sub_199;
  };
  if (controller_ck_62_1) {
    sub_172 = v_1084;
  } else {
    sub_172 = sub_173;
  };
  if (controller_window_failed_recovered) {
    v_1071 = false;
    sub_220 = sub_196;
  } else {
    v_1071 = sub_196;
    sub_220 = false;
  };
  if (controller_ck_57_1) {
    v_1072 = v_1071;
  } else {
    v_1072 = sub_220;
  };
  if (controller_c_window) {
    sub_219 = v_1072;
  } else {
    sub_219 = sub_195;
  };
  if (controller_cleaner) {
    v_1073 = sub_219;
    sub_218 = sub_180;
  } else {
    v_1073 = sub_180;
    sub_218 = sub_219;
  };
  if (controller_ck_37_1) {
    sub_217 = v_1073;
  } else {
    sub_217 = sub_218;
  };
  sub_216 = sub_217;
  sub_215 = sub_216;
  sub_214 = sub_215;
  sub_213 = sub_214;
  if (controller_cleaner) {
    v_1070 = sub_219;
    sub_226 = false;
  } else {
    v_1070 = false;
    sub_226 = sub_219;
  };
  if (controller_ck_37_1) {
    sub_225 = v_1070;
  } else {
    sub_225 = sub_226;
  };
  sub_224 = sub_225;
  sub_223 = sub_224;
  sub_222 = sub_223;
  if (controller_c_closet) {
    sub_221 = sub_200;
  } else {
    sub_221 = sub_222;
  };
  if (controller_closet_failed_recovered) {
    v_1074 = sub_221;
    sub_212 = sub_213;
  } else {
    v_1074 = sub_213;
    sub_212 = sub_221;
  };
  if (controller_ck_62_1) {
    sub_211 = v_1074;
  } else {
    sub_211 = sub_212;
  };
  if (controller_blind_failed_recovered) {
    v_1085 = sub_211;
    sub_171 = sub_172;
  } else {
    v_1085 = sub_172;
    sub_171 = sub_211;
  };
  if (controller_ck_72_1) {
    sub_170 = v_1085;
  } else {
    sub_170 = sub_171;
  };
  sub_169 = sub_170;
  if (controller_cleaner) {
    v_1067 = sub_32;
    sub_238 = sub_180;
  } else {
    v_1067 = sub_180;
    sub_238 = sub_32;
  };
  if (controller_ck_37_1) {
    sub_237 = v_1067;
  } else {
    sub_237 = sub_238;
  };
  sub_236 = sub_237;
  sub_235 = sub_236;
  sub_234 = sub_235;
  sub_233 = sub_234;
  if (controller_c_closet) {
    sub_239 = sub_200;
  } else {
    sub_239 = sub_44;
  };
  if (controller_closet_failed_recovered) {
    v_1068 = sub_239;
    sub_232 = sub_233;
  } else {
    v_1068 = sub_233;
    sub_232 = sub_239;
  };
  if (controller_ck_62_1) {
    sub_231 = v_1068;
  } else {
    sub_231 = sub_232;
  };
  if (controller_cleaner) {
    v_1064 = sub_57;
    sub_248 = sub_180;
  } else {
    v_1064 = sub_180;
    sub_248 = sub_57;
  };
  if (controller_ck_37_1) {
    sub_247 = v_1064;
  } else {
    sub_247 = sub_248;
  };
  if (controller_change_shift) {
    v_1065 = sub_247;
    sub_246 = sub_217;
  } else {
    v_1065 = sub_217;
    sub_246 = sub_247;
  };
  if (controller_ck_1) {
    sub_245 = v_1065;
  } else {
    sub_245 = sub_246;
  };
  sub_244 = sub_245;
  sub_243 = sub_244;
  sub_242 = sub_243;
  if (controller_change_shift) {
    v_1063 = sub_62;
    sub_252 = sub_225;
  } else {
    v_1063 = sub_225;
    sub_252 = sub_62;
  };
  if (controller_ck_1) {
    sub_251 = v_1063;
  } else {
    sub_251 = sub_252;
  };
  sub_250 = sub_251;
  if (controller_c_closet) {
    sub_249 = sub_200;
  } else {
    sub_249 = sub_250;
  };
  if (controller_closet_failed_recovered) {
    v_1066 = sub_249;
    sub_241 = sub_242;
  } else {
    v_1066 = sub_242;
    sub_241 = sub_249;
  };
  if (controller_ck_62_1) {
    sub_240 = v_1066;
  } else {
    sub_240 = sub_241;
  };
  if (controller_blind_failed_recovered) {
    v_1069 = sub_240;
    sub_230 = sub_231;
  } else {
    v_1069 = sub_231;
    sub_230 = sub_240;
  };
  if (controller_ck_72_1) {
    sub_229 = v_1069;
  } else {
    sub_229 = sub_230;
  };
  sub_228 = sub_229;
  if (controller_cleaner) {
    v_1060 = sub_194;
    sub_262 = sub_18;
  } else {
    v_1060 = sub_18;
    sub_262 = sub_194;
  };
  if (controller_ck_37_1) {
    sub_261 = v_1060;
  } else {
    sub_261 = sub_262;
  };
  sub_260 = sub_261;
  sub_259 = sub_260;
  sub_258 = sub_259;
  sub_257 = sub_258;
  if (controller_c_closet) {
    sub_263 = sub_38;
  } else {
    sub_263 = sub_206;
  };
  if (controller_closet_failed_recovered) {
    v_1061 = sub_263;
    sub_256 = sub_257;
  } else {
    v_1061 = sub_257;
    sub_256 = sub_263;
  };
  if (controller_ck_62_1) {
    sub_255 = v_1061;
  } else {
    sub_255 = sub_256;
  };
  if (controller_cleaner) {
    v_1058 = sub_219;
    sub_271 = sub_18;
  } else {
    v_1058 = sub_18;
    sub_271 = sub_219;
  };
  if (controller_ck_37_1) {
    sub_270 = v_1058;
  } else {
    sub_270 = sub_271;
  };
  sub_269 = sub_270;
  sub_268 = sub_269;
  sub_267 = sub_268;
  sub_266 = sub_267;
  if (controller_c_closet) {
    sub_272 = sub_38;
  } else {
    sub_272 = sub_222;
  };
  if (controller_closet_failed_recovered) {
    v_1059 = sub_272;
    sub_265 = sub_266;
  } else {
    v_1059 = sub_266;
    sub_265 = sub_272;
  };
  if (controller_ck_62_1) {
    sub_264 = v_1059;
  } else {
    sub_264 = sub_265;
  };
  if (controller_blind_failed_recovered) {
    v_1062 = sub_264;
    sub_254 = sub_255;
  } else {
    v_1062 = sub_255;
    sub_254 = sub_264;
  };
  if (controller_ck_72_1) {
    sub_253 = v_1062;
  } else {
    sub_253 = sub_254;
  };
  if (controller_ck_65_1) {
    sub_227 = sub_253;
  } else {
    sub_227 = sub_228;
  };
  if (controller_light_failed_recovered) {
    v_1086 = sub_227;
    sub_168 = sub_169;
  } else {
    v_1086 = sub_169;
    sub_168 = sub_227;
  };
  if (controller_ck_67_1) {
    v_1087 = v_1086;
  } else {
    v_1087 = sub_168;
  };
  if (controller_light_switch) {
    sub_167 = v_1087;
  } else {
    sub_167 = sub_169;
  };
  if (controller_v_277) {
    sub_281 = false;
  } else {
    sub_281 = sub_202;
  };
  if (controller_ck_37_1) {
    sub_284 = sub_204;
  } else {
    sub_284 = sub_205;
  };
  sub_283 = sub_284;
  if (controller_v_277) {
    sub_282 = false;
  } else {
    sub_282 = sub_283;
  };
  if (controller_v_276) {
    v_1053 = sub_282;
  } else {
    v_1053 = sub_281;
  };
  if (controller_v_277) {
    v_1052 = sub_202;
  } else {
    v_1052 = false;
  };
  if (controller_v_276) {
    sub_285 = v_1052;
  } else {
    sub_285 = false;
  };
  if (controller_c_air_2) {
    v_1054 = v_1053;
  } else {
    v_1054 = sub_285;
  };
  if (controller_v_277) {
    v_1051 = sub_283;
  } else {
    v_1051 = sub_202;
  };
  if (controller_v_276) {
    sub_286 = v_1051;
  } else {
    sub_286 = sub_282;
  };
  if (controller_c_air_1) {
    sub_280 = v_1054;
  } else {
    sub_280 = sub_286;
  };
  sub_279 = sub_280;
  if (controller_v_276) {
    v_1049 = false;
  } else {
    v_1049 = sub_281;
  };
  if (controller_c_air_2) {
    v_1050 = v_1049;
  } else {
    v_1050 = sub_285;
  };
  if (controller_v_276) {
    sub_289 = sub_281;
  } else {
    sub_289 = false;
  };
  if (controller_c_air_1) {
    sub_288 = v_1050;
  } else {
    sub_288 = sub_289;
  };
  if (controller_v_276) {
    v_1047 = sub_282;
  } else {
    v_1047 = false;
  };
  if (controller_c_air_2) {
    v_1048 = v_1047;
  } else {
    v_1048 = false;
  };
  if (controller_v_277) {
    v_1046 = sub_283;
  } else {
    v_1046 = false;
  };
  if (controller_v_276) {
    sub_291 = v_1046;
  } else {
    sub_291 = sub_282;
  };
  if (controller_c_air_1) {
    sub_290 = v_1048;
  } else {
    sub_290 = sub_291;
  };
  if (controller_c_closet) {
    sub_287 = sub_288;
  } else {
    sub_287 = sub_290;
  };
  if (controller_closet_failed_recovered) {
    v_1055 = sub_287;
    sub_278 = sub_279;
  } else {
    v_1055 = sub_279;
    sub_278 = sub_287;
  };
  if (controller_ck_62_1) {
    sub_277 = v_1055;
  } else {
    sub_277 = sub_278;
  };
  sub_276 = sub_277;
  sub_275 = sub_276;
  if (controller_v_276) {
    v_1042 = sub_73;
  } else {
    v_1042 = sub_281;
  };
  if (controller_c_air_2) {
    v_1043 = v_1042;
  } else {
    v_1043 = sub_285;
  };
  if (controller_v_277) {
    v_1041 = sub_74;
  } else {
    v_1041 = sub_202;
  };
  if (controller_v_276) {
    sub_300 = v_1041;
  } else {
    sub_300 = sub_73;
  };
  if (controller_c_air_1) {
    sub_299 = v_1043;
  } else {
    sub_299 = sub_300;
  };
  sub_298 = sub_299;
  if (controller_c_closet) {
    sub_301 = sub_288;
  } else {
    sub_301 = sub_81;
  };
  if (controller_closet_failed_recovered) {
    v_1044 = sub_301;
    sub_297 = sub_298;
  } else {
    v_1044 = sub_298;
    sub_297 = sub_301;
  };
  if (controller_ck_62_1) {
    sub_296 = v_1044;
  } else {
    sub_296 = sub_297;
  };
  if (controller_change_shift) {
    v_1037 = sub_75;
    sub_308 = sub_284;
  } else {
    v_1037 = sub_284;
    sub_308 = sub_75;
  };
  if (controller_ck_1) {
    sub_307 = v_1037;
  } else {
    sub_307 = sub_308;
  };
  if (controller_v_277) {
    sub_306 = false;
  } else {
    sub_306 = sub_307;
  };
  if (controller_v_276) {
    v_1038 = sub_306;
  } else {
    v_1038 = sub_281;
  };
  if (controller_c_air_2) {
    v_1039 = v_1038;
  } else {
    v_1039 = sub_285;
  };
  if (controller_v_277) {
    v_1036 = sub_307;
  } else {
    v_1036 = sub_202;
  };
  if (controller_v_276) {
    sub_309 = v_1036;
  } else {
    sub_309 = sub_306;
  };
  if (controller_c_air_1) {
    sub_305 = v_1039;
  } else {
    sub_305 = sub_309;
  };
  sub_304 = sub_305;
  if (controller_v_276) {
    v_1033 = sub_306;
  } else {
    v_1033 = false;
  };
  if (controller_c_air_2) {
    v_1034 = v_1033;
  } else {
    v_1034 = false;
  };
  if (controller_v_277) {
    v_1032 = sub_307;
  } else {
    v_1032 = false;
  };
  if (controller_v_276) {
    sub_311 = v_1032;
  } else {
    sub_311 = sub_306;
  };
  if (controller_c_air_1) {
    v_1035 = v_1034;
  } else {
    v_1035 = sub_311;
  };
  if (controller_c_closet) {
    sub_310 = sub_288;
  } else {
    sub_310 = v_1035;
  };
  if (controller_closet_failed_recovered) {
    v_1040 = sub_310;
    sub_303 = sub_304;
  } else {
    v_1040 = sub_304;
    sub_303 = sub_310;
  };
  if (controller_ck_62_1) {
    sub_302 = v_1040;
  } else {
    sub_302 = sub_303;
  };
  if (controller_blind_failed_recovered) {
    v_1045 = sub_302;
    sub_295 = sub_296;
  } else {
    v_1045 = sub_296;
    sub_295 = sub_302;
  };
  if (controller_ck_72_1) {
    sub_294 = v_1045;
  } else {
    sub_294 = sub_295;
  };
  sub_293 = sub_294;
  if (controller_v_276) {
    v_1029 = sub_282;
  } else {
    v_1029 = sub_72;
  };
  if (controller_c_air_2) {
    v_1030 = v_1029;
  } else {
    v_1030 = sub_76;
  };
  if (controller_v_277) {
    v_1028 = sub_283;
  } else {
    v_1028 = sub_40;
  };
  if (controller_v_276) {
    sub_317 = v_1028;
  } else {
    sub_317 = sub_282;
  };
  if (controller_c_air_1) {
    sub_316 = v_1030;
  } else {
    sub_316 = sub_317;
  };
  sub_315 = sub_316;
  if (controller_c_closet) {
    sub_318 = sub_79;
  } else {
    sub_318 = sub_290;
  };
  if (controller_closet_failed_recovered) {
    v_1031 = sub_318;
    sub_314 = sub_315;
  } else {
    v_1031 = sub_315;
    sub_314 = sub_318;
  };
  if (controller_ck_62_1) {
    sub_313 = v_1031;
  } else {
    sub_313 = sub_314;
  };
  sub_312 = sub_313;
  if (controller_ck_65_1) {
    sub_292 = sub_312;
  } else {
    sub_292 = sub_293;
  };
  if (controller_light_failed_recovered) {
    v_1056 = sub_292;
    sub_274 = sub_275;
  } else {
    v_1056 = sub_275;
    sub_274 = sub_292;
  };
  if (controller_ck_67_1) {
    v_1057 = v_1056;
  } else {
    v_1057 = sub_274;
  };
  if (controller_light_switch) {
    sub_273 = v_1057;
  } else {
    sub_273 = sub_275;
  };
  if (controller_air_failed_recovered) {
    v_1088 = sub_273;
    sub_166 = sub_167;
  } else {
    v_1088 = sub_167;
    sub_166 = sub_273;
  };
  if (controller_ck_52_1) {
    sub_165 = v_1088;
  } else {
    sub_165 = sub_166;
  };
  if (controller_ck_45_1) {
    sub_338 = sub_186;
  } else {
    sub_338 = sub_190;
  };
  sub_337 = sub_338;
  if (controller_door_failed_recovered) {
    v_1020 = false;
    sub_340 = sub_338;
  } else {
    v_1020 = sub_338;
    sub_340 = false;
  };
  if (controller_ck_42_1) {
    sub_339 = v_1020;
  } else {
    sub_339 = sub_340;
  };
  if (controller_c_door) {
    sub_336 = sub_337;
    sub_341 = sub_339;
  } else {
    sub_336 = sub_339;
    sub_341 = sub_337;
  };
  if (controller_ck_40_1) {
    sub_335 = sub_341;
  } else {
    sub_335 = sub_336;
  };
  sub_334 = sub_335;
  sub_343 = sub_339;
  if (controller_window_failed_recovered) {
    v_1021 = sub_343;
    sub_342 = sub_335;
  } else {
    v_1021 = sub_335;
    sub_342 = sub_343;
  };
  if (controller_ck_57_1) {
    v_1022 = v_1021;
  } else {
    v_1022 = sub_342;
  };
  if (controller_c_window) {
    sub_333 = sub_334;
  } else {
    sub_333 = v_1022;
  };
  sub_332 = sub_333;
  sub_331 = sub_332;
  sub_330 = sub_331;
  sub_329 = sub_330;
  sub_328 = sub_329;
  if (controller_cleaner) {
    sub_348 = sub_333;
    sub_349 = false;
  } else {
    sub_348 = false;
    sub_349 = sub_333;
  };
  if (controller_ck_37_1) {
    sub_347 = sub_349;
  } else {
    sub_347 = sub_348;
  };
  sub_346 = sub_347;
  sub_345 = sub_346;
  if (controller_ck_37_1) {
    sub_352 = sub_348;
  } else {
    sub_352 = sub_349;
  };
  sub_351 = sub_352;
  sub_350 = sub_351;
  if (controller_c_closet) {
    sub_344 = sub_345;
  } else {
    sub_344 = sub_350;
  };
  if (controller_closet_failed_recovered) {
    v_1023 = sub_344;
    sub_327 = sub_328;
  } else {
    v_1023 = sub_328;
    sub_327 = sub_344;
  };
  if (controller_ck_62_1) {
    sub_326 = v_1023;
  } else {
    sub_326 = sub_327;
  };
  if (controller_window_failed_recovered) {
    v_1017 = false;
    sub_361 = sub_335;
  } else {
    v_1017 = sub_335;
    sub_361 = false;
  };
  if (controller_ck_57_1) {
    v_1018 = v_1017;
  } else {
    v_1018 = sub_361;
  };
  if (controller_c_window) {
    sub_360 = v_1018;
  } else {
    sub_360 = sub_334;
  };
  sub_359 = sub_360;
  sub_358 = sub_359;
  sub_357 = sub_358;
  sub_356 = sub_357;
  sub_355 = sub_356;
  if (controller_cleaner) {
    sub_366 = sub_360;
    sub_367 = false;
  } else {
    sub_366 = false;
    sub_367 = sub_360;
  };
  if (controller_ck_37_1) {
    sub_365 = sub_367;
  } else {
    sub_365 = sub_366;
  };
  sub_364 = sub_365;
  sub_363 = sub_364;
  if (controller_ck_37_1) {
    sub_370 = sub_366;
  } else {
    sub_370 = sub_367;
  };
  sub_369 = sub_370;
  sub_368 = sub_369;
  if (controller_c_closet) {
    sub_362 = sub_363;
  } else {
    sub_362 = sub_368;
  };
  if (controller_closet_failed_recovered) {
    v_1019 = sub_362;
    sub_354 = sub_355;
  } else {
    v_1019 = sub_355;
    sub_354 = sub_362;
  };
  if (controller_ck_62_1) {
    sub_353 = v_1019;
  } else {
    sub_353 = sub_354;
  };
  if (controller_blind_failed_recovered) {
    v_1024 = sub_353;
    sub_325 = sub_326;
  } else {
    v_1024 = sub_326;
    sub_325 = sub_353;
  };
  if (controller_ck_72_1) {
    sub_324 = v_1024;
  } else {
    sub_324 = sub_325;
  };
  sub_323 = sub_324;
  if (controller_change_shift) {
    v_1014 = sub_123;
    sub_381 = sub_359;
  } else {
    v_1014 = sub_359;
    sub_381 = sub_123;
  };
  if (controller_ck_1) {
    sub_380 = v_1014;
  } else {
    sub_380 = sub_381;
  };
  sub_379 = sub_380;
  sub_378 = sub_379;
  sub_377 = sub_378;
  if (controller_change_shift) {
    v_1013 = sub_129;
    sub_385 = sub_365;
  } else {
    v_1013 = sub_365;
    sub_385 = sub_129;
  };
  if (controller_ck_1) {
    sub_384 = v_1013;
  } else {
    sub_384 = sub_385;
  };
  sub_383 = sub_384;
  if (controller_change_shift) {
    v_1012 = sub_134;
    sub_388 = sub_370;
  } else {
    v_1012 = sub_370;
    sub_388 = sub_134;
  };
  if (controller_ck_1) {
    sub_387 = v_1012;
  } else {
    sub_387 = sub_388;
  };
  sub_386 = sub_387;
  if (controller_c_closet) {
    sub_382 = sub_383;
  } else {
    sub_382 = sub_386;
  };
  if (controller_closet_failed_recovered) {
    v_1015 = sub_382;
    sub_376 = sub_377;
  } else {
    v_1015 = sub_377;
    sub_376 = sub_382;
  };
  if (controller_ck_62_1) {
    sub_375 = v_1015;
  } else {
    sub_375 = sub_376;
  };
  if (controller_blind_failed_recovered) {
    v_1016 = sub_375;
    sub_374 = sub_90;
  } else {
    v_1016 = sub_90;
    sub_374 = sub_375;
  };
  if (controller_ck_72_1) {
    sub_373 = v_1016;
  } else {
    sub_373 = sub_374;
  };
  sub_372 = sub_373;
  if (controller_ck_65_1) {
    sub_371 = sub_323;
  } else {
    sub_371 = sub_372;
  };
  if (controller_light_failed_recovered) {
    v_1025 = sub_371;
    sub_322 = sub_323;
  } else {
    v_1025 = sub_323;
    sub_322 = sub_371;
  };
  if (controller_ck_67_1) {
    v_1026 = v_1025;
  } else {
    v_1026 = sub_322;
  };
  if (controller_light_switch) {
    sub_321 = v_1026;
  } else {
    sub_321 = sub_323;
  };
  sub_403 = sub_337;
  sub_402 = sub_403;
  sub_401 = sub_402;
  if (controller_cleaner) {
    v_1006 = sub_401;
    sub_400 = false;
  } else {
    v_1006 = false;
    sub_400 = sub_401;
  };
  if (controller_ck_37_1) {
    sub_399 = v_1006;
  } else {
    sub_399 = sub_400;
  };
  sub_398 = sub_399;
  if (controller_v_277) {
    sub_397 = sub_398;
  } else {
    sub_397 = false;
  };
  if (controller_ck_40_1) {
    sub_409 = sub_336;
  } else {
    sub_409 = sub_341;
  };
  if (controller_window_failed_recovered) {
    v_1003 = false;
    sub_410 = sub_409;
  } else {
    v_1003 = sub_409;
    sub_410 = false;
  };
  if (controller_ck_57_1) {
    v_1004 = v_1003;
  } else {
    v_1004 = sub_410;
  };
  if (controller_c_window) {
    sub_408 = sub_409;
  } else {
    sub_408 = v_1004;
  };
  if (controller_cleaner) {
    v_1005 = false;
    sub_407 = sub_408;
  } else {
    v_1005 = sub_408;
    sub_407 = false;
  };
  if (controller_ck_37_1) {
    sub_406 = v_1005;
  } else {
    sub_406 = sub_407;
  };
  sub_405 = sub_406;
  if (controller_v_277) {
    sub_404 = sub_398;
  } else {
    sub_404 = sub_405;
  };
  if (controller_v_276) {
    v_1007 = sub_404;
  } else {
    v_1007 = sub_397;
  };
  if (controller_v_277) {
    v_1002 = false;
  } else {
    v_1002 = sub_398;
  };
  if (controller_v_276) {
    sub_411 = v_1002;
  } else {
    sub_411 = sub_398;
  };
  if (controller_c_air_2) {
    v_1008 = v_1007;
  } else {
    v_1008 = sub_411;
  };
  if (controller_v_277) {
    sub_413 = sub_405;
  } else {
    sub_413 = false;
  };
  if (controller_v_276) {
    sub_412 = sub_413;
  } else {
    sub_412 = sub_404;
  };
  if (controller_c_air_1) {
    sub_396 = v_1008;
  } else {
    sub_396 = sub_412;
  };
  sub_395 = sub_396;
  if (controller_c_air_2) {
    v_1000 = sub_397;
  } else {
    v_1000 = sub_411;
  };
  if (controller_v_277) {
    sub_415 = false;
  } else {
    sub_415 = sub_405;
  };
  if (controller_v_276) {
    v_997 = sub_415;
  } else {
    v_997 = false;
  };
  if (controller_c_air_2) {
    v_998 = v_997;
  } else {
    v_998 = false;
  };
  if (controller_v_276) {
    sub_416 = sub_413;
  } else {
    sub_416 = sub_415;
  };
  if (controller_c_air_1) {
    v_999 = v_998;
  } else {
    v_999 = sub_416;
  };
  if (controller_v_276) {
    sub_417 = false;
  } else {
    sub_417 = sub_397;
  };
  if (controller_c_air_1) {
    v_1001 = v_1000;
  } else {
    v_1001 = sub_417;
  };
  if (controller_c_closet) {
    sub_414 = v_999;
  } else {
    sub_414 = v_1001;
  };
  if (controller_closet_failed_recovered) {
    v_1009 = sub_414;
    sub_394 = sub_395;
  } else {
    v_1009 = sub_395;
    sub_394 = sub_414;
  };
  if (controller_ck_62_1) {
    sub_393 = v_1009;
  } else {
    sub_393 = sub_394;
  };
  sub_392 = sub_393;
  sub_391 = sub_392;
  if (controller_change_shift) {
    v_992 = sub_145;
    sub_428 = sub_399;
  } else {
    v_992 = sub_399;
    sub_428 = sub_145;
  };
  if (controller_ck_1) {
    sub_427 = v_992;
  } else {
    sub_427 = sub_428;
  };
  if (controller_v_277) {
    sub_426 = sub_427;
  } else {
    sub_426 = false;
  };
  if (controller_change_shift) {
    v_991 = sub_152;
    sub_431 = sub_406;
  } else {
    v_991 = sub_406;
    sub_431 = sub_152;
  };
  if (controller_ck_1) {
    sub_430 = v_991;
  } else {
    sub_430 = sub_431;
  };
  if (controller_v_277) {
    sub_429 = sub_427;
  } else {
    sub_429 = sub_430;
  };
  if (controller_v_276) {
    v_993 = sub_429;
  } else {
    v_993 = sub_426;
  };
  if (controller_v_277) {
    v_990 = false;
  } else {
    v_990 = sub_427;
  };
  if (controller_v_276) {
    sub_432 = v_990;
  } else {
    sub_432 = sub_427;
  };
  if (controller_c_air_2) {
    v_994 = v_993;
  } else {
    v_994 = sub_432;
  };
  if (controller_v_277) {
    sub_434 = sub_430;
  } else {
    sub_434 = false;
  };
  if (controller_v_276) {
    sub_433 = sub_434;
  } else {
    sub_433 = sub_429;
  };
  if (controller_c_air_1) {
    sub_425 = v_994;
  } else {
    sub_425 = sub_433;
  };
  sub_424 = sub_425;
  if (controller_c_air_2) {
    v_988 = sub_426;
  } else {
    v_988 = sub_432;
  };
  if (controller_v_277) {
    sub_436 = false;
  } else {
    sub_436 = sub_430;
  };
  if (controller_v_276) {
    v = sub_436;
  } else {
    v = false;
  };
  if (controller_c_air_2) {
    v_986 = v;
  } else {
    v_986 = false;
  };
  if (controller_v_276) {
    sub_437 = sub_434;
  } else {
    sub_437 = sub_436;
  };
  if (controller_c_air_1) {
    v_987 = v_986;
  } else {
    v_987 = sub_437;
  };
  if (controller_v_276) {
    sub_438 = false;
  } else {
    sub_438 = sub_426;
  };
  if (controller_c_air_1) {
    v_989 = v_988;
  } else {
    v_989 = sub_438;
  };
  if (controller_c_closet) {
    sub_435 = v_987;
  } else {
    sub_435 = v_989;
  };
  if (controller_closet_failed_recovered) {
    v_995 = sub_435;
    sub_423 = sub_424;
  } else {
    v_995 = sub_424;
    sub_423 = sub_435;
  };
  if (controller_ck_62_1) {
    sub_422 = v_995;
  } else {
    sub_422 = sub_423;
  };
  if (controller_blind_failed_recovered) {
    v_996 = sub_422;
    sub_421 = sub_139;
  } else {
    v_996 = sub_139;
    sub_421 = sub_422;
  };
  if (controller_ck_72_1) {
    sub_420 = v_996;
  } else {
    sub_420 = sub_421;
  };
  sub_419 = sub_420;
  if (controller_ck_65_1) {
    sub_418 = sub_391;
  } else {
    sub_418 = sub_419;
  };
  if (controller_light_failed_recovered) {
    v_1010 = sub_418;
    sub_390 = sub_391;
  } else {
    v_1010 = sub_391;
    sub_390 = sub_418;
  };
  if (controller_ck_67_1) {
    v_1011 = v_1010;
  } else {
    v_1011 = sub_390;
  };
  if (controller_light_switch) {
    sub_389 = v_1011;
  } else {
    sub_389 = sub_391;
  };
  if (controller_air_failed_recovered) {
    v_1027 = sub_389;
    sub_320 = sub_321;
  } else {
    v_1027 = sub_321;
    sub_320 = sub_389;
  };
  if (controller_ck_52_1) {
    sub_319 = v_1027;
  } else {
    sub_319 = sub_320;
  };
  if (controller_worker) {
    v_1139 = sub_319;
    sub_164 = sub_165;
  } else {
    v_1139 = sub_165;
    sub_164 = sub_319;
  };
  if (controller_ck_35_1) {
    v_1140 = v_1139;
  } else {
    v_1140 = sub_164;
  };
  if (p_controller_c_light_1) {
    sub_0 = v_1140;
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
  int controller_pnr_22, int controller_ck_35_1, int controller_pnr_21,
  int controller_ck_37_1, int controller_pnr_20, int controller_ck_40_1,
  int controller_pnr_19, int controller_ck_42_1, int controller_pnr_18,
  int controller_ck_45_1, int controller_pnr_17, int controller_ck_47_1,
  int controller_pnr_16, int controller_v_277, int controller_v_276,
  int controller_pnr_15, int controller_ck_52_1, int controller_pnr_14,
  int controller_ck_55_1, int controller_pnr_13, int controller_ck_57_1,
  int controller_pnr_12, int controller_ck_60_1, int controller_pnr_11,
  int controller_ck_62_1, int controller_pnr_10, int controller_ck_65_1,
  int controller_pnr_9, int controller_ck_67_1, int controller_pnr_8,
  int controller_ck_70_1, int controller_pnr_7, int controller_ck_72_1,
  int controller_pnr, int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_closet_out* _out) {
  
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
  v_1218 = (controller_pc_failed_recovered&&false);
  v_1217 = !(controller_pc_failed_recovered);
  sub_25 = (v_1217&&false);
  if (controller_ck_47_1) {
    sub_24 = v_1218;
  } else {
    sub_24 = sub_25;
  };
  sub_26 = false;
  if (controller_c_pc) {
    sub_23 = sub_24;
    sub_27 = sub_26;
  } else {
    sub_23 = sub_26;
    sub_27 = sub_24;
  };
  if (controller_ck_45_1) {
    sub_22 = sub_27;
  } else {
    sub_22 = sub_23;
  };
  if (controller_door_failed_recovered) {
    v_1219 = false;
    sub_21 = sub_22;
  } else {
    v_1219 = sub_22;
    sub_21 = false;
  };
  if (controller_ck_42_1) {
    sub_20 = v_1219;
  } else {
    sub_20 = sub_21;
  };
  sub_28 = sub_22;
  if (controller_c_door) {
    sub_19 = sub_20;
    sub_29 = sub_28;
  } else {
    sub_19 = sub_28;
    sub_29 = sub_20;
  };
  if (controller_ck_40_1) {
    sub_18 = sub_29;
  } else {
    sub_18 = sub_19;
  };
  if (controller_window_failed_recovered) {
    v_1220 = false;
    sub_30 = sub_18;
  } else {
    v_1220 = sub_18;
    sub_30 = false;
  };
  if (controller_ck_57_1) {
    v_1221 = v_1220;
  } else {
    v_1221 = sub_30;
  };
  if (controller_c_window) {
    sub_17 = sub_18;
  } else {
    sub_17 = v_1221;
  };
  if (controller_ck_40_1) {
    sub_33 = sub_19;
  } else {
    sub_33 = sub_29;
  };
  sub_32 = sub_33;
  sub_35 = sub_20;
  if (controller_window_failed_recovered) {
    v_1215 = sub_35;
    sub_34 = sub_33;
  } else {
    v_1215 = sub_33;
    sub_34 = sub_35;
  };
  if (controller_ck_57_1) {
    v_1216 = v_1215;
  } else {
    v_1216 = sub_34;
  };
  if (controller_c_window) {
    sub_31 = sub_32;
  } else {
    sub_31 = v_1216;
  };
  if (controller_cleaner) {
    v_1222 = sub_31;
    sub_16 = sub_17;
  } else {
    v_1222 = sub_17;
    sub_16 = sub_31;
  };
  if (controller_ck_37_1) {
    sub_15 = v_1222;
  } else {
    sub_15 = sub_16;
  };
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  v_1209 = !(controller_pc_failed_recovered);
  v_1210 = (v_1209||false);
  sub_49 = (controller_pc_failed_recovered||false);
  if (controller_ck_47_1) {
    sub_48 = v_1210;
  } else {
    sub_48 = sub_49;
  };
  sub_50 = true;
  if (controller_c_pc) {
    sub_47 = sub_48;
    sub_51 = sub_50;
  } else {
    sub_47 = sub_50;
    sub_51 = sub_48;
  };
  if (controller_ck_45_1) {
    sub_46 = sub_51;
  } else {
    sub_46 = sub_47;
  };
  if (controller_door_failed_recovered) {
    v_1211 = false;
    sub_45 = sub_46;
  } else {
    v_1211 = sub_46;
    sub_45 = false;
  };
  if (controller_ck_42_1) {
    sub_44 = v_1211;
  } else {
    sub_44 = sub_45;
  };
  sub_52 = sub_46;
  if (controller_c_door) {
    sub_43 = sub_44;
    sub_53 = sub_52;
  } else {
    sub_43 = sub_52;
    sub_53 = sub_44;
  };
  if (controller_ck_40_1) {
    sub_42 = sub_53;
  } else {
    sub_42 = sub_43;
  };
  if (controller_window_failed_recovered) {
    v_1212 = false;
    sub_54 = sub_42;
  } else {
    v_1212 = sub_42;
    sub_54 = false;
  };
  if (controller_ck_57_1) {
    v_1213 = v_1212;
  } else {
    v_1213 = sub_54;
  };
  if (controller_c_window) {
    sub_41 = sub_42;
  } else {
    sub_41 = v_1213;
  };
  if (controller_cleaner) {
    v_1214 = sub_31;
    sub_40 = sub_41;
  } else {
    v_1214 = sub_41;
    sub_40 = sub_31;
  };
  if (controller_ck_37_1) {
    sub_39 = v_1214;
  } else {
    sub_39 = sub_40;
  };
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  if (controller_closet_failed_recovered) {
    v_1223 = sub_36;
    sub_11 = sub_12;
  } else {
    v_1223 = sub_12;
    sub_11 = sub_36;
  };
  if (controller_ck_62_1) {
    sub_10 = v_1223;
  } else {
    sub_10 = sub_11;
  };
  if (controller_window_failed_recovered) {
    v_1205 = false;
    sub_63 = sub_33;
  } else {
    v_1205 = sub_33;
    sub_63 = false;
  };
  if (controller_ck_57_1) {
    v_1206 = v_1205;
  } else {
    v_1206 = sub_63;
  };
  if (controller_c_window) {
    sub_62 = v_1206;
  } else {
    sub_62 = sub_32;
  };
  if (controller_cleaner) {
    v_1207 = sub_62;
    sub_61 = sub_17;
  } else {
    v_1207 = sub_17;
    sub_61 = sub_62;
  };
  if (controller_ck_37_1) {
    sub_60 = v_1207;
  } else {
    sub_60 = sub_61;
  };
  sub_59 = sub_60;
  sub_58 = sub_59;
  sub_57 = sub_58;
  if (controller_cleaner) {
    v_1204 = sub_62;
    sub_68 = sub_41;
  } else {
    v_1204 = sub_41;
    sub_68 = sub_62;
  };
  if (controller_ck_37_1) {
    sub_67 = v_1204;
  } else {
    sub_67 = sub_68;
  };
  sub_66 = sub_67;
  sub_65 = sub_66;
  sub_64 = sub_65;
  if (controller_closet_failed_recovered) {
    v_1208 = sub_64;
    sub_56 = sub_57;
  } else {
    v_1208 = sub_57;
    sub_56 = sub_64;
  };
  if (controller_ck_62_1) {
    sub_55 = v_1208;
  } else {
    sub_55 = sub_56;
  };
  if (controller_blind_failed_recovered) {
    v_1224 = sub_55;
    sub_9 = sub_10;
  } else {
    v_1224 = sub_10;
    sub_9 = sub_55;
  };
  if (controller_ck_72_1) {
    sub_8 = v_1224;
  } else {
    sub_8 = sub_9;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (controller_cleaner) {
    sub_79 = sub_17;
    sub_80 = false;
  } else {
    sub_79 = false;
    sub_80 = sub_17;
  };
  if (controller_ck_37_1) {
    sub_78 = sub_80;
  } else {
    sub_78 = sub_79;
  };
  sub_77 = sub_78;
  if (controller_v_277) {
    v_1200 = sub_77;
  } else {
    v_1200 = false;
  };
  if (controller_v_276) {
    v_1201 = v_1200;
  } else {
    v_1201 = false;
  };
  if (controller_v_277) {
    sub_76 = false;
  } else {
    sub_76 = sub_77;
  };
  if (controller_ck_37_1) {
    sub_83 = sub_79;
  } else {
    sub_83 = sub_80;
  };
  sub_82 = sub_83;
  if (controller_v_277) {
    sub_81 = false;
  } else {
    sub_81 = sub_82;
  };
  if (controller_v_276) {
    v_1199 = sub_81;
  } else {
    v_1199 = sub_76;
  };
  if (controller_c_air_2) {
    v_1202 = v_1199;
  } else {
    v_1202 = v_1201;
  };
  if (controller_v_277) {
    v_1198 = sub_82;
  } else {
    v_1198 = sub_77;
  };
  if (controller_v_276) {
    sub_84 = v_1198;
  } else {
    sub_84 = sub_81;
  };
  if (controller_c_air_1) {
    sub_75 = v_1202;
  } else {
    sub_75 = sub_84;
  };
  if (controller_cleaner) {
    sub_89 = sub_41;
    sub_90 = false;
  } else {
    sub_89 = false;
    sub_90 = sub_41;
  };
  if (controller_ck_37_1) {
    sub_88 = sub_90;
  } else {
    sub_88 = sub_89;
  };
  sub_87 = sub_88;
  if (controller_v_277) {
    sub_86 = false;
  } else {
    sub_86 = sub_87;
  };
  if (controller_v_276) {
    v_1196 = sub_81;
  } else {
    v_1196 = sub_86;
  };
  if (controller_v_277) {
    v_1195 = sub_87;
  } else {
    v_1195 = false;
  };
  if (controller_v_276) {
    sub_91 = v_1195;
  } else {
    sub_91 = false;
  };
  if (controller_c_air_2) {
    v_1197 = v_1196;
  } else {
    v_1197 = sub_91;
  };
  if (controller_v_277) {
    v_1194 = sub_82;
  } else {
    v_1194 = sub_87;
  };
  if (controller_v_276) {
    sub_92 = v_1194;
  } else {
    sub_92 = sub_81;
  };
  if (controller_c_air_1) {
    sub_85 = v_1197;
  } else {
    sub_85 = sub_92;
  };
  if (controller_closet_failed_recovered) {
    v_1203 = sub_85;
    sub_74 = sub_75;
  } else {
    v_1203 = sub_75;
    sub_74 = sub_85;
  };
  if (controller_ck_62_1) {
    sub_73 = v_1203;
  } else {
    sub_73 = sub_74;
  };
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  if (controller_air_failed_recovered) {
    v_1225 = sub_69;
    sub_4 = sub_5;
  } else {
    v_1225 = sub_5;
    sub_4 = sub_69;
  };
  if (controller_ck_52_1) {
    sub_3 = v_1225;
  } else {
    sub_3 = sub_4;
  };
  if (controller_ck_45_1) {
    sub_111 = sub_23;
  } else {
    sub_111 = sub_27;
  };
  sub_110 = sub_111;
  if (controller_door_failed_recovered) {
    v_1188 = false;
    sub_113 = sub_111;
  } else {
    v_1188 = sub_111;
    sub_113 = false;
  };
  if (controller_ck_42_1) {
    sub_112 = v_1188;
  } else {
    sub_112 = sub_113;
  };
  if (controller_c_door) {
    sub_109 = sub_110;
    sub_114 = sub_112;
  } else {
    sub_109 = sub_112;
    sub_114 = sub_110;
  };
  if (controller_ck_40_1) {
    sub_108 = sub_114;
  } else {
    sub_108 = sub_109;
  };
  sub_107 = sub_108;
  sub_116 = sub_112;
  if (controller_window_failed_recovered) {
    v_1189 = sub_116;
    sub_115 = sub_108;
  } else {
    v_1189 = sub_108;
    sub_115 = sub_116;
  };
  if (controller_ck_57_1) {
    v_1190 = v_1189;
  } else {
    v_1190 = sub_115;
  };
  if (controller_c_window) {
    sub_106 = sub_107;
  } else {
    sub_106 = v_1190;
  };
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  sub_102 = sub_103;
  if (controller_ck_45_1) {
    sub_127 = sub_47;
  } else {
    sub_127 = sub_51;
  };
  sub_126 = sub_127;
  if (controller_door_failed_recovered) {
    v_1184 = false;
    sub_129 = sub_127;
  } else {
    v_1184 = sub_127;
    sub_129 = false;
  };
  if (controller_ck_42_1) {
    sub_128 = v_1184;
  } else {
    sub_128 = sub_129;
  };
  if (controller_c_door) {
    sub_125 = sub_126;
    sub_130 = sub_128;
  } else {
    sub_125 = sub_128;
    sub_130 = sub_126;
  };
  if (controller_ck_40_1) {
    sub_124 = sub_130;
  } else {
    sub_124 = sub_125;
  };
  sub_123 = sub_124;
  sub_132 = sub_128;
  if (controller_window_failed_recovered) {
    v_1185 = sub_132;
    sub_131 = sub_124;
  } else {
    v_1185 = sub_124;
    sub_131 = sub_132;
  };
  if (controller_ck_57_1) {
    v_1186 = v_1185;
  } else {
    v_1186 = sub_131;
  };
  if (controller_c_window) {
    sub_122 = sub_123;
  } else {
    sub_122 = v_1186;
  };
  if (controller_cleaner) {
    v_1187 = sub_106;
    sub_121 = sub_122;
  } else {
    v_1187 = sub_122;
    sub_121 = sub_106;
  };
  if (controller_ck_37_1) {
    sub_120 = v_1187;
  } else {
    sub_120 = sub_121;
  };
  sub_119 = sub_120;
  sub_118 = sub_119;
  sub_117 = sub_118;
  if (controller_closet_failed_recovered) {
    v_1191 = sub_117;
    sub_101 = sub_102;
  } else {
    v_1191 = sub_102;
    sub_101 = sub_117;
  };
  if (controller_ck_62_1) {
    sub_100 = v_1191;
  } else {
    sub_100 = sub_101;
  };
  if (controller_window_failed_recovered) {
    v_1181 = false;
    sub_140 = sub_108;
  } else {
    v_1181 = sub_108;
    sub_140 = false;
  };
  if (controller_ck_57_1) {
    v_1182 = v_1181;
  } else {
    v_1182 = sub_140;
  };
  if (controller_c_window) {
    sub_139 = v_1182;
  } else {
    sub_139 = sub_107;
  };
  sub_138 = sub_139;
  sub_137 = sub_138;
  sub_136 = sub_137;
  sub_135 = sub_136;
  if (controller_window_failed_recovered) {
    v_1178 = false;
    sub_147 = sub_124;
  } else {
    v_1178 = sub_124;
    sub_147 = false;
  };
  if (controller_ck_57_1) {
    v_1179 = v_1178;
  } else {
    v_1179 = sub_147;
  };
  if (controller_c_window) {
    sub_146 = v_1179;
  } else {
    sub_146 = sub_123;
  };
  if (controller_cleaner) {
    v_1180 = sub_139;
    sub_145 = sub_146;
  } else {
    v_1180 = sub_146;
    sub_145 = sub_139;
  };
  if (controller_ck_37_1) {
    sub_144 = v_1180;
  } else {
    sub_144 = sub_145;
  };
  sub_143 = sub_144;
  sub_142 = sub_143;
  sub_141 = sub_142;
  if (controller_closet_failed_recovered) {
    v_1183 = sub_141;
    sub_134 = sub_135;
  } else {
    v_1183 = sub_135;
    sub_134 = sub_141;
  };
  if (controller_ck_62_1) {
    sub_133 = v_1183;
  } else {
    sub_133 = sub_134;
  };
  if (controller_blind_failed_recovered) {
    v_1192 = sub_133;
    sub_99 = sub_100;
  } else {
    v_1192 = sub_100;
    sub_99 = sub_133;
  };
  if (controller_ck_72_1) {
    sub_98 = v_1192;
  } else {
    sub_98 = sub_99;
  };
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  sub_161 = sub_110;
  sub_160 = sub_161;
  sub_159 = sub_160;
  if (controller_cleaner) {
    v_1174 = sub_159;
    sub_158 = false;
  } else {
    v_1174 = false;
    sub_158 = sub_159;
  };
  if (controller_ck_37_1) {
    sub_157 = v_1174;
  } else {
    sub_157 = sub_158;
  };
  sub_156 = sub_157;
  if (controller_v_277) {
    sub_155 = sub_156;
  } else {
    sub_155 = false;
  };
  if (controller_ck_40_1) {
    sub_167 = sub_109;
  } else {
    sub_167 = sub_114;
  };
  if (controller_window_failed_recovered) {
    v_1171 = false;
    sub_168 = sub_167;
  } else {
    v_1171 = sub_167;
    sub_168 = false;
  };
  if (controller_ck_57_1) {
    v_1172 = v_1171;
  } else {
    v_1172 = sub_168;
  };
  if (controller_c_window) {
    sub_166 = sub_167;
  } else {
    sub_166 = v_1172;
  };
  if (controller_cleaner) {
    v_1173 = false;
    sub_165 = sub_166;
  } else {
    v_1173 = sub_166;
    sub_165 = false;
  };
  if (controller_ck_37_1) {
    sub_164 = v_1173;
  } else {
    sub_164 = sub_165;
  };
  sub_163 = sub_164;
  if (controller_v_277) {
    sub_162 = sub_156;
  } else {
    sub_162 = sub_163;
  };
  if (controller_v_276) {
    v_1175 = sub_162;
  } else {
    v_1175 = sub_155;
  };
  if (controller_v_277) {
    v_1170 = false;
  } else {
    v_1170 = sub_156;
  };
  if (controller_v_276) {
    sub_169 = v_1170;
  } else {
    sub_169 = sub_156;
  };
  if (controller_c_air_2) {
    v_1176 = v_1175;
  } else {
    v_1176 = sub_169;
  };
  if (controller_v_277) {
    v_1169 = sub_163;
  } else {
    v_1169 = false;
  };
  if (controller_v_276) {
    sub_170 = v_1169;
  } else {
    sub_170 = sub_162;
  };
  if (controller_c_air_1) {
    sub_154 = v_1176;
  } else {
    sub_154 = sub_170;
  };
  if (controller_ck_40_1) {
    sub_177 = sub_125;
  } else {
    sub_177 = sub_130;
  };
  if (controller_window_failed_recovered) {
    v_1164 = false;
    sub_178 = sub_177;
  } else {
    v_1164 = sub_177;
    sub_178 = false;
  };
  if (controller_ck_57_1) {
    v_1165 = v_1164;
  } else {
    v_1165 = sub_178;
  };
  if (controller_c_window) {
    sub_176 = sub_177;
  } else {
    sub_176 = v_1165;
  };
  if (controller_cleaner) {
    v_1166 = false;
    sub_175 = sub_176;
  } else {
    v_1166 = sub_176;
    sub_175 = false;
  };
  if (controller_ck_37_1) {
    sub_174 = v_1166;
  } else {
    sub_174 = sub_175;
  };
  sub_173 = sub_174;
  if (controller_v_277) {
    sub_172 = sub_156;
  } else {
    sub_172 = sub_173;
  };
  if (controller_v_276) {
    v_1167 = sub_172;
  } else {
    v_1167 = sub_155;
  };
  if (controller_c_air_2) {
    v_1168 = v_1167;
  } else {
    v_1168 = sub_169;
  };
  if (controller_v_277) {
    sub_180 = sub_173;
  } else {
    sub_180 = false;
  };
  if (controller_v_276) {
    sub_179 = sub_180;
  } else {
    sub_179 = sub_172;
  };
  if (controller_c_air_1) {
    sub_171 = v_1168;
  } else {
    sub_171 = sub_179;
  };
  if (controller_closet_failed_recovered) {
    v_1177 = sub_171;
    sub_153 = sub_154;
  } else {
    v_1177 = sub_154;
    sub_153 = sub_171;
  };
  if (controller_ck_62_1) {
    sub_152 = v_1177;
  } else {
    sub_152 = sub_153;
  };
  sub_151 = sub_152;
  sub_150 = sub_151;
  sub_149 = sub_150;
  sub_148 = sub_149;
  if (controller_air_failed_recovered) {
    v_1193 = sub_148;
    sub_94 = sub_95;
  } else {
    v_1193 = sub_95;
    sub_94 = sub_148;
  };
  if (controller_ck_52_1) {
    sub_93 = v_1193;
  } else {
    sub_93 = sub_94;
  };
  if (controller_worker) {
    v_1226 = sub_93;
    sub_2 = sub_3;
  } else {
    v_1226 = sub_3;
    sub_2 = sub_93;
  };
  if (controller_ck_35_1) {
    sub_1 = v_1226;
  } else {
    sub_1 = sub_2;
  };
  if (controller_ck_40_1) {
    sub_198 = sub_43;
  } else {
    sub_198 = sub_53;
  };
  sub_197 = sub_198;
  sub_200 = sub_44;
  if (controller_window_failed_recovered) {
    v_1158 = sub_200;
    sub_199 = sub_198;
  } else {
    v_1158 = sub_198;
    sub_199 = sub_200;
  };
  if (controller_ck_57_1) {
    v_1159 = v_1158;
  } else {
    v_1159 = sub_199;
  };
  if (controller_c_window) {
    sub_196 = sub_197;
  } else {
    sub_196 = v_1159;
  };
  if (controller_cleaner) {
    v_1160 = sub_196;
    sub_195 = sub_41;
  } else {
    v_1160 = sub_41;
    sub_195 = sub_196;
  };
  if (controller_ck_37_1) {
    sub_194 = v_1160;
  } else {
    sub_194 = sub_195;
  };
  sub_193 = sub_194;
  sub_192 = sub_193;
  sub_191 = sub_192;
  if (controller_closet_failed_recovered) {
    v_1161 = sub_36;
    sub_190 = sub_191;
  } else {
    v_1161 = sub_191;
    sub_190 = sub_36;
  };
  if (controller_ck_62_1) {
    sub_189 = v_1161;
  } else {
    sub_189 = sub_190;
  };
  if (controller_window_failed_recovered) {
    v_1154 = false;
    sub_209 = sub_198;
  } else {
    v_1154 = sub_198;
    sub_209 = false;
  };
  if (controller_ck_57_1) {
    v_1155 = v_1154;
  } else {
    v_1155 = sub_209;
  };
  if (controller_c_window) {
    sub_208 = v_1155;
  } else {
    sub_208 = sub_197;
  };
  if (controller_cleaner) {
    v_1156 = sub_208;
    sub_207 = sub_41;
  } else {
    v_1156 = sub_41;
    sub_207 = sub_208;
  };
  if (controller_ck_37_1) {
    sub_206 = v_1156;
  } else {
    sub_206 = sub_207;
  };
  sub_205 = sub_206;
  sub_204 = sub_205;
  sub_203 = sub_204;
  if (controller_closet_failed_recovered) {
    v_1157 = sub_64;
    sub_202 = sub_203;
  } else {
    v_1157 = sub_203;
    sub_202 = sub_64;
  };
  if (controller_ck_62_1) {
    sub_201 = v_1157;
  } else {
    sub_201 = sub_202;
  };
  if (controller_blind_failed_recovered) {
    v_1162 = sub_201;
    sub_188 = sub_189;
  } else {
    v_1162 = sub_189;
    sub_188 = sub_201;
  };
  if (controller_ck_72_1) {
    sub_187 = v_1162;
  } else {
    sub_187 = sub_188;
  };
  sub_186 = sub_187;
  sub_185 = sub_186;
  sub_184 = sub_185;
  if (controller_ck_37_1) {
    sub_219 = sub_89;
  } else {
    sub_219 = sub_90;
  };
  sub_218 = sub_219;
  if (controller_v_277) {
    sub_217 = false;
  } else {
    sub_217 = sub_218;
  };
  if (controller_v_276) {
    v_1151 = sub_217;
  } else {
    v_1151 = sub_86;
  };
  if (controller_c_air_2) {
    v_1152 = v_1151;
  } else {
    v_1152 = sub_91;
  };
  if (controller_v_277) {
    v_1150 = sub_218;
  } else {
    v_1150 = sub_87;
  };
  if (controller_v_276) {
    sub_220 = v_1150;
  } else {
    sub_220 = sub_217;
  };
  if (controller_c_air_1) {
    sub_216 = v_1152;
  } else {
    sub_216 = sub_220;
  };
  if (controller_closet_failed_recovered) {
    v_1153 = sub_85;
    sub_215 = sub_216;
  } else {
    v_1153 = sub_216;
    sub_215 = sub_85;
  };
  if (controller_ck_62_1) {
    sub_214 = v_1153;
  } else {
    sub_214 = sub_215;
  };
  sub_213 = sub_214;
  sub_212 = sub_213;
  sub_211 = sub_212;
  sub_210 = sub_211;
  if (controller_air_failed_recovered) {
    v_1163 = sub_210;
    sub_183 = sub_184;
  } else {
    v_1163 = sub_184;
    sub_183 = sub_210;
  };
  if (controller_ck_52_1) {
    sub_182 = v_1163;
  } else {
    sub_182 = sub_183;
  };
  sub_233 = sub_122;
  sub_232 = sub_233;
  sub_231 = sub_232;
  sub_230 = sub_231;
  if (controller_closet_failed_recovered) {
    v_1147 = sub_117;
    sub_229 = sub_230;
  } else {
    v_1147 = sub_230;
    sub_229 = sub_117;
  };
  if (controller_ck_62_1) {
    sub_228 = v_1147;
  } else {
    sub_228 = sub_229;
  };
  sub_239 = sub_146;
  sub_238 = sub_239;
  sub_237 = sub_238;
  sub_236 = sub_237;
  if (controller_closet_failed_recovered) {
    v_1146 = sub_141;
    sub_235 = sub_236;
  } else {
    v_1146 = sub_236;
    sub_235 = sub_141;
  };
  if (controller_ck_62_1) {
    sub_234 = v_1146;
  } else {
    sub_234 = sub_235;
  };
  if (controller_blind_failed_recovered) {
    v_1148 = sub_234;
    sub_227 = sub_228;
  } else {
    v_1148 = sub_228;
    sub_227 = sub_234;
  };
  if (controller_ck_72_1) {
    sub_226 = v_1148;
  } else {
    sub_226 = sub_227;
  };
  sub_225 = sub_226;
  sub_224 = sub_225;
  sub_223 = sub_224;
  sub_253 = sub_126;
  sub_252 = sub_253;
  sub_251 = sub_252;
  if (controller_cleaner) {
    v = sub_251;
    sub_250 = false;
  } else {
    v = false;
    sub_250 = sub_251;
  };
  if (controller_ck_37_1) {
    sub_249 = v;
  } else {
    sub_249 = sub_250;
  };
  sub_248 = sub_249;
  if (controller_v_277) {
    v_1142 = false;
  } else {
    v_1142 = sub_248;
  };
  if (controller_v_276) {
    v_1143 = v_1142;
  } else {
    v_1143 = sub_248;
  };
  if (controller_v_277) {
    sub_247 = sub_248;
    sub_254 = sub_248;
  } else {
    sub_247 = false;
    sub_254 = sub_173;
  };
  if (controller_v_276) {
    v_1141 = sub_254;
  } else {
    v_1141 = sub_247;
  };
  if (controller_c_air_2) {
    v_1144 = v_1141;
  } else {
    v_1144 = v_1143;
  };
  if (controller_v_276) {
    sub_255 = sub_180;
  } else {
    sub_255 = sub_254;
  };
  if (controller_c_air_1) {
    sub_246 = v_1144;
  } else {
    sub_246 = sub_255;
  };
  if (controller_closet_failed_recovered) {
    v_1145 = sub_171;
    sub_245 = sub_246;
  } else {
    v_1145 = sub_246;
    sub_245 = sub_171;
  };
  if (controller_ck_62_1) {
    sub_244 = v_1145;
  } else {
    sub_244 = sub_245;
  };
  sub_243 = sub_244;
  sub_242 = sub_243;
  sub_241 = sub_242;
  sub_240 = sub_241;
  if (controller_air_failed_recovered) {
    v_1149 = sub_240;
    sub_222 = sub_223;
  } else {
    v_1149 = sub_223;
    sub_222 = sub_240;
  };
  if (controller_ck_52_1) {
    sub_221 = v_1149;
  } else {
    sub_221 = sub_222;
  };
  if (controller_worker) {
    v_1227 = sub_221;
    sub_181 = sub_182;
  } else {
    v_1227 = sub_182;
    sub_181 = sub_221;
  };
  if (controller_ck_35_1) {
    v_1228 = v_1227;
  } else {
    v_1228 = sub_181;
  };
  if (p_controller_c_closet) {
    sub_0 = v_1228;
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
  int controller_pnr_22, int controller_ck_35_1, int controller_pnr_21,
  int controller_ck_37_1, int controller_pnr_20, int controller_ck_40_1,
  int controller_pnr_19, int controller_ck_42_1, int controller_pnr_18,
  int controller_ck_45_1, int controller_pnr_17, int controller_ck_47_1,
  int controller_pnr_16, int controller_v_277, int controller_v_276,
  int controller_pnr_15, int controller_ck_52_1, int controller_pnr_14,
  int controller_ck_55_1, int controller_pnr_13, int controller_ck_57_1,
  int controller_pnr_12, int controller_ck_60_1, int controller_pnr_11,
  int controller_ck_62_1, int controller_pnr_10, int controller_ck_65_1,
  int controller_pnr_9, int controller_ck_67_1, int controller_pnr_8,
  int controller_ck_70_1, int controller_pnr_7, int controller_ck_72_1,
  int controller_pnr, int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_air_1, int controller_c_window,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_2_out* _out) {
  
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
  v_1281 = (controller_pc_failed_recovered&&false);
  v_1280 = !(controller_pc_failed_recovered);
  sub_23 = (v_1280&&false);
  if (controller_ck_47_1) {
    sub_22 = v_1281;
  } else {
    sub_22 = sub_23;
  };
  sub_24 = false;
  if (controller_c_pc) {
    sub_21 = sub_22;
    sub_25 = sub_24;
  } else {
    sub_21 = sub_24;
    sub_25 = sub_22;
  };
  if (controller_ck_45_1) {
    sub_20 = sub_25;
  } else {
    sub_20 = sub_21;
  };
  if (controller_door_failed_recovered) {
    v_1282 = false;
    sub_19 = sub_20;
  } else {
    v_1282 = sub_20;
    sub_19 = false;
  };
  if (controller_ck_42_1) {
    sub_18 = v_1282;
  } else {
    sub_18 = sub_19;
  };
  sub_26 = sub_20;
  if (controller_c_door) {
    sub_17 = sub_18;
    sub_27 = sub_26;
  } else {
    sub_17 = sub_26;
    sub_27 = sub_18;
  };
  if (controller_ck_40_1) {
    sub_16 = sub_27;
  } else {
    sub_16 = sub_17;
  };
  if (controller_window_failed_recovered) {
    v_1283 = false;
    sub_28 = sub_16;
  } else {
    v_1283 = sub_16;
    sub_28 = false;
  };
  if (controller_ck_57_1) {
    v_1284 = v_1283;
  } else {
    v_1284 = sub_28;
  };
  if (controller_c_window) {
    sub_15 = sub_16;
  } else {
    sub_15 = v_1284;
  };
  if (controller_ck_40_1) {
    sub_31 = sub_17;
  } else {
    sub_31 = sub_27;
  };
  sub_30 = sub_31;
  sub_33 = sub_18;
  if (controller_window_failed_recovered) {
    v_1278 = sub_33;
    sub_32 = sub_31;
  } else {
    v_1278 = sub_31;
    sub_32 = sub_33;
  };
  if (controller_ck_57_1) {
    v_1279 = v_1278;
  } else {
    v_1279 = sub_32;
  };
  if (controller_c_window) {
    sub_29 = sub_30;
  } else {
    sub_29 = v_1279;
  };
  if (controller_cleaner) {
    v_1285 = sub_29;
    sub_14 = sub_15;
  } else {
    v_1285 = sub_15;
    sub_14 = sub_29;
  };
  if (controller_ck_37_1) {
    sub_13 = v_1285;
  } else {
    sub_13 = sub_14;
  };
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  if (controller_window_failed_recovered) {
    v_1275 = false;
    sub_40 = sub_31;
  } else {
    v_1275 = sub_31;
    sub_40 = false;
  };
  if (controller_ck_57_1) {
    v_1276 = v_1275;
  } else {
    v_1276 = sub_40;
  };
  if (controller_c_window) {
    sub_39 = v_1276;
  } else {
    sub_39 = sub_30;
  };
  if (controller_cleaner) {
    v_1277 = sub_39;
    sub_38 = sub_15;
  } else {
    v_1277 = sub_15;
    sub_38 = sub_39;
  };
  if (controller_ck_37_1) {
    sub_37 = v_1277;
  } else {
    sub_37 = sub_38;
  };
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  if (controller_blind_failed_recovered) {
    v_1286 = sub_34;
    sub_9 = sub_10;
  } else {
    v_1286 = sub_10;
    sub_9 = sub_34;
  };
  if (controller_ck_72_1) {
    sub_8 = v_1286;
  } else {
    sub_8 = sub_9;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  v_1267 = !(controller_pc_failed_recovered);
  v_1268 = (v_1267||false);
  sub_60 = (controller_pc_failed_recovered||false);
  if (controller_ck_47_1) {
    sub_59 = v_1268;
  } else {
    sub_59 = sub_60;
  };
  sub_61 = true;
  if (controller_c_pc) {
    sub_58 = sub_59;
    sub_62 = sub_61;
  } else {
    sub_58 = sub_61;
    sub_62 = sub_59;
  };
  if (controller_ck_45_1) {
    sub_57 = sub_62;
  } else {
    sub_57 = sub_58;
  };
  if (controller_door_failed_recovered) {
    v_1269 = false;
    sub_56 = sub_57;
  } else {
    v_1269 = sub_57;
    sub_56 = false;
  };
  if (controller_ck_42_1) {
    sub_55 = v_1269;
  } else {
    sub_55 = sub_56;
  };
  sub_63 = sub_57;
  if (controller_c_door) {
    sub_54 = sub_55;
    sub_64 = sub_63;
  } else {
    sub_54 = sub_63;
    sub_64 = sub_55;
  };
  if (controller_ck_40_1) {
    sub_53 = sub_64;
  } else {
    sub_53 = sub_54;
  };
  if (controller_window_failed_recovered) {
    v_1270 = false;
    sub_65 = sub_53;
  } else {
    v_1270 = sub_53;
    sub_65 = false;
  };
  if (controller_ck_57_1) {
    v_1271 = v_1270;
  } else {
    v_1271 = sub_65;
  };
  if (controller_c_window) {
    sub_52 = sub_53;
  } else {
    sub_52 = v_1271;
  };
  if (controller_cleaner) {
    sub_51 = sub_52;
    sub_66 = false;
  } else {
    sub_51 = false;
    sub_66 = sub_52;
  };
  if (controller_ck_37_1) {
    sub_50 = sub_66;
  } else {
    sub_50 = sub_51;
  };
  sub_49 = sub_50;
  if (controller_v_277) {
    sub_48 = false;
  } else {
    sub_48 = sub_49;
  };
  if (controller_ck_37_1) {
    sub_68 = sub_51;
  } else {
    sub_68 = sub_66;
  };
  sub_67 = sub_68;
  if (controller_cleaner) {
    sub_71 = sub_15;
    sub_72 = false;
  } else {
    sub_71 = false;
    sub_72 = sub_15;
  };
  if (controller_ck_37_1) {
    sub_70 = sub_72;
  } else {
    sub_70 = sub_71;
  };
  sub_69 = sub_70;
  if (controller_v_277) {
    v_1272 = sub_69;
  } else {
    v_1272 = sub_67;
  };
  if (controller_v_276) {
    sub_47 = v_1272;
  } else {
    sub_47 = sub_48;
  };
  if (controller_ck_37_1) {
    sub_75 = sub_71;
  } else {
    sub_75 = sub_72;
  };
  sub_74 = sub_75;
  if (controller_v_277) {
    v_1273 = sub_74;
    sub_73 = false;
  } else {
    v_1273 = sub_69;
    sub_73 = sub_74;
  };
  if (controller_v_276) {
    v_1274 = v_1273;
  } else {
    v_1274 = sub_73;
  };
  if (controller_c_air_1) {
    sub_46 = sub_47;
  } else {
    sub_46 = v_1274;
  };
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (controller_air_failed_recovered) {
    v_1287 = sub_41;
    sub_4 = sub_5;
  } else {
    v_1287 = sub_5;
    sub_4 = sub_41;
  };
  if (controller_ck_52_1) {
    sub_3 = v_1287;
  } else {
    sub_3 = sub_4;
  };
  if (controller_ck_45_1) {
    sub_92 = sub_21;
  } else {
    sub_92 = sub_25;
  };
  sub_91 = sub_92;
  if (controller_door_failed_recovered) {
    v_1262 = false;
    sub_94 = sub_92;
  } else {
    v_1262 = sub_92;
    sub_94 = false;
  };
  if (controller_ck_42_1) {
    sub_93 = v_1262;
  } else {
    sub_93 = sub_94;
  };
  if (controller_c_door) {
    sub_90 = sub_91;
    sub_95 = sub_93;
  } else {
    sub_90 = sub_93;
    sub_95 = sub_91;
  };
  if (controller_ck_40_1) {
    sub_89 = sub_95;
  } else {
    sub_89 = sub_90;
  };
  sub_88 = sub_89;
  sub_97 = sub_93;
  if (controller_window_failed_recovered) {
    v_1263 = sub_97;
    sub_96 = sub_89;
  } else {
    v_1263 = sub_89;
    sub_96 = sub_97;
  };
  if (controller_ck_57_1) {
    v_1264 = v_1263;
  } else {
    v_1264 = sub_96;
  };
  if (controller_c_window) {
    sub_87 = sub_88;
  } else {
    sub_87 = v_1264;
  };
  sub_86 = sub_87;
  sub_85 = sub_86;
  sub_84 = sub_85;
  sub_83 = sub_84;
  if (controller_window_failed_recovered) {
    v_1260 = false;
    sub_103 = sub_89;
  } else {
    v_1260 = sub_89;
    sub_103 = false;
  };
  if (controller_ck_57_1) {
    v_1261 = v_1260;
  } else {
    v_1261 = sub_103;
  };
  if (controller_c_window) {
    sub_102 = v_1261;
  } else {
    sub_102 = sub_88;
  };
  sub_101 = sub_102;
  sub_100 = sub_101;
  sub_99 = sub_100;
  sub_98 = sub_99;
  if (controller_blind_failed_recovered) {
    v_1265 = sub_98;
    sub_82 = sub_83;
  } else {
    v_1265 = sub_83;
    sub_82 = sub_98;
  };
  if (controller_ck_72_1) {
    sub_81 = v_1265;
  } else {
    sub_81 = sub_82;
  };
  sub_80 = sub_81;
  sub_79 = sub_80;
  sub_78 = sub_79;
  sub_115 = sub_91;
  sub_114 = sub_115;
  sub_113 = sub_114;
  if (controller_cleaner) {
    v_1256 = sub_113;
    sub_112 = false;
  } else {
    v_1256 = false;
    sub_112 = sub_113;
  };
  if (controller_ck_37_1) {
    sub_111 = v_1256;
  } else {
    sub_111 = sub_112;
  };
  sub_110 = sub_111;
  if (controller_ck_45_1) {
    sub_125 = sub_58;
  } else {
    sub_125 = sub_62;
  };
  if (controller_door_failed_recovered) {
    v_1252 = false;
    sub_124 = sub_125;
  } else {
    v_1252 = sub_125;
    sub_124 = false;
  };
  if (controller_ck_42_1) {
    sub_123 = v_1252;
  } else {
    sub_123 = sub_124;
  };
  sub_126 = sub_125;
  if (controller_c_door) {
    sub_122 = sub_123;
    sub_127 = sub_126;
  } else {
    sub_122 = sub_126;
    sub_127 = sub_123;
  };
  if (controller_ck_40_1) {
    sub_121 = sub_127;
  } else {
    sub_121 = sub_122;
  };
  if (controller_window_failed_recovered) {
    v_1253 = false;
    sub_128 = sub_121;
  } else {
    v_1253 = sub_121;
    sub_128 = false;
  };
  if (controller_ck_57_1) {
    v_1254 = v_1253;
  } else {
    v_1254 = sub_128;
  };
  if (controller_c_window) {
    sub_120 = sub_121;
  } else {
    sub_120 = v_1254;
  };
  if (controller_cleaner) {
    v_1255 = sub_113;
    sub_119 = sub_120;
  } else {
    v_1255 = sub_120;
    sub_119 = sub_113;
  };
  if (controller_ck_37_1) {
    sub_118 = v_1255;
  } else {
    sub_118 = sub_119;
  };
  sub_117 = sub_118;
  sub_134 = sub_126;
  sub_133 = sub_134;
  sub_132 = sub_133;
  if (controller_cleaner) {
    v_1251 = sub_132;
    sub_131 = false;
  } else {
    v_1251 = false;
    sub_131 = sub_132;
  };
  if (controller_ck_37_1) {
    sub_130 = v_1251;
  } else {
    sub_130 = sub_131;
  };
  sub_129 = sub_130;
  if (controller_v_277) {
    sub_116 = sub_129;
  } else {
    sub_116 = sub_117;
  };
  if (controller_v_276) {
    v_1257 = sub_116;
  } else {
    v_1257 = sub_110;
  };
  if (controller_ck_40_1) {
    sub_140 = sub_90;
  } else {
    sub_140 = sub_95;
  };
  if (controller_window_failed_recovered) {
    v_1248 = false;
    sub_141 = sub_140;
  } else {
    v_1248 = sub_140;
    sub_141 = false;
  };
  if (controller_ck_57_1) {
    v_1249 = v_1248;
  } else {
    v_1249 = sub_141;
  };
  if (controller_c_window) {
    sub_139 = sub_140;
  } else {
    sub_139 = v_1249;
  };
  if (controller_cleaner) {
    v_1250 = false;
    sub_138 = sub_139;
  } else {
    v_1250 = sub_139;
    sub_138 = false;
  };
  if (controller_ck_37_1) {
    sub_137 = v_1250;
  } else {
    sub_137 = sub_138;
  };
  sub_136 = sub_137;
  if (controller_v_277) {
    v_1258 = sub_136;
    sub_135 = sub_110;
  } else {
    v_1258 = false;
    sub_135 = sub_136;
  };
  if (controller_v_276) {
    v_1259 = v_1258;
  } else {
    v_1259 = sub_135;
  };
  if (controller_c_air_1) {
    sub_109 = v_1257;
  } else {
    sub_109 = v_1259;
  };
  sub_108 = sub_109;
  sub_107 = sub_108;
  sub_106 = sub_107;
  sub_105 = sub_106;
  sub_104 = sub_105;
  if (controller_air_failed_recovered) {
    v_1266 = sub_104;
    sub_77 = sub_78;
  } else {
    v_1266 = sub_78;
    sub_77 = sub_104;
  };
  if (controller_ck_52_1) {
    sub_76 = v_1266;
  } else {
    sub_76 = sub_77;
  };
  if (controller_worker) {
    v_1288 = sub_76;
    sub_2 = sub_3;
  } else {
    v_1288 = sub_3;
    sub_2 = sub_76;
  };
  if (controller_ck_35_1) {
    sub_1 = v_1288;
  } else {
    sub_1 = sub_2;
  };
  if (controller_ck_40_1) {
    sub_157 = sub_54;
  } else {
    sub_157 = sub_64;
  };
  sub_156 = sub_157;
  sub_159 = sub_55;
  if (controller_window_failed_recovered) {
    v_1243 = sub_159;
    sub_158 = sub_157;
  } else {
    v_1243 = sub_157;
    sub_158 = sub_159;
  };
  if (controller_ck_57_1) {
    v_1244 = v_1243;
  } else {
    v_1244 = sub_158;
  };
  if (controller_c_window) {
    sub_155 = sub_156;
  } else {
    sub_155 = v_1244;
  };
  if (controller_cleaner) {
    v_1245 = sub_155;
    sub_154 = sub_52;
  } else {
    v_1245 = sub_52;
    sub_154 = sub_155;
  };
  if (controller_ck_37_1) {
    sub_153 = v_1245;
  } else {
    sub_153 = sub_154;
  };
  sub_152 = sub_153;
  sub_151 = sub_152;
  sub_150 = sub_151;
  if (controller_window_failed_recovered) {
    v_1240 = false;
    sub_166 = sub_157;
  } else {
    v_1240 = sub_157;
    sub_166 = false;
  };
  if (controller_ck_57_1) {
    v_1241 = v_1240;
  } else {
    v_1241 = sub_166;
  };
  if (controller_c_window) {
    sub_165 = v_1241;
  } else {
    sub_165 = sub_156;
  };
  if (controller_cleaner) {
    v_1242 = sub_165;
    sub_164 = sub_52;
  } else {
    v_1242 = sub_52;
    sub_164 = sub_165;
  };
  if (controller_ck_37_1) {
    sub_163 = v_1242;
  } else {
    sub_163 = sub_164;
  };
  sub_162 = sub_163;
  sub_161 = sub_162;
  sub_160 = sub_161;
  if (controller_blind_failed_recovered) {
    v_1246 = sub_160;
    sub_149 = sub_150;
  } else {
    v_1246 = sub_150;
    sub_149 = sub_160;
  };
  if (controller_ck_72_1) {
    sub_148 = v_1246;
  } else {
    sub_148 = sub_149;
  };
  sub_147 = sub_148;
  sub_146 = sub_147;
  sub_145 = sub_146;
  if (controller_v_277) {
    v_1238 = sub_67;
    sub_173 = false;
  } else {
    v_1238 = sub_49;
    sub_173 = sub_67;
  };
  if (controller_v_276) {
    v_1239 = v_1238;
  } else {
    v_1239 = sub_173;
  };
  if (controller_c_air_1) {
    sub_172 = sub_47;
  } else {
    sub_172 = v_1239;
  };
  sub_171 = sub_172;
  sub_170 = sub_171;
  sub_169 = sub_170;
  sub_168 = sub_169;
  sub_167 = sub_168;
  if (controller_air_failed_recovered) {
    v_1247 = sub_167;
    sub_144 = sub_145;
  } else {
    v_1247 = sub_145;
    sub_144 = sub_167;
  };
  if (controller_ck_52_1) {
    sub_143 = v_1247;
  } else {
    sub_143 = sub_144;
  };
  if (controller_ck_40_1) {
    sub_187 = sub_122;
  } else {
    sub_187 = sub_127;
  };
  sub_186 = sub_187;
  sub_189 = sub_123;
  if (controller_window_failed_recovered) {
    v_1234 = sub_189;
    sub_188 = sub_187;
  } else {
    v_1234 = sub_187;
    sub_188 = sub_189;
  };
  if (controller_ck_57_1) {
    v_1235 = v_1234;
  } else {
    v_1235 = sub_188;
  };
  if (controller_c_window) {
    sub_185 = sub_186;
  } else {
    sub_185 = v_1235;
  };
  sub_184 = sub_185;
  sub_183 = sub_184;
  sub_182 = sub_183;
  sub_181 = sub_182;
  if (controller_window_failed_recovered) {
    v_1232 = false;
    sub_195 = sub_187;
  } else {
    v_1232 = sub_187;
    sub_195 = false;
  };
  if (controller_ck_57_1) {
    v_1233 = v_1232;
  } else {
    v_1233 = sub_195;
  };
  if (controller_c_window) {
    sub_194 = v_1233;
  } else {
    sub_194 = sub_186;
  };
  sub_193 = sub_194;
  sub_192 = sub_193;
  sub_191 = sub_192;
  sub_190 = sub_191;
  if (controller_blind_failed_recovered) {
    v_1236 = sub_190;
    sub_180 = sub_181;
  } else {
    v_1236 = sub_181;
    sub_180 = sub_190;
  };
  if (controller_ck_72_1) {
    sub_179 = v_1236;
  } else {
    sub_179 = sub_180;
  };
  sub_178 = sub_179;
  sub_177 = sub_178;
  sub_176 = sub_177;
  if (controller_v_277) {
    sub_202 = sub_129;
  } else {
    sub_202 = sub_110;
  };
  if (controller_v_276) {
    v_1229 = sub_116;
  } else {
    v_1229 = sub_202;
  };
  if (controller_cleaner) {
    v = false;
    sub_206 = sub_120;
  } else {
    v = sub_120;
    sub_206 = false;
  };
  if (controller_ck_37_1) {
    sub_205 = v;
  } else {
    sub_205 = sub_206;
  };
  sub_204 = sub_205;
  if (controller_v_277) {
    v_1230 = sub_204;
    sub_203 = sub_129;
  } else {
    v_1230 = false;
    sub_203 = sub_204;
  };
  if (controller_v_276) {
    v_1231 = v_1230;
  } else {
    v_1231 = sub_203;
  };
  if (controller_c_air_1) {
    sub_201 = v_1229;
  } else {
    sub_201 = v_1231;
  };
  sub_200 = sub_201;
  sub_199 = sub_200;
  sub_198 = sub_199;
  sub_197 = sub_198;
  sub_196 = sub_197;
  if (controller_air_failed_recovered) {
    v_1237 = sub_196;
    sub_175 = sub_176;
  } else {
    v_1237 = sub_176;
    sub_175 = sub_196;
  };
  if (controller_ck_52_1) {
    sub_174 = v_1237;
  } else {
    sub_174 = sub_175;
  };
  if (controller_worker) {
    v_1289 = sub_174;
    sub_142 = sub_143;
  } else {
    v_1289 = sub_143;
    sub_142 = sub_174;
  };
  if (controller_ck_35_1) {
    v_1290 = v_1289;
  } else {
    v_1290 = sub_142;
  };
  if (p_controller_c_air_2) {
    sub_0 = v_1290;
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
  int controller_pnr_22, int controller_ck_35_1, int controller_pnr_21,
  int controller_ck_37_1, int controller_pnr_20, int controller_ck_40_1,
  int controller_pnr_19, int controller_ck_42_1, int controller_pnr_18,
  int controller_ck_45_1, int controller_pnr_17, int controller_ck_47_1,
  int controller_pnr_16, int controller_v_277, int controller_v_276,
  int controller_pnr_15, int controller_ck_52_1, int controller_pnr_14,
  int controller_ck_55_1, int controller_pnr_13, int controller_ck_57_1,
  int controller_pnr_12, int controller_ck_60_1, int controller_pnr_11,
  int controller_ck_62_1, int controller_pnr_10, int controller_ck_65_1,
  int controller_pnr_9, int controller_ck_67_1, int controller_pnr_8,
  int controller_ck_70_1, int controller_pnr_7, int controller_ck_72_1,
  int controller_pnr, int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_1_out* _out) {
  
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
  sub_22 = p_controller_c_air_1;
  if (controller_pc_failed_recovered) {
    v_1328 = false;
    sub_21 = sub_22;
  } else {
    v_1328 = sub_22;
    sub_21 = false;
  };
  if (controller_ck_47_1) {
    sub_20 = v_1328;
  } else {
    sub_20 = sub_21;
  };
  sub_23 = sub_22;
  if (controller_c_pc) {
    sub_19 = sub_20;
    sub_24 = sub_23;
  } else {
    sub_19 = sub_23;
    sub_24 = sub_20;
  };
  if (controller_ck_45_1) {
    sub_18 = sub_24;
  } else {
    sub_18 = sub_19;
  };
  if (controller_door_failed_recovered) {
    v_1329 = false;
    sub_17 = sub_18;
  } else {
    v_1329 = sub_18;
    sub_17 = false;
  };
  if (controller_ck_42_1) {
    sub_16 = v_1329;
  } else {
    sub_16 = sub_17;
  };
  sub_25 = sub_18;
  if (controller_c_door) {
    sub_15 = sub_16;
    sub_26 = sub_25;
  } else {
    sub_15 = sub_25;
    sub_26 = sub_16;
  };
  if (controller_ck_40_1) {
    sub_14 = sub_26;
  } else {
    sub_14 = sub_15;
  };
  if (controller_window_failed_recovered) {
    v_1330 = false;
    sub_27 = sub_14;
  } else {
    v_1330 = sub_14;
    sub_27 = false;
  };
  if (controller_ck_57_1) {
    v_1331 = v_1330;
  } else {
    v_1331 = sub_27;
  };
  if (controller_c_window) {
    sub_13 = sub_14;
  } else {
    sub_13 = v_1331;
  };
  if (controller_ck_40_1) {
    sub_30 = sub_15;
  } else {
    sub_30 = sub_26;
  };
  sub_29 = sub_30;
  sub_32 = sub_16;
  if (controller_window_failed_recovered) {
    v_1326 = sub_32;
    sub_31 = sub_30;
  } else {
    v_1326 = sub_30;
    sub_31 = sub_32;
  };
  if (controller_ck_57_1) {
    v_1327 = v_1326;
  } else {
    v_1327 = sub_31;
  };
  if (controller_c_window) {
    sub_28 = sub_29;
  } else {
    sub_28 = v_1327;
  };
  if (controller_cleaner) {
    v_1332 = sub_28;
    sub_12 = sub_13;
  } else {
    v_1332 = sub_13;
    sub_12 = sub_28;
  };
  if (controller_ck_37_1) {
    sub_11 = v_1332;
  } else {
    sub_11 = sub_12;
  };
  sub_10 = sub_11;
  sub_9 = sub_10;
  if (controller_window_failed_recovered) {
    v_1323 = false;
    sub_38 = sub_30;
  } else {
    v_1323 = sub_30;
    sub_38 = false;
  };
  if (controller_ck_57_1) {
    v_1324 = v_1323;
  } else {
    v_1324 = sub_38;
  };
  if (controller_c_window) {
    sub_37 = v_1324;
  } else {
    sub_37 = sub_29;
  };
  if (controller_cleaner) {
    v_1325 = sub_37;
    sub_36 = sub_13;
  } else {
    v_1325 = sub_13;
    sub_36 = sub_37;
  };
  if (controller_ck_37_1) {
    sub_35 = v_1325;
  } else {
    sub_35 = sub_36;
  };
  sub_34 = sub_35;
  sub_33 = sub_34;
  if (controller_blind_failed_recovered) {
    v_1333 = sub_33;
    sub_8 = sub_9;
  } else {
    v_1333 = sub_9;
    sub_8 = sub_33;
  };
  if (controller_ck_72_1) {
    sub_7 = v_1333;
  } else {
    sub_7 = sub_8;
  };
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  v_1316 = !(controller_pc_failed_recovered);
  v_1317 = (v_1316||false);
  sub_57 = (controller_pc_failed_recovered||false);
  if (controller_ck_47_1) {
    sub_56 = v_1317;
  } else {
    sub_56 = sub_57;
  };
  sub_58 = true;
  if (controller_c_pc) {
    sub_55 = sub_56;
    sub_59 = sub_58;
  } else {
    sub_55 = sub_58;
    sub_59 = sub_56;
  };
  if (controller_ck_45_1) {
    sub_54 = sub_59;
  } else {
    sub_54 = sub_55;
  };
  if (controller_door_failed_recovered) {
    v_1318 = false;
    sub_53 = sub_54;
  } else {
    v_1318 = sub_54;
    sub_53 = false;
  };
  if (controller_ck_42_1) {
    sub_52 = v_1318;
  } else {
    sub_52 = sub_53;
  };
  sub_60 = sub_54;
  if (controller_c_door) {
    v_1319 = sub_60;
    sub_51 = sub_52;
  } else {
    v_1319 = sub_52;
    sub_51 = sub_60;
  };
  if (controller_ck_40_1) {
    sub_50 = v_1319;
  } else {
    sub_50 = sub_51;
  };
  if (controller_window_failed_recovered) {
    v_1320 = false;
    sub_61 = sub_50;
  } else {
    v_1320 = sub_50;
    sub_61 = false;
  };
  if (controller_ck_57_1) {
    v_1321 = v_1320;
  } else {
    v_1321 = sub_61;
  };
  if (controller_c_window) {
    sub_49 = sub_50;
  } else {
    sub_49 = v_1321;
  };
  v_1311 = (controller_pc_failed_recovered&&false);
  v_1310 = !(controller_pc_failed_recovered);
  sub_70 = (v_1310&&false);
  if (controller_ck_47_1) {
    sub_69 = v_1311;
  } else {
    sub_69 = sub_70;
  };
  sub_71 = false;
  if (controller_c_pc) {
    sub_68 = sub_69;
    sub_72 = sub_71;
  } else {
    sub_68 = sub_71;
    sub_72 = sub_69;
  };
  if (controller_ck_45_1) {
    sub_67 = sub_72;
  } else {
    sub_67 = sub_68;
  };
  if (controller_door_failed_recovered) {
    v_1312 = false;
    sub_66 = sub_67;
  } else {
    v_1312 = sub_67;
    sub_66 = false;
  };
  if (controller_ck_42_1) {
    sub_65 = v_1312;
  } else {
    sub_65 = sub_66;
  };
  sub_73 = sub_67;
  if (controller_c_door) {
    v_1313 = sub_73;
    sub_64 = sub_65;
  } else {
    v_1313 = sub_65;
    sub_64 = sub_73;
  };
  if (controller_ck_40_1) {
    sub_63 = v_1313;
  } else {
    sub_63 = sub_64;
  };
  if (controller_window_failed_recovered) {
    v_1314 = false;
    sub_74 = sub_63;
  } else {
    v_1314 = sub_63;
    sub_74 = false;
  };
  if (controller_ck_57_1) {
    v_1315 = v_1314;
  } else {
    v_1315 = sub_74;
  };
  if (controller_c_window) {
    sub_62 = sub_63;
  } else {
    sub_62 = v_1315;
  };
  if (controller_cleaner) {
    sub_48 = sub_49;
    sub_75 = sub_62;
  } else {
    sub_48 = sub_62;
    sub_75 = sub_49;
  };
  if (controller_ck_37_1) {
    sub_47 = sub_75;
  } else {
    sub_47 = sub_48;
  };
  sub_46 = sub_47;
  if (controller_v_277) {
    sub_45 = false;
  } else {
    sub_45 = sub_46;
  };
  if (controller_ck_37_1) {
    sub_77 = sub_48;
  } else {
    sub_77 = sub_75;
  };
  sub_76 = sub_77;
  if (controller_v_277) {
    v_1322 = sub_46;
  } else {
    v_1322 = sub_76;
  };
  if (controller_v_276) {
    sub_44 = v_1322;
  } else {
    sub_44 = sub_45;
  };
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  if (controller_air_failed_recovered) {
    v_1334 = sub_39;
    sub_3 = sub_4;
  } else {
    v_1334 = sub_4;
    sub_3 = sub_39;
  };
  if (controller_ck_52_1) {
    sub_2 = v_1334;
  } else {
    sub_2 = sub_3;
  };
  if (controller_ck_45_1) {
    sub_93 = sub_19;
  } else {
    sub_93 = sub_24;
  };
  sub_92 = sub_93;
  if (controller_door_failed_recovered) {
    v_1304 = false;
    sub_95 = sub_93;
  } else {
    v_1304 = sub_93;
    sub_95 = false;
  };
  if (controller_ck_42_1) {
    sub_94 = v_1304;
  } else {
    sub_94 = sub_95;
  };
  if (controller_c_door) {
    v_1305 = sub_94;
    sub_91 = sub_92;
  } else {
    v_1305 = sub_92;
    sub_91 = sub_94;
  };
  if (controller_ck_40_1) {
    sub_90 = v_1305;
  } else {
    sub_90 = sub_91;
  };
  sub_89 = sub_90;
  sub_97 = sub_94;
  if (controller_window_failed_recovered) {
    v_1306 = sub_97;
    sub_96 = sub_90;
  } else {
    v_1306 = sub_90;
    sub_96 = sub_97;
  };
  if (controller_ck_57_1) {
    v_1307 = v_1306;
  } else {
    v_1307 = sub_96;
  };
  if (controller_c_window) {
    sub_88 = sub_89;
  } else {
    sub_88 = v_1307;
  };
  sub_87 = sub_88;
  sub_86 = sub_87;
  sub_85 = sub_86;
  if (controller_window_failed_recovered) {
    v_1302 = false;
    sub_102 = sub_90;
  } else {
    v_1302 = sub_90;
    sub_102 = false;
  };
  if (controller_ck_57_1) {
    v_1303 = v_1302;
  } else {
    v_1303 = sub_102;
  };
  if (controller_c_window) {
    sub_101 = v_1303;
  } else {
    sub_101 = sub_89;
  };
  sub_100 = sub_101;
  sub_99 = sub_100;
  sub_98 = sub_99;
  if (controller_blind_failed_recovered) {
    v_1308 = sub_98;
    sub_84 = sub_85;
  } else {
    v_1308 = sub_85;
    sub_84 = sub_98;
  };
  if (controller_ck_72_1) {
    sub_83 = v_1308;
  } else {
    sub_83 = sub_84;
  };
  sub_82 = sub_83;
  sub_81 = sub_82;
  sub_80 = sub_81;
  if (controller_ck_45_1) {
    sub_118 = sub_68;
  } else {
    sub_118 = sub_72;
  };
  if (controller_door_failed_recovered) {
    v_1296 = false;
    sub_117 = sub_118;
  } else {
    v_1296 = sub_118;
    sub_117 = false;
  };
  if (controller_ck_42_1) {
    sub_116 = v_1296;
  } else {
    sub_116 = sub_117;
  };
  sub_119 = sub_118;
  if (controller_c_door) {
    v_1297 = sub_119;
    sub_115 = sub_116;
  } else {
    v_1297 = sub_116;
    sub_115 = sub_119;
  };
  if (controller_ck_40_1) {
    sub_114 = v_1297;
  } else {
    sub_114 = sub_115;
  };
  if (controller_window_failed_recovered) {
    v_1298 = false;
    sub_120 = sub_114;
  } else {
    v_1298 = sub_114;
    sub_120 = false;
  };
  if (controller_ck_57_1) {
    v_1299 = v_1298;
  } else {
    v_1299 = sub_120;
  };
  if (controller_c_window) {
    sub_113 = sub_114;
  } else {
    sub_113 = v_1299;
  };
  if (controller_ck_45_1) {
    sub_125 = sub_55;
  } else {
    sub_125 = sub_59;
  };
  sub_124 = sub_125;
  sub_123 = sub_124;
  sub_122 = sub_123;
  sub_121 = sub_122;
  if (controller_cleaner) {
    v_1300 = sub_121;
    sub_112 = sub_113;
  } else {
    v_1300 = sub_113;
    sub_112 = sub_121;
  };
  if (controller_ck_37_1) {
    sub_111 = v_1300;
  } else {
    sub_111 = sub_112;
  };
  sub_110 = sub_111;
  sub_130 = sub_92;
  sub_129 = sub_130;
  sub_128 = sub_129;
  if (controller_cleaner) {
    v_1295 = sub_128;
    sub_127 = false;
  } else {
    v_1295 = false;
    sub_127 = sub_128;
  };
  if (controller_ck_37_1) {
    sub_126 = v_1295;
  } else {
    sub_126 = sub_127;
  };
  if (controller_v_277) {
    sub_109 = sub_126;
  } else {
    sub_109 = sub_110;
  };
  if (controller_door_failed_recovered) {
    v = false;
    sub_138 = sub_125;
  } else {
    v = sub_125;
    sub_138 = false;
  };
  if (controller_ck_42_1) {
    sub_137 = v;
  } else {
    sub_137 = sub_138;
  };
  if (controller_c_door) {
    v_1291 = sub_124;
    sub_136 = sub_137;
  } else {
    v_1291 = sub_137;
    sub_136 = sub_124;
  };
  if (controller_ck_40_1) {
    sub_135 = v_1291;
  } else {
    sub_135 = sub_136;
  };
  if (controller_window_failed_recovered) {
    v_1292 = false;
    sub_139 = sub_135;
  } else {
    v_1292 = sub_135;
    sub_139 = false;
  };
  if (controller_ck_57_1) {
    v_1293 = v_1292;
  } else {
    v_1293 = sub_139;
  };
  if (controller_c_window) {
    sub_134 = sub_135;
  } else {
    sub_134 = v_1293;
  };
  if (controller_cleaner) {
    v_1294 = sub_121;
    sub_133 = sub_134;
  } else {
    v_1294 = sub_134;
    sub_133 = sub_121;
  };
  if (controller_ck_37_1) {
    sub_132 = v_1294;
  } else {
    sub_132 = sub_133;
  };
  sub_131 = sub_132;
  if (controller_v_277) {
    v_1301 = sub_110;
  } else {
    v_1301 = sub_131;
  };
  if (controller_v_276) {
    sub_108 = v_1301;
  } else {
    sub_108 = sub_109;
  };
  sub_107 = sub_108;
  sub_106 = sub_107;
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  if (controller_air_failed_recovered) {
    v_1309 = sub_103;
    sub_79 = sub_80;
  } else {
    v_1309 = sub_80;
    sub_79 = sub_103;
  };
  if (controller_ck_52_1) {
    sub_78 = v_1309;
  } else {
    sub_78 = sub_79;
  };
  if (controller_worker) {
    v_1335 = sub_78;
    sub_1 = sub_2;
  } else {
    v_1335 = sub_2;
    sub_1 = sub_78;
  };
  if (controller_ck_35_1) {
    sub_0 = v_1335;
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
  int controller_pnr_22, int controller_ck_35_1, int controller_pnr_21,
  int controller_ck_37_1, int controller_pnr_20, int controller_ck_40_1,
  int controller_pnr_19, int controller_ck_42_1, int controller_pnr_18,
  int controller_ck_45_1, int controller_pnr_17, int controller_ck_47_1,
  int controller_pnr_16, int controller_v_277, int controller_v_276,
  int controller_pnr_15, int controller_ck_52_1, int controller_pnr_14,
  int controller_ck_55_1, int controller_pnr_13, int controller_ck_57_1,
  int controller_pnr_12, int controller_ck_60_1, int controller_pnr_11,
  int controller_ck_62_1, int controller_pnr_10, int controller_ck_65_1,
  int controller_pnr_9, int controller_ck_67_1, int controller_pnr_8,
  int controller_ck_70_1, int controller_pnr_7, int controller_ck_72_1,
  int controller_pnr, int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_window_out* _out) {
  
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
  sub_23 = p_controller_c_window;
  if (controller_pc_failed_recovered) {
    v_1362 = false;
    sub_22 = sub_23;
  } else {
    v_1362 = sub_23;
    sub_22 = false;
  };
  if (controller_ck_47_1) {
    sub_21 = v_1362;
  } else {
    sub_21 = sub_22;
  };
  sub_24 = sub_23;
  if (controller_c_pc) {
    sub_20 = sub_21;
    sub_25 = sub_24;
  } else {
    sub_20 = sub_24;
    sub_25 = sub_21;
  };
  if (controller_ck_45_1) {
    sub_19 = sub_25;
  } else {
    sub_19 = sub_20;
  };
  if (controller_door_failed_recovered) {
    v_1363 = false;
    sub_18 = sub_19;
  } else {
    v_1363 = sub_19;
    sub_18 = false;
  };
  if (controller_ck_42_1) {
    sub_17 = v_1363;
  } else {
    sub_17 = sub_18;
  };
  sub_26 = sub_19;
  if (controller_c_door) {
    sub_16 = sub_17;
    sub_27 = sub_26;
  } else {
    sub_16 = sub_26;
    sub_27 = sub_17;
  };
  if (controller_ck_40_1) {
    sub_15 = sub_27;
  } else {
    sub_15 = sub_16;
  };
  v_1358 = !(controller_pc_failed_recovered);
  v_1359 = (v_1358||false);
  sub_35 = (controller_pc_failed_recovered||false);
  if (controller_ck_47_1) {
    sub_34 = v_1359;
  } else {
    sub_34 = sub_35;
  };
  sub_36 = true;
  if (controller_c_pc) {
    sub_33 = sub_34;
    sub_37 = sub_36;
  } else {
    sub_33 = sub_36;
    sub_37 = sub_34;
  };
  if (controller_ck_45_1) {
    sub_32 = sub_37;
  } else {
    sub_32 = sub_33;
  };
  if (controller_door_failed_recovered) {
    v_1360 = false;
    sub_31 = sub_32;
  } else {
    v_1360 = sub_32;
    sub_31 = false;
  };
  if (controller_ck_42_1) {
    sub_30 = v_1360;
  } else {
    sub_30 = sub_31;
  };
  sub_38 = sub_32;
  if (controller_c_door) {
    v_1361 = sub_38;
    sub_29 = sub_30;
  } else {
    v_1361 = sub_30;
    sub_29 = sub_38;
  };
  if (controller_ck_40_1) {
    sub_28 = v_1361;
  } else {
    sub_28 = sub_29;
  };
  if (controller_window_failed_recovered) {
    v_1364 = sub_28;
    sub_14 = sub_15;
  } else {
    v_1364 = sub_15;
    sub_14 = sub_28;
  };
  if (controller_ck_57_1) {
    sub_13 = v_1364;
  } else {
    sub_13 = sub_14;
  };
  if (controller_ck_40_1) {
    sub_41 = sub_16;
  } else {
    sub_41 = sub_27;
  };
  if (controller_door_failed_recovered) {
    v_1355 = sub_32;
    sub_45 = sub_19;
  } else {
    v_1355 = sub_19;
    sub_45 = sub_32;
  };
  if (controller_ck_42_1) {
    sub_44 = v_1355;
  } else {
    sub_44 = sub_45;
  };
  if (controller_c_door) {
    v_1356 = sub_17;
    sub_43 = sub_44;
  } else {
    v_1356 = sub_44;
    sub_43 = sub_17;
  };
  if (controller_ck_40_1) {
    sub_42 = v_1356;
  } else {
    sub_42 = sub_43;
  };
  if (controller_window_failed_recovered) {
    v_1357 = sub_42;
    sub_40 = sub_41;
  } else {
    v_1357 = sub_41;
    sub_40 = sub_42;
  };
  if (controller_ck_57_1) {
    sub_39 = v_1357;
  } else {
    sub_39 = sub_40;
  };
  if (controller_cleaner) {
    v_1365 = sub_39;
    sub_12 = sub_13;
  } else {
    v_1365 = sub_13;
    sub_12 = sub_39;
  };
  if (controller_ck_37_1) {
    sub_11 = v_1365;
  } else {
    sub_11 = sub_12;
  };
  sub_10 = sub_11;
  sub_9 = sub_10;
  v_1351 = (controller_pc_failed_recovered&&false);
  v_1350 = !(controller_pc_failed_recovered);
  sub_58 = (v_1350&&false);
  if (controller_ck_47_1) {
    sub_57 = v_1351;
  } else {
    sub_57 = sub_58;
  };
  sub_59 = false;
  if (controller_c_pc) {
    sub_56 = sub_57;
    sub_60 = sub_59;
  } else {
    sub_56 = sub_59;
    sub_60 = sub_57;
  };
  if (controller_ck_45_1) {
    sub_55 = sub_60;
  } else {
    sub_55 = sub_56;
  };
  sub_54 = sub_55;
  if (controller_door_failed_recovered) {
    v_1349 = false;
    sub_62 = sub_55;
  } else {
    v_1349 = sub_55;
    sub_62 = false;
  };
  if (controller_ck_42_1) {
    sub_61 = v_1349;
  } else {
    sub_61 = sub_62;
  };
  if (controller_c_door) {
    v_1352 = sub_61;
    sub_53 = sub_54;
  } else {
    v_1352 = sub_54;
    sub_53 = sub_61;
  };
  if (controller_ck_40_1) {
    sub_52 = v_1352;
  } else {
    sub_52 = sub_53;
  };
  if (controller_window_failed_recovered) {
    v_1353 = sub_52;
    sub_51 = sub_41;
  } else {
    v_1353 = sub_41;
    sub_51 = sub_52;
  };
  if (controller_ck_57_1) {
    sub_50 = v_1353;
  } else {
    sub_50 = sub_51;
  };
  if (controller_cleaner) {
    v_1354 = sub_50;
    sub_49 = sub_13;
  } else {
    v_1354 = sub_13;
    sub_49 = sub_50;
  };
  if (controller_ck_37_1) {
    sub_48 = v_1354;
  } else {
    sub_48 = sub_49;
  };
  sub_47 = sub_48;
  sub_46 = sub_47;
  if (controller_blind_failed_recovered) {
    v_1366 = sub_46;
    sub_8 = sub_9;
  } else {
    v_1366 = sub_9;
    sub_8 = sub_46;
  };
  if (controller_ck_72_1) {
    sub_7 = v_1366;
  } else {
    sub_7 = sub_8;
  };
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_71 = sub_13;
  sub_70 = sub_71;
  if (controller_v_277) {
    sub_69 = false;
  } else {
    sub_69 = sub_70;
  };
  if (controller_v_276) {
    sub_68 = sub_70;
  } else {
    sub_68 = sub_69;
  };
  sub_67 = sub_68;
  sub_66 = sub_67;
  sub_65 = sub_66;
  sub_64 = sub_65;
  sub_63 = sub_64;
  if (controller_air_failed_recovered) {
    v_1367 = sub_63;
    sub_3 = sub_4;
  } else {
    v_1367 = sub_4;
    sub_3 = sub_63;
  };
  if (controller_ck_52_1) {
    sub_2 = v_1367;
  } else {
    sub_2 = sub_3;
  };
  if (controller_ck_45_1) {
    sub_87 = sub_20;
  } else {
    sub_87 = sub_25;
  };
  sub_86 = sub_87;
  if (controller_door_failed_recovered) {
    v_1345 = false;
    sub_89 = sub_87;
  } else {
    v_1345 = sub_87;
    sub_89 = false;
  };
  if (controller_ck_42_1) {
    sub_88 = v_1345;
  } else {
    sub_88 = sub_89;
  };
  if (controller_c_door) {
    sub_85 = sub_86;
    sub_90 = sub_88;
  } else {
    sub_85 = sub_88;
    sub_90 = sub_86;
  };
  if (controller_ck_40_1) {
    sub_84 = sub_90;
  } else {
    sub_84 = sub_85;
  };
  if (controller_ck_45_1) {
    sub_95 = sub_33;
  } else {
    sub_95 = sub_37;
  };
  if (controller_door_failed_recovered) {
    v_1343 = sub_95;
    sub_94 = sub_87;
  } else {
    v_1343 = sub_87;
    sub_94 = sub_95;
  };
  if (controller_ck_42_1) {
    sub_93 = v_1343;
  } else {
    sub_93 = sub_94;
  };
  if (controller_c_door) {
    v_1344 = sub_88;
    sub_92 = sub_93;
  } else {
    v_1344 = sub_93;
    sub_92 = sub_88;
  };
  if (controller_ck_40_1) {
    sub_91 = v_1344;
  } else {
    sub_91 = sub_92;
  };
  if (controller_window_failed_recovered) {
    v_1346 = sub_91;
    sub_83 = sub_84;
  } else {
    v_1346 = sub_84;
    sub_83 = sub_91;
  };
  if (controller_ck_57_1) {
    sub_82 = v_1346;
  } else {
    sub_82 = sub_83;
  };
  sub_81 = sub_82;
  sub_80 = sub_81;
  sub_79 = sub_80;
  if (controller_ck_45_1) {
    sub_104 = sub_56;
  } else {
    sub_104 = sub_60;
  };
  sub_103 = sub_104;
  if (controller_door_failed_recovered) {
    v_1340 = false;
    sub_106 = sub_104;
  } else {
    v_1340 = sub_104;
    sub_106 = false;
  };
  if (controller_ck_42_1) {
    sub_105 = v_1340;
  } else {
    sub_105 = sub_106;
  };
  if (controller_c_door) {
    v_1341 = sub_105;
    sub_102 = sub_103;
  } else {
    v_1341 = sub_103;
    sub_102 = sub_105;
  };
  if (controller_ck_40_1) {
    sub_101 = v_1341;
  } else {
    sub_101 = sub_102;
  };
  if (controller_window_failed_recovered) {
    v_1342 = sub_101;
    sub_100 = sub_84;
  } else {
    v_1342 = sub_84;
    sub_100 = sub_101;
  };
  if (controller_ck_57_1) {
    sub_99 = v_1342;
  } else {
    sub_99 = sub_100;
  };
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  if (controller_blind_failed_recovered) {
    v_1347 = sub_96;
    sub_78 = sub_79;
  } else {
    v_1347 = sub_79;
    sub_78 = sub_96;
  };
  if (controller_ck_72_1) {
    sub_77 = v_1347;
  } else {
    sub_77 = sub_78;
  };
  sub_76 = sub_77;
  sub_75 = sub_76;
  sub_74 = sub_75;
  if (controller_ck_40_1) {
    sub_119 = sub_85;
  } else {
    sub_119 = sub_90;
  };
  if (controller_door_failed_recovered) {
    v_1336 = false;
    sub_123 = sub_95;
  } else {
    v_1336 = sub_95;
    sub_123 = false;
  };
  if (controller_ck_42_1) {
    sub_122 = v_1336;
  } else {
    sub_122 = sub_123;
  };
  sub_124 = sub_95;
  if (controller_c_door) {
    v_1337 = sub_124;
    sub_121 = sub_122;
  } else {
    v_1337 = sub_122;
    sub_121 = sub_124;
  };
  if (controller_ck_40_1) {
    sub_120 = v_1337;
  } else {
    sub_120 = sub_121;
  };
  if (controller_window_failed_recovered) {
    v_1338 = sub_120;
    sub_118 = sub_119;
  } else {
    v_1338 = sub_119;
    sub_118 = sub_120;
  };
  if (controller_ck_57_1) {
    sub_117 = v_1338;
  } else {
    sub_117 = sub_118;
  };
  sub_126 = sub_86;
  sub_125 = sub_126;
  if (controller_cleaner) {
    v_1339 = sub_125;
    sub_116 = sub_117;
  } else {
    v_1339 = sub_117;
    sub_116 = sub_125;
  };
  if (controller_ck_37_1) {
    sub_115 = v_1339;
  } else {
    sub_115 = sub_116;
  };
  sub_114 = sub_115;
  if (controller_cleaner) {
    v = sub_125;
    sub_128 = false;
  } else {
    v = false;
    sub_128 = sub_125;
  };
  if (controller_ck_37_1) {
    sub_127 = v;
  } else {
    sub_127 = sub_128;
  };
  if (controller_v_277) {
    sub_113 = sub_127;
  } else {
    sub_113 = sub_114;
  };
  if (controller_v_276) {
    sub_112 = sub_114;
  } else {
    sub_112 = sub_113;
  };
  sub_111 = sub_112;
  sub_110 = sub_111;
  sub_109 = sub_110;
  sub_108 = sub_109;
  sub_107 = sub_108;
  if (controller_air_failed_recovered) {
    v_1348 = sub_107;
    sub_73 = sub_74;
  } else {
    v_1348 = sub_74;
    sub_73 = sub_107;
  };
  if (controller_ck_52_1) {
    sub_72 = v_1348;
  } else {
    sub_72 = sub_73;
  };
  if (controller_worker) {
    v_1368 = sub_72;
    sub_1 = sub_2;
  } else {
    v_1368 = sub_2;
    sub_1 = sub_72;
  };
  if (controller_ck_35_1) {
    sub_0 = v_1368;
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
  int controller_pnr_22, int controller_ck_35_1, int controller_pnr_21,
  int controller_ck_37_1, int controller_pnr_20, int controller_ck_40_1,
  int controller_pnr_19, int controller_ck_42_1, int controller_pnr_18,
  int controller_ck_45_1, int controller_pnr_17, int controller_ck_47_1,
  int controller_pnr_16, int controller_v_277, int controller_v_276,
  int controller_pnr_15, int controller_ck_52_1, int controller_pnr_14,
  int controller_ck_55_1, int controller_pnr_13, int controller_ck_57_1,
  int controller_pnr_12, int controller_ck_60_1, int controller_pnr_11,
  int controller_ck_62_1, int controller_pnr_10, int controller_ck_65_1,
  int controller_pnr_9, int controller_ck_67_1, int controller_pnr_8,
  int controller_ck_70_1, int controller_pnr_7, int controller_ck_72_1,
  int controller_pnr, int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_door,
  Controller_controller__controller_controller_controller_c_pc_out* _out) {
  
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
  v_1374 = !(controller_pc_failed_recovered);
  sub_20 = p_controller_c_pc;
  v_1375 = (v_1374&&sub_20);
  sub_19 = (controller_pc_failed_recovered&&sub_20);
  if (controller_ck_47_1) {
    sub_18 = v_1375;
  } else {
    sub_18 = sub_19;
  };
  v_1373 = (controller_pc_failed_recovered||sub_20);
  v_1372 = !(controller_pc_failed_recovered);
  sub_22 = (v_1372||sub_20);
  if (controller_ck_47_1) {
    sub_21 = v_1373;
  } else {
    sub_21 = sub_22;
  };
  if (controller_ck_45_1) {
    sub_17 = sub_21;
  } else {
    sub_17 = sub_18;
  };
  if (controller_door_failed_recovered) {
    v_1376 = false;
    sub_16 = sub_17;
  } else {
    v_1376 = sub_17;
    sub_16 = false;
  };
  if (controller_ck_42_1) {
    sub_15 = v_1376;
  } else {
    sub_15 = sub_16;
  };
  sub_23 = sub_17;
  if (controller_c_door) {
    sub_14 = sub_15;
    sub_24 = sub_23;
  } else {
    sub_14 = sub_23;
    sub_24 = sub_15;
  };
  if (controller_ck_40_1) {
    sub_13 = sub_24;
  } else {
    sub_13 = sub_14;
  };
  sub_12 = sub_13;
  if (controller_ck_40_1) {
    sub_26 = sub_14;
  } else {
    sub_26 = sub_24;
  };
  sub_25 = sub_26;
  if (controller_cleaner) {
    v_1377 = sub_25;
    sub_11 = sub_12;
  } else {
    v_1377 = sub_12;
    sub_11 = sub_25;
  };
  if (controller_ck_37_1) {
    sub_10 = v_1377;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_35 = sub_12;
  sub_34 = sub_35;
  if (controller_v_277) {
    sub_33 = false;
  } else {
    sub_33 = sub_34;
  };
  if (controller_v_276) {
    sub_32 = sub_34;
  } else {
    sub_32 = sub_33;
  };
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  if (controller_air_failed_recovered) {
    v_1378 = sub_27;
    sub_3 = sub_4;
  } else {
    v_1378 = sub_4;
    sub_3 = sub_27;
  };
  if (controller_ck_52_1) {
    sub_2 = v_1378;
  } else {
    sub_2 = sub_3;
  };
  if (controller_ck_45_1) {
    sub_49 = sub_18;
  } else {
    sub_49 = sub_21;
  };
  sub_48 = sub_49;
  if (controller_door_failed_recovered) {
    v_1370 = false;
    sub_51 = sub_49;
  } else {
    v_1370 = sub_49;
    sub_51 = false;
  };
  if (controller_ck_42_1) {
    sub_50 = v_1370;
  } else {
    sub_50 = sub_51;
  };
  if (controller_c_door) {
    sub_47 = sub_48;
    sub_52 = sub_50;
  } else {
    sub_47 = sub_50;
    sub_52 = sub_48;
  };
  if (controller_ck_40_1) {
    sub_46 = sub_52;
  } else {
    sub_46 = sub_47;
  };
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (controller_ck_40_1) {
    sub_64 = sub_47;
  } else {
    sub_64 = sub_52;
  };
  sub_63 = sub_64;
  sub_66 = sub_48;
  sub_65 = sub_66;
  if (controller_cleaner) {
    v_1369 = sub_65;
    sub_62 = sub_63;
  } else {
    v_1369 = sub_63;
    sub_62 = sub_65;
  };
  if (controller_ck_37_1) {
    sub_61 = v_1369;
  } else {
    sub_61 = sub_62;
  };
  sub_60 = sub_61;
  if (controller_cleaner) {
    v = sub_65;
    sub_68 = false;
  } else {
    v = false;
    sub_68 = sub_65;
  };
  if (controller_ck_37_1) {
    sub_67 = v;
  } else {
    sub_67 = sub_68;
  };
  if (controller_v_277) {
    sub_59 = sub_67;
  } else {
    sub_59 = sub_60;
  };
  if (controller_v_276) {
    sub_58 = sub_60;
  } else {
    sub_58 = sub_59;
  };
  sub_57 = sub_58;
  sub_56 = sub_57;
  sub_55 = sub_56;
  sub_54 = sub_55;
  sub_53 = sub_54;
  if (controller_air_failed_recovered) {
    v_1371 = sub_53;
    sub_37 = sub_38;
  } else {
    v_1371 = sub_38;
    sub_37 = sub_53;
  };
  if (controller_ck_52_1) {
    sub_36 = v_1371;
  } else {
    sub_36 = sub_37;
  };
  if (controller_worker) {
    v_1379 = sub_36;
    sub_1 = sub_2;
  } else {
    v_1379 = sub_2;
    sub_1 = sub_36;
  };
  if (controller_ck_35_1) {
    sub_0 = v_1379;
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
  int controller_pnr_22, int controller_ck_35_1, int controller_pnr_21,
  int controller_ck_37_1, int controller_pnr_20, int controller_ck_40_1,
  int controller_pnr_19, int controller_ck_42_1, int controller_pnr_18,
  int controller_ck_45_1, int controller_pnr_17, int controller_ck_47_1,
  int controller_pnr_16, int controller_v_277, int controller_v_276,
  int controller_pnr_15, int controller_ck_52_1, int controller_pnr_14,
  int controller_ck_55_1, int controller_pnr_13, int controller_ck_57_1,
  int controller_pnr_12, int controller_ck_60_1, int controller_pnr_11,
  int controller_ck_62_1, int controller_pnr_10, int controller_ck_65_1,
  int controller_pnr_9, int controller_ck_67_1, int controller_pnr_8,
  int controller_ck_70_1, int controller_pnr_7, int controller_ck_72_1,
  int controller_pnr, int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door,
  Controller_controller__controller_controller_controller_c_door_out* _out) {
  
  int v_1386;
  int v_1385;
  int v_1384;
  int v_1383;
  int v_1382;
  int v_1381;
  int v_1380;
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
  sub_17 = p_controller_c_door;
  sub_16 = sub_17;
  sub_18 = false;
  if (controller_door_failed_recovered) {
    v_1383 = sub_18;
    sub_15 = sub_16;
  } else {
    v_1383 = sub_16;
    sub_15 = sub_18;
  };
  if (controller_ck_42_1) {
    sub_14 = v_1383;
  } else {
    sub_14 = sub_15;
  };
  sub_21 = true;
  if (controller_door_failed_recovered) {
    v_1382 = sub_21;
    sub_20 = sub_16;
  } else {
    v_1382 = sub_16;
    sub_20 = sub_21;
  };
  if (controller_ck_42_1) {
    sub_19 = v_1382;
  } else {
    sub_19 = sub_20;
  };
  if (controller_ck_40_1) {
    sub_13 = sub_19;
  } else {
    sub_13 = sub_14;
  };
  sub_12 = sub_13;
  if (controller_ck_40_1) {
    sub_23 = sub_14;
  } else {
    sub_23 = sub_19;
  };
  sub_22 = sub_23;
  if (controller_cleaner) {
    v_1384 = sub_22;
    sub_11 = sub_12;
  } else {
    v_1384 = sub_12;
    sub_11 = sub_22;
  };
  if (controller_ck_37_1) {
    sub_10 = v_1384;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_32 = sub_12;
  sub_31 = sub_32;
  if (controller_v_277) {
    sub_30 = false;
  } else {
    sub_30 = sub_31;
  };
  if (controller_v_276) {
    sub_29 = sub_31;
  } else {
    sub_29 = sub_30;
  };
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  if (controller_air_failed_recovered) {
    v_1385 = sub_24;
    sub_3 = sub_4;
  } else {
    v_1385 = sub_4;
    sub_3 = sub_24;
  };
  if (controller_ck_52_1) {
    sub_2 = v_1385;
  } else {
    sub_2 = sub_3;
  };
  sub_41 = sub_22;
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_53 = sub_16;
  sub_52 = sub_53;
  if (controller_cleaner) {
    v_1380 = sub_52;
    sub_51 = sub_12;
  } else {
    v_1380 = sub_12;
    sub_51 = sub_52;
  };
  if (controller_ck_37_1) {
    sub_50 = v_1380;
  } else {
    sub_50 = sub_51;
  };
  sub_49 = sub_50;
  if (controller_cleaner) {
    v = sub_52;
    sub_55 = false;
  } else {
    v = false;
    sub_55 = sub_52;
  };
  if (controller_ck_37_1) {
    sub_54 = v;
  } else {
    sub_54 = sub_55;
  };
  if (controller_v_277) {
    sub_48 = sub_54;
  } else {
    sub_48 = sub_49;
  };
  if (controller_v_276) {
    sub_47 = sub_49;
  } else {
    sub_47 = sub_48;
  };
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  if (controller_air_failed_recovered) {
    v_1381 = sub_42;
    sub_34 = sub_35;
  } else {
    v_1381 = sub_35;
    sub_34 = sub_42;
  };
  if (controller_ck_52_1) {
    sub_33 = v_1381;
  } else {
    sub_33 = sub_34;
  };
  if (controller_worker) {
    v_1386 = sub_33;
    sub_1 = sub_2;
  } else {
    v_1386 = sub_2;
    sub_1 = sub_33;
  };
  if (controller_ck_35_1) {
    sub_0 = v_1386;
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
                                                       int controller_pnr_22,
                                                       int controller_ck_35_1,
                                                       int controller_pnr_21,
                                                       int controller_ck_37_1,
                                                       int controller_pnr_20,
                                                       int controller_ck_40_1,
                                                       int controller_pnr_19,
                                                       int controller_ck_42_1,
                                                       int controller_pnr_18,
                                                       int controller_ck_45_1,
                                                       int controller_pnr_17,
                                                       int controller_ck_47_1,
                                                       int controller_pnr_16,
                                                       int controller_v_277,
                                                       int controller_v_276,
                                                       int controller_pnr_15,
                                                       int controller_ck_52_1,
                                                       int controller_pnr_14,
                                                       int controller_ck_55_1,
                                                       int controller_pnr_13,
                                                       int controller_ck_57_1,
                                                       int controller_pnr_12,
                                                       int controller_ck_60_1,
                                                       int controller_pnr_11,
                                                       int controller_ck_62_1,
                                                       int controller_pnr_10,
                                                       int controller_ck_65_1,
                                                       int controller_pnr_9,
                                                       int controller_ck_67_1,
                                                       int controller_pnr_8,
                                                       int controller_ck_70_1,
                                                       int controller_pnr_7,
                                                       int controller_ck_72_1,
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
  controller_window_failed_recovered, controller_ck_1, controller_pnr_22,
  controller_ck_35_1, controller_pnr_21, controller_ck_37_1,
  controller_pnr_20, controller_ck_40_1, controller_pnr_19,
  controller_ck_42_1, controller_pnr_18, controller_ck_45_1,
  controller_pnr_17, controller_ck_47_1, controller_pnr_16, controller_v_277,
  controller_v_276, controller_pnr_15, controller_ck_52_1, controller_pnr_14,
  controller_ck_55_1, controller_pnr_13, controller_ck_57_1,
  controller_pnr_12, controller_ck_60_1, controller_pnr_11,
  controller_ck_62_1, controller_pnr_10, controller_ck_65_1,
  controller_pnr_9, controller_ck_67_1, controller_pnr_8, controller_ck_70_1,
  controller_pnr_7, controller_ck_72_1, controller_pnr,
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
                                                                    controller_pnr_22,
                                                                    controller_ck_35_1,
                                                                    controller_pnr_21,
                                                                    controller_ck_37_1,
                                                                    controller_pnr_20,
                                                                    controller_ck_40_1,
                                                                    controller_pnr_19,
                                                                    controller_ck_42_1,
                                                                    controller_pnr_18,
                                                                    controller_ck_45_1,
                                                                    controller_pnr_17,
                                                                    controller_ck_47_1,
                                                                    controller_pnr_16,
                                                                    controller_v_277,
                                                                    controller_v_276,
                                                                    controller_pnr_15,
                                                                    controller_ck_52_1,
                                                                    controller_pnr_14,
                                                                    controller_ck_55_1,
                                                                    controller_pnr_13,
                                                                    controller_ck_57_1,
                                                                    controller_pnr_12,
                                                                    controller_ck_60_1,
                                                                    controller_pnr_11,
                                                                    controller_ck_62_1,
                                                                    controller_pnr_10,
                                                                    controller_ck_65_1,
                                                                    controller_pnr_9,
                                                                    controller_ck_67_1,
                                                                    controller_pnr_8,
                                                                    controller_ck_70_1,
                                                                    controller_pnr_7,
                                                                    controller_ck_72_1,
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
  controller_window_failed_recovered, controller_ck_1, controller_pnr_22,
  controller_ck_35_1, controller_pnr_21, controller_ck_37_1,
  controller_pnr_20, controller_ck_40_1, controller_pnr_19,
  controller_ck_42_1, controller_pnr_18, controller_ck_45_1,
  controller_pnr_17, controller_ck_47_1, controller_pnr_16, controller_v_277,
  controller_v_276, controller_pnr_15, controller_ck_52_1, controller_pnr_14,
  controller_ck_55_1, controller_pnr_13, controller_ck_57_1,
  controller_pnr_12, controller_ck_60_1, controller_pnr_11,
  controller_ck_62_1, controller_pnr_10, controller_ck_65_1,
  controller_pnr_9, controller_ck_67_1, controller_pnr_8, controller_ck_70_1,
  controller_pnr_7, controller_ck_72_1, controller_pnr,
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
  controller_window_failed_recovered, controller_ck_1, controller_pnr_22,
  controller_ck_35_1, controller_pnr_21, controller_ck_37_1,
  controller_pnr_20, controller_ck_40_1, controller_pnr_19,
  controller_ck_42_1, controller_pnr_18, controller_ck_45_1,
  controller_pnr_17, controller_ck_47_1, controller_pnr_16, controller_v_277,
  controller_v_276, controller_pnr_15, controller_ck_52_1, controller_pnr_14,
  controller_ck_55_1, controller_pnr_13, controller_ck_57_1,
  controller_pnr_12, controller_ck_60_1, controller_pnr_11,
  controller_ck_62_1, controller_pnr_10, controller_ck_65_1,
  controller_pnr_9, controller_ck_67_1, controller_pnr_8, controller_ck_70_1,
  controller_pnr_7, controller_ck_72_1, controller_pnr,
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
  controller_window_failed_recovered, controller_ck_1, controller_pnr_22,
  controller_ck_35_1, controller_pnr_21, controller_ck_37_1,
  controller_pnr_20, controller_ck_40_1, controller_pnr_19,
  controller_ck_42_1, controller_pnr_18, controller_ck_45_1,
  controller_pnr_17, controller_ck_47_1, controller_pnr_16, controller_v_277,
  controller_v_276, controller_pnr_15, controller_ck_52_1, controller_pnr_14,
  controller_ck_55_1, controller_pnr_13, controller_ck_57_1,
  controller_pnr_12, controller_ck_60_1, controller_pnr_11,
  controller_ck_62_1, controller_pnr_10, controller_ck_65_1,
  controller_pnr_9, controller_ck_67_1, controller_pnr_8, controller_ck_70_1,
  controller_pnr_7, controller_ck_72_1, controller_pnr,
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
  controller_window_failed_recovered, controller_ck_1, controller_pnr_22,
  controller_ck_35_1, controller_pnr_21, controller_ck_37_1,
  controller_pnr_20, controller_ck_40_1, controller_pnr_19,
  controller_ck_42_1, controller_pnr_18, controller_ck_45_1,
  controller_pnr_17, controller_ck_47_1, controller_pnr_16, controller_v_277,
  controller_v_276, controller_pnr_15, controller_ck_52_1, controller_pnr_14,
  controller_ck_55_1, controller_pnr_13, controller_ck_57_1,
  controller_pnr_12, controller_ck_60_1, controller_pnr_11,
  controller_ck_62_1, controller_pnr_10, controller_ck_65_1,
  controller_pnr_9, controller_ck_67_1, controller_pnr_8, controller_ck_70_1,
  controller_pnr_7, controller_ck_72_1, controller_pnr,
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
  controller_window_failed_recovered, controller_ck_1, controller_pnr_22,
  controller_ck_35_1, controller_pnr_21, controller_ck_37_1,
  controller_pnr_20, controller_ck_40_1, controller_pnr_19,
  controller_ck_42_1, controller_pnr_18, controller_ck_45_1,
  controller_pnr_17, controller_ck_47_1, controller_pnr_16, controller_v_277,
  controller_v_276, controller_pnr_15, controller_ck_52_1, controller_pnr_14,
  controller_ck_55_1, controller_pnr_13, controller_ck_57_1,
  controller_pnr_12, controller_ck_60_1, controller_pnr_11,
  controller_ck_62_1, controller_pnr_10, controller_ck_65_1,
  controller_pnr_9, controller_ck_67_1, controller_pnr_8, controller_ck_70_1,
  controller_pnr_7, controller_ck_72_1, controller_pnr,
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
  controller_window_failed_recovered, controller_ck_1, controller_pnr_22,
  controller_ck_35_1, controller_pnr_21, controller_ck_37_1,
  controller_pnr_20, controller_ck_40_1, controller_pnr_19,
  controller_ck_42_1, controller_pnr_18, controller_ck_45_1,
  controller_pnr_17, controller_ck_47_1, controller_pnr_16, controller_v_277,
  controller_v_276, controller_pnr_15, controller_ck_52_1, controller_pnr_14,
  controller_ck_55_1, controller_pnr_13, controller_ck_57_1,
  controller_pnr_12, controller_ck_60_1, controller_pnr_11,
  controller_ck_62_1, controller_pnr_10, controller_ck_65_1,
  controller_pnr_9, controller_ck_67_1, controller_pnr_8, controller_ck_70_1,
  controller_pnr_7, controller_ck_72_1, controller_pnr,
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
  controller_window_failed_recovered, controller_ck_1, controller_pnr_22,
  controller_ck_35_1, controller_pnr_21, controller_ck_37_1,
  controller_pnr_20, controller_ck_40_1, controller_pnr_19,
  controller_ck_42_1, controller_pnr_18, controller_ck_45_1,
  controller_pnr_17, controller_ck_47_1, controller_pnr_16, controller_v_277,
  controller_v_276, controller_pnr_15, controller_ck_52_1, controller_pnr_14,
  controller_ck_55_1, controller_pnr_13, controller_ck_57_1,
  controller_pnr_12, controller_ck_60_1, controller_pnr_11,
  controller_ck_62_1, controller_pnr_10, controller_ck_65_1,
  controller_pnr_9, controller_ck_67_1, controller_pnr_8, controller_ck_70_1,
  controller_pnr_7, controller_ck_72_1, controller_pnr,
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
  controller_window_failed_recovered, controller_ck_1, controller_pnr_22,
  controller_ck_35_1, controller_pnr_21, controller_ck_37_1,
  controller_pnr_20, controller_ck_40_1, controller_pnr_19,
  controller_ck_42_1, controller_pnr_18, controller_ck_45_1,
  controller_pnr_17, controller_ck_47_1, controller_pnr_16, controller_v_277,
  controller_v_276, controller_pnr_15, controller_ck_52_1, controller_pnr_14,
  controller_ck_55_1, controller_pnr_13, controller_ck_57_1,
  controller_pnr_12, controller_ck_60_1, controller_pnr_11,
  controller_ck_62_1, controller_pnr_10, controller_ck_65_1,
  controller_pnr_9, controller_ck_67_1, controller_pnr_8, controller_ck_70_1,
  controller_pnr_7, controller_ck_72_1, controller_pnr,
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

