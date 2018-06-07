/* --- Generated the 6/6/2018 at 23:19 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jan. 19 10:22:24 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c controller_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "controller_controller.h"

void Controller_controller__controller_controller_controller_c_oven1_step(
  int controller_push_porta, int controller_push_janela,
  int controller_rad_up1, int controller_rad_down1, int controller_rad_up2,
  int controller_rad_down2, int controller_wash_start,
  int controller_wash_finish, int controller_oven_start,
  int controller_oven_finish, int controller_temp_ok, int controller_cold,
  int controller_presence, int controller_light_switch,
  int controller_tv_switch, int controller_eco_in, int controller_comfort_in,
  int controller_v_424, int controller_v_423, int controller_pnr_8,
  int controller_v_388, int controller_v_387, int controller_v_386,
  int controller_pnr_7, int controller_v_329, int controller_v_328,
  int controller_v_327, int controller_pnr_6, int controller_ck_14_1,
  int controller_pnr_5, int controller_ck_16_1, int controller_pnr_4,
  int controller_ck_18_1, int controller_pnr_3, int controller_ck_20_1,
  int controller_pnr_2, int controller_ck_22_1, int controller_pnr_1,
  int controller_v_290, int controller_v_289, int controller_pnr,
  int p_controller_c_oven1, int p_controller_c_wash1, int p_controller_c_tv2,
  int p_controller_c_tv1, int p_controller_c_light2,
  int p_controller_c_light1, int p_controller_rad_c2,
  int p_controller_rad_c1, int p_controller_c_window,
  int p_controller_c_door, int controller_c_wash1, int controller_c_tv2,
  int controller_c_tv1, int controller_c_light2, int controller_c_light1,
  int controller_rad_c2, int controller_rad_c1, int controller_c_window,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_oven1_out* _out) {
  
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
  sub_24 = (controller_ck_22_1&&false);
  v_95 = !(controller_ck_22_1);
  sub_25 = (v_95&&false);
  if (controller_presence) {
    sub_23 = sub_24;
    sub_26 = sub_25;
  } else {
    sub_23 = sub_25;
    sub_26 = sub_24;
  };
  if (controller_ck_20_1) {
    sub_22 = sub_26;
  } else {
    sub_22 = sub_23;
  };
  if (controller_c_tv1) {
    sub_21 = sub_22;
  } else {
    sub_21 = sub_23;
  };
  sub_20 = sub_21;
  if (controller_ck_20_1) {
    v_93 = sub_23;
  } else {
    v_93 = sub_26;
  };
  if (controller_tv_switch) {
    v_94 = sub_22;
  } else {
    v_94 = v_93;
  };
  sub_29 = sub_26;
  if (controller_c_tv1) {
    sub_28 = sub_29;
  } else {
    sub_28 = v_94;
  };
  sub_27 = sub_28;
  if (controller_c_tv2) {
    sub_19 = sub_20;
  } else {
    sub_19 = sub_27;
  };
  sub_33 = sub_29;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  if (controller_ck_18_1) {
    v_97 = sub_19;
  } else {
    v_97 = sub_30;
  };
  if (controller_c_light1) {
    v_98 = sub_30;
  } else {
    v_98 = v_97;
  };
  if (controller_ck_18_1) {
    sub_18 = sub_30;
  } else {
    sub_18 = sub_19;
  };
  if (controller_c_light1) {
    v_96 = sub_30;
  } else {
    v_96 = sub_18;
  };
  if (controller_light_switch) {
    v_99 = v_96;
  } else {
    v_99 = v_98;
  };
  if (controller_c_light1) {
    sub_17 = sub_18;
  } else {
    sub_17 = sub_19;
  };
  if (controller_c_light2) {
    sub_16 = sub_17;
  } else {
    sub_16 = v_99;
  };
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (controller_ck_20_1) {
    sub_55 = sub_26;
  } else {
    sub_55 = false;
  };
  if (controller_c_tv1) {
    sub_54 = sub_55;
  } else {
    sub_54 = false;
  };
  sub_53 = sub_54;
  sub_52 = sub_53;
  if (controller_ck_20_1) {
    v_85 = false;
  } else {
    v_85 = sub_26;
  };
  if (controller_tv_switch) {
    v_86 = sub_55;
  } else {
    v_86 = v_85;
  };
  if (controller_c_tv1) {
    sub_58 = sub_29;
  } else {
    sub_58 = v_86;
  };
  sub_57 = sub_58;
  sub_56 = sub_57;
  if (controller_c_tv2) {
    sub_51 = sub_52;
  } else {
    sub_51 = sub_56;
  };
  if (controller_ck_18_1) {
    v_88 = sub_51;
  } else {
    v_88 = sub_30;
  };
  if (controller_c_light1) {
    v_89 = sub_30;
  } else {
    v_89 = v_88;
  };
  if (controller_ck_18_1) {
    sub_50 = sub_30;
  } else {
    sub_50 = sub_51;
  };
  if (controller_c_light1) {
    v_87 = sub_30;
  } else {
    v_87 = sub_50;
  };
  if (controller_light_switch) {
    v_90 = v_87;
  } else {
    v_90 = v_89;
  };
  if (controller_c_light1) {
    sub_49 = sub_50;
  } else {
    sub_49 = sub_51;
  };
  if (controller_c_light2) {
    sub_48 = sub_49;
  } else {
    sub_48 = v_90;
  };
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  if (controller_eco_in) {
    sub_69 = sub_54;
  } else {
    sub_69 = false;
  };
  if (controller_comfort_in) {
    v_75 = sub_69;
    sub_68 = sub_53;
  } else {
    v_75 = sub_53;
    sub_68 = sub_69;
  };
  if (controller_v_290) {
    sub_67 = sub_52;
  } else {
    sub_67 = sub_68;
  };
  if (controller_eco_in) {
    sub_71 = false;
  } else {
    sub_71 = sub_54;
  };
  sub_70 = sub_71;
  if (controller_v_290) {
    v_76 = v_75;
  } else {
    v_76 = sub_70;
  };
  if (controller_v_289) {
    v_77 = v_76;
  } else {
    v_77 = sub_67;
  };
  if (controller_eco_in) {
    sub_74 = sub_58;
  } else {
    sub_74 = false;
  };
  if (controller_comfort_in) {
    v_78 = sub_74;
    sub_73 = sub_57;
  } else {
    v_78 = sub_57;
    sub_73 = sub_74;
  };
  if (controller_v_290) {
    sub_72 = sub_56;
  } else {
    sub_72 = sub_73;
  };
  if (controller_eco_in) {
    sub_76 = false;
  } else {
    sub_76 = sub_58;
  };
  sub_75 = sub_76;
  if (controller_v_290) {
    v_79 = v_78;
  } else {
    v_79 = sub_75;
  };
  if (controller_v_289) {
    v_80 = v_79;
  } else {
    v_80 = sub_72;
  };
  if (controller_c_tv2) {
    sub_66 = v_77;
  } else {
    sub_66 = v_80;
  };
  if (controller_eco_in) {
    sub_81 = sub_33;
  } else {
    sub_81 = false;
  };
  if (controller_comfort_in) {
    v_73 = sub_81;
    sub_80 = sub_32;
  } else {
    v_73 = sub_32;
    sub_80 = sub_81;
  };
  if (controller_v_290) {
    sub_79 = sub_31;
  } else {
    sub_79 = sub_80;
  };
  if (controller_eco_in) {
    sub_83 = false;
  } else {
    sub_83 = sub_33;
  };
  sub_82 = sub_83;
  if (controller_v_290) {
    v_74 = v_73;
  } else {
    v_74 = sub_82;
  };
  if (controller_v_289) {
    sub_78 = v_74;
  } else {
    sub_78 = sub_79;
  };
  sub_77 = sub_78;
  if (controller_ck_18_1) {
    v_82 = sub_66;
  } else {
    v_82 = sub_77;
  };
  if (controller_c_light1) {
    v_83 = sub_77;
  } else {
    v_83 = v_82;
  };
  if (controller_ck_18_1) {
    sub_65 = sub_77;
  } else {
    sub_65 = sub_66;
  };
  if (controller_c_light1) {
    v_81 = sub_77;
  } else {
    v_81 = sub_65;
  };
  if (controller_light_switch) {
    v_84 = v_81;
  } else {
    v_84 = v_83;
  };
  if (controller_c_light1) {
    sub_64 = sub_65;
  } else {
    sub_64 = sub_66;
  };
  if (controller_c_light2) {
    sub_63 = sub_64;
  } else {
    sub_63 = v_84;
  };
  sub_62 = sub_63;
  sub_61 = sub_62;
  sub_60 = sub_61;
  sub_59 = sub_60;
  if (controller_v_328) {
    sub_43 = sub_59;
  } else {
    sub_43 = sub_44;
  };
  if (controller_v_329) {
    sub_85 = sub_59;
  } else {
    sub_85 = sub_44;
  };
  if (controller_oven_finish) {
    sub_88 = sub_48;
  } else {
    sub_88 = sub_63;
  };
  if (controller_temp_ok) {
    sub_87 = sub_46;
  } else {
    sub_87 = sub_88;
  };
  if (controller_v_329) {
    sub_86 = sub_87;
  } else {
    sub_86 = sub_44;
  };
  if (controller_v_328) {
    sub_84 = sub_86;
  } else {
    sub_84 = sub_85;
  };
  if (controller_v_327) {
    sub_42 = sub_84;
  } else {
    sub_42 = sub_43;
  };
  sub_41 = sub_42;
  sub_89 = sub_44;
  if (controller_c_wash1) {
    sub_40 = sub_41;
  } else {
    sub_40 = sub_89;
  };
  sub_90 = sub_89;
  if (controller_v_386) {
    v_91 = sub_90;
  } else {
    v_91 = sub_40;
  };
  sub_92 = sub_41;
  if (controller_v_328) {
    sub_95 = sub_59;
  } else {
    sub_95 = sub_86;
  };
  if (controller_v_327) {
    sub_94 = sub_84;
  } else {
    sub_94 = sub_95;
  };
  sub_93 = sub_94;
  if (controller_v_386) {
    sub_91 = sub_93;
  } else {
    sub_91 = sub_92;
  };
  if (controller_wash_finish) {
    sub_39 = v_91;
  } else {
    sub_39 = sub_91;
  };
  sub_96 = sub_90;
  if (controller_v_388) {
    sub_38 = sub_96;
  } else {
    sub_38 = sub_39;
  };
  if (controller_wash_finish) {
    sub_97 = sub_91;
  } else {
    sub_97 = sub_92;
  };
  if (controller_wash_start) {
    sub_99 = sub_42;
  } else {
    sub_99 = sub_44;
  };
  if (controller_v_386) {
    sub_98 = sub_99;
  } else {
    sub_98 = sub_40;
  };
  if (controller_v_388) {
    v_92 = sub_98;
  } else {
    v_92 = sub_97;
  };
  if (controller_v_387) {
    sub_37 = v_92;
  } else {
    sub_37 = sub_38;
  };
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  if (controller_v_423) {
    sub_5 = sub_34;
  } else {
    sub_5 = sub_6;
  };
  if (controller_rad_c2) {
    v_71 = false;
  } else {
    v_71 = sub_8;
  };
  if (controller_rad_up2) {
    v_72 = v_71;
  } else {
    v_72 = sub_7;
  };
  if (controller_v_423) {
    sub_101 = v_72;
  } else {
    sub_101 = sub_6;
  };
  sub_100 = sub_101;
  if (controller_rad_c1) {
    v_100 = sub_5;
  } else {
    v_100 = sub_100;
  };
  if (controller_rad_up1) {
    sub_4 = v_100;
  } else {
    sub_4 = sub_100;
  };
  if (controller_rad_c2) {
    v_67 = false;
  } else {
    v_67 = sub_36;
  };
  if (controller_rad_up2) {
    v_68 = v_67;
  } else {
    v_68 = sub_35;
  };
  if (controller_v_423) {
    sub_103 = sub_6;
  } else {
    sub_103 = sub_34;
  };
  if (controller_rad_down2) {
    v_66 = sub_9;
  } else {
    v_66 = false;
  };
  if (controller_rad_c2) {
    sub_105 = v_66;
  } else {
    sub_105 = sub_8;
  };
  sub_104 = sub_105;
  if (controller_v_423) {
    v_69 = v_68;
  } else {
    v_69 = sub_104;
  };
  if (controller_rad_down1) {
    v_70 = sub_103;
  } else {
    v_70 = v_69;
  };
  if (controller_rad_c1) {
    sub_102 = v_70;
  } else {
    sub_102 = sub_103;
  };
  if (controller_v_424) {
    sub_3 = sub_102;
  } else {
    sub_3 = sub_4;
  };
  sub_111 = sub_96;
  sub_110 = sub_111;
  sub_109 = sub_110;
  if (controller_v_423) {
    sub_108 = false;
  } else {
    sub_108 = sub_109;
  };
  if (controller_rad_c2) {
    v_63 = false;
  } else {
    v_63 = sub_111;
  };
  if (controller_rad_up2) {
    v_64 = v_63;
  } else {
    v_64 = sub_110;
  };
  if (controller_v_423) {
    sub_113 = v_64;
  } else {
    sub_113 = sub_109;
  };
  sub_112 = sub_113;
  if (controller_rad_c1) {
    v_65 = sub_108;
  } else {
    v_65 = sub_112;
  };
  if (controller_rad_up1) {
    sub_107 = v_65;
  } else {
    sub_107 = sub_112;
  };
  if (controller_v_423) {
    sub_115 = sub_109;
  } else {
    sub_115 = false;
  };
  if (controller_rad_down2) {
    v_60 = sub_96;
  } else {
    v_60 = false;
  };
  if (controller_rad_c2) {
    sub_117 = v_60;
  } else {
    sub_117 = sub_111;
  };
  sub_116 = sub_117;
  if (controller_v_423) {
    v_61 = false;
  } else {
    v_61 = sub_116;
  };
  if (controller_rad_down1) {
    v_62 = sub_115;
  } else {
    v_62 = v_61;
  };
  if (controller_rad_c1) {
    sub_114 = v_62;
  } else {
    sub_114 = sub_115;
  };
  if (controller_v_424) {
    sub_106 = sub_114;
  } else {
    sub_106 = sub_107;
  };
  if (controller_ck_16_1) {
    v_102 = sub_3;
    v_101 = sub_106;
  } else {
    v_102 = sub_106;
    v_101 = sub_3;
  };
  if (controller_push_janela) {
    v_103 = v_101;
  } else {
    v_103 = v_102;
  };
  if (controller_c_window) {
    sub_2 = v_103;
  } else {
    sub_2 = sub_3;
  };
  sub_119 = sub_106;
  sub_118 = sub_119;
  if (controller_ck_14_1) {
    v_105 = sub_2;
    v_104 = sub_118;
  } else {
    v_105 = sub_118;
    v_104 = sub_2;
  };
  if (controller_push_porta) {
    v_106 = v_104;
  } else {
    v_106 = v_105;
  };
  if (controller_c_door) {
    sub_1 = v_106;
  } else {
    sub_1 = sub_2;
  };
  v_51 = !(controller_ck_22_1);
  sub_142 = (v_51||false);
  sub_143 = (controller_ck_22_1||false);
  if (controller_presence) {
    sub_141 = sub_142;
    sub_144 = sub_143;
  } else {
    sub_141 = sub_143;
    sub_144 = sub_142;
  };
  if (controller_ck_20_1) {
    sub_140 = sub_144;
  } else {
    sub_140 = sub_141;
  };
  if (controller_c_tv1) {
    sub_139 = sub_140;
  } else {
    sub_139 = sub_141;
  };
  sub_138 = sub_139;
  if (controller_ck_20_1) {
    v_49 = sub_141;
  } else {
    v_49 = sub_144;
  };
  if (controller_tv_switch) {
    v_50 = sub_140;
  } else {
    v_50 = v_49;
  };
  sub_147 = sub_144;
  if (controller_c_tv1) {
    sub_146 = sub_147;
  } else {
    sub_146 = v_50;
  };
  sub_145 = sub_146;
  if (controller_c_tv2) {
    sub_137 = sub_138;
  } else {
    sub_137 = sub_145;
  };
  sub_151 = sub_147;
  sub_150 = sub_151;
  sub_149 = sub_150;
  sub_148 = sub_149;
  if (controller_ck_18_1) {
    v_53 = sub_137;
  } else {
    v_53 = sub_148;
  };
  if (controller_c_light1) {
    v_54 = sub_148;
  } else {
    v_54 = v_53;
  };
  if (controller_ck_18_1) {
    sub_136 = sub_148;
  } else {
    sub_136 = sub_137;
  };
  if (controller_c_light1) {
    v_52 = sub_148;
  } else {
    v_52 = sub_136;
  };
  if (controller_light_switch) {
    v_55 = v_52;
  } else {
    v_55 = v_54;
  };
  if (controller_c_light1) {
    sub_135 = sub_136;
  } else {
    sub_135 = sub_137;
  };
  if (controller_c_light2) {
    sub_134 = sub_135;
  } else {
    sub_134 = v_55;
  };
  sub_133 = sub_134;
  sub_132 = sub_133;
  sub_131 = sub_132;
  sub_130 = sub_131;
  sub_129 = sub_130;
  sub_128 = sub_129;
  sub_127 = sub_128;
  sub_126 = sub_127;
  sub_125 = sub_126;
  sub_124 = sub_125;
  if (controller_ck_20_1) {
    sub_175 = sub_144;
  } else {
    sub_175 = false;
  };
  if (controller_c_tv1) {
    sub_174 = sub_175;
  } else {
    sub_174 = false;
  };
  sub_173 = sub_174;
  if (controller_eco_in) {
    sub_176 = sub_174;
  } else {
    sub_176 = sub_54;
  };
  if (controller_comfort_in) {
    v_35 = sub_176;
    sub_172 = sub_173;
  } else {
    v_35 = sub_173;
    sub_172 = sub_176;
  };
  sub_177 = sub_173;
  if (controller_v_290) {
    sub_171 = sub_177;
  } else {
    sub_171 = sub_172;
  };
  if (controller_eco_in) {
    sub_179 = sub_54;
  } else {
    sub_179 = sub_174;
  };
  sub_178 = sub_179;
  if (controller_v_290) {
    v_36 = v_35;
  } else {
    v_36 = sub_178;
  };
  if (controller_v_289) {
    v_37 = v_36;
  } else {
    v_37 = sub_171;
  };
  if (controller_ck_20_1) {
    v_33 = false;
  } else {
    v_33 = sub_144;
  };
  if (controller_tv_switch) {
    v_34 = sub_175;
  } else {
    v_34 = v_33;
  };
  if (controller_c_tv1) {
    sub_183 = sub_147;
  } else {
    sub_183 = v_34;
  };
  sub_182 = sub_183;
  if (controller_eco_in) {
    sub_184 = sub_183;
  } else {
    sub_184 = sub_58;
  };
  if (controller_comfort_in) {
    v_38 = sub_184;
    sub_181 = sub_182;
  } else {
    v_38 = sub_182;
    sub_181 = sub_184;
  };
  sub_185 = sub_182;
  if (controller_v_290) {
    sub_180 = sub_185;
  } else {
    sub_180 = sub_181;
  };
  if (controller_eco_in) {
    sub_187 = sub_58;
  } else {
    sub_187 = sub_183;
  };
  sub_186 = sub_187;
  if (controller_v_290) {
    v_39 = v_38;
  } else {
    v_39 = sub_186;
  };
  if (controller_v_289) {
    v_40 = v_39;
  } else {
    v_40 = sub_180;
  };
  if (controller_c_tv2) {
    sub_170 = v_37;
  } else {
    sub_170 = v_40;
  };
  if (controller_eco_in) {
    sub_192 = sub_151;
  } else {
    sub_192 = sub_33;
  };
  if (controller_comfort_in) {
    v_31 = sub_192;
    sub_191 = sub_150;
  } else {
    v_31 = sub_150;
    sub_191 = sub_192;
  };
  if (controller_v_290) {
    sub_190 = sub_149;
  } else {
    sub_190 = sub_191;
  };
  if (controller_eco_in) {
    sub_194 = sub_33;
  } else {
    sub_194 = sub_151;
  };
  sub_193 = sub_194;
  if (controller_v_290) {
    v_32 = v_31;
  } else {
    v_32 = sub_193;
  };
  if (controller_v_289) {
    sub_189 = v_32;
  } else {
    sub_189 = sub_190;
  };
  sub_188 = sub_189;
  if (controller_ck_18_1) {
    v_42 = sub_170;
  } else {
    v_42 = sub_188;
  };
  if (controller_c_light1) {
    v_43 = sub_188;
  } else {
    v_43 = v_42;
  };
  if (controller_ck_18_1) {
    sub_169 = sub_188;
  } else {
    sub_169 = sub_170;
  };
  if (controller_c_light1) {
    v_41 = sub_188;
  } else {
    v_41 = sub_169;
  };
  if (controller_light_switch) {
    v_44 = v_41;
  } else {
    v_44 = v_43;
  };
  if (controller_c_light1) {
    sub_168 = sub_169;
  } else {
    sub_168 = sub_170;
  };
  if (controller_c_light2) {
    sub_167 = sub_168;
  } else {
    sub_167 = v_44;
  };
  sub_166 = sub_167;
  sub_165 = sub_166;
  sub_164 = sub_165;
  sub_163 = sub_164;
  if (controller_c_tv2) {
    sub_202 = sub_177;
  } else {
    sub_202 = sub_185;
  };
  if (controller_ck_18_1) {
    v_28 = sub_202;
  } else {
    v_28 = sub_148;
  };
  if (controller_c_light1) {
    v_29 = sub_148;
  } else {
    v_29 = v_28;
  };
  if (controller_ck_18_1) {
    sub_201 = sub_148;
  } else {
    sub_201 = sub_202;
  };
  if (controller_c_light1) {
    v_27 = sub_148;
  } else {
    v_27 = sub_201;
  };
  if (controller_light_switch) {
    v_30 = v_27;
  } else {
    v_30 = v_29;
  };
  if (controller_c_light1) {
    sub_200 = sub_201;
  } else {
    sub_200 = sub_202;
  };
  if (controller_c_light2) {
    sub_199 = sub_200;
  } else {
    sub_199 = v_30;
  };
  sub_198 = sub_199;
  sub_197 = sub_198;
  sub_196 = sub_197;
  sub_195 = sub_196;
  if (controller_v_329) {
    sub_162 = sub_195;
  } else {
    sub_162 = sub_163;
  };
  if (controller_eco_in) {
    sub_213 = sub_174;
  } else {
    sub_213 = false;
  };
  if (controller_comfort_in) {
    v_17 = sub_213;
    sub_212 = sub_173;
  } else {
    v_17 = sub_173;
    sub_212 = sub_213;
  };
  if (controller_v_290) {
    sub_211 = sub_177;
  } else {
    sub_211 = sub_212;
  };
  if (controller_eco_in) {
    sub_215 = false;
  } else {
    sub_215 = sub_174;
  };
  sub_214 = sub_215;
  if (controller_v_290) {
    v_18 = v_17;
  } else {
    v_18 = sub_214;
  };
  if (controller_v_289) {
    v_19 = v_18;
  } else {
    v_19 = sub_211;
  };
  if (controller_eco_in) {
    sub_218 = sub_183;
  } else {
    sub_218 = false;
  };
  if (controller_comfort_in) {
    v_20 = sub_218;
    sub_217 = sub_182;
  } else {
    v_20 = sub_182;
    sub_217 = sub_218;
  };
  if (controller_v_290) {
    sub_216 = sub_185;
  } else {
    sub_216 = sub_217;
  };
  if (controller_eco_in) {
    sub_220 = false;
  } else {
    sub_220 = sub_183;
  };
  sub_219 = sub_220;
  if (controller_v_290) {
    v_21 = v_20;
  } else {
    v_21 = sub_219;
  };
  if (controller_v_289) {
    v_22 = v_21;
  } else {
    v_22 = sub_216;
  };
  if (controller_c_tv2) {
    sub_210 = v_19;
  } else {
    sub_210 = v_22;
  };
  if (controller_eco_in) {
    sub_225 = sub_151;
  } else {
    sub_225 = false;
  };
  if (controller_comfort_in) {
    v_15 = sub_225;
    sub_224 = sub_150;
  } else {
    v_15 = sub_150;
    sub_224 = sub_225;
  };
  if (controller_v_290) {
    sub_223 = sub_149;
  } else {
    sub_223 = sub_224;
  };
  if (controller_eco_in) {
    sub_227 = false;
  } else {
    sub_227 = sub_151;
  };
  sub_226 = sub_227;
  if (controller_v_290) {
    v_16 = v_15;
  } else {
    v_16 = sub_226;
  };
  if (controller_v_289) {
    sub_222 = v_16;
  } else {
    sub_222 = sub_223;
  };
  sub_221 = sub_222;
  if (controller_ck_18_1) {
    v_24 = sub_210;
  } else {
    v_24 = sub_221;
  };
  if (controller_c_light1) {
    v_25 = sub_221;
  } else {
    v_25 = v_24;
  };
  if (controller_ck_18_1) {
    sub_209 = sub_221;
  } else {
    sub_209 = sub_210;
  };
  if (controller_c_light1) {
    v_23 = sub_221;
  } else {
    v_23 = sub_209;
  };
  if (controller_light_switch) {
    v_26 = v_23;
  } else {
    v_26 = v_25;
  };
  if (controller_c_light1) {
    sub_208 = sub_209;
  } else {
    sub_208 = sub_210;
  };
  if (controller_c_light2) {
    sub_207 = sub_208;
  } else {
    sub_207 = v_26;
  };
  sub_206 = sub_207;
  sub_205 = sub_206;
  sub_204 = sub_205;
  sub_203 = sub_204;
  if (controller_v_328) {
    sub_161 = sub_203;
  } else {
    sub_161 = sub_162;
  };
  if (controller_oven_start) {
    sub_231 = sub_166;
  } else {
    sub_231 = sub_198;
  };
  sub_230 = sub_231;
  sub_229 = sub_230;
  if (controller_v_329) {
    sub_228 = sub_203;
  } else {
    sub_228 = sub_229;
  };
  if (controller_oven_finish) {
    sub_234 = sub_199;
  } else {
    sub_234 = sub_207;
  };
  if (controller_temp_ok) {
    sub_233 = sub_197;
  } else {
    sub_233 = sub_234;
  };
  sub_232 = sub_233;
  if (controller_v_329) {
    v_45 = sub_232;
  } else {
    v_45 = sub_195;
  };
  if (controller_v_328) {
    v_46 = v_45;
  } else {
    v_46 = sub_228;
  };
  if (controller_v_327) {
    sub_160 = v_46;
  } else {
    sub_160 = sub_161;
  };
  sub_159 = sub_160;
  sub_235 = sub_195;
  if (controller_c_wash1) {
    sub_158 = sub_159;
  } else {
    sub_158 = sub_235;
  };
  sub_236 = sub_235;
  if (controller_v_386) {
    v_47 = sub_236;
  } else {
    v_47 = sub_158;
  };
  sub_238 = sub_159;
  if (controller_v_329) {
    sub_242 = sub_232;
  } else {
    sub_242 = sub_163;
  };
  if (controller_v_328) {
    sub_241 = sub_203;
  } else {
    sub_241 = sub_242;
  };
  if (controller_cold) {
    sub_243 = sub_164;
  } else {
    sub_243 = sub_196;
  };
  if (controller_v_329) {
    v_13 = sub_232;
  } else {
    v_13 = sub_243;
  };
  if (controller_v_328) {
    v_14 = v_13;
  } else {
    v_14 = sub_228;
  };
  if (controller_v_327) {
    sub_240 = v_14;
  } else {
    sub_240 = sub_241;
  };
  sub_239 = sub_240;
  if (controller_v_386) {
    sub_237 = sub_239;
  } else {
    sub_237 = sub_238;
  };
  if (controller_wash_finish) {
    sub_157 = v_47;
  } else {
    sub_157 = sub_237;
  };
  sub_244 = sub_236;
  if (controller_v_388) {
    sub_156 = sub_244;
  } else {
    sub_156 = sub_157;
  };
  if (controller_wash_finish) {
    sub_245 = sub_237;
  } else {
    sub_245 = sub_238;
  };
  if (controller_wash_start) {
    sub_247 = sub_160;
  } else {
    sub_247 = sub_195;
  };
  if (controller_v_386) {
    sub_246 = sub_247;
  } else {
    sub_246 = sub_158;
  };
  if (controller_v_388) {
    v_48 = sub_246;
  } else {
    v_48 = sub_245;
  };
  if (controller_v_387) {
    sub_155 = v_48;
  } else {
    sub_155 = sub_156;
  };
  sub_154 = sub_155;
  sub_153 = sub_154;
  sub_152 = sub_153;
  if (controller_v_423) {
    sub_123 = sub_152;
  } else {
    sub_123 = sub_124;
  };
  if (controller_rad_c2) {
    v_11 = false;
  } else {
    v_11 = sub_126;
  };
  if (controller_rad_up2) {
    v_12 = v_11;
  } else {
    v_12 = sub_125;
  };
  if (controller_v_423) {
    sub_249 = v_12;
  } else {
    sub_249 = sub_124;
  };
  sub_248 = sub_249;
  if (controller_rad_c1) {
    v_56 = sub_123;
  } else {
    v_56 = sub_248;
  };
  if (controller_rad_up1) {
    sub_122 = v_56;
  } else {
    sub_122 = sub_248;
  };
  if (controller_rad_c2) {
    v_7 = false;
  } else {
    v_7 = sub_154;
  };
  if (controller_rad_up2) {
    v_8 = v_7;
  } else {
    v_8 = sub_153;
  };
  if (controller_v_423) {
    sub_251 = sub_124;
  } else {
    sub_251 = sub_152;
  };
  if (controller_rad_down2) {
    v_6 = sub_127;
  } else {
    v_6 = false;
  };
  if (controller_rad_c2) {
    sub_253 = v_6;
  } else {
    sub_253 = sub_126;
  };
  sub_252 = sub_253;
  if (controller_v_423) {
    v_9 = v_8;
  } else {
    v_9 = sub_252;
  };
  if (controller_rad_down1) {
    v_10 = sub_251;
  } else {
    v_10 = v_9;
  };
  if (controller_rad_c1) {
    sub_250 = v_10;
  } else {
    sub_250 = sub_251;
  };
  if (controller_v_424) {
    sub_121 = sub_250;
  } else {
    sub_121 = sub_122;
  };
  sub_259 = sub_244;
  sub_258 = sub_259;
  sub_257 = sub_258;
  if (controller_v_423) {
    sub_256 = false;
  } else {
    sub_256 = sub_257;
  };
  if (controller_rad_c2) {
    v_3 = false;
  } else {
    v_3 = sub_259;
  };
  if (controller_rad_up2) {
    v_4 = v_3;
  } else {
    v_4 = sub_258;
  };
  if (controller_v_423) {
    sub_261 = v_4;
  } else {
    sub_261 = sub_257;
  };
  sub_260 = sub_261;
  if (controller_rad_c1) {
    v_5 = sub_256;
  } else {
    v_5 = sub_260;
  };
  if (controller_rad_up1) {
    sub_255 = v_5;
  } else {
    sub_255 = sub_260;
  };
  if (controller_v_423) {
    sub_263 = sub_257;
  } else {
    sub_263 = false;
  };
  if (controller_rad_down2) {
    v = sub_244;
  } else {
    v = false;
  };
  if (controller_rad_c2) {
    sub_265 = v;
  } else {
    sub_265 = sub_259;
  };
  sub_264 = sub_265;
  if (controller_v_423) {
    v_1 = false;
  } else {
    v_1 = sub_264;
  };
  if (controller_rad_down1) {
    v_2 = sub_263;
  } else {
    v_2 = v_1;
  };
  if (controller_rad_c1) {
    sub_262 = v_2;
  } else {
    sub_262 = sub_263;
  };
  if (controller_v_424) {
    sub_254 = sub_262;
  } else {
    sub_254 = sub_255;
  };
  if (controller_ck_16_1) {
    v_58 = sub_121;
    v_57 = sub_254;
  } else {
    v_58 = sub_254;
    v_57 = sub_121;
  };
  if (controller_push_janela) {
    v_59 = v_57;
  } else {
    v_59 = v_58;
  };
  if (controller_c_window) {
    sub_120 = v_59;
  } else {
    sub_120 = sub_121;
  };
  sub_267 = sub_254;
  sub_266 = sub_267;
  if (controller_ck_14_1) {
    v_108 = sub_120;
    v_107 = sub_266;
  } else {
    v_108 = sub_266;
    v_107 = sub_120;
  };
  if (controller_push_porta) {
    v_109 = v_107;
  } else {
    v_109 = v_108;
  };
  if (controller_c_door) {
    v_110 = v_109;
  } else {
    v_110 = sub_120;
  };
  if (p_controller_c_oven1) {
    sub_0 = v_110;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_oven1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_wash1_step(
  int controller_push_porta, int controller_push_janela,
  int controller_rad_up1, int controller_rad_down1, int controller_rad_up2,
  int controller_rad_down2, int controller_wash_start,
  int controller_wash_finish, int controller_oven_start,
  int controller_oven_finish, int controller_temp_ok, int controller_cold,
  int controller_presence, int controller_light_switch,
  int controller_tv_switch, int controller_eco_in, int controller_comfort_in,
  int controller_v_424, int controller_v_423, int controller_pnr_8,
  int controller_v_388, int controller_v_387, int controller_v_386,
  int controller_pnr_7, int controller_v_329, int controller_v_328,
  int controller_v_327, int controller_pnr_6, int controller_ck_14_1,
  int controller_pnr_5, int controller_ck_16_1, int controller_pnr_4,
  int controller_ck_18_1, int controller_pnr_3, int controller_ck_20_1,
  int controller_pnr_2, int controller_ck_22_1, int controller_pnr_1,
  int controller_v_290, int controller_v_289, int controller_pnr,
  int p_controller_c_oven1, int p_controller_c_wash1, int p_controller_c_tv2,
  int p_controller_c_tv1, int p_controller_c_light2,
  int p_controller_c_light1, int p_controller_rad_c2,
  int p_controller_rad_c1, int p_controller_c_window,
  int p_controller_c_door, int controller_c_tv2, int controller_c_tv1,
  int controller_c_light2, int controller_c_light1, int controller_rad_c2,
  int controller_rad_c1, int controller_c_window, int controller_c_door,
  Controller_controller__controller_controller_controller_c_wash1_out* _out) {
  
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
  sub_23 = (controller_ck_22_1&&false);
  v_204 = !(controller_ck_22_1);
  sub_24 = (v_204&&false);
  if (controller_presence) {
    sub_22 = sub_23;
    sub_25 = sub_24;
  } else {
    sub_22 = sub_24;
    sub_25 = sub_23;
  };
  if (controller_ck_20_1) {
    sub_21 = sub_25;
  } else {
    sub_21 = sub_22;
  };
  if (controller_c_tv1) {
    sub_20 = sub_21;
  } else {
    sub_20 = sub_22;
  };
  sub_19 = sub_20;
  if (controller_ck_20_1) {
    v_202 = sub_22;
  } else {
    v_202 = sub_25;
  };
  if (controller_tv_switch) {
    v_203 = sub_21;
  } else {
    v_203 = v_202;
  };
  sub_28 = sub_25;
  if (controller_c_tv1) {
    sub_27 = sub_28;
  } else {
    sub_27 = v_203;
  };
  sub_26 = sub_27;
  if (controller_c_tv2) {
    sub_18 = sub_19;
  } else {
    sub_18 = sub_26;
  };
  sub_32 = sub_28;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (controller_ck_18_1) {
    v_206 = sub_18;
  } else {
    v_206 = sub_29;
  };
  if (controller_c_light1) {
    v_207 = sub_29;
  } else {
    v_207 = v_206;
  };
  if (controller_ck_18_1) {
    sub_17 = sub_29;
  } else {
    sub_17 = sub_18;
  };
  if (controller_c_light1) {
    v_205 = sub_29;
  } else {
    v_205 = sub_17;
  };
  if (controller_light_switch) {
    v_208 = v_205;
  } else {
    v_208 = v_207;
  };
  if (controller_c_light1) {
    sub_16 = sub_17;
  } else {
    sub_16 = sub_18;
  };
  if (controller_c_light2) {
    sub_15 = sub_16;
  } else {
    sub_15 = v_208;
  };
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (controller_ck_20_1) {
    sub_51 = sub_25;
  } else {
    sub_51 = false;
  };
  if (controller_c_tv1) {
    sub_50 = sub_51;
  } else {
    sub_50 = false;
  };
  sub_49 = sub_50;
  sub_48 = sub_49;
  if (controller_ck_20_1) {
    v_195 = false;
  } else {
    v_195 = sub_25;
  };
  if (controller_tv_switch) {
    v_196 = sub_51;
  } else {
    v_196 = v_195;
  };
  if (controller_c_tv1) {
    sub_54 = sub_28;
  } else {
    sub_54 = v_196;
  };
  sub_53 = sub_54;
  sub_52 = sub_53;
  if (controller_c_tv2) {
    sub_47 = sub_48;
  } else {
    sub_47 = sub_52;
  };
  if (controller_ck_18_1) {
    v_198 = sub_47;
  } else {
    v_198 = sub_29;
  };
  if (controller_c_light1) {
    v_199 = sub_29;
  } else {
    v_199 = v_198;
  };
  if (controller_ck_18_1) {
    sub_46 = sub_29;
  } else {
    sub_46 = sub_47;
  };
  if (controller_c_light1) {
    v_197 = sub_29;
  } else {
    v_197 = sub_46;
  };
  if (controller_light_switch) {
    v_200 = v_197;
  } else {
    v_200 = v_199;
  };
  if (controller_c_light1) {
    sub_45 = sub_46;
  } else {
    sub_45 = sub_47;
  };
  if (controller_c_light2) {
    sub_44 = sub_45;
  } else {
    sub_44 = v_200;
  };
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  if (controller_eco_in) {
    sub_69 = sub_50;
  } else {
    sub_69 = false;
  };
  if (controller_comfort_in) {
    v_185 = sub_69;
    sub_68 = sub_49;
  } else {
    v_185 = sub_49;
    sub_68 = sub_69;
  };
  if (controller_v_290) {
    sub_67 = sub_48;
  } else {
    sub_67 = sub_68;
  };
  if (controller_eco_in) {
    sub_71 = false;
  } else {
    sub_71 = sub_50;
  };
  sub_70 = sub_71;
  if (controller_v_290) {
    v_186 = v_185;
  } else {
    v_186 = sub_70;
  };
  if (controller_v_289) {
    v_187 = v_186;
  } else {
    v_187 = sub_67;
  };
  if (controller_eco_in) {
    sub_74 = sub_54;
  } else {
    sub_74 = false;
  };
  if (controller_comfort_in) {
    v_188 = sub_74;
    sub_73 = sub_53;
  } else {
    v_188 = sub_53;
    sub_73 = sub_74;
  };
  if (controller_v_290) {
    sub_72 = sub_52;
  } else {
    sub_72 = sub_73;
  };
  if (controller_eco_in) {
    sub_76 = false;
  } else {
    sub_76 = sub_54;
  };
  sub_75 = sub_76;
  if (controller_v_290) {
    v_189 = v_188;
  } else {
    v_189 = sub_75;
  };
  if (controller_v_289) {
    v_190 = v_189;
  } else {
    v_190 = sub_72;
  };
  if (controller_c_tv2) {
    sub_66 = v_187;
  } else {
    sub_66 = v_190;
  };
  if (controller_eco_in) {
    sub_81 = sub_32;
  } else {
    sub_81 = false;
  };
  if (controller_comfort_in) {
    v_183 = sub_81;
    sub_80 = sub_31;
  } else {
    v_183 = sub_31;
    sub_80 = sub_81;
  };
  if (controller_v_290) {
    sub_79 = sub_30;
  } else {
    sub_79 = sub_80;
  };
  if (controller_eco_in) {
    sub_83 = false;
  } else {
    sub_83 = sub_32;
  };
  sub_82 = sub_83;
  if (controller_v_290) {
    v_184 = v_183;
  } else {
    v_184 = sub_82;
  };
  if (controller_v_289) {
    sub_78 = v_184;
  } else {
    sub_78 = sub_79;
  };
  sub_77 = sub_78;
  if (controller_ck_18_1) {
    v_192 = sub_66;
  } else {
    v_192 = sub_77;
  };
  if (controller_c_light1) {
    v_193 = sub_77;
  } else {
    v_193 = v_192;
  };
  if (controller_ck_18_1) {
    sub_65 = sub_77;
  } else {
    sub_65 = sub_66;
  };
  if (controller_c_light1) {
    v_191 = sub_77;
  } else {
    v_191 = sub_65;
  };
  if (controller_light_switch) {
    v_194 = v_191;
  } else {
    v_194 = v_193;
  };
  if (controller_c_light1) {
    sub_64 = sub_65;
  } else {
    sub_64 = sub_66;
  };
  if (controller_c_light2) {
    sub_63 = sub_64;
  } else {
    sub_63 = v_194;
  };
  sub_62 = sub_63;
  sub_61 = sub_62;
  sub_60 = sub_61;
  sub_59 = sub_60;
  if (controller_v_328) {
    sub_58 = sub_59;
  } else {
    sub_58 = sub_40;
  };
  if (controller_v_329) {
    sub_85 = sub_59;
  } else {
    sub_85 = sub_40;
  };
  if (controller_oven_finish) {
    sub_88 = sub_44;
  } else {
    sub_88 = sub_63;
  };
  if (controller_temp_ok) {
    sub_87 = sub_42;
  } else {
    sub_87 = sub_88;
  };
  if (controller_v_329) {
    sub_86 = sub_87;
  } else {
    sub_86 = sub_40;
  };
  if (controller_v_328) {
    sub_84 = sub_86;
  } else {
    sub_84 = sub_85;
  };
  if (controller_v_327) {
    sub_57 = sub_84;
  } else {
    sub_57 = sub_58;
  };
  sub_56 = sub_57;
  if (controller_v_328) {
    sub_90 = sub_59;
  } else {
    sub_90 = sub_86;
  };
  if (controller_v_327) {
    sub_89 = sub_84;
  } else {
    sub_89 = sub_90;
  };
  if (controller_v_386) {
    sub_55 = sub_89;
  } else {
    sub_55 = sub_56;
  };
  if (controller_wash_finish) {
    sub_38 = sub_39;
  } else {
    sub_38 = sub_55;
  };
  sub_91 = sub_39;
  if (controller_v_388) {
    sub_37 = sub_91;
  } else {
    sub_37 = sub_38;
  };
  if (controller_wash_finish) {
    sub_92 = sub_55;
  } else {
    sub_92 = sub_56;
  };
  if (controller_wash_start) {
    v_182 = sub_57;
  } else {
    v_182 = sub_40;
  };
  if (controller_v_386) {
    sub_93 = v_182;
  } else {
    sub_93 = sub_39;
  };
  if (controller_v_388) {
    v_201 = sub_93;
  } else {
    v_201 = sub_92;
  };
  if (controller_v_387) {
    sub_36 = v_201;
  } else {
    sub_36 = sub_37;
  };
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  if (controller_v_423) {
    sub_5 = sub_33;
  } else {
    sub_5 = sub_6;
  };
  if (controller_rad_c2) {
    v_180 = false;
  } else {
    v_180 = sub_8;
  };
  if (controller_rad_up2) {
    v_181 = v_180;
  } else {
    v_181 = sub_7;
  };
  if (controller_v_423) {
    sub_95 = v_181;
  } else {
    sub_95 = sub_6;
  };
  sub_94 = sub_95;
  if (controller_rad_c1) {
    v_209 = sub_5;
  } else {
    v_209 = sub_94;
  };
  if (controller_rad_up1) {
    sub_4 = v_209;
  } else {
    sub_4 = sub_94;
  };
  if (controller_rad_c2) {
    v_176 = false;
  } else {
    v_176 = sub_35;
  };
  if (controller_rad_up2) {
    v_177 = v_176;
  } else {
    v_177 = sub_34;
  };
  if (controller_v_423) {
    sub_97 = sub_6;
  } else {
    sub_97 = sub_33;
  };
  if (controller_rad_down2) {
    v_175 = sub_9;
  } else {
    v_175 = false;
  };
  if (controller_rad_c2) {
    sub_99 = v_175;
  } else {
    sub_99 = sub_8;
  };
  sub_98 = sub_99;
  if (controller_v_423) {
    v_178 = v_177;
  } else {
    v_178 = sub_98;
  };
  if (controller_rad_down1) {
    v_179 = sub_97;
  } else {
    v_179 = v_178;
  };
  if (controller_rad_c1) {
    sub_96 = v_179;
  } else {
    sub_96 = sub_97;
  };
  if (controller_v_424) {
    sub_3 = sub_96;
  } else {
    sub_3 = sub_4;
  };
  sub_105 = sub_91;
  sub_104 = sub_105;
  sub_103 = sub_104;
  if (controller_v_423) {
    sub_102 = false;
  } else {
    sub_102 = sub_103;
  };
  if (controller_rad_c2) {
    v_172 = false;
  } else {
    v_172 = sub_105;
  };
  if (controller_rad_up2) {
    v_173 = v_172;
  } else {
    v_173 = sub_104;
  };
  if (controller_v_423) {
    sub_107 = v_173;
  } else {
    sub_107 = sub_103;
  };
  sub_106 = sub_107;
  if (controller_rad_c1) {
    v_174 = sub_102;
  } else {
    v_174 = sub_106;
  };
  if (controller_rad_up1) {
    sub_101 = v_174;
  } else {
    sub_101 = sub_106;
  };
  if (controller_v_423) {
    sub_109 = sub_103;
  } else {
    sub_109 = false;
  };
  if (controller_rad_down2) {
    v_169 = sub_91;
  } else {
    v_169 = false;
  };
  if (controller_rad_c2) {
    sub_111 = v_169;
  } else {
    sub_111 = sub_105;
  };
  sub_110 = sub_111;
  if (controller_v_423) {
    v_170 = false;
  } else {
    v_170 = sub_110;
  };
  if (controller_rad_down1) {
    v_171 = sub_109;
  } else {
    v_171 = v_170;
  };
  if (controller_rad_c1) {
    sub_108 = v_171;
  } else {
    sub_108 = sub_109;
  };
  if (controller_v_424) {
    sub_100 = sub_108;
  } else {
    sub_100 = sub_101;
  };
  if (controller_ck_16_1) {
    v_211 = sub_3;
    v_210 = sub_100;
  } else {
    v_211 = sub_100;
    v_210 = sub_3;
  };
  if (controller_push_janela) {
    v_212 = v_210;
  } else {
    v_212 = v_211;
  };
  if (controller_c_window) {
    sub_2 = v_212;
  } else {
    sub_2 = sub_3;
  };
  sub_113 = sub_100;
  sub_112 = sub_113;
  if (controller_ck_14_1) {
    v_214 = sub_2;
    v_213 = sub_112;
  } else {
    v_214 = sub_112;
    v_213 = sub_2;
  };
  if (controller_push_porta) {
    v_215 = v_213;
  } else {
    v_215 = v_214;
  };
  if (controller_c_door) {
    sub_1 = v_215;
  } else {
    sub_1 = sub_2;
  };
  v_160 = !(controller_ck_22_1);
  sub_135 = (v_160||false);
  sub_136 = (controller_ck_22_1||false);
  if (controller_presence) {
    sub_134 = sub_135;
    sub_137 = sub_136;
  } else {
    sub_134 = sub_136;
    sub_137 = sub_135;
  };
  if (controller_ck_20_1) {
    sub_133 = sub_137;
  } else {
    sub_133 = sub_134;
  };
  if (controller_c_tv1) {
    sub_132 = sub_133;
  } else {
    sub_132 = sub_134;
  };
  sub_131 = sub_132;
  if (controller_ck_20_1) {
    v_158 = sub_134;
  } else {
    v_158 = sub_137;
  };
  if (controller_tv_switch) {
    v_159 = sub_133;
  } else {
    v_159 = v_158;
  };
  sub_140 = sub_137;
  if (controller_c_tv1) {
    sub_139 = sub_140;
  } else {
    sub_139 = v_159;
  };
  sub_138 = sub_139;
  if (controller_c_tv2) {
    sub_130 = sub_131;
  } else {
    sub_130 = sub_138;
  };
  sub_144 = sub_140;
  sub_143 = sub_144;
  sub_142 = sub_143;
  sub_141 = sub_142;
  if (controller_ck_18_1) {
    v_162 = sub_130;
  } else {
    v_162 = sub_141;
  };
  if (controller_c_light1) {
    v_163 = sub_141;
  } else {
    v_163 = v_162;
  };
  if (controller_ck_18_1) {
    sub_129 = sub_141;
  } else {
    sub_129 = sub_130;
  };
  if (controller_c_light1) {
    v_161 = sub_141;
  } else {
    v_161 = sub_129;
  };
  if (controller_light_switch) {
    v_164 = v_161;
  } else {
    v_164 = v_163;
  };
  if (controller_c_light1) {
    sub_128 = sub_129;
  } else {
    sub_128 = sub_130;
  };
  if (controller_c_light2) {
    sub_127 = sub_128;
  } else {
    sub_127 = v_164;
  };
  sub_126 = sub_127;
  sub_125 = sub_126;
  sub_124 = sub_125;
  sub_123 = sub_124;
  sub_122 = sub_123;
  sub_121 = sub_122;
  sub_120 = sub_121;
  sub_119 = sub_120;
  sub_118 = sub_119;
  if (controller_ck_20_1) {
    sub_165 = sub_137;
  } else {
    sub_165 = false;
  };
  if (controller_c_tv1) {
    sub_164 = sub_165;
  } else {
    sub_164 = false;
  };
  sub_163 = sub_164;
  sub_162 = sub_163;
  if (controller_ck_20_1) {
    v_148 = false;
  } else {
    v_148 = sub_137;
  };
  if (controller_tv_switch) {
    v_149 = sub_165;
  } else {
    v_149 = v_148;
  };
  if (controller_c_tv1) {
    sub_168 = sub_140;
  } else {
    sub_168 = v_149;
  };
  sub_167 = sub_168;
  sub_166 = sub_167;
  if (controller_c_tv2) {
    sub_161 = sub_162;
  } else {
    sub_161 = sub_166;
  };
  if (controller_ck_18_1) {
    v_151 = sub_161;
  } else {
    v_151 = sub_141;
  };
  if (controller_c_light1) {
    v_152 = sub_141;
  } else {
    v_152 = v_151;
  };
  if (controller_ck_18_1) {
    sub_160 = sub_141;
  } else {
    sub_160 = sub_161;
  };
  if (controller_c_light1) {
    v_150 = sub_141;
  } else {
    v_150 = sub_160;
  };
  if (controller_light_switch) {
    v_153 = v_150;
  } else {
    v_153 = v_152;
  };
  if (controller_c_light1) {
    sub_159 = sub_160;
  } else {
    sub_159 = sub_161;
  };
  if (controller_c_light2) {
    sub_158 = sub_159;
  } else {
    sub_158 = v_153;
  };
  sub_157 = sub_158;
  sub_156 = sub_157;
  sub_155 = sub_156;
  sub_154 = sub_155;
  if (controller_eco_in) {
    sub_179 = sub_164;
  } else {
    sub_179 = sub_50;
  };
  if (controller_comfort_in) {
    v_138 = sub_179;
    sub_178 = sub_163;
  } else {
    v_138 = sub_163;
    sub_178 = sub_179;
  };
  if (controller_v_290) {
    sub_177 = sub_162;
  } else {
    sub_177 = sub_178;
  };
  if (controller_eco_in) {
    sub_181 = sub_50;
  } else {
    sub_181 = sub_164;
  };
  sub_180 = sub_181;
  if (controller_v_290) {
    v_139 = v_138;
  } else {
    v_139 = sub_180;
  };
  if (controller_v_289) {
    v_140 = v_139;
  } else {
    v_140 = sub_177;
  };
  if (controller_eco_in) {
    sub_184 = sub_168;
  } else {
    sub_184 = sub_54;
  };
  if (controller_comfort_in) {
    v_141 = sub_184;
    sub_183 = sub_167;
  } else {
    v_141 = sub_167;
    sub_183 = sub_184;
  };
  if (controller_v_290) {
    sub_182 = sub_166;
  } else {
    sub_182 = sub_183;
  };
  if (controller_eco_in) {
    sub_186 = sub_54;
  } else {
    sub_186 = sub_168;
  };
  sub_185 = sub_186;
  if (controller_v_290) {
    v_142 = v_141;
  } else {
    v_142 = sub_185;
  };
  if (controller_v_289) {
    v_143 = v_142;
  } else {
    v_143 = sub_182;
  };
  if (controller_c_tv2) {
    sub_176 = v_140;
  } else {
    sub_176 = v_143;
  };
  if (controller_eco_in) {
    sub_191 = sub_144;
  } else {
    sub_191 = sub_32;
  };
  if (controller_comfort_in) {
    v_136 = sub_191;
    sub_190 = sub_143;
  } else {
    v_136 = sub_143;
    sub_190 = sub_191;
  };
  if (controller_v_290) {
    sub_189 = sub_142;
  } else {
    sub_189 = sub_190;
  };
  if (controller_eco_in) {
    sub_193 = sub_32;
  } else {
    sub_193 = sub_144;
  };
  sub_192 = sub_193;
  if (controller_v_290) {
    v_137 = v_136;
  } else {
    v_137 = sub_192;
  };
  if (controller_v_289) {
    sub_188 = v_137;
  } else {
    sub_188 = sub_189;
  };
  sub_187 = sub_188;
  if (controller_ck_18_1) {
    v_145 = sub_176;
  } else {
    v_145 = sub_187;
  };
  if (controller_c_light1) {
    v_146 = sub_187;
  } else {
    v_146 = v_145;
  };
  if (controller_ck_18_1) {
    sub_175 = sub_187;
  } else {
    sub_175 = sub_176;
  };
  if (controller_c_light1) {
    v_144 = sub_187;
  } else {
    v_144 = sub_175;
  };
  if (controller_light_switch) {
    v_147 = v_144;
  } else {
    v_147 = v_146;
  };
  if (controller_c_light1) {
    sub_174 = sub_175;
  } else {
    sub_174 = sub_176;
  };
  if (controller_c_light2) {
    sub_173 = sub_174;
  } else {
    sub_173 = v_147;
  };
  sub_172 = sub_173;
  sub_171 = sub_172;
  sub_170 = sub_171;
  sub_169 = sub_170;
  if (controller_v_328) {
    sub_153 = sub_169;
  } else {
    sub_153 = sub_154;
  };
  if (controller_v_329) {
    sub_194 = sub_169;
  } else {
    sub_194 = sub_154;
  };
  if (controller_oven_finish) {
    sub_196 = sub_158;
  } else {
    sub_196 = sub_173;
  };
  if (controller_temp_ok) {
    sub_195 = sub_156;
  } else {
    sub_195 = sub_196;
  };
  if (controller_v_329) {
    v_154 = sub_195;
  } else {
    v_154 = sub_154;
  };
  if (controller_v_328) {
    v_155 = v_154;
  } else {
    v_155 = sub_194;
  };
  if (controller_v_327) {
    sub_152 = v_155;
  } else {
    sub_152 = sub_153;
  };
  sub_151 = sub_152;
  sub_197 = sub_154;
  if (controller_v_386) {
    v_156 = sub_197;
  } else {
    v_156 = sub_151;
  };
  if (controller_eco_in) {
    sub_212 = sub_164;
  } else {
    sub_212 = false;
  };
  if (controller_comfort_in) {
    v_126 = sub_212;
    sub_211 = sub_163;
  } else {
    v_126 = sub_163;
    sub_211 = sub_212;
  };
  if (controller_v_290) {
    sub_210 = sub_162;
  } else {
    sub_210 = sub_211;
  };
  if (controller_eco_in) {
    sub_214 = false;
  } else {
    sub_214 = sub_164;
  };
  sub_213 = sub_214;
  if (controller_v_290) {
    v_127 = v_126;
  } else {
    v_127 = sub_213;
  };
  if (controller_v_289) {
    v_128 = v_127;
  } else {
    v_128 = sub_210;
  };
  if (controller_eco_in) {
    sub_217 = sub_168;
  } else {
    sub_217 = false;
  };
  if (controller_comfort_in) {
    v_129 = sub_217;
    sub_216 = sub_167;
  } else {
    v_129 = sub_167;
    sub_216 = sub_217;
  };
  if (controller_v_290) {
    sub_215 = sub_166;
  } else {
    sub_215 = sub_216;
  };
  if (controller_eco_in) {
    sub_219 = false;
  } else {
    sub_219 = sub_168;
  };
  sub_218 = sub_219;
  if (controller_v_290) {
    v_130 = v_129;
  } else {
    v_130 = sub_218;
  };
  if (controller_v_289) {
    v_131 = v_130;
  } else {
    v_131 = sub_215;
  };
  if (controller_c_tv2) {
    sub_209 = v_128;
  } else {
    sub_209 = v_131;
  };
  if (controller_eco_in) {
    sub_224 = sub_144;
  } else {
    sub_224 = false;
  };
  if (controller_comfort_in) {
    v_124 = sub_224;
    sub_223 = sub_143;
  } else {
    v_124 = sub_143;
    sub_223 = sub_224;
  };
  if (controller_v_290) {
    sub_222 = sub_142;
  } else {
    sub_222 = sub_223;
  };
  if (controller_eco_in) {
    sub_226 = false;
  } else {
    sub_226 = sub_144;
  };
  sub_225 = sub_226;
  if (controller_v_290) {
    v_125 = v_124;
  } else {
    v_125 = sub_225;
  };
  if (controller_v_289) {
    sub_221 = v_125;
  } else {
    sub_221 = sub_222;
  };
  sub_220 = sub_221;
  if (controller_ck_18_1) {
    v_133 = sub_209;
  } else {
    v_133 = sub_220;
  };
  if (controller_c_light1) {
    v_134 = sub_220;
  } else {
    v_134 = v_133;
  };
  if (controller_ck_18_1) {
    sub_208 = sub_220;
  } else {
    sub_208 = sub_209;
  };
  if (controller_c_light1) {
    v_132 = sub_220;
  } else {
    v_132 = sub_208;
  };
  if (controller_light_switch) {
    v_135 = v_132;
  } else {
    v_135 = v_134;
  };
  if (controller_c_light1) {
    sub_207 = sub_208;
  } else {
    sub_207 = sub_209;
  };
  if (controller_c_light2) {
    sub_206 = sub_207;
  } else {
    sub_206 = v_135;
  };
  sub_205 = sub_206;
  sub_204 = sub_205;
  sub_203 = sub_204;
  sub_202 = sub_203;
  if (controller_v_328) {
    sub_201 = sub_202;
  } else {
    sub_201 = sub_154;
  };
  if (controller_v_329) {
    sub_228 = sub_202;
  } else {
    sub_228 = sub_154;
  };
  if (controller_oven_finish) {
    sub_231 = sub_158;
  } else {
    sub_231 = sub_206;
  };
  if (controller_temp_ok) {
    sub_230 = sub_156;
  } else {
    sub_230 = sub_231;
  };
  if (controller_v_329) {
    sub_229 = sub_230;
  } else {
    sub_229 = sub_154;
  };
  if (controller_v_328) {
    sub_227 = sub_229;
  } else {
    sub_227 = sub_228;
  };
  if (controller_v_327) {
    sub_200 = sub_227;
  } else {
    sub_200 = sub_201;
  };
  sub_199 = sub_200;
  if (controller_v_328) {
    sub_233 = sub_202;
  } else {
    sub_233 = sub_229;
  };
  if (controller_v_327) {
    sub_232 = sub_227;
  } else {
    sub_232 = sub_233;
  };
  if (controller_v_386) {
    sub_198 = sub_232;
  } else {
    sub_198 = sub_199;
  };
  if (controller_wash_finish) {
    sub_150 = v_156;
  } else {
    sub_150 = sub_198;
  };
  sub_234 = sub_197;
  if (controller_v_388) {
    sub_149 = sub_234;
  } else {
    sub_149 = sub_150;
  };
  if (controller_wash_finish) {
    sub_235 = sub_198;
  } else {
    sub_235 = sub_199;
  };
  if (controller_wash_start) {
    v_123 = sub_200;
  } else {
    v_123 = sub_154;
  };
  if (controller_v_386) {
    sub_236 = v_123;
  } else {
    sub_236 = sub_151;
  };
  if (controller_v_388) {
    v_157 = sub_236;
  } else {
    v_157 = sub_235;
  };
  if (controller_v_387) {
    sub_148 = v_157;
  } else {
    sub_148 = sub_149;
  };
  sub_147 = sub_148;
  sub_146 = sub_147;
  sub_145 = sub_146;
  if (controller_v_423) {
    sub_117 = sub_145;
  } else {
    sub_117 = sub_118;
  };
  if (controller_rad_c2) {
    v_121 = false;
  } else {
    v_121 = sub_120;
  };
  if (controller_rad_up2) {
    v_122 = v_121;
  } else {
    v_122 = sub_119;
  };
  if (controller_v_423) {
    sub_238 = v_122;
  } else {
    sub_238 = sub_118;
  };
  sub_237 = sub_238;
  if (controller_rad_c1) {
    v_165 = sub_117;
  } else {
    v_165 = sub_237;
  };
  if (controller_rad_up1) {
    sub_116 = v_165;
  } else {
    sub_116 = sub_237;
  };
  if (controller_rad_c2) {
    v_117 = false;
  } else {
    v_117 = sub_147;
  };
  if (controller_rad_up2) {
    v_118 = v_117;
  } else {
    v_118 = sub_146;
  };
  if (controller_v_423) {
    sub_240 = sub_118;
  } else {
    sub_240 = sub_145;
  };
  if (controller_rad_down2) {
    v_116 = sub_121;
  } else {
    v_116 = false;
  };
  if (controller_rad_c2) {
    sub_242 = v_116;
  } else {
    sub_242 = sub_120;
  };
  sub_241 = sub_242;
  if (controller_v_423) {
    v_119 = v_118;
  } else {
    v_119 = sub_241;
  };
  if (controller_rad_down1) {
    v_120 = sub_240;
  } else {
    v_120 = v_119;
  };
  if (controller_rad_c1) {
    sub_239 = v_120;
  } else {
    sub_239 = sub_240;
  };
  if (controller_v_424) {
    sub_115 = sub_239;
  } else {
    sub_115 = sub_116;
  };
  sub_248 = sub_234;
  sub_247 = sub_248;
  sub_246 = sub_247;
  if (controller_v_423) {
    sub_245 = false;
  } else {
    sub_245 = sub_246;
  };
  if (controller_rad_c2) {
    v_113 = false;
  } else {
    v_113 = sub_248;
  };
  if (controller_rad_up2) {
    v_114 = v_113;
  } else {
    v_114 = sub_247;
  };
  if (controller_v_423) {
    sub_250 = v_114;
  } else {
    sub_250 = sub_246;
  };
  sub_249 = sub_250;
  if (controller_rad_c1) {
    v_115 = sub_245;
  } else {
    v_115 = sub_249;
  };
  if (controller_rad_up1) {
    sub_244 = v_115;
  } else {
    sub_244 = sub_249;
  };
  if (controller_v_423) {
    sub_252 = sub_246;
  } else {
    sub_252 = false;
  };
  if (controller_rad_down2) {
    v = sub_234;
  } else {
    v = false;
  };
  if (controller_rad_c2) {
    sub_254 = v;
  } else {
    sub_254 = sub_248;
  };
  sub_253 = sub_254;
  if (controller_v_423) {
    v_111 = false;
  } else {
    v_111 = sub_253;
  };
  if (controller_rad_down1) {
    v_112 = sub_252;
  } else {
    v_112 = v_111;
  };
  if (controller_rad_c1) {
    sub_251 = v_112;
  } else {
    sub_251 = sub_252;
  };
  if (controller_v_424) {
    sub_243 = sub_251;
  } else {
    sub_243 = sub_244;
  };
  if (controller_ck_16_1) {
    v_167 = sub_115;
    v_166 = sub_243;
  } else {
    v_167 = sub_243;
    v_166 = sub_115;
  };
  if (controller_push_janela) {
    v_168 = v_166;
  } else {
    v_168 = v_167;
  };
  if (controller_c_window) {
    sub_114 = v_168;
  } else {
    sub_114 = sub_115;
  };
  sub_256 = sub_243;
  sub_255 = sub_256;
  if (controller_ck_14_1) {
    v_217 = sub_114;
    v_216 = sub_255;
  } else {
    v_217 = sub_255;
    v_216 = sub_114;
  };
  if (controller_push_porta) {
    v_218 = v_216;
  } else {
    v_218 = v_217;
  };
  if (controller_c_door) {
    v_219 = v_218;
  } else {
    v_219 = sub_114;
  };
  if (p_controller_c_wash1) {
    sub_0 = v_219;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_wash1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_tv2_step(
  int controller_push_porta, int controller_push_janela,
  int controller_rad_up1, int controller_rad_down1, int controller_rad_up2,
  int controller_rad_down2, int controller_wash_start,
  int controller_wash_finish, int controller_oven_start,
  int controller_oven_finish, int controller_temp_ok, int controller_cold,
  int controller_presence, int controller_light_switch,
  int controller_tv_switch, int controller_eco_in, int controller_comfort_in,
  int controller_v_424, int controller_v_423, int controller_pnr_8,
  int controller_v_388, int controller_v_387, int controller_v_386,
  int controller_pnr_7, int controller_v_329, int controller_v_328,
  int controller_v_327, int controller_pnr_6, int controller_ck_14_1,
  int controller_pnr_5, int controller_ck_16_1, int controller_pnr_4,
  int controller_ck_18_1, int controller_pnr_3, int controller_ck_20_1,
  int controller_pnr_2, int controller_ck_22_1, int controller_pnr_1,
  int controller_v_290, int controller_v_289, int controller_pnr,
  int p_controller_c_oven1, int p_controller_c_wash1, int p_controller_c_tv2,
  int p_controller_c_tv1, int p_controller_c_light2,
  int p_controller_c_light1, int p_controller_rad_c2,
  int p_controller_rad_c1, int p_controller_c_window,
  int p_controller_c_door, int controller_c_tv1, int controller_c_light2,
  int controller_c_light1, int controller_rad_c2, int controller_rad_c1,
  int controller_c_window, int controller_c_door,
  Controller_controller__controller_controller_controller_c_tv2_out* _out) {
  
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
  v_288 = !(controller_ck_22_1);
  if (controller_presence) {
    sub_22 = v_288;
  } else {
    sub_22 = controller_ck_22_1;
  };
  v_287 = !(controller_ck_22_1);
  sub_24 = (v_287&&false);
  sub_25 = (controller_ck_22_1&&false);
  if (controller_presence) {
    sub_23 = sub_24;
  } else {
    sub_23 = sub_25;
  };
  if (controller_ck_20_1) {
    sub_21 = sub_23;
  } else {
    sub_21 = sub_22;
  };
  if (controller_presence) {
    sub_26 = sub_25;
  } else {
    sub_26 = sub_24;
  };
  if (controller_ck_20_1) {
    v_290 = sub_26;
    v_289 = sub_22;
  } else {
    v_290 = sub_22;
    v_289 = sub_26;
  };
  if (controller_tv_switch) {
    v_291 = v_289;
  } else {
    v_291 = v_290;
  };
  if (controller_c_tv1) {
    sub_20 = sub_21;
  } else {
    sub_20 = v_291;
  };
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_30 = sub_23;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  if (controller_ck_18_1) {
    v_293 = sub_18;
  } else {
    v_293 = sub_27;
  };
  if (controller_c_light1) {
    v_294 = sub_27;
  } else {
    v_294 = v_293;
  };
  if (controller_ck_18_1) {
    sub_17 = sub_27;
  } else {
    sub_17 = sub_18;
  };
  if (controller_c_light1) {
    v_292 = sub_27;
  } else {
    v_292 = sub_17;
  };
  if (controller_light_switch) {
    v_295 = v_292;
  } else {
    v_295 = v_294;
  };
  if (controller_c_light1) {
    sub_16 = sub_17;
  } else {
    sub_16 = sub_18;
  };
  if (controller_c_light2) {
    sub_15 = sub_16;
  } else {
    sub_15 = v_295;
  };
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (controller_ck_20_1) {
    v_281 = false;
    v_280 = sub_23;
  } else {
    v_281 = sub_23;
    v_280 = false;
  };
  if (controller_tv_switch) {
    sub_48 = v_280;
  } else {
    sub_48 = v_281;
  };
  if (controller_c_tv1) {
    sub_47 = sub_30;
  } else {
    sub_47 = sub_48;
  };
  sub_46 = sub_47;
  sub_45 = sub_46;
  if (controller_ck_18_1) {
    v_283 = sub_45;
  } else {
    v_283 = sub_27;
  };
  if (controller_c_light1) {
    v_284 = sub_27;
  } else {
    v_284 = v_283;
  };
  if (controller_ck_18_1) {
    sub_44 = sub_27;
  } else {
    sub_44 = sub_45;
  };
  if (controller_c_light1) {
    v_282 = sub_27;
  } else {
    v_282 = sub_44;
  };
  if (controller_light_switch) {
    v_285 = v_282;
  } else {
    v_285 = v_284;
  };
  if (controller_c_light1) {
    sub_43 = sub_44;
  } else {
    sub_43 = sub_45;
  };
  if (controller_c_light2) {
    sub_42 = sub_43;
  } else {
    sub_42 = v_285;
  };
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  if (controller_eco_in) {
    sub_63 = sub_47;
  } else {
    sub_63 = false;
  };
  if (controller_comfort_in) {
    v_274 = sub_63;
    sub_62 = sub_46;
  } else {
    v_274 = sub_46;
    sub_62 = sub_63;
  };
  if (controller_v_290) {
    sub_61 = sub_45;
  } else {
    sub_61 = sub_62;
  };
  if (controller_eco_in) {
    sub_65 = false;
  } else {
    sub_65 = sub_47;
  };
  sub_64 = sub_65;
  if (controller_v_290) {
    v_275 = v_274;
  } else {
    v_275 = sub_64;
  };
  if (controller_v_289) {
    sub_60 = v_275;
  } else {
    sub_60 = sub_61;
  };
  if (controller_eco_in) {
    sub_69 = sub_29;
  } else {
    sub_69 = false;
  };
  if (controller_comfort_in) {
    v_272 = sub_69;
    sub_68 = sub_28;
  } else {
    v_272 = sub_28;
    sub_68 = sub_69;
  };
  if (controller_v_290) {
    sub_67 = sub_27;
  } else {
    sub_67 = sub_68;
  };
  if (controller_eco_in) {
    sub_71 = false;
  } else {
    sub_71 = sub_29;
  };
  sub_70 = sub_71;
  if (controller_v_290) {
    v_273 = v_272;
  } else {
    v_273 = sub_70;
  };
  if (controller_v_289) {
    sub_66 = v_273;
  } else {
    sub_66 = sub_67;
  };
  if (controller_ck_18_1) {
    v_277 = sub_60;
  } else {
    v_277 = sub_66;
  };
  if (controller_c_light1) {
    v_278 = sub_66;
  } else {
    v_278 = v_277;
  };
  if (controller_ck_18_1) {
    sub_59 = sub_66;
  } else {
    sub_59 = sub_60;
  };
  if (controller_c_light1) {
    v_276 = sub_66;
  } else {
    v_276 = sub_59;
  };
  if (controller_light_switch) {
    v_279 = v_276;
  } else {
    v_279 = v_278;
  };
  if (controller_c_light1) {
    sub_58 = sub_59;
  } else {
    sub_58 = sub_60;
  };
  if (controller_c_light2) {
    sub_57 = sub_58;
  } else {
    sub_57 = v_279;
  };
  sub_56 = sub_57;
  sub_55 = sub_56;
  sub_54 = sub_55;
  sub_53 = sub_54;
  if (controller_v_328) {
    sub_52 = sub_53;
  } else {
    sub_52 = sub_38;
  };
  if (controller_v_329) {
    sub_73 = sub_53;
  } else {
    sub_73 = sub_38;
  };
  if (controller_oven_finish) {
    sub_76 = sub_42;
  } else {
    sub_76 = sub_57;
  };
  if (controller_temp_ok) {
    sub_75 = sub_40;
  } else {
    sub_75 = sub_76;
  };
  if (controller_v_329) {
    sub_74 = sub_75;
  } else {
    sub_74 = sub_38;
  };
  if (controller_v_328) {
    sub_72 = sub_74;
  } else {
    sub_72 = sub_73;
  };
  if (controller_v_327) {
    sub_51 = sub_72;
  } else {
    sub_51 = sub_52;
  };
  sub_50 = sub_51;
  if (controller_v_328) {
    sub_78 = sub_53;
  } else {
    sub_78 = sub_74;
  };
  if (controller_v_327) {
    sub_77 = sub_72;
  } else {
    sub_77 = sub_78;
  };
  if (controller_v_386) {
    sub_49 = sub_77;
  } else {
    sub_49 = sub_50;
  };
  if (controller_wash_finish) {
    sub_36 = sub_37;
  } else {
    sub_36 = sub_49;
  };
  sub_79 = sub_37;
  if (controller_v_388) {
    sub_35 = sub_79;
  } else {
    sub_35 = sub_36;
  };
  if (controller_wash_finish) {
    sub_80 = sub_49;
  } else {
    sub_80 = sub_50;
  };
  if (controller_wash_start) {
    v_271 = sub_51;
  } else {
    v_271 = sub_38;
  };
  if (controller_v_386) {
    sub_81 = v_271;
  } else {
    sub_81 = sub_37;
  };
  if (controller_v_388) {
    v_286 = sub_81;
  } else {
    v_286 = sub_80;
  };
  if (controller_v_387) {
    sub_34 = v_286;
  } else {
    sub_34 = sub_35;
  };
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  if (controller_v_423) {
    sub_5 = sub_31;
  } else {
    sub_5 = sub_6;
  };
  if (controller_rad_c2) {
    v_269 = false;
  } else {
    v_269 = sub_8;
  };
  if (controller_rad_up2) {
    v_270 = v_269;
  } else {
    v_270 = sub_7;
  };
  if (controller_v_423) {
    sub_83 = v_270;
  } else {
    sub_83 = sub_6;
  };
  sub_82 = sub_83;
  if (controller_rad_c1) {
    v_296 = sub_5;
  } else {
    v_296 = sub_82;
  };
  if (controller_rad_up1) {
    sub_4 = v_296;
  } else {
    sub_4 = sub_82;
  };
  if (controller_rad_c2) {
    v_265 = false;
  } else {
    v_265 = sub_33;
  };
  if (controller_rad_up2) {
    v_266 = v_265;
  } else {
    v_266 = sub_32;
  };
  if (controller_v_423) {
    sub_85 = sub_6;
  } else {
    sub_85 = sub_31;
  };
  if (controller_rad_down2) {
    v_264 = sub_9;
  } else {
    v_264 = false;
  };
  if (controller_rad_c2) {
    sub_87 = v_264;
  } else {
    sub_87 = sub_8;
  };
  sub_86 = sub_87;
  if (controller_v_423) {
    v_267 = v_266;
  } else {
    v_267 = sub_86;
  };
  if (controller_rad_down1) {
    v_268 = sub_85;
  } else {
    v_268 = v_267;
  };
  if (controller_rad_c1) {
    sub_84 = v_268;
  } else {
    sub_84 = sub_85;
  };
  if (controller_v_424) {
    sub_3 = sub_84;
  } else {
    sub_3 = sub_4;
  };
  sub_93 = sub_79;
  sub_92 = sub_93;
  sub_91 = sub_92;
  if (controller_v_423) {
    sub_90 = false;
  } else {
    sub_90 = sub_91;
  };
  if (controller_rad_c2) {
    v_261 = false;
  } else {
    v_261 = sub_93;
  };
  if (controller_rad_up2) {
    v_262 = v_261;
  } else {
    v_262 = sub_92;
  };
  if (controller_v_423) {
    sub_95 = v_262;
  } else {
    sub_95 = sub_91;
  };
  sub_94 = sub_95;
  if (controller_rad_c1) {
    v_263 = sub_90;
  } else {
    v_263 = sub_94;
  };
  if (controller_rad_up1) {
    sub_89 = v_263;
  } else {
    sub_89 = sub_94;
  };
  if (controller_v_423) {
    sub_97 = sub_91;
  } else {
    sub_97 = false;
  };
  if (controller_rad_down2) {
    v_258 = sub_79;
  } else {
    v_258 = false;
  };
  if (controller_rad_c2) {
    sub_99 = v_258;
  } else {
    sub_99 = sub_93;
  };
  sub_98 = sub_99;
  if (controller_v_423) {
    v_259 = false;
  } else {
    v_259 = sub_98;
  };
  if (controller_rad_down1) {
    v_260 = sub_97;
  } else {
    v_260 = v_259;
  };
  if (controller_rad_c1) {
    sub_96 = v_260;
  } else {
    sub_96 = sub_97;
  };
  if (controller_v_424) {
    sub_88 = sub_96;
  } else {
    sub_88 = sub_89;
  };
  if (controller_ck_16_1) {
    v_298 = sub_3;
    v_297 = sub_88;
  } else {
    v_298 = sub_88;
    v_297 = sub_3;
  };
  if (controller_push_janela) {
    v_299 = v_297;
  } else {
    v_299 = v_298;
  };
  if (controller_c_window) {
    sub_2 = v_299;
  } else {
    sub_2 = sub_3;
  };
  sub_101 = sub_88;
  sub_100 = sub_101;
  if (controller_ck_14_1) {
    v_301 = sub_2;
    v_300 = sub_100;
  } else {
    v_301 = sub_100;
    v_300 = sub_2;
  };
  if (controller_push_porta) {
    v_302 = v_300;
  } else {
    v_302 = v_301;
  };
  if (controller_c_door) {
    sub_1 = v_302;
  } else {
    sub_1 = sub_2;
  };
  sub_123 = (controller_ck_22_1||false);
  v_246 = !(controller_ck_22_1);
  sub_124 = (v_246||false);
  if (controller_presence) {
    sub_122 = sub_123;
  } else {
    sub_122 = sub_124;
  };
  if (controller_ck_20_1) {
    sub_121 = sub_122;
  } else {
    sub_121 = sub_22;
  };
  if (controller_presence) {
    sub_125 = sub_124;
  } else {
    sub_125 = sub_123;
  };
  if (controller_ck_20_1) {
    v_248 = sub_125;
    v_247 = sub_22;
  } else {
    v_248 = sub_22;
    v_247 = sub_125;
  };
  if (controller_tv_switch) {
    v_249 = v_247;
  } else {
    v_249 = v_248;
  };
  if (controller_c_tv1) {
    sub_120 = sub_121;
  } else {
    sub_120 = v_249;
  };
  sub_119 = sub_120;
  sub_118 = sub_119;
  sub_129 = sub_122;
  sub_128 = sub_129;
  sub_127 = sub_128;
  sub_126 = sub_127;
  if (controller_ck_18_1) {
    v_251 = sub_118;
  } else {
    v_251 = sub_126;
  };
  if (controller_c_light1) {
    v_252 = sub_126;
  } else {
    v_252 = v_251;
  };
  if (controller_ck_18_1) {
    sub_117 = sub_126;
  } else {
    sub_117 = sub_118;
  };
  if (controller_c_light1) {
    v_250 = sub_126;
  } else {
    v_250 = sub_117;
  };
  if (controller_light_switch) {
    v_253 = v_250;
  } else {
    v_253 = v_252;
  };
  if (controller_c_light1) {
    sub_116 = sub_117;
  } else {
    sub_116 = sub_118;
  };
  if (controller_c_light2) {
    sub_115 = sub_116;
  } else {
    sub_115 = v_253;
  };
  sub_114 = sub_115;
  sub_113 = sub_114;
  sub_112 = sub_113;
  sub_111 = sub_112;
  sub_110 = sub_111;
  sub_109 = sub_110;
  sub_108 = sub_109;
  sub_107 = sub_108;
  sub_106 = sub_107;
  if (controller_ck_20_1) {
    sub_147 = sub_122;
  } else {
    sub_147 = sub_23;
  };
  if (controller_c_tv1) {
    sub_146 = sub_147;
  } else {
    sub_146 = sub_48;
  };
  sub_145 = sub_146;
  sub_144 = sub_145;
  if (controller_ck_18_1) {
    v_242 = sub_144;
  } else {
    v_242 = sub_126;
  };
  if (controller_c_light1) {
    v_243 = sub_126;
  } else {
    v_243 = v_242;
  };
  if (controller_ck_18_1) {
    sub_143 = sub_126;
  } else {
    sub_143 = sub_144;
  };
  if (controller_c_light1) {
    v_241 = sub_126;
  } else {
    v_241 = sub_143;
  };
  if (controller_light_switch) {
    v_244 = v_241;
  } else {
    v_244 = v_243;
  };
  if (controller_c_light1) {
    sub_142 = sub_143;
  } else {
    sub_142 = sub_144;
  };
  if (controller_c_light2) {
    sub_141 = sub_142;
  } else {
    sub_141 = v_244;
  };
  sub_140 = sub_141;
  sub_139 = sub_140;
  sub_138 = sub_139;
  sub_137 = sub_138;
  sub_136 = sub_137;
  if (controller_eco_in) {
    sub_162 = sub_146;
  } else {
    sub_162 = false;
  };
  if (controller_comfort_in) {
    v_235 = sub_162;
    sub_161 = sub_145;
  } else {
    v_235 = sub_145;
    sub_161 = sub_162;
  };
  if (controller_v_290) {
    sub_160 = sub_144;
  } else {
    sub_160 = sub_161;
  };
  if (controller_eco_in) {
    sub_164 = false;
  } else {
    sub_164 = sub_146;
  };
  sub_163 = sub_164;
  if (controller_v_290) {
    v_236 = v_235;
  } else {
    v_236 = sub_163;
  };
  if (controller_v_289) {
    sub_159 = v_236;
  } else {
    sub_159 = sub_160;
  };
  if (controller_eco_in) {
    sub_168 = sub_128;
  } else {
    sub_168 = false;
  };
  if (controller_comfort_in) {
    v_233 = sub_168;
    sub_167 = sub_127;
  } else {
    v_233 = sub_127;
    sub_167 = sub_168;
  };
  if (controller_v_290) {
    sub_166 = sub_126;
  } else {
    sub_166 = sub_167;
  };
  if (controller_eco_in) {
    sub_170 = false;
  } else {
    sub_170 = sub_128;
  };
  sub_169 = sub_170;
  if (controller_v_290) {
    v_234 = v_233;
  } else {
    v_234 = sub_169;
  };
  if (controller_v_289) {
    sub_165 = v_234;
  } else {
    sub_165 = sub_166;
  };
  if (controller_ck_18_1) {
    v_238 = sub_159;
  } else {
    v_238 = sub_165;
  };
  if (controller_c_light1) {
    v_239 = sub_165;
  } else {
    v_239 = v_238;
  };
  if (controller_ck_18_1) {
    sub_158 = sub_165;
  } else {
    sub_158 = sub_159;
  };
  if (controller_c_light1) {
    v_237 = sub_165;
  } else {
    v_237 = sub_158;
  };
  if (controller_light_switch) {
    v_240 = v_237;
  } else {
    v_240 = v_239;
  };
  if (controller_c_light1) {
    sub_157 = sub_158;
  } else {
    sub_157 = sub_159;
  };
  if (controller_c_light2) {
    sub_156 = sub_157;
  } else {
    sub_156 = v_240;
  };
  sub_155 = sub_156;
  sub_154 = sub_155;
  sub_153 = sub_154;
  sub_152 = sub_153;
  if (controller_v_328) {
    sub_151 = sub_152;
  } else {
    sub_151 = sub_137;
  };
  if (controller_v_329) {
    sub_172 = sub_152;
  } else {
    sub_172 = sub_137;
  };
  if (controller_oven_finish) {
    sub_175 = sub_141;
  } else {
    sub_175 = sub_156;
  };
  if (controller_temp_ok) {
    sub_174 = sub_139;
  } else {
    sub_174 = sub_175;
  };
  if (controller_v_329) {
    sub_173 = sub_174;
  } else {
    sub_173 = sub_137;
  };
  if (controller_v_328) {
    sub_171 = sub_173;
  } else {
    sub_171 = sub_172;
  };
  if (controller_v_327) {
    sub_150 = sub_171;
  } else {
    sub_150 = sub_151;
  };
  sub_149 = sub_150;
  if (controller_v_328) {
    sub_177 = sub_152;
  } else {
    sub_177 = sub_173;
  };
  if (controller_v_327) {
    sub_176 = sub_171;
  } else {
    sub_176 = sub_177;
  };
  if (controller_v_386) {
    sub_148 = sub_176;
  } else {
    sub_148 = sub_149;
  };
  if (controller_wash_finish) {
    sub_135 = sub_136;
  } else {
    sub_135 = sub_148;
  };
  sub_178 = sub_136;
  if (controller_v_388) {
    sub_134 = sub_178;
  } else {
    sub_134 = sub_135;
  };
  if (controller_wash_finish) {
    sub_179 = sub_148;
  } else {
    sub_179 = sub_149;
  };
  if (controller_wash_start) {
    v_232 = sub_150;
  } else {
    v_232 = sub_137;
  };
  if (controller_v_386) {
    sub_180 = v_232;
  } else {
    sub_180 = sub_136;
  };
  if (controller_v_388) {
    v_245 = sub_180;
  } else {
    v_245 = sub_179;
  };
  if (controller_v_387) {
    sub_133 = v_245;
  } else {
    sub_133 = sub_134;
  };
  sub_132 = sub_133;
  sub_131 = sub_132;
  sub_130 = sub_131;
  if (controller_v_423) {
    sub_105 = sub_130;
  } else {
    sub_105 = sub_106;
  };
  if (controller_rad_c2) {
    v_230 = false;
  } else {
    v_230 = sub_108;
  };
  if (controller_rad_up2) {
    v_231 = v_230;
  } else {
    v_231 = sub_107;
  };
  if (controller_v_423) {
    sub_182 = v_231;
  } else {
    sub_182 = sub_106;
  };
  sub_181 = sub_182;
  if (controller_rad_c1) {
    v_254 = sub_105;
  } else {
    v_254 = sub_181;
  };
  if (controller_rad_up1) {
    sub_104 = v_254;
  } else {
    sub_104 = sub_181;
  };
  if (controller_rad_c2) {
    v_226 = false;
  } else {
    v_226 = sub_132;
  };
  if (controller_rad_up2) {
    v_227 = v_226;
  } else {
    v_227 = sub_131;
  };
  if (controller_v_423) {
    sub_184 = sub_106;
  } else {
    sub_184 = sub_130;
  };
  if (controller_rad_down2) {
    v_225 = sub_109;
  } else {
    v_225 = false;
  };
  if (controller_rad_c2) {
    sub_186 = v_225;
  } else {
    sub_186 = sub_108;
  };
  sub_185 = sub_186;
  if (controller_v_423) {
    v_228 = v_227;
  } else {
    v_228 = sub_185;
  };
  if (controller_rad_down1) {
    v_229 = sub_184;
  } else {
    v_229 = v_228;
  };
  if (controller_rad_c1) {
    sub_183 = v_229;
  } else {
    sub_183 = sub_184;
  };
  if (controller_v_424) {
    sub_103 = sub_183;
  } else {
    sub_103 = sub_104;
  };
  sub_192 = sub_178;
  sub_191 = sub_192;
  sub_190 = sub_191;
  if (controller_v_423) {
    sub_189 = false;
  } else {
    sub_189 = sub_190;
  };
  if (controller_rad_c2) {
    v_222 = false;
  } else {
    v_222 = sub_192;
  };
  if (controller_rad_up2) {
    v_223 = v_222;
  } else {
    v_223 = sub_191;
  };
  if (controller_v_423) {
    sub_194 = v_223;
  } else {
    sub_194 = sub_190;
  };
  sub_193 = sub_194;
  if (controller_rad_c1) {
    v_224 = sub_189;
  } else {
    v_224 = sub_193;
  };
  if (controller_rad_up1) {
    sub_188 = v_224;
  } else {
    sub_188 = sub_193;
  };
  if (controller_v_423) {
    sub_196 = sub_190;
  } else {
    sub_196 = false;
  };
  if (controller_rad_down2) {
    v = sub_178;
  } else {
    v = false;
  };
  if (controller_rad_c2) {
    sub_198 = v;
  } else {
    sub_198 = sub_192;
  };
  sub_197 = sub_198;
  if (controller_v_423) {
    v_220 = false;
  } else {
    v_220 = sub_197;
  };
  if (controller_rad_down1) {
    v_221 = sub_196;
  } else {
    v_221 = v_220;
  };
  if (controller_rad_c1) {
    sub_195 = v_221;
  } else {
    sub_195 = sub_196;
  };
  if (controller_v_424) {
    sub_187 = sub_195;
  } else {
    sub_187 = sub_188;
  };
  if (controller_ck_16_1) {
    v_256 = sub_103;
    v_255 = sub_187;
  } else {
    v_256 = sub_187;
    v_255 = sub_103;
  };
  if (controller_push_janela) {
    v_257 = v_255;
  } else {
    v_257 = v_256;
  };
  if (controller_c_window) {
    sub_102 = v_257;
  } else {
    sub_102 = sub_103;
  };
  sub_200 = sub_187;
  sub_199 = sub_200;
  if (controller_ck_14_1) {
    v_304 = sub_102;
    v_303 = sub_199;
  } else {
    v_304 = sub_199;
    v_303 = sub_102;
  };
  if (controller_push_porta) {
    v_305 = v_303;
  } else {
    v_305 = v_304;
  };
  if (controller_c_door) {
    v_306 = v_305;
  } else {
    v_306 = sub_102;
  };
  if (p_controller_c_tv2) {
    sub_0 = v_306;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_tv2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_tv1_step(
  int controller_push_porta, int controller_push_janela,
  int controller_rad_up1, int controller_rad_down1, int controller_rad_up2,
  int controller_rad_down2, int controller_wash_start,
  int controller_wash_finish, int controller_oven_start,
  int controller_oven_finish, int controller_temp_ok, int controller_cold,
  int controller_presence, int controller_light_switch,
  int controller_tv_switch, int controller_eco_in, int controller_comfort_in,
  int controller_v_424, int controller_v_423, int controller_pnr_8,
  int controller_v_388, int controller_v_387, int controller_v_386,
  int controller_pnr_7, int controller_v_329, int controller_v_328,
  int controller_v_327, int controller_pnr_6, int controller_ck_14_1,
  int controller_pnr_5, int controller_ck_16_1, int controller_pnr_4,
  int controller_ck_18_1, int controller_pnr_3, int controller_ck_20_1,
  int controller_pnr_2, int controller_ck_22_1, int controller_pnr_1,
  int controller_v_290, int controller_v_289, int controller_pnr,
  int p_controller_c_oven1, int p_controller_c_wash1, int p_controller_c_tv2,
  int p_controller_c_tv1, int p_controller_c_light2,
  int p_controller_c_light1, int p_controller_rad_c2,
  int p_controller_rad_c1, int p_controller_c_window,
  int p_controller_c_door, int controller_c_light2, int controller_c_light1,
  int controller_rad_c2, int controller_rad_c1, int controller_c_window,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_tv1_out* _out) {
  
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
  v_348 = !(controller_ck_22_1);
  if (controller_presence) {
    v_349 = controller_ck_22_1;
  } else {
    v_349 = v_348;
  };
  v_344 = !(controller_ck_22_1);
  v_341 = !(controller_ck_22_1);
  sub_21 = p_controller_c_tv1;
  v_345 = (v_344&&sub_21);
  v_343 = (controller_ck_22_1&&sub_21);
  if (controller_presence) {
    v_346 = v_343;
  } else {
    v_346 = v_345;
  };
  v_342 = (v_341||sub_21);
  v_340 = (controller_ck_22_1||sub_21);
  if (controller_presence) {
    sub_20 = v_340;
  } else {
    sub_20 = v_342;
  };
  if (controller_ck_20_1) {
    v_347 = v_346;
  } else {
    v_347 = sub_20;
  };
  sub_22 = sub_21;
  if (controller_ck_20_1) {
    v_350 = v_349;
  } else {
    v_350 = sub_22;
  };
  if (controller_tv_switch) {
    sub_19 = v_347;
  } else {
    sub_19 = v_350;
  };
  sub_18 = sub_19;
  sub_17 = sub_18;
  if (controller_ck_22_1) {
    v_339 = false;
    v_338 = sub_21;
  } else {
    v_339 = sub_21;
    v_338 = false;
  };
  if (controller_presence) {
    sub_26 = v_338;
  } else {
    sub_26 = v_339;
  };
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  if (controller_ck_18_1) {
    v_352 = sub_17;
  } else {
    v_352 = sub_23;
  };
  if (controller_c_light1) {
    v_353 = sub_23;
  } else {
    v_353 = v_352;
  };
  if (controller_ck_18_1) {
    sub_16 = sub_23;
  } else {
    sub_16 = sub_17;
  };
  if (controller_c_light1) {
    v_351 = sub_23;
  } else {
    v_351 = sub_16;
  };
  if (controller_light_switch) {
    v_354 = v_351;
  } else {
    v_354 = v_353;
  };
  if (controller_c_light1) {
    sub_15 = sub_16;
  } else {
    sub_15 = sub_17;
  };
  if (controller_c_light2) {
    sub_14 = sub_15;
  } else {
    sub_14 = v_354;
  };
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  v_329 = !(controller_ck_22_1);
  v_330 = (v_329||false);
  v_328 = (controller_ck_22_1||false);
  if (controller_presence) {
    sub_44 = v_328;
  } else {
    sub_44 = v_330;
  };
  if (controller_ck_20_1) {
    v_332 = sub_44;
    v_331 = sub_26;
  } else {
    v_332 = sub_26;
    v_331 = sub_44;
  };
  if (controller_tv_switch) {
    sub_43 = v_331;
  } else {
    sub_43 = v_332;
  };
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (controller_ck_18_1) {
    v_334 = sub_41;
  } else {
    v_334 = sub_23;
  };
  if (controller_c_light1) {
    v_335 = sub_23;
  } else {
    v_335 = v_334;
  };
  if (controller_ck_18_1) {
    sub_40 = sub_23;
  } else {
    sub_40 = sub_41;
  };
  if (controller_c_light1) {
    v_333 = sub_23;
  } else {
    v_333 = sub_40;
  };
  if (controller_light_switch) {
    v_336 = v_333;
  } else {
    v_336 = v_335;
  };
  if (controller_c_light1) {
    sub_39 = sub_40;
  } else {
    sub_39 = sub_41;
  };
  if (controller_c_light2) {
    sub_38 = sub_39;
  } else {
    sub_38 = v_336;
  };
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  if (controller_eco_in) {
    sub_59 = sub_43;
  } else {
    sub_59 = false;
  };
  if (controller_comfort_in) {
    v_322 = sub_59;
    sub_58 = sub_42;
  } else {
    v_322 = sub_42;
    sub_58 = sub_59;
  };
  if (controller_v_290) {
    sub_57 = sub_41;
  } else {
    sub_57 = sub_58;
  };
  if (controller_eco_in) {
    sub_61 = false;
  } else {
    sub_61 = sub_43;
  };
  sub_60 = sub_61;
  if (controller_v_290) {
    v_323 = v_322;
  } else {
    v_323 = sub_60;
  };
  if (controller_v_289) {
    sub_56 = v_323;
  } else {
    sub_56 = sub_57;
  };
  if (controller_eco_in) {
    sub_65 = sub_25;
  } else {
    sub_65 = false;
  };
  if (controller_comfort_in) {
    v_320 = sub_65;
    sub_64 = sub_24;
  } else {
    v_320 = sub_24;
    sub_64 = sub_65;
  };
  if (controller_v_290) {
    sub_63 = sub_23;
  } else {
    sub_63 = sub_64;
  };
  if (controller_eco_in) {
    sub_67 = false;
  } else {
    sub_67 = sub_25;
  };
  sub_66 = sub_67;
  if (controller_v_290) {
    v_321 = v_320;
  } else {
    v_321 = sub_66;
  };
  if (controller_v_289) {
    sub_62 = v_321;
  } else {
    sub_62 = sub_63;
  };
  if (controller_ck_18_1) {
    v_325 = sub_56;
  } else {
    v_325 = sub_62;
  };
  if (controller_c_light1) {
    v_326 = sub_62;
  } else {
    v_326 = v_325;
  };
  if (controller_ck_18_1) {
    sub_55 = sub_62;
  } else {
    sub_55 = sub_56;
  };
  if (controller_c_light1) {
    v_324 = sub_62;
  } else {
    v_324 = sub_55;
  };
  if (controller_light_switch) {
    v_327 = v_324;
  } else {
    v_327 = v_326;
  };
  if (controller_c_light1) {
    sub_54 = sub_55;
  } else {
    sub_54 = sub_56;
  };
  if (controller_c_light2) {
    sub_53 = sub_54;
  } else {
    sub_53 = v_327;
  };
  sub_52 = sub_53;
  sub_51 = sub_52;
  sub_50 = sub_51;
  sub_49 = sub_50;
  if (controller_v_328) {
    sub_48 = sub_49;
  } else {
    sub_48 = sub_34;
  };
  if (controller_v_329) {
    sub_69 = sub_49;
  } else {
    sub_69 = sub_34;
  };
  if (controller_oven_finish) {
    sub_72 = sub_38;
  } else {
    sub_72 = sub_53;
  };
  if (controller_temp_ok) {
    sub_71 = sub_36;
  } else {
    sub_71 = sub_72;
  };
  if (controller_v_329) {
    sub_70 = sub_71;
  } else {
    sub_70 = sub_34;
  };
  if (controller_v_328) {
    sub_68 = sub_70;
  } else {
    sub_68 = sub_69;
  };
  if (controller_v_327) {
    sub_47 = sub_68;
  } else {
    sub_47 = sub_48;
  };
  sub_46 = sub_47;
  if (controller_v_328) {
    sub_74 = sub_49;
  } else {
    sub_74 = sub_70;
  };
  if (controller_v_327) {
    sub_73 = sub_68;
  } else {
    sub_73 = sub_74;
  };
  if (controller_v_386) {
    sub_45 = sub_73;
  } else {
    sub_45 = sub_46;
  };
  if (controller_wash_finish) {
    sub_32 = sub_33;
  } else {
    sub_32 = sub_45;
  };
  sub_75 = sub_33;
  if (controller_v_388) {
    sub_31 = sub_75;
  } else {
    sub_31 = sub_32;
  };
  if (controller_wash_finish) {
    sub_76 = sub_45;
  } else {
    sub_76 = sub_46;
  };
  if (controller_wash_start) {
    v_319 = sub_47;
  } else {
    v_319 = sub_34;
  };
  if (controller_v_386) {
    sub_77 = v_319;
  } else {
    sub_77 = sub_33;
  };
  if (controller_v_388) {
    v_337 = sub_77;
  } else {
    v_337 = sub_76;
  };
  if (controller_v_387) {
    sub_30 = v_337;
  } else {
    sub_30 = sub_31;
  };
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  if (controller_v_423) {
    sub_4 = sub_27;
  } else {
    sub_4 = sub_5;
  };
  if (controller_rad_c2) {
    v_317 = false;
  } else {
    v_317 = sub_7;
  };
  if (controller_rad_up2) {
    v_318 = v_317;
  } else {
    v_318 = sub_6;
  };
  if (controller_v_423) {
    sub_79 = v_318;
  } else {
    sub_79 = sub_5;
  };
  sub_78 = sub_79;
  if (controller_rad_c1) {
    v_355 = sub_4;
  } else {
    v_355 = sub_78;
  };
  if (controller_rad_up1) {
    sub_3 = v_355;
  } else {
    sub_3 = sub_78;
  };
  if (controller_rad_c2) {
    v_313 = false;
  } else {
    v_313 = sub_29;
  };
  if (controller_rad_up2) {
    v_314 = v_313;
  } else {
    v_314 = sub_28;
  };
  if (controller_v_423) {
    sub_81 = sub_5;
  } else {
    sub_81 = sub_27;
  };
  if (controller_rad_down2) {
    v_312 = sub_8;
  } else {
    v_312 = false;
  };
  if (controller_rad_c2) {
    sub_83 = v_312;
  } else {
    sub_83 = sub_7;
  };
  sub_82 = sub_83;
  if (controller_v_423) {
    v_315 = v_314;
  } else {
    v_315 = sub_82;
  };
  if (controller_rad_down1) {
    v_316 = sub_81;
  } else {
    v_316 = v_315;
  };
  if (controller_rad_c1) {
    sub_80 = v_316;
  } else {
    sub_80 = sub_81;
  };
  if (controller_v_424) {
    sub_2 = sub_80;
  } else {
    sub_2 = sub_3;
  };
  sub_89 = sub_75;
  sub_88 = sub_89;
  sub_87 = sub_88;
  if (controller_v_423) {
    sub_86 = false;
  } else {
    sub_86 = sub_87;
  };
  if (controller_rad_c2) {
    v_309 = false;
  } else {
    v_309 = sub_89;
  };
  if (controller_rad_up2) {
    v_310 = v_309;
  } else {
    v_310 = sub_88;
  };
  if (controller_v_423) {
    sub_91 = v_310;
  } else {
    sub_91 = sub_87;
  };
  sub_90 = sub_91;
  if (controller_rad_c1) {
    v_311 = sub_86;
  } else {
    v_311 = sub_90;
  };
  if (controller_rad_up1) {
    sub_85 = v_311;
  } else {
    sub_85 = sub_90;
  };
  if (controller_v_423) {
    sub_93 = sub_87;
  } else {
    sub_93 = false;
  };
  if (controller_rad_down2) {
    v = sub_75;
  } else {
    v = false;
  };
  if (controller_rad_c2) {
    sub_95 = v;
  } else {
    sub_95 = sub_89;
  };
  sub_94 = sub_95;
  if (controller_v_423) {
    v_307 = false;
  } else {
    v_307 = sub_94;
  };
  if (controller_rad_down1) {
    v_308 = sub_93;
  } else {
    v_308 = v_307;
  };
  if (controller_rad_c1) {
    sub_92 = v_308;
  } else {
    sub_92 = sub_93;
  };
  if (controller_v_424) {
    sub_84 = sub_92;
  } else {
    sub_84 = sub_85;
  };
  if (controller_ck_16_1) {
    v_357 = sub_2;
    v_356 = sub_84;
  } else {
    v_357 = sub_84;
    v_356 = sub_2;
  };
  if (controller_push_janela) {
    v_358 = v_356;
  } else {
    v_358 = v_357;
  };
  if (controller_c_window) {
    sub_1 = v_358;
  } else {
    sub_1 = sub_2;
  };
  sub_97 = sub_84;
  sub_96 = sub_97;
  if (controller_ck_14_1) {
    v_360 = sub_1;
    v_359 = sub_96;
  } else {
    v_360 = sub_96;
    v_359 = sub_1;
  };
  if (controller_push_porta) {
    v_361 = v_359;
  } else {
    v_361 = v_360;
  };
  if (controller_c_door) {
    sub_0 = v_361;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_tv1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_light2_step(
  int controller_push_porta, int controller_push_janela,
  int controller_rad_up1, int controller_rad_down1, int controller_rad_up2,
  int controller_rad_down2, int controller_wash_start,
  int controller_wash_finish, int controller_oven_start,
  int controller_oven_finish, int controller_temp_ok, int controller_cold,
  int controller_presence, int controller_light_switch,
  int controller_tv_switch, int controller_eco_in, int controller_comfort_in,
  int controller_v_424, int controller_v_423, int controller_pnr_8,
  int controller_v_388, int controller_v_387, int controller_v_386,
  int controller_pnr_7, int controller_v_329, int controller_v_328,
  int controller_v_327, int controller_pnr_6, int controller_ck_14_1,
  int controller_pnr_5, int controller_ck_16_1, int controller_pnr_4,
  int controller_ck_18_1, int controller_pnr_3, int controller_ck_20_1,
  int controller_pnr_2, int controller_ck_22_1, int controller_pnr_1,
  int controller_v_290, int controller_v_289, int controller_pnr,
  int p_controller_c_oven1, int p_controller_c_wash1, int p_controller_c_tv2,
  int p_controller_c_tv1, int p_controller_c_light2,
  int p_controller_c_light1, int p_controller_rad_c2,
  int p_controller_rad_c1, int p_controller_c_window,
  int p_controller_c_door, int controller_c_light1, int controller_rad_c2,
  int controller_rad_c1, int controller_c_window, int controller_c_door,
  Controller_controller__controller_controller_controller_c_light2_out* _out) {
  
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
  v_406 = !(controller_ck_22_1);
  if (controller_presence) {
    sub_20 = v_406;
  } else {
    sub_20 = controller_ck_22_1;
  };
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  v_405 = (controller_ck_22_1&&false);
  v_403 = !(controller_ck_22_1);
  v_404 = (v_403&&false);
  if (controller_presence) {
    sub_24 = v_404;
  } else {
    sub_24 = v_405;
  };
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (controller_ck_18_1) {
    sub_16 = sub_21;
  } else {
    sub_16 = sub_17;
  };
  sub_28 = false;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  if (controller_ck_18_1) {
    v_409 = sub_25;
  } else {
    v_409 = sub_17;
  };
  if (controller_c_light1) {
    v_410 = sub_16;
  } else {
    v_410 = v_409;
  };
  if (controller_ck_18_1) {
    v_407 = sub_17;
  } else {
    v_407 = sub_25;
  };
  if (controller_c_light1) {
    v_408 = sub_16;
  } else {
    v_408 = v_407;
  };
  if (controller_light_switch) {
    sub_15 = v_408;
  } else {
    sub_15 = v_410;
  };
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_41 = sub_21;
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  if (controller_eco_in) {
    sub_55 = sub_23;
  } else {
    sub_55 = false;
  };
  if (controller_comfort_in) {
    v_400 = sub_55;
    sub_54 = sub_22;
  } else {
    v_400 = sub_22;
    sub_54 = sub_55;
  };
  if (controller_v_290) {
    sub_53 = sub_21;
  } else {
    sub_53 = sub_54;
  };
  if (controller_eco_in) {
    sub_57 = false;
  } else {
    sub_57 = sub_23;
  };
  sub_56 = sub_57;
  if (controller_v_290) {
    v_401 = v_400;
  } else {
    v_401 = sub_56;
  };
  if (controller_v_289) {
    sub_52 = v_401;
  } else {
    sub_52 = sub_53;
  };
  sub_51 = sub_52;
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  if (controller_v_328) {
    sub_45 = sub_46;
  } else {
    sub_45 = sub_36;
  };
  if (controller_v_329) {
    sub_59 = sub_46;
  } else {
    sub_59 = sub_36;
  };
  if (controller_oven_finish) {
    sub_62 = sub_40;
  } else {
    sub_62 = sub_50;
  };
  if (controller_temp_ok) {
    sub_61 = sub_38;
  } else {
    sub_61 = sub_62;
  };
  if (controller_v_329) {
    sub_60 = sub_61;
  } else {
    sub_60 = sub_36;
  };
  if (controller_v_328) {
    sub_58 = sub_60;
  } else {
    sub_58 = sub_59;
  };
  if (controller_v_327) {
    sub_44 = sub_58;
  } else {
    sub_44 = sub_45;
  };
  sub_43 = sub_44;
  if (controller_v_328) {
    sub_64 = sub_46;
  } else {
    sub_64 = sub_60;
  };
  if (controller_v_327) {
    sub_63 = sub_58;
  } else {
    sub_63 = sub_64;
  };
  if (controller_v_386) {
    sub_42 = sub_63;
  } else {
    sub_42 = sub_43;
  };
  if (controller_wash_finish) {
    sub_34 = sub_35;
  } else {
    sub_34 = sub_42;
  };
  sub_65 = sub_35;
  if (controller_v_388) {
    sub_33 = sub_65;
  } else {
    sub_33 = sub_34;
  };
  if (controller_wash_finish) {
    sub_66 = sub_42;
  } else {
    sub_66 = sub_43;
  };
  if (controller_wash_start) {
    v_399 = sub_44;
  } else {
    v_399 = sub_36;
  };
  if (controller_v_386) {
    sub_67 = v_399;
  } else {
    sub_67 = sub_35;
  };
  if (controller_v_388) {
    v_402 = sub_67;
  } else {
    v_402 = sub_66;
  };
  if (controller_v_387) {
    sub_32 = v_402;
  } else {
    sub_32 = sub_33;
  };
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (controller_v_423) {
    sub_5 = sub_29;
  } else {
    sub_5 = sub_6;
  };
  if (controller_rad_c2) {
    v_397 = false;
  } else {
    v_397 = sub_8;
  };
  if (controller_rad_up2) {
    v_398 = v_397;
  } else {
    v_398 = sub_7;
  };
  if (controller_v_423) {
    sub_69 = v_398;
  } else {
    sub_69 = sub_6;
  };
  sub_68 = sub_69;
  if (controller_rad_c1) {
    v_411 = sub_5;
  } else {
    v_411 = sub_68;
  };
  if (controller_rad_up1) {
    sub_4 = v_411;
  } else {
    sub_4 = sub_68;
  };
  if (controller_rad_c2) {
    v_393 = false;
  } else {
    v_393 = sub_31;
  };
  if (controller_rad_up2) {
    v_394 = v_393;
  } else {
    v_394 = sub_30;
  };
  if (controller_v_423) {
    sub_71 = sub_6;
  } else {
    sub_71 = sub_29;
  };
  if (controller_rad_down2) {
    v_392 = sub_9;
  } else {
    v_392 = false;
  };
  if (controller_rad_c2) {
    sub_73 = v_392;
  } else {
    sub_73 = sub_8;
  };
  sub_72 = sub_73;
  if (controller_v_423) {
    v_395 = v_394;
  } else {
    v_395 = sub_72;
  };
  if (controller_rad_down1) {
    v_396 = sub_71;
  } else {
    v_396 = v_395;
  };
  if (controller_rad_c1) {
    sub_70 = v_396;
  } else {
    sub_70 = sub_71;
  };
  if (controller_v_424) {
    sub_3 = sub_70;
  } else {
    sub_3 = sub_4;
  };
  sub_79 = sub_65;
  sub_78 = sub_79;
  sub_77 = sub_78;
  if (controller_v_423) {
    sub_76 = false;
  } else {
    sub_76 = sub_77;
  };
  if (controller_rad_c2) {
    v_389 = false;
  } else {
    v_389 = sub_79;
  };
  if (controller_rad_up2) {
    v_390 = v_389;
  } else {
    v_390 = sub_78;
  };
  if (controller_v_423) {
    sub_81 = v_390;
  } else {
    sub_81 = sub_77;
  };
  sub_80 = sub_81;
  if (controller_rad_c1) {
    v_391 = sub_76;
  } else {
    v_391 = sub_80;
  };
  if (controller_rad_up1) {
    sub_75 = v_391;
  } else {
    sub_75 = sub_80;
  };
  if (controller_v_423) {
    sub_83 = sub_77;
  } else {
    sub_83 = false;
  };
  if (controller_rad_down2) {
    v_386 = sub_65;
  } else {
    v_386 = false;
  };
  if (controller_rad_c2) {
    sub_85 = v_386;
  } else {
    sub_85 = sub_79;
  };
  sub_84 = sub_85;
  if (controller_v_423) {
    v_387 = false;
  } else {
    v_387 = sub_84;
  };
  if (controller_rad_down1) {
    v_388 = sub_83;
  } else {
    v_388 = v_387;
  };
  if (controller_rad_c1) {
    sub_82 = v_388;
  } else {
    sub_82 = sub_83;
  };
  if (controller_v_424) {
    sub_74 = sub_82;
  } else {
    sub_74 = sub_75;
  };
  if (controller_ck_16_1) {
    v_413 = sub_3;
    v_412 = sub_74;
  } else {
    v_413 = sub_74;
    v_412 = sub_3;
  };
  if (controller_push_janela) {
    v_414 = v_412;
  } else {
    v_414 = v_413;
  };
  if (controller_c_window) {
    sub_2 = v_414;
  } else {
    sub_2 = sub_3;
  };
  sub_87 = sub_74;
  sub_86 = sub_87;
  if (controller_ck_14_1) {
    v_416 = sub_2;
    v_415 = sub_86;
  } else {
    v_416 = sub_86;
    v_415 = sub_2;
  };
  if (controller_push_porta) {
    v_417 = v_415;
  } else {
    v_417 = v_416;
  };
  if (controller_c_door) {
    sub_1 = v_417;
  } else {
    sub_1 = sub_2;
  };
  sub_106 = true;
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  v_379 = !(controller_ck_22_1);
  v_380 = (v_379||false);
  v_378 = (controller_ck_22_1||false);
  if (controller_presence) {
    sub_110 = v_378;
  } else {
    sub_110 = v_380;
  };
  sub_109 = sub_110;
  sub_108 = sub_109;
  sub_107 = sub_108;
  if (controller_ck_18_1) {
    v_381 = sub_107;
  } else {
    v_381 = sub_103;
  };
  if (controller_c_light1) {
    sub_102 = v_381;
  } else {
    sub_102 = sub_103;
  };
  sub_101 = sub_102;
  sub_100 = sub_101;
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_123 = sub_107;
  sub_122 = sub_123;
  sub_121 = sub_122;
  sub_120 = sub_121;
  sub_119 = sub_120;
  sub_118 = sub_119;
  sub_117 = sub_118;
  if (controller_eco_in) {
    sub_137 = sub_109;
  } else {
    sub_137 = false;
  };
  if (controller_comfort_in) {
    v_375 = sub_137;
    sub_136 = sub_108;
  } else {
    v_375 = sub_108;
    sub_136 = sub_137;
  };
  if (controller_v_290) {
    sub_135 = sub_107;
  } else {
    sub_135 = sub_136;
  };
  if (controller_eco_in) {
    sub_139 = false;
  } else {
    sub_139 = sub_109;
  };
  sub_138 = sub_139;
  if (controller_v_290) {
    v_376 = v_375;
  } else {
    v_376 = sub_138;
  };
  if (controller_v_289) {
    sub_134 = v_376;
  } else {
    sub_134 = sub_135;
  };
  sub_133 = sub_134;
  sub_132 = sub_133;
  sub_131 = sub_132;
  sub_130 = sub_131;
  sub_129 = sub_130;
  sub_128 = sub_129;
  if (controller_v_328) {
    sub_127 = sub_128;
  } else {
    sub_127 = sub_118;
  };
  if (controller_v_329) {
    sub_141 = sub_128;
  } else {
    sub_141 = sub_118;
  };
  if (controller_oven_finish) {
    sub_144 = sub_122;
  } else {
    sub_144 = sub_132;
  };
  if (controller_temp_ok) {
    sub_143 = sub_120;
  } else {
    sub_143 = sub_144;
  };
  if (controller_v_329) {
    sub_142 = sub_143;
  } else {
    sub_142 = sub_118;
  };
  if (controller_v_328) {
    sub_140 = sub_142;
  } else {
    sub_140 = sub_141;
  };
  if (controller_v_327) {
    sub_126 = sub_140;
  } else {
    sub_126 = sub_127;
  };
  sub_125 = sub_126;
  if (controller_v_328) {
    sub_146 = sub_128;
  } else {
    sub_146 = sub_142;
  };
  if (controller_v_327) {
    sub_145 = sub_140;
  } else {
    sub_145 = sub_146;
  };
  if (controller_v_386) {
    sub_124 = sub_145;
  } else {
    sub_124 = sub_125;
  };
  if (controller_wash_finish) {
    sub_116 = sub_117;
  } else {
    sub_116 = sub_124;
  };
  sub_147 = sub_117;
  if (controller_v_388) {
    sub_115 = sub_147;
  } else {
    sub_115 = sub_116;
  };
  if (controller_wash_finish) {
    sub_148 = sub_124;
  } else {
    sub_148 = sub_125;
  };
  if (controller_wash_start) {
    v_374 = sub_126;
  } else {
    v_374 = sub_118;
  };
  if (controller_v_386) {
    sub_149 = v_374;
  } else {
    sub_149 = sub_117;
  };
  if (controller_v_388) {
    v_377 = sub_149;
  } else {
    v_377 = sub_148;
  };
  if (controller_v_387) {
    sub_114 = v_377;
  } else {
    sub_114 = sub_115;
  };
  sub_113 = sub_114;
  sub_112 = sub_113;
  sub_111 = sub_112;
  if (controller_v_423) {
    sub_91 = sub_111;
  } else {
    sub_91 = sub_92;
  };
  if (controller_rad_c2) {
    v_372 = false;
  } else {
    v_372 = sub_94;
  };
  if (controller_rad_up2) {
    v_373 = v_372;
  } else {
    v_373 = sub_93;
  };
  if (controller_v_423) {
    sub_151 = v_373;
  } else {
    sub_151 = sub_92;
  };
  sub_150 = sub_151;
  if (controller_rad_c1) {
    v_382 = sub_91;
  } else {
    v_382 = sub_150;
  };
  if (controller_rad_up1) {
    sub_90 = v_382;
  } else {
    sub_90 = sub_150;
  };
  if (controller_rad_c2) {
    v_368 = false;
  } else {
    v_368 = sub_113;
  };
  if (controller_rad_up2) {
    v_369 = v_368;
  } else {
    v_369 = sub_112;
  };
  if (controller_v_423) {
    sub_153 = sub_92;
  } else {
    sub_153 = sub_111;
  };
  if (controller_rad_down2) {
    v_367 = sub_95;
  } else {
    v_367 = false;
  };
  if (controller_rad_c2) {
    sub_155 = v_367;
  } else {
    sub_155 = sub_94;
  };
  sub_154 = sub_155;
  if (controller_v_423) {
    v_370 = v_369;
  } else {
    v_370 = sub_154;
  };
  if (controller_rad_down1) {
    v_371 = sub_153;
  } else {
    v_371 = v_370;
  };
  if (controller_rad_c1) {
    sub_152 = v_371;
  } else {
    sub_152 = sub_153;
  };
  if (controller_v_424) {
    sub_89 = sub_152;
  } else {
    sub_89 = sub_90;
  };
  sub_161 = sub_147;
  sub_160 = sub_161;
  sub_159 = sub_160;
  if (controller_v_423) {
    sub_158 = false;
  } else {
    sub_158 = sub_159;
  };
  if (controller_rad_c2) {
    v_364 = false;
  } else {
    v_364 = sub_161;
  };
  if (controller_rad_up2) {
    v_365 = v_364;
  } else {
    v_365 = sub_160;
  };
  if (controller_v_423) {
    sub_163 = v_365;
  } else {
    sub_163 = sub_159;
  };
  sub_162 = sub_163;
  if (controller_rad_c1) {
    v_366 = sub_158;
  } else {
    v_366 = sub_162;
  };
  if (controller_rad_up1) {
    sub_157 = v_366;
  } else {
    sub_157 = sub_162;
  };
  if (controller_v_423) {
    sub_165 = sub_159;
  } else {
    sub_165 = false;
  };
  if (controller_rad_down2) {
    v = sub_147;
  } else {
    v = false;
  };
  if (controller_rad_c2) {
    sub_167 = v;
  } else {
    sub_167 = sub_161;
  };
  sub_166 = sub_167;
  if (controller_v_423) {
    v_362 = false;
  } else {
    v_362 = sub_166;
  };
  if (controller_rad_down1) {
    v_363 = sub_165;
  } else {
    v_363 = v_362;
  };
  if (controller_rad_c1) {
    sub_164 = v_363;
  } else {
    sub_164 = sub_165;
  };
  if (controller_v_424) {
    sub_156 = sub_164;
  } else {
    sub_156 = sub_157;
  };
  if (controller_ck_16_1) {
    v_384 = sub_89;
    v_383 = sub_156;
  } else {
    v_384 = sub_156;
    v_383 = sub_89;
  };
  if (controller_push_janela) {
    v_385 = v_383;
  } else {
    v_385 = v_384;
  };
  if (controller_c_window) {
    sub_88 = v_385;
  } else {
    sub_88 = sub_89;
  };
  sub_169 = sub_156;
  sub_168 = sub_169;
  if (controller_ck_14_1) {
    v_419 = sub_88;
    v_418 = sub_168;
  } else {
    v_419 = sub_168;
    v_418 = sub_88;
  };
  if (controller_push_porta) {
    v_420 = v_418;
  } else {
    v_420 = v_419;
  };
  if (controller_c_door) {
    v_421 = v_420;
  } else {
    v_421 = sub_88;
  };
  if (p_controller_c_light2) {
    sub_0 = v_421;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_light2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_light1_step(
  int controller_push_porta, int controller_push_janela,
  int controller_rad_up1, int controller_rad_down1, int controller_rad_up2,
  int controller_rad_down2, int controller_wash_start,
  int controller_wash_finish, int controller_oven_start,
  int controller_oven_finish, int controller_temp_ok, int controller_cold,
  int controller_presence, int controller_light_switch,
  int controller_tv_switch, int controller_eco_in, int controller_comfort_in,
  int controller_v_424, int controller_v_423, int controller_pnr_8,
  int controller_v_388, int controller_v_387, int controller_v_386,
  int controller_pnr_7, int controller_v_329, int controller_v_328,
  int controller_v_327, int controller_pnr_6, int controller_ck_14_1,
  int controller_pnr_5, int controller_ck_16_1, int controller_pnr_4,
  int controller_ck_18_1, int controller_pnr_3, int controller_ck_20_1,
  int controller_pnr_2, int controller_ck_22_1, int controller_pnr_1,
  int controller_v_290, int controller_v_289, int controller_pnr,
  int p_controller_c_oven1, int p_controller_c_wash1, int p_controller_c_tv2,
  int p_controller_c_tv1, int p_controller_c_light2,
  int p_controller_c_light1, int p_controller_rad_c2,
  int p_controller_rad_c1, int p_controller_c_window,
  int p_controller_c_door, int controller_rad_c2, int controller_rad_c1,
  int controller_c_window, int controller_c_door,
  Controller_controller__controller_controller_controller_c_light1_out* _out) {
  
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
  sub_19 = false;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_30 = true;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  v_449 = !(controller_ck_22_1);
  if (controller_presence) {
    sub_33 = controller_ck_22_1;
  } else {
    sub_33 = v_449;
  };
  sub_32 = sub_33;
  sub_31 = sub_32;
  if (controller_ck_18_1) {
    sub_26 = sub_31;
  } else {
    sub_26 = sub_27;
  };
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  if (p_controller_c_light1) {
    sub_8 = sub_20;
  } else {
    sub_8 = sub_9;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  v_445 = (controller_ck_22_1&&false);
  v_443 = !(controller_ck_22_1);
  v_444 = (v_443&&false);
  if (controller_presence) {
    sub_50 = v_444;
  } else {
    sub_50 = v_445;
  };
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (controller_eco_in) {
    sub_63 = sub_49;
  } else {
    sub_63 = false;
  };
  if (controller_comfort_in) {
    v_441 = sub_63;
    sub_62 = sub_48;
  } else {
    v_441 = sub_48;
    sub_62 = sub_63;
  };
  if (controller_v_290) {
    sub_61 = sub_47;
  } else {
    sub_61 = sub_62;
  };
  if (controller_eco_in) {
    sub_65 = false;
  } else {
    sub_65 = sub_49;
  };
  sub_64 = sub_65;
  if (controller_v_290) {
    v_442 = v_441;
  } else {
    v_442 = sub_64;
  };
  if (controller_v_289) {
    sub_60 = v_442;
  } else {
    sub_60 = sub_61;
  };
  sub_59 = sub_60;
  sub_58 = sub_59;
  sub_57 = sub_58;
  sub_56 = sub_57;
  sub_55 = sub_56;
  if (controller_v_328) {
    sub_54 = sub_55;
  } else {
    sub_54 = sub_42;
  };
  if (controller_v_329) {
    sub_67 = sub_55;
  } else {
    sub_67 = sub_42;
  };
  if (controller_oven_finish) {
    sub_70 = sub_46;
  } else {
    sub_70 = sub_59;
  };
  if (controller_temp_ok) {
    sub_69 = sub_44;
  } else {
    sub_69 = sub_70;
  };
  if (controller_v_329) {
    sub_68 = sub_69;
  } else {
    sub_68 = sub_42;
  };
  if (controller_v_328) {
    sub_66 = sub_68;
  } else {
    sub_66 = sub_67;
  };
  if (controller_v_327) {
    sub_53 = sub_66;
  } else {
    sub_53 = sub_54;
  };
  sub_52 = sub_53;
  if (controller_v_328) {
    sub_72 = sub_55;
  } else {
    sub_72 = sub_68;
  };
  if (controller_v_327) {
    sub_71 = sub_66;
  } else {
    sub_71 = sub_72;
  };
  if (controller_v_386) {
    sub_51 = sub_71;
  } else {
    sub_51 = sub_52;
  };
  if (controller_wash_finish) {
    sub_40 = sub_41;
  } else {
    sub_40 = sub_51;
  };
  sub_73 = sub_41;
  if (controller_v_388) {
    sub_39 = sub_73;
  } else {
    sub_39 = sub_40;
  };
  if (controller_wash_finish) {
    sub_74 = sub_51;
  } else {
    sub_74 = sub_52;
  };
  if (controller_wash_start) {
    v_440 = sub_53;
  } else {
    v_440 = sub_42;
  };
  if (controller_v_386) {
    sub_75 = v_440;
  } else {
    sub_75 = sub_41;
  };
  if (controller_v_388) {
    v_446 = sub_75;
  } else {
    v_446 = sub_74;
  };
  if (controller_v_387) {
    sub_38 = v_446;
  } else {
    sub_38 = sub_39;
  };
  v_438 = !(controller_ck_22_1);
  v_439 = (v_438||false);
  v_437 = (controller_ck_22_1||false);
  if (controller_presence) {
    sub_87 = v_437;
  } else {
    sub_87 = v_439;
  };
  sub_86 = sub_87;
  sub_85 = sub_86;
  sub_84 = sub_85;
  sub_83 = sub_84;
  sub_82 = sub_83;
  sub_81 = sub_82;
  sub_80 = sub_81;
  sub_79 = sub_80;
  sub_78 = sub_79;
  if (controller_eco_in) {
    sub_100 = sub_86;
  } else {
    sub_100 = false;
  };
  if (controller_comfort_in) {
    v_435 = sub_100;
    sub_99 = sub_85;
  } else {
    v_435 = sub_85;
    sub_99 = sub_100;
  };
  if (controller_v_290) {
    sub_98 = sub_84;
  } else {
    sub_98 = sub_99;
  };
  if (controller_eco_in) {
    sub_102 = false;
  } else {
    sub_102 = sub_86;
  };
  sub_101 = sub_102;
  if (controller_v_290) {
    v_436 = v_435;
  } else {
    v_436 = sub_101;
  };
  if (controller_v_289) {
    sub_97 = v_436;
  } else {
    sub_97 = sub_98;
  };
  sub_96 = sub_97;
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  if (controller_v_328) {
    sub_91 = sub_92;
  } else {
    sub_91 = sub_79;
  };
  if (controller_v_329) {
    sub_104 = sub_92;
  } else {
    sub_104 = sub_79;
  };
  if (controller_oven_finish) {
    sub_107 = sub_83;
  } else {
    sub_107 = sub_96;
  };
  if (controller_temp_ok) {
    sub_106 = sub_81;
  } else {
    sub_106 = sub_107;
  };
  if (controller_v_329) {
    sub_105 = sub_106;
  } else {
    sub_105 = sub_79;
  };
  if (controller_v_328) {
    sub_103 = sub_105;
  } else {
    sub_103 = sub_104;
  };
  if (controller_v_327) {
    sub_90 = sub_103;
  } else {
    sub_90 = sub_91;
  };
  sub_89 = sub_90;
  if (controller_v_328) {
    sub_109 = sub_92;
  } else {
    sub_109 = sub_105;
  };
  if (controller_v_327) {
    sub_108 = sub_103;
  } else {
    sub_108 = sub_109;
  };
  if (controller_v_386) {
    sub_88 = sub_108;
  } else {
    sub_88 = sub_89;
  };
  if (controller_wash_finish) {
    sub_77 = sub_78;
  } else {
    sub_77 = sub_88;
  };
  sub_110 = sub_78;
  if (controller_v_388) {
    sub_76 = sub_110;
  } else {
    sub_76 = sub_77;
  };
  if (controller_wash_finish) {
    sub_111 = sub_88;
  } else {
    sub_111 = sub_89;
  };
  if (controller_wash_start) {
    v_434 = sub_90;
  } else {
    v_434 = sub_79;
  };
  if (controller_v_386) {
    sub_112 = v_434;
  } else {
    sub_112 = sub_78;
  };
  if (controller_v_388) {
    v_447 = sub_112;
  } else {
    v_447 = sub_111;
  };
  if (controller_v_387) {
    v_448 = v_447;
  } else {
    v_448 = sub_76;
  };
  if (p_controller_c_light1) {
    sub_37 = v_448;
  } else {
    sub_37 = sub_38;
  };
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  if (controller_v_423) {
    sub_4 = sub_34;
  } else {
    sub_4 = sub_5;
  };
  if (controller_rad_c2) {
    v_432 = false;
  } else {
    v_432 = sub_7;
  };
  if (controller_rad_up2) {
    v_433 = v_432;
  } else {
    v_433 = sub_6;
  };
  if (controller_v_423) {
    sub_114 = v_433;
  } else {
    sub_114 = sub_5;
  };
  sub_113 = sub_114;
  if (controller_rad_c1) {
    v_450 = sub_4;
  } else {
    v_450 = sub_113;
  };
  if (controller_rad_up1) {
    sub_3 = v_450;
  } else {
    sub_3 = sub_113;
  };
  if (controller_rad_c2) {
    v_428 = false;
  } else {
    v_428 = sub_36;
  };
  if (controller_rad_up2) {
    v_429 = v_428;
  } else {
    v_429 = sub_35;
  };
  if (controller_v_423) {
    sub_116 = sub_5;
  } else {
    sub_116 = sub_34;
  };
  if (controller_rad_down2) {
    v_427 = sub_8;
  } else {
    v_427 = false;
  };
  if (controller_rad_c2) {
    sub_118 = v_427;
  } else {
    sub_118 = sub_7;
  };
  sub_117 = sub_118;
  if (controller_v_423) {
    v_430 = v_429;
  } else {
    v_430 = sub_117;
  };
  if (controller_rad_down1) {
    v_431 = sub_116;
  } else {
    v_431 = v_430;
  };
  if (controller_rad_c1) {
    sub_115 = v_431;
  } else {
    sub_115 = sub_116;
  };
  if (controller_v_424) {
    sub_2 = sub_115;
  } else {
    sub_2 = sub_3;
  };
  if (p_controller_c_light1) {
    sub_125 = sub_110;
  } else {
    sub_125 = sub_73;
  };
  sub_124 = sub_125;
  sub_123 = sub_124;
  sub_122 = sub_123;
  if (controller_v_423) {
    sub_121 = false;
  } else {
    sub_121 = sub_122;
  };
  if (controller_rad_c2) {
    v_424 = false;
  } else {
    v_424 = sub_124;
  };
  if (controller_rad_up2) {
    v_425 = v_424;
  } else {
    v_425 = sub_123;
  };
  if (controller_v_423) {
    sub_127 = v_425;
  } else {
    sub_127 = sub_122;
  };
  sub_126 = sub_127;
  if (controller_rad_c1) {
    v_426 = sub_121;
  } else {
    v_426 = sub_126;
  };
  if (controller_rad_up1) {
    sub_120 = v_426;
  } else {
    sub_120 = sub_126;
  };
  if (controller_v_423) {
    sub_129 = sub_122;
  } else {
    sub_129 = false;
  };
  if (controller_rad_down2) {
    v = sub_125;
  } else {
    v = false;
  };
  if (controller_rad_c2) {
    sub_131 = v;
  } else {
    sub_131 = sub_124;
  };
  sub_130 = sub_131;
  if (controller_v_423) {
    v_422 = false;
  } else {
    v_422 = sub_130;
  };
  if (controller_rad_down1) {
    v_423 = sub_129;
  } else {
    v_423 = v_422;
  };
  if (controller_rad_c1) {
    sub_128 = v_423;
  } else {
    sub_128 = sub_129;
  };
  if (controller_v_424) {
    sub_119 = sub_128;
  } else {
    sub_119 = sub_120;
  };
  if (controller_ck_16_1) {
    v_452 = sub_2;
    v_451 = sub_119;
  } else {
    v_452 = sub_119;
    v_451 = sub_2;
  };
  if (controller_push_janela) {
    v_453 = v_451;
  } else {
    v_453 = v_452;
  };
  if (controller_c_window) {
    sub_1 = v_453;
  } else {
    sub_1 = sub_2;
  };
  sub_133 = sub_119;
  sub_132 = sub_133;
  if (controller_ck_14_1) {
    v_455 = sub_1;
    v_454 = sub_132;
  } else {
    v_455 = sub_132;
    v_454 = sub_1;
  };
  if (controller_push_porta) {
    v_456 = v_454;
  } else {
    v_456 = v_455;
  };
  if (controller_c_door) {
    sub_0 = v_456;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_light1 = sub_0;;
}

void Controller_controller__controller_controller_controller_rad_c2_step(
  int controller_push_porta, int controller_push_janela,
  int controller_rad_up1, int controller_rad_down1, int controller_rad_up2,
  int controller_rad_down2, int controller_wash_start,
  int controller_wash_finish, int controller_oven_start,
  int controller_oven_finish, int controller_temp_ok, int controller_cold,
  int controller_presence, int controller_light_switch,
  int controller_tv_switch, int controller_eco_in, int controller_comfort_in,
  int controller_v_424, int controller_v_423, int controller_pnr_8,
  int controller_v_388, int controller_v_387, int controller_v_386,
  int controller_pnr_7, int controller_v_329, int controller_v_328,
  int controller_v_327, int controller_pnr_6, int controller_ck_14_1,
  int controller_pnr_5, int controller_ck_16_1, int controller_pnr_4,
  int controller_ck_18_1, int controller_pnr_3, int controller_ck_20_1,
  int controller_pnr_2, int controller_ck_22_1, int controller_pnr_1,
  int controller_v_290, int controller_v_289, int controller_pnr,
  int p_controller_c_oven1, int p_controller_c_wash1, int p_controller_c_tv2,
  int p_controller_c_tv1, int p_controller_c_light2,
  int p_controller_c_light1, int p_controller_rad_c2,
  int p_controller_rad_c1, int p_controller_c_window,
  int p_controller_c_door, int controller_rad_c1, int controller_c_window,
  int controller_c_door,
  Controller_controller__controller_controller_controller_rad_c2_out* _out) {
  
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
  sub_18 = p_controller_rad_c2;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (controller_ck_22_1) {
    v_475 = false;
    v_474 = sub_18;
  } else {
    v_475 = sub_18;
    v_474 = false;
  };
  if (controller_presence) {
    sub_33 = v_474;
  } else {
    sub_33 = v_475;
  };
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  if (controller_eco_in) {
    sub_46 = sub_32;
  } else {
    sub_46 = false;
  };
  if (controller_comfort_in) {
    v_472 = sub_46;
    sub_45 = sub_31;
  } else {
    v_472 = sub_31;
    sub_45 = sub_46;
  };
  if (controller_v_290) {
    sub_44 = sub_30;
  } else {
    sub_44 = sub_45;
  };
  if (controller_eco_in) {
    sub_48 = false;
  } else {
    sub_48 = sub_32;
  };
  sub_47 = sub_48;
  if (controller_v_290) {
    v_473 = v_472;
  } else {
    v_473 = sub_47;
  };
  if (controller_v_289) {
    sub_43 = v_473;
  } else {
    sub_43 = sub_44;
  };
  sub_42 = sub_43;
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (controller_v_328) {
    sub_37 = sub_38;
  } else {
    sub_37 = sub_25;
  };
  if (controller_v_329) {
    sub_50 = sub_38;
  } else {
    sub_50 = sub_25;
  };
  if (controller_oven_finish) {
    sub_53 = sub_29;
  } else {
    sub_53 = sub_42;
  };
  if (controller_temp_ok) {
    sub_52 = sub_27;
  } else {
    sub_52 = sub_53;
  };
  if (controller_v_329) {
    sub_51 = sub_52;
  } else {
    sub_51 = sub_25;
  };
  if (controller_v_328) {
    sub_49 = sub_51;
  } else {
    sub_49 = sub_50;
  };
  if (controller_v_327) {
    sub_36 = sub_49;
  } else {
    sub_36 = sub_37;
  };
  sub_35 = sub_36;
  if (controller_v_328) {
    sub_55 = sub_38;
  } else {
    sub_55 = sub_51;
  };
  if (controller_v_327) {
    sub_54 = sub_49;
  } else {
    sub_54 = sub_55;
  };
  if (controller_v_386) {
    sub_34 = sub_54;
  } else {
    sub_34 = sub_35;
  };
  if (controller_wash_finish) {
    sub_23 = sub_24;
  } else {
    sub_23 = sub_34;
  };
  sub_56 = sub_24;
  if (controller_v_388) {
    sub_22 = sub_56;
  } else {
    sub_22 = sub_23;
  };
  if (controller_wash_finish) {
    sub_57 = sub_34;
  } else {
    sub_57 = sub_35;
  };
  if (controller_wash_start) {
    v_471 = sub_36;
  } else {
    v_471 = sub_25;
  };
  if (controller_v_386) {
    sub_58 = v_471;
  } else {
    sub_58 = sub_24;
  };
  if (controller_v_388) {
    v_476 = sub_58;
  } else {
    v_476 = sub_57;
  };
  if (controller_v_387) {
    sub_21 = v_476;
  } else {
    sub_21 = sub_22;
  };
  sub_20 = sub_21;
  sub_19 = sub_20;
  if (controller_v_423) {
    sub_4 = sub_19;
  } else {
    sub_4 = sub_5;
  };
  sub_71 = false;
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_66 = sub_67;
  sub_65 = sub_66;
  sub_64 = sub_65;
  sub_63 = sub_64;
  sub_62 = sub_63;
  sub_61 = sub_62;
  if (controller_rad_up2) {
    v_470 = sub_61;
  } else {
    v_470 = sub_6;
  };
  if (controller_v_423) {
    sub_60 = v_470;
  } else {
    sub_60 = sub_5;
  };
  sub_59 = sub_60;
  if (controller_rad_c1) {
    v_477 = sub_4;
  } else {
    v_477 = sub_59;
  };
  if (controller_rad_up1) {
    sub_3 = v_477;
  } else {
    sub_3 = sub_59;
  };
  if (controller_v_423) {
    sub_73 = sub_5;
  } else {
    sub_73 = sub_19;
  };
  if (controller_rad_down2) {
    sub_75 = sub_7;
  } else {
    sub_75 = sub_61;
  };
  sub_74 = sub_75;
  v_465 = (controller_ck_22_1&&false);
  v_463 = !(controller_ck_22_1);
  v_464 = (v_463&&false);
  if (controller_presence) {
    sub_88 = v_464;
  } else {
    sub_88 = v_465;
  };
  sub_87 = sub_88;
  sub_86 = sub_87;
  sub_85 = sub_86;
  sub_84 = sub_85;
  sub_83 = sub_84;
  sub_82 = sub_83;
  sub_81 = sub_82;
  sub_80 = sub_81;
  sub_79 = sub_80;
  if (controller_eco_in) {
    sub_101 = sub_87;
  } else {
    sub_101 = false;
  };
  if (controller_comfort_in) {
    v_461 = sub_101;
    sub_100 = sub_86;
  } else {
    v_461 = sub_86;
    sub_100 = sub_101;
  };
  if (controller_v_290) {
    sub_99 = sub_85;
  } else {
    sub_99 = sub_100;
  };
  if (controller_eco_in) {
    sub_103 = false;
  } else {
    sub_103 = sub_87;
  };
  sub_102 = sub_103;
  if (controller_v_290) {
    v_462 = v_461;
  } else {
    v_462 = sub_102;
  };
  if (controller_v_289) {
    sub_98 = v_462;
  } else {
    sub_98 = sub_99;
  };
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  if (controller_v_328) {
    sub_92 = sub_93;
  } else {
    sub_92 = sub_80;
  };
  if (controller_v_329) {
    sub_105 = sub_93;
  } else {
    sub_105 = sub_80;
  };
  if (controller_oven_finish) {
    sub_108 = sub_84;
  } else {
    sub_108 = sub_97;
  };
  if (controller_temp_ok) {
    sub_107 = sub_82;
  } else {
    sub_107 = sub_108;
  };
  if (controller_v_329) {
    sub_106 = sub_107;
  } else {
    sub_106 = sub_80;
  };
  if (controller_v_328) {
    sub_104 = sub_106;
  } else {
    sub_104 = sub_105;
  };
  if (controller_v_327) {
    sub_91 = sub_104;
  } else {
    sub_91 = sub_92;
  };
  sub_90 = sub_91;
  if (controller_v_328) {
    sub_110 = sub_93;
  } else {
    sub_110 = sub_106;
  };
  if (controller_v_327) {
    sub_109 = sub_104;
  } else {
    sub_109 = sub_110;
  };
  if (controller_v_386) {
    sub_89 = sub_109;
  } else {
    sub_89 = sub_90;
  };
  if (controller_wash_finish) {
    sub_78 = sub_79;
  } else {
    sub_78 = sub_89;
  };
  sub_111 = sub_79;
  if (controller_v_388) {
    sub_77 = sub_111;
  } else {
    sub_77 = sub_78;
  };
  if (controller_wash_finish) {
    sub_112 = sub_89;
  } else {
    sub_112 = sub_90;
  };
  if (controller_wash_start) {
    v_460 = sub_91;
  } else {
    v_460 = sub_80;
  };
  if (controller_v_386) {
    sub_113 = v_460;
  } else {
    sub_113 = sub_79;
  };
  if (controller_v_388) {
    v_466 = sub_113;
  } else {
    v_466 = sub_112;
  };
  if (controller_v_387) {
    sub_76 = v_466;
  } else {
    sub_76 = sub_77;
  };
  if (controller_rad_up2) {
    v_467 = sub_76;
  } else {
    v_467 = sub_20;
  };
  if (controller_v_423) {
    v_468 = v_467;
  } else {
    v_468 = sub_74;
  };
  if (controller_rad_down1) {
    v_469 = sub_73;
  } else {
    v_469 = v_468;
  };
  if (controller_rad_c1) {
    sub_72 = v_469;
  } else {
    sub_72 = sub_73;
  };
  if (controller_v_424) {
    sub_2 = sub_72;
  } else {
    sub_2 = sub_3;
  };
  sub_118 = sub_56;
  sub_117 = sub_118;
  if (controller_v_423) {
    sub_116 = false;
  } else {
    sub_116 = sub_117;
  };
  if (controller_rad_up2) {
    v_458 = sub_111;
  } else {
    v_458 = sub_118;
  };
  if (controller_v_423) {
    sub_120 = v_458;
  } else {
    sub_120 = sub_117;
  };
  sub_119 = sub_120;
  if (controller_rad_c1) {
    v_459 = sub_116;
  } else {
    v_459 = sub_119;
  };
  if (controller_rad_up1) {
    sub_115 = v_459;
  } else {
    sub_115 = sub_119;
  };
  if (controller_v_423) {
    sub_122 = sub_117;
  } else {
    sub_122 = false;
  };
  if (controller_rad_down2) {
    sub_124 = sub_56;
  } else {
    sub_124 = sub_111;
  };
  sub_123 = sub_124;
  if (controller_v_423) {
    v = false;
  } else {
    v = sub_123;
  };
  if (controller_rad_down1) {
    v_457 = sub_122;
  } else {
    v_457 = v;
  };
  if (controller_rad_c1) {
    sub_121 = v_457;
  } else {
    sub_121 = sub_122;
  };
  if (controller_v_424) {
    sub_114 = sub_121;
  } else {
    sub_114 = sub_115;
  };
  if (controller_ck_16_1) {
    v_479 = sub_2;
    v_478 = sub_114;
  } else {
    v_479 = sub_114;
    v_478 = sub_2;
  };
  if (controller_push_janela) {
    v_480 = v_478;
  } else {
    v_480 = v_479;
  };
  if (controller_c_window) {
    sub_1 = v_480;
  } else {
    sub_1 = sub_2;
  };
  sub_126 = sub_114;
  sub_125 = sub_126;
  if (controller_ck_14_1) {
    v_482 = sub_1;
    v_481 = sub_125;
  } else {
    v_482 = sub_125;
    v_481 = sub_1;
  };
  if (controller_push_porta) {
    v_483 = v_481;
  } else {
    v_483 = v_482;
  };
  if (controller_c_door) {
    sub_0 = v_483;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_rad_c2 = sub_0;;
}

void Controller_controller__controller_controller_controller_rad_c1_step(
  int controller_push_porta, int controller_push_janela,
  int controller_rad_up1, int controller_rad_down1, int controller_rad_up2,
  int controller_rad_down2, int controller_wash_start,
  int controller_wash_finish, int controller_oven_start,
  int controller_oven_finish, int controller_temp_ok, int controller_cold,
  int controller_presence, int controller_light_switch,
  int controller_tv_switch, int controller_eco_in, int controller_comfort_in,
  int controller_v_424, int controller_v_423, int controller_pnr_8,
  int controller_v_388, int controller_v_387, int controller_v_386,
  int controller_pnr_7, int controller_v_329, int controller_v_328,
  int controller_v_327, int controller_pnr_6, int controller_ck_14_1,
  int controller_pnr_5, int controller_ck_16_1, int controller_pnr_4,
  int controller_ck_18_1, int controller_pnr_3, int controller_ck_20_1,
  int controller_pnr_2, int controller_ck_22_1, int controller_pnr_1,
  int controller_v_290, int controller_v_289, int controller_pnr,
  int p_controller_c_oven1, int p_controller_c_wash1, int p_controller_c_tv2,
  int p_controller_c_tv1, int p_controller_c_light2,
  int p_controller_c_light1, int p_controller_rad_c2,
  int p_controller_rad_c1, int p_controller_c_window,
  int p_controller_c_door, int controller_c_window, int controller_c_door,
  Controller_controller__controller_controller_controller_rad_c1_out* _out) {
  
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
  sub_18 = p_controller_rad_c1;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  v_510 = !(controller_ck_22_1);
  v_511 = (v_510&&sub_18);
  v_509 = (controller_ck_22_1&&sub_18);
  if (controller_presence) {
    sub_33 = v_509;
  } else {
    sub_33 = v_511;
  };
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_48 = false;
  sub_47 = sub_48;
  if (controller_eco_in) {
    sub_46 = sub_32;
  } else {
    sub_46 = sub_47;
  };
  if (controller_comfort_in) {
    v_507 = sub_46;
    sub_45 = sub_31;
  } else {
    v_507 = sub_31;
    sub_45 = sub_46;
  };
  if (controller_v_290) {
    sub_44 = sub_30;
  } else {
    sub_44 = sub_45;
  };
  if (controller_eco_in) {
    sub_50 = sub_47;
  } else {
    sub_50 = sub_32;
  };
  sub_49 = sub_50;
  if (controller_v_290) {
    v_508 = v_507;
  } else {
    v_508 = sub_49;
  };
  if (controller_v_289) {
    sub_43 = v_508;
  } else {
    sub_43 = sub_44;
  };
  sub_42 = sub_43;
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (controller_v_328) {
    sub_37 = sub_38;
  } else {
    sub_37 = sub_25;
  };
  if (controller_v_329) {
    sub_52 = sub_38;
  } else {
    sub_52 = sub_25;
  };
  if (controller_oven_finish) {
    sub_55 = sub_29;
  } else {
    sub_55 = sub_42;
  };
  if (controller_temp_ok) {
    sub_54 = sub_27;
  } else {
    sub_54 = sub_55;
  };
  if (controller_v_329) {
    sub_53 = sub_54;
  } else {
    sub_53 = sub_25;
  };
  if (controller_v_328) {
    sub_51 = sub_53;
  } else {
    sub_51 = sub_52;
  };
  if (controller_v_327) {
    sub_36 = sub_51;
  } else {
    sub_36 = sub_37;
  };
  sub_35 = sub_36;
  if (controller_v_328) {
    sub_57 = sub_38;
  } else {
    sub_57 = sub_53;
  };
  if (controller_v_327) {
    sub_56 = sub_51;
  } else {
    sub_56 = sub_57;
  };
  if (controller_v_386) {
    sub_34 = sub_56;
  } else {
    sub_34 = sub_35;
  };
  if (controller_wash_finish) {
    sub_23 = sub_24;
  } else {
    sub_23 = sub_34;
  };
  if (controller_v_388) {
    sub_22 = sub_24;
  } else {
    sub_22 = sub_23;
  };
  if (controller_wash_finish) {
    sub_58 = sub_34;
  } else {
    sub_58 = sub_35;
  };
  if (controller_wash_start) {
    v_506 = sub_36;
  } else {
    v_506 = sub_25;
  };
  if (controller_v_386) {
    sub_59 = v_506;
  } else {
    sub_59 = sub_24;
  };
  if (controller_v_388) {
    v_512 = sub_59;
  } else {
    v_512 = sub_58;
  };
  if (controller_v_387) {
    sub_21 = v_512;
  } else {
    sub_21 = sub_22;
  };
  sub_20 = sub_21;
  sub_19 = sub_20;
  if (controller_v_423) {
    sub_4 = sub_19;
  } else {
    sub_4 = sub_5;
  };
  if (controller_rad_up1) {
    sub_3 = sub_4;
  } else {
    sub_3 = sub_5;
  };
  if (controller_ck_22_1) {
    v_502 = false;
    v_501 = sub_18;
  } else {
    v_502 = sub_18;
    v_501 = false;
  };
  if (controller_presence) {
    sub_75 = v_501;
  } else {
    sub_75 = v_502;
  };
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_66 = sub_67;
  if (controller_eco_in) {
    sub_88 = sub_74;
  } else {
    sub_88 = false;
  };
  if (controller_comfort_in) {
    v_499 = sub_88;
    sub_87 = sub_73;
  } else {
    v_499 = sub_73;
    sub_87 = sub_88;
  };
  if (controller_v_290) {
    sub_86 = sub_72;
  } else {
    sub_86 = sub_87;
  };
  if (controller_eco_in) {
    sub_90 = false;
  } else {
    sub_90 = sub_74;
  };
  sub_89 = sub_90;
  if (controller_v_290) {
    v_500 = v_499;
  } else {
    v_500 = sub_89;
  };
  if (controller_v_289) {
    sub_85 = v_500;
  } else {
    sub_85 = sub_86;
  };
  sub_84 = sub_85;
  sub_83 = sub_84;
  sub_82 = sub_83;
  sub_81 = sub_82;
  sub_80 = sub_81;
  if (controller_v_328) {
    sub_79 = sub_80;
  } else {
    sub_79 = sub_67;
  };
  if (controller_v_329) {
    sub_92 = sub_80;
  } else {
    sub_92 = sub_67;
  };
  if (controller_oven_finish) {
    sub_95 = sub_71;
  } else {
    sub_95 = sub_84;
  };
  if (controller_temp_ok) {
    sub_94 = sub_69;
  } else {
    sub_94 = sub_95;
  };
  if (controller_v_329) {
    sub_93 = sub_94;
  } else {
    sub_93 = sub_67;
  };
  if (controller_v_328) {
    sub_91 = sub_93;
  } else {
    sub_91 = sub_92;
  };
  if (controller_v_327) {
    sub_78 = sub_91;
  } else {
    sub_78 = sub_79;
  };
  sub_77 = sub_78;
  if (controller_v_328) {
    sub_97 = sub_80;
  } else {
    sub_97 = sub_93;
  };
  if (controller_v_327) {
    sub_96 = sub_91;
  } else {
    sub_96 = sub_97;
  };
  if (controller_v_386) {
    sub_76 = sub_96;
  } else {
    sub_76 = sub_77;
  };
  if (controller_wash_finish) {
    sub_65 = sub_66;
  } else {
    sub_65 = sub_76;
  };
  sub_98 = sub_66;
  if (controller_v_388) {
    sub_64 = sub_98;
  } else {
    sub_64 = sub_65;
  };
  if (controller_wash_finish) {
    sub_99 = sub_76;
  } else {
    sub_99 = sub_77;
  };
  if (controller_wash_start) {
    v_498 = sub_78;
  } else {
    v_498 = sub_67;
  };
  if (controller_v_386) {
    sub_100 = v_498;
  } else {
    sub_100 = sub_66;
  };
  if (controller_v_388) {
    v_503 = sub_100;
  } else {
    v_503 = sub_99;
  };
  if (controller_v_387) {
    sub_63 = v_503;
  } else {
    sub_63 = sub_64;
  };
  sub_62 = sub_63;
  sub_61 = sub_62;
  if (controller_v_423) {
    v_504 = sub_5;
  } else {
    v_504 = sub_61;
  };
  v_496 = (controller_ck_22_1||sub_18);
  v_494 = !(controller_ck_22_1);
  v_495 = (v_494||sub_18);
  if (controller_presence) {
    sub_115 = v_495;
  } else {
    sub_115 = v_496;
  };
  sub_114 = sub_115;
  sub_113 = sub_114;
  sub_112 = sub_113;
  sub_111 = sub_112;
  sub_110 = sub_111;
  sub_109 = sub_110;
  sub_108 = sub_109;
  sub_107 = sub_108;
  sub_106 = sub_107;
  sub_130 = true;
  sub_129 = sub_130;
  if (controller_eco_in) {
    sub_128 = sub_114;
  } else {
    sub_128 = sub_129;
  };
  if (controller_comfort_in) {
    v_492 = sub_128;
    sub_127 = sub_113;
  } else {
    v_492 = sub_113;
    sub_127 = sub_128;
  };
  if (controller_v_290) {
    sub_126 = sub_112;
  } else {
    sub_126 = sub_127;
  };
  if (controller_eco_in) {
    sub_132 = sub_129;
  } else {
    sub_132 = sub_114;
  };
  sub_131 = sub_132;
  if (controller_v_290) {
    v_493 = v_492;
  } else {
    v_493 = sub_131;
  };
  if (controller_v_289) {
    sub_125 = v_493;
  } else {
    sub_125 = sub_126;
  };
  sub_124 = sub_125;
  sub_123 = sub_124;
  sub_122 = sub_123;
  sub_121 = sub_122;
  sub_120 = sub_121;
  if (controller_v_328) {
    sub_119 = sub_120;
  } else {
    sub_119 = sub_107;
  };
  if (controller_v_329) {
    sub_134 = sub_120;
  } else {
    sub_134 = sub_107;
  };
  if (controller_oven_finish) {
    sub_137 = sub_111;
  } else {
    sub_137 = sub_124;
  };
  if (controller_temp_ok) {
    sub_136 = sub_109;
  } else {
    sub_136 = sub_137;
  };
  if (controller_v_329) {
    sub_135 = sub_136;
  } else {
    sub_135 = sub_107;
  };
  if (controller_v_328) {
    sub_133 = sub_135;
  } else {
    sub_133 = sub_134;
  };
  if (controller_v_327) {
    sub_118 = sub_133;
  } else {
    sub_118 = sub_119;
  };
  sub_117 = sub_118;
  if (controller_v_328) {
    sub_139 = sub_120;
  } else {
    sub_139 = sub_135;
  };
  if (controller_v_327) {
    sub_138 = sub_133;
  } else {
    sub_138 = sub_139;
  };
  if (controller_v_386) {
    sub_116 = sub_138;
  } else {
    sub_116 = sub_117;
  };
  if (controller_wash_finish) {
    sub_105 = sub_106;
  } else {
    sub_105 = sub_116;
  };
  if (controller_v_388) {
    sub_104 = sub_106;
  } else {
    sub_104 = sub_105;
  };
  if (controller_wash_finish) {
    sub_140 = sub_116;
  } else {
    sub_140 = sub_117;
  };
  if (controller_wash_start) {
    v_491 = sub_118;
  } else {
    v_491 = sub_107;
  };
  if (controller_v_386) {
    sub_141 = v_491;
  } else {
    sub_141 = sub_106;
  };
  if (controller_v_388) {
    v_497 = sub_141;
  } else {
    v_497 = sub_140;
  };
  if (controller_v_387) {
    sub_103 = v_497;
  } else {
    sub_103 = sub_104;
  };
  sub_102 = sub_103;
  sub_101 = sub_102;
  if (controller_v_423) {
    v_505 = sub_19;
  } else {
    v_505 = sub_101;
  };
  if (controller_rad_down1) {
    sub_60 = v_504;
  } else {
    sub_60 = v_505;
  };
  if (controller_v_424) {
    sub_2 = sub_60;
  } else {
    sub_2 = sub_3;
  };
  sub_146 = sub_98;
  sub_145 = sub_146;
  v_490 = (controller_ck_22_1&&false);
  v_488 = !(controller_ck_22_1);
  v_489 = (v_488&&false);
  if (controller_presence) {
    sub_159 = v_489;
  } else {
    sub_159 = v_490;
  };
  sub_158 = sub_159;
  sub_157 = sub_158;
  sub_156 = sub_157;
  sub_155 = sub_156;
  sub_154 = sub_155;
  sub_153 = sub_154;
  sub_152 = sub_153;
  sub_151 = sub_152;
  sub_150 = sub_151;
  sub_149 = sub_150;
  sub_148 = sub_149;
  sub_147 = sub_148;
  if (controller_v_423) {
    sub_144 = sub_147;
  } else {
    sub_144 = sub_145;
  };
  if (controller_rad_up1) {
    sub_143 = sub_144;
  } else {
    sub_143 = sub_145;
  };
  if (controller_v_423) {
    v_486 = sub_145;
  } else {
    v_486 = false;
  };
  v_484 = !(controller_ck_22_1);
  v_485 = (v_484||false);
  v = (controller_ck_22_1||false);
  if (controller_presence) {
    sub_173 = v;
  } else {
    sub_173 = v_485;
  };
  sub_172 = sub_173;
  sub_171 = sub_172;
  sub_170 = sub_171;
  sub_169 = sub_170;
  sub_168 = sub_169;
  sub_167 = sub_168;
  sub_166 = sub_167;
  sub_165 = sub_166;
  sub_164 = sub_165;
  sub_163 = sub_164;
  sub_162 = sub_163;
  sub_161 = sub_162;
  if (controller_v_423) {
    v_487 = sub_147;
  } else {
    v_487 = sub_161;
  };
  if (controller_rad_down1) {
    sub_160 = v_486;
  } else {
    sub_160 = v_487;
  };
  if (controller_v_424) {
    sub_142 = sub_160;
  } else {
    sub_142 = sub_143;
  };
  if (controller_ck_16_1) {
    v_514 = sub_2;
    v_513 = sub_142;
  } else {
    v_514 = sub_142;
    v_513 = sub_2;
  };
  if (controller_push_janela) {
    v_515 = v_513;
  } else {
    v_515 = v_514;
  };
  if (controller_c_window) {
    sub_1 = v_515;
  } else {
    sub_1 = sub_2;
  };
  sub_175 = sub_142;
  sub_174 = sub_175;
  if (controller_ck_14_1) {
    v_517 = sub_1;
    v_516 = sub_174;
  } else {
    v_517 = sub_174;
    v_516 = sub_1;
  };
  if (controller_push_porta) {
    v_518 = v_516;
  } else {
    v_518 = v_517;
  };
  if (controller_c_door) {
    sub_0 = v_518;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_rad_c1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_window_step(
  int controller_push_porta, int controller_push_janela,
  int controller_rad_up1, int controller_rad_down1, int controller_rad_up2,
  int controller_rad_down2, int controller_wash_start,
  int controller_wash_finish, int controller_oven_start,
  int controller_oven_finish, int controller_temp_ok, int controller_cold,
  int controller_presence, int controller_light_switch,
  int controller_tv_switch, int controller_eco_in, int controller_comfort_in,
  int controller_v_424, int controller_v_423, int controller_pnr_8,
  int controller_v_388, int controller_v_387, int controller_v_386,
  int controller_pnr_7, int controller_v_329, int controller_v_328,
  int controller_v_327, int controller_pnr_6, int controller_ck_14_1,
  int controller_pnr_5, int controller_ck_16_1, int controller_pnr_4,
  int controller_ck_18_1, int controller_pnr_3, int controller_ck_20_1,
  int controller_pnr_2, int controller_ck_22_1, int controller_pnr_1,
  int controller_v_290, int controller_v_289, int controller_pnr,
  int p_controller_c_oven1, int p_controller_c_wash1, int p_controller_c_tv2,
  int p_controller_c_tv1, int p_controller_c_light2,
  int p_controller_c_light1, int p_controller_rad_c2,
  int p_controller_rad_c1, int p_controller_c_window,
  int p_controller_c_door, int controller_c_door,
  Controller_controller__controller_controller_controller_c_window_out* _out) {
  
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
  sub_18 = p_controller_c_window;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  if (controller_ck_22_1) {
    v_534 = false;
    v_533 = sub_18;
  } else {
    v_534 = sub_18;
    v_533 = false;
  };
  if (controller_presence) {
    sub_34 = v_533;
  } else {
    sub_34 = v_534;
  };
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  if (controller_eco_in) {
    sub_47 = sub_33;
  } else {
    sub_47 = false;
  };
  if (controller_comfort_in) {
    v_531 = sub_47;
    sub_46 = sub_32;
  } else {
    v_531 = sub_32;
    sub_46 = sub_47;
  };
  if (controller_v_290) {
    sub_45 = sub_31;
  } else {
    sub_45 = sub_46;
  };
  if (controller_eco_in) {
    sub_49 = false;
  } else {
    sub_49 = sub_33;
  };
  sub_48 = sub_49;
  if (controller_v_290) {
    v_532 = v_531;
  } else {
    v_532 = sub_48;
  };
  if (controller_v_289) {
    sub_44 = v_532;
  } else {
    sub_44 = sub_45;
  };
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  if (controller_v_328) {
    sub_38 = sub_39;
  } else {
    sub_38 = sub_26;
  };
  if (controller_v_329) {
    sub_51 = sub_39;
  } else {
    sub_51 = sub_26;
  };
  if (controller_oven_finish) {
    sub_54 = sub_30;
  } else {
    sub_54 = sub_43;
  };
  if (controller_temp_ok) {
    sub_53 = sub_28;
  } else {
    sub_53 = sub_54;
  };
  if (controller_v_329) {
    sub_52 = sub_53;
  } else {
    sub_52 = sub_26;
  };
  if (controller_v_328) {
    sub_50 = sub_52;
  } else {
    sub_50 = sub_51;
  };
  if (controller_v_327) {
    sub_37 = sub_50;
  } else {
    sub_37 = sub_38;
  };
  sub_36 = sub_37;
  if (controller_v_328) {
    sub_56 = sub_39;
  } else {
    sub_56 = sub_52;
  };
  if (controller_v_327) {
    sub_55 = sub_50;
  } else {
    sub_55 = sub_56;
  };
  if (controller_v_386) {
    sub_35 = sub_55;
  } else {
    sub_35 = sub_36;
  };
  if (controller_wash_finish) {
    sub_24 = sub_25;
  } else {
    sub_24 = sub_35;
  };
  sub_57 = sub_25;
  if (controller_v_388) {
    sub_23 = sub_57;
  } else {
    sub_23 = sub_24;
  };
  if (controller_wash_finish) {
    sub_58 = sub_35;
  } else {
    sub_58 = sub_36;
  };
  if (controller_wash_start) {
    v_530 = sub_37;
  } else {
    v_530 = sub_26;
  };
  if (controller_v_386) {
    sub_59 = v_530;
  } else {
    sub_59 = sub_25;
  };
  if (controller_v_388) {
    v_535 = sub_59;
  } else {
    v_535 = sub_58;
  };
  if (controller_v_387) {
    sub_22 = v_535;
  } else {
    sub_22 = sub_23;
  };
  sub_21 = sub_22;
  sub_20 = sub_21;
  if (controller_v_423) {
    v_536 = sub_5;
  } else {
    v_536 = sub_20;
  };
  if (controller_rad_down1) {
    sub_19 = v_536;
  } else {
    sub_19 = sub_5;
  };
  if (controller_v_424) {
    sub_2 = sub_19;
  } else {
    sub_2 = sub_3;
  };
  v_528 = !(controller_ck_22_1);
  v_529 = (v_528&&sub_18);
  v_527 = (controller_ck_22_1&&sub_18);
  if (controller_presence) {
    sub_75 = v_527;
  } else {
    sub_75 = v_529;
  };
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_66 = sub_67;
  sub_65 = sub_66;
  sub_64 = sub_65;
  sub_63 = sub_64;
  sub_62 = sub_63;
  sub_61 = sub_62;
  v_524 = (controller_ck_22_1&&false);
  v_522 = !(controller_ck_22_1);
  v_523 = (v_522&&false);
  if (controller_presence) {
    sub_91 = v_523;
  } else {
    sub_91 = v_524;
  };
  sub_90 = sub_91;
  sub_89 = sub_90;
  sub_88 = sub_89;
  sub_87 = sub_88;
  sub_86 = sub_87;
  sub_85 = sub_86;
  sub_84 = sub_85;
  sub_83 = sub_84;
  sub_82 = sub_83;
  if (controller_eco_in) {
    sub_104 = sub_90;
  } else {
    sub_104 = false;
  };
  if (controller_comfort_in) {
    v_520 = sub_104;
    sub_103 = sub_89;
  } else {
    v_520 = sub_89;
    sub_103 = sub_104;
  };
  if (controller_v_290) {
    sub_102 = sub_88;
  } else {
    sub_102 = sub_103;
  };
  if (controller_eco_in) {
    sub_106 = false;
  } else {
    sub_106 = sub_90;
  };
  sub_105 = sub_106;
  if (controller_v_290) {
    v_521 = v_520;
  } else {
    v_521 = sub_105;
  };
  if (controller_v_289) {
    sub_101 = v_521;
  } else {
    sub_101 = sub_102;
  };
  sub_100 = sub_101;
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  if (controller_v_328) {
    sub_95 = sub_96;
  } else {
    sub_95 = sub_83;
  };
  if (controller_v_329) {
    sub_108 = sub_96;
  } else {
    sub_108 = sub_83;
  };
  if (controller_oven_finish) {
    sub_111 = sub_87;
  } else {
    sub_111 = sub_100;
  };
  if (controller_temp_ok) {
    sub_110 = sub_85;
  } else {
    sub_110 = sub_111;
  };
  if (controller_v_329) {
    sub_109 = sub_110;
  } else {
    sub_109 = sub_83;
  };
  if (controller_v_328) {
    sub_107 = sub_109;
  } else {
    sub_107 = sub_108;
  };
  if (controller_v_327) {
    sub_94 = sub_107;
  } else {
    sub_94 = sub_95;
  };
  sub_93 = sub_94;
  if (controller_v_328) {
    sub_113 = sub_96;
  } else {
    sub_113 = sub_109;
  };
  if (controller_v_327) {
    sub_112 = sub_107;
  } else {
    sub_112 = sub_113;
  };
  if (controller_v_386) {
    sub_92 = sub_112;
  } else {
    sub_92 = sub_93;
  };
  if (controller_wash_finish) {
    sub_81 = sub_82;
  } else {
    sub_81 = sub_92;
  };
  if (controller_v_388) {
    sub_80 = sub_82;
  } else {
    sub_80 = sub_81;
  };
  if (controller_wash_finish) {
    sub_114 = sub_92;
  } else {
    sub_114 = sub_93;
  };
  if (controller_wash_start) {
    v_519 = sub_94;
  } else {
    v_519 = sub_83;
  };
  if (controller_v_386) {
    sub_115 = v_519;
  } else {
    sub_115 = sub_82;
  };
  if (controller_v_388) {
    v_525 = sub_115;
  } else {
    v_525 = sub_114;
  };
  if (controller_v_387) {
    sub_79 = v_525;
  } else {
    sub_79 = sub_80;
  };
  sub_78 = sub_79;
  sub_77 = sub_78;
  if (controller_v_423) {
    v_526 = sub_63;
  } else {
    v_526 = sub_77;
  };
  if (controller_rad_down1) {
    sub_76 = v_526;
  } else {
    sub_76 = sub_63;
  };
  if (controller_v_424) {
    sub_60 = sub_76;
  } else {
    sub_60 = sub_61;
  };
  if (controller_ck_16_1) {
    v_538 = sub_2;
    v_537 = sub_60;
  } else {
    v_538 = sub_60;
    v_537 = sub_2;
  };
  if (controller_push_janela) {
    sub_1 = v_537;
  } else {
    sub_1 = v_538;
  };
  sub_121 = sub_57;
  sub_120 = sub_121;
  sub_119 = sub_120;
  sub_118 = sub_119;
  if (controller_v_423) {
    v = sub_120;
  } else {
    v = false;
  };
  if (controller_rad_down1) {
    sub_122 = v;
  } else {
    sub_122 = sub_120;
  };
  if (controller_v_424) {
    sub_117 = sub_122;
  } else {
    sub_117 = sub_118;
  };
  sub_116 = sub_117;
  if (controller_ck_14_1) {
    v_540 = sub_1;
    v_539 = sub_116;
  } else {
    v_540 = sub_116;
    v_539 = sub_1;
  };
  if (controller_push_porta) {
    v_541 = v_539;
  } else {
    v_541 = v_540;
  };
  if (controller_c_door) {
    sub_0 = v_541;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_window = sub_0;;
}

void Controller_controller__controller_controller_controller_c_door_step(
  int controller_push_porta, int controller_push_janela,
  int controller_rad_up1, int controller_rad_down1, int controller_rad_up2,
  int controller_rad_down2, int controller_wash_start,
  int controller_wash_finish, int controller_oven_start,
  int controller_oven_finish, int controller_temp_ok, int controller_cold,
  int controller_presence, int controller_light_switch,
  int controller_tv_switch, int controller_eco_in, int controller_comfort_in,
  int controller_v_424, int controller_v_423, int controller_pnr_8,
  int controller_v_388, int controller_v_387, int controller_v_386,
  int controller_pnr_7, int controller_v_329, int controller_v_328,
  int controller_v_327, int controller_pnr_6, int controller_ck_14_1,
  int controller_pnr_5, int controller_ck_16_1, int controller_pnr_4,
  int controller_ck_18_1, int controller_pnr_3, int controller_ck_20_1,
  int controller_pnr_2, int controller_ck_22_1, int controller_pnr_1,
  int controller_v_290, int controller_v_289, int controller_pnr,
  int p_controller_c_oven1, int p_controller_c_wash1, int p_controller_c_tv2,
  int p_controller_c_tv1, int p_controller_c_light2,
  int p_controller_c_light1, int p_controller_rad_c2,
  int p_controller_rad_c1, int p_controller_c_window,
  int p_controller_c_door,
  Controller_controller__controller_controller_controller_c_door_out* _out) {
  
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
  sub_18 = p_controller_c_door;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  if (controller_ck_22_1) {
    v_556 = false;
    v_555 = sub_18;
  } else {
    v_556 = sub_18;
    v_555 = false;
  };
  if (controller_presence) {
    sub_34 = v_555;
  } else {
    sub_34 = v_556;
  };
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  if (controller_eco_in) {
    sub_47 = sub_33;
  } else {
    sub_47 = false;
  };
  if (controller_comfort_in) {
    v_553 = sub_47;
    sub_46 = sub_32;
  } else {
    v_553 = sub_32;
    sub_46 = sub_47;
  };
  if (controller_v_290) {
    sub_45 = sub_31;
  } else {
    sub_45 = sub_46;
  };
  if (controller_eco_in) {
    sub_49 = false;
  } else {
    sub_49 = sub_33;
  };
  sub_48 = sub_49;
  if (controller_v_290) {
    v_554 = v_553;
  } else {
    v_554 = sub_48;
  };
  if (controller_v_289) {
    sub_44 = v_554;
  } else {
    sub_44 = sub_45;
  };
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  if (controller_v_328) {
    sub_38 = sub_39;
  } else {
    sub_38 = sub_26;
  };
  if (controller_v_329) {
    sub_51 = sub_39;
  } else {
    sub_51 = sub_26;
  };
  if (controller_oven_finish) {
    sub_54 = sub_30;
  } else {
    sub_54 = sub_43;
  };
  if (controller_temp_ok) {
    sub_53 = sub_28;
  } else {
    sub_53 = sub_54;
  };
  if (controller_v_329) {
    sub_52 = sub_53;
  } else {
    sub_52 = sub_26;
  };
  if (controller_v_328) {
    sub_50 = sub_52;
  } else {
    sub_50 = sub_51;
  };
  if (controller_v_327) {
    sub_37 = sub_50;
  } else {
    sub_37 = sub_38;
  };
  sub_36 = sub_37;
  if (controller_v_328) {
    sub_56 = sub_39;
  } else {
    sub_56 = sub_52;
  };
  if (controller_v_327) {
    sub_55 = sub_50;
  } else {
    sub_55 = sub_56;
  };
  if (controller_v_386) {
    sub_35 = sub_55;
  } else {
    sub_35 = sub_36;
  };
  if (controller_wash_finish) {
    sub_24 = sub_25;
  } else {
    sub_24 = sub_35;
  };
  if (controller_v_388) {
    sub_23 = sub_25;
  } else {
    sub_23 = sub_24;
  };
  if (controller_wash_finish) {
    sub_57 = sub_35;
  } else {
    sub_57 = sub_36;
  };
  if (controller_wash_start) {
    v_552 = sub_37;
  } else {
    v_552 = sub_26;
  };
  if (controller_v_386) {
    sub_58 = v_552;
  } else {
    sub_58 = sub_25;
  };
  if (controller_v_388) {
    v_557 = sub_58;
  } else {
    v_557 = sub_57;
  };
  if (controller_v_387) {
    sub_22 = v_557;
  } else {
    sub_22 = sub_23;
  };
  sub_21 = sub_22;
  sub_20 = sub_21;
  if (controller_v_423) {
    v_558 = sub_5;
  } else {
    v_558 = sub_20;
  };
  if (controller_rad_down1) {
    sub_19 = v_558;
  } else {
    sub_19 = sub_5;
  };
  if (controller_v_424) {
    sub_2 = sub_19;
  } else {
    sub_2 = sub_3;
  };
  sub_1 = sub_2;
  v_550 = !(controller_ck_22_1);
  v_551 = (v_550&&sub_18);
  v_549 = (controller_ck_22_1&&sub_18);
  if (controller_presence) {
    sub_75 = v_549;
  } else {
    sub_75 = v_551;
  };
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_66 = sub_67;
  sub_65 = sub_66;
  sub_64 = sub_65;
  sub_63 = sub_64;
  sub_62 = sub_63;
  sub_61 = sub_62;
  v_546 = (controller_ck_22_1&&false);
  v_544 = !(controller_ck_22_1);
  v_545 = (v_544&&false);
  if (controller_presence) {
    sub_91 = v_545;
  } else {
    sub_91 = v_546;
  };
  sub_90 = sub_91;
  sub_89 = sub_90;
  sub_88 = sub_89;
  sub_87 = sub_88;
  sub_86 = sub_87;
  sub_85 = sub_86;
  sub_84 = sub_85;
  sub_83 = sub_84;
  sub_82 = sub_83;
  if (controller_eco_in) {
    sub_104 = sub_90;
  } else {
    sub_104 = false;
  };
  if (controller_comfort_in) {
    v_542 = sub_104;
    sub_103 = sub_89;
  } else {
    v_542 = sub_89;
    sub_103 = sub_104;
  };
  if (controller_v_290) {
    sub_102 = sub_88;
  } else {
    sub_102 = sub_103;
  };
  if (controller_eco_in) {
    sub_106 = false;
  } else {
    sub_106 = sub_90;
  };
  sub_105 = sub_106;
  if (controller_v_290) {
    v_543 = v_542;
  } else {
    v_543 = sub_105;
  };
  if (controller_v_289) {
    sub_101 = v_543;
  } else {
    sub_101 = sub_102;
  };
  sub_100 = sub_101;
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  if (controller_v_328) {
    sub_95 = sub_96;
  } else {
    sub_95 = sub_83;
  };
  if (controller_v_329) {
    sub_108 = sub_96;
  } else {
    sub_108 = sub_83;
  };
  if (controller_oven_finish) {
    sub_111 = sub_87;
  } else {
    sub_111 = sub_100;
  };
  if (controller_temp_ok) {
    sub_110 = sub_85;
  } else {
    sub_110 = sub_111;
  };
  if (controller_v_329) {
    sub_109 = sub_110;
  } else {
    sub_109 = sub_83;
  };
  if (controller_v_328) {
    sub_107 = sub_109;
  } else {
    sub_107 = sub_108;
  };
  if (controller_v_327) {
    sub_94 = sub_107;
  } else {
    sub_94 = sub_95;
  };
  sub_93 = sub_94;
  if (controller_v_328) {
    sub_113 = sub_96;
  } else {
    sub_113 = sub_109;
  };
  if (controller_v_327) {
    sub_112 = sub_107;
  } else {
    sub_112 = sub_113;
  };
  if (controller_v_386) {
    sub_92 = sub_112;
  } else {
    sub_92 = sub_93;
  };
  if (controller_wash_finish) {
    sub_81 = sub_82;
  } else {
    sub_81 = sub_92;
  };
  if (controller_v_388) {
    sub_80 = sub_82;
  } else {
    sub_80 = sub_81;
  };
  if (controller_wash_finish) {
    sub_114 = sub_92;
  } else {
    sub_114 = sub_93;
  };
  if (controller_wash_start) {
    v = sub_94;
  } else {
    v = sub_83;
  };
  if (controller_v_386) {
    sub_115 = v;
  } else {
    sub_115 = sub_82;
  };
  if (controller_v_388) {
    v_547 = sub_115;
  } else {
    v_547 = sub_114;
  };
  if (controller_v_387) {
    sub_79 = v_547;
  } else {
    sub_79 = sub_80;
  };
  sub_78 = sub_79;
  sub_77 = sub_78;
  if (controller_v_423) {
    v_548 = sub_63;
  } else {
    v_548 = sub_77;
  };
  if (controller_rad_down1) {
    sub_76 = v_548;
  } else {
    sub_76 = sub_63;
  };
  if (controller_v_424) {
    sub_60 = sub_76;
  } else {
    sub_60 = sub_61;
  };
  sub_59 = sub_60;
  if (controller_ck_14_1) {
    v_560 = sub_1;
    v_559 = sub_59;
  } else {
    v_560 = sub_59;
    v_559 = sub_1;
  };
  if (controller_push_porta) {
    sub_0 = v_559;
  } else {
    sub_0 = v_560;
  };
  _out->controller_c_door = sub_0;;
}

void Controller_controller__controller_controller_step(int controller_push_porta,
                                                       int controller_push_janela,
                                                       int controller_rad_up1,
                                                       int controller_rad_down1,
                                                       int controller_rad_up2,
                                                       int controller_rad_down2,
                                                       int controller_wash_start,
                                                       int controller_wash_finish,
                                                       int controller_oven_start,
                                                       int controller_oven_finish,
                                                       int controller_temp_ok,
                                                       int controller_cold,
                                                       int controller_presence,
                                                       int controller_light_switch,
                                                       int controller_tv_switch,
                                                       int controller_eco_in,
                                                       int controller_comfort_in,
                                                       int controller_v_424,
                                                       int controller_v_423,
                                                       int controller_pnr_8,
                                                       int controller_v_388,
                                                       int controller_v_387,
                                                       int controller_v_386,
                                                       int controller_pnr_7,
                                                       int controller_v_329,
                                                       int controller_v_328,
                                                       int controller_v_327,
                                                       int controller_pnr_6,
                                                       int controller_ck_14_1,
                                                       int controller_pnr_5,
                                                       int controller_ck_16_1,
                                                       int controller_pnr_4,
                                                       int controller_ck_18_1,
                                                       int controller_pnr_3,
                                                       int controller_ck_20_1,
                                                       int controller_pnr_2,
                                                       int controller_ck_22_1,
                                                       int controller_pnr_1,
                                                       int controller_v_290,
                                                       int controller_v_289,
                                                       int controller_pnr,
                                                       int p_controller_c_oven1,
                                                       int p_controller_c_wash1,
                                                       int p_controller_c_tv2,
                                                       int p_controller_c_tv1,
                                                       int p_controller_c_light2,
                                                       int p_controller_c_light1,
                                                       int p_controller_rad_c2,
                                                       int p_controller_rad_c1,
                                                       int p_controller_c_window,
                                                       int p_controller_c_door,
                                                       Controller_controller__controller_controller_out* _out) {
  Controller_controller__controller_controller_controller_rad_c2_out Controller_controller__controller_controller_controller_rad_c2_out_st;
  Controller_controller__controller_controller_controller_c_wash1_out Controller_controller__controller_controller_controller_c_wash1_out_st;
  Controller_controller__controller_controller_controller_c_door_out Controller_controller__controller_controller_controller_c_door_out_st;
  Controller_controller__controller_controller_controller_c_window_out Controller_controller__controller_controller_controller_c_window_out_st;
  Controller_controller__controller_controller_controller_c_light2_out Controller_controller__controller_controller_controller_c_light2_out_st;
  Controller_controller__controller_controller_controller_c_oven1_out Controller_controller__controller_controller_controller_c_oven1_out_st;
  Controller_controller__controller_controller_controller_c_light1_out Controller_controller__controller_controller_controller_c_light1_out_st;
  Controller_controller__controller_controller_controller_c_tv1_out Controller_controller__controller_controller_controller_c_tv1_out_st;
  Controller_controller__controller_controller_controller_rad_c1_out Controller_controller__controller_controller_controller_rad_c1_out_st;
  Controller_controller__controller_controller_controller_c_tv2_out Controller_controller__controller_controller_controller_c_tv2_out_st;
  Controller_controller__controller_controller_controller_c_door_step(
  controller_push_porta, controller_push_janela, controller_rad_up1,
  controller_rad_down1, controller_rad_up2, controller_rad_down2,
  controller_wash_start, controller_wash_finish, controller_oven_start,
  controller_oven_finish, controller_temp_ok, controller_cold,
  controller_presence, controller_light_switch, controller_tv_switch,
  controller_eco_in, controller_comfort_in, controller_v_424,
  controller_v_423, controller_pnr_8, controller_v_388, controller_v_387,
  controller_v_386, controller_pnr_7, controller_v_329, controller_v_328,
  controller_v_327, controller_pnr_6, controller_ck_14_1, controller_pnr_5,
  controller_ck_16_1, controller_pnr_4, controller_ck_18_1, controller_pnr_3,
  controller_ck_20_1, controller_pnr_2, controller_ck_22_1, controller_pnr_1,
  controller_v_290, controller_v_289, controller_pnr, p_controller_c_oven1,
  p_controller_c_wash1, p_controller_c_tv2, p_controller_c_tv1,
  p_controller_c_light2, p_controller_c_light1, p_controller_rad_c2,
  p_controller_rad_c1, p_controller_c_window, p_controller_c_door,
  &Controller_controller__controller_controller_controller_c_door_out_st);
  _out->controller_c_door = Controller_controller__controller_controller_controller_c_door_out_st.controller_c_door;
  Controller_controller__controller_controller_controller_c_window_step(
  controller_push_porta, controller_push_janela, controller_rad_up1,
  controller_rad_down1, controller_rad_up2, controller_rad_down2,
  controller_wash_start, controller_wash_finish, controller_oven_start,
  controller_oven_finish, controller_temp_ok, controller_cold,
  controller_presence, controller_light_switch, controller_tv_switch,
  controller_eco_in, controller_comfort_in, controller_v_424,
  controller_v_423, controller_pnr_8, controller_v_388, controller_v_387,
  controller_v_386, controller_pnr_7, controller_v_329, controller_v_328,
  controller_v_327, controller_pnr_6, controller_ck_14_1, controller_pnr_5,
  controller_ck_16_1, controller_pnr_4, controller_ck_18_1, controller_pnr_3,
  controller_ck_20_1, controller_pnr_2, controller_ck_22_1, controller_pnr_1,
  controller_v_290, controller_v_289, controller_pnr, p_controller_c_oven1,
  p_controller_c_wash1, p_controller_c_tv2, p_controller_c_tv1,
  p_controller_c_light2, p_controller_c_light1, p_controller_rad_c2,
  p_controller_rad_c1, p_controller_c_window, p_controller_c_door,
  _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_window_out_st);
  _out->controller_c_window = Controller_controller__controller_controller_controller_c_window_out_st.controller_c_window;
  Controller_controller__controller_controller_controller_rad_c1_step(
  controller_push_porta, controller_push_janela, controller_rad_up1,
  controller_rad_down1, controller_rad_up2, controller_rad_down2,
  controller_wash_start, controller_wash_finish, controller_oven_start,
  controller_oven_finish, controller_temp_ok, controller_cold,
  controller_presence, controller_light_switch, controller_tv_switch,
  controller_eco_in, controller_comfort_in, controller_v_424,
  controller_v_423, controller_pnr_8, controller_v_388, controller_v_387,
  controller_v_386, controller_pnr_7, controller_v_329, controller_v_328,
  controller_v_327, controller_pnr_6, controller_ck_14_1, controller_pnr_5,
  controller_ck_16_1, controller_pnr_4, controller_ck_18_1, controller_pnr_3,
  controller_ck_20_1, controller_pnr_2, controller_ck_22_1, controller_pnr_1,
  controller_v_290, controller_v_289, controller_pnr, p_controller_c_oven1,
  p_controller_c_wash1, p_controller_c_tv2, p_controller_c_tv1,
  p_controller_c_light2, p_controller_c_light1, p_controller_rad_c2,
  p_controller_rad_c1, p_controller_c_window, p_controller_c_door,
  _out->controller_c_window, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_rad_c1_out_st);
  _out->controller_rad_c1 = Controller_controller__controller_controller_controller_rad_c1_out_st.controller_rad_c1;
  Controller_controller__controller_controller_controller_rad_c2_step(
  controller_push_porta, controller_push_janela, controller_rad_up1,
  controller_rad_down1, controller_rad_up2, controller_rad_down2,
  controller_wash_start, controller_wash_finish, controller_oven_start,
  controller_oven_finish, controller_temp_ok, controller_cold,
  controller_presence, controller_light_switch, controller_tv_switch,
  controller_eco_in, controller_comfort_in, controller_v_424,
  controller_v_423, controller_pnr_8, controller_v_388, controller_v_387,
  controller_v_386, controller_pnr_7, controller_v_329, controller_v_328,
  controller_v_327, controller_pnr_6, controller_ck_14_1, controller_pnr_5,
  controller_ck_16_1, controller_pnr_4, controller_ck_18_1, controller_pnr_3,
  controller_ck_20_1, controller_pnr_2, controller_ck_22_1, controller_pnr_1,
  controller_v_290, controller_v_289, controller_pnr, p_controller_c_oven1,
  p_controller_c_wash1, p_controller_c_tv2, p_controller_c_tv1,
  p_controller_c_light2, p_controller_c_light1, p_controller_rad_c2,
  p_controller_rad_c1, p_controller_c_window, p_controller_c_door,
  _out->controller_rad_c1, _out->controller_c_window,
  _out->controller_c_door,
  &Controller_controller__controller_controller_controller_rad_c2_out_st);
  _out->controller_rad_c2 = Controller_controller__controller_controller_controller_rad_c2_out_st.controller_rad_c2;
  Controller_controller__controller_controller_controller_c_light1_step(
  controller_push_porta, controller_push_janela, controller_rad_up1,
  controller_rad_down1, controller_rad_up2, controller_rad_down2,
  controller_wash_start, controller_wash_finish, controller_oven_start,
  controller_oven_finish, controller_temp_ok, controller_cold,
  controller_presence, controller_light_switch, controller_tv_switch,
  controller_eco_in, controller_comfort_in, controller_v_424,
  controller_v_423, controller_pnr_8, controller_v_388, controller_v_387,
  controller_v_386, controller_pnr_7, controller_v_329, controller_v_328,
  controller_v_327, controller_pnr_6, controller_ck_14_1, controller_pnr_5,
  controller_ck_16_1, controller_pnr_4, controller_ck_18_1, controller_pnr_3,
  controller_ck_20_1, controller_pnr_2, controller_ck_22_1, controller_pnr_1,
  controller_v_290, controller_v_289, controller_pnr, p_controller_c_oven1,
  p_controller_c_wash1, p_controller_c_tv2, p_controller_c_tv1,
  p_controller_c_light2, p_controller_c_light1, p_controller_rad_c2,
  p_controller_rad_c1, p_controller_c_window, p_controller_c_door,
  _out->controller_rad_c2, _out->controller_rad_c1,
  _out->controller_c_window, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_light1_out_st);
  _out->controller_c_light1 = Controller_controller__controller_controller_controller_c_light1_out_st.controller_c_light1;
  Controller_controller__controller_controller_controller_c_light2_step(
  controller_push_porta, controller_push_janela, controller_rad_up1,
  controller_rad_down1, controller_rad_up2, controller_rad_down2,
  controller_wash_start, controller_wash_finish, controller_oven_start,
  controller_oven_finish, controller_temp_ok, controller_cold,
  controller_presence, controller_light_switch, controller_tv_switch,
  controller_eco_in, controller_comfort_in, controller_v_424,
  controller_v_423, controller_pnr_8, controller_v_388, controller_v_387,
  controller_v_386, controller_pnr_7, controller_v_329, controller_v_328,
  controller_v_327, controller_pnr_6, controller_ck_14_1, controller_pnr_5,
  controller_ck_16_1, controller_pnr_4, controller_ck_18_1, controller_pnr_3,
  controller_ck_20_1, controller_pnr_2, controller_ck_22_1, controller_pnr_1,
  controller_v_290, controller_v_289, controller_pnr, p_controller_c_oven1,
  p_controller_c_wash1, p_controller_c_tv2, p_controller_c_tv1,
  p_controller_c_light2, p_controller_c_light1, p_controller_rad_c2,
  p_controller_rad_c1, p_controller_c_window, p_controller_c_door,
  _out->controller_c_light1, _out->controller_rad_c2,
  _out->controller_rad_c1, _out->controller_c_window,
  _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_light2_out_st);
  _out->controller_c_light2 = Controller_controller__controller_controller_controller_c_light2_out_st.controller_c_light2;
  Controller_controller__controller_controller_controller_c_tv1_step(
  controller_push_porta, controller_push_janela, controller_rad_up1,
  controller_rad_down1, controller_rad_up2, controller_rad_down2,
  controller_wash_start, controller_wash_finish, controller_oven_start,
  controller_oven_finish, controller_temp_ok, controller_cold,
  controller_presence, controller_light_switch, controller_tv_switch,
  controller_eco_in, controller_comfort_in, controller_v_424,
  controller_v_423, controller_pnr_8, controller_v_388, controller_v_387,
  controller_v_386, controller_pnr_7, controller_v_329, controller_v_328,
  controller_v_327, controller_pnr_6, controller_ck_14_1, controller_pnr_5,
  controller_ck_16_1, controller_pnr_4, controller_ck_18_1, controller_pnr_3,
  controller_ck_20_1, controller_pnr_2, controller_ck_22_1, controller_pnr_1,
  controller_v_290, controller_v_289, controller_pnr, p_controller_c_oven1,
  p_controller_c_wash1, p_controller_c_tv2, p_controller_c_tv1,
  p_controller_c_light2, p_controller_c_light1, p_controller_rad_c2,
  p_controller_rad_c1, p_controller_c_window, p_controller_c_door,
  _out->controller_c_light2, _out->controller_c_light1,
  _out->controller_rad_c2, _out->controller_rad_c1,
  _out->controller_c_window, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_tv1_out_st);
  _out->controller_c_tv1 = Controller_controller__controller_controller_controller_c_tv1_out_st.controller_c_tv1;
  Controller_controller__controller_controller_controller_c_tv2_step(
  controller_push_porta, controller_push_janela, controller_rad_up1,
  controller_rad_down1, controller_rad_up2, controller_rad_down2,
  controller_wash_start, controller_wash_finish, controller_oven_start,
  controller_oven_finish, controller_temp_ok, controller_cold,
  controller_presence, controller_light_switch, controller_tv_switch,
  controller_eco_in, controller_comfort_in, controller_v_424,
  controller_v_423, controller_pnr_8, controller_v_388, controller_v_387,
  controller_v_386, controller_pnr_7, controller_v_329, controller_v_328,
  controller_v_327, controller_pnr_6, controller_ck_14_1, controller_pnr_5,
  controller_ck_16_1, controller_pnr_4, controller_ck_18_1, controller_pnr_3,
  controller_ck_20_1, controller_pnr_2, controller_ck_22_1, controller_pnr_1,
  controller_v_290, controller_v_289, controller_pnr, p_controller_c_oven1,
  p_controller_c_wash1, p_controller_c_tv2, p_controller_c_tv1,
  p_controller_c_light2, p_controller_c_light1, p_controller_rad_c2,
  p_controller_rad_c1, p_controller_c_window, p_controller_c_door,
  _out->controller_c_tv1, _out->controller_c_light2,
  _out->controller_c_light1, _out->controller_rad_c2,
  _out->controller_rad_c1, _out->controller_c_window,
  _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_tv2_out_st);
  _out->controller_c_tv2 = Controller_controller__controller_controller_controller_c_tv2_out_st.controller_c_tv2;
  Controller_controller__controller_controller_controller_c_wash1_step(
  controller_push_porta, controller_push_janela, controller_rad_up1,
  controller_rad_down1, controller_rad_up2, controller_rad_down2,
  controller_wash_start, controller_wash_finish, controller_oven_start,
  controller_oven_finish, controller_temp_ok, controller_cold,
  controller_presence, controller_light_switch, controller_tv_switch,
  controller_eco_in, controller_comfort_in, controller_v_424,
  controller_v_423, controller_pnr_8, controller_v_388, controller_v_387,
  controller_v_386, controller_pnr_7, controller_v_329, controller_v_328,
  controller_v_327, controller_pnr_6, controller_ck_14_1, controller_pnr_5,
  controller_ck_16_1, controller_pnr_4, controller_ck_18_1, controller_pnr_3,
  controller_ck_20_1, controller_pnr_2, controller_ck_22_1, controller_pnr_1,
  controller_v_290, controller_v_289, controller_pnr, p_controller_c_oven1,
  p_controller_c_wash1, p_controller_c_tv2, p_controller_c_tv1,
  p_controller_c_light2, p_controller_c_light1, p_controller_rad_c2,
  p_controller_rad_c1, p_controller_c_window, p_controller_c_door,
  _out->controller_c_tv2, _out->controller_c_tv1, _out->controller_c_light2,
  _out->controller_c_light1, _out->controller_rad_c2,
  _out->controller_rad_c1, _out->controller_c_window,
  _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_wash1_out_st);
  _out->controller_c_wash1 = Controller_controller__controller_controller_controller_c_wash1_out_st.controller_c_wash1;
  Controller_controller__controller_controller_controller_c_oven1_step(
  controller_push_porta, controller_push_janela, controller_rad_up1,
  controller_rad_down1, controller_rad_up2, controller_rad_down2,
  controller_wash_start, controller_wash_finish, controller_oven_start,
  controller_oven_finish, controller_temp_ok, controller_cold,
  controller_presence, controller_light_switch, controller_tv_switch,
  controller_eco_in, controller_comfort_in, controller_v_424,
  controller_v_423, controller_pnr_8, controller_v_388, controller_v_387,
  controller_v_386, controller_pnr_7, controller_v_329, controller_v_328,
  controller_v_327, controller_pnr_6, controller_ck_14_1, controller_pnr_5,
  controller_ck_16_1, controller_pnr_4, controller_ck_18_1, controller_pnr_3,
  controller_ck_20_1, controller_pnr_2, controller_ck_22_1, controller_pnr_1,
  controller_v_290, controller_v_289, controller_pnr, p_controller_c_oven1,
  p_controller_c_wash1, p_controller_c_tv2, p_controller_c_tv1,
  p_controller_c_light2, p_controller_c_light1, p_controller_rad_c2,
  p_controller_rad_c1, p_controller_c_window, p_controller_c_door,
  _out->controller_c_wash1, _out->controller_c_tv2, _out->controller_c_tv1,
  _out->controller_c_light2, _out->controller_c_light1,
  _out->controller_rad_c2, _out->controller_rad_c1,
  _out->controller_c_window, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_oven1_out_st);
  _out->controller_c_oven1 = Controller_controller__controller_controller_controller_c_oven1_out_st.controller_c_oven1;
}

