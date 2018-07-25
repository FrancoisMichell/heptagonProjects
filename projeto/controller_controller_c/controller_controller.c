/* --- Generated the 25/7/2018 at 10:56 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c controller_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "controller_controller.h"

void Controller_controller__controller_controller_controller_c_blind_2_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_light_switch, int controller_blind_switch,
  int controller_ck_1, int controller_pnr_9, int controller_ck_10_1,
  int controller_pnr_8, int controller_ck_12_1, int controller_pnr_7,
  int controller_ck_14_1, int controller_pnr_6, int controller_ck_16_1,
  int controller_pnr_5, int controller_ck_18_1, int controller_pnr_4,
  int controller_ck_20_1, int controller_pnr_3, int controller_v_112,
  int controller_v_111, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_blind_1,
  int p_controller_c_light_2, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_blind_1,
  int controller_c_light_2, int controller_c_light_1,
  int controller_c_closet, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_blind_2_out* _out) {
  
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
  sub_17 = true;
  sub_16 = sub_17;
  if (controller_v_112) {
    sub_15 = false;
  } else {
    sub_15 = sub_16;
  };
  if (controller_c_air_1) {
    v_63 = false;
  } else {
    v_63 = sub_15;
  };
  if (controller_v_112) {
    sub_18 = sub_16;
  } else {
    sub_18 = false;
  };
  if (controller_c_air_1) {
    v_64 = sub_18;
  } else {
    v_64 = sub_15;
  };
  if (controller_v_111) {
    v_65 = v_64;
  } else {
    v_65 = false;
  };
  if (controller_c_air_2) {
    sub_14 = v_63;
  } else {
    sub_14 = v_65;
  };
  if (controller_c_pc) {
    v_66 = sub_14;
    sub_13 = false;
  } else {
    v_66 = false;
    sub_13 = sub_14;
  };
  if (controller_ck_18_1) {
    v_67 = v_66;
  } else {
    v_67 = sub_13;
  };
  if (controller_c_closet) {
    sub_12 = v_67;
  } else {
    sub_12 = false;
  };
  if (controller_blind_switch) {
    sub_11 = sub_12;
  } else {
    sub_11 = false;
  };
  sub_25 = false;
  sub_24 = sub_25;
  if (controller_v_112) {
    sub_23 = false;
  } else {
    sub_23 = sub_24;
  };
  if (controller_c_air_1) {
    v_58 = false;
  } else {
    v_58 = sub_23;
  };
  if (controller_v_112) {
    sub_26 = sub_24;
  } else {
    sub_26 = false;
  };
  if (controller_c_air_1) {
    v_59 = sub_26;
  } else {
    v_59 = sub_23;
  };
  if (controller_v_111) {
    v_60 = v_59;
  } else {
    v_60 = false;
  };
  if (controller_c_air_2) {
    sub_22 = v_58;
  } else {
    sub_22 = v_60;
  };
  if (controller_c_pc) {
    v_61 = sub_22;
    sub_21 = false;
  } else {
    v_61 = false;
    sub_21 = sub_22;
  };
  if (controller_ck_18_1) {
    v_62 = v_61;
  } else {
    v_62 = sub_21;
  };
  if (controller_c_closet) {
    sub_20 = v_62;
  } else {
    sub_20 = false;
  };
  sub_19 = sub_20;
  if (controller_c_blind_1) {
    v_68 = sub_19;
    sub_10 = sub_11;
  } else {
    v_68 = false;
    sub_10 = sub_19;
  };
  if (controller_ck_26_1) {
    sub_9 = v_68;
  } else {
    sub_9 = sub_10;
  };
  if (controller_ck_24_1) {
    sub_8 = false;
    v_57 = sub_9;
  } else {
    sub_8 = sub_9;
    v_57 = false;
  };
  if (controller_c_light_1) {
    sub_27 = v_57;
  } else {
    sub_27 = sub_8;
  };
  if (controller_light_switch) {
    v_69 = sub_8;
  } else {
    v_69 = sub_27;
  };
  if (controller_c_light_2) {
    sub_7 = v_69;
  } else {
    sub_7 = sub_27;
  };
  sub_35 = sub_24;
  sub_34 = sub_35;
  if (controller_c_closet) {
    sub_33 = false;
  } else {
    sub_33 = sub_34;
  };
  sub_32 = sub_33;
  if (controller_c_blind_1) {
    sub_31 = sub_32;
  } else {
    sub_31 = false;
  };
  sub_40 = sub_16;
  sub_39 = sub_40;
  if (controller_c_closet) {
    sub_38 = false;
  } else {
    sub_38 = sub_39;
  };
  if (controller_blind_switch) {
    sub_37 = sub_38;
  } else {
    sub_37 = false;
  };
  if (controller_c_blind_1) {
    sub_36 = sub_37;
  } else {
    sub_36 = sub_32;
  };
  if (controller_ck_26_1) {
    sub_30 = sub_36;
  } else {
    sub_30 = sub_31;
  };
  if (controller_c_air_1) {
    v_52 = sub_23;
    v_50 = sub_26;
  } else {
    v_52 = false;
    v_50 = false;
  };
  sub_46 = sub_26;
  if (controller_v_111) {
    v_51 = v_50;
  } else {
    v_51 = sub_46;
  };
  if (controller_c_air_1) {
    sub_47 = sub_26;
  } else {
    sub_47 = sub_24;
  };
  if (controller_v_111) {
    v_53 = v_52;
  } else {
    v_53 = sub_47;
  };
  if (controller_c_air_2) {
    sub_45 = v_51;
  } else {
    sub_45 = v_53;
  };
  if (controller_c_pc) {
    v_54 = sub_34;
    sub_44 = sub_45;
  } else {
    v_54 = sub_45;
    sub_44 = sub_34;
  };
  if (controller_ck_18_1) {
    v_55 = v_54;
  } else {
    v_55 = sub_44;
  };
  if (controller_c_closet) {
    sub_43 = false;
  } else {
    sub_43 = v_55;
  };
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (controller_ck_24_1) {
    sub_29 = sub_41;
    v_49 = sub_30;
  } else {
    sub_29 = sub_30;
    v_49 = sub_41;
  };
  if (controller_c_light_1) {
    sub_48 = v_49;
  } else {
    sub_48 = sub_29;
  };
  if (controller_light_switch) {
    v_56 = sub_29;
  } else {
    v_56 = sub_48;
  };
  if (controller_c_light_2) {
    sub_28 = v_56;
  } else {
    sub_28 = sub_48;
  };
  if (controller_cleaner) {
    v_70 = sub_28;
    sub_6 = sub_7;
  } else {
    v_70 = sub_7;
    sub_6 = sub_28;
  };
  if (controller_ck_16_1) {
    sub_5 = v_70;
  } else {
    sub_5 = sub_6;
  };
  if (controller_c_pc) {
    v_46 = false;
    sub_58 = sub_34;
  } else {
    v_46 = sub_34;
    sub_58 = false;
  };
  if (controller_ck_18_1) {
    sub_57 = v_46;
  } else {
    sub_57 = sub_58;
  };
  sub_56 = sub_57;
  sub_55 = sub_56;
  if (controller_c_blind_1) {
    sub_54 = sub_55;
  } else {
    sub_54 = false;
  };
  if (controller_c_pc) {
    v_45 = false;
    sub_63 = sub_39;
  } else {
    v_45 = sub_39;
    sub_63 = false;
  };
  if (controller_ck_18_1) {
    sub_62 = v_45;
  } else {
    sub_62 = sub_63;
  };
  sub_61 = sub_62;
  if (controller_blind_switch) {
    sub_60 = sub_61;
  } else {
    sub_60 = false;
  };
  if (controller_c_blind_1) {
    sub_59 = sub_60;
  } else {
    sub_59 = sub_55;
  };
  if (controller_ck_26_1) {
    sub_53 = sub_59;
  } else {
    sub_53 = sub_54;
  };
  if (controller_c_pc) {
    v_44 = false;
    sub_68 = sub_45;
  } else {
    v_44 = sub_45;
    sub_68 = false;
  };
  if (controller_ck_18_1) {
    sub_67 = v_44;
  } else {
    sub_67 = sub_68;
  };
  sub_66 = sub_67;
  sub_65 = sub_66;
  sub_64 = sub_65;
  if (controller_ck_24_1) {
    sub_52 = sub_64;
    v_43 = sub_53;
  } else {
    sub_52 = sub_53;
    v_43 = sub_64;
  };
  if (controller_c_light_1) {
    sub_69 = v_43;
  } else {
    sub_69 = sub_52;
  };
  if (controller_light_switch) {
    v_47 = sub_52;
  } else {
    v_47 = sub_69;
  };
  if (controller_c_light_2) {
    sub_51 = v_47;
  } else {
    sub_51 = sub_69;
  };
  if (controller_c_closet) {
    sub_75 = false;
  } else {
    sub_75 = sub_67;
  };
  sub_74 = sub_75;
  if (controller_c_blind_1) {
    sub_73 = sub_74;
  } else {
    sub_73 = false;
  };
  if (controller_c_air_1) {
    v_39 = sub_15;
    v_37 = sub_18;
  } else {
    v_39 = false;
    v_37 = false;
  };
  sub_82 = sub_18;
  if (controller_v_111) {
    v_38 = v_37;
  } else {
    v_38 = sub_82;
  };
  if (controller_c_air_1) {
    sub_83 = sub_18;
  } else {
    sub_83 = sub_16;
  };
  if (controller_v_111) {
    v_40 = v_39;
  } else {
    v_40 = sub_83;
  };
  if (controller_c_air_2) {
    sub_81 = v_38;
  } else {
    sub_81 = v_40;
  };
  if (controller_c_pc) {
    v_41 = false;
    sub_80 = sub_81;
  } else {
    v_41 = sub_81;
    sub_80 = false;
  };
  if (controller_ck_18_1) {
    sub_79 = v_41;
  } else {
    sub_79 = sub_80;
  };
  if (controller_c_closet) {
    sub_78 = false;
  } else {
    sub_78 = sub_79;
  };
  if (controller_blind_switch) {
    sub_77 = sub_78;
  } else {
    sub_77 = false;
  };
  if (controller_c_blind_1) {
    sub_76 = sub_77;
  } else {
    sub_76 = sub_74;
  };
  if (controller_ck_26_1) {
    sub_72 = sub_76;
  } else {
    sub_72 = sub_73;
  };
  sub_84 = sub_74;
  if (controller_ck_24_1) {
    sub_71 = sub_84;
    v_36 = sub_72;
  } else {
    sub_71 = sub_72;
    v_36 = sub_84;
  };
  if (controller_c_light_1) {
    sub_85 = v_36;
  } else {
    sub_85 = sub_71;
  };
  if (controller_light_switch) {
    v_42 = sub_71;
  } else {
    v_42 = sub_85;
  };
  if (controller_c_light_2) {
    sub_70 = v_42;
  } else {
    sub_70 = sub_85;
  };
  if (controller_cleaner) {
    v_48 = sub_70;
    sub_50 = sub_51;
  } else {
    v_48 = sub_51;
    sub_50 = sub_70;
  };
  if (controller_ck_16_1) {
    sub_49 = v_48;
  } else {
    sub_49 = sub_50;
  };
  if (controller_worker) {
    v_71 = sub_49;
    sub_4 = sub_5;
  } else {
    v_71 = sub_5;
    sub_4 = sub_49;
  };
  if (controller_ck_14_1) {
    sub_3 = v_71;
  } else {
    sub_3 = sub_4;
  };
  if (controller_ck_26_1) {
    sub_92 = sub_31;
  } else {
    sub_92 = sub_36;
  };
  if (controller_ck_24_1) {
    sub_91 = sub_92;
    v_32 = false;
  } else {
    sub_91 = false;
    v_32 = sub_92;
  };
  if (controller_c_light_1) {
    sub_93 = v_32;
  } else {
    sub_93 = sub_91;
  };
  if (controller_light_switch) {
    v_33 = sub_91;
  } else {
    v_33 = sub_93;
  };
  if (controller_c_light_2) {
    sub_90 = v_33;
  } else {
    sub_90 = sub_93;
  };
  if (controller_cleaner) {
    v_34 = sub_90;
    sub_89 = sub_7;
  } else {
    v_34 = sub_7;
    sub_89 = sub_90;
  };
  if (controller_ck_16_1) {
    sub_88 = v_34;
  } else {
    sub_88 = sub_89;
  };
  if (controller_ck_26_1) {
    sub_98 = sub_54;
  } else {
    sub_98 = sub_59;
  };
  if (controller_ck_24_1) {
    sub_97 = sub_98;
    v_29 = false;
  } else {
    sub_97 = false;
    v_29 = sub_98;
  };
  if (controller_c_light_1) {
    sub_99 = v_29;
  } else {
    sub_99 = sub_97;
  };
  if (controller_light_switch) {
    v_30 = sub_97;
  } else {
    v_30 = sub_99;
  };
  if (controller_c_light_2) {
    sub_96 = v_30;
  } else {
    sub_96 = sub_99;
  };
  if (controller_ck_26_1) {
    sub_102 = sub_73;
  } else {
    sub_102 = sub_76;
  };
  if (controller_ck_24_1) {
    sub_101 = sub_102;
    v_27 = false;
  } else {
    sub_101 = false;
    v_27 = sub_102;
  };
  if (controller_c_light_1) {
    sub_103 = v_27;
  } else {
    sub_103 = sub_101;
  };
  if (controller_light_switch) {
    v_28 = sub_101;
  } else {
    v_28 = sub_103;
  };
  if (controller_c_light_2) {
    sub_100 = v_28;
  } else {
    sub_100 = sub_103;
  };
  if (controller_cleaner) {
    v_31 = sub_100;
    sub_95 = sub_96;
  } else {
    v_31 = sub_96;
    sub_95 = sub_100;
  };
  if (controller_ck_16_1) {
    sub_94 = v_31;
  } else {
    sub_94 = sub_95;
  };
  if (controller_worker) {
    v_35 = sub_94;
    sub_87 = sub_88;
  } else {
    v_35 = sub_88;
    sub_87 = sub_94;
  };
  if (controller_ck_14_1) {
    sub_86 = v_35;
  } else {
    sub_86 = sub_87;
  };
  if (controller_change_shift) {
    v_72 = sub_86;
    sub_2 = sub_3;
  } else {
    v_72 = sub_3;
    sub_2 = sub_86;
  };
  if (controller_ck_1) {
    sub_1 = v_72;
  } else {
    sub_1 = sub_2;
  };
  if (controller_blind_switch) {
    v_22 = sub_20;
  } else {
    v_22 = sub_12;
  };
  if (controller_c_blind_1) {
    v_23 = v_22;
    sub_112 = sub_11;
  } else {
    v_23 = false;
    sub_112 = sub_12;
  };
  if (controller_ck_26_1) {
    sub_111 = v_23;
  } else {
    sub_111 = sub_112;
  };
  if (controller_ck_24_1) {
    sub_110 = false;
    v_21 = sub_111;
  } else {
    sub_110 = sub_111;
    v_21 = false;
  };
  if (controller_c_light_1) {
    sub_113 = v_21;
  } else {
    sub_113 = sub_110;
  };
  if (controller_light_switch) {
    v_24 = sub_110;
  } else {
    v_24 = sub_113;
  };
  if (controller_c_light_2) {
    sub_109 = v_24;
  } else {
    sub_109 = sub_113;
  };
  if (controller_blind_switch) {
    v_19 = sub_33;
  } else {
    v_19 = sub_38;
  };
  if (controller_c_blind_1) {
    sub_117 = v_19;
    sub_118 = sub_37;
  } else {
    sub_117 = false;
    sub_118 = sub_38;
  };
  if (controller_ck_26_1) {
    sub_116 = sub_118;
  } else {
    sub_116 = sub_117;
  };
  if (controller_c_pc) {
    v_17 = sub_39;
    sub_122 = sub_81;
  } else {
    v_17 = sub_81;
    sub_122 = sub_39;
  };
  if (controller_ck_18_1) {
    v_18 = v_17;
  } else {
    v_18 = sub_122;
  };
  if (controller_c_closet) {
    sub_121 = false;
  } else {
    sub_121 = v_18;
  };
  sub_120 = sub_121;
  sub_119 = sub_120;
  if (controller_ck_24_1) {
    sub_115 = sub_119;
    v_16 = sub_116;
  } else {
    sub_115 = sub_116;
    v_16 = sub_119;
  };
  if (controller_c_light_1) {
    sub_123 = v_16;
  } else {
    sub_123 = sub_115;
  };
  if (controller_light_switch) {
    v_20 = sub_115;
  } else {
    v_20 = sub_123;
  };
  if (controller_c_light_2) {
    sub_114 = v_20;
  } else {
    sub_114 = sub_123;
  };
  if (controller_cleaner) {
    v_25 = sub_114;
    sub_108 = sub_109;
  } else {
    v_25 = sub_109;
    sub_108 = sub_114;
  };
  if (controller_ck_16_1) {
    sub_107 = v_25;
  } else {
    sub_107 = sub_108;
  };
  if (controller_blind_switch) {
    v_13 = sub_56;
  } else {
    v_13 = sub_61;
  };
  if (controller_c_blind_1) {
    sub_129 = v_13;
    sub_130 = sub_60;
  } else {
    sub_129 = false;
    sub_130 = sub_61;
  };
  if (controller_ck_26_1) {
    sub_128 = sub_130;
  } else {
    sub_128 = sub_129;
  };
  sub_133 = sub_79;
  sub_132 = sub_133;
  sub_131 = sub_132;
  if (controller_ck_24_1) {
    sub_127 = sub_131;
    v_12 = sub_128;
  } else {
    sub_127 = sub_128;
    v_12 = sub_131;
  };
  if (controller_c_light_1) {
    sub_134 = v_12;
  } else {
    sub_134 = sub_127;
  };
  if (controller_light_switch) {
    v_14 = sub_127;
  } else {
    v_14 = sub_134;
  };
  if (controller_c_light_2) {
    sub_126 = v_14;
  } else {
    sub_126 = sub_134;
  };
  if (controller_blind_switch) {
    v_10 = sub_75;
  } else {
    v_10 = sub_78;
  };
  if (controller_c_blind_1) {
    sub_138 = v_10;
  } else {
    sub_138 = false;
  };
  sub_140 = sub_78;
  if (controller_c_blind_1) {
    sub_139 = sub_77;
  } else {
    sub_139 = sub_140;
  };
  if (controller_ck_26_1) {
    sub_137 = sub_139;
  } else {
    sub_137 = sub_138;
  };
  sub_141 = sub_140;
  if (controller_ck_24_1) {
    sub_136 = sub_141;
    v_9 = sub_137;
  } else {
    sub_136 = sub_137;
    v_9 = sub_141;
  };
  if (controller_c_light_1) {
    sub_142 = v_9;
  } else {
    sub_142 = sub_136;
  };
  if (controller_light_switch) {
    v_11 = sub_136;
  } else {
    v_11 = sub_142;
  };
  if (controller_c_light_2) {
    sub_135 = v_11;
  } else {
    sub_135 = sub_142;
  };
  if (controller_cleaner) {
    v_15 = sub_135;
    sub_125 = sub_126;
  } else {
    v_15 = sub_126;
    sub_125 = sub_135;
  };
  if (controller_ck_16_1) {
    sub_124 = v_15;
  } else {
    sub_124 = sub_125;
  };
  if (controller_worker) {
    v_26 = sub_124;
    sub_106 = sub_107;
  } else {
    v_26 = sub_107;
    sub_106 = sub_124;
  };
  if (controller_ck_14_1) {
    sub_105 = v_26;
  } else {
    sub_105 = sub_106;
  };
  if (controller_ck_26_1) {
    sub_149 = sub_117;
  } else {
    sub_149 = sub_118;
  };
  if (controller_ck_24_1) {
    sub_148 = sub_149;
    v_5 = false;
  } else {
    sub_148 = false;
    v_5 = sub_149;
  };
  if (controller_c_light_1) {
    sub_150 = v_5;
  } else {
    sub_150 = sub_148;
  };
  if (controller_light_switch) {
    v_6 = sub_148;
  } else {
    v_6 = sub_150;
  };
  if (controller_c_light_2) {
    sub_147 = v_6;
  } else {
    sub_147 = sub_150;
  };
  if (controller_cleaner) {
    v_7 = sub_147;
    sub_146 = sub_109;
  } else {
    v_7 = sub_109;
    sub_146 = sub_147;
  };
  if (controller_ck_16_1) {
    sub_145 = v_7;
  } else {
    sub_145 = sub_146;
  };
  if (controller_ck_26_1) {
    sub_155 = sub_129;
  } else {
    sub_155 = sub_130;
  };
  if (controller_ck_24_1) {
    sub_154 = sub_155;
    v_2 = false;
  } else {
    sub_154 = false;
    v_2 = sub_155;
  };
  if (controller_c_light_1) {
    sub_156 = v_2;
  } else {
    sub_156 = sub_154;
  };
  if (controller_light_switch) {
    v_3 = sub_154;
  } else {
    v_3 = sub_156;
  };
  if (controller_c_light_2) {
    sub_153 = v_3;
  } else {
    sub_153 = sub_156;
  };
  if (controller_ck_26_1) {
    sub_159 = sub_138;
  } else {
    sub_159 = sub_139;
  };
  if (controller_ck_24_1) {
    sub_158 = sub_159;
    v = false;
  } else {
    sub_158 = false;
    v = sub_159;
  };
  if (controller_c_light_1) {
    sub_160 = v;
  } else {
    sub_160 = sub_158;
  };
  if (controller_light_switch) {
    v_1 = sub_158;
  } else {
    v_1 = sub_160;
  };
  if (controller_c_light_2) {
    sub_157 = v_1;
  } else {
    sub_157 = sub_160;
  };
  if (controller_cleaner) {
    v_4 = sub_157;
    sub_152 = sub_153;
  } else {
    v_4 = sub_153;
    sub_152 = sub_157;
  };
  if (controller_ck_16_1) {
    sub_151 = v_4;
  } else {
    sub_151 = sub_152;
  };
  if (controller_worker) {
    v_8 = sub_151;
    sub_144 = sub_145;
  } else {
    v_8 = sub_145;
    sub_144 = sub_151;
  };
  if (controller_ck_14_1) {
    sub_143 = v_8;
  } else {
    sub_143 = sub_144;
  };
  if (controller_change_shift) {
    v_73 = sub_143;
    sub_104 = sub_105;
  } else {
    v_73 = sub_105;
    sub_104 = sub_143;
  };
  if (controller_ck_1) {
    v_74 = v_73;
  } else {
    v_74 = sub_104;
  };
  if (p_controller_c_blind_2) {
    sub_0 = v_74;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_blind_2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_blind_1_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_light_switch, int controller_blind_switch,
  int controller_ck_1, int controller_pnr_9, int controller_ck_10_1,
  int controller_pnr_8, int controller_ck_12_1, int controller_pnr_7,
  int controller_ck_14_1, int controller_pnr_6, int controller_ck_16_1,
  int controller_pnr_5, int controller_ck_18_1, int controller_pnr_4,
  int controller_ck_20_1, int controller_pnr_3, int controller_v_112,
  int controller_v_111, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_blind_1,
  int p_controller_c_light_2, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_light_2,
  int controller_c_light_1, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_blind_1_out* _out) {
  
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
  sub_16 = false;
  sub_15 = sub_16;
  if (controller_v_112) {
    sub_14 = false;
  } else {
    sub_14 = sub_15;
  };
  if (controller_c_air_1) {
    v_132 = false;
  } else {
    v_132 = sub_14;
  };
  if (controller_v_112) {
    sub_17 = sub_15;
  } else {
    sub_17 = false;
  };
  if (controller_c_air_1) {
    v_133 = sub_17;
  } else {
    v_133 = sub_14;
  };
  if (controller_v_111) {
    v_134 = v_133;
  } else {
    v_134 = false;
  };
  if (controller_c_air_2) {
    sub_13 = v_132;
  } else {
    sub_13 = v_134;
  };
  if (controller_c_pc) {
    v_135 = sub_13;
    sub_12 = false;
  } else {
    v_135 = false;
    sub_12 = sub_13;
  };
  if (controller_ck_18_1) {
    v_136 = v_135;
  } else {
    v_136 = sub_12;
  };
  if (controller_c_closet) {
    sub_11 = v_136;
  } else {
    sub_11 = false;
  };
  sub_10 = sub_11;
  sub_24 = true;
  sub_23 = sub_24;
  if (controller_v_112) {
    sub_22 = false;
  } else {
    sub_22 = sub_23;
  };
  if (controller_c_air_1) {
    v_127 = false;
  } else {
    v_127 = sub_22;
  };
  if (controller_v_112) {
    sub_25 = sub_23;
  } else {
    sub_25 = false;
  };
  if (controller_c_air_1) {
    v_128 = sub_25;
  } else {
    v_128 = sub_22;
  };
  if (controller_v_111) {
    v_129 = v_128;
  } else {
    v_129 = false;
  };
  if (controller_c_air_2) {
    sub_21 = v_127;
  } else {
    sub_21 = v_129;
  };
  if (controller_c_pc) {
    v_130 = sub_21;
    sub_20 = false;
  } else {
    v_130 = false;
    sub_20 = sub_21;
  };
  if (controller_ck_18_1) {
    v_131 = v_130;
  } else {
    v_131 = sub_20;
  };
  if (controller_c_closet) {
    sub_19 = v_131;
  } else {
    sub_19 = false;
  };
  sub_18 = sub_19;
  if (controller_ck_26_1) {
    sub_9 = sub_18;
  } else {
    sub_9 = sub_10;
  };
  if (controller_ck_24_1) {
    sub_8 = false;
    v_126 = sub_9;
  } else {
    sub_8 = sub_9;
    v_126 = false;
  };
  if (controller_c_light_1) {
    sub_26 = v_126;
  } else {
    sub_26 = sub_8;
  };
  if (controller_light_switch) {
    v_137 = sub_8;
  } else {
    v_137 = sub_26;
  };
  if (controller_c_light_2) {
    sub_7 = v_137;
  } else {
    sub_7 = sub_26;
  };
  sub_33 = sub_23;
  sub_32 = sub_33;
  if (controller_c_closet) {
    sub_31 = false;
  } else {
    sub_31 = sub_32;
  };
  sub_30 = sub_31;
  sub_37 = sub_15;
  sub_36 = sub_37;
  if (controller_c_closet) {
    sub_35 = false;
  } else {
    sub_35 = sub_36;
  };
  sub_34 = sub_35;
  if (controller_ck_26_1) {
    sub_29 = sub_34;
  } else {
    sub_29 = sub_30;
  };
  if (controller_c_air_1) {
    v_121 = sub_14;
    v_119 = sub_17;
  } else {
    v_121 = false;
    v_119 = false;
  };
  sub_42 = sub_17;
  if (controller_v_111) {
    v_120 = v_119;
  } else {
    v_120 = sub_42;
  };
  if (controller_c_air_1) {
    sub_43 = sub_17;
  } else {
    sub_43 = sub_15;
  };
  if (controller_v_111) {
    v_122 = v_121;
  } else {
    v_122 = sub_43;
  };
  if (controller_c_air_2) {
    sub_41 = v_120;
  } else {
    sub_41 = v_122;
  };
  if (controller_c_pc) {
    v_123 = sub_36;
    sub_40 = sub_41;
  } else {
    v_123 = sub_41;
    sub_40 = sub_36;
  };
  if (controller_ck_18_1) {
    v_124 = v_123;
  } else {
    v_124 = sub_40;
  };
  if (controller_c_closet) {
    sub_39 = false;
  } else {
    sub_39 = v_124;
  };
  sub_38 = sub_39;
  if (controller_ck_24_1) {
    sub_28 = sub_38;
    v_118 = sub_29;
  } else {
    sub_28 = sub_29;
    v_118 = sub_38;
  };
  if (controller_c_light_1) {
    sub_44 = v_118;
  } else {
    sub_44 = sub_28;
  };
  if (controller_light_switch) {
    v_125 = sub_28;
  } else {
    v_125 = sub_44;
  };
  if (controller_c_light_2) {
    sub_27 = v_125;
  } else {
    sub_27 = sub_44;
  };
  if (controller_cleaner) {
    v_138 = sub_27;
    sub_6 = sub_7;
  } else {
    v_138 = sub_7;
    sub_6 = sub_27;
  };
  if (controller_ck_16_1) {
    sub_5 = v_138;
  } else {
    sub_5 = sub_6;
  };
  if (controller_c_pc) {
    v_115 = false;
    sub_53 = sub_32;
  } else {
    v_115 = sub_32;
    sub_53 = false;
  };
  if (controller_ck_18_1) {
    sub_52 = v_115;
  } else {
    sub_52 = sub_53;
  };
  sub_51 = sub_52;
  sub_50 = sub_51;
  if (controller_c_pc) {
    v_114 = false;
    sub_57 = sub_36;
  } else {
    v_114 = sub_36;
    sub_57 = false;
  };
  if (controller_ck_18_1) {
    sub_56 = v_114;
  } else {
    sub_56 = sub_57;
  };
  sub_55 = sub_56;
  sub_54 = sub_55;
  if (controller_ck_26_1) {
    sub_49 = sub_54;
  } else {
    sub_49 = sub_50;
  };
  if (controller_c_pc) {
    v_113 = false;
    sub_61 = sub_41;
  } else {
    v_113 = sub_41;
    sub_61 = false;
  };
  if (controller_ck_18_1) {
    sub_60 = v_113;
  } else {
    sub_60 = sub_61;
  };
  sub_59 = sub_60;
  sub_58 = sub_59;
  if (controller_ck_24_1) {
    sub_48 = sub_58;
    v_112 = sub_49;
  } else {
    sub_48 = sub_49;
    v_112 = sub_58;
  };
  if (controller_c_light_1) {
    sub_62 = v_112;
  } else {
    sub_62 = sub_48;
  };
  if (controller_light_switch) {
    v_116 = sub_48;
  } else {
    v_116 = sub_62;
  };
  if (controller_c_light_2) {
    sub_47 = v_116;
  } else {
    sub_47 = sub_62;
  };
  if (controller_c_air_1) {
    v_108 = sub_22;
    v_106 = sub_25;
  } else {
    v_108 = false;
    v_106 = false;
  };
  sub_71 = sub_25;
  if (controller_v_111) {
    v_107 = v_106;
  } else {
    v_107 = sub_71;
  };
  if (controller_c_air_1) {
    sub_72 = sub_25;
  } else {
    sub_72 = sub_23;
  };
  if (controller_v_111) {
    v_109 = v_108;
  } else {
    v_109 = sub_72;
  };
  if (controller_c_air_2) {
    sub_70 = v_107;
  } else {
    sub_70 = v_109;
  };
  if (controller_c_pc) {
    v_110 = false;
    sub_69 = sub_70;
  } else {
    v_110 = sub_70;
    sub_69 = false;
  };
  if (controller_ck_18_1) {
    sub_68 = v_110;
  } else {
    sub_68 = sub_69;
  };
  if (controller_c_closet) {
    sub_67 = false;
  } else {
    sub_67 = sub_68;
  };
  sub_66 = sub_67;
  if (controller_c_closet) {
    sub_74 = false;
  } else {
    sub_74 = sub_60;
  };
  sub_73 = sub_74;
  if (controller_ck_26_1) {
    sub_65 = sub_73;
  } else {
    sub_65 = sub_66;
  };
  if (controller_ck_24_1) {
    sub_64 = sub_73;
    v_105 = sub_65;
  } else {
    sub_64 = sub_65;
    v_105 = sub_73;
  };
  if (controller_c_light_1) {
    sub_75 = v_105;
  } else {
    sub_75 = sub_64;
  };
  if (controller_light_switch) {
    v_111 = sub_64;
  } else {
    v_111 = sub_75;
  };
  if (controller_c_light_2) {
    sub_63 = v_111;
  } else {
    sub_63 = sub_75;
  };
  if (controller_cleaner) {
    v_117 = sub_63;
    sub_46 = sub_47;
  } else {
    v_117 = sub_47;
    sub_46 = sub_63;
  };
  if (controller_ck_16_1) {
    sub_45 = v_117;
  } else {
    sub_45 = sub_46;
  };
  if (controller_worker) {
    v_139 = sub_45;
    sub_4 = sub_5;
  } else {
    v_139 = sub_5;
    sub_4 = sub_45;
  };
  if (controller_ck_14_1) {
    sub_3 = v_139;
  } else {
    sub_3 = sub_4;
  };
  if (controller_ck_26_1) {
    sub_82 = sub_30;
  } else {
    sub_82 = sub_34;
  };
  if (controller_ck_24_1) {
    sub_81 = sub_82;
    v_101 = false;
  } else {
    sub_81 = false;
    v_101 = sub_82;
  };
  if (controller_c_light_1) {
    sub_83 = v_101;
  } else {
    sub_83 = sub_81;
  };
  if (controller_light_switch) {
    v_102 = sub_81;
  } else {
    v_102 = sub_83;
  };
  if (controller_c_light_2) {
    sub_80 = v_102;
  } else {
    sub_80 = sub_83;
  };
  if (controller_cleaner) {
    v_103 = sub_80;
    sub_79 = sub_7;
  } else {
    v_103 = sub_7;
    sub_79 = sub_80;
  };
  if (controller_ck_16_1) {
    sub_78 = v_103;
  } else {
    sub_78 = sub_79;
  };
  if (controller_ck_26_1) {
    sub_88 = sub_50;
  } else {
    sub_88 = sub_54;
  };
  if (controller_ck_24_1) {
    sub_87 = sub_88;
    v_98 = false;
  } else {
    sub_87 = false;
    v_98 = sub_88;
  };
  if (controller_c_light_1) {
    sub_89 = v_98;
  } else {
    sub_89 = sub_87;
  };
  if (controller_light_switch) {
    v_99 = sub_87;
  } else {
    v_99 = sub_89;
  };
  if (controller_c_light_2) {
    sub_86 = v_99;
  } else {
    sub_86 = sub_89;
  };
  if (controller_ck_26_1) {
    sub_92 = sub_66;
  } else {
    sub_92 = sub_73;
  };
  if (controller_ck_24_1) {
    sub_91 = sub_92;
    v_96 = false;
  } else {
    sub_91 = false;
    v_96 = sub_92;
  };
  if (controller_c_light_1) {
    sub_93 = v_96;
  } else {
    sub_93 = sub_91;
  };
  if (controller_light_switch) {
    v_97 = sub_91;
  } else {
    v_97 = sub_93;
  };
  if (controller_c_light_2) {
    sub_90 = v_97;
  } else {
    sub_90 = sub_93;
  };
  if (controller_cleaner) {
    v_100 = sub_90;
    sub_85 = sub_86;
  } else {
    v_100 = sub_86;
    sub_85 = sub_90;
  };
  if (controller_ck_16_1) {
    sub_84 = v_100;
  } else {
    sub_84 = sub_85;
  };
  if (controller_worker) {
    v_104 = sub_84;
    sub_77 = sub_78;
  } else {
    v_104 = sub_78;
    sub_77 = sub_84;
  };
  if (controller_ck_14_1) {
    sub_76 = v_104;
  } else {
    sub_76 = sub_77;
  };
  if (controller_change_shift) {
    v_140 = sub_76;
    sub_2 = sub_3;
  } else {
    v_140 = sub_3;
    sub_2 = sub_76;
  };
  if (controller_ck_1) {
    sub_1 = v_140;
  } else {
    sub_1 = sub_2;
  };
  if (controller_blind_switch) {
    sub_102 = sub_19;
  } else {
    sub_102 = sub_11;
  };
  if (controller_ck_26_1) {
    sub_101 = sub_18;
  } else {
    sub_101 = sub_102;
  };
  if (controller_ck_24_1) {
    sub_100 = false;
    v_92 = sub_101;
  } else {
    sub_100 = sub_101;
    v_92 = false;
  };
  if (controller_c_light_1) {
    sub_103 = v_92;
  } else {
    sub_103 = sub_100;
  };
  if (controller_light_switch) {
    v_93 = sub_100;
  } else {
    v_93 = sub_103;
  };
  if (controller_c_light_2) {
    sub_99 = v_93;
  } else {
    sub_99 = sub_103;
  };
  if (controller_blind_switch) {
    sub_107 = sub_31;
  } else {
    sub_107 = sub_35;
  };
  if (controller_ck_26_1) {
    sub_106 = sub_107;
  } else {
    sub_106 = sub_30;
  };
  if (controller_c_pc) {
    v_89 = sub_32;
    sub_110 = sub_70;
  } else {
    v_89 = sub_70;
    sub_110 = sub_32;
  };
  if (controller_ck_18_1) {
    v_90 = v_89;
  } else {
    v_90 = sub_110;
  };
  if (controller_c_closet) {
    sub_109 = false;
  } else {
    sub_109 = v_90;
  };
  sub_108 = sub_109;
  if (controller_ck_24_1) {
    sub_105 = sub_108;
    v_88 = sub_106;
  } else {
    sub_105 = sub_106;
    v_88 = sub_108;
  };
  if (controller_c_light_1) {
    sub_111 = v_88;
  } else {
    sub_111 = sub_105;
  };
  if (controller_light_switch) {
    v_91 = sub_105;
  } else {
    v_91 = sub_111;
  };
  if (controller_c_light_2) {
    sub_104 = v_91;
  } else {
    sub_104 = sub_111;
  };
  if (controller_cleaner) {
    v_94 = sub_104;
    sub_98 = sub_99;
  } else {
    v_94 = sub_99;
    sub_98 = sub_104;
  };
  if (controller_ck_16_1) {
    sub_97 = v_94;
  } else {
    sub_97 = sub_98;
  };
  if (controller_blind_switch) {
    sub_117 = sub_51;
  } else {
    sub_117 = sub_55;
  };
  if (controller_ck_26_1) {
    sub_116 = sub_117;
  } else {
    sub_116 = sub_50;
  };
  sub_119 = sub_68;
  sub_118 = sub_119;
  if (controller_ck_24_1) {
    sub_115 = sub_118;
    v_85 = sub_116;
  } else {
    sub_115 = sub_116;
    v_85 = sub_118;
  };
  if (controller_c_light_1) {
    sub_120 = v_85;
  } else {
    sub_120 = sub_115;
  };
  if (controller_light_switch) {
    v_86 = sub_115;
  } else {
    v_86 = sub_120;
  };
  if (controller_c_light_2) {
    sub_114 = v_86;
  } else {
    sub_114 = sub_120;
  };
  if (controller_blind_switch) {
    sub_124 = sub_67;
  } else {
    sub_124 = sub_74;
  };
  if (controller_ck_26_1) {
    sub_123 = sub_124;
  } else {
    sub_123 = sub_66;
  };
  if (controller_ck_24_1) {
    sub_122 = sub_66;
    v_83 = sub_123;
  } else {
    sub_122 = sub_123;
    v_83 = sub_66;
  };
  if (controller_c_light_1) {
    sub_125 = v_83;
  } else {
    sub_125 = sub_122;
  };
  if (controller_light_switch) {
    v_84 = sub_122;
  } else {
    v_84 = sub_125;
  };
  if (controller_c_light_2) {
    sub_121 = v_84;
  } else {
    sub_121 = sub_125;
  };
  if (controller_cleaner) {
    v_87 = sub_121;
    sub_113 = sub_114;
  } else {
    v_87 = sub_114;
    sub_113 = sub_121;
  };
  if (controller_ck_16_1) {
    sub_112 = v_87;
  } else {
    sub_112 = sub_113;
  };
  if (controller_worker) {
    v_95 = sub_112;
    sub_96 = sub_97;
  } else {
    v_95 = sub_97;
    sub_96 = sub_112;
  };
  if (controller_ck_14_1) {
    sub_95 = v_95;
  } else {
    sub_95 = sub_96;
  };
  if (controller_ck_26_1) {
    sub_132 = sub_30;
  } else {
    sub_132 = sub_107;
  };
  if (controller_ck_24_1) {
    sub_131 = sub_132;
    v_79 = false;
  } else {
    sub_131 = false;
    v_79 = sub_132;
  };
  if (controller_c_light_1) {
    sub_133 = v_79;
  } else {
    sub_133 = sub_131;
  };
  if (controller_light_switch) {
    v_80 = sub_131;
  } else {
    v_80 = sub_133;
  };
  if (controller_c_light_2) {
    sub_130 = v_80;
  } else {
    sub_130 = sub_133;
  };
  if (controller_cleaner) {
    v_81 = sub_130;
    sub_129 = sub_99;
  } else {
    v_81 = sub_99;
    sub_129 = sub_130;
  };
  if (controller_ck_16_1) {
    sub_128 = v_81;
  } else {
    sub_128 = sub_129;
  };
  if (controller_ck_26_1) {
    sub_138 = sub_50;
  } else {
    sub_138 = sub_117;
  };
  if (controller_ck_24_1) {
    sub_137 = sub_138;
    v_76 = false;
  } else {
    sub_137 = false;
    v_76 = sub_138;
  };
  if (controller_c_light_1) {
    sub_139 = v_76;
  } else {
    sub_139 = sub_137;
  };
  if (controller_light_switch) {
    v_77 = sub_137;
  } else {
    v_77 = sub_139;
  };
  if (controller_c_light_2) {
    sub_136 = v_77;
  } else {
    sub_136 = sub_139;
  };
  if (controller_ck_26_1) {
    sub_142 = sub_66;
  } else {
    sub_142 = sub_124;
  };
  if (controller_ck_24_1) {
    sub_141 = sub_142;
    v = false;
  } else {
    sub_141 = false;
    v = sub_142;
  };
  if (controller_c_light_1) {
    sub_143 = v;
  } else {
    sub_143 = sub_141;
  };
  if (controller_light_switch) {
    v_75 = sub_141;
  } else {
    v_75 = sub_143;
  };
  if (controller_c_light_2) {
    sub_140 = v_75;
  } else {
    sub_140 = sub_143;
  };
  if (controller_cleaner) {
    v_78 = sub_140;
    sub_135 = sub_136;
  } else {
    v_78 = sub_136;
    sub_135 = sub_140;
  };
  if (controller_ck_16_1) {
    sub_134 = v_78;
  } else {
    sub_134 = sub_135;
  };
  if (controller_worker) {
    v_82 = sub_134;
    sub_127 = sub_128;
  } else {
    v_82 = sub_128;
    sub_127 = sub_134;
  };
  if (controller_ck_14_1) {
    sub_126 = v_82;
  } else {
    sub_126 = sub_127;
  };
  if (controller_change_shift) {
    v_141 = sub_126;
    sub_94 = sub_95;
  } else {
    v_141 = sub_95;
    sub_94 = sub_126;
  };
  if (controller_ck_1) {
    v_142 = v_141;
  } else {
    v_142 = sub_94;
  };
  if (p_controller_c_blind_1) {
    sub_0 = v_142;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_blind_1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_light_2_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_light_switch, int controller_blind_switch,
  int controller_ck_1, int controller_pnr_9, int controller_ck_10_1,
  int controller_pnr_8, int controller_ck_12_1, int controller_pnr_7,
  int controller_ck_14_1, int controller_pnr_6, int controller_ck_16_1,
  int controller_pnr_5, int controller_ck_18_1, int controller_pnr_4,
  int controller_ck_20_1, int controller_pnr_3, int controller_v_112,
  int controller_v_111, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_blind_1,
  int p_controller_c_light_2, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_light_1, int controller_c_closet,
  int controller_c_air_2, int controller_c_air_1, int controller_c_window,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_2_out* _out) {
  
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
  sub_15 = true;
  sub_14 = sub_15;
  if (controller_v_112) {
    sub_13 = false;
  } else {
    sub_13 = sub_14;
  };
  if (controller_c_air_1) {
    v_222 = false;
  } else {
    v_222 = sub_13;
  };
  if (controller_v_112) {
    sub_16 = sub_14;
  } else {
    sub_16 = false;
  };
  if (controller_c_air_1) {
    v_223 = sub_16;
  } else {
    v_223 = sub_13;
  };
  if (controller_v_111) {
    v_224 = v_223;
  } else {
    v_224 = false;
  };
  if (controller_c_air_2) {
    sub_12 = v_222;
  } else {
    sub_12 = v_224;
  };
  if (controller_c_pc) {
    v_225 = sub_12;
    sub_11 = false;
  } else {
    v_225 = false;
    sub_11 = sub_12;
  };
  if (controller_ck_18_1) {
    v_226 = v_225;
  } else {
    v_226 = sub_11;
  };
  if (controller_c_closet) {
    sub_10 = v_226;
  } else {
    sub_10 = false;
  };
  sub_9 = sub_10;
  sub_23 = false;
  sub_22 = sub_23;
  if (controller_v_112) {
    sub_21 = false;
  } else {
    sub_21 = sub_22;
  };
  if (controller_c_air_1) {
    v_217 = false;
  } else {
    v_217 = sub_21;
  };
  if (controller_v_112) {
    sub_24 = sub_22;
  } else {
    sub_24 = false;
  };
  if (controller_c_air_1) {
    v_218 = sub_24;
  } else {
    v_218 = sub_21;
  };
  if (controller_v_111) {
    v_219 = v_218;
  } else {
    v_219 = false;
  };
  if (controller_c_air_2) {
    sub_20 = v_217;
  } else {
    sub_20 = v_219;
  };
  if (controller_c_pc) {
    v_220 = sub_20;
    sub_19 = false;
  } else {
    v_220 = false;
    sub_19 = sub_20;
  };
  if (controller_ck_18_1) {
    v_221 = v_220;
  } else {
    v_221 = sub_19;
  };
  if (controller_c_closet) {
    sub_18 = v_221;
  } else {
    sub_18 = false;
  };
  sub_17 = sub_18;
  if (controller_ck_24_1) {
    v_228 = sub_17;
    sub_8 = sub_17;
    sub_25 = false;
  } else {
    v_228 = false;
    sub_8 = sub_9;
    sub_25 = sub_17;
  };
  if (controller_c_light_1) {
    v_229 = v_228;
    v_227 = sub_8;
  } else {
    v_229 = sub_25;
    v_227 = sub_25;
  };
  if (controller_light_switch) {
    sub_7 = v_227;
  } else {
    sub_7 = v_229;
  };
  if (controller_v_112) {
    sub_32 = sub_22;
  } else {
    sub_32 = sub_14;
  };
  if (controller_c_air_1) {
    v_208 = sub_32;
  } else {
    v_208 = sub_14;
  };
  sub_31 = sub_32;
  if (controller_v_111) {
    v_209 = v_208;
  } else {
    v_209 = sub_31;
  };
  if (controller_c_air_1) {
    sub_33 = sub_32;
  } else {
    sub_33 = sub_22;
  };
  if (controller_v_112) {
    sub_35 = sub_14;
  } else {
    sub_35 = sub_22;
  };
  if (controller_c_air_1) {
    sub_34 = sub_35;
  } else {
    sub_34 = sub_14;
  };
  if (controller_v_111) {
    v_210 = sub_34;
  } else {
    v_210 = sub_33;
  };
  if (controller_c_air_2) {
    sub_30 = v_209;
  } else {
    sub_30 = v_210;
  };
  sub_37 = sub_22;
  sub_36 = sub_37;
  if (controller_c_pc) {
    v_211 = sub_36;
    sub_29 = sub_30;
  } else {
    v_211 = sub_30;
    sub_29 = sub_36;
  };
  if (controller_ck_18_1) {
    v_212 = v_211;
  } else {
    v_212 = sub_29;
  };
  if (controller_c_closet) {
    sub_28 = false;
  } else {
    sub_28 = v_212;
  };
  sub_27 = sub_28;
  if (controller_c_closet) {
    sub_39 = false;
  } else {
    sub_39 = sub_36;
  };
  sub_38 = sub_39;
  if (controller_ck_24_1) {
    v_213 = sub_38;
  } else {
    v_213 = sub_27;
  };
  if (controller_c_air_1) {
    v_204 = sub_21;
    v_202 = sub_24;
  } else {
    v_204 = false;
    v_202 = false;
  };
  sub_45 = sub_24;
  if (controller_v_111) {
    v_203 = v_202;
  } else {
    v_203 = sub_45;
  };
  if (controller_c_air_1) {
    sub_46 = sub_24;
  } else {
    sub_46 = sub_22;
  };
  if (controller_v_111) {
    v_205 = v_204;
  } else {
    v_205 = sub_46;
  };
  if (controller_c_air_2) {
    sub_44 = v_203;
  } else {
    sub_44 = v_205;
  };
  if (controller_c_pc) {
    v_206 = sub_36;
    sub_43 = sub_44;
  } else {
    v_206 = sub_44;
    sub_43 = sub_36;
  };
  if (controller_ck_18_1) {
    v_207 = v_206;
  } else {
    v_207 = sub_43;
  };
  if (controller_c_closet) {
    sub_42 = false;
  } else {
    sub_42 = v_207;
  };
  sub_41 = sub_42;
  if (controller_ck_24_1) {
    v_215 = sub_38;
    sub_40 = sub_41;
  } else {
    v_215 = sub_41;
    sub_40 = sub_38;
  };
  if (controller_c_light_1) {
    v_216 = v_215;
    v_214 = v_213;
  } else {
    v_216 = sub_40;
    v_214 = sub_40;
  };
  if (controller_light_switch) {
    sub_26 = v_214;
  } else {
    sub_26 = v_216;
  };
  if (controller_cleaner) {
    v_230 = sub_26;
    sub_6 = sub_7;
  } else {
    v_230 = sub_7;
    sub_6 = sub_26;
  };
  if (controller_ck_16_1) {
    sub_5 = v_230;
  } else {
    sub_5 = sub_6;
  };
  if (controller_c_pc) {
    v_196 = false;
    sub_53 = sub_30;
  } else {
    v_196 = sub_30;
    sub_53 = false;
  };
  if (controller_ck_18_1) {
    sub_52 = v_196;
  } else {
    sub_52 = sub_53;
  };
  sub_51 = sub_52;
  sub_50 = sub_51;
  if (controller_c_pc) {
    v_195 = false;
    sub_57 = sub_36;
  } else {
    v_195 = sub_36;
    sub_57 = false;
  };
  if (controller_ck_18_1) {
    sub_56 = v_195;
  } else {
    sub_56 = sub_57;
  };
  sub_55 = sub_56;
  sub_54 = sub_55;
  if (controller_ck_24_1) {
    v_197 = sub_54;
  } else {
    v_197 = sub_50;
  };
  if (controller_c_pc) {
    v_194 = false;
    sub_62 = sub_44;
  } else {
    v_194 = sub_44;
    sub_62 = false;
  };
  if (controller_ck_18_1) {
    sub_61 = v_194;
  } else {
    sub_61 = sub_62;
  };
  sub_60 = sub_61;
  sub_59 = sub_60;
  if (controller_ck_24_1) {
    v_199 = sub_54;
    sub_58 = sub_59;
  } else {
    v_199 = sub_59;
    sub_58 = sub_54;
  };
  if (controller_c_light_1) {
    v_200 = v_199;
    v_198 = v_197;
  } else {
    v_200 = sub_58;
    v_198 = sub_58;
  };
  if (controller_light_switch) {
    sub_49 = v_198;
  } else {
    sub_49 = v_200;
  };
  if (controller_c_closet) {
    sub_66 = false;
  } else {
    sub_66 = sub_61;
  };
  sub_65 = sub_66;
  sub_64 = sub_65;
  sub_63 = sub_64;
  if (controller_cleaner) {
    v_201 = sub_63;
    sub_48 = sub_49;
  } else {
    v_201 = sub_49;
    sub_48 = sub_63;
  };
  if (controller_ck_16_1) {
    sub_47 = v_201;
  } else {
    sub_47 = sub_48;
  };
  if (controller_worker) {
    v_231 = sub_47;
    sub_4 = sub_5;
  } else {
    v_231 = sub_5;
    sub_4 = sub_47;
  };
  if (controller_ck_14_1) {
    sub_3 = v_231;
  } else {
    sub_3 = sub_4;
  };
  if (controller_ck_24_1) {
    v_190 = false;
  } else {
    v_190 = sub_38;
  };
  sub_76 = sub_14;
  sub_75 = sub_76;
  if (controller_c_closet) {
    sub_74 = false;
  } else {
    sub_74 = sub_75;
  };
  sub_73 = sub_74;
  if (controller_ck_24_1) {
    sub_72 = sub_73;
    sub_77 = sub_38;
  } else {
    sub_72 = sub_38;
    sub_77 = false;
  };
  if (controller_c_light_1) {
    v_191 = v_190;
    v_189 = sub_72;
  } else {
    v_191 = sub_77;
    v_189 = sub_77;
  };
  if (controller_light_switch) {
    sub_71 = v_189;
  } else {
    sub_71 = v_191;
  };
  if (controller_cleaner) {
    v_192 = sub_71;
    sub_70 = sub_7;
  } else {
    v_192 = sub_7;
    sub_70 = sub_71;
  };
  if (controller_ck_16_1) {
    sub_69 = v_192;
  } else {
    sub_69 = sub_70;
  };
  if (controller_ck_24_1) {
    v_186 = false;
  } else {
    v_186 = sub_54;
  };
  if (controller_c_pc) {
    v_184 = false;
    sub_85 = sub_75;
  } else {
    v_184 = sub_75;
    sub_85 = false;
  };
  if (controller_ck_18_1) {
    sub_84 = v_184;
  } else {
    sub_84 = sub_85;
  };
  sub_83 = sub_84;
  sub_82 = sub_83;
  if (controller_ck_24_1) {
    sub_81 = sub_82;
    sub_86 = sub_54;
  } else {
    sub_81 = sub_54;
    sub_86 = false;
  };
  if (controller_c_light_1) {
    v_187 = v_186;
    v_185 = sub_81;
  } else {
    v_187 = sub_86;
    v_185 = sub_86;
  };
  if (controller_light_switch) {
    sub_80 = v_185;
  } else {
    sub_80 = v_187;
  };
  if (controller_ck_24_1) {
    v_182 = false;
  } else {
    v_182 = sub_65;
  };
  if (controller_c_air_1) {
    v_178 = sub_13;
    v_176 = sub_16;
  } else {
    v_178 = false;
    v_176 = false;
  };
  sub_94 = sub_16;
  if (controller_v_111) {
    v_177 = v_176;
  } else {
    v_177 = sub_94;
  };
  if (controller_c_air_1) {
    sub_95 = sub_16;
  } else {
    sub_95 = sub_14;
  };
  if (controller_v_111) {
    v_179 = v_178;
  } else {
    v_179 = sub_95;
  };
  if (controller_c_air_2) {
    sub_93 = v_177;
  } else {
    sub_93 = v_179;
  };
  if (controller_c_pc) {
    v_180 = false;
    sub_92 = sub_93;
  } else {
    v_180 = sub_93;
    sub_92 = false;
  };
  if (controller_ck_18_1) {
    sub_91 = v_180;
  } else {
    sub_91 = sub_92;
  };
  if (controller_c_closet) {
    sub_90 = false;
  } else {
    sub_90 = sub_91;
  };
  sub_89 = sub_90;
  if (controller_ck_24_1) {
    sub_88 = sub_89;
    sub_96 = sub_65;
  } else {
    sub_88 = sub_65;
    sub_96 = false;
  };
  if (controller_c_light_1) {
    v_183 = v_182;
    v_181 = sub_88;
  } else {
    v_183 = sub_96;
    v_181 = sub_96;
  };
  if (controller_light_switch) {
    sub_87 = v_181;
  } else {
    sub_87 = v_183;
  };
  if (controller_cleaner) {
    v_188 = sub_87;
    sub_79 = sub_80;
  } else {
    v_188 = sub_80;
    sub_79 = sub_87;
  };
  if (controller_ck_16_1) {
    sub_78 = v_188;
  } else {
    sub_78 = sub_79;
  };
  if (controller_worker) {
    v_193 = sub_78;
    sub_68 = sub_69;
  } else {
    v_193 = sub_69;
    sub_68 = sub_78;
  };
  if (controller_ck_14_1) {
    sub_67 = v_193;
  } else {
    sub_67 = sub_68;
  };
  if (controller_change_shift) {
    v_232 = sub_67;
    sub_2 = sub_3;
  } else {
    v_232 = sub_3;
    sub_2 = sub_67;
  };
  if (controller_ck_1) {
    sub_1 = v_232;
  } else {
    sub_1 = sub_2;
  };
  if (controller_ck_24_1) {
    v_172 = sub_9;
    sub_103 = false;
  } else {
    v_172 = false;
    sub_103 = sub_9;
  };
  if (controller_c_light_1) {
    v_173 = v_172;
    v_171 = sub_8;
  } else {
    v_173 = sub_103;
    v_171 = sub_103;
  };
  if (controller_light_switch) {
    sub_102 = v_171;
  } else {
    sub_102 = v_173;
  };
  if (controller_v_111) {
    v_164 = sub_33;
  } else {
    v_164 = sub_34;
  };
  if (controller_c_air_1) {
    v_162 = sub_35;
  } else {
    v_162 = sub_22;
  };
  sub_108 = sub_35;
  if (controller_v_111) {
    v_163 = v_162;
  } else {
    v_163 = sub_108;
  };
  if (controller_c_air_2) {
    sub_107 = v_163;
  } else {
    sub_107 = v_164;
  };
  if (controller_c_pc) {
    v_165 = sub_75;
    sub_106 = sub_107;
  } else {
    v_165 = sub_107;
    sub_106 = sub_75;
  };
  if (controller_ck_18_1) {
    v_166 = v_165;
  } else {
    v_166 = sub_106;
  };
  if (controller_c_closet) {
    sub_105 = false;
  } else {
    sub_105 = v_166;
  };
  if (controller_ck_24_1) {
    v_167 = sub_105;
  } else {
    v_167 = sub_73;
  };
  if (controller_c_pc) {
    v_160 = sub_75;
    sub_112 = sub_93;
  } else {
    v_160 = sub_93;
    sub_112 = sub_75;
  };
  if (controller_ck_18_1) {
    v_161 = v_160;
  } else {
    v_161 = sub_112;
  };
  if (controller_c_closet) {
    sub_111 = false;
  } else {
    sub_111 = v_161;
  };
  sub_110 = sub_111;
  if (controller_ck_24_1) {
    v_169 = sub_73;
    sub_109 = sub_110;
  } else {
    v_169 = sub_110;
    sub_109 = sub_73;
  };
  if (controller_c_light_1) {
    v_170 = v_169;
    v_168 = v_167;
  } else {
    v_170 = sub_109;
    v_168 = sub_109;
  };
  if (controller_light_switch) {
    sub_104 = v_168;
  } else {
    sub_104 = v_170;
  };
  if (controller_cleaner) {
    v_174 = sub_104;
    sub_101 = sub_102;
  } else {
    v_174 = sub_102;
    sub_101 = sub_104;
  };
  if (controller_ck_16_1) {
    sub_100 = v_174;
  } else {
    sub_100 = sub_101;
  };
  if (controller_c_pc) {
    v_154 = false;
    sub_118 = sub_107;
  } else {
    v_154 = sub_107;
    sub_118 = false;
  };
  if (controller_ck_18_1) {
    sub_117 = v_154;
  } else {
    sub_117 = sub_118;
  };
  sub_116 = sub_117;
  if (controller_ck_24_1) {
    v_155 = sub_116;
  } else {
    v_155 = sub_82;
  };
  sub_121 = sub_91;
  sub_120 = sub_121;
  if (controller_ck_24_1) {
    v_157 = sub_82;
    sub_119 = sub_120;
  } else {
    v_157 = sub_120;
    sub_119 = sub_82;
  };
  if (controller_c_light_1) {
    v_158 = v_157;
    v_156 = v_155;
  } else {
    v_158 = sub_119;
    v_156 = sub_119;
  };
  if (controller_light_switch) {
    sub_115 = v_156;
  } else {
    sub_115 = v_158;
  };
  sub_123 = sub_89;
  sub_122 = sub_123;
  if (controller_cleaner) {
    v_159 = sub_122;
    sub_114 = sub_115;
  } else {
    v_159 = sub_115;
    sub_114 = sub_122;
  };
  if (controller_ck_16_1) {
    sub_113 = v_159;
  } else {
    sub_113 = sub_114;
  };
  if (controller_worker) {
    v_175 = sub_113;
    sub_99 = sub_100;
  } else {
    v_175 = sub_100;
    sub_99 = sub_113;
  };
  if (controller_ck_14_1) {
    sub_98 = v_175;
  } else {
    sub_98 = sub_99;
  };
  if (controller_ck_24_1) {
    v_150 = false;
    sub_129 = sub_73;
  } else {
    v_150 = sub_73;
    sub_129 = false;
  };
  if (controller_c_light_1) {
    v_151 = v_150;
    v_149 = sub_72;
  } else {
    v_151 = sub_129;
    v_149 = sub_129;
  };
  if (controller_light_switch) {
    sub_128 = v_149;
  } else {
    sub_128 = v_151;
  };
  if (controller_cleaner) {
    v_152 = sub_128;
    sub_127 = sub_102;
  } else {
    v_152 = sub_102;
    sub_127 = sub_128;
  };
  if (controller_ck_16_1) {
    sub_126 = v_152;
  } else {
    sub_126 = sub_127;
  };
  if (controller_ck_24_1) {
    v_146 = false;
    sub_133 = sub_82;
  } else {
    v_146 = sub_82;
    sub_133 = false;
  };
  if (controller_c_light_1) {
    v_147 = v_146;
    v_145 = sub_81;
  } else {
    v_147 = sub_133;
    v_145 = sub_133;
  };
  if (controller_light_switch) {
    sub_132 = v_145;
  } else {
    sub_132 = v_147;
  };
  if (controller_ck_24_1) {
    v_143 = false;
    sub_135 = sub_89;
  } else {
    v_143 = sub_89;
    sub_135 = false;
  };
  if (controller_c_light_1) {
    v_144 = v_143;
    v = sub_88;
  } else {
    v_144 = sub_135;
    v = sub_135;
  };
  if (controller_light_switch) {
    sub_134 = v;
  } else {
    sub_134 = v_144;
  };
  if (controller_cleaner) {
    v_148 = sub_134;
    sub_131 = sub_132;
  } else {
    v_148 = sub_132;
    sub_131 = sub_134;
  };
  if (controller_ck_16_1) {
    sub_130 = v_148;
  } else {
    sub_130 = sub_131;
  };
  if (controller_worker) {
    v_153 = sub_130;
    sub_125 = sub_126;
  } else {
    v_153 = sub_126;
    sub_125 = sub_130;
  };
  if (controller_ck_14_1) {
    sub_124 = v_153;
  } else {
    sub_124 = sub_125;
  };
  if (controller_change_shift) {
    v_233 = sub_124;
    sub_97 = sub_98;
  } else {
    v_233 = sub_98;
    sub_97 = sub_124;
  };
  if (controller_ck_1) {
    v_234 = v_233;
  } else {
    v_234 = sub_97;
  };
  if (p_controller_c_light_2) {
    sub_0 = v_234;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_light_2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_light_1_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_light_switch, int controller_blind_switch,
  int controller_ck_1, int controller_pnr_9, int controller_ck_10_1,
  int controller_pnr_8, int controller_ck_12_1, int controller_pnr_7,
  int controller_ck_14_1, int controller_pnr_6, int controller_ck_16_1,
  int controller_pnr_5, int controller_ck_18_1, int controller_pnr_4,
  int controller_ck_20_1, int controller_pnr_3, int controller_v_112,
  int controller_v_111, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_blind_1,
  int p_controller_c_light_2, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_1_out* _out) {
  
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
  sub_14 = false;
  sub_13 = sub_14;
  sub_16 = true;
  sub_15 = sub_16;
  if (p_controller_c_light_1) {
    sub_12 = sub_15;
  } else {
    sub_12 = sub_13;
  };
  if (controller_v_112) {
    sub_11 = false;
  } else {
    sub_11 = sub_12;
  };
  if (controller_c_air_1) {
    v_295 = false;
  } else {
    v_295 = sub_11;
  };
  if (controller_v_112) {
    sub_17 = sub_12;
  } else {
    sub_17 = false;
  };
  if (controller_c_air_1) {
    v_296 = sub_17;
  } else {
    v_296 = sub_11;
  };
  if (controller_v_111) {
    v_297 = v_296;
  } else {
    v_297 = false;
  };
  if (controller_c_air_2) {
    sub_10 = v_295;
  } else {
    sub_10 = v_297;
  };
  if (controller_c_pc) {
    v_298 = sub_10;
    sub_9 = false;
  } else {
    v_298 = false;
    sub_9 = sub_10;
  };
  if (controller_ck_18_1) {
    v_299 = v_298;
  } else {
    v_299 = sub_9;
  };
  if (controller_c_closet) {
    sub_8 = v_299;
  } else {
    sub_8 = false;
  };
  sub_7 = sub_8;
  if (controller_v_112) {
    sub_22 = false;
  } else {
    sub_22 = sub_15;
  };
  if (controller_c_air_1) {
    v_290 = false;
  } else {
    v_290 = sub_22;
  };
  if (controller_v_112) {
    sub_23 = sub_15;
  } else {
    sub_23 = false;
  };
  if (controller_c_air_1) {
    v_291 = sub_23;
  } else {
    v_291 = sub_22;
  };
  if (controller_v_111) {
    v_292 = v_291;
  } else {
    v_292 = false;
  };
  if (controller_c_air_2) {
    sub_21 = v_290;
  } else {
    sub_21 = v_292;
  };
  if (controller_c_pc) {
    v_293 = sub_21;
    sub_20 = false;
  } else {
    v_293 = false;
    sub_20 = sub_21;
  };
  if (controller_ck_18_1) {
    v_294 = v_293;
  } else {
    v_294 = sub_20;
  };
  if (controller_c_closet) {
    sub_19 = v_294;
  } else {
    sub_19 = false;
  };
  sub_18 = sub_19;
  if (controller_ck_24_1) {
    v_300 = sub_18;
  } else {
    v_300 = sub_7;
  };
  if (controller_v_112) {
    sub_28 = false;
  } else {
    sub_28 = sub_13;
  };
  if (controller_c_air_1) {
    v_285 = false;
  } else {
    v_285 = sub_28;
  };
  if (controller_v_112) {
    sub_29 = sub_13;
  } else {
    sub_29 = false;
  };
  if (controller_c_air_1) {
    v_286 = sub_29;
  } else {
    v_286 = sub_28;
  };
  if (controller_v_111) {
    v_287 = v_286;
  } else {
    v_287 = false;
  };
  if (controller_c_air_2) {
    sub_27 = v_285;
  } else {
    sub_27 = v_287;
  };
  if (controller_c_pc) {
    v_288 = sub_27;
    sub_26 = false;
  } else {
    v_288 = false;
    sub_26 = sub_27;
  };
  if (controller_ck_18_1) {
    v_289 = v_288;
  } else {
    v_289 = sub_26;
  };
  if (controller_c_closet) {
    sub_25 = v_289;
  } else {
    sub_25 = false;
  };
  sub_24 = sub_25;
  if (controller_ck_24_1) {
    v_301 = sub_18;
  } else {
    v_301 = sub_24;
  };
  if (controller_light_switch) {
    sub_6 = v_300;
  } else {
    sub_6 = v_301;
  };
  sub_34 = sub_12;
  sub_33 = sub_34;
  if (controller_c_closet) {
    sub_32 = false;
  } else {
    sub_32 = sub_33;
  };
  sub_31 = sub_32;
  if (controller_v_112) {
    v_278 = sub_15;
  } else {
    v_278 = sub_12;
  };
  if (controller_c_air_1) {
    v_279 = v_278;
  } else {
    v_279 = sub_15;
  };
  if (controller_v_112) {
    sub_40 = sub_12;
  } else {
    sub_40 = sub_15;
  };
  if (controller_c_air_1) {
    v_276 = sub_40;
  } else {
    v_276 = sub_15;
  };
  sub_39 = sub_40;
  if (controller_v_111) {
    v_277 = v_276;
  } else {
    v_277 = sub_39;
  };
  if (controller_c_air_1) {
    sub_41 = sub_40;
  } else {
    sub_41 = sub_12;
  };
  if (controller_v_111) {
    v_280 = v_279;
  } else {
    v_280 = sub_41;
  };
  if (controller_c_air_2) {
    sub_38 = v_277;
  } else {
    sub_38 = v_280;
  };
  if (controller_c_pc) {
    v_281 = sub_33;
    sub_37 = sub_38;
  } else {
    v_281 = sub_38;
    sub_37 = sub_33;
  };
  if (controller_ck_18_1) {
    v_282 = v_281;
  } else {
    v_282 = sub_37;
  };
  if (controller_c_closet) {
    sub_36 = false;
  } else {
    sub_36 = v_282;
  };
  sub_35 = sub_36;
  if (controller_ck_24_1) {
    v_283 = sub_35;
  } else {
    v_283 = sub_31;
  };
  if (controller_v_112) {
    v_271 = sub_13;
  } else {
    v_271 = sub_12;
  };
  if (controller_c_air_1) {
    v_272 = v_271;
  } else {
    v_272 = sub_13;
  };
  if (controller_v_112) {
    sub_47 = sub_12;
  } else {
    sub_47 = sub_13;
  };
  if (controller_c_air_1) {
    v_269 = sub_47;
  } else {
    v_269 = sub_13;
  };
  sub_46 = sub_47;
  if (controller_v_111) {
    v_270 = v_269;
  } else {
    v_270 = sub_46;
  };
  if (controller_c_air_1) {
    sub_48 = sub_47;
  } else {
    sub_48 = sub_12;
  };
  if (controller_v_111) {
    v_273 = v_272;
  } else {
    v_273 = sub_48;
  };
  if (controller_c_air_2) {
    sub_45 = v_270;
  } else {
    sub_45 = v_273;
  };
  if (controller_c_pc) {
    v_274 = sub_33;
    sub_44 = sub_45;
  } else {
    v_274 = sub_45;
    sub_44 = sub_33;
  };
  if (controller_ck_18_1) {
    v_275 = v_274;
  } else {
    v_275 = sub_44;
  };
  if (controller_c_closet) {
    sub_43 = false;
  } else {
    sub_43 = v_275;
  };
  sub_42 = sub_43;
  if (controller_ck_24_1) {
    v_284 = sub_35;
  } else {
    v_284 = sub_42;
  };
  if (controller_light_switch) {
    sub_30 = v_283;
  } else {
    sub_30 = v_284;
  };
  if (controller_cleaner) {
    v_302 = sub_30;
    sub_5 = sub_6;
  } else {
    v_302 = sub_6;
    sub_5 = sub_30;
  };
  if (controller_ck_16_1) {
    sub_4 = v_302;
  } else {
    sub_4 = sub_5;
  };
  if (controller_c_pc) {
    v_265 = false;
    sub_55 = sub_33;
  } else {
    v_265 = sub_33;
    sub_55 = false;
  };
  if (controller_ck_18_1) {
    sub_54 = v_265;
  } else {
    sub_54 = sub_55;
  };
  sub_53 = sub_54;
  sub_52 = sub_53;
  if (controller_c_pc) {
    v_264 = false;
    sub_59 = sub_38;
  } else {
    v_264 = sub_38;
    sub_59 = false;
  };
  if (controller_ck_18_1) {
    sub_58 = v_264;
  } else {
    sub_58 = sub_59;
  };
  sub_57 = sub_58;
  sub_56 = sub_57;
  if (controller_ck_24_1) {
    v_266 = sub_56;
  } else {
    v_266 = sub_52;
  };
  if (controller_c_pc) {
    v_263 = false;
    sub_63 = sub_45;
  } else {
    v_263 = sub_45;
    sub_63 = false;
  };
  if (controller_ck_18_1) {
    sub_62 = v_263;
  } else {
    sub_62 = sub_63;
  };
  sub_61 = sub_62;
  sub_60 = sub_61;
  if (controller_ck_24_1) {
    v_267 = sub_56;
  } else {
    v_267 = sub_60;
  };
  if (controller_light_switch) {
    sub_51 = v_266;
  } else {
    sub_51 = v_267;
  };
  if (controller_c_air_1) {
    v_259 = sub_11;
    v_257 = sub_17;
  } else {
    v_259 = false;
    v_257 = false;
  };
  sub_69 = sub_17;
  if (controller_v_111) {
    v_258 = v_257;
  } else {
    v_258 = sub_69;
  };
  if (controller_c_air_1) {
    sub_70 = sub_17;
  } else {
    sub_70 = sub_12;
  };
  if (controller_v_111) {
    v_260 = v_259;
  } else {
    v_260 = sub_70;
  };
  if (controller_c_air_2) {
    sub_68 = v_258;
  } else {
    sub_68 = v_260;
  };
  if (controller_c_pc) {
    v_261 = false;
    sub_67 = sub_68;
  } else {
    v_261 = sub_68;
    sub_67 = false;
  };
  if (controller_ck_18_1) {
    v_262 = v_261;
  } else {
    v_262 = sub_67;
  };
  if (controller_c_closet) {
    sub_66 = false;
  } else {
    sub_66 = v_262;
  };
  sub_65 = sub_66;
  sub_64 = sub_65;
  if (controller_cleaner) {
    v_268 = sub_64;
    sub_50 = sub_51;
  } else {
    v_268 = sub_51;
    sub_50 = sub_64;
  };
  if (controller_ck_16_1) {
    sub_49 = v_268;
  } else {
    sub_49 = sub_50;
  };
  if (controller_worker) {
    v_303 = sub_49;
    sub_3 = sub_4;
  } else {
    v_303 = sub_4;
    sub_3 = sub_49;
  };
  if (controller_ck_14_1) {
    sub_2 = v_303;
  } else {
    sub_2 = sub_3;
  };
  sub_79 = sub_15;
  sub_78 = sub_79;
  if (controller_c_closet) {
    sub_77 = false;
  } else {
    sub_77 = sub_78;
  };
  sub_76 = sub_77;
  if (controller_ck_24_1) {
    v_253 = sub_31;
  } else {
    v_253 = sub_76;
  };
  sub_82 = sub_13;
  sub_81 = sub_82;
  if (controller_c_closet) {
    sub_80 = false;
  } else {
    sub_80 = sub_81;
  };
  if (controller_ck_24_1) {
    v_254 = sub_80;
  } else {
    v_254 = sub_76;
  };
  if (controller_light_switch) {
    sub_75 = v_253;
  } else {
    sub_75 = v_254;
  };
  if (controller_cleaner) {
    v_255 = sub_75;
    sub_74 = sub_6;
  } else {
    v_255 = sub_6;
    sub_74 = sub_75;
  };
  if (controller_ck_16_1) {
    sub_73 = v_255;
  } else {
    sub_73 = sub_74;
  };
  if (controller_c_pc) {
    v_249 = false;
    sub_89 = sub_78;
  } else {
    v_249 = sub_78;
    sub_89 = false;
  };
  if (controller_ck_18_1) {
    sub_88 = v_249;
  } else {
    sub_88 = sub_89;
  };
  sub_87 = sub_88;
  sub_86 = sub_87;
  if (controller_ck_24_1) {
    v_250 = sub_52;
  } else {
    v_250 = sub_86;
  };
  if (controller_c_pc) {
    v_248 = false;
    sub_92 = sub_81;
  } else {
    v_248 = sub_81;
    sub_92 = false;
  };
  if (controller_ck_18_1) {
    sub_91 = v_248;
  } else {
    sub_91 = sub_92;
  };
  sub_90 = sub_91;
  if (controller_ck_24_1) {
    v_251 = sub_90;
  } else {
    v_251 = sub_86;
  };
  if (controller_light_switch) {
    sub_85 = v_250;
  } else {
    sub_85 = v_251;
  };
  if (controller_c_air_1) {
    v_242 = sub_22;
    v_240 = sub_23;
  } else {
    v_242 = false;
    v_240 = false;
  };
  sub_98 = sub_23;
  if (controller_v_111) {
    v_241 = v_240;
  } else {
    v_241 = sub_98;
  };
  if (controller_c_air_1) {
    sub_99 = sub_23;
  } else {
    sub_99 = sub_15;
  };
  if (controller_v_111) {
    v_243 = v_242;
  } else {
    v_243 = sub_99;
  };
  if (controller_c_air_2) {
    sub_97 = v_241;
  } else {
    sub_97 = v_243;
  };
  if (controller_c_pc) {
    v_244 = false;
    sub_96 = sub_97;
  } else {
    v_244 = sub_97;
    sub_96 = false;
  };
  if (controller_ck_18_1) {
    v_245 = v_244;
  } else {
    v_245 = sub_96;
  };
  if (controller_c_closet) {
    sub_95 = false;
  } else {
    sub_95 = v_245;
  };
  sub_94 = sub_95;
  if (controller_ck_24_1) {
    v_246 = sub_65;
  } else {
    v_246 = sub_94;
  };
  if (controller_c_air_1) {
    v_236 = sub_28;
    v = sub_29;
  } else {
    v_236 = false;
    v = false;
  };
  sub_103 = sub_29;
  if (controller_v_111) {
    v_235 = v;
  } else {
    v_235 = sub_103;
  };
  if (controller_c_air_1) {
    sub_104 = sub_29;
  } else {
    sub_104 = sub_13;
  };
  if (controller_v_111) {
    v_237 = v_236;
  } else {
    v_237 = sub_104;
  };
  if (controller_c_air_2) {
    sub_102 = v_235;
  } else {
    sub_102 = v_237;
  };
  if (controller_c_pc) {
    v_238 = false;
    sub_101 = sub_102;
  } else {
    v_238 = sub_102;
    sub_101 = false;
  };
  if (controller_ck_18_1) {
    v_239 = v_238;
  } else {
    v_239 = sub_101;
  };
  if (controller_c_closet) {
    sub_100 = false;
  } else {
    sub_100 = v_239;
  };
  if (controller_ck_24_1) {
    v_247 = sub_100;
  } else {
    v_247 = sub_94;
  };
  if (controller_light_switch) {
    sub_93 = v_246;
  } else {
    sub_93 = v_247;
  };
  if (controller_cleaner) {
    v_252 = sub_93;
    sub_84 = sub_85;
  } else {
    v_252 = sub_85;
    sub_84 = sub_93;
  };
  if (controller_ck_16_1) {
    sub_83 = v_252;
  } else {
    sub_83 = sub_84;
  };
  if (controller_worker) {
    v_256 = sub_83;
    sub_72 = sub_73;
  } else {
    v_256 = sub_73;
    sub_72 = sub_83;
  };
  if (controller_ck_14_1) {
    sub_71 = v_256;
  } else {
    sub_71 = sub_72;
  };
  if (controller_change_shift) {
    v_304 = sub_71;
    sub_1 = sub_2;
  } else {
    v_304 = sub_2;
    sub_1 = sub_71;
  };
  if (controller_ck_1) {
    sub_0 = v_304;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_light_1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_closet_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_light_switch, int controller_blind_switch,
  int controller_ck_1, int controller_pnr_9, int controller_ck_10_1,
  int controller_pnr_8, int controller_ck_12_1, int controller_pnr_7,
  int controller_ck_14_1, int controller_pnr_6, int controller_ck_16_1,
  int controller_pnr_5, int controller_ck_18_1, int controller_pnr_4,
  int controller_ck_20_1, int controller_pnr_3, int controller_v_112,
  int controller_v_111, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_blind_1,
  int p_controller_c_light_2, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_closet_out* _out) {
  
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
  sub_12 = true;
  sub_11 = sub_12;
  if (controller_v_112) {
    v_313 = sub_11;
    sub_10 = false;
  } else {
    v_313 = false;
    sub_10 = sub_11;
  };
  if (controller_c_air_1) {
    v_314 = v_313;
  } else {
    v_314 = sub_10;
  };
  if (controller_v_111) {
    v_315 = v_314;
  } else {
    v_315 = false;
  };
  if (controller_c_air_1) {
    v_312 = false;
  } else {
    v_312 = sub_10;
  };
  if (controller_c_air_2) {
    sub_9 = v_312;
  } else {
    sub_9 = v_315;
  };
  if (controller_c_pc) {
    v_316 = sub_9;
    sub_8 = false;
  } else {
    v_316 = false;
    sub_8 = sub_9;
  };
  if (controller_ck_18_1) {
    sub_7 = v_316;
  } else {
    sub_7 = sub_8;
  };
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_19 = false;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  if (controller_cleaner) {
    v_317 = sub_13;
    sub_4 = sub_5;
  } else {
    v_317 = sub_5;
    sub_4 = sub_13;
  };
  if (controller_ck_16_1) {
    sub_3 = v_317;
  } else {
    sub_3 = sub_4;
  };
  if (p_controller_c_closet) {
    sub_28 = sub_11;
  } else {
    sub_28 = sub_18;
  };
  sub_27 = sub_28;
  sub_26 = sub_27;
  if (controller_c_pc) {
    v_310 = false;
    sub_25 = sub_26;
  } else {
    v_310 = sub_26;
    sub_25 = false;
  };
  if (controller_ck_18_1) {
    sub_24 = v_310;
  } else {
    sub_24 = sub_25;
  };
  sub_23 = sub_24;
  sub_22 = sub_23;
  if (controller_v_112) {
    v_306 = false;
  } else {
    v_306 = sub_18;
  };
  if (controller_c_air_1) {
    v_307 = v_306;
  } else {
    v_307 = false;
  };
  if (controller_v_112) {
    sub_35 = sub_18;
  } else {
    sub_35 = false;
  };
  if (controller_c_air_1) {
    v = sub_35;
  } else {
    v = false;
  };
  sub_34 = sub_35;
  if (controller_v_111) {
    v_305 = v;
  } else {
    v_305 = sub_34;
  };
  if (controller_c_air_1) {
    sub_36 = sub_35;
  } else {
    sub_36 = sub_18;
  };
  if (controller_v_111) {
    v_308 = v_307;
  } else {
    v_308 = sub_36;
  };
  if (controller_c_air_2) {
    sub_33 = v_305;
  } else {
    sub_33 = v_308;
  };
  if (controller_c_pc) {
    v_309 = false;
    sub_32 = sub_33;
  } else {
    v_309 = sub_33;
    sub_32 = false;
  };
  if (controller_ck_18_1) {
    sub_31 = v_309;
  } else {
    sub_31 = sub_32;
  };
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (controller_cleaner) {
    v_311 = sub_29;
    sub_21 = sub_22;
  } else {
    v_311 = sub_22;
    sub_21 = sub_29;
  };
  if (controller_ck_16_1) {
    sub_20 = v_311;
  } else {
    sub_20 = sub_21;
  };
  if (controller_worker) {
    v_318 = sub_20;
    sub_2 = sub_3;
  } else {
    v_318 = sub_3;
    sub_2 = sub_20;
  };
  if (controller_ck_14_1) {
    sub_1 = v_318;
  } else {
    sub_1 = sub_2;
  };
  sub_0 = sub_1;
  _out->controller_c_closet = sub_0;;
}

void Controller_controller__controller_controller_controller_c_air_2_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_light_switch, int controller_blind_switch,
  int controller_ck_1, int controller_pnr_9, int controller_ck_10_1,
  int controller_pnr_8, int controller_ck_12_1, int controller_pnr_7,
  int controller_ck_14_1, int controller_pnr_6, int controller_ck_16_1,
  int controller_pnr_5, int controller_ck_18_1, int controller_pnr_4,
  int controller_ck_20_1, int controller_pnr_3, int controller_v_112,
  int controller_v_111, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_blind_1,
  int p_controller_c_light_2, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_air_1, int controller_c_window,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_2_out* _out) {
  
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
  sub_14 = true;
  sub_13 = sub_14;
  if (controller_v_112) {
    sub_12 = false;
  } else {
    sub_12 = sub_13;
  };
  if (controller_c_air_1) {
    sub_11 = false;
  } else {
    sub_11 = sub_12;
  };
  sub_17 = false;
  sub_16 = sub_17;
  if (controller_v_112) {
    v_328 = false;
    sub_15 = sub_16;
  } else {
    v_328 = sub_16;
    sub_15 = false;
  };
  if (controller_c_air_1) {
    v_329 = sub_15;
  } else {
    v_329 = v_328;
  };
  if (controller_v_111) {
    sub_10 = v_329;
  } else {
    sub_10 = sub_11;
  };
  if (controller_c_pc) {
    v_330 = sub_10;
    sub_9 = false;
  } else {
    v_330 = false;
    sub_9 = sub_10;
  };
  if (controller_ck_18_1) {
    sub_8 = v_330;
  } else {
    sub_8 = sub_9;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_21 = sub_16;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  if (controller_cleaner) {
    v_331 = sub_18;
    sub_5 = sub_6;
  } else {
    v_331 = sub_6;
    sub_5 = sub_18;
  };
  if (controller_ck_16_1) {
    sub_4 = v_331;
  } else {
    sub_4 = sub_5;
  };
  if (controller_c_pc) {
    v_326 = false;
    sub_27 = sub_21;
  } else {
    v_326 = sub_21;
    sub_27 = false;
  };
  if (controller_ck_18_1) {
    sub_26 = v_326;
  } else {
    sub_26 = sub_27;
  };
  sub_25 = sub_26;
  sub_24 = sub_25;
  if (controller_c_air_1) {
    sub_33 = sub_15;
  } else {
    sub_33 = sub_16;
  };
  if (controller_v_112) {
    sub_35 = sub_13;
  } else {
    sub_35 = sub_16;
  };
  if (controller_c_air_1) {
    sub_34 = sub_35;
  } else {
    sub_34 = false;
  };
  if (controller_v_111) {
    sub_32 = sub_34;
  } else {
    sub_32 = sub_33;
  };
  if (controller_c_pc) {
    v_325 = false;
    sub_31 = sub_32;
  } else {
    v_325 = sub_32;
    sub_31 = false;
  };
  if (controller_ck_18_1) {
    sub_30 = v_325;
  } else {
    sub_30 = sub_31;
  };
  sub_29 = sub_30;
  sub_28 = sub_29;
  if (controller_cleaner) {
    v_327 = sub_28;
    sub_23 = sub_24;
  } else {
    v_327 = sub_24;
    sub_23 = sub_28;
  };
  if (controller_ck_16_1) {
    sub_22 = v_327;
  } else {
    sub_22 = sub_23;
  };
  if (controller_worker) {
    v_332 = sub_22;
    sub_3 = sub_4;
  } else {
    v_332 = sub_4;
    sub_3 = sub_22;
  };
  if (controller_ck_14_1) {
    sub_2 = v_332;
  } else {
    sub_2 = sub_3;
  };
  if (controller_c_air_1) {
    v_322 = sub_15;
  } else {
    v_322 = sub_12;
  };
  if (controller_v_111) {
    sub_43 = v_322;
  } else {
    sub_43 = sub_11;
  };
  if (controller_c_pc) {
    v_323 = sub_43;
    sub_42 = false;
  } else {
    v_323 = false;
    sub_42 = sub_43;
  };
  if (controller_ck_18_1) {
    sub_41 = v_323;
  } else {
    sub_41 = sub_42;
  };
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_47 = sub_13;
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  if (controller_cleaner) {
    v_324 = sub_44;
    sub_38 = sub_39;
  } else {
    v_324 = sub_39;
    sub_38 = sub_44;
  };
  if (controller_ck_16_1) {
    sub_37 = v_324;
  } else {
    sub_37 = sub_38;
  };
  if (controller_c_pc) {
    v_320 = false;
    sub_53 = sub_47;
  } else {
    v_320 = sub_47;
    sub_53 = false;
  };
  if (controller_ck_18_1) {
    sub_52 = v_320;
  } else {
    sub_52 = sub_53;
  };
  sub_51 = sub_52;
  sub_50 = sub_51;
  if (controller_v_112) {
    v = sub_13;
  } else {
    v = false;
  };
  if (controller_c_air_1) {
    sub_59 = v;
  } else {
    sub_59 = sub_35;
  };
  if (controller_v_111) {
    sub_58 = sub_34;
  } else {
    sub_58 = sub_59;
  };
  if (controller_c_pc) {
    v_319 = false;
    sub_57 = sub_58;
  } else {
    v_319 = sub_58;
    sub_57 = false;
  };
  if (controller_ck_18_1) {
    sub_56 = v_319;
  } else {
    sub_56 = sub_57;
  };
  sub_55 = sub_56;
  sub_54 = sub_55;
  if (controller_cleaner) {
    v_321 = sub_54;
    sub_49 = sub_50;
  } else {
    v_321 = sub_50;
    sub_49 = sub_54;
  };
  if (controller_ck_16_1) {
    sub_48 = v_321;
  } else {
    sub_48 = sub_49;
  };
  if (controller_worker) {
    v_333 = sub_48;
    sub_36 = sub_37;
  } else {
    v_333 = sub_37;
    sub_36 = sub_48;
  };
  if (controller_ck_14_1) {
    v_334 = v_333;
  } else {
    v_334 = sub_36;
  };
  if (p_controller_c_air_2) {
    sub_1 = v_334;
  } else {
    sub_1 = sub_2;
  };
  sub_0 = sub_1;
  _out->controller_c_air_2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_air_1_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_light_switch, int controller_blind_switch,
  int controller_ck_1, int controller_pnr_9, int controller_ck_10_1,
  int controller_pnr_8, int controller_ck_12_1, int controller_pnr_7,
  int controller_ck_14_1, int controller_pnr_6, int controller_ck_16_1,
  int controller_pnr_5, int controller_ck_18_1, int controller_pnr_4,
  int controller_ck_20_1, int controller_pnr_3, int controller_v_112,
  int controller_v_111, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_blind_1,
  int p_controller_c_light_2, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_1_out* _out) {
  
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
  sub_13 = false;
  sub_12 = sub_13;
  if (controller_v_112) {
    sub_11 = false;
  } else {
    sub_11 = sub_12;
  };
  sub_16 = true;
  sub_15 = sub_16;
  if (controller_v_112) {
    sub_14 = sub_15;
  } else {
    sub_14 = sub_12;
  };
  if (controller_v_111) {
    sub_10 = sub_14;
  } else {
    sub_10 = sub_11;
  };
  if (controller_c_pc) {
    v_341 = sub_10;
    sub_9 = false;
  } else {
    v_341 = false;
    sub_9 = sub_10;
  };
  if (controller_ck_18_1) {
    sub_8 = v_341;
  } else {
    sub_8 = sub_9;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_19 = sub_12;
  sub_18 = sub_19;
  sub_17 = sub_18;
  if (controller_cleaner) {
    v_342 = sub_17;
    sub_5 = sub_6;
  } else {
    v_342 = sub_6;
    sub_5 = sub_17;
  };
  if (controller_ck_16_1) {
    sub_4 = v_342;
  } else {
    sub_4 = sub_5;
  };
  if (controller_c_pc) {
    v_339 = false;
    sub_25 = sub_12;
  } else {
    v_339 = sub_12;
    sub_25 = false;
  };
  if (controller_ck_18_1) {
    sub_24 = v_339;
  } else {
    sub_24 = sub_25;
  };
  sub_23 = sub_24;
  sub_22 = sub_23;
  if (controller_v_111) {
    sub_30 = sub_15;
  } else {
    sub_30 = sub_12;
  };
  if (controller_c_pc) {
    v_338 = false;
    sub_29 = sub_30;
  } else {
    v_338 = sub_30;
    sub_29 = false;
  };
  if (controller_ck_18_1) {
    sub_28 = v_338;
  } else {
    sub_28 = sub_29;
  };
  sub_27 = sub_28;
  sub_26 = sub_27;
  if (controller_cleaner) {
    v_340 = sub_26;
    sub_21 = sub_22;
  } else {
    v_340 = sub_22;
    sub_21 = sub_26;
  };
  if (controller_ck_16_1) {
    sub_20 = v_340;
  } else {
    sub_20 = sub_21;
  };
  if (controller_worker) {
    v_343 = sub_20;
    sub_3 = sub_4;
  } else {
    v_343 = sub_4;
    sub_3 = sub_20;
  };
  if (controller_ck_14_1) {
    sub_2 = v_343;
  } else {
    sub_2 = sub_3;
  };
  sub_36 = sub_15;
  sub_35 = sub_36;
  sub_34 = sub_35;
  if (controller_cleaner) {
    v_337 = sub_34;
    sub_33 = sub_6;
  } else {
    v_337 = sub_6;
    sub_33 = sub_34;
  };
  if (controller_ck_16_1) {
    sub_32 = v_337;
  } else {
    sub_32 = sub_33;
  };
  if (controller_c_pc) {
    v_335 = false;
    sub_42 = sub_15;
  } else {
    v_335 = sub_15;
    sub_42 = false;
  };
  if (controller_ck_18_1) {
    sub_41 = v_335;
  } else {
    sub_41 = sub_42;
  };
  sub_40 = sub_41;
  sub_39 = sub_40;
  if (controller_v_111) {
    sub_47 = sub_15;
  } else {
    sub_47 = sub_14;
  };
  if (controller_c_pc) {
    v = false;
    sub_46 = sub_47;
  } else {
    v = sub_47;
    sub_46 = false;
  };
  if (controller_ck_18_1) {
    sub_45 = v;
  } else {
    sub_45 = sub_46;
  };
  sub_44 = sub_45;
  sub_43 = sub_44;
  if (controller_cleaner) {
    v_336 = sub_43;
    sub_38 = sub_39;
  } else {
    v_336 = sub_39;
    sub_38 = sub_43;
  };
  if (controller_ck_16_1) {
    sub_37 = v_336;
  } else {
    sub_37 = sub_38;
  };
  if (controller_worker) {
    v_344 = sub_37;
    sub_31 = sub_32;
  } else {
    v_344 = sub_32;
    sub_31 = sub_37;
  };
  if (controller_ck_14_1) {
    v_345 = v_344;
  } else {
    v_345 = sub_31;
  };
  if (p_controller_c_air_1) {
    sub_1 = v_345;
  } else {
    sub_1 = sub_2;
  };
  sub_0 = sub_1;
  _out->controller_c_air_1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_window_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_light_switch, int controller_blind_switch,
  int controller_ck_1, int controller_pnr_9, int controller_ck_10_1,
  int controller_pnr_8, int controller_ck_12_1, int controller_pnr_7,
  int controller_ck_14_1, int controller_pnr_6, int controller_ck_16_1,
  int controller_pnr_5, int controller_ck_18_1, int controller_pnr_4,
  int controller_ck_20_1, int controller_pnr_3, int controller_v_112,
  int controller_v_111, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_blind_1,
  int p_controller_c_light_2, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_window_out* _out) {
  
  int v_348;
  int v_347;
  int v_346;
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
  sub_12 = p_controller_c_window;
  sub_11 = sub_12;
  if (controller_v_112) {
    sub_10 = false;
  } else {
    sub_10 = sub_11;
  };
  if (controller_v_111) {
    sub_9 = sub_11;
  } else {
    sub_9 = sub_10;
  };
  if (controller_c_pc) {
    v_346 = sub_9;
    sub_8 = false;
  } else {
    v_346 = false;
    sub_8 = sub_9;
  };
  if (controller_ck_18_1) {
    sub_7 = v_346;
  } else {
    sub_7 = sub_8;
  };
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_15 = sub_11;
  sub_14 = sub_15;
  sub_13 = sub_14;
  if (controller_cleaner) {
    v_347 = sub_13;
    sub_4 = sub_5;
  } else {
    v_347 = sub_5;
    sub_4 = sub_13;
  };
  if (controller_ck_16_1) {
    sub_3 = v_347;
  } else {
    sub_3 = sub_4;
  };
  if (controller_c_pc) {
    v = false;
    sub_20 = sub_11;
  } else {
    v = sub_11;
    sub_20 = false;
  };
  if (controller_ck_18_1) {
    sub_19 = v;
  } else {
    sub_19 = sub_20;
  };
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  if (controller_worker) {
    v_348 = sub_16;
    sub_2 = sub_3;
  } else {
    v_348 = sub_3;
    sub_2 = sub_16;
  };
  if (controller_ck_14_1) {
    sub_1 = v_348;
  } else {
    sub_1 = sub_2;
  };
  sub_0 = sub_1;
  _out->controller_c_window = sub_0;;
}

void Controller_controller__controller_controller_controller_c_pc_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_light_switch, int controller_blind_switch,
  int controller_ck_1, int controller_pnr_9, int controller_ck_10_1,
  int controller_pnr_8, int controller_ck_12_1, int controller_pnr_7,
  int controller_ck_14_1, int controller_pnr_6, int controller_ck_16_1,
  int controller_pnr_5, int controller_ck_18_1, int controller_pnr_4,
  int controller_ck_20_1, int controller_pnr_3, int controller_v_112,
  int controller_v_111, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_blind_1,
  int p_controller_c_light_2, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_door,
  Controller_controller__controller_controller_controller_c_pc_out* _out) {
  
  int v_350;
  int v_349;
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
  sub_10 = false;
  if (controller_v_112) {
    sub_9 = false;
  } else {
    sub_9 = sub_10;
  };
  if (controller_v_111) {
    sub_8 = sub_10;
  } else {
    sub_8 = sub_9;
  };
  sub_12 = true;
  if (controller_v_112) {
    sub_11 = false;
  } else {
    sub_11 = sub_12;
  };
  if (controller_v_111) {
    v = sub_12;
  } else {
    v = sub_11;
  };
  if (controller_ck_18_1) {
    sub_7 = v;
  } else {
    sub_7 = sub_8;
  };
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_16 = p_controller_c_pc;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  if (controller_cleaner) {
    v_349 = sub_13;
    sub_4 = sub_5;
  } else {
    v_349 = sub_5;
    sub_4 = sub_13;
  };
  if (controller_ck_16_1) {
    sub_3 = v_349;
  } else {
    sub_3 = sub_4;
  };
  if (controller_ck_18_1) {
    sub_20 = sub_10;
  } else {
    sub_20 = sub_12;
  };
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  if (controller_worker) {
    v_350 = sub_17;
    sub_2 = sub_3;
  } else {
    v_350 = sub_3;
    sub_2 = sub_17;
  };
  if (controller_ck_14_1) {
    sub_1 = v_350;
  } else {
    sub_1 = sub_2;
  };
  sub_0 = sub_1;
  _out->controller_c_pc = sub_0;;
}

void Controller_controller__controller_controller_controller_c_door_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_light_switch, int controller_blind_switch,
  int controller_ck_1, int controller_pnr_9, int controller_ck_10_1,
  int controller_pnr_8, int controller_ck_12_1, int controller_pnr_7,
  int controller_ck_14_1, int controller_pnr_6, int controller_ck_16_1,
  int controller_pnr_5, int controller_ck_18_1, int controller_pnr_4,
  int controller_ck_20_1, int controller_pnr_3, int controller_v_112,
  int controller_v_111, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_blind_1,
  int p_controller_c_light_2, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door,
  Controller_controller__controller_controller_controller_c_door_out* _out) {
  
  int v_351;
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
  sub_9 = p_controller_c_door;
  if (controller_v_112) {
    sub_8 = false;
  } else {
    sub_8 = sub_9;
  };
  if (controller_v_111) {
    sub_7 = sub_9;
  } else {
    sub_7 = sub_8;
  };
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_11 = sub_9;
  sub_10 = sub_11;
  if (controller_cleaner) {
    v = sub_10;
    sub_4 = sub_5;
  } else {
    v = sub_5;
    sub_4 = sub_10;
  };
  if (controller_ck_16_1) {
    sub_3 = v;
  } else {
    sub_3 = sub_4;
  };
  sub_12 = sub_10;
  if (controller_worker) {
    v_351 = sub_12;
    sub_2 = sub_3;
  } else {
    v_351 = sub_3;
    sub_2 = sub_12;
  };
  if (controller_ck_14_1) {
    sub_1 = v_351;
  } else {
    sub_1 = sub_2;
  };
  sub_0 = sub_1;
  _out->controller_c_door = sub_0;;
}

void Controller_controller__controller_controller_step(int controller_change_shift,
                                                       int controller_worker,
                                                       int controller_cleaner,
                                                       int controller_light_switch,
                                                       int controller_blind_switch,
                                                       int controller_ck_1,
                                                       int controller_pnr_9,
                                                       int controller_ck_10_1,
                                                       int controller_pnr_8,
                                                       int controller_ck_12_1,
                                                       int controller_pnr_7,
                                                       int controller_ck_14_1,
                                                       int controller_pnr_6,
                                                       int controller_ck_16_1,
                                                       int controller_pnr_5,
                                                       int controller_ck_18_1,
                                                       int controller_pnr_4,
                                                       int controller_ck_20_1,
                                                       int controller_pnr_3,
                                                       int controller_v_112,
                                                       int controller_v_111,
                                                       int controller_pnr_2,
                                                       int controller_ck_24_1,
                                                       int controller_pnr_1,
                                                       int controller_ck_26_1,
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
  controller_light_switch, controller_blind_switch, controller_ck_1,
  controller_pnr_9, controller_ck_10_1, controller_pnr_8, controller_ck_12_1,
  controller_pnr_7, controller_ck_14_1, controller_pnr_6, controller_ck_16_1,
  controller_pnr_5, controller_ck_18_1, controller_pnr_4, controller_ck_20_1,
  controller_pnr_3, controller_v_112, controller_v_111, controller_pnr_2,
  controller_ck_24_1, controller_pnr_1, controller_ck_26_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door,
  &Controller_controller__controller_controller_controller_c_door_out_st);
  _out->controller_c_door = Controller_controller__controller_controller_controller_c_door_out_st.controller_c_door;
  Controller_controller__controller_controller_controller_c_pc_step(controller_change_shift,
                                                                    controller_worker,
                                                                    controller_cleaner,
                                                                    controller_light_switch,
                                                                    controller_blind_switch,
                                                                    controller_ck_1,
                                                                    controller_pnr_9,
                                                                    controller_ck_10_1,
                                                                    controller_pnr_8,
                                                                    controller_ck_12_1,
                                                                    controller_pnr_7,
                                                                    controller_ck_14_1,
                                                                    controller_pnr_6,
                                                                    controller_ck_16_1,
                                                                    controller_pnr_5,
                                                                    controller_ck_18_1,
                                                                    controller_pnr_4,
                                                                    controller_ck_20_1,
                                                                    controller_pnr_3,
                                                                    controller_v_112,
                                                                    controller_v_111,
                                                                    controller_pnr_2,
                                                                    controller_ck_24_1,
                                                                    controller_pnr_1,
                                                                    controller_ck_26_1,
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
  controller_light_switch, controller_blind_switch, controller_ck_1,
  controller_pnr_9, controller_ck_10_1, controller_pnr_8, controller_ck_12_1,
  controller_pnr_7, controller_ck_14_1, controller_pnr_6, controller_ck_16_1,
  controller_pnr_5, controller_ck_18_1, controller_pnr_4, controller_ck_20_1,
  controller_pnr_3, controller_v_112, controller_v_111, controller_pnr_2,
  controller_ck_24_1, controller_pnr_1, controller_ck_26_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door, _out->controller_c_pc, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_window_out_st);
  _out->controller_c_window = Controller_controller__controller_controller_controller_c_window_out_st.controller_c_window;
  Controller_controller__controller_controller_controller_c_air_1_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_light_switch, controller_blind_switch, controller_ck_1,
  controller_pnr_9, controller_ck_10_1, controller_pnr_8, controller_ck_12_1,
  controller_pnr_7, controller_ck_14_1, controller_pnr_6, controller_ck_16_1,
  controller_pnr_5, controller_ck_18_1, controller_pnr_4, controller_ck_20_1,
  controller_pnr_3, controller_v_112, controller_v_111, controller_pnr_2,
  controller_ck_24_1, controller_pnr_1, controller_ck_26_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door, _out->controller_c_window, _out->controller_c_pc,
  _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_air_1_out_st);
  _out->controller_c_air_1 = Controller_controller__controller_controller_controller_c_air_1_out_st.controller_c_air_1;
  Controller_controller__controller_controller_controller_c_air_2_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_light_switch, controller_blind_switch, controller_ck_1,
  controller_pnr_9, controller_ck_10_1, controller_pnr_8, controller_ck_12_1,
  controller_pnr_7, controller_ck_14_1, controller_pnr_6, controller_ck_16_1,
  controller_pnr_5, controller_ck_18_1, controller_pnr_4, controller_ck_20_1,
  controller_pnr_3, controller_v_112, controller_v_111, controller_pnr_2,
  controller_ck_24_1, controller_pnr_1, controller_ck_26_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door, _out->controller_c_air_1, _out->controller_c_window,
  _out->controller_c_pc, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_air_2_out_st);
  _out->controller_c_air_2 = Controller_controller__controller_controller_controller_c_air_2_out_st.controller_c_air_2;
  Controller_controller__controller_controller_controller_c_closet_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_light_switch, controller_blind_switch, controller_ck_1,
  controller_pnr_9, controller_ck_10_1, controller_pnr_8, controller_ck_12_1,
  controller_pnr_7, controller_ck_14_1, controller_pnr_6, controller_ck_16_1,
  controller_pnr_5, controller_ck_18_1, controller_pnr_4, controller_ck_20_1,
  controller_pnr_3, controller_v_112, controller_v_111, controller_pnr_2,
  controller_ck_24_1, controller_pnr_1, controller_ck_26_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_blind_1, p_controller_c_light_2,
  p_controller_c_light_1, p_controller_c_closet, p_controller_c_air_2,
  p_controller_c_air_1, p_controller_c_window, p_controller_c_pc,
  p_controller_c_door, _out->controller_c_air_2, _out->controller_c_air_1,
  _out->controller_c_window, _out->controller_c_pc, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_closet_out_st);
  _out->controller_c_closet = Controller_controller__controller_controller_controller_c_closet_out_st.controller_c_closet;
  Controller_controller__controller_controller_controller_c_light_1_step(
  controller_change_shift, controller_worker, controller_cleaner,
  controller_light_switch, controller_blind_switch, controller_ck_1,
  controller_pnr_9, controller_ck_10_1, controller_pnr_8, controller_ck_12_1,
  controller_pnr_7, controller_ck_14_1, controller_pnr_6, controller_ck_16_1,
  controller_pnr_5, controller_ck_18_1, controller_pnr_4, controller_ck_20_1,
  controller_pnr_3, controller_v_112, controller_v_111, controller_pnr_2,
  controller_ck_24_1, controller_pnr_1, controller_ck_26_1, controller_pnr,
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
  controller_light_switch, controller_blind_switch, controller_ck_1,
  controller_pnr_9, controller_ck_10_1, controller_pnr_8, controller_ck_12_1,
  controller_pnr_7, controller_ck_14_1, controller_pnr_6, controller_ck_16_1,
  controller_pnr_5, controller_ck_18_1, controller_pnr_4, controller_ck_20_1,
  controller_pnr_3, controller_v_112, controller_v_111, controller_pnr_2,
  controller_ck_24_1, controller_pnr_1, controller_ck_26_1, controller_pnr,
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
  controller_light_switch, controller_blind_switch, controller_ck_1,
  controller_pnr_9, controller_ck_10_1, controller_pnr_8, controller_ck_12_1,
  controller_pnr_7, controller_ck_14_1, controller_pnr_6, controller_ck_16_1,
  controller_pnr_5, controller_ck_18_1, controller_pnr_4, controller_ck_20_1,
  controller_pnr_3, controller_v_112, controller_v_111, controller_pnr_2,
  controller_ck_24_1, controller_pnr_1, controller_ck_26_1, controller_pnr,
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
  controller_light_switch, controller_blind_switch, controller_ck_1,
  controller_pnr_9, controller_ck_10_1, controller_pnr_8, controller_ck_12_1,
  controller_pnr_7, controller_ck_14_1, controller_pnr_6, controller_ck_16_1,
  controller_pnr_5, controller_ck_18_1, controller_pnr_4, controller_ck_20_1,
  controller_pnr_3, controller_v_112, controller_v_111, controller_pnr_2,
  controller_ck_24_1, controller_pnr_1, controller_ck_26_1, controller_pnr,
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

