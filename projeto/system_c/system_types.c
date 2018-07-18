/* --- Generated the 18/7/2018 at 10:59 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "system_types.h"

System__st_29 System__st_29_of_string(char* s) {
  if ((strcmp(s, "St_29_Noite")==0)) {
    return System__St_29_Noite;
  };
  if ((strcmp(s, "St_29_Dia")==0)) {
    return System__St_29_Dia;
  };
}

char* string_of_System__st_29(System__st_29 x, char* buf) {
  switch (x) {
    case System__St_29_Noite:
      strcpy(buf, "St_29_Noite");
      break;
    case System__St_29_Dia:
      strcpy(buf, "St_29_Dia");
      break;
    default:
      break;
  };
  return buf;
}

System__st_28 System__st_28_of_string(char* s) {
  if ((strcmp(s, "St_28_Open")==0)) {
    return System__St_28_Open;
  };
  if ((strcmp(s, "St_28_Closed")==0)) {
    return System__St_28_Closed;
  };
}

char* string_of_System__st_28(System__st_28 x, char* buf) {
  switch (x) {
    case System__St_28_Open:
      strcpy(buf, "St_28_Open");
      break;
    case System__St_28_Closed:
      strcpy(buf, "St_28_Closed");
      break;
    default:
      break;
  };
  return buf;
}

System__st_27 System__st_27_of_string(char* s) {
  if ((strcmp(s, "St_27_Open")==0)) {
    return System__St_27_Open;
  };
  if ((strcmp(s, "St_27_Locked")==0)) {
    return System__St_27_Locked;
  };
}

char* string_of_System__st_27(System__st_27 x, char* buf) {
  switch (x) {
    case System__St_27_Open:
      strcpy(buf, "St_27_Open");
      break;
    case System__St_27_Locked:
      strcpy(buf, "St_27_Locked");
      break;
    default:
      break;
  };
  return buf;
}

System__st_26 System__st_26_of_string(char* s) {
  if ((strcmp(s, "St_26_Present")==0)) {
    return System__St_26_Present;
  };
  if ((strcmp(s, "St_26_Not_Present")==0)) {
    return System__St_26_Not_Present;
  };
}

char* string_of_System__st_26(System__st_26 x, char* buf) {
  switch (x) {
    case System__St_26_Present:
      strcpy(buf, "St_26_Present");
      break;
    case System__St_26_Not_Present:
      strcpy(buf, "St_26_Not_Present");
      break;
    default:
      break;
  };
  return buf;
}

System__st_25 System__st_25_of_string(char* s) {
  if ((strcmp(s, "St_25_Present")==0)) {
    return System__St_25_Present;
  };
  if ((strcmp(s, "St_25_Not_Present")==0)) {
    return System__St_25_Not_Present;
  };
}

char* string_of_System__st_25(System__st_25 x, char* buf) {
  switch (x) {
    case System__St_25_Present:
      strcpy(buf, "St_25_Present");
      break;
    case System__St_25_Not_Present:
      strcpy(buf, "St_25_Not_Present");
      break;
    default:
      break;
  };
  return buf;
}

System__st_24 System__st_24_of_string(char* s) {
  if ((strcmp(s, "St_24_On")==0)) {
    return System__St_24_On;
  };
  if ((strcmp(s, "St_24_Off")==0)) {
    return System__St_24_Off;
  };
}

char* string_of_System__st_24(System__st_24 x, char* buf) {
  switch (x) {
    case System__St_24_On:
      strcpy(buf, "St_24_On");
      break;
    case System__St_24_Off:
      strcpy(buf, "St_24_Off");
      break;
    default:
      break;
  };
  return buf;
}

System__st_23 System__st_23_of_string(char* s) {
  if ((strcmp(s, "St_23_Open")==0)) {
    return System__St_23_Open;
  };
  if ((strcmp(s, "St_23_Closed")==0)) {
    return System__St_23_Closed;
  };
}

char* string_of_System__st_23(System__st_23 x, char* buf) {
  switch (x) {
    case System__St_23_Open:
      strcpy(buf, "St_23_Open");
      break;
    case System__St_23_Closed:
      strcpy(buf, "St_23_Closed");
      break;
    default:
      break;
  };
  return buf;
}

System__st_22 System__st_22_of_string(char* s) {
  if ((strcmp(s, "St_22_Off")==0)) {
    return System__St_22_Off;
  };
  if ((strcmp(s, "St_22_Min")==0)) {
    return System__St_22_Min;
  };
  if ((strcmp(s, "St_22_Max")==0)) {
    return System__St_22_Max;
  };
}

char* string_of_System__st_22(System__st_22 x, char* buf) {
  switch (x) {
    case System__St_22_Off:
      strcpy(buf, "St_22_Off");
      break;
    case System__St_22_Min:
      strcpy(buf, "St_22_Min");
      break;
    case System__St_22_Max:
      strcpy(buf, "St_22_Max");
      break;
    default:
      break;
  };
  return buf;
}

System__st_21 System__st_21_of_string(char* s) {
  if ((strcmp(s, "St_21_Funcionando")==0)) {
    return System__St_21_Funcionando;
  };
  if ((strcmp(s, "St_21_Falha")==0)) {
    return System__St_21_Falha;
  };
}

char* string_of_System__st_21(System__st_21 x, char* buf) {
  switch (x) {
    case System__St_21_Funcionando:
      strcpy(buf, "St_21_Funcionando");
      break;
    case System__St_21_Falha:
      strcpy(buf, "St_21_Falha");
      break;
    default:
      break;
  };
  return buf;
}

System__st_20 System__st_20_of_string(char* s) {
  if ((strcmp(s, "St_20_On")==0)) {
    return System__St_20_On;
  };
  if ((strcmp(s, "St_20_Off")==0)) {
    return System__St_20_Off;
  };
}

char* string_of_System__st_20(System__st_20 x, char* buf) {
  switch (x) {
    case System__St_20_On:
      strcpy(buf, "St_20_On");
      break;
    case System__St_20_Off:
      strcpy(buf, "St_20_Off");
      break;
    default:
      break;
  };
  return buf;
}

System__st_19 System__st_19_of_string(char* s) {
  if ((strcmp(s, "St_19_Funcionando")==0)) {
    return System__St_19_Funcionando;
  };
  if ((strcmp(s, "St_19_Falha")==0)) {
    return System__St_19_Falha;
  };
}

char* string_of_System__st_19(System__st_19 x, char* buf) {
  switch (x) {
    case System__St_19_Funcionando:
      strcpy(buf, "St_19_Funcionando");
      break;
    case System__St_19_Falha:
      strcpy(buf, "St_19_Falha");
      break;
    default:
      break;
  };
  return buf;
}

System__st_18 System__st_18_of_string(char* s) {
  if ((strcmp(s, "St_18_Up")==0)) {
    return System__St_18_Up;
  };
  if ((strcmp(s, "St_18_Down")==0)) {
    return System__St_18_Down;
  };
}

char* string_of_System__st_18(System__st_18 x, char* buf) {
  switch (x) {
    case System__St_18_Up:
      strcpy(buf, "St_18_Up");
      break;
    case System__St_18_Down:
      strcpy(buf, "St_18_Down");
      break;
    default:
      break;
  };
  return buf;
}

System__st_17 System__st_17_of_string(char* s) {
  if ((strcmp(s, "St_17_Funcionando")==0)) {
    return System__St_17_Funcionando;
  };
  if ((strcmp(s, "St_17_Falha")==0)) {
    return System__St_17_Falha;
  };
}

char* string_of_System__st_17(System__st_17 x, char* buf) {
  switch (x) {
    case System__St_17_Funcionando:
      strcpy(buf, "St_17_Funcionando");
      break;
    case System__St_17_Falha:
      strcpy(buf, "St_17_Falha");
      break;
    default:
      break;
  };
  return buf;
}

System__st_16 System__st_16_of_string(char* s) {
  if ((strcmp(s, "St_16_Up")==0)) {
    return System__St_16_Up;
  };
  if ((strcmp(s, "St_16_Down")==0)) {
    return System__St_16_Down;
  };
}

char* string_of_System__st_16(System__st_16 x, char* buf) {
  switch (x) {
    case System__St_16_Up:
      strcpy(buf, "St_16_Up");
      break;
    case System__St_16_Down:
      strcpy(buf, "St_16_Down");
      break;
    default:
      break;
  };
  return buf;
}

System__st_15 System__st_15_of_string(char* s) {
  if ((strcmp(s, "St_15_Funcionando")==0)) {
    return System__St_15_Funcionando;
  };
  if ((strcmp(s, "St_15_Falha")==0)) {
    return System__St_15_Falha;
  };
}

char* string_of_System__st_15(System__st_15 x, char* buf) {
  switch (x) {
    case System__St_15_Funcionando:
      strcpy(buf, "St_15_Funcionando");
      break;
    case System__St_15_Falha:
      strcpy(buf, "St_15_Falha");
      break;
    default:
      break;
  };
  return buf;
}

System__st_14 System__st_14_of_string(char* s) {
  if ((strcmp(s, "St_14_On")==0)) {
    return System__St_14_On;
  };
  if ((strcmp(s, "St_14_Off")==0)) {
    return System__St_14_Off;
  };
}

char* string_of_System__st_14(System__st_14 x, char* buf) {
  switch (x) {
    case System__St_14_On:
      strcpy(buf, "St_14_On");
      break;
    case System__St_14_Off:
      strcpy(buf, "St_14_Off");
      break;
    default:
      break;
  };
  return buf;
}

System__st_13 System__st_13_of_string(char* s) {
  if ((strcmp(s, "St_13_Funcionando")==0)) {
    return System__St_13_Funcionando;
  };
  if ((strcmp(s, "St_13_Falha")==0)) {
    return System__St_13_Falha;
  };
}

char* string_of_System__st_13(System__st_13 x, char* buf) {
  switch (x) {
    case System__St_13_Funcionando:
      strcpy(buf, "St_13_Funcionando");
      break;
    case System__St_13_Falha:
      strcpy(buf, "St_13_Falha");
      break;
    default:
      break;
  };
  return buf;
}

System__st_12 System__st_12_of_string(char* s) {
  if ((strcmp(s, "St_12_Off")==0)) {
    return System__St_12_Off;
  };
  if ((strcmp(s, "St_12_Min")==0)) {
    return System__St_12_Min;
  };
  if ((strcmp(s, "St_12_Max")==0)) {
    return System__St_12_Max;
  };
}

char* string_of_System__st_12(System__st_12 x, char* buf) {
  switch (x) {
    case System__St_12_Off:
      strcpy(buf, "St_12_Off");
      break;
    case System__St_12_Min:
      strcpy(buf, "St_12_Min");
      break;
    case System__St_12_Max:
      strcpy(buf, "St_12_Max");
      break;
    default:
      break;
  };
  return buf;
}

System__st_11 System__st_11_of_string(char* s) {
  if ((strcmp(s, "St_11_Funcionando")==0)) {
    return System__St_11_Funcionando;
  };
  if ((strcmp(s, "St_11_Falha")==0)) {
    return System__St_11_Falha;
  };
}

char* string_of_System__st_11(System__st_11 x, char* buf) {
  switch (x) {
    case System__St_11_Funcionando:
      strcpy(buf, "St_11_Funcionando");
      break;
    case System__St_11_Falha:
      strcpy(buf, "St_11_Falha");
      break;
    default:
      break;
  };
  return buf;
}

System__st_10 System__st_10_of_string(char* s) {
  if ((strcmp(s, "St_10_Funcionando")==0)) {
    return System__St_10_Funcionando;
  };
  if ((strcmp(s, "St_10_Falha")==0)) {
    return System__St_10_Falha;
  };
}

char* string_of_System__st_10(System__st_10 x, char* buf) {
  switch (x) {
    case System__St_10_Funcionando:
      strcpy(buf, "St_10_Funcionando");
      break;
    case System__St_10_Falha:
      strcpy(buf, "St_10_Falha");
      break;
    default:
      break;
  };
  return buf;
}

System__st_9 System__st_9_of_string(char* s) {
  if ((strcmp(s, "St_9_Noite")==0)) {
    return System__St_9_Noite;
  };
  if ((strcmp(s, "St_9_Dia")==0)) {
    return System__St_9_Dia;
  };
}

char* string_of_System__st_9(System__st_9 x, char* buf) {
  switch (x) {
    case System__St_9_Noite:
      strcpy(buf, "St_9_Noite");
      break;
    case System__St_9_Dia:
      strcpy(buf, "St_9_Dia");
      break;
    default:
      break;
  };
  return buf;
}

System__st_8 System__st_8_of_string(char* s) {
  if ((strcmp(s, "St_8_Off")==0)) {
    return System__St_8_Off;
  };
  if ((strcmp(s, "St_8_Min")==0)) {
    return System__St_8_Min;
  };
  if ((strcmp(s, "St_8_Max")==0)) {
    return System__St_8_Max;
  };
}

char* string_of_System__st_8(System__st_8 x, char* buf) {
  switch (x) {
    case System__St_8_Off:
      strcpy(buf, "St_8_Off");
      break;
    case System__St_8_Min:
      strcpy(buf, "St_8_Min");
      break;
    case System__St_8_Max:
      strcpy(buf, "St_8_Max");
      break;
    default:
      break;
  };
  return buf;
}

System__st_7 System__st_7_of_string(char* s) {
  if ((strcmp(s, "St_7_Open")==0)) {
    return System__St_7_Open;
  };
  if ((strcmp(s, "St_7_Closed")==0)) {
    return System__St_7_Closed;
  };
}

char* string_of_System__st_7(System__st_7 x, char* buf) {
  switch (x) {
    case System__St_7_Open:
      strcpy(buf, "St_7_Open");
      break;
    case System__St_7_Closed:
      strcpy(buf, "St_7_Closed");
      break;
    default:
      break;
  };
  return buf;
}

System__st_6 System__st_6_of_string(char* s) {
  if ((strcmp(s, "St_6_On")==0)) {
    return System__St_6_On;
  };
  if ((strcmp(s, "St_6_Off")==0)) {
    return System__St_6_Off;
  };
}

char* string_of_System__st_6(System__st_6 x, char* buf) {
  switch (x) {
    case System__St_6_On:
      strcpy(buf, "St_6_On");
      break;
    case System__St_6_Off:
      strcpy(buf, "St_6_Off");
      break;
    default:
      break;
  };
  return buf;
}

System__st_5 System__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_Present")==0)) {
    return System__St_5_Present;
  };
  if ((strcmp(s, "St_5_Not_Present")==0)) {
    return System__St_5_Not_Present;
  };
}

char* string_of_System__st_5(System__st_5 x, char* buf) {
  switch (x) {
    case System__St_5_Present:
      strcpy(buf, "St_5_Present");
      break;
    case System__St_5_Not_Present:
      strcpy(buf, "St_5_Not_Present");
      break;
    default:
      break;
  };
  return buf;
}

System__st_4 System__st_4_of_string(char* s) {
  if ((strcmp(s, "St_4_Open")==0)) {
    return System__St_4_Open;
  };
  if ((strcmp(s, "St_4_Locked")==0)) {
    return System__St_4_Locked;
  };
}

char* string_of_System__st_4(System__st_4 x, char* buf) {
  switch (x) {
    case System__St_4_Open:
      strcpy(buf, "St_4_Open");
      break;
    case System__St_4_Locked:
      strcpy(buf, "St_4_Locked");
      break;
    default:
      break;
  };
  return buf;
}

System__st_3 System__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_Open")==0)) {
    return System__St_3_Open;
  };
  if ((strcmp(s, "St_3_Closed")==0)) {
    return System__St_3_Closed;
  };
}

char* string_of_System__st_3(System__st_3 x, char* buf) {
  switch (x) {
    case System__St_3_Open:
      strcpy(buf, "St_3_Open");
      break;
    case System__St_3_Closed:
      strcpy(buf, "St_3_Closed");
      break;
    default:
      break;
  };
  return buf;
}

System__st_2 System__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_Up")==0)) {
    return System__St_2_Up;
  };
  if ((strcmp(s, "St_2_Down")==0)) {
    return System__St_2_Down;
  };
}

char* string_of_System__st_2(System__st_2 x, char* buf) {
  switch (x) {
    case System__St_2_Up:
      strcpy(buf, "St_2_Up");
      break;
    case System__St_2_Down:
      strcpy(buf, "St_2_Down");
      break;
    default:
      break;
  };
  return buf;
}

System__st_1 System__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_On")==0)) {
    return System__St_1_On;
  };
  if ((strcmp(s, "St_1_Off")==0)) {
    return System__St_1_Off;
  };
}

char* string_of_System__st_1(System__st_1 x, char* buf) {
  switch (x) {
    case System__St_1_On:
      strcpy(buf, "St_1_On");
      break;
    case System__St_1_Off:
      strcpy(buf, "St_1_Off");
      break;
    default:
      break;
  };
  return buf;
}

System__st System__st_of_string(char* s) {
  if ((strcmp(s, "St_Off_Up")==0)) {
    return System__St_Off_Up;
  };
  if ((strcmp(s, "St_Off")==0)) {
    return System__St_Off;
  };
  if ((strcmp(s, "St_Min")==0)) {
    return System__St_Min;
  };
  if ((strcmp(s, "St_Max_Up")==0)) {
    return System__St_Max_Up;
  };
  if ((strcmp(s, "St_Max")==0)) {
    return System__St_Max;
  };
}

char* string_of_System__st(System__st x, char* buf) {
  switch (x) {
    case System__St_Off_Up:
      strcpy(buf, "St_Off_Up");
      break;
    case System__St_Off:
      strcpy(buf, "St_Off");
      break;
    case System__St_Min:
      strcpy(buf, "St_Min");
      break;
    case System__St_Max_Up:
      strcpy(buf, "St_Max_Up");
      break;
    case System__St_Max:
      strcpy(buf, "St_Max");
      break;
    default:
      break;
  };
  return buf;
}

