/* --- Generated the 15/6/2018 at 15:43 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jun. 15 15:41:53 CET 2018) --- */
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
  int v_136;
  int v_135;
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
  int v_181;
  int v_180;
  int v_179;
  int pnr;
} System__washing_machine_mem;

typedef struct System__washing_machine_out {
  int wash_power;
  int wash_state;
} System__washing_machine_out;

void System__washing_machine_reset(System__washing_machine_mem* self);

void System__washing_machine_step(int start, int finish, int c_wash,
                                  System__washing_machine_out* _out,
                                  System__washing_machine_mem* self);

typedef struct System__oven_mem {
  int v_238;
  int v_237;
  int v_236;
  int pnr;
} System__oven_mem;

typedef struct System__oven_out {
  int oven_power;
  int oven_state;
} System__oven_out;

void System__oven_reset(System__oven_mem* self);

void System__oven_step(int start, int finish, int temp_ok, int cold,
                       int c_oven, System__oven_out* _out,
                       System__oven_mem* self);

typedef struct System__management_policy_mem {
  int v_270;
  int v_269;
  int pnr;
} System__management_policy_mem;

typedef struct System__management_policy_out {
  int mode_2;
  int mode_1;
} System__management_policy_out;

void System__management_policy_reset(System__management_policy_mem* self);

void System__management_policy_step(int eco_input, int comfort_input,
                                    System__management_policy_out* _out,
                                    System__management_policy_mem* self);

typedef struct System__controller_mem {
  int v_290;
  int v_289;
  int ck_22_1;
  int ck_20_1;
  int ck_18_1;
  int ck_16_1;
  int ck_14_1;
  int v_329;
  int v_328;
  int v_327;
  int v_388;
  int v_387;
  int v_386;
  int v_424;
  int v_423;
  int pnr_8;
  int pnr_7;
  int pnr_6;
  int pnr_5;
  int pnr_4;
  int pnr_3;
  int pnr_2;
  int pnr_1;
  int pnr;
} System__controller_mem;

typedef struct System__controller_out {
  int occupied;
  int door_open;
  int window_open;
  int lamp_on;
  int tv_on;
  int rad_power;
  int rad_state;
  int wash_power;
  int wash_state;
  int oven_power;
  int oven_state;
  int policy_2;
  int policy_1;
} System__controller_out;

void System__controller_reset(System__controller_mem* self);

void System__controller_step(int push_porta, int push_janela, int rad_up1,
                             int rad_down1, int rad_up2, int rad_down2,
                             int wash_start, int wash_finish, int oven_start,
                             int oven_finish, int temp_ok, int cold,
                             int presence, int light_switch, int tv_switch,
                             int eco_in, int comfort_in,
                             System__controller_out* _out,
                             System__controller_mem* self);

#endif // SYSTEM_H
