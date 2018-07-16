/* --- Generated the 16/7/2018 at 14:7 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jun. 15 15:41:53 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#ifndef SYSTEM_H
#define SYSTEM_H

#include "system_types.h"
#include "controller_controller.h"
typedef struct System__lamp_mem {
  int ck_1_2;
  int pnr;
} System__lamp_mem;

typedef struct System__lamp_out {
  int lamp_on;
} System__lamp_out;

void System__lamp_reset(System__lamp_mem* self);

void System__lamp_step(int c1, int c2, int sw, System__lamp_out* _out,
                       System__lamp_mem* self);

typedef struct System__blind_mem {
  int ck_1;
  int pnr;
} System__blind_mem;

typedef struct System__blind_out {
  int blind_open;
} System__blind_out;

void System__blind_reset(System__blind_mem* self);

void System__blind_step(int c1, int c2, int sw, System__blind_out* _out,
                        System__blind_mem* self);

typedef struct System__door_mem {
  int ck_1;
  int pnr;
} System__door_mem;

typedef struct System__door_out {
  int door_open;
} System__door_out;

void System__door_reset(System__door_mem* self);

void System__door_step(int c_door, System__door_out* _out,
                       System__door_mem* self);

typedef struct System__closet_mem {
  int ck_1;
  int pnr;
} System__closet_mem;

typedef struct System__closet_out {
  int closet_open;
} System__closet_out;

void System__closet_reset(System__closet_mem* self);

void System__closet_step(int c, System__closet_out* _out,
                         System__closet_mem* self);

typedef struct System__person_mem {
  int ck_1;
  int pnr;
} System__person_mem;

typedef struct System__person_out {
  int presence;
} System__person_out;

void System__person_reset(System__person_mem* self);

void System__person_step(int arrived, System__person_out* _out,
                         System__person_mem* self);

typedef struct System__computer_mem {
  int ck_1;
  int pnr;
} System__computer_mem;

typedef struct System__computer_out {
  int computer_on;
} System__computer_out;

void System__computer_reset(System__computer_mem* self);

void System__computer_step(int c, System__computer_out* _out,
                           System__computer_mem* self);

typedef struct System__window_mem {
  int ck_1;
  int pnr;
} System__window_mem;

typedef struct System__window_out {
  int window_open;
} System__window_out;

void System__window_reset(System__window_mem* self);

void System__window_step(int c, System__window_out* _out,
                         System__window_mem* self);

typedef struct System__air_conditioner_mem {
  int v_189;
  int v_188;
  int pnr;
} System__air_conditioner_mem;

typedef struct System__air_conditioner_out {
  int air_state;
} System__air_conditioner_out;

void System__air_conditioner_reset(System__air_conditioner_mem* self);

void System__air_conditioner_step(int c1, int c2,
                                  System__air_conditioner_out* _out,
                                  System__air_conditioner_mem* self);

typedef struct System__day_shift_mem {
  int ck_1;
  int pnr;
} System__day_shift_mem;

typedef struct System__day_shift_out {
  int night;
} System__day_shift_out;

void System__day_shift_reset(System__day_shift_mem* self);

void System__day_shift_step(int change, System__day_shift_out* _out,
                            System__day_shift_mem* self);

typedef struct System__fail_mem {
  int ck_1;
  int pnr;
} System__fail_mem;

typedef struct System__fail_out {
  int failed;
} System__fail_out;

void System__fail_reset(System__fail_mem* self);

void System__fail_step(int failed_recovered, System__fail_out* _out,
                       System__fail_mem* self);

typedef struct System__air_fail_mem {
  int ck_12_1;
  int v_205;
  int v_204;
  int pnr_1;
  int pnr;
} System__air_fail_mem;

typedef struct System__air_fail_out {
  int air_state;
  int failed;
} System__air_fail_out;

void System__air_fail_reset(System__air_fail_mem* self);

void System__air_fail_step(int c1, int c2, int failed_recovered,
                           System__air_fail_out* _out,
                           System__air_fail_mem* self);

typedef struct System__lamp_fail_mem {
  int ck_15_1;
  int ck_1;
  int pnr_2;
  int pnr;
} System__lamp_fail_mem;

typedef struct System__lamp_fail_out {
  int lamp;
  int failed;
} System__lamp_fail_out;

void System__lamp_fail_reset(System__lamp_fail_mem* self);

void System__lamp_fail_step(int sw, int c1, int c2, int failed_recovered,
                            System__lamp_fail_out* _out,
                            System__lamp_fail_mem* self);

typedef struct System__blind_fail_mem {
  int ck_18_1;
  int ck_1;
  int pnr_3;
  int pnr;
} System__blind_fail_mem;

typedef struct System__blind_fail_out {
  int blind;
  int failed;
} System__blind_fail_out;

void System__blind_fail_reset(System__blind_fail_mem* self);

void System__blind_fail_step(int sw, int c1, int c2, int failed_recovered,
                             System__blind_fail_out* _out,
                             System__blind_fail_mem* self);

typedef struct System__controller_mem {
  int ck_43_1;
  int ck_41_1;
  int ck_39_1;
  int ck_37_1;
  int ck_35_1;
  int v_221;
  int v_220;
  int ck_31_1;
  int ck_29_1;
  int ck_27_1;
  int ck_25_1;
  int ck_23_1;
  int ck_21_1;
  int ck_1;
  int pnr_15;
  int pnr_14;
  int pnr_13;
  int pnr_12;
  int pnr_11;
  int pnr_10;
  int pnr_9;
  int pnr_8;
  int pnr_7;
  int pnr_6;
  int pnr_5;
  int pnr_4;
  int pnr;
} System__controller_mem;

typedef struct System__controller_out {
  int night;
  int door_open;
  int worker_presence;
  int cleaner_presence;
  int pc_on;
  int window_open;
  int closet_open;
  int air_failed;
  int light_on;
  int light_failed;
  int blind_up;
  int blind_failed;
  int air_state;
} System__controller_out;

void System__controller_reset(System__controller_mem* self);

void System__controller_step(int change_shift, int worker, int cleaner,
                             int air_failed_recovered, int light_switch,
                             int light_failed_recovered, int blind_switch,
                             int blind_failed_recovered,
                             System__controller_out* _out,
                             System__controller_mem* self);

#endif // SYSTEM_H
