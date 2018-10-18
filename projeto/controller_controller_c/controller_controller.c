/* --- Generated the 17/10/2018 at 21:6 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. oct. 12 21:14:6 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c controller_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "controller_controller.h"

void Controller_controller__controller_controller_controller_c_blind_2_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered,
  int controller_door_failed_recovered,
  int controller_closet_failed_recovered, int controller_pc_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_9, int controller_ck_10_1, int controller_pnr_8,
  int controller_ck_12_1, int controller_pnr_7, int controller_ck_14_1,
  int controller_pnr_6, int controller_ck_16_1, int controller_pnr_5,
  int controller_ck_18_1, int controller_pnr_4, int controller_ck_20_1,
  int controller_pnr_3, int controller_v_239, int controller_v_238,
  int controller_pnr_2, int controller_ck_24_1, int controller_pnr_1,
  int controller_ck_26_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_light_2, int p_controller_c_blind_1,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_light_2, int controller_c_blind_1,
  int controller_c_light_1, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_blind_2_out* _out) {
  
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
  sub_18 = false;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  if (controller_c_air_1) {
    sub_11 = false;
  } else {
    sub_11 = sub_12;
  };
  if (controller_v_238) {
    sub_19 = sub_11;
  } else {
    sub_19 = false;
  };
  if (controller_c_air_2) {
    sub_10 = sub_11;
  } else {
    sub_10 = sub_19;
  };
  if (controller_c_air_1) {
    sub_20 = sub_12;
  } else {
    sub_20 = false;
  };
  if (controller_v_238) {
    v_55 = sub_20;
  } else {
    v_55 = false;
  };
  if (controller_c_air_2) {
    v_56 = false;
  } else {
    v_56 = v_55;
  };
  if (controller_v_239) {
    sub_9 = v_56;
  } else {
    sub_9 = sub_10;
  };
  if (controller_c_door) {
    v_57 = sub_9;
    sub_8 = false;
  } else {
    v_57 = false;
    sub_8 = sub_9;
  };
  if (controller_ck_16_1) {
    v_58 = v_57;
  } else {
    v_58 = sub_8;
  };
  if (controller_c_window) {
    sub_7 = v_58;
  } else {
    sub_7 = false;
  };
  sub_6 = sub_7;
  if (controller_ck_26_1) {
    v_59 = false;
  } else {
    v_59 = sub_6;
  };
  sub_34 = true;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  if (controller_c_air_1) {
    sub_27 = false;
  } else {
    sub_27 = sub_28;
  };
  if (controller_v_238) {
    sub_35 = sub_27;
  } else {
    sub_35 = false;
  };
  if (controller_c_air_2) {
    sub_26 = sub_27;
  } else {
    sub_26 = sub_35;
  };
  if (controller_c_air_1) {
    sub_36 = sub_28;
  } else {
    sub_36 = false;
  };
  if (controller_v_238) {
    v_51 = sub_36;
  } else {
    v_51 = false;
  };
  if (controller_c_air_2) {
    v_52 = false;
  } else {
    v_52 = v_51;
  };
  if (controller_v_239) {
    sub_25 = v_52;
  } else {
    sub_25 = sub_26;
  };
  if (controller_c_door) {
    v_53 = sub_25;
    sub_24 = false;
  } else {
    v_53 = false;
    sub_24 = sub_25;
  };
  if (controller_ck_16_1) {
    v_54 = v_53;
  } else {
    v_54 = sub_24;
  };
  if (controller_c_window) {
    sub_23 = v_54;
  } else {
    sub_23 = false;
  };
  sub_22 = sub_23;
  if (controller_ck_26_1) {
    sub_21 = sub_22;
  } else {
    sub_21 = sub_6;
  };
  if (controller_blind_switch) {
    v_60 = v_59;
  } else {
    v_60 = sub_21;
  };
  sub_37 = sub_21;
  if (controller_c_blind_1) {
    sub_5 = v_60;
  } else {
    sub_5 = sub_37;
  };
  if (controller_ck_24_1) {
    sub_4 = false;
    v_50 = sub_5;
  } else {
    sub_4 = sub_5;
    v_50 = false;
  };
  if (controller_c_light_2) {
    sub_38 = v_50;
  } else {
    sub_38 = sub_4;
  };
  if (controller_light_switch) {
    v_61 = sub_4;
  } else {
    v_61 = sub_38;
  };
  if (controller_c_light_1) {
    v_62 = v_61;
  } else {
    v_62 = sub_38;
  };
  if (controller_c_closet) {
    sub_3 = v_62;
  } else {
    sub_3 = false;
  };
  if (controller_v_238) {
    v_43 = false;
  } else {
    v_43 = sub_20;
  };
  if (controller_c_air_2) {
    sub_48 = sub_20;
  } else {
    sub_48 = v_43;
  };
  if (controller_v_239) {
    sub_47 = sub_19;
  } else {
    sub_47 = sub_48;
  };
  if (controller_c_door) {
    v_44 = sub_47;
    sub_46 = false;
  } else {
    v_44 = false;
    sub_46 = sub_47;
  };
  if (controller_ck_16_1) {
    v_45 = v_44;
  } else {
    v_45 = sub_46;
  };
  if (controller_c_window) {
    sub_45 = v_45;
  } else {
    sub_45 = false;
  };
  if (controller_change_shift) {
    v_46 = false;
    sub_44 = sub_45;
  } else {
    v_46 = sub_45;
    sub_44 = false;
  };
  if (controller_ck_1) {
    sub_43 = v_46;
  } else {
    sub_43 = sub_44;
  };
  if (controller_ck_26_1) {
    v_47 = sub_43;
  } else {
    v_47 = false;
  };
  if (controller_v_238) {
    v_39 = false;
  } else {
    v_39 = sub_36;
  };
  if (controller_c_air_2) {
    sub_55 = sub_36;
  } else {
    sub_55 = v_39;
  };
  if (controller_v_239) {
    sub_54 = sub_35;
  } else {
    sub_54 = sub_55;
  };
  if (controller_c_door) {
    v_40 = sub_54;
    sub_53 = false;
  } else {
    v_40 = false;
    sub_53 = sub_54;
  };
  if (controller_ck_16_1) {
    v_41 = v_40;
  } else {
    v_41 = sub_53;
  };
  if (controller_c_window) {
    sub_52 = v_41;
  } else {
    sub_52 = false;
  };
  if (controller_change_shift) {
    v_42 = false;
    sub_51 = sub_52;
  } else {
    v_42 = sub_52;
    sub_51 = false;
  };
  if (controller_ck_1) {
    sub_50 = v_42;
  } else {
    sub_50 = sub_51;
  };
  if (controller_ck_26_1) {
    sub_49 = sub_43;
  } else {
    sub_49 = sub_50;
  };
  if (controller_blind_switch) {
    v_48 = v_47;
  } else {
    v_48 = sub_49;
  };
  sub_56 = sub_49;
  if (controller_c_blind_1) {
    sub_42 = v_48;
  } else {
    sub_42 = sub_56;
  };
  sub_59 = sub_45;
  sub_58 = sub_59;
  sub_57 = sub_58;
  if (controller_ck_24_1) {
    sub_41 = sub_57;
    v_38 = sub_42;
  } else {
    sub_41 = sub_42;
    v_38 = sub_57;
  };
  if (controller_c_light_2) {
    sub_60 = v_38;
  } else {
    sub_60 = sub_41;
  };
  if (controller_light_switch) {
    v_49 = sub_41;
  } else {
    v_49 = sub_60;
  };
  if (controller_c_light_1) {
    sub_40 = v_49;
  } else {
    sub_40 = sub_60;
  };
  if (controller_c_closet) {
    sub_39 = false;
  } else {
    sub_39 = sub_40;
  };
  if (controller_ck_12_1) {
    v_64 = sub_3;
    v_63 = sub_39;
  } else {
    v_64 = sub_39;
    v_63 = sub_3;
  };
  if (controller_cleaner) {
    v_65 = v_63;
  } else {
    v_65 = v_64;
  };
  if (controller_c_pc) {
    sub_2 = false;
  } else {
    sub_2 = v_65;
  };
  if (controller_c_closet) {
    sub_62 = sub_40;
  } else {
    sub_62 = false;
  };
  if (controller_v_238) {
    v_26 = sub_20;
  } else {
    v_26 = sub_11;
  };
  if (controller_c_air_2) {
    sub_71 = false;
  } else {
    sub_71 = v_26;
  };
  sub_72 = sub_12;
  if (controller_v_238) {
    v_28 = false;
    v_27 = sub_20;
  } else {
    v_28 = sub_72;
    v_27 = sub_72;
  };
  if (controller_c_air_2) {
    v_29 = v_27;
  } else {
    v_29 = v_28;
  };
  if (controller_v_239) {
    sub_70 = v_29;
  } else {
    sub_70 = sub_71;
  };
  sub_69 = sub_70;
  sub_68 = sub_69;
  if (controller_change_shift) {
    v_30 = false;
    sub_67 = sub_68;
  } else {
    v_30 = sub_68;
    sub_67 = false;
  };
  if (controller_ck_1) {
    sub_66 = v_30;
  } else {
    sub_66 = sub_67;
  };
  if (controller_ck_26_1) {
    v_31 = sub_66;
  } else {
    v_31 = false;
  };
  if (controller_v_238) {
    v_21 = sub_36;
  } else {
    v_21 = sub_27;
  };
  if (controller_c_air_2) {
    sub_79 = false;
  } else {
    sub_79 = v_21;
  };
  sub_80 = sub_28;
  if (controller_v_238) {
    v_23 = false;
    v_22 = sub_36;
  } else {
    v_23 = sub_80;
    v_22 = sub_80;
  };
  if (controller_c_air_2) {
    v_24 = v_22;
  } else {
    v_24 = v_23;
  };
  if (controller_v_239) {
    sub_78 = v_24;
  } else {
    sub_78 = sub_79;
  };
  sub_77 = sub_78;
  sub_76 = sub_77;
  if (controller_change_shift) {
    v_25 = false;
    sub_75 = sub_76;
  } else {
    v_25 = sub_76;
    sub_75 = false;
  };
  if (controller_ck_1) {
    sub_74 = v_25;
  } else {
    sub_74 = sub_75;
  };
  if (controller_ck_26_1) {
    sub_73 = sub_66;
  } else {
    sub_73 = sub_74;
  };
  if (controller_blind_switch) {
    v_32 = v_31;
  } else {
    v_32 = sub_73;
  };
  sub_81 = sub_73;
  if (controller_c_blind_1) {
    sub_65 = v_32;
  } else {
    sub_65 = sub_81;
  };
  sub_84 = sub_68;
  sub_83 = sub_84;
  sub_82 = sub_83;
  if (controller_ck_24_1) {
    sub_64 = sub_82;
    v_20 = sub_65;
  } else {
    sub_64 = sub_65;
    v_20 = sub_82;
  };
  if (controller_c_light_2) {
    sub_85 = v_20;
  } else {
    sub_85 = sub_64;
  };
  if (controller_light_switch) {
    v_33 = sub_64;
  } else {
    v_33 = sub_85;
  };
  if (controller_c_light_1) {
    v_34 = v_33;
  } else {
    v_34 = sub_85;
  };
  if (controller_c_closet) {
    sub_63 = false;
  } else {
    sub_63 = v_34;
  };
  if (controller_ck_12_1) {
    v_36 = sub_62;
    v_35 = sub_63;
  } else {
    v_36 = sub_63;
    v_35 = sub_62;
  };
  if (controller_cleaner) {
    v_37 = v_35;
  } else {
    v_37 = v_36;
  };
  if (controller_c_pc) {
    sub_61 = v_37;
  } else {
    sub_61 = false;
  };
  if (controller_ck_10_1) {
    v_67 = sub_2;
    v_66 = sub_61;
  } else {
    v_67 = sub_61;
    v_66 = sub_2;
  };
  if (controller_worker) {
    sub_1 = v_66;
  } else {
    sub_1 = v_67;
  };
  if (controller_ck_26_1) {
    v_13 = false;
  } else {
    v_13 = sub_22;
  };
  if (controller_blind_switch) {
    v_14 = v_13;
  } else {
    v_14 = sub_21;
  };
  if (controller_c_blind_1) {
    sub_89 = v_14;
  } else {
    sub_89 = sub_37;
  };
  if (controller_ck_24_1) {
    sub_88 = false;
    v_12 = sub_89;
  } else {
    sub_88 = sub_89;
    v_12 = false;
  };
  if (controller_c_light_2) {
    sub_90 = v_12;
  } else {
    sub_90 = sub_88;
  };
  if (controller_light_switch) {
    v_15 = sub_88;
  } else {
    v_15 = sub_90;
  };
  if (controller_c_light_1) {
    v_16 = v_15;
  } else {
    v_16 = sub_90;
  };
  if (controller_c_closet) {
    sub_87 = v_16;
  } else {
    sub_87 = false;
  };
  if (controller_ck_26_1) {
    v_9 = sub_50;
  } else {
    v_9 = false;
  };
  if (controller_blind_switch) {
    v_10 = v_9;
  } else {
    v_10 = sub_49;
  };
  if (controller_c_blind_1) {
    sub_94 = v_10;
  } else {
    sub_94 = sub_56;
  };
  sub_97 = sub_52;
  sub_96 = sub_97;
  sub_95 = sub_96;
  if (controller_ck_24_1) {
    sub_93 = sub_95;
    v_8 = sub_94;
  } else {
    sub_93 = sub_94;
    v_8 = sub_95;
  };
  if (controller_c_light_2) {
    sub_98 = v_8;
  } else {
    sub_98 = sub_93;
  };
  if (controller_light_switch) {
    v_11 = sub_93;
  } else {
    v_11 = sub_98;
  };
  if (controller_c_light_1) {
    sub_92 = v_11;
  } else {
    sub_92 = sub_98;
  };
  if (controller_c_closet) {
    sub_91 = false;
  } else {
    sub_91 = sub_92;
  };
  if (controller_ck_12_1) {
    v_18 = sub_87;
    v_17 = sub_91;
  } else {
    v_18 = sub_91;
    v_17 = sub_87;
  };
  if (controller_cleaner) {
    v_19 = v_17;
  } else {
    v_19 = v_18;
  };
  if (controller_c_pc) {
    sub_86 = false;
  } else {
    sub_86 = v_19;
  };
  if (controller_c_closet) {
    sub_100 = sub_92;
  } else {
    sub_100 = false;
  };
  if (controller_ck_26_1) {
    v_1 = sub_74;
  } else {
    v_1 = false;
  };
  if (controller_blind_switch) {
    v_2 = v_1;
  } else {
    v_2 = sub_73;
  };
  if (controller_c_blind_1) {
    sub_103 = v_2;
  } else {
    sub_103 = sub_81;
  };
  sub_106 = sub_76;
  sub_105 = sub_106;
  sub_104 = sub_105;
  if (controller_ck_24_1) {
    sub_102 = sub_104;
    v = sub_103;
  } else {
    sub_102 = sub_103;
    v = sub_104;
  };
  if (controller_c_light_2) {
    sub_107 = v;
  } else {
    sub_107 = sub_102;
  };
  if (controller_light_switch) {
    v_3 = sub_102;
  } else {
    v_3 = sub_107;
  };
  if (controller_c_light_1) {
    v_4 = v_3;
  } else {
    v_4 = sub_107;
  };
  if (controller_c_closet) {
    sub_101 = false;
  } else {
    sub_101 = v_4;
  };
  if (controller_ck_12_1) {
    v_6 = sub_100;
    v_5 = sub_101;
  } else {
    v_6 = sub_101;
    v_5 = sub_100;
  };
  if (controller_cleaner) {
    v_7 = v_5;
  } else {
    v_7 = v_6;
  };
  if (controller_c_pc) {
    sub_99 = v_7;
  } else {
    sub_99 = false;
  };
  if (controller_ck_10_1) {
    v_69 = sub_86;
    v_68 = sub_99;
  } else {
    v_69 = sub_99;
    v_68 = sub_86;
  };
  if (controller_worker) {
    v_70 = v_68;
  } else {
    v_70 = v_69;
  };
  if (p_controller_c_blind_2) {
    sub_0 = v_70;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_blind_2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_light_2_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered,
  int controller_door_failed_recovered,
  int controller_closet_failed_recovered, int controller_pc_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_9, int controller_ck_10_1, int controller_pnr_8,
  int controller_ck_12_1, int controller_pnr_7, int controller_ck_14_1,
  int controller_pnr_6, int controller_ck_16_1, int controller_pnr_5,
  int controller_ck_18_1, int controller_pnr_4, int controller_ck_20_1,
  int controller_pnr_3, int controller_v_239, int controller_v_238,
  int controller_pnr_2, int controller_ck_24_1, int controller_pnr_1,
  int controller_ck_26_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_light_2, int p_controller_c_blind_1,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_blind_1, int controller_c_light_1,
  int controller_c_closet, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_2_out* _out) {
  
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
  sub_17 = false;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (controller_c_air_1) {
    sub_10 = false;
  } else {
    sub_10 = sub_11;
  };
  if (controller_v_238) {
    sub_18 = sub_10;
  } else {
    sub_18 = false;
  };
  if (controller_c_air_2) {
    sub_9 = sub_10;
  } else {
    sub_9 = sub_18;
  };
  if (controller_c_air_1) {
    sub_19 = sub_11;
  } else {
    sub_19 = false;
  };
  if (controller_v_238) {
    v_134 = sub_19;
  } else {
    v_134 = false;
  };
  if (controller_c_air_2) {
    v_135 = false;
  } else {
    v_135 = v_134;
  };
  if (controller_v_239) {
    sub_8 = v_135;
  } else {
    sub_8 = sub_9;
  };
  if (controller_c_door) {
    v_136 = sub_8;
    sub_7 = false;
  } else {
    v_136 = false;
    sub_7 = sub_8;
  };
  if (controller_ck_16_1) {
    v_137 = v_136;
  } else {
    v_137 = sub_7;
  };
  if (controller_c_window) {
    sub_6 = v_137;
  } else {
    sub_6 = false;
  };
  sub_5 = sub_6;
  if (controller_ck_26_1) {
    v_138 = false;
  } else {
    v_138 = sub_5;
  };
  if (controller_blind_switch) {
    v_139 = v_138;
  } else {
    v_139 = sub_5;
  };
  if (controller_c_blind_1) {
    sub_4 = v_139;
  } else {
    sub_4 = sub_5;
  };
  if (controller_ck_24_1) {
    v_140 = false;
  } else {
    v_140 = sub_4;
  };
  sub_34 = true;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  if (controller_c_air_1) {
    sub_27 = false;
  } else {
    sub_27 = sub_28;
  };
  if (controller_v_238) {
    sub_35 = sub_27;
  } else {
    sub_35 = false;
  };
  if (controller_c_air_2) {
    sub_26 = sub_27;
  } else {
    sub_26 = sub_35;
  };
  if (controller_c_air_1) {
    sub_36 = sub_28;
  } else {
    sub_36 = false;
  };
  if (controller_v_238) {
    v_128 = sub_36;
  } else {
    v_128 = false;
  };
  if (controller_c_air_2) {
    v_129 = false;
  } else {
    v_129 = v_128;
  };
  if (controller_v_239) {
    sub_25 = v_129;
  } else {
    sub_25 = sub_26;
  };
  if (controller_c_door) {
    v_130 = sub_25;
    sub_24 = false;
  } else {
    v_130 = false;
    sub_24 = sub_25;
  };
  if (controller_ck_16_1) {
    v_131 = v_130;
  } else {
    v_131 = sub_24;
  };
  if (controller_c_window) {
    sub_23 = v_131;
  } else {
    sub_23 = false;
  };
  sub_22 = sub_23;
  if (controller_ck_26_1) {
    v_132 = false;
  } else {
    v_132 = sub_22;
  };
  if (controller_blind_switch) {
    v_133 = v_132;
  } else {
    v_133 = sub_22;
  };
  if (controller_c_blind_1) {
    sub_21 = v_133;
  } else {
    sub_21 = sub_22;
  };
  if (controller_ck_24_1) {
    sub_20 = sub_21;
  } else {
    sub_20 = sub_4;
  };
  if (controller_light_switch) {
    v_141 = v_140;
  } else {
    v_141 = sub_20;
  };
  sub_37 = sub_20;
  if (controller_c_light_1) {
    v_142 = v_141;
  } else {
    v_142 = sub_37;
  };
  if (controller_c_closet) {
    sub_3 = v_142;
  } else {
    sub_3 = false;
  };
  if (controller_v_238) {
    v_120 = false;
  } else {
    v_120 = sub_19;
  };
  if (controller_c_air_2) {
    sub_46 = sub_19;
  } else {
    sub_46 = v_120;
  };
  if (controller_v_239) {
    sub_45 = sub_18;
  } else {
    sub_45 = sub_46;
  };
  if (controller_c_door) {
    v_121 = sub_45;
    sub_44 = false;
  } else {
    v_121 = false;
    sub_44 = sub_45;
  };
  if (controller_ck_16_1) {
    v_122 = v_121;
  } else {
    v_122 = sub_44;
  };
  if (controller_c_window) {
    sub_43 = v_122;
  } else {
    sub_43 = false;
  };
  if (controller_change_shift) {
    v_123 = false;
    sub_42 = sub_43;
  } else {
    v_123 = sub_43;
    sub_42 = false;
  };
  if (controller_ck_1) {
    sub_41 = v_123;
  } else {
    sub_41 = sub_42;
  };
  if (controller_ck_26_1) {
    v_124 = sub_41;
  } else {
    v_124 = false;
  };
  if (controller_blind_switch) {
    v_125 = v_124;
  } else {
    v_125 = sub_41;
  };
  if (controller_c_blind_1) {
    sub_40 = v_125;
  } else {
    sub_40 = sub_41;
  };
  sub_49 = sub_43;
  sub_48 = sub_49;
  sub_47 = sub_48;
  if (controller_ck_24_1) {
    v_126 = sub_47;
  } else {
    v_126 = sub_40;
  };
  if (controller_v_238) {
    v_115 = false;
  } else {
    v_115 = sub_36;
  };
  if (controller_c_air_2) {
    sub_56 = sub_36;
  } else {
    sub_56 = v_115;
  };
  if (controller_v_239) {
    sub_55 = sub_35;
  } else {
    sub_55 = sub_56;
  };
  if (controller_c_door) {
    v_116 = sub_55;
    sub_54 = false;
  } else {
    v_116 = false;
    sub_54 = sub_55;
  };
  if (controller_ck_16_1) {
    v_117 = v_116;
  } else {
    v_117 = sub_54;
  };
  if (controller_c_window) {
    sub_53 = v_117;
  } else {
    sub_53 = false;
  };
  sub_52 = sub_53;
  if (controller_change_shift) {
    sub_58 = sub_43;
    sub_59 = sub_53;
  } else {
    sub_58 = sub_53;
    sub_59 = sub_43;
  };
  if (controller_ck_1) {
    sub_57 = sub_59;
  } else {
    sub_57 = sub_58;
  };
  if (controller_ck_26_1) {
    v_118 = sub_57;
  } else {
    v_118 = sub_52;
  };
  if (controller_blind_switch) {
    v_119 = v_118;
  } else {
    v_119 = sub_57;
  };
  if (controller_c_blind_1) {
    sub_51 = v_119;
  } else {
    sub_51 = sub_57;
  };
  if (controller_ck_24_1) {
    sub_50 = sub_47;
  } else {
    sub_50 = sub_51;
  };
  if (controller_light_switch) {
    v_127 = v_126;
  } else {
    v_127 = sub_50;
  };
  if (controller_c_light_1) {
    sub_39 = v_127;
  } else {
    sub_39 = sub_50;
  };
  if (controller_c_closet) {
    sub_38 = false;
  } else {
    sub_38 = sub_39;
  };
  if (controller_ck_12_1) {
    v_144 = sub_3;
    v_143 = sub_38;
  } else {
    v_144 = sub_38;
    v_143 = sub_3;
  };
  if (controller_cleaner) {
    v_145 = v_143;
  } else {
    v_145 = v_144;
  };
  if (controller_c_pc) {
    sub_2 = false;
  } else {
    sub_2 = v_145;
  };
  if (controller_c_closet) {
    sub_61 = sub_39;
  } else {
    sub_61 = false;
  };
  if (controller_v_238) {
    v_102 = sub_19;
  } else {
    v_102 = sub_10;
  };
  if (controller_c_air_2) {
    sub_69 = false;
  } else {
    sub_69 = v_102;
  };
  sub_70 = sub_11;
  if (controller_v_238) {
    v_104 = false;
    v_103 = sub_19;
  } else {
    v_104 = sub_70;
    v_103 = sub_70;
  };
  if (controller_c_air_2) {
    v_105 = v_103;
  } else {
    v_105 = v_104;
  };
  if (controller_v_239) {
    sub_68 = v_105;
  } else {
    sub_68 = sub_69;
  };
  sub_67 = sub_68;
  sub_66 = sub_67;
  if (controller_change_shift) {
    v_106 = false;
    sub_65 = sub_66;
  } else {
    v_106 = sub_66;
    sub_65 = false;
  };
  if (controller_ck_1) {
    sub_64 = v_106;
  } else {
    sub_64 = sub_65;
  };
  if (controller_ck_26_1) {
    v_107 = sub_64;
  } else {
    v_107 = false;
  };
  if (controller_blind_switch) {
    v_108 = v_107;
  } else {
    v_108 = sub_64;
  };
  if (controller_c_blind_1) {
    sub_63 = v_108;
  } else {
    sub_63 = sub_64;
  };
  sub_73 = sub_66;
  sub_72 = sub_73;
  sub_71 = sub_72;
  if (controller_ck_24_1) {
    v_109 = sub_71;
  } else {
    v_109 = sub_63;
  };
  if (controller_v_238) {
    v_96 = sub_36;
  } else {
    v_96 = sub_27;
  };
  if (controller_c_air_2) {
    sub_80 = false;
  } else {
    sub_80 = v_96;
  };
  sub_81 = sub_28;
  if (controller_v_238) {
    v_98 = false;
    v_97 = sub_36;
  } else {
    v_98 = sub_81;
    v_97 = sub_81;
  };
  if (controller_c_air_2) {
    v_99 = v_97;
  } else {
    v_99 = v_98;
  };
  if (controller_v_239) {
    sub_79 = v_99;
  } else {
    sub_79 = sub_80;
  };
  sub_78 = sub_79;
  sub_77 = sub_78;
  sub_76 = sub_77;
  if (controller_change_shift) {
    sub_83 = sub_66;
    sub_84 = sub_77;
  } else {
    sub_83 = sub_77;
    sub_84 = sub_66;
  };
  if (controller_ck_1) {
    sub_82 = sub_84;
  } else {
    sub_82 = sub_83;
  };
  if (controller_ck_26_1) {
    v_100 = sub_82;
  } else {
    v_100 = sub_76;
  };
  if (controller_blind_switch) {
    v_101 = v_100;
  } else {
    v_101 = sub_82;
  };
  if (controller_c_blind_1) {
    sub_75 = v_101;
  } else {
    sub_75 = sub_82;
  };
  if (controller_ck_24_1) {
    sub_74 = sub_71;
  } else {
    sub_74 = sub_75;
  };
  if (controller_light_switch) {
    v_110 = v_109;
  } else {
    v_110 = sub_74;
  };
  if (controller_c_light_1) {
    v_111 = v_110;
  } else {
    v_111 = sub_74;
  };
  if (controller_c_closet) {
    sub_62 = false;
  } else {
    sub_62 = v_111;
  };
  if (controller_ck_12_1) {
    v_113 = sub_61;
    v_112 = sub_62;
  } else {
    v_113 = sub_62;
    v_112 = sub_61;
  };
  if (controller_cleaner) {
    v_114 = v_112;
  } else {
    v_114 = v_113;
  };
  if (controller_c_pc) {
    sub_60 = v_114;
  } else {
    sub_60 = false;
  };
  if (controller_ck_10_1) {
    v_147 = sub_2;
    v_146 = sub_60;
  } else {
    v_147 = sub_60;
    v_146 = sub_2;
  };
  if (controller_worker) {
    sub_1 = v_146;
  } else {
    sub_1 = v_147;
  };
  if (controller_ck_24_1) {
    v_90 = false;
  } else {
    v_90 = sub_21;
  };
  if (controller_light_switch) {
    v_91 = v_90;
  } else {
    v_91 = sub_20;
  };
  if (controller_c_light_1) {
    v_92 = v_91;
  } else {
    v_92 = sub_37;
  };
  if (controller_c_closet) {
    sub_86 = v_92;
  } else {
    sub_86 = false;
  };
  if (controller_change_shift) {
    v_85 = false;
    sub_91 = sub_53;
  } else {
    v_85 = sub_53;
    sub_91 = false;
  };
  if (controller_ck_1) {
    sub_90 = v_85;
  } else {
    sub_90 = sub_91;
  };
  if (controller_ck_26_1) {
    v_86 = sub_90;
  } else {
    v_86 = false;
  };
  if (controller_blind_switch) {
    v_87 = v_86;
  } else {
    v_87 = sub_90;
  };
  if (controller_c_blind_1) {
    sub_89 = v_87;
  } else {
    sub_89 = sub_90;
  };
  sub_93 = sub_52;
  sub_92 = sub_93;
  if (controller_ck_24_1) {
    v_88 = sub_92;
  } else {
    v_88 = sub_89;
  };
  if (controller_ck_1) {
    sub_95 = sub_58;
  } else {
    sub_95 = sub_59;
  };
  if (controller_ck_26_1) {
    v_82 = sub_95;
  } else {
    v_82 = sub_49;
  };
  if (controller_blind_switch) {
    v_83 = v_82;
  } else {
    v_83 = sub_95;
  };
  if (controller_c_blind_1) {
    v_84 = v_83;
  } else {
    v_84 = sub_95;
  };
  if (controller_ck_24_1) {
    sub_94 = v_84;
  } else {
    sub_94 = sub_92;
  };
  if (controller_light_switch) {
    v_89 = v_88;
  } else {
    v_89 = sub_94;
  };
  if (controller_c_light_1) {
    sub_88 = v_89;
  } else {
    sub_88 = sub_94;
  };
  if (controller_c_closet) {
    sub_87 = false;
  } else {
    sub_87 = sub_88;
  };
  if (controller_ck_12_1) {
    v_94 = sub_86;
    v_93 = sub_87;
  } else {
    v_94 = sub_87;
    v_93 = sub_86;
  };
  if (controller_cleaner) {
    v_95 = v_93;
  } else {
    v_95 = v_94;
  };
  if (controller_c_pc) {
    sub_85 = false;
  } else {
    sub_85 = v_95;
  };
  if (controller_c_closet) {
    sub_97 = sub_88;
  } else {
    sub_97 = false;
  };
  if (controller_change_shift) {
    v_73 = false;
    sub_101 = sub_77;
  } else {
    v_73 = sub_77;
    sub_101 = false;
  };
  if (controller_ck_1) {
    sub_100 = v_73;
  } else {
    sub_100 = sub_101;
  };
  if (controller_ck_26_1) {
    v_74 = sub_100;
  } else {
    v_74 = false;
  };
  if (controller_blind_switch) {
    v_75 = v_74;
  } else {
    v_75 = sub_100;
  };
  if (controller_c_blind_1) {
    sub_99 = v_75;
  } else {
    sub_99 = sub_100;
  };
  sub_103 = sub_76;
  sub_102 = sub_103;
  if (controller_ck_24_1) {
    v_76 = sub_102;
  } else {
    v_76 = sub_99;
  };
  if (controller_ck_1) {
    sub_105 = sub_83;
  } else {
    sub_105 = sub_84;
  };
  if (controller_ck_26_1) {
    v = sub_105;
  } else {
    v = sub_73;
  };
  if (controller_blind_switch) {
    v_71 = v;
  } else {
    v_71 = sub_105;
  };
  if (controller_c_blind_1) {
    v_72 = v_71;
  } else {
    v_72 = sub_105;
  };
  if (controller_ck_24_1) {
    sub_104 = v_72;
  } else {
    sub_104 = sub_102;
  };
  if (controller_light_switch) {
    v_77 = v_76;
  } else {
    v_77 = sub_104;
  };
  if (controller_c_light_1) {
    v_78 = v_77;
  } else {
    v_78 = sub_104;
  };
  if (controller_c_closet) {
    sub_98 = false;
  } else {
    sub_98 = v_78;
  };
  if (controller_ck_12_1) {
    v_80 = sub_97;
    v_79 = sub_98;
  } else {
    v_80 = sub_98;
    v_79 = sub_97;
  };
  if (controller_cleaner) {
    v_81 = v_79;
  } else {
    v_81 = v_80;
  };
  if (controller_c_pc) {
    sub_96 = v_81;
  } else {
    sub_96 = false;
  };
  if (controller_ck_10_1) {
    v_149 = sub_85;
    v_148 = sub_96;
  } else {
    v_149 = sub_96;
    v_148 = sub_85;
  };
  if (controller_worker) {
    v_150 = v_148;
  } else {
    v_150 = v_149;
  };
  if (p_controller_c_light_2) {
    sub_0 = v_150;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_light_2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_blind_1_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered,
  int controller_door_failed_recovered,
  int controller_closet_failed_recovered, int controller_pc_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_9, int controller_ck_10_1, int controller_pnr_8,
  int controller_ck_12_1, int controller_pnr_7, int controller_ck_14_1,
  int controller_pnr_6, int controller_ck_16_1, int controller_pnr_5,
  int controller_ck_18_1, int controller_pnr_4, int controller_ck_20_1,
  int controller_pnr_3, int controller_v_239, int controller_v_238,
  int controller_pnr_2, int controller_ck_24_1, int controller_pnr_1,
  int controller_ck_26_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_light_2, int p_controller_c_blind_1,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_light_1, int controller_c_closet, int controller_c_air_2,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_blind_1_out* _out) {
  
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
  sub_17 = false;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (controller_c_air_1) {
    sub_10 = false;
  } else {
    sub_10 = sub_11;
  };
  if (controller_v_238) {
    sub_18 = sub_10;
  } else {
    sub_18 = false;
  };
  if (controller_c_air_2) {
    sub_9 = sub_10;
  } else {
    sub_9 = sub_18;
  };
  if (controller_c_air_1) {
    sub_19 = sub_11;
  } else {
    sub_19 = false;
  };
  if (controller_v_238) {
    v_197 = sub_19;
  } else {
    v_197 = false;
  };
  if (controller_c_air_2) {
    v_198 = false;
  } else {
    v_198 = v_197;
  };
  if (controller_v_239) {
    sub_8 = v_198;
  } else {
    sub_8 = sub_9;
  };
  if (controller_c_door) {
    v_199 = sub_8;
    sub_7 = false;
  } else {
    v_199 = false;
    sub_7 = sub_8;
  };
  if (controller_ck_16_1) {
    v_200 = v_199;
  } else {
    v_200 = sub_7;
  };
  if (controller_c_window) {
    sub_6 = v_200;
  } else {
    sub_6 = false;
  };
  sub_5 = sub_6;
  sub_4 = sub_5;
  if (controller_ck_24_1) {
    v_201 = false;
  } else {
    v_201 = sub_4;
  };
  if (controller_light_switch) {
    v_202 = v_201;
  } else {
    v_202 = sub_4;
  };
  if (controller_c_light_1) {
    v_203 = v_202;
  } else {
    v_203 = sub_4;
  };
  if (controller_c_closet) {
    sub_3 = v_203;
  } else {
    sub_3 = false;
  };
  if (controller_v_238) {
    v_191 = false;
  } else {
    v_191 = sub_19;
  };
  if (controller_c_air_2) {
    sub_28 = sub_19;
  } else {
    sub_28 = v_191;
  };
  if (controller_v_239) {
    sub_27 = sub_18;
  } else {
    sub_27 = sub_28;
  };
  if (controller_c_door) {
    v_192 = sub_27;
    sub_26 = false;
  } else {
    v_192 = false;
    sub_26 = sub_27;
  };
  if (controller_ck_16_1) {
    v_193 = v_192;
  } else {
    v_193 = sub_26;
  };
  if (controller_c_window) {
    sub_25 = v_193;
  } else {
    sub_25 = false;
  };
  if (controller_change_shift) {
    v_194 = false;
    sub_24 = sub_25;
  } else {
    v_194 = sub_25;
    sub_24 = false;
  };
  if (controller_ck_1) {
    sub_23 = v_194;
  } else {
    sub_23 = sub_24;
  };
  sub_22 = sub_23;
  sub_30 = sub_25;
  sub_29 = sub_30;
  if (controller_ck_24_1) {
    v_195 = sub_29;
  } else {
    v_195 = sub_22;
  };
  if (controller_light_switch) {
    v_196 = v_195;
  } else {
    v_196 = sub_29;
  };
  if (controller_c_light_1) {
    sub_21 = v_196;
  } else {
    sub_21 = sub_29;
  };
  if (controller_c_closet) {
    sub_20 = false;
  } else {
    sub_20 = sub_21;
  };
  if (controller_ck_12_1) {
    v_205 = sub_3;
    v_204 = sub_20;
  } else {
    v_205 = sub_20;
    v_204 = sub_3;
  };
  if (controller_cleaner) {
    v_206 = v_204;
  } else {
    v_206 = v_205;
  };
  if (controller_c_pc) {
    sub_2 = false;
  } else {
    sub_2 = v_206;
  };
  if (controller_c_closet) {
    sub_32 = sub_21;
  } else {
    sub_32 = false;
  };
  if (controller_v_238) {
    v_180 = sub_19;
  } else {
    v_180 = sub_10;
  };
  if (controller_c_air_2) {
    sub_40 = false;
  } else {
    sub_40 = v_180;
  };
  sub_41 = sub_11;
  if (controller_v_238) {
    v_182 = false;
    v_181 = sub_19;
  } else {
    v_182 = sub_41;
    v_181 = sub_41;
  };
  if (controller_c_air_2) {
    v_183 = v_181;
  } else {
    v_183 = v_182;
  };
  if (controller_v_239) {
    sub_39 = v_183;
  } else {
    sub_39 = sub_40;
  };
  sub_38 = sub_39;
  sub_37 = sub_38;
  if (controller_change_shift) {
    v_184 = false;
    sub_36 = sub_37;
  } else {
    v_184 = sub_37;
    sub_36 = false;
  };
  if (controller_ck_1) {
    sub_35 = v_184;
  } else {
    sub_35 = sub_36;
  };
  sub_34 = sub_35;
  sub_43 = sub_37;
  sub_42 = sub_43;
  if (controller_ck_24_1) {
    v_185 = sub_42;
  } else {
    v_185 = sub_34;
  };
  if (controller_light_switch) {
    v_186 = v_185;
  } else {
    v_186 = sub_42;
  };
  if (controller_c_light_1) {
    v_187 = v_186;
  } else {
    v_187 = sub_42;
  };
  if (controller_c_closet) {
    sub_33 = false;
  } else {
    sub_33 = v_187;
  };
  if (controller_ck_12_1) {
    v_189 = sub_32;
    v_188 = sub_33;
  } else {
    v_189 = sub_33;
    v_188 = sub_32;
  };
  if (controller_cleaner) {
    v_190 = v_188;
  } else {
    v_190 = v_189;
  };
  if (controller_c_pc) {
    sub_31 = v_190;
  } else {
    sub_31 = false;
  };
  if (controller_ck_10_1) {
    v_208 = sub_2;
    v_207 = sub_31;
  } else {
    v_208 = sub_31;
    v_207 = sub_2;
  };
  if (controller_worker) {
    sub_1 = v_207;
  } else {
    sub_1 = v_208;
  };
  sub_59 = true;
  sub_58 = sub_59;
  sub_57 = sub_58;
  sub_56 = sub_57;
  sub_55 = sub_56;
  sub_54 = sub_55;
  sub_53 = sub_54;
  if (controller_c_air_1) {
    sub_52 = false;
  } else {
    sub_52 = sub_53;
  };
  if (controller_v_238) {
    sub_60 = sub_52;
  } else {
    sub_60 = false;
  };
  if (controller_c_air_2) {
    sub_51 = sub_52;
  } else {
    sub_51 = sub_60;
  };
  if (controller_c_air_1) {
    sub_61 = sub_53;
  } else {
    sub_61 = false;
  };
  if (controller_v_238) {
    v_169 = sub_61;
  } else {
    v_169 = false;
  };
  if (controller_c_air_2) {
    v_170 = false;
  } else {
    v_170 = v_169;
  };
  if (controller_v_239) {
    sub_50 = v_170;
  } else {
    sub_50 = sub_51;
  };
  if (controller_c_door) {
    v_171 = sub_50;
    sub_49 = false;
  } else {
    v_171 = false;
    sub_49 = sub_50;
  };
  if (controller_ck_16_1) {
    v_172 = v_171;
  } else {
    v_172 = sub_49;
  };
  if (controller_c_window) {
    sub_48 = v_172;
  } else {
    sub_48 = false;
  };
  sub_47 = sub_48;
  if (controller_ck_26_1) {
    v_173 = sub_5;
  } else {
    v_173 = sub_47;
  };
  if (controller_blind_switch) {
    sub_46 = v_173;
  } else {
    sub_46 = sub_47;
  };
  if (controller_ck_24_1) {
    v_174 = false;
  } else {
    v_174 = sub_46;
  };
  if (controller_light_switch) {
    v_175 = v_174;
  } else {
    v_175 = sub_46;
  };
  if (controller_c_light_1) {
    v_176 = v_175;
  } else {
    v_176 = sub_46;
  };
  if (controller_c_closet) {
    sub_45 = v_176;
  } else {
    sub_45 = false;
  };
  if (controller_v_238) {
    v_162 = false;
  } else {
    v_162 = sub_61;
  };
  if (controller_c_air_2) {
    sub_70 = sub_61;
  } else {
    sub_70 = v_162;
  };
  if (controller_v_239) {
    sub_69 = sub_60;
  } else {
    sub_69 = sub_70;
  };
  if (controller_c_door) {
    v_163 = sub_69;
    sub_68 = false;
  } else {
    v_163 = false;
    sub_68 = sub_69;
  };
  if (controller_ck_16_1) {
    v_164 = v_163;
  } else {
    v_164 = sub_68;
  };
  if (controller_c_window) {
    sub_67 = v_164;
  } else {
    sub_67 = false;
  };
  if (controller_change_shift) {
    v_165 = false;
    sub_66 = sub_67;
  } else {
    v_165 = sub_67;
    sub_66 = false;
  };
  if (controller_ck_1) {
    sub_65 = v_165;
  } else {
    sub_65 = sub_66;
  };
  if (controller_ck_26_1) {
    v_166 = sub_65;
  } else {
    v_166 = sub_23;
  };
  if (controller_blind_switch) {
    sub_64 = v_166;
  } else {
    sub_64 = sub_65;
  };
  sub_72 = sub_67;
  sub_71 = sub_72;
  if (controller_ck_24_1) {
    v_167 = sub_71;
  } else {
    v_167 = sub_64;
  };
  if (controller_light_switch) {
    v_168 = v_167;
  } else {
    v_168 = sub_71;
  };
  if (controller_c_light_1) {
    sub_63 = v_168;
  } else {
    sub_63 = sub_71;
  };
  if (controller_c_closet) {
    sub_62 = false;
  } else {
    sub_62 = sub_63;
  };
  if (controller_ck_12_1) {
    v_178 = sub_45;
    v_177 = sub_62;
  } else {
    v_178 = sub_62;
    v_177 = sub_45;
  };
  if (controller_cleaner) {
    v_179 = v_177;
  } else {
    v_179 = v_178;
  };
  if (controller_c_pc) {
    sub_44 = false;
  } else {
    sub_44 = v_179;
  };
  if (controller_c_closet) {
    sub_74 = sub_63;
  } else {
    sub_74 = false;
  };
  if (controller_v_238) {
    v = sub_61;
  } else {
    v = sub_52;
  };
  if (controller_c_air_2) {
    sub_82 = false;
  } else {
    sub_82 = v;
  };
  sub_83 = sub_53;
  if (controller_v_238) {
    v_152 = false;
    v_151 = sub_61;
  } else {
    v_152 = sub_83;
    v_151 = sub_83;
  };
  if (controller_c_air_2) {
    v_153 = v_151;
  } else {
    v_153 = v_152;
  };
  if (controller_v_239) {
    sub_81 = v_153;
  } else {
    sub_81 = sub_82;
  };
  sub_80 = sub_81;
  sub_79 = sub_80;
  if (controller_change_shift) {
    v_154 = false;
    sub_78 = sub_79;
  } else {
    v_154 = sub_79;
    sub_78 = false;
  };
  if (controller_ck_1) {
    sub_77 = v_154;
  } else {
    sub_77 = sub_78;
  };
  if (controller_ck_26_1) {
    v_155 = sub_77;
  } else {
    v_155 = sub_35;
  };
  if (controller_blind_switch) {
    sub_76 = v_155;
  } else {
    sub_76 = sub_77;
  };
  sub_85 = sub_79;
  sub_84 = sub_85;
  if (controller_ck_24_1) {
    v_156 = sub_84;
  } else {
    v_156 = sub_76;
  };
  if (controller_light_switch) {
    v_157 = v_156;
  } else {
    v_157 = sub_84;
  };
  if (controller_c_light_1) {
    v_158 = v_157;
  } else {
    v_158 = sub_84;
  };
  if (controller_c_closet) {
    sub_75 = false;
  } else {
    sub_75 = v_158;
  };
  if (controller_ck_12_1) {
    v_160 = sub_74;
    v_159 = sub_75;
  } else {
    v_160 = sub_75;
    v_159 = sub_74;
  };
  if (controller_cleaner) {
    v_161 = v_159;
  } else {
    v_161 = v_160;
  };
  if (controller_c_pc) {
    sub_73 = v_161;
  } else {
    sub_73 = false;
  };
  if (controller_ck_10_1) {
    v_210 = sub_44;
    v_209 = sub_73;
  } else {
    v_210 = sub_73;
    v_209 = sub_44;
  };
  if (controller_worker) {
    v_211 = v_209;
  } else {
    v_211 = v_210;
  };
  if (p_controller_c_blind_1) {
    sub_0 = v_211;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_blind_1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_light_1_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered,
  int controller_door_failed_recovered,
  int controller_closet_failed_recovered, int controller_pc_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_9, int controller_ck_10_1, int controller_pnr_8,
  int controller_ck_12_1, int controller_pnr_7, int controller_ck_14_1,
  int controller_pnr_6, int controller_ck_16_1, int controller_pnr_5,
  int controller_ck_18_1, int controller_pnr_4, int controller_ck_20_1,
  int controller_pnr_3, int controller_v_239, int controller_v_238,
  int controller_pnr_2, int controller_ck_24_1, int controller_pnr_1,
  int controller_ck_26_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_light_2, int p_controller_c_blind_1,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_closet, int controller_c_air_2, int controller_c_air_1,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_light_1_out* _out) {
  
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
  sub_17 = false;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_21 = true;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  if (p_controller_c_light_1) {
    sub_12 = sub_18;
  } else {
    sub_12 = sub_13;
  };
  sub_11 = sub_12;
  sub_10 = sub_11;
  if (controller_c_air_1) {
    sub_9 = false;
  } else {
    sub_9 = sub_10;
  };
  if (controller_v_238) {
    sub_22 = sub_9;
  } else {
    sub_22 = false;
  };
  if (controller_c_air_2) {
    sub_8 = sub_9;
  } else {
    sub_8 = sub_22;
  };
  if (controller_c_air_1) {
    sub_23 = sub_10;
  } else {
    sub_23 = false;
  };
  if (controller_v_238) {
    v_237 = sub_23;
  } else {
    v_237 = false;
  };
  if (controller_c_air_2) {
    v_238 = false;
  } else {
    v_238 = v_237;
  };
  if (controller_v_239) {
    sub_7 = v_238;
  } else {
    sub_7 = sub_8;
  };
  if (controller_c_door) {
    v_239 = sub_7;
    sub_6 = false;
  } else {
    v_239 = false;
    sub_6 = sub_7;
  };
  if (controller_ck_16_1) {
    v_240 = v_239;
  } else {
    v_240 = sub_6;
  };
  if (controller_c_window) {
    sub_5 = v_240;
  } else {
    sub_5 = false;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_31 = sub_13;
  sub_30 = sub_31;
  if (controller_c_air_1) {
    sub_29 = false;
  } else {
    sub_29 = sub_30;
  };
  if (controller_v_238) {
    sub_32 = sub_29;
  } else {
    sub_32 = false;
  };
  if (controller_c_air_2) {
    sub_28 = sub_29;
  } else {
    sub_28 = sub_32;
  };
  if (controller_c_air_1) {
    sub_33 = sub_30;
  } else {
    sub_33 = false;
  };
  if (controller_v_238) {
    v_233 = sub_33;
  } else {
    v_233 = false;
  };
  if (controller_c_air_2) {
    v_234 = false;
  } else {
    v_234 = v_233;
  };
  if (controller_v_239) {
    sub_27 = v_234;
  } else {
    sub_27 = sub_28;
  };
  if (controller_c_door) {
    v_235 = sub_27;
    sub_26 = false;
  } else {
    v_235 = false;
    sub_26 = sub_27;
  };
  if (controller_ck_16_1) {
    v_236 = v_235;
  } else {
    v_236 = sub_26;
  };
  if (controller_c_window) {
    sub_25 = v_236;
  } else {
    sub_25 = false;
  };
  sub_24 = sub_25;
  if (controller_ck_24_1) {
    v_241 = sub_24;
  } else {
    v_241 = sub_3;
  };
  if (controller_light_switch) {
    v_242 = v_241;
  } else {
    v_242 = sub_3;
  };
  if (controller_c_closet) {
    sub_2 = v_242;
  } else {
    sub_2 = false;
  };
  if (controller_v_238) {
    v_228 = false;
  } else {
    v_228 = sub_23;
  };
  if (controller_c_air_2) {
    sub_42 = sub_23;
  } else {
    sub_42 = v_228;
  };
  if (controller_v_239) {
    sub_41 = sub_22;
  } else {
    sub_41 = sub_42;
  };
  if (controller_c_door) {
    v_229 = sub_41;
    sub_40 = false;
  } else {
    v_229 = false;
    sub_40 = sub_41;
  };
  if (controller_ck_16_1) {
    v_230 = v_229;
  } else {
    v_230 = sub_40;
  };
  if (controller_c_window) {
    sub_39 = v_230;
  } else {
    sub_39 = false;
  };
  if (controller_v_238) {
    v_225 = false;
  } else {
    v_225 = sub_33;
  };
  if (controller_c_air_2) {
    sub_46 = sub_33;
  } else {
    sub_46 = v_225;
  };
  if (controller_v_239) {
    sub_45 = sub_32;
  } else {
    sub_45 = sub_46;
  };
  if (controller_c_door) {
    v_226 = sub_45;
    sub_44 = false;
  } else {
    v_226 = false;
    sub_44 = sub_45;
  };
  if (controller_ck_16_1) {
    v_227 = v_226;
  } else {
    v_227 = sub_44;
  };
  if (controller_c_window) {
    sub_43 = v_227;
  } else {
    sub_43 = false;
  };
  if (controller_change_shift) {
    v_231 = sub_43;
    sub_38 = sub_39;
  } else {
    v_231 = sub_39;
    sub_38 = sub_43;
  };
  if (controller_ck_1) {
    sub_37 = v_231;
  } else {
    sub_37 = sub_38;
  };
  sub_36 = sub_37;
  sub_48 = sub_39;
  sub_47 = sub_48;
  if (controller_ck_24_1) {
    v_232 = sub_47;
  } else {
    v_232 = sub_36;
  };
  if (controller_light_switch) {
    sub_35 = v_232;
  } else {
    sub_35 = sub_47;
  };
  if (controller_c_closet) {
    sub_34 = false;
  } else {
    sub_34 = sub_35;
  };
  if (controller_ck_12_1) {
    v_244 = sub_2;
    v_243 = sub_34;
  } else {
    v_244 = sub_34;
    v_243 = sub_2;
  };
  if (controller_cleaner) {
    v_245 = v_243;
  } else {
    v_245 = v_244;
  };
  if (controller_c_pc) {
    sub_1 = false;
  } else {
    sub_1 = v_245;
  };
  if (controller_c_closet) {
    sub_50 = sub_35;
  } else {
    sub_50 = false;
  };
  if (controller_v_238) {
    v_215 = sub_23;
  } else {
    v_215 = sub_9;
  };
  if (controller_c_air_2) {
    sub_58 = false;
  } else {
    sub_58 = v_215;
  };
  sub_59 = sub_10;
  if (controller_v_238) {
    v_217 = false;
    v_216 = sub_23;
  } else {
    v_217 = sub_59;
    v_216 = sub_59;
  };
  if (controller_c_air_2) {
    v_218 = v_216;
  } else {
    v_218 = v_217;
  };
  if (controller_v_239) {
    sub_57 = v_218;
  } else {
    sub_57 = sub_58;
  };
  sub_56 = sub_57;
  sub_55 = sub_56;
  if (controller_v_238) {
    v = sub_33;
  } else {
    v = sub_29;
  };
  if (controller_c_air_2) {
    sub_63 = false;
  } else {
    sub_63 = v;
  };
  sub_64 = sub_30;
  if (controller_v_238) {
    v_213 = false;
    v_212 = sub_33;
  } else {
    v_213 = sub_64;
    v_212 = sub_64;
  };
  if (controller_c_air_2) {
    v_214 = v_212;
  } else {
    v_214 = v_213;
  };
  if (controller_v_239) {
    sub_62 = v_214;
  } else {
    sub_62 = sub_63;
  };
  sub_61 = sub_62;
  sub_60 = sub_61;
  if (controller_change_shift) {
    v_219 = sub_60;
    sub_54 = sub_55;
  } else {
    v_219 = sub_55;
    sub_54 = sub_60;
  };
  if (controller_ck_1) {
    sub_53 = v_219;
  } else {
    sub_53 = sub_54;
  };
  sub_52 = sub_53;
  sub_66 = sub_55;
  sub_65 = sub_66;
  if (controller_ck_24_1) {
    v_220 = sub_65;
  } else {
    v_220 = sub_52;
  };
  if (controller_light_switch) {
    v_221 = v_220;
  } else {
    v_221 = sub_65;
  };
  if (controller_c_closet) {
    sub_51 = false;
  } else {
    sub_51 = v_221;
  };
  if (controller_ck_12_1) {
    v_223 = sub_50;
    v_222 = sub_51;
  } else {
    v_223 = sub_51;
    v_222 = sub_50;
  };
  if (controller_cleaner) {
    v_224 = v_222;
  } else {
    v_224 = v_223;
  };
  if (controller_c_pc) {
    sub_49 = v_224;
  } else {
    sub_49 = false;
  };
  if (controller_ck_10_1) {
    v_247 = sub_1;
    v_246 = sub_49;
  } else {
    v_247 = sub_49;
    v_246 = sub_1;
  };
  if (controller_worker) {
    sub_0 = v_246;
  } else {
    sub_0 = v_247;
  };
  _out->controller_c_light_1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_closet_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered,
  int controller_door_failed_recovered,
  int controller_closet_failed_recovered, int controller_pc_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_9, int controller_ck_10_1, int controller_pnr_8,
  int controller_ck_12_1, int controller_pnr_7, int controller_ck_14_1,
  int controller_pnr_6, int controller_ck_16_1, int controller_pnr_5,
  int controller_ck_18_1, int controller_pnr_4, int controller_ck_20_1,
  int controller_pnr_3, int controller_v_239, int controller_v_238,
  int controller_pnr_2, int controller_ck_24_1, int controller_pnr_1,
  int controller_ck_26_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_light_2, int p_controller_c_blind_1,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_air_2, int controller_c_air_1, int controller_c_window,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_closet_out* _out) {
  
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
  sub_16 = true;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  if (controller_c_air_1) {
    sub_9 = false;
  } else {
    sub_9 = sub_10;
  };
  if (controller_v_238) {
    sub_17 = sub_9;
  } else {
    sub_17 = false;
  };
  if (controller_c_air_2) {
    sub_8 = sub_9;
  } else {
    sub_8 = sub_17;
  };
  if (controller_c_air_1) {
    sub_18 = sub_10;
  } else {
    sub_18 = false;
  };
  if (controller_v_238) {
    v_260 = sub_18;
  } else {
    v_260 = false;
  };
  if (controller_c_air_2) {
    v_261 = false;
  } else {
    v_261 = v_260;
  };
  if (controller_v_239) {
    sub_7 = v_261;
  } else {
    sub_7 = sub_8;
  };
  if (controller_c_door) {
    v_262 = sub_7;
    sub_6 = false;
  } else {
    v_262 = false;
    sub_6 = sub_7;
  };
  if (controller_ck_16_1) {
    v_263 = v_262;
  } else {
    v_263 = sub_6;
  };
  if (controller_c_window) {
    sub_5 = v_263;
  } else {
    sub_5 = false;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_33 = false;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  if (controller_c_air_1) {
    sub_26 = sub_27;
  } else {
    sub_26 = false;
  };
  if (controller_v_238) {
    v_257 = false;
  } else {
    v_257 = sub_26;
  };
  if (controller_c_air_2) {
    sub_25 = sub_26;
  } else {
    sub_25 = v_257;
  };
  if (controller_c_air_1) {
    sub_35 = false;
  } else {
    sub_35 = sub_27;
  };
  if (controller_v_238) {
    sub_34 = sub_35;
  } else {
    sub_34 = false;
  };
  if (controller_v_239) {
    sub_24 = sub_34;
  } else {
    sub_24 = sub_25;
  };
  if (controller_c_door) {
    v_258 = sub_24;
    sub_23 = false;
  } else {
    v_258 = false;
    sub_23 = sub_24;
  };
  if (controller_ck_16_1) {
    v_259 = v_258;
  } else {
    v_259 = sub_23;
  };
  if (controller_c_window) {
    sub_22 = v_259;
  } else {
    sub_22 = false;
  };
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  if (controller_ck_12_1) {
    v_265 = sub_2;
    v_264 = sub_19;
  } else {
    v_265 = sub_19;
    v_264 = sub_2;
  };
  if (controller_cleaner) {
    v_266 = v_264;
  } else {
    v_266 = v_265;
  };
  if (controller_c_pc) {
    sub_1 = false;
  } else {
    sub_1 = v_266;
  };
  if (controller_v_238) {
    v_251 = false;
  } else {
    v_251 = sub_18;
  };
  if (controller_c_air_2) {
    sub_43 = sub_18;
  } else {
    sub_43 = v_251;
  };
  if (controller_v_239) {
    sub_42 = sub_17;
  } else {
    sub_42 = sub_43;
  };
  if (controller_c_door) {
    v_252 = sub_42;
    sub_41 = false;
  } else {
    v_252 = false;
    sub_41 = sub_42;
  };
  if (controller_ck_16_1) {
    v_253 = v_252;
  } else {
    v_253 = sub_41;
  };
  if (controller_c_window) {
    sub_40 = v_253;
  } else {
    sub_40 = false;
  };
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  if (controller_v_238) {
    v = sub_26;
  } else {
    v = sub_35;
  };
  if (controller_c_air_2) {
    sub_50 = false;
  } else {
    sub_50 = v;
  };
  sub_51 = sub_27;
  if (controller_v_238) {
    v_249 = false;
    v_248 = sub_26;
  } else {
    v_249 = sub_51;
    v_248 = sub_51;
  };
  if (controller_c_air_2) {
    v_250 = v_248;
  } else {
    v_250 = v_249;
  };
  if (controller_v_239) {
    sub_49 = v_250;
  } else {
    sub_49 = sub_50;
  };
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  if (controller_ck_12_1) {
    v_255 = sub_37;
    v_254 = sub_44;
  } else {
    v_255 = sub_44;
    v_254 = sub_37;
  };
  if (controller_cleaner) {
    v_256 = v_254;
  } else {
    v_256 = v_255;
  };
  if (controller_c_pc) {
    sub_36 = v_256;
  } else {
    sub_36 = false;
  };
  if (controller_ck_10_1) {
    v_268 = sub_1;
    v_267 = sub_36;
  } else {
    v_268 = sub_36;
    v_267 = sub_1;
  };
  if (controller_worker) {
    sub_0 = v_267;
  } else {
    sub_0 = v_268;
  };
  _out->controller_c_closet = sub_0;;
}

void Controller_controller__controller_controller_controller_c_air_2_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered,
  int controller_door_failed_recovered,
  int controller_closet_failed_recovered, int controller_pc_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_9, int controller_ck_10_1, int controller_pnr_8,
  int controller_ck_12_1, int controller_pnr_7, int controller_ck_14_1,
  int controller_pnr_6, int controller_ck_16_1, int controller_pnr_5,
  int controller_ck_18_1, int controller_pnr_4, int controller_ck_20_1,
  int controller_pnr_3, int controller_v_239, int controller_v_238,
  int controller_pnr_2, int controller_ck_24_1, int controller_pnr_1,
  int controller_ck_26_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_light_2, int p_controller_c_blind_1,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_air_1, int controller_c_window, int controller_c_pc,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_2_out* _out) {
  
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
  sub_17 = true;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (controller_c_air_1) {
    sub_10 = false;
  } else {
    sub_10 = sub_11;
  };
  sub_25 = false;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  if (controller_c_air_1) {
    sub_18 = false;
  } else {
    sub_18 = sub_19;
  };
  if (controller_v_238) {
    sub_9 = sub_18;
  } else {
    sub_9 = sub_10;
  };
  if (p_controller_c_air_2) {
    sub_8 = sub_10;
  } else {
    sub_8 = sub_9;
  };
  if (controller_c_air_1) {
    sub_26 = sub_19;
  } else {
    sub_26 = false;
  };
  if (controller_v_238) {
    v_277 = sub_26;
  } else {
    v_277 = false;
  };
  if (controller_v_239) {
    sub_7 = v_277;
  } else {
    sub_7 = sub_8;
  };
  if (controller_c_door) {
    v_278 = sub_7;
    sub_6 = false;
  } else {
    v_278 = false;
    sub_6 = sub_7;
  };
  if (controller_ck_16_1) {
    v_279 = v_278;
  } else {
    v_279 = sub_6;
  };
  if (controller_c_window) {
    sub_5 = v_279;
  } else {
    sub_5 = false;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  if (controller_v_238) {
    v_273 = sub_10;
  } else {
    v_273 = false;
  };
  if (controller_c_air_1) {
    sub_35 = sub_11;
  } else {
    sub_35 = false;
  };
  if (controller_v_238) {
    sub_34 = sub_35;
  } else {
    sub_34 = sub_26;
  };
  if (p_controller_c_air_2) {
    sub_33 = sub_35;
  } else {
    sub_33 = sub_34;
  };
  if (controller_v_238) {
    sub_36 = sub_18;
  } else {
    sub_36 = false;
  };
  if (p_controller_c_air_2) {
    v_274 = v_273;
  } else {
    v_274 = sub_36;
  };
  if (controller_v_239) {
    sub_32 = v_274;
  } else {
    sub_32 = sub_33;
  };
  if (controller_c_door) {
    v_275 = sub_32;
    sub_31 = false;
  } else {
    v_275 = false;
    sub_31 = sub_32;
  };
  if (controller_ck_16_1) {
    v_276 = v_275;
  } else {
    v_276 = sub_31;
  };
  if (controller_c_window) {
    sub_30 = v_276;
  } else {
    sub_30 = false;
  };
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  if (controller_ck_12_1) {
    v_281 = sub_2;
    v_280 = sub_27;
  } else {
    v_281 = sub_27;
    v_280 = sub_2;
  };
  if (controller_cleaner) {
    v_282 = v_280;
  } else {
    v_282 = v_281;
  };
  if (controller_c_pc) {
    sub_1 = false;
  } else {
    sub_1 = v_282;
  };
  if (controller_v_238) {
    sub_44 = sub_26;
  } else {
    sub_44 = sub_18;
  };
  sub_46 = sub_19;
  if (controller_v_238) {
    sub_45 = sub_35;
  } else {
    sub_45 = sub_46;
  };
  sub_47 = sub_11;
  if (controller_v_238) {
    v = sub_35;
  } else {
    v = sub_47;
  };
  if (p_controller_c_air_2) {
    v_269 = v;
  } else {
    v_269 = sub_45;
  };
  if (controller_v_239) {
    sub_43 = v_269;
  } else {
    sub_43 = sub_44;
  };
  sub_42 = sub_43;
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (controller_ck_12_1) {
    v_271 = sub_27;
    v_270 = sub_38;
  } else {
    v_271 = sub_38;
    v_270 = sub_27;
  };
  if (controller_cleaner) {
    v_272 = v_270;
  } else {
    v_272 = v_271;
  };
  if (controller_c_pc) {
    sub_37 = v_272;
  } else {
    sub_37 = false;
  };
  if (controller_ck_10_1) {
    v_284 = sub_1;
    v_283 = sub_37;
  } else {
    v_284 = sub_37;
    v_283 = sub_1;
  };
  if (controller_worker) {
    sub_0 = v_283;
  } else {
    sub_0 = v_284;
  };
  _out->controller_c_air_2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_air_1_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered,
  int controller_door_failed_recovered,
  int controller_closet_failed_recovered, int controller_pc_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_9, int controller_ck_10_1, int controller_pnr_8,
  int controller_ck_12_1, int controller_pnr_7, int controller_ck_14_1,
  int controller_pnr_6, int controller_ck_16_1, int controller_pnr_5,
  int controller_ck_18_1, int controller_pnr_4, int controller_ck_20_1,
  int controller_pnr_3, int controller_v_239, int controller_v_238,
  int controller_pnr_2, int controller_ck_24_1, int controller_pnr_1,
  int controller_ck_26_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_light_2, int p_controller_c_blind_1,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_window, int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_air_1_out* _out) {
  
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
  sub_14 = false;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_21 = true;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  if (controller_v_238) {
    v_291 = sub_15;
  } else {
    v_291 = false;
  };
  if (controller_v_239) {
    sub_7 = v_291;
  } else {
    sub_7 = sub_8;
  };
  if (controller_c_door) {
    v_292 = sub_7;
    sub_6 = false;
  } else {
    v_292 = false;
    sub_6 = sub_7;
  };
  if (controller_ck_16_1) {
    v_293 = v_292;
  } else {
    v_293 = sub_6;
  };
  if (controller_c_window) {
    sub_5 = v_293;
  } else {
    sub_5 = false;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  if (controller_v_238) {
    v_288 = sub_8;
  } else {
    v_288 = false;
  };
  if (controller_v_239) {
    sub_27 = v_288;
  } else {
    sub_27 = sub_15;
  };
  if (controller_c_door) {
    v_289 = sub_27;
    sub_26 = false;
  } else {
    v_289 = false;
    sub_26 = sub_27;
  };
  if (controller_ck_16_1) {
    v_290 = v_289;
  } else {
    v_290 = sub_26;
  };
  if (controller_c_window) {
    sub_25 = v_290;
  } else {
    sub_25 = false;
  };
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  if (controller_ck_12_1) {
    v_295 = sub_2;
    v_294 = sub_22;
  } else {
    v_295 = sub_22;
    v_294 = sub_2;
  };
  if (controller_cleaner) {
    v_296 = v_294;
  } else {
    v_296 = v_295;
  };
  if (controller_c_pc) {
    sub_1 = false;
  } else {
    sub_1 = v_296;
  };
  if (controller_v_238) {
    sub_35 = sub_15;
  } else {
    sub_35 = sub_8;
  };
  sub_43 = p_controller_c_air_1;
  sub_42 = sub_43;
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  if (controller_v_238) {
    v = sub_15;
  } else {
    v = sub_36;
  };
  if (controller_v_239) {
    sub_34 = v;
  } else {
    sub_34 = sub_35;
  };
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (controller_ck_12_1) {
    v_286 = sub_22;
    v_285 = sub_29;
  } else {
    v_286 = sub_29;
    v_285 = sub_22;
  };
  if (controller_cleaner) {
    v_287 = v_285;
  } else {
    v_287 = v_286;
  };
  if (controller_c_pc) {
    sub_28 = v_287;
  } else {
    sub_28 = false;
  };
  if (controller_ck_10_1) {
    v_298 = sub_1;
    v_297 = sub_28;
  } else {
    v_298 = sub_28;
    v_297 = sub_1;
  };
  if (controller_worker) {
    sub_0 = v_297;
  } else {
    sub_0 = v_298;
  };
  _out->controller_c_air_1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_window_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered,
  int controller_door_failed_recovered,
  int controller_closet_failed_recovered, int controller_pc_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_9, int controller_ck_10_1, int controller_pnr_8,
  int controller_ck_12_1, int controller_pnr_7, int controller_ck_14_1,
  int controller_pnr_6, int controller_ck_16_1, int controller_pnr_5,
  int controller_ck_18_1, int controller_pnr_4, int controller_ck_20_1,
  int controller_pnr_3, int controller_v_239, int controller_v_238,
  int controller_pnr_2, int controller_ck_24_1, int controller_pnr_1,
  int controller_ck_26_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_light_2, int p_controller_c_blind_1,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_pc, int controller_c_door,
  Controller_controller__controller_controller_controller_c_window_out* _out) {
  
  int v_304;
  int v_303;
  int v_302;
  int v_301;
  int v_300;
  int v_299;
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
  sub_14 = true;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  if (controller_v_238) {
    v_301 = sub_8;
  } else {
    v_301 = false;
  };
  if (controller_v_239) {
    sub_7 = v_301;
  } else {
    sub_7 = sub_8;
  };
  if (controller_c_door) {
    v_302 = sub_7;
    sub_6 = false;
  } else {
    v_302 = false;
    sub_6 = sub_7;
  };
  if (controller_ck_16_1) {
    sub_5 = v_302;
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
  sub_27 = p_controller_c_window;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  if (controller_ck_12_1) {
    v_299 = sub_2;
    v = sub_16;
  } else {
    v_299 = sub_16;
    v = sub_2;
  };
  if (controller_cleaner) {
    v_300 = v;
  } else {
    v_300 = v_299;
  };
  if (controller_c_pc) {
    sub_15 = v_300;
  } else {
    sub_15 = false;
  };
  if (controller_ck_10_1) {
    v_304 = sub_1;
    v_303 = sub_15;
  } else {
    v_304 = sub_15;
    v_303 = sub_1;
  };
  if (controller_worker) {
    sub_0 = v_303;
  } else {
    sub_0 = v_304;
  };
  _out->controller_c_window = sub_0;;
}

void Controller_controller__controller_controller_controller_c_pc_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered,
  int controller_door_failed_recovered,
  int controller_closet_failed_recovered, int controller_pc_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_9, int controller_ck_10_1, int controller_pnr_8,
  int controller_ck_12_1, int controller_pnr_7, int controller_ck_14_1,
  int controller_pnr_6, int controller_ck_16_1, int controller_pnr_5,
  int controller_ck_18_1, int controller_pnr_4, int controller_ck_20_1,
  int controller_pnr_3, int controller_v_239, int controller_v_238,
  int controller_pnr_2, int controller_ck_24_1, int controller_pnr_1,
  int controller_ck_26_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_light_2, int p_controller_c_blind_1,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c_pc_out* _out) {
  
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
  sub_14 = false;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  if (controller_v_238) {
    v_308 = sub_8;
  } else {
    v_308 = false;
  };
  if (controller_v_239) {
    sub_7 = v_308;
  } else {
    sub_7 = sub_8;
  };
  if (controller_c_door) {
    v_309 = sub_7;
    sub_6 = false;
  } else {
    v_309 = false;
    sub_6 = sub_7;
  };
  if (controller_ck_16_1) {
    sub_5 = v_309;
  } else {
    sub_5 = sub_6;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_1 = sub_2;
  sub_28 = true;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  if (controller_v_238) {
    v = sub_22;
  } else {
    v = false;
  };
  if (controller_v_239) {
    sub_21 = v;
  } else {
    sub_21 = sub_22;
  };
  if (controller_c_door) {
    v_305 = sub_21;
    sub_20 = false;
  } else {
    v_305 = false;
    sub_20 = sub_21;
  };
  if (controller_ck_16_1) {
    sub_19 = v_305;
  } else {
    sub_19 = sub_20;
  };
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_32 = sub_22;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (controller_ck_12_1) {
    v_307 = sub_16;
    v_306 = sub_29;
  } else {
    v_307 = sub_29;
    v_306 = sub_16;
  };
  if (controller_cleaner) {
    sub_15 = v_306;
  } else {
    sub_15 = v_307;
  };
  if (controller_ck_10_1) {
    v_311 = sub_1;
    v_310 = sub_15;
  } else {
    v_311 = sub_15;
    v_310 = sub_1;
  };
  if (controller_worker) {
    sub_0 = v_310;
  } else {
    sub_0 = v_311;
  };
  _out->controller_c_pc = sub_0;;
}

void Controller_controller__controller_controller_controller_c_door_step(
  int controller_change_shift, int controller_worker, int controller_cleaner,
  int controller_air_failed_recovered, int controller_light_switch,
  int controller_light_failed_recovered, int controller_blind_switch,
  int controller_blind_failed_recovered,
  int controller_door_failed_recovered,
  int controller_closet_failed_recovered, int controller_pc_failed_recovered,
  int controller_window_failed_recovered, int controller_ck_1,
  int controller_pnr_9, int controller_ck_10_1, int controller_pnr_8,
  int controller_ck_12_1, int controller_pnr_7, int controller_ck_14_1,
  int controller_pnr_6, int controller_ck_16_1, int controller_pnr_5,
  int controller_ck_18_1, int controller_pnr_4, int controller_ck_20_1,
  int controller_pnr_3, int controller_v_239, int controller_v_238,
  int controller_pnr_2, int controller_ck_24_1, int controller_pnr_1,
  int controller_ck_26_1, int controller_pnr, int p_controller_c_blind_2,
  int p_controller_c_light_2, int p_controller_c_blind_1,
  int p_controller_c_light_1, int p_controller_c_closet,
  int p_controller_c_air_2, int p_controller_c_air_1,
  int p_controller_c_window, int p_controller_c_pc, int p_controller_c_door,
  Controller_controller__controller_controller_controller_c_door_out* _out) {
  
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
  int sub_32;
  sub_13 = false;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (controller_v_238) {
    v_313 = sub_7;
  } else {
    v_313 = false;
  };
  if (controller_v_239) {
    sub_6 = v_313;
  } else {
    sub_6 = sub_7;
  };
  sub_20 = true;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  if (controller_v_238) {
    v_314 = sub_14;
  } else {
    v_314 = false;
  };
  if (controller_v_239) {
    v_315 = v_314;
  } else {
    v_315 = sub_14;
  };
  if (controller_ck_16_1) {
    sub_5 = v_315;
  } else {
    sub_5 = sub_6;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_1 = sub_2;
  sub_32 = p_controller_c_door;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  if (controller_ck_12_1) {
    v_312 = sub_2;
    v = sub_22;
  } else {
    v_312 = sub_22;
    v = sub_2;
  };
  if (controller_cleaner) {
    sub_21 = v;
  } else {
    sub_21 = v_312;
  };
  if (controller_ck_10_1) {
    v_317 = sub_1;
    v_316 = sub_21;
  } else {
    v_317 = sub_21;
    v_316 = sub_1;
  };
  if (controller_worker) {
    sub_0 = v_316;
  } else {
    sub_0 = v_317;
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
                                                       int controller_door_failed_recovered,
                                                       int controller_closet_failed_recovered,
                                                       int controller_pc_failed_recovered,
                                                       int controller_window_failed_recovered,
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
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_door_failed_recovered,
  controller_closet_failed_recovered, controller_pc_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_9,
  controller_ck_10_1, controller_pnr_8, controller_ck_12_1, controller_pnr_7,
  controller_ck_14_1, controller_pnr_6, controller_ck_16_1, controller_pnr_5,
  controller_ck_18_1, controller_pnr_4, controller_ck_20_1, controller_pnr_3,
  controller_v_239, controller_v_238, controller_pnr_2, controller_ck_24_1,
  controller_pnr_1, controller_ck_26_1, controller_pnr,
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
                                                                    controller_door_failed_recovered,
                                                                    controller_closet_failed_recovered,
                                                                    controller_pc_failed_recovered,
                                                                    controller_window_failed_recovered,
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
  controller_air_failed_recovered, controller_light_switch,
  controller_light_failed_recovered, controller_blind_switch,
  controller_blind_failed_recovered, controller_door_failed_recovered,
  controller_closet_failed_recovered, controller_pc_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_9,
  controller_ck_10_1, controller_pnr_8, controller_ck_12_1, controller_pnr_7,
  controller_ck_14_1, controller_pnr_6, controller_ck_16_1, controller_pnr_5,
  controller_ck_18_1, controller_pnr_4, controller_ck_20_1, controller_pnr_3,
  controller_v_239, controller_v_238, controller_pnr_2, controller_ck_24_1,
  controller_pnr_1, controller_ck_26_1, controller_pnr,
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
  controller_blind_failed_recovered, controller_door_failed_recovered,
  controller_closet_failed_recovered, controller_pc_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_9,
  controller_ck_10_1, controller_pnr_8, controller_ck_12_1, controller_pnr_7,
  controller_ck_14_1, controller_pnr_6, controller_ck_16_1, controller_pnr_5,
  controller_ck_18_1, controller_pnr_4, controller_ck_20_1, controller_pnr_3,
  controller_v_239, controller_v_238, controller_pnr_2, controller_ck_24_1,
  controller_pnr_1, controller_ck_26_1, controller_pnr,
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
  controller_blind_failed_recovered, controller_door_failed_recovered,
  controller_closet_failed_recovered, controller_pc_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_9,
  controller_ck_10_1, controller_pnr_8, controller_ck_12_1, controller_pnr_7,
  controller_ck_14_1, controller_pnr_6, controller_ck_16_1, controller_pnr_5,
  controller_ck_18_1, controller_pnr_4, controller_ck_20_1, controller_pnr_3,
  controller_v_239, controller_v_238, controller_pnr_2, controller_ck_24_1,
  controller_pnr_1, controller_ck_26_1, controller_pnr,
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
  controller_blind_failed_recovered, controller_door_failed_recovered,
  controller_closet_failed_recovered, controller_pc_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_9,
  controller_ck_10_1, controller_pnr_8, controller_ck_12_1, controller_pnr_7,
  controller_ck_14_1, controller_pnr_6, controller_ck_16_1, controller_pnr_5,
  controller_ck_18_1, controller_pnr_4, controller_ck_20_1, controller_pnr_3,
  controller_v_239, controller_v_238, controller_pnr_2, controller_ck_24_1,
  controller_pnr_1, controller_ck_26_1, controller_pnr,
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
  controller_blind_failed_recovered, controller_door_failed_recovered,
  controller_closet_failed_recovered, controller_pc_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_9,
  controller_ck_10_1, controller_pnr_8, controller_ck_12_1, controller_pnr_7,
  controller_ck_14_1, controller_pnr_6, controller_ck_16_1, controller_pnr_5,
  controller_ck_18_1, controller_pnr_4, controller_ck_20_1, controller_pnr_3,
  controller_v_239, controller_v_238, controller_pnr_2, controller_ck_24_1,
  controller_pnr_1, controller_ck_26_1, controller_pnr,
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
  controller_blind_failed_recovered, controller_door_failed_recovered,
  controller_closet_failed_recovered, controller_pc_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_9,
  controller_ck_10_1, controller_pnr_8, controller_ck_12_1, controller_pnr_7,
  controller_ck_14_1, controller_pnr_6, controller_ck_16_1, controller_pnr_5,
  controller_ck_18_1, controller_pnr_4, controller_ck_20_1, controller_pnr_3,
  controller_v_239, controller_v_238, controller_pnr_2, controller_ck_24_1,
  controller_pnr_1, controller_ck_26_1, controller_pnr,
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
  controller_blind_failed_recovered, controller_door_failed_recovered,
  controller_closet_failed_recovered, controller_pc_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_9,
  controller_ck_10_1, controller_pnr_8, controller_ck_12_1, controller_pnr_7,
  controller_ck_14_1, controller_pnr_6, controller_ck_16_1, controller_pnr_5,
  controller_ck_18_1, controller_pnr_4, controller_ck_20_1, controller_pnr_3,
  controller_v_239, controller_v_238, controller_pnr_2, controller_ck_24_1,
  controller_pnr_1, controller_ck_26_1, controller_pnr,
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
  controller_blind_failed_recovered, controller_door_failed_recovered,
  controller_closet_failed_recovered, controller_pc_failed_recovered,
  controller_window_failed_recovered, controller_ck_1, controller_pnr_9,
  controller_ck_10_1, controller_pnr_8, controller_ck_12_1, controller_pnr_7,
  controller_ck_14_1, controller_pnr_6, controller_ck_16_1, controller_pnr_5,
  controller_ck_18_1, controller_pnr_4, controller_ck_20_1, controller_pnr_3,
  controller_v_239, controller_v_238, controller_pnr_2, controller_ck_24_1,
  controller_pnr_1, controller_ck_26_1, controller_pnr,
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

