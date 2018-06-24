/* --- Generated the 15/6/2018 at 15:43 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jun. 15 15:41:53 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller device.ept --- */

#ifndef DEVICE_H
#define DEVICE_H

#include "device_types.h"
typedef struct Device__rad_mem {
  int v_26;
  int v_25;
  int pnr;
} Device__rad_mem;

typedef struct Device__rad_out {
  int s;
  int p;
} Device__rad_out;

void Device__rad_reset(Device__rad_mem* self);

void Device__rad_step(int up1, int up2, int down1, int down2,
                      Device__rad_out* _out, Device__rad_mem* self);

typedef struct Device__controller_mem {
  int v_44;
  int v_43;
  int pnr;
} Device__controller_mem;

typedef struct Device__controller_out {
  int state1;
  int power1;
} Device__controller_out;

void Device__controller_reset(Device__controller_mem* self);

void Device__controller_step(int up1_1, int up2_1, int down1_1, int down2_1,
                             Device__controller_out* _out,
                             Device__controller_mem* self);

#endif // DEVICE_H
