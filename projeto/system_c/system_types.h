/* --- Generated the 8/7/2018 at 14:29 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jun. 15 15:41:53 CET 2018) --- */
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
  System__St_22_Open,
  System__St_22_Locked
} System__st_22;

System__st_22 System__st_22_of_string(char* s);

char* string_of_System__st_22(System__st_22 x, char* buf);

typedef enum {
  System__St_21_Preent,
  System__St_21_Not_Present
} System__st_21;

System__st_21 System__st_21_of_string(char* s);

char* string_of_System__st_21(System__st_21 x, char* buf);

typedef enum {
  System__St_20_Preent,
  System__St_20_Not_Present
} System__st_20;

System__st_20 System__st_20_of_string(char* s);

char* string_of_System__st_20(System__st_20 x, char* buf);

typedef enum {
  System__St_19_On,
  System__St_19_Off
} System__st_19;

System__st_19 System__st_19_of_string(char* s);

char* string_of_System__st_19(System__st_19 x, char* buf);

typedef enum {
  System__St_18_Open,
  System__St_18_Closed
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
  System__St_16_Funcionando,
  System__St_16_Falha
} System__st_16;

System__st_16 System__st_16_of_string(char* s);

char* string_of_System__st_16(System__st_16 x, char* buf);

typedef enum {
  System__St_15_Off_Up,
  System__St_15_Off,
  System__St_15_Min,
  System__St_15_Max_Up,
  System__St_15_Max
} System__st_15;

System__st_15 System__st_15_of_string(char* s);

char* string_of_System__st_15(System__st_15 x, char* buf);

typedef enum {
  System__St_14_Funcionando,
  System__St_14_Falha
} System__st_14;

System__st_14 System__st_14_of_string(char* s);

char* string_of_System__st_14(System__st_14 x, char* buf);

typedef enum {
  System__St_13_Off,
  System__St_13_Min,
  System__St_13_Max
} System__st_13;

System__st_13 System__st_13_of_string(char* s);

char* string_of_System__st_13(System__st_13 x, char* buf);

typedef enum {
  System__St_12_Funcionando,
  System__St_12_Falha
} System__st_12;

System__st_12 System__st_12_of_string(char* s);

char* string_of_System__st_12(System__st_12 x, char* buf);

typedef enum {
  System__St_11_Off_Up,
  System__St_11_Off,
  System__St_11_Min,
  System__St_11_Max_Up,
  System__St_11_Max
} System__st_11;

System__st_11 System__st_11_of_string(char* s);

char* string_of_System__st_11(System__st_11 x, char* buf);

typedef enum {
  System__St_10_Funcionando,
  System__St_10_Falha
} System__st_10;

System__st_10 System__st_10_of_string(char* s);

char* string_of_System__st_10(System__st_10 x, char* buf);

typedef enum {
  System__St_9_Funcionando,
  System__St_9_Falha
} System__st_9;

System__st_9 System__st_9_of_string(char* s);

char* string_of_System__st_9(System__st_9 x, char* buf);

typedef enum {
  System__St_8_Noite,
  System__St_8_Dia
} System__st_8;

System__st_8 System__st_8_of_string(char* s);

char* string_of_System__st_8(System__st_8 x, char* buf);

typedef enum {
  System__St_7_Off,
  System__St_7_Min,
  System__St_7_Max
} System__st_7;

System__st_7 System__st_7_of_string(char* s);

char* string_of_System__st_7(System__st_7 x, char* buf);

typedef enum {
  System__St_6_Open,
  System__St_6_Closed
} System__st_6;

System__st_6 System__st_6_of_string(char* s);

char* string_of_System__st_6(System__st_6 x, char* buf);

typedef enum {
  System__St_5_On,
  System__St_5_Off
} System__st_5;

System__st_5 System__st_5_of_string(char* s);

char* string_of_System__st_5(System__st_5 x, char* buf);

typedef enum {
  System__St_4_Preent,
  System__St_4_Not_Present
} System__st_4;

System__st_4 System__st_4_of_string(char* s);

char* string_of_System__st_4(System__st_4 x, char* buf);

typedef enum {
  System__St_3_Open,
  System__St_3_Locked
} System__st_3;

System__st_3 System__st_3_of_string(char* s);

char* string_of_System__st_3(System__st_3 x, char* buf);

typedef enum {
  System__St_2_On,
  System__St_2_Off
} System__st_2;

System__st_2 System__st_2_of_string(char* s);

char* string_of_System__st_2(System__st_2 x, char* buf);

typedef enum {
  System__St_1_Open,
  System__St_1_Closed
} System__st_1;

System__st_1 System__st_1_of_string(char* s);

char* string_of_System__st_1(System__st_1 x, char* buf);

typedef enum {
  System__St_Off_Up,
  System__St_Off,
  System__St_Min,
  System__St_Max_Up,
  System__St_Max
} System__st;

System__st System__st_of_string(char* s);

char* string_of_System__st(System__st x, char* buf);

#endif // SYSTEM_TYPES_H
