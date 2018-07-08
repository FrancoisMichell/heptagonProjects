/* --- Generated the 8/7/2018 at 14:29 --- */
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
  if ((strcmp(s, "St_23_On")==0)) {
    return System__St_23_On;
  };
  if ((strcmp(s, "St_23_Off")==0)) {
    return System__St_23_Off;
  };
}

char* string_of_System__st_23(System__st_23 x, char* buf) {
  switch (x) {
    case System__St_23_On:
      strcpy(buf, "St_23_On");
      break;
    case System__St_23_Off:
      strcpy(buf, "St_23_Off");
      break;
    default:
      break;
  };
  return buf;
}

System__st_22 System__st_22_of_string(char* s) {
  if ((strcmp(s, "St_22_Open")==0)) {
    return System__St_22_Open;
  };
  if ((strcmp(s, "St_22_Locked")==0)) {
    return System__St_22_Locked;
  };
}

char* string_of_System__st_22(System__st_22 x, char* buf) {
  switch (x) {
    case System__St_22_Open:
      strcpy(buf, "St_22_Open");
      break;
    case System__St_22_Locked:
      strcpy(buf, "St_22_Locked");
      break;
    default:
      break;
  };
  return buf;
}

System__st_21 System__st_21_of_string(char* s) {
  if ((strcmp(s, "St_21_Preent")==0)) {
    return System__St_21_Preent;
  };
  if ((strcmp(s, "St_21_Not_Present")==0)) {
    return System__St_21_Not_Present;
  };
}

