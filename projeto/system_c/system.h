/* --- Generated the 2/7/2018 at 20:29 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jun. 15 15:41:53 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#ifndef SYSTEM_H
#define SYSTEM_H

#include "system_types.h"
#include "controller_controller.h"
typedef struct System__management_policy_mem {
  int v_142;
  int v_141;
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

typedef struct System__ilumination_policy_mem {
  int v_162;
  int v_161;
  int pnr;
} System__ilumination_policy_mem;

typedef struct System__ilumination_policy_out {
  int l_state;
  int p_state;
  int policy;
} System__ilumination_policy_out;

void System__ilumination_policy_reset(System__ilumination_policy_mem* self);

void System__ilumination_policy_step(int up, int down, int night,
                                     System__ilumination_policy_out* _out,
                                     System__ilumination_policy_mem* self);

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
  int v_178;
  int v_177;
  int pnr;
} System__luzes_mem;

typedef struct System__luzes_out {
  int l_state;
} System__luzes_out;

void System__luzes_reset(System__luzes_mem* self);

void System__luzes_step(int c1, int c2, System__luzes_out* _out,
                        System__luzes_mem* self);

typedef struct System__persianas_mem {
  int v_194;
  int v_193;
  int pnr;
} System__persianas_mem;

typedef struct System__persianas_out {
  int p_state;
} System__persianas_out;

void System__persianas_reset(System__persianas_mem* self);

void System__persianas_step(int policy, System__persianas_out* _out,
                            System__persianas_mem* self);

typedef struct System__ar_condicionado_mem {
  int v_210;
  int v_209;
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

typedef struct System__controller_mem {
  int v_230;
  int v_229;
  int v_246;
  int v_245;
  int ck_25_1;
  int ck_23_1;
  int ck_21_1;
  int ck_19_1;
  int ck_17_1;
  int ck_15_1;
  int ck_13_1;
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
  int p_open;
  int r_on1;
  int presence;
  int presence_t;
  int pc_on;
  int w_open;
  int arm_open;
  int lampada;
  int persiana;
  int ar_state;
  int policy;
} System__controller_out;

void System__controller_reset(System__controller_mem* self);

void System__controller_step(int shift_turno, int abre_porta, int p_arrived,
                             int p1_arrived, int ilumination_up,
                             int ilumination_down,
                             System__controller_out* _out,
                             System__controller_mem* self);

#endif // SYSTEM_H
