/* --- Generated the 28/7/2018 at 20:10 --- */
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
  int controller_ck_20_1, int controller_pnr_3, int controller_v_123,
  int controller_v_122, int controller_pnr_2, int controller_ck_24_1,
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
  sub_18 = true;
  sub_17 = sub_18;
  if (controller_v_123) {
    sub_16 = false;
  } else {
    sub_16 = sub_17;
  };
  if (controller_v_122) {
    v_69 = sub_16;
  } else {
    v_69 = false;
  };
  if (controller_c_air_1) {
    v_68 = false;
  } else {
    v_68 = sub_16;
  };
  if (controller_v_123) {
    sub_20 = sub_17;
  } else {
    sub_20 = false;
  };
  if (controller_v_122) {
    sub_19 = sub_20;
  } else {
    sub_19 = false;
  };
  if (controller_c_air_1) {
    v_70 = sub_19;
  } else {
    v_70 = v_69;
  };
  if (controller_c_air_2) {
    sub_15 = v_68;
  } else {
    sub_15 = v_70;
  };
  if (controller_c_pc) {
    v_71 = sub_15;
    sub_14 = false;
  } else {
    v_71 = false;
    sub_14 = sub_15;
  };
  if (controller_ck_18_1) {
    v_72 = v_71;
  } else {
    v_72 = sub_14;
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
  sub_27 = false;
  sub_26 = sub_27;
  if (controller_v_123) {
    sub_25 = false;
  } else {
    sub_25 = sub_26;
  };
  if (controller_v_122) {
    v_64 = sub_25;
  } else {
    v_64 = false;
  };
  if (controller_c_air_1) {
    v_63 = false;
  } else {
    v_63 = sub_25;
  };
  if (controller_v_123) {
    sub_29 = sub_26;
  } else {
    sub_29 = false;
  };
  if (controller_v_122) {
    sub_28 = sub_29;
  } else {
    sub_28 = false;
  };
  if (controller_c_air_1) {
    v_65 = sub_28;
  } else {
    v_65 = v_64;
  };
  if (controller_c_air_2) {
    sub_24 = v_63;
  } else {
    sub_24 = v_65;
  };
  if (controller_c_pc) {
    v_66 = sub_24;
    sub_23 = false;
  } else {
    v_66 = false;
    sub_23 = sub_24;
  };
  if (controller_ck_18_1) {
    v_67 = v_66;
  } else {
    v_67 = sub_23;
  };
  if (controller_c_closet) {
    sub_22 = v_67;
  } else {
    sub_22 = false;
  };
  sub_21 = sub_22;
  if (controller_c_blind_1) {
    v_73 = sub_21;
    sub_11 = sub_12;
  } else {
    v_73 = false;
    sub_11 = sub_21;
  };
  if (controller_ck_26_1) {
    sub_10 = v_73;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (controller_v_122) {
    v_59 = false;
  } else {
    v_59 = sub_25;
  };
  if (controller_c_air_1) {
    v_60 = v_59;
    v_58 = sub_25;
  } else {
    v_60 = sub_28;
    v_58 = sub_28;
  };
  if (controller_c_air_2) {
    sub_37 = v_58;
  } else {
    sub_37 = v_60;
  };
  if (controller_c_pc) {
    sub_36 = false;
    sub_38 = sub_37;
  } else {
    sub_36 = sub_37;
    sub_38 = false;
  };
  if (controller_ck_18_1) {
    v_61 = sub_38;
  } else {
    v_61 = sub_36;
  };
  if (controller_c_closet) {
    sub_35 = false;
  } else {
    sub_35 = v_61;
  };
  sub_34 = sub_35;
  if (controller_c_blind_1) {
    sub_33 = sub_34;
  } else {
    sub_33 = false;
  };
  if (controller_v_122) {
    v_55 = false;
  } else {
    v_55 = sub_16;
  };
  if (controller_c_air_1) {
    v_56 = v_55;
    v_54 = sub_16;
  } else {
    v_56 = sub_19;
    v_54 = sub_19;
  };
  if (controller_c_air_2) {
    sub_43 = v_54;
  } else {
    sub_43 = v_56;
  };
  if (controller_c_pc) {
    sub_42 = false;
    sub_44 = sub_43;
  } else {
    sub_42 = sub_43;
    sub_44 = false;
  };
  if (controller_ck_18_1) {
    v_57 = sub_44;
  } else {
    v_57 = sub_42;
  };
  if (controller_c_closet) {
    sub_41 = false;
  } else {
    sub_41 = v_57;
  };
  if (controller_blind_switch) {
    sub_40 = sub_41;
  } else {
    sub_40 = false;
  };
  if (controller_c_blind_1) {
    sub_39 = sub_40;
  } else {
    sub_39 = sub_34;
  };
  if (controller_ck_26_1) {
    sub_32 = sub_39;
  } else {
    sub_32 = sub_33;
  };
  sub_45 = sub_34;
  if (controller_ck_24_1) {
    sub_31 = sub_45;
    v_53 = sub_32;
  } else {
    sub_31 = sub_32;
    v_53 = sub_45;
  };
  if (controller_c_light_1) {
    sub_46 = v_53;
  } else {
    sub_46 = sub_31;
  };
  if (controller_light_switch) {
    v_62 = sub_31;
  } else {
    v_62 = sub_46;
  };
  if (controller_c_light_2) {
    sub_30 = v_62;
  } else {
    sub_30 = sub_46;
  };
  if (controller_cleaner) {
    v_74 = sub_30;
    sub_6 = sub_7;
  } else {
    v_74 = sub_7;
    sub_6 = sub_30;
  };
  if (controller_ck_16_1) {
    sub_5 = v_74;
  } else {
    sub_5 = sub_6;
  };
  if (controller_ck_18_1) {
    v_50 = sub_36;
  } else {
    v_50 = sub_38;
  };
  if (controller_c_closet) {
    sub_54 = v_50;
  } else {
    sub_54 = false;
  };
  sub_53 = sub_54;
  if (controller_c_blind_1) {
    sub_52 = sub_53;
  } else {
    sub_52 = false;
  };
  if (controller_ck_18_1) {
    v_49 = sub_42;
  } else {
    v_49 = sub_44;
  };
  if (controller_c_closet) {
    sub_57 = v_49;
  } else {
    sub_57 = false;
  };
  if (controller_blind_switch) {
    sub_56 = sub_57;
  } else {
    sub_56 = false;
  };
  if (controller_c_blind_1) {
    sub_55 = sub_56;
  } else {
    sub_55 = sub_53;
  };
  if (controller_ck_26_1) {
    sub_51 = sub_55;
  } else {
    sub_51 = sub_52;
  };
  sub_58 = sub_53;
  if (controller_ck_24_1) {
    sub_50 = sub_58;
    v_48 = sub_51;
  } else {
    sub_50 = sub_51;
    v_48 = sub_58;
  };
  if (controller_c_light_1) {
    sub_59 = v_48;
  } else {
    sub_59 = sub_50;
  };
  if (controller_light_switch) {
    v_51 = sub_50;
  } else {
    v_51 = sub_59;
  };
  if (controller_c_light_2) {
    sub_49 = v_51;
  } else {
    sub_49 = sub_59;
  };
  if (controller_v_122) {
    v_43 = false;
    v_42 = sub_25;
  } else {
    v_43 = sub_26;
    v_42 = sub_29;
  };
  if (controller_c_air_1) {
    v_44 = v_42;
  } else {
    v_44 = v_43;
  };
  if (controller_v_122) {
    v_40 = false;
  } else {
    v_40 = sub_29;
  };
  if (controller_c_air_1) {
    v_41 = sub_29;
  } else {
    v_41 = v_40;
  };
  if (controller_c_air_2) {
    sub_67 = v_41;
  } else {
    sub_67 = v_44;
  };
  if (controller_c_pc) {
    v_45 = false;
    sub_66 = sub_67;
  } else {
    v_45 = sub_67;
    sub_66 = false;
  };
  if (controller_ck_18_1) {
    v_46 = v_45;
  } else {
    v_46 = sub_66;
  };
  if (controller_c_closet) {
    sub_65 = false;
  } else {
    sub_65 = v_46;
  };
  sub_64 = sub_65;
  if (controller_c_blind_1) {
    sub_63 = sub_64;
  } else {
    sub_63 = false;
  };
  if (controller_v_122) {
    v_36 = false;
    v_35 = sub_16;
  } else {
    v_36 = sub_17;
    v_35 = sub_20;
  };
  if (controller_c_air_1) {
    v_37 = v_35;
  } else {
    v_37 = v_36;
  };
  if (controller_v_122) {
    v_33 = false;
  } else {
    v_33 = sub_20;
  };
  if (controller_c_air_1) {
    v_34 = sub_20;
  } else {
    v_34 = v_33;
  };
  if (controller_c_air_2) {
    sub_72 = v_34;
  } else {
    sub_72 = v_37;
  };
  if (controller_c_pc) {
    v_38 = false;
    sub_71 = sub_72;
  } else {
    v_38 = sub_72;
    sub_71 = false;
  };
  if (controller_ck_18_1) {
    v_39 = v_38;
  } else {
    v_39 = sub_71;
  };
  if (controller_c_closet) {
    sub_70 = false;
  } else {
    sub_70 = v_39;
  };
  if (controller_blind_switch) {
    sub_69 = sub_70;
  } else {
    sub_69 = false;
  };
  if (controller_c_blind_1) {
    sub_68 = sub_69;
  } else {
    sub_68 = sub_64;
  };
  if (controller_ck_26_1) {
    sub_62 = sub_68;
  } else {
    sub_62 = sub_63;
  };
  sub_73 = sub_64;
  if (controller_ck_24_1) {
    sub_61 = sub_73;
    v_32 = sub_62;
  } else {
    sub_61 = sub_62;
    v_32 = sub_73;
  };
  if (controller_c_light_1) {
    sub_74 = v_32;
  } else {
    sub_74 = sub_61;
  };
  if (controller_light_switch) {
    v_47 = sub_61;
  } else {
    v_47 = sub_74;
  };
  if (controller_c_light_2) {
    sub_60 = v_47;
  } else {
    sub_60 = sub_74;
  };
  if (controller_cleaner) {
    v_52 = sub_60;
    sub_48 = sub_49;
  } else {
    v_52 = sub_49;
    sub_48 = sub_60;
  };
  if (controller_ck_16_1) {
    sub_47 = v_52;
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
    sub_81 = sub_33;
  } else {
    sub_81 = sub_39;
  };
  if (controller_ck_24_1) {
    sub_80 = sub_81;
    v_28 = false;
  } else {
    sub_80 = false;
    v_28 = sub_81;
  };
  if (controller_c_light_1) {
    sub_82 = v_28;
  } else {
    sub_82 = sub_80;
  };
  if (controller_light_switch) {
    v_29 = sub_80;
  } else {
    v_29 = sub_82;
  };
  if (controller_c_light_2) {
    sub_79 = v_29;
  } else {
    sub_79 = sub_82;
  };
  if (controller_cleaner) {
    v_30 = sub_79;
    sub_78 = sub_7;
  } else {
    v_30 = sub_7;
    sub_78 = sub_79;
  };
  if (controller_ck_16_1) {
    sub_77 = v_30;
  } else {
    sub_77 = sub_78;
  };
  if (controller_ck_26_1) {
    sub_87 = sub_52;
  } else {
    sub_87 = sub_55;
  };
  if (controller_ck_24_1) {
    sub_86 = sub_87;
    v_25 = false;
  } else {
    sub_86 = false;
    v_25 = sub_87;
  };
  if (controller_c_light_1) {
    sub_88 = v_25;
  } else {
    sub_88 = sub_86;
  };
  if (controller_light_switch) {
    v_26 = sub_86;
  } else {
    v_26 = sub_88;
  };
  if (controller_c_light_2) {
    sub_85 = v_26;
  } else {
    sub_85 = sub_88;
  };
  if (controller_ck_26_1) {
    sub_91 = sub_63;
  } else {
    sub_91 = sub_68;
  };
  if (controller_ck_24_1) {
    sub_90 = sub_91;
    v_23 = false;
  } else {
    sub_90 = false;
    v_23 = sub_91;
  };
  if (controller_c_light_1) {
    sub_92 = v_23;
  } else {
    sub_92 = sub_90;
  };
  if (controller_light_switch) {
    v_24 = sub_90;
  } else {
    v_24 = sub_92;
  };
  if (controller_c_light_2) {
    sub_89 = v_24;
  } else {
    sub_89 = sub_92;
  };
  if (controller_cleaner) {
    v_27 = sub_89;
    sub_84 = sub_85;
  } else {
    v_27 = sub_85;
    sub_84 = sub_89;
  };
  if (controller_ck_16_1) {
    sub_83 = v_27;
  } else {
    sub_83 = sub_84;
  };
  if (controller_worker) {
    v_31 = sub_83;
    sub_76 = sub_77;
  } else {
    v_31 = sub_77;
    sub_76 = sub_83;
  };
  if (controller_ck_14_1) {
    sub_75 = v_31;
  } else {
    sub_75 = sub_76;
  };
  if (controller_change_shift) {
    v_76 = sub_75;
    sub_2 = sub_3;
  } else {
    v_76 = sub_3;
    sub_2 = sub_75;
  };
  if (controller_ck_1) {
    sub_1 = v_76;
  } else {
    sub_1 = sub_2;
  };
  if (controller_blind_switch) {
    v_19 = sub_22;
  } else {
    v_19 = sub_13;
  };
  if (controller_c_blind_1) {
    v_20 = v_19;
    sub_102 = sub_12;
  } else {
    v_20 = false;
    sub_102 = sub_13;
  };
  if (controller_ck_26_1) {
    sub_101 = v_20;
  } else {
    sub_101 = sub_102;
  };
  sub_100 = sub_101;
  sub_99 = sub_100;
  sub_98 = sub_99;
  if (controller_blind_switch) {
    v_17 = sub_35;
  } else {
    v_17 = sub_41;
  };
  if (controller_c_blind_1) {
    sub_106 = v_17;
  } else {
    sub_106 = false;
  };
  sub_108 = sub_41;
  if (controller_c_blind_1) {
    sub_107 = sub_40;
  } else {
    sub_107 = sub_108;
  };
  if (controller_ck_26_1) {
    sub_105 = sub_107;
  } else {
    sub_105 = sub_106;
  };
  sub_109 = sub_108;
  if (controller_ck_24_1) {
    sub_104 = sub_109;
    v_16 = sub_105;
  } else {
    sub_104 = sub_105;
    v_16 = sub_109;
  };
  if (controller_c_light_1) {
    sub_110 = v_16;
  } else {
    sub_110 = sub_104;
  };
  if (controller_light_switch) {
    v_18 = sub_104;
  } else {
    v_18 = sub_110;
  };
  if (controller_c_light_2) {
    sub_103 = v_18;
  } else {
    sub_103 = sub_110;
  };
  if (controller_cleaner) {
    v_21 = sub_103;
    sub_97 = sub_98;
  } else {
    v_21 = sub_98;
    sub_97 = sub_103;
  };
  if (controller_ck_16_1) {
    sub_96 = v_21;
  } else {
    sub_96 = sub_97;
  };
  if (controller_blind_switch) {
    v_13 = sub_54;
  } else {
    v_13 = sub_57;
  };
  if (controller_c_blind_1) {
    sub_116 = v_13;
  } else {
    sub_116 = false;
  };
  sub_118 = sub_57;
  if (controller_c_blind_1) {
    sub_117 = sub_56;
  } else {
    sub_117 = sub_118;
  };
  if (controller_ck_26_1) {
    sub_115 = sub_117;
  } else {
    sub_115 = sub_116;
  };
  sub_119 = sub_118;
  if (controller_ck_24_1) {
    sub_114 = sub_119;
    v_12 = sub_115;
  } else {
    sub_114 = sub_115;
    v_12 = sub_119;
  };
  if (controller_c_light_1) {
    sub_120 = v_12;
  } else {
    sub_120 = sub_114;
  };
  if (controller_light_switch) {
    v_14 = sub_114;
  } else {
    v_14 = sub_120;
  };
  if (controller_c_light_2) {
    sub_113 = v_14;
  } else {
    sub_113 = sub_120;
  };
  if (controller_blind_switch) {
    v_10 = sub_65;
  } else {
    v_10 = sub_70;
  };
  if (controller_c_blind_1) {
    sub_124 = v_10;
  } else {
    sub_124 = false;
  };
  sub_126 = sub_70;
  if (controller_c_blind_1) {
    sub_125 = sub_69;
  } else {
    sub_125 = sub_126;
  };
  if (controller_ck_26_1) {
    sub_123 = sub_125;
  } else {
    sub_123 = sub_124;
  };
  sub_127 = sub_126;
  if (controller_ck_24_1) {
    sub_122 = sub_127;
    v_9 = sub_123;
  } else {
    sub_122 = sub_123;
    v_9 = sub_127;
  };
  if (controller_c_light_1) {
    sub_128 = v_9;
  } else {
    sub_128 = sub_122;
  };
  if (controller_light_switch) {
    v_11 = sub_122;
  } else {
    v_11 = sub_128;
  };
  if (controller_c_light_2) {
    sub_121 = v_11;
  } else {
    sub_121 = sub_128;
  };
  if (controller_cleaner) {
    v_15 = sub_121;
    sub_112 = sub_113;
  } else {
    v_15 = sub_113;
    sub_112 = sub_121;
  };
  if (controller_ck_16_1) {
    sub_111 = v_15;
  } else {
    sub_111 = sub_112;
  };
  if (controller_worker) {
    v_22 = sub_111;
    sub_95 = sub_96;
  } else {
    v_22 = sub_96;
    sub_95 = sub_111;
  };
  if (controller_ck_14_1) {
    sub_94 = v_22;
  } else {
    sub_94 = sub_95;
  };
  if (controller_ck_26_1) {
    sub_135 = sub_106;
  } else {
    sub_135 = sub_107;
  };
  if (controller_ck_24_1) {
    sub_134 = sub_135;
    v_5 = false;
  } else {
    sub_134 = false;
    v_5 = sub_135;
  };
  if (controller_c_light_1) {
    sub_136 = v_5;
  } else {
    sub_136 = sub_134;
  };
  if (controller_light_switch) {
    v_6 = sub_134;
  } else {
    v_6 = sub_136;
  };
  if (controller_c_light_2) {
    sub_133 = v_6;
  } else {
    sub_133 = sub_136;
  };
  if (controller_cleaner) {
    v_7 = sub_133;
    sub_132 = sub_98;
  } else {
    v_7 = sub_98;
    sub_132 = sub_133;
  };
  if (controller_ck_16_1) {
    sub_131 = v_7;
  } else {
    sub_131 = sub_132;
  };
  if (controller_ck_26_1) {
    sub_141 = sub_116;
  } else {
    sub_141 = sub_117;
  };
  if (controller_ck_24_1) {
    sub_140 = sub_141;
    v_2 = false;
  } else {
    sub_140 = false;
    v_2 = sub_141;
  };
  if (controller_c_light_1) {
    sub_142 = v_2;
  } else {
    sub_142 = sub_140;
  };
  if (controller_light_switch) {
    v_3 = sub_140;
  } else {
    v_3 = sub_142;
  };
  if (controller_c_light_2) {
    sub_139 = v_3;
  } else {
    sub_139 = sub_142;
  };
  if (controller_ck_26_1) {
    sub_145 = sub_124;
  } else {
    sub_145 = sub_125;
  };
  if (controller_ck_24_1) {
    sub_144 = sub_145;
    v = false;
  } else {
    sub_144 = false;
    v = sub_145;
  };
  if (controller_c_light_1) {
    sub_146 = v;
  } else {
    sub_146 = sub_144;
  };
  if (controller_light_switch) {
    v_1 = sub_144;
  } else {
    v_1 = sub_146;
  };
  if (controller_c_light_2) {
    sub_143 = v_1;
  } else {
    sub_143 = sub_146;
  };
  if (controller_cleaner) {
    v_4 = sub_143;
    sub_138 = sub_139;
  } else {
    v_4 = sub_139;
    sub_138 = sub_143;
  };
  if (controller_ck_16_1) {
    sub_137 = v_4;
  } else {
    sub_137 = sub_138;
  };
  if (controller_worker) {
    v_8 = sub_137;
    sub_130 = sub_131;
  } else {
    v_8 = sub_131;
    sub_130 = sub_137;
  };
  if (controller_ck_14_1) {
    sub_129 = v_8;
  } else {
    sub_129 = sub_130;
  };
  if (controller_change_shift) {
    v_77 = sub_129;
    sub_93 = sub_94;
  } else {
    v_77 = sub_94;
    sub_93 = sub_129;
  };
  if (controller_ck_1) {
    v_78 = v_77;
  } else {
    v_78 = sub_93;
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
  int controller_ck_20_1, int controller_pnr_3, int controller_v_123,
  int controller_v_122, int controller_pnr_2, int controller_ck_24_1,
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
  sub_17 = false;
  sub_16 = sub_17;
  if (controller_v_123) {
    sub_15 = false;
  } else {
    sub_15 = sub_16;
  };
  if (controller_v_122) {
    v_142 = sub_15;
  } else {
    v_142 = false;
  };
  if (controller_c_air_1) {
    v_141 = false;
  } else {
    v_141 = sub_15;
  };
  if (controller_v_123) {
    sub_19 = sub_16;
  } else {
    sub_19 = false;
  };
  if (controller_v_122) {
    sub_18 = sub_19;
  } else {
    sub_18 = false;
  };
  if (controller_c_air_1) {
    v_143 = sub_18;
  } else {
    v_143 = v_142;
  };
  if (controller_c_air_2) {
    sub_14 = v_141;
  } else {
    sub_14 = v_143;
  };
  if (controller_c_pc) {
    v_144 = sub_14;
    sub_13 = false;
  } else {
    v_144 = false;
    sub_13 = sub_14;
  };
  if (controller_ck_18_1) {
    v_145 = v_144;
  } else {
    v_145 = sub_13;
  };
  if (controller_c_closet) {
    sub_12 = v_145;
  } else {
    sub_12 = false;
  };
  sub_11 = sub_12;
  sub_26 = true;
  sub_25 = sub_26;
  if (controller_v_123) {
    sub_24 = false;
  } else {
    sub_24 = sub_25;
  };
  if (controller_v_122) {
    v_137 = sub_24;
  } else {
    v_137 = false;
  };
  if (controller_c_air_1) {
    v_136 = false;
  } else {
    v_136 = sub_24;
  };
  if (controller_v_123) {
    sub_28 = sub_25;
  } else {
    sub_28 = false;
  };
  if (controller_v_122) {
    sub_27 = sub_28;
  } else {
    sub_27 = false;
  };
  if (controller_c_air_1) {
    v_138 = sub_27;
  } else {
    v_138 = v_137;
  };
  if (controller_c_air_2) {
    sub_23 = v_136;
  } else {
    sub_23 = v_138;
  };
  if (controller_c_pc) {
    v_139 = sub_23;
    sub_22 = false;
  } else {
    v_139 = false;
    sub_22 = sub_23;
  };
  if (controller_ck_18_1) {
    v_140 = v_139;
  } else {
    v_140 = sub_22;
  };
  if (controller_c_closet) {
    sub_21 = v_140;
  } else {
    sub_21 = false;
  };
  sub_20 = sub_21;
  if (controller_ck_26_1) {
    sub_10 = sub_20;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (controller_v_122) {
    v_132 = false;
  } else {
    v_132 = sub_24;
  };
  if (controller_c_air_1) {
    v_133 = v_132;
    v_131 = sub_24;
  } else {
    v_133 = sub_27;
    v_131 = sub_27;
  };
  if (controller_c_air_2) {
    sub_35 = v_131;
  } else {
    sub_35 = v_133;
  };
  if (controller_c_pc) {
    sub_34 = false;
    sub_36 = sub_35;
  } else {
    sub_34 = sub_35;
    sub_36 = false;
  };
  if (controller_ck_18_1) {
    v_134 = sub_36;
  } else {
    v_134 = sub_34;
  };
  if (controller_c_closet) {
    sub_33 = false;
  } else {
    sub_33 = v_134;
  };
  sub_32 = sub_33;
  if (controller_v_122) {
    v_128 = false;
  } else {
    v_128 = sub_15;
  };
  if (controller_c_air_1) {
    v_129 = v_128;
    v_127 = sub_15;
  } else {
    v_129 = sub_18;
    v_127 = sub_18;
  };
  if (controller_c_air_2) {
    sub_40 = v_127;
  } else {
    sub_40 = v_129;
  };
  if (controller_c_pc) {
    sub_39 = false;
    sub_41 = sub_40;
  } else {
    sub_39 = sub_40;
    sub_41 = false;
  };
  if (controller_ck_18_1) {
    v_130 = sub_41;
  } else {
    v_130 = sub_39;
  };
  if (controller_c_closet) {
    sub_38 = false;
  } else {
    sub_38 = v_130;
  };
  sub_37 = sub_38;
  if (controller_ck_26_1) {
    sub_31 = sub_37;
  } else {
    sub_31 = sub_32;
  };
  if (controller_ck_24_1) {
    sub_30 = sub_37;
    v_126 = sub_31;
  } else {
    sub_30 = sub_31;
    v_126 = sub_37;
  };
  if (controller_c_light_1) {
    sub_42 = v_126;
  } else {
    sub_42 = sub_30;
  };
  if (controller_light_switch) {
    v_135 = sub_30;
  } else {
    v_135 = sub_42;
  };
  if (controller_c_light_2) {
    sub_29 = v_135;
  } else {
    sub_29 = sub_42;
  };
  if (controller_cleaner) {
    v_146 = sub_29;
    sub_6 = sub_7;
  } else {
    v_146 = sub_7;
    sub_6 = sub_29;
  };
  if (controller_ck_16_1) {
    sub_5 = v_146;
  } else {
    sub_5 = sub_6;
  };
  if (controller_ck_18_1) {
    v_123 = sub_34;
  } else {
    v_123 = sub_36;
  };
  if (controller_c_closet) {
    sub_49 = v_123;
  } else {
    sub_49 = false;
  };
  sub_48 = sub_49;
  if (controller_ck_18_1) {
    v_122 = sub_39;
  } else {
    v_122 = sub_41;
  };
  if (controller_c_closet) {
    sub_51 = v_122;
  } else {
    sub_51 = false;
  };
  sub_50 = sub_51;
  if (controller_ck_26_1) {
    sub_47 = sub_50;
  } else {
    sub_47 = sub_48;
  };
  if (controller_ck_24_1) {
    sub_46 = sub_50;
    v_121 = sub_47;
  } else {
    sub_46 = sub_47;
    v_121 = sub_50;
  };
  if (controller_c_light_1) {
    sub_52 = v_121;
  } else {
    sub_52 = sub_46;
  };
  if (controller_light_switch) {
    v_124 = sub_46;
  } else {
    v_124 = sub_52;
  };
  if (controller_c_light_2) {
    sub_45 = v_124;
  } else {
    sub_45 = sub_52;
  };
  if (controller_v_122) {
    v_116 = false;
    v_115 = sub_24;
  } else {
    v_116 = sub_25;
    v_115 = sub_28;
  };
  if (controller_c_air_1) {
    v_117 = v_115;
  } else {
    v_117 = v_116;
  };
  if (controller_v_122) {
    v_113 = false;
  } else {
    v_113 = sub_28;
  };
  if (controller_c_air_1) {
    v_114 = sub_28;
  } else {
    v_114 = v_113;
  };
  if (controller_c_air_2) {
    sub_59 = v_114;
  } else {
    sub_59 = v_117;
  };
  if (controller_c_pc) {
    v_118 = false;
    sub_58 = sub_59;
  } else {
    v_118 = sub_59;
    sub_58 = false;
  };
  if (controller_ck_18_1) {
    v_119 = v_118;
  } else {
    v_119 = sub_58;
  };
  if (controller_c_closet) {
    sub_57 = false;
  } else {
    sub_57 = v_119;
  };
  sub_56 = sub_57;
  if (controller_v_122) {
    v_109 = false;
    v_108 = sub_15;
  } else {
    v_109 = sub_16;
    v_108 = sub_19;
  };
  if (controller_c_air_1) {
    v_110 = v_108;
  } else {
    v_110 = v_109;
  };
  if (controller_v_122) {
    v_106 = false;
  } else {
    v_106 = sub_19;
  };
  if (controller_c_air_1) {
    v_107 = sub_19;
  } else {
    v_107 = v_106;
  };
  if (controller_c_air_2) {
    sub_63 = v_107;
  } else {
    sub_63 = v_110;
  };
  if (controller_c_pc) {
    v_111 = false;
    sub_62 = sub_63;
  } else {
    v_111 = sub_63;
    sub_62 = false;
  };
  if (controller_ck_18_1) {
    v_112 = v_111;
  } else {
    v_112 = sub_62;
  };
  if (controller_c_closet) {
    sub_61 = false;
  } else {
    sub_61 = v_112;
  };
  sub_60 = sub_61;
  if (controller_ck_26_1) {
    sub_55 = sub_60;
  } else {
    sub_55 = sub_56;
  };
  if (controller_ck_24_1) {
    sub_54 = sub_60;
    v_105 = sub_55;
  } else {
    sub_54 = sub_55;
    v_105 = sub_60;
  };
  if (controller_c_light_1) {
    sub_64 = v_105;
  } else {
    sub_64 = sub_54;
  };
  if (controller_light_switch) {
    v_120 = sub_54;
  } else {
    v_120 = sub_64;
  };
  if (controller_c_light_2) {
    sub_53 = v_120;
  } else {
    sub_53 = sub_64;
  };
  if (controller_cleaner) {
    v_125 = sub_53;
    sub_44 = sub_45;
  } else {
    v_125 = sub_45;
    sub_44 = sub_53;
  };
  if (controller_ck_16_1) {
    sub_43 = v_125;
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
    sub_71 = sub_32;
  } else {
    sub_71 = sub_37;
  };
  if (controller_ck_24_1) {
    sub_70 = sub_71;
    v_101 = false;
  } else {
    sub_70 = false;
    v_101 = sub_71;
  };
  if (controller_c_light_1) {
    sub_72 = v_101;
  } else {
    sub_72 = sub_70;
  };
  if (controller_light_switch) {
    v_102 = sub_70;
  } else {
    v_102 = sub_72;
  };
  if (controller_c_light_2) {
    sub_69 = v_102;
  } else {
    sub_69 = sub_72;
  };
  if (controller_cleaner) {
    v_103 = sub_69;
    sub_68 = sub_7;
  } else {
    v_103 = sub_7;
    sub_68 = sub_69;
  };
  if (controller_ck_16_1) {
    sub_67 = v_103;
  } else {
    sub_67 = sub_68;
  };
  if (controller_ck_26_1) {
    sub_77 = sub_48;
  } else {
    sub_77 = sub_50;
  };
  if (controller_ck_24_1) {
    sub_76 = sub_77;
    v_98 = false;
  } else {
    sub_76 = false;
    v_98 = sub_77;
  };
  if (controller_c_light_1) {
    sub_78 = v_98;
  } else {
    sub_78 = sub_76;
  };
  if (controller_light_switch) {
    v_99 = sub_76;
  } else {
    v_99 = sub_78;
  };
  if (controller_c_light_2) {
    sub_75 = v_99;
  } else {
    sub_75 = sub_78;
  };
  if (controller_ck_26_1) {
    sub_81 = sub_56;
  } else {
    sub_81 = sub_60;
  };
  if (controller_ck_24_1) {
    sub_80 = sub_81;
    v_96 = false;
  } else {
    sub_80 = false;
    v_96 = sub_81;
  };
  if (controller_c_light_1) {
    sub_82 = v_96;
  } else {
    sub_82 = sub_80;
  };
  if (controller_light_switch) {
    v_97 = sub_80;
  } else {
    v_97 = sub_82;
  };
  if (controller_c_light_2) {
    sub_79 = v_97;
  } else {
    sub_79 = sub_82;
  };
  if (controller_cleaner) {
    v_100 = sub_79;
    sub_74 = sub_75;
  } else {
    v_100 = sub_75;
    sub_74 = sub_79;
  };
  if (controller_ck_16_1) {
    sub_73 = v_100;
  } else {
    sub_73 = sub_74;
  };
  if (controller_worker) {
    v_104 = sub_73;
    sub_66 = sub_67;
  } else {
    v_104 = sub_67;
    sub_66 = sub_73;
  };
  if (controller_ck_14_1) {
    sub_65 = v_104;
  } else {
    sub_65 = sub_66;
  };
  if (controller_change_shift) {
    v_148 = sub_65;
    sub_2 = sub_3;
  } else {
    v_148 = sub_3;
    sub_2 = sub_65;
  };
  if (controller_ck_1) {
    sub_1 = v_148;
  } else {
    sub_1 = sub_2;
  };
  if (controller_blind_switch) {
    sub_92 = sub_21;
  } else {
    sub_92 = sub_12;
  };
  if (controller_ck_26_1) {
    sub_91 = sub_20;
  } else {
    sub_91 = sub_92;
  };
  sub_90 = sub_91;
  sub_89 = sub_90;
  sub_88 = sub_89;
  if (controller_blind_switch) {
    sub_96 = sub_33;
  } else {
    sub_96 = sub_38;
  };
  if (controller_ck_26_1) {
    sub_95 = sub_96;
  } else {
    sub_95 = sub_32;
  };
  if (controller_ck_24_1) {
    sub_94 = sub_32;
    v_92 = sub_95;
  } else {
    sub_94 = sub_95;
    v_92 = sub_32;
  };
  if (controller_c_light_1) {
    sub_97 = v_92;
  } else {
    sub_97 = sub_94;
  };
  if (controller_light_switch) {
    v_93 = sub_94;
  } else {
    v_93 = sub_97;
  };
  if (controller_c_light_2) {
    sub_93 = v_93;
  } else {
    sub_93 = sub_97;
  };
  if (controller_cleaner) {
    v_94 = sub_93;
    sub_87 = sub_88;
  } else {
    v_94 = sub_88;
    sub_87 = sub_93;
  };
  if (controller_ck_16_1) {
    sub_86 = v_94;
  } else {
    sub_86 = sub_87;
  };
  if (controller_blind_switch) {
    sub_103 = sub_49;
  } else {
    sub_103 = sub_51;
  };
  if (controller_ck_26_1) {
    sub_102 = sub_103;
  } else {
    sub_102 = sub_48;
  };
  if (controller_ck_24_1) {
    sub_101 = sub_48;
    v_89 = sub_102;
  } else {
    sub_101 = sub_102;
    v_89 = sub_48;
  };
  if (controller_c_light_1) {
    sub_104 = v_89;
  } else {
    sub_104 = sub_101;
  };
  if (controller_light_switch) {
    v_90 = sub_101;
  } else {
    v_90 = sub_104;
  };
  if (controller_c_light_2) {
    sub_100 = v_90;
  } else {
    sub_100 = sub_104;
  };
  if (controller_blind_switch) {
    sub_108 = sub_57;
  } else {
    sub_108 = sub_61;
  };
  if (controller_ck_26_1) {
    sub_107 = sub_108;
  } else {
    sub_107 = sub_56;
  };
  if (controller_ck_24_1) {
    sub_106 = sub_56;
    v_87 = sub_107;
  } else {
    sub_106 = sub_107;
    v_87 = sub_56;
  };
  if (controller_c_light_1) {
    sub_109 = v_87;
  } else {
    sub_109 = sub_106;
  };
  if (controller_light_switch) {
    v_88 = sub_106;
  } else {
    v_88 = sub_109;
  };
  if (controller_c_light_2) {
    sub_105 = v_88;
  } else {
    sub_105 = sub_109;
  };
  if (controller_cleaner) {
    v_91 = sub_105;
    sub_99 = sub_100;
  } else {
    v_91 = sub_100;
    sub_99 = sub_105;
  };
  if (controller_ck_16_1) {
    sub_98 = v_91;
  } else {
    sub_98 = sub_99;
  };
  if (controller_worker) {
    v_95 = sub_98;
    sub_85 = sub_86;
  } else {
    v_95 = sub_86;
    sub_85 = sub_98;
  };
  if (controller_ck_14_1) {
    sub_84 = v_95;
  } else {
    sub_84 = sub_85;
  };
  if (controller_ck_26_1) {
    sub_116 = sub_32;
  } else {
    sub_116 = sub_96;
  };
  if (controller_ck_24_1) {
    sub_115 = sub_116;
    v_83 = false;
  } else {
    sub_115 = false;
    v_83 = sub_116;
  };
  if (controller_c_light_1) {
    sub_117 = v_83;
  } else {
    sub_117 = sub_115;
  };
  if (controller_light_switch) {
    v_84 = sub_115;
  } else {
    v_84 = sub_117;
  };
  if (controller_c_light_2) {
    sub_114 = v_84;
  } else {
    sub_114 = sub_117;
  };
  if (controller_cleaner) {
    v_85 = sub_114;
    sub_113 = sub_88;
  } else {
    v_85 = sub_88;
    sub_113 = sub_114;
  };
  if (controller_ck_16_1) {
    sub_112 = v_85;
  } else {
    sub_112 = sub_113;
  };
  if (controller_ck_26_1) {
    sub_122 = sub_48;
  } else {
    sub_122 = sub_103;
  };
  if (controller_ck_24_1) {
    sub_121 = sub_122;
    v_80 = false;
  } else {
    sub_121 = false;
    v_80 = sub_122;
  };
  if (controller_c_light_1) {
    sub_123 = v_80;
  } else {
    sub_123 = sub_121;
  };
  if (controller_light_switch) {
    v_81 = sub_121;
  } else {
    v_81 = sub_123;
  };
  if (controller_c_light_2) {
    sub_120 = v_81;
  } else {
    sub_120 = sub_123;
  };
  if (controller_ck_26_1) {
    sub_126 = sub_56;
  } else {
    sub_126 = sub_108;
  };
  if (controller_ck_24_1) {
    sub_125 = sub_126;
    v = false;
  } else {
    sub_125 = false;
    v = sub_126;
  };
  if (controller_c_light_1) {
    sub_127 = v;
  } else {
    sub_127 = sub_125;
  };
  if (controller_light_switch) {
    v_79 = sub_125;
  } else {
    v_79 = sub_127;
  };
  if (controller_c_light_2) {
    sub_124 = v_79;
  } else {
    sub_124 = sub_127;
  };
  if (controller_cleaner) {
    v_82 = sub_124;
    sub_119 = sub_120;
  } else {
    v_82 = sub_120;
    sub_119 = sub_124;
  };
  if (controller_ck_16_1) {
    sub_118 = v_82;
  } else {
    sub_118 = sub_119;
  };
  if (controller_worker) {
    v_86 = sub_118;
    sub_111 = sub_112;
  } else {
    v_86 = sub_112;
    sub_111 = sub_118;
  };
  if (controller_ck_14_1) {
    sub_110 = v_86;
  } else {
    sub_110 = sub_111;
  };
  if (controller_change_shift) {
    v_149 = sub_110;
    sub_83 = sub_84;
  } else {
    v_149 = sub_84;
    sub_83 = sub_110;
  };
  if (controller_ck_1) {
    v_150 = v_149;
  } else {
    v_150 = sub_83;
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
  int controller_ck_20_1, int controller_pnr_3, int controller_v_123,
  int controller_v_122, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_blind_1,
  int p_controller_c_light_2, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_light_1, int controller_c_closet,
  int controller_c_air_2, int controller_c_air_1, int controller_c_window,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_2_out* _out) {
  
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
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  sub_15 = false;
  sub_14 = sub_15;
  if (controller_v_123) {
    sub_13 = false;
  } else {
    sub_13 = sub_14;
  };
  if (controller_v_122) {
    v_208 = sub_13;
  } else {
    v_208 = false;
  };
  if (controller_c_air_1) {
    v_207 = false;
  } else {
    v_207 = sub_13;
  };
  if (controller_v_123) {
    sub_17 = sub_14;
  } else {
    sub_17 = false;
  };
  if (controller_v_122) {
    sub_16 = sub_17;
  } else {
    sub_16 = false;
  };
  if (controller_c_air_1) {
    v_209 = sub_16;
  } else {
    v_209 = v_208;
  };
  if (controller_c_air_2) {
    sub_12 = v_207;
  } else {
    sub_12 = v_209;
  };
  if (controller_c_pc) {
    v_210 = sub_12;
    sub_11 = false;
  } else {
    v_210 = false;
    sub_11 = sub_12;
  };
  if (controller_ck_18_1) {
    v_211 = v_210;
  } else {
    v_211 = sub_11;
  };
  if (controller_c_closet) {
    sub_10 = v_211;
  } else {
    sub_10 = false;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (controller_v_122) {
    v_204 = false;
  } else {
    v_204 = sub_13;
  };
  if (controller_c_air_1) {
    v_205 = v_204;
    v_203 = sub_13;
  } else {
    v_205 = sub_16;
    v_203 = sub_16;
  };
  if (controller_c_air_2) {
    sub_23 = v_203;
  } else {
    sub_23 = v_205;
  };
  if (controller_c_pc) {
    sub_22 = false;
    sub_24 = sub_23;
  } else {
    sub_22 = sub_23;
    sub_24 = false;
  };
  if (controller_ck_18_1) {
    v_206 = sub_24;
  } else {
    v_206 = sub_22;
  };
  if (controller_c_closet) {
    sub_21 = false;
  } else {
    sub_21 = v_206;
  };
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  if (controller_cleaner) {
    v_212 = sub_18;
    sub_6 = sub_7;
  } else {
    v_212 = sub_7;
    sub_6 = sub_18;
  };
  if (controller_ck_16_1) {
    sub_5 = v_212;
  } else {
    sub_5 = sub_6;
  };
  if (controller_ck_18_1) {
    v_201 = sub_22;
  } else {
    v_201 = sub_24;
  };
  if (controller_c_closet) {
    sub_30 = v_201;
  } else {
    sub_30 = false;
  };
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  if (controller_v_122) {
    v_197 = false;
    v_196 = sub_13;
  } else {
    v_197 = sub_14;
    v_196 = sub_17;
  };
  if (controller_c_air_1) {
    v_198 = v_196;
  } else {
    v_198 = v_197;
  };
  if (controller_v_122) {
    v_194 = false;
  } else {
    v_194 = sub_17;
  };
  if (controller_c_air_1) {
    v_195 = sub_17;
  } else {
    v_195 = v_194;
  };
  if (controller_c_air_2) {
    sub_36 = v_195;
  } else {
    sub_36 = v_198;
  };
  if (controller_c_pc) {
    v_199 = false;
    sub_35 = sub_36;
  } else {
    v_199 = sub_36;
    sub_35 = false;
  };
  if (controller_ck_18_1) {
    v_200 = v_199;
  } else {
    v_200 = sub_35;
  };
  if (controller_c_closet) {
    sub_34 = false;
  } else {
    sub_34 = v_200;
  };
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  if (controller_cleaner) {
    v_202 = sub_31;
    sub_26 = sub_27;
  } else {
    v_202 = sub_27;
    sub_26 = sub_31;
  };
  if (controller_ck_16_1) {
    sub_25 = v_202;
  } else {
    sub_25 = sub_26;
  };
  if (controller_worker) {
    v_213 = sub_25;
    sub_4 = sub_5;
  } else {
    v_213 = sub_5;
    sub_4 = sub_25;
  };
  if (controller_ck_14_1) {
    sub_3 = v_213;
  } else {
    sub_3 = sub_4;
  };
  if (controller_ck_24_1) {
    v_190 = false;
  } else {
    v_190 = sub_20;
  };
  sub_49 = true;
  sub_48 = sub_49;
  if (controller_v_123) {
    sub_47 = false;
  } else {
    sub_47 = sub_48;
  };
  if (controller_v_122) {
    v_186 = false;
  } else {
    v_186 = sub_47;
  };
  if (controller_v_123) {
    sub_51 = sub_48;
  } else {
    sub_51 = false;
  };
  if (controller_v_122) {
    sub_50 = sub_51;
  } else {
    sub_50 = false;
  };
  if (controller_c_air_1) {
    v_187 = v_186;
    v_185 = sub_47;
  } else {
    v_187 = sub_50;
    v_185 = sub_50;
  };
  if (controller_c_air_2) {
    sub_46 = v_185;
  } else {
    sub_46 = v_187;
  };
  if (controller_c_pc) {
    sub_45 = false;
    sub_52 = sub_46;
  } else {
    sub_45 = sub_46;
    sub_52 = false;
  };
  if (controller_ck_18_1) {
    v_188 = sub_52;
  } else {
    v_188 = sub_45;
  };
  if (controller_c_closet) {
    sub_44 = false;
  } else {
    sub_44 = v_188;
  };
  sub_43 = sub_44;
  if (controller_ck_24_1) {
    sub_42 = sub_43;
    sub_53 = sub_20;
  } else {
    sub_42 = sub_20;
    sub_53 = false;
  };
  if (controller_c_light_1) {
    v_191 = v_190;
    v_189 = sub_42;
  } else {
    v_191 = sub_53;
    v_189 = sub_53;
  };
  if (controller_light_switch) {
    sub_41 = v_189;
  } else {
    sub_41 = v_191;
  };
  if (controller_cleaner) {
    v_192 = sub_41;
    sub_40 = sub_7;
  } else {
    v_192 = sub_7;
    sub_40 = sub_41;
  };
  if (controller_ck_16_1) {
    sub_39 = v_192;
  } else {
    sub_39 = sub_40;
  };
  if (controller_ck_24_1) {
    v_182 = false;
  } else {
    v_182 = sub_29;
  };
  if (controller_ck_18_1) {
    v_180 = sub_45;
  } else {
    v_180 = sub_52;
  };
  if (controller_c_closet) {
    sub_59 = v_180;
  } else {
    sub_59 = false;
  };
  sub_58 = sub_59;
  if (controller_ck_24_1) {
    sub_57 = sub_58;
    sub_60 = sub_29;
  } else {
    sub_57 = sub_29;
    sub_60 = false;
  };
  if (controller_c_light_1) {
    v_183 = v_182;
    v_181 = sub_57;
  } else {
    v_183 = sub_60;
    v_181 = sub_60;
  };
  if (controller_light_switch) {
    sub_56 = v_181;
  } else {
    sub_56 = v_183;
  };
  if (controller_ck_24_1) {
    v_178 = false;
  } else {
    v_178 = sub_33;
  };
  if (controller_v_122) {
    v_173 = false;
    v_172 = sub_47;
  } else {
    v_173 = sub_48;
    v_172 = sub_51;
  };
  if (controller_c_air_1) {
    v_174 = v_172;
  } else {
    v_174 = v_173;
  };
  if (controller_v_122) {
    v_170 = false;
  } else {
    v_170 = sub_51;
  };
  if (controller_c_air_1) {
    v_171 = sub_51;
  } else {
    v_171 = v_170;
  };
  if (controller_c_air_2) {
    sub_66 = v_171;
  } else {
    sub_66 = v_174;
  };
  if (controller_c_pc) {
    v_175 = false;
    sub_65 = sub_66;
  } else {
    v_175 = sub_66;
    sub_65 = false;
  };
  if (controller_ck_18_1) {
    v_176 = v_175;
  } else {
    v_176 = sub_65;
  };
  if (controller_c_closet) {
    sub_64 = false;
  } else {
    sub_64 = v_176;
  };
  sub_63 = sub_64;
  if (controller_ck_24_1) {
    sub_62 = sub_63;
    sub_67 = sub_33;
  } else {
    sub_62 = sub_33;
    sub_67 = false;
  };
  if (controller_c_light_1) {
    v_179 = v_178;
    v_177 = sub_62;
  } else {
    v_179 = sub_67;
    v_177 = sub_67;
  };
  if (controller_light_switch) {
    sub_61 = v_177;
  } else {
    sub_61 = v_179;
  };
  if (controller_cleaner) {
    v_184 = sub_61;
    sub_55 = sub_56;
  } else {
    v_184 = sub_56;
    sub_55 = sub_61;
  };
  if (controller_ck_16_1) {
    sub_54 = v_184;
  } else {
    sub_54 = sub_55;
  };
  if (controller_worker) {
    v_193 = sub_54;
    sub_38 = sub_39;
  } else {
    v_193 = sub_39;
    sub_38 = sub_54;
  };
  if (controller_ck_14_1) {
    sub_37 = v_193;
  } else {
    sub_37 = sub_38;
  };
  if (controller_change_shift) {
    v_214 = sub_37;
    sub_2 = sub_3;
  } else {
    v_214 = sub_3;
    sub_2 = sub_37;
  };
  if (controller_ck_1) {
    sub_1 = v_214;
  } else {
    sub_1 = sub_2;
  };
  if (controller_v_122) {
    v_164 = sub_47;
  } else {
    v_164 = false;
  };
  if (controller_c_air_1) {
    v_165 = sub_50;
    v_163 = false;
  } else {
    v_165 = v_164;
    v_163 = sub_47;
  };
  if (controller_c_air_2) {
    sub_78 = v_163;
  } else {
    sub_78 = v_165;
  };
  if (controller_c_pc) {
    v_166 = sub_78;
    sub_77 = false;
  } else {
    v_166 = false;
    sub_77 = sub_78;
  };
  if (controller_ck_18_1) {
    v_167 = v_166;
  } else {
    v_167 = sub_77;
  };
  if (controller_c_closet) {
    sub_76 = v_167;
  } else {
    sub_76 = false;
  };
  sub_75 = sub_76;
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_80 = sub_43;
  sub_79 = sub_80;
  if (controller_cleaner) {
    v_168 = sub_79;
    sub_72 = sub_73;
  } else {
    v_168 = sub_73;
    sub_72 = sub_79;
  };
  if (controller_ck_16_1) {
    sub_71 = v_168;
  } else {
    sub_71 = sub_72;
  };
  sub_84 = sub_58;
  sub_83 = sub_84;
  sub_86 = sub_63;
  sub_85 = sub_86;
  if (controller_cleaner) {
    v_162 = sub_85;
    sub_82 = sub_83;
  } else {
    v_162 = sub_83;
    sub_82 = sub_85;
  };
  if (controller_ck_16_1) {
    sub_81 = v_162;
  } else {
    sub_81 = sub_82;
  };
  if (controller_worker) {
    v_169 = sub_81;
    sub_70 = sub_71;
  } else {
    v_169 = sub_71;
    sub_70 = sub_81;
  };
  if (controller_ck_14_1) {
    sub_69 = v_169;
  } else {
    sub_69 = sub_70;
  };
  if (controller_ck_24_1) {
    v_158 = false;
    sub_92 = sub_43;
  } else {
    v_158 = sub_43;
    sub_92 = false;
  };
  if (controller_c_light_1) {
    v_159 = v_158;
    v_157 = sub_42;
  } else {
    v_159 = sub_92;
    v_157 = sub_92;
  };
  if (controller_light_switch) {
    sub_91 = v_157;
  } else {
    sub_91 = v_159;
  };
  if (controller_cleaner) {
    v_160 = sub_91;
    sub_90 = sub_73;
  } else {
    v_160 = sub_73;
    sub_90 = sub_91;
  };
  if (controller_ck_16_1) {
    sub_89 = v_160;
  } else {
    sub_89 = sub_90;
  };
  if (controller_ck_24_1) {
    v_154 = false;
    sub_96 = sub_58;
  } else {
    v_154 = sub_58;
    sub_96 = false;
  };
  if (controller_c_light_1) {
    v_155 = v_154;
    v_153 = sub_57;
  } else {
    v_155 = sub_96;
    v_153 = sub_96;
  };
  if (controller_light_switch) {
    sub_95 = v_153;
  } else {
    sub_95 = v_155;
  };
  if (controller_ck_24_1) {
    v_151 = false;
    sub_98 = sub_63;
  } else {
    v_151 = sub_63;
    sub_98 = false;
  };
  if (controller_c_light_1) {
    v_152 = v_151;
    v = sub_62;
  } else {
    v_152 = sub_98;
    v = sub_98;
  };
  if (controller_light_switch) {
    sub_97 = v;
  } else {
    sub_97 = v_152;
  };
  if (controller_cleaner) {
    v_156 = sub_97;
    sub_94 = sub_95;
  } else {
    v_156 = sub_95;
    sub_94 = sub_97;
  };
  if (controller_ck_16_1) {
    sub_93 = v_156;
  } else {
    sub_93 = sub_94;
  };
  if (controller_worker) {
    v_161 = sub_93;
    sub_88 = sub_89;
  } else {
    v_161 = sub_89;
    sub_88 = sub_93;
  };
  if (controller_ck_14_1) {
    sub_87 = v_161;
  } else {
    sub_87 = sub_88;
  };
  if (controller_change_shift) {
    v_215 = sub_87;
    sub_68 = sub_69;
  } else {
    v_215 = sub_69;
    sub_68 = sub_87;
  };
  if (controller_ck_1) {
    v_216 = v_215;
  } else {
    v_216 = sub_68;
  };
  if (p_controller_c_light_2) {
    sub_0 = v_216;
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
  int controller_ck_20_1, int controller_pnr_3, int controller_v_123,
  int controller_v_122, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_blind_1,
  int p_controller_c_light_2, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_1_out* _out) {
  
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
  sub_14 = false;
  sub_13 = sub_14;
  if (controller_v_123) {
    sub_12 = false;
  } else {
    sub_12 = sub_13;
  };
  if (controller_v_122) {
    v_256 = sub_12;
  } else {
    v_256 = false;
  };
  if (controller_c_air_1) {
    v_255 = false;
  } else {
    v_255 = sub_12;
  };
  if (controller_v_123) {
    sub_16 = sub_13;
  } else {
    sub_16 = false;
  };
  if (controller_v_122) {
    sub_15 = sub_16;
  } else {
    sub_15 = false;
  };
  if (controller_c_air_1) {
    v_257 = sub_15;
  } else {
    v_257 = v_256;
  };
  if (controller_c_air_2) {
    sub_11 = v_255;
  } else {
    sub_11 = v_257;
  };
  if (controller_c_pc) {
    v_258 = sub_11;
    sub_10 = false;
  } else {
    v_258 = false;
    sub_10 = sub_11;
  };
  if (controller_ck_18_1) {
    v_259 = v_258;
  } else {
    v_259 = sub_10;
  };
  if (controller_c_closet) {
    sub_9 = v_259;
  } else {
    sub_9 = false;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (controller_v_122) {
    v_252 = false;
  } else {
    v_252 = sub_12;
  };
  if (controller_c_air_1) {
    v_253 = v_252;
    v_251 = sub_12;
  } else {
    v_253 = sub_15;
    v_251 = sub_15;
  };
  if (controller_c_air_2) {
    sub_21 = v_251;
  } else {
    sub_21 = v_253;
  };
  if (controller_c_pc) {
    sub_20 = false;
    sub_22 = sub_21;
  } else {
    sub_20 = sub_21;
    sub_22 = false;
  };
  if (controller_ck_18_1) {
    v_254 = sub_22;
  } else {
    v_254 = sub_20;
  };
  if (controller_c_closet) {
    sub_19 = false;
  } else {
    sub_19 = v_254;
  };
  sub_18 = sub_19;
  sub_17 = sub_18;
  if (controller_cleaner) {
    v_260 = sub_17;
    sub_6 = sub_7;
  } else {
    v_260 = sub_7;
    sub_6 = sub_17;
  };
  if (controller_ck_16_1) {
    sub_5 = v_260;
  } else {
    sub_5 = sub_6;
  };
  if (controller_ck_18_1) {
    v_249 = sub_20;
  } else {
    v_249 = sub_22;
  };
  if (controller_c_closet) {
    sub_27 = v_249;
  } else {
    sub_27 = false;
  };
  sub_26 = sub_27;
  sub_25 = sub_26;
  if (controller_v_122) {
    v_245 = false;
    v_244 = sub_12;
  } else {
    v_245 = sub_13;
    v_244 = sub_16;
  };
  if (controller_c_air_1) {
    v_246 = v_244;
  } else {
    v_246 = v_245;
  };
  if (controller_v_122) {
    v_242 = false;
  } else {
    v_242 = sub_16;
  };
  if (controller_c_air_1) {
    v_243 = sub_16;
  } else {
    v_243 = v_242;
  };
  if (controller_c_air_2) {
    sub_32 = v_243;
  } else {
    sub_32 = v_246;
  };
  if (controller_c_pc) {
    v_247 = false;
    sub_31 = sub_32;
  } else {
    v_247 = sub_32;
    sub_31 = false;
  };
  if (controller_ck_18_1) {
    v_248 = v_247;
  } else {
    v_248 = sub_31;
  };
  if (controller_c_closet) {
    sub_30 = false;
  } else {
    sub_30 = v_248;
  };
  sub_29 = sub_30;
  sub_28 = sub_29;
  if (controller_cleaner) {
    v_250 = sub_28;
    sub_24 = sub_25;
  } else {
    v_250 = sub_25;
    sub_24 = sub_28;
  };
  if (controller_ck_16_1) {
    sub_23 = v_250;
  } else {
    sub_23 = sub_24;
  };
  if (controller_worker) {
    v_261 = sub_23;
    sub_4 = sub_5;
  } else {
    v_261 = sub_5;
    sub_4 = sub_23;
  };
  if (controller_ck_14_1) {
    sub_3 = v_261;
  } else {
    sub_3 = sub_4;
  };
  sub_45 = true;
  sub_44 = sub_45;
  if (controller_v_123) {
    sub_43 = false;
  } else {
    sub_43 = sub_44;
  };
  if (controller_v_122) {
    v_237 = false;
  } else {
    v_237 = sub_43;
  };
  if (controller_v_123) {
    sub_47 = sub_44;
  } else {
    sub_47 = false;
  };
  if (controller_v_122) {
    sub_46 = sub_47;
  } else {
    sub_46 = false;
  };
  if (controller_c_air_1) {
    v_238 = v_237;
    v_236 = sub_43;
  } else {
    v_238 = sub_46;
    v_236 = sub_46;
  };
  if (controller_c_air_2) {
    sub_42 = v_236;
  } else {
    sub_42 = v_238;
  };
  if (controller_c_pc) {
    sub_41 = false;
    sub_48 = sub_42;
  } else {
    sub_41 = sub_42;
    sub_48 = false;
  };
  if (controller_ck_18_1) {
    v_239 = sub_48;
  } else {
    v_239 = sub_41;
  };
  if (controller_c_closet) {
    sub_40 = false;
  } else {
    sub_40 = v_239;
  };
  sub_39 = sub_40;
  if (controller_ck_24_1) {
    sub_38 = sub_18;
  } else {
    sub_38 = sub_39;
  };
  sub_37 = sub_38;
  if (controller_cleaner) {
    v_240 = sub_37;
    sub_36 = sub_7;
  } else {
    v_240 = sub_7;
    sub_36 = sub_37;
  };
  if (controller_ck_16_1) {
    sub_35 = v_240;
  } else {
    sub_35 = sub_36;
  };
  if (controller_ck_18_1) {
    v_234 = sub_41;
  } else {
    v_234 = sub_48;
  };
  if (controller_c_closet) {
    sub_54 = v_234;
  } else {
    sub_54 = false;
  };
  sub_53 = sub_54;
  if (controller_ck_24_1) {
    sub_52 = sub_26;
  } else {
    sub_52 = sub_53;
  };
  sub_51 = sub_52;
  if (controller_v_122) {
    v_230 = false;
    v_229 = sub_43;
  } else {
    v_230 = sub_44;
    v_229 = sub_47;
  };
  if (controller_c_air_1) {
    v_231 = v_229;
  } else {
    v_231 = v_230;
  };
  if (controller_v_122) {
    v_227 = false;
  } else {
    v_227 = sub_47;
  };
  if (controller_c_air_1) {
    v_228 = sub_47;
  } else {
    v_228 = v_227;
  };
  if (controller_c_air_2) {
    sub_60 = v_228;
  } else {
    sub_60 = v_231;
  };
  if (controller_c_pc) {
    v_232 = false;
    sub_59 = sub_60;
  } else {
    v_232 = sub_60;
    sub_59 = false;
  };
  if (controller_ck_18_1) {
    v_233 = v_232;
  } else {
    v_233 = sub_59;
  };
  if (controller_c_closet) {
    sub_58 = false;
  } else {
    sub_58 = v_233;
  };
  sub_57 = sub_58;
  if (controller_ck_24_1) {
    sub_56 = sub_29;
  } else {
    sub_56 = sub_57;
  };
  sub_55 = sub_56;
  if (controller_cleaner) {
    v_235 = sub_55;
    sub_50 = sub_51;
  } else {
    v_235 = sub_51;
    sub_50 = sub_55;
  };
  if (controller_ck_16_1) {
    sub_49 = v_235;
  } else {
    sub_49 = sub_50;
  };
  if (controller_worker) {
    v_241 = sub_49;
    sub_34 = sub_35;
  } else {
    v_241 = sub_35;
    sub_34 = sub_49;
  };
  if (controller_ck_14_1) {
    sub_33 = v_241;
  } else {
    sub_33 = sub_34;
  };
  if (controller_change_shift) {
    v_262 = sub_33;
    sub_2 = sub_3;
  } else {
    v_262 = sub_3;
    sub_2 = sub_33;
  };
  if (controller_ck_1) {
    sub_1 = v_262;
  } else {
    sub_1 = sub_2;
  };
  if (controller_v_122) {
    v_221 = sub_43;
  } else {
    v_221 = false;
  };
  if (controller_c_air_1) {
    v_222 = sub_46;
    v_220 = false;
  } else {
    v_222 = v_221;
    v_220 = sub_43;
  };
  if (controller_c_air_2) {
    sub_70 = v_220;
  } else {
    sub_70 = v_222;
  };
  if (controller_c_pc) {
    v_223 = sub_70;
    sub_69 = false;
  } else {
    v_223 = false;
    sub_69 = sub_70;
  };
  if (controller_ck_18_1) {
    v_224 = v_223;
  } else {
    v_224 = sub_69;
  };
  if (controller_c_closet) {
    sub_68 = v_224;
  } else {
    sub_68 = false;
  };
  sub_67 = sub_68;
  sub_66 = sub_67;
  sub_71 = sub_39;
  if (controller_cleaner) {
    v_225 = sub_71;
    sub_65 = sub_66;
  } else {
    v_225 = sub_66;
    sub_65 = sub_71;
  };
  if (controller_ck_16_1) {
    sub_64 = v_225;
  } else {
    sub_64 = sub_65;
  };
  sub_74 = sub_53;
  sub_75 = sub_57;
  if (controller_cleaner) {
    v_219 = sub_75;
    sub_73 = sub_74;
  } else {
    v_219 = sub_74;
    sub_73 = sub_75;
  };
  if (controller_ck_16_1) {
    sub_72 = v_219;
  } else {
    sub_72 = sub_73;
  };
  if (controller_worker) {
    v_226 = sub_72;
    sub_63 = sub_64;
  } else {
    v_226 = sub_64;
    sub_63 = sub_72;
  };
  if (controller_ck_14_1) {
    sub_62 = v_226;
  } else {
    sub_62 = sub_63;
  };
  if (controller_light_switch) {
    sub_80 = sub_39;
  } else {
    sub_80 = sub_38;
  };
  if (controller_cleaner) {
    v_217 = sub_80;
    sub_79 = sub_66;
  } else {
    v_217 = sub_66;
    sub_79 = sub_80;
  };
  if (controller_ck_16_1) {
    sub_78 = v_217;
  } else {
    sub_78 = sub_79;
  };
  if (controller_light_switch) {
    sub_83 = sub_53;
    sub_84 = sub_57;
  } else {
    sub_83 = sub_52;
    sub_84 = sub_56;
  };
  if (controller_cleaner) {
    v = sub_84;
    sub_82 = sub_83;
  } else {
    v = sub_83;
    sub_82 = sub_84;
  };
  if (controller_ck_16_1) {
    sub_81 = v;
  } else {
    sub_81 = sub_82;
  };
  if (controller_worker) {
    v_218 = sub_81;
    sub_77 = sub_78;
  } else {
    v_218 = sub_78;
    sub_77 = sub_81;
  };
  if (controller_ck_14_1) {
    sub_76 = v_218;
  } else {
    sub_76 = sub_77;
  };
  if (controller_change_shift) {
    v_263 = sub_76;
    sub_61 = sub_62;
  } else {
    v_263 = sub_62;
    sub_61 = sub_76;
  };
  if (controller_ck_1) {
    v_264 = v_263;
  } else {
    v_264 = sub_61;
  };
  if (p_controller_c_light_1) {
    sub_0 = v_264;
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
  int controller_ck_20_1, int controller_pnr_3, int controller_v_123,
  int controller_v_122, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_blind_1,
  int p_controller_c_light_2, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_closet_out* _out) {
  
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
  sub_12 = true;
  sub_11 = sub_12;
  if (controller_v_123) {
    sub_10 = false;
  } else {
    sub_10 = sub_11;
  };
  if (controller_v_122) {
    v_281 = sub_10;
  } else {
    v_281 = false;
  };
  if (controller_c_air_1) {
    v_280 = false;
  } else {
    v_280 = sub_10;
  };
  if (controller_v_123) {
    v_279 = sub_11;
  } else {
    v_279 = false;
  };
  if (controller_v_122) {
    sub_13 = v_279;
  } else {
    sub_13 = false;
  };
  if (controller_c_air_1) {
    v_282 = sub_13;
  } else {
    v_282 = v_281;
  };
  if (controller_c_air_2) {
    sub_9 = v_280;
  } else {
    sub_9 = v_282;
  };
  if (controller_c_pc) {
    v_283 = sub_9;
    sub_8 = false;
  } else {
    v_283 = false;
    sub_8 = sub_9;
  };
  if (controller_ck_18_1) {
    sub_7 = v_283;
  } else {
    sub_7 = sub_8;
  };
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_21 = false;
  sub_20 = sub_21;
  if (controller_v_123) {
    sub_19 = false;
  } else {
    sub_19 = sub_20;
  };
  if (controller_v_122) {
    v_276 = false;
  } else {
    v_276 = sub_19;
  };
  if (controller_v_123) {
    sub_23 = sub_20;
  } else {
    sub_23 = false;
  };
  if (controller_v_122) {
    sub_22 = sub_23;
  } else {
    sub_22 = false;
  };
  if (controller_c_air_1) {
    v_277 = v_276;
    v_275 = sub_19;
  } else {
    v_277 = sub_22;
    v_275 = sub_22;
  };
  if (controller_c_air_2) {
    sub_18 = v_275;
  } else {
    sub_18 = v_277;
  };
  if (controller_c_pc) {
    v_278 = sub_18;
    sub_17 = false;
  } else {
    v_278 = false;
    sub_17 = sub_18;
  };
  if (controller_ck_18_1) {
    sub_16 = v_278;
  } else {
    sub_16 = sub_17;
  };
  sub_15 = sub_16;
  sub_14 = sub_15;
  if (controller_cleaner) {
    v_284 = sub_14;
    sub_4 = sub_5;
  } else {
    v_284 = sub_5;
    sub_4 = sub_14;
  };
  if (controller_ck_16_1) {
    sub_3 = v_284;
  } else {
    sub_3 = sub_4;
  };
  if (controller_v_122) {
    v_271 = false;
  } else {
    v_271 = sub_10;
  };
  if (controller_c_air_1) {
    v_272 = v_271;
    v_270 = sub_10;
  } else {
    v_272 = sub_13;
    v_270 = sub_13;
  };
  if (controller_c_air_2) {
    sub_30 = v_270;
  } else {
    sub_30 = v_272;
  };
  if (controller_c_pc) {
    v_273 = false;
    sub_29 = sub_30;
  } else {
    v_273 = sub_30;
    sub_29 = false;
  };
  if (controller_ck_18_1) {
    sub_28 = v_273;
  } else {
    sub_28 = sub_29;
  };
  sub_27 = sub_28;
  sub_26 = sub_27;
  if (controller_v_122) {
    v_267 = false;
    v_266 = sub_19;
  } else {
    v_267 = sub_20;
    v_266 = sub_23;
  };
  if (controller_c_air_1) {
    v_268 = v_266;
  } else {
    v_268 = v_267;
  };
  if (controller_v_122) {
    v = false;
  } else {
    v = sub_23;
  };
  if (controller_c_air_1) {
    v_265 = sub_23;
  } else {
    v_265 = v;
  };
  if (controller_c_air_2) {
    sub_35 = v_265;
  } else {
    sub_35 = v_268;
  };
  if (controller_c_pc) {
    v_269 = false;
    sub_34 = sub_35;
  } else {
    v_269 = sub_35;
    sub_34 = false;
  };
  if (controller_ck_18_1) {
    sub_33 = v_269;
  } else {
    sub_33 = sub_34;
  };
  sub_32 = sub_33;
  sub_31 = sub_32;
  if (controller_cleaner) {
    v_274 = sub_31;
    sub_25 = sub_26;
  } else {
    v_274 = sub_26;
    sub_25 = sub_31;
  };
  if (controller_ck_16_1) {
    sub_24 = v_274;
  } else {
    sub_24 = sub_25;
  };
  if (controller_worker) {
    v_285 = sub_24;
    sub_2 = sub_3;
  } else {
    v_285 = sub_3;
    sub_2 = sub_24;
  };
  if (controller_ck_14_1) {
    sub_1 = v_285;
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
  int controller_ck_20_1, int controller_pnr_3, int controller_v_123,
  int controller_v_122, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_blind_1,
  int p_controller_c_light_2, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_air_1, int controller_c_window,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_2_out* _out) {
  
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
  sub_14 = false;
  sub_13 = sub_14;
  if (controller_v_123) {
    sub_12 = sub_13;
  } else {
    sub_12 = false;
  };
  if (controller_v_122) {
    sub_11 = sub_12;
  } else {
    sub_11 = false;
  };
  sub_17 = true;
  sub_16 = sub_17;
  if (controller_v_123) {
    sub_15 = false;
    sub_18 = false;
  } else {
    sub_15 = sub_16;
    sub_18 = sub_13;
  };
  if (controller_v_122) {
    v_297 = sub_18;
  } else {
    v_297 = sub_15;
  };
  if (controller_c_air_1) {
    sub_10 = sub_11;
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
    sub_8 = v_298;
  } else {
    sub_8 = sub_9;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (controller_v_122) {
    v_296 = sub_15;
  } else {
    v_296 = sub_18;
  };
  if (controller_c_air_1) {
    sub_23 = v_296;
  } else {
    sub_23 = sub_11;
  };
  if (controller_c_pc) {
    sub_22 = false;
    sub_24 = sub_23;
  } else {
    sub_22 = sub_23;
    sub_24 = false;
  };
  if (controller_ck_18_1) {
    sub_21 = sub_24;
  } else {
    sub_21 = sub_22;
  };
  sub_20 = sub_21;
  sub_19 = sub_20;
  if (controller_cleaner) {
    v_299 = sub_19;
    sub_5 = sub_6;
  } else {
    v_299 = sub_6;
    sub_5 = sub_19;
  };
  if (controller_ck_16_1) {
    sub_4 = v_299;
  } else {
    sub_4 = sub_5;
  };
  if (controller_ck_18_1) {
    sub_29 = sub_22;
  } else {
    sub_29 = sub_24;
  };
  sub_28 = sub_29;
  sub_27 = sub_28;
  if (controller_v_122) {
    v_293 = false;
  } else {
    v_293 = sub_13;
  };
  if (controller_v_123) {
    sub_35 = sub_16;
  } else {
    sub_35 = sub_13;
  };
  if (controller_v_122) {
    v_292 = sub_35;
  } else {
    v_292 = sub_12;
  };
  if (controller_c_air_1) {
    sub_34 = v_292;
  } else {
    sub_34 = v_293;
  };
  if (controller_c_pc) {
    v_294 = false;
    sub_33 = sub_34;
  } else {
    v_294 = sub_34;
    sub_33 = false;
  };
  if (controller_ck_18_1) {
    sub_32 = v_294;
  } else {
    sub_32 = sub_33;
  };
  sub_31 = sub_32;
  sub_30 = sub_31;
  if (controller_cleaner) {
    v_295 = sub_30;
    sub_26 = sub_27;
  } else {
    v_295 = sub_27;
    sub_26 = sub_30;
  };
  if (controller_ck_16_1) {
    sub_25 = v_295;
  } else {
    sub_25 = sub_26;
  };
  if (controller_worker) {
    v_300 = sub_25;
    sub_3 = sub_4;
  } else {
    v_300 = sub_4;
    sub_3 = sub_25;
  };
  if (controller_ck_14_1) {
    sub_2 = v_300;
  } else {
    sub_2 = sub_3;
  };
  if (controller_c_air_1) {
    sub_43 = sub_11;
  } else {
    sub_43 = sub_15;
  };
  if (controller_c_pc) {
    v_290 = sub_43;
    sub_42 = false;
  } else {
    v_290 = false;
    sub_42 = sub_43;
  };
  if (controller_ck_18_1) {
    sub_41 = v_290;
  } else {
    sub_41 = sub_42;
  };
  sub_40 = sub_41;
  sub_39 = sub_40;
  if (controller_v_123) {
    sub_49 = sub_16;
  } else {
    sub_49 = false;
  };
  if (controller_v_122) {
    v_289 = sub_49;
  } else {
    v_289 = false;
  };
  if (controller_c_air_1) {
    sub_48 = sub_15;
  } else {
    sub_48 = v_289;
  };
  if (controller_c_pc) {
    sub_47 = false;
    sub_50 = sub_48;
  } else {
    sub_47 = sub_48;
    sub_50 = false;
  };
  if (controller_ck_18_1) {
    sub_46 = sub_50;
  } else {
    sub_46 = sub_47;
  };
  sub_45 = sub_46;
  sub_44 = sub_45;
  if (controller_cleaner) {
    v_291 = sub_44;
    sub_38 = sub_39;
  } else {
    v_291 = sub_39;
    sub_38 = sub_44;
  };
  if (controller_ck_16_1) {
    sub_37 = v_291;
  } else {
    sub_37 = sub_38;
  };
  if (controller_ck_18_1) {
    sub_55 = sub_47;
  } else {
    sub_55 = sub_50;
  };
  sub_54 = sub_55;
  sub_53 = sub_54;
  if (controller_v_122) {
    v_286 = false;
    v = sub_35;
  } else {
    v_286 = sub_35;
    v = sub_49;
  };
  if (controller_c_air_1) {
    sub_60 = v;
  } else {
    sub_60 = v_286;
  };
  if (controller_c_pc) {
    v_287 = false;
    sub_59 = sub_60;
  } else {
    v_287 = sub_60;
    sub_59 = false;
  };
  if (controller_ck_18_1) {
    sub_58 = v_287;
  } else {
    sub_58 = sub_59;
  };
  sub_57 = sub_58;
  sub_56 = sub_57;
  if (controller_cleaner) {
    v_288 = sub_56;
    sub_52 = sub_53;
  } else {
    v_288 = sub_53;
    sub_52 = sub_56;
  };
  if (controller_ck_16_1) {
    sub_51 = v_288;
  } else {
    sub_51 = sub_52;
  };
  if (controller_worker) {
    v_301 = sub_51;
    sub_36 = sub_37;
  } else {
    v_301 = sub_37;
    sub_36 = sub_51;
  };
  if (controller_ck_14_1) {
    v_302 = v_301;
  } else {
    v_302 = sub_36;
  };
  if (p_controller_c_air_2) {
    sub_1 = v_302;
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
  int controller_ck_20_1, int controller_pnr_3, int controller_v_123,
  int controller_v_122, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_blind_1,
  int p_controller_c_light_2, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_1_out* _out) {
  
  int v_308;
  int v_307;
  int v_306;
  int v_305;
  int v_304;
  int v_303;
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
  sub_12 = false;
  sub_11 = sub_12;
  if (controller_v_123) {
    sub_10 = false;
  } else {
    sub_10 = sub_11;
  };
  sub_14 = true;
  sub_13 = sub_14;
  if (controller_v_123) {
    v_305 = sub_13;
  } else {
    v_305 = sub_11;
  };
  if (controller_v_122) {
    sub_9 = v_305;
  } else {
    sub_9 = sub_10;
  };
  if (controller_c_pc) {
    v_306 = sub_9;
    sub_8 = false;
  } else {
    v_306 = false;
    sub_8 = sub_9;
  };
  if (controller_ck_18_1) {
    sub_7 = v_306;
  } else {
    sub_7 = sub_8;
  };
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (controller_v_123) {
    v_304 = sub_11;
    sub_20 = false;
  } else {
    v_304 = sub_13;
    sub_20 = sub_13;
  };
  if (controller_v_122) {
    sub_19 = v_304;
  } else {
    sub_19 = sub_20;
  };
  if (controller_c_pc) {
    sub_18 = false;
    sub_21 = sub_19;
  } else {
    sub_18 = sub_19;
    sub_21 = false;
  };
  if (controller_ck_18_1) {
    sub_17 = sub_21;
  } else {
    sub_17 = sub_18;
  };
  sub_16 = sub_17;
  sub_15 = sub_16;
  if (controller_cleaner) {
    v_307 = sub_15;
    sub_4 = sub_5;
  } else {
    v_307 = sub_5;
    sub_4 = sub_15;
  };
  if (controller_ck_16_1) {
    sub_3 = v_307;
  } else {
    sub_3 = sub_4;
  };
  if (controller_ck_18_1) {
    sub_26 = sub_18;
  } else {
    sub_26 = sub_21;
  };
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_34 = p_controller_c_air_1;
  sub_33 = sub_34;
  if (controller_v_123) {
    sub_32 = sub_33;
  } else {
    sub_32 = sub_11;
  };
  if (controller_v_122) {
    sub_31 = sub_13;
  } else {
    sub_31 = sub_32;
  };
  if (controller_c_pc) {
    v = false;
    sub_30 = sub_31;
  } else {
    v = sub_31;
    sub_30 = false;
  };
  if (controller_ck_18_1) {
    sub_29 = v;
  } else {
    sub_29 = sub_30;
  };
  sub_28 = sub_29;
  sub_27 = sub_28;
  if (controller_cleaner) {
    v_303 = sub_27;
    sub_23 = sub_24;
  } else {
    v_303 = sub_24;
    sub_23 = sub_27;
  };
  if (controller_ck_16_1) {
    sub_22 = v_303;
  } else {
    sub_22 = sub_23;
  };
  if (controller_worker) {
    v_308 = sub_22;
    sub_2 = sub_3;
  } else {
    v_308 = sub_3;
    sub_2 = sub_22;
  };
  if (controller_ck_14_1) {
    sub_1 = v_308;
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
  int controller_ck_20_1, int controller_pnr_3, int controller_v_123,
  int controller_v_122, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_blind_1,
  int p_controller_c_light_2, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_window_out* _out) {
  
  int v_310;
  int v_309;
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
  sub_11 = p_controller_c_window;
  sub_10 = sub_11;
  if (controller_v_123) {
    sub_9 = false;
  } else {
    sub_9 = sub_10;
  };
  if (controller_v_122) {
    sub_8 = sub_10;
  } else {
    sub_8 = sub_9;
  };
  if (controller_c_pc) {
    sub_7 = false;
    sub_12 = sub_8;
  } else {
    sub_7 = sub_8;
    sub_12 = false;
  };
  if (controller_ck_18_1) {
    sub_6 = sub_12;
  } else {
    sub_6 = sub_7;
  };
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  if (controller_ck_18_1) {
    sub_17 = sub_7;
  } else {
    sub_17 = sub_12;
  };
  sub_16 = sub_17;
  sub_15 = sub_16;
  if (controller_c_pc) {
    v = false;
    sub_21 = sub_10;
  } else {
    v = sub_10;
    sub_21 = false;
  };
  if (controller_ck_18_1) {
    sub_20 = v;
  } else {
    sub_20 = sub_21;
  };
  sub_19 = sub_20;
  sub_18 = sub_19;
  if (controller_cleaner) {
    v_309 = sub_18;
    sub_14 = sub_15;
  } else {
    v_309 = sub_15;
    sub_14 = sub_18;
  };
  if (controller_ck_16_1) {
    sub_13 = v_309;
  } else {
    sub_13 = sub_14;
  };
  if (controller_worker) {
    v_310 = sub_13;
    sub_2 = sub_3;
  } else {
    v_310 = sub_3;
    sub_2 = sub_13;
  };
  if (controller_ck_14_1) {
    sub_1 = v_310;
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
  int controller_ck_20_1, int controller_pnr_3, int controller_v_123,
  int controller_v_122, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_blind_1,
  int p_controller_c_light_2, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_door,
  Controller_controller__controller_controller_controller_c_pc_out* _out) {
  
  int v_311;
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
  sub_9 = false;
  if (controller_v_123) {
    sub_8 = false;
  } else {
    sub_8 = sub_9;
  };
  if (controller_v_122) {
    sub_7 = sub_9;
  } else {
    sub_7 = sub_8;
  };
  sub_12 = true;
  if (controller_v_123) {
    sub_11 = false;
  } else {
    sub_11 = sub_12;
  };
  if (controller_v_122) {
    sub_10 = sub_12;
  } else {
    sub_10 = sub_11;
  };
  if (controller_ck_18_1) {
    sub_6 = sub_10;
  } else {
    sub_6 = sub_7;
  };
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  if (controller_ck_18_1) {
    sub_17 = sub_7;
  } else {
    sub_17 = sub_10;
  };
  sub_16 = sub_17;
  sub_15 = sub_16;
  if (controller_ck_18_1) {
    sub_20 = sub_9;
  } else {
    sub_20 = sub_12;
  };
  sub_19 = sub_20;
  sub_18 = sub_19;
  if (controller_cleaner) {
    v = sub_18;
    sub_14 = sub_15;
  } else {
    v = sub_15;
    sub_14 = sub_18;
  };
  if (controller_ck_16_1) {
    sub_13 = v;
  } else {
    sub_13 = sub_14;
  };
  if (controller_worker) {
    v_311 = sub_13;
    sub_2 = sub_3;
  } else {
    v_311 = sub_3;
    sub_2 = sub_13;
  };
  if (controller_ck_14_1) {
    sub_1 = v_311;
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
  int controller_ck_20_1, int controller_pnr_3, int controller_v_123,
  int controller_v_122, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_blind_1,
  int p_controller_c_light_2, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door,
  Controller_controller__controller_controller_controller_c_door_out* _out) {
  
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
  sub_8 = p_controller_c_door;
  if (controller_v_123) {
    sub_7 = false;
  } else {
    sub_7 = sub_8;
  };
  if (controller_v_122) {
    sub_6 = sub_8;
  } else {
    sub_6 = sub_7;
  };
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_12 = sub_8;
  sub_11 = sub_12;
  if (controller_cleaner) {
    v = sub_11;
    sub_10 = sub_4;
  } else {
    v = sub_4;
    sub_10 = sub_11;
  };
  if (controller_ck_16_1) {
    sub_9 = v;
  } else {
    sub_9 = sub_10;
  };
  if (controller_worker) {
    v_312 = sub_9;
    sub_2 = sub_3;
  } else {
    v_312 = sub_3;
    sub_2 = sub_9;
  };
  if (controller_ck_14_1) {
    sub_1 = v_312;
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
                                                       int controller_v_123,
                                                       int controller_v_122,
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
  controller_pnr_3, controller_v_123, controller_v_122, controller_pnr_2,
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
                                                                    controller_v_123,
                                                                    controller_v_122,
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
  controller_pnr_3, controller_v_123, controller_v_122, controller_pnr_2,
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
  controller_pnr_3, controller_v_123, controller_v_122, controller_pnr_2,
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
  controller_pnr_3, controller_v_123, controller_v_122, controller_pnr_2,
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
  controller_pnr_3, controller_v_123, controller_v_122, controller_pnr_2,
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
  controller_pnr_3, controller_v_123, controller_v_122, controller_pnr_2,
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
  controller_pnr_3, controller_v_123, controller_v_122, controller_pnr_2,
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
  controller_pnr_3, controller_v_123, controller_v_122, controller_pnr_2,
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
  controller_pnr_3, controller_v_123, controller_v_122, controller_pnr_2,
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

