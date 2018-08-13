/* --- Generated the 13/8/2018 at 18:36 --- */
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
  int controller_pnr_19, int controller_ck_35_1, int controller_pnr_18,
  int controller_ck_37_1, int controller_pnr_17, int controller_ck_39_1,
  int controller_pnr_16, int controller_ck_41_1, int controller_pnr_15,
  int controller_v_277, int controller_v_276, int controller_pnr_14,
  int controller_ck_46_1, int controller_pnr_13, int controller_ck_48_1,
  int controller_pnr_12, int controller_ck_51_1, int controller_pnr_11,
  int controller_ck_53_1, int controller_pnr_10, int controller_ck_56_1,
  int controller_pnr_9, int controller_ck_58_1, int controller_pnr_8,
  int controller_ck_61_1, int controller_pnr_7, int controller_ck_63_1,
  int controller_pnr, int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_light_2,
  int controller_c_blind_1, int controller_c_light_1,
  int controller_c_closet, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
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
  sub_26 = false;
  sub_25 = sub_26;
  sub_24 = sub_25;
  if (controller_ck_41_1) {
    sub_23 = sub_24;
    sub_27 = false;
  } else {
    sub_23 = false;
    sub_27 = sub_24;
  };
  if (controller_c_pc) {
    sub_22 = sub_23;
  } else {
    sub_22 = sub_27;
  };
  if (controller_c_door) {
    sub_21 = false;
    sub_28 = sub_22;
  } else {
    sub_21 = sub_22;
    sub_28 = false;
  };
  if (controller_ck_39_1) {
    sub_20 = sub_28;
  } else {
    sub_20 = sub_21;
  };
  if (controller_c_closet) {
    sub_19 = false;
    sub_29 = sub_20;
  } else {
    sub_19 = sub_20;
    sub_29 = false;
  };
  if (controller_closet_failed_recovered) {
    v_220 = sub_29;
    sub_18 = sub_19;
  } else {
    v_220 = sub_19;
    sub_18 = sub_29;
  };
  if (controller_ck_53_1) {
    sub_17 = v_220;
  } else {
    sub_17 = sub_18;
  };
  if (controller_ck_39_1) {
    v_219 = sub_21;
  } else {
    v_219 = sub_28;
  };
  if (controller_c_closet) {
    sub_31 = false;
  } else {
    sub_31 = v_219;
  };
  sub_30 = sub_31;
  if (controller_cleaner) {
    v_221 = sub_30;
    sub_16 = sub_17;
  } else {
    v_221 = sub_17;
    sub_16 = sub_30;
  };
  if (controller_ck_37_1) {
    v_222 = v_221;
  } else {
    v_222 = sub_16;
  };
  if (controller_c_window) {
    sub_15 = v_222;
  } else {
    sub_15 = false;
  };
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  if (controller_cleaner) {
    v_218 = false;
    sub_37 = sub_17;
  } else {
    v_218 = sub_17;
    sub_37 = false;
  };
  if (controller_ck_37_1) {
    sub_36 = v_218;
  } else {
    sub_36 = sub_37;
  };
  if (controller_c_window) {
    sub_35 = sub_36;
  } else {
    sub_35 = false;
  };
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  if (controller_blind_failed_recovered) {
    v_223 = sub_32;
    sub_11 = sub_12;
  } else {
    v_223 = sub_12;
    sub_11 = sub_32;
  };
  if (controller_ck_63_1) {
    sub_10 = v_223;
  } else {
    sub_10 = sub_11;
  };
  if (controller_cleaner) {
    v_217 = sub_30;
    sub_44 = false;
  } else {
    v_217 = false;
    sub_44 = sub_30;
  };
  if (controller_ck_37_1) {
    sub_43 = v_217;
  } else {
    sub_43 = sub_44;
  };
  if (controller_c_window) {
    sub_42 = false;
  } else {
    sub_42 = sub_43;
  };
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  if (controller_blind_failed_recovered) {
    v_224 = sub_39;
    sub_38 = sub_12;
  } else {
    v_224 = sub_12;
    sub_38 = sub_39;
  };
  if (controller_ck_63_1) {
    v_225 = v_224;
  } else {
    v_225 = sub_38;
  };
  if (controller_ck_61_1) {
    v_226 = v_225;
  } else {
    v_226 = sub_10;
  };
  sub_61 = true;
  sub_60 = sub_61;
  sub_59 = sub_60;
  if (controller_ck_41_1) {
    sub_58 = sub_59;
    sub_62 = false;
  } else {
    sub_58 = false;
    sub_62 = sub_59;
  };
  if (controller_c_pc) {
    sub_57 = sub_58;
  } else {
    sub_57 = sub_62;
  };
  if (controller_c_door) {
    sub_56 = sub_57;
    sub_63 = false;
  } else {
    sub_56 = false;
    sub_63 = sub_57;
  };
  if (controller_ck_39_1) {
    v_212 = sub_63;
  } else {
    v_212 = sub_56;
  };
  if (controller_c_closet) {
    sub_55 = false;
  } else {
    sub_55 = v_212;
  };
  sub_54 = sub_55;
  if (controller_cleaner) {
    v_213 = sub_54;
    sub_53 = false;
  } else {
    v_213 = false;
    sub_53 = sub_54;
  };
  if (controller_ck_37_1) {
    sub_52 = v_213;
  } else {
    sub_52 = sub_53;
  };
  if (controller_c_window) {
    sub_51 = sub_36;
  } else {
    sub_51 = sub_52;
  };
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  if (controller_blind_failed_recovered) {
    v_214 = sub_48;
    sub_47 = sub_12;
  } else {
    v_214 = sub_12;
    sub_47 = sub_48;
  };
  if (controller_ck_63_1) {
    sub_46 = v_214;
  } else {
    sub_46 = sub_47;
  };
  if (controller_ck_39_1) {
    sub_74 = sub_56;
  } else {
    sub_74 = sub_63;
  };
  if (controller_c_closet) {
    sub_73 = false;
    sub_75 = sub_74;
  } else {
    sub_73 = sub_74;
    sub_75 = false;
  };
  if (controller_closet_failed_recovered) {
    v_210 = sub_75;
    sub_72 = sub_73;
  } else {
    v_210 = sub_73;
    sub_72 = sub_75;
  };
  if (controller_ck_53_1) {
    sub_71 = v_210;
  } else {
    sub_71 = sub_72;
  };
  if (controller_cleaner) {
    v_211 = false;
    sub_70 = sub_71;
  } else {
    v_211 = sub_71;
    sub_70 = false;
  };
  if (controller_ck_37_1) {
    sub_69 = v_211;
  } else {
    sub_69 = sub_70;
  };
  if (controller_c_window) {
    sub_68 = sub_69;
  } else {
    sub_68 = sub_43;
  };
  sub_67 = sub_68;
  sub_66 = sub_67;
  sub_65 = sub_66;
  if (controller_blind_failed_recovered) {
    v_215 = sub_65;
    sub_64 = sub_12;
  } else {
    v_215 = sub_12;
    sub_64 = sub_65;
  };
  if (controller_ck_63_1) {
    v_216 = v_215;
  } else {
    v_216 = sub_64;
  };
  if (controller_ck_61_1) {
    sub_45 = v_216;
  } else {
    sub_45 = sub_46;
  };
  if (controller_blind_switch) {
    v_227 = v_226;
  } else {
    v_227 = sub_45;
  };
  if (controller_c_blind_1) {
    sub_9 = v_227;
  } else {
    sub_9 = sub_45;
  };
  sub_77 = sub_32;
  if (controller_change_shift) {
    v_205 = false;
    sub_82 = sub_42;
  } else {
    v_205 = sub_42;
    sub_82 = false;
  };
  if (controller_ck_1) {
    sub_81 = v_205;
  } else {
    sub_81 = sub_82;
  };
  sub_80 = sub_81;
  sub_79 = sub_80;
  if (controller_blind_failed_recovered) {
    v_206 = sub_79;
    sub_78 = sub_32;
  } else {
    v_206 = sub_32;
    sub_78 = sub_79;
  };
  if (controller_ck_63_1) {
    v_207 = v_206;
  } else {
    v_207 = sub_78;
  };
  if (controller_ck_61_1) {
    v_208 = v_207;
  } else {
    v_208 = sub_77;
  };
  if (controller_change_shift) {
    v_201 = sub_35;
    sub_89 = sub_51;
  } else {
    v_201 = sub_51;
    sub_89 = sub_35;
  };
  if (controller_ck_1) {
    sub_88 = v_201;
  } else {
    sub_88 = sub_89;
  };
  sub_87 = sub_88;
  sub_86 = sub_87;
  if (controller_blind_failed_recovered) {
    v_202 = sub_86;
    sub_85 = sub_32;
  } else {
    v_202 = sub_32;
    sub_85 = sub_86;
  };
  if (controller_ck_63_1) {
    sub_84 = v_202;
  } else {
    sub_84 = sub_85;
  };
  if (controller_c_window) {
    sub_95 = sub_69;
  } else {
    sub_95 = false;
  };
  if (controller_change_shift) {
    v_200 = sub_95;
    sub_94 = sub_68;
  } else {
    v_200 = sub_68;
    sub_94 = sub_95;
  };
  if (controller_ck_1) {
    sub_93 = v_200;
  } else {
    sub_93 = sub_94;
  };
  sub_92 = sub_93;
  sub_91 = sub_92;
  if (controller_blind_failed_recovered) {
    v_203 = sub_91;
    sub_90 = sub_32;
  } else {
    v_203 = sub_32;
    sub_90 = sub_91;
  };
  if (controller_ck_63_1) {
    v_204 = v_203;
  } else {
    v_204 = sub_90;
  };
  if (controller_ck_61_1) {
    sub_83 = v_204;
  } else {
    sub_83 = sub_84;
  };
  if (controller_blind_switch) {
    v_209 = v_208;
  } else {
    v_209 = sub_83;
  };
  if (controller_c_blind_1) {
    sub_76 = v_209;
  } else {
    sub_76 = sub_83;
  };
  if (controller_light_failed_recovered) {
    v_228 = sub_76;
    sub_8 = sub_9;
  } else {
    v_228 = sub_9;
    sub_8 = sub_76;
  };
  if (controller_ck_58_1) {
    sub_7 = v_228;
  } else {
    sub_7 = sub_8;
  };
  if (controller_c_window) {
    sub_104 = sub_43;
  } else {
    sub_104 = false;
  };
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  if (controller_blind_failed_recovered) {
    v_196 = false;
    sub_100 = sub_101;
  } else {
    v_196 = sub_101;
    sub_100 = false;
  };
  if (controller_ck_63_1) {
    sub_99 = v_196;
  } else {
    sub_99 = sub_100;
  };
  if (controller_blind_failed_recovered) {
    v_195 = sub_39;
    sub_106 = sub_101;
  } else {
    v_195 = sub_101;
    sub_106 = sub_39;
  };
  if (controller_ck_63_1) {
    sub_105 = v_195;
  } else {
    sub_105 = sub_106;
  };
  if (controller_ck_61_1) {
    v_197 = sub_105;
  } else {
    v_197 = sub_99;
  };
  if (controller_c_window) {
    sub_113 = false;
  } else {
    sub_113 = sub_52;
  };
  sub_112 = sub_113;
  sub_111 = sub_112;
  sub_110 = sub_111;
  if (controller_blind_failed_recovered) {
    v_194 = sub_110;
    sub_109 = sub_101;
  } else {
    v_194 = sub_101;
    sub_109 = sub_110;
  };
  if (controller_ck_63_1) {
    sub_108 = v_194;
  } else {
    sub_108 = sub_109;
  };
  if (controller_ck_61_1) {
    sub_107 = sub_105;
  } else {
    sub_107 = sub_108;
  };
  if (controller_blind_switch) {
    v_198 = v_197;
  } else {
    v_198 = sub_107;
  };
  if (controller_c_blind_1) {
    sub_98 = v_198;
  } else {
    sub_98 = sub_107;
  };
  if (controller_light_failed_recovered) {
    v_199 = sub_98;
    sub_97 = sub_9;
  } else {
    v_199 = sub_9;
    sub_97 = sub_98;
  };
  if (controller_ck_58_1) {
    sub_96 = v_199;
  } else {
    sub_96 = sub_97;
  };
  if (controller_ck_56_1) {
    sub_6 = sub_96;
    v_193 = sub_7;
  } else {
    sub_6 = sub_7;
    v_193 = sub_96;
  };
  if (controller_c_light_2) {
    sub_114 = v_193;
  } else {
    sub_114 = sub_6;
  };
  if (controller_light_switch) {
    v_229 = sub_6;
  } else {
    v_229 = sub_114;
  };
  if (controller_c_light_1) {
    sub_5 = v_229;
  } else {
    sub_5 = sub_114;
  };
  if (controller_v_277) {
    sub_123 = false;
  } else {
    sub_123 = sub_34;
  };
  sub_128 = sub_19;
  if (controller_cleaner) {
    v_182 = sub_128;
    sub_127 = false;
  } else {
    v_182 = false;
    sub_127 = sub_128;
  };
  if (controller_ck_37_1) {
    v_183 = v_182;
  } else {
    v_183 = sub_127;
  };
  if (controller_c_window) {
    sub_126 = v_183;
  } else {
    sub_126 = false;
  };
  sub_125 = sub_126;
  if (controller_v_277) {
    sub_124 = false;
  } else {
    sub_124 = sub_125;
  };
  if (controller_v_276) {
    v_184 = sub_124;
  } else {
    v_184 = sub_123;
  };
  if (controller_v_277) {
    v_181 = sub_34;
  } else {
    v_181 = false;
  };
  if (controller_v_276) {
    sub_129 = v_181;
  } else {
    sub_129 = false;
  };
  if (controller_c_air_2) {
    v_185 = v_184;
  } else {
    v_185 = sub_129;
  };
  if (controller_v_277) {
    v_180 = sub_125;
  } else {
    v_180 = sub_34;
  };
  if (controller_v_276) {
    sub_130 = v_180;
  } else {
    sub_130 = sub_124;
  };
  if (controller_c_air_1) {
    sub_122 = v_185;
  } else {
    sub_122 = sub_130;
  };
  if (controller_v_276) {
    v_178 = false;
  } else {
    v_178 = sub_123;
  };
  if (controller_c_air_2) {
    v_179 = v_178;
  } else {
    v_179 = sub_129;
  };
  if (controller_v_276) {
    sub_132 = sub_123;
  } else {
    sub_132 = false;
  };
  if (controller_c_air_1) {
    sub_131 = v_179;
  } else {
    sub_131 = sub_132;
  };
  if (controller_blind_failed_recovered) {
    v_186 = sub_131;
    sub_121 = sub_122;
  } else {
    v_186 = sub_122;
    sub_121 = sub_131;
  };
  if (controller_ck_63_1) {
    sub_120 = v_186;
  } else {
    sub_120 = sub_121;
  };
  if (controller_v_276) {
    v_176 = sub_124;
  } else {
    v_176 = false;
  };
  if (controller_c_air_2) {
    v_177 = v_176;
  } else {
    v_177 = false;
  };
  if (controller_v_277) {
    v_175 = sub_125;
  } else {
    v_175 = false;
  };
  if (controller_v_276) {
    sub_135 = v_175;
  } else {
    sub_135 = sub_124;
  };
  if (controller_c_air_1) {
    sub_134 = v_177;
  } else {
    sub_134 = sub_135;
  };
  if (controller_blind_failed_recovered) {
    v_187 = sub_134;
    sub_133 = sub_122;
  } else {
    v_187 = sub_122;
    sub_133 = sub_134;
  };
  if (controller_ck_63_1) {
    v_188 = v_187;
  } else {
    v_188 = sub_133;
  };
  if (controller_ck_61_1) {
    v_189 = v_188;
  } else {
    v_189 = sub_120;
  };
  sub_144 = sub_73;
  if (controller_cleaner) {
    v_168 = sub_144;
    sub_143 = false;
  } else {
    v_168 = false;
    sub_143 = sub_144;
  };
  if (controller_ck_37_1) {
    v_169 = v_168;
  } else {
    v_169 = sub_143;
  };
  if (controller_c_window) {
    sub_142 = v_169;
  } else {
    sub_142 = false;
  };
  sub_141 = sub_142;
  if (controller_v_277) {
    sub_140 = false;
  } else {
    sub_140 = sub_141;
  };
  if (controller_v_276) {
    v_170 = sub_140;
  } else {
    v_170 = sub_123;
  };
  if (controller_c_air_2) {
    v_171 = v_170;
  } else {
    v_171 = sub_129;
  };
  if (controller_v_277) {
    v_167 = sub_141;
  } else {
    v_167 = sub_34;
  };
  if (controller_v_276) {
    sub_145 = v_167;
  } else {
    sub_145 = sub_140;
  };
  if (controller_c_air_1) {
    sub_139 = v_171;
  } else {
    sub_139 = sub_145;
  };
  if (controller_blind_failed_recovered) {
    v_172 = sub_139;
    sub_138 = sub_122;
  } else {
    v_172 = sub_122;
    sub_138 = sub_139;
  };
  if (controller_ck_63_1) {
    sub_137 = v_172;
  } else {
    sub_137 = sub_138;
  };
  sub_149 = sub_95;
  if (controller_v_277) {
    sub_148 = false;
  } else {
    sub_148 = sub_149;
  };
  if (controller_v_276) {
    v_165 = sub_124;
  } else {
    v_165 = sub_148;
  };
  if (controller_v_277) {
    v_164 = sub_149;
  } else {
    v_164 = false;
  };
  if (controller_v_276) {
    sub_150 = v_164;
  } else {
    sub_150 = false;
  };
  if (controller_c_air_2) {
    v_166 = v_165;
  } else {
    v_166 = sub_150;
  };
  if (controller_v_277) {
    v_163 = sub_125;
  } else {
    v_163 = sub_149;
  };
  if (controller_v_276) {
    sub_151 = v_163;
  } else {
    sub_151 = sub_124;
  };
  if (controller_c_air_1) {
    sub_147 = v_166;
  } else {
    sub_147 = sub_151;
  };
  if (controller_blind_failed_recovered) {
    v_173 = sub_147;
    sub_146 = sub_122;
  } else {
    v_173 = sub_122;
    sub_146 = sub_147;
  };
  if (controller_ck_63_1) {
    v_174 = v_173;
  } else {
    v_174 = sub_146;
  };
  if (controller_ck_61_1) {
    sub_136 = v_174;
  } else {
    sub_136 = sub_137;
  };
  if (controller_blind_switch) {
    v_190 = v_189;
  } else {
    v_190 = sub_136;
  };
  if (controller_c_blind_1) {
    sub_119 = v_190;
  } else {
    sub_119 = sub_136;
  };
  sub_153 = sub_131;
  if (controller_change_shift) {
    v_156 = false;
    sub_158 = sub_126;
  } else {
    v_156 = sub_126;
    sub_158 = false;
  };
  if (controller_ck_1) {
    sub_157 = v_156;
  } else {
    sub_157 = sub_158;
  };
  if (controller_v_277) {
    sub_156 = false;
  } else {
    sub_156 = sub_157;
  };
  if (controller_v_276) {
    v_157 = sub_156;
  } else {
    v_157 = false;
  };
  if (controller_c_air_2) {
    v_158 = v_157;
  } else {
    v_158 = false;
  };
  if (controller_v_277) {
    v_155 = sub_157;
  } else {
    v_155 = false;
  };
  if (controller_v_276) {
    sub_159 = v_155;
  } else {
    sub_159 = sub_156;
  };
  if (controller_c_air_1) {
    sub_155 = v_158;
  } else {
    sub_155 = sub_159;
  };
  if (controller_blind_failed_recovered) {
    v_159 = sub_155;
    sub_154 = sub_131;
  } else {
    v_159 = sub_131;
    sub_154 = sub_155;
  };
  if (controller_ck_63_1) {
    v_160 = v_159;
  } else {
    v_160 = sub_154;
  };
  if (controller_ck_61_1) {
    v_161 = v_160;
  } else {
    v_161 = sub_153;
  };
  if (controller_change_shift) {
    v_149 = false;
    sub_166 = sub_142;
  } else {
    v_149 = sub_142;
    sub_166 = false;
  };
  if (controller_ck_1) {
    sub_165 = v_149;
  } else {
    sub_165 = sub_166;
  };
  if (controller_v_277) {
    sub_164 = false;
  } else {
    sub_164 = sub_165;
  };
  if (controller_v_276) {
    v_150 = sub_164;
  } else {
    v_150 = sub_123;
  };
  if (controller_c_air_2) {
    v_151 = v_150;
  } else {
    v_151 = sub_129;
  };
  if (controller_v_277) {
    v_148 = sub_165;
  } else {
    v_148 = sub_34;
  };
  if (controller_v_276) {
    sub_167 = v_148;
  } else {
    sub_167 = sub_164;
  };
  if (controller_c_air_1) {
    sub_163 = v_151;
  } else {
    sub_163 = sub_167;
  };
  if (controller_blind_failed_recovered) {
    v_152 = sub_163;
    sub_162 = sub_131;
  } else {
    v_152 = sub_131;
    sub_162 = sub_163;
  };
  if (controller_ck_63_1) {
    sub_161 = v_152;
  } else {
    sub_161 = sub_162;
  };
  if (controller_v_276) {
    v_146 = sub_156;
  } else {
    v_146 = sub_148;
  };
  if (controller_c_air_2) {
    v_147 = v_146;
  } else {
    v_147 = sub_150;
  };
  if (controller_v_277) {
    v_145 = sub_157;
  } else {
    v_145 = sub_149;
  };
  if (controller_v_276) {
    sub_170 = v_145;
  } else {
    sub_170 = sub_156;
  };
  if (controller_c_air_1) {
    sub_169 = v_147;
  } else {
    sub_169 = sub_170;
  };
  if (controller_blind_failed_recovered) {
    v_153 = sub_169;
    sub_168 = sub_131;
  } else {
    v_153 = sub_131;
    sub_168 = sub_169;
  };
  if (controller_ck_63_1) {
    v_154 = v_153;
  } else {
    v_154 = sub_168;
  };
  if (controller_ck_61_1) {
    sub_160 = v_154;
  } else {
    sub_160 = sub_161;
  };
  if (controller_blind_switch) {
    v_162 = v_161;
  } else {
    v_162 = sub_160;
  };
  if (controller_c_blind_1) {
    sub_152 = v_162;
  } else {
    sub_152 = sub_160;
  };
  if (controller_light_failed_recovered) {
    v_191 = sub_152;
    sub_118 = sub_119;
  } else {
    v_191 = sub_119;
    sub_118 = sub_152;
  };
  if (controller_ck_58_1) {
    sub_117 = v_191;
  } else {
    sub_117 = sub_118;
  };
  sub_175 = sub_134;
  sub_174 = sub_175;
  sub_173 = sub_174;
  if (controller_light_failed_recovered) {
    v_144 = sub_173;
    sub_172 = sub_119;
  } else {
    v_144 = sub_119;
    sub_172 = sub_173;
  };
  if (controller_ck_58_1) {
    sub_171 = v_144;
  } else {
    sub_171 = sub_172;
  };
  if (controller_ck_56_1) {
    sub_116 = sub_171;
    v_143 = sub_117;
  } else {
    sub_116 = sub_117;
    v_143 = sub_171;
  };
  if (controller_c_light_2) {
    sub_176 = v_143;
  } else {
    sub_176 = sub_116;
  };
  if (controller_light_switch) {
    v_192 = sub_116;
  } else {
    v_192 = sub_176;
  };
  if (controller_c_light_1) {
    sub_115 = v_192;
  } else {
    sub_115 = sub_176;
  };
  if (controller_air_failed_recovered) {
    v_230 = sub_115;
    sub_4 = sub_5;
  } else {
    v_230 = sub_5;
    sub_4 = sub_115;
  };
  if (controller_ck_46_1) {
    sub_3 = v_230;
  } else {
    sub_3 = sub_4;
  };
  if (controller_c_pc) {
    sub_197 = sub_27;
  } else {
    sub_197 = sub_23;
  };
  if (controller_c_door) {
    sub_196 = sub_197;
    sub_198 = false;
  } else {
    sub_196 = false;
    sub_198 = sub_197;
  };
  if (controller_ck_39_1) {
    sub_195 = sub_198;
  } else {
    sub_195 = sub_196;
  };
  if (controller_c_closet) {
    sub_194 = false;
    sub_199 = sub_195;
  } else {
    sub_194 = sub_195;
    sub_199 = false;
  };
  if (controller_closet_failed_recovered) {
    v_135 = sub_199;
    sub_193 = sub_194;
  } else {
    v_135 = sub_194;
    sub_193 = sub_199;
  };
  if (controller_ck_53_1) {
    sub_192 = v_135;
  } else {
    sub_192 = sub_193;
  };
  sub_200 = sub_194;
  if (controller_cleaner) {
    v_136 = sub_200;
    sub_191 = sub_192;
  } else {
    v_136 = sub_192;
    sub_191 = sub_200;
  };
  if (controller_ck_37_1) {
    sub_190 = v_136;
  } else {
    sub_190 = sub_191;
  };
  if (controller_c_window) {
    sub_189 = sub_190;
  } else {
    sub_189 = false;
  };
  sub_188 = sub_189;
  sub_187 = sub_188;
  sub_186 = sub_187;
  if (controller_blind_failed_recovered) {
    v_137 = false;
    sub_185 = sub_186;
  } else {
    v_137 = sub_186;
    sub_185 = false;
  };
  if (controller_ck_63_1) {
    sub_184 = v_137;
  } else {
    sub_184 = sub_185;
  };
  if (controller_c_window) {
    sub_206 = false;
  } else {
    sub_206 = sub_190;
  };
  sub_205 = sub_206;
  sub_204 = sub_205;
  sub_203 = sub_204;
  if (controller_blind_failed_recovered) {
    v_134 = sub_203;
    sub_202 = sub_186;
  } else {
    v_134 = sub_186;
    sub_202 = sub_203;
  };
  if (controller_ck_63_1) {
    sub_201 = v_134;
  } else {
    sub_201 = sub_202;
  };
  if (controller_ck_61_1) {
    v_138 = sub_201;
  } else {
    v_138 = sub_184;
  };
  if (controller_c_pc) {
    sub_221 = sub_62;
  } else {
    sub_221 = sub_58;
  };
  if (controller_c_door) {
    sub_220 = sub_221;
    sub_222 = false;
  } else {
    sub_220 = false;
    sub_222 = sub_221;
  };
  if (controller_ck_39_1) {
    sub_219 = sub_222;
  } else {
    sub_219 = sub_220;
  };
  if (controller_c_closet) {
    sub_218 = false;
    sub_223 = sub_219;
  } else {
    sub_218 = sub_219;
    sub_223 = false;
  };
  if (controller_closet_failed_recovered) {
    v_131 = sub_223;
    sub_217 = sub_218;
  } else {
    v_131 = sub_218;
    sub_217 = sub_223;
  };
  if (controller_ck_53_1) {
    sub_216 = v_131;
  } else {
    sub_216 = sub_217;
  };
  sub_224 = sub_218;
  if (controller_cleaner) {
    v_132 = sub_224;
    sub_215 = sub_216;
  } else {
    v_132 = sub_216;
    sub_215 = sub_224;
  };
  if (controller_ck_37_1) {
    sub_214 = v_132;
  } else {
    sub_214 = sub_215;
  };
  if (controller_c_window) {
    sub_213 = false;
  } else {
    sub_213 = sub_214;
  };
  sub_212 = sub_213;
  sub_211 = sub_212;
  sub_210 = sub_211;
  if (controller_blind_failed_recovered) {
    v_133 = sub_210;
    sub_209 = sub_186;
  } else {
    v_133 = sub_186;
    sub_209 = sub_210;
  };
  if (controller_ck_63_1) {
    sub_208 = v_133;
  } else {
    sub_208 = sub_209;
  };
  if (controller_ck_61_1) {
    sub_207 = sub_201;
  } else {
    sub_207 = sub_208;
  };
  if (controller_blind_switch) {
    v_139 = v_138;
  } else {
    v_139 = sub_207;
  };
  if (controller_c_blind_1) {
    sub_183 = v_139;
  } else {
    sub_183 = sub_207;
  };
  if (controller_change_shift) {
    v_127 = false;
    sub_231 = sub_206;
  } else {
    v_127 = sub_206;
    sub_231 = false;
  };
  if (controller_ck_1) {
    sub_230 = v_127;
  } else {
    sub_230 = sub_231;
  };
  sub_229 = sub_230;
  sub_228 = sub_229;
  if (controller_blind_failed_recovered) {
    v_128 = sub_228;
    sub_227 = false;
  } else {
    v_128 = false;
    sub_227 = sub_228;
  };
  if (controller_ck_63_1) {
    sub_226 = v_128;
  } else {
    sub_226 = sub_227;
  };
  if (controller_ck_61_1) {
    v_129 = sub_226;
  } else {
    v_129 = false;
  };
  if (controller_change_shift) {
    v_125 = false;
    sub_238 = sub_213;
  } else {
    v_125 = sub_213;
    sub_238 = false;
  };
  if (controller_ck_1) {
    sub_237 = v_125;
  } else {
    sub_237 = sub_238;
  };
  sub_236 = sub_237;
  sub_235 = sub_236;
  if (controller_blind_failed_recovered) {
    v_126 = sub_235;
    sub_234 = false;
  } else {
    v_126 = false;
    sub_234 = sub_235;
  };
  if (controller_ck_63_1) {
    sub_233 = v_126;
  } else {
    sub_233 = sub_234;
  };
  if (controller_ck_61_1) {
    sub_232 = sub_226;
  } else {
    sub_232 = sub_233;
  };
  if (controller_blind_switch) {
    v_130 = v_129;
  } else {
    v_130 = sub_232;
  };
  sub_239 = sub_232;
  if (controller_c_blind_1) {
    sub_225 = v_130;
  } else {
    sub_225 = sub_239;
  };
  if (controller_light_failed_recovered) {
    v_140 = sub_225;
    sub_182 = sub_183;
  } else {
    v_140 = sub_183;
    sub_182 = sub_225;
  };
  if (controller_ck_58_1) {
    sub_181 = v_140;
  } else {
    sub_181 = sub_182;
  };
  sub_240 = sub_183;
  if (controller_ck_56_1) {
    sub_180 = sub_240;
    v_124 = sub_181;
  } else {
    sub_180 = sub_181;
    v_124 = sub_240;
  };
  if (controller_c_light_2) {
    sub_241 = v_124;
  } else {
    sub_241 = sub_180;
  };
  if (controller_light_switch) {
    v_141 = sub_180;
  } else {
    v_141 = sub_241;
  };
  if (controller_c_light_1) {
    sub_179 = v_141;
  } else {
    sub_179 = sub_241;
  };
  if (controller_c_closet) {
    sub_256 = false;
  } else {
    sub_256 = sub_197;
  };
  sub_255 = sub_256;
  if (controller_cleaner) {
    v_114 = sub_255;
    sub_254 = false;
  } else {
    v_114 = false;
    sub_254 = sub_255;
  };
  if (controller_ck_37_1) {
    sub_253 = v_114;
  } else {
    sub_253 = sub_254;
  };
  sub_252 = sub_253;
  sub_251 = sub_252;
  if (controller_v_277) {
    v_116 = false;
  } else {
    v_116 = sub_251;
  };
  if (controller_v_276) {
    v_117 = v_116;
  } else {
    v_117 = sub_251;
  };
  if (controller_v_277) {
    sub_250 = sub_251;
  } else {
    sub_250 = false;
  };
  if (controller_ck_39_1) {
    sub_264 = sub_196;
  } else {
    sub_264 = sub_198;
  };
  if (controller_c_closet) {
    sub_263 = false;
    sub_265 = sub_264;
  } else {
    sub_263 = sub_264;
    sub_265 = false;
  };
  if (controller_closet_failed_recovered) {
    v_111 = sub_265;
    sub_262 = sub_263;
  } else {
    v_111 = sub_263;
    sub_262 = sub_265;
  };
  if (controller_ck_53_1) {
    sub_261 = v_111;
  } else {
    sub_261 = sub_262;
  };
  if (controller_cleaner) {
    v_112 = false;
    sub_260 = sub_261;
  } else {
    v_112 = sub_261;
    sub_260 = false;
  };
  if (controller_ck_37_1) {
    v_113 = v_112;
  } else {
    v_113 = sub_260;
  };
  if (controller_c_window) {
    sub_259 = v_113;
  } else {
    sub_259 = false;
  };
  sub_258 = sub_259;
  if (controller_v_277) {
    sub_257 = sub_251;
  } else {
    sub_257 = sub_258;
  };
  if (controller_v_276) {
    v_115 = sub_257;
  } else {
    v_115 = sub_250;
  };
  if (controller_c_air_2) {
    v_118 = v_115;
  } else {
    v_118 = v_117;
  };
  if (controller_v_277) {
    v_110 = sub_258;
  } else {
    v_110 = false;
  };
  if (controller_v_276) {
    sub_266 = v_110;
  } else {
    sub_266 = sub_257;
  };
  if (controller_c_air_1) {
    sub_249 = v_118;
  } else {
    sub_249 = sub_266;
  };
  if (controller_blind_failed_recovered) {
    v_119 = false;
    sub_248 = sub_249;
  } else {
    v_119 = sub_249;
    sub_248 = false;
  };
  if (controller_ck_63_1) {
    sub_247 = v_119;
  } else {
    sub_247 = sub_248;
  };
  sub_267 = sub_249;
  if (controller_ck_61_1) {
    v_120 = sub_267;
  } else {
    v_120 = sub_247;
  };
  if (controller_c_closet) {
    sub_278 = false;
  } else {
    sub_278 = sub_221;
  };
  sub_277 = sub_278;
  if (controller_cleaner) {
    v_105 = sub_277;
    sub_276 = false;
  } else {
    v_105 = false;
    sub_276 = sub_277;
  };
  if (controller_ck_37_1) {
    sub_275 = v_105;
  } else {
    sub_275 = sub_276;
  };
  sub_274 = sub_275;
  sub_273 = sub_274;
  if (controller_v_277) {
    v_107 = false;
  } else {
    v_107 = sub_273;
  };
  if (controller_v_276) {
    v_108 = v_107;
  } else {
    v_108 = sub_273;
  };
  if (controller_v_277) {
    sub_272 = sub_273;
  } else {
    sub_272 = false;
  };
  if (controller_ck_39_1) {
    sub_286 = sub_220;
  } else {
    sub_286 = sub_222;
  };
  if (controller_c_closet) {
    sub_285 = false;
    sub_287 = sub_286;
  } else {
    sub_285 = sub_286;
    sub_287 = false;
  };
  if (controller_closet_failed_recovered) {
    v_102 = sub_287;
    sub_284 = sub_285;
  } else {
    v_102 = sub_285;
    sub_284 = sub_287;
  };
  if (controller_ck_53_1) {
    sub_283 = v_102;
  } else {
    sub_283 = sub_284;
  };
  if (controller_cleaner) {
    v_103 = false;
    sub_282 = sub_283;
  } else {
    v_103 = sub_283;
    sub_282 = false;
  };
  if (controller_ck_37_1) {
    v_104 = v_103;
  } else {
    v_104 = sub_282;
  };
  if (controller_c_window) {
    sub_281 = v_104;
  } else {
    sub_281 = false;
  };
  sub_280 = sub_281;
  if (controller_v_277) {
    sub_279 = sub_273;
  } else {
    sub_279 = sub_280;
  };
  if (controller_v_276) {
    v_106 = sub_279;
  } else {
    v_106 = sub_272;
  };
  if (controller_c_air_2) {
    v_109 = v_106;
  } else {
    v_109 = v_108;
  };
  if (controller_v_277) {
    v_101 = sub_280;
  } else {
    v_101 = false;
  };
  if (controller_v_276) {
    sub_288 = v_101;
  } else {
    sub_288 = sub_279;
  };
  if (controller_c_air_1) {
    sub_271 = v_109;
  } else {
    sub_271 = sub_288;
  };
  if (controller_blind_failed_recovered) {
    sub_270 = sub_249;
    sub_289 = sub_271;
  } else {
    sub_270 = sub_271;
    sub_289 = sub_249;
  };
  if (controller_ck_63_1) {
    sub_269 = sub_289;
  } else {
    sub_269 = sub_270;
  };
  if (controller_ck_61_1) {
    sub_268 = sub_267;
  } else {
    sub_268 = sub_269;
  };
  if (controller_blind_switch) {
    v_121 = v_120;
  } else {
    v_121 = sub_268;
  };
  if (controller_c_blind_1) {
    sub_246 = v_121;
  } else {
    sub_246 = sub_268;
  };
  if (controller_change_shift) {
    v_93 = false;
    sub_296 = sub_252;
  } else {
    v_93 = sub_252;
    sub_296 = false;
  };
  if (controller_ck_1) {
    sub_295 = v_93;
  } else {
    sub_295 = sub_296;
  };
  if (controller_v_277) {
    v_95 = false;
  } else {
    v_95 = sub_295;
  };
  if (controller_v_276) {
    v_96 = v_95;
  } else {
    v_96 = sub_295;
  };
  if (controller_v_277) {
    sub_294 = sub_295;
  } else {
    sub_294 = false;
  };
  if (controller_change_shift) {
    v_92 = false;
    sub_299 = sub_259;
  } else {
    v_92 = sub_259;
    sub_299 = false;
  };
  if (controller_ck_1) {
    sub_298 = v_92;
  } else {
    sub_298 = sub_299;
  };
  if (controller_v_277) {
    sub_297 = sub_295;
  } else {
    sub_297 = sub_298;
  };
  if (controller_v_276) {
    v_94 = sub_297;
  } else {
    v_94 = sub_294;
  };
  if (controller_c_air_2) {
    v_97 = v_94;
  } else {
    v_97 = v_96;
  };
  if (controller_v_277) {
    v_91 = sub_298;
  } else {
    v_91 = false;
  };
  if (controller_v_276) {
    sub_300 = v_91;
  } else {
    sub_300 = sub_297;
  };
  if (controller_c_air_1) {
    sub_293 = v_97;
  } else {
    sub_293 = sub_300;
  };
  if (controller_blind_failed_recovered) {
    v_98 = sub_293;
    sub_292 = false;
  } else {
    v_98 = false;
    sub_292 = sub_293;
  };
  if (controller_ck_63_1) {
    sub_291 = v_98;
  } else {
    sub_291 = sub_292;
  };
  if (controller_ck_61_1) {
    v_99 = sub_291;
  } else {
    v_99 = false;
  };
  if (controller_change_shift) {
    v_85 = false;
    sub_307 = sub_274;
  } else {
    v_85 = sub_274;
    sub_307 = false;
  };
  if (controller_ck_1) {
    sub_306 = v_85;
  } else {
    sub_306 = sub_307;
  };
  if (controller_v_277) {
    v_87 = false;
  } else {
    v_87 = sub_306;
  };
  if (controller_v_276) {
    v_88 = v_87;
  } else {
    v_88 = sub_306;
  };
  if (controller_v_277) {
    sub_305 = sub_306;
  } else {
    sub_305 = false;
  };
  if (controller_change_shift) {
    v_84 = false;
    sub_310 = sub_281;
  } else {
    v_84 = sub_281;
    sub_310 = false;
  };
  if (controller_ck_1) {
    sub_309 = v_84;
  } else {
    sub_309 = sub_310;
  };
  if (controller_v_277) {
    sub_308 = sub_306;
  } else {
    sub_308 = sub_309;
  };
  if (controller_v_276) {
    v_86 = sub_308;
  } else {
    v_86 = sub_305;
  };
  if (controller_c_air_2) {
    v_89 = v_86;
  } else {
    v_89 = v_88;
  };
  if (controller_v_277) {
    v_83 = sub_309;
  } else {
    v_83 = false;
  };
  if (controller_v_276) {
    sub_311 = v_83;
  } else {
    sub_311 = sub_308;
  };
  if (controller_c_air_1) {
    sub_304 = v_89;
  } else {
    sub_304 = sub_311;
  };
  if (controller_blind_failed_recovered) {
    v_90 = sub_304;
    sub_303 = false;
  } else {
    v_90 = false;
    sub_303 = sub_304;
  };
  if (controller_ck_63_1) {
    sub_302 = v_90;
  } else {
    sub_302 = sub_303;
  };
  if (controller_ck_61_1) {
    sub_301 = sub_291;
  } else {
    sub_301 = sub_302;
  };
  if (controller_blind_switch) {
    v_100 = v_99;
  } else {
    v_100 = sub_301;
  };
  sub_312 = sub_301;
  if (controller_c_blind_1) {
    sub_290 = v_100;
  } else {
    sub_290 = sub_312;
  };
  if (controller_light_failed_recovered) {
    v_122 = sub_290;
    sub_245 = sub_246;
  } else {
    v_122 = sub_246;
    sub_245 = sub_290;
  };
  if (controller_ck_58_1) {
    sub_244 = v_122;
  } else {
    sub_244 = sub_245;
  };
  sub_316 = sub_267;
  sub_315 = sub_316;
  if (controller_light_failed_recovered) {
    v_82 = sub_315;
    sub_314 = sub_246;
  } else {
    v_82 = sub_246;
    sub_314 = sub_315;
  };
  if (controller_ck_58_1) {
    sub_313 = v_82;
  } else {
    sub_313 = sub_314;
  };
  if (controller_ck_56_1) {
    sub_243 = sub_313;
    v_81 = sub_244;
  } else {
    sub_243 = sub_244;
    v_81 = sub_313;
  };
  if (controller_c_light_2) {
    sub_317 = v_81;
  } else {
    sub_317 = sub_243;
  };
  if (controller_light_switch) {
    v_123 = sub_243;
  } else {
    v_123 = sub_317;
  };
  if (controller_c_light_1) {
    sub_242 = v_123;
  } else {
    sub_242 = sub_317;
  };
  if (controller_air_failed_recovered) {
    v_142 = sub_242;
    sub_178 = sub_179;
  } else {
    v_142 = sub_179;
    sub_178 = sub_242;
  };
  if (controller_ck_46_1) {
    sub_177 = v_142;
  } else {
    sub_177 = sub_178;
  };
  if (controller_worker) {
    v_231 = sub_177;
    sub_2 = sub_3;
  } else {
    v_231 = sub_3;
    sub_2 = sub_177;
  };
  if (controller_ck_35_1) {
    sub_1 = v_231;
  } else {
    sub_1 = sub_2;
  };
  if (controller_cleaner) {
    v_71 = sub_54;
    sub_332 = sub_71;
  } else {
    v_71 = sub_71;
    sub_332 = sub_54;
  };
  if (controller_ck_37_1) {
    v_72 = v_71;
  } else {
    v_72 = sub_332;
  };
  if (controller_c_window) {
    sub_331 = v_72;
  } else {
    sub_331 = false;
  };
  sub_330 = sub_331;
  sub_329 = sub_330;
  sub_328 = sub_329;
  if (controller_blind_failed_recovered) {
    v_74 = sub_110;
  } else {
    v_74 = sub_328;
  };
  sub_334 = sub_149;
  sub_333 = sub_334;
  if (controller_blind_failed_recovered) {
    v_73 = sub_333;
    sub_327 = sub_328;
  } else {
    v_73 = sub_328;
    sub_327 = sub_333;
  };
  if (controller_ck_63_1) {
    sub_326 = v_73;
  } else {
    sub_326 = sub_327;
  };
  if (controller_blind_failed_recovered) {
    sub_335 = sub_328;
  } else {
    sub_335 = sub_110;
  };
  if (controller_ck_63_1) {
    v_75 = v_74;
  } else {
    v_75 = sub_335;
  };
  if (controller_ck_61_1) {
    v_76 = v_75;
  } else {
    v_76 = sub_326;
  };
  if (controller_blind_failed_recovered) {
    v_69 = sub_65;
    v_68 = sub_48;
    sub_338 = sub_328;
  } else {
    v_69 = sub_328;
    v_68 = sub_328;
    sub_338 = sub_48;
  };
  if (controller_ck_63_1) {
    sub_337 = v_68;
  } else {
    sub_337 = sub_338;
  };
  if (controller_blind_failed_recovered) {
    sub_339 = sub_328;
  } else {
    sub_339 = sub_65;
  };
  if (controller_ck_63_1) {
    v_70 = v_69;
  } else {
    v_70 = sub_339;
  };
  if (controller_ck_61_1) {
    sub_336 = v_70;
  } else {
    sub_336 = sub_337;
  };
  if (controller_blind_switch) {
    v_77 = v_76;
  } else {
    v_77 = sub_336;
  };
  if (controller_c_blind_1) {
    sub_325 = v_77;
  } else {
    sub_325 = sub_336;
  };
  sub_341 = sub_333;
  if (controller_change_shift) {
    v_63 = false;
    sub_346 = sub_113;
  } else {
    v_63 = sub_113;
    sub_346 = false;
  };
  if (controller_ck_1) {
    sub_345 = v_63;
  } else {
    sub_345 = sub_346;
  };
  sub_344 = sub_345;
  sub_343 = sub_344;
  if (controller_blind_failed_recovered) {
    v_64 = sub_343;
    sub_342 = sub_333;
  } else {
    v_64 = sub_333;
    sub_342 = sub_343;
  };
  if (controller_ck_63_1) {
    v_65 = v_64;
  } else {
    v_65 = sub_342;
  };
  if (controller_ck_61_1) {
    v_66 = v_65;
  } else {
    v_66 = sub_341;
  };
  if (controller_blind_failed_recovered) {
    v_61 = sub_91;
    v_60 = sub_86;
    sub_349 = sub_333;
  } else {
    v_61 = sub_333;
    v_60 = sub_333;
    sub_349 = sub_86;
  };
  if (controller_ck_63_1) {
    sub_348 = v_60;
  } else {
    sub_348 = sub_349;
  };
  if (controller_blind_failed_recovered) {
    sub_350 = sub_333;
  } else {
    sub_350 = sub_91;
  };
  if (controller_ck_63_1) {
    v_62 = v_61;
  } else {
    v_62 = sub_350;
  };
  if (controller_ck_61_1) {
    sub_347 = v_62;
  } else {
    sub_347 = sub_348;
  };
  if (controller_blind_switch) {
    v_67 = v_66;
  } else {
    v_67 = sub_347;
  };
  if (controller_c_blind_1) {
    sub_340 = v_67;
  } else {
    sub_340 = sub_347;
  };
  if (controller_light_failed_recovered) {
    v_78 = sub_340;
    sub_324 = sub_325;
  } else {
    v_78 = sub_325;
    sub_324 = sub_340;
  };
  if (controller_ck_58_1) {
    sub_323 = v_78;
  } else {
    sub_323 = sub_324;
  };
  if (controller_c_window) {
    sub_359 = sub_52;
  } else {
    sub_359 = false;
  };
  sub_358 = sub_359;
  sub_357 = sub_358;
  sub_356 = sub_357;
  if (controller_blind_failed_recovered) {
    v_56 = false;
    sub_355 = sub_356;
  } else {
    v_56 = sub_356;
    sub_355 = false;
  };
  if (controller_ck_63_1) {
    sub_354 = v_56;
  } else {
    sub_354 = sub_355;
  };
  if (controller_blind_failed_recovered) {
    v_55 = sub_110;
    sub_361 = sub_356;
  } else {
    v_55 = sub_356;
    sub_361 = sub_110;
  };
  if (controller_ck_63_1) {
    sub_360 = v_55;
  } else {
    sub_360 = sub_361;
  };
  if (controller_ck_61_1) {
    v_57 = sub_360;
  } else {
    v_57 = sub_354;
  };
  if (controller_blind_failed_recovered) {
    v_53 = sub_39;
    sub_363 = sub_356;
  } else {
    v_53 = sub_356;
    sub_363 = sub_39;
  };
  if (controller_ck_63_1) {
    v_54 = v_53;
  } else {
    v_54 = sub_363;
  };
  if (controller_ck_61_1) {
    sub_362 = v_54;
  } else {
    sub_362 = sub_360;
  };
  if (controller_blind_switch) {
    v_58 = v_57;
  } else {
    v_58 = sub_362;
  };
  if (controller_c_blind_1) {
    sub_353 = v_58;
  } else {
    sub_353 = sub_362;
  };
  if (controller_light_failed_recovered) {
    v_59 = sub_353;
    sub_352 = sub_325;
  } else {
    v_59 = sub_325;
    sub_352 = sub_353;
  };
  if (controller_ck_58_1) {
    sub_351 = v_59;
  } else {
    sub_351 = sub_352;
  };
  if (controller_ck_56_1) {
    sub_322 = sub_351;
    v_52 = sub_323;
  } else {
    sub_322 = sub_323;
    v_52 = sub_351;
  };
  if (controller_c_light_2) {
    sub_364 = v_52;
  } else {
    sub_364 = sub_322;
  };
  if (controller_light_switch) {
    v_79 = sub_322;
  } else {
    v_79 = sub_364;
  };
  if (controller_c_light_1) {
    sub_321 = v_79;
  } else {
    sub_321 = sub_364;
  };
  if (controller_v_276) {
    v_43 = sub_140;
  } else {
    v_43 = sub_148;
  };
  if (controller_c_air_2) {
    v_44 = v_43;
  } else {
    v_44 = sub_150;
  };
  if (controller_v_277) {
    v_42 = sub_141;
  } else {
    v_42 = sub_149;
  };
  if (controller_v_276) {
    sub_373 = v_42;
  } else {
    sub_373 = sub_140;
  };
  if (controller_c_air_1) {
    sub_372 = v_44;
  } else {
    sub_372 = sub_373;
  };
  if (controller_v_276) {
    v_40 = false;
  } else {
    v_40 = sub_148;
  };
  if (controller_c_air_2) {
    v_41 = v_40;
  } else {
    v_41 = sub_150;
  };
  if (controller_v_276) {
    sub_375 = sub_148;
  } else {
    sub_375 = false;
  };
  if (controller_c_air_1) {
    sub_374 = v_41;
  } else {
    sub_374 = sub_375;
  };
  if (controller_blind_failed_recovered) {
    v_45 = sub_374;
    sub_371 = sub_372;
  } else {
    v_45 = sub_372;
    sub_371 = sub_374;
  };
  if (controller_ck_63_1) {
    sub_370 = v_45;
  } else {
    sub_370 = sub_371;
  };
  if (controller_v_276) {
    v_38 = sub_140;
  } else {
    v_38 = false;
  };
  if (controller_c_air_2) {
    v_39 = v_38;
  } else {
    v_39 = false;
  };
  if (controller_v_277) {
    v_37 = sub_141;
  } else {
    v_37 = false;
  };
  if (controller_v_276) {
    sub_378 = v_37;
  } else {
    sub_378 = sub_140;
  };
  if (controller_c_air_1) {
    sub_377 = v_39;
  } else {
    sub_377 = sub_378;
  };
  if (controller_blind_failed_recovered) {
    v_46 = sub_377;
    sub_376 = sub_372;
  } else {
    v_46 = sub_372;
    sub_376 = sub_377;
  };
  if (controller_ck_63_1) {
    v_47 = v_46;
  } else {
    v_47 = sub_376;
  };
  if (controller_ck_61_1) {
    v_48 = v_47;
  } else {
    v_48 = sub_370;
  };
  if (controller_blind_failed_recovered) {
    v_35 = sub_147;
    v_34 = sub_139;
    sub_381 = sub_372;
  } else {
    v_35 = sub_372;
    v_34 = sub_372;
    sub_381 = sub_139;
  };
  if (controller_ck_63_1) {
    sub_380 = v_34;
  } else {
    sub_380 = sub_381;
  };
  if (controller_blind_failed_recovered) {
    sub_382 = sub_372;
  } else {
    sub_382 = sub_147;
  };
  if (controller_ck_63_1) {
    v_36 = v_35;
  } else {
    v_36 = sub_382;
  };
  if (controller_ck_61_1) {
    sub_379 = v_36;
  } else {
    sub_379 = sub_380;
  };
  if (controller_blind_switch) {
    v_49 = v_48;
  } else {
    v_49 = sub_379;
  };
  if (controller_c_blind_1) {
    sub_369 = v_49;
  } else {
    sub_369 = sub_379;
  };
  sub_384 = sub_374;
  if (controller_v_276) {
    v_28 = sub_164;
  } else {
    v_28 = false;
  };
  if (controller_c_air_2) {
    v_29 = v_28;
  } else {
    v_29 = false;
  };
  if (controller_v_277) {
    v_27 = sub_165;
  } else {
    v_27 = false;
  };
  if (controller_v_276) {
    sub_387 = v_27;
  } else {
    sub_387 = sub_164;
  };
  if (controller_c_air_1) {
    sub_386 = v_29;
  } else {
    sub_386 = sub_387;
  };
  if (controller_blind_failed_recovered) {
    v_30 = sub_386;
    sub_385 = sub_374;
  } else {
    v_30 = sub_374;
    sub_385 = sub_386;
  };
  if (controller_ck_63_1) {
    v_31 = v_30;
  } else {
    v_31 = sub_385;
  };
  if (controller_ck_61_1) {
    v_32 = v_31;
  } else {
    v_32 = sub_384;
  };
  if (controller_blind_failed_recovered) {
    v_25 = sub_169;
    v_24 = sub_163;
    sub_390 = sub_374;
  } else {
    v_25 = sub_374;
    v_24 = sub_374;
    sub_390 = sub_163;
  };
  if (controller_ck_63_1) {
    sub_389 = v_24;
  } else {
    sub_389 = sub_390;
  };
  if (controller_blind_failed_recovered) {
    sub_391 = sub_374;
  } else {
    sub_391 = sub_169;
  };
  if (controller_ck_63_1) {
    v_26 = v_25;
  } else {
    v_26 = sub_391;
  };
  if (controller_ck_61_1) {
    sub_388 = v_26;
  } else {
    sub_388 = sub_389;
  };
  if (controller_blind_switch) {
    v_33 = v_32;
  } else {
    v_33 = sub_388;
  };
  if (controller_c_blind_1) {
    sub_383 = v_33;
  } else {
    sub_383 = sub_388;
  };
  if (controller_light_failed_recovered) {
    v_50 = sub_383;
    sub_368 = sub_369;
  } else {
    v_50 = sub_369;
    sub_368 = sub_383;
  };
  if (controller_ck_58_1) {
    sub_367 = v_50;
  } else {
    sub_367 = sub_368;
  };
  sub_396 = sub_377;
  sub_395 = sub_396;
  sub_394 = sub_395;
  if (controller_light_failed_recovered) {
    v_23 = sub_394;
    sub_393 = sub_369;
  } else {
    v_23 = sub_369;
    sub_393 = sub_394;
  };
  if (controller_ck_58_1) {
    sub_392 = v_23;
  } else {
    sub_392 = sub_393;
  };
  if (controller_ck_56_1) {
    sub_366 = sub_392;
    v_22 = sub_367;
  } else {
    sub_366 = sub_367;
    v_22 = sub_392;
  };
  if (controller_c_light_2) {
    sub_397 = v_22;
  } else {
    sub_397 = sub_366;
  };
  if (controller_light_switch) {
    v_51 = sub_366;
  } else {
    v_51 = sub_397;
  };
  if (controller_c_light_1) {
    sub_365 = v_51;
  } else {
    sub_365 = sub_397;
  };
  if (controller_air_failed_recovered) {
    v_80 = sub_365;
    sub_320 = sub_321;
  } else {
    v_80 = sub_321;
    sub_320 = sub_365;
  };
  if (controller_ck_46_1) {
    sub_319 = v_80;
  } else {
    sub_319 = sub_320;
  };
  if (controller_c_window) {
    sub_410 = sub_214;
  } else {
    sub_410 = false;
  };
  sub_409 = sub_410;
  sub_408 = sub_409;
  sub_407 = sub_408;
  if (controller_blind_failed_recovered) {
    v_16 = false;
    sub_406 = sub_407;
  } else {
    v_16 = sub_407;
    sub_406 = false;
  };
  if (controller_ck_63_1) {
    sub_405 = v_16;
  } else {
    sub_405 = sub_406;
  };
  if (controller_blind_failed_recovered) {
    v_15 = sub_210;
    sub_412 = sub_407;
  } else {
    v_15 = sub_407;
    sub_412 = sub_210;
  };
  if (controller_ck_63_1) {
    sub_411 = v_15;
  } else {
    sub_411 = sub_412;
  };
  if (controller_ck_61_1) {
    v_17 = sub_411;
  } else {
    v_17 = sub_405;
  };
  if (controller_blind_failed_recovered) {
    v_13 = sub_203;
    sub_414 = sub_407;
  } else {
    v_13 = sub_407;
    sub_414 = sub_203;
  };
  if (controller_ck_63_1) {
    v_14 = v_13;
  } else {
    v_14 = sub_414;
  };
  if (controller_ck_61_1) {
    sub_413 = v_14;
  } else {
    sub_413 = sub_411;
  };
  if (controller_blind_switch) {
    v_18 = v_17;
  } else {
    v_18 = sub_413;
  };
  if (controller_c_blind_1) {
    sub_404 = v_18;
  } else {
    sub_404 = sub_413;
  };
  if (controller_ck_61_1) {
    v_11 = sub_233;
  } else {
    v_11 = false;
  };
  if (controller_blind_switch) {
    v_12 = v_11;
  } else {
    v_12 = sub_232;
  };
  if (controller_c_blind_1) {
    sub_415 = v_12;
  } else {
    sub_415 = sub_239;
  };
  if (controller_light_failed_recovered) {
    v_19 = sub_415;
    sub_403 = sub_404;
  } else {
    v_19 = sub_404;
    sub_403 = sub_415;
  };
  if (controller_ck_58_1) {
    sub_402 = v_19;
  } else {
    sub_402 = sub_403;
  };
  sub_416 = sub_404;
  if (controller_ck_56_1) {
    sub_401 = sub_416;
    v_10 = sub_402;
  } else {
    sub_401 = sub_402;
    v_10 = sub_416;
  };
  if (controller_c_light_2) {
    sub_417 = v_10;
  } else {
    sub_417 = sub_401;
  };
  if (controller_light_switch) {
    v_20 = sub_401;
  } else {
    v_20 = sub_417;
  };
  if (controller_c_light_1) {
    sub_400 = v_20;
  } else {
    sub_400 = sub_417;
  };
  if (controller_blind_failed_recovered) {
    v_5 = false;
    sub_424 = sub_271;
  } else {
    v_5 = sub_271;
    sub_424 = false;
  };
  if (controller_ck_63_1) {
    sub_423 = v_5;
  } else {
    sub_423 = sub_424;
  };
  sub_425 = sub_271;
  if (controller_ck_61_1) {
    v_6 = sub_425;
  } else {
    v_6 = sub_423;
  };
  if (controller_ck_63_1) {
    v_4 = sub_270;
  } else {
    v_4 = sub_289;
  };
  if (controller_ck_61_1) {
    sub_426 = v_4;
  } else {
    sub_426 = sub_425;
  };
  if (controller_blind_switch) {
    v_7 = v_6;
  } else {
    v_7 = sub_426;
  };
  if (controller_c_blind_1) {
    sub_422 = v_7;
  } else {
    sub_422 = sub_426;
  };
  if (controller_ck_61_1) {
    v_2 = sub_302;
  } else {
    v_2 = false;
  };
  if (controller_blind_switch) {
    v_3 = v_2;
  } else {
    v_3 = sub_301;
  };
  if (controller_c_blind_1) {
    sub_427 = v_3;
  } else {
    sub_427 = sub_312;
  };
  if (controller_light_failed_recovered) {
    v_8 = sub_427;
    sub_421 = sub_422;
  } else {
    v_8 = sub_422;
    sub_421 = sub_427;
  };
  if (controller_ck_58_1) {
    sub_420 = v_8;
  } else {
    sub_420 = sub_421;
  };
  sub_431 = sub_425;
  sub_430 = sub_431;
  if (controller_light_failed_recovered) {
    v_1 = sub_430;
    sub_429 = sub_422;
  } else {
    v_1 = sub_422;
    sub_429 = sub_430;
  };
  if (controller_ck_58_1) {
    sub_428 = v_1;
  } else {
    sub_428 = sub_429;
  };
  if (controller_ck_56_1) {
    sub_419 = sub_428;
    v = sub_420;
  } else {
    sub_419 = sub_420;
    v = sub_428;
  };
  if (controller_c_light_2) {
    sub_432 = v;
  } else {
    sub_432 = sub_419;
  };
  if (controller_light_switch) {
    v_9 = sub_419;
  } else {
    v_9 = sub_432;
  };
  if (controller_c_light_1) {
    sub_418 = v_9;
  } else {
    sub_418 = sub_432;
  };
  if (controller_air_failed_recovered) {
    v_21 = sub_418;
    sub_399 = sub_400;
  } else {
    v_21 = sub_400;
    sub_399 = sub_418;
  };
  if (controller_ck_46_1) {
    sub_398 = v_21;
  } else {
    sub_398 = sub_399;
  };
  if (controller_worker) {
    v_232 = sub_398;
    sub_318 = sub_319;
  } else {
    v_232 = sub_319;
    sub_318 = sub_398;
  };
  if (controller_ck_35_1) {
    v_233 = v_232;
  } else {
    v_233 = sub_318;
  };
  if (p_controller_c_blind_2) {
    sub_0 = v_233;
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
  int controller_pnr_19, int controller_ck_35_1, int controller_pnr_18,
  int controller_ck_37_1, int controller_pnr_17, int controller_ck_39_1,
  int controller_pnr_16, int controller_ck_41_1, int controller_pnr_15,
  int controller_v_277, int controller_v_276, int controller_pnr_14,
  int controller_ck_46_1, int controller_pnr_13, int controller_ck_48_1,
  int controller_pnr_12, int controller_ck_51_1, int controller_pnr_11,
  int controller_ck_53_1, int controller_pnr_10, int controller_ck_56_1,
  int controller_pnr_9, int controller_ck_58_1, int controller_pnr_8,
  int controller_ck_61_1, int controller_pnr_7, int controller_ck_63_1,
  int controller_pnr, int p_controller_c_blind_2, int p_controller_c_light_2,
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
  sub_25 = false;
  sub_24 = sub_25;
  sub_23 = sub_24;
  if (controller_ck_41_1) {
    sub_22 = sub_23;
    sub_26 = false;
  } else {
    sub_22 = false;
    sub_26 = sub_23;
  };
  if (controller_c_pc) {
    sub_21 = sub_22;
  } else {
    sub_21 = sub_26;
  };
  if (controller_c_door) {
    sub_20 = false;
    sub_27 = sub_21;
  } else {
    sub_20 = sub_21;
    sub_27 = false;
  };
  if (controller_ck_39_1) {
    sub_19 = sub_27;
  } else {
    sub_19 = sub_20;
  };
  if (controller_c_closet) {
    sub_18 = false;
    sub_28 = sub_19;
  } else {
    sub_18 = sub_19;
    sub_28 = false;
  };
  if (controller_closet_failed_recovered) {
    v_527 = sub_28;
    sub_17 = sub_18;
  } else {
    v_527 = sub_18;
    sub_17 = sub_28;
  };
  if (controller_ck_53_1) {
    sub_16 = v_527;
  } else {
    sub_16 = sub_17;
  };
  if (controller_ck_39_1) {
    v_526 = sub_20;
  } else {
    v_526 = sub_27;
  };
  if (controller_c_closet) {
    sub_30 = false;
  } else {
    sub_30 = v_526;
  };
  sub_29 = sub_30;
  if (controller_cleaner) {
    v_528 = sub_29;
    sub_15 = sub_16;
  } else {
    v_528 = sub_16;
    sub_15 = sub_29;
  };
  if (controller_ck_37_1) {
    v_529 = v_528;
  } else {
    v_529 = sub_15;
  };
  if (controller_c_window) {
    sub_14 = v_529;
  } else {
    sub_14 = false;
  };
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (controller_cleaner) {
    v_525 = false;
    sub_36 = sub_16;
  } else {
    v_525 = sub_16;
    sub_36 = false;
  };
  if (controller_ck_37_1) {
    sub_35 = v_525;
  } else {
    sub_35 = sub_36;
  };
  if (controller_c_window) {
    sub_34 = sub_35;
  } else {
    sub_34 = false;
  };
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  if (controller_blind_failed_recovered) {
    v_530 = sub_31;
    sub_10 = sub_11;
  } else {
    v_530 = sub_11;
    sub_10 = sub_31;
  };
  if (controller_ck_63_1) {
    sub_9 = v_530;
  } else {
    sub_9 = sub_10;
  };
  if (controller_cleaner) {
    v_524 = sub_29;
    sub_43 = false;
  } else {
    v_524 = false;
    sub_43 = sub_29;
  };
  if (controller_ck_37_1) {
    sub_42 = v_524;
  } else {
    sub_42 = sub_43;
  };
  if (controller_c_window) {
    sub_41 = false;
  } else {
    sub_41 = sub_42;
  };
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (controller_blind_failed_recovered) {
    v_531 = sub_38;
    sub_37 = sub_11;
  } else {
    v_531 = sub_11;
    sub_37 = sub_38;
  };
  if (controller_ck_63_1) {
    v_532 = v_531;
  } else {
    v_532 = sub_37;
  };
  if (controller_ck_61_1) {
    v_533 = v_532;
  } else {
    v_533 = sub_9;
  };
  if (controller_c_window) {
    sub_49 = sub_35;
  } else {
    sub_49 = sub_42;
  };
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  if (controller_blind_failed_recovered) {
    v_523 = sub_46;
    sub_45 = sub_11;
  } else {
    v_523 = sub_11;
    sub_45 = sub_46;
  };
  if (controller_ck_63_1) {
    sub_44 = v_523;
  } else {
    sub_44 = sub_45;
  };
  if (controller_blind_switch) {
    v_534 = v_533;
  } else {
    v_534 = sub_44;
  };
  if (controller_c_blind_1) {
    sub_8 = v_534;
  } else {
    sub_8 = sub_44;
  };
  sub_51 = sub_31;
  if (controller_change_shift) {
    v_518 = false;
    sub_56 = sub_41;
  } else {
    v_518 = sub_41;
    sub_56 = false;
  };
  if (controller_ck_1) {
    sub_55 = v_518;
  } else {
    sub_55 = sub_56;
  };
  sub_54 = sub_55;
  sub_53 = sub_54;
  if (controller_blind_failed_recovered) {
    v_519 = sub_53;
    sub_52 = sub_31;
  } else {
    v_519 = sub_31;
    sub_52 = sub_53;
  };
  if (controller_ck_63_1) {
    v_520 = v_519;
  } else {
    v_520 = sub_52;
  };
  if (controller_ck_61_1) {
    v_521 = v_520;
  } else {
    v_521 = sub_51;
  };
  if (controller_change_shift) {
    v_516 = sub_34;
    sub_62 = sub_49;
  } else {
    v_516 = sub_49;
    sub_62 = sub_34;
  };
  if (controller_ck_1) {
    sub_61 = v_516;
  } else {
    sub_61 = sub_62;
  };
  sub_60 = sub_61;
  sub_59 = sub_60;
  if (controller_blind_failed_recovered) {
    v_517 = sub_59;
    sub_58 = sub_31;
  } else {
    v_517 = sub_31;
    sub_58 = sub_59;
  };
  if (controller_ck_63_1) {
    sub_57 = v_517;
  } else {
    sub_57 = sub_58;
  };
  if (controller_blind_switch) {
    v_522 = v_521;
  } else {
    v_522 = sub_57;
  };
  if (controller_c_blind_1) {
    sub_50 = v_522;
  } else {
    sub_50 = sub_57;
  };
  if (controller_light_failed_recovered) {
    v_535 = sub_50;
    sub_7 = sub_8;
  } else {
    v_535 = sub_8;
    sub_7 = sub_50;
  };
  if (controller_ck_58_1) {
    sub_6 = v_535;
  } else {
    sub_6 = sub_7;
  };
  if (controller_c_window) {
    sub_70 = sub_42;
  } else {
    sub_70 = false;
  };
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  if (controller_blind_failed_recovered) {
    v_513 = false;
    sub_66 = sub_67;
  } else {
    v_513 = sub_67;
    sub_66 = false;
  };
  if (controller_ck_63_1) {
    sub_65 = v_513;
  } else {
    sub_65 = sub_66;
  };
  if (controller_blind_failed_recovered) {
    v_512 = sub_38;
    sub_72 = sub_67;
  } else {
    v_512 = sub_67;
    sub_72 = sub_38;
  };
  if (controller_ck_63_1) {
    sub_71 = v_512;
  } else {
    sub_71 = sub_72;
  };
  if (controller_ck_61_1) {
    v_514 = sub_71;
  } else {
    v_514 = sub_65;
  };
  if (controller_blind_switch) {
    v_515 = v_514;
  } else {
    v_515 = sub_71;
  };
  if (controller_c_blind_1) {
    sub_64 = v_515;
  } else {
    sub_64 = sub_71;
  };
  if (controller_light_failed_recovered) {
    v_536 = sub_64;
    sub_63 = sub_8;
  } else {
    v_536 = sub_8;
    sub_63 = sub_64;
  };
  if (controller_ck_58_1) {
    v_537 = v_536;
  } else {
    v_537 = sub_63;
  };
  if (controller_ck_56_1) {
    v_538 = v_537;
  } else {
    v_538 = sub_6;
  };
  sub_91 = true;
  sub_90 = sub_91;
  sub_89 = sub_90;
  if (controller_ck_41_1) {
    sub_88 = sub_89;
    sub_92 = false;
  } else {
    sub_88 = false;
    sub_92 = sub_89;
  };
  if (controller_c_pc) {
    sub_87 = sub_88;
  } else {
    sub_87 = sub_92;
  };
  if (controller_c_door) {
    sub_86 = sub_87;
    sub_93 = false;
  } else {
    sub_86 = false;
    sub_93 = sub_87;
  };
  if (controller_ck_39_1) {
    v_501 = sub_93;
  } else {
    v_501 = sub_86;
  };
  if (controller_c_closet) {
    sub_85 = false;
  } else {
    sub_85 = v_501;
  };
  sub_84 = sub_85;
  if (controller_cleaner) {
    v_502 = sub_84;
    sub_83 = sub_16;
  } else {
    v_502 = sub_16;
    sub_83 = sub_84;
  };
  if (controller_ck_37_1) {
    v_503 = v_502;
  } else {
    v_503 = sub_83;
  };
  if (controller_c_window) {
    sub_82 = v_503;
  } else {
    sub_82 = false;
  };
  sub_81 = sub_82;
  sub_80 = sub_81;
  sub_79 = sub_80;
  if (controller_blind_failed_recovered) {
    v_504 = sub_31;
    sub_78 = sub_79;
  } else {
    v_504 = sub_79;
    sub_78 = sub_31;
  };
  if (controller_ck_63_1) {
    sub_77 = v_504;
  } else {
    sub_77 = sub_78;
  };
  if (controller_cleaner) {
    v_500 = sub_84;
    sub_101 = false;
  } else {
    v_500 = false;
    sub_101 = sub_84;
  };
  if (controller_ck_37_1) {
    sub_100 = v_500;
  } else {
    sub_100 = sub_101;
  };
  if (controller_c_window) {
    sub_99 = false;
  } else {
    sub_99 = sub_100;
  };
  if (controller_change_shift) {
    sub_98 = sub_41;
    sub_102 = sub_99;
  } else {
    sub_98 = sub_99;
    sub_102 = sub_41;
  };
  if (controller_ck_1) {
    sub_97 = sub_102;
  } else {
    sub_97 = sub_98;
  };
  sub_96 = sub_97;
  sub_95 = sub_96;
  if (controller_blind_failed_recovered) {
    v_505 = sub_95;
    sub_94 = sub_79;
  } else {
    v_505 = sub_79;
    sub_94 = sub_95;
  };
  if (controller_ck_63_1) {
    v_506 = v_505;
  } else {
    v_506 = sub_94;
  };
  if (controller_ck_61_1) {
    v_507 = v_506;
  } else {
    v_507 = sub_77;
  };
  if (controller_c_window) {
    sub_109 = sub_35;
  } else {
    sub_109 = sub_100;
  };
  if (controller_change_shift) {
    v_498 = sub_109;
    sub_108 = sub_49;
  } else {
    v_498 = sub_49;
    sub_108 = sub_109;
  };
  if (controller_ck_1) {
    sub_107 = v_498;
  } else {
    sub_107 = sub_108;
  };
  sub_106 = sub_107;
  sub_105 = sub_106;
  if (controller_blind_failed_recovered) {
    v_499 = sub_105;
    sub_104 = sub_79;
  } else {
    v_499 = sub_79;
    sub_104 = sub_105;
  };
  if (controller_ck_63_1) {
    sub_103 = v_499;
  } else {
    sub_103 = sub_104;
  };
  if (controller_blind_switch) {
    v_508 = v_507;
  } else {
    v_508 = sub_103;
  };
  if (controller_c_blind_1) {
    sub_76 = v_508;
  } else {
    sub_76 = sub_103;
  };
  if (controller_light_failed_recovered) {
    v_509 = sub_76;
    sub_75 = sub_8;
  } else {
    v_509 = sub_8;
    sub_75 = sub_76;
  };
  if (controller_ck_58_1) {
    sub_74 = v_509;
  } else {
    sub_74 = sub_75;
  };
  if (controller_ck_39_1) {
    sub_122 = sub_86;
  } else {
    sub_122 = sub_93;
  };
  if (controller_c_closet) {
    sub_121 = false;
    sub_123 = sub_122;
  } else {
    sub_121 = sub_122;
    sub_123 = false;
  };
  if (controller_closet_failed_recovered) {
    v_490 = sub_123;
    sub_120 = sub_121;
  } else {
    v_490 = sub_121;
    sub_120 = sub_123;
  };
  if (controller_ck_53_1) {
    sub_119 = v_490;
  } else {
    sub_119 = sub_120;
  };
  if (controller_cleaner) {
    v_491 = sub_29;
    sub_118 = sub_119;
  } else {
    v_491 = sub_119;
    sub_118 = sub_29;
  };
  if (controller_ck_37_1) {
    v_492 = v_491;
  } else {
    v_492 = sub_118;
  };
  if (controller_c_window) {
    sub_117 = v_492;
  } else {
    sub_117 = false;
  };
  sub_116 = sub_117;
  sub_115 = sub_116;
  sub_114 = sub_115;
  if (controller_blind_failed_recovered) {
    v_494 = sub_38;
  } else {
    v_494 = sub_114;
  };
  if (controller_cleaner) {
    v_489 = false;
    sub_129 = sub_119;
  } else {
    v_489 = sub_119;
    sub_129 = false;
  };
  if (controller_ck_37_1) {
    sub_128 = v_489;
  } else {
    sub_128 = sub_129;
  };
  if (controller_c_window) {
    sub_127 = sub_128;
  } else {
    sub_127 = false;
  };
  sub_126 = sub_127;
  sub_125 = sub_126;
  sub_124 = sub_125;
  if (controller_blind_failed_recovered) {
    v_493 = sub_124;
    sub_113 = sub_114;
  } else {
    v_493 = sub_114;
    sub_113 = sub_124;
  };
  if (controller_ck_63_1) {
    sub_112 = v_493;
  } else {
    sub_112 = sub_113;
  };
  if (controller_blind_failed_recovered) {
    sub_130 = sub_114;
  } else {
    sub_130 = sub_38;
  };
  if (controller_ck_63_1) {
    v_495 = v_494;
  } else {
    v_495 = sub_130;
  };
  if (controller_ck_61_1) {
    v_496 = v_495;
  } else {
    v_496 = sub_112;
  };
  if (controller_c_window) {
    sub_136 = sub_128;
  } else {
    sub_136 = sub_42;
  };
  sub_135 = sub_136;
  sub_134 = sub_135;
  sub_133 = sub_134;
  if (controller_blind_failed_recovered) {
    v_488 = sub_133;
    sub_132 = sub_114;
  } else {
    v_488 = sub_114;
    sub_132 = sub_133;
  };
  if (controller_ck_63_1) {
    sub_131 = v_488;
  } else {
    sub_131 = sub_132;
  };
  if (controller_blind_switch) {
    v_497 = v_496;
  } else {
    v_497 = sub_131;
  };
  if (controller_c_blind_1) {
    sub_111 = v_497;
  } else {
    sub_111 = sub_131;
  };
  if (controller_light_failed_recovered) {
    v_510 = sub_111;
    sub_110 = sub_8;
  } else {
    v_510 = sub_8;
    sub_110 = sub_111;
  };
  if (controller_ck_58_1) {
    v_511 = v_510;
  } else {
    v_511 = sub_110;
  };
  if (controller_ck_56_1) {
    sub_73 = v_511;
  } else {
    sub_73 = sub_74;
  };
  if (controller_light_switch) {
    v_539 = v_538;
  } else {
    v_539 = sub_73;
  };
  if (controller_c_light_1) {
    sub_5 = v_539;
  } else {
    sub_5 = sub_73;
  };
  if (controller_v_277) {
    sub_144 = false;
  } else {
    sub_144 = sub_33;
  };
  sub_149 = sub_18;
  if (controller_cleaner) {
    v_474 = sub_149;
    sub_148 = false;
  } else {
    v_474 = false;
    sub_148 = sub_149;
  };
  if (controller_ck_37_1) {
    v_475 = v_474;
  } else {
    v_475 = sub_148;
  };
  if (controller_c_window) {
    sub_147 = v_475;
  } else {
    sub_147 = false;
  };
  sub_146 = sub_147;
  if (controller_v_277) {
    sub_145 = false;
  } else {
    sub_145 = sub_146;
  };
  if (controller_v_276) {
    v_476 = sub_145;
  } else {
    v_476 = sub_144;
  };
  if (controller_v_277) {
    v_473 = sub_33;
  } else {
    v_473 = false;
  };
  if (controller_v_276) {
    sub_150 = v_473;
  } else {
    sub_150 = false;
  };
  if (controller_c_air_2) {
    v_477 = v_476;
  } else {
    v_477 = sub_150;
  };
  if (controller_v_277) {
    v_472 = sub_146;
  } else {
    v_472 = sub_33;
  };
  if (controller_v_276) {
    sub_151 = v_472;
  } else {
    sub_151 = sub_145;
  };
  if (controller_c_air_1) {
    sub_143 = v_477;
  } else {
    sub_143 = sub_151;
  };
  if (controller_v_276) {
    v_470 = false;
  } else {
    v_470 = sub_144;
  };
  if (controller_c_air_2) {
    v_471 = v_470;
  } else {
    v_471 = sub_150;
  };
  if (controller_v_276) {
    sub_153 = sub_144;
  } else {
    sub_153 = false;
  };
  if (controller_c_air_1) {
    sub_152 = v_471;
  } else {
    sub_152 = sub_153;
  };
  if (controller_blind_failed_recovered) {
    v_478 = sub_152;
    sub_142 = sub_143;
  } else {
    v_478 = sub_143;
    sub_142 = sub_152;
  };
  if (controller_ck_63_1) {
    sub_141 = v_478;
  } else {
    sub_141 = sub_142;
  };
  if (controller_v_276) {
    v_468 = sub_145;
  } else {
    v_468 = false;
  };
  if (controller_c_air_2) {
    v_469 = v_468;
  } else {
    v_469 = false;
  };
  if (controller_v_277) {
    v_467 = sub_146;
  } else {
    v_467 = false;
  };
  if (controller_v_276) {
    sub_156 = v_467;
  } else {
    sub_156 = sub_145;
  };
  if (controller_c_air_1) {
    sub_155 = v_469;
  } else {
    sub_155 = sub_156;
  };
  if (controller_blind_failed_recovered) {
    v_479 = sub_155;
    sub_154 = sub_143;
  } else {
    v_479 = sub_143;
    sub_154 = sub_155;
  };
  if (controller_ck_63_1) {
    v_480 = v_479;
  } else {
    v_480 = sub_154;
  };
  if (controller_ck_61_1) {
    v_481 = v_480;
  } else {
    v_481 = sub_141;
  };
  sub_157 = sub_143;
  if (controller_blind_switch) {
    v_482 = v_481;
  } else {
    v_482 = sub_157;
  };
  if (controller_c_blind_1) {
    sub_140 = v_482;
  } else {
    sub_140 = sub_157;
  };
  sub_159 = sub_152;
  if (controller_change_shift) {
    v_460 = false;
    sub_164 = sub_147;
  } else {
    v_460 = sub_147;
    sub_164 = false;
  };
  if (controller_ck_1) {
    sub_163 = v_460;
  } else {
    sub_163 = sub_164;
  };
  if (controller_v_277) {
    sub_162 = false;
  } else {
    sub_162 = sub_163;
  };
  if (controller_v_276) {
    v_461 = sub_162;
  } else {
    v_461 = false;
  };
  if (controller_c_air_2) {
    v_462 = v_461;
  } else {
    v_462 = false;
  };
  if (controller_v_277) {
    v_459 = sub_163;
  } else {
    v_459 = false;
  };
  if (controller_v_276) {
    sub_165 = v_459;
  } else {
    sub_165 = sub_162;
  };
  if (controller_c_air_1) {
    sub_161 = v_462;
  } else {
    sub_161 = sub_165;
  };
  if (controller_blind_failed_recovered) {
    v_463 = sub_161;
    sub_160 = sub_152;
  } else {
    v_463 = sub_152;
    sub_160 = sub_161;
  };
  if (controller_ck_63_1) {
    v_464 = v_463;
  } else {
    v_464 = sub_160;
  };
  if (controller_ck_61_1) {
    v_465 = v_464;
  } else {
    v_465 = sub_159;
  };
  if (controller_v_276) {
    v_456 = sub_162;
  } else {
    v_456 = sub_144;
  };
  if (controller_c_air_2) {
    v_457 = v_456;
  } else {
    v_457 = sub_150;
  };
  if (controller_v_277) {
    v_455 = sub_163;
  } else {
    v_455 = sub_33;
  };
  if (controller_v_276) {
    sub_169 = v_455;
  } else {
    sub_169 = sub_162;
  };
  if (controller_c_air_1) {
    sub_168 = v_457;
  } else {
    sub_168 = sub_169;
  };
  if (controller_blind_failed_recovered) {
    v_458 = sub_168;
    sub_167 = sub_152;
  } else {
    v_458 = sub_152;
    sub_167 = sub_168;
  };
  if (controller_ck_63_1) {
    sub_166 = v_458;
  } else {
    sub_166 = sub_167;
  };
  if (controller_blind_switch) {
    v_466 = v_465;
  } else {
    v_466 = sub_166;
  };
  if (controller_c_blind_1) {
    sub_158 = v_466;
  } else {
    sub_158 = sub_166;
  };
  if (controller_light_failed_recovered) {
    v_483 = sub_158;
    sub_139 = sub_140;
  } else {
    v_483 = sub_140;
    sub_139 = sub_158;
  };
  if (controller_ck_58_1) {
    sub_138 = v_483;
  } else {
    sub_138 = sub_139;
  };
  sub_173 = sub_155;
  sub_172 = sub_173;
  sub_171 = sub_172;
  if (controller_light_failed_recovered) {
    v_484 = sub_171;
    sub_170 = sub_140;
  } else {
    v_484 = sub_140;
    sub_170 = sub_171;
  };
  if (controller_ck_58_1) {
    v_485 = v_484;
  } else {
    v_485 = sub_170;
  };
  if (controller_ck_56_1) {
    v_486 = v_485;
  } else {
    v_486 = sub_138;
  };
  sub_184 = sub_121;
  if (controller_cleaner) {
    v_444 = sub_184;
    sub_183 = false;
  } else {
    v_444 = false;
    sub_183 = sub_184;
  };
  if (controller_ck_37_1) {
    v_445 = v_444;
  } else {
    v_445 = sub_183;
  };
  if (controller_c_window) {
    sub_182 = v_445;
  } else {
    sub_182 = false;
  };
  sub_181 = sub_182;
  if (controller_v_277) {
    sub_180 = false;
  } else {
    sub_180 = sub_181;
  };
  if (controller_v_276) {
    v_446 = sub_180;
  } else {
    v_446 = sub_144;
  };
  if (controller_c_air_2) {
    v_447 = v_446;
  } else {
    v_447 = sub_150;
  };
  if (controller_v_277) {
    v_443 = sub_181;
  } else {
    v_443 = sub_33;
  };
  if (controller_v_276) {
    sub_185 = v_443;
  } else {
    sub_185 = sub_180;
  };
  if (controller_c_air_1) {
    sub_179 = v_447;
  } else {
    sub_179 = sub_185;
  };
  sub_178 = sub_179;
  if (controller_change_shift) {
    sub_190 = sub_147;
    sub_191 = sub_182;
  } else {
    sub_190 = sub_182;
    sub_191 = sub_147;
  };
  if (controller_ck_1) {
    sub_189 = sub_191;
  } else {
    sub_189 = sub_190;
  };
  if (controller_v_277) {
    sub_188 = false;
  } else {
    sub_188 = sub_189;
  };
  if (controller_v_276) {
    v_441 = sub_188;
  } else {
    v_441 = false;
  };
  if (controller_c_air_2) {
    v_442 = v_441;
  } else {
    v_442 = false;
  };
  if (controller_v_277) {
    v_440 = sub_189;
  } else {
    v_440 = false;
  };
  if (controller_v_276) {
    sub_192 = v_440;
  } else {
    sub_192 = sub_188;
  };
  if (controller_c_air_1) {
    sub_187 = v_442;
  } else {
    sub_187 = sub_192;
  };
  if (controller_blind_failed_recovered) {
    v_448 = sub_187;
    sub_186 = sub_179;
  } else {
    v_448 = sub_179;
    sub_186 = sub_187;
  };
  if (controller_ck_63_1) {
    v_449 = v_448;
  } else {
    v_449 = sub_186;
  };
  if (controller_ck_61_1) {
    v_450 = v_449;
  } else {
    v_450 = sub_178;
  };
  if (controller_v_276) {
    v_437 = sub_188;
  } else {
    v_437 = sub_144;
  };
  if (controller_c_air_2) {
    v_438 = v_437;
  } else {
    v_438 = sub_150;
  };
  if (controller_v_277) {
    v_436 = sub_189;
  } else {
    v_436 = sub_33;
  };
  if (controller_v_276) {
    sub_196 = v_436;
  } else {
    sub_196 = sub_188;
  };
  if (controller_c_air_1) {
    sub_195 = v_438;
  } else {
    sub_195 = sub_196;
  };
  if (controller_blind_failed_recovered) {
    v_439 = sub_195;
    sub_194 = sub_179;
  } else {
    v_439 = sub_179;
    sub_194 = sub_195;
  };
  if (controller_ck_63_1) {
    sub_193 = v_439;
  } else {
    sub_193 = sub_194;
  };
  if (controller_blind_switch) {
    v_451 = v_450;
  } else {
    v_451 = sub_193;
  };
  if (controller_c_blind_1) {
    sub_177 = v_451;
  } else {
    sub_177 = sub_193;
  };
  if (controller_light_failed_recovered) {
    v_452 = sub_177;
    sub_176 = sub_140;
  } else {
    v_452 = sub_140;
    sub_176 = sub_177;
  };
  if (controller_ck_58_1) {
    sub_175 = v_452;
  } else {
    sub_175 = sub_176;
  };
  if (controller_v_277) {
    sub_201 = false;
  } else {
    sub_201 = sub_126;
  };
  if (controller_v_276) {
    v_430 = sub_145;
  } else {
    v_430 = sub_201;
  };
  if (controller_v_277) {
    v_429 = sub_126;
  } else {
    v_429 = false;
  };
  if (controller_v_276) {
    sub_202 = v_429;
  } else {
    sub_202 = false;
  };
  if (controller_c_air_2) {
    v_431 = v_430;
  } else {
    v_431 = sub_202;
  };
  if (controller_v_277) {
    v_428 = sub_146;
  } else {
    v_428 = sub_126;
  };
  if (controller_v_276) {
    sub_203 = v_428;
  } else {
    sub_203 = sub_145;
  };
  if (controller_c_air_1) {
    sub_200 = v_431;
  } else {
    sub_200 = sub_203;
  };
  if (controller_blind_failed_recovered) {
    v_432 = sub_155;
  } else {
    v_432 = sub_200;
  };
  sub_199 = sub_200;
  if (controller_blind_failed_recovered) {
    sub_204 = sub_200;
  } else {
    sub_204 = sub_155;
  };
  if (controller_ck_63_1) {
    v_433 = v_432;
  } else {
    v_433 = sub_204;
  };
  if (controller_ck_61_1) {
    v_434 = v_433;
  } else {
    v_434 = sub_199;
  };
  if (controller_blind_switch) {
    v_435 = v_434;
  } else {
    v_435 = sub_199;
  };
  if (controller_c_blind_1) {
    sub_198 = v_435;
  } else {
    sub_198 = sub_199;
  };
  if (controller_light_failed_recovered) {
    v_453 = sub_198;
    sub_197 = sub_140;
  } else {
    v_453 = sub_140;
    sub_197 = sub_198;
  };
  if (controller_ck_58_1) {
    v_454 = v_453;
  } else {
    v_454 = sub_197;
  };
  if (controller_ck_56_1) {
    sub_174 = v_454;
  } else {
    sub_174 = sub_175;
  };
  if (controller_light_switch) {
    v_487 = v_486;
  } else {
    v_487 = sub_174;
  };
  if (controller_c_light_1) {
    sub_137 = v_487;
  } else {
    sub_137 = sub_174;
  };
  if (controller_air_failed_recovered) {
    v_540 = sub_137;
    sub_4 = sub_5;
  } else {
    v_540 = sub_5;
    sub_4 = sub_137;
  };
  if (controller_ck_46_1) {
    sub_3 = v_540;
  } else {
    sub_3 = sub_4;
  };
  if (controller_c_pc) {
    sub_224 = sub_26;
  } else {
    sub_224 = sub_22;
  };
  if (controller_c_door) {
    sub_223 = sub_224;
    sub_225 = false;
  } else {
    sub_223 = false;
    sub_225 = sub_224;
  };
  if (controller_ck_39_1) {
    sub_222 = sub_225;
  } else {
    sub_222 = sub_223;
  };
  if (controller_c_closet) {
    sub_221 = false;
    sub_226 = sub_222;
  } else {
    sub_221 = sub_222;
    sub_226 = false;
  };
  if (controller_closet_failed_recovered) {
    v_419 = sub_226;
    sub_220 = sub_221;
  } else {
    v_419 = sub_221;
    sub_220 = sub_226;
  };
  if (controller_ck_53_1) {
    sub_219 = v_419;
  } else {
    sub_219 = sub_220;
  };
  sub_227 = sub_221;
  if (controller_cleaner) {
    v_420 = sub_227;
    sub_218 = sub_219;
  } else {
    v_420 = sub_219;
    sub_218 = sub_227;
  };
  if (controller_ck_37_1) {
    sub_217 = v_420;
  } else {
    sub_217 = sub_218;
  };
  if (controller_c_window) {
    sub_216 = sub_217;
  } else {
    sub_216 = false;
  };
  sub_215 = sub_216;
  sub_214 = sub_215;
  sub_213 = sub_214;
  if (controller_blind_failed_recovered) {
    v_421 = false;
    sub_212 = sub_213;
  } else {
    v_421 = sub_213;
    sub_212 = false;
  };
  if (controller_ck_63_1) {
    sub_211 = v_421;
  } else {
    sub_211 = sub_212;
  };
  if (controller_c_window) {
    sub_233 = false;
  } else {
    sub_233 = sub_217;
  };
  sub_232 = sub_233;
  sub_231 = sub_232;
  sub_230 = sub_231;
  if (controller_blind_failed_recovered) {
    v_418 = sub_230;
    sub_229 = sub_213;
  } else {
    v_418 = sub_213;
    sub_229 = sub_230;
  };
  if (controller_ck_63_1) {
    sub_228 = v_418;
  } else {
    sub_228 = sub_229;
  };
  if (controller_ck_61_1) {
    v_422 = sub_228;
  } else {
    v_422 = sub_211;
  };
  if (controller_blind_switch) {
    v_423 = v_422;
  } else {
    v_423 = sub_228;
  };
  if (controller_c_blind_1) {
    sub_210 = v_423;
  } else {
    sub_210 = sub_228;
  };
  if (controller_change_shift) {
    v_414 = false;
    sub_240 = sub_233;
  } else {
    v_414 = sub_233;
    sub_240 = false;
  };
  if (controller_ck_1) {
    sub_239 = v_414;
  } else {
    sub_239 = sub_240;
  };
  sub_238 = sub_239;
  sub_237 = sub_238;
  if (controller_blind_failed_recovered) {
    v_415 = sub_237;
    sub_236 = false;
  } else {
    v_415 = false;
    sub_236 = sub_237;
  };
  if (controller_ck_63_1) {
    sub_235 = v_415;
  } else {
    sub_235 = sub_236;
  };
  if (controller_ck_61_1) {
    v_416 = sub_235;
  } else {
    v_416 = false;
  };
  if (controller_blind_switch) {
    v_417 = v_416;
  } else {
    v_417 = sub_235;
  };
  if (controller_c_blind_1) {
    sub_234 = v_417;
  } else {
    sub_234 = sub_235;
  };
  if (controller_light_failed_recovered) {
    v_424 = sub_234;
    sub_209 = sub_210;
  } else {
    v_424 = sub_210;
    sub_209 = sub_234;
  };
  if (controller_ck_58_1) {
    sub_208 = v_424;
  } else {
    sub_208 = sub_209;
  };
  sub_241 = sub_210;
  if (controller_ck_56_1) {
    v_425 = sub_241;
  } else {
    v_425 = sub_208;
  };
  if (controller_c_pc) {
    sub_259 = sub_92;
  } else {
    sub_259 = sub_88;
  };
  if (controller_c_door) {
    sub_258 = sub_259;
    sub_260 = false;
  } else {
    sub_258 = false;
    sub_260 = sub_259;
  };
  if (controller_ck_39_1) {
    sub_257 = sub_260;
  } else {
    sub_257 = sub_258;
  };
  if (controller_c_closet) {
    sub_256 = false;
    sub_261 = sub_257;
  } else {
    sub_256 = sub_257;
    sub_261 = false;
  };
  if (controller_closet_failed_recovered) {
    v_408 = sub_261;
    sub_255 = sub_256;
  } else {
    v_408 = sub_256;
    sub_255 = sub_261;
  };
  if (controller_ck_53_1) {
    sub_254 = v_408;
  } else {
    sub_254 = sub_255;
  };
  sub_262 = sub_256;
  if (controller_cleaner) {
    v_409 = sub_262;
    sub_253 = sub_254;
  } else {
    v_409 = sub_254;
    sub_253 = sub_262;
  };
  if (controller_ck_37_1) {
    sub_252 = v_409;
  } else {
    sub_252 = sub_253;
  };
  if (controller_c_window) {
    sub_251 = sub_252;
  } else {
    sub_251 = false;
  };
  sub_250 = sub_251;
  sub_249 = sub_250;
  sub_248 = sub_249;
  if (controller_blind_failed_recovered) {
    v_410 = false;
    sub_247 = sub_248;
  } else {
    v_410 = sub_248;
    sub_247 = false;
  };
  if (controller_ck_63_1) {
    sub_246 = v_410;
  } else {
    sub_246 = sub_247;
  };
  if (controller_c_window) {
    sub_269 = false;
  } else {
    sub_269 = sub_252;
  };
  if (controller_change_shift) {
    sub_268 = sub_233;
    sub_270 = sub_269;
  } else {
    sub_268 = sub_269;
    sub_270 = sub_233;
  };
  if (controller_ck_1) {
    sub_267 = sub_270;
  } else {
    sub_267 = sub_268;
  };
  sub_266 = sub_267;
  sub_265 = sub_266;
  if (controller_blind_failed_recovered) {
    v_407 = sub_265;
    sub_264 = sub_248;
  } else {
    v_407 = sub_248;
    sub_264 = sub_265;
  };
  if (controller_ck_63_1) {
    sub_263 = v_407;
  } else {
    sub_263 = sub_264;
  };
  if (controller_ck_61_1) {
    v_411 = sub_263;
  } else {
    v_411 = sub_246;
  };
  if (controller_blind_switch) {
    v_412 = v_411;
  } else {
    v_412 = sub_263;
  };
  if (controller_c_blind_1) {
    sub_245 = v_412;
  } else {
    sub_245 = sub_263;
  };
  if (controller_light_failed_recovered) {
    v_413 = sub_245;
    sub_244 = sub_210;
  } else {
    v_413 = sub_210;
    sub_244 = sub_245;
  };
  if (controller_ck_58_1) {
    sub_243 = v_413;
  } else {
    sub_243 = sub_244;
  };
  if (controller_ck_56_1) {
    sub_242 = sub_241;
  } else {
    sub_242 = sub_243;
  };
  if (controller_light_switch) {
    v_426 = v_425;
  } else {
    v_426 = sub_242;
  };
  if (controller_c_light_1) {
    sub_207 = v_426;
  } else {
    sub_207 = sub_242;
  };
  if (controller_c_closet) {
    sub_284 = false;
  } else {
    sub_284 = sub_224;
  };
  sub_283 = sub_284;
  if (controller_cleaner) {
    v_396 = sub_283;
    sub_282 = false;
  } else {
    v_396 = false;
    sub_282 = sub_283;
  };
  if (controller_ck_37_1) {
    sub_281 = v_396;
  } else {
    sub_281 = sub_282;
  };
  sub_280 = sub_281;
  sub_279 = sub_280;
  if (controller_v_277) {
    v_398 = false;
  } else {
    v_398 = sub_279;
  };
  if (controller_v_276) {
    v_399 = v_398;
  } else {
    v_399 = sub_279;
  };
  if (controller_v_277) {
    sub_278 = sub_279;
  } else {
    sub_278 = false;
  };
  if (controller_ck_39_1) {
    sub_292 = sub_223;
  } else {
    sub_292 = sub_225;
  };
  if (controller_c_closet) {
    sub_291 = false;
    sub_293 = sub_292;
  } else {
    sub_291 = sub_292;
    sub_293 = false;
  };
  if (controller_closet_failed_recovered) {
    v_393 = sub_293;
    sub_290 = sub_291;
  } else {
    v_393 = sub_291;
    sub_290 = sub_293;
  };
  if (controller_ck_53_1) {
    sub_289 = v_393;
  } else {
    sub_289 = sub_290;
  };
  if (controller_cleaner) {
    v_394 = false;
    sub_288 = sub_289;
  } else {
    v_394 = sub_289;
    sub_288 = false;
  };
  if (controller_ck_37_1) {
    v_395 = v_394;
  } else {
    v_395 = sub_288;
  };
  if (controller_c_window) {
    sub_287 = v_395;
  } else {
    sub_287 = false;
  };
  sub_286 = sub_287;
  if (controller_v_277) {
    sub_285 = sub_279;
  } else {
    sub_285 = sub_286;
  };
  if (controller_v_276) {
    v_397 = sub_285;
  } else {
    v_397 = sub_278;
  };
  if (controller_c_air_2) {
    v_400 = v_397;
  } else {
    v_400 = v_399;
  };
  if (controller_v_277) {
    v_392 = sub_286;
  } else {
    v_392 = false;
  };
  if (controller_v_276) {
    sub_294 = v_392;
  } else {
    sub_294 = sub_285;
  };
  if (controller_c_air_1) {
    sub_277 = v_400;
  } else {
    sub_277 = sub_294;
  };
  if (controller_blind_failed_recovered) {
    v_401 = false;
    sub_276 = sub_277;
  } else {
    v_401 = sub_277;
    sub_276 = false;
  };
  if (controller_ck_63_1) {
    sub_275 = v_401;
  } else {
    sub_275 = sub_276;
  };
  sub_295 = sub_277;
  if (controller_ck_61_1) {
    v_402 = sub_295;
  } else {
    v_402 = sub_275;
  };
  if (controller_blind_switch) {
    v_403 = v_402;
  } else {
    v_403 = sub_295;
  };
  sub_296 = sub_295;
  if (controller_c_blind_1) {
    sub_274 = v_403;
  } else {
    sub_274 = sub_296;
  };
  if (controller_change_shift) {
    v_384 = false;
    sub_303 = sub_280;
  } else {
    v_384 = sub_280;
    sub_303 = false;
  };
  if (controller_ck_1) {
    sub_302 = v_384;
  } else {
    sub_302 = sub_303;
  };
  if (controller_v_277) {
    v_386 = false;
  } else {
    v_386 = sub_302;
  };
  if (controller_v_276) {
    v_387 = v_386;
  } else {
    v_387 = sub_302;
  };
  if (controller_v_277) {
    sub_301 = sub_302;
  } else {
    sub_301 = false;
  };
  if (controller_change_shift) {
    v_383 = false;
    sub_306 = sub_287;
  } else {
    v_383 = sub_287;
    sub_306 = false;
  };
  if (controller_ck_1) {
    sub_305 = v_383;
  } else {
    sub_305 = sub_306;
  };
  if (controller_v_277) {
    sub_304 = sub_302;
  } else {
    sub_304 = sub_305;
  };
  if (controller_v_276) {
    v_385 = sub_304;
  } else {
    v_385 = sub_301;
  };
  if (controller_c_air_2) {
    v_388 = v_385;
  } else {
    v_388 = v_387;
  };
  if (controller_v_277) {
    v_382 = sub_305;
  } else {
    v_382 = false;
  };
  if (controller_v_276) {
    sub_307 = v_382;
  } else {
    sub_307 = sub_304;
  };
  if (controller_c_air_1) {
    sub_300 = v_388;
  } else {
    sub_300 = sub_307;
  };
  if (controller_blind_failed_recovered) {
    v_389 = sub_300;
    sub_299 = false;
  } else {
    v_389 = false;
    sub_299 = sub_300;
  };
  if (controller_ck_63_1) {
    sub_298 = v_389;
  } else {
    sub_298 = sub_299;
  };
  if (controller_ck_61_1) {
    v_390 = sub_298;
  } else {
    v_390 = false;
  };
  if (controller_blind_switch) {
    v_391 = v_390;
  } else {
    v_391 = sub_298;
  };
  if (controller_c_blind_1) {
    sub_297 = v_391;
  } else {
    sub_297 = sub_298;
  };
  if (controller_light_failed_recovered) {
    v_404 = sub_297;
    sub_273 = sub_274;
  } else {
    v_404 = sub_274;
    sub_273 = sub_297;
  };
  if (controller_ck_58_1) {
    sub_272 = v_404;
  } else {
    sub_272 = sub_273;
  };
  sub_310 = sub_296;
  if (controller_light_failed_recovered) {
    v_381 = sub_310;
    sub_309 = sub_274;
  } else {
    v_381 = sub_274;
    sub_309 = sub_310;
  };
  if (controller_ck_58_1) {
    sub_308 = v_381;
  } else {
    sub_308 = sub_309;
  };
  if (controller_ck_56_1) {
    v_405 = sub_308;
  } else {
    v_405 = sub_272;
  };
  if (controller_c_closet) {
    sub_323 = false;
  } else {
    sub_323 = sub_259;
  };
  sub_322 = sub_323;
  if (controller_cleaner) {
    v_373 = sub_322;
    sub_321 = false;
  } else {
    v_373 = false;
    sub_321 = sub_322;
  };
  if (controller_ck_37_1) {
    sub_320 = v_373;
  } else {
    sub_320 = sub_321;
  };
  sub_319 = sub_320;
  sub_318 = sub_319;
  if (controller_v_277) {
    v_375 = false;
  } else {
    v_375 = sub_318;
  };
  if (controller_v_276) {
    v_376 = v_375;
  } else {
    v_376 = sub_318;
  };
  if (controller_v_277) {
    sub_317 = sub_318;
  } else {
    sub_317 = false;
  };
  if (controller_ck_39_1) {
    sub_331 = sub_258;
  } else {
    sub_331 = sub_260;
  };
  if (controller_c_closet) {
    sub_330 = false;
    sub_332 = sub_331;
  } else {
    sub_330 = sub_331;
    sub_332 = false;
  };
  if (controller_closet_failed_recovered) {
    v_370 = sub_332;
    sub_329 = sub_330;
  } else {
    v_370 = sub_330;
    sub_329 = sub_332;
  };
  if (controller_ck_53_1) {
    sub_328 = v_370;
  } else {
    sub_328 = sub_329;
  };
  if (controller_cleaner) {
    v_371 = false;
    sub_327 = sub_328;
  } else {
    v_371 = sub_328;
    sub_327 = false;
  };
  if (controller_ck_37_1) {
    v_372 = v_371;
  } else {
    v_372 = sub_327;
  };
  if (controller_c_window) {
    sub_326 = v_372;
  } else {
    sub_326 = false;
  };
  sub_325 = sub_326;
  if (controller_v_277) {
    sub_324 = sub_318;
  } else {
    sub_324 = sub_325;
  };
  if (controller_v_276) {
    v_374 = sub_324;
  } else {
    v_374 = sub_317;
  };
  if (controller_c_air_2) {
    v_377 = v_374;
  } else {
    v_377 = v_376;
  };
  if (controller_v_277) {
    v_369 = sub_325;
  } else {
    v_369 = false;
  };
  if (controller_v_276) {
    sub_333 = v_369;
  } else {
    sub_333 = sub_324;
  };
  if (controller_c_air_1) {
    sub_316 = v_377;
  } else {
    sub_316 = sub_333;
  };
  sub_315 = sub_316;
  if (controller_change_shift) {
    sub_339 = sub_280;
    sub_340 = sub_319;
  } else {
    sub_339 = sub_319;
    sub_340 = sub_280;
  };
  if (controller_ck_1) {
    sub_338 = sub_340;
  } else {
    sub_338 = sub_339;
  };
  if (controller_v_277) {
    v_365 = false;
  } else {
    v_365 = sub_338;
  };
  if (controller_v_276) {
    v_366 = v_365;
  } else {
    v_366 = sub_338;
  };
  if (controller_v_277) {
    sub_337 = sub_338;
  } else {
    sub_337 = false;
  };
  if (controller_change_shift) {
    sub_343 = sub_287;
    sub_344 = sub_326;
  } else {
    sub_343 = sub_326;
    sub_344 = sub_287;
  };
  if (controller_ck_1) {
    sub_342 = sub_344;
  } else {
    sub_342 = sub_343;
  };
  if (controller_v_277) {
    sub_341 = sub_338;
  } else {
    sub_341 = sub_342;
  };
  if (controller_v_276) {
    v_364 = sub_341;
  } else {
    v_364 = sub_337;
  };
  if (controller_c_air_2) {
    v_367 = v_364;
  } else {
    v_367 = v_366;
  };
  if (controller_v_277) {
    v_363 = sub_342;
  } else {
    v_363 = false;
  };
  if (controller_v_276) {
    sub_345 = v_363;
  } else {
    sub_345 = sub_341;
  };
  if (controller_c_air_1) {
    sub_336 = v_367;
  } else {
    sub_336 = sub_345;
  };
  if (controller_blind_failed_recovered) {
    v_368 = sub_336;
    sub_335 = sub_316;
  } else {
    v_368 = sub_316;
    sub_335 = sub_336;
  };
  if (controller_ck_63_1) {
    sub_334 = v_368;
  } else {
    sub_334 = sub_335;
  };
  if (controller_ck_61_1) {
    v_378 = sub_334;
  } else {
    v_378 = sub_315;
  };
  if (controller_blind_switch) {
    v_379 = v_378;
  } else {
    v_379 = sub_334;
  };
  if (controller_c_blind_1) {
    sub_314 = v_379;
  } else {
    sub_314 = sub_334;
  };
  if (controller_light_failed_recovered) {
    v_380 = sub_314;
    sub_313 = sub_274;
  } else {
    v_380 = sub_274;
    sub_313 = sub_314;
  };
  if (controller_ck_58_1) {
    sub_312 = v_380;
  } else {
    sub_312 = sub_313;
  };
  if (controller_ck_56_1) {
    sub_311 = sub_308;
  } else {
    sub_311 = sub_312;
  };
  if (controller_light_switch) {
    v_406 = v_405;
  } else {
    v_406 = sub_311;
  };
  if (controller_c_light_1) {
    sub_271 = v_406;
  } else {
    sub_271 = sub_311;
  };
  if (controller_air_failed_recovered) {
    v_427 = sub_271;
    sub_206 = sub_207;
  } else {
    v_427 = sub_207;
    sub_206 = sub_271;
  };
  if (controller_ck_46_1) {
    sub_205 = v_427;
  } else {
    sub_205 = sub_206;
  };
  if (controller_worker) {
    v_541 = sub_205;
    sub_2 = sub_3;
  } else {
    v_541 = sub_3;
    sub_2 = sub_205;
  };
  if (controller_ck_35_1) {
    sub_1 = v_541;
  } else {
    sub_1 = sub_2;
  };
  if (controller_cleaner) {
    v_350 = sub_84;
    sub_359 = sub_119;
  } else {
    v_350 = sub_119;
    sub_359 = sub_84;
  };
  if (controller_ck_37_1) {
    v_351 = v_350;
  } else {
    v_351 = sub_359;
  };
  if (controller_c_window) {
    sub_358 = v_351;
  } else {
    sub_358 = false;
  };
  sub_357 = sub_358;
  sub_356 = sub_357;
  sub_355 = sub_356;
  if (controller_blind_failed_recovered) {
    v_352 = sub_124;
    sub_354 = sub_355;
  } else {
    v_352 = sub_355;
    sub_354 = sub_124;
  };
  if (controller_ck_63_1) {
    sub_353 = v_352;
  } else {
    sub_353 = sub_354;
  };
  sub_363 = sub_99;
  sub_362 = sub_363;
  sub_361 = sub_362;
  if (controller_blind_failed_recovered) {
    v_353 = sub_361;
    sub_360 = sub_355;
  } else {
    v_353 = sub_355;
    sub_360 = sub_361;
  };
  if (controller_ck_63_1) {
    v_354 = v_353;
  } else {
    v_354 = sub_360;
  };
  if (controller_ck_61_1) {
    v_355 = v_354;
  } else {
    v_355 = sub_353;
  };
  if (controller_c_window) {
    sub_369 = sub_128;
  } else {
    sub_369 = sub_100;
  };
  sub_368 = sub_369;
  sub_367 = sub_368;
  sub_366 = sub_367;
  if (controller_blind_failed_recovered) {
    v_349 = sub_366;
    sub_365 = sub_355;
  } else {
    v_349 = sub_355;
    sub_365 = sub_366;
  };
  if (controller_ck_63_1) {
    sub_364 = v_349;
  } else {
    sub_364 = sub_365;
  };
  if (controller_blind_switch) {
    v_356 = v_355;
  } else {
    v_356 = sub_364;
  };
  if (controller_c_blind_1) {
    sub_352 = v_356;
  } else {
    sub_352 = sub_364;
  };
  sub_371 = sub_124;
  if (controller_change_shift) {
    v_344 = false;
    sub_376 = sub_99;
  } else {
    v_344 = sub_99;
    sub_376 = false;
  };
  if (controller_ck_1) {
    sub_375 = v_344;
  } else {
    sub_375 = sub_376;
  };
  sub_374 = sub_375;
  sub_373 = sub_374;
  if (controller_blind_failed_recovered) {
    v_345 = sub_373;
    sub_372 = sub_124;
  } else {
    v_345 = sub_124;
    sub_372 = sub_373;
  };
  if (controller_ck_63_1) {
    v_346 = v_345;
  } else {
    v_346 = sub_372;
  };
  if (controller_ck_61_1) {
    v_347 = v_346;
  } else {
    v_347 = sub_371;
  };
  if (controller_change_shift) {
    v_342 = sub_127;
    sub_382 = sub_369;
  } else {
    v_342 = sub_369;
    sub_382 = sub_127;
  };
  if (controller_ck_1) {
    sub_381 = v_342;
  } else {
    sub_381 = sub_382;
  };
  sub_380 = sub_381;
  sub_379 = sub_380;
  if (controller_blind_failed_recovered) {
    v_343 = sub_379;
    sub_378 = sub_124;
  } else {
    v_343 = sub_124;
    sub_378 = sub_379;
  };
  if (controller_ck_63_1) {
    sub_377 = v_343;
  } else {
    sub_377 = sub_378;
  };
  if (controller_blind_switch) {
    v_348 = v_347;
  } else {
    v_348 = sub_377;
  };
  if (controller_c_blind_1) {
    sub_370 = v_348;
  } else {
    sub_370 = sub_377;
  };
  if (controller_light_failed_recovered) {
    v_357 = sub_370;
    sub_351 = sub_352;
  } else {
    v_357 = sub_352;
    sub_351 = sub_370;
  };
  if (controller_ck_58_1) {
    sub_350 = v_357;
  } else {
    sub_350 = sub_351;
  };
  if (controller_c_window) {
    sub_390 = sub_100;
  } else {
    sub_390 = false;
  };
  sub_389 = sub_390;
  sub_388 = sub_389;
  sub_387 = sub_388;
  if (controller_blind_failed_recovered) {
    v_339 = false;
    sub_386 = sub_387;
  } else {
    v_339 = sub_387;
    sub_386 = false;
  };
  if (controller_ck_63_1) {
    sub_385 = v_339;
  } else {
    sub_385 = sub_386;
  };
  if (controller_blind_failed_recovered) {
    v_338 = sub_361;
    sub_392 = sub_387;
  } else {
    v_338 = sub_387;
    sub_392 = sub_361;
  };
  if (controller_ck_63_1) {
    sub_391 = v_338;
  } else {
    sub_391 = sub_392;
  };
  if (controller_ck_61_1) {
    v_340 = sub_391;
  } else {
    v_340 = sub_385;
  };
  if (controller_blind_switch) {
    v_341 = v_340;
  } else {
    v_341 = sub_391;
  };
  if (controller_c_blind_1) {
    sub_384 = v_341;
  } else {
    sub_384 = sub_391;
  };
  if (controller_light_failed_recovered) {
    v_358 = sub_384;
    sub_383 = sub_352;
  } else {
    v_358 = sub_352;
    sub_383 = sub_384;
  };
  if (controller_ck_58_1) {
    v_359 = v_358;
  } else {
    v_359 = sub_383;
  };
  if (controller_ck_56_1) {
    v_360 = v_359;
  } else {
    v_360 = sub_350;
  };
  if (controller_blind_failed_recovered) {
    v_331 = sub_361;
    sub_397 = sub_79;
  } else {
    v_331 = sub_79;
    sub_397 = sub_361;
  };
  if (controller_ck_63_1) {
    v_332 = v_331;
  } else {
    v_332 = sub_397;
  };
  if (controller_ck_61_1) {
    v_333 = v_332;
  } else {
    v_333 = sub_77;
  };
  sub_402 = sub_109;
  sub_401 = sub_402;
  sub_400 = sub_401;
  if (controller_blind_failed_recovered) {
    v_330 = sub_400;
    sub_399 = sub_79;
  } else {
    v_330 = sub_79;
    sub_399 = sub_400;
  };
  if (controller_ck_63_1) {
    sub_398 = v_330;
  } else {
    sub_398 = sub_399;
  };
  if (controller_blind_switch) {
    v_334 = v_333;
  } else {
    v_334 = sub_398;
  };
  if (controller_c_blind_1) {
    sub_396 = v_334;
  } else {
    sub_396 = sub_398;
  };
  if (controller_light_failed_recovered) {
    v_335 = sub_396;
    sub_395 = sub_352;
  } else {
    v_335 = sub_352;
    sub_395 = sub_396;
  };
  if (controller_ck_58_1) {
    sub_394 = v_335;
  } else {
    sub_394 = sub_395;
  };
  if (controller_ck_1) {
    sub_408 = sub_98;
  } else {
    sub_408 = sub_102;
  };
  sub_407 = sub_408;
  sub_406 = sub_407;
  if (controller_blind_failed_recovered) {
    v_326 = sub_406;
    sub_405 = sub_114;
  } else {
    v_326 = sub_114;
    sub_405 = sub_406;
  };
  if (controller_ck_63_1) {
    v_327 = v_326;
  } else {
    v_327 = sub_405;
  };
  if (controller_ck_61_1) {
    v_328 = v_327;
  } else {
    v_328 = sub_112;
  };
  if (controller_change_shift) {
    v_324 = sub_136;
    sub_414 = sub_369;
  } else {
    v_324 = sub_369;
    sub_414 = sub_136;
  };
  if (controller_ck_1) {
    sub_413 = v_324;
  } else {
    sub_413 = sub_414;
  };
  sub_412 = sub_413;
  sub_411 = sub_412;
  if (controller_blind_failed_recovered) {
    v_325 = sub_411;
    sub_410 = sub_114;
  } else {
    v_325 = sub_114;
    sub_410 = sub_411;
  };
  if (controller_ck_63_1) {
    sub_409 = v_325;
  } else {
    sub_409 = sub_410;
  };
  if (controller_blind_switch) {
    v_329 = v_328;
  } else {
    v_329 = sub_409;
  };
  if (controller_c_blind_1) {
    sub_404 = v_329;
  } else {
    sub_404 = sub_409;
  };
  if (controller_light_failed_recovered) {
    v_336 = sub_404;
    sub_403 = sub_352;
  } else {
    v_336 = sub_352;
    sub_403 = sub_404;
  };
  if (controller_ck_58_1) {
    v_337 = v_336;
  } else {
    v_337 = sub_403;
  };
  if (controller_ck_56_1) {
    sub_393 = v_337;
  } else {
    sub_393 = sub_394;
  };
  if (controller_light_switch) {
    v_361 = v_360;
  } else {
    v_361 = sub_393;
  };
  if (controller_c_light_1) {
    sub_349 = v_361;
  } else {
    sub_349 = sub_393;
  };
  if (controller_v_276) {
    v_312 = sub_180;
  } else {
    v_312 = sub_201;
  };
  if (controller_c_air_2) {
    v_313 = v_312;
  } else {
    v_313 = sub_202;
  };
  if (controller_v_277) {
    v_311 = sub_181;
  } else {
    v_311 = sub_126;
  };
  if (controller_v_276) {
    sub_422 = v_311;
  } else {
    sub_422 = sub_180;
  };
  if (controller_c_air_1) {
    sub_421 = v_313;
  } else {
    sub_421 = sub_422;
  };
  if (controller_v_276) {
    v_309 = false;
  } else {
    v_309 = sub_201;
  };
  if (controller_c_air_2) {
    v_310 = v_309;
  } else {
    v_310 = sub_202;
  };
  if (controller_v_276) {
    sub_424 = sub_201;
  } else {
    sub_424 = false;
  };
  if (controller_c_air_1) {
    sub_423 = v_310;
  } else {
    sub_423 = sub_424;
  };
  if (controller_blind_failed_recovered) {
    v_314 = sub_423;
    sub_420 = sub_421;
  } else {
    v_314 = sub_421;
    sub_420 = sub_423;
  };
  if (controller_ck_63_1) {
    sub_419 = v_314;
  } else {
    sub_419 = sub_420;
  };
  if (controller_v_276) {
    v_307 = sub_180;
  } else {
    v_307 = false;
  };
  if (controller_c_air_2) {
    v_308 = v_307;
  } else {
    v_308 = false;
  };
  if (controller_v_277) {
    v_306 = sub_181;
  } else {
    v_306 = false;
  };
  if (controller_v_276) {
    sub_427 = v_306;
  } else {
    sub_427 = sub_180;
  };
  if (controller_c_air_1) {
    sub_426 = v_308;
  } else {
    sub_426 = sub_427;
  };
  if (controller_blind_failed_recovered) {
    v_315 = sub_426;
    sub_425 = sub_421;
  } else {
    v_315 = sub_421;
    sub_425 = sub_426;
  };
  if (controller_ck_63_1) {
    v_316 = v_315;
  } else {
    v_316 = sub_425;
  };
  if (controller_ck_61_1) {
    v_317 = v_316;
  } else {
    v_317 = sub_419;
  };
  sub_428 = sub_421;
  if (controller_blind_switch) {
    v_318 = v_317;
  } else {
    v_318 = sub_428;
  };
  if (controller_c_blind_1) {
    sub_418 = v_318;
  } else {
    sub_418 = sub_428;
  };
  sub_430 = sub_423;
  if (controller_change_shift) {
    v_299 = false;
    sub_435 = sub_182;
  } else {
    v_299 = sub_182;
    sub_435 = false;
  };
  if (controller_ck_1) {
    sub_434 = v_299;
  } else {
    sub_434 = sub_435;
  };
  if (controller_v_277) {
    sub_433 = false;
  } else {
    sub_433 = sub_434;
  };
  if (controller_v_276) {
    v_300 = sub_433;
  } else {
    v_300 = false;
  };
  if (controller_c_air_2) {
    v_301 = v_300;
  } else {
    v_301 = false;
  };
  if (controller_v_277) {
    v_298 = sub_434;
  } else {
    v_298 = false;
  };
  if (controller_v_276) {
    sub_436 = v_298;
  } else {
    sub_436 = sub_433;
  };
  if (controller_c_air_1) {
    sub_432 = v_301;
  } else {
    sub_432 = sub_436;
  };
  if (controller_blind_failed_recovered) {
    v_302 = sub_432;
    sub_431 = sub_423;
  } else {
    v_302 = sub_423;
    sub_431 = sub_432;
  };
  if (controller_ck_63_1) {
    v_303 = v_302;
  } else {
    v_303 = sub_431;
  };
  if (controller_ck_61_1) {
    v_304 = v_303;
  } else {
    v_304 = sub_430;
  };
  if (controller_v_276) {
    v_295 = sub_433;
  } else {
    v_295 = sub_201;
  };
  if (controller_c_air_2) {
    v_296 = v_295;
  } else {
    v_296 = sub_202;
  };
  if (controller_v_277) {
    v_294 = sub_434;
  } else {
    v_294 = sub_126;
  };
  if (controller_v_276) {
    sub_440 = v_294;
  } else {
    sub_440 = sub_433;
  };
  if (controller_c_air_1) {
    sub_439 = v_296;
  } else {
    sub_439 = sub_440;
  };
  if (controller_blind_failed_recovered) {
    v_297 = sub_439;
    sub_438 = sub_423;
  } else {
    v_297 = sub_423;
    sub_438 = sub_439;
  };
  if (controller_ck_63_1) {
    sub_437 = v_297;
  } else {
    sub_437 = sub_438;
  };
  if (controller_blind_switch) {
    v_305 = v_304;
  } else {
    v_305 = sub_437;
  };
  if (controller_c_blind_1) {
    sub_429 = v_305;
  } else {
    sub_429 = sub_437;
  };
  if (controller_light_failed_recovered) {
    v_319 = sub_429;
    sub_417 = sub_418;
  } else {
    v_319 = sub_418;
    sub_417 = sub_429;
  };
  if (controller_ck_58_1) {
    sub_416 = v_319;
  } else {
    sub_416 = sub_417;
  };
  sub_444 = sub_426;
  sub_443 = sub_444;
  sub_442 = sub_443;
  if (controller_light_failed_recovered) {
    v_320 = sub_442;
    sub_441 = sub_418;
  } else {
    v_320 = sub_418;
    sub_441 = sub_442;
  };
  if (controller_ck_58_1) {
    v_321 = v_320;
  } else {
    v_321 = sub_441;
  };
  if (controller_ck_56_1) {
    v_322 = v_321;
  } else {
    v_322 = sub_416;
  };
  if (controller_blind_failed_recovered) {
    v_287 = sub_426;
    sub_449 = sub_179;
  } else {
    v_287 = sub_179;
    sub_449 = sub_426;
  };
  if (controller_ck_63_1) {
    v_288 = v_287;
  } else {
    v_288 = sub_449;
  };
  if (controller_ck_61_1) {
    v_289 = v_288;
  } else {
    v_289 = sub_178;
  };
  if (controller_blind_switch) {
    v_290 = v_289;
  } else {
    v_290 = sub_178;
  };
  if (controller_c_blind_1) {
    sub_448 = v_290;
  } else {
    sub_448 = sub_178;
  };
  if (controller_light_failed_recovered) {
    v_291 = sub_448;
    sub_447 = sub_418;
  } else {
    v_291 = sub_418;
    sub_447 = sub_448;
  };
  if (controller_ck_58_1) {
    sub_446 = v_291;
  } else {
    sub_446 = sub_447;
  };
  if (controller_ck_1) {
    sub_455 = sub_190;
  } else {
    sub_455 = sub_191;
  };
  if (controller_v_277) {
    sub_454 = false;
  } else {
    sub_454 = sub_455;
  };
  if (controller_v_276) {
    v_281 = sub_454;
  } else {
    v_281 = false;
  };
  if (controller_c_air_2) {
    v_282 = v_281;
  } else {
    v_282 = false;
  };
  if (controller_v_277) {
    v_280 = sub_455;
  } else {
    v_280 = false;
  };
  if (controller_v_276) {
    sub_456 = v_280;
  } else {
    sub_456 = sub_454;
  };
  if (controller_c_air_1) {
    sub_453 = v_282;
  } else {
    sub_453 = sub_456;
  };
  if (controller_blind_failed_recovered) {
    v_283 = sub_453;
    sub_452 = sub_200;
  } else {
    v_283 = sub_200;
    sub_452 = sub_453;
  };
  if (controller_ck_63_1) {
    v_284 = v_283;
  } else {
    v_284 = sub_452;
  };
  if (controller_ck_61_1) {
    v_285 = v_284;
  } else {
    v_285 = sub_199;
  };
  if (controller_v_276) {
    v_277 = sub_454;
  } else {
    v_277 = sub_201;
  };
  if (controller_c_air_2) {
    v_278 = v_277;
  } else {
    v_278 = sub_202;
  };
  if (controller_v_277) {
    v_276 = sub_455;
  } else {
    v_276 = sub_126;
  };
  if (controller_v_276) {
    sub_460 = v_276;
  } else {
    sub_460 = sub_454;
  };
  if (controller_c_air_1) {
    sub_459 = v_278;
  } else {
    sub_459 = sub_460;
  };
  if (controller_blind_failed_recovered) {
    v_279 = sub_459;
    sub_458 = sub_200;
  } else {
    v_279 = sub_200;
    sub_458 = sub_459;
  };
  if (controller_ck_63_1) {
    sub_457 = v_279;
  } else {
    sub_457 = sub_458;
  };
  if (controller_blind_switch) {
    v_286 = v_285;
  } else {
    v_286 = sub_457;
  };
  if (controller_c_blind_1) {
    sub_451 = v_286;
  } else {
    sub_451 = sub_457;
  };
  if (controller_light_failed_recovered) {
    v_292 = sub_451;
    sub_450 = sub_418;
  } else {
    v_292 = sub_418;
    sub_450 = sub_451;
  };
  if (controller_ck_58_1) {
    v_293 = v_292;
  } else {
    v_293 = sub_450;
  };
  if (controller_ck_56_1) {
    sub_445 = v_293;
  } else {
    sub_445 = sub_446;
  };
  if (controller_light_switch) {
    v_323 = v_322;
  } else {
    v_323 = sub_445;
  };
  if (controller_c_light_1) {
    sub_415 = v_323;
  } else {
    sub_415 = sub_445;
  };
  if (controller_air_failed_recovered) {
    v_362 = sub_415;
    sub_348 = sub_349;
  } else {
    v_362 = sub_349;
    sub_348 = sub_415;
  };
  if (controller_ck_46_1) {
    sub_347 = v_362;
  } else {
    sub_347 = sub_348;
  };
  sub_471 = sub_269;
  sub_470 = sub_471;
  sub_469 = sub_470;
  if (controller_blind_failed_recovered) {
    v_269 = sub_469;
    sub_468 = sub_248;
  } else {
    v_269 = sub_248;
    sub_468 = sub_469;
  };
  if (controller_ck_63_1) {
    sub_467 = v_269;
  } else {
    sub_467 = sub_468;
  };
  if (controller_ck_61_1) {
    v_270 = sub_467;
  } else {
    v_270 = sub_246;
  };
  if (controller_blind_switch) {
    v_271 = v_270;
  } else {
    v_271 = sub_467;
  };
  if (controller_c_blind_1) {
    sub_466 = v_271;
  } else {
    sub_466 = sub_467;
  };
  if (controller_change_shift) {
    v_265 = false;
    sub_478 = sub_269;
  } else {
    v_265 = sub_269;
    sub_478 = false;
  };
  if (controller_ck_1) {
    sub_477 = v_265;
  } else {
    sub_477 = sub_478;
  };
  sub_476 = sub_477;
  sub_475 = sub_476;
  if (controller_blind_failed_recovered) {
    v_266 = sub_475;
    sub_474 = false;
  } else {
    v_266 = false;
    sub_474 = sub_475;
  };
  if (controller_ck_63_1) {
    sub_473 = v_266;
  } else {
    sub_473 = sub_474;
  };
  if (controller_ck_61_1) {
    v_267 = sub_473;
  } else {
    v_267 = false;
  };
  if (controller_blind_switch) {
    v_268 = v_267;
  } else {
    v_268 = sub_473;
  };
  if (controller_c_blind_1) {
    sub_472 = v_268;
  } else {
    sub_472 = sub_473;
  };
  if (controller_light_failed_recovered) {
    v_272 = sub_472;
    sub_465 = sub_466;
  } else {
    v_272 = sub_466;
    sub_465 = sub_472;
  };
  if (controller_ck_58_1) {
    sub_464 = v_272;
  } else {
    sub_464 = sub_465;
  };
  sub_479 = sub_466;
  if (controller_ck_56_1) {
    v_273 = sub_479;
  } else {
    v_273 = sub_464;
  };
  if (controller_ck_1) {
    sub_487 = sub_268;
  } else {
    sub_487 = sub_270;
  };
  sub_486 = sub_487;
  sub_485 = sub_486;
  if (controller_blind_failed_recovered) {
    v_260 = sub_485;
    sub_484 = sub_213;
  } else {
    v_260 = sub_213;
    sub_484 = sub_485;
  };
  if (controller_ck_63_1) {
    sub_483 = v_260;
  } else {
    sub_483 = sub_484;
  };
  if (controller_ck_61_1) {
    v_261 = sub_483;
  } else {
    v_261 = sub_211;
  };
  if (controller_blind_switch) {
    v_262 = v_261;
  } else {
    v_262 = sub_483;
  };
  if (controller_c_blind_1) {
    sub_482 = v_262;
  } else {
    sub_482 = sub_483;
  };
  if (controller_light_failed_recovered) {
    v_263 = sub_482;
    sub_481 = sub_466;
  } else {
    v_263 = sub_466;
    sub_481 = sub_482;
  };
  if (controller_ck_58_1) {
    v_264 = v_263;
  } else {
    v_264 = sub_481;
  };
  if (controller_ck_56_1) {
    sub_480 = v_264;
  } else {
    sub_480 = sub_479;
  };
  if (controller_light_switch) {
    v_274 = v_273;
  } else {
    v_274 = sub_480;
  };
  if (controller_c_light_1) {
    sub_463 = v_274;
  } else {
    sub_463 = sub_480;
  };
  if (controller_blind_failed_recovered) {
    v_254 = false;
    sub_493 = sub_316;
  } else {
    v_254 = sub_316;
    sub_493 = false;
  };
  if (controller_ck_63_1) {
    sub_492 = v_254;
  } else {
    sub_492 = sub_493;
  };
  if (controller_ck_61_1) {
    v_255 = sub_315;
  } else {
    v_255 = sub_492;
  };
  if (controller_blind_switch) {
    v_256 = v_255;
  } else {
    v_256 = sub_315;
  };
  sub_494 = sub_315;
  if (controller_c_blind_1) {
    sub_491 = v_256;
  } else {
    sub_491 = sub_494;
  };
  if (controller_change_shift) {
    v_246 = false;
    sub_501 = sub_319;
  } else {
    v_246 = sub_319;
    sub_501 = false;
  };
  if (controller_ck_1) {
    sub_500 = v_246;
  } else {
    sub_500 = sub_501;
  };
  if (controller_v_277) {
    v_248 = false;
  } else {
    v_248 = sub_500;
  };
  if (controller_v_276) {
    v_249 = v_248;
  } else {
    v_249 = sub_500;
  };
  if (controller_v_277) {
    sub_499 = sub_500;
  } else {
    sub_499 = false;
  };
  if (controller_change_shift) {
    v_245 = false;
    sub_504 = sub_326;
  } else {
    v_245 = sub_326;
    sub_504 = false;
  };
  if (controller_ck_1) {
    sub_503 = v_245;
  } else {
    sub_503 = sub_504;
  };
  if (controller_v_277) {
    sub_502 = sub_500;
  } else {
    sub_502 = sub_503;
  };
  if (controller_v_276) {
    v_247 = sub_502;
  } else {
    v_247 = sub_499;
  };
  if (controller_c_air_2) {
    v_250 = v_247;
  } else {
    v_250 = v_249;
  };
  if (controller_v_277) {
    v_244 = sub_503;
  } else {
    v_244 = false;
  };
  if (controller_v_276) {
    sub_505 = v_244;
  } else {
    sub_505 = sub_502;
  };
  if (controller_c_air_1) {
    sub_498 = v_250;
  } else {
    sub_498 = sub_505;
  };
  if (controller_blind_failed_recovered) {
    v_251 = sub_498;
    sub_497 = false;
  } else {
    v_251 = false;
    sub_497 = sub_498;
  };
  if (controller_ck_63_1) {
    sub_496 = v_251;
  } else {
    sub_496 = sub_497;
  };
  if (controller_ck_61_1) {
    v_252 = sub_496;
  } else {
    v_252 = false;
  };
  if (controller_blind_switch) {
    v_253 = v_252;
  } else {
    v_253 = sub_496;
  };
  if (controller_c_blind_1) {
    sub_495 = v_253;
  } else {
    sub_495 = sub_496;
  };
  if (controller_light_failed_recovered) {
    v_257 = sub_495;
    sub_490 = sub_491;
  } else {
    v_257 = sub_491;
    sub_490 = sub_495;
  };
  if (controller_ck_58_1) {
    sub_489 = v_257;
  } else {
    sub_489 = sub_490;
  };
  sub_508 = sub_494;
  if (controller_light_failed_recovered) {
    v_243 = sub_508;
    sub_507 = sub_491;
  } else {
    v_243 = sub_491;
    sub_507 = sub_508;
  };
  if (controller_ck_58_1) {
    sub_506 = v_243;
  } else {
    sub_506 = sub_507;
  };
  if (controller_ck_56_1) {
    v_258 = sub_506;
  } else {
    v_258 = sub_489;
  };
  if (controller_ck_1) {
    sub_516 = sub_339;
  } else {
    sub_516 = sub_340;
  };
  if (controller_v_277) {
    v_235 = false;
  } else {
    v_235 = sub_516;
  };
  if (controller_v_276) {
    v_236 = v_235;
  } else {
    v_236 = sub_516;
  };
  if (controller_v_277) {
    sub_515 = sub_516;
  } else {
    sub_515 = false;
  };
  if (controller_ck_1) {
    sub_518 = sub_343;
  } else {
    sub_518 = sub_344;
  };
  if (controller_v_277) {
    sub_517 = sub_516;
  } else {
    sub_517 = sub_518;
  };
  if (controller_v_276) {
    v_234 = sub_517;
  } else {
    v_234 = sub_515;
  };
  if (controller_c_air_2) {
    v_237 = v_234;
  } else {
    v_237 = v_236;
  };
  if (controller_v_277) {
    v = sub_518;
  } else {
    v = false;
  };
  if (controller_v_276) {
    sub_519 = v;
  } else {
    sub_519 = sub_517;
  };
  if (controller_c_air_1) {
    sub_514 = v_237;
  } else {
    sub_514 = sub_519;
  };
  if (controller_blind_failed_recovered) {
    v_238 = sub_514;
    sub_513 = sub_277;
  } else {
    v_238 = sub_277;
    sub_513 = sub_514;
  };
  if (controller_ck_63_1) {
    sub_512 = v_238;
  } else {
    sub_512 = sub_513;
  };
  if (controller_ck_61_1) {
    v_239 = sub_512;
  } else {
    v_239 = sub_295;
  };
  if (controller_blind_switch) {
    v_240 = v_239;
  } else {
    v_240 = sub_512;
  };
  if (controller_c_blind_1) {
    sub_511 = v_240;
  } else {
    sub_511 = sub_512;
  };
  if (controller_light_failed_recovered) {
    v_241 = sub_511;
    sub_510 = sub_491;
  } else {
    v_241 = sub_491;
    sub_510 = sub_511;
  };
  if (controller_ck_58_1) {
    v_242 = v_241;
  } else {
    v_242 = sub_510;
  };
  if (controller_ck_56_1) {
    sub_509 = v_242;
  } else {
    sub_509 = sub_506;
  };
  if (controller_light_switch) {
    v_259 = v_258;
  } else {
    v_259 = sub_509;
  };
  if (controller_c_light_1) {
    sub_488 = v_259;
  } else {
    sub_488 = sub_509;
  };
  if (controller_air_failed_recovered) {
    v_275 = sub_488;
    sub_462 = sub_463;
  } else {
    v_275 = sub_463;
    sub_462 = sub_488;
  };
  if (controller_ck_46_1) {
    sub_461 = v_275;
  } else {
    sub_461 = sub_462;
  };
  if (controller_worker) {
    v_542 = sub_461;
    sub_346 = sub_347;
  } else {
    v_542 = sub_347;
    sub_346 = sub_461;
  };
  if (controller_ck_35_1) {
    v_543 = v_542;
  } else {
    v_543 = sub_346;
  };
  if (p_controller_c_light_2) {
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
  int controller_pnr_19, int controller_ck_35_1, int controller_pnr_18,
  int controller_ck_37_1, int controller_pnr_17, int controller_ck_39_1,
  int controller_pnr_16, int controller_ck_41_1, int controller_pnr_15,
  int controller_v_277, int controller_v_276, int controller_pnr_14,
  int controller_ck_46_1, int controller_pnr_13, int controller_ck_48_1,
  int controller_pnr_12, int controller_ck_51_1, int controller_pnr_11,
  int controller_ck_53_1, int controller_pnr_10, int controller_ck_56_1,
  int controller_pnr_9, int controller_ck_58_1, int controller_pnr_8,
  int controller_ck_61_1, int controller_pnr_7, int controller_ck_63_1,
  int controller_pnr, int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_light_1, int controller_c_closet,
  int controller_c_air_2, int controller_c_air_1, int controller_c_window,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_blind_1_out* _out) {
  
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
  sub_25 = false;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_27 = true;
  sub_26 = sub_27;
  if (p_controller_c_blind_1) {
    sub_22 = sub_26;
  } else {
    sub_22 = sub_23;
  };
  if (controller_ck_41_1) {
    sub_21 = sub_22;
    sub_28 = false;
  } else {
    sub_21 = false;
    sub_28 = sub_22;
  };
  if (controller_c_pc) {
    sub_20 = sub_21;
  } else {
    sub_20 = sub_28;
  };
  if (controller_c_door) {
    sub_19 = false;
    sub_29 = sub_20;
  } else {
    sub_19 = sub_20;
    sub_29 = false;
  };
  if (controller_ck_39_1) {
    sub_18 = sub_29;
  } else {
    sub_18 = sub_19;
  };
  if (controller_c_closet) {
    sub_17 = false;
    sub_30 = sub_18;
  } else {
    sub_17 = sub_18;
    sub_30 = false;
  };
  if (controller_closet_failed_recovered) {
    v_667 = sub_30;
    sub_16 = sub_17;
  } else {
    v_667 = sub_17;
    sub_16 = sub_30;
  };
  if (controller_ck_53_1) {
    sub_15 = v_667;
  } else {
    sub_15 = sub_16;
  };
  if (controller_ck_39_1) {
    v_666 = sub_19;
  } else {
    v_666 = sub_29;
  };
  if (controller_c_closet) {
    sub_32 = false;
  } else {
    sub_32 = v_666;
  };
  sub_31 = sub_32;
  if (controller_cleaner) {
    v_668 = sub_31;
    sub_14 = sub_15;
  } else {
    v_668 = sub_15;
    sub_14 = sub_31;
  };
  if (controller_ck_37_1) {
    v_669 = v_668;
  } else {
    v_669 = sub_14;
  };
  if (controller_c_window) {
    sub_13 = v_669;
  } else {
    sub_13 = false;
  };
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  if (controller_cleaner) {
    v_665 = false;
    sub_38 = sub_15;
  } else {
    v_665 = sub_15;
    sub_38 = false;
  };
  if (controller_ck_37_1) {
    sub_37 = v_665;
  } else {
    sub_37 = sub_38;
  };
  if (controller_ck_41_1) {
    sub_45 = sub_23;
    sub_46 = false;
  } else {
    sub_45 = false;
    sub_46 = sub_23;
  };
  if (controller_c_pc) {
    sub_44 = sub_45;
  } else {
    sub_44 = sub_46;
  };
  if (controller_c_door) {
    sub_43 = sub_44;
    sub_47 = false;
  } else {
    sub_43 = false;
    sub_47 = sub_44;
  };
  if (controller_ck_39_1) {
    v_663 = sub_47;
  } else {
    v_663 = sub_43;
  };
  if (controller_c_closet) {
    sub_42 = false;
  } else {
    sub_42 = v_663;
  };
  sub_41 = sub_42;
  if (controller_cleaner) {
    v_664 = sub_41;
    sub_40 = false;
  } else {
    v_664 = false;
    sub_40 = sub_41;
  };
  if (controller_ck_37_1) {
    sub_39 = v_664;
  } else {
    sub_39 = sub_40;
  };
  if (controller_c_window) {
    sub_36 = sub_37;
  } else {
    sub_36 = sub_39;
  };
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  if (controller_blind_failed_recovered) {
    v_670 = sub_33;
    sub_9 = sub_10;
  } else {
    v_670 = sub_10;
    sub_9 = sub_33;
  };
  if (controller_ck_63_1) {
    sub_8 = v_670;
  } else {
    sub_8 = sub_9;
  };
  if (controller_ck_39_1) {
    sub_58 = sub_43;
  } else {
    sub_58 = sub_47;
  };
  if (controller_c_closet) {
    sub_57 = false;
    sub_59 = sub_58;
  } else {
    sub_57 = sub_58;
    sub_59 = false;
  };
  if (controller_closet_failed_recovered) {
    v_661 = sub_59;
    sub_56 = sub_57;
  } else {
    v_661 = sub_57;
    sub_56 = sub_59;
  };
  if (controller_ck_53_1) {
    sub_55 = v_661;
  } else {
    sub_55 = sub_56;
  };
  if (controller_cleaner) {
    v_662 = false;
    sub_54 = sub_55;
  } else {
    v_662 = sub_55;
    sub_54 = false;
  };
  if (controller_ck_37_1) {
    sub_53 = v_662;
  } else {
    sub_53 = sub_54;
  };
  if (controller_cleaner) {
    v_660 = sub_31;
    sub_61 = false;
  } else {
    v_660 = false;
    sub_61 = sub_31;
  };
  if (controller_ck_37_1) {
    sub_60 = v_660;
  } else {
    sub_60 = sub_61;
  };
  if (controller_c_window) {
    sub_52 = sub_53;
  } else {
    sub_52 = sub_60;
  };
  sub_51 = sub_52;
  sub_50 = sub_51;
  sub_49 = sub_50;
  if (controller_blind_failed_recovered) {
    v_671 = sub_49;
    sub_48 = sub_10;
  } else {
    v_671 = sub_10;
    sub_48 = sub_49;
  };
  if (controller_ck_63_1) {
    v_672 = v_671;
  } else {
    v_672 = sub_48;
  };
  if (controller_ck_61_1) {
    v_673 = v_672;
  } else {
    v_673 = sub_8;
  };
  if (controller_c_window) {
    sub_66 = sub_37;
  } else {
    sub_66 = sub_60;
  };
  sub_65 = sub_66;
  sub_64 = sub_65;
  sub_63 = sub_64;
  if (controller_blind_failed_recovered) {
    v_674 = sub_63;
    sub_62 = sub_10;
  } else {
    v_674 = sub_10;
    sub_62 = sub_63;
  };
  if (controller_ck_63_1) {
    v_675 = v_674;
  } else {
    v_675 = sub_62;
  };
  if (controller_blind_switch) {
    sub_7 = v_673;
  } else {
    sub_7 = v_675;
  };
  if (controller_c_window) {
    sub_73 = sub_37;
  } else {
    sub_73 = false;
  };
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  if (controller_change_shift) {
    v_653 = sub_73;
    sub_77 = sub_36;
  } else {
    v_653 = sub_36;
    sub_77 = sub_73;
  };
  if (controller_ck_1) {
    sub_76 = v_653;
  } else {
    sub_76 = sub_77;
  };
  sub_75 = sub_76;
  sub_74 = sub_75;
  if (controller_blind_failed_recovered) {
    v_654 = sub_74;
    sub_69 = sub_70;
  } else {
    v_654 = sub_70;
    sub_69 = sub_74;
  };
  if (controller_ck_63_1) {
    sub_68 = v_654;
  } else {
    sub_68 = sub_69;
  };
  if (controller_c_window) {
    sub_83 = sub_53;
  } else {
    sub_83 = false;
  };
  if (controller_change_shift) {
    v_652 = sub_83;
    sub_82 = sub_52;
  } else {
    v_652 = sub_52;
    sub_82 = sub_83;
  };
  if (controller_ck_1) {
    sub_81 = v_652;
  } else {
    sub_81 = sub_82;
  };
  sub_80 = sub_81;
  sub_79 = sub_80;
  if (controller_blind_failed_recovered) {
    v_655 = sub_79;
    sub_78 = sub_70;
  } else {
    v_655 = sub_70;
    sub_78 = sub_79;
  };
  if (controller_ck_63_1) {
    v_656 = v_655;
  } else {
    v_656 = sub_78;
  };
  if (controller_ck_61_1) {
    v_657 = v_656;
  } else {
    v_657 = sub_68;
  };
  if (controller_change_shift) {
    v_651 = sub_73;
    sub_88 = sub_66;
  } else {
    v_651 = sub_66;
    sub_88 = sub_73;
  };
  if (controller_ck_1) {
    sub_87 = v_651;
  } else {
    sub_87 = sub_88;
  };
  sub_86 = sub_87;
  sub_85 = sub_86;
  if (controller_blind_failed_recovered) {
    v_658 = sub_85;
    sub_84 = sub_70;
  } else {
    v_658 = sub_70;
    sub_84 = sub_85;
  };
  if (controller_ck_63_1) {
    v_659 = v_658;
  } else {
    v_659 = sub_84;
  };
  if (controller_blind_switch) {
    sub_67 = v_657;
  } else {
    sub_67 = v_659;
  };
  if (controller_light_failed_recovered) {
    v_676 = sub_67;
    sub_6 = sub_7;
  } else {
    v_676 = sub_7;
    sub_6 = sub_67;
  };
  if (controller_ck_58_1) {
    sub_5 = v_676;
  } else {
    sub_5 = sub_6;
  };
  if (controller_c_window) {
    sub_96 = sub_60;
  } else {
    sub_96 = false;
  };
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  if (controller_c_window) {
    sub_100 = false;
  } else {
    sub_100 = sub_39;
  };
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  if (controller_blind_failed_recovered) {
    v_649 = sub_97;
    sub_92 = sub_93;
  } else {
    v_649 = sub_93;
    sub_92 = sub_97;
  };
  if (controller_ck_63_1) {
    sub_91 = v_649;
  } else {
    sub_91 = sub_92;
  };
  if (controller_c_window) {
    sub_106 = false;
  } else {
    sub_106 = sub_60;
  };
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  if (controller_blind_failed_recovered) {
    v_648 = sub_103;
    sub_102 = sub_93;
  } else {
    v_648 = sub_93;
    sub_102 = sub_103;
  };
  if (controller_ck_63_1) {
    sub_101 = v_648;
  } else {
    sub_101 = sub_102;
  };
  if (controller_ck_61_1) {
    v_650 = sub_101;
  } else {
    v_650 = sub_91;
  };
  if (controller_blind_switch) {
    sub_90 = v_650;
  } else {
    sub_90 = sub_101;
  };
  if (controller_light_failed_recovered) {
    v_677 = sub_90;
    sub_89 = sub_7;
  } else {
    v_677 = sub_7;
    sub_89 = sub_90;
  };
  if (controller_ck_58_1) {
    v_678 = v_677;
  } else {
    v_678 = sub_89;
  };
  if (controller_ck_56_1) {
    v_679 = v_678;
  } else {
    v_679 = sub_5;
  };
  sub_107 = sub_7;
  if (controller_light_switch) {
    v_680 = v_679;
  } else {
    v_680 = sub_107;
  };
  if (controller_c_light_1) {
    sub_4 = v_680;
  } else {
    sub_4 = sub_107;
  };
  if (controller_v_277) {
    sub_115 = false;
  } else {
    sub_115 = sub_72;
  };
  sub_120 = sub_17;
  if (controller_cleaner) {
    v_637 = sub_120;
    sub_119 = false;
  } else {
    v_637 = false;
    sub_119 = sub_120;
  };
  if (controller_ck_37_1) {
    v_638 = v_637;
  } else {
    v_638 = sub_119;
  };
  if (controller_c_window) {
    sub_118 = v_638;
  } else {
    sub_118 = false;
  };
  sub_117 = sub_118;
  if (controller_v_277) {
    sub_116 = false;
  } else {
    sub_116 = sub_117;
  };
  if (controller_v_276) {
    v_639 = sub_116;
  } else {
    v_639 = sub_115;
  };
  if (controller_v_277) {
    v_636 = sub_72;
  } else {
    v_636 = false;
  };
  if (controller_v_276) {
    sub_121 = v_636;
  } else {
    sub_121 = false;
  };
  if (controller_c_air_2) {
    v_640 = v_639;
  } else {
    v_640 = sub_121;
  };
  if (controller_v_277) {
    v_635 = sub_117;
  } else {
    v_635 = sub_72;
  };
  if (controller_v_276) {
    sub_122 = v_635;
  } else {
    sub_122 = sub_116;
  };
  if (controller_c_air_1) {
    sub_114 = v_640;
  } else {
    sub_114 = sub_122;
  };
  sub_128 = sub_57;
  if (controller_cleaner) {
    v_631 = sub_128;
    sub_127 = false;
  } else {
    v_631 = false;
    sub_127 = sub_128;
  };
  if (controller_ck_37_1) {
    v_632 = v_631;
  } else {
    v_632 = sub_127;
  };
  if (controller_c_window) {
    sub_126 = v_632;
  } else {
    sub_126 = false;
  };
  sub_125 = sub_126;
  if (controller_v_277) {
    sub_124 = false;
  } else {
    sub_124 = sub_125;
  };
  if (controller_v_276) {
    v_633 = sub_124;
  } else {
    v_633 = sub_115;
  };
  if (controller_c_air_2) {
    v_634 = v_633;
  } else {
    v_634 = sub_121;
  };
  if (controller_v_277) {
    v_630 = sub_125;
  } else {
    v_630 = sub_72;
  };
  if (controller_v_276) {
    sub_129 = v_630;
  } else {
    sub_129 = sub_124;
  };
  if (controller_c_air_1) {
    sub_123 = v_634;
  } else {
    sub_123 = sub_129;
  };
  if (controller_blind_failed_recovered) {
    v_641 = sub_123;
    sub_113 = sub_114;
  } else {
    v_641 = sub_114;
    sub_113 = sub_123;
  };
  if (controller_ck_63_1) {
    sub_112 = v_641;
  } else {
    sub_112 = sub_113;
  };
  sub_134 = sub_83;
  if (controller_v_277) {
    sub_133 = false;
  } else {
    sub_133 = sub_134;
  };
  if (controller_v_276) {
    v_627 = sub_116;
  } else {
    v_627 = sub_133;
  };
  if (controller_v_277) {
    v_626 = sub_134;
  } else {
    v_626 = false;
  };
  if (controller_v_276) {
    sub_135 = v_626;
  } else {
    sub_135 = false;
  };
  if (controller_c_air_2) {
    v_628 = v_627;
  } else {
    v_628 = sub_135;
  };
  if (controller_v_277) {
    v_625 = sub_117;
  } else {
    v_625 = sub_134;
  };
  if (controller_v_276) {
    sub_136 = v_625;
  } else {
    sub_136 = sub_116;
  };
  if (controller_c_air_1) {
    sub_132 = v_628;
  } else {
    sub_132 = sub_136;
  };
  if (controller_blind_failed_recovered) {
    v_629 = sub_132;
    sub_131 = sub_114;
  } else {
    v_629 = sub_114;
    sub_131 = sub_132;
  };
  if (controller_ck_63_1) {
    sub_130 = v_629;
  } else {
    sub_130 = sub_131;
  };
  if (controller_ck_61_1) {
    v_642 = sub_130;
  } else {
    v_642 = sub_112;
  };
  sub_137 = sub_114;
  if (controller_blind_switch) {
    sub_111 = v_642;
  } else {
    sub_111 = sub_137;
  };
  if (controller_v_276) {
    v_617 = false;
  } else {
    v_617 = sub_115;
  };
  if (controller_c_air_2) {
    v_618 = v_617;
  } else {
    v_618 = sub_121;
  };
  if (controller_v_276) {
    sub_142 = sub_115;
  } else {
    sub_142 = false;
  };
  if (controller_c_air_1) {
    sub_141 = v_618;
  } else {
    sub_141 = sub_142;
  };
  if (controller_change_shift) {
    v_614 = false;
    sub_146 = sub_126;
  } else {
    v_614 = sub_126;
    sub_146 = false;
  };
  if (controller_ck_1) {
    sub_145 = v_614;
  } else {
    sub_145 = sub_146;
  };
  if (controller_v_277) {
    sub_144 = false;
  } else {
    sub_144 = sub_145;
  };
  if (controller_v_276) {
    v_615 = sub_144;
  } else {
    v_615 = sub_115;
  };
  if (controller_c_air_2) {
    v_616 = v_615;
  } else {
    v_616 = sub_121;
  };
  if (controller_v_277) {
    v_613 = sub_145;
  } else {
    v_613 = sub_72;
  };
  if (controller_v_276) {
    sub_147 = v_613;
  } else {
    sub_147 = sub_144;
  };
  if (controller_c_air_1) {
    sub_143 = v_616;
  } else {
    sub_143 = sub_147;
  };
  if (controller_blind_failed_recovered) {
    v_619 = sub_143;
    sub_140 = sub_141;
  } else {
    v_619 = sub_141;
    sub_140 = sub_143;
  };
  if (controller_ck_63_1) {
    sub_139 = v_619;
  } else {
    sub_139 = sub_140;
  };
  if (controller_change_shift) {
    v_610 = false;
    sub_152 = sub_118;
  } else {
    v_610 = sub_118;
    sub_152 = false;
  };
  if (controller_ck_1) {
    sub_151 = v_610;
  } else {
    sub_151 = sub_152;
  };
  if (controller_v_277) {
    sub_150 = false;
  } else {
    sub_150 = sub_151;
  };
  if (controller_v_276) {
    v_611 = sub_150;
  } else {
    v_611 = sub_133;
  };
  if (controller_c_air_2) {
    v_612 = v_611;
  } else {
    v_612 = sub_135;
  };
  if (controller_v_277) {
    v_609 = sub_151;
  } else {
    v_609 = sub_134;
  };
  if (controller_v_276) {
    sub_153 = v_609;
  } else {
    sub_153 = sub_150;
  };
  if (controller_c_air_1) {
    sub_149 = v_612;
  } else {
    sub_149 = sub_153;
  };
  if (controller_blind_failed_recovered) {
    v_620 = sub_149;
    sub_148 = sub_141;
  } else {
    v_620 = sub_141;
    sub_148 = sub_149;
  };
  if (controller_ck_63_1) {
    v_621 = v_620;
  } else {
    v_621 = sub_148;
  };
  if (controller_ck_61_1) {
    v_622 = v_621;
  } else {
    v_622 = sub_139;
  };
  if (controller_v_276) {
    v_607 = sub_150;
  } else {
    v_607 = sub_115;
  };
  if (controller_c_air_2) {
    v_608 = v_607;
  } else {
    v_608 = sub_121;
  };
  if (controller_v_277) {
    v_606 = sub_151;
  } else {
    v_606 = sub_72;
  };
  if (controller_v_276) {
    sub_156 = v_606;
  } else {
    sub_156 = sub_150;
  };
  if (controller_c_air_1) {
    sub_155 = v_608;
  } else {
    sub_155 = sub_156;
  };
  if (controller_blind_failed_recovered) {
    v_623 = sub_155;
    sub_154 = sub_141;
  } else {
    v_623 = sub_141;
    sub_154 = sub_155;
  };
  if (controller_ck_63_1) {
    v_624 = v_623;
  } else {
    v_624 = sub_154;
  };
  if (controller_blind_switch) {
    sub_138 = v_622;
  } else {
    sub_138 = v_624;
  };
  if (controller_light_failed_recovered) {
    v_643 = sub_138;
    sub_110 = sub_111;
  } else {
    v_643 = sub_111;
    sub_110 = sub_138;
  };
  if (controller_ck_58_1) {
    sub_109 = v_643;
  } else {
    sub_109 = sub_110;
  };
  if (controller_v_276) {
    v_604 = sub_116;
  } else {
    v_604 = false;
  };
  if (controller_c_air_2) {
    v_605 = v_604;
  } else {
    v_605 = false;
  };
  if (controller_v_277) {
    v_603 = sub_117;
  } else {
    v_603 = false;
  };
  if (controller_v_276) {
    sub_161 = v_603;
  } else {
    sub_161 = sub_116;
  };
  if (controller_c_air_1) {
    sub_160 = v_605;
  } else {
    sub_160 = sub_161;
  };
  sub_159 = sub_160;
  sub_158 = sub_159;
  if (controller_light_failed_recovered) {
    v_644 = sub_158;
    sub_157 = sub_111;
  } else {
    v_644 = sub_111;
    sub_157 = sub_158;
  };
  if (controller_ck_58_1) {
    v_645 = v_644;
  } else {
    v_645 = sub_157;
  };
  if (controller_ck_56_1) {
    v_646 = v_645;
  } else {
    v_646 = sub_109;
  };
  if (controller_ck_61_1) {
    v_601 = sub_130;
  } else {
    v_601 = sub_137;
  };
  if (controller_blind_switch) {
    sub_164 = v_601;
  } else {
    sub_164 = sub_137;
  };
  if (controller_light_failed_recovered) {
    v_602 = sub_164;
    sub_163 = sub_111;
  } else {
    v_602 = sub_111;
    sub_163 = sub_164;
  };
  if (controller_ck_58_1) {
    sub_162 = v_602;
  } else {
    sub_162 = sub_163;
  };
  if (controller_light_switch) {
    v_647 = v_646;
  } else {
    v_647 = sub_162;
  };
  if (controller_c_light_1) {
    sub_108 = v_647;
  } else {
    sub_108 = sub_162;
  };
  if (controller_air_failed_recovered) {
    v_681 = sub_108;
    sub_3 = sub_4;
  } else {
    v_681 = sub_4;
    sub_3 = sub_108;
  };
  if (controller_ck_46_1) {
    sub_2 = v_681;
  } else {
    sub_2 = sub_3;
  };
  if (controller_c_pc) {
    sub_184 = sub_28;
  } else {
    sub_184 = sub_21;
  };
  if (controller_c_door) {
    sub_183 = sub_184;
    sub_185 = false;
  } else {
    sub_183 = false;
    sub_185 = sub_184;
  };
  if (controller_ck_39_1) {
    sub_182 = sub_185;
  } else {
    sub_182 = sub_183;
  };
  if (controller_c_closet) {
    sub_181 = false;
    sub_186 = sub_182;
  } else {
    sub_181 = sub_182;
    sub_186 = false;
  };
  if (controller_closet_failed_recovered) {
    v_593 = sub_186;
    sub_180 = sub_181;
  } else {
    v_593 = sub_181;
    sub_180 = sub_186;
  };
  if (controller_ck_53_1) {
    sub_179 = v_593;
  } else {
    sub_179 = sub_180;
  };
  sub_187 = sub_181;
  if (controller_cleaner) {
    v_594 = sub_187;
    sub_178 = sub_179;
  } else {
    v_594 = sub_179;
    sub_178 = sub_187;
  };
  if (controller_ck_37_1) {
    sub_177 = v_594;
  } else {
    sub_177 = sub_178;
  };
  if (controller_c_window) {
    sub_176 = sub_177;
  } else {
    sub_176 = false;
  };
  sub_175 = sub_176;
  sub_174 = sub_175;
  sub_173 = sub_174;
  if (controller_c_pc) {
    sub_198 = sub_46;
  } else {
    sub_198 = sub_45;
  };
  if (controller_c_door) {
    sub_197 = sub_198;
    sub_199 = false;
  } else {
    sub_197 = false;
    sub_199 = sub_198;
  };
  if (controller_ck_39_1) {
    sub_196 = sub_199;
  } else {
    sub_196 = sub_197;
  };
  if (controller_c_closet) {
    sub_195 = false;
    sub_200 = sub_196;
  } else {
    sub_195 = sub_196;
    sub_200 = false;
  };
  if (controller_closet_failed_recovered) {
    v_590 = sub_200;
    sub_194 = sub_195;
  } else {
    v_590 = sub_195;
    sub_194 = sub_200;
  };
  if (controller_ck_53_1) {
    sub_193 = v_590;
  } else {
    sub_193 = sub_194;
  };
  sub_201 = sub_195;
  if (controller_cleaner) {
    v_591 = sub_201;
    sub_192 = sub_193;
  } else {
    v_591 = sub_193;
    sub_192 = sub_201;
  };
  if (controller_ck_37_1) {
    v_592 = v_591;
  } else {
    v_592 = sub_192;
  };
  if (controller_c_window) {
    sub_191 = false;
  } else {
    sub_191 = v_592;
  };
  sub_190 = sub_191;
  sub_189 = sub_190;
  sub_188 = sub_189;
  if (controller_blind_failed_recovered) {
    v_595 = sub_188;
    sub_172 = sub_173;
  } else {
    v_595 = sub_173;
    sub_172 = sub_188;
  };
  if (controller_ck_63_1) {
    sub_171 = v_595;
  } else {
    sub_171 = sub_172;
  };
  if (controller_c_window) {
    sub_207 = false;
  } else {
    sub_207 = sub_177;
  };
  sub_206 = sub_207;
  sub_205 = sub_206;
  sub_204 = sub_205;
  if (controller_blind_failed_recovered) {
    v_589 = sub_204;
    sub_203 = sub_173;
  } else {
    v_589 = sub_173;
    sub_203 = sub_204;
  };
  if (controller_ck_63_1) {
    sub_202 = v_589;
  } else {
    sub_202 = sub_203;
  };
  if (controller_ck_61_1) {
    v_596 = sub_202;
  } else {
    v_596 = sub_171;
  };
  if (controller_blind_switch) {
    sub_170 = v_596;
  } else {
    sub_170 = sub_202;
  };
  if (controller_change_shift) {
    v_586 = false;
    sub_214 = sub_191;
  } else {
    v_586 = sub_191;
    sub_214 = false;
  };
  if (controller_ck_1) {
    sub_213 = v_586;
  } else {
    sub_213 = sub_214;
  };
  sub_212 = sub_213;
  sub_211 = sub_212;
  if (controller_blind_failed_recovered) {
    v_587 = sub_211;
    sub_210 = false;
  } else {
    v_587 = false;
    sub_210 = sub_211;
  };
  if (controller_ck_63_1) {
    sub_209 = v_587;
  } else {
    sub_209 = sub_210;
  };
  if (controller_change_shift) {
    v_584 = false;
    sub_220 = sub_207;
  } else {
    v_584 = sub_207;
    sub_220 = false;
  };
  if (controller_ck_1) {
    sub_219 = v_584;
  } else {
    sub_219 = sub_220;
  };
  sub_218 = sub_219;
  sub_217 = sub_218;
  if (controller_blind_failed_recovered) {
    v_585 = sub_217;
    sub_216 = false;
  } else {
    v_585 = false;
    sub_216 = sub_217;
  };
  if (controller_ck_63_1) {
    sub_215 = v_585;
  } else {
    sub_215 = sub_216;
  };
  if (controller_ck_61_1) {
    v_588 = sub_215;
  } else {
    v_588 = sub_209;
  };
  if (controller_blind_switch) {
    sub_208 = v_588;
  } else {
    sub_208 = sub_215;
  };
  if (controller_light_failed_recovered) {
    v_597 = sub_208;
    sub_169 = sub_170;
  } else {
    v_597 = sub_170;
    sub_169 = sub_208;
  };
  if (controller_ck_58_1) {
    sub_168 = v_597;
  } else {
    sub_168 = sub_169;
  };
  sub_221 = sub_170;
  if (controller_ck_56_1) {
    v_598 = sub_221;
  } else {
    v_598 = sub_168;
  };
  if (controller_light_switch) {
    v_599 = v_598;
  } else {
    v_599 = sub_221;
  };
  if (controller_c_light_1) {
    sub_167 = v_599;
  } else {
    sub_167 = sub_221;
  };
  if (controller_c_closet) {
    sub_235 = false;
  } else {
    sub_235 = sub_184;
  };
  sub_234 = sub_235;
  if (controller_cleaner) {
    v_574 = sub_234;
    sub_233 = false;
  } else {
    v_574 = false;
    sub_233 = sub_234;
  };
  if (controller_ck_37_1) {
    sub_232 = v_574;
  } else {
    sub_232 = sub_233;
  };
  sub_231 = sub_232;
  sub_230 = sub_231;
  if (controller_v_277) {
    v_576 = false;
  } else {
    v_576 = sub_230;
  };
  if (controller_v_276) {
    v_577 = v_576;
  } else {
    v_577 = sub_230;
  };
  if (controller_v_277) {
    sub_229 = sub_230;
  } else {
    sub_229 = false;
  };
  if (controller_ck_39_1) {
    sub_243 = sub_183;
  } else {
    sub_243 = sub_185;
  };
  if (controller_c_closet) {
    sub_242 = false;
    sub_244 = sub_243;
  } else {
    sub_242 = sub_243;
    sub_244 = false;
  };
  if (controller_closet_failed_recovered) {
    v_571 = sub_244;
    sub_241 = sub_242;
  } else {
    v_571 = sub_242;
    sub_241 = sub_244;
  };
  if (controller_ck_53_1) {
    sub_240 = v_571;
  } else {
    sub_240 = sub_241;
  };
  if (controller_cleaner) {
    v_572 = false;
    sub_239 = sub_240;
  } else {
    v_572 = sub_240;
    sub_239 = false;
  };
  if (controller_ck_37_1) {
    v_573 = v_572;
  } else {
    v_573 = sub_239;
  };
  if (controller_c_window) {
    sub_238 = v_573;
  } else {
    sub_238 = false;
  };
  sub_237 = sub_238;
  if (controller_v_277) {
    sub_236 = sub_230;
  } else {
    sub_236 = sub_237;
  };
  if (controller_v_276) {
    v_575 = sub_236;
  } else {
    v_575 = sub_229;
  };
  if (controller_c_air_2) {
    v_578 = v_575;
  } else {
    v_578 = v_577;
  };
  if (controller_v_277) {
    v_570 = sub_237;
  } else {
    v_570 = false;
  };
  if (controller_v_276) {
    sub_245 = v_570;
  } else {
    sub_245 = sub_236;
  };
  if (controller_c_air_1) {
    sub_228 = v_578;
  } else {
    sub_228 = sub_245;
  };
  if (controller_c_closet) {
    sub_253 = false;
  } else {
    sub_253 = sub_198;
  };
  sub_252 = sub_253;
  if (controller_cleaner) {
    v_565 = sub_252;
    sub_251 = false;
  } else {
    v_565 = false;
    sub_251 = sub_252;
  };
  if (controller_ck_37_1) {
    sub_250 = v_565;
  } else {
    sub_250 = sub_251;
  };
  sub_249 = sub_250;
  sub_248 = sub_249;
  if (controller_v_277) {
    v_567 = false;
  } else {
    v_567 = sub_248;
  };
  if (controller_v_276) {
    v_568 = v_567;
  } else {
    v_568 = sub_248;
  };
  if (controller_v_277) {
    sub_247 = sub_248;
  } else {
    sub_247 = false;
  };
  if (controller_ck_39_1) {
    sub_261 = sub_197;
  } else {
    sub_261 = sub_199;
  };
  if (controller_c_closet) {
    sub_260 = false;
    sub_262 = sub_261;
  } else {
    sub_260 = sub_261;
    sub_262 = false;
  };
  if (controller_closet_failed_recovered) {
    v_562 = sub_262;
    sub_259 = sub_260;
  } else {
    v_562 = sub_260;
    sub_259 = sub_262;
  };
  if (controller_ck_53_1) {
    sub_258 = v_562;
  } else {
    sub_258 = sub_259;
  };
  if (controller_cleaner) {
    v_563 = false;
    sub_257 = sub_258;
  } else {
    v_563 = sub_258;
    sub_257 = false;
  };
  if (controller_ck_37_1) {
    v_564 = v_563;
  } else {
    v_564 = sub_257;
  };
  if (controller_c_window) {
    sub_256 = v_564;
  } else {
    sub_256 = false;
  };
  sub_255 = sub_256;
  if (controller_v_277) {
    sub_254 = sub_248;
  } else {
    sub_254 = sub_255;
  };
  if (controller_v_276) {
    v_566 = sub_254;
  } else {
    v_566 = sub_247;
  };
  if (controller_c_air_2) {
    v_569 = v_566;
  } else {
    v_569 = v_568;
  };
  if (controller_v_277) {
    v_561 = sub_255;
  } else {
    v_561 = false;
  };
  if (controller_v_276) {
    sub_263 = v_561;
  } else {
    sub_263 = sub_254;
  };
  if (controller_c_air_1) {
    sub_246 = v_569;
  } else {
    sub_246 = sub_263;
  };
  if (controller_blind_failed_recovered) {
    v_579 = sub_246;
    sub_227 = sub_228;
  } else {
    v_579 = sub_228;
    sub_227 = sub_246;
  };
  if (controller_ck_63_1) {
    sub_226 = v_579;
  } else {
    sub_226 = sub_227;
  };
  sub_264 = sub_228;
  if (controller_ck_61_1) {
    v_580 = sub_264;
  } else {
    v_580 = sub_226;
  };
  if (controller_blind_switch) {
    sub_225 = v_580;
  } else {
    sub_225 = sub_264;
  };
  if (controller_change_shift) {
    v_554 = false;
    sub_271 = sub_249;
  } else {
    v_554 = sub_249;
    sub_271 = false;
  };
  if (controller_ck_1) {
    sub_270 = v_554;
  } else {
    sub_270 = sub_271;
  };
  if (controller_v_277) {
    v_556 = false;
  } else {
    v_556 = sub_270;
  };
  if (controller_v_276) {
    v_557 = v_556;
  } else {
    v_557 = sub_270;
  };
  if (controller_v_277) {
    sub_269 = sub_270;
  } else {
    sub_269 = false;
  };
  if (controller_change_shift) {
    v_553 = false;
    sub_274 = sub_256;
  } else {
    v_553 = sub_256;
    sub_274 = false;
  };
  if (controller_ck_1) {
    sub_273 = v_553;
  } else {
    sub_273 = sub_274;
  };
  if (controller_v_277) {
    sub_272 = sub_270;
  } else {
    sub_272 = sub_273;
  };
  if (controller_v_276) {
    v_555 = sub_272;
  } else {
    v_555 = sub_269;
  };
  if (controller_c_air_2) {
    v_558 = v_555;
  } else {
    v_558 = v_557;
  };
  if (controller_v_277) {
    v_552 = sub_273;
  } else {
    v_552 = false;
  };
  if (controller_v_276) {
    sub_275 = v_552;
  } else {
    sub_275 = sub_272;
  };
  if (controller_c_air_1) {
    sub_268 = v_558;
  } else {
    sub_268 = sub_275;
  };
  if (controller_blind_failed_recovered) {
    v_559 = sub_268;
    sub_267 = false;
  } else {
    v_559 = false;
    sub_267 = sub_268;
  };
  if (controller_ck_63_1) {
    sub_266 = v_559;
  } else {
    sub_266 = sub_267;
  };
  if (controller_change_shift) {
    v_546 = false;
    sub_281 = sub_231;
  } else {
    v_546 = sub_231;
    sub_281 = false;
  };
  if (controller_ck_1) {
    sub_280 = v_546;
  } else {
    sub_280 = sub_281;
  };
  if (controller_v_277) {
    v_548 = false;
  } else {
    v_548 = sub_280;
  };
  if (controller_v_276) {
    v_549 = v_548;
  } else {
    v_549 = sub_280;
  };
  if (controller_v_277) {
    sub_279 = sub_280;
  } else {
    sub_279 = false;
  };
  if (controller_change_shift) {
    v_545 = false;
    sub_284 = sub_238;
  } else {
    v_545 = sub_238;
    sub_284 = false;
  };
  if (controller_ck_1) {
    sub_283 = v_545;
  } else {
    sub_283 = sub_284;
  };
  if (controller_v_277) {
    sub_282 = sub_280;
  } else {
    sub_282 = sub_283;
  };
  if (controller_v_276) {
    v_547 = sub_282;
  } else {
    v_547 = sub_279;
  };
  if (controller_c_air_2) {
    v_550 = v_547;
  } else {
    v_550 = v_549;
  };
  if (controller_v_277) {
    v_544 = sub_283;
  } else {
    v_544 = false;
  };
  if (controller_v_276) {
    sub_285 = v_544;
  } else {
    sub_285 = sub_282;
  };
  if (controller_c_air_1) {
    sub_278 = v_550;
  } else {
    sub_278 = sub_285;
  };
  if (controller_blind_failed_recovered) {
    v_551 = sub_278;
    sub_277 = false;
  } else {
    v_551 = false;
    sub_277 = sub_278;
  };
  if (controller_ck_63_1) {
    sub_276 = v_551;
  } else {
    sub_276 = sub_277;
  };
  if (controller_ck_61_1) {
    v_560 = sub_276;
  } else {
    v_560 = sub_266;
  };
  if (controller_blind_switch) {
    sub_265 = v_560;
  } else {
    sub_265 = sub_276;
  };
  if (controller_light_failed_recovered) {
    v_581 = sub_265;
    sub_224 = sub_225;
  } else {
    v_581 = sub_225;
    sub_224 = sub_265;
  };
  if (controller_ck_58_1) {
    sub_223 = v_581;
  } else {
    sub_223 = sub_224;
  };
  sub_288 = sub_264;
  if (controller_light_failed_recovered) {
    v = sub_288;
    sub_287 = sub_225;
  } else {
    v = sub_225;
    sub_287 = sub_288;
  };
  if (controller_ck_58_1) {
    sub_286 = v;
  } else {
    sub_286 = sub_287;
  };
  if (controller_ck_56_1) {
    v_582 = sub_286;
  } else {
    v_582 = sub_223;
  };
  if (controller_light_switch) {
    v_583 = v_582;
  } else {
    v_583 = sub_286;
  };
  if (controller_c_light_1) {
    sub_222 = v_583;
  } else {
    sub_222 = sub_286;
  };
  if (controller_air_failed_recovered) {
    v_600 = sub_222;
    sub_166 = sub_167;
  } else {
    v_600 = sub_167;
    sub_166 = sub_222;
  };
  if (controller_ck_46_1) {
    sub_165 = v_600;
  } else {
    sub_165 = sub_166;
  };
  if (controller_worker) {
    v_682 = sub_165;
    sub_1 = sub_2;
  } else {
    v_682 = sub_2;
    sub_1 = sub_165;
  };
  if (controller_ck_35_1) {
    sub_0 = v_682;
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
  int controller_pnr_19, int controller_ck_35_1, int controller_pnr_18,
  int controller_ck_37_1, int controller_pnr_17, int controller_ck_39_1,
  int controller_pnr_16, int controller_ck_41_1, int controller_pnr_15,
  int controller_v_277, int controller_v_276, int controller_pnr_14,
  int controller_ck_46_1, int controller_pnr_13, int controller_ck_48_1,
  int controller_pnr_12, int controller_ck_51_1, int controller_pnr_11,
  int controller_ck_53_1, int controller_pnr_10, int controller_ck_56_1,
  int controller_pnr_9, int controller_ck_58_1, int controller_pnr_8,
  int controller_ck_61_1, int controller_pnr_7, int controller_ck_63_1,
  int controller_pnr, int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_1_out* _out) {
  
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
  sub_24 = false;
  sub_23 = sub_24;
  sub_22 = sub_23;
  if (controller_ck_41_1) {
    sub_21 = sub_22;
    sub_25 = false;
  } else {
    sub_21 = false;
    sub_25 = sub_22;
  };
  if (controller_c_pc) {
    sub_20 = sub_21;
  } else {
    sub_20 = sub_25;
  };
  if (controller_c_door) {
    sub_19 = false;
    sub_26 = sub_20;
  } else {
    sub_19 = sub_20;
    sub_26 = false;
  };
  if (controller_ck_39_1) {
    sub_18 = sub_26;
  } else {
    sub_18 = sub_19;
  };
  if (controller_c_closet) {
    sub_17 = false;
    sub_27 = sub_18;
  } else {
    sub_17 = sub_18;
    sub_27 = false;
  };
  if (controller_closet_failed_recovered) {
    v_771 = sub_27;
    sub_16 = sub_17;
  } else {
    v_771 = sub_17;
    sub_16 = sub_27;
  };
  if (controller_ck_53_1) {
    sub_15 = v_771;
  } else {
    sub_15 = sub_16;
  };
  if (controller_ck_39_1) {
    v_770 = sub_19;
  } else {
    v_770 = sub_26;
  };
  if (controller_c_closet) {
    sub_29 = false;
  } else {
    sub_29 = v_770;
  };
  sub_28 = sub_29;
  if (controller_cleaner) {
    v_772 = sub_28;
    sub_14 = sub_15;
  } else {
    v_772 = sub_15;
    sub_14 = sub_28;
  };
  if (controller_ck_37_1) {
    v_773 = v_772;
  } else {
    v_773 = sub_14;
  };
  if (controller_c_window) {
    sub_13 = v_773;
  } else {
    sub_13 = false;
  };
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  if (controller_cleaner) {
    v_769 = false;
    sub_35 = sub_15;
  } else {
    v_769 = sub_15;
    sub_35 = false;
  };
  if (controller_ck_37_1) {
    sub_34 = v_769;
  } else {
    sub_34 = sub_35;
  };
  if (controller_cleaner) {
    v_768 = sub_28;
    sub_37 = false;
  } else {
    v_768 = false;
    sub_37 = sub_28;
  };
  if (controller_ck_37_1) {
    sub_36 = v_768;
  } else {
    sub_36 = sub_37;
  };
  if (controller_c_window) {
    sub_33 = sub_34;
  } else {
    sub_33 = sub_36;
  };
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  if (controller_blind_failed_recovered) {
    v_774 = sub_30;
    sub_9 = sub_10;
  } else {
    v_774 = sub_10;
    sub_9 = sub_30;
  };
  if (controller_ck_63_1) {
    sub_8 = v_774;
  } else {
    sub_8 = sub_9;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (controller_c_window) {
    sub_45 = sub_34;
  } else {
    sub_45 = false;
  };
  sub_44 = sub_45;
  if (controller_v_277) {
    sub_43 = false;
  } else {
    sub_43 = sub_44;
  };
  sub_50 = sub_17;
  if (controller_cleaner) {
    v_764 = sub_50;
    sub_49 = false;
  } else {
    v_764 = false;
    sub_49 = sub_50;
  };
  if (controller_ck_37_1) {
    v_765 = v_764;
  } else {
    v_765 = sub_49;
  };
  if (controller_c_window) {
    sub_48 = v_765;
  } else {
    sub_48 = false;
  };
  sub_47 = sub_48;
  if (controller_v_277) {
    sub_46 = false;
  } else {
    sub_46 = sub_47;
  };
  if (controller_v_276) {
    v_766 = sub_46;
  } else {
    v_766 = sub_43;
  };
  if (controller_v_277) {
    v_763 = sub_44;
  } else {
    v_763 = false;
  };
  if (controller_v_276) {
    sub_51 = v_763;
  } else {
    sub_51 = false;
  };
  if (controller_c_air_2) {
    v_767 = v_766;
  } else {
    v_767 = sub_51;
  };
  if (controller_v_277) {
    v_762 = sub_47;
  } else {
    v_762 = sub_44;
  };
  if (controller_v_276) {
    sub_52 = v_762;
  } else {
    sub_52 = sub_46;
  };
  if (controller_c_air_1) {
    sub_42 = v_767;
  } else {
    sub_42 = sub_52;
  };
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (controller_air_failed_recovered) {
    v_775 = sub_38;
    sub_4 = sub_5;
  } else {
    v_775 = sub_5;
    sub_4 = sub_38;
  };
  if (controller_ck_46_1) {
    sub_3 = v_775;
  } else {
    sub_3 = sub_4;
  };
  if (controller_c_pc) {
    sub_71 = sub_25;
  } else {
    sub_71 = sub_21;
  };
  if (controller_c_door) {
    sub_70 = sub_71;
    sub_72 = false;
  } else {
    sub_70 = false;
    sub_72 = sub_71;
  };
  if (controller_ck_39_1) {
    sub_69 = sub_72;
  } else {
    sub_69 = sub_70;
  };
  if (controller_c_closet) {
    sub_68 = false;
    sub_73 = sub_69;
  } else {
    sub_68 = sub_69;
    sub_73 = false;
  };
  if (controller_closet_failed_recovered) {
    v_758 = sub_73;
    sub_67 = sub_68;
  } else {
    v_758 = sub_68;
    sub_67 = sub_73;
  };
  if (controller_ck_53_1) {
    sub_66 = v_758;
  } else {
    sub_66 = sub_67;
  };
  sub_74 = sub_68;
  if (controller_cleaner) {
    v_759 = sub_74;
    sub_65 = sub_66;
  } else {
    v_759 = sub_66;
    sub_65 = sub_74;
  };
  if (controller_ck_37_1) {
    sub_64 = v_759;
  } else {
    sub_64 = sub_65;
  };
  if (controller_c_window) {
    sub_63 = sub_64;
  } else {
    sub_63 = false;
  };
  sub_62 = sub_63;
  sub_61 = sub_62;
  sub_60 = sub_61;
  if (controller_c_window) {
    sub_78 = false;
  } else {
    sub_78 = sub_64;
  };
  sub_77 = sub_78;
  sub_76 = sub_77;
  sub_75 = sub_76;
  if (controller_blind_failed_recovered) {
    v_760 = sub_75;
    sub_59 = sub_60;
  } else {
    v_760 = sub_60;
    sub_59 = sub_75;
  };
  if (controller_ck_63_1) {
    sub_58 = v_760;
  } else {
    sub_58 = sub_59;
  };
  sub_57 = sub_58;
  sub_56 = sub_57;
  sub_55 = sub_56;
  if (controller_c_closet) {
    sub_90 = false;
  } else {
    sub_90 = sub_71;
  };
  sub_89 = sub_90;
  if (controller_cleaner) {
    v_753 = sub_89;
    sub_88 = false;
  } else {
    v_753 = false;
    sub_88 = sub_89;
  };
  if (controller_ck_37_1) {
    sub_87 = v_753;
  } else {
    sub_87 = sub_88;
  };
  sub_86 = sub_87;
  sub_85 = sub_86;
  if (controller_v_277) {
    v_755 = false;
  } else {
    v_755 = sub_85;
  };
  if (controller_v_276) {
    v_756 = v_755;
  } else {
    v_756 = sub_85;
  };
  if (controller_v_277) {
    sub_84 = sub_85;
  } else {
    sub_84 = false;
  };
  if (controller_ck_39_1) {
    sub_98 = sub_70;
  } else {
    sub_98 = sub_72;
  };
  if (controller_c_closet) {
    sub_97 = false;
    sub_99 = sub_98;
  } else {
    sub_97 = sub_98;
    sub_99 = false;
  };
  if (controller_closet_failed_recovered) {
    v_750 = sub_99;
    sub_96 = sub_97;
  } else {
    v_750 = sub_97;
    sub_96 = sub_99;
  };
  if (controller_ck_53_1) {
    sub_95 = v_750;
  } else {
    sub_95 = sub_96;
  };
  if (controller_cleaner) {
    v_751 = false;
    sub_94 = sub_95;
  } else {
    v_751 = sub_95;
    sub_94 = false;
  };
  if (controller_ck_37_1) {
    v_752 = v_751;
  } else {
    v_752 = sub_94;
  };
  if (controller_c_window) {
    sub_93 = v_752;
  } else {
    sub_93 = false;
  };
  sub_92 = sub_93;
  if (controller_v_277) {
    sub_91 = sub_85;
  } else {
    sub_91 = sub_92;
  };
  if (controller_v_276) {
    v_754 = sub_91;
  } else {
    v_754 = sub_84;
  };
  if (controller_c_air_2) {
    v_757 = v_754;
  } else {
    v_757 = v_756;
  };
  if (controller_v_277) {
    v_749 = sub_92;
  } else {
    v_749 = false;
  };
  if (controller_v_276) {
    sub_100 = v_749;
  } else {
    sub_100 = sub_91;
  };
  if (controller_c_air_1) {
    sub_83 = v_757;
  } else {
    sub_83 = sub_100;
  };
  sub_82 = sub_83;
  sub_81 = sub_82;
  sub_80 = sub_81;
  sub_79 = sub_80;
  if (controller_air_failed_recovered) {
    v_761 = sub_79;
    sub_54 = sub_55;
  } else {
    v_761 = sub_55;
    sub_54 = sub_79;
  };
  if (controller_ck_46_1) {
    sub_53 = v_761;
  } else {
    sub_53 = sub_54;
  };
  if (controller_worker) {
    v_776 = sub_53;
    sub_2 = sub_3;
  } else {
    v_776 = sub_3;
    sub_2 = sub_53;
  };
  if (controller_ck_35_1) {
    sub_1 = v_776;
  } else {
    sub_1 = sub_2;
  };
  sub_124 = true;
  sub_123 = sub_124;
  sub_122 = sub_123;
  if (controller_ck_41_1) {
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
  if (controller_c_door) {
    sub_119 = false;
    sub_126 = sub_120;
  } else {
    sub_119 = sub_120;
    sub_126 = false;
  };
  if (controller_ck_39_1) {
    sub_118 = sub_126;
  } else {
    sub_118 = sub_119;
  };
  if (controller_c_closet) {
    sub_117 = false;
    sub_127 = sub_118;
  } else {
    sub_117 = sub_118;
    sub_127 = false;
  };
  if (controller_closet_failed_recovered) {
    v_740 = sub_127;
    sub_116 = sub_117;
  } else {
    v_740 = sub_117;
    sub_116 = sub_127;
  };
  if (controller_ck_53_1) {
    sub_115 = v_740;
  } else {
    sub_115 = sub_116;
  };
  if (controller_ck_39_1) {
    v_739 = sub_119;
  } else {
    v_739 = sub_126;
  };
  if (controller_c_closet) {
    sub_129 = false;
  } else {
    sub_129 = v_739;
  };
  sub_128 = sub_129;
  if (controller_cleaner) {
    v_741 = sub_128;
    sub_114 = sub_115;
  } else {
    v_741 = sub_115;
    sub_114 = sub_128;
  };
  if (controller_ck_37_1) {
    v_742 = v_741;
  } else {
    v_742 = sub_114;
  };
  if (controller_c_window) {
    sub_113 = v_742;
  } else {
    sub_113 = false;
  };
  sub_112 = sub_113;
  sub_111 = sub_112;
  sub_110 = sub_111;
  if (controller_cleaner) {
    v_738 = false;
    sub_135 = sub_115;
  } else {
    v_738 = sub_115;
    sub_135 = false;
  };
  if (controller_ck_37_1) {
    sub_134 = v_738;
  } else {
    sub_134 = sub_135;
  };
  if (controller_cleaner) {
    v_737 = sub_128;
    sub_137 = false;
  } else {
    v_737 = false;
    sub_137 = sub_128;
  };
  if (controller_ck_37_1) {
    sub_136 = v_737;
  } else {
    sub_136 = sub_137;
  };
  if (controller_c_window) {
    sub_133 = sub_134;
  } else {
    sub_133 = sub_136;
  };
  sub_132 = sub_133;
  sub_131 = sub_132;
  sub_130 = sub_131;
  if (controller_blind_failed_recovered) {
    v_743 = sub_130;
    sub_109 = sub_110;
  } else {
    v_743 = sub_110;
    sub_109 = sub_130;
  };
  if (controller_ck_63_1) {
    sub_108 = v_743;
  } else {
    sub_108 = sub_109;
  };
  sub_107 = sub_108;
  if (controller_cleaner) {
    v_734 = sub_28;
    sub_145 = sub_115;
  } else {
    v_734 = sub_115;
    sub_145 = sub_28;
  };
  if (controller_ck_37_1) {
    v_735 = v_734;
  } else {
    v_735 = sub_145;
  };
  if (controller_c_window) {
    sub_144 = v_735;
  } else {
    sub_144 = false;
  };
  sub_143 = sub_144;
  sub_142 = sub_143;
  sub_141 = sub_142;
  if (controller_c_window) {
    sub_150 = sub_134;
  } else {
    sub_150 = sub_36;
  };
  if (controller_change_shift) {
    v_733 = sub_150;
    sub_149 = sub_133;
  } else {
    v_733 = sub_133;
    sub_149 = sub_150;
  };
  if (controller_ck_1) {
    sub_148 = v_733;
  } else {
    sub_148 = sub_149;
  };
  sub_147 = sub_148;
  sub_146 = sub_147;
  if (controller_blind_failed_recovered) {
    v_736 = sub_146;
    sub_140 = sub_141;
  } else {
    v_736 = sub_141;
    sub_140 = sub_146;
  };
  if (controller_ck_63_1) {
    sub_139 = v_736;
  } else {
    sub_139 = sub_140;
  };
  sub_138 = sub_139;
  if (controller_light_failed_recovered) {
    v_744 = sub_138;
    sub_106 = sub_107;
  } else {
    v_744 = sub_107;
    sub_106 = sub_138;
  };
  if (controller_ck_58_1) {
    sub_105 = v_744;
  } else {
    sub_105 = sub_106;
  };
  if (controller_cleaner) {
    v_730 = sub_128;
    sub_159 = sub_15;
  } else {
    v_730 = sub_15;
    sub_159 = sub_128;
  };
  if (controller_ck_37_1) {
    v_731 = v_730;
  } else {
    v_731 = sub_159;
  };
  if (controller_c_window) {
    sub_158 = v_731;
  } else {
    sub_158 = false;
  };
  sub_157 = sub_158;
  sub_156 = sub_157;
  sub_155 = sub_156;
  if (controller_c_window) {
    sub_163 = sub_34;
  } else {
    sub_163 = sub_136;
  };
  sub_162 = sub_163;
  sub_161 = sub_162;
  sub_160 = sub_161;
  if (controller_blind_failed_recovered) {
    v_732 = sub_160;
    sub_154 = sub_155;
  } else {
    v_732 = sub_155;
    sub_154 = sub_160;
  };
  if (controller_ck_63_1) {
    sub_153 = v_732;
  } else {
    sub_153 = sub_154;
  };
  sub_152 = sub_153;
  if (controller_light_failed_recovered) {
    v_745 = sub_152;
    sub_151 = sub_107;
  } else {
    v_745 = sub_107;
    sub_151 = sub_152;
  };
  if (controller_ck_58_1) {
    v_746 = v_745;
  } else {
    v_746 = sub_151;
  };
  if (controller_ck_56_1) {
    v_747 = v_746;
  } else {
    v_747 = sub_105;
  };
  if (controller_light_switch) {
    sub_104 = v_747;
  } else {
    sub_104 = sub_107;
  };
  if (controller_c_window) {
    sub_172 = sub_134;
  } else {
    sub_172 = false;
  };
  sub_171 = sub_172;
  if (controller_v_277) {
    sub_170 = false;
  } else {
    sub_170 = sub_171;
  };
  sub_177 = sub_117;
  if (controller_cleaner) {
    v_722 = sub_177;
    sub_176 = false;
  } else {
    v_722 = false;
    sub_176 = sub_177;
  };
  if (controller_ck_37_1) {
    v_723 = v_722;
  } else {
    v_723 = sub_176;
  };
  if (controller_c_window) {
    sub_175 = v_723;
  } else {
    sub_175 = false;
  };
  sub_174 = sub_175;
  if (controller_v_277) {
    sub_173 = false;
  } else {
    sub_173 = sub_174;
  };
  if (controller_v_276) {
    v_724 = sub_173;
  } else {
    v_724 = sub_170;
  };
  if (controller_v_277) {
    v_721 = sub_171;
  } else {
    v_721 = false;
  };
  if (controller_v_276) {
    sub_178 = v_721;
  } else {
    sub_178 = false;
  };
  if (controller_c_air_2) {
    v_725 = v_724;
  } else {
    v_725 = sub_178;
  };
  if (controller_v_277) {
    v_720 = sub_174;
  } else {
    v_720 = sub_171;
  };
  if (controller_v_276) {
    sub_179 = v_720;
  } else {
    sub_179 = sub_173;
  };
  if (controller_c_air_1) {
    sub_169 = v_725;
  } else {
    sub_169 = sub_179;
  };
  sub_168 = sub_169;
  sub_167 = sub_168;
  if (controller_v_276) {
    v_717 = sub_46;
  } else {
    v_717 = sub_170;
  };
  if (controller_c_air_2) {
    v_718 = v_717;
  } else {
    v_718 = sub_178;
  };
  if (controller_v_277) {
    v_716 = sub_47;
  } else {
    v_716 = sub_171;
  };
  if (controller_v_276) {
    sub_184 = v_716;
  } else {
    sub_184 = sub_46;
  };
  if (controller_c_air_1) {
    sub_183 = v_718;
  } else {
    sub_183 = sub_184;
  };
  if (controller_change_shift) {
    v_713 = sub_48;
    sub_188 = sub_175;
  } else {
    v_713 = sub_175;
    sub_188 = sub_48;
  };
  if (controller_ck_1) {
    sub_187 = v_713;
  } else {
    sub_187 = sub_188;
  };
  if (controller_v_277) {
    sub_186 = false;
  } else {
    sub_186 = sub_187;
  };
  if (controller_v_276) {
    v_714 = sub_186;
  } else {
    v_714 = sub_170;
  };
  if (controller_c_air_2) {
    v_715 = v_714;
  } else {
    v_715 = sub_178;
  };
  if (controller_v_277) {
    v_712 = sub_187;
  } else {
    v_712 = sub_171;
  };
  if (controller_v_276) {
    sub_189 = v_712;
  } else {
    sub_189 = sub_186;
  };
  if (controller_c_air_1) {
    sub_185 = v_715;
  } else {
    sub_185 = sub_189;
  };
  if (controller_blind_failed_recovered) {
    v_719 = sub_185;
    sub_182 = sub_183;
  } else {
    v_719 = sub_183;
    sub_182 = sub_185;
  };
  if (controller_ck_63_1) {
    sub_181 = v_719;
  } else {
    sub_181 = sub_182;
  };
  sub_180 = sub_181;
  if (controller_light_failed_recovered) {
    v_726 = sub_180;
    sub_166 = sub_167;
  } else {
    v_726 = sub_167;
    sub_166 = sub_180;
  };
  if (controller_ck_58_1) {
    sub_165 = v_726;
  } else {
    sub_165 = sub_166;
  };
  if (controller_v_276) {
    v_710 = sub_173;
  } else {
    v_710 = sub_43;
  };
  if (controller_c_air_2) {
    v_711 = v_710;
  } else {
    v_711 = sub_51;
  };
  if (controller_v_277) {
    v_709 = sub_174;
  } else {
    v_709 = sub_44;
  };
  if (controller_v_276) {
    sub_194 = v_709;
  } else {
    sub_194 = sub_173;
  };
  if (controller_c_air_1) {
    sub_193 = v_711;
  } else {
    sub_193 = sub_194;
  };
  sub_192 = sub_193;
  sub_191 = sub_192;
  if (controller_light_failed_recovered) {
    v_727 = sub_191;
    sub_190 = sub_167;
  } else {
    v_727 = sub_167;
    sub_190 = sub_191;
  };
  if (controller_ck_58_1) {
    v_728 = v_727;
  } else {
    v_728 = sub_190;
  };
  if (controller_ck_56_1) {
    v_729 = v_728;
  } else {
    v_729 = sub_165;
  };
  if (controller_light_switch) {
    sub_164 = v_729;
  } else {
    sub_164 = sub_167;
  };
  if (controller_air_failed_recovered) {
    v_748 = sub_164;
    sub_103 = sub_104;
  } else {
    v_748 = sub_104;
    sub_103 = sub_164;
  };
  if (controller_ck_46_1) {
    sub_102 = v_748;
  } else {
    sub_102 = sub_103;
  };
  if (controller_c_pc) {
    sub_214 = sub_125;
  } else {
    sub_214 = sub_121;
  };
  if (controller_c_door) {
    sub_213 = sub_214;
    sub_215 = false;
  } else {
    sub_213 = false;
    sub_215 = sub_214;
  };
  if (controller_ck_39_1) {
    sub_212 = sub_215;
  } else {
    sub_212 = sub_213;
  };
  if (controller_c_closet) {
    sub_211 = false;
    sub_216 = sub_212;
  } else {
    sub_211 = sub_212;
    sub_216 = false;
  };
  if (controller_closet_failed_recovered) {
    v_703 = sub_216;
    sub_210 = sub_211;
  } else {
    v_703 = sub_211;
    sub_210 = sub_216;
  };
  if (controller_ck_53_1) {
    sub_209 = v_703;
  } else {
    sub_209 = sub_210;
  };
  sub_217 = sub_211;
  if (controller_cleaner) {
    v_704 = sub_217;
    sub_208 = sub_209;
  } else {
    v_704 = sub_209;
    sub_208 = sub_217;
  };
  if (controller_ck_37_1) {
    sub_207 = v_704;
  } else {
    sub_207 = sub_208;
  };
  if (controller_c_window) {
    sub_206 = sub_207;
  } else {
    sub_206 = false;
  };
  sub_205 = sub_206;
  sub_204 = sub_205;
  sub_203 = sub_204;
  if (controller_c_window) {
    sub_221 = false;
  } else {
    sub_221 = sub_207;
  };
  sub_220 = sub_221;
  sub_219 = sub_220;
  sub_218 = sub_219;
  if (controller_blind_failed_recovered) {
    v_705 = sub_218;
    sub_202 = sub_203;
  } else {
    v_705 = sub_203;
    sub_202 = sub_218;
  };
  if (controller_ck_63_1) {
    sub_201 = v_705;
  } else {
    sub_201 = sub_202;
  };
  sub_200 = sub_201;
  if (controller_change_shift) {
    v_701 = sub_78;
    sub_228 = sub_221;
  } else {
    v_701 = sub_221;
    sub_228 = sub_78;
  };
  if (controller_ck_1) {
    sub_227 = v_701;
  } else {
    sub_227 = sub_228;
  };
  sub_226 = sub_227;
  sub_225 = sub_226;
  if (controller_blind_failed_recovered) {
    v_702 = sub_225;
    sub_224 = sub_60;
  } else {
    v_702 = sub_60;
    sub_224 = sub_225;
  };
  if (controller_ck_63_1) {
    sub_223 = v_702;
  } else {
    sub_223 = sub_224;
  };
  sub_222 = sub_223;
  if (controller_light_failed_recovered) {
    v_706 = sub_222;
    sub_199 = sub_200;
  } else {
    v_706 = sub_200;
    sub_199 = sub_222;
  };
  if (controller_ck_58_1) {
    sub_198 = v_706;
  } else {
    sub_198 = sub_199;
  };
  sub_229 = sub_200;
  if (controller_ck_56_1) {
    v_707 = sub_229;
  } else {
    v_707 = sub_198;
  };
  if (controller_light_switch) {
    sub_197 = v_707;
  } else {
    sub_197 = sub_229;
  };
  if (controller_c_closet) {
    sub_242 = false;
  } else {
    sub_242 = sub_214;
  };
  sub_241 = sub_242;
  if (controller_cleaner) {
    v_694 = sub_241;
    sub_240 = false;
  } else {
    v_694 = false;
    sub_240 = sub_241;
  };
  if (controller_ck_37_1) {
    sub_239 = v_694;
  } else {
    sub_239 = sub_240;
  };
  sub_238 = sub_239;
  sub_237 = sub_238;
  if (controller_v_277) {
    v_696 = false;
  } else {
    v_696 = sub_237;
  };
  if (controller_v_276) {
    v_697 = v_696;
  } else {
    v_697 = sub_237;
  };
  if (controller_v_277) {
    sub_236 = sub_237;
  } else {
    sub_236 = false;
  };
  if (controller_ck_39_1) {
    sub_250 = sub_213;
  } else {
    sub_250 = sub_215;
  };
  if (controller_c_closet) {
    sub_249 = false;
    sub_251 = sub_250;
  } else {
    sub_249 = sub_250;
    sub_251 = false;
  };
  if (controller_closet_failed_recovered) {
    v_691 = sub_251;
    sub_248 = sub_249;
  } else {
    v_691 = sub_249;
    sub_248 = sub_251;
  };
  if (controller_ck_53_1) {
    sub_247 = v_691;
  } else {
    sub_247 = sub_248;
  };
  if (controller_cleaner) {
    v_692 = false;
    sub_246 = sub_247;
  } else {
    v_692 = sub_247;
    sub_246 = false;
  };
  if (controller_ck_37_1) {
    v_693 = v_692;
  } else {
    v_693 = sub_246;
  };
  if (controller_c_window) {
    sub_245 = v_693;
  } else {
    sub_245 = false;
  };
  sub_244 = sub_245;
  if (controller_v_277) {
    sub_243 = sub_237;
  } else {
    sub_243 = sub_244;
  };
  if (controller_v_276) {
    v_695 = sub_243;
  } else {
    v_695 = sub_236;
  };
  if (controller_c_air_2) {
    v_698 = v_695;
  } else {
    v_698 = v_697;
  };
  if (controller_v_277) {
    v_690 = sub_244;
  } else {
    v_690 = false;
  };
  if (controller_v_276) {
    sub_252 = v_690;
  } else {
    sub_252 = sub_243;
  };
  if (controller_c_air_1) {
    sub_235 = v_698;
  } else {
    sub_235 = sub_252;
  };
  sub_234 = sub_235;
  sub_233 = sub_234;
  if (controller_change_shift) {
    v_684 = sub_86;
    sub_259 = sub_238;
  } else {
    v_684 = sub_238;
    sub_259 = sub_86;
  };
  if (controller_ck_1) {
    sub_258 = v_684;
  } else {
    sub_258 = sub_259;
  };
  if (controller_v_277) {
    v_686 = false;
  } else {
    v_686 = sub_258;
  };
  if (controller_v_276) {
    v_687 = v_686;
  } else {
    v_687 = sub_258;
  };
  if (controller_v_277) {
    sub_257 = sub_258;
  } else {
    sub_257 = false;
  };
  if (controller_change_shift) {
    v_683 = sub_93;
    sub_262 = sub_245;
  } else {
    v_683 = sub_245;
    sub_262 = sub_93;
  };
  if (controller_ck_1) {
    sub_261 = v_683;
  } else {
    sub_261 = sub_262;
  };
  if (controller_v_277) {
    sub_260 = sub_258;
  } else {
    sub_260 = sub_261;
  };
  if (controller_v_276) {
    v_685 = sub_260;
  } else {
    v_685 = sub_257;
  };
  if (controller_c_air_2) {
    v_688 = v_685;
  } else {
    v_688 = v_687;
  };
  if (controller_v_277) {
    v = sub_261;
  } else {
    v = false;
  };
  if (controller_v_276) {
    sub_263 = v;
  } else {
    sub_263 = sub_260;
  };
  if (controller_c_air_1) {
    sub_256 = v_688;
  } else {
    sub_256 = sub_263;
  };
  if (controller_blind_failed_recovered) {
    v_689 = sub_256;
    sub_255 = sub_83;
  } else {
    v_689 = sub_83;
    sub_255 = sub_256;
  };
  if (controller_ck_63_1) {
    sub_254 = v_689;
  } else {
    sub_254 = sub_255;
  };
  sub_253 = sub_254;
  if (controller_light_failed_recovered) {
    v_699 = sub_253;
    sub_232 = sub_233;
  } else {
    v_699 = sub_233;
    sub_232 = sub_253;
  };
  if (controller_ck_58_1) {
    sub_231 = v_699;
  } else {
    sub_231 = sub_232;
  };
  sub_264 = sub_233;
  if (controller_ck_56_1) {
    v_700 = sub_264;
  } else {
    v_700 = sub_231;
  };
  if (controller_light_switch) {
    sub_230 = v_700;
  } else {
    sub_230 = sub_264;
  };
  if (controller_air_failed_recovered) {
    v_708 = sub_230;
    sub_196 = sub_197;
  } else {
    v_708 = sub_197;
    sub_196 = sub_230;
  };
  if (controller_ck_46_1) {
    sub_195 = v_708;
  } else {
    sub_195 = sub_196;
  };
  if (controller_worker) {
    v_777 = sub_195;
    sub_101 = sub_102;
  } else {
    v_777 = sub_102;
    sub_101 = sub_195;
  };
  if (controller_ck_35_1) {
    v_778 = v_777;
  } else {
    v_778 = sub_101;
  };
  if (p_controller_c_light_1) {
    sub_0 = v_778;
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
  int controller_pnr_19, int controller_ck_35_1, int controller_pnr_18,
  int controller_ck_37_1, int controller_pnr_17, int controller_ck_39_1,
  int controller_pnr_16, int controller_ck_41_1, int controller_pnr_15,
  int controller_v_277, int controller_v_276, int controller_pnr_14,
  int controller_ck_46_1, int controller_pnr_13, int controller_ck_48_1,
  int controller_pnr_12, int controller_ck_51_1, int controller_pnr_11,
  int controller_ck_53_1, int controller_pnr_10, int controller_ck_56_1,
  int controller_pnr_9, int controller_ck_58_1, int controller_pnr_8,
  int controller_ck_61_1, int controller_pnr_7, int controller_ck_63_1,
  int controller_pnr, int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_closet_out* _out) {
  
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
  sub_22 = false;
  sub_21 = sub_22;
  sub_20 = sub_21;
  if (controller_ck_41_1) {
    sub_19 = sub_20;
    sub_23 = false;
  } else {
    sub_19 = false;
    sub_23 = sub_20;
  };
  if (controller_c_pc) {
    sub_18 = sub_19;
  } else {
    sub_18 = sub_23;
  };
  if (controller_c_door) {
    sub_17 = false;
    sub_24 = sub_18;
  } else {
    sub_17 = sub_18;
    sub_24 = false;
  };
  if (controller_ck_39_1) {
    sub_16 = sub_24;
  } else {
    sub_16 = sub_17;
  };
  sub_31 = true;
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (controller_ck_41_1) {
    sub_28 = sub_29;
    sub_32 = false;
  } else {
    sub_28 = false;
    sub_32 = sub_29;
  };
  if (controller_c_pc) {
    sub_27 = sub_28;
  } else {
    sub_27 = sub_32;
  };
  if (controller_c_door) {
    v_801 = sub_27;
    sub_26 = false;
  } else {
    v_801 = false;
    sub_26 = sub_27;
  };
  if (controller_ck_39_1) {
    sub_25 = v_801;
  } else {
    sub_25 = sub_26;
  };
  if (controller_closet_failed_recovered) {
    v_802 = sub_25;
    sub_15 = sub_16;
  } else {
    v_802 = sub_16;
    sub_15 = sub_25;
  };
  if (controller_ck_53_1) {
    sub_14 = v_802;
  } else {
    sub_14 = sub_15;
  };
  if (controller_ck_39_1) {
    sub_34 = sub_17;
  } else {
    sub_34 = sub_24;
  };
  sub_33 = sub_34;
  if (controller_cleaner) {
    v_803 = sub_33;
    sub_13 = sub_14;
  } else {
    v_803 = sub_14;
    sub_13 = sub_33;
  };
  if (controller_ck_37_1) {
    v_804 = v_803;
  } else {
    v_804 = sub_13;
  };
  if (controller_c_window) {
    sub_12 = v_804;
  } else {
    sub_12 = false;
  };
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  if (controller_cleaner) {
    v_799 = sub_33;
    v_798 = false;
    sub_40 = sub_14;
  } else {
    v_799 = false;
    v_798 = sub_14;
    sub_40 = false;
  };
  if (controller_ck_37_1) {
    sub_39 = v_798;
  } else {
    sub_39 = sub_40;
  };
  if (controller_cleaner) {
    sub_41 = false;
  } else {
    sub_41 = sub_33;
  };
  if (controller_ck_37_1) {
    v_800 = v_799;
  } else {
    v_800 = sub_41;
  };
  if (controller_c_window) {
    sub_38 = sub_39;
  } else {
    sub_38 = v_800;
  };
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  if (controller_blind_failed_recovered) {
    v_805 = sub_35;
    sub_8 = sub_9;
  } else {
    v_805 = sub_9;
    sub_8 = sub_35;
  };
  if (controller_ck_63_1) {
    sub_7 = v_805;
  } else {
    sub_7 = sub_8;
  };
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  if (controller_c_window) {
    sub_49 = sub_39;
  } else {
    sub_49 = false;
  };
  sub_48 = sub_49;
  if (controller_v_277) {
    v_795 = sub_48;
  } else {
    v_795 = false;
  };
  if (controller_v_276) {
    v_796 = v_795;
  } else {
    v_796 = false;
  };
  if (controller_v_277) {
    sub_47 = false;
  } else {
    sub_47 = sub_48;
  };
  sub_54 = sub_16;
  if (controller_cleaner) {
    v_792 = sub_54;
    sub_53 = false;
  } else {
    v_792 = false;
    sub_53 = sub_54;
  };
  if (controller_ck_37_1) {
    v_793 = v_792;
  } else {
    v_793 = sub_53;
  };
  if (controller_c_window) {
    sub_52 = v_793;
  } else {
    sub_52 = false;
  };
  sub_51 = sub_52;
  if (controller_v_277) {
    sub_50 = false;
  } else {
    sub_50 = sub_51;
  };
  if (controller_v_276) {
    v_794 = sub_50;
  } else {
    v_794 = sub_47;
  };
  if (controller_c_air_2) {
    v_797 = v_794;
  } else {
    v_797 = v_796;
  };
  if (controller_v_277) {
    v_791 = sub_51;
  } else {
    v_791 = sub_48;
  };
  if (controller_v_276) {
    sub_55 = v_791;
  } else {
    sub_55 = sub_50;
  };
  if (controller_c_air_1) {
    sub_46 = v_797;
  } else {
    sub_46 = sub_55;
  };
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  if (controller_air_failed_recovered) {
    v_806 = sub_42;
    sub_3 = sub_4;
  } else {
    v_806 = sub_4;
    sub_3 = sub_42;
  };
  if (controller_ck_46_1) {
    sub_2 = v_806;
  } else {
    sub_2 = sub_3;
  };
  if (controller_c_pc) {
    sub_73 = sub_23;
  } else {
    sub_73 = sub_19;
  };
  if (controller_c_door) {
    sub_72 = sub_73;
    sub_74 = false;
  } else {
    sub_72 = false;
    sub_74 = sub_73;
  };
  if (controller_ck_39_1) {
    sub_71 = sub_74;
  } else {
    sub_71 = sub_72;
  };
  if (controller_c_pc) {
    sub_77 = sub_32;
  } else {
    sub_77 = sub_28;
  };
  if (controller_c_door) {
    sub_76 = sub_77;
    sub_78 = false;
  } else {
    sub_76 = false;
    sub_78 = sub_77;
  };
  if (controller_ck_39_1) {
    sub_75 = sub_78;
  } else {
    sub_75 = sub_76;
  };
  if (controller_closet_failed_recovered) {
    v_787 = sub_75;
    sub_70 = sub_71;
  } else {
    v_787 = sub_71;
    sub_70 = sub_75;
  };
  if (controller_ck_53_1) {
    sub_69 = v_787;
  } else {
    sub_69 = sub_70;
  };
  sub_79 = sub_71;
  if (controller_cleaner) {
    v_788 = sub_79;
    sub_68 = sub_69;
  } else {
    v_788 = sub_69;
    sub_68 = sub_79;
  };
  if (controller_ck_37_1) {
    sub_67 = v_788;
  } else {
    sub_67 = sub_68;
  };
  if (controller_c_window) {
    sub_66 = sub_67;
  } else {
    sub_66 = false;
  };
  sub_65 = sub_66;
  sub_64 = sub_65;
  sub_63 = sub_64;
  if (controller_c_window) {
    sub_83 = false;
  } else {
    sub_83 = sub_67;
  };
  sub_82 = sub_83;
  sub_81 = sub_82;
  sub_80 = sub_81;
  if (controller_blind_failed_recovered) {
    v_789 = sub_80;
    sub_62 = sub_63;
  } else {
    v_789 = sub_63;
    sub_62 = sub_80;
  };
  if (controller_ck_63_1) {
    sub_61 = v_789;
  } else {
    sub_61 = sub_62;
  };
  sub_60 = sub_61;
  sub_59 = sub_60;
  sub_58 = sub_59;
  sub_95 = sub_73;
  sub_94 = sub_95;
  if (controller_cleaner) {
    v_782 = sub_94;
    sub_93 = false;
  } else {
    v_782 = false;
    sub_93 = sub_94;
  };
  if (controller_ck_37_1) {
    sub_92 = v_782;
  } else {
    sub_92 = sub_93;
  };
  sub_91 = sub_92;
  sub_90 = sub_91;
  if (controller_v_277) {
    v_784 = false;
  } else {
    v_784 = sub_90;
  };
  if (controller_v_276) {
    v_785 = v_784;
  } else {
    v_785 = sub_90;
  };
  if (controller_v_277) {
    sub_89 = sub_90;
  } else {
    sub_89 = false;
  };
  if (controller_ck_39_1) {
    sub_102 = sub_72;
    sub_103 = sub_76;
  } else {
    sub_102 = sub_74;
    sub_103 = sub_78;
  };
  if (controller_closet_failed_recovered) {
    v_779 = sub_103;
    sub_101 = sub_102;
  } else {
    v_779 = sub_102;
    sub_101 = sub_103;
  };
  if (controller_ck_53_1) {
    sub_100 = v_779;
  } else {
    sub_100 = sub_101;
  };
  if (controller_cleaner) {
    v_780 = false;
    sub_99 = sub_100;
  } else {
    v_780 = sub_100;
    sub_99 = false;
  };
  if (controller_ck_37_1) {
    v_781 = v_780;
  } else {
    v_781 = sub_99;
  };
  if (controller_c_window) {
    sub_98 = v_781;
  } else {
    sub_98 = false;
  };
  sub_97 = sub_98;
  if (controller_v_277) {
    sub_96 = sub_90;
  } else {
    sub_96 = sub_97;
  };
  if (controller_v_276) {
    v_783 = sub_96;
  } else {
    v_783 = sub_89;
  };
  if (controller_c_air_2) {
    v_786 = v_783;
  } else {
    v_786 = v_785;
  };
  if (controller_v_277) {
    v = sub_97;
  } else {
    v = false;
  };
  if (controller_v_276) {
    sub_104 = v;
  } else {
    sub_104 = sub_96;
  };
  if (controller_c_air_1) {
    sub_88 = v_786;
  } else {
    sub_88 = sub_104;
  };
  sub_87 = sub_88;
  sub_86 = sub_87;
  sub_85 = sub_86;
  sub_84 = sub_85;
  if (controller_air_failed_recovered) {
    v_790 = sub_84;
    sub_57 = sub_58;
  } else {
    v_790 = sub_58;
    sub_57 = sub_84;
  };
  if (controller_ck_46_1) {
    sub_56 = v_790;
  } else {
    sub_56 = sub_57;
  };
  if (controller_worker) {
    v_807 = sub_56;
    sub_1 = sub_2;
  } else {
    v_807 = sub_2;
    sub_1 = sub_56;
  };
  if (controller_ck_35_1) {
    sub_0 = v_807;
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
  int controller_pnr_19, int controller_ck_35_1, int controller_pnr_18,
  int controller_ck_37_1, int controller_pnr_17, int controller_ck_39_1,
  int controller_pnr_16, int controller_ck_41_1, int controller_pnr_15,
  int controller_v_277, int controller_v_276, int controller_pnr_14,
  int controller_ck_46_1, int controller_pnr_13, int controller_ck_48_1,
  int controller_pnr_12, int controller_ck_51_1, int controller_pnr_11,
  int controller_ck_53_1, int controller_pnr_10, int controller_ck_56_1,
  int controller_pnr_9, int controller_ck_58_1, int controller_pnr_8,
  int controller_ck_61_1, int controller_pnr_7, int controller_ck_63_1,
  int controller_pnr, int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_air_1, int controller_c_window,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_2_out* _out) {
  
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
  sub_21 = false;
  sub_20 = sub_21;
  sub_19 = sub_20;
  if (controller_ck_41_1) {
    sub_18 = sub_19;
    sub_22 = false;
  } else {
    sub_18 = false;
    sub_22 = sub_19;
  };
  if (controller_c_pc) {
    sub_17 = sub_18;
  } else {
    sub_17 = sub_22;
  };
  if (controller_c_door) {
    sub_16 = false;
    sub_23 = sub_17;
  } else {
    sub_16 = sub_17;
    sub_23 = false;
  };
  if (controller_ck_39_1) {
    sub_15 = sub_23;
  } else {
    sub_15 = sub_16;
  };
  sub_14 = sub_15;
  if (controller_ck_39_1) {
    sub_25 = sub_16;
  } else {
    sub_25 = sub_23;
  };
  sub_24 = sub_25;
  if (controller_cleaner) {
    v_840 = sub_24;
    sub_13 = sub_14;
  } else {
    v_840 = sub_14;
    sub_13 = sub_24;
  };
  if (controller_ck_37_1) {
    v_841 = v_840;
  } else {
    v_841 = sub_13;
  };
  if (controller_c_window) {
    sub_12 = v_841;
  } else {
    sub_12 = false;
  };
  sub_11 = sub_12;
  sub_10 = sub_11;
  if (controller_cleaner) {
    v_838 = sub_24;
    sub_30 = sub_14;
    sub_31 = false;
  } else {
    v_838 = false;
    sub_30 = false;
    sub_31 = sub_14;
  };
  if (controller_ck_37_1) {
    sub_29 = sub_31;
  } else {
    sub_29 = sub_30;
  };
  if (controller_cleaner) {
    sub_32 = false;
  } else {
    sub_32 = sub_24;
  };
  if (controller_ck_37_1) {
    v_839 = v_838;
  } else {
    v_839 = sub_32;
  };
  if (controller_c_window) {
    sub_28 = sub_29;
  } else {
    sub_28 = v_839;
  };
  sub_27 = sub_28;
  sub_26 = sub_27;
  if (controller_blind_failed_recovered) {
    v_842 = sub_26;
    sub_9 = sub_10;
  } else {
    v_842 = sub_10;
    sub_9 = sub_26;
  };
  if (controller_ck_63_1) {
    sub_8 = v_842;
  } else {
    sub_8 = sub_9;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_51 = true;
  sub_50 = sub_51;
  sub_49 = sub_50;
  if (controller_ck_41_1) {
    sub_48 = sub_49;
    sub_52 = false;
  } else {
    sub_48 = false;
    sub_52 = sub_49;
  };
  if (controller_c_pc) {
    sub_47 = sub_48;
  } else {
    sub_47 = sub_52;
  };
  if (controller_c_door) {
    sub_46 = false;
    sub_53 = sub_47;
  } else {
    sub_46 = sub_47;
    sub_53 = false;
  };
  if (controller_ck_39_1) {
    sub_45 = sub_53;
  } else {
    sub_45 = sub_46;
  };
  sub_44 = sub_45;
  if (controller_cleaner) {
    sub_43 = sub_44;
    sub_54 = false;
  } else {
    sub_43 = false;
    sub_54 = sub_44;
  };
  if (controller_ck_37_1) {
    sub_42 = sub_54;
  } else {
    sub_42 = sub_43;
  };
  if (controller_c_window) {
    sub_41 = sub_42;
  } else {
    sub_41 = false;
  };
  sub_40 = sub_41;
  if (controller_v_277) {
    sub_39 = false;
  } else {
    sub_39 = sub_40;
  };
  if (controller_ck_37_1) {
    v_834 = sub_43;
  } else {
    v_834 = sub_54;
  };
  if (controller_c_window) {
    sub_56 = v_834;
  } else {
    sub_56 = false;
  };
  sub_55 = sub_56;
  if (controller_c_window) {
    sub_58 = sub_29;
  } else {
    sub_58 = false;
  };
  sub_57 = sub_58;
  if (controller_v_277) {
    v_835 = sub_57;
  } else {
    v_835 = sub_55;
  };
  if (controller_v_276) {
    sub_38 = v_835;
  } else {
    sub_38 = sub_39;
  };
  if (controller_ck_37_1) {
    v_833 = sub_30;
  } else {
    v_833 = sub_31;
  };
  if (controller_c_window) {
    sub_61 = v_833;
  } else {
    sub_61 = false;
  };
  sub_60 = sub_61;
  if (controller_v_277) {
    v_836 = sub_60;
    sub_59 = false;
  } else {
    v_836 = sub_57;
    sub_59 = sub_60;
  };
  if (controller_v_276) {
    v_837 = v_836;
  } else {
    v_837 = sub_59;
  };
  if (controller_c_air_1) {
    sub_37 = sub_38;
  } else {
    sub_37 = v_837;
  };
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  if (controller_air_failed_recovered) {
    v_843 = sub_33;
    sub_4 = sub_5;
  } else {
    v_843 = sub_5;
    sub_4 = sub_33;
  };
  if (controller_ck_46_1) {
    sub_3 = v_843;
  } else {
    sub_3 = sub_4;
  };
  if (controller_c_pc) {
    sub_76 = sub_22;
  } else {
    sub_76 = sub_18;
  };
  if (controller_c_door) {
    sub_75 = sub_76;
    sub_77 = false;
  } else {
    sub_75 = false;
    sub_77 = sub_76;
  };
  if (controller_ck_39_1) {
    sub_74 = sub_77;
  } else {
    sub_74 = sub_75;
  };
  sub_73 = sub_74;
  sub_72 = sub_73;
  if (controller_c_window) {
    sub_71 = sub_72;
  } else {
    sub_71 = false;
  };
  sub_70 = sub_71;
  sub_69 = sub_70;
  if (controller_c_window) {
    sub_80 = false;
  } else {
    sub_80 = sub_72;
  };
  sub_79 = sub_80;
  sub_78 = sub_79;
  if (controller_blind_failed_recovered) {
    v_831 = sub_78;
    sub_68 = sub_69;
  } else {
    v_831 = sub_69;
    sub_68 = sub_78;
  };
  if (controller_ck_63_1) {
    sub_67 = v_831;
  } else {
    sub_67 = sub_68;
  };
  sub_66 = sub_67;
  sub_65 = sub_66;
  sub_64 = sub_65;
  sub_91 = sub_76;
  sub_90 = sub_91;
  if (controller_cleaner) {
    v_827 = sub_90;
    sub_89 = false;
  } else {
    v_827 = false;
    sub_89 = sub_90;
  };
  if (controller_ck_37_1) {
    sub_88 = v_827;
  } else {
    sub_88 = sub_89;
  };
  sub_87 = sub_88;
  sub_86 = sub_87;
  if (controller_c_pc) {
    sub_99 = sub_52;
  } else {
    sub_99 = sub_48;
  };
  if (controller_c_door) {
    sub_98 = false;
    sub_100 = sub_99;
  } else {
    sub_98 = sub_99;
    sub_100 = false;
  };
  if (controller_ck_39_1) {
    sub_97 = sub_100;
  } else {
    sub_97 = sub_98;
  };
  sub_96 = sub_97;
  if (controller_cleaner) {
    v_825 = sub_90;
    sub_95 = sub_96;
  } else {
    v_825 = sub_96;
    sub_95 = sub_90;
  };
  if (controller_ck_37_1) {
    v_826 = v_825;
  } else {
    v_826 = sub_95;
  };
  if (controller_c_window) {
    sub_94 = v_826;
  } else {
    sub_94 = sub_88;
  };
  sub_93 = sub_94;
  sub_106 = sub_99;
  sub_105 = sub_106;
  if (controller_cleaner) {
    v_824 = sub_105;
    sub_104 = false;
  } else {
    v_824 = false;
    sub_104 = sub_105;
  };
  if (controller_ck_37_1) {
    sub_103 = v_824;
  } else {
    sub_103 = sub_104;
  };
  sub_102 = sub_103;
  sub_101 = sub_102;
  if (controller_v_277) {
    sub_92 = sub_101;
  } else {
    sub_92 = sub_93;
  };
  if (controller_v_276) {
    v_828 = sub_92;
  } else {
    v_828 = sub_86;
  };
  if (controller_ck_39_1) {
    sub_112 = sub_75;
  } else {
    sub_112 = sub_77;
  };
  sub_111 = sub_112;
  if (controller_cleaner) {
    v_822 = false;
    sub_110 = sub_111;
  } else {
    v_822 = sub_111;
    sub_110 = false;
  };
  if (controller_ck_37_1) {
    v_823 = v_822;
  } else {
    v_823 = sub_110;
  };
  if (controller_c_window) {
    sub_109 = v_823;
  } else {
    sub_109 = false;
  };
  sub_108 = sub_109;
  if (controller_v_277) {
    v_829 = sub_108;
    sub_107 = sub_86;
  } else {
    v_829 = false;
    sub_107 = sub_108;
  };
  if (controller_v_276) {
    v_830 = v_829;
  } else {
    v_830 = sub_107;
  };
  if (controller_c_air_1) {
    sub_85 = v_828;
  } else {
    sub_85 = v_830;
  };
  sub_84 = sub_85;
  sub_83 = sub_84;
  sub_82 = sub_83;
  sub_81 = sub_82;
  if (controller_air_failed_recovered) {
    v_832 = sub_81;
    sub_63 = sub_64;
  } else {
    v_832 = sub_64;
    sub_63 = sub_81;
  };
  if (controller_ck_46_1) {
    sub_62 = v_832;
  } else {
    sub_62 = sub_63;
  };
  if (controller_worker) {
    v_844 = sub_62;
    sub_2 = sub_3;
  } else {
    v_844 = sub_3;
    sub_2 = sub_62;
  };
  if (controller_ck_35_1) {
    sub_1 = v_844;
  } else {
    sub_1 = sub_2;
  };
  if (controller_ck_39_1) {
    sub_126 = sub_46;
  } else {
    sub_126 = sub_53;
  };
  sub_125 = sub_126;
  if (controller_cleaner) {
    v_818 = sub_125;
    sub_124 = sub_44;
  } else {
    v_818 = sub_44;
    sub_124 = sub_125;
  };
  if (controller_ck_37_1) {
    v_819 = v_818;
  } else {
    v_819 = sub_124;
  };
  if (controller_c_window) {
    sub_123 = v_819;
  } else {
    sub_123 = false;
  };
  sub_122 = sub_123;
  sub_121 = sub_122;
  if (controller_cleaner) {
    v_816 = sub_125;
    sub_130 = false;
  } else {
    v_816 = false;
    sub_130 = sub_125;
  };
  if (controller_ck_37_1) {
    v_817 = v_816;
  } else {
    v_817 = sub_130;
  };
  if (controller_c_window) {
    sub_129 = sub_42;
  } else {
    sub_129 = v_817;
  };
  sub_128 = sub_129;
  sub_127 = sub_128;
  if (controller_blind_failed_recovered) {
    v_820 = sub_127;
    sub_120 = sub_121;
  } else {
    v_820 = sub_121;
    sub_120 = sub_127;
  };
  if (controller_ck_63_1) {
    sub_119 = v_820;
  } else {
    sub_119 = sub_120;
  };
  sub_118 = sub_119;
  sub_117 = sub_118;
  sub_116 = sub_117;
  if (controller_v_277) {
    v_814 = sub_55;
    sub_136 = false;
  } else {
    v_814 = sub_40;
    sub_136 = sub_55;
  };
  if (controller_v_276) {
    v_815 = v_814;
  } else {
    v_815 = sub_136;
  };
  if (controller_c_air_1) {
    sub_135 = sub_38;
  } else {
    sub_135 = v_815;
  };
  sub_134 = sub_135;
  sub_133 = sub_134;
  sub_132 = sub_133;
  sub_131 = sub_132;
  if (controller_air_failed_recovered) {
    v_821 = sub_131;
    sub_115 = sub_116;
  } else {
    v_821 = sub_116;
    sub_115 = sub_131;
  };
  if (controller_ck_46_1) {
    sub_114 = v_821;
  } else {
    sub_114 = sub_115;
  };
  if (controller_ck_39_1) {
    sub_149 = sub_98;
  } else {
    sub_149 = sub_100;
  };
  sub_148 = sub_149;
  sub_147 = sub_148;
  if (controller_c_window) {
    sub_146 = sub_147;
  } else {
    sub_146 = false;
  };
  sub_145 = sub_146;
  sub_144 = sub_145;
  if (controller_c_window) {
    sub_152 = false;
  } else {
    sub_152 = sub_147;
  };
  sub_151 = sub_152;
  sub_150 = sub_151;
  if (controller_blind_failed_recovered) {
    v_812 = sub_150;
    sub_143 = sub_144;
  } else {
    v_812 = sub_144;
    sub_143 = sub_150;
  };
  if (controller_ck_63_1) {
    sub_142 = v_812;
  } else {
    sub_142 = sub_143;
  };
  sub_141 = sub_142;
  sub_140 = sub_141;
  sub_139 = sub_140;
  if (controller_v_277) {
    sub_158 = sub_101;
  } else {
    sub_158 = sub_86;
  };
  if (controller_v_276) {
    v_809 = sub_92;
  } else {
    v_809 = sub_158;
  };
  if (controller_cleaner) {
    v = false;
    sub_162 = sub_96;
  } else {
    v = sub_96;
    sub_162 = false;
  };
  if (controller_ck_37_1) {
    v_808 = v;
  } else {
    v_808 = sub_162;
  };
  if (controller_c_window) {
    sub_161 = v_808;
  } else {
    sub_161 = false;
  };
  sub_160 = sub_161;
  if (controller_v_277) {
    v_810 = sub_160;
    sub_159 = sub_101;
  } else {
    v_810 = false;
    sub_159 = sub_160;
  };
  if (controller_v_276) {
    v_811 = v_810;
  } else {
    v_811 = sub_159;
  };
  if (controller_c_air_1) {
    sub_157 = v_809;
  } else {
    sub_157 = v_811;
  };
  sub_156 = sub_157;
  sub_155 = sub_156;
  sub_154 = sub_155;
  sub_153 = sub_154;
  if (controller_air_failed_recovered) {
    v_813 = sub_153;
    sub_138 = sub_139;
  } else {
    v_813 = sub_139;
    sub_138 = sub_153;
  };
  if (controller_ck_46_1) {
    sub_137 = v_813;
  } else {
    sub_137 = sub_138;
  };
  if (controller_worker) {
    v_845 = sub_137;
    sub_113 = sub_114;
  } else {
    v_845 = sub_114;
    sub_113 = sub_137;
  };
  if (controller_ck_35_1) {
    v_846 = v_845;
  } else {
    v_846 = sub_113;
  };
  if (p_controller_c_air_2) {
    sub_0 = v_846;
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
  int controller_pnr_19, int controller_ck_35_1, int controller_pnr_18,
  int controller_ck_37_1, int controller_pnr_17, int controller_ck_39_1,
  int controller_pnr_16, int controller_ck_41_1, int controller_pnr_15,
  int controller_v_277, int controller_v_276, int controller_pnr_14,
  int controller_ck_46_1, int controller_pnr_13, int controller_ck_48_1,
  int controller_pnr_12, int controller_ck_51_1, int controller_pnr_11,
  int controller_ck_53_1, int controller_pnr_10, int controller_ck_56_1,
  int controller_pnr_9, int controller_ck_58_1, int controller_pnr_8,
  int controller_ck_61_1, int controller_pnr_7, int controller_ck_63_1,
  int controller_pnr, int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_1_out* _out) {
  
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
  sub_20 = false;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_23 = true;
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (p_controller_c_air_1) {
    sub_17 = sub_21;
  } else {
    sub_17 = sub_18;
  };
  if (controller_ck_41_1) {
    sub_16 = sub_17;
    sub_24 = false;
  } else {
    sub_16 = false;
    sub_24 = sub_17;
  };
  if (controller_c_pc) {
    sub_15 = sub_16;
  } else {
    sub_15 = sub_24;
  };
  if (controller_c_door) {
    sub_14 = false;
    sub_25 = sub_15;
  } else {
    sub_14 = sub_15;
    sub_25 = false;
  };
  if (controller_ck_39_1) {
    sub_13 = sub_25;
  } else {
    sub_13 = sub_14;
  };
  sub_12 = sub_13;
  if (controller_ck_39_1) {
    sub_27 = sub_14;
  } else {
    sub_27 = sub_25;
  };
  sub_26 = sub_27;
  if (controller_cleaner) {
    v_867 = sub_26;
    sub_11 = sub_12;
  } else {
    v_867 = sub_12;
    sub_11 = sub_26;
  };
  if (controller_ck_37_1) {
    v_868 = v_867;
  } else {
    v_868 = sub_11;
  };
  if (controller_c_window) {
    sub_10 = v_868;
  } else {
    sub_10 = false;
  };
  sub_9 = sub_10;
  if (controller_cleaner) {
    v_865 = sub_26;
    v_863 = false;
    sub_30 = sub_12;
  } else {
    v_865 = false;
    v_863 = sub_12;
    sub_30 = false;
  };
  if (controller_ck_37_1) {
    v_864 = v_863;
  } else {
    v_864 = sub_30;
  };
  if (controller_cleaner) {
    sub_31 = false;
  } else {
    sub_31 = sub_26;
  };
  if (controller_ck_37_1) {
    v_866 = v_865;
  } else {
    v_866 = sub_31;
  };
  if (controller_c_window) {
    sub_29 = v_864;
  } else {
    sub_29 = v_866;
  };
  sub_28 = sub_29;
  if (controller_blind_failed_recovered) {
    v_869 = sub_28;
    sub_8 = sub_9;
  } else {
    v_869 = sub_9;
    sub_8 = sub_28;
  };
  if (controller_ck_63_1) {
    sub_7 = v_869;
  } else {
    sub_7 = sub_8;
  };
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  if (controller_ck_41_1) {
    sub_45 = sub_21;
    sub_46 = false;
  } else {
    sub_45 = false;
    sub_46 = sub_21;
  };
  if (controller_c_pc) {
    sub_44 = sub_45;
  } else {
    sub_44 = sub_46;
  };
  if (controller_c_door) {
    v_860 = sub_44;
    sub_43 = false;
  } else {
    v_860 = false;
    sub_43 = sub_44;
  };
  if (controller_ck_39_1) {
    sub_42 = v_860;
  } else {
    sub_42 = sub_43;
  };
  sub_41 = sub_42;
  if (controller_ck_41_1) {
    sub_51 = sub_18;
    sub_52 = false;
  } else {
    sub_51 = false;
    sub_52 = sub_18;
  };
  if (controller_c_pc) {
    sub_50 = sub_51;
  } else {
    sub_50 = sub_52;
  };
  if (controller_c_door) {
    v_859 = sub_50;
    sub_49 = false;
  } else {
    v_859 = false;
    sub_49 = sub_50;
  };
  if (controller_ck_39_1) {
    sub_48 = v_859;
  } else {
    sub_48 = sub_49;
  };
  sub_47 = sub_48;
  if (controller_cleaner) {
    sub_40 = sub_41;
    sub_53 = sub_47;
  } else {
    sub_40 = sub_47;
    sub_53 = sub_41;
  };
  if (controller_ck_37_1) {
    v_861 = sub_53;
  } else {
    v_861 = sub_40;
  };
  if (controller_c_window) {
    sub_39 = v_861;
  } else {
    sub_39 = false;
  };
  sub_38 = sub_39;
  if (controller_v_277) {
    sub_37 = false;
  } else {
    sub_37 = sub_38;
  };
  if (controller_ck_37_1) {
    v_858 = sub_40;
  } else {
    v_858 = sub_53;
  };
  if (controller_c_window) {
    sub_55 = v_858;
  } else {
    sub_55 = false;
  };
  sub_54 = sub_55;
  if (controller_v_277) {
    v_862 = sub_38;
  } else {
    v_862 = sub_54;
  };
  if (controller_v_276) {
    sub_36 = v_862;
  } else {
    sub_36 = sub_37;
  };
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  if (controller_air_failed_recovered) {
    v_870 = sub_32;
    sub_3 = sub_4;
  } else {
    v_870 = sub_4;
    sub_3 = sub_32;
  };
  if (controller_ck_46_1) {
    sub_2 = v_870;
  } else {
    sub_2 = sub_3;
  };
  if (controller_c_pc) {
    sub_69 = sub_24;
  } else {
    sub_69 = sub_16;
  };
  if (controller_c_door) {
    v_855 = false;
    sub_68 = sub_69;
  } else {
    v_855 = sub_69;
    sub_68 = false;
  };
  if (controller_ck_39_1) {
    sub_67 = v_855;
  } else {
    sub_67 = sub_68;
  };
  sub_66 = sub_67;
  sub_65 = sub_66;
  if (controller_c_window) {
    sub_64 = sub_65;
  } else {
    sub_64 = false;
  };
  sub_63 = sub_64;
  if (controller_c_window) {
    sub_71 = false;
  } else {
    sub_71 = sub_65;
  };
  sub_70 = sub_71;
  if (controller_blind_failed_recovered) {
    v_856 = sub_70;
    sub_62 = sub_63;
  } else {
    v_856 = sub_63;
    sub_62 = sub_70;
  };
  if (controller_ck_63_1) {
    sub_61 = v_856;
  } else {
    sub_61 = sub_62;
  };
  sub_60 = sub_61;
  sub_59 = sub_60;
  sub_58 = sub_59;
  if (controller_c_pc) {
    sub_84 = sub_52;
  } else {
    sub_84 = sub_51;
  };
  if (controller_c_door) {
    v_851 = sub_84;
    sub_83 = false;
  } else {
    v_851 = false;
    sub_83 = sub_84;
  };
  if (controller_ck_39_1) {
    sub_82 = v_851;
  } else {
    sub_82 = sub_83;
  };
  sub_81 = sub_82;
  if (controller_c_pc) {
    sub_87 = sub_46;
  } else {
    sub_87 = sub_45;
  };
  sub_86 = sub_87;
  sub_85 = sub_86;
  if (controller_cleaner) {
    v_852 = sub_85;
    sub_80 = sub_81;
  } else {
    v_852 = sub_81;
    sub_80 = sub_85;
  };
  if (controller_ck_37_1) {
    v_853 = v_852;
  } else {
    v_853 = sub_80;
  };
  if (controller_cleaner) {
    v_850 = sub_85;
    sub_89 = false;
  } else {
    v_850 = false;
    sub_89 = sub_85;
  };
  if (controller_ck_37_1) {
    sub_88 = v_850;
  } else {
    sub_88 = sub_89;
  };
  if (controller_c_window) {
    sub_79 = v_853;
  } else {
    sub_79 = sub_88;
  };
  sub_78 = sub_79;
  sub_94 = sub_69;
  sub_93 = sub_94;
  if (controller_cleaner) {
    v_849 = sub_93;
    sub_92 = false;
  } else {
    v_849 = false;
    sub_92 = sub_93;
  };
  if (controller_ck_37_1) {
    sub_91 = v_849;
  } else {
    sub_91 = sub_92;
  };
  sub_90 = sub_91;
  if (controller_v_277) {
    sub_77 = sub_90;
  } else {
    sub_77 = sub_78;
  };
  if (controller_c_door) {
    v = sub_87;
    sub_100 = false;
  } else {
    v = false;
    sub_100 = sub_87;
  };
  if (controller_ck_39_1) {
    sub_99 = v;
  } else {
    sub_99 = sub_100;
  };
  sub_98 = sub_99;
  if (controller_cleaner) {
    v_847 = sub_85;
    sub_97 = sub_98;
  } else {
    v_847 = sub_98;
    sub_97 = sub_85;
  };
  if (controller_ck_37_1) {
    v_848 = v_847;
  } else {
    v_848 = sub_97;
  };
  if (controller_c_window) {
    sub_96 = v_848;
  } else {
    sub_96 = sub_88;
  };
  sub_95 = sub_96;
  if (controller_v_277) {
    v_854 = sub_78;
  } else {
    v_854 = sub_95;
  };
  if (controller_v_276) {
    sub_76 = v_854;
  } else {
    sub_76 = sub_77;
  };
  sub_75 = sub_76;
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_72 = sub_73;
  if (controller_air_failed_recovered) {
    v_857 = sub_72;
    sub_57 = sub_58;
  } else {
    v_857 = sub_58;
    sub_57 = sub_72;
  };
  if (controller_ck_46_1) {
    sub_56 = v_857;
  } else {
    sub_56 = sub_57;
  };
  if (controller_worker) {
    v_871 = sub_56;
    sub_1 = sub_2;
  } else {
    v_871 = sub_2;
    sub_1 = sub_56;
  };
  if (controller_ck_35_1) {
    sub_0 = v_871;
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
  int controller_pnr_19, int controller_ck_35_1, int controller_pnr_18,
  int controller_ck_37_1, int controller_pnr_17, int controller_ck_39_1,
  int controller_pnr_16, int controller_ck_41_1, int controller_pnr_15,
  int controller_v_277, int controller_v_276, int controller_pnr_14,
  int controller_ck_46_1, int controller_pnr_13, int controller_ck_48_1,
  int controller_pnr_12, int controller_ck_51_1, int controller_pnr_11,
  int controller_ck_53_1, int controller_pnr_10, int controller_ck_56_1,
  int controller_pnr_9, int controller_ck_58_1, int controller_pnr_8,
  int controller_ck_61_1, int controller_pnr_7, int controller_ck_63_1,
  int controller_pnr, int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_window_out* _out) {
  
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
  sub_19 = true;
  sub_18 = sub_19;
  sub_17 = sub_18;
  if (controller_ck_41_1) {
    sub_16 = sub_17;
    sub_20 = false;
  } else {
    sub_16 = false;
    sub_20 = sub_17;
  };
  if (controller_c_pc) {
    sub_15 = sub_16;
  } else {
    sub_15 = sub_20;
  };
  if (controller_c_door) {
    sub_14 = false;
    sub_21 = sub_15;
  } else {
    sub_14 = sub_15;
    sub_21 = false;
  };
  if (controller_ck_39_1) {
    sub_13 = sub_21;
  } else {
    sub_13 = sub_14;
  };
  sub_12 = sub_13;
  if (controller_ck_39_1) {
    sub_23 = sub_14;
  } else {
    sub_23 = sub_21;
  };
  sub_22 = sub_23;
  if (controller_cleaner) {
    v_881 = sub_22;
    sub_11 = sub_12;
  } else {
    v_881 = sub_12;
    sub_11 = sub_22;
  };
  if (controller_ck_37_1) {
    sub_10 = v_881;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  sub_34 = false;
  sub_33 = sub_34;
  sub_32 = sub_33;
  if (controller_ck_41_1) {
    sub_31 = sub_32;
    sub_35 = false;
  } else {
    sub_31 = false;
    sub_35 = sub_32;
  };
  if (controller_c_pc) {
    sub_30 = sub_31;
  } else {
    sub_30 = sub_35;
  };
  if (controller_c_door) {
    v_879 = false;
    sub_29 = sub_30;
  } else {
    v_879 = sub_30;
    sub_29 = false;
  };
  if (controller_ck_39_1) {
    sub_28 = v_879;
  } else {
    sub_28 = sub_29;
  };
  sub_27 = sub_28;
  if (controller_cleaner) {
    v_880 = sub_27;
    sub_26 = sub_12;
  } else {
    v_880 = sub_12;
    sub_26 = sub_27;
  };
  if (controller_ck_37_1) {
    sub_25 = v_880;
  } else {
    sub_25 = sub_26;
  };
  sub_24 = sub_25;
  if (controller_blind_failed_recovered) {
    v_882 = sub_24;
    sub_8 = sub_9;
  } else {
    v_882 = sub_9;
    sub_8 = sub_24;
  };
  if (controller_ck_63_1) {
    sub_7 = v_882;
  } else {
    sub_7 = sub_8;
  };
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_43 = sub_12;
  sub_42 = sub_43;
  if (controller_v_277) {
    sub_41 = false;
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
    v_883 = sub_36;
    sub_3 = sub_4;
  } else {
    v_883 = sub_4;
    sub_3 = sub_36;
  };
  if (controller_ck_46_1) {
    sub_2 = v_883;
  } else {
    sub_2 = sub_3;
  };
  if (controller_c_pc) {
    sub_56 = sub_20;
  } else {
    sub_56 = sub_16;
  };
  if (controller_c_door) {
    sub_55 = sub_56;
    sub_57 = false;
  } else {
    sub_55 = false;
    sub_57 = sub_56;
  };
  if (controller_ck_39_1) {
    sub_54 = sub_57;
  } else {
    sub_54 = sub_55;
  };
  sub_53 = sub_54;
  sub_52 = sub_53;
  sub_51 = sub_52;
  if (controller_c_pc) {
    sub_63 = sub_35;
  } else {
    sub_63 = sub_31;
  };
  if (controller_c_door) {
    v_876 = false;
    sub_62 = sub_63;
  } else {
    v_876 = sub_63;
    sub_62 = false;
  };
  if (controller_ck_39_1) {
    sub_61 = v_876;
  } else {
    sub_61 = sub_62;
  };
  sub_60 = sub_61;
  sub_59 = sub_60;
  sub_58 = sub_59;
  if (controller_blind_failed_recovered) {
    v_877 = sub_58;
    sub_50 = sub_51;
  } else {
    v_877 = sub_51;
    sub_50 = sub_58;
  };
  if (controller_ck_63_1) {
    sub_49 = v_877;
  } else {
    sub_49 = sub_50;
  };
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  if (controller_ck_39_1) {
    sub_75 = sub_55;
  } else {
    sub_75 = sub_57;
  };
  sub_74 = sub_75;
  sub_77 = sub_63;
  sub_76 = sub_77;
  if (controller_cleaner) {
    v_874 = sub_76;
    sub_73 = sub_74;
  } else {
    v_874 = sub_74;
    sub_73 = sub_76;
  };
  if (controller_ck_37_1) {
    sub_72 = v_874;
  } else {
    sub_72 = sub_73;
  };
  sub_71 = sub_72;
  sub_81 = sub_56;
  sub_80 = sub_81;
  if (controller_cleaner) {
    v_873 = sub_80;
    sub_79 = sub_74;
  } else {
    v_873 = sub_74;
    sub_79 = sub_80;
  };
  if (controller_ck_37_1) {
    sub_78 = v_873;
  } else {
    sub_78 = sub_79;
  };
  if (p_controller_c_window) {
    sub_70 = sub_78;
  } else {
    sub_70 = sub_71;
  };
  if (controller_cleaner) {
    v_872 = sub_76;
    sub_84 = false;
  } else {
    v_872 = false;
    sub_84 = sub_76;
  };
  if (controller_ck_37_1) {
    sub_83 = v_872;
  } else {
    sub_83 = sub_84;
  };
  sub_82 = sub_83;
  if (controller_cleaner) {
    v = sub_80;
    sub_86 = false;
  } else {
    v = false;
    sub_86 = sub_80;
  };
  if (controller_ck_37_1) {
    sub_85 = v;
  } else {
    sub_85 = sub_86;
  };
  if (p_controller_c_window) {
    v_875 = sub_85;
  } else {
    v_875 = sub_82;
  };
  if (controller_v_277) {
    sub_69 = v_875;
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
  if (controller_air_failed_recovered) {
    v_878 = sub_64;
    sub_45 = sub_46;
  } else {
    v_878 = sub_46;
    sub_45 = sub_64;
  };
  if (controller_ck_46_1) {
    sub_44 = v_878;
  } else {
    sub_44 = sub_45;
  };
  if (controller_worker) {
    v_884 = sub_44;
    sub_1 = sub_2;
  } else {
    v_884 = sub_2;
    sub_1 = sub_44;
  };
  if (controller_ck_35_1) {
    sub_0 = v_884;
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
  int controller_pnr_19, int controller_ck_35_1, int controller_pnr_18,
  int controller_ck_37_1, int controller_pnr_17, int controller_ck_39_1,
  int controller_pnr_16, int controller_ck_41_1, int controller_pnr_15,
  int controller_v_277, int controller_v_276, int controller_pnr_14,
  int controller_ck_46_1, int controller_pnr_13, int controller_ck_48_1,
  int controller_pnr_12, int controller_ck_51_1, int controller_pnr_11,
  int controller_ck_53_1, int controller_pnr_10, int controller_ck_56_1,
  int controller_pnr_9, int controller_ck_58_1, int controller_pnr_8,
  int controller_ck_61_1, int controller_pnr_7, int controller_ck_63_1,
  int controller_pnr, int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_door,
  Controller_controller__controller_controller_controller_c_pc_out* _out) {
  
  int v_889;
  int v_888;
  int v_887;
  int v_886;
  int v_885;
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
  sub_17 = false;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_20 = true;
  sub_19 = sub_20;
  sub_18 = sub_19;
  if (controller_ck_41_1) {
    sub_14 = sub_18;
  } else {
    sub_14 = sub_15;
  };
  if (controller_c_door) {
    sub_13 = false;
    sub_21 = sub_14;
  } else {
    sub_13 = sub_14;
    sub_21 = false;
  };
  if (controller_ck_39_1) {
    sub_12 = sub_21;
  } else {
    sub_12 = sub_13;
  };
  sub_11 = sub_12;
  if (controller_ck_39_1) {
    sub_23 = sub_13;
  } else {
    sub_23 = sub_21;
  };
  sub_22 = sub_23;
  if (controller_cleaner) {
    v_887 = sub_22;
    sub_10 = sub_11;
  } else {
    v_887 = sub_11;
    sub_10 = sub_22;
  };
  if (controller_ck_37_1) {
    sub_9 = v_887;
  } else {
    sub_9 = sub_10;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_31 = sub_11;
  sub_30 = sub_31;
  if (controller_v_277) {
    sub_29 = false;
  } else {
    sub_29 = sub_30;
  };
  if (controller_v_276) {
    sub_28 = sub_30;
  } else {
    sub_28 = sub_29;
  };
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  if (controller_air_failed_recovered) {
    v_888 = sub_24;
    sub_3 = sub_4;
  } else {
    v_888 = sub_4;
    sub_3 = sub_24;
  };
  if (controller_ck_46_1) {
    sub_2 = v_888;
  } else {
    sub_2 = sub_3;
  };
  if (controller_ck_41_1) {
    sub_43 = sub_15;
  } else {
    sub_43 = sub_18;
  };
  if (controller_c_door) {
    sub_42 = sub_43;
    sub_44 = false;
  } else {
    sub_42 = false;
    sub_44 = sub_43;
  };
  if (controller_ck_39_1) {
    sub_41 = sub_44;
  } else {
    sub_41 = sub_42;
  };
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  if (controller_ck_39_1) {
    sub_55 = sub_42;
  } else {
    sub_55 = sub_44;
  };
  sub_54 = sub_55;
  sub_57 = sub_43;
  sub_56 = sub_57;
  if (controller_cleaner) {
    v_885 = sub_56;
    sub_53 = sub_54;
  } else {
    v_885 = sub_54;
    sub_53 = sub_56;
  };
  if (controller_ck_37_1) {
    sub_52 = v_885;
  } else {
    sub_52 = sub_53;
  };
  sub_51 = sub_52;
  if (controller_cleaner) {
    v = sub_56;
    sub_59 = false;
  } else {
    v = false;
    sub_59 = sub_56;
  };
  if (controller_ck_37_1) {
    sub_58 = v;
  } else {
    sub_58 = sub_59;
  };
  if (controller_v_277) {
    sub_50 = sub_58;
  } else {
    sub_50 = sub_51;
  };
  if (controller_v_276) {
    sub_49 = sub_51;
  } else {
    sub_49 = sub_50;
  };
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  if (controller_air_failed_recovered) {
    v_886 = sub_45;
    sub_33 = sub_34;
  } else {
    v_886 = sub_34;
    sub_33 = sub_45;
  };
  if (controller_ck_46_1) {
    sub_32 = v_886;
  } else {
    sub_32 = sub_33;
  };
  if (controller_worker) {
    v_889 = sub_32;
    sub_1 = sub_2;
  } else {
    v_889 = sub_2;
    sub_1 = sub_32;
  };
  if (controller_ck_35_1) {
    sub_0 = v_889;
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
  int controller_pnr_19, int controller_ck_35_1, int controller_pnr_18,
  int controller_ck_37_1, int controller_pnr_17, int controller_ck_39_1,
  int controller_pnr_16, int controller_ck_41_1, int controller_pnr_15,
  int controller_v_277, int controller_v_276, int controller_pnr_14,
  int controller_ck_46_1, int controller_pnr_13, int controller_ck_48_1,
  int controller_pnr_12, int controller_ck_51_1, int controller_pnr_11,
  int controller_ck_53_1, int controller_pnr_10, int controller_ck_56_1,
  int controller_pnr_9, int controller_ck_58_1, int controller_pnr_8,
  int controller_ck_61_1, int controller_pnr_7, int controller_ck_63_1,
  int controller_pnr, int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door,
  Controller_controller__controller_controller_controller_c_door_out* _out) {
  
  int v_894;
  int v_893;
  int v_892;
  int v_891;
  int v_890;
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
  sub_15 = false;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_18 = true;
  sub_17 = sub_18;
  sub_16 = sub_17;
  if (controller_ck_39_1) {
    sub_12 = sub_16;
  } else {
    sub_12 = sub_13;
  };
  sub_11 = sub_12;
  if (controller_ck_39_1) {
    sub_20 = sub_13;
  } else {
    sub_20 = sub_16;
  };
  sub_19 = sub_20;
  if (controller_cleaner) {
    v_892 = sub_19;
    sub_10 = sub_11;
  } else {
    v_892 = sub_11;
    sub_10 = sub_19;
  };
  if (controller_ck_37_1) {
    sub_9 = v_892;
  } else {
    sub_9 = sub_10;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_28 = sub_11;
  sub_27 = sub_28;
  if (controller_v_277) {
    sub_26 = false;
  } else {
    sub_26 = sub_27;
  };
  if (controller_v_276) {
    sub_25 = sub_27;
  } else {
    sub_25 = sub_26;
  };
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (controller_air_failed_recovered) {
    v_893 = sub_21;
    sub_3 = sub_4;
  } else {
    v_893 = sub_4;
    sub_3 = sub_21;
  };
  if (controller_ck_46_1) {
    sub_2 = v_893;
  } else {
    sub_2 = sub_3;
  };
  sub_36 = sub_19;
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_50 = p_controller_c_door;
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  if (controller_cleaner) {
    v_890 = sub_46;
    sub_45 = sub_11;
  } else {
    v_890 = sub_11;
    sub_45 = sub_46;
  };
  if (controller_ck_37_1) {
    sub_44 = v_890;
  } else {
    sub_44 = sub_45;
  };
  sub_43 = sub_44;
  if (controller_cleaner) {
    v = sub_46;
    sub_52 = false;
  } else {
    v = false;
    sub_52 = sub_46;
  };
  if (controller_ck_37_1) {
    sub_51 = v;
  } else {
    sub_51 = sub_52;
  };
  if (controller_v_277) {
    sub_42 = sub_51;
  } else {
    sub_42 = sub_43;
  };
  if (controller_v_276) {
    sub_41 = sub_43;
  } else {
    sub_41 = sub_42;
  };
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  if (controller_air_failed_recovered) {
    v_891 = sub_37;
    sub_30 = sub_31;
  } else {
    v_891 = sub_31;
    sub_30 = sub_37;
  };
  if (controller_ck_46_1) {
    sub_29 = v_891;
  } else {
    sub_29 = sub_30;
  };
  if (controller_worker) {
    v_894 = sub_29;
    sub_1 = sub_2;
  } else {
    v_894 = sub_2;
    sub_1 = sub_29;
  };
  if (controller_ck_35_1) {
    sub_0 = v_894;
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
                                                       int controller_pnr_19,
                                                       int controller_ck_35_1,
                                                       int controller_pnr_18,
                                                       int controller_ck_37_1,
                                                       int controller_pnr_17,
                                                       int controller_ck_39_1,
                                                       int controller_pnr_16,
                                                       int controller_ck_41_1,
                                                       int controller_pnr_15,
                                                       int controller_v_277,
                                                       int controller_v_276,
                                                       int controller_pnr_14,
                                                       int controller_ck_46_1,
                                                       int controller_pnr_13,
                                                       int controller_ck_48_1,
                                                       int controller_pnr_12,
                                                       int controller_ck_51_1,
                                                       int controller_pnr_11,
                                                       int controller_ck_53_1,
                                                       int controller_pnr_10,
                                                       int controller_ck_56_1,
                                                       int controller_pnr_9,
                                                       int controller_ck_58_1,
                                                       int controller_pnr_8,
                                                       int controller_ck_61_1,
                                                       int controller_pnr_7,
                                                       int controller_ck_63_1,
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
  controller_window_failed_recovered, controller_ck_1, controller_pnr_19,
  controller_ck_35_1, controller_pnr_18, controller_ck_37_1,
  controller_pnr_17, controller_ck_39_1, controller_pnr_16,
  controller_ck_41_1, controller_pnr_15, controller_v_277, controller_v_276,
  controller_pnr_14, controller_ck_46_1, controller_pnr_13,
  controller_ck_48_1, controller_pnr_12, controller_ck_51_1,
  controller_pnr_11, controller_ck_53_1, controller_pnr_10,
  controller_ck_56_1, controller_pnr_9, controller_ck_58_1, controller_pnr_8,
  controller_ck_61_1, controller_pnr_7, controller_ck_63_1, controller_pnr,
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
                                                                    controller_pnr_19,
                                                                    controller_ck_35_1,
                                                                    controller_pnr_18,
                                                                    controller_ck_37_1,
                                                                    controller_pnr_17,
                                                                    controller_ck_39_1,
                                                                    controller_pnr_16,
                                                                    controller_ck_41_1,
                                                                    controller_pnr_15,
                                                                    controller_v_277,
                                                                    controller_v_276,
                                                                    controller_pnr_14,
                                                                    controller_ck_46_1,
                                                                    controller_pnr_13,
                                                                    controller_ck_48_1,
                                                                    controller_pnr_12,
                                                                    controller_ck_51_1,
                                                                    controller_pnr_11,
                                                                    controller_ck_53_1,
                                                                    controller_pnr_10,
                                                                    controller_ck_56_1,
                                                                    controller_pnr_9,
                                                                    controller_ck_58_1,
                                                                    controller_pnr_8,
                                                                    controller_ck_61_1,
                                                                    controller_pnr_7,
                                                                    controller_ck_63_1,
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
  controller_window_failed_recovered, controller_ck_1, controller_pnr_19,
  controller_ck_35_1, controller_pnr_18, controller_ck_37_1,
  controller_pnr_17, controller_ck_39_1, controller_pnr_16,
  controller_ck_41_1, controller_pnr_15, controller_v_277, controller_v_276,
  controller_pnr_14, controller_ck_46_1, controller_pnr_13,
  controller_ck_48_1, controller_pnr_12, controller_ck_51_1,
  controller_pnr_11, controller_ck_53_1, controller_pnr_10,
  controller_ck_56_1, controller_pnr_9, controller_ck_58_1, controller_pnr_8,
  controller_ck_61_1, controller_pnr_7, controller_ck_63_1, controller_pnr,
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
  controller_window_failed_recovered, controller_ck_1, controller_pnr_19,
  controller_ck_35_1, controller_pnr_18, controller_ck_37_1,
  controller_pnr_17, controller_ck_39_1, controller_pnr_16,
  controller_ck_41_1, controller_pnr_15, controller_v_277, controller_v_276,
  controller_pnr_14, controller_ck_46_1, controller_pnr_13,
  controller_ck_48_1, controller_pnr_12, controller_ck_51_1,
  controller_pnr_11, controller_ck_53_1, controller_pnr_10,
  controller_ck_56_1, controller_pnr_9, controller_ck_58_1, controller_pnr_8,
  controller_ck_61_1, controller_pnr_7, controller_ck_63_1, controller_pnr,
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
  controller_window_failed_recovered, controller_ck_1, controller_pnr_19,
  controller_ck_35_1, controller_pnr_18, controller_ck_37_1,
  controller_pnr_17, controller_ck_39_1, controller_pnr_16,
  controller_ck_41_1, controller_pnr_15, controller_v_277, controller_v_276,
  controller_pnr_14, controller_ck_46_1, controller_pnr_13,
  controller_ck_48_1, controller_pnr_12, controller_ck_51_1,
  controller_pnr_11, controller_ck_53_1, controller_pnr_10,
  controller_ck_56_1, controller_pnr_9, controller_ck_58_1, controller_pnr_8,
  controller_ck_61_1, controller_pnr_7, controller_ck_63_1, controller_pnr,
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
  controller_window_failed_recovered, controller_ck_1, controller_pnr_19,
  controller_ck_35_1, controller_pnr_18, controller_ck_37_1,
  controller_pnr_17, controller_ck_39_1, controller_pnr_16,
  controller_ck_41_1, controller_pnr_15, controller_v_277, controller_v_276,
  controller_pnr_14, controller_ck_46_1, controller_pnr_13,
  controller_ck_48_1, controller_pnr_12, controller_ck_51_1,
  controller_pnr_11, controller_ck_53_1, controller_pnr_10,
  controller_ck_56_1, controller_pnr_9, controller_ck_58_1, controller_pnr_8,
  controller_ck_61_1, controller_pnr_7, controller_ck_63_1, controller_pnr,
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
  controller_window_failed_recovered, controller_ck_1, controller_pnr_19,
  controller_ck_35_1, controller_pnr_18, controller_ck_37_1,
  controller_pnr_17, controller_ck_39_1, controller_pnr_16,
  controller_ck_41_1, controller_pnr_15, controller_v_277, controller_v_276,
  controller_pnr_14, controller_ck_46_1, controller_pnr_13,
  controller_ck_48_1, controller_pnr_12, controller_ck_51_1,
  controller_pnr_11, controller_ck_53_1, controller_pnr_10,
  controller_ck_56_1, controller_pnr_9, controller_ck_58_1, controller_pnr_8,
  controller_ck_61_1, controller_pnr_7, controller_ck_63_1, controller_pnr,
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
  controller_window_failed_recovered, controller_ck_1, controller_pnr_19,
  controller_ck_35_1, controller_pnr_18, controller_ck_37_1,
  controller_pnr_17, controller_ck_39_1, controller_pnr_16,
  controller_ck_41_1, controller_pnr_15, controller_v_277, controller_v_276,
  controller_pnr_14, controller_ck_46_1, controller_pnr_13,
  controller_ck_48_1, controller_pnr_12, controller_ck_51_1,
  controller_pnr_11, controller_ck_53_1, controller_pnr_10,
  controller_ck_56_1, controller_pnr_9, controller_ck_58_1, controller_pnr_8,
  controller_ck_61_1, controller_pnr_7, controller_ck_63_1, controller_pnr,
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
  controller_window_failed_recovered, controller_ck_1, controller_pnr_19,
  controller_ck_35_1, controller_pnr_18, controller_ck_37_1,
  controller_pnr_17, controller_ck_39_1, controller_pnr_16,
  controller_ck_41_1, controller_pnr_15, controller_v_277, controller_v_276,
  controller_pnr_14, controller_ck_46_1, controller_pnr_13,
  controller_ck_48_1, controller_pnr_12, controller_ck_51_1,
  controller_pnr_11, controller_ck_53_1, controller_pnr_10,
  controller_ck_56_1, controller_pnr_9, controller_ck_58_1, controller_pnr_8,
  controller_ck_61_1, controller_pnr_7, controller_ck_63_1, controller_pnr,
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
  controller_window_failed_recovered, controller_ck_1, controller_pnr_19,
  controller_ck_35_1, controller_pnr_18, controller_ck_37_1,
  controller_pnr_17, controller_ck_39_1, controller_pnr_16,
  controller_ck_41_1, controller_pnr_15, controller_v_277, controller_v_276,
  controller_pnr_14, controller_ck_46_1, controller_pnr_13,
  controller_ck_48_1, controller_pnr_12, controller_ck_51_1,
  controller_pnr_11, controller_ck_53_1, controller_pnr_10,
  controller_ck_56_1, controller_pnr_9, controller_ck_58_1, controller_pnr_8,
  controller_ck_61_1, controller_pnr_7, controller_ck_63_1, controller_pnr,
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

