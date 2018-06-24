/* --- Generated the 23/6/2018 at 14:33 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jun. 15 15:41:53 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "system_types.h"

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
  if ((strcmp(s, "St_18_Some")==0)) {
    return System__St_18_Some;
  };
  if ((strcmp(s, "St_18_None")==0)) {
    return System__St_18_None;
  };
  if ((strcmp(s, "St_18_All")==0)) {
    return System__St_18_All;
  };
}

char* string_of_System__st_18(System__st_18 x, char* buf) {
  switch (x) {
    case System__St_18_Some:
      strcpy(buf, "St_18_Some");
      break;
    case System__St_18_None:
      strcpy(buf, "St_18_None");
      break;
    case System__St_18_All:
      strcpy(buf, "St_18_All");
      break;
    default:
      break;
  };
  return buf;
}

System__st_17 System__st_17_of_string(char* s) {
  if ((strcmp(s, "St_17_Up")==0)) {
    return System__St_17_Up;
  };
  if ((strcmp(s, "St_17_Mid")==0)) {
    return System__St_17_Mid;
  };
  if ((strcmp(s, "St_17_Down")==0)) {
    return System__St_17_Down;
  };
}

char* string_of_System__st_17(System__st_17 x, char* buf) {
  switch (x) {
    case System__St_17_Up:
      strcpy(buf, "St_17_Up");
      break;
    case System__St_17_Mid:
      strcpy(buf, "St_17_Mid");
      break;
    case System__St_17_Down:
      strcpy(buf, "St_17_Down");
      break;
    default:
      break;
  };
  return buf;
}

System__st_16 System__st_16_of_string(char* s) {
  if ((strcmp(s, "St_16_Off")==0)) {
    return System__St_16_Off;
  };
  if ((strcmp(s, "St_16_Min")==0)) {
    return System__St_16_Min;
  };
  if ((strcmp(s, "St_16_Max")==0)) {
    return System__St_16_Max;
  };
}

char* string_of_System__st_16(System__st_16 x, char* buf) {
  switch (x) {
    case System__St_16_Off:
      strcpy(buf, "St_16_Off");
      break;
    case System__St_16_Min:
      strcpy(buf, "St_16_Min");
      break;
    case System__St_16_Max:
      strcpy(buf, "St_16_Max");
      break;
    default:
      break;
  };
  return buf;
}

System__st_15 System__st_15_of_string(char* s) {
  if ((strcmp(s, "St_15_Off")==0)) {
    return System__St_15_Off;
  };
  if ((strcmp(s, "St_15_Min")==0)) {
    return System__St_15_Min;
  };
  if ((strcmp(s, "St_15_Max")==0)) {
    return System__St_15_Max;
  };
}

char* string_of_System__st_15(System__st_15 x, char* buf) {
  switch (x) {
    case System__St_15_Off:
      strcpy(buf, "St_15_Off");
      break;
    case System__St_15_Min:
      strcpy(buf, "St_15_Min");
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
  if ((strcmp(s, "St_14_Up")==0)) {
    return System__St_14_Up;
  };
  if ((strcmp(s, "St_14_Mid")==0)) {
    return System__St_14_Mid;
  };
  if ((strcmp(s, "St_14_Down")==0)) {
    return System__St_14_Down;
  };
}

char* string_of_System__st_14(System__st_14 x, char* buf) {
  switch (x) {
    case System__St_14_Up:
      strcpy(buf, "St_14_Up");
      break;
    case System__St_14_Mid:
      strcpy(buf, "St_14_Mid");
      break;
    case System__St_14_Down:
      strcpy(buf, "St_14_Down");
      break;
    default:
      break;
  };
  return buf;
}

System__st_13 System__st_13_of_string(char* s) {
  if ((strcmp(s, "St_13_Some")==0)) {
    return System__St_13_Some;
  };
  if ((strcmp(s, "St_13_None")==0)) {
    return System__St_13_None;
  };
  if ((strcmp(s, "St_13_All")==0)) {
    return System__St_13_All;
  };
}

char* string_of_System__st_13(System__st_13 x, char* buf) {
  switch (x) {
    case System__St_13_Some:
      strcpy(buf, "St_13_Some");
      break;
    case System__St_13_None:
      strcpy(buf, "St_13_None");
      break;
    case System__St_13_All:
      strcpy(buf, "St_13_All");
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
  if ((strcmp(s, "St_11_On")==0)) {
    return System__St_11_On;
  };
  if ((strcmp(s, "St_11_Off")==0)) {
    return System__St_11_Off;
  };
}

char* string_of_System__st_11(System__st_11 x, char* buf) {
  switch (x) {
    case System__St_11_On:
      strcpy(buf, "St_11_On");
      break;
    case System__St_11_Off:
      strcpy(buf, "St_11_Off");
      break;
    default:
      break;
  };
  return buf;
}

System__st_10 System__st_10_of_string(char* s) {
  if ((strcmp(s, "St_10_Preent")==0)) {
    return System__St_10_Preent;
  };
  if ((strcmp(s, "St_10_Not_Present")==0)) {
    return System__St_10_Not_Present;
  };
}

char* string_of_System__st_10(System__st_10 x, char* buf) {
  switch (x) {
    case System__St_10_Preent:
      strcpy(buf, "St_10_Preent");
      break;
    case System__St_10_Not_Present:
      strcpy(buf, "St_10_Not_Present");
      break;
    default:
      break;
  };
  return buf;
}

System__st_9 System__st_9_of_string(char* s) {
  if ((strcmp(s, "St_9_Open")==0)) {
    return System__St_9_Open;
  };
  if ((strcmp(s, "St_9_Locked")==0)) {
    return System__St_9_Locked;
  };
}

char* string_of_System__st_9(System__st_9 x, char* buf) {
  switch (x) {
    case System__St_9_Open:
      strcpy(buf, "St_9_Open");
      break;
    case System__St_9_Locked:
      strcpy(buf, "St_9_Locked");
      break;
    default:
      break;
  };
  return buf;
}

System__st_8 System__st_8_of_string(char* s) {
  if ((strcmp(s, "St_8_On")==0)) {
    return System__St_8_On;
  };
  if ((strcmp(s, "St_8_Off")==0)) {
    return System__St_8_Off;
  };
}

char* string_of_System__st_8(System__st_8 x, char* buf) {
  switch (x) {
    case System__St_8_On:
      strcpy(buf, "St_8_On");
      break;
    case System__St_8_Off:
      strcpy(buf, "St_8_Off");
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
  if ((strcmp(s, "St_6_Minimal_safety")==0)) {
    return System__St_6_Minimal_safety;
  };
  if ((strcmp(s, "St_6_Eco")==0)) {
    return System__St_6_Eco;
  };
  if ((strcmp(s, "St_6_Comfort")==0)) {
    return System__St_6_Comfort;
  };
}

char* string_of_System__st_6(System__st_6 x, char* buf) {
  switch (x) {
    case System__St_6_Minimal_safety:
      strcpy(buf, "St_6_Minimal_safety");
      break;
    case System__St_6_Eco:
      strcpy(buf, "St_6_Eco");
      break;
    case System__St_6_Comfort:
      strcpy(buf, "St_6_Comfort");
      break;
    default:
      break;
  };
  return buf;
}

System__st_5 System__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_Standby")==0)) {
    return System__St_5_Standby;
  };
  if ((strcmp(s, "St_5_Reheat")==0)) {
    return System__St_5_Reheat;
  };
  if ((strcmp(s, "St_5_Off")==0)) {
    return System__St_5_Off;
  };
  if ((strcmp(s, "St_5_Maintain")==0)) {
    return System__St_5_Maintain;
  };
  if ((strcmp(s, "St_5_Heat")==0)) {
    return System__St_5_Heat;
  };
}

char* string_of_System__st_5(System__st_5 x, char* buf) {
  switch (x) {
    case System__St_5_Standby:
      strcpy(buf, "St_5_Standby");
      break;
    case System__St_5_Reheat:
      strcpy(buf, "St_5_Reheat");
      break;
    case System__St_5_Off:
      strcpy(buf, "St_5_Off");
      break;
    case System__St_5_Maintain:
      strcpy(buf, "St_5_Maintain");
      break;
    case System__St_5_Heat:
      strcpy(buf, "St_5_Heat");
      break;
    default:
      break;
  };
  return buf;
}

System__st_4 System__st_4_of_string(char* s) {
  if ((strcmp(s, "St_4_Water_fill")==0)) {
    return System__St_4_Water_fill;
  };
  if ((strcmp(s, "St_4_Washing")==0)) {
    return System__St_4_Washing;
  };
  if ((strcmp(s, "St_4_Standby")==0)) {
    return System__St_4_Standby;
  };
  if ((strcmp(s, "St_4_Spin")==0)) {
    return System__St_4_Spin;
  };
  if ((strcmp(s, "St_4_Rinse")==0)) {
    return System__St_4_Rinse;
  };
  if ((strcmp(s, "St_4_Off")==0)) {
    return System__St_4_Off;
  };
}

char* string_of_System__st_4(System__st_4 x, char* buf) {
  switch (x) {
    case System__St_4_Water_fill:
      strcpy(buf, "St_4_Water_fill");
      break;
    case System__St_4_Washing:
      strcpy(buf, "St_4_Washing");
      break;
    case System__St_4_Standby:
      strcpy(buf, "St_4_Standby");
      break;
    case System__St_4_Spin:
      strcpy(buf, "St_4_Spin");
      break;
    case System__St_4_Rinse:
      strcpy(buf, "St_4_Rinse");
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
  if ((strcmp(s, "St_3_Off")==0)) {
    return System__St_3_Off;
  };
  if ((strcmp(s, "St_3_High")==0)) {
    return System__St_3_High;
  };
  if ((strcmp(s, "St_3_Frostprotection")==0)) {
    return System__St_3_Frostprotection;
  };
  if ((strcmp(s, "St_3_Eco")==0)) {
    return System__St_3_Eco;
  };
}

char* string_of_System__st_3(System__st_3 x, char* buf) {
  switch (x) {
    case System__St_3_Off:
      strcpy(buf, "St_3_Off");
      break;
    case System__St_3_High:
      strcpy(buf, "St_3_High");
      break;
    case System__St_3_Frostprotection:
      strcpy(buf, "St_3_Frostprotection");
      break;
    case System__St_3_Eco:
      strcpy(buf, "St_3_Eco");
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
  if ((strcmp(s, "St_1_Ligado")==0)) {
    return System__St_1_Ligado;
  };
  if ((strcmp(s, "St_1_Desligado")==0)) {
    return System__St_1_Desligado;
  };
}

char* string_of_System__st_1(System__st_1 x, char* buf) {
  switch (x) {
    case System__St_1_Ligado:
      strcpy(buf, "St_1_Ligado");
      break;
    case System__St_1_Desligado:
      strcpy(buf, "St_1_Desligado");
      break;
    default:
      break;
  };
  return buf;
}

System__st System__st_of_string(char* s) {
  if ((strcmp(s, "St_Ocupied")==0)) {
    return System__St_Ocupied;
  };
  if ((strcmp(s, "St_Empty")==0)) {
    return System__St_Empty;
  };
}

char* string_of_System__st(System__st x, char* buf) {
  switch (x) {
    case System__St_Ocupied:
      strcpy(buf, "St_Ocupied");
      break;
    case System__St_Empty:
      strcpy(buf, "St_Empty");
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

