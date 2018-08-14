/* --- Generated the 14/8/2018 at 12:30 --- */
/* --- heptagon compiler, version 1.03.00 (compiled mon. aug. 6 15:37:40 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#ifndef SYSTEM_TYPES_H
#define SYSTEM_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "controller_controller.h"
typedef enum {
  System__St_17_Noite,
  System__St_17_Dia
} System__st_17;

System__st_17 System__st_17_of_string(char* s);

char* string_of_System__st_17(System__st_17 x, char* buf);

typedef enum {
  System__St_16_Present,
  System__St_16_Not_Present
} System__st_16;

System__st_16 System__st_16_of_string(char* s);

char* string_of_System__st_16(System__st_16 x, char* buf);

typedef enum {
  System__St_15_Present,
  System__St_15_Not_Present
} System__st_15;

System__st_15 System__st_15_of_string(char* s);

char* string_of_System__st_15(System__st_15 x, char* buf);

typedef enum {
  System__St_14_On_fail,
  System__St_14_On,
  System__St_14_Off_fail,
  System__St_14_Off
} System__st_14;

System__st_14 System__st_14_of_string(char* s);

char* string_of_System__st_14(System__st_14 x, char* buf);

typedef enum {
  System__St_13_Open_fail,
  System__St_13_Open,
  System__St_13_Closed_fail,
  System__St_13_Closed
} System__st_13;

System__st_13 System__st_13_of_string(char* s);

char* string_of_System__st_13(System__st_13 x, char* buf);

typedef enum {
  System__St_12_Open_fail,
  System__St_12_Open,
  System__St_12_Locked_fail,
  System__St_12_Locked
} System__st_12;

System__st_12 System__st_12_of_string(char* s);

char* string_of_System__st_12(System__st_12 x, char* buf);

typedef enum {
  System__St_11_Open_fail,
  System__St_11_Open,
  System__St_11_Closed_fail,
  System__St_11_Closed
} System__st_11;

System__st_11 System__st_11_of_string(char* s);

char* string_of_System__st_11(System__st_11 x, char* buf);

typedef enum {
  System__St_10_Off_fail,
  System__St_10_Off,
  System__St_10_Min_fail,
  System__St_10_Min,
  System__St_10_Max_fail,
  System__St_10_Max
} System__st_10;

System__st_10 System__st_10_of_string(char* s);

char* string_of_System__st_10(System__st_10 x, char* buf);

typedef enum {
  System__St_9_On_fail,
  System__St_9_On,
  System__St_9_Off_fail,
  System__St_9_Off
} System__st_9;

System__st_9 System__st_9_of_string(char* s);

char* string_of_System__st_9(System__st_9 x, char* buf);

typedef enum {
  System__St_8_On_fail,
  System__St_8_On,
  System__St_8_Off_fail,
  System__St_8_Off
} System__st_8;

System__st_8 System__st_8_of_string(char* s);

char* string_of_System__st_8(System__st_8 x, char* buf);

typedef enum {
  System__St_7_Noite,
  System__St_7_Dia
} System__st_7;

System__st_7 System__st_7_of_string(char* s);

char* string_of_System__st_7(System__st_7 x, char* buf);

typedef enum {
  System__St_6_Present,
  System__St_6_Not_Present
} System__st_6;

System__st_6 System__st_6_of_string(char* s);

char* string_of_System__st_6(System__st_6 x, char* buf);

typedef enum {
  System__St_5_Off_fail,
  System__St_5_Off,
  System__St_5_Min_fail,
  System__St_5_Min,
  System__St_5_Max_fail,
  System__St_5_Max
} System__st_5;

System__st_5 System__st_5_of_string(char* s);

char* string_of_System__st_5(System__st_5 x, char* buf);

typedef enum {
  System__St_4_Open_fail,
  System__St_4_Open,
  System__St_4_Closed_fail,
  System__St_4_Closed
} System__st_4;

System__st_4 System__st_4_of_string(char* s);

char* string_of_System__st_4(System__st_4 x, char* buf);

typedef enum {
  System__St_3_On_fail,
  System__St_3_On,
  System__St_3_Off_fail,
  System__St_3_Off
} System__st_3;

System__st_3 System__st_3_of_string(char* s);

char* string_of_System__st_3(System__st_3 x, char* buf);

typedef enum {
  System__St_2_Open_fail,
  System__St_2_Open,
  System__St_2_Locked_fail,
  System__St_2_Locked
} System__st_2;

System__st_2 System__st_2_of_string(char* s);

char* string_of_System__st_2(System__st_2 x, char* buf);

typedef enum {
  System__St_1_Open_fail,
  System__St_1_Open,
  System__St_1_Closed_fail,
  System__St_1_Closed
} System__st_1;

System__st_1 System__st_1_of_string(char* s);

char* string_of_System__st_1(System__st_1 x, char* buf);

typedef enum {
  System__St_On_fail,
  System__St_On,
  System__St_Off_fail,
  System__St_Off
} System__st;

System__st System__st_of_string(char* s);

char* string_of_System__st(System__st x, char* buf);

#endif // SYSTEM_TYPES_H
