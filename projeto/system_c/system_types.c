/* --- Generated the 21/7/2018 at 18:39 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jun. 15 15:41:53 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "system_types.h"

System__st_25 System__st_25_of_string(char* s) {
  if ((strcmp(s, "St_25_Noite")==0)) {
    return System__St_25_Noite;
  };
  if ((strcmp(s, "St_25_Dia")==0)) {
    return System__St_25_Dia;
  };
}

char* string_of_System__st_25(System__st_25 x, char* buf) {
  switch (x) {
    case System__St_25_Noite:
      strcpy(buf, "St_25_Noite");
      break;
    case System__St_25_Dia:
      strcpy(buf, "St_25_Dia");
      break;
    default:
      break;
  };
  return buf;
}

System__st_24 System__st_24_of_string(char* s) {
  if ((strcmp(s, "St_24_Open")==0)) {
    return System__St_24_Open;
  };
  if ((strcmp(s, "St_24_Closed")==0)) {
    return System__St_24_Closed;
  };
}

char* string_of_System__st_24(System__st_24 x, char* buf) {
  switch (x) {
    case System__St_24_Open:
      strcpy(buf, "St_24_Open");
      break;
    case System__St_24_Closed:
      strcpy(buf, "St_24_Closed");
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
  if ((strcmp(s, "St_23_Locked")==0)) {
    return System__St_23_Locked;
  };
}

char* string_of_System__st_23(System__st_23 x, char* buf) {
  switch (x) {
    case System__St_23_Open:
      strcpy(buf, "St_23_Open");
      break;
    case System__St_23_Locked:
      strcpy(buf, "St_23_Locked");
      break;
    default:
      break;
  };
  return buf;
}

System__st_22 System__st_22_of_string(char* s) {
  if ((strcmp(s, "St_22_Present")==0)) {
    return System__St_22_Present;
  };
  if ((strcmp(s, "St_22_Not_Present")==0)) {
    return System__St_22_Not_Present;
  };
}

char* string_of_System__st_22(System__st_22 x, char* buf) {
  switch (x) {
    case System__St_22_Present:
      strcpy(buf, "St_22_Present");
      break;
    case System__St_22_Not_Present:
      strcpy(buf, "St_22_Not_Present");
      break;
    default:
      break;
  };
  return buf;
}

System__st_21 System__st_21_of_string(char* s) {
  if ((strcmp(s, "St_21_Present")==0)) {
    return System__St_21_Present;
  };
  if ((strcmp(s, "St_21_Not_Present")==0)) {
    return System__St_21_Not_Present;
  };
}

char* string_of_System__st_21(System__st_21 x, char* buf) {
  switch (x) {
    case System__St_21_Present:
      strcpy(buf, "St_21_Present");
      break;
    case System__St_21_Not_Present:
      strcpy(buf, "St_21_Not_Present");
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
  if ((strcmp(s, "St_19_Open")==0)) {
    return System__St_19_Open;
  };
  if ((strcmp(s, "St_19_Closed")==0)) {
    return System__St_19_Closed;
  };
}

char* string_of_System__st_19(System__st_19 x, char* buf) {
  switch (x) {
    case System__St_19_Open:
      strcpy(buf, "St_19_Open");
      break;
    case System__St_19_Closed:
      strcpy(buf, "St_19_Closed");
      break;
    default:
      break;
  };
  return buf;
}

System__st_18 System__st_18_of_string(char* s) {
  if ((strcmp(s, "St_18_Off")==0)) {
    return System__St_18_Off;
  };
  if ((strcmp(s, "St_18_Min")==0)) {
    return System__St_18_Min;
  };
  if ((strcmp(s, "St_18_Max")==0)) {
    return System__St_18_Max;
  };
}

char* string_of_System__st_18(System__st_18 x, char* buf) {
  switch (x) {
    case System__St_18_Off:
      strcpy(buf, "St_18_Off");
      break;
    case System__St_18_Min:
      strcpy(buf, "St_18_Min");
      break;
    case System__St_18_Max:
      strcpy(buf, "St_18_Max");
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
  if ((strcmp(s, "St_16_On")==0)) {
    return System__St_16_On;
  };
  if ((strcmp(s, "St_16_Off")==0)) {
    return System__St_16_Off;
  };
}

char* string_of_System__st_16(System__st_16 x, char* buf) {
  switch (x) {
    case System__St_16_On:
      strcpy(buf, "St_16_On");
      break;
    case System__St_16_Off:
      strcpy(buf, "St_16_Off");
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
  if ((strcmp(s, "St_12_On")==0)) {
    return System__St_12_On;
  };
  if ((strcmp(s, "St_12_Off")==0)) {
    return System__St_12_Off;
  };
}

char* string_of_System__st_12(System__st_12 x, char* buf) {
  switch (x) {
    case System__St_12_On:
      strcpy(buf, "St_12_On");
      break;
    case System__St_12_Off:
      strcpy(buf, "St_12_Off");
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
  if ((strcmp(s, "St_10_Off")==0)) {
    return System__St_10_Off;
  };
  if ((strcmp(s, "St_10_Min")==0)) {
    return System__St_10_Min;
  };
  if ((strcmp(s, "St_10_Max")==0)) {
    return System__St_10_Max;
  };
}

char* string_of_System__st_10(System__st_10 x, char* buf) {
  switch (x) {
    case System__St_10_Off:
      strcpy(buf, "St_10_Off");
      break;
    case System__St_10_Min:
      strcpy(buf, "St_10_Min");
      break;
    case System__St_10_Max:
      strcpy(buf, "St_10_Max");
      break;
    default:
      break;
  };
  return buf;
}

System__st_9 System__st_9_of_string(char* s) {
  if ((strcmp(s, "St_9_Funcionando")==0)) {
    return System__St_9_Funcionando;
  };
  if ((strcmp(s, "St_9_Falha")==0)) {
    return System__St_9_Falha;
  };
}

char* string_of_System__st_9(System__st_9 x, char* buf) {
  switch (x) {
    case System__St_9_Funcionando:
      strcpy(buf, "St_9_Funcionando");
      break;
    case System__St_9_Falha:
      strcpy(buf, "St_9_Falha");
      break;
    default:
      break;
  };
  return buf;
}

System__st_8 System__st_8_of_string(char* s) {
  if ((strcmp(s, "St_8_Funcionando")==0)) {
    return System__St_8_Funcionando;
  };
  if ((strcmp(s, "St_8_Falha")==0)) {
    return System__St_8_Falha;
  };
}

char* string_of_System__st_8(System__st_8 x, char* buf) {
  switch (x) {
    case System__St_8_Funcionando:
      strcpy(buf, "St_8_Funcionando");
      break;
    case System__St_8_Falha:
      strcpy(buf, "St_8_Falha");
      break;
    default:
      break;
  };
  return buf;
}

System__st_7 System__st_7_of_string(char* s) {
  if ((strcmp(s, "St_7_Noite")==0)) {
    return System__St_7_Noite;
  };
  if ((strcmp(s, "St_7_Dia")==0)) {
    return System__St_7_Dia;
  };
}

char* string_of_System__st_7(System__st_7 x, char* buf) {
  switch (x) {
    case System__St_7_Noite:
      strcpy(buf, "St_7_Noite");
      break;
    case System__St_7_Dia:
      strcpy(buf, "St_7_Dia");
      break;
    default:
      break;
  };
  return buf;
}

System__st_6 System__st_6_of_string(char* s) {
  if ((strcmp(s, "St_6_Off")==0)) {
    return System__St_6_Off;
  };
  if ((strcmp(s, "St_6_Min")==0)) {
    return System__St_6_Min;
  };
  if ((strcmp(s, "St_6_Max")==0)) {
    return System__St_6_Max;
  };
}

char* string_of_System__st_6(System__st_6 x, char* buf) {
  switch (x) {
    case System__St_6_Off:
      strcpy(buf, "St_6_Off");
      break;
    case System__St_6_Min:
      strcpy(buf, "St_6_Min");
      break;
    case System__St_6_Max:
      strcpy(buf, "St_6_Max");
      break;
    default:
      break;
  };
  return buf;
}

System__st_5 System__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_Open")==0)) {
    return System__St_5_Open;
  };
  if ((strcmp(s, "St_5_Closed")==0)) {
    return System__St_5_Closed;
  };
}

char* string_of_System__st_5(System__st_5 x, char* buf) {
  switch (x) {
    case System__St_5_Open:
      strcpy(buf, "St_5_Open");
      break;
    case System__St_5_Closed:
      strcpy(buf, "St_5_Closed");
      break;
    default:
      break;
  };
  return buf;
}

System__st_4 System__st_4_of_string(char* s) {
  if ((strcmp(s, "St_4_On")==0)) {
    return System__St_4_On;
  };
  if ((strcmp(s, "St_4_Off")==0)) {
    return System__St_4_Off;
  };
}

char* string_of_System__st_4(System__st_4 x, char* buf) {
  switch (x) {
    case System__St_4_On:
      strcpy(buf, "St_4_On");
      break;
    case System__St_4_Off:
      strcpy(buf, "St_4_Off");
      break;
    default:
      break;
  };
  return buf;
}

System__st_3 System__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_Present")==0)) {
    return System__St_3_Present;
  };
  if ((strcmp(s, "St_3_Not_Present")==0)) {
    return System__St_3_Not_Present;
  };
}

char* string_of_System__st_3(System__st_3 x, char* buf) {
  switch (x) {
    case System__St_3_Present:
      strcpy(buf, "St_3_Present");
      break;
    case System__St_3_Not_Present:
      strcpy(buf, "St_3_Not_Present");
      break;
    default:
      break;
  };
  return buf;
}

System__st_2 System__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_Open")==0)) {
    return System__St_2_Open;
  };
  if ((strcmp(s, "St_2_Locked")==0)) {
    return System__St_2_Locked;
  };
}

char* string_of_System__st_2(System__st_2 x, char* buf) {
  switch (x) {
    case System__St_2_Open:
      strcpy(buf, "St_2_Open");
      break;
    case System__St_2_Locked:
      strcpy(buf, "St_2_Locked");
      break;
    default:
      break;
  };
  return buf;
}

System__st_1 System__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_Open")==0)) {
    return System__St_1_Open;
  };
  if ((strcmp(s, "St_1_Closed")==0)) {
    return System__St_1_Closed;
  };
}

char* string_of_System__st_1(System__st_1 x, char* buf) {
  switch (x) {
    case System__St_1_Open:
      strcpy(buf, "St_1_Open");
      break;
    case System__St_1_Closed:
      strcpy(buf, "St_1_Closed");
      break;
    default:
      break;
  };
  return buf;
}

System__st System__st_of_string(char* s) {
  if ((strcmp(s, "St_On")==0)) {
    return System__St_On;
  };
  if ((strcmp(s, "St_Off")==0)) {
    return System__St_Off;
  };
}

char* string_of_System__st(System__st x, char* buf) {
  switch (x) {
    case System__St_On:
      strcpy(buf, "St_On");
      break;
    case System__St_Off:
      strcpy(buf, "St_Off");
      break;
    default:
      break;
  };
  return buf;
}

