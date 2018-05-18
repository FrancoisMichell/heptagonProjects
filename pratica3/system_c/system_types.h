/* --- Generated the 18/5/2018 at 17:58 --- */
/* --- heptagon compiler, version 1.03.00 (compiled mon. jan. 29 17:16:2 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#ifndef SYSTEM_TYPES_H
#define SYSTEM_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "controller_controller.h"
typedef enum {
  System__St_7_Minimal_safety,
  System__St_7_Eco,
  System__St_7_Confort
} System__st_7;

System__st_7 System__st_7_of_string(char* s);

char* string_of_System__st_7(System__st_7 x, char* buf);

typedef enum {
  System__St_6_Off,
  System__St_6_High,
  System__St_6_Frost_Protection,
  System__St_6_Eco
} System__st_6;

System__st_6 System__st_6_of_string(char* s);

char* string_of_System__st_6(System__st_6 x, char* buf);

typedef enum {
  System__St_5_Ocupied,
  System__St_5_Empty
} System__st_5;

System__st_5 System__st_5_of_string(char* s);

char* string_of_System__st_5(System__st_5 x, char* buf);

typedef enum {
  System__St_4_Open,
  System__St_4_Closed
} System__st_4;

System__st_4 System__st_4_of_string(char* s);

char* string_of_System__st_4(System__st_4 x, char* buf);

typedef enum {
  System__St_3_Off,
  System__St_3_High,
  System__St_3_Frost_Protection,
  System__St_3_Eco
} System__st_3;

System__st_3 System__st_3_of_string(char* s);

char* string_of_System__st_3(System__st_3 x, char* buf);

typedef enum {
  System__St_2_Open,
  System__St_2_Closed
} System__st_2;

System__st_2 System__st_2_of_string(char* s);

char* string_of_System__st_2(System__st_2 x, char* buf);

typedef enum {
  System__St_1_Minimal_safety,
  System__St_1_Eco,
  System__St_1_Confort
} System__st_1;

System__st_1 System__st_1_of_string(char* s);

char* string_of_System__st_1(System__st_1 x, char* buf);

typedef enum {
  System__St_Ocupied,
  System__St_Empty
} System__st;

System__st System__st_of_string(char* s);

char* string_of_System__st(System__st x, char* buf);

#endif // SYSTEM_TYPES_H
