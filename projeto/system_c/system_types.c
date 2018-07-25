/* --- Generated the 25/7/2018 at 10:17 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "system_types.h"

System__st_18 System__st_18_of_string(char* s) {
  if ((strcmp(s, "St_18_Noite")==0)) {
    return System__St_18_Noite;
  };
  if ((strcmp(s, "St_18_Dia")==0)) {
    return System__St_18_Dia;
  };
}

char* string_of_System__st_18(System__st_18 x, char* buf) {
  switch (x) {
    case System__St_18_Noite:
      strcpy(buf, "St_18_Noite");
      break;
    case System__St_18_Dia:
      strcpy(buf, "St_18_Dia");
      break;
    default:
      break;
  };
  return buf;
}

System__st_17 System__st_17_of_string(char* s) {
  if ((strcmp(s, "St_17_Open")==0)) {
    return System__St_17_Open;
  };
  if ((strcmp(s, "St_17_Closed")==0)) {
    return System__St_17_Closed;
  };
}

char* string_of_System__st_17(System__st_17 x, char* buf) {
  switch (x) {
    case System__St_17_Open:
      strcpy(buf, "St_17_Open");
      break;
    case System__St_17_Closed:
      strcpy(buf, "St_17_Closed");
      break;
    default:
      break;
  };
  return buf;
}

System__st_16 System__st_16_of_string(char* s) {
  if ((strcmp(s, "St_16_Open")==0)) {
    return System__St_16_Open;
  };
  if ((strcmp(s, "St_16_Locked")==0)) {
    return System__St_16_Locked;
  };
}

char* string_of_System__st_16(System__st_16 x, char* buf) {
  switch (x) {
    case System__St_16_Open:
      strcpy(buf, "St_16_Open");
      break;
    case System__St_16_Locked:
      strcpy(buf, "St_16_Locked");
      break;
    default:
      break;
  };
  return buf;
}

System__st_15 System__st_15_of_string(char* s) {
  if ((strcmp(s, "St_15_Present")==0)) {
    return System__St_15_Present;
  };
  if ((strcmp(s, "St_15_Not_Present")==0)) {
    return System__St_15_Not_Present;
  };
}

char* string_of_System__st_15(System__st_15 x, char* buf) {
  switch (x) {
    case System__St_15_Present:
      strcpy(buf, "St_15_Present");
      break;
    case System__St_15_Not_Present:
      strcpy(buf, "St_15_Not_Present");
      break;
    default:
      break;
  };
  return buf;
}

System__st_14 System__st_14_of_string(char* s) {
  if ((strcmp(s, "St_14_Present")==0)) {
    return System__St_14_Present;
  };
  if ((strcmp(s, "St_14_Not_Present")==0)) {
    return System__St_14_Not_Present;
  };
}

char* string_of_System__st_14(System__st_14 x, char* buf) {
  switch (x) {
    case System__St_14_Present:
      strcpy(buf, "St_14_Present");
      break;
    case System__St_14_Not_Present:
      strcpy(buf, "St_14_Not_Present");
      break;
    default:
      break;
  };
  return buf;
}

System__st_13 System__st_13_of_string(char* s) {
  if ((strcmp(s, "St_13_On")==0)) {
    return System__St_13_On;
  };
  if ((strcmp(s, "St_13_Off")==0)) {
    return System__St_13_Off;
  };
}

char* string_of_System__st_13(System__st_13 x, char* buf) {
  switch (x) {
    case System__St_13_On:
      strcpy(buf, "St_13_On");
      break;
    case System__St_13_Off:
      strcpy(buf, "St_13_Off");
      break;
    default:
      break;
  };
  return buf;
}

System__st_12 System__st_12_of_string(char* s) {
  if ((strcmp(s, "St_12_Open")==0)) {
    return System__St_12_Open;
  };
  if ((strcmp(s, "St_12_Closed")==0)) {
    return System__St_12_Closed;
  };
}

char* string_of_System__st_12(System__st_12 x, char* buf) {
  switch (x) {
    case System__St_12_Open:
      strcpy(buf, "St_12_Open");
      break;
    case System__St_12_Closed:
      strcpy(buf, "St_12_Closed");
      break;
    default:
      break;
  };
  return buf;
}

System__st_11 System__st_11_of_string(char* s) {
  if ((strcmp(s, "St_11_Off_fail")==0)) {
    return System__St_11_Off_fail;
  };
  if ((strcmp(s, "St_11_Off")==0)) {
    return System__St_11_Off;
  };
  if ((strcmp(s, "St_11_Min_fail")==0)) {
    return System__St_11_Min_fail;
  };
  if ((strcmp(s, "St_11_Min")==0)) {
    return System__St_11_Min;
  };
  if ((strcmp(s, "St_11_Max_fail")==0)) {
    return System__St_11_Max_fail;
  };
  if ((strcmp(s, "St_11_Max")==0)) {
    return System__St_11_Max;
  };
}

char* string_of_System__st_11(System__st_11 x, char* buf) {
  switch (x) {
    case System__St_11_Off_fail:
      strcpy(buf, "St_11_Off_fail");
      break;
    case System__St_11_Off:
      strcpy(buf, "St_11_Off");
      break;
    case System__St_11_Min_fail:
      strcpy(buf, "St_11_Min_fail");
      break;
    case System__St_11_Min:
      strcpy(buf, "St_11_Min");
      break;
    case System__St_11_Max_fail:
      strcpy(buf, "St_11_Max_fail");
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
  if ((strcmp(s, "St_10_On_fail")==0)) {
    return System__St_10_On_fail;
  };
  if ((strcmp(s, "St_10_On")==0)) {
    return System__St_10_On;
  };
  if ((strcmp(s, "St_10_Off_fail")==0)) {
    return System__St_10_Off_fail;
  };
  if ((strcmp(s, "St_10_Off")==0)) {
    return System__St_10_Off;
  };
}

char* string_of_System__st_10(System__st_10 x, char* buf) {
  switch (x) {
    case System__St_10_On_fail:
      strcpy(buf, "St_10_On_fail");
      break;
    case System__St_10_On:
      strcpy(buf, "St_10_On");
      break;
    case System__St_10_Off_fail:
      strcpy(buf, "St_10_Off_fail");
      break;
    case System__St_10_Off:
      strcpy(buf, "St_10_Off");
      break;
    default:
      break;
  };
  return buf;
}

System__st_9 System__st_9_of_string(char* s) {
  if ((strcmp(s, "St_9_On_fail")==0)) {
    return System__St_9_On_fail;
  };
  if ((strcmp(s, "St_9_On")==0)) {
    return System__St_9_On;
  };
  if ((strcmp(s, "St_9_Off_fail")==0)) {
    return System__St_9_Off_fail;
  };
  if ((strcmp(s, "St_9_Off")==0)) {
    return System__St_9_Off;
  };
}

char* string_of_System__st_9(System__st_9 x, char* buf) {
  switch (x) {
    case System__St_9_On_fail:
      strcpy(buf, "St_9_On_fail");
      break;
    case System__St_9_On:
      strcpy(buf, "St_9_On");
      break;
    case System__St_9_Off_fail:
      strcpy(buf, "St_9_Off_fail");
      break;
    case System__St_9_Off:
      strcpy(buf, "St_9_Off");
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
  if ((strcmp(s, "St_6_Off_fail")==0)) {
    return System__St_6_Off_fail;
  };
  if ((strcmp(s, "St_6_Off")==0)) {
    return System__St_6_Off;
  };
  if ((strcmp(s, "St_6_Min_fail")==0)) {
    return System__St_6_Min_fail;
  };
  if ((strcmp(s, "St_6_Min")==0)) {
    return System__St_6_Min;
  };
  if ((strcmp(s, "St_6_Max_fail")==0)) {
    return System__St_6_Max_fail;
  };
  if ((strcmp(s, "St_6_Max")==0)) {
    return System__St_6_Max;
  };
}

char* string_of_System__st_6(System__st_6 x, char* buf) {
  switch (x) {
    case System__St_6_Off_fail:
      strcpy(buf, "St_6_Off_fail");
      break;
    case System__St_6_Off:
      strcpy(buf, "St_6_Off");
      break;
    case System__St_6_Min_fail:
      strcpy(buf, "St_6_Min_fail");
      break;
    case System__St_6_Min:
      strcpy(buf, "St_6_Min");
      break;
    case System__St_6_Max_fail:
      strcpy(buf, "St_6_Max_fail");
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
  if ((strcmp(s, "St_On_fail")==0)) {
    return System__St_On_fail;
  };
  if ((strcmp(s, "St_On")==0)) {
    return System__St_On;
  };
  if ((strcmp(s, "St_Off_fail")==0)) {
    return System__St_Off_fail;
  };
  if ((strcmp(s, "St_Off")==0)) {
    return System__St_Off;
  };
}

char* string_of_System__st(System__st x, char* buf) {
  switch (x) {
    case System__St_On_fail:
      strcpy(buf, "St_On_fail");
      break;
    case System__St_On:
      strcpy(buf, "St_On");
      break;
    case System__St_Off_fail:
      strcpy(buf, "St_Off_fail");
      break;
    case System__St_Off:
      strcpy(buf, "St_Off");
      break;
    default:
      break;
  };
  return buf;
}

