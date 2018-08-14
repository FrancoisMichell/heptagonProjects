/* --- Generated the 14/8/2018 at 13:23 --- */
/* --- heptagon compiler, version 1.03.00 (compiled mon. aug. 6 15:37:40 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#ifndef SYSTEM_H
#define SYSTEM_H

#include "system_types.h"
#include "controller_controller.h"
typedef struct System__light_source_mem {
  int v_445;
  int v_444;
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
  int v_461;
  int v_460;
  int pnr;
} System__door_mem;

typedef struct System__door_out {
  int door_status;
} System__door_out;

void System__door_reset(System__door_mem* self);

void System__door_step(int c, int failed_recovered, System__door_out* _out,
                       System__door_mem* self);

typedef struct System__closet_mem {
  int v_477;
  int v_476;
  int pnr;
} System__closet_mem;

typedef struct System__closet_out {
  int closet_status;
} System__closet_out;

void System__closet_reset(System__closet_mem* self);

void System__closet_step(int c, int failed_recovered,
                         System__closet_out* _out, System__closet_mem* self);

typedef struct System__computer_mem {
  int v_493;
  int v_492;
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
  int v_509;
  int v_508;
  int pnr;
} System__window_mem;

typedef struct System__window_out {
  int window_status;
} System__window_out;

void System__window_reset(System__window_mem* self);

void System__window_step(int c, int failed_recovered,
                         System__window_out* _out, System__window_mem* self);

typedef struct System__air_conditioner_mem {
  int v_548;
  int v_547;
  int v_546;
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
  int v_582;
  int v_581;
  int v_598;
  int v_597;
  int v_614;
  int v_613;
  int v_630;
  int v_629;
  int v_646;
  int v_645;
  int v_685;
  int v_684;
  int v_683;
  int v_719;
  int v_718;
  int v_735;
  int v_734;
  int v_751;
  int v_750;
  int v_767;
  int v_766;
  int ck_12_1;
  int ck_10_1;
  int ck_1;
  int pnr_12;
  int pnr_11;
  int pnr_10;
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
  int blind_status2;
  int blind_status3;
  int blind_status4;
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
