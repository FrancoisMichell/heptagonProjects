/* --- Generated the 25/6/2018 at 10:48 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#ifndef SYSTEM_TYPES_H
#define SYSTEM_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "controller_controller.h"
typedef enum {
  System__St_25_Noite,
  System__St_25_Dia
} System__st_25;

System__st_25 System__st_25_of_string(char* s);

char* string_of_System__st_25(System__st_25 x, char* buf);

typedef enum {
  System__St_24_Open,
  System__St_24_Closed
} System__st_24;

System__st_24 System__st_24_of_string(char* s);

char* string_of_System__st_24(System__st_24 x, char* buf);

typedef enum {
  System__St_23_On,
  System__St_23_Off
} System__st_23;

System__st_23 System__st_23_of_string(char* s);

char* string_of_System__st_23(System__st_23 x, char* buf);

typedef enum {
  System__St_22_Preent,
  System__St_22_Not_Present
} System__st_22;

System__st_22 System__st_22_of_string(char* s);

char* string_of_System__st_22(System__st_22 x, char* buf);

typedef enum {
  System__St_21_On,
  System__St_21_Off
} System__st_21;

System__st_21 System__st_21_of_string(char* s);

char* string_of_System__st_21(System__st_21 x, char* buf);

typedef enum {
  System__St_20_Open,
  System__St_20_Closed
} System__st_20;

System__st_20 System__st_20_of_string(char* s);

char* string_of_System__st_20(System__st_20 x, char* buf);

typedef enum {
  System__St_19_Some,
  System__St_19_None,
  System__St_19_All
} System__st_19;

System__st_19 System__st_19_of_string(char* s);

char* string_of_System__st_19(System__st_19 x, char* buf);

typedef enum {
  System__St_18_Up,
  System__St_18_Mid,
  System__St_18_Down
} System__st_18;

System__st_18 System__st_18_of_string(char* s);

char* string_of_System__st_18(System__st_18 x, char* buf);

typedef enum {
  System__St_17_Off,
  System__St_17_Min,
  System__St_17_Max
} System__st_17;

System__st_17 System__st_17_of_string(char* s);

char* string_of_System__st_17(System__st_17 x, char* buf);

typedef enum {
  System__St_16_Noite,
  System__St_16_Dia
} System__st_16;

System__st_16 System__st_16_of_string(char* s);

char* string_of_System__st_16(System__st_16 x, char* buf);

typedef enum {
  System__St_15_Off,
  System__St_15_Min,
  System__St_15_Max
} System__st_15;

System__st_15 System__st_15_of_string(char* s);

char* string_of_System__st_15(System__st_15 x, char* buf);

typedef enum {
  System__St_14_Up,
  System__St_14_Mid,
  System__St_14_Down
} System__st_14;

System__st_14 System__st_14_of_string(char* s);

char* string_of_System__st_14(System__st_14 x, char* buf);

typedef enum {
  System__St_13_Some,
  System__St_13_None,
  System__St_13_All
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
  System__St_11_On,
  System__St_11_Off
} System__st_11;

System__st_11 System__st_11_of_string(char* s);

char* string_of_System__st_11(System__st_11 x, char* buf);

typedef enum {
  System__St_10_Preent,
  System__St_10_Not_Present
} System__st_10;

System__st_10 System__st_10_of_string(char* s);

char* string_of_System__st_10(System__st_10 x, char* buf);

typedef enum {
  System__St_9_Open,
  System__St_9_Locked
} System__st_9;

System__st_9 System__st_9_of_string(char* s);

char* string_of_System__st_9(System__st_9 x, char* buf);

typedef enum {
  System__St_8_On,
  System__St_8_Off
} System__st_8;

System__st_8 System__st_8_of_string(char* s);

char* string_of_System__st_8(System__st_8 x, char* buf);

typedef enum {
  System__St_7_Open,
  System__St_7_Closed
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
