/* --- Generated the 8/7/2018 at 14:29 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jun. 15 15:41:53 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#ifndef SYSTEM_H
#define SYSTEM_H

#include "system_types.h"
#include "controller_controller.h"
typedef struct System__ilumination_mem {
  int v_253;
  int v_252;
  int v_251;
  int pnr;
} System__ilumination_mem;

typedef struct System__ilumination_out {
  int lamp;
  int pers;
  int policy;
} System__ilumination_out;

void System__ilumination_reset(System__ilumination_mem* self);

void System__ilumination_step(int c1, int c2, int c_up, int c_down, int up,
                              int down, int ar_fail, int shift,
                              System__ilumination_out* _out,
                              System__ilumination_mem* self);

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

typedef struct System__ar_condicionado_mem {
  int v_283;
  int v_282;
  int pnr;
} System__ar_condicionado_mem;

typedef struct System__ar_condicionado_out {
  int ar_state;
} System__ar_condicionado_out;

void System__ar_condicionado_reset(System__ar_condicionado_mem* self);

void System__ar_condicionado_step(int c1, int c2,
                                  System__ar_condicionado_out* _out,
                                  System__ar_condicionado_mem* self);

typedef struct System__turno_mem {
  int ck_1;
  int pnr;
} System__turno_mem;

typedef struct System__turno_out {
  int turno;
} System__turno_out;

void System__turno_reset(System__turno_mem* self);

void System__turno_step(int shift, System__turno_out* _out,
                        System__turno_mem* self);

typedef struct System__falha_mem {
  int ck_1;
  int pnr;
} System__falha_mem;

typedef struct System__falha_out {
  int failed;
} System__falha_out;

void System__falha_reset(System__falha_mem* self);

void System__falha_step(int falhou, int recuperou, System__falha_out* _out,
                        System__falha_mem* self);

typedef struct System__l_status_mem {
  int ck_12_1;
  int v_327;
  int v_326;
  int v_325;
  int pnr_1;
  int pnr;
} System__l_status_mem;

typedef struct System__l_status_out {
  int failed;
  int lamp;
  int pers;
  int policy;
} System__l_status_out;

void System__l_status_reset(System__l_status_mem* self);

void System__l_status_step(int c1, int c2, int c_up, int c_down, int up,
                           int down, int falhou, int recuperou, int ar_fail,
                           int shift, System__l_status_out* _out,
                           System__l_status_mem* self);

typedef struct System__ar_failed_mem {
  int ck_15_1;
  int v_357;
  int v_356;
  int pnr_2;
  int pnr;
} System__ar_failed_mem;

typedef struct System__ar_failed_out {
  int ar_state;
  int working;
} System__ar_failed_out;

void System__ar_failed_reset(System__ar_failed_mem* self);

void System__ar_failed_step(int c1, int c2, int falhou, int recuperou,
                            System__ar_failed_out* _out,
                            System__ar_failed_mem* self);

typedef struct System__controller_mem {
  int ck_38_1;
  int v_401;
  int v_400;
  int v_399;
  int ck_34_1;
  int v_431;
  int v_430;
  int ck_30_1;
  int ck_28_1;
  int ck_26_1;
  int ck_24_1;
  int ck_22_1;
  int ck_20_1;
  int ck_18_1;
  int ck_1;
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
  int pnr_3;
  int pnr;
} System__controller_mem;

typedef struct System__controller_out {
  int night;
  int p_open;
  int r_on1;
  int presence;
  int presence_t;
  int pc_on;
  int w_open;
  int arm_open;
  int ar_fail;
  int l_fail;
  int lamp;
  int pers;
  int ar_state;
  int mopa;
} System__controller_out;

void System__controller_reset(System__controller_mem* self);

void System__controller_step(int up, int down, int shift_turno,
                             int abre_porta, int p_arrived, int p1_arrived,
                             int ar_failed, int ar_recovered, int l_failed,
                             int l_recovered, System__controller_out* _out,
                             System__controller_mem* self);

#endif // SYSTEM_H
