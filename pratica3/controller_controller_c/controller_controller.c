/* --- Generated the 18/5/2018 at 17:58 --- */
/* --- heptagon compiler, version 1.03.00 (compiled mon. jan. 29 17:16:2 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c controller_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "controller_controller.h"

void Controller_controller__controller_controller_controller_c_door1_step(
  int controller_up1_1, int controller_up2_1, int controller_down1_1,
  int controller_down2_1, int controller_eco_input1,
  int controller_confort_input1, int controller_presence1,
  int controller_push1, int controller_v_130, int controller_v_129,
  int controller_pnr_3, int controller_v_110, int controller_v_109,
  int controller_pnr_2, int controller_ck_8_1, int controller_pnr_1,
  int controller_ck_10_1, int controller_pnr, int p_controller_c_door1,
  int p_controller_c2_1, int p_controller_c1_1, int controller_c2_1,
  int controller_c1_1,
  Controller_controller__controller_controller_controller_c_door1_out* _out) {
  
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
  sub_9 = false;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  if (controller_ck_10_1) {
    sub_10 = sub_4;
  } else {
    sub_10 = false;
  };
  sub_15 = true;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (controller_ck_10_1) {
    v = sub_11;
  } else {
    v = false;
  };
  if (p_controller_c_door1) {
    v_1 = v;
  } else {
    v_1 = sub_10;
  };
  if (controller_push1) {
    sub_3 = sub_4;
  } else {
    sub_3 = v_1;
  };
  sub_2 = sub_3;
  sub_1 = sub_2;
  sub_0 = sub_1;
  _out->controller_c_door1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c2_1_step(
  int controller_up1_1, int controller_up2_1, int controller_down1_1,
  int controller_down2_1, int controller_eco_input1,
  int controller_confort_input1, int controller_presence1,
  int controller_push1, int controller_v_130, int controller_v_129,
  int controller_pnr_3, int controller_v_110, int controller_v_109,
  int controller_pnr_2, int controller_ck_8_1, int controller_pnr_1,
  int controller_ck_10_1, int controller_pnr, int p_controller_c_door1,
  int p_controller_c2_1, int p_controller_c1_1, int controller_c1_1,
  Controller_controller__controller_controller_controller_c2_1_out* _out) {
  
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
  sub_9 = p_controller_c2_1;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  if (controller_ck_10_1) {
    v = sub_3;
  } else {
    v = false;
  };
  if (controller_push1) {
    sub_2 = sub_3;
  } else {
    sub_2 = v;
  };
  sub_1 = sub_2;
  sub_0 = sub_1;
  _out->controller_c2_1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c1_1_step(
  int controller_up1_1, int controller_up2_1, int controller_down1_1,
  int controller_down2_1, int controller_eco_input1,
  int controller_confort_input1, int controller_presence1,
  int controller_push1, int controller_v_130, int controller_v_129,
  int controller_pnr_3, int controller_v_110, int controller_v_109,
  int controller_pnr_2, int controller_ck_8_1, int controller_pnr_1,
  int controller_ck_10_1, int controller_pnr, int p_controller_c_door1,
  int p_controller_c2_1, int p_controller_c1_1,
  Controller_controller__controller_controller_controller_c1_1_out* _out) {
  
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
  sub_8 = p_controller_c1_1;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  if (controller_ck_10_1) {
    v = sub_3;
  } else {
    v = false;
  };
  if (controller_push1) {
    sub_2 = sub_3;
  } else {
    sub_2 = v;
  };
  sub_1 = sub_2;
  sub_0 = sub_1;
  _out->controller_c1_1 = sub_0;;
}

void Controller_controller__controller_controller_step(int controller_up1_1,
                                                       int controller_up2_1,
                                                       int controller_down1_1,
                                                       int controller_down2_1,
                                                       int controller_eco_input1,
                                                       int controller_confort_input1,
                                                       int controller_presence1,
                                                       int controller_push1,
                                                       int controller_v_130,
                                                       int controller_v_129,
                                                       int controller_pnr_3,
                                                       int controller_v_110,
                                                       int controller_v_109,
                                                       int controller_pnr_2,
                                                       int controller_ck_8_1,
                                                       int controller_pnr_1,
                                                       int controller_ck_10_1,
                                                       int controller_pnr,
                                                       int p_controller_c_door1,
                                                       int p_controller_c2_1,
                                                       int p_controller_c1_1,
                                                       Controller_controller__controller_controller_out* _out) {
  Controller_controller__controller_controller_controller_c_door1_out Controller_controller__controller_controller_controller_c_door1_out_st;
  Controller_controller__controller_controller_controller_c2_1_out Controller_controller__controller_controller_controller_c2_1_out_st;
  Controller_controller__controller_controller_controller_c1_1_out Controller_controller__controller_controller_controller_c1_1_out_st;
  Controller_controller__controller_controller_controller_c1_1_step(controller_up1_1,
                                                                    controller_up2_1,
                                                                    controller_down1_1,
                                                                    controller_down2_1,
                                                                    controller_eco_input1,
                                                                    controller_confort_input1,
                                                                    controller_presence1,
                                                                    controller_push1,
                                                                    controller_v_130,
                                                                    controller_v_129,
                                                                    controller_pnr_3,
                                                                    controller_v_110,
                                                                    controller_v_109,
                                                                    controller_pnr_2,
                                                                    controller_ck_8_1,
                                                                    controller_pnr_1,
                                                                    controller_ck_10_1,
                                                                    controller_pnr,
                                                                    p_controller_c_door1,
                                                                    p_controller_c2_1,
                                                                    p_controller_c1_1,
                                                                    &Controller_controller__controller_controller_controller_c1_1_out_st);
  _out->controller_c1_1 = Controller_controller__controller_controller_controller_c1_1_out_st.controller_c1_1;
  Controller_controller__controller_controller_controller_c2_1_step(controller_up1_1,
                                                                    controller_up2_1,
                                                                    controller_down1_1,
                                                                    controller_down2_1,
                                                                    controller_eco_input1,
                                                                    controller_confort_input1,
                                                                    controller_presence1,
                                                                    controller_push1,
                                                                    controller_v_130,
                                                                    controller_v_129,
                                                                    controller_pnr_3,
                                                                    controller_v_110,
                                                                    controller_v_109,
                                                                    controller_pnr_2,
                                                                    controller_ck_8_1,
                                                                    controller_pnr_1,
                                                                    controller_ck_10_1,
                                                                    controller_pnr,
                                                                    p_controller_c_door1,
                                                                    p_controller_c2_1,
                                                                    p_controller_c1_1,
                                                                    _out->controller_c1_1,
                                                                    &Controller_controller__controller_controller_controller_c2_1_out_st);
  _out->controller_c2_1 = Controller_controller__controller_controller_controller_c2_1_out_st.controller_c2_1;
  Controller_controller__controller_controller_controller_c_door1_step(
  controller_up1_1, controller_up2_1, controller_down1_1, controller_down2_1,
  controller_eco_input1, controller_confort_input1, controller_presence1,
  controller_push1, controller_v_130, controller_v_129, controller_pnr_3,
  controller_v_110, controller_v_109, controller_pnr_2, controller_ck_8_1,
  controller_pnr_1, controller_ck_10_1, controller_pnr, p_controller_c_door1,
  p_controller_c2_1, p_controller_c1_1, _out->controller_c2_1,
  _out->controller_c1_1,
  &Controller_controller__controller_controller_controller_c_door1_out_st);
  _out->controller_c_door1 = Controller_controller__controller_controller_controller_c_door1_out_st.controller_c_door1;
}

