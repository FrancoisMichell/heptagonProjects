/* --- Generated the 2/7/2018 at 20:29 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jun. 15 15:41:53 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "system_types.h"

System__st_21 System__st_21_of_string(char* s) {
  if ((strcmp(s, "St_21_Noite")==0)) {
    return System__St_21_Noite;
  };
  if ((strcmp(s, "St_21_Dia")==0)) {
    return System__St_21_Dia;
  };
}

char* string_of_System__st_21(System__st_21 x, char* buf) {
  switch (x) {
    case System__St_21_Noite:
      strcpy(buf, "St_21_Noite");
      break;
    case System__St_21_Dia:
      strcpy(buf, "St_21_Dia");
      break;
    default:
      break;
  };
  return buf;
}

System__st_20 System__st_20_of_string(char* s) {
  if ((strcmp(s, "St_20_Open")==0)) {
    return System__St_20_Open;
  };
  if ((strcmp(s, "St_20_Closed")==0)) {
    return System__St_20_Closed;
  };
}

char* string_of_System__st_20(System__st_20 x, char* buf) {
  switch (x) {
    case System__St_20_Open:
      strcpy(buf, "St_20_Open");
      break;
    case System__St_20_Closed:
      strcpy(buf, "St_20_Closed");
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
  if ((strcmp(s, "St_18_Locked")==0)) {
    return System__St_18_Locked;
  };
}

char* string_of_System__st_18(System__st_18 x, char* buf) {
  switch (x) {
    case System__St_18_Open:
      strcpy(buf, "St_18_Open");
      break;
    case System__St_18_Locked:
      strcpy(buf, "St_18_Locked");
      break;
    default:
      break;
  };
  return buf;
}

System__st_17 System__st_17_of_string(char* s) {
  if ((strcmp(s, "St_17_Preent")==0)) {
    return System__St_17_Preent;
  };
  if ((strcmp(s, "St_17_Not_Present")==0)) {
    return System__St_17_Not_Present;
  };
}

char* string_of_System__st_17(System__st_17 x, char* buf) {
  switch (x) {
    case System__St_17_Preent:
      strcpy(buf, "St_17_Preent");
      break;
    case System__St_17_Not_Present:
      strcpy(buf, "St_17_Not_Present");
      break;
    default:
      break;
  };
  return buf;
}

System__st_16 System__st_16_of_string(char* s) {
  if ((strcmp(s, "St_16_Preent")==0)) {
    return System__St_16_Preent;
  };
  if ((strcmp(s, "St_16_Not_Present")==0)) {
    return System__St_16_Not_Present;
  };
}

char* string_of_System__st_16(System__st_16 x, char* buf) {
  switch (x) {
    case System__St_16_Preent:
      strcpy(buf, "St_16_Preent");
      break;
    case System__St_16_Not_Present:
      strcpy(buf, "St_16_Not_Present");
      break;
    default:
      break;
  };
  return buf;
}

System__st_15 System__st_15_of_string(char* s) {
  if ((strcmp(s, "St_15_On")==0)) {
    return System__St_15_On;
  };
  if ((strcmp(s, "St_15_Off")==0)) {
    return System__St_15_Off;
  };
}

char* string_of_System__st_15(System__st_15 x, char* buf) {
  switch (x) {
    case System__St_15_On:
      strcpy(buf, "St_15_On");
      break;
    case System__St_15_Off:
      strcpy(buf, "St_15_Off");
      break;
    default:
      break;
  };
  return buf;
}

System__st_14 System__st_14_of_string(char* s) {
  if ((strcmp(s, "St_14_Open")==0)) {
    return System__St_14_Open;
  };
  if ((strcmp(s, "St_14_Closed")==0)) {
    return System__St_14_Closed;
  };
}

char* string_of_System__st_14(System__st_14 x, char* buf) {
  switch (x) {
    case System__St_14_Open:
      strcpy(buf, "St_14_Open");
      break;
    case System__St_14_Closed:
      strcpy(buf, "St_14_Closed");
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
  if ((strcmp(s, "St_12_Natural")==0)) {
    return System__St_12_Natural;
  };
  if ((strcmp(s, "St_12_Half")==0)) {
    return System__St_12_Half;
  };
  if ((strcmp(s, "St_12_Artificial")==0)) {
    return System__St_12_Artificial;
  };
}

char* string_of_System__st_12(System__st_12 x, char* buf) {
  switch (x) {
    case System__St_12_Natural:
      strcpy(buf, "St_12_Natural");
      break;
    case System__St_12_Half:
      strcpy(buf, "St_12_Half");
      break;
    case System__St_12_Artificial:
      strcpy(buf, "St_12_Artificial");
      break;
    default:
      break;
  };
  return buf;
}

System__st_11 System__st_11_of_string(char* s) {
  if ((strcmp(s, "St_11_Noite")==0)) {
    return System__St_11_Noite;
  };
  if ((strcmp(s, "St_11_Dia")==0)) {
    return System__St_11_Dia;
  };
}

char* string_of_System__st_11(System__st_11 x, char* buf) {
  switch (x) {
    case System__St_11_Noite:
      strcpy(buf, "St_11_Noite");
      break;
    case System__St_11_Dia:
      strcpy(buf, "St_11_Dia");
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
  if ((strcmp(s, "St_9_Up")==0)) {
    return System__St_9_Up;
  };
  if ((strcmp(s, "St_9_Mid")==0)) {
    return System__St_9_Mid;
  };
  if ((strcmp(s, "St_9_Down")==0)) {
    return System__St_9_Down;
  };
}

char* string_of_System__st_9(System__st_9 x, char* buf) {
  switch (x) {
    case System__St_9_Up:
      strcpy(buf, "St_9_Up");
      break;
    case System__St_9_Mid:
      strcpy(buf, "St_9_Mid");
      break;
    case System__St_9_Down:
      strcpy(buf, "St_9_Down");
      break;
    default:
      break;
  };
  return buf;
}

System__st_8 System__st_8_of_string(char* s) {
  if ((strcmp(s, "St_8_Some")==0)) {
    return System__St_8_Some;
  };
  if ((strcmp(s, "St_8_None")==0)) {
    return System__St_8_None;
  };
  if ((strcmp(s, "St_8_All")==0)) {
    return System__St_8_All;
  };
}

char* string_of_System__st_8(System__st_8 x, char* buf) {
  switch (x) {
    case System__St_8_Some:
      strcpy(buf, "St_8_Some");
      break;
    case System__St_8_None:
      strcpy(buf, "St_8_None");
      break;
    case System__St_8_All:
      strcpy(buf, "St_8_All");
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
  if ((strcmp(s, "St_5_Preent")==0)) {
    return System__St_5_Preent;
  };
  if ((strcmp(s, "St_5_Not_Present")==0)) {
    return System__St_5_Not_Present;
  };
}

char* string_of_System__st_5(System__st_5 x, char* buf) {
  switch (x) {
    case System__St_5_Preent:
      strcpy(buf, "St_5_Preent");
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
  if ((strcmp(s, "St_3_On")==0)) {
    return System__St_3_On;
  };
  if ((strcmp(s, "St_3_Off")==0)) {
    return System__St_3_Off;
  };
}

char* string_of_System__st_3(System__st_3 x, char* buf) {
  switch (x) {
    case System__St_3_On:
      strcpy(buf, "St_3_On");
      break;
    case System__St_3_Off:
      strcpy(buf, "St_3_Off");
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
  if ((strcmp(s, "St_2_Closed")==0)) {
    return System__St_2_Closed;
  };
}

char* string_of_System__st_2(System__st_2 x, char* buf) {
  switch (x) {
    case System__St_2_Open:
      strcpy(buf, "St_2_Open");
      break;
    case System__St_2_Closed:
      strcpy(buf, "St_2_Closed");
      break;
    default:
      break;
  };
  return buf;
}

System__st_1 System__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_Natural")==0)) {
    return System__St_1_Natural;
  };
  if ((strcmp(s, "St_1_Half")==0)) {
    return System__St_1_Half;
  };
  if ((strcmp(s, "St_1_Artificial")==0)) {
    return System__St_1_Artificial;
  };
}

char* string_of_System__st_1(System__st_1 x, char* buf) {
  switch (x) {
    case System__St_1_Natural:
      strcpy(buf, "St_1_Natural");
      break;
    case System__St_1_Half:
      strcpy(buf, "St_1_Half");
      break;
    case System__St_1_Artificial:
      strcpy(buf, "St_1_Artificial");
      break;
    default:
      break;
  };
  return buf;
}

System__st System__st_of_string(char* s) {
  if ((strcmp(s, "St_Minimal_safety")==0)) {
    return System__St_Minimal_safety;
  };
  if ((strcmp(s, "St_Eco")==0)) {
    return System__St_Eco;
  };
  if ((strcmp(s, "St_Comfort")==0)) {
    return System__St_Comfort;
  };
}

char* string_of_System__st(System__st x, char* buf) {
  switch (x) {
    case System__St_Minimal_safety:
      strcpy(buf, "St_Minimal_safety");
      break;
    case System__St_Eco:
      strcpy(buf, "St_Eco");
      break;
    case System__St_Comfort:
      strcpy(buf, "St_Comfort");
      break;
    default:
      break;
  };
  return buf;
}

System__modes System__modes_of_string(char* s) {
  if ((strcmp(s, "Minimal")==0)) {
    return System__Minimal;
  };
  if ((strcmp(s, "Eco")==0)) {
    return System__Eco;
  };
  if ((strcmp(s, "Confort")==0)) {
    return System__Confort;
  };
}

char* string_of_System__modes(System__modes x, char* buf) {
  switch (x) {
    case System__Minimal:
      strcpy(buf, "Minimal");
      break;
    case System__Eco:
      strcpy(buf, "Eco");
      break;
    case System__Confort:
      strcpy(buf, "Confort");
      break;
    default:
      break;
  };
  return buf;
}

