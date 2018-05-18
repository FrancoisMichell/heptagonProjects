/* --- Generated the 18/5/2018 at 17:58 --- */
/* --- heptagon compiler, version 1.03.00 (compiled mon. jan. 29 17:16:2 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#ifndef SYSTEM_H
#define SYSTEM_H

#include "system_types.h"
#include "controller_controller.h"
typedef struct System__room_mem {
  int ck_1_2;
  int pnr;
} System__room_mem;

typedef struct System__room_out {
  int room_oc;
} System__room_out;

void System__room_reset(System__room_mem* self);

void System__room_step(int presence, System__room_out* _out,
                       System__room_mem* self);

typedef struct System__management_policy_mem {
  int v_74;
  int v_73;
  int pnr;
} System__management_policy_mem;

typedef struct System__management_policy_out {
  int eco;
  int confort;
  int pl;
} System__management_policy_out;

void System__management_policy_reset(System__management_policy_mem* self);

void System__management_policy_step(int eco_input, int confort_input,
                                    System__management_policy_out* _out,
                                    System__management_policy_mem* self);

typedef struct System__door_mem {
  int ck_1;
  int pnr;
} System__door_mem;

typedef struct System__door_out {
  int door_open;
} System__door_out;

void System__door_reset(System__door_mem* self);

void System__door_step(int push, int c_door, System__door_out* _out,
                       System__door_mem* self);

typedef struct System__rad_mem {
  int v_92;
  int v_91;
  int pnr;
} System__rad_mem;

typedef struct System__rad_out {
  int on_state;
  int power;
} System__rad_out;

void System__rad_reset(System__rad_mem* self);

void System__rad_step(int up1, int up2, int down1, int down2, int c1, int c2,
                      System__rad_out* _out, System__rad_mem* self);

typedef struct System__controller_mem {
  int ck_10_1;
  int ck_8_1;
  int v_110;
  int v_109;
  int v_130;
  int v_129;
  int pnr_3;
  int pnr_2;
  int pnr_1;
  int pnr;
} System__controller_mem;

typedef struct System__controller_out {
  int eco1;
  int confort1;
  int room_oc1;
  int door_open1;
  int on_state1;
  int power1;
  int pl1;
} System__controller_out;

void System__controller_reset(System__controller_mem* self);

void System__controller_step(int up1_1, int up2_1, int down1_1, int down2_1,
                             int eco_input1, int confort_input1,
                             int presence1, int push1,
                             System__controller_out* _out,
                             System__controller_mem* self);

#endif // SYSTEM_H
