/* --- Generated the 22/5/2018 at 22:25 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jan. 19 10:22:24 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c controller_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "controller_controller.h"

void Controller_controller__controller_controller_controller_c_tv2_step(
  int controller_c_window, int controller_c_door, int controller_push_porta,
  int controller_push_janela, int controller_rad_up1,
  int controller_rad_down1, int controller_rad_up2, int controller_rad_down2,
  int controller_presence, int controller_light_switch,
  int controller_tv_switch, int controller_v_268, int controller_v_267,
  int controller_pnr_5, int controller_ck_9_1, int controller_pnr_4,
  int controller_ck_11_1, int controller_pnr_3, int controller_ck_13_1,
  int controller_pnr_2, int controller_ck_15_1, int controller_pnr_1,
  int controller_ck_17_1, int controller_pnr, int p_controller_c_tv2,
  int p_controller_c_tv1, int p_controller_c_light2,
  int p_controller_c_light1, int p_controller_rad_c2,
  int p_controller_rad_c1, int controller_c_tv1, int controller_c_light2,
  int controller_c_light1, int controller_rad_c2, int controller_rad_c1,
  Controller_controller__controller_controller_controller_c_tv2_out* _out) {
  
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
  sub_13 = false;
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (controller_c_light1) {
    v_46 = sub_13;
  } else {
    v_46 = false;
  };
  sub_16 = (controller_light_switch&&false);
  if (controller_c_light1) {
    v_45 = sub_13;
  } else {
    v_45 = sub_16;
  };
  if (controller_c_light2) {
    sub_15 = false;
  } else {
    sub_15 = v_45;
  };
  v_44 = !(controller_light_switch);
  sub_17 = (v_44&&false);
  if (controller_c_light1) {
    v_47 = sub_13;
  } else {
    v_47 = sub_17;
  };
  if (controller_c_light2) {
    v_48 = v_46;
  } else {
    v_48 = v_47;
  };
  if (controller_ck_13_1) {
    sub_14 = v_48;
  } else {
    sub_14 = sub_15;
  };
  if (controller_ck_15_1) {
    v_50 = sub_14;
    v_49 = sub_11;
  } else {
    v_50 = sub_11;
    v_49 = sub_14;
  };
  if (controller_tv_switch) {
    v_51 = v_49;
  } else {
    v_51 = v_50;
  };
  if (controller_c_tv1) {
    sub_10 = sub_11;
  } else {
    sub_10 = v_51;
  };
  sub_23 = true;
  if (controller_c_light1) {
    v_41 = false;
  } else {
    v_41 = sub_23;
  };
  sub_22 = sub_23;
  sub_24 = (controller_light_switch||false);
  if (controller_c_light1) {
    v_40 = false;
  } else {
    v_40 = sub_24;
  };
  if (controller_c_light2) {
    sub_21 = sub_22;
  } else {
    sub_21 = v_40;
  };
  v_39 = !(controller_light_switch);
  sub_25 = (v_39||false);
  if (controller_c_light1) {
    v_42 = false;
  } else {
    v_42 = sub_25;
  };
  if (controller_c_light2) {
    v_43 = v_41;
  } else {
    v_43 = v_42;
  };
  if (controller_ck_13_1) {
    sub_20 = v_43;
  } else {
    sub_20 = sub_21;
  };
  if (controller_ck_15_1) {
    sub_19 = false;
  } else {
    sub_19 = sub_20;
  };
  sub_18 = sub_19;
  if (controller_c_light1) {
    v_37 = false;
    v_36 = false;
  } else {
    v_37 = sub_16;
    v_36 = sub_13;
  };
  if (controller_c_light2) {
    v_38 = v_36;
  } else {
    v_38 = v_37;
  };
  if (controller_c_light1) {
    v_35 = false;
  } else {
    v_35 = sub_17;
  };
  if (controller_c_light2) {
    sub_27 = sub_12;
  } else {
    sub_27 = v_35;
  };
  if (controller_ck_13_1) {
    sub_26 = v_38;
  } else {
    sub_26 = sub_27;
  };
  if (controller_ck_15_1) {
    v_53 = sub_26;
    v_52 = sub_20;
  } else {
    v_53 = sub_20;
    v_52 = sub_26;
  };
  if (controller_tv_switch) {
    v_54 = v_52;
  } else {
    v_54 = v_53;
  };
  if (controller_c_tv1) {
    v_55 = sub_18;
  } else {
    v_55 = v_54;
  };
  if (controller_presence) {
    sub_9 = sub_10;
  } else {
    sub_9 = v_55;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (controller_presence) {
    sub_31 = sub_10;
  } else {
    sub_31 = false;
  };
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  if (controller_v_267) {
    sub_5 = sub_28;
  } else {
    sub_5 = sub_6;
  };
  if (controller_rad_up2) {
    v_33 = false;
  } else {
    v_33 = sub_8;
  };
  if (controller_rad_c2) {
    v_34 = v_33;
  } else {
    v_34 = sub_7;
  };
  if (controller_v_267) {
    sub_33 = v_34;
  } else {
    sub_33 = sub_6;
  };
  sub_32 = sub_33;
  if (controller_rad_c1) {
    v_56 = sub_5;
  } else {
    v_56 = sub_32;
  };
  sub_34 = sub_32;
  if (controller_rad_up1) {
    sub_4 = v_56;
  } else {
    sub_4 = sub_34;
  };
  if (controller_rad_up2) {
    v_29 = false;
  } else {
    v_29 = sub_30;
  };
  if (controller_rad_c2) {
    v_30 = v_29;
  } else {
    v_30 = sub_29;
  };
  if (controller_v_267) {
    sub_36 = sub_6;
  } else {
    sub_36 = sub_28;
  };
  if (controller_rad_down2) {
    sub_38 = sub_9;
  } else {
    sub_38 = false;
  };
  if (controller_rad_c2) {
    sub_37 = sub_38;
  } else {
    sub_37 = sub_7;
  };
  if (controller_v_267) {
    v_31 = v_30;
  } else {
    v_31 = sub_37;
  };
  if (controller_rad_down1) {
    v_32 = sub_36;
  } else {
    v_32 = v_31;
  };
  if (controller_rad_c1) {
    sub_35 = v_32;
  } else {
    sub_35 = sub_36;
  };
  if (controller_v_268) {
    sub_3 = sub_35;
  } else {
    sub_3 = sub_4;
  };
  if (controller_v_267) {
    sub_41 = false;
  } else {
    sub_41 = sub_6;
  };
  if (controller_rad_c1) {
    v_28 = sub_41;
  } else {
    v_28 = sub_32;
  };
  if (controller_rad_up1) {
    sub_40 = v_28;
  } else {
    sub_40 = sub_34;
  };
  if (controller_v_267) {
    v_26 = false;
    sub_43 = sub_6;
  } else {
    v_26 = sub_37;
    sub_43 = false;
  };
  if (controller_rad_down1) {
    v_27 = sub_43;
  } else {
    v_27 = v_26;
  };
  if (controller_rad_c1) {
    sub_42 = v_27;
  } else {
    sub_42 = sub_43;
  };
  if (controller_v_268) {
    sub_39 = sub_42;
  } else {
    sub_39 = sub_40;
  };
  if (controller_ck_11_1) {
    v_58 = sub_3;
    v_57 = sub_39;
  } else {
    v_58 = sub_39;
    v_57 = sub_3;
  };
  if (controller_push_janela) {
    v_59 = v_57;
  } else {
    v_59 = v_58;
  };
  if (controller_c_window) {
    sub_2 = v_59;
  } else {
    sub_2 = sub_3;
  };
  sub_45 = sub_39;
  sub_44 = sub_45;
  if (controller_ck_9_1) {
    v_61 = sub_2;
    v_60 = sub_44;
  } else {
    v_61 = sub_44;
    v_60 = sub_2;
  };
  if (controller_push_porta) {
    v_62 = v_60;
  } else {
    v_62 = v_61;
  };
  if (controller_c_door) {
    sub_1 = v_62;
  } else {
    sub_1 = sub_2;
  };
  if (controller_c_tv1) {
    v_21 = sub_18;
  } else {
    v_21 = sub_20;
  };
  if (controller_c_light1) {
    v_16 = sub_23;
    v_15 = sub_23;
  } else {
    v_16 = controller_light_switch;
    v_15 = sub_13;
  };
  if (controller_c_light2) {
    v_17 = v_15;
  } else {
    v_17 = v_16;
  };
  v_13 = !(controller_light_switch);
  if (controller_c_light1) {
    v_14 = sub_23;
  } else {
    v_14 = v_13;
  };
  if (controller_c_light2) {
    sub_57 = sub_12;
  } else {
    sub_57 = v_14;
  };
  if (controller_ck_13_1) {
    sub_56 = v_17;
  } else {
    sub_56 = sub_57;
  };
  if (controller_ck_15_1) {
    sub_55 = sub_22;
  } else {
    sub_55 = sub_56;
  };
  if (controller_c_light1) {
    v_11 = sub_23;
    v_10 = sub_23;
  } else {
    v_11 = sub_24;
    v_10 = false;
  };
  if (controller_c_light2) {
    v_12 = v_10;
  } else {
    v_12 = v_11;
  };
  if (controller_c_light1) {
    v_9 = sub_23;
  } else {
    v_9 = sub_25;
  };
  if (controller_c_light2) {
    sub_59 = false;
  } else {
    sub_59 = v_9;
  };
  if (controller_ck_13_1) {
    sub_58 = v_12;
  } else {
    sub_58 = sub_59;
  };
  if (controller_ck_15_1) {
    v_19 = sub_58;
    v_18 = sub_56;
  } else {
    v_19 = sub_56;
    v_18 = sub_58;
  };
  if (controller_tv_switch) {
    v_20 = v_18;
  } else {
    v_20 = v_19;
  };
  if (controller_c_tv1) {
    sub_54 = sub_55;
  } else {
    sub_54 = v_20;
  };
  if (controller_presence) {
    sub_53 = sub_54;
  } else {
    sub_53 = v_21;
  };
  sub_52 = sub_53;
  sub_51 = sub_52;
  sub_50 = sub_51;
  if (controller_presence) {
    sub_63 = sub_54;
  } else {
    sub_63 = false;
  };
  sub_62 = sub_63;
  sub_61 = sub_62;
  sub_60 = sub_61;
  if (controller_v_267) {
    sub_49 = sub_60;
  } else {
    sub_49 = sub_50;
  };
  if (controller_rad_up2) {
    v_7 = false;
  } else {
    v_7 = sub_52;
  };
  if (controller_rad_c2) {
    v_8 = v_7;
  } else {
    v_8 = sub_51;
  };
  if (controller_v_267) {
    sub_65 = v_8;
  } else {
    sub_65 = sub_50;
  };
  sub_64 = sub_65;
  if (controller_rad_c1) {
    v_22 = sub_49;
  } else {
    v_22 = sub_64;
  };
  sub_66 = sub_64;
  if (controller_rad_up1) {
    sub_48 = v_22;
  } else {
    sub_48 = sub_66;
  };
  if (controller_rad_up2) {
    v_3 = false;
  } else {
    v_3 = sub_62;
  };
  if (controller_rad_c2) {
    v_4 = v_3;
  } else {
    v_4 = sub_61;
  };
  if (controller_v_267) {
    sub_68 = sub_50;
  } else {
    sub_68 = sub_60;
  };
  if (controller_rad_down2) {
    sub_70 = sub_53;
  } else {
    sub_70 = false;
  };
  if (controller_rad_c2) {
    sub_69 = sub_70;
  } else {
    sub_69 = sub_51;
  };
  if (controller_v_267) {
    v_5 = v_4;
  } else {
    v_5 = sub_69;
  };
  if (controller_rad_down1) {
    v_6 = sub_68;
  } else {
    v_6 = v_5;
  };
  if (controller_rad_c1) {
    sub_67 = v_6;
  } else {
    sub_67 = sub_68;
  };
  if (controller_v_268) {
    sub_47 = sub_67;
  } else {
    sub_47 = sub_48;
  };
  if (controller_v_267) {
    sub_73 = false;
  } else {
    sub_73 = sub_50;
  };
  if (controller_rad_c1) {
    v_2 = sub_73;
  } else {
    v_2 = sub_64;
  };
  if (controller_rad_up1) {
    sub_72 = v_2;
  } else {
    sub_72 = sub_66;
  };
  if (controller_v_267) {
    v = false;
    sub_75 = sub_50;
  } else {
    v = sub_69;
    sub_75 = false;
  };
  if (controller_rad_down1) {
    v_1 = sub_75;
  } else {
    v_1 = v;
  };
  if (controller_rad_c1) {
    sub_74 = v_1;
  } else {
    sub_74 = sub_75;
  };
  if (controller_v_268) {
    sub_71 = sub_74;
  } else {
    sub_71 = sub_72;
  };
  if (controller_ck_11_1) {
    v_24 = sub_47;
    v_23 = sub_71;
  } else {
    v_24 = sub_71;
    v_23 = sub_47;
  };
  if (controller_push_janela) {
    v_25 = v_23;
  } else {
    v_25 = v_24;
  };
  if (controller_c_window) {
    sub_46 = v_25;
  } else {
    sub_46 = sub_47;
  };
  sub_77 = sub_71;
  sub_76 = sub_77;
  if (controller_ck_9_1) {
    v_64 = sub_46;
    v_63 = sub_76;
  } else {
    v_64 = sub_76;
    v_63 = sub_46;
  };
  if (controller_push_porta) {
    v_65 = v_63;
  } else {
    v_65 = v_64;
  };
  if (controller_c_door) {
    v_66 = v_65;
  } else {
    v_66 = sub_46;
  };
  if (p_controller_c_tv2) {
    sub_0 = v_66;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_tv2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_tv1_step(
  int controller_c_window, int controller_c_door, int controller_push_porta,
  int controller_push_janela, int controller_rad_up1,
  int controller_rad_down1, int controller_rad_up2, int controller_rad_down2,
  int controller_presence, int controller_light_switch,
  int controller_tv_switch, int controller_v_268, int controller_v_267,
  int controller_pnr_5, int controller_ck_9_1, int controller_pnr_4,
  int controller_ck_11_1, int controller_pnr_3, int controller_ck_13_1,
  int controller_pnr_2, int controller_ck_15_1, int controller_pnr_1,
  int controller_ck_17_1, int controller_pnr, int p_controller_c_tv2,
  int p_controller_c_tv1, int p_controller_c_light2,
  int p_controller_c_light1, int p_controller_rad_c2,
  int p_controller_rad_c1, int controller_c_light2, int controller_c_light1,
  int controller_rad_c2, int controller_rad_c1,
  Controller_controller__controller_controller_controller_c_tv1_out* _out) {
  
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
  int v_70;
  int v_69;
  int v_68;
  int v_67;
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
  v_104 = !(controller_light_switch);
  sub_14 = true;
  sub_13 = sub_14;
  sub_15 = false;
  if (controller_c_light1) {
    v_105 = sub_15;
    v_103 = sub_15;
  } else {
    v_105 = v_104;
    v_103 = sub_14;
  };
  if (controller_c_light2) {
    v_106 = v_103;
  } else {
    v_106 = v_105;
  };
  if (controller_c_light1) {
    v_102 = sub_15;
  } else {
    v_102 = controller_light_switch;
  };
  if (controller_c_light2) {
    sub_12 = sub_13;
  } else {
    sub_12 = v_102;
  };
  if (controller_ck_13_1) {
    sub_11 = v_106;
  } else {
    sub_11 = sub_12;
  };
  sub_17 = sub_15;
  sub_16 = sub_17;
  if (controller_ck_15_1) {
    v_108 = sub_11;
    v_107 = sub_16;
  } else {
    v_108 = sub_16;
    v_107 = sub_11;
  };
  if (controller_tv_switch) {
    sub_10 = v_107;
  } else {
    sub_10 = v_108;
  };
  v_99 = (controller_light_switch&&false);
  if (controller_c_light1) {
    v_100 = false;
    v_98 = false;
  } else {
    v_100 = v_99;
    v_98 = sub_15;
  };
  if (controller_c_light2) {
    v_101 = v_98;
  } else {
    v_101 = v_100;
  };
  v_95 = !(controller_light_switch);
  v_96 = (v_95&&false);
  if (controller_c_light1) {
    v_97 = false;
  } else {
    v_97 = v_96;
  };
  if (controller_c_light2) {
    sub_19 = sub_17;
  } else {
    sub_19 = v_97;
  };
  if (controller_ck_13_1) {
    sub_18 = v_101;
  } else {
    sub_18 = sub_19;
  };
  if (controller_presence) {
    sub_9 = sub_10;
  } else {
    sub_9 = sub_18;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (controller_presence) {
    sub_23 = sub_10;
  } else {
    sub_23 = false;
  };
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  if (controller_v_267) {
    sub_5 = sub_20;
  } else {
    sub_5 = sub_6;
  };
  if (controller_rad_up2) {
    v_93 = false;
  } else {
    v_93 = sub_8;
  };
  if (controller_rad_c2) {
    v_94 = v_93;
  } else {
    v_94 = sub_7;
  };
  if (controller_v_267) {
    sub_25 = v_94;
  } else {
    sub_25 = sub_6;
  };
  sub_24 = sub_25;
  if (controller_rad_c1) {
    v_109 = sub_5;
  } else {
    v_109 = sub_24;
  };
  sub_26 = sub_24;
  if (controller_rad_up1) {
    sub_4 = v_109;
  } else {
    sub_4 = sub_26;
  };
  if (controller_rad_up2) {
    v_89 = false;
  } else {
    v_89 = sub_22;
  };
  if (controller_rad_c2) {
    v_90 = v_89;
  } else {
    v_90 = sub_21;
  };
  if (controller_v_267) {
    sub_28 = sub_6;
  } else {
    sub_28 = sub_20;
  };
  if (controller_rad_down2) {
    sub_30 = sub_9;
  } else {
    sub_30 = false;
  };
  if (controller_rad_c2) {
    sub_29 = sub_30;
  } else {
    sub_29 = sub_7;
  };
  if (controller_v_267) {
    v_91 = v_90;
  } else {
    v_91 = sub_29;
  };
  if (controller_rad_down1) {
    v_92 = sub_28;
  } else {
    v_92 = v_91;
  };
  if (controller_rad_c1) {
    sub_27 = v_92;
  } else {
    sub_27 = sub_28;
  };
  if (controller_v_268) {
    sub_3 = sub_27;
  } else {
    sub_3 = sub_4;
  };
  if (controller_v_267) {
    sub_33 = false;
  } else {
    sub_33 = sub_6;
  };
  if (controller_rad_c1) {
    v_88 = sub_33;
  } else {
    v_88 = sub_24;
  };
  if (controller_rad_up1) {
    sub_32 = v_88;
  } else {
    sub_32 = sub_26;
  };
  if (controller_v_267) {
    v_86 = false;
    sub_35 = sub_6;
  } else {
    v_86 = sub_29;
    sub_35 = false;
  };
  if (controller_rad_down1) {
    v_87 = sub_35;
  } else {
    v_87 = v_86;
  };
  if (controller_rad_c1) {
    sub_34 = v_87;
  } else {
    sub_34 = sub_35;
  };
  if (controller_v_268) {
    sub_31 = sub_34;
  } else {
    sub_31 = sub_32;
  };
  if (controller_ck_11_1) {
    v_111 = sub_3;
    v_110 = sub_31;
  } else {
    v_111 = sub_31;
    v_110 = sub_3;
  };
  if (controller_push_janela) {
    v_112 = v_110;
  } else {
    v_112 = v_111;
  };
  if (controller_c_window) {
    sub_2 = v_112;
  } else {
    sub_2 = sub_3;
  };
  sub_37 = sub_31;
  sub_36 = sub_37;
  if (controller_ck_9_1) {
    v_114 = sub_2;
    v_113 = sub_36;
  } else {
    v_114 = sub_36;
    v_113 = sub_2;
  };
  if (controller_push_porta) {
    v_115 = v_113;
  } else {
    v_115 = v_114;
  };
  if (controller_c_door) {
    sub_1 = v_115;
  } else {
    sub_1 = sub_2;
  };
  sub_47 = sub_13;
  sub_46 = sub_47;
  v_78 = !(controller_light_switch);
  v_79 = (v_78||false);
  if (controller_c_light1) {
    v_80 = false;
    v_77 = false;
  } else {
    v_80 = v_79;
    v_77 = sub_14;
  };
  if (controller_c_light2) {
    v_81 = v_77;
  } else {
    v_81 = v_80;
  };
  v_75 = (controller_light_switch||false);
  if (controller_c_light1) {
    v_76 = false;
  } else {
    v_76 = v_75;
  };
  if (controller_c_light2) {
    sub_50 = sub_13;
  } else {
    sub_50 = v_76;
  };
  if (controller_ck_13_1) {
    sub_49 = v_81;
  } else {
    sub_49 = sub_50;
  };
  if (controller_ck_15_1) {
    sub_48 = sub_18;
  } else {
    sub_48 = sub_49;
  };
  if (controller_presence) {
    sub_45 = sub_46;
  } else {
    sub_45 = sub_48;
  };
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  if (controller_presence) {
    sub_54 = sub_46;
  } else {
    sub_54 = false;
  };
  sub_53 = sub_54;
  sub_52 = sub_53;
  sub_51 = sub_52;
  if (controller_v_267) {
    sub_41 = sub_51;
  } else {
    sub_41 = sub_42;
  };
  if (controller_rad_up2) {
    v_73 = false;
  } else {
    v_73 = sub_44;
  };
  if (controller_rad_c2) {
    v_74 = v_73;
  } else {
    v_74 = sub_43;
  };
  if (controller_v_267) {
    sub_56 = v_74;
  } else {
    sub_56 = sub_42;
  };
  sub_55 = sub_56;
  if (controller_rad_c1) {
    v_82 = sub_41;
  } else {
    v_82 = sub_55;
  };
  sub_57 = sub_55;
  if (controller_rad_up1) {
    sub_40 = v_82;
  } else {
    sub_40 = sub_57;
  };
  if (controller_rad_up2) {
    v_69 = false;
  } else {
    v_69 = sub_53;
  };
  if (controller_rad_c2) {
    v_70 = v_69;
  } else {
    v_70 = sub_52;
  };
  if (controller_v_267) {
    sub_59 = sub_42;
  } else {
    sub_59 = sub_51;
  };
  if (controller_rad_down2) {
    sub_61 = sub_45;
  } else {
    sub_61 = false;
  };
  if (controller_rad_c2) {
    sub_60 = sub_61;
  } else {
    sub_60 = sub_43;
  };
  if (controller_v_267) {
    v_71 = v_70;
  } else {
    v_71 = sub_60;
  };
  if (controller_rad_down1) {
    v_72 = sub_59;
  } else {
    v_72 = v_71;
  };
  if (controller_rad_c1) {
    sub_58 = v_72;
  } else {
    sub_58 = sub_59;
  };
  if (controller_v_268) {
    sub_39 = sub_58;
  } else {
    sub_39 = sub_40;
  };
  if (controller_v_267) {
    sub_64 = false;
  } else {
    sub_64 = sub_42;
  };
  if (controller_rad_c1) {
    v_68 = sub_64;
  } else {
    v_68 = sub_55;
  };
  if (controller_rad_up1) {
    sub_63 = v_68;
  } else {
    sub_63 = sub_57;
  };
  if (controller_v_267) {
    v = false;
    sub_66 = sub_42;
  } else {
    v = sub_60;
    sub_66 = false;
  };
  if (controller_rad_down1) {
    v_67 = sub_66;
  } else {
    v_67 = v;
  };
  if (controller_rad_c1) {
    sub_65 = v_67;
  } else {
    sub_65 = sub_66;
  };
  if (controller_v_268) {
    sub_62 = sub_65;
  } else {
    sub_62 = sub_63;
  };
  if (controller_ck_11_1) {
    v_84 = sub_39;
    v_83 = sub_62;
  } else {
    v_84 = sub_62;
    v_83 = sub_39;
  };
  if (controller_push_janela) {
    v_85 = v_83;
  } else {
    v_85 = v_84;
  };
  if (controller_c_window) {
    sub_38 = v_85;
  } else {
    sub_38 = sub_39;
  };
  sub_68 = sub_62;
  sub_67 = sub_68;
  if (controller_ck_9_1) {
    v_117 = sub_38;
    v_116 = sub_67;
  } else {
    v_117 = sub_67;
    v_116 = sub_38;
  };
  if (controller_push_porta) {
    v_118 = v_116;
  } else {
    v_118 = v_117;
  };
  if (controller_c_door) {
    v_119 = v_118;
  } else {
    v_119 = sub_38;
  };
  if (p_controller_c_tv1) {
    sub_0 = v_119;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_tv1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_light2_step(
  int controller_c_window, int controller_c_door, int controller_push_porta,
  int controller_push_janela, int controller_rad_up1,
  int controller_rad_down1, int controller_rad_up2, int controller_rad_down2,
  int controller_presence, int controller_light_switch,
  int controller_tv_switch, int controller_v_268, int controller_v_267,
  int controller_pnr_5, int controller_ck_9_1, int controller_pnr_4,
  int controller_ck_11_1, int controller_pnr_3, int controller_ck_13_1,
  int controller_pnr_2, int controller_ck_15_1, int controller_pnr_1,
  int controller_ck_17_1, int controller_pnr, int p_controller_c_tv2,
  int p_controller_c_tv1, int p_controller_c_light2,
  int p_controller_c_light1, int p_controller_rad_c2,
  int p_controller_rad_c1, int controller_c_light1, int controller_rad_c2,
  int controller_rad_c1,
  Controller_controller__controller_controller_controller_c_light2_out* _out) {
  
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
  sub_12 = false;
  sub_11 = sub_12;
  sub_10 = sub_11;
  if (controller_c_light1) {
    v_143 = false;
  } else {
    v_143 = controller_light_switch;
  };
  v_142 = !(controller_light_switch);
  sub_15 = true;
  if (controller_c_light1) {
    sub_14 = sub_15;
  } else {
    sub_14 = v_142;
  };
  if (controller_ck_13_1) {
    sub_13 = v_143;
  } else {
    sub_13 = sub_14;
  };
  if (controller_presence) {
    sub_9 = sub_10;
  } else {
    sub_9 = sub_13;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (controller_presence) {
    sub_19 = sub_10;
  } else {
    sub_19 = false;
  };
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  if (controller_v_267) {
    sub_5 = sub_16;
  } else {
    sub_5 = sub_6;
  };
  if (controller_rad_up2) {
    v_140 = false;
  } else {
    v_140 = sub_8;
  };
  if (controller_rad_c2) {
    v_141 = v_140;
  } else {
    v_141 = sub_7;
  };
  if (controller_v_267) {
    sub_21 = v_141;
  } else {
    sub_21 = sub_6;
  };
  sub_20 = sub_21;
  if (controller_rad_c1) {
    v_144 = sub_5;
  } else {
    v_144 = sub_20;
  };
  sub_22 = sub_20;
  if (controller_rad_up1) {
    sub_4 = v_144;
  } else {
    sub_4 = sub_22;
  };
  if (controller_rad_up2) {
    v_136 = false;
  } else {
    v_136 = sub_18;
  };
  if (controller_rad_c2) {
    v_137 = v_136;
  } else {
    v_137 = sub_17;
  };
  if (controller_v_267) {
    sub_24 = sub_6;
  } else {
    sub_24 = sub_16;
  };
  if (controller_rad_down2) {
    sub_26 = sub_9;
  } else {
    sub_26 = false;
  };
  if (controller_rad_c2) {
    sub_25 = sub_26;
  } else {
    sub_25 = sub_7;
  };
  if (controller_v_267) {
    v_138 = v_137;
  } else {
    v_138 = sub_25;
  };
  if (controller_rad_down1) {
    v_139 = sub_24;
  } else {
    v_139 = v_138;
  };
  if (controller_rad_c1) {
    sub_23 = v_139;
  } else {
    sub_23 = sub_24;
  };
  if (controller_v_268) {
    sub_3 = sub_23;
  } else {
    sub_3 = sub_4;
  };
  if (controller_v_267) {
    sub_29 = false;
  } else {
    sub_29 = sub_6;
  };
  if (controller_rad_c1) {
    v_135 = sub_29;
  } else {
    v_135 = sub_20;
  };
  if (controller_rad_up1) {
    sub_28 = v_135;
  } else {
    sub_28 = sub_22;
  };
  if (controller_v_267) {
    v_133 = false;
    sub_31 = sub_6;
  } else {
    v_133 = sub_25;
    sub_31 = false;
  };
  if (controller_rad_down1) {
    v_134 = sub_31;
  } else {
    v_134 = v_133;
  };
  if (controller_rad_c1) {
    sub_30 = v_134;
  } else {
    sub_30 = sub_31;
  };
  if (controller_v_268) {
    sub_27 = sub_30;
  } else {
    sub_27 = sub_28;
  };
  if (controller_ck_11_1) {
    v_146 = sub_3;
    v_145 = sub_27;
  } else {
    v_146 = sub_27;
    v_145 = sub_3;
  };
  if (controller_push_janela) {
    v_147 = v_145;
  } else {
    v_147 = v_146;
  };
  if (controller_c_window) {
    sub_2 = v_147;
  } else {
    sub_2 = sub_3;
  };
  sub_33 = sub_27;
  sub_32 = sub_33;
  if (controller_ck_9_1) {
    v_149 = sub_2;
    v_148 = sub_32;
  } else {
    v_149 = sub_32;
    v_148 = sub_2;
  };
  if (controller_push_porta) {
    v_150 = v_148;
  } else {
    v_150 = v_149;
  };
  if (controller_c_door) {
    sub_1 = v_150;
  } else {
    sub_1 = sub_2;
  };
  sub_43 = sub_15;
  sub_42 = sub_43;
  if (controller_c_light1) {
    v_128 = false;
  } else {
    v_128 = sub_15;
  };
  if (controller_ck_13_1) {
    sub_44 = v_128;
  } else {
    sub_44 = sub_43;
  };
  if (controller_presence) {
    sub_41 = sub_42;
  } else {
    sub_41 = sub_44;
  };
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (controller_presence) {
    sub_48 = sub_42;
  } else {
    sub_48 = false;
  };
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  if (controller_v_267) {
    sub_37 = sub_45;
  } else {
    sub_37 = sub_38;
  };
  if (controller_rad_up2) {
    v_126 = false;
  } else {
    v_126 = sub_40;
  };
  if (controller_rad_c2) {
    v_127 = v_126;
  } else {
    v_127 = sub_39;
  };
  if (controller_v_267) {
    sub_50 = v_127;
  } else {
    sub_50 = sub_38;
  };
  sub_49 = sub_50;
  if (controller_rad_c1) {
    v_129 = sub_37;
  } else {
    v_129 = sub_49;
  };
  sub_51 = sub_49;
  if (controller_rad_up1) {
    sub_36 = v_129;
  } else {
    sub_36 = sub_51;
  };
  if (controller_rad_up2) {
    v_122 = false;
  } else {
    v_122 = sub_47;
  };
  if (controller_rad_c2) {
    v_123 = v_122;
  } else {
    v_123 = sub_46;
  };
  if (controller_v_267) {
    sub_53 = sub_38;
  } else {
    sub_53 = sub_45;
  };
  if (controller_rad_down2) {
    sub_55 = sub_41;
  } else {
    sub_55 = false;
  };
  if (controller_rad_c2) {
    sub_54 = sub_55;
  } else {
    sub_54 = sub_39;
  };
  if (controller_v_267) {
    v_124 = v_123;
  } else {
    v_124 = sub_54;
  };
  if (controller_rad_down1) {
    v_125 = sub_53;
  } else {
    v_125 = v_124;
  };
  if (controller_rad_c1) {
    sub_52 = v_125;
  } else {
    sub_52 = sub_53;
  };
  if (controller_v_268) {
    sub_35 = sub_52;
  } else {
    sub_35 = sub_36;
  };
  if (controller_v_267) {
    sub_58 = false;
  } else {
    sub_58 = sub_38;
  };
  if (controller_rad_c1) {
    v_121 = sub_58;
  } else {
    v_121 = sub_49;
  };
  if (controller_rad_up1) {
    sub_57 = v_121;
  } else {
    sub_57 = sub_51;
  };
  if (controller_v_267) {
    v = false;
    sub_60 = sub_38;
  } else {
    v = sub_54;
    sub_60 = false;
  };
  if (controller_rad_down1) {
    v_120 = sub_60;
  } else {
    v_120 = v;
  };
  if (controller_rad_c1) {
    sub_59 = v_120;
  } else {
    sub_59 = sub_60;
  };
  if (controller_v_268) {
    sub_56 = sub_59;
  } else {
    sub_56 = sub_57;
  };
  if (controller_ck_11_1) {
    v_131 = sub_35;
    v_130 = sub_56;
  } else {
    v_131 = sub_56;
    v_130 = sub_35;
  };
  if (controller_push_janela) {
    v_132 = v_130;
  } else {
    v_132 = v_131;
  };
  if (controller_c_window) {
    sub_34 = v_132;
  } else {
    sub_34 = sub_35;
  };
  sub_62 = sub_56;
  sub_61 = sub_62;
  if (controller_ck_9_1) {
    v_152 = sub_34;
    v_151 = sub_61;
  } else {
    v_152 = sub_61;
    v_151 = sub_34;
  };
  if (controller_push_porta) {
    v_153 = v_151;
  } else {
    v_153 = v_152;
  };
  if (controller_c_door) {
    v_154 = v_153;
  } else {
    v_154 = sub_34;
  };
  if (p_controller_c_light2) {
    sub_0 = v_154;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_light2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_light1_step(
  int controller_c_window, int controller_c_door, int controller_push_porta,
  int controller_push_janela, int controller_rad_up1,
  int controller_rad_down1, int controller_rad_up2, int controller_rad_down2,
  int controller_presence, int controller_light_switch,
  int controller_tv_switch, int controller_v_268, int controller_v_267,
  int controller_pnr_5, int controller_ck_9_1, int controller_pnr_4,
  int controller_ck_11_1, int controller_pnr_3, int controller_ck_13_1,
  int controller_pnr_2, int controller_ck_15_1, int controller_pnr_1,
  int controller_ck_17_1, int controller_pnr, int p_controller_c_tv2,
  int p_controller_c_tv1, int p_controller_c_light2,
  int p_controller_c_light1, int p_controller_rad_c2,
  int p_controller_rad_c1, int controller_rad_c2, int controller_rad_c1,
  Controller_controller__controller_controller_controller_c_light1_out* _out) {
  
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
  sub_11 = false;
  if (p_controller_c_light1) {
    sub_10 = true;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  if (controller_ck_13_1) {
    sub_12 = sub_11;
  } else {
    sub_12 = sub_10;
  };
  if (controller_presence) {
    sub_8 = sub_9;
  } else {
    sub_8 = sub_12;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (controller_presence) {
    sub_16 = sub_9;
  } else {
    sub_16 = false;
  };
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  if (controller_v_267) {
    sub_4 = sub_13;
  } else {
    sub_4 = sub_5;
  };
  if (controller_rad_up2) {
    v_161 = false;
  } else {
    v_161 = sub_7;
  };
  if (controller_rad_c2) {
    v_162 = v_161;
  } else {
    v_162 = sub_6;
  };
  if (controller_v_267) {
    sub_18 = v_162;
  } else {
    sub_18 = sub_5;
  };
  sub_17 = sub_18;
  if (controller_rad_c1) {
    v_163 = sub_4;
  } else {
    v_163 = sub_17;
  };
  sub_19 = sub_17;
  if (controller_rad_up1) {
    sub_3 = v_163;
  } else {
    sub_3 = sub_19;
  };
  if (controller_rad_up2) {
    v_157 = false;
  } else {
    v_157 = sub_15;
  };
  if (controller_rad_c2) {
    v_158 = v_157;
  } else {
    v_158 = sub_14;
  };
  if (controller_v_267) {
    sub_21 = sub_5;
  } else {
    sub_21 = sub_13;
  };
  if (controller_rad_down2) {
    sub_23 = sub_8;
  } else {
    sub_23 = false;
  };
  if (controller_rad_c2) {
    sub_22 = sub_23;
  } else {
    sub_22 = sub_6;
  };
  if (controller_v_267) {
    v_159 = v_158;
  } else {
    v_159 = sub_22;
  };
  if (controller_rad_down1) {
    v_160 = sub_21;
  } else {
    v_160 = v_159;
  };
  if (controller_rad_c1) {
    sub_20 = v_160;
  } else {
    sub_20 = sub_21;
  };
  if (controller_v_268) {
    sub_2 = sub_20;
  } else {
    sub_2 = sub_3;
  };
  if (controller_v_267) {
    sub_26 = false;
  } else {
    sub_26 = sub_5;
  };
  if (controller_rad_c1) {
    v_156 = sub_26;
  } else {
    v_156 = sub_17;
  };
  if (controller_rad_up1) {
    sub_25 = v_156;
  } else {
    sub_25 = sub_19;
  };
  if (controller_v_267) {
    v = false;
    sub_28 = sub_5;
  } else {
    v = sub_22;
    sub_28 = false;
  };
  if (controller_rad_down1) {
    v_155 = sub_28;
  } else {
    v_155 = v;
  };
  if (controller_rad_c1) {
    sub_27 = v_155;
  } else {
    sub_27 = sub_28;
  };
  if (controller_v_268) {
    sub_24 = sub_27;
  } else {
    sub_24 = sub_25;
  };
  if (controller_ck_11_1) {
    v_165 = sub_2;
    v_164 = sub_24;
  } else {
    v_165 = sub_24;
    v_164 = sub_2;
  };
  if (controller_push_janela) {
    v_166 = v_164;
  } else {
    v_166 = v_165;
  };
  if (controller_c_window) {
    sub_1 = v_166;
  } else {
    sub_1 = sub_2;
  };
  sub_30 = sub_24;
  sub_29 = sub_30;
  if (controller_ck_9_1) {
    v_168 = sub_1;
    v_167 = sub_29;
  } else {
    v_168 = sub_29;
    v_167 = sub_1;
  };
  if (controller_push_porta) {
    v_169 = v_167;
  } else {
    v_169 = v_168;
  };
  if (controller_c_door) {
    sub_0 = v_169;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_light1 = sub_0;;
}

void Controller_controller__controller_controller_controller_rad_c2_step(
  int controller_c_window, int controller_c_door, int controller_push_porta,
  int controller_push_janela, int controller_rad_up1,
  int controller_rad_down1, int controller_rad_up2, int controller_rad_down2,
  int controller_presence, int controller_light_switch,
  int controller_tv_switch, int controller_v_268, int controller_v_267,
  int controller_pnr_5, int controller_ck_9_1, int controller_pnr_4,
  int controller_ck_11_1, int controller_pnr_3, int controller_ck_13_1,
  int controller_pnr_2, int controller_ck_15_1, int controller_pnr_1,
  int controller_ck_17_1, int controller_pnr, int p_controller_c_tv2,
  int p_controller_c_tv1, int p_controller_c_light2,
  int p_controller_c_light1, int p_controller_rad_c2,
  int p_controller_rad_c1, int controller_rad_c1,
  Controller_controller__controller_controller_controller_rad_c2_out* _out) {
  
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
  sub_10 = false;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (controller_presence) {
    sub_13 = sub_9;
  } else {
    sub_13 = false;
  };
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (controller_v_267) {
    sub_5 = sub_11;
  } else {
    sub_5 = sub_6;
  };
  sub_14 = sub_6;
  if (controller_rad_c1) {
    v_183 = sub_5;
  } else {
    v_183 = sub_14;
  };
  sub_15 = sub_14;
  if (controller_rad_up1) {
    sub_4 = v_183;
  } else {
    sub_4 = sub_15;
  };
  if (controller_v_267) {
    sub_17 = sub_6;
  } else {
    sub_17 = sub_11;
  };
  if (controller_rad_down1) {
    v_182 = sub_17;
  } else {
    v_182 = sub_5;
  };
  if (controller_rad_c1) {
    sub_16 = v_182;
  } else {
    sub_16 = sub_17;
  };
  if (controller_v_268) {
    sub_3 = sub_16;
  } else {
    sub_3 = sub_4;
  };
  if (controller_v_267) {
    sub_20 = false;
  } else {
    sub_20 = sub_6;
  };
  if (controller_rad_c1) {
    v_181 = sub_20;
  } else {
    v_181 = sub_14;
  };
  if (controller_rad_up1) {
    sub_19 = v_181;
  } else {
    sub_19 = sub_15;
  };
  if (controller_v_267) {
    sub_22 = sub_6;
  } else {
    sub_22 = false;
  };
  if (controller_rad_down1) {
    v_180 = sub_22;
  } else {
    v_180 = sub_20;
  };
  if (controller_rad_c1) {
    sub_21 = v_180;
  } else {
    sub_21 = sub_22;
  };
  if (controller_v_268) {
    sub_18 = sub_21;
  } else {
    sub_18 = sub_19;
  };
  if (controller_ck_11_1) {
    v_185 = sub_3;
    v_184 = sub_18;
  } else {
    v_185 = sub_18;
    v_184 = sub_3;
  };
  if (controller_push_janela) {
    v_186 = v_184;
  } else {
    v_186 = v_185;
  };
  if (controller_c_window) {
    sub_2 = v_186;
  } else {
    sub_2 = sub_3;
  };
  sub_24 = sub_18;
  sub_23 = sub_24;
  if (controller_ck_9_1) {
    v_188 = sub_2;
    v_187 = sub_23;
  } else {
    v_188 = sub_23;
    v_187 = sub_2;
  };
  if (controller_push_porta) {
    v_189 = v_187;
  } else {
    v_189 = v_188;
  };
  if (controller_c_door) {
    sub_1 = v_189;
  } else {
    sub_1 = sub_2;
  };
  sub_33 = true;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (controller_presence) {
    sub_36 = sub_32;
  } else {
    sub_36 = false;
  };
  sub_35 = sub_36;
  sub_34 = sub_35;
  if (controller_v_267) {
    sub_28 = sub_34;
  } else {
    sub_28 = sub_29;
  };
  if (controller_rad_up2) {
    v_175 = sub_7;
  } else {
    v_175 = sub_30;
  };
  if (controller_v_267) {
    sub_38 = v_175;
  } else {
    sub_38 = sub_29;
  };
  sub_37 = sub_38;
  if (controller_rad_c1) {
    v_176 = sub_28;
  } else {
    v_176 = sub_37;
  };
  sub_39 = sub_37;
  if (controller_rad_up1) {
    sub_27 = v_176;
  } else {
    sub_27 = sub_39;
  };
  if (controller_rad_up2) {
    v_172 = sub_12;
  } else {
    v_172 = sub_35;
  };
  if (controller_v_267) {
    sub_41 = sub_29;
  } else {
    sub_41 = sub_34;
  };
  if (controller_rad_down2) {
    sub_43 = sub_31;
  } else {
    sub_43 = sub_8;
  };
  sub_42 = sub_43;
  if (controller_v_267) {
    v_173 = v_172;
  } else {
    v_173 = sub_42;
  };
  if (controller_rad_down1) {
    v_174 = sub_41;
  } else {
    v_174 = v_173;
  };
  if (controller_rad_c1) {
    sub_40 = v_174;
  } else {
    sub_40 = sub_41;
  };
  if (controller_v_268) {
    sub_26 = sub_40;
  } else {
    sub_26 = sub_27;
  };
  if (controller_v_267) {
    sub_46 = false;
  } else {
    sub_46 = sub_29;
  };
  if (controller_rad_c1) {
    v_171 = sub_46;
  } else {
    v_171 = sub_37;
  };
  if (controller_rad_up1) {
    sub_45 = v_171;
  } else {
    sub_45 = sub_39;
  };
  if (controller_v_267) {
    v = false;
    sub_48 = sub_29;
  } else {
    v = sub_42;
    sub_48 = false;
  };
  if (controller_rad_down1) {
    v_170 = sub_48;
  } else {
    v_170 = v;
  };
  if (controller_rad_c1) {
    sub_47 = v_170;
  } else {
    sub_47 = sub_48;
  };
  if (controller_v_268) {
    sub_44 = sub_47;
  } else {
    sub_44 = sub_45;
  };
  if (controller_ck_11_1) {
    v_178 = sub_26;
    v_177 = sub_44;
  } else {
    v_178 = sub_44;
    v_177 = sub_26;
  };
  if (controller_push_janela) {
    v_179 = v_177;
  } else {
    v_179 = v_178;
  };
  if (controller_c_window) {
    sub_25 = v_179;
  } else {
    sub_25 = sub_26;
  };
  sub_50 = sub_44;
  sub_49 = sub_50;
  if (controller_ck_9_1) {
    v_191 = sub_25;
    v_190 = sub_49;
  } else {
    v_191 = sub_49;
    v_190 = sub_25;
  };
  if (controller_push_porta) {
    v_192 = v_190;
  } else {
    v_192 = v_191;
  };
  if (controller_c_door) {
    v_193 = v_192;
  } else {
    v_193 = sub_25;
  };
  if (p_controller_rad_c2) {
    sub_0 = v_193;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_rad_c2 = sub_0;;
}

void Controller_controller__controller_controller_controller_rad_c1_step(
  int controller_c_window, int controller_c_door, int controller_push_porta,
  int controller_push_janela, int controller_rad_up1,
  int controller_rad_down1, int controller_rad_up2, int controller_rad_down2,
  int controller_presence, int controller_light_switch,
  int controller_tv_switch, int controller_v_268, int controller_v_267,
  int controller_pnr_5, int controller_ck_9_1, int controller_pnr_4,
  int controller_ck_11_1, int controller_pnr_3, int controller_ck_13_1,
  int controller_pnr_2, int controller_ck_15_1, int controller_pnr_1,
  int controller_ck_17_1, int controller_pnr, int p_controller_c_tv2,
  int p_controller_c_tv1, int p_controller_c_light2,
  int p_controller_c_light1, int p_controller_rad_c2,
  int p_controller_rad_c1,
  Controller_controller__controller_controller_controller_rad_c1_out* _out) {
  
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
  sub_10 = p_controller_rad_c1;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_15 = false;
  sub_14 = sub_15;
  if (controller_presence) {
    sub_13 = sub_8;
  } else {
    sub_13 = sub_14;
  };
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (controller_v_267) {
    sub_4 = sub_11;
  } else {
    sub_4 = sub_5;
  };
  sub_16 = sub_5;
  if (controller_rad_up1) {
    sub_3 = sub_4;
  } else {
    sub_3 = sub_16;
  };
  if (controller_presence) {
    sub_20 = sub_8;
  } else {
    sub_20 = false;
  };
  sub_19 = sub_20;
  sub_18 = sub_19;
  if (controller_v_267) {
    v_195 = sub_5;
  } else {
    v_195 = sub_18;
  };
  sub_25 = true;
  sub_24 = sub_25;
  if (controller_presence) {
    sub_23 = sub_8;
  } else {
    sub_23 = sub_24;
  };
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (controller_v_267) {
    v_196 = sub_11;
  } else {
    v_196 = sub_21;
  };
  if (controller_rad_down1) {
    sub_17 = v_195;
  } else {
    sub_17 = v_196;
  };
  if (controller_v_268) {
    sub_2 = sub_17;
  } else {
    sub_2 = sub_3;
  };
  sub_31 = sub_14;
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (controller_v_267) {
    sub_28 = sub_29;
  } else {
    sub_28 = sub_5;
  };
  if (controller_rad_up1) {
    sub_27 = sub_28;
  } else {
    sub_27 = sub_16;
  };
  if (controller_v_267) {
    v = sub_5;
  } else {
    v = false;
  };
  sub_35 = sub_24;
  sub_34 = sub_35;
  sub_33 = sub_34;
  if (controller_v_267) {
    v_194 = sub_29;
  } else {
    v_194 = sub_33;
  };
  if (controller_rad_down1) {
    sub_32 = v;
  } else {
    sub_32 = v_194;
  };
  if (controller_v_268) {
    sub_26 = sub_32;
  } else {
    sub_26 = sub_27;
  };
  if (controller_ck_11_1) {
    v_198 = sub_2;
    v_197 = sub_26;
  } else {
    v_198 = sub_26;
    v_197 = sub_2;
  };
  if (controller_push_janela) {
    v_199 = v_197;
  } else {
    v_199 = v_198;
  };
  if (controller_c_window) {
    sub_1 = v_199;
  } else {
    sub_1 = sub_2;
  };
  sub_37 = sub_26;
  sub_36 = sub_37;
  if (controller_ck_9_1) {
    v_201 = sub_1;
    v_200 = sub_36;
  } else {
    v_201 = sub_36;
    v_200 = sub_1;
  };
  if (controller_push_porta) {
    v_202 = v_200;
  } else {
    v_202 = v_201;
  };
  if (controller_c_door) {
    sub_0 = v_202;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_rad_c1 = sub_0;;
}

void Controller_controller__controller_controller_step(int controller_c_window,
                                                       int controller_c_door,
                                                       int controller_push_porta,
                                                       int controller_push_janela,
                                                       int controller_rad_up1,
                                                       int controller_rad_down1,
                                                       int controller_rad_up2,
                                                       int controller_rad_down2,
                                                       int controller_presence,
                                                       int controller_light_switch,
                                                       int controller_tv_switch,
                                                       int controller_v_268,
                                                       int controller_v_267,
                                                       int controller_pnr_5,
                                                       int controller_ck_9_1,
                                                       int controller_pnr_4,
                                                       int controller_ck_11_1,
                                                       int controller_pnr_3,
                                                       int controller_ck_13_1,
                                                       int controller_pnr_2,
                                                       int controller_ck_15_1,
                                                       int controller_pnr_1,
                                                       int controller_ck_17_1,
                                                       int controller_pnr,
                                                       int p_controller_c_tv2,
                                                       int p_controller_c_tv1,
                                                       int p_controller_c_light2,
                                                       int p_controller_c_light1,
                                                       int p_controller_rad_c2,
                                                       int p_controller_rad_c1,
                                                       Controller_controller__controller_controller_out* _out) {
  Controller_controller__controller_controller_controller_rad_c2_out Controller_controller__controller_controller_controller_rad_c2_out_st;
  Controller_controller__controller_controller_controller_c_light2_out Controller_controller__controller_controller_controller_c_light2_out_st;
  Controller_controller__controller_controller_controller_c_light1_out Controller_controller__controller_controller_controller_c_light1_out_st;
  Controller_controller__controller_controller_controller_c_tv1_out Controller_controller__controller_controller_controller_c_tv1_out_st;
  Controller_controller__controller_controller_controller_rad_c1_out Controller_controller__controller_controller_controller_rad_c1_out_st;
  Controller_controller__controller_controller_controller_c_tv2_out Controller_controller__controller_controller_controller_c_tv2_out_st;
  Controller_controller__controller_controller_controller_rad_c1_step(
  controller_c_window, controller_c_door, controller_push_porta,
  controller_push_janela, controller_rad_up1, controller_rad_down1,
  controller_rad_up2, controller_rad_down2, controller_presence,
  controller_light_switch, controller_tv_switch, controller_v_268,
  controller_v_267, controller_pnr_5, controller_ck_9_1, controller_pnr_4,
  controller_ck_11_1, controller_pnr_3, controller_ck_13_1, controller_pnr_2,
  controller_ck_15_1, controller_pnr_1, controller_ck_17_1, controller_pnr,
  p_controller_c_tv2, p_controller_c_tv1, p_controller_c_light2,
  p_controller_c_light1, p_controller_rad_c2, p_controller_rad_c1,
  &Controller_controller__controller_controller_controller_rad_c1_out_st);
  _out->controller_rad_c1 = Controller_controller__controller_controller_controller_rad_c1_out_st.controller_rad_c1;
  Controller_controller__controller_controller_controller_rad_c2_step(
  controller_c_window, controller_c_door, controller_push_porta,
  controller_push_janela, controller_rad_up1, controller_rad_down1,
  controller_rad_up2, controller_rad_down2, controller_presence,
  controller_light_switch, controller_tv_switch, controller_v_268,
  controller_v_267, controller_pnr_5, controller_ck_9_1, controller_pnr_4,
  controller_ck_11_1, controller_pnr_3, controller_ck_13_1, controller_pnr_2,
  controller_ck_15_1, controller_pnr_1, controller_ck_17_1, controller_pnr,
  p_controller_c_tv2, p_controller_c_tv1, p_controller_c_light2,
  p_controller_c_light1, p_controller_rad_c2, p_controller_rad_c1,
  _out->controller_rad_c1,
  &Controller_controller__controller_controller_controller_rad_c2_out_st);
  _out->controller_rad_c2 = Controller_controller__controller_controller_controller_rad_c2_out_st.controller_rad_c2;
  Controller_controller__controller_controller_controller_c_light1_step(
  controller_c_window, controller_c_door, controller_push_porta,
  controller_push_janela, controller_rad_up1, controller_rad_down1,
  controller_rad_up2, controller_rad_down2, controller_presence,
  controller_light_switch, controller_tv_switch, controller_v_268,
  controller_v_267, controller_pnr_5, controller_ck_9_1, controller_pnr_4,
  controller_ck_11_1, controller_pnr_3, controller_ck_13_1, controller_pnr_2,
  controller_ck_15_1, controller_pnr_1, controller_ck_17_1, controller_pnr,
  p_controller_c_tv2, p_controller_c_tv1, p_controller_c_light2,
  p_controller_c_light1, p_controller_rad_c2, p_controller_rad_c1,
  _out->controller_rad_c2, _out->controller_rad_c1,
  &Controller_controller__controller_controller_controller_c_light1_out_st);
  _out->controller_c_light1 = Controller_controller__controller_controller_controller_c_light1_out_st.controller_c_light1;
  Controller_controller__controller_controller_controller_c_light2_step(
  controller_c_window, controller_c_door, controller_push_porta,
  controller_push_janela, controller_rad_up1, controller_rad_down1,
  controller_rad_up2, controller_rad_down2, controller_presence,
  controller_light_switch, controller_tv_switch, controller_v_268,
  controller_v_267, controller_pnr_5, controller_ck_9_1, controller_pnr_4,
  controller_ck_11_1, controller_pnr_3, controller_ck_13_1, controller_pnr_2,
  controller_ck_15_1, controller_pnr_1, controller_ck_17_1, controller_pnr,
  p_controller_c_tv2, p_controller_c_tv1, p_controller_c_light2,
  p_controller_c_light1, p_controller_rad_c2, p_controller_rad_c1,
  _out->controller_c_light1, _out->controller_rad_c2,
  _out->controller_rad_c1,
  &Controller_controller__controller_controller_controller_c_light2_out_st);
  _out->controller_c_light2 = Controller_controller__controller_controller_controller_c_light2_out_st.controller_c_light2;
  Controller_controller__controller_controller_controller_c_tv1_step(
  controller_c_window, controller_c_door, controller_push_porta,
  controller_push_janela, controller_rad_up1, controller_rad_down1,
  controller_rad_up2, controller_rad_down2, controller_presence,
  controller_light_switch, controller_tv_switch, controller_v_268,
  controller_v_267, controller_pnr_5, controller_ck_9_1, controller_pnr_4,
  controller_ck_11_1, controller_pnr_3, controller_ck_13_1, controller_pnr_2,
  controller_ck_15_1, controller_pnr_1, controller_ck_17_1, controller_pnr,
  p_controller_c_tv2, p_controller_c_tv1, p_controller_c_light2,
  p_controller_c_light1, p_controller_rad_c2, p_controller_rad_c1,
  _out->controller_c_light2, _out->controller_c_light1,
  _out->controller_rad_c2, _out->controller_rad_c1,
  &Controller_controller__controller_controller_controller_c_tv1_out_st);
  _out->controller_c_tv1 = Controller_controller__controller_controller_controller_c_tv1_out_st.controller_c_tv1;
  Controller_controller__controller_controller_controller_c_tv2_step(
  controller_c_window, controller_c_door, controller_push_porta,
  controller_push_janela, controller_rad_up1, controller_rad_down1,
  controller_rad_up2, controller_rad_down2, controller_presence,
  controller_light_switch, controller_tv_switch, controller_v_268,
  controller_v_267, controller_pnr_5, controller_ck_9_1, controller_pnr_4,
  controller_ck_11_1, controller_pnr_3, controller_ck_13_1, controller_pnr_2,
  controller_ck_15_1, controller_pnr_1, controller_ck_17_1, controller_pnr,
  p_controller_c_tv2, p_controller_c_tv1, p_controller_c_light2,
  p_controller_c_light1, p_controller_rad_c2, p_controller_rad_c1,
  _out->controller_c_tv1, _out->controller_c_light2,
  _out->controller_c_light1, _out->controller_rad_c2,
  _out->controller_rad_c1,
  &Controller_controller__controller_controller_controller_c_tv2_out_st);
  _out->controller_c_tv2 = Controller_controller__controller_controller_controller_c_tv2_out_st.controller_c_tv2;
}

