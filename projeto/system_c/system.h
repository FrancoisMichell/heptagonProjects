/* --- Generated the 23/6/2018 at 14:33 --- */
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
  int v_120;
  int v_119;
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
  int v_165;
  int v_164;
  int v_163;
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
  int v_222;
  int v_221;
  int v_220;
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
  int v_254;
  int v_253;
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

typedef struct System__porta_mem {
  int ck_1;
  int pnr;
} System__porta_mem;

typedef struct System__porta_out {
  int porta_open;
} System__porta_out;

void System__porta_reset(System__porta_mem* self);

void System__porta_step(int push, int c_porta, System__porta_out* _out,
                        System__porta_mem* self);

typedef struct System__roteador_mem {
  int ck_1;
  int pnr;
} System__roteador_mem;

typedef struct System__roteador_out {
  int r_on;
} System__roteador_out;

void System__roteador_reset(System__roteador_mem* self);

void System__roteador_step(int c, System__roteador_out* _out,
                           System__roteador_mem* self);

typedef struct System__armario_de_servico_mem {
  int ck_1;
  int pnr;
} System__armario_de_servico_mem;

typedef struct System__armario_de_servico_out {
  int arm_open;
} System__armario_de_servico_out;

void System__armario_de_servico_reset(System__armario_de_servico_mem* self);

void System__armario_de_servico_step(int c,
                                     System__armario_de_servico_out* _out,
                                     System__armario_de_servico_mem* self);

typedef struct System__pessoas_mem {
  int ck_1;
  int pnr;
} System__pessoas_mem;

typedef struct System__pessoas_out {
  int presence;
} System__pessoas_out;

void System__pessoas_reset(System__pessoas_mem* self);

void System__pessoas_step(int arrived, System__pessoas_out* _out,
                          System__pessoas_mem* self);

typedef struct System__computadores_mem {
  int ck_1;
  int pnr;
} System__computadores_mem;

typedef struct System__computadores_out {
  int pc_on;
} System__computadores_out;

void System__computadores_reset(System__computadores_mem* self);

void System__computadores_step(int c, System__computadores_out* _out,
                               System__computadores_mem* self);

typedef struct System__janelas_mem {
  int ck_1;
  int pnr;
} System__janelas_mem;

typedef struct System__janelas_out {
  int w_open;
} System__janelas_out;

void System__janelas_reset(System__janelas_mem* self);

void System__janelas_step(int c, System__janelas_out* _out,
                          System__janelas_mem* self);

typedef struct System__luzes_mem {
  int v_270;
  int v_269;
  int pnr;
} System__luzes_mem;

typedef struct System__luzes_out {
  int l_state;
} System__luzes_out;

void System__luzes_reset(System__luzes_mem* self);

void System__luzes_step(int c1, int c2, System__luzes_out* _out,
                        System__luzes_mem* self);

typedef struct System__persianas_mem {
  int v_286;
  int v_285;
  int pnr;
} System__persianas_mem;

typedef struct System__persianas_out {
  int p_state;
} System__persianas_out;

void System__persianas_reset(System__persianas_mem* self);

void System__persianas_step(int c1, int c2, System__persianas_out* _out,
                            System__persianas_mem* self);

typedef struct System__ar_condicionado_mem {
  int v_302;
  int v_301;
  int pnr;
} System__ar_condicionado_mem;

typedef struct System__ar_condicionado_out {
  int ar_state;
} System__ar_condicionado_out;

void System__ar_condicionado_reset(System__ar_condicionado_mem* self);

void System__ar_condicionado_step(int c1, int c2,
                                  System__ar_condicionado_out* _out,
                                  System__ar_condicionado_mem* self);

typedef struct System__controller_mem {
  int v_318;
  int v_317;
  int v_334;
  int v_333;
  int v_350;
  int v_349;
  int ck_26_1;
  int ck_24_1;
  int ck_22_1;
  int ck_20_1;
  int ck_18_1;
  int ck_1;
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
  int p_open;
  int r_on1;
  int arm_open;
  int presence;
  int pc_on;
  int w_open;
  int l_state;
  int p_state;
  int ar_state;
} System__controller_out;

void System__controller_reset(System__controller_mem* self);

void System__controller_step(int abre_porta, int p_arrived,
                             System__controller_out* _out,
                             System__controller_mem* self);

#endif // SYSTEM_H
