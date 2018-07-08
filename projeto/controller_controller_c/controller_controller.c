/* --- Generated the 8/7/2018 at 14:29 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jun. 15 15:41:53 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c controller_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "controller_controller.h"

void Controller_controller__controller_controller_controller_cdown_step(
  int controller_up, int controller_down, int controller_shift_turno,
  int controller_abre_porta, int controller_p_arrived,
  int controller_p1_arrived, int controller_ar_failed,
  int controller_ar_recovered, int controller_l_failed,
  int controller_l_recovered, int controller_ck_1, int controller_pnr_13,
  int controller_ck_18_1, int controller_pnr_12, int controller_ck_20_1,
  int controller_pnr_11, int controller_ck_22_1, int controller_pnr_10,
  int controller_ck_24_1, int controller_pnr_9, int controller_ck_26_1,
  int controller_pnr_8, int controller_ck_28_1, int controller_pnr_7,
  int controller_ck_30_1, int controller_pnr_6, int controller_v_431,
  int controller_v_430, int controller_pnr_5, int controller_ck_34_1,
  int controller_pnr_4, int controller_v_401, int controller_v_400,
  int controller_v_399, int controller_pnr_3, int controller_ck_38_1,
  int controller_pnr, int p_controller_cdown, int p_controller_cup,
  int p_controller_cl2, int p_controller_cl1, int p_controller_c_policy,
  int p_controller_c_arm, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_luz2, int p_controller_c_luz1, int p_controller_c_jan,
  int p_controller_c_pc, int p_controller_c_rot, int p_controller_c_porta,
  int controller_cup, int controller_cl2, int controller_cl1,
  int controller_c_policy, int controller_c_arm, int controller_c_ar2,
  int controller_c_ar1, int controller_c_luz2, int controller_c_luz1,
  int controller_c_jan, int controller_c_pc, int controller_c_rot,
  int controller_c_porta,
  Controller_controller__controller_controller_controller_cdown_out* _out) {
  
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
  sub_28 = false;
  if (controller_ar_failed) {
    sub_27 = false;
  } else {
    sub_27 = sub_28;
  };
  sub_26 = sub_27;
  sub_29 = sub_28;
  if (controller_ar_recovered) {
    v_183 = sub_29;
  } else {
    v_183 = false;
  };
  if (controller_ck_34_1) {
    sub_25 = v_183;
  } else {
    sub_25 = sub_26;
  };
  if (controller_c_rot) {
    v_184 = false;
  } else {
    v_184 = sub_25;
  };
  if (controller_c_pc) {
    sub_24 = false;
  } else {
    sub_24 = v_184;
  };
  if (controller_v_430) {
    sub_23 = sub_24;
  } else {
    sub_23 = false;
  };
  if (controller_v_431) {
    v_185 = false;
  } else {
    v_185 = sub_23;
  };
  if (controller_c_ar1) {
    v_186 = false;
  } else {
    v_186 = v_185;
  };
  if (controller_v_431) {
    sub_30 = sub_23;
    sub_31 = false;
  } else {
    sub_30 = false;
    sub_31 = sub_24;
  };
  if (controller_c_ar1) {
    v_187 = sub_30;
  } else {
    v_187 = sub_31;
  };
  if (controller_c_ar2) {
    sub_22 = v_186;
  } else {
    sub_22 = v_187;
  };
  sub_35 = sub_25;
  if (controller_c_pc) {
    sub_34 = false;
  } else {
    sub_34 = sub_35;
  };
  sub_36 = sub_35;
  if (controller_v_430) {
    sub_33 = sub_36;
  } else {
    sub_33 = sub_34;
  };
  if (controller_v_431) {
    v_181 = sub_36;
  } else {
    v_181 = sub_33;
  };
  if (controller_v_430) {
    sub_37 = sub_34;
  } else {
    sub_37 = sub_36;
  };
  if (controller_c_ar1) {
    v_182 = v_181;
  } else {
    v_182 = sub_37;
  };
  if (controller_v_431) {
    sub_38 = sub_37;
  } else {
    sub_38 = sub_34;
  };
  if (controller_c_ar2) {
    sub_32 = v_182;
  } else {
    sub_32 = sub_38;
  };
  if (controller_p_arrived) {
    v_188 = sub_32;
    sub_21 = sub_22;
  } else {
    v_188 = sub_22;
    sub_21 = sub_32;
  };
  if (controller_ck_24_1) {
    sub_20 = v_188;
  } else {
    sub_20 = sub_21;
  };
  sub_19 = sub_20;
  if (controller_c_ar1) {
    v_180 = sub_31;
  } else {
    v_180 = sub_30;
  };
  if (controller_v_430) {
    sub_42 = false;
  } else {
    sub_42 = sub_24;
  };
  if (controller_v_431) {
    sub_41 = false;
  } else {
    sub_41 = sub_42;
  };
  if (controller_c_ar1) {
    v_179 = sub_41;
  } else {
    v_179 = sub_30;
  };
  if (controller_c_ar2) {
    sub_40 = v_179;
  } else {
    sub_40 = v_180;
  };
  if (controller_c_arm) {
    sub_39 = false;
  } else {
    sub_39 = sub_40;
  };
  if (controller_p1_arrived) {
    v_189 = sub_39;
    sub_18 = sub_19;
  } else {
    v_189 = sub_19;
    sub_18 = sub_39;
  };
  if (controller_ck_26_1) {
    sub_17 = v_189;
  } else {
    sub_17 = sub_18;
  };
  sub_49 = sub_36;
  sub_48 = sub_49;
  if (controller_p_arrived) {
    v_177 = sub_48;
    sub_47 = false;
  } else {
    v_177 = false;
    sub_47 = sub_48;
  };
  if (controller_ck_24_1) {
    sub_46 = v_177;
  } else {
    sub_46 = sub_47;
  };
  sub_45 = sub_46;
  if (controller_p1_arrived) {
    v_178 = sub_39;
    sub_44 = sub_45;
  } else {
    v_178 = sub_45;
    sub_44 = sub_39;
  };
  if (controller_ck_26_1) {
    sub_43 = v_178;
  } else {
    sub_43 = sub_44;
  };
  if (controller_c_jan) {
    v_190 = sub_17;
  } else {
    v_190 = sub_43;
  };
  if (controller_c_porta) {
    sub_16 = false;
  } else {
    sub_16 = v_190;
  };
  if (controller_p_arrived) {
    v_175 = false;
    sub_56 = sub_22;
  } else {
    v_175 = sub_22;
    sub_56 = false;
  };
  if (controller_ck_24_1) {
    sub_55 = v_175;
  } else {
    sub_55 = sub_56;
  };
  sub_54 = sub_55;
  if (controller_p1_arrived) {
    v_176 = false;
    sub_53 = sub_54;
  } else {
    v_176 = sub_54;
    sub_53 = false;
  };
  if (controller_ck_26_1) {
    sub_52 = v_176;
  } else {
    sub_52 = sub_53;
  };
  if (controller_c_jan) {
    sub_51 = sub_52;
  } else {
    sub_51 = false;
  };
  if (controller_c_porta) {
    sub_50 = sub_51;
  } else {
    sub_50 = sub_43;
  };
  if (controller_shift_turno) {
    v_191 = sub_50;
    sub_15 = sub_16;
  } else {
    v_191 = sub_16;
    sub_15 = sub_50;
  };
  if (controller_ck_1) {
    sub_14 = v_191;
  } else {
    sub_14 = sub_15;
  };
  if (controller_c_porta) {
    sub_59 = sub_51;
  } else {
    sub_59 = false;
  };
  if (controller_shift_turno) {
    v_174 = sub_59;
    sub_58 = sub_16;
  } else {
    v_174 = sub_16;
    sub_58 = sub_59;
  };
  if (controller_ck_1) {
    sub_57 = v_174;
  } else {
    sub_57 = sub_58;
  };
  if (controller_l_failed) {
    sub_13 = sub_14;
  } else {
    sub_13 = sub_57;
  };
  if (controller_ck_38_1) {
    v_193 = sub_14;
    v_192 = sub_57;
  } else {
    v_193 = sub_13;
    v_192 = sub_13;
  };
  if (controller_l_recovered) {
    sub_12 = v_192;
  } else {
    sub_12 = v_193;
  };
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (controller_ar_recovered) {
    v_163 = false;
  } else {
    v_163 = sub_29;
  };
  if (controller_ar_failed) {
    sub_79 = sub_28;
  } else {
    sub_79 = false;
  };
  sub_78 = sub_79;
  if (controller_ck_34_1) {
    sub_77 = v_163;
  } else {
    sub_77 = sub_78;
  };
  sub_76 = sub_77;
  sub_75 = sub_76;
  if (controller_v_431) {
    v_167 = false;
  } else {
    v_167 = sub_75;
  };
  if (controller_v_430) {
    sub_74 = sub_75;
  } else {
    sub_74 = false;
  };
  if (controller_v_431) {
    v_166 = sub_74;
  } else {
    v_166 = false;
  };
  if (controller_c_ar1) {
    v_168 = v_166;
  } else {
    v_168 = v_167;
  };
  if (controller_v_431) {
    v_164 = false;
  } else {
    v_164 = sub_74;
  };
  if (controller_c_ar1) {
    v_165 = false;
  } else {
    v_165 = v_164;
  };
  if (controller_c_ar2) {
    sub_73 = v_165;
  } else {
    sub_73 = v_168;
  };
  if (controller_p_arrived) {
    v_169 = false;
    sub_72 = sub_73;
  } else {
    v_169 = sub_73;
    sub_72 = false;
  };
  if (controller_ck_24_1) {
    sub_71 = v_169;
  } else {
    sub_71 = sub_72;
  };
  sub_70 = sub_71;
  if (controller_p1_arrived) {
    v_170 = false;
    sub_69 = sub_70;
  } else {
    v_170 = sub_70;
    sub_69 = false;
  };
  if (controller_ck_26_1) {
    sub_68 = v_170;
  } else {
    sub_68 = sub_69;
  };
  if (controller_c_jan) {
    sub_67 = sub_52;
    sub_80 = false;
  } else {
    sub_67 = sub_68;
    sub_80 = sub_68;
  };
  if (controller_c_porta) {
    sub_66 = sub_67;
  } else {
    sub_66 = sub_80;
  };
  if (controller_shift_turno) {
    v_171 = sub_66;
    sub_65 = false;
  } else {
    v_171 = false;
    sub_65 = sub_66;
  };
  if (controller_ck_1) {
    sub_64 = v_171;
  } else {
    sub_64 = sub_65;
  };
  sub_93 = sub_29;
  sub_92 = sub_93;
  sub_91 = sub_92;
  if (controller_v_431) {
    v_157 = sub_36;
  } else {
    v_157 = sub_91;
  };
  if (controller_v_430) {
    sub_90 = sub_91;
  } else {
    sub_90 = sub_36;
  };
  if (controller_v_431) {
    v_156 = sub_90;
  } else {
    v_156 = sub_36;
  };
  if (controller_c_ar1) {
    v_158 = v_156;
  } else {
    v_158 = v_157;
  };
  if (controller_v_431) {
    v_154 = sub_36;
  } else {
    v_154 = sub_90;
  };
  if (controller_c_ar1) {
    v_155 = sub_36;
  } else {
    v_155 = v_154;
  };
  if (controller_c_ar2) {
    sub_89 = v_155;
  } else {
    sub_89 = v_158;
  };
  if (controller_p_arrived) {
    v_159 = sub_89;
    sub_88 = sub_73;
  } else {
    v_159 = sub_73;
    sub_88 = sub_89;
  };
  if (controller_ck_24_1) {
    sub_87 = v_159;
  } else {
    sub_87 = sub_88;
  };
  sub_86 = sub_87;
  sub_95 = sub_73;
  if (controller_v_431) {
    v_152 = sub_23;
    v_151 = sub_74;
  } else {
    v_152 = sub_75;
    v_151 = sub_24;
  };
  if (controller_c_ar1) {
    v_153 = v_151;
  } else {
    v_153 = v_152;
  };
  if (controller_v_431) {
    v_149 = sub_23;
  } else {
    v_149 = sub_74;
  };
  if (controller_c_ar1) {
    v_150 = sub_41;
  } else {
    v_150 = v_149;
  };
  if (controller_c_ar2) {
    sub_96 = v_150;
  } else {
    sub_96 = v_153;
  };
  if (controller_c_arm) {
    sub_94 = sub_95;
  } else {
    sub_94 = sub_96;
  };
  if (controller_p1_arrived) {
    v_160 = sub_94;
    sub_85 = sub_86;
  } else {
    v_160 = sub_86;
    sub_85 = sub_94;
  };
  if (controller_ck_26_1) {
    sub_84 = v_160;
  } else {
    sub_84 = sub_85;
  };
  if (controller_c_jan) {
    v_161 = sub_17;
  } else {
    v_161 = sub_84;
  };
  if (controller_c_porta) {
    sub_83 = sub_80;
  } else {
    sub_83 = v_161;
  };
  if (controller_shift_turno) {
    v_162 = sub_66;
    sub_82 = sub_83;
  } else {
    v_162 = sub_83;
    sub_82 = sub_66;
  };
  if (controller_ck_1) {
    sub_81 = v_162;
  } else {
    sub_81 = sub_82;
  };
  if (controller_l_failed) {
    sub_63 = sub_64;
  } else {
    sub_63 = sub_81;
  };
  if (controller_ck_38_1) {
    v_172 = sub_81;
  } else {
    v_172 = sub_63;
  };
  sub_97 = sub_64;
  if (controller_ck_38_1) {
    v_173 = sub_97;
  } else {
    v_173 = sub_63;
  };
  if (controller_l_recovered) {
    sub_62 = v_172;
  } else {
    sub_62 = v_173;
  };
  sub_61 = sub_62;
  sub_60 = sub_61;
  if (controller_c_jan) {
    v_145 = sub_43;
  } else {
    v_145 = sub_84;
  };
  if (controller_c_porta) {
    sub_105 = sub_67;
  } else {
    sub_105 = v_145;
  };
  if (controller_shift_turno) {
    v_146 = sub_105;
    sub_104 = sub_83;
  } else {
    v_146 = sub_83;
    sub_104 = sub_105;
  };
  if (controller_ck_1) {
    sub_103 = v_146;
  } else {
    sub_103 = sub_104;
  };
  sub_109 = sub_95;
  if (controller_c_jan) {
    v_143 = false;
  } else {
    v_143 = sub_109;
  };
  if (controller_c_porta) {
    sub_108 = sub_67;
  } else {
    sub_108 = v_143;
  };
  if (controller_shift_turno) {
    v_144 = sub_108;
    sub_107 = sub_83;
  } else {
    v_144 = sub_83;
    sub_107 = sub_108;
  };
  if (controller_ck_1) {
    sub_106 = v_144;
  } else {
    sub_106 = sub_107;
  };
  if (controller_l_failed) {
    sub_102 = sub_103;
  } else {
    sub_102 = sub_106;
  };
  if (controller_ck_38_1) {
    v_148 = sub_103;
    v_147 = sub_106;
  } else {
    v_148 = sub_102;
    v_147 = sub_102;
  };
  if (controller_l_recovered) {
    sub_101 = v_147;
  } else {
    sub_101 = v_148;
  };
  if (controller_cl1) {
    sub_100 = sub_101;
  } else {
    sub_100 = sub_62;
  };
  sub_99 = sub_100;
  if (controller_p_arrived) {
    v_136 = sub_48;
    sub_120 = sub_73;
  } else {
    v_136 = sub_73;
    sub_120 = sub_48;
  };
  if (controller_ck_24_1) {
    sub_119 = v_136;
  } else {
    sub_119 = sub_120;
  };
  sub_118 = sub_119;
  if (controller_p1_arrived) {
    v_137 = sub_39;
    sub_117 = sub_118;
  } else {
    v_137 = sub_118;
    sub_117 = sub_39;
  };
  if (controller_ck_26_1) {
    v_138 = v_137;
  } else {
    v_138 = sub_117;
  };
  if (controller_c_jan) {
    v_139 = sub_43;
  } else {
    v_139 = v_138;
  };
  if (controller_c_porta) {
    sub_116 = sub_67;
  } else {
    sub_116 = v_139;
  };
  if (controller_shift_turno) {
    v_140 = sub_116;
    sub_115 = sub_83;
  } else {
    v_140 = sub_83;
    sub_115 = sub_116;
  };
  if (controller_ck_1) {
    sub_114 = v_140;
  } else {
    sub_114 = sub_115;
  };
  if (controller_l_failed) {
    sub_113 = sub_64;
  } else {
    sub_113 = sub_114;
  };
  if (controller_ck_38_1) {
    v_142 = sub_97;
    v_141 = sub_114;
  } else {
    v_142 = sub_113;
    v_141 = sub_113;
  };
  if (controller_l_recovered) {
    sub_112 = v_141;
  } else {
    sub_112 = v_142;
  };
  if (controller_cl1) {
    sub_111 = sub_112;
  } else {
    sub_111 = sub_62;
  };
  sub_110 = sub_111;
  if (controller_cl2) {
    sub_98 = sub_99;
  } else {
    sub_98 = sub_110;
  };
  if (controller_up) {
    v_194 = sub_60;
  } else {
    v_194 = sub_98;
  };
  if (controller_cup) {
    v_195 = v_194;
  } else {
    v_195 = sub_98;
  };
  if (controller_v_401) {
    sub_6 = v_195;
  } else {
    sub_6 = sub_7;
  };
  sub_125 = sub_112;
  sub_124 = sub_125;
  sub_123 = sub_124;
  sub_122 = sub_123;
  sub_121 = sub_122;
  if (controller_v_400) {
    sub_5 = sub_121;
  } else {
    sub_5 = sub_6;
  };
  if (controller_cl1) {
    v_134 = sub_112;
  } else {
    v_134 = sub_101;
  };
  sub_146 = true;
  if (controller_ar_failed) {
    sub_145 = sub_146;
  } else {
    sub_145 = false;
  };
  sub_144 = sub_145;
  sub_147 = sub_146;
  if (controller_ar_recovered) {
    v_120 = false;
  } else {
    v_120 = sub_147;
  };
  if (controller_ck_34_1) {
    sub_143 = v_120;
  } else {
    sub_143 = sub_144;
  };
  sub_142 = sub_143;
  sub_141 = sub_142;
  if (controller_v_431) {
    v_124 = false;
  } else {
    v_124 = sub_141;
  };
  if (controller_v_430) {
    sub_140 = sub_141;
  } else {
    sub_140 = false;
  };
  if (controller_v_431) {
    v_123 = sub_140;
  } else {
    v_123 = false;
  };
  if (controller_c_ar1) {
    v_125 = v_123;
  } else {
    v_125 = v_124;
  };
  if (controller_v_431) {
    v_121 = false;
  } else {
    v_121 = sub_140;
  };
  if (controller_c_ar1) {
    v_122 = false;
  } else {
    v_122 = v_121;
  };
  if (controller_c_ar2) {
    sub_139 = v_122;
  } else {
    sub_139 = v_125;
  };
  if (controller_p_arrived) {
    v_126 = false;
    sub_138 = sub_139;
  } else {
    v_126 = sub_139;
    sub_138 = false;
  };
  if (controller_ck_24_1) {
    sub_137 = v_126;
  } else {
    sub_137 = sub_138;
  };
  sub_136 = sub_137;
  if (controller_p1_arrived) {
    v_127 = false;
    sub_135 = sub_136;
  } else {
    v_127 = sub_136;
    sub_135 = false;
  };
  if (controller_ck_26_1) {
    sub_134 = v_127;
  } else {
    sub_134 = sub_135;
  };
  if (controller_c_jan) {
    sub_133 = false;
  } else {
    sub_133 = sub_134;
  };
  if (controller_ar_recovered) {
    v_113 = sub_147;
  } else {
    v_113 = false;
  };
  if (controller_ar_failed) {
    sub_158 = false;
  } else {
    sub_158 = sub_146;
  };
  sub_157 = sub_158;
  if (controller_ck_34_1) {
    sub_156 = v_113;
  } else {
    sub_156 = sub_157;
  };
  if (controller_c_rot) {
    v_114 = false;
  } else {
    v_114 = sub_156;
  };
  if (controller_c_pc) {
    sub_155 = false;
  } else {
    sub_155 = v_114;
  };
  if (controller_v_430) {
    sub_154 = sub_155;
  } else {
    sub_154 = false;
  };
  if (controller_v_431) {
    v_115 = false;
  } else {
    v_115 = sub_154;
  };
  if (controller_c_ar1) {
    v_116 = false;
  } else {
    v_116 = v_115;
  };
  if (controller_v_431) {
    sub_159 = sub_154;
    sub_160 = false;
  } else {
    sub_159 = false;
    sub_160 = sub_155;
  };
  if (controller_c_ar1) {
    v_117 = sub_159;
  } else {
    v_117 = sub_160;
  };
  if (controller_c_ar2) {
    sub_153 = v_116;
  } else {
    sub_153 = v_117;
  };
  sub_164 = sub_156;
  if (controller_c_pc) {
    sub_163 = false;
  } else {
    sub_163 = sub_164;
  };
  sub_165 = sub_164;
  if (controller_v_430) {
    sub_162 = sub_165;
  } else {
    sub_162 = sub_163;
  };
  if (controller_v_431) {
    v_111 = sub_165;
  } else {
    v_111 = sub_162;
  };
  if (controller_v_430) {
    sub_166 = sub_163;
  } else {
    sub_166 = sub_165;
  };
  if (controller_c_ar1) {
    v_112 = v_111;
  } else {
    v_112 = sub_166;
  };
  if (controller_v_431) {
    sub_167 = sub_166;
  } else {
    sub_167 = sub_163;
  };
  if (controller_c_ar2) {
    sub_161 = v_112;
  } else {
    sub_161 = sub_167;
  };
  if (controller_p_arrived) {
    v_118 = sub_161;
    sub_152 = sub_153;
  } else {
    v_118 = sub_153;
    sub_152 = sub_161;
  };
  if (controller_ck_24_1) {
    sub_151 = v_118;
  } else {
    sub_151 = sub_152;
  };
  sub_150 = sub_151;
  if (controller_c_ar1) {
    v_110 = sub_160;
  } else {
    v_110 = sub_159;
  };
  if (controller_v_430) {
    sub_171 = false;
  } else {
    sub_171 = sub_155;
  };
  if (controller_v_431) {
    sub_170 = false;
  } else {
    sub_170 = sub_171;
  };
  if (controller_c_ar1) {
    v_109 = sub_170;
  } else {
    v_109 = sub_159;
  };
  if (controller_c_ar2) {
    sub_169 = v_109;
  } else {
    sub_169 = v_110;
  };
  if (controller_c_arm) {
    sub_168 = false;
  } else {
    sub_168 = sub_169;
  };
  if (controller_p1_arrived) {
    v_119 = sub_168;
    sub_149 = sub_150;
  } else {
    v_119 = sub_150;
    sub_149 = sub_168;
  };
  if (controller_ck_26_1) {
    sub_148 = v_119;
  } else {
    sub_148 = sub_149;
  };
  sub_181 = sub_147;
  sub_180 = sub_181;
  sub_179 = sub_180;
  if (controller_v_431) {
    v_105 = sub_165;
  } else {
    v_105 = sub_179;
  };
  if (controller_v_430) {
    sub_178 = sub_179;
  } else {
    sub_178 = sub_165;
  };
  if (controller_v_431) {
    v_104 = sub_178;
  } else {
    v_104 = sub_165;
  };
  if (controller_c_ar1) {
    v_106 = v_104;
  } else {
    v_106 = v_105;
  };
  if (controller_v_431) {
    v_102 = sub_165;
  } else {
    v_102 = sub_178;
  };
  if (controller_c_ar1) {
    v_103 = sub_165;
  } else {
    v_103 = v_102;
  };
  if (controller_c_ar2) {
    sub_177 = v_103;
  } else {
    sub_177 = v_106;
  };
  if (controller_p_arrived) {
    v_107 = sub_177;
    sub_176 = sub_139;
  } else {
    v_107 = sub_139;
    sub_176 = sub_177;
  };
  if (controller_ck_24_1) {
    sub_175 = v_107;
  } else {
    sub_175 = sub_176;
  };
  sub_174 = sub_175;
  sub_183 = sub_139;
  if (controller_v_431) {
    v_100 = sub_154;
    v_99 = sub_140;
  } else {
    v_100 = sub_141;
    v_99 = sub_155;
  };
  if (controller_c_ar1) {
    v_101 = v_99;
  } else {
    v_101 = v_100;
  };
  if (controller_v_431) {
    v_97 = sub_154;
  } else {
    v_97 = sub_140;
  };
  if (controller_c_ar1) {
    v_98 = sub_170;
  } else {
    v_98 = v_97;
  };
  if (controller_c_ar2) {
    sub_184 = v_98;
  } else {
    sub_184 = v_101;
  };
  if (controller_c_arm) {
    sub_182 = sub_183;
  } else {
    sub_182 = sub_184;
  };
  if (controller_p1_arrived) {
    v_108 = sub_182;
    sub_173 = sub_174;
  } else {
    v_108 = sub_174;
    sub_173 = sub_182;
  };
  if (controller_ck_26_1) {
    sub_172 = v_108;
  } else {
    sub_172 = sub_173;
  };
  if (controller_c_jan) {
    v_128 = sub_148;
  } else {
    v_128 = sub_172;
  };
  if (controller_c_porta) {
    sub_132 = sub_133;
  } else {
    sub_132 = v_128;
  };
  sub_192 = sub_165;
  sub_191 = sub_192;
  if (controller_p_arrived) {
    v_92 = sub_191;
    sub_190 = false;
  } else {
    v_92 = false;
    sub_190 = sub_191;
  };
  if (controller_ck_24_1) {
    sub_189 = v_92;
  } else {
    sub_189 = sub_190;
  };
  sub_188 = sub_189;
  if (controller_p1_arrived) {
    v_93 = sub_168;
    sub_187 = sub_188;
  } else {
    v_93 = sub_188;
    sub_187 = sub_168;
  };
  if (controller_ck_26_1) {
    sub_186 = v_93;
  } else {
    sub_186 = sub_187;
  };
  if (controller_p_arrived) {
    v_91 = sub_177;
    sub_196 = sub_73;
  } else {
    v_91 = sub_73;
    sub_196 = sub_177;
  };
  if (controller_ck_24_1) {
    sub_195 = v_91;
  } else {
    sub_195 = sub_196;
  };
  sub_194 = sub_195;
  if (controller_p1_arrived) {
    v_94 = sub_182;
    sub_193 = sub_194;
  } else {
    v_94 = sub_194;
    sub_193 = sub_182;
  };
  if (controller_ck_26_1) {
    v_95 = v_94;
  } else {
    v_95 = sub_193;
  };
  if (controller_c_jan) {
    v_96 = sub_186;
  } else {
    v_96 = v_95;
  };
  if (controller_c_porta) {
    sub_185 = sub_67;
  } else {
    sub_185 = v_96;
  };
  if (controller_shift_turno) {
    v_129 = sub_185;
    sub_131 = sub_132;
  } else {
    v_129 = sub_132;
    sub_131 = sub_185;
  };
  if (controller_ck_1) {
    sub_130 = v_129;
  } else {
    sub_130 = sub_131;
  };
  if (controller_ar_recovered) {
    v_80 = sub_29;
  } else {
    v_80 = sub_147;
  };
  if (controller_ar_failed) {
    sub_210 = sub_146;
  } else {
    sub_210 = sub_28;
  };
  sub_209 = sub_210;
  if (controller_ck_34_1) {
    sub_208 = v_80;
  } else {
    sub_208 = sub_209;
  };
  sub_207 = sub_208;
  sub_206 = sub_207;
  if (controller_v_431) {
    v_84 = sub_36;
  } else {
    v_84 = sub_206;
  };
  if (controller_v_430) {
    sub_205 = sub_206;
  } else {
    sub_205 = sub_36;
  };
  if (controller_v_431) {
    v_83 = sub_205;
  } else {
    v_83 = sub_36;
  };
  if (controller_c_ar1) {
    v_85 = v_83;
  } else {
    v_85 = v_84;
  };
  if (controller_v_431) {
    v_81 = sub_36;
  } else {
    v_81 = sub_205;
  };
  if (controller_c_ar1) {
    v_82 = sub_36;
  } else {
    v_82 = v_81;
  };
  if (controller_c_ar2) {
    sub_204 = v_82;
  } else {
    sub_204 = v_85;
  };
  if (controller_p_arrived) {
    v_86 = sub_204;
    sub_203 = sub_73;
  } else {
    v_86 = sub_73;
    sub_203 = sub_204;
  };
  if (controller_ck_24_1) {
    sub_202 = v_86;
  } else {
    sub_202 = sub_203;
  };
  sub_201 = sub_202;
  if (controller_v_431) {
    v_78 = sub_23;
    v_77 = sub_140;
  } else {
    v_78 = sub_141;
    v_77 = sub_24;
  };
  if (controller_c_ar1) {
    v_79 = v_77;
  } else {
    v_79 = v_78;
  };
  if (controller_v_431) {
    v_75 = sub_23;
  } else {
    v_75 = sub_140;
  };
  if (controller_c_ar1) {
    v_76 = sub_41;
  } else {
    v_76 = v_75;
  };
  if (controller_c_ar2) {
    sub_212 = v_76;
  } else {
    sub_212 = v_79;
  };
  if (controller_c_arm) {
    sub_211 = sub_183;
  } else {
    sub_211 = sub_212;
  };
  if (controller_p1_arrived) {
    v_87 = sub_211;
    sub_200 = sub_201;
  } else {
    v_87 = sub_201;
    sub_200 = sub_211;
  };
  if (controller_ck_26_1) {
    v_88 = v_87;
  } else {
    v_88 = sub_200;
  };
  if (controller_c_jan) {
    v_89 = sub_43;
  } else {
    v_89 = v_88;
  };
  if (controller_c_porta) {
    sub_199 = sub_67;
  } else {
    sub_199 = v_89;
  };
  if (controller_shift_turno) {
    v_90 = sub_199;
    sub_198 = sub_83;
  } else {
    v_90 = sub_83;
    sub_198 = sub_199;
  };
  if (controller_ck_1) {
    sub_197 = v_90;
  } else {
    sub_197 = sub_198;
  };
  if (controller_l_failed) {
    sub_129 = sub_130;
  } else {
    sub_129 = sub_197;
  };
  if (controller_ck_38_1) {
    v_130 = sub_197;
  } else {
    v_130 = sub_129;
  };
  sub_213 = sub_130;
  if (controller_ck_38_1) {
    v_131 = sub_213;
  } else {
    v_131 = sub_129;
  };
  if (controller_l_recovered) {
    v_132 = v_130;
  } else {
    v_132 = v_131;
  };
  if (controller_cl1) {
    v_133 = v_132;
  } else {
    v_133 = sub_101;
  };
  if (controller_down) {
    sub_128 = v_133;
  } else {
    sub_128 = v_134;
  };
  if (controller_cl1) {
    v_73 = sub_62;
  } else {
    v_73 = sub_101;
  };
  if (controller_p_arrived) {
    sub_222 = sub_73;
    sub_223 = sub_139;
  } else {
    sub_222 = sub_139;
    sub_223 = sub_73;
  };
  if (controller_ck_24_1) {
    sub_221 = sub_223;
  } else {
    sub_221 = sub_222;
  };
  sub_220 = sub_221;
  sub_224 = sub_183;
  if (controller_p1_arrived) {
    v_65 = sub_224;
    sub_219 = sub_220;
  } else {
    v_65 = sub_220;
    sub_219 = sub_224;
  };
  if (controller_ck_26_1) {
    v_66 = v_65;
  } else {
    v_66 = sub_219;
  };
  if (controller_c_jan) {
    v_67 = false;
  } else {
    v_67 = v_66;
  };
  if (controller_c_porta) {
    sub_218 = sub_67;
  } else {
    sub_218 = v_67;
  };
  if (controller_shift_turno) {
    v_68 = sub_218;
    sub_217 = sub_83;
  } else {
    v_68 = sub_83;
    sub_217 = sub_218;
  };
  if (controller_ck_1) {
    sub_216 = v_68;
  } else {
    sub_216 = sub_217;
  };
  if (controller_l_failed) {
    sub_215 = sub_130;
  } else {
    sub_215 = sub_216;
  };
  if (controller_ck_38_1) {
    v_70 = sub_213;
    v_69 = sub_216;
  } else {
    v_70 = sub_215;
    v_69 = sub_215;
  };
  if (controller_l_recovered) {
    v_71 = v_69;
  } else {
    v_71 = v_70;
  };
  if (controller_cl1) {
    v_72 = v_71;
  } else {
    v_72 = sub_101;
  };
  if (controller_down) {
    v_74 = v_72;
  } else {
    v_74 = v_73;
  };
  if (controller_cl2) {
    sub_214 = v_74;
  } else {
    sub_214 = sub_128;
  };
  if (controller_up) {
    v_135 = sub_128;
  } else {
    v_135 = sub_214;
  };
  if (controller_cup) {
    sub_127 = v_135;
  } else {
    sub_127 = sub_214;
  };
  if (controller_v_401) {
    sub_126 = sub_121;
  } else {
    sub_126 = sub_127;
  };
  if (controller_cl2) {
    sub_226 = sub_110;
  } else {
    sub_226 = sub_99;
  };
  sub_225 = sub_226;
  if (controller_v_401) {
    v_196 = sub_225;
  } else {
    v_196 = sub_7;
  };
  if (controller_v_400) {
    v_197 = v_196;
  } else {
    v_197 = sub_126;
  };
  if (controller_v_399) {
    sub_4 = v_197;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_1 = sub_2;
  if (controller_c_jan) {
    v_57 = sub_148;
  } else {
    v_57 = sub_186;
  };
  if (controller_c_porta) {
    sub_241 = false;
  } else {
    sub_241 = v_57;
  };
  if (controller_p_arrived) {
    v_55 = false;
    sub_248 = sub_153;
  } else {
    v_55 = sub_153;
    sub_248 = false;
  };
  if (controller_ck_24_1) {
    sub_247 = v_55;
  } else {
    sub_247 = sub_248;
  };
  sub_246 = sub_247;
  if (controller_p1_arrived) {
    v_56 = false;
    sub_245 = sub_246;
  } else {
    v_56 = sub_246;
    sub_245 = false;
  };
  if (controller_ck_26_1) {
    sub_244 = v_56;
  } else {
    sub_244 = sub_245;
  };
  if (controller_c_jan) {
    sub_243 = sub_244;
  } else {
    sub_243 = false;
  };
  if (controller_c_porta) {
    sub_242 = sub_243;
  } else {
    sub_242 = sub_186;
  };
  if (controller_shift_turno) {
    v_58 = sub_242;
    sub_240 = sub_241;
  } else {
    v_58 = sub_241;
    sub_240 = sub_242;
  };
  if (controller_ck_1) {
    sub_239 = v_58;
  } else {
    sub_239 = sub_240;
  };
  if (controller_c_porta) {
    sub_251 = sub_243;
  } else {
    sub_251 = false;
  };
  if (controller_shift_turno) {
    v_54 = sub_251;
    sub_250 = sub_241;
  } else {
    v_54 = sub_241;
    sub_250 = sub_251;
  };
  if (controller_ck_1) {
    sub_249 = v_54;
  } else {
    sub_249 = sub_250;
  };
  if (controller_l_failed) {
    sub_238 = sub_239;
  } else {
    sub_238 = sub_249;
  };
  if (controller_ck_38_1) {
    v_60 = sub_239;
    v_59 = sub_249;
  } else {
    v_60 = sub_238;
    v_59 = sub_238;
  };
  if (controller_l_recovered) {
    sub_237 = v_59;
  } else {
    sub_237 = v_60;
  };
  sub_236 = sub_237;
  sub_235 = sub_236;
  sub_234 = sub_235;
  sub_233 = sub_234;
  sub_232 = sub_233;
  if (controller_c_jan) {
    sub_259 = sub_244;
  } else {
    sub_259 = sub_134;
  };
  if (controller_c_porta) {
    sub_258 = sub_259;
  } else {
    sub_258 = sub_133;
  };
  if (controller_shift_turno) {
    v_51 = sub_258;
    sub_257 = false;
  } else {
    v_51 = false;
    sub_257 = sub_258;
  };
  if (controller_ck_1) {
    sub_256 = v_51;
  } else {
    sub_256 = sub_257;
  };
  if (controller_shift_turno) {
    v_50 = sub_258;
    sub_261 = sub_132;
  } else {
    v_50 = sub_132;
    sub_261 = sub_258;
  };
  if (controller_ck_1) {
    sub_260 = v_50;
  } else {
    sub_260 = sub_261;
  };
  if (controller_l_failed) {
    sub_255 = sub_256;
  } else {
    sub_255 = sub_260;
  };
  if (controller_ck_38_1) {
    v_52 = sub_260;
  } else {
    v_52 = sub_255;
  };
  sub_262 = sub_256;
  if (controller_ck_38_1) {
    v_53 = sub_262;
  } else {
    v_53 = sub_255;
  };
  if (controller_l_recovered) {
    sub_254 = v_52;
  } else {
    sub_254 = v_53;
  };
  sub_253 = sub_254;
  sub_252 = sub_253;
  if (controller_c_jan) {
    v_46 = sub_186;
  } else {
    v_46 = sub_172;
  };
  if (controller_c_porta) {
    sub_269 = sub_259;
  } else {
    sub_269 = v_46;
  };
  if (controller_shift_turno) {
    v_47 = sub_269;
    sub_268 = sub_132;
  } else {
    v_47 = sub_132;
    sub_268 = sub_269;
  };
  if (controller_ck_1) {
    sub_267 = v_47;
  } else {
    sub_267 = sub_268;
  };
  if (controller_c_jan) {
    v_44 = false;
  } else {
    v_44 = sub_224;
  };
  if (controller_c_porta) {
    sub_272 = sub_259;
  } else {
    sub_272 = v_44;
  };
  if (controller_shift_turno) {
    v_45 = sub_272;
    sub_271 = sub_132;
  } else {
    v_45 = sub_132;
    sub_271 = sub_272;
  };
  if (controller_ck_1) {
    sub_270 = v_45;
  } else {
    sub_270 = sub_271;
  };
  if (controller_l_failed) {
    sub_266 = sub_267;
  } else {
    sub_266 = sub_270;
  };
  if (controller_ck_38_1) {
    v_48 = sub_270;
  } else {
    v_48 = sub_266;
  };
  sub_273 = sub_267;
  if (controller_ck_38_1) {
    v_49 = sub_273;
  } else {
    v_49 = sub_266;
  };
  if (controller_l_recovered) {
    sub_265 = v_48;
  } else {
    sub_265 = v_49;
  };
  if (controller_cl1) {
    sub_264 = sub_265;
  } else {
    sub_264 = sub_254;
  };
  if (controller_p_arrived) {
    v_37 = sub_191;
    sub_283 = sub_139;
  } else {
    v_37 = sub_139;
    sub_283 = sub_191;
  };
  if (controller_ck_24_1) {
    sub_282 = v_37;
  } else {
    sub_282 = sub_283;
  };
  sub_281 = sub_282;
  if (controller_p1_arrived) {
    v_38 = sub_168;
    sub_280 = sub_281;
  } else {
    v_38 = sub_281;
    sub_280 = sub_168;
  };
  if (controller_ck_26_1) {
    v_39 = v_38;
  } else {
    v_39 = sub_280;
  };
  if (controller_c_jan) {
    v_40 = sub_186;
  } else {
    v_40 = v_39;
  };
  if (controller_c_porta) {
    sub_279 = sub_259;
  } else {
    sub_279 = v_40;
  };
  if (controller_shift_turno) {
    v_41 = sub_279;
    sub_278 = sub_132;
  } else {
    v_41 = sub_132;
    sub_278 = sub_279;
  };
  if (controller_ck_1) {
    sub_277 = v_41;
  } else {
    sub_277 = sub_278;
  };
  if (controller_l_failed) {
    sub_276 = sub_256;
  } else {
    sub_276 = sub_277;
  };
  if (controller_ck_38_1) {
    v_43 = sub_262;
    v_42 = sub_277;
  } else {
    v_43 = sub_276;
    v_42 = sub_276;
  };
  if (controller_l_recovered) {
    sub_275 = v_42;
  } else {
    sub_275 = v_43;
  };
  if (controller_cl1) {
    sub_274 = sub_275;
  } else {
    sub_274 = sub_254;
  };
  if (controller_cl2) {
    sub_263 = sub_264;
  } else {
    sub_263 = sub_274;
  };
  if (controller_up) {
    v_61 = sub_252;
  } else {
    v_61 = sub_263;
  };
  if (controller_cup) {
    v_62 = v_61;
  } else {
    v_62 = sub_263;
  };
  if (controller_v_401) {
    sub_231 = v_62;
  } else {
    sub_231 = sub_232;
  };
  sub_288 = sub_275;
  sub_287 = sub_288;
  sub_286 = sub_287;
  sub_285 = sub_286;
  sub_284 = sub_285;
  if (controller_v_400) {
    sub_230 = sub_284;
  } else {
    sub_230 = sub_231;
  };
  if (controller_cl1) {
    v_35 = sub_275;
  } else {
    v_35 = sub_265;
  };
  if (controller_p_arrived) {
    v_26 = sub_204;
    sub_299 = sub_139;
  } else {
    v_26 = sub_139;
    sub_299 = sub_204;
  };
  if (controller_ck_24_1) {
    sub_298 = v_26;
  } else {
    sub_298 = sub_299;
  };
  sub_297 = sub_298;
  if (controller_p1_arrived) {
    v_27 = sub_211;
    sub_296 = sub_297;
  } else {
    v_27 = sub_297;
    sub_296 = sub_211;
  };
  if (controller_ck_26_1) {
    v_28 = v_27;
  } else {
    v_28 = sub_296;
  };
  if (controller_c_jan) {
    v_29 = sub_43;
  } else {
    v_29 = v_28;
  };
  if (controller_c_porta) {
    sub_295 = sub_259;
  } else {
    sub_295 = v_29;
  };
  if (controller_shift_turno) {
    v_30 = sub_295;
    sub_294 = sub_132;
  } else {
    v_30 = sub_132;
    sub_294 = sub_295;
  };
  if (controller_ck_1) {
    sub_293 = v_30;
  } else {
    sub_293 = sub_294;
  };
  if (controller_l_failed) {
    sub_292 = sub_267;
  } else {
    sub_292 = sub_293;
  };
  if (controller_ck_38_1) {
    v_32 = sub_273;
    v_31 = sub_293;
  } else {
    v_32 = sub_292;
    v_31 = sub_292;
  };
  if (controller_l_recovered) {
    v_33 = v_31;
  } else {
    v_33 = v_32;
  };
  if (controller_cl1) {
    v_34 = v_33;
  } else {
    v_34 = sub_265;
  };
  if (controller_down) {
    sub_291 = v_34;
  } else {
    sub_291 = v_35;
  };
  if (controller_cl1) {
    v_24 = sub_254;
  } else {
    v_24 = sub_265;
  };
  if (controller_down) {
    v_25 = sub_265;
  } else {
    v_25 = v_24;
  };
  if (controller_cl2) {
    sub_300 = v_25;
  } else {
    sub_300 = sub_291;
  };
  if (controller_up) {
    v_36 = sub_291;
  } else {
    v_36 = sub_300;
  };
  if (controller_cup) {
    sub_290 = v_36;
  } else {
    sub_290 = sub_300;
  };
  if (controller_v_401) {
    sub_289 = sub_284;
  } else {
    sub_289 = sub_290;
  };
  if (controller_p_arrived) {
    v_9 = sub_48;
    sub_310 = sub_139;
  } else {
    v_9 = sub_139;
    sub_310 = sub_48;
  };
  if (controller_ck_24_1) {
    sub_309 = v_9;
  } else {
    sub_309 = sub_310;
  };
  sub_308 = sub_309;
  if (controller_p1_arrived) {
    v_10 = sub_39;
    sub_307 = sub_308;
  } else {
    v_10 = sub_308;
    sub_307 = sub_39;
  };
  if (controller_ck_26_1) {
    v_11 = v_10;
  } else {
    v_11 = sub_307;
  };
  if (controller_c_jan) {
    v_12 = sub_43;
  } else {
    v_12 = v_11;
  };
  if (controller_c_porta) {
    sub_306 = sub_259;
  } else {
    sub_306 = v_12;
  };
  if (controller_shift_turno) {
    v_13 = sub_306;
    sub_305 = sub_132;
  } else {
    v_13 = sub_132;
    sub_305 = sub_306;
  };
  if (controller_ck_1) {
    sub_304 = v_13;
  } else {
    sub_304 = sub_305;
  };
  if (controller_l_failed) {
    sub_303 = sub_256;
  } else {
    sub_303 = sub_304;
  };
  if (controller_ck_38_1) {
    v_15 = sub_262;
    v_14 = sub_304;
  } else {
    v_15 = sub_303;
    v_14 = sub_303;
  };
  if (controller_l_recovered) {
    v_16 = v_14;
  } else {
    v_16 = v_15;
  };
  if (controller_cl1) {
    v_17 = v_16;
  } else {
    v_17 = sub_254;
  };
  if (controller_down) {
    v_18 = v_17;
  } else {
    v_18 = sub_274;
  };
  if (controller_p_arrived) {
    v_4 = sub_89;
    sub_318 = sub_139;
  } else {
    v_4 = sub_139;
    sub_318 = sub_89;
  };
  if (controller_ck_24_1) {
    sub_317 = v_4;
  } else {
    sub_317 = sub_318;
  };
  sub_316 = sub_317;
  if (controller_p1_arrived) {
    v_5 = sub_94;
    sub_315 = sub_316;
  } else {
    v_5 = sub_316;
    sub_315 = sub_94;
  };
  if (controller_ck_26_1) {
    v_6 = v_5;
  } else {
    v_6 = sub_315;
  };
  if (controller_c_jan) {
    v_7 = sub_43;
  } else {
    v_7 = v_6;
  };
  if (controller_c_porta) {
    sub_314 = sub_259;
  } else {
    sub_314 = v_7;
  };
  if (controller_shift_turno) {
    v_8 = sub_314;
    sub_313 = sub_83;
  } else {
    v_8 = sub_83;
    sub_313 = sub_314;
  };
  if (controller_ck_1) {
    sub_312 = v_8;
  } else {
    sub_312 = sub_313;
  };
  if (controller_ck_24_1) {
    sub_324 = sub_222;
  } else {
    sub_324 = sub_223;
  };
  sub_323 = sub_324;
  if (controller_p1_arrived) {
    v = sub_109;
    sub_322 = sub_323;
  } else {
    v = sub_323;
    sub_322 = sub_109;
  };
  if (controller_ck_26_1) {
    v_1 = v;
  } else {
    v_1 = sub_322;
  };
  if (controller_c_jan) {
    v_2 = false;
  } else {
    v_2 = v_1;
  };
  if (controller_c_porta) {
    sub_321 = sub_259;
  } else {
    sub_321 = v_2;
  };
  if (controller_shift_turno) {
    v_3 = sub_321;
    sub_320 = sub_132;
  } else {
    v_3 = sub_132;
    sub_320 = sub_321;
  };
  if (controller_ck_1) {
    sub_319 = v_3;
  } else {
    sub_319 = sub_320;
  };
  if (controller_l_failed) {
    sub_311 = sub_312;
  } else {
    sub_311 = sub_319;
  };
  if (controller_ck_38_1) {
    v_20 = sub_312;
    v_19 = sub_319;
  } else {
    v_20 = sub_311;
    v_19 = sub_311;
  };
  if (controller_l_recovered) {
    v_21 = v_19;
  } else {
    v_21 = v_20;
  };
  if (controller_cl1) {
    v_22 = v_21;
  } else {
    v_22 = sub_254;
  };
  if (controller_down) {
    v_23 = v_22;
  } else {
    v_23 = sub_264;
  };
  if (controller_cl2) {
    sub_302 = v_18;
  } else {
    sub_302 = v_23;
  };
  sub_301 = sub_302;
  if (controller_v_401) {
    v_63 = sub_301;
  } else {
    v_63 = sub_232;
  };
  if (controller_v_400) {
    v_64 = v_63;
  } else {
    v_64 = sub_289;
  };
  if (controller_v_399) {
    sub_229 = v_64;
  } else {
    sub_229 = sub_230;
  };
  sub_228 = sub_229;
  sub_227 = sub_228;
  if (p_controller_cdown) {
    sub_0 = sub_227;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_cdown = sub_0;;
}

void Controller_controller__controller_controller_controller_cup_step(
  int controller_up, int controller_down, int controller_shift_turno,
  int controller_abre_porta, int controller_p_arrived,
  int controller_p1_arrived, int controller_ar_failed,
  int controller_ar_recovered, int controller_l_failed,
  int controller_l_recovered, int controller_ck_1, int controller_pnr_13,
  int controller_ck_18_1, int controller_pnr_12, int controller_ck_20_1,
  int controller_pnr_11, int controller_ck_22_1, int controller_pnr_10,
  int controller_ck_24_1, int controller_pnr_9, int controller_ck_26_1,
  int controller_pnr_8, int controller_ck_28_1, int controller_pnr_7,
  int controller_ck_30_1, int controller_pnr_6, int controller_v_431,
  int controller_v_430, int controller_pnr_5, int controller_ck_34_1,
  int controller_pnr_4, int controller_v_401, int controller_v_400,
  int controller_v_399, int controller_pnr_3, int controller_ck_38_1,
  int controller_pnr, int p_controller_cdown, int p_controller_cup,
  int p_controller_cl2, int p_controller_cl1, int p_controller_c_policy,
  int p_controller_c_arm, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_luz2, int p_controller_c_luz1, int p_controller_c_jan,
  int p_controller_c_pc, int p_controller_c_rot, int p_controller_c_porta,
  int controller_cl2, int controller_cl1, int controller_c_policy,
  int controller_c_arm, int controller_c_ar2, int controller_c_ar1,
  int controller_c_luz2, int controller_c_luz1, int controller_c_jan,
  int controller_c_pc, int controller_c_rot, int controller_c_porta,
  Controller_controller__controller_controller_controller_cup_out* _out) {
  
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
  sub_27 = false;
  if (controller_ar_failed) {
    sub_26 = false;
  } else {
    sub_26 = sub_27;
  };
  sub_25 = sub_26;
  sub_28 = sub_27;
  if (controller_ar_recovered) {
    v_369 = sub_28;
  } else {
    v_369 = false;
  };
  if (controller_ck_34_1) {
    sub_24 = v_369;
  } else {
    sub_24 = sub_25;
  };
  if (controller_c_rot) {
    v_370 = false;
  } else {
    v_370 = sub_24;
  };
  if (controller_c_pc) {
    sub_23 = false;
  } else {
    sub_23 = v_370;
  };
  if (controller_v_430) {
    sub_22 = sub_23;
  } else {
    sub_22 = false;
  };
  if (controller_v_431) {
    v_371 = false;
  } else {
    v_371 = sub_22;
  };
  if (controller_c_ar1) {
    v_372 = false;
  } else {
    v_372 = v_371;
  };
  if (controller_v_431) {
    sub_29 = sub_22;
    sub_30 = false;
  } else {
    sub_29 = false;
    sub_30 = sub_23;
  };
  if (controller_c_ar1) {
    v_373 = sub_29;
  } else {
    v_373 = sub_30;
  };
  if (controller_c_ar2) {
    sub_21 = v_372;
  } else {
    sub_21 = v_373;
  };
  sub_34 = sub_24;
  if (controller_c_pc) {
    sub_33 = false;
  } else {
    sub_33 = sub_34;
  };
  sub_35 = sub_34;
  if (controller_v_430) {
    sub_32 = sub_35;
  } else {
    sub_32 = sub_33;
  };
  if (controller_v_431) {
    v_367 = sub_35;
  } else {
    v_367 = sub_32;
  };
  if (controller_v_430) {
    sub_36 = sub_33;
  } else {
    sub_36 = sub_35;
  };
  if (controller_c_ar1) {
    v_368 = v_367;
  } else {
    v_368 = sub_36;
  };
  if (controller_v_431) {
    sub_37 = sub_36;
  } else {
    sub_37 = sub_33;
  };
  if (controller_c_ar2) {
    sub_31 = v_368;
  } else {
    sub_31 = sub_37;
  };
  if (controller_p_arrived) {
    v_374 = sub_31;
    sub_20 = sub_21;
  } else {
    v_374 = sub_21;
    sub_20 = sub_31;
  };
  if (controller_ck_24_1) {
    sub_19 = v_374;
  } else {
    sub_19 = sub_20;
  };
  sub_18 = sub_19;
  if (controller_c_ar1) {
    v_366 = sub_30;
  } else {
    v_366 = sub_29;
  };
  if (controller_v_430) {
    sub_41 = false;
  } else {
    sub_41 = sub_23;
  };
  if (controller_v_431) {
    sub_40 = false;
  } else {
    sub_40 = sub_41;
  };
  if (controller_c_ar1) {
    v_365 = sub_40;
  } else {
    v_365 = sub_29;
  };
  if (controller_c_ar2) {
    sub_39 = v_365;
  } else {
    sub_39 = v_366;
  };
  if (controller_c_arm) {
    sub_38 = false;
  } else {
    sub_38 = sub_39;
  };
  if (controller_p1_arrived) {
    v_375 = sub_38;
    sub_17 = sub_18;
  } else {
    v_375 = sub_18;
    sub_17 = sub_38;
  };
  if (controller_ck_26_1) {
    sub_16 = v_375;
  } else {
    sub_16 = sub_17;
  };
  sub_48 = sub_35;
  sub_47 = sub_48;
  if (controller_p_arrived) {
    v_363 = sub_47;
    sub_46 = false;
  } else {
    v_363 = false;
    sub_46 = sub_47;
  };
  if (controller_ck_24_1) {
    sub_45 = v_363;
  } else {
    sub_45 = sub_46;
  };
  sub_44 = sub_45;
  if (controller_p1_arrived) {
    v_364 = sub_38;
    sub_43 = sub_44;
  } else {
    v_364 = sub_44;
    sub_43 = sub_38;
  };
  if (controller_ck_26_1) {
    sub_42 = v_364;
  } else {
    sub_42 = sub_43;
  };
  if (controller_c_jan) {
    v_376 = sub_16;
  } else {
    v_376 = sub_42;
  };
  if (controller_c_porta) {
    sub_15 = false;
  } else {
    sub_15 = v_376;
  };
  if (controller_p_arrived) {
    v_361 = false;
    sub_55 = sub_21;
  } else {
    v_361 = sub_21;
    sub_55 = false;
  };
  if (controller_ck_24_1) {
    sub_54 = v_361;
  } else {
    sub_54 = sub_55;
  };
  sub_53 = sub_54;
  if (controller_p1_arrived) {
    v_362 = false;
    sub_52 = sub_53;
  } else {
    v_362 = sub_53;
    sub_52 = false;
  };
  if (controller_ck_26_1) {
    sub_51 = v_362;
  } else {
    sub_51 = sub_52;
  };
  if (controller_c_jan) {
    sub_50 = sub_51;
  } else {
    sub_50 = false;
  };
  if (controller_c_porta) {
    sub_49 = sub_50;
  } else {
    sub_49 = sub_42;
  };
  if (controller_shift_turno) {
    v_377 = sub_49;
    sub_14 = sub_15;
  } else {
    v_377 = sub_15;
    sub_14 = sub_49;
  };
  if (controller_ck_1) {
    sub_13 = v_377;
  } else {
    sub_13 = sub_14;
  };
  if (controller_c_porta) {
    sub_58 = sub_50;
  } else {
    sub_58 = false;
  };
  if (controller_shift_turno) {
    v_360 = sub_58;
    sub_57 = sub_15;
  } else {
    v_360 = sub_15;
    sub_57 = sub_58;
  };
  if (controller_ck_1) {
    sub_56 = v_360;
  } else {
    sub_56 = sub_57;
  };
  if (controller_l_failed) {
    sub_12 = sub_13;
  } else {
    sub_12 = sub_56;
  };
  if (controller_ck_38_1) {
    v_379 = sub_13;
    v_378 = sub_56;
  } else {
    v_379 = sub_12;
    v_378 = sub_12;
  };
  if (controller_l_recovered) {
    sub_11 = v_378;
  } else {
    sub_11 = v_379;
  };
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (controller_ar_recovered) {
    v_348 = false;
  } else {
    v_348 = sub_28;
  };
  if (controller_ar_failed) {
    sub_79 = sub_27;
  } else {
    sub_79 = false;
  };
  sub_78 = sub_79;
  if (controller_ck_34_1) {
    sub_77 = v_348;
  } else {
    sub_77 = sub_78;
  };
  sub_76 = sub_77;
  sub_75 = sub_76;
  if (controller_v_431) {
    v_352 = false;
  } else {
    v_352 = sub_75;
  };
  if (controller_v_430) {
    sub_74 = sub_75;
  } else {
    sub_74 = false;
  };
  if (controller_v_431) {
    v_351 = sub_74;
  } else {
    v_351 = false;
  };
  if (controller_c_ar1) {
    v_353 = v_351;
  } else {
    v_353 = v_352;
  };
  if (controller_v_431) {
    v_349 = false;
  } else {
    v_349 = sub_74;
  };
  if (controller_c_ar1) {
    v_350 = false;
  } else {
    v_350 = v_349;
  };
  if (controller_c_ar2) {
    sub_73 = v_350;
  } else {
    sub_73 = v_353;
  };
  if (controller_p_arrived) {
    v_354 = false;
    sub_72 = sub_73;
  } else {
    v_354 = sub_73;
    sub_72 = false;
  };
  if (controller_ck_24_1) {
    sub_71 = v_354;
  } else {
    sub_71 = sub_72;
  };
  sub_70 = sub_71;
  if (controller_p1_arrived) {
    v_355 = false;
    sub_69 = sub_70;
  } else {
    v_355 = sub_70;
    sub_69 = false;
  };
  if (controller_ck_26_1) {
    sub_68 = v_355;
  } else {
    sub_68 = sub_69;
  };
  if (controller_c_jan) {
    sub_67 = false;
  } else {
    sub_67 = sub_68;
  };
  sub_89 = sub_28;
  sub_88 = sub_89;
  sub_87 = sub_88;
  if (controller_v_431) {
    v_344 = sub_35;
  } else {
    v_344 = sub_87;
  };
  if (controller_v_430) {
    sub_86 = sub_87;
  } else {
    sub_86 = sub_35;
  };
  if (controller_v_431) {
    v_343 = sub_86;
  } else {
    v_343 = sub_35;
  };
  if (controller_c_ar1) {
    v_345 = v_343;
  } else {
    v_345 = v_344;
  };
  if (controller_v_431) {
    v_341 = sub_35;
  } else {
    v_341 = sub_86;
  };
  if (controller_c_ar1) {
    v_342 = sub_35;
  } else {
    v_342 = v_341;
  };
  if (controller_c_ar2) {
    sub_85 = v_342;
  } else {
    sub_85 = v_345;
  };
  if (controller_p_arrived) {
    v_346 = sub_85;
    sub_84 = sub_73;
  } else {
    v_346 = sub_73;
    sub_84 = sub_85;
  };
  if (controller_ck_24_1) {
    sub_83 = v_346;
  } else {
    sub_83 = sub_84;
  };
  sub_82 = sub_83;
  sub_91 = sub_73;
  if (controller_v_431) {
    v_339 = sub_22;
    v_338 = sub_74;
  } else {
    v_339 = sub_75;
    v_338 = sub_23;
  };
  if (controller_c_ar1) {
    v_340 = v_338;
  } else {
    v_340 = v_339;
  };
  if (controller_v_431) {
    v_336 = sub_22;
  } else {
    v_336 = sub_74;
  };
  if (controller_c_ar1) {
    v_337 = sub_40;
  } else {
    v_337 = v_336;
  };
  if (controller_c_ar2) {
    sub_92 = v_337;
  } else {
    sub_92 = v_340;
  };
  if (controller_c_arm) {
    sub_90 = sub_91;
  } else {
    sub_90 = sub_92;
  };
  if (controller_p1_arrived) {
    v_347 = sub_90;
    sub_81 = sub_82;
  } else {
    v_347 = sub_82;
    sub_81 = sub_90;
  };
  if (controller_ck_26_1) {
    sub_80 = v_347;
  } else {
    sub_80 = sub_81;
  };
  if (controller_c_jan) {
    v_356 = sub_16;
  } else {
    v_356 = sub_80;
  };
  if (controller_c_porta) {
    sub_66 = sub_67;
  } else {
    sub_66 = v_356;
  };
  if (controller_c_jan) {
    v_335 = sub_42;
    sub_94 = sub_51;
  } else {
    v_335 = sub_80;
    sub_94 = sub_68;
  };
  if (controller_c_porta) {
    sub_93 = sub_94;
  } else {
    sub_93 = v_335;
  };
  if (controller_shift_turno) {
    v_357 = sub_93;
    sub_65 = sub_66;
  } else {
    v_357 = sub_66;
    sub_65 = sub_93;
  };
  if (controller_ck_1) {
    sub_64 = v_357;
  } else {
    sub_64 = sub_65;
  };
  sub_98 = sub_91;
  if (controller_c_jan) {
    v_333 = false;
  } else {
    v_333 = sub_98;
  };
  if (controller_c_porta) {
    sub_97 = sub_94;
  } else {
    sub_97 = v_333;
  };
  if (controller_shift_turno) {
    v_334 = sub_97;
    sub_96 = sub_66;
  } else {
    v_334 = sub_66;
    sub_96 = sub_97;
  };
  if (controller_ck_1) {
    sub_95 = v_334;
  } else {
    sub_95 = sub_96;
  };
  if (controller_l_failed) {
    sub_63 = sub_64;
  } else {
    sub_63 = sub_95;
  };
  if (controller_ck_38_1) {
    v_358 = sub_95;
  } else {
    v_358 = sub_63;
  };
  sub_99 = sub_64;
  if (controller_ck_38_1) {
    v_359 = sub_99;
  } else {
    v_359 = sub_63;
  };
  if (controller_l_recovered) {
    sub_62 = v_358;
  } else {
    sub_62 = v_359;
  };
  if (controller_c_porta) {
    sub_104 = sub_94;
  } else {
    sub_104 = sub_67;
  };
  if (controller_shift_turno) {
    v_330 = sub_104;
    sub_103 = false;
  } else {
    v_330 = false;
    sub_103 = sub_104;
  };
  if (controller_ck_1) {
    sub_102 = v_330;
  } else {
    sub_102 = sub_103;
  };
  if (controller_shift_turno) {
    v_329 = sub_104;
    sub_106 = sub_66;
  } else {
    v_329 = sub_66;
    sub_106 = sub_104;
  };
  if (controller_ck_1) {
    sub_105 = v_329;
  } else {
    sub_105 = sub_106;
  };
  if (controller_l_failed) {
    sub_101 = sub_102;
  } else {
    sub_101 = sub_105;
  };
  if (controller_ck_38_1) {
    v_331 = sub_105;
  } else {
    v_331 = sub_101;
  };
  sub_107 = sub_102;
  if (controller_ck_38_1) {
    v_332 = sub_107;
  } else {
    v_332 = sub_101;
  };
  if (controller_l_recovered) {
    sub_100 = v_331;
  } else {
    sub_100 = v_332;
  };
  if (controller_cl1) {
    sub_61 = sub_62;
  } else {
    sub_61 = sub_100;
  };
  sub_60 = sub_61;
  if (controller_p_arrived) {
    v_322 = sub_47;
    sub_118 = sub_73;
  } else {
    v_322 = sub_73;
    sub_118 = sub_47;
  };
  if (controller_ck_24_1) {
    sub_117 = v_322;
  } else {
    sub_117 = sub_118;
  };
  sub_116 = sub_117;
  if (controller_p1_arrived) {
    v_323 = sub_38;
    sub_115 = sub_116;
  } else {
    v_323 = sub_116;
    sub_115 = sub_38;
  };
  if (controller_ck_26_1) {
    v_324 = v_323;
  } else {
    v_324 = sub_115;
  };
  if (controller_c_jan) {
    v_325 = sub_42;
  } else {
    v_325 = v_324;
  };
  if (controller_c_porta) {
    sub_114 = sub_94;
  } else {
    sub_114 = v_325;
  };
  if (controller_shift_turno) {
    v_326 = sub_114;
    sub_113 = sub_66;
  } else {
    v_326 = sub_66;
    sub_113 = sub_114;
  };
  if (controller_ck_1) {
    sub_112 = v_326;
  } else {
    sub_112 = sub_113;
  };
  if (controller_l_failed) {
    sub_111 = sub_102;
  } else {
    sub_111 = sub_112;
  };
  if (controller_ck_38_1) {
    v_328 = sub_107;
    v_327 = sub_112;
  } else {
    v_328 = sub_111;
    v_327 = sub_111;
  };
  if (controller_l_recovered) {
    sub_110 = v_327;
  } else {
    sub_110 = v_328;
  };
  if (controller_cl1) {
    sub_109 = sub_110;
  } else {
    sub_109 = sub_100;
  };
  sub_108 = sub_109;
  if (controller_cl2) {
    sub_59 = sub_60;
  } else {
    sub_59 = sub_108;
  };
  if (controller_v_401) {
    sub_6 = sub_59;
  } else {
    sub_6 = sub_7;
  };
  sub_122 = sub_110;
  sub_121 = sub_122;
  sub_120 = sub_121;
  sub_119 = sub_120;
  if (controller_v_400) {
    sub_5 = sub_119;
  } else {
    sub_5 = sub_6;
  };
  if (controller_cl1) {
    v_319 = sub_100;
  } else {
    v_319 = sub_62;
  };
  if (controller_down) {
    v_320 = sub_62;
  } else {
    v_320 = v_319;
  };
  sub_141 = true;
  if (controller_ar_failed) {
    sub_140 = false;
  } else {
    sub_140 = sub_141;
  };
  sub_139 = sub_140;
  sub_142 = sub_141;
  if (controller_ar_recovered) {
    v_302 = sub_142;
  } else {
    v_302 = false;
  };
  if (controller_ck_34_1) {
    sub_138 = v_302;
  } else {
    sub_138 = sub_139;
  };
  sub_137 = sub_138;
  sub_136 = sub_137;
  sub_135 = sub_136;
  sub_134 = sub_135;
  if (controller_p_arrived) {
    v_303 = sub_134;
    sub_133 = false;
  } else {
    v_303 = false;
    sub_133 = sub_134;
  };
  if (controller_ck_24_1) {
    sub_132 = v_303;
  } else {
    sub_132 = sub_133;
  };
  sub_131 = sub_132;
  if (controller_c_rot) {
    v_299 = false;
  } else {
    v_299 = sub_138;
  };
  if (controller_c_pc) {
    sub_147 = false;
  } else {
    sub_147 = v_299;
  };
  if (controller_v_430) {
    sub_146 = false;
  } else {
    sub_146 = sub_147;
  };
  if (controller_v_431) {
    sub_145 = false;
  } else {
    sub_145 = sub_146;
  };
  if (controller_v_430) {
    sub_149 = sub_147;
  } else {
    sub_149 = false;
  };
  if (controller_v_431) {
    sub_148 = sub_149;
  } else {
    sub_148 = false;
  };
  if (controller_c_ar1) {
    v_300 = sub_145;
  } else {
    v_300 = sub_148;
  };
  if (controller_v_431) {
    sub_150 = false;
  } else {
    sub_150 = sub_147;
  };
  if (controller_c_ar1) {
    v_301 = sub_150;
  } else {
    v_301 = sub_148;
  };
  if (controller_c_ar2) {
    sub_144 = v_300;
  } else {
    sub_144 = v_301;
  };
  if (controller_c_arm) {
    sub_143 = false;
  } else {
    sub_143 = sub_144;
  };
  if (controller_p1_arrived) {
    v_304 = sub_143;
    sub_130 = sub_131;
  } else {
    v_304 = sub_131;
    sub_130 = sub_143;
  };
  if (controller_ck_26_1) {
    sub_129 = v_304;
  } else {
    sub_129 = sub_130;
  };
  if (controller_ar_recovered) {
    v_292 = sub_142;
  } else {
    v_292 = sub_28;
  };
  if (controller_ar_failed) {
    sub_161 = sub_27;
  } else {
    sub_161 = sub_141;
  };
  sub_160 = sub_161;
  if (controller_ck_34_1) {
    sub_159 = v_292;
  } else {
    sub_159 = sub_160;
  };
  sub_158 = sub_159;
  sub_157 = sub_158;
  if (controller_v_431) {
    v_296 = sub_136;
  } else {
    v_296 = sub_157;
  };
  if (controller_v_430) {
    sub_156 = sub_157;
  } else {
    sub_156 = sub_136;
  };
  if (controller_v_431) {
    v_295 = sub_156;
  } else {
    v_295 = sub_136;
  };
  if (controller_c_ar1) {
    v_297 = v_295;
  } else {
    v_297 = v_296;
  };
  if (controller_v_431) {
    v_293 = sub_136;
  } else {
    v_293 = sub_156;
  };
  if (controller_c_ar1) {
    v_294 = sub_136;
  } else {
    v_294 = v_293;
  };
  if (controller_c_ar2) {
    sub_155 = v_294;
  } else {
    sub_155 = v_297;
  };
  if (controller_p_arrived) {
    v_298 = sub_155;
    sub_154 = sub_73;
  } else {
    v_298 = sub_73;
    sub_154 = sub_155;
  };
  if (controller_ck_24_1) {
    sub_153 = v_298;
  } else {
    sub_153 = sub_154;
  };
  sub_152 = sub_153;
  if (controller_v_431) {
    v_290 = sub_149;
    v_289 = sub_74;
  } else {
    v_290 = sub_75;
    v_289 = sub_147;
  };
  if (controller_c_ar1) {
    v_291 = v_289;
  } else {
    v_291 = v_290;
  };
  if (controller_v_431) {
    v_287 = sub_149;
  } else {
    v_287 = sub_74;
  };
  if (controller_c_ar1) {
    v_288 = sub_145;
  } else {
    v_288 = v_287;
  };
  if (controller_c_ar2) {
    sub_163 = v_288;
  } else {
    sub_163 = v_291;
  };
  if (controller_c_arm) {
    sub_162 = sub_91;
  } else {
    sub_162 = sub_163;
  };
  if (controller_p1_arrived) {
    v_305 = sub_162;
    sub_151 = sub_152;
  } else {
    v_305 = sub_152;
    sub_151 = sub_162;
  };
  if (controller_ck_26_1) {
    v_306 = v_305;
  } else {
    v_306 = sub_151;
  };
  if (controller_c_jan) {
    v_307 = sub_129;
  } else {
    v_307 = v_306;
  };
  if (controller_c_porta) {
    sub_128 = sub_94;
  } else {
    sub_128 = v_307;
  };
  if (controller_shift_turno) {
    v_308 = sub_128;
    sub_127 = sub_66;
  } else {
    v_308 = sub_66;
    sub_127 = sub_128;
  };
  if (controller_ck_1) {
    sub_126 = v_308;
  } else {
    sub_126 = sub_127;
  };
  if (controller_l_failed) {
    sub_125 = sub_64;
  } else {
    sub_125 = sub_126;
  };
  if (controller_ck_38_1) {
    v_310 = sub_99;
    v_309 = sub_126;
  } else {
    v_310 = sub_125;
    v_309 = sub_125;
  };
  if (controller_l_recovered) {
    v_311 = v_309;
  } else {
    v_311 = v_310;
  };
  if (controller_cl1) {
    v_312 = v_311;
  } else {
    v_312 = sub_62;
  };
  if (controller_p_arrived) {
    v_282 = sub_134;
    sub_171 = sub_73;
  } else {
    v_282 = sub_73;
    sub_171 = sub_134;
  };
  if (controller_ck_24_1) {
    sub_170 = v_282;
  } else {
    sub_170 = sub_171;
  };
  sub_169 = sub_170;
  if (controller_p1_arrived) {
    v_283 = sub_143;
    sub_168 = sub_169;
  } else {
    v_283 = sub_169;
    sub_168 = sub_143;
  };
  if (controller_ck_26_1) {
    v_284 = v_283;
  } else {
    v_284 = sub_168;
  };
  if (controller_c_jan) {
    v_285 = sub_129;
  } else {
    v_285 = v_284;
  };
  if (controller_c_porta) {
    sub_167 = sub_94;
  } else {
    sub_167 = v_285;
  };
  if (controller_shift_turno) {
    v_286 = sub_167;
    sub_166 = sub_66;
  } else {
    v_286 = sub_66;
    sub_166 = sub_167;
  };
  if (controller_ck_1) {
    sub_165 = v_286;
  } else {
    sub_165 = sub_166;
  };
  if (controller_l_failed) {
    sub_164 = sub_102;
  } else {
    sub_164 = sub_165;
  };
  if (controller_ck_38_1) {
    v_314 = sub_107;
    v_313 = sub_165;
  } else {
    v_314 = sub_164;
    v_313 = sub_164;
  };
  if (controller_l_recovered) {
    v_315 = v_313;
  } else {
    v_315 = v_314;
  };
  if (controller_cl1) {
    v_316 = v_315;
  } else {
    v_316 = sub_62;
  };
  if (controller_down) {
    v_317 = v_312;
  } else {
    v_317 = v_316;
  };
  if (controller_cl1) {
    v_281 = sub_110;
    v_280 = sub_99;
  } else {
    v_281 = sub_62;
    v_280 = sub_62;
  };
  if (controller_down) {
    sub_172 = v_280;
  } else {
    sub_172 = v_281;
  };
  if (controller_cl2) {
    v_321 = v_320;
    v_318 = v_317;
  } else {
    v_321 = sub_172;
    v_318 = sub_172;
  };
  if (controller_up) {
    sub_124 = v_318;
  } else {
    sub_124 = v_321;
  };
  if (controller_v_401) {
    sub_123 = sub_119;
  } else {
    sub_123 = sub_124;
  };
  if (controller_cl2) {
    sub_173 = sub_108;
  } else {
    sub_173 = sub_60;
  };
  if (controller_v_401) {
    v_380 = sub_173;
  } else {
    v_380 = sub_7;
  };
  if (controller_v_400) {
    v_381 = v_380;
  } else {
    v_381 = sub_123;
  };
  if (controller_v_399) {
    sub_4 = v_381;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_1 = sub_2;
  if (controller_c_ar1) {
    v_268 = sub_148;
  } else {
    v_268 = sub_150;
  };
  if (controller_v_431) {
    v_266 = false;
  } else {
    v_266 = sub_149;
  };
  if (controller_c_ar1) {
    v_267 = false;
  } else {
    v_267 = v_266;
  };
  if (controller_c_ar2) {
    sub_193 = v_267;
  } else {
    sub_193 = v_268;
  };
  if (controller_c_pc) {
    sub_196 = false;
  } else {
    sub_196 = sub_137;
  };
  if (controller_v_430) {
    sub_195 = sub_136;
  } else {
    sub_195 = sub_196;
  };
  if (controller_v_431) {
    v_264 = sub_136;
  } else {
    v_264 = sub_195;
  };
  if (controller_v_430) {
    sub_197 = sub_196;
  } else {
    sub_197 = sub_136;
  };
  if (controller_c_ar1) {
    v_265 = v_264;
  } else {
    v_265 = sub_197;
  };
  if (controller_v_431) {
    sub_198 = sub_197;
  } else {
    sub_198 = sub_196;
  };
  if (controller_c_ar2) {
    sub_194 = v_265;
  } else {
    sub_194 = sub_198;
  };
  if (controller_p_arrived) {
    v_269 = sub_194;
    sub_192 = sub_193;
  } else {
    v_269 = sub_193;
    sub_192 = sub_194;
  };
  if (controller_ck_24_1) {
    sub_191 = v_269;
  } else {
    sub_191 = sub_192;
  };
  sub_190 = sub_191;
  if (controller_p1_arrived) {
    v_270 = sub_143;
    sub_189 = sub_190;
  } else {
    v_270 = sub_190;
    sub_189 = sub_143;
  };
  if (controller_ck_26_1) {
    sub_188 = v_270;
  } else {
    sub_188 = sub_189;
  };
  if (controller_c_jan) {
    v_271 = sub_188;
  } else {
    v_271 = sub_129;
  };
  if (controller_c_porta) {
    sub_187 = false;
  } else {
    sub_187 = v_271;
  };
  if (controller_p_arrived) {
    v_262 = false;
    sub_205 = sub_193;
  } else {
    v_262 = sub_193;
    sub_205 = false;
  };
  if (controller_ck_24_1) {
    sub_204 = v_262;
  } else {
    sub_204 = sub_205;
  };
  sub_203 = sub_204;
  if (controller_p1_arrived) {
    v_263 = false;
    sub_202 = sub_203;
  } else {
    v_263 = sub_203;
    sub_202 = false;
  };
  if (controller_ck_26_1) {
    sub_201 = v_263;
  } else {
    sub_201 = sub_202;
  };
  if (controller_c_jan) {
    sub_200 = sub_201;
  } else {
    sub_200 = false;
  };
  if (controller_c_porta) {
    sub_199 = sub_200;
  } else {
    sub_199 = sub_129;
  };
  if (controller_shift_turno) {
    v_272 = sub_199;
    sub_186 = sub_187;
  } else {
    v_272 = sub_187;
    sub_186 = sub_199;
  };
  if (controller_ck_1) {
    sub_185 = v_272;
  } else {
    sub_185 = sub_186;
  };
  if (controller_c_porta) {
    sub_208 = sub_200;
  } else {
    sub_208 = false;
  };
  if (controller_shift_turno) {
    v_261 = sub_208;
    sub_207 = sub_187;
  } else {
    v_261 = sub_187;
    sub_207 = sub_208;
  };
  if (controller_ck_1) {
    sub_206 = v_261;
  } else {
    sub_206 = sub_207;
  };
  if (controller_l_failed) {
    sub_184 = sub_185;
  } else {
    sub_184 = sub_206;
  };
  if (controller_ck_38_1) {
    v_274 = sub_185;
    v_273 = sub_206;
  } else {
    v_274 = sub_184;
    v_273 = sub_184;
  };
  if (controller_l_recovered) {
    sub_183 = v_273;
  } else {
    sub_183 = v_274;
  };
  sub_182 = sub_183;
  sub_181 = sub_182;
  sub_180 = sub_181;
  sub_179 = sub_180;
  if (controller_ar_recovered) {
    v_246 = false;
  } else {
    v_246 = sub_142;
  };
  if (controller_ar_failed) {
    sub_226 = sub_141;
  } else {
    sub_226 = false;
  };
  sub_225 = sub_226;
  if (controller_ck_34_1) {
    sub_224 = v_246;
  } else {
    sub_224 = sub_225;
  };
  sub_223 = sub_224;
  sub_222 = sub_223;
  if (controller_v_431) {
    v_250 = false;
  } else {
    v_250 = sub_222;
  };
  if (controller_v_430) {
    sub_221 = sub_222;
  } else {
    sub_221 = false;
  };
  if (controller_v_431) {
    v_249 = sub_221;
  } else {
    v_249 = false;
  };
  if (controller_c_ar1) {
    v_251 = v_249;
  } else {
    v_251 = v_250;
  };
  if (controller_v_431) {
    v_247 = false;
  } else {
    v_247 = sub_221;
  };
  if (controller_c_ar1) {
    v_248 = false;
  } else {
    v_248 = v_247;
  };
  if (controller_c_ar2) {
    sub_220 = v_248;
  } else {
    sub_220 = v_251;
  };
  if (controller_p_arrived) {
    v_252 = false;
    sub_219 = sub_220;
  } else {
    v_252 = sub_220;
    sub_219 = false;
  };
  if (controller_ck_24_1) {
    sub_218 = v_252;
  } else {
    sub_218 = sub_219;
  };
  sub_217 = sub_218;
  if (controller_p1_arrived) {
    v_253 = false;
    sub_216 = sub_217;
  } else {
    v_253 = sub_217;
    sub_216 = false;
  };
  if (controller_ck_26_1) {
    sub_215 = v_253;
  } else {
    sub_215 = sub_216;
  };
  if (controller_c_jan) {
    sub_214 = sub_201;
  } else {
    sub_214 = sub_215;
  };
  if (controller_p_arrived) {
    v_245 = sub_85;
    sub_230 = sub_220;
  } else {
    v_245 = sub_220;
    sub_230 = sub_85;
  };
  if (controller_ck_24_1) {
    sub_229 = v_245;
  } else {
    sub_229 = sub_230;
  };
  sub_228 = sub_229;
  if (controller_p1_arrived) {
    v_254 = sub_90;
    sub_227 = sub_228;
  } else {
    v_254 = sub_228;
    sub_227 = sub_90;
  };
  if (controller_ck_26_1) {
    v_255 = v_254;
  } else {
    v_255 = sub_227;
  };
  if (controller_c_jan) {
    v_256 = sub_42;
  } else {
    v_256 = v_255;
  };
  if (controller_c_porta) {
    sub_213 = sub_214;
  } else {
    sub_213 = v_256;
  };
  if (controller_shift_turno) {
    v_257 = sub_213;
    sub_212 = sub_66;
  } else {
    v_257 = sub_66;
    sub_212 = sub_213;
  };
  if (controller_ck_1) {
    sub_211 = v_257;
  } else {
    sub_211 = sub_212;
  };
  if (controller_c_jan) {
    sub_234 = false;
  } else {
    sub_234 = sub_215;
  };
  sub_244 = sub_142;
  sub_243 = sub_244;
  sub_242 = sub_243;
  if (controller_v_431) {
    v_239 = sub_136;
  } else {
    v_239 = sub_242;
  };
  if (controller_v_430) {
    sub_241 = sub_242;
  } else {
    sub_241 = sub_136;
  };
  if (controller_v_431) {
    v_238 = sub_241;
  } else {
    v_238 = sub_136;
  };
  if (controller_c_ar1) {
    v_240 = v_238;
  } else {
    v_240 = v_239;
  };
  if (controller_v_431) {
    v_236 = sub_136;
  } else {
    v_236 = sub_241;
  };
  if (controller_c_ar1) {
    v_237 = sub_136;
  } else {
    v_237 = v_236;
  };
  if (controller_c_ar2) {
    sub_240 = v_237;
  } else {
    sub_240 = v_240;
  };
  if (controller_p_arrived) {
    v_241 = sub_240;
    sub_239 = sub_220;
  } else {
    v_241 = sub_220;
    sub_239 = sub_240;
  };
  if (controller_ck_24_1) {
    sub_238 = v_241;
  } else {
    sub_238 = sub_239;
  };
  sub_237 = sub_238;
  sub_246 = sub_220;
  if (controller_v_431) {
    v_234 = sub_149;
    v_233 = sub_221;
  } else {
    v_234 = sub_222;
    v_233 = sub_147;
  };
  if (controller_c_ar1) {
    v_235 = v_233;
  } else {
    v_235 = v_234;
  };
  if (controller_v_431) {
    v_231 = sub_149;
  } else {
    v_231 = sub_221;
  };
  if (controller_c_ar1) {
    v_232 = sub_145;
  } else {
    v_232 = v_231;
  };
  if (controller_c_ar2) {
    sub_247 = v_232;
  } else {
    sub_247 = v_235;
  };
  if (controller_c_arm) {
    sub_245 = sub_246;
  } else {
    sub_245 = sub_247;
  };
  if (controller_p1_arrived) {
    v_242 = sub_245;
    sub_236 = sub_237;
  } else {
    v_242 = sub_237;
    sub_236 = sub_245;
  };
  if (controller_ck_26_1) {
    sub_235 = v_242;
  } else {
    sub_235 = sub_236;
  };
  if (controller_c_jan) {
    v_243 = sub_188;
  } else {
    v_243 = sub_235;
  };
  if (controller_c_porta) {
    sub_233 = sub_234;
  } else {
    sub_233 = v_243;
  };
  if (controller_p_arrived) {
    v_227 = sub_73;
    sub_252 = sub_220;
  } else {
    v_227 = sub_220;
    sub_252 = sub_73;
  };
  if (controller_ck_24_1) {
    sub_251 = v_227;
  } else {
    sub_251 = sub_252;
  };
  sub_250 = sub_251;
  if (controller_p1_arrived) {
    v_228 = sub_98;
    sub_249 = sub_250;
  } else {
    v_228 = sub_250;
    sub_249 = sub_98;
  };
  if (controller_ck_26_1) {
    v_229 = v_228;
  } else {
    v_229 = sub_249;
  };
  if (controller_c_jan) {
    v_230 = false;
  } else {
    v_230 = v_229;
  };
  if (controller_c_porta) {
    sub_248 = sub_214;
  } else {
    sub_248 = v_230;
  };
  if (controller_shift_turno) {
    v_244 = sub_248;
    sub_232 = sub_233;
  } else {
    v_244 = sub_233;
    sub_232 = sub_248;
  };
  if (controller_ck_1) {
    sub_231 = v_244;
  } else {
    sub_231 = sub_232;
  };
  if (controller_l_failed) {
    sub_210 = sub_211;
  } else {
    sub_210 = sub_231;
  };
  if (controller_ck_38_1) {
    v_259 = sub_211;
    v_258 = sub_231;
  } else {
    v_259 = sub_210;
    v_258 = sub_210;
  };
  if (controller_l_recovered) {
    v_260 = v_258;
  } else {
    v_260 = v_259;
  };
  if (controller_c_porta) {
    sub_257 = sub_214;
  } else {
    sub_257 = sub_234;
  };
  if (controller_shift_turno) {
    v_224 = sub_257;
    sub_256 = false;
  } else {
    v_224 = false;
    sub_256 = sub_257;
  };
  if (controller_ck_1) {
    sub_255 = v_224;
  } else {
    sub_255 = sub_256;
  };
  if (controller_shift_turno) {
    v_223 = sub_257;
    sub_259 = sub_233;
  } else {
    v_223 = sub_233;
    sub_259 = sub_257;
  };
  if (controller_ck_1) {
    sub_258 = v_223;
  } else {
    sub_258 = sub_259;
  };
  if (controller_l_failed) {
    sub_254 = sub_255;
  } else {
    sub_254 = sub_258;
  };
  if (controller_ck_38_1) {
    v_225 = sub_258;
  } else {
    v_225 = sub_254;
  };
  sub_260 = sub_255;
  if (controller_ck_38_1) {
    v_226 = sub_260;
  } else {
    v_226 = sub_254;
  };
  if (controller_l_recovered) {
    sub_253 = v_225;
  } else {
    sub_253 = v_226;
  };
  if (controller_cl1) {
    sub_209 = v_260;
  } else {
    sub_209 = sub_253;
  };
  if (controller_p_arrived) {
    v_215 = sub_47;
    sub_269 = sub_220;
  } else {
    v_215 = sub_220;
    sub_269 = sub_47;
  };
  if (controller_ck_24_1) {
    sub_268 = v_215;
  } else {
    sub_268 = sub_269;
  };
  sub_267 = sub_268;
  if (controller_p1_arrived) {
    v_216 = sub_38;
    sub_266 = sub_267;
  } else {
    v_216 = sub_267;
    sub_266 = sub_38;
  };
  if (controller_ck_26_1) {
    v_217 = v_216;
  } else {
    v_217 = sub_266;
  };
  if (controller_c_jan) {
    v_218 = sub_42;
  } else {
    v_218 = v_217;
  };
  if (controller_c_porta) {
    sub_265 = sub_214;
  } else {
    sub_265 = v_218;
  };
  if (controller_shift_turno) {
    v_219 = sub_265;
    sub_264 = sub_233;
  } else {
    v_219 = sub_233;
    sub_264 = sub_265;
  };
  if (controller_ck_1) {
    sub_263 = v_219;
  } else {
    sub_263 = sub_264;
  };
  if (controller_l_failed) {
    sub_262 = sub_255;
  } else {
    sub_262 = sub_263;
  };
  if (controller_ck_38_1) {
    v_221 = sub_260;
    v_220 = sub_263;
  } else {
    v_221 = sub_262;
    v_220 = sub_262;
  };
  if (controller_l_recovered) {
    v_222 = v_220;
  } else {
    v_222 = v_221;
  };
  if (controller_cl1) {
    sub_261 = v_222;
  } else {
    sub_261 = sub_253;
  };
  if (controller_cl2) {
    v_275 = sub_209;
  } else {
    v_275 = sub_261;
  };
  if (controller_c_jan) {
    v_211 = sub_129;
  } else {
    v_211 = sub_235;
  };
  if (controller_c_porta) {
    sub_276 = sub_214;
  } else {
    sub_276 = v_211;
  };
  if (controller_shift_turno) {
    v_212 = sub_276;
    sub_275 = sub_233;
  } else {
    v_212 = sub_233;
    sub_275 = sub_276;
  };
  if (controller_ck_1) {
    sub_274 = v_212;
  } else {
    sub_274 = sub_275;
  };
  sub_280 = sub_246;
  if (controller_c_jan) {
    v_209 = false;
  } else {
    v_209 = sub_280;
  };
  if (controller_c_porta) {
    sub_279 = sub_214;
  } else {
    sub_279 = v_209;
  };
  if (controller_shift_turno) {
    v_210 = sub_279;
    sub_278 = sub_233;
  } else {
    v_210 = sub_233;
    sub_278 = sub_279;
  };
  if (controller_ck_1) {
    sub_277 = v_210;
  } else {
    sub_277 = sub_278;
  };
  if (controller_l_failed) {
    sub_273 = sub_274;
  } else {
    sub_273 = sub_277;
  };
  if (controller_ck_38_1) {
    v_213 = sub_277;
  } else {
    v_213 = sub_273;
  };
  sub_281 = sub_274;
  if (controller_ck_38_1) {
    v_214 = sub_281;
  } else {
    v_214 = sub_273;
  };
  if (controller_l_recovered) {
    sub_272 = v_213;
  } else {
    sub_272 = v_214;
  };
  if (controller_cl1) {
    sub_271 = sub_272;
  } else {
    sub_271 = sub_253;
  };
  sub_270 = sub_271;
  if (controller_p_arrived) {
    v_202 = sub_134;
    sub_292 = sub_220;
  } else {
    v_202 = sub_220;
    sub_292 = sub_134;
  };
  if (controller_ck_24_1) {
    sub_291 = v_202;
  } else {
    sub_291 = sub_292;
  };
  sub_290 = sub_291;
  if (controller_p1_arrived) {
    v_203 = sub_143;
    sub_289 = sub_290;
  } else {
    v_203 = sub_290;
    sub_289 = sub_143;
  };
  if (controller_ck_26_1) {
    v_204 = v_203;
  } else {
    v_204 = sub_289;
  };
  if (controller_c_jan) {
    v_205 = sub_129;
  } else {
    v_205 = v_204;
  };
  if (controller_c_porta) {
    sub_288 = sub_214;
  } else {
    sub_288 = v_205;
  };
  if (controller_shift_turno) {
    v_206 = sub_288;
    sub_287 = sub_233;
  } else {
    v_206 = sub_233;
    sub_287 = sub_288;
  };
  if (controller_ck_1) {
    sub_286 = v_206;
  } else {
    sub_286 = sub_287;
  };
  if (controller_l_failed) {
    sub_285 = sub_255;
  } else {
    sub_285 = sub_286;
  };
  if (controller_ck_38_1) {
    v_208 = sub_260;
    v_207 = sub_286;
  } else {
    v_208 = sub_285;
    v_207 = sub_285;
  };
  if (controller_l_recovered) {
    sub_284 = v_207;
  } else {
    sub_284 = v_208;
  };
  if (controller_cl1) {
    sub_283 = sub_284;
  } else {
    sub_283 = sub_253;
  };
  sub_282 = sub_283;
  if (controller_cl2) {
    v_276 = sub_270;
  } else {
    v_276 = sub_282;
  };
  if (controller_up) {
    v_277 = v_275;
  } else {
    v_277 = v_276;
  };
  if (controller_v_401) {
    sub_178 = v_277;
  } else {
    sub_178 = sub_179;
  };
  sub_296 = sub_284;
  sub_295 = sub_296;
  sub_294 = sub_295;
  sub_293 = sub_294;
  if (controller_v_400) {
    sub_177 = sub_293;
  } else {
    sub_177 = sub_178;
  };
  if (controller_cl1) {
    v_199 = sub_253;
  } else {
    v_199 = sub_272;
  };
  if (controller_down) {
    v_200 = sub_272;
  } else {
    v_200 = v_199;
  };
  if (controller_cl1) {
    v_198 = sub_284;
    v = sub_281;
  } else {
    v_198 = sub_272;
    v = sub_272;
  };
  if (controller_down) {
    sub_299 = v;
  } else {
    sub_299 = v_198;
  };
  if (controller_cl2) {
    v_201 = v_200;
  } else {
    v_201 = sub_299;
  };
  if (controller_up) {
    sub_298 = sub_299;
  } else {
    sub_298 = v_201;
  };
  if (controller_v_401) {
    sub_297 = sub_293;
  } else {
    sub_297 = sub_298;
  };
  if (controller_cl2) {
    sub_300 = sub_282;
  } else {
    sub_300 = sub_270;
  };
  if (controller_v_401) {
    v_278 = sub_300;
  } else {
    v_278 = sub_179;
  };
  if (controller_v_400) {
    v_279 = v_278;
  } else {
    v_279 = sub_297;
  };
  if (controller_v_399) {
    sub_176 = v_279;
  } else {
    sub_176 = sub_177;
  };
  sub_175 = sub_176;
  sub_174 = sub_175;
  if (p_controller_cup) {
    sub_0 = sub_174;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_cup = sub_0;;
}

void Controller_controller__controller_controller_controller_cl2_step(
  int controller_up, int controller_down, int controller_shift_turno,
  int controller_abre_porta, int controller_p_arrived,
  int controller_p1_arrived, int controller_ar_failed,
  int controller_ar_recovered, int controller_l_failed,
  int controller_l_recovered, int controller_ck_1, int controller_pnr_13,
  int controller_ck_18_1, int controller_pnr_12, int controller_ck_20_1,
  int controller_pnr_11, int controller_ck_22_1, int controller_pnr_10,
  int controller_ck_24_1, int controller_pnr_9, int controller_ck_26_1,
  int controller_pnr_8, int controller_ck_28_1, int controller_pnr_7,
  int controller_ck_30_1, int controller_pnr_6, int controller_v_431,
  int controller_v_430, int controller_pnr_5, int controller_ck_34_1,
  int controller_pnr_4, int controller_v_401, int controller_v_400,
  int controller_v_399, int controller_pnr_3, int controller_ck_38_1,
  int controller_pnr, int p_controller_cdown, int p_controller_cup,
  int p_controller_cl2, int p_controller_cl1, int p_controller_c_policy,
  int p_controller_c_arm, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_luz2, int p_controller_c_luz1, int p_controller_c_jan,
  int p_controller_c_pc, int p_controller_c_rot, int p_controller_c_porta,
  int controller_cl1, int controller_c_policy, int controller_c_arm,
  int controller_c_ar2, int controller_c_ar1, int controller_c_luz2,
  int controller_c_luz1, int controller_c_jan, int controller_c_pc,
  int controller_c_rot, int controller_c_porta,
  Controller_controller__controller_controller_controller_cl2_out* _out) {
  
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
  sub_26 = false;
  if (controller_ar_failed) {
    sub_25 = false;
  } else {
    sub_25 = sub_26;
  };
  sub_24 = sub_25;
  sub_27 = sub_26;
  if (controller_ar_recovered) {
    v_567 = sub_27;
  } else {
    v_567 = false;
  };
  if (controller_ck_34_1) {
    sub_23 = v_567;
  } else {
    sub_23 = sub_24;
  };
  if (controller_c_rot) {
    v_568 = false;
  } else {
    v_568 = sub_23;
  };
  if (controller_c_pc) {
    sub_22 = false;
  } else {
    sub_22 = v_568;
  };
  if (controller_v_430) {
    sub_21 = sub_22;
  } else {
    sub_21 = false;
  };
  if (controller_v_431) {
    v_569 = false;
  } else {
    v_569 = sub_21;
  };
  if (controller_c_ar1) {
    v_570 = false;
  } else {
    v_570 = v_569;
  };
  if (controller_v_431) {
    sub_28 = sub_21;
    sub_29 = false;
  } else {
    sub_28 = false;
    sub_29 = sub_22;
  };
  if (controller_c_ar1) {
    v_571 = sub_28;
  } else {
    v_571 = sub_29;
  };
  if (controller_c_ar2) {
    sub_20 = v_570;
  } else {
    sub_20 = v_571;
  };
  sub_33 = sub_23;
  if (controller_c_pc) {
    sub_32 = false;
  } else {
    sub_32 = sub_33;
  };
  sub_34 = sub_33;
  if (controller_v_430) {
    sub_31 = sub_34;
  } else {
    sub_31 = sub_32;
  };
  if (controller_v_431) {
    v_565 = sub_34;
  } else {
    v_565 = sub_31;
  };
  if (controller_v_430) {
    sub_35 = sub_32;
  } else {
    sub_35 = sub_34;
  };
  if (controller_c_ar1) {
    v_566 = v_565;
  } else {
    v_566 = sub_35;
  };
  if (controller_v_431) {
    sub_36 = sub_35;
  } else {
    sub_36 = sub_32;
  };
  if (controller_c_ar2) {
    sub_30 = v_566;
  } else {
    sub_30 = sub_36;
  };
  if (controller_p_arrived) {
    v_572 = sub_30;
    sub_19 = sub_20;
  } else {
    v_572 = sub_20;
    sub_19 = sub_30;
  };
  if (controller_ck_24_1) {
    sub_18 = v_572;
  } else {
    sub_18 = sub_19;
  };
  sub_17 = sub_18;
  if (controller_c_ar1) {
    v_564 = sub_29;
  } else {
    v_564 = sub_28;
  };
  if (controller_v_430) {
    sub_40 = false;
  } else {
    sub_40 = sub_22;
  };
  if (controller_v_431) {
    sub_39 = false;
  } else {
    sub_39 = sub_40;
  };
  if (controller_c_ar1) {
    v_563 = sub_39;
  } else {
    v_563 = sub_28;
  };
  if (controller_c_ar2) {
    sub_38 = v_563;
  } else {
    sub_38 = v_564;
  };
  if (controller_c_arm) {
    sub_37 = false;
  } else {
    sub_37 = sub_38;
  };
  if (controller_p1_arrived) {
    v_573 = sub_37;
    sub_16 = sub_17;
  } else {
    v_573 = sub_17;
    sub_16 = sub_37;
  };
  if (controller_ck_26_1) {
    sub_15 = v_573;
  } else {
    sub_15 = sub_16;
  };
  sub_47 = sub_34;
  sub_46 = sub_47;
  if (controller_p_arrived) {
    v_561 = sub_46;
    sub_45 = false;
  } else {
    v_561 = false;
    sub_45 = sub_46;
  };
  if (controller_ck_24_1) {
    sub_44 = v_561;
  } else {
    sub_44 = sub_45;
  };
  sub_43 = sub_44;
  if (controller_p1_arrived) {
    v_562 = sub_37;
    sub_42 = sub_43;
  } else {
    v_562 = sub_43;
    sub_42 = sub_37;
  };
  if (controller_ck_26_1) {
    sub_41 = v_562;
  } else {
    sub_41 = sub_42;
  };
  if (controller_c_jan) {
    v_574 = sub_15;
  } else {
    v_574 = sub_41;
  };
  if (controller_c_porta) {
    sub_14 = false;
  } else {
    sub_14 = v_574;
  };
  if (controller_p_arrived) {
    v_559 = false;
    sub_54 = sub_20;
  } else {
    v_559 = sub_20;
    sub_54 = false;
  };
  if (controller_ck_24_1) {
    sub_53 = v_559;
  } else {
    sub_53 = sub_54;
  };
  sub_52 = sub_53;
  if (controller_p1_arrived) {
    v_560 = false;
    sub_51 = sub_52;
  } else {
    v_560 = sub_52;
    sub_51 = false;
  };
  if (controller_ck_26_1) {
    sub_50 = v_560;
  } else {
    sub_50 = sub_51;
  };
  if (controller_c_jan) {
    sub_49 = sub_50;
  } else {
    sub_49 = false;
  };
  if (controller_c_porta) {
    sub_48 = sub_49;
  } else {
    sub_48 = sub_41;
  };
  if (controller_shift_turno) {
    v_575 = sub_48;
    sub_13 = sub_14;
  } else {
    v_575 = sub_14;
    sub_13 = sub_48;
  };
  if (controller_ck_1) {
    sub_12 = v_575;
  } else {
    sub_12 = sub_13;
  };
  if (controller_c_porta) {
    sub_57 = sub_49;
  } else {
    sub_57 = false;
  };
  if (controller_shift_turno) {
    v_558 = sub_57;
    sub_56 = sub_14;
  } else {
    v_558 = sub_14;
    sub_56 = sub_57;
  };
  if (controller_ck_1) {
    sub_55 = v_558;
  } else {
    sub_55 = sub_56;
  };
  if (controller_l_failed) {
    sub_11 = sub_12;
  } else {
    sub_11 = sub_55;
  };
  if (controller_ck_38_1) {
    v_577 = sub_12;
    v_576 = sub_55;
  } else {
    v_577 = sub_11;
    v_576 = sub_11;
  };
  if (controller_l_recovered) {
    sub_10 = v_576;
  } else {
    sub_10 = v_577;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_77 = true;
  if (controller_ar_failed) {
    sub_76 = sub_77;
  } else {
    sub_76 = false;
  };
  sub_75 = sub_76;
  sub_78 = sub_77;
  if (controller_ar_recovered) {
    v_545 = false;
  } else {
    v_545 = sub_78;
  };
  if (controller_ck_34_1) {
    sub_74 = v_545;
  } else {
    sub_74 = sub_75;
  };
  sub_73 = sub_74;
  sub_72 = sub_73;
  if (controller_v_431) {
    v_549 = false;
  } else {
    v_549 = sub_72;
  };
  if (controller_v_430) {
    sub_71 = sub_72;
  } else {
    sub_71 = false;
  };
  if (controller_v_431) {
    v_548 = sub_71;
  } else {
    v_548 = false;
  };
  if (controller_c_ar1) {
    v_550 = v_548;
  } else {
    v_550 = v_549;
  };
  if (controller_v_431) {
    v_546 = false;
  } else {
    v_546 = sub_71;
  };
  if (controller_c_ar1) {
    v_547 = false;
  } else {
    v_547 = v_546;
  };
  if (controller_c_ar2) {
    sub_70 = v_547;
  } else {
    sub_70 = v_550;
  };
  if (controller_p_arrived) {
    v_551 = false;
    sub_69 = sub_70;
  } else {
    v_551 = sub_70;
    sub_69 = false;
  };
  if (controller_ck_24_1) {
    sub_68 = v_551;
  } else {
    sub_68 = sub_69;
  };
  sub_67 = sub_68;
  if (controller_p1_arrived) {
    v_552 = false;
    sub_66 = sub_67;
  } else {
    v_552 = sub_67;
    sub_66 = false;
  };
  if (controller_ck_26_1) {
    sub_65 = v_552;
  } else {
    sub_65 = sub_66;
  };
  if (controller_c_jan) {
    sub_64 = false;
  } else {
    sub_64 = sub_65;
  };
  if (controller_ar_recovered) {
    v_538 = sub_78;
  } else {
    v_538 = false;
  };
  if (controller_ar_failed) {
    sub_89 = false;
  } else {
    sub_89 = sub_77;
  };
  sub_88 = sub_89;
  if (controller_ck_34_1) {
    sub_87 = v_538;
  } else {
    sub_87 = sub_88;
  };
  if (controller_c_rot) {
    v_539 = false;
  } else {
    v_539 = sub_87;
  };
  if (controller_c_pc) {
    sub_86 = false;
  } else {
    sub_86 = v_539;
  };
  if (controller_v_430) {
    sub_85 = sub_86;
  } else {
    sub_85 = false;
  };
  if (controller_v_431) {
    v_540 = false;
  } else {
    v_540 = sub_85;
  };
  if (controller_c_ar1) {
    v_541 = false;
  } else {
    v_541 = v_540;
  };
  if (controller_v_431) {
    sub_90 = sub_85;
    sub_91 = false;
  } else {
    sub_90 = false;
    sub_91 = sub_86;
  };
  if (controller_c_ar1) {
    v_542 = sub_90;
  } else {
    v_542 = sub_91;
  };
  if (controller_c_ar2) {
    sub_84 = v_541;
  } else {
    sub_84 = v_542;
  };
  sub_95 = sub_87;
  if (controller_c_pc) {
    sub_94 = false;
  } else {
    sub_94 = sub_95;
  };
  sub_96 = sub_95;
  if (controller_v_430) {
    sub_93 = sub_96;
  } else {
    sub_93 = sub_94;
  };
  if (controller_v_431) {
    v_536 = sub_96;
  } else {
    v_536 = sub_93;
  };
  if (controller_v_430) {
    sub_97 = sub_94;
  } else {
    sub_97 = sub_96;
  };
  if (controller_c_ar1) {
    v_537 = v_536;
  } else {
    v_537 = sub_97;
  };
  if (controller_v_431) {
    sub_98 = sub_97;
  } else {
    sub_98 = sub_94;
  };
  if (controller_c_ar2) {
    sub_92 = v_537;
  } else {
    sub_92 = sub_98;
  };
  if (controller_p_arrived) {
    v_543 = sub_92;
    sub_83 = sub_84;
  } else {
    v_543 = sub_84;
    sub_83 = sub_92;
  };
  if (controller_ck_24_1) {
    sub_82 = v_543;
  } else {
    sub_82 = sub_83;
  };
  sub_81 = sub_82;
  if (controller_c_ar1) {
    v_535 = sub_91;
  } else {
    v_535 = sub_90;
  };
  if (controller_v_430) {
    sub_102 = false;
  } else {
    sub_102 = sub_86;
  };
  if (controller_v_431) {
    sub_101 = false;
  } else {
    sub_101 = sub_102;
  };
  if (controller_c_ar1) {
    v_534 = sub_101;
  } else {
    v_534 = sub_90;
  };
  if (controller_c_ar2) {
    sub_100 = v_534;
  } else {
    sub_100 = v_535;
  };
  if (controller_c_arm) {
    sub_99 = false;
  } else {
    sub_99 = sub_100;
  };
  if (controller_p1_arrived) {
    v_544 = sub_99;
    sub_80 = sub_81;
  } else {
    v_544 = sub_81;
    sub_80 = sub_99;
  };
  if (controller_ck_26_1) {
    sub_79 = v_544;
  } else {
    sub_79 = sub_80;
  };
  sub_112 = sub_78;
  sub_111 = sub_112;
  sub_110 = sub_111;
  if (controller_v_431) {
    v_530 = sub_96;
  } else {
    v_530 = sub_110;
  };
  if (controller_v_430) {
    sub_109 = sub_110;
  } else {
    sub_109 = sub_96;
  };
  if (controller_v_431) {
    v_529 = sub_109;
  } else {
    v_529 = sub_96;
  };
  if (controller_c_ar1) {
    v_531 = v_529;
  } else {
    v_531 = v_530;
  };
  if (controller_v_431) {
    v_527 = sub_96;
  } else {
    v_527 = sub_109;
  };
  if (controller_c_ar1) {
    v_528 = sub_96;
  } else {
    v_528 = v_527;
  };
  if (controller_c_ar2) {
    sub_108 = v_528;
  } else {
    sub_108 = v_531;
  };
  if (controller_p_arrived) {
    v_532 = sub_108;
    sub_107 = sub_70;
  } else {
    v_532 = sub_70;
    sub_107 = sub_108;
  };
  if (controller_ck_24_1) {
    sub_106 = v_532;
  } else {
    sub_106 = sub_107;
  };
  sub_105 = sub_106;
  sub_114 = sub_70;
  if (controller_v_431) {
    v_525 = sub_85;
    v_524 = sub_71;
  } else {
    v_525 = sub_72;
    v_524 = sub_86;
  };
  if (controller_c_ar1) {
    v_526 = v_524;
  } else {
    v_526 = v_525;
  };
  if (controller_v_431) {
    v_522 = sub_85;
  } else {
    v_522 = sub_71;
  };
  if (controller_c_ar1) {
    v_523 = sub_101;
  } else {
    v_523 = v_522;
  };
  if (controller_c_ar2) {
    sub_115 = v_523;
  } else {
    sub_115 = v_526;
  };
  if (controller_c_arm) {
    sub_113 = sub_114;
  } else {
    sub_113 = sub_115;
  };
  if (controller_p1_arrived) {
    v_533 = sub_113;
    sub_104 = sub_105;
  } else {
    v_533 = sub_105;
    sub_104 = sub_113;
  };
  if (controller_ck_26_1) {
    sub_103 = v_533;
  } else {
    sub_103 = sub_104;
  };
  if (controller_c_jan) {
    v_553 = sub_79;
  } else {
    v_553 = sub_103;
  };
  if (controller_c_porta) {
    sub_63 = sub_64;
  } else {
    sub_63 = v_553;
  };
  if (controller_ar_recovered) {
    v_511 = false;
  } else {
    v_511 = sub_27;
  };
  if (controller_ar_failed) {
    sub_129 = sub_26;
  } else {
    sub_129 = false;
  };
  sub_128 = sub_129;
  if (controller_ck_34_1) {
    sub_127 = v_511;
  } else {
    sub_127 = sub_128;
  };
  sub_126 = sub_127;
  sub_125 = sub_126;
  if (controller_v_431) {
    v_515 = false;
  } else {
    v_515 = sub_125;
  };
  if (controller_v_430) {
    sub_124 = sub_125;
  } else {
    sub_124 = false;
  };
  if (controller_v_431) {
    v_514 = sub_124;
  } else {
    v_514 = false;
  };
  if (controller_c_ar1) {
    v_516 = v_514;
  } else {
    v_516 = v_515;
  };
  if (controller_v_431) {
    v_512 = false;
  } else {
    v_512 = sub_124;
  };
  if (controller_c_ar1) {
    v_513 = false;
  } else {
    v_513 = v_512;
  };
  if (controller_c_ar2) {
    sub_123 = v_513;
  } else {
    sub_123 = v_516;
  };
  if (controller_p_arrived) {
    v_517 = false;
    sub_122 = sub_123;
  } else {
    v_517 = sub_123;
    sub_122 = false;
  };
  if (controller_ck_24_1) {
    sub_121 = v_517;
  } else {
    sub_121 = sub_122;
  };
  sub_120 = sub_121;
  if (controller_p1_arrived) {
    v_518 = false;
    sub_119 = sub_120;
  } else {
    v_518 = sub_120;
    sub_119 = false;
  };
  if (controller_ck_26_1) {
    sub_118 = v_518;
  } else {
    sub_118 = sub_119;
  };
  if (controller_c_jan) {
    sub_117 = sub_50;
  } else {
    sub_117 = sub_118;
  };
  sub_136 = sub_96;
  sub_135 = sub_136;
  if (controller_p_arrived) {
    v_509 = sub_135;
    sub_134 = false;
  } else {
    v_509 = false;
    sub_134 = sub_135;
  };
  if (controller_ck_24_1) {
    sub_133 = v_509;
  } else {
    sub_133 = sub_134;
  };
  sub_132 = sub_133;
  if (controller_p1_arrived) {
    v_510 = sub_99;
    sub_131 = sub_132;
  } else {
    v_510 = sub_132;
    sub_131 = sub_99;
  };
  if (controller_ck_26_1) {
    sub_130 = v_510;
  } else {
    sub_130 = sub_131;
  };
  if (controller_p_arrived) {
    v_508 = sub_108;
    sub_140 = sub_123;
  } else {
    v_508 = sub_123;
    sub_140 = sub_108;
  };
  if (controller_ck_24_1) {
    sub_139 = v_508;
  } else {
    sub_139 = sub_140;
  };
  sub_138 = sub_139;
  if (controller_p1_arrived) {
    v_519 = sub_113;
    sub_137 = sub_138;
  } else {
    v_519 = sub_138;
    sub_137 = sub_113;
  };
  if (controller_ck_26_1) {
    v_520 = v_519;
  } else {
    v_520 = sub_137;
  };
  if (controller_c_jan) {
    v_521 = sub_130;
  } else {
    v_521 = v_520;
  };
  if (controller_c_porta) {
    sub_116 = sub_117;
  } else {
    sub_116 = v_521;
  };
  if (controller_shift_turno) {
    v_554 = sub_116;
    sub_62 = sub_63;
  } else {
    v_554 = sub_63;
    sub_62 = sub_116;
  };
  if (controller_ck_1) {
    sub_61 = v_554;
  } else {
    sub_61 = sub_62;
  };
  if (controller_c_jan) {
    sub_144 = false;
  } else {
    sub_144 = sub_118;
  };
  sub_154 = sub_27;
  sub_153 = sub_154;
  sub_152 = sub_153;
  if (controller_v_431) {
    v_502 = sub_34;
  } else {
    v_502 = sub_152;
  };
  if (controller_v_430) {
    sub_151 = sub_152;
  } else {
    sub_151 = sub_34;
  };
  if (controller_v_431) {
    v_501 = sub_151;
  } else {
    v_501 = sub_34;
  };
  if (controller_c_ar1) {
    v_503 = v_501;
  } else {
    v_503 = v_502;
  };
  if (controller_v_431) {
    v_499 = sub_34;
  } else {
    v_499 = sub_151;
  };
  if (controller_c_ar1) {
    v_500 = sub_34;
  } else {
    v_500 = v_499;
  };
  if (controller_c_ar2) {
    sub_150 = v_500;
  } else {
    sub_150 = v_503;
  };
  if (controller_p_arrived) {
    v_504 = sub_150;
    sub_149 = sub_123;
  } else {
    v_504 = sub_123;
    sub_149 = sub_150;
  };
  if (controller_ck_24_1) {
    sub_148 = v_504;
  } else {
    sub_148 = sub_149;
  };
  sub_147 = sub_148;
  sub_156 = sub_123;
  if (controller_v_431) {
    v_497 = sub_21;
    v_496 = sub_124;
  } else {
    v_497 = sub_125;
    v_496 = sub_22;
  };
  if (controller_c_ar1) {
    v_498 = v_496;
  } else {
    v_498 = v_497;
  };
  if (controller_v_431) {
    v_494 = sub_21;
  } else {
    v_494 = sub_124;
  };
  if (controller_c_ar1) {
    v_495 = sub_39;
  } else {
    v_495 = v_494;
  };
  if (controller_c_ar2) {
    sub_157 = v_495;
  } else {
    sub_157 = v_498;
  };
  if (controller_c_arm) {
    sub_155 = sub_156;
  } else {
    sub_155 = sub_157;
  };
  if (controller_p1_arrived) {
    v_505 = sub_155;
    sub_146 = sub_147;
  } else {
    v_505 = sub_147;
    sub_146 = sub_155;
  };
  if (controller_ck_26_1) {
    sub_145 = v_505;
  } else {
    sub_145 = sub_146;
  };
  if (controller_c_jan) {
    v_506 = sub_15;
  } else {
    v_506 = sub_145;
  };
  if (controller_c_porta) {
    sub_143 = sub_144;
  } else {
    sub_143 = v_506;
  };
  if (controller_ar_recovered) {
    v_484 = sub_27;
  } else {
    v_484 = sub_78;
  };
  if (controller_ar_failed) {
    sub_169 = sub_77;
  } else {
    sub_169 = sub_26;
  };
  sub_168 = sub_169;
  if (controller_ck_34_1) {
    sub_167 = v_484;
  } else {
    sub_167 = sub_168;
  };
  sub_166 = sub_167;
  sub_165 = sub_166;
  if (controller_v_431) {
    v_488 = sub_34;
  } else {
    v_488 = sub_165;
  };
  if (controller_v_430) {
    sub_164 = sub_165;
  } else {
    sub_164 = sub_34;
  };
  if (controller_v_431) {
    v_487 = sub_164;
  } else {
    v_487 = sub_34;
  };
  if (controller_c_ar1) {
    v_489 = v_487;
  } else {
    v_489 = v_488;
  };
  if (controller_v_431) {
    v_485 = sub_34;
  } else {
    v_485 = sub_164;
  };
  if (controller_c_ar1) {
    v_486 = sub_34;
  } else {
    v_486 = v_485;
  };
  if (controller_c_ar2) {
    sub_163 = v_486;
  } else {
    sub_163 = v_489;
  };
  if (controller_p_arrived) {
    v_490 = sub_163;
    sub_162 = sub_123;
  } else {
    v_490 = sub_123;
    sub_162 = sub_163;
  };
  if (controller_ck_24_1) {
    sub_161 = v_490;
  } else {
    sub_161 = sub_162;
  };
  sub_160 = sub_161;
  if (controller_v_431) {
    v_482 = sub_21;
    v_481 = sub_71;
  } else {
    v_482 = sub_72;
    v_481 = sub_22;
  };
  if (controller_c_ar1) {
    v_483 = v_481;
  } else {
    v_483 = v_482;
  };
  if (controller_v_431) {
    v_479 = sub_21;
  } else {
    v_479 = sub_71;
  };
  if (controller_c_ar1) {
    v_480 = sub_39;
  } else {
    v_480 = v_479;
  };
  if (controller_c_ar2) {
    sub_171 = v_480;
  } else {
    sub_171 = v_483;
  };
  if (controller_c_arm) {
    sub_170 = sub_114;
  } else {
    sub_170 = sub_171;
  };
  if (controller_p1_arrived) {
    v_491 = sub_170;
    sub_159 = sub_160;
  } else {
    v_491 = sub_160;
    sub_159 = sub_170;
  };
  if (controller_ck_26_1) {
    v_492 = v_491;
  } else {
    v_492 = sub_159;
  };
  if (controller_c_jan) {
    v_493 = sub_41;
  } else {
    v_493 = v_492;
  };
  if (controller_c_porta) {
    sub_158 = sub_117;
  } else {
    sub_158 = v_493;
  };
  if (controller_shift_turno) {
    v_507 = sub_158;
    sub_142 = sub_143;
  } else {
    v_507 = sub_143;
    sub_142 = sub_158;
  };
  if (controller_ck_1) {
    sub_141 = v_507;
  } else {
    sub_141 = sub_142;
  };
  if (controller_l_failed) {
    sub_60 = sub_61;
  } else {
    sub_60 = sub_141;
  };
  if (controller_ck_38_1) {
    v_556 = sub_61;
    v_555 = sub_141;
  } else {
    v_556 = sub_60;
    v_555 = sub_60;
  };
  if (controller_l_recovered) {
    v_557 = v_555;
  } else {
    v_557 = v_556;
  };
  if (controller_c_porta) {
    sub_176 = sub_117;
  } else {
    sub_176 = sub_144;
  };
  if (controller_shift_turno) {
    v_476 = sub_176;
    sub_175 = false;
  } else {
    v_476 = false;
    sub_175 = sub_176;
  };
  if (controller_ck_1) {
    sub_174 = v_476;
  } else {
    sub_174 = sub_175;
  };
  if (controller_shift_turno) {
    v_475 = sub_176;
    sub_178 = sub_143;
  } else {
    v_475 = sub_143;
    sub_178 = sub_176;
  };
  if (controller_ck_1) {
    sub_177 = v_475;
  } else {
    sub_177 = sub_178;
  };
  if (controller_l_failed) {
    sub_173 = sub_174;
  } else {
    sub_173 = sub_177;
  };
  if (controller_ck_38_1) {
    v_477 = sub_177;
  } else {
    v_477 = sub_173;
  };
  sub_179 = sub_174;
  if (controller_ck_38_1) {
    v_478 = sub_179;
  } else {
    v_478 = sub_173;
  };
  if (controller_l_recovered) {
    sub_172 = v_477;
  } else {
    sub_172 = v_478;
  };
  if (controller_cl1) {
    sub_59 = v_557;
  } else {
    sub_59 = sub_172;
  };
  sub_58 = sub_59;
  if (controller_v_401) {
    sub_6 = sub_58;
  } else {
    sub_6 = sub_7;
  };
  if (controller_p_arrived) {
    v_468 = sub_46;
    sub_191 = sub_123;
  } else {
    v_468 = sub_123;
    sub_191 = sub_46;
  };
  if (controller_ck_24_1) {
    sub_190 = v_468;
  } else {
    sub_190 = sub_191;
  };
  sub_189 = sub_190;
  if (controller_p1_arrived) {
    v_469 = sub_37;
    sub_188 = sub_189;
  } else {
    v_469 = sub_189;
    sub_188 = sub_37;
  };
  if (controller_ck_26_1) {
    v_470 = v_469;
  } else {
    v_470 = sub_188;
  };
  if (controller_c_jan) {
    v_471 = sub_41;
  } else {
    v_471 = v_470;
  };
  if (controller_c_porta) {
    sub_187 = sub_117;
  } else {
    sub_187 = v_471;
  };
  if (controller_shift_turno) {
    v_472 = sub_187;
    sub_186 = sub_143;
  } else {
    v_472 = sub_143;
    sub_186 = sub_187;
  };
  if (controller_ck_1) {
    sub_185 = v_472;
  } else {
    sub_185 = sub_186;
  };
  if (controller_l_failed) {
    sub_184 = sub_174;
  } else {
    sub_184 = sub_185;
  };
  if (controller_ck_38_1) {
    v_474 = sub_179;
    v_473 = sub_185;
  } else {
    v_474 = sub_184;
    v_473 = sub_184;
  };
  if (controller_l_recovered) {
    sub_183 = v_473;
  } else {
    sub_183 = v_474;
  };
  sub_182 = sub_183;
  sub_181 = sub_182;
  sub_180 = sub_181;
  if (controller_v_400) {
    sub_5 = sub_180;
  } else {
    sub_5 = sub_6;
  };
  if (controller_c_jan) {
    v_464 = sub_41;
  } else {
    v_464 = sub_145;
  };
  if (controller_c_porta) {
    sub_198 = sub_117;
  } else {
    sub_198 = v_464;
  };
  if (controller_shift_turno) {
    v_465 = sub_198;
    sub_197 = sub_143;
  } else {
    v_465 = sub_143;
    sub_197 = sub_198;
  };
  if (controller_ck_1) {
    sub_196 = v_465;
  } else {
    sub_196 = sub_197;
  };
  sub_195 = sub_196;
  sub_204 = sub_156;
  if (controller_c_jan) {
    v_460 = false;
  } else {
    v_460 = sub_204;
  };
  if (controller_c_porta) {
    sub_203 = sub_117;
  } else {
    sub_203 = v_460;
  };
  if (controller_shift_turno) {
    v_461 = sub_203;
    sub_202 = sub_143;
  } else {
    v_461 = sub_143;
    sub_202 = sub_203;
  };
  if (controller_ck_1) {
    sub_201 = v_461;
  } else {
    sub_201 = sub_202;
  };
  if (controller_l_failed) {
    sub_200 = sub_196;
  } else {
    sub_200 = sub_201;
  };
  if (controller_ck_38_1) {
    v_463 = sub_195;
    v_462 = sub_201;
  } else {
    v_463 = sub_200;
    v_462 = sub_200;
  };
  if (controller_l_recovered) {
    sub_199 = v_462;
  } else {
    sub_199 = v_463;
  };
  if (controller_cl1) {
    v_467 = sub_183;
    v_466 = sub_195;
  } else {
    v_467 = sub_199;
    v_466 = sub_199;
  };
  if (controller_down) {
    sub_194 = v_466;
  } else {
    sub_194 = v_467;
  };
  sub_193 = sub_194;
  if (controller_v_401) {
    sub_192 = sub_180;
  } else {
    sub_192 = sub_193;
  };
  if (controller_ar_recovered) {
    v_446 = sub_78;
  } else {
    v_446 = sub_27;
  };
  if (controller_ar_failed) {
    sub_221 = sub_26;
  } else {
    sub_221 = sub_77;
  };
  sub_220 = sub_221;
  if (controller_ck_34_1) {
    sub_219 = v_446;
  } else {
    sub_219 = sub_220;
  };
  sub_218 = sub_219;
  sub_217 = sub_218;
  if (controller_v_431) {
    v_450 = sub_96;
  } else {
    v_450 = sub_217;
  };
  if (controller_v_430) {
    sub_216 = sub_217;
  } else {
    sub_216 = sub_96;
  };
  if (controller_v_431) {
    v_449 = sub_216;
  } else {
    v_449 = sub_96;
  };
  if (controller_c_ar1) {
    v_451 = v_449;
  } else {
    v_451 = v_450;
  };
  if (controller_v_431) {
    v_447 = sub_96;
  } else {
    v_447 = sub_216;
  };
  if (controller_c_ar1) {
    v_448 = sub_96;
  } else {
    v_448 = v_447;
  };
  if (controller_c_ar2) {
    sub_215 = v_448;
  } else {
    sub_215 = v_451;
  };
  if (controller_p_arrived) {
    v_452 = sub_215;
    sub_214 = sub_123;
  } else {
    v_452 = sub_123;
    sub_214 = sub_215;
  };
  if (controller_ck_24_1) {
    sub_213 = v_452;
  } else {
    sub_213 = sub_214;
  };
  sub_212 = sub_213;
  if (controller_v_431) {
    v_444 = sub_85;
    v_443 = sub_124;
  } else {
    v_444 = sub_125;
    v_443 = sub_86;
  };
  if (controller_c_ar1) {
    v_445 = v_443;
  } else {
    v_445 = v_444;
  };
  if (controller_v_431) {
    v_441 = sub_85;
  } else {
    v_441 = sub_124;
  };
  if (controller_c_ar1) {
    v_442 = sub_101;
  } else {
    v_442 = v_441;
  };
  if (controller_c_ar2) {
    sub_223 = v_442;
  } else {
    sub_223 = v_445;
  };
  if (controller_c_arm) {
    sub_222 = sub_156;
  } else {
    sub_222 = sub_223;
  };
  if (controller_p1_arrived) {
    v_453 = sub_222;
    sub_211 = sub_212;
  } else {
    v_453 = sub_212;
    sub_211 = sub_222;
  };
  if (controller_ck_26_1) {
    v_454 = v_453;
  } else {
    v_454 = sub_211;
  };
  if (controller_c_jan) {
    v_455 = sub_130;
  } else {
    v_455 = v_454;
  };
  if (controller_c_porta) {
    sub_210 = sub_117;
  } else {
    sub_210 = v_455;
  };
  if (controller_shift_turno) {
    v_456 = sub_210;
    sub_209 = sub_143;
  } else {
    v_456 = sub_143;
    sub_209 = sub_210;
  };
  if (controller_ck_1) {
    sub_208 = v_456;
  } else {
    sub_208 = sub_209;
  };
  if (controller_l_failed) {
    sub_207 = sub_196;
  } else {
    sub_207 = sub_208;
  };
  if (controller_ck_38_1) {
    v_458 = sub_195;
    v_457 = sub_208;
  } else {
    v_458 = sub_207;
    v_457 = sub_207;
  };
  if (controller_l_recovered) {
    v_459 = v_457;
  } else {
    v_459 = v_458;
  };
  if (controller_cl1) {
    sub_206 = v_459;
  } else {
    sub_206 = sub_172;
  };
  sub_205 = sub_206;
  if (controller_v_401) {
    v_578 = sub_205;
  } else {
    v_578 = sub_7;
  };
  if (controller_v_400) {
    v_579 = v_578;
  } else {
    v_579 = sub_192;
  };
  if (controller_v_399) {
    sub_4 = v_579;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_1 = sub_2;
  if (controller_c_jan) {
    v_435 = sub_79;
  } else {
    v_435 = sub_130;
  };
  if (controller_c_porta) {
    sub_236 = false;
  } else {
    sub_236 = v_435;
  };
  if (controller_p_arrived) {
    v_433 = false;
    sub_243 = sub_84;
  } else {
    v_433 = sub_84;
    sub_243 = false;
  };
  if (controller_ck_24_1) {
    sub_242 = v_433;
  } else {
    sub_242 = sub_243;
  };
  sub_241 = sub_242;
  if (controller_p1_arrived) {
    v_434 = false;
    sub_240 = sub_241;
  } else {
    v_434 = sub_241;
    sub_240 = false;
  };
  if (controller_ck_26_1) {
    sub_239 = v_434;
  } else {
    sub_239 = sub_240;
  };
  if (controller_c_jan) {
    sub_238 = sub_239;
  } else {
    sub_238 = false;
  };
  if (controller_c_porta) {
    sub_237 = sub_238;
  } else {
    sub_237 = sub_130;
  };
  if (controller_shift_turno) {
    v_436 = sub_237;
    sub_235 = sub_236;
  } else {
    v_436 = sub_236;
    sub_235 = sub_237;
  };
  if (controller_ck_1) {
    sub_234 = v_436;
  } else {
    sub_234 = sub_235;
  };
  if (controller_c_porta) {
    sub_246 = sub_238;
  } else {
    sub_246 = false;
  };
  if (controller_shift_turno) {
    v_432 = sub_246;
    sub_245 = sub_236;
  } else {
    v_432 = sub_236;
    sub_245 = sub_246;
  };
  if (controller_ck_1) {
    sub_244 = v_432;
  } else {
    sub_244 = sub_245;
  };
  if (controller_l_failed) {
    sub_233 = sub_234;
  } else {
    sub_233 = sub_244;
  };
  if (controller_ck_38_1) {
    v_438 = sub_234;
    v_437 = sub_244;
  } else {
    v_438 = sub_233;
    v_437 = sub_233;
  };
  if (controller_l_recovered) {
    sub_232 = v_437;
  } else {
    sub_232 = v_438;
  };
  sub_231 = sub_232;
  sub_230 = sub_231;
  sub_229 = sub_230;
  if (controller_c_jan) {
    v_428 = sub_130;
    sub_254 = sub_239;
  } else {
    v_428 = sub_103;
    sub_254 = sub_65;
  };
  if (controller_c_porta) {
    sub_253 = sub_254;
  } else {
    sub_253 = v_428;
  };
  if (controller_shift_turno) {
    v_429 = sub_253;
    sub_252 = sub_63;
  } else {
    v_429 = sub_63;
    sub_252 = sub_253;
  };
  if (controller_ck_1) {
    sub_251 = v_429;
  } else {
    sub_251 = sub_252;
  };
  if (controller_p_arrived) {
    v_423 = sub_163;
    sub_261 = sub_70;
  } else {
    v_423 = sub_70;
    sub_261 = sub_163;
  };
  if (controller_ck_24_1) {
    sub_260 = v_423;
  } else {
    sub_260 = sub_261;
  };
  sub_259 = sub_260;
  if (controller_p1_arrived) {
    v_424 = sub_170;
    sub_258 = sub_259;
  } else {
    v_424 = sub_259;
    sub_258 = sub_170;
  };
  if (controller_ck_26_1) {
    v_425 = v_424;
  } else {
    v_425 = sub_258;
  };
  if (controller_c_jan) {
    v_426 = sub_41;
  } else {
    v_426 = v_425;
  };
  if (controller_c_porta) {
    sub_257 = sub_254;
  } else {
    sub_257 = v_426;
  };
  if (controller_shift_turno) {
    v_427 = sub_257;
    sub_256 = sub_63;
  } else {
    v_427 = sub_63;
    sub_256 = sub_257;
  };
  if (controller_ck_1) {
    sub_255 = v_427;
  } else {
    sub_255 = sub_256;
  };
  if (controller_l_failed) {
    sub_250 = sub_251;
  } else {
    sub_250 = sub_255;
  };
  if (controller_ck_38_1) {
    v_430 = sub_255;
  } else {
    v_430 = sub_250;
  };
  sub_262 = sub_251;
  if (controller_ck_38_1) {
    v_431 = sub_262;
  } else {
    v_431 = sub_250;
  };
  if (controller_l_recovered) {
    sub_249 = v_430;
  } else {
    sub_249 = v_431;
  };
  if (controller_c_porta) {
    sub_267 = sub_254;
  } else {
    sub_267 = sub_64;
  };
  if (controller_shift_turno) {
    v_420 = sub_267;
    sub_266 = false;
  } else {
    v_420 = false;
    sub_266 = sub_267;
  };
  if (controller_ck_1) {
    sub_265 = v_420;
  } else {
    sub_265 = sub_266;
  };
  if (controller_shift_turno) {
    v_419 = sub_267;
    sub_269 = sub_63;
  } else {
    v_419 = sub_63;
    sub_269 = sub_267;
  };
  if (controller_ck_1) {
    sub_268 = v_419;
  } else {
    sub_268 = sub_269;
  };
  if (controller_l_failed) {
    sub_264 = sub_265;
  } else {
    sub_264 = sub_268;
  };
  if (controller_ck_38_1) {
    v_421 = sub_268;
  } else {
    v_421 = sub_264;
  };
  sub_270 = sub_265;
  if (controller_ck_38_1) {
    v_422 = sub_270;
  } else {
    v_422 = sub_264;
  };
  if (controller_l_recovered) {
    sub_263 = v_421;
  } else {
    sub_263 = v_422;
  };
  if (controller_cl1) {
    sub_248 = sub_249;
  } else {
    sub_248 = sub_263;
  };
  sub_247 = sub_248;
  if (controller_v_401) {
    sub_228 = sub_247;
  } else {
    sub_228 = sub_229;
  };
  if (controller_p_arrived) {
    v_412 = sub_135;
    sub_282 = sub_70;
  } else {
    v_412 = sub_70;
    sub_282 = sub_135;
  };
  if (controller_ck_24_1) {
    sub_281 = v_412;
  } else {
    sub_281 = sub_282;
  };
  sub_280 = sub_281;
  if (controller_p1_arrived) {
    v_413 = sub_99;
    sub_279 = sub_280;
  } else {
    v_413 = sub_280;
    sub_279 = sub_99;
  };
  if (controller_ck_26_1) {
    v_414 = v_413;
  } else {
    v_414 = sub_279;
  };
  if (controller_c_jan) {
    v_415 = sub_130;
  } else {
    v_415 = v_414;
  };
  if (controller_c_porta) {
    sub_278 = sub_254;
  } else {
    sub_278 = v_415;
  };
  if (controller_shift_turno) {
    v_416 = sub_278;
    sub_277 = sub_63;
  } else {
    v_416 = sub_63;
    sub_277 = sub_278;
  };
  if (controller_ck_1) {
    sub_276 = v_416;
  } else {
    sub_276 = sub_277;
  };
  if (controller_l_failed) {
    sub_275 = sub_265;
  } else {
    sub_275 = sub_276;
  };
  if (controller_ck_38_1) {
    v_418 = sub_270;
    v_417 = sub_276;
  } else {
    v_418 = sub_275;
    v_417 = sub_275;
  };
  if (controller_l_recovered) {
    sub_274 = v_417;
  } else {
    sub_274 = v_418;
  };
  sub_273 = sub_274;
  sub_272 = sub_273;
  sub_271 = sub_272;
  if (controller_v_400) {
    sub_227 = sub_271;
  } else {
    sub_227 = sub_228;
  };
  sub_290 = sub_114;
  if (controller_c_jan) {
    v_399 = false;
  } else {
    v_399 = sub_290;
  };
  if (controller_c_porta) {
    sub_289 = sub_254;
  } else {
    sub_289 = v_399;
  };
  if (controller_shift_turno) {
    v_400 = sub_289;
    sub_288 = sub_63;
  } else {
    v_400 = sub_63;
    sub_288 = sub_289;
  };
  if (controller_ck_1) {
    sub_287 = v_400;
  } else {
    sub_287 = sub_288;
  };
  if (controller_l_failed) {
    sub_286 = sub_251;
  } else {
    sub_286 = sub_287;
  };
  if (controller_ck_38_1) {
    v_402 = sub_262;
    v_401 = sub_287;
  } else {
    v_402 = sub_286;
    v_401 = sub_286;
  };
  if (controller_l_recovered) {
    sub_285 = v_401;
  } else {
    sub_285 = v_402;
  };
  if (controller_cl1) {
    v_406 = sub_249;
    v_404 = sub_274;
    v_403 = sub_262;
  } else {
    v_406 = sub_285;
    v_404 = sub_285;
    v_403 = sub_285;
  };
  if (controller_down) {
    v_405 = v_403;
  } else {
    v_405 = v_404;
  };
  if (controller_p_arrived) {
    v_394 = sub_46;
    sub_298 = sub_70;
  } else {
    v_394 = sub_70;
    sub_298 = sub_46;
  };
  if (controller_ck_24_1) {
    sub_297 = v_394;
  } else {
    sub_297 = sub_298;
  };
  sub_296 = sub_297;
  if (controller_p1_arrived) {
    v_395 = sub_37;
    sub_295 = sub_296;
  } else {
    v_395 = sub_296;
    sub_295 = sub_37;
  };
  if (controller_ck_26_1) {
    v_396 = v_395;
  } else {
    v_396 = sub_295;
  };
  if (controller_c_jan) {
    v_397 = sub_41;
  } else {
    v_397 = v_396;
  };
  if (controller_c_porta) {
    sub_294 = sub_254;
  } else {
    sub_294 = v_397;
  };
  if (controller_shift_turno) {
    v_398 = sub_294;
    sub_293 = sub_63;
  } else {
    v_398 = sub_63;
    sub_293 = sub_294;
  };
  if (controller_ck_1) {
    sub_292 = v_398;
  } else {
    sub_292 = sub_293;
  };
  if (controller_l_failed) {
    sub_291 = sub_265;
  } else {
    sub_291 = sub_292;
  };
  if (controller_ck_38_1) {
    v_408 = sub_270;
    v_407 = sub_292;
  } else {
    v_408 = sub_291;
    v_407 = sub_291;
  };
  if (controller_l_recovered) {
    v_409 = v_407;
  } else {
    v_409 = v_408;
  };
  if (controller_cl1) {
    v_410 = v_409;
  } else {
    v_410 = sub_285;
  };
  if (controller_down) {
    v_411 = v_406;
  } else {
    v_411 = v_410;
  };
  if (controller_up) {
    sub_284 = v_405;
  } else {
    sub_284 = v_411;
  };
  if (controller_v_401) {
    sub_283 = sub_271;
  } else {
    sub_283 = sub_284;
  };
  if (controller_p_arrived) {
    v_386 = sub_150;
    sub_308 = sub_70;
  } else {
    v_386 = sub_70;
    sub_308 = sub_150;
  };
  if (controller_ck_24_1) {
    sub_307 = v_386;
  } else {
    sub_307 = sub_308;
  };
  sub_306 = sub_307;
  if (controller_p1_arrived) {
    v_387 = sub_155;
    sub_305 = sub_306;
  } else {
    v_387 = sub_306;
    sub_305 = sub_155;
  };
  if (controller_ck_26_1) {
    v_388 = v_387;
  } else {
    v_388 = sub_305;
  };
  if (controller_c_jan) {
    v_389 = sub_41;
  } else {
    v_389 = v_388;
  };
  if (controller_c_porta) {
    sub_304 = sub_254;
  } else {
    sub_304 = v_389;
  };
  if (controller_shift_turno) {
    v_390 = sub_304;
    sub_303 = sub_143;
  } else {
    v_390 = sub_143;
    sub_303 = sub_304;
  };
  if (controller_ck_1) {
    sub_302 = v_390;
  } else {
    sub_302 = sub_303;
  };
  if (controller_p_arrived) {
    v = sub_215;
    sub_315 = sub_70;
  } else {
    v = sub_70;
    sub_315 = sub_215;
  };
  if (controller_ck_24_1) {
    sub_314 = v;
  } else {
    sub_314 = sub_315;
  };
  sub_313 = sub_314;
  if (controller_p1_arrived) {
    v_382 = sub_222;
    sub_312 = sub_313;
  } else {
    v_382 = sub_313;
    sub_312 = sub_222;
  };
  if (controller_ck_26_1) {
    v_383 = v_382;
  } else {
    v_383 = sub_312;
  };
  if (controller_c_jan) {
    v_384 = sub_130;
  } else {
    v_384 = v_383;
  };
  if (controller_c_porta) {
    sub_311 = sub_254;
  } else {
    sub_311 = v_384;
  };
  if (controller_shift_turno) {
    v_385 = sub_311;
    sub_310 = sub_63;
  } else {
    v_385 = sub_63;
    sub_310 = sub_311;
  };
  if (controller_ck_1) {
    sub_309 = v_385;
  } else {
    sub_309 = sub_310;
  };
  if (controller_l_failed) {
    sub_301 = sub_302;
  } else {
    sub_301 = sub_309;
  };
  if (controller_ck_38_1) {
    v_392 = sub_302;
    v_391 = sub_309;
  } else {
    v_392 = sub_301;
    v_391 = sub_301;
  };
  if (controller_l_recovered) {
    v_393 = v_391;
  } else {
    v_393 = v_392;
  };
  if (controller_cl1) {
    sub_300 = v_393;
  } else {
    sub_300 = sub_263;
  };
  sub_299 = sub_300;
  if (controller_v_401) {
    v_439 = sub_299;
  } else {
    v_439 = sub_229;
  };
  if (controller_v_400) {
    v_440 = v_439;
  } else {
    v_440 = sub_283;
  };
  if (controller_v_399) {
    sub_226 = v_440;
  } else {
    sub_226 = sub_227;
  };
  sub_225 = sub_226;
  sub_224 = sub_225;
  if (p_controller_cl2) {
    sub_0 = sub_224;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_cl2 = sub_0;;
}

void Controller_controller__controller_controller_controller_cl1_step(
  int controller_up, int controller_down, int controller_shift_turno,
  int controller_abre_porta, int controller_p_arrived,
  int controller_p1_arrived, int controller_ar_failed,
  int controller_ar_recovered, int controller_l_failed,
  int controller_l_recovered, int controller_ck_1, int controller_pnr_13,
  int controller_ck_18_1, int controller_pnr_12, int controller_ck_20_1,
  int controller_pnr_11, int controller_ck_22_1, int controller_pnr_10,
  int controller_ck_24_1, int controller_pnr_9, int controller_ck_26_1,
  int controller_pnr_8, int controller_ck_28_1, int controller_pnr_7,
  int controller_ck_30_1, int controller_pnr_6, int controller_v_431,
  int controller_v_430, int controller_pnr_5, int controller_ck_34_1,
  int controller_pnr_4, int controller_v_401, int controller_v_400,
  int controller_v_399, int controller_pnr_3, int controller_ck_38_1,
  int controller_pnr, int p_controller_cdown, int p_controller_cup,
  int p_controller_cl2, int p_controller_cl1, int p_controller_c_policy,
  int p_controller_c_arm, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_luz2, int p_controller_c_luz1, int p_controller_c_jan,
  int p_controller_c_pc, int p_controller_c_rot, int p_controller_c_porta,
  int controller_c_policy, int controller_c_arm, int controller_c_ar2,
  int controller_c_ar1, int controller_c_luz2, int controller_c_luz1,
  int controller_c_jan, int controller_c_pc, int controller_c_rot,
  int controller_c_porta,
  Controller_controller__controller_controller_controller_cl1_out* _out) {
  
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
  sub_25 = false;
  if (controller_ar_failed) {
    sub_24 = false;
  } else {
    sub_24 = sub_25;
  };
  sub_23 = sub_24;
  sub_26 = sub_25;
  if (controller_ar_recovered) {
    v_710 = sub_26;
  } else {
    v_710 = false;
  };
  if (controller_ck_34_1) {
    sub_22 = v_710;
  } else {
    sub_22 = sub_23;
  };
  if (controller_c_rot) {
    v_711 = false;
  } else {
    v_711 = sub_22;
  };
  if (controller_c_pc) {
    sub_21 = false;
  } else {
    sub_21 = v_711;
  };
  if (controller_v_430) {
    sub_20 = sub_21;
  } else {
    sub_20 = false;
  };
  if (controller_v_431) {
    v_712 = false;
  } else {
    v_712 = sub_20;
  };
  if (controller_c_ar1) {
    v_713 = false;
  } else {
    v_713 = v_712;
  };
  if (controller_v_431) {
    sub_27 = sub_20;
    sub_28 = false;
  } else {
    sub_27 = false;
    sub_28 = sub_21;
  };
  if (controller_c_ar1) {
    v_714 = sub_27;
  } else {
    v_714 = sub_28;
  };
  if (controller_c_ar2) {
    sub_19 = v_713;
  } else {
    sub_19 = v_714;
  };
  sub_32 = sub_22;
  if (controller_c_pc) {
    sub_31 = false;
  } else {
    sub_31 = sub_32;
  };
  sub_33 = sub_32;
  if (controller_v_430) {
    sub_30 = sub_33;
  } else {
    sub_30 = sub_31;
  };
  if (controller_v_431) {
    v_708 = sub_33;
  } else {
    v_708 = sub_30;
  };
  if (controller_v_430) {
    sub_34 = sub_31;
  } else {
    sub_34 = sub_33;
  };
  if (controller_c_ar1) {
    v_709 = v_708;
  } else {
    v_709 = sub_34;
  };
  if (controller_v_431) {
    sub_35 = sub_34;
  } else {
    sub_35 = sub_31;
  };
  if (controller_c_ar2) {
    sub_29 = v_709;
  } else {
    sub_29 = sub_35;
  };
  if (controller_p_arrived) {
    v_715 = sub_29;
    sub_18 = sub_19;
  } else {
    v_715 = sub_19;
    sub_18 = sub_29;
  };
  if (controller_ck_24_1) {
    sub_17 = v_715;
  } else {
    sub_17 = sub_18;
  };
  sub_16 = sub_17;
  if (controller_c_ar1) {
    v_707 = sub_28;
  } else {
    v_707 = sub_27;
  };
  if (controller_v_430) {
    sub_39 = false;
  } else {
    sub_39 = sub_21;
  };
  if (controller_v_431) {
    sub_38 = false;
  } else {
    sub_38 = sub_39;
  };
  if (controller_c_ar1) {
    v_706 = sub_38;
  } else {
    v_706 = sub_27;
  };
  if (controller_c_ar2) {
    sub_37 = v_706;
  } else {
    sub_37 = v_707;
  };
  if (controller_c_arm) {
    sub_36 = false;
  } else {
    sub_36 = sub_37;
  };
  if (controller_p1_arrived) {
    v_716 = sub_36;
    sub_15 = sub_16;
  } else {
    v_716 = sub_16;
    sub_15 = sub_36;
  };
  if (controller_ck_26_1) {
    sub_14 = v_716;
  } else {
    sub_14 = sub_15;
  };
  sub_46 = sub_33;
  sub_45 = sub_46;
  if (controller_p_arrived) {
    v_704 = sub_45;
    sub_44 = false;
  } else {
    v_704 = false;
    sub_44 = sub_45;
  };
  if (controller_ck_24_1) {
    sub_43 = v_704;
  } else {
    sub_43 = sub_44;
  };
  sub_42 = sub_43;
  if (controller_p1_arrived) {
    v_705 = sub_36;
    sub_41 = sub_42;
  } else {
    v_705 = sub_42;
    sub_41 = sub_36;
  };
  if (controller_ck_26_1) {
    sub_40 = v_705;
  } else {
    sub_40 = sub_41;
  };
  if (controller_c_jan) {
    v_717 = sub_14;
  } else {
    v_717 = sub_40;
  };
  if (controller_c_porta) {
    sub_13 = false;
  } else {
    sub_13 = v_717;
  };
  if (controller_p_arrived) {
    v_702 = false;
    sub_53 = sub_19;
  } else {
    v_702 = sub_19;
    sub_53 = false;
  };
  if (controller_ck_24_1) {
    sub_52 = v_702;
  } else {
    sub_52 = sub_53;
  };
  sub_51 = sub_52;
  if (controller_p1_arrived) {
    v_703 = false;
    sub_50 = sub_51;
  } else {
    v_703 = sub_51;
    sub_50 = false;
  };
  if (controller_ck_26_1) {
    sub_49 = v_703;
  } else {
    sub_49 = sub_50;
  };
  if (controller_c_jan) {
    sub_48 = sub_49;
  } else {
    sub_48 = false;
  };
  if (controller_c_porta) {
    sub_47 = sub_48;
  } else {
    sub_47 = sub_40;
  };
  if (controller_shift_turno) {
    v_718 = sub_47;
    sub_12 = sub_13;
  } else {
    v_718 = sub_13;
    sub_12 = sub_47;
  };
  if (controller_ck_1) {
    sub_11 = v_718;
  } else {
    sub_11 = sub_12;
  };
  if (controller_c_porta) {
    sub_56 = sub_48;
  } else {
    sub_56 = false;
  };
  if (controller_shift_turno) {
    v_701 = sub_56;
    sub_55 = sub_13;
  } else {
    v_701 = sub_13;
    sub_55 = sub_56;
  };
  if (controller_ck_1) {
    sub_54 = v_701;
  } else {
    sub_54 = sub_55;
  };
  if (controller_l_failed) {
    sub_10 = sub_11;
  } else {
    sub_10 = sub_54;
  };
  if (controller_ck_38_1) {
    v_720 = sub_11;
    v_719 = sub_54;
  } else {
    v_720 = sub_10;
    v_719 = sub_10;
  };
  if (controller_l_recovered) {
    sub_9 = v_719;
  } else {
    sub_9 = v_720;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_76 = true;
  if (controller_ar_failed) {
    sub_75 = sub_76;
  } else {
    sub_75 = false;
  };
  sub_74 = sub_75;
  sub_77 = sub_76;
  if (controller_ar_recovered) {
    v_689 = false;
  } else {
    v_689 = sub_77;
  };
  if (controller_ck_34_1) {
    sub_73 = v_689;
  } else {
    sub_73 = sub_74;
  };
  sub_72 = sub_73;
  sub_71 = sub_72;
  if (controller_v_431) {
    v_693 = false;
  } else {
    v_693 = sub_71;
  };
  if (controller_v_430) {
    sub_70 = sub_71;
  } else {
    sub_70 = false;
  };
  if (controller_v_431) {
    v_692 = sub_70;
  } else {
    v_692 = false;
  };
  if (controller_c_ar1) {
    v_694 = v_692;
  } else {
    v_694 = v_693;
  };
  if (controller_v_431) {
    v_690 = false;
  } else {
    v_690 = sub_70;
  };
  if (controller_c_ar1) {
    v_691 = false;
  } else {
    v_691 = v_690;
  };
  if (controller_c_ar2) {
    sub_69 = v_691;
  } else {
    sub_69 = v_694;
  };
  if (controller_p_arrived) {
    v_695 = false;
    sub_68 = sub_69;
  } else {
    v_695 = sub_69;
    sub_68 = false;
  };
  if (controller_ck_24_1) {
    sub_67 = v_695;
  } else {
    sub_67 = sub_68;
  };
  sub_66 = sub_67;
  if (controller_p1_arrived) {
    v_696 = false;
    sub_65 = sub_66;
  } else {
    v_696 = sub_66;
    sub_65 = false;
  };
  if (controller_ck_26_1) {
    sub_64 = v_696;
  } else {
    sub_64 = sub_65;
  };
  if (controller_c_jan) {
    sub_63 = false;
  } else {
    sub_63 = sub_64;
  };
  if (controller_ar_recovered) {
    v_682 = sub_77;
  } else {
    v_682 = false;
  };
  if (controller_ar_failed) {
    sub_88 = false;
  } else {
    sub_88 = sub_76;
  };
  sub_87 = sub_88;
  if (controller_ck_34_1) {
    sub_86 = v_682;
  } else {
    sub_86 = sub_87;
  };
  if (controller_c_rot) {
    v_683 = false;
  } else {
    v_683 = sub_86;
  };
  if (controller_c_pc) {
    sub_85 = false;
  } else {
    sub_85 = v_683;
  };
  if (controller_v_430) {
    sub_84 = sub_85;
  } else {
    sub_84 = false;
  };
  if (controller_v_431) {
    v_684 = false;
  } else {
    v_684 = sub_84;
  };
  if (controller_c_ar1) {
    v_685 = false;
  } else {
    v_685 = v_684;
  };
  if (controller_v_431) {
    sub_89 = sub_84;
    sub_90 = false;
  } else {
    sub_89 = false;
    sub_90 = sub_85;
  };
  if (controller_c_ar1) {
    v_686 = sub_89;
  } else {
    v_686 = sub_90;
  };
  if (controller_c_ar2) {
    sub_83 = v_685;
  } else {
    sub_83 = v_686;
  };
  sub_94 = sub_86;
  if (controller_c_pc) {
    sub_93 = false;
  } else {
    sub_93 = sub_94;
  };
  sub_95 = sub_94;
  if (controller_v_430) {
    sub_92 = sub_95;
  } else {
    sub_92 = sub_93;
  };
  if (controller_v_431) {
    v_680 = sub_95;
  } else {
    v_680 = sub_92;
  };
  if (controller_v_430) {
    sub_96 = sub_93;
  } else {
    sub_96 = sub_95;
  };
  if (controller_c_ar1) {
    v_681 = v_680;
  } else {
    v_681 = sub_96;
  };
  if (controller_v_431) {
    sub_97 = sub_96;
  } else {
    sub_97 = sub_93;
  };
  if (controller_c_ar2) {
    sub_91 = v_681;
  } else {
    sub_91 = sub_97;
  };
  if (controller_p_arrived) {
    v_687 = sub_91;
    sub_82 = sub_83;
  } else {
    v_687 = sub_83;
    sub_82 = sub_91;
  };
  if (controller_ck_24_1) {
    sub_81 = v_687;
  } else {
    sub_81 = sub_82;
  };
  sub_80 = sub_81;
  if (controller_c_ar1) {
    v_679 = sub_90;
  } else {
    v_679 = sub_89;
  };
  if (controller_v_430) {
    sub_101 = false;
  } else {
    sub_101 = sub_85;
  };
  if (controller_v_431) {
    sub_100 = false;
  } else {
    sub_100 = sub_101;
  };
  if (controller_c_ar1) {
    v_678 = sub_100;
  } else {
    v_678 = sub_89;
  };
  if (controller_c_ar2) {
    sub_99 = v_678;
  } else {
    sub_99 = v_679;
  };
  if (controller_c_arm) {
    sub_98 = false;
  } else {
    sub_98 = sub_99;
  };
  if (controller_p1_arrived) {
    v_688 = sub_98;
    sub_79 = sub_80;
  } else {
    v_688 = sub_80;
    sub_79 = sub_98;
  };
  if (controller_ck_26_1) {
    sub_78 = v_688;
  } else {
    sub_78 = sub_79;
  };
  sub_111 = sub_77;
  sub_110 = sub_111;
  sub_109 = sub_110;
  if (controller_v_431) {
    v_674 = sub_95;
  } else {
    v_674 = sub_109;
  };
  if (controller_v_430) {
    sub_108 = sub_109;
  } else {
    sub_108 = sub_95;
  };
  if (controller_v_431) {
    v_673 = sub_108;
  } else {
    v_673 = sub_95;
  };
  if (controller_c_ar1) {
    v_675 = v_673;
  } else {
    v_675 = v_674;
  };
  if (controller_v_431) {
    v_671 = sub_95;
  } else {
    v_671 = sub_108;
  };
  if (controller_c_ar1) {
    v_672 = sub_95;
  } else {
    v_672 = v_671;
  };
  if (controller_c_ar2) {
    sub_107 = v_672;
  } else {
    sub_107 = v_675;
  };
  if (controller_p_arrived) {
    v_676 = sub_107;
    sub_106 = sub_69;
  } else {
    v_676 = sub_69;
    sub_106 = sub_107;
  };
  if (controller_ck_24_1) {
    sub_105 = v_676;
  } else {
    sub_105 = sub_106;
  };
  sub_104 = sub_105;
  if (controller_v_431) {
    v_669 = sub_84;
    v_668 = sub_70;
  } else {
    v_669 = sub_71;
    v_668 = sub_85;
  };
  if (controller_c_ar1) {
    v_670 = v_668;
  } else {
    v_670 = v_669;
  };
  if (controller_v_431) {
    v_666 = sub_84;
  } else {
    v_666 = sub_70;
  };
  if (controller_c_ar1) {
    v_667 = sub_100;
  } else {
    v_667 = v_666;
  };
  if (controller_c_ar2) {
    sub_113 = v_667;
  } else {
    sub_113 = v_670;
  };
  if (controller_c_arm) {
    sub_112 = sub_69;
  } else {
    sub_112 = sub_113;
  };
  if (controller_p1_arrived) {
    v_677 = sub_112;
    sub_103 = sub_104;
  } else {
    v_677 = sub_104;
    sub_103 = sub_112;
  };
  if (controller_ck_26_1) {
    sub_102 = v_677;
  } else {
    sub_102 = sub_103;
  };
  if (controller_c_jan) {
    v_697 = sub_78;
  } else {
    v_697 = sub_102;
  };
  if (controller_c_porta) {
    sub_62 = sub_63;
  } else {
    sub_62 = v_697;
  };
  if (controller_ar_recovered) {
    v_655 = false;
  } else {
    v_655 = sub_26;
  };
  if (controller_ar_failed) {
    sub_127 = sub_25;
  } else {
    sub_127 = false;
  };
  sub_126 = sub_127;
  if (controller_ck_34_1) {
    sub_125 = v_655;
  } else {
    sub_125 = sub_126;
  };
  sub_124 = sub_125;
  sub_123 = sub_124;
  if (controller_v_431) {
    v_659 = false;
  } else {
    v_659 = sub_123;
  };
  if (controller_v_430) {
    sub_122 = sub_123;
  } else {
    sub_122 = false;
  };
  if (controller_v_431) {
    v_658 = sub_122;
  } else {
    v_658 = false;
  };
  if (controller_c_ar1) {
    v_660 = v_658;
  } else {
    v_660 = v_659;
  };
  if (controller_v_431) {
    v_656 = false;
  } else {
    v_656 = sub_122;
  };
  if (controller_c_ar1) {
    v_657 = false;
  } else {
    v_657 = v_656;
  };
  if (controller_c_ar2) {
    sub_121 = v_657;
  } else {
    sub_121 = v_660;
  };
  if (controller_p_arrived) {
    v_661 = false;
    sub_120 = sub_121;
  } else {
    v_661 = sub_121;
    sub_120 = false;
  };
  if (controller_ck_24_1) {
    sub_119 = v_661;
  } else {
    sub_119 = sub_120;
  };
  sub_118 = sub_119;
  if (controller_p1_arrived) {
    v_662 = false;
    sub_117 = sub_118;
  } else {
    v_662 = sub_118;
    sub_117 = false;
  };
  if (controller_ck_26_1) {
    sub_116 = v_662;
  } else {
    sub_116 = sub_117;
  };
  if (controller_c_jan) {
    sub_115 = sub_49;
  } else {
    sub_115 = sub_116;
  };
  sub_134 = sub_95;
  sub_133 = sub_134;
  if (controller_p_arrived) {
    v_653 = sub_133;
    sub_132 = false;
  } else {
    v_653 = false;
    sub_132 = sub_133;
  };
  if (controller_ck_24_1) {
    sub_131 = v_653;
  } else {
    sub_131 = sub_132;
  };
  sub_130 = sub_131;
  if (controller_p1_arrived) {
    v_654 = sub_98;
    sub_129 = sub_130;
  } else {
    v_654 = sub_130;
    sub_129 = sub_98;
  };
  if (controller_ck_26_1) {
    sub_128 = v_654;
  } else {
    sub_128 = sub_129;
  };
  if (controller_p_arrived) {
    v_652 = sub_107;
    sub_138 = sub_121;
  } else {
    v_652 = sub_121;
    sub_138 = sub_107;
  };
  if (controller_ck_24_1) {
    sub_137 = v_652;
  } else {
    sub_137 = sub_138;
  };
  sub_136 = sub_137;
  if (controller_p1_arrived) {
    v_663 = sub_112;
    sub_135 = sub_136;
  } else {
    v_663 = sub_136;
    sub_135 = sub_112;
  };
  if (controller_ck_26_1) {
    v_664 = v_663;
  } else {
    v_664 = sub_135;
  };
  if (controller_c_jan) {
    v_665 = sub_128;
  } else {
    v_665 = v_664;
  };
  if (controller_c_porta) {
    sub_114 = sub_115;
  } else {
    sub_114 = v_665;
  };
  if (controller_shift_turno) {
    v_698 = sub_114;
    sub_61 = sub_62;
  } else {
    v_698 = sub_62;
    sub_61 = sub_114;
  };
  if (controller_ck_1) {
    sub_60 = v_698;
  } else {
    sub_60 = sub_61;
  };
  if (controller_c_jan) {
    sub_142 = false;
  } else {
    sub_142 = sub_116;
  };
  sub_152 = sub_26;
  sub_151 = sub_152;
  sub_150 = sub_151;
  if (controller_v_431) {
    v_646 = sub_33;
  } else {
    v_646 = sub_150;
  };
  if (controller_v_430) {
    sub_149 = sub_150;
  } else {
    sub_149 = sub_33;
  };
  if (controller_v_431) {
    v_645 = sub_149;
  } else {
    v_645 = sub_33;
  };
  if (controller_c_ar1) {
    v_647 = v_645;
  } else {
    v_647 = v_646;
  };
  if (controller_v_431) {
    v_643 = sub_33;
  } else {
    v_643 = sub_149;
  };
  if (controller_c_ar1) {
    v_644 = sub_33;
  } else {
    v_644 = v_643;
  };
  if (controller_c_ar2) {
    sub_148 = v_644;
  } else {
    sub_148 = v_647;
  };
  if (controller_p_arrived) {
    v_648 = sub_148;
    sub_147 = sub_121;
  } else {
    v_648 = sub_121;
    sub_147 = sub_148;
  };
  if (controller_ck_24_1) {
    sub_146 = v_648;
  } else {
    sub_146 = sub_147;
  };
  sub_145 = sub_146;
  sub_154 = sub_121;
  if (controller_v_431) {
    v_641 = sub_20;
    v_640 = sub_122;
  } else {
    v_641 = sub_123;
    v_640 = sub_21;
  };
  if (controller_c_ar1) {
    v_642 = v_640;
  } else {
    v_642 = v_641;
  };
  if (controller_v_431) {
    v_638 = sub_20;
  } else {
    v_638 = sub_122;
  };
  if (controller_c_ar1) {
    v_639 = sub_38;
  } else {
    v_639 = v_638;
  };
  if (controller_c_ar2) {
    sub_155 = v_639;
  } else {
    sub_155 = v_642;
  };
  if (controller_c_arm) {
    sub_153 = sub_154;
  } else {
    sub_153 = sub_155;
  };
  if (controller_p1_arrived) {
    v_649 = sub_153;
    sub_144 = sub_145;
  } else {
    v_649 = sub_145;
    sub_144 = sub_153;
  };
  if (controller_ck_26_1) {
    sub_143 = v_649;
  } else {
    sub_143 = sub_144;
  };
  if (controller_c_jan) {
    v_650 = sub_14;
  } else {
    v_650 = sub_143;
  };
  if (controller_c_porta) {
    sub_141 = sub_142;
  } else {
    sub_141 = v_650;
  };
  if (controller_shift_turno) {
    v_651 = sub_114;
    sub_140 = sub_141;
  } else {
    v_651 = sub_141;
    sub_140 = sub_114;
  };
  if (controller_ck_1) {
    sub_139 = v_651;
  } else {
    sub_139 = sub_140;
  };
  if (controller_l_failed) {
    sub_59 = sub_60;
  } else {
    sub_59 = sub_139;
  };
  if (controller_ck_38_1) {
    v_700 = sub_60;
    v_699 = sub_139;
  } else {
    v_700 = sub_59;
    v_699 = sub_59;
  };
  if (controller_l_recovered) {
    sub_58 = v_699;
  } else {
    sub_58 = v_700;
  };
  sub_57 = sub_58;
  if (controller_v_401) {
    sub_6 = sub_57;
  } else {
    sub_6 = sub_7;
  };
  if (controller_c_porta) {
    sub_162 = sub_115;
  } else {
    sub_162 = sub_142;
  };
  if (controller_shift_turno) {
    v_635 = sub_162;
    sub_161 = false;
  } else {
    v_635 = false;
    sub_161 = sub_162;
  };
  if (controller_ck_1) {
    sub_160 = v_635;
  } else {
    sub_160 = sub_161;
  };
  if (controller_p_arrived) {
    v_630 = sub_45;
    sub_169 = sub_121;
  } else {
    v_630 = sub_121;
    sub_169 = sub_45;
  };
  if (controller_ck_24_1) {
    sub_168 = v_630;
  } else {
    sub_168 = sub_169;
  };
  sub_167 = sub_168;
  if (controller_p1_arrived) {
    v_631 = sub_36;
    sub_166 = sub_167;
  } else {
    v_631 = sub_167;
    sub_166 = sub_36;
  };
  if (controller_ck_26_1) {
    v_632 = v_631;
  } else {
    v_632 = sub_166;
  };
  if (controller_c_jan) {
    v_633 = sub_40;
  } else {
    v_633 = v_632;
  };
  if (controller_c_porta) {
    sub_165 = sub_115;
  } else {
    sub_165 = v_633;
  };
  if (controller_shift_turno) {
    v_634 = sub_165;
    sub_164 = sub_141;
  } else {
    v_634 = sub_141;
    sub_164 = sub_165;
  };
  if (controller_ck_1) {
    sub_163 = v_634;
  } else {
    sub_163 = sub_164;
  };
  if (controller_l_failed) {
    sub_159 = sub_160;
  } else {
    sub_159 = sub_163;
  };
  if (controller_ck_38_1) {
    v_637 = sub_160;
    v_636 = sub_163;
  } else {
    v_637 = sub_159;
    v_636 = sub_159;
  };
  if (controller_l_recovered) {
    sub_158 = v_636;
  } else {
    sub_158 = v_637;
  };
  sub_157 = sub_158;
  sub_156 = sub_157;
  if (controller_v_400) {
    sub_5 = sub_156;
  } else {
    sub_5 = sub_6;
  };
  if (controller_c_jan) {
    v_626 = sub_40;
  } else {
    v_626 = sub_143;
  };
  if (controller_c_porta) {
    sub_177 = sub_115;
  } else {
    sub_177 = v_626;
  };
  if (controller_shift_turno) {
    v_627 = sub_177;
    sub_176 = sub_141;
  } else {
    v_627 = sub_141;
    sub_176 = sub_177;
  };
  if (controller_ck_1) {
    sub_175 = v_627;
  } else {
    sub_175 = sub_176;
  };
  if (controller_ar_recovered) {
    v_615 = sub_77;
  } else {
    v_615 = sub_26;
  };
  if (controller_ar_failed) {
    sub_191 = sub_25;
  } else {
    sub_191 = sub_76;
  };
  sub_190 = sub_191;
  if (controller_ck_34_1) {
    sub_189 = v_615;
  } else {
    sub_189 = sub_190;
  };
  sub_188 = sub_189;
  sub_187 = sub_188;
  if (controller_v_431) {
    v_619 = sub_95;
  } else {
    v_619 = sub_187;
  };
  if (controller_v_430) {
    sub_186 = sub_187;
  } else {
    sub_186 = sub_95;
  };
  if (controller_v_431) {
    v_618 = sub_186;
  } else {
    v_618 = sub_95;
  };
  if (controller_c_ar1) {
    v_620 = v_618;
  } else {
    v_620 = v_619;
  };
  if (controller_v_431) {
    v_616 = sub_95;
  } else {
    v_616 = sub_186;
  };
  if (controller_c_ar1) {
    v_617 = sub_95;
  } else {
    v_617 = v_616;
  };
  if (controller_c_ar2) {
    sub_185 = v_617;
  } else {
    sub_185 = v_620;
  };
  if (controller_p_arrived) {
    v_621 = sub_185;
    sub_184 = sub_121;
  } else {
    v_621 = sub_121;
    sub_184 = sub_185;
  };
  if (controller_ck_24_1) {
    sub_183 = v_621;
  } else {
    sub_183 = sub_184;
  };
  sub_182 = sub_183;
  if (controller_v_431) {
    v_613 = sub_84;
    v_612 = sub_122;
  } else {
    v_613 = sub_123;
    v_612 = sub_85;
  };
  if (controller_c_ar1) {
    v_614 = v_612;
  } else {
    v_614 = v_613;
  };
  if (controller_v_431) {
    v_610 = sub_84;
  } else {
    v_610 = sub_122;
  };
  if (controller_c_ar1) {
    v_611 = sub_100;
  } else {
    v_611 = v_610;
  };
  if (controller_c_ar2) {
    sub_193 = v_611;
  } else {
    sub_193 = v_614;
  };
  if (controller_c_arm) {
    sub_192 = sub_154;
  } else {
    sub_192 = sub_193;
  };
  if (controller_p1_arrived) {
    v_622 = sub_192;
    sub_181 = sub_182;
  } else {
    v_622 = sub_182;
    sub_181 = sub_192;
  };
  if (controller_ck_26_1) {
    v_623 = v_622;
  } else {
    v_623 = sub_181;
  };
  if (controller_c_jan) {
    v_624 = sub_128;
  } else {
    v_624 = v_623;
  };
  if (controller_c_porta) {
    sub_180 = sub_115;
  } else {
    sub_180 = v_624;
  };
  if (controller_shift_turno) {
    v_625 = sub_180;
    sub_179 = sub_141;
  } else {
    v_625 = sub_141;
    sub_179 = sub_180;
  };
  if (controller_ck_1) {
    sub_178 = v_625;
  } else {
    sub_178 = sub_179;
  };
  if (controller_l_failed) {
    sub_174 = sub_175;
  } else {
    sub_174 = sub_178;
  };
  if (controller_ck_38_1) {
    v_629 = sub_175;
    v_628 = sub_178;
  } else {
    v_629 = sub_174;
    v_628 = sub_174;
  };
  if (controller_l_recovered) {
    sub_173 = v_628;
  } else {
    sub_173 = v_629;
  };
  sub_172 = sub_173;
  sub_171 = sub_172;
  if (controller_v_401) {
    sub_170 = sub_156;
  } else {
    sub_170 = sub_171;
  };
  if (controller_v_400) {
    v_721 = sub_6;
  } else {
    v_721 = sub_170;
  };
  if (controller_v_399) {
    sub_4 = v_721;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  sub_2 = sub_3;
  if (controller_c_jan) {
    v_605 = sub_78;
  } else {
    v_605 = sub_128;
  };
  if (controller_c_porta) {
    sub_204 = false;
  } else {
    sub_204 = v_605;
  };
  if (controller_p_arrived) {
    v_603 = false;
    sub_211 = sub_83;
  } else {
    v_603 = sub_83;
    sub_211 = false;
  };
  if (controller_ck_24_1) {
    sub_210 = v_603;
  } else {
    sub_210 = sub_211;
  };
  sub_209 = sub_210;
  if (controller_p1_arrived) {
    v_604 = false;
    sub_208 = sub_209;
  } else {
    v_604 = sub_209;
    sub_208 = false;
  };
  if (controller_ck_26_1) {
    sub_207 = v_604;
  } else {
    sub_207 = sub_208;
  };
  if (controller_c_jan) {
    sub_206 = sub_207;
  } else {
    sub_206 = false;
  };
  if (controller_c_porta) {
    sub_205 = sub_206;
  } else {
    sub_205 = sub_128;
  };
  if (controller_shift_turno) {
    v_606 = sub_205;
    sub_203 = sub_204;
  } else {
    v_606 = sub_204;
    sub_203 = sub_205;
  };
  if (controller_ck_1) {
    sub_202 = v_606;
  } else {
    sub_202 = sub_203;
  };
  if (controller_c_porta) {
    sub_214 = sub_206;
  } else {
    sub_214 = false;
  };
  if (controller_shift_turno) {
    v_602 = sub_214;
    sub_213 = sub_204;
  } else {
    v_602 = sub_204;
    sub_213 = sub_214;
  };
  if (controller_ck_1) {
    sub_212 = v_602;
  } else {
    sub_212 = sub_213;
  };
  if (controller_l_failed) {
    sub_201 = sub_202;
  } else {
    sub_201 = sub_212;
  };
  if (controller_ck_38_1) {
    v_608 = sub_202;
    v_607 = sub_212;
  } else {
    v_608 = sub_201;
    v_607 = sub_201;
  };
  if (controller_l_recovered) {
    sub_200 = v_607;
  } else {
    sub_200 = v_608;
  };
  sub_199 = sub_200;
  sub_198 = sub_199;
  if (controller_c_jan) {
    v_600 = sub_128;
    sub_221 = sub_207;
  } else {
    v_600 = sub_102;
    sub_221 = sub_64;
  };
  if (controller_c_porta) {
    sub_220 = sub_221;
  } else {
    sub_220 = v_600;
  };
  if (controller_shift_turno) {
    v_601 = sub_220;
    sub_219 = sub_62;
  } else {
    v_601 = sub_62;
    sub_219 = sub_220;
  };
  if (controller_ck_1) {
    sub_218 = v_601;
  } else {
    sub_218 = sub_219;
  };
  sub_217 = sub_218;
  sub_216 = sub_217;
  sub_215 = sub_216;
  if (controller_v_401) {
    sub_197 = sub_215;
  } else {
    sub_197 = sub_198;
  };
  if (controller_c_porta) {
    sub_228 = sub_221;
  } else {
    sub_228 = sub_63;
  };
  if (controller_shift_turno) {
    v_597 = sub_228;
    sub_227 = false;
  } else {
    v_597 = false;
    sub_227 = sub_228;
  };
  if (controller_ck_1) {
    sub_226 = v_597;
  } else {
    sub_226 = sub_227;
  };
  if (controller_p_arrived) {
    v_592 = sub_133;
    sub_235 = sub_69;
  } else {
    v_592 = sub_69;
    sub_235 = sub_133;
  };
  if (controller_ck_24_1) {
    sub_234 = v_592;
  } else {
    sub_234 = sub_235;
  };
  sub_233 = sub_234;
  if (controller_p1_arrived) {
    v_593 = sub_98;
    sub_232 = sub_233;
  } else {
    v_593 = sub_233;
    sub_232 = sub_98;
  };
  if (controller_ck_26_1) {
    v_594 = v_593;
  } else {
    v_594 = sub_232;
  };
  if (controller_c_jan) {
    v_595 = sub_128;
  } else {
    v_595 = v_594;
  };
  if (controller_c_porta) {
    sub_231 = sub_221;
  } else {
    sub_231 = v_595;
  };
  if (controller_shift_turno) {
    v_596 = sub_231;
    sub_230 = sub_62;
  } else {
    v_596 = sub_62;
    sub_230 = sub_231;
  };
  if (controller_ck_1) {
    sub_229 = v_596;
  } else {
    sub_229 = sub_230;
  };
  if (controller_l_failed) {
    sub_225 = sub_226;
  } else {
    sub_225 = sub_229;
  };
  if (controller_ck_38_1) {
    v_599 = sub_226;
    v_598 = sub_229;
  } else {
    v_599 = sub_225;
    v_598 = sub_225;
  };
  if (controller_l_recovered) {
    sub_224 = v_598;
  } else {
    sub_224 = v_599;
  };
  sub_223 = sub_224;
  sub_222 = sub_223;
  if (controller_v_400) {
    sub_196 = sub_222;
  } else {
    sub_196 = sub_197;
  };
  if (controller_p_arrived) {
    v_584 = sub_148;
    sub_246 = sub_69;
  } else {
    v_584 = sub_69;
    sub_246 = sub_148;
  };
  if (controller_ck_24_1) {
    sub_245 = v_584;
  } else {
    sub_245 = sub_246;
  };
  sub_244 = sub_245;
  if (controller_p1_arrived) {
    v_585 = sub_153;
    sub_243 = sub_244;
  } else {
    v_585 = sub_244;
    sub_243 = sub_153;
  };
  if (controller_ck_26_1) {
    v_586 = v_585;
  } else {
    v_586 = sub_243;
  };
  if (controller_c_jan) {
    v_587 = sub_40;
  } else {
    v_587 = v_586;
  };
  if (controller_c_porta) {
    sub_242 = sub_221;
  } else {
    sub_242 = v_587;
  };
  if (controller_shift_turno) {
    v_588 = sub_242;
    sub_241 = sub_141;
  } else {
    v_588 = sub_141;
    sub_241 = sub_242;
  };
  if (controller_ck_1) {
    sub_240 = v_588;
  } else {
    sub_240 = sub_241;
  };
  if (controller_p_arrived) {
    v = sub_185;
    sub_253 = sub_69;
  } else {
    v = sub_69;
    sub_253 = sub_185;
  };
  if (controller_ck_24_1) {
    sub_252 = v;
  } else {
    sub_252 = sub_253;
  };
  sub_251 = sub_252;
  if (controller_p1_arrived) {
    v_580 = sub_192;
    sub_250 = sub_251;
  } else {
    v_580 = sub_251;
    sub_250 = sub_192;
  };
  if (controller_ck_26_1) {
    v_581 = v_580;
  } else {
    v_581 = sub_250;
  };
  if (controller_c_jan) {
    v_582 = sub_128;
  } else {
    v_582 = v_581;
  };
  if (controller_c_porta) {
    sub_249 = sub_221;
  } else {
    sub_249 = v_582;
  };
  if (controller_shift_turno) {
    v_583 = sub_249;
    sub_248 = sub_62;
  } else {
    v_583 = sub_62;
    sub_248 = sub_249;
  };
  if (controller_ck_1) {
    sub_247 = v_583;
  } else {
    sub_247 = sub_248;
  };
  if (controller_l_failed) {
    sub_239 = sub_240;
  } else {
    sub_239 = sub_247;
  };
  if (controller_ck_38_1) {
    v_590 = sub_240;
    v_589 = sub_247;
  } else {
    v_590 = sub_239;
    v_589 = sub_239;
  };
  if (controller_l_recovered) {
    v_591 = v_589;
  } else {
    v_591 = v_590;
  };
  if (controller_down) {
    sub_238 = sub_216;
  } else {
    sub_238 = v_591;
  };
  sub_237 = sub_238;
  if (controller_v_401) {
    sub_236 = sub_222;
  } else {
    sub_236 = sub_237;
  };
  if (controller_v_400) {
    v_609 = sub_197;
  } else {
    v_609 = sub_236;
  };
  if (controller_v_399) {
    sub_195 = v_609;
  } else {
    sub_195 = sub_196;
  };
  sub_194 = sub_195;
  if (p_controller_cl1) {
    sub_1 = sub_194;
  } else {
    sub_1 = sub_2;
  };
  sub_0 = sub_1;
  _out->controller_cl1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_policy_step(
  int controller_up, int controller_down, int controller_shift_turno,
  int controller_abre_porta, int controller_p_arrived,
  int controller_p1_arrived, int controller_ar_failed,
  int controller_ar_recovered, int controller_l_failed,
  int controller_l_recovered, int controller_ck_1, int controller_pnr_13,
  int controller_ck_18_1, int controller_pnr_12, int controller_ck_20_1,
  int controller_pnr_11, int controller_ck_22_1, int controller_pnr_10,
  int controller_ck_24_1, int controller_pnr_9, int controller_ck_26_1,
  int controller_pnr_8, int controller_ck_28_1, int controller_pnr_7,
  int controller_ck_30_1, int controller_pnr_6, int controller_v_431,
  int controller_v_430, int controller_pnr_5, int controller_ck_34_1,
  int controller_pnr_4, int controller_v_401, int controller_v_400,
  int controller_v_399, int controller_pnr_3, int controller_ck_38_1,
  int controller_pnr, int p_controller_cdown, int p_controller_cup,
  int p_controller_cl2, int p_controller_cl1, int p_controller_c_policy,
  int p_controller_c_arm, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_luz2, int p_controller_c_luz1, int p_controller_c_jan,
  int p_controller_c_pc, int p_controller_c_rot, int p_controller_c_porta,
  int controller_c_arm, int controller_c_ar2, int controller_c_ar1,
  int controller_c_luz2, int controller_c_luz1, int controller_c_jan,
  int controller_c_pc, int controller_c_rot, int controller_c_porta,
  Controller_controller__controller_controller_controller_c_policy_out* _out) {
  
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
  sub_24 = false;
  if (controller_ar_failed) {
    sub_23 = false;
  } else {
    sub_23 = sub_24;
  };
  sub_22 = sub_23;
  sub_25 = sub_24;
  if (controller_ar_recovered) {
    v_813 = sub_25;
  } else {
    v_813 = false;
  };
  if (controller_ck_34_1) {
    sub_21 = v_813;
  } else {
    sub_21 = sub_22;
  };
  if (controller_c_rot) {
    v_814 = false;
  } else {
    v_814 = sub_21;
  };
  if (controller_c_pc) {
    sub_20 = false;
  } else {
    sub_20 = v_814;
  };
  if (controller_v_430) {
    sub_19 = sub_20;
  } else {
    sub_19 = false;
  };
  if (controller_v_431) {
    v_815 = false;
  } else {
    v_815 = sub_19;
  };
  if (controller_c_ar1) {
    v_816 = false;
  } else {
    v_816 = v_815;
  };
  if (controller_v_431) {
    sub_26 = sub_19;
    sub_27 = false;
  } else {
    sub_26 = false;
    sub_27 = sub_20;
  };
  if (controller_c_ar1) {
    v_817 = sub_26;
  } else {
    v_817 = sub_27;
  };
  if (controller_c_ar2) {
    sub_18 = v_816;
  } else {
    sub_18 = v_817;
  };
  sub_31 = sub_21;
  if (controller_c_pc) {
    sub_30 = false;
  } else {
    sub_30 = sub_31;
  };
  sub_32 = sub_31;
  if (controller_v_430) {
    sub_29 = sub_32;
  } else {
    sub_29 = sub_30;
  };
  if (controller_v_431) {
    v_811 = sub_32;
  } else {
    v_811 = sub_29;
  };
  if (controller_v_430) {
    sub_33 = sub_30;
  } else {
    sub_33 = sub_32;
  };
  if (controller_c_ar1) {
    v_812 = v_811;
  } else {
    v_812 = sub_33;
  };
  if (controller_v_431) {
    sub_34 = sub_33;
  } else {
    sub_34 = sub_30;
  };
  if (controller_c_ar2) {
    sub_28 = v_812;
  } else {
    sub_28 = sub_34;
  };
  if (controller_p_arrived) {
    v_818 = sub_28;
    sub_17 = sub_18;
  } else {
    v_818 = sub_18;
    sub_17 = sub_28;
  };
  if (controller_ck_24_1) {
    sub_16 = v_818;
  } else {
    sub_16 = sub_17;
  };
  sub_15 = sub_16;
  if (controller_c_ar1) {
    v_810 = sub_27;
  } else {
    v_810 = sub_26;
  };
  if (controller_v_430) {
    sub_38 = false;
  } else {
    sub_38 = sub_20;
  };
  if (controller_v_431) {
    sub_37 = false;
  } else {
    sub_37 = sub_38;
  };
  if (controller_c_ar1) {
    v_809 = sub_37;
  } else {
    v_809 = sub_26;
  };
  if (controller_c_ar2) {
    sub_36 = v_809;
  } else {
    sub_36 = v_810;
  };
  if (controller_c_arm) {
    sub_35 = false;
  } else {
    sub_35 = sub_36;
  };
  if (controller_p1_arrived) {
    v_819 = sub_35;
    sub_14 = sub_15;
  } else {
    v_819 = sub_15;
    sub_14 = sub_35;
  };
  if (controller_ck_26_1) {
    sub_13 = v_819;
  } else {
    sub_13 = sub_14;
  };
  sub_45 = sub_32;
  sub_44 = sub_45;
  if (controller_p_arrived) {
    v_807 = sub_44;
    sub_43 = false;
  } else {
    v_807 = false;
    sub_43 = sub_44;
  };
  if (controller_ck_24_1) {
    sub_42 = v_807;
  } else {
    sub_42 = sub_43;
  };
  sub_41 = sub_42;
  if (controller_p1_arrived) {
    v_808 = sub_35;
    sub_40 = sub_41;
  } else {
    v_808 = sub_41;
    sub_40 = sub_35;
  };
  if (controller_ck_26_1) {
    sub_39 = v_808;
  } else {
    sub_39 = sub_40;
  };
  if (controller_c_jan) {
    v_820 = sub_13;
  } else {
    v_820 = sub_39;
  };
  if (controller_c_porta) {
    sub_12 = false;
  } else {
    sub_12 = v_820;
  };
  if (controller_p_arrived) {
    v_805 = false;
    sub_52 = sub_18;
  } else {
    v_805 = sub_18;
    sub_52 = false;
  };
  if (controller_ck_24_1) {
    sub_51 = v_805;
  } else {
    sub_51 = sub_52;
  };
  sub_50 = sub_51;
  if (controller_p1_arrived) {
    v_806 = false;
    sub_49 = sub_50;
  } else {
    v_806 = sub_50;
    sub_49 = false;
  };
  if (controller_ck_26_1) {
    sub_48 = v_806;
  } else {
    sub_48 = sub_49;
  };
  if (controller_c_jan) {
    sub_47 = sub_48;
  } else {
    sub_47 = false;
  };
  if (controller_c_porta) {
    sub_46 = sub_47;
  } else {
    sub_46 = sub_39;
  };
  if (controller_shift_turno) {
    v_821 = sub_46;
    sub_11 = sub_12;
  } else {
    v_821 = sub_12;
    sub_11 = sub_46;
  };
  if (controller_ck_1) {
    sub_10 = v_821;
  } else {
    sub_10 = sub_11;
  };
  if (controller_c_porta) {
    sub_55 = sub_47;
  } else {
    sub_55 = false;
  };
  if (controller_shift_turno) {
    v_804 = sub_55;
    sub_54 = sub_12;
  } else {
    v_804 = sub_12;
    sub_54 = sub_55;
  };
  if (controller_ck_1) {
    sub_53 = v_804;
  } else {
    sub_53 = sub_54;
  };
  if (controller_l_failed) {
    sub_9 = sub_10;
  } else {
    sub_9 = sub_53;
  };
  if (controller_ck_38_1) {
    v_823 = sub_10;
    v_822 = sub_53;
  } else {
    v_823 = sub_9;
    v_822 = sub_9;
  };
  if (controller_l_recovered) {
    sub_8 = v_822;
  } else {
    sub_8 = v_823;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (controller_ar_recovered) {
    v_794 = false;
  } else {
    v_794 = sub_25;
  };
  if (controller_ar_failed) {
    sub_75 = sub_24;
  } else {
    sub_75 = false;
  };
  sub_74 = sub_75;
  if (controller_ck_34_1) {
    sub_73 = v_794;
  } else {
    sub_73 = sub_74;
  };
  sub_72 = sub_73;
  sub_71 = sub_72;
  if (controller_v_431) {
    v_798 = false;
  } else {
    v_798 = sub_71;
  };
  if (controller_v_430) {
    sub_70 = sub_71;
  } else {
    sub_70 = false;
  };
  if (controller_v_431) {
    v_797 = sub_70;
  } else {
    v_797 = false;
  };
  if (controller_c_ar1) {
    v_799 = v_797;
  } else {
    v_799 = v_798;
  };
  if (controller_v_431) {
    v_795 = false;
  } else {
    v_795 = sub_70;
  };
  if (controller_c_ar1) {
    v_796 = false;
  } else {
    v_796 = v_795;
  };
  if (controller_c_ar2) {
    sub_69 = v_796;
  } else {
    sub_69 = v_799;
  };
  if (controller_p_arrived) {
    v_800 = false;
    sub_68 = sub_69;
  } else {
    v_800 = sub_69;
    sub_68 = false;
  };
  if (controller_ck_24_1) {
    sub_67 = v_800;
  } else {
    sub_67 = sub_68;
  };
  sub_66 = sub_67;
  if (controller_p1_arrived) {
    v_801 = false;
    sub_65 = sub_66;
  } else {
    v_801 = sub_66;
    sub_65 = false;
  };
  if (controller_ck_26_1) {
    sub_64 = v_801;
  } else {
    sub_64 = sub_65;
  };
  if (controller_c_jan) {
    sub_63 = false;
  } else {
    sub_63 = sub_64;
  };
  sub_85 = sub_25;
  sub_84 = sub_85;
  sub_83 = sub_84;
  if (controller_v_431) {
    v_790 = sub_32;
  } else {
    v_790 = sub_83;
  };
  if (controller_v_430) {
    sub_82 = sub_83;
  } else {
    sub_82 = sub_32;
  };
  if (controller_v_431) {
    v_789 = sub_82;
  } else {
    v_789 = sub_32;
  };
  if (controller_c_ar1) {
    v_791 = v_789;
  } else {
    v_791 = v_790;
  };
  if (controller_v_431) {
    v_787 = sub_32;
  } else {
    v_787 = sub_82;
  };
  if (controller_c_ar1) {
    v_788 = sub_32;
  } else {
    v_788 = v_787;
  };
  if (controller_c_ar2) {
    sub_81 = v_788;
  } else {
    sub_81 = v_791;
  };
  if (controller_p_arrived) {
    v_792 = sub_81;
    sub_80 = sub_69;
  } else {
    v_792 = sub_69;
    sub_80 = sub_81;
  };
  if (controller_ck_24_1) {
    sub_79 = v_792;
  } else {
    sub_79 = sub_80;
  };
  sub_78 = sub_79;
  if (controller_v_431) {
    v_785 = sub_19;
    v_784 = sub_70;
  } else {
    v_785 = sub_71;
    v_784 = sub_20;
  };
  if (controller_c_ar1) {
    v_786 = v_784;
  } else {
    v_786 = v_785;
  };
  if (controller_v_431) {
    v_782 = sub_19;
  } else {
    v_782 = sub_70;
  };
  if (controller_c_ar1) {
    v_783 = sub_37;
  } else {
    v_783 = v_782;
  };
  if (controller_c_ar2) {
    sub_87 = v_783;
  } else {
    sub_87 = v_786;
  };
  if (controller_c_arm) {
    sub_86 = sub_69;
  } else {
    sub_86 = sub_87;
  };
  if (controller_p1_arrived) {
    v_793 = sub_86;
    sub_77 = sub_78;
  } else {
    v_793 = sub_78;
    sub_77 = sub_86;
  };
  if (controller_ck_26_1) {
    sub_76 = v_793;
  } else {
    sub_76 = sub_77;
  };
  if (controller_c_jan) {
    v_802 = sub_13;
  } else {
    v_802 = sub_76;
  };
  if (controller_c_porta) {
    sub_62 = sub_63;
  } else {
    sub_62 = v_802;
  };
  if (controller_c_jan) {
    v_781 = sub_39;
    sub_89 = sub_48;
  } else {
    v_781 = sub_76;
    sub_89 = sub_64;
  };
  if (controller_c_porta) {
    sub_88 = sub_89;
  } else {
    sub_88 = v_781;
  };
  if (controller_shift_turno) {
    v_803 = sub_88;
    sub_61 = sub_62;
  } else {
    v_803 = sub_62;
    sub_61 = sub_88;
  };
  if (controller_ck_1) {
    sub_60 = v_803;
  } else {
    sub_60 = sub_61;
  };
  sub_59 = sub_60;
  sub_58 = sub_59;
  sub_57 = sub_58;
  sub_56 = sub_57;
  if (controller_v_401) {
    sub_5 = sub_56;
  } else {
    sub_5 = sub_6;
  };
  if (controller_c_porta) {
    sub_96 = sub_89;
  } else {
    sub_96 = sub_63;
  };
  if (controller_shift_turno) {
    v_778 = sub_96;
    sub_95 = false;
  } else {
    v_778 = false;
    sub_95 = sub_96;
  };
  if (controller_ck_1) {
    sub_94 = v_778;
  } else {
    sub_94 = sub_95;
  };
  if (controller_p_arrived) {
    v_773 = sub_44;
    sub_103 = sub_69;
  } else {
    v_773 = sub_69;
    sub_103 = sub_44;
  };
  if (controller_ck_24_1) {
    sub_102 = v_773;
  } else {
    sub_102 = sub_103;
  };
  sub_101 = sub_102;
  if (controller_p1_arrived) {
    v_774 = sub_35;
    sub_100 = sub_101;
  } else {
    v_774 = sub_101;
    sub_100 = sub_35;
  };
  if (controller_ck_26_1) {
    v_775 = v_774;
  } else {
    v_775 = sub_100;
  };
  if (controller_c_jan) {
    v_776 = sub_39;
  } else {
    v_776 = v_775;
  };
  if (controller_c_porta) {
    sub_99 = sub_89;
  } else {
    sub_99 = v_776;
  };
  if (controller_shift_turno) {
    v_777 = sub_99;
    sub_98 = sub_62;
  } else {
    v_777 = sub_62;
    sub_98 = sub_99;
  };
  if (controller_ck_1) {
    sub_97 = v_777;
  } else {
    sub_97 = sub_98;
  };
  if (controller_l_failed) {
    sub_93 = sub_94;
  } else {
    sub_93 = sub_97;
  };
  if (controller_ck_38_1) {
    v_780 = sub_94;
    v_779 = sub_97;
  } else {
    v_780 = sub_93;
    v_779 = sub_93;
  };
  if (controller_l_recovered) {
    sub_92 = v_779;
  } else {
    sub_92 = v_780;
  };
  sub_91 = sub_92;
  sub_90 = sub_91;
  if (controller_v_400) {
    sub_4 = sub_90;
  } else {
    sub_4 = sub_5;
  };
  if (controller_v_401) {
    sub_104 = sub_90;
  } else {
    sub_104 = sub_56;
  };
  if (controller_v_400) {
    v_824 = sub_5;
  } else {
    v_824 = sub_104;
  };
  if (controller_v_399) {
    sub_3 = v_824;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  sub_1 = sub_2;
  sub_127 = true;
  if (controller_ar_failed) {
    sub_126 = false;
  } else {
    sub_126 = sub_127;
  };
  sub_125 = sub_126;
  sub_128 = sub_127;
  if (controller_ar_recovered) {
    v_761 = sub_128;
  } else {
    v_761 = false;
  };
  if (controller_ck_34_1) {
    sub_124 = v_761;
  } else {
    sub_124 = sub_125;
  };
  if (controller_c_rot) {
    v_762 = false;
  } else {
    v_762 = sub_124;
  };
  if (controller_c_pc) {
    sub_123 = false;
  } else {
    sub_123 = v_762;
  };
  if (controller_v_430) {
    sub_122 = sub_123;
  } else {
    sub_122 = false;
  };
  if (controller_v_431) {
    v_763 = false;
  } else {
    v_763 = sub_122;
  };
  if (controller_c_ar1) {
    v_764 = false;
  } else {
    v_764 = v_763;
  };
  if (controller_v_431) {
    sub_129 = sub_122;
    sub_130 = false;
  } else {
    sub_129 = false;
    sub_130 = sub_123;
  };
  if (controller_c_ar1) {
    v_765 = sub_129;
  } else {
    v_765 = sub_130;
  };
  if (controller_c_ar2) {
    sub_121 = v_764;
  } else {
    sub_121 = v_765;
  };
  sub_134 = sub_124;
  if (controller_c_pc) {
    sub_133 = false;
  } else {
    sub_133 = sub_134;
  };
  sub_135 = sub_134;
  if (controller_v_430) {
    sub_132 = sub_135;
  } else {
    sub_132 = sub_133;
  };
  if (controller_v_431) {
    v_759 = sub_135;
  } else {
    v_759 = sub_132;
  };
  if (controller_v_430) {
    sub_136 = sub_133;
  } else {
    sub_136 = sub_135;
  };
  if (controller_c_ar1) {
    v_760 = v_759;
  } else {
    v_760 = sub_136;
  };
  if (controller_v_431) {
    sub_137 = sub_136;
  } else {
    sub_137 = sub_133;
  };
  if (controller_c_ar2) {
    sub_131 = v_760;
  } else {
    sub_131 = sub_137;
  };
  if (controller_p_arrived) {
    v_766 = sub_131;
    sub_120 = sub_121;
  } else {
    v_766 = sub_121;
    sub_120 = sub_131;
  };
  if (controller_ck_24_1) {
    sub_119 = v_766;
  } else {
    sub_119 = sub_120;
  };
  sub_118 = sub_119;
  if (controller_c_ar1) {
    v_758 = sub_130;
  } else {
    v_758 = sub_129;
  };
  if (controller_v_430) {
    sub_141 = false;
  } else {
    sub_141 = sub_123;
  };
  if (controller_v_431) {
    sub_140 = false;
  } else {
    sub_140 = sub_141;
  };
  if (controller_c_ar1) {
    v_757 = sub_140;
  } else {
    v_757 = sub_129;
  };
  if (controller_c_ar2) {
    sub_139 = v_757;
  } else {
    sub_139 = v_758;
  };
  if (controller_c_arm) {
    sub_138 = false;
  } else {
    sub_138 = sub_139;
  };
  if (controller_p1_arrived) {
    v_767 = sub_138;
    sub_117 = sub_118;
  } else {
    v_767 = sub_118;
    sub_117 = sub_138;
  };
  if (controller_ck_26_1) {
    sub_116 = v_767;
  } else {
    sub_116 = sub_117;
  };
  sub_148 = sub_135;
  sub_147 = sub_148;
  if (controller_p_arrived) {
    v_755 = sub_147;
    sub_146 = false;
  } else {
    v_755 = false;
    sub_146 = sub_147;
  };
  if (controller_ck_24_1) {
    sub_145 = v_755;
  } else {
    sub_145 = sub_146;
  };
  sub_144 = sub_145;
  if (controller_p1_arrived) {
    v_756 = sub_138;
    sub_143 = sub_144;
  } else {
    v_756 = sub_144;
    sub_143 = sub_138;
  };
  if (controller_ck_26_1) {
    sub_142 = v_756;
  } else {
    sub_142 = sub_143;
  };
  if (controller_c_jan) {
    v_768 = sub_116;
  } else {
    v_768 = sub_142;
  };
  if (controller_c_porta) {
    sub_115 = false;
  } else {
    sub_115 = v_768;
  };
  if (controller_p_arrived) {
    v_753 = false;
    sub_155 = sub_121;
  } else {
    v_753 = sub_121;
    sub_155 = false;
  };
  if (controller_ck_24_1) {
    sub_154 = v_753;
  } else {
    sub_154 = sub_155;
  };
  sub_153 = sub_154;
  if (controller_p1_arrived) {
    v_754 = false;
    sub_152 = sub_153;
  } else {
    v_754 = sub_153;
    sub_152 = false;
  };
  if (controller_ck_26_1) {
    sub_151 = v_754;
  } else {
    sub_151 = sub_152;
  };
  if (controller_c_jan) {
    sub_150 = sub_151;
  } else {
    sub_150 = false;
  };
  if (controller_c_porta) {
    sub_149 = sub_150;
  } else {
    sub_149 = sub_142;
  };
  if (controller_shift_turno) {
    v_769 = sub_149;
    sub_114 = sub_115;
  } else {
    v_769 = sub_115;
    sub_114 = sub_149;
  };
  if (controller_ck_1) {
    sub_113 = v_769;
  } else {
    sub_113 = sub_114;
  };
  if (controller_c_porta) {
    sub_158 = sub_150;
  } else {
    sub_158 = false;
  };
  if (controller_shift_turno) {
    v_752 = sub_158;
    sub_157 = sub_115;
  } else {
    v_752 = sub_115;
    sub_157 = sub_158;
  };
  if (controller_ck_1) {
    sub_156 = v_752;
  } else {
    sub_156 = sub_157;
  };
  if (controller_l_failed) {
    sub_112 = sub_113;
  } else {
    sub_112 = sub_156;
  };
  if (controller_ck_38_1) {
    v_771 = sub_113;
    v_770 = sub_156;
  } else {
    v_771 = sub_112;
    v_770 = sub_112;
  };
  if (controller_l_recovered) {
    sub_111 = v_770;
  } else {
    sub_111 = v_771;
  };
  sub_110 = sub_111;
  sub_109 = sub_110;
  if (controller_ar_recovered) {
    v_742 = false;
  } else {
    v_742 = sub_128;
  };
  if (controller_ar_failed) {
    sub_178 = sub_127;
  } else {
    sub_178 = false;
  };
  sub_177 = sub_178;
  if (controller_ck_34_1) {
    sub_176 = v_742;
  } else {
    sub_176 = sub_177;
  };
  sub_175 = sub_176;
  sub_174 = sub_175;
  if (controller_v_431) {
    v_746 = false;
  } else {
    v_746 = sub_174;
  };
  if (controller_v_430) {
    sub_173 = sub_174;
  } else {
    sub_173 = false;
  };
  if (controller_v_431) {
    v_745 = sub_173;
  } else {
    v_745 = false;
  };
  if (controller_c_ar1) {
    v_747 = v_745;
  } else {
    v_747 = v_746;
  };
  if (controller_v_431) {
    v_743 = false;
  } else {
    v_743 = sub_173;
  };
  if (controller_c_ar1) {
    v_744 = false;
  } else {
    v_744 = v_743;
  };
  if (controller_c_ar2) {
    sub_172 = v_744;
  } else {
    sub_172 = v_747;
  };
  if (controller_p_arrived) {
    v_748 = false;
    sub_171 = sub_172;
  } else {
    v_748 = sub_172;
    sub_171 = false;
  };
  if (controller_ck_24_1) {
    sub_170 = v_748;
  } else {
    sub_170 = sub_171;
  };
  sub_169 = sub_170;
  if (controller_p1_arrived) {
    v_749 = false;
    sub_168 = sub_169;
  } else {
    v_749 = sub_169;
    sub_168 = false;
  };
  if (controller_ck_26_1) {
    sub_167 = v_749;
  } else {
    sub_167 = sub_168;
  };
  if (controller_c_jan) {
    sub_166 = false;
  } else {
    sub_166 = sub_167;
  };
  sub_188 = sub_128;
  sub_187 = sub_188;
  sub_186 = sub_187;
  if (controller_v_431) {
    v_738 = sub_135;
  } else {
    v_738 = sub_186;
  };
  if (controller_v_430) {
    sub_185 = sub_186;
  } else {
    sub_185 = sub_135;
  };
  if (controller_v_431) {
    v_737 = sub_185;
  } else {
    v_737 = sub_135;
  };
  if (controller_c_ar1) {
    v_739 = v_737;
  } else {
    v_739 = v_738;
  };
  if (controller_v_431) {
    v_735 = sub_135;
  } else {
    v_735 = sub_185;
  };
  if (controller_c_ar1) {
    v_736 = sub_135;
  } else {
    v_736 = v_735;
  };
  if (controller_c_ar2) {
    sub_184 = v_736;
  } else {
    sub_184 = v_739;
  };
  if (controller_p_arrived) {
    v_740 = sub_184;
    sub_183 = sub_172;
  } else {
    v_740 = sub_172;
    sub_183 = sub_184;
  };
  if (controller_ck_24_1) {
    sub_182 = v_740;
  } else {
    sub_182 = sub_183;
  };
  sub_181 = sub_182;
  if (controller_v_431) {
    v_733 = sub_122;
    v_732 = sub_173;
  } else {
    v_733 = sub_174;
    v_732 = sub_123;
  };
  if (controller_c_ar1) {
    v_734 = v_732;
  } else {
    v_734 = v_733;
  };
  if (controller_v_431) {
    v_730 = sub_122;
  } else {
    v_730 = sub_173;
  };
  if (controller_c_ar1) {
    v_731 = sub_140;
  } else {
    v_731 = v_730;
  };
  if (controller_c_ar2) {
    sub_190 = v_731;
  } else {
    sub_190 = v_734;
  };
  if (controller_c_arm) {
    sub_189 = sub_172;
  } else {
    sub_189 = sub_190;
  };
  if (controller_p1_arrived) {
    v_741 = sub_189;
    sub_180 = sub_181;
  } else {
    v_741 = sub_181;
    sub_180 = sub_189;
  };
  if (controller_ck_26_1) {
    sub_179 = v_741;
  } else {
    sub_179 = sub_180;
  };
  if (controller_c_jan) {
    v_750 = sub_116;
  } else {
    v_750 = sub_179;
  };
  if (controller_c_porta) {
    sub_165 = sub_166;
  } else {
    sub_165 = v_750;
  };
  if (controller_c_jan) {
    v_729 = sub_142;
    sub_192 = sub_151;
  } else {
    v_729 = sub_179;
    sub_192 = sub_167;
  };
  if (controller_c_porta) {
    sub_191 = sub_192;
  } else {
    sub_191 = v_729;
  };
  if (controller_shift_turno) {
    v_751 = sub_191;
    sub_164 = sub_165;
  } else {
    v_751 = sub_165;
    sub_164 = sub_191;
  };
  if (controller_ck_1) {
    sub_163 = v_751;
  } else {
    sub_163 = sub_164;
  };
  sub_162 = sub_163;
  sub_161 = sub_162;
  sub_160 = sub_161;
  sub_159 = sub_160;
  if (controller_v_401) {
    sub_108 = sub_159;
  } else {
    sub_108 = sub_109;
  };
  if (controller_c_porta) {
    sub_199 = sub_192;
  } else {
    sub_199 = sub_166;
  };
  if (controller_shift_turno) {
    v_726 = sub_199;
    sub_198 = false;
  } else {
    v_726 = false;
    sub_198 = sub_199;
  };
  if (controller_ck_1) {
    sub_197 = v_726;
  } else {
    sub_197 = sub_198;
  };
  if (controller_p_arrived) {
    v = sub_147;
    sub_206 = sub_172;
  } else {
    v = sub_172;
    sub_206 = sub_147;
  };
  if (controller_ck_24_1) {
    sub_205 = v;
  } else {
    sub_205 = sub_206;
  };
  sub_204 = sub_205;
  if (controller_p1_arrived) {
    v_722 = sub_138;
    sub_203 = sub_204;
  } else {
    v_722 = sub_204;
    sub_203 = sub_138;
  };
  if (controller_ck_26_1) {
    v_723 = v_722;
  } else {
    v_723 = sub_203;
  };
  if (controller_c_jan) {
    v_724 = sub_142;
  } else {
    v_724 = v_723;
  };
  if (controller_c_porta) {
    sub_202 = sub_192;
  } else {
    sub_202 = v_724;
  };
  if (controller_shift_turno) {
    v_725 = sub_202;
    sub_201 = sub_165;
  } else {
    v_725 = sub_165;
    sub_201 = sub_202;
  };
  if (controller_ck_1) {
    sub_200 = v_725;
  } else {
    sub_200 = sub_201;
  };
  if (controller_l_failed) {
    sub_196 = sub_197;
  } else {
    sub_196 = sub_200;
  };
  if (controller_ck_38_1) {
    v_728 = sub_197;
    v_727 = sub_200;
  } else {
    v_728 = sub_196;
    v_727 = sub_196;
  };
  if (controller_l_recovered) {
    sub_195 = v_727;
  } else {
    sub_195 = v_728;
  };
  sub_194 = sub_195;
  sub_193 = sub_194;
  if (controller_v_400) {
    sub_107 = sub_193;
  } else {
    sub_107 = sub_108;
  };
  if (controller_v_401) {
    sub_207 = sub_193;
  } else {
    sub_207 = sub_159;
  };
  if (controller_v_400) {
    v_772 = sub_108;
  } else {
    v_772 = sub_207;
  };
  if (controller_v_399) {
    sub_106 = v_772;
  } else {
    sub_106 = sub_107;
  };
  sub_105 = sub_106;
  if (p_controller_c_policy) {
    sub_0 = sub_105;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_policy = sub_0;;
}

void Controller_controller__controller_controller_controller_c_arm_step(
  int controller_up, int controller_down, int controller_shift_turno,
  int controller_abre_porta, int controller_p_arrived,
  int controller_p1_arrived, int controller_ar_failed,
  int controller_ar_recovered, int controller_l_failed,
  int controller_l_recovered, int controller_ck_1, int controller_pnr_13,
  int controller_ck_18_1, int controller_pnr_12, int controller_ck_20_1,
  int controller_pnr_11, int controller_ck_22_1, int controller_pnr_10,
  int controller_ck_24_1, int controller_pnr_9, int controller_ck_26_1,
  int controller_pnr_8, int controller_ck_28_1, int controller_pnr_7,
  int controller_ck_30_1, int controller_pnr_6, int controller_v_431,
  int controller_v_430, int controller_pnr_5, int controller_ck_34_1,
  int controller_pnr_4, int controller_v_401, int controller_v_400,
  int controller_v_399, int controller_pnr_3, int controller_ck_38_1,
  int controller_pnr, int p_controller_cdown, int p_controller_cup,
  int p_controller_cl2, int p_controller_cl1, int p_controller_c_policy,
  int p_controller_c_arm, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_luz2, int p_controller_c_luz1, int p_controller_c_jan,
  int p_controller_c_pc, int p_controller_c_rot, int p_controller_c_porta,
  int controller_c_ar2, int controller_c_ar1, int controller_c_luz2,
  int controller_c_luz1, int controller_c_jan, int controller_c_pc,
  int controller_c_rot, int controller_c_porta,
  Controller_controller__controller_controller_controller_c_arm_out* _out) {
  
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
  sub_23 = false;
  if (controller_ar_failed) {
    sub_22 = false;
  } else {
    sub_22 = sub_23;
  };
  sub_21 = sub_22;
  sub_24 = sub_23;
  if (controller_ar_recovered) {
    v_916 = sub_24;
  } else {
    v_916 = false;
  };
  if (controller_ck_34_1) {
    sub_20 = v_916;
  } else {
    sub_20 = sub_21;
  };
  if (controller_c_rot) {
    v_917 = false;
  } else {
    v_917 = sub_20;
  };
  if (controller_c_pc) {
    sub_19 = false;
  } else {
    sub_19 = v_917;
  };
  if (controller_v_430) {
    sub_18 = sub_19;
  } else {
    sub_18 = false;
  };
  if (controller_v_431) {
    v_918 = false;
  } else {
    v_918 = sub_18;
  };
  if (controller_c_ar1) {
    v_919 = false;
  } else {
    v_919 = v_918;
  };
  if (controller_v_431) {
    sub_25 = sub_18;
    sub_26 = false;
  } else {
    sub_25 = false;
    sub_26 = sub_19;
  };
  if (controller_c_ar1) {
    v_920 = sub_25;
  } else {
    v_920 = sub_26;
  };
  if (controller_c_ar2) {
    sub_17 = v_919;
  } else {
    sub_17 = v_920;
  };
  sub_30 = sub_20;
  if (controller_c_pc) {
    sub_29 = false;
  } else {
    sub_29 = sub_30;
  };
  sub_31 = sub_30;
  if (controller_v_430) {
    sub_28 = sub_31;
  } else {
    sub_28 = sub_29;
  };
  if (controller_v_431) {
    v_914 = sub_31;
  } else {
    v_914 = sub_28;
  };
  if (controller_v_430) {
    sub_32 = sub_29;
  } else {
    sub_32 = sub_31;
  };
  if (controller_c_ar1) {
    v_915 = v_914;
  } else {
    v_915 = sub_32;
  };
  if (controller_v_431) {
    sub_33 = sub_32;
  } else {
    sub_33 = sub_29;
  };
  if (controller_c_ar2) {
    sub_27 = v_915;
  } else {
    sub_27 = sub_33;
  };
  if (controller_p_arrived) {
    v_921 = sub_27;
    sub_16 = sub_17;
  } else {
    v_921 = sub_17;
    sub_16 = sub_27;
  };
  if (controller_ck_24_1) {
    sub_15 = v_921;
  } else {
    sub_15 = sub_16;
  };
  if (controller_c_ar1) {
    v_913 = sub_26;
  } else {
    v_913 = sub_25;
  };
  if (controller_v_430) {
    sub_37 = false;
  } else {
    sub_37 = sub_19;
  };
  if (controller_v_431) {
    sub_36 = false;
  } else {
    sub_36 = sub_37;
  };
  if (controller_c_ar1) {
    v_912 = sub_36;
  } else {
    v_912 = sub_25;
  };
  if (controller_c_ar2) {
    sub_35 = v_912;
  } else {
    sub_35 = v_913;
  };
  sub_34 = sub_35;
  if (controller_p1_arrived) {
    v_922 = sub_34;
    sub_14 = sub_15;
  } else {
    v_922 = sub_15;
    sub_14 = sub_34;
  };
  if (controller_ck_26_1) {
    sub_13 = v_922;
  } else {
    sub_13 = sub_14;
  };
  sub_43 = sub_31;
  sub_42 = sub_43;
  if (controller_p_arrived) {
    v_910 = sub_42;
    sub_41 = false;
  } else {
    v_910 = false;
    sub_41 = sub_42;
  };
  if (controller_ck_24_1) {
    sub_40 = v_910;
  } else {
    sub_40 = sub_41;
  };
  if (controller_p1_arrived) {
    v_911 = sub_34;
    sub_39 = sub_40;
  } else {
    v_911 = sub_40;
    sub_39 = sub_34;
  };
  if (controller_ck_26_1) {
    sub_38 = v_911;
  } else {
    sub_38 = sub_39;
  };
  if (controller_c_jan) {
    v_923 = sub_13;
  } else {
    v_923 = sub_38;
  };
  if (controller_c_porta) {
    sub_12 = false;
  } else {
    sub_12 = v_923;
  };
  if (controller_p_arrived) {
    v_908 = false;
    sub_49 = sub_17;
  } else {
    v_908 = sub_17;
    sub_49 = false;
  };
  if (controller_ck_24_1) {
    sub_48 = v_908;
  } else {
    sub_48 = sub_49;
  };
  if (controller_p1_arrived) {
    v_909 = false;
    sub_47 = sub_48;
  } else {
    v_909 = sub_48;
    sub_47 = false;
  };
  if (controller_ck_26_1) {
    sub_46 = v_909;
  } else {
    sub_46 = sub_47;
  };
  if (controller_c_jan) {
    sub_45 = sub_46;
  } else {
    sub_45 = false;
  };
  if (controller_c_porta) {
    sub_44 = sub_45;
  } else {
    sub_44 = sub_38;
  };
  if (controller_shift_turno) {
    v_924 = sub_44;
    sub_11 = sub_12;
  } else {
    v_924 = sub_12;
    sub_11 = sub_44;
  };
  if (controller_ck_1) {
    sub_10 = v_924;
  } else {
    sub_10 = sub_11;
  };
  if (controller_c_porta) {
    sub_52 = sub_45;
  } else {
    sub_52 = false;
  };
  if (controller_shift_turno) {
    v_907 = sub_52;
    sub_51 = sub_12;
  } else {
    v_907 = sub_12;
    sub_51 = sub_52;
  };
  if (controller_ck_1) {
    sub_50 = v_907;
  } else {
    sub_50 = sub_51;
  };
  if (controller_l_failed) {
    sub_9 = sub_10;
  } else {
    sub_9 = sub_50;
  };
  if (controller_ck_38_1) {
    v_926 = sub_10;
    v_925 = sub_50;
  } else {
    v_926 = sub_9;
    v_925 = sub_9;
  };
  if (controller_l_recovered) {
    sub_8 = v_925;
  } else {
    sub_8 = v_926;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (controller_ar_recovered) {
    v_897 = false;
  } else {
    v_897 = sub_24;
  };
  if (controller_ar_failed) {
    sub_71 = sub_23;
  } else {
    sub_71 = false;
  };
  sub_70 = sub_71;
  if (controller_ck_34_1) {
    sub_69 = v_897;
  } else {
    sub_69 = sub_70;
  };
  sub_68 = sub_69;
  sub_67 = sub_68;
  if (controller_v_431) {
    v_901 = false;
  } else {
    v_901 = sub_67;
  };
  if (controller_v_430) {
    sub_66 = sub_67;
  } else {
    sub_66 = false;
  };
  if (controller_v_431) {
    v_900 = sub_66;
  } else {
    v_900 = false;
  };
  if (controller_c_ar1) {
    v_902 = v_900;
  } else {
    v_902 = v_901;
  };
  if (controller_v_431) {
    v_898 = false;
  } else {
    v_898 = sub_66;
  };
  if (controller_c_ar1) {
    v_899 = false;
  } else {
    v_899 = v_898;
  };
  if (controller_c_ar2) {
    sub_65 = v_899;
  } else {
    sub_65 = v_902;
  };
  if (controller_p_arrived) {
    v_903 = false;
    sub_64 = sub_65;
  } else {
    v_903 = sub_65;
    sub_64 = false;
  };
  if (controller_ck_24_1) {
    sub_63 = v_903;
  } else {
    sub_63 = sub_64;
  };
  if (controller_p1_arrived) {
    v_904 = false;
    sub_62 = sub_63;
  } else {
    v_904 = sub_63;
    sub_62 = false;
  };
  if (controller_ck_26_1) {
    sub_61 = v_904;
  } else {
    sub_61 = sub_62;
  };
  if (controller_c_jan) {
    sub_60 = false;
  } else {
    sub_60 = sub_61;
  };
  sub_80 = sub_24;
  sub_79 = sub_80;
  sub_78 = sub_79;
  if (controller_v_431) {
    v_893 = sub_31;
  } else {
    v_893 = sub_78;
  };
  if (controller_v_430) {
    sub_77 = sub_78;
  } else {
    sub_77 = sub_31;
  };
  if (controller_v_431) {
    v_892 = sub_77;
  } else {
    v_892 = sub_31;
  };
  if (controller_c_ar1) {
    v_894 = v_892;
  } else {
    v_894 = v_893;
  };
  if (controller_v_431) {
    v_890 = sub_31;
  } else {
    v_890 = sub_77;
  };
  if (controller_c_ar1) {
    v_891 = sub_31;
  } else {
    v_891 = v_890;
  };
  if (controller_c_ar2) {
    sub_76 = v_891;
  } else {
    sub_76 = v_894;
  };
  if (controller_p_arrived) {
    v_895 = sub_76;
    sub_75 = sub_65;
  } else {
    v_895 = sub_65;
    sub_75 = sub_76;
  };
  if (controller_ck_24_1) {
    sub_74 = v_895;
  } else {
    sub_74 = sub_75;
  };
  if (controller_v_431) {
    v_888 = sub_18;
    v_887 = sub_66;
  } else {
    v_888 = sub_67;
    v_887 = sub_19;
  };
  if (controller_c_ar1) {
    v_889 = v_887;
  } else {
    v_889 = v_888;
  };
  if (controller_v_431) {
    v_885 = sub_18;
  } else {
    v_885 = sub_66;
  };
  if (controller_c_ar1) {
    v_886 = sub_36;
  } else {
    v_886 = v_885;
  };
  if (controller_c_ar2) {
    sub_82 = v_886;
  } else {
    sub_82 = v_889;
  };
  sub_81 = sub_82;
  if (controller_p1_arrived) {
    v_896 = sub_81;
    sub_73 = sub_74;
  } else {
    v_896 = sub_74;
    sub_73 = sub_81;
  };
  if (controller_ck_26_1) {
    sub_72 = v_896;
  } else {
    sub_72 = sub_73;
  };
  if (controller_c_jan) {
    v_905 = sub_13;
  } else {
    v_905 = sub_72;
  };
  if (controller_c_porta) {
    sub_59 = sub_60;
  } else {
    sub_59 = v_905;
  };
  if (controller_c_jan) {
    v_884 = sub_38;
    sub_84 = sub_46;
  } else {
    v_884 = sub_72;
    sub_84 = sub_61;
  };
  if (controller_c_porta) {
    sub_83 = sub_84;
  } else {
    sub_83 = v_884;
  };
  if (controller_shift_turno) {
    v_906 = sub_83;
    sub_58 = sub_59;
  } else {
    v_906 = sub_59;
    sub_58 = sub_83;
  };
  if (controller_ck_1) {
    sub_57 = v_906;
  } else {
    sub_57 = sub_58;
  };
  sub_56 = sub_57;
  sub_55 = sub_56;
  sub_54 = sub_55;
  sub_53 = sub_54;
  if (controller_v_401) {
    sub_5 = sub_53;
  } else {
    sub_5 = sub_6;
  };
  if (controller_c_porta) {
    sub_91 = sub_84;
  } else {
    sub_91 = sub_60;
  };
  if (controller_shift_turno) {
    v_881 = sub_91;
    sub_90 = false;
  } else {
    v_881 = false;
    sub_90 = sub_91;
  };
  if (controller_ck_1) {
    sub_89 = v_881;
  } else {
    sub_89 = sub_90;
  };
  if (controller_p_arrived) {
    v_876 = sub_42;
    sub_97 = sub_65;
  } else {
    v_876 = sub_65;
    sub_97 = sub_42;
  };
  if (controller_ck_24_1) {
    sub_96 = v_876;
  } else {
    sub_96 = sub_97;
  };
  if (controller_p1_arrived) {
    v_877 = sub_34;
    sub_95 = sub_96;
  } else {
    v_877 = sub_96;
    sub_95 = sub_34;
  };
  if (controller_ck_26_1) {
    v_878 = v_877;
  } else {
    v_878 = sub_95;
  };
  if (controller_c_jan) {
    v_879 = sub_38;
  } else {
    v_879 = v_878;
  };
  if (controller_c_porta) {
    sub_94 = sub_84;
  } else {
    sub_94 = v_879;
  };
  if (controller_shift_turno) {
    v_880 = sub_94;
    sub_93 = sub_59;
  } else {
    v_880 = sub_59;
    sub_93 = sub_94;
  };
  if (controller_ck_1) {
    sub_92 = v_880;
  } else {
    sub_92 = sub_93;
  };
  if (controller_l_failed) {
    sub_88 = sub_89;
  } else {
    sub_88 = sub_92;
  };
  if (controller_ck_38_1) {
    v_883 = sub_89;
    v_882 = sub_92;
  } else {
    v_883 = sub_88;
    v_882 = sub_88;
  };
  if (controller_l_recovered) {
    sub_87 = v_882;
  } else {
    sub_87 = v_883;
  };
  sub_86 = sub_87;
  sub_85 = sub_86;
  if (controller_v_400) {
    sub_4 = sub_85;
  } else {
    sub_4 = sub_5;
  };
  if (controller_v_401) {
    sub_98 = sub_85;
  } else {
    sub_98 = sub_53;
  };
  if (controller_v_400) {
    v_927 = sub_5;
  } else {
    v_927 = sub_98;
  };
  if (controller_v_399) {
    sub_3 = v_927;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  sub_1 = sub_2;
  sub_120 = true;
  if (controller_ar_failed) {
    sub_119 = false;
  } else {
    sub_119 = sub_120;
  };
  sub_118 = sub_119;
  sub_121 = sub_120;
  if (controller_ar_recovered) {
    v_862 = sub_121;
  } else {
    v_862 = false;
  };
  if (controller_ck_34_1) {
    sub_117 = v_862;
  } else {
    sub_117 = sub_118;
  };
  if (controller_c_rot) {
    v_863 = false;
  } else {
    v_863 = sub_117;
  };
  if (controller_c_pc) {
    sub_116 = false;
  } else {
    sub_116 = v_863;
  };
  if (controller_v_431) {
    v_867 = false;
  } else {
    v_867 = sub_116;
  };
  if (controller_v_430) {
    sub_115 = sub_116;
  } else {
    sub_115 = false;
  };
  if (controller_v_431) {
    v_866 = sub_115;
  } else {
    v_866 = false;
  };
  if (controller_c_ar1) {
    v_868 = v_866;
  } else {
    v_868 = v_867;
  };
  if (controller_v_431) {
    v_864 = false;
  } else {
    v_864 = sub_115;
  };
  if (controller_c_ar1) {
    v_865 = false;
  } else {
    v_865 = v_864;
  };
  if (controller_c_ar2) {
    sub_114 = v_865;
  } else {
    sub_114 = v_868;
  };
  sub_125 = sub_117;
  if (controller_c_pc) {
    sub_124 = false;
  } else {
    sub_124 = sub_125;
  };
  sub_126 = sub_125;
  if (controller_v_430) {
    sub_123 = sub_126;
  } else {
    sub_123 = sub_124;
  };
  if (controller_v_431) {
    v_860 = sub_126;
  } else {
    v_860 = sub_123;
  };
  if (controller_v_430) {
    sub_127 = sub_124;
  } else {
    sub_127 = sub_126;
  };
  if (controller_c_ar1) {
    v_861 = v_860;
  } else {
    v_861 = sub_127;
  };
  if (controller_v_431) {
    sub_128 = sub_127;
  } else {
    sub_128 = sub_124;
  };
  if (controller_c_ar2) {
    sub_122 = v_861;
  } else {
    sub_122 = sub_128;
  };
  if (controller_p_arrived) {
    v_869 = sub_122;
    sub_113 = sub_114;
  } else {
    v_869 = sub_114;
    sub_113 = sub_122;
  };
  if (controller_ck_24_1) {
    sub_112 = v_869;
  } else {
    sub_112 = sub_113;
  };
  if (controller_p1_arrived) {
    v_870 = sub_34;
    sub_111 = sub_112;
  } else {
    v_870 = sub_112;
    sub_111 = sub_34;
  };
  if (controller_ck_26_1) {
    sub_110 = v_870;
  } else {
    sub_110 = sub_111;
  };
  sub_134 = sub_126;
  sub_133 = sub_134;
  if (controller_p_arrived) {
    v_858 = sub_133;
    sub_132 = false;
  } else {
    v_858 = false;
    sub_132 = sub_133;
  };
  if (controller_ck_24_1) {
    sub_131 = v_858;
  } else {
    sub_131 = sub_132;
  };
  if (controller_p1_arrived) {
    v_859 = sub_34;
    sub_130 = sub_131;
  } else {
    v_859 = sub_131;
    sub_130 = sub_34;
  };
  if (controller_ck_26_1) {
    sub_129 = v_859;
  } else {
    sub_129 = sub_130;
  };
  if (controller_c_jan) {
    v_871 = sub_110;
  } else {
    v_871 = sub_129;
  };
  if (controller_c_porta) {
    sub_109 = false;
  } else {
    sub_109 = v_871;
  };
  if (controller_p_arrived) {
    v_856 = false;
    sub_140 = sub_114;
  } else {
    v_856 = sub_114;
    sub_140 = false;
  };
  if (controller_ck_24_1) {
    sub_139 = v_856;
  } else {
    sub_139 = sub_140;
  };
  if (controller_p1_arrived) {
    v_857 = false;
    sub_138 = sub_139;
  } else {
    v_857 = sub_139;
    sub_138 = false;
  };
  if (controller_ck_26_1) {
    sub_137 = v_857;
  } else {
    sub_137 = sub_138;
  };
  if (controller_c_jan) {
    sub_136 = sub_137;
  } else {
    sub_136 = false;
  };
  if (controller_c_porta) {
    sub_135 = sub_136;
  } else {
    sub_135 = sub_129;
  };
  if (controller_shift_turno) {
    v_872 = sub_135;
    sub_108 = sub_109;
  } else {
    v_872 = sub_109;
    sub_108 = sub_135;
  };
  if (controller_ck_1) {
    sub_107 = v_872;
  } else {
    sub_107 = sub_108;
  };
  if (controller_c_porta) {
    sub_143 = sub_136;
  } else {
    sub_143 = false;
  };
  if (controller_shift_turno) {
    v_855 = sub_143;
    sub_142 = sub_109;
  } else {
    v_855 = sub_109;
    sub_142 = sub_143;
  };
  if (controller_ck_1) {
    sub_141 = v_855;
  } else {
    sub_141 = sub_142;
  };
  if (controller_l_failed) {
    sub_106 = sub_107;
  } else {
    sub_106 = sub_141;
  };
  if (controller_ck_38_1) {
    v_874 = sub_107;
    v_873 = sub_141;
  } else {
    v_874 = sub_106;
    v_873 = sub_106;
  };
  if (controller_l_recovered) {
    sub_105 = v_873;
  } else {
    sub_105 = v_874;
  };
  sub_104 = sub_105;
  sub_103 = sub_104;
  if (controller_ar_recovered) {
    v_845 = false;
  } else {
    v_845 = sub_121;
  };
  if (controller_ar_failed) {
    sub_162 = sub_120;
  } else {
    sub_162 = false;
  };
  sub_161 = sub_162;
  if (controller_ck_34_1) {
    sub_160 = v_845;
  } else {
    sub_160 = sub_161;
  };
  sub_159 = sub_160;
  sub_158 = sub_159;
  if (controller_v_431) {
    v_849 = false;
  } else {
    v_849 = sub_158;
  };
  if (controller_v_430) {
    sub_157 = sub_158;
  } else {
    sub_157 = false;
  };
  if (controller_v_431) {
    v_848 = sub_157;
  } else {
    v_848 = false;
  };
  if (controller_c_ar1) {
    v_850 = v_848;
  } else {
    v_850 = v_849;
  };
  if (controller_v_431) {
    v_846 = false;
  } else {
    v_846 = sub_157;
  };
  if (controller_c_ar1) {
    v_847 = false;
  } else {
    v_847 = v_846;
  };
  if (controller_c_ar2) {
    sub_156 = v_847;
  } else {
    sub_156 = v_850;
  };
  if (controller_p_arrived) {
    v_851 = false;
    sub_155 = sub_156;
  } else {
    v_851 = sub_156;
    sub_155 = false;
  };
  if (controller_ck_24_1) {
    sub_154 = v_851;
  } else {
    sub_154 = sub_155;
  };
  if (controller_p1_arrived) {
    v_852 = false;
    sub_153 = sub_154;
  } else {
    v_852 = sub_154;
    sub_153 = false;
  };
  if (controller_ck_26_1) {
    sub_152 = v_852;
  } else {
    sub_152 = sub_153;
  };
  if (controller_c_jan) {
    sub_151 = false;
  } else {
    sub_151 = sub_152;
  };
  sub_171 = sub_121;
  sub_170 = sub_171;
  sub_169 = sub_170;
  if (controller_v_431) {
    v_841 = sub_126;
  } else {
    v_841 = sub_169;
  };
  if (controller_v_430) {
    sub_168 = sub_169;
  } else {
    sub_168 = sub_126;
  };
  if (controller_v_431) {
    v_840 = sub_168;
  } else {
    v_840 = sub_126;
  };
  if (controller_c_ar1) {
    v_842 = v_840;
  } else {
    v_842 = v_841;
  };
  if (controller_v_431) {
    v_838 = sub_126;
  } else {
    v_838 = sub_168;
  };
  if (controller_c_ar1) {
    v_839 = sub_126;
  } else {
    v_839 = v_838;
  };
  if (controller_c_ar2) {
    sub_167 = v_839;
  } else {
    sub_167 = v_842;
  };
  if (controller_p_arrived) {
    v_843 = sub_167;
    sub_166 = sub_156;
  } else {
    v_843 = sub_156;
    sub_166 = sub_167;
  };
  if (controller_ck_24_1) {
    sub_165 = v_843;
  } else {
    sub_165 = sub_166;
  };
  if (controller_v_431) {
    v_836 = sub_18;
    v_835 = sub_157;
  } else {
    v_836 = sub_158;
    v_835 = sub_19;
  };
  if (controller_c_ar1) {
    v_837 = v_835;
  } else {
    v_837 = v_836;
  };
  if (controller_v_431) {
    v_833 = sub_18;
  } else {
    v_833 = sub_157;
  };
  if (controller_c_ar1) {
    v_834 = sub_36;
  } else {
    v_834 = v_833;
  };
  if (controller_c_ar2) {
    sub_173 = v_834;
  } else {
    sub_173 = v_837;
  };
  sub_172 = sub_173;
  if (controller_p1_arrived) {
    v_844 = sub_172;
    sub_164 = sub_165;
  } else {
    v_844 = sub_165;
    sub_164 = sub_172;
  };
  if (controller_ck_26_1) {
    sub_163 = v_844;
  } else {
    sub_163 = sub_164;
  };
  if (controller_c_jan) {
    v_853 = sub_110;
  } else {
    v_853 = sub_163;
  };
  if (controller_c_porta) {
    sub_150 = sub_151;
  } else {
    sub_150 = v_853;
  };
  if (controller_c_jan) {
    v_832 = sub_129;
    sub_175 = sub_137;
  } else {
    v_832 = sub_163;
    sub_175 = sub_152;
  };
  if (controller_c_porta) {
    sub_174 = sub_175;
  } else {
    sub_174 = v_832;
  };
  if (controller_shift_turno) {
    v_854 = sub_174;
    sub_149 = sub_150;
  } else {
    v_854 = sub_150;
    sub_149 = sub_174;
  };
  if (controller_ck_1) {
    sub_148 = v_854;
  } else {
    sub_148 = sub_149;
  };
  sub_147 = sub_148;
  sub_146 = sub_147;
  sub_145 = sub_146;
  sub_144 = sub_145;
  if (controller_v_401) {
    sub_102 = sub_144;
  } else {
    sub_102 = sub_103;
  };
  if (controller_c_porta) {
    sub_182 = sub_175;
  } else {
    sub_182 = sub_151;
  };
  if (controller_shift_turno) {
    v_829 = sub_182;
    sub_181 = false;
  } else {
    v_829 = false;
    sub_181 = sub_182;
  };
  if (controller_ck_1) {
    sub_180 = v_829;
  } else {
    sub_180 = sub_181;
  };
  if (controller_p_arrived) {
    v = sub_133;
    sub_188 = sub_156;
  } else {
    v = sub_156;
    sub_188 = sub_133;
  };
  if (controller_ck_24_1) {
    sub_187 = v;
  } else {
    sub_187 = sub_188;
  };
  if (controller_p1_arrived) {
    v_825 = sub_34;
    sub_186 = sub_187;
  } else {
    v_825 = sub_187;
    sub_186 = sub_34;
  };
  if (controller_ck_26_1) {
    v_826 = v_825;
  } else {
    v_826 = sub_186;
  };
  if (controller_c_jan) {
    v_827 = sub_129;
  } else {
    v_827 = v_826;
  };
  if (controller_c_porta) {
    sub_185 = sub_175;
  } else {
    sub_185 = v_827;
  };
  if (controller_shift_turno) {
    v_828 = sub_185;
    sub_184 = sub_150;
  } else {
    v_828 = sub_150;
    sub_184 = sub_185;
  };
  if (controller_ck_1) {
    sub_183 = v_828;
  } else {
    sub_183 = sub_184;
  };
  if (controller_l_failed) {
    sub_179 = sub_180;
  } else {
    sub_179 = sub_183;
  };
  if (controller_ck_38_1) {
    v_831 = sub_180;
    v_830 = sub_183;
  } else {
    v_831 = sub_179;
    v_830 = sub_179;
  };
  if (controller_l_recovered) {
    sub_178 = v_830;
  } else {
    sub_178 = v_831;
  };
  sub_177 = sub_178;
  sub_176 = sub_177;
  if (controller_v_400) {
    sub_101 = sub_176;
  } else {
    sub_101 = sub_102;
  };
  if (controller_v_401) {
    sub_189 = sub_176;
  } else {
    sub_189 = sub_144;
  };
  if (controller_v_400) {
    v_875 = sub_102;
  } else {
    v_875 = sub_189;
  };
  if (controller_v_399) {
    sub_100 = v_875;
  } else {
    sub_100 = sub_101;
  };
  sub_99 = sub_100;
  if (p_controller_c_arm) {
    sub_0 = sub_99;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_arm = sub_0;;
}

void Controller_controller__controller_controller_controller_c_ar2_step(
  int controller_up, int controller_down, int controller_shift_turno,
  int controller_abre_porta, int controller_p_arrived,
  int controller_p1_arrived, int controller_ar_failed,
  int controller_ar_recovered, int controller_l_failed,
  int controller_l_recovered, int controller_ck_1, int controller_pnr_13,
  int controller_ck_18_1, int controller_pnr_12, int controller_ck_20_1,
  int controller_pnr_11, int controller_ck_22_1, int controller_pnr_10,
  int controller_ck_24_1, int controller_pnr_9, int controller_ck_26_1,
  int controller_pnr_8, int controller_ck_28_1, int controller_pnr_7,
  int controller_ck_30_1, int controller_pnr_6, int controller_v_431,
  int controller_v_430, int controller_pnr_5, int controller_ck_34_1,
  int controller_pnr_4, int controller_v_401, int controller_v_400,
  int controller_v_399, int controller_pnr_3, int controller_ck_38_1,
  int controller_pnr, int p_controller_cdown, int p_controller_cup,
  int p_controller_cl2, int p_controller_cl1, int p_controller_c_policy,
  int p_controller_c_arm, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_luz2, int p_controller_c_luz1, int p_controller_c_jan,
  int p_controller_c_pc, int p_controller_c_rot, int p_controller_c_porta,
  int controller_c_ar1, int controller_c_luz2, int controller_c_luz1,
  int controller_c_jan, int controller_c_pc, int controller_c_rot,
  int controller_c_porta,
  Controller_controller__controller_controller_controller_c_ar2_out* _out) {
  
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
  sub_24 = false;
  if (controller_ar_failed) {
    sub_23 = false;
  } else {
    sub_23 = sub_24;
  };
  sub_22 = sub_23;
  sub_25 = sub_24;
  if (controller_ar_recovered) {
    v_1000 = sub_25;
  } else {
    v_1000 = false;
  };
  if (controller_ck_34_1) {
    sub_21 = v_1000;
  } else {
    sub_21 = sub_22;
  };
  if (controller_c_rot) {
    v_1001 = false;
  } else {
    v_1001 = sub_21;
  };
  if (controller_c_pc) {
    sub_20 = false;
  } else {
    sub_20 = v_1001;
  };
  if (controller_v_430) {
    sub_19 = sub_20;
  } else {
    sub_19 = false;
  };
  if (controller_v_431) {
    sub_18 = sub_19;
    sub_26 = false;
  } else {
    sub_18 = false;
    sub_26 = sub_20;
  };
  if (controller_c_ar1) {
    sub_17 = sub_18;
  } else {
    sub_17 = sub_26;
  };
  sub_30 = sub_21;
  if (controller_c_pc) {
    sub_29 = false;
  } else {
    sub_29 = sub_30;
  };
  sub_36 = true;
  if (controller_ar_failed) {
    sub_35 = false;
  } else {
    sub_35 = sub_36;
  };
  sub_34 = sub_35;
  sub_37 = sub_36;
  if (controller_ar_recovered) {
    v_995 = sub_37;
  } else {
    v_995 = false;
  };
  if (controller_ck_34_1) {
    sub_33 = v_995;
  } else {
    sub_33 = sub_34;
  };
  sub_32 = sub_33;
  if (controller_c_pc) {
    sub_31 = sub_32;
  } else {
    sub_31 = sub_30;
  };
  if (controller_v_430) {
    sub_28 = sub_31;
  } else {
    sub_28 = sub_29;
  };
  sub_38 = sub_30;
  if (controller_v_430) {
    v_998 = sub_29;
    v_996 = sub_31;
  } else {
    v_998 = sub_38;
    v_996 = sub_38;
  };
  if (controller_v_431) {
    v_997 = v_996;
  } else {
    v_997 = sub_28;
  };
  if (controller_v_430) {
    sub_39 = sub_29;
  } else {
    sub_39 = sub_31;
  };
  if (controller_v_431) {
    v_999 = v_998;
  } else {
    v_999 = sub_39;
  };
  if (controller_c_ar1) {
    sub_27 = v_997;
  } else {
    sub_27 = v_999;
  };
  if (controller_p_arrived) {
    v_1002 = sub_27;
    sub_16 = sub_17;
  } else {
    v_1002 = sub_17;
    sub_16 = sub_27;
  };
  if (controller_ck_24_1) {
    sub_15 = v_1002;
  } else {
    sub_15 = sub_16;
  };
  if (controller_c_ar1) {
    sub_41 = sub_26;
  } else {
    sub_41 = sub_18;
  };
  sub_40 = sub_41;
  if (controller_p1_arrived) {
    v_1003 = sub_40;
    sub_14 = sub_15;
  } else {
    v_1003 = sub_15;
    sub_14 = sub_40;
  };
  if (controller_ck_26_1) {
    sub_13 = v_1003;
  } else {
    sub_13 = sub_14;
  };
  sub_46 = sub_38;
  if (controller_p_arrived) {
    v_993 = sub_46;
    sub_45 = false;
  } else {
    v_993 = false;
    sub_45 = sub_46;
  };
  if (controller_ck_24_1) {
    sub_44 = v_993;
  } else {
    sub_44 = sub_45;
  };
  if (controller_p1_arrived) {
    v_994 = sub_40;
    sub_43 = sub_44;
  } else {
    v_994 = sub_44;
    sub_43 = sub_40;
  };
  if (controller_ck_26_1) {
    sub_42 = v_994;
  } else {
    sub_42 = sub_43;
  };
  if (controller_c_jan) {
    v_1004 = sub_13;
  } else {
    v_1004 = sub_42;
  };
  if (controller_c_porta) {
    sub_12 = false;
  } else {
    sub_12 = v_1004;
  };
  if (controller_p_arrived) {
    v_991 = false;
    sub_52 = sub_17;
  } else {
    v_991 = sub_17;
    sub_52 = false;
  };
  if (controller_ck_24_1) {
    sub_51 = v_991;
  } else {
    sub_51 = sub_52;
  };
  if (controller_p1_arrived) {
    v_992 = false;
    sub_50 = sub_51;
  } else {
    v_992 = sub_51;
    sub_50 = false;
  };
  if (controller_ck_26_1) {
    sub_49 = v_992;
  } else {
    sub_49 = sub_50;
  };
  if (controller_c_jan) {
    sub_48 = sub_49;
  } else {
    sub_48 = false;
  };
  if (controller_c_porta) {
    sub_47 = sub_48;
  } else {
    sub_47 = sub_42;
  };
  if (controller_shift_turno) {
    v_1005 = sub_47;
    sub_11 = sub_12;
  } else {
    v_1005 = sub_12;
    sub_11 = sub_47;
  };
  if (controller_ck_1) {
    sub_10 = v_1005;
  } else {
    sub_10 = sub_11;
  };
  if (controller_c_porta) {
    sub_55 = sub_48;
  } else {
    sub_55 = false;
  };
  if (controller_shift_turno) {
    v_990 = sub_55;
    sub_54 = sub_12;
  } else {
    v_990 = sub_12;
    sub_54 = sub_55;
  };
  if (controller_ck_1) {
    sub_53 = v_990;
  } else {
    sub_53 = sub_54;
  };
  if (controller_l_failed) {
    sub_9 = sub_10;
  } else {
    sub_9 = sub_53;
  };
  if (controller_ck_38_1) {
    v_1007 = sub_10;
    v_1006 = sub_53;
  } else {
    v_1007 = sub_9;
    v_1006 = sub_9;
  };
  if (controller_l_recovered) {
    sub_8 = v_1006;
  } else {
    sub_8 = v_1007;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (controller_ar_recovered) {
    v_984 = false;
  } else {
    v_984 = sub_25;
  };
  if (controller_ar_failed) {
    sub_75 = sub_24;
  } else {
    sub_75 = false;
  };
  sub_74 = sub_75;
  if (controller_ck_34_1) {
    sub_73 = v_984;
  } else {
    sub_73 = sub_74;
  };
  sub_72 = sub_73;
  sub_71 = sub_72;
  if (controller_v_431) {
    v_985 = false;
  } else {
    v_985 = sub_71;
  };
  if (controller_v_430) {
    sub_70 = sub_71;
  } else {
    sub_70 = false;
  };
  if (controller_v_431) {
    sub_69 = sub_70;
  } else {
    sub_69 = false;
  };
  if (controller_c_ar1) {
    sub_68 = sub_69;
  } else {
    sub_68 = v_985;
  };
  if (controller_p_arrived) {
    v_986 = false;
    sub_67 = sub_68;
  } else {
    v_986 = sub_68;
    sub_67 = false;
  };
  if (controller_ck_24_1) {
    sub_66 = v_986;
  } else {
    sub_66 = sub_67;
  };
  if (controller_p1_arrived) {
    v_987 = false;
    sub_65 = sub_66;
  } else {
    v_987 = sub_66;
    sub_65 = false;
  };
  if (controller_ck_26_1) {
    sub_64 = v_987;
  } else {
    sub_64 = sub_65;
  };
  if (controller_c_jan) {
    sub_63 = false;
  } else {
    sub_63 = sub_64;
  };
  sub_83 = sub_25;
  sub_82 = sub_83;
  sub_81 = sub_82;
  if (controller_v_431) {
    v_981 = sub_38;
  } else {
    v_981 = sub_81;
  };
  if (controller_v_430) {
    v_979 = sub_81;
  } else {
    v_979 = sub_38;
  };
  if (controller_v_431) {
    v_980 = v_979;
  } else {
    v_980 = sub_38;
  };
  if (controller_c_ar1) {
    sub_80 = v_980;
  } else {
    sub_80 = v_981;
  };
  if (controller_p_arrived) {
    v_982 = sub_80;
    sub_79 = sub_68;
  } else {
    v_982 = sub_68;
    sub_79 = sub_80;
  };
  if (controller_ck_24_1) {
    sub_78 = v_982;
  } else {
    sub_78 = sub_79;
  };
  if (controller_v_431) {
    v_978 = sub_19;
    v_977 = sub_70;
  } else {
    v_978 = sub_71;
    v_977 = sub_20;
  };
  if (controller_c_ar1) {
    sub_85 = v_977;
  } else {
    sub_85 = v_978;
  };
  sub_84 = sub_85;
  if (controller_p1_arrived) {
    v_983 = sub_84;
    sub_77 = sub_78;
  } else {
    v_983 = sub_78;
    sub_77 = sub_84;
  };
  if (controller_ck_26_1) {
    sub_76 = v_983;
  } else {
    sub_76 = sub_77;
  };
  if (controller_c_jan) {
    v_988 = sub_13;
  } else {
    v_988 = sub_76;
  };
  if (controller_c_porta) {
    sub_62 = sub_63;
  } else {
    sub_62 = v_988;
  };
  if (controller_c_jan) {
    v_976 = sub_42;
    sub_87 = sub_49;
  } else {
    v_976 = sub_76;
    sub_87 = sub_64;
  };
  if (controller_c_porta) {
    sub_86 = sub_87;
  } else {
    sub_86 = v_976;
  };
  if (controller_shift_turno) {
    v_989 = sub_86;
    sub_61 = sub_62;
  } else {
    v_989 = sub_62;
    sub_61 = sub_86;
  };
  if (controller_ck_1) {
    sub_60 = v_989;
  } else {
    sub_60 = sub_61;
  };
  sub_59 = sub_60;
  sub_58 = sub_59;
  sub_57 = sub_58;
  sub_56 = sub_57;
  if (controller_v_401) {
    sub_5 = sub_56;
  } else {
    sub_5 = sub_6;
  };
  if (controller_c_porta) {
    sub_94 = sub_87;
  } else {
    sub_94 = sub_63;
  };
  if (controller_shift_turno) {
    v_973 = sub_94;
    sub_93 = false;
  } else {
    v_973 = false;
    sub_93 = sub_94;
  };
  if (controller_ck_1) {
    sub_92 = v_973;
  } else {
    sub_92 = sub_93;
  };
  if (controller_p_arrived) {
    v_968 = sub_46;
    sub_100 = sub_68;
  } else {
    v_968 = sub_68;
    sub_100 = sub_46;
  };
  if (controller_ck_24_1) {
    sub_99 = v_968;
  } else {
    sub_99 = sub_100;
  };
  if (controller_p1_arrived) {
    v_969 = sub_40;
    sub_98 = sub_99;
  } else {
    v_969 = sub_99;
    sub_98 = sub_40;
  };
  if (controller_ck_26_1) {
    v_970 = v_969;
  } else {
    v_970 = sub_98;
  };
  if (controller_c_jan) {
    v_971 = sub_42;
  } else {
    v_971 = v_970;
  };
  if (controller_c_porta) {
    sub_97 = sub_87;
  } else {
    sub_97 = v_971;
  };
  if (controller_shift_turno) {
    v_972 = sub_97;
    sub_96 = sub_62;
  } else {
    v_972 = sub_62;
    sub_96 = sub_97;
  };
  if (controller_ck_1) {
    sub_95 = v_972;
  } else {
    sub_95 = sub_96;
  };
  if (controller_l_failed) {
    sub_91 = sub_92;
  } else {
    sub_91 = sub_95;
  };
  if (controller_ck_38_1) {
    v_975 = sub_92;
    v_974 = sub_95;
  } else {
    v_975 = sub_91;
    v_974 = sub_91;
  };
  if (controller_l_recovered) {
    sub_90 = v_974;
  } else {
    sub_90 = v_975;
  };
  sub_89 = sub_90;
  sub_88 = sub_89;
  if (controller_v_400) {
    sub_4 = sub_88;
  } else {
    sub_4 = sub_5;
  };
  if (controller_v_401) {
    sub_101 = sub_88;
  } else {
    sub_101 = sub_56;
  };
  if (controller_v_400) {
    v_1008 = sub_5;
  } else {
    v_1008 = sub_101;
  };
  if (controller_v_399) {
    sub_3 = v_1008;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  if (controller_c_rot) {
    v_959 = false;
  } else {
    v_959 = sub_33;
  };
  if (controller_c_pc) {
    sub_118 = false;
  } else {
    sub_118 = v_959;
  };
  if (controller_v_430) {
    sub_117 = sub_118;
  } else {
    sub_117 = sub_20;
  };
  if (controller_v_431) {
    v_960 = false;
  } else {
    v_960 = sub_117;
  };
  if (controller_c_ar1) {
    sub_116 = sub_18;
  } else {
    sub_116 = v_960;
  };
  if (controller_c_pc) {
    sub_121 = false;
  } else {
    sub_121 = sub_32;
  };
  sub_122 = sub_32;
  if (controller_v_430) {
    v_958 = sub_121;
    sub_120 = sub_122;
  } else {
    v_958 = sub_122;
    sub_120 = sub_121;
  };
  if (controller_v_431) {
    v_957 = sub_122;
  } else {
    v_957 = sub_120;
  };
  if (controller_c_ar1) {
    sub_119 = v_957;
  } else {
    sub_119 = v_958;
  };
  if (controller_p_arrived) {
    v_961 = sub_119;
    sub_115 = sub_116;
  } else {
    v_961 = sub_116;
    sub_115 = sub_119;
  };
  if (controller_ck_24_1) {
    sub_114 = v_961;
  } else {
    sub_114 = sub_115;
  };
  if (controller_v_430) {
    sub_125 = sub_20;
  } else {
    sub_125 = sub_118;
  };
  if (controller_v_431) {
    v_955 = false;
  } else {
    v_955 = sub_125;
  };
  if (controller_v_430) {
    sub_126 = sub_118;
  } else {
    sub_126 = false;
  };
  if (controller_v_431) {
    v_956 = sub_126;
  } else {
    v_956 = false;
  };
  if (controller_c_ar1) {
    sub_124 = v_955;
  } else {
    sub_124 = v_956;
  };
  sub_123 = sub_124;
  if (controller_p1_arrived) {
    v_962 = sub_123;
    sub_113 = sub_114;
  } else {
    v_962 = sub_114;
    sub_113 = sub_123;
  };
  if (controller_ck_26_1) {
    sub_112 = v_962;
  } else {
    sub_112 = sub_113;
  };
  sub_131 = sub_122;
  if (controller_p_arrived) {
    v_953 = sub_131;
    sub_130 = false;
  } else {
    v_953 = false;
    sub_130 = sub_131;
  };
  if (controller_ck_24_1) {
    sub_129 = v_953;
  } else {
    sub_129 = sub_130;
  };
  if (controller_p1_arrived) {
    v_954 = sub_123;
    sub_128 = sub_129;
  } else {
    v_954 = sub_129;
    sub_128 = sub_123;
  };
  if (controller_ck_26_1) {
    sub_127 = v_954;
  } else {
    sub_127 = sub_128;
  };
  if (controller_c_jan) {
    v_963 = sub_112;
  } else {
    v_963 = sub_127;
  };
  if (controller_c_porta) {
    sub_111 = false;
  } else {
    sub_111 = v_963;
  };
  if (controller_p_arrived) {
    v_951 = false;
    sub_137 = sub_116;
  } else {
    v_951 = sub_116;
    sub_137 = false;
  };
  if (controller_ck_24_1) {
    sub_136 = v_951;
  } else {
    sub_136 = sub_137;
  };
  if (controller_p1_arrived) {
    v_952 = false;
    sub_135 = sub_136;
  } else {
    v_952 = sub_136;
    sub_135 = false;
  };
  if (controller_ck_26_1) {
    sub_134 = v_952;
  } else {
    sub_134 = sub_135;
  };
  if (controller_c_jan) {
    sub_133 = sub_134;
  } else {
    sub_133 = false;
  };
  if (controller_c_porta) {
    sub_132 = sub_133;
  } else {
    sub_132 = sub_127;
  };
  if (controller_shift_turno) {
    v_964 = sub_132;
    sub_110 = sub_111;
  } else {
    v_964 = sub_111;
    sub_110 = sub_132;
  };
  if (controller_ck_1) {
    sub_109 = v_964;
  } else {
    sub_109 = sub_110;
  };
  if (controller_c_porta) {
    sub_140 = sub_133;
  } else {
    sub_140 = false;
  };
  if (controller_shift_turno) {
    v_950 = sub_140;
    sub_139 = sub_111;
  } else {
    v_950 = sub_111;
    sub_139 = sub_140;
  };
  if (controller_ck_1) {
    sub_138 = v_950;
  } else {
    sub_138 = sub_139;
  };
  if (controller_l_failed) {
    sub_108 = sub_109;
  } else {
    sub_108 = sub_138;
  };
  if (controller_ck_38_1) {
    v_966 = sub_109;
    v_965 = sub_138;
  } else {
    v_966 = sub_108;
    v_965 = sub_108;
  };
  if (controller_l_recovered) {
    sub_107 = v_965;
  } else {
    sub_107 = v_966;
  };
  sub_106 = sub_107;
  sub_105 = sub_106;
  if (controller_ar_recovered) {
    v_944 = false;
  } else {
    v_944 = sub_37;
  };
  if (controller_ar_failed) {
    sub_158 = sub_36;
  } else {
    sub_158 = false;
  };
  sub_157 = sub_158;
  if (controller_ck_34_1) {
    sub_156 = v_944;
  } else {
    sub_156 = sub_157;
  };
  sub_155 = sub_156;
  if (controller_v_430) {
    sub_154 = sub_155;
  } else {
    sub_154 = sub_71;
  };
  if (controller_v_431) {
    v_945 = false;
  } else {
    v_945 = sub_154;
  };
  if (controller_c_ar1) {
    sub_153 = sub_69;
  } else {
    sub_153 = v_945;
  };
  if (controller_p_arrived) {
    v_946 = false;
    sub_152 = sub_153;
  } else {
    v_946 = sub_153;
    sub_152 = false;
  };
  if (controller_ck_24_1) {
    sub_151 = v_946;
  } else {
    sub_151 = sub_152;
  };
  if (controller_p1_arrived) {
    v_947 = false;
    sub_150 = sub_151;
  } else {
    v_947 = sub_151;
    sub_150 = false;
  };
  if (controller_ck_26_1) {
    sub_149 = v_947;
  } else {
    sub_149 = sub_150;
  };
  if (controller_c_jan) {
    sub_148 = false;
  } else {
    sub_148 = sub_149;
  };
  if (controller_ar_recovered) {
    v_938 = sub_37;
  } else {
    v_938 = sub_25;
  };
  if (controller_ar_failed) {
    sub_168 = sub_24;
  } else {
    sub_168 = sub_36;
  };
  sub_167 = sub_168;
  if (controller_ck_34_1) {
    sub_166 = v_938;
  } else {
    sub_166 = sub_167;
  };
  sub_165 = sub_166;
  sub_164 = sub_165;
  if (controller_v_430) {
    v_939 = sub_164;
  } else {
    v_939 = sub_122;
  };
  if (controller_v_431) {
    v_940 = v_939;
  } else {
    v_940 = sub_122;
  };
  sub_171 = sub_37;
  sub_170 = sub_171;
  if (controller_v_430) {
    sub_169 = sub_170;
  } else {
    sub_169 = sub_164;
  };
  if (controller_v_431) {
    v_941 = sub_122;
  } else {
    v_941 = sub_169;
  };
  if (controller_c_ar1) {
    sub_163 = v_940;
  } else {
    sub_163 = v_941;
  };
  if (controller_p_arrived) {
    v_942 = sub_163;
    sub_162 = sub_153;
  } else {
    v_942 = sub_153;
    sub_162 = sub_163;
  };
  if (controller_ck_24_1) {
    sub_161 = v_942;
  } else {
    sub_161 = sub_162;
  };
  if (controller_v_431) {
    v_937 = sub_126;
    v_936 = sub_70;
  } else {
    v_937 = sub_154;
    v_936 = sub_125;
  };
  if (controller_c_ar1) {
    sub_173 = v_936;
  } else {
    sub_173 = v_937;
  };
  sub_172 = sub_173;
  if (controller_p1_arrived) {
    v_943 = sub_172;
    sub_160 = sub_161;
  } else {
    v_943 = sub_161;
    sub_160 = sub_172;
  };
  if (controller_ck_26_1) {
    sub_159 = v_943;
  } else {
    sub_159 = sub_160;
  };
  if (controller_c_jan) {
    v_948 = sub_112;
  } else {
    v_948 = sub_159;
  };
  if (controller_c_porta) {
    sub_147 = sub_148;
  } else {
    sub_147 = v_948;
  };
  if (controller_c_jan) {
    v_935 = sub_127;
    sub_175 = sub_134;
  } else {
    v_935 = sub_159;
    sub_175 = sub_149;
  };
  if (controller_c_porta) {
    sub_174 = sub_175;
  } else {
    sub_174 = v_935;
  };
  if (controller_shift_turno) {
    v_949 = sub_174;
    sub_146 = sub_147;
  } else {
    v_949 = sub_147;
    sub_146 = sub_174;
  };
  if (controller_ck_1) {
    sub_145 = v_949;
  } else {
    sub_145 = sub_146;
  };
  sub_144 = sub_145;
  sub_143 = sub_144;
  sub_142 = sub_143;
  sub_141 = sub_142;
  if (controller_v_401) {
    sub_104 = sub_141;
  } else {
    sub_104 = sub_105;
  };
  if (controller_c_porta) {
    sub_182 = sub_175;
  } else {
    sub_182 = sub_148;
  };
  if (controller_shift_turno) {
    v_932 = sub_182;
    sub_181 = false;
  } else {
    v_932 = false;
    sub_181 = sub_182;
  };
  if (controller_ck_1) {
    sub_180 = v_932;
  } else {
    sub_180 = sub_181;
  };
  if (controller_p_arrived) {
    v = sub_131;
    sub_188 = sub_153;
  } else {
    v = sub_153;
    sub_188 = sub_131;
  };
  if (controller_ck_24_1) {
    sub_187 = v;
  } else {
    sub_187 = sub_188;
  };
  if (controller_p1_arrived) {
    v_928 = sub_123;
    sub_186 = sub_187;
  } else {
    v_928 = sub_187;
    sub_186 = sub_123;
  };
  if (controller_ck_26_1) {
    v_929 = v_928;
  } else {
    v_929 = sub_186;
  };
  if (controller_c_jan) {
    v_930 = sub_127;
  } else {
    v_930 = v_929;
  };
  if (controller_c_porta) {
    sub_185 = sub_175;
  } else {
    sub_185 = v_930;
  };
  if (controller_shift_turno) {
    v_931 = sub_185;
    sub_184 = sub_147;
  } else {
    v_931 = sub_147;
    sub_184 = sub_185;
  };
  if (controller_ck_1) {
    sub_183 = v_931;
  } else {
    sub_183 = sub_184;
  };
  if (controller_l_failed) {
    sub_179 = sub_180;
  } else {
    sub_179 = sub_183;
  };
  if (controller_ck_38_1) {
    v_934 = sub_180;
    v_933 = sub_183;
  } else {
    v_934 = sub_179;
    v_933 = sub_179;
  };
  if (controller_l_recovered) {
    sub_178 = v_933;
  } else {
    sub_178 = v_934;
  };
  sub_177 = sub_178;
  sub_176 = sub_177;
  if (controller_v_400) {
    sub_103 = sub_176;
  } else {
    sub_103 = sub_104;
  };
  if (controller_v_401) {
    sub_189 = sub_176;
  } else {
    sub_189 = sub_141;
  };
  if (controller_v_400) {
    v_967 = sub_104;
  } else {
    v_967 = sub_189;
  };
  if (controller_v_399) {
    sub_102 = v_967;
  } else {
    sub_102 = sub_103;
  };
  if (p_controller_c_ar2) {
    sub_1 = sub_102;
  } else {
    sub_1 = sub_2;
  };
  sub_0 = sub_1;
  _out->controller_c_ar2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_ar1_step(
  int controller_up, int controller_down, int controller_shift_turno,
  int controller_abre_porta, int controller_p_arrived,
  int controller_p1_arrived, int controller_ar_failed,
  int controller_ar_recovered, int controller_l_failed,
  int controller_l_recovered, int controller_ck_1, int controller_pnr_13,
  int controller_ck_18_1, int controller_pnr_12, int controller_ck_20_1,
  int controller_pnr_11, int controller_ck_22_1, int controller_pnr_10,
  int controller_ck_24_1, int controller_pnr_9, int controller_ck_26_1,
  int controller_pnr_8, int controller_ck_28_1, int controller_pnr_7,
  int controller_ck_30_1, int controller_pnr_6, int controller_v_431,
  int controller_v_430, int controller_pnr_5, int controller_ck_34_1,
  int controller_pnr_4, int controller_v_401, int controller_v_400,
  int controller_v_399, int controller_pnr_3, int controller_ck_38_1,
  int controller_pnr, int p_controller_cdown, int p_controller_cup,
  int p_controller_cl2, int p_controller_cl1, int p_controller_c_policy,
  int p_controller_c_arm, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_luz2, int p_controller_c_luz1, int p_controller_c_jan,
  int p_controller_c_pc, int p_controller_c_rot, int p_controller_c_porta,
  int controller_c_luz2, int controller_c_luz1, int controller_c_jan,
  int controller_c_pc, int controller_c_rot, int controller_c_porta,
  Controller_controller__controller_controller_controller_c_ar1_out* _out) {
  
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
  sub_22 = false;
  if (controller_ar_failed) {
    sub_21 = false;
  } else {
    sub_21 = sub_22;
  };
  sub_20 = sub_21;
  sub_23 = sub_22;
  if (controller_ar_recovered) {
    v_1049 = sub_23;
  } else {
    v_1049 = false;
  };
  if (controller_ck_34_1) {
    sub_19 = v_1049;
  } else {
    sub_19 = sub_20;
  };
  if (controller_c_rot) {
    v_1050 = false;
  } else {
    v_1050 = sub_19;
  };
  if (controller_c_pc) {
    sub_18 = false;
  } else {
    sub_18 = v_1050;
  };
  sub_28 = true;
  if (controller_ar_failed) {
    sub_27 = false;
  } else {
    sub_27 = sub_28;
  };
  sub_26 = sub_27;
  sub_29 = sub_28;
  if (controller_ar_recovered) {
    v_1047 = sub_29;
  } else {
    v_1047 = false;
  };
  if (controller_ck_34_1) {
    sub_25 = v_1047;
  } else {
    sub_25 = sub_26;
  };
  if (controller_c_rot) {
    v_1048 = false;
  } else {
    v_1048 = sub_25;
  };
  if (controller_c_pc) {
    sub_24 = false;
  } else {
    sub_24 = v_1048;
  };
  if (controller_v_430) {
    v_1051 = sub_24;
  } else {
    v_1051 = false;
  };
  if (controller_v_431) {
    sub_17 = v_1051;
  } else {
    sub_17 = sub_18;
  };
  sub_32 = sub_19;
  sub_31 = sub_32;
  sub_33 = sub_25;
  if (controller_c_pc) {
    v_1046 = sub_33;
  } else {
    v_1046 = sub_32;
  };
  if (controller_v_430) {
    sub_30 = v_1046;
  } else {
    sub_30 = sub_31;
  };
  if (controller_p_arrived) {
    v_1052 = sub_30;
    sub_16 = sub_17;
  } else {
    v_1052 = sub_17;
    sub_16 = sub_30;
  };
  if (controller_ck_24_1) {
    sub_15 = v_1052;
  } else {
    sub_15 = sub_16;
  };
  if (controller_c_pc) {
    sub_37 = sub_32;
  } else {
    sub_37 = sub_33;
  };
  sub_38 = sub_33;
  if (controller_v_430) {
    sub_36 = sub_38;
  } else {
    sub_36 = sub_37;
  };
  if (controller_v_431) {
    sub_35 = sub_38;
  } else {
    sub_35 = sub_36;
  };
  if (controller_p_arrived) {
    v_1053 = sub_35;
    sub_34 = sub_17;
  } else {
    v_1053 = sub_17;
    sub_34 = sub_35;
  };
  if (controller_ck_24_1) {
    v_1054 = v_1053;
  } else {
    v_1054 = sub_34;
  };
  if (p_controller_c_ar1) {
    sub_14 = v_1054;
  } else {
    sub_14 = sub_15;
  };
  if (controller_v_430) {
    v_1045 = sub_18;
  } else {
    v_1045 = false;
  };
  if (controller_v_431) {
    sub_40 = v_1045;
  } else {
    sub_40 = sub_24;
  };
  sub_39 = sub_40;
  if (controller_p1_arrived) {
    v_1055 = sub_39;
    sub_13 = sub_14;
  } else {
    v_1055 = sub_14;
    sub_13 = sub_39;
  };
  if (controller_ck_26_1) {
    sub_12 = v_1055;
  } else {
    sub_12 = sub_13;
  };
  if (controller_p_arrived) {
    v_1042 = sub_38;
    v_1041 = sub_31;
    sub_45 = false;
  } else {
    v_1042 = false;
    v_1041 = false;
    sub_45 = sub_31;
  };
  if (controller_ck_24_1) {
    sub_44 = v_1041;
  } else {
    sub_44 = sub_45;
  };
  if (controller_p_arrived) {
    sub_46 = false;
  } else {
    sub_46 = sub_38;
  };
  if (controller_ck_24_1) {
    v_1043 = v_1042;
  } else {
    v_1043 = sub_46;
  };
  if (p_controller_c_ar1) {
    sub_43 = v_1043;
  } else {
    sub_43 = sub_44;
  };
  if (controller_p1_arrived) {
    v_1044 = sub_39;
    sub_42 = sub_43;
  } else {
    v_1044 = sub_43;
    sub_42 = sub_39;
  };
  if (controller_ck_26_1) {
    sub_41 = v_1044;
  } else {
    sub_41 = sub_42;
  };
  if (controller_c_jan) {
    v_1056 = sub_12;
  } else {
    v_1056 = sub_41;
  };
  if (controller_c_porta) {
    sub_11 = false;
  } else {
    sub_11 = v_1056;
  };
  if (controller_p_arrived) {
    v_1039 = false;
    sub_52 = sub_17;
  } else {
    v_1039 = sub_17;
    sub_52 = false;
  };
  if (controller_ck_24_1) {
    sub_51 = v_1039;
  } else {
    sub_51 = sub_52;
  };
  if (controller_p1_arrived) {
    v_1040 = false;
    sub_50 = sub_51;
  } else {
    v_1040 = sub_51;
    sub_50 = false;
  };
  if (controller_ck_26_1) {
    sub_49 = v_1040;
  } else {
    sub_49 = sub_50;
  };
  if (controller_c_jan) {
    sub_48 = sub_49;
  } else {
    sub_48 = false;
  };
  if (controller_c_porta) {
    sub_47 = sub_48;
  } else {
    sub_47 = sub_41;
  };
  if (controller_shift_turno) {
    v_1057 = sub_47;
    sub_10 = sub_11;
  } else {
    v_1057 = sub_11;
    sub_10 = sub_47;
  };
  if (controller_ck_1) {
    sub_9 = v_1057;
  } else {
    sub_9 = sub_10;
  };
  if (controller_c_porta) {
    sub_55 = sub_48;
  } else {
    sub_55 = false;
  };
  if (controller_shift_turno) {
    v_1038 = sub_55;
    sub_54 = sub_11;
  } else {
    v_1038 = sub_11;
    sub_54 = sub_55;
  };
  if (controller_ck_1) {
    sub_53 = v_1038;
  } else {
    sub_53 = sub_54;
  };
  if (controller_l_failed) {
    sub_8 = sub_9;
  } else {
    sub_8 = sub_53;
  };
  if (controller_ck_38_1) {
    v_1059 = sub_9;
    v_1058 = sub_53;
  } else {
    v_1059 = sub_8;
    v_1058 = sub_8;
  };
  if (controller_l_recovered) {
    sub_7 = v_1058;
  } else {
    sub_7 = v_1059;
  };
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (controller_ar_recovered) {
    v_1032 = false;
  } else {
    v_1032 = sub_23;
  };
  if (controller_ar_failed) {
    sub_73 = sub_22;
  } else {
    sub_73 = false;
  };
  sub_72 = sub_73;
  if (controller_ck_34_1) {
    sub_71 = v_1032;
  } else {
    sub_71 = sub_72;
  };
  sub_70 = sub_71;
  sub_69 = sub_70;
  if (controller_ar_recovered) {
    v_1031 = false;
  } else {
    v_1031 = sub_29;
  };
  if (controller_ar_failed) {
    sub_77 = sub_28;
  } else {
    sub_77 = false;
  };
  sub_76 = sub_77;
  if (controller_ck_34_1) {
    sub_75 = v_1031;
  } else {
    sub_75 = sub_76;
  };
  sub_74 = sub_75;
  if (controller_v_430) {
    v_1033 = sub_74;
  } else {
    v_1033 = false;
  };
  if (controller_v_431) {
    sub_68 = v_1033;
  } else {
    sub_68 = sub_69;
  };
  if (controller_p_arrived) {
    v_1034 = false;
    sub_67 = sub_68;
  } else {
    v_1034 = sub_68;
    sub_67 = false;
  };
  if (controller_ck_24_1) {
    sub_66 = v_1034;
  } else {
    sub_66 = sub_67;
  };
  if (controller_p1_arrived) {
    v_1035 = false;
    sub_65 = sub_66;
  } else {
    v_1035 = sub_66;
    sub_65 = false;
  };
  if (controller_ck_26_1) {
    sub_64 = v_1035;
  } else {
    sub_64 = sub_65;
  };
  if (controller_c_jan) {
    sub_63 = false;
  } else {
    sub_63 = sub_64;
  };
  sub_86 = sub_23;
  sub_85 = sub_86;
  sub_84 = sub_85;
  if (controller_ar_recovered) {
    v_1025 = sub_23;
  } else {
    v_1025 = sub_29;
  };
  if (controller_ar_failed) {
    sub_90 = sub_28;
  } else {
    sub_90 = sub_22;
  };
  sub_89 = sub_90;
  if (controller_ck_34_1) {
    sub_88 = v_1025;
  } else {
    sub_88 = sub_89;
  };
  sub_87 = sub_88;
  if (controller_v_430) {
    v_1026 = sub_87;
  } else {
    v_1026 = sub_31;
  };
  if (controller_v_431) {
    sub_83 = v_1026;
  } else {
    sub_83 = sub_84;
  };
  if (controller_p_arrived) {
    v_1027 = sub_83;
    sub_82 = sub_68;
  } else {
    v_1027 = sub_68;
    sub_82 = sub_83;
  };
  if (controller_ck_24_1) {
    sub_81 = v_1027;
  } else {
    sub_81 = sub_82;
  };
  if (controller_ar_recovered) {
    v_1023 = sub_29;
  } else {
    v_1023 = sub_23;
  };
  if (controller_ar_failed) {
    sub_97 = sub_22;
  } else {
    sub_97 = sub_28;
  };
  sub_96 = sub_97;
  if (controller_ck_34_1) {
    sub_95 = v_1023;
  } else {
    sub_95 = sub_96;
  };
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_99 = sub_29;
  sub_98 = sub_99;
  if (controller_v_430) {
    v_1024 = sub_98;
  } else {
    v_1024 = sub_38;
  };
  if (controller_v_431) {
    sub_92 = v_1024;
  } else {
    sub_92 = sub_93;
  };
  if (controller_p_arrived) {
    v_1028 = sub_92;
    sub_91 = sub_68;
  } else {
    v_1028 = sub_68;
    sub_91 = sub_92;
  };
  if (controller_ck_24_1) {
    v_1029 = v_1028;
  } else {
    v_1029 = sub_91;
  };
  if (p_controller_c_ar1) {
    sub_80 = v_1029;
  } else {
    sub_80 = sub_81;
  };
  if (controller_c_rot) {
    v_1020 = sub_75;
  } else {
    v_1020 = sub_88;
  };
  if (controller_c_pc) {
    v_1021 = sub_74;
  } else {
    v_1021 = v_1020;
  };
  if (controller_v_430) {
    v_1022 = v_1021;
  } else {
    v_1022 = false;
  };
  if (controller_c_rot) {
    v_1019 = sub_71;
  } else {
    v_1019 = sub_95;
  };
  if (controller_c_pc) {
    sub_102 = sub_70;
  } else {
    sub_102 = v_1019;
  };
  if (controller_v_431) {
    sub_101 = v_1022;
  } else {
    sub_101 = sub_102;
  };
  sub_100 = sub_101;
  if (controller_p1_arrived) {
    v_1030 = sub_100;
    sub_79 = sub_80;
  } else {
    v_1030 = sub_80;
    sub_79 = sub_100;
  };
  if (controller_ck_26_1) {
    sub_78 = v_1030;
  } else {
    sub_78 = sub_79;
  };
  if (controller_c_jan) {
    v_1036 = sub_12;
  } else {
    v_1036 = sub_78;
  };
  if (controller_c_porta) {
    sub_62 = sub_63;
  } else {
    sub_62 = v_1036;
  };
  if (controller_c_jan) {
    v_1018 = sub_41;
    sub_104 = sub_49;
  } else {
    v_1018 = sub_78;
    sub_104 = sub_64;
  };
  if (controller_c_porta) {
    sub_103 = sub_104;
  } else {
    sub_103 = v_1018;
  };
  if (controller_shift_turno) {
    v_1037 = sub_103;
    sub_61 = sub_62;
  } else {
    v_1037 = sub_62;
    sub_61 = sub_103;
  };
  if (controller_ck_1) {
    sub_60 = v_1037;
  } else {
    sub_60 = sub_61;
  };
  sub_59 = sub_60;
  sub_58 = sub_59;
  sub_57 = sub_58;
  sub_56 = sub_57;
  if (controller_v_401) {
    sub_4 = sub_56;
  } else {
    sub_4 = sub_5;
  };
  if (controller_c_porta) {
    sub_111 = sub_104;
  } else {
    sub_111 = sub_63;
  };
  if (controller_shift_turno) {
    v_1015 = sub_111;
    sub_110 = false;
  } else {
    v_1015 = false;
    sub_110 = sub_111;
  };
  if (controller_ck_1) {
    sub_109 = v_1015;
  } else {
    sub_109 = sub_110;
  };
  if (controller_p_arrived) {
    v_1009 = sub_38;
    v = sub_31;
    sub_118 = sub_68;
  } else {
    v_1009 = sub_68;
    v = sub_68;
    sub_118 = sub_31;
  };
  if (controller_ck_24_1) {
    sub_117 = v;
  } else {
    sub_117 = sub_118;
  };
  if (controller_p_arrived) {
    sub_119 = sub_68;
  } else {
    sub_119 = sub_38;
  };
  if (controller_ck_24_1) {
    v_1010 = v_1009;
  } else {
    v_1010 = sub_119;
  };
  if (p_controller_c_ar1) {
    sub_116 = v_1010;
  } else {
    sub_116 = sub_117;
  };
  if (controller_p1_arrived) {
    v_1011 = sub_39;
    sub_115 = sub_116;
  } else {
    v_1011 = sub_116;
    sub_115 = sub_39;
  };
  if (controller_ck_26_1) {
    v_1012 = v_1011;
  } else {
    v_1012 = sub_115;
  };
  if (controller_c_jan) {
    v_1013 = sub_41;
  } else {
    v_1013 = v_1012;
  };
  if (controller_c_porta) {
    sub_114 = sub_104;
  } else {
    sub_114 = v_1013;
  };
  if (controller_shift_turno) {
    v_1014 = sub_114;
    sub_113 = sub_62;
  } else {
    v_1014 = sub_62;
    sub_113 = sub_114;
  };
  if (controller_ck_1) {
    sub_112 = v_1014;
  } else {
    sub_112 = sub_113;
  };
  if (controller_l_failed) {
    sub_108 = sub_109;
  } else {
    sub_108 = sub_112;
  };
  if (controller_ck_38_1) {
    v_1017 = sub_109;
    v_1016 = sub_112;
  } else {
    v_1017 = sub_108;
    v_1016 = sub_108;
  };
  if (controller_l_recovered) {
    sub_107 = v_1016;
  } else {
    sub_107 = v_1017;
  };
  sub_106 = sub_107;
  sub_105 = sub_106;
  if (controller_v_400) {
    sub_3 = sub_105;
  } else {
    sub_3 = sub_4;
  };
  if (controller_v_401) {
    sub_120 = sub_105;
  } else {
    sub_120 = sub_56;
  };
  if (controller_v_400) {
    v_1060 = sub_4;
  } else {
    v_1060 = sub_120;
  };
  if (controller_v_399) {
    sub_2 = v_1060;
  } else {
    sub_2 = sub_3;
  };
  sub_1 = sub_2;
  sub_0 = sub_1;
  _out->controller_c_ar1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_luz2_step(
  int controller_up, int controller_down, int controller_shift_turno,
  int controller_abre_porta, int controller_p_arrived,
  int controller_p1_arrived, int controller_ar_failed,
  int controller_ar_recovered, int controller_l_failed,
  int controller_l_recovered, int controller_ck_1, int controller_pnr_13,
  int controller_ck_18_1, int controller_pnr_12, int controller_ck_20_1,
  int controller_pnr_11, int controller_ck_22_1, int controller_pnr_10,
  int controller_ck_24_1, int controller_pnr_9, int controller_ck_26_1,
  int controller_pnr_8, int controller_ck_28_1, int controller_pnr_7,
  int controller_ck_30_1, int controller_pnr_6, int controller_v_431,
  int controller_v_430, int controller_pnr_5, int controller_ck_34_1,
  int controller_pnr_4, int controller_v_401, int controller_v_400,
  int controller_v_399, int controller_pnr_3, int controller_ck_38_1,
  int controller_pnr, int p_controller_cdown, int p_controller_cup,
  int p_controller_cl2, int p_controller_cl1, int p_controller_c_policy,
  int p_controller_c_arm, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_luz2, int p_controller_c_luz1, int p_controller_c_jan,
  int p_controller_c_pc, int p_controller_c_rot, int p_controller_c_porta,
  int controller_c_luz1, int controller_c_jan, int controller_c_pc,
  int controller_c_rot, int controller_c_porta,
  Controller_controller__controller_controller_controller_c_luz2_out* _out) {
  
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
  sub_21 = false;
  if (controller_ar_failed) {
    sub_20 = false;
  } else {
    sub_20 = sub_21;
  };
  sub_22 = true;
  if (controller_ar_failed) {
    v_1086 = false;
  } else {
    v_1086 = sub_22;
  };
  if (p_controller_c_luz2) {
    sub_19 = v_1086;
  } else {
    sub_19 = sub_20;
  };
  sub_18 = sub_19;
  sub_24 = sub_21;
  if (p_controller_c_luz2) {
    sub_23 = sub_22;
  } else {
    sub_23 = sub_24;
  };
  if (controller_ar_recovered) {
    v_1087 = sub_23;
  } else {
    v_1087 = false;
  };
  if (controller_ck_34_1) {
    sub_17 = v_1087;
  } else {
    sub_17 = sub_18;
  };
  if (controller_c_rot) {
    v_1088 = false;
  } else {
    v_1088 = sub_17;
  };
  if (controller_c_pc) {
    sub_16 = false;
  } else {
    sub_16 = v_1088;
  };
  if (controller_v_430) {
    v_1089 = sub_16;
  } else {
    v_1089 = false;
  };
  if (controller_v_431) {
    sub_15 = v_1089;
  } else {
    sub_15 = sub_16;
  };
  sub_26 = sub_17;
  sub_25 = sub_26;
  if (controller_p_arrived) {
    v_1090 = sub_25;
    sub_14 = sub_15;
  } else {
    v_1090 = sub_15;
    sub_14 = sub_25;
  };
  if (controller_ck_24_1) {
    sub_13 = v_1090;
  } else {
    sub_13 = sub_14;
  };
  sub_27 = sub_15;
  if (controller_p1_arrived) {
    v_1091 = sub_27;
    sub_12 = sub_13;
  } else {
    v_1091 = sub_13;
    sub_12 = sub_27;
  };
  if (controller_ck_26_1) {
    sub_11 = v_1091;
  } else {
    sub_11 = sub_12;
  };
  if (controller_p_arrived) {
    v_1084 = sub_25;
    sub_31 = false;
  } else {
    v_1084 = false;
    sub_31 = sub_25;
  };
  if (controller_ck_24_1) {
    sub_30 = v_1084;
  } else {
    sub_30 = sub_31;
  };
  if (controller_p1_arrived) {
    v_1085 = sub_27;
    sub_29 = sub_30;
  } else {
    v_1085 = sub_30;
    sub_29 = sub_27;
  };
  if (controller_ck_26_1) {
    sub_28 = v_1085;
  } else {
    sub_28 = sub_29;
  };
  if (controller_c_jan) {
    v_1092 = sub_11;
  } else {
    v_1092 = sub_28;
  };
  if (controller_c_porta) {
    sub_10 = false;
  } else {
    sub_10 = v_1092;
  };
  if (controller_p_arrived) {
    v_1082 = false;
    sub_37 = sub_15;
  } else {
    v_1082 = sub_15;
    sub_37 = false;
  };
  if (controller_ck_24_1) {
    sub_36 = v_1082;
  } else {
    sub_36 = sub_37;
  };
  if (controller_p1_arrived) {
    v_1083 = false;
    sub_35 = sub_36;
  } else {
    v_1083 = sub_36;
    sub_35 = false;
  };
  if (controller_ck_26_1) {
    sub_34 = v_1083;
  } else {
    sub_34 = sub_35;
  };
  if (controller_c_jan) {
    sub_33 = sub_34;
  } else {
    sub_33 = false;
  };
  if (controller_c_porta) {
    sub_32 = sub_33;
  } else {
    sub_32 = sub_28;
  };
  if (controller_shift_turno) {
    v_1093 = sub_32;
    sub_9 = sub_10;
  } else {
    v_1093 = sub_10;
    sub_9 = sub_32;
  };
  if (controller_ck_1) {
    sub_8 = v_1093;
  } else {
    sub_8 = sub_9;
  };
  if (controller_c_porta) {
    sub_40 = sub_33;
  } else {
    sub_40 = false;
  };
  if (controller_shift_turno) {
    v_1081 = sub_40;
    sub_39 = sub_10;
  } else {
    v_1081 = sub_10;
    sub_39 = sub_40;
  };
  if (controller_ck_1) {
    sub_38 = v_1081;
  } else {
    sub_38 = sub_39;
  };
  if (controller_l_failed) {
    sub_7 = sub_8;
  } else {
    sub_7 = sub_38;
  };
  if (controller_ck_38_1) {
    v_1095 = sub_8;
    v_1094 = sub_38;
  } else {
    v_1095 = sub_7;
    v_1094 = sub_7;
  };
  if (controller_l_recovered) {
    sub_6 = v_1094;
  } else {
    sub_6 = v_1095;
  };
  sub_5 = sub_6;
  sub_4 = sub_5;
  if (controller_ar_recovered) {
    v_1075 = false;
  } else {
    v_1075 = sub_23;
  };
  if (controller_ar_failed) {
    v_1074 = sub_22;
    sub_59 = sub_21;
  } else {
    v_1074 = false;
    sub_59 = false;
  };
  if (p_controller_c_luz2) {
    sub_58 = v_1074;
  } else {
    sub_58 = sub_59;
  };
  sub_57 = sub_58;
  if (controller_ck_34_1) {
    sub_56 = v_1075;
  } else {
    sub_56 = sub_57;
  };
  sub_55 = sub_56;
  sub_54 = sub_55;
  if (controller_v_430) {
    v_1076 = sub_54;
  } else {
    v_1076 = false;
  };
  if (controller_v_431) {
    sub_53 = v_1076;
  } else {
    sub_53 = sub_54;
  };
  if (controller_p_arrived) {
    v_1077 = false;
    sub_52 = sub_53;
  } else {
    v_1077 = sub_53;
    sub_52 = false;
  };
  if (controller_ck_24_1) {
    sub_51 = v_1077;
  } else {
    sub_51 = sub_52;
  };
  if (controller_p1_arrived) {
    v_1078 = false;
    sub_50 = sub_51;
  } else {
    v_1078 = sub_51;
    sub_50 = false;
  };
  if (controller_ck_26_1) {
    sub_49 = v_1078;
  } else {
    sub_49 = sub_50;
  };
  if (controller_c_jan) {
    sub_48 = false;
  } else {
    sub_48 = sub_49;
  };
  sub_67 = sub_23;
  sub_66 = sub_67;
  sub_65 = sub_66;
  if (controller_v_430) {
    v_1071 = sub_65;
  } else {
    v_1071 = sub_25;
  };
  if (controller_v_431) {
    sub_64 = v_1071;
  } else {
    sub_64 = sub_65;
  };
  if (controller_p_arrived) {
    v_1072 = sub_64;
    sub_63 = sub_53;
  } else {
    v_1072 = sub_53;
    sub_63 = sub_64;
  };
  if (controller_ck_24_1) {
    sub_62 = v_1072;
  } else {
    sub_62 = sub_63;
  };
  if (controller_c_rot) {
    v_1069 = sub_56;
  } else {
    v_1069 = sub_67;
  };
  if (controller_c_pc) {
    sub_70 = sub_55;
  } else {
    sub_70 = v_1069;
  };
  if (controller_v_430) {
    v_1070 = sub_70;
  } else {
    v_1070 = false;
  };
  if (controller_v_431) {
    sub_69 = v_1070;
  } else {
    sub_69 = sub_70;
  };
  sub_68 = sub_69;
  if (controller_p1_arrived) {
    v_1073 = sub_68;
    sub_61 = sub_62;
  } else {
    v_1073 = sub_62;
    sub_61 = sub_68;
  };
  if (controller_ck_26_1) {
    sub_60 = v_1073;
  } else {
    sub_60 = sub_61;
  };
  if (controller_c_jan) {
    v_1079 = sub_11;
  } else {
    v_1079 = sub_60;
  };
  if (controller_c_porta) {
    sub_47 = sub_48;
  } else {
    sub_47 = v_1079;
  };
  if (controller_c_jan) {
    v_1068 = sub_28;
    sub_72 = sub_34;
  } else {
    v_1068 = sub_60;
    sub_72 = sub_49;
  };
  if (controller_c_porta) {
    sub_71 = sub_72;
  } else {
    sub_71 = v_1068;
  };
  if (controller_shift_turno) {
    v_1080 = sub_71;
    sub_46 = sub_47;
  } else {
    v_1080 = sub_47;
    sub_46 = sub_71;
  };
  if (controller_ck_1) {
    sub_45 = v_1080;
  } else {
    sub_45 = sub_46;
  };
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (controller_v_401) {
    sub_3 = sub_41;
  } else {
    sub_3 = sub_4;
  };
  if (controller_c_porta) {
    sub_79 = sub_72;
  } else {
    sub_79 = sub_48;
  };
  if (controller_shift_turno) {
    v_1065 = sub_79;
    sub_78 = false;
  } else {
    v_1065 = false;
    sub_78 = sub_79;
  };
  if (controller_ck_1) {
    sub_77 = v_1065;
  } else {
    sub_77 = sub_78;
  };
  if (controller_p_arrived) {
    v = sub_25;
    sub_85 = sub_53;
  } else {
    v = sub_53;
    sub_85 = sub_25;
  };
  if (controller_ck_24_1) {
    sub_84 = v;
  } else {
    sub_84 = sub_85;
  };
  if (controller_p1_arrived) {
    v_1061 = sub_27;
    sub_83 = sub_84;
  } else {
    v_1061 = sub_84;
    sub_83 = sub_27;
  };
  if (controller_ck_26_1) {
    v_1062 = v_1061;
  } else {
    v_1062 = sub_83;
  };
  if (controller_c_jan) {
    v_1063 = sub_28;
  } else {
    v_1063 = v_1062;
  };
  if (controller_c_porta) {
    sub_82 = sub_72;
  } else {
    sub_82 = v_1063;
  };
  if (controller_shift_turno) {
    v_1064 = sub_82;
    sub_81 = sub_47;
  } else {
    v_1064 = sub_47;
    sub_81 = sub_82;
  };
  if (controller_ck_1) {
    sub_80 = v_1064;
  } else {
    sub_80 = sub_81;
  };
  if (controller_l_failed) {
    sub_76 = sub_77;
  } else {
    sub_76 = sub_80;
  };
  if (controller_ck_38_1) {
    v_1067 = sub_77;
    v_1066 = sub_80;
  } else {
    v_1067 = sub_76;
    v_1066 = sub_76;
  };
  if (controller_l_recovered) {
    sub_75 = v_1066;
  } else {
    sub_75 = v_1067;
  };
  sub_74 = sub_75;
  sub_73 = sub_74;
  if (controller_v_400) {
    sub_2 = sub_73;
  } else {
    sub_2 = sub_3;
  };
  if (controller_v_401) {
    sub_86 = sub_73;
  } else {
    sub_86 = sub_41;
  };
  if (controller_v_400) {
    v_1096 = sub_3;
  } else {
    v_1096 = sub_86;
  };
  if (controller_v_399) {
    sub_1 = v_1096;
  } else {
    sub_1 = sub_2;
  };
  sub_0 = sub_1;
  _out->controller_c_luz2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_luz1_step(
  int controller_up, int controller_down, int controller_shift_turno,
  int controller_abre_porta, int controller_p_arrived,
  int controller_p1_arrived, int controller_ar_failed,
  int controller_ar_recovered, int controller_l_failed,
  int controller_l_recovered, int controller_ck_1, int controller_pnr_13,
  int controller_ck_18_1, int controller_pnr_12, int controller_ck_20_1,
  int controller_pnr_11, int controller_ck_22_1, int controller_pnr_10,
  int controller_ck_24_1, int controller_pnr_9, int controller_ck_26_1,
  int controller_pnr_8, int controller_ck_28_1, int controller_pnr_7,
  int controller_ck_30_1, int controller_pnr_6, int controller_v_431,
  int controller_v_430, int controller_pnr_5, int controller_ck_34_1,
  int controller_pnr_4, int controller_v_401, int controller_v_400,
  int controller_v_399, int controller_pnr_3, int controller_ck_38_1,
  int controller_pnr, int p_controller_cdown, int p_controller_cup,
  int p_controller_cl2, int p_controller_cl1, int p_controller_c_policy,
  int p_controller_c_arm, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_luz2, int p_controller_c_luz1, int p_controller_c_jan,
  int p_controller_c_pc, int p_controller_c_rot, int p_controller_c_porta,
  int controller_c_jan, int controller_c_pc, int controller_c_rot,
  int controller_c_porta,
  Controller_controller__controller_controller_controller_c_luz1_out* _out) {
  
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
  sub_20 = false;
  if (controller_ar_failed) {
    sub_19 = false;
  } else {
    sub_19 = sub_20;
  };
  sub_18 = sub_19;
  sub_21 = sub_20;
  if (controller_ar_recovered) {
    v_1155 = sub_21;
  } else {
    v_1155 = false;
  };
  if (controller_ck_34_1) {
    sub_17 = v_1155;
  } else {
    sub_17 = sub_18;
  };
  if (controller_c_rot) {
    v_1156 = false;
  } else {
    v_1156 = sub_17;
  };
  if (controller_c_pc) {
    sub_16 = false;
  } else {
    sub_16 = v_1156;
  };
  if (controller_v_430) {
    v_1157 = sub_16;
  } else {
    v_1157 = false;
  };
  if (controller_v_431) {
    sub_15 = v_1157;
  } else {
    sub_15 = sub_16;
  };
  sub_23 = sub_17;
  sub_22 = sub_23;
  if (controller_p_arrived) {
    v_1158 = sub_22;
    sub_14 = sub_15;
  } else {
    v_1158 = sub_15;
    sub_14 = sub_22;
  };
  if (controller_ck_24_1) {
    sub_13 = v_1158;
  } else {
    sub_13 = sub_14;
  };
  sub_24 = sub_15;
  if (controller_p1_arrived) {
    v_1159 = sub_24;
    sub_12 = sub_13;
  } else {
    v_1159 = sub_13;
    sub_12 = sub_24;
  };
  if (controller_ck_26_1) {
    sub_11 = v_1159;
  } else {
    sub_11 = sub_12;
  };
  if (controller_p_arrived) {
    v_1153 = sub_22;
    sub_28 = false;
  } else {
    v_1153 = false;
    sub_28 = sub_22;
  };
  if (controller_ck_24_1) {
    sub_27 = v_1153;
  } else {
    sub_27 = sub_28;
  };
  if (controller_p1_arrived) {
    v_1154 = sub_24;
    sub_26 = sub_27;
  } else {
    v_1154 = sub_27;
    sub_26 = sub_24;
  };
  if (controller_ck_26_1) {
    sub_25 = v_1154;
  } else {
    sub_25 = sub_26;
  };
  if (controller_c_jan) {
    v_1160 = sub_11;
  } else {
    v_1160 = sub_25;
  };
  if (controller_c_porta) {
    sub_10 = false;
  } else {
    sub_10 = v_1160;
  };
  if (controller_p_arrived) {
    v_1151 = false;
    sub_34 = sub_15;
  } else {
    v_1151 = sub_15;
    sub_34 = false;
  };
  if (controller_ck_24_1) {
    sub_33 = v_1151;
  } else {
    sub_33 = sub_34;
  };
  if (controller_p1_arrived) {
    v_1152 = false;
    sub_32 = sub_33;
  } else {
    v_1152 = sub_33;
    sub_32 = false;
  };
  if (controller_ck_26_1) {
    sub_31 = v_1152;
  } else {
    sub_31 = sub_32;
  };
  if (controller_c_jan) {
    sub_30 = sub_31;
  } else {
    sub_30 = false;
  };
  if (controller_c_porta) {
    sub_29 = sub_30;
  } else {
    sub_29 = sub_25;
  };
  if (controller_shift_turno) {
    v_1161 = sub_29;
    sub_9 = sub_10;
  } else {
    v_1161 = sub_10;
    sub_9 = sub_29;
  };
  if (controller_ck_1) {
    sub_8 = v_1161;
  } else {
    sub_8 = sub_9;
  };
  if (controller_c_porta) {
    sub_37 = sub_30;
  } else {
    sub_37 = false;
  };
  if (controller_shift_turno) {
    v_1150 = sub_37;
    sub_36 = sub_10;
  } else {
    v_1150 = sub_10;
    sub_36 = sub_37;
  };
  if (controller_ck_1) {
    sub_35 = v_1150;
  } else {
    sub_35 = sub_36;
  };
  if (controller_l_failed) {
    sub_7 = sub_8;
  } else {
    sub_7 = sub_35;
  };
  if (controller_ck_38_1) {
    v_1163 = sub_8;
    v_1162 = sub_35;
  } else {
    v_1163 = sub_7;
    v_1162 = sub_7;
  };
  if (controller_l_recovered) {
    sub_6 = v_1162;
  } else {
    sub_6 = v_1163;
  };
  sub_5 = sub_6;
  sub_4 = sub_5;
  if (controller_ar_recovered) {
    v_1144 = false;
  } else {
    v_1144 = sub_21;
  };
  if (controller_ar_failed) {
    sub_55 = sub_20;
  } else {
    sub_55 = false;
  };
  sub_54 = sub_55;
  if (controller_ck_34_1) {
    sub_53 = v_1144;
  } else {
    sub_53 = sub_54;
  };
  sub_52 = sub_53;
  sub_51 = sub_52;
  if (controller_v_430) {
    v_1145 = sub_51;
  } else {
    v_1145 = false;
  };
  if (controller_v_431) {
    sub_50 = v_1145;
  } else {
    sub_50 = sub_51;
  };
  if (controller_p_arrived) {
    v_1146 = false;
    sub_49 = sub_50;
  } else {
    v_1146 = sub_50;
    sub_49 = false;
  };
  if (controller_ck_24_1) {
    sub_48 = v_1146;
  } else {
    sub_48 = sub_49;
  };
  if (controller_p1_arrived) {
    v_1147 = false;
    sub_47 = sub_48;
  } else {
    v_1147 = sub_48;
    sub_47 = false;
  };
  if (controller_ck_26_1) {
    sub_46 = v_1147;
  } else {
    sub_46 = sub_47;
  };
  if (controller_c_jan) {
    sub_45 = false;
  } else {
    sub_45 = sub_46;
  };
  sub_63 = sub_21;
  sub_62 = sub_63;
  sub_61 = sub_62;
  if (controller_v_430) {
    v_1141 = sub_61;
  } else {
    v_1141 = sub_22;
  };
  if (controller_v_431) {
    sub_60 = v_1141;
  } else {
    sub_60 = sub_61;
  };
  if (controller_p_arrived) {
    v_1142 = sub_60;
    sub_59 = sub_50;
  } else {
    v_1142 = sub_50;
    sub_59 = sub_60;
  };
  if (controller_ck_24_1) {
    sub_58 = v_1142;
  } else {
    sub_58 = sub_59;
  };
  if (controller_c_rot) {
    v_1139 = sub_53;
  } else {
    v_1139 = sub_63;
  };
  if (controller_c_pc) {
    sub_66 = sub_52;
  } else {
    sub_66 = v_1139;
  };
  if (controller_v_430) {
    v_1140 = sub_66;
  } else {
    v_1140 = false;
  };
  if (controller_v_431) {
    sub_65 = v_1140;
  } else {
    sub_65 = sub_66;
  };
  sub_64 = sub_65;
  if (controller_p1_arrived) {
    v_1143 = sub_64;
    sub_57 = sub_58;
  } else {
    v_1143 = sub_58;
    sub_57 = sub_64;
  };
  if (controller_ck_26_1) {
    sub_56 = v_1143;
  } else {
    sub_56 = sub_57;
  };
  if (controller_c_jan) {
    v_1148 = sub_11;
  } else {
    v_1148 = sub_56;
  };
  if (controller_c_porta) {
    sub_44 = sub_45;
  } else {
    sub_44 = v_1148;
  };
  if (controller_c_jan) {
    v_1138 = sub_25;
    sub_68 = sub_31;
  } else {
    v_1138 = sub_56;
    sub_68 = sub_46;
  };
  if (controller_c_porta) {
    sub_67 = sub_68;
  } else {
    sub_67 = v_1138;
  };
  if (controller_shift_turno) {
    v_1149 = sub_67;
    sub_43 = sub_44;
  } else {
    v_1149 = sub_44;
    sub_43 = sub_67;
  };
  if (controller_ck_1) {
    sub_42 = v_1149;
  } else {
    sub_42 = sub_43;
  };
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (controller_v_401) {
    sub_3 = sub_38;
  } else {
    sub_3 = sub_4;
  };
  if (controller_c_porta) {
    sub_75 = sub_68;
  } else {
    sub_75 = sub_45;
  };
  if (controller_shift_turno) {
    v_1135 = sub_75;
    sub_74 = false;
  } else {
    v_1135 = false;
    sub_74 = sub_75;
  };
  if (controller_ck_1) {
    sub_73 = v_1135;
  } else {
    sub_73 = sub_74;
  };
  if (controller_p_arrived) {
    v_1130 = sub_22;
    sub_81 = sub_50;
  } else {
    v_1130 = sub_50;
    sub_81 = sub_22;
  };
  if (controller_ck_24_1) {
    sub_80 = v_1130;
  } else {
    sub_80 = sub_81;
  };
  if (controller_p1_arrived) {
    v_1131 = sub_24;
    sub_79 = sub_80;
  } else {
    v_1131 = sub_80;
    sub_79 = sub_24;
  };
  if (controller_ck_26_1) {
    v_1132 = v_1131;
  } else {
    v_1132 = sub_79;
  };
  if (controller_c_jan) {
    v_1133 = sub_25;
  } else {
    v_1133 = v_1132;
  };
  if (controller_c_porta) {
    sub_78 = sub_68;
  } else {
    sub_78 = v_1133;
  };
  if (controller_shift_turno) {
    v_1134 = sub_78;
    sub_77 = sub_44;
  } else {
    v_1134 = sub_44;
    sub_77 = sub_78;
  };
  if (controller_ck_1) {
    sub_76 = v_1134;
  } else {
    sub_76 = sub_77;
  };
  if (controller_l_failed) {
    sub_72 = sub_73;
  } else {
    sub_72 = sub_76;
  };
  if (controller_ck_38_1) {
    v_1137 = sub_73;
    v_1136 = sub_76;
  } else {
    v_1137 = sub_72;
    v_1136 = sub_72;
  };
  if (controller_l_recovered) {
    sub_71 = v_1136;
  } else {
    sub_71 = v_1137;
  };
  sub_70 = sub_71;
  sub_69 = sub_70;
  if (controller_v_400) {
    sub_2 = sub_69;
  } else {
    sub_2 = sub_3;
  };
  if (controller_v_401) {
    sub_82 = sub_69;
  } else {
    sub_82 = sub_38;
  };
  if (controller_v_400) {
    v_1164 = sub_3;
  } else {
    v_1164 = sub_82;
  };
  if (controller_v_399) {
    sub_1 = v_1164;
  } else {
    sub_1 = sub_2;
  };
  sub_101 = true;
  if (controller_ar_failed) {
    sub_100 = false;
  } else {
    sub_100 = sub_101;
  };
  sub_99 = sub_100;
  sub_102 = sub_101;
  if (controller_ar_recovered) {
    v_1121 = sub_102;
  } else {
    v_1121 = false;
  };
  if (controller_ck_34_1) {
    sub_98 = v_1121;
  } else {
    sub_98 = sub_99;
  };
  if (controller_c_rot) {
    v_1122 = false;
  } else {
    v_1122 = sub_98;
  };
  if (controller_c_pc) {
    sub_97 = false;
  } else {
    sub_97 = v_1122;
  };
  if (controller_v_430) {
    v_1123 = sub_97;
  } else {
    v_1123 = false;
  };
  if (controller_v_431) {
    sub_96 = v_1123;
  } else {
    sub_96 = sub_97;
  };
  sub_104 = sub_98;
  sub_103 = sub_104;
  if (controller_p_arrived) {
    v_1124 = sub_103;
    sub_95 = sub_96;
  } else {
    v_1124 = sub_96;
    sub_95 = sub_103;
  };
  if (controller_ck_24_1) {
    sub_94 = v_1124;
  } else {
    sub_94 = sub_95;
  };
  sub_105 = sub_96;
  if (controller_p1_arrived) {
    v_1125 = sub_105;
    sub_93 = sub_94;
  } else {
    v_1125 = sub_94;
    sub_93 = sub_105;
  };
  if (controller_ck_26_1) {
    sub_92 = v_1125;
  } else {
    sub_92 = sub_93;
  };
  if (controller_p_arrived) {
    v_1119 = sub_103;
    sub_109 = false;
  } else {
    v_1119 = false;
    sub_109 = sub_103;
  };
  if (controller_ck_24_1) {
    sub_108 = v_1119;
  } else {
    sub_108 = sub_109;
  };
  if (controller_p1_arrived) {
    v_1120 = sub_105;
    sub_107 = sub_108;
  } else {
    v_1120 = sub_108;
    sub_107 = sub_105;
  };
  if (controller_ck_26_1) {
    sub_106 = v_1120;
  } else {
    sub_106 = sub_107;
  };
  if (controller_c_jan) {
    v_1126 = sub_92;
  } else {
    v_1126 = sub_106;
  };
  if (controller_c_porta) {
    sub_91 = false;
  } else {
    sub_91 = v_1126;
  };
  if (controller_p_arrived) {
    v_1117 = false;
    sub_115 = sub_96;
  } else {
    v_1117 = sub_96;
    sub_115 = false;
  };
  if (controller_ck_24_1) {
    sub_114 = v_1117;
  } else {
    sub_114 = sub_115;
  };
  if (controller_p1_arrived) {
    v_1118 = false;
    sub_113 = sub_114;
  } else {
    v_1118 = sub_114;
    sub_113 = false;
  };
  if (controller_ck_26_1) {
    sub_112 = v_1118;
  } else {
    sub_112 = sub_113;
  };
  if (controller_c_jan) {
    sub_111 = sub_112;
  } else {
    sub_111 = false;
  };
  if (controller_c_porta) {
    sub_110 = sub_111;
  } else {
    sub_110 = sub_106;
  };
  if (controller_shift_turno) {
    v_1127 = sub_110;
    sub_90 = sub_91;
  } else {
    v_1127 = sub_91;
    sub_90 = sub_110;
  };
  if (controller_ck_1) {
    sub_89 = v_1127;
  } else {
    sub_89 = sub_90;
  };
  if (controller_c_porta) {
    sub_118 = sub_111;
  } else {
    sub_118 = false;
  };
  if (controller_shift_turno) {
    v_1116 = sub_118;
    sub_117 = sub_91;
  } else {
    v_1116 = sub_91;
    sub_117 = sub_118;
  };
  if (controller_ck_1) {
    sub_116 = v_1116;
  } else {
    sub_116 = sub_117;
  };
  if (controller_l_failed) {
    sub_88 = sub_89;
  } else {
    sub_88 = sub_116;
  };
  if (controller_ck_38_1) {
    v_1129 = sub_89;
    v_1128 = sub_116;
  } else {
    v_1129 = sub_88;
    v_1128 = sub_88;
  };
  if (controller_l_recovered) {
    sub_87 = v_1128;
  } else {
    sub_87 = v_1129;
  };
  sub_86 = sub_87;
  sub_85 = sub_86;
  if (controller_ar_recovered) {
    v_1110 = false;
  } else {
    v_1110 = sub_102;
  };
  if (controller_ar_failed) {
    sub_136 = sub_101;
  } else {
    sub_136 = false;
  };
  sub_135 = sub_136;
  if (controller_ck_34_1) {
    sub_134 = v_1110;
  } else {
    sub_134 = sub_135;
  };
  sub_133 = sub_134;
  sub_132 = sub_133;
  if (controller_v_430) {
    v_1111 = sub_132;
  } else {
    v_1111 = false;
  };
  if (controller_v_431) {
    sub_131 = v_1111;
  } else {
    sub_131 = sub_132;
  };
  if (controller_p_arrived) {
    v_1112 = false;
    sub_130 = sub_131;
  } else {
    v_1112 = sub_131;
    sub_130 = false;
  };
  if (controller_ck_24_1) {
    sub_129 = v_1112;
  } else {
    sub_129 = sub_130;
  };
  if (controller_p1_arrived) {
    v_1113 = false;
    sub_128 = sub_129;
  } else {
    v_1113 = sub_129;
    sub_128 = false;
  };
  if (controller_ck_26_1) {
    sub_127 = v_1113;
  } else {
    sub_127 = sub_128;
  };
  if (controller_c_jan) {
    sub_126 = false;
  } else {
    sub_126 = sub_127;
  };
  sub_144 = sub_102;
  sub_143 = sub_144;
  sub_142 = sub_143;
  if (controller_v_430) {
    v_1107 = sub_142;
  } else {
    v_1107 = sub_103;
  };
  if (controller_v_431) {
    sub_141 = v_1107;
  } else {
    sub_141 = sub_142;
  };
  if (controller_p_arrived) {
    v_1108 = sub_141;
    sub_140 = sub_131;
  } else {
    v_1108 = sub_131;
    sub_140 = sub_141;
  };
  if (controller_ck_24_1) {
    sub_139 = v_1108;
  } else {
    sub_139 = sub_140;
  };
  if (controller_c_rot) {
    v_1105 = sub_134;
  } else {
    v_1105 = sub_144;
  };
  if (controller_c_pc) {
    sub_147 = sub_133;
  } else {
    sub_147 = v_1105;
  };
  if (controller_v_430) {
    v_1106 = sub_147;
  } else {
    v_1106 = false;
  };
  if (controller_v_431) {
    sub_146 = v_1106;
  } else {
    sub_146 = sub_147;
  };
  sub_145 = sub_146;
  if (controller_p1_arrived) {
    v_1109 = sub_145;
    sub_138 = sub_139;
  } else {
    v_1109 = sub_139;
    sub_138 = sub_145;
  };
  if (controller_ck_26_1) {
    sub_137 = v_1109;
  } else {
    sub_137 = sub_138;
  };
  if (controller_c_jan) {
    v_1114 = sub_92;
  } else {
    v_1114 = sub_137;
  };
  if (controller_c_porta) {
    sub_125 = sub_126;
  } else {
    sub_125 = v_1114;
  };
  if (controller_c_jan) {
    v_1104 = sub_106;
    sub_149 = sub_112;
  } else {
    v_1104 = sub_137;
    sub_149 = sub_127;
  };
  if (controller_c_porta) {
    sub_148 = sub_149;
  } else {
    sub_148 = v_1104;
  };
  if (controller_shift_turno) {
    v_1115 = sub_148;
    sub_124 = sub_125;
  } else {
    v_1115 = sub_125;
    sub_124 = sub_148;
  };
  if (controller_ck_1) {
    sub_123 = v_1115;
  } else {
    sub_123 = sub_124;
  };
  sub_122 = sub_123;
  sub_121 = sub_122;
  sub_120 = sub_121;
  sub_119 = sub_120;
  if (controller_v_401) {
    sub_84 = sub_119;
  } else {
    sub_84 = sub_85;
  };
  if (controller_c_porta) {
    sub_156 = sub_149;
  } else {
    sub_156 = sub_126;
  };
  if (controller_shift_turno) {
    v_1101 = sub_156;
    sub_155 = false;
  } else {
    v_1101 = false;
    sub_155 = sub_156;
  };
  if (controller_ck_1) {
    sub_154 = v_1101;
  } else {
    sub_154 = sub_155;
  };
  if (controller_p_arrived) {
    v = sub_103;
    sub_162 = sub_131;
  } else {
    v = sub_131;
    sub_162 = sub_103;
  };
  if (controller_ck_24_1) {
    sub_161 = v;
  } else {
    sub_161 = sub_162;
  };
  if (controller_p1_arrived) {
    v_1097 = sub_105;
    sub_160 = sub_161;
  } else {
    v_1097 = sub_161;
    sub_160 = sub_105;
  };
  if (controller_ck_26_1) {
    v_1098 = v_1097;
  } else {
    v_1098 = sub_160;
  };
  if (controller_c_jan) {
    v_1099 = sub_106;
  } else {
    v_1099 = v_1098;
  };
  if (controller_c_porta) {
    sub_159 = sub_149;
  } else {
    sub_159 = v_1099;
  };
  if (controller_shift_turno) {
    v_1100 = sub_159;
    sub_158 = sub_125;
  } else {
    v_1100 = sub_125;
    sub_158 = sub_159;
  };
  if (controller_ck_1) {
    sub_157 = v_1100;
  } else {
    sub_157 = sub_158;
  };
  if (controller_l_failed) {
    sub_153 = sub_154;
  } else {
    sub_153 = sub_157;
  };
  if (controller_ck_38_1) {
    v_1103 = sub_154;
    v_1102 = sub_157;
  } else {
    v_1103 = sub_153;
    v_1102 = sub_153;
  };
  if (controller_l_recovered) {
    sub_152 = v_1102;
  } else {
    sub_152 = v_1103;
  };
  sub_151 = sub_152;
  sub_150 = sub_151;
  if (controller_v_400) {
    sub_83 = sub_150;
  } else {
    sub_83 = sub_84;
  };
  if (controller_v_401) {
    sub_163 = sub_150;
  } else {
    sub_163 = sub_119;
  };
  if (controller_v_400) {
    v_1165 = sub_84;
  } else {
    v_1165 = sub_163;
  };
  if (controller_v_399) {
    v_1166 = v_1165;
  } else {
    v_1166 = sub_83;
  };
  if (p_controller_c_luz1) {
    sub_0 = v_1166;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_luz1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_jan_step(
  int controller_up, int controller_down, int controller_shift_turno,
  int controller_abre_porta, int controller_p_arrived,
  int controller_p1_arrived, int controller_ar_failed,
  int controller_ar_recovered, int controller_l_failed,
  int controller_l_recovered, int controller_ck_1, int controller_pnr_13,
  int controller_ck_18_1, int controller_pnr_12, int controller_ck_20_1,
  int controller_pnr_11, int controller_ck_22_1, int controller_pnr_10,
  int controller_ck_24_1, int controller_pnr_9, int controller_ck_26_1,
  int controller_pnr_8, int controller_ck_28_1, int controller_pnr_7,
  int controller_ck_30_1, int controller_pnr_6, int controller_v_431,
  int controller_v_430, int controller_pnr_5, int controller_ck_34_1,
  int controller_pnr_4, int controller_v_401, int controller_v_400,
  int controller_v_399, int controller_pnr_3, int controller_ck_38_1,
  int controller_pnr, int p_controller_cdown, int p_controller_cup,
  int p_controller_cl2, int p_controller_cl1, int p_controller_c_policy,
  int p_controller_c_arm, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_luz2, int p_controller_c_luz1, int p_controller_c_jan,
  int p_controller_c_pc, int p_controller_c_rot, int p_controller_c_porta,
  int controller_c_pc, int controller_c_rot, int controller_c_porta,
  Controller_controller__controller_controller_controller_c_jan_out* _out) {
  
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
  sub_19 = true;
  if (controller_ar_failed) {
    sub_18 = false;
  } else {
    sub_18 = sub_19;
  };
  sub_17 = sub_18;
  sub_20 = sub_19;
  if (controller_ar_recovered) {
    v_1225 = sub_20;
  } else {
    v_1225 = false;
  };
  if (controller_ck_34_1) {
    sub_16 = v_1225;
  } else {
    sub_16 = sub_17;
  };
  if (controller_c_rot) {
    v_1226 = false;
  } else {
    v_1226 = sub_16;
  };
  if (controller_c_pc) {
    sub_15 = false;
  } else {
    sub_15 = v_1226;
  };
  if (controller_v_430) {
    v_1227 = sub_15;
  } else {
    v_1227 = false;
  };
  if (controller_v_431) {
    sub_14 = v_1227;
  } else {
    sub_14 = sub_15;
  };
  sub_26 = false;
  if (controller_ar_failed) {
    sub_25 = false;
  } else {
    sub_25 = sub_26;
  };
  sub_24 = sub_25;
  sub_27 = sub_26;
  if (controller_ar_recovered) {
    v_1224 = sub_27;
  } else {
    v_1224 = false;
  };
  if (controller_ck_34_1) {
    sub_23 = v_1224;
  } else {
    sub_23 = sub_24;
  };
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (controller_p_arrived) {
    v_1228 = sub_21;
    sub_13 = sub_14;
  } else {
    v_1228 = sub_14;
    sub_13 = sub_21;
  };
  if (controller_ck_24_1) {
    sub_12 = v_1228;
  } else {
    sub_12 = sub_13;
  };
  if (controller_c_rot) {
    v_1222 = false;
  } else {
    v_1222 = sub_23;
  };
  if (controller_c_pc) {
    sub_30 = false;
  } else {
    sub_30 = v_1222;
  };
  if (controller_v_430) {
    v_1223 = sub_30;
  } else {
    v_1223 = false;
  };
  if (controller_v_431) {
    sub_29 = v_1223;
  } else {
    sub_29 = sub_30;
  };
  sub_28 = sub_29;
  if (controller_p1_arrived) {
    v_1229 = sub_28;
    sub_11 = sub_12;
  } else {
    v_1229 = sub_12;
    sub_11 = sub_28;
  };
  if (controller_ck_26_1) {
    v_1230 = v_1229;
  } else {
    v_1230 = sub_11;
  };
  if (controller_c_porta) {
    sub_10 = false;
  } else {
    sub_10 = v_1230;
  };
  if (controller_p_arrived) {
    v_1218 = false;
    sub_35 = sub_14;
  } else {
    v_1218 = sub_14;
    sub_35 = false;
  };
  if (controller_ck_24_1) {
    sub_34 = v_1218;
  } else {
    sub_34 = sub_35;
  };
  if (controller_p1_arrived) {
    v_1219 = false;
    sub_33 = sub_34;
  } else {
    v_1219 = sub_34;
    sub_33 = false;
  };
  if (controller_ck_26_1) {
    sub_32 = v_1219;
  } else {
    sub_32 = sub_33;
  };
  if (controller_p_arrived) {
    v_1217 = sub_21;
    sub_38 = false;
  } else {
    v_1217 = false;
    sub_38 = sub_21;
  };
  if (controller_ck_24_1) {
    sub_37 = v_1217;
  } else {
    sub_37 = sub_38;
  };
  if (controller_p1_arrived) {
    v_1220 = sub_28;
    sub_36 = sub_37;
  } else {
    v_1220 = sub_37;
    sub_36 = sub_28;
  };
  if (controller_ck_26_1) {
    v_1221 = v_1220;
  } else {
    v_1221 = sub_36;
  };
  if (controller_c_porta) {
    sub_31 = sub_32;
  } else {
    sub_31 = v_1221;
  };
  if (controller_shift_turno) {
    v_1231 = sub_31;
    sub_9 = sub_10;
  } else {
    v_1231 = sub_10;
    sub_9 = sub_31;
  };
  if (controller_ck_1) {
    sub_8 = v_1231;
  } else {
    sub_8 = sub_9;
  };
  if (controller_c_porta) {
    sub_41 = sub_32;
  } else {
    sub_41 = false;
  };
  if (controller_shift_turno) {
    v_1216 = sub_41;
    sub_40 = sub_10;
  } else {
    v_1216 = sub_10;
    sub_40 = sub_41;
  };
  if (controller_ck_1) {
    sub_39 = v_1216;
  } else {
    sub_39 = sub_40;
  };
  if (controller_l_failed) {
    sub_7 = sub_8;
  } else {
    sub_7 = sub_39;
  };
  if (controller_ck_38_1) {
    v_1233 = sub_8;
    v_1232 = sub_39;
  } else {
    v_1233 = sub_7;
    v_1232 = sub_7;
  };
  if (controller_l_recovered) {
    sub_6 = v_1232;
  } else {
    sub_6 = v_1233;
  };
  sub_5 = sub_6;
  sub_4 = sub_5;
  if (controller_ar_recovered) {
    v_1209 = false;
  } else {
    v_1209 = sub_27;
  };
  if (controller_ar_failed) {
    sub_58 = sub_26;
  } else {
    sub_58 = false;
  };
  sub_57 = sub_58;
  if (controller_ck_34_1) {
    sub_56 = v_1209;
  } else {
    sub_56 = sub_57;
  };
  sub_55 = sub_56;
  sub_54 = sub_55;
  if (controller_v_430) {
    v_1210 = sub_54;
  } else {
    v_1210 = false;
  };
  if (controller_v_431) {
    sub_53 = v_1210;
  } else {
    sub_53 = sub_54;
  };
  if (controller_p_arrived) {
    v_1211 = false;
    sub_52 = sub_53;
  } else {
    v_1211 = sub_53;
    sub_52 = false;
  };
  if (controller_ck_24_1) {
    sub_51 = v_1211;
  } else {
    sub_51 = sub_52;
  };
  if (controller_p1_arrived) {
    v_1212 = false;
    sub_50 = sub_51;
  } else {
    v_1212 = sub_51;
    sub_50 = false;
  };
  if (controller_ck_26_1) {
    sub_49 = v_1212;
  } else {
    sub_49 = sub_50;
  };
  if (controller_ar_recovered) {
    v_1205 = sub_20;
  } else {
    v_1205 = sub_27;
  };
  if (controller_ar_failed) {
    sub_66 = sub_26;
  } else {
    sub_66 = sub_19;
  };
  sub_65 = sub_66;
  if (controller_ck_34_1) {
    sub_64 = v_1205;
  } else {
    sub_64 = sub_65;
  };
  if (controller_c_rot) {
    v_1206 = sub_56;
  } else {
    v_1206 = sub_64;
  };
  if (controller_c_pc) {
    sub_63 = sub_55;
  } else {
    sub_63 = v_1206;
  };
  if (controller_v_430) {
    v_1207 = sub_63;
  } else {
    v_1207 = false;
  };
  if (controller_v_431) {
    sub_62 = v_1207;
  } else {
    sub_62 = sub_63;
  };
  sub_70 = sub_27;
  sub_69 = sub_70;
  sub_68 = sub_69;
  if (controller_v_430) {
    v_1204 = sub_68;
  } else {
    v_1204 = sub_21;
  };
  if (controller_v_431) {
    sub_67 = v_1204;
  } else {
    sub_67 = sub_68;
  };
  if (controller_p_arrived) {
    v_1208 = sub_67;
    sub_61 = sub_62;
  } else {
    v_1208 = sub_62;
    sub_61 = sub_67;
  };
  if (controller_ck_24_1) {
    sub_60 = v_1208;
  } else {
    sub_60 = sub_61;
  };
  if (controller_c_rot) {
    v_1202 = sub_56;
  } else {
    v_1202 = sub_70;
  };
  if (controller_c_pc) {
    sub_73 = sub_55;
  } else {
    sub_73 = v_1202;
  };
  if (controller_v_430) {
    v_1203 = sub_73;
  } else {
    v_1203 = false;
  };
  if (controller_v_431) {
    sub_72 = v_1203;
  } else {
    sub_72 = sub_73;
  };
  sub_71 = sub_72;
  if (controller_p1_arrived) {
    v_1213 = sub_71;
    sub_59 = sub_60;
  } else {
    v_1213 = sub_60;
    sub_59 = sub_71;
  };
  if (controller_ck_26_1) {
    v_1214 = v_1213;
  } else {
    v_1214 = sub_59;
  };
  if (controller_c_porta) {
    sub_48 = sub_49;
  } else {
    sub_48 = v_1214;
  };
  if (controller_p_arrived) {
    v_1198 = false;
    sub_78 = sub_62;
  } else {
    v_1198 = sub_62;
    sub_78 = false;
  };
  if (controller_ck_24_1) {
    sub_77 = v_1198;
  } else {
    sub_77 = sub_78;
  };
  if (controller_p1_arrived) {
    v_1199 = false;
    sub_76 = sub_77;
  } else {
    v_1199 = sub_77;
    sub_76 = false;
  };
  if (controller_ck_26_1) {
    sub_75 = v_1199;
  } else {
    sub_75 = sub_76;
  };
  if (controller_p_arrived) {
    v_1197 = sub_67;
    sub_81 = sub_53;
  } else {
    v_1197 = sub_53;
    sub_81 = sub_67;
  };
  if (controller_ck_24_1) {
    sub_80 = v_1197;
  } else {
    sub_80 = sub_81;
  };
  if (controller_p1_arrived) {
    v_1200 = sub_71;
    sub_79 = sub_80;
  } else {
    v_1200 = sub_80;
    sub_79 = sub_71;
  };
  if (controller_ck_26_1) {
    v_1201 = v_1200;
  } else {
    v_1201 = sub_79;
  };
  if (controller_c_porta) {
    sub_74 = sub_75;
  } else {
    sub_74 = v_1201;
  };
  if (controller_shift_turno) {
    v_1215 = sub_74;
    sub_47 = sub_48;
  } else {
    v_1215 = sub_48;
    sub_47 = sub_74;
  };
  if (controller_ck_1) {
    sub_46 = v_1215;
  } else {
    sub_46 = sub_47;
  };
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  if (controller_v_401) {
    sub_3 = sub_42;
  } else {
    sub_3 = sub_4;
  };
  if (controller_c_porta) {
    sub_88 = sub_75;
  } else {
    sub_88 = sub_49;
  };
  if (controller_shift_turno) {
    v_1194 = sub_88;
    sub_87 = false;
  } else {
    v_1194 = false;
    sub_87 = sub_88;
  };
  if (controller_ck_1) {
    sub_86 = v_1194;
  } else {
    sub_86 = sub_87;
  };
  if (controller_p_arrived) {
    v_1190 = sub_21;
    sub_94 = sub_53;
  } else {
    v_1190 = sub_53;
    sub_94 = sub_21;
  };
  if (controller_ck_24_1) {
    sub_93 = v_1190;
  } else {
    sub_93 = sub_94;
  };
  if (controller_p1_arrived) {
    v_1191 = sub_28;
    sub_92 = sub_93;
  } else {
    v_1191 = sub_93;
    sub_92 = sub_28;
  };
  if (controller_ck_26_1) {
    v_1192 = v_1191;
  } else {
    v_1192 = sub_92;
  };
  if (controller_c_porta) {
    sub_91 = sub_75;
  } else {
    sub_91 = v_1192;
  };
  if (controller_shift_turno) {
    v_1193 = sub_91;
    sub_90 = sub_48;
  } else {
    v_1193 = sub_48;
    sub_90 = sub_91;
  };
  if (controller_ck_1) {
    sub_89 = v_1193;
  } else {
    sub_89 = sub_90;
  };
  if (controller_l_failed) {
    sub_85 = sub_86;
  } else {
    sub_85 = sub_89;
  };
  if (controller_ck_38_1) {
    v_1195 = sub_89;
  } else {
    v_1195 = sub_85;
  };
  sub_95 = sub_86;
  if (controller_ck_38_1) {
    v_1196 = sub_95;
  } else {
    v_1196 = sub_85;
  };
  if (controller_l_recovered) {
    sub_84 = v_1195;
  } else {
    sub_84 = v_1196;
  };
  sub_83 = sub_84;
  sub_82 = sub_83;
  if (controller_v_400) {
    sub_2 = sub_82;
  } else {
    sub_2 = sub_3;
  };
  if (controller_v_401) {
    sub_96 = sub_82;
  } else {
    sub_96 = sub_42;
  };
  if (controller_v_400) {
    v_1234 = sub_3;
  } else {
    v_1234 = sub_96;
  };
  if (controller_v_399) {
    sub_1 = v_1234;
  } else {
    sub_1 = sub_2;
  };
  sub_110 = sub_16;
  sub_109 = sub_110;
  if (controller_p_arrived) {
    v_1184 = sub_109;
    sub_108 = sub_14;
  } else {
    v_1184 = sub_14;
    sub_108 = sub_109;
  };
  if (controller_ck_24_1) {
    sub_107 = v_1184;
  } else {
    sub_107 = sub_108;
  };
  sub_111 = sub_14;
  if (controller_p1_arrived) {
    v_1185 = sub_111;
    sub_106 = sub_107;
  } else {
    v_1185 = sub_107;
    sub_106 = sub_111;
  };
  if (controller_ck_26_1) {
    v_1186 = v_1185;
  } else {
    v_1186 = sub_106;
  };
  if (controller_c_porta) {
    sub_105 = false;
  } else {
    sub_105 = v_1186;
  };
  if (controller_p_arrived) {
    v_1181 = sub_109;
    sub_115 = false;
  } else {
    v_1181 = false;
    sub_115 = sub_109;
  };
  if (controller_ck_24_1) {
    sub_114 = v_1181;
  } else {
    sub_114 = sub_115;
  };
  if (controller_p1_arrived) {
    v_1182 = sub_111;
    sub_113 = sub_114;
  } else {
    v_1182 = sub_114;
    sub_113 = sub_111;
  };
  if (controller_ck_26_1) {
    v_1183 = v_1182;
  } else {
    v_1183 = sub_113;
  };
  if (controller_c_porta) {
    sub_112 = sub_32;
  } else {
    sub_112 = v_1183;
  };
  if (controller_shift_turno) {
    v_1187 = sub_112;
    sub_104 = sub_105;
  } else {
    v_1187 = sub_105;
    sub_104 = sub_112;
  };
  if (controller_ck_1) {
    sub_103 = v_1187;
  } else {
    sub_103 = sub_104;
  };
  if (controller_shift_turno) {
    v_1180 = sub_41;
    sub_117 = sub_105;
  } else {
    v_1180 = sub_105;
    sub_117 = sub_41;
  };
  if (controller_ck_1) {
    sub_116 = v_1180;
  } else {
    sub_116 = sub_117;
  };
  if (controller_l_failed) {
    sub_102 = sub_103;
  } else {
    sub_102 = sub_116;
  };
  if (controller_ck_38_1) {
    v_1189 = sub_103;
    v_1188 = sub_116;
  } else {
    v_1189 = sub_102;
    v_1188 = sub_102;
  };
  if (controller_l_recovered) {
    sub_101 = v_1188;
  } else {
    sub_101 = v_1189;
  };
  sub_100 = sub_101;
  sub_99 = sub_100;
  sub_130 = sub_64;
  sub_129 = sub_130;
  if (controller_v_430) {
    v_1175 = sub_129;
  } else {
    v_1175 = sub_109;
  };
  if (controller_v_431) {
    sub_128 = v_1175;
  } else {
    sub_128 = sub_129;
  };
  if (controller_p_arrived) {
    v_1176 = sub_128;
    sub_127 = sub_62;
  } else {
    v_1176 = sub_62;
    sub_127 = sub_128;
  };
  if (controller_ck_24_1) {
    sub_126 = v_1176;
  } else {
    sub_126 = sub_127;
  };
  sub_131 = sub_62;
  if (controller_p1_arrived) {
    v_1177 = sub_131;
    sub_125 = sub_126;
  } else {
    v_1177 = sub_126;
    sub_125 = sub_131;
  };
  if (controller_ck_26_1) {
    v_1178 = v_1177;
  } else {
    v_1178 = sub_125;
  };
  if (controller_c_porta) {
    sub_124 = sub_49;
  } else {
    sub_124 = v_1178;
  };
  if (controller_p_arrived) {
    v_1172 = sub_128;
    sub_135 = sub_53;
  } else {
    v_1172 = sub_53;
    sub_135 = sub_128;
  };
  if (controller_ck_24_1) {
    sub_134 = v_1172;
  } else {
    sub_134 = sub_135;
  };
  if (controller_p1_arrived) {
    v_1173 = sub_131;
    sub_133 = sub_134;
  } else {
    v_1173 = sub_134;
    sub_133 = sub_131;
  };
  if (controller_ck_26_1) {
    v_1174 = v_1173;
  } else {
    v_1174 = sub_133;
  };
  if (controller_c_porta) {
    sub_132 = sub_75;
  } else {
    sub_132 = v_1174;
  };
  if (controller_shift_turno) {
    v_1179 = sub_132;
    sub_123 = sub_124;
  } else {
    v_1179 = sub_124;
    sub_123 = sub_132;
  };
  if (controller_ck_1) {
    sub_122 = v_1179;
  } else {
    sub_122 = sub_123;
  };
  sub_121 = sub_122;
  sub_120 = sub_121;
  sub_119 = sub_120;
  sub_118 = sub_119;
  if (controller_v_401) {
    sub_98 = sub_118;
  } else {
    sub_98 = sub_99;
  };
  if (controller_p_arrived) {
    v = sub_109;
    sub_145 = sub_53;
  } else {
    v = sub_53;
    sub_145 = sub_109;
  };
  if (controller_ck_24_1) {
    sub_144 = v;
  } else {
    sub_144 = sub_145;
  };
  if (controller_p1_arrived) {
    v_1167 = sub_111;
    sub_143 = sub_144;
  } else {
    v_1167 = sub_144;
    sub_143 = sub_111;
  };
  if (controller_ck_26_1) {
    v_1168 = v_1167;
  } else {
    v_1168 = sub_143;
  };
  if (controller_c_porta) {
    sub_142 = sub_75;
  } else {
    sub_142 = v_1168;
  };
  if (controller_shift_turno) {
    v_1169 = sub_142;
    sub_141 = sub_124;
  } else {
    v_1169 = sub_124;
    sub_141 = sub_142;
  };
  if (controller_ck_1) {
    sub_140 = v_1169;
  } else {
    sub_140 = sub_141;
  };
  if (controller_l_failed) {
    sub_139 = sub_86;
  } else {
    sub_139 = sub_140;
  };
  if (controller_ck_38_1) {
    v_1171 = sub_95;
    v_1170 = sub_140;
  } else {
    v_1171 = sub_139;
    v_1170 = sub_139;
  };
  if (controller_l_recovered) {
    sub_138 = v_1170;
  } else {
    sub_138 = v_1171;
  };
  sub_137 = sub_138;
  sub_136 = sub_137;
  if (controller_v_400) {
    sub_97 = sub_136;
  } else {
    sub_97 = sub_98;
  };
  if (controller_v_401) {
    sub_146 = sub_136;
  } else {
    sub_146 = sub_118;
  };
  if (controller_v_400) {
    v_1235 = sub_98;
  } else {
    v_1235 = sub_146;
  };
  if (controller_v_399) {
    v_1236 = v_1235;
  } else {
    v_1236 = sub_97;
  };
  if (p_controller_c_jan) {
    sub_0 = v_1236;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_jan = sub_0;;
}

void Controller_controller__controller_controller_controller_c_pc_step(
  int controller_up, int controller_down, int controller_shift_turno,
  int controller_abre_porta, int controller_p_arrived,
  int controller_p1_arrived, int controller_ar_failed,
  int controller_ar_recovered, int controller_l_failed,
  int controller_l_recovered, int controller_ck_1, int controller_pnr_13,
  int controller_ck_18_1, int controller_pnr_12, int controller_ck_20_1,
  int controller_pnr_11, int controller_ck_22_1, int controller_pnr_10,
  int controller_ck_24_1, int controller_pnr_9, int controller_ck_26_1,
  int controller_pnr_8, int controller_ck_28_1, int controller_pnr_7,
  int controller_ck_30_1, int controller_pnr_6, int controller_v_431,
  int controller_v_430, int controller_pnr_5, int controller_ck_34_1,
  int controller_pnr_4, int controller_v_401, int controller_v_400,
  int controller_v_399, int controller_pnr_3, int controller_ck_38_1,
  int controller_pnr, int p_controller_cdown, int p_controller_cup,
  int p_controller_cl2, int p_controller_cl1, int p_controller_c_policy,
  int p_controller_c_arm, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_luz2, int p_controller_c_luz1, int p_controller_c_jan,
  int p_controller_c_pc, int p_controller_c_rot, int p_controller_c_porta,
  int controller_c_rot, int controller_c_porta,
  Controller_controller__controller_controller_controller_c_pc_out* _out) {
  
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
  sub_17 = false;
  if (controller_ar_failed) {
    sub_16 = false;
  } else {
    sub_16 = sub_17;
  };
  sub_15 = sub_16;
  sub_18 = sub_17;
  if (controller_ar_recovered) {
    v_1267 = sub_18;
  } else {
    v_1267 = false;
  };
  if (controller_ck_34_1) {
    v_1268 = v_1267;
  } else {
    v_1268 = sub_15;
  };
  if (controller_c_rot) {
    sub_14 = false;
  } else {
    sub_14 = v_1268;
  };
  if (controller_v_430) {
    v_1269 = sub_14;
  } else {
    v_1269 = false;
  };
  if (controller_v_431) {
    sub_13 = v_1269;
  } else {
    sub_13 = sub_14;
  };
  sub_24 = p_controller_c_pc;
  sub_23 = sub_24;
  if (controller_ar_failed) {
    sub_22 = false;
  } else {
    sub_22 = sub_23;
  };
  sub_21 = sub_22;
  sub_25 = sub_23;
  if (controller_ar_recovered) {
    v_1266 = sub_25;
  } else {
    v_1266 = false;
  };
  if (controller_ck_34_1) {
    sub_20 = v_1266;
  } else {
    sub_20 = sub_21;
  };
  sub_19 = sub_20;
  if (controller_p_arrived) {
    v_1270 = sub_19;
    sub_12 = sub_13;
  } else {
    v_1270 = sub_13;
    sub_12 = sub_19;
  };
  if (controller_ck_24_1) {
    sub_11 = v_1270;
  } else {
    sub_11 = sub_12;
  };
  sub_26 = sub_13;
  if (controller_p1_arrived) {
    v_1271 = sub_26;
    sub_10 = sub_11;
  } else {
    v_1271 = sub_11;
    sub_10 = sub_26;
  };
  if (controller_ck_26_1) {
    v_1272 = v_1271;
  } else {
    v_1272 = sub_10;
  };
  if (controller_c_porta) {
    sub_9 = false;
  } else {
    sub_9 = v_1272;
  };
  if (controller_p_arrived) {
    v_1262 = false;
    sub_31 = sub_13;
  } else {
    v_1262 = sub_13;
    sub_31 = false;
  };
  if (controller_ck_24_1) {
    sub_30 = v_1262;
  } else {
    sub_30 = sub_31;
  };
  if (controller_p1_arrived) {
    v_1263 = false;
    sub_29 = sub_30;
  } else {
    v_1263 = sub_30;
    sub_29 = false;
  };
  if (controller_ck_26_1) {
    sub_28 = v_1263;
  } else {
    sub_28 = sub_29;
  };
  if (controller_p_arrived) {
    v_1261 = sub_19;
    sub_34 = false;
  } else {
    v_1261 = false;
    sub_34 = sub_19;
  };
  if (controller_ck_24_1) {
    sub_33 = v_1261;
  } else {
    sub_33 = sub_34;
  };
  if (controller_p1_arrived) {
    v_1264 = sub_26;
    sub_32 = sub_33;
  } else {
    v_1264 = sub_33;
    sub_32 = sub_26;
  };
  if (controller_ck_26_1) {
    v_1265 = v_1264;
  } else {
    v_1265 = sub_32;
  };
  if (controller_c_porta) {
    sub_27 = sub_28;
  } else {
    sub_27 = v_1265;
  };
  if (controller_shift_turno) {
    v_1273 = sub_27;
    sub_8 = sub_9;
  } else {
    v_1273 = sub_9;
    sub_8 = sub_27;
  };
  if (controller_ck_1) {
    sub_7 = v_1273;
  } else {
    sub_7 = sub_8;
  };
  if (controller_c_porta) {
    sub_37 = sub_28;
  } else {
    sub_37 = false;
  };
  if (controller_shift_turno) {
    v_1260 = sub_37;
    sub_36 = sub_9;
  } else {
    v_1260 = sub_9;
    sub_36 = sub_37;
  };
  if (controller_ck_1) {
    sub_35 = v_1260;
  } else {
    sub_35 = sub_36;
  };
  if (controller_l_failed) {
    sub_6 = sub_7;
  } else {
    sub_6 = sub_35;
  };
  if (controller_ck_38_1) {
    v_1275 = sub_7;
    v_1274 = sub_35;
  } else {
    v_1275 = sub_6;
    v_1274 = sub_6;
  };
  if (controller_l_recovered) {
    sub_5 = v_1274;
  } else {
    sub_5 = v_1275;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  if (controller_ar_recovered) {
    v_1253 = false;
  } else {
    v_1253 = sub_25;
  };
  if (controller_ar_failed) {
    sub_53 = sub_23;
  } else {
    sub_53 = false;
  };
  sub_52 = sub_53;
  if (controller_ck_34_1) {
    sub_51 = v_1253;
  } else {
    sub_51 = sub_52;
  };
  sub_50 = sub_51;
  if (controller_v_430) {
    v_1254 = sub_50;
  } else {
    v_1254 = false;
  };
  if (controller_v_431) {
    sub_49 = v_1254;
  } else {
    sub_49 = sub_50;
  };
  if (controller_p_arrived) {
    v_1255 = false;
    sub_48 = sub_49;
  } else {
    v_1255 = sub_49;
    sub_48 = false;
  };
  if (controller_ck_24_1) {
    sub_47 = v_1255;
  } else {
    sub_47 = sub_48;
  };
  if (controller_p1_arrived) {
    v_1256 = false;
    sub_46 = sub_47;
  } else {
    v_1256 = sub_47;
    sub_46 = false;
  };
  if (controller_ck_26_1) {
    sub_45 = v_1256;
  } else {
    sub_45 = sub_46;
  };
  if (controller_ar_recovered) {
    v_1249 = sub_18;
  } else {
    v_1249 = sub_25;
  };
  if (controller_ar_failed) {
    sub_60 = sub_23;
  } else {
    sub_60 = sub_17;
  };
  sub_59 = sub_60;
  if (controller_ck_34_1) {
    v_1250 = v_1249;
  } else {
    v_1250 = sub_59;
  };
  if (controller_c_rot) {
    sub_58 = sub_51;
  } else {
    sub_58 = v_1250;
  };
  if (controller_v_430) {
    v_1251 = sub_58;
  } else {
    v_1251 = false;
  };
  if (controller_v_431) {
    sub_57 = v_1251;
  } else {
    sub_57 = sub_58;
  };
  sub_63 = sub_25;
  sub_62 = sub_63;
  if (controller_v_430) {
    v_1248 = sub_62;
  } else {
    v_1248 = sub_19;
  };
  if (controller_v_431) {
    sub_61 = v_1248;
  } else {
    sub_61 = sub_62;
  };
  if (controller_p_arrived) {
    v_1252 = sub_61;
    sub_56 = sub_57;
  } else {
    v_1252 = sub_57;
    sub_56 = sub_61;
  };
  if (controller_ck_24_1) {
    sub_55 = v_1252;
  } else {
    sub_55 = sub_56;
  };
  sub_64 = sub_57;
  if (controller_p1_arrived) {
    v_1257 = sub_64;
    sub_54 = sub_55;
  } else {
    v_1257 = sub_55;
    sub_54 = sub_64;
  };
  if (controller_ck_26_1) {
    v_1258 = v_1257;
  } else {
    v_1258 = sub_54;
  };
  if (controller_c_porta) {
    sub_44 = sub_45;
  } else {
    sub_44 = v_1258;
  };
  if (controller_p_arrived) {
    v_1244 = false;
    sub_69 = sub_57;
  } else {
    v_1244 = sub_57;
    sub_69 = false;
  };
  if (controller_ck_24_1) {
    sub_68 = v_1244;
  } else {
    sub_68 = sub_69;
  };
  if (controller_p1_arrived) {
    v_1245 = false;
    sub_67 = sub_68;
  } else {
    v_1245 = sub_68;
    sub_67 = false;
  };
  if (controller_ck_26_1) {
    sub_66 = v_1245;
  } else {
    sub_66 = sub_67;
  };
  if (controller_p_arrived) {
    v_1243 = sub_61;
    sub_72 = sub_49;
  } else {
    v_1243 = sub_49;
    sub_72 = sub_61;
  };
  if (controller_ck_24_1) {
    sub_71 = v_1243;
  } else {
    sub_71 = sub_72;
  };
  if (controller_p1_arrived) {
    v_1246 = sub_64;
    sub_70 = sub_71;
  } else {
    v_1246 = sub_71;
    sub_70 = sub_64;
  };
  if (controller_ck_26_1) {
    v_1247 = v_1246;
  } else {
    v_1247 = sub_70;
  };
  if (controller_c_porta) {
    sub_65 = sub_66;
  } else {
    sub_65 = v_1247;
  };
  if (controller_shift_turno) {
    v_1259 = sub_65;
    sub_43 = sub_44;
  } else {
    v_1259 = sub_44;
    sub_43 = sub_65;
  };
  if (controller_ck_1) {
    sub_42 = v_1259;
  } else {
    sub_42 = sub_43;
  };
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (controller_v_401) {
    sub_2 = sub_38;
  } else {
    sub_2 = sub_3;
  };
  if (controller_c_porta) {
    sub_79 = sub_66;
  } else {
    sub_79 = sub_45;
  };
  if (controller_shift_turno) {
    v_1240 = sub_79;
    sub_78 = false;
  } else {
    v_1240 = false;
    sub_78 = sub_79;
  };
  if (controller_ck_1) {
    sub_77 = v_1240;
  } else {
    sub_77 = sub_78;
  };
  if (controller_p_arrived) {
    v = sub_19;
    sub_85 = sub_49;
  } else {
    v = sub_49;
    sub_85 = sub_19;
  };
  if (controller_ck_24_1) {
    sub_84 = v;
  } else {
    sub_84 = sub_85;
  };
  if (controller_p1_arrived) {
    v_1237 = sub_26;
    sub_83 = sub_84;
  } else {
    v_1237 = sub_84;
    sub_83 = sub_26;
  };
  if (controller_ck_26_1) {
    v_1238 = v_1237;
  } else {
    v_1238 = sub_83;
  };
  if (controller_c_porta) {
    sub_82 = sub_66;
  } else {
    sub_82 = v_1238;
  };
  if (controller_shift_turno) {
    v_1239 = sub_82;
    sub_81 = sub_44;
  } else {
    v_1239 = sub_44;
    sub_81 = sub_82;
  };
  if (controller_ck_1) {
    sub_80 = v_1239;
  } else {
    sub_80 = sub_81;
  };
  if (controller_l_failed) {
    sub_76 = sub_77;
  } else {
    sub_76 = sub_80;
  };
  if (controller_ck_38_1) {
    v_1242 = sub_77;
    v_1241 = sub_80;
  } else {
    v_1242 = sub_76;
    v_1241 = sub_76;
  };
  if (controller_l_recovered) {
    sub_75 = v_1241;
  } else {
    sub_75 = v_1242;
  };
  sub_74 = sub_75;
  sub_73 = sub_74;
  if (controller_v_400) {
    sub_1 = sub_73;
  } else {
    sub_1 = sub_2;
  };
  if (controller_v_401) {
    sub_86 = sub_73;
  } else {
    sub_86 = sub_38;
  };
  if (controller_v_400) {
    v_1276 = sub_2;
  } else {
    v_1276 = sub_86;
  };
  if (controller_v_399) {
    sub_0 = v_1276;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_pc = sub_0;;
}

void Controller_controller__controller_controller_controller_c_rot_step(
  int controller_up, int controller_down, int controller_shift_turno,
  int controller_abre_porta, int controller_p_arrived,
  int controller_p1_arrived, int controller_ar_failed,
  int controller_ar_recovered, int controller_l_failed,
  int controller_l_recovered, int controller_ck_1, int controller_pnr_13,
  int controller_ck_18_1, int controller_pnr_12, int controller_ck_20_1,
  int controller_pnr_11, int controller_ck_22_1, int controller_pnr_10,
  int controller_ck_24_1, int controller_pnr_9, int controller_ck_26_1,
  int controller_pnr_8, int controller_ck_28_1, int controller_pnr_7,
  int controller_ck_30_1, int controller_pnr_6, int controller_v_431,
  int controller_v_430, int controller_pnr_5, int controller_ck_34_1,
  int controller_pnr_4, int controller_v_401, int controller_v_400,
  int controller_v_399, int controller_pnr_3, int controller_ck_38_1,
  int controller_pnr, int p_controller_cdown, int p_controller_cup,
  int p_controller_cl2, int p_controller_cl1, int p_controller_c_policy,
  int p_controller_c_arm, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_luz2, int p_controller_c_luz1, int p_controller_c_jan,
  int p_controller_c_pc, int p_controller_c_rot, int p_controller_c_porta,
  int controller_c_porta,
  Controller_controller__controller_controller_controller_c_rot_out* _out) {
  
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
  sub_17 = false;
  if (controller_ar_failed) {
    sub_16 = false;
  } else {
    sub_16 = sub_17;
  };
  sub_15 = sub_16;
  sub_18 = sub_17;
  if (controller_ar_recovered) {
    v_1306 = sub_18;
  } else {
    v_1306 = false;
  };
  if (controller_ck_34_1) {
    sub_14 = v_1306;
  } else {
    sub_14 = sub_15;
  };
  if (controller_v_430) {
    v_1307 = sub_14;
  } else {
    v_1307 = false;
  };
  if (controller_v_431) {
    sub_13 = v_1307;
  } else {
    sub_13 = sub_14;
  };
  sub_23 = p_controller_c_rot;
  sub_22 = sub_23;
  if (controller_ar_failed) {
    sub_21 = false;
  } else {
    sub_21 = sub_22;
  };
  sub_20 = sub_21;
  sub_24 = sub_22;
  if (controller_ar_recovered) {
    v_1305 = sub_24;
  } else {
    v_1305 = false;
  };
  if (controller_ck_34_1) {
    sub_19 = v_1305;
  } else {
    sub_19 = sub_20;
  };
  if (controller_p_arrived) {
    v_1308 = sub_19;
    sub_12 = sub_13;
  } else {
    v_1308 = sub_13;
    sub_12 = sub_19;
  };
  if (controller_ck_24_1) {
    sub_11 = v_1308;
  } else {
    sub_11 = sub_12;
  };
  sub_25 = sub_13;
  if (controller_p1_arrived) {
    v_1309 = sub_25;
    sub_10 = sub_11;
  } else {
    v_1309 = sub_11;
    sub_10 = sub_25;
  };
  if (controller_ck_26_1) {
    v_1310 = v_1309;
  } else {
    v_1310 = sub_10;
  };
  if (controller_c_porta) {
    sub_9 = false;
  } else {
    sub_9 = v_1310;
  };
  if (controller_p_arrived) {
    v_1301 = false;
    sub_30 = sub_13;
  } else {
    v_1301 = sub_13;
    sub_30 = false;
  };
  if (controller_ck_24_1) {
    sub_29 = v_1301;
  } else {
    sub_29 = sub_30;
  };
  if (controller_p1_arrived) {
    v_1302 = false;
    sub_28 = sub_29;
  } else {
    v_1302 = sub_29;
    sub_28 = false;
  };
  if (controller_ck_26_1) {
    sub_27 = v_1302;
  } else {
    sub_27 = sub_28;
  };
  if (controller_p_arrived) {
    v_1300 = sub_19;
    sub_33 = false;
  } else {
    v_1300 = false;
    sub_33 = sub_19;
  };
  if (controller_ck_24_1) {
    sub_32 = v_1300;
  } else {
    sub_32 = sub_33;
  };
  if (controller_p1_arrived) {
    v_1303 = sub_25;
    sub_31 = sub_32;
  } else {
    v_1303 = sub_32;
    sub_31 = sub_25;
  };
  if (controller_ck_26_1) {
    v_1304 = v_1303;
  } else {
    v_1304 = sub_31;
  };
  if (controller_c_porta) {
    sub_26 = sub_27;
  } else {
    sub_26 = v_1304;
  };
  if (controller_shift_turno) {
    v_1311 = sub_26;
    sub_8 = sub_9;
  } else {
    v_1311 = sub_9;
    sub_8 = sub_26;
  };
  if (controller_ck_1) {
    sub_7 = v_1311;
  } else {
    sub_7 = sub_8;
  };
  if (controller_c_porta) {
    sub_36 = sub_27;
  } else {
    sub_36 = false;
  };
  if (controller_shift_turno) {
    v_1299 = sub_36;
    sub_35 = sub_9;
  } else {
    v_1299 = sub_9;
    sub_35 = sub_36;
  };
  if (controller_ck_1) {
    sub_34 = v_1299;
  } else {
    sub_34 = sub_35;
  };
  if (controller_l_failed) {
    sub_6 = sub_7;
  } else {
    sub_6 = sub_34;
  };
  if (controller_ck_38_1) {
    v_1313 = sub_7;
    v_1312 = sub_34;
  } else {
    v_1313 = sub_6;
    v_1312 = sub_6;
  };
  if (controller_l_recovered) {
    sub_5 = v_1312;
  } else {
    sub_5 = v_1313;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  if (controller_ar_recovered) {
    v_1292 = false;
  } else {
    v_1292 = sub_24;
  };
  if (controller_ar_failed) {
    sub_51 = sub_22;
  } else {
    sub_51 = false;
  };
  sub_50 = sub_51;
  if (controller_ck_34_1) {
    sub_49 = v_1292;
  } else {
    sub_49 = sub_50;
  };
  if (controller_v_430) {
    v_1293 = sub_49;
  } else {
    v_1293 = false;
  };
  if (controller_v_431) {
    sub_48 = v_1293;
  } else {
    sub_48 = sub_49;
  };
  if (controller_p_arrived) {
    v_1294 = false;
    sub_47 = sub_48;
  } else {
    v_1294 = sub_48;
    sub_47 = false;
  };
  if (controller_ck_24_1) {
    sub_46 = v_1294;
  } else {
    sub_46 = sub_47;
  };
  if (controller_p1_arrived) {
    v_1295 = false;
    sub_45 = sub_46;
  } else {
    v_1295 = sub_46;
    sub_45 = false;
  };
  if (controller_ck_26_1) {
    sub_44 = v_1295;
  } else {
    sub_44 = sub_45;
  };
  if (controller_ar_recovered) {
    v_1289 = sub_18;
  } else {
    v_1289 = sub_24;
  };
  if (controller_ar_failed) {
    sub_58 = sub_22;
  } else {
    sub_58 = sub_17;
  };
  sub_57 = sub_58;
  if (controller_ck_34_1) {
    sub_56 = v_1289;
  } else {
    sub_56 = sub_57;
  };
  if (controller_v_430) {
    v_1290 = sub_56;
  } else {
    v_1290 = false;
  };
  if (controller_v_431) {
    sub_55 = v_1290;
  } else {
    sub_55 = sub_56;
  };
  sub_60 = sub_24;
  if (controller_v_430) {
    v_1288 = sub_60;
  } else {
    v_1288 = sub_19;
  };
  if (controller_v_431) {
    sub_59 = v_1288;
  } else {
    sub_59 = sub_60;
  };
  if (controller_p_arrived) {
    v_1291 = sub_59;
    sub_54 = sub_55;
  } else {
    v_1291 = sub_55;
    sub_54 = sub_59;
  };
  if (controller_ck_24_1) {
    sub_53 = v_1291;
  } else {
    sub_53 = sub_54;
  };
  sub_61 = sub_55;
  if (controller_p1_arrived) {
    v_1296 = sub_61;
    sub_52 = sub_53;
  } else {
    v_1296 = sub_53;
    sub_52 = sub_61;
  };
  if (controller_ck_26_1) {
    v_1297 = v_1296;
  } else {
    v_1297 = sub_52;
  };
  if (controller_c_porta) {
    sub_43 = sub_44;
  } else {
    sub_43 = v_1297;
  };
  if (controller_p_arrived) {
    v_1284 = false;
    sub_66 = sub_55;
  } else {
    v_1284 = sub_55;
    sub_66 = false;
  };
  if (controller_ck_24_1) {
    sub_65 = v_1284;
  } else {
    sub_65 = sub_66;
  };
  if (controller_p1_arrived) {
    v_1285 = false;
    sub_64 = sub_65;
  } else {
    v_1285 = sub_65;
    sub_64 = false;
  };
  if (controller_ck_26_1) {
    sub_63 = v_1285;
  } else {
    sub_63 = sub_64;
  };
  if (controller_p_arrived) {
    v_1283 = sub_59;
    sub_69 = sub_48;
  } else {
    v_1283 = sub_48;
    sub_69 = sub_59;
  };
  if (controller_ck_24_1) {
    sub_68 = v_1283;
  } else {
    sub_68 = sub_69;
  };
  if (controller_p1_arrived) {
    v_1286 = sub_61;
    sub_67 = sub_68;
  } else {
    v_1286 = sub_68;
    sub_67 = sub_61;
  };
  if (controller_ck_26_1) {
    v_1287 = v_1286;
  } else {
    v_1287 = sub_67;
  };
  if (controller_c_porta) {
    sub_62 = sub_63;
  } else {
    sub_62 = v_1287;
  };
  if (controller_shift_turno) {
    v_1298 = sub_62;
    sub_42 = sub_43;
  } else {
    v_1298 = sub_43;
    sub_42 = sub_62;
  };
  if (controller_ck_1) {
    sub_41 = v_1298;
  } else {
    sub_41 = sub_42;
  };
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  if (controller_v_401) {
    sub_2 = sub_37;
  } else {
    sub_2 = sub_3;
  };
  if (controller_c_porta) {
    sub_76 = sub_63;
  } else {
    sub_76 = sub_44;
  };
  if (controller_shift_turno) {
    v_1280 = sub_76;
    sub_75 = false;
  } else {
    v_1280 = false;
    sub_75 = sub_76;
  };
  if (controller_ck_1) {
    sub_74 = v_1280;
  } else {
    sub_74 = sub_75;
  };
  if (controller_p_arrived) {
    v = sub_19;
    sub_82 = sub_48;
  } else {
    v = sub_48;
    sub_82 = sub_19;
  };
  if (controller_ck_24_1) {
    sub_81 = v;
  } else {
    sub_81 = sub_82;
  };
  if (controller_p1_arrived) {
    v_1277 = sub_25;
    sub_80 = sub_81;
  } else {
    v_1277 = sub_81;
    sub_80 = sub_25;
  };
  if (controller_ck_26_1) {
    v_1278 = v_1277;
  } else {
    v_1278 = sub_80;
  };
  if (controller_c_porta) {
    sub_79 = sub_63;
  } else {
    sub_79 = v_1278;
  };
  if (controller_shift_turno) {
    v_1279 = sub_79;
    sub_78 = sub_43;
  } else {
    v_1279 = sub_43;
    sub_78 = sub_79;
  };
  if (controller_ck_1) {
    sub_77 = v_1279;
  } else {
    sub_77 = sub_78;
  };
  if (controller_l_failed) {
    sub_73 = sub_74;
  } else {
    sub_73 = sub_77;
  };
  if (controller_ck_38_1) {
    v_1282 = sub_74;
    v_1281 = sub_77;
  } else {
    v_1282 = sub_73;
    v_1281 = sub_73;
  };
  if (controller_l_recovered) {
    sub_72 = v_1281;
  } else {
    sub_72 = v_1282;
  };
  sub_71 = sub_72;
  sub_70 = sub_71;
  if (controller_v_400) {
    sub_1 = sub_70;
  } else {
    sub_1 = sub_2;
  };
  if (controller_v_401) {
    sub_83 = sub_70;
  } else {
    sub_83 = sub_37;
  };
  if (controller_v_400) {
    v_1314 = sub_2;
  } else {
    v_1314 = sub_83;
  };
  if (controller_v_399) {
    sub_0 = v_1314;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_rot = sub_0;;
}

void Controller_controller__controller_controller_controller_c_porta_step(
  int controller_up, int controller_down, int controller_shift_turno,
  int controller_abre_porta, int controller_p_arrived,
  int controller_p1_arrived, int controller_ar_failed,
  int controller_ar_recovered, int controller_l_failed,
  int controller_l_recovered, int controller_ck_1, int controller_pnr_13,
  int controller_ck_18_1, int controller_pnr_12, int controller_ck_20_1,
  int controller_pnr_11, int controller_ck_22_1, int controller_pnr_10,
  int controller_ck_24_1, int controller_pnr_9, int controller_ck_26_1,
  int controller_pnr_8, int controller_ck_28_1, int controller_pnr_7,
  int controller_ck_30_1, int controller_pnr_6, int controller_v_431,
  int controller_v_430, int controller_pnr_5, int controller_ck_34_1,
  int controller_pnr_4, int controller_v_401, int controller_v_400,
  int controller_v_399, int controller_pnr_3, int controller_ck_38_1,
  int controller_pnr, int p_controller_cdown, int p_controller_cup,
  int p_controller_cl2, int p_controller_cl1, int p_controller_c_policy,
  int p_controller_c_arm, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_luz2, int p_controller_c_luz1, int p_controller_c_jan,
  int p_controller_c_pc, int p_controller_c_rot, int p_controller_c_porta,
  Controller_controller__controller_controller_controller_c_porta_out* _out) {
  
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
  sub_17 = false;
  if (controller_ar_failed) {
    sub_16 = false;
  } else {
    sub_16 = sub_17;
  };
  sub_15 = sub_16;
  sub_18 = sub_17;
  if (controller_ar_recovered) {
    v_1340 = sub_18;
  } else {
    v_1340 = false;
  };
  if (controller_ck_34_1) {
    sub_14 = v_1340;
  } else {
    sub_14 = sub_15;
  };
  if (controller_v_430) {
    v_1341 = sub_14;
  } else {
    v_1341 = false;
  };
  if (controller_v_431) {
    sub_13 = v_1341;
  } else {
    sub_13 = sub_14;
  };
  if (controller_p_arrived) {
    v_1342 = sub_14;
    sub_12 = sub_13;
  } else {
    v_1342 = sub_13;
    sub_12 = sub_14;
  };
  if (controller_ck_24_1) {
    sub_11 = v_1342;
  } else {
    sub_11 = sub_12;
  };
  sub_19 = sub_13;
  if (controller_p1_arrived) {
    v_1343 = sub_19;
    sub_10 = sub_11;
  } else {
    v_1343 = sub_11;
    sub_10 = sub_19;
  };
  if (controller_ck_26_1) {
    sub_9 = v_1343;
  } else {
    sub_9 = sub_10;
  };
  sub_28 = true;
  if (controller_ar_failed) {
    sub_27 = false;
  } else {
    sub_27 = sub_28;
  };
  sub_26 = sub_27;
  sub_29 = sub_28;
  if (controller_ar_recovered) {
    v_1336 = sub_29;
  } else {
    v_1336 = false;
  };
  if (controller_ck_34_1) {
    sub_25 = v_1336;
  } else {
    sub_25 = sub_26;
  };
  if (controller_v_430) {
    v_1337 = sub_25;
  } else {
    v_1337 = false;
  };
  if (controller_v_431) {
    sub_24 = v_1337;
  } else {
    sub_24 = sub_25;
  };
  if (controller_p_arrived) {
    v_1338 = sub_14;
    sub_23 = sub_24;
  } else {
    v_1338 = sub_24;
    sub_23 = sub_14;
  };
  if (controller_ck_24_1) {
    sub_22 = v_1338;
  } else {
    sub_22 = sub_23;
  };
  if (controller_p1_arrived) {
    v_1339 = sub_19;
    sub_21 = sub_22;
  } else {
    v_1339 = sub_22;
    sub_21 = sub_19;
  };
  if (controller_ck_26_1) {
    sub_20 = v_1339;
  } else {
    sub_20 = sub_21;
  };
  if (controller_shift_turno) {
    v_1344 = sub_20;
    sub_8 = sub_9;
  } else {
    v_1344 = sub_9;
    sub_8 = sub_20;
  };
  if (controller_ck_1) {
    sub_7 = v_1344;
  } else {
    sub_7 = sub_8;
  };
  if (controller_p_arrived) {
    v_1333 = false;
    sub_35 = sub_24;
  } else {
    v_1333 = sub_24;
    sub_35 = false;
  };
  if (controller_ck_24_1) {
    sub_34 = v_1333;
  } else {
    sub_34 = sub_35;
  };
  if (controller_p1_arrived) {
    v_1334 = false;
    sub_33 = sub_34;
  } else {
    v_1334 = sub_34;
    sub_33 = false;
  };
  if (controller_ck_26_1) {
    sub_32 = v_1334;
  } else {
    sub_32 = sub_33;
  };
  if (controller_shift_turno) {
    v_1335 = sub_32;
    sub_31 = sub_9;
  } else {
    v_1335 = sub_9;
    sub_31 = sub_32;
  };
  if (controller_ck_1) {
    sub_30 = v_1335;
  } else {
    sub_30 = sub_31;
  };
  if (controller_l_failed) {
    sub_6 = sub_7;
  } else {
    sub_6 = sub_30;
  };
  if (controller_ck_38_1) {
    v_1346 = sub_7;
    v_1345 = sub_30;
  } else {
    v_1346 = sub_6;
    v_1345 = sub_6;
  };
  if (controller_l_recovered) {
    sub_5 = v_1345;
  } else {
    sub_5 = v_1346;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_51 = p_controller_c_porta;
  sub_50 = sub_51;
  if (controller_ar_failed) {
    sub_49 = sub_50;
  } else {
    sub_49 = sub_17;
  };
  sub_48 = sub_49;
  sub_52 = sub_50;
  if (controller_ar_recovered) {
    v_1328 = sub_18;
  } else {
    v_1328 = sub_52;
  };
  if (controller_ck_34_1) {
    sub_47 = v_1328;
  } else {
    sub_47 = sub_48;
  };
  if (controller_v_430) {
    v_1329 = sub_47;
  } else {
    v_1329 = false;
  };
  if (controller_v_431) {
    sub_46 = v_1329;
  } else {
    sub_46 = sub_47;
  };
  sub_54 = sub_18;
  if (controller_v_430) {
    v_1327 = sub_54;
  } else {
    v_1327 = sub_14;
  };
  if (controller_v_431) {
    sub_53 = v_1327;
  } else {
    sub_53 = sub_54;
  };
  if (controller_p_arrived) {
    v_1330 = sub_53;
    sub_45 = sub_46;
  } else {
    v_1330 = sub_46;
    sub_45 = sub_53;
  };
  if (controller_ck_24_1) {
    sub_44 = v_1330;
  } else {
    sub_44 = sub_45;
  };
  if (controller_v_430) {
    v_1326 = sub_54;
  } else {
    v_1326 = false;
  };
  if (controller_v_431) {
    sub_56 = v_1326;
  } else {
    sub_56 = sub_54;
  };
  sub_55 = sub_56;
  if (controller_p1_arrived) {
    v_1331 = sub_55;
    sub_43 = sub_44;
  } else {
    v_1331 = sub_44;
    sub_43 = sub_55;
  };
  if (controller_ck_26_1) {
    sub_42 = v_1331;
  } else {
    sub_42 = sub_43;
  };
  if (controller_ar_recovered) {
    v_1322 = sub_29;
  } else {
    v_1322 = sub_52;
  };
  if (controller_ar_failed) {
    sub_64 = sub_50;
  } else {
    sub_64 = sub_28;
  };
  sub_63 = sub_64;
  if (controller_ck_34_1) {
    sub_62 = v_1322;
  } else {
    sub_62 = sub_63;
  };
  if (controller_v_430) {
    v_1323 = sub_62;
  } else {
    v_1323 = false;
  };
  if (controller_v_431) {
    sub_61 = v_1323;
  } else {
    sub_61 = sub_62;
  };
  if (controller_p_arrived) {
    v_1324 = sub_53;
    sub_60 = sub_61;
  } else {
    v_1324 = sub_61;
    sub_60 = sub_53;
  };
  if (controller_ck_24_1) {
    sub_59 = v_1324;
  } else {
    sub_59 = sub_60;
  };
  if (controller_p1_arrived) {
    v_1325 = sub_55;
    sub_58 = sub_59;
  } else {
    v_1325 = sub_59;
    sub_58 = sub_55;
  };
  if (controller_ck_26_1) {
    sub_57 = v_1325;
  } else {
    sub_57 = sub_58;
  };
  if (controller_shift_turno) {
    v_1332 = sub_57;
    sub_41 = sub_42;
  } else {
    v_1332 = sub_42;
    sub_41 = sub_57;
  };
  if (controller_ck_1) {
    sub_40 = v_1332;
  } else {
    sub_40 = sub_41;
  };
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  if (controller_v_401) {
    sub_2 = sub_36;
  } else {
    sub_2 = sub_3;
  };
  if (controller_p_arrived) {
    v_1317 = false;
    sub_74 = sub_61;
  } else {
    v_1317 = sub_61;
    sub_74 = false;
  };
  if (controller_ck_24_1) {
    sub_73 = v_1317;
  } else {
    sub_73 = sub_74;
  };
  if (controller_p1_arrived) {
    v_1318 = false;
    sub_72 = sub_73;
  } else {
    v_1318 = sub_73;
    sub_72 = false;
  };
  if (controller_ck_26_1) {
    sub_71 = v_1318;
  } else {
    sub_71 = sub_72;
  };
  if (controller_shift_turno) {
    v_1319 = sub_71;
    sub_70 = false;
  } else {
    v_1319 = false;
    sub_70 = sub_71;
  };
  if (controller_ck_1) {
    sub_69 = v_1319;
  } else {
    sub_69 = sub_70;
  };
  if (controller_p_arrived) {
    v = sub_14;
    sub_80 = sub_61;
  } else {
    v = sub_61;
    sub_80 = sub_14;
  };
  if (controller_ck_24_1) {
    sub_79 = v;
  } else {
    sub_79 = sub_80;
  };
  if (controller_p1_arrived) {
    v_1315 = sub_19;
    sub_78 = sub_79;
  } else {
    v_1315 = sub_79;
    sub_78 = sub_19;
  };
  if (controller_ck_26_1) {
    sub_77 = v_1315;
  } else {
    sub_77 = sub_78;
  };
  if (controller_shift_turno) {
    v_1316 = sub_77;
    sub_76 = sub_42;
  } else {
    v_1316 = sub_42;
    sub_76 = sub_77;
  };
  if (controller_ck_1) {
    sub_75 = v_1316;
  } else {
    sub_75 = sub_76;
  };
  if (controller_l_failed) {
    sub_68 = sub_69;
  } else {
    sub_68 = sub_75;
  };
  if (controller_ck_38_1) {
    v_1321 = sub_69;
    v_1320 = sub_75;
  } else {
    v_1321 = sub_68;
    v_1320 = sub_68;
  };
  if (controller_l_recovered) {
    sub_67 = v_1320;
  } else {
    sub_67 = v_1321;
  };
  sub_66 = sub_67;
  sub_65 = sub_66;
  if (controller_v_400) {
    sub_1 = sub_65;
  } else {
    sub_1 = sub_2;
  };
  if (controller_v_401) {
    sub_81 = sub_65;
  } else {
    sub_81 = sub_36;
  };
  if (controller_v_400) {
    v_1347 = sub_2;
  } else {
    v_1347 = sub_81;
  };
  if (controller_v_399) {
    sub_0 = v_1347;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_porta = sub_0;;
}

void Controller_controller__controller_controller_step(int controller_up,
                                                       int controller_down,
                                                       int controller_shift_turno,
                                                       int controller_abre_porta,
                                                       int controller_p_arrived,
                                                       int controller_p1_arrived,
                                                       int controller_ar_failed,
                                                       int controller_ar_recovered,
                                                       int controller_l_failed,
                                                       int controller_l_recovered,
                                                       int controller_ck_1,
                                                       int controller_pnr_13,
                                                       int controller_ck_18_1,
                                                       int controller_pnr_12,
                                                       int controller_ck_20_1,
                                                       int controller_pnr_11,
                                                       int controller_ck_22_1,
                                                       int controller_pnr_10,
                                                       int controller_ck_24_1,
                                                       int controller_pnr_9,
                                                       int controller_ck_26_1,
                                                       int controller_pnr_8,
                                                       int controller_ck_28_1,
                                                       int controller_pnr_7,
                                                       int controller_ck_30_1,
                                                       int controller_pnr_6,
                                                       int controller_v_431,
                                                       int controller_v_430,
                                                       int controller_pnr_5,
                                                       int controller_ck_34_1,
                                                       int controller_pnr_4,
                                                       int controller_v_401,
                                                       int controller_v_400,
                                                       int controller_v_399,
                                                       int controller_pnr_3,
                                                       int controller_ck_38_1,
                                                       int controller_pnr,
                                                       int p_controller_cdown,
                                                       int p_controller_cup,
                                                       int p_controller_cl2,
                                                       int p_controller_cl1,
                                                       int p_controller_c_policy,
                                                       int p_controller_c_arm,
                                                       int p_controller_c_ar2,
                                                       int p_controller_c_ar1,
                                                       int p_controller_c_luz2,
                                                       int p_controller_c_luz1,
                                                       int p_controller_c_jan,
                                                       int p_controller_c_pc,
                                                       int p_controller_c_rot,
                                                       int p_controller_c_porta,
                                                       Controller_controller__controller_controller_out* _out) {
  Controller_controller__controller_controller_controller_c_luz2_out Controller_controller__controller_controller_controller_c_luz2_out_st;
  Controller_controller__controller_controller_controller_cl2_out Controller_controller__controller_controller_controller_cl2_out_st;
  Controller_controller__controller_controller_controller_c_porta_out Controller_controller__controller_controller_controller_c_porta_out_st;
  Controller_controller__controller_controller_controller_c_luz1_out Controller_controller__controller_controller_controller_c_luz1_out_st;
  Controller_controller__controller_controller_controller_cup_out Controller_controller__controller_controller_controller_cup_out_st;
  Controller_controller__controller_controller_controller_c_ar2_out Controller_controller__controller_controller_controller_c_ar2_out_st;
  Controller_controller__controller_controller_controller_c_ar1_out Controller_controller__controller_controller_controller_c_ar1_out_st;
  Controller_controller__controller_controller_controller_c_arm_out Controller_controller__controller_controller_controller_c_arm_out_st;
  Controller_controller__controller_controller_controller_c_rot_out Controller_controller__controller_controller_controller_c_rot_out_st;
  Controller_controller__controller_controller_controller_c_jan_out Controller_controller__controller_controller_controller_c_jan_out_st;
  Controller_controller__controller_controller_controller_cdown_out Controller_controller__controller_controller_controller_cdown_out_st;
  Controller_controller__controller_controller_controller_c_pc_out Controller_controller__controller_controller_controller_c_pc_out_st;
  Controller_controller__controller_controller_controller_c_policy_out Controller_controller__controller_controller_controller_c_policy_out_st;
  Controller_controller__controller_controller_controller_cl1_out Controller_controller__controller_controller_controller_cl1_out_st;
  Controller_controller__controller_controller_controller_c_porta_step(
  controller_up, controller_down, controller_shift_turno,
  controller_abre_porta, controller_p_arrived, controller_p1_arrived,
  controller_ar_failed, controller_ar_recovered, controller_l_failed,
  controller_l_recovered, controller_ck_1, controller_pnr_13,
  controller_ck_18_1, controller_pnr_12, controller_ck_20_1,
  controller_pnr_11, controller_ck_22_1, controller_pnr_10,
  controller_ck_24_1, controller_pnr_9, controller_ck_26_1, controller_pnr_8,
  controller_ck_28_1, controller_pnr_7, controller_ck_30_1, controller_pnr_6,
  controller_v_431, controller_v_430, controller_pnr_5, controller_ck_34_1,
  controller_pnr_4, controller_v_401, controller_v_400, controller_v_399,
  controller_pnr_3, controller_ck_38_1, controller_pnr, p_controller_cdown,
  p_controller_cup, p_controller_cl2, p_controller_cl1,
  p_controller_c_policy, p_controller_c_arm, p_controller_c_ar2,
  p_controller_c_ar1, p_controller_c_luz2, p_controller_c_luz1,
  p_controller_c_jan, p_controller_c_pc, p_controller_c_rot,
  p_controller_c_porta,
  &Controller_controller__controller_controller_controller_c_porta_out_st);
  _out->controller_c_porta = Controller_controller__controller_controller_controller_c_porta_out_st.controller_c_porta;
  Controller_controller__controller_controller_controller_c_rot_step(
  controller_up, controller_down, controller_shift_turno,
  controller_abre_porta, controller_p_arrived, controller_p1_arrived,
  controller_ar_failed, controller_ar_recovered, controller_l_failed,
  controller_l_recovered, controller_ck_1, controller_pnr_13,
  controller_ck_18_1, controller_pnr_12, controller_ck_20_1,
  controller_pnr_11, controller_ck_22_1, controller_pnr_10,
  controller_ck_24_1, controller_pnr_9, controller_ck_26_1, controller_pnr_8,
  controller_ck_28_1, controller_pnr_7, controller_ck_30_1, controller_pnr_6,
  controller_v_431, controller_v_430, controller_pnr_5, controller_ck_34_1,
  controller_pnr_4, controller_v_401, controller_v_400, controller_v_399,
  controller_pnr_3, controller_ck_38_1, controller_pnr, p_controller_cdown,
  p_controller_cup, p_controller_cl2, p_controller_cl1,
  p_controller_c_policy, p_controller_c_arm, p_controller_c_ar2,
  p_controller_c_ar1, p_controller_c_luz2, p_controller_c_luz1,
  p_controller_c_jan, p_controller_c_pc, p_controller_c_rot,
  p_controller_c_porta, _out->controller_c_porta,
  &Controller_controller__controller_controller_controller_c_rot_out_st);
  _out->controller_c_rot = Controller_controller__controller_controller_controller_c_rot_out_st.controller_c_rot;
  Controller_controller__controller_controller_controller_c_pc_step(controller_up,
                                                                    controller_down,
                                                                    controller_shift_turno,
                                                                    controller_abre_porta,
                                                                    controller_p_arrived,
                                                                    controller_p1_arrived,
                                                                    controller_ar_failed,
                                                                    controller_ar_recovered,
                                                                    controller_l_failed,
                                                                    controller_l_recovered,
                                                                    controller_ck_1,
                                                                    controller_pnr_13,
                                                                    controller_ck_18_1,
                                                                    controller_pnr_12,
                                                                    controller_ck_20_1,
                                                                    controller_pnr_11,
                                                                    controller_ck_22_1,
                                                                    controller_pnr_10,
                                                                    controller_ck_24_1,
                                                                    controller_pnr_9,
                                                                    controller_ck_26_1,
                                                                    controller_pnr_8,
                                                                    controller_ck_28_1,
                                                                    controller_pnr_7,
                                                                    controller_ck_30_1,
                                                                    controller_pnr_6,
                                                                    controller_v_431,
                                                                    controller_v_430,
                                                                    controller_pnr_5,
                                                                    controller_ck_34_1,
                                                                    controller_pnr_4,
                                                                    controller_v_401,
                                                                    controller_v_400,
                                                                    controller_v_399,
                                                                    controller_pnr_3,
                                                                    controller_ck_38_1,
                                                                    controller_pnr,
                                                                    p_controller_cdown,
                                                                    p_controller_cup,
                                                                    p_controller_cl2,
                                                                    p_controller_cl1,
                                                                    p_controller_c_policy,
                                                                    p_controller_c_arm,
                                                                    p_controller_c_ar2,
                                                                    p_controller_c_ar1,
                                                                    p_controller_c_luz2,
                                                                    p_controller_c_luz1,
                                                                    p_controller_c_jan,
                                                                    p_controller_c_pc,
                                                                    p_controller_c_rot,
                                                                    p_controller_c_porta,
                                                                    _out->controller_c_rot,
                                                                    _out->controller_c_porta,
                                                                    &Controller_controller__controller_controller_controller_c_pc_out_st);
  _out->controller_c_pc = Controller_controller__controller_controller_controller_c_pc_out_st.controller_c_pc;
  Controller_controller__controller_controller_controller_c_jan_step(
  controller_up, controller_down, controller_shift_turno,
  controller_abre_porta, controller_p_arrived, controller_p1_arrived,
  controller_ar_failed, controller_ar_recovered, controller_l_failed,
  controller_l_recovered, controller_ck_1, controller_pnr_13,
  controller_ck_18_1, controller_pnr_12, controller_ck_20_1,
  controller_pnr_11, controller_ck_22_1, controller_pnr_10,
  controller_ck_24_1, controller_pnr_9, controller_ck_26_1, controller_pnr_8,
  controller_ck_28_1, controller_pnr_7, controller_ck_30_1, controller_pnr_6,
  controller_v_431, controller_v_430, controller_pnr_5, controller_ck_34_1,
  controller_pnr_4, controller_v_401, controller_v_400, controller_v_399,
  controller_pnr_3, controller_ck_38_1, controller_pnr, p_controller_cdown,
  p_controller_cup, p_controller_cl2, p_controller_cl1,
  p_controller_c_policy, p_controller_c_arm, p_controller_c_ar2,
  p_controller_c_ar1, p_controller_c_luz2, p_controller_c_luz1,
  p_controller_c_jan, p_controller_c_pc, p_controller_c_rot,
  p_controller_c_porta, _out->controller_c_pc, _out->controller_c_rot,
  _out->controller_c_porta,
  &Controller_controller__controller_controller_controller_c_jan_out_st);
  _out->controller_c_jan = Controller_controller__controller_controller_controller_c_jan_out_st.controller_c_jan;
  Controller_controller__controller_controller_controller_c_luz1_step(
  controller_up, controller_down, controller_shift_turno,
  controller_abre_porta, controller_p_arrived, controller_p1_arrived,
  controller_ar_failed, controller_ar_recovered, controller_l_failed,
  controller_l_recovered, controller_ck_1, controller_pnr_13,
  controller_ck_18_1, controller_pnr_12, controller_ck_20_1,
  controller_pnr_11, controller_ck_22_1, controller_pnr_10,
  controller_ck_24_1, controller_pnr_9, controller_ck_26_1, controller_pnr_8,
  controller_ck_28_1, controller_pnr_7, controller_ck_30_1, controller_pnr_6,
  controller_v_431, controller_v_430, controller_pnr_5, controller_ck_34_1,
  controller_pnr_4, controller_v_401, controller_v_400, controller_v_399,
  controller_pnr_3, controller_ck_38_1, controller_pnr, p_controller_cdown,
  p_controller_cup, p_controller_cl2, p_controller_cl1,
  p_controller_c_policy, p_controller_c_arm, p_controller_c_ar2,
  p_controller_c_ar1, p_controller_c_luz2, p_controller_c_luz1,
  p_controller_c_jan, p_controller_c_pc, p_controller_c_rot,
  p_controller_c_porta, _out->controller_c_jan, _out->controller_c_pc,
  _out->controller_c_rot, _out->controller_c_porta,
  &Controller_controller__controller_controller_controller_c_luz1_out_st);
  _out->controller_c_luz1 = Controller_controller__controller_controller_controller_c_luz1_out_st.controller_c_luz1;
  Controller_controller__controller_controller_controller_c_luz2_step(
  controller_up, controller_down, controller_shift_turno,
  controller_abre_porta, controller_p_arrived, controller_p1_arrived,
  controller_ar_failed, controller_ar_recovered, controller_l_failed,
  controller_l_recovered, controller_ck_1, controller_pnr_13,
  controller_ck_18_1, controller_pnr_12, controller_ck_20_1,
  controller_pnr_11, controller_ck_22_1, controller_pnr_10,
  controller_ck_24_1, controller_pnr_9, controller_ck_26_1, controller_pnr_8,
  controller_ck_28_1, controller_pnr_7, controller_ck_30_1, controller_pnr_6,
  controller_v_431, controller_v_430, controller_pnr_5, controller_ck_34_1,
  controller_pnr_4, controller_v_401, controller_v_400, controller_v_399,
  controller_pnr_3, controller_ck_38_1, controller_pnr, p_controller_cdown,
  p_controller_cup, p_controller_cl2, p_controller_cl1,
  p_controller_c_policy, p_controller_c_arm, p_controller_c_ar2,
  p_controller_c_ar1, p_controller_c_luz2, p_controller_c_luz1,
  p_controller_c_jan, p_controller_c_pc, p_controller_c_rot,
  p_controller_c_porta, _out->controller_c_luz1, _out->controller_c_jan,
  _out->controller_c_pc, _out->controller_c_rot, _out->controller_c_porta,
  &Controller_controller__controller_controller_controller_c_luz2_out_st);
  _out->controller_c_luz2 = Controller_controller__controller_controller_controller_c_luz2_out_st.controller_c_luz2;
  Controller_controller__controller_controller_controller_c_ar1_step(
  controller_up, controller_down, controller_shift_turno,
  controller_abre_porta, controller_p_arrived, controller_p1_arrived,
  controller_ar_failed, controller_ar_recovered, controller_l_failed,
  controller_l_recovered, controller_ck_1, controller_pnr_13,
  controller_ck_18_1, controller_pnr_12, controller_ck_20_1,
  controller_pnr_11, controller_ck_22_1, controller_pnr_10,
  controller_ck_24_1, controller_pnr_9, controller_ck_26_1, controller_pnr_8,
  controller_ck_28_1, controller_pnr_7, controller_ck_30_1, controller_pnr_6,
  controller_v_431, controller_v_430, controller_pnr_5, controller_ck_34_1,
  controller_pnr_4, controller_v_401, controller_v_400, controller_v_399,
  controller_pnr_3, controller_ck_38_1, controller_pnr, p_controller_cdown,
  p_controller_cup, p_controller_cl2, p_controller_cl1,
  p_controller_c_policy, p_controller_c_arm, p_controller_c_ar2,
  p_controller_c_ar1, p_controller_c_luz2, p_controller_c_luz1,
  p_controller_c_jan, p_controller_c_pc, p_controller_c_rot,
  p_controller_c_porta, _out->controller_c_luz2, _out->controller_c_luz1,
  _out->controller_c_jan, _out->controller_c_pc, _out->controller_c_rot,
  _out->controller_c_porta,
  &Controller_controller__controller_controller_controller_c_ar1_out_st);
  _out->controller_c_ar1 = Controller_controller__controller_controller_controller_c_ar1_out_st.controller_c_ar1;
  Controller_controller__controller_controller_controller_c_ar2_step(
  controller_up, controller_down, controller_shift_turno,
  controller_abre_porta, controller_p_arrived, controller_p1_arrived,
  controller_ar_failed, controller_ar_recovered, controller_l_failed,
  controller_l_recovered, controller_ck_1, controller_pnr_13,
  controller_ck_18_1, controller_pnr_12, controller_ck_20_1,
  controller_pnr_11, controller_ck_22_1, controller_pnr_10,
  controller_ck_24_1, controller_pnr_9, controller_ck_26_1, controller_pnr_8,
  controller_ck_28_1, controller_pnr_7, controller_ck_30_1, controller_pnr_6,
  controller_v_431, controller_v_430, controller_pnr_5, controller_ck_34_1,
  controller_pnr_4, controller_v_401, controller_v_400, controller_v_399,
  controller_pnr_3, controller_ck_38_1, controller_pnr, p_controller_cdown,
  p_controller_cup, p_controller_cl2, p_controller_cl1,
  p_controller_c_policy, p_controller_c_arm, p_controller_c_ar2,
  p_controller_c_ar1, p_controller_c_luz2, p_controller_c_luz1,
  p_controller_c_jan, p_controller_c_pc, p_controller_c_rot,
  p_controller_c_porta, _out->controller_c_ar1, _out->controller_c_luz2,
  _out->controller_c_luz1, _out->controller_c_jan, _out->controller_c_pc,
  _out->controller_c_rot, _out->controller_c_porta,
  &Controller_controller__controller_controller_controller_c_ar2_out_st);
  _out->controller_c_ar2 = Controller_controller__controller_controller_controller_c_ar2_out_st.controller_c_ar2;
  Controller_controller__controller_controller_controller_c_arm_step(
  controller_up, controller_down, controller_shift_turno,
  controller_abre_porta, controller_p_arrived, controller_p1_arrived,
  controller_ar_failed, controller_ar_recovered, controller_l_failed,
  controller_l_recovered, controller_ck_1, controller_pnr_13,
  controller_ck_18_1, controller_pnr_12, controller_ck_20_1,
  controller_pnr_11, controller_ck_22_1, controller_pnr_10,
  controller_ck_24_1, controller_pnr_9, controller_ck_26_1, controller_pnr_8,
  controller_ck_28_1, controller_pnr_7, controller_ck_30_1, controller_pnr_6,
  controller_v_431, controller_v_430, controller_pnr_5, controller_ck_34_1,
  controller_pnr_4, controller_v_401, controller_v_400, controller_v_399,
  controller_pnr_3, controller_ck_38_1, controller_pnr, p_controller_cdown,
  p_controller_cup, p_controller_cl2, p_controller_cl1,
  p_controller_c_policy, p_controller_c_arm, p_controller_c_ar2,
  p_controller_c_ar1, p_controller_c_luz2, p_controller_c_luz1,
  p_controller_c_jan, p_controller_c_pc, p_controller_c_rot,
  p_controller_c_porta, _out->controller_c_ar2, _out->controller_c_ar1,
  _out->controller_c_luz2, _out->controller_c_luz1, _out->controller_c_jan,
  _out->controller_c_pc, _out->controller_c_rot, _out->controller_c_porta,
  &Controller_controller__controller_controller_controller_c_arm_out_st);
  _out->controller_c_arm = Controller_controller__controller_controller_controller_c_arm_out_st.controller_c_arm;
  Controller_controller__controller_controller_controller_c_policy_step(
  controller_up, controller_down, controller_shift_turno,
  controller_abre_porta, controller_p_arrived, controller_p1_arrived,
  controller_ar_failed, controller_ar_recovered, controller_l_failed,
  controller_l_recovered, controller_ck_1, controller_pnr_13,
  controller_ck_18_1, controller_pnr_12, controller_ck_20_1,
  controller_pnr_11, controller_ck_22_1, controller_pnr_10,
  controller_ck_24_1, controller_pnr_9, controller_ck_26_1, controller_pnr_8,
  controller_ck_28_1, controller_pnr_7, controller_ck_30_1, controller_pnr_6,
  controller_v_431, controller_v_430, controller_pnr_5, controller_ck_34_1,
  controller_pnr_4, controller_v_401, controller_v_400, controller_v_399,
  controller_pnr_3, controller_ck_38_1, controller_pnr, p_controller_cdown,
  p_controller_cup, p_controller_cl2, p_controller_cl1,
  p_controller_c_policy, p_controller_c_arm, p_controller_c_ar2,
  p_controller_c_ar1, p_controller_c_luz2, p_controller_c_luz1,
  p_controller_c_jan, p_controller_c_pc, p_controller_c_rot,
  p_controller_c_porta, _out->controller_c_arm, _out->controller_c_ar2,
  _out->controller_c_ar1, _out->controller_c_luz2, _out->controller_c_luz1,
  _out->controller_c_jan, _out->controller_c_pc, _out->controller_c_rot,
  _out->controller_c_porta,
  &Controller_controller__controller_controller_controller_c_policy_out_st);
  _out->controller_c_policy = Controller_controller__controller_controller_controller_c_policy_out_st.controller_c_policy;
  Controller_controller__controller_controller_controller_cl1_step(controller_up,
                                                                   controller_down,
                                                                   controller_shift_turno,
                                                                   controller_abre_porta,
                                                                   controller_p_arrived,
                                                                   controller_p1_arrived,
                                                                   controller_ar_failed,
                                                                   controller_ar_recovered,
                                                                   controller_l_failed,
                                                                   controller_l_recovered,
                                                                   controller_ck_1,
                                                                   controller_pnr_13,
                                                                   controller_ck_18_1,
                                                                   controller_pnr_12,
                                                                   controller_ck_20_1,
                                                                   controller_pnr_11,
                                                                   controller_ck_22_1,
                                                                   controller_pnr_10,
                                                                   controller_ck_24_1,
                                                                   controller_pnr_9,
                                                                   controller_ck_26_1,
                                                                   controller_pnr_8,
                                                                   controller_ck_28_1,
                                                                   controller_pnr_7,
                                                                   controller_ck_30_1,
                                                                   controller_pnr_6,
                                                                   controller_v_431,
                                                                   controller_v_430,
                                                                   controller_pnr_5,
                                                                   controller_ck_34_1,
                                                                   controller_pnr_4,
                                                                   controller_v_401,
                                                                   controller_v_400,
                                                                   controller_v_399,
                                                                   controller_pnr_3,
                                                                   controller_ck_38_1,
                                                                   controller_pnr,
                                                                   p_controller_cdown,
                                                                   p_controller_cup,
                                                                   p_controller_cl2,
                                                                   p_controller_cl1,
                                                                   p_controller_c_policy,
                                                                   p_controller_c_arm,
                                                                   p_controller_c_ar2,
                                                                   p_controller_c_ar1,
                                                                   p_controller_c_luz2,
                                                                   p_controller_c_luz1,
                                                                   p_controller_c_jan,
                                                                   p_controller_c_pc,
                                                                   p_controller_c_rot,
                                                                   p_controller_c_porta,
                                                                   _out->controller_c_policy,
                                                                   _out->controller_c_arm,
                                                                   _out->controller_c_ar2,
                                                                   _out->controller_c_ar1,
                                                                   _out->controller_c_luz2,
                                                                   _out->controller_c_luz1,
                                                                   _out->controller_c_jan,
                                                                   _out->controller_c_pc,
                                                                   _out->controller_c_rot,
                                                                   _out->controller_c_porta,
                                                                   &Controller_controller__controller_controller_controller_cl1_out_st);
  _out->controller_cl1 = Controller_controller__controller_controller_controller_cl1_out_st.controller_cl1;
  Controller_controller__controller_controller_controller_cl2_step(controller_up,
                                                                   controller_down,
                                                                   controller_shift_turno,
                                                                   controller_abre_porta,
                                                                   controller_p_arrived,
                                                                   controller_p1_arrived,
                                                                   controller_ar_failed,
                                                                   controller_ar_recovered,
                                                                   controller_l_failed,
                                                                   controller_l_recovered,
                                                                   controller_ck_1,
                                                                   controller_pnr_13,
                                                                   controller_ck_18_1,
                                                                   controller_pnr_12,
                                                                   controller_ck_20_1,
                                                                   controller_pnr_11,
                                                                   controller_ck_22_1,
                                                                   controller_pnr_10,
                                                                   controller_ck_24_1,
                                                                   controller_pnr_9,
                                                                   controller_ck_26_1,
                                                                   controller_pnr_8,
                                                                   controller_ck_28_1,
                                                                   controller_pnr_7,
                                                                   controller_ck_30_1,
                                                                   controller_pnr_6,
                                                                   controller_v_431,
                                                                   controller_v_430,
                                                                   controller_pnr_5,
                                                                   controller_ck_34_1,
                                                                   controller_pnr_4,
                                                                   controller_v_401,
                                                                   controller_v_400,
                                                                   controller_v_399,
                                                                   controller_pnr_3,
                                                                   controller_ck_38_1,
                                                                   controller_pnr,
                                                                   p_controller_cdown,
                                                                   p_controller_cup,
                                                                   p_controller_cl2,
                                                                   p_controller_cl1,
                                                                   p_controller_c_policy,
                                                                   p_controller_c_arm,
                                                                   p_controller_c_ar2,
                                                                   p_controller_c_ar1,
                                                                   p_controller_c_luz2,
                                                                   p_controller_c_luz1,
                                                                   p_controller_c_jan,
                                                                   p_controller_c_pc,
                                                                   p_controller_c_rot,
                                                                   p_controller_c_porta,
                                                                   _out->controller_cl1,
                                                                   _out->controller_c_policy,
                                                                   _out->controller_c_arm,
                                                                   _out->controller_c_ar2,
                                                                   _out->controller_c_ar1,
                                                                   _out->controller_c_luz2,
                                                                   _out->controller_c_luz1,
                                                                   _out->controller_c_jan,
                                                                   _out->controller_c_pc,
                                                                   _out->controller_c_rot,
                                                                   _out->controller_c_porta,
                                                                   &Controller_controller__controller_controller_controller_cl2_out_st);
  _out->controller_cl2 = Controller_controller__controller_controller_controller_cl2_out_st.controller_cl2;
  Controller_controller__controller_controller_controller_cup_step(controller_up,
                                                                   controller_down,
                                                                   controller_shift_turno,
                                                                   controller_abre_porta,
                                                                   controller_p_arrived,
                                                                   controller_p1_arrived,
                                                                   controller_ar_failed,
                                                                   controller_ar_recovered,
                                                                   controller_l_failed,
                                                                   controller_l_recovered,
                                                                   controller_ck_1,
                                                                   controller_pnr_13,
                                                                   controller_ck_18_1,
                                                                   controller_pnr_12,
                                                                   controller_ck_20_1,
                                                                   controller_pnr_11,
                                                                   controller_ck_22_1,
                                                                   controller_pnr_10,
                                                                   controller_ck_24_1,
                                                                   controller_pnr_9,
                                                                   controller_ck_26_1,
                                                                   controller_pnr_8,
                                                                   controller_ck_28_1,
                                                                   controller_pnr_7,
                                                                   controller_ck_30_1,
                                                                   controller_pnr_6,
                                                                   controller_v_431,
                                                                   controller_v_430,
                                                                   controller_pnr_5,
                                                                   controller_ck_34_1,
                                                                   controller_pnr_4,
                                                                   controller_v_401,
                                                                   controller_v_400,
                                                                   controller_v_399,
                                                                   controller_pnr_3,
                                                                   controller_ck_38_1,
                                                                   controller_pnr,
                                                                   p_controller_cdown,
                                                                   p_controller_cup,
                                                                   p_controller_cl2,
                                                                   p_controller_cl1,
                                                                   p_controller_c_policy,
                                                                   p_controller_c_arm,
                                                                   p_controller_c_ar2,
                                                                   p_controller_c_ar1,
                                                                   p_controller_c_luz2,
                                                                   p_controller_c_luz1,
                                                                   p_controller_c_jan,
                                                                   p_controller_c_pc,
                                                                   p_controller_c_rot,
                                                                   p_controller_c_porta,
                                                                   _out->controller_cl2,
                                                                   _out->controller_cl1,
                                                                   _out->controller_c_policy,
                                                                   _out->controller_c_arm,
                                                                   _out->controller_c_ar2,
                                                                   _out->controller_c_ar1,
                                                                   _out->controller_c_luz2,
                                                                   _out->controller_c_luz1,
                                                                   _out->controller_c_jan,
                                                                   _out->controller_c_pc,
                                                                   _out->controller_c_rot,
                                                                   _out->controller_c_porta,
                                                                   &Controller_controller__controller_controller_controller_cup_out_st);
  _out->controller_cup = Controller_controller__controller_controller_controller_cup_out_st.controller_cup;
  Controller_controller__controller_controller_controller_cdown_step(
  controller_up, controller_down, controller_shift_turno,
  controller_abre_porta, controller_p_arrived, controller_p1_arrived,
  controller_ar_failed, controller_ar_recovered, controller_l_failed,
  controller_l_recovered, controller_ck_1, controller_pnr_13,
  controller_ck_18_1, controller_pnr_12, controller_ck_20_1,
  controller_pnr_11, controller_ck_22_1, controller_pnr_10,
  controller_ck_24_1, controller_pnr_9, controller_ck_26_1, controller_pnr_8,
  controller_ck_28_1, controller_pnr_7, controller_ck_30_1, controller_pnr_6,
  controller_v_431, controller_v_430, controller_pnr_5, controller_ck_34_1,
  controller_pnr_4, controller_v_401, controller_v_400, controller_v_399,
  controller_pnr_3, controller_ck_38_1, controller_pnr, p_controller_cdown,
  p_controller_cup, p_controller_cl2, p_controller_cl1,
  p_controller_c_policy, p_controller_c_arm, p_controller_c_ar2,
  p_controller_c_ar1, p_controller_c_luz2, p_controller_c_luz1,
  p_controller_c_jan, p_controller_c_pc, p_controller_c_rot,
  p_controller_c_porta, _out->controller_cup, _out->controller_cl2,
  _out->controller_cl1, _out->controller_c_policy, _out->controller_c_arm,
  _out->controller_c_ar2, _out->controller_c_ar1, _out->controller_c_luz2,
  _out->controller_c_luz1, _out->controller_c_jan, _out->controller_c_pc,
  _out->controller_c_rot, _out->controller_c_porta,
  &Controller_controller__controller_controller_controller_cdown_out_st);
  _out->controller_cdown = Controller_controller__controller_controller_controller_cdown_out_st.controller_cdown;
}

