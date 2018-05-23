/* --- Generated the 22/5/2018 at 22:25 --- */
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
  int occupied;
} System__room_out;

void System__room_reset(System__room_mem* self);

void System__room_step(int presence, System__room_out* _out,
                       System__room_mem* self);

typedef struct System__management_policy_mem {
  int v_116;
  int v_115;
  int pnr;
} System__management_policy_mem;

typedef struct System__management_policy_out {
  int eco_on;
  int comfort_on;
  int power_limit;
} System__management_policy_out;

void System__management_policy_reset(System__management_policy_mem* self);

void System__management_policy_step(int eco_input, int comfort_input,
                                    System__management_policy_out* _out,
                                    System__management_policy_mem* self);

typedef struct System__light_source_mem {
  int ck_1;
  int pnr;
} System__light_source_mem;

typedef struct System__light_source_out {
  int source_on;
} System__light_source_out;

void System__light_source_reset(System__light_source_mem* self);

void System__light_source_step(int source_switch, int c_source1,
                               int c_source2, System__light_source_out* _out,
                               System__light_source_mem* self);

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
  int v_134;
  int v_133;
  int pnr;
} System__rad_mem;

typedef struct System__rad_out {
  int rad_power;
  int rad_state;
} System__rad_out;

void System__rad_reset(System__rad_mem* self);

void System__rad_step(int up1, int down1, int up2, int down2, int c_rad1,
                      int c_rad2, System__rad_out* _out,
                      System__rad_mem* self);

typedef struct System__washing_machine_mem {
  int v_179;
  int v_178;
  int v_177;
  int pnr;
} System__washing_machine_mem;

typedef struct System__washing_machine_out {
  int wash_power;
  int wash_state;
} System__washing_machine_out;

void System__washing_machine_reset(System__washing_machine_mem* self);

void System__washing_machine_step(int finish, int start, int c_wash,
                                  System__washing_machine_out* _out,
                                  System__washing_machine_mem* self);

typedef struct System__oven_mem {
  int v_236;
  int v_235;
  int v_234;
  int pnr;
} System__oven_mem;

typedef struct System__oven_out {
  int oven_power;
  int oven_state;
} System__oven_out;

void System__oven_reset(System__oven_mem* self);

void System__oven_step(int finish, int start, int c_oven, int temp_ok,
                       int cold, System__oven_out* _out,
                       System__oven_mem* self);

typedef struct System__controller_mem {
  int ck_17_1;
  int ck_15_1;
  int ck_13_1;
  int ck_11_1;
  int ck_9_1;
  int v_268;
  int v_267;
  int pnr_5;
  int pnr_4;
  int pnr_3;
  int pnr_2;
  int pnr_1;
  int pnr;
} System__controller_mem;

typedef struct System__controller_out {
  int door_open;
  int window_open;
  int lamp_on;
  int tv_on;
  int occupied;
  int rad_power;
  int rad_state;
} System__controller_out;

void System__controller_reset(System__controller_mem* self);

void System__controller_step(int c_window, int c_door, int push_porta,
                             int push_janela, int rad_up1, int rad_down1,
                             int rad_up2, int rad_down2, int presence,
                             int light_switch, int tv_switch,
                             System__controller_out* _out,
                             System__controller_mem* self);

#endif // SYSTEM_H
