/* --- Generated the 22/5/2018 at 22:25 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jan. 19 10:22:24 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "system_types.h"

System__st_12 System__st_12_of_string(char* s) {
  if ((strcmp(s, "St_12_Off")==0)) {
    return System__St_12_Off;
  };
  if ((strcmp(s, "St_12_High")==0)) {
    return System__St_12_High;
  };
  if ((strcmp(s, "St_12_Frostprotection")==0)) {
    return System__St_12_Frostprotection;
  };
  if ((strcmp(s, "St_12_Eco")==0)) {
    return System__St_12_Eco;
  };
}

char* string_of_System__st_12(System__st_12 x, char* buf) {
  switch (x) {
    case System__St_12_Off:
      strcpy(buf, "St_12_Off");
      break;
    case System__St_12_High:
      strcpy(buf, "St_12_High");
      break;
    case System__St_12_Frostprotection:
      strcpy(buf, "St_12_Frostprotection");
      break;
    case System__St_12_Eco:
      strcpy(buf, "St_12_Eco");
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
  if ((strcmp(s, "St_10_Open")==0)) {
    return System__St_10_Open;
  };
  if ((strcmp(s, "St_10_Closed")==0)) {
    return System__St_10_Closed;
  };
}

char* string_of_System__st_10(System__st_10 x, char* buf) {
  switch (x) {
    case System__St_10_Open:
      strcpy(buf, "St_10_Open");
      break;
    case System__St_10_Closed:
      strcpy(buf, "St_10_Closed");
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
  if ((strcmp(s, "St_8_Ligado")==0)) {
    return System__St_8_Ligado;
  };
  if ((strcmp(s, "St_8_Desligado")==0)) {
    return System__St_8_Desligado;
  };
}

char* string_of_System__st_8(System__st_8 x, char* buf) {
  switch (x) {
    case System__St_8_Ligado:
      strcpy(buf, "St_8_Ligado");
      break;
    case System__St_8_Desligado:
      strcpy(buf, "St_8_Desligado");
      break;
    default:
      break;
  };
  return buf;
}

System__st_7 System__st_7_of_string(char* s) {
  if ((strcmp(s, "St_7_Ocupied")==0)) {
    return System__St_7_Ocupied;
  };
  if ((strcmp(s, "St_7_Empty")==0)) {
    return System__St_7_Empty;
  };
}

char* string_of_System__st_7(System__st_7 x, char* buf) {
  switch (x) {
    case System__St_7_Ocupied:
      strcpy(buf, "St_7_Ocupied");
      break;
    case System__St_7_Empty:
      strcpy(buf, "St_7_Empty");
      break;
    default:
      break;
  };
  return buf;
}

System__st_6 System__st_6_of_string(char* s) {
  if ((strcmp(s, "St_6_Standby")==0)) {
    return System__St_6_Standby;
  };
  if ((strcmp(s, "St_6_Reheat")==0)) {
    return System__St_6_Reheat;
  };
  if ((strcmp(s, "St_6_Off")==0)) {
    return System__St_6_Off;
  };
  if ((strcmp(s, "St_6_Maintain")==0)) {
    return System__St_6_Maintain;
  };
  if ((strcmp(s, "St_6_Heat")==0)) {
    return System__St_6_Heat;
  };
}

char* string_of_System__st_6(System__st_6 x, char* buf) {
  switch (x) {
    case System__St_6_Standby:
      strcpy(buf, "St_6_Standby");
      break;
    case System__St_6_Reheat:
      strcpy(buf, "St_6_Reheat");
      break;
    case System__St_6_Off:
      strcpy(buf, "St_6_Off");
      break;
    case System__St_6_Maintain:
      strcpy(buf, "St_6_Maintain");
      break;
    case System__St_6_Heat:
      strcpy(buf, "St_6_Heat");
      break;
    default:
      break;
  };
  return buf;
}

System__st_5 System__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_Water_fill")==0)) {
    return System__St_5_Water_fill;
  };
  if ((strcmp(s, "St_5_Washing")==0)) {
    return System__St_5_Washing;
  };
  if ((strcmp(s, "St_5_Standby")==0)) {
    return System__St_5_Standby;
  };
  if ((strcmp(s, "St_5_Spin")==0)) {
    return System__St_5_Spin;
  };
  if ((strcmp(s, "St_5_Rinse")==0)) {
    return System__St_5_Rinse;
  };
  if ((strcmp(s, "St_5_Off")==0)) {
    return System__St_5_Off;
  };
}

char* string_of_System__st_5(System__st_5 x, char* buf) {
  switch (x) {
    case System__St_5_Water_fill:
      strcpy(buf, "St_5_Water_fill");
      break;
    case System__St_5_Washing:
      strcpy(buf, "St_5_Washing");
      break;
    case System__St_5_Standby:
      strcpy(buf, "St_5_Standby");
      break;
    case System__St_5_Spin:
      strcpy(buf, "St_5_Spin");
      break;
    case System__St_5_Rinse:
      strcpy(buf, "St_5_Rinse");
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
  if ((strcmp(s, "St_4_Off")==0)) {
    return System__St_4_Off;
  };
  if ((strcmp(s, "St_4_High")==0)) {
    return System__St_4_High;
  };
  if ((strcmp(s, "St_4_Frostprotection")==0)) {
    return System__St_4_Frostprotection;
  };
  if ((strcmp(s, "St_4_Eco")==0)) {
    return System__St_4_Eco;
  };
}

char* string_of_System__st_4(System__st_4 x, char* buf) {
  switch (x) {
    case System__St_4_Off:
      strcpy(buf, "St_4_Off");
      break;
    case System__St_4_High:
      strcpy(buf, "St_4_High");
      break;
    case System__St_4_Frostprotection:
      strcpy(buf, "St_4_Frostprotection");
      break;
    case System__St_4_Eco:
      strcpy(buf, "St_4_Eco");
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
  if ((strcmp(s, "St_2_Ligado")==0)) {
    return System__St_2_Ligado;
  };
  if ((strcmp(s, "St_2_Desligado")==0)) {
    return System__St_2_Desligado;
  };
}

char* string_of_System__st_2(System__st_2 x, char* buf) {
  switch (x) {
    case System__St_2_Ligado:
      strcpy(buf, "St_2_Ligado");
      break;
    case System__St_2_Desligado:
      strcpy(buf, "St_2_Desligado");
      break;
    default:
      break;
  };
  return buf;
}

System__st_1 System__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_Minimal_safety")==0)) {
    return System__St_1_Minimal_safety;
  };
  if ((strcmp(s, "St_1_Eco")==0)) {
    return System__St_1_Eco;
  };
  if ((strcmp(s, "St_1_Comfort")==0)) {
    return System__St_1_Comfort;
  };
}

char* string_of_System__st_1(System__st_1 x, char* buf) {
  switch (x) {
    case System__St_1_Minimal_safety:
      strcpy(buf, "St_1_Minimal_safety");
      break;
    case System__St_1_Eco:
      strcpy(buf, "St_1_Eco");
      break;
    case System__St_1_Comfort:
      strcpy(buf, "St_1_Comfort");
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

