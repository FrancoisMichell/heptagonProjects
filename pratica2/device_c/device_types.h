/* --- Generated the 15/6/2018 at 15:43 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jun. 15 15:41:53 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller device.ept --- */

#ifndef DEVICE_TYPES_H
#define DEVICE_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  Device__St_1_Off,
  Device__St_1_High,
  Device__St_1_Frost_Protection,
  Device__St_1_Eco
} Device__st_1;

Device__st_1 Device__st_1_of_string(char* s);

char* string_of_Device__st_1(Device__st_1 x, char* buf);

typedef enum {
  Device__St_Off,
  Device__St_High,
  Device__St_Frost_Protection,
  Device__St_Eco
} Device__st;

Device__st Device__st_of_string(char* s);

char* string_of_Device__st(Device__st x, char* buf);

#endif // DEVICE_TYPES_H
