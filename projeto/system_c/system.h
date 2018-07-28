/* --- Generated the 28/7/2018 at 20:19 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jun. 15 15:41:53 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#ifndef SYSTEM_H
#define SYSTEM_H

#include "system_types.h"
#include "controller_controller.h"
typedef struct System__light_source_mem {
  int ck_1_2;
  int pnr;
} System__light_source_mem;

typedef struct System__light_source_out {
  int light_source_on;
} System__light_source_out;

void System__light_source_reset(System__light_source_mem* self);

void System__light_source_step(int c1, int c2, int sw,
                               System__light_source_out* _out,
                               System__light_source_mem* self);

typedef struct System__door_mem {
  int ck_1;
  int pnr;
} System__door_mem;

typedef struct System__door_out {
  int door_open;
} System__door_out;

void System__door_reset(System__door_mem* self);

void System__door_step(int c, System__door_out* _out, System__door_mem* self);

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
  int v_107;
  int v_106;
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

typedef struct System__controller_mem {
  int ck_26_1;
  int ck_24_1;
  int v_123;
  int v_122;
  int ck_20_1;
  int ck_18_1;
  int ck_16_1;
  int ck_14_1;
  int ck_12_1;
  int ck_10_1;
  int ck_1;
  int pnr_9;
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
  int night;
  int door_open;
  int worker_presence;
  int cleaner_presence;
  int pc_on;
  int window_open;
  int closet_open;
  int light_status;
  int blind_status;
  int air_status;
} System__controller_out;

void System__controller_reset(System__controller_mem* self);

void System__controller_step(int change_shift, int worker, int cleaner,
                             int light_switch, int blind_switch,
                             System__controller_out* _out,
                             System__controller_mem* self);

#endif // SYSTEM_H
