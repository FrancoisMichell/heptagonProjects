/* --- Generated the 16/7/2018 at 14:7 --- */
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
  int controller_pnr_15, int controller_ck_21_1, int controller_pnr_14,
  int controller_ck_23_1, int controller_pnr_13, int controller_ck_25_1,
  int controller_pnr_12, int controller_ck_27_1, int controller_pnr_11,
  int controller_ck_29_1, int controller_pnr_10, int controller_ck_31_1,
  int controller_pnr_9, int controller_v_221, int controller_v_220,
  int controller_pnr_8, int controller_ck_35_1, int controller_pnr_7,
  int controller_ck_37_1, int controller_pnr_6, int controller_ck_39_1,
  int controller_pnr_5, int controller_ck_41_1, int controller_pnr_4,
  int controller_ck_43_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_blind_1, int controller_c_light_2,
  int controller_c_light_1, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_blind_2_out* _out) {
  
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
  sub_20 = false;
  sub_19 = sub_20;
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
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (controller_ck_29_1) {
    v_76 = false;
    v_75 = sub_19;
  } else {
    v_76 = sub_19;
    v_75 = false;
  };
  if (controller_c_pc) {
    sub_34 = v_75;
  } else {
    sub_34 = v_76;
  };
  sub_33 = sub_34;
  if (controller_c_air_1) {
    v_77 = sub_33;
  } else {
    v_77 = false;
  };
  if (controller_c_air_2) {
    v_78 = v_77;
  } else {
    v_78 = false;
  };
  if (controller_c_air_1) {
    sub_32 = false;
  } else {
    sub_32 = sub_33;
  };
  sub_31 = sub_32;
  if (controller_v_220) {
    v_79 = sub_31;
    sub_30 = v_78;
  } else {
    v_79 = false;
    sub_30 = sub_31;
  };
  if (controller_v_221) {
    v_80 = v_79;
  } else {
    v_80 = sub_30;
  };
  if (controller_c_closet) {
    sub_29 = false;
  } else {
    sub_29 = v_80;
  };
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  if (controller_air_failed_recovered) {
    v_81 = sub_23;
    sub_22 = sub_8;
  } else {
    v_81 = sub_8;
    sub_22 = sub_23;
  };
  if (controller_ck_35_1) {
    sub_21 = v_81;
  } else {
    sub_21 = sub_22;
  };
  if (controller_cleaner) {
    v_82 = sub_21;
    sub_6 = sub_7;
  } else {
    v_82 = sub_7;
    sub_6 = sub_21;
  };
  if (controller_ck_27_1) {
    sub_5 = v_82;
  } else {
    sub_5 = sub_6;
  };
  if (controller_c_window) {
    sub_48 = sub_34;
  } else {
    sub_48 = sub_18;
  };
  sub_47 = sub_48;
  if (controller_c_air_1) {
    sub_49 = sub_17;
  } else {
    sub_49 = sub_48;
  };
  if (controller_c_air_2) {
    v_70 = sub_49;
  } else {
    v_70 = sub_47;
  };
  if (controller_v_220) {
    v_71 = v_70;
  } else {
    v_71 = sub_15;
  };
  if (controller_c_air_2) {
    sub_46 = sub_47;
  } else {
    sub_46 = sub_49;
  };
  if (controller_v_221) {
    sub_45 = v_71;
  } else {
    sub_45 = sub_46;
  };
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (controller_ck_37_1) {
    sub_40 = sub_41;
    v_69 = sub_11;
  } else {
    sub_40 = sub_11;
    v_69 = sub_41;
  };
  if (controller_c_light_1) {
    sub_50 = v_69;
  } else {
    sub_50 = sub_40;
  };
  if (controller_light_switch) {
    v_72 = sub_40;
  } else {
    v_72 = sub_50;
  };
  if (controller_c_light_2) {
    sub_39 = v_72;
  } else {
    sub_39 = sub_50;
  };
  if (controller_air_failed_recovered) {
    v_73 = sub_39;
    sub_38 = sub_8;
  } else {
    v_73 = sub_8;
    sub_38 = sub_39;
  };
  if (controller_ck_35_1) {
    sub_37 = v_73;
  } else {
    sub_37 = sub_38;
  };
  if (controller_cleaner) {
    v_74 = sub_21;
    sub_36 = sub_37;
  } else {
    v_74 = sub_37;
    sub_36 = sub_21;
  };
  if (controller_ck_27_1) {
    sub_35 = v_74;
  } else {
    sub_35 = sub_36;
  };
  if (controller_worker) {
    v_83 = sub_35;
    sub_4 = sub_5;
  } else {
    v_83 = sub_5;
    sub_4 = sub_35;
  };
  if (controller_ck_25_1) {
    sub_3 = v_83;
  } else {
    sub_3 = sub_4;
  };
  if (controller_c_door) {
    v_60 = false;
    sub_70 = sub_20;
  } else {
    v_60 = sub_20;
    sub_70 = false;
  };
  if (controller_ck_21_1) {
    sub_69 = v_60;
  } else {
    sub_69 = sub_70;
  };
  if (controller_c_window) {
    sub_68 = false;
  } else {
    sub_68 = sub_69;
  };
  if (controller_c_air_1) {
    sub_67 = sub_68;
  } else {
    sub_67 = false;
  };
  if (controller_c_air_2) {
    v_61 = false;
  } else {
    v_61 = sub_67;
  };
  if (controller_v_220) {
    v_62 = v_61;
  } else {
    v_62 = false;
  };
  if (controller_c_air_2) {
    sub_66 = sub_67;
  } else {
    sub_66 = false;
  };
  if (controller_c_air_1) {
    sub_71 = false;
  } else {
    sub_71 = sub_68;
  };
  if (controller_v_220) {
    sub_65 = sub_71;
  } else {
    sub_65 = sub_66;
  };
  if (controller_v_221) {
    sub_64 = v_62;
  } else {
    sub_64 = sub_65;
  };
  sub_63 = sub_64;
  if (controller_ck_41_1) {
    v_63 = false;
  } else {
    v_63 = sub_63;
  };
  sub_80 = true;
  if (controller_c_door) {
    v_57 = false;
    sub_79 = sub_80;
  } else {
    v_57 = sub_80;
    sub_79 = false;
  };
  if (controller_ck_21_1) {
    sub_78 = v_57;
  } else {
    sub_78 = sub_79;
  };
  if (controller_c_window) {
    sub_77 = false;
  } else {
    sub_77 = sub_78;
  };
  if (controller_c_air_1) {
    sub_76 = sub_77;
  } else {
    sub_76 = false;
  };
  if (controller_c_air_2) {
    v_58 = false;
  } else {
    v_58 = sub_76;
  };
  if (controller_v_220) {
    v_59 = v_58;
  } else {
    v_59 = false;
  };
  if (controller_c_air_2) {
    sub_75 = sub_76;
  } else {
    sub_75 = false;
  };
  if (controller_c_air_1) {
    sub_81 = false;
  } else {
    sub_81 = sub_77;
  };
  if (controller_v_220) {
    sub_74 = sub_81;
  } else {
    sub_74 = sub_75;
  };
  if (controller_v_221) {
    sub_73 = v_59;
  } else {
    sub_73 = sub_74;
  };
  sub_72 = sub_73;
  if (controller_ck_41_1) {
    sub_62 = sub_72;
  } else {
    sub_62 = sub_63;
  };
  if (controller_blind_switch) {
    v_64 = sub_62;
  } else {
    v_64 = v_63;
  };
  if (controller_ck_41_1) {
    sub_82 = sub_63;
  } else {
    sub_82 = false;
  };
  if (controller_c_blind_1) {
    sub_61 = v_64;
  } else {
    sub_61 = sub_82;
  };
  if (controller_light_failed_recovered) {
    sub_60 = sub_61;
    sub_83 = false;
  } else {
    sub_60 = false;
    sub_83 = sub_61;
  };
  if (controller_ck_39_1) {
    sub_59 = sub_83;
    sub_84 = sub_60;
  } else {
    sub_59 = sub_60;
    sub_84 = sub_83;
  };
  if (controller_ck_37_1) {
    sub_58 = sub_84;
    v_56 = sub_59;
  } else {
    sub_58 = sub_59;
    v_56 = sub_84;
  };
  if (controller_c_light_1) {
    sub_85 = v_56;
  } else {
    sub_85 = sub_58;
  };
  if (controller_light_switch) {
    v_65 = sub_58;
  } else {
    v_65 = sub_85;
  };
  if (controller_c_light_2) {
    sub_57 = v_65;
  } else {
    sub_57 = sub_85;
  };
  sub_98 = sub_80;
  if (controller_ck_29_1) {
    v_48 = false;
    v_47 = sub_98;
  } else {
    v_48 = sub_98;
    v_47 = false;
  };
  if (controller_c_pc) {
    sub_97 = v_47;
  } else {
    sub_97 = v_48;
  };
  sub_96 = sub_97;
  if (controller_c_air_1) {
    v_49 = sub_96;
  } else {
    v_49 = false;
  };
  if (controller_c_air_2) {
    v_50 = v_49;
  } else {
    v_50 = false;
  };
  if (controller_c_air_1) {
    sub_95 = false;
  } else {
    sub_95 = sub_96;
  };
  sub_94 = sub_95;
  if (controller_v_220) {
    v_51 = sub_94;
    sub_93 = v_50;
  } else {
    v_51 = false;
    sub_93 = sub_94;
  };
  if (controller_v_221) {
    v_52 = v_51;
  } else {
    v_52 = sub_93;
  };
  if (controller_c_closet) {
    sub_92 = false;
  } else {
    sub_92 = v_52;
  };
  if (controller_ck_41_1) {
    sub_91 = sub_92;
    sub_99 = false;
  } else {
    sub_91 = sub_29;
    sub_99 = sub_29;
  };
  if (controller_blind_switch) {
    v_53 = sub_91;
  } else {
    v_53 = sub_99;
  };
  if (controller_ck_41_1) {
    sub_100 = sub_29;
  } else {
    sub_100 = false;
  };
  if (controller_c_blind_1) {
    sub_90 = v_53;
  } else {
    sub_90 = sub_100;
  };
  if (controller_light_failed_recovered) {
    v_54 = false;
    sub_89 = sub_90;
  } else {
    v_54 = sub_90;
    sub_89 = false;
  };
  if (controller_ck_39_1) {
    sub_88 = v_54;
  } else {
    sub_88 = sub_89;
  };
  if (controller_ck_41_1) {
    sub_104 = sub_29;
  } else {
    sub_104 = sub_92;
  };
  if (controller_blind_switch) {
    v_45 = sub_104;
  } else {
    v_45 = sub_100;
  };
  if (controller_c_blind_1) {
    sub_103 = v_45;
  } else {
    sub_103 = sub_99;
  };
  if (controller_light_failed_recovered) {
    v_46 = sub_103;
    sub_102 = false;
  } else {
    v_46 = false;
    sub_102 = sub_103;
  };
  if (controller_ck_39_1) {
    sub_101 = v_46;
  } else {
    sub_101 = sub_102;
  };
  if (controller_ck_37_1) {
    sub_87 = sub_101;
    v_44 = sub_88;
  } else {
    sub_87 = sub_88;
    v_44 = sub_101;
  };
  if (controller_c_light_1) {
    sub_105 = v_44;
  } else {
    sub_105 = sub_87;
  };
  if (controller_light_switch) {
    v_55 = sub_87;
  } else {
    v_55 = sub_105;
  };
  if (controller_c_light_2) {
    sub_86 = v_55;
  } else {
    sub_86 = sub_105;
  };
  if (controller_air_failed_recovered) {
    v_66 = sub_86;
    sub_56 = sub_57;
  } else {
    v_66 = sub_57;
    sub_56 = sub_86;
  };
  if (controller_ck_35_1) {
    sub_55 = v_66;
  } else {
    sub_55 = sub_56;
  };
  if (controller_cleaner) {
    v_67 = sub_55;
    sub_54 = sub_7;
  } else {
    v_67 = sub_7;
    sub_54 = sub_55;
  };
  if (controller_ck_27_1) {
    sub_53 = v_67;
  } else {
    sub_53 = sub_54;
  };
  if (controller_c_air_1) {
    v_36 = sub_17;
  } else {
    v_36 = false;
  };
  if (controller_c_air_2) {
    v_37 = v_36;
  } else {
    v_37 = false;
  };
  if (controller_c_air_1) {
    sub_120 = false;
  } else {
    sub_120 = sub_17;
  };
  sub_119 = sub_120;
  if (controller_v_220) {
    v_38 = sub_119;
    sub_118 = v_37;
  } else {
    v_38 = false;
    sub_118 = sub_119;
  };
  if (controller_v_221) {
    sub_117 = v_38;
  } else {
    sub_117 = sub_118;
  };
  sub_116 = sub_117;
  sub_127 = sub_98;
  sub_126 = sub_127;
  if (controller_c_air_1) {
    v_33 = sub_126;
  } else {
    v_33 = false;
  };
  if (controller_c_air_2) {
    v_34 = v_33;
  } else {
    v_34 = false;
  };
  if (controller_c_air_1) {
    sub_125 = false;
  } else {
    sub_125 = sub_126;
  };
  sub_124 = sub_125;
  if (controller_v_220) {
    v_35 = sub_124;
    sub_123 = v_34;
  } else {
    v_35 = false;
    sub_123 = sub_124;
  };
  if (controller_v_221) {
    sub_122 = v_35;
  } else {
    sub_122 = sub_123;
  };
  sub_121 = sub_122;
  if (controller_ck_41_1) {
    sub_115 = sub_121;
    sub_128 = false;
  } else {
    sub_115 = sub_116;
    sub_128 = sub_116;
  };
  if (controller_blind_switch) {
    v_39 = sub_115;
  } else {
    v_39 = sub_128;
  };
  if (controller_ck_41_1) {
    sub_129 = sub_116;
  } else {
    sub_129 = false;
  };
  if (controller_c_blind_1) {
    sub_114 = v_39;
  } else {
    sub_114 = sub_129;
  };
  if (controller_light_failed_recovered) {
    v_40 = false;
    sub_113 = sub_114;
  } else {
    v_40 = sub_114;
    sub_113 = false;
  };
  if (controller_ck_39_1) {
    sub_112 = v_40;
  } else {
    sub_112 = sub_113;
  };
  if (controller_ck_41_1) {
    sub_133 = sub_116;
  } else {
    sub_133 = sub_121;
  };
  if (controller_blind_switch) {
    v_31 = sub_133;
  } else {
    v_31 = sub_129;
  };
  if (controller_c_blind_1) {
    sub_132 = v_31;
  } else {
    sub_132 = sub_128;
  };
  if (controller_light_failed_recovered) {
    v_32 = sub_132;
    sub_131 = false;
  } else {
    v_32 = false;
    sub_131 = sub_132;
  };
  if (controller_ck_39_1) {
    sub_130 = v_32;
  } else {
    sub_130 = sub_131;
  };
  if (controller_ck_37_1) {
    sub_111 = sub_130;
    v_30 = sub_112;
  } else {
    sub_111 = sub_112;
    v_30 = sub_130;
  };
  if (controller_c_light_1) {
    sub_134 = v_30;
  } else {
    sub_134 = sub_111;
  };
  if (controller_light_switch) {
    v_41 = sub_111;
  } else {
    v_41 = sub_134;
  };
  if (controller_c_light_2) {
    sub_110 = v_41;
  } else {
    sub_110 = sub_134;
  };
  if (controller_air_failed_recovered) {
    v_42 = sub_110;
    sub_109 = sub_57;
  } else {
    v_42 = sub_57;
    sub_109 = sub_110;
  };
  if (controller_ck_35_1) {
    sub_108 = v_42;
  } else {
    sub_108 = sub_109;
  };
  if (controller_cleaner) {
    v_43 = sub_55;
    sub_107 = sub_108;
  } else {
    v_43 = sub_108;
    sub_107 = sub_55;
  };
  if (controller_ck_27_1) {
    sub_106 = v_43;
  } else {
    sub_106 = sub_107;
  };
  if (controller_worker) {
    v_68 = sub_106;
    sub_52 = sub_53;
  } else {
    v_68 = sub_53;
    sub_52 = sub_106;
  };
  if (controller_ck_25_1) {
    sub_51 = v_68;
  } else {
    sub_51 = sub_52;
  };
  if (controller_change_shift) {
    v_84 = sub_51;
    sub_2 = sub_3;
  } else {
    v_84 = sub_3;
    sub_2 = sub_51;
  };
  if (controller_ck_1) {
    sub_1 = v_84;
  } else {
    sub_1 = sub_2;
  };
  sub_149 = sub_126;
  sub_148 = sub_149;
  sub_147 = sub_148;
  sub_146 = sub_147;
  sub_145 = sub_146;
  sub_144 = sub_145;
  sub_143 = sub_144;
  sub_142 = sub_143;
  sub_141 = sub_142;
  sub_140 = sub_141;
  sub_157 = sub_92;
  sub_156 = sub_157;
  sub_155 = sub_156;
  sub_154 = sub_155;
  sub_153 = sub_154;
  sub_152 = sub_153;
  if (controller_air_failed_recovered) {
    v_27 = sub_152;
    sub_151 = sub_141;
  } else {
    v_27 = sub_141;
    sub_151 = sub_152;
  };
  if (controller_ck_35_1) {
    sub_150 = v_27;
  } else {
    sub_150 = sub_151;
  };
  if (controller_cleaner) {
    v_28 = sub_150;
    sub_139 = sub_140;
  } else {
    v_28 = sub_140;
    sub_139 = sub_150;
  };
  if (controller_ck_27_1) {
    sub_138 = v_28;
  } else {
    sub_138 = sub_139;
  };
  if (controller_c_window) {
    sub_171 = sub_97;
  } else {
    sub_171 = sub_127;
  };
  sub_170 = sub_171;
  if (controller_c_air_1) {
    sub_172 = sub_126;
  } else {
    sub_172 = sub_171;
  };
  if (controller_c_air_2) {
    v_22 = sub_172;
  } else {
    v_22 = sub_170;
  };
  if (controller_v_220) {
    v_23 = v_22;
  } else {
    v_23 = sub_148;
  };
  if (controller_c_air_2) {
    sub_169 = sub_170;
  } else {
    sub_169 = sub_172;
  };
  if (controller_v_221) {
    sub_168 = v_23;
  } else {
    sub_168 = sub_169;
  };
  sub_167 = sub_168;
  sub_166 = sub_167;
  sub_165 = sub_166;
  sub_164 = sub_165;
  if (controller_ck_37_1) {
    sub_163 = sub_164;
    v_21 = sub_144;
  } else {
    sub_163 = sub_144;
    v_21 = sub_164;
  };
  if (controller_c_light_1) {
    sub_173 = v_21;
  } else {
    sub_173 = sub_163;
  };
  if (controller_light_switch) {
    v_24 = sub_163;
  } else {
    v_24 = sub_173;
  };
  if (controller_c_light_2) {
    sub_162 = v_24;
  } else {
    sub_162 = sub_173;
  };
  if (controller_air_failed_recovered) {
    v_25 = sub_162;
    sub_161 = sub_141;
  } else {
    v_25 = sub_141;
    sub_161 = sub_162;
  };
  if (controller_ck_35_1) {
    sub_160 = v_25;
  } else {
    sub_160 = sub_161;
  };
  if (controller_cleaner) {
    v_26 = sub_150;
    sub_159 = sub_160;
  } else {
    v_26 = sub_160;
    sub_159 = sub_150;
  };
  if (controller_ck_27_1) {
    sub_158 = v_26;
  } else {
    sub_158 = sub_159;
  };
  if (controller_worker) {
    v_29 = sub_158;
    sub_137 = sub_138;
  } else {
    v_29 = sub_138;
    sub_137 = sub_158;
  };
  if (controller_ck_25_1) {
    sub_136 = v_29;
  } else {
    sub_136 = sub_137;
  };
  if (controller_ck_41_1) {
    v_15 = false;
  } else {
    v_15 = sub_72;
  };
  if (controller_blind_switch) {
    v_16 = sub_62;
  } else {
    v_16 = v_15;
  };
  if (controller_ck_41_1) {
    sub_185 = sub_72;
  } else {
    sub_185 = false;
  };
  if (controller_c_blind_1) {
    sub_184 = v_16;
  } else {
    sub_184 = sub_185;
  };
  if (controller_light_failed_recovered) {
    sub_183 = sub_184;
    sub_186 = false;
  } else {
    sub_183 = false;
    sub_186 = sub_184;
  };
  if (controller_ck_39_1) {
    sub_182 = sub_186;
    sub_187 = sub_183;
  } else {
    sub_182 = sub_183;
    sub_187 = sub_186;
  };
  if (controller_ck_37_1) {
    sub_181 = sub_187;
    v_14 = sub_182;
  } else {
    sub_181 = sub_182;
    v_14 = sub_187;
  };
  if (controller_c_light_1) {
    sub_188 = v_14;
  } else {
    sub_188 = sub_181;
  };
  if (controller_light_switch) {
    v_17 = sub_181;
  } else {
    v_17 = sub_188;
  };
  if (controller_c_light_2) {
    sub_180 = v_17;
  } else {
    sub_180 = sub_188;
  };
  if (controller_ck_41_1) {
    sub_194 = false;
  } else {
    sub_194 = sub_92;
  };
  if (controller_blind_switch) {
    v_11 = sub_91;
  } else {
    v_11 = sub_194;
  };
  if (controller_ck_41_1) {
    sub_195 = sub_92;
  } else {
    sub_195 = false;
  };
  if (controller_c_blind_1) {
    sub_193 = v_11;
  } else {
    sub_193 = sub_195;
  };
  if (controller_light_failed_recovered) {
    v_12 = false;
    sub_192 = sub_193;
  } else {
    v_12 = sub_193;
    sub_192 = false;
  };
  if (controller_ck_39_1) {
    sub_191 = v_12;
  } else {
    sub_191 = sub_192;
  };
  if (controller_blind_switch) {
    v_9 = sub_104;
  } else {
    v_9 = sub_195;
  };
  if (controller_c_blind_1) {
    sub_198 = v_9;
  } else {
    sub_198 = sub_194;
  };
  if (controller_light_failed_recovered) {
    v_10 = sub_198;
    sub_197 = false;
  } else {
    v_10 = false;
    sub_197 = sub_198;
  };
  if (controller_ck_39_1) {
    sub_196 = v_10;
  } else {
    sub_196 = sub_197;
  };
  if (controller_ck_37_1) {
    sub_190 = sub_196;
    v_8 = sub_191;
  } else {
    sub_190 = sub_191;
    v_8 = sub_196;
  };
  if (controller_c_light_1) {
    sub_199 = v_8;
  } else {
    sub_199 = sub_190;
  };
  if (controller_light_switch) {
    v_13 = sub_190;
  } else {
    v_13 = sub_199;
  };
  if (controller_c_light_2) {
    sub_189 = v_13;
  } else {
    sub_189 = sub_199;
  };
  if (controller_air_failed_recovered) {
    v_18 = sub_189;
    sub_179 = sub_180;
  } else {
    v_18 = sub_180;
    sub_179 = sub_189;
  };
  if (controller_ck_35_1) {
    sub_178 = v_18;
  } else {
    sub_178 = sub_179;
  };
  if (controller_cleaner) {
    v_19 = sub_178;
    sub_177 = sub_140;
  } else {
    v_19 = sub_140;
    sub_177 = sub_178;
  };
  if (controller_ck_27_1) {
    sub_176 = v_19;
  } else {
    sub_176 = sub_177;
  };
  if (controller_ck_41_1) {
    sub_209 = false;
  } else {
    sub_209 = sub_121;
  };
  if (controller_blind_switch) {
    v_3 = sub_115;
  } else {
    v_3 = sub_209;
  };
  if (controller_ck_41_1) {
    sub_210 = sub_121;
  } else {
    sub_210 = false;
  };
  if (controller_c_blind_1) {
    sub_208 = v_3;
  } else {
    sub_208 = sub_210;
  };
  if (controller_light_failed_recovered) {
    v_4 = false;
    sub_207 = sub_208;
  } else {
    v_4 = sub_208;
    sub_207 = false;
  };
  if (controller_ck_39_1) {
    sub_206 = v_4;
  } else {
    sub_206 = sub_207;
  };
  if (controller_blind_switch) {
    v_1 = sub_133;
  } else {
    v_1 = sub_210;
  };
  if (controller_c_blind_1) {
    sub_213 = v_1;
  } else {
    sub_213 = sub_209;
  };
  if (controller_light_failed_recovered) {
    v_2 = sub_213;
    sub_212 = false;
  } else {
    v_2 = false;
    sub_212 = sub_213;
  };
  if (controller_ck_39_1) {
    sub_211 = v_2;
  } else {
    sub_211 = sub_212;
  };
  if (controller_ck_37_1) {
    sub_205 = sub_211;
    v = sub_206;
  } else {
    sub_205 = sub_206;
    v = sub_211;
  };
  if (controller_c_light_1) {
    sub_214 = v;
  } else {
    sub_214 = sub_205;
  };
  if (controller_light_switch) {
    v_5 = sub_205;
  } else {
    v_5 = sub_214;
  };
  if (controller_c_light_2) {
    sub_204 = v_5;
  } else {
    sub_204 = sub_214;
  };
  if (controller_air_failed_recovered) {
    v_6 = sub_204;
    sub_203 = sub_180;
  } else {
    v_6 = sub_180;
    sub_203 = sub_204;
  };
  if (controller_ck_35_1) {
    sub_202 = v_6;
  } else {
    sub_202 = sub_203;
  };
  if (controller_cleaner) {
    v_7 = sub_178;
    sub_201 = sub_202;
  } else {
    v_7 = sub_202;
    sub_201 = sub_178;
  };
  if (controller_ck_27_1) {
    sub_200 = v_7;
  } else {
    sub_200 = sub_201;
  };
  if (controller_worker) {
    v_20 = sub_200;
    sub_175 = sub_176;
  } else {
    v_20 = sub_176;
    sub_175 = sub_200;
  };
  if (controller_ck_25_1) {
    sub_174 = v_20;
  } else {
    sub_174 = sub_175;
  };
  if (controller_change_shift) {
    v_85 = sub_174;
    sub_135 = sub_136;
  } else {
    v_85 = sub_136;
    sub_135 = sub_174;
  };
  if (controller_ck_1) {
    v_86 = v_85;
  } else {
    v_86 = sub_135;
  };
  if (p_controller_c_blind_2) {
    sub_0 = v_86;
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
  int controller_pnr_15, int controller_ck_21_1, int controller_pnr_14,
  int controller_ck_23_1, int controller_pnr_13, int controller_ck_25_1,
  int controller_pnr_12, int controller_ck_27_1, int controller_pnr_11,
  int controller_ck_29_1, int controller_pnr_10, int controller_ck_31_1,
  int controller_pnr_9, int controller_v_221, int controller_v_220,
  int controller_pnr_8, int controller_ck_35_1, int controller_pnr_7,
  int controller_ck_37_1, int controller_pnr_6, int controller_ck_39_1,
  int controller_pnr_5, int controller_ck_41_1, int controller_pnr_4,
  int controller_ck_43_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_light_2, int controller_c_light_1,
  int controller_c_closet, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_blind_1_out* _out) {
  
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
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (controller_ck_29_1) {
    v_150 = false;
    v_149 = sub_18;
  } else {
    v_150 = sub_18;
    v_149 = false;
  };
  if (controller_c_pc) {
    sub_32 = v_149;
  } else {
    sub_32 = v_150;
  };
  sub_31 = sub_32;
  if (controller_c_air_1) {
    v_151 = sub_31;
  } else {
    v_151 = false;
  };
  if (controller_c_air_2) {
    v_152 = v_151;
  } else {
    v_152 = false;
  };
  if (controller_c_air_1) {
    sub_30 = false;
  } else {
    sub_30 = sub_31;
  };
  sub_29 = sub_30;
  if (controller_v_220) {
    v_153 = sub_29;
    sub_28 = v_152;
  } else {
    v_153 = false;
    sub_28 = sub_29;
  };
  if (controller_v_221) {
    v_154 = v_153;
  } else {
    v_154 = sub_28;
  };
  if (controller_c_closet) {
    sub_27 = false;
  } else {
    sub_27 = v_154;
  };
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  if (controller_air_failed_recovered) {
    v_155 = sub_22;
    sub_21 = sub_8;
  } else {
    v_155 = sub_8;
    sub_21 = sub_22;
  };
  if (controller_ck_35_1) {
    sub_20 = v_155;
  } else {
    sub_20 = sub_21;
  };
  if (controller_cleaner) {
    v_156 = sub_20;
    sub_6 = sub_7;
  } else {
    v_156 = sub_7;
    sub_6 = sub_20;
  };
  if (controller_ck_27_1) {
    sub_5 = v_156;
  } else {
    sub_5 = sub_6;
  };
  if (controller_c_window) {
    sub_45 = sub_32;
  } else {
    sub_45 = sub_17;
  };
  sub_44 = sub_45;
  if (controller_c_air_1) {
    sub_46 = sub_16;
  } else {
    sub_46 = sub_45;
  };
  if (controller_c_air_2) {
    v_144 = sub_46;
  } else {
    v_144 = sub_44;
  };
  if (controller_v_220) {
    v_145 = v_144;
  } else {
    v_145 = sub_14;
  };
  if (controller_c_air_2) {
    sub_43 = sub_44;
  } else {
    sub_43 = sub_46;
  };
  if (controller_v_221) {
    sub_42 = v_145;
  } else {
    sub_42 = sub_43;
  };
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  if (controller_ck_37_1) {
    sub_38 = sub_39;
    v_143 = sub_11;
  } else {
    sub_38 = sub_11;
    v_143 = sub_39;
  };
  if (controller_c_light_1) {
    sub_47 = v_143;
  } else {
    sub_47 = sub_38;
  };
  if (controller_light_switch) {
    v_146 = sub_38;
  } else {
    v_146 = sub_47;
  };
  if (controller_c_light_2) {
    sub_37 = v_146;
  } else {
    sub_37 = sub_47;
  };
  if (controller_air_failed_recovered) {
    v_147 = sub_37;
    sub_36 = sub_8;
  } else {
    v_147 = sub_8;
    sub_36 = sub_37;
  };
  if (controller_ck_35_1) {
    sub_35 = v_147;
  } else {
    sub_35 = sub_36;
  };
  if (controller_cleaner) {
    v_148 = sub_20;
    sub_34 = sub_35;
  } else {
    v_148 = sub_35;
    sub_34 = sub_20;
  };
  if (controller_ck_27_1) {
    sub_33 = v_148;
  } else {
    sub_33 = sub_34;
  };
  if (controller_worker) {
    v_157 = sub_33;
    sub_4 = sub_5;
  } else {
    v_157 = sub_5;
    sub_4 = sub_33;
  };
  if (controller_ck_25_1) {
    sub_3 = v_157;
  } else {
    sub_3 = sub_4;
  };
  sub_68 = true;
  if (controller_c_door) {
    v_136 = false;
    sub_67 = sub_68;
  } else {
    v_136 = sub_68;
    sub_67 = false;
  };
  if (controller_ck_21_1) {
    sub_66 = v_136;
  } else {
    sub_66 = sub_67;
  };
  if (controller_c_window) {
    sub_65 = false;
  } else {
    sub_65 = sub_66;
  };
  if (controller_c_air_1) {
    sub_64 = sub_65;
  } else {
    sub_64 = false;
  };
  if (controller_c_air_2) {
    v_137 = false;
  } else {
    v_137 = sub_64;
  };
  if (controller_v_220) {
    v_138 = v_137;
  } else {
    v_138 = false;
  };
  if (controller_c_air_2) {
    sub_63 = sub_64;
  } else {
    sub_63 = false;
  };
  if (controller_c_air_1) {
    sub_69 = false;
  } else {
    sub_69 = sub_65;
  };
  if (controller_v_220) {
    sub_62 = sub_69;
  } else {
    sub_62 = sub_63;
  };
  if (controller_v_221) {
    sub_61 = v_138;
  } else {
    sub_61 = sub_62;
  };
  sub_60 = sub_61;
  if (controller_c_door) {
    v_133 = false;
    sub_76 = sub_19;
  } else {
    v_133 = sub_19;
    sub_76 = false;
  };
  if (controller_ck_21_1) {
    sub_75 = v_133;
  } else {
    sub_75 = sub_76;
  };
  if (controller_c_window) {
    sub_74 = false;
  } else {
    sub_74 = sub_75;
  };
  if (controller_c_air_1) {
    sub_73 = sub_74;
  } else {
    sub_73 = false;
  };
  if (controller_c_air_2) {
    v_134 = false;
  } else {
    v_134 = sub_73;
  };
  if (controller_v_220) {
    v_135 = v_134;
  } else {
    v_135 = false;
  };
  if (controller_c_air_2) {
    sub_72 = sub_73;
  } else {
    sub_72 = false;
  };
  if (controller_c_air_1) {
    sub_77 = false;
  } else {
    sub_77 = sub_74;
  };
  if (controller_v_220) {
    sub_71 = sub_77;
  } else {
    sub_71 = sub_72;
  };
  if (controller_v_221) {
    sub_70 = v_135;
  } else {
    sub_70 = sub_71;
  };
  if (controller_ck_41_1) {
    sub_59 = sub_70;
  } else {
    sub_59 = sub_60;
  };
  sub_58 = sub_59;
  if (controller_light_failed_recovered) {
    sub_57 = sub_58;
    sub_78 = false;
  } else {
    sub_57 = false;
    sub_78 = sub_58;
  };
  if (controller_ck_39_1) {
    sub_56 = sub_78;
    sub_79 = sub_57;
  } else {
    sub_56 = sub_57;
    sub_79 = sub_78;
  };
  if (controller_ck_37_1) {
    sub_55 = sub_79;
    v_132 = sub_56;
  } else {
    sub_55 = sub_56;
    v_132 = sub_79;
  };
  if (controller_c_light_1) {
    sub_80 = v_132;
  } else {
    sub_80 = sub_55;
  };
  if (controller_light_switch) {
    v_139 = sub_55;
  } else {
    v_139 = sub_80;
  };
  if (controller_c_light_2) {
    sub_54 = v_139;
  } else {
    sub_54 = sub_80;
  };
  sub_93 = sub_68;
  if (controller_ck_29_1) {
    v_125 = false;
    v_124 = sub_93;
  } else {
    v_125 = sub_93;
    v_124 = false;
  };
  if (controller_c_pc) {
    sub_92 = v_124;
  } else {
    sub_92 = v_125;
  };
  sub_91 = sub_92;
  if (controller_c_air_1) {
    v_126 = sub_91;
  } else {
    v_126 = false;
  };
  if (controller_c_air_2) {
    v_127 = v_126;
  } else {
    v_127 = false;
  };
  if (controller_c_air_1) {
    sub_90 = false;
  } else {
    sub_90 = sub_91;
  };
  sub_89 = sub_90;
  if (controller_v_220) {
    v_128 = sub_89;
    sub_88 = v_127;
  } else {
    v_128 = false;
    sub_88 = sub_89;
  };
  if (controller_v_221) {
    v_129 = v_128;
  } else {
    v_129 = sub_88;
  };
  if (controller_c_closet) {
    sub_87 = false;
  } else {
    sub_87 = v_129;
  };
  if (controller_ck_41_1) {
    sub_86 = sub_27;
  } else {
    sub_86 = sub_87;
  };
  sub_85 = sub_86;
  if (controller_light_failed_recovered) {
    v_130 = false;
    sub_84 = sub_85;
  } else {
    v_130 = sub_85;
    sub_84 = false;
  };
  if (controller_ck_39_1) {
    sub_83 = v_130;
  } else {
    sub_83 = sub_84;
  };
  if (controller_ck_41_1) {
    sub_97 = sub_87;
  } else {
    sub_97 = sub_27;
  };
  sub_96 = sub_97;
  if (controller_light_failed_recovered) {
    v_123 = sub_96;
    sub_95 = false;
  } else {
    v_123 = false;
    sub_95 = sub_96;
  };
  if (controller_ck_39_1) {
    sub_94 = v_123;
  } else {
    sub_94 = sub_95;
  };
  if (controller_ck_37_1) {
    sub_82 = sub_94;
    v_122 = sub_83;
  } else {
    sub_82 = sub_83;
    v_122 = sub_94;
  };
  if (controller_c_light_1) {
    sub_98 = v_122;
  } else {
    sub_98 = sub_82;
  };
  if (controller_light_switch) {
    v_131 = sub_82;
  } else {
    v_131 = sub_98;
  };
  if (controller_c_light_2) {
    sub_81 = v_131;
  } else {
    sub_81 = sub_98;
  };
  if (controller_air_failed_recovered) {
    v_140 = sub_81;
    sub_53 = sub_54;
  } else {
    v_140 = sub_54;
    sub_53 = sub_81;
  };
  if (controller_ck_35_1) {
    sub_52 = v_140;
  } else {
    sub_52 = sub_53;
  };
  if (controller_cleaner) {
    v_141 = sub_52;
    sub_51 = sub_7;
  } else {
    v_141 = sub_7;
    sub_51 = sub_52;
  };
  if (controller_ck_27_1) {
    sub_50 = v_141;
  } else {
    sub_50 = sub_51;
  };
  sub_115 = sub_93;
  sub_114 = sub_115;
  if (controller_c_air_1) {
    v_115 = sub_114;
  } else {
    v_115 = false;
  };
  if (controller_c_air_2) {
    v_116 = v_115;
  } else {
    v_116 = false;
  };
  if (controller_c_air_1) {
    sub_113 = false;
  } else {
    sub_113 = sub_114;
  };
  sub_112 = sub_113;
  if (controller_v_220) {
    v_117 = sub_112;
    sub_111 = v_116;
  } else {
    v_117 = false;
    sub_111 = sub_112;
  };
  if (controller_v_221) {
    sub_110 = v_117;
  } else {
    sub_110 = sub_111;
  };
  sub_109 = sub_110;
  if (controller_c_air_1) {
    v_112 = sub_16;
  } else {
    v_112 = false;
  };
  if (controller_c_air_2) {
    v_113 = v_112;
  } else {
    v_113 = false;
  };
  if (controller_c_air_1) {
    sub_120 = false;
  } else {
    sub_120 = sub_16;
  };
  sub_119 = sub_120;
  if (controller_v_220) {
    v_114 = sub_119;
    sub_118 = v_113;
  } else {
    v_114 = false;
    sub_118 = sub_119;
  };
  if (controller_v_221) {
    sub_117 = v_114;
  } else {
    sub_117 = sub_118;
  };
  sub_116 = sub_117;
  if (controller_ck_41_1) {
    sub_108 = sub_116;
  } else {
    sub_108 = sub_109;
  };
  sub_107 = sub_108;
  if (controller_light_failed_recovered) {
    v_118 = false;
    sub_106 = sub_107;
  } else {
    v_118 = sub_107;
    sub_106 = false;
  };
  if (controller_ck_39_1) {
    sub_105 = v_118;
  } else {
    sub_105 = sub_106;
  };
  if (controller_ck_41_1) {
    sub_124 = sub_109;
  } else {
    sub_124 = sub_116;
  };
  sub_123 = sub_124;
  if (controller_light_failed_recovered) {
    v_111 = sub_123;
    sub_122 = false;
  } else {
    v_111 = false;
    sub_122 = sub_123;
  };
  if (controller_ck_39_1) {
    sub_121 = v_111;
  } else {
    sub_121 = sub_122;
  };
  if (controller_ck_37_1) {
    sub_104 = sub_121;
    v_110 = sub_105;
  } else {
    sub_104 = sub_105;
    v_110 = sub_121;
  };
  if (controller_c_light_1) {
    sub_125 = v_110;
  } else {
    sub_125 = sub_104;
  };
  if (controller_light_switch) {
    v_119 = sub_104;
  } else {
    v_119 = sub_125;
  };
  if (controller_c_light_2) {
    sub_103 = v_119;
  } else {
    sub_103 = sub_125;
  };
  if (controller_air_failed_recovered) {
    v_120 = sub_103;
    sub_102 = sub_54;
  } else {
    v_120 = sub_54;
    sub_102 = sub_103;
  };
  if (controller_ck_35_1) {
    sub_101 = v_120;
  } else {
    sub_101 = sub_102;
  };
  if (controller_cleaner) {
    v_121 = sub_52;
    sub_100 = sub_101;
  } else {
    v_121 = sub_101;
    sub_100 = sub_52;
  };
  if (controller_ck_27_1) {
    sub_99 = v_121;
  } else {
    sub_99 = sub_100;
  };
  if (controller_worker) {
    v_142 = sub_99;
    sub_49 = sub_50;
  } else {
    v_142 = sub_50;
    sub_49 = sub_99;
  };
  if (controller_ck_25_1) {
    sub_48 = v_142;
  } else {
    sub_48 = sub_49;
  };
  if (controller_change_shift) {
    v_158 = sub_48;
    sub_2 = sub_3;
  } else {
    v_158 = sub_3;
    sub_2 = sub_48;
  };
  if (controller_ck_1) {
    sub_1 = v_158;
  } else {
    sub_1 = sub_2;
  };
  sub_139 = sub_114;
  sub_138 = sub_139;
  sub_137 = sub_138;
  sub_136 = sub_137;
  sub_135 = sub_136;
  sub_134 = sub_135;
  sub_133 = sub_134;
  sub_132 = sub_133;
  sub_131 = sub_132;
  sub_146 = sub_87;
  sub_145 = sub_146;
  sub_144 = sub_145;
  sub_143 = sub_144;
  sub_142 = sub_143;
  if (controller_air_failed_recovered) {
    v_107 = sub_142;
    sub_141 = sub_132;
  } else {
    v_107 = sub_132;
    sub_141 = sub_142;
  };
  if (controller_ck_35_1) {
    sub_140 = v_107;
  } else {
    sub_140 = sub_141;
  };
  if (controller_cleaner) {
    v_108 = sub_140;
    sub_130 = sub_131;
  } else {
    v_108 = sub_131;
    sub_130 = sub_140;
  };
  if (controller_ck_27_1) {
    sub_129 = v_108;
  } else {
    sub_129 = sub_130;
  };
  if (controller_c_window) {
    sub_159 = sub_92;
  } else {
    sub_159 = sub_115;
  };
  sub_158 = sub_159;
  if (controller_c_air_1) {
    sub_160 = sub_114;
  } else {
    sub_160 = sub_159;
  };
  if (controller_c_air_2) {
    v_102 = sub_160;
  } else {
    v_102 = sub_158;
  };
  if (controller_v_220) {
    v_103 = v_102;
  } else {
    v_103 = sub_138;
  };
  if (controller_c_air_2) {
    sub_157 = sub_158;
  } else {
    sub_157 = sub_160;
  };
  if (controller_v_221) {
    sub_156 = v_103;
  } else {
    sub_156 = sub_157;
  };
  sub_155 = sub_156;
  sub_154 = sub_155;
  sub_153 = sub_154;
  if (controller_ck_37_1) {
    sub_152 = sub_153;
    v_101 = sub_135;
  } else {
    sub_152 = sub_135;
    v_101 = sub_153;
  };
  if (controller_c_light_1) {
    sub_161 = v_101;
  } else {
    sub_161 = sub_152;
  };
  if (controller_light_switch) {
    v_104 = sub_152;
  } else {
    v_104 = sub_161;
  };
  if (controller_c_light_2) {
    sub_151 = v_104;
  } else {
    sub_151 = sub_161;
  };
  if (controller_air_failed_recovered) {
    v_105 = sub_151;
    sub_150 = sub_132;
  } else {
    v_105 = sub_132;
    sub_150 = sub_151;
  };
  if (controller_ck_35_1) {
    sub_149 = v_105;
  } else {
    sub_149 = sub_150;
  };
  if (controller_cleaner) {
    v_106 = sub_140;
    sub_148 = sub_149;
  } else {
    v_106 = sub_149;
    sub_148 = sub_140;
  };
  if (controller_ck_27_1) {
    sub_147 = v_106;
  } else {
    sub_147 = sub_148;
  };
  if (controller_worker) {
    v_109 = sub_147;
    sub_128 = sub_129;
  } else {
    v_109 = sub_129;
    sub_128 = sub_147;
  };
  if (controller_ck_25_1) {
    sub_127 = v_109;
  } else {
    sub_127 = sub_128;
  };
  if (controller_blind_switch) {
    sub_172 = sub_60;
  } else {
    sub_172 = sub_59;
  };
  if (controller_light_failed_recovered) {
    sub_171 = sub_172;
    sub_173 = false;
  } else {
    sub_171 = false;
    sub_173 = sub_172;
  };
  if (controller_ck_39_1) {
    sub_170 = sub_173;
    sub_174 = sub_171;
  } else {
    sub_170 = sub_171;
    sub_174 = sub_173;
  };
  if (controller_ck_37_1) {
    sub_169 = sub_174;
    v_96 = sub_170;
  } else {
    sub_169 = sub_170;
    v_96 = sub_174;
  };
  if (controller_c_light_1) {
    sub_175 = v_96;
  } else {
    sub_175 = sub_169;
  };
  if (controller_light_switch) {
    v_97 = sub_169;
  } else {
    v_97 = sub_175;
  };
  if (controller_c_light_2) {
    sub_168 = v_97;
  } else {
    sub_168 = sub_175;
  };
  if (controller_blind_switch) {
    sub_180 = sub_87;
  } else {
    sub_180 = sub_86;
  };
  if (controller_light_failed_recovered) {
    v_94 = false;
    sub_179 = sub_180;
  } else {
    v_94 = sub_180;
    sub_179 = false;
  };
  if (controller_ck_39_1) {
    sub_178 = v_94;
  } else {
    sub_178 = sub_179;
  };
  if (controller_blind_switch) {
    sub_183 = sub_87;
  } else {
    sub_183 = sub_97;
  };
  if (controller_light_failed_recovered) {
    v_93 = sub_183;
    sub_182 = false;
  } else {
    v_93 = false;
    sub_182 = sub_183;
  };
  if (controller_ck_39_1) {
    sub_181 = v_93;
  } else {
    sub_181 = sub_182;
  };
  if (controller_ck_37_1) {
    sub_177 = sub_181;
    v_92 = sub_178;
  } else {
    sub_177 = sub_178;
    v_92 = sub_181;
  };
  if (controller_c_light_1) {
    sub_184 = v_92;
  } else {
    sub_184 = sub_177;
  };
  if (controller_light_switch) {
    v_95 = sub_177;
  } else {
    v_95 = sub_184;
  };
  if (controller_c_light_2) {
    sub_176 = v_95;
  } else {
    sub_176 = sub_184;
  };
  if (controller_air_failed_recovered) {
    v_98 = sub_176;
    sub_167 = sub_168;
  } else {
    v_98 = sub_168;
    sub_167 = sub_176;
  };
  if (controller_ck_35_1) {
    sub_166 = v_98;
  } else {
    sub_166 = sub_167;
  };
  if (controller_cleaner) {
    v_99 = sub_166;
    sub_165 = sub_131;
  } else {
    v_99 = sub_131;
    sub_165 = sub_166;
  };
  if (controller_ck_27_1) {
    sub_164 = v_99;
  } else {
    sub_164 = sub_165;
  };
  if (controller_blind_switch) {
    sub_193 = sub_109;
  } else {
    sub_193 = sub_108;
  };
  if (controller_light_failed_recovered) {
    v_88 = false;
    sub_192 = sub_193;
  } else {
    v_88 = sub_193;
    sub_192 = false;
  };
  if (controller_ck_39_1) {
    sub_191 = v_88;
  } else {
    sub_191 = sub_192;
  };
  if (controller_blind_switch) {
    sub_196 = sub_109;
  } else {
    sub_196 = sub_124;
  };
  if (controller_light_failed_recovered) {
    v_87 = sub_196;
    sub_195 = false;
  } else {
    v_87 = false;
    sub_195 = sub_196;
  };
  if (controller_ck_39_1) {
    sub_194 = v_87;
  } else {
    sub_194 = sub_195;
  };
  if (controller_ck_37_1) {
    sub_190 = sub_194;
    v = sub_191;
  } else {
    sub_190 = sub_191;
    v = sub_194;
  };
  if (controller_c_light_1) {
    sub_197 = v;
  } else {
    sub_197 = sub_190;
  };
  if (controller_light_switch) {
    v_89 = sub_190;
  } else {
    v_89 = sub_197;
  };
  if (controller_c_light_2) {
    sub_189 = v_89;
  } else {
    sub_189 = sub_197;
  };
  if (controller_air_failed_recovered) {
    v_90 = sub_189;
    sub_188 = sub_168;
  } else {
    v_90 = sub_168;
    sub_188 = sub_189;
  };
  if (controller_ck_35_1) {
    sub_187 = v_90;
  } else {
    sub_187 = sub_188;
  };
  if (controller_cleaner) {
    v_91 = sub_166;
    sub_186 = sub_187;
  } else {
    v_91 = sub_187;
    sub_186 = sub_166;
  };
  if (controller_ck_27_1) {
    sub_185 = v_91;
  } else {
    sub_185 = sub_186;
  };
  if (controller_worker) {
    v_100 = sub_185;
    sub_163 = sub_164;
  } else {
    v_100 = sub_164;
    sub_163 = sub_185;
  };
  if (controller_ck_25_1) {
    sub_162 = v_100;
  } else {
    sub_162 = sub_163;
  };
  if (controller_change_shift) {
    v_159 = sub_162;
    sub_126 = sub_127;
  } else {
    v_159 = sub_127;
    sub_126 = sub_162;
  };
  if (controller_ck_1) {
    v_160 = v_159;
  } else {
    v_160 = sub_126;
  };
  if (p_controller_c_blind_1) {
    sub_0 = v_160;
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
  int controller_pnr_15, int controller_ck_21_1, int controller_pnr_14,
  int controller_ck_23_1, int controller_pnr_13, int controller_ck_25_1,
  int controller_pnr_12, int controller_ck_27_1, int controller_pnr_11,
  int controller_ck_29_1, int controller_pnr_10, int controller_ck_31_1,
  int controller_pnr_9, int controller_v_221, int controller_v_220,
  int controller_pnr_8, int controller_ck_35_1, int controller_pnr_7,
  int controller_ck_37_1, int controller_pnr_6, int controller_ck_39_1,
  int controller_pnr_5, int controller_ck_41_1, int controller_pnr_4,
  int controller_ck_43_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_light_1, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_2_out* _out) {
  
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
  sub_18 = false;
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
  if (controller_ck_29_1) {
    v_235 = false;
    v_234 = sub_17;
  } else {
    v_235 = sub_17;
    v_234 = false;
  };
  if (controller_c_pc) {
    sub_30 = v_234;
  } else {
    sub_30 = v_235;
  };
  sub_29 = sub_30;
  if (controller_c_air_1) {
    v_236 = sub_29;
  } else {
    v_236 = false;
  };
  if (controller_c_air_2) {
    v_237 = v_236;
  } else {
    v_237 = false;
  };
  if (controller_c_air_1) {
    sub_28 = false;
  } else {
    sub_28 = sub_29;
  };
  sub_27 = sub_28;
  if (controller_v_220) {
    v_238 = sub_27;
    sub_26 = v_237;
  } else {
    v_238 = false;
    sub_26 = sub_27;
  };
  if (controller_v_221) {
    v_239 = v_238;
  } else {
    v_239 = sub_26;
  };
  if (controller_c_closet) {
    sub_25 = false;
  } else {
    sub_25 = v_239;
  };
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (controller_air_failed_recovered) {
    v_240 = sub_21;
    sub_20 = sub_8;
  } else {
    v_240 = sub_8;
    sub_20 = sub_21;
  };
  if (controller_ck_35_1) {
    sub_19 = v_240;
  } else {
    sub_19 = sub_20;
  };
  if (controller_cleaner) {
    v_241 = sub_19;
    sub_6 = sub_7;
  } else {
    v_241 = sub_7;
    sub_6 = sub_19;
  };
  if (controller_ck_27_1) {
    sub_5 = v_241;
  } else {
    sub_5 = sub_6;
  };
  sub_45 = true;
  sub_44 = sub_45;
  if (controller_ck_29_1) {
    sub_43 = sub_17;
    sub_46 = sub_44;
  } else {
    sub_43 = sub_44;
    sub_46 = sub_17;
  };
  if (controller_c_pc) {
    v_225 = sub_43;
  } else {
    v_225 = sub_46;
  };
  if (controller_c_window) {
    sub_42 = v_225;
  } else {
    sub_42 = sub_16;
  };
  sub_41 = sub_42;
  if (controller_c_air_1) {
    sub_47 = sub_15;
  } else {
    sub_47 = sub_42;
  };
  if (controller_c_air_2) {
    v_226 = sub_47;
  } else {
    v_226 = sub_41;
  };
  if (controller_v_220) {
    v_227 = v_226;
  } else {
    v_227 = sub_13;
  };
  if (controller_c_air_2) {
    sub_40 = sub_41;
  } else {
    sub_40 = sub_47;
  };
  if (controller_v_221) {
    sub_39 = v_227;
  } else {
    sub_39 = sub_40;
  };
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  if (controller_ck_37_1) {
    v_228 = sub_10;
  } else {
    v_228 = sub_36;
  };
  if (controller_c_window) {
    sub_55 = sub_30;
  } else {
    sub_55 = sub_16;
  };
  sub_54 = sub_55;
  if (controller_c_air_1) {
    sub_56 = sub_15;
  } else {
    sub_56 = sub_55;
  };
  if (controller_c_air_2) {
    v_223 = sub_56;
  } else {
    v_223 = sub_54;
  };
  if (controller_v_220) {
    v_224 = v_223;
  } else {
    v_224 = sub_13;
  };
  if (controller_c_air_2) {
    sub_53 = sub_54;
  } else {
    sub_53 = sub_56;
  };
  if (controller_v_221) {
    sub_52 = v_224;
  } else {
    sub_52 = sub_53;
  };
  sub_51 = sub_52;
  sub_50 = sub_51;
  sub_49 = sub_50;
  if (controller_ck_37_1) {
    v_230 = sub_10;
    sub_48 = sub_49;
  } else {
    v_230 = sub_49;
    sub_48 = sub_10;
  };
  if (controller_c_light_1) {
    v_231 = v_230;
    v_229 = v_228;
  } else {
    v_231 = sub_48;
    v_229 = sub_48;
  };
  if (controller_light_switch) {
    sub_35 = v_229;
  } else {
    sub_35 = v_231;
  };
  if (controller_air_failed_recovered) {
    v_232 = sub_35;
    sub_34 = sub_8;
  } else {
    v_232 = sub_8;
    sub_34 = sub_35;
  };
  if (controller_ck_35_1) {
    sub_33 = v_232;
  } else {
    sub_33 = sub_34;
  };
  if (controller_cleaner) {
    v_233 = sub_19;
    sub_32 = sub_33;
  } else {
    v_233 = sub_33;
    sub_32 = sub_19;
  };
  if (controller_ck_27_1) {
    sub_31 = v_233;
  } else {
    sub_31 = sub_32;
  };
  if (controller_worker) {
    v_242 = sub_31;
    sub_4 = sub_5;
  } else {
    v_242 = sub_5;
    sub_4 = sub_31;
  };
  if (controller_ck_25_1) {
    sub_3 = v_242;
  } else {
    sub_3 = sub_4;
  };
  if (controller_c_door) {
    v_213 = false;
    sub_75 = sub_45;
  } else {
    v_213 = sub_45;
    sub_75 = false;
  };
  if (controller_ck_21_1) {
    sub_74 = v_213;
  } else {
    sub_74 = sub_75;
  };
  if (controller_c_window) {
    sub_73 = false;
  } else {
    sub_73 = sub_74;
  };
  if (controller_c_air_1) {
    sub_72 = sub_73;
  } else {
    sub_72 = false;
  };
  if (controller_c_air_2) {
    v_214 = false;
  } else {
    v_214 = sub_72;
  };
  if (controller_v_220) {
    v_215 = v_214;
  } else {
    v_215 = false;
  };
  if (controller_c_air_2) {
    sub_71 = sub_72;
  } else {
    sub_71 = false;
  };
  if (controller_c_air_1) {
    sub_76 = false;
  } else {
    sub_76 = sub_73;
  };
  if (controller_v_220) {
    sub_70 = sub_76;
  } else {
    sub_70 = sub_71;
  };
  if (controller_v_221) {
    sub_69 = v_215;
  } else {
    sub_69 = sub_70;
  };
  sub_68 = sub_69;
  sub_67 = sub_68;
  if (controller_c_door) {
    v_210 = false;
    sub_85 = sub_18;
  } else {
    v_210 = sub_18;
    sub_85 = false;
  };
  if (controller_ck_21_1) {
    sub_84 = v_210;
  } else {
    sub_84 = sub_85;
  };
  if (controller_c_window) {
    sub_83 = false;
  } else {
    sub_83 = sub_84;
  };
  if (controller_c_air_1) {
    sub_82 = sub_83;
  } else {
    sub_82 = false;
  };
  if (controller_c_air_2) {
    v_211 = false;
  } else {
    v_211 = sub_82;
  };
  if (controller_v_220) {
    v_212 = v_211;
  } else {
    v_212 = false;
  };
  if (controller_c_air_2) {
    sub_81 = sub_82;
  } else {
    sub_81 = false;
  };
  if (controller_c_air_1) {
    sub_86 = false;
  } else {
    sub_86 = sub_83;
  };
  if (controller_v_220) {
    sub_80 = sub_86;
  } else {
    sub_80 = sub_81;
  };
  if (controller_v_221) {
    sub_79 = v_212;
  } else {
    sub_79 = sub_80;
  };
  sub_78 = sub_79;
  sub_77 = sub_78;
  if (controller_light_failed_recovered) {
    sub_66 = sub_67;
    sub_87 = sub_77;
  } else {
    sub_66 = sub_77;
    sub_87 = sub_67;
  };
  if (controller_ck_39_1) {
    v_216 = sub_66;
    sub_65 = sub_87;
  } else {
    v_216 = sub_87;
    sub_65 = sub_66;
  };
  if (controller_ck_37_1) {
    sub_64 = v_216;
  } else {
    sub_64 = sub_65;
  };
  if (controller_light_failed_recovered) {
    sub_90 = sub_77;
    sub_91 = false;
  } else {
    sub_90 = false;
    sub_91 = sub_77;
  };
  if (controller_ck_39_1) {
    sub_89 = sub_91;
    sub_92 = sub_90;
  } else {
    sub_89 = sub_90;
    sub_92 = sub_91;
  };
  if (controller_ck_37_1) {
    v_218 = sub_89;
    sub_88 = sub_92;
  } else {
    v_218 = sub_92;
    sub_88 = sub_89;
  };
  if (controller_c_light_1) {
    v_219 = v_218;
    v_217 = sub_64;
  } else {
    v_219 = sub_88;
    v_217 = sub_88;
  };
  if (controller_light_switch) {
    sub_63 = v_217;
  } else {
    sub_63 = v_219;
  };
  if (controller_ck_29_1) {
    v_201 = false;
    v_200 = sub_44;
  } else {
    v_201 = sub_44;
    v_200 = false;
  };
  if (controller_c_pc) {
    sub_103 = v_200;
  } else {
    sub_103 = v_201;
  };
  sub_102 = sub_103;
  if (controller_c_air_1) {
    v_202 = sub_102;
  } else {
    v_202 = false;
  };
  if (controller_c_air_2) {
    v_203 = v_202;
  } else {
    v_203 = false;
  };
  if (controller_c_air_1) {
    sub_101 = false;
  } else {
    sub_101 = sub_102;
  };
  sub_100 = sub_101;
  if (controller_v_220) {
    v_204 = sub_100;
    sub_99 = v_203;
  } else {
    v_204 = false;
    sub_99 = sub_100;
  };
  if (controller_v_221) {
    v_205 = v_204;
  } else {
    v_205 = sub_99;
  };
  if (controller_c_closet) {
    sub_98 = false;
  } else {
    sub_98 = v_205;
  };
  sub_97 = sub_98;
  if (controller_light_failed_recovered) {
    sub_96 = sub_97;
    sub_104 = sub_24;
  } else {
    sub_96 = sub_24;
    sub_104 = sub_97;
  };
  if (controller_ck_39_1) {
    v_206 = sub_96;
    sub_95 = sub_104;
  } else {
    v_206 = sub_104;
    sub_95 = sub_96;
  };
  if (controller_ck_37_1) {
    sub_94 = v_206;
  } else {
    sub_94 = sub_95;
  };
  if (controller_light_failed_recovered) {
    sub_107 = sub_24;
    sub_108 = false;
  } else {
    sub_107 = false;
    sub_108 = sub_24;
  };
  if (controller_ck_39_1) {
    sub_106 = sub_108;
    sub_109 = sub_107;
  } else {
    sub_106 = sub_107;
    sub_109 = sub_108;
  };
  if (controller_ck_37_1) {
    v_208 = sub_106;
    sub_105 = sub_109;
  } else {
    v_208 = sub_109;
    sub_105 = sub_106;
  };
  if (controller_c_light_1) {
    v_209 = v_208;
    v_207 = sub_94;
  } else {
    v_209 = sub_105;
    v_207 = sub_105;
  };
  if (controller_light_switch) {
    sub_93 = v_207;
  } else {
    sub_93 = v_209;
  };
  if (controller_air_failed_recovered) {
    v_220 = sub_93;
    sub_62 = sub_63;
  } else {
    v_220 = sub_63;
    sub_62 = sub_93;
  };
  if (controller_ck_35_1) {
    sub_61 = v_220;
  } else {
    sub_61 = sub_62;
  };
  if (controller_cleaner) {
    v_221 = sub_61;
    sub_60 = sub_7;
  } else {
    v_221 = sub_7;
    sub_60 = sub_61;
  };
  if (controller_ck_27_1) {
    sub_59 = v_221;
  } else {
    sub_59 = sub_60;
  };
  sub_125 = sub_44;
  sub_124 = sub_125;
  if (controller_c_air_1) {
    v_191 = sub_124;
  } else {
    v_191 = false;
  };
  if (controller_c_air_2) {
    v_192 = v_191;
  } else {
    v_192 = false;
  };
  if (controller_c_air_1) {
    sub_123 = false;
  } else {
    sub_123 = sub_124;
  };
  sub_122 = sub_123;
  if (controller_v_220) {
    v_193 = sub_122;
    sub_121 = v_192;
  } else {
    v_193 = false;
    sub_121 = sub_122;
  };
  if (controller_v_221) {
    sub_120 = v_193;
  } else {
    sub_120 = sub_121;
  };
  sub_119 = sub_120;
  sub_118 = sub_119;
  if (controller_c_air_1) {
    v_188 = sub_15;
  } else {
    v_188 = false;
  };
  if (controller_c_air_2) {
    v_189 = v_188;
  } else {
    v_189 = false;
  };
  if (controller_c_air_1) {
    sub_131 = false;
  } else {
    sub_131 = sub_15;
  };
  sub_130 = sub_131;
  if (controller_v_220) {
    v_190 = sub_130;
    sub_129 = v_189;
  } else {
    v_190 = false;
    sub_129 = sub_130;
  };
  if (controller_v_221) {
    sub_128 = v_190;
  } else {
    sub_128 = sub_129;
  };
  sub_127 = sub_128;
  sub_126 = sub_127;
  if (controller_light_failed_recovered) {
    sub_117 = sub_118;
    sub_132 = sub_126;
  } else {
    sub_117 = sub_126;
    sub_132 = sub_118;
  };
  if (controller_ck_39_1) {
    v_194 = sub_117;
    sub_116 = sub_132;
  } else {
    v_194 = sub_132;
    sub_116 = sub_117;
  };
  if (controller_ck_37_1) {
    sub_115 = v_194;
  } else {
    sub_115 = sub_116;
  };
  if (controller_light_failed_recovered) {
    sub_135 = sub_126;
    sub_136 = false;
  } else {
    sub_135 = false;
    sub_136 = sub_126;
  };
  if (controller_ck_39_1) {
    sub_134 = sub_136;
    sub_137 = sub_135;
  } else {
    sub_134 = sub_135;
    sub_137 = sub_136;
  };
  if (controller_ck_37_1) {
    v_196 = sub_134;
    sub_133 = sub_137;
  } else {
    v_196 = sub_137;
    sub_133 = sub_134;
  };
  if (controller_c_light_1) {
    v_197 = v_196;
    v_195 = sub_115;
  } else {
    v_197 = sub_133;
    v_195 = sub_133;
  };
  if (controller_light_switch) {
    sub_114 = v_195;
  } else {
    sub_114 = v_197;
  };
  if (controller_air_failed_recovered) {
    v_198 = sub_114;
    sub_113 = sub_63;
  } else {
    v_198 = sub_63;
    sub_113 = sub_114;
  };
  if (controller_ck_35_1) {
    sub_112 = v_198;
  } else {
    sub_112 = sub_113;
  };
  if (controller_cleaner) {
    v_199 = sub_61;
    sub_111 = sub_112;
  } else {
    v_199 = sub_112;
    sub_111 = sub_61;
  };
  if (controller_ck_27_1) {
    sub_110 = v_199;
  } else {
    sub_110 = sub_111;
  };
  if (controller_worker) {
    v_222 = sub_110;
    sub_58 = sub_59;
  } else {
    v_222 = sub_59;
    sub_58 = sub_110;
  };
  if (controller_ck_25_1) {
    sub_57 = v_222;
  } else {
    sub_57 = sub_58;
  };
  if (controller_change_shift) {
    v_243 = sub_57;
    sub_2 = sub_3;
  } else {
    v_243 = sub_3;
    sub_2 = sub_57;
  };
  if (controller_ck_1) {
    sub_1 = v_243;
  } else {
    sub_1 = sub_2;
  };
  sub_150 = sub_124;
  sub_149 = sub_150;
  sub_148 = sub_149;
  sub_147 = sub_148;
  sub_146 = sub_147;
  sub_145 = sub_146;
  sub_144 = sub_145;
  sub_143 = sub_144;
  sub_155 = sub_97;
  sub_154 = sub_155;
  sub_153 = sub_154;
  if (controller_air_failed_recovered) {
    v_185 = sub_153;
    sub_152 = sub_144;
  } else {
    v_185 = sub_144;
    sub_152 = sub_153;
  };
  if (controller_ck_35_1) {
    sub_151 = v_185;
  } else {
    sub_151 = sub_152;
  };
  if (controller_cleaner) {
    v_186 = sub_151;
    sub_142 = sub_143;
  } else {
    v_186 = sub_143;
    sub_142 = sub_151;
  };
  if (controller_ck_27_1) {
    sub_141 = v_186;
  } else {
    sub_141 = sub_142;
  };
  if (controller_c_pc) {
    v_176 = sub_46;
  } else {
    v_176 = sub_43;
  };
  if (controller_c_window) {
    sub_166 = v_176;
  } else {
    sub_166 = sub_125;
  };
  sub_165 = sub_166;
  if (controller_c_air_1) {
    sub_167 = sub_124;
  } else {
    sub_167 = sub_166;
  };
  if (controller_c_air_2) {
    v_177 = sub_167;
  } else {
    v_177 = sub_165;
  };
  if (controller_v_220) {
    v_178 = v_177;
  } else {
    v_178 = sub_149;
  };
  if (controller_c_air_2) {
    sub_164 = sub_165;
  } else {
    sub_164 = sub_167;
  };
  if (controller_v_221) {
    sub_163 = v_178;
  } else {
    sub_163 = sub_164;
  };
  sub_162 = sub_163;
  sub_161 = sub_162;
  if (controller_ck_37_1) {
    v_179 = sub_161;
  } else {
    v_179 = sub_146;
  };
  if (controller_c_window) {
    sub_175 = sub_103;
  } else {
    sub_175 = sub_125;
  };
  sub_174 = sub_175;
  if (controller_c_air_1) {
    sub_176 = sub_124;
  } else {
    sub_176 = sub_175;
  };
  if (controller_c_air_2) {
    v_174 = sub_176;
  } else {
    v_174 = sub_174;
  };
  if (controller_v_220) {
    v_175 = v_174;
  } else {
    v_175 = sub_149;
  };
  if (controller_c_air_2) {
    sub_173 = sub_174;
  } else {
    sub_173 = sub_176;
  };
  if (controller_v_221) {
    sub_172 = v_175;
  } else {
    sub_172 = sub_173;
  };
  sub_171 = sub_172;
  sub_170 = sub_171;
  sub_169 = sub_170;
  if (controller_ck_37_1) {
    v_181 = sub_146;
    sub_168 = sub_169;
  } else {
    v_181 = sub_169;
    sub_168 = sub_146;
  };
  if (controller_c_light_1) {
    v_182 = v_181;
    v_180 = v_179;
  } else {
    v_182 = sub_168;
    v_180 = sub_168;
  };
  if (controller_light_switch) {
    sub_160 = v_180;
  } else {
    sub_160 = v_182;
  };
  if (controller_air_failed_recovered) {
    v_183 = sub_160;
    sub_159 = sub_144;
  } else {
    v_183 = sub_144;
    sub_159 = sub_160;
  };
  if (controller_ck_35_1) {
    sub_158 = v_183;
  } else {
    sub_158 = sub_159;
  };
  if (controller_cleaner) {
    v_184 = sub_151;
    sub_157 = sub_158;
  } else {
    v_184 = sub_158;
    sub_157 = sub_151;
  };
  if (controller_ck_27_1) {
    sub_156 = v_184;
  } else {
    sub_156 = sub_157;
  };
  if (controller_worker) {
    v_187 = sub_156;
    sub_140 = sub_141;
  } else {
    v_187 = sub_141;
    sub_140 = sub_156;
  };
  if (controller_ck_25_1) {
    sub_139 = v_187;
  } else {
    sub_139 = sub_140;
  };
  if (controller_light_failed_recovered) {
    sub_186 = sub_67;
    sub_187 = false;
  } else {
    sub_186 = false;
    sub_187 = sub_67;
  };
  if (controller_ck_39_1) {
    sub_185 = sub_187;
    sub_188 = sub_186;
  } else {
    sub_185 = sub_186;
    sub_188 = sub_187;
  };
  if (controller_ck_37_1) {
    v_169 = sub_185;
    sub_184 = sub_188;
  } else {
    v_169 = sub_188;
    sub_184 = sub_185;
  };
  if (controller_c_light_1) {
    v_170 = v_169;
    v_168 = sub_64;
  } else {
    v_170 = sub_184;
    v_168 = sub_184;
  };
  if (controller_light_switch) {
    sub_183 = v_168;
  } else {
    sub_183 = v_170;
  };
  if (controller_light_failed_recovered) {
    sub_192 = sub_97;
    sub_193 = false;
  } else {
    sub_192 = false;
    sub_193 = sub_97;
  };
  if (controller_ck_39_1) {
    sub_191 = sub_193;
    sub_194 = sub_192;
  } else {
    sub_191 = sub_192;
    sub_194 = sub_193;
  };
  if (controller_ck_37_1) {
    v_166 = sub_191;
    sub_190 = sub_194;
  } else {
    v_166 = sub_194;
    sub_190 = sub_191;
  };
  if (controller_c_light_1) {
    v_167 = v_166;
    v_165 = sub_94;
  } else {
    v_167 = sub_190;
    v_165 = sub_190;
  };
  if (controller_light_switch) {
    sub_189 = v_165;
  } else {
    sub_189 = v_167;
  };
  if (controller_air_failed_recovered) {
    v_171 = sub_189;
    sub_182 = sub_183;
  } else {
    v_171 = sub_183;
    sub_182 = sub_189;
  };
  if (controller_ck_35_1) {
    sub_181 = v_171;
  } else {
    sub_181 = sub_182;
  };
  if (controller_cleaner) {
    v_172 = sub_181;
    sub_180 = sub_143;
  } else {
    v_172 = sub_143;
    sub_180 = sub_181;
  };
  if (controller_ck_27_1) {
    sub_179 = v_172;
  } else {
    sub_179 = sub_180;
  };
  if (controller_light_failed_recovered) {
    sub_202 = sub_118;
    sub_203 = false;
  } else {
    sub_202 = false;
    sub_203 = sub_118;
  };
  if (controller_ck_39_1) {
    sub_201 = sub_203;
    sub_204 = sub_202;
  } else {
    sub_201 = sub_202;
    sub_204 = sub_203;
  };
  if (controller_ck_37_1) {
    v_161 = sub_201;
    sub_200 = sub_204;
  } else {
    v_161 = sub_204;
    sub_200 = sub_201;
  };
  if (controller_c_light_1) {
    v_162 = v_161;
    v = sub_115;
  } else {
    v_162 = sub_200;
    v = sub_200;
  };
  if (controller_light_switch) {
    sub_199 = v;
  } else {
    sub_199 = v_162;
  };
  if (controller_air_failed_recovered) {
    v_163 = sub_199;
    sub_198 = sub_183;
  } else {
    v_163 = sub_183;
    sub_198 = sub_199;
  };
  if (controller_ck_35_1) {
    sub_197 = v_163;
  } else {
    sub_197 = sub_198;
  };
  if (controller_cleaner) {
    v_164 = sub_181;
    sub_196 = sub_197;
  } else {
    v_164 = sub_197;
    sub_196 = sub_181;
  };
  if (controller_ck_27_1) {
    sub_195 = v_164;
  } else {
    sub_195 = sub_196;
  };
  if (controller_worker) {
    v_173 = sub_195;
    sub_178 = sub_179;
  } else {
    v_173 = sub_179;
    sub_178 = sub_195;
  };
  if (controller_ck_25_1) {
    sub_177 = v_173;
  } else {
    sub_177 = sub_178;
  };
  if (controller_change_shift) {
    v_244 = sub_177;
    sub_138 = sub_139;
  } else {
    v_244 = sub_139;
    sub_138 = sub_177;
  };
  if (controller_ck_1) {
    v_245 = v_244;
  } else {
    v_245 = sub_138;
  };
  if (p_controller_c_light_2) {
    sub_0 = v_245;
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
  int controller_pnr_15, int controller_ck_21_1, int controller_pnr_14,
  int controller_ck_23_1, int controller_pnr_13, int controller_ck_25_1,
  int controller_pnr_12, int controller_ck_27_1, int controller_pnr_11,
  int controller_ck_29_1, int controller_pnr_10, int controller_ck_31_1,
  int controller_pnr_9, int controller_v_221, int controller_v_220,
  int controller_pnr_8, int controller_ck_35_1, int controller_pnr_7,
  int controller_ck_37_1, int controller_pnr_6, int controller_ck_39_1,
  int controller_pnr_5, int controller_ck_41_1, int controller_pnr_4,
  int controller_ck_43_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_closet, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_1_out* _out) {
  
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
  sub_17 = false;
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
  if (controller_ck_29_1) {
    v_291 = false;
    v_290 = sub_16;
  } else {
    v_291 = sub_16;
    v_290 = false;
  };
  if (controller_c_pc) {
    sub_28 = v_290;
  } else {
    sub_28 = v_291;
  };
  sub_27 = sub_28;
  if (controller_c_air_1) {
    v_292 = sub_27;
  } else {
    v_292 = false;
  };
  if (controller_c_air_2) {
    v_293 = v_292;
  } else {
    v_293 = false;
  };
  if (controller_c_air_1) {
    sub_26 = false;
  } else {
    sub_26 = sub_27;
  };
  sub_25 = sub_26;
  if (controller_v_220) {
    v_294 = sub_25;
    sub_24 = v_293;
  } else {
    v_294 = false;
    sub_24 = sub_25;
  };
  if (controller_v_221) {
    v_295 = v_294;
  } else {
    v_295 = sub_24;
  };
  if (controller_c_closet) {
    sub_23 = false;
  } else {
    sub_23 = v_295;
  };
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  if (controller_air_failed_recovered) {
    v_296 = sub_20;
    sub_19 = sub_8;
  } else {
    v_296 = sub_8;
    sub_19 = sub_20;
  };
  if (controller_ck_35_1) {
    sub_18 = v_296;
  } else {
    sub_18 = sub_19;
  };
  if (controller_cleaner) {
    v_297 = sub_18;
    sub_6 = sub_7;
  } else {
    v_297 = sub_7;
    sub_6 = sub_18;
  };
  if (controller_ck_27_1) {
    sub_5 = v_297;
  } else {
    sub_5 = sub_6;
  };
  sub_43 = true;
  sub_42 = sub_43;
  if (controller_ck_29_1) {
    sub_41 = sub_16;
    sub_44 = sub_42;
  } else {
    sub_41 = sub_42;
    sub_44 = sub_16;
  };
  if (controller_c_pc) {
    v_285 = sub_41;
  } else {
    v_285 = sub_44;
  };
  if (controller_c_window) {
    sub_40 = v_285;
  } else {
    sub_40 = sub_15;
  };
  sub_39 = sub_40;
  if (controller_c_air_1) {
    sub_45 = sub_14;
  } else {
    sub_45 = sub_40;
  };
  if (controller_c_air_2) {
    v_286 = sub_45;
  } else {
    v_286 = sub_39;
  };
  if (controller_v_220) {
    v_287 = v_286;
  } else {
    v_287 = sub_12;
  };
  if (controller_c_air_2) {
    sub_38 = sub_39;
  } else {
    sub_38 = sub_45;
  };
  if (controller_v_221) {
    sub_37 = v_287;
  } else {
    sub_37 = sub_38;
  };
  sub_36 = sub_37;
  sub_35 = sub_36;
  if (controller_ck_37_1) {
    sub_34 = sub_35;
  } else {
    sub_34 = sub_9;
  };
  sub_33 = sub_34;
  if (controller_air_failed_recovered) {
    v_288 = sub_33;
    sub_32 = sub_8;
  } else {
    v_288 = sub_8;
    sub_32 = sub_33;
  };
  if (controller_ck_35_1) {
    sub_31 = v_288;
  } else {
    sub_31 = sub_32;
  };
  if (controller_cleaner) {
    v_289 = sub_18;
    sub_30 = sub_31;
  } else {
    v_289 = sub_31;
    sub_30 = sub_18;
  };
  if (controller_ck_27_1) {
    sub_29 = v_289;
  } else {
    sub_29 = sub_30;
  };
  if (controller_worker) {
    v_298 = sub_29;
    sub_4 = sub_5;
  } else {
    v_298 = sub_5;
    sub_4 = sub_29;
  };
  if (controller_ck_25_1) {
    sub_3 = v_298;
  } else {
    sub_3 = sub_4;
  };
  if (controller_c_door) {
    v_278 = false;
    sub_64 = sub_17;
  } else {
    v_278 = sub_17;
    sub_64 = false;
  };
  if (controller_ck_21_1) {
    sub_63 = v_278;
  } else {
    sub_63 = sub_64;
  };
  if (controller_c_window) {
    sub_62 = false;
  } else {
    sub_62 = sub_63;
  };
  if (controller_c_air_1) {
    sub_61 = sub_62;
  } else {
    sub_61 = false;
  };
  if (controller_c_air_2) {
    v_279 = false;
  } else {
    v_279 = sub_61;
  };
  if (controller_v_220) {
    v_280 = v_279;
  } else {
    v_280 = false;
  };
  if (controller_c_air_2) {
    sub_60 = sub_61;
  } else {
    sub_60 = false;
  };
  if (controller_c_air_1) {
    sub_65 = false;
  } else {
    sub_65 = sub_62;
  };
  if (controller_v_220) {
    sub_59 = sub_65;
  } else {
    sub_59 = sub_60;
  };
  if (controller_v_221) {
    sub_58 = v_280;
  } else {
    sub_58 = sub_59;
  };
  sub_57 = sub_58;
  sub_56 = sub_57;
  if (controller_c_door) {
    v_275 = false;
    sub_74 = sub_43;
  } else {
    v_275 = sub_43;
    sub_74 = false;
  };
  if (controller_ck_21_1) {
    sub_73 = v_275;
  } else {
    sub_73 = sub_74;
  };
  if (controller_c_window) {
    sub_72 = false;
  } else {
    sub_72 = sub_73;
  };
  if (controller_c_air_1) {
    sub_71 = sub_72;
  } else {
    sub_71 = false;
  };
  if (controller_c_air_2) {
    v_276 = false;
  } else {
    v_276 = sub_71;
  };
  if (controller_v_220) {
    v_277 = v_276;
  } else {
    v_277 = false;
  };
  if (controller_c_air_2) {
    sub_70 = sub_71;
  } else {
    sub_70 = false;
  };
  if (controller_c_air_1) {
    sub_75 = false;
  } else {
    sub_75 = sub_72;
  };
  if (controller_v_220) {
    sub_69 = sub_75;
  } else {
    sub_69 = sub_70;
  };
  if (controller_v_221) {
    sub_68 = v_277;
  } else {
    sub_68 = sub_69;
  };
  sub_67 = sub_68;
  sub_66 = sub_67;
  if (controller_light_failed_recovered) {
    sub_55 = sub_56;
    sub_76 = sub_66;
  } else {
    sub_55 = sub_66;
    sub_76 = sub_56;
  };
  if (controller_ck_39_1) {
    v_281 = sub_55;
    sub_54 = sub_76;
  } else {
    v_281 = sub_76;
    sub_54 = sub_55;
  };
  if (controller_ck_37_1) {
    sub_53 = v_281;
  } else {
    sub_53 = sub_54;
  };
  sub_52 = sub_53;
  if (controller_ck_29_1) {
    v_269 = false;
    v_268 = sub_42;
  } else {
    v_269 = sub_42;
    v_268 = false;
  };
  if (controller_c_pc) {
    sub_87 = v_268;
  } else {
    sub_87 = v_269;
  };
  sub_86 = sub_87;
  if (controller_c_air_1) {
    v_270 = sub_86;
  } else {
    v_270 = false;
  };
  if (controller_c_air_2) {
    v_271 = v_270;
  } else {
    v_271 = false;
  };
  if (controller_c_air_1) {
    sub_85 = false;
  } else {
    sub_85 = sub_86;
  };
  sub_84 = sub_85;
  if (controller_v_220) {
    v_272 = sub_84;
    sub_83 = v_271;
  } else {
    v_272 = false;
    sub_83 = sub_84;
  };
  if (controller_v_221) {
    v_273 = v_272;
  } else {
    v_273 = sub_83;
  };
  if (controller_c_closet) {
    sub_82 = false;
  } else {
    sub_82 = v_273;
  };
  sub_81 = sub_82;
  if (controller_light_failed_recovered) {
    sub_80 = sub_22;
    sub_88 = sub_81;
  } else {
    sub_80 = sub_81;
    sub_88 = sub_22;
  };
  if (controller_ck_39_1) {
    v_274 = sub_80;
    sub_79 = sub_88;
  } else {
    v_274 = sub_88;
    sub_79 = sub_80;
  };
  if (controller_ck_37_1) {
    sub_78 = v_274;
  } else {
    sub_78 = sub_79;
  };
  sub_77 = sub_78;
  if (controller_air_failed_recovered) {
    v_282 = sub_77;
    sub_51 = sub_52;
  } else {
    v_282 = sub_52;
    sub_51 = sub_77;
  };
  if (controller_ck_35_1) {
    sub_50 = v_282;
  } else {
    sub_50 = sub_51;
  };
  if (controller_cleaner) {
    v_283 = sub_50;
    sub_49 = sub_7;
  } else {
    v_283 = sub_7;
    sub_49 = sub_50;
  };
  if (controller_ck_27_1) {
    sub_48 = v_283;
  } else {
    sub_48 = sub_49;
  };
  if (controller_c_air_1) {
    v_262 = sub_14;
  } else {
    v_262 = false;
  };
  if (controller_c_air_2) {
    v_263 = v_262;
  } else {
    v_263 = false;
  };
  if (controller_c_air_1) {
    sub_102 = false;
  } else {
    sub_102 = sub_14;
  };
  sub_101 = sub_102;
  if (controller_v_220) {
    v_264 = sub_101;
    sub_100 = v_263;
  } else {
    v_264 = false;
    sub_100 = sub_101;
  };
  if (controller_v_221) {
    sub_99 = v_264;
  } else {
    sub_99 = sub_100;
  };
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_110 = sub_42;
  sub_109 = sub_110;
  if (controller_c_air_1) {
    v_259 = sub_109;
  } else {
    v_259 = false;
  };
  if (controller_c_air_2) {
    v_260 = v_259;
  } else {
    v_260 = false;
  };
  if (controller_c_air_1) {
    sub_108 = false;
  } else {
    sub_108 = sub_109;
  };
  sub_107 = sub_108;
  if (controller_v_220) {
    v_261 = sub_107;
    sub_106 = v_260;
  } else {
    v_261 = false;
    sub_106 = sub_107;
  };
  if (controller_v_221) {
    sub_105 = v_261;
  } else {
    sub_105 = sub_106;
  };
  sub_104 = sub_105;
  sub_103 = sub_104;
  if (controller_light_failed_recovered) {
    sub_96 = sub_97;
    sub_111 = sub_103;
  } else {
    sub_96 = sub_103;
    sub_111 = sub_97;
  };
  if (controller_ck_39_1) {
    v_265 = sub_96;
    sub_95 = sub_111;
  } else {
    v_265 = sub_111;
    sub_95 = sub_96;
  };
  if (controller_ck_37_1) {
    sub_94 = v_265;
  } else {
    sub_94 = sub_95;
  };
  sub_93 = sub_94;
  if (controller_air_failed_recovered) {
    v_266 = sub_93;
    sub_92 = sub_52;
  } else {
    v_266 = sub_52;
    sub_92 = sub_93;
  };
  if (controller_ck_35_1) {
    sub_91 = v_266;
  } else {
    sub_91 = sub_92;
  };
  if (controller_cleaner) {
    v_267 = sub_50;
    sub_90 = sub_91;
  } else {
    v_267 = sub_91;
    sub_90 = sub_50;
  };
  if (controller_ck_27_1) {
    sub_89 = v_267;
  } else {
    sub_89 = sub_90;
  };
  if (controller_worker) {
    v_284 = sub_89;
    sub_47 = sub_48;
  } else {
    v_284 = sub_48;
    sub_47 = sub_89;
  };
  if (controller_ck_25_1) {
    sub_46 = v_284;
  } else {
    sub_46 = sub_47;
  };
  if (controller_change_shift) {
    v_299 = sub_46;
    sub_2 = sub_3;
  } else {
    v_299 = sub_3;
    sub_2 = sub_46;
  };
  if (controller_ck_1) {
    sub_1 = v_299;
  } else {
    sub_1 = sub_2;
  };
  sub_123 = sub_109;
  sub_122 = sub_123;
  sub_121 = sub_122;
  sub_120 = sub_121;
  sub_119 = sub_120;
  sub_118 = sub_119;
  sub_117 = sub_118;
  sub_127 = sub_81;
  sub_126 = sub_127;
  if (controller_air_failed_recovered) {
    v_256 = sub_126;
    sub_125 = sub_118;
  } else {
    v_256 = sub_118;
    sub_125 = sub_126;
  };
  if (controller_ck_35_1) {
    sub_124 = v_256;
  } else {
    sub_124 = sub_125;
  };
  if (controller_cleaner) {
    v_257 = sub_124;
    sub_116 = sub_117;
  } else {
    v_257 = sub_117;
    sub_116 = sub_124;
  };
  if (controller_ck_27_1) {
    sub_115 = v_257;
  } else {
    sub_115 = sub_116;
  };
  if (controller_c_pc) {
    v_250 = sub_44;
  } else {
    v_250 = sub_41;
  };
  if (controller_c_window) {
    sub_139 = v_250;
  } else {
    sub_139 = sub_110;
  };
  sub_138 = sub_139;
  if (controller_c_air_1) {
    sub_140 = sub_109;
  } else {
    sub_140 = sub_139;
  };
  if (controller_c_air_2) {
    v_251 = sub_140;
  } else {
    v_251 = sub_138;
  };
  if (controller_v_220) {
    v_252 = v_251;
  } else {
    v_252 = sub_122;
  };
  if (controller_c_air_2) {
    sub_137 = sub_138;
  } else {
    sub_137 = sub_140;
  };
  if (controller_v_221) {
    sub_136 = v_252;
  } else {
    sub_136 = sub_137;
  };
  sub_135 = sub_136;
  sub_134 = sub_135;
  sub_133 = sub_134;
  if (controller_ck_37_1) {
    v_253 = sub_119;
  } else {
    v_253 = sub_133;
  };
  if (controller_light_switch) {
    sub_132 = sub_119;
  } else {
    sub_132 = v_253;
  };
  if (controller_air_failed_recovered) {
    v_254 = sub_132;
    sub_131 = sub_118;
  } else {
    v_254 = sub_118;
    sub_131 = sub_132;
  };
  if (controller_ck_35_1) {
    sub_130 = v_254;
  } else {
    sub_130 = sub_131;
  };
  if (controller_cleaner) {
    v_255 = sub_124;
    sub_129 = sub_130;
  } else {
    v_255 = sub_130;
    sub_129 = sub_124;
  };
  if (controller_ck_27_1) {
    sub_128 = v_255;
  } else {
    sub_128 = sub_129;
  };
  if (controller_worker) {
    v_258 = sub_128;
    sub_114 = sub_115;
  } else {
    v_258 = sub_115;
    sub_114 = sub_128;
  };
  if (controller_ck_25_1) {
    sub_113 = v_258;
  } else {
    sub_113 = sub_114;
  };
  if (controller_light_switch) {
    sub_147 = sub_66;
    sub_148 = sub_127;
  } else {
    sub_147 = sub_53;
    sub_148 = sub_78;
  };
  if (controller_air_failed_recovered) {
    v_247 = sub_148;
    sub_146 = sub_147;
  } else {
    v_247 = sub_147;
    sub_146 = sub_148;
  };
  if (controller_ck_35_1) {
    sub_145 = v_247;
  } else {
    sub_145 = sub_146;
  };
  if (controller_cleaner) {
    v_248 = sub_145;
    sub_144 = sub_117;
  } else {
    v_248 = sub_117;
    sub_144 = sub_145;
  };
  if (controller_ck_27_1) {
    sub_143 = v_248;
  } else {
    sub_143 = sub_144;
  };
  if (controller_light_switch) {
    sub_153 = sub_103;
  } else {
    sub_153 = sub_94;
  };
  if (controller_air_failed_recovered) {
    v = sub_153;
    sub_152 = sub_147;
  } else {
    v = sub_147;
    sub_152 = sub_153;
  };
  if (controller_ck_35_1) {
    sub_151 = v;
  } else {
    sub_151 = sub_152;
  };
  if (controller_cleaner) {
    v_246 = sub_145;
    sub_150 = sub_151;
  } else {
    v_246 = sub_151;
    sub_150 = sub_145;
  };
  if (controller_ck_27_1) {
    sub_149 = v_246;
  } else {
    sub_149 = sub_150;
  };
  if (controller_worker) {
    v_249 = sub_149;
    sub_142 = sub_143;
  } else {
    v_249 = sub_143;
    sub_142 = sub_149;
  };
  if (controller_ck_25_1) {
    sub_141 = v_249;
  } else {
    sub_141 = sub_142;
  };
  if (controller_change_shift) {
    v_300 = sub_141;
    sub_112 = sub_113;
  } else {
    v_300 = sub_113;
    sub_112 = sub_141;
  };
  if (controller_ck_1) {
    v_301 = v_300;
  } else {
    v_301 = sub_112;
  };
  if (p_controller_c_light_1) {
    sub_0 = v_301;
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
  int controller_pnr_15, int controller_ck_21_1, int controller_pnr_14,
  int controller_ck_23_1, int controller_pnr_13, int controller_ck_25_1,
  int controller_pnr_12, int controller_ck_27_1, int controller_pnr_11,
  int controller_ck_29_1, int controller_pnr_10, int controller_ck_31_1,
  int controller_pnr_9, int controller_v_221, int controller_v_220,
  int controller_pnr_8, int controller_ck_35_1, int controller_pnr_7,
  int controller_ck_37_1, int controller_pnr_6, int controller_ck_39_1,
  int controller_pnr_5, int controller_ck_41_1, int controller_pnr_4,
  int controller_ck_43_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_air_2, int controller_c_air_1, int controller_c_window,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_closet_out* _out) {
  
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
  sub_15 = false;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (controller_ck_29_1) {
    v_326 = false;
    v_325 = sub_14;
  } else {
    v_326 = sub_14;
    v_325 = false;
  };
  if (controller_c_pc) {
    sub_26 = v_325;
  } else {
    sub_26 = v_326;
  };
  sub_25 = sub_26;
  if (controller_c_air_1) {
    v_327 = sub_25;
  } else {
    v_327 = false;
  };
  if (controller_c_air_2) {
    v_328 = v_327;
  } else {
    v_328 = false;
  };
  if (controller_c_air_1) {
    sub_24 = false;
  } else {
    sub_24 = sub_25;
  };
  sub_23 = sub_24;
  if (controller_v_220) {
    v_329 = sub_23;
    sub_22 = v_328;
  } else {
    v_329 = false;
    sub_22 = sub_23;
  };
  if (controller_v_221) {
    sub_21 = v_329;
  } else {
    sub_21 = sub_22;
  };
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  if (controller_air_failed_recovered) {
    v_330 = sub_18;
    sub_17 = sub_7;
  } else {
    v_330 = sub_7;
    sub_17 = sub_18;
  };
  if (controller_ck_35_1) {
    sub_16 = v_330;
  } else {
    sub_16 = sub_17;
  };
  if (controller_cleaner) {
    v_331 = sub_16;
    sub_5 = sub_6;
  } else {
    v_331 = sub_6;
    sub_5 = sub_16;
  };
  if (controller_ck_27_1) {
    sub_4 = v_331;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  if (controller_c_door) {
    v_319 = false;
    sub_42 = sub_15;
  } else {
    v_319 = sub_15;
    sub_42 = false;
  };
  if (controller_ck_21_1) {
    sub_41 = v_319;
  } else {
    sub_41 = sub_42;
  };
  if (controller_c_window) {
    sub_40 = false;
  } else {
    sub_40 = sub_41;
  };
  if (controller_c_air_1) {
    sub_39 = sub_40;
  } else {
    sub_39 = false;
  };
  if (controller_c_air_2) {
    v_320 = false;
  } else {
    v_320 = sub_39;
  };
  if (controller_v_220) {
    v_321 = v_320;
  } else {
    v_321 = false;
  };
  if (controller_c_air_2) {
    sub_38 = sub_39;
  } else {
    sub_38 = false;
  };
  if (controller_c_air_1) {
    sub_43 = false;
  } else {
    sub_43 = sub_40;
  };
  if (controller_v_220) {
    sub_37 = sub_43;
  } else {
    sub_37 = sub_38;
  };
  if (controller_v_221) {
    sub_36 = v_321;
  } else {
    sub_36 = sub_37;
  };
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  if (controller_air_failed_recovered) {
    v_322 = sub_18;
    sub_32 = sub_33;
  } else {
    v_322 = sub_33;
    sub_32 = sub_18;
  };
  if (controller_ck_35_1) {
    sub_31 = v_322;
  } else {
    sub_31 = sub_32;
  };
  if (controller_cleaner) {
    v_323 = sub_31;
    sub_30 = sub_6;
  } else {
    v_323 = sub_6;
    sub_30 = sub_31;
  };
  if (controller_ck_27_1) {
    sub_29 = v_323;
  } else {
    sub_29 = sub_30;
  };
  if (controller_c_air_1) {
    v_314 = sub_12;
  } else {
    v_314 = false;
  };
  if (controller_c_air_2) {
    v_315 = v_314;
  } else {
    v_315 = false;
  };
  if (controller_c_air_1) {
    sub_54 = false;
  } else {
    sub_54 = sub_12;
  };
  sub_53 = sub_54;
  if (controller_v_220) {
    v_316 = sub_53;
    sub_52 = v_315;
  } else {
    v_316 = false;
    sub_52 = sub_53;
  };
  if (controller_v_221) {
    sub_51 = v_316;
  } else {
    sub_51 = sub_52;
  };
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  if (controller_air_failed_recovered) {
    v_317 = sub_48;
    sub_47 = sub_33;
  } else {
    v_317 = sub_33;
    sub_47 = sub_48;
  };
  if (controller_ck_35_1) {
    sub_46 = v_317;
  } else {
    sub_46 = sub_47;
  };
  if (controller_cleaner) {
    v_318 = sub_31;
    sub_45 = sub_46;
  } else {
    v_318 = sub_46;
    sub_45 = sub_31;
  };
  if (controller_ck_27_1) {
    sub_44 = v_318;
  } else {
    sub_44 = sub_45;
  };
  if (controller_worker) {
    v_324 = sub_44;
    sub_28 = sub_29;
  } else {
    v_324 = sub_29;
    sub_28 = sub_44;
  };
  if (controller_ck_25_1) {
    sub_27 = v_324;
  } else {
    sub_27 = sub_28;
  };
  if (controller_change_shift) {
    v_332 = sub_27;
    sub_2 = sub_3;
  } else {
    v_332 = sub_3;
    sub_2 = sub_27;
  };
  if (controller_ck_1) {
    sub_1 = v_332;
  } else {
    sub_1 = sub_2;
  };
  sub_68 = true;
  sub_67 = sub_68;
  sub_66 = sub_67;
  sub_65 = sub_66;
  sub_64 = sub_65;
  sub_63 = sub_64;
  sub_62 = sub_63;
  sub_61 = sub_62;
  sub_60 = sub_61;
  sub_59 = sub_60;
  if (controller_air_failed_recovered) {
    v_312 = sub_18;
    sub_70 = sub_60;
  } else {
    v_312 = sub_60;
    sub_70 = sub_18;
  };
  if (controller_ck_35_1) {
    sub_69 = v_312;
  } else {
    sub_69 = sub_70;
  };
  if (controller_cleaner) {
    v_313 = sub_69;
    sub_58 = sub_59;
  } else {
    v_313 = sub_59;
    sub_58 = sub_69;
  };
  if (controller_ck_27_1) {
    sub_57 = v_313;
  } else {
    sub_57 = sub_58;
  };
  sub_56 = sub_57;
  if (controller_c_door) {
    v_306 = false;
    sub_86 = sub_68;
  } else {
    v_306 = sub_68;
    sub_86 = false;
  };
  if (controller_ck_21_1) {
    sub_85 = v_306;
  } else {
    sub_85 = sub_86;
  };
  if (controller_c_window) {
    sub_84 = false;
  } else {
    sub_84 = sub_85;
  };
  if (controller_c_air_1) {
    sub_83 = sub_84;
  } else {
    sub_83 = false;
  };
  if (controller_c_air_2) {
    v_307 = false;
  } else {
    v_307 = sub_83;
  };
  if (controller_v_220) {
    v_308 = v_307;
  } else {
    v_308 = false;
  };
  if (controller_c_air_2) {
    sub_82 = sub_83;
  } else {
    sub_82 = false;
  };
  if (controller_c_air_1) {
    sub_87 = false;
  } else {
    sub_87 = sub_84;
  };
  if (controller_v_220) {
    sub_81 = sub_87;
  } else {
    sub_81 = sub_82;
  };
  if (controller_v_221) {
    sub_80 = v_308;
  } else {
    sub_80 = sub_81;
  };
  sub_79 = sub_80;
  sub_78 = sub_79;
  sub_77 = sub_78;
  if (controller_air_failed_recovered) {
    v_309 = sub_18;
    sub_76 = sub_77;
  } else {
    v_309 = sub_77;
    sub_76 = sub_18;
  };
  if (controller_ck_35_1) {
    sub_75 = v_309;
  } else {
    sub_75 = sub_76;
  };
  if (controller_cleaner) {
    v_310 = sub_75;
    sub_74 = sub_59;
  } else {
    v_310 = sub_59;
    sub_74 = sub_75;
  };
  if (controller_ck_27_1) {
    sub_73 = v_310;
  } else {
    sub_73 = sub_74;
  };
  if (controller_c_air_1) {
    v = sub_65;
  } else {
    v = false;
  };
  if (controller_c_air_2) {
    v_302 = v;
  } else {
    v_302 = false;
  };
  if (controller_c_air_1) {
    sub_98 = false;
  } else {
    sub_98 = sub_65;
  };
  sub_97 = sub_98;
  if (controller_v_220) {
    v_303 = sub_97;
    sub_96 = v_302;
  } else {
    v_303 = false;
    sub_96 = sub_97;
  };
  if (controller_v_221) {
    sub_95 = v_303;
  } else {
    sub_95 = sub_96;
  };
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  if (controller_air_failed_recovered) {
    v_304 = sub_92;
    sub_91 = sub_77;
  } else {
    v_304 = sub_77;
    sub_91 = sub_92;
  };
  if (controller_ck_35_1) {
    sub_90 = v_304;
  } else {
    sub_90 = sub_91;
  };
  if (controller_cleaner) {
    v_305 = sub_75;
    sub_89 = sub_90;
  } else {
    v_305 = sub_90;
    sub_89 = sub_75;
  };
  if (controller_ck_27_1) {
    sub_88 = v_305;
  } else {
    sub_88 = sub_89;
  };
  if (controller_worker) {
    v_311 = sub_88;
    sub_72 = sub_73;
  } else {
    v_311 = sub_73;
    sub_72 = sub_88;
  };
  if (controller_ck_25_1) {
    sub_71 = v_311;
  } else {
    sub_71 = sub_72;
  };
  if (controller_change_shift) {
    v_333 = sub_71;
    sub_55 = sub_56;
  } else {
    v_333 = sub_56;
    sub_55 = sub_71;
  };
  if (controller_ck_1) {
    v_334 = v_333;
  } else {
    v_334 = sub_55;
  };
  if (p_controller_c_closet) {
    sub_0 = v_334;
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
  int controller_pnr_15, int controller_ck_21_1, int controller_pnr_14,
  int controller_ck_23_1, int controller_pnr_13, int controller_ck_25_1,
  int controller_pnr_12, int controller_ck_27_1, int controller_pnr_11,
  int controller_ck_29_1, int controller_pnr_10, int controller_ck_31_1,
  int controller_pnr_9, int controller_v_221, int controller_v_220,
  int controller_pnr_8, int controller_ck_35_1, int controller_pnr_7,
  int controller_ck_37_1, int controller_pnr_6, int controller_ck_39_1,
  int controller_pnr_5, int controller_ck_41_1, int controller_pnr_4,
  int controller_ck_43_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_2_out* _out) {
  
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
  sub_14 = false;
  sub_15 = true;
  if (p_controller_c_air_2) {
    sub_13 = sub_15;
  } else {
    sub_13 = sub_14;
  };
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (controller_ck_29_1) {
    v_353 = false;
    v_352 = sub_12;
  } else {
    v_353 = sub_12;
    v_352 = false;
  };
  if (controller_c_pc) {
    sub_24 = v_352;
  } else {
    sub_24 = v_353;
  };
  if (controller_c_air_1) {
    sub_23 = false;
  } else {
    sub_23 = sub_24;
  };
  if (controller_v_220) {
    v_355 = sub_23;
  } else {
    v_355 = false;
  };
  sub_26 = sub_15;
  if (controller_ck_29_1) {
    v_351 = false;
    v_350 = sub_26;
  } else {
    v_351 = sub_26;
    v_350 = false;
  };
  if (controller_c_pc) {
    sub_25 = v_350;
  } else {
    sub_25 = v_351;
  };
  if (controller_c_air_1) {
    v_354 = sub_25;
  } else {
    v_354 = false;
  };
  if (controller_v_220) {
    sub_22 = v_354;
  } else {
    sub_22 = sub_23;
  };
  if (controller_v_221) {
    sub_21 = v_355;
  } else {
    sub_21 = sub_22;
  };
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  if (controller_air_failed_recovered) {
    v_356 = sub_18;
    sub_17 = sub_6;
  } else {
    v_356 = sub_6;
    sub_17 = sub_18;
  };
  if (controller_ck_35_1) {
    sub_16 = v_356;
  } else {
    sub_16 = sub_17;
  };
  if (controller_cleaner) {
    v_357 = sub_16;
    sub_4 = sub_5;
  } else {
    v_357 = sub_5;
    sub_4 = sub_16;
  };
  if (controller_ck_27_1) {
    sub_3 = v_357;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  if (controller_c_door) {
    v_340 = false;
    sub_40 = sub_15;
  } else {
    v_340 = sub_15;
    sub_40 = false;
  };
  if (controller_ck_21_1) {
    sub_39 = v_340;
  } else {
    sub_39 = sub_40;
  };
  if (controller_c_window) {
    v_341 = false;
  } else {
    v_341 = sub_39;
  };
  if (controller_c_air_1) {
    sub_38 = v_341;
  } else {
    sub_38 = false;
  };
  if (controller_c_door) {
    v_339 = false;
    sub_42 = sub_13;
  } else {
    v_339 = sub_13;
    sub_42 = false;
  };
  if (controller_ck_21_1) {
    sub_41 = v_339;
  } else {
    sub_41 = sub_42;
  };
  if (controller_c_window) {
    v_342 = false;
  } else {
    v_342 = sub_41;
  };
  if (controller_c_air_1) {
    v_343 = false;
  } else {
    v_343 = v_342;
  };
  if (controller_v_220) {
    sub_37 = v_343;
  } else {
    sub_37 = sub_38;
  };
  if (controller_c_door) {
    v_338 = false;
    sub_44 = sub_14;
  } else {
    v_338 = sub_14;
    sub_44 = false;
  };
  if (controller_ck_21_1) {
    sub_43 = v_338;
  } else {
    sub_43 = sub_44;
  };
  if (controller_c_window) {
    v_344 = false;
  } else {
    v_344 = sub_43;
  };
  if (controller_c_air_1) {
    v_345 = v_344;
  } else {
    v_345 = false;
  };
  if (controller_v_220) {
    v_346 = v_345;
  } else {
    v_346 = false;
  };
  if (controller_v_221) {
    sub_36 = v_346;
  } else {
    sub_36 = sub_37;
  };
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  if (controller_air_failed_recovered) {
    v_347 = sub_18;
    sub_32 = sub_33;
  } else {
    v_347 = sub_33;
    sub_32 = sub_18;
  };
  if (controller_ck_35_1) {
    sub_31 = v_347;
  } else {
    sub_31 = sub_32;
  };
  if (controller_cleaner) {
    v_348 = sub_31;
    sub_30 = sub_5;
  } else {
    v_348 = sub_5;
    sub_30 = sub_31;
  };
  if (controller_ck_27_1) {
    sub_29 = v_348;
  } else {
    sub_29 = sub_30;
  };
  if (controller_c_air_1) {
    sub_54 = false;
  } else {
    sub_54 = sub_10;
  };
  if (controller_v_220) {
    v_335 = sub_54;
  } else {
    v_335 = false;
  };
  sub_55 = sub_26;
  if (controller_c_air_1) {
    v = sub_55;
  } else {
    v = false;
  };
  if (controller_v_220) {
    sub_53 = v;
  } else {
    sub_53 = sub_54;
  };
  if (controller_v_221) {
    sub_52 = v_335;
  } else {
    sub_52 = sub_53;
  };
  sub_51 = sub_52;
  sub_50 = sub_51;
  sub_49 = sub_50;
  if (controller_air_failed_recovered) {
    v_336 = sub_49;
    sub_48 = sub_33;
  } else {
    v_336 = sub_33;
    sub_48 = sub_49;
  };
  if (controller_ck_35_1) {
    sub_47 = v_336;
  } else {
    sub_47 = sub_48;
  };
  if (controller_cleaner) {
    v_337 = sub_31;
    sub_46 = sub_47;
  } else {
    v_337 = sub_47;
    sub_46 = sub_31;
  };
  if (controller_ck_27_1) {
    sub_45 = v_337;
  } else {
    sub_45 = sub_46;
  };
  if (controller_worker) {
    v_349 = sub_45;
    sub_28 = sub_29;
  } else {
    v_349 = sub_29;
    sub_28 = sub_45;
  };
  if (controller_ck_25_1) {
    sub_27 = v_349;
  } else {
    sub_27 = sub_28;
  };
  if (controller_change_shift) {
    v_358 = sub_27;
    sub_1 = sub_2;
  } else {
    v_358 = sub_2;
    sub_1 = sub_27;
  };
  if (controller_ck_1) {
    sub_0 = v_358;
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
  int controller_pnr_15, int controller_ck_21_1, int controller_pnr_14,
  int controller_ck_23_1, int controller_pnr_13, int controller_ck_25_1,
  int controller_pnr_12, int controller_ck_27_1, int controller_pnr_11,
  int controller_ck_29_1, int controller_pnr_10, int controller_ck_31_1,
  int controller_pnr_9, int controller_v_221, int controller_v_220,
  int controller_pnr_8, int controller_ck_35_1, int controller_pnr_7,
  int controller_ck_37_1, int controller_pnr_6, int controller_ck_39_1,
  int controller_pnr_5, int controller_ck_41_1, int controller_pnr_4,
  int controller_ck_43_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_1_out* _out) {
  
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
  sub_13 = false;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (controller_ck_29_1) {
    v_375 = false;
    v_374 = sub_12;
  } else {
    v_375 = sub_12;
    v_374 = false;
  };
  if (controller_c_pc) {
    sub_22 = v_374;
  } else {
    sub_22 = v_375;
  };
  sub_21 = sub_22;
  if (controller_v_220) {
    v_376 = sub_21;
  } else {
    v_376 = false;
  };
  sub_25 = true;
  sub_24 = sub_25;
  if (controller_ck_29_1) {
    v_373 = false;
    v_372 = sub_24;
  } else {
    v_373 = sub_24;
    v_372 = false;
  };
  if (controller_c_pc) {
    sub_23 = v_372;
  } else {
    sub_23 = v_373;
  };
  if (controller_v_220) {
    sub_20 = sub_23;
  } else {
    sub_20 = sub_21;
  };
  if (controller_v_221) {
    sub_19 = v_376;
  } else {
    sub_19 = sub_20;
  };
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  if (controller_air_failed_recovered) {
    v_377 = sub_16;
    sub_15 = sub_7;
  } else {
    v_377 = sub_7;
    sub_15 = sub_16;
  };
  if (controller_ck_35_1) {
    sub_14 = v_377;
  } else {
    sub_14 = sub_15;
  };
  if (controller_cleaner) {
    v_378 = sub_14;
    sub_5 = sub_6;
  } else {
    v_378 = sub_6;
    sub_5 = sub_14;
  };
  if (controller_ck_27_1) {
    sub_4 = v_378;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  if (controller_c_door) {
    v_366 = false;
    sub_39 = sub_25;
  } else {
    v_366 = sub_25;
    sub_39 = false;
  };
  if (controller_ck_21_1) {
    sub_38 = v_366;
  } else {
    sub_38 = sub_39;
  };
  if (controller_c_window) {
    sub_37 = false;
  } else {
    sub_37 = sub_38;
  };
  if (controller_v_220) {
    v_368 = sub_37;
  } else {
    v_368 = false;
  };
  if (controller_c_door) {
    v_365 = false;
    sub_41 = sub_13;
  } else {
    v_365 = sub_13;
    sub_41 = false;
  };
  if (controller_ck_21_1) {
    sub_40 = v_365;
  } else {
    sub_40 = sub_41;
  };
  if (controller_c_window) {
    v_367 = false;
  } else {
    v_367 = sub_40;
  };
  if (controller_v_220) {
    sub_36 = v_367;
  } else {
    sub_36 = sub_37;
  };
  if (controller_v_221) {
    sub_35 = v_368;
  } else {
    sub_35 = sub_36;
  };
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  if (controller_air_failed_recovered) {
    v_369 = sub_16;
    sub_31 = sub_32;
  } else {
    v_369 = sub_32;
    sub_31 = sub_16;
  };
  if (controller_ck_35_1) {
    sub_30 = v_369;
  } else {
    sub_30 = sub_31;
  };
  if (controller_cleaner) {
    v_370 = sub_30;
    sub_29 = sub_6;
  } else {
    v_370 = sub_6;
    sub_29 = sub_30;
  };
  if (controller_ck_27_1) {
    sub_28 = v_370;
  } else {
    sub_28 = sub_29;
  };
  if (controller_v_220) {
    v_362 = sub_10;
  } else {
    v_362 = false;
  };
  sub_52 = sub_24;
  sub_51 = sub_52;
  if (controller_v_220) {
    sub_50 = sub_51;
  } else {
    sub_50 = sub_10;
  };
  if (controller_v_221) {
    sub_49 = v_362;
  } else {
    sub_49 = sub_50;
  };
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  if (controller_air_failed_recovered) {
    v_363 = sub_46;
    sub_45 = sub_32;
  } else {
    v_363 = sub_32;
    sub_45 = sub_46;
  };
  if (controller_ck_35_1) {
    sub_44 = v_363;
  } else {
    sub_44 = sub_45;
  };
  if (controller_cleaner) {
    v_364 = sub_30;
    sub_43 = sub_44;
  } else {
    v_364 = sub_44;
    sub_43 = sub_30;
  };
  if (controller_ck_27_1) {
    sub_42 = v_364;
  } else {
    sub_42 = sub_43;
  };
  if (controller_worker) {
    v_371 = sub_42;
    sub_27 = sub_28;
  } else {
    v_371 = sub_28;
    sub_27 = sub_42;
  };
  if (controller_ck_25_1) {
    sub_26 = v_371;
  } else {
    sub_26 = sub_27;
  };
  if (controller_change_shift) {
    v_379 = sub_26;
    sub_2 = sub_3;
  } else {
    v_379 = sub_3;
    sub_2 = sub_26;
  };
  if (controller_ck_1) {
    sub_1 = v_379;
  } else {
    sub_1 = sub_2;
  };
  sub_60 = sub_51;
  sub_59 = sub_60;
  sub_58 = sub_59;
  sub_57 = sub_58;
  if (controller_air_failed_recovered) {
    v_360 = sub_16;
    sub_62 = sub_58;
  } else {
    v_360 = sub_58;
    sub_62 = sub_16;
  };
  if (controller_ck_35_1) {
    sub_61 = v_360;
  } else {
    sub_61 = sub_62;
  };
  if (controller_cleaner) {
    v_361 = sub_61;
    sub_56 = sub_57;
  } else {
    v_361 = sub_57;
    sub_56 = sub_61;
  };
  if (controller_ck_27_1) {
    sub_55 = v_361;
  } else {
    sub_55 = sub_56;
  };
  sub_54 = sub_55;
  if (controller_cleaner) {
    v = sub_30;
    sub_66 = sub_57;
  } else {
    v = sub_57;
    sub_66 = sub_30;
  };
  if (controller_ck_27_1) {
    sub_65 = v;
  } else {
    sub_65 = sub_66;
  };
  if (controller_worker) {
    v_359 = sub_42;
    sub_64 = sub_65;
  } else {
    v_359 = sub_65;
    sub_64 = sub_42;
  };
  if (controller_ck_25_1) {
    sub_63 = v_359;
  } else {
    sub_63 = sub_64;
  };
  if (controller_change_shift) {
    v_380 = sub_63;
    sub_53 = sub_54;
  } else {
    v_380 = sub_54;
    sub_53 = sub_63;
  };
  if (controller_ck_1) {
    v_381 = v_380;
  } else {
    v_381 = sub_53;
  };
  if (p_controller_c_air_1) {
    sub_0 = v_381;
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
  int controller_pnr_15, int controller_ck_21_1, int controller_pnr_14,
  int controller_ck_23_1, int controller_pnr_13, int controller_ck_25_1,
  int controller_pnr_12, int controller_ck_27_1, int controller_pnr_11,
  int controller_ck_29_1, int controller_pnr_10, int controller_ck_31_1,
  int controller_pnr_9, int controller_v_221, int controller_v_220,
  int controller_pnr_8, int controller_ck_35_1, int controller_pnr_7,
  int controller_ck_37_1, int controller_pnr_6, int controller_ck_39_1,
  int controller_pnr_5, int controller_ck_41_1, int controller_pnr_4,
  int controller_ck_43_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_window_out* _out) {
  
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
  sub_12 = false;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (controller_ck_29_1) {
    v_401 = false;
    v_400 = sub_11;
  } else {
    v_401 = sub_11;
    v_400 = false;
  };
  if (controller_c_pc) {
    sub_19 = v_400;
  } else {
    sub_19 = v_401;
  };
  if (controller_v_220) {
    v_402 = sub_19;
  } else {
    v_402 = false;
  };
  if (controller_v_221) {
    sub_18 = v_402;
  } else {
    sub_18 = sub_19;
  };
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  if (controller_air_failed_recovered) {
    v_403 = sub_15;
    sub_14 = sub_7;
  } else {
    v_403 = sub_7;
    sub_14 = sub_15;
  };
  if (controller_ck_35_1) {
    sub_13 = v_403;
  } else {
    sub_13 = sub_14;
  };
  if (controller_cleaner) {
    v_404 = sub_13;
    sub_5 = sub_6;
  } else {
    v_404 = sub_6;
    sub_5 = sub_13;
  };
  if (controller_ck_27_1) {
    sub_4 = v_404;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  if (controller_c_door) {
    v_395 = false;
    sub_32 = sub_12;
  } else {
    v_395 = sub_12;
    sub_32 = false;
  };
  if (controller_ck_21_1) {
    sub_31 = v_395;
  } else {
    sub_31 = sub_32;
  };
  sub_30 = sub_31;
  if (controller_v_220) {
    v_396 = sub_30;
  } else {
    v_396 = false;
  };
  if (controller_v_221) {
    sub_29 = v_396;
  } else {
    sub_29 = sub_30;
  };
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  if (controller_air_failed_recovered) {
    v_397 = sub_15;
    sub_25 = sub_26;
  } else {
    v_397 = sub_26;
    sub_25 = sub_15;
  };
  if (controller_ck_35_1) {
    sub_24 = v_397;
  } else {
    sub_24 = sub_25;
  };
  if (controller_cleaner) {
    v_398 = sub_24;
    sub_23 = sub_6;
  } else {
    v_398 = sub_6;
    sub_23 = sub_24;
  };
  if (controller_ck_27_1) {
    sub_22 = v_398;
  } else {
    sub_22 = sub_23;
  };
  if (controller_v_220) {
    v_392 = sub_10;
  } else {
    v_392 = false;
  };
  if (controller_v_221) {
    sub_40 = v_392;
  } else {
    sub_40 = sub_10;
  };
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  if (controller_air_failed_recovered) {
    v_393 = sub_37;
    sub_36 = sub_26;
  } else {
    v_393 = sub_26;
    sub_36 = sub_37;
  };
  if (controller_ck_35_1) {
    sub_35 = v_393;
  } else {
    sub_35 = sub_36;
  };
  if (controller_cleaner) {
    v_394 = sub_24;
    sub_34 = sub_35;
  } else {
    v_394 = sub_35;
    sub_34 = sub_24;
  };
  if (controller_ck_27_1) {
    sub_33 = v_394;
  } else {
    sub_33 = sub_34;
  };
  if (controller_worker) {
    v_399 = sub_33;
    sub_21 = sub_22;
  } else {
    v_399 = sub_22;
    sub_21 = sub_33;
  };
  if (controller_ck_25_1) {
    sub_20 = v_399;
  } else {
    sub_20 = sub_21;
  };
  if (controller_change_shift) {
    v_405 = sub_20;
    sub_2 = sub_3;
  } else {
    v_405 = sub_3;
    sub_2 = sub_20;
  };
  if (controller_ck_1) {
    sub_1 = v_405;
  } else {
    sub_1 = sub_2;
  };
  sub_51 = true;
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  if (controller_ck_29_1) {
    v_388 = false;
    v_387 = sub_50;
  } else {
    v_388 = sub_50;
    v_387 = false;
  };
  if (controller_c_pc) {
    sub_58 = v_387;
  } else {
    sub_58 = v_388;
  };
  if (controller_v_220) {
    v_389 = sub_58;
  } else {
    v_389 = false;
  };
  if (controller_v_221) {
    sub_57 = v_389;
  } else {
    sub_57 = sub_58;
  };
  sub_56 = sub_57;
  sub_55 = sub_56;
  sub_54 = sub_55;
  if (controller_air_failed_recovered) {
    v_390 = sub_54;
    sub_53 = sub_46;
  } else {
    v_390 = sub_46;
    sub_53 = sub_54;
  };
  if (controller_ck_35_1) {
    sub_52 = v_390;
  } else {
    sub_52 = sub_53;
  };
  if (controller_cleaner) {
    v_391 = sub_52;
    sub_44 = sub_45;
  } else {
    v_391 = sub_45;
    sub_44 = sub_52;
  };
  if (controller_ck_27_1) {
    sub_43 = v_391;
  } else {
    sub_43 = sub_44;
  };
  sub_42 = sub_43;
  if (controller_air_failed_recovered) {
    v_384 = sub_54;
    sub_64 = sub_26;
  } else {
    v_384 = sub_26;
    sub_64 = sub_54;
  };
  if (controller_ck_35_1) {
    sub_63 = v_384;
  } else {
    sub_63 = sub_64;
  };
  if (controller_cleaner) {
    v_385 = sub_63;
    sub_62 = sub_45;
  } else {
    v_385 = sub_45;
    sub_62 = sub_63;
  };
  if (controller_ck_27_1) {
    sub_61 = v_385;
  } else {
    sub_61 = sub_62;
  };
  if (controller_v_220) {
    v = sub_49;
  } else {
    v = false;
  };
  if (controller_v_221) {
    sub_72 = v;
  } else {
    sub_72 = sub_49;
  };
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  if (controller_air_failed_recovered) {
    v_382 = sub_69;
    sub_68 = sub_26;
  } else {
    v_382 = sub_26;
    sub_68 = sub_69;
  };
  if (controller_ck_35_1) {
    sub_67 = v_382;
  } else {
    sub_67 = sub_68;
  };
  if (controller_cleaner) {
    v_383 = sub_63;
    sub_66 = sub_67;
  } else {
    v_383 = sub_67;
    sub_66 = sub_63;
  };
  if (controller_ck_27_1) {
    sub_65 = v_383;
  } else {
    sub_65 = sub_66;
  };
  if (controller_worker) {
    v_386 = sub_65;
    sub_60 = sub_61;
  } else {
    v_386 = sub_61;
    sub_60 = sub_65;
  };
  if (controller_ck_25_1) {
    sub_59 = v_386;
  } else {
    sub_59 = sub_60;
  };
  if (controller_change_shift) {
    v_406 = sub_59;
    sub_41 = sub_42;
  } else {
    v_406 = sub_42;
    sub_41 = sub_59;
  };
  if (controller_ck_1) {
    v_407 = v_406;
  } else {
    v_407 = sub_41;
  };
  if (p_controller_c_window) {
    sub_0 = v_407;
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
  int controller_pnr_15, int controller_ck_21_1, int controller_pnr_14,
  int controller_ck_23_1, int controller_pnr_13, int controller_ck_25_1,
  int controller_pnr_12, int controller_ck_27_1, int controller_pnr_11,
  int controller_ck_29_1, int controller_pnr_10, int controller_ck_31_1,
  int controller_pnr_9, int controller_v_221, int controller_v_220,
  int controller_pnr_8, int controller_ck_35_1, int controller_pnr_7,
  int controller_ck_37_1, int controller_pnr_6, int controller_ck_39_1,
  int controller_pnr_5, int controller_ck_41_1, int controller_pnr_4,
  int controller_ck_43_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_pc_out* _out) {
  
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
  sub_11 = p_controller_c_pc;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_20 = false;
  sub_19 = sub_20;
  sub_21 = true;
  if (controller_ck_29_1) {
    sub_18 = sub_21;
  } else {
    sub_18 = sub_19;
  };
  if (controller_v_220) {
    v_415 = sub_18;
  } else {
    v_415 = false;
  };
  if (controller_v_221) {
    sub_17 = v_415;
  } else {
    sub_17 = sub_18;
  };
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  if (controller_air_failed_recovered) {
    v_416 = sub_14;
    sub_13 = sub_6;
  } else {
    v_416 = sub_6;
    sub_13 = sub_14;
  };
  if (controller_ck_35_1) {
    sub_12 = v_416;
  } else {
    sub_12 = sub_13;
  };
  if (controller_cleaner) {
    v_417 = sub_12;
    sub_4 = sub_5;
  } else {
    v_417 = sub_5;
    sub_4 = sub_12;
  };
  if (controller_ck_27_1) {
    sub_3 = v_417;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  if (controller_c_door) {
    v_410 = false;
    sub_33 = sub_10;
  } else {
    v_410 = sub_10;
    sub_33 = false;
  };
  if (controller_ck_21_1) {
    sub_32 = v_410;
  } else {
    sub_32 = sub_33;
  };
  if (controller_v_220) {
    v_411 = sub_32;
  } else {
    v_411 = false;
  };
  if (controller_v_221) {
    sub_31 = v_411;
  } else {
    sub_31 = sub_32;
  };
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  if (controller_air_failed_recovered) {
    v_412 = sub_14;
    sub_27 = sub_28;
  } else {
    v_412 = sub_28;
    sub_27 = sub_14;
  };
  if (controller_ck_35_1) {
    sub_26 = v_412;
  } else {
    sub_26 = sub_27;
  };
  if (controller_cleaner) {
    v_413 = sub_26;
    sub_25 = sub_5;
  } else {
    v_413 = sub_5;
    sub_25 = sub_26;
  };
  if (controller_ck_27_1) {
    sub_24 = v_413;
  } else {
    sub_24 = sub_25;
  };
  if (controller_v_220) {
    v = sub_9;
  } else {
    v = false;
  };
  if (controller_v_221) {
    sub_41 = v;
  } else {
    sub_41 = sub_9;
  };
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (controller_air_failed_recovered) {
    v_408 = sub_38;
    sub_37 = sub_28;
  } else {
    v_408 = sub_28;
    sub_37 = sub_38;
  };
  if (controller_ck_35_1) {
    sub_36 = v_408;
  } else {
    sub_36 = sub_37;
  };
  if (controller_cleaner) {
    v_409 = sub_26;
    sub_35 = sub_36;
  } else {
    v_409 = sub_36;
    sub_35 = sub_26;
  };
  if (controller_ck_27_1) {
    sub_34 = v_409;
  } else {
    sub_34 = sub_35;
  };
  if (controller_worker) {
    v_414 = sub_34;
    sub_23 = sub_24;
  } else {
    v_414 = sub_24;
    sub_23 = sub_34;
  };
  if (controller_ck_25_1) {
    sub_22 = v_414;
  } else {
    sub_22 = sub_23;
  };
  if (controller_change_shift) {
    v_418 = sub_22;
    sub_1 = sub_2;
  } else {
    v_418 = sub_2;
    sub_1 = sub_22;
  };
  if (controller_ck_1) {
    sub_0 = v_418;
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
  int controller_pnr_15, int controller_ck_21_1, int controller_pnr_14,
  int controller_ck_23_1, int controller_pnr_13, int controller_ck_25_1,
  int controller_pnr_12, int controller_ck_27_1, int controller_pnr_11,
  int controller_ck_29_1, int controller_pnr_10, int controller_ck_31_1,
  int controller_pnr_9, int controller_v_221, int controller_v_220,
  int controller_pnr_8, int controller_ck_35_1, int controller_pnr_7,
  int controller_ck_37_1, int controller_pnr_6, int controller_ck_39_1,
  int controller_pnr_5, int controller_ck_41_1, int controller_pnr_4,
  int controller_ck_43_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_blind_1, int p_controller_c_light_2,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  Controller_controller__controller_controller_controller_c_door_out* _out) {
  
  int v_425;
  int v_424;
  int v_423;
  int v_422;
  int v_421;
  int v_420;
  int v_419;
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
  sub_10 = p_controller_c_door;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (controller_v_220) {
    v_422 = sub_9;
  } else {
    v_422 = false;
  };
  if (controller_v_221) {
    sub_16 = v_422;
  } else {
    sub_16 = sub_9;
  };
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  if (controller_air_failed_recovered) {
    v_423 = sub_13;
    sub_12 = sub_6;
  } else {
    v_423 = sub_6;
    sub_12 = sub_13;
  };
  if (controller_ck_35_1) {
    sub_11 = v_423;
  } else {
    sub_11 = sub_12;
  };
  if (controller_cleaner) {
    v_424 = sub_11;
    sub_4 = sub_5;
  } else {
    v_424 = sub_5;
    sub_4 = sub_11;
  };
  if (controller_ck_27_1) {
    sub_3 = v_424;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  sub_28 = true;
  if (controller_ck_21_1) {
    sub_27 = false;
  } else {
    sub_27 = sub_28;
  };
  if (controller_v_220) {
    v = sub_27;
  } else {
    v = false;
  };
  if (controller_v_221) {
    sub_26 = v;
  } else {
    sub_26 = sub_27;
  };
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  if (controller_air_failed_recovered) {
    v_419 = sub_13;
    sub_22 = sub_23;
  } else {
    v_419 = sub_23;
    sub_22 = sub_13;
  };
  if (controller_ck_35_1) {
    sub_21 = v_419;
  } else {
    sub_21 = sub_22;
  };
  if (controller_cleaner) {
    v_420 = sub_21;
    sub_20 = sub_5;
  } else {
    v_420 = sub_5;
    sub_20 = sub_21;
  };
  if (controller_ck_27_1) {
    sub_19 = v_420;
  } else {
    sub_19 = sub_20;
  };
  sub_29 = sub_21;
  if (controller_worker) {
    v_421 = sub_29;
    sub_18 = sub_19;
  } else {
    v_421 = sub_19;
    sub_18 = sub_29;
  };
  if (controller_ck_25_1) {
    sub_17 = v_421;
  } else {
    sub_17 = sub_18;
  };
  if (controller_change_shift) {
    v_425 = sub_17;
    sub_1 = sub_2;
  } else {
    v_425 = sub_2;
    sub_1 = sub_17;
  };
  if (controller_ck_1) {
    sub_0 = v_425;
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
                                                       int controller_pnr_15,
                                                       int controller_ck_21_1,
                                                       int controller_pnr_14,
                                                       int controller_ck_23_1,
                                                       int controller_pnr_13,
                                                       int controller_ck_25_1,
                                                       int controller_pnr_12,
                                                       int controller_ck_27_1,
                                                       int controller_pnr_11,
                                                       int controller_ck_29_1,
                                                       int controller_pnr_10,
                                                       int controller_ck_31_1,
                                                       int controller_pnr_9,
                                                       int controller_v_221,
                                                       int controller_v_220,
                                                       int controller_pnr_8,
                                                       int controller_ck_35_1,
                                                       int controller_pnr_7,
                                                       int controller_ck_37_1,
                                                       int controller_pnr_6,
                                                       int controller_ck_39_1,
                                                       int controller_pnr_5,
                                                       int controller_ck_41_1,
                                                       int controller_pnr_4,
                                                       int controller_ck_43_1,
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
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_15,
  controller_ck_21_1, controller_pnr_14, controller_ck_23_1,
  controller_pnr_13, controller_ck_25_1, controller_pnr_12,
  controller_ck_27_1, controller_pnr_11, controller_ck_29_1,
  controller_pnr_10, controller_ck_31_1, controller_pnr_9, controller_v_221,
  controller_v_220, controller_pnr_8, controller_ck_35_1, controller_pnr_7,
  controller_ck_37_1, controller_pnr_6, controller_ck_39_1, controller_pnr_5,
  controller_ck_41_1, controller_pnr_4, controller_ck_43_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
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
                                                                    controller_pnr_15,
                                                                    controller_ck_21_1,
                                                                    controller_pnr_14,
                                                                    controller_ck_23_1,
                                                                    controller_pnr_13,
                                                                    controller_ck_25_1,
                                                                    controller_pnr_12,
                                                                    controller_ck_27_1,
                                                                    controller_pnr_11,
                                                                    controller_ck_29_1,
                                                                    controller_pnr_10,
                                                                    controller_ck_31_1,
                                                                    controller_pnr_9,
                                                                    controller_v_221,
                                                                    controller_v_220,
                                                                    controller_pnr_8,
                                                                    controller_ck_35_1,
                                                                    controller_pnr_7,
                                                                    controller_ck_37_1,
                                                                    controller_pnr_6,
                                                                    controller_ck_39_1,
                                                                    controller_pnr_5,
                                                                    controller_ck_41_1,
                                                                    controller_pnr_4,
                                                                    controller_ck_43_1,
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
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_15,
  controller_ck_21_1, controller_pnr_14, controller_ck_23_1,
  controller_pnr_13, controller_ck_25_1, controller_pnr_12,
  controller_ck_27_1, controller_pnr_11, controller_ck_29_1,
  controller_pnr_10, controller_ck_31_1, controller_pnr_9, controller_v_221,
  controller_v_220, controller_pnr_8, controller_ck_35_1, controller_pnr_7,
  controller_ck_37_1, controller_pnr_6, controller_ck_39_1, controller_pnr_5,
  controller_ck_41_1, controller_pnr_4, controller_ck_43_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door, _out->controller_c_pc, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_window_out_st);
  _out->controller_c_window = Controller_controller__controller_controller_controller_c_window_out_st.controller_c_window;
  Controller_controller__controller_controller_controller_c_air_1_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_15,
  controller_ck_21_1, controller_pnr_14, controller_ck_23_1,
  controller_pnr_13, controller_ck_25_1, controller_pnr_12,
  controller_ck_27_1, controller_pnr_11, controller_ck_29_1,
  controller_pnr_10, controller_ck_31_1, controller_pnr_9, controller_v_221,
  controller_v_220, controller_pnr_8, controller_ck_35_1, controller_pnr_7,
  controller_ck_37_1, controller_pnr_6, controller_ck_39_1, controller_pnr_5,
  controller_ck_41_1, controller_pnr_4, controller_ck_43_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
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
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_15,
  controller_ck_21_1, controller_pnr_14, controller_ck_23_1,
  controller_pnr_13, controller_ck_25_1, controller_pnr_12,
  controller_ck_27_1, controller_pnr_11, controller_ck_29_1,
  controller_pnr_10, controller_ck_31_1, controller_pnr_9, controller_v_221,
  controller_v_220, controller_pnr_8, controller_ck_35_1, controller_pnr_7,
  controller_ck_37_1, controller_pnr_6, controller_ck_39_1, controller_pnr_5,
  controller_ck_41_1, controller_pnr_4, controller_ck_43_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
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
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_15,
  controller_ck_21_1, controller_pnr_14, controller_ck_23_1,
  controller_pnr_13, controller_ck_25_1, controller_pnr_12,
  controller_ck_27_1, controller_pnr_11, controller_ck_29_1,
  controller_pnr_10, controller_ck_31_1, controller_pnr_9, controller_v_221,
  controller_v_220, controller_pnr_8, controller_ck_35_1, controller_pnr_7,
  controller_ck_37_1, controller_pnr_6, controller_ck_39_1, controller_pnr_5,
  controller_ck_41_1, controller_pnr_4, controller_ck_43_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
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
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_15,
  controller_ck_21_1, controller_pnr_14, controller_ck_23_1,
  controller_pnr_13, controller_ck_25_1, controller_pnr_12,
  controller_ck_27_1, controller_pnr_11, controller_ck_29_1,
  controller_pnr_10, controller_ck_31_1, controller_pnr_9, controller_v_221,
  controller_v_220, controller_pnr_8, controller_ck_35_1, controller_pnr_7,
  controller_ck_37_1, controller_pnr_6, controller_ck_39_1, controller_pnr_5,
  controller_ck_41_1, controller_pnr_4, controller_ck_43_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door, _out->controller_c_closet, _out->controller_c_air_2,
  _out->controller_c_air_1, _out->controller_c_window, _out->controller_c_pc,
  _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_light_1_out_st);
  _out->controller_c_light_1 = Controller_controller__controller_controller_controller_c_light_1_out_st.controller_c_light_1;
  Controller_controller__controller_controller_controller_c_light_2_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_15,
  controller_ck_21_1, controller_pnr_14, controller_ck_23_1,
  controller_pnr_13, controller_ck_25_1, controller_pnr_12,
  controller_ck_27_1, controller_pnr_11, controller_ck_29_1,
  controller_pnr_10, controller_ck_31_1, controller_pnr_9, controller_v_221,
  controller_v_220, controller_pnr_8, controller_ck_35_1, controller_pnr_7,
  controller_ck_37_1, controller_pnr_6, controller_ck_39_1, controller_pnr_5,
  controller_ck_41_1, controller_pnr_4, controller_ck_43_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door, _out->controller_c_light_1, _out->controller_c_closet,
  _out->controller_c_air_2, _out->controller_c_air_1,
  _out->controller_c_window, _out->controller_c_pc, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_light_2_out_st);
  _out->controller_c_light_2 = Controller_controller__controller_controller_controller_c_light_2_out_st.controller_c_light_2;
  Controller_controller__controller_controller_controller_c_blind_1_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_15,
  controller_ck_21_1, controller_pnr_14, controller_ck_23_1,
  controller_pnr_13, controller_ck_25_1, controller_pnr_12,
  controller_ck_27_1, controller_pnr_11, controller_ck_29_1,
  controller_pnr_10, controller_ck_31_1, controller_pnr_9, controller_v_221,
  controller_v_220, controller_pnr_8, controller_ck_35_1, controller_pnr_7,
  controller_ck_37_1, controller_pnr_6, controller_ck_39_1, controller_pnr_5,
  controller_ck_41_1, controller_pnr_4, controller_ck_43_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door, _out->controller_c_light_2,
  _out->controller_c_light_1, _out->controller_c_closet,
  _out->controller_c_air_2, _out->controller_c_air_1,
  _out->controller_c_window, _out->controller_c_pc, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_blind_1_out_st);
  _out->controller_c_blind_1 = Controller_controller__controller_controller_controller_c_blind_1_out_st.controller_c_blind_1;
  Controller_controller__controller_controller_controller_c_blind_2_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_ck_1, controller_pnr_15,
  controller_ck_21_1, controller_pnr_14, controller_ck_23_1,
  controller_pnr_13, controller_ck_25_1, controller_pnr_12,
  controller_ck_27_1, controller_pnr_11, controller_ck_29_1,
  controller_pnr_10, controller_ck_31_1, controller_pnr_9, controller_v_221,
  controller_v_220, controller_pnr_8, controller_ck_35_1, controller_pnr_7,
  controller_ck_37_1, controller_pnr_6, controller_ck_39_1, controller_pnr_5,
  controller_ck_41_1, controller_pnr_4, controller_ck_43_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door, _out->controller_c_blind_1,
  _out->controller_c_light_2, _out->controller_c_light_1,
  _out->controller_c_closet, _out->controller_c_air_2,
  _out->controller_c_air_1, _out->controller_c_window, _out->controller_c_pc,
  _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_blind_2_out_st);
  _out->controller_c_blind_2 = Controller_controller__controller_controller_controller_c_blind_2_out_st.controller_c_blind_2;
}