char* string_of_System__st_21(System__st_21 x, char* buf) {
  switch (x) {
    case System__St_21_Preent:
      strcpy(buf, "St_21_Preent");
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
  if ((strcmp(s, "St_20_Preent")==0)) {
    return System__St_20_Preent;
  };
  if ((strcmp(s, "St_20_Not_Present")==0)) {
    return System__St_20_Not_Present;
  };
}

char* string_of_System__st_20(System__st_20 x, char* buf) {
  switch (x) {
    case System__St_20_Preent:
      strcpy(buf, "St_20_Preent");
      break;
    case System__St_20_Not_Present:
      strcpy(buf, "St_20_Not_Present");
      break;
    default:
      break;
  };
  return buf;
}

System__st_19 System__st_19_of_string(char* s) {
  if ((strcmp(s, "St_19_On")==0)) {
    return System__St_19_On;
  };
  if ((strcmp(s, "St_19_Off")==0)) {
    return System__St_19_Off;
  };
}

char* string_of_System__st_19(System__st_19 x, char* buf) {
  switch (x) {
    case System__St_19_On:
      strcpy(buf, "St_19_On");
      break;
    case System__St_19_Off:
      strcpy(buf, "St_19_Off");
      break;
    default:
      break;
  };
  return buf;
}

System__st_18 System__st_18_of_string(char* s) {
  if ((strcmp(s, "St_18_Open")==0)) {
    return System__St_18_Open;
  };
  if ((strcmp(s, "St_18_Closed")==0)) {
    return System__St_18_Closed;
  };
}

char* string_of_System__st_18(System__st_18 x, char* buf) {
  switch (x) {
    case System__St_18_Open:
      strcpy(buf, "St_18_Open");
      break;
    case System__St_18_Closed:
      strcpy(buf, "St_18_Closed");
      break;
    default:
      break;
  };
  return buf;
}

System__st_17 System__st_17_of_string(char* s) {
  if ((strcmp(s, "St_17_Off")==0)) {
    return System__St_17_Off;
  };
  if ((strcmp(s, "St_17_Min")==0)) {
    return System__St_17_Min;
  };
  if ((strcmp(s, "St_17_Max")==0)) {
    return System__St_17_Max;
  };
}

char* string_of_System__st_17(System__st_17 x, char* buf) {
  switch (x) {
    case System__St_17_Off:
      strcpy(buf, "St_17_Off");
      break;
    case System__St_17_Min:
      strcpy(buf, "St_17_Min");
      break;
    case System__St_17_Max:
      strcpy(buf, "St_17_Max");
      break;
    default:
      break;
  };
  return buf;
}

System__st_16 System__st_16_of_string(char* s) {
  if ((strcmp(s, "St_16_Funcionando")==0)) {
    return System__St_16_Funcionando;
  };
  if ((strcmp(s, "St_16_Falha")==0)) {
    return System__St_16_Falha;
  };
}

char* string_of_System__st_16(System__st_16 x, char* buf) {
  switch (x) {
    case System__St_16_Funcionando:
      strcpy(buf, "St_16_Funcionando");
      break;
    case System__St_16_Falha:
      strcpy(buf, "St_16_Falha");
      break;
    default:
      break;
  };
  return buf;
}

System__st_15 System__st_15_of_string(char* s) {
  if ((strcmp(s, "St_15_Off_Up")==0)) {
    return System__St_15_Off_Up;
  };
  if ((strcmp(s, "St_15_Off")==0)) {
    return System__St_15_Off;
  };
  if ((strcmp(s, "St_15_Min")==0)) {
    return System__St_15_Min;
  };
  if ((strcmp(s, "St_15_Max_Up")==0)) {
    return System__St_15_Max_Up;
  };
  if ((strcmp(s, "St_15_Max")==0)) {
    return System__St_15_Max;
  };
}

char* string_of_System__st_15(System__st_15 x, char* buf) {
  switch (x) {
    case System__St_15_Off_Up:
      strcpy(buf, "St_15_Off_Up");
      break;
    case System__St_15_Off:
      strcpy(buf, "St_15_Off");
      break;
    case System__St_15_Min:
      strcpy(buf, "St_15_Min");
      break;
    case System__St_15_Max_Up:
      strcpy(buf, "St_15_Max_Up");
      break;
    case System__St_15_Max:
      strcpy(buf, "St_15_Max");
      break;
    default:
      break;
  };
  return buf;
}

System__st_14 System__st_14_of_string(char* s) {
  if ((strcmp(s, "St_14_Funcionando")==0)) {
    return System__St_14_Funcionando;
  };
  if ((strcmp(s, "St_14_Falha")==0)) {
    return System__St_14_Falha;
  };
}

char* string_of_System__st_14(System__st_14 x, char* buf) {
  switch (x) {
    case System__St_14_Funcionando:
      strcpy(buf, "St_14_Funcionando");
      break;
    case System__St_14_Falha:
      strcpy(buf, "St_14_Falha");
      break;
    default:
      break;
  };
  return buf;
}

System__st_13 System__st_13_of_string(char* s) {
  if ((strcmp(s, "St_13_Off")==0)) {
    return System__St_13_Off;
  };
  if ((strcmp(s, "St_13_Min")==0)) {
    return System__St_13_Min;
  };
  if ((strcmp(s, "St_13_Max")==0)) {
    return System__St_13_Max;
  };
}

char* string_of_System__st_13(System__st_13 x, char* buf) {
  switch (x) {
    case System__St_13_Off:
      strcpy(buf, "St_13_Off");
      break;
    case System__St_13_Min:
      strcpy(buf, "St_13_Min");
      break;
    case System__St_13_Max:
      strcpy(buf, "St_13_Max");
      break;
    default:
      break;
  };
  return buf;
}

System__st_12 System__st_12_of_string(char* s) {
  if ((strcmp(s, "St_12_Funcionando")==0)) {
    return System__St_12_Funcionando;
  };
  if ((strcmp(s, "St_12_Falha")==0)) {
    return System__St_12_Falha;
  };
}

char* string_of_System__st_12(System__st_12 x, char* buf) {
  switch (x) {
    case System__St_12_Funcionando:
      strcpy(buf, "St_12_Funcionando");
      break;
    case System__St_12_Falha:
      strcpy(buf, "St_12_Falha");
      break;
    default:
      break;
  };
  return buf;
}

System__st_11 System__st_11_of_string(char* s) {
  if ((strcmp(s, "St_11_Off_Up")==0)) {
    return System__St_11_Off_Up;
  };
  if ((strcmp(s, "St_11_Off")==0)) {
    return System__St_11_Off;
  };
  if ((strcmp(s, "St_11_Min")==0)) {
    return System__St_11_Min;
  };
  if ((strcmp(s, "St_11_Max_Up")==0)) {
    return System__St_11_Max_Up;
  };
  if ((strcmp(s, "St_11_Max")==0)) {
    return System__St_11_Max;
  };
}

char* string_of_System__st_11(System__st_11 x, char* buf) {
  switch (x) {
    case System__St_11_Off_Up:
      strcpy(buf, "St_11_Off_Up");
      break;
    case System__St_11_Off:
      strcpy(buf, "St_11_Off");
      break;
    case System__St_11_Min:
      strcpy(buf, "St_11_Min");
      break;
    case System__St_11_Max_Up:
      strcpy(buf, "St_11_Max_Up");
      break;
    case System__St_11_Max:
      strcpy(buf, "St_11_Max");
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
  if ((strcmp(s, "St_8_Noite")==0)) {
    return System__St_8_Noite;
  };
  if ((strcmp(s, "St_8_Dia")==0)) {
    return System__St_8_Dia;
  };
}

char* string_of_System__st_8(System__st_8 x, char* buf) {
  switch (x) {
    case System__St_8_Noite:
      strcpy(buf, "St_8_Noite");
      break;
    case System__St_8_Dia:
      strcpy(buf, "St_8_Dia");
      break;
    default:
      break;
  };
  return buf;
}

System__st_7 System__st_7_of_string(char* s) {
  if ((strcmp(s, "St_7_Off")==0)) {
    return System__St_7_Off;
  };
  if ((strcmp(s, "St_7_Min")==0)) {
    return System__St_7_Min;
  };
  if ((strcmp(s, "St_7_Max")==0)) {
    return System__St_7_Max;
  };
}

char* string_of_System__st_7(System__st_7 x, char* buf) {
  switch (x) {
    case System__St_7_Off:
      strcpy(buf, "St_7_Off");
      break;
    case System__St_7_Min:
      strcpy(buf, "St_7_Min");
      break;
    case System__St_7_Max:
      strcpy(buf, "St_7_Max");
      break;
    default:
      break;
  };
  return buf;
}

System__st_6 System__st_6_of_string(char* s) {
  if ((strcmp(s, "St_6_Open")==0)) {
    return System__St_6_Open;
  };
  if ((strcmp(s, "St_6_Closed")==0)) {
    return System__St_6_Closed;
  };
}

char* string_of_System__st_6(System__st_6 x, char* buf) {
  switch (x) {
    case System__St_6_Open:
      strcpy(buf, "St_6_Open");
      break;
    case System__St_6_Closed:
      strcpy(buf, "St_6_Closed");
      break;
    default:
      break;
  };
  return buf;
}

System__st_5 System__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_On")==0)) {
    return System__St_5_On;
  };
  if ((strcmp(s, "St_5_Off")==0)) {
    return System__St_5_Off;
  };
}

