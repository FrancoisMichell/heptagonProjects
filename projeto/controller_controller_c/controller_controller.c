/* --- Generated the 24/7/2018 at 21:21 --- */
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
  int sub_888;
  int sub_889;
  int sub_890;
  int sub_891;
  int sub_892;
  int sub_893;
  int sub_894;
  int sub_895;
  int sub_896;
  int sub_897;
  int sub_898;
  int sub_899;
  int sub_900;
  int sub_901;
  int sub_902;
  int sub_903;
  int sub_904;
  int sub_905;
  int sub_906;
  int sub_907;
  int sub_908;
  int sub_909;
  int sub_910;
  int sub_911;
  int sub_912;
  int sub_913;
  int sub_914;
  int sub_915;
  int sub_916;
  int sub_917;
  int sub_918;
  int sub_919;
  int sub_920;
  int sub_921;
  int sub_922;
  int sub_923;
  int sub_924;
  int sub_925;
  int sub_926;
  int sub_927;
  int sub_928;
  int sub_929;
  int sub_930;
  int sub_931;
  int sub_932;
  int sub_933;
  int sub_934;
  int sub_935;
  int sub_936;
  int sub_937;
  int sub_938;
  int sub_939;
  int sub_940;
  int sub_941;
  int sub_942;
  int sub_943;
  int sub_944;
  int sub_945;
  int sub_946;
  int sub_947;
  int sub_948;
  int sub_949;
  int sub_950;
  int sub_951;
  int sub_952;
  int sub_953;
  int sub_954;
  int sub_955;
  int sub_956;
  int sub_957;
  int sub_958;
  int sub_959;
  int sub_960;
  int sub_961;
  int sub_962;
  int sub_963;
  int sub_964;
  int sub_965;
  int sub_966;
  int sub_967;
  int sub_968;
  int sub_969;
  int sub_970;
  int sub_971;
  int sub_972;
  int sub_973;
  int sub_974;
  int sub_975;
  int sub_976;
  int sub_977;
  int sub_978;
  int sub_979;
  int sub_980;
  int sub_981;
  int sub_982;
  int sub_983;
  int sub_984;
  int sub_985;
  int sub_986;
  int sub_987;
  int sub_988;
  int sub_989;
  int sub_990;
  int sub_991;
  int sub_992;
  int sub_993;
  int sub_994;
  int sub_995;
  int sub_996;
  int sub_997;
  int sub_998;
  int sub_999;
  int sub_1000;
  int sub_1001;
  int sub_1002;
  int sub_1003;
  int sub_1004;
  int sub_1005;
  int sub_1006;
  int sub_1007;
  int sub_1008;
  int sub_1009;
  int sub_1010;
  int sub_1011;
  int sub_1012;
  int sub_1013;
  int sub_1014;
  int sub_1015;
  int sub_1016;
  int sub_1017;
  int sub_1018;
  int sub_1019;
  int sub_1020;
  int sub_1021;
  int sub_1022;
  int sub_1023;
  int sub_1024;
  int sub_1025;
  int sub_1026;
  int sub_1027;
  int sub_1028;
  int sub_1029;
  int sub_1030;
  int sub_1031;
  int sub_1032;
  int sub_1033;
  int sub_1034;
  int sub_1035;
  int sub_1036;
  int sub_1037;
  int sub_1038;
  int sub_1039;
  int sub_1040;
  int sub_1041;
  int sub_1042;
  int sub_1043;
  int sub_1044;
  int sub_1045;
  int sub_1046;
  int sub_1047;
  int sub_1048;
  int sub_1049;
  int sub_1050;
  int sub_1051;
  int sub_1052;
  int sub_1053;
  int sub_1054;
  int sub_1055;
  int sub_1056;
  int sub_1057;
  int sub_1058;
  int sub_1059;
  int sub_1060;
  int sub_1061;
  int sub_1062;
  int sub_1063;
  int sub_1064;
  int sub_1065;
  int sub_1066;
  int sub_1067;
  int sub_1068;
  int sub_1069;
  int sub_1070;
  int sub_1071;
  int sub_1072;
  int sub_1073;
  int sub_1074;
  int sub_1075;
  int sub_1076;
  int sub_1077;
  int sub_1078;
  int sub_1079;
  int sub_1080;
  int sub_1081;
  int sub_1082;
  int sub_1083;
  int sub_1084;
  int sub_1085;
  int sub_1086;
  int sub_1087;
  int sub_1088;
  int sub_1089;
  int sub_1090;
  int sub_1091;
  int sub_1092;
  int sub_1093;
  int sub_1094;
  int sub_1095;
  int sub_1096;
  int sub_1097;
  int sub_1098;
  int sub_1099;
  int sub_1100;
  int sub_1101;
  int sub_1102;
  int sub_1103;
  int sub_1104;
  int sub_1105;
  int sub_1106;
  int sub_1107;
  int sub_1108;
  int sub_1109;
  int sub_1110;
  int sub_1111;
  int sub_1112;
  int sub_1113;
  int sub_1114;
  int sub_1115;
  int sub_1116;
  int sub_1117;
  int sub_1118;
  int sub_1119;
  int sub_1120;
  int sub_1121;
  int sub_1122;
  int sub_1123;
  int sub_1124;
  int sub_1125;
  int sub_1126;
  int sub_1127;
  int sub_1128;
  int sub_1129;
  int sub_1130;
  int sub_1131;
  int sub_1132;
  int sub_1133;
  int sub_1134;
  int sub_1135;
  int sub_1136;
  int sub_1137;
  int sub_1138;
  int sub_1139;
  int sub_1140;
  int sub_1141;
  int sub_1142;
  int sub_1143;
  int sub_1144;
  int sub_1145;
  int sub_1146;
  int sub_1147;
  int sub_1148;
  int sub_1149;
  int sub_1150;
  int sub_1151;
  int sub_1152;
  int sub_1153;
  int sub_1154;
  int sub_1155;
  int sub_1156;
  int sub_1157;
  int sub_1158;
  int sub_1159;
  int sub_1160;
  int sub_1161;
  int sub_1162;
  int sub_1163;
  int sub_1164;
  int sub_1165;
  int sub_1166;
  int sub_1167;
  int sub_1168;
  int sub_1169;
  int sub_1170;
  int sub_1171;
  int sub_1172;
  int sub_1173;
  int sub_1174;
  int sub_1175;
  int sub_1176;
  int sub_1177;
  int sub_1178;
  int sub_1179;
  int sub_1180;
  int sub_1181;
  int sub_1182;
  int sub_1183;
  int sub_1184;
  int sub_1185;
  int sub_1186;
  int sub_1187;
  int sub_1188;
  int sub_1189;
  int sub_1190;
  int sub_1191;
  int sub_1192;
  int sub_1193;
  int sub_1194;
  int sub_1195;
  int sub_1196;
  int sub_1197;
  int sub_1198;
  int sub_1199;
  int sub_1200;
  int sub_1201;
  int sub_1202;
  int sub_1203;
  int sub_1204;
  int sub_1205;
  int sub_1206;
  int sub_1207;
  int sub_1208;
  int sub_1209;
  int sub_1210;
  int sub_1211;
  int sub_1212;
  int sub_1213;
  int sub_1214;
  int sub_1215;
  int sub_1216;
  int sub_1217;
  int sub_1218;
  int sub_1219;
  int sub_1220;
  int sub_1221;
  int sub_1222;
  int sub_1223;
  int sub_1224;
  int sub_1225;
  int sub_1226;
  int sub_1227;
  int sub_1228;
  int sub_1229;
  int sub_1230;
  int sub_1231;
  int sub_1232;
  int sub_1233;
  int sub_1234;
  int sub_1235;
  int sub_1236;
  int sub_1237;
  int sub_1238;
  int sub_1239;
  int sub_1240;
  int sub_1241;
  int sub_1242;
  int sub_1243;
  int sub_1244;
  int sub_1245;
  int sub_1246;
  int sub_1247;
  int sub_1248;
  int sub_1249;
  int sub_1250;
  int sub_1251;
  int sub_1252;
  int sub_1253;
  int sub_1254;
  int sub_1255;
  int sub_1256;
  int sub_1257;
  int sub_1258;
  int sub_1259;
  int sub_1260;
  int sub_1261;
  int sub_1262;
  int sub_1263;
  int sub_1264;
  int sub_1265;
  int sub_1266;
  int sub_1267;
  int sub_1268;
  int sub_1269;
  int sub_1270;
  int sub_1271;
  int sub_1272;
  int sub_1273;
  int sub_1274;
  int sub_1275;
  int sub_1276;
  int sub_1277;
  int sub_1278;
  int sub_1279;
  int sub_1280;
  int sub_1281;
  int sub_1282;
  int sub_1283;
  int sub_1284;
  int sub_1285;
  int sub_1286;
  int sub_1287;
  int sub_1288;
  int sub_1289;
  int sub_1290;
  int sub_1291;
  int sub_1292;
  int sub_1293;
  int sub_1294;
  int sub_1295;
  int sub_1296;
  int sub_1297;
  int sub_1298;
  int sub_1299;
  int sub_1300;
  int sub_1301;
  int sub_1302;
  int sub_1303;
  int sub_1304;
  int sub_1305;
  int sub_1306;
  int sub_1307;
  int sub_1308;
  int sub_1309;
  int sub_1310;
  int sub_1311;
  int sub_1312;
  int sub_1313;
  int sub_1314;
  int sub_1315;
  int sub_1316;
  int sub_1317;
  int sub_1318;
  int sub_1319;
  int sub_1320;
  int sub_1321;
  int sub_1322;
  int sub_1323;
  int sub_1324;
  int sub_1325;
  int sub_1326;
  int sub_1327;
  int sub_1328;
  int sub_1329;
  int sub_1330;
  int sub_1331;
  int sub_1332;
  int sub_1333;
  int sub_1334;
  int sub_1335;
  int sub_1336;
  int sub_1337;
  int sub_1338;
  int sub_1339;
  int sub_1340;
  int sub_1341;
  int sub_1342;
  int sub_1343;
  int sub_1344;
  int sub_1345;
  int sub_1346;
  int sub_1347;
  int sub_1348;
  int sub_1349;
  int sub_1350;
  v_728 = !(controller_v_392);
  sub_21 = (v_728&&false);
  sub_22 = !(controller_v_392);
  if (controller_v_391) {
    sub_20 = sub_22;
  } else {
    sub_20 = sub_21;
  };
  sub_23 = (controller_v_392&&false);
  if (controller_blind_failed_recovered) {
    sub_19 = sub_20;
  } else {
    sub_19 = sub_23;
  };
  sub_18 = sub_19;
  if (controller_v_407) {
    v_729 = sub_18;
  } else {
    v_729 = false;
  };
  v_726 = (controller_v_391&&sub_22);
  sub_26 = controller_v_392;
  v_727 = (controller_v_391&&sub_26);
  if (controller_blind_failed_recovered) {
    sub_25 = v_726;
  } else {
    sub_25 = v_727;
  };
  sub_24 = sub_25;
  if (controller_v_407) {
    v_730 = sub_24;
  } else {
    v_730 = false;
  };
  if (controller_c_window) {
    sub_17 = v_729;
  } else {
    sub_17 = v_730;
  };
  if (controller_cleaner) {
    v_731 = sub_17;
    sub_16 = false;
  } else {
    v_731 = false;
    sub_16 = sub_17;
  };
  if (controller_ck_17_1) {
    sub_15 = v_731;
  } else {
    sub_15 = sub_16;
  };
  if (controller_c_door) {
    v_734 = false;
    v_732 = sub_15;
  } else {
    v_734 = sub_15;
    v_732 = false;
  };
  v_722 = !(controller_v_391);
  v_723 = (v_722&&sub_26);
  v_720 = !(controller_v_391);
  v_721 = (v_720&&sub_22);
  if (controller_blind_failed_recovered) {
    sub_31 = v_721;
  } else {
    sub_31 = v_723;
  };
  sub_30 = sub_31;
  if (controller_v_408) {
    sub_32 = false;
  } else {
    sub_32 = sub_31;
  };
  if (controller_v_407) {
    v_724 = sub_32;
  } else {
    v_724 = sub_30;
  };
  if (controller_c_window) {
    sub_29 = v_724;
  } else {
    sub_29 = false;
  };
  if (controller_cleaner) {
    v_725 = sub_17;
    sub_28 = sub_29;
  } else {
    v_725 = sub_29;
    sub_28 = sub_17;
  };
  if (controller_ck_17_1) {
    sub_27 = v_725;
  } else {
    sub_27 = sub_28;
  };
  if (controller_cleaner) {
    v_719 = false;
    sub_34 = sub_29;
  } else {
    v_719 = sub_29;
    sub_34 = false;
  };
  if (controller_ck_17_1) {
    sub_33 = v_719;
  } else {
    sub_33 = sub_34;
  };
  if (controller_c_door) {
    v_735 = sub_33;
  } else {
    v_735 = sub_27;
  };
  if (controller_c_pc) {
    v_736 = v_734;
  } else {
    v_736 = v_735;
  };
  if (controller_c_door) {
    v_733 = sub_27;
  } else {
    v_733 = sub_33;
  };
  if (controller_c_pc) {
    sub_14 = v_732;
  } else {
    sub_14 = v_733;
  };
  if (controller_ck_11_1) {
    sub_13 = v_736;
  } else {
    sub_13 = sub_14;
  };
  if (controller_c_window) {
    sub_40 = false;
  } else {
    sub_40 = sub_24;
  };
  if (controller_cleaner) {
    v_715 = sub_40;
    sub_39 = false;
  } else {
    v_715 = false;
    sub_39 = sub_40;
  };
  if (controller_ck_17_1) {
    sub_38 = v_715;
  } else {
    sub_38 = sub_39;
  };
  if (controller_c_door) {
    sub_37 = sub_38;
  } else {
    sub_37 = false;
  };
  if (controller_cleaner) {
    v_714 = sub_40;
    sub_42 = sub_29;
  } else {
    v_714 = sub_29;
    sub_42 = sub_40;
  };
  if (controller_ck_17_1) {
    sub_41 = v_714;
  } else {
    sub_41 = sub_42;
  };
  if (controller_c_door) {
    v_717 = sub_33;
    v_716 = sub_41;
  } else {
    v_717 = sub_41;
    v_716 = sub_33;
  };
  if (controller_c_pc) {
    sub_36 = sub_37;
  } else {
    sub_36 = v_716;
  };
  if (controller_c_door) {
    sub_43 = false;
  } else {
    sub_43 = sub_38;
  };
  if (controller_c_pc) {
    v_718 = sub_43;
  } else {
    v_718 = v_717;
  };
  if (controller_ck_11_1) {
    sub_35 = v_718;
  } else {
    sub_35 = sub_36;
  };
  if (controller_change_shift) {
    v_737 = sub_35;
    sub_12 = sub_13;
  } else {
    v_737 = sub_13;
    sub_12 = sub_35;
  };
  if (controller_ck_1) {
    sub_11 = v_737;
  } else {
    sub_11 = sub_12;
  };
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  if (controller_c_pc) {
    sub_47 = false;
  } else {
    sub_47 = sub_33;
  };
  sub_46 = sub_47;
  sub_45 = sub_46;
  if (controller_air_failed_recovered) {
    v_713 = sub_45;
  } else {
    v_713 = sub_10;
  };
  if (controller_c_air_2) {
    sub_44 = v_713;
  } else {
    sub_44 = sub_9;
  };
  if (controller_c_air_1) {
    sub_7 = sub_8;
  } else {
    sub_7 = sub_44;
  };
  sub_55 = false;
  if (controller_v_408) {
    sub_54 = sub_55;
  } else {
    sub_54 = sub_25;
  };
  if (controller_v_407) {
    sub_53 = sub_54;
  } else {
    sub_53 = false;
  };
  sub_52 = sub_53;
  if (controller_cleaner) {
    sub_51 = false;
    sub_56 = sub_52;
  } else {
    sub_51 = sub_52;
    sub_56 = false;
  };
  if (controller_ck_17_1) {
    sub_50 = sub_56;
  } else {
    sub_50 = sub_51;
  };
  if (controller_c_pc) {
    sub_49 = false;
  } else {
    sub_49 = sub_50;
  };
  if (controller_c_closet) {
    sub_48 = false;
  } else {
    sub_48 = sub_49;
  };
  if (controller_air_failed_recovered) {
    v_738 = sub_10;
  } else {
    v_738 = sub_48;
  };
  sub_57 = sub_45;
  if (controller_c_air_2) {
    v_739 = v_738;
  } else {
    v_739 = sub_57;
  };
  sub_58 = sub_57;
  if (controller_c_air_1) {
    v_740 = v_739;
  } else {
    v_740 = sub_58;
  };
  if (controller_v_445) {
    sub_6 = v_740;
  } else {
    sub_6 = sub_7;
  };
  if (controller_v_447) {
    sub_5 = sub_58;
  } else {
    sub_5 = sub_6;
  };
  if (controller_c_air_1) {
    v_712 = sub_44;
  } else {
    v_712 = sub_8;
  };
  sub_62 = sub_48;
  sub_61 = sub_62;
  if (controller_air_failed_recovered) {
    v_711 = sub_10;
  } else {
    v_711 = sub_45;
  };
  if (controller_c_air_2) {
    sub_63 = v_711;
  } else {
    sub_63 = sub_57;
  };
  if (controller_c_air_1) {
    v_741 = sub_63;
    sub_60 = sub_61;
  } else {
    v_741 = sub_61;
    sub_60 = sub_63;
  };
  if (controller_v_445) {
    sub_59 = v_712;
  } else {
    sub_59 = sub_60;
  };
  if (controller_air_failed_recovered) {
    v_709 = sub_48;
  } else {
    v_709 = sub_10;
  };
  if (controller_c_air_2) {
    v_710 = v_709;
  } else {
    v_710 = sub_9;
  };
  if (controller_c_air_1) {
    sub_64 = v_710;
  } else {
    sub_64 = sub_8;
  };
  if (controller_v_445) {
    v_742 = v_741;
  } else {
    v_742 = sub_64;
  };
  if (controller_v_447) {
    v_743 = v_742;
  } else {
    v_743 = sub_59;
  };
  if (controller_v_446) {
    v_744 = v_743;
  } else {
    v_744 = sub_5;
  };
  if (controller_blind_failed_recovered) {
    sub_79 = sub_21;
  } else {
    sub_79 = sub_23;
  };
  sub_78 = sub_79;
  if (controller_v_407) {
    v_697 = sub_78;
  } else {
    v_697 = false;
  };
  v_696 = (controller_v_391&&sub_21);
  sub_82 = (controller_v_391&&sub_23);
  if (controller_blind_failed_recovered) {
    sub_81 = v_696;
  } else {
    sub_81 = sub_82;
  };
  sub_80 = sub_81;
  if (controller_v_407) {
    v_698 = sub_80;
  } else {
    v_698 = false;
  };
  if (controller_c_window) {
    sub_77 = v_697;
  } else {
    sub_77 = v_698;
  };
  if (controller_cleaner) {
    v_699 = sub_77;
    sub_76 = false;
  } else {
    v_699 = false;
    sub_76 = sub_77;
  };
  if (controller_ck_17_1) {
    sub_75 = v_699;
  } else {
    sub_75 = sub_76;
  };
  if (controller_c_door) {
    v_702 = false;
    v_700 = sub_75;
  } else {
    v_702 = sub_75;
    v_700 = false;
  };
  v_692 = !(controller_v_391);
  v_693 = (v_692&&sub_23);
  v_690 = !(controller_v_391);
  v_691 = (v_690&&sub_21);
  if (controller_blind_failed_recovered) {
    sub_87 = v_691;
  } else {
    sub_87 = v_693;
  };
  sub_86 = sub_87;
  if (controller_v_408) {
    sub_88 = false;
  } else {
    sub_88 = sub_87;
  };
  if (controller_v_407) {
    v_694 = sub_88;
  } else {
    v_694 = sub_86;
  };
  if (controller_c_window) {
    sub_85 = v_694;
  } else {
    sub_85 = false;
  };
  if (controller_cleaner) {
    v_695 = sub_77;
    sub_84 = sub_85;
  } else {
    v_695 = sub_85;
    sub_84 = sub_77;
  };
  if (controller_ck_17_1) {
    sub_83 = v_695;
  } else {
    sub_83 = sub_84;
  };
  if (controller_cleaner) {
    v_689 = false;
    sub_90 = sub_85;
  } else {
    v_689 = sub_85;
    sub_90 = false;
  };
  if (controller_ck_17_1) {
    sub_89 = v_689;
  } else {
    sub_89 = sub_90;
  };
  if (controller_c_door) {
    v_703 = sub_89;
  } else {
    v_703 = sub_83;
  };
  if (controller_c_pc) {
    v_704 = v_702;
  } else {
    v_704 = v_703;
  };
  if (controller_c_door) {
    v_701 = sub_83;
  } else {
    v_701 = sub_89;
  };
  if (controller_c_pc) {
    sub_74 = v_700;
  } else {
    sub_74 = v_701;
  };
  if (controller_ck_11_1) {
    sub_73 = v_704;
  } else {
    sub_73 = sub_74;
  };
  if (controller_c_window) {
    sub_96 = false;
  } else {
    sub_96 = sub_80;
  };
  if (controller_cleaner) {
    v_685 = sub_96;
    sub_95 = false;
  } else {
    v_685 = false;
    sub_95 = sub_96;
  };
  if (controller_ck_17_1) {
    sub_94 = v_685;
  } else {
    sub_94 = sub_95;
  };
  if (controller_c_door) {
    sub_93 = sub_94;
  } else {
    sub_93 = false;
  };
  if (controller_cleaner) {
    v_684 = sub_96;
    sub_98 = sub_85;
  } else {
    v_684 = sub_85;
    sub_98 = sub_96;
  };
  if (controller_ck_17_1) {
    sub_97 = v_684;
  } else {
    sub_97 = sub_98;
  };
  if (controller_c_door) {
    v_687 = sub_89;
    v_686 = sub_97;
  } else {
    v_687 = sub_97;
    v_686 = sub_89;
  };
  if (controller_c_pc) {
    sub_92 = sub_93;
  } else {
    sub_92 = v_686;
  };
  if (controller_c_door) {
    sub_99 = false;
  } else {
    sub_99 = sub_94;
  };
  if (controller_c_pc) {
    v_688 = sub_99;
  } else {
    v_688 = v_687;
  };
  if (controller_ck_11_1) {
    sub_91 = v_688;
  } else {
    sub_91 = sub_92;
  };
  if (controller_change_shift) {
    v_705 = sub_91;
    sub_72 = sub_73;
  } else {
    v_705 = sub_73;
    sub_72 = sub_91;
  };
  if (controller_ck_1) {
    sub_71 = v_705;
  } else {
    sub_71 = sub_72;
  };
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  if (controller_c_pc) {
    sub_103 = false;
  } else {
    sub_103 = sub_89;
  };
  sub_102 = sub_103;
  sub_101 = sub_102;
  if (controller_air_failed_recovered) {
    v_683 = sub_101;
  } else {
    v_683 = sub_70;
  };
  if (controller_c_air_2) {
    sub_100 = v_683;
  } else {
    sub_100 = sub_69;
  };
  if (controller_c_air_1) {
    sub_67 = sub_68;
  } else {
    sub_67 = sub_100;
  };
  if (controller_v_408) {
    sub_110 = sub_55;
  } else {
    sub_110 = sub_81;
  };
  if (controller_v_407) {
    sub_109 = sub_110;
  } else {
    sub_109 = false;
  };
  sub_108 = sub_109;
  if (controller_cleaner) {
    sub_107 = false;
    sub_111 = sub_108;
  } else {
    sub_107 = sub_108;
    sub_111 = false;
  };
  if (controller_ck_17_1) {
    sub_106 = sub_111;
  } else {
    sub_106 = sub_107;
  };
  if (controller_c_pc) {
    sub_105 = false;
  } else {
    sub_105 = sub_106;
  };
  if (controller_c_closet) {
    sub_104 = false;
  } else {
    sub_104 = sub_105;
  };
  if (controller_air_failed_recovered) {
    v_706 = sub_70;
  } else {
    v_706 = sub_104;
  };
  sub_112 = sub_101;
  if (controller_c_air_2) {
    v_707 = v_706;
  } else {
    v_707 = sub_112;
  };
  sub_113 = sub_112;
  if (controller_c_air_1) {
    v_708 = v_707;
  } else {
    v_708 = sub_113;
  };
  if (controller_v_445) {
    sub_66 = v_708;
  } else {
    sub_66 = sub_67;
  };
  if (controller_v_447) {
    sub_65 = sub_113;
  } else {
    sub_65 = sub_66;
  };
  if (controller_c_air_1) {
    v_682 = sub_100;
  } else {
    v_682 = sub_68;
  };
  sub_117 = sub_104;
  sub_116 = sub_117;
  if (controller_air_failed_recovered) {
    v_681 = sub_70;
  } else {
    v_681 = sub_101;
  };
  if (controller_c_air_2) {
    sub_118 = v_681;
  } else {
    sub_118 = sub_112;
  };
  if (controller_c_air_1) {
    v_745 = sub_118;
    sub_115 = sub_116;
  } else {
    v_745 = sub_116;
    sub_115 = sub_118;
  };
  if (controller_v_445) {
    sub_114 = v_682;
  } else {
    sub_114 = sub_115;
  };
  if (controller_air_failed_recovered) {
    v_679 = sub_104;
  } else {
    v_679 = sub_70;
  };
  if (controller_c_air_2) {
    v_680 = v_679;
  } else {
    v_680 = sub_69;
  };
  if (controller_c_air_1) {
    sub_119 = v_680;
  } else {
    sub_119 = sub_68;
  };
  if (controller_v_445) {
    v_746 = v_745;
  } else {
    v_746 = sub_119;
  };
  if (controller_v_447) {
    v_747 = v_746;
  } else {
    v_747 = sub_114;
  };
  if (controller_v_446) {
    v_748 = v_747;
  } else {
    v_748 = sub_65;
  };
  if (controller_blind_switch) {
    v_749 = v_744;
  } else {
    v_749 = v_748;
  };
  if (controller_v_391) {
    sub_136 = sub_23;
  } else {
    sub_136 = false;
  };
  sub_135 = sub_136;
  sub_134 = sub_135;
  if (controller_v_407) {
    v_664 = sub_134;
  } else {
    v_664 = false;
  };
  v_663 = !(controller_v_391);
  sub_139 = (v_663&&false);
  sub_138 = sub_139;
  sub_137 = sub_138;
  if (controller_v_407) {
    v_665 = sub_137;
  } else {
    v_665 = false;
  };
  if (controller_c_window) {
    sub_133 = v_664;
  } else {
    sub_133 = v_665;
  };
  if (controller_cleaner) {
    v_666 = sub_133;
    sub_132 = false;
  } else {
    v_666 = false;
    sub_132 = sub_133;
  };
  if (controller_ck_17_1) {
    sub_131 = v_666;
  } else {
    sub_131 = sub_132;
  };
  if (controller_c_door) {
    v_669 = false;
    v_667 = sub_131;
  } else {
    v_669 = sub_131;
    v_667 = false;
  };
  sub_144 = sub_82;
  sub_143 = sub_144;
  if (controller_v_408) {
    sub_145 = false;
  } else {
    sub_145 = sub_144;
  };
  if (controller_v_407) {
    v_661 = sub_145;
  } else {
    v_661 = sub_143;
  };
  if (controller_c_window) {
    sub_142 = v_661;
  } else {
    sub_142 = false;
  };
  if (controller_cleaner) {
    v_662 = sub_133;
    sub_141 = sub_142;
  } else {
    v_662 = sub_142;
    sub_141 = sub_133;
  };
  if (controller_ck_17_1) {
    sub_140 = v_662;
  } else {
    sub_140 = sub_141;
  };
  if (controller_cleaner) {
    v_660 = false;
    sub_147 = sub_142;
  } else {
    v_660 = sub_142;
    sub_147 = false;
  };
  if (controller_ck_17_1) {
    sub_146 = v_660;
  } else {
    sub_146 = sub_147;
  };
  if (controller_c_door) {
    v_670 = sub_146;
  } else {
    v_670 = sub_140;
  };
  if (controller_c_pc) {
    v_671 = v_669;
  } else {
    v_671 = v_670;
  };
  if (controller_c_door) {
    v_668 = sub_140;
  } else {
    v_668 = sub_146;
  };
  if (controller_c_pc) {
    sub_130 = v_667;
  } else {
    sub_130 = v_668;
  };
  if (controller_ck_11_1) {
    sub_129 = v_671;
  } else {
    sub_129 = sub_130;
  };
  if (controller_c_window) {
    sub_153 = false;
  } else {
    sub_153 = sub_137;
  };
  if (controller_cleaner) {
    v_656 = sub_153;
    sub_152 = false;
  } else {
    v_656 = false;
    sub_152 = sub_153;
  };
  if (controller_ck_17_1) {
    sub_151 = v_656;
  } else {
    sub_151 = sub_152;
  };
  if (controller_c_door) {
    sub_150 = sub_151;
  } else {
    sub_150 = false;
  };
  if (controller_cleaner) {
    v_655 = sub_153;
    sub_155 = sub_142;
  } else {
    v_655 = sub_142;
    sub_155 = sub_153;
  };
  if (controller_ck_17_1) {
    sub_154 = v_655;
  } else {
    sub_154 = sub_155;
  };
  if (controller_c_door) {
    v_658 = sub_146;
    v_657 = sub_154;
  } else {
    v_658 = sub_154;
    v_657 = sub_146;
  };
  if (controller_c_pc) {
    sub_149 = sub_150;
  } else {
    sub_149 = v_657;
  };
  if (controller_c_door) {
    sub_156 = false;
  } else {
    sub_156 = sub_151;
  };
  if (controller_c_pc) {
    v_659 = sub_156;
  } else {
    v_659 = v_658;
  };
  if (controller_ck_11_1) {
    sub_148 = v_659;
  } else {
    sub_148 = sub_149;
  };
  if (controller_change_shift) {
    v_672 = sub_148;
    sub_128 = sub_129;
  } else {
    v_672 = sub_129;
    sub_128 = sub_148;
  };
  if (controller_ck_1) {
    sub_127 = v_672;
  } else {
    sub_127 = sub_128;
  };
  sub_126 = sub_127;
  sub_125 = sub_126;
  sub_124 = sub_125;
  if (controller_c_pc) {
    sub_160 = false;
  } else {
    sub_160 = sub_146;
  };
  sub_159 = sub_160;
  sub_158 = sub_159;
  if (controller_air_failed_recovered) {
    v_654 = sub_158;
  } else {
    v_654 = sub_126;
  };
  if (controller_c_air_2) {
    sub_157 = v_654;
  } else {
    sub_157 = sub_125;
  };
  if (controller_c_air_1) {
    sub_123 = sub_124;
  } else {
    sub_123 = sub_157;
  };
  if (controller_v_408) {
    sub_167 = sub_55;
  } else {
    sub_167 = sub_138;
  };
  if (controller_v_407) {
    sub_166 = sub_167;
  } else {
    sub_166 = false;
  };
  sub_165 = sub_166;
  if (controller_cleaner) {
    sub_164 = false;
    sub_168 = sub_165;
  } else {
    sub_164 = sub_165;
    sub_168 = false;
  };
  if (controller_ck_17_1) {
    sub_163 = sub_168;
  } else {
    sub_163 = sub_164;
  };
  if (controller_c_pc) {
    sub_162 = false;
  } else {
    sub_162 = sub_163;
  };
  if (controller_c_closet) {
    sub_161 = false;
  } else {
    sub_161 = sub_162;
  };
  if (controller_air_failed_recovered) {
    v_673 = sub_126;
  } else {
    v_673 = sub_161;
  };
  sub_169 = sub_158;
  if (controller_c_air_2) {
    v_674 = v_673;
  } else {
    v_674 = sub_169;
  };
  sub_170 = sub_169;
  if (controller_c_air_1) {
    v_675 = v_674;
  } else {
    v_675 = sub_170;
  };
  if (controller_v_445) {
    sub_122 = v_675;
  } else {
    sub_122 = sub_123;
  };
  if (controller_v_447) {
    sub_121 = sub_170;
  } else {
    sub_121 = sub_122;
  };
  if (controller_c_air_1) {
    v_653 = sub_157;
  } else {
    v_653 = sub_124;
  };
  sub_174 = sub_161;
  sub_173 = sub_174;
  if (controller_air_failed_recovered) {
    v_652 = sub_126;
  } else {
    v_652 = sub_158;
  };
  if (controller_c_air_2) {
    sub_175 = v_652;
  } else {
    sub_175 = sub_169;
  };
  if (controller_c_air_1) {
    v_676 = sub_175;
    sub_172 = sub_173;
  } else {
    v_676 = sub_173;
    sub_172 = sub_175;
  };
  if (controller_v_445) {
    sub_171 = v_653;
  } else {
    sub_171 = sub_172;
  };
  if (controller_air_failed_recovered) {
    v_650 = sub_161;
  } else {
    v_650 = sub_126;
  };
  if (controller_c_air_2) {
    v_651 = v_650;
  } else {
    v_651 = sub_125;
  };
  if (controller_c_air_1) {
    sub_176 = v_651;
  } else {
    sub_176 = sub_124;
  };
  if (controller_v_445) {
    v_677 = v_676;
  } else {
    v_677 = sub_176;
  };
  if (controller_v_447) {
    v_678 = v_677;
  } else {
    v_678 = sub_171;
  };
  if (controller_v_446) {
    sub_120 = v_678;
  } else {
    sub_120 = sub_121;
  };
  if (controller_c_blind_1) {
    sub_4 = v_749;
  } else {
    sub_4 = sub_120;
  };
  if (controller_v_408) {
    v_627 = sub_19;
    sub_192 = false;
  } else {
    v_627 = false;
    sub_192 = sub_19;
  };
  if (controller_light_failed_recovered) {
    sub_191 = v_627;
  } else {
    sub_191 = sub_192;
  };
  if (controller_v_407) {
    v_628 = sub_191;
  } else {
    v_628 = sub_18;
  };
  if (controller_v_408) {
    v_626 = sub_25;
    sub_194 = false;
  } else {
    v_626 = false;
    sub_194 = sub_25;
  };
  if (controller_light_failed_recovered) {
    sub_193 = v_626;
  } else {
    sub_193 = sub_194;
  };
  if (controller_v_407) {
    v_629 = sub_193;
  } else {
    v_629 = sub_24;
  };
  if (controller_c_window) {
    sub_190 = v_628;
  } else {
    sub_190 = v_629;
  };
  if (controller_cleaner) {
    v_630 = sub_190;
    sub_189 = false;
  } else {
    v_630 = false;
    sub_189 = sub_190;
  };
  if (controller_ck_17_1) {
    sub_188 = v_630;
  } else {
    sub_188 = sub_189;
  };
  if (controller_c_door) {
    v_633 = false;
    v_631 = sub_188;
  } else {
    v_633 = sub_188;
    v_631 = false;
  };
  if (controller_v_408) {
    v_623 = sub_31;
  } else {
    v_623 = false;
  };
  if (controller_light_failed_recovered) {
    sub_198 = v_623;
  } else {
    sub_198 = sub_32;
  };
  if (controller_v_407) {
    v_624 = sub_30;
  } else {
    v_624 = sub_198;
  };
  if (controller_c_window) {
    sub_197 = v_624;
  } else {
    sub_197 = false;
  };
  if (controller_cleaner) {
    v_625 = sub_190;
    sub_196 = sub_197;
  } else {
    v_625 = sub_197;
    sub_196 = sub_190;
  };
  if (controller_ck_17_1) {
    sub_195 = v_625;
  } else {
    sub_195 = sub_196;
  };
  if (controller_cleaner) {
    v_622 = false;
    sub_200 = sub_197;
  } else {
    v_622 = sub_197;
    sub_200 = false;
  };
  if (controller_ck_17_1) {
    sub_199 = v_622;
  } else {
    sub_199 = sub_200;
  };
  if (controller_c_door) {
    v_634 = sub_199;
  } else {
    v_634 = sub_195;
  };
  if (controller_c_pc) {
    v_635 = v_633;
  } else {
    v_635 = v_634;
  };
  if (controller_c_door) {
    v_632 = sub_195;
  } else {
    v_632 = sub_199;
  };
  if (controller_c_pc) {
    sub_187 = v_631;
  } else {
    sub_187 = v_632;
  };
  if (controller_ck_11_1) {
    sub_186 = v_635;
  } else {
    sub_186 = sub_187;
  };
  if (controller_cleaner) {
    v_618 = sub_40;
    sub_204 = sub_197;
  } else {
    v_618 = sub_197;
    sub_204 = sub_40;
  };
  if (controller_ck_17_1) {
    sub_203 = v_618;
  } else {
    sub_203 = sub_204;
  };
  if (controller_c_door) {
    v_620 = sub_199;
  } else {
    v_620 = sub_203;
  };
  if (controller_c_pc) {
    v_621 = sub_43;
  } else {
    v_621 = v_620;
  };
  if (controller_c_door) {
    v_619 = sub_203;
  } else {
    v_619 = sub_199;
  };
  if (controller_c_pc) {
    sub_202 = sub_37;
  } else {
    sub_202 = v_619;
  };
  if (controller_ck_11_1) {
    sub_201 = v_621;
  } else {
    sub_201 = sub_202;
  };
  if (controller_change_shift) {
    v_636 = sub_201;
    sub_185 = sub_186;
  } else {
    v_636 = sub_186;
    sub_185 = sub_201;
  };
  if (controller_ck_1) {
    sub_184 = v_636;
  } else {
    sub_184 = sub_185;
  };
  sub_183 = sub_184;
  sub_182 = sub_183;
  sub_181 = sub_182;
  if (controller_c_pc) {
    sub_208 = false;
  } else {
    sub_208 = sub_199;
  };
  sub_207 = sub_208;
  sub_206 = sub_207;
  if (controller_air_failed_recovered) {
    v_617 = sub_206;
  } else {
    v_617 = sub_183;
  };
  if (controller_c_air_2) {
    sub_205 = v_617;
  } else {
    sub_205 = sub_182;
  };
  if (controller_c_air_1) {
    sub_180 = sub_181;
  } else {
    sub_180 = sub_205;
  };
  if (controller_v_408) {
    v_616 = sub_25;
  } else {
    v_616 = sub_55;
  };
  if (controller_light_failed_recovered) {
    sub_215 = v_616;
  } else {
    sub_215 = sub_54;
  };
  if (controller_v_407) {
    sub_214 = sub_193;
  } else {
    sub_214 = sub_215;
  };
  sub_213 = sub_214;
  if (controller_cleaner) {
    sub_212 = false;
    sub_216 = sub_213;
  } else {
    sub_212 = sub_213;
    sub_216 = false;
  };
  if (controller_ck_17_1) {
    sub_211 = sub_216;
  } else {
    sub_211 = sub_212;
  };
  if (controller_c_pc) {
    sub_210 = false;
  } else {
    sub_210 = sub_211;
  };
  if (controller_c_closet) {
    sub_209 = false;
  } else {
    sub_209 = sub_210;
  };
  if (controller_air_failed_recovered) {
    v_637 = sub_183;
  } else {
    v_637 = sub_209;
  };
  sub_217 = sub_206;
  if (controller_c_air_2) {
    v_638 = v_637;
  } else {
    v_638 = sub_217;
  };
  sub_218 = sub_217;
  if (controller_c_air_1) {
    v_639 = v_638;
  } else {
    v_639 = sub_218;
  };
  if (controller_v_445) {
    sub_179 = v_639;
  } else {
    sub_179 = sub_180;
  };
  if (controller_v_447) {
    sub_178 = sub_218;
  } else {
    sub_178 = sub_179;
  };
  if (controller_c_air_1) {
    v_615 = sub_205;
  } else {
    v_615 = sub_181;
  };
  sub_222 = sub_209;
  sub_221 = sub_222;
  if (controller_air_failed_recovered) {
    v_614 = sub_183;
  } else {
    v_614 = sub_206;
  };
  if (controller_c_air_2) {
    sub_223 = v_614;
  } else {
    sub_223 = sub_217;
  };
  if (controller_c_air_1) {
    v_640 = sub_223;
    sub_220 = sub_221;
  } else {
    v_640 = sub_221;
    sub_220 = sub_223;
  };
  if (controller_v_445) {
    sub_219 = v_615;
  } else {
    sub_219 = sub_220;
  };
  if (controller_air_failed_recovered) {
    v_612 = sub_209;
  } else {
    v_612 = sub_183;
  };
  if (controller_c_air_2) {
    v_613 = v_612;
  } else {
    v_613 = sub_182;
  };
  if (controller_c_air_1) {
    sub_224 = v_613;
  } else {
    sub_224 = sub_181;
  };
  if (controller_v_445) {
    v_641 = v_640;
  } else {
    v_641 = sub_224;
  };
  if (controller_v_447) {
    v_642 = v_641;
  } else {
    v_642 = sub_219;
  };
  if (controller_v_446) {
    v_643 = v_642;
  } else {
    v_643 = sub_178;
  };
  if (controller_v_408) {
    v_599 = sub_79;
    sub_239 = false;
  } else {
    v_599 = false;
    sub_239 = sub_79;
  };
  if (controller_light_failed_recovered) {
    sub_238 = v_599;
  } else {
    sub_238 = sub_239;
  };
  if (controller_v_407) {
    v_600 = sub_238;
  } else {
    v_600 = sub_78;
  };
  if (controller_v_408) {
    v_598 = sub_81;
    sub_241 = false;
  } else {
    v_598 = false;
    sub_241 = sub_81;
  };
  if (controller_light_failed_recovered) {
    sub_240 = v_598;
  } else {
    sub_240 = sub_241;
  };
  if (controller_v_407) {
    v_601 = sub_240;
  } else {
    v_601 = sub_80;
  };
  if (controller_c_window) {
    sub_237 = v_600;
  } else {
    sub_237 = v_601;
  };
  if (controller_cleaner) {
    v_602 = sub_237;
    sub_236 = false;
  } else {
    v_602 = false;
    sub_236 = sub_237;
  };
  if (controller_ck_17_1) {
    sub_235 = v_602;
  } else {
    sub_235 = sub_236;
  };
  if (controller_c_door) {
    v_605 = false;
    v_603 = sub_235;
  } else {
    v_605 = sub_235;
    v_603 = false;
  };
  if (controller_v_408) {
    v_595 = sub_87;
  } else {
    v_595 = false;
  };
  if (controller_light_failed_recovered) {
    sub_245 = v_595;
  } else {
    sub_245 = sub_88;
  };
  if (controller_v_407) {
    v_596 = sub_86;
  } else {
    v_596 = sub_245;
  };
  if (controller_c_window) {
    sub_244 = v_596;
  } else {
    sub_244 = false;
  };
  if (controller_cleaner) {
    v_597 = sub_237;
    sub_243 = sub_244;
  } else {
    v_597 = sub_244;
    sub_243 = sub_237;
  };
  if (controller_ck_17_1) {
    sub_242 = v_597;
  } else {
    sub_242 = sub_243;
  };
  if (controller_cleaner) {
    v_594 = false;
    sub_247 = sub_244;
  } else {
    v_594 = sub_244;
    sub_247 = false;
  };
  if (controller_ck_17_1) {
    sub_246 = v_594;
  } else {
    sub_246 = sub_247;
  };
  if (controller_c_door) {
    v_606 = sub_246;
  } else {
    v_606 = sub_242;
  };
  if (controller_c_pc) {
    v_607 = v_605;
  } else {
    v_607 = v_606;
  };
  if (controller_c_door) {
    v_604 = sub_242;
  } else {
    v_604 = sub_246;
  };
  if (controller_c_pc) {
    sub_234 = v_603;
  } else {
    sub_234 = v_604;
  };
  if (controller_ck_11_1) {
    sub_233 = v_607;
  } else {
    sub_233 = sub_234;
  };
  if (controller_cleaner) {
    v_590 = sub_96;
    sub_251 = sub_244;
  } else {
    v_590 = sub_244;
    sub_251 = sub_96;
  };
  if (controller_ck_17_1) {
    sub_250 = v_590;
  } else {
    sub_250 = sub_251;
  };
  if (controller_c_door) {
    v_592 = sub_246;
  } else {
    v_592 = sub_250;
  };
  if (controller_c_pc) {
    v_593 = sub_99;
  } else {
    v_593 = v_592;
  };
  if (controller_c_door) {
    v_591 = sub_250;
  } else {
    v_591 = sub_246;
  };
  if (controller_c_pc) {
    sub_249 = sub_93;
  } else {
    sub_249 = v_591;
  };
  if (controller_ck_11_1) {
    sub_248 = v_593;
  } else {
    sub_248 = sub_249;
  };
  if (controller_change_shift) {
    v_608 = sub_248;
    sub_232 = sub_233;
  } else {
    v_608 = sub_233;
    sub_232 = sub_248;
  };
  if (controller_ck_1) {
    sub_231 = v_608;
  } else {
    sub_231 = sub_232;
  };
  sub_230 = sub_231;
  sub_229 = sub_230;
  sub_228 = sub_229;
  if (controller_c_pc) {
    sub_255 = false;
  } else {
    sub_255 = sub_246;
  };
  sub_254 = sub_255;
  sub_253 = sub_254;
  if (controller_air_failed_recovered) {
    v_589 = sub_253;
  } else {
    v_589 = sub_230;
  };
  if (controller_c_air_2) {
    sub_252 = v_589;
  } else {
    sub_252 = sub_229;
  };
  if (controller_c_air_1) {
    sub_227 = sub_228;
  } else {
    sub_227 = sub_252;
  };
  if (controller_v_408) {
    v_588 = sub_81;
  } else {
    v_588 = sub_55;
  };
  if (controller_light_failed_recovered) {
    sub_262 = v_588;
  } else {
    sub_262 = sub_110;
  };
  if (controller_v_407) {
    sub_261 = sub_240;
  } else {
    sub_261 = sub_262;
  };
  sub_260 = sub_261;
  if (controller_cleaner) {
    sub_259 = false;
    sub_263 = sub_260;
  } else {
    sub_259 = sub_260;
    sub_263 = false;
  };
  if (controller_ck_17_1) {
    sub_258 = sub_263;
  } else {
    sub_258 = sub_259;
  };
  if (controller_c_pc) {
    sub_257 = false;
  } else {
    sub_257 = sub_258;
  };
  if (controller_c_closet) {
    sub_256 = false;
  } else {
    sub_256 = sub_257;
  };
  if (controller_air_failed_recovered) {
    v_609 = sub_230;
  } else {
    v_609 = sub_256;
  };
  sub_264 = sub_253;
  if (controller_c_air_2) {
    v_610 = v_609;
  } else {
    v_610 = sub_264;
  };
  sub_265 = sub_264;
  if (controller_c_air_1) {
    v_611 = v_610;
  } else {
    v_611 = sub_265;
  };
  if (controller_v_445) {
    sub_226 = v_611;
  } else {
    sub_226 = sub_227;
  };
  if (controller_v_447) {
    sub_225 = sub_265;
  } else {
    sub_225 = sub_226;
  };
  if (controller_c_air_1) {
    v_587 = sub_252;
  } else {
    v_587 = sub_228;
  };
  sub_269 = sub_256;
  sub_268 = sub_269;
  if (controller_air_failed_recovered) {
    v_586 = sub_230;
  } else {
    v_586 = sub_253;
  };
  if (controller_c_air_2) {
    sub_270 = v_586;
  } else {
    sub_270 = sub_264;
  };
  if (controller_c_air_1) {
    v_644 = sub_270;
    sub_267 = sub_268;
  } else {
    v_644 = sub_268;
    sub_267 = sub_270;
  };
  if (controller_v_445) {
    sub_266 = v_587;
  } else {
    sub_266 = sub_267;
  };
  if (controller_air_failed_recovered) {
    v_584 = sub_256;
  } else {
    v_584 = sub_230;
  };
  if (controller_c_air_2) {
    v_585 = v_584;
  } else {
    v_585 = sub_229;
  };
  if (controller_c_air_1) {
    sub_271 = v_585;
  } else {
    sub_271 = sub_228;
  };
  if (controller_v_445) {
    v_645 = v_644;
  } else {
    v_645 = sub_271;
  };
  if (controller_v_447) {
    v_646 = v_645;
  } else {
    v_646 = sub_266;
  };
  if (controller_v_446) {
    v_647 = v_646;
  } else {
    v_647 = sub_225;
  };
  if (controller_blind_switch) {
    v_648 = v_643;
  } else {
    v_648 = v_647;
  };
  if (controller_v_408) {
    v_568 = sub_135;
    sub_287 = false;
  } else {
    v_568 = false;
    sub_287 = sub_135;
  };
  if (controller_light_failed_recovered) {
    sub_286 = v_568;
  } else {
    sub_286 = sub_287;
  };
  if (controller_v_407) {
    v_569 = sub_286;
  } else {
    v_569 = sub_134;
  };
  if (controller_v_408) {
    v_567 = sub_138;
    sub_289 = false;
  } else {
    v_567 = false;
    sub_289 = sub_138;
  };
  if (controller_light_failed_recovered) {
    sub_288 = v_567;
  } else {
    sub_288 = sub_289;
  };
  if (controller_v_407) {
    v_570 = sub_288;
  } else {
    v_570 = sub_137;
  };
  if (controller_c_window) {
    sub_285 = v_569;
  } else {
    sub_285 = v_570;
  };
  if (controller_cleaner) {
    v_571 = sub_285;
    sub_284 = false;
  } else {
    v_571 = false;
    sub_284 = sub_285;
  };
  if (controller_ck_17_1) {
    sub_283 = v_571;
  } else {
    sub_283 = sub_284;
  };
  if (controller_c_door) {
    v_574 = false;
    v_572 = sub_283;
  } else {
    v_574 = sub_283;
    v_572 = false;
  };
  if (controller_v_408) {
    v_564 = sub_144;
  } else {
    v_564 = false;
  };
  if (controller_light_failed_recovered) {
    sub_293 = v_564;
  } else {
    sub_293 = sub_145;
  };
  if (controller_v_407) {
    v_565 = sub_143;
  } else {
    v_565 = sub_293;
  };
  if (controller_c_window) {
    sub_292 = v_565;
  } else {
    sub_292 = false;
  };
  if (controller_cleaner) {
    v_566 = sub_285;
    sub_291 = sub_292;
  } else {
    v_566 = sub_292;
    sub_291 = sub_285;
  };
  if (controller_ck_17_1) {
    sub_290 = v_566;
  } else {
    sub_290 = sub_291;
  };
  if (controller_cleaner) {
    v_563 = false;
    sub_295 = sub_292;
  } else {
    v_563 = sub_292;
    sub_295 = false;
  };
  if (controller_ck_17_1) {
    sub_294 = v_563;
  } else {
    sub_294 = sub_295;
  };
  if (controller_c_door) {
    v_575 = sub_294;
  } else {
    v_575 = sub_290;
  };
  if (controller_c_pc) {
    v_576 = v_574;
  } else {
    v_576 = v_575;
  };
  if (controller_c_door) {
    v_573 = sub_290;
  } else {
    v_573 = sub_294;
  };
  if (controller_c_pc) {
    sub_282 = v_572;
  } else {
    sub_282 = v_573;
  };
  if (controller_ck_11_1) {
    sub_281 = v_576;
  } else {
    sub_281 = sub_282;
  };
  if (controller_cleaner) {
    v_559 = sub_153;
    sub_299 = sub_292;
  } else {
    v_559 = sub_292;
    sub_299 = sub_153;
  };
  if (controller_ck_17_1) {
    sub_298 = v_559;
  } else {
    sub_298 = sub_299;
  };
  if (controller_c_door) {
    v_561 = sub_294;
  } else {
    v_561 = sub_298;
  };
  if (controller_c_pc) {
    v_562 = sub_156;
  } else {
    v_562 = v_561;
  };
  if (controller_c_door) {
    v_560 = sub_298;
  } else {
    v_560 = sub_294;
  };
  if (controller_c_pc) {
    sub_297 = sub_150;
  } else {
    sub_297 = v_560;
  };
  if (controller_ck_11_1) {
    sub_296 = v_562;
  } else {
    sub_296 = sub_297;
  };
  if (controller_change_shift) {
    v_577 = sub_296;
    sub_280 = sub_281;
  } else {
    v_577 = sub_281;
    sub_280 = sub_296;
  };
  if (controller_ck_1) {
    sub_279 = v_577;
  } else {
    sub_279 = sub_280;
  };
  sub_278 = sub_279;
  sub_277 = sub_278;
  sub_276 = sub_277;
  if (controller_c_pc) {
    sub_303 = false;
  } else {
    sub_303 = sub_294;
  };
  sub_302 = sub_303;
  sub_301 = sub_302;
  if (controller_air_failed_recovered) {
    v_558 = sub_301;
  } else {
    v_558 = sub_278;
  };
  if (controller_c_air_2) {
    sub_300 = v_558;
  } else {
    sub_300 = sub_277;
  };
  if (controller_c_air_1) {
    sub_275 = sub_276;
  } else {
    sub_275 = sub_300;
  };
  if (controller_v_408) {
    v_557 = sub_138;
  } else {
    v_557 = sub_55;
  };
  if (controller_light_failed_recovered) {
    sub_310 = v_557;
  } else {
    sub_310 = sub_167;
  };
  if (controller_v_407) {
    sub_309 = sub_288;
  } else {
    sub_309 = sub_310;
  };
  sub_308 = sub_309;
  if (controller_cleaner) {
    sub_307 = false;
    sub_311 = sub_308;
  } else {
    sub_307 = sub_308;
    sub_311 = false;
  };
  if (controller_ck_17_1) {
    sub_306 = sub_311;
  } else {
    sub_306 = sub_307;
  };
  if (controller_c_pc) {
    sub_305 = false;
  } else {
    sub_305 = sub_306;
  };
  if (controller_c_closet) {
    sub_304 = false;
  } else {
    sub_304 = sub_305;
  };
  if (controller_air_failed_recovered) {
    v_578 = sub_278;
  } else {
    v_578 = sub_304;
  };
  sub_312 = sub_301;
  if (controller_c_air_2) {
    v_579 = v_578;
  } else {
    v_579 = sub_312;
  };
  sub_313 = sub_312;
  if (controller_c_air_1) {
    v_580 = v_579;
  } else {
    v_580 = sub_313;
  };
  if (controller_v_445) {
    sub_274 = v_580;
  } else {
    sub_274 = sub_275;
  };
  if (controller_v_447) {
    sub_273 = sub_313;
  } else {
    sub_273 = sub_274;
  };
  if (controller_c_air_1) {
    v_556 = sub_300;
  } else {
    v_556 = sub_276;
  };
  sub_317 = sub_304;
  sub_316 = sub_317;
  if (controller_air_failed_recovered) {
    v_555 = sub_278;
  } else {
    v_555 = sub_301;
  };
  if (controller_c_air_2) {
    sub_318 = v_555;
  } else {
    sub_318 = sub_312;
  };
  if (controller_c_air_1) {
    v_581 = sub_318;
    sub_315 = sub_316;
  } else {
    v_581 = sub_316;
    sub_315 = sub_318;
  };
  if (controller_v_445) {
    sub_314 = v_556;
  } else {
    sub_314 = sub_315;
  };
  if (controller_air_failed_recovered) {
    v_553 = sub_304;
  } else {
    v_553 = sub_278;
  };
  if (controller_c_air_2) {
    v_554 = v_553;
  } else {
    v_554 = sub_277;
  };
  if (controller_c_air_1) {
    sub_319 = v_554;
  } else {
    sub_319 = sub_276;
  };
  if (controller_v_445) {
    v_582 = v_581;
  } else {
    v_582 = sub_319;
  };
  if (controller_v_447) {
    v_583 = v_582;
  } else {
    v_583 = sub_314;
  };
  if (controller_v_446) {
    sub_272 = v_583;
  } else {
    sub_272 = sub_273;
  };
  if (controller_c_blind_1) {
    v_649 = v_648;
  } else {
    v_649 = sub_272;
  };
  if (controller_c_light_1) {
    sub_177 = v_649;
  } else {
    sub_177 = sub_4;
  };
  if (controller_light_switch) {
    v_750 = sub_4;
  } else {
    v_750 = sub_177;
  };
  if (controller_c_light_2) {
    sub_3 = v_750;
  } else {
    sub_3 = sub_177;
  };
  sub_333 = sub_17;
  if (controller_c_door) {
    sub_332 = sub_333;
  } else {
    sub_332 = false;
  };
  sub_331 = sub_332;
  if (controller_c_door) {
    sub_334 = false;
  } else {
    sub_334 = sub_333;
  };
  if (controller_ck_11_1) {
    sub_330 = sub_334;
  } else {
    sub_330 = sub_331;
  };
  sub_338 = sub_40;
  if (controller_c_door) {
    sub_337 = sub_338;
  } else {
    sub_337 = false;
  };
  sub_336 = sub_337;
  if (controller_c_door) {
    sub_339 = false;
  } else {
    sub_339 = sub_338;
  };
  if (controller_ck_11_1) {
    sub_335 = sub_339;
  } else {
    sub_335 = sub_336;
  };
  if (controller_change_shift) {
    v_533 = sub_335;
    sub_329 = sub_330;
  } else {
    v_533 = sub_330;
    sub_329 = sub_335;
  };
  if (controller_ck_1) {
    sub_328 = v_533;
  } else {
    sub_328 = sub_329;
  };
  sub_327 = sub_328;
  sub_326 = sub_327;
  sub_325 = sub_326;
  if (controller_c_window) {
    sub_346 = false;
  } else {
    sub_346 = sub_53;
  };
  if (controller_cleaner) {
    v_531 = false;
    sub_345 = sub_346;
  } else {
    v_531 = sub_346;
    sub_345 = false;
  };
  if (controller_ck_17_1) {
    sub_344 = v_531;
    sub_348 = sub_51;
  } else {
    sub_344 = sub_345;
    sub_348 = sub_56;
  };
  sub_347 = sub_348;
  if (controller_c_pc) {
    sub_343 = sub_344;
  } else {
    sub_343 = sub_347;
  };
  if (controller_v_407) {
    sub_354 = sub_192;
  } else {
    sub_354 = false;
  };
  sub_353 = sub_354;
  if (controller_cleaner) {
    v_530 = false;
    sub_352 = sub_353;
  } else {
    v_530 = sub_353;
    sub_352 = false;
  };
  if (controller_ck_17_1) {
    sub_351 = v_530;
  } else {
    sub_351 = sub_352;
  };
  sub_350 = sub_351;
  sub_349 = sub_350;
  if (controller_change_shift) {
    v_532 = sub_349;
    sub_342 = sub_343;
  } else {
    v_532 = sub_343;
    sub_342 = sub_349;
  };
  if (controller_ck_1) {
    sub_341 = v_532;
  } else {
    sub_341 = sub_342;
  };
  sub_340 = sub_341;
  if (controller_air_failed_recovered) {
    v_534 = sub_340;
  } else {
    v_534 = sub_327;
  };
  if (controller_c_air_2) {
    v_535 = v_534;
  } else {
    v_535 = sub_326;
  };
  if (controller_c_air_1) {
    sub_324 = sub_325;
  } else {
    sub_324 = v_535;
  };
  if (controller_v_407) {
    v_524 = sub_194;
  } else {
    v_524 = false;
  };
  if (controller_c_window) {
    sub_361 = v_524;
  } else {
    sub_361 = sub_53;
  };
  if (controller_cleaner) {
    v_525 = false;
    sub_360 = sub_361;
  } else {
    v_525 = sub_361;
    sub_360 = false;
  };
  if (controller_ck_17_1) {
    sub_359 = v_525;
  } else {
    sub_359 = sub_360;
  };
  sub_358 = sub_359;
  if (controller_c_pc) {
    sub_357 = sub_358;
  } else {
    sub_357 = sub_347;
  };
  sub_362 = sub_347;
  if (controller_change_shift) {
    v_526 = sub_362;
    sub_356 = sub_357;
  } else {
    v_526 = sub_357;
    sub_356 = sub_362;
  };
  if (controller_ck_1) {
    v_527 = v_526;
  } else {
    v_527 = sub_356;
  };
  sub_366 = sub_52;
  sub_365 = sub_366;
  if (controller_c_pc) {
    sub_364 = sub_358;
    sub_367 = sub_347;
  } else {
    sub_364 = sub_365;
    sub_367 = sub_365;
  };
  if (controller_change_shift) {
    v_528 = sub_367;
    sub_363 = sub_364;
  } else {
    v_528 = sub_364;
    sub_363 = sub_367;
  };
  if (controller_ck_1) {
    v_529 = v_528;
  } else {
    v_529 = sub_363;
  };
  if (controller_c_closet) {
    sub_355 = v_527;
  } else {
    sub_355 = v_529;
  };
  if (controller_air_failed_recovered) {
    v_536 = sub_327;
  } else {
    v_536 = sub_355;
  };
  if (controller_v_408) {
    sub_377 = sub_55;
  } else {
    sub_377 = false;
  };
  if (controller_v_407) {
    sub_376 = sub_377;
  } else {
    sub_376 = false;
  };
  if (controller_c_window) {
    sub_375 = sub_376;
  } else {
    sub_375 = sub_53;
  };
  if (controller_cleaner) {
    v_522 = false;
    sub_374 = sub_375;
  } else {
    v_522 = sub_375;
    sub_374 = false;
  };
  if (controller_ck_17_1) {
    sub_373 = v_522;
  } else {
    sub_373 = sub_374;
  };
  if (controller_c_pc) {
    sub_372 = sub_373;
  } else {
    sub_372 = sub_347;
  };
  if (controller_change_shift) {
    v_523 = sub_349;
    sub_371 = sub_372;
  } else {
    v_523 = sub_372;
    sub_371 = sub_349;
  };
  if (controller_ck_1) {
    sub_370 = v_523;
  } else {
    sub_370 = sub_371;
  };
  sub_369 = sub_370;
  if (controller_air_failed_recovered) {
    v_539 = sub_327;
  } else {
    v_539 = sub_369;
  };
  sub_368 = sub_369;
  if (controller_c_air_2) {
    v_537 = v_536;
  } else {
    v_537 = sub_368;
  };
  sub_378 = sub_340;
  if (controller_c_air_2) {
    v_540 = v_539;
  } else {
    v_540 = sub_378;
  };
  if (controller_c_air_1) {
    v_538 = v_537;
  } else {
    v_538 = sub_378;
  };
  if (controller_v_445) {
    sub_323 = v_538;
  } else {
    sub_323 = sub_324;
  };
  sub_379 = sub_368;
  if (controller_v_447) {
    sub_322 = sub_379;
  } else {
    sub_322 = sub_323;
  };
  if (controller_air_failed_recovered) {
    v_519 = sub_369;
  } else {
    v_519 = sub_327;
  };
  if (controller_c_air_2) {
    v_520 = v_519;
  } else {
    v_520 = sub_326;
  };
  if (controller_c_air_1) {
    v_521 = v_520;
  } else {
    v_521 = sub_325;
  };
  if (controller_air_failed_recovered) {
    v_517 = sub_327;
  } else {
    v_517 = sub_340;
  };
  if (controller_c_air_2) {
    v_518 = v_517;
  } else {
    v_518 = sub_368;
  };
  sub_383 = sub_355;
  sub_382 = sub_383;
  if (controller_c_air_1) {
    v_541 = v_540;
    sub_381 = sub_382;
  } else {
    v_541 = sub_382;
    sub_381 = v_518;
  };
  if (controller_v_445) {
    sub_380 = v_521;
  } else {
    sub_380 = sub_381;
  };
  if (controller_air_failed_recovered) {
    v_515 = sub_355;
  } else {
    v_515 = sub_327;
  };
  if (controller_c_air_2) {
    v_516 = v_515;
  } else {
    v_516 = sub_326;
  };
  if (controller_c_air_1) {
    sub_384 = v_516;
  } else {
    sub_384 = sub_325;
  };
  if (controller_v_445) {
    v_542 = v_541;
  } else {
    v_542 = sub_384;
  };
  if (controller_v_447) {
    v_543 = v_542;
  } else {
    v_543 = sub_380;
  };
  if (controller_v_446) {
    v_544 = v_543;
  } else {
    v_544 = sub_322;
  };
  sub_396 = sub_77;
  if (controller_c_door) {
    sub_395 = sub_396;
  } else {
    sub_395 = false;
  };
  sub_394 = sub_395;
  if (controller_c_door) {
    sub_397 = false;
  } else {
    sub_397 = sub_396;
  };
  if (controller_ck_11_1) {
    sub_393 = sub_397;
  } else {
    sub_393 = sub_394;
  };
  sub_401 = sub_96;
  if (controller_c_door) {
    sub_400 = sub_401;
  } else {
    sub_400 = false;
  };
  sub_399 = sub_400;
  if (controller_c_door) {
    sub_402 = false;
  } else {
    sub_402 = sub_401;
  };
  if (controller_ck_11_1) {
    sub_398 = sub_402;
  } else {
    sub_398 = sub_399;
  };
  if (controller_change_shift) {
    v_509 = sub_398;
    sub_392 = sub_393;
  } else {
    v_509 = sub_393;
    sub_392 = sub_398;
  };
  if (controller_ck_1) {
    sub_391 = v_509;
  } else {
    sub_391 = sub_392;
  };
  sub_390 = sub_391;
  sub_389 = sub_390;
  sub_388 = sub_389;
  if (controller_c_window) {
    sub_409 = false;
  } else {
    sub_409 = sub_109;
  };
  if (controller_cleaner) {
    v_507 = false;
    sub_408 = sub_409;
  } else {
    v_507 = sub_409;
    sub_408 = false;
  };
  if (controller_ck_17_1) {
    sub_407 = v_507;
    sub_411 = sub_107;
  } else {
    sub_407 = sub_408;
    sub_411 = sub_111;
  };
  sub_410 = sub_411;
  if (controller_c_pc) {
    sub_406 = sub_407;
  } else {
    sub_406 = sub_410;
  };
  if (controller_v_407) {
    sub_417 = sub_239;
  } else {
    sub_417 = false;
  };
  sub_416 = sub_417;
  if (controller_cleaner) {
    v_506 = false;
    sub_415 = sub_416;
  } else {
    v_506 = sub_416;
    sub_415 = false;
  };
  if (controller_ck_17_1) {
    sub_414 = v_506;
  } else {
    sub_414 = sub_415;
  };
  sub_413 = sub_414;
  sub_412 = sub_413;
  if (controller_change_shift) {
    v_508 = sub_412;
    sub_405 = sub_406;
  } else {
    v_508 = sub_406;
    sub_405 = sub_412;
  };
  if (controller_ck_1) {
    sub_404 = v_508;
  } else {
    sub_404 = sub_405;
  };
  sub_403 = sub_404;
  if (controller_air_failed_recovered) {
    v_510 = sub_403;
  } else {
    v_510 = sub_390;
  };
  if (controller_c_air_2) {
    v_511 = v_510;
  } else {
    v_511 = sub_389;
  };
  if (controller_c_air_1) {
    sub_387 = sub_388;
  } else {
    sub_387 = v_511;
  };
  if (controller_v_407) {
    v_500 = sub_241;
  } else {
    v_500 = false;
  };
  if (controller_c_window) {
    sub_424 = v_500;
  } else {
    sub_424 = sub_109;
  };
  if (controller_cleaner) {
    v_501 = false;
    sub_423 = sub_424;
  } else {
    v_501 = sub_424;
    sub_423 = false;
  };
  if (controller_ck_17_1) {
    sub_422 = v_501;
  } else {
    sub_422 = sub_423;
  };
  sub_421 = sub_422;
  if (controller_c_pc) {
    sub_420 = sub_421;
  } else {
    sub_420 = sub_410;
  };
  sub_425 = sub_410;
  if (controller_change_shift) {
    v_502 = sub_425;
    sub_419 = sub_420;
  } else {
    v_502 = sub_420;
    sub_419 = sub_425;
  };
  if (controller_ck_1) {
    v_503 = v_502;
  } else {
    v_503 = sub_419;
  };
  sub_429 = sub_108;
  sub_428 = sub_429;
  if (controller_c_pc) {
    sub_427 = sub_421;
    sub_430 = sub_410;
  } else {
    sub_427 = sub_428;
    sub_430 = sub_428;
  };
  if (controller_change_shift) {
    v_504 = sub_430;
    sub_426 = sub_427;
  } else {
    v_504 = sub_427;
    sub_426 = sub_430;
  };
  if (controller_ck_1) {
    v_505 = v_504;
  } else {
    v_505 = sub_426;
  };
  if (controller_c_closet) {
    sub_418 = v_503;
  } else {
    sub_418 = v_505;
  };
  if (controller_air_failed_recovered) {
    v_512 = sub_390;
  } else {
    v_512 = sub_418;
  };
  if (controller_c_window) {
    sub_438 = sub_376;
  } else {
    sub_438 = sub_109;
  };
  if (controller_cleaner) {
    v_498 = false;
    sub_437 = sub_438;
  } else {
    v_498 = sub_438;
    sub_437 = false;
  };
  if (controller_ck_17_1) {
    sub_436 = v_498;
  } else {
    sub_436 = sub_437;
  };
  if (controller_c_pc) {
    sub_435 = sub_436;
  } else {
    sub_435 = sub_410;
  };
  if (controller_change_shift) {
    v_499 = sub_412;
    sub_434 = sub_435;
  } else {
    v_499 = sub_435;
    sub_434 = sub_412;
  };
  if (controller_ck_1) {
    sub_433 = v_499;
  } else {
    sub_433 = sub_434;
  };
  sub_432 = sub_433;
  if (controller_air_failed_recovered) {
    v_545 = sub_390;
  } else {
    v_545 = sub_432;
  };
  sub_431 = sub_432;
  if (controller_c_air_2) {
    v_513 = v_512;
  } else {
    v_513 = sub_431;
  };
  sub_439 = sub_403;
  if (controller_c_air_2) {
    v_546 = v_545;
  } else {
    v_546 = sub_439;
  };
  if (controller_c_air_1) {
    v_514 = v_513;
  } else {
    v_514 = sub_439;
  };
  if (controller_v_445) {
    sub_386 = v_514;
  } else {
    sub_386 = sub_387;
  };
  sub_440 = sub_431;
  if (controller_v_447) {
    sub_385 = sub_440;
  } else {
    sub_385 = sub_386;
  };
  if (controller_air_failed_recovered) {
    v_495 = sub_432;
  } else {
    v_495 = sub_390;
  };
  if (controller_c_air_2) {
    v_496 = v_495;
  } else {
    v_496 = sub_389;
  };
  if (controller_c_air_1) {
    v_497 = v_496;
  } else {
    v_497 = sub_388;
  };
  if (controller_air_failed_recovered) {
    v_493 = sub_390;
  } else {
    v_493 = sub_403;
  };
  if (controller_c_air_2) {
    v_494 = v_493;
  } else {
    v_494 = sub_431;
  };
  sub_444 = sub_418;
  sub_443 = sub_444;
  if (controller_c_air_1) {
    v_547 = v_546;
    sub_442 = sub_443;
  } else {
    v_547 = sub_443;
    sub_442 = v_494;
  };
  if (controller_v_445) {
    sub_441 = v_497;
  } else {
    sub_441 = sub_442;
  };
  if (controller_air_failed_recovered) {
    v_491 = sub_418;
  } else {
    v_491 = sub_390;
  };
  if (controller_c_air_2) {
    v_492 = v_491;
  } else {
    v_492 = sub_389;
  };
  if (controller_c_air_1) {
    sub_445 = v_492;
  } else {
    sub_445 = sub_388;
  };
  if (controller_v_445) {
    v_548 = v_547;
  } else {
    v_548 = sub_445;
  };
  if (controller_v_447) {
    v_549 = v_548;
  } else {
    v_549 = sub_441;
  };
  if (controller_v_446) {
    v_550 = v_549;
  } else {
    v_550 = sub_385;
  };
  if (controller_blind_switch) {
    v_551 = v_544;
  } else {
    v_551 = v_550;
  };
  sub_458 = sub_133;
  if (controller_c_door) {
    sub_457 = sub_458;
  } else {
    sub_457 = false;
  };
  sub_456 = sub_457;
  if (controller_c_door) {
    sub_459 = false;
  } else {
    sub_459 = sub_458;
  };
  if (controller_ck_11_1) {
    sub_455 = sub_459;
  } else {
    sub_455 = sub_456;
  };
  sub_463 = sub_153;
  if (controller_c_door) {
    sub_462 = sub_463;
  } else {
    sub_462 = false;
  };
  sub_461 = sub_462;
  if (controller_c_door) {
    sub_464 = false;
  } else {
    sub_464 = sub_463;
  };
  if (controller_ck_11_1) {
    sub_460 = sub_464;
  } else {
    sub_460 = sub_461;
  };
  if (controller_change_shift) {
    v_480 = sub_460;
    sub_454 = sub_455;
  } else {
    v_480 = sub_455;
    sub_454 = sub_460;
  };
  if (controller_ck_1) {
    sub_453 = v_480;
  } else {
    sub_453 = sub_454;
  };
  sub_452 = sub_453;
  sub_451 = sub_452;
  sub_450 = sub_451;
  if (controller_c_window) {
    sub_471 = false;
  } else {
    sub_471 = sub_166;
  };
  if (controller_cleaner) {
    v_478 = false;
    sub_470 = sub_471;
  } else {
    v_478 = sub_471;
    sub_470 = false;
  };
  if (controller_ck_17_1) {
    sub_469 = v_478;
    sub_473 = sub_164;
  } else {
    sub_469 = sub_470;
    sub_473 = sub_168;
  };
  sub_472 = sub_473;
  if (controller_c_pc) {
    sub_468 = sub_469;
  } else {
    sub_468 = sub_472;
  };
  if (controller_v_407) {
    sub_479 = sub_287;
  } else {
    sub_479 = false;
  };
  sub_478 = sub_479;
  if (controller_cleaner) {
    v_477 = false;
    sub_477 = sub_478;
  } else {
    v_477 = sub_478;
    sub_477 = false;
  };
  if (controller_ck_17_1) {
    sub_476 = v_477;
  } else {
    sub_476 = sub_477;
  };
  sub_475 = sub_476;
  sub_474 = sub_475;
  if (controller_change_shift) {
    v_479 = sub_474;
    sub_467 = sub_468;
  } else {
    v_479 = sub_468;
    sub_467 = sub_474;
  };
  if (controller_ck_1) {
    sub_466 = v_479;
  } else {
    sub_466 = sub_467;
  };
  sub_465 = sub_466;
  if (controller_air_failed_recovered) {
    v_481 = sub_465;
  } else {
    v_481 = sub_452;
  };
  if (controller_c_air_2) {
    v_482 = v_481;
  } else {
    v_482 = sub_451;
  };
  if (controller_c_air_1) {
    sub_449 = sub_450;
  } else {
    sub_449 = v_482;
  };
  if (controller_v_407) {
    v_471 = sub_289;
  } else {
    v_471 = false;
  };
  if (controller_c_window) {
    sub_486 = v_471;
  } else {
    sub_486 = sub_166;
  };
  if (controller_cleaner) {
    v_472 = false;
    sub_485 = sub_486;
  } else {
    v_472 = sub_486;
    sub_485 = false;
  };
  if (controller_ck_17_1) {
    sub_484 = v_472;
  } else {
    sub_484 = sub_485;
  };
  sub_483 = sub_484;
  if (controller_c_pc) {
    sub_482 = sub_483;
  } else {
    sub_482 = sub_472;
  };
  sub_487 = sub_472;
  if (controller_change_shift) {
    v_473 = sub_487;
    sub_481 = sub_482;
  } else {
    v_473 = sub_482;
    sub_481 = sub_487;
  };
  if (controller_ck_1) {
    v_474 = v_473;
  } else {
    v_474 = sub_481;
  };
  sub_491 = sub_165;
  sub_490 = sub_491;
  if (controller_c_pc) {
    sub_489 = sub_483;
    sub_492 = sub_472;
  } else {
    sub_489 = sub_490;
    sub_492 = sub_490;
  };
  if (controller_change_shift) {
    v_475 = sub_492;
    sub_488 = sub_489;
  } else {
    v_475 = sub_489;
    sub_488 = sub_492;
  };
  if (controller_ck_1) {
    v_476 = v_475;
  } else {
    v_476 = sub_488;
  };
  if (controller_c_closet) {
    sub_480 = v_474;
  } else {
    sub_480 = v_476;
  };
  if (controller_air_failed_recovered) {
    v_483 = sub_452;
  } else {
    v_483 = sub_480;
  };
  if (controller_c_window) {
    sub_500 = sub_376;
  } else {
    sub_500 = sub_166;
  };
  if (controller_cleaner) {
    v_469 = false;
    sub_499 = sub_500;
  } else {
    v_469 = sub_500;
    sub_499 = false;
  };
  if (controller_ck_17_1) {
    sub_498 = v_469;
  } else {
    sub_498 = sub_499;
  };
  if (controller_c_pc) {
    sub_497 = sub_498;
  } else {
    sub_497 = sub_472;
  };
  if (controller_change_shift) {
    v_470 = sub_474;
    sub_496 = sub_497;
  } else {
    v_470 = sub_497;
    sub_496 = sub_474;
  };
  if (controller_ck_1) {
    sub_495 = v_470;
  } else {
    sub_495 = sub_496;
  };
  sub_494 = sub_495;
  if (controller_air_failed_recovered) {
    v_486 = sub_452;
  } else {
    v_486 = sub_494;
  };
  sub_493 = sub_494;
  if (controller_c_air_2) {
    v_484 = v_483;
  } else {
    v_484 = sub_493;
  };
  sub_501 = sub_465;
  if (controller_c_air_2) {
    v_487 = v_486;
  } else {
    v_487 = sub_501;
  };
  if (controller_c_air_1) {
    v_485 = v_484;
  } else {
    v_485 = sub_501;
  };
  if (controller_v_445) {
    sub_448 = v_485;
  } else {
    sub_448 = sub_449;
  };
  sub_502 = sub_493;
  if (controller_v_447) {
    sub_447 = sub_502;
  } else {
    sub_447 = sub_448;
  };
  if (controller_air_failed_recovered) {
    v_466 = sub_494;
  } else {
    v_466 = sub_452;
  };
  if (controller_c_air_2) {
    v_467 = v_466;
  } else {
    v_467 = sub_451;
  };
  if (controller_c_air_1) {
    v_468 = v_467;
  } else {
    v_468 = sub_450;
  };
  if (controller_air_failed_recovered) {
    v_464 = sub_452;
  } else {
    v_464 = sub_465;
  };
  if (controller_c_air_2) {
    v_465 = v_464;
  } else {
    v_465 = sub_493;
  };
  sub_506 = sub_480;
  sub_505 = sub_506;
  if (controller_c_air_1) {
    v_488 = v_487;
    sub_504 = sub_505;
  } else {
    v_488 = sub_505;
    sub_504 = v_465;
  };
  if (controller_v_445) {
    sub_503 = v_468;
  } else {
    sub_503 = sub_504;
  };
  if (controller_air_failed_recovered) {
    v_462 = sub_480;
  } else {
    v_462 = sub_452;
  };
  if (controller_c_air_2) {
    v_463 = v_462;
  } else {
    v_463 = sub_451;
  };
  if (controller_c_air_1) {
    sub_507 = v_463;
  } else {
    sub_507 = sub_450;
  };
  if (controller_v_445) {
    v_489 = v_488;
  } else {
    v_489 = sub_507;
  };
  if (controller_v_447) {
    v_490 = v_489;
  } else {
    v_490 = sub_503;
  };
  if (controller_v_446) {
    sub_446 = v_490;
  } else {
    sub_446 = sub_447;
  };
  if (controller_c_blind_1) {
    sub_321 = v_551;
  } else {
    sub_321 = sub_446;
  };
  sub_520 = sub_190;
  if (controller_c_door) {
    sub_519 = sub_520;
  } else {
    sub_519 = false;
  };
  sub_518 = sub_519;
  if (controller_c_door) {
    sub_521 = false;
  } else {
    sub_521 = sub_520;
  };
  if (controller_ck_11_1) {
    sub_517 = sub_521;
  } else {
    sub_517 = sub_518;
  };
  if (controller_change_shift) {
    v_442 = sub_335;
    sub_516 = sub_517;
  } else {
    v_442 = sub_517;
    sub_516 = sub_335;
  };
  if (controller_ck_1) {
    sub_515 = v_442;
  } else {
    sub_515 = sub_516;
  };
  sub_514 = sub_515;
  sub_513 = sub_514;
  sub_512 = sub_513;
  if (controller_c_window) {
    sub_528 = false;
  } else {
    sub_528 = sub_214;
  };
  if (controller_cleaner) {
    v_440 = false;
    sub_527 = sub_528;
  } else {
    v_440 = sub_528;
    sub_527 = false;
  };
  if (controller_ck_17_1) {
    sub_526 = v_440;
    sub_530 = sub_212;
  } else {
    sub_526 = sub_527;
    sub_530 = sub_216;
  };
  sub_529 = sub_530;
  if (controller_c_pc) {
    sub_525 = sub_526;
  } else {
    sub_525 = sub_529;
  };
  sub_535 = sub_191;
  if (controller_cleaner) {
    v_439 = false;
    sub_534 = sub_535;
  } else {
    v_439 = sub_535;
    sub_534 = false;
  };
  if (controller_ck_17_1) {
    sub_533 = v_439;
  } else {
    sub_533 = sub_534;
  };
  sub_532 = sub_533;
  sub_531 = sub_532;
  if (controller_change_shift) {
    v_441 = sub_531;
    sub_524 = sub_525;
  } else {
    v_441 = sub_525;
    sub_524 = sub_531;
  };
  if (controller_ck_1) {
    sub_523 = v_441;
  } else {
    sub_523 = sub_524;
  };
  sub_522 = sub_523;
  if (controller_air_failed_recovered) {
    v_443 = sub_522;
  } else {
    v_443 = sub_514;
  };
  if (controller_c_air_2) {
    v_444 = v_443;
  } else {
    v_444 = sub_513;
  };
  if (controller_c_air_1) {
    sub_511 = sub_512;
  } else {
    sub_511 = v_444;
  };
  if (controller_c_window) {
    sub_542 = sub_193;
  } else {
    sub_542 = sub_214;
  };
  if (controller_cleaner) {
    v_434 = false;
    sub_541 = sub_542;
  } else {
    v_434 = sub_542;
    sub_541 = false;
  };
  if (controller_ck_17_1) {
    sub_540 = v_434;
  } else {
    sub_540 = sub_541;
  };
  sub_539 = sub_540;
  if (controller_c_pc) {
    sub_538 = sub_539;
  } else {
    sub_538 = sub_529;
  };
  sub_543 = sub_529;
  if (controller_change_shift) {
    v_435 = sub_543;
    sub_537 = sub_538;
  } else {
    v_435 = sub_538;
    sub_537 = sub_543;
  };
  if (controller_ck_1) {
    v_436 = v_435;
  } else {
    v_436 = sub_537;
  };
  sub_547 = sub_213;
  sub_546 = sub_547;
  if (controller_c_pc) {
    sub_545 = sub_539;
    sub_548 = sub_529;
  } else {
    sub_545 = sub_546;
    sub_548 = sub_546;
  };
  if (controller_change_shift) {
    v_437 = sub_548;
    sub_544 = sub_545;
  } else {
    v_437 = sub_545;
    sub_544 = sub_548;
  };
  if (controller_ck_1) {
    v_438 = v_437;
  } else {
    v_438 = sub_544;
  };
  if (controller_c_closet) {
    sub_536 = v_436;
  } else {
    sub_536 = v_438;
  };
  if (controller_air_failed_recovered) {
    v_445 = sub_514;
  } else {
    v_445 = sub_536;
  };
  if (controller_v_408) {
    v_431 = false;
  } else {
    v_431 = sub_55;
  };
  if (controller_light_failed_recovered) {
    sub_558 = v_431;
  } else {
    sub_558 = sub_377;
  };
  if (controller_v_407) {
    sub_557 = false;
  } else {
    sub_557 = sub_558;
  };
  if (controller_c_window) {
    sub_556 = sub_557;
  } else {
    sub_556 = sub_214;
  };
  if (controller_cleaner) {
    v_432 = false;
    sub_555 = sub_556;
  } else {
    v_432 = sub_556;
    sub_555 = false;
  };
  if (controller_ck_17_1) {
    sub_554 = v_432;
  } else {
    sub_554 = sub_555;
  };
  if (controller_c_pc) {
    sub_553 = sub_554;
  } else {
    sub_553 = sub_529;
  };
  if (controller_change_shift) {
    v_433 = sub_531;
    sub_552 = sub_553;
  } else {
    v_433 = sub_553;
    sub_552 = sub_531;
  };
  if (controller_ck_1) {
    sub_551 = v_433;
  } else {
    sub_551 = sub_552;
  };
  sub_550 = sub_551;
  if (controller_air_failed_recovered) {
    v_448 = sub_514;
  } else {
    v_448 = sub_550;
  };
  sub_549 = sub_550;
  if (controller_c_air_2) {
    v_446 = v_445;
  } else {
    v_446 = sub_549;
  };
  sub_559 = sub_522;
  if (controller_c_air_2) {
    v_449 = v_448;
  } else {
    v_449 = sub_559;
  };
  if (controller_c_air_1) {
    v_447 = v_446;
  } else {
    v_447 = sub_559;
  };
  if (controller_v_445) {
    sub_510 = v_447;
  } else {
    sub_510 = sub_511;
  };
  sub_560 = sub_549;
  if (controller_v_447) {
    sub_509 = sub_560;
  } else {
    sub_509 = sub_510;
  };
  if (controller_air_failed_recovered) {
    v_428 = sub_550;
  } else {
    v_428 = sub_514;
  };
  if (controller_c_air_2) {
    v_429 = v_428;
  } else {
    v_429 = sub_513;
  };
  if (controller_c_air_1) {
    v_430 = v_429;
  } else {
    v_430 = sub_512;
  };
  if (controller_air_failed_recovered) {
    v_426 = sub_514;
  } else {
    v_426 = sub_522;
  };
  if (controller_c_air_2) {
    v_427 = v_426;
  } else {
    v_427 = sub_549;
  };
  sub_564 = sub_536;
  sub_563 = sub_564;
  if (controller_c_air_1) {
    v_450 = v_449;
    sub_562 = sub_563;
  } else {
    v_450 = sub_563;
    sub_562 = v_427;
  };
  if (controller_v_445) {
    sub_561 = v_430;
  } else {
    sub_561 = sub_562;
  };
  if (controller_air_failed_recovered) {
    v_424 = sub_536;
  } else {
    v_424 = sub_514;
  };
  if (controller_c_air_2) {
    v_425 = v_424;
  } else {
    v_425 = sub_513;
  };
  if (controller_c_air_1) {
    sub_565 = v_425;
  } else {
    sub_565 = sub_512;
  };
  if (controller_v_445) {
    v_451 = v_450;
  } else {
    v_451 = sub_565;
  };
  if (controller_v_447) {
    v_452 = v_451;
  } else {
    v_452 = sub_561;
  };
  if (controller_v_446) {
    v_453 = v_452;
  } else {
    v_453 = sub_509;
  };
  sub_577 = sub_237;
  if (controller_c_door) {
    sub_576 = sub_577;
  } else {
    sub_576 = false;
  };
  sub_575 = sub_576;
  if (controller_c_door) {
    sub_578 = false;
  } else {
    sub_578 = sub_577;
  };
  if (controller_ck_11_1) {
    sub_574 = sub_578;
  } else {
    sub_574 = sub_575;
  };
  if (controller_change_shift) {
    v_418 = sub_398;
    sub_573 = sub_574;
  } else {
    v_418 = sub_574;
    sub_573 = sub_398;
  };
  if (controller_ck_1) {
    sub_572 = v_418;
  } else {
    sub_572 = sub_573;
  };
  sub_571 = sub_572;
  sub_570 = sub_571;
  sub_569 = sub_570;
  if (controller_c_window) {
    sub_585 = false;
  } else {
    sub_585 = sub_261;
  };
  if (controller_cleaner) {
    v_416 = false;
    sub_584 = sub_585;
  } else {
    v_416 = sub_585;
    sub_584 = false;
  };
  if (controller_ck_17_1) {
    sub_583 = v_416;
    sub_587 = sub_259;
  } else {
    sub_583 = sub_584;
    sub_587 = sub_263;
  };
  sub_586 = sub_587;
  if (controller_c_pc) {
    sub_582 = sub_583;
  } else {
    sub_582 = sub_586;
  };
  sub_592 = sub_238;
  if (controller_cleaner) {
    v_415 = false;
    sub_591 = sub_592;
  } else {
    v_415 = sub_592;
    sub_591 = false;
  };
  if (controller_ck_17_1) {
    sub_590 = v_415;
  } else {
    sub_590 = sub_591;
  };
  sub_589 = sub_590;
  sub_588 = sub_589;
  if (controller_change_shift) {
    v_417 = sub_588;
    sub_581 = sub_582;
  } else {
    v_417 = sub_582;
    sub_581 = sub_588;
  };
  if (controller_ck_1) {
    sub_580 = v_417;
  } else {
    sub_580 = sub_581;
  };
  sub_579 = sub_580;
  if (controller_air_failed_recovered) {
    v_419 = sub_579;
  } else {
    v_419 = sub_571;
  };
  if (controller_c_air_2) {
    v_420 = v_419;
  } else {
    v_420 = sub_570;
  };
  if (controller_c_air_1) {
    sub_568 = sub_569;
  } else {
    sub_568 = v_420;
  };
  if (controller_c_window) {
    sub_599 = sub_240;
  } else {
    sub_599 = sub_261;
  };
  if (controller_cleaner) {
    v_410 = false;
    sub_598 = sub_599;
  } else {
    v_410 = sub_599;
    sub_598 = false;
  };
  if (controller_ck_17_1) {
    sub_597 = v_410;
  } else {
    sub_597 = sub_598;
  };
  sub_596 = sub_597;
  if (controller_c_pc) {
    sub_595 = sub_596;
  } else {
    sub_595 = sub_586;
  };
  sub_600 = sub_586;
  if (controller_change_shift) {
    v_411 = sub_600;
    sub_594 = sub_595;
  } else {
    v_411 = sub_595;
    sub_594 = sub_600;
  };
  if (controller_ck_1) {
    v_412 = v_411;
  } else {
    v_412 = sub_594;
  };
  sub_604 = sub_260;
  sub_603 = sub_604;
  if (controller_c_pc) {
    sub_602 = sub_596;
    sub_605 = sub_586;
  } else {
    sub_602 = sub_603;
    sub_605 = sub_603;
  };
  if (controller_change_shift) {
    v_413 = sub_605;
    sub_601 = sub_602;
  } else {
    v_413 = sub_602;
    sub_601 = sub_605;
  };
  if (controller_ck_1) {
    v_414 = v_413;
  } else {
    v_414 = sub_601;
  };
  if (controller_c_closet) {
    sub_593 = v_412;
  } else {
    sub_593 = v_414;
  };
  if (controller_air_failed_recovered) {
    v_421 = sub_571;
  } else {
    v_421 = sub_593;
  };
  if (controller_c_window) {
    sub_613 = sub_557;
  } else {
    sub_613 = sub_261;
  };
  if (controller_cleaner) {
    v_408 = false;
    sub_612 = sub_613;
  } else {
    v_408 = sub_613;
    sub_612 = false;
  };
  if (controller_ck_17_1) {
    sub_611 = v_408;
  } else {
    sub_611 = sub_612;
  };
  if (controller_c_pc) {
    sub_610 = sub_611;
  } else {
    sub_610 = sub_586;
  };
  if (controller_change_shift) {
    v_409 = sub_588;
    sub_609 = sub_610;
  } else {
    v_409 = sub_610;
    sub_609 = sub_588;
  };
  if (controller_ck_1) {
    sub_608 = v_409;
  } else {
    sub_608 = sub_609;
  };
  sub_607 = sub_608;
  if (controller_air_failed_recovered) {
    v_454 = sub_571;
  } else {
    v_454 = sub_607;
  };
  sub_606 = sub_607;
  if (controller_c_air_2) {
    v_422 = v_421;
  } else {
    v_422 = sub_606;
  };
  sub_614 = sub_579;
  if (controller_c_air_2) {
    v_455 = v_454;
  } else {
    v_455 = sub_614;
  };
  if (controller_c_air_1) {
    v_423 = v_422;
  } else {
    v_423 = sub_614;
  };
  if (controller_v_445) {
    sub_567 = v_423;
  } else {
    sub_567 = sub_568;
  };
  sub_615 = sub_606;
  if (controller_v_447) {
    sub_566 = sub_615;
  } else {
    sub_566 = sub_567;
  };
  if (controller_air_failed_recovered) {
    v_405 = sub_607;
  } else {
    v_405 = sub_571;
  };
  if (controller_c_air_2) {
    v_406 = v_405;
  } else {
    v_406 = sub_570;
  };
  if (controller_c_air_1) {
    v_407 = v_406;
  } else {
    v_407 = sub_569;
  };
  if (controller_air_failed_recovered) {
    v_403 = sub_571;
  } else {
    v_403 = sub_579;
  };
  if (controller_c_air_2) {
    v_404 = v_403;
  } else {
    v_404 = sub_606;
  };
  sub_619 = sub_593;
  sub_618 = sub_619;
  if (controller_c_air_1) {
    v_456 = v_455;
    sub_617 = sub_618;
  } else {
    v_456 = sub_618;
    sub_617 = v_404;
  };
  if (controller_v_445) {
    sub_616 = v_407;
  } else {
    sub_616 = sub_617;
  };
  if (controller_air_failed_recovered) {
    v_401 = sub_593;
  } else {
    v_401 = sub_571;
  };
  if (controller_c_air_2) {
    v_402 = v_401;
  } else {
    v_402 = sub_570;
  };
  if (controller_c_air_1) {
    sub_620 = v_402;
  } else {
    sub_620 = sub_569;
  };
  if (controller_v_445) {
    v_457 = v_456;
  } else {
    v_457 = sub_620;
  };
  if (controller_v_447) {
    v_458 = v_457;
  } else {
    v_458 = sub_616;
  };
  if (controller_v_446) {
    v_459 = v_458;
  } else {
    v_459 = sub_566;
  };
  if (controller_blind_switch) {
    v_460 = v_453;
  } else {
    v_460 = v_459;
  };
  sub_633 = sub_285;
  if (controller_c_door) {
    sub_632 = sub_633;
  } else {
    sub_632 = false;
  };
  sub_631 = sub_632;
  if (controller_c_door) {
    sub_634 = false;
  } else {
    sub_634 = sub_633;
  };
  if (controller_ck_11_1) {
    sub_630 = sub_634;
  } else {
    sub_630 = sub_631;
  };
  if (controller_change_shift) {
    v_390 = sub_460;
    sub_629 = sub_630;
  } else {
    v_390 = sub_630;
    sub_629 = sub_460;
  };
  if (controller_ck_1) {
    sub_628 = v_390;
  } else {
    sub_628 = sub_629;
  };
  sub_627 = sub_628;
  sub_626 = sub_627;
  sub_625 = sub_626;
  if (controller_c_window) {
    sub_641 = false;
  } else {
    sub_641 = sub_309;
  };
  if (controller_cleaner) {
    v_388 = false;
    sub_640 = sub_641;
  } else {
    v_388 = sub_641;
    sub_640 = false;
  };
  if (controller_ck_17_1) {
    sub_639 = v_388;
    sub_643 = sub_307;
  } else {
    sub_639 = sub_640;
    sub_643 = sub_311;
  };
  sub_642 = sub_643;
  if (controller_c_pc) {
    sub_638 = sub_639;
  } else {
    sub_638 = sub_642;
  };
  sub_648 = sub_286;
  if (controller_cleaner) {
    v_387 = false;
    sub_647 = sub_648;
  } else {
    v_387 = sub_648;
    sub_647 = false;
  };
  if (controller_ck_17_1) {
    sub_646 = v_387;
  } else {
    sub_646 = sub_647;
  };
  sub_645 = sub_646;
  sub_644 = sub_645;
  if (controller_change_shift) {
    v_389 = sub_644;
    sub_637 = sub_638;
  } else {
    v_389 = sub_638;
    sub_637 = sub_644;
  };
  if (controller_ck_1) {
    sub_636 = v_389;
  } else {
    sub_636 = sub_637;
  };
  sub_635 = sub_636;
  if (controller_air_failed_recovered) {
    v_391 = sub_635;
  } else {
    v_391 = sub_627;
  };
  if (controller_c_air_2) {
    v_392 = v_391;
  } else {
    v_392 = sub_626;
  };
  if (controller_c_air_1) {
    sub_624 = sub_625;
  } else {
    sub_624 = v_392;
  };
  if (controller_c_window) {
    sub_655 = sub_288;
  } else {
    sub_655 = sub_309;
  };
  if (controller_cleaner) {
    v_382 = false;
    sub_654 = sub_655;
  } else {
    v_382 = sub_655;
    sub_654 = false;
  };
  if (controller_ck_17_1) {
    sub_653 = v_382;
  } else {
    sub_653 = sub_654;
  };
  sub_652 = sub_653;
  if (controller_c_pc) {
    sub_651 = sub_652;
  } else {
    sub_651 = sub_642;
  };
  sub_656 = sub_642;
  if (controller_change_shift) {
    v_383 = sub_656;
    sub_650 = sub_651;
  } else {
    v_383 = sub_651;
    sub_650 = sub_656;
  };
  if (controller_ck_1) {
    v_384 = v_383;
  } else {
    v_384 = sub_650;
  };
  sub_660 = sub_308;
  sub_659 = sub_660;
  if (controller_c_pc) {
    sub_658 = sub_652;
    sub_661 = sub_642;
  } else {
    sub_658 = sub_659;
    sub_661 = sub_659;
  };
  if (controller_change_shift) {
    v_385 = sub_661;
    sub_657 = sub_658;
  } else {
    v_385 = sub_658;
    sub_657 = sub_661;
  };
  if (controller_ck_1) {
    v_386 = v_385;
  } else {
    v_386 = sub_657;
  };
  if (controller_c_closet) {
    sub_649 = v_384;
  } else {
    sub_649 = v_386;
  };
  if (controller_air_failed_recovered) {
    v_393 = sub_627;
  } else {
    v_393 = sub_649;
  };
  if (controller_c_window) {
    sub_669 = sub_557;
  } else {
    sub_669 = sub_309;
  };
  if (controller_cleaner) {
    v_380 = false;
    sub_668 = sub_669;
  } else {
    v_380 = sub_669;
    sub_668 = false;
  };
  if (controller_ck_17_1) {
    sub_667 = v_380;
  } else {
    sub_667 = sub_668;
  };
  if (controller_c_pc) {
    sub_666 = sub_667;
  } else {
    sub_666 = sub_642;
  };
  if (controller_change_shift) {
    v_381 = sub_644;
    sub_665 = sub_666;
  } else {
    v_381 = sub_666;
    sub_665 = sub_644;
  };
  if (controller_ck_1) {
    sub_664 = v_381;
  } else {
    sub_664 = sub_665;
  };
  sub_663 = sub_664;
  if (controller_air_failed_recovered) {
    v_396 = sub_627;
  } else {
    v_396 = sub_663;
  };
  sub_662 = sub_663;
  if (controller_c_air_2) {
    v_394 = v_393;
  } else {
    v_394 = sub_662;
  };
  sub_670 = sub_635;
  if (controller_c_air_2) {
    v_397 = v_396;
  } else {
    v_397 = sub_670;
  };
  if (controller_c_air_1) {
    v_395 = v_394;
  } else {
    v_395 = sub_670;
  };
  if (controller_v_445) {
    sub_623 = v_395;
  } else {
    sub_623 = sub_624;
  };
  sub_671 = sub_662;
  if (controller_v_447) {
    sub_622 = sub_671;
  } else {
    sub_622 = sub_623;
  };
  if (controller_air_failed_recovered) {
    v_377 = sub_663;
  } else {
    v_377 = sub_627;
  };
  if (controller_c_air_2) {
    v_378 = v_377;
  } else {
    v_378 = sub_626;
  };
  if (controller_c_air_1) {
    v_379 = v_378;
  } else {
    v_379 = sub_625;
  };
  if (controller_air_failed_recovered) {
    v_375 = sub_627;
  } else {
    v_375 = sub_635;
  };
  if (controller_c_air_2) {
    v_376 = v_375;
  } else {
    v_376 = sub_662;
  };
  sub_675 = sub_649;
  sub_674 = sub_675;
  if (controller_c_air_1) {
    v_398 = v_397;
    sub_673 = sub_674;
  } else {
    v_398 = sub_674;
    sub_673 = v_376;
  };
  if (controller_v_445) {
    sub_672 = v_379;
  } else {
    sub_672 = sub_673;
  };
  if (controller_air_failed_recovered) {
    v_373 = sub_649;
  } else {
    v_373 = sub_627;
  };
  if (controller_c_air_2) {
    v_374 = v_373;
  } else {
    v_374 = sub_626;
  };
  if (controller_c_air_1) {
    sub_676 = v_374;
  } else {
    sub_676 = sub_625;
  };
  if (controller_v_445) {
    v_399 = v_398;
  } else {
    v_399 = sub_676;
  };
  if (controller_v_447) {
    v_400 = v_399;
  } else {
    v_400 = sub_672;
  };
  if (controller_v_446) {
    sub_621 = v_400;
  } else {
    sub_621 = sub_622;
  };
  if (controller_c_blind_1) {
    v_461 = v_460;
  } else {
    v_461 = sub_621;
  };
  if (controller_c_light_1) {
    sub_508 = v_461;
  } else {
    sub_508 = sub_321;
  };
  if (controller_light_switch) {
    v_552 = sub_321;
  } else {
    v_552 = sub_508;
  };
  if (controller_c_light_2) {
    sub_320 = v_552;
  } else {
    sub_320 = sub_508;
  };
  if (controller_worker) {
    v_751 = sub_320;
    sub_2 = sub_3;
  } else {
    v_751 = sub_3;
    sub_2 = sub_320;
  };
  if (controller_ck_15_1) {
    sub_1 = v_751;
  } else {
    sub_1 = sub_2;
  };
  v_349 = !(controller_v_392);
  sub_695 = (v_349||false);
  if (controller_v_391) {
    v_350 = sub_695;
  } else {
    v_350 = sub_23;
  };
  if (controller_blind_failed_recovered) {
    sub_694 = sub_20;
  } else {
    sub_694 = v_350;
  };
  sub_693 = sub_694;
  if (controller_v_407) {
    v_351 = sub_693;
  } else {
    v_351 = false;
  };
  sub_698 = controller_v_391;
  sub_697 = sub_698;
  sub_696 = sub_697;
  if (controller_v_407) {
    v_352 = sub_696;
  } else {
    v_352 = false;
  };
  if (controller_c_window) {
    sub_692 = v_351;
  } else {
    sub_692 = v_352;
  };
  if (controller_cleaner) {
    v_353 = sub_692;
    sub_691 = false;
  } else {
    v_353 = false;
    sub_691 = sub_692;
  };
  if (controller_ck_17_1) {
    sub_690 = v_353;
  } else {
    sub_690 = sub_691;
  };
  if (controller_c_door) {
    v_356 = false;
    v_354 = sub_690;
  } else {
    v_356 = sub_690;
    v_354 = false;
  };
  v_346 = !(controller_v_391);
  sub_704 = (v_346||sub_22);
  sub_703 = sub_704;
  sub_702 = sub_703;
  if (controller_v_408) {
    sub_705 = false;
  } else {
    sub_705 = sub_703;
  };
  if (controller_v_407) {
    v_347 = sub_705;
  } else {
    v_347 = sub_702;
  };
  if (controller_c_window) {
    sub_701 = v_347;
  } else {
    sub_701 = false;
  };
  if (controller_cleaner) {
    v_348 = sub_692;
    sub_700 = sub_701;
  } else {
    v_348 = sub_701;
    sub_700 = sub_692;
  };
  if (controller_ck_17_1) {
    sub_699 = v_348;
  } else {
    sub_699 = sub_700;
  };
  if (controller_cleaner) {
    v_345 = false;
    sub_707 = sub_701;
  } else {
    v_345 = sub_701;
    sub_707 = false;
  };
  if (controller_ck_17_1) {
    sub_706 = v_345;
  } else {
    sub_706 = sub_707;
  };
  if (controller_c_door) {
    v_357 = sub_706;
  } else {
    v_357 = sub_699;
  };
  if (controller_c_pc) {
    v_358 = v_356;
  } else {
    v_358 = v_357;
  };
  if (controller_c_door) {
    v_355 = sub_699;
  } else {
    v_355 = sub_706;
  };
  if (controller_c_pc) {
    sub_689 = v_354;
  } else {
    sub_689 = v_355;
  };
  if (controller_ck_11_1) {
    sub_688 = v_358;
  } else {
    sub_688 = sub_689;
  };
  if (controller_c_window) {
    sub_713 = false;
  } else {
    sub_713 = sub_696;
  };
  if (controller_cleaner) {
    v_341 = sub_713;
    sub_712 = false;
  } else {
    v_341 = false;
    sub_712 = sub_713;
  };
  if (controller_ck_17_1) {
    sub_711 = v_341;
  } else {
    sub_711 = sub_712;
  };
  if (controller_c_door) {
    sub_710 = sub_711;
  } else {
    sub_710 = false;
  };
  if (controller_cleaner) {
    v_340 = sub_713;
    sub_715 = sub_701;
  } else {
    v_340 = sub_701;
    sub_715 = sub_713;
  };
  if (controller_ck_17_1) {
    sub_714 = v_340;
  } else {
    sub_714 = sub_715;
  };
  if (controller_c_door) {
    v_343 = sub_706;
    v_342 = sub_714;
  } else {
    v_343 = sub_714;
    v_342 = sub_706;
  };
  if (controller_c_pc) {
    sub_709 = sub_710;
  } else {
    sub_709 = v_342;
  };
  if (controller_c_door) {
    sub_716 = false;
  } else {
    sub_716 = sub_711;
  };
  if (controller_c_pc) {
    v_344 = sub_716;
  } else {
    v_344 = v_343;
  };
  if (controller_ck_11_1) {
    sub_708 = v_344;
  } else {
    sub_708 = sub_709;
  };
  if (controller_change_shift) {
    v_359 = sub_708;
    sub_687 = sub_688;
  } else {
    v_359 = sub_688;
    sub_687 = sub_708;
  };
  if (controller_ck_1) {
    sub_686 = v_359;
  } else {
    sub_686 = sub_687;
  };
  sub_685 = sub_686;
  sub_684 = sub_685;
  sub_683 = sub_684;
  if (controller_c_pc) {
    sub_720 = false;
  } else {
    sub_720 = sub_706;
  };
  sub_719 = sub_720;
  sub_718 = sub_719;
  if (controller_air_failed_recovered) {
    v_339 = sub_718;
  } else {
    v_339 = sub_685;
  };
  if (controller_c_air_2) {
    sub_717 = v_339;
  } else {
    sub_717 = sub_684;
  };
  if (controller_c_air_1) {
    sub_682 = sub_683;
  } else {
    sub_682 = sub_717;
  };
  sub_728 = true;
  if (controller_v_408) {
    sub_727 = sub_728;
  } else {
    sub_727 = sub_697;
  };
  if (controller_v_407) {
    sub_726 = sub_727;
  } else {
    sub_726 = false;
  };
  sub_725 = sub_726;
  if (controller_cleaner) {
    sub_724 = false;
    sub_729 = sub_725;
  } else {
    sub_724 = sub_725;
    sub_729 = false;
  };
  if (controller_ck_17_1) {
    sub_723 = sub_729;
  } else {
    sub_723 = sub_724;
  };
  if (controller_c_pc) {
    sub_722 = false;
  } else {
    sub_722 = sub_723;
  };
  if (controller_c_closet) {
    sub_721 = false;
  } else {
    sub_721 = sub_722;
  };
  if (controller_air_failed_recovered) {
    v_360 = sub_685;
  } else {
    v_360 = sub_721;
  };
  sub_730 = sub_718;
  if (controller_c_air_2) {
    v_361 = v_360;
  } else {
    v_361 = sub_730;
  };
  sub_731 = sub_730;
  if (controller_c_air_1) {
    v_362 = v_361;
  } else {
    v_362 = sub_731;
  };
  if (controller_v_445) {
    sub_681 = v_362;
  } else {
    sub_681 = sub_682;
  };
  if (controller_v_447) {
    sub_680 = sub_731;
  } else {
    sub_680 = sub_681;
  };
  if (controller_c_air_1) {
    v_338 = sub_717;
  } else {
    v_338 = sub_683;
  };
  sub_735 = sub_721;
  sub_734 = sub_735;
  if (controller_air_failed_recovered) {
    v_337 = sub_685;
  } else {
    v_337 = sub_718;
  };
  if (controller_c_air_2) {
    sub_736 = v_337;
  } else {
    sub_736 = sub_730;
  };
  if (controller_c_air_1) {
    v_363 = sub_736;
    sub_733 = sub_734;
  } else {
    v_363 = sub_734;
    sub_733 = sub_736;
  };
  if (controller_v_445) {
    sub_732 = v_338;
  } else {
    sub_732 = sub_733;
  };
  if (controller_air_failed_recovered) {
    v_335 = sub_721;
  } else {
    v_335 = sub_685;
  };
  if (controller_c_air_2) {
    v_336 = v_335;
  } else {
    v_336 = sub_684;
  };
  if (controller_c_air_1) {
    sub_737 = v_336;
  } else {
    sub_737 = sub_683;
  };
  if (controller_v_445) {
    v_364 = v_363;
  } else {
    v_364 = sub_737;
  };
  if (controller_v_447) {
    v_365 = v_364;
  } else {
    v_365 = sub_732;
  };
  if (controller_v_446) {
    v_366 = v_365;
  } else {
    v_366 = sub_680;
  };
  sub_753 = (controller_v_392||false);
  if (controller_blind_failed_recovered) {
    sub_752 = sub_753;
  } else {
    sub_752 = sub_695;
  };
  sub_751 = sub_752;
  if (controller_v_407) {
    v_323 = sub_751;
  } else {
    v_323 = false;
  };
  v_321 = !(controller_v_391);
  v_322 = (v_321||sub_753);
  v_320 = !(controller_v_391);
  sub_756 = (v_320||sub_695);
  if (controller_blind_failed_recovered) {
    sub_755 = v_322;
  } else {
    sub_755 = sub_756;
  };
  sub_754 = sub_755;
  if (controller_v_407) {
    v_324 = sub_754;
  } else {
    v_324 = false;
  };
  if (controller_c_window) {
    sub_750 = v_323;
  } else {
    sub_750 = v_324;
  };
  if (controller_cleaner) {
    v_325 = sub_750;
    sub_749 = false;
  } else {
    v_325 = false;
    sub_749 = sub_750;
  };
  if (controller_ck_17_1) {
    sub_748 = v_325;
  } else {
    sub_748 = sub_749;
  };
  if (controller_c_door) {
    v_328 = false;
    v_326 = sub_748;
  } else {
    v_328 = sub_748;
    v_326 = false;
  };
  v_317 = (controller_v_391||sub_695);
  v_316 = (controller_v_391||sub_753);
  if (controller_blind_failed_recovered) {
    sub_761 = v_316;
  } else {
    sub_761 = v_317;
  };
  sub_760 = sub_761;
  if (controller_v_408) {
    sub_762 = false;
  } else {
    sub_762 = sub_761;
  };
  if (controller_v_407) {
    v_318 = sub_762;
  } else {
    v_318 = sub_760;
  };
  if (controller_c_window) {
    sub_759 = v_318;
  } else {
    sub_759 = false;
  };
  if (controller_cleaner) {
    v_319 = sub_750;
    sub_758 = sub_759;
  } else {
    v_319 = sub_759;
    sub_758 = sub_750;
  };
  if (controller_ck_17_1) {
    sub_757 = v_319;
  } else {
    sub_757 = sub_758;
  };
  if (controller_cleaner) {
    v_315 = false;
    sub_764 = sub_759;
  } else {
    v_315 = sub_759;
    sub_764 = false;
  };
  if (controller_ck_17_1) {
    sub_763 = v_315;
  } else {
    sub_763 = sub_764;
  };
  if (controller_c_door) {
    v_329 = sub_763;
  } else {
    v_329 = sub_757;
  };
  if (controller_c_pc) {
    v_330 = v_328;
  } else {
    v_330 = v_329;
  };
  if (controller_c_door) {
    v_327 = sub_757;
  } else {
    v_327 = sub_763;
  };
  if (controller_c_pc) {
    sub_747 = v_326;
  } else {
    sub_747 = v_327;
  };
  if (controller_ck_11_1) {
    sub_746 = v_330;
  } else {
    sub_746 = sub_747;
  };
  if (controller_c_window) {
    sub_770 = false;
  } else {
    sub_770 = sub_754;
  };
  if (controller_cleaner) {
    v_311 = sub_770;
    sub_769 = false;
  } else {
    v_311 = false;
    sub_769 = sub_770;
  };
  if (controller_ck_17_1) {
    sub_768 = v_311;
  } else {
    sub_768 = sub_769;
  };
  if (controller_c_door) {
    sub_767 = sub_768;
  } else {
    sub_767 = false;
  };
  if (controller_cleaner) {
    v_310 = sub_770;
    sub_772 = sub_759;
  } else {
    v_310 = sub_759;
    sub_772 = sub_770;
  };
  if (controller_ck_17_1) {
    sub_771 = v_310;
  } else {
    sub_771 = sub_772;
  };
  if (controller_c_door) {
    v_313 = sub_763;
    v_312 = sub_771;
  } else {
    v_313 = sub_771;
    v_312 = sub_763;
  };
  if (controller_c_pc) {
    sub_766 = sub_767;
  } else {
    sub_766 = v_312;
  };
  if (controller_c_door) {
    sub_773 = false;
  } else {
    sub_773 = sub_768;
  };
  if (controller_c_pc) {
    v_314 = sub_773;
  } else {
    v_314 = v_313;
  };
  if (controller_ck_11_1) {
    sub_765 = v_314;
  } else {
    sub_765 = sub_766;
  };
  if (controller_change_shift) {
    v_331 = sub_765;
    sub_745 = sub_746;
  } else {
    v_331 = sub_746;
    sub_745 = sub_765;
  };
  if (controller_ck_1) {
    sub_744 = v_331;
  } else {
    sub_744 = sub_745;
  };
  sub_743 = sub_744;
  sub_742 = sub_743;
  sub_741 = sub_742;
  if (controller_c_pc) {
    sub_777 = false;
  } else {
    sub_777 = sub_763;
  };
  sub_776 = sub_777;
  sub_775 = sub_776;
  if (controller_air_failed_recovered) {
    v_309 = sub_775;
  } else {
    v_309 = sub_743;
  };
  if (controller_c_air_2) {
    sub_774 = v_309;
  } else {
    sub_774 = sub_742;
  };
  if (controller_c_air_1) {
    sub_740 = sub_741;
  } else {
    sub_740 = sub_774;
  };
  if (controller_v_408) {
    sub_784 = sub_728;
  } else {
    sub_784 = sub_755;
  };
  if (controller_v_407) {
    sub_783 = sub_784;
  } else {
    sub_783 = false;
  };
  sub_782 = sub_783;
  if (controller_cleaner) {
    sub_781 = false;
    sub_785 = sub_782;
  } else {
    sub_781 = sub_782;
    sub_785 = false;
  };
  if (controller_ck_17_1) {
    sub_780 = sub_785;
  } else {
    sub_780 = sub_781;
  };
  if (controller_c_pc) {
    sub_779 = false;
  } else {
    sub_779 = sub_780;
  };
  if (controller_c_closet) {
    sub_778 = false;
  } else {
    sub_778 = sub_779;
  };
  if (controller_air_failed_recovered) {
    v_332 = sub_743;
  } else {
    v_332 = sub_778;
  };
  sub_786 = sub_775;
  if (controller_c_air_2) {
    v_333 = v_332;
  } else {
    v_333 = sub_786;
  };
  sub_787 = sub_786;
  if (controller_c_air_1) {
    v_334 = v_333;
  } else {
    v_334 = sub_787;
  };
  if (controller_v_445) {
    sub_739 = v_334;
  } else {
    sub_739 = sub_740;
  };
  if (controller_v_447) {
    sub_738 = sub_787;
  } else {
    sub_738 = sub_739;
  };
  if (controller_c_air_1) {
    v_308 = sub_774;
  } else {
    v_308 = sub_741;
  };
  sub_791 = sub_778;
  sub_790 = sub_791;
  if (controller_air_failed_recovered) {
    v_307 = sub_743;
  } else {
    v_307 = sub_775;
  };
  if (controller_c_air_2) {
    sub_792 = v_307;
  } else {
    sub_792 = sub_786;
  };
  if (controller_c_air_1) {
    v_367 = sub_792;
    sub_789 = sub_790;
  } else {
    v_367 = sub_790;
    sub_789 = sub_792;
  };
  if (controller_v_445) {
    sub_788 = v_308;
  } else {
    sub_788 = sub_789;
  };
  if (controller_air_failed_recovered) {
    v_305 = sub_778;
  } else {
    v_305 = sub_743;
  };
  if (controller_c_air_2) {
    v_306 = v_305;
  } else {
    v_306 = sub_742;
  };
  if (controller_c_air_1) {
    sub_793 = v_306;
  } else {
    sub_793 = sub_741;
  };
  if (controller_v_445) {
    v_368 = v_367;
  } else {
    v_368 = sub_793;
  };
  if (controller_v_447) {
    v_369 = v_368;
  } else {
    v_369 = sub_788;
  };
  if (controller_v_446) {
    v_370 = v_369;
  } else {
    v_370 = sub_738;
  };
  if (controller_blind_switch) {
    v_371 = v_366;
  } else {
    v_371 = v_370;
  };
  if (controller_v_391) {
    sub_810 = sub_695;
  } else {
    sub_810 = false;
  };
  sub_809 = sub_810;
  sub_808 = sub_809;
  if (controller_v_407) {
    v_290 = sub_808;
  } else {
    v_290 = false;
  };
  sub_813 = (controller_v_391||false);
  sub_812 = sub_813;
  sub_811 = sub_812;
  if (controller_v_407) {
    v_291 = sub_811;
  } else {
    v_291 = false;
  };
  if (controller_c_window) {
    sub_807 = v_290;
  } else {
    sub_807 = v_291;
  };
  if (controller_cleaner) {
    v_292 = sub_807;
    sub_806 = false;
  } else {
    v_292 = false;
    sub_806 = sub_807;
  };
  if (controller_ck_17_1) {
    sub_805 = v_292;
  } else {
    sub_805 = sub_806;
  };
  if (controller_c_door) {
    v_295 = false;
    v_293 = sub_805;
  } else {
    v_295 = sub_805;
    v_293 = false;
  };
  sub_818 = sub_756;
  sub_817 = sub_818;
  if (controller_v_408) {
    sub_819 = false;
  } else {
    sub_819 = sub_818;
  };
  if (controller_v_407) {
    v_288 = sub_819;
  } else {
    v_288 = sub_817;
  };
  if (controller_c_window) {
    sub_816 = v_288;
  } else {
    sub_816 = false;
  };
  if (controller_cleaner) {
    v_289 = sub_807;
    sub_815 = sub_816;
  } else {
    v_289 = sub_816;
    sub_815 = sub_807;
  };
  if (controller_ck_17_1) {
    sub_814 = v_289;
  } else {
    sub_814 = sub_815;
  };
  if (controller_cleaner) {
    v_287 = false;
    sub_821 = sub_816;
  } else {
    v_287 = sub_816;
    sub_821 = false;
  };
  if (controller_ck_17_1) {
    sub_820 = v_287;
  } else {
    sub_820 = sub_821;
  };
  if (controller_c_door) {
    v_296 = sub_820;
  } else {
    v_296 = sub_814;
  };
  if (controller_c_pc) {
    v_297 = v_295;
  } else {
    v_297 = v_296;
  };
  if (controller_c_door) {
    v_294 = sub_814;
  } else {
    v_294 = sub_820;
  };
  if (controller_c_pc) {
    sub_804 = v_293;
  } else {
    sub_804 = v_294;
  };
  if (controller_ck_11_1) {
    sub_803 = v_297;
  } else {
    sub_803 = sub_804;
  };
  if (controller_c_window) {
    sub_827 = false;
  } else {
    sub_827 = sub_811;
  };
  if (controller_cleaner) {
    v_283 = sub_827;
    sub_826 = false;
  } else {
    v_283 = false;
    sub_826 = sub_827;
  };
  if (controller_ck_17_1) {
    sub_825 = v_283;
  } else {
    sub_825 = sub_826;
  };
  if (controller_c_door) {
    sub_824 = sub_825;
  } else {
    sub_824 = false;
  };
  if (controller_cleaner) {
    v_282 = sub_827;
    sub_829 = sub_816;
  } else {
    v_282 = sub_816;
    sub_829 = sub_827;
  };
  if (controller_ck_17_1) {
    sub_828 = v_282;
  } else {
    sub_828 = sub_829;
  };
  if (controller_c_door) {
    v_285 = sub_820;
    v_284 = sub_828;
  } else {
    v_285 = sub_828;
    v_284 = sub_820;
  };
  if (controller_c_pc) {
    sub_823 = sub_824;
  } else {
    sub_823 = v_284;
  };
  if (controller_c_door) {
    sub_830 = false;
  } else {
    sub_830 = sub_825;
  };
  if (controller_c_pc) {
    v_286 = sub_830;
  } else {
    v_286 = v_285;
  };
  if (controller_ck_11_1) {
    sub_822 = v_286;
  } else {
    sub_822 = sub_823;
  };
  if (controller_change_shift) {
    v_298 = sub_822;
    sub_802 = sub_803;
  } else {
    v_298 = sub_803;
    sub_802 = sub_822;
  };
  if (controller_ck_1) {
    sub_801 = v_298;
  } else {
    sub_801 = sub_802;
  };
  sub_800 = sub_801;
  sub_799 = sub_800;
  sub_798 = sub_799;
  if (controller_c_pc) {
    sub_834 = false;
  } else {
    sub_834 = sub_820;
  };
  sub_833 = sub_834;
  sub_832 = sub_833;
  if (controller_air_failed_recovered) {
    v_281 = sub_832;
  } else {
    v_281 = sub_800;
  };
  if (controller_c_air_2) {
    sub_831 = v_281;
  } else {
    sub_831 = sub_799;
  };
  if (controller_c_air_1) {
    sub_797 = sub_798;
  } else {
    sub_797 = sub_831;
  };
  if (controller_v_408) {
    sub_841 = sub_728;
  } else {
    sub_841 = sub_812;
  };
  if (controller_v_407) {
    sub_840 = sub_841;
  } else {
    sub_840 = false;
  };
  sub_839 = sub_840;
  if (controller_cleaner) {
    sub_838 = false;
    sub_842 = sub_839;
  } else {
    sub_838 = sub_839;
    sub_842 = false;
  };
  if (controller_ck_17_1) {
    sub_837 = sub_842;
  } else {
    sub_837 = sub_838;
  };
  if (controller_c_pc) {
    sub_836 = false;
  } else {
    sub_836 = sub_837;
  };
  if (controller_c_closet) {
    sub_835 = false;
  } else {
    sub_835 = sub_836;
  };
  if (controller_air_failed_recovered) {
    v_299 = sub_800;
  } else {
    v_299 = sub_835;
  };
  sub_843 = sub_832;
  if (controller_c_air_2) {
    v_300 = v_299;
  } else {
    v_300 = sub_843;
  };
  sub_844 = sub_843;
  if (controller_c_air_1) {
    v_301 = v_300;
  } else {
    v_301 = sub_844;
  };
  if (controller_v_445) {
    sub_796 = v_301;
  } else {
    sub_796 = sub_797;
  };
  if (controller_v_447) {
    sub_795 = sub_844;
  } else {
    sub_795 = sub_796;
  };
  if (controller_c_air_1) {
    v_280 = sub_831;
  } else {
    v_280 = sub_798;
  };
  sub_848 = sub_835;
  sub_847 = sub_848;
  if (controller_air_failed_recovered) {
    v_279 = sub_800;
  } else {
    v_279 = sub_832;
  };
  if (controller_c_air_2) {
    sub_849 = v_279;
  } else {
    sub_849 = sub_843;
  };
  if (controller_c_air_1) {
    v_302 = sub_849;
    sub_846 = sub_847;
  } else {
    v_302 = sub_847;
    sub_846 = sub_849;
  };
  if (controller_v_445) {
    sub_845 = v_280;
  } else {
    sub_845 = sub_846;
  };
  if (controller_air_failed_recovered) {
    v_277 = sub_835;
  } else {
    v_277 = sub_800;
  };
  if (controller_c_air_2) {
    v_278 = v_277;
  } else {
    v_278 = sub_799;
  };
  if (controller_c_air_1) {
    sub_850 = v_278;
  } else {
    sub_850 = sub_798;
  };
  if (controller_v_445) {
    v_303 = v_302;
  } else {
    v_303 = sub_850;
  };
  if (controller_v_447) {
    v_304 = v_303;
  } else {
    v_304 = sub_845;
  };
  if (controller_v_446) {
    sub_794 = v_304;
  } else {
    sub_794 = sub_795;
  };
  if (controller_c_blind_1) {
    sub_679 = v_371;
  } else {
    sub_679 = sub_794;
  };
  if (controller_v_408) {
    v_254 = sub_694;
    sub_866 = false;
  } else {
    v_254 = false;
    sub_866 = sub_694;
  };
  if (controller_light_failed_recovered) {
    sub_865 = v_254;
  } else {
    sub_865 = sub_866;
  };
  if (controller_v_407) {
    v_255 = sub_865;
  } else {
    v_255 = sub_693;
  };
  if (controller_v_408) {
    v_253 = sub_697;
    sub_868 = false;
  } else {
    v_253 = false;
    sub_868 = sub_697;
  };
  if (controller_light_failed_recovered) {
    sub_867 = v_253;
  } else {
    sub_867 = sub_868;
  };
  if (controller_v_407) {
    v_256 = sub_867;
  } else {
    v_256 = sub_696;
  };
  if (controller_c_window) {
    sub_864 = v_255;
  } else {
    sub_864 = v_256;
  };
  if (controller_cleaner) {
    v_257 = sub_864;
    sub_863 = false;
  } else {
    v_257 = false;
    sub_863 = sub_864;
  };
  if (controller_ck_17_1) {
    sub_862 = v_257;
  } else {
    sub_862 = sub_863;
  };
  if (controller_c_door) {
    v_260 = false;
    v_258 = sub_862;
  } else {
    v_260 = sub_862;
    v_258 = false;
  };
  if (controller_v_408) {
    v_250 = sub_703;
  } else {
    v_250 = false;
  };
  if (controller_light_failed_recovered) {
    sub_872 = v_250;
  } else {
    sub_872 = sub_705;
  };
  if (controller_v_407) {
    v_251 = sub_702;
  } else {
    v_251 = sub_872;
  };
  if (controller_c_window) {
    sub_871 = v_251;
  } else {
    sub_871 = false;
  };
  if (controller_cleaner) {
    v_252 = sub_864;
    sub_870 = sub_871;
  } else {
    v_252 = sub_871;
    sub_870 = sub_864;
  };
  if (controller_ck_17_1) {
    sub_869 = v_252;
  } else {
    sub_869 = sub_870;
  };
  if (controller_cleaner) {
    v_249 = false;
    sub_874 = sub_871;
  } else {
    v_249 = sub_871;
    sub_874 = false;
  };
  if (controller_ck_17_1) {
    sub_873 = v_249;
  } else {
    sub_873 = sub_874;
  };
  if (controller_c_door) {
    v_261 = sub_873;
  } else {
    v_261 = sub_869;
  };
  if (controller_c_pc) {
    v_262 = v_260;
  } else {
    v_262 = v_261;
  };
  if (controller_c_door) {
    v_259 = sub_869;
  } else {
    v_259 = sub_873;
  };
  if (controller_c_pc) {
    sub_861 = v_258;
  } else {
    sub_861 = v_259;
  };
  if (controller_ck_11_1) {
    sub_860 = v_262;
  } else {
    sub_860 = sub_861;
  };
  if (controller_cleaner) {
    v_245 = sub_713;
    sub_878 = sub_871;
  } else {
    v_245 = sub_871;
    sub_878 = sub_713;
  };
  if (controller_ck_17_1) {
    sub_877 = v_245;
  } else {
    sub_877 = sub_878;
  };
  if (controller_c_door) {
    v_247 = sub_873;
  } else {
    v_247 = sub_877;
  };
  if (controller_c_pc) {
    v_248 = sub_716;
  } else {
    v_248 = v_247;
  };
  if (controller_c_door) {
    v_246 = sub_877;
  } else {
    v_246 = sub_873;
  };
  if (controller_c_pc) {
    sub_876 = sub_710;
  } else {
    sub_876 = v_246;
  };
  if (controller_ck_11_1) {
    sub_875 = v_248;
  } else {
    sub_875 = sub_876;
  };
  if (controller_change_shift) {
    v_263 = sub_875;
    sub_859 = sub_860;
  } else {
    v_263 = sub_860;
    sub_859 = sub_875;
  };
  if (controller_ck_1) {
    sub_858 = v_263;
  } else {
    sub_858 = sub_859;
  };
  sub_857 = sub_858;
  sub_856 = sub_857;
  sub_855 = sub_856;
  if (controller_c_pc) {
    sub_882 = false;
  } else {
    sub_882 = sub_873;
  };
  sub_881 = sub_882;
  sub_880 = sub_881;
  if (controller_air_failed_recovered) {
    v_244 = sub_880;
  } else {
    v_244 = sub_857;
  };
  if (controller_c_air_2) {
    sub_879 = v_244;
  } else {
    sub_879 = sub_856;
  };
  if (controller_c_air_1) {
    sub_854 = sub_855;
  } else {
    sub_854 = sub_879;
  };
  if (controller_v_408) {
    v_243 = sub_697;
  } else {
    v_243 = sub_728;
  };
  if (controller_light_failed_recovered) {
    sub_889 = v_243;
  } else {
    sub_889 = sub_727;
  };
  if (controller_v_407) {
    sub_888 = sub_867;
  } else {
    sub_888 = sub_889;
  };
  sub_887 = sub_888;
  if (controller_cleaner) {
    sub_886 = false;
    sub_890 = sub_887;
  } else {
    sub_886 = sub_887;
    sub_890 = false;
  };
  if (controller_ck_17_1) {
    sub_885 = sub_890;
  } else {
    sub_885 = sub_886;
  };
  if (controller_c_pc) {
    sub_884 = false;
  } else {
    sub_884 = sub_885;
  };
  if (controller_c_closet) {
    sub_883 = false;
  } else {
    sub_883 = sub_884;
  };
  if (controller_air_failed_recovered) {
    v_264 = sub_857;
  } else {
    v_264 = sub_883;
  };
  sub_891 = sub_880;
  if (controller_c_air_2) {
    v_265 = v_264;
  } else {
    v_265 = sub_891;
  };
  sub_892 = sub_891;
  if (controller_c_air_1) {
    v_266 = v_265;
  } else {
    v_266 = sub_892;
  };
  if (controller_v_445) {
    sub_853 = v_266;
  } else {
    sub_853 = sub_854;
  };
  if (controller_v_447) {
    sub_852 = sub_892;
  } else {
    sub_852 = sub_853;
  };
  if (controller_c_air_1) {
    v_242 = sub_879;
  } else {
    v_242 = sub_855;
  };
  sub_896 = sub_883;
  sub_895 = sub_896;
  if (controller_air_failed_recovered) {
    v_241 = sub_857;
  } else {
    v_241 = sub_880;
  };
  if (controller_c_air_2) {
    sub_897 = v_241;
  } else {
    sub_897 = sub_891;
  };
  if (controller_c_air_1) {
    v_267 = sub_897;
    sub_894 = sub_895;
  } else {
    v_267 = sub_895;
    sub_894 = sub_897;
  };
  if (controller_v_445) {
    sub_893 = v_242;
  } else {
    sub_893 = sub_894;
  };
  if (controller_air_failed_recovered) {
    v_239 = sub_883;
  } else {
    v_239 = sub_857;
  };
  if (controller_c_air_2) {
    v_240 = v_239;
  } else {
    v_240 = sub_856;
  };
  if (controller_c_air_1) {
    sub_898 = v_240;
  } else {
    sub_898 = sub_855;
  };
  if (controller_v_445) {
    v_268 = v_267;
  } else {
    v_268 = sub_898;
  };
  if (controller_v_447) {
    v_269 = v_268;
  } else {
    v_269 = sub_893;
  };
  if (controller_v_446) {
    v_270 = v_269;
  } else {
    v_270 = sub_852;
  };
  if (controller_v_408) {
    v_226 = sub_752;
    sub_913 = false;
  } else {
    v_226 = false;
    sub_913 = sub_752;
  };
  if (controller_light_failed_recovered) {
    sub_912 = v_226;
  } else {
    sub_912 = sub_913;
  };
  if (controller_v_407) {
    v_227 = sub_912;
  } else {
    v_227 = sub_751;
  };
  if (controller_v_408) {
    v_225 = sub_755;
    sub_915 = false;
  } else {
    v_225 = false;
    sub_915 = sub_755;
  };
  if (controller_light_failed_recovered) {
    sub_914 = v_225;
  } else {
    sub_914 = sub_915;
  };
  if (controller_v_407) {
    v_228 = sub_914;
  } else {
    v_228 = sub_754;
  };
  if (controller_c_window) {
    sub_911 = v_227;
  } else {
    sub_911 = v_228;
  };
  if (controller_cleaner) {
    v_229 = sub_911;
    sub_910 = false;
  } else {
    v_229 = false;
    sub_910 = sub_911;
  };
  if (controller_ck_17_1) {
    sub_909 = v_229;
  } else {
    sub_909 = sub_910;
  };
  if (controller_c_door) {
    v_232 = false;
    v_230 = sub_909;
  } else {
    v_232 = sub_909;
    v_230 = false;
  };
  if (controller_v_408) {
    v_222 = sub_761;
  } else {
    v_222 = false;
  };
  if (controller_light_failed_recovered) {
    sub_919 = v_222;
  } else {
    sub_919 = sub_762;
  };
  if (controller_v_407) {
    v_223 = sub_760;
  } else {
    v_223 = sub_919;
  };
  if (controller_c_window) {
    sub_918 = v_223;
  } else {
    sub_918 = false;
  };
  if (controller_cleaner) {
    v_224 = sub_911;
    sub_917 = sub_918;
  } else {
    v_224 = sub_918;
    sub_917 = sub_911;
  };
  if (controller_ck_17_1) {
    sub_916 = v_224;
  } else {
    sub_916 = sub_917;
  };
  if (controller_cleaner) {
    v_221 = false;
    sub_921 = sub_918;
  } else {
    v_221 = sub_918;
    sub_921 = false;
  };
  if (controller_ck_17_1) {
    sub_920 = v_221;
  } else {
    sub_920 = sub_921;
  };
  if (controller_c_door) {
    v_233 = sub_920;
  } else {
    v_233 = sub_916;
  };
  if (controller_c_pc) {
    v_234 = v_232;
  } else {
    v_234 = v_233;
  };
  if (controller_c_door) {
    v_231 = sub_916;
  } else {
    v_231 = sub_920;
  };
  if (controller_c_pc) {
    sub_908 = v_230;
  } else {
    sub_908 = v_231;
  };
  if (controller_ck_11_1) {
    sub_907 = v_234;
  } else {
    sub_907 = sub_908;
  };
  if (controller_cleaner) {
    v_217 = sub_770;
    sub_925 = sub_918;
  } else {
    v_217 = sub_918;
    sub_925 = sub_770;
  };
  if (controller_ck_17_1) {
    sub_924 = v_217;
  } else {
    sub_924 = sub_925;
  };
  if (controller_c_door) {
    v_219 = sub_920;
  } else {
    v_219 = sub_924;
  };
  if (controller_c_pc) {
    v_220 = sub_773;
  } else {
    v_220 = v_219;
  };
  if (controller_c_door) {
    v_218 = sub_924;
  } else {
    v_218 = sub_920;
  };
  if (controller_c_pc) {
    sub_923 = sub_767;
  } else {
    sub_923 = v_218;
  };
  if (controller_ck_11_1) {
    sub_922 = v_220;
  } else {
    sub_922 = sub_923;
  };
  if (controller_change_shift) {
    v_235 = sub_922;
    sub_906 = sub_907;
  } else {
    v_235 = sub_907;
    sub_906 = sub_922;
  };
  if (controller_ck_1) {
    sub_905 = v_235;
  } else {
    sub_905 = sub_906;
  };
  sub_904 = sub_905;
  sub_903 = sub_904;
  sub_902 = sub_903;
  if (controller_c_pc) {
    sub_929 = false;
  } else {
    sub_929 = sub_920;
  };
  sub_928 = sub_929;
  sub_927 = sub_928;
  if (controller_air_failed_recovered) {
    v_216 = sub_927;
  } else {
    v_216 = sub_904;
  };
  if (controller_c_air_2) {
    sub_926 = v_216;
  } else {
    sub_926 = sub_903;
  };
  if (controller_c_air_1) {
    sub_901 = sub_902;
  } else {
    sub_901 = sub_926;
  };
  if (controller_v_408) {
    v_215 = sub_755;
  } else {
    v_215 = sub_728;
  };
  if (controller_light_failed_recovered) {
    sub_936 = v_215;
  } else {
    sub_936 = sub_784;
  };
  if (controller_v_407) {
    sub_935 = sub_914;
  } else {
    sub_935 = sub_936;
  };
  sub_934 = sub_935;
  if (controller_cleaner) {
    sub_933 = false;
    sub_937 = sub_934;
  } else {
    sub_933 = sub_934;
    sub_937 = false;
  };
  if (controller_ck_17_1) {
    sub_932 = sub_937;
  } else {
    sub_932 = sub_933;
  };
  if (controller_c_pc) {
    sub_931 = false;
  } else {
    sub_931 = sub_932;
  };
  if (controller_c_closet) {
    sub_930 = false;
  } else {
    sub_930 = sub_931;
  };
  if (controller_air_failed_recovered) {
    v_236 = sub_904;
  } else {
    v_236 = sub_930;
  };
  sub_938 = sub_927;
  if (controller_c_air_2) {
    v_237 = v_236;
  } else {
    v_237 = sub_938;
  };
  sub_939 = sub_938;
  if (controller_c_air_1) {
    v_238 = v_237;
  } else {
    v_238 = sub_939;
  };
  if (controller_v_445) {
    sub_900 = v_238;
  } else {
    sub_900 = sub_901;
  };
  if (controller_v_447) {
    sub_899 = sub_939;
  } else {
    sub_899 = sub_900;
  };
  if (controller_c_air_1) {
    v_214 = sub_926;
  } else {
    v_214 = sub_902;
  };
  sub_943 = sub_930;
  sub_942 = sub_943;
  if (controller_air_failed_recovered) {
    v_213 = sub_904;
  } else {
    v_213 = sub_927;
  };
  if (controller_c_air_2) {
    sub_944 = v_213;
  } else {
    sub_944 = sub_938;
  };
  if (controller_c_air_1) {
    v_271 = sub_944;
    sub_941 = sub_942;
  } else {
    v_271 = sub_942;
    sub_941 = sub_944;
  };
  if (controller_v_445) {
    sub_940 = v_214;
  } else {
    sub_940 = sub_941;
  };
  if (controller_air_failed_recovered) {
    v_211 = sub_930;
  } else {
    v_211 = sub_904;
  };
  if (controller_c_air_2) {
    v_212 = v_211;
  } else {
    v_212 = sub_903;
  };
  if (controller_c_air_1) {
    sub_945 = v_212;
  } else {
    sub_945 = sub_902;
  };
  if (controller_v_445) {
    v_272 = v_271;
  } else {
    v_272 = sub_945;
  };
  if (controller_v_447) {
    v_273 = v_272;
  } else {
    v_273 = sub_940;
  };
  if (controller_v_446) {
    v_274 = v_273;
  } else {
    v_274 = sub_899;
  };
  if (controller_blind_switch) {
    v_275 = v_270;
  } else {
    v_275 = v_274;
  };
  if (controller_v_408) {
    v_195 = sub_809;
    sub_961 = false;
  } else {
    v_195 = false;
    sub_961 = sub_809;
  };
  if (controller_light_failed_recovered) {
    sub_960 = v_195;
  } else {
    sub_960 = sub_961;
  };
  if (controller_v_407) {
    v_196 = sub_960;
  } else {
    v_196 = sub_808;
  };
  if (controller_v_408) {
    v_194 = sub_812;
    sub_963 = false;
  } else {
    v_194 = false;
    sub_963 = sub_812;
  };
  if (controller_light_failed_recovered) {
    sub_962 = v_194;
  } else {
    sub_962 = sub_963;
  };
  if (controller_v_407) {
    v_197 = sub_962;
  } else {
    v_197 = sub_811;
  };
  if (controller_c_window) {
    sub_959 = v_196;
  } else {
    sub_959 = v_197;
  };
  if (controller_cleaner) {
    v_198 = sub_959;
    sub_958 = false;
  } else {
    v_198 = false;
    sub_958 = sub_959;
  };
  if (controller_ck_17_1) {
    sub_957 = v_198;
  } else {
    sub_957 = sub_958;
  };
  if (controller_c_door) {
    v_201 = false;
    v_199 = sub_957;
  } else {
    v_201 = sub_957;
    v_199 = false;
  };
  if (controller_v_408) {
    v_191 = sub_818;
  } else {
    v_191 = false;
  };
  if (controller_light_failed_recovered) {
    sub_967 = v_191;
  } else {
    sub_967 = sub_819;
  };
  if (controller_v_407) {
    v_192 = sub_817;
  } else {
    v_192 = sub_967;
  };
  if (controller_c_window) {
    sub_966 = v_192;
  } else {
    sub_966 = false;
  };
  if (controller_cleaner) {
    v_193 = sub_959;
    sub_965 = sub_966;
  } else {
    v_193 = sub_966;
    sub_965 = sub_959;
  };
  if (controller_ck_17_1) {
    sub_964 = v_193;
  } else {
    sub_964 = sub_965;
  };
  if (controller_cleaner) {
    v_190 = false;
    sub_969 = sub_966;
  } else {
    v_190 = sub_966;
    sub_969 = false;
  };
  if (controller_ck_17_1) {
    sub_968 = v_190;
  } else {
    sub_968 = sub_969;
  };
  if (controller_c_door) {
    v_202 = sub_968;
  } else {
    v_202 = sub_964;
  };
  if (controller_c_pc) {
    v_203 = v_201;
  } else {
    v_203 = v_202;
  };
  if (controller_c_door) {
    v_200 = sub_964;
  } else {
    v_200 = sub_968;
  };
  if (controller_c_pc) {
    sub_956 = v_199;
  } else {
    sub_956 = v_200;
  };
  if (controller_ck_11_1) {
    sub_955 = v_203;
  } else {
    sub_955 = sub_956;
  };
  if (controller_cleaner) {
    v_186 = sub_827;
    sub_973 = sub_966;
  } else {
    v_186 = sub_966;
    sub_973 = sub_827;
  };
  if (controller_ck_17_1) {
    sub_972 = v_186;
  } else {
    sub_972 = sub_973;
  };
  if (controller_c_door) {
    v_188 = sub_968;
  } else {
    v_188 = sub_972;
  };
  if (controller_c_pc) {
    v_189 = sub_830;
  } else {
    v_189 = v_188;
  };
  if (controller_c_door) {
    v_187 = sub_972;
  } else {
    v_187 = sub_968;
  };
  if (controller_c_pc) {
    sub_971 = sub_824;
  } else {
    sub_971 = v_187;
  };
  if (controller_ck_11_1) {
    sub_970 = v_189;
  } else {
    sub_970 = sub_971;
  };
  if (controller_change_shift) {
    v_204 = sub_970;
    sub_954 = sub_955;
  } else {
    v_204 = sub_955;
    sub_954 = sub_970;
  };
  if (controller_ck_1) {
    sub_953 = v_204;
  } else {
    sub_953 = sub_954;
  };
  sub_952 = sub_953;
  sub_951 = sub_952;
  sub_950 = sub_951;
  if (controller_c_pc) {
    sub_977 = false;
  } else {
    sub_977 = sub_968;
  };
  sub_976 = sub_977;
  sub_975 = sub_976;
  if (controller_air_failed_recovered) {
    v_185 = sub_975;
  } else {
    v_185 = sub_952;
  };
  if (controller_c_air_2) {
    sub_974 = v_185;
  } else {
    sub_974 = sub_951;
  };
  if (controller_c_air_1) {
    sub_949 = sub_950;
  } else {
    sub_949 = sub_974;
  };
  if (controller_v_408) {
    v_184 = sub_812;
  } else {
    v_184 = sub_728;
  };
  if (controller_light_failed_recovered) {
    sub_984 = v_184;
  } else {
    sub_984 = sub_841;
  };
  if (controller_v_407) {
    sub_983 = sub_962;
  } else {
    sub_983 = sub_984;
  };
  sub_982 = sub_983;
  if (controller_cleaner) {
    sub_981 = false;
    sub_985 = sub_982;
  } else {
    sub_981 = sub_982;
    sub_985 = false;
  };
  if (controller_ck_17_1) {
    sub_980 = sub_985;
  } else {
    sub_980 = sub_981;
  };
  if (controller_c_pc) {
    sub_979 = false;
  } else {
    sub_979 = sub_980;
  };
  if (controller_c_closet) {
    sub_978 = false;
  } else {
    sub_978 = sub_979;
  };
  if (controller_air_failed_recovered) {
    v_205 = sub_952;
  } else {
    v_205 = sub_978;
  };
  sub_986 = sub_975;
  if (controller_c_air_2) {
    v_206 = v_205;
  } else {
    v_206 = sub_986;
  };
  sub_987 = sub_986;
  if (controller_c_air_1) {
    v_207 = v_206;
  } else {
    v_207 = sub_987;
  };
  if (controller_v_445) {
    sub_948 = v_207;
  } else {
    sub_948 = sub_949;
  };
  if (controller_v_447) {
    sub_947 = sub_987;
  } else {
    sub_947 = sub_948;
  };
  if (controller_c_air_1) {
    v_183 = sub_974;
  } else {
    v_183 = sub_950;
  };
  sub_991 = sub_978;
  sub_990 = sub_991;
  if (controller_air_failed_recovered) {
    v_182 = sub_952;
  } else {
    v_182 = sub_975;
  };
  if (controller_c_air_2) {
    sub_992 = v_182;
  } else {
    sub_992 = sub_986;
  };
  if (controller_c_air_1) {
    v_208 = sub_992;
    sub_989 = sub_990;
  } else {
    v_208 = sub_990;
    sub_989 = sub_992;
  };
  if (controller_v_445) {
    sub_988 = v_183;
  } else {
    sub_988 = sub_989;
  };
  if (controller_air_failed_recovered) {
    v_180 = sub_978;
  } else {
    v_180 = sub_952;
  };
  if (controller_c_air_2) {
    v_181 = v_180;
  } else {
    v_181 = sub_951;
  };
  if (controller_c_air_1) {
    sub_993 = v_181;
  } else {
    sub_993 = sub_950;
  };
  if (controller_v_445) {
    v_209 = v_208;
  } else {
    v_209 = sub_993;
  };
  if (controller_v_447) {
    v_210 = v_209;
  } else {
    v_210 = sub_988;
  };
  if (controller_v_446) {
    sub_946 = v_210;
  } else {
    sub_946 = sub_947;
  };
  if (controller_c_blind_1) {
    v_276 = v_275;
  } else {
    v_276 = sub_946;
  };
  if (controller_c_light_1) {
    sub_851 = v_276;
  } else {
    sub_851 = sub_679;
  };
  if (controller_light_switch) {
    v_372 = sub_679;
  } else {
    v_372 = sub_851;
  };
  if (controller_c_light_2) {
    sub_678 = v_372;
  } else {
    sub_678 = sub_851;
  };
  sub_1007 = sub_692;
  if (controller_c_door) {
    sub_1006 = sub_1007;
  } else {
    sub_1006 = false;
  };
  sub_1005 = sub_1006;
  if (controller_c_door) {
    sub_1008 = false;
  } else {
    sub_1008 = sub_1007;
  };
  if (controller_ck_11_1) {
    sub_1004 = sub_1008;
  } else {
    sub_1004 = sub_1005;
  };
  sub_1012 = sub_713;
  if (controller_c_door) {
    sub_1011 = sub_1012;
  } else {
    sub_1011 = false;
  };
  sub_1010 = sub_1011;
  if (controller_c_door) {
    sub_1013 = false;
  } else {
    sub_1013 = sub_1012;
  };
  if (controller_ck_11_1) {
    sub_1009 = sub_1013;
  } else {
    sub_1009 = sub_1010;
  };
  if (controller_change_shift) {
    v_160 = sub_1009;
    sub_1003 = sub_1004;
  } else {
    v_160 = sub_1004;
    sub_1003 = sub_1009;
  };
  if (controller_ck_1) {
    sub_1002 = v_160;
  } else {
    sub_1002 = sub_1003;
  };
  sub_1001 = sub_1002;
  sub_1000 = sub_1001;
  sub_999 = sub_1000;
  if (controller_c_window) {
    sub_1020 = false;
  } else {
    sub_1020 = sub_726;
  };
  if (controller_cleaner) {
    v_158 = false;
    sub_1019 = sub_1020;
  } else {
    v_158 = sub_1020;
    sub_1019 = false;
  };
  if (controller_ck_17_1) {
    sub_1018 = v_158;
    sub_1022 = sub_724;
  } else {
    sub_1018 = sub_1019;
    sub_1022 = sub_729;
  };
  sub_1021 = sub_1022;
  if (controller_c_pc) {
    sub_1017 = sub_1018;
  } else {
    sub_1017 = sub_1021;
  };
  if (controller_v_407) {
    sub_1028 = sub_866;
  } else {
    sub_1028 = false;
  };
  sub_1027 = sub_1028;
  if (controller_cleaner) {
    v_157 = false;
    sub_1026 = sub_1027;
  } else {
    v_157 = sub_1027;
    sub_1026 = false;
  };
  if (controller_ck_17_1) {
    sub_1025 = v_157;
  } else {
    sub_1025 = sub_1026;
  };
  sub_1024 = sub_1025;
  sub_1023 = sub_1024;
  if (controller_change_shift) {
    v_159 = sub_1023;
    sub_1016 = sub_1017;
  } else {
    v_159 = sub_1017;
    sub_1016 = sub_1023;
  };
  if (controller_ck_1) {
    sub_1015 = v_159;
  } else {
    sub_1015 = sub_1016;
  };
  sub_1014 = sub_1015;
  if (controller_air_failed_recovered) {
    v_161 = sub_1014;
  } else {
    v_161 = sub_1001;
  };
  if (controller_c_air_2) {
    v_162 = v_161;
  } else {
    v_162 = sub_1000;
  };
  if (controller_c_air_1) {
    sub_998 = sub_999;
  } else {
    sub_998 = v_162;
  };
  if (controller_v_407) {
    v_151 = sub_868;
  } else {
    v_151 = false;
  };
  if (controller_c_window) {
    sub_1035 = v_151;
  } else {
    sub_1035 = sub_726;
  };
  if (controller_cleaner) {
    v_152 = false;
    sub_1034 = sub_1035;
  } else {
    v_152 = sub_1035;
    sub_1034 = false;
  };
  if (controller_ck_17_1) {
    sub_1033 = v_152;
  } else {
    sub_1033 = sub_1034;
  };
  sub_1032 = sub_1033;
  if (controller_c_pc) {
    sub_1031 = sub_1032;
  } else {
    sub_1031 = sub_1021;
  };
  sub_1036 = sub_1021;
  if (controller_change_shift) {
    v_153 = sub_1036;
    sub_1030 = sub_1031;
  } else {
    v_153 = sub_1031;
    sub_1030 = sub_1036;
  };
  if (controller_ck_1) {
    v_154 = v_153;
  } else {
    v_154 = sub_1030;
  };
  sub_1040 = sub_725;
  sub_1039 = sub_1040;
  if (controller_c_pc) {
    sub_1038 = sub_1032;
    sub_1041 = sub_1021;
  } else {
    sub_1038 = sub_1039;
    sub_1041 = sub_1039;
  };
  if (controller_change_shift) {
    v_155 = sub_1041;
    sub_1037 = sub_1038;
  } else {
    v_155 = sub_1038;
    sub_1037 = sub_1041;
  };
  if (controller_ck_1) {
    v_156 = v_155;
  } else {
    v_156 = sub_1037;
  };
  if (controller_c_closet) {
    sub_1029 = v_154;
  } else {
    sub_1029 = v_156;
  };
  if (controller_air_failed_recovered) {
    v_163 = sub_1001;
  } else {
    v_163 = sub_1029;
  };
  if (controller_v_408) {
    sub_1051 = sub_728;
  } else {
    sub_1051 = false;
  };
  if (controller_v_407) {
    sub_1050 = sub_1051;
  } else {
    sub_1050 = false;
  };
  if (controller_c_window) {
    sub_1049 = sub_1050;
  } else {
    sub_1049 = sub_726;
  };
  if (controller_cleaner) {
    v_149 = false;
    sub_1048 = sub_1049;
  } else {
    v_149 = sub_1049;
    sub_1048 = false;
  };
  if (controller_ck_17_1) {
    sub_1047 = v_149;
  } else {
    sub_1047 = sub_1048;
  };
  if (controller_c_pc) {
    sub_1046 = sub_1047;
  } else {
    sub_1046 = sub_1021;
  };
  if (controller_change_shift) {
    v_150 = sub_1023;
    sub_1045 = sub_1046;
  } else {
    v_150 = sub_1046;
    sub_1045 = sub_1023;
  };
  if (controller_ck_1) {
    sub_1044 = v_150;
  } else {
    sub_1044 = sub_1045;
  };
  sub_1043 = sub_1044;
  if (controller_air_failed_recovered) {
    v_166 = sub_1001;
  } else {
    v_166 = sub_1043;
  };
  sub_1042 = sub_1043;
  if (controller_c_air_2) {
    v_164 = v_163;
  } else {
    v_164 = sub_1042;
  };
  sub_1052 = sub_1014;
  if (controller_c_air_2) {
    v_167 = v_166;
  } else {
    v_167 = sub_1052;
  };
  if (controller_c_air_1) {
    v_165 = v_164;
  } else {
    v_165 = sub_1052;
  };
  if (controller_v_445) {
    sub_997 = v_165;
  } else {
    sub_997 = sub_998;
  };
  sub_1053 = sub_1042;
  if (controller_v_447) {
    sub_996 = sub_1053;
  } else {
    sub_996 = sub_997;
  };
  if (controller_air_failed_recovered) {
    v_146 = sub_1043;
  } else {
    v_146 = sub_1001;
  };
  if (controller_c_air_2) {
    v_147 = v_146;
  } else {
    v_147 = sub_1000;
  };
  if (controller_c_air_1) {
    v_148 = v_147;
  } else {
    v_148 = sub_999;
  };
  if (controller_air_failed_recovered) {
    v_144 = sub_1001;
  } else {
    v_144 = sub_1014;
  };
  if (controller_c_air_2) {
    v_145 = v_144;
  } else {
    v_145 = sub_1042;
  };
  sub_1057 = sub_1029;
  sub_1056 = sub_1057;
  if (controller_c_air_1) {
    v_168 = v_167;
    sub_1055 = sub_1056;
  } else {
    v_168 = sub_1056;
    sub_1055 = v_145;
  };
  if (controller_v_445) {
    sub_1054 = v_148;
  } else {
    sub_1054 = sub_1055;
  };
  if (controller_air_failed_recovered) {
    v_142 = sub_1029;
  } else {
    v_142 = sub_1001;
  };
  if (controller_c_air_2) {
    v_143 = v_142;
  } else {
    v_143 = sub_1000;
  };
  if (controller_c_air_1) {
    sub_1058 = v_143;
  } else {
    sub_1058 = sub_999;
  };
  if (controller_v_445) {
    v_169 = v_168;
  } else {
    v_169 = sub_1058;
  };
  if (controller_v_447) {
    v_170 = v_169;
  } else {
    v_170 = sub_1054;
  };
  if (controller_v_446) {
    v_171 = v_170;
  } else {
    v_171 = sub_996;
  };
  sub_1070 = sub_750;
  if (controller_c_door) {
    sub_1069 = sub_1070;
  } else {
    sub_1069 = false;
  };
  sub_1068 = sub_1069;
  if (controller_c_door) {
    sub_1071 = false;
  } else {
    sub_1071 = sub_1070;
  };
  if (controller_ck_11_1) {
    sub_1067 = sub_1071;
  } else {
    sub_1067 = sub_1068;
  };
  sub_1075 = sub_770;
  if (controller_c_door) {
    sub_1074 = sub_1075;
  } else {
    sub_1074 = false;
  };
  sub_1073 = sub_1074;
  if (controller_c_door) {
    sub_1076 = false;
  } else {
    sub_1076 = sub_1075;
  };
  if (controller_ck_11_1) {
    sub_1072 = sub_1076;
  } else {
    sub_1072 = sub_1073;
  };
  if (controller_change_shift) {
    v_136 = sub_1072;
    sub_1066 = sub_1067;
  } else {
    v_136 = sub_1067;
    sub_1066 = sub_1072;
  };
  if (controller_ck_1) {
    sub_1065 = v_136;
  } else {
    sub_1065 = sub_1066;
  };
  sub_1064 = sub_1065;
  sub_1063 = sub_1064;
  sub_1062 = sub_1063;
  if (controller_c_window) {
    sub_1083 = false;
  } else {
    sub_1083 = sub_783;
  };
  if (controller_cleaner) {
    v_134 = false;
    sub_1082 = sub_1083;
  } else {
    v_134 = sub_1083;
    sub_1082 = false;
  };
  if (controller_ck_17_1) {
    sub_1081 = v_134;
    sub_1085 = sub_781;
  } else {
    sub_1081 = sub_1082;
    sub_1085 = sub_785;
  };
  sub_1084 = sub_1085;
  if (controller_c_pc) {
    sub_1080 = sub_1081;
  } else {
    sub_1080 = sub_1084;
  };
  if (controller_v_407) {
    sub_1091 = sub_913;
  } else {
    sub_1091 = false;
  };
  sub_1090 = sub_1091;
  if (controller_cleaner) {
    v_133 = false;
    sub_1089 = sub_1090;
  } else {
    v_133 = sub_1090;
    sub_1089 = false;
  };
  if (controller_ck_17_1) {
    sub_1088 = v_133;
  } else {
    sub_1088 = sub_1089;
  };
  sub_1087 = sub_1088;
  sub_1086 = sub_1087;
  if (controller_change_shift) {
    v_135 = sub_1086;
    sub_1079 = sub_1080;
  } else {
    v_135 = sub_1080;
    sub_1079 = sub_1086;
  };
  if (controller_ck_1) {
    sub_1078 = v_135;
  } else {
    sub_1078 = sub_1079;
  };
  sub_1077 = sub_1078;
  if (controller_air_failed_recovered) {
    v_137 = sub_1077;
  } else {
    v_137 = sub_1064;
  };
  if (controller_c_air_2) {
    v_138 = v_137;
  } else {
    v_138 = sub_1063;
  };
  if (controller_c_air_1) {
    sub_1061 = sub_1062;
  } else {
    sub_1061 = v_138;
  };
  if (controller_v_407) {
    v_127 = sub_915;
  } else {
    v_127 = false;
  };
  if (controller_c_window) {
    sub_1098 = v_127;
  } else {
    sub_1098 = sub_783;
  };
  if (controller_cleaner) {
    v_128 = false;
    sub_1097 = sub_1098;
  } else {
    v_128 = sub_1098;
    sub_1097 = false;
  };
  if (controller_ck_17_1) {
    sub_1096 = v_128;
  } else {
    sub_1096 = sub_1097;
  };
  sub_1095 = sub_1096;
  if (controller_c_pc) {
    sub_1094 = sub_1095;
  } else {
    sub_1094 = sub_1084;
  };
  sub_1099 = sub_1084;
  if (controller_change_shift) {
    v_129 = sub_1099;
    sub_1093 = sub_1094;
  } else {
    v_129 = sub_1094;
    sub_1093 = sub_1099;
  };
  if (controller_ck_1) {
    v_130 = v_129;
  } else {
    v_130 = sub_1093;
  };
  sub_1103 = sub_782;
  sub_1102 = sub_1103;
  if (controller_c_pc) {
    sub_1101 = sub_1095;
    sub_1104 = sub_1084;
  } else {
    sub_1101 = sub_1102;
    sub_1104 = sub_1102;
  };
  if (controller_change_shift) {
    v_131 = sub_1104;
    sub_1100 = sub_1101;
  } else {
    v_131 = sub_1101;
    sub_1100 = sub_1104;
  };
  if (controller_ck_1) {
    v_132 = v_131;
  } else {
    v_132 = sub_1100;
  };
  if (controller_c_closet) {
    sub_1092 = v_130;
  } else {
    sub_1092 = v_132;
  };
  if (controller_air_failed_recovered) {
    v_139 = sub_1064;
  } else {
    v_139 = sub_1092;
  };
  if (controller_c_window) {
    sub_1112 = sub_1050;
  } else {
    sub_1112 = sub_783;
  };
  if (controller_cleaner) {
    v_125 = false;
    sub_1111 = sub_1112;
  } else {
    v_125 = sub_1112;
    sub_1111 = false;
  };
  if (controller_ck_17_1) {
    sub_1110 = v_125;
  } else {
    sub_1110 = sub_1111;
  };
  if (controller_c_pc) {
    sub_1109 = sub_1110;
  } else {
    sub_1109 = sub_1084;
  };
  if (controller_change_shift) {
    v_126 = sub_1086;
    sub_1108 = sub_1109;
  } else {
    v_126 = sub_1109;
    sub_1108 = sub_1086;
  };
  if (controller_ck_1) {
    sub_1107 = v_126;
  } else {
    sub_1107 = sub_1108;
  };
  sub_1106 = sub_1107;
  if (controller_air_failed_recovered) {
    v_172 = sub_1064;
  } else {
    v_172 = sub_1106;
  };
  sub_1105 = sub_1106;
  if (controller_c_air_2) {
    v_140 = v_139;
  } else {
    v_140 = sub_1105;
  };
  sub_1113 = sub_1077;
  if (controller_c_air_2) {
    v_173 = v_172;
  } else {
    v_173 = sub_1113;
  };
  if (controller_c_air_1) {
    v_141 = v_140;
  } else {
    v_141 = sub_1113;
  };
  if (controller_v_445) {
    sub_1060 = v_141;
  } else {
    sub_1060 = sub_1061;
  };
  sub_1114 = sub_1105;
  if (controller_v_447) {
    sub_1059 = sub_1114;
  } else {
    sub_1059 = sub_1060;
  };
  if (controller_air_failed_recovered) {
    v_122 = sub_1106;
  } else {
    v_122 = sub_1064;
  };
  if (controller_c_air_2) {
    v_123 = v_122;
  } else {
    v_123 = sub_1063;
  };
  if (controller_c_air_1) {
    v_124 = v_123;
  } else {
    v_124 = sub_1062;
  };
  if (controller_air_failed_recovered) {
    v_120 = sub_1064;
  } else {
    v_120 = sub_1077;
  };
  if (controller_c_air_2) {
    v_121 = v_120;
  } else {
    v_121 = sub_1105;
  };
  sub_1118 = sub_1092;
  sub_1117 = sub_1118;
  if (controller_c_air_1) {
    v_174 = v_173;
    sub_1116 = sub_1117;
  } else {
    v_174 = sub_1117;
    sub_1116 = v_121;
  };
  if (controller_v_445) {
    sub_1115 = v_124;
  } else {
    sub_1115 = sub_1116;
  };
  if (controller_air_failed_recovered) {
    v_118 = sub_1092;
  } else {
    v_118 = sub_1064;
  };
  if (controller_c_air_2) {
    v_119 = v_118;
  } else {
    v_119 = sub_1063;
  };
  if (controller_c_air_1) {
    sub_1119 = v_119;
  } else {
    sub_1119 = sub_1062;
  };
  if (controller_v_445) {
    v_175 = v_174;
  } else {
    v_175 = sub_1119;
  };
  if (controller_v_447) {
    v_176 = v_175;
  } else {
    v_176 = sub_1115;
  };
  if (controller_v_446) {
    v_177 = v_176;
  } else {
    v_177 = sub_1059;
  };
  if (controller_blind_switch) {
    v_178 = v_171;
  } else {
    v_178 = v_177;
  };
  sub_1132 = sub_807;
  if (controller_c_door) {
    sub_1131 = sub_1132;
  } else {
    sub_1131 = false;
  };
  sub_1130 = sub_1131;
  if (controller_c_door) {
    sub_1133 = false;
  } else {
    sub_1133 = sub_1132;
  };
  if (controller_ck_11_1) {
    sub_1129 = sub_1133;
  } else {
    sub_1129 = sub_1130;
  };
  sub_1137 = sub_827;
  if (controller_c_door) {
    sub_1136 = sub_1137;
  } else {
    sub_1136 = false;
  };
  sub_1135 = sub_1136;
  if (controller_c_door) {
    sub_1138 = false;
  } else {
    sub_1138 = sub_1137;
  };
  if (controller_ck_11_1) {
    sub_1134 = sub_1138;
  } else {
    sub_1134 = sub_1135;
  };
  if (controller_change_shift) {
    v_107 = sub_1134;
    sub_1128 = sub_1129;
  } else {
    v_107 = sub_1129;
    sub_1128 = sub_1134;
  };
  if (controller_ck_1) {
    sub_1127 = v_107;
  } else {
    sub_1127 = sub_1128;
  };
  sub_1126 = sub_1127;
  sub_1125 = sub_1126;
  sub_1124 = sub_1125;
  if (controller_c_window) {
    sub_1145 = false;
  } else {
    sub_1145 = sub_840;
  };
  if (controller_cleaner) {
    v_105 = false;
    sub_1144 = sub_1145;
  } else {
    v_105 = sub_1145;
    sub_1144 = false;
  };
  if (controller_ck_17_1) {
    sub_1143 = v_105;
    sub_1147 = sub_838;
  } else {
    sub_1143 = sub_1144;
    sub_1147 = sub_842;
  };
  sub_1146 = sub_1147;
  if (controller_c_pc) {
    sub_1142 = sub_1143;
  } else {
    sub_1142 = sub_1146;
  };
  if (controller_v_407) {
    sub_1153 = sub_961;
  } else {
    sub_1153 = false;
  };
  sub_1152 = sub_1153;
  if (controller_cleaner) {
    v_104 = false;
    sub_1151 = sub_1152;
  } else {
    v_104 = sub_1152;
    sub_1151 = false;
  };
  if (controller_ck_17_1) {
    sub_1150 = v_104;
  } else {
    sub_1150 = sub_1151;
  };
  sub_1149 = sub_1150;
  sub_1148 = sub_1149;
  if (controller_change_shift) {
    v_106 = sub_1148;
    sub_1141 = sub_1142;
  } else {
    v_106 = sub_1142;
    sub_1141 = sub_1148;
  };
  if (controller_ck_1) {
    sub_1140 = v_106;
  } else {
    sub_1140 = sub_1141;
  };
  sub_1139 = sub_1140;
  if (controller_air_failed_recovered) {
    v_108 = sub_1139;
  } else {
    v_108 = sub_1126;
  };
  if (controller_c_air_2) {
    v_109 = v_108;
  } else {
    v_109 = sub_1125;
  };
  if (controller_c_air_1) {
    sub_1123 = sub_1124;
  } else {
    sub_1123 = v_109;
  };
  if (controller_v_407) {
    v_98 = sub_963;
  } else {
    v_98 = false;
  };
  if (controller_c_window) {
    sub_1160 = v_98;
  } else {
    sub_1160 = sub_840;
  };
  if (controller_cleaner) {
    v_99 = false;
    sub_1159 = sub_1160;
  } else {
    v_99 = sub_1160;
    sub_1159 = false;
  };
  if (controller_ck_17_1) {
    sub_1158 = v_99;
  } else {
    sub_1158 = sub_1159;
  };
  sub_1157 = sub_1158;
  if (controller_c_pc) {
    sub_1156 = sub_1157;
  } else {
    sub_1156 = sub_1146;
  };
  sub_1161 = sub_1146;
  if (controller_change_shift) {
    v_100 = sub_1161;
    sub_1155 = sub_1156;
  } else {
    v_100 = sub_1156;
    sub_1155 = sub_1161;
  };
  if (controller_ck_1) {
    v_101 = v_100;
  } else {
    v_101 = sub_1155;
  };
  sub_1165 = sub_839;
  sub_1164 = sub_1165;
  if (controller_c_pc) {
    sub_1163 = sub_1157;
    sub_1166 = sub_1146;
  } else {
    sub_1163 = sub_1164;
    sub_1166 = sub_1164;
  };
  if (controller_change_shift) {
    v_102 = sub_1166;
    sub_1162 = sub_1163;
  } else {
    v_102 = sub_1163;
    sub_1162 = sub_1166;
  };
  if (controller_ck_1) {
    v_103 = v_102;
  } else {
    v_103 = sub_1162;
  };
  if (controller_c_closet) {
    sub_1154 = v_101;
  } else {
    sub_1154 = v_103;
  };
  if (controller_air_failed_recovered) {
    v_110 = sub_1126;
  } else {
    v_110 = sub_1154;
  };
  if (controller_c_window) {
    sub_1174 = sub_1050;
  } else {
    sub_1174 = sub_840;
  };
  if (controller_cleaner) {
    v_96 = false;
    sub_1173 = sub_1174;
  } else {
    v_96 = sub_1174;
    sub_1173 = false;
  };
  if (controller_ck_17_1) {
    sub_1172 = v_96;
  } else {
    sub_1172 = sub_1173;
  };
  if (controller_c_pc) {
    sub_1171 = sub_1172;
  } else {
    sub_1171 = sub_1146;
  };
  if (controller_change_shift) {
    v_97 = sub_1148;
    sub_1170 = sub_1171;
  } else {
    v_97 = sub_1171;
    sub_1170 = sub_1148;
  };
  if (controller_ck_1) {
    sub_1169 = v_97;
  } else {
    sub_1169 = sub_1170;
  };
  sub_1168 = sub_1169;
  if (controller_air_failed_recovered) {
    v_113 = sub_1126;
  } else {
    v_113 = sub_1168;
  };
  sub_1167 = sub_1168;
  if (controller_c_air_2) {
    v_111 = v_110;
  } else {
    v_111 = sub_1167;
  };
  sub_1175 = sub_1139;
  if (controller_c_air_2) {
    v_114 = v_113;
  } else {
    v_114 = sub_1175;
  };
  if (controller_c_air_1) {
    v_112 = v_111;
  } else {
    v_112 = sub_1175;
  };
  if (controller_v_445) {
    sub_1122 = v_112;
  } else {
    sub_1122 = sub_1123;
  };
  sub_1176 = sub_1167;
  if (controller_v_447) {
    sub_1121 = sub_1176;
  } else {
    sub_1121 = sub_1122;
  };
  if (controller_air_failed_recovered) {
    v_93 = sub_1168;
  } else {
    v_93 = sub_1126;
  };
  if (controller_c_air_2) {
    v_94 = v_93;
  } else {
    v_94 = sub_1125;
  };
  if (controller_c_air_1) {
    v_95 = v_94;
  } else {
    v_95 = sub_1124;
  };
  if (controller_air_failed_recovered) {
    v_91 = sub_1126;
  } else {
    v_91 = sub_1139;
  };
  if (controller_c_air_2) {
    v_92 = v_91;
  } else {
    v_92 = sub_1167;
  };
  sub_1180 = sub_1154;
  sub_1179 = sub_1180;
  if (controller_c_air_1) {
    v_115 = v_114;
    sub_1178 = sub_1179;
  } else {
    v_115 = sub_1179;
    sub_1178 = v_92;
  };
  if (controller_v_445) {
    sub_1177 = v_95;
  } else {
    sub_1177 = sub_1178;
  };
  if (controller_air_failed_recovered) {
    v_89 = sub_1154;
  } else {
    v_89 = sub_1126;
  };
  if (controller_c_air_2) {
    v_90 = v_89;
  } else {
    v_90 = sub_1125;
  };
  if (controller_c_air_1) {
    sub_1181 = v_90;
  } else {
    sub_1181 = sub_1124;
  };
  if (controller_v_445) {
    v_116 = v_115;
  } else {
    v_116 = sub_1181;
  };
  if (controller_v_447) {
    v_117 = v_116;
  } else {
    v_117 = sub_1177;
  };
  if (controller_v_446) {
    sub_1120 = v_117;
  } else {
    sub_1120 = sub_1121;
  };
  if (controller_c_blind_1) {
    sub_995 = v_178;
  } else {
    sub_995 = sub_1120;
  };
  sub_1194 = sub_864;
  if (controller_c_door) {
    sub_1193 = sub_1194;
  } else {
    sub_1193 = false;
  };
  sub_1192 = sub_1193;
  if (controller_c_door) {
    sub_1195 = false;
  } else {
    sub_1195 = sub_1194;
  };
  if (controller_ck_11_1) {
    sub_1191 = sub_1195;
  } else {
    sub_1191 = sub_1192;
  };
  if (controller_change_shift) {
    v_69 = sub_1009;
    sub_1190 = sub_1191;
  } else {
    v_69 = sub_1191;
    sub_1190 = sub_1009;
  };
  if (controller_ck_1) {
    sub_1189 = v_69;
  } else {
    sub_1189 = sub_1190;
  };
  sub_1188 = sub_1189;
  sub_1187 = sub_1188;
  sub_1186 = sub_1187;
  if (controller_c_window) {
    sub_1202 = false;
  } else {
    sub_1202 = sub_888;
  };
  if (controller_cleaner) {
    v_67 = false;
    sub_1201 = sub_1202;
  } else {
    v_67 = sub_1202;
    sub_1201 = false;
  };
  if (controller_ck_17_1) {
    sub_1200 = v_67;
    sub_1204 = sub_886;
  } else {
    sub_1200 = sub_1201;
    sub_1204 = sub_890;
  };
  sub_1203 = sub_1204;
  if (controller_c_pc) {
    sub_1199 = sub_1200;
  } else {
    sub_1199 = sub_1203;
  };
  sub_1209 = sub_865;
  if (controller_cleaner) {
    v_66 = false;
    sub_1208 = sub_1209;
  } else {
    v_66 = sub_1209;
    sub_1208 = false;
  };
  if (controller_ck_17_1) {
    sub_1207 = v_66;
  } else {
    sub_1207 = sub_1208;
  };
  sub_1206 = sub_1207;
  sub_1205 = sub_1206;
  if (controller_change_shift) {
    v_68 = sub_1205;
    sub_1198 = sub_1199;
  } else {
    v_68 = sub_1199;
    sub_1198 = sub_1205;
  };
  if (controller_ck_1) {
    sub_1197 = v_68;
  } else {
    sub_1197 = sub_1198;
  };
  sub_1196 = sub_1197;
  if (controller_air_failed_recovered) {
    v_70 = sub_1196;
  } else {
    v_70 = sub_1188;
  };
  if (controller_c_air_2) {
    v_71 = v_70;
  } else {
    v_71 = sub_1187;
  };
  if (controller_c_air_1) {
    sub_1185 = sub_1186;
  } else {
    sub_1185 = v_71;
  };
  if (controller_c_window) {
    sub_1216 = sub_867;
  } else {
    sub_1216 = sub_888;
  };
  if (controller_cleaner) {
    v_61 = false;
    sub_1215 = sub_1216;
  } else {
    v_61 = sub_1216;
    sub_1215 = false;
  };
  if (controller_ck_17_1) {
    sub_1214 = v_61;
  } else {
    sub_1214 = sub_1215;
  };
  sub_1213 = sub_1214;
  if (controller_c_pc) {
    sub_1212 = sub_1213;
  } else {
    sub_1212 = sub_1203;
  };
  sub_1217 = sub_1203;
  if (controller_change_shift) {
    v_62 = sub_1217;
    sub_1211 = sub_1212;
  } else {
    v_62 = sub_1212;
    sub_1211 = sub_1217;
  };
  if (controller_ck_1) {
    v_63 = v_62;
  } else {
    v_63 = sub_1211;
  };
  sub_1221 = sub_887;
  sub_1220 = sub_1221;
  if (controller_c_pc) {
    sub_1219 = sub_1213;
    sub_1222 = sub_1203;
  } else {
    sub_1219 = sub_1220;
    sub_1222 = sub_1220;
  };
  if (controller_change_shift) {
    v_64 = sub_1222;
    sub_1218 = sub_1219;
  } else {
    v_64 = sub_1219;
    sub_1218 = sub_1222;
  };
  if (controller_ck_1) {
    v_65 = v_64;
  } else {
    v_65 = sub_1218;
  };
  if (controller_c_closet) {
    sub_1210 = v_63;
  } else {
    sub_1210 = v_65;
  };
  if (controller_air_failed_recovered) {
    v_72 = sub_1188;
  } else {
    v_72 = sub_1210;
  };
  if (controller_v_408) {
    v_58 = false;
  } else {
    v_58 = sub_728;
  };
  if (controller_light_failed_recovered) {
    sub_1232 = v_58;
  } else {
    sub_1232 = sub_1051;
  };
  if (controller_v_407) {
    sub_1231 = false;
  } else {
    sub_1231 = sub_1232;
  };
  if (controller_c_window) {
    sub_1230 = sub_1231;
  } else {
    sub_1230 = sub_888;
  };
  if (controller_cleaner) {
    v_59 = false;
    sub_1229 = sub_1230;
  } else {
    v_59 = sub_1230;
    sub_1229 = false;
  };
  if (controller_ck_17_1) {
    sub_1228 = v_59;
  } else {
    sub_1228 = sub_1229;
  };
  if (controller_c_pc) {
    sub_1227 = sub_1228;
  } else {
    sub_1227 = sub_1203;
  };
  if (controller_change_shift) {
    v_60 = sub_1205;
    sub_1226 = sub_1227;
  } else {
    v_60 = sub_1227;
    sub_1226 = sub_1205;
  };
  if (controller_ck_1) {
    sub_1225 = v_60;
  } else {
    sub_1225 = sub_1226;
  };
  sub_1224 = sub_1225;
  if (controller_air_failed_recovered) {
    v_75 = sub_1188;
  } else {
    v_75 = sub_1224;
  };
  sub_1223 = sub_1224;
  if (controller_c_air_2) {
    v_73 = v_72;
  } else {
    v_73 = sub_1223;
  };
  sub_1233 = sub_1196;
  if (controller_c_air_2) {
    v_76 = v_75;
  } else {
    v_76 = sub_1233;
  };
  if (controller_c_air_1) {
    v_74 = v_73;
  } else {
    v_74 = sub_1233;
  };
  if (controller_v_445) {
    sub_1184 = v_74;
  } else {
    sub_1184 = sub_1185;
  };
  sub_1234 = sub_1223;
  if (controller_v_447) {
    sub_1183 = sub_1234;
  } else {
    sub_1183 = sub_1184;
  };
  if (controller_air_failed_recovered) {
    v_55 = sub_1224;
  } else {
    v_55 = sub_1188;
  };
  if (controller_c_air_2) {
    v_56 = v_55;
  } else {
    v_56 = sub_1187;
  };
  if (controller_c_air_1) {
    v_57 = v_56;
  } else {
    v_57 = sub_1186;
  };
  if (controller_air_failed_recovered) {
    v_53 = sub_1188;
  } else {
    v_53 = sub_1196;
  };
  if (controller_c_air_2) {
    v_54 = v_53;
  } else {
    v_54 = sub_1223;
  };
  sub_1238 = sub_1210;
  sub_1237 = sub_1238;
  if (controller_c_air_1) {
    v_77 = v_76;
    sub_1236 = sub_1237;
  } else {
    v_77 = sub_1237;
    sub_1236 = v_54;
  };
  if (controller_v_445) {
    sub_1235 = v_57;
  } else {
    sub_1235 = sub_1236;
  };
  if (controller_air_failed_recovered) {
    v_51 = sub_1210;
  } else {
    v_51 = sub_1188;
  };
  if (controller_c_air_2) {
    v_52 = v_51;
  } else {
    v_52 = sub_1187;
  };
  if (controller_c_air_1) {
    sub_1239 = v_52;
  } else {
    sub_1239 = sub_1186;
  };
  if (controller_v_445) {
    v_78 = v_77;
  } else {
    v_78 = sub_1239;
  };
  if (controller_v_447) {
    v_79 = v_78;
  } else {
    v_79 = sub_1235;
  };
  if (controller_v_446) {
    v_80 = v_79;
  } else {
    v_80 = sub_1183;
  };
  sub_1251 = sub_911;
  if (controller_c_door) {
    sub_1250 = sub_1251;
  } else {
    sub_1250 = false;
  };
  sub_1249 = sub_1250;
  if (controller_c_door) {
    sub_1252 = false;
  } else {
    sub_1252 = sub_1251;
  };
  if (controller_ck_11_1) {
    sub_1248 = sub_1252;
  } else {
    sub_1248 = sub_1249;
  };
  if (controller_change_shift) {
    v_45 = sub_1072;
    sub_1247 = sub_1248;
  } else {
    v_45 = sub_1248;
    sub_1247 = sub_1072;
  };
  if (controller_ck_1) {
    sub_1246 = v_45;
  } else {
    sub_1246 = sub_1247;
  };
  sub_1245 = sub_1246;
  sub_1244 = sub_1245;
  sub_1243 = sub_1244;
  if (controller_c_window) {
    sub_1259 = false;
  } else {
    sub_1259 = sub_935;
  };
  if (controller_cleaner) {
    v_43 = false;
    sub_1258 = sub_1259;
  } else {
    v_43 = sub_1259;
    sub_1258 = false;
  };
  if (controller_ck_17_1) {
    sub_1257 = v_43;
    sub_1261 = sub_933;
  } else {
    sub_1257 = sub_1258;
    sub_1261 = sub_937;
  };
  sub_1260 = sub_1261;
  if (controller_c_pc) {
    sub_1256 = sub_1257;
  } else {
    sub_1256 = sub_1260;
  };
  sub_1266 = sub_912;
  if (controller_cleaner) {
    v_42 = false;
    sub_1265 = sub_1266;
  } else {
    v_42 = sub_1266;
    sub_1265 = false;
  };
  if (controller_ck_17_1) {
    sub_1264 = v_42;
  } else {
    sub_1264 = sub_1265;
  };
  sub_1263 = sub_1264;
  sub_1262 = sub_1263;
  if (controller_change_shift) {
    v_44 = sub_1262;
    sub_1255 = sub_1256;
  } else {
    v_44 = sub_1256;
    sub_1255 = sub_1262;
  };
  if (controller_ck_1) {
    sub_1254 = v_44;
  } else {
    sub_1254 = sub_1255;
  };
  sub_1253 = sub_1254;
  if (controller_air_failed_recovered) {
    v_46 = sub_1253;
  } else {
    v_46 = sub_1245;
  };
  if (controller_c_air_2) {
    v_47 = v_46;
  } else {
    v_47 = sub_1244;
  };
  if (controller_c_air_1) {
    sub_1242 = sub_1243;
  } else {
    sub_1242 = v_47;
  };
  if (controller_c_window) {
    sub_1273 = sub_914;
  } else {
    sub_1273 = sub_935;
  };
  if (controller_cleaner) {
    v_37 = false;
    sub_1272 = sub_1273;
  } else {
    v_37 = sub_1273;
    sub_1272 = false;
  };
  if (controller_ck_17_1) {
    sub_1271 = v_37;
  } else {
    sub_1271 = sub_1272;
  };
  sub_1270 = sub_1271;
  if (controller_c_pc) {
    sub_1269 = sub_1270;
  } else {
    sub_1269 = sub_1260;
  };
  sub_1274 = sub_1260;
  if (controller_change_shift) {
    v_38 = sub_1274;
    sub_1268 = sub_1269;
  } else {
    v_38 = sub_1269;
    sub_1268 = sub_1274;
  };
  if (controller_ck_1) {
    v_39 = v_38;
  } else {
    v_39 = sub_1268;
  };
  sub_1278 = sub_934;
  sub_1277 = sub_1278;
  if (controller_c_pc) {
    sub_1276 = sub_1270;
    sub_1279 = sub_1260;
  } else {
    sub_1276 = sub_1277;
    sub_1279 = sub_1277;
  };
  if (controller_change_shift) {
    v_40 = sub_1279;
    sub_1275 = sub_1276;
  } else {
    v_40 = sub_1276;
    sub_1275 = sub_1279;
  };
  if (controller_ck_1) {
    v_41 = v_40;
  } else {
    v_41 = sub_1275;
  };
  if (controller_c_closet) {
    sub_1267 = v_39;
  } else {
    sub_1267 = v_41;
  };
  if (controller_air_failed_recovered) {
    v_48 = sub_1245;
  } else {
    v_48 = sub_1267;
  };
  if (controller_c_window) {
    sub_1287 = sub_1231;
  } else {
    sub_1287 = sub_935;
  };
  if (controller_cleaner) {
    v_35 = false;
    sub_1286 = sub_1287;
  } else {
    v_35 = sub_1287;
    sub_1286 = false;
  };
  if (controller_ck_17_1) {
    sub_1285 = v_35;
  } else {
    sub_1285 = sub_1286;
  };
  if (controller_c_pc) {
    sub_1284 = sub_1285;
  } else {
    sub_1284 = sub_1260;
  };
  if (controller_change_shift) {
    v_36 = sub_1262;
    sub_1283 = sub_1284;
  } else {
    v_36 = sub_1284;
    sub_1283 = sub_1262;
  };
  if (controller_ck_1) {
    sub_1282 = v_36;
  } else {
    sub_1282 = sub_1283;
  };
  sub_1281 = sub_1282;
  if (controller_air_failed_recovered) {
    v_81 = sub_1245;
  } else {
    v_81 = sub_1281;
  };
  sub_1280 = sub_1281;
  if (controller_c_air_2) {
    v_49 = v_48;
  } else {
    v_49 = sub_1280;
  };
  sub_1288 = sub_1253;
  if (controller_c_air_2) {
    v_82 = v_81;
  } else {
    v_82 = sub_1288;
  };
  if (controller_c_air_1) {
    v_50 = v_49;
  } else {
    v_50 = sub_1288;
  };
  if (controller_v_445) {
    sub_1241 = v_50;
  } else {
    sub_1241 = sub_1242;
  };
  sub_1289 = sub_1280;
  if (controller_v_447) {
    sub_1240 = sub_1289;
  } else {
    sub_1240 = sub_1241;
  };
  if (controller_air_failed_recovered) {
    v_32 = sub_1281;
  } else {
    v_32 = sub_1245;
  };
  if (controller_c_air_2) {
    v_33 = v_32;
  } else {
    v_33 = sub_1244;
  };
  if (controller_c_air_1) {
    v_34 = v_33;
  } else {
    v_34 = sub_1243;
  };
  if (controller_air_failed_recovered) {
    v_30 = sub_1245;
  } else {
    v_30 = sub_1253;
  };
  if (controller_c_air_2) {
    v_31 = v_30;
  } else {
    v_31 = sub_1280;
  };
  sub_1293 = sub_1267;
  sub_1292 = sub_1293;
  if (controller_c_air_1) {
    v_83 = v_82;
    sub_1291 = sub_1292;
  } else {
    v_83 = sub_1292;
    sub_1291 = v_31;
  };
  if (controller_v_445) {
    sub_1290 = v_34;
  } else {
    sub_1290 = sub_1291;
  };
  if (controller_air_failed_recovered) {
    v_28 = sub_1267;
  } else {
    v_28 = sub_1245;
  };
  if (controller_c_air_2) {
    v_29 = v_28;
  } else {
    v_29 = sub_1244;
  };
  if (controller_c_air_1) {
    sub_1294 = v_29;
  } else {
    sub_1294 = sub_1243;
  };
  if (controller_v_445) {
    v_84 = v_83;
  } else {
    v_84 = sub_1294;
  };
  if (controller_v_447) {
    v_85 = v_84;
  } else {
    v_85 = sub_1290;
  };
  if (controller_v_446) {
    v_86 = v_85;
  } else {
    v_86 = sub_1240;
  };
  if (controller_blind_switch) {
    v_87 = v_80;
  } else {
    v_87 = v_86;
  };
  sub_1307 = sub_959;
  if (controller_c_door) {
    sub_1306 = sub_1307;
  } else {
    sub_1306 = false;
  };
  sub_1305 = sub_1306;
  if (controller_c_door) {
    sub_1308 = false;
  } else {
    sub_1308 = sub_1307;
  };
  if (controller_ck_11_1) {
    sub_1304 = sub_1308;
  } else {
    sub_1304 = sub_1305;
  };
  if (controller_change_shift) {
    v_17 = sub_1134;
    sub_1303 = sub_1304;
  } else {
    v_17 = sub_1304;
    sub_1303 = sub_1134;
  };
  if (controller_ck_1) {
    sub_1302 = v_17;
  } else {
    sub_1302 = sub_1303;
  };
  sub_1301 = sub_1302;
  sub_1300 = sub_1301;
  sub_1299 = sub_1300;
  if (controller_c_window) {
    sub_1315 = false;
  } else {
    sub_1315 = sub_983;
  };
  if (controller_cleaner) {
    v_15 = false;
    sub_1314 = sub_1315;
  } else {
    v_15 = sub_1315;
    sub_1314 = false;
  };
  if (controller_ck_17_1) {
    sub_1313 = v_15;
    sub_1317 = sub_981;
  } else {
    sub_1313 = sub_1314;
    sub_1317 = sub_985;
  };
  sub_1316 = sub_1317;
  if (controller_c_pc) {
    sub_1312 = sub_1313;
  } else {
    sub_1312 = sub_1316;
  };
  sub_1322 = sub_960;
  if (controller_cleaner) {
    v_14 = false;
    sub_1321 = sub_1322;
  } else {
    v_14 = sub_1322;
    sub_1321 = false;
  };
  if (controller_ck_17_1) {
    sub_1320 = v_14;
  } else {
    sub_1320 = sub_1321;
  };
  sub_1319 = sub_1320;
  sub_1318 = sub_1319;
  if (controller_change_shift) {
    v_16 = sub_1318;
    sub_1311 = sub_1312;
  } else {
    v_16 = sub_1312;
    sub_1311 = sub_1318;
  };
  if (controller_ck_1) {
    sub_1310 = v_16;
  } else {
    sub_1310 = sub_1311;
  };
  sub_1309 = sub_1310;
  if (controller_air_failed_recovered) {
    v_18 = sub_1309;
  } else {
    v_18 = sub_1301;
  };
  if (controller_c_air_2) {
    v_19 = v_18;
  } else {
    v_19 = sub_1300;
  };
  if (controller_c_air_1) {
    sub_1298 = sub_1299;
  } else {
    sub_1298 = v_19;
  };
  if (controller_c_window) {
    sub_1329 = sub_962;
  } else {
    sub_1329 = sub_983;
  };
  if (controller_cleaner) {
    v_9 = false;
    sub_1328 = sub_1329;
  } else {
    v_9 = sub_1329;
    sub_1328 = false;
  };
  if (controller_ck_17_1) {
    sub_1327 = v_9;
  } else {
    sub_1327 = sub_1328;
  };
  sub_1326 = sub_1327;
  if (controller_c_pc) {
    sub_1325 = sub_1326;
  } else {
    sub_1325 = sub_1316;
  };
  sub_1330 = sub_1316;
  if (controller_change_shift) {
    v_10 = sub_1330;
    sub_1324 = sub_1325;
  } else {
    v_10 = sub_1325;
    sub_1324 = sub_1330;
  };
  if (controller_ck_1) {
    v_11 = v_10;
  } else {
    v_11 = sub_1324;
  };
  sub_1334 = sub_982;
  sub_1333 = sub_1334;
  if (controller_c_pc) {
    sub_1332 = sub_1326;
    sub_1335 = sub_1316;
  } else {
    sub_1332 = sub_1333;
    sub_1335 = sub_1333;
  };
  if (controller_change_shift) {
    v_12 = sub_1335;
    sub_1331 = sub_1332;
  } else {
    v_12 = sub_1332;
    sub_1331 = sub_1335;
  };
  if (controller_ck_1) {
    v_13 = v_12;
  } else {
    v_13 = sub_1331;
  };
  if (controller_c_closet) {
    sub_1323 = v_11;
  } else {
    sub_1323 = v_13;
  };
  if (controller_air_failed_recovered) {
    v_20 = sub_1301;
  } else {
    v_20 = sub_1323;
  };
  if (controller_c_window) {
    sub_1343 = sub_1231;
  } else {
    sub_1343 = sub_983;
  };
  if (controller_cleaner) {
    v_7 = false;
    sub_1342 = sub_1343;
  } else {
    v_7 = sub_1343;
    sub_1342 = false;
  };
  if (controller_ck_17_1) {
    sub_1341 = v_7;
  } else {
    sub_1341 = sub_1342;
  };
  if (controller_c_pc) {
    sub_1340 = sub_1341;
  } else {
    sub_1340 = sub_1316;
  };
  if (controller_change_shift) {
    v_8 = sub_1318;
    sub_1339 = sub_1340;
  } else {
    v_8 = sub_1340;
    sub_1339 = sub_1318;
  };
  if (controller_ck_1) {
    sub_1338 = v_8;
  } else {
    sub_1338 = sub_1339;
  };
  sub_1337 = sub_1338;
  if (controller_air_failed_recovered) {
    v_23 = sub_1301;
  } else {
    v_23 = sub_1337;
  };
  sub_1336 = sub_1337;
  if (controller_c_air_2) {
    v_21 = v_20;
  } else {
    v_21 = sub_1336;
  };
  sub_1344 = sub_1309;
  if (controller_c_air_2) {
    v_24 = v_23;
  } else {
    v_24 = sub_1344;
  };
  if (controller_c_air_1) {
    v_22 = v_21;
  } else {
    v_22 = sub_1344;
  };
  if (controller_v_445) {
    sub_1297 = v_22;
  } else {
    sub_1297 = sub_1298;
  };
  sub_1345 = sub_1336;
  if (controller_v_447) {
    sub_1296 = sub_1345;
  } else {
    sub_1296 = sub_1297;
  };
  if (controller_air_failed_recovered) {
    v_4 = sub_1337;
  } else {
    v_4 = sub_1301;
  };
  if (controller_c_air_2) {
    v_5 = v_4;
  } else {
    v_5 = sub_1300;
  };
  if (controller_c_air_1) {
    v_6 = v_5;
  } else {
    v_6 = sub_1299;
  };
  if (controller_air_failed_recovered) {
    v_2 = sub_1301;
  } else {
    v_2 = sub_1309;
  };
  if (controller_c_air_2) {
    v_3 = v_2;
  } else {
    v_3 = sub_1336;
  };
  sub_1349 = sub_1323;
  sub_1348 = sub_1349;
  if (controller_c_air_1) {
    v_25 = v_24;
    sub_1347 = sub_1348;
  } else {
    v_25 = sub_1348;
    sub_1347 = v_3;
  };
  if (controller_v_445) {
    sub_1346 = v_6;
  } else {
    sub_1346 = sub_1347;
  };
  if (controller_air_failed_recovered) {
    v = sub_1323;
  } else {
    v = sub_1301;
  };
  if (controller_c_air_2) {
    v_1 = v;
  } else {
    v_1 = sub_1300;
  };
  if (controller_c_air_1) {
    sub_1350 = v_1;
  } else {
    sub_1350 = sub_1299;
  };
  if (controller_v_445) {
    v_26 = v_25;
  } else {
    v_26 = sub_1350;
  };
  if (controller_v_447) {
    v_27 = v_26;
  } else {
    v_27 = sub_1346;
  };
  if (controller_v_446) {
    sub_1295 = v_27;
  } else {
    sub_1295 = sub_1296;
  };
  if (controller_c_blind_1) {
    v_88 = v_87;
  } else {
    v_88 = sub_1295;
  };
  if (controller_c_light_1) {
    sub_1182 = v_88;
  } else {
    sub_1182 = sub_995;
  };
  if (controller_light_switch) {
    v_179 = sub_995;
  } else {
    v_179 = sub_1182;
  };
  if (controller_c_light_2) {
    sub_994 = v_179;
  } else {
    sub_994 = sub_1182;
  };
  if (controller_worker) {
    v_752 = sub_994;
    sub_677 = sub_678;
  } else {
    v_752 = sub_678;
    sub_677 = sub_994;
  };
  if (controller_ck_15_1) {
    v_753 = v_752;
  } else {
    v_753 = sub_677;
  };
  if (p_controller_c_blind_2) {
    sub_0 = v_753;
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
  v_1105 = (controller_v_392&&false);
  sub_22 = (controller_v_392||false);
  sub_23 = controller_v_392;
  if (controller_v_391) {
    sub_21 = sub_23;
  } else {
    sub_21 = sub_22;
  };
  v_1104 = !(controller_v_392);
  sub_24 = (v_1104||false);
  if (controller_v_391) {
    v_1106 = v_1105;
  } else {
    v_1106 = sub_24;
  };
  if (controller_blind_failed_recovered) {
    sub_20 = sub_21;
  } else {
    sub_20 = v_1106;
  };
  sub_19 = sub_20;
  if (controller_v_407) {
    v_1107 = sub_19;
  } else {
    v_1107 = false;
  };
  sub_27 = !(controller_v_391);
  sub_26 = sub_27;
  sub_25 = sub_26;
  if (controller_v_407) {
    v_1108 = sub_25;
  } else {
    v_1108 = false;
  };
  if (controller_c_window) {
    sub_18 = v_1107;
  } else {
    sub_18 = v_1108;
  };
  if (controller_cleaner) {
    v_1109 = sub_18;
    sub_17 = false;
  } else {
    v_1109 = false;
    sub_17 = sub_18;
  };
  if (controller_ck_17_1) {
    sub_16 = v_1109;
  } else {
    sub_16 = sub_17;
  };
  if (controller_c_door) {
    v_1112 = false;
    v_1110 = sub_16;
  } else {
    v_1112 = sub_16;
    v_1110 = false;
  };
  sub_33 = (controller_v_391&&sub_23);
  sub_32 = sub_33;
  sub_31 = sub_32;
  if (controller_v_408) {
    sub_34 = false;
  } else {
    sub_34 = sub_32;
  };
  if (controller_v_407) {
    v_1102 = sub_34;
  } else {
    v_1102 = sub_31;
  };
  if (controller_c_window) {
    sub_30 = v_1102;
  } else {
    sub_30 = false;
  };
  if (controller_cleaner) {
    v_1103 = sub_18;
    sub_29 = sub_30;
  } else {
    v_1103 = sub_30;
    sub_29 = sub_18;
  };
  if (controller_ck_17_1) {
    sub_28 = v_1103;
  } else {
    sub_28 = sub_29;
  };
  if (controller_cleaner) {
    v_1101 = false;
    sub_36 = sub_30;
  } else {
    v_1101 = sub_30;
    sub_36 = false;
  };
  if (controller_ck_17_1) {
    sub_35 = v_1101;
  } else {
    sub_35 = sub_36;
  };
  if (controller_c_door) {
    v_1113 = sub_35;
  } else {
    v_1113 = sub_28;
  };
  if (controller_c_pc) {
    v_1114 = v_1112;
  } else {
    v_1114 = v_1113;
  };
  if (controller_c_door) {
    v_1111 = sub_28;
  } else {
    v_1111 = sub_35;
  };
  if (controller_c_pc) {
    sub_15 = v_1110;
  } else {
    sub_15 = v_1111;
  };
  if (controller_ck_11_1) {
    sub_14 = v_1114;
  } else {
    sub_14 = sub_15;
  };
  if (controller_c_window) {
    sub_42 = false;
  } else {
    sub_42 = sub_25;
  };
  if (controller_cleaner) {
    v_1097 = sub_42;
    sub_41 = false;
  } else {
    v_1097 = false;
    sub_41 = sub_42;
  };
  if (controller_ck_17_1) {
    sub_40 = v_1097;
  } else {
    sub_40 = sub_41;
  };
  if (controller_c_door) {
    sub_39 = sub_40;
  } else {
    sub_39 = false;
  };
  if (controller_cleaner) {
    v_1096 = sub_42;
    sub_44 = sub_30;
  } else {
    v_1096 = sub_30;
    sub_44 = sub_42;
  };
  if (controller_ck_17_1) {
    sub_43 = v_1096;
  } else {
    sub_43 = sub_44;
  };
  if (controller_c_door) {
    v_1099 = sub_35;
    v_1098 = sub_43;
  } else {
    v_1099 = sub_43;
    v_1098 = sub_35;
  };
  if (controller_c_pc) {
    sub_38 = sub_39;
  } else {
    sub_38 = v_1098;
  };
  if (controller_c_door) {
    sub_45 = false;
  } else {
    sub_45 = sub_40;
  };
  if (controller_c_pc) {
    v_1100 = sub_45;
  } else {
    v_1100 = v_1099;
  };
  if (controller_ck_11_1) {
    sub_37 = v_1100;
  } else {
    sub_37 = sub_38;
  };
  if (controller_change_shift) {
    v_1115 = sub_37;
    sub_13 = sub_14;
  } else {
    v_1115 = sub_14;
    sub_13 = sub_37;
  };
  if (controller_ck_1) {
    sub_12 = v_1115;
  } else {
    sub_12 = sub_13;
  };
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  if (controller_c_pc) {
    sub_49 = false;
  } else {
    sub_49 = sub_35;
  };
  sub_48 = sub_49;
  sub_47 = sub_48;
  if (controller_air_failed_recovered) {
    v_1095 = sub_47;
  } else {
    v_1095 = sub_11;
  };
  if (controller_c_air_2) {
    sub_46 = v_1095;
  } else {
    sub_46 = sub_10;
  };
  if (controller_c_air_1) {
    sub_8 = sub_9;
  } else {
    sub_8 = sub_46;
  };
  sub_57 = false;
  if (controller_v_408) {
    sub_56 = sub_57;
  } else {
    sub_56 = sub_26;
  };
  if (controller_v_407) {
    sub_55 = sub_56;
  } else {
    sub_55 = false;
  };
  sub_54 = sub_55;
  if (controller_cleaner) {
    sub_53 = false;
    sub_58 = sub_54;
  } else {
    sub_53 = sub_54;
    sub_58 = false;
  };
  if (controller_ck_17_1) {
    sub_52 = sub_58;
  } else {
    sub_52 = sub_53;
  };
  if (controller_c_pc) {
    sub_51 = false;
  } else {
    sub_51 = sub_52;
  };
  if (controller_c_closet) {
    sub_50 = false;
  } else {
    sub_50 = sub_51;
  };
  if (controller_air_failed_recovered) {
    v_1116 = sub_11;
  } else {
    v_1116 = sub_50;
  };
  sub_59 = sub_47;
  if (controller_c_air_2) {
    v_1117 = v_1116;
  } else {
    v_1117 = sub_59;
  };
  sub_60 = sub_59;
  if (controller_c_air_1) {
    v_1118 = v_1117;
  } else {
    v_1118 = sub_60;
  };
  if (controller_v_445) {
    sub_7 = v_1118;
  } else {
    sub_7 = sub_8;
  };
  if (controller_v_447) {
    sub_6 = sub_60;
  } else {
    sub_6 = sub_7;
  };
  if (controller_c_air_1) {
    v_1094 = sub_46;
  } else {
    v_1094 = sub_9;
  };
  sub_64 = sub_50;
  sub_63 = sub_64;
  if (controller_air_failed_recovered) {
    v_1093 = sub_11;
  } else {
    v_1093 = sub_47;
  };
  if (controller_c_air_2) {
    sub_65 = v_1093;
  } else {
    sub_65 = sub_59;
  };
  if (controller_c_air_1) {
    v_1119 = sub_65;
    sub_62 = sub_63;
  } else {
    v_1119 = sub_63;
    sub_62 = sub_65;
  };
  if (controller_v_445) {
    sub_61 = v_1094;
  } else {
    sub_61 = sub_62;
  };
  if (controller_air_failed_recovered) {
    v_1091 = sub_50;
  } else {
    v_1091 = sub_11;
  };
  if (controller_c_air_2) {
    v_1092 = v_1091;
  } else {
    v_1092 = sub_10;
  };
  if (controller_c_air_1) {
    sub_66 = v_1092;
  } else {
    sub_66 = sub_9;
  };
  if (controller_v_445) {
    v_1120 = v_1119;
  } else {
    v_1120 = sub_66;
  };
  if (controller_v_447) {
    v_1121 = v_1120;
  } else {
    v_1121 = sub_61;
  };
  if (controller_v_446) {
    sub_5 = v_1121;
  } else {
    sub_5 = sub_6;
  };
  sub_4 = sub_5;
  if (controller_v_408) {
    v_1075 = sub_20;
    sub_83 = false;
  } else {
    v_1075 = false;
    sub_83 = sub_20;
  };
  if (controller_light_failed_recovered) {
    sub_82 = v_1075;
  } else {
    sub_82 = sub_83;
  };
  if (controller_v_407) {
    v_1076 = sub_82;
  } else {
    v_1076 = sub_19;
  };
  if (controller_v_408) {
    v_1074 = sub_26;
    sub_85 = false;
  } else {
    v_1074 = false;
    sub_85 = sub_26;
  };
  if (controller_light_failed_recovered) {
    sub_84 = v_1074;
  } else {
    sub_84 = sub_85;
  };
  if (controller_v_407) {
    v_1077 = sub_84;
  } else {
    v_1077 = sub_25;
  };
  if (controller_c_window) {
    sub_81 = v_1076;
  } else {
    sub_81 = v_1077;
  };
  if (controller_cleaner) {
    v_1078 = sub_81;
    sub_80 = false;
  } else {
    v_1078 = false;
    sub_80 = sub_81;
  };
  if (controller_ck_17_1) {
    sub_79 = v_1078;
  } else {
    sub_79 = sub_80;
  };
  if (controller_c_door) {
    v_1081 = false;
    v_1079 = sub_79;
  } else {
    v_1081 = sub_79;
    v_1079 = false;
  };
  if (controller_v_408) {
    v_1071 = sub_32;
  } else {
    v_1071 = false;
  };
  if (controller_light_failed_recovered) {
    sub_89 = v_1071;
  } else {
    sub_89 = sub_34;
  };
  if (controller_v_407) {
    v_1072 = sub_31;
  } else {
    v_1072 = sub_89;
  };
  if (controller_c_window) {
    sub_88 = v_1072;
  } else {
    sub_88 = false;
  };
  if (controller_cleaner) {
    v_1073 = sub_81;
    sub_87 = sub_88;
  } else {
    v_1073 = sub_88;
    sub_87 = sub_81;
  };
  if (controller_ck_17_1) {
    sub_86 = v_1073;
  } else {
    sub_86 = sub_87;
  };
  if (controller_cleaner) {
    v_1070 = false;
    sub_91 = sub_88;
  } else {
    v_1070 = sub_88;
    sub_91 = false;
  };
  if (controller_ck_17_1) {
    sub_90 = v_1070;
  } else {
    sub_90 = sub_91;
  };
  if (controller_c_door) {
    v_1082 = sub_90;
  } else {
    v_1082 = sub_86;
  };
  if (controller_c_pc) {
    v_1083 = v_1081;
  } else {
    v_1083 = v_1082;
  };
  if (controller_c_door) {
    v_1080 = sub_86;
  } else {
    v_1080 = sub_90;
  };
  if (controller_c_pc) {
    sub_78 = v_1079;
  } else {
    sub_78 = v_1080;
  };
  if (controller_ck_11_1) {
    sub_77 = v_1083;
  } else {
    sub_77 = sub_78;
  };
  if (controller_cleaner) {
    v_1066 = sub_42;
    sub_95 = sub_88;
  } else {
    v_1066 = sub_88;
    sub_95 = sub_42;
  };
  if (controller_ck_17_1) {
    sub_94 = v_1066;
  } else {
    sub_94 = sub_95;
  };
  if (controller_c_door) {
    v_1068 = sub_90;
  } else {
    v_1068 = sub_94;
  };
  if (controller_c_pc) {
    v_1069 = sub_45;
  } else {
    v_1069 = v_1068;
  };
  if (controller_c_door) {
    v_1067 = sub_94;
  } else {
    v_1067 = sub_90;
  };
  if (controller_c_pc) {
    sub_93 = sub_39;
  } else {
    sub_93 = v_1067;
  };
  if (controller_ck_11_1) {
    sub_92 = v_1069;
  } else {
    sub_92 = sub_93;
  };
  if (controller_change_shift) {
    v_1084 = sub_92;
    sub_76 = sub_77;
  } else {
    v_1084 = sub_77;
    sub_76 = sub_92;
  };
  if (controller_ck_1) {
    sub_75 = v_1084;
  } else {
    sub_75 = sub_76;
  };
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_72 = sub_73;
  if (controller_c_pc) {
    sub_99 = false;
  } else {
    sub_99 = sub_90;
  };
  sub_98 = sub_99;
  sub_97 = sub_98;
  if (controller_air_failed_recovered) {
    v_1065 = sub_97;
  } else {
    v_1065 = sub_74;
  };
  if (controller_c_air_2) {
    sub_96 = v_1065;
  } else {
    sub_96 = sub_73;
  };
  if (controller_c_air_1) {
    sub_71 = sub_72;
  } else {
    sub_71 = sub_96;
  };
  if (controller_v_408) {
    v_1064 = sub_26;
  } else {
    v_1064 = sub_57;
  };
  if (controller_light_failed_recovered) {
    sub_106 = v_1064;
  } else {
    sub_106 = sub_56;
  };
  if (controller_v_407) {
    sub_105 = sub_84;
  } else {
    sub_105 = sub_106;
  };
  sub_104 = sub_105;
  if (controller_cleaner) {
    sub_103 = false;
    sub_107 = sub_104;
  } else {
    sub_103 = sub_104;
    sub_107 = false;
  };
  if (controller_ck_17_1) {
    sub_102 = sub_107;
  } else {
    sub_102 = sub_103;
  };
  if (controller_c_pc) {
    sub_101 = false;
  } else {
    sub_101 = sub_102;
  };
  if (controller_c_closet) {
    sub_100 = false;
  } else {
    sub_100 = sub_101;
  };
  if (controller_air_failed_recovered) {
    v_1085 = sub_74;
  } else {
    v_1085 = sub_100;
  };
  sub_108 = sub_97;
  if (controller_c_air_2) {
    v_1086 = v_1085;
  } else {
    v_1086 = sub_108;
  };
  sub_109 = sub_108;
  if (controller_c_air_1) {
    v_1087 = v_1086;
  } else {
    v_1087 = sub_109;
  };
  if (controller_v_445) {
    sub_70 = v_1087;
  } else {
    sub_70 = sub_71;
  };
  if (controller_v_447) {
    sub_69 = sub_109;
  } else {
    sub_69 = sub_70;
  };
  if (controller_c_air_1) {
    v_1063 = sub_96;
  } else {
    v_1063 = sub_72;
  };
  sub_113 = sub_100;
  sub_112 = sub_113;
  if (controller_air_failed_recovered) {
    v_1062 = sub_74;
  } else {
    v_1062 = sub_97;
  };
  if (controller_c_air_2) {
    sub_114 = v_1062;
  } else {
    sub_114 = sub_108;
  };
  if (controller_c_air_1) {
    v_1088 = sub_114;
    sub_111 = sub_112;
  } else {
    v_1088 = sub_112;
    sub_111 = sub_114;
  };
  if (controller_v_445) {
    sub_110 = v_1063;
  } else {
    sub_110 = sub_111;
  };
  if (controller_air_failed_recovered) {
    v_1060 = sub_100;
  } else {
    v_1060 = sub_74;
  };
  if (controller_c_air_2) {
    v_1061 = v_1060;
  } else {
    v_1061 = sub_73;
  };
  if (controller_c_air_1) {
    sub_115 = v_1061;
  } else {
    sub_115 = sub_72;
  };
  if (controller_v_445) {
    v_1089 = v_1088;
  } else {
    v_1089 = sub_115;
  };
  if (controller_v_447) {
    v_1090 = v_1089;
  } else {
    v_1090 = sub_110;
  };
  if (controller_v_446) {
    sub_68 = v_1090;
  } else {
    sub_68 = sub_69;
  };
  if (controller_c_light_1) {
    sub_67 = sub_68;
  } else {
    sub_67 = sub_4;
  };
  if (controller_light_switch) {
    v_1122 = sub_4;
  } else {
    v_1122 = sub_67;
  };
  if (controller_c_light_2) {
    sub_3 = v_1122;
  } else {
    sub_3 = sub_67;
  };
  sub_130 = sub_18;
  if (controller_c_door) {
    sub_129 = sub_130;
  } else {
    sub_129 = false;
  };
  sub_128 = sub_129;
  if (controller_c_door) {
    sub_131 = false;
  } else {
    sub_131 = sub_130;
  };
  if (controller_ck_11_1) {
    sub_127 = sub_131;
  } else {
    sub_127 = sub_128;
  };
  sub_135 = sub_42;
  if (controller_c_door) {
    sub_134 = sub_135;
  } else {
    sub_134 = false;
  };
  sub_133 = sub_134;
  if (controller_c_door) {
    sub_136 = false;
  } else {
    sub_136 = sub_135;
  };
  if (controller_ck_11_1) {
    sub_132 = sub_136;
  } else {
    sub_132 = sub_133;
  };
  if (controller_change_shift) {
    v_1048 = sub_132;
    sub_126 = sub_127;
  } else {
    v_1048 = sub_127;
    sub_126 = sub_132;
  };
  if (controller_ck_1) {
    sub_125 = v_1048;
  } else {
    sub_125 = sub_126;
  };
  sub_124 = sub_125;
  sub_123 = sub_124;
  sub_122 = sub_123;
  if (controller_c_window) {
    sub_143 = false;
  } else {
    sub_143 = sub_55;
  };
  if (controller_cleaner) {
    v_1046 = false;
    sub_142 = sub_143;
  } else {
    v_1046 = sub_143;
    sub_142 = false;
  };
  if (controller_ck_17_1) {
    sub_141 = v_1046;
    sub_145 = sub_53;
  } else {
    sub_141 = sub_142;
    sub_145 = sub_58;
  };
  sub_144 = sub_145;
  if (controller_c_pc) {
    sub_140 = sub_141;
  } else {
    sub_140 = sub_144;
  };
  if (controller_v_407) {
    sub_151 = sub_83;
  } else {
    sub_151 = false;
  };
  sub_150 = sub_151;
  if (controller_cleaner) {
    v_1045 = false;
    sub_149 = sub_150;
  } else {
    v_1045 = sub_150;
    sub_149 = false;
  };
  if (controller_ck_17_1) {
    sub_148 = v_1045;
  } else {
    sub_148 = sub_149;
  };
  sub_147 = sub_148;
  sub_146 = sub_147;
  if (controller_change_shift) {
    v_1047 = sub_146;
    sub_139 = sub_140;
  } else {
    v_1047 = sub_140;
    sub_139 = sub_146;
  };
  if (controller_ck_1) {
    sub_138 = v_1047;
  } else {
    sub_138 = sub_139;
  };
  sub_137 = sub_138;
  if (controller_air_failed_recovered) {
    v_1049 = sub_137;
  } else {
    v_1049 = sub_124;
  };
  if (controller_c_air_2) {
    v_1050 = v_1049;
  } else {
    v_1050 = sub_123;
  };
  if (controller_c_air_1) {
    sub_121 = sub_122;
  } else {
    sub_121 = v_1050;
  };
  if (controller_v_407) {
    v_1039 = sub_85;
  } else {
    v_1039 = false;
  };
  if (controller_c_window) {
    sub_158 = v_1039;
  } else {
    sub_158 = sub_55;
  };
  if (controller_cleaner) {
    v_1040 = false;
    sub_157 = sub_158;
  } else {
    v_1040 = sub_158;
    sub_157 = false;
  };
  if (controller_ck_17_1) {
    sub_156 = v_1040;
  } else {
    sub_156 = sub_157;
  };
  sub_155 = sub_156;
  if (controller_c_pc) {
    sub_154 = sub_155;
  } else {
    sub_154 = sub_144;
  };
  sub_159 = sub_144;
  if (controller_change_shift) {
    v_1041 = sub_159;
    sub_153 = sub_154;
  } else {
    v_1041 = sub_154;
    sub_153 = sub_159;
  };
  if (controller_ck_1) {
    v_1042 = v_1041;
  } else {
    v_1042 = sub_153;
  };
  sub_163 = sub_54;
  sub_162 = sub_163;
  if (controller_c_pc) {
    sub_161 = sub_155;
    sub_164 = sub_144;
  } else {
    sub_161 = sub_162;
    sub_164 = sub_162;
  };
  if (controller_change_shift) {
    v_1043 = sub_164;
    sub_160 = sub_161;
  } else {
    v_1043 = sub_161;
    sub_160 = sub_164;
  };
  if (controller_ck_1) {
    v_1044 = v_1043;
  } else {
    v_1044 = sub_160;
  };
  if (controller_c_closet) {
    sub_152 = v_1042;
  } else {
    sub_152 = v_1044;
  };
  if (controller_air_failed_recovered) {
    v_1051 = sub_124;
  } else {
    v_1051 = sub_152;
  };
  if (controller_v_408) {
    sub_173 = sub_57;
  } else {
    sub_173 = false;
  };
  if (controller_v_407) {
    v_1036 = sub_173;
  } else {
    v_1036 = false;
  };
  if (controller_c_window) {
    sub_172 = v_1036;
  } else {
    sub_172 = sub_55;
  };
  if (controller_cleaner) {
    v_1037 = false;
    sub_171 = sub_172;
  } else {
    v_1037 = sub_172;
    sub_171 = false;
  };
  if (controller_ck_17_1) {
    sub_170 = v_1037;
  } else {
    sub_170 = sub_171;
  };
  if (controller_c_pc) {
    sub_169 = sub_170;
  } else {
    sub_169 = sub_144;
  };
  if (controller_change_shift) {
    v_1038 = sub_146;
    sub_168 = sub_169;
  } else {
    v_1038 = sub_169;
    sub_168 = sub_146;
  };
  if (controller_ck_1) {
    sub_167 = v_1038;
  } else {
    sub_167 = sub_168;
  };
  sub_166 = sub_167;
  if (controller_air_failed_recovered) {
    v_1054 = sub_124;
  } else {
    v_1054 = sub_166;
  };
  sub_165 = sub_166;
  if (controller_c_air_2) {
    v_1052 = v_1051;
  } else {
    v_1052 = sub_165;
  };
  sub_174 = sub_137;
  if (controller_c_air_2) {
    v_1055 = v_1054;
  } else {
    v_1055 = sub_174;
  };
  if (controller_c_air_1) {
    v_1053 = v_1052;
  } else {
    v_1053 = sub_174;
  };
  if (controller_v_445) {
    sub_120 = v_1053;
  } else {
    sub_120 = sub_121;
  };
  sub_175 = sub_165;
  if (controller_v_447) {
    sub_119 = sub_175;
  } else {
    sub_119 = sub_120;
  };
  if (controller_air_failed_recovered) {
    v_1033 = sub_166;
  } else {
    v_1033 = sub_124;
  };
  if (controller_c_air_2) {
    v_1034 = v_1033;
  } else {
    v_1034 = sub_123;
  };
  if (controller_c_air_1) {
    v_1035 = v_1034;
  } else {
    v_1035 = sub_122;
  };
  if (controller_air_failed_recovered) {
    v_1031 = sub_124;
  } else {
    v_1031 = sub_137;
  };
  if (controller_c_air_2) {
    v_1032 = v_1031;
  } else {
    v_1032 = sub_165;
  };
  sub_179 = sub_152;
  sub_178 = sub_179;
  if (controller_c_air_1) {
    v_1056 = v_1055;
    sub_177 = sub_178;
  } else {
    v_1056 = sub_178;
    sub_177 = v_1032;
  };
  if (controller_v_445) {
    sub_176 = v_1035;
  } else {
    sub_176 = sub_177;
  };
  if (controller_air_failed_recovered) {
    v_1029 = sub_152;
  } else {
    v_1029 = sub_124;
  };
  if (controller_c_air_2) {
    v_1030 = v_1029;
  } else {
    v_1030 = sub_123;
  };
  if (controller_c_air_1) {
    sub_180 = v_1030;
  } else {
    sub_180 = sub_122;
  };
  if (controller_v_445) {
    v_1057 = v_1056;
  } else {
    v_1057 = sub_180;
  };
  if (controller_v_447) {
    v_1058 = v_1057;
  } else {
    v_1058 = sub_176;
  };
  if (controller_v_446) {
    sub_118 = v_1058;
  } else {
    sub_118 = sub_119;
  };
  sub_117 = sub_118;
  sub_194 = sub_81;
  if (controller_c_door) {
    sub_193 = sub_194;
  } else {
    sub_193 = false;
  };
  sub_192 = sub_193;
  if (controller_c_door) {
    sub_195 = false;
  } else {
    sub_195 = sub_194;
  };
  if (controller_ck_11_1) {
    sub_191 = sub_195;
  } else {
    sub_191 = sub_192;
  };
  if (controller_change_shift) {
    v_1018 = sub_132;
    sub_190 = sub_191;
  } else {
    v_1018 = sub_191;
    sub_190 = sub_132;
  };
  if (controller_ck_1) {
    sub_189 = v_1018;
  } else {
    sub_189 = sub_190;
  };
  sub_188 = sub_189;
  sub_187 = sub_188;
  sub_186 = sub_187;
  if (controller_c_window) {
    sub_202 = false;
  } else {
    sub_202 = sub_105;
  };
  if (controller_cleaner) {
    v_1016 = false;
    sub_201 = sub_202;
  } else {
    v_1016 = sub_202;
    sub_201 = false;
  };
  if (controller_ck_17_1) {
    sub_200 = v_1016;
    sub_204 = sub_103;
  } else {
    sub_200 = sub_201;
    sub_204 = sub_107;
  };
  sub_203 = sub_204;
  if (controller_c_pc) {
    sub_199 = sub_200;
  } else {
    sub_199 = sub_203;
  };
  sub_209 = sub_82;
  if (controller_cleaner) {
    v_1015 = false;
    sub_208 = sub_209;
  } else {
    v_1015 = sub_209;
    sub_208 = false;
  };
  if (controller_ck_17_1) {
    sub_207 = v_1015;
  } else {
    sub_207 = sub_208;
  };
  sub_206 = sub_207;
  sub_205 = sub_206;
  if (controller_change_shift) {
    v_1017 = sub_205;
    sub_198 = sub_199;
  } else {
    v_1017 = sub_199;
    sub_198 = sub_205;
  };
  if (controller_ck_1) {
    sub_197 = v_1017;
  } else {
    sub_197 = sub_198;
  };
  sub_196 = sub_197;
  if (controller_air_failed_recovered) {
    v_1019 = sub_196;
  } else {
    v_1019 = sub_188;
  };
  if (controller_c_air_2) {
    v_1020 = v_1019;
  } else {
    v_1020 = sub_187;
  };
  if (controller_c_air_1) {
    sub_185 = sub_186;
  } else {
    sub_185 = v_1020;
  };
  if (controller_c_window) {
    sub_216 = sub_84;
  } else {
    sub_216 = sub_105;
  };
  if (controller_cleaner) {
    v_1010 = false;
    sub_215 = sub_216;
  } else {
    v_1010 = sub_216;
    sub_215 = false;
  };
  if (controller_ck_17_1) {
    sub_214 = v_1010;
  } else {
    sub_214 = sub_215;
  };
  sub_213 = sub_214;
  if (controller_c_pc) {
    sub_212 = sub_213;
  } else {
    sub_212 = sub_203;
  };
  sub_217 = sub_203;
  if (controller_change_shift) {
    v_1011 = sub_217;
    sub_211 = sub_212;
  } else {
    v_1011 = sub_212;
    sub_211 = sub_217;
  };
  if (controller_ck_1) {
    v_1012 = v_1011;
  } else {
    v_1012 = sub_211;
  };
  sub_221 = sub_104;
  sub_220 = sub_221;
  if (controller_c_pc) {
    sub_219 = sub_213;
    sub_222 = sub_203;
  } else {
    sub_219 = sub_220;
    sub_222 = sub_220;
  };
  if (controller_change_shift) {
    v_1013 = sub_222;
    sub_218 = sub_219;
  } else {
    v_1013 = sub_219;
    sub_218 = sub_222;
  };
  if (controller_ck_1) {
    v_1014 = v_1013;
  } else {
    v_1014 = sub_218;
  };
  if (controller_c_closet) {
    sub_210 = v_1012;
  } else {
    sub_210 = v_1014;
  };
  if (controller_air_failed_recovered) {
    v_1021 = sub_188;
  } else {
    v_1021 = sub_210;
  };
  if (controller_v_408) {
    v_1006 = false;
  } else {
    v_1006 = sub_57;
  };
  if (controller_light_failed_recovered) {
    sub_231 = v_1006;
  } else {
    sub_231 = sub_173;
  };
  if (controller_v_407) {
    v_1007 = false;
  } else {
    v_1007 = sub_231;
  };
  if (controller_c_window) {
    sub_230 = v_1007;
  } else {
    sub_230 = sub_105;
  };
  if (controller_cleaner) {
    v_1008 = false;
    sub_229 = sub_230;
  } else {
    v_1008 = sub_230;
    sub_229 = false;
  };
  if (controller_ck_17_1) {
    sub_228 = v_1008;
  } else {
    sub_228 = sub_229;
  };
  if (controller_c_pc) {
    sub_227 = sub_228;
  } else {
    sub_227 = sub_203;
  };
  if (controller_change_shift) {
    v_1009 = sub_205;
    sub_226 = sub_227;
  } else {
    v_1009 = sub_227;
    sub_226 = sub_205;
  };
  if (controller_ck_1) {
    sub_225 = v_1009;
  } else {
    sub_225 = sub_226;
  };
  sub_224 = sub_225;
  if (controller_air_failed_recovered) {
    v_1024 = sub_188;
  } else {
    v_1024 = sub_224;
  };
  sub_223 = sub_224;
  if (controller_c_air_2) {
    v_1022 = v_1021;
  } else {
    v_1022 = sub_223;
  };
  sub_232 = sub_196;
  if (controller_c_air_2) {
    v_1025 = v_1024;
  } else {
    v_1025 = sub_232;
  };
  if (controller_c_air_1) {
    v_1023 = v_1022;
  } else {
    v_1023 = sub_232;
  };
  if (controller_v_445) {
    sub_184 = v_1023;
  } else {
    sub_184 = sub_185;
  };
  sub_233 = sub_223;
  if (controller_v_447) {
    sub_183 = sub_233;
  } else {
    sub_183 = sub_184;
  };
  if (controller_air_failed_recovered) {
    v_1003 = sub_224;
  } else {
    v_1003 = sub_188;
  };
  if (controller_c_air_2) {
    v_1004 = v_1003;
  } else {
    v_1004 = sub_187;
  };
  if (controller_c_air_1) {
    v_1005 = v_1004;
  } else {
    v_1005 = sub_186;
  };
  if (controller_air_failed_recovered) {
    v_1001 = sub_188;
  } else {
    v_1001 = sub_196;
  };
  if (controller_c_air_2) {
    v_1002 = v_1001;
  } else {
    v_1002 = sub_223;
  };
  sub_237 = sub_210;
  sub_236 = sub_237;
  if (controller_c_air_1) {
    v_1026 = v_1025;
    sub_235 = sub_236;
  } else {
    v_1026 = sub_236;
    sub_235 = v_1002;
  };
  if (controller_v_445) {
    sub_234 = v_1005;
  } else {
    sub_234 = sub_235;
  };
  if (controller_air_failed_recovered) {
    v_999 = sub_210;
  } else {
    v_999 = sub_188;
  };
  if (controller_c_air_2) {
    v_1000 = v_999;
  } else {
    v_1000 = sub_187;
  };
  if (controller_c_air_1) {
    sub_238 = v_1000;
  } else {
    sub_238 = sub_186;
  };
  if (controller_v_445) {
    v_1027 = v_1026;
  } else {
    v_1027 = sub_238;
  };
  if (controller_v_447) {
    v_1028 = v_1027;
  } else {
    v_1028 = sub_234;
  };
  if (controller_v_446) {
    sub_182 = v_1028;
  } else {
    sub_182 = sub_183;
  };
  if (controller_c_light_1) {
    sub_181 = sub_182;
  } else {
    sub_181 = sub_117;
  };
  if (controller_light_switch) {
    v_1059 = sub_117;
  } else {
    v_1059 = sub_181;
  };
  if (controller_c_light_2) {
    sub_116 = v_1059;
  } else {
    sub_116 = sub_181;
  };
  if (controller_worker) {
    v_1123 = sub_116;
    sub_2 = sub_3;
  } else {
    v_1123 = sub_3;
    sub_2 = sub_116;
  };
  if (controller_ck_15_1) {
    sub_1 = v_1123;
  } else {
    sub_1 = sub_2;
  };
  v_978 = (controller_v_391||sub_22);
  if (controller_blind_failed_recovered) {
    sub_256 = v_978;
  } else {
    sub_256 = sub_24;
  };
  sub_255 = sub_256;
  if (controller_v_407) {
    v_979 = sub_255;
  } else {
    v_979 = false;
  };
  sub_259 = true;
  sub_258 = sub_259;
  if (controller_v_407) {
    sub_257 = sub_258;
  } else {
    sub_257 = false;
  };
  if (controller_c_window) {
    sub_254 = v_979;
  } else {
    sub_254 = sub_257;
  };
  if (controller_cleaner) {
    v_980 = sub_254;
    sub_253 = false;
  } else {
    v_980 = false;
    sub_253 = sub_254;
  };
  if (controller_ck_17_1) {
    sub_252 = v_980;
  } else {
    sub_252 = sub_253;
  };
  if (controller_c_door) {
    v_983 = false;
    v_981 = sub_252;
  } else {
    v_983 = sub_252;
    v_981 = false;
  };
  if (controller_v_408) {
    sub_264 = false;
  } else {
    sub_264 = sub_259;
  };
  sub_263 = sub_264;
  if (controller_v_407) {
    v_976 = sub_263;
  } else {
    v_976 = sub_258;
  };
  if (controller_c_window) {
    sub_262 = v_976;
  } else {
    sub_262 = false;
  };
  if (controller_cleaner) {
    v_977 = sub_254;
    sub_261 = sub_262;
  } else {
    v_977 = sub_262;
    sub_261 = sub_254;
  };
  if (controller_ck_17_1) {
    sub_260 = v_977;
  } else {
    sub_260 = sub_261;
  };
  if (controller_cleaner) {
    v_975 = false;
    sub_266 = sub_262;
  } else {
    v_975 = sub_262;
    sub_266 = false;
  };
  if (controller_ck_17_1) {
    sub_265 = v_975;
  } else {
    sub_265 = sub_266;
  };
  if (controller_c_door) {
    v_984 = sub_265;
  } else {
    v_984 = sub_260;
  };
  if (controller_c_pc) {
    v_985 = v_983;
  } else {
    v_985 = v_984;
  };
  if (controller_c_door) {
    v_982 = sub_260;
  } else {
    v_982 = sub_265;
  };
  if (controller_c_pc) {
    sub_251 = v_981;
  } else {
    sub_251 = v_982;
  };
  if (controller_ck_11_1) {
    sub_250 = v_985;
  } else {
    sub_250 = sub_251;
  };
  if (controller_c_window) {
    sub_272 = false;
  } else {
    sub_272 = sub_258;
  };
  if (controller_cleaner) {
    v_971 = sub_272;
    sub_271 = false;
  } else {
    v_971 = false;
    sub_271 = sub_272;
  };
  if (controller_ck_17_1) {
    sub_270 = v_971;
  } else {
    sub_270 = sub_271;
  };
  if (controller_c_door) {
    sub_269 = sub_270;
  } else {
    sub_269 = false;
  };
  if (controller_cleaner) {
    v_970 = sub_272;
    sub_274 = sub_262;
  } else {
    v_970 = sub_262;
    sub_274 = sub_272;
  };
  if (controller_ck_17_1) {
    sub_273 = v_970;
  } else {
    sub_273 = sub_274;
  };
  if (controller_c_door) {
    v_973 = sub_265;
    v_972 = sub_273;
  } else {
    v_973 = sub_273;
    v_972 = sub_265;
  };
  if (controller_c_pc) {
    sub_268 = sub_269;
  } else {
    sub_268 = v_972;
  };
  if (controller_c_door) {
    sub_275 = false;
  } else {
    sub_275 = sub_270;
  };
  if (controller_c_pc) {
    v_974 = sub_275;
  } else {
    v_974 = v_973;
  };
  if (controller_ck_11_1) {
    sub_267 = v_974;
  } else {
    sub_267 = sub_268;
  };
  if (controller_change_shift) {
    v_986 = sub_267;
    sub_249 = sub_250;
  } else {
    v_986 = sub_250;
    sub_249 = sub_267;
  };
  if (controller_ck_1) {
    sub_248 = v_986;
  } else {
    sub_248 = sub_249;
  };
  sub_247 = sub_248;
  sub_246 = sub_247;
  sub_245 = sub_246;
  if (controller_c_pc) {
    sub_279 = false;
  } else {
    sub_279 = sub_265;
  };
  sub_278 = sub_279;
  sub_277 = sub_278;
  if (controller_air_failed_recovered) {
    v_969 = sub_277;
  } else {
    v_969 = sub_247;
  };
  if (controller_c_air_2) {
    sub_276 = v_969;
  } else {
    sub_276 = sub_246;
  };
  if (controller_c_air_1) {
    sub_244 = sub_245;
  } else {
    sub_244 = sub_276;
  };
  sub_284 = sub_257;
  if (controller_cleaner) {
    sub_283 = false;
    sub_285 = sub_284;
  } else {
    sub_283 = sub_284;
    sub_285 = false;
  };
  if (controller_ck_17_1) {
    sub_282 = sub_285;
  } else {
    sub_282 = sub_283;
  };
  if (controller_c_pc) {
    sub_281 = false;
  } else {
    sub_281 = sub_282;
  };
  if (controller_c_closet) {
    sub_280 = false;
  } else {
    sub_280 = sub_281;
  };
  if (controller_air_failed_recovered) {
    v_987 = sub_247;
  } else {
    v_987 = sub_280;
  };
  sub_286 = sub_277;
  if (controller_c_air_2) {
    v_988 = v_987;
  } else {
    v_988 = sub_286;
  };
  sub_287 = sub_286;
  if (controller_c_air_1) {
    v_989 = v_988;
  } else {
    v_989 = sub_287;
  };
  if (controller_v_445) {
    sub_243 = v_989;
  } else {
    sub_243 = sub_244;
  };
  if (controller_v_447) {
    sub_242 = sub_287;
  } else {
    sub_242 = sub_243;
  };
  if (controller_c_air_1) {
    v_968 = sub_276;
  } else {
    v_968 = sub_245;
  };
  sub_291 = sub_280;
  sub_290 = sub_291;
  if (controller_air_failed_recovered) {
    v_967 = sub_247;
  } else {
    v_967 = sub_277;
  };
  if (controller_c_air_2) {
    sub_292 = v_967;
  } else {
    sub_292 = sub_286;
  };
  if (controller_c_air_1) {
    v_990 = sub_292;
    sub_289 = sub_290;
  } else {
    v_990 = sub_290;
    sub_289 = sub_292;
  };
  if (controller_v_445) {
    sub_288 = v_968;
  } else {
    sub_288 = sub_289;
  };
  if (controller_air_failed_recovered) {
    v_965 = sub_280;
  } else {
    v_965 = sub_247;
  };
  if (controller_c_air_2) {
    v_966 = v_965;
  } else {
    v_966 = sub_246;
  };
  if (controller_c_air_1) {
    sub_293 = v_966;
  } else {
    sub_293 = sub_245;
  };
  if (controller_v_445) {
    v_991 = v_990;
  } else {
    v_991 = sub_293;
  };
  if (controller_v_447) {
    v_992 = v_991;
  } else {
    v_992 = sub_288;
  };
  if (controller_v_446) {
    v_993 = v_992;
  } else {
    v_993 = sub_242;
  };
  if (controller_blind_failed_recovered) {
    sub_308 = sub_21;
  } else {
    sub_308 = sub_24;
  };
  sub_307 = sub_308;
  if (controller_v_407) {
    v_953 = sub_307;
  } else {
    v_953 = false;
  };
  v_951 = !(controller_v_391);
  v_949 = !(controller_v_391);
  v_950 = (v_949||sub_23);
  sub_311 = !(controller_v_392);
  v_952 = (v_951||sub_311);
  if (controller_blind_failed_recovered) {
    sub_310 = v_950;
  } else {
    sub_310 = v_952;
  };
  sub_309 = sub_310;
  if (controller_v_407) {
    v_954 = sub_309;
  } else {
    v_954 = false;
  };
  if (controller_c_window) {
    sub_306 = v_953;
  } else {
    sub_306 = v_954;
  };
  if (controller_cleaner) {
    v_955 = sub_306;
    sub_305 = false;
  } else {
    v_955 = false;
    sub_305 = sub_306;
  };
  if (controller_ck_17_1) {
    sub_304 = v_955;
  } else {
    sub_304 = sub_305;
  };
  if (controller_c_door) {
    v_958 = false;
    v_956 = sub_304;
  } else {
    v_958 = sub_304;
    v_956 = false;
  };
  v_946 = (controller_v_391||sub_311);
  v_945 = (controller_v_391||sub_23);
  if (controller_blind_failed_recovered) {
    sub_316 = v_945;
  } else {
    sub_316 = v_946;
  };
  sub_315 = sub_316;
  if (controller_v_408) {
    sub_317 = false;
  } else {
    sub_317 = sub_316;
  };
  if (controller_v_407) {
    v_947 = sub_317;
  } else {
    v_947 = sub_315;
  };
  if (controller_c_window) {
    sub_314 = v_947;
  } else {
    sub_314 = false;
  };
  if (controller_cleaner) {
    v_948 = sub_306;
    sub_313 = sub_314;
  } else {
    v_948 = sub_314;
    sub_313 = sub_306;
  };
  if (controller_ck_17_1) {
    sub_312 = v_948;
  } else {
    sub_312 = sub_313;
  };
  if (controller_cleaner) {
    v_944 = false;
    sub_319 = sub_314;
  } else {
    v_944 = sub_314;
    sub_319 = false;
  };
  if (controller_ck_17_1) {
    sub_318 = v_944;
  } else {
    sub_318 = sub_319;
  };
  if (controller_c_door) {
    v_959 = sub_318;
  } else {
    v_959 = sub_312;
  };
  if (controller_c_pc) {
    v_960 = v_958;
  } else {
    v_960 = v_959;
  };
  if (controller_c_door) {
    v_957 = sub_312;
  } else {
    v_957 = sub_318;
  };
  if (controller_c_pc) {
    sub_303 = v_956;
  } else {
    sub_303 = v_957;
  };
  if (controller_ck_11_1) {
    sub_302 = v_960;
  } else {
    sub_302 = sub_303;
  };
  if (controller_c_window) {
    sub_325 = false;
  } else {
    sub_325 = sub_309;
  };
  if (controller_cleaner) {
    v_940 = sub_325;
    sub_324 = false;
  } else {
    v_940 = false;
    sub_324 = sub_325;
  };
  if (controller_ck_17_1) {
    sub_323 = v_940;
  } else {
    sub_323 = sub_324;
  };
  if (controller_c_door) {
    sub_322 = sub_323;
  } else {
    sub_322 = false;
  };
  if (controller_cleaner) {
    v_939 = sub_325;
    sub_327 = sub_314;
  } else {
    v_939 = sub_314;
    sub_327 = sub_325;
  };
  if (controller_ck_17_1) {
    sub_326 = v_939;
  } else {
    sub_326 = sub_327;
  };
  if (controller_c_door) {
    v_942 = sub_318;
    v_941 = sub_326;
  } else {
    v_942 = sub_326;
    v_941 = sub_318;
  };
  if (controller_c_pc) {
    sub_321 = sub_322;
  } else {
    sub_321 = v_941;
  };
  if (controller_c_door) {
    sub_328 = false;
  } else {
    sub_328 = sub_323;
  };
  if (controller_c_pc) {
    v_943 = sub_328;
  } else {
    v_943 = v_942;
  };
  if (controller_ck_11_1) {
    sub_320 = v_943;
  } else {
    sub_320 = sub_321;
  };
  if (controller_change_shift) {
    v_961 = sub_320;
    sub_301 = sub_302;
  } else {
    v_961 = sub_302;
    sub_301 = sub_320;
  };
  if (controller_ck_1) {
    sub_300 = v_961;
  } else {
    sub_300 = sub_301;
  };
  sub_299 = sub_300;
  sub_298 = sub_299;
  sub_297 = sub_298;
  if (controller_c_pc) {
    sub_332 = false;
  } else {
    sub_332 = sub_318;
  };
  sub_331 = sub_332;
  sub_330 = sub_331;
  if (controller_air_failed_recovered) {
    v_938 = sub_330;
  } else {
    v_938 = sub_299;
  };
  if (controller_c_air_2) {
    sub_329 = v_938;
  } else {
    sub_329 = sub_298;
  };
  if (controller_c_air_1) {
    sub_296 = sub_297;
  } else {
    sub_296 = sub_329;
  };
  if (controller_v_408) {
    sub_339 = sub_259;
  } else {
    sub_339 = sub_310;
  };
  if (controller_v_407) {
    sub_338 = sub_339;
  } else {
    sub_338 = false;
  };
  sub_337 = sub_338;
  if (controller_cleaner) {
    sub_336 = false;
    sub_340 = sub_337;
  } else {
    sub_336 = sub_337;
    sub_340 = false;
  };
  if (controller_ck_17_1) {
    sub_335 = sub_340;
  } else {
    sub_335 = sub_336;
  };
  if (controller_c_pc) {
    sub_334 = false;
  } else {
    sub_334 = sub_335;
  };
  if (controller_c_closet) {
    sub_333 = false;
  } else {
    sub_333 = sub_334;
  };
  if (controller_air_failed_recovered) {
    v_962 = sub_299;
  } else {
    v_962 = sub_333;
  };
  sub_341 = sub_330;
  if (controller_c_air_2) {
    v_963 = v_962;
  } else {
    v_963 = sub_341;
  };
  sub_342 = sub_341;
  if (controller_c_air_1) {
    v_964 = v_963;
  } else {
    v_964 = sub_342;
  };
  if (controller_v_445) {
    sub_295 = v_964;
  } else {
    sub_295 = sub_296;
  };
  if (controller_v_447) {
    sub_294 = sub_342;
  } else {
    sub_294 = sub_295;
  };
  if (controller_c_air_1) {
    v_937 = sub_329;
  } else {
    v_937 = sub_297;
  };
  sub_346 = sub_333;
  sub_345 = sub_346;
  if (controller_air_failed_recovered) {
    v_936 = sub_299;
  } else {
    v_936 = sub_330;
  };
  if (controller_c_air_2) {
    sub_347 = v_936;
  } else {
    sub_347 = sub_341;
  };
  if (controller_c_air_1) {
    v_994 = sub_347;
    sub_344 = sub_345;
  } else {
    v_994 = sub_345;
    sub_344 = sub_347;
  };
  if (controller_v_445) {
    sub_343 = v_937;
  } else {
    sub_343 = sub_344;
  };
  if (controller_air_failed_recovered) {
    v_934 = sub_333;
  } else {
    v_934 = sub_299;
  };
  if (controller_c_air_2) {
    v_935 = v_934;
  } else {
    v_935 = sub_298;
  };
  if (controller_c_air_1) {
    sub_348 = v_935;
  } else {
    sub_348 = sub_297;
  };
  if (controller_v_445) {
    v_995 = v_994;
  } else {
    v_995 = sub_348;
  };
  if (controller_v_447) {
    v_996 = v_995;
  } else {
    v_996 = sub_343;
  };
  if (controller_v_446) {
    v_997 = v_996;
  } else {
    v_997 = sub_294;
  };
  if (controller_blind_switch) {
    sub_241 = v_993;
  } else {
    sub_241 = v_997;
  };
  if (controller_v_408) {
    v_913 = sub_256;
    sub_364 = false;
  } else {
    v_913 = false;
    sub_364 = sub_256;
  };
  if (controller_light_failed_recovered) {
    sub_363 = v_913;
  } else {
    sub_363 = sub_364;
  };
  if (controller_v_407) {
    v_914 = sub_363;
  } else {
    v_914 = sub_255;
  };
  if (controller_v_408) {
    sub_367 = sub_259;
  } else {
    sub_367 = false;
  };
  if (controller_light_failed_recovered) {
    sub_366 = sub_367;
  } else {
    sub_366 = sub_264;
  };
  if (controller_v_407) {
    sub_365 = sub_366;
  } else {
    sub_365 = sub_258;
  };
  if (controller_c_window) {
    sub_362 = v_914;
  } else {
    sub_362 = sub_365;
  };
  if (controller_cleaner) {
    v_915 = sub_362;
    sub_361 = false;
  } else {
    v_915 = false;
    sub_361 = sub_362;
  };
  if (controller_ck_17_1) {
    sub_360 = v_915;
  } else {
    sub_360 = sub_361;
  };
  if (controller_c_door) {
    v_918 = false;
    v_916 = sub_360;
  } else {
    v_918 = sub_360;
    v_916 = false;
  };
  if (controller_v_407) {
    v_911 = sub_258;
  } else {
    v_911 = sub_366;
  };
  if (controller_c_window) {
    sub_370 = v_911;
  } else {
    sub_370 = false;
  };
  if (controller_cleaner) {
    v_912 = sub_362;
    sub_369 = sub_370;
  } else {
    v_912 = sub_370;
    sub_369 = sub_362;
  };
  if (controller_ck_17_1) {
    sub_368 = v_912;
  } else {
    sub_368 = sub_369;
  };
  if (controller_cleaner) {
    v_910 = false;
    sub_372 = sub_370;
  } else {
    v_910 = sub_370;
    sub_372 = false;
  };
  if (controller_ck_17_1) {
    sub_371 = v_910;
  } else {
    sub_371 = sub_372;
  };
  if (controller_c_door) {
    v_919 = sub_371;
  } else {
    v_919 = sub_368;
  };
  if (controller_c_pc) {
    v_920 = v_918;
  } else {
    v_920 = v_919;
  };
  if (controller_c_door) {
    v_917 = sub_368;
  } else {
    v_917 = sub_371;
  };
  if (controller_c_pc) {
    sub_359 = v_916;
  } else {
    sub_359 = v_917;
  };
  if (controller_ck_11_1) {
    sub_358 = v_920;
  } else {
    sub_358 = sub_359;
  };
  if (controller_cleaner) {
    v_906 = sub_272;
    sub_376 = sub_370;
  } else {
    v_906 = sub_370;
    sub_376 = sub_272;
  };
  if (controller_ck_17_1) {
    sub_375 = v_906;
  } else {
    sub_375 = sub_376;
  };
  if (controller_c_door) {
    v_908 = sub_371;
  } else {
    v_908 = sub_375;
  };
  if (controller_c_pc) {
    v_909 = sub_275;
  } else {
    v_909 = v_908;
  };
  if (controller_c_door) {
    v_907 = sub_375;
  } else {
    v_907 = sub_371;
  };
  if (controller_c_pc) {
    sub_374 = sub_269;
  } else {
    sub_374 = v_907;
  };
  if (controller_ck_11_1) {
    sub_373 = v_909;
  } else {
    sub_373 = sub_374;
  };
  if (controller_change_shift) {
    v_921 = sub_373;
    sub_357 = sub_358;
  } else {
    v_921 = sub_358;
    sub_357 = sub_373;
  };
  if (controller_ck_1) {
    sub_356 = v_921;
  } else {
    sub_356 = sub_357;
  };
  sub_355 = sub_356;
  sub_354 = sub_355;
  sub_353 = sub_354;
  if (controller_c_pc) {
    sub_380 = false;
  } else {
    sub_380 = sub_371;
  };
  sub_379 = sub_380;
  sub_378 = sub_379;
  if (controller_air_failed_recovered) {
    v_905 = sub_378;
  } else {
    v_905 = sub_355;
  };
  if (controller_c_air_2) {
    sub_377 = v_905;
  } else {
    sub_377 = sub_354;
  };
  if (controller_c_air_1) {
    sub_352 = sub_353;
  } else {
    sub_352 = sub_377;
  };
  sub_385 = sub_365;
  if (controller_cleaner) {
    sub_384 = false;
    sub_386 = sub_385;
  } else {
    sub_384 = sub_385;
    sub_386 = false;
  };
  if (controller_ck_17_1) {
    sub_383 = sub_386;
  } else {
    sub_383 = sub_384;
  };
  if (controller_c_pc) {
    sub_382 = false;
  } else {
    sub_382 = sub_383;
  };
  if (controller_c_closet) {
    sub_381 = false;
  } else {
    sub_381 = sub_382;
  };
  if (controller_air_failed_recovered) {
    v_922 = sub_355;
  } else {
    v_922 = sub_381;
  };
  sub_387 = sub_378;
  if (controller_c_air_2) {
    v_923 = v_922;
  } else {
    v_923 = sub_387;
  };
  sub_388 = sub_387;
  if (controller_c_air_1) {
    v_924 = v_923;
  } else {
    v_924 = sub_388;
  };
  if (controller_v_445) {
    sub_351 = v_924;
  } else {
    sub_351 = sub_352;
  };
  if (controller_v_447) {
    sub_350 = sub_388;
  } else {
    sub_350 = sub_351;
  };
  if (controller_c_air_1) {
    v_904 = sub_377;
  } else {
    v_904 = sub_353;
  };
  sub_392 = sub_381;
  sub_391 = sub_392;
  if (controller_air_failed_recovered) {
    v_903 = sub_355;
  } else {
    v_903 = sub_378;
  };
  if (controller_c_air_2) {
    sub_393 = v_903;
  } else {
    sub_393 = sub_387;
  };
  if (controller_c_air_1) {
    v_925 = sub_393;
    sub_390 = sub_391;
  } else {
    v_925 = sub_391;
    sub_390 = sub_393;
  };
  if (controller_v_445) {
    sub_389 = v_904;
  } else {
    sub_389 = sub_390;
  };
  if (controller_air_failed_recovered) {
    v_901 = sub_381;
  } else {
    v_901 = sub_355;
  };
  if (controller_c_air_2) {
    v_902 = v_901;
  } else {
    v_902 = sub_354;
  };
  if (controller_c_air_1) {
    sub_394 = v_902;
  } else {
    sub_394 = sub_353;
  };
  if (controller_v_445) {
    v_926 = v_925;
  } else {
    v_926 = sub_394;
  };
  if (controller_v_447) {
    v_927 = v_926;
  } else {
    v_927 = sub_389;
  };
  if (controller_v_446) {
    v_928 = v_927;
  } else {
    v_928 = sub_350;
  };
  if (controller_v_408) {
    v_888 = sub_308;
    sub_409 = false;
  } else {
    v_888 = false;
    sub_409 = sub_308;
  };
  if (controller_light_failed_recovered) {
    sub_408 = v_888;
  } else {
    sub_408 = sub_409;
  };
  if (controller_v_407) {
    v_889 = sub_408;
  } else {
    v_889 = sub_307;
  };
  if (controller_v_408) {
    v_887 = sub_310;
    sub_411 = false;
  } else {
    v_887 = false;
    sub_411 = sub_310;
  };
  if (controller_light_failed_recovered) {
    sub_410 = v_887;
  } else {
    sub_410 = sub_411;
  };
  if (controller_v_407) {
    v_890 = sub_410;
  } else {
    v_890 = sub_309;
  };
  if (controller_c_window) {
    sub_407 = v_889;
  } else {
    sub_407 = v_890;
  };
  if (controller_cleaner) {
    v_891 = sub_407;
    sub_406 = false;
  } else {
    v_891 = false;
    sub_406 = sub_407;
  };
  if (controller_ck_17_1) {
    sub_405 = v_891;
  } else {
    sub_405 = sub_406;
  };
  if (controller_c_door) {
    v_894 = false;
    v_892 = sub_405;
  } else {
    v_894 = sub_405;
    v_892 = false;
  };
  if (controller_v_408) {
    v_884 = sub_316;
  } else {
    v_884 = false;
  };
  if (controller_light_failed_recovered) {
    sub_415 = v_884;
  } else {
    sub_415 = sub_317;
  };
  if (controller_v_407) {
    v_885 = sub_315;
  } else {
    v_885 = sub_415;
  };
  if (controller_c_window) {
    sub_414 = v_885;
  } else {
    sub_414 = false;
  };
  if (controller_cleaner) {
    v_886 = sub_407;
    sub_413 = sub_414;
  } else {
    v_886 = sub_414;
    sub_413 = sub_407;
  };
  if (controller_ck_17_1) {
    sub_412 = v_886;
  } else {
    sub_412 = sub_413;
  };
  if (controller_cleaner) {
    v_883 = false;
    sub_417 = sub_414;
  } else {
    v_883 = sub_414;
    sub_417 = false;
  };
  if (controller_ck_17_1) {
    sub_416 = v_883;
  } else {
    sub_416 = sub_417;
  };
  if (controller_c_door) {
    v_895 = sub_416;
  } else {
    v_895 = sub_412;
  };
  if (controller_c_pc) {
    v_896 = v_894;
  } else {
    v_896 = v_895;
  };
  if (controller_c_door) {
    v_893 = sub_412;
  } else {
    v_893 = sub_416;
  };
  if (controller_c_pc) {
    sub_404 = v_892;
  } else {
    sub_404 = v_893;
  };
  if (controller_ck_11_1) {
    sub_403 = v_896;
  } else {
    sub_403 = sub_404;
  };
  if (controller_cleaner) {
    v_879 = sub_325;
    sub_421 = sub_414;
  } else {
    v_879 = sub_414;
    sub_421 = sub_325;
  };
  if (controller_ck_17_1) {
    sub_420 = v_879;
  } else {
    sub_420 = sub_421;
  };
  if (controller_c_door) {
    v_881 = sub_416;
  } else {
    v_881 = sub_420;
  };
  if (controller_c_pc) {
    v_882 = sub_328;
  } else {
    v_882 = v_881;
  };
  if (controller_c_door) {
    v_880 = sub_420;
  } else {
    v_880 = sub_416;
  };
  if (controller_c_pc) {
    sub_419 = sub_322;
  } else {
    sub_419 = v_880;
  };
  if (controller_ck_11_1) {
    sub_418 = v_882;
  } else {
    sub_418 = sub_419;
  };
  if (controller_change_shift) {
    v_897 = sub_418;
    sub_402 = sub_403;
  } else {
    v_897 = sub_403;
    sub_402 = sub_418;
  };
  if (controller_ck_1) {
    sub_401 = v_897;
  } else {
    sub_401 = sub_402;
  };
  sub_400 = sub_401;
  sub_399 = sub_400;
  sub_398 = sub_399;
  if (controller_c_pc) {
    sub_425 = false;
  } else {
    sub_425 = sub_416;
  };
  sub_424 = sub_425;
  sub_423 = sub_424;
  if (controller_air_failed_recovered) {
    v_878 = sub_423;
  } else {
    v_878 = sub_400;
  };
  if (controller_c_air_2) {
    sub_422 = v_878;
  } else {
    sub_422 = sub_399;
  };
  if (controller_c_air_1) {
    sub_397 = sub_398;
  } else {
    sub_397 = sub_422;
  };
  if (controller_v_408) {
    v_877 = sub_310;
  } else {
    v_877 = sub_259;
  };
  if (controller_light_failed_recovered) {
    sub_432 = v_877;
  } else {
    sub_432 = sub_339;
  };
  if (controller_v_407) {
    sub_431 = sub_410;
  } else {
    sub_431 = sub_432;
  };
  sub_430 = sub_431;
  if (controller_cleaner) {
    sub_429 = false;
    sub_433 = sub_430;
  } else {
    sub_429 = sub_430;
    sub_433 = false;
  };
  if (controller_ck_17_1) {
    sub_428 = sub_433;
  } else {
    sub_428 = sub_429;
  };
  if (controller_c_pc) {
    sub_427 = false;
  } else {
    sub_427 = sub_428;
  };
  if (controller_c_closet) {
    sub_426 = false;
  } else {
    sub_426 = sub_427;
  };
  if (controller_air_failed_recovered) {
    v_898 = sub_400;
  } else {
    v_898 = sub_426;
  };
  sub_434 = sub_423;
  if (controller_c_air_2) {
    v_899 = v_898;
  } else {
    v_899 = sub_434;
  };
  sub_435 = sub_434;
  if (controller_c_air_1) {
    v_900 = v_899;
  } else {
    v_900 = sub_435;
  };
  if (controller_v_445) {
    sub_396 = v_900;
  } else {
    sub_396 = sub_397;
  };
  if (controller_v_447) {
    sub_395 = sub_435;
  } else {
    sub_395 = sub_396;
  };
  if (controller_c_air_1) {
    v_876 = sub_422;
  } else {
    v_876 = sub_398;
  };
  sub_439 = sub_426;
  sub_438 = sub_439;
  if (controller_air_failed_recovered) {
    v_875 = sub_400;
  } else {
    v_875 = sub_423;
  };
  if (controller_c_air_2) {
    sub_440 = v_875;
  } else {
    sub_440 = sub_434;
  };
  if (controller_c_air_1) {
    v_929 = sub_440;
    sub_437 = sub_438;
  } else {
    v_929 = sub_438;
    sub_437 = sub_440;
  };
  if (controller_v_445) {
    sub_436 = v_876;
  } else {
    sub_436 = sub_437;
  };
  if (controller_air_failed_recovered) {
    v_873 = sub_426;
  } else {
    v_873 = sub_400;
  };
  if (controller_c_air_2) {
    v_874 = v_873;
  } else {
    v_874 = sub_399;
  };
  if (controller_c_air_1) {
    sub_441 = v_874;
  } else {
    sub_441 = sub_398;
  };
  if (controller_v_445) {
    v_930 = v_929;
  } else {
    v_930 = sub_441;
  };
  if (controller_v_447) {
    v_931 = v_930;
  } else {
    v_931 = sub_436;
  };
  if (controller_v_446) {
    v_932 = v_931;
  } else {
    v_932 = sub_395;
  };
  if (controller_blind_switch) {
    v_933 = v_928;
  } else {
    v_933 = v_932;
  };
  if (controller_c_light_1) {
    sub_349 = v_933;
  } else {
    sub_349 = sub_241;
  };
  if (controller_light_switch) {
    v_998 = sub_241;
  } else {
    v_998 = sub_349;
  };
  if (controller_c_light_2) {
    sub_240 = v_998;
  } else {
    sub_240 = sub_349;
  };
  sub_455 = sub_254;
  if (controller_c_door) {
    sub_454 = sub_455;
  } else {
    sub_454 = false;
  };
  sub_453 = sub_454;
  if (controller_c_door) {
    sub_456 = false;
  } else {
    sub_456 = sub_455;
  };
  if (controller_ck_11_1) {
    sub_452 = sub_456;
  } else {
    sub_452 = sub_453;
  };
  sub_460 = sub_272;
  if (controller_c_door) {
    sub_459 = sub_460;
  } else {
    sub_459 = false;
  };
  sub_458 = sub_459;
  if (controller_c_door) {
    sub_461 = false;
  } else {
    sub_461 = sub_460;
  };
  if (controller_ck_11_1) {
    sub_457 = sub_461;
  } else {
    sub_457 = sub_458;
  };
  if (controller_change_shift) {
    v_854 = sub_457;
    sub_451 = sub_452;
  } else {
    v_854 = sub_452;
    sub_451 = sub_457;
  };
  if (controller_ck_1) {
    sub_450 = v_854;
  } else {
    sub_450 = sub_451;
  };
  sub_449 = sub_450;
  sub_448 = sub_449;
  sub_447 = sub_448;
  if (controller_c_window) {
    sub_468 = false;
  } else {
    sub_468 = sub_257;
  };
  if (controller_cleaner) {
    v_852 = false;
    sub_467 = sub_468;
  } else {
    v_852 = sub_468;
    sub_467 = false;
  };
  if (controller_ck_17_1) {
    sub_466 = v_852;
    sub_470 = sub_283;
  } else {
    sub_466 = sub_467;
    sub_470 = sub_285;
  };
  sub_469 = sub_470;
  if (controller_c_pc) {
    sub_465 = sub_466;
  } else {
    sub_465 = sub_469;
  };
  if (controller_v_407) {
    sub_476 = sub_364;
  } else {
    sub_476 = false;
  };
  sub_475 = sub_476;
  if (controller_cleaner) {
    v_851 = false;
    sub_474 = sub_475;
  } else {
    v_851 = sub_475;
    sub_474 = false;
  };
  if (controller_ck_17_1) {
    sub_473 = v_851;
  } else {
    sub_473 = sub_474;
  };
  sub_472 = sub_473;
  sub_471 = sub_472;
  if (controller_change_shift) {
    v_853 = sub_471;
    sub_464 = sub_465;
  } else {
    v_853 = sub_465;
    sub_464 = sub_471;
  };
  if (controller_ck_1) {
    sub_463 = v_853;
  } else {
    sub_463 = sub_464;
  };
  sub_462 = sub_463;
  if (controller_air_failed_recovered) {
    v_855 = sub_462;
  } else {
    v_855 = sub_449;
  };
  if (controller_c_air_2) {
    v_856 = v_855;
  } else {
    v_856 = sub_448;
  };
  if (controller_c_air_1) {
    sub_446 = sub_447;
  } else {
    sub_446 = v_856;
  };
  if (controller_v_407) {
    v_845 = sub_263;
  } else {
    v_845 = false;
  };
  if (controller_c_window) {
    sub_483 = v_845;
  } else {
    sub_483 = sub_257;
  };
  if (controller_cleaner) {
    v_846 = false;
    sub_482 = sub_483;
  } else {
    v_846 = sub_483;
    sub_482 = false;
  };
  if (controller_ck_17_1) {
    sub_481 = v_846;
  } else {
    sub_481 = sub_482;
  };
  sub_480 = sub_481;
  if (controller_c_pc) {
    sub_479 = sub_480;
  } else {
    sub_479 = sub_469;
  };
  sub_484 = sub_469;
  if (controller_change_shift) {
    v_847 = sub_484;
    sub_478 = sub_479;
  } else {
    v_847 = sub_479;
    sub_478 = sub_484;
  };
  if (controller_ck_1) {
    v_848 = v_847;
  } else {
    v_848 = sub_478;
  };
  sub_488 = sub_284;
  sub_487 = sub_488;
  if (controller_c_pc) {
    sub_486 = sub_480;
    sub_489 = sub_469;
  } else {
    sub_486 = sub_487;
    sub_489 = sub_487;
  };
  if (controller_change_shift) {
    v_849 = sub_489;
    sub_485 = sub_486;
  } else {
    v_849 = sub_486;
    sub_485 = sub_489;
  };
  if (controller_ck_1) {
    v_850 = v_849;
  } else {
    v_850 = sub_485;
  };
  if (controller_c_closet) {
    sub_477 = v_848;
  } else {
    sub_477 = v_850;
  };
  if (controller_air_failed_recovered) {
    v_857 = sub_449;
  } else {
    v_857 = sub_477;
  };
  if (controller_v_407) {
    sub_498 = sub_367;
  } else {
    sub_498 = false;
  };
  if (controller_c_window) {
    sub_497 = sub_498;
  } else {
    sub_497 = sub_257;
  };
  if (controller_cleaner) {
    v_843 = false;
    sub_496 = sub_497;
  } else {
    v_843 = sub_497;
    sub_496 = false;
  };
  if (controller_ck_17_1) {
    sub_495 = v_843;
  } else {
    sub_495 = sub_496;
  };
  if (controller_c_pc) {
    sub_494 = sub_495;
  } else {
    sub_494 = sub_469;
  };
  if (controller_change_shift) {
    v_844 = sub_471;
    sub_493 = sub_494;
  } else {
    v_844 = sub_494;
    sub_493 = sub_471;
  };
  if (controller_ck_1) {
    sub_492 = v_844;
  } else {
    sub_492 = sub_493;
  };
  sub_491 = sub_492;
  if (controller_air_failed_recovered) {
    v_860 = sub_449;
  } else {
    v_860 = sub_491;
  };
  sub_490 = sub_491;
  if (controller_c_air_2) {
    v_858 = v_857;
  } else {
    v_858 = sub_490;
  };
  sub_499 = sub_462;
  if (controller_c_air_2) {
    v_861 = v_860;
  } else {
    v_861 = sub_499;
  };
  if (controller_c_air_1) {
    v_859 = v_858;
  } else {
    v_859 = sub_499;
  };
  if (controller_v_445) {
    sub_445 = v_859;
  } else {
    sub_445 = sub_446;
  };
  sub_500 = sub_490;
  if (controller_v_447) {
    sub_444 = sub_500;
  } else {
    sub_444 = sub_445;
  };
  if (controller_air_failed_recovered) {
    v_840 = sub_491;
  } else {
    v_840 = sub_449;
  };
  if (controller_c_air_2) {
    v_841 = v_840;
  } else {
    v_841 = sub_448;
  };
  if (controller_c_air_1) {
    v_842 = v_841;
  } else {
    v_842 = sub_447;
  };
  if (controller_air_failed_recovered) {
    v_838 = sub_449;
  } else {
    v_838 = sub_462;
  };
  if (controller_c_air_2) {
    v_839 = v_838;
  } else {
    v_839 = sub_490;
  };
  sub_504 = sub_477;
  sub_503 = sub_504;
  if (controller_c_air_1) {
    v_862 = v_861;
    sub_502 = sub_503;
  } else {
    v_862 = sub_503;
    sub_502 = v_839;
  };
  if (controller_v_445) {
    sub_501 = v_842;
  } else {
    sub_501 = sub_502;
  };
  if (controller_air_failed_recovered) {
    v_836 = sub_477;
  } else {
    v_836 = sub_449;
  };
  if (controller_c_air_2) {
    v_837 = v_836;
  } else {
    v_837 = sub_448;
  };
  if (controller_c_air_1) {
    sub_505 = v_837;
  } else {
    sub_505 = sub_447;
  };
  if (controller_v_445) {
    v_863 = v_862;
  } else {
    v_863 = sub_505;
  };
  if (controller_v_447) {
    v_864 = v_863;
  } else {
    v_864 = sub_501;
  };
  if (controller_v_446) {
    v_865 = v_864;
  } else {
    v_865 = sub_444;
  };
  sub_517 = sub_306;
  if (controller_c_door) {
    sub_516 = sub_517;
  } else {
    sub_516 = false;
  };
  sub_515 = sub_516;
  if (controller_c_door) {
    sub_518 = false;
  } else {
    sub_518 = sub_517;
  };
  if (controller_ck_11_1) {
    sub_514 = sub_518;
  } else {
    sub_514 = sub_515;
  };
  sub_522 = sub_325;
  if (controller_c_door) {
    sub_521 = sub_522;
  } else {
    sub_521 = false;
  };
  sub_520 = sub_521;
  if (controller_c_door) {
    sub_523 = false;
  } else {
    sub_523 = sub_522;
  };
  if (controller_ck_11_1) {
    sub_519 = sub_523;
  } else {
    sub_519 = sub_520;
  };
  if (controller_change_shift) {
    v_830 = sub_519;
    sub_513 = sub_514;
  } else {
    v_830 = sub_514;
    sub_513 = sub_519;
  };
  if (controller_ck_1) {
    sub_512 = v_830;
  } else {
    sub_512 = sub_513;
  };
  sub_511 = sub_512;
  sub_510 = sub_511;
  sub_509 = sub_510;
  if (controller_c_window) {
    sub_530 = false;
  } else {
    sub_530 = sub_338;
  };
  if (controller_cleaner) {
    v_828 = false;
    sub_529 = sub_530;
  } else {
    v_828 = sub_530;
    sub_529 = false;
  };
  if (controller_ck_17_1) {
    sub_528 = v_828;
    sub_532 = sub_336;
  } else {
    sub_528 = sub_529;
    sub_532 = sub_340;
  };
  sub_531 = sub_532;
  if (controller_c_pc) {
    sub_527 = sub_528;
  } else {
    sub_527 = sub_531;
  };
  if (controller_v_407) {
    sub_538 = sub_409;
  } else {
    sub_538 = false;
  };
  sub_537 = sub_538;
  if (controller_cleaner) {
    v_827 = false;
    sub_536 = sub_537;
  } else {
    v_827 = sub_537;
    sub_536 = false;
  };
  if (controller_ck_17_1) {
    sub_535 = v_827;
  } else {
    sub_535 = sub_536;
  };
  sub_534 = sub_535;
  sub_533 = sub_534;
  if (controller_change_shift) {
    v_829 = sub_533;
    sub_526 = sub_527;
  } else {
    v_829 = sub_527;
    sub_526 = sub_533;
  };
  if (controller_ck_1) {
    sub_525 = v_829;
  } else {
    sub_525 = sub_526;
  };
  sub_524 = sub_525;
  if (controller_air_failed_recovered) {
    v_831 = sub_524;
  } else {
    v_831 = sub_511;
  };
  if (controller_c_air_2) {
    v_832 = v_831;
  } else {
    v_832 = sub_510;
  };
  if (controller_c_air_1) {
    sub_508 = sub_509;
  } else {
    sub_508 = v_832;
  };
  if (controller_v_407) {
    v_821 = sub_411;
  } else {
    v_821 = false;
  };
  if (controller_c_window) {
    sub_545 = v_821;
  } else {
    sub_545 = sub_338;
  };
  if (controller_cleaner) {
    v_822 = false;
    sub_544 = sub_545;
  } else {
    v_822 = sub_545;
    sub_544 = false;
  };
  if (controller_ck_17_1) {
    sub_543 = v_822;
  } else {
    sub_543 = sub_544;
  };
  sub_542 = sub_543;
  if (controller_c_pc) {
    sub_541 = sub_542;
  } else {
    sub_541 = sub_531;
  };
  sub_546 = sub_531;
  if (controller_change_shift) {
    v_823 = sub_546;
    sub_540 = sub_541;
  } else {
    v_823 = sub_541;
    sub_540 = sub_546;
  };
  if (controller_ck_1) {
    v_824 = v_823;
  } else {
    v_824 = sub_540;
  };
  sub_550 = sub_337;
  sub_549 = sub_550;
  if (controller_c_pc) {
    sub_548 = sub_542;
    sub_551 = sub_531;
  } else {
    sub_548 = sub_549;
    sub_551 = sub_549;
  };
  if (controller_change_shift) {
    v_825 = sub_551;
    sub_547 = sub_548;
  } else {
    v_825 = sub_548;
    sub_547 = sub_551;
  };
  if (controller_ck_1) {
    v_826 = v_825;
  } else {
    v_826 = sub_547;
  };
  if (controller_c_closet) {
    sub_539 = v_824;
  } else {
    sub_539 = v_826;
  };
  if (controller_air_failed_recovered) {
    v_833 = sub_511;
  } else {
    v_833 = sub_539;
  };
  if (controller_c_window) {
    sub_559 = sub_498;
  } else {
    sub_559 = sub_338;
  };
  if (controller_cleaner) {
    v_819 = false;
    sub_558 = sub_559;
  } else {
    v_819 = sub_559;
    sub_558 = false;
  };
  if (controller_ck_17_1) {
    sub_557 = v_819;
  } else {
    sub_557 = sub_558;
  };
  if (controller_c_pc) {
    sub_556 = sub_557;
  } else {
    sub_556 = sub_531;
  };
  if (controller_change_shift) {
    v_820 = sub_533;
    sub_555 = sub_556;
  } else {
    v_820 = sub_556;
    sub_555 = sub_533;
  };
  if (controller_ck_1) {
    sub_554 = v_820;
  } else {
    sub_554 = sub_555;
  };
  sub_553 = sub_554;
  if (controller_air_failed_recovered) {
    v_866 = sub_511;
  } else {
    v_866 = sub_553;
  };
  sub_552 = sub_553;
  if (controller_c_air_2) {
    v_834 = v_833;
  } else {
    v_834 = sub_552;
  };
  sub_560 = sub_524;
  if (controller_c_air_2) {
    v_867 = v_866;
  } else {
    v_867 = sub_560;
  };
  if (controller_c_air_1) {
    v_835 = v_834;
  } else {
    v_835 = sub_560;
  };
  if (controller_v_445) {
    sub_507 = v_835;
  } else {
    sub_507 = sub_508;
  };
  sub_561 = sub_552;
  if (controller_v_447) {
    sub_506 = sub_561;
  } else {
    sub_506 = sub_507;
  };
  if (controller_air_failed_recovered) {
    v_816 = sub_553;
  } else {
    v_816 = sub_511;
  };
  if (controller_c_air_2) {
    v_817 = v_816;
  } else {
    v_817 = sub_510;
  };
  if (controller_c_air_1) {
    v_818 = v_817;
  } else {
    v_818 = sub_509;
  };
  if (controller_air_failed_recovered) {
    v_814 = sub_511;
  } else {
    v_814 = sub_524;
  };
  if (controller_c_air_2) {
    v_815 = v_814;
  } else {
    v_815 = sub_552;
  };
  sub_565 = sub_539;
  sub_564 = sub_565;
  if (controller_c_air_1) {
    v_868 = v_867;
    sub_563 = sub_564;
  } else {
    v_868 = sub_564;
    sub_563 = v_815;
  };
  if (controller_v_445) {
    sub_562 = v_818;
  } else {
    sub_562 = sub_563;
  };
  if (controller_air_failed_recovered) {
    v_812 = sub_539;
  } else {
    v_812 = sub_511;
  };
  if (controller_c_air_2) {
    v_813 = v_812;
  } else {
    v_813 = sub_510;
  };
  if (controller_c_air_1) {
    sub_566 = v_813;
  } else {
    sub_566 = sub_509;
  };
  if (controller_v_445) {
    v_869 = v_868;
  } else {
    v_869 = sub_566;
  };
  if (controller_v_447) {
    v_870 = v_869;
  } else {
    v_870 = sub_562;
  };
  if (controller_v_446) {
    v_871 = v_870;
  } else {
    v_871 = sub_506;
  };
  if (controller_blind_switch) {
    sub_443 = v_865;
  } else {
    sub_443 = v_871;
  };
  sub_579 = sub_362;
  if (controller_c_door) {
    sub_578 = sub_579;
  } else {
    sub_578 = false;
  };
  sub_577 = sub_578;
  if (controller_c_door) {
    sub_580 = false;
  } else {
    sub_580 = sub_579;
  };
  if (controller_ck_11_1) {
    sub_576 = sub_580;
  } else {
    sub_576 = sub_577;
  };
  if (controller_change_shift) {
    v_793 = sub_457;
    sub_575 = sub_576;
  } else {
    v_793 = sub_576;
    sub_575 = sub_457;
  };
  if (controller_ck_1) {
    sub_574 = v_793;
  } else {
    sub_574 = sub_575;
  };
  sub_573 = sub_574;
  sub_572 = sub_573;
  sub_571 = sub_572;
  if (controller_c_window) {
    sub_587 = false;
  } else {
    sub_587 = sub_365;
  };
  if (controller_cleaner) {
    v_791 = false;
    sub_586 = sub_587;
  } else {
    v_791 = sub_587;
    sub_586 = false;
  };
  if (controller_ck_17_1) {
    sub_585 = v_791;
    sub_589 = sub_384;
  } else {
    sub_585 = sub_586;
    sub_589 = sub_386;
  };
  sub_588 = sub_589;
  if (controller_c_pc) {
    sub_584 = sub_585;
  } else {
    sub_584 = sub_588;
  };
  sub_594 = sub_363;
  if (controller_cleaner) {
    v_790 = false;
    sub_593 = sub_594;
  } else {
    v_790 = sub_594;
    sub_593 = false;
  };
  if (controller_ck_17_1) {
    sub_592 = v_790;
  } else {
    sub_592 = sub_593;
  };
  sub_591 = sub_592;
  sub_590 = sub_591;
  if (controller_change_shift) {
    v_792 = sub_590;
    sub_583 = sub_584;
  } else {
    v_792 = sub_584;
    sub_583 = sub_590;
  };
  if (controller_ck_1) {
    sub_582 = v_792;
  } else {
    sub_582 = sub_583;
  };
  sub_581 = sub_582;
  if (controller_air_failed_recovered) {
    v_794 = sub_581;
  } else {
    v_794 = sub_573;
  };
  if (controller_c_air_2) {
    v_795 = v_794;
  } else {
    v_795 = sub_572;
  };
  if (controller_c_air_1) {
    sub_570 = sub_571;
  } else {
    sub_570 = v_795;
  };
  if (controller_c_window) {
    sub_601 = sub_366;
  } else {
    sub_601 = sub_365;
  };
  if (controller_cleaner) {
    v_785 = false;
    sub_600 = sub_601;
  } else {
    v_785 = sub_601;
    sub_600 = false;
  };
  if (controller_ck_17_1) {
    sub_599 = v_785;
  } else {
    sub_599 = sub_600;
  };
  sub_598 = sub_599;
  if (controller_c_pc) {
    sub_597 = sub_598;
  } else {
    sub_597 = sub_588;
  };
  sub_602 = sub_588;
  if (controller_change_shift) {
    v_786 = sub_602;
    sub_596 = sub_597;
  } else {
    v_786 = sub_597;
    sub_596 = sub_602;
  };
  if (controller_ck_1) {
    v_787 = v_786;
  } else {
    v_787 = sub_596;
  };
  sub_606 = sub_385;
  sub_605 = sub_606;
  if (controller_c_pc) {
    sub_604 = sub_598;
    sub_607 = sub_588;
  } else {
    sub_604 = sub_605;
    sub_607 = sub_605;
  };
  if (controller_change_shift) {
    v_788 = sub_607;
    sub_603 = sub_604;
  } else {
    v_788 = sub_604;
    sub_603 = sub_607;
  };
  if (controller_ck_1) {
    v_789 = v_788;
  } else {
    v_789 = sub_603;
  };
  if (controller_c_closet) {
    sub_595 = v_787;
  } else {
    sub_595 = v_789;
  };
  if (controller_air_failed_recovered) {
    v_796 = sub_573;
  } else {
    v_796 = sub_595;
  };
  if (controller_light_failed_recovered) {
    sub_617 = sub_264;
  } else {
    sub_617 = sub_367;
  };
  if (controller_v_407) {
    sub_616 = false;
  } else {
    sub_616 = sub_617;
  };
  if (controller_c_window) {
    sub_615 = sub_616;
  } else {
    sub_615 = sub_365;
  };
  if (controller_cleaner) {
    v_783 = false;
    sub_614 = sub_615;
  } else {
    v_783 = sub_615;
    sub_614 = false;
  };
  if (controller_ck_17_1) {
    sub_613 = v_783;
  } else {
    sub_613 = sub_614;
  };
  if (controller_c_pc) {
    sub_612 = sub_613;
  } else {
    sub_612 = sub_588;
  };
  if (controller_change_shift) {
    v_784 = sub_590;
    sub_611 = sub_612;
  } else {
    v_784 = sub_612;
    sub_611 = sub_590;
  };
  if (controller_ck_1) {
    sub_610 = v_784;
  } else {
    sub_610 = sub_611;
  };
  sub_609 = sub_610;
  if (controller_air_failed_recovered) {
    v_799 = sub_573;
  } else {
    v_799 = sub_609;
  };
  sub_608 = sub_609;
  if (controller_c_air_2) {
    v_797 = v_796;
  } else {
    v_797 = sub_608;
  };
  sub_618 = sub_581;
  if (controller_c_air_2) {
    v_800 = v_799;
  } else {
    v_800 = sub_618;
  };
  if (controller_c_air_1) {
    v_798 = v_797;
  } else {
    v_798 = sub_618;
  };
  if (controller_v_445) {
    sub_569 = v_798;
  } else {
    sub_569 = sub_570;
  };
  sub_619 = sub_608;
  if (controller_v_447) {
    sub_568 = sub_619;
  } else {
    sub_568 = sub_569;
  };
  if (controller_air_failed_recovered) {
    v_780 = sub_609;
  } else {
    v_780 = sub_573;
  };
  if (controller_c_air_2) {
    v_781 = v_780;
  } else {
    v_781 = sub_572;
  };
  if (controller_c_air_1) {
    v_782 = v_781;
  } else {
    v_782 = sub_571;
  };
  if (controller_air_failed_recovered) {
    v_778 = sub_573;
  } else {
    v_778 = sub_581;
  };
  if (controller_c_air_2) {
    v_779 = v_778;
  } else {
    v_779 = sub_608;
  };
  sub_623 = sub_595;
  sub_622 = sub_623;
  if (controller_c_air_1) {
    v_801 = v_800;
    sub_621 = sub_622;
  } else {
    v_801 = sub_622;
    sub_621 = v_779;
  };
  if (controller_v_445) {
    sub_620 = v_782;
  } else {
    sub_620 = sub_621;
  };
  if (controller_air_failed_recovered) {
    v_776 = sub_595;
  } else {
    v_776 = sub_573;
  };
  if (controller_c_air_2) {
    v_777 = v_776;
  } else {
    v_777 = sub_572;
  };
  if (controller_c_air_1) {
    sub_624 = v_777;
  } else {
    sub_624 = sub_571;
  };
  if (controller_v_445) {
    v_802 = v_801;
  } else {
    v_802 = sub_624;
  };
  if (controller_v_447) {
    v_803 = v_802;
  } else {
    v_803 = sub_620;
  };
  if (controller_v_446) {
    v_804 = v_803;
  } else {
    v_804 = sub_568;
  };
  sub_636 = sub_407;
  if (controller_c_door) {
    sub_635 = sub_636;
  } else {
    sub_635 = false;
  };
  sub_634 = sub_635;
  if (controller_c_door) {
    sub_637 = false;
  } else {
    sub_637 = sub_636;
  };
  if (controller_ck_11_1) {
    sub_633 = sub_637;
  } else {
    sub_633 = sub_634;
  };
  if (controller_change_shift) {
    v_770 = sub_519;
    sub_632 = sub_633;
  } else {
    v_770 = sub_633;
    sub_632 = sub_519;
  };
  if (controller_ck_1) {
    sub_631 = v_770;
  } else {
    sub_631 = sub_632;
  };
  sub_630 = sub_631;
  sub_629 = sub_630;
  sub_628 = sub_629;
  if (controller_c_window) {
    sub_644 = false;
  } else {
    sub_644 = sub_431;
  };
  if (controller_cleaner) {
    v_768 = false;
    sub_643 = sub_644;
  } else {
    v_768 = sub_644;
    sub_643 = false;
  };
  if (controller_ck_17_1) {
    sub_642 = v_768;
    sub_646 = sub_429;
  } else {
    sub_642 = sub_643;
    sub_646 = sub_433;
  };
  sub_645 = sub_646;
  if (controller_c_pc) {
    sub_641 = sub_642;
  } else {
    sub_641 = sub_645;
  };
  sub_651 = sub_408;
  if (controller_cleaner) {
    v_767 = false;
    sub_650 = sub_651;
  } else {
    v_767 = sub_651;
    sub_650 = false;
  };
  if (controller_ck_17_1) {
    sub_649 = v_767;
  } else {
    sub_649 = sub_650;
  };
  sub_648 = sub_649;
  sub_647 = sub_648;
  if (controller_change_shift) {
    v_769 = sub_647;
    sub_640 = sub_641;
  } else {
    v_769 = sub_641;
    sub_640 = sub_647;
  };
  if (controller_ck_1) {
    sub_639 = v_769;
  } else {
    sub_639 = sub_640;
  };
  sub_638 = sub_639;
  if (controller_air_failed_recovered) {
    v_771 = sub_638;
  } else {
    v_771 = sub_630;
  };
  if (controller_c_air_2) {
    v_772 = v_771;
  } else {
    v_772 = sub_629;
  };
  if (controller_c_air_1) {
    sub_627 = sub_628;
  } else {
    sub_627 = v_772;
  };
  if (controller_c_window) {
    sub_658 = sub_410;
  } else {
    sub_658 = sub_431;
  };
  if (controller_cleaner) {
    v_762 = false;
    sub_657 = sub_658;
  } else {
    v_762 = sub_658;
    sub_657 = false;
  };
  if (controller_ck_17_1) {
    sub_656 = v_762;
  } else {
    sub_656 = sub_657;
  };
  sub_655 = sub_656;
  if (controller_c_pc) {
    sub_654 = sub_655;
  } else {
    sub_654 = sub_645;
  };
  sub_659 = sub_645;
  if (controller_change_shift) {
    v_763 = sub_659;
    sub_653 = sub_654;
  } else {
    v_763 = sub_654;
    sub_653 = sub_659;
  };
  if (controller_ck_1) {
    v_764 = v_763;
  } else {
    v_764 = sub_653;
  };
  sub_663 = sub_430;
  sub_662 = sub_663;
  if (controller_c_pc) {
    sub_661 = sub_655;
    sub_664 = sub_645;
  } else {
    sub_661 = sub_662;
    sub_664 = sub_662;
  };
  if (controller_change_shift) {
    v_765 = sub_664;
    sub_660 = sub_661;
  } else {
    v_765 = sub_661;
    sub_660 = sub_664;
  };
  if (controller_ck_1) {
    v_766 = v_765;
  } else {
    v_766 = sub_660;
  };
  if (controller_c_closet) {
    sub_652 = v_764;
  } else {
    sub_652 = v_766;
  };
  if (controller_air_failed_recovered) {
    v_773 = sub_630;
  } else {
    v_773 = sub_652;
  };
  if (controller_c_window) {
    sub_672 = sub_616;
  } else {
    sub_672 = sub_431;
  };
  if (controller_cleaner) {
    v_760 = false;
    sub_671 = sub_672;
  } else {
    v_760 = sub_672;
    sub_671 = false;
  };
  if (controller_ck_17_1) {
    sub_670 = v_760;
  } else {
    sub_670 = sub_671;
  };
  if (controller_c_pc) {
    sub_669 = sub_670;
  } else {
    sub_669 = sub_645;
  };
  if (controller_change_shift) {
    v_761 = sub_647;
    sub_668 = sub_669;
  } else {
    v_761 = sub_669;
    sub_668 = sub_647;
  };
  if (controller_ck_1) {
    sub_667 = v_761;
  } else {
    sub_667 = sub_668;
  };
  sub_666 = sub_667;
  if (controller_air_failed_recovered) {
    v_805 = sub_630;
  } else {
    v_805 = sub_666;
  };
  sub_665 = sub_666;
  if (controller_c_air_2) {
    v_774 = v_773;
  } else {
    v_774 = sub_665;
  };
  sub_673 = sub_638;
  if (controller_c_air_2) {
    v_806 = v_805;
  } else {
    v_806 = sub_673;
  };
  if (controller_c_air_1) {
    v_775 = v_774;
  } else {
    v_775 = sub_673;
  };
  if (controller_v_445) {
    sub_626 = v_775;
  } else {
    sub_626 = sub_627;
  };
  sub_674 = sub_665;
  if (controller_v_447) {
    sub_625 = sub_674;
  } else {
    sub_625 = sub_626;
  };
  if (controller_air_failed_recovered) {
    v_757 = sub_666;
  } else {
    v_757 = sub_630;
  };
  if (controller_c_air_2) {
    v_758 = v_757;
  } else {
    v_758 = sub_629;
  };
  if (controller_c_air_1) {
    v_759 = v_758;
  } else {
    v_759 = sub_628;
  };
  if (controller_air_failed_recovered) {
    v_755 = sub_630;
  } else {
    v_755 = sub_638;
  };
  if (controller_c_air_2) {
    v_756 = v_755;
  } else {
    v_756 = sub_665;
  };
  sub_678 = sub_652;
  sub_677 = sub_678;
  if (controller_c_air_1) {
    v_807 = v_806;
    sub_676 = sub_677;
  } else {
    v_807 = sub_677;
    sub_676 = v_756;
  };
  if (controller_v_445) {
    sub_675 = v_759;
  } else {
    sub_675 = sub_676;
  };
  if (controller_air_failed_recovered) {
    v = sub_652;
  } else {
    v = sub_630;
  };
  if (controller_c_air_2) {
    v_754 = v;
  } else {
    v_754 = sub_629;
  };
  if (controller_c_air_1) {
    sub_679 = v_754;
  } else {
    sub_679 = sub_628;
  };
  if (controller_v_445) {
    v_808 = v_807;
  } else {
    v_808 = sub_679;
  };
  if (controller_v_447) {
    v_809 = v_808;
  } else {
    v_809 = sub_675;
  };
  if (controller_v_446) {
    v_810 = v_809;
  } else {
    v_810 = sub_625;
  };
  if (controller_blind_switch) {
    v_811 = v_804;
  } else {
    v_811 = v_810;
  };
  if (controller_c_light_1) {
    sub_567 = v_811;
  } else {
    sub_567 = sub_443;
  };
  if (controller_light_switch) {
    v_872 = sub_443;
  } else {
    v_872 = sub_567;
  };
  if (controller_c_light_2) {
    sub_442 = v_872;
  } else {
    sub_442 = sub_567;
  };
  if (controller_worker) {
    v_1124 = sub_442;
    sub_239 = sub_240;
  } else {
    v_1124 = sub_240;
    sub_239 = sub_442;
  };
  if (controller_ck_15_1) {
    v_1125 = v_1124;
  } else {
    v_1125 = sub_239;
  };
  if (p_controller_c_blind_1) {
    sub_0 = v_1125;
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
  v_1464 = (controller_v_392&&false);
  v_1462 = !(controller_v_391);
  v_1461 = !(controller_v_392);
  sub_20 = (v_1461&&false);
  v_1463 = (v_1462&&sub_20);
  if (controller_blind_failed_recovered) {
    sub_19 = v_1463;
  } else {
    sub_19 = v_1464;
  };
  sub_18 = sub_19;
  v_1459 = !(controller_v_392);
  v_1460 = (v_1459||false);
  sub_23 = (controller_v_392||false);
  v_1458 = (controller_v_391||sub_23);
  if (controller_blind_failed_recovered) {
    sub_22 = v_1458;
  } else {
    sub_22 = v_1460;
  };
  if (controller_v_408) {
    v_1465 = sub_22;
    sub_21 = sub_19;
  } else {
    v_1465 = sub_19;
    sub_21 = sub_22;
  };
  if (controller_light_failed_recovered) {
    v_1466 = sub_21;
  } else {
    v_1466 = v_1465;
  };
  if (controller_v_407) {
    v_1467 = v_1466;
  } else {
    v_1467 = sub_18;
  };
  sub_26 = false;
  sub_25 = sub_26;
  sub_29 = true;
  if (controller_v_408) {
    v_1457 = sub_29;
    sub_28 = sub_26;
  } else {
    v_1457 = sub_26;
    sub_28 = sub_29;
  };
  if (controller_light_failed_recovered) {
    sub_27 = sub_28;
  } else {
    sub_27 = v_1457;
  };
  if (controller_v_407) {
    sub_24 = sub_27;
  } else {
    sub_24 = sub_25;
  };
  if (controller_c_window) {
    sub_17 = v_1467;
  } else {
    sub_17 = sub_24;
  };
  if (controller_cleaner) {
    v_1468 = sub_17;
    sub_16 = false;
  } else {
    v_1468 = false;
    sub_16 = sub_17;
  };
  if (controller_ck_17_1) {
    sub_15 = v_1468;
  } else {
    sub_15 = sub_16;
  };
  if (controller_c_door) {
    v_1471 = false;
    v_1469 = sub_15;
  } else {
    v_1471 = sub_15;
    v_1469 = false;
  };
  if (controller_v_407) {
    v_1455 = sub_25;
  } else {
    v_1455 = sub_27;
  };
  if (controller_c_window) {
    sub_32 = v_1455;
  } else {
    sub_32 = false;
  };
  if (controller_cleaner) {
    v_1456 = sub_17;
    sub_31 = sub_32;
  } else {
    v_1456 = sub_32;
    sub_31 = sub_17;
  };
  if (controller_ck_17_1) {
    sub_30 = v_1456;
  } else {
    sub_30 = sub_31;
  };
  if (controller_cleaner) {
    v_1454 = false;
    sub_34 = sub_32;
  } else {
    v_1454 = sub_32;
    sub_34 = false;
  };
  if (controller_ck_17_1) {
    sub_33 = v_1454;
  } else {
    sub_33 = sub_34;
  };
  if (controller_c_door) {
    v_1472 = sub_33;
  } else {
    v_1472 = sub_30;
  };
  if (controller_c_pc) {
    v_1473 = v_1471;
  } else {
    v_1473 = v_1472;
  };
  if (controller_c_door) {
    v_1470 = sub_30;
  } else {
    v_1470 = sub_33;
  };
  if (controller_c_pc) {
    sub_14 = v_1469;
  } else {
    sub_14 = v_1470;
  };
  if (controller_ck_11_1) {
    sub_13 = v_1473;
  } else {
    sub_13 = sub_14;
  };
  if (controller_c_window) {
    sub_40 = false;
  } else {
    sub_40 = sub_25;
  };
  if (controller_cleaner) {
    v_1450 = sub_40;
    sub_39 = false;
  } else {
    v_1450 = false;
    sub_39 = sub_40;
  };
  if (controller_ck_17_1) {
    sub_38 = v_1450;
  } else {
    sub_38 = sub_39;
  };
  if (controller_c_door) {
    sub_37 = sub_38;
  } else {
    sub_37 = false;
  };
  if (controller_cleaner) {
    v_1449 = sub_40;
    sub_42 = sub_32;
  } else {
    v_1449 = sub_32;
    sub_42 = sub_40;
  };
  if (controller_ck_17_1) {
    sub_41 = v_1449;
  } else {
    sub_41 = sub_42;
  };
  if (controller_c_door) {
    v_1452 = sub_33;
    v_1451 = sub_41;
  } else {
    v_1452 = sub_41;
    v_1451 = sub_33;
  };
  if (controller_c_pc) {
    sub_36 = sub_37;
  } else {
    sub_36 = v_1451;
  };
  if (controller_c_door) {
    sub_43 = false;
  } else {
    sub_43 = sub_38;
  };
  if (controller_c_pc) {
    v_1453 = sub_43;
  } else {
    v_1453 = v_1452;
  };
  if (controller_ck_11_1) {
    sub_35 = v_1453;
  } else {
    sub_35 = sub_36;
  };
  if (controller_change_shift) {
    v_1474 = sub_35;
    sub_12 = sub_13;
  } else {
    v_1474 = sub_13;
    sub_12 = sub_35;
  };
  if (controller_ck_1) {
    sub_11 = v_1474;
  } else {
    sub_11 = sub_12;
  };
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  if (controller_c_pc) {
    sub_47 = false;
  } else {
    sub_47 = sub_33;
  };
  sub_46 = sub_47;
  sub_45 = sub_46;
  if (controller_air_failed_recovered) {
    v_1448 = sub_45;
  } else {
    v_1448 = sub_10;
  };
  if (controller_c_air_2) {
    sub_44 = v_1448;
  } else {
    sub_44 = sub_9;
  };
  if (controller_c_air_1) {
    sub_7 = sub_8;
  } else {
    sub_7 = sub_44;
  };
  sub_52 = sub_24;
  if (controller_cleaner) {
    sub_51 = false;
    sub_53 = sub_52;
  } else {
    sub_51 = sub_52;
    sub_53 = false;
  };
  if (controller_ck_17_1) {
    sub_50 = sub_53;
  } else {
    sub_50 = sub_51;
  };
  if (controller_c_pc) {
    sub_49 = false;
  } else {
    sub_49 = sub_50;
  };
  if (controller_c_closet) {
    sub_48 = false;
  } else {
    sub_48 = sub_49;
  };
  if (controller_air_failed_recovered) {
    v_1475 = sub_10;
  } else {
    v_1475 = sub_48;
  };
  sub_54 = sub_45;
  if (controller_c_air_2) {
    v_1476 = v_1475;
  } else {
    v_1476 = sub_54;
  };
  sub_55 = sub_54;
  if (controller_c_air_1) {
    v_1477 = v_1476;
  } else {
    v_1477 = sub_55;
  };
  if (controller_v_445) {
    sub_6 = v_1477;
  } else {
    sub_6 = sub_7;
  };
  if (controller_v_447) {
    sub_5 = sub_55;
  } else {
    sub_5 = sub_6;
  };
  if (controller_c_air_1) {
    v_1447 = sub_44;
  } else {
    v_1447 = sub_8;
  };
  sub_59 = sub_48;
  sub_58 = sub_59;
  if (controller_air_failed_recovered) {
    v_1446 = sub_10;
  } else {
    v_1446 = sub_45;
  };
  if (controller_c_air_2) {
    sub_60 = v_1446;
  } else {
    sub_60 = sub_54;
  };
  if (controller_c_air_1) {
    v_1478 = sub_60;
    sub_57 = sub_58;
  } else {
    v_1478 = sub_58;
    sub_57 = sub_60;
  };
  if (controller_v_445) {
    sub_56 = v_1447;
  } else {
    sub_56 = sub_57;
  };
  if (controller_air_failed_recovered) {
    v_1444 = sub_48;
  } else {
    v_1444 = sub_10;
  };
  if (controller_c_air_2) {
    v_1445 = v_1444;
  } else {
    v_1445 = sub_9;
  };
  if (controller_c_air_1) {
    sub_61 = v_1445;
  } else {
    sub_61 = sub_8;
  };
  if (controller_v_445) {
    v_1479 = v_1478;
  } else {
    v_1479 = sub_61;
  };
  if (controller_v_447) {
    v_1480 = v_1479;
  } else {
    v_1480 = sub_56;
  };
  if (controller_v_446) {
    sub_4 = v_1480;
  } else {
    sub_4 = sub_5;
  };
  if (controller_v_407) {
    v_1430 = sub_18;
    sub_77 = sub_25;
  } else {
    v_1430 = false;
    sub_77 = false;
  };
  if (controller_c_window) {
    sub_76 = v_1430;
  } else {
    sub_76 = sub_77;
  };
  if (controller_cleaner) {
    v_1431 = sub_76;
    sub_75 = false;
  } else {
    v_1431 = false;
    sub_75 = sub_76;
  };
  if (controller_ck_17_1) {
    sub_74 = v_1431;
  } else {
    sub_74 = sub_75;
  };
  if (controller_c_door) {
    v_1434 = false;
    v_1432 = sub_74;
  } else {
    v_1434 = sub_74;
    v_1432 = false;
  };
  if (controller_v_408) {
    sub_82 = false;
  } else {
    sub_82 = sub_26;
  };
  sub_81 = sub_82;
  if (controller_v_407) {
    v_1428 = sub_81;
  } else {
    v_1428 = sub_25;
  };
  if (controller_c_window) {
    sub_80 = v_1428;
  } else {
    sub_80 = false;
  };
  if (controller_cleaner) {
    v_1429 = sub_76;
    sub_79 = sub_80;
  } else {
    v_1429 = sub_80;
    sub_79 = sub_76;
  };
  if (controller_ck_17_1) {
    sub_78 = v_1429;
  } else {
    sub_78 = sub_79;
  };
  if (controller_cleaner) {
    v_1427 = false;
    sub_84 = sub_80;
  } else {
    v_1427 = sub_80;
    sub_84 = false;
  };
  if (controller_ck_17_1) {
    sub_83 = v_1427;
  } else {
    sub_83 = sub_84;
  };
  if (controller_c_door) {
    v_1435 = sub_83;
  } else {
    v_1435 = sub_78;
  };
  if (controller_c_pc) {
    v_1436 = v_1434;
  } else {
    v_1436 = v_1435;
  };
  if (controller_c_door) {
    v_1433 = sub_78;
  } else {
    v_1433 = sub_83;
  };
  if (controller_c_pc) {
    sub_73 = v_1432;
  } else {
    sub_73 = v_1433;
  };
  if (controller_ck_11_1) {
    sub_72 = v_1436;
  } else {
    sub_72 = sub_73;
  };
  if (controller_cleaner) {
    v_1423 = sub_40;
    sub_88 = sub_80;
  } else {
    v_1423 = sub_80;
    sub_88 = sub_40;
  };
  if (controller_ck_17_1) {
    sub_87 = v_1423;
  } else {
    sub_87 = sub_88;
  };
  if (controller_c_door) {
    v_1425 = sub_83;
  } else {
    v_1425 = sub_87;
  };
  if (controller_c_pc) {
    v_1426 = sub_43;
  } else {
    v_1426 = v_1425;
  };
  if (controller_c_door) {
    v_1424 = sub_87;
  } else {
    v_1424 = sub_83;
  };
  if (controller_c_pc) {
    sub_86 = sub_37;
  } else {
    sub_86 = v_1424;
  };
  if (controller_ck_11_1) {
    sub_85 = v_1426;
  } else {
    sub_85 = sub_86;
  };
  if (controller_change_shift) {
    v_1437 = sub_85;
    sub_71 = sub_72;
  } else {
    v_1437 = sub_72;
    sub_71 = sub_85;
  };
  if (controller_ck_1) {
    sub_70 = v_1437;
  } else {
    sub_70 = sub_71;
  };
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  if (controller_c_pc) {
    sub_92 = false;
  } else {
    sub_92 = sub_83;
  };
  sub_91 = sub_92;
  sub_90 = sub_91;
  if (controller_air_failed_recovered) {
    v_1422 = sub_90;
  } else {
    v_1422 = sub_69;
  };
  if (controller_c_air_2) {
    sub_89 = v_1422;
  } else {
    sub_89 = sub_68;
  };
  if (controller_c_air_1) {
    sub_66 = sub_67;
  } else {
    sub_66 = sub_89;
  };
  sub_97 = sub_77;
  if (controller_cleaner) {
    sub_96 = false;
    sub_98 = sub_97;
  } else {
    sub_96 = sub_97;
    sub_98 = false;
  };
  if (controller_ck_17_1) {
    sub_95 = sub_98;
  } else {
    sub_95 = sub_96;
  };
  if (controller_c_pc) {
    sub_94 = false;
  } else {
    sub_94 = sub_95;
  };
  if (controller_c_closet) {
    sub_93 = false;
  } else {
    sub_93 = sub_94;
  };
  if (controller_air_failed_recovered) {
    v_1438 = sub_69;
  } else {
    v_1438 = sub_93;
  };
  sub_99 = sub_90;
  if (controller_c_air_2) {
    v_1439 = v_1438;
  } else {
    v_1439 = sub_99;
  };
  sub_100 = sub_99;
  if (controller_c_air_1) {
    v_1440 = v_1439;
  } else {
    v_1440 = sub_100;
  };
  if (controller_v_445) {
    sub_65 = v_1440;
  } else {
    sub_65 = sub_66;
  };
  if (controller_v_447) {
    sub_64 = sub_100;
  } else {
    sub_64 = sub_65;
  };
  if (controller_c_air_1) {
    v_1421 = sub_89;
  } else {
    v_1421 = sub_67;
  };
  sub_104 = sub_93;
  sub_103 = sub_104;
  if (controller_air_failed_recovered) {
    v_1420 = sub_69;
  } else {
    v_1420 = sub_90;
  };
  if (controller_c_air_2) {
    sub_105 = v_1420;
  } else {
    sub_105 = sub_99;
  };
  if (controller_c_air_1) {
    v_1441 = sub_105;
    sub_102 = sub_103;
  } else {
    v_1441 = sub_103;
    sub_102 = sub_105;
  };
  if (controller_v_445) {
    sub_101 = v_1421;
  } else {
    sub_101 = sub_102;
  };
  if (controller_air_failed_recovered) {
    v_1418 = sub_93;
  } else {
    v_1418 = sub_69;
  };
  if (controller_c_air_2) {
    v_1419 = v_1418;
  } else {
    v_1419 = sub_68;
  };
  if (controller_c_air_1) {
    sub_106 = v_1419;
  } else {
    sub_106 = sub_67;
  };
  if (controller_v_445) {
    v_1442 = v_1441;
  } else {
    v_1442 = sub_106;
  };
  if (controller_v_447) {
    v_1443 = v_1442;
  } else {
    v_1443 = sub_101;
  };
  if (controller_v_446) {
    sub_63 = v_1443;
  } else {
    sub_63 = sub_64;
  };
  sub_62 = sub_63;
  if (controller_c_light_1) {
    v_1481 = sub_4;
  } else {
    v_1481 = sub_62;
  };
  if (controller_v_408) {
    v_1403 = sub_19;
    sub_122 = false;
  } else {
    v_1403 = false;
    sub_122 = sub_19;
  };
  if (controller_light_failed_recovered) {
    sub_121 = v_1403;
  } else {
    sub_121 = sub_122;
  };
  if (controller_v_407) {
    v_1404 = sub_121;
  } else {
    v_1404 = sub_18;
  };
  if (controller_v_408) {
    sub_125 = sub_26;
  } else {
    sub_125 = false;
  };
  if (controller_light_failed_recovered) {
    sub_124 = sub_125;
  } else {
    sub_124 = sub_82;
  };
  if (controller_v_407) {
    sub_123 = sub_124;
  } else {
    sub_123 = sub_25;
  };
  if (controller_c_window) {
    sub_120 = v_1404;
  } else {
    sub_120 = sub_123;
  };
  if (controller_cleaner) {
    v_1405 = sub_120;
    sub_119 = false;
  } else {
    v_1405 = false;
    sub_119 = sub_120;
  };
  if (controller_ck_17_1) {
    sub_118 = v_1405;
  } else {
    sub_118 = sub_119;
  };
  if (controller_c_door) {
    v_1408 = false;
    v_1406 = sub_118;
  } else {
    v_1408 = sub_118;
    v_1406 = false;
  };
  if (controller_v_407) {
    v_1401 = sub_25;
  } else {
    v_1401 = sub_124;
  };
  if (controller_c_window) {
    sub_128 = v_1401;
  } else {
    sub_128 = false;
  };
  if (controller_cleaner) {
    v_1402 = sub_120;
    sub_127 = sub_128;
  } else {
    v_1402 = sub_128;
    sub_127 = sub_120;
  };
  if (controller_ck_17_1) {
    sub_126 = v_1402;
  } else {
    sub_126 = sub_127;
  };
  if (controller_cleaner) {
    v_1400 = false;
    sub_130 = sub_128;
  } else {
    v_1400 = sub_128;
    sub_130 = false;
  };
  if (controller_ck_17_1) {
    sub_129 = v_1400;
  } else {
    sub_129 = sub_130;
  };
  if (controller_c_door) {
    v_1409 = sub_129;
  } else {
    v_1409 = sub_126;
  };
  if (controller_c_pc) {
    v_1410 = v_1408;
  } else {
    v_1410 = v_1409;
  };
  if (controller_c_door) {
    v_1407 = sub_126;
  } else {
    v_1407 = sub_129;
  };
  if (controller_c_pc) {
    sub_117 = v_1406;
  } else {
    sub_117 = v_1407;
  };
  if (controller_ck_11_1) {
    sub_116 = v_1410;
  } else {
    sub_116 = sub_117;
  };
  if (controller_cleaner) {
    v_1396 = sub_40;
    sub_134 = sub_128;
  } else {
    v_1396 = sub_128;
    sub_134 = sub_40;
  };
  if (controller_ck_17_1) {
    sub_133 = v_1396;
  } else {
    sub_133 = sub_134;
  };
  if (controller_c_door) {
    v_1398 = sub_129;
  } else {
    v_1398 = sub_133;
  };
  if (controller_c_pc) {
    v_1399 = sub_43;
  } else {
    v_1399 = v_1398;
  };
  if (controller_c_door) {
    v_1397 = sub_133;
  } else {
    v_1397 = sub_129;
  };
  if (controller_c_pc) {
    sub_132 = sub_37;
  } else {
    sub_132 = v_1397;
  };
  if (controller_ck_11_1) {
    sub_131 = v_1399;
  } else {
    sub_131 = sub_132;
  };
  if (controller_change_shift) {
    v_1411 = sub_131;
    sub_115 = sub_116;
  } else {
    v_1411 = sub_116;
    sub_115 = sub_131;
  };
  if (controller_ck_1) {
    sub_114 = v_1411;
  } else {
    sub_114 = sub_115;
  };
  sub_113 = sub_114;
  sub_112 = sub_113;
  sub_111 = sub_112;
  if (controller_c_pc) {
    sub_138 = false;
  } else {
    sub_138 = sub_129;
  };
  sub_137 = sub_138;
  sub_136 = sub_137;
  if (controller_air_failed_recovered) {
    v_1395 = sub_136;
  } else {
    v_1395 = sub_113;
  };
  if (controller_c_air_2) {
    sub_135 = v_1395;
  } else {
    sub_135 = sub_112;
  };
  if (controller_c_air_1) {
    sub_110 = sub_111;
  } else {
    sub_110 = sub_135;
  };
  sub_143 = sub_123;
  if (controller_cleaner) {
    sub_142 = false;
    sub_144 = sub_143;
  } else {
    sub_142 = sub_143;
    sub_144 = false;
  };
  if (controller_ck_17_1) {
    sub_141 = sub_144;
  } else {
    sub_141 = sub_142;
  };
  if (controller_c_pc) {
    sub_140 = false;
  } else {
    sub_140 = sub_141;
  };
  if (controller_c_closet) {
    sub_139 = false;
  } else {
    sub_139 = sub_140;
  };
  if (controller_air_failed_recovered) {
    v_1412 = sub_113;
  } else {
    v_1412 = sub_139;
  };
  sub_145 = sub_136;
  if (controller_c_air_2) {
    v_1413 = v_1412;
  } else {
    v_1413 = sub_145;
  };
  sub_146 = sub_145;
  if (controller_c_air_1) {
    v_1414 = v_1413;
  } else {
    v_1414 = sub_146;
  };
  if (controller_v_445) {
    sub_109 = v_1414;
  } else {
    sub_109 = sub_110;
  };
  if (controller_v_447) {
    sub_108 = sub_146;
  } else {
    sub_108 = sub_109;
  };
  if (controller_c_air_1) {
    v_1394 = sub_135;
  } else {
    v_1394 = sub_111;
  };
  sub_150 = sub_139;
  sub_149 = sub_150;
  if (controller_air_failed_recovered) {
    v_1393 = sub_113;
  } else {
    v_1393 = sub_136;
  };
  if (controller_c_air_2) {
    sub_151 = v_1393;
  } else {
    sub_151 = sub_145;
  };
  if (controller_c_air_1) {
    v_1415 = sub_151;
    sub_148 = sub_149;
  } else {
    v_1415 = sub_149;
    sub_148 = sub_151;
  };
  if (controller_v_445) {
    sub_147 = v_1394;
  } else {
    sub_147 = sub_148;
  };
  if (controller_air_failed_recovered) {
    v_1391 = sub_139;
  } else {
    v_1391 = sub_113;
  };
  if (controller_c_air_2) {
    v_1392 = v_1391;
  } else {
    v_1392 = sub_112;
  };
  if (controller_c_air_1) {
    sub_152 = v_1392;
  } else {
    sub_152 = sub_111;
  };
  if (controller_v_445) {
    v_1416 = v_1415;
  } else {
    v_1416 = sub_152;
  };
  if (controller_v_447) {
    v_1417 = v_1416;
  } else {
    v_1417 = sub_147;
  };
  if (controller_v_446) {
    sub_107 = v_1417;
  } else {
    sub_107 = sub_108;
  };
  if (controller_c_light_1) {
    v_1482 = sub_107;
  } else {
    v_1482 = sub_62;
  };
  if (controller_light_switch) {
    sub_3 = v_1481;
  } else {
    sub_3 = v_1482;
  };
  sub_166 = sub_17;
  if (controller_c_door) {
    sub_165 = sub_166;
  } else {
    sub_165 = false;
  };
  sub_164 = sub_165;
  if (controller_c_door) {
    sub_167 = false;
  } else {
    sub_167 = sub_166;
  };
  if (controller_ck_11_1) {
    sub_163 = sub_167;
  } else {
    sub_163 = sub_164;
  };
  sub_171 = sub_40;
  if (controller_c_door) {
    sub_170 = sub_171;
  } else {
    sub_170 = false;
  };
  sub_169 = sub_170;
  if (controller_c_door) {
    sub_172 = false;
  } else {
    sub_172 = sub_171;
  };
  if (controller_ck_11_1) {
    sub_168 = sub_172;
  } else {
    sub_168 = sub_169;
  };
  if (controller_change_shift) {
    v_1378 = sub_168;
    sub_162 = sub_163;
  } else {
    v_1378 = sub_163;
    sub_162 = sub_168;
  };
  if (controller_ck_1) {
    sub_161 = v_1378;
  } else {
    sub_161 = sub_162;
  };
  sub_160 = sub_161;
  sub_159 = sub_160;
  sub_158 = sub_159;
  if (controller_c_window) {
    sub_179 = false;
  } else {
    sub_179 = sub_24;
  };
  if (controller_cleaner) {
    v_1376 = false;
    sub_178 = sub_179;
  } else {
    v_1376 = sub_179;
    sub_178 = false;
  };
  if (controller_ck_17_1) {
    sub_177 = v_1376;
    sub_181 = sub_51;
  } else {
    sub_177 = sub_178;
    sub_181 = sub_53;
  };
  sub_180 = sub_181;
  if (controller_c_pc) {
    sub_176 = sub_177;
  } else {
    sub_176 = sub_180;
  };
  if (controller_light_failed_recovered) {
    v_1374 = sub_21;
  } else {
    v_1374 = sub_122;
  };
  if (controller_v_407) {
    sub_187 = v_1374;
  } else {
    sub_187 = sub_121;
  };
  sub_186 = sub_187;
  if (controller_cleaner) {
    v_1375 = false;
    sub_185 = sub_186;
  } else {
    v_1375 = sub_186;
    sub_185 = false;
  };
  if (controller_ck_17_1) {
    sub_184 = v_1375;
  } else {
    sub_184 = sub_185;
  };
  sub_183 = sub_184;
  sub_182 = sub_183;
  if (controller_change_shift) {
    v_1377 = sub_182;
    sub_175 = sub_176;
  } else {
    v_1377 = sub_176;
    sub_175 = sub_182;
  };
  if (controller_ck_1) {
    sub_174 = v_1377;
  } else {
    sub_174 = sub_175;
  };
  sub_173 = sub_174;
  if (controller_air_failed_recovered) {
    v_1379 = sub_173;
  } else {
    v_1379 = sub_160;
  };
  if (controller_c_air_2) {
    v_1380 = v_1379;
  } else {
    v_1380 = sub_159;
  };
  if (controller_c_air_1) {
    sub_157 = sub_158;
  } else {
    sub_157 = v_1380;
  };
  if (controller_light_failed_recovered) {
    v_1367 = sub_28;
  } else {
    v_1367 = sub_82;
  };
  if (controller_v_407) {
    v_1368 = v_1367;
  } else {
    v_1368 = sub_124;
  };
  if (controller_c_window) {
    sub_194 = v_1368;
  } else {
    sub_194 = sub_24;
  };
  if (controller_cleaner) {
    v_1369 = false;
    sub_193 = sub_194;
  } else {
    v_1369 = sub_194;
    sub_193 = false;
  };
  if (controller_ck_17_1) {
    sub_192 = v_1369;
  } else {
    sub_192 = sub_193;
  };
  sub_191 = sub_192;
  if (controller_c_pc) {
    sub_190 = sub_191;
  } else {
    sub_190 = sub_180;
  };
  sub_195 = sub_180;
  if (controller_change_shift) {
    v_1370 = sub_195;
    sub_189 = sub_190;
  } else {
    v_1370 = sub_190;
    sub_189 = sub_195;
  };
  if (controller_ck_1) {
    v_1371 = v_1370;
  } else {
    v_1371 = sub_189;
  };
  sub_199 = sub_52;
  sub_198 = sub_199;
  if (controller_c_pc) {
    sub_197 = sub_191;
    sub_200 = sub_180;
  } else {
    sub_197 = sub_198;
    sub_200 = sub_198;
  };
  if (controller_change_shift) {
    v_1372 = sub_200;
    sub_196 = sub_197;
  } else {
    v_1372 = sub_197;
    sub_196 = sub_200;
  };
  if (controller_ck_1) {
    v_1373 = v_1372;
  } else {
    v_1373 = sub_196;
  };
  if (controller_c_closet) {
    sub_188 = v_1371;
  } else {
    sub_188 = v_1373;
  };
  if (controller_air_failed_recovered) {
    v_1381 = sub_160;
  } else {
    v_1381 = sub_188;
  };
  if (controller_light_failed_recovered) {
    sub_210 = sub_82;
  } else {
    sub_210 = sub_125;
  };
  if (controller_v_408) {
    sub_212 = sub_29;
  } else {
    sub_212 = false;
  };
  sub_211 = sub_212;
  if (controller_v_407) {
    sub_209 = sub_211;
  } else {
    sub_209 = sub_210;
  };
  if (controller_c_window) {
    sub_208 = sub_209;
  } else {
    sub_208 = sub_24;
  };
  if (controller_cleaner) {
    v_1365 = false;
    sub_207 = sub_208;
  } else {
    v_1365 = sub_208;
    sub_207 = false;
  };
  if (controller_ck_17_1) {
    sub_206 = v_1365;
  } else {
    sub_206 = sub_207;
  };
  if (controller_c_pc) {
    sub_205 = sub_206;
  } else {
    sub_205 = sub_180;
  };
  if (controller_change_shift) {
    v_1366 = sub_182;
    sub_204 = sub_205;
  } else {
    v_1366 = sub_205;
    sub_204 = sub_182;
  };
  if (controller_ck_1) {
    sub_203 = v_1366;
  } else {
    sub_203 = sub_204;
  };
  sub_202 = sub_203;
  if (controller_air_failed_recovered) {
    v_1384 = sub_160;
  } else {
    v_1384 = sub_202;
  };
  sub_201 = sub_202;
  if (controller_c_air_2) {
    v_1382 = v_1381;
  } else {
    v_1382 = sub_201;
  };
  sub_213 = sub_173;
  if (controller_c_air_2) {
    v_1385 = v_1384;
  } else {
    v_1385 = sub_213;
  };
  if (controller_c_air_1) {
    v_1383 = v_1382;
  } else {
    v_1383 = sub_213;
  };
  if (controller_v_445) {
    sub_156 = v_1383;
  } else {
    sub_156 = sub_157;
  };
  sub_214 = sub_201;
  if (controller_v_447) {
    sub_155 = sub_214;
  } else {
    sub_155 = sub_156;
  };
  if (controller_air_failed_recovered) {
    v_1362 = sub_202;
  } else {
    v_1362 = sub_160;
  };
  if (controller_c_air_2) {
    v_1363 = v_1362;
  } else {
    v_1363 = sub_159;
  };
  if (controller_c_air_1) {
    v_1364 = v_1363;
  } else {
    v_1364 = sub_158;
  };
  if (controller_air_failed_recovered) {
    v_1360 = sub_160;
  } else {
    v_1360 = sub_173;
  };
  if (controller_c_air_2) {
    v_1361 = v_1360;
  } else {
    v_1361 = sub_201;
  };
  sub_218 = sub_188;
  sub_217 = sub_218;
  if (controller_c_air_1) {
    v_1386 = v_1385;
    sub_216 = sub_217;
  } else {
    v_1386 = sub_217;
    sub_216 = v_1361;
  };
  if (controller_v_445) {
    sub_215 = v_1364;
  } else {
    sub_215 = sub_216;
  };
  if (controller_air_failed_recovered) {
    v_1358 = sub_188;
  } else {
    v_1358 = sub_160;
  };
  if (controller_c_air_2) {
    v_1359 = v_1358;
  } else {
    v_1359 = sub_159;
  };
  if (controller_c_air_1) {
    sub_219 = v_1359;
  } else {
    sub_219 = sub_158;
  };
  if (controller_v_445) {
    v_1387 = v_1386;
  } else {
    v_1387 = sub_219;
  };
  if (controller_v_447) {
    v_1388 = v_1387;
  } else {
    v_1388 = sub_215;
  };
  if (controller_v_446) {
    sub_154 = v_1388;
  } else {
    sub_154 = sub_155;
  };
  sub_233 = sub_76;
  if (controller_c_door) {
    sub_232 = sub_233;
  } else {
    sub_232 = false;
  };
  sub_231 = sub_232;
  if (controller_c_door) {
    sub_234 = false;
  } else {
    sub_234 = sub_233;
  };
  if (controller_ck_11_1) {
    sub_230 = sub_234;
  } else {
    sub_230 = sub_231;
  };
  if (controller_change_shift) {
    v_1347 = sub_168;
    sub_229 = sub_230;
  } else {
    v_1347 = sub_230;
    sub_229 = sub_168;
  };
  if (controller_ck_1) {
    sub_228 = v_1347;
  } else {
    sub_228 = sub_229;
  };
  sub_227 = sub_228;
  sub_226 = sub_227;
  sub_225 = sub_226;
  if (controller_c_window) {
    sub_241 = false;
  } else {
    sub_241 = sub_77;
  };
  if (controller_cleaner) {
    v_1345 = false;
    sub_240 = sub_241;
  } else {
    v_1345 = sub_241;
    sub_240 = false;
  };
  if (controller_ck_17_1) {
    sub_239 = v_1345;
    sub_243 = sub_96;
  } else {
    sub_239 = sub_240;
    sub_243 = sub_98;
  };
  sub_242 = sub_243;
  if (controller_c_pc) {
    sub_238 = sub_239;
  } else {
    sub_238 = sub_242;
  };
  if (controller_v_407) {
    sub_249 = sub_122;
  } else {
    sub_249 = false;
  };
  sub_248 = sub_249;
  if (controller_cleaner) {
    v_1344 = false;
    sub_247 = sub_248;
  } else {
    v_1344 = sub_248;
    sub_247 = false;
  };
  if (controller_ck_17_1) {
    sub_246 = v_1344;
  } else {
    sub_246 = sub_247;
  };
  sub_245 = sub_246;
  sub_244 = sub_245;
  if (controller_change_shift) {
    v_1346 = sub_244;
    sub_237 = sub_238;
  } else {
    v_1346 = sub_238;
    sub_237 = sub_244;
  };
  if (controller_ck_1) {
    sub_236 = v_1346;
  } else {
    sub_236 = sub_237;
  };
  sub_235 = sub_236;
  if (controller_air_failed_recovered) {
    v_1348 = sub_235;
  } else {
    v_1348 = sub_227;
  };
  if (controller_c_air_2) {
    v_1349 = v_1348;
  } else {
    v_1349 = sub_226;
  };
  if (controller_c_air_1) {
    sub_224 = sub_225;
  } else {
    sub_224 = v_1349;
  };
  if (controller_v_407) {
    v_1338 = sub_81;
  } else {
    v_1338 = false;
  };
  if (controller_c_window) {
    sub_256 = v_1338;
  } else {
    sub_256 = sub_77;
  };
  if (controller_cleaner) {
    v_1339 = false;
    sub_255 = sub_256;
  } else {
    v_1339 = sub_256;
    sub_255 = false;
  };
  if (controller_ck_17_1) {
    sub_254 = v_1339;
  } else {
    sub_254 = sub_255;
  };
  sub_253 = sub_254;
  if (controller_c_pc) {
    sub_252 = sub_253;
  } else {
    sub_252 = sub_242;
  };
  sub_257 = sub_242;
  if (controller_change_shift) {
    v_1340 = sub_257;
    sub_251 = sub_252;
  } else {
    v_1340 = sub_252;
    sub_251 = sub_257;
  };
  if (controller_ck_1) {
    v_1341 = v_1340;
  } else {
    v_1341 = sub_251;
  };
  sub_261 = sub_97;
  sub_260 = sub_261;
  if (controller_c_pc) {
    sub_259 = sub_253;
    sub_262 = sub_242;
  } else {
    sub_259 = sub_260;
    sub_262 = sub_260;
  };
  if (controller_change_shift) {
    v_1342 = sub_262;
    sub_258 = sub_259;
  } else {
    v_1342 = sub_259;
    sub_258 = sub_262;
  };
  if (controller_ck_1) {
    v_1343 = v_1342;
  } else {
    v_1343 = sub_258;
  };
  if (controller_c_closet) {
    sub_250 = v_1341;
  } else {
    sub_250 = v_1343;
  };
  if (controller_air_failed_recovered) {
    v_1350 = sub_227;
  } else {
    v_1350 = sub_250;
  };
  if (controller_v_407) {
    v_1335 = sub_125;
  } else {
    v_1335 = false;
  };
  if (controller_c_window) {
    sub_270 = v_1335;
  } else {
    sub_270 = sub_77;
  };
  if (controller_cleaner) {
    v_1336 = false;
    sub_269 = sub_270;
  } else {
    v_1336 = sub_270;
    sub_269 = false;
  };
  if (controller_ck_17_1) {
    sub_268 = v_1336;
  } else {
    sub_268 = sub_269;
  };
  if (controller_c_pc) {
    sub_267 = sub_268;
  } else {
    sub_267 = sub_242;
  };
  if (controller_change_shift) {
    v_1337 = sub_244;
    sub_266 = sub_267;
  } else {
    v_1337 = sub_267;
    sub_266 = sub_244;
  };
  if (controller_ck_1) {
    sub_265 = v_1337;
  } else {
    sub_265 = sub_266;
  };
  sub_264 = sub_265;
  if (controller_air_failed_recovered) {
    v_1353 = sub_227;
  } else {
    v_1353 = sub_264;
  };
  sub_263 = sub_264;
  if (controller_c_air_2) {
    v_1351 = v_1350;
  } else {
    v_1351 = sub_263;
  };
  sub_271 = sub_235;
  if (controller_c_air_2) {
    v_1354 = v_1353;
  } else {
    v_1354 = sub_271;
  };
  if (controller_c_air_1) {
    v_1352 = v_1351;
  } else {
    v_1352 = sub_271;
  };
  if (controller_v_445) {
    sub_223 = v_1352;
  } else {
    sub_223 = sub_224;
  };
  sub_272 = sub_263;
  if (controller_v_447) {
    sub_222 = sub_272;
  } else {
    sub_222 = sub_223;
  };
  if (controller_air_failed_recovered) {
    v_1332 = sub_264;
  } else {
    v_1332 = sub_227;
  };
  if (controller_c_air_2) {
    v_1333 = v_1332;
  } else {
    v_1333 = sub_226;
  };
  if (controller_c_air_1) {
    v_1334 = v_1333;
  } else {
    v_1334 = sub_225;
  };
  if (controller_air_failed_recovered) {
    v_1330 = sub_227;
  } else {
    v_1330 = sub_235;
  };
  if (controller_c_air_2) {
    v_1331 = v_1330;
  } else {
    v_1331 = sub_263;
  };
  sub_276 = sub_250;
  sub_275 = sub_276;
  if (controller_c_air_1) {
    v_1355 = v_1354;
    sub_274 = sub_275;
  } else {
    v_1355 = sub_275;
    sub_274 = v_1331;
  };
  if (controller_v_445) {
    sub_273 = v_1334;
  } else {
    sub_273 = sub_274;
  };
  if (controller_air_failed_recovered) {
    v_1328 = sub_250;
  } else {
    v_1328 = sub_227;
  };
  if (controller_c_air_2) {
    v_1329 = v_1328;
  } else {
    v_1329 = sub_226;
  };
  if (controller_c_air_1) {
    sub_277 = v_1329;
  } else {
    sub_277 = sub_225;
  };
  if (controller_v_445) {
    v_1356 = v_1355;
  } else {
    v_1356 = sub_277;
  };
  if (controller_v_447) {
    v_1357 = v_1356;
  } else {
    v_1357 = sub_273;
  };
  if (controller_v_446) {
    sub_221 = v_1357;
  } else {
    sub_221 = sub_222;
  };
  sub_220 = sub_221;
  if (controller_c_light_1) {
    v_1389 = sub_154;
  } else {
    v_1389 = sub_220;
  };
  sub_290 = sub_120;
  if (controller_c_door) {
    sub_289 = sub_290;
  } else {
    sub_289 = false;
  };
  sub_288 = sub_289;
  if (controller_c_door) {
    sub_291 = false;
  } else {
    sub_291 = sub_290;
  };
  if (controller_ck_11_1) {
    sub_287 = sub_291;
  } else {
    sub_287 = sub_288;
  };
  if (controller_change_shift) {
    v_1317 = sub_168;
    sub_286 = sub_287;
  } else {
    v_1317 = sub_287;
    sub_286 = sub_168;
  };
  if (controller_ck_1) {
    sub_285 = v_1317;
  } else {
    sub_285 = sub_286;
  };
  sub_284 = sub_285;
  sub_283 = sub_284;
  sub_282 = sub_283;
  if (controller_c_window) {
    sub_298 = false;
  } else {
    sub_298 = sub_123;
  };
  if (controller_cleaner) {
    v_1315 = false;
    sub_297 = sub_298;
  } else {
    v_1315 = sub_298;
    sub_297 = false;
  };
  if (controller_ck_17_1) {
    sub_296 = v_1315;
    sub_300 = sub_142;
  } else {
    sub_296 = sub_297;
    sub_300 = sub_144;
  };
  sub_299 = sub_300;
  if (controller_c_pc) {
    sub_295 = sub_296;
  } else {
    sub_295 = sub_299;
  };
  sub_305 = sub_121;
  if (controller_cleaner) {
    v_1314 = false;
    sub_304 = sub_305;
  } else {
    v_1314 = sub_305;
    sub_304 = false;
  };
  if (controller_ck_17_1) {
    sub_303 = v_1314;
  } else {
    sub_303 = sub_304;
  };
  sub_302 = sub_303;
  sub_301 = sub_302;
  if (controller_change_shift) {
    v_1316 = sub_301;
    sub_294 = sub_295;
  } else {
    v_1316 = sub_295;
    sub_294 = sub_301;
  };
  if (controller_ck_1) {
    sub_293 = v_1316;
  } else {
    sub_293 = sub_294;
  };
  sub_292 = sub_293;
  if (controller_air_failed_recovered) {
    v_1318 = sub_292;
  } else {
    v_1318 = sub_284;
  };
  if (controller_c_air_2) {
    v_1319 = v_1318;
  } else {
    v_1319 = sub_283;
  };
  if (controller_c_air_1) {
    sub_281 = sub_282;
  } else {
    sub_281 = v_1319;
  };
  if (controller_c_window) {
    sub_312 = sub_124;
  } else {
    sub_312 = sub_123;
  };
  if (controller_cleaner) {
    v_1309 = false;
    sub_311 = sub_312;
  } else {
    v_1309 = sub_312;
    sub_311 = false;
  };
  if (controller_ck_17_1) {
    sub_310 = v_1309;
  } else {
    sub_310 = sub_311;
  };
  sub_309 = sub_310;
  if (controller_c_pc) {
    sub_308 = sub_309;
  } else {
    sub_308 = sub_299;
  };
  sub_313 = sub_299;
  if (controller_change_shift) {
    v_1310 = sub_313;
    sub_307 = sub_308;
  } else {
    v_1310 = sub_308;
    sub_307 = sub_313;
  };
  if (controller_ck_1) {
    v_1311 = v_1310;
  } else {
    v_1311 = sub_307;
  };
  sub_317 = sub_143;
  sub_316 = sub_317;
  if (controller_c_pc) {
    sub_315 = sub_309;
    sub_318 = sub_299;
  } else {
    sub_315 = sub_316;
    sub_318 = sub_316;
  };
  if (controller_change_shift) {
    v_1312 = sub_318;
    sub_314 = sub_315;
  } else {
    v_1312 = sub_315;
    sub_314 = sub_318;
  };
  if (controller_ck_1) {
    v_1313 = v_1312;
  } else {
    v_1313 = sub_314;
  };
  if (controller_c_closet) {
    sub_306 = v_1311;
  } else {
    sub_306 = v_1313;
  };
  if (controller_air_failed_recovered) {
    v_1320 = sub_284;
  } else {
    v_1320 = sub_306;
  };
  if (controller_v_407) {
    v_1306 = false;
  } else {
    v_1306 = sub_210;
  };
  if (controller_c_window) {
    sub_326 = v_1306;
  } else {
    sub_326 = sub_123;
  };
  if (controller_cleaner) {
    v_1307 = false;
    sub_325 = sub_326;
  } else {
    v_1307 = sub_326;
    sub_325 = false;
  };
  if (controller_ck_17_1) {
    sub_324 = v_1307;
  } else {
    sub_324 = sub_325;
  };
  if (controller_c_pc) {
    sub_323 = sub_324;
  } else {
    sub_323 = sub_299;
  };
  if (controller_change_shift) {
    v_1308 = sub_301;
    sub_322 = sub_323;
  } else {
    v_1308 = sub_323;
    sub_322 = sub_301;
  };
  if (controller_ck_1) {
    sub_321 = v_1308;
  } else {
    sub_321 = sub_322;
  };
  sub_320 = sub_321;
  if (controller_air_failed_recovered) {
    v_1323 = sub_284;
  } else {
    v_1323 = sub_320;
  };
  sub_319 = sub_320;
  if (controller_c_air_2) {
    v_1321 = v_1320;
  } else {
    v_1321 = sub_319;
  };
  sub_327 = sub_292;
  if (controller_c_air_2) {
    v_1324 = v_1323;
  } else {
    v_1324 = sub_327;
  };
  if (controller_c_air_1) {
    v_1322 = v_1321;
  } else {
    v_1322 = sub_327;
  };
  if (controller_v_445) {
    sub_280 = v_1322;
  } else {
    sub_280 = sub_281;
  };
  sub_328 = sub_319;
  if (controller_v_447) {
    sub_279 = sub_328;
  } else {
    sub_279 = sub_280;
  };
  if (controller_air_failed_recovered) {
    v_1303 = sub_320;
  } else {
    v_1303 = sub_284;
  };
  if (controller_c_air_2) {
    v_1304 = v_1303;
  } else {
    v_1304 = sub_283;
  };
  if (controller_c_air_1) {
    v_1305 = v_1304;
  } else {
    v_1305 = sub_282;
  };
  if (controller_air_failed_recovered) {
    v_1301 = sub_284;
  } else {
    v_1301 = sub_292;
  };
  if (controller_c_air_2) {
    v_1302 = v_1301;
  } else {
    v_1302 = sub_319;
  };
  sub_332 = sub_306;
  sub_331 = sub_332;
  if (controller_c_air_1) {
    v_1325 = v_1324;
    sub_330 = sub_331;
  } else {
    v_1325 = sub_331;
    sub_330 = v_1302;
  };
  if (controller_v_445) {
    sub_329 = v_1305;
  } else {
    sub_329 = sub_330;
  };
  if (controller_air_failed_recovered) {
    v_1299 = sub_306;
  } else {
    v_1299 = sub_284;
  };
  if (controller_c_air_2) {
    v_1300 = v_1299;
  } else {
    v_1300 = sub_283;
  };
  if (controller_c_air_1) {
    sub_333 = v_1300;
  } else {
    sub_333 = sub_282;
  };
  if (controller_v_445) {
    v_1326 = v_1325;
  } else {
    v_1326 = sub_333;
  };
  if (controller_v_447) {
    v_1327 = v_1326;
  } else {
    v_1327 = sub_329;
  };
  if (controller_v_446) {
    sub_278 = v_1327;
  } else {
    sub_278 = sub_279;
  };
  if (controller_c_light_1) {
    v_1390 = sub_278;
  } else {
    v_1390 = sub_220;
  };
  if (controller_light_switch) {
    sub_153 = v_1389;
  } else {
    sub_153 = v_1390;
  };
  if (controller_worker) {
    v_1483 = sub_153;
    sub_2 = sub_3;
  } else {
    v_1483 = sub_3;
    sub_2 = sub_153;
  };
  if (controller_ck_15_1) {
    sub_1 = v_1483;
  } else {
    sub_1 = sub_2;
  };
  sub_350 = sub_22;
  if (controller_v_407) {
    v_1283 = sub_350;
  } else {
    v_1283 = sub_18;
  };
  sub_352 = sub_29;
  if (controller_v_407) {
    sub_351 = sub_352;
  } else {
    sub_351 = sub_25;
  };
  if (controller_c_window) {
    sub_349 = v_1283;
  } else {
    sub_349 = sub_351;
  };
  if (controller_cleaner) {
    v_1284 = sub_349;
    sub_348 = false;
  } else {
    v_1284 = false;
    sub_348 = sub_349;
  };
  if (controller_ck_17_1) {
    sub_347 = v_1284;
  } else {
    sub_347 = sub_348;
  };
  if (controller_c_door) {
    v_1287 = false;
    v_1285 = sub_347;
  } else {
    v_1287 = sub_347;
    v_1285 = false;
  };
  if (controller_v_407) {
    v_1281 = sub_28;
  } else {
    v_1281 = sub_352;
  };
  if (controller_c_window) {
    sub_355 = v_1281;
  } else {
    sub_355 = false;
  };
  if (controller_cleaner) {
    v_1282 = sub_349;
    sub_354 = sub_355;
  } else {
    v_1282 = sub_355;
    sub_354 = sub_349;
  };
  if (controller_ck_17_1) {
    sub_353 = v_1282;
  } else {
    sub_353 = sub_354;
  };
  if (controller_cleaner) {
    v_1280 = false;
    sub_357 = sub_355;
  } else {
    v_1280 = sub_355;
    sub_357 = false;
  };
  if (controller_ck_17_1) {
    sub_356 = v_1280;
  } else {
    sub_356 = sub_357;
  };
  if (controller_c_door) {
    v_1288 = sub_356;
  } else {
    v_1288 = sub_353;
  };
  if (controller_c_pc) {
    v_1289 = v_1287;
  } else {
    v_1289 = v_1288;
  };
  if (controller_c_door) {
    v_1286 = sub_353;
  } else {
    v_1286 = sub_356;
  };
  if (controller_c_pc) {
    sub_346 = v_1285;
  } else {
    sub_346 = v_1286;
  };
  if (controller_ck_11_1) {
    sub_345 = v_1289;
  } else {
    sub_345 = sub_346;
  };
  if (controller_c_window) {
    sub_363 = false;
  } else {
    sub_363 = sub_352;
  };
  if (controller_cleaner) {
    v_1276 = sub_363;
    sub_362 = false;
  } else {
    v_1276 = false;
    sub_362 = sub_363;
  };
  if (controller_ck_17_1) {
    sub_361 = v_1276;
  } else {
    sub_361 = sub_362;
  };
  if (controller_c_door) {
    sub_360 = sub_361;
  } else {
    sub_360 = false;
  };
  if (controller_cleaner) {
    v_1275 = sub_363;
    sub_365 = sub_355;
  } else {
    v_1275 = sub_355;
    sub_365 = sub_363;
  };
  if (controller_ck_17_1) {
    sub_364 = v_1275;
  } else {
    sub_364 = sub_365;
  };
  if (controller_c_door) {
    v_1278 = sub_356;
    v_1277 = sub_364;
  } else {
    v_1278 = sub_364;
    v_1277 = sub_356;
  };
  if (controller_c_pc) {
    sub_359 = sub_360;
  } else {
    sub_359 = v_1277;
  };
  if (controller_c_door) {
    sub_366 = false;
  } else {
    sub_366 = sub_361;
  };
  if (controller_c_pc) {
    v_1279 = sub_366;
  } else {
    v_1279 = v_1278;
  };
  if (controller_ck_11_1) {
    sub_358 = v_1279;
  } else {
    sub_358 = sub_359;
  };
  if (controller_change_shift) {
    v_1290 = sub_358;
    sub_344 = sub_345;
  } else {
    v_1290 = sub_345;
    sub_344 = sub_358;
  };
  if (controller_ck_1) {
    sub_343 = v_1290;
  } else {
    sub_343 = sub_344;
  };
  sub_342 = sub_343;
  sub_341 = sub_342;
  sub_340 = sub_341;
  if (controller_c_pc) {
    sub_370 = false;
  } else {
    sub_370 = sub_356;
  };
  sub_369 = sub_370;
  sub_368 = sub_369;
  if (controller_air_failed_recovered) {
    v_1274 = sub_368;
  } else {
    v_1274 = sub_342;
  };
  if (controller_c_air_2) {
    sub_367 = v_1274;
  } else {
    sub_367 = sub_341;
  };
  if (controller_c_air_1) {
    sub_339 = sub_340;
  } else {
    sub_339 = sub_367;
  };
  sub_375 = sub_351;
  if (controller_cleaner) {
    sub_374 = false;
    sub_376 = sub_375;
  } else {
    sub_374 = sub_375;
    sub_376 = false;
  };
  if (controller_ck_17_1) {
    sub_373 = sub_376;
  } else {
    sub_373 = sub_374;
  };
  if (controller_c_pc) {
    sub_372 = false;
  } else {
    sub_372 = sub_373;
  };
  if (controller_c_closet) {
    sub_371 = false;
  } else {
    sub_371 = sub_372;
  };
  if (controller_air_failed_recovered) {
    v_1291 = sub_342;
  } else {
    v_1291 = sub_371;
  };
  sub_377 = sub_368;
  if (controller_c_air_2) {
    v_1292 = v_1291;
  } else {
    v_1292 = sub_377;
  };
  sub_378 = sub_377;
  if (controller_c_air_1) {
    v_1293 = v_1292;
  } else {
    v_1293 = sub_378;
  };
  if (controller_v_445) {
    sub_338 = v_1293;
  } else {
    sub_338 = sub_339;
  };
  if (controller_v_447) {
    sub_337 = sub_378;
  } else {
    sub_337 = sub_338;
  };
  if (controller_c_air_1) {
    v_1273 = sub_367;
  } else {
    v_1273 = sub_340;
  };
  sub_382 = sub_371;
  sub_381 = sub_382;
  if (controller_air_failed_recovered) {
    v_1272 = sub_342;
  } else {
    v_1272 = sub_368;
  };
  if (controller_c_air_2) {
    sub_383 = v_1272;
  } else {
    sub_383 = sub_377;
  };
  if (controller_c_air_1) {
    v_1294 = sub_383;
    sub_380 = sub_381;
  } else {
    v_1294 = sub_381;
    sub_380 = sub_383;
  };
  if (controller_v_445) {
    sub_379 = v_1273;
  } else {
    sub_379 = sub_380;
  };
  if (controller_air_failed_recovered) {
    v_1270 = sub_371;
  } else {
    v_1270 = sub_342;
  };
  if (controller_c_air_2) {
    v_1271 = v_1270;
  } else {
    v_1271 = sub_341;
  };
  if (controller_c_air_1) {
    sub_384 = v_1271;
  } else {
    sub_384 = sub_340;
  };
  if (controller_v_445) {
    v_1295 = v_1294;
  } else {
    v_1295 = sub_384;
  };
  if (controller_v_447) {
    v_1296 = v_1295;
  } else {
    v_1296 = sub_379;
  };
  if (controller_v_446) {
    sub_336 = v_1296;
  } else {
    sub_336 = sub_337;
  };
  if (controller_v_407) {
    v_1256 = sub_350;
    sub_400 = sub_352;
  } else {
    v_1256 = false;
    sub_400 = false;
  };
  if (controller_c_window) {
    sub_399 = v_1256;
  } else {
    sub_399 = sub_400;
  };
  if (controller_cleaner) {
    v_1257 = sub_399;
    sub_398 = false;
  } else {
    v_1257 = false;
    sub_398 = sub_399;
  };
  if (controller_ck_17_1) {
    sub_397 = v_1257;
  } else {
    sub_397 = sub_398;
  };
  if (controller_c_door) {
    v_1260 = false;
    v_1258 = sub_397;
  } else {
    v_1260 = sub_397;
    v_1258 = false;
  };
  if (controller_v_408) {
    sub_405 = false;
  } else {
    sub_405 = sub_29;
  };
  sub_404 = sub_405;
  if (controller_v_407) {
    v_1254 = sub_404;
  } else {
    v_1254 = sub_352;
  };
  if (controller_c_window) {
    sub_403 = v_1254;
  } else {
    sub_403 = false;
  };
  if (controller_cleaner) {
    v_1255 = sub_399;
    sub_402 = sub_403;
  } else {
    v_1255 = sub_403;
    sub_402 = sub_399;
  };
  if (controller_ck_17_1) {
    sub_401 = v_1255;
  } else {
    sub_401 = sub_402;
  };
  if (controller_cleaner) {
    v_1253 = false;
    sub_407 = sub_403;
  } else {
    v_1253 = sub_403;
    sub_407 = false;
  };
  if (controller_ck_17_1) {
    sub_406 = v_1253;
  } else {
    sub_406 = sub_407;
  };
  if (controller_c_door) {
    v_1261 = sub_406;
  } else {
    v_1261 = sub_401;
  };
  if (controller_c_pc) {
    v_1262 = v_1260;
  } else {
    v_1262 = v_1261;
  };
  if (controller_c_door) {
    v_1259 = sub_401;
  } else {
    v_1259 = sub_406;
  };
  if (controller_c_pc) {
    sub_396 = v_1258;
  } else {
    sub_396 = v_1259;
  };
  if (controller_ck_11_1) {
    sub_395 = v_1262;
  } else {
    sub_395 = sub_396;
  };
  if (controller_cleaner) {
    v_1249 = sub_363;
    sub_411 = sub_403;
  } else {
    v_1249 = sub_403;
    sub_411 = sub_363;
  };
  if (controller_ck_17_1) {
    sub_410 = v_1249;
  } else {
    sub_410 = sub_411;
  };
  if (controller_c_door) {
    v_1251 = sub_406;
  } else {
    v_1251 = sub_410;
  };
  if (controller_c_pc) {
    v_1252 = sub_366;
  } else {
    v_1252 = v_1251;
  };
  if (controller_c_door) {
    v_1250 = sub_410;
  } else {
    v_1250 = sub_406;
  };
  if (controller_c_pc) {
    sub_409 = sub_360;
  } else {
    sub_409 = v_1250;
  };
  if (controller_ck_11_1) {
    sub_408 = v_1252;
  } else {
    sub_408 = sub_409;
  };
  if (controller_change_shift) {
    v_1263 = sub_408;
    sub_394 = sub_395;
  } else {
    v_1263 = sub_395;
    sub_394 = sub_408;
  };
  if (controller_ck_1) {
    sub_393 = v_1263;
  } else {
    sub_393 = sub_394;
  };
  sub_392 = sub_393;
  sub_391 = sub_392;
  sub_390 = sub_391;
  if (controller_c_pc) {
    sub_415 = false;
  } else {
    sub_415 = sub_406;
  };
  sub_414 = sub_415;
  sub_413 = sub_414;
  if (controller_air_failed_recovered) {
    v_1248 = sub_413;
  } else {
    v_1248 = sub_392;
  };
  if (controller_c_air_2) {
    sub_412 = v_1248;
  } else {
    sub_412 = sub_391;
  };
  if (controller_c_air_1) {
    sub_389 = sub_390;
  } else {
    sub_389 = sub_412;
  };
  sub_420 = sub_400;
  if (controller_cleaner) {
    sub_419 = false;
    sub_421 = sub_420;
  } else {
    sub_419 = sub_420;
    sub_421 = false;
  };
  if (controller_ck_17_1) {
    sub_418 = sub_421;
  } else {
    sub_418 = sub_419;
  };
  if (controller_c_pc) {
    sub_417 = false;
  } else {
    sub_417 = sub_418;
  };
  if (controller_c_closet) {
    sub_416 = false;
  } else {
    sub_416 = sub_417;
  };
  if (controller_air_failed_recovered) {
    v_1264 = sub_392;
  } else {
    v_1264 = sub_416;
  };
  sub_422 = sub_413;
  if (controller_c_air_2) {
    v_1265 = v_1264;
  } else {
    v_1265 = sub_422;
  };
  sub_423 = sub_422;
  if (controller_c_air_1) {
    v_1266 = v_1265;
  } else {
    v_1266 = sub_423;
  };
  if (controller_v_445) {
    sub_388 = v_1266;
  } else {
    sub_388 = sub_389;
  };
  if (controller_v_447) {
    sub_387 = sub_423;
  } else {
    sub_387 = sub_388;
  };
  if (controller_c_air_1) {
    v_1247 = sub_412;
  } else {
    v_1247 = sub_390;
  };
  sub_427 = sub_416;
  sub_426 = sub_427;
  if (controller_air_failed_recovered) {
    v_1246 = sub_392;
  } else {
    v_1246 = sub_413;
  };
  if (controller_c_air_2) {
    sub_428 = v_1246;
  } else {
    sub_428 = sub_422;
  };
  if (controller_c_air_1) {
    v_1267 = sub_428;
    sub_425 = sub_426;
  } else {
    v_1267 = sub_426;
    sub_425 = sub_428;
  };
  if (controller_v_445) {
    sub_424 = v_1247;
  } else {
    sub_424 = sub_425;
  };
  if (controller_air_failed_recovered) {
    v_1244 = sub_416;
  } else {
    v_1244 = sub_392;
  };
  if (controller_c_air_2) {
    v_1245 = v_1244;
  } else {
    v_1245 = sub_391;
  };
  if (controller_c_air_1) {
    sub_429 = v_1245;
  } else {
    sub_429 = sub_390;
  };
  if (controller_v_445) {
    v_1268 = v_1267;
  } else {
    v_1268 = sub_429;
  };
  if (controller_v_447) {
    v_1269 = v_1268;
  } else {
    v_1269 = sub_424;
  };
  if (controller_v_446) {
    sub_386 = v_1269;
  } else {
    sub_386 = sub_387;
  };
  sub_385 = sub_386;
  if (controller_c_light_1) {
    v_1297 = sub_336;
  } else {
    v_1297 = sub_385;
  };
  if (controller_v_408) {
    v_1229 = sub_22;
    sub_445 = false;
  } else {
    v_1229 = false;
    sub_445 = sub_22;
  };
  if (controller_light_failed_recovered) {
    sub_444 = v_1229;
  } else {
    sub_444 = sub_445;
  };
  if (controller_v_407) {
    v_1230 = sub_444;
  } else {
    v_1230 = sub_350;
  };
  if (controller_light_failed_recovered) {
    sub_447 = sub_212;
  } else {
    sub_447 = sub_405;
  };
  if (controller_v_407) {
    sub_446 = sub_447;
  } else {
    sub_446 = sub_352;
  };
  if (controller_c_window) {
    sub_443 = v_1230;
  } else {
    sub_443 = sub_446;
  };
  if (controller_cleaner) {
    v_1231 = sub_443;
    sub_442 = false;
  } else {
    v_1231 = false;
    sub_442 = sub_443;
  };
  if (controller_ck_17_1) {
    sub_441 = v_1231;
  } else {
    sub_441 = sub_442;
  };
  if (controller_c_door) {
    v_1234 = false;
    v_1232 = sub_441;
  } else {
    v_1234 = sub_441;
    v_1232 = false;
  };
  if (controller_v_407) {
    v_1227 = sub_352;
  } else {
    v_1227 = sub_447;
  };
  if (controller_c_window) {
    sub_450 = v_1227;
  } else {
    sub_450 = false;
  };
  if (controller_cleaner) {
    v_1228 = sub_443;
    sub_449 = sub_450;
  } else {
    v_1228 = sub_450;
    sub_449 = sub_443;
  };
  if (controller_ck_17_1) {
    sub_448 = v_1228;
  } else {
    sub_448 = sub_449;
  };
  if (controller_cleaner) {
    v_1226 = false;
    sub_452 = sub_450;
  } else {
    v_1226 = sub_450;
    sub_452 = false;
  };
  if (controller_ck_17_1) {
    sub_451 = v_1226;
  } else {
    sub_451 = sub_452;
  };
  if (controller_c_door) {
    v_1235 = sub_451;
  } else {
    v_1235 = sub_448;
  };
  if (controller_c_pc) {
    v_1236 = v_1234;
  } else {
    v_1236 = v_1235;
  };
  if (controller_c_door) {
    v_1233 = sub_448;
  } else {
    v_1233 = sub_451;
  };
  if (controller_c_pc) {
    sub_440 = v_1232;
  } else {
    sub_440 = v_1233;
  };
  if (controller_ck_11_1) {
    sub_439 = v_1236;
  } else {
    sub_439 = sub_440;
  };
  if (controller_cleaner) {
    v_1222 = sub_363;
    sub_456 = sub_450;
  } else {
    v_1222 = sub_450;
    sub_456 = sub_363;
  };
  if (controller_ck_17_1) {
    sub_455 = v_1222;
  } else {
    sub_455 = sub_456;
  };
  if (controller_c_door) {
    v_1224 = sub_451;
  } else {
    v_1224 = sub_455;
  };
  if (controller_c_pc) {
    v_1225 = sub_366;
  } else {
    v_1225 = v_1224;
  };
  if (controller_c_door) {
    v_1223 = sub_455;
  } else {
    v_1223 = sub_451;
  };
  if (controller_c_pc) {
    sub_454 = sub_360;
  } else {
    sub_454 = v_1223;
  };
  if (controller_ck_11_1) {
    sub_453 = v_1225;
  } else {
    sub_453 = sub_454;
  };
  if (controller_change_shift) {
    v_1237 = sub_453;
    sub_438 = sub_439;
  } else {
    v_1237 = sub_439;
    sub_438 = sub_453;
  };
  if (controller_ck_1) {
    sub_437 = v_1237;
  } else {
    sub_437 = sub_438;
  };
  sub_436 = sub_437;
  sub_435 = sub_436;
  sub_434 = sub_435;
  if (controller_c_pc) {
    sub_460 = false;
  } else {
    sub_460 = sub_451;
  };
  sub_459 = sub_460;
  sub_458 = sub_459;
  if (controller_air_failed_recovered) {
    v_1221 = sub_458;
  } else {
    v_1221 = sub_436;
  };
  if (controller_c_air_2) {
    sub_457 = v_1221;
  } else {
    sub_457 = sub_435;
  };
  if (controller_c_air_1) {
    sub_433 = sub_434;
  } else {
    sub_433 = sub_457;
  };
  sub_465 = sub_446;
  if (controller_cleaner) {
    sub_464 = false;
    sub_466 = sub_465;
  } else {
    sub_464 = sub_465;
    sub_466 = false;
  };
  if (controller_ck_17_1) {
    sub_463 = sub_466;
  } else {
    sub_463 = sub_464;
  };
  if (controller_c_pc) {
    sub_462 = false;
  } else {
    sub_462 = sub_463;
  };
  if (controller_c_closet) {
    sub_461 = false;
  } else {
    sub_461 = sub_462;
  };
  if (controller_air_failed_recovered) {
    v_1238 = sub_436;
  } else {
    v_1238 = sub_461;
  };
  sub_467 = sub_458;
  if (controller_c_air_2) {
    v_1239 = v_1238;
  } else {
    v_1239 = sub_467;
  };
  sub_468 = sub_467;
  if (controller_c_air_1) {
    v_1240 = v_1239;
  } else {
    v_1240 = sub_468;
  };
  if (controller_v_445) {
    sub_432 = v_1240;
  } else {
    sub_432 = sub_433;
  };
  if (controller_v_447) {
    sub_431 = sub_468;
  } else {
    sub_431 = sub_432;
  };
  if (controller_c_air_1) {
    v_1220 = sub_457;
  } else {
    v_1220 = sub_434;
  };
  sub_472 = sub_461;
  sub_471 = sub_472;
  if (controller_air_failed_recovered) {
    v_1219 = sub_436;
  } else {
    v_1219 = sub_458;
  };
  if (controller_c_air_2) {
    sub_473 = v_1219;
  } else {
    sub_473 = sub_467;
  };
  if (controller_c_air_1) {
    v_1241 = sub_473;
    sub_470 = sub_471;
  } else {
    v_1241 = sub_471;
    sub_470 = sub_473;
  };
  if (controller_v_445) {
    sub_469 = v_1220;
  } else {
    sub_469 = sub_470;
  };
  if (controller_air_failed_recovered) {
    v_1217 = sub_461;
  } else {
    v_1217 = sub_436;
  };
  if (controller_c_air_2) {
    v_1218 = v_1217;
  } else {
    v_1218 = sub_435;
  };
  if (controller_c_air_1) {
    sub_474 = v_1218;
  } else {
    sub_474 = sub_434;
  };
  if (controller_v_445) {
    v_1242 = v_1241;
  } else {
    v_1242 = sub_474;
  };
  if (controller_v_447) {
    v_1243 = v_1242;
  } else {
    v_1243 = sub_469;
  };
  if (controller_v_446) {
    sub_430 = v_1243;
  } else {
    sub_430 = sub_431;
  };
  if (controller_c_light_1) {
    v_1298 = sub_430;
  } else {
    v_1298 = sub_385;
  };
  if (controller_light_switch) {
    sub_335 = v_1297;
  } else {
    sub_335 = v_1298;
  };
  sub_488 = sub_349;
  if (controller_c_door) {
    sub_487 = sub_488;
  } else {
    sub_487 = false;
  };
  sub_486 = sub_487;
  if (controller_c_door) {
    sub_489 = false;
  } else {
    sub_489 = sub_488;
  };
  if (controller_ck_11_1) {
    sub_485 = sub_489;
  } else {
    sub_485 = sub_486;
  };
  sub_493 = sub_363;
  if (controller_c_door) {
    sub_492 = sub_493;
  } else {
    sub_492 = false;
  };
  sub_491 = sub_492;
  if (controller_c_door) {
    sub_494 = false;
  } else {
    sub_494 = sub_493;
  };
  if (controller_ck_11_1) {
    sub_490 = sub_494;
  } else {
    sub_490 = sub_491;
  };
  if (controller_change_shift) {
    v_1204 = sub_490;
    sub_484 = sub_485;
  } else {
    v_1204 = sub_485;
    sub_484 = sub_490;
  };
  if (controller_ck_1) {
    sub_483 = v_1204;
  } else {
    sub_483 = sub_484;
  };
  sub_482 = sub_483;
  sub_481 = sub_482;
  sub_480 = sub_481;
  if (controller_c_window) {
    sub_501 = false;
  } else {
    sub_501 = sub_351;
  };
  if (controller_cleaner) {
    v_1202 = false;
    sub_500 = sub_501;
  } else {
    v_1202 = sub_501;
    sub_500 = false;
  };
  if (controller_ck_17_1) {
    sub_499 = v_1202;
    sub_503 = sub_374;
  } else {
    sub_499 = sub_500;
    sub_503 = sub_376;
  };
  sub_502 = sub_503;
  if (controller_c_pc) {
    sub_498 = sub_499;
  } else {
    sub_498 = sub_502;
  };
  if (controller_light_failed_recovered) {
    v_1200 = sub_21;
  } else {
    v_1200 = sub_445;
  };
  if (controller_v_407) {
    sub_509 = v_1200;
  } else {
    sub_509 = sub_121;
  };
  sub_508 = sub_509;
  if (controller_cleaner) {
    v_1201 = false;
    sub_507 = sub_508;
  } else {
    v_1201 = sub_508;
    sub_507 = false;
  };
  if (controller_ck_17_1) {
    sub_506 = v_1201;
  } else {
    sub_506 = sub_507;
  };
  sub_505 = sub_506;
  sub_504 = sub_505;
  if (controller_change_shift) {
    v_1203 = sub_504;
    sub_497 = sub_498;
  } else {
    v_1203 = sub_498;
    sub_497 = sub_504;
  };
  if (controller_ck_1) {
    sub_496 = v_1203;
  } else {
    sub_496 = sub_497;
  };
  sub_495 = sub_496;
  if (controller_air_failed_recovered) {
    v_1205 = sub_495;
  } else {
    v_1205 = sub_482;
  };
  if (controller_c_air_2) {
    v_1206 = v_1205;
  } else {
    v_1206 = sub_481;
  };
  if (controller_c_air_1) {
    sub_479 = sub_480;
  } else {
    sub_479 = v_1206;
  };
  if (controller_light_failed_recovered) {
    v_1193 = sub_28;
  } else {
    v_1193 = sub_405;
  };
  if (controller_v_407) {
    v_1194 = v_1193;
  } else {
    v_1194 = sub_124;
  };
  if (controller_c_window) {
    sub_516 = v_1194;
  } else {
    sub_516 = sub_351;
  };
  if (controller_cleaner) {
    v_1195 = false;
    sub_515 = sub_516;
  } else {
    v_1195 = sub_516;
    sub_515 = false;
  };
  if (controller_ck_17_1) {
    sub_514 = v_1195;
  } else {
    sub_514 = sub_515;
  };
  sub_513 = sub_514;
  if (controller_c_pc) {
    sub_512 = sub_513;
  } else {
    sub_512 = sub_502;
  };
  sub_517 = sub_502;
  if (controller_change_shift) {
    v_1196 = sub_517;
    sub_511 = sub_512;
  } else {
    v_1196 = sub_512;
    sub_511 = sub_517;
  };
  if (controller_ck_1) {
    v_1197 = v_1196;
  } else {
    v_1197 = sub_511;
  };
  sub_521 = sub_375;
  sub_520 = sub_521;
  if (controller_c_pc) {
    sub_519 = sub_513;
    sub_522 = sub_502;
  } else {
    sub_519 = sub_520;
    sub_522 = sub_520;
  };
  if (controller_change_shift) {
    v_1198 = sub_522;
    sub_518 = sub_519;
  } else {
    v_1198 = sub_519;
    sub_518 = sub_522;
  };
  if (controller_ck_1) {
    v_1199 = v_1198;
  } else {
    v_1199 = sub_518;
  };
  if (controller_c_closet) {
    sub_510 = v_1197;
  } else {
    sub_510 = v_1199;
  };
  if (controller_air_failed_recovered) {
    v_1207 = sub_482;
  } else {
    v_1207 = sub_510;
  };
  if (controller_c_window) {
    sub_530 = sub_209;
  } else {
    sub_530 = sub_351;
  };
  if (controller_cleaner) {
    v_1191 = false;
    sub_529 = sub_530;
  } else {
    v_1191 = sub_530;
    sub_529 = false;
  };
  if (controller_ck_17_1) {
    sub_528 = v_1191;
  } else {
    sub_528 = sub_529;
  };
  if (controller_c_pc) {
    sub_527 = sub_528;
  } else {
    sub_527 = sub_502;
  };
  if (controller_change_shift) {
    v_1192 = sub_504;
    sub_526 = sub_527;
  } else {
    v_1192 = sub_527;
    sub_526 = sub_504;
  };
  if (controller_ck_1) {
    sub_525 = v_1192;
  } else {
    sub_525 = sub_526;
  };
  sub_524 = sub_525;
  if (controller_air_failed_recovered) {
    v_1210 = sub_482;
  } else {
    v_1210 = sub_524;
  };
  sub_523 = sub_524;
  if (controller_c_air_2) {
    v_1208 = v_1207;
  } else {
    v_1208 = sub_523;
  };
  sub_531 = sub_495;
  if (controller_c_air_2) {
    v_1211 = v_1210;
  } else {
    v_1211 = sub_531;
  };
  if (controller_c_air_1) {
    v_1209 = v_1208;
  } else {
    v_1209 = sub_531;
  };
  if (controller_v_445) {
    sub_478 = v_1209;
  } else {
    sub_478 = sub_479;
  };
  sub_532 = sub_523;
  if (controller_v_447) {
    sub_477 = sub_532;
  } else {
    sub_477 = sub_478;
  };
  if (controller_air_failed_recovered) {
    v_1188 = sub_524;
  } else {
    v_1188 = sub_482;
  };
  if (controller_c_air_2) {
    v_1189 = v_1188;
  } else {
    v_1189 = sub_481;
  };
  if (controller_c_air_1) {
    v_1190 = v_1189;
  } else {
    v_1190 = sub_480;
  };
  if (controller_air_failed_recovered) {
    v_1186 = sub_482;
  } else {
    v_1186 = sub_495;
  };
  if (controller_c_air_2) {
    v_1187 = v_1186;
  } else {
    v_1187 = sub_523;
  };
  sub_536 = sub_510;
  sub_535 = sub_536;
  if (controller_c_air_1) {
    v_1212 = v_1211;
    sub_534 = sub_535;
  } else {
    v_1212 = sub_535;
    sub_534 = v_1187;
  };
  if (controller_v_445) {
    sub_533 = v_1190;
  } else {
    sub_533 = sub_534;
  };
  if (controller_air_failed_recovered) {
    v_1184 = sub_510;
  } else {
    v_1184 = sub_482;
  };
  if (controller_c_air_2) {
    v_1185 = v_1184;
  } else {
    v_1185 = sub_481;
  };
  if (controller_c_air_1) {
    sub_537 = v_1185;
  } else {
    sub_537 = sub_480;
  };
  if (controller_v_445) {
    v_1213 = v_1212;
  } else {
    v_1213 = sub_537;
  };
  if (controller_v_447) {
    v_1214 = v_1213;
  } else {
    v_1214 = sub_533;
  };
  if (controller_v_446) {
    sub_476 = v_1214;
  } else {
    sub_476 = sub_477;
  };
  sub_551 = sub_399;
  if (controller_c_door) {
    sub_550 = sub_551;
  } else {
    sub_550 = false;
  };
  sub_549 = sub_550;
  if (controller_c_door) {
    sub_552 = false;
  } else {
    sub_552 = sub_551;
  };
  if (controller_ck_11_1) {
    sub_548 = sub_552;
  } else {
    sub_548 = sub_549;
  };
  if (controller_change_shift) {
    v_1173 = sub_490;
    sub_547 = sub_548;
  } else {
    v_1173 = sub_548;
    sub_547 = sub_490;
  };
  if (controller_ck_1) {
    sub_546 = v_1173;
  } else {
    sub_546 = sub_547;
  };
  sub_545 = sub_546;
  sub_544 = sub_545;
  sub_543 = sub_544;
  if (controller_c_window) {
    sub_559 = false;
  } else {
    sub_559 = sub_400;
  };
  if (controller_cleaner) {
    v_1171 = false;
    sub_558 = sub_559;
  } else {
    v_1171 = sub_559;
    sub_558 = false;
  };
  if (controller_ck_17_1) {
    sub_557 = v_1171;
    sub_561 = sub_419;
  } else {
    sub_557 = sub_558;
    sub_561 = sub_421;
  };
  sub_560 = sub_561;
  if (controller_c_pc) {
    sub_556 = sub_557;
  } else {
    sub_556 = sub_560;
  };
  if (controller_v_407) {
    sub_567 = sub_445;
  } else {
    sub_567 = false;
  };
  sub_566 = sub_567;
  if (controller_cleaner) {
    v_1170 = false;
    sub_565 = sub_566;
  } else {
    v_1170 = sub_566;
    sub_565 = false;
  };
  if (controller_ck_17_1) {
    sub_564 = v_1170;
  } else {
    sub_564 = sub_565;
  };
  sub_563 = sub_564;
  sub_562 = sub_563;
  if (controller_change_shift) {
    v_1172 = sub_562;
    sub_555 = sub_556;
  } else {
    v_1172 = sub_556;
    sub_555 = sub_562;
  };
  if (controller_ck_1) {
    sub_554 = v_1172;
  } else {
    sub_554 = sub_555;
  };
  sub_553 = sub_554;
  if (controller_air_failed_recovered) {
    v_1174 = sub_553;
  } else {
    v_1174 = sub_545;
  };
  if (controller_c_air_2) {
    v_1175 = v_1174;
  } else {
    v_1175 = sub_544;
  };
  if (controller_c_air_1) {
    sub_542 = sub_543;
  } else {
    sub_542 = v_1175;
  };
  if (controller_v_407) {
    v_1164 = sub_404;
  } else {
    v_1164 = false;
  };
  if (controller_c_window) {
    sub_574 = v_1164;
  } else {
    sub_574 = sub_400;
  };
  if (controller_cleaner) {
    v_1165 = false;
    sub_573 = sub_574;
  } else {
    v_1165 = sub_574;
    sub_573 = false;
  };
  if (controller_ck_17_1) {
    sub_572 = v_1165;
  } else {
    sub_572 = sub_573;
  };
  sub_571 = sub_572;
  if (controller_c_pc) {
    sub_570 = sub_571;
  } else {
    sub_570 = sub_560;
  };
  sub_575 = sub_560;
  if (controller_change_shift) {
    v_1166 = sub_575;
    sub_569 = sub_570;
  } else {
    v_1166 = sub_570;
    sub_569 = sub_575;
  };
  if (controller_ck_1) {
    v_1167 = v_1166;
  } else {
    v_1167 = sub_569;
  };
  sub_579 = sub_420;
  sub_578 = sub_579;
  if (controller_c_pc) {
    sub_577 = sub_571;
    sub_580 = sub_560;
  } else {
    sub_577 = sub_578;
    sub_580 = sub_578;
  };
  if (controller_change_shift) {
    v_1168 = sub_580;
    sub_576 = sub_577;
  } else {
    v_1168 = sub_577;
    sub_576 = sub_580;
  };
  if (controller_ck_1) {
    v_1169 = v_1168;
  } else {
    v_1169 = sub_576;
  };
  if (controller_c_closet) {
    sub_568 = v_1167;
  } else {
    sub_568 = v_1169;
  };
  if (controller_air_failed_recovered) {
    v_1176 = sub_545;
  } else {
    v_1176 = sub_568;
  };
  if (controller_v_407) {
    v_1161 = sub_211;
  } else {
    v_1161 = false;
  };
  if (controller_c_window) {
    sub_588 = v_1161;
  } else {
    sub_588 = sub_400;
  };
  if (controller_cleaner) {
    v_1162 = false;
    sub_587 = sub_588;
  } else {
    v_1162 = sub_588;
    sub_587 = false;
  };
  if (controller_ck_17_1) {
    sub_586 = v_1162;
  } else {
    sub_586 = sub_587;
  };
  if (controller_c_pc) {
    sub_585 = sub_586;
  } else {
    sub_585 = sub_560;
  };
  if (controller_change_shift) {
    v_1163 = sub_562;
    sub_584 = sub_585;
  } else {
    v_1163 = sub_585;
    sub_584 = sub_562;
  };
  if (controller_ck_1) {
    sub_583 = v_1163;
  } else {
    sub_583 = sub_584;
  };
  sub_582 = sub_583;
  if (controller_air_failed_recovered) {
    v_1179 = sub_545;
  } else {
    v_1179 = sub_582;
  };
  sub_581 = sub_582;
  if (controller_c_air_2) {
    v_1177 = v_1176;
  } else {
    v_1177 = sub_581;
  };
  sub_589 = sub_553;
  if (controller_c_air_2) {
    v_1180 = v_1179;
  } else {
    v_1180 = sub_589;
  };
  if (controller_c_air_1) {
    v_1178 = v_1177;
  } else {
    v_1178 = sub_589;
  };
  if (controller_v_445) {
    sub_541 = v_1178;
  } else {
    sub_541 = sub_542;
  };
  sub_590 = sub_581;
  if (controller_v_447) {
    sub_540 = sub_590;
  } else {
    sub_540 = sub_541;
  };
  if (controller_air_failed_recovered) {
    v_1158 = sub_582;
  } else {
    v_1158 = sub_545;
  };
  if (controller_c_air_2) {
    v_1159 = v_1158;
  } else {
    v_1159 = sub_544;
  };
  if (controller_c_air_1) {
    v_1160 = v_1159;
  } else {
    v_1160 = sub_543;
  };
  if (controller_air_failed_recovered) {
    v_1156 = sub_545;
  } else {
    v_1156 = sub_553;
  };
  if (controller_c_air_2) {
    v_1157 = v_1156;
  } else {
    v_1157 = sub_581;
  };
  sub_594 = sub_568;
  sub_593 = sub_594;
  if (controller_c_air_1) {
    v_1181 = v_1180;
    sub_592 = sub_593;
  } else {
    v_1181 = sub_593;
    sub_592 = v_1157;
  };
  if (controller_v_445) {
    sub_591 = v_1160;
  } else {
    sub_591 = sub_592;
  };
  if (controller_air_failed_recovered) {
    v_1154 = sub_568;
  } else {
    v_1154 = sub_545;
  };
  if (controller_c_air_2) {
    v_1155 = v_1154;
  } else {
    v_1155 = sub_544;
  };
  if (controller_c_air_1) {
    sub_595 = v_1155;
  } else {
    sub_595 = sub_543;
  };
  if (controller_v_445) {
    v_1182 = v_1181;
  } else {
    v_1182 = sub_595;
  };
  if (controller_v_447) {
    v_1183 = v_1182;
  } else {
    v_1183 = sub_591;
  };
  if (controller_v_446) {
    sub_539 = v_1183;
  } else {
    sub_539 = sub_540;
  };
  sub_538 = sub_539;
  if (controller_c_light_1) {
    v_1215 = sub_476;
  } else {
    v_1215 = sub_538;
  };
  sub_608 = sub_443;
  if (controller_c_door) {
    sub_607 = sub_608;
  } else {
    sub_607 = false;
  };
  sub_606 = sub_607;
  if (controller_c_door) {
    sub_609 = false;
  } else {
    sub_609 = sub_608;
  };
  if (controller_ck_11_1) {
    sub_605 = sub_609;
  } else {
    sub_605 = sub_606;
  };
  if (controller_change_shift) {
    v_1143 = sub_490;
    sub_604 = sub_605;
  } else {
    v_1143 = sub_605;
    sub_604 = sub_490;
  };
  if (controller_ck_1) {
    sub_603 = v_1143;
  } else {
    sub_603 = sub_604;
  };
  sub_602 = sub_603;
  sub_601 = sub_602;
  sub_600 = sub_601;
  if (controller_c_window) {
    sub_616 = false;
  } else {
    sub_616 = sub_446;
  };
  if (controller_cleaner) {
    v_1141 = false;
    sub_615 = sub_616;
  } else {
    v_1141 = sub_616;
    sub_615 = false;
  };
  if (controller_ck_17_1) {
    sub_614 = v_1141;
    sub_618 = sub_464;
  } else {
    sub_614 = sub_615;
    sub_618 = sub_466;
  };
  sub_617 = sub_618;
  if (controller_c_pc) {
    sub_613 = sub_614;
  } else {
    sub_613 = sub_617;
  };
  sub_623 = sub_444;
  if (controller_cleaner) {
    v_1140 = false;
    sub_622 = sub_623;
  } else {
    v_1140 = sub_623;
    sub_622 = false;
  };
  if (controller_ck_17_1) {
    sub_621 = v_1140;
  } else {
    sub_621 = sub_622;
  };
  sub_620 = sub_621;
  sub_619 = sub_620;
  if (controller_change_shift) {
    v_1142 = sub_619;
    sub_612 = sub_613;
  } else {
    v_1142 = sub_613;
    sub_612 = sub_619;
  };
  if (controller_ck_1) {
    sub_611 = v_1142;
  } else {
    sub_611 = sub_612;
  };
  sub_610 = sub_611;
  if (controller_air_failed_recovered) {
    v_1144 = sub_610;
  } else {
    v_1144 = sub_602;
  };
  if (controller_c_air_2) {
    v_1145 = v_1144;
  } else {
    v_1145 = sub_601;
  };
  if (controller_c_air_1) {
    sub_599 = sub_600;
  } else {
    sub_599 = v_1145;
  };
  if (controller_c_window) {
    sub_630 = sub_447;
  } else {
    sub_630 = sub_446;
  };
  if (controller_cleaner) {
    v_1135 = false;
    sub_629 = sub_630;
  } else {
    v_1135 = sub_630;
    sub_629 = false;
  };
  if (controller_ck_17_1) {
    sub_628 = v_1135;
  } else {
    sub_628 = sub_629;
  };
  sub_627 = sub_628;
  if (controller_c_pc) {
    sub_626 = sub_627;
  } else {
    sub_626 = sub_617;
  };
  sub_631 = sub_617;
  if (controller_change_shift) {
    v_1136 = sub_631;
    sub_625 = sub_626;
  } else {
    v_1136 = sub_626;
    sub_625 = sub_631;
  };
  if (controller_ck_1) {
    v_1137 = v_1136;
  } else {
    v_1137 = sub_625;
  };
  sub_635 = sub_465;
  sub_634 = sub_635;
  if (controller_c_pc) {
    sub_633 = sub_627;
    sub_636 = sub_617;
  } else {
    sub_633 = sub_634;
    sub_636 = sub_634;
  };
  if (controller_change_shift) {
    v_1138 = sub_636;
    sub_632 = sub_633;
  } else {
    v_1138 = sub_633;
    sub_632 = sub_636;
  };
  if (controller_ck_1) {
    v_1139 = v_1138;
  } else {
    v_1139 = sub_632;
  };
  if (controller_c_closet) {
    sub_624 = v_1137;
  } else {
    sub_624 = v_1139;
  };
  if (controller_air_failed_recovered) {
    v_1146 = sub_602;
  } else {
    v_1146 = sub_624;
  };
  if (controller_light_failed_recovered) {
    sub_645 = sub_405;
  } else {
    sub_645 = sub_212;
  };
  if (controller_v_407) {
    v_1132 = false;
  } else {
    v_1132 = sub_645;
  };
  if (controller_c_window) {
    sub_644 = v_1132;
  } else {
    sub_644 = sub_446;
  };
  if (controller_cleaner) {
    v_1133 = false;
    sub_643 = sub_644;
  } else {
    v_1133 = sub_644;
    sub_643 = false;
  };
  if (controller_ck_17_1) {
    sub_642 = v_1133;
  } else {
    sub_642 = sub_643;
  };
  if (controller_c_pc) {
    sub_641 = sub_642;
  } else {
    sub_641 = sub_617;
  };
  if (controller_change_shift) {
    v_1134 = sub_619;
    sub_640 = sub_641;
  } else {
    v_1134 = sub_641;
    sub_640 = sub_619;
  };
  if (controller_ck_1) {
    sub_639 = v_1134;
  } else {
    sub_639 = sub_640;
  };
  sub_638 = sub_639;
  if (controller_air_failed_recovered) {
    v_1149 = sub_602;
  } else {
    v_1149 = sub_638;
  };
  sub_637 = sub_638;
  if (controller_c_air_2) {
    v_1147 = v_1146;
  } else {
    v_1147 = sub_637;
  };
  sub_646 = sub_610;
  if (controller_c_air_2) {
    v_1150 = v_1149;
  } else {
    v_1150 = sub_646;
  };
  if (controller_c_air_1) {
    v_1148 = v_1147;
  } else {
    v_1148 = sub_646;
  };
  if (controller_v_445) {
    sub_598 = v_1148;
  } else {
    sub_598 = sub_599;
  };
  sub_647 = sub_637;
  if (controller_v_447) {
    sub_597 = sub_647;
  } else {
    sub_597 = sub_598;
  };
  if (controller_air_failed_recovered) {
    v_1129 = sub_638;
  } else {
    v_1129 = sub_602;
  };
  if (controller_c_air_2) {
    v_1130 = v_1129;
  } else {
    v_1130 = sub_601;
  };
  if (controller_c_air_1) {
    v_1131 = v_1130;
  } else {
    v_1131 = sub_600;
  };
  if (controller_air_failed_recovered) {
    v_1127 = sub_602;
  } else {
    v_1127 = sub_610;
  };
  if (controller_c_air_2) {
    v_1128 = v_1127;
  } else {
    v_1128 = sub_637;
  };
  sub_651 = sub_624;
  sub_650 = sub_651;
  if (controller_c_air_1) {
    v_1151 = v_1150;
    sub_649 = sub_650;
  } else {
    v_1151 = sub_650;
    sub_649 = v_1128;
  };
  if (controller_v_445) {
    sub_648 = v_1131;
  } else {
    sub_648 = sub_649;
  };
  if (controller_air_failed_recovered) {
    v = sub_624;
  } else {
    v = sub_602;
  };
  if (controller_c_air_2) {
    v_1126 = v;
  } else {
    v_1126 = sub_601;
  };
  if (controller_c_air_1) {
    sub_652 = v_1126;
  } else {
    sub_652 = sub_600;
  };
  if (controller_v_445) {
    v_1152 = v_1151;
  } else {
    v_1152 = sub_652;
  };
  if (controller_v_447) {
    v_1153 = v_1152;
  } else {
    v_1153 = sub_648;
  };
  if (controller_v_446) {
    sub_596 = v_1153;
  } else {
    sub_596 = sub_597;
  };
  if (controller_c_light_1) {
    v_1216 = sub_596;
  } else {
    v_1216 = sub_538;
  };
  if (controller_light_switch) {
    sub_475 = v_1215;
  } else {
    sub_475 = v_1216;
  };
  if (controller_worker) {
    v_1484 = sub_475;
    sub_334 = sub_335;
  } else {
    v_1484 = sub_335;
    sub_334 = sub_475;
  };
  if (controller_ck_15_1) {
    v_1485 = v_1484;
  } else {
    v_1485 = sub_334;
  };
  if (p_controller_c_light_2) {
    sub_0 = v_1485;
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
  v_1654 = !(controller_v_392);
  v_1655 = (v_1654||false);
  sub_21 = (controller_v_392||false);
  v_1653 = (controller_v_391||sub_21);
  if (controller_blind_failed_recovered) {
    sub_20 = v_1653;
  } else {
    sub_20 = v_1655;
  };
  sub_19 = sub_20;
  v_1652 = (controller_v_392&&false);
  v_1650 = !(controller_v_391);
  v_1649 = !(controller_v_392);
  sub_23 = (v_1649&&false);
  v_1651 = (v_1650&&sub_23);
  if (controller_blind_failed_recovered) {
    sub_22 = v_1651;
  } else {
    sub_22 = v_1652;
  };
  if (controller_v_407) {
    v_1656 = sub_22;
  } else {
    v_1656 = sub_19;
  };
  sub_26 = true;
  sub_25 = sub_26;
  sub_28 = false;
  sub_27 = sub_28;
  if (controller_v_407) {
    sub_24 = sub_27;
  } else {
    sub_24 = sub_25;
  };
  if (controller_c_window) {
    sub_18 = v_1656;
  } else {
    sub_18 = sub_24;
  };
  if (controller_cleaner) {
    v_1657 = sub_18;
    sub_17 = false;
  } else {
    v_1657 = false;
    sub_17 = sub_18;
  };
  if (controller_ck_17_1) {
    sub_16 = v_1657;
  } else {
    sub_16 = sub_17;
  };
  if (controller_c_door) {
    v_1660 = false;
    v_1658 = sub_16;
  } else {
    v_1660 = sub_16;
    v_1658 = false;
  };
  if (controller_v_408) {
    sub_32 = sub_26;
  } else {
    sub_32 = sub_28;
  };
  if (controller_v_407) {
    v_1647 = sub_32;
  } else {
    v_1647 = sub_27;
  };
  if (controller_c_window) {
    sub_31 = v_1647;
  } else {
    sub_31 = false;
  };
  if (controller_cleaner) {
    v_1648 = sub_18;
    sub_30 = sub_31;
  } else {
    v_1648 = sub_31;
    sub_30 = sub_18;
  };
  if (controller_ck_17_1) {
    sub_29 = v_1648;
  } else {
    sub_29 = sub_30;
  };
  if (controller_cleaner) {
    v_1646 = false;
    sub_34 = sub_31;
  } else {
    v_1646 = sub_31;
    sub_34 = false;
  };
  if (controller_ck_17_1) {
    sub_33 = v_1646;
  } else {
    sub_33 = sub_34;
  };
  if (controller_c_door) {
    v_1661 = sub_33;
  } else {
    v_1661 = sub_29;
  };
  if (controller_c_pc) {
    v_1662 = v_1660;
  } else {
    v_1662 = v_1661;
  };
  if (controller_c_door) {
    v_1659 = sub_29;
  } else {
    v_1659 = sub_33;
  };
  if (controller_c_pc) {
    sub_15 = v_1658;
  } else {
    sub_15 = v_1659;
  };
  if (controller_ck_11_1) {
    sub_14 = v_1662;
  } else {
    sub_14 = sub_15;
  };
  if (controller_c_window) {
    sub_39 = false;
  } else {
    sub_39 = sub_27;
  };
  if (controller_cleaner) {
    v_1640 = sub_39;
    sub_38 = false;
  } else {
    v_1640 = false;
    sub_38 = sub_39;
  };
  if (controller_ck_17_1) {
    sub_37 = v_1640;
  } else {
    sub_37 = sub_38;
  };
  if (controller_c_door) {
    v_1643 = false;
    v_1641 = sub_37;
  } else {
    v_1643 = sub_37;
    v_1641 = false;
  };
  if (controller_cleaner) {
    v_1639 = sub_39;
    sub_41 = sub_31;
  } else {
    v_1639 = sub_31;
    sub_41 = sub_39;
  };
  if (controller_ck_17_1) {
    sub_40 = v_1639;
  } else {
    sub_40 = sub_41;
  };
  if (controller_c_door) {
    v_1644 = sub_33;
  } else {
    v_1644 = sub_40;
  };
  if (controller_c_pc) {
    v_1645 = v_1643;
  } else {
    v_1645 = v_1644;
  };
  if (controller_c_door) {
    v_1642 = sub_40;
  } else {
    v_1642 = sub_33;
  };
  if (controller_c_pc) {
    sub_36 = v_1641;
  } else {
    sub_36 = v_1642;
  };
  if (controller_ck_11_1) {
    sub_35 = v_1645;
  } else {
    sub_35 = sub_36;
  };
  if (controller_change_shift) {
    v_1663 = sub_35;
    sub_13 = sub_14;
  } else {
    v_1663 = sub_14;
    sub_13 = sub_35;
  };
  if (controller_ck_1) {
    sub_12 = v_1663;
  } else {
    sub_12 = sub_13;
  };
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  if (controller_c_pc) {
    sub_45 = false;
  } else {
    sub_45 = sub_33;
  };
  sub_44 = sub_45;
  sub_43 = sub_44;
  if (controller_air_failed_recovered) {
    v_1638 = sub_43;
  } else {
    v_1638 = sub_11;
  };
  if (controller_c_air_2) {
    sub_42 = v_1638;
  } else {
    sub_42 = sub_10;
  };
  if (controller_c_air_1) {
    sub_8 = sub_9;
  } else {
    sub_8 = sub_42;
  };
  sub_50 = sub_24;
  if (controller_cleaner) {
    sub_49 = false;
    sub_51 = sub_50;
  } else {
    sub_49 = sub_50;
    sub_51 = false;
  };
  if (controller_ck_17_1) {
    sub_48 = sub_51;
  } else {
    sub_48 = sub_49;
  };
  if (controller_c_pc) {
    sub_47 = false;
  } else {
    sub_47 = sub_48;
  };
  if (controller_c_closet) {
    sub_46 = false;
  } else {
    sub_46 = sub_47;
  };
  if (controller_air_failed_recovered) {
    v_1664 = sub_11;
  } else {
    v_1664 = sub_46;
  };
  sub_52 = sub_43;
  if (controller_c_air_2) {
    v_1665 = v_1664;
  } else {
    v_1665 = sub_52;
  };
  sub_53 = sub_52;
  if (controller_c_air_1) {
    v_1666 = v_1665;
  } else {
    v_1666 = sub_53;
  };
  if (controller_v_445) {
    sub_7 = v_1666;
  } else {
    sub_7 = sub_8;
  };
  if (controller_v_447) {
    sub_6 = sub_53;
  } else {
    sub_6 = sub_7;
  };
  if (controller_c_air_1) {
    v_1637 = sub_42;
  } else {
    v_1637 = sub_9;
  };
  sub_57 = sub_46;
  sub_56 = sub_57;
  if (controller_air_failed_recovered) {
    v_1636 = sub_11;
  } else {
    v_1636 = sub_43;
  };
  if (controller_c_air_2) {
    sub_58 = v_1636;
  } else {
    sub_58 = sub_52;
  };
  if (controller_c_air_1) {
    v_1667 = sub_58;
    sub_55 = sub_56;
  } else {
    v_1667 = sub_56;
    sub_55 = sub_58;
  };
  if (controller_v_445) {
    sub_54 = v_1637;
  } else {
    sub_54 = sub_55;
  };
  if (controller_air_failed_recovered) {
    v_1634 = sub_46;
  } else {
    v_1634 = sub_11;
  };
  if (controller_c_air_2) {
    v_1635 = v_1634;
  } else {
    v_1635 = sub_10;
  };
  if (controller_c_air_1) {
    sub_59 = v_1635;
  } else {
    sub_59 = sub_9;
  };
  if (controller_v_445) {
    v_1668 = v_1667;
  } else {
    v_1668 = sub_59;
  };
  if (controller_v_447) {
    v_1669 = v_1668;
  } else {
    v_1669 = sub_54;
  };
  if (controller_v_446) {
    sub_5 = v_1669;
  } else {
    sub_5 = sub_6;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_74 = sub_18;
  if (controller_c_door) {
    sub_73 = sub_74;
  } else {
    sub_73 = false;
  };
  sub_72 = sub_73;
  if (controller_c_door) {
    sub_75 = false;
  } else {
    sub_75 = sub_74;
  };
  if (controller_ck_11_1) {
    sub_71 = sub_75;
  } else {
    sub_71 = sub_72;
  };
  sub_79 = sub_39;
  if (controller_c_door) {
    sub_78 = sub_79;
  } else {
    sub_78 = false;
  };
  sub_77 = sub_78;
  if (controller_c_door) {
    sub_80 = false;
  } else {
    sub_80 = sub_79;
  };
  if (controller_ck_11_1) {
    sub_76 = sub_80;
  } else {
    sub_76 = sub_77;
  };
  if (controller_change_shift) {
    v_1623 = sub_76;
    sub_70 = sub_71;
  } else {
    v_1623 = sub_71;
    sub_70 = sub_76;
  };
  if (controller_ck_1) {
    sub_69 = v_1623;
  } else {
    sub_69 = sub_70;
  };
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_66 = sub_67;
  if (controller_c_window) {
    sub_87 = false;
  } else {
    sub_87 = sub_24;
  };
  if (controller_cleaner) {
    v_1621 = false;
    sub_86 = sub_87;
  } else {
    v_1621 = sub_87;
    sub_86 = false;
  };
  if (controller_ck_17_1) {
    sub_85 = v_1621;
    sub_89 = sub_49;
  } else {
    sub_85 = sub_86;
    sub_89 = sub_51;
  };
  sub_88 = sub_89;
  if (controller_c_pc) {
    sub_84 = sub_85;
  } else {
    sub_84 = sub_88;
  };
  if (controller_v_408) {
    v_1618 = false;
    v_1617 = sub_20;
    sub_97 = false;
  } else {
    v_1618 = sub_22;
    v_1617 = false;
    sub_97 = sub_20;
  };
  if (controller_light_failed_recovered) {
    sub_96 = v_1617;
  } else {
    sub_96 = sub_97;
  };
  if (controller_v_408) {
    sub_98 = sub_20;
  } else {
    sub_98 = sub_22;
  };
  if (controller_light_failed_recovered) {
    v_1619 = sub_98;
  } else {
    v_1619 = v_1618;
  };
  if (controller_v_407) {
    sub_95 = v_1619;
  } else {
    sub_95 = sub_96;
  };
  sub_94 = sub_95;
  if (controller_cleaner) {
    v_1620 = false;
    sub_93 = sub_94;
  } else {
    v_1620 = sub_94;
    sub_93 = false;
  };
  if (controller_ck_17_1) {
    sub_92 = v_1620;
  } else {
    sub_92 = sub_93;
  };
  sub_91 = sub_92;
  sub_90 = sub_91;
  if (controller_change_shift) {
    v_1622 = sub_90;
    sub_83 = sub_84;
  } else {
    v_1622 = sub_84;
    sub_83 = sub_90;
  };
  if (controller_ck_1) {
    sub_82 = v_1622;
  } else {
    sub_82 = sub_83;
  };
  sub_81 = sub_82;
  if (controller_air_failed_recovered) {
    v_1624 = sub_81;
  } else {
    v_1624 = sub_68;
  };
  if (controller_c_air_2) {
    v_1625 = v_1624;
  } else {
    v_1625 = sub_67;
  };
  if (controller_c_air_1) {
    sub_65 = sub_66;
  } else {
    sub_65 = v_1625;
  };
  if (controller_v_408) {
    v_1609 = false;
  } else {
    v_1609 = sub_28;
  };
  if (controller_light_failed_recovered) {
    v_1610 = sub_32;
  } else {
    v_1610 = v_1609;
  };
  if (controller_v_408) {
    sub_107 = sub_26;
    sub_108 = false;
  } else {
    sub_107 = false;
    sub_108 = sub_26;
  };
  if (controller_light_failed_recovered) {
    sub_106 = sub_107;
  } else {
    sub_106 = sub_108;
  };
  if (controller_v_407) {
    v_1611 = v_1610;
  } else {
    v_1611 = sub_106;
  };
  if (controller_c_window) {
    sub_105 = v_1611;
  } else {
    sub_105 = sub_24;
  };
  if (controller_cleaner) {
    v_1612 = false;
    sub_104 = sub_105;
  } else {
    v_1612 = sub_105;
    sub_104 = false;
  };
  if (controller_ck_17_1) {
    sub_103 = v_1612;
  } else {
    sub_103 = sub_104;
  };
  sub_102 = sub_103;
  if (controller_c_pc) {
    sub_101 = sub_102;
  } else {
    sub_101 = sub_88;
  };
  sub_109 = sub_88;
  if (controller_change_shift) {
    v_1613 = sub_109;
    sub_100 = sub_101;
  } else {
    v_1613 = sub_101;
    sub_100 = sub_109;
  };
  if (controller_ck_1) {
    v_1614 = v_1613;
  } else {
    v_1614 = sub_100;
  };
  sub_113 = sub_50;
  sub_112 = sub_113;
  if (controller_c_pc) {
    sub_111 = sub_102;
    sub_114 = sub_88;
  } else {
    sub_111 = sub_112;
    sub_114 = sub_112;
  };
  if (controller_change_shift) {
    v_1615 = sub_114;
    sub_110 = sub_111;
  } else {
    v_1615 = sub_111;
    sub_110 = sub_114;
  };
  if (controller_ck_1) {
    v_1616 = v_1615;
  } else {
    v_1616 = sub_110;
  };
  if (controller_c_closet) {
    sub_99 = v_1614;
  } else {
    sub_99 = v_1616;
  };
  if (controller_air_failed_recovered) {
    v_1626 = sub_68;
  } else {
    v_1626 = sub_99;
  };
  if (controller_light_failed_recovered) {
    sub_124 = sub_108;
  } else {
    sub_124 = sub_107;
  };
  if (controller_v_408) {
    sub_125 = sub_28;
  } else {
    sub_125 = false;
  };
  if (controller_v_407) {
    sub_123 = sub_125;
  } else {
    sub_123 = sub_124;
  };
  if (controller_c_window) {
    sub_122 = sub_123;
  } else {
    sub_122 = sub_24;
  };
  if (controller_cleaner) {
    v_1607 = false;
    sub_121 = sub_122;
  } else {
    v_1607 = sub_122;
    sub_121 = false;
  };
  if (controller_ck_17_1) {
    sub_120 = v_1607;
  } else {
    sub_120 = sub_121;
  };
  if (controller_c_pc) {
    sub_119 = sub_120;
  } else {
    sub_119 = sub_88;
  };
  if (controller_change_shift) {
    v_1608 = sub_90;
    sub_118 = sub_119;
  } else {
    v_1608 = sub_119;
    sub_118 = sub_90;
  };
  if (controller_ck_1) {
    sub_117 = v_1608;
  } else {
    sub_117 = sub_118;
  };
  sub_116 = sub_117;
  if (controller_air_failed_recovered) {
    v_1629 = sub_68;
  } else {
    v_1629 = sub_116;
  };
  sub_115 = sub_116;
  if (controller_c_air_2) {
    v_1627 = v_1626;
  } else {
    v_1627 = sub_115;
  };
  sub_126 = sub_81;
  if (controller_c_air_2) {
    v_1630 = v_1629;
  } else {
    v_1630 = sub_126;
  };
  if (controller_c_air_1) {
    v_1628 = v_1627;
  } else {
    v_1628 = sub_126;
  };
  if (controller_v_445) {
    sub_64 = v_1628;
  } else {
    sub_64 = sub_65;
  };
  sub_127 = sub_115;
  if (controller_v_447) {
    sub_63 = sub_127;
  } else {
    sub_63 = sub_64;
  };
  if (controller_air_failed_recovered) {
    v_1604 = sub_116;
  } else {
    v_1604 = sub_68;
  };
  if (controller_c_air_2) {
    v_1605 = v_1604;
  } else {
    v_1605 = sub_67;
  };
  if (controller_c_air_1) {
    v_1606 = v_1605;
  } else {
    v_1606 = sub_66;
  };
  if (controller_air_failed_recovered) {
    v_1602 = sub_68;
  } else {
    v_1602 = sub_81;
  };
  if (controller_c_air_2) {
    v_1603 = v_1602;
  } else {
    v_1603 = sub_115;
  };
  sub_131 = sub_99;
  sub_130 = sub_131;
  if (controller_c_air_1) {
    v_1631 = v_1630;
    sub_129 = sub_130;
  } else {
    v_1631 = sub_130;
    sub_129 = v_1603;
  };
  if (controller_v_445) {
    sub_128 = v_1606;
  } else {
    sub_128 = sub_129;
  };
  if (controller_air_failed_recovered) {
    v_1600 = sub_99;
  } else {
    v_1600 = sub_68;
  };
  if (controller_c_air_2) {
    v_1601 = v_1600;
  } else {
    v_1601 = sub_67;
  };
  if (controller_c_air_1) {
    sub_132 = v_1601;
  } else {
    sub_132 = sub_66;
  };
  if (controller_v_445) {
    v_1632 = v_1631;
  } else {
    v_1632 = sub_132;
  };
  if (controller_v_447) {
    v_1633 = v_1632;
  } else {
    v_1633 = sub_128;
  };
  if (controller_v_446) {
    sub_62 = v_1633;
  } else {
    sub_62 = sub_63;
  };
  sub_61 = sub_62;
  sub_60 = sub_61;
  if (controller_worker) {
    v_1670 = sub_60;
    sub_2 = sub_3;
  } else {
    v_1670 = sub_3;
    sub_2 = sub_60;
  };
  if (controller_ck_15_1) {
    sub_1 = v_1670;
  } else {
    sub_1 = sub_2;
  };
  if (controller_c_window) {
    sub_148 = sub_19;
  } else {
    sub_148 = sub_25;
  };
  if (controller_cleaner) {
    v_1587 = sub_148;
    sub_147 = false;
  } else {
    v_1587 = false;
    sub_147 = sub_148;
  };
  if (controller_ck_17_1) {
    sub_146 = v_1587;
  } else {
    sub_146 = sub_147;
  };
  if (controller_c_door) {
    v_1590 = false;
    v_1588 = sub_146;
  } else {
    v_1590 = sub_146;
    v_1588 = false;
  };
  if (controller_c_window) {
    sub_151 = sub_25;
  } else {
    sub_151 = false;
  };
  if (controller_cleaner) {
    v_1586 = sub_148;
    sub_150 = sub_151;
  } else {
    v_1586 = sub_151;
    sub_150 = sub_148;
  };
  if (controller_ck_17_1) {
    sub_149 = v_1586;
  } else {
    sub_149 = sub_150;
  };
  if (controller_cleaner) {
    v_1585 = false;
    sub_153 = sub_151;
  } else {
    v_1585 = sub_151;
    sub_153 = false;
  };
  if (controller_ck_17_1) {
    sub_152 = v_1585;
  } else {
    sub_152 = sub_153;
  };
  if (controller_c_door) {
    v_1591 = sub_152;
  } else {
    v_1591 = sub_149;
  };
  if (controller_c_pc) {
    v_1592 = v_1590;
  } else {
    v_1592 = v_1591;
  };
  if (controller_c_door) {
    v_1589 = sub_149;
  } else {
    v_1589 = sub_152;
  };
  if (controller_c_pc) {
    sub_145 = v_1588;
  } else {
    sub_145 = v_1589;
  };
  if (controller_ck_11_1) {
    sub_144 = v_1592;
  } else {
    sub_144 = sub_145;
  };
  if (controller_c_window) {
    sub_159 = false;
  } else {
    sub_159 = sub_25;
  };
  if (controller_cleaner) {
    sub_158 = false;
    sub_160 = sub_159;
  } else {
    sub_158 = sub_159;
    sub_160 = false;
  };
  if (controller_ck_17_1) {
    sub_157 = sub_160;
  } else {
    sub_157 = sub_158;
  };
  if (controller_c_door) {
    sub_156 = sub_157;
  } else {
    sub_156 = false;
  };
  if (controller_cleaner) {
    v_1581 = sub_159;
    sub_162 = sub_151;
  } else {
    v_1581 = sub_151;
    sub_162 = sub_159;
  };
  if (controller_ck_17_1) {
    sub_161 = v_1581;
  } else {
    sub_161 = sub_162;
  };
  if (controller_c_door) {
    v_1583 = sub_152;
    v_1582 = sub_161;
  } else {
    v_1583 = sub_161;
    v_1582 = sub_152;
  };
  if (controller_c_pc) {
    sub_155 = sub_156;
  } else {
    sub_155 = v_1582;
  };
  if (controller_c_door) {
    sub_163 = false;
  } else {
    sub_163 = sub_157;
  };
  if (controller_c_pc) {
    v_1584 = sub_163;
  } else {
    v_1584 = v_1583;
  };
  if (controller_ck_11_1) {
    sub_154 = v_1584;
  } else {
    sub_154 = sub_155;
  };
  if (controller_change_shift) {
    v_1593 = sub_154;
    sub_143 = sub_144;
  } else {
    v_1593 = sub_144;
    sub_143 = sub_154;
  };
  if (controller_ck_1) {
    sub_142 = v_1593;
  } else {
    sub_142 = sub_143;
  };
  sub_141 = sub_142;
  sub_140 = sub_141;
  sub_139 = sub_140;
  if (controller_c_pc) {
    sub_167 = false;
  } else {
    sub_167 = sub_152;
  };
  sub_166 = sub_167;
  sub_165 = sub_166;
  if (controller_air_failed_recovered) {
    v_1580 = sub_165;
  } else {
    v_1580 = sub_141;
  };
  if (controller_c_air_2) {
    sub_164 = v_1580;
  } else {
    sub_164 = sub_140;
  };
  if (controller_c_air_1) {
    sub_138 = sub_139;
  } else {
    sub_138 = sub_164;
  };
  sub_172 = sub_25;
  if (controller_cleaner) {
    sub_171 = false;
    sub_173 = sub_172;
  } else {
    sub_171 = sub_172;
    sub_173 = false;
  };
  if (controller_ck_17_1) {
    sub_170 = sub_173;
  } else {
    sub_170 = sub_171;
  };
  if (controller_c_pc) {
    sub_169 = false;
  } else {
    sub_169 = sub_170;
  };
  if (controller_c_closet) {
    sub_168 = false;
  } else {
    sub_168 = sub_169;
  };
  if (controller_air_failed_recovered) {
    v_1594 = sub_141;
  } else {
    v_1594 = sub_168;
  };
  sub_174 = sub_165;
  if (controller_c_air_2) {
    v_1595 = v_1594;
  } else {
    v_1595 = sub_174;
  };
  sub_175 = sub_174;
  if (controller_c_air_1) {
    v_1596 = v_1595;
  } else {
    v_1596 = sub_175;
  };
  if (controller_v_445) {
    sub_137 = v_1596;
  } else {
    sub_137 = sub_138;
  };
  if (controller_v_447) {
    sub_136 = sub_175;
  } else {
    sub_136 = sub_137;
  };
  if (controller_c_air_1) {
    v_1579 = sub_164;
  } else {
    v_1579 = sub_139;
  };
  sub_179 = sub_168;
  sub_178 = sub_179;
  if (controller_air_failed_recovered) {
    v_1578 = sub_141;
  } else {
    v_1578 = sub_165;
  };
  if (controller_c_air_2) {
    sub_180 = v_1578;
  } else {
    sub_180 = sub_174;
  };
  if (controller_c_air_1) {
    v_1597 = sub_180;
    sub_177 = sub_178;
  } else {
    v_1597 = sub_178;
    sub_177 = sub_180;
  };
  if (controller_v_445) {
    sub_176 = v_1579;
  } else {
    sub_176 = sub_177;
  };
  if (controller_air_failed_recovered) {
    v_1576 = sub_168;
  } else {
    v_1576 = sub_141;
  };
  if (controller_c_air_2) {
    v_1577 = v_1576;
  } else {
    v_1577 = sub_140;
  };
  if (controller_c_air_1) {
    sub_181 = v_1577;
  } else {
    sub_181 = sub_139;
  };
  if (controller_v_445) {
    v_1598 = v_1597;
  } else {
    v_1598 = sub_181;
  };
  if (controller_v_447) {
    v_1599 = v_1598;
  } else {
    v_1599 = sub_176;
  };
  if (controller_v_446) {
    sub_135 = v_1599;
  } else {
    sub_135 = sub_136;
  };
  if (controller_v_408) {
    v_1560 = sub_22;
  } else {
    v_1560 = sub_20;
  };
  if (controller_light_failed_recovered) {
    v_1561 = sub_98;
  } else {
    v_1561 = v_1560;
  };
  if (controller_v_407) {
    v_1562 = v_1561;
  } else {
    v_1562 = sub_19;
  };
  if (controller_v_408) {
    v_1559 = sub_28;
  } else {
    v_1559 = sub_26;
  };
  if (controller_light_failed_recovered) {
    sub_197 = sub_32;
  } else {
    sub_197 = v_1559;
  };
  if (controller_v_407) {
    sub_196 = sub_197;
  } else {
    sub_196 = sub_25;
  };
  if (controller_c_window) {
    sub_195 = v_1562;
  } else {
    sub_195 = sub_196;
  };
  if (controller_cleaner) {
    v_1563 = sub_195;
    sub_194 = false;
  } else {
    v_1563 = false;
    sub_194 = sub_195;
  };
  if (controller_ck_17_1) {
    sub_193 = v_1563;
  } else {
    sub_193 = sub_194;
  };
  if (controller_c_door) {
    v_1566 = false;
    v_1564 = sub_193;
  } else {
    v_1566 = sub_193;
    v_1564 = false;
  };
  if (controller_v_407) {
    v_1557 = sub_25;
  } else {
    v_1557 = sub_197;
  };
  if (controller_c_window) {
    sub_200 = v_1557;
  } else {
    sub_200 = false;
  };
  if (controller_cleaner) {
    v_1558 = sub_195;
    sub_199 = sub_200;
  } else {
    v_1558 = sub_200;
    sub_199 = sub_195;
  };
  if (controller_ck_17_1) {
    sub_198 = v_1558;
  } else {
    sub_198 = sub_199;
  };
  if (controller_cleaner) {
    v_1556 = false;
    sub_202 = sub_200;
  } else {
    v_1556 = sub_200;
    sub_202 = false;
  };
  if (controller_ck_17_1) {
    sub_201 = v_1556;
  } else {
    sub_201 = sub_202;
  };
  if (controller_c_door) {
    v_1567 = sub_201;
  } else {
    v_1567 = sub_198;
  };
  if (controller_c_pc) {
    v_1568 = v_1566;
  } else {
    v_1568 = v_1567;
  };
  if (controller_c_door) {
    v_1565 = sub_198;
  } else {
    v_1565 = sub_201;
  };
  if (controller_c_pc) {
    sub_192 = v_1564;
  } else {
    sub_192 = v_1565;
  };
  if (controller_ck_11_1) {
    sub_191 = v_1568;
  } else {
    sub_191 = sub_192;
  };
  if (controller_cleaner) {
    v_1552 = sub_159;
    sub_206 = sub_200;
  } else {
    v_1552 = sub_200;
    sub_206 = sub_159;
  };
  if (controller_ck_17_1) {
    sub_205 = v_1552;
  } else {
    sub_205 = sub_206;
  };
  if (controller_c_door) {
    v_1554 = sub_201;
  } else {
    v_1554 = sub_205;
  };
  if (controller_c_pc) {
    v_1555 = sub_163;
  } else {
    v_1555 = v_1554;
  };
  if (controller_c_door) {
    v_1553 = sub_205;
  } else {
    v_1553 = sub_201;
  };
  if (controller_c_pc) {
    sub_204 = sub_156;
  } else {
    sub_204 = v_1553;
  };
  if (controller_ck_11_1) {
    sub_203 = v_1555;
  } else {
    sub_203 = sub_204;
  };
  if (controller_change_shift) {
    v_1569 = sub_203;
    sub_190 = sub_191;
  } else {
    v_1569 = sub_191;
    sub_190 = sub_203;
  };
  if (controller_ck_1) {
    sub_189 = v_1569;
  } else {
    sub_189 = sub_190;
  };
  sub_188 = sub_189;
  sub_187 = sub_188;
  sub_186 = sub_187;
  if (controller_c_pc) {
    sub_210 = false;
  } else {
    sub_210 = sub_201;
  };
  sub_209 = sub_210;
  sub_208 = sub_209;
  if (controller_air_failed_recovered) {
    v_1551 = sub_208;
  } else {
    v_1551 = sub_188;
  };
  if (controller_c_air_2) {
    sub_207 = v_1551;
  } else {
    sub_207 = sub_187;
  };
  if (controller_c_air_1) {
    sub_185 = sub_186;
  } else {
    sub_185 = sub_207;
  };
  sub_215 = sub_196;
  if (controller_cleaner) {
    sub_214 = false;
    sub_216 = sub_215;
  } else {
    sub_214 = sub_215;
    sub_216 = false;
  };
  if (controller_ck_17_1) {
    sub_213 = sub_216;
  } else {
    sub_213 = sub_214;
  };
  if (controller_c_pc) {
    sub_212 = false;
  } else {
    sub_212 = sub_213;
  };
  if (controller_c_closet) {
    sub_211 = false;
  } else {
    sub_211 = sub_212;
  };
  if (controller_air_failed_recovered) {
    v_1570 = sub_188;
  } else {
    v_1570 = sub_211;
  };
  sub_217 = sub_208;
  if (controller_c_air_2) {
    v_1571 = v_1570;
  } else {
    v_1571 = sub_217;
  };
  sub_218 = sub_217;
  if (controller_c_air_1) {
    v_1572 = v_1571;
  } else {
    v_1572 = sub_218;
  };
  if (controller_v_445) {
    sub_184 = v_1572;
  } else {
    sub_184 = sub_185;
  };
  if (controller_v_447) {
    sub_183 = sub_218;
  } else {
    sub_183 = sub_184;
  };
  if (controller_c_air_1) {
    v_1550 = sub_207;
  } else {
    v_1550 = sub_186;
  };
  sub_222 = sub_211;
  sub_221 = sub_222;
  if (controller_air_failed_recovered) {
    v_1549 = sub_188;
  } else {
    v_1549 = sub_208;
  };
  if (controller_c_air_2) {
    sub_223 = v_1549;
  } else {
    sub_223 = sub_217;
  };
  if (controller_c_air_1) {
    v_1573 = sub_223;
    sub_220 = sub_221;
  } else {
    v_1573 = sub_221;
    sub_220 = sub_223;
  };
  if (controller_v_445) {
    sub_219 = v_1550;
  } else {
    sub_219 = sub_220;
  };
  if (controller_air_failed_recovered) {
    v_1547 = sub_211;
  } else {
    v_1547 = sub_188;
  };
  if (controller_c_air_2) {
    v_1548 = v_1547;
  } else {
    v_1548 = sub_187;
  };
  if (controller_c_air_1) {
    sub_224 = v_1548;
  } else {
    sub_224 = sub_186;
  };
  if (controller_v_445) {
    v_1574 = v_1573;
  } else {
    v_1574 = sub_224;
  };
  if (controller_v_447) {
    v_1575 = v_1574;
  } else {
    v_1575 = sub_219;
  };
  if (controller_v_446) {
    sub_182 = v_1575;
  } else {
    sub_182 = sub_183;
  };
  if (controller_light_switch) {
    sub_134 = sub_135;
  } else {
    sub_134 = sub_182;
  };
  sub_238 = sub_148;
  if (controller_c_door) {
    sub_237 = sub_238;
  } else {
    sub_237 = false;
  };
  sub_236 = sub_237;
  if (controller_c_door) {
    sub_239 = false;
  } else {
    sub_239 = sub_238;
  };
  if (controller_ck_11_1) {
    sub_235 = sub_239;
  } else {
    sub_235 = sub_236;
  };
  sub_243 = sub_159;
  if (controller_c_door) {
    sub_242 = sub_243;
  } else {
    sub_242 = false;
  };
  sub_241 = sub_242;
  if (controller_c_door) {
    sub_244 = false;
  } else {
    sub_244 = sub_243;
  };
  if (controller_ck_11_1) {
    sub_240 = sub_244;
  } else {
    sub_240 = sub_241;
  };
  if (controller_change_shift) {
    v_1536 = sub_240;
    sub_234 = sub_235;
  } else {
    v_1536 = sub_235;
    sub_234 = sub_240;
  };
  if (controller_ck_1) {
    sub_233 = v_1536;
  } else {
    sub_233 = sub_234;
  };
  sub_232 = sub_233;
  sub_231 = sub_232;
  sub_230 = sub_231;
  if (controller_ck_17_1) {
    sub_249 = sub_158;
    sub_251 = sub_171;
  } else {
    sub_249 = sub_160;
    sub_251 = sub_173;
  };
  sub_250 = sub_251;
  if (controller_c_pc) {
    sub_248 = sub_249;
  } else {
    sub_248 = sub_250;
  };
  if (controller_light_failed_recovered) {
    v_1533 = sub_20;
  } else {
    v_1533 = sub_97;
  };
  if (controller_v_407) {
    sub_257 = v_1533;
  } else {
    sub_257 = sub_96;
  };
  sub_256 = sub_257;
  if (controller_cleaner) {
    v_1534 = false;
    sub_255 = sub_256;
  } else {
    v_1534 = sub_256;
    sub_255 = false;
  };
  if (controller_ck_17_1) {
    sub_254 = v_1534;
  } else {
    sub_254 = sub_255;
  };
  sub_253 = sub_254;
  sub_252 = sub_253;
  if (controller_change_shift) {
    v_1535 = sub_252;
    sub_247 = sub_248;
  } else {
    v_1535 = sub_248;
    sub_247 = sub_252;
  };
  if (controller_ck_1) {
    sub_246 = v_1535;
  } else {
    sub_246 = sub_247;
  };
  sub_245 = sub_246;
  if (controller_air_failed_recovered) {
    v_1537 = sub_245;
  } else {
    v_1537 = sub_232;
  };
  if (controller_c_air_2) {
    v_1538 = v_1537;
  } else {
    v_1538 = sub_231;
  };
  if (controller_c_air_1) {
    sub_229 = sub_230;
  } else {
    sub_229 = v_1538;
  };
  if (controller_light_failed_recovered) {
    v_1526 = sub_26;
  } else {
    v_1526 = sub_108;
  };
  if (controller_v_407) {
    v_1527 = v_1526;
  } else {
    v_1527 = sub_106;
  };
  if (controller_c_window) {
    sub_264 = v_1527;
  } else {
    sub_264 = sub_25;
  };
  if (controller_cleaner) {
    v_1528 = false;
    sub_263 = sub_264;
  } else {
    v_1528 = sub_264;
    sub_263 = false;
  };
  if (controller_ck_17_1) {
    sub_262 = v_1528;
  } else {
    sub_262 = sub_263;
  };
  sub_261 = sub_262;
  if (controller_c_pc) {
    sub_260 = sub_261;
  } else {
    sub_260 = sub_250;
  };
  sub_265 = sub_250;
  if (controller_change_shift) {
    v_1529 = sub_265;
    sub_259 = sub_260;
  } else {
    v_1529 = sub_260;
    sub_259 = sub_265;
  };
  if (controller_ck_1) {
    v_1530 = v_1529;
  } else {
    v_1530 = sub_259;
  };
  sub_269 = sub_172;
  sub_268 = sub_269;
  if (controller_c_pc) {
    sub_267 = sub_261;
    sub_270 = sub_250;
  } else {
    sub_267 = sub_268;
    sub_270 = sub_268;
  };
  if (controller_change_shift) {
    v_1531 = sub_270;
    sub_266 = sub_267;
  } else {
    v_1531 = sub_267;
    sub_266 = sub_270;
  };
  if (controller_ck_1) {
    v_1532 = v_1531;
  } else {
    v_1532 = sub_266;
  };
  if (controller_c_closet) {
    sub_258 = v_1530;
  } else {
    sub_258 = v_1532;
  };
  if (controller_air_failed_recovered) {
    v_1539 = sub_232;
  } else {
    v_1539 = sub_258;
  };
  if (controller_v_407) {
    v_1523 = sub_107;
  } else {
    v_1523 = sub_124;
  };
  if (controller_c_window) {
    sub_278 = v_1523;
  } else {
    sub_278 = sub_25;
  };
  if (controller_cleaner) {
    v_1524 = false;
    sub_277 = sub_278;
  } else {
    v_1524 = sub_278;
    sub_277 = false;
  };
  if (controller_ck_17_1) {
    sub_276 = v_1524;
  } else {
    sub_276 = sub_277;
  };
  if (controller_c_pc) {
    sub_275 = sub_276;
  } else {
    sub_275 = sub_250;
  };
  if (controller_change_shift) {
    v_1525 = sub_252;
    sub_274 = sub_275;
  } else {
    v_1525 = sub_275;
    sub_274 = sub_252;
  };
  if (controller_ck_1) {
    sub_273 = v_1525;
  } else {
    sub_273 = sub_274;
  };
  sub_272 = sub_273;
  if (controller_air_failed_recovered) {
    v_1542 = sub_232;
  } else {
    v_1542 = sub_272;
  };
  sub_271 = sub_272;
  if (controller_c_air_2) {
    v_1540 = v_1539;
  } else {
    v_1540 = sub_271;
  };
  sub_279 = sub_245;
  if (controller_c_air_2) {
    v_1543 = v_1542;
  } else {
    v_1543 = sub_279;
  };
  if (controller_c_air_1) {
    v_1541 = v_1540;
  } else {
    v_1541 = sub_279;
  };
  if (controller_v_445) {
    sub_228 = v_1541;
  } else {
    sub_228 = sub_229;
  };
  sub_280 = sub_271;
  if (controller_v_447) {
    sub_227 = sub_280;
  } else {
    sub_227 = sub_228;
  };
  if (controller_air_failed_recovered) {
    v_1520 = sub_272;
  } else {
    v_1520 = sub_232;
  };
  if (controller_c_air_2) {
    v_1521 = v_1520;
  } else {
    v_1521 = sub_231;
  };
  if (controller_c_air_1) {
    v_1522 = v_1521;
  } else {
    v_1522 = sub_230;
  };
  if (controller_air_failed_recovered) {
    v_1518 = sub_232;
  } else {
    v_1518 = sub_245;
  };
  if (controller_c_air_2) {
    v_1519 = v_1518;
  } else {
    v_1519 = sub_271;
  };
  sub_284 = sub_258;
  sub_283 = sub_284;
  if (controller_c_air_1) {
    v_1544 = v_1543;
    sub_282 = sub_283;
  } else {
    v_1544 = sub_283;
    sub_282 = v_1519;
  };
  if (controller_v_445) {
    sub_281 = v_1522;
  } else {
    sub_281 = sub_282;
  };
  if (controller_air_failed_recovered) {
    v_1516 = sub_258;
  } else {
    v_1516 = sub_232;
  };
  if (controller_c_air_2) {
    v_1517 = v_1516;
  } else {
    v_1517 = sub_231;
  };
  if (controller_c_air_1) {
    sub_285 = v_1517;
  } else {
    sub_285 = sub_230;
  };
  if (controller_v_445) {
    v_1545 = v_1544;
  } else {
    v_1545 = sub_285;
  };
  if (controller_v_447) {
    v_1546 = v_1545;
  } else {
    v_1546 = sub_281;
  };
  if (controller_v_446) {
    sub_226 = v_1546;
  } else {
    sub_226 = sub_227;
  };
  sub_298 = sub_195;
  if (controller_c_door) {
    sub_297 = sub_298;
  } else {
    sub_297 = false;
  };
  sub_296 = sub_297;
  if (controller_c_door) {
    sub_299 = false;
  } else {
    sub_299 = sub_298;
  };
  if (controller_ck_11_1) {
    sub_295 = sub_299;
  } else {
    sub_295 = sub_296;
  };
  if (controller_change_shift) {
    v_1505 = sub_240;
    sub_294 = sub_295;
  } else {
    v_1505 = sub_295;
    sub_294 = sub_240;
  };
  if (controller_ck_1) {
    sub_293 = v_1505;
  } else {
    sub_293 = sub_294;
  };
  sub_292 = sub_293;
  sub_291 = sub_292;
  sub_290 = sub_291;
  if (controller_c_window) {
    sub_306 = false;
  } else {
    sub_306 = sub_196;
  };
  if (controller_cleaner) {
    v_1503 = false;
    sub_305 = sub_306;
  } else {
    v_1503 = sub_306;
    sub_305 = false;
  };
  if (controller_ck_17_1) {
    sub_304 = v_1503;
    sub_308 = sub_214;
  } else {
    sub_304 = sub_305;
    sub_308 = sub_216;
  };
  sub_307 = sub_308;
  if (controller_c_pc) {
    sub_303 = sub_304;
  } else {
    sub_303 = sub_307;
  };
  if (controller_light_failed_recovered) {
    v_1501 = sub_98;
  } else {
    v_1501 = sub_97;
  };
  if (controller_v_407) {
    sub_314 = v_1501;
  } else {
    sub_314 = sub_96;
  };
  sub_313 = sub_314;
  if (controller_cleaner) {
    v_1502 = false;
    sub_312 = sub_313;
  } else {
    v_1502 = sub_313;
    sub_312 = false;
  };
  if (controller_ck_17_1) {
    sub_311 = v_1502;
  } else {
    sub_311 = sub_312;
  };
  sub_310 = sub_311;
  sub_309 = sub_310;
  if (controller_change_shift) {
    v_1504 = sub_309;
    sub_302 = sub_303;
  } else {
    v_1504 = sub_303;
    sub_302 = sub_309;
  };
  if (controller_ck_1) {
    sub_301 = v_1504;
  } else {
    sub_301 = sub_302;
  };
  sub_300 = sub_301;
  if (controller_air_failed_recovered) {
    v_1506 = sub_300;
  } else {
    v_1506 = sub_292;
  };
  if (controller_c_air_2) {
    v_1507 = v_1506;
  } else {
    v_1507 = sub_291;
  };
  if (controller_c_air_1) {
    sub_289 = sub_290;
  } else {
    sub_289 = v_1507;
  };
  if (controller_light_failed_recovered) {
    v_1494 = sub_32;
  } else {
    v_1494 = sub_108;
  };
  if (controller_v_407) {
    v_1495 = v_1494;
  } else {
    v_1495 = sub_106;
  };
  if (controller_c_window) {
    sub_321 = v_1495;
  } else {
    sub_321 = sub_196;
  };
  if (controller_cleaner) {
    v_1496 = false;
    sub_320 = sub_321;
  } else {
    v_1496 = sub_321;
    sub_320 = false;
  };
  if (controller_ck_17_1) {
    sub_319 = v_1496;
  } else {
    sub_319 = sub_320;
  };
  sub_318 = sub_319;
  if (controller_c_pc) {
    sub_317 = sub_318;
  } else {
    sub_317 = sub_307;
  };
  sub_322 = sub_307;
  if (controller_change_shift) {
    v_1497 = sub_322;
    sub_316 = sub_317;
  } else {
    v_1497 = sub_317;
    sub_316 = sub_322;
  };
  if (controller_ck_1) {
    v_1498 = v_1497;
  } else {
    v_1498 = sub_316;
  };
  sub_326 = sub_215;
  sub_325 = sub_326;
  if (controller_c_pc) {
    sub_324 = sub_318;
    sub_327 = sub_307;
  } else {
    sub_324 = sub_325;
    sub_327 = sub_325;
  };
  if (controller_change_shift) {
    v_1499 = sub_327;
    sub_323 = sub_324;
  } else {
    v_1499 = sub_324;
    sub_323 = sub_327;
  };
  if (controller_ck_1) {
    v_1500 = v_1499;
  } else {
    v_1500 = sub_323;
  };
  if (controller_c_closet) {
    sub_315 = v_1498;
  } else {
    sub_315 = v_1500;
  };
  if (controller_air_failed_recovered) {
    v_1508 = sub_292;
  } else {
    v_1508 = sub_315;
  };
  if (controller_c_window) {
    sub_335 = sub_123;
  } else {
    sub_335 = sub_196;
  };
  if (controller_cleaner) {
    v_1492 = false;
    sub_334 = sub_335;
  } else {
    v_1492 = sub_335;
    sub_334 = false;
  };
  if (controller_ck_17_1) {
    sub_333 = v_1492;
  } else {
    sub_333 = sub_334;
  };
  if (controller_c_pc) {
    sub_332 = sub_333;
  } else {
    sub_332 = sub_307;
  };
  if (controller_change_shift) {
    v_1493 = sub_309;
    sub_331 = sub_332;
  } else {
    v_1493 = sub_332;
    sub_331 = sub_309;
  };
  if (controller_ck_1) {
    sub_330 = v_1493;
  } else {
    sub_330 = sub_331;
  };
  sub_329 = sub_330;
  if (controller_air_failed_recovered) {
    v_1511 = sub_292;
  } else {
    v_1511 = sub_329;
  };
  sub_328 = sub_329;
  if (controller_c_air_2) {
    v_1509 = v_1508;
  } else {
    v_1509 = sub_328;
  };
  sub_336 = sub_300;
  if (controller_c_air_2) {
    v_1512 = v_1511;
  } else {
    v_1512 = sub_336;
  };
  if (controller_c_air_1) {
    v_1510 = v_1509;
  } else {
    v_1510 = sub_336;
  };
  if (controller_v_445) {
    sub_288 = v_1510;
  } else {
    sub_288 = sub_289;
  };
  sub_337 = sub_328;
  if (controller_v_447) {
    sub_287 = sub_337;
  } else {
    sub_287 = sub_288;
  };
  if (controller_air_failed_recovered) {
    v_1489 = sub_329;
  } else {
    v_1489 = sub_292;
  };
  if (controller_c_air_2) {
    v_1490 = v_1489;
  } else {
    v_1490 = sub_291;
  };
  if (controller_c_air_1) {
    v_1491 = v_1490;
  } else {
    v_1491 = sub_290;
  };
  if (controller_air_failed_recovered) {
    v_1487 = sub_292;
  } else {
    v_1487 = sub_300;
  };
  if (controller_c_air_2) {
    v_1488 = v_1487;
  } else {
    v_1488 = sub_328;
  };
  sub_341 = sub_315;
  sub_340 = sub_341;
  if (controller_c_air_1) {
    v_1513 = v_1512;
    sub_339 = sub_340;
  } else {
    v_1513 = sub_340;
    sub_339 = v_1488;
  };
  if (controller_v_445) {
    sub_338 = v_1491;
  } else {
    sub_338 = sub_339;
  };
  if (controller_air_failed_recovered) {
    v = sub_315;
  } else {
    v = sub_292;
  };
  if (controller_c_air_2) {
    v_1486 = v;
  } else {
    v_1486 = sub_291;
  };
  if (controller_c_air_1) {
    sub_342 = v_1486;
  } else {
    sub_342 = sub_290;
  };
  if (controller_v_445) {
    v_1514 = v_1513;
  } else {
    v_1514 = sub_342;
  };
  if (controller_v_447) {
    v_1515 = v_1514;
  } else {
    v_1515 = sub_338;
  };
  if (controller_v_446) {
    sub_286 = v_1515;
  } else {
    sub_286 = sub_287;
  };
  if (controller_light_switch) {
    sub_225 = sub_226;
  } else {
    sub_225 = sub_286;
  };
  if (controller_worker) {
    v_1671 = sub_225;
    sub_133 = sub_134;
  } else {
    v_1671 = sub_134;
    sub_133 = sub_225;
  };
  if (controller_ck_15_1) {
    v_1672 = v_1671;
  } else {
    v_1672 = sub_133;
  };
  if (p_controller_c_light_1) {
    sub_0 = v_1672;
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
  int v_1678;
  int v_1677;
  int v_1676;
  int v_1675;
  int v_1674;
  int v_1673;
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
  v_1777 = (controller_v_392&&false);
  v_1775 = !(controller_v_391);
  v_1774 = !(controller_v_392);
  sub_19 = (v_1774&&false);
  v_1776 = (v_1775&&sub_19);
  if (controller_blind_failed_recovered) {
    sub_18 = v_1776;
  } else {
    sub_18 = v_1777;
  };
  sub_21 = false;
  sub_20 = sub_21;
  if (controller_c_window) {
    sub_17 = sub_18;
  } else {
    sub_17 = sub_20;
  };
  if (controller_cleaner) {
    v_1778 = sub_17;
    sub_16 = false;
  } else {
    v_1778 = false;
    sub_16 = sub_17;
  };
  if (controller_ck_17_1) {
    sub_15 = v_1778;
  } else {
    sub_15 = sub_16;
  };
  if (controller_c_door) {
    v_1781 = false;
    v_1779 = sub_15;
  } else {
    v_1781 = sub_15;
    v_1779 = false;
  };
  if (controller_c_window) {
    sub_24 = sub_20;
  } else {
    sub_24 = false;
  };
  if (controller_cleaner) {
    v_1773 = sub_17;
    sub_23 = sub_24;
  } else {
    v_1773 = sub_24;
    sub_23 = sub_17;
  };
  if (controller_ck_17_1) {
    sub_22 = v_1773;
  } else {
    sub_22 = sub_23;
  };
  if (controller_cleaner) {
    v_1772 = false;
    sub_26 = sub_24;
  } else {
    v_1772 = sub_24;
    sub_26 = false;
  };
  if (controller_ck_17_1) {
    sub_25 = v_1772;
  } else {
    sub_25 = sub_26;
  };
  if (controller_c_door) {
    v_1782 = sub_25;
  } else {
    v_1782 = sub_22;
  };
  if (controller_c_pc) {
    v_1783 = v_1781;
  } else {
    v_1783 = v_1782;
  };
  if (controller_c_door) {
    v_1780 = sub_22;
  } else {
    v_1780 = sub_25;
  };
  if (controller_c_pc) {
    sub_14 = v_1779;
  } else {
    sub_14 = v_1780;
  };
  if (controller_ck_11_1) {
    sub_13 = v_1783;
  } else {
    sub_13 = sub_14;
  };
  if (controller_c_window) {
    sub_31 = false;
  } else {
    sub_31 = sub_20;
  };
  if (controller_cleaner) {
    sub_30 = false;
    sub_32 = sub_31;
  } else {
    sub_30 = sub_31;
    sub_32 = false;
  };
  if (controller_ck_17_1) {
    sub_29 = sub_32;
  } else {
    sub_29 = sub_30;
  };
  if (controller_c_door) {
    v_1769 = false;
    v_1767 = sub_29;
  } else {
    v_1769 = sub_29;
    v_1767 = false;
  };
  if (controller_cleaner) {
    v_1766 = sub_31;
    sub_34 = sub_24;
  } else {
    v_1766 = sub_24;
    sub_34 = sub_31;
  };
  if (controller_ck_17_1) {
    sub_33 = v_1766;
  } else {
    sub_33 = sub_34;
  };
  if (controller_c_door) {
    v_1770 = sub_25;
  } else {
    v_1770 = sub_33;
  };
  if (controller_c_pc) {
    v_1771 = v_1769;
  } else {
    v_1771 = v_1770;
  };
  if (controller_c_door) {
    v_1768 = sub_33;
  } else {
    v_1768 = sub_25;
  };
  if (controller_c_pc) {
    sub_28 = v_1767;
  } else {
    sub_28 = v_1768;
  };
  if (controller_ck_11_1) {
    sub_27 = v_1771;
  } else {
    sub_27 = sub_28;
  };
  if (controller_change_shift) {
    v_1784 = sub_27;
    sub_12 = sub_13;
  } else {
    v_1784 = sub_13;
    sub_12 = sub_27;
  };
  if (controller_ck_1) {
    sub_11 = v_1784;
  } else {
    sub_11 = sub_12;
  };
  sub_10 = sub_11;
  sub_9 = sub_10;
  if (controller_c_pc) {
    sub_37 = false;
  } else {
    sub_37 = sub_25;
  };
  sub_36 = sub_37;
  if (controller_air_failed_recovered) {
    v_1765 = sub_36;
  } else {
    v_1765 = sub_11;
  };
  if (controller_c_air_2) {
    sub_35 = v_1765;
  } else {
    sub_35 = sub_10;
  };
  if (controller_c_air_1) {
    sub_8 = sub_9;
  } else {
    sub_8 = sub_35;
  };
  sub_42 = sub_20;
  if (controller_cleaner) {
    sub_41 = false;
    sub_43 = sub_42;
  } else {
    sub_41 = sub_42;
    sub_43 = false;
  };
  if (controller_ck_17_1) {
    sub_40 = sub_43;
  } else {
    sub_40 = sub_41;
  };
  if (controller_c_pc) {
    sub_39 = false;
  } else {
    sub_39 = sub_40;
  };
  sub_38 = sub_39;
  if (controller_air_failed_recovered) {
    v_1785 = sub_11;
  } else {
    v_1785 = sub_38;
  };
  sub_44 = sub_36;
  if (controller_c_air_2) {
    v_1786 = v_1785;
  } else {
    v_1786 = sub_44;
  };
  sub_45 = sub_44;
  if (controller_c_air_1) {
    v_1787 = v_1786;
  } else {
    v_1787 = sub_45;
  };
  if (controller_v_445) {
    sub_7 = v_1787;
  } else {
    sub_7 = sub_8;
  };
  if (controller_v_447) {
    sub_6 = sub_45;
  } else {
    sub_6 = sub_7;
  };
  if (controller_c_air_1) {
    v_1764 = sub_35;
  } else {
    v_1764 = sub_9;
  };
  sub_49 = sub_38;
  sub_48 = sub_49;
  if (controller_air_failed_recovered) {
    v_1763 = sub_11;
  } else {
    v_1763 = sub_36;
  };
  if (controller_c_air_2) {
    sub_50 = v_1763;
  } else {
    sub_50 = sub_44;
  };
  if (controller_c_air_1) {
    v_1788 = sub_50;
    sub_47 = sub_48;
  } else {
    v_1788 = sub_48;
    sub_47 = sub_50;
  };
  if (controller_v_445) {
    sub_46 = v_1764;
  } else {
    sub_46 = sub_47;
  };
  if (controller_air_failed_recovered) {
    v_1761 = sub_38;
  } else {
    v_1761 = sub_11;
  };
  if (controller_c_air_2) {
    v_1762 = v_1761;
  } else {
    v_1762 = sub_10;
  };
  if (controller_c_air_1) {
    sub_51 = v_1762;
  } else {
    sub_51 = sub_9;
  };
  if (controller_v_445) {
    v_1789 = v_1788;
  } else {
    v_1789 = sub_51;
  };
  if (controller_v_447) {
    v_1790 = v_1789;
  } else {
    v_1790 = sub_46;
  };
  if (controller_v_446) {
    sub_5 = v_1790;
  } else {
    sub_5 = sub_6;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_65 = sub_17;
  if (controller_c_door) {
    sub_64 = sub_65;
  } else {
    sub_64 = false;
  };
  sub_63 = sub_64;
  if (controller_c_door) {
    sub_66 = false;
  } else {
    sub_66 = sub_65;
  };
  if (controller_ck_11_1) {
    sub_62 = sub_66;
  } else {
    sub_62 = sub_63;
  };
  sub_70 = sub_31;
  if (controller_c_door) {
    sub_69 = sub_70;
  } else {
    sub_69 = false;
  };
  sub_68 = sub_69;
  if (controller_c_door) {
    sub_71 = false;
  } else {
    sub_71 = sub_70;
  };
  if (controller_ck_11_1) {
    sub_67 = sub_71;
  } else {
    sub_67 = sub_68;
  };
  if (controller_change_shift) {
    v_1750 = sub_67;
    sub_61 = sub_62;
  } else {
    v_1750 = sub_62;
    sub_61 = sub_67;
  };
  if (controller_ck_1) {
    sub_60 = v_1750;
  } else {
    sub_60 = sub_61;
  };
  sub_59 = sub_60;
  sub_58 = sub_59;
  if (controller_ck_17_1) {
    sub_75 = sub_30;
    sub_77 = sub_41;
  } else {
    sub_75 = sub_32;
    sub_77 = sub_43;
  };
  sub_76 = sub_77;
  if (controller_c_pc) {
    sub_74 = sub_75;
  } else {
    sub_74 = sub_76;
  };
  if (controller_v_408) {
    v_1746 = sub_18;
    sub_85 = false;
  } else {
    v_1746 = false;
    sub_85 = sub_18;
  };
  if (controller_light_failed_recovered) {
    v_1747 = sub_18;
    sub_84 = v_1746;
  } else {
    v_1747 = sub_85;
    sub_84 = sub_85;
  };
  if (controller_v_407) {
    sub_83 = v_1747;
  } else {
    sub_83 = sub_84;
  };
  sub_82 = sub_83;
  if (controller_cleaner) {
    v_1748 = false;
    sub_81 = sub_82;
  } else {
    v_1748 = sub_82;
    sub_81 = false;
  };
  if (controller_ck_17_1) {
    sub_80 = v_1748;
  } else {
    sub_80 = sub_81;
  };
  sub_79 = sub_80;
  sub_78 = sub_79;
  if (controller_change_shift) {
    v_1749 = sub_78;
    sub_73 = sub_74;
  } else {
    v_1749 = sub_74;
    sub_73 = sub_78;
  };
  if (controller_ck_1) {
    sub_72 = v_1749;
  } else {
    sub_72 = sub_73;
  };
  if (controller_air_failed_recovered) {
    v_1751 = sub_72;
  } else {
    v_1751 = sub_60;
  };
  if (controller_c_air_2) {
    v_1752 = v_1751;
  } else {
    v_1752 = sub_59;
  };
  if (controller_c_air_1) {
    sub_57 = sub_58;
  } else {
    sub_57 = v_1752;
  };
  if (controller_v_408) {
    sub_93 = sub_21;
    sub_94 = false;
  } else {
    sub_93 = false;
    sub_94 = sub_21;
  };
  if (controller_light_failed_recovered) {
    v_1742 = sub_21;
    sub_92 = sub_93;
  } else {
    v_1742 = sub_94;
    sub_92 = sub_94;
  };
  if (controller_v_407) {
    v_1743 = v_1742;
  } else {
    v_1743 = sub_92;
  };
  if (controller_c_window) {
    sub_91 = v_1743;
  } else {
    sub_91 = sub_20;
  };
  if (controller_cleaner) {
    v_1744 = false;
    sub_90 = sub_91;
  } else {
    v_1744 = sub_91;
    sub_90 = false;
  };
  if (controller_ck_17_1) {
    sub_89 = v_1744;
  } else {
    sub_89 = sub_90;
  };
  sub_96 = sub_42;
  sub_95 = sub_96;
  if (controller_c_pc) {
    sub_88 = sub_89;
    sub_97 = sub_76;
  } else {
    sub_88 = sub_95;
    sub_97 = sub_95;
  };
  if (controller_change_shift) {
    v_1745 = sub_97;
    sub_87 = sub_88;
  } else {
    v_1745 = sub_88;
    sub_87 = sub_97;
  };
  if (controller_ck_1) {
    sub_86 = v_1745;
  } else {
    sub_86 = sub_87;
  };
  if (controller_air_failed_recovered) {
    v_1753 = sub_60;
  } else {
    v_1753 = sub_86;
  };
  if (controller_light_failed_recovered) {
    sub_105 = sub_94;
  } else {
    sub_105 = sub_93;
  };
  if (controller_v_407) {
    v_1739 = sub_93;
  } else {
    v_1739 = sub_105;
  };
  if (controller_c_window) {
    sub_104 = v_1739;
  } else {
    sub_104 = sub_20;
  };
  if (controller_cleaner) {
    v_1740 = false;
    sub_103 = sub_104;
  } else {
    v_1740 = sub_104;
    sub_103 = false;
  };
  if (controller_ck_17_1) {
    sub_102 = v_1740;
  } else {
    sub_102 = sub_103;
  };
  if (controller_c_pc) {
    sub_101 = sub_102;
  } else {
    sub_101 = sub_76;
  };
  if (controller_change_shift) {
    v_1741 = sub_78;
    sub_100 = sub_101;
  } else {
    v_1741 = sub_101;
    sub_100 = sub_78;
  };
  if (controller_ck_1) {
    sub_99 = v_1741;
  } else {
    sub_99 = sub_100;
  };
  if (controller_air_failed_recovered) {
    v_1756 = sub_60;
  } else {
    v_1756 = sub_99;
  };
  sub_98 = sub_99;
  if (controller_c_air_2) {
    v_1754 = v_1753;
  } else {
    v_1754 = sub_98;
  };
  sub_106 = sub_72;
  if (controller_c_air_2) {
    v_1757 = v_1756;
  } else {
    v_1757 = sub_106;
  };
  if (controller_c_air_1) {
    v_1755 = v_1754;
  } else {
    v_1755 = sub_106;
  };
  if (controller_v_445) {
    sub_56 = v_1755;
  } else {
    sub_56 = sub_57;
  };
  sub_107 = sub_98;
  if (controller_v_447) {
    sub_55 = sub_107;
  } else {
    sub_55 = sub_56;
  };
  if (controller_air_failed_recovered) {
    v_1736 = sub_99;
  } else {
    v_1736 = sub_60;
  };
  if (controller_c_air_2) {
    v_1737 = v_1736;
  } else {
    v_1737 = sub_59;
  };
  if (controller_c_air_1) {
    v_1738 = v_1737;
  } else {
    v_1738 = sub_58;
  };
  if (controller_air_failed_recovered) {
    v_1734 = sub_60;
  } else {
    v_1734 = sub_72;
  };
  if (controller_c_air_2) {
    v_1735 = v_1734;
  } else {
    v_1735 = sub_98;
  };
  sub_111 = sub_86;
  sub_110 = sub_111;
  if (controller_c_air_1) {
    v_1758 = v_1757;
    sub_109 = sub_110;
  } else {
    v_1758 = sub_110;
    sub_109 = v_1735;
  };
  if (controller_v_445) {
    sub_108 = v_1738;
  } else {
    sub_108 = sub_109;
  };
  if (controller_air_failed_recovered) {
    v_1732 = sub_86;
  } else {
    v_1732 = sub_60;
  };
  if (controller_c_air_2) {
    v_1733 = v_1732;
  } else {
    v_1733 = sub_59;
  };
  if (controller_c_air_1) {
    sub_112 = v_1733;
  } else {
    sub_112 = sub_58;
  };
  if (controller_v_445) {
    v_1759 = v_1758;
  } else {
    v_1759 = sub_112;
  };
  if (controller_v_447) {
    v_1760 = v_1759;
  } else {
    v_1760 = sub_108;
  };
  if (controller_v_446) {
    sub_54 = v_1760;
  } else {
    sub_54 = sub_55;
  };
  sub_53 = sub_54;
  sub_52 = sub_53;
  if (controller_worker) {
    v_1791 = sub_52;
    sub_2 = sub_3;
  } else {
    v_1791 = sub_3;
    sub_2 = sub_52;
  };
  if (controller_ck_15_1) {
    sub_1 = v_1791;
  } else {
    sub_1 = sub_2;
  };
  v_1717 = !(controller_v_392);
  v_1718 = (v_1717||false);
  sub_130 = (controller_v_392||false);
  v_1716 = (controller_v_391||sub_130);
  if (controller_blind_failed_recovered) {
    sub_129 = v_1716;
  } else {
    sub_129 = v_1718;
  };
  sub_132 = true;
  sub_131 = sub_132;
  if (controller_c_window) {
    sub_128 = sub_129;
  } else {
    sub_128 = sub_131;
  };
  if (controller_cleaner) {
    v_1719 = sub_128;
    sub_127 = false;
  } else {
    v_1719 = false;
    sub_127 = sub_128;
  };
  if (controller_ck_17_1) {
    sub_126 = v_1719;
  } else {
    sub_126 = sub_127;
  };
  if (controller_c_door) {
    v_1722 = false;
    v_1720 = sub_126;
  } else {
    v_1722 = sub_126;
    v_1720 = false;
  };
  if (controller_c_window) {
    sub_135 = sub_131;
  } else {
    sub_135 = false;
  };
  if (controller_cleaner) {
    v_1715 = sub_128;
    sub_134 = sub_135;
  } else {
    v_1715 = sub_135;
    sub_134 = sub_128;
  };
  if (controller_ck_17_1) {
    sub_133 = v_1715;
  } else {
    sub_133 = sub_134;
  };
  if (controller_cleaner) {
    v_1714 = false;
    sub_137 = sub_135;
  } else {
    v_1714 = sub_135;
    sub_137 = false;
  };
  if (controller_ck_17_1) {
    sub_136 = v_1714;
  } else {
    sub_136 = sub_137;
  };
  if (controller_c_door) {
    v_1723 = sub_136;
  } else {
    v_1723 = sub_133;
  };
  if (controller_c_pc) {
    v_1724 = v_1722;
  } else {
    v_1724 = v_1723;
  };
  if (controller_c_door) {
    v_1721 = sub_133;
  } else {
    v_1721 = sub_136;
  };
  if (controller_c_pc) {
    sub_125 = v_1720;
  } else {
    sub_125 = v_1721;
  };
  if (controller_ck_11_1) {
    sub_124 = v_1724;
  } else {
    sub_124 = sub_125;
  };
  if (controller_c_window) {
    sub_142 = false;
  } else {
    sub_142 = sub_131;
  };
  if (controller_cleaner) {
    sub_141 = false;
    sub_143 = sub_142;
  } else {
    sub_141 = sub_142;
    sub_143 = false;
  };
  if (controller_ck_17_1) {
    sub_140 = sub_143;
  } else {
    sub_140 = sub_141;
  };
  if (controller_c_door) {
    v_1711 = false;
    v_1709 = sub_140;
  } else {
    v_1711 = sub_140;
    v_1709 = false;
  };
  if (controller_cleaner) {
    v_1708 = sub_142;
    sub_145 = sub_135;
  } else {
    v_1708 = sub_135;
    sub_145 = sub_142;
  };
  if (controller_ck_17_1) {
    sub_144 = v_1708;
  } else {
    sub_144 = sub_145;
  };
  if (controller_c_door) {
    v_1712 = sub_136;
  } else {
    v_1712 = sub_144;
  };
  if (controller_c_pc) {
    v_1713 = v_1711;
  } else {
    v_1713 = v_1712;
  };
  if (controller_c_door) {
    v_1710 = sub_144;
  } else {
    v_1710 = sub_136;
  };
  if (controller_c_pc) {
    sub_139 = v_1709;
  } else {
    sub_139 = v_1710;
  };
  if (controller_ck_11_1) {
    sub_138 = v_1713;
  } else {
    sub_138 = sub_139;
  };
  if (controller_change_shift) {
    v_1725 = sub_138;
    sub_123 = sub_124;
  } else {
    v_1725 = sub_124;
    sub_123 = sub_138;
  };
  if (controller_ck_1) {
    sub_122 = v_1725;
  } else {
    sub_122 = sub_123;
  };
  if (controller_air_failed_recovered) {
    v_1726 = sub_122;
  } else {
    v_1726 = sub_38;
  };
  sub_121 = sub_122;
  sub_120 = sub_121;
  if (controller_c_pc) {
    sub_148 = false;
  } else {
    sub_148 = sub_136;
  };
  sub_147 = sub_148;
  if (controller_air_failed_recovered) {
    v_1707 = sub_147;
  } else {
    v_1707 = sub_122;
  };
  if (controller_c_air_2) {
    sub_146 = v_1707;
  } else {
    sub_146 = sub_121;
  };
  if (controller_c_air_1) {
    sub_119 = sub_120;
  } else {
    sub_119 = sub_146;
  };
  sub_149 = sub_147;
  if (controller_c_air_2) {
    v_1727 = v_1726;
  } else {
    v_1727 = sub_149;
  };
  sub_150 = sub_149;
  if (controller_c_air_1) {
    v_1728 = v_1727;
  } else {
    v_1728 = sub_150;
  };
  if (controller_v_445) {
    sub_118 = v_1728;
  } else {
    sub_118 = sub_119;
  };
  if (controller_v_447) {
    sub_117 = sub_150;
  } else {
    sub_117 = sub_118;
  };
  if (controller_c_air_1) {
    v_1706 = sub_146;
  } else {
    v_1706 = sub_120;
  };
  if (controller_air_failed_recovered) {
    v_1705 = sub_122;
  } else {
    v_1705 = sub_147;
  };
  if (controller_c_air_2) {
    sub_153 = v_1705;
  } else {
    sub_153 = sub_149;
  };
  if (controller_c_air_1) {
    v_1729 = sub_153;
    sub_152 = sub_48;
  } else {
    v_1729 = sub_48;
    sub_152 = sub_153;
  };
  if (controller_v_445) {
    sub_151 = v_1706;
  } else {
    sub_151 = sub_152;
  };
  if (controller_air_failed_recovered) {
    v_1703 = sub_38;
  } else {
    v_1703 = sub_122;
  };
  if (controller_c_air_2) {
    v_1704 = v_1703;
  } else {
    v_1704 = sub_121;
  };
  if (controller_c_air_1) {
    sub_154 = v_1704;
  } else {
    sub_154 = sub_120;
  };
  if (controller_v_445) {
    v_1730 = v_1729;
  } else {
    v_1730 = sub_154;
  };
  if (controller_v_447) {
    v_1731 = v_1730;
  } else {
    v_1731 = sub_151;
  };
  if (controller_v_446) {
    sub_116 = v_1731;
  } else {
    sub_116 = sub_117;
  };
  sub_115 = sub_116;
  sub_114 = sub_115;
  sub_168 = sub_128;
  if (controller_c_door) {
    sub_167 = sub_168;
  } else {
    sub_167 = false;
  };
  sub_166 = sub_167;
  if (controller_c_door) {
    sub_169 = false;
  } else {
    sub_169 = sub_168;
  };
  if (controller_ck_11_1) {
    sub_165 = sub_169;
  } else {
    sub_165 = sub_166;
  };
  sub_173 = sub_142;
  if (controller_c_door) {
    sub_172 = sub_173;
  } else {
    sub_172 = false;
  };
  sub_171 = sub_172;
  if (controller_c_door) {
    sub_174 = false;
  } else {
    sub_174 = sub_173;
  };
  if (controller_ck_11_1) {
    sub_170 = sub_174;
  } else {
    sub_170 = sub_171;
  };
  if (controller_change_shift) {
    v_1692 = sub_170;
    sub_164 = sub_165;
  } else {
    v_1692 = sub_165;
    sub_164 = sub_170;
  };
  if (controller_ck_1) {
    sub_163 = v_1692;
  } else {
    sub_163 = sub_164;
  };
  sub_162 = sub_163;
  sub_161 = sub_162;
  if (controller_ck_17_1) {
    sub_178 = sub_141;
  } else {
    sub_178 = sub_143;
  };
  sub_182 = sub_131;
  if (controller_cleaner) {
    v_1690 = false;
    sub_181 = sub_182;
  } else {
    v_1690 = sub_182;
    sub_181 = false;
  };
  if (controller_ck_17_1) {
    sub_180 = v_1690;
  } else {
    sub_180 = sub_181;
  };
  sub_179 = sub_180;
  if (controller_c_pc) {
    sub_177 = sub_178;
  } else {
    sub_177 = sub_179;
  };
  if (controller_v_408) {
    v_1687 = sub_129;
    sub_190 = false;
  } else {
    v_1687 = false;
    sub_190 = sub_129;
  };
  if (controller_light_failed_recovered) {
    v_1688 = sub_129;
    sub_189 = v_1687;
  } else {
    v_1688 = sub_190;
    sub_189 = sub_190;
  };
  if (controller_v_407) {
    sub_188 = v_1688;
  } else {
    sub_188 = sub_189;
  };
  sub_187 = sub_188;
  if (controller_cleaner) {
    v_1689 = false;
    sub_186 = sub_187;
  } else {
    v_1689 = sub_187;
    sub_186 = false;
  };
  if (controller_ck_17_1) {
    sub_185 = v_1689;
  } else {
    sub_185 = sub_186;
  };
  sub_184 = sub_185;
  sub_183 = sub_184;
  if (controller_change_shift) {
    v_1691 = sub_183;
    sub_176 = sub_177;
  } else {
    v_1691 = sub_177;
    sub_176 = sub_183;
  };
  if (controller_ck_1) {
    sub_175 = v_1691;
  } else {
    sub_175 = sub_176;
  };
  if (controller_air_failed_recovered) {
    v_1693 = sub_175;
  } else {
    v_1693 = sub_163;
  };
  if (controller_c_air_2) {
    v_1694 = v_1693;
  } else {
    v_1694 = sub_162;
  };
  if (controller_c_air_1) {
    sub_160 = sub_161;
  } else {
    sub_160 = v_1694;
  };
  if (controller_v_408) {
    sub_198 = sub_132;
    sub_199 = false;
  } else {
    sub_198 = false;
    sub_199 = sub_132;
  };
  if (controller_light_failed_recovered) {
    v_1683 = sub_132;
    sub_197 = sub_198;
  } else {
    v_1683 = sub_199;
    sub_197 = sub_199;
  };
  if (controller_v_407) {
    v_1684 = v_1683;
  } else {
    v_1684 = sub_197;
  };
  if (controller_c_window) {
    sub_196 = v_1684;
  } else {
    sub_196 = sub_131;
  };
  if (controller_cleaner) {
    v_1685 = false;
    sub_195 = sub_196;
  } else {
    v_1685 = sub_196;
    sub_195 = false;
  };
  if (controller_ck_17_1) {
    sub_194 = v_1685;
  } else {
    sub_194 = sub_195;
  };
  if (controller_cleaner) {
    v_1682 = sub_42;
    sub_202 = sub_182;
  } else {
    v_1682 = sub_182;
    sub_202 = sub_42;
  };
  if (controller_ck_17_1) {
    sub_201 = v_1682;
  } else {
    sub_201 = sub_202;
  };
  sub_200 = sub_201;
  if (controller_c_pc) {
    sub_193 = sub_194;
    sub_203 = sub_179;
  } else {
    sub_193 = sub_200;
    sub_203 = sub_200;
  };
  if (controller_change_shift) {
    v_1686 = sub_203;
    sub_192 = sub_193;
  } else {
    v_1686 = sub_193;
    sub_192 = sub_203;
  };
  if (controller_ck_1) {
    sub_191 = v_1686;
  } else {
    sub_191 = sub_192;
  };
  if (controller_air_failed_recovered) {
    v_1695 = sub_163;
  } else {
    v_1695 = sub_191;
  };
  if (controller_light_failed_recovered) {
    sub_211 = sub_199;
  } else {
    sub_211 = sub_198;
  };
  if (controller_v_407) {
    v_1679 = sub_198;
  } else {
    v_1679 = sub_211;
  };
  if (controller_c_window) {
    sub_210 = v_1679;
  } else {
    sub_210 = sub_131;
  };
  if (controller_cleaner) {
    v_1680 = false;
    sub_209 = sub_210;
  } else {
    v_1680 = sub_210;
    sub_209 = false;
  };
  if (controller_ck_17_1) {
    sub_208 = v_1680;
  } else {
    sub_208 = sub_209;
  };
  if (controller_c_pc) {
    sub_207 = sub_208;
  } else {
    sub_207 = sub_179;
  };
  if (controller_change_shift) {
    v_1681 = sub_183;
    sub_206 = sub_207;
  } else {
    v_1681 = sub_207;
    sub_206 = sub_183;
  };
  if (controller_ck_1) {
    sub_205 = v_1681;
  } else {
    sub_205 = sub_206;
  };
  if (controller_air_failed_recovered) {
    v_1698 = sub_163;
  } else {
    v_1698 = sub_205;
  };
  sub_204 = sub_205;
  if (controller_c_air_2) {
    v_1696 = v_1695;
  } else {
    v_1696 = sub_204;
  };
  sub_212 = sub_175;
  if (controller_c_air_2) {
    v_1699 = v_1698;
  } else {
    v_1699 = sub_212;
  };
  if (controller_c_air_1) {
    v_1697 = v_1696;
  } else {
    v_1697 = sub_212;
  };
  if (controller_v_445) {
    sub_159 = v_1697;
  } else {
    sub_159 = sub_160;
  };
  sub_213 = sub_204;
  if (controller_v_447) {
    sub_158 = sub_213;
  } else {
    sub_158 = sub_159;
  };
  if (controller_air_failed_recovered) {
    v_1676 = sub_205;
  } else {
    v_1676 = sub_163;
  };
  if (controller_c_air_2) {
    v_1677 = v_1676;
  } else {
    v_1677 = sub_162;
  };
  if (controller_c_air_1) {
    v_1678 = v_1677;
  } else {
    v_1678 = sub_161;
  };
  if (controller_air_failed_recovered) {
    v_1674 = sub_163;
  } else {
    v_1674 = sub_175;
  };
  if (controller_c_air_2) {
    v_1675 = v_1674;
  } else {
    v_1675 = sub_204;
  };
  sub_217 = sub_191;
  sub_216 = sub_217;
  if (controller_c_air_1) {
    v_1700 = v_1699;
    sub_215 = sub_216;
  } else {
    v_1700 = sub_216;
    sub_215 = v_1675;
  };
  if (controller_v_445) {
    sub_214 = v_1678;
  } else {
    sub_214 = sub_215;
  };
  if (controller_air_failed_recovered) {
    v = sub_191;
  } else {
    v = sub_163;
  };
  if (controller_c_air_2) {
    v_1673 = v;
  } else {
    v_1673 = sub_162;
  };
  if (controller_c_air_1) {
    sub_218 = v_1673;
  } else {
    sub_218 = sub_161;
  };
  if (controller_v_445) {
    v_1701 = v_1700;
  } else {
    v_1701 = sub_218;
  };
  if (controller_v_447) {
    v_1702 = v_1701;
  } else {
    v_1702 = sub_214;
  };
  if (controller_v_446) {
    sub_157 = v_1702;
  } else {
    sub_157 = sub_158;
  };
  sub_156 = sub_157;
  sub_155 = sub_156;
  if (controller_worker) {
    v_1792 = sub_155;
    sub_113 = sub_114;
  } else {
    v_1792 = sub_114;
    sub_113 = sub_155;
  };
  if (controller_ck_15_1) {
    v_1793 = v_1792;
  } else {
    v_1793 = sub_113;
  };
  if (p_controller_c_closet) {
    sub_0 = v_1793;
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
  sub_18 = p_controller_c_air_2;
  if (controller_v_392) {
    v_1957 = false;
    sub_17 = sub_18;
  } else {
    v_1957 = sub_18;
    sub_17 = false;
  };
  if (controller_v_391) {
    v_1956 = sub_18;
  } else {
    v_1956 = sub_17;
  };
  if (controller_blind_failed_recovered) {
    sub_16 = v_1956;
  } else {
    sub_16 = v_1957;
  };
  sub_20 = sub_18;
  sub_19 = sub_20;
  if (controller_c_window) {
    sub_15 = sub_16;
  } else {
    sub_15 = sub_19;
  };
  if (controller_cleaner) {
    v_1958 = sub_15;
    sub_14 = false;
  } else {
    v_1958 = false;
    sub_14 = sub_15;
  };
  if (controller_ck_17_1) {
    sub_13 = v_1958;
  } else {
    sub_13 = sub_14;
  };
  if (controller_c_door) {
    v_1961 = false;
    v_1959 = sub_13;
  } else {
    v_1961 = sub_13;
    v_1959 = false;
  };
  if (controller_c_window) {
    sub_23 = sub_19;
  } else {
    sub_23 = false;
  };
  if (controller_cleaner) {
    v_1955 = sub_15;
    sub_22 = sub_23;
  } else {
    v_1955 = sub_23;
    sub_22 = sub_15;
  };
  if (controller_ck_17_1) {
    sub_21 = v_1955;
  } else {
    sub_21 = sub_22;
  };
  if (controller_cleaner) {
    v_1954 = false;
    sub_25 = sub_23;
  } else {
    v_1954 = sub_23;
    sub_25 = false;
  };
  if (controller_ck_17_1) {
    sub_24 = v_1954;
  } else {
    sub_24 = sub_25;
  };
  if (controller_c_door) {
    v_1962 = sub_24;
  } else {
    v_1962 = sub_21;
  };
  if (controller_c_pc) {
    v_1963 = v_1961;
  } else {
    v_1963 = v_1962;
  };
  if (controller_c_door) {
    v_1960 = sub_21;
  } else {
    v_1960 = sub_24;
  };
  if (controller_c_pc) {
    sub_12 = v_1959;
  } else {
    sub_12 = v_1960;
  };
  if (controller_ck_11_1) {
    sub_11 = v_1963;
  } else {
    sub_11 = sub_12;
  };
  if (controller_c_window) {
    sub_30 = false;
  } else {
    sub_30 = sub_19;
  };
  if (controller_cleaner) {
    sub_29 = false;
    sub_31 = sub_30;
  } else {
    sub_29 = sub_30;
    sub_31 = false;
  };
  if (controller_ck_17_1) {
    sub_28 = sub_31;
  } else {
    sub_28 = sub_29;
  };
  if (controller_c_door) {
    v_1951 = false;
    v_1949 = sub_28;
  } else {
    v_1951 = sub_28;
    v_1949 = false;
  };
  if (controller_cleaner) {
    v_1948 = sub_30;
    sub_33 = sub_23;
  } else {
    v_1948 = sub_23;
    sub_33 = sub_30;
  };
  if (controller_ck_17_1) {
    sub_32 = v_1948;
  } else {
    sub_32 = sub_33;
  };
  if (controller_c_door) {
    v_1952 = sub_24;
  } else {
    v_1952 = sub_32;
  };
  if (controller_c_pc) {
    v_1953 = v_1951;
  } else {
    v_1953 = v_1952;
  };
  if (controller_c_door) {
    v_1950 = sub_32;
  } else {
    v_1950 = sub_24;
  };
  if (controller_c_pc) {
    sub_27 = v_1949;
  } else {
    sub_27 = v_1950;
  };
  if (controller_ck_11_1) {
    sub_26 = v_1953;
  } else {
    sub_26 = sub_27;
  };
  if (controller_change_shift) {
    v_1964 = sub_26;
    sub_10 = sub_11;
  } else {
    v_1964 = sub_11;
    sub_10 = sub_26;
  };
  if (controller_ck_1) {
    sub_9 = v_1964;
  } else {
    sub_9 = sub_10;
  };
  sub_8 = sub_9;
  v_1941 = (controller_v_392&&false);
  v_1939 = !(controller_v_391);
  v_1938 = !(controller_v_392);
  sub_44 = (v_1938&&false);
  v_1940 = (v_1939&&sub_44);
  if (controller_blind_failed_recovered) {
    sub_43 = v_1940;
  } else {
    sub_43 = v_1941;
  };
  sub_42 = sub_43;
  sub_46 = false;
  sub_45 = sub_46;
  if (controller_c_window) {
    sub_41 = sub_42;
  } else {
    sub_41 = sub_45;
  };
  if (controller_cleaner) {
    v_1942 = sub_41;
    sub_40 = false;
  } else {
    v_1942 = false;
    sub_40 = sub_41;
  };
  if (controller_ck_17_1) {
    sub_39 = v_1942;
  } else {
    sub_39 = sub_40;
  };
  if (controller_c_door) {
    sub_38 = sub_39;
  } else {
    sub_38 = false;
  };
  if (controller_cleaner) {
    v_1937 = sub_41;
    sub_48 = sub_23;
  } else {
    v_1937 = sub_23;
    sub_48 = sub_41;
  };
  if (controller_ck_17_1) {
    sub_47 = v_1937;
  } else {
    sub_47 = sub_48;
  };
  if (controller_c_door) {
    v_1944 = sub_24;
    v_1943 = sub_47;
  } else {
    v_1944 = sub_47;
    v_1943 = sub_24;
  };
  if (controller_c_pc) {
    sub_37 = sub_38;
  } else {
    sub_37 = v_1943;
  };
  if (controller_c_door) {
    sub_49 = false;
  } else {
    sub_49 = sub_39;
  };
  if (controller_c_pc) {
    v_1945 = sub_49;
  } else {
    v_1945 = v_1944;
  };
  if (controller_ck_11_1) {
    sub_36 = v_1945;
  } else {
    sub_36 = sub_37;
  };
  if (controller_c_window) {
    sub_55 = false;
  } else {
    sub_55 = sub_45;
  };
  if (controller_cleaner) {
    sub_54 = false;
    sub_56 = sub_55;
  } else {
    sub_54 = sub_55;
    sub_56 = false;
  };
  if (controller_ck_17_1) {
    sub_53 = sub_56;
  } else {
    sub_53 = sub_54;
  };
  if (controller_c_door) {
    sub_52 = sub_53;
  } else {
    sub_52 = false;
  };
  if (controller_cleaner) {
    v_1933 = sub_55;
    sub_58 = sub_23;
  } else {
    v_1933 = sub_23;
    sub_58 = sub_55;
  };
  if (controller_ck_17_1) {
    sub_57 = v_1933;
  } else {
    sub_57 = sub_58;
  };
  if (controller_c_door) {
    v_1935 = sub_24;
    v_1934 = sub_57;
  } else {
    v_1935 = sub_57;
    v_1934 = sub_24;
  };
  if (controller_c_pc) {
    sub_51 = sub_52;
  } else {
    sub_51 = v_1934;
  };
  if (controller_c_door) {
    sub_59 = false;
  } else {
    sub_59 = sub_53;
  };
  if (controller_c_pc) {
    v_1936 = sub_59;
  } else {
    v_1936 = v_1935;
  };
  if (controller_ck_11_1) {
    sub_50 = v_1936;
  } else {
    sub_50 = sub_51;
  };
  if (controller_change_shift) {
    v_1946 = sub_50;
    sub_35 = sub_36;
  } else {
    v_1946 = sub_36;
    sub_35 = sub_50;
  };
  if (controller_ck_1) {
    v_1947 = v_1946;
  } else {
    v_1947 = sub_35;
  };
  if (controller_air_failed_recovered) {
    sub_34 = v_1947;
  } else {
    sub_34 = sub_9;
  };
  if (controller_c_air_1) {
    sub_7 = sub_8;
  } else {
    sub_7 = sub_34;
  };
  v_1924 = !(controller_v_392);
  v_1925 = (v_1924||false);
  sub_69 = (controller_v_392||false);
  v_1923 = (controller_v_391||sub_69);
  if (controller_blind_failed_recovered) {
    sub_68 = v_1923;
  } else {
    sub_68 = v_1925;
  };
  sub_67 = sub_68;
  sub_71 = true;
  sub_70 = sub_71;
  if (controller_c_window) {
    sub_66 = sub_67;
  } else {
    sub_66 = sub_70;
  };
  if (controller_cleaner) {
    v_1926 = sub_66;
    sub_65 = false;
  } else {
    v_1926 = false;
    sub_65 = sub_66;
  };
  if (controller_ck_17_1) {
    sub_64 = v_1926;
  } else {
    sub_64 = sub_65;
  };
  if (controller_c_door) {
    v_1929 = false;
    v_1927 = sub_64;
  } else {
    v_1929 = sub_64;
    v_1927 = false;
  };
  if (controller_cleaner) {
    v_1922 = sub_66;
    sub_73 = sub_23;
  } else {
    v_1922 = sub_23;
    sub_73 = sub_66;
  };
  if (controller_ck_17_1) {
    sub_72 = v_1922;
  } else {
    sub_72 = sub_73;
  };
  if (controller_c_door) {
    v_1930 = sub_24;
  } else {
    v_1930 = sub_72;
  };
  if (controller_c_pc) {
    v_1931 = v_1929;
  } else {
    v_1931 = v_1930;
  };
  if (controller_c_door) {
    v_1928 = sub_72;
  } else {
    v_1928 = sub_24;
  };
  if (controller_c_pc) {
    sub_63 = v_1927;
  } else {
    sub_63 = v_1928;
  };
  if (controller_ck_11_1) {
    sub_62 = v_1931;
  } else {
    sub_62 = sub_63;
  };
  if (controller_c_window) {
    sub_78 = false;
  } else {
    sub_78 = sub_70;
  };
  if (controller_cleaner) {
    sub_77 = false;
    sub_79 = sub_78;
  } else {
    sub_77 = sub_78;
    sub_79 = false;
  };
  if (controller_ck_17_1) {
    sub_76 = sub_79;
  } else {
    sub_76 = sub_77;
  };
  if (controller_c_door) {
    v_1919 = false;
    v_1917 = sub_76;
  } else {
    v_1919 = sub_76;
    v_1917 = false;
  };
  if (controller_cleaner) {
    v_1916 = sub_78;
    sub_81 = sub_23;
  } else {
    v_1916 = sub_23;
    sub_81 = sub_78;
  };
  if (controller_ck_17_1) {
    sub_80 = v_1916;
  } else {
    sub_80 = sub_81;
  };
  if (controller_c_door) {
    v_1920 = sub_24;
  } else {
    v_1920 = sub_80;
  };
  if (controller_c_pc) {
    v_1921 = v_1919;
  } else {
    v_1921 = v_1920;
  };
  if (controller_c_door) {
    v_1918 = sub_80;
  } else {
    v_1918 = sub_24;
  };
  if (controller_c_pc) {
    sub_75 = v_1917;
  } else {
    sub_75 = v_1918;
  };
  if (controller_ck_11_1) {
    sub_74 = v_1921;
  } else {
    sub_74 = sub_75;
  };
  if (controller_change_shift) {
    v_1932 = sub_74;
    sub_61 = sub_62;
  } else {
    v_1932 = sub_62;
    sub_61 = sub_74;
  };
  if (controller_ck_1) {
    sub_60 = v_1932;
  } else {
    sub_60 = sub_61;
  };
  if (controller_c_window) {
    sub_85 = sub_45;
  } else {
    sub_85 = false;
  };
  sub_86 = sub_70;
  if (controller_cleaner) {
    v_1915 = sub_86;
    sub_84 = sub_85;
  } else {
    v_1915 = sub_85;
    sub_84 = sub_86;
  };
  if (controller_ck_17_1) {
    sub_83 = v_1915;
  } else {
    sub_83 = sub_84;
  };
  if (controller_c_pc) {
    sub_82 = false;
  } else {
    sub_82 = sub_83;
  };
  if (controller_air_failed_recovered) {
    v_1965 = sub_60;
  } else {
    v_1965 = sub_82;
  };
  if (controller_c_pc) {
    sub_89 = false;
  } else {
    sub_89 = sub_24;
  };
  sub_88 = sub_89;
  sub_87 = sub_88;
  if (controller_c_air_1) {
    v_1966 = v_1965;
  } else {
    v_1966 = sub_87;
  };
  if (controller_v_445) {
    sub_6 = v_1966;
  } else {
    sub_6 = sub_7;
  };
  if (controller_v_447) {
    sub_5 = sub_87;
  } else {
    sub_5 = sub_6;
  };
  if (controller_c_air_1) {
    v_1914 = sub_34;
  } else {
    v_1914 = sub_8;
  };
  sub_97 = sub_19;
  if (controller_cleaner) {
    sub_96 = false;
    sub_98 = sub_97;
  } else {
    sub_96 = sub_97;
    sub_98 = false;
  };
  if (controller_ck_17_1) {
    sub_95 = sub_98;
  } else {
    sub_95 = sub_96;
  };
  if (controller_c_pc) {
    sub_94 = false;
  } else {
    sub_94 = sub_95;
  };
  sub_93 = sub_94;
  sub_92 = sub_93;
  if (controller_air_failed_recovered) {
    sub_99 = sub_60;
  } else {
    sub_99 = sub_88;
  };
  if (controller_c_air_1) {
    v_1967 = sub_99;
    sub_91 = sub_92;
  } else {
    v_1967 = sub_92;
    sub_91 = sub_99;
  };
  if (controller_v_445) {
    sub_90 = v_1914;
  } else {
    sub_90 = sub_91;
  };
  v_1906 = (controller_v_392||sub_18);
  v_1904 = !(controller_v_392);
  sub_108 = (v_1904||sub_18);
  if (controller_v_391) {
    v_1905 = sub_18;
  } else {
    v_1905 = sub_108;
  };
  if (controller_blind_failed_recovered) {
    sub_107 = v_1905;
  } else {
    sub_107 = v_1906;
  };
  if (controller_c_window) {
    sub_106 = sub_107;
  } else {
    sub_106 = sub_19;
  };
  if (controller_cleaner) {
    v_1907 = sub_106;
    sub_105 = sub_85;
  } else {
    v_1907 = sub_85;
    sub_105 = sub_106;
  };
  if (controller_ck_17_1) {
    sub_104 = v_1907;
  } else {
    sub_104 = sub_105;
  };
  if (controller_c_door) {
    v_1909 = sub_83;
  } else {
    v_1909 = sub_104;
  };
  if (controller_c_pc) {
    v_1910 = sub_49;
  } else {
    v_1910 = v_1909;
  };
  if (controller_c_door) {
    v_1908 = sub_104;
  } else {
    v_1908 = sub_83;
  };
  if (controller_c_pc) {
    sub_103 = sub_38;
  } else {
    sub_103 = v_1908;
  };
  if (controller_ck_11_1) {
    sub_102 = v_1910;
  } else {
    sub_102 = sub_103;
  };
  if (controller_c_window) {
    sub_113 = sub_70;
  } else {
    sub_113 = sub_19;
  };
  if (controller_cleaner) {
    v_1900 = sub_113;
    sub_112 = sub_85;
  } else {
    v_1900 = sub_85;
    sub_112 = sub_113;
  };
  if (controller_ck_17_1) {
    sub_111 = v_1900;
  } else {
    sub_111 = sub_112;
  };
  if (controller_c_door) {
    v_1902 = sub_83;
  } else {
    v_1902 = sub_111;
  };
  if (controller_c_pc) {
    v_1903 = sub_59;
  } else {
    v_1903 = v_1902;
  };
  if (controller_c_door) {
    v_1901 = sub_111;
  } else {
    v_1901 = sub_83;
  };
  if (controller_c_pc) {
    sub_110 = sub_52;
  } else {
    sub_110 = v_1901;
  };
  if (controller_ck_11_1) {
    sub_109 = v_1903;
  } else {
    sub_109 = sub_110;
  };
  if (controller_change_shift) {
    v_1911 = sub_109;
    sub_101 = sub_102;
  } else {
    v_1911 = sub_102;
    sub_101 = sub_109;
  };
  if (controller_ck_1) {
    v_1912 = v_1911;
  } else {
    v_1912 = sub_101;
  };
  if (controller_air_failed_recovered) {
    v_1913 = v_1912;
  } else {
    v_1913 = sub_9;
  };
  if (controller_c_air_1) {
    sub_100 = v_1913;
  } else {
    sub_100 = sub_8;
  };
  if (controller_v_445) {
    v_1968 = v_1967;
  } else {
    v_1968 = sub_100;
  };
  if (controller_v_447) {
    v_1969 = v_1968;
  } else {
    v_1969 = sub_90;
  };
  if (controller_v_446) {
    sub_4 = v_1969;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_126 = sub_15;
  if (controller_c_door) {
    sub_125 = sub_126;
  } else {
    sub_125 = false;
  };
  sub_124 = sub_125;
  if (controller_c_door) {
    sub_127 = false;
  } else {
    sub_127 = sub_126;
  };
  if (controller_ck_11_1) {
    sub_123 = sub_127;
  } else {
    sub_123 = sub_124;
  };
  sub_131 = sub_30;
  if (controller_c_door) {
    sub_130 = sub_131;
  } else {
    sub_130 = false;
  };
  sub_129 = sub_130;
  if (controller_c_door) {
    sub_132 = false;
  } else {
    sub_132 = sub_131;
  };
  if (controller_ck_11_1) {
    sub_128 = sub_132;
  } else {
    sub_128 = sub_129;
  };
  if (controller_change_shift) {
    v_1884 = sub_128;
    sub_122 = sub_123;
  } else {
    v_1884 = sub_123;
    sub_122 = sub_128;
  };
  if (controller_ck_1) {
    sub_121 = v_1884;
  } else {
    sub_121 = sub_122;
  };
  sub_120 = sub_121;
  if (controller_c_window) {
    sub_138 = sub_42;
  } else {
    sub_138 = sub_19;
  };
  if (controller_cleaner) {
    v_1880 = sub_41;
    sub_137 = sub_138;
  } else {
    v_1880 = sub_138;
    sub_137 = sub_41;
  };
  if (controller_ck_17_1) {
    sub_136 = v_1880;
    sub_139 = sub_77;
  } else {
    sub_136 = sub_137;
    sub_139 = sub_79;
  };
  if (controller_c_door) {
    v_1882 = sub_139;
    v_1881 = sub_136;
  } else {
    v_1882 = sub_136;
    v_1881 = sub_139;
  };
  if (controller_cleaner) {
    v_1879 = sub_41;
    sub_142 = sub_106;
  } else {
    v_1879 = sub_106;
    sub_142 = sub_41;
  };
  if (controller_ck_17_1) {
    sub_141 = v_1879;
  } else {
    sub_141 = sub_142;
  };
  if (controller_cleaner) {
    v_1878 = false;
    sub_144 = sub_86;
  } else {
    v_1878 = sub_86;
    sub_144 = false;
  };
  if (controller_ck_17_1) {
    sub_143 = v_1878;
  } else {
    sub_143 = sub_144;
  };
  if (controller_c_door) {
    sub_140 = sub_141;
  } else {
    sub_140 = sub_143;
  };
  if (controller_c_pc) {
    sub_135 = v_1881;
  } else {
    sub_135 = sub_140;
  };
  if (controller_c_door) {
    sub_145 = sub_143;
  } else {
    sub_145 = sub_141;
  };
  if (controller_c_pc) {
    v_1883 = v_1882;
  } else {
    v_1883 = sub_145;
  };
  if (controller_ck_11_1) {
    sub_134 = v_1883;
  } else {
    sub_134 = sub_135;
  };
  if (controller_v_408) {
    v_1873 = sub_68;
    sub_154 = false;
  } else {
    v_1873 = false;
    sub_154 = sub_68;
  };
  if (controller_light_failed_recovered) {
    v_1874 = sub_68;
    sub_153 = v_1873;
  } else {
    v_1874 = sub_154;
    sub_153 = sub_154;
  };
  if (controller_v_407) {
    sub_152 = v_1874;
  } else {
    sub_152 = sub_153;
  };
  v_1870 = !(controller_v_392);
  v_1871 = (v_1870&&sub_18);
  sub_157 = (controller_v_392&&sub_18);
  if (controller_v_391) {
    v_1869 = sub_18;
  } else {
    v_1869 = sub_157;
  };
  if (controller_blind_failed_recovered) {
    sub_156 = v_1869;
  } else {
    sub_156 = v_1871;
  };
  if (controller_v_408) {
    v_1872 = sub_156;
    sub_158 = sub_46;
  } else {
    v_1872 = sub_46;
    sub_158 = sub_156;
  };
  if (controller_light_failed_recovered) {
    v_1875 = sub_156;
    sub_155 = v_1872;
  } else {
    v_1875 = sub_158;
    sub_155 = sub_158;
  };
  if (controller_v_407) {
    v_1876 = v_1875;
  } else {
    v_1876 = sub_155;
  };
  if (controller_c_window) {
    sub_151 = sub_152;
  } else {
    sub_151 = v_1876;
  };
  if (controller_cleaner) {
    v_1877 = sub_55;
    sub_150 = sub_151;
  } else {
    v_1877 = sub_151;
    sub_150 = sub_55;
  };
  if (controller_ck_17_1) {
    sub_149 = v_1877;
  } else {
    sub_149 = sub_150;
  };
  sub_161 = sub_152;
  if (controller_cleaner) {
    v_1868 = false;
    sub_160 = sub_161;
  } else {
    v_1868 = sub_161;
    sub_160 = false;
  };
  if (controller_ck_17_1) {
    sub_159 = v_1868;
  } else {
    sub_159 = sub_160;
  };
  if (controller_c_door) {
    sub_148 = sub_149;
  } else {
    sub_148 = sub_159;
  };
  sub_147 = sub_148;
  if (controller_c_door) {
    sub_162 = sub_159;
  } else {
    sub_162 = sub_149;
  };
  if (controller_ck_11_1) {
    sub_146 = sub_162;
  } else {
    sub_146 = sub_147;
  };
  if (controller_change_shift) {
    v_1885 = sub_146;
    sub_133 = sub_134;
  } else {
    v_1885 = sub_134;
    sub_133 = sub_146;
  };
  if (controller_ck_1) {
    v_1886 = v_1885;
  } else {
    v_1886 = sub_133;
  };
  if (controller_air_failed_recovered) {
    v_1887 = v_1886;
  } else {
    v_1887 = sub_121;
  };
  if (controller_c_air_1) {
    sub_119 = sub_120;
  } else {
    sub_119 = v_1887;
  };
  if (controller_v_408) {
    v_1861 = sub_68;
    sub_171 = sub_156;
  } else {
    v_1861 = sub_156;
    sub_171 = sub_68;
  };
  if (controller_light_failed_recovered) {
    sub_170 = v_1861;
  } else {
    sub_170 = sub_171;
  };
  if (controller_v_407) {
    v_1862 = sub_171;
  } else {
    v_1862 = sub_170;
  };
  if (controller_c_window) {
    sub_169 = v_1862;
  } else {
    sub_169 = sub_19;
  };
  if (controller_cleaner) {
    v_1863 = sub_66;
    sub_168 = sub_169;
  } else {
    v_1863 = sub_169;
    sub_168 = sub_66;
  };
  if (controller_ck_17_1) {
    sub_167 = v_1863;
  } else {
    sub_167 = sub_168;
  };
  if (controller_v_408) {
    v_1859 = false;
    sub_177 = sub_46;
  } else {
    v_1859 = sub_46;
    sub_177 = false;
  };
  if (controller_light_failed_recovered) {
    sub_176 = v_1859;
  } else {
    sub_176 = sub_177;
  };
  if (controller_v_407) {
    sub_175 = sub_177;
  } else {
    sub_175 = sub_176;
  };
  if (controller_c_window) {
    sub_174 = sub_175;
  } else {
    sub_174 = sub_45;
  };
  if (controller_cleaner) {
    v_1860 = false;
    sub_173 = sub_174;
  } else {
    v_1860 = sub_174;
    sub_173 = false;
  };
  if (controller_ck_17_1) {
    sub_172 = v_1860;
  } else {
    sub_172 = sub_173;
  };
  if (controller_c_door) {
    v_1865 = sub_172;
    v_1864 = sub_167;
  } else {
    v_1865 = sub_167;
    v_1864 = sub_172;
  };
  if (controller_c_window) {
    sub_181 = sub_156;
  } else {
    sub_181 = sub_19;
  };
  if (controller_cleaner) {
    v_1858 = sub_66;
    sub_180 = sub_181;
  } else {
    v_1858 = sub_181;
    sub_180 = sub_66;
  };
  if (controller_ck_17_1) {
    sub_179 = v_1858;
  } else {
    sub_179 = sub_180;
  };
  sub_184 = sub_45;
  if (controller_cleaner) {
    v_1857 = false;
    sub_183 = sub_184;
  } else {
    v_1857 = sub_184;
    sub_183 = false;
  };
  if (controller_ck_17_1) {
    sub_182 = v_1857;
  } else {
    sub_182 = sub_183;
  };
  if (controller_c_door) {
    sub_178 = sub_179;
  } else {
    sub_178 = sub_182;
  };
  if (controller_c_pc) {
    sub_166 = v_1864;
  } else {
    sub_166 = sub_178;
  };
  if (controller_c_door) {
    sub_185 = sub_182;
  } else {
    sub_185 = sub_179;
  };
  if (controller_c_pc) {
    v_1866 = v_1865;
  } else {
    v_1866 = sub_185;
  };
  if (controller_ck_11_1) {
    sub_165 = v_1866;
  } else {
    sub_165 = sub_166;
  };
  if (controller_v_408) {
    v_1854 = sub_43;
    sub_194 = false;
  } else {
    v_1854 = false;
    sub_194 = sub_43;
  };
  if (controller_light_failed_recovered) {
    v_1855 = sub_43;
    sub_193 = v_1854;
  } else {
    v_1855 = sub_194;
    sub_193 = sub_194;
  };
  if (controller_v_407) {
    sub_192 = v_1855;
  } else {
    sub_192 = sub_193;
  };
  if (controller_v_408) {
    v_1852 = sub_107;
    sub_197 = sub_71;
  } else {
    v_1852 = sub_71;
    sub_197 = sub_107;
  };
  if (controller_light_failed_recovered) {
    v_1853 = sub_107;
    sub_196 = v_1852;
  } else {
    v_1853 = sub_197;
    sub_196 = sub_197;
  };
  if (controller_v_407) {
    sub_195 = v_1853;
  } else {
    sub_195 = sub_196;
  };
  if (controller_c_window) {
    sub_191 = sub_192;
  } else {
    sub_191 = sub_195;
  };
  if (controller_cleaner) {
    v_1856 = sub_78;
    sub_190 = sub_191;
  } else {
    v_1856 = sub_191;
    sub_190 = sub_78;
  };
  if (controller_ck_17_1) {
    sub_189 = v_1856;
  } else {
    sub_189 = sub_190;
  };
  sub_200 = sub_192;
  if (controller_cleaner) {
    v_1851 = false;
    sub_199 = sub_200;
  } else {
    v_1851 = sub_200;
    sub_199 = false;
  };
  if (controller_ck_17_1) {
    sub_198 = v_1851;
  } else {
    sub_198 = sub_199;
  };
  if (controller_c_door) {
    sub_188 = sub_189;
  } else {
    sub_188 = sub_198;
  };
  sub_187 = sub_188;
  if (controller_c_door) {
    sub_201 = sub_198;
  } else {
    sub_201 = sub_189;
  };
  if (controller_ck_11_1) {
    sub_186 = sub_201;
  } else {
    sub_186 = sub_187;
  };
  if (controller_change_shift) {
    v_1867 = sub_186;
    sub_164 = sub_165;
  } else {
    v_1867 = sub_165;
    sub_164 = sub_186;
  };
  if (controller_ck_1) {
    sub_163 = v_1867;
  } else {
    sub_163 = sub_164;
  };
  if (controller_v_408) {
    v_1847 = sub_20;
    v_1846 = sub_71;
    sub_208 = sub_46;
  } else {
    v_1847 = sub_71;
    v_1846 = sub_46;
    sub_208 = sub_71;
  };
  if (controller_light_failed_recovered) {
    v_1848 = v_1847;
    sub_207 = v_1846;
  } else {
    v_1848 = sub_208;
    sub_207 = sub_208;
  };
  if (controller_v_407) {
    v_1849 = v_1848;
  } else {
    v_1849 = sub_207;
  };
  if (controller_c_window) {
    sub_206 = v_1849;
  } else {
    sub_206 = sub_19;
  };
  if (controller_cleaner) {
    v_1850 = false;
    sub_205 = sub_206;
  } else {
    v_1850 = sub_206;
    sub_205 = false;
  };
  if (controller_ck_17_1) {
    sub_204 = v_1850;
  } else {
    sub_204 = sub_205;
  };
  if (controller_cleaner) {
    v_1845 = sub_86;
    sub_210 = sub_97;
  } else {
    v_1845 = sub_97;
    sub_210 = sub_86;
  };
  if (controller_ck_17_1) {
    sub_209 = v_1845;
  } else {
    sub_209 = sub_210;
  };
  if (controller_c_pc) {
    sub_203 = sub_204;
  } else {
    sub_203 = sub_209;
  };
  sub_214 = sub_195;
  if (controller_cleaner) {
    v_1844 = false;
    sub_213 = sub_214;
  } else {
    v_1844 = sub_214;
    sub_213 = false;
  };
  if (controller_ck_17_1) {
    sub_212 = v_1844;
  } else {
    sub_212 = sub_213;
  };
  if (controller_cleaner) {
    v_1843 = sub_86;
    sub_216 = sub_214;
  } else {
    v_1843 = sub_214;
    sub_216 = sub_86;
  };
  if (controller_ck_17_1) {
    sub_215 = v_1843;
  } else {
    sub_215 = sub_216;
  };
  if (controller_c_pc) {
    sub_211 = sub_212;
  } else {
    sub_211 = sub_215;
  };
  if (controller_change_shift) {
    v_1888 = sub_211;
    sub_202 = sub_203;
  } else {
    v_1888 = sub_203;
    sub_202 = sub_211;
  };
  if (controller_ck_1) {
    v_1889 = v_1888;
  } else {
    v_1889 = sub_202;
  };
  if (controller_air_failed_recovered) {
    v_1890 = sub_163;
  } else {
    v_1890 = v_1889;
  };
  if (controller_ck_17_1) {
    sub_220 = sub_29;
    sub_222 = sub_96;
  } else {
    sub_220 = sub_31;
    sub_222 = sub_98;
  };
  sub_221 = sub_222;
  if (controller_c_pc) {
    sub_219 = sub_220;
  } else {
    sub_219 = sub_221;
  };
  if (controller_v_408) {
    v_1839 = sub_16;
    sub_230 = false;
  } else {
    v_1839 = false;
    sub_230 = sub_16;
  };
  if (controller_light_failed_recovered) {
    v_1840 = sub_16;
    sub_229 = v_1839;
  } else {
    v_1840 = sub_230;
    sub_229 = sub_230;
  };
  if (controller_v_407) {
    sub_228 = v_1840;
  } else {
    sub_228 = sub_229;
  };
  sub_227 = sub_228;
  if (controller_cleaner) {
    v_1841 = false;
    sub_226 = sub_227;
  } else {
    v_1841 = sub_227;
    sub_226 = false;
  };
  if (controller_ck_17_1) {
    sub_225 = v_1841;
  } else {
    sub_225 = sub_226;
  };
  sub_224 = sub_225;
  sub_223 = sub_224;
  if (controller_change_shift) {
    v_1842 = sub_223;
    sub_218 = sub_219;
  } else {
    v_1842 = sub_219;
    sub_218 = sub_223;
  };
  if (controller_ck_1) {
    sub_217 = v_1842;
  } else {
    sub_217 = sub_218;
  };
  if (controller_c_air_1) {
    v_1891 = v_1890;
  } else {
    v_1891 = sub_217;
  };
  if (controller_v_445) {
    sub_118 = v_1891;
  } else {
    sub_118 = sub_119;
  };
  if (controller_v_408) {
    sub_239 = false;
    sub_240 = sub_20;
  } else {
    sub_239 = sub_20;
    sub_240 = false;
  };
  if (controller_light_failed_recovered) {
    sub_238 = sub_239;
  } else {
    sub_238 = sub_240;
  };
  if (controller_v_407) {
    v_1836 = sub_240;
  } else {
    v_1836 = sub_238;
  };
  if (controller_c_window) {
    sub_237 = v_1836;
  } else {
    sub_237 = sub_19;
  };
  if (controller_cleaner) {
    v_1837 = false;
    sub_236 = sub_237;
  } else {
    v_1837 = sub_237;
    sub_236 = false;
  };
  if (controller_ck_17_1) {
    sub_235 = v_1837;
  } else {
    sub_235 = sub_236;
  };
  if (controller_c_pc) {
    sub_234 = sub_235;
  } else {
    sub_234 = sub_221;
  };
  if (controller_change_shift) {
    v_1838 = sub_223;
    sub_233 = sub_234;
  } else {
    v_1838 = sub_234;
    sub_233 = sub_223;
  };
  if (controller_ck_1) {
    sub_232 = v_1838;
  } else {
    sub_232 = sub_233;
  };
  sub_231 = sub_232;
  if (controller_v_447) {
    sub_117 = sub_231;
  } else {
    sub_117 = sub_118;
  };
  if (controller_light_failed_recovered) {
    v_1825 = sub_20;
    sub_250 = sub_240;
  } else {
    v_1825 = sub_239;
    sub_250 = sub_239;
  };
  if (controller_v_407) {
    v_1826 = v_1825;
  } else {
    v_1826 = sub_250;
  };
  if (controller_c_window) {
    sub_249 = v_1826;
  } else {
    sub_249 = sub_19;
  };
  if (controller_cleaner) {
    v_1827 = false;
    sub_248 = sub_249;
  } else {
    v_1827 = sub_249;
    sub_248 = false;
  };
  if (controller_ck_17_1) {
    sub_247 = v_1827;
  } else {
    sub_247 = sub_248;
  };
  sub_252 = sub_97;
  sub_251 = sub_252;
  if (controller_c_pc) {
    sub_246 = sub_247;
    sub_253 = sub_221;
  } else {
    sub_246 = sub_251;
    sub_253 = sub_251;
  };
  if (controller_change_shift) {
    v_1828 = sub_253;
    sub_245 = sub_246;
  } else {
    v_1828 = sub_246;
    sub_245 = sub_253;
  };
  if (controller_ck_1) {
    sub_244 = v_1828;
  } else {
    sub_244 = sub_245;
  };
  sub_243 = sub_244;
  if (controller_c_window) {
    sub_258 = sub_175;
  } else {
    sub_258 = sub_19;
  };
  if (controller_cleaner) {
    v_1824 = false;
    sub_257 = sub_258;
  } else {
    v_1824 = sub_258;
    sub_257 = false;
  };
  if (controller_ck_17_1) {
    sub_256 = v_1824;
  } else {
    sub_256 = sub_257;
  };
  if (controller_c_pc) {
    sub_255 = sub_256;
  } else {
    sub_255 = sub_221;
  };
  if (controller_change_shift) {
    v_1829 = sub_223;
    sub_254 = sub_255;
  } else {
    v_1829 = sub_255;
    sub_254 = sub_223;
  };
  if (controller_ck_1) {
    v_1830 = v_1829;
  } else {
    v_1830 = sub_254;
  };
  if (controller_air_failed_recovered) {
    v_1831 = sub_163;
  } else {
    v_1831 = v_1830;
  };
  if (controller_c_air_1) {
    sub_242 = sub_243;
  } else {
    sub_242 = v_1831;
  };
  if (controller_v_408) {
    sub_266 = sub_43;
    sub_267 = sub_107;
  } else {
    sub_266 = sub_107;
    sub_267 = sub_43;
  };
  if (controller_light_failed_recovered) {
    sub_265 = sub_266;
  } else {
    sub_265 = sub_267;
  };
  if (controller_v_407) {
    v_1819 = sub_267;
  } else {
    v_1819 = sub_265;
  };
  if (controller_c_window) {
    sub_264 = v_1819;
  } else {
    sub_264 = sub_19;
  };
  if (controller_cleaner) {
    v_1820 = sub_41;
    sub_263 = sub_264;
  } else {
    v_1820 = sub_264;
    sub_263 = sub_41;
  };
  if (controller_ck_17_1) {
    sub_262 = v_1820;
  } else {
    sub_262 = sub_263;
  };
  if (controller_v_408) {
    sub_273 = false;
    sub_274 = sub_71;
  } else {
    sub_273 = sub_71;
    sub_274 = false;
  };
  if (controller_light_failed_recovered) {
    sub_272 = sub_273;
  } else {
    sub_272 = sub_274;
  };
  if (controller_v_407) {
    sub_271 = sub_274;
  } else {
    sub_271 = sub_272;
  };
  if (controller_c_window) {
    sub_270 = sub_271;
  } else {
    sub_270 = sub_70;
  };
  if (controller_cleaner) {
    v_1818 = false;
    sub_269 = sub_270;
  } else {
    v_1818 = sub_270;
    sub_269 = false;
  };
  if (controller_ck_17_1) {
    sub_268 = v_1818;
  } else {
    sub_268 = sub_269;
  };
  if (controller_c_door) {
    v_1822 = sub_268;
  } else {
    v_1822 = sub_262;
  };
  if (controller_c_pc) {
    v_1823 = v_1822;
  } else {
    v_1823 = sub_145;
  };
  if (controller_c_door) {
    v_1821 = sub_262;
  } else {
    v_1821 = sub_268;
  };
  if (controller_c_pc) {
    sub_261 = v_1821;
  } else {
    sub_261 = sub_140;
  };
  if (controller_ck_11_1) {
    sub_260 = v_1823;
  } else {
    sub_260 = sub_261;
  };
  if (controller_change_shift) {
    v_1832 = sub_146;
    sub_259 = sub_260;
  } else {
    v_1832 = sub_260;
    sub_259 = sub_146;
  };
  if (controller_ck_1) {
    v_1833 = v_1832;
  } else {
    v_1833 = sub_259;
  };
  if (controller_air_failed_recovered) {
    v_1834 = v_1833;
  } else {
    v_1834 = sub_121;
  };
  if (controller_c_air_1) {
    v_1835 = v_1834;
  } else {
    v_1835 = sub_120;
  };
  if (controller_v_445) {
    sub_241 = v_1835;
  } else {
    sub_241 = sub_242;
  };
  if (controller_light_failed_recovered) {
    v_1807 = sub_107;
    sub_282 = sub_267;
  } else {
    v_1807 = sub_266;
    sub_282 = sub_266;
  };
  if (controller_v_407) {
    v_1808 = v_1807;
  } else {
    v_1808 = sub_282;
  };
  if (controller_c_window) {
    sub_281 = v_1808;
  } else {
    sub_281 = sub_19;
  };
  if (controller_cleaner) {
    v_1809 = sub_41;
    sub_280 = sub_281;
  } else {
    v_1809 = sub_281;
    sub_280 = sub_41;
  };
  if (controller_ck_17_1) {
    sub_279 = v_1809;
  } else {
    sub_279 = sub_280;
  };
  if (controller_light_failed_recovered) {
    v_1804 = sub_71;
    sub_286 = sub_274;
  } else {
    v_1804 = sub_273;
    sub_286 = sub_273;
  };
  if (controller_v_407) {
    v_1805 = v_1804;
  } else {
    v_1805 = sub_286;
  };
  if (controller_c_window) {
    sub_285 = v_1805;
  } else {
    sub_285 = sub_70;
  };
  if (controller_cleaner) {
    v_1806 = false;
    sub_284 = sub_285;
  } else {
    v_1806 = sub_285;
    sub_284 = false;
  };
  if (controller_ck_17_1) {
    sub_283 = v_1806;
  } else {
    sub_283 = sub_284;
  };
  if (controller_c_door) {
    v_1812 = sub_283;
    v_1810 = sub_279;
  } else {
    v_1812 = sub_279;
    v_1810 = sub_283;
  };
  sub_287 = sub_106;
  sub_288 = sub_86;
  if (controller_c_door) {
    v_1813 = sub_288;
  } else {
    v_1813 = sub_287;
  };
  if (controller_c_pc) {
    v_1814 = v_1812;
  } else {
    v_1814 = v_1813;
  };
  if (controller_c_door) {
    v_1811 = sub_287;
  } else {
    v_1811 = sub_288;
  };
  if (controller_c_pc) {
    sub_278 = v_1810;
  } else {
    sub_278 = v_1811;
  };
  if (controller_ck_11_1) {
    sub_277 = v_1814;
  } else {
    sub_277 = sub_278;
  };
  if (controller_cleaner) {
    v_1798 = sub_55;
    sub_292 = sub_113;
  } else {
    v_1798 = sub_113;
    sub_292 = sub_55;
  };
  if (controller_ck_17_1) {
    sub_291 = v_1798;
  } else {
    sub_291 = sub_292;
  };
  if (controller_c_door) {
    v_1801 = sub_143;
    v_1799 = sub_291;
  } else {
    v_1801 = sub_291;
    v_1799 = sub_143;
  };
  sub_293 = sub_113;
  if (controller_c_door) {
    v_1802 = sub_288;
  } else {
    v_1802 = sub_293;
  };
  if (controller_c_pc) {
    v_1803 = v_1801;
  } else {
    v_1803 = v_1802;
  };
  if (controller_c_door) {
    v_1800 = sub_293;
  } else {
    v_1800 = sub_288;
  };
  if (controller_c_pc) {
    sub_290 = v_1799;
  } else {
    sub_290 = v_1800;
  };
  if (controller_ck_11_1) {
    sub_289 = v_1803;
  } else {
    sub_289 = sub_290;
  };
  if (controller_change_shift) {
    v_1815 = sub_289;
    sub_276 = sub_277;
  } else {
    v_1815 = sub_277;
    sub_276 = sub_289;
  };
  if (controller_ck_1) {
    v_1816 = v_1815;
  } else {
    v_1816 = sub_276;
  };
  if (controller_air_failed_recovered) {
    v_1817 = v_1816;
  } else {
    v_1817 = sub_121;
  };
  if (controller_c_air_1) {
    sub_275 = v_1817;
  } else {
    sub_275 = sub_120;
  };
  if (controller_c_window) {
    sub_299 = sub_67;
  } else {
    sub_299 = sub_19;
  };
  if (controller_cleaner) {
    v_1794 = sub_66;
    sub_298 = sub_299;
  } else {
    v_1794 = sub_299;
    sub_298 = sub_66;
  };
  if (controller_ck_17_1) {
    sub_297 = v_1794;
    sub_300 = sub_54;
  } else {
    sub_297 = sub_298;
    sub_300 = sub_56;
  };
  if (controller_c_door) {
    v_1796 = sub_300;
  } else {
    v_1796 = sub_297;
  };
  if (controller_c_pc) {
    v_1797 = v_1796;
  } else {
    v_1797 = sub_185;
  };
  if (controller_c_door) {
    v_1795 = sub_297;
  } else {
    v_1795 = sub_300;
  };
  if (controller_c_pc) {
    sub_296 = v_1795;
  } else {
    sub_296 = sub_178;
  };
  if (controller_ck_11_1) {
    sub_295 = v_1797;
  } else {
    sub_295 = sub_296;
  };
  if (controller_change_shift) {
    v_1892 = sub_186;
    sub_294 = sub_295;
  } else {
    v_1892 = sub_295;
    sub_294 = sub_186;
  };
  if (controller_ck_1) {
    v_1893 = v_1892;
  } else {
    v_1893 = sub_294;
  };
  if (controller_c_window) {
    sub_305 = sub_271;
  } else {
    sub_305 = sub_19;
  };
  if (controller_cleaner) {
    v = false;
    sub_304 = sub_305;
  } else {
    v = sub_305;
    sub_304 = false;
  };
  if (controller_ck_17_1) {
    sub_303 = v;
  } else {
    sub_303 = sub_304;
  };
  if (controller_c_pc) {
    sub_302 = sub_303;
  } else {
    sub_302 = sub_221;
  };
  if (controller_change_shift) {
    v_1894 = sub_223;
    sub_301 = sub_302;
  } else {
    v_1894 = sub_302;
    sub_301 = sub_223;
  };
  if (controller_ck_1) {
    v_1895 = v_1894;
  } else {
    v_1895 = sub_301;
  };
  if (controller_air_failed_recovered) {
    v_1896 = v_1893;
  } else {
    v_1896 = v_1895;
  };
  if (controller_c_air_1) {
    v_1897 = v_1896;
  } else {
    v_1897 = sub_243;
  };
  if (controller_v_445) {
    v_1898 = v_1897;
  } else {
    v_1898 = sub_275;
  };
  if (controller_v_447) {
    v_1899 = v_1898;
  } else {
    v_1899 = sub_241;
  };
  if (controller_v_446) {
    sub_116 = v_1899;
  } else {
    sub_116 = sub_117;
  };
  sub_115 = sub_116;
  sub_114 = sub_115;
  if (controller_worker) {
    v_1970 = sub_114;
    sub_1 = sub_2;
  } else {
    v_1970 = sub_2;
    sub_1 = sub_114;
  };
  if (controller_ck_15_1) {
    sub_0 = v_1970;
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
  sub_18 = p_controller_c_air_1;
  if (controller_v_392) {
    v_2180 = false;
    sub_17 = sub_18;
  } else {
    v_2180 = sub_18;
    sub_17 = false;
  };
  if (controller_v_391) {
    v_2179 = sub_18;
  } else {
    v_2179 = sub_17;
  };
  if (controller_blind_failed_recovered) {
    sub_16 = v_2179;
  } else {
    sub_16 = v_2180;
  };
  sub_20 = sub_18;
  sub_19 = sub_20;
  if (controller_c_window) {
    sub_15 = sub_16;
  } else {
    sub_15 = sub_19;
  };
  if (controller_cleaner) {
    v_2181 = sub_15;
    sub_14 = false;
  } else {
    v_2181 = false;
    sub_14 = sub_15;
  };
  if (controller_ck_17_1) {
    sub_13 = v_2181;
  } else {
    sub_13 = sub_14;
  };
  if (controller_c_door) {
    sub_12 = sub_13;
  } else {
    sub_12 = false;
  };
  if (controller_c_window) {
    sub_23 = sub_19;
  } else {
    sub_23 = false;
  };
  if (controller_cleaner) {
    v_2178 = sub_15;
    sub_22 = sub_23;
  } else {
    v_2178 = sub_23;
    sub_22 = sub_15;
  };
  if (controller_ck_17_1) {
    sub_21 = v_2178;
  } else {
    sub_21 = sub_22;
  };
  if (controller_cleaner) {
    v_2177 = false;
    sub_25 = sub_23;
  } else {
    v_2177 = sub_23;
    sub_25 = false;
  };
  if (controller_ck_17_1) {
    sub_24 = v_2177;
  } else {
    sub_24 = sub_25;
  };
  if (controller_c_door) {
    v_2183 = sub_24;
    v_2182 = sub_21;
  } else {
    v_2183 = sub_21;
    v_2182 = sub_24;
  };
  if (controller_c_pc) {
    sub_11 = sub_12;
  } else {
    sub_11 = v_2182;
  };
  if (controller_c_door) {
    sub_26 = false;
  } else {
    sub_26 = sub_13;
  };
  if (controller_c_pc) {
    v_2184 = sub_26;
  } else {
    v_2184 = v_2183;
  };
  if (controller_ck_11_1) {
    sub_10 = v_2184;
  } else {
    sub_10 = sub_11;
  };
  if (controller_c_window) {
    sub_32 = false;
  } else {
    sub_32 = sub_19;
  };
  if (controller_cleaner) {
    v_2173 = sub_32;
    sub_31 = false;
  } else {
    v_2173 = false;
    sub_31 = sub_32;
  };
  if (controller_ck_17_1) {
    sub_30 = v_2173;
  } else {
    sub_30 = sub_31;
  };
  if (controller_c_door) {
    sub_29 = sub_30;
  } else {
    sub_29 = false;
  };
  if (controller_cleaner) {
    v_2172 = sub_32;
    sub_34 = sub_23;
  } else {
    v_2172 = sub_23;
    sub_34 = sub_32;
  };
  if (controller_ck_17_1) {
    sub_33 = v_2172;
  } else {
    sub_33 = sub_34;
  };
  if (controller_c_door) {
    v_2175 = sub_24;
    v_2174 = sub_33;
  } else {
    v_2175 = sub_33;
    v_2174 = sub_24;
  };
  if (controller_c_pc) {
    sub_28 = sub_29;
  } else {
    sub_28 = v_2174;
  };
  if (controller_c_door) {
    sub_35 = false;
  } else {
    sub_35 = sub_30;
  };
  if (controller_c_pc) {
    v_2176 = sub_35;
  } else {
    v_2176 = v_2175;
  };
  if (controller_ck_11_1) {
    sub_27 = v_2176;
  } else {
    sub_27 = sub_28;
  };
  if (controller_change_shift) {
    v_2185 = sub_27;
    sub_9 = sub_10;
  } else {
    v_2185 = sub_10;
    sub_9 = sub_27;
  };
  if (controller_ck_1) {
    sub_8 = v_2185;
  } else {
    sub_8 = sub_9;
  };
  sub_7 = sub_8;
  v_2166 = !(controller_v_392);
  v_2167 = (v_2166||false);
  sub_44 = (controller_v_392||false);
  v_2165 = (controller_v_391||sub_44);
  if (controller_blind_failed_recovered) {
    sub_43 = v_2165;
  } else {
    sub_43 = v_2167;
  };
  sub_46 = true;
  sub_45 = sub_46;
  if (controller_c_window) {
    sub_42 = sub_43;
  } else {
    sub_42 = sub_45;
  };
  if (controller_cleaner) {
    v_2168 = sub_42;
    sub_41 = false;
  } else {
    v_2168 = false;
    sub_41 = sub_42;
  };
  if (controller_ck_17_1) {
    sub_40 = v_2168;
  } else {
    sub_40 = sub_41;
  };
  if (controller_c_door) {
    sub_39 = sub_40;
  } else {
    sub_39 = false;
  };
  if (controller_cleaner) {
    v_2164 = sub_42;
    sub_48 = sub_23;
  } else {
    v_2164 = sub_23;
    sub_48 = sub_42;
  };
  if (controller_ck_17_1) {
    sub_47 = v_2164;
  } else {
    sub_47 = sub_48;
  };
  if (controller_c_door) {
    v_2170 = sub_24;
    v_2169 = sub_47;
  } else {
    v_2170 = sub_47;
    v_2169 = sub_24;
  };
  if (controller_c_pc) {
    sub_38 = sub_39;
  } else {
    sub_38 = v_2169;
  };
  if (controller_c_door) {
    sub_49 = false;
  } else {
    sub_49 = sub_40;
  };
  if (controller_c_pc) {
    v_2171 = sub_49;
  } else {
    v_2171 = v_2170;
  };
  if (controller_ck_11_1) {
    sub_37 = v_2171;
  } else {
    sub_37 = sub_38;
  };
  if (controller_c_window) {
    sub_55 = false;
  } else {
    sub_55 = sub_45;
  };
  if (controller_cleaner) {
    v_2160 = sub_55;
    sub_54 = false;
  } else {
    v_2160 = false;
    sub_54 = sub_55;
  };
  if (controller_ck_17_1) {
    sub_53 = v_2160;
  } else {
    sub_53 = sub_54;
  };
  if (controller_c_door) {
    sub_52 = sub_53;
  } else {
    sub_52 = false;
  };
  if (controller_cleaner) {
    v_2159 = sub_55;
    sub_57 = sub_23;
  } else {
    v_2159 = sub_23;
    sub_57 = sub_55;
  };
  if (controller_ck_17_1) {
    sub_56 = v_2159;
  } else {
    sub_56 = sub_57;
  };
  if (controller_c_door) {
    v_2162 = sub_24;
    v_2161 = sub_56;
  } else {
    v_2162 = sub_56;
    v_2161 = sub_24;
  };
  if (controller_c_pc) {
    sub_51 = sub_52;
  } else {
    sub_51 = v_2161;
  };
  if (controller_c_door) {
    sub_58 = false;
  } else {
    sub_58 = sub_53;
  };
  if (controller_c_pc) {
    v_2163 = sub_58;
  } else {
    v_2163 = v_2162;
  };
  if (controller_ck_11_1) {
    sub_50 = v_2163;
  } else {
    sub_50 = sub_51;
  };
  if (controller_change_shift) {
    v_2186 = sub_50;
    sub_36 = sub_37;
  } else {
    v_2186 = sub_37;
    sub_36 = sub_50;
  };
  if (controller_ck_1) {
    v_2187 = v_2186;
  } else {
    v_2187 = sub_36;
  };
  sub_62 = sub_45;
  if (controller_cleaner) {
    v_2158 = sub_62;
    sub_61 = sub_23;
  } else {
    v_2158 = sub_23;
    sub_61 = sub_62;
  };
  if (controller_ck_17_1) {
    sub_60 = v_2158;
  } else {
    sub_60 = sub_61;
  };
  if (controller_c_pc) {
    sub_59 = false;
  } else {
    sub_59 = sub_60;
  };
  if (controller_air_failed_recovered) {
    v_2188 = v_2187;
  } else {
    v_2188 = sub_59;
  };
  if (controller_v_445) {
    sub_6 = v_2188;
  } else {
    sub_6 = sub_7;
  };
  if (controller_c_pc) {
    sub_64 = false;
  } else {
    sub_64 = sub_24;
  };
  sub_63 = sub_64;
  if (controller_v_447) {
    sub_5 = sub_63;
  } else {
    sub_5 = sub_6;
  };
  v_2149 = (controller_v_392&&false);
  v_2147 = !(controller_v_391);
  v_2146 = !(controller_v_392);
  sub_74 = (v_2146&&false);
  v_2148 = (v_2147&&sub_74);
  if (controller_blind_failed_recovered) {
    sub_73 = v_2148;
  } else {
    sub_73 = v_2149;
  };
  sub_76 = false;
  sub_75 = sub_76;
  if (controller_c_window) {
    sub_72 = sub_73;
  } else {
    sub_72 = sub_75;
  };
  if (controller_cleaner) {
    v_2150 = sub_72;
    sub_71 = false;
  } else {
    v_2150 = false;
    sub_71 = sub_72;
  };
  if (controller_ck_17_1) {
    sub_70 = v_2150;
  } else {
    sub_70 = sub_71;
  };
  if (controller_c_door) {
    v_2153 = false;
    v_2151 = sub_70;
  } else {
    v_2153 = sub_70;
    v_2151 = false;
  };
  if (controller_c_window) {
    sub_79 = sub_75;
  } else {
    sub_79 = false;
  };
  v_2144 = (controller_v_392||sub_18);
  v_2142 = !(controller_v_392);
  sub_82 = (v_2142||sub_18);
  if (controller_v_391) {
    v_2143 = sub_18;
  } else {
    v_2143 = sub_82;
  };
  if (controller_blind_failed_recovered) {
    sub_81 = v_2143;
  } else {
    sub_81 = v_2144;
  };
  if (controller_c_window) {
    sub_80 = sub_81;
  } else {
    sub_80 = sub_19;
  };
  if (controller_cleaner) {
    v_2145 = sub_80;
    sub_78 = sub_79;
  } else {
    v_2145 = sub_79;
    sub_78 = sub_80;
  };
  if (controller_ck_17_1) {
    sub_77 = v_2145;
  } else {
    sub_77 = sub_78;
  };
  if (controller_cleaner) {
    v_2141 = sub_62;
    sub_84 = sub_79;
  } else {
    v_2141 = sub_79;
    sub_84 = sub_62;
  };
  if (controller_ck_17_1) {
    sub_83 = v_2141;
  } else {
    sub_83 = sub_84;
  };
  if (controller_c_door) {
    v_2154 = sub_83;
  } else {
    v_2154 = sub_77;
  };
  if (controller_c_pc) {
    v_2155 = v_2153;
  } else {
    v_2155 = v_2154;
  };
  if (controller_c_door) {
    v_2152 = sub_77;
  } else {
    v_2152 = sub_83;
  };
  if (controller_c_pc) {
    sub_69 = v_2151;
  } else {
    sub_69 = v_2152;
  };
  if (controller_ck_11_1) {
    sub_68 = v_2155;
  } else {
    sub_68 = sub_69;
  };
  if (controller_c_window) {
    sub_89 = false;
  } else {
    sub_89 = sub_75;
  };
  if (controller_cleaner) {
    sub_88 = false;
    sub_90 = sub_89;
  } else {
    sub_88 = sub_89;
    sub_90 = false;
  };
  if (controller_ck_17_1) {
    sub_87 = sub_90;
  } else {
    sub_87 = sub_88;
  };
  if (controller_c_door) {
    v_2138 = false;
    v_2136 = sub_87;
  } else {
    v_2138 = sub_87;
    v_2136 = false;
  };
  if (controller_c_window) {
    sub_93 = sub_45;
  } else {
    sub_93 = sub_19;
  };
  if (controller_cleaner) {
    v_2135 = sub_93;
    sub_92 = sub_79;
  } else {
    v_2135 = sub_79;
    sub_92 = sub_93;
  };
  if (controller_ck_17_1) {
    sub_91 = v_2135;
  } else {
    sub_91 = sub_92;
  };
  if (controller_c_door) {
    v_2139 = sub_83;
  } else {
    v_2139 = sub_91;
  };
  if (controller_c_pc) {
    v_2140 = v_2138;
  } else {
    v_2140 = v_2139;
  };
  if (controller_c_door) {
    v_2137 = sub_91;
  } else {
    v_2137 = sub_83;
  };
  if (controller_c_pc) {
    sub_86 = v_2136;
  } else {
    sub_86 = v_2137;
  };
  if (controller_ck_11_1) {
    sub_85 = v_2140;
  } else {
    sub_85 = sub_86;
  };
  if (controller_change_shift) {
    v_2156 = sub_85;
    sub_67 = sub_68;
  } else {
    v_2156 = sub_68;
    sub_67 = sub_85;
  };
  if (controller_ck_1) {
    v_2157 = v_2156;
  } else {
    v_2157 = sub_67;
  };
  if (controller_c_pc) {
    sub_94 = false;
  } else {
    sub_94 = sub_83;
  };
  if (controller_air_failed_recovered) {
    sub_66 = v_2157;
  } else {
    sub_66 = sub_94;
  };
  if (controller_v_445) {
    sub_65 = sub_7;
  } else {
    sub_65 = sub_66;
  };
  if (controller_cleaner) {
    v_2129 = sub_80;
    sub_100 = sub_23;
  } else {
    v_2129 = sub_23;
    sub_100 = sub_80;
  };
  if (controller_ck_17_1) {
    sub_99 = v_2129;
  } else {
    sub_99 = sub_100;
  };
  if (controller_c_door) {
    v_2131 = sub_60;
  } else {
    v_2131 = sub_99;
  };
  if (controller_c_pc) {
    v_2132 = sub_26;
  } else {
    v_2132 = v_2131;
  };
  if (controller_c_door) {
    v_2130 = sub_99;
  } else {
    v_2130 = sub_60;
  };
  if (controller_c_pc) {
    sub_98 = sub_12;
  } else {
    sub_98 = v_2130;
  };
  if (controller_ck_11_1) {
    sub_97 = v_2132;
  } else {
    sub_97 = sub_98;
  };
  if (controller_cleaner) {
    v_2125 = sub_93;
    sub_104 = sub_23;
  } else {
    v_2125 = sub_23;
    sub_104 = sub_93;
  };
  if (controller_ck_17_1) {
    sub_103 = v_2125;
  } else {
    sub_103 = sub_104;
  };
  if (controller_c_door) {
    v_2127 = sub_60;
  } else {
    v_2127 = sub_103;
  };
  if (controller_c_pc) {
    v_2128 = sub_35;
  } else {
    v_2128 = v_2127;
  };
  if (controller_c_door) {
    v_2126 = sub_103;
  } else {
    v_2126 = sub_60;
  };
  if (controller_c_pc) {
    sub_102 = sub_29;
  } else {
    sub_102 = v_2126;
  };
  if (controller_ck_11_1) {
    sub_101 = v_2128;
  } else {
    sub_101 = sub_102;
  };
  if (controller_change_shift) {
    v_2133 = sub_101;
    sub_96 = sub_97;
  } else {
    v_2133 = sub_97;
    sub_96 = sub_101;
  };
  if (controller_ck_1) {
    v_2134 = v_2133;
  } else {
    v_2134 = sub_96;
  };
  if (controller_air_failed_recovered) {
    sub_95 = v_2134;
  } else {
    sub_95 = sub_8;
  };
  if (controller_c_window) {
    sub_110 = sub_45;
  } else {
    sub_110 = false;
  };
  v_2119 = !(controller_v_392);
  v_2120 = (v_2119&&sub_18);
  sub_113 = (controller_v_392&&sub_18);
  if (controller_v_391) {
    v_2118 = sub_18;
  } else {
    v_2118 = sub_113;
  };
  if (controller_blind_failed_recovered) {
    sub_112 = v_2118;
  } else {
    sub_112 = v_2120;
  };
  if (controller_c_window) {
    sub_111 = sub_112;
  } else {
    sub_111 = sub_19;
  };
  if (controller_cleaner) {
    v_2121 = sub_111;
    sub_109 = sub_110;
  } else {
    v_2121 = sub_110;
    sub_109 = sub_111;
  };
  if (controller_ck_17_1) {
    sub_108 = v_2121;
  } else {
    sub_108 = sub_109;
  };
  sub_116 = sub_75;
  if (controller_cleaner) {
    v_2117 = sub_116;
    sub_115 = sub_110;
  } else {
    v_2117 = sub_110;
    sub_115 = sub_116;
  };
  if (controller_ck_17_1) {
    sub_114 = v_2117;
  } else {
    sub_114 = sub_115;
  };
  if (controller_c_door) {
    v_2123 = sub_114;
  } else {
    v_2123 = sub_108;
  };
  if (controller_c_pc) {
    v_2124 = sub_49;
  } else {
    v_2124 = v_2123;
  };
  if (controller_c_door) {
    v_2122 = sub_108;
  } else {
    v_2122 = sub_114;
  };
  if (controller_c_pc) {
    sub_107 = sub_39;
  } else {
    sub_107 = v_2122;
  };
  if (controller_ck_11_1) {
    sub_106 = v_2124;
  } else {
    sub_106 = sub_107;
  };
  if (controller_c_window) {
    sub_121 = sub_75;
  } else {
    sub_121 = sub_19;
  };
  if (controller_cleaner) {
    v_2113 = sub_121;
    sub_120 = sub_110;
  } else {
    v_2113 = sub_110;
    sub_120 = sub_121;
  };
  if (controller_ck_17_1) {
    sub_119 = v_2113;
  } else {
    sub_119 = sub_120;
  };
  if (controller_c_door) {
    v_2115 = sub_114;
  } else {
    v_2115 = sub_119;
  };
  if (controller_c_pc) {
    v_2116 = sub_58;
  } else {
    v_2116 = v_2115;
  };
  if (controller_c_door) {
    v_2114 = sub_119;
  } else {
    v_2114 = sub_114;
  };
  if (controller_c_pc) {
    sub_118 = sub_52;
  } else {
    sub_118 = v_2114;
  };
  if (controller_ck_11_1) {
    sub_117 = v_2116;
  } else {
    sub_117 = sub_118;
  };
  if (controller_change_shift) {
    v_2189 = sub_117;
    sub_105 = sub_106;
  } else {
    v_2189 = sub_106;
    sub_105 = sub_117;
  };
  if (controller_ck_1) {
    v_2190 = v_2189;
  } else {
    v_2190 = sub_105;
  };
  if (controller_c_pc) {
    sub_122 = false;
  } else {
    sub_122 = sub_114;
  };
  if (controller_air_failed_recovered) {
    v_2191 = v_2190;
  } else {
    v_2191 = sub_122;
  };
  if (controller_v_445) {
    v_2192 = v_2191;
  } else {
    v_2192 = sub_95;
  };
  if (controller_v_447) {
    v_2193 = v_2192;
  } else {
    v_2193 = sub_65;
  };
  if (controller_v_446) {
    sub_4 = v_2193;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_132 = sub_15;
  if (controller_ck_17_1) {
    sub_133 = sub_88;
  } else {
    sub_133 = sub_90;
  };
  if (controller_c_door) {
    v_2096 = sub_133;
    v_2094 = sub_132;
  } else {
    v_2096 = sub_132;
    v_2094 = sub_133;
  };
  if (controller_cleaner) {
    v_2093 = sub_15;
    sub_135 = sub_111;
  } else {
    v_2093 = sub_111;
    sub_135 = sub_15;
  };
  if (controller_ck_17_1) {
    sub_134 = v_2093;
  } else {
    sub_134 = sub_135;
  };
  if (controller_cleaner) {
    v_2092 = false;
    sub_137 = sub_116;
  } else {
    v_2092 = sub_116;
    sub_137 = false;
  };
  if (controller_ck_17_1) {
    sub_136 = v_2092;
  } else {
    sub_136 = sub_137;
  };
  if (controller_c_door) {
    v_2097 = sub_136;
  } else {
    v_2097 = sub_134;
  };
  if (controller_c_pc) {
    v_2098 = v_2096;
  } else {
    v_2098 = v_2097;
  };
  if (controller_c_door) {
    v_2095 = sub_134;
  } else {
    v_2095 = sub_136;
  };
  if (controller_c_pc) {
    sub_131 = v_2094;
  } else {
    sub_131 = v_2095;
  };
  if (controller_ck_11_1) {
    sub_130 = v_2098;
  } else {
    sub_130 = sub_131;
  };
  if (controller_v_408) {
    v_2089 = sub_73;
    sub_146 = false;
  } else {
    v_2089 = false;
    sub_146 = sub_73;
  };
  if (controller_light_failed_recovered) {
    v_2090 = sub_73;
    sub_145 = v_2089;
  } else {
    v_2090 = sub_146;
    sub_145 = sub_146;
  };
  if (controller_v_407) {
    sub_144 = v_2090;
  } else {
    sub_144 = sub_145;
  };
  if (controller_c_window) {
    sub_143 = sub_144;
  } else {
    sub_143 = sub_19;
  };
  if (controller_cleaner) {
    v_2091 = sub_32;
    sub_142 = sub_143;
  } else {
    v_2091 = sub_143;
    sub_142 = sub_32;
  };
  if (controller_ck_17_1) {
    sub_141 = v_2091;
  } else {
    sub_141 = sub_142;
  };
  sub_149 = sub_144;
  if (controller_cleaner) {
    v_2088 = false;
    sub_148 = sub_149;
  } else {
    v_2088 = sub_149;
    sub_148 = false;
  };
  if (controller_ck_17_1) {
    sub_147 = v_2088;
  } else {
    sub_147 = sub_148;
  };
  if (controller_c_door) {
    sub_140 = sub_141;
  } else {
    sub_140 = sub_147;
  };
  sub_139 = sub_140;
  if (controller_c_door) {
    sub_150 = sub_147;
  } else {
    sub_150 = sub_141;
  };
  if (controller_ck_11_1) {
    sub_138 = sub_150;
  } else {
    sub_138 = sub_139;
  };
  if (controller_change_shift) {
    v_2099 = sub_138;
    sub_129 = sub_130;
  } else {
    v_2099 = sub_130;
    sub_129 = sub_138;
  };
  if (controller_ck_1) {
    v_2100 = v_2099;
  } else {
    v_2100 = sub_129;
  };
  if (controller_c_door) {
    sub_155 = sub_132;
  } else {
    sub_155 = false;
  };
  sub_154 = sub_155;
  if (controller_c_door) {
    sub_156 = false;
  } else {
    sub_156 = sub_132;
  };
  if (controller_ck_11_1) {
    sub_153 = sub_156;
  } else {
    sub_153 = sub_154;
  };
  sub_160 = sub_32;
  if (controller_c_door) {
    sub_159 = sub_160;
  } else {
    sub_159 = false;
  };
  sub_158 = sub_159;
  if (controller_c_door) {
    sub_161 = false;
  } else {
    sub_161 = sub_160;
  };
  if (controller_ck_11_1) {
    sub_157 = sub_161;
  } else {
    sub_157 = sub_158;
  };
  if (controller_change_shift) {
    v_2087 = sub_157;
    sub_152 = sub_153;
  } else {
    v_2087 = sub_153;
    sub_152 = sub_157;
  };
  if (controller_ck_1) {
    sub_151 = v_2087;
  } else {
    sub_151 = sub_152;
  };
  if (controller_air_failed_recovered) {
    sub_128 = v_2100;
  } else {
    sub_128 = sub_151;
  };
  if (controller_v_408) {
    v_2079 = sub_43;
    sub_169 = sub_46;
  } else {
    v_2079 = sub_46;
    sub_169 = sub_43;
  };
  if (controller_light_failed_recovered) {
    sub_168 = v_2079;
  } else {
    sub_168 = sub_169;
  };
  if (controller_v_407) {
    v_2080 = sub_169;
  } else {
    v_2080 = sub_168;
  };
  if (controller_c_window) {
    sub_167 = v_2080;
  } else {
    sub_167 = sub_19;
  };
  if (controller_cleaner) {
    v_2081 = sub_42;
    sub_166 = sub_167;
  } else {
    v_2081 = sub_167;
    sub_166 = sub_42;
  };
  if (controller_ck_17_1) {
    sub_165 = v_2081;
  } else {
    sub_165 = sub_166;
  };
  if (controller_v_408) {
    sub_175 = false;
    sub_176 = sub_46;
  } else {
    sub_175 = sub_46;
    sub_176 = false;
  };
  if (controller_light_failed_recovered) {
    sub_174 = sub_175;
  } else {
    sub_174 = sub_176;
  };
  if (controller_v_407) {
    sub_173 = sub_176;
  } else {
    sub_173 = sub_174;
  };
  if (controller_c_window) {
    sub_172 = sub_173;
  } else {
    sub_172 = sub_19;
  };
  if (controller_cleaner) {
    v_2078 = false;
    sub_171 = sub_172;
  } else {
    v_2078 = sub_172;
    sub_171 = false;
  };
  if (controller_ck_17_1) {
    sub_170 = v_2078;
  } else {
    sub_170 = sub_171;
  };
  if (controller_c_door) {
    v_2084 = sub_170;
    v_2082 = sub_165;
  } else {
    v_2084 = sub_165;
    v_2082 = sub_170;
  };
  sub_179 = sub_19;
  if (controller_cleaner) {
    v_2077 = sub_42;
    sub_178 = sub_179;
  } else {
    v_2077 = sub_179;
    sub_178 = sub_42;
  };
  if (controller_ck_17_1) {
    sub_177 = v_2077;
  } else {
    sub_177 = sub_178;
  };
  if (controller_cleaner) {
    v_2076 = false;
    sub_181 = sub_179;
  } else {
    v_2076 = sub_179;
    sub_181 = false;
  };
  if (controller_ck_17_1) {
    sub_180 = v_2076;
  } else {
    sub_180 = sub_181;
  };
  if (controller_c_door) {
    v_2085 = sub_180;
  } else {
    v_2085 = sub_177;
  };
  if (controller_c_pc) {
    v_2086 = v_2084;
  } else {
    v_2086 = v_2085;
  };
  if (controller_c_door) {
    v_2083 = sub_177;
  } else {
    v_2083 = sub_180;
  };
  if (controller_c_pc) {
    sub_164 = v_2082;
  } else {
    sub_164 = v_2083;
  };
  if (controller_ck_11_1) {
    sub_163 = v_2086;
  } else {
    sub_163 = sub_164;
  };
  if (controller_v_408) {
    v_2073 = sub_16;
    sub_190 = false;
  } else {
    v_2073 = false;
    sub_190 = sub_16;
  };
  if (controller_light_failed_recovered) {
    v_2074 = sub_16;
    sub_189 = v_2073;
  } else {
    v_2074 = sub_190;
    sub_189 = sub_190;
  };
  if (controller_v_407) {
    sub_188 = v_2074;
  } else {
    sub_188 = sub_189;
  };
  if (controller_v_408) {
    v_2071 = sub_81;
    sub_193 = sub_46;
  } else {
    v_2071 = sub_46;
    sub_193 = sub_81;
  };
  if (controller_light_failed_recovered) {
    v_2072 = sub_81;
    sub_192 = v_2071;
  } else {
    v_2072 = sub_193;
    sub_192 = sub_193;
  };
  if (controller_v_407) {
    sub_191 = v_2072;
  } else {
    sub_191 = sub_192;
  };
  if (controller_c_window) {
    sub_187 = sub_188;
  } else {
    sub_187 = sub_191;
  };
  if (controller_cleaner) {
    v_2075 = sub_55;
    sub_186 = sub_187;
  } else {
    v_2075 = sub_187;
    sub_186 = sub_55;
  };
  if (controller_ck_17_1) {
    sub_185 = v_2075;
  } else {
    sub_185 = sub_186;
  };
  sub_196 = sub_188;
  if (controller_cleaner) {
    v_2070 = false;
    sub_195 = sub_196;
  } else {
    v_2070 = sub_196;
    sub_195 = false;
  };
  if (controller_ck_17_1) {
    sub_194 = v_2070;
  } else {
    sub_194 = sub_195;
  };
  if (controller_c_door) {
    sub_184 = sub_185;
  } else {
    sub_184 = sub_194;
  };
  sub_183 = sub_184;
  if (controller_c_door) {
    sub_197 = sub_194;
  } else {
    sub_197 = sub_185;
  };
  if (controller_ck_11_1) {
    sub_182 = sub_197;
  } else {
    sub_182 = sub_183;
  };
  if (controller_change_shift) {
    v_2101 = sub_182;
    sub_162 = sub_163;
  } else {
    v_2101 = sub_163;
    sub_162 = sub_182;
  };
  if (controller_ck_1) {
    v_2102 = v_2101;
  } else {
    v_2102 = sub_162;
  };
  if (controller_cleaner) {
    v_2069 = false;
    sub_201 = sub_93;
  } else {
    v_2069 = sub_93;
    sub_201 = false;
  };
  if (controller_ck_17_1) {
    sub_200 = v_2069;
  } else {
    sub_200 = sub_201;
  };
  if (controller_cleaner) {
    v_2068 = sub_62;
    sub_204 = sub_179;
  } else {
    v_2068 = sub_179;
    sub_204 = sub_62;
  };
  if (controller_ck_17_1) {
    sub_203 = v_2068;
  } else {
    sub_203 = sub_204;
  };
  sub_202 = sub_203;
  if (controller_c_pc) {
    sub_199 = sub_200;
  } else {
    sub_199 = sub_202;
  };
  sub_208 = sub_191;
  if (controller_cleaner) {
    v_2067 = false;
    sub_207 = sub_208;
  } else {
    v_2067 = sub_208;
    sub_207 = false;
  };
  if (controller_ck_17_1) {
    sub_206 = v_2067;
  } else {
    sub_206 = sub_207;
  };
  if (controller_cleaner) {
    v_2066 = sub_62;
    sub_210 = sub_208;
  } else {
    v_2066 = sub_208;
    sub_210 = sub_62;
  };
  if (controller_ck_17_1) {
    sub_209 = v_2066;
  } else {
    sub_209 = sub_210;
  };
  if (controller_c_pc) {
    sub_205 = sub_206;
  } else {
    sub_205 = sub_209;
  };
  if (controller_change_shift) {
    v_2103 = sub_205;
    sub_198 = sub_199;
  } else {
    v_2103 = sub_199;
    sub_198 = sub_205;
  };
  if (controller_ck_1) {
    v_2104 = v_2103;
  } else {
    v_2104 = sub_198;
  };
  if (controller_air_failed_recovered) {
    v_2105 = v_2102;
  } else {
    v_2105 = v_2104;
  };
  if (controller_v_445) {
    sub_127 = v_2105;
  } else {
    sub_127 = sub_128;
  };
  if (controller_v_408) {
    v_2062 = false;
    sub_218 = sub_20;
  } else {
    v_2062 = sub_20;
    sub_218 = false;
  };
  if (controller_light_failed_recovered) {
    sub_217 = v_2062;
  } else {
    sub_217 = sub_218;
  };
  if (controller_v_407) {
    v_2063 = sub_218;
  } else {
    v_2063 = sub_217;
  };
  if (controller_c_window) {
    sub_216 = v_2063;
  } else {
    sub_216 = sub_19;
  };
  if (controller_cleaner) {
    v_2064 = false;
    sub_215 = sub_216;
  } else {
    v_2064 = sub_216;
    sub_215 = false;
  };
  if (controller_ck_17_1) {
    sub_214 = v_2064;
  } else {
    sub_214 = sub_215;
  };
  if (controller_c_pc) {
    sub_213 = sub_214;
  } else {
    sub_213 = sub_180;
  };
  sub_220 = sub_194;
  sub_219 = sub_220;
  if (controller_change_shift) {
    v_2065 = sub_219;
    sub_212 = sub_213;
  } else {
    v_2065 = sub_213;
    sub_212 = sub_219;
  };
  if (controller_ck_1) {
    sub_211 = v_2065;
  } else {
    sub_211 = sub_212;
  };
  if (controller_v_447) {
    sub_126 = sub_211;
  } else {
    sub_126 = sub_127;
  };
  if (controller_v_408) {
    v_2046 = sub_20;
    v_2045 = sub_81;
    sub_230 = sub_76;
  } else {
    v_2046 = sub_81;
    v_2045 = sub_76;
    sub_230 = sub_81;
  };
  if (controller_light_failed_recovered) {
    v_2047 = v_2046;
    sub_229 = v_2045;
  } else {
    v_2047 = sub_230;
    sub_229 = sub_230;
  };
  if (controller_v_407) {
    v_2048 = v_2047;
  } else {
    v_2048 = sub_229;
  };
  if (controller_c_window) {
    sub_228 = v_2048;
  } else {
    sub_228 = sub_19;
  };
  if (controller_cleaner) {
    v_2049 = sub_72;
    sub_227 = sub_228;
  } else {
    v_2049 = sub_228;
    sub_227 = sub_72;
  };
  if (controller_ck_17_1) {
    sub_226 = v_2049;
  } else {
    sub_226 = sub_227;
  };
  if (controller_v_408) {
    v_2041 = sub_20;
    sub_235 = sub_46;
    sub_236 = sub_76;
  } else {
    v_2041 = sub_46;
    sub_235 = sub_76;
    sub_236 = sub_46;
  };
  if (controller_light_failed_recovered) {
    v_2042 = v_2041;
    sub_234 = sub_235;
  } else {
    v_2042 = sub_236;
    sub_234 = sub_236;
  };
  if (controller_v_407) {
    v_2043 = v_2042;
  } else {
    v_2043 = sub_234;
  };
  if (controller_c_window) {
    sub_233 = v_2043;
  } else {
    sub_233 = sub_19;
  };
  if (controller_cleaner) {
    v_2044 = false;
    sub_232 = sub_233;
  } else {
    v_2044 = sub_233;
    sub_232 = false;
  };
  if (controller_ck_17_1) {
    sub_231 = v_2044;
  } else {
    sub_231 = sub_232;
  };
  if (controller_c_door) {
    v_2052 = sub_231;
    v_2050 = sub_226;
  } else {
    v_2052 = sub_226;
    v_2050 = sub_231;
  };
  if (controller_cleaner) {
    v_2040 = sub_80;
    sub_238 = sub_179;
  } else {
    v_2040 = sub_179;
    sub_238 = sub_80;
  };
  if (controller_ck_17_1) {
    sub_237 = v_2040;
  } else {
    sub_237 = sub_238;
  };
  if (controller_c_door) {
    v_2053 = sub_203;
  } else {
    v_2053 = sub_237;
  };
  if (controller_c_pc) {
    v_2054 = v_2052;
  } else {
    v_2054 = v_2053;
  };
  if (controller_c_door) {
    v_2051 = sub_237;
  } else {
    v_2051 = sub_203;
  };
  if (controller_c_pc) {
    sub_225 = v_2050;
  } else {
    sub_225 = v_2051;
  };
  if (controller_ck_11_1) {
    sub_224 = v_2054;
  } else {
    sub_224 = sub_225;
  };
  if (controller_c_window) {
    sub_243 = sub_191;
  } else {
    sub_243 = sub_19;
  };
  if (controller_cleaner) {
    v_2034 = sub_89;
    sub_242 = sub_243;
  } else {
    v_2034 = sub_243;
    sub_242 = sub_89;
  };
  if (controller_ck_17_1) {
    sub_241 = v_2034;
  } else {
    sub_241 = sub_242;
  };
  if (controller_c_door) {
    v_2037 = sub_206;
    v_2035 = sub_241;
  } else {
    v_2037 = sub_241;
    v_2035 = sub_206;
  };
  if (controller_cleaner) {
    v_2033 = sub_93;
    sub_245 = sub_243;
  } else {
    v_2033 = sub_243;
    sub_245 = sub_93;
  };
  if (controller_ck_17_1) {
    sub_244 = v_2033;
  } else {
    sub_244 = sub_245;
  };
  if (controller_c_door) {
    v_2038 = sub_209;
  } else {
    v_2038 = sub_244;
  };
  if (controller_c_pc) {
    v_2039 = v_2037;
  } else {
    v_2039 = v_2038;
  };
  if (controller_c_door) {
    v_2036 = sub_244;
  } else {
    v_2036 = sub_209;
  };
  if (controller_c_pc) {
    sub_240 = v_2035;
  } else {
    sub_240 = v_2036;
  };
  if (controller_ck_11_1) {
    sub_239 = v_2039;
  } else {
    sub_239 = sub_240;
  };
  if (controller_change_shift) {
    v_2055 = sub_239;
    sub_223 = sub_224;
  } else {
    v_2055 = sub_224;
    sub_223 = sub_239;
  };
  if (controller_ck_1) {
    v_2056 = v_2055;
  } else {
    v_2056 = sub_223;
  };
  if (controller_c_pc) {
    sub_247 = sub_231;
  } else {
    sub_247 = sub_202;
  };
  if (controller_change_shift) {
    v_2057 = sub_205;
    sub_246 = sub_247;
  } else {
    v_2057 = sub_247;
    sub_246 = sub_205;
  };
  if (controller_ck_1) {
    v_2058 = v_2057;
  } else {
    v_2058 = sub_246;
  };
  if (controller_air_failed_recovered) {
    sub_222 = v_2056;
  } else {
    sub_222 = v_2058;
  };
  if (controller_v_408) {
    sub_255 = sub_16;
    sub_256 = sub_81;
  } else {
    sub_255 = sub_81;
    sub_256 = sub_16;
  };
  if (controller_light_failed_recovered) {
    sub_254 = sub_255;
  } else {
    sub_254 = sub_256;
  };
  if (controller_v_407) {
    v_2026 = sub_256;
  } else {
    v_2026 = sub_254;
  };
  if (controller_c_window) {
    sub_253 = v_2026;
  } else {
    sub_253 = sub_19;
  };
  if (controller_cleaner) {
    v_2027 = sub_15;
    sub_252 = sub_253;
  } else {
    v_2027 = sub_253;
    sub_252 = sub_15;
  };
  if (controller_ck_17_1) {
    sub_251 = v_2027;
  } else {
    sub_251 = sub_252;
  };
  if (controller_c_window) {
    sub_259 = sub_173;
  } else {
    sub_259 = sub_45;
  };
  if (controller_cleaner) {
    v_2025 = false;
    sub_258 = sub_259;
  } else {
    v_2025 = sub_259;
    sub_258 = false;
  };
  if (controller_ck_17_1) {
    sub_257 = v_2025;
  } else {
    sub_257 = sub_258;
  };
  if (controller_c_door) {
    v_2030 = sub_257;
    v_2028 = sub_251;
  } else {
    v_2030 = sub_251;
    v_2028 = sub_257;
  };
  if (controller_cleaner) {
    v_2024 = sub_15;
    sub_261 = sub_80;
  } else {
    v_2024 = sub_80;
    sub_261 = sub_15;
  };
  if (controller_ck_17_1) {
    sub_260 = v_2024;
  } else {
    sub_260 = sub_261;
  };
  if (controller_cleaner) {
    v_2023 = false;
    sub_263 = sub_62;
  } else {
    v_2023 = sub_62;
    sub_263 = false;
  };
  if (controller_ck_17_1) {
    sub_262 = v_2023;
  } else {
    sub_262 = sub_263;
  };
  if (controller_c_door) {
    v_2031 = sub_262;
  } else {
    v_2031 = sub_260;
  };
  if (controller_c_pc) {
    v_2032 = v_2030;
  } else {
    v_2032 = v_2031;
  };
  if (controller_c_door) {
    v_2029 = sub_260;
  } else {
    v_2029 = sub_262;
  };
  if (controller_c_pc) {
    sub_250 = v_2028;
  } else {
    sub_250 = v_2029;
  };
  if (controller_ck_11_1) {
    sub_249 = v_2032;
  } else {
    sub_249 = sub_250;
  };
  if (controller_v_408) {
    v_2020 = sub_43;
    sub_272 = false;
  } else {
    v_2020 = false;
    sub_272 = sub_43;
  };
  if (controller_light_failed_recovered) {
    v_2021 = sub_43;
    sub_271 = v_2020;
  } else {
    v_2021 = sub_272;
    sub_271 = sub_272;
  };
  if (controller_v_407) {
    sub_270 = v_2021;
  } else {
    sub_270 = sub_271;
  };
  if (controller_c_window) {
    sub_269 = sub_270;
  } else {
    sub_269 = sub_19;
  };
  if (controller_cleaner) {
    v_2022 = sub_32;
    sub_268 = sub_269;
  } else {
    v_2022 = sub_269;
    sub_268 = sub_32;
  };
  if (controller_ck_17_1) {
    sub_267 = v_2022;
  } else {
    sub_267 = sub_268;
  };
  sub_275 = sub_270;
  if (controller_cleaner) {
    v_2019 = false;
    sub_274 = sub_275;
  } else {
    v_2019 = sub_275;
    sub_274 = false;
  };
  if (controller_ck_17_1) {
    sub_273 = v_2019;
  } else {
    sub_273 = sub_274;
  };
  if (controller_c_door) {
    sub_266 = sub_267;
  } else {
    sub_266 = sub_273;
  };
  sub_265 = sub_266;
  if (controller_c_door) {
    sub_276 = sub_273;
  } else {
    sub_276 = sub_267;
  };
  if (controller_ck_11_1) {
    sub_264 = sub_276;
  } else {
    sub_264 = sub_265;
  };
  if (controller_change_shift) {
    v_2059 = sub_264;
    sub_248 = sub_249;
  } else {
    v_2059 = sub_249;
    sub_248 = sub_264;
  };
  if (controller_ck_1) {
    v_2060 = v_2059;
  } else {
    v_2060 = sub_248;
  };
  if (controller_air_failed_recovered) {
    v_2061 = v_2060;
  } else {
    v_2061 = sub_151;
  };
  if (controller_v_445) {
    sub_221 = v_2061;
  } else {
    sub_221 = sub_222;
  };
  if (controller_light_failed_recovered) {
    v_2009 = sub_81;
    sub_284 = sub_256;
  } else {
    v_2009 = sub_255;
    sub_284 = sub_255;
  };
  if (controller_v_407) {
    v_2010 = v_2009;
  } else {
    v_2010 = sub_284;
  };
  if (controller_c_window) {
    sub_283 = v_2010;
  } else {
    sub_283 = sub_19;
  };
  if (controller_cleaner) {
    v_2011 = sub_15;
    sub_282 = sub_283;
  } else {
    v_2011 = sub_283;
    sub_282 = sub_15;
  };
  if (controller_ck_17_1) {
    sub_281 = v_2011;
  } else {
    sub_281 = sub_282;
  };
  if (controller_light_failed_recovered) {
    v_2006 = sub_46;
    sub_288 = sub_176;
  } else {
    v_2006 = sub_175;
    sub_288 = sub_175;
  };
  if (controller_v_407) {
    v_2007 = v_2006;
  } else {
    v_2007 = sub_288;
  };
  if (controller_c_window) {
    sub_287 = v_2007;
  } else {
    sub_287 = sub_45;
  };
  if (controller_cleaner) {
    v_2008 = false;
    sub_286 = sub_287;
  } else {
    v_2008 = sub_287;
    sub_286 = false;
  };
  if (controller_ck_17_1) {
    sub_285 = v_2008;
  } else {
    sub_285 = sub_286;
  };
  if (controller_c_door) {
    v_2014 = sub_285;
    v_2012 = sub_281;
  } else {
    v_2014 = sub_281;
    v_2012 = sub_285;
  };
  sub_289 = sub_80;
  sub_290 = sub_62;
  if (controller_c_door) {
    v_2015 = sub_290;
  } else {
    v_2015 = sub_289;
  };
  if (controller_c_pc) {
    v_2016 = v_2014;
  } else {
    v_2016 = v_2015;
  };
  if (controller_c_door) {
    v_2013 = sub_289;
  } else {
    v_2013 = sub_290;
  };
  if (controller_c_pc) {
    sub_280 = v_2012;
  } else {
    sub_280 = v_2013;
  };
  if (controller_ck_11_1) {
    sub_279 = v_2016;
  } else {
    sub_279 = sub_280;
  };
  if (controller_cleaner) {
    v_2000 = sub_32;
    sub_294 = sub_93;
  } else {
    v_2000 = sub_93;
    sub_294 = sub_32;
  };
  if (controller_ck_17_1) {
    sub_293 = v_2000;
  } else {
    sub_293 = sub_294;
  };
  if (controller_c_door) {
    v_2003 = sub_262;
    v_2001 = sub_293;
  } else {
    v_2003 = sub_293;
    v_2001 = sub_262;
  };
  sub_295 = sub_93;
  if (controller_c_door) {
    v_2004 = sub_290;
  } else {
    v_2004 = sub_295;
  };
  if (controller_c_pc) {
    v_2005 = v_2003;
  } else {
    v_2005 = v_2004;
  };
  if (controller_c_door) {
    v_2002 = sub_295;
  } else {
    v_2002 = sub_290;
  };
  if (controller_c_pc) {
    sub_292 = v_2001;
  } else {
    sub_292 = v_2002;
  };
  if (controller_ck_11_1) {
    sub_291 = v_2005;
  } else {
    sub_291 = sub_292;
  };
  if (controller_change_shift) {
    v_2017 = sub_291;
    sub_278 = sub_279;
  } else {
    v_2017 = sub_279;
    sub_278 = sub_291;
  };
  if (controller_ck_1) {
    v_2018 = v_2017;
  } else {
    v_2018 = sub_278;
  };
  if (controller_air_failed_recovered) {
    sub_277 = v_2018;
  } else {
    sub_277 = sub_151;
  };
  if (controller_v_408) {
    v_1991 = sub_112;
    sub_303 = sub_43;
  } else {
    v_1991 = sub_43;
    sub_303 = sub_112;
  };
  if (controller_light_failed_recovered) {
    v_1992 = sub_112;
    sub_302 = v_1991;
  } else {
    v_1992 = sub_303;
    sub_302 = sub_303;
  };
  if (controller_v_407) {
    v_1993 = v_1992;
  } else {
    v_1993 = sub_302;
  };
  if (controller_c_window) {
    sub_301 = v_1993;
  } else {
    sub_301 = sub_19;
  };
  if (controller_cleaner) {
    v_1994 = sub_42;
    sub_300 = sub_301;
  } else {
    v_1994 = sub_301;
    sub_300 = sub_42;
  };
  if (controller_ck_17_1) {
    sub_299 = v_1994;
  } else {
    sub_299 = sub_300;
  };
  if (controller_v_408) {
    v_1987 = sub_76;
    sub_308 = false;
  } else {
    v_1987 = false;
    sub_308 = sub_76;
  };
  if (controller_light_failed_recovered) {
    v_1988 = sub_76;
    sub_307 = v_1987;
  } else {
    v_1988 = sub_308;
    sub_307 = sub_308;
  };
  if (controller_v_407) {
    v_1989 = v_1988;
  } else {
    v_1989 = sub_307;
  };
  if (controller_c_window) {
    sub_306 = v_1989;
  } else {
    sub_306 = sub_19;
  };
  if (controller_cleaner) {
    v_1990 = false;
    sub_305 = sub_306;
  } else {
    v_1990 = sub_306;
    sub_305 = false;
  };
  if (controller_ck_17_1) {
    sub_304 = v_1990;
  } else {
    sub_304 = sub_305;
  };
  if (controller_c_door) {
    v_1997 = sub_304;
    v_1995 = sub_299;
  } else {
    v_1997 = sub_299;
    v_1995 = sub_304;
  };
  if (controller_cleaner) {
    v_1986 = sub_111;
    sub_310 = sub_179;
  } else {
    v_1986 = sub_179;
    sub_310 = sub_111;
  };
  if (controller_ck_17_1) {
    sub_309 = v_1986;
  } else {
    sub_309 = sub_310;
  };
  if (controller_cleaner) {
    v_1985 = sub_116;
    sub_312 = sub_179;
  } else {
    v_1985 = sub_179;
    sub_312 = sub_116;
  };
  if (controller_ck_17_1) {
    sub_311 = v_1985;
  } else {
    sub_311 = sub_312;
  };
  if (controller_c_door) {
    v_1998 = sub_311;
  } else {
    v_1998 = sub_309;
  };
  if (controller_c_pc) {
    v_1999 = v_1997;
  } else {
    v_1999 = v_1998;
  };
  if (controller_c_door) {
    v_1996 = sub_309;
  } else {
    v_1996 = sub_311;
  };
  if (controller_c_pc) {
    sub_298 = v_1995;
  } else {
    sub_298 = v_1996;
  };
  if (controller_ck_11_1) {
    sub_297 = v_1999;
  } else {
    sub_297 = sub_298;
  };
  if (controller_v_408) {
    v_1977 = sub_112;
    sub_320 = sub_76;
  } else {
    v_1977 = sub_76;
    sub_320 = sub_112;
  };
  if (controller_light_failed_recovered) {
    v_1978 = sub_112;
    sub_319 = v_1977;
  } else {
    v_1978 = sub_320;
    sub_319 = sub_320;
  };
  if (controller_v_407) {
    sub_318 = v_1978;
  } else {
    sub_318 = sub_319;
  };
  if (controller_c_window) {
    sub_317 = sub_318;
  } else {
    sub_317 = sub_19;
  };
  if (controller_cleaner) {
    v_1979 = sub_55;
    sub_316 = sub_317;
  } else {
    v_1979 = sub_317;
    sub_316 = sub_55;
  };
  if (controller_ck_17_1) {
    sub_315 = v_1979;
  } else {
    sub_315 = sub_316;
  };
  sub_323 = sub_318;
  if (controller_cleaner) {
    v_1976 = false;
    sub_322 = sub_323;
  } else {
    v_1976 = sub_323;
    sub_322 = false;
  };
  if (controller_ck_17_1) {
    sub_321 = v_1976;
  } else {
    sub_321 = sub_322;
  };
  if (controller_c_door) {
    v_1982 = sub_321;
    v_1980 = sub_315;
  } else {
    v_1982 = sub_315;
    v_1980 = sub_321;
  };
  if (controller_cleaner) {
    v_1975 = sub_121;
    sub_325 = sub_317;
  } else {
    v_1975 = sub_317;
    sub_325 = sub_121;
  };
  if (controller_ck_17_1) {
    sub_324 = v_1975;
  } else {
    sub_324 = sub_325;
  };
  if (controller_cleaner) {
    v_1974 = sub_116;
    sub_327 = sub_323;
  } else {
    v_1974 = sub_323;
    sub_327 = sub_116;
  };
  if (controller_ck_17_1) {
    sub_326 = v_1974;
  } else {
    sub_326 = sub_327;
  };
  if (controller_c_door) {
    v_1983 = sub_326;
  } else {
    v_1983 = sub_324;
  };
  if (controller_c_pc) {
    v_1984 = v_1982;
  } else {
    v_1984 = v_1983;
  };
  if (controller_c_door) {
    v_1981 = sub_324;
  } else {
    v_1981 = sub_326;
  };
  if (controller_c_pc) {
    sub_314 = v_1980;
  } else {
    sub_314 = v_1981;
  };
  if (controller_ck_11_1) {
    sub_313 = v_1984;
  } else {
    sub_313 = sub_314;
  };
  if (controller_change_shift) {
    v_2106 = sub_313;
    sub_296 = sub_297;
  } else {
    v_2106 = sub_297;
    sub_296 = sub_313;
  };
  if (controller_ck_1) {
    v_2107 = v_2106;
  } else {
    v_2107 = sub_296;
  };
  if (controller_v_408) {
    v = sub_20;
  } else {
    v = sub_76;
  };
  if (controller_light_failed_recovered) {
    v_1971 = v;
    sub_333 = sub_236;
  } else {
    v_1971 = sub_235;
    sub_333 = sub_235;
  };
  if (controller_v_407) {
    v_1972 = v_1971;
  } else {
    v_1972 = sub_333;
  };
  if (controller_c_window) {
    sub_332 = v_1972;
  } else {
    sub_332 = sub_19;
  };
  if (controller_cleaner) {
    v_1973 = false;
    sub_331 = sub_332;
  } else {
    v_1973 = sub_332;
    sub_331 = false;
  };
  if (controller_ck_17_1) {
    sub_330 = v_1973;
  } else {
    sub_330 = sub_331;
  };
  if (controller_c_pc) {
    sub_329 = sub_330;
    sub_334 = sub_321;
  } else {
    sub_329 = sub_311;
    sub_334 = sub_326;
  };
  if (controller_change_shift) {
    v_2108 = sub_334;
    sub_328 = sub_329;
  } else {
    v_2108 = sub_329;
    sub_328 = sub_334;
  };
  if (controller_ck_1) {
    v_2109 = v_2108;
  } else {
    v_2109 = sub_328;
  };
  if (controller_air_failed_recovered) {
    v_2110 = v_2107;
  } else {
    v_2110 = v_2109;
  };
  if (controller_v_445) {
    v_2111 = v_2110;
  } else {
    v_2111 = sub_277;
  };
  if (controller_v_447) {
    v_2112 = v_2111;
  } else {
    v_2112 = sub_221;
  };
  if (controller_v_446) {
    sub_125 = v_2112;
  } else {
    sub_125 = sub_126;
  };
  sub_124 = sub_125;
  sub_123 = sub_124;
  if (controller_worker) {
    v_2194 = sub_123;
    sub_1 = sub_2;
  } else {
    v_2194 = sub_2;
    sub_1 = sub_123;
  };
  if (controller_ck_15_1) {
    sub_0 = v_2194;
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
  
  int v_2258;
  int v_2257;
  int v_2256;
  int v_2255;
  int v_2254;
  int v_2253;
  int v_2252;
  int v_2251;
  int v_2250;
  int v_2249;
  int v_2248;
  int v_2247;
  int v_2246;
  int v_2245;
  int v_2244;
  int v_2243;
  int v_2242;
  int v_2241;
  int v_2240;
  int v_2239;
  int v_2238;
  int v_2237;
  int v_2236;
  int v_2235;
  int v_2234;
  int v_2233;
  int v_2232;
  int v_2231;
  int v_2230;
  int v_2229;
  int v_2228;
  int v_2227;
  int v_2226;
  int v_2225;
  int v_2224;
  int v_2223;
  int v_2222;
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
  int v_2198;
  int v_2197;
  int v_2196;
  int v_2195;
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
  v_2248 = !(controller_v_392);
  sub_18 = p_controller_c_window;
  v_2249 = (v_2248&&sub_18);
  sub_17 = (controller_v_392&&sub_18);
  if (controller_v_391) {
    v_2247 = sub_18;
  } else {
    v_2247 = sub_17;
  };
  if (controller_blind_failed_recovered) {
    sub_16 = v_2247;
  } else {
    sub_16 = v_2249;
  };
  sub_15 = sub_16;
  if (controller_cleaner) {
    v_2250 = sub_15;
    sub_14 = false;
  } else {
    v_2250 = false;
    sub_14 = sub_15;
  };
  if (controller_ck_17_1) {
    sub_13 = v_2250;
  } else {
    sub_13 = sub_14;
  };
  if (controller_c_door) {
    sub_12 = sub_13;
  } else {
    sub_12 = false;
  };
  sub_22 = true;
  sub_21 = sub_22;
  if (controller_cleaner) {
    v_2246 = sub_15;
    sub_20 = sub_21;
  } else {
    v_2246 = sub_21;
    sub_20 = sub_15;
  };
  if (controller_ck_17_1) {
    sub_19 = v_2246;
  } else {
    sub_19 = sub_20;
  };
  if (controller_cleaner) {
    v_2245 = false;
    sub_24 = sub_21;
  } else {
    v_2245 = sub_21;
    sub_24 = false;
  };
  if (controller_ck_17_1) {
    sub_23 = v_2245;
  } else {
    sub_23 = sub_24;
  };
  if (controller_c_door) {
    v_2252 = sub_23;
    v_2251 = sub_19;
  } else {
    v_2252 = sub_19;
    v_2251 = sub_23;
  };
  if (controller_c_pc) {
    sub_11 = sub_12;
  } else {
    sub_11 = v_2251;
  };
  if (controller_c_door) {
    sub_25 = false;
  } else {
    sub_25 = sub_13;
  };
  if (controller_c_pc) {
    v_2253 = sub_25;
  } else {
    v_2253 = v_2252;
  };
  if (controller_ck_11_1) {
    sub_10 = v_2253;
  } else {
    sub_10 = sub_11;
  };
  sub_32 = false;
  sub_31 = sub_32;
  if (controller_cleaner) {
    sub_30 = false;
    sub_33 = sub_31;
  } else {
    sub_30 = sub_31;
    sub_33 = false;
  };
  if (controller_ck_17_1) {
    sub_29 = sub_33;
  } else {
    sub_29 = sub_30;
  };
  if (controller_c_door) {
    sub_28 = sub_29;
  } else {
    sub_28 = false;
  };
  if (controller_cleaner) {
    v_2241 = sub_31;
    sub_35 = sub_21;
  } else {
    v_2241 = sub_21;
    sub_35 = sub_31;
  };
  if (controller_ck_17_1) {
    sub_34 = v_2241;
  } else {
    sub_34 = sub_35;
  };
  if (controller_c_door) {
    v_2243 = sub_23;
    v_2242 = sub_34;
  } else {
    v_2243 = sub_34;
    v_2242 = sub_23;
  };
  if (controller_c_pc) {
    sub_27 = sub_28;
  } else {
    sub_27 = v_2242;
  };
  if (controller_c_door) {
    sub_36 = false;
  } else {
    sub_36 = sub_29;
  };
  if (controller_c_pc) {
    v_2244 = sub_36;
  } else {
    v_2244 = v_2243;
  };
  if (controller_ck_11_1) {
    sub_26 = v_2244;
  } else {
    sub_26 = sub_27;
  };
  if (controller_change_shift) {
    v_2254 = sub_26;
    sub_9 = sub_10;
  } else {
    v_2254 = sub_10;
    sub_9 = sub_26;
  };
  if (controller_ck_1) {
    sub_8 = v_2254;
  } else {
    sub_8 = sub_9;
  };
  sub_7 = sub_8;
  sub_43 = sub_18;
  sub_42 = sub_43;
  if (controller_cleaner) {
    v_2240 = sub_42;
    sub_41 = sub_21;
  } else {
    v_2240 = sub_21;
    sub_41 = sub_42;
  };
  if (controller_ck_17_1) {
    sub_40 = v_2240;
  } else {
    sub_40 = sub_41;
  };
  sub_39 = sub_40;
  if (controller_c_pc) {
    sub_38 = false;
  } else {
    sub_38 = sub_39;
  };
  sub_37 = sub_38;
  if (controller_air_failed_recovered) {
    v_2255 = sub_8;
  } else {
    v_2255 = sub_37;
  };
  if (controller_v_445) {
    sub_6 = v_2255;
  } else {
    sub_6 = sub_7;
  };
  if (controller_c_pc) {
    sub_45 = false;
  } else {
    sub_45 = sub_23;
  };
  sub_44 = sub_45;
  if (controller_v_447) {
    sub_5 = sub_44;
  } else {
    sub_5 = sub_6;
  };
  if (controller_c_pc) {
    v_2238 = sub_25;
    sub_51 = sub_12;
  } else {
    v_2238 = sub_39;
    sub_51 = sub_39;
  };
  if (controller_ck_11_1) {
    sub_50 = v_2238;
  } else {
    sub_50 = sub_51;
  };
  if (controller_c_pc) {
    v_2237 = sub_36;
    sub_53 = sub_28;
  } else {
    v_2237 = sub_39;
    sub_53 = sub_39;
  };
  if (controller_ck_11_1) {
    sub_52 = v_2237;
  } else {
    sub_52 = sub_53;
  };
  if (controller_change_shift) {
    v_2239 = sub_52;
    sub_49 = sub_50;
  } else {
    v_2239 = sub_50;
    sub_49 = sub_52;
  };
  if (controller_ck_1) {
    sub_48 = v_2239;
  } else {
    sub_48 = sub_49;
  };
  if (controller_air_failed_recovered) {
    sub_47 = sub_48;
  } else {
    sub_47 = sub_37;
  };
  if (controller_v_445) {
    sub_46 = sub_7;
  } else {
    sub_46 = sub_47;
  };
  if (controller_air_failed_recovered) {
    sub_54 = sub_48;
  } else {
    sub_54 = sub_8;
  };
  if (controller_v_445) {
    v_2256 = sub_47;
  } else {
    v_2256 = sub_54;
  };
  if (controller_v_447) {
    v_2257 = v_2256;
  } else {
    v_2257 = sub_46;
  };
  if (controller_v_446) {
    sub_4 = v_2257;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_64 = sub_15;
  if (controller_ck_17_1) {
    sub_65 = sub_30;
  } else {
    sub_65 = sub_33;
  };
  if (controller_c_door) {
    v_2229 = sub_65;
    v_2228 = sub_64;
  } else {
    v_2229 = sub_64;
    v_2228 = sub_65;
  };
  if (controller_cleaner) {
    v_2227 = sub_15;
    sub_68 = sub_42;
  } else {
    v_2227 = sub_42;
    sub_68 = sub_15;
  };
  if (controller_ck_17_1) {
    sub_67 = v_2227;
  } else {
    sub_67 = sub_68;
  };
  if (controller_cleaner) {
    v_2226 = false;
    sub_70 = sub_42;
  } else {
    v_2226 = sub_42;
    sub_70 = false;
  };
  if (controller_ck_17_1) {
    sub_69 = v_2226;
  } else {
    sub_69 = sub_70;
  };
  if (controller_c_door) {
    sub_66 = sub_67;
  } else {
    sub_66 = sub_69;
  };
  if (controller_c_pc) {
    sub_63 = v_2228;
  } else {
    sub_63 = sub_66;
  };
  if (controller_c_door) {
    sub_71 = sub_69;
  } else {
    sub_71 = sub_67;
  };
  if (controller_c_pc) {
    v_2230 = v_2229;
  } else {
    v_2230 = sub_71;
  };
  if (controller_ck_11_1) {
    sub_62 = v_2230;
  } else {
    sub_62 = sub_63;
  };
  if (controller_v_408) {
    v_2223 = sub_16;
    sub_79 = sub_32;
  } else {
    v_2223 = sub_32;
    sub_79 = sub_16;
  };
  if (controller_light_failed_recovered) {
    v_2224 = sub_16;
    sub_78 = v_2223;
  } else {
    v_2224 = sub_79;
    sub_78 = sub_79;
  };
  if (controller_v_407) {
    sub_77 = v_2224;
  } else {
    sub_77 = sub_78;
  };
  if (controller_cleaner) {
    v_2225 = sub_31;
    sub_76 = sub_77;
  } else {
    v_2225 = sub_77;
    sub_76 = sub_31;
  };
  if (controller_ck_17_1) {
    sub_75 = v_2225;
  } else {
    sub_75 = sub_76;
  };
  if (controller_v_392) {
    v_2219 = false;
    sub_85 = sub_18;
  } else {
    v_2219 = sub_18;
    sub_85 = false;
  };
  if (controller_v_391) {
    v_2218 = sub_18;
  } else {
    v_2218 = sub_85;
  };
  if (controller_blind_failed_recovered) {
    sub_84 = v_2218;
  } else {
    sub_84 = v_2219;
  };
  if (controller_v_408) {
    v_2220 = sub_84;
    sub_86 = false;
  } else {
    v_2220 = false;
    sub_86 = sub_84;
  };
  if (controller_light_failed_recovered) {
    v_2221 = sub_84;
    sub_83 = v_2220;
  } else {
    v_2221 = sub_86;
    sub_83 = sub_86;
  };
  if (controller_v_407) {
    sub_82 = v_2221;
  } else {
    sub_82 = sub_83;
  };
  if (controller_cleaner) {
    v_2222 = false;
    sub_81 = sub_82;
  } else {
    v_2222 = sub_82;
    sub_81 = false;
  };
  if (controller_ck_17_1) {
    sub_80 = v_2222;
  } else {
    sub_80 = sub_81;
  };
  if (controller_c_door) {
    sub_74 = sub_75;
  } else {
    sub_74 = sub_80;
  };
  sub_73 = sub_74;
  if (controller_c_door) {
    sub_87 = sub_80;
  } else {
    sub_87 = sub_75;
  };
  if (controller_ck_11_1) {
    sub_72 = sub_87;
  } else {
    sub_72 = sub_73;
  };
  if (controller_change_shift) {
    v_2231 = sub_72;
    sub_61 = sub_62;
  } else {
    v_2231 = sub_62;
    sub_61 = sub_72;
  };
  if (controller_ck_1) {
    v_2232 = v_2231;
  } else {
    v_2232 = sub_61;
  };
  if (controller_c_door) {
    sub_92 = sub_64;
  } else {
    sub_92 = false;
  };
  sub_91 = sub_92;
  if (controller_c_door) {
    sub_93 = false;
  } else {
    sub_93 = sub_64;
  };
  if (controller_ck_11_1) {
    sub_90 = sub_93;
  } else {
    sub_90 = sub_91;
  };
  sub_97 = sub_31;
  if (controller_c_door) {
    sub_96 = sub_97;
  } else {
    sub_96 = false;
  };
  sub_95 = sub_96;
  if (controller_c_door) {
    sub_98 = false;
  } else {
    sub_98 = sub_97;
  };
  if (controller_ck_11_1) {
    sub_94 = sub_98;
  } else {
    sub_94 = sub_95;
  };
  if (controller_change_shift) {
    v_2217 = sub_94;
    sub_89 = sub_90;
  } else {
    v_2217 = sub_90;
    sub_89 = sub_94;
  };
  if (controller_ck_1) {
    sub_88 = v_2217;
  } else {
    sub_88 = sub_89;
  };
  if (controller_air_failed_recovered) {
    sub_60 = v_2232;
  } else {
    sub_60 = sub_88;
  };
  if (controller_v_408) {
    sub_107 = sub_16;
    sub_108 = sub_43;
  } else {
    sub_107 = sub_43;
    sub_108 = sub_16;
  };
  if (controller_light_failed_recovered) {
    sub_106 = sub_107;
  } else {
    sub_106 = sub_108;
  };
  if (controller_v_407) {
    sub_105 = sub_108;
  } else {
    sub_105 = sub_106;
  };
  if (controller_cleaner) {
    v_2212 = sub_15;
    sub_104 = sub_105;
  } else {
    v_2212 = sub_105;
    sub_104 = sub_15;
  };
  if (controller_ck_17_1) {
    sub_103 = v_2212;
  } else {
    sub_103 = sub_104;
  };
  if (controller_v_408) {
    sub_113 = sub_32;
    sub_114 = sub_43;
  } else {
    sub_113 = sub_43;
    sub_114 = sub_32;
  };
  if (controller_light_failed_recovered) {
    sub_112 = sub_113;
  } else {
    sub_112 = sub_114;
  };
  if (controller_v_407) {
    sub_111 = sub_114;
  } else {
    sub_111 = sub_112;
  };
  if (controller_cleaner) {
    v_2211 = false;
    sub_110 = sub_111;
  } else {
    v_2211 = sub_111;
    sub_110 = false;
  };
  if (controller_ck_17_1) {
    sub_109 = v_2211;
  } else {
    sub_109 = sub_110;
  };
  if (controller_c_door) {
    v_2214 = sub_109;
  } else {
    v_2214 = sub_103;
  };
  if (controller_c_pc) {
    v_2215 = v_2214;
  } else {
    v_2215 = sub_71;
  };
  if (controller_c_door) {
    v_2213 = sub_103;
  } else {
    v_2213 = sub_109;
  };
  if (controller_c_pc) {
    sub_102 = v_2213;
  } else {
    sub_102 = sub_66;
  };
  if (controller_ck_11_1) {
    sub_101 = v_2215;
  } else {
    sub_101 = sub_102;
  };
  if (controller_change_shift) {
    v_2216 = sub_72;
    sub_100 = sub_101;
  } else {
    v_2216 = sub_101;
    sub_100 = sub_72;
  };
  if (controller_ck_1) {
    sub_99 = v_2216;
  } else {
    sub_99 = sub_100;
  };
  sub_117 = sub_69;
  sub_119 = sub_42;
  sub_118 = sub_119;
  if (controller_c_pc) {
    sub_116 = sub_117;
  } else {
    sub_116 = sub_118;
  };
  sub_115 = sub_116;
  if (controller_air_failed_recovered) {
    v_2233 = sub_99;
  } else {
    v_2233 = sub_115;
  };
  if (controller_v_445) {
    sub_59 = v_2233;
  } else {
    sub_59 = sub_60;
  };
  if (controller_c_pc) {
    sub_122 = sub_109;
  } else {
    sub_122 = sub_117;
  };
  sub_124 = sub_80;
  sub_123 = sub_124;
  if (controller_change_shift) {
    v_2210 = sub_123;
    sub_121 = sub_122;
  } else {
    v_2210 = sub_122;
    sub_121 = sub_123;
  };
  if (controller_ck_1) {
    sub_120 = v_2210;
  } else {
    sub_120 = sub_121;
  };
  if (controller_v_447) {
    sub_58 = sub_120;
  } else {
    sub_58 = sub_59;
  };
  if (controller_air_failed_recovered) {
    v_2209 = sub_99;
  } else {
    v_2209 = sub_88;
  };
  if (controller_c_pc) {
    v_2206 = sub_71;
    sub_129 = sub_66;
  } else {
    v_2206 = sub_118;
    sub_129 = sub_118;
  };
  if (controller_ck_11_1) {
    sub_128 = v_2206;
  } else {
    sub_128 = sub_129;
  };
  if (controller_cleaner) {
    v_2202 = sub_31;
    sub_133 = sub_42;
  } else {
    v_2202 = sub_42;
    sub_133 = sub_31;
  };
  if (controller_ck_17_1) {
    sub_132 = v_2202;
  } else {
    sub_132 = sub_133;
  };
  if (controller_c_door) {
    v_2204 = sub_69;
  } else {
    v_2204 = sub_132;
  };
  if (controller_c_pc) {
    v_2205 = v_2204;
  } else {
    v_2205 = sub_118;
  };
  if (controller_c_door) {
    v_2203 = sub_132;
  } else {
    v_2203 = sub_69;
  };
  if (controller_c_pc) {
    sub_131 = v_2203;
  } else {
    sub_131 = sub_118;
  };
  if (controller_ck_11_1) {
    sub_130 = v_2205;
  } else {
    sub_130 = sub_131;
  };
  if (controller_change_shift) {
    v_2207 = sub_130;
    sub_127 = sub_128;
  } else {
    v_2207 = sub_128;
    sub_127 = sub_130;
  };
  if (controller_ck_1) {
    v_2208 = v_2207;
  } else {
    v_2208 = sub_127;
  };
  if (controller_air_failed_recovered) {
    sub_126 = v_2208;
  } else {
    sub_126 = sub_115;
  };
  if (controller_v_445) {
    sub_125 = v_2209;
  } else {
    sub_125 = sub_126;
  };
  if (controller_light_failed_recovered) {
    v_2196 = sub_43;
    sub_142 = sub_108;
  } else {
    v_2196 = sub_107;
    sub_142 = sub_107;
  };
  if (controller_v_407) {
    sub_141 = v_2196;
  } else {
    sub_141 = sub_142;
  };
  if (controller_cleaner) {
    v_2197 = sub_15;
    sub_140 = sub_141;
  } else {
    v_2197 = sub_141;
    sub_140 = sub_15;
  };
  if (controller_ck_17_1) {
    sub_139 = v_2197;
  } else {
    sub_139 = sub_140;
  };
  if (controller_light_failed_recovered) {
    v = sub_43;
    sub_146 = sub_114;
  } else {
    v = sub_113;
    sub_146 = sub_113;
  };
  if (controller_v_407) {
    sub_145 = v;
  } else {
    sub_145 = sub_146;
  };
  if (controller_cleaner) {
    v_2195 = false;
    sub_144 = sub_145;
  } else {
    v_2195 = sub_145;
    sub_144 = false;
  };
  if (controller_ck_17_1) {
    sub_143 = v_2195;
  } else {
    sub_143 = sub_144;
  };
  if (controller_c_door) {
    v_2199 = sub_143;
  } else {
    v_2199 = sub_139;
  };
  if (controller_c_pc) {
    v_2200 = v_2199;
  } else {
    v_2200 = sub_118;
  };
  if (controller_c_door) {
    v_2198 = sub_139;
  } else {
    v_2198 = sub_143;
  };
  if (controller_c_pc) {
    sub_138 = v_2198;
  } else {
    sub_138 = sub_118;
  };
  if (controller_ck_11_1) {
    sub_137 = v_2200;
  } else {
    sub_137 = sub_138;
  };
  if (controller_change_shift) {
    v_2201 = sub_130;
    sub_136 = sub_137;
  } else {
    v_2201 = sub_137;
    sub_136 = sub_130;
  };
  if (controller_ck_1) {
    sub_135 = v_2201;
  } else {
    sub_135 = sub_136;
  };
  if (controller_air_failed_recovered) {
    v_2234 = sub_135;
    sub_134 = sub_135;
  } else {
    v_2234 = sub_115;
    sub_134 = sub_88;
  };
  if (controller_v_445) {
    v_2235 = v_2234;
  } else {
    v_2235 = sub_134;
  };
  if (controller_v_447) {
    v_2236 = v_2235;
  } else {
    v_2236 = sub_125;
  };
  if (controller_v_446) {
    sub_57 = v_2236;
  } else {
    sub_57 = sub_58;
  };
  sub_56 = sub_57;
  sub_55 = sub_56;
  if (controller_worker) {
    v_2258 = sub_55;
    sub_1 = sub_2;
  } else {
    v_2258 = sub_2;
    sub_1 = sub_55;
  };
  if (controller_ck_15_1) {
    sub_0 = v_2258;
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
  
  int v_2279;
  int v_2278;
  int v_2277;
  int v_2276;
  int v_2275;
  int v_2274;
  int v_2273;
  int v_2272;
  int v_2271;
  int v_2270;
  int v_2269;
  int v_2268;
  int v_2267;
  int v_2266;
  int v_2265;
  int v_2264;
  int v_2263;
  int v_2262;
  int v_2261;
  int v_2260;
  int v_2259;
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
  sub_14 = false;
  sub_13 = sub_14;
  sub_17 = p_controller_c_pc;
  sub_16 = sub_17;
  sub_15 = sub_16;
  if (controller_cleaner) {
    sub_12 = sub_13;
    sub_18 = sub_15;
  } else {
    sub_12 = sub_15;
    sub_18 = sub_13;
  };
  if (controller_ck_17_1) {
    sub_11 = sub_18;
  } else {
    sub_11 = sub_12;
  };
  if (controller_cleaner) {
    v_2274 = false;
    sub_20 = sub_13;
  } else {
    v_2274 = sub_13;
    sub_20 = false;
  };
  if (controller_ck_17_1) {
    sub_19 = v_2274;
  } else {
    sub_19 = sub_20;
  };
  if (controller_c_door) {
    v_2275 = sub_19;
    sub_10 = sub_11;
  } else {
    v_2275 = sub_11;
    sub_10 = sub_19;
  };
  if (controller_ck_11_1) {
    sub_9 = v_2275;
  } else {
    sub_9 = sub_10;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_23 = sub_13;
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (controller_air_failed_recovered) {
    v_2276 = sub_8;
  } else {
    v_2276 = sub_21;
  };
  if (controller_v_445) {
    sub_6 = v_2276;
  } else {
    sub_6 = sub_7;
  };
  sub_25 = sub_19;
  sub_24 = sub_25;
  if (controller_v_447) {
    sub_5 = sub_24;
  } else {
    sub_5 = sub_6;
  };
  if (controller_c_door) {
    v_2273 = sub_23;
    sub_30 = sub_11;
  } else {
    v_2273 = sub_11;
    sub_30 = sub_23;
  };
  if (controller_ck_11_1) {
    sub_29 = v_2273;
  } else {
    sub_29 = sub_30;
  };
  sub_28 = sub_29;
  if (controller_air_failed_recovered) {
    sub_27 = sub_28;
  } else {
    sub_27 = sub_21;
  };
  if (controller_v_445) {
    sub_26 = sub_7;
  } else {
    sub_26 = sub_27;
  };
  if (controller_air_failed_recovered) {
    sub_31 = sub_28;
  } else {
    sub_31 = sub_8;
  };
  if (controller_v_445) {
    v_2277 = sub_27;
  } else {
    v_2277 = sub_31;
  };
  if (controller_v_447) {
    v_2278 = v_2277;
  } else {
    v_2278 = sub_26;
  };
  if (controller_v_446) {
    sub_4 = v_2278;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_42 = sub_15;
  if (controller_cleaner) {
    v_2267 = false;
    sub_44 = sub_15;
  } else {
    v_2267 = sub_15;
    sub_44 = false;
  };
  if (controller_ck_17_1) {
    sub_43 = v_2267;
  } else {
    sub_43 = sub_44;
  };
  if (controller_c_door) {
    v_2268 = sub_43;
    sub_41 = sub_42;
  } else {
    v_2268 = sub_42;
    sub_41 = sub_43;
  };
  if (controller_ck_11_1) {
    sub_40 = v_2268;
  } else {
    sub_40 = sub_41;
  };
  if (controller_v_392) {
    v_2262 = false;
    sub_52 = sub_17;
  } else {
    v_2262 = sub_17;
    sub_52 = false;
  };
  if (controller_v_391) {
    v_2261 = sub_17;
  } else {
    v_2261 = sub_52;
  };
  if (controller_blind_failed_recovered) {
    sub_51 = v_2261;
  } else {
    sub_51 = v_2262;
  };
  if (controller_v_408) {
    v_2263 = sub_51;
    sub_53 = false;
  } else {
    v_2263 = false;
    sub_53 = sub_51;
  };
  if (controller_light_failed_recovered) {
    v_2264 = sub_51;
    sub_50 = v_2263;
  } else {
    v_2264 = sub_53;
    sub_50 = sub_53;
  };
  if (controller_v_407) {
    sub_49 = v_2264;
  } else {
    sub_49 = sub_50;
  };
  if (controller_cleaner) {
    v_2265 = false;
    sub_48 = sub_49;
  } else {
    v_2265 = sub_49;
    sub_48 = false;
  };
  if (controller_ck_17_1) {
    sub_47 = v_2265;
  } else {
    sub_47 = sub_48;
  };
  if (controller_c_door) {
    v_2266 = sub_47;
    sub_46 = sub_42;
  } else {
    v_2266 = sub_42;
    sub_46 = sub_47;
  };
  if (controller_ck_11_1) {
    sub_45 = v_2266;
  } else {
    sub_45 = sub_46;
  };
  if (controller_change_shift) {
    v_2269 = sub_45;
    sub_39 = sub_40;
  } else {
    v_2269 = sub_40;
    sub_39 = sub_45;
  };
  if (controller_ck_1) {
    sub_38 = v_2269;
  } else {
    sub_38 = sub_39;
  };
  if (controller_c_door) {
    v_2260 = false;
    sub_56 = sub_42;
  } else {
    v_2260 = sub_42;
    sub_56 = false;
  };
  if (controller_ck_11_1) {
    sub_55 = v_2260;
  } else {
    sub_55 = sub_56;
  };
  sub_54 = sub_55;
  if (controller_air_failed_recovered) {
    sub_37 = sub_38;
  } else {
    sub_37 = sub_54;
  };
  if (controller_ck_17_1) {
    sub_59 = sub_12;
  } else {
    sub_59 = sub_18;
  };
  sub_58 = sub_59;
  sub_57 = sub_58;
  if (controller_air_failed_recovered) {
    v_2270 = sub_38;
  } else {
    v_2270 = sub_57;
  };
  if (controller_v_445) {
    sub_36 = v_2270;
  } else {
    sub_36 = sub_37;
  };
  sub_62 = sub_43;
  sub_63 = sub_47;
  if (controller_change_shift) {
    v_2259 = sub_63;
    sub_61 = sub_62;
  } else {
    v_2259 = sub_62;
    sub_61 = sub_63;
  };
  if (controller_ck_1) {
    sub_60 = v_2259;
  } else {
    sub_60 = sub_61;
  };
  if (controller_v_447) {
    sub_35 = sub_60;
  } else {
    sub_35 = sub_36;
  };
  if (controller_c_door) {
    v = sub_59;
    sub_68 = sub_42;
  } else {
    v = sub_42;
    sub_68 = sub_59;
  };
  if (controller_ck_11_1) {
    sub_67 = v;
  } else {
    sub_67 = sub_68;
  };
  sub_66 = sub_67;
  if (controller_air_failed_recovered) {
    sub_65 = sub_66;
  } else {
    sub_65 = sub_57;
  };
  if (controller_v_445) {
    sub_64 = sub_37;
  } else {
    sub_64 = sub_65;
  };
  if (controller_air_failed_recovered) {
    sub_69 = sub_66;
  } else {
    sub_69 = sub_54;
  };
  if (controller_v_445) {
    v_2271 = sub_65;
  } else {
    v_2271 = sub_69;
  };
  if (controller_v_447) {
    v_2272 = v_2271;
  } else {
    v_2272 = sub_64;
  };
  if (controller_v_446) {
    sub_34 = v_2272;
  } else {
    sub_34 = sub_35;
  };
  sub_33 = sub_34;
  sub_32 = sub_33;
  if (controller_worker) {
    v_2279 = sub_32;
    sub_1 = sub_2;
  } else {
    v_2279 = sub_2;
    sub_1 = sub_32;
  };
  if (controller_ck_15_1) {
    sub_0 = v_2279;
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
  
  int v_2309;
  int v_2308;
  int v_2307;
  int v_2306;
  int v_2305;
  int v_2304;
  int v_2303;
  int v_2302;
  int v_2301;
  int v_2300;
  int v_2299;
  int v_2298;
  int v_2297;
  int v_2296;
  int v_2295;
  int v_2294;
  int v_2293;
  int v_2292;
  int v_2291;
  int v_2290;
  int v_2289;
  int v_2288;
  int v_2287;
  int v_2286;
  int v_2285;
  int v_2284;
  int v_2283;
  int v_2282;
  int v_2281;
  int v_2280;
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
  sub_14 = p_controller_c_door;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_16 = true;
  sub_15 = sub_16;
  if (controller_cleaner) {
    v_2303 = sub_15;
    sub_11 = sub_12;
  } else {
    v_2303 = sub_12;
    sub_11 = sub_15;
  };
  if (controller_ck_17_1) {
    sub_10 = v_2303;
  } else {
    sub_10 = sub_11;
  };
  sub_19 = false;
  sub_18 = sub_19;
  if (controller_cleaner) {
    v_2304 = sub_18;
    sub_17 = sub_12;
  } else {
    v_2304 = sub_12;
    sub_17 = sub_18;
  };
  if (controller_ck_17_1) {
    v_2305 = v_2304;
  } else {
    v_2305 = sub_17;
  };
  if (controller_ck_11_1) {
    sub_9 = v_2305;
  } else {
    sub_9 = sub_10;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_21 = sub_12;
  sub_20 = sub_21;
  if (controller_air_failed_recovered) {
    v_2306 = sub_8;
  } else {
    v_2306 = sub_20;
  };
  if (controller_v_445) {
    sub_6 = v_2306;
  } else {
    sub_6 = sub_7;
  };
  if (controller_cleaner) {
    v_2302 = false;
    sub_24 = sub_12;
  } else {
    v_2302 = sub_12;
    sub_24 = false;
  };
  if (controller_ck_17_1) {
    sub_23 = v_2302;
  } else {
    sub_23 = sub_24;
  };
  sub_22 = sub_23;
  if (controller_v_447) {
    sub_5 = sub_22;
  } else {
    sub_5 = sub_6;
  };
  sub_26 = sub_20;
  if (controller_v_445) {
    sub_25 = sub_7;
  } else {
    sub_25 = sub_26;
  };
  if (controller_air_failed_recovered) {
    sub_27 = sub_20;
  } else {
    sub_27 = sub_8;
  };
  if (controller_v_445) {
    v_2307 = sub_26;
  } else {
    v_2307 = sub_27;
  };
  if (controller_v_447) {
    v_2308 = v_2307;
  } else {
    v_2308 = sub_25;
  };
  if (controller_v_446) {
    sub_4 = v_2308;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  sub_2 = sub_3;
  v_2292 = (controller_v_392||sub_14);
  v_2290 = !(controller_v_392);
  sub_42 = (v_2290||sub_14);
  if (controller_v_391) {
    v_2291 = sub_14;
  } else {
    v_2291 = sub_42;
  };
  if (controller_blind_failed_recovered) {
    sub_41 = v_2291;
  } else {
    sub_41 = v_2292;
  };
  if (controller_v_408) {
    v_2293 = sub_41;
    sub_43 = sub_16;
  } else {
    v_2293 = sub_16;
    sub_43 = sub_41;
  };
  if (controller_light_failed_recovered) {
    v_2294 = sub_41;
    sub_40 = v_2293;
  } else {
    v_2294 = sub_43;
    sub_40 = sub_43;
  };
  if (controller_v_407) {
    sub_39 = v_2294;
  } else {
    sub_39 = sub_40;
  };
  if (controller_cleaner) {
    v_2295 = sub_15;
    sub_38 = sub_39;
  } else {
    v_2295 = sub_39;
    sub_38 = sub_15;
  };
  if (controller_ck_17_1) {
    sub_37 = v_2295;
  } else {
    sub_37 = sub_38;
  };
  v_2286 = !(controller_v_392);
  v_2287 = (v_2286&&sub_14);
  sub_48 = (controller_v_392&&sub_14);
  if (controller_v_391) {
    v_2285 = sub_14;
  } else {
    v_2285 = sub_48;
  };
  if (controller_blind_failed_recovered) {
    sub_47 = v_2285;
  } else {
    sub_47 = v_2287;
  };
  if (controller_v_408) {
    v_2288 = sub_47;
    sub_49 = sub_19;
  } else {
    v_2288 = sub_19;
    sub_49 = sub_47;
  };
  if (controller_light_failed_recovered) {
    v_2289 = sub_47;
    sub_46 = v_2288;
  } else {
    v_2289 = sub_49;
    sub_46 = sub_49;
  };
  if (controller_v_407) {
    sub_45 = v_2289;
  } else {
    sub_45 = sub_46;
  };
  if (controller_cleaner) {
    v_2296 = sub_18;
    sub_44 = sub_45;
  } else {
    v_2296 = sub_45;
    sub_44 = sub_18;
  };
  if (controller_ck_17_1) {
    v_2297 = v_2296;
  } else {
    v_2297 = sub_44;
  };
  if (controller_ck_11_1) {
    sub_36 = v_2297;
  } else {
    sub_36 = sub_37;
  };
  if (controller_change_shift) {
    v_2298 = sub_36;
    sub_35 = sub_9;
  } else {
    v_2298 = sub_9;
    sub_35 = sub_36;
  };
  if (controller_ck_1) {
    sub_34 = v_2298;
  } else {
    sub_34 = sub_35;
  };
  if (controller_air_failed_recovered) {
    v_2299 = sub_34;
  } else {
    v_2299 = sub_20;
  };
  sub_52 = sub_15;
  if (controller_ck_11_1) {
    sub_51 = sub_18;
  } else {
    sub_51 = sub_52;
  };
  sub_50 = sub_51;
  if (controller_air_failed_recovered) {
    sub_33 = sub_34;
  } else {
    sub_33 = sub_50;
  };
  if (controller_v_445) {
    sub_32 = v_2299;
  } else {
    sub_32 = sub_33;
  };
  if (controller_v_392) {
    v_2280 = false;
    sub_60 = sub_14;
  } else {
    v_2280 = sub_14;
    sub_60 = false;
  };
  if (controller_v_391) {
    v = sub_14;
  } else {
    v = sub_60;
  };
  if (controller_blind_failed_recovered) {
    sub_59 = v;
  } else {
    sub_59 = v_2280;
  };
  if (controller_v_408) {
    v_2281 = sub_59;
    sub_61 = false;
  } else {
    v_2281 = false;
    sub_61 = sub_59;
  };
  if (controller_light_failed_recovered) {
    v_2282 = sub_59;
    sub_58 = v_2281;
  } else {
    v_2282 = sub_61;
    sub_58 = sub_61;
  };
  if (controller_v_407) {
    sub_57 = v_2282;
  } else {
    sub_57 = sub_58;
  };
  if (controller_cleaner) {
    v_2283 = false;
    sub_56 = sub_57;
  } else {
    v_2283 = sub_57;
    sub_56 = false;
  };
  if (controller_ck_17_1) {
    sub_55 = v_2283;
  } else {
    sub_55 = sub_56;
  };
  if (controller_change_shift) {
    v_2284 = sub_55;
    sub_54 = sub_23;
  } else {
    v_2284 = sub_23;
    sub_54 = sub_55;
  };
  if (controller_ck_1) {
    sub_53 = v_2284;
  } else {
    sub_53 = sub_54;
  };
  if (controller_v_447) {
    sub_31 = sub_53;
  } else {
    sub_31 = sub_32;
  };
  if (controller_v_445) {
    sub_62 = sub_33;
  } else {
    sub_62 = sub_26;
  };
  if (controller_air_failed_recovered) {
    sub_63 = sub_20;
  } else {
    sub_63 = sub_50;
  };
  if (controller_v_445) {
    v_2300 = sub_26;
  } else {
    v_2300 = sub_63;
  };
  if (controller_v_447) {
    v_2301 = v_2300;
  } else {
    v_2301 = sub_62;
  };
  if (controller_v_446) {
    sub_30 = v_2301;
  } else {
    sub_30 = sub_31;
  };
  sub_29 = sub_30;
  sub_28 = sub_29;
  if (controller_worker) {
    v_2309 = sub_28;
    sub_1 = sub_2;
  } else {
    v_2309 = sub_2;
    sub_1 = sub_28;
  };
  if (controller_ck_15_1) {
    sub_0 = v_2309;
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

