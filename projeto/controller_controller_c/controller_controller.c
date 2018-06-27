/* --- Generated the 27/6/2018 at 10:43 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c controller_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "controller_controller.h"

void Controller_controller__controller_controller_controller_c_ar2_step(
  int controller_shift_turno, int controller_abre_porta,
  int controller_p_arrived, int controller_ck_1, int controller_pnr_8,
  int controller_ck_19_1, int controller_pnr_7, int controller_ck_21_1,
  int controller_pnr_6, int controller_ck_23_1, int controller_pnr_5,
  int controller_ck_25_1, int controller_pnr_4, int controller_ck_27_1,
  int controller_pnr_3, int controller_v_387, int controller_v_386,
  int controller_pnr_2, int controller_v_371, int controller_v_370,
  int controller_pnr_1, int controller_v_355, int controller_v_354,
  int controller_pnr, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_per2, int p_controller_c_per1, int p_controller_c_luz2,
  int p_controller_c_luz1, int p_controller_c_jan, int p_controller_c_pc,
  int p_controller_c_rot, int p_controller_c_porta, int controller_c_ar1,
  int controller_c_per2, int controller_c_per1, int controller_c_luz2,
  int controller_c_luz1, int controller_c_jan, int controller_c_pc,
  int controller_c_rot, int controller_c_porta,
  Controller_controller__controller_controller_controller_c_ar2_out* _out) {
  
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
  sub_16 = false;
  sub_15 = sub_16;
  sub_14 = sub_15;
  if (controller_v_355) {
    v_49 = sub_14;
    sub_13 = false;
  } else {
    v_49 = false;
    sub_13 = sub_14;
  };
  if (controller_c_ar1) {
    v_50 = sub_13;
    sub_12 = sub_13;
  } else {
    v_50 = v_49;
    sub_12 = false;
  };
  if (controller_v_354) {
    sub_11 = v_50;
  } else {
    sub_11 = sub_12;
  };
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  if (controller_p_arrived) {
    v_51 = sub_8;
    sub_7 = false;
  } else {
    v_51 = false;
    sub_7 = sub_8;
  };
  if (controller_ck_23_1) {
    v_52 = v_51;
  } else {
    v_52 = sub_7;
  };
  if (controller_c_porta) {
    sub_6 = false;
  } else {
    sub_6 = v_52;
  };
  sub_5 = sub_6;
  if (controller_c_rot) {
    v_40 = false;
  } else {
    v_40 = sub_16;
  };
  if (controller_c_pc) {
    sub_25 = false;
  } else {
    sub_25 = v_40;
  };
  if (controller_v_355) {
    sub_24 = false;
  } else {
    sub_24 = sub_25;
  };
  if (controller_c_ar1) {
    sub_23 = false;
  } else {
    sub_23 = sub_24;
  };
  if (controller_v_355) {
    sub_26 = sub_25;
  } else {
    sub_26 = false;
  };
  if (controller_c_ar1) {
    v_41 = sub_26;
  } else {
    v_41 = sub_24;
  };
  if (controller_v_354) {
    sub_22 = v_41;
  } else {
    sub_22 = sub_23;
  };
  if (controller_v_371) {
    v_43 = false;
  } else {
    v_43 = sub_22;
  };
  if (controller_c_per2) {
    v_44 = v_43;
  } else {
    v_44 = sub_22;
  };
  if (controller_c_per1) {
    v_45 = false;
  } else {
    v_45 = v_44;
  };
  if (controller_v_371) {
    sub_21 = sub_22;
  } else {
    sub_21 = false;
  };
  if (controller_c_per2) {
    v_42 = sub_21;
  } else {
    v_42 = sub_22;
  };
  if (controller_c_per1) {
    sub_20 = v_42;
  } else {
    sub_20 = sub_21;
  };
  if (controller_v_370) {
    v_46 = v_45;
  } else {
    v_46 = sub_20;
  };
  if (controller_c_jan) {
    sub_19 = false;
  } else {
    sub_19 = v_46;
  };
  if (controller_p_arrived) {
    v_47 = sub_8;
    sub_18 = sub_19;
  } else {
    v_47 = sub_19;
    sub_18 = sub_8;
  };
  if (controller_ck_23_1) {
    v_48 = v_47;
  } else {
    v_48 = sub_18;
  };
  if (controller_c_porta) {
    sub_17 = false;
  } else {
    sub_17 = v_48;
  };
  if (controller_v_386) {
    v_55 = sub_17;
  } else {
    v_55 = sub_6;
  };
  if (controller_c_luz2) {
    v_56 = sub_6;
  } else {
    v_56 = v_55;
  };
  if (controller_c_luz1) {
    v_57 = v_56;
  } else {
    v_57 = sub_5;
  };
  if (controller_v_386) {
    v_53 = sub_6;
  } else {
    v_53 = sub_17;
  };
  if (controller_c_luz2) {
    v_54 = v_53;
  } else {
    v_54 = sub_17;
  };
  if (controller_c_luz1) {
    sub_4 = sub_5;
  } else {
    sub_4 = v_54;
  };
  if (controller_v_387) {
    sub_3 = v_57;
  } else {
    sub_3 = sub_4;
  };
  sub_35 = sub_14;
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  if (controller_p_arrived) {
    v_32 = sub_32;
    sub_31 = false;
  } else {
    v_32 = false;
    sub_31 = sub_32;
  };
  if (controller_ck_23_1) {
    v_33 = v_32;
  } else {
    v_33 = sub_31;
  };
  if (controller_c_porta) {
    sub_30 = false;
  } else {
    sub_30 = v_33;
  };
  if (controller_v_386) {
    sub_29 = false;
  } else {
    sub_29 = sub_30;
  };
  if (controller_c_luz2) {
    v_34 = sub_29;
  } else {
    v_34 = false;
  };
  if (controller_p_arrived) {
    v_30 = false;
    sub_37 = sub_19;
  } else {
    v_30 = sub_19;
    sub_37 = false;
  };
  if (controller_ck_23_1) {
    v_31 = v_30;
  } else {
    v_31 = sub_37;
  };
  if (controller_c_porta) {
    sub_36 = v_31;
  } else {
    sub_36 = false;
  };
  if (controller_v_386) {
    v_37 = sub_36;
  } else {
    v_37 = sub_30;
  };
  if (controller_c_luz2) {
    v_38 = sub_30;
  } else {
    v_38 = v_37;
  };
  if (controller_c_luz1) {
    v_39 = v_38;
  } else {
    v_39 = sub_29;
  };
  if (controller_v_386) {
    v_35 = sub_30;
  } else {
    v_35 = sub_36;
  };
  if (controller_c_luz2) {
    v_36 = v_35;
  } else {
    v_36 = sub_36;
  };
  if (controller_c_luz1) {
    sub_28 = v_34;
  } else {
    sub_28 = v_36;
  };
  if (controller_v_387) {
    sub_27 = v_39;
  } else {
    sub_27 = sub_28;
  };
  if (controller_shift_turno) {
    v_58 = sub_27;
    sub_2 = sub_3;
  } else {
    v_58 = sub_3;
    sub_2 = sub_27;
  };
  if (controller_ck_1) {
    sub_1 = v_58;
  } else {
    sub_1 = sub_2;
  };
  sub_51 = true;
  sub_50 = sub_51;
  sub_49 = sub_50;
  if (controller_v_355) {
    v_21 = sub_49;
  } else {
    v_21 = false;
  };
  if (controller_c_ar1) {
    v_22 = sub_13;
  } else {
    v_22 = v_21;
  };
  if (controller_v_355) {
    v_20 = false;
  } else {
    v_20 = sub_49;
  };
  if (controller_c_ar1) {
    sub_48 = v_20;
  } else {
    sub_48 = false;
  };
  if (controller_v_354) {
    sub_47 = v_22;
  } else {
    sub_47 = sub_48;
  };
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  if (controller_p_arrived) {
    v_23 = sub_44;
    sub_43 = false;
  } else {
    v_23 = false;
    sub_43 = sub_44;
  };
  if (controller_ck_23_1) {
    v_24 = v_23;
  } else {
    v_24 = sub_43;
  };
  if (controller_c_porta) {
    sub_42 = false;
  } else {
    sub_42 = v_24;
  };
  sub_41 = sub_42;
  if (controller_c_rot) {
    v_10 = false;
  } else {
    v_10 = sub_51;
  };
  if (controller_c_pc) {
    sub_58 = false;
  } else {
    sub_58 = v_10;
  };
  if (controller_v_355) {
    v_11 = false;
  } else {
    v_11 = sub_58;
  };
  if (controller_c_ar1) {
    v_12 = sub_26;
  } else {
    v_12 = v_11;
  };
  if (controller_v_354) {
    sub_57 = v_12;
  } else {
    sub_57 = sub_23;
  };
  if (controller_v_371) {
    v_14 = false;
  } else {
    v_14 = sub_57;
  };
  if (controller_c_per2) {
    v_15 = v_14;
  } else {
    v_15 = sub_57;
  };
  if (controller_c_per1) {
    v_16 = false;
  } else {
    v_16 = v_15;
  };
  if (controller_v_371) {
    sub_56 = sub_57;
  } else {
    sub_56 = false;
  };
  if (controller_c_per2) {
    v_13 = sub_56;
  } else {
    v_13 = sub_57;
  };
  if (controller_c_per1) {
    sub_55 = v_13;
  } else {
    sub_55 = sub_56;
  };
  if (controller_v_370) {
    v_17 = v_16;
  } else {
    v_17 = sub_55;
  };
  if (controller_c_jan) {
    sub_54 = false;
  } else {
    sub_54 = v_17;
  };
  if (controller_p_arrived) {
    v_18 = sub_44;
    sub_53 = sub_54;
  } else {
    v_18 = sub_54;
    sub_53 = sub_44;
  };
  if (controller_ck_23_1) {
    v_19 = v_18;
  } else {
    v_19 = sub_53;
  };
  if (controller_c_porta) {
    sub_52 = false;
  } else {
    sub_52 = v_19;
  };
  if (controller_v_386) {
    v_27 = sub_52;
  } else {
    v_27 = sub_42;
  };
  if (controller_c_luz2) {
    v_28 = sub_42;
  } else {
    v_28 = v_27;
  };
  if (controller_c_luz1) {
    v_29 = v_28;
  } else {
    v_29 = sub_41;
  };
  if (controller_v_386) {
    v_25 = sub_42;
  } else {
    v_25 = sub_52;
  };
  if (controller_c_luz2) {
    v_26 = v_25;
  } else {
    v_26 = sub_52;
  };
  if (controller_c_luz1) {
    sub_40 = sub_41;
  } else {
    sub_40 = v_26;
  };
  if (controller_v_387) {
    sub_39 = v_29;
  } else {
    sub_39 = sub_40;
  };
  sub_67 = sub_49;
  sub_66 = sub_67;
  sub_65 = sub_66;
  sub_64 = sub_65;
  if (controller_p_arrived) {
    v_2 = sub_64;
    sub_63 = false;
  } else {
    v_2 = false;
    sub_63 = sub_64;
  };
  if (controller_ck_23_1) {
    v_3 = v_2;
  } else {
    v_3 = sub_63;
  };
  if (controller_c_porta) {
    sub_62 = false;
  } else {
    sub_62 = v_3;
  };
  if (controller_v_386) {
    sub_61 = false;
  } else {
    sub_61 = sub_62;
  };
  if (controller_c_luz2) {
    v_4 = sub_61;
  } else {
    v_4 = false;
  };
  if (controller_p_arrived) {
    v = false;
    sub_69 = sub_54;
  } else {
    v = sub_54;
    sub_69 = false;
  };
  if (controller_ck_23_1) {
    v_1 = v;
  } else {
    v_1 = sub_69;
  };
  if (controller_c_porta) {
    sub_68 = v_1;
  } else {
    sub_68 = false;
  };
  if (controller_v_386) {
    v_7 = sub_68;
  } else {
    v_7 = sub_62;
  };
  if (controller_c_luz2) {
    v_8 = sub_62;
  } else {
    v_8 = v_7;
  };
  if (controller_c_luz1) {
    v_9 = v_8;
  } else {
    v_9 = sub_61;
  };
  if (controller_v_386) {
    v_5 = sub_62;
  } else {
    v_5 = sub_68;
  };
  if (controller_c_luz2) {
    v_6 = v_5;
  } else {
    v_6 = sub_68;
  };
  if (controller_c_luz1) {
    sub_60 = v_4;
  } else {
    sub_60 = v_6;
  };
  if (controller_v_387) {
    sub_59 = v_9;
  } else {
    sub_59 = sub_60;
  };
  if (controller_shift_turno) {
    v_59 = sub_59;
    sub_38 = sub_39;
  } else {
    v_59 = sub_39;
    sub_38 = sub_59;
  };
  if (controller_ck_1) {
    v_60 = v_59;
  } else {
    v_60 = sub_38;
  };
  if (p_controller_c_ar2) {
    sub_0 = v_60;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_ar2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_ar1_step(
  int controller_shift_turno, int controller_abre_porta,
  int controller_p_arrived, int controller_ck_1, int controller_pnr_8,
  int controller_ck_19_1, int controller_pnr_7, int controller_ck_21_1,
  int controller_pnr_6, int controller_ck_23_1, int controller_pnr_5,
  int controller_ck_25_1, int controller_pnr_4, int controller_ck_27_1,
  int controller_pnr_3, int controller_v_387, int controller_v_386,
  int controller_pnr_2, int controller_v_371, int controller_v_370,
  int controller_pnr_1, int controller_v_355, int controller_v_354,
  int controller_pnr, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_per2, int p_controller_c_per1, int p_controller_c_luz2,
  int p_controller_c_luz1, int p_controller_c_jan, int p_controller_c_pc,
  int p_controller_c_rot, int p_controller_c_porta, int controller_c_per2,
  int controller_c_per1, int controller_c_luz2, int controller_c_luz1,
  int controller_c_jan, int controller_c_pc, int controller_c_rot,
  int controller_c_porta,
  Controller_controller__controller_controller_controller_c_ar1_out* _out) {
  
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
  sub_14 = true;
  sub_13 = sub_14;
  sub_12 = sub_13;
  if (controller_v_355) {
    sub_11 = false;
  } else {
    sub_11 = sub_12;
  };
  sub_17 = false;
  sub_16 = sub_17;
  sub_15 = sub_16;
  if (controller_v_355) {
    v_90 = sub_15;
  } else {
    v_90 = sub_12;
  };
  if (controller_v_354) {
    sub_10 = v_90;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (controller_p_arrived) {
    v_91 = sub_7;
    sub_6 = false;
  } else {
    v_91 = false;
    sub_6 = sub_7;
  };
  if (controller_ck_23_1) {
    v_92 = v_91;
  } else {
    v_92 = sub_6;
  };
  if (controller_c_porta) {
    sub_5 = false;
  } else {
    sub_5 = v_92;
  };
  sub_4 = sub_5;
  if (controller_c_rot) {
    v_80 = false;
  } else {
    v_80 = sub_14;
  };
  if (controller_c_pc) {
    v_81 = false;
  } else {
    v_81 = v_80;
  };
  if (controller_c_rot) {
    v_79 = false;
  } else {
    v_79 = sub_17;
  };
  if (controller_c_pc) {
    sub_25 = false;
  } else {
    sub_25 = v_79;
  };
  if (controller_v_355) {
    v_82 = v_81;
    sub_24 = false;
  } else {
    v_82 = sub_25;
    sub_24 = sub_25;
  };
  if (controller_v_354) {
    sub_23 = v_82;
  } else {
    sub_23 = sub_24;
  };
  if (controller_v_371) {
    v_84 = false;
  } else {
    v_84 = sub_23;
  };
  if (controller_c_per2) {
    v_85 = v_84;
  } else {
    v_85 = sub_23;
  };
  if (controller_c_per1) {
    v_86 = false;
  } else {
    v_86 = v_85;
  };
  if (controller_v_371) {
    sub_22 = sub_23;
  } else {
    sub_22 = false;
  };
  if (controller_c_per2) {
    v_83 = sub_22;
  } else {
    v_83 = sub_23;
  };
  if (controller_c_per1) {
    sub_21 = v_83;
  } else {
    sub_21 = sub_22;
  };
  if (controller_v_370) {
    v_87 = v_86;
  } else {
    v_87 = sub_21;
  };
  if (controller_c_jan) {
    sub_20 = false;
  } else {
    sub_20 = v_87;
  };
  if (controller_p_arrived) {
    v_88 = sub_7;
    sub_19 = sub_20;
  } else {
    v_88 = sub_20;
    sub_19 = sub_7;
  };
  if (controller_ck_23_1) {
    v_89 = v_88;
  } else {
    v_89 = sub_19;
  };
  if (controller_c_porta) {
    sub_18 = false;
  } else {
    sub_18 = v_89;
  };
  if (controller_v_386) {
    v_95 = sub_18;
  } else {
    v_95 = sub_5;
  };
  if (controller_c_luz2) {
    v_96 = sub_5;
  } else {
    v_96 = v_95;
  };
  if (controller_c_luz1) {
    v_97 = v_96;
  } else {
    v_97 = sub_4;
  };
  if (controller_v_386) {
    v_93 = sub_5;
  } else {
    v_93 = sub_18;
  };
  if (controller_c_luz2) {
    v_94 = v_93;
  } else {
    v_94 = sub_18;
  };
  if (controller_c_luz1) {
    sub_3 = sub_4;
  } else {
    sub_3 = v_94;
  };
  if (controller_v_387) {
    sub_2 = v_97;
  } else {
    sub_2 = sub_3;
  };
  sub_34 = sub_15;
  sub_33 = sub_34;
  sub_32 = sub_33;
  if (controller_p_arrived) {
    v_67 = sub_32;
    sub_31 = false;
  } else {
    v_67 = false;
    sub_31 = sub_32;
  };
  if (controller_ck_23_1) {
    v_68 = v_67;
  } else {
    v_68 = sub_31;
  };
  if (controller_c_porta) {
    sub_30 = false;
  } else {
    sub_30 = v_68;
  };
  if (controller_v_386) {
    sub_29 = false;
  } else {
    sub_29 = sub_30;
  };
  if (controller_c_luz2) {
    v_69 = sub_29;
  } else {
    v_69 = false;
  };
  if (controller_p_arrived) {
    v_65 = false;
    sub_36 = sub_20;
  } else {
    v_65 = sub_20;
    sub_36 = false;
  };
  if (controller_ck_23_1) {
    v_66 = v_65;
  } else {
    v_66 = sub_36;
  };
  if (controller_c_porta) {
    sub_35 = v_66;
  } else {
    sub_35 = false;
  };
  if (controller_v_386) {
    v_72 = sub_35;
  } else {
    v_72 = sub_30;
  };
  if (controller_c_luz2) {
    v_73 = sub_30;
  } else {
    v_73 = v_72;
  };
  if (controller_c_luz1) {
    v_74 = v_73;
  } else {
    v_74 = sub_29;
  };
  if (controller_v_386) {
    v_70 = sub_30;
  } else {
    v_70 = sub_35;
  };
  if (controller_c_luz2) {
    v_71 = v_70;
  } else {
    v_71 = sub_35;
  };
  if (controller_c_luz1) {
    sub_28 = v_69;
  } else {
    sub_28 = v_71;
  };
  if (controller_v_387) {
    sub_27 = v_74;
  } else {
    sub_27 = sub_28;
  };
  sub_43 = sub_12;
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (controller_p_arrived) {
    v = sub_41;
    sub_40 = false;
  } else {
    v = false;
    sub_40 = sub_41;
  };
  if (controller_ck_23_1) {
    v_61 = v;
  } else {
    v_61 = sub_40;
  };
  if (controller_c_porta) {
    sub_39 = false;
  } else {
    sub_39 = v_61;
  };
  if (controller_v_386) {
    v_75 = sub_35;
  } else {
    v_75 = sub_39;
  };
  if (controller_c_luz2) {
    v_76 = sub_39;
  } else {
    v_76 = v_75;
  };
  if (controller_v_386) {
    v_63 = sub_39;
  } else {
    v_63 = sub_35;
  };
  if (controller_c_luz2) {
    v_64 = v_63;
  } else {
    v_64 = sub_35;
  };
  if (controller_v_386) {
    sub_38 = false;
  } else {
    sub_38 = sub_39;
  };
  if (controller_c_luz1) {
    v_77 = v_76;
  } else {
    v_77 = sub_38;
  };
  if (controller_c_luz2) {
    v_62 = sub_38;
  } else {
    v_62 = false;
  };
  if (controller_c_luz1) {
    sub_37 = v_62;
  } else {
    sub_37 = v_64;
  };
  if (controller_v_387) {
    v_78 = v_77;
  } else {
    v_78 = sub_37;
  };
  if (p_controller_c_ar1) {
    sub_26 = v_78;
  } else {
    sub_26 = sub_27;
  };
  if (controller_shift_turno) {
    v_98 = sub_26;
    sub_1 = sub_2;
  } else {
    v_98 = sub_2;
    sub_1 = sub_26;
  };
  if (controller_ck_1) {
    sub_0 = v_98;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_ar1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_per2_step(
  int controller_shift_turno, int controller_abre_porta,
  int controller_p_arrived, int controller_ck_1, int controller_pnr_8,
  int controller_ck_19_1, int controller_pnr_7, int controller_ck_21_1,
  int controller_pnr_6, int controller_ck_23_1, int controller_pnr_5,
  int controller_ck_25_1, int controller_pnr_4, int controller_ck_27_1,
  int controller_pnr_3, int controller_v_387, int controller_v_386,
  int controller_pnr_2, int controller_v_371, int controller_v_370,
  int controller_pnr_1, int controller_v_355, int controller_v_354,
  int controller_pnr, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_per2, int p_controller_c_per1, int p_controller_c_luz2,
  int p_controller_c_luz1, int p_controller_c_jan, int p_controller_c_pc,
  int p_controller_c_rot, int p_controller_c_porta, int controller_c_per1,
  int controller_c_luz2, int controller_c_luz1, int controller_c_jan,
  int controller_c_pc, int controller_c_rot, int controller_c_porta,
  Controller_controller__controller_controller_controller_c_per2_out* _out) {
  
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
  sub_14 = false;
  sub_13 = sub_14;
  sub_12 = sub_13;
  if (controller_v_355) {
    sub_11 = false;
  } else {
    sub_11 = sub_12;
  };
  if (controller_v_354) {
    sub_10 = sub_12;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  if (controller_p_arrived) {
    v_139 = sub_8;
    sub_7 = false;
  } else {
    v_139 = false;
    sub_7 = sub_8;
  };
  if (controller_ck_23_1) {
    v_140 = v_139;
  } else {
    v_140 = sub_7;
  };
  if (controller_c_porta) {
    sub_6 = false;
  } else {
    sub_6 = v_140;
  };
  sub_5 = sub_6;
  if (controller_c_rot) {
    v_133 = false;
  } else {
    v_133 = sub_14;
  };
  if (controller_c_pc) {
    sub_21 = false;
  } else {
    sub_21 = v_133;
  };
  if (controller_v_355) {
    sub_20 = false;
  } else {
    sub_20 = sub_21;
  };
  if (controller_v_354) {
    sub_19 = sub_21;
  } else {
    sub_19 = sub_20;
  };
  if (controller_c_per1) {
    v_135 = false;
  } else {
    v_135 = sub_19;
  };
  if (controller_v_371) {
    v_134 = sub_19;
  } else {
    v_134 = false;
  };
  if (controller_c_per1) {
    sub_18 = sub_19;
  } else {
    sub_18 = v_134;
  };
  if (controller_v_370) {
    v_136 = v_135;
  } else {
    v_136 = sub_18;
  };
  if (controller_c_jan) {
    sub_17 = false;
  } else {
    sub_17 = v_136;
  };
  if (controller_p_arrived) {
    v_137 = sub_8;
    sub_16 = sub_17;
  } else {
    v_137 = sub_17;
    sub_16 = sub_8;
  };
  if (controller_ck_23_1) {
    v_138 = v_137;
  } else {
    v_138 = sub_16;
  };
  if (controller_c_porta) {
    sub_15 = false;
  } else {
    sub_15 = v_138;
  };
  if (controller_v_386) {
    v_143 = sub_15;
  } else {
    v_143 = sub_6;
  };
  if (controller_c_luz2) {
    v_144 = sub_6;
  } else {
    v_144 = v_143;
  };
  if (controller_c_luz1) {
    v_145 = v_144;
  } else {
    v_145 = sub_5;
  };
  if (controller_v_386) {
    v_141 = sub_6;
  } else {
    v_141 = sub_15;
  };
  if (controller_c_luz2) {
    v_142 = v_141;
  } else {
    v_142 = sub_15;
  };
  if (controller_c_luz1) {
    sub_4 = sub_5;
  } else {
    sub_4 = v_142;
  };
  if (controller_v_387) {
    sub_3 = v_145;
  } else {
    sub_3 = sub_4;
  };
  sub_28 = sub_12;
  sub_27 = sub_28;
  if (controller_p_arrived) {
    v_125 = sub_27;
    sub_26 = false;
  } else {
    v_125 = false;
    sub_26 = sub_27;
  };
  if (controller_ck_23_1) {
    v_126 = v_125;
  } else {
    v_126 = sub_26;
  };
  if (controller_c_porta) {
    sub_25 = false;
  } else {
    sub_25 = v_126;
  };
  if (controller_v_386) {
    sub_24 = false;
  } else {
    sub_24 = sub_25;
  };
  if (controller_c_luz2) {
    v_127 = sub_24;
  } else {
    v_127 = false;
  };
  if (controller_p_arrived) {
    v_123 = false;
    sub_30 = sub_17;
  } else {
    v_123 = sub_17;
    sub_30 = false;
  };
  if (controller_ck_23_1) {
    v_124 = v_123;
  } else {
    v_124 = sub_30;
  };
  if (controller_c_porta) {
    sub_29 = v_124;
  } else {
    sub_29 = false;
  };
  if (controller_v_386) {
    v_130 = sub_29;
  } else {
    v_130 = sub_25;
  };
  if (controller_c_luz2) {
    v_131 = sub_25;
  } else {
    v_131 = v_130;
  };
  if (controller_c_luz1) {
    v_132 = v_131;
  } else {
    v_132 = sub_24;
  };
  if (controller_v_386) {
    v_128 = sub_25;
  } else {
    v_128 = sub_29;
  };
  if (controller_c_luz2) {
    v_129 = v_128;
  } else {
    v_129 = sub_29;
  };
  if (controller_c_luz1) {
    sub_23 = v_127;
  } else {
    sub_23 = v_129;
  };
  if (controller_v_387) {
    sub_22 = v_132;
  } else {
    sub_22 = sub_23;
  };
  if (controller_shift_turno) {
    v_146 = sub_22;
    sub_2 = sub_3;
  } else {
    v_146 = sub_3;
    sub_2 = sub_22;
  };
  if (controller_ck_1) {
    sub_1 = v_146;
  } else {
    sub_1 = sub_2;
  };
  sub_43 = true;
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (controller_v_355) {
    sub_40 = false;
  } else {
    sub_40 = sub_41;
  };
  if (controller_v_354) {
    sub_39 = sub_41;
  } else {
    sub_39 = sub_40;
  };
  sub_38 = sub_39;
  sub_37 = sub_38;
  if (controller_p_arrived) {
    v_116 = sub_37;
    sub_36 = false;
  } else {
    v_116 = false;
    sub_36 = sub_37;
  };
  if (controller_ck_23_1) {
    v_117 = v_116;
  } else {
    v_117 = sub_36;
  };
  if (controller_c_porta) {
    sub_35 = false;
  } else {
    sub_35 = v_117;
  };
  sub_34 = sub_35;
  if (controller_c_rot) {
    v_108 = false;
  } else {
    v_108 = sub_43;
  };
  if (controller_c_pc) {
    sub_50 = false;
  } else {
    sub_50 = v_108;
  };
  if (controller_v_355) {
    sub_49 = false;
  } else {
    sub_49 = sub_50;
  };
  if (controller_v_354) {
    sub_48 = sub_50;
  } else {
    sub_48 = sub_49;
  };
  if (controller_v_371) {
    v_111 = sub_19;
  } else {
    v_111 = sub_48;
  };
  if (controller_c_per1) {
    v_112 = false;
  } else {
    v_112 = v_111;
  };
  if (controller_v_371) {
    v_110 = sub_48;
    v_109 = sub_48;
  } else {
    v_110 = false;
    v_109 = sub_19;
  };
  if (controller_c_per1) {
    sub_47 = v_109;
  } else {
    sub_47 = v_110;
  };
  if (controller_v_370) {
    v_113 = v_112;
  } else {
    v_113 = sub_47;
  };
  if (controller_c_jan) {
    sub_46 = false;
  } else {
    sub_46 = v_113;
  };
  if (controller_p_arrived) {
    v_114 = sub_37;
    sub_45 = sub_46;
  } else {
    v_114 = sub_46;
    sub_45 = sub_37;
  };
  if (controller_ck_23_1) {
    v_115 = v_114;
  } else {
    v_115 = sub_45;
  };
  if (controller_c_porta) {
    sub_44 = false;
  } else {
    sub_44 = v_115;
  };
  if (controller_v_386) {
    v_120 = sub_44;
  } else {
    v_120 = sub_35;
  };
  if (controller_c_luz2) {
    v_121 = sub_35;
  } else {
    v_121 = v_120;
  };
  if (controller_c_luz1) {
    v_122 = v_121;
  } else {
    v_122 = sub_34;
  };
  if (controller_v_386) {
    v_118 = sub_35;
  } else {
    v_118 = sub_44;
  };
  if (controller_c_luz2) {
    v_119 = v_118;
  } else {
    v_119 = sub_44;
  };
  if (controller_c_luz1) {
    sub_33 = sub_34;
  } else {
    sub_33 = v_119;
  };
  if (controller_v_387) {
    sub_32 = v_122;
  } else {
    sub_32 = sub_33;
  };
  sub_57 = sub_41;
  sub_56 = sub_57;
  if (controller_p_arrived) {
    v_100 = sub_56;
    sub_55 = false;
  } else {
    v_100 = false;
    sub_55 = sub_56;
  };
  if (controller_ck_23_1) {
    v_101 = v_100;
  } else {
    v_101 = sub_55;
  };
  if (controller_c_porta) {
    sub_54 = false;
  } else {
    sub_54 = v_101;
  };
  if (controller_v_386) {
    sub_53 = false;
  } else {
    sub_53 = sub_54;
  };
  if (controller_c_luz2) {
    v_102 = sub_53;
  } else {
    v_102 = false;
  };
  if (controller_p_arrived) {
    v = false;
    sub_59 = sub_46;
  } else {
    v = sub_46;
    sub_59 = false;
  };
  if (controller_ck_23_1) {
    v_99 = v;
  } else {
    v_99 = sub_59;
  };
  if (controller_c_porta) {
    sub_58 = v_99;
  } else {
    sub_58 = false;
  };
  if (controller_v_386) {
    v_105 = sub_58;
  } else {
    v_105 = sub_54;
  };
  if (controller_c_luz2) {
    v_106 = sub_54;
  } else {
    v_106 = v_105;
  };
  if (controller_c_luz1) {
    v_107 = v_106;
  } else {
    v_107 = sub_53;
  };
  if (controller_v_386) {
    v_103 = sub_54;
  } else {
    v_103 = sub_58;
  };
  if (controller_c_luz2) {
    v_104 = v_103;
  } else {
    v_104 = sub_58;
  };
  if (controller_c_luz1) {
    sub_52 = v_102;
  } else {
    sub_52 = v_104;
  };
  if (controller_v_387) {
    sub_51 = v_107;
  } else {
    sub_51 = sub_52;
  };
  if (controller_shift_turno) {
    v_147 = sub_51;
    sub_31 = sub_32;
  } else {
    v_147 = sub_32;
    sub_31 = sub_51;
  };
  if (controller_ck_1) {
    v_148 = v_147;
  } else {
    v_148 = sub_31;
  };
  if (p_controller_c_per2) {
    sub_0 = v_148;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_per2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_per1_step(
  int controller_shift_turno, int controller_abre_porta,
  int controller_p_arrived, int controller_ck_1, int controller_pnr_8,
  int controller_ck_19_1, int controller_pnr_7, int controller_ck_21_1,
  int controller_pnr_6, int controller_ck_23_1, int controller_pnr_5,
  int controller_ck_25_1, int controller_pnr_4, int controller_ck_27_1,
  int controller_pnr_3, int controller_v_387, int controller_v_386,
  int controller_pnr_2, int controller_v_371, int controller_v_370,
  int controller_pnr_1, int controller_v_355, int controller_v_354,
  int controller_pnr, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_per2, int p_controller_c_per1, int p_controller_c_luz2,
  int p_controller_c_luz1, int p_controller_c_jan, int p_controller_c_pc,
  int p_controller_c_rot, int p_controller_c_porta, int controller_c_luz2,
  int controller_c_luz1, int controller_c_jan, int controller_c_pc,
  int controller_c_rot, int controller_c_porta,
  Controller_controller__controller_controller_controller_c_per1_out* _out) {
  
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
  sub_13 = false;
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (controller_v_355) {
    sub_10 = false;
  } else {
    sub_10 = sub_11;
  };
  if (controller_v_354) {
    sub_9 = sub_11;
  } else {
    sub_9 = sub_10;
  };
  sub_8 = sub_9;
  if (controller_p_arrived) {
    v_183 = sub_8;
    sub_7 = false;
  } else {
    v_183 = false;
    sub_7 = sub_8;
  };
  if (controller_ck_23_1) {
    v_184 = v_183;
  } else {
    v_184 = sub_7;
  };
  if (controller_c_porta) {
    sub_6 = false;
  } else {
    sub_6 = v_184;
  };
  sub_5 = sub_6;
  sub_21 = true;
  if (controller_c_rot) {
    v_179 = false;
  } else {
    v_179 = sub_21;
  };
  if (controller_c_pc) {
    sub_20 = false;
  } else {
    sub_20 = v_179;
  };
  if (controller_v_355) {
    sub_19 = false;
  } else {
    sub_19 = sub_20;
  };
  if (controller_v_354) {
    sub_18 = sub_20;
  } else {
    sub_18 = sub_19;
  };
  if (controller_c_rot) {
    v_178 = false;
  } else {
    v_178 = sub_13;
  };
  if (controller_c_pc) {
    sub_24 = false;
  } else {
    sub_24 = v_178;
  };
  if (controller_v_355) {
    sub_23 = false;
  } else {
    sub_23 = sub_24;
  };
  if (controller_v_354) {
    sub_22 = sub_24;
  } else {
    sub_22 = sub_23;
  };
  if (controller_v_371) {
    sub_17 = sub_22;
  } else {
    sub_17 = sub_18;
  };
  if (controller_v_370) {
    v_180 = sub_22;
  } else {
    v_180 = sub_17;
  };
  if (controller_c_jan) {
    sub_16 = false;
  } else {
    sub_16 = v_180;
  };
  if (controller_p_arrived) {
    v_181 = sub_8;
    sub_15 = sub_16;
  } else {
    v_181 = sub_16;
    sub_15 = sub_8;
  };
  if (controller_ck_23_1) {
    v_182 = v_181;
  } else {
    v_182 = sub_15;
  };
  if (controller_c_porta) {
    sub_14 = false;
  } else {
    sub_14 = v_182;
  };
  if (controller_v_386) {
    v_187 = sub_14;
  } else {
    v_187 = sub_6;
  };
  if (controller_c_luz2) {
    v_188 = sub_6;
  } else {
    v_188 = v_187;
  };
  if (controller_c_luz1) {
    v_189 = v_188;
  } else {
    v_189 = sub_5;
  };
  if (controller_v_386) {
    v_185 = sub_6;
  } else {
    v_185 = sub_14;
  };
  if (controller_c_luz2) {
    v_186 = v_185;
  } else {
    v_186 = sub_14;
  };
  if (controller_c_luz1) {
    sub_4 = sub_5;
  } else {
    sub_4 = v_186;
  };
  if (controller_v_387) {
    sub_3 = v_189;
  } else {
    sub_3 = sub_4;
  };
  sub_30 = sub_11;
  if (controller_p_arrived) {
    v_170 = sub_30;
    sub_29 = false;
  } else {
    v_170 = false;
    sub_29 = sub_30;
  };
  if (controller_ck_23_1) {
    v_171 = v_170;
  } else {
    v_171 = sub_29;
  };
  if (controller_c_porta) {
    sub_28 = false;
  } else {
    sub_28 = v_171;
  };
  if (controller_v_386) {
    sub_27 = false;
  } else {
    sub_27 = sub_28;
  };
  if (controller_c_luz2) {
    v_172 = sub_27;
  } else {
    v_172 = false;
  };
  if (controller_p_arrived) {
    v_168 = false;
    sub_32 = sub_16;
  } else {
    v_168 = sub_16;
    sub_32 = false;
  };
  if (controller_ck_23_1) {
    v_169 = v_168;
  } else {
    v_169 = sub_32;
  };
  if (controller_c_porta) {
    sub_31 = v_169;
  } else {
    sub_31 = false;
  };
  if (controller_v_386) {
    v_175 = sub_31;
  } else {
    v_175 = sub_28;
  };
  if (controller_c_luz2) {
    v_176 = sub_28;
  } else {
    v_176 = v_175;
  };
  if (controller_c_luz1) {
    v_177 = v_176;
  } else {
    v_177 = sub_27;
  };
  if (controller_v_386) {
    v_173 = sub_28;
  } else {
    v_173 = sub_31;
  };
  if (controller_c_luz2) {
    v_174 = v_173;
  } else {
    v_174 = sub_31;
  };
  if (controller_c_luz1) {
    sub_26 = v_172;
  } else {
    sub_26 = v_174;
  };
  if (controller_v_387) {
    sub_25 = v_177;
  } else {
    sub_25 = sub_26;
  };
  if (controller_shift_turno) {
    v_190 = sub_25;
    sub_2 = sub_3;
  } else {
    v_190 = sub_3;
    sub_2 = sub_25;
  };
  if (controller_ck_1) {
    sub_1 = v_190;
  } else {
    sub_1 = sub_2;
  };
  sub_43 = sub_21;
  sub_42 = sub_43;
  if (controller_v_355) {
    sub_41 = false;
  } else {
    sub_41 = sub_42;
  };
  if (controller_v_354) {
    sub_40 = sub_42;
  } else {
    sub_40 = sub_41;
  };
  sub_39 = sub_40;
  if (controller_p_arrived) {
    v_161 = sub_39;
    sub_38 = false;
  } else {
    v_161 = false;
    sub_38 = sub_39;
  };
  if (controller_ck_23_1) {
    v_162 = v_161;
  } else {
    v_162 = sub_38;
  };
  if (controller_c_porta) {
    sub_37 = false;
  } else {
    sub_37 = v_162;
  };
  sub_36 = sub_37;
  if (controller_v_370) {
    v_158 = sub_22;
  } else {
    v_158 = sub_18;
  };
  if (controller_c_jan) {
    sub_46 = false;
  } else {
    sub_46 = v_158;
  };
  if (controller_p_arrived) {
    v_159 = sub_39;
    sub_45 = sub_46;
  } else {
    v_159 = sub_46;
    sub_45 = sub_39;
  };
  if (controller_ck_23_1) {
    v_160 = v_159;
  } else {
    v_160 = sub_45;
  };
  if (controller_c_porta) {
    sub_44 = false;
  } else {
    sub_44 = v_160;
  };
  if (controller_v_386) {
    v_165 = sub_44;
  } else {
    v_165 = sub_37;
  };
  if (controller_c_luz2) {
    v_166 = sub_37;
  } else {
    v_166 = v_165;
  };
  if (controller_c_luz1) {
    v_167 = v_166;
  } else {
    v_167 = sub_36;
  };
  if (controller_v_386) {
    v_163 = sub_37;
  } else {
    v_163 = sub_44;
  };
  if (controller_c_luz2) {
    v_164 = v_163;
  } else {
    v_164 = sub_44;
  };
  if (controller_c_luz1) {
    sub_35 = sub_36;
  } else {
    sub_35 = v_164;
  };
  if (controller_v_387) {
    sub_34 = v_167;
  } else {
    sub_34 = sub_35;
  };
  sub_52 = sub_42;
  if (controller_p_arrived) {
    v_150 = sub_52;
    sub_51 = false;
  } else {
    v_150 = false;
    sub_51 = sub_52;
  };
  if (controller_ck_23_1) {
    v_151 = v_150;
  } else {
    v_151 = sub_51;
  };
  if (controller_c_porta) {
    sub_50 = false;
  } else {
    sub_50 = v_151;
  };
  if (controller_v_386) {
    sub_49 = false;
  } else {
    sub_49 = sub_50;
  };
  if (controller_c_luz2) {
    v_152 = sub_49;
  } else {
    v_152 = false;
  };
  if (controller_p_arrived) {
    v = false;
    sub_54 = sub_46;
  } else {
    v = sub_46;
    sub_54 = false;
  };
  if (controller_ck_23_1) {
    v_149 = v;
  } else {
    v_149 = sub_54;
  };
  if (controller_c_porta) {
    sub_53 = v_149;
  } else {
    sub_53 = false;
  };
  if (controller_v_386) {
    v_155 = sub_53;
  } else {
    v_155 = sub_50;
  };
  if (controller_c_luz2) {
    v_156 = sub_50;
  } else {
    v_156 = v_155;
  };
  if (controller_c_luz1) {
    v_157 = v_156;
  } else {
    v_157 = sub_49;
  };
  if (controller_v_386) {
    v_153 = sub_50;
  } else {
    v_153 = sub_53;
  };
  if (controller_c_luz2) {
    v_154 = v_153;
  } else {
    v_154 = sub_53;
  };
  if (controller_c_luz1) {
    sub_48 = v_152;
  } else {
    sub_48 = v_154;
  };
  if (controller_v_387) {
    sub_47 = v_157;
  } else {
    sub_47 = sub_48;
  };
  if (controller_shift_turno) {
    v_191 = sub_47;
    sub_33 = sub_34;
  } else {
    v_191 = sub_34;
    sub_33 = sub_47;
  };
  if (controller_ck_1) {
    v_192 = v_191;
  } else {
    v_192 = sub_33;
  };
  if (p_controller_c_per1) {
    sub_0 = v_192;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_per1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_luz2_step(
  int controller_shift_turno, int controller_abre_porta,
  int controller_p_arrived, int controller_ck_1, int controller_pnr_8,
  int controller_ck_19_1, int controller_pnr_7, int controller_ck_21_1,
  int controller_pnr_6, int controller_ck_23_1, int controller_pnr_5,
  int controller_ck_25_1, int controller_pnr_4, int controller_ck_27_1,
  int controller_pnr_3, int controller_v_387, int controller_v_386,
  int controller_pnr_2, int controller_v_371, int controller_v_370,
  int controller_pnr_1, int controller_v_355, int controller_v_354,
  int controller_pnr, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_per2, int p_controller_c_per1, int p_controller_c_luz2,
  int p_controller_c_luz1, int p_controller_c_jan, int p_controller_c_pc,
  int p_controller_c_rot, int p_controller_c_porta, int controller_c_luz1,
  int controller_c_jan, int controller_c_pc, int controller_c_rot,
  int controller_c_porta,
  Controller_controller__controller_controller_controller_c_luz2_out* _out) {
  
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
  sub_12 = false;
  sub_13 = true;
  if (p_controller_c_luz2) {
    sub_11 = sub_13;
  } else {
    sub_11 = sub_12;
  };
  sub_10 = sub_11;
  sub_9 = sub_10;
  if (controller_v_355) {
    sub_8 = false;
  } else {
    sub_8 = sub_9;
  };
  if (controller_v_354) {
    sub_7 = sub_9;
  } else {
    sub_7 = sub_8;
  };
  sub_6 = sub_7;
  if (controller_p_arrived) {
    v_212 = sub_6;
    sub_5 = false;
  } else {
    v_212 = false;
    sub_5 = sub_6;
  };
  if (controller_ck_23_1) {
    v_213 = v_212;
  } else {
    v_213 = sub_5;
  };
  if (controller_c_porta) {
    sub_4 = false;
  } else {
    sub_4 = v_213;
  };
  if (controller_c_rot) {
    v_208 = false;
  } else {
    v_208 = sub_11;
  };
  if (controller_c_pc) {
    sub_18 = false;
  } else {
    sub_18 = v_208;
  };
  if (controller_v_355) {
    sub_17 = false;
  } else {
    sub_17 = sub_18;
  };
  if (controller_v_354) {
    v_209 = sub_18;
  } else {
    v_209 = sub_17;
  };
  if (controller_c_jan) {
    sub_16 = false;
  } else {
    sub_16 = v_209;
  };
  if (controller_p_arrived) {
    v_210 = sub_6;
    sub_15 = sub_16;
  } else {
    v_210 = sub_16;
    sub_15 = sub_6;
  };
  if (controller_ck_23_1) {
    v_211 = v_210;
  } else {
    v_211 = sub_15;
  };
  if (controller_c_porta) {
    sub_14 = false;
  } else {
    sub_14 = v_211;
  };
  if (controller_c_rot) {
    v_204 = false;
  } else {
    v_204 = sub_12;
  };
  if (controller_c_pc) {
    sub_23 = false;
  } else {
    sub_23 = v_204;
  };
  if (controller_v_355) {
    sub_22 = false;
  } else {
    sub_22 = sub_23;
  };
  if (controller_v_354) {
    v_205 = sub_23;
  } else {
    v_205 = sub_22;
  };
  if (controller_c_jan) {
    sub_21 = false;
  } else {
    sub_21 = v_205;
  };
  if (controller_p_arrived) {
    v_206 = sub_6;
    sub_20 = sub_21;
  } else {
    v_206 = sub_21;
    sub_20 = sub_6;
  };
  if (controller_ck_23_1) {
    v_207 = v_206;
  } else {
    v_207 = sub_20;
  };
  if (controller_c_porta) {
    sub_19 = false;
  } else {
    sub_19 = v_207;
  };
  if (controller_v_386) {
    v_215 = sub_19;
  } else {
    v_215 = sub_4;
  };
  if (controller_c_luz1) {
    v_216 = v_215;
  } else {
    v_216 = sub_4;
  };
  if (controller_v_386) {
    v_214 = sub_19;
  } else {
    v_214 = sub_14;
  };
  if (controller_c_luz1) {
    sub_3 = sub_4;
  } else {
    sub_3 = v_214;
  };
  if (controller_v_387) {
    sub_2 = v_216;
  } else {
    sub_2 = sub_3;
  };
  sub_31 = sub_13;
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (controller_p_arrived) {
    v_198 = sub_29;
    sub_28 = false;
  } else {
    v_198 = false;
    sub_28 = sub_29;
  };
  if (controller_ck_23_1) {
    sub_27 = v_198;
  } else {
    sub_27 = sub_28;
  };
  if (controller_c_porta) {
    sub_26 = false;
  } else {
    sub_26 = sub_27;
  };
  if (controller_v_386) {
    v_199 = false;
  } else {
    v_199 = sub_26;
  };
  if (controller_p_arrived) {
    v_196 = false;
    sub_33 = sub_16;
  } else {
    v_196 = sub_16;
    sub_33 = false;
  };
  if (controller_ck_23_1) {
    v_197 = v_196;
  } else {
    v_197 = sub_33;
  };
  if (controller_c_porta) {
    sub_32 = v_197;
  } else {
    sub_32 = false;
  };
  if (controller_p_arrived) {
    v_194 = false;
    sub_35 = sub_21;
  } else {
    v_194 = sub_21;
    sub_35 = false;
  };
  if (controller_ck_23_1) {
    v_195 = v_194;
  } else {
    v_195 = sub_35;
  };
  if (controller_c_porta) {
    sub_34 = v_195;
  } else {
    sub_34 = sub_27;
  };
  if (controller_v_386) {
    v_200 = sub_34;
  } else {
    v_200 = sub_32;
  };
  if (controller_c_luz1) {
    sub_25 = v_199;
  } else {
    sub_25 = v_200;
  };
  sub_38 = sub_9;
  if (controller_p_arrived) {
    v = sub_38;
    sub_37 = false;
  } else {
    v = false;
    sub_37 = sub_38;
  };
  if (controller_ck_23_1) {
    v_193 = v;
  } else {
    v_193 = sub_37;
  };
  if (controller_c_porta) {
    sub_36 = false;
  } else {
    sub_36 = v_193;
  };
  if (controller_v_386) {
    v_202 = false;
    v_201 = sub_34;
  } else {
    v_202 = sub_36;
    v_201 = sub_36;
  };
  if (controller_c_luz1) {
    v_203 = v_201;
  } else {
    v_203 = v_202;
  };
  if (controller_v_387) {
    sub_24 = v_203;
  } else {
    sub_24 = sub_25;
  };
  if (controller_shift_turno) {
    v_217 = sub_24;
    sub_1 = sub_2;
  } else {
    v_217 = sub_2;
    sub_1 = sub_24;
  };
  if (controller_ck_1) {
    sub_0 = v_217;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_luz2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_luz1_step(
  int controller_shift_turno, int controller_abre_porta,
  int controller_p_arrived, int controller_ck_1, int controller_pnr_8,
  int controller_ck_19_1, int controller_pnr_7, int controller_ck_21_1,
  int controller_pnr_6, int controller_ck_23_1, int controller_pnr_5,
  int controller_ck_25_1, int controller_pnr_4, int controller_ck_27_1,
  int controller_pnr_3, int controller_v_387, int controller_v_386,
  int controller_pnr_2, int controller_v_371, int controller_v_370,
  int controller_pnr_1, int controller_v_355, int controller_v_354,
  int controller_pnr, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_per2, int p_controller_c_per1, int p_controller_c_luz2,
  int p_controller_c_luz1, int p_controller_c_jan, int p_controller_c_pc,
  int p_controller_c_rot, int p_controller_c_porta, int controller_c_jan,
  int controller_c_pc, int controller_c_rot, int controller_c_porta,
  Controller_controller__controller_controller_controller_c_luz1_out* _out) {
  
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
  sub_9 = false;
  if (controller_c_rot) {
    v_237 = false;
  } else {
    v_237 = sub_9;
  };
  if (controller_c_pc) {
    sub_8 = false;
  } else {
    sub_8 = v_237;
  };
  if (controller_v_355) {
    sub_7 = false;
  } else {
    sub_7 = sub_8;
  };
  if (controller_v_354) {
    v_238 = sub_8;
  } else {
    v_238 = sub_7;
  };
  if (controller_c_jan) {
    sub_6 = false;
  } else {
    sub_6 = v_238;
  };
  sub_14 = sub_9;
  sub_13 = sub_14;
  if (controller_v_355) {
    sub_12 = false;
  } else {
    sub_12 = sub_13;
  };
  if (controller_v_354) {
    sub_11 = sub_13;
  } else {
    sub_11 = sub_12;
  };
  sub_10 = sub_11;
  if (controller_p_arrived) {
    v_239 = sub_10;
    sub_5 = sub_6;
  } else {
    v_239 = sub_6;
    sub_5 = sub_10;
  };
  if (controller_ck_23_1) {
    v_240 = v_239;
  } else {
    v_240 = sub_5;
  };
  if (controller_c_porta) {
    sub_4 = false;
  } else {
    sub_4 = v_240;
  };
  if (controller_p_arrived) {
    v_235 = sub_10;
    sub_16 = false;
  } else {
    v_235 = false;
    sub_16 = sub_10;
  };
  if (controller_ck_23_1) {
    v_236 = v_235;
  } else {
    v_236 = sub_16;
  };
  if (controller_c_porta) {
    sub_15 = false;
  } else {
    sub_15 = v_236;
  };
  sub_21 = true;
  if (controller_c_rot) {
    v_233 = false;
  } else {
    v_233 = sub_21;
  };
  if (controller_c_pc) {
    sub_20 = false;
  } else {
    sub_20 = v_233;
  };
  if (controller_v_355) {
    sub_19 = false;
  } else {
    sub_19 = sub_20;
  };
  if (controller_v_354) {
    v_234 = sub_20;
  } else {
    v_234 = sub_19;
  };
  if (controller_c_jan) {
    sub_18 = false;
  } else {
    sub_18 = v_234;
  };
  if (controller_p_arrived) {
    v_241 = sub_10;
    sub_17 = sub_18;
  } else {
    v_241 = sub_18;
    sub_17 = sub_10;
  };
  if (controller_ck_23_1) {
    v_242 = v_241;
  } else {
    v_242 = sub_17;
  };
  if (controller_c_porta) {
    v_243 = false;
  } else {
    v_243 = v_242;
  };
  if (controller_v_386) {
    v_244 = v_243;
  } else {
    v_244 = sub_15;
  };
  if (controller_v_387) {
    sub_3 = v_244;
  } else {
    sub_3 = sub_4;
  };
  if (controller_p_arrived) {
    v_230 = false;
    sub_26 = sub_6;
  } else {
    v_230 = sub_6;
    sub_26 = false;
  };
  if (controller_ck_23_1) {
    sub_25 = v_230;
  } else {
    sub_25 = sub_26;
  };
  sub_31 = sub_21;
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (controller_p_arrived) {
    v_229 = sub_29;
    sub_28 = false;
  } else {
    v_229 = false;
    sub_28 = sub_29;
  };
  if (controller_ck_23_1) {
    sub_27 = v_229;
  } else {
    sub_27 = sub_28;
  };
  if (controller_c_porta) {
    sub_24 = sub_25;
  } else {
    sub_24 = sub_27;
  };
  sub_34 = sub_13;
  if (controller_p_arrived) {
    v_228 = sub_34;
    sub_33 = false;
  } else {
    v_228 = false;
    sub_33 = sub_34;
  };
  if (controller_ck_23_1) {
    sub_32 = v_228;
  } else {
    sub_32 = sub_33;
  };
  if (controller_c_porta) {
    v_231 = sub_25;
  } else {
    v_231 = sub_32;
  };
  if (controller_v_386) {
    sub_23 = v_231;
  } else {
    sub_23 = sub_24;
  };
  if (controller_c_porta) {
    sub_35 = false;
  } else {
    sub_35 = sub_32;
  };
  if (controller_p_arrived) {
    v_226 = false;
    sub_37 = sub_18;
  } else {
    v_226 = sub_18;
    sub_37 = false;
  };
  if (controller_ck_23_1) {
    v_227 = v_226;
  } else {
    v_227 = sub_37;
  };
  if (controller_c_porta) {
    sub_36 = v_227;
  } else {
    sub_36 = sub_27;
  };
  if (controller_v_386) {
    v_232 = sub_36;
  } else {
    v_232 = sub_35;
  };
  if (controller_v_387) {
    sub_22 = v_232;
  } else {
    sub_22 = sub_23;
  };
  if (controller_shift_turno) {
    v_245 = sub_22;
    sub_2 = sub_3;
  } else {
    v_245 = sub_3;
    sub_2 = sub_22;
  };
  if (controller_ck_1) {
    sub_1 = v_245;
  } else {
    sub_1 = sub_2;
  };
  if (controller_v_355) {
    sub_44 = false;
  } else {
    sub_44 = sub_30;
  };
  if (controller_v_354) {
    sub_43 = sub_30;
  } else {
    sub_43 = sub_44;
  };
  sub_42 = sub_43;
  if (controller_p_arrived) {
    v_222 = sub_42;
    v_220 = sub_42;
    sub_41 = sub_6;
  } else {
    v_222 = sub_18;
    v_220 = sub_6;
    sub_41 = sub_42;
  };
  if (controller_ck_23_1) {
    v_221 = v_220;
  } else {
    v_221 = sub_41;
  };
  if (controller_c_porta) {
    sub_40 = false;
  } else {
    sub_40 = v_221;
  };
  if (controller_p_arrived) {
    v_218 = sub_42;
    sub_46 = false;
  } else {
    v_218 = false;
    sub_46 = sub_42;
  };
  if (controller_ck_23_1) {
    v_219 = v_218;
  } else {
    v_219 = sub_46;
  };
  if (controller_c_porta) {
    sub_45 = false;
  } else {
    sub_45 = v_219;
  };
  if (controller_p_arrived) {
    sub_47 = sub_18;
  } else {
    sub_47 = sub_42;
  };
  if (controller_ck_23_1) {
    v_223 = v_222;
  } else {
    v_223 = sub_47;
  };
  if (controller_c_porta) {
    v_224 = false;
  } else {
    v_224 = v_223;
  };
  if (controller_v_386) {
    v_225 = v_224;
  } else {
    v_225 = sub_45;
  };
  if (controller_v_387) {
    sub_39 = v_225;
  } else {
    sub_39 = sub_40;
  };
  if (controller_c_porta) {
    sub_49 = false;
  } else {
    sub_49 = sub_27;
  };
  if (controller_v_386) {
    v = sub_36;
  } else {
    v = sub_49;
  };
  if (controller_v_387) {
    sub_48 = v;
  } else {
    sub_48 = sub_23;
  };
  if (controller_shift_turno) {
    v_246 = sub_48;
    sub_38 = sub_39;
  } else {
    v_246 = sub_39;
    sub_38 = sub_48;
  };
  if (controller_ck_1) {
    v_247 = v_246;
  } else {
    v_247 = sub_38;
  };
  if (p_controller_c_luz1) {
    sub_0 = v_247;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_luz1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_jan_step(
  int controller_shift_turno, int controller_abre_porta,
  int controller_p_arrived, int controller_ck_1, int controller_pnr_8,
  int controller_ck_19_1, int controller_pnr_7, int controller_ck_21_1,
  int controller_pnr_6, int controller_ck_23_1, int controller_pnr_5,
  int controller_ck_25_1, int controller_pnr_4, int controller_ck_27_1,
  int controller_pnr_3, int controller_v_387, int controller_v_386,
  int controller_pnr_2, int controller_v_371, int controller_v_370,
  int controller_pnr_1, int controller_v_355, int controller_v_354,
  int controller_pnr, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_per2, int p_controller_c_per1, int p_controller_c_luz2,
  int p_controller_c_luz1, int p_controller_c_jan, int p_controller_c_pc,
  int p_controller_c_rot, int p_controller_c_porta, int controller_c_pc,
  int controller_c_rot, int controller_c_porta,
  Controller_controller__controller_controller_controller_c_jan_out* _out) {
  
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
  sub_9 = false;
  if (controller_c_rot) {
    v_259 = false;
  } else {
    v_259 = sub_9;
  };
  if (controller_c_pc) {
    sub_8 = false;
  } else {
    sub_8 = v_259;
  };
  if (controller_v_355) {
    sub_7 = false;
  } else {
    sub_7 = sub_8;
  };
  if (controller_v_354) {
    sub_6 = sub_8;
  } else {
    sub_6 = sub_7;
  };
  sub_13 = sub_9;
  sub_12 = sub_13;
  if (controller_v_355) {
    sub_11 = false;
  } else {
    sub_11 = sub_12;
  };
  if (controller_v_354) {
    sub_10 = sub_12;
  } else {
    sub_10 = sub_11;
  };
  if (controller_p_arrived) {
    v_260 = sub_10;
    sub_5 = sub_6;
  } else {
    v_260 = sub_6;
    sub_5 = sub_10;
  };
  if (controller_ck_23_1) {
    v_261 = v_260;
  } else {
    v_261 = sub_5;
  };
  if (controller_c_porta) {
    sub_4 = false;
  } else {
    sub_4 = v_261;
  };
  if (controller_p_arrived) {
    v_257 = sub_10;
    sub_15 = false;
  } else {
    v_257 = false;
    sub_15 = sub_10;
  };
  if (controller_ck_23_1) {
    v_258 = v_257;
  } else {
    v_258 = sub_15;
  };
  if (controller_c_porta) {
    sub_14 = false;
  } else {
    sub_14 = v_258;
  };
  if (controller_v_386) {
    v_262 = sub_4;
  } else {
    v_262 = sub_14;
  };
  if (controller_v_387) {
    sub_3 = v_262;
  } else {
    sub_3 = sub_4;
  };
  if (controller_p_arrived) {
    v_255 = false;
    sub_19 = sub_6;
  } else {
    v_255 = sub_6;
    sub_19 = false;
  };
  if (controller_ck_23_1) {
    sub_18 = v_255;
  } else {
    sub_18 = sub_19;
  };
  if (controller_p_arrived) {
    v_254 = sub_12;
    sub_21 = false;
  } else {
    v_254 = false;
    sub_21 = sub_12;
  };
  if (controller_ck_23_1) {
    sub_20 = v_254;
  } else {
    sub_20 = sub_21;
  };
  if (controller_c_porta) {
    sub_17 = sub_18;
    sub_22 = false;
  } else {
    sub_17 = sub_20;
    sub_22 = sub_20;
  };
  if (controller_v_386) {
    v_256 = sub_17;
  } else {
    v_256 = sub_22;
  };
  if (controller_v_387) {
    sub_16 = v_256;
  } else {
    sub_16 = sub_17;
  };
  if (controller_shift_turno) {
    v_263 = sub_16;
    sub_2 = sub_3;
  } else {
    v_263 = sub_3;
    sub_2 = sub_16;
  };
  if (controller_ck_1) {
    sub_1 = v_263;
  } else {
    sub_1 = sub_2;
  };
  sub_31 = true;
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (controller_v_355) {
    sub_28 = false;
  } else {
    sub_28 = sub_29;
  };
  if (controller_v_354) {
    sub_27 = sub_29;
  } else {
    sub_27 = sub_28;
  };
  if (controller_p_arrived) {
    v_251 = sub_27;
    sub_26 = sub_6;
  } else {
    v_251 = sub_6;
    sub_26 = sub_27;
  };
  if (controller_ck_23_1) {
    v_252 = v_251;
  } else {
    v_252 = sub_26;
  };
  if (controller_c_porta) {
    sub_25 = false;
  } else {
    sub_25 = v_252;
  };
  if (controller_p_arrived) {
    v_249 = sub_27;
    sub_33 = false;
  } else {
    v_249 = false;
    sub_33 = sub_27;
  };
  if (controller_ck_23_1) {
    v_250 = v_249;
  } else {
    v_250 = sub_33;
  };
  if (controller_c_porta) {
    sub_32 = false;
  } else {
    sub_32 = v_250;
  };
  if (controller_v_386) {
    v_253 = sub_25;
  } else {
    v_253 = sub_32;
  };
  if (controller_v_387) {
    sub_24 = v_253;
  } else {
    sub_24 = sub_25;
  };
  if (controller_p_arrived) {
    v = sub_29;
    sub_37 = false;
  } else {
    v = false;
    sub_37 = sub_29;
  };
  if (controller_ck_23_1) {
    sub_36 = v;
  } else {
    sub_36 = sub_37;
  };
  if (controller_c_porta) {
    sub_35 = sub_18;
    sub_38 = false;
  } else {
    sub_35 = sub_36;
    sub_38 = sub_36;
  };
  if (controller_v_386) {
    v_248 = sub_35;
  } else {
    v_248 = sub_38;
  };
  if (controller_v_387) {
    sub_34 = v_248;
  } else {
    sub_34 = sub_35;
  };
  if (controller_shift_turno) {
    v_264 = sub_34;
    sub_23 = sub_24;
  } else {
    v_264 = sub_24;
    sub_23 = sub_34;
  };
  if (controller_ck_1) {
    v_265 = v_264;
  } else {
    v_265 = sub_23;
  };
  if (p_controller_c_jan) {
    sub_0 = v_265;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_jan = sub_0;;
}

void Controller_controller__controller_controller_controller_c_pc_step(
  int controller_shift_turno, int controller_abre_porta,
  int controller_p_arrived, int controller_ck_1, int controller_pnr_8,
  int controller_ck_19_1, int controller_pnr_7, int controller_ck_21_1,
  int controller_pnr_6, int controller_ck_23_1, int controller_pnr_5,
  int controller_ck_25_1, int controller_pnr_4, int controller_ck_27_1,
  int controller_pnr_3, int controller_v_387, int controller_v_386,
  int controller_pnr_2, int controller_v_371, int controller_v_370,
  int controller_pnr_1, int controller_v_355, int controller_v_354,
  int controller_pnr, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_per2, int p_controller_c_per1, int p_controller_c_luz2,
  int p_controller_c_luz1, int p_controller_c_jan, int p_controller_c_pc,
  int p_controller_c_rot, int p_controller_c_porta, int controller_c_rot,
  int controller_c_porta,
  Controller_controller__controller_controller_controller_c_pc_out* _out) {
  
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
  sub_9 = false;
  if (controller_c_rot) {
    sub_8 = false;
  } else {
    sub_8 = sub_9;
  };
  if (controller_v_355) {
    sub_7 = false;
  } else {
    sub_7 = sub_8;
  };
  if (controller_v_354) {
    sub_6 = sub_8;
  } else {
    sub_6 = sub_7;
  };
  sub_12 = sub_9;
  if (controller_v_355) {
    sub_11 = false;
  } else {
    sub_11 = sub_12;
  };
  if (controller_v_354) {
    sub_10 = sub_12;
  } else {
    sub_10 = sub_11;
  };
  if (controller_p_arrived) {
    v_277 = sub_10;
    sub_5 = sub_6;
  } else {
    v_277 = sub_6;
    sub_5 = sub_10;
  };
  if (controller_ck_23_1) {
    v_278 = v_277;
  } else {
    v_278 = sub_5;
  };
  if (controller_c_porta) {
    sub_4 = false;
  } else {
    sub_4 = v_278;
  };
  if (controller_p_arrived) {
    v_275 = sub_10;
    sub_14 = false;
  } else {
    v_275 = false;
    sub_14 = sub_10;
  };
  if (controller_ck_23_1) {
    v_276 = v_275;
  } else {
    v_276 = sub_14;
  };
  if (controller_c_porta) {
    sub_13 = false;
  } else {
    sub_13 = v_276;
  };
  if (controller_v_386) {
    v_279 = sub_4;
  } else {
    v_279 = sub_13;
  };
  if (controller_v_387) {
    sub_3 = v_279;
  } else {
    sub_3 = sub_4;
  };
  if (controller_p_arrived) {
    v_273 = false;
    sub_18 = sub_6;
  } else {
    v_273 = sub_6;
    sub_18 = false;
  };
  if (controller_ck_23_1) {
    sub_17 = v_273;
  } else {
    sub_17 = sub_18;
  };
  if (controller_p_arrived) {
    v_272 = sub_12;
    sub_20 = false;
  } else {
    v_272 = false;
    sub_20 = sub_12;
  };
  if (controller_ck_23_1) {
    sub_19 = v_272;
  } else {
    sub_19 = sub_20;
  };
  if (controller_c_porta) {
    sub_16 = sub_17;
    sub_21 = false;
  } else {
    sub_16 = sub_19;
    sub_21 = sub_19;
  };
  if (controller_v_386) {
    v_274 = sub_16;
  } else {
    v_274 = sub_21;
  };
  if (controller_v_387) {
    sub_15 = v_274;
  } else {
    sub_15 = sub_16;
  };
  if (controller_shift_turno) {
    v_280 = sub_15;
    sub_2 = sub_3;
  } else {
    v_280 = sub_3;
    sub_2 = sub_15;
  };
  if (controller_ck_1) {
    sub_1 = v_280;
  } else {
    sub_1 = sub_2;
  };
  sub_29 = true;
  sub_28 = sub_29;
  if (controller_v_355) {
    sub_27 = false;
  } else {
    sub_27 = sub_28;
  };
  if (controller_v_354) {
    sub_26 = sub_28;
  } else {
    sub_26 = sub_27;
  };
  if (controller_p_arrived) {
    v_269 = sub_26;
    sub_25 = sub_6;
  } else {
    v_269 = sub_6;
    sub_25 = sub_26;
  };
  if (controller_ck_23_1) {
    v_270 = v_269;
  } else {
    v_270 = sub_25;
  };
  if (controller_c_porta) {
    sub_24 = false;
  } else {
    sub_24 = v_270;
  };
  if (controller_p_arrived) {
    v_267 = sub_26;
    sub_31 = false;
  } else {
    v_267 = false;
    sub_31 = sub_26;
  };
  if (controller_ck_23_1) {
    v_268 = v_267;
  } else {
    v_268 = sub_31;
  };
  if (controller_c_porta) {
    sub_30 = false;
  } else {
    sub_30 = v_268;
  };
  if (controller_v_386) {
    v_271 = sub_24;
  } else {
    v_271 = sub_30;
  };
  if (controller_v_387) {
    sub_23 = v_271;
  } else {
    sub_23 = sub_24;
  };
  if (controller_p_arrived) {
    v = sub_28;
    sub_35 = false;
  } else {
    v = false;
    sub_35 = sub_28;
  };
  if (controller_ck_23_1) {
    sub_34 = v;
  } else {
    sub_34 = sub_35;
  };
  if (controller_c_porta) {
    sub_33 = sub_17;
    sub_36 = false;
  } else {
    sub_33 = sub_34;
    sub_36 = sub_34;
  };
  if (controller_v_386) {
    v_266 = sub_33;
  } else {
    v_266 = sub_36;
  };
  if (controller_v_387) {
    sub_32 = v_266;
  } else {
    sub_32 = sub_33;
  };
  if (controller_shift_turno) {
    v_281 = sub_32;
    sub_22 = sub_23;
  } else {
    v_281 = sub_23;
    sub_22 = sub_32;
  };
  if (controller_ck_1) {
    v_282 = v_281;
  } else {
    v_282 = sub_22;
  };
  if (p_controller_c_pc) {
    sub_0 = v_282;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_pc = sub_0;;
}

void Controller_controller__controller_controller_controller_c_rot_step(
  int controller_shift_turno, int controller_abre_porta,
  int controller_p_arrived, int controller_ck_1, int controller_pnr_8,
  int controller_ck_19_1, int controller_pnr_7, int controller_ck_21_1,
  int controller_pnr_6, int controller_ck_23_1, int controller_pnr_5,
  int controller_ck_25_1, int controller_pnr_4, int controller_ck_27_1,
  int controller_pnr_3, int controller_v_387, int controller_v_386,
  int controller_pnr_2, int controller_v_371, int controller_v_370,
  int controller_pnr_1, int controller_v_355, int controller_v_354,
  int controller_pnr, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_per2, int p_controller_c_per1, int p_controller_c_luz2,
  int p_controller_c_luz1, int p_controller_c_jan, int p_controller_c_pc,
  int p_controller_c_rot, int p_controller_c_porta, int controller_c_porta,
  Controller_controller__controller_controller_controller_c_rot_out* _out) {
  
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
  sub_7 = false;
  if (controller_v_355) {
    sub_6 = false;
  } else {
    sub_6 = sub_7;
  };
  if (controller_v_354) {
    sub_5 = sub_7;
  } else {
    sub_5 = sub_6;
  };
  sub_4 = sub_5;
  sub_11 = true;
  if (controller_v_355) {
    sub_10 = false;
  } else {
    sub_10 = sub_11;
  };
  if (controller_v_354) {
    sub_9 = sub_11;
  } else {
    sub_9 = sub_10;
  };
  if (controller_p_arrived) {
    v_290 = sub_9;
    sub_8 = sub_5;
  } else {
    v_290 = sub_5;
    sub_8 = sub_9;
  };
  if (controller_ck_23_1) {
    v_291 = v_290;
  } else {
    v_291 = sub_8;
  };
  if (p_controller_c_rot) {
    v_292 = v_291;
  } else {
    v_292 = sub_4;
  };
  if (controller_c_porta) {
    sub_3 = false;
  } else {
    sub_3 = v_292;
  };
  if (controller_p_arrived) {
    v_287 = sub_9;
    sub_14 = false;
    sub_15 = sub_5;
  } else {
    v_287 = false;
    sub_14 = sub_5;
    sub_15 = false;
  };
  if (controller_ck_23_1) {
    sub_13 = sub_15;
  } else {
    sub_13 = sub_14;
  };
  if (controller_p_arrived) {
    sub_16 = false;
  } else {
    sub_16 = sub_9;
  };
  if (controller_ck_23_1) {
    v_288 = v_287;
  } else {
    v_288 = sub_16;
  };
  if (p_controller_c_rot) {
    v_289 = v_288;
  } else {
    v_289 = sub_13;
  };
  if (controller_c_porta) {
    sub_12 = false;
  } else {
    sub_12 = v_289;
  };
  if (controller_v_386) {
    v_293 = sub_3;
  } else {
    v_293 = sub_12;
  };
  if (controller_v_387) {
    sub_2 = v_293;
  } else {
    sub_2 = sub_3;
  };
  if (controller_ck_23_1) {
    v_285 = sub_14;
  } else {
    v_285 = sub_15;
  };
  if (controller_p_arrived) {
    v_283 = sub_11;
    v = sub_7;
    sub_21 = false;
  } else {
    v_283 = false;
    v = false;
    sub_21 = sub_7;
  };
  if (controller_ck_23_1) {
    sub_20 = v;
  } else {
    sub_20 = sub_21;
  };
  if (controller_p_arrived) {
    sub_22 = false;
  } else {
    sub_22 = sub_11;
  };
  if (controller_ck_23_1) {
    v_284 = v_283;
  } else {
    v_284 = sub_22;
  };
  if (p_controller_c_rot) {
    sub_19 = v_284;
  } else {
    sub_19 = sub_20;
  };
  if (controller_c_porta) {
    sub_18 = v_285;
    sub_23 = false;
  } else {
    sub_18 = sub_19;
    sub_23 = sub_19;
  };
  if (controller_v_386) {
    v_286 = sub_18;
  } else {
    v_286 = sub_23;
  };
  if (controller_v_387) {
    sub_17 = v_286;
  } else {
    sub_17 = sub_18;
  };
  if (controller_shift_turno) {
    v_294 = sub_17;
    sub_1 = sub_2;
  } else {
    v_294 = sub_2;
    sub_1 = sub_17;
  };
  if (controller_ck_1) {
    sub_0 = v_294;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_rot = sub_0;;
}

void Controller_controller__controller_controller_controller_c_porta_step(
  int controller_shift_turno, int controller_abre_porta,
  int controller_p_arrived, int controller_ck_1, int controller_pnr_8,
  int controller_ck_19_1, int controller_pnr_7, int controller_ck_21_1,
  int controller_pnr_6, int controller_ck_23_1, int controller_pnr_5,
  int controller_ck_25_1, int controller_pnr_4, int controller_ck_27_1,
  int controller_pnr_3, int controller_v_387, int controller_v_386,
  int controller_pnr_2, int controller_v_371, int controller_v_370,
  int controller_pnr_1, int controller_v_355, int controller_v_354,
  int controller_pnr, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_per2, int p_controller_c_per1, int p_controller_c_luz2,
  int p_controller_c_luz1, int p_controller_c_jan, int p_controller_c_pc,
  int p_controller_c_rot, int p_controller_c_porta,
  Controller_controller__controller_controller_controller_c_porta_out* _out) {
  
  int v_299;
  int v_298;
  int v_297;
  int v_296;
  int v_295;
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
  sub_6 = false;
  if (controller_v_355) {
    sub_5 = false;
  } else {
    sub_5 = sub_6;
  };
  if (controller_v_354) {
    sub_4 = sub_6;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  if (controller_p_arrived) {
    v_297 = sub_4;
    sub_8 = false;
  } else {
    v_297 = false;
    sub_8 = sub_4;
  };
  if (controller_ck_23_1) {
    sub_7 = v_297;
  } else {
    sub_7 = sub_8;
  };
  if (controller_v_386) {
    v_298 = sub_3;
  } else {
    v_298 = sub_7;
  };
  if (controller_v_387) {
    sub_2 = v_298;
  } else {
    sub_2 = sub_3;
  };
  sub_14 = true;
  if (controller_v_355) {
    sub_13 = false;
  } else {
    sub_13 = sub_14;
  };
  if (controller_v_354) {
    sub_12 = sub_14;
  } else {
    sub_12 = sub_13;
  };
  if (controller_p_arrived) {
    v_295 = sub_6;
    sub_11 = sub_12;
  } else {
    v_295 = sub_12;
    sub_11 = sub_6;
  };
  if (controller_ck_23_1) {
    sub_10 = v_295;
  } else {
    sub_10 = sub_11;
  };
  if (controller_p_arrived) {
    v = sub_6;
    sub_16 = false;
  } else {
    v = false;
    sub_16 = sub_6;
  };
  if (controller_ck_23_1) {
    sub_15 = v;
  } else {
    sub_15 = sub_16;
  };
  if (controller_v_386) {
    v_296 = sub_10;
  } else {
    v_296 = sub_15;
  };
  if (controller_v_387) {
    sub_9 = v_296;
  } else {
    sub_9 = sub_10;
  };
  if (controller_shift_turno) {
    v_299 = sub_9;
    sub_1 = sub_2;
  } else {
    v_299 = sub_2;
    sub_1 = sub_9;
  };
  if (controller_ck_1) {
    sub_0 = v_299;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_porta = sub_0;;
}

void Controller_controller__controller_controller_step(int controller_shift_turno,
                                                       int controller_abre_porta,
                                                       int controller_p_arrived,
                                                       int controller_ck_1,
                                                       int controller_pnr_8,
                                                       int controller_ck_19_1,
                                                       int controller_pnr_7,
                                                       int controller_ck_21_1,
                                                       int controller_pnr_6,
                                                       int controller_ck_23_1,
                                                       int controller_pnr_5,
                                                       int controller_ck_25_1,
                                                       int controller_pnr_4,
                                                       int controller_ck_27_1,
                                                       int controller_pnr_3,
                                                       int controller_v_387,
                                                       int controller_v_386,
                                                       int controller_pnr_2,
                                                       int controller_v_371,
                                                       int controller_v_370,
                                                       int controller_pnr_1,
                                                       int controller_v_355,
                                                       int controller_v_354,
                                                       int controller_pnr,
                                                       int p_controller_c_ar2,
                                                       int p_controller_c_ar1,
                                                       int p_controller_c_per2,
                                                       int p_controller_c_per1,
                                                       int p_controller_c_luz2,
                                                       int p_controller_c_luz1,
                                                       int p_controller_c_jan,
                                                       int p_controller_c_pc,
                                                       int p_controller_c_rot,
                                                       int p_controller_c_porta,
                                                       Controller_controller__controller_controller_out* _out) {
  Controller_controller__controller_controller_controller_c_luz2_out Controller_controller__controller_controller_controller_c_luz2_out_st;
  Controller_controller__controller_controller_controller_c_porta_out Controller_controller__controller_controller_controller_c_porta_out_st;
  Controller_controller__controller_controller_controller_c_luz1_out Controller_controller__controller_controller_controller_c_luz1_out_st;
  Controller_controller__controller_controller_controller_c_ar2_out Controller_controller__controller_controller_controller_c_ar2_out_st;
  Controller_controller__controller_controller_controller_c_ar1_out Controller_controller__controller_controller_controller_c_ar1_out_st;
  Controller_controller__controller_controller_controller_c_per1_out Controller_controller__controller_controller_controller_c_per1_out_st;
  Controller_controller__controller_controller_controller_c_rot_out Controller_controller__controller_controller_controller_c_rot_out_st;
  Controller_controller__controller_controller_controller_c_jan_out Controller_controller__controller_controller_controller_c_jan_out_st;
  Controller_controller__controller_controller_controller_c_pc_out Controller_controller__controller_controller_controller_c_pc_out_st;
  Controller_controller__controller_controller_controller_c_per2_out Controller_controller__controller_controller_controller_c_per2_out_st;
  Controller_controller__controller_controller_controller_c_porta_step(
  controller_shift_turno, controller_abre_porta, controller_p_arrived,
  controller_ck_1, controller_pnr_8, controller_ck_19_1, controller_pnr_7,
  controller_ck_21_1, controller_pnr_6, controller_ck_23_1, controller_pnr_5,
  controller_ck_25_1, controller_pnr_4, controller_ck_27_1, controller_pnr_3,
  controller_v_387, controller_v_386, controller_pnr_2, controller_v_371,
  controller_v_370, controller_pnr_1, controller_v_355, controller_v_354,
  controller_pnr, p_controller_c_ar2, p_controller_c_ar1,
  p_controller_c_per2, p_controller_c_per1, p_controller_c_luz2,
  p_controller_c_luz1, p_controller_c_jan, p_controller_c_pc,
  p_controller_c_rot, p_controller_c_porta,
  &Controller_controller__controller_controller_controller_c_porta_out_st);
  _out->controller_c_porta = Controller_controller__controller_controller_controller_c_porta_out_st.controller_c_porta;
  Controller_controller__controller_controller_controller_c_rot_step(
  controller_shift_turno, controller_abre_porta, controller_p_arrived,
  controller_ck_1, controller_pnr_8, controller_ck_19_1, controller_pnr_7,
  controller_ck_21_1, controller_pnr_6, controller_ck_23_1, controller_pnr_5,
  controller_ck_25_1, controller_pnr_4, controller_ck_27_1, controller_pnr_3,
  controller_v_387, controller_v_386, controller_pnr_2, controller_v_371,
  controller_v_370, controller_pnr_1, controller_v_355, controller_v_354,
  controller_pnr, p_controller_c_ar2, p_controller_c_ar1,
  p_controller_c_per2, p_controller_c_per1, p_controller_c_luz2,
  p_controller_c_luz1, p_controller_c_jan, p_controller_c_pc,
  p_controller_c_rot, p_controller_c_porta, _out->controller_c_porta,
  &Controller_controller__controller_controller_controller_c_rot_out_st);
  _out->controller_c_rot = Controller_controller__controller_controller_controller_c_rot_out_st.controller_c_rot;
  Controller_controller__controller_controller_controller_c_pc_step(controller_shift_turno,
                                                                    controller_abre_porta,
                                                                    controller_p_arrived,
                                                                    controller_ck_1,
                                                                    controller_pnr_8,
                                                                    controller_ck_19_1,
                                                                    controller_pnr_7,
                                                                    controller_ck_21_1,
                                                                    controller_pnr_6,
                                                                    controller_ck_23_1,
                                                                    controller_pnr_5,
                                                                    controller_ck_25_1,
                                                                    controller_pnr_4,
                                                                    controller_ck_27_1,
                                                                    controller_pnr_3,
                                                                    controller_v_387,
                                                                    controller_v_386,
                                                                    controller_pnr_2,
                                                                    controller_v_371,
                                                                    controller_v_370,
                                                                    controller_pnr_1,
                                                                    controller_v_355,
                                                                    controller_v_354,
                                                                    controller_pnr,
                                                                    p_controller_c_ar2,
                                                                    p_controller_c_ar1,
                                                                    p_controller_c_per2,
                                                                    p_controller_c_per1,
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
  controller_shift_turno, controller_abre_porta, controller_p_arrived,
  controller_ck_1, controller_pnr_8, controller_ck_19_1, controller_pnr_7,
  controller_ck_21_1, controller_pnr_6, controller_ck_23_1, controller_pnr_5,
  controller_ck_25_1, controller_pnr_4, controller_ck_27_1, controller_pnr_3,
  controller_v_387, controller_v_386, controller_pnr_2, controller_v_371,
  controller_v_370, controller_pnr_1, controller_v_355, controller_v_354,
  controller_pnr, p_controller_c_ar2, p_controller_c_ar1,
  p_controller_c_per2, p_controller_c_per1, p_controller_c_luz2,
  p_controller_c_luz1, p_controller_c_jan, p_controller_c_pc,
  p_controller_c_rot, p_controller_c_porta, _out->controller_c_pc,
  _out->controller_c_rot, _out->controller_c_porta,
  &Controller_controller__controller_controller_controller_c_jan_out_st);
  _out->controller_c_jan = Controller_controller__controller_controller_controller_c_jan_out_st.controller_c_jan;
  Controller_controller__controller_controller_controller_c_luz1_step(
  controller_shift_turno, controller_abre_porta, controller_p_arrived,
  controller_ck_1, controller_pnr_8, controller_ck_19_1, controller_pnr_7,
  controller_ck_21_1, controller_pnr_6, controller_ck_23_1, controller_pnr_5,
  controller_ck_25_1, controller_pnr_4, controller_ck_27_1, controller_pnr_3,
  controller_v_387, controller_v_386, controller_pnr_2, controller_v_371,
  controller_v_370, controller_pnr_1, controller_v_355, controller_v_354,
  controller_pnr, p_controller_c_ar2, p_controller_c_ar1,
  p_controller_c_per2, p_controller_c_per1, p_controller_c_luz2,
  p_controller_c_luz1, p_controller_c_jan, p_controller_c_pc,
  p_controller_c_rot, p_controller_c_porta, _out->controller_c_jan,
  _out->controller_c_pc, _out->controller_c_rot, _out->controller_c_porta,
  &Controller_controller__controller_controller_controller_c_luz1_out_st);
  _out->controller_c_luz1 = Controller_controller__controller_controller_controller_c_luz1_out_st.controller_c_luz1;
  Controller_controller__controller_controller_controller_c_luz2_step(
  controller_shift_turno, controller_abre_porta, controller_p_arrived,
  controller_ck_1, controller_pnr_8, controller_ck_19_1, controller_pnr_7,
  controller_ck_21_1, controller_pnr_6, controller_ck_23_1, controller_pnr_5,
  controller_ck_25_1, controller_pnr_4, controller_ck_27_1, controller_pnr_3,
  controller_v_387, controller_v_386, controller_pnr_2, controller_v_371,
  controller_v_370, controller_pnr_1, controller_v_355, controller_v_354,
  controller_pnr, p_controller_c_ar2, p_controller_c_ar1,
  p_controller_c_per2, p_controller_c_per1, p_controller_c_luz2,
  p_controller_c_luz1, p_controller_c_jan, p_controller_c_pc,
  p_controller_c_rot, p_controller_c_porta, _out->controller_c_luz1,
  _out->controller_c_jan, _out->controller_c_pc, _out->controller_c_rot,
  _out->controller_c_porta,
  &Controller_controller__controller_controller_controller_c_luz2_out_st);
  _out->controller_c_luz2 = Controller_controller__controller_controller_controller_c_luz2_out_st.controller_c_luz2;
  Controller_controller__controller_controller_controller_c_per1_step(
  controller_shift_turno, controller_abre_porta, controller_p_arrived,
  controller_ck_1, controller_pnr_8, controller_ck_19_1, controller_pnr_7,
  controller_ck_21_1, controller_pnr_6, controller_ck_23_1, controller_pnr_5,
  controller_ck_25_1, controller_pnr_4, controller_ck_27_1, controller_pnr_3,
  controller_v_387, controller_v_386, controller_pnr_2, controller_v_371,
  controller_v_370, controller_pnr_1, controller_v_355, controller_v_354,
  controller_pnr, p_controller_c_ar2, p_controller_c_ar1,
  p_controller_c_per2, p_controller_c_per1, p_controller_c_luz2,
  p_controller_c_luz1, p_controller_c_jan, p_controller_c_pc,
  p_controller_c_rot, p_controller_c_porta, _out->controller_c_luz2,
  _out->controller_c_luz1, _out->controller_c_jan, _out->controller_c_pc,
  _out->controller_c_rot, _out->controller_c_porta,
  &Controller_controller__controller_controller_controller_c_per1_out_st);
  _out->controller_c_per1 = Controller_controller__controller_controller_controller_c_per1_out_st.controller_c_per1;
  Controller_controller__controller_controller_controller_c_per2_step(
  controller_shift_turno, controller_abre_porta, controller_p_arrived,
  controller_ck_1, controller_pnr_8, controller_ck_19_1, controller_pnr_7,
  controller_ck_21_1, controller_pnr_6, controller_ck_23_1, controller_pnr_5,
  controller_ck_25_1, controller_pnr_4, controller_ck_27_1, controller_pnr_3,
  controller_v_387, controller_v_386, controller_pnr_2, controller_v_371,
  controller_v_370, controller_pnr_1, controller_v_355, controller_v_354,
  controller_pnr, p_controller_c_ar2, p_controller_c_ar1,
  p_controller_c_per2, p_controller_c_per1, p_controller_c_luz2,
  p_controller_c_luz1, p_controller_c_jan, p_controller_c_pc,
  p_controller_c_rot, p_controller_c_porta, _out->controller_c_per1,
  _out->controller_c_luz2, _out->controller_c_luz1, _out->controller_c_jan,
  _out->controller_c_pc, _out->controller_c_rot, _out->controller_c_porta,
  &Controller_controller__controller_controller_controller_c_per2_out_st);
  _out->controller_c_per2 = Controller_controller__controller_controller_controller_c_per2_out_st.controller_c_per2;
  Controller_controller__controller_controller_controller_c_ar1_step(
  controller_shift_turno, controller_abre_porta, controller_p_arrived,
  controller_ck_1, controller_pnr_8, controller_ck_19_1, controller_pnr_7,
  controller_ck_21_1, controller_pnr_6, controller_ck_23_1, controller_pnr_5,
  controller_ck_25_1, controller_pnr_4, controller_ck_27_1, controller_pnr_3,
  controller_v_387, controller_v_386, controller_pnr_2, controller_v_371,
  controller_v_370, controller_pnr_1, controller_v_355, controller_v_354,
  controller_pnr, p_controller_c_ar2, p_controller_c_ar1,
  p_controller_c_per2, p_controller_c_per1, p_controller_c_luz2,
  p_controller_c_luz1, p_controller_c_jan, p_controller_c_pc,
  p_controller_c_rot, p_controller_c_porta, _out->controller_c_per2,
  _out->controller_c_per1, _out->controller_c_luz2, _out->controller_c_luz1,
  _out->controller_c_jan, _out->controller_c_pc, _out->controller_c_rot,
  _out->controller_c_porta,
  &Controller_controller__controller_controller_controller_c_ar1_out_st);
  _out->controller_c_ar1 = Controller_controller__controller_controller_controller_c_ar1_out_st.controller_c_ar1;
  Controller_controller__controller_controller_controller_c_ar2_step(
  controller_shift_turno, controller_abre_porta, controller_p_arrived,
  controller_ck_1, controller_pnr_8, controller_ck_19_1, controller_pnr_7,
  controller_ck_21_1, controller_pnr_6, controller_ck_23_1, controller_pnr_5,
  controller_ck_25_1, controller_pnr_4, controller_ck_27_1, controller_pnr_3,
  controller_v_387, controller_v_386, controller_pnr_2, controller_v_371,
  controller_v_370, controller_pnr_1, controller_v_355, controller_v_354,
  controller_pnr, p_controller_c_ar2, p_controller_c_ar1,
  p_controller_c_per2, p_controller_c_per1, p_controller_c_luz2,
  p_controller_c_luz1, p_controller_c_jan, p_controller_c_pc,
  p_controller_c_rot, p_controller_c_porta, _out->controller_c_ar1,
  _out->controller_c_per2, _out->controller_c_per1, _out->controller_c_luz2,
  _out->controller_c_luz1, _out->controller_c_jan, _out->controller_c_pc,
  _out->controller_c_rot, _out->controller_c_porta,
  &Controller_controller__controller_controller_controller_c_ar2_out_st);
  _out->controller_c_ar2 = Controller_controller__controller_controller_controller_c_ar2_out_st.controller_c_ar2;
}

