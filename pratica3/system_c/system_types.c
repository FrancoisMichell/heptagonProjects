/* --- Generated the 6/6/2018 at 23:19 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jan. 19 10:22:24 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "system_types.h"

System__st_15 System__st_15_of_string(char* s) {
  if ((strcmp(s, "St_15_Off")==0)) {
    return System__St_15_Off;
  };
  if ((strcmp(s, "St_15_High")==0)) {
    return System__St_15_High;
  };
  if ((strcmp(s, "St_15_Frostprotection")==0)) {
    return System__St_15_Frostprotection;
  };
  if ((strcmp(s, "St_15_Eco")==0)) {
    return System__St_15_Eco;
  };
}

char* string_of_System__st_15(System__st_15 x, char* buf) {
  switch (x) {
    case System__St_15_Off:
      strcpy(buf, "St_15_Off");
      break;
    case System__St_15_High:
      strcpy(buf, "St_15_High");
      break;
    case System__St_15_Frostprotection:
      strcpy(buf, "St_15_Frostprotection");
      break;
    case System__St_15_Eco:
      strcpy(buf, "St_15_Eco");
      break;
    default:
      break;
  };
  return buf;
}

System__st_14 System__st_14_of_string(char* s) {
  if ((strcmp(s, "St_14_Water_fill")==0)) {
    return System__St_14_Water_fill;
  };
  if ((strcmp(s, "St_14_Washing")==0)) {
    return System__St_14_Washing;
  };
  if ((strcmp(s, "St_14_Standby")==0)) {
    return System__St_14_Standby;
  };
  if ((strcmp(s, "St_14_Spin")==0)) {
    return System__St_14_Spin;
  };
  if ((strcmp(s, "St_14_Rinse")==0)) {
    return System__St_14_Rinse;
  };
  if ((strcmp(s, "St_14_Off")==0)) {
    return System__St_14_Off;
  };
}

char* string_of_System__st_14(System__st_14 x, char* buf) {
  switch (x) {
    case System__St_14_Water_fill:
      strcpy(buf, "St_14_Water_fill");
      break;
    case System__St_14_Washing:
      strcpy(buf, "St_14_Washing");
      break;
    case System__St_14_Standby:
      strcpy(buf, "St_14_Standby");
      break;
    case System__St_14_Spin:
      strcpy(buf, "St_14_Spin");
      break;
    case System__St_14_Rinse:
      strcpy(buf, "St_14_Rinse");
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
  if ((strcmp(s, "St_13_Standby")==0)) {
    return System__St_13_Standby;
  };
  if ((strcmp(s, "St_13_Reheat")==0)) {
    return System__St_13_Reheat;
  };
  if ((strcmp(s, "St_13_Off")==0)) {
    return System__St_13_Off;
  };
  if ((strcmp(s, "St_13_Maintain")==0)) {
    return System__St_13_Maintain;
  };
  if ((strcmp(s, "St_13_Heat")==0)) {
    return System__St_13_Heat;
  };
}

char* string_of_System__st_13(System__st_13 x, char* buf) {
  switch (x) {
    case System__St_13_Standby:
      strcpy(buf, "St_13_Standby");
      break;
    case System__St_13_Reheat:
      strcpy(buf, "St_13_Reheat");
      break;
    case System__St_13_Off:
      strcpy(buf, "St_13_Off");
      break;
    case System__St_13_Maintain:
      strcpy(buf, "St_13_Maintain");
      break;
    case System__St_13_Heat:
      strcpy(buf, "St_13_Heat");
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
  if ((strcmp(s, "St_11_Open")==0)) {
    return System__St_11_Open;
  };
  if ((strcmp(s, "St_11_Closed")==0)) {
    return System__St_11_Closed;
  };
}

char* string_of_System__st_11(System__st_11 x, char* buf) {
  switch (x) {
    case System__St_11_Open:
      strcpy(buf, "St_11_Open");
      break;
    case System__St_11_Closed:
      strcpy(buf, "St_11_Closed");
      break;
    default:
      break;
  };
  return buf;
}

System__st_10 System__st_10_of_string(char* s) {
  if ((strcmp(s, "St_10_Ligado")==0)) {
    return System__St_10_Ligado;
  };
  if ((strcmp(s, "St_10_Desligado")==0)) {
    return System__St_10_Desligado;
  };
}

char* string_of_System__st_10(System__st_10 x, char* buf) {
  switch (x) {
    case System__St_10_Ligado:
      strcpy(buf, "St_10_Ligado");
      break;
    case System__St_10_Desligado:
      strcpy(buf, "St_10_Desligado");
      break;
    default:
      break;
  };
  return buf;
}

System__st_9 System__st_9_of_string(char* s) {
  if ((strcmp(s, "St_9_Ligado")==0)) {
    return System__St_9_Ligado;
  };
  if ((strcmp(s, "St_9_Desligado")==0)) {
    return System__St_9_Desligado;
  };
}

char* string_of_System__st_9(System__st_9 x, char* buf) {
  switch (x) {
    case System__St_9_Ligado:
      strcpy(buf, "St_9_Ligado");
      break;
    case System__St_9_Desligado:
      strcpy(buf, "St_9_Desligado");
      break;
    default:
      break;
  };
  return buf;
}

System__st_8 System__st_8_of_string(char* s) {
  if ((strcmp(s, "St_8_Ocupied")==0)) {
    return System__St_8_Ocupied;
  };
  if ((strcmp(s, "St_8_Empty")==0)) {
    return System__St_8_Empty;
  };
}

char* string_of_System__st_8(System__st_8 x, char* buf) {
  switch (x) {
    case System__St_8_Ocupied:
      strcpy(buf, "St_8_Ocupied");
      break;
    case System__St_8_Empty:
      strcpy(buf, "St_8_Empty");
      break;
    default:
      break;
  };
  return buf;
}

System__st_7 System__st_7_of_string(char* s) {
  if ((strcmp(s, "St_7_Minimal_safety")==0)) {
    return System__St_7_Minimal_safety;
  };
  if ((strcmp(s, "St_7_Eco")==0)) {
    return System__St_7_Eco;
  };
  if ((strcmp(s, "St_7_Comfort")==0)) {
    return System__St_7_Comfort;
  };
}

char* string_of_System__st_7(System__st_7 x, char* buf) {
  switch (x) {
    case System__St_7_Minimal_safety:
      strcpy(buf, "St_7_Minimal_safety");
      break;
    case System__St_7_Eco:
      strcpy(buf, "St_7_Eco");
      break;
    case System__St_7_Comfort:
      strcpy(buf, "St_7_Comfort");
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

