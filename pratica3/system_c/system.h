/* --- Generated the 20/5/2018 at 22:24 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jan. 19 10:22:24 CET 2018) --- */
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
  int v_90;
  int v_89;
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

typedef struct System__tv_mem {
  int ck_1;
  int pnr;
} System__tv_mem;

typedef struct System__tv_out {
  int tv_on;
} System__tv_out;

void System__tv_reset(System__tv_mem* self);

void System__tv_step(int tv_switch, int c_tv1, int c_tv2,
                     System__tv_out* _out, System__tv_mem* self);

typedef struct System__lamp_mem {
  int ck_1;
  int pnr;
} System__lamp_mem;

typedef struct System__lamp_out {
  int lamp_on;
} System__lamp_out;

void System__lamp_reset(System__lamp_mem* self);

void System__lamp_step(int lamp_switch, int c_lamp1, int c_lamp2,
                       System__lamp_out* _out, System__lamp_mem* self);

typedef struct System__door_mem {
  int ck_1;
  int pnr;
} System__door_mem;

typedef struct System__door_out {
  int door_open;
} System__door_out;

void System__door_reset(System__door_mem* self);

void System__door_step(int push, int c_door1, int c_door2,
                       System__door_out* _out, System__door_mem* self);

typedef struct System__rad_mem {
  int v_108;
  int v_107;
  int pnr;
} System__rad_mem;

typedef struct System__rad_out {
  int on_state;
  int power;
} System__rad_out;

void System__rad_reset(System__rad_mem* self);

void System__rad_step(int up1, int up2, int down1, int down2, int c1, int c2,
                      System__rad_out* _out, System__rad_mem* self);

typedef struct System__washing_machine_mem {
  int v_153;
  int v_152;
  int v_151;
  int pnr;
} System__washing_machine_mem;

typedef struct System__washing_machine_out {
  int wash_state;
  int wash_power;
} System__washing_machine_out;

void System__washing_machine_reset(System__washing_machine_mem* self);

void System__washing_machine_step(int finish, int start, int c_wash,
                                  System__washing_machine_out* _out,
                                  System__washing_machine_mem* self);

typedef struct System__oven_mem {
  int v_210;
  int v_209;
  int v_208;
  int pnr;
} System__oven_mem;

typedef struct System__oven_out {
  int oven_state;
  int oven_power;
} System__oven_out;

void System__oven_reset(System__oven_mem* self);

void System__oven_step(int finish, int start, int c_oven, int cold,
                       int temp_ok, System__oven_out* _out,
                       System__oven_mem* self);

typedef struct System__controller_mem {
  int ck_14_1;
  int ck_12_1;
  int ck_10_1;
  int ck_1;
  int pnr_3;
  int pnr_2;
  int pnr_1;
  int pnr;
} System__controller_mem;

typedef struct System__controller_out {
  int room_oc1;
  int door_open1;
  int lamp_on1;
  int tv_on1;
} System__controller_out;

void System__controller_reset(System__controller_mem* self);

void System__controller_step(int presence1, int push1, int lamp_switch1,
                             int tv_switch1, System__controller_out* _out,
                             System__controller_mem* self);

#endif // SYSTEM_H
