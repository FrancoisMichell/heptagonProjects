/* --- Generated the 14/8/2018 at 12:30 --- */
/* --- heptagon compiler, version 1.03.00 (compiled mon. aug. 6 15:37:40 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#ifndef SYSTEM_H
#define SYSTEM_H

#include "system_types.h"
#include "controller_controller.h"
typedef struct System__light_source_mem {
  int v_385;
  int v_384;
  int pnr;
} System__light_source_mem;

typedef struct System__light_source_out {
  int light_source_status;
} System__light_source_out;

void System__light_source_reset(System__light_source_mem* self);

void System__light_source_step(int sw, int c1, int c2, int failed_recovered,
                               System__light_source_out* _out,
                               System__light_source_mem* self);

typedef struct System__door_mem {
  int v_401;
  int v_400;
  int pnr;
} System__door_mem;

typedef struct System__door_out {
  int door_status;
} System__door_out;

void System__door_reset(System__door_mem* self);

void System__door_step(int c, int failed_recovered, System__door_out* _out,
                       System__door_mem* self);

typedef struct System__closet_mem {
  int v_417;
  int v_416;
  int pnr;
} System__closet_mem;

typedef struct System__closet_out {
  int closet_status;
} System__closet_out;

void System__closet_reset(System__closet_mem* self);

void System__closet_step(int c, int failed_recovered,
                         System__closet_out* _out, System__closet_mem* self);

typedef struct System__computer_mem {
  int v_433;
  int v_432;
  int pnr;
} System__computer_mem;

typedef struct System__computer_out {
  int computer_status;
} System__computer_out;

void System__computer_reset(System__computer_mem* self);

void System__computer_step(int c, int failed_recovered,
                           System__computer_out* _out,
                           System__computer_mem* self);

typedef struct System__window_mem {
  int v_449;
  int v_448;
  int pnr;
} System__window_mem;

typedef struct System__window_out {
  int window_status;
} System__window_out;

void System__window_reset(System__window_mem* self);

void System__window_step(int c, int failed_recovered,
                         System__window_out* _out, System__window_mem* self);

typedef struct System__air_conditioner_mem {
  int v_488;
  int v_487;
  int v_486;
  int pnr;
} System__air_conditioner_mem;

typedef struct System__air_conditioner_out {
  int air_status;
} System__air_conditioner_out;

void System__air_conditioner_reset(System__air_conditioner_mem* self);

void System__air_conditioner_step(int c1, int c2, int failed_recovered,
                                  System__air_conditioner_out* _out,
                                  System__air_conditioner_mem* self);

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
  int v_522;
  int v_521;
  int v_538;
  int v_537;
  int v_577;
  int v_576;
  int v_575;
  int v_611;
  int v_610;
  int v_627;
  int v_626;
  int v_643;
  int v_642;
  int v_659;
  int v_658;
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
  int worker_presence;
  int cleaner_presence;
  int door_status;
  int pc_status;
  int window_status;
  int closet_status;
  int air_status;
  int light_status;
  int blind_status;
} System__controller_out;

void System__controller_reset(System__controller_mem* self);

void System__controller_step(int change_shift, int worker, int cleaner,
                             int air_failed_recovered, int light_switch,
                             int light_failed_recovered, int blind_switch,
                             int blind_failed_recovered,
                             int door_failed_recovered,
                             int closet_failed_recovered,
                             int pc_failed_recovered,
                             int window_failed_recovered,
                             System__controller_out* _out,
                             System__controller_mem* self);

#endif // SYSTEM_H
