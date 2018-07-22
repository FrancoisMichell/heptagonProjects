/* --- Generated the 22/7/2018 at 16:16 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jun. 15 15:41:53 CET 2018) --- */
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
  sub_18 = true;
  sub_17 = sub_18;
  if (controller_c_air_1) {
    sub_16 = false;
  } else {
    sub_16 = sub_17;
  };
  if (controller_v_111) {
    v_67 = sub_16;
  } else {
    v_67 = false;
  };
  if (controller_c_air_2) {
    sub_15 = sub_16;
  } else {
    sub_15 = v_67;
  };
  if (controller_c_air_1) {
    sub_19 = sub_17;
  } else {
    sub_19 = false;
  };
  if (controller_v_111) {
    v_68 = sub_19;
  } else {
    v_68 = false;
  };
  if (controller_c_air_2) {
    v_69 = false;
  } else {
    v_69 = v_68;
  };
  if (controller_v_112) {
    sub_14 = v_69;
  } else {
    sub_14 = sub_15;
  };
  if (controller_ck_18_1) {
    v_71 = false;
    v_70 = sub_14;
  } else {
    v_71 = sub_14;
    v_70 = false;
  };
  if (controller_c_pc) {
    v_72 = v_70;
  } else {
    v_72 = v_71;
  };
  if (controller_c_closet) {
    sub_13 = v_72;
  } else {
    sub_13 = false;
  };
  if (controller_blind_switch) {
    sub_12 = sub_13;
  } else {
    sub_12 = false;
  };
  sub_26 = false;
  sub_25 = sub_26;
  if (controller_c_air_1) {
    sub_24 = false;
  } else {
    sub_24 = sub_25;
  };
  if (controller_v_111) {
    v_61 = sub_24;
  } else {
    v_61 = false;
  };
  if (controller_c_air_2) {
    sub_23 = sub_24;
  } else {
    sub_23 = v_61;
  };
  if (controller_c_air_1) {
    sub_27 = sub_25;
  } else {
    sub_27 = false;
  };
  if (controller_v_111) {
    v_62 = sub_27;
  } else {
    v_62 = false;
  };
  if (controller_c_air_2) {
    v_63 = false;
  } else {
    v_63 = v_62;
  };
  if (controller_v_112) {
    sub_22 = v_63;
  } else {
    sub_22 = sub_23;
  };
  if (controller_ck_18_1) {
    v_65 = false;
    v_64 = sub_22;
  } else {
    v_65 = sub_22;
    v_64 = false;
  };
  if (controller_c_pc) {
    v_66 = v_64;
  } else {
    v_66 = v_65;
  };
  if (controller_c_closet) {
    sub_21 = v_66;
  } else {
    sub_21 = false;
  };
  sub_20 = sub_21;
  if (controller_c_blind_1) {
    v_73 = sub_20;
    sub_11 = sub_12;
  } else {
    v_73 = false;
    sub_11 = sub_20;
  };
  if (controller_ck_26_1) {
    sub_10 = v_73;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_35 = sub_25;
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
  sub_40 = sub_17;
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
  if (controller_v_111) {
    v_55 = false;
    v_54 = sub_27;
  } else {
    v_55 = sub_35;
    v_54 = sub_35;
  };
  if (controller_c_air_2) {
    v_56 = v_54;
  } else {
    v_56 = v_55;
  };
  if (controller_v_111) {
    v_53 = sub_27;
  } else {
    v_53 = sub_24;
  };
  if (controller_c_air_2) {
    sub_45 = false;
  } else {
    sub_45 = v_53;
  };
  if (controller_v_112) {
    sub_44 = v_56;
  } else {
    sub_44 = sub_45;
  };
  if (controller_ck_18_1) {
    v_58 = sub_44;
    v_57 = sub_34;
  } else {
    v_58 = sub_34;
    v_57 = sub_44;
  };
  if (controller_c_pc) {
    v_59 = v_57;
  } else {
    v_59 = v_58;
  };
  if (controller_c_closet) {
    sub_43 = false;
  } else {
    sub_43 = v_59;
  };
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (controller_ck_24_1) {
    sub_29 = sub_41;
    v_52 = sub_30;
  } else {
    sub_29 = sub_30;
    v_52 = sub_41;
  };
  if (controller_c_light_1) {
    sub_46 = v_52;
  } else {
    sub_46 = sub_29;
  };
  if (controller_light_switch) {
    v_60 = sub_29;
  } else {
    v_60 = sub_46;
  };
  if (controller_c_light_2) {
    sub_28 = v_60;
  } else {
    sub_28 = sub_46;
  };
  if (controller_cleaner) {
    v_74 = sub_28;
    sub_6 = sub_7;
  } else {
    v_74 = sub_7;
    sub_6 = sub_28;
  };
  if (controller_ck_16_1) {
    sub_5 = v_74;
  } else {
    sub_5 = sub_6;
  };
  if (controller_ck_18_1) {
    v_49 = sub_34;
    v_48 = false;
  } else {
    v_49 = false;
    v_48 = sub_34;
  };
  if (controller_c_pc) {
    sub_55 = v_48;
  } else {
    sub_55 = v_49;
  };
  sub_54 = sub_55;
  sub_53 = sub_54;
  if (controller_c_blind_1) {
    sub_52 = sub_53;
  } else {
    sub_52 = false;
  };
  if (controller_ck_18_1) {
    v_47 = sub_39;
    v_46 = false;
  } else {
    v_47 = false;
    v_46 = sub_39;
  };
  if (controller_c_pc) {
    sub_59 = v_46;
  } else {
    sub_59 = v_47;
  };
  sub_58 = sub_59;
  if (controller_blind_switch) {
    sub_57 = sub_58;
  } else {
    sub_57 = false;
  };
  if (controller_c_blind_1) {
    sub_56 = sub_57;
  } else {
    sub_56 = sub_53;
  };
  if (controller_ck_26_1) {
    sub_51 = sub_56;
  } else {
    sub_51 = sub_52;
  };
  if (controller_ck_18_1) {
    v_45 = sub_44;
    v_44 = false;
  } else {
    v_45 = false;
    v_44 = sub_44;
  };
  if (controller_c_pc) {
    sub_63 = v_44;
  } else {
    sub_63 = v_45;
  };
  sub_62 = sub_63;
  sub_61 = sub_62;
  sub_60 = sub_61;
  if (controller_ck_24_1) {
    sub_50 = sub_60;
    v_43 = sub_51;
  } else {
    sub_50 = sub_51;
    v_43 = sub_60;
  };
  if (controller_c_light_1) {
    sub_64 = v_43;
  } else {
    sub_64 = sub_50;
  };
  if (controller_light_switch) {
    v_50 = sub_50;
  } else {
    v_50 = sub_64;
  };
  if (controller_c_light_2) {
    sub_49 = v_50;
  } else {
    sub_49 = sub_64;
  };
  if (controller_c_closet) {
    sub_70 = false;
  } else {
    sub_70 = sub_63;
  };
  sub_69 = sub_70;
  if (controller_c_blind_1) {
    sub_68 = sub_69;
  } else {
    sub_68 = false;
  };
  if (controller_v_111) {
    v_38 = false;
    v_37 = sub_19;
  } else {
    v_38 = sub_40;
    v_37 = sub_40;
  };
  if (controller_c_air_2) {
    v_39 = v_37;
  } else {
    v_39 = v_38;
  };
  if (controller_v_111) {
    v_36 = sub_19;
  } else {
    v_36 = sub_16;
  };
  if (controller_c_air_2) {
    sub_76 = false;
  } else {
    sub_76 = v_36;
  };
  if (controller_v_112) {
    sub_75 = v_39;
  } else {
    sub_75 = sub_76;
  };
  if (controller_ck_18_1) {
    v_41 = sub_75;
    v_40 = false;
  } else {
    v_41 = false;
    v_40 = sub_75;
  };
  if (controller_c_pc) {
    sub_74 = v_40;
  } else {
    sub_74 = v_41;
  };
  if (controller_c_closet) {
    sub_73 = false;
  } else {
    sub_73 = sub_74;
  };
  if (controller_blind_switch) {
    sub_72 = sub_73;
  } else {
    sub_72 = false;
  };
  if (controller_c_blind_1) {
    sub_71 = sub_72;
  } else {
    sub_71 = sub_69;
  };
  if (controller_ck_26_1) {
    sub_67 = sub_71;
  } else {
    sub_67 = sub_68;
  };
  sub_77 = sub_69;
  if (controller_ck_24_1) {
    sub_66 = sub_77;
    v_35 = sub_67;
  } else {
    sub_66 = sub_67;
    v_35 = sub_77;
  };
  if (controller_c_light_1) {
    sub_78 = v_35;
  } else {
    sub_78 = sub_66;
  };
  if (controller_light_switch) {
    v_42 = sub_66;
  } else {
    v_42 = sub_78;
  };
  if (controller_c_light_2) {
    sub_65 = v_42;
  } else {
    sub_65 = sub_78;
  };
  if (controller_cleaner) {
    v_51 = sub_65;
    sub_48 = sub_49;
  } else {
    v_51 = sub_49;
    sub_48 = sub_65;
  };
  if (controller_ck_16_1) {
    sub_47 = v_51;
  } else {
    sub_47 = sub_48;
  };
  if (controller_worker) {
    v_75 = sub_47;
    sub_4 = sub_5;
  } else {
    v_75 = sub_5;
    sub_4 = sub_47;
  };
  if (controller_ck_14_1) {
    sub_3 = v_75;
  } else {
    sub_3 = sub_4;
  };
  if (controller_ck_26_1) {
    sub_85 = sub_31;
  } else {
    sub_85 = sub_36;
  };
  if (controller_ck_24_1) {
    sub_84 = sub_85;
    v_31 = false;
  } else {
    sub_84 = false;
    v_31 = sub_85;
  };
  if (controller_c_light_1) {
    sub_86 = v_31;
  } else {
    sub_86 = sub_84;
  };
  if (controller_light_switch) {
    v_32 = sub_84;
  } else {
    v_32 = sub_86;
  };
  if (controller_c_light_2) {
    sub_83 = v_32;
  } else {
    sub_83 = sub_86;
  };
  if (controller_cleaner) {
    v_33 = sub_83;
    sub_82 = sub_7;
  } else {
    v_33 = sub_7;
    sub_82 = sub_83;
  };
  if (controller_ck_16_1) {
    sub_81 = v_33;
  } else {
    sub_81 = sub_82;
  };
  if (controller_ck_26_1) {
    sub_91 = sub_52;
  } else {
    sub_91 = sub_56;
  };
  if (controller_ck_24_1) {
    sub_90 = sub_91;
    v_28 = false;
  } else {
    sub_90 = false;
    v_28 = sub_91;
  };
  if (controller_c_light_1) {
    sub_92 = v_28;
  } else {
    sub_92 = sub_90;
  };
  if (controller_light_switch) {
    v_29 = sub_90;
  } else {
    v_29 = sub_92;
  };
  if (controller_c_light_2) {
    sub_89 = v_29;
  } else {
    sub_89 = sub_92;
  };
  if (controller_ck_26_1) {
    sub_95 = sub_68;
  } else {
    sub_95 = sub_71;
  };
  if (controller_ck_24_1) {
    sub_94 = sub_95;
    v_26 = false;
  } else {
    sub_94 = false;
    v_26 = sub_95;
  };
  if (controller_c_light_1) {
    sub_96 = v_26;
  } else {
    sub_96 = sub_94;
  };
  if (controller_light_switch) {
    v_27 = sub_94;
  } else {
    v_27 = sub_96;
  };
  if (controller_c_light_2) {
    sub_93 = v_27;
  } else {
    sub_93 = sub_96;
  };
  if (controller_cleaner) {
    v_30 = sub_93;
    sub_88 = sub_89;
  } else {
    v_30 = sub_89;
    sub_88 = sub_93;
  };
  if (controller_ck_16_1) {
    sub_87 = v_30;
  } else {
    sub_87 = sub_88;
  };
  if (controller_worker) {
    v_34 = sub_87;
    sub_80 = sub_81;
  } else {
    v_34 = sub_81;
    sub_80 = sub_87;
  };
  if (controller_ck_14_1) {
    sub_79 = v_34;
  } else {
    sub_79 = sub_80;
  };
  if (controller_change_shift) {
    v_76 = sub_79;
    sub_2 = sub_3;
  } else {
    v_76 = sub_3;
    sub_2 = sub_79;
  };
  if (controller_ck_1) {
    sub_1 = v_76;
  } else {
    sub_1 = sub_2;
  };
  if (controller_blind_switch) {
    v_22 = sub_21;
  } else {
    v_22 = sub_13;
  };
  if (controller_c_blind_1) {
    v_23 = v_22;
    sub_106 = sub_12;
  } else {
    v_23 = false;
    sub_106 = sub_13;
  };
  if (controller_ck_26_1) {
    sub_105 = v_23;
  } else {
    sub_105 = sub_106;
  };
  sub_104 = sub_105;
  sub_103 = sub_104;
  sub_102 = sub_103;
  if (controller_blind_switch) {
    v_20 = sub_33;
  } else {
    v_20 = sub_38;
  };
  if (controller_c_blind_1) {
    sub_110 = v_20;
    sub_111 = sub_37;
  } else {
    sub_110 = false;
    sub_111 = sub_38;
  };
  if (controller_ck_26_1) {
    sub_109 = sub_111;
  } else {
    sub_109 = sub_110;
  };
  if (controller_ck_18_1) {
    v_18 = sub_75;
    v_17 = sub_39;
  } else {
    v_18 = sub_39;
    v_17 = sub_75;
  };
  if (controller_c_pc) {
    v_19 = v_17;
  } else {
    v_19 = v_18;
  };
  if (controller_c_closet) {
    sub_114 = false;
  } else {
    sub_114 = v_19;
  };
  sub_113 = sub_114;
  sub_112 = sub_113;
  if (controller_ck_24_1) {
    sub_108 = sub_112;
    v_16 = sub_109;
  } else {
    sub_108 = sub_109;
    v_16 = sub_112;
  };
  if (controller_c_light_1) {
    sub_115 = v_16;
  } else {
    sub_115 = sub_108;
  };
  if (controller_light_switch) {
    v_21 = sub_108;
  } else {
    v_21 = sub_115;
  };
  if (controller_c_light_2) {
    sub_107 = v_21;
  } else {
    sub_107 = sub_115;
  };
  if (controller_cleaner) {
    v_24 = sub_107;
    sub_101 = sub_102;
  } else {
    v_24 = sub_102;
    sub_101 = sub_107;
  };
  if (controller_ck_16_1) {
    sub_100 = v_24;
  } else {
    sub_100 = sub_101;
  };
  if (controller_blind_switch) {
    v_13 = sub_54;
  } else {
    v_13 = sub_58;
  };
  if (controller_c_blind_1) {
    sub_121 = v_13;
    sub_122 = sub_57;
  } else {
    sub_121 = false;
    sub_122 = sub_58;
  };
  if (controller_ck_26_1) {
    sub_120 = sub_122;
  } else {
    sub_120 = sub_121;
  };
  sub_125 = sub_74;
  sub_124 = sub_125;
  sub_123 = sub_124;
  if (controller_ck_24_1) {
    sub_119 = sub_123;
    v_12 = sub_120;
  } else {
    sub_119 = sub_120;
    v_12 = sub_123;
  };
  if (controller_c_light_1) {
    sub_126 = v_12;
  } else {
    sub_126 = sub_119;
  };
  if (controller_light_switch) {
    v_14 = sub_119;
  } else {
    v_14 = sub_126;
  };
  if (controller_c_light_2) {
    sub_118 = v_14;
  } else {
    sub_118 = sub_126;
  };
  if (controller_blind_switch) {
    v_10 = sub_70;
  } else {
    v_10 = sub_73;
  };
  if (controller_c_blind_1) {
    sub_130 = v_10;
  } else {
    sub_130 = false;
  };
  sub_132 = sub_73;
  if (controller_c_blind_1) {
    sub_131 = sub_72;
  } else {
    sub_131 = sub_132;
  };
  if (controller_ck_26_1) {
    sub_129 = sub_131;
  } else {
    sub_129 = sub_130;
  };
  sub_133 = sub_132;
  if (controller_ck_24_1) {
    sub_128 = sub_133;
    v_9 = sub_129;
  } else {
    sub_128 = sub_129;
    v_9 = sub_133;
  };
  if (controller_c_light_1) {
    sub_134 = v_9;
  } else {
    sub_134 = sub_128;
  };
  if (controller_light_switch) {
    v_11 = sub_128;
  } else {
    v_11 = sub_134;
  };
  if (controller_c_light_2) {
    sub_127 = v_11;
  } else {
    sub_127 = sub_134;
  };
  if (controller_cleaner) {
    v_15 = sub_127;
    sub_117 = sub_118;
  } else {
    v_15 = sub_118;
    sub_117 = sub_127;
  };
  if (controller_ck_16_1) {
    sub_116 = v_15;
  } else {
    sub_116 = sub_117;
  };
  if (controller_worker) {
    v_25 = sub_116;
    sub_99 = sub_100;
  } else {
    v_25 = sub_100;
    sub_99 = sub_116;
  };
  if (controller_ck_14_1) {
    sub_98 = v_25;
  } else {
    sub_98 = sub_99;
  };
  if (controller_ck_26_1) {
    sub_141 = sub_110;
  } else {
    sub_141 = sub_111;
  };
  if (controller_ck_24_1) {
    sub_140 = sub_141;
    v_5 = false;
  } else {
    sub_140 = false;
    v_5 = sub_141;
  };
  if (controller_c_light_1) {
    sub_142 = v_5;
  } else {
    sub_142 = sub_140;
  };
  if (controller_light_switch) {
    v_6 = sub_140;
  } else {
    v_6 = sub_142;
  };
  if (controller_c_light_2) {
    sub_139 = v_6;
  } else {
    sub_139 = sub_142;
  };
  if (controller_cleaner) {
    v_7 = sub_139;
    sub_138 = sub_102;
  } else {
    v_7 = sub_102;
    sub_138 = sub_139;
  };
  if (controller_ck_16_1) {
    sub_137 = v_7;
  } else {
    sub_137 = sub_138;
  };
  if (controller_ck_26_1) {
    sub_147 = sub_121;
  } else {
    sub_147 = sub_122;
  };
  if (controller_ck_24_1) {
    sub_146 = sub_147;
    v_2 = false;
  } else {
    sub_146 = false;
    v_2 = sub_147;
  };
  if (controller_c_light_1) {
    sub_148 = v_2;
  } else {
    sub_148 = sub_146;
  };
  if (controller_light_switch) {
    v_3 = sub_146;
  } else {
    v_3 = sub_148;
  };
  if (controller_c_light_2) {
    sub_145 = v_3;
  } else {
    sub_145 = sub_148;
  };
  if (controller_ck_26_1) {
    sub_151 = sub_130;
  } else {
    sub_151 = sub_131;
  };
  if (controller_ck_24_1) {
    sub_150 = sub_151;
    v = false;
  } else {
    sub_150 = false;
    v = sub_151;
  };
  if (controller_c_light_1) {
    sub_152 = v;
  } else {
    sub_152 = sub_150;
  };
  if (controller_light_switch) {
    v_1 = sub_150;
  } else {
    v_1 = sub_152;
  };
  if (controller_c_light_2) {
    sub_149 = v_1;
  } else {
    sub_149 = sub_152;
  };
  if (controller_cleaner) {
    v_4 = sub_149;
    sub_144 = sub_145;
  } else {
    v_4 = sub_145;
    sub_144 = sub_149;
  };
  if (controller_ck_16_1) {
    sub_143 = v_4;
  } else {
    sub_143 = sub_144;
  };
  if (controller_worker) {
    v_8 = sub_143;
    sub_136 = sub_137;
  } else {
    v_8 = sub_137;
    sub_136 = sub_143;
  };
  if (controller_ck_14_1) {
    sub_135 = v_8;
  } else {
    sub_135 = sub_136;
  };
  if (controller_change_shift) {
    v_77 = sub_135;
    sub_97 = sub_98;
  } else {
    v_77 = sub_98;
    sub_97 = sub_135;
  };
  if (controller_ck_1) {
    v_78 = v_77;
  } else {
    v_78 = sub_97;
  };
  if (p_controller_c_blind_2) {
    sub_0 = v_78;
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
  sub_17 = false;
  sub_16 = sub_17;
  if (controller_c_air_1) {
    sub_15 = false;
  } else {
    sub_15 = sub_16;
  };
  if (controller_v_111) {
    v_140 = sub_15;
  } else {
    v_140 = false;
  };
  if (controller_c_air_2) {
    sub_14 = sub_15;
  } else {
    sub_14 = v_140;
  };
  if (controller_c_air_1) {
    sub_18 = sub_16;
  } else {
    sub_18 = false;
  };
  if (controller_v_111) {
    v_141 = sub_18;
  } else {
    v_141 = false;
  };
  if (controller_c_air_2) {
    v_142 = false;
  } else {
    v_142 = v_141;
  };
  if (controller_v_112) {
    sub_13 = v_142;
  } else {
    sub_13 = sub_14;
  };
  if (controller_ck_18_1) {
    v_144 = false;
    v_143 = sub_13;
  } else {
    v_144 = sub_13;
    v_143 = false;
  };
  if (controller_c_pc) {
    v_145 = v_143;
  } else {
    v_145 = v_144;
  };
  if (controller_c_closet) {
    sub_12 = v_145;
  } else {
    sub_12 = false;
  };
  sub_11 = sub_12;
  sub_25 = true;
  sub_24 = sub_25;
  if (controller_c_air_1) {
    sub_23 = false;
  } else {
    sub_23 = sub_24;
  };
  if (controller_v_111) {
    v_134 = sub_23;
  } else {
    v_134 = false;
  };
  if (controller_c_air_2) {
    sub_22 = sub_23;
  } else {
    sub_22 = v_134;
  };
  if (controller_c_air_1) {
    sub_26 = sub_24;
  } else {
    sub_26 = false;
  };
  if (controller_v_111) {
    v_135 = sub_26;
  } else {
    v_135 = false;
  };
  if (controller_c_air_2) {
    v_136 = false;
  } else {
    v_136 = v_135;
  };
  if (controller_v_112) {
    sub_21 = v_136;
  } else {
    sub_21 = sub_22;
  };
  if (controller_ck_18_1) {
    v_138 = false;
    v_137 = sub_21;
  } else {
    v_138 = sub_21;
    v_137 = false;
  };
  if (controller_c_pc) {
    v_139 = v_137;
  } else {
    v_139 = v_138;
  };
  if (controller_c_closet) {
    sub_20 = v_139;
  } else {
    sub_20 = false;
  };
  sub_19 = sub_20;
  if (controller_ck_26_1) {
    sub_10 = sub_19;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_33 = sub_24;
  sub_32 = sub_33;
  if (controller_c_closet) {
    sub_31 = false;
  } else {
    sub_31 = sub_32;
  };
  sub_30 = sub_31;
  sub_37 = sub_16;
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
  if (controller_v_111) {
    v_128 = false;
    v_127 = sub_18;
  } else {
    v_128 = sub_37;
    v_127 = sub_37;
  };
  if (controller_c_air_2) {
    v_129 = v_127;
  } else {
    v_129 = v_128;
  };
  if (controller_v_111) {
    v_126 = sub_18;
  } else {
    v_126 = sub_15;
  };
  if (controller_c_air_2) {
    sub_41 = false;
  } else {
    sub_41 = v_126;
  };
  if (controller_v_112) {
    sub_40 = v_129;
  } else {
    sub_40 = sub_41;
  };
  if (controller_ck_18_1) {
    v_131 = sub_40;
    v_130 = sub_36;
  } else {
    v_131 = sub_36;
    v_130 = sub_40;
  };
  if (controller_c_pc) {
    v_132 = v_130;
  } else {
    v_132 = v_131;
  };
  if (controller_c_closet) {
    sub_39 = false;
  } else {
    sub_39 = v_132;
  };
  sub_38 = sub_39;
  if (controller_ck_24_1) {
    sub_28 = sub_38;
    v_125 = sub_29;
  } else {
    sub_28 = sub_29;
    v_125 = sub_38;
  };
  if (controller_c_light_1) {
    sub_42 = v_125;
  } else {
    sub_42 = sub_28;
  };
  if (controller_light_switch) {
    v_133 = sub_28;
  } else {
    v_133 = sub_42;
  };
  if (controller_c_light_2) {
    sub_27 = v_133;
  } else {
    sub_27 = sub_42;
  };
  if (controller_cleaner) {
    v_146 = sub_27;
    sub_6 = sub_7;
  } else {
    v_146 = sub_7;
    sub_6 = sub_27;
  };
  if (controller_ck_16_1) {
    sub_5 = v_146;
  } else {
    sub_5 = sub_6;
  };
  if (controller_ck_18_1) {
    v_122 = sub_32;
    v_121 = false;
  } else {
    v_122 = false;
    v_121 = sub_32;
  };
  if (controller_c_pc) {
    sub_50 = v_121;
  } else {
    sub_50 = v_122;
  };
  sub_49 = sub_50;
  sub_48 = sub_49;
  if (controller_ck_18_1) {
    v_120 = sub_36;
    v_119 = false;
  } else {
    v_120 = false;
    v_119 = sub_36;
  };
  if (controller_c_pc) {
    sub_53 = v_119;
  } else {
    sub_53 = v_120;
  };
  sub_52 = sub_53;
  sub_51 = sub_52;
  if (controller_ck_26_1) {
    sub_47 = sub_51;
  } else {
    sub_47 = sub_48;
  };
  if (controller_ck_18_1) {
    v_118 = sub_40;
    v_117 = false;
  } else {
    v_118 = false;
    v_117 = sub_40;
  };
  if (controller_c_pc) {
    sub_56 = v_117;
  } else {
    sub_56 = v_118;
  };
  sub_55 = sub_56;
  sub_54 = sub_55;
  if (controller_ck_24_1) {
    sub_46 = sub_54;
    v_116 = sub_47;
  } else {
    sub_46 = sub_47;
    v_116 = sub_54;
  };
  if (controller_c_light_1) {
    sub_57 = v_116;
  } else {
    sub_57 = sub_46;
  };
  if (controller_light_switch) {
    v_123 = sub_46;
  } else {
    v_123 = sub_57;
  };
  if (controller_c_light_2) {
    sub_45 = v_123;
  } else {
    sub_45 = sub_57;
  };
  if (controller_v_111) {
    v_111 = false;
    v_110 = sub_26;
  } else {
    v_111 = sub_33;
    v_110 = sub_33;
  };
  if (controller_c_air_2) {
    v_112 = v_110;
  } else {
    v_112 = v_111;
  };
  if (controller_v_111) {
    v_109 = sub_26;
  } else {
    v_109 = sub_23;
  };
  if (controller_c_air_2) {
    sub_65 = false;
  } else {
    sub_65 = v_109;
  };
  if (controller_v_112) {
    sub_64 = v_112;
  } else {
    sub_64 = sub_65;
  };
  if (controller_ck_18_1) {
    v_114 = sub_64;
    v_113 = false;
  } else {
    v_114 = false;
    v_113 = sub_64;
  };
  if (controller_c_pc) {
    sub_63 = v_113;
  } else {
    sub_63 = v_114;
  };
  if (controller_c_closet) {
    sub_62 = false;
  } else {
    sub_62 = sub_63;
  };
  sub_61 = sub_62;
  if (controller_c_closet) {
    sub_67 = false;
  } else {
    sub_67 = sub_56;
  };
  sub_66 = sub_67;
  if (controller_ck_26_1) {
    sub_60 = sub_66;
  } else {
    sub_60 = sub_61;
  };
  if (controller_ck_24_1) {
    sub_59 = sub_66;
    v_108 = sub_60;
  } else {
    sub_59 = sub_60;
    v_108 = sub_66;
  };
  if (controller_c_light_1) {
    sub_68 = v_108;
  } else {
    sub_68 = sub_59;
  };
  if (controller_light_switch) {
    v_115 = sub_59;
  } else {
    v_115 = sub_68;
  };
  if (controller_c_light_2) {
    sub_58 = v_115;
  } else {
    sub_58 = sub_68;
  };
  if (controller_cleaner) {
    v_124 = sub_58;
    sub_44 = sub_45;
  } else {
    v_124 = sub_45;
    sub_44 = sub_58;
  };
  if (controller_ck_16_1) {
    sub_43 = v_124;
  } else {
    sub_43 = sub_44;
  };
  if (controller_worker) {
    v_147 = sub_43;
    sub_4 = sub_5;
  } else {
    v_147 = sub_5;
    sub_4 = sub_43;
  };
  if (controller_ck_14_1) {
    sub_3 = v_147;
  } else {
    sub_3 = sub_4;
  };
  if (controller_ck_26_1) {
    sub_75 = sub_30;
  } else {
    sub_75 = sub_34;
  };
  if (controller_ck_24_1) {
    sub_74 = sub_75;
    v_104 = false;
  } else {
    sub_74 = false;
    v_104 = sub_75;
  };
  if (controller_c_light_1) {
    sub_76 = v_104;
  } else {
    sub_76 = sub_74;
  };
  if (controller_light_switch) {
    v_105 = sub_74;
  } else {
    v_105 = sub_76;
  };
  if (controller_c_light_2) {
    sub_73 = v_105;
  } else {
    sub_73 = sub_76;
  };
  if (controller_cleaner) {
    v_106 = sub_73;
    sub_72 = sub_7;
  } else {
    v_106 = sub_7;
    sub_72 = sub_73;
  };
  if (controller_ck_16_1) {
    sub_71 = v_106;
  } else {
    sub_71 = sub_72;
  };
  if (controller_ck_26_1) {
    sub_81 = sub_48;
  } else {
    sub_81 = sub_51;
  };
  if (controller_ck_24_1) {
    sub_80 = sub_81;
    v_101 = false;
  } else {
    sub_80 = false;
    v_101 = sub_81;
  };
  if (controller_c_light_1) {
    sub_82 = v_101;
  } else {
    sub_82 = sub_80;
  };
  if (controller_light_switch) {
    v_102 = sub_80;
  } else {
    v_102 = sub_82;
  };
  if (controller_c_light_2) {
    sub_79 = v_102;
  } else {
    sub_79 = sub_82;
  };
  if (controller_ck_26_1) {
    sub_85 = sub_61;
  } else {
    sub_85 = sub_66;
  };
  if (controller_ck_24_1) {
    sub_84 = sub_85;
    v_99 = false;
  } else {
    sub_84 = false;
    v_99 = sub_85;
  };
  if (controller_c_light_1) {
    sub_86 = v_99;
  } else {
    sub_86 = sub_84;
  };
  if (controller_light_switch) {
    v_100 = sub_84;
  } else {
    v_100 = sub_86;
  };
  if (controller_c_light_2) {
    sub_83 = v_100;
  } else {
    sub_83 = sub_86;
  };
  if (controller_cleaner) {
    v_103 = sub_83;
    sub_78 = sub_79;
  } else {
    v_103 = sub_79;
    sub_78 = sub_83;
  };
  if (controller_ck_16_1) {
    sub_77 = v_103;
  } else {
    sub_77 = sub_78;
  };
  if (controller_worker) {
    v_107 = sub_77;
    sub_70 = sub_71;
  } else {
    v_107 = sub_71;
    sub_70 = sub_77;
  };
  if (controller_ck_14_1) {
    sub_69 = v_107;
  } else {
    sub_69 = sub_70;
  };
  if (controller_change_shift) {
    v_148 = sub_69;
    sub_2 = sub_3;
  } else {
    v_148 = sub_3;
    sub_2 = sub_69;
  };
  if (controller_ck_1) {
    sub_1 = v_148;
  } else {
    sub_1 = sub_2;
  };
  if (controller_blind_switch) {
    sub_96 = sub_20;
  } else {
    sub_96 = sub_12;
  };
  if (controller_ck_26_1) {
    sub_95 = sub_19;
  } else {
    sub_95 = sub_96;
  };
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  if (controller_blind_switch) {
    sub_100 = sub_31;
  } else {
    sub_100 = sub_35;
  };
  if (controller_ck_26_1) {
    sub_99 = sub_100;
  } else {
    sub_99 = sub_30;
  };
  if (controller_ck_18_1) {
    v_94 = sub_64;
    v_93 = sub_32;
  } else {
    v_94 = sub_32;
    v_93 = sub_64;
  };
  if (controller_c_pc) {
    v_95 = v_93;
  } else {
    v_95 = v_94;
  };
  if (controller_c_closet) {
    sub_102 = false;
  } else {
    sub_102 = v_95;
  };
  sub_101 = sub_102;
  if (controller_ck_24_1) {
    sub_98 = sub_101;
    v_92 = sub_99;
  } else {
    sub_98 = sub_99;
    v_92 = sub_101;
  };
  if (controller_c_light_1) {
    sub_103 = v_92;
  } else {
    sub_103 = sub_98;
  };
  if (controller_light_switch) {
    v_96 = sub_98;
  } else {
    v_96 = sub_103;
  };
  if (controller_c_light_2) {
    sub_97 = v_96;
  } else {
    sub_97 = sub_103;
  };
  if (controller_cleaner) {
    v_97 = sub_97;
    sub_91 = sub_92;
  } else {
    v_97 = sub_92;
    sub_91 = sub_97;
  };
  if (controller_ck_16_1) {
    sub_90 = v_97;
  } else {
    sub_90 = sub_91;
  };
  if (controller_blind_switch) {
    sub_109 = sub_49;
  } else {
    sub_109 = sub_52;
  };
  if (controller_ck_26_1) {
    sub_108 = sub_109;
  } else {
    sub_108 = sub_48;
  };
  sub_111 = sub_63;
  sub_110 = sub_111;
  if (controller_ck_24_1) {
    sub_107 = sub_110;
    v_89 = sub_108;
  } else {
    sub_107 = sub_108;
    v_89 = sub_110;
  };
  if (controller_c_light_1) {
    sub_112 = v_89;
  } else {
    sub_112 = sub_107;
  };
  if (controller_light_switch) {
    v_90 = sub_107;
  } else {
    v_90 = sub_112;
  };
  if (controller_c_light_2) {
    sub_106 = v_90;
  } else {
    sub_106 = sub_112;
  };
  if (controller_blind_switch) {
    sub_116 = sub_62;
  } else {
    sub_116 = sub_67;
  };
  if (controller_ck_26_1) {
    sub_115 = sub_116;
  } else {
    sub_115 = sub_61;
  };
  if (controller_ck_24_1) {
    sub_114 = sub_61;
    v_87 = sub_115;
  } else {
    sub_114 = sub_115;
    v_87 = sub_61;
  };
  if (controller_c_light_1) {
    sub_117 = v_87;
  } else {
    sub_117 = sub_114;
  };
  if (controller_light_switch) {
    v_88 = sub_114;
  } else {
    v_88 = sub_117;
  };
  if (controller_c_light_2) {
    sub_113 = v_88;
  } else {
    sub_113 = sub_117;
  };
  if (controller_cleaner) {
    v_91 = sub_113;
    sub_105 = sub_106;
  } else {
    v_91 = sub_106;
    sub_105 = sub_113;
  };
  if (controller_ck_16_1) {
    sub_104 = v_91;
  } else {
    sub_104 = sub_105;
  };
  if (controller_worker) {
    v_98 = sub_104;
    sub_89 = sub_90;
  } else {
    v_98 = sub_90;
    sub_89 = sub_104;
  };
  if (controller_ck_14_1) {
    sub_88 = v_98;
  } else {
    sub_88 = sub_89;
  };
  if (controller_ck_26_1) {
    sub_124 = sub_30;
  } else {
    sub_124 = sub_100;
  };
  if (controller_ck_24_1) {
    sub_123 = sub_124;
    v_83 = false;
  } else {
    sub_123 = false;
    v_83 = sub_124;
  };
  if (controller_c_light_1) {
    sub_125 = v_83;
  } else {
    sub_125 = sub_123;
  };
  if (controller_light_switch) {
    v_84 = sub_123;
  } else {
    v_84 = sub_125;
  };
  if (controller_c_light_2) {
    sub_122 = v_84;
  } else {
    sub_122 = sub_125;
  };
  if (controller_cleaner) {
    v_85 = sub_122;
    sub_121 = sub_92;
  } else {
    v_85 = sub_92;
    sub_121 = sub_122;
  };
  if (controller_ck_16_1) {
    sub_120 = v_85;
  } else {
    sub_120 = sub_121;
  };
  if (controller_ck_26_1) {
    sub_130 = sub_48;
  } else {
    sub_130 = sub_109;
  };
  if (controller_ck_24_1) {
    sub_129 = sub_130;
    v_80 = false;
  } else {
    sub_129 = false;
    v_80 = sub_130;
  };
  if (controller_c_light_1) {
    sub_131 = v_80;
  } else {
    sub_131 = sub_129;
  };
  if (controller_light_switch) {
    v_81 = sub_129;
  } else {
    v_81 = sub_131;
  };
  if (controller_c_light_2) {
    sub_128 = v_81;
  } else {
    sub_128 = sub_131;
  };
  if (controller_ck_26_1) {
    sub_134 = sub_61;
  } else {
    sub_134 = sub_116;
  };
  if (controller_ck_24_1) {
    sub_133 = sub_134;
    v = false;
  } else {
    sub_133 = false;
    v = sub_134;
  };
  if (controller_c_light_1) {
    sub_135 = v;
  } else {
    sub_135 = sub_133;
  };
  if (controller_light_switch) {
    v_79 = sub_133;
  } else {
    v_79 = sub_135;
  };
  if (controller_c_light_2) {
    sub_132 = v_79;
  } else {
    sub_132 = sub_135;
  };
  if (controller_cleaner) {
    v_82 = sub_132;
    sub_127 = sub_128;
  } else {
    v_82 = sub_128;
    sub_127 = sub_132;
  };
  if (controller_ck_16_1) {
    sub_126 = v_82;
  } else {
    sub_126 = sub_127;
  };
  if (controller_worker) {
    v_86 = sub_126;
    sub_119 = sub_120;
  } else {
    v_86 = sub_120;
    sub_119 = sub_126;
  };
  if (controller_ck_14_1) {
    sub_118 = v_86;
  } else {
    sub_118 = sub_119;
  };
  if (controller_change_shift) {
    v_149 = sub_118;
    sub_87 = sub_88;
  } else {
    v_149 = sub_88;
    sub_87 = sub_118;
  };
  if (controller_ck_1) {
    v_150 = v_149;
  } else {
    v_150 = sub_87;
  };
  if (p_controller_c_blind_1) {
    sub_0 = v_150;
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
  sub_15 = false;
  sub_14 = sub_15;
  sub_17 = true;
  sub_16 = sub_17;
  if (p_controller_c_light_2) {
    sub_13 = sub_16;
  } else {
    sub_13 = sub_14;
  };
  if (controller_c_air_1) {
    sub_12 = false;
  } else {
    sub_12 = sub_13;
  };
  if (controller_v_111) {
    v_221 = sub_12;
  } else {
    v_221 = false;
  };
  if (controller_c_air_2) {
    sub_11 = sub_12;
  } else {
    sub_11 = v_221;
  };
  if (controller_c_air_1) {
    sub_18 = sub_13;
  } else {
    sub_18 = false;
  };
  if (controller_v_111) {
    v_222 = sub_18;
  } else {
    v_222 = false;
  };
  if (controller_c_air_2) {
    v_223 = false;
  } else {
    v_223 = v_222;
  };
  if (controller_v_112) {
    sub_10 = v_223;
  } else {
    sub_10 = sub_11;
  };
  if (controller_ck_18_1) {
    v_225 = false;
    v_224 = sub_10;
  } else {
    v_225 = sub_10;
    v_224 = false;
  };
  if (controller_c_pc) {
    v_226 = v_224;
  } else {
    v_226 = v_225;
  };
  if (controller_c_closet) {
    sub_9 = v_226;
  } else {
    sub_9 = false;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_24 = sub_16;
  if (controller_c_air_1) {
    sub_25 = sub_16;
    sub_26 = sub_13;
  } else {
    sub_25 = sub_13;
    sub_26 = sub_16;
  };
  if (controller_v_111) {
    v_210 = sub_26;
  } else {
    v_210 = sub_25;
  };
  if (controller_c_air_2) {
    sub_23 = sub_24;
  } else {
    sub_23 = v_210;
  };
  sub_27 = sub_13;
  if (controller_v_111) {
    v_212 = sub_24;
    v_211 = sub_26;
  } else {
    v_212 = sub_27;
    v_211 = sub_27;
  };
  if (controller_c_air_2) {
    v_213 = v_211;
  } else {
    v_213 = v_212;
  };
  if (controller_v_112) {
    sub_22 = v_213;
  } else {
    sub_22 = sub_23;
  };
  sub_28 = sub_27;
  if (controller_ck_18_1) {
    v_215 = sub_22;
    v_214 = sub_28;
  } else {
    v_215 = sub_28;
    v_214 = sub_22;
  };
  if (controller_c_pc) {
    v_216 = v_214;
  } else {
    v_216 = v_215;
  };
  if (controller_c_closet) {
    sub_21 = false;
  } else {
    sub_21 = v_216;
  };
  sub_20 = sub_21;
  sub_32 = sub_14;
  if (controller_v_111) {
    v_205 = sub_32;
  } else {
    v_205 = sub_27;
  };
  if (controller_c_air_1) {
    sub_33 = sub_14;
    sub_34 = sub_13;
  } else {
    sub_33 = sub_13;
    sub_34 = sub_14;
  };
  if (controller_v_111) {
    v_204 = sub_34;
  } else {
    v_204 = sub_27;
  };
  if (controller_c_air_2) {
    v_206 = v_204;
  } else {
    v_206 = v_205;
  };
  if (controller_v_111) {
    v_203 = sub_34;
  } else {
    v_203 = sub_33;
  };
  if (controller_c_air_2) {
    sub_31 = sub_32;
  } else {
    sub_31 = v_203;
  };
  if (controller_v_112) {
    sub_30 = v_206;
  } else {
    sub_30 = sub_31;
  };
  if (controller_ck_18_1) {
    v_208 = sub_30;
    v_207 = sub_28;
  } else {
    v_208 = sub_28;
    v_207 = sub_30;
  };
  if (controller_c_pc) {
    v_209 = v_207;
  } else {
    v_209 = v_208;
  };
  if (controller_c_closet) {
    sub_29 = false;
  } else {
    sub_29 = v_209;
  };
  if (controller_ck_24_1) {
    v_217 = sub_29;
  } else {
    v_217 = sub_20;
  };
  if (controller_c_closet) {
    sub_37 = false;
  } else {
    sub_37 = sub_28;
  };
  sub_36 = sub_37;
  if (controller_v_111) {
    v_198 = false;
    v_197 = sub_18;
  } else {
    v_198 = sub_27;
    v_197 = sub_27;
  };
  if (controller_c_air_2) {
    v_199 = v_197;
  } else {
    v_199 = v_198;
  };
  if (controller_v_111) {
    v_196 = sub_18;
  } else {
    v_196 = sub_12;
  };
  if (controller_c_air_2) {
    sub_41 = false;
  } else {
    sub_41 = v_196;
  };
  if (controller_v_112) {
    sub_40 = v_199;
  } else {
    sub_40 = sub_41;
  };
  if (controller_ck_18_1) {
    v_201 = sub_40;
    v_200 = sub_28;
  } else {
    v_201 = sub_28;
    v_200 = sub_40;
  };
  if (controller_c_pc) {
    v_202 = v_200;
  } else {
    v_202 = v_201;
  };
  if (controller_c_closet) {
    sub_39 = false;
  } else {
    sub_39 = v_202;
  };
  sub_38 = sub_39;
  if (controller_ck_24_1) {
    v_219 = sub_36;
    sub_35 = sub_38;
  } else {
    v_219 = sub_38;
    sub_35 = sub_36;
  };
  if (controller_c_light_1) {
    v_220 = v_219;
    v_218 = v_217;
  } else {
    v_220 = sub_35;
    v_218 = sub_35;
  };
  if (controller_light_switch) {
    sub_19 = v_218;
  } else {
    sub_19 = v_220;
  };
  if (controller_cleaner) {
    v_227 = sub_19;
    sub_5 = sub_6;
  } else {
    v_227 = sub_6;
    sub_5 = sub_19;
  };
  if (controller_ck_16_1) {
    sub_4 = v_227;
  } else {
    sub_4 = sub_5;
  };
  if (controller_ck_18_1) {
    v_190 = sub_22;
    v_189 = false;
  } else {
    v_190 = false;
    v_189 = sub_22;
  };
  if (controller_c_pc) {
    sub_47 = v_189;
  } else {
    sub_47 = v_190;
  };
  sub_46 = sub_47;
  sub_45 = sub_46;
  if (controller_ck_18_1) {
    v_188 = sub_30;
    v_187 = false;
  } else {
    v_188 = false;
    v_187 = sub_30;
  };
  if (controller_c_pc) {
    sub_49 = v_187;
  } else {
    sub_49 = v_188;
  };
  sub_48 = sub_49;
  if (controller_ck_24_1) {
    v_191 = sub_48;
  } else {
    v_191 = sub_45;
  };
  if (controller_ck_18_1) {
    v_186 = sub_28;
    v_185 = false;
  } else {
    v_186 = false;
    v_185 = sub_28;
  };
  if (controller_c_pc) {
    sub_53 = v_185;
  } else {
    sub_53 = v_186;
  };
  sub_52 = sub_53;
  sub_51 = sub_52;
  if (controller_ck_18_1) {
    v_184 = sub_40;
    v_183 = false;
  } else {
    v_184 = false;
    v_183 = sub_40;
  };
  if (controller_c_pc) {
    sub_56 = v_183;
  } else {
    sub_56 = v_184;
  };
  sub_55 = sub_56;
  sub_54 = sub_55;
  if (controller_ck_24_1) {
    v_193 = sub_51;
    sub_50 = sub_54;
  } else {
    v_193 = sub_54;
    sub_50 = sub_51;
  };
  if (controller_c_light_1) {
    v_194 = v_193;
    v_192 = v_191;
  } else {
    v_194 = sub_50;
    v_192 = sub_50;
  };
  if (controller_light_switch) {
    sub_44 = v_192;
  } else {
    sub_44 = v_194;
  };
  if (controller_c_closet) {
    sub_60 = false;
  } else {
    sub_60 = sub_56;
  };
  sub_59 = sub_60;
  sub_58 = sub_59;
  sub_57 = sub_58;
  if (controller_cleaner) {
    v_195 = sub_57;
    sub_43 = sub_44;
  } else {
    v_195 = sub_44;
    sub_43 = sub_57;
  };
  if (controller_ck_16_1) {
    sub_42 = v_195;
  } else {
    sub_42 = sub_43;
  };
  if (controller_worker) {
    v_228 = sub_42;
    sub_3 = sub_4;
  } else {
    v_228 = sub_4;
    sub_3 = sub_42;
  };
  if (controller_ck_14_1) {
    sub_2 = v_228;
  } else {
    sub_2 = sub_3;
  };
  if (controller_ck_24_1) {
    v_179 = false;
  } else {
    v_179 = sub_36;
  };
  sub_68 = sub_32;
  if (controller_c_closet) {
    sub_67 = false;
  } else {
    sub_67 = sub_68;
  };
  sub_66 = sub_67;
  sub_70 = sub_24;
  if (controller_c_closet) {
    sub_69 = false;
  } else {
    sub_69 = sub_70;
  };
  if (controller_ck_24_1) {
    v_177 = sub_69;
    sub_71 = sub_36;
  } else {
    v_177 = sub_66;
    sub_71 = false;
  };
  if (controller_c_light_1) {
    v_180 = v_179;
    v_178 = v_177;
  } else {
    v_180 = sub_71;
    v_178 = sub_71;
  };
  if (controller_light_switch) {
    sub_65 = v_178;
  } else {
    sub_65 = v_180;
  };
  if (controller_cleaner) {
    v_181 = sub_65;
    sub_64 = sub_6;
  } else {
    v_181 = sub_6;
    sub_64 = sub_65;
  };
  if (controller_ck_16_1) {
    sub_63 = v_181;
  } else {
    sub_63 = sub_64;
  };
  if (controller_ck_24_1) {
    v_174 = false;
  } else {
    v_174 = sub_51;
  };
  if (controller_ck_18_1) {
    v_171 = sub_68;
    v_170 = false;
  } else {
    v_171 = false;
    v_170 = sub_68;
  };
  if (controller_c_pc) {
    sub_77 = v_170;
  } else {
    sub_77 = v_171;
  };
  sub_76 = sub_77;
  sub_75 = sub_76;
  if (controller_ck_18_1) {
    v_169 = sub_70;
    v_168 = false;
  } else {
    v_169 = false;
    v_168 = sub_70;
  };
  if (controller_c_pc) {
    sub_79 = v_168;
  } else {
    sub_79 = v_169;
  };
  sub_78 = sub_79;
  if (controller_ck_24_1) {
    v_172 = sub_78;
    sub_80 = sub_51;
  } else {
    v_172 = sub_75;
    sub_80 = false;
  };
  if (controller_c_light_1) {
    v_175 = v_174;
    v_173 = v_172;
  } else {
    v_175 = sub_80;
    v_173 = sub_80;
  };
  if (controller_light_switch) {
    sub_74 = v_173;
  } else {
    sub_74 = v_175;
  };
  if (controller_ck_24_1) {
    v_166 = false;
  } else {
    v_166 = sub_59;
  };
  if (controller_v_111) {
    v_159 = false;
  } else {
    v_159 = sub_32;
  };
  if (controller_c_air_1) {
    sub_86 = false;
    sub_87 = sub_14;
  } else {
    sub_86 = sub_14;
    sub_87 = false;
  };
  if (controller_v_111) {
    v_158 = sub_87;
  } else {
    v_158 = sub_32;
  };
  if (controller_c_air_2) {
    v_160 = v_158;
  } else {
    v_160 = v_159;
  };
  if (controller_v_111) {
    v_157 = sub_87;
  } else {
    v_157 = sub_86;
  };
  if (controller_c_air_2) {
    sub_85 = false;
  } else {
    sub_85 = v_157;
  };
  if (controller_v_112) {
    sub_84 = v_160;
  } else {
    sub_84 = sub_85;
  };
  if (controller_ck_18_1) {
    v_162 = sub_84;
    v_161 = false;
  } else {
    v_162 = false;
    v_161 = sub_84;
  };
  if (controller_c_pc) {
    v_163 = v_161;
  } else {
    v_163 = v_162;
  };
  if (controller_c_closet) {
    sub_83 = false;
  } else {
    sub_83 = v_163;
  };
  sub_82 = sub_83;
  if (controller_v_111) {
    v_152 = false;
  } else {
    v_152 = sub_24;
  };
  if (controller_c_air_1) {
    sub_91 = false;
    sub_92 = sub_16;
  } else {
    sub_91 = sub_16;
    sub_92 = false;
  };
  if (controller_v_111) {
    v_151 = sub_92;
  } else {
    v_151 = sub_24;
  };
  if (controller_c_air_2) {
    v_153 = v_151;
  } else {
    v_153 = v_152;
  };
  if (controller_v_111) {
    v = sub_92;
  } else {
    v = sub_91;
  };
  if (controller_c_air_2) {
    sub_90 = false;
  } else {
    sub_90 = v;
  };
  if (controller_v_112) {
    sub_89 = v_153;
  } else {
    sub_89 = sub_90;
  };
  if (controller_ck_18_1) {
    v_155 = sub_89;
    v_154 = false;
  } else {
    v_155 = false;
    v_154 = sub_89;
  };
  if (controller_c_pc) {
    v_156 = v_154;
  } else {
    v_156 = v_155;
  };
  if (controller_c_closet) {
    sub_88 = false;
  } else {
    sub_88 = v_156;
  };
  if (controller_ck_24_1) {
    v_164 = sub_88;
    sub_93 = sub_59;
  } else {
    v_164 = sub_82;
    sub_93 = false;
  };
  if (controller_c_light_1) {
    v_167 = v_166;
    v_165 = v_164;
  } else {
    v_167 = sub_93;
    v_165 = sub_93;
  };
  if (controller_light_switch) {
    sub_81 = v_165;
  } else {
    sub_81 = v_167;
  };
  if (controller_cleaner) {
    v_176 = sub_81;
    sub_73 = sub_74;
  } else {
    v_176 = sub_74;
    sub_73 = sub_81;
  };
  if (controller_ck_16_1) {
    sub_72 = v_176;
  } else {
    sub_72 = sub_73;
  };
  if (controller_worker) {
    v_182 = sub_72;
    sub_62 = sub_63;
  } else {
    v_182 = sub_63;
    sub_62 = sub_72;
  };
  if (controller_ck_14_1) {
    sub_61 = v_182;
  } else {
    sub_61 = sub_62;
  };
  if (controller_change_shift) {
    v_229 = sub_61;
    sub_1 = sub_2;
  } else {
    v_229 = sub_2;
    sub_1 = sub_61;
  };
  if (controller_ck_1) {
    sub_0 = v_229;
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
  sub_14 = false;
  sub_13 = sub_14;
  if (controller_c_air_1) {
    sub_12 = false;
  } else {
    sub_12 = sub_13;
  };
  if (controller_v_111) {
    v_283 = sub_12;
  } else {
    v_283 = false;
  };
  if (controller_c_air_2) {
    sub_11 = sub_12;
  } else {
    sub_11 = v_283;
  };
  if (controller_c_air_1) {
    sub_15 = sub_13;
  } else {
    sub_15 = false;
  };
  if (controller_v_111) {
    v_284 = sub_15;
  } else {
    v_284 = false;
  };
  if (controller_c_air_2) {
    v_285 = false;
  } else {
    v_285 = v_284;
  };
  if (controller_v_112) {
    sub_10 = v_285;
  } else {
    sub_10 = sub_11;
  };
  if (controller_ck_18_1) {
    v_287 = false;
    v_286 = sub_10;
  } else {
    v_287 = sub_10;
    v_286 = false;
  };
  if (controller_c_pc) {
    v_288 = v_286;
  } else {
    v_288 = v_287;
  };
  if (controller_c_closet) {
    sub_9 = v_288;
  } else {
    sub_9 = false;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_21 = sub_13;
  sub_20 = sub_21;
  if (controller_c_closet) {
    sub_19 = false;
  } else {
    sub_19 = sub_20;
  };
  sub_18 = sub_19;
  sub_27 = true;
  sub_26 = sub_27;
  sub_25 = sub_26;
  if (controller_v_111) {
    v_278 = sub_25;
  } else {
    v_278 = sub_21;
  };
  if (controller_c_air_1) {
    sub_28 = sub_26;
    sub_29 = sub_13;
  } else {
    sub_28 = sub_13;
    sub_29 = sub_26;
  };
  if (controller_v_111) {
    v_277 = sub_29;
  } else {
    v_277 = sub_21;
  };
  if (controller_c_air_2) {
    v_279 = v_277;
  } else {
    v_279 = v_278;
  };
  if (controller_v_111) {
    v_276 = sub_29;
  } else {
    v_276 = sub_28;
  };
  if (controller_c_air_2) {
    sub_24 = sub_25;
  } else {
    sub_24 = v_276;
  };
  if (controller_v_112) {
    sub_23 = v_279;
  } else {
    sub_23 = sub_24;
  };
  if (controller_ck_18_1) {
    v_281 = sub_23;
    v_280 = sub_20;
  } else {
    v_281 = sub_20;
    v_280 = sub_23;
  };
  if (controller_c_pc) {
    v_282 = v_280;
  } else {
    v_282 = v_281;
  };
  if (controller_c_closet) {
    sub_22 = false;
  } else {
    sub_22 = v_282;
  };
  if (controller_ck_24_1) {
    sub_17 = sub_22;
  } else {
    sub_17 = sub_18;
  };
  sub_16 = sub_17;
  if (controller_cleaner) {
    v_289 = sub_16;
    sub_6 = sub_7;
  } else {
    v_289 = sub_7;
    sub_6 = sub_16;
  };
  if (controller_ck_16_1) {
    sub_5 = v_289;
  } else {
    sub_5 = sub_6;
  };
  if (controller_ck_18_1) {
    v_274 = sub_20;
    v_273 = false;
  } else {
    v_274 = false;
    v_273 = sub_20;
  };
  if (controller_c_pc) {
    sub_36 = v_273;
  } else {
    sub_36 = v_274;
  };
  sub_35 = sub_36;
  sub_34 = sub_35;
  if (controller_ck_18_1) {
    v_272 = sub_23;
    v_271 = false;
  } else {
    v_272 = false;
    v_271 = sub_23;
  };
  if (controller_c_pc) {
    sub_38 = v_271;
  } else {
    sub_38 = v_272;
  };
  sub_37 = sub_38;
  if (controller_ck_24_1) {
    sub_33 = sub_37;
  } else {
    sub_33 = sub_34;
  };
  sub_32 = sub_33;
  if (controller_v_111) {
    v_266 = false;
    v_265 = sub_15;
  } else {
    v_266 = sub_21;
    v_265 = sub_21;
  };
  if (controller_c_air_2) {
    v_267 = v_265;
  } else {
    v_267 = v_266;
  };
  if (controller_v_111) {
    v_264 = sub_15;
  } else {
    v_264 = sub_12;
  };
  if (controller_c_air_2) {
    sub_43 = false;
  } else {
    sub_43 = v_264;
  };
  if (controller_v_112) {
    sub_42 = v_267;
  } else {
    sub_42 = sub_43;
  };
  if (controller_ck_18_1) {
    v_269 = sub_42;
    v_268 = false;
  } else {
    v_269 = false;
    v_268 = sub_42;
  };
  if (controller_c_pc) {
    v_270 = v_268;
  } else {
    v_270 = v_269;
  };
  if (controller_c_closet) {
    sub_41 = false;
  } else {
    sub_41 = v_270;
  };
  sub_40 = sub_41;
  sub_39 = sub_40;
  if (controller_cleaner) {
    v_275 = sub_39;
    sub_31 = sub_32;
  } else {
    v_275 = sub_32;
    sub_31 = sub_39;
  };
  if (controller_ck_16_1) {
    sub_30 = v_275;
  } else {
    sub_30 = sub_31;
  };
  if (controller_worker) {
    v_290 = sub_30;
    sub_4 = sub_5;
  } else {
    v_290 = sub_5;
    sub_4 = sub_30;
  };
  if (controller_ck_14_1) {
    sub_3 = v_290;
  } else {
    sub_3 = sub_4;
  };
  sub_52 = sub_25;
  if (controller_c_closet) {
    sub_51 = false;
  } else {
    sub_51 = sub_52;
  };
  sub_50 = sub_51;
  if (controller_ck_24_1) {
    sub_49 = sub_18;
  } else {
    sub_49 = sub_50;
  };
  sub_48 = sub_49;
  if (controller_cleaner) {
    v_262 = sub_48;
    sub_47 = sub_7;
  } else {
    v_262 = sub_7;
    sub_47 = sub_48;
  };
  if (controller_ck_16_1) {
    sub_46 = v_262;
  } else {
    sub_46 = sub_47;
  };
  if (controller_ck_18_1) {
    v_260 = sub_52;
    v_259 = false;
  } else {
    v_260 = false;
    v_259 = sub_52;
  };
  if (controller_c_pc) {
    sub_59 = v_259;
  } else {
    sub_59 = v_260;
  };
  sub_58 = sub_59;
  sub_57 = sub_58;
  if (controller_ck_24_1) {
    sub_56 = sub_34;
  } else {
    sub_56 = sub_57;
  };
  sub_55 = sub_56;
  if (controller_v_111) {
    v_254 = false;
  } else {
    v_254 = sub_25;
  };
  if (controller_c_air_1) {
    sub_66 = false;
    sub_67 = sub_26;
  } else {
    sub_66 = sub_26;
    sub_67 = false;
  };
  if (controller_v_111) {
    v_253 = sub_67;
  } else {
    v_253 = sub_25;
  };
  if (controller_c_air_2) {
    v_255 = v_253;
  } else {
    v_255 = v_254;
  };
  if (controller_v_111) {
    v_252 = sub_67;
  } else {
    v_252 = sub_66;
  };
  if (controller_c_air_2) {
    sub_65 = false;
  } else {
    sub_65 = v_252;
  };
  if (controller_v_112) {
    sub_64 = v_255;
  } else {
    sub_64 = sub_65;
  };
  if (controller_ck_18_1) {
    v_257 = sub_64;
    v_256 = false;
  } else {
    v_257 = false;
    v_256 = sub_64;
  };
  if (controller_c_pc) {
    v_258 = v_256;
  } else {
    v_258 = v_257;
  };
  if (controller_c_closet) {
    sub_63 = false;
  } else {
    sub_63 = v_258;
  };
  sub_62 = sub_63;
  if (controller_ck_24_1) {
    sub_61 = sub_40;
  } else {
    sub_61 = sub_62;
  };
  sub_60 = sub_61;
  if (controller_cleaner) {
    v_261 = sub_60;
    sub_54 = sub_55;
  } else {
    v_261 = sub_55;
    sub_54 = sub_60;
  };
  if (controller_ck_16_1) {
    sub_53 = v_261;
  } else {
    sub_53 = sub_54;
  };
  if (controller_worker) {
    v_263 = sub_53;
    sub_45 = sub_46;
  } else {
    v_263 = sub_46;
    sub_45 = sub_53;
  };
  if (controller_ck_14_1) {
    sub_44 = v_263;
  } else {
    sub_44 = sub_45;
  };
  if (controller_change_shift) {
    v_291 = sub_44;
    sub_2 = sub_3;
  } else {
    v_291 = sub_3;
    sub_2 = sub_44;
  };
  if (controller_ck_1) {
    sub_1 = v_291;
  } else {
    sub_1 = sub_2;
  };
  if (controller_v_111) {
    v_245 = sub_67;
  } else {
    v_245 = false;
  };
  if (controller_c_air_2) {
    v_246 = false;
  } else {
    v_246 = v_245;
  };
  if (controller_v_111) {
    v_244 = sub_66;
  } else {
    v_244 = false;
  };
  if (controller_c_air_2) {
    sub_77 = sub_66;
  } else {
    sub_77 = v_244;
  };
  if (controller_v_112) {
    sub_76 = v_246;
  } else {
    sub_76 = sub_77;
  };
  if (controller_ck_18_1) {
    v_248 = false;
    v_247 = sub_76;
  } else {
    v_248 = sub_76;
    v_247 = false;
  };
  if (controller_c_pc) {
    v_249 = v_247;
  } else {
    v_249 = v_248;
  };
  if (controller_c_closet) {
    sub_75 = v_249;
  } else {
    sub_75 = false;
  };
  sub_74 = sub_75;
  sub_73 = sub_74;
  if (controller_v_111) {
    v_238 = sub_21;
    v_237 = sub_28;
  } else {
    v_238 = sub_25;
    v_237 = sub_25;
  };
  if (controller_c_air_2) {
    v_239 = v_237;
  } else {
    v_239 = v_238;
  };
  if (controller_v_111) {
    v_236 = sub_28;
  } else {
    v_236 = sub_29;
  };
  if (controller_c_air_2) {
    sub_82 = sub_21;
  } else {
    sub_82 = v_236;
  };
  if (controller_v_112) {
    sub_81 = v_239;
  } else {
    sub_81 = sub_82;
  };
  if (controller_ck_18_1) {
    v_241 = sub_81;
    v_240 = sub_52;
  } else {
    v_241 = sub_52;
    v_240 = sub_81;
  };
  if (controller_c_pc) {
    v_242 = v_240;
  } else {
    v_242 = v_241;
  };
  if (controller_c_closet) {
    sub_80 = false;
  } else {
    sub_80 = v_242;
  };
  sub_79 = sub_80;
  if (controller_ck_24_1) {
    v_243 = sub_50;
  } else {
    v_243 = sub_79;
  };
  if (controller_light_switch) {
    sub_78 = sub_50;
  } else {
    sub_78 = v_243;
  };
  if (controller_cleaner) {
    v_250 = sub_78;
    sub_72 = sub_73;
  } else {
    v_250 = sub_73;
    sub_72 = sub_78;
  };
  if (controller_ck_16_1) {
    sub_71 = v_250;
  } else {
    sub_71 = sub_72;
  };
  if (controller_ck_18_1) {
    v_233 = sub_81;
    v_232 = false;
  } else {
    v_233 = false;
    v_232 = sub_81;
  };
  if (controller_c_pc) {
    sub_88 = v_232;
  } else {
    sub_88 = v_233;
  };
  sub_87 = sub_88;
  sub_86 = sub_87;
  if (controller_ck_24_1) {
    v_234 = sub_57;
  } else {
    v_234 = sub_86;
  };
  if (controller_light_switch) {
    sub_85 = sub_57;
  } else {
    sub_85 = v_234;
  };
  sub_89 = sub_62;
  if (controller_cleaner) {
    v_235 = sub_89;
    sub_84 = sub_85;
  } else {
    v_235 = sub_85;
    sub_84 = sub_89;
  };
  if (controller_ck_16_1) {
    sub_83 = v_235;
  } else {
    sub_83 = sub_84;
  };
  if (controller_worker) {
    v_251 = sub_83;
    sub_70 = sub_71;
  } else {
    v_251 = sub_71;
    sub_70 = sub_83;
  };
  if (controller_ck_14_1) {
    sub_69 = v_251;
  } else {
    sub_69 = sub_70;
  };
  if (controller_light_switch) {
    sub_94 = sub_50;
  } else {
    sub_94 = sub_49;
  };
  if (controller_cleaner) {
    v_230 = sub_94;
    sub_93 = sub_73;
  } else {
    v_230 = sub_73;
    sub_93 = sub_94;
  };
  if (controller_ck_16_1) {
    sub_92 = v_230;
  } else {
    sub_92 = sub_93;
  };
  if (controller_light_switch) {
    sub_97 = sub_57;
    sub_98 = sub_62;
  } else {
    sub_97 = sub_56;
    sub_98 = sub_61;
  };
  if (controller_cleaner) {
    v = sub_98;
    sub_96 = sub_97;
  } else {
    v = sub_97;
    sub_96 = sub_98;
  };
  if (controller_ck_16_1) {
    sub_95 = v;
  } else {
    sub_95 = sub_96;
  };
  if (controller_worker) {
    v_231 = sub_95;
    sub_91 = sub_92;
  } else {
    v_231 = sub_92;
    sub_91 = sub_95;
  };
  if (controller_ck_14_1) {
    sub_90 = v_231;
  } else {
    sub_90 = sub_91;
  };
  if (controller_change_shift) {
    v_292 = sub_90;
    sub_68 = sub_69;
  } else {
    v_292 = sub_69;
    sub_68 = sub_90;
  };
  if (controller_ck_1) {
    v_293 = v_292;
  } else {
    v_293 = sub_68;
  };
  if (p_controller_c_light_1) {
    sub_0 = v_293;
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
  if (controller_c_air_1) {
    v_305 = sub_11;
  } else {
    v_305 = false;
  };
  if (controller_v_111) {
    v_306 = v_305;
  } else {
    v_306 = false;
  };
  if (controller_c_air_2) {
    v_307 = false;
  } else {
    v_307 = v_306;
  };
  if (controller_c_air_1) {
    sub_10 = false;
  } else {
    sub_10 = sub_11;
  };
  if (controller_v_111) {
    v_304 = sub_10;
  } else {
    v_304 = false;
  };
  if (controller_c_air_2) {
    sub_9 = sub_10;
  } else {
    sub_9 = v_304;
  };
  if (controller_v_112) {
    sub_8 = v_307;
  } else {
    sub_8 = sub_9;
  };
  if (controller_ck_18_1) {
    v_309 = false;
    v_308 = sub_8;
  } else {
    v_309 = sub_8;
    v_308 = false;
  };
  if (controller_c_pc) {
    sub_7 = v_308;
  } else {
    sub_7 = v_309;
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
    v_310 = sub_13;
    sub_4 = sub_5;
  } else {
    v_310 = sub_5;
    sub_4 = sub_13;
  };
  if (controller_ck_16_1) {
    sub_3 = v_310;
  } else {
    sub_3 = sub_4;
  };
  if (controller_ck_18_1) {
    v_302 = sub_16;
    v_301 = false;
  } else {
    v_302 = false;
    v_301 = sub_16;
  };
  if (controller_c_pc) {
    sub_25 = v_301;
  } else {
    sub_25 = v_302;
  };
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_29 = sub_11;
  sub_28 = sub_29;
  if (controller_ck_18_1) {
    v_300 = sub_28;
    v_299 = false;
  } else {
    v_300 = false;
    v_299 = sub_28;
  };
  if (controller_c_pc) {
    sub_27 = v_299;
  } else {
    sub_27 = v_300;
  };
  sub_26 = sub_27;
  if (p_controller_c_closet) {
    sub_22 = sub_26;
  } else {
    sub_22 = sub_23;
  };
  if (controller_v_111) {
    v_295 = false;
  } else {
    v_295 = sub_17;
  };
  if (controller_c_air_1) {
    sub_35 = false;
    sub_36 = sub_18;
  } else {
    sub_35 = sub_18;
    sub_36 = false;
  };
  if (controller_v_111) {
    v_294 = sub_36;
  } else {
    v_294 = sub_17;
  };
  if (controller_c_air_2) {
    v_296 = v_294;
  } else {
    v_296 = v_295;
  };
  if (controller_v_111) {
    v = sub_36;
  } else {
    v = sub_35;
  };
  if (controller_c_air_2) {
    sub_34 = false;
  } else {
    sub_34 = v;
  };
  if (controller_v_112) {
    sub_33 = v_296;
  } else {
    sub_33 = sub_34;
  };
  if (controller_ck_18_1) {
    v_298 = sub_33;
    v_297 = false;
  } else {
    v_298 = false;
    v_297 = sub_33;
  };
  if (controller_c_pc) {
    sub_32 = v_297;
  } else {
    sub_32 = v_298;
  };
  sub_31 = sub_32;
  sub_30 = sub_31;
  if (controller_cleaner) {
    v_303 = sub_30;
    sub_21 = sub_22;
  } else {
    v_303 = sub_22;
    sub_21 = sub_30;
  };
  if (controller_ck_16_1) {
    sub_20 = v_303;
  } else {
    sub_20 = sub_21;
  };
  if (controller_worker) {
    v_311 = sub_20;
    sub_2 = sub_3;
  } else {
    v_311 = sub_3;
    sub_2 = sub_20;
  };
  if (controller_ck_14_1) {
    sub_1 = v_311;
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
  sub_12 = true;
  sub_11 = sub_12;
  if (controller_c_air_1) {
    sub_10 = false;
  } else {
    sub_10 = sub_11;
  };
  sub_15 = false;
  sub_14 = sub_15;
  if (p_controller_c_air_2) {
    sub_13 = sub_11;
  } else {
    sub_13 = sub_14;
  };
  if (controller_c_air_1) {
    v_318 = false;
  } else {
    v_318 = sub_13;
  };
  if (controller_v_111) {
    sub_9 = v_318;
  } else {
    sub_9 = sub_10;
  };
  if (controller_c_air_1) {
    sub_16 = sub_14;
  } else {
    sub_16 = false;
  };
  if (controller_v_111) {
    v_319 = sub_16;
  } else {
    v_319 = false;
  };
  if (controller_v_112) {
    sub_8 = v_319;
  } else {
    sub_8 = sub_9;
  };
  if (controller_ck_18_1) {
    v_321 = false;
    v_320 = sub_8;
  } else {
    v_321 = sub_8;
    v_320 = false;
  };
  if (controller_c_pc) {
    sub_7 = v_320;
  } else {
    sub_7 = v_321;
  };
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_20 = sub_13;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  if (controller_cleaner) {
    v_322 = sub_17;
    sub_4 = sub_5;
  } else {
    v_322 = sub_5;
    sub_4 = sub_17;
  };
  if (controller_ck_16_1) {
    sub_3 = v_322;
  } else {
    sub_3 = sub_4;
  };
  if (controller_ck_18_1) {
    v_316 = sub_20;
    v_315 = false;
  } else {
    v_316 = false;
    v_315 = sub_20;
  };
  if (controller_c_pc) {
    sub_25 = v_315;
  } else {
    sub_25 = v_316;
  };
  sub_24 = sub_25;
  sub_23 = sub_24;
  if (controller_c_air_1) {
    v = sub_11;
  } else {
    v = false;
  };
  if (controller_v_111) {
    v_312 = v;
  } else {
    v_312 = sub_20;
  };
  if (controller_c_air_1) {
    sub_31 = false;
  } else {
    sub_31 = sub_14;
  };
  if (controller_v_111) {
    sub_30 = sub_16;
  } else {
    sub_30 = sub_31;
  };
  if (controller_v_112) {
    sub_29 = v_312;
  } else {
    sub_29 = sub_30;
  };
  if (controller_ck_18_1) {
    v_314 = sub_29;
    v_313 = false;
  } else {
    v_314 = false;
    v_313 = sub_29;
  };
  if (controller_c_pc) {
    sub_28 = v_313;
  } else {
    sub_28 = v_314;
  };
  sub_27 = sub_28;
  sub_26 = sub_27;
  if (controller_cleaner) {
    v_317 = sub_26;
    sub_22 = sub_23;
  } else {
    v_317 = sub_23;
    sub_22 = sub_26;
  };
  if (controller_ck_16_1) {
    sub_21 = v_317;
  } else {
    sub_21 = sub_22;
  };
  if (controller_worker) {
    v_323 = sub_21;
    sub_2 = sub_3;
  } else {
    v_323 = sub_3;
    sub_2 = sub_21;
  };
  if (controller_ck_14_1) {
    sub_1 = v_323;
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
  sub_11 = false;
  sub_10 = sub_11;
  sub_13 = true;
  sub_12 = sub_13;
  if (controller_v_111) {
    v_334 = sub_12;
  } else {
    v_334 = false;
  };
  if (controller_v_112) {
    sub_9 = v_334;
  } else {
    sub_9 = sub_10;
  };
  if (controller_ck_18_1) {
    v_336 = false;
    v_335 = sub_9;
  } else {
    v_336 = sub_9;
    v_335 = false;
  };
  if (controller_c_pc) {
    sub_8 = v_335;
  } else {
    sub_8 = v_336;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_16 = sub_10;
  sub_15 = sub_16;
  sub_14 = sub_15;
  if (controller_cleaner) {
    v_337 = sub_14;
    sub_5 = sub_6;
  } else {
    v_337 = sub_6;
    sub_5 = sub_14;
  };
  if (controller_ck_16_1) {
    sub_4 = v_337;
  } else {
    sub_4 = sub_5;
  };
  if (controller_ck_18_1) {
    v_332 = sub_10;
    v_331 = false;
  } else {
    v_332 = false;
    v_331 = sub_10;
  };
  if (controller_c_pc) {
    sub_21 = v_331;
  } else {
    sub_21 = v_332;
  };
  sub_20 = sub_21;
  sub_19 = sub_20;
  if (controller_v_111) {
    sub_25 = sub_12;
  } else {
    sub_25 = sub_10;
  };
  if (controller_ck_18_1) {
    v_330 = sub_25;
    v_329 = false;
  } else {
    v_330 = false;
    v_329 = sub_25;
  };
  if (controller_c_pc) {
    sub_24 = v_329;
  } else {
    sub_24 = v_330;
  };
  sub_23 = sub_24;
  sub_22 = sub_23;
  if (controller_cleaner) {
    v_333 = sub_22;
    sub_18 = sub_19;
  } else {
    v_333 = sub_19;
    sub_18 = sub_22;
  };
  if (controller_ck_16_1) {
    sub_17 = v_333;
  } else {
    sub_17 = sub_18;
  };
  if (controller_worker) {
    v_338 = sub_17;
    sub_3 = sub_4;
  } else {
    v_338 = sub_4;
    sub_3 = sub_17;
  };
  if (controller_ck_14_1) {
    sub_2 = v_338;
  } else {
    sub_2 = sub_3;
  };
  sub_31 = sub_12;
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (controller_cleaner) {
    v_328 = sub_29;
    sub_28 = sub_6;
  } else {
    v_328 = sub_6;
    sub_28 = sub_29;
  };
  if (controller_ck_16_1) {
    sub_27 = v_328;
  } else {
    sub_27 = sub_28;
  };
  if (controller_ck_18_1) {
    v_326 = sub_12;
    v_325 = false;
  } else {
    v_326 = false;
    v_325 = sub_12;
  };
  if (controller_c_pc) {
    sub_36 = v_325;
  } else {
    sub_36 = v_326;
  };
  sub_35 = sub_36;
  sub_34 = sub_35;
  if (controller_v_112) {
    sub_40 = sub_12;
  } else {
    sub_40 = sub_25;
  };
  if (controller_ck_18_1) {
    v_324 = sub_40;
    v = false;
  } else {
    v_324 = false;
    v = sub_40;
  };
  if (controller_c_pc) {
    sub_39 = v;
  } else {
    sub_39 = v_324;
  };
  sub_38 = sub_39;
  sub_37 = sub_38;
  if (controller_cleaner) {
    v_327 = sub_37;
    sub_33 = sub_34;
  } else {
    v_327 = sub_34;
    sub_33 = sub_37;
  };
  if (controller_ck_16_1) {
    sub_32 = v_327;
  } else {
    sub_32 = sub_33;
  };
  if (controller_worker) {
    v_339 = sub_32;
    sub_26 = sub_27;
  } else {
    v_339 = sub_27;
    sub_26 = sub_32;
  };
  if (controller_ck_14_1) {
    v_340 = v_339;
  } else {
    v_340 = sub_26;
  };
  if (p_controller_c_air_1) {
    sub_1 = v_340;
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
  sub_10 = false;
  if (controller_v_111) {
    v_349 = sub_10;
  } else {
    v_349 = false;
  };
  if (controller_v_112) {
    sub_9 = v_349;
  } else {
    sub_9 = sub_10;
  };
  if (controller_ck_18_1) {
    v_351 = false;
    v_350 = sub_9;
  } else {
    v_351 = sub_9;
    v_350 = false;
  };
  if (controller_c_pc) {
    sub_8 = v_350;
  } else {
    sub_8 = v_351;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_13 = sub_10;
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (controller_cleaner) {
    v_352 = sub_11;
    sub_5 = sub_6;
  } else {
    v_352 = sub_6;
    sub_5 = sub_11;
  };
  if (controller_ck_16_1) {
    sub_4 = v_352;
  } else {
    sub_4 = sub_5;
  };
  if (controller_ck_18_1) {
    v_348 = sub_10;
    v_347 = false;
  } else {
    v_348 = false;
    v_347 = sub_10;
  };
  if (controller_c_pc) {
    sub_17 = v_347;
  } else {
    sub_17 = v_348;
  };
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  if (controller_worker) {
    v_353 = sub_14;
    sub_3 = sub_4;
  } else {
    v_353 = sub_4;
    sub_3 = sub_14;
  };
  if (controller_ck_14_1) {
    sub_2 = v_353;
  } else {
    sub_2 = sub_3;
  };
  sub_1 = sub_2;
  sub_26 = true;
  if (controller_v_111) {
    v_342 = sub_26;
  } else {
    v_342 = false;
  };
  if (controller_v_112) {
    sub_25 = v_342;
  } else {
    sub_25 = sub_26;
  };
  if (controller_ck_18_1) {
    v_344 = false;
    v_343 = sub_25;
  } else {
    v_344 = sub_25;
    v_343 = false;
  };
  if (controller_c_pc) {
    sub_24 = v_343;
  } else {
    sub_24 = v_344;
  };
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_29 = sub_26;
  sub_28 = sub_29;
  sub_27 = sub_28;
  if (controller_cleaner) {
    v_345 = sub_27;
    sub_21 = sub_22;
  } else {
    v_345 = sub_22;
    sub_21 = sub_27;
  };
  if (controller_ck_16_1) {
    sub_20 = v_345;
  } else {
    sub_20 = sub_21;
  };
  if (controller_ck_18_1) {
    v_341 = sub_26;
    v = false;
  } else {
    v_341 = false;
    v = sub_26;
  };
  if (controller_c_pc) {
    sub_33 = v;
  } else {
    sub_33 = v_341;
  };
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  if (controller_worker) {
    v_346 = sub_30;
    sub_19 = sub_20;
  } else {
    v_346 = sub_20;
    sub_19 = sub_30;
  };
  if (controller_ck_14_1) {
    sub_18 = v_346;
  } else {
    sub_18 = sub_19;
  };
  if (p_controller_c_window) {
    sub_0 = sub_18;
  } else {
    sub_0 = sub_1;
  };
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
  
  int v_357;
  int v_356;
  int v_355;
  int v_354;
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
  sub_9 = false;
  if (controller_v_111) {
    v = sub_9;
  } else {
    v = false;
  };
  if (controller_v_112) {
    sub_8 = v;
  } else {
    sub_8 = sub_9;
  };
  sub_10 = true;
  if (controller_v_111) {
    v_354 = sub_10;
  } else {
    v_354 = false;
  };
  if (controller_v_112) {
    v_355 = v_354;
  } else {
    v_355 = sub_10;
  };
  if (controller_ck_18_1) {
    sub_7 = v_355;
  } else {
    sub_7 = sub_8;
  };
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_14 = p_controller_c_pc;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (controller_cleaner) {
    v_356 = sub_11;
    sub_4 = sub_5;
  } else {
    v_356 = sub_5;
    sub_4 = sub_11;
  };
  if (controller_ck_16_1) {
    sub_3 = v_356;
  } else {
    sub_3 = sub_4;
  };
  if (controller_ck_18_1) {
    sub_18 = sub_9;
  } else {
    sub_18 = sub_10;
  };
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  if (controller_worker) {
    v_357 = sub_15;
    sub_2 = sub_3;
  } else {
    v_357 = sub_3;
    sub_2 = sub_15;
  };
  if (controller_ck_14_1) {
    sub_1 = v_357;
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
  
  int v_364;
  int v_363;
  int v_362;
  int v_361;
  int v_360;
  int v_359;
  int v_358;
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
  v_361 = !(controller_v_111);
  v_362 = (v_361&&false);
  sub_8 = (controller_v_112&&v_362);
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_10 = false;
  sub_9 = sub_10;
  if (controller_cleaner) {
    v_363 = sub_9;
    sub_5 = sub_6;
  } else {
    v_363 = sub_6;
    sub_5 = sub_9;
  };
  if (controller_ck_16_1) {
    sub_4 = v_363;
  } else {
    sub_4 = sub_5;
  };
  sub_11 = sub_9;
  if (controller_worker) {
    v_364 = sub_11;
    sub_3 = sub_4;
  } else {
    v_364 = sub_4;
    sub_3 = sub_11;
  };
  if (controller_ck_14_1) {
    sub_2 = v_364;
  } else {
    sub_2 = sub_3;
  };
  sub_1 = sub_2;
  v_358 = (controller_v_111||false);
  v = !(controller_v_112);
  sub_18 = (v||v_358);
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_20 = true;
  sub_19 = sub_20;
  if (controller_cleaner) {
    v_359 = sub_19;
    sub_15 = sub_16;
  } else {
    v_359 = sub_16;
    sub_15 = sub_19;
  };
  if (controller_ck_16_1) {
    sub_14 = v_359;
  } else {
    sub_14 = sub_15;
  };
  sub_21 = sub_19;
  if (controller_worker) {
    v_360 = sub_21;
    sub_13 = sub_14;
  } else {
    v_360 = sub_14;
    sub_13 = sub_21;
  };
  if (controller_ck_14_1) {
    sub_12 = v_360;
  } else {
    sub_12 = sub_13;
  };
  if (p_controller_c_door) {
    sub_0 = sub_12;
  } else {
    sub_0 = sub_1;
  };
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

