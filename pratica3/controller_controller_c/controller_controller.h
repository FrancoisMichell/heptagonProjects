/* --- Generated the 18/5/2018 at 17:58 --- */
/* --- heptagon compiler, version 1.03.00 (compiled mon. jan. 29 17:16:2 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c controller_controller.ept --- */

#ifndef CONTROLLER_CONTROLLER_H
#define CONTROLLER_CONTROLLER_H

#include "controller_controller_types.h"
typedef struct Controller_controller__controller_controller_controller_c_door1_out {
  int controller_c_door1;
} Controller_controller__controller_controller_controller_c_door1_out;

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
Controller_controller__controller_controller_controller_c_door1_out* _out);

typedef struct Controller_controller__controller_controller_controller_c2_1_out {
  int controller_c2_1;
} Controller_controller__controller_controller_controller_c2_1_out;

void Controller_controller__controller_controller_controller_c2_1_step(
int controller_up1_1, int controller_up2_1, int controller_down1_1,
int controller_down2_1, int controller_eco_input1,
int controller_confort_input1, int controller_presence1,
int controller_push1, int controller_v_130, int controller_v_129,
int controller_pnr_3, int controller_v_110, int controller_v_109,
int controller_pnr_2, int controller_ck_8_1, int controller_pnr_1,
int controller_ck_10_1, int controller_pnr, int p_controller_c_door1,
int p_controller_c2_1, int p_controller_c1_1, int controller_c1_1,
Controller_controller__controller_controller_controller_c2_1_out* _out);

typedef struct Controller_controller__controller_controller_controller_c1_1_out {
  int controller_c1_1;
} Controller_controller__controller_controller_controller_c1_1_out;

void Controller_controller__controller_controller_controller_c1_1_step(
int controller_up1_1, int controller_up2_1, int controller_down1_1,
int controller_down2_1, int controller_eco_input1,
int controller_confort_input1, int controller_presence1,
int controller_push1, int controller_v_130, int controller_v_129,
int controller_pnr_3, int controller_v_110, int controller_v_109,
int controller_pnr_2, int controller_ck_8_1, int controller_pnr_1,
int controller_ck_10_1, int controller_pnr, int p_controller_c_door1,
int p_controller_c2_1, int p_controller_c1_1,
Controller_controller__controller_controller_controller_c1_1_out* _out);

typedef struct Controller_controller__controller_controller_out {
  int controller_c_door1;
  int controller_c2_1;
  int controller_c1_1;
} Controller_controller__controller_controller_out;

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
                                                       Controller_controller__controller_controller_out* _out);

#endif // CONTROLLER_CONTROLLER_H