char* string_of_System__st_5(System__st_5 x, char* buf) {
  switch (x) {
    case System__St_5_On:
      strcpy(buf, "St_5_On");
      break;
    case System__St_5_Off:
      strcpy(buf, "St_5_Off");
      break;
    default:
      break;
  };
  return buf;
}

System__st_4 System__st_4_of_string(char* s) {
  if ((strcmp(s, "St_4_Preent")==0)) {
    return System__St_4_Preent;
  };
  if ((strcmp(s, "St_4_Not_Present")==0)) {
    return System__St_4_Not_Present;
  };
}

char* string_of_System__st_4(System__st_4 x, char* buf) {
  switch (x) {
    case System__St_4_Preent:
      strcpy(buf, "St_4_Preent");
      break;
    case System__St_4_Not_Present:
      strcpy(buf, "St_4_Not_Present");
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
  if ((strcmp(s, "St_3_Locked")==0)) {
    return System__St_3_Locked;
  };
}

char* string_of_System__st_3(System__st_3 x, char* buf) {
  switch (x) {
    case System__St_3_Open:
      strcpy(buf, "St_3_Open");
      break;
    case System__St_3_Locked:
      strcpy(buf, "St_3_Locked");
      break;
    default:
      break;
  };
  return buf;
}

System__st_2 System__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_On")==0)) {
    return System__St_2_On;
  };
  if ((strcmp(s, "St_2_Off")==0)) {
    return System__St_2_Off;
  };
}

char* string_of_System__st_2(System__st_2 x, char* buf) {
  switch (x) {
    case System__St_2_On:
      strcpy(buf, "St_2_On");
      break;
    case System__St_2_Off:
      strcpy(buf, "St_2_Off");
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

