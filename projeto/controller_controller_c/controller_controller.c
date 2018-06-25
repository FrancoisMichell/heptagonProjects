/* --- Generated the 25/6/2018 at 10:48 --- */
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
  int controller_pnr_3, int controller_v_372, int controller_v_371,
  int controller_pnr_2, int controller_v_356, int controller_v_355,
  int controller_pnr_1, int controller_v_340, int controller_v_339,
  int controller_pnr, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_per2, int p_controller_c_per1, int p_controller_c_luz2,
  int p_controller_c_luz1, int p_controller_c_jan, int p_controller_c_pc,
  int p_controller_c_rot, int p_controller_c_porta, int controller_c_ar1,
  int controller_c_per2, int controller_c_per1, int controller_c_luz2,
  int controller_c_luz1, int controller_c_jan, int controller_c_pc,
  int controller_c_rot, int controller_c_porta,
  Controller_controller__controller_controller_controller_c_ar2_out* _out) {
  
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
  sub_13 = false;
  if (controller_v_340) {
    sub_12 = false;
    v_22 = sub_13;
  } else {
    sub_12 = sub_13;
    v_22 = false;
  };
  if (controller_v_339) {
    sub_14 = v_22;
  } else {
    sub_14 = false;
  };
  if (controller_c_ar1) {
    sub_11 = sub_12;
  } else {
    sub_11 = sub_14;
  };
  sub_10 = sub_11;
  if (controller_c_porta) {
    sub_9 = false;
  } else {
    sub_9 = sub_10;
  };
  if (controller_p_arrived) {
    v_23 = sub_9;
    sub_8 = false;
  } else {
    v_23 = false;
    sub_8 = sub_9;
  };
  if (controller_ck_23_1) {
    sub_7 = v_23;
  } else {
    sub_7 = sub_8;
  };
  sub_19 = sub_13;
  sub_18 = sub_19;
  if (controller_c_porta) {
    sub_17 = false;
  } else {
    sub_17 = sub_18;
  };
  if (controller_p_arrived) {
    v_21 = sub_17;
    sub_16 = false;
  } else {
    v_21 = false;
    sub_16 = sub_17;
  };
  if (controller_ck_23_1) {
    sub_15 = v_21;
  } else {
    sub_15 = sub_16;
  };
  if (controller_shift_turno) {
    v_24 = sub_15;
    sub_6 = sub_7;
  } else {
    v_24 = sub_7;
    sub_6 = sub_15;
  };
  if (controller_ck_1) {
    sub_5 = v_24;
  } else {
    sub_5 = sub_6;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  if (controller_c_ar1) {
    sub_31 = sub_14;
  } else {
    sub_31 = sub_12;
  };
  if (controller_c_per2) {
    sub_30 = false;
  } else {
    sub_30 = sub_31;
  };
  sub_32 = sub_31;
  if (controller_v_356) {
    v_17 = sub_30;
  } else {
    v_17 = sub_32;
  };
  if (controller_c_per1) {
    v_18 = false;
  } else {
    v_18 = v_17;
  };
  if (controller_v_356) {
    v_16 = sub_32;
    v_15 = sub_32;
  } else {
    v_16 = false;
    v_15 = sub_30;
  };
  if (controller_c_per1) {
    sub_29 = v_15;
  } else {
    sub_29 = v_16;
  };
  if (controller_v_355) {
    sub_28 = v_18;
  } else {
    sub_28 = sub_29;
  };
  if (controller_c_porta) {
    sub_27 = false;
  } else {
    sub_27 = sub_28;
  };
  if (controller_p_arrived) {
    v_19 = sub_9;
    sub_26 = sub_27;
  } else {
    v_19 = sub_27;
    sub_26 = sub_9;
  };
  if (controller_ck_23_1) {
    sub_25 = v_19;
  } else {
    sub_25 = sub_26;
  };
  sub_35 = sub_28;
  if (controller_p_arrived) {
    v_14 = sub_17;
    sub_34 = sub_35;
  } else {
    v_14 = sub_35;
    sub_34 = sub_17;
  };
  if (controller_ck_23_1) {
    sub_33 = v_14;
  } else {
    sub_33 = sub_34;
  };
  if (controller_shift_turno) {
    v_20 = sub_33;
    sub_24 = sub_25;
  } else {
    v_20 = sub_25;
    sub_24 = sub_33;
  };
  if (controller_ck_1) {
    sub_23 = v_20;
  } else {
    sub_23 = sub_24;
  };
  if (controller_v_372) {
    v_25 = sub_23;
    sub_22 = sub_5;
  } else {
    v_25 = sub_5;
    sub_22 = sub_23;
  };
  if (controller_c_luz1) {
    v_26 = v_25;
  } else {
    v_26 = sub_22;
  };
  if (controller_c_luz2) {
    v_27 = sub_4;
  } else {
    v_27 = v_26;
  };
  if (controller_c_luz1) {
    sub_21 = sub_5;
  } else {
    sub_21 = sub_22;
  };
  sub_20 = sub_21;
  if (controller_v_371) {
    v_28 = v_27;
  } else {
    v_28 = sub_20;
  };
  if (controller_c_jan) {
    v_29 = sub_3;
  } else {
    v_29 = v_28;
  };
  if (controller_c_pc) {
    v_30 = sub_2;
  } else {
    v_30 = v_29;
  };
  if (controller_c_rot) {
    sub_1 = sub_2;
  } else {
    sub_1 = v_30;
  };
  sub_47 = true;
  if (controller_v_340) {
    v_10 = sub_47;
  } else {
    v_10 = false;
  };
  if (controller_v_339) {
    v_11 = v_10;
  } else {
    v_11 = false;
  };
  if (controller_v_340) {
    sub_46 = false;
  } else {
    sub_46 = sub_47;
  };
  if (controller_v_339) {
    v_9 = sub_12;
  } else {
    v_9 = sub_46;
  };
  if (controller_c_ar1) {
    sub_45 = v_9;
  } else {
    sub_45 = v_11;
  };
  sub_44 = sub_45;
  if (controller_c_porta) {
    sub_43 = false;
  } else {
    sub_43 = sub_44;
  };
  if (controller_p_arrived) {
    v_12 = sub_43;
    sub_42 = false;
  } else {
    v_12 = false;
    sub_42 = sub_43;
  };
  if (controller_ck_23_1) {
    sub_41 = v_12;
  } else {
    sub_41 = sub_42;
  };
  sub_52 = sub_47;
  sub_51 = sub_52;
  if (controller_c_porta) {
    sub_50 = false;
  } else {
    sub_50 = sub_51;
  };
  if (controller_p_arrived) {
    v_8 = sub_50;
    sub_49 = false;
  } else {
    v_8 = false;
    sub_49 = sub_50;
  };
  if (controller_ck_23_1) {
    sub_48 = v_8;
  } else {
    sub_48 = sub_49;
  };
  if (controller_shift_turno) {
    v_13 = sub_48;
    sub_40 = sub_41;
  } else {
    v_13 = sub_41;
    sub_40 = sub_48;
  };
  if (controller_ck_1) {
    sub_39 = v_13;
  } else {
    sub_39 = sub_40;
  };
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  if (controller_v_339) {
    v_1 = sub_46;
  } else {
    v_1 = sub_12;
  };
  if (controller_c_ar1) {
    sub_64 = sub_14;
  } else {
    sub_64 = v_1;
  };
  if (controller_c_per2) {
    sub_63 = false;
  } else {
    sub_63 = sub_64;
  };
  sub_65 = sub_64;
  if (controller_v_356) {
    v_4 = sub_63;
  } else {
    v_4 = sub_65;
  };
  if (controller_c_per1) {
    v_5 = false;
  } else {
    v_5 = v_4;
  };
  if (controller_v_356) {
    v_3 = sub_65;
    v_2 = sub_65;
  } else {
    v_3 = false;
    v_2 = sub_63;
  };
  if (controller_c_per1) {
    sub_62 = v_2;
  } else {
    sub_62 = v_3;
  };
  if (controller_v_355) {
    sub_61 = v_5;
  } else {
    sub_61 = sub_62;
  };
  if (controller_c_porta) {
    sub_60 = false;
  } else {
    sub_60 = sub_61;
  };
  if (controller_p_arrived) {
    v_6 = sub_43;
    sub_59 = sub_60;
  } else {
    v_6 = sub_60;
    sub_59 = sub_43;
  };
  if (controller_ck_23_1) {
    sub_58 = v_6;
  } else {
    sub_58 = sub_59;
  };
  sub_68 = sub_61;
  if (controller_p_arrived) {
    v = sub_50;
    sub_67 = sub_68;
  } else {
    v = sub_68;
    sub_67 = sub_50;
  };
  if (controller_ck_23_1) {
    sub_66 = v;
  } else {
    sub_66 = sub_67;
  };
  if (controller_shift_turno) {
    v_7 = sub_66;
    sub_57 = sub_58;
  } else {
    v_7 = sub_58;
    sub_57 = sub_66;
  };
  if (controller_ck_1) {
    sub_56 = v_7;
  } else {
    sub_56 = sub_57;
  };
  if (controller_v_372) {
    v_31 = sub_56;
    sub_55 = sub_39;
  } else {
    v_31 = sub_39;
    sub_55 = sub_56;
  };
  if (controller_c_luz1) {
    v_32 = v_31;
  } else {
    v_32 = sub_55;
  };
  if (controller_c_luz2) {
    v_33 = sub_38;
  } else {
    v_33 = v_32;
  };
  if (controller_c_luz1) {
    sub_54 = sub_39;
  } else {
    sub_54 = sub_55;
  };
  sub_53 = sub_54;
  if (controller_v_371) {
    v_34 = v_33;
  } else {
    v_34 = sub_53;
  };
  if (controller_c_jan) {
    v_35 = sub_37;
  } else {
    v_35 = v_34;
  };
  if (controller_c_pc) {
    v_36 = sub_36;
  } else {
    v_36 = v_35;
  };
  if (controller_c_rot) {
    v_37 = sub_36;
  } else {
    v_37 = v_36;
  };
  if (p_controller_c_ar2) {
    sub_0 = v_37;
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
  int controller_pnr_3, int controller_v_372, int controller_v_371,
  int controller_pnr_2, int controller_v_356, int controller_v_355,
  int controller_pnr_1, int controller_v_340, int controller_v_339,
  int controller_pnr, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_per2, int p_controller_c_per1, int p_controller_c_luz2,
  int p_controller_c_luz1, int p_controller_c_jan, int p_controller_c_pc,
  int p_controller_c_rot, int p_controller_c_porta, int controller_c_per2,
  int controller_c_per1, int controller_c_luz2, int controller_c_luz1,
  int controller_c_jan, int controller_c_pc, int controller_c_rot,
  int controller_c_porta,
  Controller_controller__controller_controller_controller_c_ar1_out* _out) {
  
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
  sub_12 = true;
  if (controller_v_340) {
    sub_11 = false;
  } else {
    sub_11 = sub_12;
  };
  sub_13 = false;
  if (controller_v_340) {
    v_50 = sub_13;
  } else {
    v_50 = sub_12;
  };
  if (controller_v_339) {
    sub_10 = v_50;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  if (controller_c_porta) {
    sub_8 = false;
  } else {
    sub_8 = sub_9;
  };
  if (controller_p_arrived) {
    v_51 = sub_8;
    sub_7 = false;
  } else {
    v_51 = false;
    sub_7 = sub_8;
  };
  if (controller_ck_23_1) {
    sub_6 = v_51;
  } else {
    sub_6 = sub_7;
  };
  sub_18 = sub_13;
  if (controller_c_porta) {
    sub_17 = false;
  } else {
    sub_17 = sub_18;
  };
  if (controller_p_arrived) {
    v_47 = sub_17;
    sub_16 = false;
  } else {
    v_47 = false;
    sub_16 = sub_17;
  };
  if (controller_ck_23_1) {
    sub_15 = v_47;
  } else {
    sub_15 = sub_16;
  };
  sub_21 = sub_12;
  if (controller_c_porta) {
    sub_20 = false;
  } else {
    sub_20 = sub_21;
  };
  if (controller_p_arrived) {
    v_48 = sub_20;
    sub_19 = false;
  } else {
    v_48 = false;
    sub_19 = sub_20;
  };
  if (controller_ck_23_1) {
    v_49 = v_48;
  } else {
    v_49 = sub_19;
  };
  if (p_controller_c_ar1) {
    sub_14 = v_49;
  } else {
    sub_14 = sub_15;
  };
  if (controller_shift_turno) {
    v_52 = sub_14;
    sub_5 = sub_6;
  } else {
    v_52 = sub_6;
    sub_5 = sub_14;
  };
  if (controller_ck_1) {
    sub_4 = v_52;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_1 = sub_2;
  if (controller_v_340) {
    v_40 = sub_12;
    sub_34 = false;
  } else {
    v_40 = sub_13;
    sub_34 = sub_13;
  };
  if (controller_v_339) {
    sub_33 = v_40;
  } else {
    sub_33 = sub_34;
  };
  if (controller_c_per2) {
    sub_32 = false;
  } else {
    sub_32 = sub_33;
  };
  sub_35 = sub_33;
  if (controller_v_356) {
    v_43 = sub_32;
  } else {
    v_43 = sub_35;
  };
  if (controller_c_per1) {
    v_44 = false;
  } else {
    v_44 = v_43;
  };
  if (controller_v_356) {
    v_42 = sub_35;
    v_41 = sub_35;
  } else {
    v_42 = false;
    v_41 = sub_32;
  };
  if (controller_c_per1) {
    sub_31 = v_41;
  } else {
    sub_31 = v_42;
  };
  if (controller_v_355) {
    sub_30 = v_44;
  } else {
    sub_30 = sub_31;
  };
  if (controller_c_porta) {
    sub_29 = false;
  } else {
    sub_29 = sub_30;
  };
  if (controller_p_arrived) {
    v_45 = sub_8;
    sub_28 = sub_29;
  } else {
    v_45 = sub_29;
    sub_28 = sub_8;
  };
  if (controller_ck_23_1) {
    sub_27 = v_45;
  } else {
    sub_27 = sub_28;
  };
  sub_39 = sub_30;
  if (controller_p_arrived) {
    v_38 = sub_20;
    v = sub_17;
    sub_38 = sub_39;
  } else {
    v_38 = sub_39;
    v = sub_39;
    sub_38 = sub_17;
  };
  if (controller_ck_23_1) {
    sub_37 = v;
  } else {
    sub_37 = sub_38;
  };
  if (controller_p_arrived) {
    sub_40 = sub_39;
  } else {
    sub_40 = sub_20;
  };
  if (controller_ck_23_1) {
    v_39 = v_38;
  } else {
    v_39 = sub_40;
  };
  if (p_controller_c_ar1) {
    sub_36 = v_39;
  } else {
    sub_36 = sub_37;
  };
  if (controller_shift_turno) {
    v_46 = sub_36;
    sub_26 = sub_27;
  } else {
    v_46 = sub_27;
    sub_26 = sub_36;
  };
  if (controller_ck_1) {
    sub_25 = v_46;
  } else {
    sub_25 = sub_26;
  };
  if (controller_v_372) {
    v_53 = sub_25;
    sub_24 = sub_4;
  } else {
    v_53 = sub_4;
    sub_24 = sub_25;
  };
  if (controller_c_luz1) {
    v_54 = v_53;
  } else {
    v_54 = sub_24;
  };
  if (controller_c_luz2) {
    v_55 = sub_3;
  } else {
    v_55 = v_54;
  };
  if (controller_c_luz1) {
    sub_23 = sub_4;
  } else {
    sub_23 = sub_24;
  };
  sub_22 = sub_23;
  if (controller_v_371) {
    v_56 = v_55;
  } else {
    v_56 = sub_22;
  };
  if (controller_c_jan) {
    v_57 = sub_2;
  } else {
    v_57 = v_56;
  };
  if (controller_c_pc) {
    v_58 = sub_1;
  } else {
    v_58 = v_57;
  };
  if (controller_c_rot) {
    sub_0 = sub_1;
  } else {
    sub_0 = v_58;
  };
  _out->controller_c_ar1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_per2_step(
  int controller_shift_turno, int controller_abre_porta,
  int controller_p_arrived, int controller_ck_1, int controller_pnr_8,
  int controller_ck_19_1, int controller_pnr_7, int controller_ck_21_1,
  int controller_pnr_6, int controller_ck_23_1, int controller_pnr_5,
  int controller_ck_25_1, int controller_pnr_4, int controller_ck_27_1,
  int controller_pnr_3, int controller_v_372, int controller_v_371,
  int controller_pnr_2, int controller_v_356, int controller_v_355,
  int controller_pnr_1, int controller_v_340, int controller_v_339,
  int controller_pnr, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_per2, int p_controller_c_per1, int p_controller_c_luz2,
  int p_controller_c_luz1, int p_controller_c_jan, int p_controller_c_pc,
  int p_controller_c_rot, int p_controller_c_porta, int controller_c_per1,
  int controller_c_luz2, int controller_c_luz1, int controller_c_jan,
  int controller_c_pc, int controller_c_rot, int controller_c_porta,
  Controller_controller__controller_controller_controller_c_per2_out* _out) {
  
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
  sub_12 = false;
  if (controller_v_340) {
    sub_11 = false;
  } else {
    sub_11 = sub_12;
  };
  if (controller_v_339) {
    sub_10 = sub_12;
  } else {
    sub_10 = sub_11;
  };
  if (controller_c_porta) {
    sub_9 = false;
  } else {
    sub_9 = sub_10;
  };
  if (controller_p_arrived) {
    v_74 = sub_9;
    sub_8 = false;
  } else {
    v_74 = false;
    sub_8 = sub_9;
  };
  if (controller_ck_23_1) {
    sub_7 = v_74;
  } else {
    sub_7 = sub_8;
  };
  if (controller_c_porta) {
    sub_15 = false;
  } else {
    sub_15 = sub_12;
  };
  if (controller_p_arrived) {
    v_73 = sub_15;
    sub_14 = false;
  } else {
    v_73 = false;
    sub_14 = sub_15;
  };
  if (controller_ck_23_1) {
    sub_13 = v_73;
  } else {
    sub_13 = sub_14;
  };
  if (controller_shift_turno) {
    v_75 = sub_13;
    sub_6 = sub_7;
  } else {
    v_75 = sub_7;
    sub_6 = sub_13;
  };
  if (controller_ck_1) {
    sub_5 = v_75;
  } else {
    sub_5 = sub_6;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  if (controller_c_per1) {
    v_70 = false;
  } else {
    v_70 = sub_10;
  };
  if (controller_v_356) {
    v_69 = sub_10;
  } else {
    v_69 = false;
  };
  if (controller_c_per1) {
    sub_25 = sub_10;
  } else {
    sub_25 = v_69;
  };
  if (controller_v_355) {
    sub_24 = v_70;
  } else {
    sub_24 = sub_25;
  };
  if (controller_c_porta) {
    sub_23 = false;
  } else {
    sub_23 = sub_24;
  };
  if (controller_p_arrived) {
    v_71 = sub_9;
    sub_22 = sub_23;
  } else {
    v_71 = sub_23;
    sub_22 = sub_9;
  };
  if (controller_ck_23_1) {
    sub_21 = v_71;
  } else {
    sub_21 = sub_22;
  };
  sub_28 = sub_24;
  if (controller_p_arrived) {
    v_68 = sub_15;
    sub_27 = sub_28;
  } else {
    v_68 = sub_28;
    sub_27 = sub_15;
  };
  if (controller_ck_23_1) {
    sub_26 = v_68;
  } else {
    sub_26 = sub_27;
  };
  if (controller_shift_turno) {
    v_72 = sub_26;
    sub_20 = sub_21;
  } else {
    v_72 = sub_21;
    sub_20 = sub_26;
  };
  if (controller_ck_1) {
    sub_19 = v_72;
  } else {
    sub_19 = sub_20;
  };
  if (controller_v_372) {
    v_76 = sub_19;
    sub_18 = sub_5;
  } else {
    v_76 = sub_5;
    sub_18 = sub_19;
  };
  if (controller_c_luz1) {
    v_77 = v_76;
  } else {
    v_77 = sub_18;
  };
  if (controller_c_luz2) {
    v_78 = sub_4;
  } else {
    v_78 = v_77;
  };
  if (controller_c_luz1) {
    sub_17 = sub_5;
  } else {
    sub_17 = sub_18;
  };
  sub_16 = sub_17;
  if (controller_v_371) {
    v_79 = v_78;
  } else {
    v_79 = sub_16;
  };
  if (controller_c_jan) {
    v_80 = sub_3;
  } else {
    v_80 = v_79;
  };
  if (controller_c_pc) {
    v_81 = sub_2;
  } else {
    v_81 = v_80;
  };
  if (controller_c_rot) {
    sub_1 = sub_2;
  } else {
    sub_1 = v_81;
  };
  sub_39 = true;
  if (controller_v_340) {
    sub_38 = false;
  } else {
    sub_38 = sub_39;
  };
  if (controller_v_339) {
    sub_37 = sub_39;
  } else {
    sub_37 = sub_38;
  };
  if (controller_c_porta) {
    sub_36 = false;
  } else {
    sub_36 = sub_37;
  };
  if (controller_p_arrived) {
    v_66 = sub_36;
    sub_35 = false;
  } else {
    v_66 = false;
    sub_35 = sub_36;
  };
  if (controller_ck_23_1) {
    sub_34 = v_66;
  } else {
    sub_34 = sub_35;
  };
  if (controller_c_porta) {
    sub_42 = false;
  } else {
    sub_42 = sub_39;
  };
  if (controller_p_arrived) {
    v_65 = sub_42;
    sub_41 = false;
  } else {
    v_65 = false;
    sub_41 = sub_42;
  };
  if (controller_ck_23_1) {
    sub_40 = v_65;
  } else {
    sub_40 = sub_41;
  };
  if (controller_shift_turno) {
    v_67 = sub_40;
    sub_33 = sub_34;
  } else {
    v_67 = sub_34;
    sub_33 = sub_40;
  };
  if (controller_ck_1) {
    sub_32 = v_67;
  } else {
    sub_32 = sub_33;
  };
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (controller_v_356) {
    v_61 = sub_10;
  } else {
    v_61 = sub_37;
  };
  if (controller_c_per1) {
    v_62 = false;
  } else {
    v_62 = v_61;
  };
  if (controller_v_356) {
    v_60 = sub_37;
    v_59 = sub_37;
  } else {
    v_60 = false;
    v_59 = sub_10;
  };
  if (controller_c_per1) {
    sub_52 = v_59;
  } else {
    sub_52 = v_60;
  };
  if (controller_v_355) {
    sub_51 = v_62;
  } else {
    sub_51 = sub_52;
  };
  if (controller_c_porta) {
    sub_50 = false;
  } else {
    sub_50 = sub_51;
  };
  if (controller_p_arrived) {
    v_63 = sub_36;
    sub_49 = sub_50;
  } else {
    v_63 = sub_50;
    sub_49 = sub_36;
  };
  if (controller_ck_23_1) {
    sub_48 = v_63;
  } else {
    sub_48 = sub_49;
  };
  sub_55 = sub_51;
  if (controller_p_arrived) {
    v = sub_42;
    sub_54 = sub_55;
  } else {
    v = sub_55;
    sub_54 = sub_42;
  };
  if (controller_ck_23_1) {
    sub_53 = v;
  } else {
    sub_53 = sub_54;
  };
  if (controller_shift_turno) {
    v_64 = sub_53;
    sub_47 = sub_48;
  } else {
    v_64 = sub_48;
    sub_47 = sub_53;
  };
  if (controller_ck_1) {
    sub_46 = v_64;
  } else {
    sub_46 = sub_47;
  };
  if (controller_v_372) {
    v_82 = sub_46;
    sub_45 = sub_32;
  } else {
    v_82 = sub_32;
    sub_45 = sub_46;
  };
  if (controller_c_luz1) {
    v_83 = v_82;
  } else {
    v_83 = sub_45;
  };
  if (controller_c_luz2) {
    v_84 = sub_31;
  } else {
    v_84 = v_83;
  };
  if (controller_c_luz1) {
    sub_44 = sub_32;
  } else {
    sub_44 = sub_45;
  };
  sub_43 = sub_44;
  if (controller_v_371) {
    v_85 = v_84;
  } else {
    v_85 = sub_43;
  };
  if (controller_c_jan) {
    v_86 = sub_30;
  } else {
    v_86 = v_85;
  };
  if (controller_c_pc) {
    v_87 = sub_29;
  } else {
    v_87 = v_86;
  };
  if (controller_c_rot) {
    v_88 = sub_29;
  } else {
    v_88 = v_87;
  };
  if (p_controller_c_per2) {
    sub_0 = v_88;
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
  int controller_pnr_3, int controller_v_372, int controller_v_371,
  int controller_pnr_2, int controller_v_356, int controller_v_355,
  int controller_pnr_1, int controller_v_340, int controller_v_339,
  int controller_pnr, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_per2, int p_controller_c_per1, int p_controller_c_luz2,
  int p_controller_c_luz1, int p_controller_c_jan, int p_controller_c_pc,
  int p_controller_c_rot, int p_controller_c_porta, int controller_c_luz2,
  int controller_c_luz1, int controller_c_jan, int controller_c_pc,
  int controller_c_rot, int controller_c_porta,
  Controller_controller__controller_controller_controller_c_per1_out* _out) {
  
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
  sub_12 = false;
  if (controller_v_340) {
    sub_11 = false;
  } else {
    sub_11 = sub_12;
  };
  if (controller_v_339) {
    sub_10 = sub_12;
  } else {
    sub_10 = sub_11;
  };
  if (controller_c_porta) {
    sub_9 = false;
  } else {
    sub_9 = sub_10;
  };
  if (controller_p_arrived) {
    v_98 = sub_9;
    sub_8 = false;
  } else {
    v_98 = false;
    sub_8 = sub_9;
  };
  if (controller_ck_23_1) {
    sub_7 = v_98;
  } else {
    sub_7 = sub_8;
  };
  if (controller_c_porta) {
    sub_15 = false;
  } else {
    sub_15 = sub_12;
  };
  if (controller_p_arrived) {
    v_97 = sub_15;
    sub_14 = false;
  } else {
    v_97 = false;
    sub_14 = sub_15;
  };
  if (controller_ck_23_1) {
    sub_13 = v_97;
  } else {
    sub_13 = sub_14;
  };
  if (controller_shift_turno) {
    v_99 = sub_13;
    sub_6 = sub_7;
  } else {
    v_99 = sub_7;
    sub_6 = sub_13;
  };
  if (controller_ck_1) {
    sub_5 = v_99;
  } else {
    sub_5 = sub_6;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_28 = true;
  if (controller_v_340) {
    sub_27 = false;
  } else {
    sub_27 = sub_28;
  };
  if (controller_v_339) {
    sub_26 = sub_28;
  } else {
    sub_26 = sub_27;
  };
  if (controller_v_356) {
    sub_25 = sub_10;
  } else {
    sub_25 = sub_26;
  };
  if (controller_v_355) {
    sub_24 = sub_10;
  } else {
    sub_24 = sub_25;
  };
  if (controller_c_porta) {
    sub_23 = false;
  } else {
    sub_23 = sub_24;
  };
  if (controller_p_arrived) {
    v_95 = sub_9;
    sub_22 = sub_23;
  } else {
    v_95 = sub_23;
    sub_22 = sub_9;
  };
  if (controller_ck_23_1) {
    sub_21 = v_95;
  } else {
    sub_21 = sub_22;
  };
  sub_31 = sub_24;
  if (controller_p_arrived) {
    v_94 = sub_15;
    sub_30 = sub_31;
  } else {
    v_94 = sub_31;
    sub_30 = sub_15;
  };
  if (controller_ck_23_1) {
    sub_29 = v_94;
  } else {
    sub_29 = sub_30;
  };
  if (controller_shift_turno) {
    v_96 = sub_29;
    sub_20 = sub_21;
  } else {
    v_96 = sub_21;
    sub_20 = sub_29;
  };
  if (controller_ck_1) {
    sub_19 = v_96;
  } else {
    sub_19 = sub_20;
  };
  if (controller_v_372) {
    v_100 = sub_19;
    sub_18 = sub_5;
  } else {
    v_100 = sub_5;
    sub_18 = sub_19;
  };
  if (controller_c_luz1) {
    v_101 = v_100;
  } else {
    v_101 = sub_18;
  };
  if (controller_c_luz2) {
    v_102 = sub_4;
  } else {
    v_102 = v_101;
  };
  if (controller_c_luz1) {
    sub_17 = sub_5;
  } else {
    sub_17 = sub_18;
  };
  sub_16 = sub_17;
  if (controller_v_371) {
    v_103 = v_102;
  } else {
    v_103 = sub_16;
  };
  if (controller_c_jan) {
    v_104 = sub_3;
  } else {
    v_104 = v_103;
  };
  if (controller_c_pc) {
    v_105 = sub_2;
  } else {
    v_105 = v_104;
  };
  if (controller_c_rot) {
    sub_1 = sub_2;
  } else {
    sub_1 = v_105;
  };
  if (controller_c_porta) {
    sub_39 = false;
  } else {
    sub_39 = sub_26;
  };
  if (controller_p_arrived) {
    v_92 = sub_39;
    sub_38 = false;
  } else {
    v_92 = false;
    sub_38 = sub_39;
  };
  if (controller_ck_23_1) {
    sub_37 = v_92;
  } else {
    sub_37 = sub_38;
  };
  if (controller_c_porta) {
    sub_42 = false;
  } else {
    sub_42 = sub_28;
  };
  if (controller_p_arrived) {
    v_91 = sub_42;
    sub_41 = false;
  } else {
    v_91 = false;
    sub_41 = sub_42;
  };
  if (controller_ck_23_1) {
    sub_40 = v_91;
  } else {
    sub_40 = sub_41;
  };
  if (controller_shift_turno) {
    v_93 = sub_40;
    sub_36 = sub_37;
  } else {
    v_93 = sub_37;
    sub_36 = sub_40;
  };
  if (controller_ck_1) {
    sub_35 = v_93;
  } else {
    sub_35 = sub_36;
  };
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  if (controller_v_355) {
    sub_51 = sub_10;
  } else {
    sub_51 = sub_26;
  };
  if (controller_c_porta) {
    sub_50 = false;
  } else {
    sub_50 = sub_51;
  };
  if (controller_p_arrived) {
    v_89 = sub_39;
    sub_49 = sub_50;
  } else {
    v_89 = sub_50;
    sub_49 = sub_39;
  };
  if (controller_ck_23_1) {
    sub_48 = v_89;
  } else {
    sub_48 = sub_49;
  };
  sub_54 = sub_51;
  if (controller_p_arrived) {
    v = sub_42;
    sub_53 = sub_54;
  } else {
    v = sub_54;
    sub_53 = sub_42;
  };
  if (controller_ck_23_1) {
    sub_52 = v;
  } else {
    sub_52 = sub_53;
  };
  if (controller_shift_turno) {
    v_90 = sub_52;
    sub_47 = sub_48;
  } else {
    v_90 = sub_48;
    sub_47 = sub_52;
  };
  if (controller_ck_1) {
    sub_46 = v_90;
  } else {
    sub_46 = sub_47;
  };
  if (controller_v_372) {
    v_106 = sub_46;
    sub_45 = sub_35;
  } else {
    v_106 = sub_35;
    sub_45 = sub_46;
  };
  if (controller_c_luz1) {
    v_107 = v_106;
  } else {
    v_107 = sub_45;
  };
  if (controller_c_luz2) {
    v_108 = sub_34;
  } else {
    v_108 = v_107;
  };
  if (controller_c_luz1) {
    sub_44 = sub_35;
  } else {
    sub_44 = sub_45;
  };
  sub_43 = sub_44;
  if (controller_v_371) {
    v_109 = v_108;
  } else {
    v_109 = sub_43;
  };
  if (controller_c_jan) {
    v_110 = sub_33;
  } else {
    v_110 = v_109;
  };
  if (controller_c_pc) {
    v_111 = sub_32;
  } else {
    v_111 = v_110;
  };
  if (controller_c_rot) {
    v_112 = sub_32;
  } else {
    v_112 = v_111;
  };
  if (p_controller_c_per1) {
    sub_0 = v_112;
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
  int controller_pnr_3, int controller_v_372, int controller_v_371,
  int controller_pnr_2, int controller_v_356, int controller_v_355,
  int controller_pnr_1, int controller_v_340, int controller_v_339,
  int controller_pnr, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_per2, int p_controller_c_per1, int p_controller_c_luz2,
  int p_controller_c_luz1, int p_controller_c_jan, int p_controller_c_pc,
  int p_controller_c_rot, int p_controller_c_porta, int controller_c_luz1,
  int controller_c_jan, int controller_c_pc, int controller_c_rot,
  int controller_c_porta,
  Controller_controller__controller_controller_controller_c_luz2_out* _out) {
  
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
  sub_11 = false;
  if (controller_v_340) {
    sub_10 = false;
  } else {
    sub_10 = sub_11;
  };
  if (controller_v_339) {
    sub_9 = sub_11;
  } else {
    sub_9 = sub_10;
  };
  if (controller_c_porta) {
    sub_8 = false;
  } else {
    sub_8 = sub_9;
  };
  if (controller_p_arrived) {
    v_124 = sub_8;
    sub_7 = false;
  } else {
    v_124 = false;
    sub_7 = sub_8;
  };
  if (controller_ck_23_1) {
    sub_6 = v_124;
  } else {
    sub_6 = sub_7;
  };
  if (controller_c_porta) {
    sub_14 = false;
  } else {
    sub_14 = sub_11;
  };
  if (controller_p_arrived) {
    v_123 = sub_14;
    sub_13 = false;
  } else {
    v_123 = false;
    sub_13 = sub_14;
  };
  if (controller_ck_23_1) {
    sub_12 = v_123;
  } else {
    sub_12 = sub_13;
  };
  if (controller_shift_turno) {
    v_125 = sub_12;
    sub_5 = sub_6;
  } else {
    v_125 = sub_6;
    sub_5 = sub_12;
  };
  if (controller_ck_1) {
    sub_4 = v_125;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_19 = sub_8;
  sub_22 = sub_9;
  if (controller_p_arrived) {
    v_121 = sub_14;
    sub_21 = sub_22;
  } else {
    v_121 = sub_22;
    sub_21 = sub_14;
  };
  if (controller_ck_23_1) {
    sub_20 = v_121;
  } else {
    sub_20 = sub_21;
  };
  if (controller_shift_turno) {
    v_122 = sub_20;
    sub_18 = sub_19;
  } else {
    v_122 = sub_19;
    sub_18 = sub_20;
  };
  if (controller_ck_1) {
    sub_17 = v_122;
  } else {
    sub_17 = sub_18;
  };
  if (controller_v_372) {
    v_126 = sub_17;
    sub_16 = sub_4;
  } else {
    v_126 = sub_4;
    sub_16 = sub_17;
  };
  if (controller_c_luz1) {
    v_127 = v_126;
    sub_15 = sub_4;
  } else {
    v_127 = sub_16;
    sub_15 = sub_16;
  };
  if (controller_v_371) {
    v_128 = v_127;
  } else {
    v_128 = sub_15;
  };
  if (controller_c_jan) {
    v_129 = sub_3;
  } else {
    v_129 = v_128;
  };
  if (controller_c_pc) {
    v_130 = sub_2;
  } else {
    v_130 = v_129;
  };
  if (controller_c_rot) {
    sub_1 = sub_2;
  } else {
    sub_1 = v_130;
  };
  sub_32 = true;
  if (controller_v_340) {
    sub_31 = false;
  } else {
    sub_31 = sub_32;
  };
  if (controller_v_339) {
    sub_30 = sub_32;
  } else {
    sub_30 = sub_31;
  };
  if (controller_c_porta) {
    sub_29 = false;
  } else {
    sub_29 = sub_30;
  };
  if (controller_p_arrived) {
    v_119 = sub_29;
    sub_28 = false;
  } else {
    v_119 = false;
    sub_28 = sub_29;
  };
  if (controller_ck_23_1) {
    sub_27 = v_119;
  } else {
    sub_27 = sub_28;
  };
  if (controller_c_porta) {
    sub_35 = false;
  } else {
    sub_35 = sub_32;
  };
  if (controller_p_arrived) {
    v_118 = sub_35;
    sub_34 = false;
  } else {
    v_118 = false;
    sub_34 = sub_35;
  };
  if (controller_ck_23_1) {
    sub_33 = v_118;
  } else {
    sub_33 = sub_34;
  };
  if (controller_shift_turno) {
    v_120 = sub_33;
    sub_26 = sub_27;
  } else {
    v_120 = sub_27;
    sub_26 = sub_33;
  };
  if (controller_ck_1) {
    sub_25 = v_120;
  } else {
    sub_25 = sub_26;
  };
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_39 = sub_29;
  sub_42 = sub_30;
  if (controller_p_arrived) {
    v_115 = sub_35;
    sub_41 = sub_42;
  } else {
    v_115 = sub_42;
    sub_41 = sub_35;
  };
  if (controller_ck_23_1) {
    sub_40 = v_115;
  } else {
    sub_40 = sub_41;
  };
  if (controller_shift_turno) {
    v_116 = sub_40;
    sub_38 = sub_39;
  } else {
    v_116 = sub_39;
    sub_38 = sub_40;
  };
  if (controller_ck_1) {
    sub_37 = v_116;
  } else {
    sub_37 = sub_38;
  };
  if (controller_v_372) {
    v_117 = sub_25;
  } else {
    v_117 = sub_37;
  };
  if (controller_c_luz1) {
    sub_36 = sub_25;
  } else {
    sub_36 = v_117;
  };
  if (controller_p_arrived) {
    v_113 = sub_29;
    sub_46 = sub_8;
  } else {
    v_113 = sub_8;
    sub_46 = sub_29;
  };
  if (controller_ck_23_1) {
    sub_45 = v_113;
  } else {
    sub_45 = sub_46;
  };
  if (controller_p_arrived) {
    v = sub_35;
    sub_48 = sub_22;
  } else {
    v = sub_22;
    sub_48 = sub_35;
  };
  if (controller_ck_23_1) {
    sub_47 = v;
  } else {
    sub_47 = sub_48;
  };
  if (controller_shift_turno) {
    v_114 = sub_47;
    sub_44 = sub_45;
  } else {
    v_114 = sub_45;
    sub_44 = sub_47;
  };
  if (controller_ck_1) {
    sub_43 = v_114;
  } else {
    sub_43 = sub_44;
  };
  if (controller_v_372) {
    v_132 = sub_25;
    v_131 = sub_43;
  } else {
    v_132 = sub_43;
    v_131 = sub_25;
  };
  if (controller_c_luz1) {
    v_133 = v_131;
  } else {
    v_133 = v_132;
  };
  if (controller_v_371) {
    v_134 = v_133;
  } else {
    v_134 = sub_36;
  };
  if (controller_c_jan) {
    v_135 = sub_24;
  } else {
    v_135 = v_134;
  };
  if (controller_c_pc) {
    v_136 = sub_23;
  } else {
    v_136 = v_135;
  };
  if (controller_c_rot) {
    v_137 = sub_23;
  } else {
    v_137 = v_136;
  };
  if (p_controller_c_luz2) {
    sub_0 = v_137;
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
  int controller_pnr_3, int controller_v_372, int controller_v_371,
  int controller_pnr_2, int controller_v_356, int controller_v_355,
  int controller_pnr_1, int controller_v_340, int controller_v_339,
  int controller_pnr, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_per2, int p_controller_c_per1, int p_controller_c_luz2,
  int p_controller_c_luz1, int p_controller_c_jan, int p_controller_c_pc,
  int p_controller_c_rot, int p_controller_c_porta, int controller_c_jan,
  int controller_c_pc, int controller_c_rot, int controller_c_porta,
  Controller_controller__controller_controller_controller_c_luz1_out* _out) {
  
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
  sub_9 = false;
  sub_10 = true;
  if (p_controller_c_luz1) {
    sub_8 = sub_10;
  } else {
    sub_8 = sub_9;
  };
  if (controller_v_340) {
    sub_7 = false;
  } else {
    sub_7 = sub_8;
  };
  if (controller_v_339) {
    v_143 = sub_8;
  } else {
    v_143 = sub_7;
  };
  if (controller_c_porta) {
    sub_6 = false;
  } else {
    sub_6 = v_143;
  };
  if (controller_p_arrived) {
    v_144 = sub_6;
    sub_5 = false;
  } else {
    v_144 = false;
    sub_5 = sub_6;
  };
  if (controller_ck_23_1) {
    sub_4 = v_144;
  } else {
    sub_4 = sub_5;
  };
  if (controller_c_porta) {
    sub_13 = false;
  } else {
    sub_13 = sub_8;
  };
  if (controller_p_arrived) {
    v_142 = sub_13;
    sub_12 = false;
  } else {
    v_142 = false;
    sub_12 = sub_13;
  };
  if (controller_ck_23_1) {
    sub_11 = v_142;
  } else {
    sub_11 = sub_12;
  };
  if (controller_shift_turno) {
    v_145 = sub_11;
    sub_3 = sub_4;
  } else {
    v_145 = sub_4;
    sub_3 = sub_11;
  };
  if (controller_ck_1) {
    sub_2 = v_145;
  } else {
    sub_2 = sub_3;
  };
  sub_1 = sub_2;
  if (controller_v_340) {
    sub_21 = false;
  } else {
    sub_21 = sub_9;
  };
  if (controller_v_339) {
    sub_20 = sub_9;
  } else {
    sub_20 = sub_21;
  };
  if (controller_c_porta) {
    sub_19 = false;
  } else {
    sub_19 = sub_20;
  };
  if (controller_p_arrived) {
    v_140 = sub_6;
    sub_18 = sub_19;
  } else {
    v_140 = sub_19;
    sub_18 = sub_6;
  };
  if (controller_ck_23_1) {
    sub_17 = v_140;
  } else {
    sub_17 = sub_18;
  };
  sub_24 = sub_20;
  if (controller_p_arrived) {
    v_139 = sub_13;
    sub_23 = sub_24;
  } else {
    v_139 = sub_24;
    sub_23 = sub_13;
  };
  if (controller_ck_23_1) {
    sub_22 = v_139;
  } else {
    sub_22 = sub_23;
  };
  if (controller_shift_turno) {
    v_141 = sub_22;
    sub_16 = sub_17;
  } else {
    v_141 = sub_17;
    sub_16 = sub_22;
  };
  if (controller_ck_1) {
    sub_15 = v_141;
  } else {
    sub_15 = sub_16;
  };
  if (controller_v_372) {
    sub_14 = sub_2;
  } else {
    sub_14 = sub_15;
  };
  if (controller_v_340) {
    sub_30 = false;
  } else {
    sub_30 = sub_10;
  };
  if (controller_v_339) {
    sub_29 = sub_10;
  } else {
    sub_29 = sub_30;
  };
  if (controller_c_porta) {
    sub_28 = false;
  } else {
    sub_28 = sub_29;
  };
  if (controller_p_arrived) {
    v_138 = sub_6;
    sub_27 = sub_28;
  } else {
    v_138 = sub_28;
    sub_27 = sub_6;
  };
  if (controller_ck_23_1) {
    sub_26 = v_138;
  } else {
    sub_26 = sub_27;
  };
  sub_33 = sub_29;
  if (controller_p_arrived) {
    v = sub_13;
    sub_32 = sub_33;
  } else {
    v = sub_33;
    sub_32 = sub_13;
  };
  if (controller_ck_23_1) {
    sub_31 = v;
  } else {
    sub_31 = sub_32;
  };
  if (controller_shift_turno) {
    v_146 = sub_31;
    sub_25 = sub_26;
  } else {
    v_146 = sub_26;
    sub_25 = sub_31;
  };
  if (controller_ck_1) {
    v_147 = v_146;
  } else {
    v_147 = sub_25;
  };
  if (controller_v_372) {
    v_148 = v_147;
  } else {
    v_148 = sub_15;
  };
  if (controller_v_371) {
    v_149 = v_148;
  } else {
    v_149 = sub_14;
  };
  if (controller_c_jan) {
    v_150 = sub_2;
  } else {
    v_150 = v_149;
  };
  if (controller_c_pc) {
    v_151 = sub_1;
  } else {
    v_151 = v_150;
  };
  if (controller_c_rot) {
    sub_0 = sub_1;
  } else {
    sub_0 = v_151;
  };
  _out->controller_c_luz1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_jan_step(
  int controller_shift_turno, int controller_abre_porta,
  int controller_p_arrived, int controller_ck_1, int controller_pnr_8,
  int controller_ck_19_1, int controller_pnr_7, int controller_ck_21_1,
  int controller_pnr_6, int controller_ck_23_1, int controller_pnr_5,
  int controller_ck_25_1, int controller_pnr_4, int controller_ck_27_1,
  int controller_pnr_3, int controller_v_372, int controller_v_371,
  int controller_pnr_2, int controller_v_356, int controller_v_355,
  int controller_pnr_1, int controller_v_340, int controller_v_339,
  int controller_pnr, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_per2, int p_controller_c_per1, int p_controller_c_luz2,
  int p_controller_c_luz1, int p_controller_c_jan, int p_controller_c_pc,
  int p_controller_c_rot, int p_controller_c_porta, int controller_c_pc,
  int controller_c_rot, int controller_c_porta,
  Controller_controller__controller_controller_controller_c_jan_out* _out) {
  
  int v_159;
  int v_158;
  int v_157;
  int v_156;
  int v_155;
  int v_154;
  int v_153;
  int v_152;
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
  sub_8 = false;
  if (p_controller_c_jan) {
    sub_7 = true;
  } else {
    sub_7 = sub_8;
  };
  if (controller_v_340) {
    sub_6 = false;
  } else {
    sub_6 = sub_7;
  };
  if (controller_v_339) {
    v_155 = sub_7;
  } else {
    v_155 = sub_6;
  };
  if (controller_c_porta) {
    sub_5 = false;
  } else {
    sub_5 = v_155;
  };
  if (controller_p_arrived) {
    v_156 = sub_5;
    sub_4 = false;
  } else {
    v_156 = false;
    sub_4 = sub_5;
  };
  if (controller_ck_23_1) {
    sub_3 = v_156;
  } else {
    sub_3 = sub_4;
  };
  if (controller_c_porta) {
    sub_11 = false;
  } else {
    sub_11 = sub_7;
  };
  if (controller_p_arrived) {
    v_154 = sub_11;
    sub_10 = false;
  } else {
    v_154 = false;
    sub_10 = sub_11;
  };
  if (controller_ck_23_1) {
    sub_9 = v_154;
  } else {
    sub_9 = sub_10;
  };
  if (controller_shift_turno) {
    v_157 = sub_9;
    sub_2 = sub_3;
  } else {
    v_157 = sub_3;
    sub_2 = sub_9;
  };
  if (controller_ck_1) {
    sub_1 = v_157;
  } else {
    sub_1 = sub_2;
  };
  if (controller_v_340) {
    sub_19 = false;
  } else {
    sub_19 = sub_8;
  };
  if (controller_v_339) {
    sub_18 = sub_8;
  } else {
    sub_18 = sub_19;
  };
  if (controller_c_porta) {
    sub_17 = false;
  } else {
    sub_17 = sub_18;
  };
  if (controller_p_arrived) {
    v_152 = sub_5;
    sub_16 = sub_17;
  } else {
    v_152 = sub_17;
    sub_16 = sub_5;
  };
  if (controller_ck_23_1) {
    sub_15 = v_152;
  } else {
    sub_15 = sub_16;
  };
  sub_22 = sub_18;
  if (controller_p_arrived) {
    v = sub_11;
    sub_21 = sub_22;
  } else {
    v = sub_22;
    sub_21 = sub_11;
  };
  if (controller_ck_23_1) {
    sub_20 = v;
  } else {
    sub_20 = sub_21;
  };
  if (controller_shift_turno) {
    v_153 = sub_20;
    sub_14 = sub_15;
  } else {
    v_153 = sub_15;
    sub_14 = sub_20;
  };
  if (controller_ck_1) {
    sub_13 = v_153;
  } else {
    sub_13 = sub_14;
  };
  if (controller_v_372) {
    sub_12 = sub_1;
  } else {
    sub_12 = sub_13;
  };
  if (controller_v_371) {
    v_158 = sub_13;
  } else {
    v_158 = sub_12;
  };
  if (controller_c_pc) {
    v_159 = sub_1;
  } else {
    v_159 = v_158;
  };
  if (controller_c_rot) {
    sub_0 = sub_1;
  } else {
    sub_0 = v_159;
  };
  _out->controller_c_jan = sub_0;;
}

void Controller_controller__controller_controller_controller_c_pc_step(
  int controller_shift_turno, int controller_abre_porta,
  int controller_p_arrived, int controller_ck_1, int controller_pnr_8,
  int controller_ck_19_1, int controller_pnr_7, int controller_ck_21_1,
  int controller_pnr_6, int controller_ck_23_1, int controller_pnr_5,
  int controller_ck_25_1, int controller_pnr_4, int controller_ck_27_1,
  int controller_pnr_3, int controller_v_372, int controller_v_371,
  int controller_pnr_2, int controller_v_356, int controller_v_355,
  int controller_pnr_1, int controller_v_340, int controller_v_339,
  int controller_pnr, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_per2, int p_controller_c_per1, int p_controller_c_luz2,
  int p_controller_c_luz1, int p_controller_c_jan, int p_controller_c_pc,
  int p_controller_c_rot, int p_controller_c_porta, int controller_c_rot,
  int controller_c_porta,
  Controller_controller__controller_controller_controller_c_pc_out* _out) {
  
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
  sub_9 = false;
  if (controller_v_340) {
    sub_8 = false;
  } else {
    sub_8 = sub_9;
  };
  if (controller_v_339) {
    sub_7 = sub_9;
  } else {
    sub_7 = sub_8;
  };
  if (controller_c_porta) {
    sub_6 = false;
  } else {
    sub_6 = sub_7;
  };
  if (controller_p_arrived) {
    v_169 = sub_6;
    sub_5 = false;
  } else {
    v_169 = false;
    sub_5 = sub_6;
  };
  if (controller_ck_23_1) {
    sub_4 = v_169;
  } else {
    sub_4 = sub_5;
  };
  if (controller_c_porta) {
    sub_12 = false;
  } else {
    sub_12 = sub_9;
  };
  if (controller_p_arrived) {
    v_168 = sub_12;
    sub_11 = false;
  } else {
    v_168 = false;
    sub_11 = sub_12;
  };
  if (controller_ck_23_1) {
    sub_10 = v_168;
  } else {
    sub_10 = sub_11;
  };
  if (controller_shift_turno) {
    v_170 = sub_10;
    sub_3 = sub_4;
  } else {
    v_170 = sub_4;
    sub_3 = sub_10;
  };
  if (controller_ck_1) {
    sub_2 = v_170;
  } else {
    sub_2 = sub_3;
  };
  sub_18 = true;
  if (controller_v_340) {
    sub_17 = false;
  } else {
    sub_17 = sub_18;
  };
  if (controller_v_339) {
    v_166 = sub_18;
  } else {
    v_166 = sub_17;
  };
  if (controller_c_porta) {
    sub_16 = false;
  } else {
    sub_16 = v_166;
  };
  if (controller_p_arrived) {
    v_167 = sub_16;
    sub_15 = false;
  } else {
    v_167 = false;
    sub_15 = sub_16;
  };
  if (controller_ck_23_1) {
    sub_14 = v_167;
  } else {
    sub_14 = sub_15;
  };
  if (controller_c_porta) {
    sub_21 = false;
  } else {
    sub_21 = sub_18;
  };
  if (controller_p_arrived) {
    v_165 = sub_21;
    sub_20 = false;
  } else {
    v_165 = false;
    sub_20 = sub_21;
  };
  if (controller_ck_23_1) {
    sub_19 = v_165;
  } else {
    sub_19 = sub_20;
  };
  if (controller_shift_turno) {
    v_171 = sub_19;
    sub_13 = sub_14;
  } else {
    v_171 = sub_14;
    sub_13 = sub_19;
  };
  if (controller_ck_1) {
    v_172 = v_171;
  } else {
    v_172 = sub_13;
  };
  if (p_controller_c_pc) {
    sub_1 = v_172;
  } else {
    sub_1 = sub_2;
  };
  sub_26 = sub_6;
  sub_29 = sub_7;
  if (controller_p_arrived) {
    v_161 = sub_12;
    sub_28 = sub_29;
  } else {
    v_161 = sub_29;
    sub_28 = sub_12;
  };
  if (controller_ck_23_1) {
    sub_27 = v_161;
  } else {
    sub_27 = sub_28;
  };
  if (controller_shift_turno) {
    v_162 = sub_27;
    sub_25 = sub_26;
  } else {
    v_162 = sub_26;
    sub_25 = sub_27;
  };
  if (controller_ck_1) {
    sub_24 = v_162;
  } else {
    sub_24 = sub_25;
  };
  if (controller_p_arrived) {
    v_160 = sub_16;
    sub_32 = sub_6;
  } else {
    v_160 = sub_6;
    sub_32 = sub_16;
  };
  if (controller_ck_23_1) {
    sub_31 = v_160;
  } else {
    sub_31 = sub_32;
  };
  if (controller_p_arrived) {
    v = sub_21;
    sub_34 = sub_29;
  } else {
    v = sub_29;
    sub_34 = sub_21;
  };
  if (controller_ck_23_1) {
    sub_33 = v;
  } else {
    sub_33 = sub_34;
  };
  if (controller_shift_turno) {
    v_163 = sub_33;
    sub_30 = sub_31;
  } else {
    v_163 = sub_31;
    sub_30 = sub_33;
  };
  if (controller_ck_1) {
    v_164 = v_163;
  } else {
    v_164 = sub_30;
  };
  if (p_controller_c_pc) {
    sub_23 = v_164;
  } else {
    sub_23 = sub_24;
  };
  if (controller_v_372) {
    sub_22 = sub_1;
  } else {
    sub_22 = sub_23;
  };
  if (controller_v_371) {
    v_173 = sub_23;
  } else {
    v_173 = sub_22;
  };
  if (controller_c_rot) {
    sub_0 = sub_1;
  } else {
    sub_0 = v_173;
  };
  _out->controller_c_pc = sub_0;;
}

void Controller_controller__controller_controller_controller_c_rot_step(
  int controller_shift_turno, int controller_abre_porta,
  int controller_p_arrived, int controller_ck_1, int controller_pnr_8,
  int controller_ck_19_1, int controller_pnr_7, int controller_ck_21_1,
  int controller_pnr_6, int controller_ck_23_1, int controller_pnr_5,
  int controller_ck_25_1, int controller_pnr_4, int controller_ck_27_1,
  int controller_pnr_3, int controller_v_372, int controller_v_371,
  int controller_pnr_2, int controller_v_356, int controller_v_355,
  int controller_pnr_1, int controller_v_340, int controller_v_339,
  int controller_pnr, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_per2, int p_controller_c_per1, int p_controller_c_luz2,
  int p_controller_c_luz1, int p_controller_c_jan, int p_controller_c_pc,
  int p_controller_c_rot, int p_controller_c_porta, int controller_c_porta,
  Controller_controller__controller_controller_controller_c_rot_out* _out) {
  
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
  sub_9 = false;
  if (controller_v_340) {
    sub_8 = false;
  } else {
    sub_8 = sub_9;
  };
  if (controller_v_339) {
    sub_7 = sub_9;
  } else {
    sub_7 = sub_8;
  };
  if (controller_c_porta) {
    sub_6 = false;
  } else {
    sub_6 = sub_7;
  };
  sub_5 = sub_6;
  sub_12 = sub_7;
  if (controller_c_porta) {
    sub_13 = false;
  } else {
    sub_13 = sub_9;
  };
  if (controller_p_arrived) {
    v_181 = sub_13;
    sub_11 = sub_12;
  } else {
    v_181 = sub_12;
    sub_11 = sub_13;
  };
  if (controller_ck_23_1) {
    sub_10 = v_181;
  } else {
    sub_10 = sub_11;
  };
  if (controller_shift_turno) {
    v_182 = sub_10;
    sub_4 = sub_5;
  } else {
    v_182 = sub_5;
    sub_4 = sub_10;
  };
  if (controller_ck_1) {
    sub_3 = v_182;
  } else {
    sub_3 = sub_4;
  };
  sub_19 = true;
  if (controller_v_340) {
    sub_18 = false;
  } else {
    sub_18 = sub_19;
  };
  if (controller_v_339) {
    v_179 = sub_19;
  } else {
    v_179 = sub_18;
  };
  if (controller_c_porta) {
    sub_17 = false;
  } else {
    sub_17 = v_179;
  };
  if (controller_p_arrived) {
    v_180 = sub_17;
    sub_16 = sub_6;
  } else {
    v_180 = sub_6;
    sub_16 = sub_17;
  };
  if (controller_ck_23_1) {
    sub_15 = v_180;
  } else {
    sub_15 = sub_16;
  };
  if (controller_c_porta) {
    sub_22 = false;
  } else {
    sub_22 = sub_19;
  };
  if (controller_p_arrived) {
    v_178 = sub_22;
    sub_21 = sub_12;
  } else {
    v_178 = sub_12;
    sub_21 = sub_22;
  };
  if (controller_ck_23_1) {
    sub_20 = v_178;
  } else {
    sub_20 = sub_21;
  };
  if (controller_shift_turno) {
    v_183 = sub_20;
    sub_14 = sub_15;
  } else {
    v_183 = sub_15;
    sub_14 = sub_20;
  };
  if (controller_ck_1) {
    v_184 = v_183;
  } else {
    v_184 = sub_14;
  };
  if (p_controller_c_rot) {
    sub_2 = v_184;
  } else {
    sub_2 = sub_3;
  };
  if (controller_p_arrived) {
    v_176 = sub_6;
    sub_26 = false;
  } else {
    v_176 = false;
    sub_26 = sub_6;
  };
  if (controller_ck_23_1) {
    sub_25 = v_176;
  } else {
    sub_25 = sub_26;
  };
  if (controller_p_arrived) {
    v_175 = sub_13;
    sub_28 = false;
  } else {
    v_175 = false;
    sub_28 = sub_13;
  };
  if (controller_ck_23_1) {
    sub_27 = v_175;
  } else {
    sub_27 = sub_28;
  };
  if (controller_shift_turno) {
    v_177 = sub_27;
    sub_24 = sub_25;
  } else {
    v_177 = sub_25;
    sub_24 = sub_27;
  };
  if (controller_ck_1) {
    sub_23 = v_177;
  } else {
    sub_23 = sub_24;
  };
  if (controller_p_arrived) {
    v_174 = sub_17;
    sub_31 = false;
  } else {
    v_174 = false;
    sub_31 = sub_17;
  };
  if (controller_ck_23_1) {
    sub_30 = v_174;
  } else {
    sub_30 = sub_31;
  };
  if (controller_p_arrived) {
    v = sub_22;
    sub_33 = false;
  } else {
    v = false;
    sub_33 = sub_22;
  };
  if (controller_ck_23_1) {
    sub_32 = v;
  } else {
    sub_32 = sub_33;
  };
  if (controller_shift_turno) {
    v_185 = sub_32;
    sub_29 = sub_30;
  } else {
    v_185 = sub_30;
    sub_29 = sub_32;
  };
  if (controller_ck_1) {
    v_186 = v_185;
  } else {
    v_186 = sub_29;
  };
  if (p_controller_c_rot) {
    v_187 = v_186;
  } else {
    v_187 = sub_23;
  };
  if (controller_v_372) {
    sub_1 = v_187;
  } else {
    sub_1 = sub_2;
  };
  if (controller_v_371) {
    sub_0 = sub_2;
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
  int controller_pnr_3, int controller_v_372, int controller_v_371,
  int controller_pnr_2, int controller_v_356, int controller_v_355,
  int controller_pnr_1, int controller_v_340, int controller_v_339,
  int controller_pnr, int p_controller_c_ar2, int p_controller_c_ar1,
  int p_controller_c_per2, int p_controller_c_per1, int p_controller_c_luz2,
  int p_controller_c_luz1, int p_controller_c_jan, int p_controller_c_pc,
  int p_controller_c_rot, int p_controller_c_porta,
  Controller_controller__controller_controller_controller_c_porta_out* _out) {
  
  int v_193;
  int v_192;
  int v_191;
  int v_190;
  int v_189;
  int v_188;
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
  sub_7 = false;
  if (controller_v_340) {
    sub_6 = false;
  } else {
    sub_6 = sub_7;
  };
  if (controller_v_339) {
    sub_5 = sub_7;
  } else {
    sub_5 = sub_6;
  };
  sub_4 = sub_5;
  sub_12 = true;
  if (controller_v_340) {
    sub_11 = false;
  } else {
    sub_11 = sub_12;
  };
  if (controller_v_339) {
    v_189 = sub_12;
  } else {
    v_189 = sub_11;
  };
  if (p_controller_c_porta) {
    sub_10 = v_189;
  } else {
    sub_10 = sub_5;
  };
  if (controller_p_arrived) {
    v_190 = sub_7;
    sub_9 = sub_10;
  } else {
    v_190 = sub_10;
    sub_9 = sub_7;
  };
  if (controller_ck_23_1) {
    sub_8 = v_190;
  } else {
    sub_8 = sub_9;
  };
  if (controller_shift_turno) {
    v_191 = sub_8;
    sub_3 = sub_4;
  } else {
    v_191 = sub_4;
    sub_3 = sub_8;
  };
  if (controller_ck_1) {
    sub_2 = v_191;
  } else {
    sub_2 = sub_3;
  };
  if (controller_p_arrived) {
    v_188 = sub_5;
    sub_15 = false;
  } else {
    v_188 = false;
    sub_15 = sub_5;
  };
  if (controller_ck_23_1) {
    sub_14 = v_188;
  } else {
    sub_14 = sub_15;
  };
  if (controller_p_arrived) {
    v = sub_7;
    sub_17 = false;
  } else {
    v = false;
    sub_17 = sub_7;
  };
  if (controller_ck_23_1) {
    sub_16 = v;
  } else {
    sub_16 = sub_17;
  };
  if (controller_shift_turno) {
    v_192 = sub_16;
    sub_13 = sub_14;
  } else {
    v_192 = sub_14;
    sub_13 = sub_16;
  };
  if (controller_ck_1) {
    v_193 = v_192;
  } else {
    v_193 = sub_13;
  };
  if (controller_v_372) {
    sub_1 = v_193;
  } else {
    sub_1 = sub_2;
  };
  if (controller_v_371) {
    sub_0 = sub_2;
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
                                                       int controller_v_372,
                                                       int controller_v_371,
                                                       int controller_pnr_2,
                                                       int controller_v_356,
                                                       int controller_v_355,
                                                       int controller_pnr_1,
                                                       int controller_v_340,
                                                       int controller_v_339,
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
  controller_v_372, controller_v_371, controller_pnr_2, controller_v_356,
  controller_v_355, controller_pnr_1, controller_v_340, controller_v_339,
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
  controller_v_372, controller_v_371, controller_pnr_2, controller_v_356,
  controller_v_355, controller_pnr_1, controller_v_340, controller_v_339,
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
                                                                    controller_v_372,
                                                                    controller_v_371,
                                                                    controller_pnr_2,
                                                                    controller_v_356,
                                                                    controller_v_355,
                                                                    controller_pnr_1,
                                                                    controller_v_340,
                                                                    controller_v_339,
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
  controller_v_372, controller_v_371, controller_pnr_2, controller_v_356,
  controller_v_355, controller_pnr_1, controller_v_340, controller_v_339,
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
  controller_v_372, controller_v_371, controller_pnr_2, controller_v_356,
  controller_v_355, controller_pnr_1, controller_v_340, controller_v_339,
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
  controller_v_372, controller_v_371, controller_pnr_2, controller_v_356,
  controller_v_355, controller_pnr_1, controller_v_340, controller_v_339,
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
  controller_v_372, controller_v_371, controller_pnr_2, controller_v_356,
  controller_v_355, controller_pnr_1, controller_v_340, controller_v_339,
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
  controller_v_372, controller_v_371, controller_pnr_2, controller_v_356,
  controller_v_355, controller_pnr_1, controller_v_340, controller_v_339,
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
  controller_v_372, controller_v_371, controller_pnr_2, controller_v_356,
  controller_v_355, controller_pnr_1, controller_v_340, controller_v_339,
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
  controller_v_372, controller_v_371, controller_pnr_2, controller_v_356,
  controller_v_355, controller_pnr_1, controller_v_340, controller_v_339,
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

