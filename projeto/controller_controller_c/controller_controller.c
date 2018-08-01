/* --- Generated the 1/8/2018 at 9:33 --- */
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
  int controller_ck_20_1, int controller_pnr_3, int controller_v_122,
  int controller_v_121, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_light_2,
  int controller_c_blind_1, int controller_c_light_1,
  int controller_c_closet, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_blind_2_out* _out) {
  
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
  sub_16 = false;
  sub_15 = sub_16;
  if (controller_v_122) {
    sub_14 = false;
  } else {
    sub_14 = sub_15;
  };
  if (controller_v_121) {
    v_79 = sub_14;
  } else {
    v_79 = false;
  };
  if (controller_c_air_1) {
    v_78 = false;
  } else {
    v_78 = sub_14;
  };
  if (controller_v_122) {
    sub_18 = sub_15;
  } else {
    sub_18 = false;
  };
  if (controller_v_121) {
    sub_17 = sub_18;
  } else {
    sub_17 = false;
  };
  if (controller_c_air_1) {
    v_80 = sub_17;
  } else {
    v_80 = v_79;
  };
  if (controller_c_air_2) {
    sub_13 = v_78;
  } else {
    sub_13 = v_80;
  };
  if (controller_ck_18_1) {
    v_82 = false;
    v_81 = sub_13;
  } else {
    v_82 = sub_13;
    v_81 = false;
  };
  if (controller_c_pc) {
    sub_12 = v_81;
  } else {
    sub_12 = v_82;
  };
  sub_11 = sub_12;
  if (controller_c_closet) {
    sub_10 = sub_11;
  } else {
    sub_10 = false;
  };
  sub_24 = true;
  sub_23 = sub_24;
  if (controller_v_122) {
    sub_22 = false;
  } else {
    sub_22 = sub_23;
  };
  if (controller_v_121) {
    v_72 = sub_22;
  } else {
    v_72 = false;
  };
  if (controller_c_air_1) {
    v_71 = false;
  } else {
    v_71 = sub_22;
  };
  if (controller_v_122) {
    sub_26 = sub_23;
  } else {
    sub_26 = false;
  };
  if (controller_v_121) {
    sub_25 = sub_26;
  } else {
    sub_25 = false;
  };
  if (controller_c_air_1) {
    v_73 = sub_25;
  } else {
    v_73 = v_72;
  };
  if (controller_c_air_2) {
    sub_21 = v_71;
  } else {
    sub_21 = v_73;
  };
  if (controller_ck_18_1) {
    v_75 = false;
    v_74 = sub_21;
  } else {
    v_75 = sub_21;
    v_74 = false;
  };
  if (controller_c_pc) {
    sub_20 = v_74;
  } else {
    sub_20 = v_75;
  };
  if (controller_blind_switch) {
    v_76 = false;
  } else {
    v_76 = sub_20;
  };
  if (controller_c_blind_1) {
    v_77 = v_76;
  } else {
    v_77 = sub_20;
  };
  if (controller_c_closet) {
    sub_19 = v_77;
  } else {
    sub_19 = false;
  };
  if (controller_ck_26_1) {
    sub_9 = sub_19;
  } else {
    sub_9 = sub_10;
  };
  if (controller_ck_24_1) {
    sub_8 = false;
    v_70 = sub_9;
  } else {
    sub_8 = sub_9;
    v_70 = false;
  };
  if (controller_c_light_2) {
    sub_27 = v_70;
  } else {
    sub_27 = sub_8;
  };
  if (controller_light_switch) {
    v_83 = sub_8;
  } else {
    v_83 = sub_27;
  };
  if (controller_c_light_1) {
    sub_7 = v_83;
  } else {
    sub_7 = sub_27;
  };
  if (controller_v_121) {
    v_65 = false;
  } else {
    v_65 = sub_22;
  };
  if (controller_c_air_1) {
    v_66 = v_65;
    v_64 = sub_22;
  } else {
    v_66 = sub_25;
    v_64 = sub_25;
  };
  if (controller_c_air_2) {
    sub_34 = v_64;
  } else {
    sub_34 = v_66;
  };
  if (controller_ck_18_1) {
    sub_33 = sub_34;
    sub_35 = false;
  } else {
    sub_33 = false;
    sub_35 = sub_34;
  };
  if (controller_c_pc) {
    sub_32 = sub_33;
  } else {
    sub_32 = sub_35;
  };
  if (controller_blind_switch) {
    v_67 = false;
  } else {
    v_67 = sub_32;
  };
  sub_36 = sub_32;
  if (controller_c_blind_1) {
    v_68 = v_67;
  } else {
    v_68 = sub_36;
  };
  if (controller_c_closet) {
    sub_31 = false;
  } else {
    sub_31 = v_68;
  };
  if (controller_v_121) {
    v_62 = false;
  } else {
    v_62 = sub_14;
  };
  if (controller_c_air_1) {
    v_63 = v_62;
    v_61 = sub_14;
  } else {
    v_63 = sub_17;
    v_61 = sub_17;
  };
  if (controller_c_air_2) {
    sub_41 = v_61;
  } else {
    sub_41 = v_63;
  };
  if (controller_ck_18_1) {
    sub_40 = sub_41;
    sub_42 = false;
  } else {
    sub_40 = false;
    sub_42 = sub_41;
  };
  if (controller_c_pc) {
    sub_39 = sub_40;
  } else {
    sub_39 = sub_42;
  };
  sub_38 = sub_39;
  if (controller_c_closet) {
    sub_37 = false;
  } else {
    sub_37 = sub_38;
  };
  if (controller_ck_26_1) {
    sub_30 = sub_37;
  } else {
    sub_30 = sub_31;
  };
  if (controller_ck_24_1) {
    sub_29 = sub_37;
    v_60 = sub_30;
  } else {
    sub_29 = sub_30;
    v_60 = sub_37;
  };
  if (controller_c_light_2) {
    sub_43 = v_60;
  } else {
    sub_43 = sub_29;
  };
  if (controller_light_switch) {
    v_69 = sub_29;
  } else {
    v_69 = sub_43;
  };
  if (controller_c_light_1) {
    sub_28 = v_69;
  } else {
    sub_28 = sub_43;
  };
  if (controller_cleaner) {
    v_84 = sub_28;
    sub_6 = sub_7;
  } else {
    v_84 = sub_7;
    sub_6 = sub_28;
  };
  if (controller_ck_16_1) {
    sub_5 = v_84;
  } else {
    sub_5 = sub_6;
  };
  if (controller_c_pc) {
    sub_50 = sub_35;
  } else {
    sub_50 = sub_33;
  };
  if (controller_blind_switch) {
    v_56 = false;
  } else {
    v_56 = sub_50;
  };
  sub_51 = sub_50;
  if (controller_c_blind_1) {
    v_57 = v_56;
  } else {
    v_57 = sub_51;
  };
  if (controller_c_closet) {
    sub_49 = v_57;
  } else {
    sub_49 = false;
  };
  if (controller_c_pc) {
    sub_54 = sub_42;
  } else {
    sub_54 = sub_40;
  };
  sub_53 = sub_54;
  if (controller_c_closet) {
    sub_52 = sub_53;
  } else {
    sub_52 = false;
  };
  if (controller_ck_26_1) {
    sub_48 = sub_52;
  } else {
    sub_48 = sub_49;
  };
  if (controller_ck_24_1) {
    sub_47 = sub_52;
    v_55 = sub_48;
  } else {
    sub_47 = sub_48;
    v_55 = sub_52;
  };
  if (controller_c_light_2) {
    sub_55 = v_55;
  } else {
    sub_55 = sub_47;
  };
  if (controller_light_switch) {
    v_58 = sub_47;
  } else {
    v_58 = sub_55;
  };
  if (controller_c_light_1) {
    sub_46 = v_58;
  } else {
    sub_46 = sub_55;
  };
  if (controller_v_121) {
    v_48 = false;
    v_47 = sub_22;
  } else {
    v_48 = sub_23;
    v_47 = sub_26;
  };
  if (controller_c_air_1) {
    v_49 = v_47;
  } else {
    v_49 = v_48;
  };
  if (controller_v_121) {
    v_45 = false;
  } else {
    v_45 = sub_26;
  };
  if (controller_c_air_1) {
    v_46 = sub_26;
  } else {
    v_46 = v_45;
  };
  if (controller_c_air_2) {
    sub_61 = v_46;
  } else {
    sub_61 = v_49;
  };
  if (controller_ck_18_1) {
    v_51 = sub_61;
    v_50 = false;
  } else {
    v_51 = false;
    v_50 = sub_61;
  };
  if (controller_c_pc) {
    sub_60 = v_50;
  } else {
    sub_60 = v_51;
  };
  if (controller_blind_switch) {
    v_52 = false;
  } else {
    v_52 = sub_60;
  };
  sub_62 = sub_60;
  if (controller_c_blind_1) {
    v_53 = v_52;
  } else {
    v_53 = sub_62;
  };
  if (controller_c_closet) {
    sub_59 = false;
  } else {
    sub_59 = v_53;
  };
  if (controller_v_121) {
    v_41 = false;
    v_40 = sub_14;
  } else {
    v_41 = sub_15;
    v_40 = sub_18;
  };
  if (controller_c_air_1) {
    v_42 = v_40;
  } else {
    v_42 = v_41;
  };
  if (controller_v_121) {
    v_38 = false;
  } else {
    v_38 = sub_18;
  };
  if (controller_c_air_1) {
    v_39 = sub_18;
  } else {
    v_39 = v_38;
  };
  if (controller_c_air_2) {
    sub_66 = v_39;
  } else {
    sub_66 = v_42;
  };
  if (controller_ck_18_1) {
    v_44 = sub_66;
    v_43 = false;
  } else {
    v_44 = false;
    v_43 = sub_66;
  };
  if (controller_c_pc) {
    sub_65 = v_43;
  } else {
    sub_65 = v_44;
  };
  sub_64 = sub_65;
  if (controller_c_closet) {
    sub_63 = false;
  } else {
    sub_63 = sub_64;
  };
  if (controller_ck_26_1) {
    sub_58 = sub_63;
  } else {
    sub_58 = sub_59;
  };
  if (controller_ck_24_1) {
    sub_57 = sub_63;
    v_37 = sub_58;
  } else {
    sub_57 = sub_58;
    v_37 = sub_63;
  };
  if (controller_c_light_2) {
    sub_67 = v_37;
  } else {
    sub_67 = sub_57;
  };
  if (controller_light_switch) {
    v_54 = sub_57;
  } else {
    v_54 = sub_67;
  };
  if (controller_c_light_1) {
    sub_56 = v_54;
  } else {
    sub_56 = sub_67;
  };
  if (controller_cleaner) {
    v_59 = sub_56;
    sub_45 = sub_46;
  } else {
    v_59 = sub_46;
    sub_45 = sub_56;
  };
  if (controller_ck_16_1) {
    sub_44 = v_59;
  } else {
    sub_44 = sub_45;
  };
  if (controller_worker) {
    v_85 = sub_44;
    sub_4 = sub_5;
  } else {
    v_85 = sub_5;
    sub_4 = sub_44;
  };
  if (controller_ck_14_1) {
    sub_3 = v_85;
  } else {
    sub_3 = sub_4;
  };
  if (controller_ck_26_1) {
    sub_74 = sub_31;
  } else {
    sub_74 = sub_37;
  };
  if (controller_ck_24_1) {
    sub_73 = sub_74;
    v_33 = false;
  } else {
    sub_73 = false;
    v_33 = sub_74;
  };
  if (controller_c_light_2) {
    sub_75 = v_33;
  } else {
    sub_75 = sub_73;
  };
  if (controller_light_switch) {
    v_34 = sub_73;
  } else {
    v_34 = sub_75;
  };
  if (controller_c_light_1) {
    sub_72 = v_34;
  } else {
    sub_72 = sub_75;
  };
  if (controller_cleaner) {
    v_35 = sub_72;
    sub_71 = sub_7;
  } else {
    v_35 = sub_7;
    sub_71 = sub_72;
  };
  if (controller_ck_16_1) {
    sub_70 = v_35;
  } else {
    sub_70 = sub_71;
  };
  if (controller_ck_26_1) {
    sub_80 = sub_49;
  } else {
    sub_80 = sub_52;
  };
  if (controller_ck_24_1) {
    sub_79 = sub_80;
    v_30 = false;
  } else {
    sub_79 = false;
    v_30 = sub_80;
  };
  if (controller_c_light_2) {
    sub_81 = v_30;
  } else {
    sub_81 = sub_79;
  };
  if (controller_light_switch) {
    v_31 = sub_79;
  } else {
    v_31 = sub_81;
  };
  if (controller_c_light_1) {
    sub_78 = v_31;
  } else {
    sub_78 = sub_81;
  };
  if (controller_ck_26_1) {
    sub_84 = sub_59;
  } else {
    sub_84 = sub_63;
  };
  if (controller_ck_24_1) {
    sub_83 = sub_84;
    v_28 = false;
  } else {
    sub_83 = false;
    v_28 = sub_84;
  };
  if (controller_c_light_2) {
    sub_85 = v_28;
  } else {
    sub_85 = sub_83;
  };
  if (controller_light_switch) {
    v_29 = sub_83;
  } else {
    v_29 = sub_85;
  };
  if (controller_c_light_1) {
    sub_82 = v_29;
  } else {
    sub_82 = sub_85;
  };
  if (controller_cleaner) {
    v_32 = sub_82;
    sub_77 = sub_78;
  } else {
    v_32 = sub_78;
    sub_77 = sub_82;
  };
  if (controller_ck_16_1) {
    sub_76 = v_32;
  } else {
    sub_76 = sub_77;
  };
  if (controller_worker) {
    v_36 = sub_76;
    sub_69 = sub_70;
  } else {
    v_36 = sub_70;
    sub_69 = sub_76;
  };
  if (controller_ck_14_1) {
    sub_68 = v_36;
  } else {
    sub_68 = sub_69;
  };
  if (controller_change_shift) {
    v_86 = sub_68;
    sub_2 = sub_3;
  } else {
    v_86 = sub_3;
    sub_2 = sub_68;
  };
  if (controller_ck_1) {
    sub_1 = v_86;
  } else {
    sub_1 = sub_2;
  };
  if (controller_blind_switch) {
    v_23 = sub_20;
  } else {
    v_23 = sub_12;
  };
  if (controller_c_blind_1) {
    v_24 = v_23;
  } else {
    v_24 = sub_11;
  };
  if (controller_c_closet) {
    sub_94 = v_24;
  } else {
    sub_94 = false;
  };
  if (controller_ck_26_1) {
    sub_93 = sub_19;
  } else {
    sub_93 = sub_94;
  };
  if (controller_ck_24_1) {
    sub_92 = false;
    v_22 = sub_93;
  } else {
    sub_92 = sub_93;
    v_22 = false;
  };
  if (controller_c_light_2) {
    sub_95 = v_22;
  } else {
    sub_95 = sub_92;
  };
  if (controller_light_switch) {
    v_25 = sub_92;
  } else {
    v_25 = sub_95;
  };
  if (controller_c_light_1) {
    sub_91 = v_25;
  } else {
    sub_91 = sub_95;
  };
  if (controller_blind_switch) {
    v_19 = sub_32;
  } else {
    v_19 = sub_39;
  };
  if (controller_c_blind_1) {
    v_20 = v_19;
  } else {
    v_20 = sub_38;
  };
  if (controller_c_closet) {
    sub_99 = false;
  } else {
    sub_99 = v_20;
  };
  if (controller_ck_26_1) {
    sub_98 = sub_99;
  } else {
    sub_98 = sub_31;
  };
  if (controller_c_closet) {
    sub_100 = false;
  } else {
    sub_100 = sub_36;
  };
  if (controller_ck_24_1) {
    sub_97 = sub_100;
    v_18 = sub_98;
  } else {
    sub_97 = sub_98;
    v_18 = sub_100;
  };
  if (controller_c_light_2) {
    sub_101 = v_18;
  } else {
    sub_101 = sub_97;
  };
  if (controller_light_switch) {
    v_21 = sub_97;
  } else {
    v_21 = sub_101;
  };
  if (controller_c_light_1) {
    sub_96 = v_21;
  } else {
    sub_96 = sub_101;
  };
  if (controller_cleaner) {
    v_26 = sub_96;
    sub_90 = sub_91;
  } else {
    v_26 = sub_91;
    sub_90 = sub_96;
  };
  if (controller_ck_16_1) {
    sub_89 = v_26;
  } else {
    sub_89 = sub_90;
  };
  if (controller_blind_switch) {
    v_14 = sub_50;
  } else {
    v_14 = sub_54;
  };
  if (controller_c_blind_1) {
    v_15 = v_14;
  } else {
    v_15 = sub_53;
  };
  if (controller_c_closet) {
    sub_107 = v_15;
  } else {
    sub_107 = false;
  };
  if (controller_ck_26_1) {
    sub_106 = sub_107;
  } else {
    sub_106 = sub_49;
  };
  if (controller_c_closet) {
    sub_108 = sub_51;
  } else {
    sub_108 = false;
  };
  if (controller_ck_24_1) {
    sub_105 = sub_108;
    v_13 = sub_106;
  } else {
    sub_105 = sub_106;
    v_13 = sub_108;
  };
  if (controller_c_light_2) {
    sub_109 = v_13;
  } else {
    sub_109 = sub_105;
  };
  if (controller_light_switch) {
    v_16 = sub_105;
  } else {
    v_16 = sub_109;
  };
  if (controller_c_light_1) {
    sub_104 = v_16;
  } else {
    sub_104 = sub_109;
  };
  if (controller_blind_switch) {
    v_10 = sub_60;
  } else {
    v_10 = sub_65;
  };
  if (controller_c_blind_1) {
    v_11 = v_10;
  } else {
    v_11 = sub_64;
  };
  if (controller_c_closet) {
    sub_113 = false;
  } else {
    sub_113 = v_11;
  };
  if (controller_ck_26_1) {
    sub_112 = sub_113;
  } else {
    sub_112 = sub_59;
  };
  if (controller_c_closet) {
    sub_114 = false;
  } else {
    sub_114 = sub_62;
  };
  if (controller_ck_24_1) {
    sub_111 = sub_114;
    v_9 = sub_112;
  } else {
    sub_111 = sub_112;
    v_9 = sub_114;
  };
  if (controller_c_light_2) {
    sub_115 = v_9;
  } else {
    sub_115 = sub_111;
  };
  if (controller_light_switch) {
    v_12 = sub_111;
  } else {
    v_12 = sub_115;
  };
  if (controller_c_light_1) {
    sub_110 = v_12;
  } else {
    sub_110 = sub_115;
  };
  if (controller_cleaner) {
    v_17 = sub_110;
    sub_103 = sub_104;
  } else {
    v_17 = sub_104;
    sub_103 = sub_110;
  };
  if (controller_ck_16_1) {
    sub_102 = v_17;
  } else {
    sub_102 = sub_103;
  };
  if (controller_worker) {
    v_27 = sub_102;
    sub_88 = sub_89;
  } else {
    v_27 = sub_89;
    sub_88 = sub_102;
  };
  if (controller_ck_14_1) {
    sub_87 = v_27;
  } else {
    sub_87 = sub_88;
  };
  if (controller_ck_26_1) {
    sub_122 = sub_31;
  } else {
    sub_122 = sub_99;
  };
  if (controller_ck_24_1) {
    sub_121 = sub_122;
    v_5 = false;
  } else {
    sub_121 = false;
    v_5 = sub_122;
  };
  if (controller_c_light_2) {
    sub_123 = v_5;
  } else {
    sub_123 = sub_121;
  };
  if (controller_light_switch) {
    v_6 = sub_121;
  } else {
    v_6 = sub_123;
  };
  if (controller_c_light_1) {
    sub_120 = v_6;
  } else {
    sub_120 = sub_123;
  };
  if (controller_cleaner) {
    v_7 = sub_120;
    sub_119 = sub_91;
  } else {
    v_7 = sub_91;
    sub_119 = sub_120;
  };
  if (controller_ck_16_1) {
    sub_118 = v_7;
  } else {
    sub_118 = sub_119;
  };
  if (controller_ck_26_1) {
    sub_128 = sub_49;
  } else {
    sub_128 = sub_107;
  };
  if (controller_ck_24_1) {
    sub_127 = sub_128;
    v_2 = false;
  } else {
    sub_127 = false;
    v_2 = sub_128;
  };
  if (controller_c_light_2) {
    sub_129 = v_2;
  } else {
    sub_129 = sub_127;
  };
  if (controller_light_switch) {
    v_3 = sub_127;
  } else {
    v_3 = sub_129;
  };
  if (controller_c_light_1) {
    sub_126 = v_3;
  } else {
    sub_126 = sub_129;
  };
  if (controller_ck_26_1) {
    sub_132 = sub_59;
  } else {
    sub_132 = sub_113;
  };
  if (controller_ck_24_1) {
    sub_131 = sub_132;
    v = false;
  } else {
    sub_131 = false;
    v = sub_132;
  };
  if (controller_c_light_2) {
    sub_133 = v;
  } else {
    sub_133 = sub_131;
  };
  if (controller_light_switch) {
    v_1 = sub_131;
  } else {
    v_1 = sub_133;
  };
  if (controller_c_light_1) {
    sub_130 = v_1;
  } else {
    sub_130 = sub_133;
  };
  if (controller_cleaner) {
    v_4 = sub_130;
    sub_125 = sub_126;
  } else {
    v_4 = sub_126;
    sub_125 = sub_130;
  };
  if (controller_ck_16_1) {
    sub_124 = v_4;
  } else {
    sub_124 = sub_125;
  };
  if (controller_worker) {
    v_8 = sub_124;
    sub_117 = sub_118;
  } else {
    v_8 = sub_118;
    sub_117 = sub_124;
  };
  if (controller_ck_14_1) {
    sub_116 = v_8;
  } else {
    sub_116 = sub_117;
  };
  if (controller_change_shift) {
    v_87 = sub_116;
    sub_86 = sub_87;
  } else {
    v_87 = sub_87;
    sub_86 = sub_116;
  };
  if (controller_ck_1) {
    v_88 = v_87;
  } else {
    v_88 = sub_86;
  };
  if (p_controller_c_blind_2) {
    sub_0 = v_88;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_blind_2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_light_2_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_light_switch, int controller_blind_switch,
  int controller_ck_1, int controller_pnr_9, int controller_ck_10_1,
  int controller_pnr_8, int controller_ck_12_1, int controller_pnr_7,
  int controller_ck_14_1, int controller_pnr_6, int controller_ck_16_1,
  int controller_pnr_5, int controller_ck_18_1, int controller_pnr_4,
  int controller_ck_20_1, int controller_pnr_3, int controller_v_122,
  int controller_v_121, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_blind_1,
  int controller_c_light_1, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_2_out* _out) {
  
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
  sub_15 = false;
  sub_14 = sub_15;
  if (controller_v_122) {
    sub_13 = false;
  } else {
    sub_13 = sub_14;
  };
  if (controller_v_121) {
    v_180 = sub_13;
  } else {
    v_180 = false;
  };
  if (controller_c_air_1) {
    v_179 = false;
  } else {
    v_179 = sub_13;
  };
  if (controller_v_122) {
    sub_17 = sub_14;
  } else {
    sub_17 = false;
  };
  if (controller_v_121) {
    sub_16 = sub_17;
  } else {
    sub_16 = false;
  };
  if (controller_c_air_1) {
    v_181 = sub_16;
  } else {
    v_181 = v_180;
  };
  if (controller_c_air_2) {
    sub_12 = v_179;
  } else {
    sub_12 = v_181;
  };
  if (controller_ck_18_1) {
    v_183 = false;
    v_182 = sub_12;
  } else {
    v_183 = sub_12;
    v_182 = false;
  };
  if (controller_c_pc) {
    sub_11 = v_182;
  } else {
    sub_11 = v_183;
  };
  if (controller_blind_switch) {
    v_184 = false;
  } else {
    v_184 = sub_11;
  };
  sub_10 = sub_11;
  if (controller_c_blind_1) {
    v_185 = v_184;
  } else {
    v_185 = sub_10;
  };
  if (controller_c_closet) {
    v_186 = v_185;
    sub_9 = sub_10;
  } else {
    v_186 = false;
    sub_9 = false;
  };
  if (controller_ck_26_1) {
    sub_8 = v_186;
  } else {
    sub_8 = sub_9;
  };
  if (controller_ck_24_1) {
    v_187 = false;
  } else {
    v_187 = sub_8;
  };
  sub_26 = true;
  sub_25 = sub_26;
  if (controller_v_122) {
    sub_24 = false;
  } else {
    sub_24 = sub_25;
  };
  if (controller_v_121) {
    v_172 = sub_24;
  } else {
    v_172 = false;
  };
  if (controller_c_air_1) {
    v_171 = false;
  } else {
    v_171 = sub_24;
  };
  if (controller_v_122) {
    sub_28 = sub_25;
  } else {
    sub_28 = false;
  };
  if (controller_v_121) {
    sub_27 = sub_28;
  } else {
    sub_27 = false;
  };
  if (controller_c_air_1) {
    v_173 = sub_27;
  } else {
    v_173 = v_172;
  };
  if (controller_c_air_2) {
    sub_23 = v_171;
  } else {
    sub_23 = v_173;
  };
  if (controller_ck_18_1) {
    v_175 = false;
    v_174 = sub_23;
  } else {
    v_175 = sub_23;
    v_174 = false;
  };
  if (controller_c_pc) {
    sub_22 = v_174;
  } else {
    sub_22 = v_175;
  };
  if (controller_blind_switch) {
    v_176 = false;
  } else {
    v_176 = sub_22;
  };
  sub_21 = sub_22;
  if (controller_c_blind_1) {
    v_177 = v_176;
  } else {
    v_177 = sub_21;
  };
  if (controller_c_closet) {
    v_178 = v_177;
    sub_20 = sub_21;
  } else {
    v_178 = false;
    sub_20 = false;
  };
  if (controller_ck_26_1) {
    sub_19 = v_178;
  } else {
    sub_19 = sub_20;
  };
  if (controller_ck_24_1) {
    sub_18 = sub_19;
  } else {
    sub_18 = sub_8;
  };
  if (controller_light_switch) {
    v_188 = v_187;
  } else {
    v_188 = sub_18;
  };
  sub_29 = sub_18;
  if (controller_c_light_1) {
    sub_7 = v_188;
  } else {
    sub_7 = sub_29;
  };
  if (controller_v_121) {
    v_165 = false;
  } else {
    v_165 = sub_13;
  };
  if (controller_c_air_1) {
    v_166 = v_165;
    v_164 = sub_13;
  } else {
    v_166 = sub_16;
    v_164 = sub_16;
  };
  if (controller_c_air_2) {
    sub_35 = v_164;
  } else {
    sub_35 = v_166;
  };
  if (controller_ck_18_1) {
    sub_34 = sub_35;
    sub_36 = false;
  } else {
    sub_34 = false;
    sub_36 = sub_35;
  };
  if (controller_c_pc) {
    sub_33 = sub_34;
  } else {
    sub_33 = sub_36;
  };
  if (controller_blind_switch) {
    v_167 = false;
  } else {
    v_167 = sub_33;
  };
  sub_37 = sub_33;
  if (controller_c_blind_1) {
    v_168 = v_167;
  } else {
    v_168 = sub_37;
  };
  if (controller_c_closet) {
    sub_32 = false;
    sub_38 = false;
  } else {
    sub_32 = v_168;
    sub_38 = sub_37;
  };
  if (controller_ck_26_1) {
    sub_31 = sub_38;
  } else {
    sub_31 = sub_32;
  };
  if (controller_ck_24_1) {
    v_169 = sub_38;
  } else {
    v_169 = sub_31;
  };
  if (controller_v_121) {
    v_160 = false;
  } else {
    v_160 = sub_24;
  };
  if (controller_c_air_1) {
    v_161 = v_160;
    v_159 = sub_24;
  } else {
    v_161 = sub_27;
    v_159 = sub_27;
  };
  if (controller_c_air_2) {
    sub_44 = v_159;
  } else {
    sub_44 = v_161;
  };
  if (controller_ck_18_1) {
    sub_43 = sub_44;
    sub_45 = false;
  } else {
    sub_43 = false;
    sub_45 = sub_44;
  };
  if (controller_c_pc) {
    sub_42 = sub_43;
  } else {
    sub_42 = sub_45;
  };
  if (controller_blind_switch) {
    v_162 = sub_42;
  } else {
    v_162 = sub_33;
  };
  if (controller_c_blind_1) {
    v_163 = v_162;
  } else {
    v_163 = sub_37;
  };
  if (controller_c_closet) {
    sub_41 = false;
  } else {
    sub_41 = v_163;
  };
  if (controller_ck_26_1) {
    sub_40 = sub_38;
  } else {
    sub_40 = sub_41;
  };
  if (controller_ck_24_1) {
    sub_39 = sub_38;
  } else {
    sub_39 = sub_40;
  };
  if (controller_light_switch) {
    v_170 = v_169;
  } else {
    v_170 = sub_39;
  };
  if (controller_c_light_1) {
    sub_30 = v_170;
  } else {
    sub_30 = sub_39;
  };
  if (controller_cleaner) {
    v_189 = sub_30;
    sub_6 = sub_7;
  } else {
    v_189 = sub_7;
    sub_6 = sub_30;
  };
  if (controller_ck_16_1) {
    sub_5 = v_189;
  } else {
    sub_5 = sub_6;
  };
  if (controller_c_pc) {
    sub_51 = sub_36;
  } else {
    sub_51 = sub_34;
  };
  if (controller_blind_switch) {
    v_154 = false;
  } else {
    v_154 = sub_51;
  };
  sub_52 = sub_51;
  if (controller_c_blind_1) {
    v_155 = v_154;
  } else {
    v_155 = sub_52;
  };
  if (controller_c_closet) {
    sub_50 = v_155;
    sub_53 = sub_52;
  } else {
    sub_50 = false;
    sub_53 = false;
  };
  if (controller_ck_26_1) {
    sub_49 = sub_53;
  } else {
    sub_49 = sub_50;
  };
  if (controller_ck_24_1) {
    v_156 = sub_53;
  } else {
    v_156 = sub_49;
  };
  if (controller_c_pc) {
    sub_57 = sub_45;
  } else {
    sub_57 = sub_43;
  };
  if (controller_blind_switch) {
    v_152 = sub_57;
  } else {
    v_152 = sub_51;
  };
  if (controller_c_blind_1) {
    v_153 = v_152;
  } else {
    v_153 = sub_52;
  };
  if (controller_c_closet) {
    sub_56 = v_153;
  } else {
    sub_56 = false;
  };
  if (controller_ck_26_1) {
    sub_55 = sub_53;
  } else {
    sub_55 = sub_56;
  };
  if (controller_ck_24_1) {
    sub_54 = sub_53;
  } else {
    sub_54 = sub_55;
  };
  if (controller_light_switch) {
    v_157 = v_156;
  } else {
    v_157 = sub_54;
  };
  if (controller_c_light_1) {
    sub_48 = v_157;
  } else {
    sub_48 = sub_54;
  };
  if (controller_v_121) {
    v_144 = false;
    v_143 = sub_13;
  } else {
    v_144 = sub_14;
    v_143 = sub_17;
  };
  if (controller_c_air_1) {
    v_145 = v_143;
  } else {
    v_145 = v_144;
  };
  if (controller_v_121) {
    v_141 = false;
  } else {
    v_141 = sub_17;
  };
  if (controller_c_air_1) {
    v_142 = sub_17;
  } else {
    v_142 = v_141;
  };
  if (controller_c_air_2) {
    sub_62 = v_142;
  } else {
    sub_62 = v_145;
  };
  if (controller_ck_18_1) {
    v_147 = sub_62;
    v_146 = false;
  } else {
    v_147 = false;
    v_146 = sub_62;
  };
  if (controller_c_pc) {
    sub_61 = v_146;
  } else {
    sub_61 = v_147;
  };
  if (controller_blind_switch) {
    v_148 = false;
  } else {
    v_148 = sub_61;
  };
  sub_63 = sub_61;
  if (controller_c_blind_1) {
    v_149 = v_148;
  } else {
    v_149 = sub_63;
  };
  if (controller_c_closet) {
    sub_60 = false;
    sub_64 = false;
  } else {
    sub_60 = v_149;
    sub_64 = sub_63;
  };
  if (controller_ck_26_1) {
    sub_59 = sub_64;
  } else {
    sub_59 = sub_60;
  };
  if (controller_ck_24_1) {
    v_150 = sub_64;
  } else {
    v_150 = sub_59;
  };
  if (controller_v_121) {
    v_135 = false;
    v_134 = sub_24;
  } else {
    v_135 = sub_25;
    v_134 = sub_28;
  };
  if (controller_c_air_1) {
    v_136 = v_134;
  } else {
    v_136 = v_135;
  };
  if (controller_v_121) {
    v_132 = false;
  } else {
    v_132 = sub_28;
  };
  if (controller_c_air_1) {
    v_133 = sub_28;
  } else {
    v_133 = v_132;
  };
  if (controller_c_air_2) {
    sub_69 = v_133;
  } else {
    sub_69 = v_136;
  };
  if (controller_ck_18_1) {
    v_138 = sub_69;
    v_137 = false;
  } else {
    v_138 = false;
    v_137 = sub_69;
  };
  if (controller_c_pc) {
    sub_68 = v_137;
  } else {
    sub_68 = v_138;
  };
  if (controller_blind_switch) {
    v_139 = sub_68;
  } else {
    v_139 = sub_61;
  };
  if (controller_c_blind_1) {
    v_140 = v_139;
  } else {
    v_140 = sub_63;
  };
  if (controller_c_closet) {
    sub_67 = false;
  } else {
    sub_67 = v_140;
  };
  if (controller_ck_26_1) {
    sub_66 = sub_64;
  } else {
    sub_66 = sub_67;
  };
  if (controller_ck_24_1) {
    sub_65 = sub_64;
  } else {
    sub_65 = sub_66;
  };
  if (controller_light_switch) {
    v_151 = v_150;
  } else {
    v_151 = sub_65;
  };
  if (controller_c_light_1) {
    sub_58 = v_151;
  } else {
    sub_58 = sub_65;
  };
  if (controller_cleaner) {
    v_158 = sub_58;
    sub_47 = sub_48;
  } else {
    v_158 = sub_48;
    sub_47 = sub_58;
  };
  if (controller_ck_16_1) {
    sub_46 = v_158;
  } else {
    sub_46 = sub_47;
  };
  if (controller_worker) {
    v_190 = sub_46;
    sub_4 = sub_5;
  } else {
    v_190 = sub_5;
    sub_4 = sub_46;
  };
  if (controller_ck_14_1) {
    sub_3 = v_190;
  } else {
    sub_3 = sub_4;
  };
  if (controller_ck_26_1) {
    sub_75 = sub_32;
  } else {
    sub_75 = sub_38;
  };
  if (controller_ck_24_1) {
    v_128 = sub_75;
  } else {
    v_128 = false;
  };
  sub_79 = sub_42;
  if (controller_c_closet) {
    sub_78 = false;
  } else {
    sub_78 = sub_79;
  };
  if (controller_blind_switch) {
    v_126 = false;
  } else {
    v_126 = sub_42;
  };
  if (controller_c_blind_1) {
    v_127 = v_126;
  } else {
    v_127 = sub_79;
  };
  if (controller_c_closet) {
    sub_80 = false;
  } else {
    sub_80 = v_127;
  };
  if (controller_ck_26_1) {
    sub_77 = sub_80;
  } else {
    sub_77 = sub_78;
  };
  if (controller_ck_24_1) {
    sub_76 = sub_75;
  } else {
    sub_76 = sub_77;
  };
  if (controller_light_switch) {
    v_129 = v_128;
  } else {
    v_129 = sub_76;
  };
  sub_81 = sub_76;
  if (controller_c_light_1) {
    sub_74 = v_129;
  } else {
    sub_74 = sub_81;
  };
  if (controller_cleaner) {
    v_130 = sub_74;
    sub_73 = sub_7;
  } else {
    v_130 = sub_7;
    sub_73 = sub_74;
  };
  if (controller_ck_16_1) {
    sub_72 = v_130;
  } else {
    sub_72 = sub_73;
  };
  if (controller_ck_26_1) {
    sub_85 = sub_50;
  } else {
    sub_85 = sub_53;
  };
  if (controller_ck_24_1) {
    v_123 = sub_85;
  } else {
    v_123 = false;
  };
  sub_89 = sub_57;
  if (controller_c_closet) {
    sub_88 = sub_89;
  } else {
    sub_88 = false;
  };
  if (controller_blind_switch) {
    v_121 = false;
  } else {
    v_121 = sub_57;
  };
  if (controller_c_blind_1) {
    v_122 = v_121;
  } else {
    v_122 = sub_89;
  };
  if (controller_c_closet) {
    sub_90 = v_122;
  } else {
    sub_90 = false;
  };
  if (controller_ck_26_1) {
    sub_87 = sub_90;
  } else {
    sub_87 = sub_88;
  };
  if (controller_ck_24_1) {
    sub_86 = sub_85;
  } else {
    sub_86 = sub_87;
  };
  if (controller_light_switch) {
    v_124 = v_123;
  } else {
    v_124 = sub_86;
  };
  sub_91 = sub_86;
  if (controller_c_light_1) {
    sub_84 = v_124;
  } else {
    sub_84 = sub_91;
  };
  if (controller_ck_26_1) {
    sub_93 = sub_60;
  } else {
    sub_93 = sub_64;
  };
  if (controller_ck_24_1) {
    v_119 = sub_93;
  } else {
    v_119 = false;
  };
  sub_97 = sub_68;
  if (controller_c_closet) {
    sub_96 = false;
  } else {
    sub_96 = sub_97;
  };
  if (controller_blind_switch) {
    v_117 = false;
  } else {
    v_117 = sub_68;
  };
  if (controller_c_blind_1) {
    v_118 = v_117;
  } else {
    v_118 = sub_97;
  };
  if (controller_c_closet) {
    sub_98 = false;
  } else {
    sub_98 = v_118;
  };
  if (controller_ck_26_1) {
    sub_95 = sub_98;
  } else {
    sub_95 = sub_96;
  };
  if (controller_ck_24_1) {
    sub_94 = sub_93;
  } else {
    sub_94 = sub_95;
  };
  if (controller_light_switch) {
    v_120 = v_119;
  } else {
    v_120 = sub_94;
  };
  sub_99 = sub_94;
  if (controller_c_light_1) {
    sub_92 = v_120;
  } else {
    sub_92 = sub_99;
  };
  if (controller_cleaner) {
    v_125 = sub_92;
    sub_83 = sub_84;
  } else {
    v_125 = sub_84;
    sub_83 = sub_92;
  };
  if (controller_ck_16_1) {
    sub_82 = v_125;
  } else {
    sub_82 = sub_83;
  };
  if (controller_worker) {
    v_131 = sub_82;
    sub_71 = sub_72;
  } else {
    v_131 = sub_72;
    sub_71 = sub_82;
  };
  if (controller_ck_14_1) {
    sub_70 = v_131;
  } else {
    sub_70 = sub_71;
  };
  if (controller_change_shift) {
    v_191 = sub_70;
    sub_2 = sub_3;
  } else {
    v_191 = sub_3;
    sub_2 = sub_70;
  };
  if (controller_ck_1) {
    sub_1 = v_191;
  } else {
    sub_1 = sub_2;
  };
  if (controller_ck_24_1) {
    v_113 = false;
  } else {
    v_113 = sub_19;
  };
  if (controller_light_switch) {
    v_114 = v_113;
  } else {
    v_114 = sub_18;
  };
  if (controller_c_light_1) {
    sub_105 = v_114;
  } else {
    sub_105 = sub_29;
  };
  if (controller_ck_26_1) {
    sub_107 = sub_78;
  } else {
    sub_107 = sub_80;
  };
  if (controller_ck_24_1) {
    v_111 = sub_78;
  } else {
    v_111 = sub_107;
  };
  if (controller_blind_switch) {
    v_108 = sub_33;
  } else {
    v_108 = sub_42;
  };
  if (controller_c_blind_1) {
    v_109 = v_108;
  } else {
    v_109 = sub_79;
  };
  if (controller_c_closet) {
    sub_109 = false;
  } else {
    sub_109 = v_109;
  };
  if (controller_ck_26_1) {
    v_110 = sub_78;
  } else {
    v_110 = sub_109;
  };
  if (controller_ck_24_1) {
    sub_108 = v_110;
  } else {
    sub_108 = sub_78;
  };
  if (controller_light_switch) {
    v_112 = v_111;
  } else {
    v_112 = sub_108;
  };
  if (controller_c_light_1) {
    sub_106 = v_112;
  } else {
    sub_106 = sub_108;
  };
  if (controller_cleaner) {
    v_115 = sub_106;
    sub_104 = sub_105;
  } else {
    v_115 = sub_105;
    sub_104 = sub_106;
  };
  if (controller_ck_16_1) {
    sub_103 = v_115;
  } else {
    sub_103 = sub_104;
  };
  if (controller_ck_26_1) {
    sub_113 = sub_88;
  } else {
    sub_113 = sub_90;
  };
  if (controller_ck_24_1) {
    v_105 = sub_88;
  } else {
    v_105 = sub_113;
  };
  if (controller_blind_switch) {
    v_102 = sub_51;
  } else {
    v_102 = sub_57;
  };
  if (controller_c_blind_1) {
    v_103 = v_102;
  } else {
    v_103 = sub_89;
  };
  if (controller_c_closet) {
    sub_115 = v_103;
  } else {
    sub_115 = false;
  };
  if (controller_ck_26_1) {
    v_104 = sub_88;
  } else {
    v_104 = sub_115;
  };
  if (controller_ck_24_1) {
    sub_114 = v_104;
  } else {
    sub_114 = sub_88;
  };
  if (controller_light_switch) {
    v_106 = v_105;
  } else {
    v_106 = sub_114;
  };
  if (controller_c_light_1) {
    sub_112 = v_106;
  } else {
    sub_112 = sub_114;
  };
  if (controller_ck_26_1) {
    sub_117 = sub_96;
  } else {
    sub_117 = sub_98;
  };
  if (controller_ck_24_1) {
    v_100 = sub_96;
  } else {
    v_100 = sub_117;
  };
  if (controller_blind_switch) {
    v_97 = sub_61;
  } else {
    v_97 = sub_68;
  };
  if (controller_c_blind_1) {
    v_98 = v_97;
  } else {
    v_98 = sub_97;
  };
  if (controller_c_closet) {
    sub_119 = false;
  } else {
    sub_119 = v_98;
  };
  if (controller_ck_26_1) {
    v_99 = sub_96;
  } else {
    v_99 = sub_119;
  };
  if (controller_ck_24_1) {
    sub_118 = v_99;
  } else {
    sub_118 = sub_96;
  };
  if (controller_light_switch) {
    v_101 = v_100;
  } else {
    v_101 = sub_118;
  };
  if (controller_c_light_1) {
    sub_116 = v_101;
  } else {
    sub_116 = sub_118;
  };
  if (controller_cleaner) {
    v_107 = sub_116;
    sub_111 = sub_112;
  } else {
    v_107 = sub_112;
    sub_111 = sub_116;
  };
  if (controller_ck_16_1) {
    sub_110 = v_107;
  } else {
    sub_110 = sub_111;
  };
  if (controller_worker) {
    v_116 = sub_110;
    sub_102 = sub_103;
  } else {
    v_116 = sub_103;
    sub_102 = sub_110;
  };
  if (controller_ck_14_1) {
    sub_101 = v_116;
  } else {
    sub_101 = sub_102;
  };
  if (controller_ck_24_1) {
    v_93 = sub_77;
  } else {
    v_93 = false;
  };
  if (controller_light_switch) {
    v_94 = v_93;
  } else {
    v_94 = sub_76;
  };
  if (controller_c_light_1) {
    sub_124 = v_94;
  } else {
    sub_124 = sub_81;
  };
  if (controller_cleaner) {
    v_95 = sub_124;
    sub_123 = sub_105;
  } else {
    v_95 = sub_105;
    sub_123 = sub_124;
  };
  if (controller_ck_16_1) {
    sub_122 = v_95;
  } else {
    sub_122 = sub_123;
  };
  if (controller_ck_24_1) {
    v_90 = sub_87;
  } else {
    v_90 = false;
  };
  if (controller_light_switch) {
    v_91 = v_90;
  } else {
    v_91 = sub_86;
  };
  if (controller_c_light_1) {
    sub_127 = v_91;
  } else {
    sub_127 = sub_91;
  };
  if (controller_ck_24_1) {
    v = sub_95;
  } else {
    v = false;
  };
  if (controller_light_switch) {
    v_89 = v;
  } else {
    v_89 = sub_94;
  };
  if (controller_c_light_1) {
    sub_128 = v_89;
  } else {
    sub_128 = sub_99;
  };
  if (controller_cleaner) {
    v_92 = sub_128;
    sub_126 = sub_127;
  } else {
    v_92 = sub_127;
    sub_126 = sub_128;
  };
  if (controller_ck_16_1) {
    sub_125 = v_92;
  } else {
    sub_125 = sub_126;
  };
  if (controller_worker) {
    v_96 = sub_125;
    sub_121 = sub_122;
  } else {
    v_96 = sub_122;
    sub_121 = sub_125;
  };
  if (controller_ck_14_1) {
    sub_120 = v_96;
  } else {
    sub_120 = sub_121;
  };
  if (controller_change_shift) {
    v_192 = sub_120;
    sub_100 = sub_101;
  } else {
    v_192 = sub_101;
    sub_100 = sub_120;
  };
  if (controller_ck_1) {
    v_193 = v_192;
  } else {
    v_193 = sub_100;
  };
  if (p_controller_c_light_2) {
    sub_0 = v_193;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_light_2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_blind_1_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_light_switch, int controller_blind_switch,
  int controller_ck_1, int controller_pnr_9, int controller_ck_10_1,
  int controller_pnr_8, int controller_ck_12_1, int controller_pnr_7,
  int controller_ck_14_1, int controller_pnr_6, int controller_ck_16_1,
  int controller_pnr_5, int controller_ck_18_1, int controller_pnr_4,
  int controller_ck_20_1, int controller_pnr_3, int controller_v_122,
  int controller_v_121, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_light_1, int controller_c_closet,
  int controller_c_air_2, int controller_c_air_1, int controller_c_window,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_blind_1_out* _out) {
  
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
  sub_13 = false;
  sub_12 = sub_13;
  if (controller_v_122) {
    sub_11 = false;
  } else {
    sub_11 = sub_12;
  };
  if (controller_v_121) {
    v_254 = sub_11;
  } else {
    v_254 = false;
  };
  if (controller_c_air_1) {
    v_253 = false;
  } else {
    v_253 = sub_11;
  };
  if (controller_v_122) {
    sub_15 = sub_12;
  } else {
    sub_15 = false;
  };
  if (controller_v_121) {
    sub_14 = sub_15;
  } else {
    sub_14 = false;
  };
  if (controller_c_air_1) {
    v_255 = sub_14;
  } else {
    v_255 = v_254;
  };
  if (controller_c_air_2) {
    sub_10 = v_253;
  } else {
    sub_10 = v_255;
  };
  if (controller_ck_18_1) {
    v_257 = false;
    v_256 = sub_10;
  } else {
    v_257 = sub_10;
    v_256 = false;
  };
  if (controller_c_pc) {
    sub_9 = v_256;
  } else {
    sub_9 = v_257;
  };
  if (controller_c_closet) {
    sub_8 = sub_9;
  } else {
    sub_8 = false;
  };
  if (controller_ck_24_1) {
    v_258 = false;
  } else {
    v_258 = sub_8;
  };
  if (controller_light_switch) {
    v_259 = v_258;
  } else {
    v_259 = sub_8;
  };
  if (controller_c_light_1) {
    sub_7 = v_259;
  } else {
    sub_7 = sub_8;
  };
  if (controller_v_121) {
    v_251 = false;
  } else {
    v_251 = sub_11;
  };
  if (controller_c_air_1) {
    v_252 = v_251;
    v_250 = sub_11;
  } else {
    v_252 = sub_14;
    v_250 = sub_14;
  };
  if (controller_c_air_2) {
    sub_21 = v_250;
  } else {
    sub_21 = v_252;
  };
  if (controller_ck_18_1) {
    sub_20 = sub_21;
    sub_22 = false;
  } else {
    sub_20 = false;
    sub_22 = sub_21;
  };
  if (controller_c_pc) {
    sub_19 = sub_20;
  } else {
    sub_19 = sub_22;
  };
  if (controller_c_closet) {
    sub_18 = false;
  } else {
    sub_18 = sub_19;
  };
  sub_17 = sub_18;
  sub_16 = sub_17;
  if (controller_cleaner) {
    v_260 = sub_16;
    sub_6 = sub_7;
  } else {
    v_260 = sub_7;
    sub_6 = sub_16;
  };
  if (controller_ck_16_1) {
    sub_5 = v_260;
  } else {
    sub_5 = sub_6;
  };
  if (controller_c_pc) {
    sub_28 = sub_22;
  } else {
    sub_28 = sub_20;
  };
  if (controller_c_closet) {
    sub_27 = sub_28;
  } else {
    sub_27 = false;
  };
  sub_26 = sub_27;
  sub_25 = sub_26;
  if (controller_v_121) {
    v_245 = false;
    v_244 = sub_11;
  } else {
    v_245 = sub_12;
    v_244 = sub_15;
  };
  if (controller_c_air_1) {
    v_246 = v_244;
  } else {
    v_246 = v_245;
  };
  if (controller_v_121) {
    v_242 = false;
  } else {
    v_242 = sub_15;
  };
  if (controller_c_air_1) {
    v_243 = sub_15;
  } else {
    v_243 = v_242;
  };
  if (controller_c_air_2) {
    sub_33 = v_243;
  } else {
    sub_33 = v_246;
  };
  if (controller_ck_18_1) {
    v_248 = sub_33;
    v_247 = false;
  } else {
    v_248 = false;
    v_247 = sub_33;
  };
  if (controller_c_pc) {
    sub_32 = v_247;
  } else {
    sub_32 = v_248;
  };
  if (controller_c_closet) {
    sub_31 = false;
  } else {
    sub_31 = sub_32;
  };
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (controller_cleaner) {
    v_249 = sub_29;
    sub_24 = sub_25;
  } else {
    v_249 = sub_25;
    sub_24 = sub_29;
  };
  if (controller_ck_16_1) {
    sub_23 = v_249;
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
  if (controller_ck_24_1) {
    v_238 = sub_18;
  } else {
    v_238 = false;
  };
  if (controller_light_switch) {
    v_239 = v_238;
  } else {
    v_239 = sub_18;
  };
  if (controller_c_light_1) {
    sub_38 = v_239;
  } else {
    sub_38 = sub_17;
  };
  if (controller_cleaner) {
    v_240 = sub_38;
    sub_37 = sub_7;
  } else {
    v_240 = sub_7;
    sub_37 = sub_38;
  };
  if (controller_ck_16_1) {
    sub_36 = v_240;
  } else {
    sub_36 = sub_37;
  };
  if (controller_ck_24_1) {
    v_235 = sub_27;
  } else {
    v_235 = false;
  };
  if (controller_light_switch) {
    v_236 = v_235;
  } else {
    v_236 = sub_27;
  };
  if (controller_c_light_1) {
    sub_41 = v_236;
  } else {
    sub_41 = sub_26;
  };
  if (controller_ck_24_1) {
    v_233 = sub_31;
  } else {
    v_233 = false;
  };
  if (controller_light_switch) {
    v_234 = v_233;
  } else {
    v_234 = sub_31;
  };
  if (controller_c_light_1) {
    sub_42 = v_234;
  } else {
    sub_42 = sub_30;
  };
  if (controller_cleaner) {
    v_237 = sub_42;
    sub_40 = sub_41;
  } else {
    v_237 = sub_41;
    sub_40 = sub_42;
  };
  if (controller_ck_16_1) {
    sub_39 = v_237;
  } else {
    sub_39 = sub_40;
  };
  if (controller_worker) {
    v_241 = sub_39;
    sub_35 = sub_36;
  } else {
    v_241 = sub_36;
    sub_35 = sub_39;
  };
  if (controller_ck_14_1) {
    sub_34 = v_241;
  } else {
    sub_34 = sub_35;
  };
  if (controller_change_shift) {
    v_262 = sub_34;
    sub_2 = sub_3;
  } else {
    v_262 = sub_3;
    sub_2 = sub_34;
  };
  if (controller_ck_1) {
    sub_1 = v_262;
  } else {
    sub_1 = sub_2;
  };
  sub_55 = true;
  sub_54 = sub_55;
  if (controller_v_122) {
    sub_53 = false;
  } else {
    sub_53 = sub_54;
  };
  if (controller_v_121) {
    v_223 = sub_53;
  } else {
    v_223 = false;
  };
  if (controller_c_air_1) {
    v_222 = false;
  } else {
    v_222 = sub_53;
  };
  if (controller_v_122) {
    sub_57 = sub_54;
  } else {
    sub_57 = false;
  };
  if (controller_v_121) {
    sub_56 = sub_57;
  } else {
    sub_56 = false;
  };
  if (controller_c_air_1) {
    v_224 = sub_56;
  } else {
    v_224 = v_223;
  };
  if (controller_c_air_2) {
    sub_52 = v_222;
  } else {
    sub_52 = v_224;
  };
  if (controller_ck_18_1) {
    v_226 = false;
    v_225 = sub_52;
  } else {
    v_226 = sub_52;
    v_225 = false;
  };
  if (controller_c_pc) {
    sub_51 = v_225;
  } else {
    sub_51 = v_226;
  };
  if (controller_blind_switch) {
    v_227 = sub_9;
  } else {
    v_227 = sub_51;
  };
  if (controller_c_closet) {
    v_228 = v_227;
    sub_50 = sub_51;
  } else {
    v_228 = false;
    sub_50 = false;
  };
  if (controller_ck_26_1) {
    sub_49 = v_228;
  } else {
    sub_49 = sub_50;
  };
  if (controller_ck_24_1) {
    v_229 = false;
  } else {
    v_229 = sub_49;
  };
  if (controller_light_switch) {
    v_230 = v_229;
  } else {
    v_230 = sub_49;
  };
  if (controller_c_light_1) {
    sub_48 = v_230;
  } else {
    sub_48 = sub_49;
  };
  if (controller_v_121) {
    v_217 = false;
  } else {
    v_217 = sub_53;
  };
  if (controller_c_air_1) {
    v_218 = v_217;
    v_216 = sub_53;
  } else {
    v_218 = sub_56;
    v_216 = sub_56;
  };
  if (controller_c_air_2) {
    sub_63 = v_216;
  } else {
    sub_63 = v_218;
  };
  if (controller_ck_18_1) {
    sub_62 = sub_63;
    sub_64 = false;
  } else {
    sub_62 = false;
    sub_64 = sub_63;
  };
  if (controller_c_pc) {
    sub_61 = sub_62;
  } else {
    sub_61 = sub_64;
  };
  if (controller_blind_switch) {
    v_219 = sub_19;
  } else {
    v_219 = sub_61;
  };
  if (controller_c_closet) {
    sub_60 = false;
    sub_65 = false;
  } else {
    sub_60 = v_219;
    sub_65 = sub_61;
  };
  if (controller_ck_26_1) {
    sub_59 = sub_65;
  } else {
    sub_59 = sub_60;
  };
  if (controller_ck_24_1) {
    v_220 = sub_65;
  } else {
    v_220 = sub_59;
  };
  if (controller_light_switch) {
    v_221 = v_220;
  } else {
    v_221 = sub_65;
  };
  if (controller_c_light_1) {
    sub_58 = v_221;
  } else {
    sub_58 = sub_65;
  };
  if (controller_cleaner) {
    v_231 = sub_58;
    sub_47 = sub_48;
  } else {
    v_231 = sub_48;
    sub_47 = sub_58;
  };
  if (controller_ck_16_1) {
    sub_46 = v_231;
  } else {
    sub_46 = sub_47;
  };
  if (controller_c_pc) {
    sub_71 = sub_64;
  } else {
    sub_71 = sub_62;
  };
  if (controller_blind_switch) {
    v_212 = sub_28;
  } else {
    v_212 = sub_71;
  };
  if (controller_c_closet) {
    sub_70 = v_212;
    sub_72 = sub_71;
  } else {
    sub_70 = false;
    sub_72 = false;
  };
  if (controller_ck_26_1) {
    sub_69 = sub_72;
  } else {
    sub_69 = sub_70;
  };
  if (controller_ck_24_1) {
    v_213 = sub_72;
  } else {
    v_213 = sub_69;
  };
  if (controller_light_switch) {
    v_214 = v_213;
  } else {
    v_214 = sub_72;
  };
  if (controller_c_light_1) {
    sub_68 = v_214;
  } else {
    sub_68 = sub_72;
  };
  if (controller_v_121) {
    v_205 = false;
    v_204 = sub_53;
  } else {
    v_205 = sub_54;
    v_204 = sub_57;
  };
  if (controller_c_air_1) {
    v_206 = v_204;
  } else {
    v_206 = v_205;
  };
  if (controller_v_121) {
    v_202 = false;
  } else {
    v_202 = sub_57;
  };
  if (controller_c_air_1) {
    v_203 = sub_57;
  } else {
    v_203 = v_202;
  };
  if (controller_c_air_2) {
    sub_77 = v_203;
  } else {
    sub_77 = v_206;
  };
  if (controller_ck_18_1) {
    v_208 = sub_77;
    v_207 = false;
  } else {
    v_208 = false;
    v_207 = sub_77;
  };
  if (controller_c_pc) {
    sub_76 = v_207;
  } else {
    sub_76 = v_208;
  };
  if (controller_blind_switch) {
    v_209 = sub_32;
  } else {
    v_209 = sub_76;
  };
  if (controller_c_closet) {
    sub_75 = false;
    sub_78 = false;
  } else {
    sub_75 = v_209;
    sub_78 = sub_76;
  };
  if (controller_ck_26_1) {
    sub_74 = sub_78;
  } else {
    sub_74 = sub_75;
  };
  if (controller_ck_24_1) {
    v_210 = sub_78;
  } else {
    v_210 = sub_74;
  };
  if (controller_light_switch) {
    v_211 = v_210;
  } else {
    v_211 = sub_78;
  };
  if (controller_c_light_1) {
    sub_73 = v_211;
  } else {
    sub_73 = sub_78;
  };
  if (controller_cleaner) {
    v_215 = sub_73;
    sub_67 = sub_68;
  } else {
    v_215 = sub_68;
    sub_67 = sub_73;
  };
  if (controller_ck_16_1) {
    sub_66 = v_215;
  } else {
    sub_66 = sub_67;
  };
  if (controller_worker) {
    v_232 = sub_66;
    sub_45 = sub_46;
  } else {
    v_232 = sub_46;
    sub_45 = sub_66;
  };
  if (controller_ck_14_1) {
    sub_44 = v_232;
  } else {
    sub_44 = sub_45;
  };
  if (controller_ck_26_1) {
    sub_84 = sub_60;
  } else {
    sub_84 = sub_65;
  };
  if (controller_ck_24_1) {
    v_198 = sub_84;
  } else {
    v_198 = false;
  };
  if (controller_light_switch) {
    v_199 = v_198;
  } else {
    v_199 = sub_84;
  };
  if (controller_c_light_1) {
    sub_83 = v_199;
  } else {
    sub_83 = sub_84;
  };
  if (controller_cleaner) {
    v_200 = sub_83;
    sub_82 = sub_48;
  } else {
    v_200 = sub_48;
    sub_82 = sub_83;
  };
  if (controller_ck_16_1) {
    sub_81 = v_200;
  } else {
    sub_81 = sub_82;
  };
  if (controller_ck_26_1) {
    sub_88 = sub_70;
  } else {
    sub_88 = sub_72;
  };
  if (controller_ck_24_1) {
    v_195 = sub_88;
  } else {
    v_195 = false;
  };
  if (controller_light_switch) {
    v_196 = v_195;
  } else {
    v_196 = sub_88;
  };
  if (controller_c_light_1) {
    sub_87 = v_196;
  } else {
    sub_87 = sub_88;
  };
  if (controller_ck_26_1) {
    sub_90 = sub_75;
  } else {
    sub_90 = sub_78;
  };
  if (controller_ck_24_1) {
    v = sub_90;
  } else {
    v = false;
  };
  if (controller_light_switch) {
    v_194 = v;
  } else {
    v_194 = sub_90;
  };
  if (controller_c_light_1) {
    sub_89 = v_194;
  } else {
    sub_89 = sub_90;
  };
  if (controller_cleaner) {
    v_197 = sub_89;
    sub_86 = sub_87;
  } else {
    v_197 = sub_87;
    sub_86 = sub_89;
  };
  if (controller_ck_16_1) {
    sub_85 = v_197;
  } else {
    sub_85 = sub_86;
  };
  if (controller_worker) {
    v_201 = sub_85;
    sub_80 = sub_81;
  } else {
    v_201 = sub_81;
    sub_80 = sub_85;
  };
  if (controller_ck_14_1) {
    sub_79 = v_201;
  } else {
    sub_79 = sub_80;
  };
  if (controller_change_shift) {
    v_263 = sub_79;
    sub_43 = sub_44;
  } else {
    v_263 = sub_44;
    sub_43 = sub_79;
  };
  if (controller_ck_1) {
    v_264 = v_263;
  } else {
    v_264 = sub_43;
  };
  if (p_controller_c_blind_1) {
    sub_0 = v_264;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_blind_1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_light_1_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_light_switch, int controller_blind_switch,
  int controller_ck_1, int controller_pnr_9, int controller_ck_10_1,
  int controller_pnr_8, int controller_ck_12_1, int controller_pnr_7,
  int controller_ck_14_1, int controller_pnr_6, int controller_ck_16_1,
  int controller_pnr_5, int controller_ck_18_1, int controller_pnr_4,
  int controller_ck_20_1, int controller_pnr_3, int controller_v_122,
  int controller_v_121, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_1_out* _out) {
  
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
  sub_12 = false;
  sub_11 = sub_12;
  if (controller_v_122) {
    sub_10 = false;
  } else {
    sub_10 = sub_11;
  };
  if (controller_v_121) {
    v_301 = sub_10;
  } else {
    v_301 = false;
  };
  if (controller_c_air_1) {
    v_300 = false;
  } else {
    v_300 = sub_10;
  };
  if (controller_v_122) {
    sub_14 = sub_11;
  } else {
    sub_14 = false;
  };
  if (controller_v_121) {
    sub_13 = sub_14;
  } else {
    sub_13 = false;
  };
  if (controller_c_air_1) {
    v_302 = sub_13;
  } else {
    v_302 = v_301;
  };
  if (controller_c_air_2) {
    sub_9 = v_300;
  } else {
    sub_9 = v_302;
  };
  if (controller_ck_18_1) {
    v_304 = false;
    v_303 = sub_9;
  } else {
    v_304 = sub_9;
    v_303 = false;
  };
  if (controller_c_pc) {
    sub_8 = v_303;
  } else {
    sub_8 = v_304;
  };
  if (controller_c_closet) {
    sub_7 = sub_8;
  } else {
    sub_7 = false;
  };
  sub_6 = sub_7;
  if (controller_v_121) {
    v_298 = false;
  } else {
    v_298 = sub_10;
  };
  if (controller_c_air_1) {
    v_299 = v_298;
    v_297 = sub_10;
  } else {
    v_299 = sub_13;
    v_297 = sub_13;
  };
  if (controller_c_air_2) {
    sub_19 = v_297;
  } else {
    sub_19 = v_299;
  };
  if (controller_ck_18_1) {
    sub_18 = sub_19;
    sub_20 = false;
  } else {
    sub_18 = false;
    sub_20 = sub_19;
  };
  if (controller_c_pc) {
    sub_17 = sub_18;
  } else {
    sub_17 = sub_20;
  };
  if (controller_c_closet) {
    sub_16 = false;
  } else {
    sub_16 = sub_17;
  };
  sub_15 = sub_16;
  if (controller_cleaner) {
    v_305 = sub_15;
    sub_5 = sub_6;
  } else {
    v_305 = sub_6;
    sub_5 = sub_15;
  };
  if (controller_ck_16_1) {
    sub_4 = v_305;
  } else {
    sub_4 = sub_5;
  };
  if (controller_c_pc) {
    sub_25 = sub_20;
  } else {
    sub_25 = sub_18;
  };
  if (controller_c_closet) {
    sub_24 = sub_25;
  } else {
    sub_24 = false;
  };
  sub_23 = sub_24;
  if (controller_v_121) {
    v_292 = false;
    v_291 = sub_10;
  } else {
    v_292 = sub_11;
    v_291 = sub_14;
  };
  if (controller_c_air_1) {
    v_293 = v_291;
  } else {
    v_293 = v_292;
  };
  if (controller_v_121) {
    v_289 = false;
  } else {
    v_289 = sub_14;
  };
  if (controller_c_air_1) {
    v_290 = sub_14;
  } else {
    v_290 = v_289;
  };
  if (controller_c_air_2) {
    sub_29 = v_290;
  } else {
    sub_29 = v_293;
  };
  if (controller_ck_18_1) {
    v_295 = sub_29;
    v_294 = false;
  } else {
    v_295 = false;
    v_294 = sub_29;
  };
  if (controller_c_pc) {
    sub_28 = v_294;
  } else {
    sub_28 = v_295;
  };
  if (controller_c_closet) {
    sub_27 = false;
  } else {
    sub_27 = sub_28;
  };
  sub_26 = sub_27;
  if (controller_cleaner) {
    v_296 = sub_26;
    sub_22 = sub_23;
  } else {
    v_296 = sub_23;
    sub_22 = sub_26;
  };
  if (controller_ck_16_1) {
    sub_21 = v_296;
  } else {
    sub_21 = sub_22;
  };
  if (controller_worker) {
    v_306 = sub_21;
    sub_3 = sub_4;
  } else {
    v_306 = sub_4;
    sub_3 = sub_21;
  };
  if (controller_ck_14_1) {
    sub_2 = v_306;
  } else {
    sub_2 = sub_3;
  };
  sub_1 = sub_2;
  sub_41 = true;
  sub_40 = sub_41;
  if (controller_v_122) {
    sub_39 = false;
  } else {
    sub_39 = sub_40;
  };
  if (controller_v_121) {
    v_282 = sub_39;
  } else {
    v_282 = false;
  };
  if (controller_c_air_1) {
    v_281 = false;
  } else {
    v_281 = sub_39;
  };
  if (controller_v_122) {
    sub_43 = sub_40;
  } else {
    sub_43 = false;
  };
  if (controller_v_121) {
    sub_42 = sub_43;
  } else {
    sub_42 = false;
  };
  if (controller_c_air_1) {
    v_283 = sub_42;
  } else {
    v_283 = v_282;
  };
  if (controller_c_air_2) {
    sub_38 = v_281;
  } else {
    sub_38 = v_283;
  };
  if (controller_ck_18_1) {
    v_285 = false;
    v_284 = sub_38;
  } else {
    v_285 = sub_38;
    v_284 = false;
  };
  if (controller_c_pc) {
    sub_37 = v_284;
  } else {
    sub_37 = v_285;
  };
  if (controller_c_closet) {
    sub_36 = sub_37;
  } else {
    sub_36 = false;
  };
  if (controller_ck_24_1) {
    v_286 = sub_7;
  } else {
    v_286 = sub_36;
  };
  if (controller_light_switch) {
    sub_35 = v_286;
  } else {
    sub_35 = sub_36;
  };
  if (controller_v_121) {
    v_279 = false;
  } else {
    v_279 = sub_39;
  };
  if (controller_c_air_1) {
    v_280 = v_279;
    v_278 = sub_39;
  } else {
    v_280 = sub_42;
    v_278 = sub_42;
  };
  if (controller_c_air_2) {
    sub_48 = v_278;
  } else {
    sub_48 = v_280;
  };
  if (controller_ck_18_1) {
    sub_47 = sub_48;
    sub_49 = false;
  } else {
    sub_47 = false;
    sub_49 = sub_48;
  };
  if (controller_c_pc) {
    sub_46 = sub_47;
  } else {
    sub_46 = sub_49;
  };
  if (controller_c_closet) {
    sub_45 = false;
  } else {
    sub_45 = sub_46;
  };
  sub_44 = sub_45;
  if (controller_cleaner) {
    v_287 = sub_44;
    sub_34 = sub_35;
  } else {
    v_287 = sub_35;
    sub_34 = sub_44;
  };
  if (controller_ck_16_1) {
    sub_33 = v_287;
  } else {
    sub_33 = sub_34;
  };
  if (controller_c_pc) {
    sub_54 = sub_49;
  } else {
    sub_54 = sub_47;
  };
  if (controller_c_closet) {
    sub_53 = sub_54;
  } else {
    sub_53 = false;
  };
  sub_52 = sub_53;
  if (controller_v_121) {
    v_273 = false;
    v_272 = sub_39;
  } else {
    v_273 = sub_40;
    v_272 = sub_43;
  };
  if (controller_c_air_1) {
    v_274 = v_272;
  } else {
    v_274 = v_273;
  };
  if (controller_v_121) {
    v_270 = false;
  } else {
    v_270 = sub_43;
  };
  if (controller_c_air_1) {
    v_271 = sub_43;
  } else {
    v_271 = v_270;
  };
  if (controller_c_air_2) {
    sub_58 = v_271;
  } else {
    sub_58 = v_274;
  };
  if (controller_ck_18_1) {
    v_276 = sub_58;
    v_275 = false;
  } else {
    v_276 = false;
    v_275 = sub_58;
  };
  if (controller_c_pc) {
    sub_57 = v_275;
  } else {
    sub_57 = v_276;
  };
  if (controller_c_closet) {
    sub_56 = false;
  } else {
    sub_56 = sub_57;
  };
  sub_55 = sub_56;
  if (controller_cleaner) {
    v_277 = sub_55;
    sub_51 = sub_52;
  } else {
    v_277 = sub_52;
    sub_51 = sub_55;
  };
  if (controller_ck_16_1) {
    sub_50 = v_277;
  } else {
    sub_50 = sub_51;
  };
  if (controller_worker) {
    v_288 = sub_50;
    sub_32 = sub_33;
  } else {
    v_288 = sub_33;
    sub_32 = sub_50;
  };
  if (controller_ck_14_1) {
    sub_31 = v_288;
  } else {
    sub_31 = sub_32;
  };
  if (controller_ck_24_1) {
    v_267 = sub_45;
  } else {
    v_267 = sub_16;
  };
  if (controller_light_switch) {
    sub_63 = v_267;
  } else {
    sub_63 = sub_45;
  };
  if (controller_cleaner) {
    v_268 = sub_63;
    sub_62 = sub_35;
  } else {
    v_268 = sub_35;
    sub_62 = sub_63;
  };
  if (controller_ck_16_1) {
    sub_61 = v_268;
  } else {
    sub_61 = sub_62;
  };
  if (controller_ck_24_1) {
    v_265 = sub_53;
  } else {
    v_265 = sub_24;
  };
  if (controller_light_switch) {
    sub_66 = v_265;
  } else {
    sub_66 = sub_53;
  };
  if (controller_ck_24_1) {
    v = sub_56;
  } else {
    v = sub_27;
  };
  if (controller_light_switch) {
    sub_67 = v;
  } else {
    sub_67 = sub_56;
  };
  if (controller_cleaner) {
    v_266 = sub_67;
    sub_65 = sub_66;
  } else {
    v_266 = sub_66;
    sub_65 = sub_67;
  };
  if (controller_ck_16_1) {
    sub_64 = v_266;
  } else {
    sub_64 = sub_65;
  };
  if (controller_worker) {
    v_269 = sub_64;
    sub_60 = sub_61;
  } else {
    v_269 = sub_61;
    sub_60 = sub_64;
  };
  if (controller_ck_14_1) {
    sub_59 = v_269;
  } else {
    sub_59 = sub_60;
  };
  if (controller_change_shift) {
    v_307 = sub_59;
    sub_30 = sub_31;
  } else {
    v_307 = sub_31;
    sub_30 = sub_59;
  };
  if (controller_ck_1) {
    v_308 = v_307;
  } else {
    v_308 = sub_30;
  };
  if (p_controller_c_light_1) {
    sub_0 = v_308;
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
  int controller_ck_20_1, int controller_pnr_3, int controller_v_122,
  int controller_v_121, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_closet_out* _out) {
  
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
  sub_11 = true;
  sub_10 = sub_11;
  if (controller_v_122) {
    sub_9 = false;
  } else {
    sub_9 = sub_10;
  };
  if (controller_v_121) {
    v_328 = sub_9;
  } else {
    v_328 = false;
  };
  if (controller_c_air_1) {
    v_327 = false;
  } else {
    v_327 = sub_9;
  };
  if (controller_v_122) {
    v_326 = sub_10;
  } else {
    v_326 = false;
  };
  if (controller_v_121) {
    sub_12 = v_326;
  } else {
    sub_12 = false;
  };
  if (controller_c_air_1) {
    v_329 = sub_12;
  } else {
    v_329 = v_328;
  };
  if (controller_c_air_2) {
    sub_8 = v_327;
  } else {
    sub_8 = v_329;
  };
  if (controller_ck_18_1) {
    v_331 = false;
    v_330 = sub_8;
  } else {
    v_331 = sub_8;
    v_330 = false;
  };
  if (controller_c_pc) {
    sub_7 = v_330;
  } else {
    sub_7 = v_331;
  };
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_19 = false;
  sub_18 = sub_19;
  if (controller_v_122) {
    sub_17 = false;
  } else {
    sub_17 = sub_18;
  };
  if (controller_v_121) {
    v_322 = false;
  } else {
    v_322 = sub_17;
  };
  if (controller_v_122) {
    sub_21 = sub_18;
  } else {
    sub_21 = false;
  };
  if (controller_v_121) {
    sub_20 = sub_21;
  } else {
    sub_20 = false;
  };
  if (controller_c_air_1) {
    v_323 = v_322;
    v_321 = sub_17;
  } else {
    v_323 = sub_20;
    v_321 = sub_20;
  };
  if (controller_c_air_2) {
    sub_16 = v_321;
  } else {
    sub_16 = v_323;
  };
  if (controller_ck_18_1) {
    v_325 = false;
    v_324 = sub_16;
  } else {
    v_325 = sub_16;
    v_324 = false;
  };
  if (controller_c_pc) {
    sub_15 = v_324;
  } else {
    sub_15 = v_325;
  };
  sub_14 = sub_15;
  sub_13 = sub_14;
  if (controller_cleaner) {
    v_332 = sub_13;
    sub_4 = sub_5;
  } else {
    v_332 = sub_5;
    sub_4 = sub_13;
  };
  if (controller_ck_16_1) {
    sub_3 = v_332;
  } else {
    sub_3 = sub_4;
  };
  if (controller_v_121) {
    v_316 = false;
  } else {
    v_316 = sub_9;
  };
  if (controller_c_air_1) {
    v_317 = v_316;
    v_315 = sub_9;
  } else {
    v_317 = sub_12;
    v_315 = sub_12;
  };
  if (controller_c_air_2) {
    sub_27 = v_315;
  } else {
    sub_27 = v_317;
  };
  if (controller_ck_18_1) {
    v_319 = sub_27;
    v_318 = false;
  } else {
    v_319 = false;
    v_318 = sub_27;
  };
  if (controller_c_pc) {
    sub_26 = v_318;
  } else {
    sub_26 = v_319;
  };
  sub_25 = sub_26;
  sub_24 = sub_25;
  if (controller_v_121) {
    v_311 = false;
    v_310 = sub_17;
  } else {
    v_311 = sub_18;
    v_310 = sub_21;
  };
  if (controller_c_air_1) {
    v_312 = v_310;
  } else {
    v_312 = v_311;
  };
  if (controller_v_121) {
    v = false;
  } else {
    v = sub_21;
  };
  if (controller_c_air_1) {
    v_309 = sub_21;
  } else {
    v_309 = v;
  };
  if (controller_c_air_2) {
    sub_31 = v_309;
  } else {
    sub_31 = v_312;
  };
  if (controller_ck_18_1) {
    v_314 = sub_31;
    v_313 = false;
  } else {
    v_314 = false;
    v_313 = sub_31;
  };
  if (controller_c_pc) {
    sub_30 = v_313;
  } else {
    sub_30 = v_314;
  };
  sub_29 = sub_30;
  sub_28 = sub_29;
  if (controller_cleaner) {
    v_320 = sub_28;
    sub_23 = sub_24;
  } else {
    v_320 = sub_24;
    sub_23 = sub_28;
  };
  if (controller_ck_16_1) {
    sub_22 = v_320;
  } else {
    sub_22 = sub_23;
  };
  if (controller_worker) {
    v_333 = sub_22;
    sub_2 = sub_3;
  } else {
    v_333 = sub_3;
    sub_2 = sub_22;
  };
  if (controller_ck_14_1) {
    sub_1 = v_333;
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
  int controller_ck_20_1, int controller_pnr_3, int controller_v_122,
  int controller_v_121, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_air_1, int controller_c_window,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_2_out* _out) {
  
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
  sub_13 = false;
  sub_12 = sub_13;
  if (controller_v_122) {
    sub_11 = sub_12;
  } else {
    sub_11 = false;
  };
  if (controller_v_121) {
    sub_10 = sub_11;
  } else {
    sub_10 = false;
  };
  sub_16 = true;
  sub_15 = sub_16;
  if (controller_v_122) {
    sub_14 = false;
    sub_17 = false;
  } else {
    sub_14 = sub_15;
    sub_17 = sub_12;
  };
  if (controller_v_121) {
    v_348 = sub_17;
  } else {
    v_348 = sub_14;
  };
  if (controller_c_air_1) {
    sub_9 = sub_10;
  } else {
    sub_9 = v_348;
  };
  if (controller_ck_18_1) {
    v_350 = false;
    v_349 = sub_9;
  } else {
    v_350 = sub_9;
    v_349 = false;
  };
  if (controller_c_pc) {
    sub_8 = v_349;
  } else {
    sub_8 = v_350;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (controller_v_121) {
    v_347 = sub_14;
  } else {
    v_347 = sub_17;
  };
  if (controller_c_air_1) {
    sub_22 = v_347;
  } else {
    sub_22 = sub_10;
  };
  if (controller_ck_18_1) {
    sub_21 = sub_22;
    sub_23 = false;
  } else {
    sub_21 = false;
    sub_23 = sub_22;
  };
  if (controller_c_pc) {
    sub_20 = sub_21;
  } else {
    sub_20 = sub_23;
  };
  sub_19 = sub_20;
  sub_18 = sub_19;
  if (controller_cleaner) {
    v_351 = sub_18;
    sub_5 = sub_6;
  } else {
    v_351 = sub_6;
    sub_5 = sub_18;
  };
  if (controller_ck_16_1) {
    sub_4 = v_351;
  } else {
    sub_4 = sub_5;
  };
  if (controller_c_pc) {
    sub_28 = sub_23;
  } else {
    sub_28 = sub_21;
  };
  sub_27 = sub_28;
  sub_26 = sub_27;
  if (controller_v_121) {
    v_343 = false;
  } else {
    v_343 = sub_12;
  };
  if (controller_v_122) {
    sub_33 = sub_15;
  } else {
    sub_33 = sub_12;
  };
  if (controller_v_121) {
    v_342 = sub_33;
  } else {
    v_342 = sub_11;
  };
  if (controller_c_air_1) {
    sub_32 = v_342;
  } else {
    sub_32 = v_343;
  };
  if (controller_ck_18_1) {
    v_345 = sub_32;
    v_344 = false;
  } else {
    v_345 = false;
    v_344 = sub_32;
  };
  if (controller_c_pc) {
    sub_31 = v_344;
  } else {
    sub_31 = v_345;
  };
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (controller_cleaner) {
    v_346 = sub_29;
    sub_25 = sub_26;
  } else {
    v_346 = sub_26;
    sub_25 = sub_29;
  };
  if (controller_ck_16_1) {
    sub_24 = v_346;
  } else {
    sub_24 = sub_25;
  };
  if (controller_worker) {
    v_352 = sub_24;
    sub_3 = sub_4;
  } else {
    v_352 = sub_4;
    sub_3 = sub_24;
  };
  if (controller_ck_14_1) {
    sub_2 = v_352;
  } else {
    sub_2 = sub_3;
  };
  if (controller_c_air_1) {
    sub_40 = sub_10;
  } else {
    sub_40 = sub_14;
  };
  if (controller_ck_18_1) {
    v_340 = false;
    v_339 = sub_40;
  } else {
    v_340 = sub_40;
    v_339 = false;
  };
  if (controller_c_pc) {
    sub_39 = v_339;
  } else {
    sub_39 = v_340;
  };
  sub_38 = sub_39;
  sub_37 = sub_38;
  if (controller_v_122) {
    sub_46 = sub_15;
  } else {
    sub_46 = false;
  };
  if (controller_v_121) {
    v_338 = sub_46;
  } else {
    v_338 = false;
  };
  if (controller_c_air_1) {
    sub_45 = sub_14;
  } else {
    sub_45 = v_338;
  };
  if (controller_ck_18_1) {
    sub_44 = sub_45;
    sub_47 = false;
  } else {
    sub_44 = false;
    sub_47 = sub_45;
  };
  if (controller_c_pc) {
    sub_43 = sub_44;
  } else {
    sub_43 = sub_47;
  };
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (controller_cleaner) {
    v_341 = sub_41;
    sub_36 = sub_37;
  } else {
    v_341 = sub_37;
    sub_36 = sub_41;
  };
  if (controller_ck_16_1) {
    sub_35 = v_341;
  } else {
    sub_35 = sub_36;
  };
  if (controller_c_pc) {
    sub_52 = sub_47;
  } else {
    sub_52 = sub_44;
  };
  sub_51 = sub_52;
  sub_50 = sub_51;
  if (controller_v_121) {
    v_334 = false;
    v = sub_33;
  } else {
    v_334 = sub_33;
    v = sub_46;
  };
  if (controller_c_air_1) {
    sub_56 = v;
  } else {
    sub_56 = v_334;
  };
  if (controller_ck_18_1) {
    v_336 = sub_56;
    v_335 = false;
  } else {
    v_336 = false;
    v_335 = sub_56;
  };
  if (controller_c_pc) {
    sub_55 = v_335;
  } else {
    sub_55 = v_336;
  };
  sub_54 = sub_55;
  sub_53 = sub_54;
  if (controller_cleaner) {
    v_337 = sub_53;
    sub_49 = sub_50;
  } else {
    v_337 = sub_50;
    sub_49 = sub_53;
  };
  if (controller_ck_16_1) {
    sub_48 = v_337;
  } else {
    sub_48 = sub_49;
  };
  if (controller_worker) {
    v_353 = sub_48;
    sub_34 = sub_35;
  } else {
    v_353 = sub_35;
    sub_34 = sub_48;
  };
  if (controller_ck_14_1) {
    v_354 = v_353;
  } else {
    v_354 = sub_34;
  };
  if (p_controller_c_air_2) {
    sub_1 = v_354;
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
  int controller_ck_20_1, int controller_pnr_3, int controller_v_122,
  int controller_v_121, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_1_out* _out) {
  
  int v_361;
  int v_360;
  int v_359;
  int v_358;
  int v_357;
  int v_356;
  int v_355;
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
  sub_11 = false;
  sub_10 = sub_11;
  if (controller_v_122) {
    sub_9 = false;
  } else {
    sub_9 = sub_10;
  };
  sub_14 = true;
  sub_13 = sub_14;
  if (controller_v_122) {
    sub_12 = sub_13;
  } else {
    sub_12 = sub_10;
  };
  if (controller_v_121) {
    sub_8 = sub_12;
  } else {
    sub_8 = sub_9;
  };
  if (controller_ck_18_1) {
    v_359 = false;
    v_358 = sub_8;
  } else {
    v_359 = sub_8;
    v_358 = false;
  };
  if (controller_c_pc) {
    sub_7 = v_358;
  } else {
    sub_7 = v_359;
  };
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (controller_v_122) {
    v_357 = sub_10;
    sub_20 = false;
  } else {
    v_357 = sub_13;
    sub_20 = sub_13;
  };
  if (controller_v_121) {
    sub_19 = v_357;
  } else {
    sub_19 = sub_20;
  };
  if (controller_ck_18_1) {
    sub_18 = sub_19;
    sub_21 = false;
  } else {
    sub_18 = false;
    sub_21 = sub_19;
  };
  if (controller_c_pc) {
    sub_17 = sub_18;
  } else {
    sub_17 = sub_21;
  };
  sub_16 = sub_17;
  sub_15 = sub_16;
  if (controller_cleaner) {
    v_360 = sub_15;
    sub_4 = sub_5;
  } else {
    v_360 = sub_5;
    sub_4 = sub_15;
  };
  if (controller_ck_16_1) {
    sub_3 = v_360;
  } else {
    sub_3 = sub_4;
  };
  if (controller_c_pc) {
    sub_26 = sub_21;
  } else {
    sub_26 = sub_18;
  };
  sub_25 = sub_26;
  sub_24 = sub_25;
  if (p_controller_c_air_1) {
    sub_31 = sub_12;
  } else {
    sub_31 = sub_10;
  };
  if (controller_v_121) {
    sub_30 = sub_13;
  } else {
    sub_30 = sub_31;
  };
  if (controller_ck_18_1) {
    v_355 = sub_30;
    v = false;
  } else {
    v_355 = false;
    v = sub_30;
  };
  if (controller_c_pc) {
    sub_29 = v;
  } else {
    sub_29 = v_355;
  };
  sub_28 = sub_29;
  sub_27 = sub_28;
  if (controller_cleaner) {
    v_356 = sub_27;
    sub_23 = sub_24;
  } else {
    v_356 = sub_24;
    sub_23 = sub_27;
  };
  if (controller_ck_16_1) {
    sub_22 = v_356;
  } else {
    sub_22 = sub_23;
  };
  if (controller_worker) {
    v_361 = sub_22;
    sub_2 = sub_3;
  } else {
    v_361 = sub_3;
    sub_2 = sub_22;
  };
  if (controller_ck_14_1) {
    sub_1 = v_361;
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
  int controller_ck_20_1, int controller_pnr_3, int controller_v_122,
  int controller_v_121, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_window_out* _out) {
  
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
  sub_11 = p_controller_c_window;
  sub_10 = sub_11;
  if (controller_v_122) {
    sub_9 = false;
  } else {
    sub_9 = sub_10;
  };
  if (controller_v_121) {
    sub_8 = sub_10;
  } else {
    sub_8 = sub_9;
  };
  if (controller_ck_18_1) {
    sub_7 = sub_8;
    sub_12 = false;
  } else {
    sub_7 = false;
    sub_12 = sub_8;
  };
  if (controller_c_pc) {
    sub_6 = sub_7;
  } else {
    sub_6 = sub_12;
  };
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  if (controller_c_pc) {
    sub_17 = sub_12;
  } else {
    sub_17 = sub_7;
  };
  sub_16 = sub_17;
  sub_15 = sub_16;
  if (controller_ck_18_1) {
    v_362 = sub_10;
    v = false;
  } else {
    v_362 = false;
    v = sub_10;
  };
  if (controller_c_pc) {
    sub_20 = v;
  } else {
    sub_20 = v_362;
  };
  sub_19 = sub_20;
  sub_18 = sub_19;
  if (controller_cleaner) {
    v_363 = sub_18;
    sub_14 = sub_15;
  } else {
    v_363 = sub_15;
    sub_14 = sub_18;
  };
  if (controller_ck_16_1) {
    sub_13 = v_363;
  } else {
    sub_13 = sub_14;
  };
  if (controller_worker) {
    v_364 = sub_13;
    sub_2 = sub_3;
  } else {
    v_364 = sub_3;
    sub_2 = sub_13;
  };
  if (controller_ck_14_1) {
    sub_1 = v_364;
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
  int controller_ck_20_1, int controller_pnr_3, int controller_v_122,
  int controller_v_121, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_door,
  Controller_controller__controller_controller_controller_c_pc_out* _out) {
  
  int v_365;
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
  if (controller_v_122) {
    sub_8 = false;
  } else {
    sub_8 = sub_9;
  };
  if (controller_v_121) {
    sub_7 = sub_9;
  } else {
    sub_7 = sub_8;
  };
  sub_12 = true;
  if (controller_v_122) {
    sub_11 = false;
  } else {
    sub_11 = sub_12;
  };
  if (controller_v_121) {
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
    v_365 = sub_13;
    sub_2 = sub_3;
  } else {
    v_365 = sub_3;
    sub_2 = sub_13;
  };
  if (controller_ck_14_1) {
    sub_1 = v_365;
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
  int controller_ck_20_1, int controller_pnr_3, int controller_v_122,
  int controller_v_121, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door,
  Controller_controller__controller_controller_controller_c_door_out* _out) {
  
  int v_366;
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
  if (controller_v_122) {
    sub_7 = false;
  } else {
    sub_7 = sub_8;
  };
  if (controller_v_121) {
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
    v_366 = sub_9;
    sub_2 = sub_3;
  } else {
    v_366 = sub_3;
    sub_2 = sub_9;
  };
  if (controller_ck_14_1) {
    sub_1 = v_366;
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
                                                       int controller_v_122,
                                                       int controller_v_121,
                                                       int controller_pnr_2,
                                                       int controller_ck_24_1,
                                                       int controller_pnr_1,
                                                       int controller_ck_26_1,
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
  controller_light_switch, controller_blind_switch, controller_ck_1,
  controller_pnr_9, controller_ck_10_1, controller_pnr_8, controller_ck_12_1,
  controller_pnr_7, controller_ck_14_1, controller_pnr_6, controller_ck_16_1,
  controller_pnr_5, controller_ck_18_1, controller_pnr_4, controller_ck_20_1,
  controller_pnr_3, controller_v_122, controller_v_121, controller_pnr_2,
  controller_ck_24_1, controller_pnr_1, controller_ck_26_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_light_2, p_controller_c_blind_1,
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
                                                                    controller_v_122,
                                                                    controller_v_121,
                                                                    controller_pnr_2,
                                                                    controller_ck_24_1,
                                                                    controller_pnr_1,
                                                                    controller_ck_26_1,
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
  controller_light_switch, controller_blind_switch, controller_ck_1,
  controller_pnr_9, controller_ck_10_1, controller_pnr_8, controller_ck_12_1,
  controller_pnr_7, controller_ck_14_1, controller_pnr_6, controller_ck_16_1,
  controller_pnr_5, controller_ck_18_1, controller_pnr_4, controller_ck_20_1,
  controller_pnr_3, controller_v_122, controller_v_121, controller_pnr_2,
  controller_ck_24_1, controller_pnr_1, controller_ck_26_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_light_2, p_controller_c_blind_1,
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
  controller_pnr_3, controller_v_122, controller_v_121, controller_pnr_2,
  controller_ck_24_1, controller_pnr_1, controller_ck_26_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_light_2, p_controller_c_blind_1,
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
  controller_pnr_3, controller_v_122, controller_v_121, controller_pnr_2,
  controller_ck_24_1, controller_pnr_1, controller_ck_26_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_light_2, p_controller_c_blind_1,
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
  controller_pnr_3, controller_v_122, controller_v_121, controller_pnr_2,
  controller_ck_24_1, controller_pnr_1, controller_ck_26_1, controller_pnr,
  p_controller_c_blind_2, p_controller_c_light_2, p_controller_c_blind_1,
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
  controller_pnr_3, controller_v_122, controller_v_121, controller_pnr_2,
  controller_ck_24_1, controller_pnr_1, controller_ck_26_1, controller_pnr,
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
  controller_light_switch, controller_blind_switch, controller_ck_1,
  controller_pnr_9, controller_ck_10_1, controller_pnr_8, controller_ck_12_1,
  controller_pnr_7, controller_ck_14_1, controller_pnr_6, controller_ck_16_1,
  controller_pnr_5, controller_ck_18_1, controller_pnr_4, controller_ck_20_1,
  controller_pnr_3, controller_v_122, controller_v_121, controller_pnr_2,
  controller_ck_24_1, controller_pnr_1, controller_ck_26_1, controller_pnr,
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
  controller_light_switch, controller_blind_switch, controller_ck_1,
  controller_pnr_9, controller_ck_10_1, controller_pnr_8, controller_ck_12_1,
  controller_pnr_7, controller_ck_14_1, controller_pnr_6, controller_ck_16_1,
  controller_pnr_5, controller_ck_18_1, controller_pnr_4, controller_ck_20_1,
  controller_pnr_3, controller_v_122, controller_v_121, controller_pnr_2,
  controller_ck_24_1, controller_pnr_1, controller_ck_26_1, controller_pnr,
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
  controller_light_switch, controller_blind_switch, controller_ck_1,
  controller_pnr_9, controller_ck_10_1, controller_pnr_8, controller_ck_12_1,
  controller_pnr_7, controller_ck_14_1, controller_pnr_6, controller_ck_16_1,
  controller_pnr_5, controller_ck_18_1, controller_pnr_4, controller_ck_20_1,
  controller_pnr_3, controller_v_122, controller_v_121, controller_pnr_2,
  controller_ck_24_1, controller_pnr_1, controller_ck_26_1, controller_pnr,
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

