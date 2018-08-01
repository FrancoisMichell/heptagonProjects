/* --- Generated the 31/7/2018 at 22:4 --- */
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
  int controller_pnr_18, int controller_ck_35_1, int controller_pnr_17,
  int controller_ck_37_1, int controller_pnr_16, int controller_ck_39_1,
  int controller_pnr_15, int controller_ck_41_1, int controller_pnr_14,
  int controller_ck_43_1, int controller_pnr_13, int controller_ck_45_1,
  int controller_pnr_12, int controller_v_185, int controller_v_184,
  int controller_pnr_11, int controller_ck_50_1, int controller_pnr_10,
  int controller_ck_53_1, int controller_pnr_9, int controller_ck_55_1,
  int controller_pnr_8, int controller_ck_58_1, int controller_pnr_7,
  int controller_ck_60_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_light_2, int p_controller_c_blind_1,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_light_2, int controller_c_blind_1,
  int controller_c_light_1, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_blind_2_out* _out) {
  
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
  sub_21 = false;
  sub_20 = sub_21;
  if (controller_c_pc) {
    sub_19 = false;
    sub_22 = sub_20;
  } else {
    sub_19 = sub_20;
    sub_22 = false;
  };
  if (controller_ck_43_1) {
    sub_18 = sub_22;
  } else {
    sub_18 = sub_19;
  };
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  if (controller_blind_failed_recovered) {
    v_160 = false;
    sub_25 = sub_16;
  } else {
    v_160 = sub_16;
    sub_25 = false;
  };
  if (controller_ck_60_1) {
    sub_24 = v_160;
  } else {
    sub_24 = sub_25;
  };
  sub_33 = true;
  sub_32 = sub_33;
  if (controller_c_pc) {
    sub_31 = false;
    sub_34 = sub_32;
  } else {
    sub_31 = sub_32;
    sub_34 = false;
  };
  if (controller_ck_43_1) {
    sub_30 = sub_34;
  } else {
    sub_30 = sub_31;
  };
  sub_29 = sub_30;
  sub_28 = sub_29;
  if (controller_blind_failed_recovered) {
    sub_27 = sub_16;
    sub_35 = sub_28;
  } else {
    sub_27 = sub_28;
    sub_35 = sub_16;
  };
  if (controller_ck_60_1) {
    sub_26 = sub_35;
  } else {
    sub_26 = sub_27;
  };
  if (controller_blind_switch) {
    v_161 = sub_24;
  } else {
    v_161 = sub_26;
  };
  if (controller_c_blind_1) {
    sub_23 = v_161;
  } else {
    sub_23 = sub_26;
  };
  if (controller_ck_58_1) {
    sub_11 = sub_23;
  } else {
    sub_11 = sub_12;
  };
  if (controller_light_failed_recovered) {
    v_158 = false;
    v_157 = false;
    sub_38 = sub_13;
  } else {
    v_158 = sub_23;
    v_157 = sub_13;
    sub_38 = false;
  };
  if (controller_ck_55_1) {
    sub_37 = v_157;
  } else {
    sub_37 = sub_38;
  };
  if (controller_light_failed_recovered) {
    sub_39 = sub_23;
  } else {
    sub_39 = false;
  };
  if (controller_ck_55_1) {
    v_159 = v_158;
  } else {
    v_159 = sub_39;
  };
  if (controller_ck_58_1) {
    sub_36 = v_159;
  } else {
    sub_36 = sub_37;
  };
  if (controller_ck_53_1) {
    sub_10 = sub_36;
    v_156 = sub_11;
  } else {
    sub_10 = sub_11;
    v_156 = sub_36;
  };
  if (controller_c_light_2) {
    sub_40 = v_156;
  } else {
    sub_40 = sub_10;
  };
  if (controller_light_switch) {
    v_162 = sub_10;
  } else {
    v_162 = sub_40;
  };
  if (controller_c_light_1) {
    sub_9 = v_162;
  } else {
    sub_9 = sub_40;
  };
  if (controller_c_air_1) {
    sub_51 = sub_18;
  } else {
    sub_51 = false;
  };
  if (controller_c_air_2) {
    v_153 = false;
  } else {
    v_153 = sub_51;
  };
  if (controller_v_184) {
    v_154 = v_153;
  } else {
    v_154 = false;
  };
  if (controller_c_air_2) {
    sub_50 = sub_51;
  } else {
    sub_50 = false;
  };
  if (controller_c_air_1) {
    sub_53 = false;
  } else {
    sub_53 = sub_18;
  };
  sub_52 = sub_53;
  if (controller_v_184) {
    sub_49 = sub_52;
  } else {
    sub_49 = sub_50;
  };
  if (controller_v_185) {
    sub_48 = v_154;
  } else {
    sub_48 = sub_49;
  };
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  if (controller_blind_failed_recovered) {
    v_150 = false;
    sub_55 = sub_48;
  } else {
    v_150 = sub_48;
    sub_55 = false;
  };
  if (controller_ck_60_1) {
    v_151 = v_150;
  } else {
    v_151 = sub_55;
  };
  if (controller_c_air_1) {
    sub_61 = sub_30;
  } else {
    sub_61 = false;
  };
  if (controller_c_air_2) {
    v_148 = false;
  } else {
    v_148 = sub_61;
  };
  if (controller_v_184) {
    v_149 = v_148;
  } else {
    v_149 = false;
  };
  if (controller_c_air_2) {
    sub_60 = sub_61;
  } else {
    sub_60 = false;
  };
  if (controller_c_air_1) {
    sub_63 = false;
  } else {
    sub_63 = sub_30;
  };
  sub_62 = sub_63;
  if (controller_v_184) {
    sub_59 = sub_62;
  } else {
    sub_59 = sub_60;
  };
  if (controller_v_185) {
    sub_58 = v_149;
  } else {
    sub_58 = sub_59;
  };
  if (controller_blind_failed_recovered) {
    sub_57 = sub_48;
    sub_64 = sub_58;
  } else {
    sub_57 = sub_58;
    sub_64 = sub_48;
  };
  if (controller_ck_60_1) {
    sub_56 = sub_64;
  } else {
    sub_56 = sub_57;
  };
  if (controller_blind_switch) {
    v_152 = v_151;
  } else {
    v_152 = sub_56;
  };
  if (controller_c_blind_1) {
    sub_54 = v_152;
  } else {
    sub_54 = sub_56;
  };
  if (controller_ck_58_1) {
    sub_43 = sub_54;
  } else {
    sub_43 = sub_44;
  };
  if (controller_light_failed_recovered) {
    v_146 = false;
    v_145 = false;
    sub_67 = sub_45;
  } else {
    v_146 = sub_54;
    v_145 = sub_45;
    sub_67 = false;
  };
  if (controller_ck_55_1) {
    sub_66 = v_145;
  } else {
    sub_66 = sub_67;
  };
  if (controller_light_failed_recovered) {
    sub_68 = sub_54;
  } else {
    sub_68 = false;
  };
  if (controller_ck_55_1) {
    v_147 = v_146;
  } else {
    v_147 = sub_68;
  };
  if (controller_ck_58_1) {
    sub_65 = v_147;
  } else {
    sub_65 = sub_66;
  };
  if (controller_ck_53_1) {
    sub_42 = sub_65;
    v_144 = sub_43;
  } else {
    sub_42 = sub_43;
    v_144 = sub_65;
  };
  if (controller_c_light_2) {
    sub_69 = v_144;
  } else {
    sub_69 = sub_42;
  };
  if (controller_light_switch) {
    v_155 = sub_42;
  } else {
    v_155 = sub_69;
  };
  if (controller_c_light_1) {
    sub_41 = v_155;
  } else {
    sub_41 = sub_69;
  };
  if (controller_air_failed_recovered) {
    v_163 = sub_41;
    sub_8 = sub_9;
  } else {
    v_163 = sub_9;
    sub_8 = sub_41;
  };
  if (controller_ck_50_1) {
    v_164 = v_163;
  } else {
    v_164 = sub_8;
  };
  if (controller_c_closet) {
    sub_7 = v_164;
  } else {
    sub_7 = false;
  };
  if (controller_light_failed_recovered) {
    v_140 = sub_23;
    sub_76 = sub_13;
  } else {
    v_140 = sub_13;
    sub_76 = sub_23;
  };
  if (controller_ck_55_1) {
    sub_75 = v_140;
  } else {
    sub_75 = sub_76;
  };
  if (controller_ck_58_1) {
    sub_74 = sub_12;
  } else {
    sub_74 = sub_75;
  };
  if (controller_ck_53_1) {
    sub_73 = sub_12;
    v_139 = sub_74;
  } else {
    sub_73 = sub_74;
    v_139 = sub_12;
  };
  if (controller_c_light_2) {
    sub_77 = v_139;
  } else {
    sub_77 = sub_73;
  };
  if (controller_light_switch) {
    v_141 = sub_73;
  } else {
    v_141 = sub_77;
  };
  if (controller_c_light_1) {
    sub_72 = v_141;
  } else {
    sub_72 = sub_77;
  };
  if (controller_v_184) {
    v_136 = sub_52;
    sub_87 = sub_50;
  } else {
    v_136 = false;
    sub_87 = sub_52;
  };
  if (controller_v_185) {
    sub_86 = v_136;
  } else {
    sub_86 = sub_87;
  };
  sub_85 = sub_86;
  sub_84 = sub_85;
  sub_83 = sub_84;
  if (controller_blind_failed_recovered) {
    v_134 = false;
    sub_90 = sub_86;
  } else {
    v_134 = sub_86;
    sub_90 = false;
  };
  if (controller_ck_60_1) {
    sub_89 = v_134;
  } else {
    sub_89 = sub_90;
  };
  if (controller_v_184) {
    v_133 = sub_62;
    sub_94 = sub_60;
  } else {
    v_133 = false;
    sub_94 = sub_62;
  };
  if (controller_v_185) {
    sub_93 = v_133;
  } else {
    sub_93 = sub_94;
  };
  if (controller_blind_failed_recovered) {
    sub_92 = sub_86;
    sub_95 = sub_93;
  } else {
    sub_92 = sub_93;
    sub_95 = sub_86;
  };
  if (controller_ck_60_1) {
    sub_91 = sub_95;
  } else {
    sub_91 = sub_92;
  };
  if (controller_blind_switch) {
    v_135 = sub_89;
  } else {
    v_135 = sub_91;
  };
  if (controller_c_blind_1) {
    sub_88 = v_135;
  } else {
    sub_88 = sub_91;
  };
  if (controller_light_failed_recovered) {
    v_137 = sub_88;
    sub_82 = sub_83;
  } else {
    v_137 = sub_83;
    sub_82 = sub_88;
  };
  if (controller_ck_55_1) {
    sub_81 = v_137;
  } else {
    sub_81 = sub_82;
  };
  sub_96 = sub_83;
  if (controller_ck_58_1) {
    sub_80 = sub_96;
  } else {
    sub_80 = sub_81;
  };
  if (controller_ck_53_1) {
    sub_79 = sub_96;
    v_132 = sub_80;
  } else {
    sub_79 = sub_80;
    v_132 = sub_96;
  };
  if (controller_c_light_2) {
    sub_97 = v_132;
  } else {
    sub_97 = sub_79;
  };
  if (controller_light_switch) {
    v_138 = sub_79;
  } else {
    v_138 = sub_97;
  };
  if (controller_c_light_1) {
    sub_78 = v_138;
  } else {
    sub_78 = sub_97;
  };
  if (controller_air_failed_recovered) {
    v_142 = sub_78;
    sub_71 = sub_72;
  } else {
    v_142 = sub_72;
    sub_71 = sub_78;
  };
  if (controller_ck_50_1) {
    v_143 = v_142;
  } else {
    v_143 = sub_71;
  };
  if (controller_c_closet) {
    sub_70 = false;
  } else {
    sub_70 = v_143;
  };
  if (controller_cleaner) {
    v_165 = sub_70;
    sub_6 = sub_7;
  } else {
    v_165 = sub_7;
    sub_6 = sub_70;
  };
  if (controller_ck_41_1) {
    sub_5 = v_165;
  } else {
    sub_5 = sub_6;
  };
  if (controller_ck_43_1) {
    sub_112 = sub_19;
  } else {
    sub_112 = sub_22;
  };
  sub_111 = sub_112;
  sub_110 = sub_111;
  sub_109 = sub_110;
  sub_108 = sub_109;
  sub_107 = sub_108;
  if (controller_blind_failed_recovered) {
    v_125 = false;
    sub_115 = sub_110;
  } else {
    v_125 = sub_110;
    sub_115 = false;
  };
  if (controller_ck_60_1) {
    sub_114 = v_125;
  } else {
    sub_114 = sub_115;
  };
  if (controller_ck_43_1) {
    sub_120 = sub_31;
  } else {
    sub_120 = sub_34;
  };
  sub_119 = sub_120;
  sub_118 = sub_119;
  if (controller_blind_failed_recovered) {
    sub_117 = sub_110;
    sub_121 = sub_118;
  } else {
    sub_117 = sub_118;
    sub_121 = sub_110;
  };
  if (controller_ck_60_1) {
    sub_116 = sub_121;
  } else {
    sub_116 = sub_117;
  };
  if (controller_blind_switch) {
    v_126 = sub_114;
  } else {
    v_126 = sub_116;
  };
  if (controller_c_blind_1) {
    sub_113 = v_126;
  } else {
    sub_113 = sub_116;
  };
  if (controller_light_failed_recovered) {
    v_127 = sub_113;
    sub_106 = sub_107;
  } else {
    v_127 = sub_107;
    sub_106 = sub_113;
  };
  if (controller_ck_55_1) {
    sub_105 = v_127;
  } else {
    sub_105 = sub_106;
  };
  sub_122 = sub_107;
  if (controller_ck_58_1) {
    sub_104 = sub_122;
  } else {
    sub_104 = sub_105;
  };
  if (controller_ck_53_1) {
    sub_103 = sub_122;
    v_124 = sub_104;
  } else {
    sub_103 = sub_104;
    v_124 = sub_122;
  };
  if (controller_c_light_2) {
    sub_123 = v_124;
  } else {
    sub_123 = sub_103;
  };
  if (controller_light_switch) {
    v_128 = sub_103;
  } else {
    v_128 = sub_123;
  };
  if (controller_c_light_1) {
    sub_102 = v_128;
  } else {
    sub_102 = sub_123;
  };
  if (controller_c_air_1) {
    sub_135 = false;
  } else {
    sub_135 = sub_112;
  };
  sub_134 = sub_135;
  if (controller_v_184) {
    v_121 = sub_134;
  } else {
    v_121 = false;
  };
  if (controller_c_air_1) {
    sub_137 = sub_112;
  } else {
    sub_137 = false;
  };
  if (controller_c_air_2) {
    sub_136 = sub_137;
  } else {
    sub_136 = false;
  };
  if (controller_v_184) {
    sub_133 = sub_136;
  } else {
    sub_133 = sub_134;
  };
  if (controller_v_185) {
    sub_132 = v_121;
  } else {
    sub_132 = sub_133;
  };
  sub_131 = sub_132;
  sub_130 = sub_131;
  sub_129 = sub_130;
  if (controller_blind_failed_recovered) {
    v_119 = false;
    sub_140 = sub_132;
  } else {
    v_119 = sub_132;
    sub_140 = false;
  };
  if (controller_ck_60_1) {
    sub_139 = v_119;
  } else {
    sub_139 = sub_140;
  };
  if (controller_c_air_1) {
    sub_146 = false;
  } else {
    sub_146 = sub_120;
  };
  sub_145 = sub_146;
  if (controller_v_184) {
    v_118 = sub_145;
  } else {
    v_118 = false;
  };
  if (controller_c_air_1) {
    sub_148 = sub_120;
  } else {
    sub_148 = false;
  };
  if (controller_c_air_2) {
    sub_147 = sub_148;
  } else {
    sub_147 = false;
  };
  if (controller_v_184) {
    sub_144 = sub_147;
  } else {
    sub_144 = sub_145;
  };
  if (controller_v_185) {
    sub_143 = v_118;
  } else {
    sub_143 = sub_144;
  };
  if (controller_blind_failed_recovered) {
    sub_142 = sub_132;
    sub_149 = sub_143;
  } else {
    sub_142 = sub_143;
    sub_149 = sub_132;
  };
  if (controller_ck_60_1) {
    sub_141 = sub_149;
  } else {
    sub_141 = sub_142;
  };
  if (controller_blind_switch) {
    v_120 = sub_139;
  } else {
    v_120 = sub_141;
  };
  if (controller_c_blind_1) {
    sub_138 = v_120;
  } else {
    sub_138 = sub_141;
  };
  if (controller_light_failed_recovered) {
    v_122 = sub_138;
    sub_128 = sub_129;
  } else {
    v_122 = sub_129;
    sub_128 = sub_138;
  };
  if (controller_ck_55_1) {
    sub_127 = v_122;
  } else {
    sub_127 = sub_128;
  };
  sub_150 = sub_129;
  if (controller_ck_58_1) {
    sub_126 = sub_150;
  } else {
    sub_126 = sub_127;
  };
  if (controller_ck_53_1) {
    sub_125 = sub_150;
    v_117 = sub_126;
  } else {
    sub_125 = sub_126;
    v_117 = sub_150;
  };
  if (controller_c_light_2) {
    sub_151 = v_117;
  } else {
    sub_151 = sub_125;
  };
  if (controller_light_switch) {
    v_123 = sub_125;
  } else {
    v_123 = sub_151;
  };
  if (controller_c_light_1) {
    sub_124 = v_123;
  } else {
    sub_124 = sub_151;
  };
  if (controller_air_failed_recovered) {
    v_129 = sub_124;
    sub_101 = sub_102;
  } else {
    v_129 = sub_102;
    sub_101 = sub_124;
  };
  if (controller_ck_50_1) {
    v_130 = v_129;
  } else {
    v_130 = sub_101;
  };
  if (controller_c_closet) {
    sub_100 = v_130;
  } else {
    sub_100 = false;
  };
  if (controller_v_184) {
    v_112 = sub_136;
  } else {
    v_112 = sub_110;
  };
  if (controller_c_air_2) {
    sub_163 = false;
  } else {
    sub_163 = sub_137;
  };
  if (controller_v_185) {
    sub_162 = v_112;
  } else {
    sub_162 = sub_163;
  };
  sub_161 = sub_162;
  sub_160 = sub_161;
  sub_159 = sub_160;
  if (controller_blind_failed_recovered) {
    v_110 = false;
    sub_166 = sub_162;
  } else {
    v_110 = sub_162;
    sub_166 = false;
  };
  if (controller_ck_60_1) {
    sub_165 = v_110;
  } else {
    sub_165 = sub_166;
  };
  if (controller_v_184) {
    v_109 = sub_147;
  } else {
    v_109 = sub_118;
  };
  if (controller_c_air_2) {
    sub_170 = false;
  } else {
    sub_170 = sub_148;
  };
  if (controller_v_185) {
    sub_169 = v_109;
  } else {
    sub_169 = sub_170;
  };
  if (controller_blind_failed_recovered) {
    sub_168 = sub_162;
    sub_171 = sub_169;
  } else {
    sub_168 = sub_169;
    sub_171 = sub_162;
  };
  if (controller_ck_60_1) {
    sub_167 = sub_171;
  } else {
    sub_167 = sub_168;
  };
  if (controller_blind_switch) {
    v_111 = sub_165;
  } else {
    v_111 = sub_167;
  };
  if (controller_c_blind_1) {
    sub_164 = v_111;
  } else {
    sub_164 = sub_167;
  };
  if (controller_light_failed_recovered) {
    v_113 = sub_164;
    sub_158 = sub_159;
  } else {
    v_113 = sub_159;
    sub_158 = sub_164;
  };
  if (controller_ck_55_1) {
    sub_157 = v_113;
  } else {
    sub_157 = sub_158;
  };
  sub_172 = sub_159;
  if (controller_ck_58_1) {
    sub_156 = sub_172;
  } else {
    sub_156 = sub_157;
  };
  if (controller_ck_53_1) {
    sub_155 = sub_172;
    v_108 = sub_156;
  } else {
    sub_155 = sub_156;
    v_108 = sub_172;
  };
  if (controller_c_light_2) {
    sub_173 = v_108;
  } else {
    sub_173 = sub_155;
  };
  if (controller_light_switch) {
    v_114 = sub_155;
  } else {
    v_114 = sub_173;
  };
  if (controller_c_light_1) {
    sub_154 = v_114;
  } else {
    sub_154 = sub_173;
  };
  if (controller_air_failed_recovered) {
    v_115 = sub_154;
    sub_153 = sub_102;
  } else {
    v_115 = sub_102;
    sub_153 = sub_154;
  };
  if (controller_ck_50_1) {
    v_116 = v_115;
  } else {
    v_116 = sub_153;
  };
  if (controller_c_closet) {
    sub_152 = false;
  } else {
    sub_152 = v_116;
  };
  if (controller_cleaner) {
    v_131 = sub_152;
    sub_99 = sub_100;
  } else {
    v_131 = sub_100;
    sub_99 = sub_152;
  };
  if (controller_ck_41_1) {
    sub_98 = v_131;
  } else {
    sub_98 = sub_99;
  };
  if (controller_worker) {
    v_166 = sub_98;
    sub_4 = sub_5;
  } else {
    v_166 = sub_5;
    sub_4 = sub_98;
  };
  if (controller_ck_39_1) {
    sub_3 = v_166;
  } else {
    sub_3 = sub_4;
  };
  sub_185 = sub_24;
  sub_184 = sub_185;
  if (controller_light_failed_recovered) {
    v_102 = sub_184;
    sub_183 = sub_13;
  } else {
    v_102 = sub_13;
    sub_183 = sub_184;
  };
  if (controller_ck_55_1) {
    sub_182 = v_102;
  } else {
    sub_182 = sub_183;
  };
  if (controller_ck_58_1) {
    sub_186 = sub_75;
  } else {
    sub_186 = sub_12;
  };
  if (controller_ck_53_1) {
    sub_181 = sub_186;
    v_101 = sub_182;
  } else {
    sub_181 = sub_182;
    v_101 = sub_186;
  };
  if (controller_c_light_2) {
    sub_187 = v_101;
  } else {
    sub_187 = sub_181;
  };
  if (controller_light_switch) {
    v_103 = sub_181;
  } else {
    v_103 = sub_187;
  };
  if (controller_c_light_1) {
    sub_180 = v_103;
  } else {
    sub_180 = sub_187;
  };
  sub_193 = sub_89;
  sub_192 = sub_193;
  if (controller_light_failed_recovered) {
    v_99 = sub_192;
    sub_191 = sub_83;
  } else {
    v_99 = sub_83;
    sub_191 = sub_192;
  };
  if (controller_ck_55_1) {
    sub_190 = v_99;
  } else {
    sub_190 = sub_191;
  };
  if (controller_ck_58_1) {
    sub_194 = sub_81;
  } else {
    sub_194 = sub_96;
  };
  if (controller_ck_53_1) {
    sub_189 = sub_194;
    v_98 = sub_190;
  } else {
    sub_189 = sub_190;
    v_98 = sub_194;
  };
  if (controller_c_light_2) {
    sub_195 = v_98;
  } else {
    sub_195 = sub_189;
  };
  if (controller_light_switch) {
    v_100 = sub_189;
  } else {
    v_100 = sub_195;
  };
  if (controller_c_light_1) {
    sub_188 = v_100;
  } else {
    sub_188 = sub_195;
  };
  if (controller_air_failed_recovered) {
    v_104 = sub_188;
    sub_179 = sub_180;
  } else {
    v_104 = sub_180;
    sub_179 = sub_188;
  };
  if (controller_ck_50_1) {
    v_105 = v_104;
  } else {
    v_105 = sub_179;
  };
  if (controller_c_closet) {
    sub_178 = false;
  } else {
    sub_178 = v_105;
  };
  if (controller_cleaner) {
    v_106 = sub_178;
    sub_177 = sub_7;
  } else {
    v_106 = sub_7;
    sub_177 = sub_178;
  };
  if (controller_ck_41_1) {
    sub_176 = v_106;
  } else {
    sub_176 = sub_177;
  };
  sub_205 = sub_114;
  sub_204 = sub_205;
  if (controller_light_failed_recovered) {
    v_93 = sub_204;
    sub_203 = sub_107;
  } else {
    v_93 = sub_107;
    sub_203 = sub_204;
  };
  if (controller_ck_55_1) {
    sub_202 = v_93;
  } else {
    sub_202 = sub_203;
  };
  if (controller_ck_58_1) {
    sub_206 = sub_105;
  } else {
    sub_206 = sub_122;
  };
  if (controller_ck_53_1) {
    sub_201 = sub_206;
    v_92 = sub_202;
  } else {
    sub_201 = sub_202;
    v_92 = sub_206;
  };
  if (controller_c_light_2) {
    sub_207 = v_92;
  } else {
    sub_207 = sub_201;
  };
  if (controller_light_switch) {
    v_94 = sub_201;
  } else {
    v_94 = sub_207;
  };
  if (controller_c_light_1) {
    sub_200 = v_94;
  } else {
    sub_200 = sub_207;
  };
  sub_213 = sub_139;
  sub_212 = sub_213;
  if (controller_light_failed_recovered) {
    v_90 = sub_212;
    sub_211 = sub_129;
  } else {
    v_90 = sub_129;
    sub_211 = sub_212;
  };
  if (controller_ck_55_1) {
    sub_210 = v_90;
  } else {
    sub_210 = sub_211;
  };
  if (controller_ck_58_1) {
    sub_214 = sub_127;
  } else {
    sub_214 = sub_150;
  };
  if (controller_ck_53_1) {
    sub_209 = sub_214;
    v_89 = sub_210;
  } else {
    sub_209 = sub_210;
    v_89 = sub_214;
  };
  if (controller_c_light_2) {
    sub_215 = v_89;
  } else {
    sub_215 = sub_209;
  };
  if (controller_light_switch) {
    v_91 = sub_209;
  } else {
    v_91 = sub_215;
  };
  if (controller_c_light_1) {
    sub_208 = v_91;
  } else {
    sub_208 = sub_215;
  };
  if (controller_air_failed_recovered) {
    v_95 = sub_208;
    sub_199 = sub_200;
  } else {
    v_95 = sub_200;
    sub_199 = sub_208;
  };
  if (controller_ck_50_1) {
    v_96 = v_95;
  } else {
    v_96 = sub_199;
  };
  if (controller_c_closet) {
    sub_198 = v_96;
  } else {
    sub_198 = false;
  };
  sub_223 = sub_165;
  sub_222 = sub_223;
  if (controller_light_failed_recovered) {
    v_85 = sub_222;
    sub_221 = sub_159;
  } else {
    v_85 = sub_159;
    sub_221 = sub_222;
  };
  if (controller_ck_55_1) {
    sub_220 = v_85;
  } else {
    sub_220 = sub_221;
  };
  if (controller_ck_58_1) {
    sub_224 = sub_157;
  } else {
    sub_224 = sub_172;
  };
  if (controller_ck_53_1) {
    sub_219 = sub_224;
    v_84 = sub_220;
  } else {
    sub_219 = sub_220;
    v_84 = sub_224;
  };
  if (controller_c_light_2) {
    sub_225 = v_84;
  } else {
    sub_225 = sub_219;
  };
  if (controller_light_switch) {
    v_86 = sub_219;
  } else {
    v_86 = sub_225;
  };
  if (controller_c_light_1) {
    sub_218 = v_86;
  } else {
    sub_218 = sub_225;
  };
  if (controller_air_failed_recovered) {
    v_87 = sub_218;
    sub_217 = sub_200;
  } else {
    v_87 = sub_200;
    sub_217 = sub_218;
  };
  if (controller_ck_50_1) {
    v_88 = v_87;
  } else {
    v_88 = sub_217;
  };
  if (controller_c_closet) {
    sub_216 = false;
  } else {
    sub_216 = v_88;
  };
  if (controller_cleaner) {
    v_97 = sub_216;
    sub_197 = sub_198;
  } else {
    v_97 = sub_198;
    sub_197 = sub_216;
  };
  if (controller_ck_41_1) {
    sub_196 = v_97;
  } else {
    sub_196 = sub_197;
  };
  if (controller_worker) {
    v_107 = sub_196;
    sub_175 = sub_176;
  } else {
    v_107 = sub_176;
    sub_175 = sub_196;
  };
  if (controller_ck_39_1) {
    sub_174 = v_107;
  } else {
    sub_174 = sub_175;
  };
  if (controller_change_shift) {
    v_167 = sub_174;
    sub_2 = sub_3;
  } else {
    v_167 = sub_3;
    sub_2 = sub_174;
  };
  if (controller_ck_1) {
    sub_1 = v_167;
  } else {
    sub_1 = sub_2;
  };
  sub_238 = sub_28;
  if (controller_ck_60_1) {
    sub_239 = sub_27;
  } else {
    sub_239 = sub_35;
  };
  if (controller_blind_switch) {
    v_78 = sub_238;
  } else {
    v_78 = sub_239;
  };
  if (controller_c_blind_1) {
    sub_237 = v_78;
  } else {
    sub_237 = sub_239;
  };
  sub_236 = sub_237;
  if (controller_blind_failed_recovered) {
    v_76 = false;
    sub_242 = sub_28;
  } else {
    v_76 = sub_28;
    sub_242 = false;
  };
  if (controller_ck_60_1) {
    sub_241 = v_76;
  } else {
    sub_241 = sub_242;
  };
  if (controller_blind_switch) {
    v_77 = sub_241;
  } else {
    v_77 = sub_238;
  };
  sub_243 = sub_238;
  if (controller_c_blind_1) {
    sub_240 = v_77;
  } else {
    sub_240 = sub_243;
  };
  if (controller_ck_58_1) {
    sub_235 = sub_240;
  } else {
    sub_235 = sub_236;
  };
  if (controller_light_failed_recovered) {
    v_74 = false;
    v_73 = false;
    sub_246 = sub_237;
  } else {
    v_74 = sub_240;
    v_73 = sub_237;
    sub_246 = false;
  };
  if (controller_ck_55_1) {
    sub_245 = v_73;
  } else {
    sub_245 = sub_246;
  };
  if (controller_light_failed_recovered) {
    sub_247 = sub_240;
  } else {
    sub_247 = false;
  };
  if (controller_ck_55_1) {
    v_75 = v_74;
  } else {
    v_75 = sub_247;
  };
  if (controller_ck_58_1) {
    sub_244 = v_75;
  } else {
    sub_244 = sub_245;
  };
  if (controller_ck_53_1) {
    sub_234 = sub_244;
    v_72 = sub_235;
  } else {
    sub_234 = sub_235;
    v_72 = sub_244;
  };
  if (controller_c_light_2) {
    sub_248 = v_72;
  } else {
    sub_248 = sub_234;
  };
  if (controller_light_switch) {
    v_79 = sub_234;
  } else {
    v_79 = sub_248;
  };
  if (controller_c_light_1) {
    sub_233 = v_79;
  } else {
    sub_233 = sub_248;
  };
  sub_254 = sub_58;
  if (controller_ck_60_1) {
    sub_255 = sub_57;
  } else {
    sub_255 = sub_64;
  };
  if (controller_blind_switch) {
    v_70 = sub_254;
  } else {
    v_70 = sub_255;
  };
  if (controller_c_blind_1) {
    sub_253 = v_70;
  } else {
    sub_253 = sub_255;
  };
  sub_252 = sub_253;
  if (controller_blind_failed_recovered) {
    v_67 = false;
    sub_257 = sub_58;
  } else {
    v_67 = sub_58;
    sub_257 = false;
  };
  if (controller_ck_60_1) {
    v_68 = v_67;
  } else {
    v_68 = sub_257;
  };
  if (controller_blind_switch) {
    v_69 = v_68;
  } else {
    v_69 = sub_254;
  };
  if (controller_c_blind_1) {
    sub_256 = v_69;
  } else {
    sub_256 = sub_254;
  };
  if (controller_ck_58_1) {
    sub_251 = sub_256;
  } else {
    sub_251 = sub_252;
  };
  if (controller_light_failed_recovered) {
    v_65 = false;
    v_64 = false;
    sub_260 = sub_253;
  } else {
    v_65 = sub_256;
    v_64 = sub_253;
    sub_260 = false;
  };
  if (controller_ck_55_1) {
    sub_259 = v_64;
  } else {
    sub_259 = sub_260;
  };
  if (controller_light_failed_recovered) {
    sub_261 = sub_256;
  } else {
    sub_261 = false;
  };
  if (controller_ck_55_1) {
    v_66 = v_65;
  } else {
    v_66 = sub_261;
  };
  if (controller_ck_58_1) {
    sub_258 = v_66;
  } else {
    sub_258 = sub_259;
  };
  if (controller_ck_53_1) {
    sub_250 = sub_258;
    v_63 = sub_251;
  } else {
    sub_250 = sub_251;
    v_63 = sub_258;
  };
  if (controller_c_light_2) {
    sub_262 = v_63;
  } else {
    sub_262 = sub_250;
  };
  if (controller_light_switch) {
    v_71 = sub_250;
  } else {
    v_71 = sub_262;
  };
  if (controller_c_light_1) {
    sub_249 = v_71;
  } else {
    sub_249 = sub_262;
  };
  if (controller_air_failed_recovered) {
    v_80 = sub_249;
    sub_232 = sub_233;
  } else {
    v_80 = sub_233;
    sub_232 = sub_249;
  };
  if (controller_ck_50_1) {
    v_81 = v_80;
  } else {
    v_81 = sub_232;
  };
  if (controller_c_closet) {
    sub_231 = v_81;
  } else {
    sub_231 = false;
  };
  sub_270 = sub_243;
  if (controller_light_failed_recovered) {
    v_59 = sub_240;
    sub_269 = sub_270;
  } else {
    v_59 = sub_270;
    sub_269 = sub_240;
  };
  if (controller_ck_55_1) {
    sub_268 = v_59;
  } else {
    sub_268 = sub_269;
  };
  if (controller_light_failed_recovered) {
    v_58 = sub_237;
    sub_272 = sub_270;
  } else {
    v_58 = sub_270;
    sub_272 = sub_237;
  };
  if (controller_ck_55_1) {
    sub_271 = v_58;
  } else {
    sub_271 = sub_272;
  };
  if (controller_ck_58_1) {
    sub_267 = sub_271;
  } else {
    sub_267 = sub_268;
  };
  sub_273 = sub_270;
  if (controller_ck_53_1) {
    sub_266 = sub_273;
    v_57 = sub_267;
  } else {
    sub_266 = sub_267;
    v_57 = sub_273;
  };
  if (controller_c_light_2) {
    sub_274 = v_57;
  } else {
    sub_274 = sub_266;
  };
  if (controller_light_switch) {
    v_60 = sub_266;
  } else {
    v_60 = sub_274;
  };
  if (controller_c_light_1) {
    sub_265 = v_60;
  } else {
    sub_265 = sub_274;
  };
  sub_282 = sub_93;
  sub_281 = sub_282;
  sub_280 = sub_281;
  if (controller_blind_failed_recovered) {
    v_53 = false;
    sub_285 = sub_93;
  } else {
    v_53 = sub_93;
    sub_285 = false;
  };
  if (controller_ck_60_1) {
    sub_284 = v_53;
  } else {
    sub_284 = sub_285;
  };
  if (controller_blind_switch) {
    v_54 = sub_284;
  } else {
    v_54 = sub_282;
  };
  if (controller_c_blind_1) {
    sub_283 = v_54;
  } else {
    sub_283 = sub_281;
  };
  if (controller_light_failed_recovered) {
    v_55 = sub_283;
    sub_279 = sub_280;
  } else {
    v_55 = sub_280;
    sub_279 = sub_283;
  };
  if (controller_ck_55_1) {
    sub_278 = v_55;
  } else {
    sub_278 = sub_279;
  };
  if (controller_ck_60_1) {
    sub_289 = sub_92;
  } else {
    sub_289 = sub_95;
  };
  if (controller_blind_switch) {
    v_51 = sub_282;
  } else {
    v_51 = sub_289;
  };
  if (controller_c_blind_1) {
    sub_288 = v_51;
  } else {
    sub_288 = sub_289;
  };
  if (controller_light_failed_recovered) {
    v_52 = sub_288;
    sub_287 = sub_280;
  } else {
    v_52 = sub_280;
    sub_287 = sub_288;
  };
  if (controller_ck_55_1) {
    sub_286 = v_52;
  } else {
    sub_286 = sub_287;
  };
  if (controller_ck_58_1) {
    sub_277 = sub_286;
  } else {
    sub_277 = sub_278;
  };
  sub_290 = sub_280;
  if (controller_ck_53_1) {
    sub_276 = sub_290;
    v_50 = sub_277;
  } else {
    sub_276 = sub_277;
    v_50 = sub_290;
  };
  if (controller_c_light_2) {
    sub_291 = v_50;
  } else {
    sub_291 = sub_276;
  };
  if (controller_light_switch) {
    v_56 = sub_276;
  } else {
    v_56 = sub_291;
  };
  if (controller_c_light_1) {
    sub_275 = v_56;
  } else {
    sub_275 = sub_291;
  };
  if (controller_air_failed_recovered) {
    v_61 = sub_275;
    sub_264 = sub_265;
  } else {
    v_61 = sub_265;
    sub_264 = sub_275;
  };
  if (controller_ck_50_1) {
    v_62 = v_61;
  } else {
    v_62 = sub_264;
  };
  if (controller_c_closet) {
    sub_263 = false;
  } else {
    sub_263 = v_62;
  };
  if (controller_cleaner) {
    v_82 = sub_263;
    sub_230 = sub_231;
  } else {
    v_82 = sub_231;
    sub_230 = sub_263;
  };
  if (controller_ck_41_1) {
    sub_229 = v_82;
  } else {
    sub_229 = sub_230;
  };
  sub_303 = sub_118;
  sub_302 = sub_303;
  sub_301 = sub_302;
  if (controller_blind_failed_recovered) {
    v_43 = false;
    sub_306 = sub_118;
  } else {
    v_43 = sub_118;
    sub_306 = false;
  };
  if (controller_ck_60_1) {
    sub_305 = v_43;
  } else {
    sub_305 = sub_306;
  };
  if (controller_blind_switch) {
    v_44 = sub_305;
  } else {
    v_44 = sub_303;
  };
  if (controller_c_blind_1) {
    sub_304 = v_44;
  } else {
    sub_304 = sub_302;
  };
  if (controller_light_failed_recovered) {
    v_45 = sub_304;
    sub_300 = sub_301;
  } else {
    v_45 = sub_301;
    sub_300 = sub_304;
  };
  if (controller_ck_55_1) {
    sub_299 = v_45;
  } else {
    sub_299 = sub_300;
  };
  if (controller_ck_60_1) {
    sub_310 = sub_117;
  } else {
    sub_310 = sub_121;
  };
  if (controller_blind_switch) {
    v_41 = sub_303;
  } else {
    v_41 = sub_310;
  };
  if (controller_c_blind_1) {
    sub_309 = v_41;
  } else {
    sub_309 = sub_310;
  };
  if (controller_light_failed_recovered) {
    v_42 = sub_309;
    sub_308 = sub_301;
  } else {
    v_42 = sub_301;
    sub_308 = sub_309;
  };
  if (controller_ck_55_1) {
    sub_307 = v_42;
  } else {
    sub_307 = sub_308;
  };
  if (controller_ck_58_1) {
    sub_298 = sub_307;
  } else {
    sub_298 = sub_299;
  };
  sub_311 = sub_301;
  if (controller_ck_53_1) {
    sub_297 = sub_311;
    v_40 = sub_298;
  } else {
    sub_297 = sub_298;
    v_40 = sub_311;
  };
  if (controller_c_light_2) {
    sub_312 = v_40;
  } else {
    sub_312 = sub_297;
  };
  if (controller_light_switch) {
    v_46 = sub_297;
  } else {
    v_46 = sub_312;
  };
  if (controller_c_light_1) {
    sub_296 = v_46;
  } else {
    sub_296 = sub_312;
  };
  sub_320 = sub_143;
  sub_319 = sub_320;
  sub_318 = sub_319;
  if (controller_blind_failed_recovered) {
    v_36 = false;
    sub_323 = sub_143;
  } else {
    v_36 = sub_143;
    sub_323 = false;
  };
  if (controller_ck_60_1) {
    sub_322 = v_36;
  } else {
    sub_322 = sub_323;
  };
  if (controller_blind_switch) {
    v_37 = sub_322;
  } else {
    v_37 = sub_320;
  };
  if (controller_c_blind_1) {
    sub_321 = v_37;
  } else {
    sub_321 = sub_319;
  };
  if (controller_light_failed_recovered) {
    v_38 = sub_321;
    sub_317 = sub_318;
  } else {
    v_38 = sub_318;
    sub_317 = sub_321;
  };
  if (controller_ck_55_1) {
    sub_316 = v_38;
  } else {
    sub_316 = sub_317;
  };
  if (controller_ck_60_1) {
    sub_327 = sub_142;
  } else {
    sub_327 = sub_149;
  };
  if (controller_blind_switch) {
    v_34 = sub_320;
  } else {
    v_34 = sub_327;
  };
  if (controller_c_blind_1) {
    sub_326 = v_34;
  } else {
    sub_326 = sub_327;
  };
  if (controller_light_failed_recovered) {
    v_35 = sub_326;
    sub_325 = sub_318;
  } else {
    v_35 = sub_318;
    sub_325 = sub_326;
  };
  if (controller_ck_55_1) {
    sub_324 = v_35;
  } else {
    sub_324 = sub_325;
  };
  if (controller_ck_58_1) {
    sub_315 = sub_324;
  } else {
    sub_315 = sub_316;
  };
  sub_328 = sub_318;
  if (controller_ck_53_1) {
    sub_314 = sub_328;
    v_33 = sub_315;
  } else {
    sub_314 = sub_315;
    v_33 = sub_328;
  };
  if (controller_c_light_2) {
    sub_329 = v_33;
  } else {
    sub_329 = sub_314;
  };
  if (controller_light_switch) {
    v_39 = sub_314;
  } else {
    v_39 = sub_329;
  };
  if (controller_c_light_1) {
    sub_313 = v_39;
  } else {
    sub_313 = sub_329;
  };
  if (controller_air_failed_recovered) {
    v_47 = sub_313;
    sub_295 = sub_296;
  } else {
    v_47 = sub_296;
    sub_295 = sub_313;
  };
  if (controller_ck_50_1) {
    v_48 = v_47;
  } else {
    v_48 = sub_295;
  };
  if (controller_c_closet) {
    sub_294 = v_48;
  } else {
    sub_294 = false;
  };
  sub_339 = sub_169;
  sub_338 = sub_339;
  sub_337 = sub_338;
  if (controller_blind_failed_recovered) {
    v_27 = false;
    sub_342 = sub_169;
  } else {
    v_27 = sub_169;
    sub_342 = false;
  };
  if (controller_ck_60_1) {
    sub_341 = v_27;
  } else {
    sub_341 = sub_342;
  };
  if (controller_blind_switch) {
    v_28 = sub_341;
  } else {
    v_28 = sub_339;
  };
  if (controller_c_blind_1) {
    sub_340 = v_28;
  } else {
    sub_340 = sub_338;
  };
  if (controller_light_failed_recovered) {
    v_29 = sub_340;
    sub_336 = sub_337;
  } else {
    v_29 = sub_337;
    sub_336 = sub_340;
  };
  if (controller_ck_55_1) {
    sub_335 = v_29;
  } else {
    sub_335 = sub_336;
  };
  if (controller_ck_60_1) {
    sub_346 = sub_168;
  } else {
    sub_346 = sub_171;
  };
  if (controller_blind_switch) {
    v_25 = sub_339;
  } else {
    v_25 = sub_346;
  };
  if (controller_c_blind_1) {
    sub_345 = v_25;
  } else {
    sub_345 = sub_346;
  };
  if (controller_light_failed_recovered) {
    v_26 = sub_345;
    sub_344 = sub_337;
  } else {
    v_26 = sub_337;
    sub_344 = sub_345;
  };
  if (controller_ck_55_1) {
    sub_343 = v_26;
  } else {
    sub_343 = sub_344;
  };
  if (controller_ck_58_1) {
    sub_334 = sub_343;
  } else {
    sub_334 = sub_335;
  };
  sub_347 = sub_337;
  if (controller_ck_53_1) {
    sub_333 = sub_347;
    v_24 = sub_334;
  } else {
    sub_333 = sub_334;
    v_24 = sub_347;
  };
  if (controller_c_light_2) {
    sub_348 = v_24;
  } else {
    sub_348 = sub_333;
  };
  if (controller_light_switch) {
    v_30 = sub_333;
  } else {
    v_30 = sub_348;
  };
  if (controller_c_light_1) {
    sub_332 = v_30;
  } else {
    sub_332 = sub_348;
  };
  if (controller_air_failed_recovered) {
    v_31 = sub_332;
    sub_331 = sub_296;
  } else {
    v_31 = sub_296;
    sub_331 = sub_332;
  };
  if (controller_ck_50_1) {
    v_32 = v_31;
  } else {
    v_32 = sub_331;
  };
  if (controller_c_closet) {
    sub_330 = false;
  } else {
    sub_330 = v_32;
  };
  if (controller_cleaner) {
    v_49 = sub_330;
    sub_293 = sub_294;
  } else {
    v_49 = sub_294;
    sub_293 = sub_330;
  };
  if (controller_ck_41_1) {
    sub_292 = v_49;
  } else {
    sub_292 = sub_293;
  };
  if (controller_worker) {
    v_83 = sub_292;
    sub_228 = sub_229;
  } else {
    v_83 = sub_229;
    sub_228 = sub_292;
  };
  if (controller_ck_39_1) {
    sub_227 = v_83;
  } else {
    sub_227 = sub_228;
  };
  sub_360 = sub_241;
  sub_359 = sub_360;
  if (controller_light_failed_recovered) {
    v_18 = sub_359;
    sub_358 = sub_270;
  } else {
    v_18 = sub_270;
    sub_358 = sub_359;
  };
  if (controller_ck_55_1) {
    sub_357 = v_18;
  } else {
    sub_357 = sub_358;
  };
  if (controller_ck_58_1) {
    sub_361 = sub_268;
  } else {
    sub_361 = sub_271;
  };
  if (controller_ck_53_1) {
    sub_356 = sub_361;
    v_17 = sub_357;
  } else {
    sub_356 = sub_357;
    v_17 = sub_361;
  };
  if (controller_c_light_2) {
    sub_362 = v_17;
  } else {
    sub_362 = sub_356;
  };
  if (controller_light_switch) {
    v_19 = sub_356;
  } else {
    v_19 = sub_362;
  };
  if (controller_c_light_1) {
    sub_355 = v_19;
  } else {
    sub_355 = sub_362;
  };
  sub_368 = sub_284;
  sub_367 = sub_368;
  if (controller_light_failed_recovered) {
    v_15 = sub_367;
    sub_366 = sub_280;
  } else {
    v_15 = sub_280;
    sub_366 = sub_367;
  };
  if (controller_ck_55_1) {
    sub_365 = v_15;
  } else {
    sub_365 = sub_366;
  };
  if (controller_ck_58_1) {
    sub_369 = sub_278;
  } else {
    sub_369 = sub_286;
  };
  if (controller_ck_53_1) {
    sub_364 = sub_369;
    v_14 = sub_365;
  } else {
    sub_364 = sub_365;
    v_14 = sub_369;
  };
  if (controller_c_light_2) {
    sub_370 = v_14;
  } else {
    sub_370 = sub_364;
  };
  if (controller_light_switch) {
    v_16 = sub_364;
  } else {
    v_16 = sub_370;
  };
  if (controller_c_light_1) {
    sub_363 = v_16;
  } else {
    sub_363 = sub_370;
  };
  if (controller_air_failed_recovered) {
    v_20 = sub_363;
    sub_354 = sub_355;
  } else {
    v_20 = sub_355;
    sub_354 = sub_363;
  };
  if (controller_ck_50_1) {
    v_21 = v_20;
  } else {
    v_21 = sub_354;
  };
  if (controller_c_closet) {
    sub_353 = false;
  } else {
    sub_353 = v_21;
  };
  if (controller_cleaner) {
    v_22 = sub_353;
    sub_352 = sub_231;
  } else {
    v_22 = sub_231;
    sub_352 = sub_353;
  };
  if (controller_ck_41_1) {
    sub_351 = v_22;
  } else {
    sub_351 = sub_352;
  };
  sub_380 = sub_305;
  sub_379 = sub_380;
  if (controller_light_failed_recovered) {
    v_9 = sub_379;
    sub_378 = sub_301;
  } else {
    v_9 = sub_301;
    sub_378 = sub_379;
  };
  if (controller_ck_55_1) {
    sub_377 = v_9;
  } else {
    sub_377 = sub_378;
  };
  if (controller_ck_58_1) {
    sub_381 = sub_299;
  } else {
    sub_381 = sub_307;
  };
  if (controller_ck_53_1) {
    sub_376 = sub_381;
    v_8 = sub_377;
  } else {
    sub_376 = sub_377;
    v_8 = sub_381;
  };
  if (controller_c_light_2) {
    sub_382 = v_8;
  } else {
    sub_382 = sub_376;
  };
  if (controller_light_switch) {
    v_10 = sub_376;
  } else {
    v_10 = sub_382;
  };
  if (controller_c_light_1) {
    sub_375 = v_10;
  } else {
    sub_375 = sub_382;
  };
  sub_388 = sub_322;
  sub_387 = sub_388;
  if (controller_light_failed_recovered) {
    v_6 = sub_387;
    sub_386 = sub_318;
  } else {
    v_6 = sub_318;
    sub_386 = sub_387;
  };
  if (controller_ck_55_1) {
    sub_385 = v_6;
  } else {
    sub_385 = sub_386;
  };
  if (controller_ck_58_1) {
    sub_389 = sub_316;
  } else {
    sub_389 = sub_324;
  };
  if (controller_ck_53_1) {
    sub_384 = sub_389;
    v_5 = sub_385;
  } else {
    sub_384 = sub_385;
    v_5 = sub_389;
  };
  if (controller_c_light_2) {
    sub_390 = v_5;
  } else {
    sub_390 = sub_384;
  };
  if (controller_light_switch) {
    v_7 = sub_384;
  } else {
    v_7 = sub_390;
  };
  if (controller_c_light_1) {
    sub_383 = v_7;
  } else {
    sub_383 = sub_390;
  };
  if (controller_air_failed_recovered) {
    v_11 = sub_383;
    sub_374 = sub_375;
  } else {
    v_11 = sub_375;
    sub_374 = sub_383;
  };
  if (controller_ck_50_1) {
    v_12 = v_11;
  } else {
    v_12 = sub_374;
  };
  if (controller_c_closet) {
    sub_373 = v_12;
  } else {
    sub_373 = false;
  };
  sub_398 = sub_341;
  sub_397 = sub_398;
  if (controller_light_failed_recovered) {
    v_1 = sub_397;
    sub_396 = sub_337;
  } else {
    v_1 = sub_337;
    sub_396 = sub_397;
  };
  if (controller_ck_55_1) {
    sub_395 = v_1;
  } else {
    sub_395 = sub_396;
  };
  if (controller_ck_58_1) {
    sub_399 = sub_335;
  } else {
    sub_399 = sub_343;
  };
  if (controller_ck_53_1) {
    sub_394 = sub_399;
    v = sub_395;
  } else {
    sub_394 = sub_395;
    v = sub_399;
  };
  if (controller_c_light_2) {
    sub_400 = v;
  } else {
    sub_400 = sub_394;
  };
  if (controller_light_switch) {
    v_2 = sub_394;
  } else {
    v_2 = sub_400;
  };
  if (controller_c_light_1) {
    sub_393 = v_2;
  } else {
    sub_393 = sub_400;
  };
  if (controller_air_failed_recovered) {
    v_3 = sub_393;
    sub_392 = sub_375;
  } else {
    v_3 = sub_375;
    sub_392 = sub_393;
  };
  if (controller_ck_50_1) {
    v_4 = v_3;
  } else {
    v_4 = sub_392;
  };
  if (controller_c_closet) {
    sub_391 = false;
  } else {
    sub_391 = v_4;
  };
  if (controller_cleaner) {
    v_13 = sub_391;
    sub_372 = sub_373;
  } else {
    v_13 = sub_373;
    sub_372 = sub_391;
  };
  if (controller_ck_41_1) {
    sub_371 = v_13;
  } else {
    sub_371 = sub_372;
  };
  if (controller_worker) {
    v_23 = sub_371;
    sub_350 = sub_351;
  } else {
    v_23 = sub_351;
    sub_350 = sub_371;
  };
  if (controller_ck_39_1) {
    sub_349 = v_23;
  } else {
    sub_349 = sub_350;
  };
  if (controller_change_shift) {
    v_168 = sub_349;
    sub_226 = sub_227;
  } else {
    v_168 = sub_227;
    sub_226 = sub_349;
  };
  if (controller_ck_1) {
    v_169 = v_168;
  } else {
    v_169 = sub_226;
  };
  if (p_controller_c_blind_2) {
    sub_0 = v_169;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_blind_2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_light_2_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered, int controller_ck_1,
  int controller_pnr_18, int controller_ck_35_1, int controller_pnr_17,
  int controller_ck_37_1, int controller_pnr_16, int controller_ck_39_1,
  int controller_pnr_15, int controller_ck_41_1, int controller_pnr_14,
  int controller_ck_43_1, int controller_pnr_13, int controller_ck_45_1,
  int controller_pnr_12, int controller_v_185, int controller_v_184,
  int controller_pnr_11, int controller_ck_50_1, int controller_pnr_10,
  int controller_ck_53_1, int controller_pnr_9, int controller_ck_55_1,
  int controller_pnr_8, int controller_ck_58_1, int controller_pnr_7,
  int controller_ck_60_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_light_2, int p_controller_c_blind_1,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_blind_1, int controller_c_light_1,
  int controller_c_closet, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_2_out* _out) {
  
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
  sub_20 = false;
  sub_19 = sub_20;
  if (controller_c_pc) {
    sub_18 = false;
    sub_21 = sub_19;
  } else {
    sub_18 = sub_19;
    sub_21 = false;
  };
  if (controller_ck_43_1) {
    sub_17 = sub_21;
  } else {
    sub_17 = sub_18;
  };
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (controller_blind_failed_recovered) {
    v_394 = false;
    sub_24 = sub_15;
  } else {
    v_394 = sub_15;
    sub_24 = false;
  };
  if (controller_ck_60_1) {
    sub_23 = v_394;
  } else {
    sub_23 = sub_24;
  };
  if (controller_blind_switch) {
    v_395 = sub_23;
  } else {
    v_395 = sub_14;
  };
  if (controller_c_blind_1) {
    sub_22 = v_395;
  } else {
    sub_22 = sub_13;
  };
  if (controller_light_failed_recovered) {
    v_396 = false;
  } else {
    v_396 = sub_22;
  };
  if (controller_ck_58_1) {
    sub_10 = sub_22;
  } else {
    sub_10 = sub_11;
  };
  if (controller_light_failed_recovered) {
    v_393 = false;
    sub_26 = sub_12;
  } else {
    v_393 = sub_12;
    sub_26 = false;
  };
  if (controller_ck_55_1) {
    sub_25 = v_393;
  } else {
    sub_25 = sub_26;
  };
  if (controller_light_failed_recovered) {
    sub_27 = sub_22;
  } else {
    sub_27 = false;
  };
  if (controller_ck_55_1) {
    v_397 = v_396;
  } else {
    v_397 = sub_27;
  };
  if (controller_ck_58_1) {
    v_398 = v_397;
  } else {
    v_398 = sub_25;
  };
  if (controller_ck_53_1) {
    v_399 = v_398;
  } else {
    v_399 = sub_10;
  };
  sub_39 = true;
  sub_38 = sub_39;
  if (controller_c_pc) {
    sub_37 = false;
    sub_40 = sub_38;
  } else {
    sub_37 = sub_38;
    sub_40 = false;
  };
  if (controller_ck_43_1) {
    sub_36 = sub_40;
  } else {
    sub_36 = sub_37;
  };
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  if (controller_light_failed_recovered) {
    sub_30 = sub_12;
    sub_41 = sub_31;
  } else {
    sub_30 = sub_31;
    sub_41 = sub_12;
  };
  if (controller_ck_55_1) {
    sub_29 = sub_41;
  } else {
    sub_29 = sub_30;
  };
  if (controller_blind_failed_recovered) {
    v_389 = false;
    sub_45 = sub_34;
  } else {
    v_389 = sub_34;
    sub_45 = false;
  };
  if (controller_ck_60_1) {
    sub_44 = v_389;
  } else {
    sub_44 = sub_45;
  };
  if (controller_blind_switch) {
    v_390 = sub_44;
  } else {
    v_390 = sub_33;
  };
  if (controller_c_blind_1) {
    sub_43 = v_390;
  } else {
    sub_43 = sub_32;
  };
  if (controller_light_failed_recovered) {
    sub_42 = sub_22;
    sub_46 = sub_43;
  } else {
    sub_42 = sub_43;
    sub_46 = sub_22;
  };
  if (controller_ck_55_1) {
    v_391 = sub_46;
  } else {
    v_391 = sub_42;
  };
  if (controller_ck_58_1) {
    v_392 = v_391;
  } else {
    v_392 = sub_29;
  };
  if (controller_ck_53_1) {
    sub_28 = v_392;
  } else {
    sub_28 = sub_10;
  };
  if (controller_light_switch) {
    v_400 = v_399;
  } else {
    v_400 = sub_28;
  };
  if (controller_c_light_1) {
    sub_9 = v_400;
  } else {
    sub_9 = sub_28;
  };
  if (controller_c_air_1) {
    sub_56 = sub_17;
  } else {
    sub_56 = false;
  };
  if (controller_c_air_2) {
    v_382 = false;
  } else {
    v_382 = sub_56;
  };
  if (controller_v_184) {
    v_383 = v_382;
  } else {
    v_383 = false;
  };
  if (controller_c_air_2) {
    sub_55 = sub_56;
  } else {
    sub_55 = false;
  };
  if (controller_c_air_1) {
    sub_58 = false;
  } else {
    sub_58 = sub_17;
  };
  sub_57 = sub_58;
  if (controller_v_184) {
    sub_54 = sub_57;
  } else {
    sub_54 = sub_55;
  };
  if (controller_v_185) {
    sub_53 = v_383;
  } else {
    sub_53 = sub_54;
  };
  sub_52 = sub_53;
  sub_51 = sub_52;
  sub_50 = sub_51;
  sub_49 = sub_50;
  if (controller_blind_failed_recovered) {
    v_379 = false;
    sub_60 = sub_53;
  } else {
    v_379 = sub_53;
    sub_60 = false;
  };
  if (controller_ck_60_1) {
    v_380 = v_379;
  } else {
    v_380 = sub_60;
  };
  if (controller_blind_switch) {
    v_381 = v_380;
  } else {
    v_381 = sub_52;
  };
  if (controller_c_blind_1) {
    sub_59 = v_381;
  } else {
    sub_59 = sub_51;
  };
  if (controller_light_failed_recovered) {
    v_384 = false;
  } else {
    v_384 = sub_59;
  };
  if (controller_ck_58_1) {
    sub_48 = sub_59;
  } else {
    sub_48 = sub_49;
  };
  if (controller_light_failed_recovered) {
    v_378 = false;
    sub_62 = sub_50;
  } else {
    v_378 = sub_50;
    sub_62 = false;
  };
  if (controller_ck_55_1) {
    sub_61 = v_378;
  } else {
    sub_61 = sub_62;
  };
  if (controller_light_failed_recovered) {
    sub_63 = sub_59;
  } else {
    sub_63 = false;
  };
  if (controller_ck_55_1) {
    v_385 = v_384;
  } else {
    v_385 = sub_63;
  };
  if (controller_ck_58_1) {
    v_386 = v_385;
  } else {
    v_386 = sub_61;
  };
  if (controller_ck_53_1) {
    v_387 = v_386;
  } else {
    v_387 = sub_48;
  };
  if (controller_c_air_1) {
    sub_73 = sub_36;
  } else {
    sub_73 = false;
  };
  if (controller_c_air_2) {
    v_374 = false;
  } else {
    v_374 = sub_73;
  };
  if (controller_v_184) {
    v_375 = v_374;
  } else {
    v_375 = false;
  };
  if (controller_c_air_2) {
    sub_72 = sub_73;
  } else {
    sub_72 = false;
  };
  if (controller_c_air_1) {
    sub_75 = false;
  } else {
    sub_75 = sub_36;
  };
  sub_74 = sub_75;
  if (controller_v_184) {
    sub_71 = sub_74;
  } else {
    sub_71 = sub_72;
  };
  if (controller_v_185) {
    sub_70 = v_375;
  } else {
    sub_70 = sub_71;
  };
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  if (controller_light_failed_recovered) {
    sub_66 = sub_50;
    sub_76 = sub_67;
  } else {
    sub_66 = sub_67;
    sub_76 = sub_50;
  };
  if (controller_ck_55_1) {
    sub_65 = sub_76;
  } else {
    sub_65 = sub_66;
  };
  if (controller_blind_failed_recovered) {
    v_371 = false;
    sub_79 = sub_70;
  } else {
    v_371 = sub_70;
    sub_79 = false;
  };
  if (controller_ck_60_1) {
    v_372 = v_371;
  } else {
    v_372 = sub_79;
  };
  if (controller_blind_switch) {
    v_373 = v_372;
  } else {
    v_373 = sub_69;
  };
  if (controller_c_blind_1) {
    sub_78 = v_373;
  } else {
    sub_78 = sub_68;
  };
  if (controller_light_failed_recovered) {
    sub_77 = sub_59;
    sub_80 = sub_78;
  } else {
    sub_77 = sub_78;
    sub_80 = sub_59;
  };
  if (controller_ck_55_1) {
    v_376 = sub_80;
  } else {
    v_376 = sub_77;
  };
  if (controller_ck_58_1) {
    v_377 = v_376;
  } else {
    v_377 = sub_65;
  };
  if (controller_ck_53_1) {
    sub_64 = v_377;
  } else {
    sub_64 = sub_48;
  };
  if (controller_light_switch) {
    v_388 = v_387;
  } else {
    v_388 = sub_64;
  };
  if (controller_c_light_1) {
    sub_47 = v_388;
  } else {
    sub_47 = sub_64;
  };
  if (controller_air_failed_recovered) {
    v_401 = sub_47;
    sub_8 = sub_9;
  } else {
    v_401 = sub_9;
    sub_8 = sub_47;
  };
  if (controller_ck_50_1) {
    v_402 = v_401;
  } else {
    v_402 = sub_8;
  };
  if (controller_c_closet) {
    sub_7 = v_402;
  } else {
    sub_7 = false;
  };
  if (controller_light_failed_recovered) {
    v_366 = sub_22;
    sub_86 = sub_12;
  } else {
    v_366 = sub_12;
    sub_86 = sub_22;
  };
  if (controller_ck_55_1) {
    sub_85 = v_366;
  } else {
    sub_85 = sub_86;
  };
  if (controller_ck_58_1) {
    sub_84 = sub_11;
  } else {
    sub_84 = sub_85;
  };
  if (controller_ck_53_1) {
    v_367 = sub_11;
  } else {
    v_367 = sub_84;
  };
  if (controller_blind_failed_recovered) {
    sub_93 = sub_15;
    sub_94 = sub_34;
  } else {
    sub_93 = sub_34;
    sub_94 = sub_15;
  };
  if (controller_ck_60_1) {
    sub_92 = sub_94;
  } else {
    sub_92 = sub_93;
  };
  if (controller_blind_switch) {
    v_364 = sub_92;
  } else {
    v_364 = sub_14;
  };
  if (controller_c_blind_1) {
    sub_91 = v_364;
  } else {
    sub_91 = sub_13;
  };
  if (controller_light_failed_recovered) {
    v_365 = sub_91;
    sub_90 = sub_12;
  } else {
    v_365 = sub_12;
    sub_90 = sub_91;
  };
  if (controller_ck_55_1) {
    sub_89 = v_365;
  } else {
    sub_89 = sub_90;
  };
  if (controller_ck_58_1) {
    sub_88 = sub_11;
  } else {
    sub_88 = sub_89;
  };
  if (controller_ck_53_1) {
    sub_87 = sub_11;
  } else {
    sub_87 = sub_88;
  };
  if (controller_light_switch) {
    v_368 = v_367;
  } else {
    v_368 = sub_87;
  };
  if (controller_c_light_1) {
    sub_83 = v_368;
  } else {
    sub_83 = sub_87;
  };
  if (controller_v_184) {
    v_360 = sub_57;
    sub_103 = sub_55;
  } else {
    v_360 = false;
    sub_103 = sub_57;
  };
  if (controller_v_185) {
    sub_102 = v_360;
  } else {
    sub_102 = sub_103;
  };
  sub_101 = sub_102;
  sub_100 = sub_101;
  sub_99 = sub_100;
  if (controller_blind_failed_recovered) {
    v_358 = false;
    sub_106 = sub_102;
  } else {
    v_358 = sub_102;
    sub_106 = false;
  };
  if (controller_ck_60_1) {
    sub_105 = v_358;
  } else {
    sub_105 = sub_106;
  };
  if (controller_blind_switch) {
    v_359 = sub_105;
  } else {
    v_359 = sub_101;
  };
  if (controller_c_blind_1) {
    sub_104 = v_359;
  } else {
    sub_104 = sub_100;
  };
  if (controller_light_failed_recovered) {
    v_361 = sub_104;
    sub_98 = sub_99;
  } else {
    v_361 = sub_99;
    sub_98 = sub_104;
  };
  if (controller_ck_55_1) {
    sub_97 = v_361;
  } else {
    sub_97 = sub_98;
  };
  sub_107 = sub_99;
  if (controller_ck_58_1) {
    sub_96 = sub_107;
  } else {
    sub_96 = sub_97;
  };
  if (controller_ck_53_1) {
    v_362 = sub_107;
  } else {
    v_362 = sub_96;
  };
  if (controller_v_184) {
    v_355 = sub_74;
    sub_116 = sub_72;
  } else {
    v_355 = false;
    sub_116 = sub_74;
  };
  if (controller_v_185) {
    sub_115 = v_355;
  } else {
    sub_115 = sub_116;
  };
  if (controller_blind_failed_recovered) {
    sub_114 = sub_102;
    sub_117 = sub_115;
  } else {
    sub_114 = sub_115;
    sub_117 = sub_102;
  };
  if (controller_ck_60_1) {
    sub_113 = sub_117;
  } else {
    sub_113 = sub_114;
  };
  if (controller_blind_switch) {
    v_356 = sub_113;
  } else {
    v_356 = sub_101;
  };
  if (controller_c_blind_1) {
    sub_112 = v_356;
  } else {
    sub_112 = sub_100;
  };
  if (controller_light_failed_recovered) {
    v_357 = sub_112;
    sub_111 = sub_99;
  } else {
    v_357 = sub_99;
    sub_111 = sub_112;
  };
  if (controller_ck_55_1) {
    sub_110 = v_357;
  } else {
    sub_110 = sub_111;
  };
  if (controller_ck_58_1) {
    sub_109 = sub_107;
  } else {
    sub_109 = sub_110;
  };
  if (controller_ck_53_1) {
    sub_108 = sub_107;
  } else {
    sub_108 = sub_109;
  };
  if (controller_light_switch) {
    v_363 = v_362;
  } else {
    v_363 = sub_108;
  };
  if (controller_c_light_1) {
    sub_95 = v_363;
  } else {
    sub_95 = sub_108;
  };
  if (controller_air_failed_recovered) {
    v_369 = sub_95;
    sub_82 = sub_83;
  } else {
    v_369 = sub_83;
    sub_82 = sub_95;
  };
  if (controller_ck_50_1) {
    v_370 = v_369;
  } else {
    v_370 = sub_82;
  };
  if (controller_c_closet) {
    sub_81 = false;
  } else {
    sub_81 = v_370;
  };
  if (controller_cleaner) {
    v_403 = sub_81;
    sub_6 = sub_7;
  } else {
    v_403 = sub_7;
    sub_6 = sub_81;
  };
  if (controller_ck_41_1) {
    sub_5 = v_403;
  } else {
    sub_5 = sub_6;
  };
  if (controller_ck_43_1) {
    sub_131 = sub_18;
  } else {
    sub_131 = sub_21;
  };
  sub_130 = sub_131;
  sub_129 = sub_130;
  sub_128 = sub_129;
  sub_127 = sub_128;
  sub_126 = sub_127;
  if (controller_blind_failed_recovered) {
    v_347 = false;
    sub_134 = sub_129;
  } else {
    v_347 = sub_129;
    sub_134 = false;
  };
  if (controller_ck_60_1) {
    sub_133 = v_347;
  } else {
    sub_133 = sub_134;
  };
  if (controller_blind_switch) {
    v_348 = sub_133;
  } else {
    v_348 = sub_128;
  };
  if (controller_c_blind_1) {
    sub_132 = v_348;
  } else {
    sub_132 = sub_127;
  };
  if (controller_light_failed_recovered) {
    v_349 = sub_132;
    sub_125 = sub_126;
  } else {
    v_349 = sub_126;
    sub_125 = sub_132;
  };
  if (controller_ck_55_1) {
    sub_124 = v_349;
  } else {
    sub_124 = sub_125;
  };
  sub_135 = sub_126;
  if (controller_ck_58_1) {
    sub_123 = sub_135;
  } else {
    sub_123 = sub_124;
  };
  if (controller_ck_53_1) {
    v_350 = sub_135;
  } else {
    v_350 = sub_123;
  };
  if (controller_ck_43_1) {
    sub_145 = sub_37;
  } else {
    sub_145 = sub_40;
  };
  sub_144 = sub_145;
  sub_143 = sub_144;
  if (controller_blind_failed_recovered) {
    sub_142 = sub_129;
    sub_146 = sub_143;
  } else {
    sub_142 = sub_143;
    sub_146 = sub_129;
  };
  if (controller_ck_60_1) {
    sub_141 = sub_146;
  } else {
    sub_141 = sub_142;
  };
  if (controller_blind_switch) {
    v_345 = sub_141;
  } else {
    v_345 = sub_128;
  };
  if (controller_c_blind_1) {
    sub_140 = v_345;
  } else {
    sub_140 = sub_127;
  };
  if (controller_light_failed_recovered) {
    v_346 = sub_140;
    sub_139 = sub_126;
  } else {
    v_346 = sub_126;
    sub_139 = sub_140;
  };
  if (controller_ck_55_1) {
    sub_138 = v_346;
  } else {
    sub_138 = sub_139;
  };
  if (controller_ck_58_1) {
    sub_137 = sub_135;
  } else {
    sub_137 = sub_138;
  };
  if (controller_ck_53_1) {
    sub_136 = sub_135;
  } else {
    sub_136 = sub_137;
  };
  if (controller_light_switch) {
    v_351 = v_350;
  } else {
    v_351 = sub_136;
  };
  if (controller_c_light_1) {
    sub_122 = v_351;
  } else {
    sub_122 = sub_136;
  };
  if (controller_c_air_1) {
    sub_157 = false;
  } else {
    sub_157 = sub_131;
  };
  sub_156 = sub_157;
  if (controller_v_184) {
    v_341 = sub_156;
  } else {
    v_341 = false;
  };
  if (controller_c_air_1) {
    sub_159 = sub_131;
  } else {
    sub_159 = false;
  };
  if (controller_c_air_2) {
    sub_158 = sub_159;
  } else {
    sub_158 = false;
  };
  if (controller_v_184) {
    sub_155 = sub_158;
  } else {
    sub_155 = sub_156;
  };
  if (controller_v_185) {
    sub_154 = v_341;
  } else {
    sub_154 = sub_155;
  };
  sub_153 = sub_154;
  sub_152 = sub_153;
  sub_151 = sub_152;
  if (controller_blind_failed_recovered) {
    v_339 = false;
    sub_162 = sub_154;
  } else {
    v_339 = sub_154;
    sub_162 = false;
  };
  if (controller_ck_60_1) {
    sub_161 = v_339;
  } else {
    sub_161 = sub_162;
  };
  if (controller_blind_switch) {
    v_340 = sub_161;
  } else {
    v_340 = sub_153;
  };
  if (controller_c_blind_1) {
    sub_160 = v_340;
  } else {
    sub_160 = sub_152;
  };
  if (controller_light_failed_recovered) {
    v_342 = sub_160;
    sub_150 = sub_151;
  } else {
    v_342 = sub_151;
    sub_150 = sub_160;
  };
  if (controller_ck_55_1) {
    sub_149 = v_342;
  } else {
    sub_149 = sub_150;
  };
  sub_163 = sub_151;
  if (controller_ck_58_1) {
    sub_148 = sub_163;
  } else {
    sub_148 = sub_149;
  };
  if (controller_ck_53_1) {
    v_343 = sub_163;
  } else {
    v_343 = sub_148;
  };
  if (controller_c_air_1) {
    sub_174 = false;
  } else {
    sub_174 = sub_145;
  };
  sub_173 = sub_174;
  if (controller_v_184) {
    v_336 = sub_173;
  } else {
    v_336 = false;
  };
  if (controller_c_air_1) {
    sub_176 = sub_145;
  } else {
    sub_176 = false;
  };
  if (controller_c_air_2) {
    sub_175 = sub_176;
  } else {
    sub_175 = false;
  };
  if (controller_v_184) {
    sub_172 = sub_175;
  } else {
    sub_172 = sub_173;
  };
  if (controller_v_185) {
    sub_171 = v_336;
  } else {
    sub_171 = sub_172;
  };
  if (controller_blind_failed_recovered) {
    sub_170 = sub_154;
    sub_177 = sub_171;
  } else {
    sub_170 = sub_171;
    sub_177 = sub_154;
  };
  if (controller_ck_60_1) {
    sub_169 = sub_177;
  } else {
    sub_169 = sub_170;
  };
  if (controller_blind_switch) {
    v_337 = sub_169;
  } else {
    v_337 = sub_153;
  };
  if (controller_c_blind_1) {
    sub_168 = v_337;
  } else {
    sub_168 = sub_152;
  };
  if (controller_light_failed_recovered) {
    v_338 = sub_168;
    sub_167 = sub_151;
  } else {
    v_338 = sub_151;
    sub_167 = sub_168;
  };
  if (controller_ck_55_1) {
    sub_166 = v_338;
  } else {
    sub_166 = sub_167;
  };
  if (controller_ck_58_1) {
    sub_165 = sub_163;
  } else {
    sub_165 = sub_166;
  };
  if (controller_ck_53_1) {
    sub_164 = sub_163;
  } else {
    sub_164 = sub_165;
  };
  if (controller_light_switch) {
    v_344 = v_343;
  } else {
    v_344 = sub_164;
  };
  if (controller_c_light_1) {
    sub_147 = v_344;
  } else {
    sub_147 = sub_164;
  };
  if (controller_air_failed_recovered) {
    v_352 = sub_147;
    sub_121 = sub_122;
  } else {
    v_352 = sub_122;
    sub_121 = sub_147;
  };
  if (controller_ck_50_1) {
    v_353 = v_352;
  } else {
    v_353 = sub_121;
  };
  if (controller_c_closet) {
    sub_120 = v_353;
  } else {
    sub_120 = false;
  };
  if (controller_v_184) {
    v_330 = sub_158;
  } else {
    v_330 = sub_129;
  };
  if (controller_c_air_2) {
    sub_188 = false;
  } else {
    sub_188 = sub_159;
  };
  if (controller_v_185) {
    sub_187 = v_330;
  } else {
    sub_187 = sub_188;
  };
  sub_186 = sub_187;
  sub_185 = sub_186;
  sub_184 = sub_185;
  if (controller_blind_failed_recovered) {
    v_328 = false;
    sub_191 = sub_187;
  } else {
    v_328 = sub_187;
    sub_191 = false;
  };
  if (controller_ck_60_1) {
    sub_190 = v_328;
  } else {
    sub_190 = sub_191;
  };
  if (controller_blind_switch) {
    v_329 = sub_190;
  } else {
    v_329 = sub_186;
  };
  if (controller_c_blind_1) {
    sub_189 = v_329;
  } else {
    sub_189 = sub_185;
  };
  if (controller_light_failed_recovered) {
    v_331 = sub_189;
    sub_183 = sub_184;
  } else {
    v_331 = sub_184;
    sub_183 = sub_189;
  };
  if (controller_ck_55_1) {
    sub_182 = v_331;
  } else {
    sub_182 = sub_183;
  };
  sub_192 = sub_184;
  if (controller_ck_58_1) {
    sub_181 = sub_192;
  } else {
    sub_181 = sub_182;
  };
  if (controller_ck_53_1) {
    v_332 = sub_192;
  } else {
    v_332 = sub_181;
  };
  if (controller_v_184) {
    v_325 = sub_175;
  } else {
    v_325 = sub_143;
  };
  if (controller_c_air_2) {
    sub_201 = false;
  } else {
    sub_201 = sub_176;
  };
  if (controller_v_185) {
    sub_200 = v_325;
  } else {
    sub_200 = sub_201;
  };
  if (controller_blind_failed_recovered) {
    sub_199 = sub_187;
    sub_202 = sub_200;
  } else {
    sub_199 = sub_200;
    sub_202 = sub_187;
  };
  if (controller_ck_60_1) {
    sub_198 = sub_202;
  } else {
    sub_198 = sub_199;
  };
  if (controller_blind_switch) {
    v_326 = sub_198;
  } else {
    v_326 = sub_186;
  };
  if (controller_c_blind_1) {
    sub_197 = v_326;
  } else {
    sub_197 = sub_185;
  };
  if (controller_light_failed_recovered) {
    v_327 = sub_197;
    sub_196 = sub_184;
  } else {
    v_327 = sub_184;
    sub_196 = sub_197;
  };
  if (controller_ck_55_1) {
    sub_195 = v_327;
  } else {
    sub_195 = sub_196;
  };
  if (controller_ck_58_1) {
    sub_194 = sub_192;
  } else {
    sub_194 = sub_195;
  };
  if (controller_ck_53_1) {
    sub_193 = sub_192;
  } else {
    sub_193 = sub_194;
  };
  if (controller_light_switch) {
    v_333 = v_332;
  } else {
    v_333 = sub_193;
  };
  if (controller_c_light_1) {
    sub_180 = v_333;
  } else {
    sub_180 = sub_193;
  };
  if (controller_air_failed_recovered) {
    v_334 = sub_180;
    sub_179 = sub_122;
  } else {
    v_334 = sub_122;
    sub_179 = sub_180;
  };
  if (controller_ck_50_1) {
    v_335 = v_334;
  } else {
    v_335 = sub_179;
  };
  if (controller_c_closet) {
    sub_178 = false;
  } else {
    sub_178 = v_335;
  };
  if (controller_cleaner) {
    v_354 = sub_178;
    sub_119 = sub_120;
  } else {
    v_354 = sub_120;
    sub_119 = sub_178;
  };
  if (controller_ck_41_1) {
    sub_118 = v_354;
  } else {
    sub_118 = sub_119;
  };
  if (controller_worker) {
    v_404 = sub_118;
    sub_4 = sub_5;
  } else {
    v_404 = sub_5;
    sub_4 = sub_118;
  };
  if (controller_ck_39_1) {
    sub_3 = v_404;
  } else {
    sub_3 = sub_4;
  };
  sub_213 = sub_23;
  sub_212 = sub_213;
  if (controller_light_failed_recovered) {
    v_318 = sub_212;
    sub_211 = sub_12;
  } else {
    v_318 = sub_12;
    sub_211 = sub_212;
  };
  if (controller_ck_55_1) {
    sub_210 = v_318;
  } else {
    sub_210 = sub_211;
  };
  if (controller_ck_58_1) {
    sub_214 = sub_85;
  } else {
    sub_214 = sub_11;
  };
  if (controller_ck_53_1) {
    v_319 = sub_214;
  } else {
    v_319 = sub_210;
  };
  sub_220 = sub_92;
  sub_219 = sub_220;
  if (controller_light_failed_recovered) {
    v_315 = sub_219;
    sub_218 = sub_12;
  } else {
    v_315 = sub_12;
    sub_218 = sub_219;
  };
  if (controller_ck_55_1) {
    sub_217 = v_315;
  } else {
    sub_217 = sub_218;
  };
  if (controller_blind_switch) {
    v_314 = sub_23;
  } else {
    v_314 = sub_92;
  };
  if (controller_c_blind_1) {
    sub_222 = v_314;
  } else {
    sub_222 = sub_220;
  };
  if (controller_light_failed_recovered) {
    v_316 = sub_222;
    sub_221 = sub_12;
  } else {
    v_316 = sub_12;
    sub_221 = sub_222;
  };
  if (controller_ck_55_1) {
    v_317 = v_316;
  } else {
    v_317 = sub_221;
  };
  if (controller_ck_58_1) {
    sub_216 = v_317;
  } else {
    sub_216 = sub_217;
  };
  if (controller_ck_53_1) {
    sub_215 = sub_214;
  } else {
    sub_215 = sub_216;
  };
  if (controller_light_switch) {
    v_320 = v_319;
  } else {
    v_320 = sub_215;
  };
  if (controller_c_light_1) {
    sub_209 = v_320;
  } else {
    sub_209 = sub_215;
  };
  sub_227 = sub_105;
  sub_226 = sub_227;
  if (controller_light_failed_recovered) {
    v_311 = sub_226;
    sub_225 = sub_99;
  } else {
    v_311 = sub_99;
    sub_225 = sub_226;
  };
  if (controller_ck_55_1) {
    sub_224 = v_311;
  } else {
    sub_224 = sub_225;
  };
  if (controller_ck_58_1) {
    sub_228 = sub_97;
  } else {
    sub_228 = sub_107;
  };
  if (controller_ck_53_1) {
    v_312 = sub_228;
  } else {
    v_312 = sub_224;
  };
  sub_234 = sub_113;
  sub_233 = sub_234;
  if (controller_light_failed_recovered) {
    v_308 = sub_233;
    sub_232 = sub_99;
  } else {
    v_308 = sub_99;
    sub_232 = sub_233;
  };
  if (controller_ck_55_1) {
    sub_231 = v_308;
  } else {
    sub_231 = sub_232;
  };
  if (controller_blind_switch) {
    v_307 = sub_105;
  } else {
    v_307 = sub_113;
  };
  if (controller_c_blind_1) {
    sub_236 = v_307;
  } else {
    sub_236 = sub_234;
  };
  if (controller_light_failed_recovered) {
    v_309 = sub_236;
    sub_235 = sub_99;
  } else {
    v_309 = sub_99;
    sub_235 = sub_236;
  };
  if (controller_ck_55_1) {
    v_310 = v_309;
  } else {
    v_310 = sub_235;
  };
  if (controller_ck_58_1) {
    sub_230 = v_310;
  } else {
    sub_230 = sub_231;
  };
  if (controller_ck_53_1) {
    sub_229 = sub_228;
  } else {
    sub_229 = sub_230;
  };
  if (controller_light_switch) {
    v_313 = v_312;
  } else {
    v_313 = sub_229;
  };
  if (controller_c_light_1) {
    sub_223 = v_313;
  } else {
    sub_223 = sub_229;
  };
  if (controller_air_failed_recovered) {
    v_321 = sub_223;
    sub_208 = sub_209;
  } else {
    v_321 = sub_209;
    sub_208 = sub_223;
  };
  if (controller_ck_50_1) {
    v_322 = v_321;
  } else {
    v_322 = sub_208;
  };
  if (controller_c_closet) {
    sub_207 = false;
  } else {
    sub_207 = v_322;
  };
  if (controller_cleaner) {
    v_323 = sub_207;
    sub_206 = sub_7;
  } else {
    v_323 = sub_7;
    sub_206 = sub_207;
  };
  if (controller_ck_41_1) {
    sub_205 = v_323;
  } else {
    sub_205 = sub_206;
  };
  sub_245 = sub_133;
  sub_244 = sub_245;
  if (controller_light_failed_recovered) {
    v_301 = sub_244;
    sub_243 = sub_126;
  } else {
    v_301 = sub_126;
    sub_243 = sub_244;
  };
  if (controller_ck_55_1) {
    sub_242 = v_301;
  } else {
    sub_242 = sub_243;
  };
  if (controller_ck_58_1) {
    sub_246 = sub_124;
  } else {
    sub_246 = sub_135;
  };
  if (controller_ck_53_1) {
    v_302 = sub_246;
  } else {
    v_302 = sub_242;
  };
  sub_252 = sub_141;
  sub_251 = sub_252;
  if (controller_light_failed_recovered) {
    v_298 = sub_251;
    sub_250 = sub_126;
  } else {
    v_298 = sub_126;
    sub_250 = sub_251;
  };
  if (controller_ck_55_1) {
    sub_249 = v_298;
  } else {
    sub_249 = sub_250;
  };
  if (controller_blind_switch) {
    v_297 = sub_133;
  } else {
    v_297 = sub_141;
  };
  if (controller_c_blind_1) {
    sub_254 = v_297;
  } else {
    sub_254 = sub_252;
  };
  if (controller_light_failed_recovered) {
    v_299 = sub_254;
    sub_253 = sub_126;
  } else {
    v_299 = sub_126;
    sub_253 = sub_254;
  };
  if (controller_ck_55_1) {
    v_300 = v_299;
  } else {
    v_300 = sub_253;
  };
  if (controller_ck_58_1) {
    sub_248 = v_300;
  } else {
    sub_248 = sub_249;
  };
  if (controller_ck_53_1) {
    sub_247 = sub_246;
  } else {
    sub_247 = sub_248;
  };
  if (controller_light_switch) {
    v_303 = v_302;
  } else {
    v_303 = sub_247;
  };
  if (controller_c_light_1) {
    sub_241 = v_303;
  } else {
    sub_241 = sub_247;
  };
  sub_259 = sub_161;
  sub_258 = sub_259;
  if (controller_light_failed_recovered) {
    v_294 = sub_258;
    sub_257 = sub_151;
  } else {
    v_294 = sub_151;
    sub_257 = sub_258;
  };
  if (controller_ck_55_1) {
    sub_256 = v_294;
  } else {
    sub_256 = sub_257;
  };
  if (controller_ck_58_1) {
    sub_260 = sub_149;
  } else {
    sub_260 = sub_163;
  };
  if (controller_ck_53_1) {
    v_295 = sub_260;
  } else {
    v_295 = sub_256;
  };
  sub_266 = sub_169;
  sub_265 = sub_266;
  if (controller_light_failed_recovered) {
    v_291 = sub_265;
    sub_264 = sub_151;
  } else {
    v_291 = sub_151;
    sub_264 = sub_265;
  };
  if (controller_ck_55_1) {
    sub_263 = v_291;
  } else {
    sub_263 = sub_264;
  };
  if (controller_blind_switch) {
    v_290 = sub_161;
  } else {
    v_290 = sub_169;
  };
  if (controller_c_blind_1) {
    sub_268 = v_290;
  } else {
    sub_268 = sub_266;
  };
  if (controller_light_failed_recovered) {
    v_292 = sub_268;
    sub_267 = sub_151;
  } else {
    v_292 = sub_151;
    sub_267 = sub_268;
  };
  if (controller_ck_55_1) {
    v_293 = v_292;
  } else {
    v_293 = sub_267;
  };
  if (controller_ck_58_1) {
    sub_262 = v_293;
  } else {
    sub_262 = sub_263;
  };
  if (controller_ck_53_1) {
    sub_261 = sub_260;
  } else {
    sub_261 = sub_262;
  };
  if (controller_light_switch) {
    v_296 = v_295;
  } else {
    v_296 = sub_261;
  };
  if (controller_c_light_1) {
    sub_255 = v_296;
  } else {
    sub_255 = sub_261;
  };
  if (controller_air_failed_recovered) {
    v_304 = sub_255;
    sub_240 = sub_241;
  } else {
    v_304 = sub_241;
    sub_240 = sub_255;
  };
  if (controller_ck_50_1) {
    v_305 = v_304;
  } else {
    v_305 = sub_240;
  };
  if (controller_c_closet) {
    sub_239 = v_305;
  } else {
    sub_239 = false;
  };
  sub_275 = sub_190;
  sub_274 = sub_275;
  if (controller_light_failed_recovered) {
    v_285 = sub_274;
    sub_273 = sub_184;
  } else {
    v_285 = sub_184;
    sub_273 = sub_274;
  };
  if (controller_ck_55_1) {
    sub_272 = v_285;
  } else {
    sub_272 = sub_273;
  };
  if (controller_ck_58_1) {
    sub_276 = sub_182;
  } else {
    sub_276 = sub_192;
  };
  if (controller_ck_53_1) {
    v_286 = sub_276;
  } else {
    v_286 = sub_272;
  };
  sub_282 = sub_198;
  sub_281 = sub_282;
  if (controller_light_failed_recovered) {
    v_282 = sub_281;
    sub_280 = sub_184;
  } else {
    v_282 = sub_184;
    sub_280 = sub_281;
  };
  if (controller_ck_55_1) {
    sub_279 = v_282;
  } else {
    sub_279 = sub_280;
  };
  if (controller_blind_switch) {
    v_281 = sub_190;
  } else {
    v_281 = sub_198;
  };
  if (controller_c_blind_1) {
    sub_284 = v_281;
  } else {
    sub_284 = sub_282;
  };
  if (controller_light_failed_recovered) {
    v_283 = sub_284;
    sub_283 = sub_184;
  } else {
    v_283 = sub_184;
    sub_283 = sub_284;
  };
  if (controller_ck_55_1) {
    v_284 = v_283;
  } else {
    v_284 = sub_283;
  };
  if (controller_ck_58_1) {
    sub_278 = v_284;
  } else {
    sub_278 = sub_279;
  };
  if (controller_ck_53_1) {
    sub_277 = sub_276;
  } else {
    sub_277 = sub_278;
  };
  if (controller_light_switch) {
    v_287 = v_286;
  } else {
    v_287 = sub_277;
  };
  if (controller_c_light_1) {
    sub_271 = v_287;
  } else {
    sub_271 = sub_277;
  };
  if (controller_air_failed_recovered) {
    v_288 = sub_271;
    sub_270 = sub_241;
  } else {
    v_288 = sub_241;
    sub_270 = sub_271;
  };
  if (controller_ck_50_1) {
    v_289 = v_288;
  } else {
    v_289 = sub_270;
  };
  if (controller_c_closet) {
    sub_269 = false;
  } else {
    sub_269 = v_289;
  };
  if (controller_cleaner) {
    v_306 = sub_269;
    sub_238 = sub_239;
  } else {
    v_306 = sub_239;
    sub_238 = sub_269;
  };
  if (controller_ck_41_1) {
    sub_237 = v_306;
  } else {
    sub_237 = sub_238;
  };
  if (controller_worker) {
    v_324 = sub_237;
    sub_204 = sub_205;
  } else {
    v_324 = sub_205;
    sub_204 = sub_237;
  };
  if (controller_ck_39_1) {
    sub_203 = v_324;
  } else {
    sub_203 = sub_204;
  };
  if (controller_change_shift) {
    v_405 = sub_203;
    sub_2 = sub_3;
  } else {
    v_405 = sub_3;
    sub_2 = sub_203;
  };
  if (controller_ck_1) {
    sub_1 = v_405;
  } else {
    sub_1 = sub_2;
  };
  if (controller_light_failed_recovered) {
    v_272 = false;
  } else {
    v_272 = sub_43;
  };
  sub_294 = sub_31;
  if (controller_ck_58_1) {
    sub_293 = sub_43;
  } else {
    sub_293 = sub_294;
  };
  if (controller_light_failed_recovered) {
    v_271 = false;
    sub_296 = sub_31;
  } else {
    v_271 = sub_31;
    sub_296 = false;
  };
  if (controller_ck_55_1) {
    sub_295 = v_271;
  } else {
    sub_295 = sub_296;
  };
  if (controller_light_failed_recovered) {
    sub_297 = sub_43;
  } else {
    sub_297 = false;
  };
  if (controller_ck_55_1) {
    v_273 = v_272;
  } else {
    v_273 = sub_297;
  };
  if (controller_ck_58_1) {
    v_274 = v_273;
  } else {
    v_274 = sub_295;
  };
  if (controller_ck_53_1) {
    v_275 = v_274;
  } else {
    v_275 = sub_293;
  };
  if (controller_ck_55_1) {
    v_270 = sub_42;
    sub_300 = sub_30;
  } else {
    v_270 = sub_46;
    sub_300 = sub_41;
  };
  if (controller_ck_58_1) {
    sub_299 = v_270;
  } else {
    sub_299 = sub_300;
  };
  if (controller_ck_53_1) {
    sub_298 = sub_293;
  } else {
    sub_298 = sub_299;
  };
  if (controller_light_switch) {
    v_276 = v_275;
  } else {
    v_276 = sub_298;
  };
  if (controller_c_light_1) {
    sub_292 = v_276;
  } else {
    sub_292 = sub_298;
  };
  if (controller_light_failed_recovered) {
    v_265 = false;
  } else {
    v_265 = sub_78;
  };
  sub_303 = sub_67;
  if (controller_ck_58_1) {
    sub_302 = sub_78;
  } else {
    sub_302 = sub_303;
  };
  if (controller_light_failed_recovered) {
    v_264 = false;
    sub_305 = sub_67;
  } else {
    v_264 = sub_67;
    sub_305 = false;
  };
  if (controller_ck_55_1) {
    sub_304 = v_264;
  } else {
    sub_304 = sub_305;
  };
  if (controller_light_failed_recovered) {
    sub_306 = sub_78;
  } else {
    sub_306 = false;
  };
  if (controller_ck_55_1) {
    v_266 = v_265;
  } else {
    v_266 = sub_306;
  };
  if (controller_ck_58_1) {
    v_267 = v_266;
  } else {
    v_267 = sub_304;
  };
  if (controller_ck_53_1) {
    v_268 = v_267;
  } else {
    v_268 = sub_302;
  };
  if (controller_ck_55_1) {
    v_263 = sub_77;
    sub_309 = sub_66;
  } else {
    v_263 = sub_80;
    sub_309 = sub_76;
  };
  if (controller_ck_58_1) {
    sub_308 = v_263;
  } else {
    sub_308 = sub_309;
  };
  if (controller_ck_53_1) {
    sub_307 = sub_302;
  } else {
    sub_307 = sub_308;
  };
  if (controller_light_switch) {
    v_269 = v_268;
  } else {
    v_269 = sub_307;
  };
  if (controller_c_light_1) {
    sub_301 = v_269;
  } else {
    sub_301 = sub_307;
  };
  if (controller_air_failed_recovered) {
    v_277 = sub_301;
    sub_291 = sub_292;
  } else {
    v_277 = sub_292;
    sub_291 = sub_301;
  };
  if (controller_ck_50_1) {
    v_278 = v_277;
  } else {
    v_278 = sub_291;
  };
  if (controller_c_closet) {
    sub_290 = v_278;
  } else {
    sub_290 = false;
  };
  if (controller_light_failed_recovered) {
    v_258 = sub_43;
    sub_315 = sub_31;
  } else {
    v_258 = sub_31;
    sub_315 = sub_43;
  };
  if (controller_ck_55_1) {
    sub_314 = v_258;
  } else {
    sub_314 = sub_315;
  };
  if (controller_ck_58_1) {
    sub_313 = sub_294;
  } else {
    sub_313 = sub_314;
  };
  if (controller_ck_53_1) {
    v_259 = sub_294;
  } else {
    v_259 = sub_313;
  };
  if (controller_ck_60_1) {
    sub_320 = sub_93;
  } else {
    sub_320 = sub_94;
  };
  if (controller_blind_switch) {
    v_255 = sub_320;
  } else {
    v_255 = sub_33;
  };
  if (controller_c_blind_1) {
    sub_319 = v_255;
  } else {
    sub_319 = sub_32;
  };
  if (controller_light_failed_recovered) {
    v_256 = sub_319;
    sub_318 = sub_31;
  } else {
    v_256 = sub_31;
    sub_318 = sub_319;
  };
  if (controller_ck_55_1) {
    sub_317 = v_256;
  } else {
    sub_317 = sub_318;
  };
  if (controller_ck_58_1) {
    v_257 = sub_294;
  } else {
    v_257 = sub_317;
  };
  if (controller_ck_53_1) {
    sub_316 = v_257;
  } else {
    sub_316 = sub_294;
  };
  if (controller_light_switch) {
    v_260 = v_259;
  } else {
    v_260 = sub_316;
  };
  if (controller_c_light_1) {
    sub_312 = v_260;
  } else {
    sub_312 = sub_316;
  };
  sub_327 = sub_115;
  sub_326 = sub_327;
  sub_325 = sub_326;
  if (controller_blind_failed_recovered) {
    v_250 = false;
    sub_330 = sub_115;
  } else {
    v_250 = sub_115;
    sub_330 = false;
  };
  if (controller_ck_60_1) {
    sub_329 = v_250;
  } else {
    sub_329 = sub_330;
  };
  if (controller_blind_switch) {
    v_251 = sub_329;
  } else {
    v_251 = sub_327;
  };
  if (controller_c_blind_1) {
    sub_328 = v_251;
  } else {
    sub_328 = sub_326;
  };
  if (controller_light_failed_recovered) {
    v_252 = sub_328;
    sub_324 = sub_325;
  } else {
    v_252 = sub_325;
    sub_324 = sub_328;
  };
  if (controller_ck_55_1) {
    sub_323 = v_252;
  } else {
    sub_323 = sub_324;
  };
  sub_331 = sub_325;
  if (controller_ck_58_1) {
    sub_322 = sub_331;
  } else {
    sub_322 = sub_323;
  };
  if (controller_ck_53_1) {
    v_253 = sub_331;
  } else {
    v_253 = sub_322;
  };
  if (controller_ck_60_1) {
    sub_336 = sub_114;
  } else {
    sub_336 = sub_117;
  };
  if (controller_blind_switch) {
    v_247 = sub_336;
  } else {
    v_247 = sub_327;
  };
  if (controller_c_blind_1) {
    sub_335 = v_247;
  } else {
    sub_335 = sub_326;
  };
  if (controller_light_failed_recovered) {
    v_248 = sub_335;
    sub_334 = sub_325;
  } else {
    v_248 = sub_325;
    sub_334 = sub_335;
  };
  if (controller_ck_55_1) {
    sub_333 = v_248;
  } else {
    sub_333 = sub_334;
  };
  if (controller_ck_58_1) {
    v_249 = sub_331;
  } else {
    v_249 = sub_333;
  };
  if (controller_ck_53_1) {
    sub_332 = v_249;
  } else {
    sub_332 = sub_331;
  };
  if (controller_light_switch) {
    v_254 = v_253;
  } else {
    v_254 = sub_332;
  };
  if (controller_c_light_1) {
    sub_321 = v_254;
  } else {
    sub_321 = sub_332;
  };
  if (controller_air_failed_recovered) {
    v_261 = sub_321;
    sub_311 = sub_312;
  } else {
    v_261 = sub_312;
    sub_311 = sub_321;
  };
  if (controller_ck_50_1) {
    v_262 = v_261;
  } else {
    v_262 = sub_311;
  };
  if (controller_c_closet) {
    sub_310 = false;
  } else {
    sub_310 = v_262;
  };
  if (controller_cleaner) {
    v_279 = sub_310;
    sub_289 = sub_290;
  } else {
    v_279 = sub_290;
    sub_289 = sub_310;
  };
  if (controller_ck_41_1) {
    sub_288 = v_279;
  } else {
    sub_288 = sub_289;
  };
  sub_347 = sub_143;
  sub_346 = sub_347;
  sub_345 = sub_346;
  if (controller_blind_failed_recovered) {
    v_239 = false;
    sub_350 = sub_143;
  } else {
    v_239 = sub_143;
    sub_350 = false;
  };
  if (controller_ck_60_1) {
    sub_349 = v_239;
  } else {
    sub_349 = sub_350;
  };
  if (controller_blind_switch) {
    v_240 = sub_349;
  } else {
    v_240 = sub_347;
  };
  if (controller_c_blind_1) {
    sub_348 = v_240;
  } else {
    sub_348 = sub_346;
  };
  if (controller_light_failed_recovered) {
    v_241 = sub_348;
    sub_344 = sub_345;
  } else {
    v_241 = sub_345;
    sub_344 = sub_348;
  };
  if (controller_ck_55_1) {
    sub_343 = v_241;
  } else {
    sub_343 = sub_344;
  };
  sub_351 = sub_345;
  if (controller_ck_58_1) {
    sub_342 = sub_351;
  } else {
    sub_342 = sub_343;
  };
  if (controller_ck_53_1) {
    v_242 = sub_351;
  } else {
    v_242 = sub_342;
  };
  if (controller_ck_60_1) {
    sub_356 = sub_142;
  } else {
    sub_356 = sub_146;
  };
  if (controller_blind_switch) {
    v_236 = sub_356;
  } else {
    v_236 = sub_347;
  };
  if (controller_c_blind_1) {
    sub_355 = v_236;
  } else {
    sub_355 = sub_346;
  };
  if (controller_light_failed_recovered) {
    v_237 = sub_355;
    sub_354 = sub_345;
  } else {
    v_237 = sub_345;
    sub_354 = sub_355;
  };
  if (controller_ck_55_1) {
    sub_353 = v_237;
  } else {
    sub_353 = sub_354;
  };
  if (controller_ck_58_1) {
    v_238 = sub_351;
  } else {
    v_238 = sub_353;
  };
  if (controller_ck_53_1) {
    sub_352 = v_238;
  } else {
    sub_352 = sub_351;
  };
  if (controller_light_switch) {
    v_243 = v_242;
  } else {
    v_243 = sub_352;
  };
  if (controller_c_light_1) {
    sub_341 = v_243;
  } else {
    sub_341 = sub_352;
  };
  sub_363 = sub_171;
  sub_362 = sub_363;
  sub_361 = sub_362;
  if (controller_blind_failed_recovered) {
    v_231 = false;
    sub_366 = sub_171;
  } else {
    v_231 = sub_171;
    sub_366 = false;
  };
  if (controller_ck_60_1) {
    sub_365 = v_231;
  } else {
    sub_365 = sub_366;
  };
  if (controller_blind_switch) {
    v_232 = sub_365;
  } else {
    v_232 = sub_363;
  };
  if (controller_c_blind_1) {
    sub_364 = v_232;
  } else {
    sub_364 = sub_362;
  };
  if (controller_light_failed_recovered) {
    v_233 = sub_364;
    sub_360 = sub_361;
  } else {
    v_233 = sub_361;
    sub_360 = sub_364;
  };
  if (controller_ck_55_1) {
    sub_359 = v_233;
  } else {
    sub_359 = sub_360;
  };
  sub_367 = sub_361;
  if (controller_ck_58_1) {
    sub_358 = sub_367;
  } else {
    sub_358 = sub_359;
  };
  if (controller_ck_53_1) {
    v_234 = sub_367;
  } else {
    v_234 = sub_358;
  };
  if (controller_ck_60_1) {
    sub_372 = sub_170;
  } else {
    sub_372 = sub_177;
  };
  if (controller_blind_switch) {
    v_228 = sub_372;
  } else {
    v_228 = sub_363;
  };
  if (controller_c_blind_1) {
    sub_371 = v_228;
  } else {
    sub_371 = sub_362;
  };
  if (controller_light_failed_recovered) {
    v_229 = sub_371;
    sub_370 = sub_361;
  } else {
    v_229 = sub_361;
    sub_370 = sub_371;
  };
  if (controller_ck_55_1) {
    sub_369 = v_229;
  } else {
    sub_369 = sub_370;
  };
  if (controller_ck_58_1) {
    v_230 = sub_367;
  } else {
    v_230 = sub_369;
  };
  if (controller_ck_53_1) {
    sub_368 = v_230;
  } else {
    sub_368 = sub_367;
  };
  if (controller_light_switch) {
    v_235 = v_234;
  } else {
    v_235 = sub_368;
  };
  if (controller_c_light_1) {
    sub_357 = v_235;
  } else {
    sub_357 = sub_368;
  };
  if (controller_air_failed_recovered) {
    v_244 = sub_357;
    sub_340 = sub_341;
  } else {
    v_244 = sub_341;
    sub_340 = sub_357;
  };
  if (controller_ck_50_1) {
    v_245 = v_244;
  } else {
    v_245 = sub_340;
  };
  if (controller_c_closet) {
    sub_339 = v_245;
  } else {
    sub_339 = false;
  };
  sub_381 = sub_200;
  sub_380 = sub_381;
  sub_379 = sub_380;
  if (controller_blind_failed_recovered) {
    v_221 = false;
    sub_384 = sub_200;
  } else {
    v_221 = sub_200;
    sub_384 = false;
  };
  if (controller_ck_60_1) {
    sub_383 = v_221;
  } else {
    sub_383 = sub_384;
  };
  if (controller_blind_switch) {
    v_222 = sub_383;
  } else {
    v_222 = sub_381;
  };
  if (controller_c_blind_1) {
    sub_382 = v_222;
  } else {
    sub_382 = sub_380;
  };
  if (controller_light_failed_recovered) {
    v_223 = sub_382;
    sub_378 = sub_379;
  } else {
    v_223 = sub_379;
    sub_378 = sub_382;
  };
  if (controller_ck_55_1) {
    sub_377 = v_223;
  } else {
    sub_377 = sub_378;
  };
  sub_385 = sub_379;
  if (controller_ck_58_1) {
    sub_376 = sub_385;
  } else {
    sub_376 = sub_377;
  };
  if (controller_ck_53_1) {
    v_224 = sub_385;
  } else {
    v_224 = sub_376;
  };
  if (controller_ck_60_1) {
    sub_390 = sub_199;
  } else {
    sub_390 = sub_202;
  };
  if (controller_blind_switch) {
    v_218 = sub_390;
  } else {
    v_218 = sub_381;
  };
  if (controller_c_blind_1) {
    sub_389 = v_218;
  } else {
    sub_389 = sub_380;
  };
  if (controller_light_failed_recovered) {
    v_219 = sub_389;
    sub_388 = sub_379;
  } else {
    v_219 = sub_379;
    sub_388 = sub_389;
  };
  if (controller_ck_55_1) {
    sub_387 = v_219;
  } else {
    sub_387 = sub_388;
  };
  if (controller_ck_58_1) {
    v_220 = sub_385;
  } else {
    v_220 = sub_387;
  };
  if (controller_ck_53_1) {
    sub_386 = v_220;
  } else {
    sub_386 = sub_385;
  };
  if (controller_light_switch) {
    v_225 = v_224;
  } else {
    v_225 = sub_386;
  };
  if (controller_c_light_1) {
    sub_375 = v_225;
  } else {
    sub_375 = sub_386;
  };
  if (controller_air_failed_recovered) {
    v_226 = sub_375;
    sub_374 = sub_341;
  } else {
    v_226 = sub_341;
    sub_374 = sub_375;
  };
  if (controller_ck_50_1) {
    v_227 = v_226;
  } else {
    v_227 = sub_374;
  };
  if (controller_c_closet) {
    sub_373 = false;
  } else {
    sub_373 = v_227;
  };
  if (controller_cleaner) {
    v_246 = sub_373;
    sub_338 = sub_339;
  } else {
    v_246 = sub_339;
    sub_338 = sub_373;
  };
  if (controller_ck_41_1) {
    sub_337 = v_246;
  } else {
    sub_337 = sub_338;
  };
  if (controller_worker) {
    v_280 = sub_337;
    sub_287 = sub_288;
  } else {
    v_280 = sub_288;
    sub_287 = sub_337;
  };
  if (controller_ck_39_1) {
    sub_286 = v_280;
  } else {
    sub_286 = sub_287;
  };
  sub_401 = sub_44;
  sub_400 = sub_401;
  if (controller_light_failed_recovered) {
    v_211 = sub_400;
    sub_399 = sub_31;
  } else {
    v_211 = sub_31;
    sub_399 = sub_400;
  };
  if (controller_ck_55_1) {
    sub_398 = v_211;
  } else {
    sub_398 = sub_399;
  };
  if (controller_ck_58_1) {
    sub_402 = sub_314;
  } else {
    sub_402 = sub_294;
  };
  if (controller_ck_53_1) {
    v_212 = sub_402;
  } else {
    v_212 = sub_398;
  };
  sub_407 = sub_320;
  sub_406 = sub_407;
  if (controller_light_failed_recovered) {
    v_207 = sub_406;
    sub_405 = sub_31;
  } else {
    v_207 = sub_31;
    sub_405 = sub_406;
  };
  if (controller_ck_55_1) {
    sub_404 = v_207;
  } else {
    sub_404 = sub_405;
  };
  if (controller_blind_switch) {
    v_206 = sub_44;
  } else {
    v_206 = sub_320;
  };
  if (controller_c_blind_1) {
    sub_409 = v_206;
  } else {
    sub_409 = sub_407;
  };
  if (controller_light_failed_recovered) {
    v_208 = sub_409;
    sub_408 = sub_31;
  } else {
    v_208 = sub_31;
    sub_408 = sub_409;
  };
  if (controller_ck_55_1) {
    v_209 = v_208;
  } else {
    v_209 = sub_408;
  };
  if (controller_ck_58_1) {
    v_210 = v_209;
  } else {
    v_210 = sub_404;
  };
  if (controller_ck_53_1) {
    sub_403 = v_210;
  } else {
    sub_403 = sub_402;
  };
  if (controller_light_switch) {
    v_213 = v_212;
  } else {
    v_213 = sub_403;
  };
  if (controller_c_light_1) {
    sub_397 = v_213;
  } else {
    sub_397 = sub_403;
  };
  sub_414 = sub_329;
  sub_413 = sub_414;
  if (controller_light_failed_recovered) {
    v_203 = sub_413;
    sub_412 = sub_325;
  } else {
    v_203 = sub_325;
    sub_412 = sub_413;
  };
  if (controller_ck_55_1) {
    sub_411 = v_203;
  } else {
    sub_411 = sub_412;
  };
  if (controller_ck_58_1) {
    sub_415 = sub_323;
  } else {
    sub_415 = sub_331;
  };
  if (controller_ck_53_1) {
    v_204 = sub_415;
  } else {
    v_204 = sub_411;
  };
  sub_420 = sub_336;
  sub_419 = sub_420;
  if (controller_light_failed_recovered) {
    v_199 = sub_419;
    sub_418 = sub_325;
  } else {
    v_199 = sub_325;
    sub_418 = sub_419;
  };
  if (controller_ck_55_1) {
    sub_417 = v_199;
  } else {
    sub_417 = sub_418;
  };
  if (controller_blind_switch) {
    v_198 = sub_329;
  } else {
    v_198 = sub_336;
  };
  if (controller_c_blind_1) {
    sub_422 = v_198;
  } else {
    sub_422 = sub_420;
  };
  if (controller_light_failed_recovered) {
    v_200 = sub_422;
    sub_421 = sub_325;
  } else {
    v_200 = sub_325;
    sub_421 = sub_422;
  };
  if (controller_ck_55_1) {
    v_201 = v_200;
  } else {
    v_201 = sub_421;
  };
  if (controller_ck_58_1) {
    v_202 = v_201;
  } else {
    v_202 = sub_417;
  };
  if (controller_ck_53_1) {
    sub_416 = v_202;
  } else {
    sub_416 = sub_415;
  };
  if (controller_light_switch) {
    v_205 = v_204;
  } else {
    v_205 = sub_416;
  };
  if (controller_c_light_1) {
    sub_410 = v_205;
  } else {
    sub_410 = sub_416;
  };
  if (controller_air_failed_recovered) {
    v_214 = sub_410;
    sub_396 = sub_397;
  } else {
    v_214 = sub_397;
    sub_396 = sub_410;
  };
  if (controller_ck_50_1) {
    v_215 = v_214;
  } else {
    v_215 = sub_396;
  };
  if (controller_c_closet) {
    sub_395 = false;
  } else {
    sub_395 = v_215;
  };
  if (controller_cleaner) {
    v_216 = sub_395;
    sub_394 = sub_290;
  } else {
    v_216 = sub_290;
    sub_394 = sub_395;
  };
  if (controller_ck_41_1) {
    sub_393 = v_216;
  } else {
    sub_393 = sub_394;
  };
  sub_431 = sub_349;
  sub_430 = sub_431;
  if (controller_light_failed_recovered) {
    v_192 = sub_430;
    sub_429 = sub_345;
  } else {
    v_192 = sub_345;
    sub_429 = sub_430;
  };
  if (controller_ck_55_1) {
    sub_428 = v_192;
  } else {
    sub_428 = sub_429;
  };
  if (controller_ck_58_1) {
    sub_432 = sub_343;
  } else {
    sub_432 = sub_351;
  };
  if (controller_ck_53_1) {
    v_193 = sub_432;
  } else {
    v_193 = sub_428;
  };
  sub_437 = sub_356;
  sub_436 = sub_437;
  if (controller_light_failed_recovered) {
    v_188 = sub_436;
    sub_435 = sub_345;
  } else {
    v_188 = sub_345;
    sub_435 = sub_436;
  };
  if (controller_ck_55_1) {
    sub_434 = v_188;
  } else {
    sub_434 = sub_435;
  };
  if (controller_blind_switch) {
    v_187 = sub_349;
  } else {
    v_187 = sub_356;
  };
  if (controller_c_blind_1) {
    sub_439 = v_187;
  } else {
    sub_439 = sub_437;
  };
  if (controller_light_failed_recovered) {
    v_189 = sub_439;
    sub_438 = sub_345;
  } else {
    v_189 = sub_345;
    sub_438 = sub_439;
  };
  if (controller_ck_55_1) {
    v_190 = v_189;
  } else {
    v_190 = sub_438;
  };
  if (controller_ck_58_1) {
    v_191 = v_190;
  } else {
    v_191 = sub_434;
  };
  if (controller_ck_53_1) {
    sub_433 = v_191;
  } else {
    sub_433 = sub_432;
  };
  if (controller_light_switch) {
    v_194 = v_193;
  } else {
    v_194 = sub_433;
  };
  if (controller_c_light_1) {
    sub_427 = v_194;
  } else {
    sub_427 = sub_433;
  };
  sub_444 = sub_365;
  sub_443 = sub_444;
  if (controller_light_failed_recovered) {
    v_184 = sub_443;
    sub_442 = sub_361;
  } else {
    v_184 = sub_361;
    sub_442 = sub_443;
  };
  if (controller_ck_55_1) {
    sub_441 = v_184;
  } else {
    sub_441 = sub_442;
  };
  if (controller_ck_58_1) {
    sub_445 = sub_359;
  } else {
    sub_445 = sub_367;
  };
  if (controller_ck_53_1) {
    v_185 = sub_445;
  } else {
    v_185 = sub_441;
  };
  sub_450 = sub_372;
  sub_449 = sub_450;
  if (controller_light_failed_recovered) {
    v_180 = sub_449;
    sub_448 = sub_361;
  } else {
    v_180 = sub_361;
    sub_448 = sub_449;
  };
  if (controller_ck_55_1) {
    sub_447 = v_180;
  } else {
    sub_447 = sub_448;
  };
  if (controller_blind_switch) {
    v_179 = sub_365;
  } else {
    v_179 = sub_372;
  };
  if (controller_c_blind_1) {
    sub_452 = v_179;
  } else {
    sub_452 = sub_450;
  };
  if (controller_light_failed_recovered) {
    v_181 = sub_452;
    sub_451 = sub_361;
  } else {
    v_181 = sub_361;
    sub_451 = sub_452;
  };
  if (controller_ck_55_1) {
    v_182 = v_181;
  } else {
    v_182 = sub_451;
  };
  if (controller_ck_58_1) {
    v_183 = v_182;
  } else {
    v_183 = sub_447;
  };
  if (controller_ck_53_1) {
    sub_446 = v_183;
  } else {
    sub_446 = sub_445;
  };
  if (controller_light_switch) {
    v_186 = v_185;
  } else {
    v_186 = sub_446;
  };
  if (controller_c_light_1) {
    sub_440 = v_186;
  } else {
    sub_440 = sub_446;
  };
  if (controller_air_failed_recovered) {
    v_195 = sub_440;
    sub_426 = sub_427;
  } else {
    v_195 = sub_427;
    sub_426 = sub_440;
  };
  if (controller_ck_50_1) {
    v_196 = v_195;
  } else {
    v_196 = sub_426;
  };
  if (controller_c_closet) {
    sub_425 = v_196;
  } else {
    sub_425 = false;
  };
  sub_459 = sub_383;
  sub_458 = sub_459;
  if (controller_light_failed_recovered) {
    v_174 = sub_458;
    sub_457 = sub_379;
  } else {
    v_174 = sub_379;
    sub_457 = sub_458;
  };
  if (controller_ck_55_1) {
    sub_456 = v_174;
  } else {
    sub_456 = sub_457;
  };
  if (controller_ck_58_1) {
    sub_460 = sub_377;
  } else {
    sub_460 = sub_385;
  };
  if (controller_ck_53_1) {
    v_175 = sub_460;
  } else {
    v_175 = sub_456;
  };
  sub_465 = sub_390;
  sub_464 = sub_465;
  if (controller_light_failed_recovered) {
    v_170 = sub_464;
    sub_463 = sub_379;
  } else {
    v_170 = sub_379;
    sub_463 = sub_464;
  };
  if (controller_ck_55_1) {
    sub_462 = v_170;
  } else {
    sub_462 = sub_463;
  };
  if (controller_blind_switch) {
    v = sub_383;
  } else {
    v = sub_390;
  };
  if (controller_c_blind_1) {
    sub_467 = v;
  } else {
    sub_467 = sub_465;
  };
  if (controller_light_failed_recovered) {
    v_171 = sub_467;
    sub_466 = sub_379;
  } else {
    v_171 = sub_379;
    sub_466 = sub_467;
  };
  if (controller_ck_55_1) {
    v_172 = v_171;
  } else {
    v_172 = sub_466;
  };
  if (controller_ck_58_1) {
    v_173 = v_172;
  } else {
    v_173 = sub_462;
  };
  if (controller_ck_53_1) {
    sub_461 = v_173;
  } else {
    sub_461 = sub_460;
  };
  if (controller_light_switch) {
    v_176 = v_175;
  } else {
    v_176 = sub_461;
  };
  if (controller_c_light_1) {
    sub_455 = v_176;
  } else {
    sub_455 = sub_461;
  };
  if (controller_air_failed_recovered) {
    v_177 = sub_455;
    sub_454 = sub_427;
  } else {
    v_177 = sub_427;
    sub_454 = sub_455;
  };
  if (controller_ck_50_1) {
    v_178 = v_177;
  } else {
    v_178 = sub_454;
  };
  if (controller_c_closet) {
    sub_453 = false;
  } else {
    sub_453 = v_178;
  };
  if (controller_cleaner) {
    v_197 = sub_453;
    sub_424 = sub_425;
  } else {
    v_197 = sub_425;
    sub_424 = sub_453;
  };
  if (controller_ck_41_1) {
    sub_423 = v_197;
  } else {
    sub_423 = sub_424;
  };
  if (controller_worker) {
    v_217 = sub_423;
    sub_392 = sub_393;
  } else {
    v_217 = sub_393;
    sub_392 = sub_423;
  };
  if (controller_ck_39_1) {
    sub_391 = v_217;
  } else {
    sub_391 = sub_392;
  };
  if (controller_change_shift) {
    v_406 = sub_391;
    sub_285 = sub_286;
  } else {
    v_406 = sub_286;
    sub_285 = sub_391;
  };
  if (controller_ck_1) {
    v_407 = v_406;
  } else {
    v_407 = sub_285;
  };
  if (p_controller_c_light_2) {
    sub_0 = v_407;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_light_2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_blind_1_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered, int controller_ck_1,
  int controller_pnr_18, int controller_ck_35_1, int controller_pnr_17,
  int controller_ck_37_1, int controller_pnr_16, int controller_ck_39_1,
  int controller_pnr_15, int controller_ck_41_1, int controller_pnr_14,
  int controller_ck_43_1, int controller_pnr_13, int controller_ck_45_1,
  int controller_pnr_12, int controller_v_185, int controller_v_184,
  int controller_pnr_11, int controller_ck_50_1, int controller_pnr_10,
  int controller_ck_53_1, int controller_pnr_9, int controller_ck_55_1,
  int controller_pnr_8, int controller_ck_58_1, int controller_pnr_7,
  int controller_ck_60_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_light_2, int p_controller_c_blind_1,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_light_1, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_blind_1_out* _out) {
  
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
  sub_18 = false;
  sub_17 = sub_18;
  if (controller_c_pc) {
    sub_16 = false;
    sub_19 = sub_17;
  } else {
    sub_16 = sub_17;
    sub_19 = false;
  };
  if (controller_ck_43_1) {
    sub_15 = sub_19;
  } else {
    sub_15 = sub_16;
  };
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (controller_light_failed_recovered) {
    v_536 = false;
  } else {
    v_536 = sub_11;
  };
  sub_10 = sub_11;
  if (controller_light_failed_recovered) {
    sub_20 = sub_11;
  } else {
    sub_20 = false;
  };
  if (controller_ck_55_1) {
    v_537 = v_536;
  } else {
    v_537 = sub_20;
  };
  if (controller_ck_53_1) {
    v_538 = v_537;
  } else {
    v_538 = sub_10;
  };
  if (controller_light_switch) {
    v_539 = v_538;
  } else {
    v_539 = sub_10;
  };
  sub_21 = sub_10;
  if (controller_c_light_1) {
    sub_9 = v_539;
  } else {
    sub_9 = sub_21;
  };
  if (controller_c_air_1) {
    sub_29 = sub_15;
  } else {
    sub_29 = false;
  };
  if (controller_c_air_2) {
    v_530 = false;
  } else {
    v_530 = sub_29;
  };
  if (controller_v_184) {
    v_531 = v_530;
  } else {
    v_531 = false;
  };
  if (controller_c_air_2) {
    sub_28 = sub_29;
  } else {
    sub_28 = false;
  };
  if (controller_c_air_1) {
    sub_31 = false;
  } else {
    sub_31 = sub_15;
  };
  sub_30 = sub_31;
  if (controller_v_184) {
    sub_27 = sub_30;
  } else {
    sub_27 = sub_28;
  };
  if (controller_v_185) {
    sub_26 = v_531;
  } else {
    sub_26 = sub_27;
  };
  sub_25 = sub_26;
  sub_24 = sub_25;
  if (controller_light_failed_recovered) {
    v_532 = false;
  } else {
    v_532 = sub_24;
  };
  sub_23 = sub_24;
  if (controller_light_failed_recovered) {
    sub_32 = sub_24;
  } else {
    sub_32 = false;
  };
  if (controller_ck_55_1) {
    v_533 = v_532;
  } else {
    v_533 = sub_32;
  };
  if (controller_ck_53_1) {
    v_534 = v_533;
  } else {
    v_534 = sub_23;
  };
  if (controller_light_switch) {
    v_535 = v_534;
  } else {
    v_535 = sub_23;
  };
  if (controller_c_light_1) {
    sub_22 = v_535;
  } else {
    sub_22 = sub_23;
  };
  if (controller_air_failed_recovered) {
    v_540 = sub_22;
    sub_8 = sub_9;
  } else {
    v_540 = sub_9;
    sub_8 = sub_22;
  };
  if (controller_ck_50_1) {
    v_541 = v_540;
  } else {
    v_541 = sub_8;
  };
  if (controller_c_closet) {
    sub_7 = v_541;
  } else {
    sub_7 = false;
  };
  sub_35 = sub_21;
  if (controller_v_184) {
    v_527 = sub_30;
    sub_42 = sub_28;
  } else {
    v_527 = false;
    sub_42 = sub_30;
  };
  if (controller_v_185) {
    sub_41 = v_527;
  } else {
    sub_41 = sub_42;
  };
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  if (controller_air_failed_recovered) {
    v_528 = sub_36;
    sub_34 = sub_35;
  } else {
    v_528 = sub_35;
    sub_34 = sub_36;
  };
  if (controller_ck_50_1) {
    v_529 = v_528;
  } else {
    v_529 = sub_34;
  };
  if (controller_c_closet) {
    sub_33 = false;
  } else {
    sub_33 = v_529;
  };
  if (controller_cleaner) {
    v_542 = sub_33;
    sub_6 = sub_7;
  } else {
    v_542 = sub_7;
    sub_6 = sub_33;
  };
  if (controller_ck_41_1) {
    sub_5 = v_542;
  } else {
    sub_5 = sub_6;
  };
  if (controller_ck_43_1) {
    sub_54 = sub_16;
  } else {
    sub_54 = sub_19;
  };
  sub_53 = sub_54;
  sub_52 = sub_53;
  sub_51 = sub_52;
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  if (controller_c_air_1) {
    sub_63 = false;
  } else {
    sub_63 = sub_54;
  };
  sub_62 = sub_63;
  if (controller_v_184) {
    v_523 = sub_62;
  } else {
    v_523 = false;
  };
  if (controller_c_air_1) {
    sub_65 = sub_54;
  } else {
    sub_65 = false;
  };
  if (controller_c_air_2) {
    sub_64 = sub_65;
  } else {
    sub_64 = false;
  };
  if (controller_v_184) {
    sub_61 = sub_64;
  } else {
    sub_61 = sub_62;
  };
  if (controller_v_185) {
    sub_60 = v_523;
  } else {
    sub_60 = sub_61;
  };
  sub_59 = sub_60;
  sub_58 = sub_59;
  sub_57 = sub_58;
  sub_56 = sub_57;
  sub_55 = sub_56;
  if (controller_air_failed_recovered) {
    v_524 = sub_55;
    sub_46 = sub_47;
  } else {
    v_524 = sub_47;
    sub_46 = sub_55;
  };
  if (controller_ck_50_1) {
    v_525 = v_524;
  } else {
    v_525 = sub_46;
  };
  if (controller_c_closet) {
    sub_45 = v_525;
  } else {
    sub_45 = false;
  };
  if (controller_v_184) {
    v_520 = sub_64;
  } else {
    v_520 = sub_52;
  };
  if (controller_c_air_2) {
    sub_74 = false;
  } else {
    sub_74 = sub_65;
  };
  if (controller_v_185) {
    sub_73 = v_520;
  } else {
    sub_73 = sub_74;
  };
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  if (controller_air_failed_recovered) {
    v_521 = sub_68;
    sub_67 = sub_47;
  } else {
    v_521 = sub_47;
    sub_67 = sub_68;
  };
  if (controller_ck_50_1) {
    v_522 = v_521;
  } else {
    v_522 = sub_67;
  };
  if (controller_c_closet) {
    sub_66 = false;
  } else {
    sub_66 = v_522;
  };
  if (controller_cleaner) {
    v_526 = sub_66;
    sub_44 = sub_45;
  } else {
    v_526 = sub_45;
    sub_44 = sub_66;
  };
  if (controller_ck_41_1) {
    sub_43 = v_526;
  } else {
    sub_43 = sub_44;
  };
  if (controller_worker) {
    v_543 = sub_43;
    sub_4 = sub_5;
  } else {
    v_543 = sub_5;
    sub_4 = sub_43;
  };
  if (controller_ck_39_1) {
    sub_3 = v_543;
  } else {
    sub_3 = sub_4;
  };
  if (controller_blind_failed_recovered) {
    v_512 = false;
    sub_86 = sub_13;
  } else {
    v_512 = sub_13;
    sub_86 = false;
  };
  if (controller_ck_60_1) {
    sub_85 = v_512;
  } else {
    sub_85 = sub_86;
  };
  sub_84 = sub_85;
  if (controller_light_failed_recovered) {
    v_513 = sub_84;
    sub_83 = sub_11;
  } else {
    v_513 = sub_11;
    sub_83 = sub_84;
  };
  if (controller_ck_55_1) {
    sub_82 = v_513;
  } else {
    sub_82 = sub_83;
  };
  if (controller_ck_53_1) {
    v_514 = sub_10;
  } else {
    v_514 = sub_82;
  };
  if (controller_light_switch) {
    v_515 = v_514;
  } else {
    v_515 = sub_10;
  };
  if (controller_c_light_1) {
    sub_81 = v_515;
  } else {
    sub_81 = sub_21;
  };
  if (controller_blind_failed_recovered) {
    v_508 = false;
    sub_92 = sub_41;
  } else {
    v_508 = sub_41;
    sub_92 = false;
  };
  if (controller_ck_60_1) {
    sub_91 = v_508;
  } else {
    sub_91 = sub_92;
  };
  sub_90 = sub_91;
  if (controller_light_failed_recovered) {
    v_509 = sub_90;
    sub_89 = sub_39;
  } else {
    v_509 = sub_39;
    sub_89 = sub_90;
  };
  if (controller_ck_55_1) {
    sub_88 = v_509;
  } else {
    sub_88 = sub_89;
  };
  if (controller_ck_53_1) {
    v_510 = sub_38;
  } else {
    v_510 = sub_88;
  };
  if (controller_light_switch) {
    v_511 = v_510;
  } else {
    v_511 = sub_38;
  };
  if (controller_c_light_1) {
    sub_87 = v_511;
  } else {
    sub_87 = sub_37;
  };
  if (controller_air_failed_recovered) {
    v_516 = sub_87;
    sub_80 = sub_81;
  } else {
    v_516 = sub_81;
    sub_80 = sub_87;
  };
  if (controller_ck_50_1) {
    v_517 = v_516;
  } else {
    v_517 = sub_80;
  };
  if (controller_c_closet) {
    sub_79 = false;
  } else {
    sub_79 = v_517;
  };
  if (controller_cleaner) {
    v_518 = sub_79;
    sub_78 = sub_7;
  } else {
    v_518 = sub_7;
    sub_78 = sub_79;
  };
  if (controller_ck_41_1) {
    sub_77 = v_518;
  } else {
    sub_77 = sub_78;
  };
  if (controller_blind_failed_recovered) {
    v_501 = false;
    sub_102 = sub_52;
  } else {
    v_501 = sub_52;
    sub_102 = false;
  };
  if (controller_ck_60_1) {
    sub_101 = v_501;
  } else {
    sub_101 = sub_102;
  };
  sub_100 = sub_101;
  if (controller_light_failed_recovered) {
    v_502 = sub_100;
    sub_99 = sub_50;
  } else {
    v_502 = sub_50;
    sub_99 = sub_100;
  };
  if (controller_ck_55_1) {
    sub_98 = v_502;
  } else {
    sub_98 = sub_99;
  };
  if (controller_ck_53_1) {
    v_503 = sub_49;
  } else {
    v_503 = sub_98;
  };
  if (controller_light_switch) {
    v_504 = v_503;
  } else {
    v_504 = sub_49;
  };
  if (controller_c_light_1) {
    sub_97 = v_504;
  } else {
    sub_97 = sub_48;
  };
  if (controller_blind_failed_recovered) {
    v_497 = false;
    sub_108 = sub_60;
  } else {
    v_497 = sub_60;
    sub_108 = false;
  };
  if (controller_ck_60_1) {
    sub_107 = v_497;
  } else {
    sub_107 = sub_108;
  };
  sub_106 = sub_107;
  if (controller_light_failed_recovered) {
    v_498 = sub_106;
    sub_105 = sub_58;
  } else {
    v_498 = sub_58;
    sub_105 = sub_106;
  };
  if (controller_ck_55_1) {
    sub_104 = v_498;
  } else {
    sub_104 = sub_105;
  };
  if (controller_ck_53_1) {
    v_499 = sub_57;
  } else {
    v_499 = sub_104;
  };
  if (controller_light_switch) {
    v_500 = v_499;
  } else {
    v_500 = sub_57;
  };
  if (controller_c_light_1) {
    sub_103 = v_500;
  } else {
    sub_103 = sub_56;
  };
  if (controller_air_failed_recovered) {
    v_505 = sub_103;
    sub_96 = sub_97;
  } else {
    v_505 = sub_97;
    sub_96 = sub_103;
  };
  if (controller_ck_50_1) {
    v_506 = v_505;
  } else {
    v_506 = sub_96;
  };
  if (controller_c_closet) {
    sub_95 = v_506;
  } else {
    sub_95 = false;
  };
  if (controller_blind_failed_recovered) {
    v_491 = false;
    sub_116 = sub_73;
  } else {
    v_491 = sub_73;
    sub_116 = false;
  };
  if (controller_ck_60_1) {
    sub_115 = v_491;
  } else {
    sub_115 = sub_116;
  };
  sub_114 = sub_115;
  if (controller_light_failed_recovered) {
    v_492 = sub_114;
    sub_113 = sub_71;
  } else {
    v_492 = sub_71;
    sub_113 = sub_114;
  };
  if (controller_ck_55_1) {
    sub_112 = v_492;
  } else {
    sub_112 = sub_113;
  };
  if (controller_ck_53_1) {
    v_493 = sub_70;
  } else {
    v_493 = sub_112;
  };
  if (controller_light_switch) {
    v_494 = v_493;
  } else {
    v_494 = sub_70;
  };
  if (controller_c_light_1) {
    sub_111 = v_494;
  } else {
    sub_111 = sub_69;
  };
  if (controller_air_failed_recovered) {
    v_495 = sub_111;
    sub_110 = sub_97;
  } else {
    v_495 = sub_97;
    sub_110 = sub_111;
  };
  if (controller_ck_50_1) {
    v_496 = v_495;
  } else {
    v_496 = sub_110;
  };
  if (controller_c_closet) {
    sub_109 = false;
  } else {
    sub_109 = v_496;
  };
  if (controller_cleaner) {
    v_507 = sub_109;
    sub_94 = sub_95;
  } else {
    v_507 = sub_95;
    sub_94 = sub_109;
  };
  if (controller_ck_41_1) {
    sub_93 = v_507;
  } else {
    sub_93 = sub_94;
  };
  if (controller_worker) {
    v_519 = sub_93;
    sub_76 = sub_77;
  } else {
    v_519 = sub_77;
    sub_76 = sub_93;
  };
  if (controller_ck_39_1) {
    sub_75 = v_519;
  } else {
    sub_75 = sub_76;
  };
  if (controller_change_shift) {
    v_544 = sub_75;
    sub_2 = sub_3;
  } else {
    v_544 = sub_3;
    sub_2 = sub_75;
  };
  if (controller_ck_1) {
    sub_1 = v_544;
  } else {
    sub_1 = sub_2;
  };
  sub_134 = true;
  sub_133 = sub_134;
  if (controller_c_pc) {
    sub_132 = false;
    sub_135 = sub_133;
  } else {
    sub_132 = sub_133;
    sub_135 = false;
  };
  if (controller_ck_43_1) {
    sub_131 = sub_135;
  } else {
    sub_131 = sub_132;
  };
  sub_130 = sub_131;
  sub_129 = sub_130;
  sub_128 = sub_129;
  sub_127 = sub_128;
  sub_126 = sub_127;
  if (controller_blind_failed_recovered) {
    v_480 = sub_13;
    sub_137 = sub_129;
  } else {
    v_480 = sub_129;
    sub_137 = sub_13;
  };
  if (controller_ck_60_1) {
    v_481 = v_480;
  } else {
    v_481 = sub_137;
  };
  if (controller_blind_switch) {
    sub_136 = v_481;
  } else {
    sub_136 = sub_128;
  };
  if (controller_light_failed_recovered) {
    v_482 = false;
  } else {
    v_482 = sub_136;
  };
  if (controller_ck_58_1) {
    sub_125 = sub_136;
  } else {
    sub_125 = sub_126;
  };
  if (controller_light_failed_recovered) {
    v_479 = false;
    sub_139 = sub_127;
  } else {
    v_479 = sub_127;
    sub_139 = false;
  };
  if (controller_ck_55_1) {
    sub_138 = v_479;
  } else {
    sub_138 = sub_139;
  };
  if (controller_light_failed_recovered) {
    sub_140 = sub_136;
  } else {
    sub_140 = false;
  };
  if (controller_ck_55_1) {
    v_483 = v_482;
  } else {
    v_483 = sub_140;
  };
  if (controller_ck_58_1) {
    v_484 = v_483;
  } else {
    v_484 = sub_138;
  };
  if (controller_ck_53_1) {
    v_485 = v_484;
  } else {
    v_485 = sub_125;
  };
  if (controller_light_switch) {
    v_486 = v_485;
  } else {
    v_486 = sub_125;
  };
  if (controller_c_light_1) {
    sub_124 = v_486;
  } else {
    sub_124 = sub_125;
  };
  if (controller_c_air_1) {
    sub_149 = sub_131;
  } else {
    sub_149 = false;
  };
  if (controller_c_air_2) {
    v_472 = false;
  } else {
    v_472 = sub_149;
  };
  if (controller_v_184) {
    v_473 = v_472;
  } else {
    v_473 = false;
  };
  if (controller_c_air_2) {
    sub_148 = sub_149;
  } else {
    sub_148 = false;
  };
  if (controller_c_air_1) {
    sub_151 = false;
  } else {
    sub_151 = sub_131;
  };
  sub_150 = sub_151;
  if (controller_v_184) {
    sub_147 = sub_150;
  } else {
    sub_147 = sub_148;
  };
  if (controller_v_185) {
    sub_146 = v_473;
  } else {
    sub_146 = sub_147;
  };
  sub_145 = sub_146;
  sub_144 = sub_145;
  sub_143 = sub_144;
  if (controller_blind_failed_recovered) {
    v_470 = sub_26;
    sub_153 = sub_146;
  } else {
    v_470 = sub_146;
    sub_153 = sub_26;
  };
  if (controller_ck_60_1) {
    v_471 = v_470;
  } else {
    v_471 = sub_153;
  };
  if (controller_blind_switch) {
    sub_152 = v_471;
  } else {
    sub_152 = sub_145;
  };
  if (controller_light_failed_recovered) {
    v_474 = false;
  } else {
    v_474 = sub_152;
  };
  if (controller_ck_58_1) {
    sub_142 = sub_152;
  } else {
    sub_142 = sub_143;
  };
  if (controller_light_failed_recovered) {
    v_469 = false;
    sub_155 = sub_144;
  } else {
    v_469 = sub_144;
    sub_155 = false;
  };
  if (controller_ck_55_1) {
    sub_154 = v_469;
  } else {
    sub_154 = sub_155;
  };
  if (controller_light_failed_recovered) {
    sub_156 = sub_152;
  } else {
    sub_156 = false;
  };
  if (controller_ck_55_1) {
    v_475 = v_474;
  } else {
    v_475 = sub_156;
  };
  if (controller_ck_58_1) {
    v_476 = v_475;
  } else {
    v_476 = sub_154;
  };
  if (controller_ck_53_1) {
    v_477 = v_476;
  } else {
    v_477 = sub_142;
  };
  if (controller_light_switch) {
    v_478 = v_477;
  } else {
    v_478 = sub_142;
  };
  if (controller_c_light_1) {
    sub_141 = v_478;
  } else {
    sub_141 = sub_142;
  };
  if (controller_air_failed_recovered) {
    v_487 = sub_141;
    sub_123 = sub_124;
  } else {
    v_487 = sub_124;
    sub_123 = sub_141;
  };
  if (controller_ck_50_1) {
    v_488 = v_487;
  } else {
    v_488 = sub_123;
  };
  if (controller_c_closet) {
    sub_122 = v_488;
  } else {
    sub_122 = false;
  };
  if (controller_light_failed_recovered) {
    v_464 = sub_136;
    sub_162 = sub_127;
  } else {
    v_464 = sub_127;
    sub_162 = sub_136;
  };
  if (controller_ck_55_1) {
    sub_161 = v_464;
  } else {
    sub_161 = sub_162;
  };
  if (controller_ck_58_1) {
    sub_160 = sub_126;
  } else {
    sub_160 = sub_161;
  };
  if (controller_ck_53_1) {
    v_465 = sub_126;
  } else {
    v_465 = sub_160;
  };
  if (controller_light_switch) {
    v_466 = v_465;
  } else {
    v_466 = sub_126;
  };
  if (controller_c_light_1) {
    sub_159 = v_466;
  } else {
    sub_159 = sub_126;
  };
  if (controller_v_184) {
    v_460 = sub_150;
    sub_170 = sub_148;
  } else {
    v_460 = false;
    sub_170 = sub_150;
  };
  if (controller_v_185) {
    sub_169 = v_460;
  } else {
    sub_169 = sub_170;
  };
  sub_168 = sub_169;
  sub_167 = sub_168;
  if (controller_blind_failed_recovered) {
    v_458 = sub_41;
    sub_172 = sub_169;
  } else {
    v_458 = sub_169;
    sub_172 = sub_41;
  };
  if (controller_ck_60_1) {
    v_459 = v_458;
  } else {
    v_459 = sub_172;
  };
  if (controller_blind_switch) {
    sub_171 = v_459;
  } else {
    sub_171 = sub_168;
  };
  if (controller_light_failed_recovered) {
    v_461 = sub_171;
    sub_166 = sub_167;
  } else {
    v_461 = sub_167;
    sub_166 = sub_171;
  };
  if (controller_ck_55_1) {
    sub_165 = v_461;
  } else {
    sub_165 = sub_166;
  };
  sub_173 = sub_167;
  if (controller_ck_58_1) {
    sub_164 = sub_173;
  } else {
    sub_164 = sub_165;
  };
  if (controller_ck_53_1) {
    v_462 = sub_173;
  } else {
    v_462 = sub_164;
  };
  if (controller_light_switch) {
    v_463 = v_462;
  } else {
    v_463 = sub_173;
  };
  if (controller_c_light_1) {
    sub_163 = v_463;
  } else {
    sub_163 = sub_173;
  };
  if (controller_air_failed_recovered) {
    v_467 = sub_163;
    sub_158 = sub_159;
  } else {
    v_467 = sub_159;
    sub_158 = sub_163;
  };
  if (controller_ck_50_1) {
    v_468 = v_467;
  } else {
    v_468 = sub_158;
  };
  if (controller_c_closet) {
    sub_157 = false;
  } else {
    sub_157 = v_468;
  };
  if (controller_cleaner) {
    v_489 = sub_157;
    sub_121 = sub_122;
  } else {
    v_489 = sub_122;
    sub_121 = sub_157;
  };
  if (controller_ck_41_1) {
    sub_120 = v_489;
  } else {
    sub_120 = sub_121;
  };
  if (controller_ck_43_1) {
    sub_186 = sub_132;
  } else {
    sub_186 = sub_135;
  };
  sub_185 = sub_186;
  sub_184 = sub_185;
  sub_183 = sub_184;
  sub_182 = sub_183;
  if (controller_blind_failed_recovered) {
    v_450 = sub_52;
    sub_188 = sub_184;
  } else {
    v_450 = sub_184;
    sub_188 = sub_52;
  };
  if (controller_ck_60_1) {
    v_451 = v_450;
  } else {
    v_451 = sub_188;
  };
  if (controller_blind_switch) {
    sub_187 = v_451;
  } else {
    sub_187 = sub_183;
  };
  if (controller_light_failed_recovered) {
    v_452 = sub_187;
    sub_181 = sub_182;
  } else {
    v_452 = sub_182;
    sub_181 = sub_187;
  };
  if (controller_ck_55_1) {
    sub_180 = v_452;
  } else {
    sub_180 = sub_181;
  };
  sub_189 = sub_182;
  if (controller_ck_58_1) {
    sub_179 = sub_189;
  } else {
    sub_179 = sub_180;
  };
  if (controller_ck_53_1) {
    v_453 = sub_189;
  } else {
    v_453 = sub_179;
  };
  if (controller_light_switch) {
    v_454 = v_453;
  } else {
    v_454 = sub_189;
  };
  if (controller_c_light_1) {
    sub_178 = v_454;
  } else {
    sub_178 = sub_189;
  };
  if (controller_c_air_1) {
    sub_199 = false;
  } else {
    sub_199 = sub_186;
  };
  sub_198 = sub_199;
  if (controller_v_184) {
    v_446 = sub_198;
  } else {
    v_446 = false;
  };
  if (controller_c_air_1) {
    sub_201 = sub_186;
  } else {
    sub_201 = false;
  };
  if (controller_c_air_2) {
    sub_200 = sub_201;
  } else {
    sub_200 = false;
  };
  if (controller_v_184) {
    sub_197 = sub_200;
  } else {
    sub_197 = sub_198;
  };
  if (controller_v_185) {
    sub_196 = v_446;
  } else {
    sub_196 = sub_197;
  };
  sub_195 = sub_196;
  sub_194 = sub_195;
  if (controller_blind_failed_recovered) {
    v_444 = sub_60;
    sub_203 = sub_196;
  } else {
    v_444 = sub_196;
    sub_203 = sub_60;
  };
  if (controller_ck_60_1) {
    v_445 = v_444;
  } else {
    v_445 = sub_203;
  };
  if (controller_blind_switch) {
    sub_202 = v_445;
  } else {
    sub_202 = sub_195;
  };
  if (controller_light_failed_recovered) {
    v_447 = sub_202;
    sub_193 = sub_194;
  } else {
    v_447 = sub_194;
    sub_193 = sub_202;
  };
  if (controller_ck_55_1) {
    sub_192 = v_447;
  } else {
    sub_192 = sub_193;
  };
  sub_204 = sub_194;
  if (controller_ck_58_1) {
    sub_191 = sub_204;
  } else {
    sub_191 = sub_192;
  };
  if (controller_ck_53_1) {
    v_448 = sub_204;
  } else {
    v_448 = sub_191;
  };
  if (controller_light_switch) {
    v_449 = v_448;
  } else {
    v_449 = sub_204;
  };
  if (controller_c_light_1) {
    sub_190 = v_449;
  } else {
    sub_190 = sub_204;
  };
  if (controller_air_failed_recovered) {
    v_455 = sub_190;
    sub_177 = sub_178;
  } else {
    v_455 = sub_178;
    sub_177 = sub_190;
  };
  if (controller_ck_50_1) {
    v_456 = v_455;
  } else {
    v_456 = sub_177;
  };
  if (controller_c_closet) {
    sub_176 = v_456;
  } else {
    sub_176 = false;
  };
  if (controller_v_184) {
    v_438 = sub_200;
  } else {
    v_438 = sub_184;
  };
  if (controller_c_air_2) {
    sub_214 = false;
  } else {
    sub_214 = sub_201;
  };
  if (controller_v_185) {
    sub_213 = v_438;
  } else {
    sub_213 = sub_214;
  };
  sub_212 = sub_213;
  sub_211 = sub_212;
  if (controller_blind_failed_recovered) {
    v_436 = sub_73;
    sub_216 = sub_213;
  } else {
    v_436 = sub_213;
    sub_216 = sub_73;
  };
  if (controller_ck_60_1) {
    v_437 = v_436;
  } else {
    v_437 = sub_216;
  };
  if (controller_blind_switch) {
    sub_215 = v_437;
  } else {
    sub_215 = sub_212;
  };
  if (controller_light_failed_recovered) {
    v_439 = sub_215;
    sub_210 = sub_211;
  } else {
    v_439 = sub_211;
    sub_210 = sub_215;
  };
  if (controller_ck_55_1) {
    sub_209 = v_439;
  } else {
    sub_209 = sub_210;
  };
  sub_217 = sub_211;
  if (controller_ck_58_1) {
    sub_208 = sub_217;
  } else {
    sub_208 = sub_209;
  };
  if (controller_ck_53_1) {
    v_440 = sub_217;
  } else {
    v_440 = sub_208;
  };
  if (controller_light_switch) {
    v_441 = v_440;
  } else {
    v_441 = sub_217;
  };
  if (controller_c_light_1) {
    sub_207 = v_441;
  } else {
    sub_207 = sub_217;
  };
  if (controller_air_failed_recovered) {
    v_442 = sub_207;
    sub_206 = sub_178;
  } else {
    v_442 = sub_178;
    sub_206 = sub_207;
  };
  if (controller_ck_50_1) {
    v_443 = v_442;
  } else {
    v_443 = sub_206;
  };
  if (controller_c_closet) {
    sub_205 = false;
  } else {
    sub_205 = v_443;
  };
  if (controller_cleaner) {
    v_457 = sub_205;
    sub_175 = sub_176;
  } else {
    v_457 = sub_176;
    sub_175 = sub_205;
  };
  if (controller_ck_41_1) {
    sub_174 = v_457;
  } else {
    sub_174 = sub_175;
  };
  if (controller_worker) {
    v_490 = sub_174;
    sub_119 = sub_120;
  } else {
    v_490 = sub_120;
    sub_119 = sub_174;
  };
  if (controller_ck_39_1) {
    sub_118 = v_490;
  } else {
    sub_118 = sub_119;
  };
  if (controller_blind_failed_recovered) {
    v_428 = false;
    sub_229 = sub_129;
  } else {
    v_428 = sub_129;
    sub_229 = false;
  };
  if (controller_ck_60_1) {
    sub_228 = v_428;
  } else {
    sub_228 = sub_229;
  };
  sub_227 = sub_228;
  if (controller_light_failed_recovered) {
    v_429 = sub_227;
    sub_226 = sub_127;
  } else {
    v_429 = sub_127;
    sub_226 = sub_227;
  };
  if (controller_ck_55_1) {
    sub_225 = v_429;
  } else {
    sub_225 = sub_226;
  };
  if (controller_ck_58_1) {
    sub_230 = sub_161;
  } else {
    sub_230 = sub_126;
  };
  if (controller_ck_53_1) {
    v_430 = sub_230;
  } else {
    v_430 = sub_225;
  };
  if (controller_light_switch) {
    v_431 = v_430;
  } else {
    v_431 = sub_230;
  };
  if (controller_c_light_1) {
    sub_224 = v_431;
  } else {
    sub_224 = sub_230;
  };
  if (controller_blind_failed_recovered) {
    v_424 = false;
    sub_236 = sub_169;
  } else {
    v_424 = sub_169;
    sub_236 = false;
  };
  if (controller_ck_60_1) {
    sub_235 = v_424;
  } else {
    sub_235 = sub_236;
  };
  sub_234 = sub_235;
  if (controller_light_failed_recovered) {
    v_425 = sub_234;
    sub_233 = sub_167;
  } else {
    v_425 = sub_167;
    sub_233 = sub_234;
  };
  if (controller_ck_55_1) {
    sub_232 = v_425;
  } else {
    sub_232 = sub_233;
  };
  if (controller_ck_58_1) {
    sub_237 = sub_165;
  } else {
    sub_237 = sub_173;
  };
  if (controller_ck_53_1) {
    v_426 = sub_237;
  } else {
    v_426 = sub_232;
  };
  if (controller_light_switch) {
    v_427 = v_426;
  } else {
    v_427 = sub_237;
  };
  if (controller_c_light_1) {
    sub_231 = v_427;
  } else {
    sub_231 = sub_237;
  };
  if (controller_air_failed_recovered) {
    v_432 = sub_231;
    sub_223 = sub_224;
  } else {
    v_432 = sub_224;
    sub_223 = sub_231;
  };
  if (controller_ck_50_1) {
    v_433 = v_432;
  } else {
    v_433 = sub_223;
  };
  if (controller_c_closet) {
    sub_222 = false;
  } else {
    sub_222 = v_433;
  };
  if (controller_cleaner) {
    v_434 = sub_222;
    sub_221 = sub_122;
  } else {
    v_434 = sub_122;
    sub_221 = sub_222;
  };
  if (controller_ck_41_1) {
    sub_220 = v_434;
  } else {
    sub_220 = sub_221;
  };
  if (controller_blind_failed_recovered) {
    v_417 = false;
    sub_247 = sub_184;
  } else {
    v_417 = sub_184;
    sub_247 = false;
  };
  if (controller_ck_60_1) {
    sub_246 = v_417;
  } else {
    sub_246 = sub_247;
  };
  sub_245 = sub_246;
  if (controller_light_failed_recovered) {
    v_418 = sub_245;
    sub_244 = sub_182;
  } else {
    v_418 = sub_182;
    sub_244 = sub_245;
  };
  if (controller_ck_55_1) {
    sub_243 = v_418;
  } else {
    sub_243 = sub_244;
  };
  if (controller_ck_58_1) {
    sub_248 = sub_180;
  } else {
    sub_248 = sub_189;
  };
  if (controller_ck_53_1) {
    v_419 = sub_248;
  } else {
    v_419 = sub_243;
  };
  if (controller_light_switch) {
    v_420 = v_419;
  } else {
    v_420 = sub_248;
  };
  if (controller_c_light_1) {
    sub_242 = v_420;
  } else {
    sub_242 = sub_248;
  };
  if (controller_blind_failed_recovered) {
    v_413 = false;
    sub_254 = sub_196;
  } else {
    v_413 = sub_196;
    sub_254 = false;
  };
  if (controller_ck_60_1) {
    sub_253 = v_413;
  } else {
    sub_253 = sub_254;
  };
  sub_252 = sub_253;
  if (controller_light_failed_recovered) {
    v_414 = sub_252;
    sub_251 = sub_194;
  } else {
    v_414 = sub_194;
    sub_251 = sub_252;
  };
  if (controller_ck_55_1) {
    sub_250 = v_414;
  } else {
    sub_250 = sub_251;
  };
  if (controller_ck_58_1) {
    sub_255 = sub_192;
  } else {
    sub_255 = sub_204;
  };
  if (controller_ck_53_1) {
    v_415 = sub_255;
  } else {
    v_415 = sub_250;
  };
  if (controller_light_switch) {
    v_416 = v_415;
  } else {
    v_416 = sub_255;
  };
  if (controller_c_light_1) {
    sub_249 = v_416;
  } else {
    sub_249 = sub_255;
  };
  if (controller_air_failed_recovered) {
    v_421 = sub_249;
    sub_241 = sub_242;
  } else {
    v_421 = sub_242;
    sub_241 = sub_249;
  };
  if (controller_ck_50_1) {
    v_422 = v_421;
  } else {
    v_422 = sub_241;
  };
  if (controller_c_closet) {
    sub_240 = v_422;
  } else {
    sub_240 = false;
  };
  if (controller_blind_failed_recovered) {
    v = false;
    sub_263 = sub_213;
  } else {
    v = sub_213;
    sub_263 = false;
  };
  if (controller_ck_60_1) {
    sub_262 = v;
  } else {
    sub_262 = sub_263;
  };
  sub_261 = sub_262;
  if (controller_light_failed_recovered) {
    v_408 = sub_261;
    sub_260 = sub_211;
  } else {
    v_408 = sub_211;
    sub_260 = sub_261;
  };
  if (controller_ck_55_1) {
    sub_259 = v_408;
  } else {
    sub_259 = sub_260;
  };
  if (controller_ck_58_1) {
    sub_264 = sub_209;
  } else {
    sub_264 = sub_217;
  };
  if (controller_ck_53_1) {
    v_409 = sub_264;
  } else {
    v_409 = sub_259;
  };
  if (controller_light_switch) {
    v_410 = v_409;
  } else {
    v_410 = sub_264;
  };
  if (controller_c_light_1) {
    sub_258 = v_410;
  } else {
    sub_258 = sub_264;
  };
  if (controller_air_failed_recovered) {
    v_411 = sub_258;
    sub_257 = sub_242;
  } else {
    v_411 = sub_242;
    sub_257 = sub_258;
  };
  if (controller_ck_50_1) {
    v_412 = v_411;
  } else {
    v_412 = sub_257;
  };
  if (controller_c_closet) {
    sub_256 = false;
  } else {
    sub_256 = v_412;
  };
  if (controller_cleaner) {
    v_423 = sub_256;
    sub_239 = sub_240;
  } else {
    v_423 = sub_240;
    sub_239 = sub_256;
  };
  if (controller_ck_41_1) {
    sub_238 = v_423;
  } else {
    sub_238 = sub_239;
  };
  if (controller_worker) {
    v_435 = sub_238;
    sub_219 = sub_220;
  } else {
    v_435 = sub_220;
    sub_219 = sub_238;
  };
  if (controller_ck_39_1) {
    sub_218 = v_435;
  } else {
    sub_218 = sub_219;
  };
  if (controller_change_shift) {
    v_545 = sub_218;
    sub_117 = sub_118;
  } else {
    v_545 = sub_118;
    sub_117 = sub_218;
  };
  if (controller_ck_1) {
    v_546 = v_545;
  } else {
    v_546 = sub_117;
  };
  if (p_controller_c_blind_1) {
    sub_0 = v_546;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_blind_1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_light_1_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered, int controller_ck_1,
  int controller_pnr_18, int controller_ck_35_1, int controller_pnr_17,
  int controller_ck_37_1, int controller_pnr_16, int controller_ck_39_1,
  int controller_pnr_15, int controller_ck_41_1, int controller_pnr_14,
  int controller_ck_43_1, int controller_pnr_13, int controller_ck_45_1,
  int controller_pnr_12, int controller_v_185, int controller_v_184,
  int controller_pnr_11, int controller_ck_50_1, int controller_pnr_10,
  int controller_ck_53_1, int controller_pnr_9, int controller_ck_55_1,
  int controller_pnr_8, int controller_ck_58_1, int controller_pnr_7,
  int controller_ck_60_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_light_2, int p_controller_c_blind_1,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_closet, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_1_out* _out) {
  
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
  sub_18 = false;
  sub_17 = sub_18;
  if (controller_c_pc) {
    sub_16 = false;
    sub_19 = sub_17;
  } else {
    sub_16 = sub_17;
    sub_19 = false;
  };
  if (controller_ck_43_1) {
    sub_15 = sub_19;
  } else {
    sub_15 = sub_16;
  };
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  if (controller_c_air_1) {
    sub_27 = sub_15;
  } else {
    sub_27 = false;
  };
  if (controller_c_air_2) {
    v_600 = false;
  } else {
    v_600 = sub_27;
  };
  if (controller_v_184) {
    v_601 = v_600;
  } else {
    v_601 = false;
  };
  if (controller_c_air_2) {
    sub_26 = sub_27;
  } else {
    sub_26 = false;
  };
  if (controller_c_air_1) {
    sub_29 = false;
  } else {
    sub_29 = sub_15;
  };
  sub_28 = sub_29;
  if (controller_v_184) {
    sub_25 = sub_28;
  } else {
    sub_25 = sub_26;
  };
  if (controller_v_185) {
    sub_24 = v_601;
  } else {
    sub_24 = sub_25;
  };
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  if (controller_air_failed_recovered) {
    v_602 = sub_20;
    sub_8 = sub_9;
  } else {
    v_602 = sub_9;
    sub_8 = sub_20;
  };
  if (controller_ck_50_1) {
    sub_7 = v_602;
  } else {
    sub_7 = sub_8;
  };
  sub_40 = true;
  sub_39 = sub_40;
  if (controller_c_pc) {
    sub_38 = false;
    sub_41 = sub_39;
  } else {
    sub_38 = sub_39;
    sub_41 = false;
  };
  if (controller_ck_43_1) {
    sub_37 = sub_41;
  } else {
    sub_37 = sub_38;
  };
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  if (controller_light_failed_recovered) {
    v_597 = sub_11;
  } else {
    v_597 = sub_33;
  };
  sub_32 = sub_33;
  if (controller_light_failed_recovered) {
    sub_42 = sub_33;
  } else {
    sub_42 = sub_11;
  };
  if (controller_ck_55_1) {
    v_598 = v_597;
  } else {
    v_598 = sub_42;
  };
  if (controller_ck_53_1) {
    v_599 = v_598;
  } else {
    v_599 = sub_32;
  };
  if (controller_light_switch) {
    sub_31 = v_599;
  } else {
    sub_31 = sub_32;
  };
  if (controller_c_air_1) {
    sub_50 = sub_37;
  } else {
    sub_50 = false;
  };
  if (controller_c_air_2) {
    v_592 = false;
  } else {
    v_592 = sub_50;
  };
  if (controller_v_184) {
    v_593 = v_592;
  } else {
    v_593 = false;
  };
  if (controller_c_air_2) {
    sub_49 = sub_50;
  } else {
    sub_49 = false;
  };
  if (controller_c_air_1) {
    sub_52 = false;
  } else {
    sub_52 = sub_37;
  };
  sub_51 = sub_52;
  if (controller_v_184) {
    sub_48 = sub_51;
  } else {
    sub_48 = sub_49;
  };
  if (controller_v_185) {
    sub_47 = v_593;
  } else {
    sub_47 = sub_48;
  };
  sub_46 = sub_47;
  sub_45 = sub_46;
  if (controller_light_failed_recovered) {
    v_594 = sub_22;
  } else {
    v_594 = sub_45;
  };
  sub_44 = sub_45;
  if (controller_light_failed_recovered) {
    sub_53 = sub_45;
  } else {
    sub_53 = sub_22;
  };
  if (controller_ck_55_1) {
    v_595 = v_594;
  } else {
    v_595 = sub_53;
  };
  if (controller_ck_53_1) {
    v_596 = v_595;
  } else {
    v_596 = sub_44;
  };
  if (controller_light_switch) {
    sub_43 = v_596;
  } else {
    sub_43 = sub_44;
  };
  if (controller_air_failed_recovered) {
    v_603 = sub_43;
    sub_30 = sub_31;
  } else {
    v_603 = sub_31;
    sub_30 = sub_43;
  };
  if (controller_ck_50_1) {
    v_604 = v_603;
  } else {
    v_604 = sub_30;
  };
  if (p_controller_c_light_1) {
    v_605 = v_604;
  } else {
    v_605 = sub_7;
  };
  if (controller_c_closet) {
    sub_6 = v_605;
  } else {
    sub_6 = false;
  };
  if (controller_v_184) {
    v_587 = sub_28;
    sub_62 = sub_26;
  } else {
    v_587 = false;
    sub_62 = sub_28;
  };
  if (controller_v_185) {
    sub_61 = v_587;
  } else {
    sub_61 = sub_62;
  };
  sub_60 = sub_61;
  sub_59 = sub_60;
  sub_58 = sub_59;
  sub_57 = sub_58;
  if (controller_air_failed_recovered) {
    v_588 = sub_57;
    sub_56 = sub_9;
  } else {
    v_588 = sub_9;
    sub_56 = sub_57;
  };
  if (controller_ck_50_1) {
    sub_55 = v_588;
  } else {
    sub_55 = sub_56;
  };
  sub_64 = sub_32;
  if (controller_v_184) {
    v_586 = sub_51;
    sub_70 = sub_49;
  } else {
    v_586 = false;
    sub_70 = sub_51;
  };
  if (controller_v_185) {
    sub_69 = v_586;
  } else {
    sub_69 = sub_70;
  };
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_66 = sub_67;
  sub_65 = sub_66;
  if (controller_air_failed_recovered) {
    v_589 = sub_65;
    sub_63 = sub_64;
  } else {
    v_589 = sub_64;
    sub_63 = sub_65;
  };
  if (controller_ck_50_1) {
    v_590 = v_589;
  } else {
    v_590 = sub_63;
  };
  if (p_controller_c_light_1) {
    v_591 = v_590;
  } else {
    v_591 = sub_55;
  };
  if (controller_c_closet) {
    sub_54 = false;
  } else {
    sub_54 = v_591;
  };
  if (controller_cleaner) {
    v_606 = sub_54;
    sub_5 = sub_6;
  } else {
    v_606 = sub_6;
    sub_5 = sub_54;
  };
  if (controller_ck_41_1) {
    sub_4 = v_606;
  } else {
    sub_4 = sub_5;
  };
  if (controller_ck_43_1) {
    sub_82 = sub_16;
  } else {
    sub_82 = sub_19;
  };
  sub_81 = sub_82;
  sub_80 = sub_81;
  sub_79 = sub_80;
  sub_78 = sub_79;
  sub_77 = sub_78;
  sub_76 = sub_77;
  if (controller_c_air_1) {
    sub_90 = false;
  } else {
    sub_90 = sub_82;
  };
  sub_89 = sub_90;
  if (controller_v_184) {
    v_580 = sub_89;
  } else {
    v_580 = false;
  };
  if (controller_c_air_1) {
    sub_92 = sub_82;
  } else {
    sub_92 = false;
  };
  if (controller_c_air_2) {
    sub_91 = sub_92;
  } else {
    sub_91 = false;
  };
  if (controller_v_184) {
    sub_88 = sub_91;
  } else {
    sub_88 = sub_89;
  };
  if (controller_v_185) {
    sub_87 = v_580;
  } else {
    sub_87 = sub_88;
  };
  sub_86 = sub_87;
  sub_85 = sub_86;
  sub_84 = sub_85;
  sub_83 = sub_84;
  if (controller_air_failed_recovered) {
    v_581 = sub_83;
    sub_75 = sub_76;
  } else {
    v_581 = sub_76;
    sub_75 = sub_83;
  };
  if (controller_ck_50_1) {
    sub_74 = v_581;
  } else {
    sub_74 = sub_75;
  };
  if (controller_ck_43_1) {
    sub_100 = sub_38;
  } else {
    sub_100 = sub_41;
  };
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  sub_94 = sub_95;
  if (controller_c_air_1) {
    sub_108 = false;
  } else {
    sub_108 = sub_100;
  };
  sub_107 = sub_108;
  if (controller_v_184) {
    v_579 = sub_107;
  } else {
    v_579 = false;
  };
  if (controller_c_air_1) {
    sub_110 = sub_100;
  } else {
    sub_110 = false;
  };
  if (controller_c_air_2) {
    sub_109 = sub_110;
  } else {
    sub_109 = false;
  };
  if (controller_v_184) {
    sub_106 = sub_109;
  } else {
    sub_106 = sub_107;
  };
  if (controller_v_185) {
    sub_105 = v_579;
  } else {
    sub_105 = sub_106;
  };
  sub_104 = sub_105;
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  if (controller_air_failed_recovered) {
    v_582 = sub_101;
    sub_93 = sub_94;
  } else {
    v_582 = sub_94;
    sub_93 = sub_101;
  };
  if (controller_ck_50_1) {
    v_583 = v_582;
  } else {
    v_583 = sub_93;
  };
  if (p_controller_c_light_1) {
    v_584 = v_583;
  } else {
    v_584 = sub_74;
  };
  if (controller_c_closet) {
    sub_73 = v_584;
  } else {
    sub_73 = false;
  };
  if (controller_v_184) {
    v_574 = sub_91;
  } else {
    v_574 = sub_80;
  };
  if (controller_c_air_2) {
    sub_119 = false;
  } else {
    sub_119 = sub_92;
  };
  if (controller_v_185) {
    sub_118 = v_574;
  } else {
    sub_118 = sub_119;
  };
  sub_117 = sub_118;
  sub_116 = sub_117;
  sub_115 = sub_116;
  sub_114 = sub_115;
  if (controller_air_failed_recovered) {
    v_575 = sub_114;
    sub_113 = sub_76;
  } else {
    v_575 = sub_76;
    sub_113 = sub_114;
  };
  if (controller_ck_50_1) {
    sub_112 = v_575;
  } else {
    sub_112 = sub_113;
  };
  if (controller_v_184) {
    v_573 = sub_109;
  } else {
    v_573 = sub_98;
  };
  if (controller_c_air_2) {
    sub_126 = false;
  } else {
    sub_126 = sub_110;
  };
  if (controller_v_185) {
    sub_125 = v_573;
  } else {
    sub_125 = sub_126;
  };
  sub_124 = sub_125;
  sub_123 = sub_124;
  sub_122 = sub_123;
  sub_121 = sub_122;
  if (controller_air_failed_recovered) {
    v_576 = sub_121;
    sub_120 = sub_94;
  } else {
    v_576 = sub_94;
    sub_120 = sub_121;
  };
  if (controller_ck_50_1) {
    v_577 = v_576;
  } else {
    v_577 = sub_120;
  };
  if (p_controller_c_light_1) {
    v_578 = v_577;
  } else {
    v_578 = sub_112;
  };
  if (controller_c_closet) {
    sub_111 = false;
  } else {
    sub_111 = v_578;
  };
  if (controller_cleaner) {
    v_585 = sub_111;
    sub_72 = sub_73;
  } else {
    v_585 = sub_73;
    sub_72 = sub_111;
  };
  if (controller_ck_41_1) {
    sub_71 = v_585;
  } else {
    sub_71 = sub_72;
  };
  if (controller_worker) {
    v_607 = sub_71;
    sub_3 = sub_4;
  } else {
    v_607 = sub_4;
    sub_3 = sub_71;
  };
  if (controller_ck_39_1) {
    sub_2 = v_607;
  } else {
    sub_2 = sub_3;
  };
  if (controller_blind_failed_recovered) {
    v_565 = sub_13;
    sub_138 = sub_35;
  } else {
    v_565 = sub_35;
    sub_138 = sub_13;
  };
  if (controller_ck_60_1) {
    sub_137 = v_565;
  } else {
    sub_137 = sub_138;
  };
  sub_136 = sub_137;
  if (controller_light_failed_recovered) {
    v_566 = sub_136;
    sub_135 = sub_33;
  } else {
    v_566 = sub_33;
    sub_135 = sub_136;
  };
  if (controller_ck_55_1) {
    sub_134 = v_566;
  } else {
    sub_134 = sub_135;
  };
  if (controller_ck_53_1) {
    v_567 = sub_32;
  } else {
    v_567 = sub_134;
  };
  if (controller_light_switch) {
    sub_133 = v_567;
  } else {
    sub_133 = sub_32;
  };
  if (controller_blind_failed_recovered) {
    v_562 = sub_61;
    sub_144 = sub_69;
  } else {
    v_562 = sub_69;
    sub_144 = sub_61;
  };
  if (controller_ck_60_1) {
    sub_143 = v_562;
  } else {
    sub_143 = sub_144;
  };
  sub_142 = sub_143;
  if (controller_light_failed_recovered) {
    v_563 = sub_142;
    sub_141 = sub_67;
  } else {
    v_563 = sub_67;
    sub_141 = sub_142;
  };
  if (controller_ck_55_1) {
    sub_140 = v_563;
  } else {
    sub_140 = sub_141;
  };
  if (controller_ck_53_1) {
    v_564 = sub_66;
  } else {
    v_564 = sub_140;
  };
  if (controller_light_switch) {
    sub_139 = v_564;
  } else {
    sub_139 = sub_66;
  };
  if (controller_air_failed_recovered) {
    v_568 = sub_139;
    sub_132 = sub_133;
  } else {
    v_568 = sub_133;
    sub_132 = sub_139;
  };
  if (controller_ck_50_1) {
    v_569 = v_568;
  } else {
    v_569 = sub_132;
  };
  if (p_controller_c_light_1) {
    v_570 = v_569;
  } else {
    v_570 = sub_55;
  };
  if (controller_c_closet) {
    sub_131 = false;
  } else {
    sub_131 = v_570;
  };
  if (controller_cleaner) {
    v_571 = sub_131;
    sub_130 = sub_6;
  } else {
    v_571 = sub_6;
    sub_130 = sub_131;
  };
  if (controller_ck_41_1) {
    sub_129 = v_571;
  } else {
    sub_129 = sub_130;
  };
  if (controller_blind_failed_recovered) {
    v_555 = sub_80;
    sub_154 = sub_98;
  } else {
    v_555 = sub_98;
    sub_154 = sub_80;
  };
  if (controller_ck_60_1) {
    sub_153 = v_555;
  } else {
    sub_153 = sub_154;
  };
  sub_152 = sub_153;
  if (controller_light_failed_recovered) {
    v_556 = sub_152;
    sub_151 = sub_96;
  } else {
    v_556 = sub_96;
    sub_151 = sub_152;
  };
  if (controller_ck_55_1) {
    sub_150 = v_556;
  } else {
    sub_150 = sub_151;
  };
  if (controller_ck_53_1) {
    v_557 = sub_95;
  } else {
    v_557 = sub_150;
  };
  if (controller_light_switch) {
    sub_149 = v_557;
  } else {
    sub_149 = sub_95;
  };
  if (controller_blind_failed_recovered) {
    v_552 = sub_87;
    sub_160 = sub_105;
  } else {
    v_552 = sub_105;
    sub_160 = sub_87;
  };
  if (controller_ck_60_1) {
    sub_159 = v_552;
  } else {
    sub_159 = sub_160;
  };
  sub_158 = sub_159;
  if (controller_light_failed_recovered) {
    v_553 = sub_158;
    sub_157 = sub_103;
  } else {
    v_553 = sub_103;
    sub_157 = sub_158;
  };
  if (controller_ck_55_1) {
    sub_156 = v_553;
  } else {
    sub_156 = sub_157;
  };
  if (controller_ck_53_1) {
    v_554 = sub_102;
  } else {
    v_554 = sub_156;
  };
  if (controller_light_switch) {
    sub_155 = v_554;
  } else {
    sub_155 = sub_102;
  };
  if (controller_air_failed_recovered) {
    v_558 = sub_155;
    sub_148 = sub_149;
  } else {
    v_558 = sub_149;
    sub_148 = sub_155;
  };
  if (controller_ck_50_1) {
    v_559 = v_558;
  } else {
    v_559 = sub_148;
  };
  if (p_controller_c_light_1) {
    v_560 = v_559;
  } else {
    v_560 = sub_74;
  };
  if (controller_c_closet) {
    sub_147 = v_560;
  } else {
    sub_147 = false;
  };
  if (controller_blind_failed_recovered) {
    v = sub_118;
    sub_168 = sub_125;
  } else {
    v = sub_125;
    sub_168 = sub_118;
  };
  if (controller_ck_60_1) {
    sub_167 = v;
  } else {
    sub_167 = sub_168;
  };
  sub_166 = sub_167;
  if (controller_light_failed_recovered) {
    v_547 = sub_166;
    sub_165 = sub_123;
  } else {
    v_547 = sub_123;
    sub_165 = sub_166;
  };
  if (controller_ck_55_1) {
    sub_164 = v_547;
  } else {
    sub_164 = sub_165;
  };
  if (controller_ck_53_1) {
    v_548 = sub_122;
  } else {
    v_548 = sub_164;
  };
  if (controller_light_switch) {
    sub_163 = v_548;
  } else {
    sub_163 = sub_122;
  };
  if (controller_air_failed_recovered) {
    v_549 = sub_163;
    sub_162 = sub_149;
  } else {
    v_549 = sub_149;
    sub_162 = sub_163;
  };
  if (controller_ck_50_1) {
    v_550 = v_549;
  } else {
    v_550 = sub_162;
  };
  if (p_controller_c_light_1) {
    v_551 = v_550;
  } else {
    v_551 = sub_112;
  };
  if (controller_c_closet) {
    sub_161 = false;
  } else {
    sub_161 = v_551;
  };
  if (controller_cleaner) {
    v_561 = sub_161;
    sub_146 = sub_147;
  } else {
    v_561 = sub_147;
    sub_146 = sub_161;
  };
  if (controller_ck_41_1) {
    sub_145 = v_561;
  } else {
    sub_145 = sub_146;
  };
  if (controller_worker) {
    v_572 = sub_145;
    sub_128 = sub_129;
  } else {
    v_572 = sub_129;
    sub_128 = sub_145;
  };
  if (controller_ck_39_1) {
    sub_127 = v_572;
  } else {
    sub_127 = sub_128;
  };
  if (controller_change_shift) {
    v_608 = sub_127;
    sub_1 = sub_2;
  } else {
    v_608 = sub_2;
    sub_1 = sub_127;
  };
  if (controller_ck_1) {
    sub_0 = v_608;
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
  int controller_pnr_18, int controller_ck_35_1, int controller_pnr_17,
  int controller_ck_37_1, int controller_pnr_16, int controller_ck_39_1,
  int controller_pnr_15, int controller_ck_41_1, int controller_pnr_14,
  int controller_ck_43_1, int controller_pnr_13, int controller_ck_45_1,
  int controller_pnr_12, int controller_v_185, int controller_v_184,
  int controller_pnr_11, int controller_ck_50_1, int controller_pnr_10,
  int controller_ck_53_1, int controller_pnr_9, int controller_ck_55_1,
  int controller_pnr_8, int controller_ck_58_1, int controller_pnr_7,
  int controller_ck_60_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_light_2, int p_controller_c_blind_1,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_air_2, int controller_c_air_1, int controller_c_window,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_closet_out* _out) {
  
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
  sub_16 = true;
  sub_15 = sub_16;
  if (controller_c_pc) {
    sub_14 = false;
    sub_17 = sub_15;
  } else {
    sub_14 = sub_15;
    sub_17 = false;
  };
  if (controller_ck_43_1) {
    sub_13 = sub_17;
  } else {
    sub_13 = sub_14;
  };
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (controller_c_air_1) {
    sub_25 = sub_13;
  } else {
    sub_25 = false;
  };
  if (controller_c_air_2) {
    v_620 = false;
  } else {
    v_620 = sub_25;
  };
  if (controller_v_184) {
    v_621 = v_620;
  } else {
    v_621 = false;
  };
  if (controller_c_air_2) {
    sub_24 = sub_25;
  } else {
    sub_24 = false;
  };
  if (controller_c_air_1) {
    sub_26 = false;
  } else {
    sub_26 = sub_13;
  };
  if (controller_v_184) {
    sub_23 = sub_26;
  } else {
    sub_23 = sub_24;
  };
  if (controller_v_185) {
    sub_22 = v_621;
  } else {
    sub_22 = sub_23;
  };
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  if (controller_air_failed_recovered) {
    v_622 = sub_18;
    sub_6 = sub_7;
  } else {
    v_622 = sub_7;
    sub_6 = sub_18;
  };
  if (controller_ck_50_1) {
    sub_5 = v_622;
  } else {
    sub_5 = sub_6;
  };
  sub_38 = false;
  sub_37 = sub_38;
  if (controller_c_pc) {
    sub_36 = false;
    sub_39 = sub_37;
  } else {
    sub_36 = sub_37;
    sub_39 = false;
  };
  if (controller_ck_43_1) {
    sub_35 = sub_39;
  } else {
    sub_35 = sub_36;
  };
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (controller_c_air_1) {
    v_616 = sub_35;
  } else {
    v_616 = false;
  };
  if (controller_c_air_2) {
    v_617 = v_616;
  } else {
    v_617 = false;
  };
  if (controller_c_air_1) {
    sub_47 = false;
  } else {
    sub_47 = sub_35;
  };
  sub_46 = sub_47;
  if (controller_v_184) {
    v_618 = sub_46;
    sub_45 = v_617;
  } else {
    v_618 = false;
    sub_45 = sub_46;
  };
  if (controller_v_185) {
    sub_44 = v_618;
  } else {
    sub_44 = sub_45;
  };
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  sub_40 = sub_41;
  if (controller_air_failed_recovered) {
    v_619 = sub_40;
    sub_28 = sub_29;
  } else {
    v_619 = sub_29;
    sub_28 = sub_40;
  };
  if (controller_ck_50_1) {
    sub_27 = v_619;
  } else {
    sub_27 = sub_28;
  };
  if (controller_cleaner) {
    v_623 = sub_27;
    sub_4 = sub_5;
  } else {
    v_623 = sub_5;
    sub_4 = sub_27;
  };
  if (controller_ck_41_1) {
    sub_3 = v_623;
  } else {
    sub_3 = sub_4;
  };
  if (controller_ck_43_1) {
    sub_58 = sub_14;
  } else {
    sub_58 = sub_17;
  };
  sub_57 = sub_58;
  sub_56 = sub_57;
  sub_55 = sub_56;
  sub_54 = sub_55;
  sub_53 = sub_54;
  sub_52 = sub_53;
  if (controller_c_air_1) {
    v_611 = sub_58;
  } else {
    v_611 = false;
  };
  if (controller_c_air_2) {
    v_612 = v_611;
  } else {
    v_612 = false;
  };
  if (controller_c_air_1) {
    sub_66 = false;
  } else {
    sub_66 = sub_58;
  };
  sub_65 = sub_66;
  if (controller_v_184) {
    v_613 = sub_65;
    sub_64 = v_612;
  } else {
    v_613 = false;
    sub_64 = sub_65;
  };
  if (controller_v_185) {
    sub_63 = v_613;
  } else {
    sub_63 = sub_64;
  };
  sub_62 = sub_63;
  sub_61 = sub_62;
  sub_60 = sub_61;
  sub_59 = sub_60;
  if (controller_air_failed_recovered) {
    v_614 = sub_59;
    sub_51 = sub_52;
  } else {
    v_614 = sub_52;
    sub_51 = sub_59;
  };
  if (controller_ck_50_1) {
    sub_50 = v_614;
  } else {
    sub_50 = sub_51;
  };
  if (controller_ck_43_1) {
    sub_75 = sub_36;
  } else {
    sub_75 = sub_39;
  };
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  if (controller_c_air_1) {
    sub_82 = sub_75;
  } else {
    sub_82 = false;
  };
  if (controller_c_air_2) {
    v = sub_82;
  } else {
    v = false;
  };
  if (controller_v_184) {
    v_609 = v;
  } else {
    v_609 = sub_73;
  };
  if (controller_c_air_2) {
    sub_81 = false;
  } else {
    sub_81 = sub_82;
  };
  if (controller_v_185) {
    sub_80 = v_609;
  } else {
    sub_80 = sub_81;
  };
  sub_79 = sub_80;
  sub_78 = sub_79;
  sub_77 = sub_78;
  sub_76 = sub_77;
  if (controller_air_failed_recovered) {
    v_610 = sub_76;
    sub_68 = sub_69;
  } else {
    v_610 = sub_69;
    sub_68 = sub_76;
  };
  if (controller_ck_50_1) {
    sub_67 = v_610;
  } else {
    sub_67 = sub_68;
  };
  if (controller_cleaner) {
    v_615 = sub_67;
    sub_49 = sub_50;
  } else {
    v_615 = sub_50;
    sub_49 = sub_67;
  };
  if (controller_ck_41_1) {
    sub_48 = v_615;
  } else {
    sub_48 = sub_49;
  };
  if (controller_worker) {
    v_624 = sub_48;
    sub_2 = sub_3;
  } else {
    v_624 = sub_3;
    sub_2 = sub_48;
  };
  if (controller_ck_39_1) {
    sub_1 = v_624;
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
  int controller_pnr_18, int controller_ck_35_1, int controller_pnr_17,
  int controller_ck_37_1, int controller_pnr_16, int controller_ck_39_1,
  int controller_pnr_15, int controller_ck_41_1, int controller_pnr_14,
  int controller_ck_43_1, int controller_pnr_13, int controller_ck_45_1,
  int controller_pnr_12, int controller_v_185, int controller_v_184,
  int controller_pnr_11, int controller_ck_50_1, int controller_pnr_10,
  int controller_ck_53_1, int controller_pnr_9, int controller_ck_55_1,
  int controller_pnr_8, int controller_ck_58_1, int controller_pnr_7,
  int controller_ck_60_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_light_2, int p_controller_c_blind_1,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_2_out* _out) {
  
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
  sub_16 = p_controller_c_air_2;
  sub_15 = sub_16;
  sub_14 = sub_15;
  if (controller_c_pc) {
    sub_13 = false;
    sub_17 = sub_14;
  } else {
    sub_13 = sub_14;
    sub_17 = false;
  };
  if (controller_ck_43_1) {
    sub_12 = sub_17;
  } else {
    sub_12 = sub_13;
  };
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_27 = true;
  sub_26 = sub_27;
  if (controller_c_pc) {
    sub_25 = false;
    sub_28 = sub_26;
  } else {
    sub_25 = sub_26;
    sub_28 = false;
  };
  if (controller_ck_43_1) {
    v_633 = sub_28;
  } else {
    v_633 = sub_25;
  };
  if (controller_c_air_1) {
    sub_24 = v_633;
    sub_29 = false;
  } else {
    sub_24 = false;
    sub_29 = sub_12;
  };
  if (controller_v_184) {
    sub_23 = sub_29;
  } else {
    sub_23 = sub_24;
  };
  sub_32 = false;
  sub_31 = sub_32;
  if (controller_c_pc) {
    sub_30 = false;
    sub_33 = sub_31;
  } else {
    sub_30 = sub_31;
    sub_33 = false;
  };
  if (controller_ck_43_1) {
    v_634 = sub_33;
  } else {
    v_634 = sub_30;
  };
  if (controller_c_air_1) {
    v_635 = v_634;
  } else {
    v_635 = false;
  };
  if (controller_v_184) {
    v_636 = v_635;
  } else {
    v_636 = false;
  };
  if (controller_v_185) {
    sub_22 = v_636;
  } else {
    sub_22 = sub_23;
  };
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  if (controller_air_failed_recovered) {
    v_637 = sub_18;
    sub_6 = sub_7;
  } else {
    v_637 = sub_7;
    sub_6 = sub_18;
  };
  if (controller_ck_50_1) {
    sub_5 = v_637;
  } else {
    sub_5 = sub_6;
  };
  if (controller_v_184) {
    v_631 = sub_29;
    sub_41 = sub_24;
  } else {
    v_631 = false;
    sub_41 = sub_29;
  };
  if (controller_v_185) {
    sub_40 = v_631;
  } else {
    sub_40 = sub_41;
  };
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  if (controller_air_failed_recovered) {
    v_632 = sub_36;
    sub_35 = sub_7;
  } else {
    v_632 = sub_7;
    sub_35 = sub_36;
  };
  if (controller_ck_50_1) {
    sub_34 = v_632;
  } else {
    sub_34 = sub_35;
  };
  if (controller_cleaner) {
    v_638 = sub_34;
    sub_4 = sub_5;
  } else {
    v_638 = sub_5;
    sub_4 = sub_34;
  };
  if (controller_ck_41_1) {
    sub_3 = v_638;
  } else {
    sub_3 = sub_4;
  };
  if (controller_ck_43_1) {
    sub_51 = sub_13;
  } else {
    sub_51 = sub_17;
  };
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  if (controller_c_air_1) {
    sub_58 = false;
  } else {
    sub_58 = sub_51;
  };
  if (controller_v_184) {
    v_628 = sub_58;
  } else {
    v_628 = false;
  };
  if (controller_ck_43_1) {
    v_627 = sub_25;
  } else {
    v_627 = sub_28;
  };
  if (controller_c_air_1) {
    sub_59 = v_627;
  } else {
    sub_59 = false;
  };
  if (controller_v_184) {
    sub_57 = sub_59;
  } else {
    sub_57 = sub_58;
  };
  if (controller_v_185) {
    sub_56 = v_628;
  } else {
    sub_56 = sub_57;
  };
  sub_55 = sub_56;
  sub_54 = sub_55;
  sub_53 = sub_54;
  sub_52 = sub_53;
  if (controller_air_failed_recovered) {
    v_629 = sub_52;
    sub_45 = sub_46;
  } else {
    v_629 = sub_46;
    sub_45 = sub_52;
  };
  if (controller_ck_50_1) {
    sub_44 = v_629;
  } else {
    sub_44 = sub_45;
  };
  if (controller_v_184) {
    v_625 = sub_59;
  } else {
    v_625 = sub_50;
  };
  if (controller_ck_43_1) {
    v = sub_30;
  } else {
    v = sub_33;
  };
  if (controller_c_air_1) {
    sub_67 = v;
  } else {
    sub_67 = false;
  };
  if (controller_v_185) {
    sub_66 = v_625;
  } else {
    sub_66 = sub_67;
  };
  sub_65 = sub_66;
  sub_64 = sub_65;
  sub_63 = sub_64;
  sub_62 = sub_63;
  if (controller_air_failed_recovered) {
    v_626 = sub_62;
    sub_61 = sub_46;
  } else {
    v_626 = sub_46;
    sub_61 = sub_62;
  };
  if (controller_ck_50_1) {
    sub_60 = v_626;
  } else {
    sub_60 = sub_61;
  };
  if (controller_cleaner) {
    v_630 = sub_60;
    sub_43 = sub_44;
  } else {
    v_630 = sub_44;
    sub_43 = sub_60;
  };
  if (controller_ck_41_1) {
    sub_42 = v_630;
  } else {
    sub_42 = sub_43;
  };
  if (controller_worker) {
    v_639 = sub_42;
    sub_2 = sub_3;
  } else {
    v_639 = sub_3;
    sub_2 = sub_42;
  };
  if (controller_ck_39_1) {
    sub_1 = v_639;
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
  int controller_pnr_18, int controller_ck_35_1, int controller_pnr_17,
  int controller_ck_37_1, int controller_pnr_16, int controller_ck_39_1,
  int controller_pnr_15, int controller_ck_41_1, int controller_pnr_14,
  int controller_ck_43_1, int controller_pnr_13, int controller_ck_45_1,
  int controller_pnr_12, int controller_v_185, int controller_v_184,
  int controller_pnr_11, int controller_ck_50_1, int controller_pnr_10,
  int controller_ck_53_1, int controller_pnr_9, int controller_ck_55_1,
  int controller_pnr_8, int controller_ck_58_1, int controller_pnr_7,
  int controller_ck_60_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_light_2, int p_controller_c_blind_1,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_1_out* _out) {
  
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
  sub_15 = p_controller_c_air_1;
  sub_14 = sub_15;
  sub_13 = sub_14;
  if (controller_c_pc) {
    sub_12 = false;
    sub_16 = sub_13;
  } else {
    sub_12 = sub_13;
    sub_16 = false;
  };
  if (controller_ck_43_1) {
    sub_11 = sub_16;
  } else {
    sub_11 = sub_12;
  };
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_26 = true;
  sub_25 = sub_26;
  if (controller_c_pc) {
    sub_24 = false;
    sub_27 = sub_25;
  } else {
    sub_24 = sub_25;
    sub_27 = false;
  };
  if (controller_ck_43_1) {
    sub_23 = sub_27;
  } else {
    sub_23 = sub_24;
  };
  if (controller_v_184) {
    v_646 = sub_23;
  } else {
    v_646 = false;
  };
  sub_31 = false;
  sub_30 = sub_31;
  if (controller_c_pc) {
    sub_29 = false;
    sub_32 = sub_30;
  } else {
    sub_29 = sub_30;
    sub_32 = false;
  };
  if (controller_ck_43_1) {
    sub_28 = sub_32;
  } else {
    sub_28 = sub_29;
  };
  if (controller_v_184) {
    sub_22 = sub_28;
  } else {
    sub_22 = sub_23;
  };
  if (controller_v_185) {
    sub_21 = v_646;
  } else {
    sub_21 = sub_22;
  };
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  if (controller_air_failed_recovered) {
    v_647 = sub_17;
    sub_6 = sub_7;
  } else {
    v_647 = sub_7;
    sub_6 = sub_17;
  };
  if (controller_ck_50_1) {
    sub_5 = v_647;
  } else {
    sub_5 = sub_6;
  };
  if (controller_v_184) {
    v_644 = sub_28;
    sub_40 = sub_23;
  } else {
    v_644 = false;
    sub_40 = sub_28;
  };
  if (controller_v_185) {
    sub_39 = v_644;
  } else {
    sub_39 = sub_40;
  };
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  if (controller_air_failed_recovered) {
    v_645 = sub_35;
    sub_34 = sub_7;
  } else {
    v_645 = sub_7;
    sub_34 = sub_35;
  };
  if (controller_ck_50_1) {
    sub_33 = v_645;
  } else {
    sub_33 = sub_34;
  };
  if (controller_cleaner) {
    v_648 = sub_33;
    sub_4 = sub_5;
  } else {
    v_648 = sub_5;
    sub_4 = sub_33;
  };
  if (controller_ck_41_1) {
    sub_3 = v_648;
  } else {
    sub_3 = sub_4;
  };
  if (controller_ck_43_1) {
    sub_49 = sub_12;
  } else {
    sub_49 = sub_16;
  };
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  if (controller_ck_43_1) {
    sub_56 = sub_29;
  } else {
    sub_56 = sub_32;
  };
  if (controller_v_184) {
    v_641 = sub_56;
  } else {
    v_641 = false;
  };
  if (controller_ck_43_1) {
    sub_57 = sub_24;
  } else {
    sub_57 = sub_27;
  };
  if (controller_v_184) {
    sub_55 = sub_57;
  } else {
    sub_55 = sub_56;
  };
  if (controller_v_185) {
    sub_54 = v_641;
  } else {
    sub_54 = sub_55;
  };
  sub_53 = sub_54;
  sub_52 = sub_53;
  sub_51 = sub_52;
  sub_50 = sub_51;
  if (controller_air_failed_recovered) {
    v_642 = sub_50;
    sub_44 = sub_45;
  } else {
    v_642 = sub_45;
    sub_44 = sub_50;
  };
  if (controller_ck_50_1) {
    sub_43 = v_642;
  } else {
    sub_43 = sub_44;
  };
  if (controller_v_184) {
    v = sub_57;
  } else {
    v = sub_49;
  };
  if (controller_v_185) {
    sub_64 = v;
  } else {
    sub_64 = sub_57;
  };
  sub_63 = sub_64;
  sub_62 = sub_63;
  sub_61 = sub_62;
  sub_60 = sub_61;
  if (controller_air_failed_recovered) {
    v_640 = sub_60;
    sub_59 = sub_45;
  } else {
    v_640 = sub_45;
    sub_59 = sub_60;
  };
  if (controller_ck_50_1) {
    sub_58 = v_640;
  } else {
    sub_58 = sub_59;
  };
  if (controller_cleaner) {
    v_643 = sub_58;
    sub_42 = sub_43;
  } else {
    v_643 = sub_43;
    sub_42 = sub_58;
  };
  if (controller_ck_41_1) {
    sub_41 = v_643;
  } else {
    sub_41 = sub_42;
  };
  if (controller_worker) {
    v_649 = sub_41;
    sub_2 = sub_3;
  } else {
    v_649 = sub_3;
    sub_2 = sub_41;
  };
  if (controller_ck_39_1) {
    sub_1 = v_649;
  } else {
    sub_1 = sub_2;
  };
  sub_0 = sub_1;
  _out->controller_c_air_1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_window_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered, int controller_ck_1,
  int controller_pnr_18, int controller_ck_35_1, int controller_pnr_17,
  int controller_ck_37_1, int controller_pnr_16, int controller_ck_39_1,
  int controller_pnr_15, int controller_ck_41_1, int controller_pnr_14,
  int controller_ck_43_1, int controller_pnr_13, int controller_ck_45_1,
  int controller_pnr_12, int controller_v_185, int controller_v_184,
  int controller_pnr_11, int controller_ck_50_1, int controller_pnr_10,
  int controller_ck_53_1, int controller_pnr_9, int controller_ck_55_1,
  int controller_pnr_8, int controller_ck_58_1, int controller_pnr_7,
  int controller_ck_60_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_light_2, int p_controller_c_blind_1,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_window_out* _out) {
  
  int v_654;
  int v_653;
  int v_652;
  int v_651;
  int v_650;
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
  sub_13 = p_controller_c_window;
  sub_12 = sub_13;
  if (controller_c_pc) {
    sub_11 = false;
    sub_14 = sub_12;
  } else {
    sub_11 = sub_12;
    sub_14 = false;
  };
  if (controller_ck_43_1) {
    sub_10 = sub_14;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (controller_v_184) {
    v_652 = sub_10;
  } else {
    v_652 = false;
  };
  if (controller_v_185) {
    sub_19 = v_652;
  } else {
    sub_19 = sub_10;
  };
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  if (controller_air_failed_recovered) {
    v_653 = sub_15;
    sub_5 = sub_6;
  } else {
    v_653 = sub_6;
    sub_5 = sub_15;
  };
  if (controller_ck_50_1) {
    sub_4 = v_653;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  if (controller_ck_43_1) {
    sub_28 = sub_11;
  } else {
    sub_28 = sub_14;
  };
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  if (controller_v_184) {
    v = sub_28;
  } else {
    v = false;
  };
  if (controller_v_185) {
    sub_33 = v;
  } else {
    sub_33 = sub_28;
  };
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (controller_air_failed_recovered) {
    v_650 = sub_29;
    sub_23 = sub_24;
  } else {
    v_650 = sub_24;
    sub_23 = sub_29;
  };
  if (controller_ck_50_1) {
    sub_22 = v_650;
  } else {
    sub_22 = sub_23;
  };
  sub_34 = sub_24;
  if (controller_cleaner) {
    v_651 = sub_34;
    sub_21 = sub_22;
  } else {
    v_651 = sub_22;
    sub_21 = sub_34;
  };
  if (controller_ck_41_1) {
    sub_20 = v_651;
  } else {
    sub_20 = sub_21;
  };
  if (controller_worker) {
    v_654 = sub_20;
    sub_2 = sub_3;
  } else {
    v_654 = sub_3;
    sub_2 = sub_20;
  };
  if (controller_ck_39_1) {
    sub_1 = v_654;
  } else {
    sub_1 = sub_2;
  };
  sub_0 = sub_1;
  _out->controller_c_window = sub_0;;
}

void Controller_controller__controller_controller_controller_c_pc_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered, int controller_ck_1,
  int controller_pnr_18, int controller_ck_35_1, int controller_pnr_17,
  int controller_ck_37_1, int controller_pnr_16, int controller_ck_39_1,
  int controller_pnr_15, int controller_ck_41_1, int controller_pnr_14,
  int controller_ck_43_1, int controller_pnr_13, int controller_ck_45_1,
  int controller_pnr_12, int controller_v_185, int controller_v_184,
  int controller_pnr_11, int controller_ck_50_1, int controller_pnr_10,
  int controller_ck_53_1, int controller_pnr_9, int controller_ck_55_1,
  int controller_pnr_8, int controller_ck_58_1, int controller_pnr_7,
  int controller_ck_60_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_light_2, int p_controller_c_blind_1,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_pc_out* _out) {
  
  int v_659;
  int v_658;
  int v_657;
  int v_656;
  int v_655;
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
  sub_11 = false;
  sub_12 = true;
  if (controller_ck_43_1) {
    sub_10 = sub_12;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (controller_v_184) {
    v_657 = sub_10;
  } else {
    v_657 = false;
  };
  if (controller_v_185) {
    sub_17 = v_657;
  } else {
    sub_17 = sub_10;
  };
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  if (controller_air_failed_recovered) {
    v_658 = sub_13;
    sub_5 = sub_6;
  } else {
    v_658 = sub_6;
    sub_5 = sub_13;
  };
  if (controller_ck_50_1) {
    sub_4 = v_658;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  if (controller_ck_43_1) {
    sub_26 = sub_11;
  } else {
    sub_26 = sub_12;
  };
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  if (controller_v_184) {
    v = sub_26;
  } else {
    v = false;
  };
  if (controller_v_185) {
    sub_31 = v;
  } else {
    sub_31 = sub_26;
  };
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  if (controller_air_failed_recovered) {
    v_655 = sub_27;
    sub_21 = sub_22;
  } else {
    v_655 = sub_22;
    sub_21 = sub_27;
  };
  if (controller_ck_50_1) {
    sub_20 = v_655;
  } else {
    sub_20 = sub_21;
  };
  sub_32 = sub_22;
  if (controller_cleaner) {
    v_656 = sub_32;
    sub_19 = sub_20;
  } else {
    v_656 = sub_20;
    sub_19 = sub_32;
  };
  if (controller_ck_41_1) {
    sub_18 = v_656;
  } else {
    sub_18 = sub_19;
  };
  if (controller_worker) {
    v_659 = sub_18;
    sub_2 = sub_3;
  } else {
    v_659 = sub_3;
    sub_2 = sub_18;
  };
  if (controller_ck_39_1) {
    sub_1 = v_659;
  } else {
    sub_1 = sub_2;
  };
  sub_0 = sub_1;
  _out->controller_c_pc = sub_0;;
}

void Controller_controller__controller_controller_controller_c_door_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered, int controller_ck_1,
  int controller_pnr_18, int controller_ck_35_1, int controller_pnr_17,
  int controller_ck_37_1, int controller_pnr_16, int controller_ck_39_1,
  int controller_pnr_15, int controller_ck_41_1, int controller_pnr_14,
  int controller_ck_43_1, int controller_pnr_13, int controller_ck_45_1,
  int controller_pnr_12, int controller_v_185, int controller_v_184,
  int controller_pnr_11, int controller_ck_50_1, int controller_pnr_10,
  int controller_ck_53_1, int controller_pnr_9, int controller_ck_55_1,
  int controller_pnr_8, int controller_ck_58_1, int controller_pnr_7,
  int controller_ck_60_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_light_2, int p_controller_c_blind_1,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  Controller_controller__controller_controller_controller_c_door_out* _out) {
  
  int v_662;
  int v_661;
  int v_660;
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
  sub_10 = p_controller_c_door;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (controller_v_184) {
    v_660 = sub_10;
  } else {
    v_660 = false;
  };
  if (controller_v_185) {
    sub_15 = v_660;
  } else {
    sub_15 = sub_10;
  };
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (controller_air_failed_recovered) {
    v_661 = sub_11;
    sub_5 = sub_6;
  } else {
    v_661 = sub_6;
    sub_5 = sub_11;
  };
  if (controller_ck_50_1) {
    sub_4 = v_661;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  sub_18 = sub_6;
  if (controller_cleaner) {
    v = sub_18;
    sub_17 = sub_4;
  } else {
    v = sub_4;
    sub_17 = sub_18;
  };
  if (controller_ck_41_1) {
    sub_16 = v;
  } else {
    sub_16 = sub_17;
  };
  if (controller_worker) {
    v_662 = sub_16;
    sub_2 = sub_3;
  } else {
    v_662 = sub_3;
    sub_2 = sub_16;
  };
  if (controller_ck_39_1) {
    sub_1 = v_662;
  } else {
    sub_1 = sub_2;
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
                                                       int controller_pnr_18,
                                                       int controller_ck_35_1,
                                                       int controller_pnr_17,
                                                       int controller_ck_37_1,
                                                       int controller_pnr_16,
                                                       int controller_ck_39_1,
                                                       int controller_pnr_15,
                                                       int controller_ck_41_1,
                                                       int controller_pnr_14,
                                                       int controller_ck_43_1,
                                                       int controller_pnr_13,
                                                       int controller_ck_45_1,
                                                       int controller_pnr_12,
                                                       int controller_v_185,
                                                       int controller_v_184,
                                                       int controller_pnr_11,
                                                       int controller_ck_50_1,
                                                       int controller_pnr_10,
                                                       int controller_ck_53_1,
                                                       int controller_pnr_9,
                                                       int controller_ck_55_1,
                                                       int controller_pnr_8,
                                                       int controller_ck_58_1,
                                                       int controller_pnr_7,
                                                       int controller_ck_60_1,
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
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_18,
  controller_ck_35_1, controller_pnr_17, controller_ck_37_1,
  controller_pnr_16, controller_ck_39_1, controller_pnr_15,
  controller_ck_41_1, controller_pnr_14, controller_ck_43_1,
  controller_pnr_13, controller_ck_45_1, controller_pnr_12, controller_v_185,
  controller_v_184, controller_pnr_11, controller_ck_50_1, controller_pnr_10,
  controller_ck_53_1, controller_pnr_9, controller_ck_55_1, controller_pnr_8,
  controller_ck_58_1, controller_pnr_7, controller_ck_60_1, controller_pnr,
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
                                                                    controller_ck_1,
                                                                    controller_pnr_18,
                                                                    controller_ck_35_1,
                                                                    controller_pnr_17,
                                                                    controller_ck_37_1,
                                                                    controller_pnr_16,
                                                                    controller_ck_39_1,
                                                                    controller_pnr_15,
                                                                    controller_ck_41_1,
                                                                    controller_pnr_14,
                                                                    controller_ck_43_1,
                                                                    controller_pnr_13,
                                                                    controller_ck_45_1,
                                                                    controller_pnr_12,
                                                                    controller_v_185,
                                                                    controller_v_184,
                                                                    controller_pnr_11,
                                                                    controller_ck_50_1,
                                                                    controller_pnr_10,
                                                                    controller_ck_53_1,
                                                                    controller_pnr_9,
                                                                    controller_ck_55_1,
                                                                    controller_pnr_8,
                                                                    controller_ck_58_1,
                                                                    controller_pnr_7,
                                                                    controller_ck_60_1,
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
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_18,
  controller_ck_35_1, controller_pnr_17, controller_ck_37_1,
  controller_pnr_16, controller_ck_39_1, controller_pnr_15,
  controller_ck_41_1, controller_pnr_14, controller_ck_43_1,
  controller_pnr_13, controller_ck_45_1, controller_pnr_12, controller_v_185,
  controller_v_184, controller_pnr_11, controller_ck_50_1, controller_pnr_10,
  controller_ck_53_1, controller_pnr_9, controller_ck_55_1, controller_pnr_8,
  controller_ck_58_1, controller_pnr_7, controller_ck_60_1, controller_pnr,
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
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_18,
  controller_ck_35_1, controller_pnr_17, controller_ck_37_1,
  controller_pnr_16, controller_ck_39_1, controller_pnr_15,
  controller_ck_41_1, controller_pnr_14, controller_ck_43_1,
  controller_pnr_13, controller_ck_45_1, controller_pnr_12, controller_v_185,
  controller_v_184, controller_pnr_11, controller_ck_50_1, controller_pnr_10,
  controller_ck_53_1, controller_pnr_9, controller_ck_55_1, controller_pnr_8,
  controller_ck_58_1, controller_pnr_7, controller_ck_60_1, controller_pnr,
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
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_18,
  controller_ck_35_1, controller_pnr_17, controller_ck_37_1,
  controller_pnr_16, controller_ck_39_1, controller_pnr_15,
  controller_ck_41_1, controller_pnr_14, controller_ck_43_1,
  controller_pnr_13, controller_ck_45_1, controller_pnr_12, controller_v_185,
  controller_v_184, controller_pnr_11, controller_ck_50_1, controller_pnr_10,
  controller_ck_53_1, controller_pnr_9, controller_ck_55_1, controller_pnr_8,
  controller_ck_58_1, controller_pnr_7, controller_ck_60_1, controller_pnr,
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
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_18,
  controller_ck_35_1, controller_pnr_17, controller_ck_37_1,
  controller_pnr_16, controller_ck_39_1, controller_pnr_15,
  controller_ck_41_1, controller_pnr_14, controller_ck_43_1,
  controller_pnr_13, controller_ck_45_1, controller_pnr_12, controller_v_185,
  controller_v_184, controller_pnr_11, controller_ck_50_1, controller_pnr_10,
  controller_ck_53_1, controller_pnr_9, controller_ck_55_1, controller_pnr_8,
  controller_ck_58_1, controller_pnr_7, controller_ck_60_1, controller_pnr,
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
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_18,
  controller_ck_35_1, controller_pnr_17, controller_ck_37_1,
  controller_pnr_16, controller_ck_39_1, controller_pnr_15,
  controller_ck_41_1, controller_pnr_14, controller_ck_43_1,
  controller_pnr_13, controller_ck_45_1, controller_pnr_12, controller_v_185,
  controller_v_184, controller_pnr_11, controller_ck_50_1, controller_pnr_10,
  controller_ck_53_1, controller_pnr_9, controller_ck_55_1, controller_pnr_8,
  controller_ck_58_1, controller_pnr_7, controller_ck_60_1, controller_pnr,
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
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_18,
  controller_ck_35_1, controller_pnr_17, controller_ck_37_1,
  controller_pnr_16, controller_ck_39_1, controller_pnr_15,
  controller_ck_41_1, controller_pnr_14, controller_ck_43_1,
  controller_pnr_13, controller_ck_45_1, controller_pnr_12, controller_v_185,
  controller_v_184, controller_pnr_11, controller_ck_50_1, controller_pnr_10,
  controller_ck_53_1, controller_pnr_9, controller_ck_55_1, controller_pnr_8,
  controller_ck_58_1, controller_pnr_7, controller_ck_60_1, controller_pnr,
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
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_18,
  controller_ck_35_1, controller_pnr_17, controller_ck_37_1,
  controller_pnr_16, controller_ck_39_1, controller_pnr_15,
  controller_ck_41_1, controller_pnr_14, controller_ck_43_1,
  controller_pnr_13, controller_ck_45_1, controller_pnr_12, controller_v_185,
  controller_v_184, controller_pnr_11, controller_ck_50_1, controller_pnr_10,
  controller_ck_53_1, controller_pnr_9, controller_ck_55_1, controller_pnr_8,
  controller_ck_58_1, controller_pnr_7, controller_ck_60_1, controller_pnr,
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
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_18,
  controller_ck_35_1, controller_pnr_17, controller_ck_37_1,
  controller_pnr_16, controller_ck_39_1, controller_pnr_15,
  controller_ck_41_1, controller_pnr_14, controller_ck_43_1,
  controller_pnr_13, controller_ck_45_1, controller_pnr_12, controller_v_185,
  controller_v_184, controller_pnr_11, controller_ck_50_1, controller_pnr_10,
  controller_ck_53_1, controller_pnr_9, controller_ck_55_1, controller_pnr_8,
  controller_ck_58_1, controller_pnr_7, controller_ck_60_1, controller_pnr,
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

