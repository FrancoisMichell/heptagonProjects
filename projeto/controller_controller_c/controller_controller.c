/* --- Generated the 18/7/2018 at 10:59 --- */
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
  int controller_pnr_15, int controller_ck_24_1, int controller_pnr_14,
  int controller_ck_26_1, int controller_pnr_13, int controller_ck_28_1,
  int controller_pnr_12, int controller_ck_30_1, int controller_pnr_11,
  int controller_ck_32_1, int controller_pnr_10, int controller_ck_34_1,
  int controller_pnr_9, int controller_v_335, int controller_v_334,
  int controller_pnr_8, int controller_ck_39_1, int controller_pnr_7,
  int controller_ck_42_1, int controller_pnr_6, int controller_ck_44_1,
  int controller_pnr_5, int controller_ck_46_1, int controller_pnr_4,
  int controller_ck_48_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door_2, int p_controller_c_door_1,
  int controller_c_blind_1, int controller_c_light_2,
  int controller_c_light_1, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door_2, int controller_c_door_1,
  Controller_controller__controller_controller_controller_c_blind_2_out* _out) {
  
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
  sub_19 = true;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  if (controller_c_window) {
    v_149 = sub_14;
  } else {
    v_149 = false;
  };
  if (controller_c_pc) {
    sub_13 = false;
  } else {
    sub_13 = v_149;
  };
  sub_12 = sub_13;
  if (controller_light_failed_recovered) {
    sub_26 = sub_18;
    sub_27 = false;
  } else {
    sub_26 = false;
    sub_27 = sub_18;
  };
  if (controller_ck_44_1) {
    sub_25 = sub_27;
  } else {
    sub_25 = sub_26;
  };
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  if (controller_c_window) {
    v_148 = sub_22;
  } else {
    v_148 = false;
  };
  if (controller_c_pc) {
    sub_21 = false;
  } else {
    sub_21 = v_148;
  };
  sub_20 = sub_21;
  if (controller_ck_42_1) {
    sub_11 = sub_20;
    v_147 = sub_12;
  } else {
    sub_11 = sub_12;
    v_147 = sub_20;
  };
  if (controller_c_light_1) {
    sub_28 = v_147;
  } else {
    sub_28 = sub_11;
  };
  if (controller_light_switch) {
    v_150 = sub_11;
  } else {
    v_150 = sub_28;
  };
  if (controller_c_light_2) {
    sub_10 = v_150;
  } else {
    sub_10 = sub_28;
  };
  sub_38 = false;
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  if (controller_c_window) {
    v_145 = sub_33;
  } else {
    v_145 = false;
  };
  if (controller_c_pc) {
    sub_32 = false;
  } else {
    sub_32 = v_145;
  };
  sub_31 = sub_32;
  if (controller_light_failed_recovered) {
    sub_45 = sub_37;
    sub_46 = false;
  } else {
    sub_45 = false;
    sub_46 = sub_37;
  };
  if (controller_ck_44_1) {
    sub_44 = sub_46;
  } else {
    sub_44 = sub_45;
  };
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (controller_c_window) {
    v_144 = sub_41;
  } else {
    v_144 = false;
  };
  if (controller_c_pc) {
    sub_40 = false;
  } else {
    sub_40 = v_144;
  };
  sub_39 = sub_40;
  if (controller_ck_42_1) {
    sub_30 = sub_39;
    v_143 = sub_31;
  } else {
    sub_30 = sub_31;
    v_143 = sub_39;
  };
  if (controller_c_light_1) {
    sub_47 = v_143;
  } else {
    sub_47 = sub_30;
  };
  if (controller_light_switch) {
    v_146 = sub_30;
  } else {
    v_146 = sub_47;
  };
  if (controller_c_light_2) {
    sub_29 = v_146;
  } else {
    sub_29 = sub_47;
  };
  if (controller_ck_46_1) {
    v_151 = sub_29;
    sub_9 = sub_29;
  } else {
    v_151 = false;
    sub_9 = sub_10;
  };
  if (controller_blind_switch) {
    v_152 = sub_9;
  } else {
    v_152 = v_151;
  };
  if (controller_ck_46_1) {
    sub_48 = false;
  } else {
    sub_48 = sub_29;
  };
  if (controller_c_blind_1) {
    sub_8 = v_152;
  } else {
    sub_8 = sub_48;
  };
  sub_7 = sub_8;
  if (controller_c_door_1) {
    v_138 = false;
    sub_60 = sub_44;
  } else {
    v_138 = sub_44;
    sub_60 = false;
  };
  if (controller_ck_24_1) {
    sub_59 = v_138;
  } else {
    sub_59 = sub_60;
  };
  sub_58 = sub_59;
  if (controller_c_window) {
    sub_57 = false;
  } else {
    sub_57 = sub_58;
  };
  sub_56 = sub_57;
  sub_55 = sub_56;
  if (controller_c_door_1) {
    v_137 = false;
    sub_66 = sub_36;
  } else {
    v_137 = sub_36;
    sub_66 = false;
  };
  if (controller_ck_24_1) {
    sub_65 = v_137;
  } else {
    sub_65 = sub_66;
  };
  sub_64 = sub_65;
  if (controller_c_window) {
    sub_63 = false;
  } else {
    sub_63 = sub_64;
  };
  sub_62 = sub_63;
  sub_61 = sub_62;
  if (controller_ck_42_1) {
    sub_54 = sub_61;
    v_136 = sub_55;
  } else {
    sub_54 = sub_55;
    v_136 = sub_61;
  };
  if (controller_c_light_1) {
    sub_67 = v_136;
  } else {
    sub_67 = sub_54;
  };
  if (controller_light_switch) {
    v_139 = sub_54;
  } else {
    v_139 = sub_67;
  };
  if (controller_c_light_2) {
    sub_53 = v_139;
  } else {
    sub_53 = sub_67;
  };
  if (controller_ck_46_1) {
    v_140 = false;
  } else {
    v_140 = sub_53;
  };
  if (controller_c_door_1) {
    v_134 = false;
    sub_75 = sub_25;
  } else {
    v_134 = sub_25;
    sub_75 = false;
  };
  if (controller_ck_24_1) {
    sub_74 = v_134;
  } else {
    sub_74 = sub_75;
  };
  sub_73 = sub_74;
  if (controller_c_window) {
    sub_72 = false;
  } else {
    sub_72 = sub_73;
  };
  sub_71 = sub_72;
  sub_70 = sub_71;
  if (controller_c_door_1) {
    v_133 = false;
    sub_81 = sub_17;
  } else {
    v_133 = sub_17;
    sub_81 = false;
  };
  if (controller_ck_24_1) {
    sub_80 = v_133;
  } else {
    sub_80 = sub_81;
  };
  sub_79 = sub_80;
  if (controller_c_window) {
    sub_78 = false;
  } else {
    sub_78 = sub_79;
  };
  sub_77 = sub_78;
  sub_76 = sub_77;
  if (controller_ck_42_1) {
    sub_69 = sub_76;
    v_132 = sub_70;
  } else {
    sub_69 = sub_70;
    v_132 = sub_76;
  };
  if (controller_c_light_1) {
    sub_82 = v_132;
  } else {
    sub_82 = sub_69;
  };
  if (controller_light_switch) {
    v_135 = sub_69;
  } else {
    v_135 = sub_82;
  };
  if (controller_c_light_2) {
    sub_68 = v_135;
  } else {
    sub_68 = sub_82;
  };
  if (controller_ck_46_1) {
    sub_52 = sub_68;
  } else {
    sub_52 = sub_53;
  };
  if (controller_blind_switch) {
    v_141 = sub_52;
  } else {
    v_141 = v_140;
  };
  if (controller_ck_46_1) {
    sub_83 = sub_53;
  } else {
    sub_83 = false;
  };
  if (controller_c_blind_1) {
    sub_51 = v_141;
  } else {
    sub_51 = sub_83;
  };
  if (controller_v_335) {
    sub_91 = false;
  } else {
    sub_91 = sub_43;
  };
  if (controller_c_air_2) {
    v_123 = sub_91;
  } else {
    v_123 = false;
  };
  if (controller_c_air_1) {
    sub_90 = sub_91;
  } else {
    sub_90 = false;
  };
  if (controller_v_335) {
    sub_93 = sub_43;
  } else {
    sub_93 = false;
  };
  sub_92 = sub_93;
  if (controller_c_air_1) {
    v_124 = v_123;
  } else {
    v_124 = sub_92;
  };
  if (controller_v_334) {
    sub_89 = v_124;
  } else {
    sub_89 = sub_90;
  };
  sub_88 = sub_89;
  if (controller_c_pc) {
    v_125 = false;
  } else {
    v_125 = sub_88;
  };
  if (controller_c_closet) {
    sub_87 = false;
  } else {
    sub_87 = v_125;
  };
  if (controller_v_335) {
    sub_98 = false;
  } else {
    sub_98 = sub_35;
  };
  if (controller_c_air_2) {
    v_120 = sub_98;
  } else {
    v_120 = false;
  };
  if (controller_c_air_1) {
    sub_97 = sub_98;
  } else {
    sub_97 = false;
  };
  if (controller_v_335) {
    sub_99 = sub_35;
  } else {
    sub_99 = false;
  };
  if (controller_c_air_1) {
    v_121 = v_120;
  } else {
    v_121 = sub_99;
  };
  if (controller_v_334) {
    sub_96 = v_121;
  } else {
    sub_96 = sub_97;
  };
  sub_95 = sub_96;
  if (controller_c_pc) {
    v_122 = false;
  } else {
    v_122 = sub_95;
  };
  if (controller_c_closet) {
    sub_94 = false;
  } else {
    sub_94 = v_122;
  };
  if (controller_ck_42_1) {
    sub_86 = sub_94;
    v_119 = sub_87;
  } else {
    sub_86 = sub_87;
    v_119 = sub_94;
  };
  if (controller_c_light_1) {
    sub_100 = v_119;
  } else {
    sub_100 = sub_86;
  };
  if (controller_light_switch) {
    v_126 = sub_86;
  } else {
    v_126 = sub_100;
  };
  if (controller_c_light_2) {
    sub_85 = v_126;
  } else {
    sub_85 = sub_100;
  };
  if (controller_v_335) {
    sub_106 = false;
  } else {
    sub_106 = sub_24;
  };
  if (controller_c_air_2) {
    v_116 = sub_106;
  } else {
    v_116 = false;
  };
  if (controller_c_air_1) {
    sub_105 = sub_106;
  } else {
    sub_105 = false;
  };
  if (controller_v_335) {
    sub_108 = sub_24;
  } else {
    sub_108 = false;
  };
  sub_107 = sub_108;
  if (controller_c_air_1) {
    v_117 = v_116;
  } else {
    v_117 = sub_107;
  };
  if (controller_v_334) {
    sub_104 = v_117;
  } else {
    sub_104 = sub_105;
  };
  sub_103 = sub_104;
  if (controller_c_pc) {
    v_118 = false;
  } else {
    v_118 = sub_103;
  };
  if (controller_c_closet) {
    sub_102 = false;
  } else {
    sub_102 = v_118;
  };
  if (controller_light_failed_recovered) {
    sub_116 = sub_18;
    sub_117 = sub_37;
  } else {
    sub_116 = sub_37;
    sub_117 = sub_18;
  };
  if (controller_ck_44_1) {
    sub_115 = sub_117;
  } else {
    sub_115 = sub_116;
  };
  sub_114 = sub_115;
  if (controller_v_335) {
    sub_113 = false;
  } else {
    sub_113 = sub_114;
  };
  if (controller_c_air_2) {
    v_113 = sub_113;
  } else {
    v_113 = false;
  };
  if (controller_c_air_1) {
    sub_112 = sub_113;
  } else {
    sub_112 = false;
  };
  if (controller_v_335) {
    sub_118 = sub_114;
  } else {
    sub_118 = false;
  };
  if (controller_c_air_1) {
    v_114 = v_113;
  } else {
    v_114 = sub_118;
  };
  if (controller_v_334) {
    sub_111 = v_114;
  } else {
    sub_111 = sub_112;
  };
  sub_110 = sub_111;
  if (controller_c_pc) {
    v_115 = false;
  } else {
    v_115 = sub_110;
  };
  if (controller_c_closet) {
    sub_109 = false;
  } else {
    sub_109 = v_115;
  };
  if (controller_ck_42_1) {
    sub_101 = sub_109;
    v_112 = sub_102;
  } else {
    sub_101 = sub_102;
    v_112 = sub_109;
  };
  if (controller_c_light_1) {
    sub_119 = v_112;
  } else {
    sub_119 = sub_101;
  };
  if (controller_light_switch) {
    v_127 = sub_101;
  } else {
    v_127 = sub_119;
  };
  if (controller_c_light_2) {
    v_128 = v_127;
  } else {
    v_128 = sub_119;
  };
  if (controller_ck_46_1) {
    v_129 = v_128;
  } else {
    v_129 = sub_85;
  };
  if (controller_ck_44_1) {
    sub_128 = sub_45;
  } else {
    sub_128 = sub_46;
  };
  sub_127 = sub_128;
  if (controller_v_335) {
    sub_126 = false;
  } else {
    sub_126 = sub_127;
  };
  if (controller_c_air_2) {
    v_108 = sub_126;
  } else {
    v_108 = false;
  };
  if (controller_c_air_1) {
    sub_125 = sub_126;
  } else {
    sub_125 = false;
  };
  if (controller_v_335) {
    sub_130 = sub_127;
  } else {
    sub_130 = false;
  };
  sub_129 = sub_130;
  if (controller_c_air_1) {
    v_109 = v_108;
  } else {
    v_109 = sub_129;
  };
  if (controller_v_334) {
    sub_124 = v_109;
  } else {
    sub_124 = sub_125;
  };
  sub_123 = sub_124;
  if (controller_c_pc) {
    v_110 = false;
  } else {
    v_110 = sub_123;
  };
  if (controller_c_closet) {
    sub_122 = false;
  } else {
    sub_122 = v_110;
  };
  if (controller_ck_42_1) {
    sub_121 = sub_122;
    v_107 = false;
  } else {
    sub_121 = false;
    v_107 = sub_122;
  };
  if (controller_c_light_1) {
    sub_131 = v_107;
  } else {
    sub_131 = sub_121;
  };
  if (controller_light_switch) {
    v_111 = sub_121;
  } else {
    v_111 = sub_131;
  };
  if (controller_c_light_2) {
    sub_120 = v_111;
  } else {
    sub_120 = sub_131;
  };
  if (controller_ck_46_1) {
    v_130 = sub_120;
  } else {
    v_130 = sub_85;
  };
  if (controller_blind_switch) {
    v_131 = v_129;
  } else {
    v_131 = v_130;
  };
  if (controller_ck_46_1) {
    sub_132 = sub_85;
  } else {
    sub_132 = sub_120;
  };
  if (controller_c_blind_1) {
    sub_84 = v_131;
  } else {
    sub_84 = sub_132;
  };
  if (controller_air_failed_recovered) {
    v_142 = sub_84;
    sub_50 = sub_51;
  } else {
    v_142 = sub_51;
    sub_50 = sub_84;
  };
  if (controller_ck_39_1) {
    sub_49 = v_142;
  } else {
    sub_49 = sub_50;
  };
  if (controller_cleaner) {
    v_153 = sub_49;
    sub_6 = sub_7;
  } else {
    v_153 = sub_7;
    sub_6 = sub_49;
  };
  if (controller_ck_30_1) {
    sub_5 = v_153;
  } else {
    sub_5 = sub_6;
  };
  if (controller_c_window) {
    v_98 = sub_89;
  } else {
    v_98 = sub_41;
  };
  if (controller_c_pc) {
    sub_141 = v_98;
  } else {
    sub_141 = sub_41;
  };
  sub_140 = sub_141;
  if (controller_v_335) {
    sub_145 = sub_127;
  } else {
    sub_145 = sub_43;
  };
  if (controller_c_air_2) {
    v_94 = sub_145;
  } else {
    v_94 = sub_126;
  };
  if (controller_c_air_1) {
    v_95 = v_94;
  } else {
    v_95 = sub_92;
  };
  if (controller_c_air_2) {
    sub_146 = sub_130;
  } else {
    sub_146 = sub_127;
  };
  if (controller_c_air_1) {
    sub_144 = sub_145;
  } else {
    sub_144 = sub_146;
  };
  if (controller_v_334) {
    v_96 = v_95;
  } else {
    v_96 = sub_144;
  };
  if (controller_c_window) {
    v_97 = v_96;
  } else {
    v_97 = sub_33;
  };
  if (controller_c_pc) {
    sub_143 = v_97;
  } else {
    sub_143 = sub_33;
  };
  sub_142 = sub_143;
  if (controller_ck_42_1) {
    sub_139 = sub_142;
    v_93 = sub_140;
  } else {
    sub_139 = sub_140;
    v_93 = sub_142;
  };
  if (controller_c_light_1) {
    sub_147 = v_93;
  } else {
    sub_147 = sub_139;
  };
  if (controller_light_switch) {
    v_99 = sub_139;
  } else {
    v_99 = sub_147;
  };
  if (controller_c_light_2) {
    sub_138 = v_99;
  } else {
    sub_138 = sub_147;
  };
  if (controller_c_window) {
    v_92 = sub_104;
  } else {
    v_92 = sub_22;
  };
  if (controller_c_pc) {
    sub_150 = v_92;
  } else {
    sub_150 = sub_22;
  };
  sub_149 = sub_150;
  if (controller_v_335) {
    sub_154 = sub_127;
  } else {
    sub_154 = sub_24;
  };
  if (controller_c_air_2) {
    v_88 = sub_154;
  } else {
    v_88 = sub_126;
  };
  if (controller_c_air_1) {
    v_89 = v_88;
    sub_153 = sub_154;
  } else {
    v_89 = sub_107;
    sub_153 = sub_146;
  };
  if (controller_v_334) {
    v_90 = v_89;
  } else {
    v_90 = sub_153;
  };
  sub_156 = sub_114;
  sub_155 = sub_156;
  if (controller_c_window) {
    v_91 = v_90;
  } else {
    v_91 = sub_155;
  };
  if (controller_c_pc) {
    sub_152 = v_91;
  } else {
    sub_152 = sub_155;
  };
  sub_151 = sub_152;
  if (controller_ck_42_1) {
    sub_148 = sub_151;
    v_87 = sub_149;
  } else {
    sub_148 = sub_149;
    v_87 = sub_151;
  };
  if (controller_c_light_1) {
    sub_157 = v_87;
  } else {
    sub_157 = sub_148;
  };
  if (controller_light_switch) {
    v_100 = sub_148;
  } else {
    v_100 = sub_157;
  };
  if (controller_c_light_2) {
    v_101 = v_100;
  } else {
    v_101 = sub_157;
  };
  if (controller_ck_46_1) {
    v_102 = v_101;
  } else {
    v_102 = sub_138;
  };
  if (controller_c_air_2) {
    v_82 = sub_130;
  } else {
    v_82 = sub_126;
  };
  if (controller_c_air_1) {
    v_83 = v_82;
    sub_162 = sub_129;
  } else {
    v_83 = false;
    sub_162 = sub_146;
  };
  if (controller_v_334) {
    v_84 = v_83;
  } else {
    v_84 = sub_162;
  };
  sub_164 = sub_127;
  sub_163 = sub_164;
  if (controller_c_window) {
    v_85 = v_84;
  } else {
    v_85 = sub_163;
  };
  if (controller_c_pc) {
    sub_161 = v_85;
  } else {
    sub_161 = sub_163;
  };
  sub_160 = sub_161;
  if (controller_ck_42_1) {
    sub_159 = sub_160;
    v_81 = false;
  } else {
    sub_159 = false;
    v_81 = sub_160;
  };
  if (controller_c_light_1) {
    sub_165 = v_81;
  } else {
    sub_165 = sub_159;
  };
  if (controller_light_switch) {
    v_86 = sub_159;
  } else {
    v_86 = sub_165;
  };
  if (controller_c_light_2) {
    sub_158 = v_86;
  } else {
    sub_158 = sub_165;
  };
  if (controller_ck_46_1) {
    v_103 = sub_158;
  } else {
    v_103 = sub_138;
  };
  if (controller_blind_switch) {
    v_104 = v_102;
  } else {
    v_104 = v_103;
  };
  if (controller_ck_46_1) {
    sub_166 = sub_138;
  } else {
    sub_166 = sub_158;
  };
  if (controller_c_blind_1) {
    sub_137 = v_104;
  } else {
    sub_137 = sub_166;
  };
  if (controller_air_failed_recovered) {
    v_105 = sub_137;
    sub_136 = sub_51;
  } else {
    v_105 = sub_51;
    sub_136 = sub_137;
  };
  if (controller_ck_39_1) {
    sub_135 = v_105;
  } else {
    sub_135 = sub_136;
  };
  if (controller_cleaner) {
    v_106 = sub_49;
    sub_134 = sub_135;
  } else {
    v_106 = sub_135;
    sub_134 = sub_49;
  };
  if (controller_ck_30_1) {
    sub_133 = v_106;
  } else {
    sub_133 = sub_134;
  };
  if (controller_worker) {
    v_154 = sub_133;
    sub_4 = sub_5;
  } else {
    v_154 = sub_5;
    sub_4 = sub_133;
  };
  if (controller_ck_28_1) {
    sub_3 = v_154;
  } else {
    sub_3 = sub_4;
  };
  sub_177 = sub_61;
  sub_176 = sub_177;
  sub_175 = sub_176;
  if (controller_ck_46_1) {
    v_76 = false;
  } else {
    v_76 = sub_175;
  };
  sub_180 = sub_76;
  sub_179 = sub_180;
  sub_178 = sub_179;
  if (controller_ck_46_1) {
    sub_174 = sub_178;
  } else {
    sub_174 = sub_175;
  };
  if (controller_blind_switch) {
    v_77 = sub_174;
  } else {
    v_77 = v_76;
  };
  if (controller_ck_46_1) {
    sub_181 = sub_175;
  } else {
    sub_181 = false;
  };
  if (controller_c_blind_1) {
    sub_173 = v_77;
  } else {
    sub_173 = sub_181;
  };
  if (controller_air_failed_recovered) {
    v_78 = sub_84;
    sub_172 = sub_173;
  } else {
    v_78 = sub_173;
    sub_172 = sub_84;
  };
  if (controller_ck_39_1) {
    sub_171 = v_78;
  } else {
    sub_171 = sub_172;
  };
  if (controller_cleaner) {
    v_79 = sub_171;
    sub_170 = sub_7;
  } else {
    v_79 = sub_7;
    sub_170 = sub_171;
  };
  if (controller_ck_30_1) {
    sub_169 = v_79;
  } else {
    sub_169 = sub_170;
  };
  sub_190 = sub_88;
  sub_189 = sub_190;
  sub_192 = sub_95;
  sub_191 = sub_192;
  if (controller_ck_42_1) {
    sub_188 = sub_191;
    v_67 = sub_189;
  } else {
    sub_188 = sub_189;
    v_67 = sub_191;
  };
  if (controller_c_light_1) {
    sub_193 = v_67;
  } else {
    sub_193 = sub_188;
  };
  if (controller_light_switch) {
    v_68 = sub_188;
  } else {
    v_68 = sub_193;
  };
  if (controller_c_light_2) {
    sub_187 = v_68;
  } else {
    sub_187 = sub_193;
  };
  sub_196 = sub_103;
  sub_195 = sub_196;
  sub_198 = sub_110;
  sub_197 = sub_198;
  if (controller_ck_42_1) {
    sub_194 = sub_197;
    v_66 = sub_195;
  } else {
    sub_194 = sub_195;
    v_66 = sub_197;
  };
  if (controller_c_light_1) {
    sub_199 = v_66;
  } else {
    sub_199 = sub_194;
  };
  if (controller_light_switch) {
    v_69 = sub_194;
  } else {
    v_69 = sub_199;
  };
  if (controller_c_light_2) {
    v_70 = v_69;
  } else {
    v_70 = sub_199;
  };
  if (controller_ck_46_1) {
    v_71 = v_70;
  } else {
    v_71 = sub_187;
  };
  sub_203 = sub_123;
  sub_202 = sub_203;
  if (controller_ck_42_1) {
    sub_201 = sub_202;
    v_64 = false;
  } else {
    sub_201 = false;
    v_64 = sub_202;
  };
  if (controller_c_light_1) {
    sub_204 = v_64;
  } else {
    sub_204 = sub_201;
  };
  if (controller_light_switch) {
    v_65 = sub_201;
  } else {
    v_65 = sub_204;
  };
  if (controller_c_light_2) {
    sub_200 = v_65;
  } else {
    sub_200 = sub_204;
  };
  if (controller_ck_46_1) {
    v_72 = sub_200;
  } else {
    v_72 = sub_187;
  };
  if (controller_blind_switch) {
    v_73 = v_71;
  } else {
    v_73 = v_72;
  };
  if (controller_ck_46_1) {
    sub_205 = sub_187;
  } else {
    sub_205 = sub_200;
  };
  if (controller_c_blind_1) {
    sub_186 = v_73;
  } else {
    sub_186 = sub_205;
  };
  if (controller_air_failed_recovered) {
    v_74 = sub_186;
    sub_185 = sub_173;
  } else {
    v_74 = sub_173;
    sub_185 = sub_186;
  };
  if (controller_ck_39_1) {
    sub_184 = v_74;
  } else {
    sub_184 = sub_185;
  };
  if (controller_cleaner) {
    v_75 = sub_171;
    sub_183 = sub_184;
  } else {
    v_75 = sub_184;
    sub_183 = sub_171;
  };
  if (controller_ck_30_1) {
    sub_182 = v_75;
  } else {
    sub_182 = sub_183;
  };
  if (controller_worker) {
    v_80 = sub_182;
    sub_168 = sub_169;
  } else {
    v_80 = sub_169;
    sub_168 = sub_182;
  };
  if (controller_ck_28_1) {
    sub_167 = v_80;
  } else {
    sub_167 = sub_168;
  };
  if (controller_change_shift) {
    v_155 = sub_167;
    sub_2 = sub_3;
  } else {
    v_155 = sub_3;
    sub_2 = sub_167;
  };
  if (controller_ck_1) {
    sub_1 = v_155;
  } else {
    sub_1 = sub_2;
  };
  if (controller_ck_46_1) {
    v_60 = sub_10;
  } else {
    v_60 = false;
  };
  if (controller_blind_switch) {
    v_61 = sub_9;
  } else {
    v_61 = v_60;
  };
  if (controller_ck_46_1) {
    sub_213 = false;
  } else {
    sub_213 = sub_10;
  };
  if (controller_c_blind_1) {
    sub_212 = v_61;
  } else {
    sub_212 = sub_213;
  };
  sub_211 = sub_212;
  if (controller_ck_46_1) {
    v_57 = false;
  } else {
    v_57 = sub_68;
  };
  if (controller_blind_switch) {
    v_58 = sub_52;
  } else {
    v_58 = v_57;
  };
  if (controller_ck_46_1) {
    sub_217 = sub_68;
  } else {
    sub_217 = false;
  };
  if (controller_c_blind_1) {
    sub_216 = v_58;
  } else {
    sub_216 = sub_217;
  };
  if (controller_ck_44_1) {
    sub_227 = sub_116;
  } else {
    sub_227 = sub_117;
  };
  sub_226 = sub_227;
  if (controller_v_335) {
    sub_225 = false;
  } else {
    sub_225 = sub_226;
  };
  if (controller_c_air_2) {
    v_50 = sub_225;
  } else {
    v_50 = false;
  };
  if (controller_c_air_1) {
    sub_224 = sub_225;
  } else {
    sub_224 = false;
  };
  if (controller_v_335) {
    sub_228 = sub_226;
  } else {
    sub_228 = false;
  };
  if (controller_c_air_1) {
    v_51 = v_50;
  } else {
    v_51 = sub_228;
  };
  if (controller_v_334) {
    sub_223 = v_51;
  } else {
    sub_223 = sub_224;
  };
  sub_222 = sub_223;
  if (controller_c_pc) {
    v_52 = false;
  } else {
    v_52 = sub_222;
  };
  if (controller_c_closet) {
    sub_221 = false;
  } else {
    sub_221 = v_52;
  };
  if (controller_ck_42_1) {
    sub_220 = sub_221;
    v_49 = sub_87;
  } else {
    sub_220 = sub_87;
    v_49 = sub_221;
  };
  if (controller_c_light_1) {
    sub_229 = v_49;
  } else {
    sub_229 = sub_220;
  };
  if (controller_light_switch) {
    v_53 = sub_220;
  } else {
    v_53 = sub_229;
  };
  if (controller_c_light_2) {
    sub_219 = v_53;
  } else {
    sub_219 = sub_229;
  };
  if (controller_v_335) {
    sub_236 = false;
  } else {
    sub_236 = sub_16;
  };
  if (controller_c_air_2) {
    v_45 = sub_236;
  } else {
    v_45 = false;
  };
  if (controller_c_air_1) {
    sub_235 = sub_236;
  } else {
    sub_235 = false;
  };
  if (controller_v_335) {
    sub_237 = sub_16;
  } else {
    sub_237 = false;
  };
  if (controller_c_air_1) {
    v_46 = v_45;
  } else {
    v_46 = sub_237;
  };
  if (controller_v_334) {
    sub_234 = v_46;
  } else {
    sub_234 = sub_235;
  };
  sub_233 = sub_234;
  if (controller_c_pc) {
    v_47 = false;
  } else {
    v_47 = sub_233;
  };
  if (controller_c_closet) {
    sub_232 = false;
  } else {
    sub_232 = v_47;
  };
  if (controller_ck_42_1) {
    sub_231 = sub_232;
    v_44 = sub_102;
  } else {
    sub_231 = sub_102;
    v_44 = sub_232;
  };
  if (controller_c_light_1) {
    sub_238 = v_44;
  } else {
    sub_238 = sub_231;
  };
  if (controller_light_switch) {
    v_48 = sub_231;
  } else {
    v_48 = sub_238;
  };
  if (controller_c_light_2) {
    sub_230 = v_48;
  } else {
    sub_230 = sub_238;
  };
  if (controller_ck_46_1) {
    v_54 = sub_230;
  } else {
    v_54 = sub_219;
  };
  if (controller_ck_44_1) {
    sub_247 = sub_26;
  } else {
    sub_247 = sub_27;
  };
  sub_246 = sub_247;
  if (controller_v_335) {
    sub_245 = false;
  } else {
    sub_245 = sub_246;
  };
  if (controller_c_air_2) {
    v_40 = sub_245;
  } else {
    v_40 = false;
  };
  if (controller_c_air_1) {
    sub_244 = sub_245;
  } else {
    sub_244 = false;
  };
  if (controller_v_335) {
    sub_249 = sub_246;
  } else {
    sub_249 = false;
  };
  sub_248 = sub_249;
  if (controller_c_air_1) {
    v_41 = v_40;
  } else {
    v_41 = sub_248;
  };
  if (controller_v_334) {
    sub_243 = v_41;
  } else {
    sub_243 = sub_244;
  };
  sub_242 = sub_243;
  if (controller_c_pc) {
    v_42 = false;
  } else {
    v_42 = sub_242;
  };
  if (controller_c_closet) {
    sub_241 = false;
  } else {
    sub_241 = v_42;
  };
  if (controller_ck_42_1) {
    sub_240 = sub_241;
    v_39 = false;
  } else {
    sub_240 = false;
    v_39 = sub_241;
  };
  if (controller_c_light_1) {
    sub_250 = v_39;
  } else {
    sub_250 = sub_240;
  };
  if (controller_light_switch) {
    v_43 = sub_240;
  } else {
    v_43 = sub_250;
  };
  if (controller_c_light_2) {
    sub_239 = v_43;
  } else {
    sub_239 = sub_250;
  };
  if (controller_ck_46_1) {
    v_55 = sub_239;
  } else {
    v_55 = sub_230;
  };
  if (controller_blind_switch) {
    v_56 = v_54;
  } else {
    v_56 = v_55;
  };
  if (controller_ck_46_1) {
    sub_251 = sub_230;
  } else {
    sub_251 = sub_239;
  };
  if (controller_c_blind_1) {
    sub_218 = v_56;
  } else {
    sub_218 = sub_251;
  };
  if (controller_air_failed_recovered) {
    v_59 = sub_218;
    sub_215 = sub_216;
  } else {
    v_59 = sub_216;
    sub_215 = sub_218;
  };
  if (controller_ck_39_1) {
    sub_214 = v_59;
  } else {
    sub_214 = sub_215;
  };
  if (controller_cleaner) {
    v_62 = sub_214;
    sub_210 = sub_211;
  } else {
    v_62 = sub_211;
    sub_210 = sub_214;
  };
  if (controller_ck_30_1) {
    sub_209 = v_62;
  } else {
    sub_209 = sub_210;
  };
  if (controller_v_335) {
    sub_262 = sub_246;
  } else {
    sub_262 = sub_43;
  };
  if (controller_c_air_2) {
    v_29 = sub_262;
  } else {
    v_29 = sub_245;
  };
  if (controller_c_air_1) {
    v_30 = v_29;
  } else {
    v_30 = sub_92;
  };
  if (controller_c_air_2) {
    sub_263 = sub_249;
  } else {
    sub_263 = sub_246;
  };
  if (controller_c_air_1) {
    sub_261 = sub_262;
  } else {
    sub_261 = sub_263;
  };
  if (controller_v_334) {
    v_31 = v_30;
  } else {
    v_31 = sub_261;
  };
  sub_265 = sub_226;
  sub_264 = sub_265;
  if (controller_c_window) {
    v_32 = v_31;
  } else {
    v_32 = sub_264;
  };
  if (controller_c_pc) {
    sub_260 = v_32;
  } else {
    sub_260 = sub_264;
  };
  sub_259 = sub_260;
  if (controller_ck_42_1) {
    sub_258 = sub_259;
    v_28 = sub_140;
  } else {
    sub_258 = sub_140;
    v_28 = sub_259;
  };
  if (controller_c_light_1) {
    sub_266 = v_28;
  } else {
    sub_266 = sub_258;
  };
  if (controller_light_switch) {
    v_33 = sub_258;
  } else {
    v_33 = sub_266;
  };
  if (controller_c_light_2) {
    sub_257 = v_33;
  } else {
    sub_257 = sub_266;
  };
  if (controller_v_335) {
    sub_272 = sub_246;
  } else {
    sub_272 = sub_24;
  };
  if (controller_c_air_2) {
    v_23 = sub_272;
  } else {
    v_23 = sub_245;
  };
  if (controller_c_air_1) {
    v_24 = v_23;
    sub_271 = sub_272;
  } else {
    v_24 = sub_107;
    sub_271 = sub_263;
  };
  if (controller_v_334) {
    v_25 = v_24;
  } else {
    v_25 = sub_271;
  };
  if (controller_c_window) {
    v_26 = v_25;
  } else {
    v_26 = sub_14;
  };
  if (controller_c_pc) {
    sub_270 = v_26;
  } else {
    sub_270 = sub_14;
  };
  sub_269 = sub_270;
  if (controller_ck_42_1) {
    sub_268 = sub_269;
    v_22 = sub_149;
  } else {
    sub_268 = sub_149;
    v_22 = sub_269;
  };
  if (controller_c_light_1) {
    sub_273 = v_22;
  } else {
    sub_273 = sub_268;
  };
  if (controller_light_switch) {
    v_27 = sub_268;
  } else {
    v_27 = sub_273;
  };
  if (controller_c_light_2) {
    sub_267 = v_27;
  } else {
    sub_267 = sub_273;
  };
  if (controller_ck_46_1) {
    v_34 = sub_267;
  } else {
    v_34 = sub_257;
  };
  if (controller_c_air_2) {
    v_17 = sub_249;
  } else {
    v_17 = sub_245;
  };
  if (controller_c_air_1) {
    v_18 = v_17;
    sub_278 = sub_248;
  } else {
    v_18 = false;
    sub_278 = sub_263;
  };
  if (controller_v_334) {
    v_19 = v_18;
  } else {
    v_19 = sub_278;
  };
  sub_280 = sub_246;
  sub_279 = sub_280;
  if (controller_c_window) {
    v_20 = v_19;
  } else {
    v_20 = sub_279;
  };
  if (controller_c_pc) {
    sub_277 = v_20;
  } else {
    sub_277 = sub_279;
  };
  sub_276 = sub_277;
  if (controller_ck_42_1) {
    sub_275 = sub_276;
    v_16 = false;
  } else {
    sub_275 = false;
    v_16 = sub_276;
  };
  if (controller_c_light_1) {
    sub_281 = v_16;
  } else {
    sub_281 = sub_275;
  };
  if (controller_light_switch) {
    v_21 = sub_275;
  } else {
    v_21 = sub_281;
  };
  if (controller_c_light_2) {
    sub_274 = v_21;
  } else {
    sub_274 = sub_281;
  };
  if (controller_ck_46_1) {
    v_35 = sub_274;
  } else {
    v_35 = sub_267;
  };
  if (controller_blind_switch) {
    v_36 = v_34;
  } else {
    v_36 = v_35;
  };
  if (controller_ck_46_1) {
    sub_282 = sub_267;
  } else {
    sub_282 = sub_274;
  };
  if (controller_c_blind_1) {
    sub_256 = v_36;
  } else {
    sub_256 = sub_282;
  };
  if (controller_air_failed_recovered) {
    v_37 = sub_256;
    sub_255 = sub_216;
  } else {
    v_37 = sub_216;
    sub_255 = sub_256;
  };
  if (controller_ck_39_1) {
    sub_254 = v_37;
  } else {
    sub_254 = sub_255;
  };
  if (controller_cleaner) {
    v_38 = sub_214;
    sub_253 = sub_254;
  } else {
    v_38 = sub_254;
    sub_253 = sub_214;
  };
  if (controller_ck_30_1) {
    sub_252 = v_38;
  } else {
    sub_252 = sub_253;
  };
  if (controller_worker) {
    v_63 = sub_252;
    sub_208 = sub_209;
  } else {
    v_63 = sub_209;
    sub_208 = sub_252;
  };
  if (controller_ck_28_1) {
    sub_207 = v_63;
  } else {
    sub_207 = sub_208;
  };
  if (controller_ck_46_1) {
    v_11 = false;
  } else {
    v_11 = sub_178;
  };
  if (controller_blind_switch) {
    v_12 = sub_174;
  } else {
    v_12 = v_11;
  };
  if (controller_ck_46_1) {
    sub_290 = sub_178;
  } else {
    sub_290 = false;
  };
  if (controller_c_blind_1) {
    sub_289 = v_12;
  } else {
    sub_289 = sub_290;
  };
  if (controller_air_failed_recovered) {
    v_13 = sub_218;
    sub_288 = sub_289;
  } else {
    v_13 = sub_289;
    sub_288 = sub_218;
  };
  if (controller_ck_39_1) {
    sub_287 = v_13;
  } else {
    sub_287 = sub_288;
  };
  if (controller_cleaner) {
    v_14 = sub_287;
    sub_286 = sub_211;
  } else {
    v_14 = sub_211;
    sub_286 = sub_287;
  };
  if (controller_ck_30_1) {
    sub_285 = v_14;
  } else {
    sub_285 = sub_286;
  };
  sub_299 = sub_222;
  sub_298 = sub_299;
  if (controller_ck_42_1) {
    sub_297 = sub_298;
    v_4 = sub_189;
  } else {
    sub_297 = sub_189;
    v_4 = sub_298;
  };
  if (controller_c_light_1) {
    sub_300 = v_4;
  } else {
    sub_300 = sub_297;
  };
  if (controller_light_switch) {
    v_5 = sub_297;
  } else {
    v_5 = sub_300;
  };
  if (controller_c_light_2) {
    sub_296 = v_5;
  } else {
    sub_296 = sub_300;
  };
  sub_304 = sub_233;
  sub_303 = sub_304;
  if (controller_ck_42_1) {
    sub_302 = sub_303;
    v_2 = sub_195;
  } else {
    sub_302 = sub_195;
    v_2 = sub_303;
  };
  if (controller_c_light_1) {
    sub_305 = v_2;
  } else {
    sub_305 = sub_302;
  };
  if (controller_light_switch) {
    v_3 = sub_302;
  } else {
    v_3 = sub_305;
  };
  if (controller_c_light_2) {
    sub_301 = v_3;
  } else {
    sub_301 = sub_305;
  };
  if (controller_ck_46_1) {
    v_6 = sub_301;
  } else {
    v_6 = sub_296;
  };
  sub_309 = sub_242;
  sub_308 = sub_309;
  if (controller_ck_42_1) {
    sub_307 = sub_308;
    v = false;
  } else {
    sub_307 = false;
    v = sub_308;
  };
  if (controller_c_light_1) {
    sub_310 = v;
  } else {
    sub_310 = sub_307;
  };
  if (controller_light_switch) {
    v_1 = sub_307;
  } else {
    v_1 = sub_310;
  };
  if (controller_c_light_2) {
    sub_306 = v_1;
  } else {
    sub_306 = sub_310;
  };
  if (controller_ck_46_1) {
    v_7 = sub_306;
  } else {
    v_7 = sub_301;
  };
  if (controller_blind_switch) {
    v_8 = v_6;
  } else {
    v_8 = v_7;
  };
  if (controller_ck_46_1) {
    sub_311 = sub_301;
  } else {
    sub_311 = sub_306;
  };
  if (controller_c_blind_1) {
    sub_295 = v_8;
  } else {
    sub_295 = sub_311;
  };
  if (controller_air_failed_recovered) {
    v_9 = sub_295;
    sub_294 = sub_289;
  } else {
    v_9 = sub_289;
    sub_294 = sub_295;
  };
  if (controller_ck_39_1) {
    sub_293 = v_9;
  } else {
    sub_293 = sub_294;
  };
  if (controller_cleaner) {
    v_10 = sub_287;
    sub_292 = sub_293;
  } else {
    v_10 = sub_293;
    sub_292 = sub_287;
  };
  if (controller_ck_30_1) {
    sub_291 = v_10;
  } else {
    sub_291 = sub_292;
  };
  if (controller_worker) {
    v_15 = sub_291;
    sub_284 = sub_285;
  } else {
    v_15 = sub_285;
    sub_284 = sub_291;
  };
  if (controller_ck_28_1) {
    sub_283 = v_15;
  } else {
    sub_283 = sub_284;
  };
  if (controller_change_shift) {
    v_156 = sub_283;
    sub_206 = sub_207;
  } else {
    v_156 = sub_207;
    sub_206 = sub_283;
  };
  if (controller_ck_1) {
    v_157 = v_156;
  } else {
    v_157 = sub_206;
  };
  if (p_controller_c_blind_2) {
    sub_0 = v_157;
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
  int controller_pnr_15, int controller_ck_24_1, int controller_pnr_14,
  int controller_ck_26_1, int controller_pnr_13, int controller_ck_28_1,
  int controller_pnr_12, int controller_ck_30_1, int controller_pnr_11,
  int controller_ck_32_1, int controller_pnr_10, int controller_ck_34_1,
  int controller_pnr_9, int controller_v_335, int controller_v_334,
  int controller_pnr_8, int controller_ck_39_1, int controller_pnr_7,
  int controller_ck_42_1, int controller_pnr_6, int controller_ck_44_1,
  int controller_pnr_5, int controller_ck_46_1, int controller_pnr_4,
  int controller_ck_48_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door_2, int p_controller_c_door_1,
  int controller_c_light_2, int controller_c_light_1,
  int controller_c_closet, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door_2,
  int controller_c_door_1,
  Controller_controller__controller_controller_controller_c_blind_1_out* _out) {
  
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
  sub_19 = false;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  if (controller_c_window) {
    v_261 = sub_14;
  } else {
    v_261 = false;
  };
  if (controller_c_pc) {
    sub_13 = false;
  } else {
    sub_13 = v_261;
  };
  sub_12 = sub_13;
  if (controller_light_failed_recovered) {
    sub_26 = sub_18;
    sub_27 = false;
  } else {
    sub_26 = false;
    sub_27 = sub_18;
  };
  if (controller_ck_44_1) {
    sub_25 = sub_27;
  } else {
    sub_25 = sub_26;
  };
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  if (controller_c_window) {
    v_260 = sub_22;
  } else {
    v_260 = false;
  };
  if (controller_c_pc) {
    sub_21 = false;
  } else {
    sub_21 = v_260;
  };
  sub_20 = sub_21;
  if (controller_ck_42_1) {
    sub_11 = sub_20;
    v_259 = sub_12;
  } else {
    sub_11 = sub_12;
    v_259 = sub_20;
  };
  if (controller_c_light_1) {
    sub_28 = v_259;
  } else {
    sub_28 = sub_11;
  };
  if (controller_light_switch) {
    v_262 = sub_11;
  } else {
    v_262 = sub_28;
  };
  if (controller_c_light_2) {
    sub_10 = v_262;
  } else {
    sub_10 = sub_28;
  };
  sub_38 = true;
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  if (controller_c_window) {
    v_257 = sub_33;
  } else {
    v_257 = false;
  };
  if (controller_c_pc) {
    sub_32 = false;
  } else {
    sub_32 = v_257;
  };
  sub_31 = sub_32;
  if (controller_light_failed_recovered) {
    sub_45 = sub_37;
    sub_46 = false;
  } else {
    sub_45 = false;
    sub_46 = sub_37;
  };
  if (controller_ck_44_1) {
    sub_44 = sub_46;
  } else {
    sub_44 = sub_45;
  };
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (controller_c_window) {
    v_256 = sub_41;
  } else {
    v_256 = false;
  };
  if (controller_c_pc) {
    sub_40 = false;
  } else {
    sub_40 = v_256;
  };
  sub_39 = sub_40;
  if (controller_ck_42_1) {
    sub_30 = sub_39;
    v_255 = sub_31;
  } else {
    sub_30 = sub_31;
    v_255 = sub_39;
  };
  if (controller_c_light_1) {
    sub_47 = v_255;
  } else {
    sub_47 = sub_30;
  };
  if (controller_light_switch) {
    v_258 = sub_30;
  } else {
    v_258 = sub_47;
  };
  if (controller_c_light_2) {
    sub_29 = v_258;
  } else {
    sub_29 = sub_47;
  };
  if (controller_ck_46_1) {
    sub_9 = sub_29;
  } else {
    sub_9 = sub_10;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (controller_c_door_1) {
    v_250 = false;
    sub_59 = sub_44;
  } else {
    v_250 = sub_44;
    sub_59 = false;
  };
  if (controller_ck_24_1) {
    sub_58 = v_250;
  } else {
    sub_58 = sub_59;
  };
  sub_57 = sub_58;
  if (controller_c_window) {
    sub_56 = false;
  } else {
    sub_56 = sub_57;
  };
  sub_55 = sub_56;
  sub_54 = sub_55;
  if (controller_c_door_1) {
    v_249 = false;
    sub_65 = sub_36;
  } else {
    v_249 = sub_36;
    sub_65 = false;
  };
  if (controller_ck_24_1) {
    sub_64 = v_249;
  } else {
    sub_64 = sub_65;
  };
  sub_63 = sub_64;
  if (controller_c_window) {
    sub_62 = false;
  } else {
    sub_62 = sub_63;
  };
  sub_61 = sub_62;
  sub_60 = sub_61;
  if (controller_ck_42_1) {
    sub_53 = sub_60;
    v_248 = sub_54;
  } else {
    sub_53 = sub_54;
    v_248 = sub_60;
  };
  if (controller_c_light_1) {
    sub_66 = v_248;
  } else {
    sub_66 = sub_53;
  };
  if (controller_light_switch) {
    v_251 = sub_53;
  } else {
    v_251 = sub_66;
  };
  if (controller_c_light_2) {
    sub_52 = v_251;
  } else {
    sub_52 = sub_66;
  };
  if (controller_c_door_1) {
    v_247 = false;
    sub_73 = sub_25;
  } else {
    v_247 = sub_25;
    sub_73 = false;
  };
  if (controller_ck_24_1) {
    sub_72 = v_247;
  } else {
    sub_72 = sub_73;
  };
  sub_71 = sub_72;
  if (controller_c_window) {
    sub_70 = false;
  } else {
    sub_70 = sub_71;
  };
  sub_69 = sub_70;
  sub_68 = sub_69;
  if (controller_c_door_1) {
    v_246 = false;
    sub_79 = sub_17;
  } else {
    v_246 = sub_17;
    sub_79 = false;
  };
  if (controller_ck_24_1) {
    sub_78 = v_246;
  } else {
    sub_78 = sub_79;
  };
  sub_77 = sub_78;
  if (controller_c_window) {
    sub_76 = false;
  } else {
    sub_76 = sub_77;
  };
  sub_75 = sub_76;
  sub_74 = sub_75;
  if (controller_ck_42_1) {
    sub_67 = sub_74;
    v_245 = sub_68;
  } else {
    sub_67 = sub_68;
    v_245 = sub_74;
  };
  if (controller_c_light_1) {
    sub_80 = v_245;
  } else {
    sub_80 = sub_67;
  };
  if (controller_light_switch) {
    v_252 = sub_67;
  } else {
    v_252 = sub_80;
  };
  if (controller_c_light_2) {
    v_253 = v_252;
  } else {
    v_253 = sub_80;
  };
  if (controller_ck_46_1) {
    sub_51 = v_253;
  } else {
    sub_51 = sub_52;
  };
  sub_50 = sub_51;
  if (controller_v_335) {
    sub_89 = false;
  } else {
    sub_89 = sub_43;
  };
  if (controller_c_air_2) {
    v_239 = sub_89;
  } else {
    v_239 = false;
  };
  if (controller_c_air_1) {
    sub_88 = sub_89;
  } else {
    sub_88 = false;
  };
  if (controller_v_335) {
    sub_91 = sub_43;
  } else {
    sub_91 = false;
  };
  sub_90 = sub_91;
  if (controller_c_air_1) {
    v_240 = v_239;
  } else {
    v_240 = sub_90;
  };
  if (controller_v_334) {
    sub_87 = v_240;
  } else {
    sub_87 = sub_88;
  };
  sub_86 = sub_87;
  if (controller_c_pc) {
    v_241 = false;
  } else {
    v_241 = sub_86;
  };
  if (controller_c_closet) {
    sub_85 = false;
  } else {
    sub_85 = v_241;
  };
  if (controller_light_failed_recovered) {
    sub_99 = sub_37;
    sub_100 = sub_18;
  } else {
    sub_99 = sub_18;
    sub_100 = sub_37;
  };
  if (controller_ck_44_1) {
    sub_98 = sub_100;
  } else {
    sub_98 = sub_99;
  };
  sub_97 = sub_98;
  if (controller_v_335) {
    sub_96 = false;
  } else {
    sub_96 = sub_97;
  };
  if (controller_c_air_2) {
    v_236 = sub_96;
  } else {
    v_236 = false;
  };
  if (controller_c_air_1) {
    sub_95 = sub_96;
  } else {
    sub_95 = false;
  };
  if (controller_v_335) {
    sub_101 = sub_97;
  } else {
    sub_101 = false;
  };
  if (controller_c_air_1) {
    v_237 = v_236;
  } else {
    v_237 = sub_101;
  };
  if (controller_v_334) {
    sub_94 = v_237;
  } else {
    sub_94 = sub_95;
  };
  sub_93 = sub_94;
  if (controller_c_pc) {
    v_238 = false;
  } else {
    v_238 = sub_93;
  };
  if (controller_c_closet) {
    sub_92 = false;
  } else {
    sub_92 = v_238;
  };
  if (controller_ck_42_1) {
    sub_84 = sub_92;
    v_235 = sub_85;
  } else {
    sub_84 = sub_85;
    v_235 = sub_92;
  };
  if (controller_c_light_1) {
    sub_102 = v_235;
  } else {
    sub_102 = sub_84;
  };
  if (controller_light_switch) {
    v_242 = sub_84;
  } else {
    v_242 = sub_102;
  };
  if (controller_c_light_2) {
    sub_83 = v_242;
  } else {
    sub_83 = sub_102;
  };
  if (controller_v_335) {
    sub_108 = false;
  } else {
    sub_108 = sub_24;
  };
  if (controller_c_air_2) {
    v_232 = sub_108;
  } else {
    v_232 = false;
  };
  if (controller_c_air_1) {
    sub_107 = sub_108;
  } else {
    sub_107 = false;
  };
  if (controller_v_335) {
    sub_110 = sub_24;
  } else {
    sub_110 = false;
  };
  sub_109 = sub_110;
  if (controller_c_air_1) {
    v_233 = v_232;
  } else {
    v_233 = sub_109;
  };
  if (controller_v_334) {
    sub_106 = v_233;
  } else {
    sub_106 = sub_107;
  };
  sub_105 = sub_106;
  if (controller_c_pc) {
    v_234 = false;
  } else {
    v_234 = sub_105;
  };
  if (controller_c_closet) {
    sub_104 = false;
  } else {
    sub_104 = v_234;
  };
  if (controller_v_335) {
    sub_115 = false;
  } else {
    sub_115 = sub_16;
  };
  if (controller_c_air_2) {
    v_229 = sub_115;
  } else {
    v_229 = false;
  };
  if (controller_c_air_1) {
    sub_114 = sub_115;
  } else {
    sub_114 = false;
  };
  if (controller_v_335) {
    sub_116 = sub_16;
  } else {
    sub_116 = false;
  };
  if (controller_c_air_1) {
    v_230 = v_229;
  } else {
    v_230 = sub_116;
  };
  if (controller_v_334) {
    sub_113 = v_230;
  } else {
    sub_113 = sub_114;
  };
  sub_112 = sub_113;
  if (controller_c_pc) {
    v_231 = false;
  } else {
    v_231 = sub_112;
  };
  if (controller_c_closet) {
    sub_111 = false;
  } else {
    sub_111 = v_231;
  };
  if (controller_ck_42_1) {
    sub_103 = sub_111;
    v_228 = sub_104;
  } else {
    sub_103 = sub_104;
    v_228 = sub_111;
  };
  if (controller_c_light_1) {
    sub_117 = v_228;
  } else {
    sub_117 = sub_103;
  };
  if (controller_light_switch) {
    v_243 = sub_103;
  } else {
    v_243 = sub_117;
  };
  if (controller_c_light_2) {
    v_244 = v_243;
  } else {
    v_244 = sub_117;
  };
  if (controller_ck_46_1) {
    sub_82 = v_244;
  } else {
    sub_82 = sub_83;
  };
  sub_81 = sub_82;
  if (controller_air_failed_recovered) {
    v_254 = sub_81;
    sub_49 = sub_50;
  } else {
    v_254 = sub_50;
    sub_49 = sub_81;
  };
  if (controller_ck_39_1) {
    sub_48 = v_254;
  } else {
    sub_48 = sub_49;
  };
  if (controller_cleaner) {
    v_263 = sub_48;
    sub_6 = sub_7;
  } else {
    v_263 = sub_7;
    sub_6 = sub_48;
  };
  if (controller_ck_30_1) {
    sub_5 = v_263;
  } else {
    sub_5 = sub_6;
  };
  if (controller_c_window) {
    v_222 = sub_87;
  } else {
    v_222 = sub_41;
  };
  if (controller_c_pc) {
    sub_127 = v_222;
  } else {
    sub_127 = sub_41;
  };
  sub_126 = sub_127;
  if (controller_ck_44_1) {
    sub_133 = sub_26;
  } else {
    sub_133 = sub_27;
  };
  sub_132 = sub_133;
  if (controller_v_335) {
    sub_131 = sub_132;
    v_217 = sub_132;
  } else {
    sub_131 = sub_43;
    v_217 = false;
  };
  if (controller_c_air_2) {
    sub_134 = v_217;
  } else {
    sub_134 = sub_132;
  };
  if (controller_c_air_1) {
    sub_130 = sub_131;
  } else {
    sub_130 = sub_134;
  };
  if (controller_v_335) {
    sub_135 = false;
  } else {
    sub_135 = sub_132;
  };
  if (controller_c_air_2) {
    v_218 = sub_131;
  } else {
    v_218 = sub_135;
  };
  if (controller_c_air_1) {
    v_219 = v_218;
  } else {
    v_219 = sub_90;
  };
  if (controller_v_334) {
    v_220 = v_219;
  } else {
    v_220 = sub_130;
  };
  sub_137 = sub_97;
  sub_136 = sub_137;
  if (controller_c_window) {
    v_221 = v_220;
  } else {
    v_221 = sub_136;
  };
  if (controller_c_pc) {
    sub_129 = v_221;
  } else {
    sub_129 = sub_136;
  };
  sub_128 = sub_129;
  if (controller_ck_42_1) {
    sub_125 = sub_128;
    v_216 = sub_126;
  } else {
    sub_125 = sub_126;
    v_216 = sub_128;
  };
  if (controller_c_light_1) {
    sub_138 = v_216;
  } else {
    sub_138 = sub_125;
  };
  if (controller_light_switch) {
    v_223 = sub_125;
  } else {
    v_223 = sub_138;
  };
  if (controller_c_light_2) {
    sub_124 = v_223;
  } else {
    sub_124 = sub_138;
  };
  if (controller_c_window) {
    v_215 = sub_106;
  } else {
    v_215 = sub_22;
  };
  if (controller_c_pc) {
    sub_141 = v_215;
  } else {
    sub_141 = sub_22;
  };
  sub_140 = sub_141;
  if (controller_v_335) {
    sub_145 = sub_132;
  } else {
    sub_145 = sub_24;
  };
  if (controller_c_air_2) {
    v_211 = sub_145;
  } else {
    v_211 = sub_135;
  };
  if (controller_c_air_1) {
    v_212 = v_211;
    sub_144 = sub_145;
  } else {
    v_212 = sub_109;
    sub_144 = sub_134;
  };
  if (controller_v_334) {
    v_213 = v_212;
  } else {
    v_213 = sub_144;
  };
  if (controller_c_window) {
    v_214 = v_213;
  } else {
    v_214 = sub_14;
  };
  if (controller_c_pc) {
    sub_143 = v_214;
  } else {
    sub_143 = sub_14;
  };
  sub_142 = sub_143;
  if (controller_ck_42_1) {
    sub_139 = sub_142;
    v_210 = sub_140;
  } else {
    sub_139 = sub_140;
    v_210 = sub_142;
  };
  if (controller_c_light_1) {
    sub_146 = v_210;
  } else {
    sub_146 = sub_139;
  };
  if (controller_light_switch) {
    v_224 = sub_139;
  } else {
    v_224 = sub_146;
  };
  if (controller_c_light_2) {
    v_225 = v_224;
  } else {
    v_225 = sub_146;
  };
  if (controller_ck_46_1) {
    sub_123 = v_225;
  } else {
    sub_123 = sub_124;
  };
  sub_122 = sub_123;
  if (controller_air_failed_recovered) {
    v_226 = sub_122;
    sub_121 = sub_50;
  } else {
    v_226 = sub_50;
    sub_121 = sub_122;
  };
  if (controller_ck_39_1) {
    sub_120 = v_226;
  } else {
    sub_120 = sub_121;
  };
  if (controller_cleaner) {
    v_227 = sub_48;
    sub_119 = sub_120;
  } else {
    v_227 = sub_120;
    sub_119 = sub_48;
  };
  if (controller_ck_30_1) {
    sub_118 = v_227;
  } else {
    sub_118 = sub_119;
  };
  if (controller_worker) {
    v_264 = sub_118;
    sub_4 = sub_5;
  } else {
    v_264 = sub_5;
    sub_4 = sub_118;
  };
  if (controller_ck_28_1) {
    sub_3 = v_264;
  } else {
    sub_3 = sub_4;
  };
  sub_157 = sub_60;
  sub_156 = sub_157;
  sub_155 = sub_156;
  sub_159 = sub_74;
  sub_158 = sub_159;
  if (controller_ck_46_1) {
    sub_154 = sub_158;
  } else {
    sub_154 = sub_155;
  };
  sub_153 = sub_154;
  if (controller_air_failed_recovered) {
    v_207 = sub_81;
    sub_152 = sub_153;
  } else {
    v_207 = sub_153;
    sub_152 = sub_81;
  };
  if (controller_ck_39_1) {
    sub_151 = v_207;
  } else {
    sub_151 = sub_152;
  };
  if (controller_cleaner) {
    v_208 = sub_151;
    sub_150 = sub_7;
  } else {
    v_208 = sub_7;
    sub_150 = sub_151;
  };
  if (controller_ck_30_1) {
    sub_149 = v_208;
  } else {
    sub_149 = sub_150;
  };
  sub_169 = sub_86;
  sub_168 = sub_169;
  sub_171 = sub_93;
  sub_170 = sub_171;
  if (controller_ck_42_1) {
    sub_167 = sub_170;
    v_201 = sub_168;
  } else {
    sub_167 = sub_168;
    v_201 = sub_170;
  };
  if (controller_c_light_1) {
    sub_172 = v_201;
  } else {
    sub_172 = sub_167;
  };
  if (controller_light_switch) {
    v_202 = sub_167;
  } else {
    v_202 = sub_172;
  };
  if (controller_c_light_2) {
    sub_166 = v_202;
  } else {
    sub_166 = sub_172;
  };
  sub_175 = sub_105;
  sub_174 = sub_175;
  sub_177 = sub_112;
  sub_176 = sub_177;
  if (controller_ck_42_1) {
    sub_173 = sub_176;
    v_200 = sub_174;
  } else {
    sub_173 = sub_174;
    v_200 = sub_176;
  };
  if (controller_c_light_1) {
    sub_178 = v_200;
  } else {
    sub_178 = sub_173;
  };
  if (controller_light_switch) {
    v_203 = sub_173;
  } else {
    v_203 = sub_178;
  };
  if (controller_c_light_2) {
    v_204 = v_203;
  } else {
    v_204 = sub_178;
  };
  if (controller_ck_46_1) {
    sub_165 = v_204;
  } else {
    sub_165 = sub_166;
  };
  sub_164 = sub_165;
  if (controller_air_failed_recovered) {
    v_205 = sub_164;
    sub_163 = sub_153;
  } else {
    v_205 = sub_153;
    sub_163 = sub_164;
  };
  if (controller_ck_39_1) {
    sub_162 = v_205;
  } else {
    sub_162 = sub_163;
  };
  if (controller_cleaner) {
    v_206 = sub_151;
    sub_161 = sub_162;
  } else {
    v_206 = sub_162;
    sub_161 = sub_151;
  };
  if (controller_ck_30_1) {
    sub_160 = v_206;
  } else {
    sub_160 = sub_161;
  };
  if (controller_worker) {
    v_209 = sub_160;
    sub_148 = sub_149;
  } else {
    v_209 = sub_149;
    sub_148 = sub_160;
  };
  if (controller_ck_28_1) {
    sub_147 = v_209;
  } else {
    sub_147 = sub_148;
  };
  if (controller_change_shift) {
    v_265 = sub_147;
    sub_2 = sub_3;
  } else {
    v_265 = sub_3;
    sub_2 = sub_147;
  };
  if (controller_ck_1) {
    sub_1 = v_265;
  } else {
    sub_1 = sub_2;
  };
  if (controller_blind_switch) {
    sub_185 = sub_29;
  } else {
    sub_185 = sub_9;
  };
  sub_184 = sub_185;
  if (controller_blind_switch) {
    sub_188 = sub_52;
  } else {
    sub_188 = sub_51;
  };
  if (controller_v_335) {
    sub_196 = false;
  } else {
    sub_196 = sub_35;
  };
  if (controller_c_air_2) {
    v_190 = sub_196;
  } else {
    v_190 = false;
  };
  if (controller_c_air_1) {
    sub_195 = sub_196;
  } else {
    sub_195 = false;
  };
  if (controller_v_335) {
    sub_197 = sub_35;
  } else {
    sub_197 = false;
  };
  if (controller_c_air_1) {
    v_191 = v_190;
  } else {
    v_191 = sub_197;
  };
  if (controller_v_334) {
    sub_194 = v_191;
  } else {
    sub_194 = sub_195;
  };
  sub_193 = sub_194;
  if (controller_c_pc) {
    v_192 = false;
  } else {
    v_192 = sub_193;
  };
  if (controller_c_closet) {
    sub_192 = false;
  } else {
    sub_192 = v_192;
  };
  if (controller_ck_42_1) {
    sub_191 = sub_192;
    v_189 = sub_85;
  } else {
    sub_191 = sub_85;
    v_189 = sub_192;
  };
  if (controller_c_light_1) {
    sub_198 = v_189;
  } else {
    sub_198 = sub_191;
  };
  if (controller_light_switch) {
    v_193 = sub_191;
  } else {
    v_193 = sub_198;
  };
  if (controller_c_light_2) {
    sub_190 = v_193;
  } else {
    sub_190 = sub_198;
  };
  if (controller_ck_44_1) {
    sub_206 = sub_99;
  } else {
    sub_206 = sub_100;
  };
  sub_205 = sub_206;
  if (controller_v_335) {
    sub_204 = false;
  } else {
    sub_204 = sub_205;
  };
  if (controller_c_air_2) {
    v_186 = sub_204;
  } else {
    v_186 = false;
  };
  if (controller_c_air_1) {
    sub_203 = sub_204;
  } else {
    sub_203 = false;
  };
  if (controller_v_335) {
    sub_207 = sub_205;
  } else {
    sub_207 = false;
  };
  if (controller_c_air_1) {
    v_187 = v_186;
  } else {
    v_187 = sub_207;
  };
  if (controller_v_334) {
    sub_202 = v_187;
  } else {
    sub_202 = sub_203;
  };
  sub_201 = sub_202;
  if (controller_c_pc) {
    v_188 = false;
  } else {
    v_188 = sub_201;
  };
  if (controller_c_closet) {
    sub_200 = false;
  } else {
    sub_200 = v_188;
  };
  if (controller_ck_42_1) {
    sub_199 = sub_200;
    v_185 = sub_104;
  } else {
    sub_199 = sub_104;
    v_185 = sub_200;
  };
  if (controller_c_light_1) {
    sub_208 = v_185;
  } else {
    sub_208 = sub_199;
  };
  if (controller_light_switch) {
    v_194 = sub_199;
  } else {
    v_194 = sub_208;
  };
  if (controller_c_light_2) {
    v_195 = v_194;
  } else {
    v_195 = sub_208;
  };
  if (controller_ck_46_1) {
    v_196 = v_195;
  } else {
    v_196 = sub_190;
  };
  if (controller_blind_switch) {
    sub_189 = sub_190;
  } else {
    sub_189 = v_196;
  };
  if (controller_air_failed_recovered) {
    v_197 = sub_189;
    sub_187 = sub_188;
  } else {
    v_197 = sub_188;
    sub_187 = sub_189;
  };
  if (controller_ck_39_1) {
    sub_186 = v_197;
  } else {
    sub_186 = sub_187;
  };
  if (controller_cleaner) {
    v_198 = sub_186;
    sub_183 = sub_184;
  } else {
    v_198 = sub_184;
    sub_183 = sub_186;
  };
  if (controller_ck_30_1) {
    sub_182 = v_198;
  } else {
    sub_182 = sub_183;
  };
  if (controller_ck_44_1) {
    sub_221 = sub_45;
  } else {
    sub_221 = sub_46;
  };
  sub_220 = sub_221;
  if (controller_v_335) {
    sub_219 = sub_220;
    v_174 = sub_220;
  } else {
    sub_219 = sub_43;
    v_174 = false;
  };
  if (controller_c_air_2) {
    sub_222 = v_174;
  } else {
    sub_222 = sub_220;
  };
  if (controller_c_air_1) {
    sub_218 = sub_219;
  } else {
    sub_218 = sub_222;
  };
  if (controller_v_335) {
    sub_223 = false;
  } else {
    sub_223 = sub_220;
  };
  if (controller_c_air_2) {
    v_175 = sub_219;
  } else {
    v_175 = sub_223;
  };
  if (controller_c_air_1) {
    v_176 = v_175;
  } else {
    v_176 = sub_90;
  };
  if (controller_v_334) {
    v_177 = v_176;
  } else {
    v_177 = sub_218;
  };
  if (controller_c_window) {
    v_178 = v_177;
  } else {
    v_178 = sub_33;
  };
  if (controller_c_pc) {
    sub_217 = v_178;
  } else {
    sub_217 = sub_33;
  };
  sub_216 = sub_217;
  if (controller_ck_42_1) {
    sub_215 = sub_216;
    v_173 = sub_126;
  } else {
    sub_215 = sub_126;
    v_173 = sub_216;
  };
  if (controller_c_light_1) {
    sub_224 = v_173;
  } else {
    sub_224 = sub_215;
  };
  if (controller_light_switch) {
    v_179 = sub_215;
  } else {
    v_179 = sub_224;
  };
  if (controller_c_light_2) {
    sub_214 = v_179;
  } else {
    sub_214 = sub_224;
  };
  if (controller_v_335) {
    sub_229 = sub_220;
  } else {
    sub_229 = sub_24;
  };
  if (controller_c_air_2) {
    v_169 = sub_229;
  } else {
    v_169 = sub_223;
  };
  if (controller_c_air_1) {
    v_170 = v_169;
    sub_228 = sub_229;
  } else {
    v_170 = sub_109;
    sub_228 = sub_222;
  };
  if (controller_v_334) {
    v_171 = v_170;
  } else {
    v_171 = sub_228;
  };
  sub_231 = sub_205;
  sub_230 = sub_231;
  if (controller_c_window) {
    v_172 = v_171;
  } else {
    v_172 = sub_230;
  };
  if (controller_c_pc) {
    sub_227 = v_172;
  } else {
    sub_227 = sub_230;
  };
  sub_226 = sub_227;
  if (controller_ck_42_1) {
    sub_225 = sub_226;
    v_168 = sub_140;
  } else {
    sub_225 = sub_140;
    v_168 = sub_226;
  };
  if (controller_c_light_1) {
    sub_232 = v_168;
  } else {
    sub_232 = sub_225;
  };
  if (controller_light_switch) {
    v_180 = sub_225;
  } else {
    v_180 = sub_232;
  };
  if (controller_c_light_2) {
    v_181 = v_180;
  } else {
    v_181 = sub_232;
  };
  if (controller_ck_46_1) {
    v_182 = v_181;
  } else {
    v_182 = sub_214;
  };
  if (controller_blind_switch) {
    sub_213 = sub_214;
  } else {
    sub_213 = v_182;
  };
  if (controller_air_failed_recovered) {
    v_183 = sub_213;
    sub_212 = sub_188;
  } else {
    v_183 = sub_188;
    sub_212 = sub_213;
  };
  if (controller_ck_39_1) {
    sub_211 = v_183;
  } else {
    sub_211 = sub_212;
  };
  if (controller_cleaner) {
    v_184 = sub_186;
    sub_210 = sub_211;
  } else {
    v_184 = sub_211;
    sub_210 = sub_186;
  };
  if (controller_ck_30_1) {
    sub_209 = v_184;
  } else {
    sub_209 = sub_210;
  };
  if (controller_worker) {
    v_199 = sub_209;
    sub_181 = sub_182;
  } else {
    v_199 = sub_182;
    sub_181 = sub_209;
  };
  if (controller_ck_28_1) {
    sub_180 = v_199;
  } else {
    sub_180 = sub_181;
  };
  if (controller_blind_switch) {
    sub_239 = sub_155;
  } else {
    sub_239 = sub_154;
  };
  if (controller_air_failed_recovered) {
    v_165 = sub_189;
    sub_238 = sub_239;
  } else {
    v_165 = sub_239;
    sub_238 = sub_189;
  };
  if (controller_ck_39_1) {
    sub_237 = v_165;
  } else {
    sub_237 = sub_238;
  };
  if (controller_cleaner) {
    v_166 = sub_237;
    sub_236 = sub_184;
  } else {
    v_166 = sub_184;
    sub_236 = sub_237;
  };
  if (controller_ck_30_1) {
    sub_235 = v_166;
  } else {
    sub_235 = sub_236;
  };
  sub_248 = sub_193;
  sub_247 = sub_248;
  if (controller_ck_42_1) {
    sub_246 = sub_247;
    v_158 = sub_168;
  } else {
    sub_246 = sub_168;
    v_158 = sub_247;
  };
  if (controller_c_light_1) {
    sub_249 = v_158;
  } else {
    sub_249 = sub_246;
  };
  if (controller_light_switch) {
    v_159 = sub_246;
  } else {
    v_159 = sub_249;
  };
  if (controller_c_light_2) {
    sub_245 = v_159;
  } else {
    sub_245 = sub_249;
  };
  sub_252 = sub_201;
  sub_251 = sub_252;
  if (controller_ck_42_1) {
    sub_250 = sub_251;
    v = sub_174;
  } else {
    sub_250 = sub_174;
    v = sub_251;
  };
  if (controller_c_light_1) {
    sub_253 = v;
  } else {
    sub_253 = sub_250;
  };
  if (controller_light_switch) {
    v_160 = sub_250;
  } else {
    v_160 = sub_253;
  };
  if (controller_c_light_2) {
    v_161 = v_160;
  } else {
    v_161 = sub_253;
  };
  if (controller_ck_46_1) {
    v_162 = v_161;
  } else {
    v_162 = sub_245;
  };
  if (controller_blind_switch) {
    sub_244 = sub_245;
  } else {
    sub_244 = v_162;
  };
  if (controller_air_failed_recovered) {
    v_163 = sub_244;
    sub_243 = sub_239;
  } else {
    v_163 = sub_239;
    sub_243 = sub_244;
  };
  if (controller_ck_39_1) {
    sub_242 = v_163;
  } else {
    sub_242 = sub_243;
  };
  if (controller_cleaner) {
    v_164 = sub_237;
    sub_241 = sub_242;
  } else {
    v_164 = sub_242;
    sub_241 = sub_237;
  };
  if (controller_ck_30_1) {
    sub_240 = v_164;
  } else {
    sub_240 = sub_241;
  };
  if (controller_worker) {
    v_167 = sub_240;
    sub_234 = sub_235;
  } else {
    v_167 = sub_235;
    sub_234 = sub_240;
  };
  if (controller_ck_28_1) {
    sub_233 = v_167;
  } else {
    sub_233 = sub_234;
  };
  if (controller_change_shift) {
    v_266 = sub_233;
    sub_179 = sub_180;
  } else {
    v_266 = sub_180;
    sub_179 = sub_233;
  };
  if (controller_ck_1) {
    v_267 = v_266;
  } else {
    v_267 = sub_179;
  };
  if (p_controller_c_blind_1) {
    sub_0 = v_267;
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
  int controller_pnr_15, int controller_ck_24_1, int controller_pnr_14,
  int controller_ck_26_1, int controller_pnr_13, int controller_ck_28_1,
  int controller_pnr_12, int controller_ck_30_1, int controller_pnr_11,
  int controller_ck_32_1, int controller_pnr_10, int controller_ck_34_1,
  int controller_pnr_9, int controller_v_335, int controller_v_334,
  int controller_pnr_8, int controller_ck_39_1, int controller_pnr_7,
  int controller_ck_42_1, int controller_pnr_6, int controller_ck_44_1,
  int controller_pnr_5, int controller_ck_46_1, int controller_pnr_4,
  int controller_ck_48_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door_2, int p_controller_c_door_1,
  int controller_c_light_1, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door_2, int controller_c_door_1,
  Controller_controller__controller_controller_controller_c_light_2_out* _out) {
  
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
  sub_18 = false;
  sub_17 = sub_18;
  sub_20 = true;
  sub_19 = sub_20;
  if (controller_light_failed_recovered) {
    sub_16 = sub_17;
    sub_21 = sub_19;
  } else {
    sub_16 = sub_19;
    sub_21 = sub_17;
  };
  if (controller_ck_44_1) {
    sub_15 = sub_21;
  } else {
    sub_15 = sub_16;
  };
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  if (controller_c_window) {
    v_371 = sub_12;
  } else {
    v_371 = false;
  };
  if (controller_c_pc) {
    sub_11 = false;
  } else {
    sub_11 = v_371;
  };
  sub_10 = sub_11;
  sub_27 = sub_17;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  if (controller_c_window) {
    v_370 = sub_24;
  } else {
    v_370 = false;
  };
  if (controller_c_pc) {
    sub_23 = false;
  } else {
    sub_23 = v_370;
  };
  sub_22 = sub_23;
  if (controller_ck_42_1) {
    v_372 = sub_22;
  } else {
    v_372 = sub_10;
  };
  if (controller_light_failed_recovered) {
    sub_35 = sub_17;
    sub_36 = false;
  } else {
    sub_35 = false;
    sub_36 = sub_17;
  };
  if (controller_ck_44_1) {
    sub_34 = sub_36;
  } else {
    sub_34 = sub_35;
  };
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  if (controller_c_window) {
    v_369 = sub_31;
  } else {
    v_369 = false;
  };
  if (controller_c_pc) {
    sub_30 = false;
  } else {
    sub_30 = v_369;
  };
  sub_29 = sub_30;
  if (controller_ck_42_1) {
    v_374 = sub_22;
    sub_28 = sub_29;
  } else {
    v_374 = sub_29;
    sub_28 = sub_22;
  };
  if (controller_c_light_1) {
    v_375 = v_374;
    v_373 = v_372;
  } else {
    v_375 = sub_28;
    v_373 = sub_28;
  };
  if (controller_light_switch) {
    sub_9 = v_373;
  } else {
    sub_9 = v_375;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (controller_c_door_1) {
    v_363 = false;
    sub_46 = sub_27;
  } else {
    v_363 = sub_27;
    sub_46 = false;
  };
  if (controller_ck_24_1) {
    sub_45 = v_363;
  } else {
    sub_45 = sub_46;
  };
  sub_44 = sub_45;
  if (controller_c_window) {
    sub_43 = false;
  } else {
    sub_43 = sub_44;
  };
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (controller_c_door_1) {
    v_362 = false;
    sub_51 = sub_15;
  } else {
    v_362 = sub_15;
    sub_51 = false;
  };
  if (controller_ck_24_1) {
    sub_50 = v_362;
  } else {
    sub_50 = sub_51;
  };
  sub_49 = sub_50;
  if (controller_c_window) {
    sub_48 = false;
  } else {
    sub_48 = sub_49;
  };
  sub_47 = sub_48;
  if (controller_ck_42_1) {
    v_364 = sub_47;
  } else {
    v_364 = sub_41;
  };
  if (controller_c_door_1) {
    v_361 = false;
    sub_58 = sub_34;
  } else {
    v_361 = sub_34;
    sub_58 = false;
  };
  if (controller_ck_24_1) {
    sub_57 = v_361;
  } else {
    sub_57 = sub_58;
  };
  sub_56 = sub_57;
  if (controller_c_window) {
    sub_55 = false;
  } else {
    sub_55 = sub_56;
  };
  sub_54 = sub_55;
  sub_53 = sub_54;
  if (controller_ck_42_1) {
    v_366 = sub_53;
    sub_52 = sub_41;
  } else {
    v_366 = sub_41;
    sub_52 = sub_53;
  };
  if (controller_c_light_1) {
    v_367 = v_366;
    v_365 = v_364;
  } else {
    v_367 = sub_52;
    v_365 = sub_52;
  };
  if (controller_light_switch) {
    sub_40 = v_365;
  } else {
    sub_40 = v_367;
  };
  sub_39 = sub_40;
  if (controller_v_335) {
    sub_65 = false;
  } else {
    sub_65 = sub_26;
  };
  if (controller_c_air_2) {
    v_352 = sub_65;
  } else {
    v_352 = false;
  };
  if (controller_c_air_1) {
    sub_64 = sub_65;
  } else {
    sub_64 = false;
  };
  if (controller_v_335) {
    sub_66 = sub_26;
  } else {
    sub_66 = false;
  };
  if (controller_c_air_1) {
    v_353 = v_352;
  } else {
    v_353 = sub_66;
  };
  if (controller_v_334) {
    sub_63 = v_353;
  } else {
    sub_63 = sub_64;
  };
  sub_62 = sub_63;
  if (controller_c_pc) {
    v_354 = false;
  } else {
    v_354 = sub_62;
  };
  if (controller_c_closet) {
    sub_61 = false;
  } else {
    sub_61 = v_354;
  };
  if (controller_v_335) {
    sub_70 = false;
  } else {
    sub_70 = sub_14;
  };
  if (controller_c_air_2) {
    v_350 = sub_70;
  } else {
    v_350 = false;
  };
  if (controller_c_air_1) {
    sub_69 = sub_70;
  } else {
    sub_69 = false;
  };
  if (controller_v_335) {
    sub_71 = sub_14;
  } else {
    sub_71 = false;
  };
  if (controller_c_air_1) {
    v_351 = v_350;
  } else {
    v_351 = sub_71;
  };
  if (controller_v_334) {
    sub_68 = v_351;
  } else {
    sub_68 = sub_69;
  };
  sub_67 = sub_68;
  if (controller_c_pc) {
    v_355 = false;
  } else {
    v_355 = sub_67;
  };
  if (controller_c_closet) {
    v_356 = false;
  } else {
    v_356 = v_355;
  };
  if (controller_ck_42_1) {
    v_357 = v_356;
  } else {
    v_357 = sub_61;
  };
  if (controller_v_335) {
    sub_77 = false;
  } else {
    sub_77 = sub_33;
  };
  if (controller_c_air_2) {
    v_347 = sub_77;
  } else {
    v_347 = false;
  };
  if (controller_c_air_1) {
    sub_76 = sub_77;
  } else {
    sub_76 = false;
  };
  if (controller_v_335) {
    sub_79 = sub_33;
  } else {
    sub_79 = false;
  };
  sub_78 = sub_79;
  if (controller_c_air_1) {
    v_348 = v_347;
  } else {
    v_348 = sub_78;
  };
  if (controller_v_334) {
    sub_75 = v_348;
  } else {
    sub_75 = sub_76;
  };
  sub_74 = sub_75;
  if (controller_c_pc) {
    v_349 = false;
  } else {
    v_349 = sub_74;
  };
  if (controller_c_closet) {
    sub_73 = false;
  } else {
    sub_73 = v_349;
  };
  if (controller_ck_42_1) {
    v_359 = sub_73;
    sub_72 = sub_61;
  } else {
    v_359 = sub_61;
    sub_72 = sub_73;
  };
  if (controller_c_light_1) {
    v_360 = v_359;
    v_358 = v_357;
  } else {
    v_360 = sub_72;
    v_358 = sub_72;
  };
  if (controller_light_switch) {
    sub_60 = v_358;
  } else {
    sub_60 = v_360;
  };
  sub_59 = sub_60;
  if (controller_air_failed_recovered) {
    v_368 = sub_59;
    sub_38 = sub_39;
  } else {
    v_368 = sub_39;
    sub_38 = sub_59;
  };
  if (controller_ck_39_1) {
    sub_37 = v_368;
  } else {
    sub_37 = sub_38;
  };
  if (controller_cleaner) {
    v_376 = sub_37;
    sub_6 = sub_7;
  } else {
    v_376 = sub_7;
    sub_6 = sub_37;
  };
  if (controller_ck_30_1) {
    sub_5 = v_376;
  } else {
    sub_5 = sub_6;
  };
  if (controller_ck_44_1) {
    sub_91 = sub_35;
  } else {
    sub_91 = sub_36;
  };
  sub_90 = sub_91;
  if (controller_v_335) {
    sub_89 = sub_90;
    v_336 = sub_90;
  } else {
    sub_89 = sub_33;
    v_336 = false;
  };
  if (controller_c_air_2) {
    sub_92 = v_336;
  } else {
    sub_92 = sub_90;
  };
  if (controller_c_air_1) {
    sub_88 = sub_89;
  } else {
    sub_88 = sub_92;
  };
  if (controller_v_335) {
    sub_93 = false;
  } else {
    sub_93 = sub_90;
  };
  if (controller_c_air_2) {
    v_337 = sub_89;
  } else {
    v_337 = sub_93;
  };
  if (controller_c_air_1) {
    v_338 = v_337;
  } else {
    v_338 = sub_78;
  };
  if (controller_v_334) {
    v_339 = v_338;
  } else {
    v_339 = sub_88;
  };
  if (controller_c_window) {
    v_340 = v_339;
  } else {
    v_340 = sub_24;
  };
  if (controller_c_pc) {
    sub_87 = v_340;
  } else {
    sub_87 = sub_24;
  };
  sub_86 = sub_87;
  if (controller_light_failed_recovered) {
    sub_99 = false;
    sub_100 = sub_19;
  } else {
    sub_99 = sub_19;
    sub_100 = false;
  };
  if (controller_ck_44_1) {
    sub_98 = sub_100;
  } else {
    sub_98 = sub_99;
  };
  sub_97 = sub_98;
  if (controller_v_335) {
    sub_96 = sub_97;
    v_331 = sub_97;
  } else {
    sub_96 = sub_33;
    v_331 = false;
  };
  if (controller_c_air_2) {
    sub_101 = v_331;
  } else {
    sub_101 = sub_97;
  };
  if (controller_c_air_1) {
    sub_95 = sub_96;
  } else {
    sub_95 = sub_101;
  };
  if (controller_v_335) {
    sub_102 = false;
  } else {
    sub_102 = sub_97;
  };
  if (controller_c_air_2) {
    v_332 = sub_96;
  } else {
    v_332 = sub_102;
  };
  if (controller_c_air_1) {
    v_333 = v_332;
  } else {
    v_333 = sub_78;
  };
  if (controller_v_334) {
    v_334 = v_333;
  } else {
    v_334 = sub_95;
  };
  if (controller_c_window) {
    v_335 = v_334;
  } else {
    v_335 = sub_12;
  };
  if (controller_c_pc) {
    sub_94 = v_335;
  } else {
    sub_94 = sub_12;
  };
  if (controller_ck_42_1) {
    v_341 = sub_94;
  } else {
    v_341 = sub_86;
  };
  if (controller_c_window) {
    v_330 = sub_75;
  } else {
    v_330 = sub_31;
  };
  if (controller_c_pc) {
    sub_105 = v_330;
  } else {
    sub_105 = sub_31;
  };
  sub_104 = sub_105;
  if (controller_ck_42_1) {
    v_343 = sub_104;
    sub_103 = sub_86;
  } else {
    v_343 = sub_86;
    sub_103 = sub_104;
  };
  if (controller_c_light_1) {
    v_344 = v_343;
    v_342 = v_341;
  } else {
    v_344 = sub_103;
    v_342 = sub_103;
  };
  if (controller_light_switch) {
    sub_85 = v_342;
  } else {
    sub_85 = v_344;
  };
  sub_84 = sub_85;
  if (controller_air_failed_recovered) {
    v_345 = sub_84;
    sub_83 = sub_39;
  } else {
    v_345 = sub_39;
    sub_83 = sub_84;
  };
  if (controller_ck_39_1) {
    sub_82 = v_345;
  } else {
    sub_82 = sub_83;
  };
  if (controller_cleaner) {
    v_346 = sub_37;
    sub_81 = sub_82;
  } else {
    v_346 = sub_82;
    sub_81 = sub_37;
  };
  if (controller_ck_30_1) {
    sub_80 = v_346;
  } else {
    sub_80 = sub_81;
  };
  if (controller_worker) {
    v_377 = sub_80;
    sub_4 = sub_5;
  } else {
    v_377 = sub_5;
    sub_4 = sub_80;
  };
  if (controller_ck_28_1) {
    sub_3 = v_377;
  } else {
    sub_3 = sub_4;
  };
  sub_114 = sub_41;
  sub_113 = sub_114;
  sub_112 = sub_113;
  if (controller_air_failed_recovered) {
    v_327 = sub_59;
    sub_111 = sub_112;
  } else {
    v_327 = sub_112;
    sub_111 = sub_59;
  };
  if (controller_ck_39_1) {
    sub_110 = v_327;
  } else {
    sub_110 = sub_111;
  };
  if (controller_cleaner) {
    v_328 = sub_110;
    sub_109 = sub_7;
  } else {
    v_328 = sub_7;
    sub_109 = sub_110;
  };
  if (controller_ck_30_1) {
    sub_108 = v_328;
  } else {
    sub_108 = sub_109;
  };
  sub_122 = sub_62;
  sub_121 = sub_122;
  sub_123 = sub_67;
  if (controller_ck_42_1) {
    v_321 = sub_123;
  } else {
    v_321 = sub_121;
  };
  sub_126 = sub_74;
  sub_125 = sub_126;
  if (controller_ck_42_1) {
    v_323 = sub_125;
    sub_124 = sub_121;
  } else {
    v_323 = sub_121;
    sub_124 = sub_125;
  };
  if (controller_c_light_1) {
    v_324 = v_323;
    v_322 = v_321;
  } else {
    v_324 = sub_124;
    v_322 = sub_124;
  };
  if (controller_light_switch) {
    sub_120 = v_322;
  } else {
    sub_120 = v_324;
  };
  sub_119 = sub_120;
  if (controller_air_failed_recovered) {
    v_325 = sub_119;
    sub_118 = sub_112;
  } else {
    v_325 = sub_112;
    sub_118 = sub_119;
  };
  if (controller_ck_39_1) {
    sub_117 = v_325;
  } else {
    sub_117 = sub_118;
  };
  if (controller_cleaner) {
    v_326 = sub_110;
    sub_116 = sub_117;
  } else {
    v_326 = sub_117;
    sub_116 = sub_110;
  };
  if (controller_ck_30_1) {
    sub_115 = v_326;
  } else {
    sub_115 = sub_116;
  };
  if (controller_worker) {
    v_329 = sub_115;
    sub_107 = sub_108;
  } else {
    v_329 = sub_108;
    sub_107 = sub_115;
  };
  if (controller_ck_28_1) {
    sub_106 = v_329;
  } else {
    sub_106 = sub_107;
  };
  if (controller_change_shift) {
    v_378 = sub_106;
    sub_2 = sub_3;
  } else {
    v_378 = sub_3;
    sub_2 = sub_106;
  };
  if (controller_ck_1) {
    sub_1 = v_378;
  } else {
    sub_1 = sub_2;
  };
  sub_140 = sub_19;
  sub_139 = sub_140;
  sub_138 = sub_139;
  sub_137 = sub_138;
  if (controller_c_window) {
    v_314 = sub_137;
  } else {
    v_314 = false;
  };
  if (controller_c_pc) {
    sub_136 = false;
  } else {
    sub_136 = v_314;
  };
  sub_135 = sub_136;
  if (controller_ck_44_1) {
    sub_145 = sub_16;
  } else {
    sub_145 = sub_21;
  };
  sub_144 = sub_145;
  sub_143 = sub_144;
  sub_142 = sub_143;
  if (controller_c_window) {
    v_313 = sub_142;
  } else {
    v_313 = false;
  };
  if (controller_c_pc) {
    sub_141 = false;
  } else {
    sub_141 = v_313;
  };
  if (controller_ck_42_1) {
    v_315 = sub_141;
  } else {
    v_315 = sub_135;
  };
  if (controller_ck_44_1) {
    sub_152 = sub_99;
  } else {
    sub_152 = sub_100;
  };
  sub_151 = sub_152;
  sub_150 = sub_151;
  sub_149 = sub_150;
  if (controller_c_window) {
    v_312 = sub_149;
  } else {
    v_312 = false;
  };
  if (controller_c_pc) {
    sub_148 = false;
  } else {
    sub_148 = v_312;
  };
  sub_147 = sub_148;
  if (controller_ck_42_1) {
    v_317 = sub_135;
    sub_146 = sub_147;
  } else {
    v_317 = sub_147;
    sub_146 = sub_135;
  };
  if (controller_c_light_1) {
    v_318 = v_317;
    v_316 = v_315;
  } else {
    v_318 = sub_146;
    v_316 = sub_146;
  };
  if (controller_light_switch) {
    sub_134 = v_316;
  } else {
    sub_134 = v_318;
  };
  sub_133 = sub_134;
  sub_132 = sub_133;
  if (controller_c_door_1) {
    v_306 = false;
    sub_162 = sub_145;
  } else {
    v_306 = sub_145;
    sub_162 = false;
  };
  if (controller_ck_24_1) {
    sub_161 = v_306;
  } else {
    sub_161 = sub_162;
  };
  sub_160 = sub_161;
  if (controller_c_window) {
    sub_159 = false;
  } else {
    sub_159 = sub_160;
  };
  sub_158 = sub_159;
  sub_157 = sub_158;
  if (controller_c_door_1) {
    v_305 = false;
    sub_168 = sub_140;
  } else {
    v_305 = sub_140;
    sub_168 = false;
  };
  if (controller_ck_24_1) {
    sub_167 = v_305;
  } else {
    sub_167 = sub_168;
  };
  sub_166 = sub_167;
  if (controller_c_window) {
    sub_165 = false;
  } else {
    sub_165 = sub_166;
  };
  sub_164 = sub_165;
  sub_163 = sub_164;
  if (controller_ck_42_1) {
    v_307 = sub_163;
  } else {
    v_307 = sub_157;
  };
  if (controller_c_door_1) {
    v_304 = false;
    sub_175 = sub_152;
  } else {
    v_304 = sub_152;
    sub_175 = false;
  };
  if (controller_ck_24_1) {
    sub_174 = v_304;
  } else {
    sub_174 = sub_175;
  };
  sub_173 = sub_174;
  if (controller_c_window) {
    sub_172 = false;
  } else {
    sub_172 = sub_173;
  };
  sub_171 = sub_172;
  sub_170 = sub_171;
  if (controller_ck_42_1) {
    v_309 = sub_170;
    sub_169 = sub_163;
  } else {
    v_309 = sub_163;
    sub_169 = sub_170;
  };
  if (controller_c_light_1) {
    v_310 = v_309;
    v_308 = v_307;
  } else {
    v_310 = sub_169;
    v_308 = sub_169;
  };
  if (controller_light_switch) {
    sub_156 = v_308;
  } else {
    sub_156 = v_310;
  };
  sub_155 = sub_156;
  if (controller_v_335) {
    sub_182 = false;
  } else {
    sub_182 = sub_144;
  };
  if (controller_c_air_2) {
    v_297 = sub_182;
  } else {
    v_297 = false;
  };
  if (controller_c_air_1) {
    sub_181 = sub_182;
  } else {
    sub_181 = false;
  };
  if (controller_v_335) {
    sub_183 = sub_144;
  } else {
    sub_183 = false;
  };
  if (controller_c_air_1) {
    v_298 = v_297;
  } else {
    v_298 = sub_183;
  };
  if (controller_v_334) {
    sub_180 = v_298;
  } else {
    sub_180 = sub_181;
  };
  sub_179 = sub_180;
  if (controller_c_pc) {
    v_299 = false;
  } else {
    v_299 = sub_179;
  };
  if (controller_c_closet) {
    sub_178 = false;
  } else {
    sub_178 = v_299;
  };
  if (controller_v_335) {
    sub_188 = false;
  } else {
    sub_188 = sub_139;
  };
  if (controller_c_air_2) {
    v_294 = sub_188;
  } else {
    v_294 = false;
  };
  if (controller_c_air_1) {
    sub_187 = sub_188;
  } else {
    sub_187 = false;
  };
  if (controller_v_335) {
    sub_189 = sub_139;
  } else {
    sub_189 = false;
  };
  if (controller_c_air_1) {
    v_295 = v_294;
  } else {
    v_295 = sub_189;
  };
  if (controller_v_334) {
    sub_186 = v_295;
  } else {
    sub_186 = sub_187;
  };
  sub_185 = sub_186;
  if (controller_c_pc) {
    v_296 = false;
  } else {
    v_296 = sub_185;
  };
  if (controller_c_closet) {
    sub_184 = false;
  } else {
    sub_184 = v_296;
  };
  if (controller_ck_42_1) {
    v_300 = sub_184;
  } else {
    v_300 = sub_178;
  };
  if (controller_v_335) {
    sub_195 = false;
  } else {
    sub_195 = sub_151;
  };
  if (controller_c_air_2) {
    v_291 = sub_195;
  } else {
    v_291 = false;
  };
  if (controller_c_air_1) {
    sub_194 = sub_195;
  } else {
    sub_194 = false;
  };
  if (controller_v_335) {
    sub_197 = sub_151;
  } else {
    sub_197 = false;
  };
  sub_196 = sub_197;
  if (controller_c_air_1) {
    v_292 = v_291;
  } else {
    v_292 = sub_196;
  };
  if (controller_v_334) {
    sub_193 = v_292;
  } else {
    sub_193 = sub_194;
  };
  sub_192 = sub_193;
  if (controller_c_pc) {
    v_293 = false;
  } else {
    v_293 = sub_192;
  };
  if (controller_c_closet) {
    sub_191 = false;
  } else {
    sub_191 = v_293;
  };
  if (controller_ck_42_1) {
    v_302 = sub_191;
    sub_190 = sub_184;
  } else {
    v_302 = sub_184;
    sub_190 = sub_191;
  };
  if (controller_c_light_1) {
    v_303 = v_302;
    v_301 = v_300;
  } else {
    v_303 = sub_190;
    v_301 = sub_190;
  };
  if (controller_light_switch) {
    sub_177 = v_301;
  } else {
    sub_177 = v_303;
  };
  sub_176 = sub_177;
  if (controller_air_failed_recovered) {
    v_311 = sub_176;
    sub_154 = sub_155;
  } else {
    v_311 = sub_155;
    sub_154 = sub_176;
  };
  if (controller_ck_39_1) {
    sub_153 = v_311;
  } else {
    sub_153 = sub_154;
  };
  if (controller_cleaner) {
    v_319 = sub_153;
    sub_131 = sub_132;
  } else {
    v_319 = sub_132;
    sub_131 = sub_153;
  };
  if (controller_ck_30_1) {
    sub_130 = v_319;
  } else {
    sub_130 = sub_131;
  };
  if (controller_v_335) {
    sub_207 = sub_90;
  } else {
    sub_207 = sub_151;
  };
  if (controller_c_air_2) {
    v_281 = sub_207;
  } else {
    v_281 = sub_93;
  };
  if (controller_c_air_1) {
    v_282 = v_281;
    sub_206 = sub_207;
  } else {
    v_282 = sub_196;
    sub_206 = sub_92;
  };
  if (controller_v_334) {
    v_283 = v_282;
  } else {
    v_283 = sub_206;
  };
  if (controller_c_window) {
    v_284 = v_283;
  } else {
    v_284 = sub_142;
  };
  if (controller_c_pc) {
    sub_205 = v_284;
  } else {
    sub_205 = sub_142;
  };
  sub_204 = sub_205;
  if (controller_v_335) {
    sub_211 = sub_97;
  } else {
    sub_211 = sub_151;
  };
  if (controller_c_air_2) {
    v_277 = sub_211;
  } else {
    v_277 = sub_102;
  };
  if (controller_c_air_1) {
    v_278 = v_277;
    sub_210 = sub_211;
  } else {
    v_278 = sub_196;
    sub_210 = sub_101;
  };
  if (controller_v_334) {
    v_279 = v_278;
  } else {
    v_279 = sub_210;
  };
  if (controller_c_window) {
    v_280 = v_279;
  } else {
    v_280 = sub_137;
  };
  if (controller_c_pc) {
    sub_209 = v_280;
  } else {
    sub_209 = sub_137;
  };
  sub_208 = sub_209;
  if (controller_ck_42_1) {
    v_285 = sub_208;
  } else {
    v_285 = sub_204;
  };
  if (controller_c_window) {
    v_276 = sub_193;
  } else {
    v_276 = sub_149;
  };
  if (controller_c_pc) {
    sub_214 = v_276;
  } else {
    sub_214 = sub_149;
  };
  sub_213 = sub_214;
  if (controller_ck_42_1) {
    v_287 = sub_213;
    sub_212 = sub_208;
  } else {
    v_287 = sub_208;
    sub_212 = sub_213;
  };
  if (controller_c_light_1) {
    v_288 = v_287;
    v_286 = v_285;
  } else {
    v_288 = sub_212;
    v_286 = sub_212;
  };
  if (controller_light_switch) {
    sub_203 = v_286;
  } else {
    sub_203 = v_288;
  };
  sub_202 = sub_203;
  if (controller_air_failed_recovered) {
    v_289 = sub_202;
    sub_201 = sub_155;
  } else {
    v_289 = sub_155;
    sub_201 = sub_202;
  };
  if (controller_ck_39_1) {
    sub_200 = v_289;
  } else {
    sub_200 = sub_201;
  };
  if (controller_cleaner) {
    v_290 = sub_153;
    sub_199 = sub_200;
  } else {
    v_290 = sub_200;
    sub_199 = sub_153;
  };
  if (controller_ck_30_1) {
    sub_198 = v_290;
  } else {
    sub_198 = sub_199;
  };
  if (controller_worker) {
    v_320 = sub_198;
    sub_129 = sub_130;
  } else {
    v_320 = sub_130;
    sub_129 = sub_198;
  };
  if (controller_ck_28_1) {
    sub_128 = v_320;
  } else {
    sub_128 = sub_129;
  };
  sub_223 = sub_163;
  sub_222 = sub_223;
  sub_221 = sub_222;
  if (controller_air_failed_recovered) {
    v_273 = sub_176;
    sub_220 = sub_221;
  } else {
    v_273 = sub_221;
    sub_220 = sub_176;
  };
  if (controller_ck_39_1) {
    sub_219 = v_273;
  } else {
    sub_219 = sub_220;
  };
  if (controller_cleaner) {
    v_274 = sub_219;
    sub_218 = sub_132;
  } else {
    v_274 = sub_132;
    sub_218 = sub_219;
  };
  if (controller_ck_30_1) {
    sub_217 = v_274;
  } else {
    sub_217 = sub_218;
  };
  sub_231 = sub_179;
  sub_230 = sub_231;
  sub_233 = sub_185;
  sub_232 = sub_233;
  if (controller_ck_42_1) {
    v = sub_232;
  } else {
    v = sub_230;
  };
  sub_236 = sub_192;
  sub_235 = sub_236;
  if (controller_ck_42_1) {
    v_269 = sub_235;
    sub_234 = sub_232;
  } else {
    v_269 = sub_232;
    sub_234 = sub_235;
  };
  if (controller_c_light_1) {
    v_270 = v_269;
    v_268 = v;
  } else {
    v_270 = sub_234;
    v_268 = sub_234;
  };
  if (controller_light_switch) {
    sub_229 = v_268;
  } else {
    sub_229 = v_270;
  };
  sub_228 = sub_229;
  if (controller_air_failed_recovered) {
    v_271 = sub_228;
    sub_227 = sub_221;
  } else {
    v_271 = sub_221;
    sub_227 = sub_228;
  };
  if (controller_ck_39_1) {
    sub_226 = v_271;
  } else {
    sub_226 = sub_227;
  };
  if (controller_cleaner) {
    v_272 = sub_219;
    sub_225 = sub_226;
  } else {
    v_272 = sub_226;
    sub_225 = sub_219;
  };
  if (controller_ck_30_1) {
    sub_224 = v_272;
  } else {
    sub_224 = sub_225;
  };
  if (controller_worker) {
    v_275 = sub_224;
    sub_216 = sub_217;
  } else {
    v_275 = sub_217;
    sub_216 = sub_224;
  };
  if (controller_ck_28_1) {
    sub_215 = v_275;
  } else {
    sub_215 = sub_216;
  };
  if (controller_change_shift) {
    v_379 = sub_215;
    sub_127 = sub_128;
  } else {
    v_379 = sub_128;
    sub_127 = sub_215;
  };
  if (controller_ck_1) {
    v_380 = v_379;
  } else {
    v_380 = sub_127;
  };
  if (p_controller_c_light_2) {
    sub_0 = v_380;
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
  int controller_pnr_15, int controller_ck_24_1, int controller_pnr_14,
  int controller_ck_26_1, int controller_pnr_13, int controller_ck_28_1,
  int controller_pnr_12, int controller_ck_30_1, int controller_pnr_11,
  int controller_ck_32_1, int controller_pnr_10, int controller_ck_34_1,
  int controller_pnr_9, int controller_v_335, int controller_v_334,
  int controller_pnr_8, int controller_ck_39_1, int controller_pnr_7,
  int controller_ck_42_1, int controller_pnr_6, int controller_ck_44_1,
  int controller_pnr_5, int controller_ck_46_1, int controller_pnr_4,
  int controller_ck_48_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door_2, int p_controller_c_door_1,
  int controller_c_closet, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door_2,
  int controller_c_door_1,
  Controller_controller__controller_controller_controller_c_light_1_out* _out) {
  
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
  sub_17 = false;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_20 = true;
  sub_19 = sub_20;
  sub_18 = sub_19;
  if (p_controller_c_light_1) {
    sub_14 = sub_18;
  } else {
    sub_14 = sub_15;
  };
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (controller_c_window) {
    v_435 = sub_11;
  } else {
    v_435 = false;
  };
  if (controller_c_pc) {
    sub_10 = false;
  } else {
    sub_10 = v_435;
  };
  sub_9 = sub_10;
  if (controller_light_failed_recovered) {
    sub_28 = sub_16;
  } else {
    sub_28 = sub_19;
  };
  if (p_controller_c_light_1) {
    sub_27 = sub_18;
  } else {
    sub_27 = sub_28;
  };
  if (controller_light_failed_recovered) {
    sub_29 = sub_19;
  } else {
    sub_29 = sub_16;
  };
  if (p_controller_c_light_1) {
    v_433 = sub_18;
  } else {
    v_433 = sub_29;
  };
  if (controller_ck_44_1) {
    sub_26 = v_433;
  } else {
    sub_26 = sub_27;
  };
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  if (controller_c_window) {
    v_434 = sub_23;
  } else {
    v_434 = false;
  };
  if (controller_c_pc) {
    sub_22 = false;
  } else {
    sub_22 = v_434;
  };
  sub_21 = sub_22;
  if (controller_ck_42_1) {
    v_436 = sub_21;
  } else {
    v_436 = sub_9;
  };
  if (p_controller_c_light_1) {
    v_431 = sub_28;
    sub_36 = sub_29;
  } else {
    v_431 = sub_15;
    sub_36 = sub_15;
  };
  if (controller_ck_44_1) {
    sub_35 = v_431;
  } else {
    sub_35 = sub_36;
  };
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  if (controller_c_window) {
    v_432 = sub_32;
  } else {
    v_432 = false;
  };
  if (controller_c_pc) {
    sub_31 = false;
  } else {
    sub_31 = v_432;
  };
  sub_30 = sub_31;
  if (controller_ck_42_1) {
    v_437 = sub_21;
  } else {
    v_437 = sub_30;
  };
  if (controller_light_switch) {
    sub_8 = v_436;
  } else {
    sub_8 = v_437;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (controller_c_door_1) {
    v_427 = false;
    sub_46 = sub_26;
  } else {
    v_427 = sub_26;
    sub_46 = false;
  };
  if (controller_ck_24_1) {
    sub_45 = v_427;
  } else {
    sub_45 = sub_46;
  };
  sub_44 = sub_45;
  if (controller_c_window) {
    sub_43 = false;
  } else {
    sub_43 = sub_44;
  };
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (controller_c_door_1) {
    v_426 = false;
    sub_52 = sub_14;
  } else {
    v_426 = sub_14;
    sub_52 = false;
  };
  if (controller_ck_24_1) {
    sub_51 = v_426;
  } else {
    sub_51 = sub_52;
  };
  sub_50 = sub_51;
  if (controller_c_window) {
    sub_49 = false;
  } else {
    sub_49 = sub_50;
  };
  sub_48 = sub_49;
  sub_47 = sub_48;
  if (controller_ck_42_1) {
    v_428 = sub_47;
  } else {
    v_428 = sub_41;
  };
  if (controller_c_door_1) {
    v_425 = false;
    sub_57 = sub_35;
  } else {
    v_425 = sub_35;
    sub_57 = false;
  };
  if (controller_ck_24_1) {
    sub_56 = v_425;
  } else {
    sub_56 = sub_57;
  };
  sub_55 = sub_56;
  if (controller_c_window) {
    sub_54 = false;
  } else {
    sub_54 = sub_55;
  };
  sub_53 = sub_54;
  if (controller_ck_42_1) {
    v_429 = sub_53;
  } else {
    v_429 = sub_41;
  };
  if (controller_light_switch) {
    sub_40 = v_428;
  } else {
    sub_40 = v_429;
  };
  sub_39 = sub_40;
  if (controller_v_335) {
    sub_64 = false;
  } else {
    sub_64 = sub_25;
  };
  if (controller_c_air_2) {
    v_416 = sub_64;
  } else {
    v_416 = false;
  };
  if (controller_c_air_1) {
    sub_63 = sub_64;
  } else {
    sub_63 = false;
  };
  if (controller_v_335) {
    sub_65 = sub_25;
  } else {
    sub_65 = false;
  };
  if (controller_c_air_1) {
    v_417 = v_416;
  } else {
    v_417 = sub_65;
  };
  if (controller_v_334) {
    sub_62 = v_417;
  } else {
    sub_62 = sub_63;
  };
  sub_61 = sub_62;
  if (controller_c_pc) {
    v_418 = false;
  } else {
    v_418 = sub_61;
  };
  if (controller_c_closet) {
    sub_60 = false;
  } else {
    sub_60 = v_418;
  };
  if (controller_v_335) {
    sub_69 = false;
  } else {
    sub_69 = sub_13;
  };
  if (controller_c_air_2) {
    v_414 = sub_69;
  } else {
    v_414 = false;
  };
  if (controller_c_air_1) {
    sub_68 = sub_69;
  } else {
    sub_68 = false;
  };
  if (controller_v_335) {
    sub_70 = sub_13;
  } else {
    sub_70 = false;
  };
  if (controller_c_air_1) {
    v_415 = v_414;
  } else {
    v_415 = sub_70;
  };
  if (controller_v_334) {
    sub_67 = v_415;
  } else {
    sub_67 = sub_68;
  };
  sub_66 = sub_67;
  if (controller_c_pc) {
    v_419 = false;
  } else {
    v_419 = sub_66;
  };
  if (controller_c_closet) {
    v_420 = false;
  } else {
    v_420 = v_419;
  };
  if (controller_ck_42_1) {
    v_421 = v_420;
  } else {
    v_421 = sub_60;
  };
  if (controller_v_335) {
    sub_74 = false;
  } else {
    sub_74 = sub_34;
  };
  if (controller_c_air_2) {
    v_412 = sub_74;
  } else {
    v_412 = false;
  };
  if (controller_c_air_1) {
    sub_73 = sub_74;
  } else {
    sub_73 = false;
  };
  if (controller_v_335) {
    sub_75 = sub_34;
  } else {
    sub_75 = false;
  };
  if (controller_c_air_1) {
    v_413 = v_412;
  } else {
    v_413 = sub_75;
  };
  if (controller_v_334) {
    sub_72 = v_413;
  } else {
    sub_72 = sub_73;
  };
  sub_71 = sub_72;
  if (controller_c_pc) {
    v_422 = false;
  } else {
    v_422 = sub_71;
  };
  if (controller_c_closet) {
    v_423 = false;
  } else {
    v_423 = v_422;
  };
  if (controller_ck_42_1) {
    v_424 = v_423;
  } else {
    v_424 = sub_60;
  };
  if (controller_light_switch) {
    sub_59 = v_421;
  } else {
    sub_59 = v_424;
  };
  sub_58 = sub_59;
  if (controller_air_failed_recovered) {
    v_430 = sub_58;
    sub_38 = sub_39;
  } else {
    v_430 = sub_39;
    sub_38 = sub_58;
  };
  if (controller_ck_39_1) {
    sub_37 = v_430;
  } else {
    sub_37 = sub_38;
  };
  if (controller_cleaner) {
    v_438 = sub_37;
    sub_5 = sub_6;
  } else {
    v_438 = sub_6;
    sub_5 = sub_37;
  };
  if (controller_ck_30_1) {
    sub_4 = v_438;
  } else {
    sub_4 = sub_5;
  };
  if (controller_light_failed_recovered) {
    sub_89 = sub_16;
    sub_90 = sub_19;
  } else {
    sub_89 = false;
    sub_90 = false;
  };
  if (p_controller_c_light_1) {
    sub_88 = sub_90;
  } else {
    sub_88 = sub_89;
  };
  if (controller_light_failed_recovered) {
    sub_92 = false;
    sub_93 = false;
  } else {
    sub_92 = sub_16;
    sub_93 = sub_19;
  };
  if (p_controller_c_light_1) {
    sub_91 = sub_93;
  } else {
    sub_91 = sub_92;
  };
  if (controller_ck_44_1) {
    sub_87 = sub_91;
  } else {
    sub_87 = sub_88;
  };
  sub_86 = sub_87;
  if (controller_ck_44_1) {
    sub_95 = sub_90;
  } else {
    sub_95 = sub_93;
  };
  sub_94 = sub_95;
  if (controller_v_335) {
    v_403 = false;
    v_401 = sub_94;
  } else {
    v_403 = sub_94;
    v_401 = false;
  };
  if (controller_c_air_2) {
    v_402 = v_401;
  } else {
    v_402 = sub_94;
  };
  if (controller_v_335) {
    sub_85 = sub_94;
  } else {
    sub_85 = sub_86;
  };
  if (controller_c_air_2) {
    v_404 = sub_85;
  } else {
    v_404 = v_403;
  };
  if (controller_c_air_1) {
    sub_84 = sub_85;
  } else {
    sub_84 = v_402;
  };
  if (controller_v_335) {
    sub_97 = sub_86;
  } else {
    sub_97 = false;
  };
  sub_96 = sub_97;
  if (controller_c_air_1) {
    v_405 = v_404;
  } else {
    v_405 = sub_96;
  };
  if (controller_v_334) {
    v_406 = v_405;
  } else {
    v_406 = sub_84;
  };
  if (controller_c_window) {
    v_407 = v_406;
  } else {
    v_407 = sub_23;
  };
  if (controller_c_pc) {
    sub_83 = v_407;
  } else {
    sub_83 = sub_23;
  };
  sub_82 = sub_83;
  if (controller_ck_44_1) {
    sub_102 = sub_88;
  } else {
    sub_102 = sub_91;
  };
  sub_101 = sub_102;
  if (controller_v_335) {
    v_396 = false;
    v_394 = sub_101;
  } else {
    v_396 = sub_101;
    v_394 = false;
  };
  if (controller_c_air_2) {
    v_395 = v_394;
  } else {
    v_395 = sub_101;
  };
  if (controller_v_335) {
    sub_100 = sub_101;
  } else {
    sub_100 = sub_86;
  };
  if (controller_c_air_2) {
    v_397 = sub_100;
  } else {
    v_397 = v_396;
  };
  if (controller_c_air_1) {
    v_398 = v_397;
    sub_99 = sub_100;
  } else {
    v_398 = sub_96;
    sub_99 = v_395;
  };
  if (controller_v_334) {
    v_399 = v_398;
  } else {
    v_399 = sub_99;
  };
  if (controller_c_window) {
    v_400 = v_399;
  } else {
    v_400 = sub_11;
  };
  if (controller_c_pc) {
    sub_98 = v_400;
  } else {
    sub_98 = sub_11;
  };
  if (controller_ck_42_1) {
    v_408 = sub_98;
  } else {
    v_408 = sub_82;
  };
  if (controller_ck_44_1) {
    sub_107 = sub_89;
  } else {
    sub_107 = sub_92;
  };
  sub_106 = sub_107;
  if (controller_v_335) {
    v_389 = false;
    v_387 = sub_106;
  } else {
    v_389 = sub_106;
    v_387 = false;
  };
  if (controller_c_air_2) {
    v_388 = v_387;
  } else {
    v_388 = sub_106;
  };
  if (controller_v_335) {
    sub_105 = sub_106;
  } else {
    sub_105 = sub_86;
  };
  if (controller_c_air_2) {
    v_390 = sub_105;
  } else {
    v_390 = v_389;
  };
  if (controller_c_air_1) {
    v_391 = v_390;
    sub_104 = sub_105;
  } else {
    v_391 = sub_96;
    sub_104 = v_388;
  };
  if (controller_v_334) {
    v_392 = v_391;
  } else {
    v_392 = sub_104;
  };
  if (controller_c_window) {
    v_393 = v_392;
  } else {
    v_393 = sub_32;
  };
  if (controller_c_pc) {
    sub_103 = v_393;
  } else {
    sub_103 = sub_32;
  };
  if (controller_ck_42_1) {
    v_409 = sub_103;
  } else {
    v_409 = sub_82;
  };
  if (controller_light_switch) {
    sub_81 = v_408;
  } else {
    sub_81 = v_409;
  };
  sub_80 = sub_81;
  if (controller_air_failed_recovered) {
    v_410 = sub_80;
    sub_79 = sub_39;
  } else {
    v_410 = sub_39;
    sub_79 = sub_80;
  };
  if (controller_ck_39_1) {
    sub_78 = v_410;
  } else {
    sub_78 = sub_79;
  };
  if (controller_cleaner) {
    v_411 = sub_37;
    sub_77 = sub_78;
  } else {
    v_411 = sub_78;
    sub_77 = sub_37;
  };
  if (controller_ck_30_1) {
    sub_76 = v_411;
  } else {
    sub_76 = sub_77;
  };
  if (controller_worker) {
    v_439 = sub_76;
    sub_3 = sub_4;
  } else {
    v_439 = sub_4;
    sub_3 = sub_76;
  };
  if (controller_ck_28_1) {
    sub_2 = v_439;
  } else {
    sub_2 = sub_3;
  };
  sub_115 = sub_47;
  sub_114 = sub_115;
  if (controller_air_failed_recovered) {
    v_384 = sub_58;
    sub_113 = sub_114;
  } else {
    v_384 = sub_114;
    sub_113 = sub_58;
  };
  if (controller_ck_39_1) {
    sub_112 = v_384;
  } else {
    sub_112 = sub_113;
  };
  if (controller_cleaner) {
    v_385 = sub_112;
    sub_111 = sub_6;
  } else {
    v_385 = sub_6;
    sub_111 = sub_112;
  };
  if (controller_ck_30_1) {
    sub_110 = v_385;
  } else {
    sub_110 = sub_111;
  };
  sub_123 = sub_61;
  sub_122 = sub_123;
  sub_124 = sub_66;
  if (controller_ck_42_1) {
    v = sub_124;
  } else {
    v = sub_122;
  };
  sub_125 = sub_71;
  if (controller_ck_42_1) {
    v_381 = sub_125;
  } else {
    v_381 = sub_122;
  };
  if (controller_light_switch) {
    sub_121 = v;
  } else {
    sub_121 = v_381;
  };
  sub_120 = sub_121;
  if (controller_air_failed_recovered) {
    v_382 = sub_120;
    sub_119 = sub_114;
  } else {
    v_382 = sub_114;
    sub_119 = sub_120;
  };
  if (controller_ck_39_1) {
    sub_118 = v_382;
  } else {
    sub_118 = sub_119;
  };
  if (controller_cleaner) {
    v_383 = sub_112;
    sub_117 = sub_118;
  } else {
    v_383 = sub_118;
    sub_117 = sub_112;
  };
  if (controller_ck_30_1) {
    sub_116 = v_383;
  } else {
    sub_116 = sub_117;
  };
  if (controller_worker) {
    v_386 = sub_116;
    sub_109 = sub_110;
  } else {
    v_386 = sub_110;
    sub_109 = sub_116;
  };
  if (controller_ck_28_1) {
    sub_108 = v_386;
  } else {
    sub_108 = sub_109;
  };
  if (controller_change_shift) {
    v_440 = sub_108;
    sub_1 = sub_2;
  } else {
    v_440 = sub_2;
    sub_1 = sub_108;
  };
  if (controller_ck_1) {
    sub_0 = v_440;
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
  int controller_pnr_15, int controller_ck_24_1, int controller_pnr_14,
  int controller_ck_26_1, int controller_pnr_13, int controller_ck_28_1,
  int controller_pnr_12, int controller_ck_30_1, int controller_pnr_11,
  int controller_ck_32_1, int controller_pnr_10, int controller_ck_34_1,
  int controller_pnr_9, int controller_v_335, int controller_v_334,
  int controller_pnr_8, int controller_ck_39_1, int controller_pnr_7,
  int controller_ck_42_1, int controller_pnr_6, int controller_ck_44_1,
  int controller_pnr_5, int controller_ck_46_1, int controller_pnr_4,
  int controller_ck_48_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door_2, int p_controller_c_door_1,
  int controller_c_air_2, int controller_c_air_1, int controller_c_window,
  int controller_c_pc, int controller_c_door_2, int controller_c_door_1,
  Controller_controller__controller_controller_controller_c_closet_out* _out) {
  
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
  sub_16 = false;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (controller_c_window) {
    v_475 = sub_11;
  } else {
    v_475 = false;
  };
  if (controller_c_pc) {
    sub_10 = false;
  } else {
    sub_10 = v_475;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (controller_c_door_1) {
    v_473 = false;
    sub_25 = sub_14;
  } else {
    v_473 = sub_14;
    sub_25 = false;
  };
  if (controller_ck_24_1) {
    sub_24 = v_473;
  } else {
    sub_24 = sub_25;
  };
  sub_23 = sub_24;
  if (controller_c_window) {
    sub_22 = false;
  } else {
    sub_22 = sub_23;
  };
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  if (controller_v_335) {
    sub_32 = false;
  } else {
    sub_32 = sub_13;
  };
  if (controller_c_air_2) {
    v_471 = sub_32;
  } else {
    v_471 = false;
  };
  if (controller_c_air_1) {
    sub_31 = sub_32;
  } else {
    sub_31 = false;
  };
  if (controller_v_335) {
    sub_33 = sub_13;
  } else {
    sub_33 = false;
  };
  if (controller_c_air_1) {
    v_472 = v_471;
  } else {
    v_472 = sub_33;
  };
  if (controller_v_334) {
    sub_30 = v_472;
  } else {
    sub_30 = sub_31;
  };
  sub_29 = sub_30;
  if (controller_c_pc) {
    sub_28 = false;
  } else {
    sub_28 = sub_29;
  };
  sub_27 = sub_28;
  sub_26 = sub_27;
  if (controller_air_failed_recovered) {
    v_474 = sub_26;
    sub_18 = sub_19;
  } else {
    v_474 = sub_19;
    sub_18 = sub_26;
  };
  if (controller_ck_39_1) {
    sub_17 = v_474;
  } else {
    sub_17 = sub_18;
  };
  if (controller_cleaner) {
    v_476 = sub_17;
    sub_6 = sub_7;
  } else {
    v_476 = sub_7;
    sub_6 = sub_17;
  };
  if (controller_ck_30_1) {
    sub_5 = v_476;
  } else {
    sub_5 = sub_6;
  };
  if (controller_light_failed_recovered) {
    sub_45 = sub_15;
    sub_46 = false;
  } else {
    sub_45 = false;
    sub_46 = sub_15;
  };
  if (controller_ck_44_1) {
    sub_44 = sub_46;
  } else {
    sub_44 = sub_45;
  };
  sub_43 = sub_44;
  if (controller_ck_44_1) {
    sub_48 = sub_45;
  } else {
    sub_48 = sub_46;
  };
  sub_47 = sub_48;
  if (controller_v_335) {
    v_464 = false;
    v_462 = sub_47;
  } else {
    v_464 = sub_47;
    v_462 = false;
  };
  if (controller_c_air_2) {
    v_463 = v_462;
  } else {
    v_463 = sub_47;
  };
  if (controller_v_335) {
    sub_42 = sub_47;
  } else {
    sub_42 = sub_43;
  };
  if (controller_c_air_2) {
    v_465 = sub_42;
  } else {
    v_465 = v_464;
  };
  if (controller_c_air_1) {
    sub_41 = sub_42;
  } else {
    sub_41 = v_463;
  };
  if (controller_v_335) {
    sub_49 = sub_43;
  } else {
    sub_49 = false;
  };
  if (controller_c_air_1) {
    v_466 = v_465;
  } else {
    v_466 = sub_49;
  };
  if (controller_v_334) {
    v_467 = v_466;
  } else {
    v_467 = sub_41;
  };
  if (controller_c_window) {
    v_468 = v_467;
  } else {
    v_468 = sub_11;
  };
  if (controller_c_pc) {
    sub_40 = v_468;
  } else {
    sub_40 = sub_11;
  };
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (controller_air_failed_recovered) {
    v_469 = sub_38;
    sub_37 = sub_19;
  } else {
    v_469 = sub_19;
    sub_37 = sub_38;
  };
  if (controller_ck_39_1) {
    sub_36 = v_469;
  } else {
    sub_36 = sub_37;
  };
  if (controller_cleaner) {
    v_470 = sub_17;
    sub_35 = sub_36;
  } else {
    v_470 = sub_36;
    sub_35 = sub_17;
  };
  if (controller_ck_30_1) {
    sub_34 = v_470;
  } else {
    sub_34 = sub_35;
  };
  if (controller_worker) {
    v_477 = sub_34;
    sub_4 = sub_5;
  } else {
    v_477 = sub_5;
    sub_4 = sub_34;
  };
  if (controller_ck_28_1) {
    sub_3 = v_477;
  } else {
    sub_3 = sub_4;
  };
  sub_58 = sub_29;
  sub_57 = sub_58;
  sub_56 = sub_57;
  if (controller_air_failed_recovered) {
    v_459 = sub_56;
    sub_55 = sub_19;
  } else {
    v_459 = sub_19;
    sub_55 = sub_56;
  };
  if (controller_ck_39_1) {
    sub_54 = v_459;
  } else {
    sub_54 = sub_55;
  };
  if (controller_cleaner) {
    v_460 = sub_17;
    sub_53 = sub_54;
  } else {
    v_460 = sub_54;
    sub_53 = sub_17;
  };
  if (controller_ck_30_1) {
    sub_52 = v_460;
  } else {
    sub_52 = sub_53;
  };
  if (controller_worker) {
    v_461 = sub_52;
    sub_51 = sub_5;
  } else {
    v_461 = sub_5;
    sub_51 = sub_52;
  };
  if (controller_ck_28_1) {
    sub_50 = v_461;
  } else {
    sub_50 = sub_51;
  };
  if (controller_change_shift) {
    v_478 = sub_50;
    sub_2 = sub_3;
  } else {
    v_478 = sub_3;
    sub_2 = sub_50;
  };
  if (controller_ck_1) {
    sub_1 = v_478;
  } else {
    sub_1 = sub_2;
  };
  sub_73 = true;
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  if (controller_c_window) {
    v_456 = sub_68;
  } else {
    v_456 = false;
  };
  if (controller_c_pc) {
    sub_67 = false;
  } else {
    sub_67 = v_456;
  };
  sub_66 = sub_67;
  sub_65 = sub_66;
  sub_64 = sub_65;
  if (controller_c_door_1) {
    v_454 = false;
    sub_82 = sub_71;
  } else {
    v_454 = sub_71;
    sub_82 = false;
  };
  if (controller_ck_24_1) {
    sub_81 = v_454;
  } else {
    sub_81 = sub_82;
  };
  sub_80 = sub_81;
  if (controller_c_window) {
    sub_79 = false;
  } else {
    sub_79 = sub_80;
  };
  sub_78 = sub_79;
  sub_77 = sub_78;
  sub_76 = sub_77;
  if (controller_air_failed_recovered) {
    v_455 = sub_26;
    sub_75 = sub_76;
  } else {
    v_455 = sub_76;
    sub_75 = sub_26;
  };
  if (controller_ck_39_1) {
    sub_74 = v_455;
  } else {
    sub_74 = sub_75;
  };
  if (controller_cleaner) {
    v_457 = sub_74;
    sub_63 = sub_64;
  } else {
    v_457 = sub_64;
    sub_63 = sub_74;
  };
  if (controller_ck_30_1) {
    sub_62 = v_457;
  } else {
    sub_62 = sub_63;
  };
  if (controller_light_failed_recovered) {
    sub_94 = sub_72;
    sub_95 = false;
  } else {
    sub_94 = false;
    sub_95 = sub_72;
  };
  if (controller_ck_44_1) {
    sub_93 = sub_95;
  } else {
    sub_93 = sub_94;
  };
  sub_92 = sub_93;
  if (controller_ck_44_1) {
    sub_97 = sub_94;
  } else {
    sub_97 = sub_95;
  };
  sub_96 = sub_97;
  if (controller_v_335) {
    v_447 = false;
    v_445 = sub_96;
  } else {
    v_447 = sub_96;
    v_445 = false;
  };
  if (controller_c_air_2) {
    v_446 = v_445;
  } else {
    v_446 = sub_96;
  };
  if (controller_v_335) {
    sub_91 = sub_96;
  } else {
    sub_91 = sub_92;
  };
  if (controller_c_air_2) {
    v_448 = sub_91;
  } else {
    v_448 = v_447;
  };
  if (controller_c_air_1) {
    sub_90 = sub_91;
  } else {
    sub_90 = v_446;
  };
  if (controller_v_335) {
    sub_98 = sub_92;
  } else {
    sub_98 = false;
  };
  if (controller_c_air_1) {
    v_449 = v_448;
  } else {
    v_449 = sub_98;
  };
  if (controller_v_334) {
    v_450 = v_449;
  } else {
    v_450 = sub_90;
  };
  if (controller_c_window) {
    v_451 = v_450;
  } else {
    v_451 = sub_68;
  };
  if (controller_c_pc) {
    sub_89 = v_451;
  } else {
    sub_89 = sub_68;
  };
  sub_88 = sub_89;
  sub_87 = sub_88;
  if (controller_air_failed_recovered) {
    v_452 = sub_87;
    sub_86 = sub_76;
  } else {
    v_452 = sub_76;
    sub_86 = sub_87;
  };
  if (controller_ck_39_1) {
    sub_85 = v_452;
  } else {
    sub_85 = sub_86;
  };
  if (controller_cleaner) {
    v_453 = sub_74;
    sub_84 = sub_85;
  } else {
    v_453 = sub_85;
    sub_84 = sub_74;
  };
  if (controller_ck_30_1) {
    sub_83 = v_453;
  } else {
    sub_83 = sub_84;
  };
  if (controller_worker) {
    v_458 = sub_83;
    sub_61 = sub_62;
  } else {
    v_458 = sub_62;
    sub_61 = sub_83;
  };
  if (controller_ck_28_1) {
    sub_60 = v_458;
  } else {
    sub_60 = sub_61;
  };
  if (controller_v_335) {
    sub_111 = false;
  } else {
    sub_111 = sub_70;
  };
  if (controller_c_air_2) {
    v = sub_111;
  } else {
    v = false;
  };
  if (controller_c_air_1) {
    sub_110 = sub_111;
  } else {
    sub_110 = false;
  };
  if (controller_v_335) {
    sub_112 = sub_70;
  } else {
    sub_112 = false;
  };
  if (controller_c_air_1) {
    v_441 = v;
  } else {
    v_441 = sub_112;
  };
  if (controller_v_334) {
    sub_109 = v_441;
  } else {
    sub_109 = sub_110;
  };
  sub_108 = sub_109;
  sub_107 = sub_108;
  sub_106 = sub_107;
  sub_105 = sub_106;
  if (controller_air_failed_recovered) {
    v_442 = sub_105;
    sub_104 = sub_76;
  } else {
    v_442 = sub_76;
    sub_104 = sub_105;
  };
  if (controller_ck_39_1) {
    sub_103 = v_442;
  } else {
    sub_103 = sub_104;
  };
  if (controller_cleaner) {
    v_443 = sub_74;
    sub_102 = sub_103;
  } else {
    v_443 = sub_103;
    sub_102 = sub_74;
  };
  if (controller_ck_30_1) {
    sub_101 = v_443;
  } else {
    sub_101 = sub_102;
  };
  if (controller_worker) {
    v_444 = sub_101;
    sub_100 = sub_62;
  } else {
    v_444 = sub_62;
    sub_100 = sub_101;
  };
  if (controller_ck_28_1) {
    sub_99 = v_444;
  } else {
    sub_99 = sub_100;
  };
  if (controller_change_shift) {
    v_479 = sub_99;
    sub_59 = sub_60;
  } else {
    v_479 = sub_60;
    sub_59 = sub_99;
  };
  if (controller_ck_1) {
    v_480 = v_479;
  } else {
    v_480 = sub_59;
  };
  if (p_controller_c_closet) {
    sub_0 = v_480;
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
  int controller_pnr_15, int controller_ck_24_1, int controller_pnr_14,
  int controller_ck_26_1, int controller_pnr_13, int controller_ck_28_1,
  int controller_pnr_12, int controller_ck_30_1, int controller_pnr_11,
  int controller_ck_32_1, int controller_pnr_10, int controller_ck_34_1,
  int controller_pnr_9, int controller_v_335, int controller_v_334,
  int controller_pnr_8, int controller_ck_39_1, int controller_pnr_7,
  int controller_ck_42_1, int controller_pnr_6, int controller_ck_44_1,
  int controller_pnr_5, int controller_ck_46_1, int controller_pnr_4,
  int controller_ck_48_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door_2, int p_controller_c_door_1,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door_2, int controller_c_door_1,
  Controller_controller__controller_controller_controller_c_air_2_out* _out) {
  
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
  sub_15 = false;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_18 = true;
  sub_17 = sub_18;
  sub_16 = sub_17;
  if (p_controller_c_air_2) {
    sub_12 = sub_16;
  } else {
    sub_12 = sub_13;
  };
  sub_11 = sub_12;
  sub_10 = sub_11;
  if (controller_c_window) {
    v_499 = sub_10;
  } else {
    v_499 = false;
  };
  if (controller_c_pc) {
    sub_9 = false;
  } else {
    sub_9 = v_499;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (controller_c_door_1) {
    v_497 = false;
    sub_26 = sub_12;
  } else {
    v_497 = sub_12;
    sub_26 = false;
  };
  if (controller_ck_24_1) {
    sub_25 = v_497;
  } else {
    sub_25 = sub_26;
  };
  if (controller_c_window) {
    sub_24 = false;
  } else {
    sub_24 = sub_25;
  };
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (controller_v_335) {
    v_495 = sub_11;
    v_493 = false;
  } else {
    v_495 = false;
    v_493 = sub_11;
  };
  if (controller_c_air_1) {
    sub_32 = v_493;
  } else {
    sub_32 = false;
  };
  sub_33 = sub_16;
  if (controller_v_335) {
    v_494 = false;
  } else {
    v_494 = sub_33;
  };
  if (controller_c_air_1) {
    v_496 = v_494;
  } else {
    v_496 = v_495;
  };
  if (controller_v_334) {
    sub_31 = v_496;
  } else {
    sub_31 = sub_32;
  };
  sub_30 = sub_31;
  if (controller_c_pc) {
    sub_29 = false;
  } else {
    sub_29 = sub_30;
  };
  sub_28 = sub_29;
  sub_27 = sub_28;
  if (controller_air_failed_recovered) {
    v_498 = sub_27;
    sub_20 = sub_21;
  } else {
    v_498 = sub_21;
    sub_20 = sub_27;
  };
  if (controller_ck_39_1) {
    sub_19 = v_498;
  } else {
    sub_19 = sub_20;
  };
  if (controller_cleaner) {
    v_500 = sub_19;
    sub_5 = sub_6;
  } else {
    v_500 = sub_6;
    sub_5 = sub_19;
  };
  if (controller_ck_30_1) {
    sub_4 = v_500;
  } else {
    sub_4 = sub_5;
  };
  if (controller_light_failed_recovered) {
    sub_45 = sub_14;
    sub_46 = sub_17;
  } else {
    sub_45 = false;
    sub_46 = false;
  };
  if (p_controller_c_air_2) {
    sub_44 = sub_46;
  } else {
    sub_44 = sub_45;
  };
  if (controller_light_failed_recovered) {
    sub_48 = false;
    sub_49 = false;
  } else {
    sub_48 = sub_14;
    sub_49 = sub_17;
  };
  if (p_controller_c_air_2) {
    sub_47 = sub_49;
  } else {
    sub_47 = sub_48;
  };
  if (controller_ck_44_1) {
    sub_43 = sub_47;
  } else {
    sub_43 = sub_44;
  };
  sub_42 = sub_43;
  if (controller_v_335) {
    v_487 = sub_42;
  } else {
    v_487 = false;
  };
  if (controller_ck_44_1) {
    sub_51 = sub_44;
  } else {
    sub_51 = sub_47;
  };
  sub_50 = sub_51;
  if (controller_v_335) {
    v_484 = sub_50;
  } else {
    v_484 = sub_42;
  };
  if (controller_ck_44_1) {
    sub_53 = sub_45;
  } else {
    sub_53 = sub_48;
  };
  sub_52 = sub_53;
  if (controller_v_335) {
    v_485 = sub_50;
  } else {
    v_485 = sub_52;
  };
  if (controller_c_air_1) {
    sub_41 = v_484;
  } else {
    sub_41 = v_485;
  };
  if (controller_light_failed_recovered) {
    v_483 = sub_14;
    sub_56 = sub_17;
  } else {
    v_483 = sub_17;
    sub_56 = sub_14;
  };
  if (controller_ck_44_1) {
    sub_55 = v_483;
  } else {
    sub_55 = sub_56;
  };
  sub_54 = sub_55;
  if (controller_ck_44_1) {
    sub_57 = sub_46;
  } else {
    sub_57 = sub_49;
  };
  if (controller_v_335) {
    v_486 = sub_57;
  } else {
    v_486 = sub_54;
  };
  if (controller_c_air_1) {
    v_488 = v_486;
  } else {
    v_488 = v_487;
  };
  if (controller_v_334) {
    v_489 = v_488;
  } else {
    v_489 = sub_41;
  };
  if (controller_c_window) {
    v_490 = v_489;
  } else {
    v_490 = sub_10;
  };
  if (controller_c_pc) {
    sub_40 = v_490;
  } else {
    sub_40 = sub_10;
  };
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (controller_air_failed_recovered) {
    v_491 = sub_38;
    sub_37 = sub_21;
  } else {
    v_491 = sub_21;
    sub_37 = sub_38;
  };
  if (controller_ck_39_1) {
    sub_36 = v_491;
  } else {
    sub_36 = sub_37;
  };
  if (controller_cleaner) {
    v_492 = sub_19;
    sub_35 = sub_36;
  } else {
    v_492 = sub_36;
    sub_35 = sub_19;
  };
  if (controller_ck_30_1) {
    sub_34 = v_492;
  } else {
    sub_34 = sub_35;
  };
  if (controller_worker) {
    v_501 = sub_34;
    sub_3 = sub_4;
  } else {
    v_501 = sub_4;
    sub_3 = sub_34;
  };
  if (controller_ck_28_1) {
    sub_2 = v_501;
  } else {
    sub_2 = sub_3;
  };
  sub_66 = sub_30;
  sub_65 = sub_66;
  sub_64 = sub_65;
  if (controller_air_failed_recovered) {
    v = sub_64;
    sub_63 = sub_21;
  } else {
    v = sub_21;
    sub_63 = sub_64;
  };
  if (controller_ck_39_1) {
    sub_62 = v;
  } else {
    sub_62 = sub_63;
  };
  if (controller_cleaner) {
    v_481 = sub_19;
    sub_61 = sub_62;
  } else {
    v_481 = sub_62;
    sub_61 = sub_19;
  };
  if (controller_ck_30_1) {
    sub_60 = v_481;
  } else {
    sub_60 = sub_61;
  };
  if (controller_worker) {
    v_482 = sub_60;
    sub_59 = sub_4;
  } else {
    v_482 = sub_4;
    sub_59 = sub_60;
  };
  if (controller_ck_28_1) {
    sub_58 = v_482;
  } else {
    sub_58 = sub_59;
  };
  if (controller_change_shift) {
    v_502 = sub_58;
    sub_1 = sub_2;
  } else {
    v_502 = sub_2;
    sub_1 = sub_58;
  };
  if (controller_ck_1) {
    sub_0 = v_502;
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
  int controller_pnr_15, int controller_ck_24_1, int controller_pnr_14,
  int controller_ck_26_1, int controller_pnr_13, int controller_ck_28_1,
  int controller_pnr_12, int controller_ck_30_1, int controller_pnr_11,
  int controller_ck_32_1, int controller_pnr_10, int controller_ck_34_1,
  int controller_pnr_9, int controller_v_335, int controller_v_334,
  int controller_pnr_8, int controller_ck_39_1, int controller_pnr_7,
  int controller_ck_42_1, int controller_pnr_6, int controller_ck_44_1,
  int controller_pnr_5, int controller_ck_46_1, int controller_pnr_4,
  int controller_ck_48_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door_2, int p_controller_c_door_1,
  int controller_c_window, int controller_c_pc, int controller_c_door_2,
  int controller_c_door_1,
  Controller_controller__controller_controller_controller_c_air_1_out* _out) {
  
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
  sub_14 = false;
  sub_13 = sub_14;
  sub_16 = true;
  sub_15 = sub_16;
  if (p_controller_c_air_1) {
    sub_12 = sub_15;
  } else {
    sub_12 = sub_13;
  };
  sub_11 = sub_12;
  sub_10 = sub_11;
  if (controller_c_window) {
    v_515 = sub_10;
  } else {
    v_515 = false;
  };
  if (controller_c_pc) {
    sub_9 = false;
  } else {
    sub_9 = v_515;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (controller_c_door_1) {
    v_512 = false;
    sub_23 = sub_11;
  } else {
    v_512 = sub_11;
    sub_23 = false;
  };
  if (controller_ck_24_1) {
    v_513 = v_512;
  } else {
    v_513 = sub_23;
  };
  if (controller_c_window) {
    sub_22 = false;
  } else {
    sub_22 = v_513;
  };
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_31 = sub_15;
  sub_30 = sub_31;
  if (controller_v_335) {
    sub_29 = false;
  } else {
    sub_29 = sub_30;
  };
  sub_32 = sub_13;
  if (controller_v_335) {
    v_511 = sub_32;
  } else {
    v_511 = sub_30;
  };
  if (controller_v_334) {
    sub_28 = v_511;
  } else {
    sub_28 = sub_29;
  };
  sub_27 = sub_28;
  if (controller_c_pc) {
    sub_26 = false;
  } else {
    sub_26 = sub_27;
  };
  sub_25 = sub_26;
  sub_24 = sub_25;
  if (controller_air_failed_recovered) {
    v_514 = sub_24;
    sub_18 = sub_19;
  } else {
    v_514 = sub_19;
    sub_18 = sub_24;
  };
  if (controller_ck_39_1) {
    sub_17 = v_514;
  } else {
    sub_17 = sub_18;
  };
  if (controller_cleaner) {
    v_516 = sub_17;
    sub_5 = sub_6;
  } else {
    v_516 = sub_6;
    sub_5 = sub_17;
  };
  if (controller_ck_30_1) {
    sub_4 = v_516;
  } else {
    sub_4 = sub_5;
  };
  if (controller_light_failed_recovered) {
    sub_43 = sub_15;
    sub_44 = sub_13;
  } else {
    sub_43 = sub_13;
    sub_44 = sub_15;
  };
  if (controller_ck_44_1) {
    sub_42 = sub_44;
  } else {
    sub_42 = sub_43;
  };
  sub_41 = sub_42;
  if (controller_light_failed_recovered) {
    v_505 = sub_12;
    sub_46 = false;
  } else {
    v_505 = false;
    sub_46 = sub_12;
  };
  if (controller_ck_44_1) {
    sub_45 = v_505;
  } else {
    sub_45 = sub_46;
  };
  if (controller_v_335) {
    sub_40 = sub_45;
  } else {
    sub_40 = sub_41;
  };
  if (controller_ck_44_1) {
    sub_47 = sub_43;
  } else {
    sub_47 = sub_44;
  };
  if (controller_v_335) {
    v_506 = sub_47;
  } else {
    v_506 = sub_30;
  };
  if (controller_v_334) {
    v_507 = v_506;
  } else {
    v_507 = sub_40;
  };
  if (controller_c_window) {
    v_508 = v_507;
  } else {
    v_508 = sub_10;
  };
  if (controller_c_pc) {
    sub_39 = v_508;
  } else {
    sub_39 = sub_10;
  };
  sub_38 = sub_39;
  sub_37 = sub_38;
  if (controller_air_failed_recovered) {
    v_509 = sub_37;
    sub_36 = sub_19;
  } else {
    v_509 = sub_19;
    sub_36 = sub_37;
  };
  if (controller_ck_39_1) {
    sub_35 = v_509;
  } else {
    sub_35 = sub_36;
  };
  if (controller_cleaner) {
    v_510 = sub_17;
    sub_34 = sub_35;
  } else {
    v_510 = sub_35;
    sub_34 = sub_17;
  };
  if (controller_ck_30_1) {
    sub_33 = v_510;
  } else {
    sub_33 = sub_34;
  };
  if (controller_worker) {
    v_517 = sub_33;
    sub_3 = sub_4;
  } else {
    v_517 = sub_4;
    sub_3 = sub_33;
  };
  if (controller_ck_28_1) {
    sub_2 = v_517;
  } else {
    sub_2 = sub_3;
  };
  sub_56 = sub_27;
  sub_55 = sub_56;
  sub_54 = sub_55;
  if (controller_air_failed_recovered) {
    v = sub_54;
    sub_53 = sub_19;
  } else {
    v = sub_19;
    sub_53 = sub_54;
  };
  if (controller_ck_39_1) {
    sub_52 = v;
  } else {
    sub_52 = sub_53;
  };
  if (controller_cleaner) {
    v_503 = sub_17;
    sub_51 = sub_52;
  } else {
    v_503 = sub_52;
    sub_51 = sub_17;
  };
  if (controller_ck_30_1) {
    sub_50 = v_503;
  } else {
    sub_50 = sub_51;
  };
  if (controller_worker) {
    v_504 = sub_50;
    sub_49 = sub_4;
  } else {
    v_504 = sub_4;
    sub_49 = sub_50;
  };
  if (controller_ck_28_1) {
    sub_48 = v_504;
  } else {
    sub_48 = sub_49;
  };
  if (controller_change_shift) {
    v_518 = sub_48;
    sub_1 = sub_2;
  } else {
    v_518 = sub_2;
    sub_1 = sub_48;
  };
  if (controller_ck_1) {
    sub_0 = v_518;
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
  int controller_pnr_15, int controller_ck_24_1, int controller_pnr_14,
  int controller_ck_26_1, int controller_pnr_13, int controller_ck_28_1,
  int controller_pnr_12, int controller_ck_30_1, int controller_pnr_11,
  int controller_ck_32_1, int controller_pnr_10, int controller_ck_34_1,
  int controller_pnr_9, int controller_v_335, int controller_v_334,
  int controller_pnr_8, int controller_ck_39_1, int controller_pnr_7,
  int controller_ck_42_1, int controller_pnr_6, int controller_ck_44_1,
  int controller_pnr_5, int controller_ck_46_1, int controller_pnr_4,
  int controller_ck_48_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door_2, int p_controller_c_door_1, int controller_c_pc,
  int controller_c_door_2, int controller_c_door_1,
  Controller_controller__controller_controller_controller_c_window_out* _out) {
  
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
  sub_14 = true;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (controller_c_pc) {
    sub_10 = false;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_24 = false;
  sub_23 = sub_24;
  sub_22 = sub_23;
  if (controller_c_door_1) {
    v_533 = false;
    sub_21 = sub_22;
  } else {
    v_533 = sub_22;
    sub_21 = false;
  };
  if (controller_ck_24_1) {
    sub_20 = v_533;
  } else {
    sub_20 = sub_21;
  };
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_30 = sub_22;
  if (controller_v_335) {
    sub_29 = false;
  } else {
    sub_29 = sub_30;
  };
  if (controller_v_334) {
    sub_28 = sub_30;
  } else {
    sub_28 = sub_29;
  };
  if (controller_c_pc) {
    sub_27 = false;
  } else {
    sub_27 = sub_28;
  };
  sub_26 = sub_27;
  sub_25 = sub_26;
  if (controller_air_failed_recovered) {
    v_534 = sub_25;
    sub_16 = sub_17;
  } else {
    v_534 = sub_17;
    sub_16 = sub_25;
  };
  if (controller_ck_39_1) {
    sub_15 = v_534;
  } else {
    sub_15 = sub_16;
  };
  if (controller_cleaner) {
    v_535 = sub_15;
    sub_6 = sub_7;
  } else {
    v_535 = sub_7;
    sub_6 = sub_15;
  };
  if (controller_ck_30_1) {
    sub_5 = v_535;
  } else {
    sub_5 = sub_6;
  };
  sub_37 = sub_30;
  sub_36 = sub_37;
  sub_35 = sub_36;
  if (controller_air_failed_recovered) {
    v_531 = sub_35;
    sub_34 = sub_17;
  } else {
    v_531 = sub_17;
    sub_34 = sub_35;
  };
  if (controller_ck_39_1) {
    sub_33 = v_531;
  } else {
    sub_33 = sub_34;
  };
  if (controller_cleaner) {
    v_532 = sub_15;
    sub_32 = sub_33;
  } else {
    v_532 = sub_33;
    sub_32 = sub_15;
  };
  if (controller_ck_30_1) {
    sub_31 = v_532;
  } else {
    sub_31 = sub_32;
  };
  if (controller_worker) {
    v_536 = sub_31;
    sub_4 = sub_5;
  } else {
    v_536 = sub_5;
    sub_4 = sub_31;
  };
  if (controller_ck_28_1) {
    sub_3 = v_536;
  } else {
    sub_3 = sub_4;
  };
  sub_46 = sub_28;
  sub_45 = sub_46;
  sub_44 = sub_45;
  if (controller_air_failed_recovered) {
    v_528 = sub_44;
    sub_43 = sub_17;
  } else {
    v_528 = sub_17;
    sub_43 = sub_44;
  };
  if (controller_ck_39_1) {
    sub_42 = v_528;
  } else {
    sub_42 = sub_43;
  };
  if (controller_cleaner) {
    v_529 = sub_15;
    sub_41 = sub_42;
  } else {
    v_529 = sub_42;
    sub_41 = sub_15;
  };
  if (controller_ck_30_1) {
    sub_40 = v_529;
  } else {
    sub_40 = sub_41;
  };
  if (controller_worker) {
    v_530 = sub_40;
    sub_39 = sub_5;
  } else {
    v_530 = sub_5;
    sub_39 = sub_40;
  };
  if (controller_ck_28_1) {
    sub_38 = v_530;
  } else {
    sub_38 = sub_39;
  };
  if (controller_change_shift) {
    v_537 = sub_38;
    sub_2 = sub_3;
  } else {
    v_537 = sub_3;
    sub_2 = sub_38;
  };
  if (controller_ck_1) {
    sub_1 = v_537;
  } else {
    sub_1 = sub_2;
  };
  if (controller_v_335) {
    sub_58 = false;
  } else {
    sub_58 = sub_11;
  };
  if (controller_v_334) {
    sub_57 = sub_11;
  } else {
    sub_57 = sub_58;
  };
  if (controller_c_pc) {
    sub_56 = false;
  } else {
    sub_56 = sub_57;
  };
  sub_55 = sub_56;
  sub_54 = sub_55;
  if (controller_air_failed_recovered) {
    v_525 = sub_54;
    sub_53 = sub_17;
  } else {
    v_525 = sub_17;
    sub_53 = sub_54;
  };
  if (controller_ck_39_1) {
    sub_52 = v_525;
  } else {
    sub_52 = sub_53;
  };
  if (controller_cleaner) {
    v_526 = sub_52;
    sub_51 = sub_7;
  } else {
    v_526 = sub_7;
    sub_51 = sub_52;
  };
  if (controller_ck_30_1) {
    sub_50 = v_526;
  } else {
    sub_50 = sub_51;
  };
  if (controller_light_failed_recovered) {
    v_521 = sub_13;
    sub_68 = sub_23;
  } else {
    v_521 = sub_23;
    sub_68 = sub_13;
  };
  if (controller_ck_44_1) {
    sub_67 = v_521;
  } else {
    sub_67 = sub_68;
  };
  if (controller_v_335) {
    sub_66 = sub_67;
  } else {
    sub_66 = sub_11;
  };
  if (controller_v_334) {
    v_522 = sub_11;
  } else {
    v_522 = sub_66;
  };
  if (controller_c_pc) {
    sub_65 = v_522;
  } else {
    sub_65 = sub_11;
  };
  sub_64 = sub_65;
  sub_63 = sub_64;
  if (controller_air_failed_recovered) {
    v_523 = sub_63;
    sub_62 = sub_17;
  } else {
    v_523 = sub_17;
    sub_62 = sub_63;
  };
  if (controller_ck_39_1) {
    sub_61 = v_523;
  } else {
    sub_61 = sub_62;
  };
  if (controller_cleaner) {
    v_524 = sub_52;
    sub_60 = sub_61;
  } else {
    v_524 = sub_61;
    sub_60 = sub_52;
  };
  if (controller_ck_30_1) {
    sub_59 = v_524;
  } else {
    sub_59 = sub_60;
  };
  if (controller_worker) {
    v_527 = sub_59;
    sub_49 = sub_50;
  } else {
    v_527 = sub_50;
    sub_49 = sub_59;
  };
  if (controller_ck_28_1) {
    sub_48 = v_527;
  } else {
    sub_48 = sub_49;
  };
  sub_77 = sub_57;
  sub_76 = sub_77;
  sub_75 = sub_76;
  if (controller_air_failed_recovered) {
    v = sub_75;
    sub_74 = sub_17;
  } else {
    v = sub_17;
    sub_74 = sub_75;
  };
  if (controller_ck_39_1) {
    sub_73 = v;
  } else {
    sub_73 = sub_74;
  };
  if (controller_cleaner) {
    v_519 = sub_52;
    sub_72 = sub_73;
  } else {
    v_519 = sub_73;
    sub_72 = sub_52;
  };
  if (controller_ck_30_1) {
    sub_71 = v_519;
  } else {
    sub_71 = sub_72;
  };
  if (controller_worker) {
    v_520 = sub_71;
    sub_70 = sub_50;
  } else {
    v_520 = sub_50;
    sub_70 = sub_71;
  };
  if (controller_ck_28_1) {
    sub_69 = v_520;
  } else {
    sub_69 = sub_70;
  };
  if (controller_change_shift) {
    v_538 = sub_69;
    sub_47 = sub_48;
  } else {
    v_538 = sub_48;
    sub_47 = sub_69;
  };
  if (controller_ck_1) {
    v_539 = v_538;
  } else {
    v_539 = sub_47;
  };
  if (p_controller_c_window) {
    sub_0 = v_539;
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
  int controller_pnr_15, int controller_ck_24_1, int controller_pnr_14,
  int controller_ck_26_1, int controller_pnr_13, int controller_ck_28_1,
  int controller_pnr_12, int controller_ck_30_1, int controller_pnr_11,
  int controller_ck_32_1, int controller_pnr_10, int controller_ck_34_1,
  int controller_pnr_9, int controller_v_335, int controller_v_334,
  int controller_pnr_8, int controller_ck_39_1, int controller_pnr_7,
  int controller_ck_42_1, int controller_pnr_6, int controller_ck_44_1,
  int controller_pnr_5, int controller_ck_46_1, int controller_pnr_4,
  int controller_ck_48_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door_2, int p_controller_c_door_1,
  int controller_c_door_2, int controller_c_door_1,
  Controller_controller__controller_controller_controller_c_pc_out* _out) {
  
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
  sub_13 = false;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (controller_c_door_1) {
    v_551 = false;
    sub_19 = sub_11;
  } else {
    v_551 = sub_11;
    sub_19 = false;
  };
  if (controller_ck_24_1) {
    sub_18 = v_551;
  } else {
    sub_18 = sub_19;
  };
  sub_17 = sub_18;
  sub_16 = sub_17;
  if (controller_v_335) {
    sub_23 = false;
  } else {
    sub_23 = sub_10;
  };
  if (controller_v_334) {
    sub_22 = sub_10;
  } else {
    sub_22 = sub_23;
  };
  sub_21 = sub_22;
  sub_20 = sub_21;
  if (controller_air_failed_recovered) {
    v_552 = sub_20;
    sub_15 = sub_16;
  } else {
    v_552 = sub_16;
    sub_15 = sub_20;
  };
  if (controller_ck_39_1) {
    sub_14 = v_552;
  } else {
    sub_14 = sub_15;
  };
  if (controller_cleaner) {
    v_553 = sub_14;
    sub_6 = sub_7;
  } else {
    v_553 = sub_7;
    sub_6 = sub_14;
  };
  if (controller_ck_30_1) {
    sub_5 = v_553;
  } else {
    sub_5 = sub_6;
  };
  if (controller_air_failed_recovered) {
    v_549 = sub_8;
    sub_27 = sub_16;
  } else {
    v_549 = sub_16;
    sub_27 = sub_8;
  };
  if (controller_ck_39_1) {
    sub_26 = v_549;
  } else {
    sub_26 = sub_27;
  };
  if (controller_cleaner) {
    v_550 = sub_14;
    sub_25 = sub_26;
  } else {
    v_550 = sub_26;
    sub_25 = sub_14;
  };
  if (controller_ck_30_1) {
    sub_24 = v_550;
  } else {
    sub_24 = sub_25;
  };
  if (controller_worker) {
    v_554 = sub_24;
    sub_4 = sub_5;
  } else {
    v_554 = sub_5;
    sub_4 = sub_24;
  };
  if (controller_ck_28_1) {
    sub_3 = v_554;
  } else {
    sub_3 = sub_4;
  };
  sub_30 = sub_14;
  if (controller_worker) {
    v_548 = sub_30;
    sub_29 = sub_5;
  } else {
    v_548 = sub_5;
    sub_29 = sub_30;
  };
  if (controller_ck_28_1) {
    sub_28 = v_548;
  } else {
    sub_28 = sub_29;
  };
  if (controller_change_shift) {
    v_555 = sub_28;
    sub_2 = sub_3;
  } else {
    v_555 = sub_3;
    sub_2 = sub_28;
  };
  if (controller_ck_1) {
    sub_1 = v_555;
  } else {
    sub_1 = sub_2;
  };
  sub_44 = true;
  sub_43 = sub_44;
  sub_42 = sub_43;
  if (controller_c_door_1) {
    v_544 = false;
    sub_41 = sub_42;
  } else {
    v_544 = sub_42;
    sub_41 = false;
  };
  if (controller_ck_24_1) {
    sub_40 = v_544;
  } else {
    sub_40 = sub_41;
  };
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (controller_air_failed_recovered) {
    v_545 = sub_20;
    sub_37 = sub_38;
  } else {
    v_545 = sub_38;
    sub_37 = sub_20;
  };
  if (controller_ck_39_1) {
    sub_36 = v_545;
  } else {
    sub_36 = sub_37;
  };
  if (controller_cleaner) {
    v_546 = sub_36;
    sub_35 = sub_7;
  } else {
    v_546 = sub_7;
    sub_35 = sub_36;
  };
  if (controller_ck_30_1) {
    sub_34 = v_546;
  } else {
    sub_34 = sub_35;
  };
  sub_51 = sub_42;
  sub_50 = sub_51;
  sub_49 = sub_50;
  if (controller_air_failed_recovered) {
    v_542 = sub_49;
    sub_48 = sub_38;
  } else {
    v_542 = sub_38;
    sub_48 = sub_49;
  };
  if (controller_ck_39_1) {
    sub_47 = v_542;
  } else {
    sub_47 = sub_48;
  };
  if (controller_cleaner) {
    v_543 = sub_36;
    sub_46 = sub_47;
  } else {
    v_543 = sub_47;
    sub_46 = sub_36;
  };
  if (controller_ck_30_1) {
    sub_45 = v_543;
  } else {
    sub_45 = sub_46;
  };
  if (controller_worker) {
    v_547 = sub_45;
    sub_33 = sub_34;
  } else {
    v_547 = sub_34;
    sub_33 = sub_45;
  };
  if (controller_ck_28_1) {
    sub_32 = v_547;
  } else {
    sub_32 = sub_33;
  };
  if (controller_v_335) {
    sub_61 = false;
  } else {
    sub_61 = sub_51;
  };
  if (controller_v_334) {
    sub_60 = sub_51;
  } else {
    sub_60 = sub_61;
  };
  sub_59 = sub_60;
  sub_58 = sub_59;
  if (controller_air_failed_recovered) {
    v = sub_58;
    sub_57 = sub_38;
  } else {
    v = sub_38;
    sub_57 = sub_58;
  };
  if (controller_ck_39_1) {
    sub_56 = v;
  } else {
    sub_56 = sub_57;
  };
  if (controller_cleaner) {
    v_540 = sub_36;
    sub_55 = sub_56;
  } else {
    v_540 = sub_56;
    sub_55 = sub_36;
  };
  if (controller_ck_30_1) {
    sub_54 = v_540;
  } else {
    sub_54 = sub_55;
  };
  if (controller_worker) {
    v_541 = sub_54;
    sub_53 = sub_34;
  } else {
    v_541 = sub_34;
    sub_53 = sub_54;
  };
  if (controller_ck_28_1) {
    sub_52 = v_541;
  } else {
    sub_52 = sub_53;
  };
  if (controller_change_shift) {
    v_556 = sub_52;
    sub_31 = sub_32;
  } else {
    v_556 = sub_32;
    sub_31 = sub_52;
  };
  if (controller_ck_1) {
    v_557 = v_556;
  } else {
    v_557 = sub_31;
  };
  if (p_controller_c_pc) {
    sub_0 = v_557;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_pc = sub_0;;
}

void Controller_controller__controller_controller_controller_c_door_2_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered, int controller_ck_1,
  int controller_pnr_15, int controller_ck_24_1, int controller_pnr_14,
  int controller_ck_26_1, int controller_pnr_13, int controller_ck_28_1,
  int controller_pnr_12, int controller_ck_30_1, int controller_pnr_11,
  int controller_ck_32_1, int controller_pnr_10, int controller_ck_34_1,
  int controller_pnr_9, int controller_v_335, int controller_v_334,
  int controller_pnr_8, int controller_ck_39_1, int controller_pnr_7,
  int controller_ck_42_1, int controller_pnr_6, int controller_ck_44_1,
  int controller_pnr_5, int controller_ck_46_1, int controller_pnr_4,
  int controller_ck_48_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door_2, int p_controller_c_door_1,
  int controller_c_door_1,
  Controller_controller__controller_controller_controller_c_door_2_out* _out) {
  
  int v_564;
  int v_563;
  int v_562;
  int v_561;
  int v_560;
  int v_559;
  int v_558;
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
  sub_12 = p_controller_c_door_2;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (controller_c_door_1) {
    v_560 = false;
    sub_18 = sub_10;
  } else {
    v_560 = sub_10;
    sub_18 = false;
  };
  if (controller_ck_24_1) {
    sub_17 = v_560;
  } else {
    sub_17 = sub_18;
  };
  sub_16 = sub_17;
  sub_15 = sub_16;
  if (controller_v_335) {
    sub_22 = false;
  } else {
    sub_22 = sub_9;
  };
  if (controller_v_334) {
    sub_21 = sub_9;
  } else {
    sub_21 = sub_22;
  };
  sub_20 = sub_21;
  sub_19 = sub_20;
  if (controller_air_failed_recovered) {
    v_561 = sub_19;
    sub_14 = sub_15;
  } else {
    v_561 = sub_15;
    sub_14 = sub_19;
  };
  if (controller_ck_39_1) {
    sub_13 = v_561;
  } else {
    sub_13 = sub_14;
  };
  if (controller_cleaner) {
    v_562 = sub_13;
    sub_5 = sub_6;
  } else {
    v_562 = sub_6;
    sub_5 = sub_13;
  };
  if (controller_ck_30_1) {
    sub_4 = v_562;
  } else {
    sub_4 = sub_5;
  };
  if (controller_air_failed_recovered) {
    v_558 = sub_7;
    sub_26 = sub_15;
  } else {
    v_558 = sub_15;
    sub_26 = sub_7;
  };
  if (controller_ck_39_1) {
    sub_25 = v_558;
  } else {
    sub_25 = sub_26;
  };
  if (controller_cleaner) {
    v_559 = sub_13;
    sub_24 = sub_25;
  } else {
    v_559 = sub_25;
    sub_24 = sub_13;
  };
  if (controller_ck_30_1) {
    sub_23 = v_559;
  } else {
    sub_23 = sub_24;
  };
  if (controller_worker) {
    v_563 = sub_23;
    sub_3 = sub_4;
  } else {
    v_563 = sub_4;
    sub_3 = sub_23;
  };
  if (controller_ck_28_1) {
    sub_2 = v_563;
  } else {
    sub_2 = sub_3;
  };
  sub_29 = sub_13;
  if (controller_worker) {
    v = sub_29;
    sub_28 = sub_4;
  } else {
    v = sub_4;
    sub_28 = sub_29;
  };
  if (controller_ck_28_1) {
    sub_27 = v;
  } else {
    sub_27 = sub_28;
  };
  if (controller_change_shift) {
    v_564 = sub_27;
    sub_1 = sub_2;
  } else {
    v_564 = sub_2;
    sub_1 = sub_27;
  };
  if (controller_ck_1) {
    sub_0 = v_564;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_door_2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_door_1_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered, int controller_ck_1,
  int controller_pnr_15, int controller_ck_24_1, int controller_pnr_14,
  int controller_ck_26_1, int controller_pnr_13, int controller_ck_28_1,
  int controller_pnr_12, int controller_ck_30_1, int controller_pnr_11,
  int controller_ck_32_1, int controller_pnr_10, int controller_ck_34_1,
  int controller_pnr_9, int controller_v_335, int controller_v_334,
  int controller_pnr_8, int controller_ck_39_1, int controller_pnr_7,
  int controller_ck_42_1, int controller_pnr_6, int controller_ck_44_1,
  int controller_pnr_5, int controller_ck_46_1, int controller_pnr_4,
  int controller_ck_48_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door_2, int p_controller_c_door_1,
  Controller_controller__controller_controller_controller_c_door_1_out* _out) {
  
  int v_570;
  int v_569;
  int v_568;
  int v_567;
  int v_566;
  int v_565;
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
  sub_11 = p_controller_c_door_1;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_18 = true;
  sub_17 = sub_18;
  sub_19 = false;
  if (controller_ck_24_1) {
    sub_16 = sub_19;
  } else {
    sub_16 = sub_17;
  };
  sub_15 = sub_16;
  sub_14 = sub_15;
  if (controller_v_335) {
    sub_23 = false;
  } else {
    sub_23 = sub_9;
  };
  if (controller_v_334) {
    sub_22 = sub_9;
  } else {
    sub_22 = sub_23;
  };
  sub_21 = sub_22;
  sub_20 = sub_21;
  if (controller_air_failed_recovered) {
    v_567 = sub_20;
    sub_13 = sub_14;
  } else {
    v_567 = sub_14;
    sub_13 = sub_20;
  };
  if (controller_ck_39_1) {
    sub_12 = v_567;
  } else {
    sub_12 = sub_13;
  };
  if (controller_cleaner) {
    v_568 = sub_12;
    sub_5 = sub_6;
  } else {
    v_568 = sub_6;
    sub_5 = sub_12;
  };
  if (controller_ck_30_1) {
    sub_4 = v_568;
  } else {
    sub_4 = sub_5;
  };
  if (controller_air_failed_recovered) {
    v_565 = sub_7;
    sub_27 = sub_14;
  } else {
    v_565 = sub_14;
    sub_27 = sub_7;
  };
  if (controller_ck_39_1) {
    sub_26 = v_565;
  } else {
    sub_26 = sub_27;
  };
  if (controller_cleaner) {
    v_566 = sub_12;
    sub_25 = sub_26;
  } else {
    v_566 = sub_26;
    sub_25 = sub_12;
  };
  if (controller_ck_30_1) {
    sub_24 = v_566;
  } else {
    sub_24 = sub_25;
  };
  if (controller_worker) {
    v_569 = sub_24;
    sub_3 = sub_4;
  } else {
    v_569 = sub_4;
    sub_3 = sub_24;
  };
  if (controller_ck_28_1) {
    sub_2 = v_569;
  } else {
    sub_2 = sub_3;
  };
  sub_30 = sub_12;
  if (controller_worker) {
    v = sub_30;
    sub_29 = sub_4;
  } else {
    v = sub_4;
    sub_29 = sub_30;
  };
  if (controller_ck_28_1) {
    sub_28 = v;
  } else {
    sub_28 = sub_29;
  };
  if (controller_change_shift) {
    v_570 = sub_28;
    sub_1 = sub_2;
  } else {
    v_570 = sub_2;
    sub_1 = sub_28;
  };
  if (controller_ck_1) {
    sub_0 = v_570;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_door_1 = sub_0;;
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
                                                       int controller_pnr_15,
                                                       int controller_ck_24_1,
                                                       int controller_pnr_14,
                                                       int controller_ck_26_1,
                                                       int controller_pnr_13,
                                                       int controller_ck_28_1,
                                                       int controller_pnr_12,
                                                       int controller_ck_30_1,
                                                       int controller_pnr_11,
                                                       int controller_ck_32_1,
                                                       int controller_pnr_10,
                                                       int controller_ck_34_1,
                                                       int controller_pnr_9,
                                                       int controller_v_335,
                                                       int controller_v_334,
                                                       int controller_pnr_8,
                                                       int controller_ck_39_1,
                                                       int controller_pnr_7,
                                                       int controller_ck_42_1,
                                                       int controller_pnr_6,
                                                       int controller_ck_44_1,
                                                       int controller_pnr_5,
                                                       int controller_ck_46_1,
                                                       int controller_pnr_4,
                                                       int controller_ck_48_1,
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
                                                       int p_controller_c_door_2,
                                                       int p_controller_c_door_1,
                                                       Controller_controller__controller_controller_out* _out) {
  Controller_controller__controller_controller_controller_c_window_out Controller_controller__controller_controller_controller_c_window_out_st;
  Controller_controller__controller_controller_controller_c_door_2_out Controller_controller__controller_controller_controller_c_door_2_out_st;
  Controller_controller__controller_controller_controller_c_blind_1_out Controller_controller__controller_controller_controller_c_blind_1_out_st;
  Controller_controller__controller_controller_controller_c_blind_2_out Controller_controller__controller_controller_controller_c_blind_2_out_st;
  Controller_controller__controller_controller_controller_c_door_1_out Controller_controller__controller_controller_controller_c_door_1_out_st;
  Controller_controller__controller_controller_controller_c_light_1_out Controller_controller__controller_controller_controller_c_light_1_out_st;
  Controller_controller__controller_controller_controller_c_air_1_out Controller_controller__controller_controller_controller_c_air_1_out_st;
  Controller_controller__controller_controller_controller_c_light_2_out Controller_controller__controller_controller_controller_c_light_2_out_st;
  Controller_controller__controller_controller_controller_c_closet_out Controller_controller__controller_controller_controller_c_closet_out_st;
  Controller_controller__controller_controller_controller_c_air_2_out Controller_controller__controller_controller_controller_c_air_2_out_st;
  Controller_controller__controller_controller_controller_c_pc_out Controller_controller__controller_controller_controller_c_pc_out_st;
  Controller_controller__controller_controller_controller_c_door_1_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_15,
  controller_ck_24_1, controller_pnr_14, controller_ck_26_1,
  controller_pnr_13, controller_ck_28_1, controller_pnr_12,
  controller_ck_30_1, controller_pnr_11, controller_ck_32_1,
  controller_pnr_10, controller_ck_34_1, controller_pnr_9, controller_v_335,
  controller_v_334, controller_pnr_8, controller_ck_39_1, controller_pnr_7,
  controller_ck_42_1, controller_pnr_6, controller_ck_44_1, controller_pnr_5,
  controller_ck_46_1, controller_pnr_4, controller_ck_48_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door_2, p_controller_c_door_1,
  &Controller_controller__controller_controller_controller_c_door_1_out_st);
  _out->controller_c_door_1 = Controller_controller__controller_controller_controller_c_door_1_out_st.controller_c_door_1;
  Controller_controller__controller_controller_controller_c_door_2_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_15,
  controller_ck_24_1, controller_pnr_14, controller_ck_26_1,
  controller_pnr_13, controller_ck_28_1, controller_pnr_12,
  controller_ck_30_1, controller_pnr_11, controller_ck_32_1,
  controller_pnr_10, controller_ck_34_1, controller_pnr_9, controller_v_335,
  controller_v_334, controller_pnr_8, controller_ck_39_1, controller_pnr_7,
  controller_ck_42_1, controller_pnr_6, controller_ck_44_1, controller_pnr_5,
  controller_ck_46_1, controller_pnr_4, controller_ck_48_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door_2, p_controller_c_door_1, _out->controller_c_door_1,
  &Controller_controller__controller_controller_controller_c_door_2_out_st);
  _out->controller_c_door_2 = Controller_controller__controller_controller_controller_c_door_2_out_st.controller_c_door_2;
  Controller_controller__controller_controller_controller_c_pc_step(controller_change_shift,
                                                                    controller_worker,
                                                                    controller_cleaner,
                                                                    controller_air_failed_recovered,
                                                                    controller_light_switch,
                                                                    controller_light_failed_recovered,
                                                                    controller_blind_switch,
                                                                    controller_blind_failed_recovered,
                                                                    controller_ck_1,
                                                                    controller_pnr_15,
                                                                    controller_ck_24_1,
                                                                    controller_pnr_14,
                                                                    controller_ck_26_1,
                                                                    controller_pnr_13,
                                                                    controller_ck_28_1,
                                                                    controller_pnr_12,
                                                                    controller_ck_30_1,
                                                                    controller_pnr_11,
                                                                    controller_ck_32_1,
                                                                    controller_pnr_10,
                                                                    controller_ck_34_1,
                                                                    controller_pnr_9,
                                                                    controller_v_335,
                                                                    controller_v_334,
                                                                    controller_pnr_8,
                                                                    controller_ck_39_1,
                                                                    controller_pnr_7,
                                                                    controller_ck_42_1,
                                                                    controller_pnr_6,
                                                                    controller_ck_44_1,
                                                                    controller_pnr_5,
                                                                    controller_ck_46_1,
                                                                    controller_pnr_4,
                                                                    controller_ck_48_1,
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
                                                                    p_controller_c_door_2,
                                                                    p_controller_c_door_1,
                                                                    _out->controller_c_door_2,
                                                                    _out->controller_c_door_1,
                                                                    &Controller_controller__controller_controller_controller_c_pc_out_st);
  _out->controller_c_pc = Controller_controller__controller_controller_controller_c_pc_out_st.controller_c_pc;
  Controller_controller__controller_controller_controller_c_window_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_15,
  controller_ck_24_1, controller_pnr_14, controller_ck_26_1,
  controller_pnr_13, controller_ck_28_1, controller_pnr_12,
  controller_ck_30_1, controller_pnr_11, controller_ck_32_1,
  controller_pnr_10, controller_ck_34_1, controller_pnr_9, controller_v_335,
  controller_v_334, controller_pnr_8, controller_ck_39_1, controller_pnr_7,
  controller_ck_42_1, controller_pnr_6, controller_ck_44_1, controller_pnr_5,
  controller_ck_46_1, controller_pnr_4, controller_ck_48_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door_2, p_controller_c_door_1, _out->controller_c_pc,
  _out->controller_c_door_2, _out->controller_c_door_1,
  &Controller_controller__controller_controller_controller_c_window_out_st);
  _out->controller_c_window = Controller_controller__controller_controller_controller_c_window_out_st.controller_c_window;
  Controller_controller__controller_controller_controller_c_air_1_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_15,
  controller_ck_24_1, controller_pnr_14, controller_ck_26_1,
  controller_pnr_13, controller_ck_28_1, controller_pnr_12,
  controller_ck_30_1, controller_pnr_11, controller_ck_32_1,
  controller_pnr_10, controller_ck_34_1, controller_pnr_9, controller_v_335,
  controller_v_334, controller_pnr_8, controller_ck_39_1, controller_pnr_7,
  controller_ck_42_1, controller_pnr_6, controller_ck_44_1, controller_pnr_5,
  controller_ck_46_1, controller_pnr_4, controller_ck_48_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door_2, p_controller_c_door_1, _out->controller_c_window,
  _out->controller_c_pc, _out->controller_c_door_2,
  _out->controller_c_door_1,
  &Controller_controller__controller_controller_controller_c_air_1_out_st);
  _out->controller_c_air_1 = Controller_controller__controller_controller_controller_c_air_1_out_st.controller_c_air_1;
  Controller_controller__controller_controller_controller_c_air_2_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_15,
  controller_ck_24_1, controller_pnr_14, controller_ck_26_1,
  controller_pnr_13, controller_ck_28_1, controller_pnr_12,
  controller_ck_30_1, controller_pnr_11, controller_ck_32_1,
  controller_pnr_10, controller_ck_34_1, controller_pnr_9, controller_v_335,
  controller_v_334, controller_pnr_8, controller_ck_39_1, controller_pnr_7,
  controller_ck_42_1, controller_pnr_6, controller_ck_44_1, controller_pnr_5,
  controller_ck_46_1, controller_pnr_4, controller_ck_48_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door_2, p_controller_c_door_1, _out->controller_c_air_1,
  _out->controller_c_window, _out->controller_c_pc,
  _out->controller_c_door_2, _out->controller_c_door_1,
  &Controller_controller__controller_controller_controller_c_air_2_out_st);
  _out->controller_c_air_2 = Controller_controller__controller_controller_controller_c_air_2_out_st.controller_c_air_2;
  Controller_controller__controller_controller_controller_c_closet_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_15,
  controller_ck_24_1, controller_pnr_14, controller_ck_26_1,
  controller_pnr_13, controller_ck_28_1, controller_pnr_12,
  controller_ck_30_1, controller_pnr_11, controller_ck_32_1,
  controller_pnr_10, controller_ck_34_1, controller_pnr_9, controller_v_335,
  controller_v_334, controller_pnr_8, controller_ck_39_1, controller_pnr_7,
  controller_ck_42_1, controller_pnr_6, controller_ck_44_1, controller_pnr_5,
  controller_ck_46_1, controller_pnr_4, controller_ck_48_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door_2, p_controller_c_door_1, _out->controller_c_air_2,
  _out->controller_c_air_1, _out->controller_c_window, _out->controller_c_pc,
  _out->controller_c_door_2, _out->controller_c_door_1,
  &Controller_controller__controller_controller_controller_c_closet_out_st);
  _out->controller_c_closet = Controller_controller__controller_controller_controller_c_closet_out_st.controller_c_closet;
  Controller_controller__controller_controller_controller_c_light_1_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_15,
  controller_ck_24_1, controller_pnr_14, controller_ck_26_1,
  controller_pnr_13, controller_ck_28_1, controller_pnr_12,
  controller_ck_30_1, controller_pnr_11, controller_ck_32_1,
  controller_pnr_10, controller_ck_34_1, controller_pnr_9, controller_v_335,
  controller_v_334, controller_pnr_8, controller_ck_39_1, controller_pnr_7,
  controller_ck_42_1, controller_pnr_6, controller_ck_44_1, controller_pnr_5,
  controller_ck_46_1, controller_pnr_4, controller_ck_48_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door_2, p_controller_c_door_1, _out->controller_c_closet,
  _out->controller_c_air_2, _out->controller_c_air_1,
  _out->controller_c_window, _out->controller_c_pc,
  _out->controller_c_door_2, _out->controller_c_door_1,
  &Controller_controller__controller_controller_controller_c_light_1_out_st);
  _out->controller_c_light_1 = Controller_controller__controller_controller_controller_c_light_1_out_st.controller_c_light_1;
  Controller_controller__controller_controller_controller_c_light_2_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_15,
  controller_ck_24_1, controller_pnr_14, controller_ck_26_1,
  controller_pnr_13, controller_ck_28_1, controller_pnr_12,
  controller_ck_30_1, controller_pnr_11, controller_ck_32_1,
  controller_pnr_10, controller_ck_34_1, controller_pnr_9, controller_v_335,
  controller_v_334, controller_pnr_8, controller_ck_39_1, controller_pnr_7,
  controller_ck_42_1, controller_pnr_6, controller_ck_44_1, controller_pnr_5,
  controller_ck_46_1, controller_pnr_4, controller_ck_48_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door_2, p_controller_c_door_1, _out->controller_c_light_1,
  _out->controller_c_closet, _out->controller_c_air_2,
  _out->controller_c_air_1, _out->controller_c_window, _out->controller_c_pc,
  _out->controller_c_door_2, _out->controller_c_door_1,
  &Controller_controller__controller_controller_controller_c_light_2_out_st);
  _out->controller_c_light_2 = Controller_controller__controller_controller_controller_c_light_2_out_st.controller_c_light_2;
  Controller_controller__controller_controller_controller_c_blind_1_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_15,
  controller_ck_24_1, controller_pnr_14, controller_ck_26_1,
  controller_pnr_13, controller_ck_28_1, controller_pnr_12,
  controller_ck_30_1, controller_pnr_11, controller_ck_32_1,
  controller_pnr_10, controller_ck_34_1, controller_pnr_9, controller_v_335,
  controller_v_334, controller_pnr_8, controller_ck_39_1, controller_pnr_7,
  controller_ck_42_1, controller_pnr_6, controller_ck_44_1, controller_pnr_5,
  controller_ck_46_1, controller_pnr_4, controller_ck_48_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door_2, p_controller_c_door_1, _out->controller_c_light_2,
  _out->controller_c_light_1, _out->controller_c_closet,
  _out->controller_c_air_2, _out->controller_c_air_1,
  _out->controller_c_window, _out->controller_c_pc,
  _out->controller_c_door_2, _out->controller_c_door_1,
  &Controller_controller__controller_controller_controller_c_blind_1_out_st);
  _out->controller_c_blind_1 = Controller_controller__controller_controller_controller_c_blind_1_out_st.controller_c_blind_1;
  Controller_controller__controller_controller_controller_c_blind_2_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_15,
  controller_ck_24_1, controller_pnr_14, controller_ck_26_1,
  controller_pnr_13, controller_ck_28_1, controller_pnr_12,
  controller_ck_30_1, controller_pnr_11, controller_ck_32_1,
  controller_pnr_10, controller_ck_34_1, controller_pnr_9, controller_v_335,
  controller_v_334, controller_pnr_8, controller_ck_39_1, controller_pnr_7,
  controller_ck_42_1, controller_pnr_6, controller_ck_44_1, controller_pnr_5,
  controller_ck_46_1, controller_pnr_4, controller_ck_48_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door_2, p_controller_c_door_1, _out->controller_c_blind_1,
  _out->controller_c_light_2, _out->controller_c_light_1,
  _out->controller_c_closet, _out->controller_c_air_2,
  _out->controller_c_air_1, _out->controller_c_window, _out->controller_c_pc,
  _out->controller_c_door_2, _out->controller_c_door_1,
  &Controller_controller__controller_controller_controller_c_blind_2_out_st);
  _out->controller_c_blind_2 = Controller_controller__controller_controller_controller_c_blind_2_out_st.controller_c_blind_2;
}

