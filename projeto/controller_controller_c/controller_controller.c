/* --- Generated the 14/8/2018 at 10:9 --- */
/* --- heptagon compiler, version 1.03.00 (compiled mon. aug. 6 15:37:40 CET 2018) --- */
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
  int controller_ck_20_1, int controller_pnr_3, int controller_v_239,
  int controller_v_238, int controller_pnr_2, int controller_ck_24_1,
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
  v_63 = !(controller_v_238);
  sub_11 = (v_63&&false);
  if (controller_v_239) {
    v_65 = false;
    sub_10 = sub_11;
  } else {
    v_65 = sub_11;
    sub_10 = false;
  };
  if (controller_c_air_2) {
    v_64 = false;
  } else {
    v_64 = sub_10;
  };
  sub_12 = (controller_v_239&&false);
  if (controller_c_air_2) {
    v_66 = sub_12;
  } else {
    v_66 = v_65;
  };
  if (controller_c_air_1) {
    sub_9 = v_64;
  } else {
    sub_9 = v_66;
  };
  if (controller_c_door) {
    v_67 = sub_9;
    sub_8 = false;
  } else {
    v_67 = false;
    sub_8 = sub_9;
  };
  if (controller_ck_16_1) {
    v_68 = v_67;
  } else {
    v_68 = sub_8;
  };
  if (controller_c_window) {
    sub_7 = v_68;
  } else {
    sub_7 = false;
  };
  sub_6 = sub_7;
  if (controller_ck_26_1) {
    v_69 = false;
  } else {
    v_69 = sub_6;
  };
  sub_19 = (controller_v_238||false);
  if (controller_v_239) {
    v_59 = false;
    sub_18 = sub_19;
  } else {
    v_59 = sub_19;
    sub_18 = false;
  };
  if (controller_c_air_2) {
    v_58 = false;
  } else {
    v_58 = sub_18;
  };
  v_57 = !(controller_v_239);
  sub_20 = (v_57||false);
  if (controller_c_air_2) {
    v_60 = sub_20;
  } else {
    v_60 = v_59;
  };
  if (controller_c_air_1) {
    sub_17 = v_58;
  } else {
    sub_17 = v_60;
  };
  if (controller_c_door) {
    v_61 = sub_17;
    sub_16 = false;
  } else {
    v_61 = false;
    sub_16 = sub_17;
  };
  if (controller_ck_16_1) {
    v_62 = v_61;
  } else {
    v_62 = sub_16;
  };
  if (controller_c_window) {
    sub_15 = v_62;
  } else {
    sub_15 = false;
  };
  sub_14 = sub_15;
  if (controller_ck_26_1) {
    sub_13 = sub_14;
  } else {
    sub_13 = sub_6;
  };
  if (controller_blind_switch) {
    v_70 = v_69;
  } else {
    v_70 = sub_13;
  };
  sub_21 = sub_13;
  if (controller_c_blind_1) {
    sub_5 = v_70;
  } else {
    sub_5 = sub_21;
  };
  if (controller_ck_24_1) {
    sub_4 = false;
    v_56 = sub_5;
  } else {
    sub_4 = sub_5;
    v_56 = false;
  };
  if (controller_c_light_2) {
    sub_22 = v_56;
  } else {
    sub_22 = sub_4;
  };
  if (controller_light_switch) {
    v_71 = sub_4;
  } else {
    v_71 = sub_22;
  };
  if (controller_c_light_1) {
    v_72 = v_71;
  } else {
    v_72 = sub_22;
  };
  if (controller_c_closet) {
    sub_3 = v_72;
  } else {
    sub_3 = false;
  };
  sub_32 = (controller_v_238&&false);
  if (controller_v_239) {
    v_48 = false;
  } else {
    v_48 = sub_32;
  };
  if (controller_c_air_2) {
    v_49 = sub_12;
  } else {
    v_49 = v_48;
  };
  if (controller_c_air_1) {
    sub_31 = v_49;
  } else {
    sub_31 = sub_10;
  };
  if (controller_c_door) {
    v_50 = sub_31;
    sub_30 = false;
  } else {
    v_50 = false;
    sub_30 = sub_31;
  };
  if (controller_ck_16_1) {
    v_51 = v_50;
  } else {
    v_51 = sub_30;
  };
  if (controller_c_window) {
    sub_29 = v_51;
  } else {
    sub_29 = false;
  };
  if (controller_change_shift) {
    v_52 = false;
    sub_28 = sub_29;
  } else {
    v_52 = sub_29;
    sub_28 = false;
  };
  if (controller_ck_1) {
    sub_27 = v_52;
  } else {
    sub_27 = sub_28;
  };
  if (controller_ck_26_1) {
    v_53 = sub_27;
  } else {
    v_53 = false;
  };
  v_42 = !(controller_v_238);
  sub_39 = (v_42||false);
  if (controller_v_239) {
    v_43 = false;
  } else {
    v_43 = sub_39;
  };
  if (controller_c_air_2) {
    v_44 = sub_20;
  } else {
    v_44 = v_43;
  };
  if (controller_c_air_1) {
    sub_38 = v_44;
  } else {
    sub_38 = sub_18;
  };
  if (controller_c_door) {
    v_45 = sub_38;
    sub_37 = false;
  } else {
    v_45 = false;
    sub_37 = sub_38;
  };
  if (controller_ck_16_1) {
    v_46 = v_45;
  } else {
    v_46 = sub_37;
  };
  if (controller_c_window) {
    sub_36 = v_46;
  } else {
    sub_36 = false;
  };
  if (controller_change_shift) {
    v_47 = false;
    sub_35 = sub_36;
  } else {
    v_47 = sub_36;
    sub_35 = false;
  };
  if (controller_ck_1) {
    sub_34 = v_47;
  } else {
    sub_34 = sub_35;
  };
  if (controller_ck_26_1) {
    sub_33 = sub_27;
  } else {
    sub_33 = sub_34;
  };
  if (controller_blind_switch) {
    v_54 = v_53;
  } else {
    v_54 = sub_33;
  };
  sub_40 = sub_33;
  if (controller_c_blind_1) {
    sub_26 = v_54;
  } else {
    sub_26 = sub_40;
  };
  sub_43 = sub_29;
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (controller_ck_24_1) {
    sub_25 = sub_41;
    v_41 = sub_26;
  } else {
    sub_25 = sub_26;
    v_41 = sub_41;
  };
  if (controller_c_light_2) {
    sub_44 = v_41;
  } else {
    sub_44 = sub_25;
  };
  if (controller_light_switch) {
    v_55 = sub_25;
  } else {
    v_55 = sub_44;
  };
  if (controller_c_light_1) {
    sub_24 = v_55;
  } else {
    sub_24 = sub_44;
  };
  if (controller_c_closet) {
    sub_23 = false;
  } else {
    sub_23 = sub_24;
  };
  if (controller_ck_12_1) {
    v_74 = sub_3;
    v_73 = sub_23;
  } else {
    v_74 = sub_23;
    v_73 = sub_3;
  };
  if (controller_cleaner) {
    v_75 = v_73;
  } else {
    v_75 = v_74;
  };
  if (controller_c_pc) {
    sub_2 = false;
  } else {
    sub_2 = v_75;
  };
  if (controller_c_closet) {
    sub_46 = sub_24;
  } else {
    sub_46 = false;
  };
  if (controller_v_239) {
    v_31 = sub_32;
  } else {
    v_31 = false;
  };
  if (controller_c_air_2) {
    v_32 = v_31;
  } else {
    v_32 = sub_32;
  };
  if (controller_v_239) {
    v_29 = sub_32;
  } else {
    v_29 = sub_11;
  };
  v_27 = !(controller_v_239);
  v_28 = (v_27&&false);
  if (controller_c_air_2) {
    v_30 = v_28;
  } else {
    v_30 = v_29;
  };
  if (controller_c_air_1) {
    sub_54 = v_30;
  } else {
    sub_54 = v_32;
  };
  sub_53 = sub_54;
  sub_52 = sub_53;
  if (controller_change_shift) {
    v_33 = false;
    sub_51 = sub_52;
  } else {
    v_33 = sub_52;
    sub_51 = false;
  };
  if (controller_ck_1) {
    sub_50 = v_33;
  } else {
    sub_50 = sub_51;
  };
  if (controller_ck_26_1) {
    v_34 = sub_50;
  } else {
    v_34 = false;
  };
  if (controller_v_239) {
    v_24 = sub_39;
  } else {
    v_24 = false;
  };
  if (controller_c_air_2) {
    v_25 = v_24;
  } else {
    v_25 = sub_39;
  };
  if (controller_v_239) {
    v_22 = sub_39;
  } else {
    v_22 = sub_19;
  };
  v_21 = (controller_v_239||false);
  if (controller_c_air_2) {
    v_23 = v_21;
  } else {
    v_23 = v_22;
  };
  if (controller_c_air_1) {
    sub_60 = v_23;
  } else {
    sub_60 = v_25;
  };
  sub_59 = sub_60;
  sub_58 = sub_59;
  if (controller_change_shift) {
    v_26 = false;
    sub_57 = sub_58;
  } else {
    v_26 = sub_58;
    sub_57 = false;
  };
  if (controller_ck_1) {
    sub_56 = v_26;
  } else {
    sub_56 = sub_57;
  };
  if (controller_ck_26_1) {
    sub_55 = sub_50;
  } else {
    sub_55 = sub_56;
  };
  if (controller_blind_switch) {
    v_35 = v_34;
  } else {
    v_35 = sub_55;
  };
  sub_61 = sub_55;
  if (controller_c_blind_1) {
    sub_49 = v_35;
  } else {
    sub_49 = sub_61;
  };
  sub_64 = sub_52;
  sub_63 = sub_64;
  sub_62 = sub_63;
  if (controller_ck_24_1) {
    sub_48 = sub_62;
    v_20 = sub_49;
  } else {
    sub_48 = sub_49;
    v_20 = sub_62;
  };
  if (controller_c_light_2) {
    sub_65 = v_20;
  } else {
    sub_65 = sub_48;
  };
  if (controller_light_switch) {
    v_36 = sub_48;
  } else {
    v_36 = sub_65;
  };
  if (controller_c_light_1) {
    v_37 = v_36;
  } else {
    v_37 = sub_65;
  };
  if (controller_c_closet) {
    sub_47 = false;
  } else {
    sub_47 = v_37;
  };
  if (controller_ck_12_1) {
    v_39 = sub_46;
    v_38 = sub_47;
  } else {
    v_39 = sub_47;
    v_38 = sub_46;
  };
  if (controller_cleaner) {
    v_40 = v_38;
  } else {
    v_40 = v_39;
  };
  if (controller_c_pc) {
    sub_45 = v_40;
  } else {
    sub_45 = false;
  };
  if (controller_ck_10_1) {
    v_77 = sub_2;
    v_76 = sub_45;
  } else {
    v_77 = sub_45;
    v_76 = sub_2;
  };
  if (controller_worker) {
    sub_1 = v_76;
  } else {
    sub_1 = v_77;
  };
  if (controller_ck_26_1) {
    v_13 = false;
  } else {
    v_13 = sub_14;
  };
  if (controller_blind_switch) {
    v_14 = v_13;
  } else {
    v_14 = sub_13;
  };
  if (controller_c_blind_1) {
    sub_69 = v_14;
  } else {
    sub_69 = sub_21;
  };
  if (controller_ck_24_1) {
    sub_68 = false;
    v_12 = sub_69;
  } else {
    sub_68 = sub_69;
    v_12 = false;
  };
  if (controller_c_light_2) {
    sub_70 = v_12;
  } else {
    sub_70 = sub_68;
  };
  if (controller_light_switch) {
    v_15 = sub_68;
  } else {
    v_15 = sub_70;
  };
  if (controller_c_light_1) {
    v_16 = v_15;
  } else {
    v_16 = sub_70;
  };
  if (controller_c_closet) {
    sub_67 = v_16;
  } else {
    sub_67 = false;
  };
  if (controller_ck_26_1) {
    v_9 = sub_34;
  } else {
    v_9 = false;
  };
  if (controller_blind_switch) {
    v_10 = v_9;
  } else {
    v_10 = sub_33;
  };
  if (controller_c_blind_1) {
    sub_74 = v_10;
  } else {
    sub_74 = sub_40;
  };
  sub_77 = sub_36;
  sub_76 = sub_77;
  sub_75 = sub_76;
  if (controller_ck_24_1) {
    sub_73 = sub_75;
    v_8 = sub_74;
  } else {
    sub_73 = sub_74;
    v_8 = sub_75;
  };
  if (controller_c_light_2) {
    sub_78 = v_8;
  } else {
    sub_78 = sub_73;
  };
  if (controller_light_switch) {
    v_11 = sub_73;
  } else {
    v_11 = sub_78;
  };
  if (controller_c_light_1) {
    sub_72 = v_11;
  } else {
    sub_72 = sub_78;
  };
  if (controller_c_closet) {
    sub_71 = false;
  } else {
    sub_71 = sub_72;
  };
  if (controller_ck_12_1) {
    v_18 = sub_67;
    v_17 = sub_71;
  } else {
    v_18 = sub_71;
    v_17 = sub_67;
  };
  if (controller_cleaner) {
    v_19 = v_17;
  } else {
    v_19 = v_18;
  };
  if (controller_c_pc) {
    sub_66 = false;
  } else {
    sub_66 = v_19;
  };
  if (controller_c_closet) {
    sub_80 = sub_72;
  } else {
    sub_80 = false;
  };
  if (controller_ck_26_1) {
    v_1 = sub_56;
  } else {
    v_1 = false;
  };
  if (controller_blind_switch) {
    v_2 = v_1;
  } else {
    v_2 = sub_55;
  };
  if (controller_c_blind_1) {
    sub_83 = v_2;
  } else {
    sub_83 = sub_61;
  };
  sub_86 = sub_58;
  sub_85 = sub_86;
  sub_84 = sub_85;
  if (controller_ck_24_1) {
    sub_82 = sub_84;
    v = sub_83;
  } else {
    sub_82 = sub_83;
    v = sub_84;
  };
  if (controller_c_light_2) {
    sub_87 = v;
  } else {
    sub_87 = sub_82;
  };
  if (controller_light_switch) {
    v_3 = sub_82;
  } else {
    v_3 = sub_87;
  };
  if (controller_c_light_1) {
    v_4 = v_3;
  } else {
    v_4 = sub_87;
  };
  if (controller_c_closet) {
    sub_81 = false;
  } else {
    sub_81 = v_4;
  };
  if (controller_ck_12_1) {
    v_6 = sub_80;
    v_5 = sub_81;
  } else {
    v_6 = sub_81;
    v_5 = sub_80;
  };
  if (controller_cleaner) {
    v_7 = v_5;
  } else {
    v_7 = v_6;
  };
  if (controller_c_pc) {
    sub_79 = v_7;
  } else {
    sub_79 = false;
  };
  if (controller_ck_10_1) {
    v_79 = sub_66;
    v_78 = sub_79;
  } else {
    v_79 = sub_79;
    v_78 = sub_66;
  };
  if (controller_worker) {
    v_80 = v_78;
  } else {
    v_80 = v_79;
  };
  if (p_controller_c_blind_2) {
    sub_0 = v_80;
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
  int controller_ck_20_1, int controller_pnr_3, int controller_v_239,
  int controller_v_238, int controller_pnr_2, int controller_ck_24_1,
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
  v_152 = !(controller_v_238);
  sub_10 = (v_152&&false);
  if (controller_v_239) {
    v_154 = false;
    sub_9 = sub_10;
  } else {
    v_154 = sub_10;
    sub_9 = false;
  };
  if (controller_c_air_2) {
    v_153 = false;
  } else {
    v_153 = sub_9;
  };
  sub_11 = (controller_v_239&&false);
  if (controller_c_air_2) {
    v_155 = sub_11;
  } else {
    v_155 = v_154;
  };
  if (controller_c_air_1) {
    sub_8 = v_153;
  } else {
    sub_8 = v_155;
  };
  if (controller_c_door) {
    v_156 = sub_8;
    sub_7 = false;
  } else {
    v_156 = false;
    sub_7 = sub_8;
  };
  if (controller_ck_16_1) {
    v_157 = v_156;
  } else {
    v_157 = sub_7;
  };
  if (controller_c_window) {
    sub_6 = v_157;
  } else {
    sub_6 = false;
  };
  sub_5 = sub_6;
  if (controller_ck_26_1) {
    v_158 = false;
  } else {
    v_158 = sub_5;
  };
  if (controller_blind_switch) {
    v_159 = v_158;
  } else {
    v_159 = sub_5;
  };
  if (controller_c_blind_1) {
    sub_4 = v_159;
  } else {
    sub_4 = sub_5;
  };
  if (controller_ck_24_1) {
    v_160 = false;
  } else {
    v_160 = sub_4;
  };
  sub_19 = (controller_v_238||false);
  if (controller_v_239) {
    v_146 = false;
    sub_18 = sub_19;
  } else {
    v_146 = sub_19;
    sub_18 = false;
  };
  if (controller_c_air_2) {
    v_145 = false;
  } else {
    v_145 = sub_18;
  };
  v_144 = !(controller_v_239);
  sub_20 = (v_144||false);
  if (controller_c_air_2) {
    v_147 = sub_20;
  } else {
    v_147 = v_146;
  };
  if (controller_c_air_1) {
    sub_17 = v_145;
  } else {
    sub_17 = v_147;
  };
  if (controller_c_door) {
    v_148 = sub_17;
    sub_16 = false;
  } else {
    v_148 = false;
    sub_16 = sub_17;
  };
  if (controller_ck_16_1) {
    v_149 = v_148;
  } else {
    v_149 = sub_16;
  };
  if (controller_c_window) {
    sub_15 = v_149;
  } else {
    sub_15 = false;
  };
  sub_14 = sub_15;
  if (controller_ck_26_1) {
    v_150 = false;
  } else {
    v_150 = sub_14;
  };
  if (controller_blind_switch) {
    v_151 = v_150;
  } else {
    v_151 = sub_14;
  };
  if (controller_c_blind_1) {
    sub_13 = v_151;
  } else {
    sub_13 = sub_14;
  };
  if (controller_ck_24_1) {
    sub_12 = sub_13;
  } else {
    sub_12 = sub_4;
  };
  if (controller_light_switch) {
    v_161 = v_160;
  } else {
    v_161 = sub_12;
  };
  sub_21 = sub_12;
  if (controller_c_light_1) {
    v_162 = v_161;
  } else {
    v_162 = sub_21;
  };
  if (controller_c_closet) {
    sub_3 = v_162;
  } else {
    sub_3 = false;
  };
  sub_30 = (controller_v_238&&false);
  if (controller_v_239) {
    v_135 = false;
  } else {
    v_135 = sub_30;
  };
  if (controller_c_air_2) {
    v_136 = sub_11;
  } else {
    v_136 = v_135;
  };
  if (controller_c_air_1) {
    sub_29 = v_136;
  } else {
    sub_29 = sub_9;
  };
  if (controller_c_door) {
    v_137 = sub_29;
    sub_28 = false;
  } else {
    v_137 = false;
    sub_28 = sub_29;
  };
  if (controller_ck_16_1) {
    v_138 = v_137;
  } else {
    v_138 = sub_28;
  };
  if (controller_c_window) {
    sub_27 = v_138;
  } else {
    sub_27 = false;
  };
  if (controller_change_shift) {
    v_139 = false;
    sub_26 = sub_27;
  } else {
    v_139 = sub_27;
    sub_26 = false;
  };
  if (controller_ck_1) {
    sub_25 = v_139;
  } else {
    sub_25 = sub_26;
  };
  if (controller_ck_26_1) {
    v_140 = sub_25;
  } else {
    v_140 = false;
  };
  if (controller_blind_switch) {
    v_141 = v_140;
  } else {
    v_141 = sub_25;
  };
  if (controller_c_blind_1) {
    sub_24 = v_141;
  } else {
    sub_24 = sub_25;
  };
  sub_33 = sub_27;
  sub_32 = sub_33;
  sub_31 = sub_32;
  if (controller_ck_24_1) {
    v_142 = sub_31;
  } else {
    v_142 = sub_24;
  };
  v_128 = !(controller_v_238);
  sub_40 = (v_128||false);
  if (controller_v_239) {
    v_129 = false;
  } else {
    v_129 = sub_40;
  };
  if (controller_c_air_2) {
    v_130 = sub_20;
  } else {
    v_130 = v_129;
  };
  if (controller_c_air_1) {
    sub_39 = v_130;
  } else {
    sub_39 = sub_18;
  };
  if (controller_c_door) {
    v_131 = sub_39;
    sub_38 = false;
  } else {
    v_131 = false;
    sub_38 = sub_39;
  };
  if (controller_ck_16_1) {
    v_132 = v_131;
  } else {
    v_132 = sub_38;
  };
  if (controller_c_window) {
    sub_37 = v_132;
  } else {
    sub_37 = false;
  };
  sub_36 = sub_37;
  if (controller_change_shift) {
    sub_42 = sub_27;
    sub_43 = sub_37;
  } else {
    sub_42 = sub_37;
    sub_43 = sub_27;
  };
  if (controller_ck_1) {
    sub_41 = sub_43;
  } else {
    sub_41 = sub_42;
  };
  if (controller_ck_26_1) {
    v_133 = sub_41;
  } else {
    v_133 = sub_36;
  };
  if (controller_blind_switch) {
    v_134 = v_133;
  } else {
    v_134 = sub_41;
  };
  if (controller_c_blind_1) {
    sub_35 = v_134;
  } else {
    sub_35 = sub_41;
  };
  if (controller_ck_24_1) {
    sub_34 = sub_31;
  } else {
    sub_34 = sub_35;
  };
  if (controller_light_switch) {
    v_143 = v_142;
  } else {
    v_143 = sub_34;
  };
  if (controller_c_light_1) {
    sub_23 = v_143;
  } else {
    sub_23 = sub_34;
  };
  if (controller_c_closet) {
    sub_22 = false;
  } else {
    sub_22 = sub_23;
  };
  if (controller_ck_12_1) {
    v_164 = sub_3;
    v_163 = sub_22;
  } else {
    v_164 = sub_22;
    v_163 = sub_3;
  };
  if (controller_cleaner) {
    v_165 = v_163;
  } else {
    v_165 = v_164;
  };
  if (controller_c_pc) {
    sub_2 = false;
  } else {
    sub_2 = v_165;
  };
  if (controller_c_closet) {
    sub_45 = sub_23;
  } else {
    sub_45 = false;
  };
  if (controller_v_239) {
    v_117 = sub_30;
  } else {
    v_117 = false;
  };
  if (controller_c_air_2) {
    v_118 = v_117;
  } else {
    v_118 = sub_30;
  };
  if (controller_v_239) {
    v_115 = sub_30;
  } else {
    v_115 = sub_10;
  };
  v_113 = !(controller_v_239);
  v_114 = (v_113&&false);
  if (controller_c_air_2) {
    v_116 = v_114;
  } else {
    v_116 = v_115;
  };
  if (controller_c_air_1) {
    sub_52 = v_116;
  } else {
    sub_52 = v_118;
  };
  sub_51 = sub_52;
  sub_50 = sub_51;
  if (controller_change_shift) {
    v_119 = false;
    sub_49 = sub_50;
  } else {
    v_119 = sub_50;
    sub_49 = false;
  };
  if (controller_ck_1) {
    sub_48 = v_119;
  } else {
    sub_48 = sub_49;
  };
  if (controller_ck_26_1) {
    v_120 = sub_48;
  } else {
    v_120 = false;
  };
  if (controller_blind_switch) {
    v_121 = v_120;
  } else {
    v_121 = sub_48;
  };
  if (controller_c_blind_1) {
    sub_47 = v_121;
  } else {
    sub_47 = sub_48;
  };
  sub_55 = sub_50;
  sub_54 = sub_55;
  sub_53 = sub_54;
  if (controller_ck_24_1) {
    v_122 = sub_53;
  } else {
    v_122 = sub_47;
  };
  if (controller_v_239) {
    v_109 = sub_40;
  } else {
    v_109 = false;
  };
  if (controller_c_air_2) {
    v_110 = v_109;
  } else {
    v_110 = sub_40;
  };
  if (controller_v_239) {
    v_107 = sub_40;
  } else {
    v_107 = sub_19;
  };
  v_106 = (controller_v_239||false);
  if (controller_c_air_2) {
    v_108 = v_106;
  } else {
    v_108 = v_107;
  };
  if (controller_c_air_1) {
    sub_61 = v_108;
  } else {
    sub_61 = v_110;
  };
  sub_60 = sub_61;
  sub_59 = sub_60;
  sub_58 = sub_59;
  if (controller_change_shift) {
    sub_63 = sub_50;
    sub_64 = sub_59;
  } else {
    sub_63 = sub_59;
    sub_64 = sub_50;
  };
  if (controller_ck_1) {
    sub_62 = sub_64;
  } else {
    sub_62 = sub_63;
  };
  if (controller_ck_26_1) {
    v_111 = sub_62;
  } else {
    v_111 = sub_58;
  };
  if (controller_blind_switch) {
    v_112 = v_111;
  } else {
    v_112 = sub_62;
  };
  if (controller_c_blind_1) {
    sub_57 = v_112;
  } else {
    sub_57 = sub_62;
  };
  if (controller_ck_24_1) {
    sub_56 = sub_53;
  } else {
    sub_56 = sub_57;
  };
  if (controller_light_switch) {
    v_123 = v_122;
  } else {
    v_123 = sub_56;
  };
  if (controller_c_light_1) {
    v_124 = v_123;
  } else {
    v_124 = sub_56;
  };
  if (controller_c_closet) {
    sub_46 = false;
  } else {
    sub_46 = v_124;
  };
  if (controller_ck_12_1) {
    v_126 = sub_45;
    v_125 = sub_46;
  } else {
    v_126 = sub_46;
    v_125 = sub_45;
  };
  if (controller_cleaner) {
    v_127 = v_125;
  } else {
    v_127 = v_126;
  };
  if (controller_c_pc) {
    sub_44 = v_127;
  } else {
    sub_44 = false;
  };
  if (controller_ck_10_1) {
    v_167 = sub_2;
    v_166 = sub_44;
  } else {
    v_167 = sub_44;
    v_166 = sub_2;
  };
  if (controller_worker) {
    sub_1 = v_166;
  } else {
    sub_1 = v_167;
  };
  if (controller_ck_24_1) {
    v_100 = false;
  } else {
    v_100 = sub_13;
  };
  if (controller_light_switch) {
    v_101 = v_100;
  } else {
    v_101 = sub_12;
  };
  if (controller_c_light_1) {
    v_102 = v_101;
  } else {
    v_102 = sub_21;
  };
  if (controller_c_closet) {
    sub_66 = v_102;
  } else {
    sub_66 = false;
  };
  if (controller_change_shift) {
    v_95 = false;
    sub_71 = sub_37;
  } else {
    v_95 = sub_37;
    sub_71 = false;
  };
  if (controller_ck_1) {
    sub_70 = v_95;
  } else {
    sub_70 = sub_71;
  };
  if (controller_ck_26_1) {
    v_96 = sub_70;
  } else {
    v_96 = false;
  };
  if (controller_blind_switch) {
    v_97 = v_96;
  } else {
    v_97 = sub_70;
  };
  if (controller_c_blind_1) {
    sub_69 = v_97;
  } else {
    sub_69 = sub_70;
  };
  sub_73 = sub_36;
  sub_72 = sub_73;
  if (controller_ck_24_1) {
    v_98 = sub_72;
  } else {
    v_98 = sub_69;
  };
  if (controller_ck_1) {
    sub_75 = sub_42;
  } else {
    sub_75 = sub_43;
  };
  if (controller_ck_26_1) {
    v_92 = sub_75;
  } else {
    v_92 = sub_33;
  };
  if (controller_blind_switch) {
    v_93 = v_92;
  } else {
    v_93 = sub_75;
  };
  if (controller_c_blind_1) {
    v_94 = v_93;
  } else {
    v_94 = sub_75;
  };
  if (controller_ck_24_1) {
    sub_74 = v_94;
  } else {
    sub_74 = sub_72;
  };
  if (controller_light_switch) {
    v_99 = v_98;
  } else {
    v_99 = sub_74;
  };
  if (controller_c_light_1) {
    sub_68 = v_99;
  } else {
    sub_68 = sub_74;
  };
  if (controller_c_closet) {
    sub_67 = false;
  } else {
    sub_67 = sub_68;
  };
  if (controller_ck_12_1) {
    v_104 = sub_66;
    v_103 = sub_67;
  } else {
    v_104 = sub_67;
    v_103 = sub_66;
  };
  if (controller_cleaner) {
    v_105 = v_103;
  } else {
    v_105 = v_104;
  };
  if (controller_c_pc) {
    sub_65 = false;
  } else {
    sub_65 = v_105;
  };
  if (controller_c_closet) {
    sub_77 = sub_68;
  } else {
    sub_77 = false;
  };
  if (controller_change_shift) {
    v_83 = false;
    sub_81 = sub_59;
  } else {
    v_83 = sub_59;
    sub_81 = false;
  };
  if (controller_ck_1) {
    sub_80 = v_83;
  } else {
    sub_80 = sub_81;
  };
  if (controller_ck_26_1) {
    v_84 = sub_80;
  } else {
    v_84 = false;
  };
  if (controller_blind_switch) {
    v_85 = v_84;
  } else {
    v_85 = sub_80;
  };
  if (controller_c_blind_1) {
    sub_79 = v_85;
  } else {
    sub_79 = sub_80;
  };
  sub_83 = sub_58;
  sub_82 = sub_83;
  if (controller_ck_24_1) {
    v_86 = sub_82;
  } else {
    v_86 = sub_79;
  };
  if (controller_ck_1) {
    sub_85 = sub_63;
  } else {
    sub_85 = sub_64;
  };
  if (controller_ck_26_1) {
    v = sub_85;
  } else {
    v = sub_55;
  };
  if (controller_blind_switch) {
    v_81 = v;
  } else {
    v_81 = sub_85;
  };
  if (controller_c_blind_1) {
    v_82 = v_81;
  } else {
    v_82 = sub_85;
  };
  if (controller_ck_24_1) {
    sub_84 = v_82;
  } else {
    sub_84 = sub_82;
  };
  if (controller_light_switch) {
    v_87 = v_86;
  } else {
    v_87 = sub_84;
  };
  if (controller_c_light_1) {
    v_88 = v_87;
  } else {
    v_88 = sub_84;
  };
  if (controller_c_closet) {
    sub_78 = false;
  } else {
    sub_78 = v_88;
  };
  if (controller_ck_12_1) {
    v_90 = sub_77;
    v_89 = sub_78;
  } else {
    v_90 = sub_78;
    v_89 = sub_77;
  };
  if (controller_cleaner) {
    v_91 = v_89;
  } else {
    v_91 = v_90;
  };
  if (controller_c_pc) {
    sub_76 = v_91;
  } else {
    sub_76 = false;
  };
  if (controller_ck_10_1) {
    v_169 = sub_65;
    v_168 = sub_76;
  } else {
    v_169 = sub_76;
    v_168 = sub_65;
  };
  if (controller_worker) {
    v_170 = v_168;
  } else {
    v_170 = v_169;
  };
  if (p_controller_c_light_2) {
    sub_0 = v_170;
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
  int controller_ck_20_1, int controller_pnr_3, int controller_v_239,
  int controller_v_238, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_light_1, int controller_c_closet,
  int controller_c_air_2, int controller_c_air_1, int controller_c_window,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_blind_1_out* _out) {
  
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
  v_225 = !(controller_v_238);
  sub_10 = (v_225&&false);
  if (controller_v_239) {
    v_227 = false;
    sub_9 = sub_10;
  } else {
    v_227 = sub_10;
    sub_9 = false;
  };
  if (controller_c_air_2) {
    v_226 = false;
  } else {
    v_226 = sub_9;
  };
  sub_11 = (controller_v_239&&false);
  if (controller_c_air_2) {
    v_228 = sub_11;
  } else {
    v_228 = v_227;
  };
  if (controller_c_air_1) {
    sub_8 = v_226;
  } else {
    sub_8 = v_228;
  };
  if (controller_c_door) {
    v_229 = sub_8;
    sub_7 = false;
  } else {
    v_229 = false;
    sub_7 = sub_8;
  };
  if (controller_ck_16_1) {
    v_230 = v_229;
  } else {
    v_230 = sub_7;
  };
  if (controller_c_window) {
    sub_6 = v_230;
  } else {
    sub_6 = false;
  };
  sub_5 = sub_6;
  sub_4 = sub_5;
  if (controller_ck_24_1) {
    v_231 = false;
  } else {
    v_231 = sub_4;
  };
  if (controller_light_switch) {
    v_232 = v_231;
  } else {
    v_232 = sub_4;
  };
  if (controller_c_light_1) {
    v_233 = v_232;
  } else {
    v_233 = sub_4;
  };
  if (controller_c_closet) {
    sub_3 = v_233;
  } else {
    sub_3 = false;
  };
  sub_20 = (controller_v_238&&false);
  if (controller_v_239) {
    v_218 = false;
  } else {
    v_218 = sub_20;
  };
  if (controller_c_air_2) {
    v_219 = sub_11;
  } else {
    v_219 = v_218;
  };
  if (controller_c_air_1) {
    sub_19 = v_219;
  } else {
    sub_19 = sub_9;
  };
  if (controller_c_door) {
    v_220 = sub_19;
    sub_18 = false;
  } else {
    v_220 = false;
    sub_18 = sub_19;
  };
  if (controller_ck_16_1) {
    v_221 = v_220;
  } else {
    v_221 = sub_18;
  };
  if (controller_c_window) {
    sub_17 = v_221;
  } else {
    sub_17 = false;
  };
  if (controller_change_shift) {
    v_222 = false;
    sub_16 = sub_17;
  } else {
    v_222 = sub_17;
    sub_16 = false;
  };
  if (controller_ck_1) {
    sub_15 = v_222;
  } else {
    sub_15 = sub_16;
  };
  sub_14 = sub_15;
  sub_22 = sub_17;
  sub_21 = sub_22;
  if (controller_ck_24_1) {
    v_223 = sub_21;
  } else {
    v_223 = sub_14;
  };
  if (controller_light_switch) {
    v_224 = v_223;
  } else {
    v_224 = sub_21;
  };
  if (controller_c_light_1) {
    sub_13 = v_224;
  } else {
    sub_13 = sub_21;
  };
  if (controller_c_closet) {
    sub_12 = false;
  } else {
    sub_12 = sub_13;
  };
  if (controller_ck_12_1) {
    v_235 = sub_3;
    v_234 = sub_12;
  } else {
    v_235 = sub_12;
    v_234 = sub_3;
  };
  if (controller_cleaner) {
    v_236 = v_234;
  } else {
    v_236 = v_235;
  };
  if (controller_c_pc) {
    sub_2 = false;
  } else {
    sub_2 = v_236;
  };
  if (controller_c_closet) {
    sub_24 = sub_13;
  } else {
    sub_24 = false;
  };
  if (controller_v_239) {
    v_209 = sub_20;
  } else {
    v_209 = false;
  };
  if (controller_c_air_2) {
    v_210 = v_209;
  } else {
    v_210 = sub_20;
  };
  if (controller_v_239) {
    v_207 = sub_20;
  } else {
    v_207 = sub_10;
  };
  v_205 = !(controller_v_239);
  v_206 = (v_205&&false);
  if (controller_c_air_2) {
    v_208 = v_206;
  } else {
    v_208 = v_207;
  };
  if (controller_c_air_1) {
    sub_31 = v_208;
  } else {
    sub_31 = v_210;
  };
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (controller_change_shift) {
    v_211 = false;
    sub_28 = sub_29;
  } else {
    v_211 = sub_29;
    sub_28 = false;
  };
  if (controller_ck_1) {
    sub_27 = v_211;
  } else {
    sub_27 = sub_28;
  };
  sub_26 = sub_27;
  sub_33 = sub_29;
  sub_32 = sub_33;
  if (controller_ck_24_1) {
    v_212 = sub_32;
  } else {
    v_212 = sub_26;
  };
  if (controller_light_switch) {
    v_213 = v_212;
  } else {
    v_213 = sub_32;
  };
  if (controller_c_light_1) {
    v_214 = v_213;
  } else {
    v_214 = sub_32;
  };
  if (controller_c_closet) {
    sub_25 = false;
  } else {
    sub_25 = v_214;
  };
  if (controller_ck_12_1) {
    v_216 = sub_24;
    v_215 = sub_25;
  } else {
    v_216 = sub_25;
    v_215 = sub_24;
  };
  if (controller_cleaner) {
    v_217 = v_215;
  } else {
    v_217 = v_216;
  };
  if (controller_c_pc) {
    sub_23 = v_217;
  } else {
    sub_23 = false;
  };
  if (controller_ck_10_1) {
    v_238 = sub_2;
    v_237 = sub_23;
  } else {
    v_238 = sub_23;
    v_237 = sub_2;
  };
  if (controller_worker) {
    sub_1 = v_237;
  } else {
    sub_1 = v_238;
  };
  sub_42 = (controller_v_238||false);
  if (controller_v_239) {
    v_194 = false;
    sub_41 = sub_42;
  } else {
    v_194 = sub_42;
    sub_41 = false;
  };
  if (controller_c_air_2) {
    v_193 = false;
  } else {
    v_193 = sub_41;
  };
  v_192 = !(controller_v_239);
  sub_43 = (v_192||false);
  if (controller_c_air_2) {
    v_195 = sub_43;
  } else {
    v_195 = v_194;
  };
  if (controller_c_air_1) {
    sub_40 = v_193;
  } else {
    sub_40 = v_195;
  };
  if (controller_c_door) {
    v_196 = sub_40;
    sub_39 = false;
  } else {
    v_196 = false;
    sub_39 = sub_40;
  };
  if (controller_ck_16_1) {
    v_197 = v_196;
  } else {
    v_197 = sub_39;
  };
  if (controller_c_window) {
    sub_38 = v_197;
  } else {
    sub_38 = false;
  };
  sub_37 = sub_38;
  if (controller_ck_26_1) {
    v_198 = sub_5;
  } else {
    v_198 = sub_37;
  };
  if (controller_blind_switch) {
    sub_36 = v_198;
  } else {
    sub_36 = sub_37;
  };
  if (controller_ck_24_1) {
    v_199 = false;
  } else {
    v_199 = sub_36;
  };
  if (controller_light_switch) {
    v_200 = v_199;
  } else {
    v_200 = sub_36;
  };
  if (controller_c_light_1) {
    v_201 = v_200;
  } else {
    v_201 = sub_36;
  };
  if (controller_c_closet) {
    sub_35 = v_201;
  } else {
    sub_35 = false;
  };
  v_183 = !(controller_v_238);
  sub_52 = (v_183||false);
  if (controller_v_239) {
    v_184 = false;
  } else {
    v_184 = sub_52;
  };
  if (controller_c_air_2) {
    v_185 = sub_43;
  } else {
    v_185 = v_184;
  };
  if (controller_c_air_1) {
    sub_51 = v_185;
  } else {
    sub_51 = sub_41;
  };
  if (controller_c_door) {
    v_186 = sub_51;
    sub_50 = false;
  } else {
    v_186 = false;
    sub_50 = sub_51;
  };
  if (controller_ck_16_1) {
    v_187 = v_186;
  } else {
    v_187 = sub_50;
  };
  if (controller_c_window) {
    sub_49 = v_187;
  } else {
    sub_49 = false;
  };
  if (controller_change_shift) {
    v_188 = false;
    sub_48 = sub_49;
  } else {
    v_188 = sub_49;
    sub_48 = false;
  };
  if (controller_ck_1) {
    sub_47 = v_188;
  } else {
    sub_47 = sub_48;
  };
  if (controller_ck_26_1) {
    v_189 = sub_47;
  } else {
    v_189 = sub_15;
  };
  if (controller_blind_switch) {
    sub_46 = v_189;
  } else {
    sub_46 = sub_47;
  };
  sub_54 = sub_49;
  sub_53 = sub_54;
  if (controller_ck_24_1) {
    v_190 = sub_53;
  } else {
    v_190 = sub_46;
  };
  if (controller_light_switch) {
    v_191 = v_190;
  } else {
    v_191 = sub_53;
  };
  if (controller_c_light_1) {
    sub_45 = v_191;
  } else {
    sub_45 = sub_53;
  };
  if (controller_c_closet) {
    sub_44 = false;
  } else {
    sub_44 = sub_45;
  };
  if (controller_ck_12_1) {
    v_203 = sub_35;
    v_202 = sub_44;
  } else {
    v_203 = sub_44;
    v_202 = sub_35;
  };
  if (controller_cleaner) {
    v_204 = v_202;
  } else {
    v_204 = v_203;
  };
  if (controller_c_pc) {
    sub_34 = false;
  } else {
    sub_34 = v_204;
  };
  if (controller_c_closet) {
    sub_56 = sub_45;
  } else {
    sub_56 = false;
  };
  if (controller_v_239) {
    v_173 = sub_52;
  } else {
    v_173 = false;
  };
  if (controller_c_air_2) {
    v_174 = v_173;
  } else {
    v_174 = sub_52;
  };
  if (controller_v_239) {
    v_171 = sub_52;
  } else {
    v_171 = sub_42;
  };
  v = (controller_v_239||false);
  if (controller_c_air_2) {
    v_172 = v;
  } else {
    v_172 = v_171;
  };
  if (controller_c_air_1) {
    sub_63 = v_172;
  } else {
    sub_63 = v_174;
  };
  sub_62 = sub_63;
  sub_61 = sub_62;
  if (controller_change_shift) {
    v_175 = false;
    sub_60 = sub_61;
  } else {
    v_175 = sub_61;
    sub_60 = false;
  };
  if (controller_ck_1) {
    sub_59 = v_175;
  } else {
    sub_59 = sub_60;
  };
  if (controller_ck_26_1) {
    v_176 = sub_59;
  } else {
    v_176 = sub_27;
  };
  if (controller_blind_switch) {
    sub_58 = v_176;
  } else {
    sub_58 = sub_59;
  };
  sub_65 = sub_61;
  sub_64 = sub_65;
  if (controller_ck_24_1) {
    v_177 = sub_64;
  } else {
    v_177 = sub_58;
  };
  if (controller_light_switch) {
    v_178 = v_177;
  } else {
    v_178 = sub_64;
  };
  if (controller_c_light_1) {
    v_179 = v_178;
  } else {
    v_179 = sub_64;
  };
  if (controller_c_closet) {
    sub_57 = false;
  } else {
    sub_57 = v_179;
  };
  if (controller_ck_12_1) {
    v_181 = sub_56;
    v_180 = sub_57;
  } else {
    v_181 = sub_57;
    v_180 = sub_56;
  };
  if (controller_cleaner) {
    v_182 = v_180;
  } else {
    v_182 = v_181;
  };
  if (controller_c_pc) {
    sub_55 = v_182;
  } else {
    sub_55 = false;
  };
  if (controller_ck_10_1) {
    v_240 = sub_34;
    v_239 = sub_55;
  } else {
    v_240 = sub_55;
    v_239 = sub_34;
  };
  if (controller_worker) {
    v_241 = v_239;
  } else {
    v_241 = v_240;
  };
  if (p_controller_c_blind_1) {
    sub_0 = v_241;
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
  int controller_ck_20_1, int controller_pnr_3, int controller_v_239,
  int controller_v_238, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_1_out* _out) {
  
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
  v_283 = !(controller_v_238);
  sub_10 = (v_283&&false);
  if (controller_v_239) {
    v_285 = false;
    sub_9 = sub_10;
  } else {
    v_285 = sub_10;
    sub_9 = false;
  };
  if (controller_c_air_2) {
    v_284 = false;
  } else {
    v_284 = sub_9;
  };
  sub_11 = (controller_v_239&&false);
  if (controller_c_air_2) {
    v_286 = sub_11;
  } else {
    v_286 = v_285;
  };
  if (controller_c_air_1) {
    sub_8 = v_284;
  } else {
    sub_8 = v_286;
  };
  if (controller_c_door) {
    v_287 = sub_8;
    sub_7 = false;
  } else {
    v_287 = false;
    sub_7 = sub_8;
  };
  if (controller_ck_16_1) {
    v_288 = v_287;
  } else {
    v_288 = sub_7;
  };
  if (controller_c_window) {
    sub_6 = v_288;
  } else {
    sub_6 = false;
  };
  sub_5 = sub_6;
  sub_4 = sub_5;
  if (controller_c_closet) {
    sub_3 = sub_4;
  } else {
    sub_3 = false;
  };
  sub_19 = (controller_v_238&&false);
  if (controller_v_239) {
    v_279 = false;
  } else {
    v_279 = sub_19;
  };
  if (controller_c_air_2) {
    v_280 = sub_11;
  } else {
    v_280 = v_279;
  };
  if (controller_c_air_1) {
    sub_18 = v_280;
  } else {
    sub_18 = sub_9;
  };
  if (controller_c_door) {
    v_281 = sub_18;
    sub_17 = false;
  } else {
    v_281 = false;
    sub_17 = sub_18;
  };
  if (controller_ck_16_1) {
    v_282 = v_281;
  } else {
    v_282 = sub_17;
  };
  if (controller_c_window) {
    sub_16 = v_282;
  } else {
    sub_16 = false;
  };
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  if (controller_c_closet) {
    sub_12 = false;
  } else {
    sub_12 = sub_13;
  };
  if (controller_ck_12_1) {
    v_290 = sub_3;
    v_289 = sub_12;
  } else {
    v_290 = sub_12;
    v_289 = sub_3;
  };
  if (controller_cleaner) {
    v_291 = v_289;
  } else {
    v_291 = v_290;
  };
  if (controller_c_pc) {
    sub_2 = false;
  } else {
    sub_2 = v_291;
  };
  if (controller_c_closet) {
    sub_21 = sub_13;
  } else {
    sub_21 = false;
  };
  if (controller_v_239) {
    v_274 = sub_19;
  } else {
    v_274 = false;
  };
  if (controller_c_air_2) {
    v_275 = v_274;
  } else {
    v_275 = sub_19;
  };
  if (controller_v_239) {
    v_272 = sub_19;
  } else {
    v_272 = sub_10;
  };
  v_270 = !(controller_v_239);
  v_271 = (v_270&&false);
  if (controller_c_air_2) {
    v_273 = v_271;
  } else {
    v_273 = v_272;
  };
  if (controller_c_air_1) {
    sub_27 = v_273;
  } else {
    sub_27 = v_275;
  };
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  if (controller_c_closet) {
    sub_22 = false;
  } else {
    sub_22 = sub_23;
  };
  if (controller_ck_12_1) {
    v_277 = sub_21;
    v_276 = sub_22;
  } else {
    v_277 = sub_22;
    v_276 = sub_21;
  };
  if (controller_cleaner) {
    v_278 = v_276;
  } else {
    v_278 = v_277;
  };
  if (controller_c_pc) {
    sub_20 = v_278;
  } else {
    sub_20 = false;
  };
  if (controller_ck_10_1) {
    v_293 = sub_2;
    v_292 = sub_20;
  } else {
    v_293 = sub_20;
    v_292 = sub_2;
  };
  if (controller_worker) {
    sub_1 = v_292;
  } else {
    sub_1 = v_293;
  };
  sub_36 = (controller_v_238||false);
  if (controller_v_239) {
    v_261 = false;
    sub_35 = sub_36;
  } else {
    v_261 = sub_36;
    sub_35 = false;
  };
  if (controller_c_air_2) {
    v_260 = false;
  } else {
    v_260 = sub_35;
  };
  v_259 = !(controller_v_239);
  sub_37 = (v_259||false);
  if (controller_c_air_2) {
    v_262 = sub_37;
  } else {
    v_262 = v_261;
  };
  if (controller_c_air_1) {
    sub_34 = v_260;
  } else {
    sub_34 = v_262;
  };
  if (controller_c_door) {
    v_263 = sub_34;
    sub_33 = false;
  } else {
    v_263 = false;
    sub_33 = sub_34;
  };
  if (controller_ck_16_1) {
    v_264 = v_263;
  } else {
    v_264 = sub_33;
  };
  if (controller_c_window) {
    sub_32 = v_264;
  } else {
    sub_32 = false;
  };
  sub_31 = sub_32;
  sub_30 = sub_31;
  if (controller_ck_24_1) {
    v_265 = sub_4;
  } else {
    v_265 = sub_30;
  };
  if (controller_light_switch) {
    v_266 = v_265;
  } else {
    v_266 = sub_30;
  };
  if (controller_c_closet) {
    sub_29 = v_266;
  } else {
    sub_29 = false;
  };
  v_252 = !(controller_v_238);
  sub_46 = (v_252||false);
  if (controller_v_239) {
    v_253 = false;
  } else {
    v_253 = sub_46;
  };
  if (controller_c_air_2) {
    v_254 = sub_37;
  } else {
    v_254 = v_253;
  };
  if (controller_c_air_1) {
    sub_45 = v_254;
  } else {
    sub_45 = sub_35;
  };
  if (controller_c_door) {
    v_255 = sub_45;
    sub_44 = false;
  } else {
    v_255 = false;
    sub_44 = sub_45;
  };
  if (controller_ck_16_1) {
    v_256 = v_255;
  } else {
    v_256 = sub_44;
  };
  if (controller_c_window) {
    sub_43 = v_256;
  } else {
    sub_43 = false;
  };
  if (controller_change_shift) {
    v_257 = sub_16;
    sub_42 = sub_43;
  } else {
    v_257 = sub_43;
    sub_42 = sub_16;
  };
  if (controller_ck_1) {
    sub_41 = v_257;
  } else {
    sub_41 = sub_42;
  };
  sub_40 = sub_41;
  sub_48 = sub_43;
  sub_47 = sub_48;
  if (controller_ck_24_1) {
    v_258 = sub_47;
  } else {
    v_258 = sub_40;
  };
  if (controller_light_switch) {
    sub_39 = v_258;
  } else {
    sub_39 = sub_47;
  };
  if (controller_c_closet) {
    sub_38 = false;
  } else {
    sub_38 = sub_39;
  };
  if (controller_ck_12_1) {
    v_268 = sub_29;
    v_267 = sub_38;
  } else {
    v_268 = sub_38;
    v_267 = sub_29;
  };
  if (controller_cleaner) {
    v_269 = v_267;
  } else {
    v_269 = v_268;
  };
  if (controller_c_pc) {
    sub_28 = false;
  } else {
    sub_28 = v_269;
  };
  if (controller_c_closet) {
    sub_50 = sub_39;
  } else {
    sub_50 = false;
  };
  if (controller_v_239) {
    v_244 = sub_46;
  } else {
    v_244 = false;
  };
  if (controller_c_air_2) {
    v_245 = v_244;
  } else {
    v_245 = sub_46;
  };
  if (controller_v_239) {
    v_242 = sub_46;
  } else {
    v_242 = sub_36;
  };
  v = (controller_v_239||false);
  if (controller_c_air_2) {
    v_243 = v;
  } else {
    v_243 = v_242;
  };
  if (controller_c_air_1) {
    sub_57 = v_243;
  } else {
    sub_57 = v_245;
  };
  sub_56 = sub_57;
  sub_55 = sub_56;
  if (controller_change_shift) {
    v_246 = sub_25;
    sub_54 = sub_55;
  } else {
    v_246 = sub_55;
    sub_54 = sub_25;
  };
  if (controller_ck_1) {
    sub_53 = v_246;
  } else {
    sub_53 = sub_54;
  };
  sub_52 = sub_53;
  sub_59 = sub_55;
  sub_58 = sub_59;
  if (controller_ck_24_1) {
    v_247 = sub_58;
  } else {
    v_247 = sub_52;
  };
  if (controller_light_switch) {
    v_248 = v_247;
  } else {
    v_248 = sub_58;
  };
  if (controller_c_closet) {
    sub_51 = false;
  } else {
    sub_51 = v_248;
  };
  if (controller_ck_12_1) {
    v_250 = sub_50;
    v_249 = sub_51;
  } else {
    v_250 = sub_51;
    v_249 = sub_50;
  };
  if (controller_cleaner) {
    v_251 = v_249;
  } else {
    v_251 = v_250;
  };
  if (controller_c_pc) {
    sub_49 = v_251;
  } else {
    sub_49 = false;
  };
  if (controller_ck_10_1) {
    v_295 = sub_28;
    v_294 = sub_49;
  } else {
    v_295 = sub_49;
    v_294 = sub_28;
  };
  if (controller_worker) {
    v_296 = v_294;
  } else {
    v_296 = v_295;
  };
  if (p_controller_c_light_1) {
    sub_0 = v_296;
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
  int controller_ck_20_1, int controller_pnr_3, int controller_v_239,
  int controller_v_238, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_closet_out* _out) {
  
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
  sub_9 = (controller_v_238||false);
  if (controller_v_239) {
    v_318 = false;
    sub_8 = sub_9;
  } else {
    v_318 = sub_9;
    sub_8 = false;
  };
  if (controller_c_air_2) {
    v_317 = false;
  } else {
    v_317 = sub_8;
  };
  v_316 = !(controller_v_239);
  sub_10 = (v_316||false);
  if (controller_c_air_2) {
    v_319 = sub_10;
  } else {
    v_319 = v_318;
  };
  if (controller_c_air_1) {
    sub_7 = v_317;
  } else {
    sub_7 = v_319;
  };
  if (controller_c_door) {
    v_320 = sub_7;
    sub_6 = false;
  } else {
    v_320 = false;
    sub_6 = sub_7;
  };
  if (controller_ck_16_1) {
    v_321 = v_320;
  } else {
    v_321 = sub_6;
  };
  if (controller_c_window) {
    sub_5 = v_321;
  } else {
    sub_5 = false;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  v_311 = (controller_v_239&&false);
  sub_17 = (controller_v_238&&false);
  if (controller_v_239) {
    v_312 = false;
  } else {
    v_312 = sub_17;
  };
  if (controller_c_air_2) {
    v_313 = v_311;
  } else {
    v_313 = v_312;
  };
  v_310 = !(controller_v_238);
  sub_19 = (v_310&&false);
  if (controller_v_239) {
    sub_18 = sub_19;
  } else {
    sub_18 = false;
  };
  if (controller_c_air_1) {
    sub_16 = v_313;
  } else {
    sub_16 = sub_18;
  };
  if (controller_c_door) {
    v_314 = sub_16;
    sub_15 = false;
  } else {
    v_314 = false;
    sub_15 = sub_16;
  };
  if (controller_ck_16_1) {
    v_315 = v_314;
  } else {
    v_315 = sub_15;
  };
  if (controller_c_window) {
    sub_14 = v_315;
  } else {
    sub_14 = false;
  };
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (controller_ck_12_1) {
    v_323 = sub_2;
    v_322 = sub_11;
  } else {
    v_323 = sub_11;
    v_322 = sub_2;
  };
  if (controller_cleaner) {
    v_324 = v_322;
  } else {
    v_324 = v_323;
  };
  if (controller_c_pc) {
    sub_1 = false;
  } else {
    sub_1 = v_324;
  };
  v_302 = !(controller_v_238);
  sub_27 = (v_302||false);
  if (controller_v_239) {
    v_303 = false;
  } else {
    v_303 = sub_27;
  };
  if (controller_c_air_2) {
    v_304 = sub_10;
  } else {
    v_304 = v_303;
  };
  if (controller_c_air_1) {
    sub_26 = v_304;
  } else {
    sub_26 = sub_8;
  };
  if (controller_c_door) {
    v_305 = sub_26;
    sub_25 = false;
  } else {
    v_305 = false;
    sub_25 = sub_26;
  };
  if (controller_ck_16_1) {
    v_306 = v_305;
  } else {
    v_306 = sub_25;
  };
  if (controller_c_window) {
    sub_24 = v_306;
  } else {
    sub_24 = false;
  };
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (controller_v_239) {
    v_300 = sub_17;
  } else {
    v_300 = false;
  };
  if (controller_c_air_2) {
    v_301 = v_300;
  } else {
    v_301 = sub_17;
  };
  if (controller_v_239) {
    v_298 = sub_17;
  } else {
    v_298 = sub_19;
  };
  v = !(controller_v_239);
  v_297 = (v&&false);
  if (controller_c_air_2) {
    v_299 = v_297;
  } else {
    v_299 = v_298;
  };
  if (controller_c_air_1) {
    sub_33 = v_299;
  } else {
    sub_33 = v_301;
  };
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  if (controller_ck_12_1) {
    v_308 = sub_21;
    v_307 = sub_28;
  } else {
    v_308 = sub_28;
    v_307 = sub_21;
  };
  if (controller_cleaner) {
    v_309 = v_307;
  } else {
    v_309 = v_308;
  };
  if (controller_c_pc) {
    sub_20 = v_309;
  } else {
    sub_20 = false;
  };
  if (controller_ck_10_1) {
    v_326 = sub_1;
    v_325 = sub_20;
  } else {
    v_326 = sub_20;
    v_325 = sub_1;
  };
  if (controller_worker) {
    sub_0 = v_325;
  } else {
    sub_0 = v_326;
  };
  _out->controller_c_closet = sub_0;;
}

void Controller_controller__controller_controller_controller_c_air_2_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_light_switch, int controller_blind_switch,
  int controller_ck_1, int controller_pnr_9, int controller_ck_10_1,
  int controller_pnr_8, int controller_ck_12_1, int controller_pnr_7,
  int controller_ck_14_1, int controller_pnr_6, int controller_ck_16_1,
  int controller_pnr_5, int controller_ck_18_1, int controller_pnr_4,
  int controller_ck_20_1, int controller_pnr_3, int controller_v_239,
  int controller_v_238, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_air_1, int controller_c_window,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_2_out* _out) {
  
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
  v_350 = !(controller_v_238);
  sub_10 = (v_350&&false);
  if (controller_v_239) {
    sub_9 = sub_10;
  } else {
    sub_9 = false;
  };
  sub_11 = !(controller_v_238);
  if (controller_v_239) {
    v_351 = false;
  } else {
    v_351 = sub_11;
  };
  if (controller_c_air_1) {
    sub_8 = sub_9;
  } else {
    sub_8 = v_351;
  };
  if (controller_c_door) {
    v_352 = sub_8;
    sub_7 = false;
  } else {
    v_352 = false;
    sub_7 = sub_8;
  };
  if (controller_ck_16_1) {
    v_353 = v_352;
  } else {
    v_353 = sub_7;
  };
  if (controller_c_window) {
    sub_6 = v_353;
  } else {
    sub_6 = false;
  };
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_18 = controller_v_238;
  if (controller_v_239) {
    v_347 = false;
  } else {
    v_347 = sub_18;
  };
  if (controller_c_air_1) {
    sub_17 = v_347;
  } else {
    sub_17 = sub_9;
  };
  if (controller_c_door) {
    v_348 = sub_17;
    sub_16 = false;
  } else {
    v_348 = false;
    sub_16 = sub_17;
  };
  if (controller_ck_16_1) {
    v_349 = v_348;
  } else {
    v_349 = sub_16;
  };
  if (controller_c_window) {
    sub_15 = v_349;
  } else {
    sub_15 = false;
  };
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  if (controller_ck_12_1) {
    v_355 = sub_3;
    v_354 = sub_12;
  } else {
    v_355 = sub_12;
    v_354 = sub_3;
  };
  if (controller_cleaner) {
    v_356 = v_354;
  } else {
    v_356 = v_355;
  };
  if (controller_c_pc) {
    sub_2 = false;
  } else {
    sub_2 = v_356;
  };
  if (controller_v_239) {
    v_343 = sub_18;
  } else {
    v_343 = sub_10;
  };
  sub_26 = (controller_v_238&&false);
  if (controller_c_air_1) {
    sub_25 = v_343;
  } else {
    sub_25 = sub_26;
  };
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  if (controller_ck_12_1) {
    v_345 = sub_12;
    v_344 = sub_20;
  } else {
    v_345 = sub_20;
    v_344 = sub_12;
  };
  if (controller_cleaner) {
    v_346 = v_344;
  } else {
    v_346 = v_345;
  };
  if (controller_c_pc) {
    sub_19 = v_346;
  } else {
    sub_19 = false;
  };
  if (controller_ck_10_1) {
    v_358 = sub_2;
    v_357 = sub_19;
  } else {
    v_358 = sub_19;
    v_357 = sub_2;
  };
  if (controller_worker) {
    sub_1 = v_357;
  } else {
    sub_1 = v_358;
  };
  v_337 = !(controller_v_239);
  sub_34 = (v_337||false);
  if (controller_c_air_1) {
    sub_33 = sub_9;
  } else {
    sub_33 = sub_34;
  };
  if (controller_c_door) {
    v_338 = sub_33;
    sub_32 = false;
  } else {
    v_338 = false;
    sub_32 = sub_33;
  };
  if (controller_ck_16_1) {
    v_339 = v_338;
  } else {
    v_339 = sub_32;
  };
  if (controller_c_window) {
    sub_31 = v_339;
  } else {
    sub_31 = false;
  };
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  v_333 = (controller_v_238||false);
  if (controller_v_239) {
    v_334 = v_333;
  } else {
    v_334 = false;
  };
  if (controller_c_air_1) {
    sub_40 = sub_34;
  } else {
    sub_40 = v_334;
  };
  if (controller_c_door) {
    v_335 = sub_40;
    sub_39 = false;
  } else {
    v_335 = false;
    sub_39 = sub_40;
  };
  if (controller_ck_16_1) {
    v_336 = v_335;
  } else {
    v_336 = sub_39;
  };
  if (controller_c_window) {
    sub_38 = v_336;
  } else {
    sub_38 = false;
  };
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  if (controller_ck_12_1) {
    v_341 = sub_28;
    v_340 = sub_35;
  } else {
    v_341 = sub_35;
    v_340 = sub_28;
  };
  if (controller_cleaner) {
    v_342 = v_340;
  } else {
    v_342 = v_341;
  };
  if (controller_c_pc) {
    sub_27 = false;
  } else {
    sub_27 = v_342;
  };
  v_327 = !(controller_v_238);
  v_328 = (v_327||false);
  if (controller_v_239) {
    v_329 = v_328;
  } else {
    v_329 = sub_26;
  };
  v = (controller_v_239||sub_10);
  if (controller_c_air_1) {
    sub_47 = v;
  } else {
    sub_47 = v_329;
  };
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  if (controller_ck_12_1) {
    v_331 = sub_35;
    v_330 = sub_42;
  } else {
    v_331 = sub_42;
    v_330 = sub_35;
  };
  if (controller_cleaner) {
    v_332 = v_330;
  } else {
    v_332 = v_331;
  };
  if (controller_c_pc) {
    sub_41 = v_332;
  } else {
    sub_41 = false;
  };
  if (controller_ck_10_1) {
    v_360 = sub_27;
    v_359 = sub_41;
  } else {
    v_360 = sub_41;
    v_359 = sub_27;
  };
  if (controller_worker) {
    v_361 = v_359;
  } else {
    v_361 = v_360;
  };
  if (p_controller_c_air_2) {
    sub_0 = v_361;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_air_2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_air_1_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_light_switch, int controller_blind_switch,
  int controller_ck_1, int controller_pnr_9, int controller_ck_10_1,
  int controller_pnr_8, int controller_ck_12_1, int controller_pnr_7,
  int controller_ck_14_1, int controller_pnr_6, int controller_ck_16_1,
  int controller_pnr_5, int controller_ck_18_1, int controller_pnr_4,
  int controller_ck_20_1, int controller_pnr_3, int controller_v_239,
  int controller_v_238, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_1_out* _out) {
  
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
  v_370 = (controller_v_238||false);
  sub_7 = (controller_v_239&&v_370);
  if (controller_c_door) {
    v_371 = sub_7;
    sub_6 = false;
  } else {
    v_371 = false;
    sub_6 = sub_7;
  };
  if (controller_ck_16_1) {
    v_372 = v_371;
  } else {
    v_372 = sub_6;
  };
  if (controller_c_window) {
    sub_5 = v_372;
  } else {
    sub_5 = false;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  v_366 = !(controller_v_238);
  v_367 = (v_366&&false);
  v_365 = !(controller_v_239);
  sub_13 = (v_365||v_367);
  if (controller_c_door) {
    v_368 = sub_13;
    sub_12 = false;
  } else {
    v_368 = false;
    sub_12 = sub_13;
  };
  if (controller_ck_16_1) {
    v_369 = v_368;
  } else {
    v_369 = sub_12;
  };
  if (controller_c_window) {
    sub_11 = v_369;
  } else {
    sub_11 = false;
  };
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  if (controller_ck_12_1) {
    v_374 = sub_2;
    v_373 = sub_8;
  } else {
    v_374 = sub_8;
    v_373 = sub_2;
  };
  if (controller_cleaner) {
    v_375 = v_373;
  } else {
    v_375 = v_374;
  };
  if (controller_c_pc) {
    sub_1 = false;
  } else {
    sub_1 = v_375;
  };
  sub_21 = controller_v_238;
  sub_22 = p_controller_c_air_1;
  v = (controller_v_238||sub_22);
  if (controller_v_239) {
    sub_20 = v;
  } else {
    sub_20 = sub_21;
  };
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  if (controller_ck_12_1) {
    v_363 = sub_8;
    v_362 = sub_15;
  } else {
    v_363 = sub_15;
    v_362 = sub_8;
  };
  if (controller_cleaner) {
    v_364 = v_362;
  } else {
    v_364 = v_363;
  };
  if (controller_c_pc) {
    sub_14 = v_364;
  } else {
    sub_14 = false;
  };
  if (controller_ck_10_1) {
    v_377 = sub_1;
    v_376 = sub_14;
  } else {
    v_377 = sub_14;
    v_376 = sub_1;
  };
  if (controller_worker) {
    sub_0 = v_376;
  } else {
    sub_0 = v_377;
  };
  _out->controller_c_air_1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_window_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_light_switch, int controller_blind_switch,
  int controller_ck_1, int controller_pnr_9, int controller_ck_10_1,
  int controller_pnr_8, int controller_ck_12_1, int controller_pnr_7,
  int controller_ck_14_1, int controller_pnr_6, int controller_ck_16_1,
  int controller_pnr_5, int controller_ck_18_1, int controller_pnr_4,
  int controller_ck_20_1, int controller_pnr_3, int controller_v_239,
  int controller_v_238, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_window_out* _out) {
  
  int v_384;
  int v_383;
  int v_382;
  int v_381;
  int v_380;
  int v_379;
  int v_378;
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
  v_381 = (controller_v_238||false);
  v_380 = !(controller_v_239);
  sub_7 = (v_380||v_381);
  if (controller_c_door) {
    v_382 = sub_7;
    sub_6 = false;
  } else {
    v_382 = false;
    sub_6 = sub_7;
  };
  if (controller_ck_16_1) {
    sub_5 = v_382;
  } else {
    sub_5 = sub_6;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  if (controller_c_pc) {
    sub_1 = false;
  } else {
    sub_1 = sub_2;
  };
  sub_13 = p_controller_c_window;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  if (controller_ck_12_1) {
    v_378 = sub_2;
    v = sub_9;
  } else {
    v_378 = sub_9;
    v = sub_2;
  };
  if (controller_cleaner) {
    v_379 = v;
  } else {
    v_379 = v_378;
  };
  if (controller_c_pc) {
    sub_8 = v_379;
  } else {
    sub_8 = false;
  };
  if (controller_ck_10_1) {
    v_384 = sub_1;
    v_383 = sub_8;
  } else {
    v_384 = sub_8;
    v_383 = sub_1;
  };
  if (controller_worker) {
    sub_0 = v_383;
  } else {
    sub_0 = v_384;
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
  int controller_ck_20_1, int controller_pnr_3, int controller_v_239,
  int controller_v_238, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door, int controller_c_door,
  Controller_controller__controller_controller_controller_c_pc_out* _out) {
  
  int v_393;
  int v_392;
  int v_391;
  int v_390;
  int v_389;
  int v_388;
  int v_387;
  int v_386;
  int v_385;
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
  v_389 = !(controller_v_238);
  v_390 = (v_389&&false);
  sub_7 = (controller_v_239&&v_390);
  if (controller_c_door) {
    v_391 = sub_7;
    sub_6 = false;
  } else {
    v_391 = false;
    sub_6 = sub_7;
  };
  if (controller_ck_16_1) {
    sub_5 = v_391;
  } else {
    sub_5 = sub_6;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_1 = sub_2;
  v_385 = (controller_v_238||false);
  v = !(controller_v_239);
  sub_14 = (v||v_385);
  if (controller_c_door) {
    v_386 = sub_14;
    sub_13 = false;
  } else {
    v_386 = false;
    sub_13 = sub_14;
  };
  if (controller_ck_16_1) {
    sub_12 = v_386;
  } else {
    sub_12 = sub_13;
  };
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_18 = true;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  if (controller_ck_12_1) {
    v_388 = sub_9;
    v_387 = sub_15;
  } else {
    v_388 = sub_15;
    v_387 = sub_9;
  };
  if (controller_cleaner) {
    sub_8 = v_387;
  } else {
    sub_8 = v_388;
  };
  if (controller_ck_10_1) {
    v_393 = sub_1;
    v_392 = sub_8;
  } else {
    v_393 = sub_8;
    v_392 = sub_1;
  };
  if (controller_worker) {
    sub_0 = v_392;
  } else {
    sub_0 = v_393;
  };
  _out->controller_c_pc = sub_0;;
}

void Controller_controller__controller_controller_controller_c_door_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_light_switch, int controller_blind_switch,
  int controller_ck_1, int controller_pnr_9, int controller_ck_10_1,
  int controller_pnr_8, int controller_ck_12_1, int controller_pnr_7,
  int controller_ck_14_1, int controller_pnr_6, int controller_ck_16_1,
  int controller_pnr_5, int controller_ck_18_1, int controller_pnr_4,
  int controller_ck_20_1, int controller_pnr_3, int controller_v_239,
  int controller_v_238, int controller_pnr_2, int controller_ck_24_1,
  int controller_pnr_1, int controller_ck_26_1, int controller_pnr,
  int p_controller_c_blind_2, int p_controller_c_light_2,
  int p_controller_c_blind_1, int p_controller_c_light_1,
  int p_controller_c_closet, int p_controller_c_air_2,
  int p_controller_c_air_1, int p_controller_c_window, int p_controller_c_pc,
  int p_controller_c_door,
  Controller_controller__controller_controller_controller_c_door_out* _out) {
  
  int v_401;
  int v_400;
  int v_399;
  int v_398;
  int v_397;
  int v_396;
  int v_395;
  int v_394;
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
  v_398 = (controller_v_238||false);
  v_397 = !(controller_v_239);
  v_399 = (v_397||v_398);
  v_395 = !(controller_v_238);
  v_396 = (v_395&&false);
  sub_6 = (controller_v_239&&v_396);
  if (controller_ck_16_1) {
    sub_5 = v_399;
  } else {
    sub_5 = sub_6;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_1 = sub_2;
  sub_11 = p_controller_c_door;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  if (controller_ck_12_1) {
    v_394 = sub_2;
    v = sub_8;
  } else {
    v_394 = sub_8;
    v = sub_2;
  };
  if (controller_cleaner) {
    sub_7 = v;
  } else {
    sub_7 = v_394;
  };
  if (controller_ck_10_1) {
    v_401 = sub_1;
    v_400 = sub_7;
  } else {
    v_401 = sub_7;
    v_400 = sub_1;
  };
  if (controller_worker) {
    sub_0 = v_400;
  } else {
    sub_0 = v_401;
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
                                                       int controller_v_239,
                                                       int controller_v_238,
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
  controller_pnr_3, controller_v_239, controller_v_238, controller_pnr_2,
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
                                                                    controller_v_239,
                                                                    controller_v_238,
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
  controller_pnr_3, controller_v_239, controller_v_238, controller_pnr_2,
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
  controller_pnr_3, controller_v_239, controller_v_238, controller_pnr_2,
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
  controller_pnr_3, controller_v_239, controller_v_238, controller_pnr_2,
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
  controller_pnr_3, controller_v_239, controller_v_238, controller_pnr_2,
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
  controller_pnr_3, controller_v_239, controller_v_238, controller_pnr_2,
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
  controller_pnr_3, controller_v_239, controller_v_238, controller_pnr_2,
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
  controller_pnr_3, controller_v_239, controller_v_238, controller_pnr_2,
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
  controller_pnr_3, controller_v_239, controller_v_238, controller_pnr_2,
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

