/* --- Generated the 6/6/2018 at 23:19 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jan. 19 10:22:24 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#ifndef SYSTEM_TYPES_H
#define SYSTEM_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "controller_controller.h"
typedef enum {
  System__St_15_Off,
  System__St_15_High,
  System__St_15_Frostprotection,
  System__St_15_Eco
} System__st_15;

System__st_15 System__st_15_of_string(char* s);

char* string_of_System__st_15(System__st_15 x, char* buf);

typedef enum {
  System__St_14_Water_fill,
  System__St_14_Washing,
  System__St_14_Standby,
  System__St_14_Spin,
  System__St_14_Rinse,
  System__St_14_Off
} System__st_14;

System__st_14 System__st_14_of_string(char* s);

char* string_of_System__st_14(System__st_14 x, char* buf);

typedef enum {
  System__St_13_Standby,
  System__St_13_Reheat,
  System__St_13_Off,
  System__St_13_Maintain,
  System__St_13_Heat
} System__st_13;

System__st_13 System__st_13_of_string(char* s);

char* string_of_System__st_13(System__st_13 x, char* buf);

typedef enum {
  System__St_12_Open,
  System__St_12_Closed
} System__st_12;

System__st_12 System__st_12_of_string(char* s);

char* string_of_System__st_12(System__st_12 x, char* buf);

typedef enum {
  System__St_11_Open,
  System__St_11_Closed
} System__st_11;

System__st_11 System__st_11_of_string(char* s);

char* string_of_System__st_11(System__st_11 x, char* buf);

typedef enum {
  System__St_10_Ligado,
  System__St_10_Desligado
} System__st_10;

System__st_10 System__st_10_of_string(char* s);

char* string_of_System__st_10(System__st_10 x, char* buf);

typedef enum {
  System__St_9_Ligado,
  System__St_9_Desligado
} System__st_9;

System__st_9 System__st_9_of_string(char* s);

char* string_of_System__st_9(System__st_9 x, char* buf);

typedef enum {
  System__St_8_Ocupied,
  System__St_8_Empty
} System__st_8;

System__st_8 System__st_8_of_string(char* s);

char* string_of_System__st_8(System__st_8 x, char* buf);

typedef enum {
  System__St_7_Minimal_safety,
  System__St_7_Eco,
  System__St_7_Comfort
} System__st_7;

System__st_7 System__st_7_of_string(char* s);

char* string_of_System__st_7(System__st_7 x, char* buf);

typedef enum {
  System__St_6_Minimal_safety,
  System__St_6_Eco,
  System__St_6_Comfort
} System__st_6;

System__st_6 System__st_6_of_string(char* s);

char* string_of_System__st_6(System__st_6 x, char* buf);

typedef enum {
  System__St_5_Standby,
  System__St_5_Reheat,
  System__St_5_Off,
  System__St_5_Maintain,
  System__St_5_Heat
} System__st_5;

System__st_5 System__st_5_of_string(char* s);

char* string_of_System__st_5(System__st_5 x, char* buf);

typedef enum {
  System__St_4_Water_fill,
  System__St_4_Washing,
  System__St_4_Standby,
  System__St_4_Spin,
  System__St_4_Rinse,
  System__St_4_Off
} System__st_4;

System__st_4 System__st_4_of_string(char* s);

char* string_of_System__st_4(System__st_4 x, char* buf);

typedef enum {
  System__St_3_Off,
  System__St_3_High,
  System__St_3_Frostprotection,
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
  System__St_1_Ligado,
  System__St_1_Desligado
} System__st_1;

System__st_1 System__st_1_of_string(char* s);

char* string_of_System__st_1(System__st_1 x, char* buf);

typedef enum {
  System__St_Ocupied,
  System__St_Empty
} System__st;

System__st System__st_of_string(char* s);

char* string_of_System__st(System__st x, char* buf);

typedef enum {
  System__Minimal,
  System__Eco,
  System__Confort
} System__modes;

System__modes System__modes_of_string(char* s);

char* string_of_System__modes(System__modes x, char* buf);

#endif // SYSTEM_TYPES_H
