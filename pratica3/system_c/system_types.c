/* --- Generated the 20/5/2018 at 22:24 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jan. 19 10:22:24 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "system_types.h"

System__st_11 System__st_11_of_string(char* s) {
  if ((strcmp(s, "St_11_Occupied")==0)) {
    return System__St_11_Occupied;
  };
  if ((strcmp(s, "St_11_Empty")==0)) {
    return System__St_11_Empty;
  };
}

char* string_of_System__st_11(System__st_11 x, char* buf) {
  switch (x) {
    case System__St_11_Occupied:
      strcpy(buf, "St_11_Occupied");
      break;
    case System__St_11_Empty:
      strcpy(buf, "St_11_Empty");
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
  if ((strcmp(s, "St_9_On")==0)) {
    return System__St_9_On;
  };
  if ((strcmp(s, "St_9_Off")==0)) {
    return System__St_9_Off;
  };
}

char* string_of_System__st_9(System__st_9 x, char* buf) {
  switch (x) {
    case System__St_9_On:
      strcpy(buf, "St_9_On");
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
  if ((strcmp(s, "St_7_Standby")==0)) {
    return System__St_7_Standby;
  };
  if ((strcmp(s, "St_7_Reheat")==0)) {
    return System__St_7_Reheat;
  };
  if ((strcmp(s, "St_7_Off")==0)) {
    return System__St_7_Off;
  };
  if ((strcmp(s, "St_7_Maintain")==0)) {
    return System__St_7_Maintain;
  };
  if ((strcmp(s, "St_7_Heat")==0)) {
    return System__St_7_Heat;
  };
}

char* string_of_System__st_7(System__st_7 x, char* buf) {
  switch (x) {
    case System__St_7_Standby:
      strcpy(buf, "St_7_Standby");
      break;
    case System__St_7_Reheat:
      strcpy(buf, "St_7_Reheat");
      break;
    case System__St_7_Off:
      strcpy(buf, "St_7_Off");
      break;
    case System__St_7_Maintain:
      strcpy(buf, "St_7_Maintain");
      break;
    case System__St_7_Heat:
      strcpy(buf, "St_7_Heat");
      break;
    default:
      break;
  };
  return buf;
}

System__st_6 System__st_6_of_string(char* s) {
  if ((strcmp(s, "St_6_Water_fill")==0)) {
    return System__St_6_Water_fill;
  };
  if ((strcmp(s, "St_6_Washing")==0)) {
    return System__St_6_Washing;
  };
  if ((strcmp(s, "St_6_Standby")==0)) {
    return System__St_6_Standby;
  };
  if ((strcmp(s, "St_6_Spin")==0)) {
    return System__St_6_Spin;
  };
  if ((strcmp(s, "St_6_Rinse")==0)) {
    return System__St_6_Rinse;
  };
  if ((strcmp(s, "St_6_Off")==0)) {
    return System__St_6_Off;
  };
}

char* string_of_System__st_6(System__st_6 x, char* buf) {
  switch (x) {
    case System__St_6_Water_fill:
      strcpy(buf, "St_6_Water_fill");
      break;
    case System__St_6_Washing:
      strcpy(buf, "St_6_Washing");
      break;
    case System__St_6_Standby:
      strcpy(buf, "St_6_Standby");
      break;
    case System__St_6_Spin:
      strcpy(buf, "St_6_Spin");
      break;
    case System__St_6_Rinse:
      strcpy(buf, "St_6_Rinse");
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
  if ((strcmp(s, "St_5_Off")==0)) {
    return System__St_5_Off;
  };
  if ((strcmp(s, "St_5_High")==0)) {
    return System__St_5_High;
  };
  if ((strcmp(s, "St_5_Frost_Protection")==0)) {
    return System__St_5_Frost_Protection;
  };
  if ((strcmp(s, "St_5_Eco")==0)) {
    return System__St_5_Eco;
  };
}

char* string_of_System__st_5(System__st_5 x, char* buf) {
  switch (x) {
    case System__St_5_Off:
      strcpy(buf, "St_5_Off");
      break;
    case System__St_5_High:
      strcpy(buf, "St_5_High");
      break;
    case System__St_5_Frost_Protection:
      strcpy(buf, "St_5_Frost_Protection");
      break;
    case System__St_5_Eco:
      strcpy(buf, "St_5_Eco");
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
  if ((strcmp(s, "St_4_Closed")==0)) {
    return System__St_4_Closed;
  };
}

char* string_of_System__st_4(System__st_4 x, char* buf) {
  switch (x) {
    case System__St_4_Open:
      strcpy(buf, "St_4_Open");
      break;
    case System__St_4_Closed:
      strcpy(buf, "St_4_Closed");
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
  if ((strcmp(s, "St_1_Minimal_safety")==0)) {
    return System__St_1_Minimal_safety;
  };
  if ((strcmp(s, "St_1_Eco")==0)) {
    return System__St_1_Eco;
  };
  if ((strcmp(s, "St_1_Confort")==0)) {
    return System__St_1_Confort;
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
    case System__St_1_Confort:
      strcpy(buf, "St_1_Confort");
      break;
    default:
      break;
  };
  return buf;
}

System__st System__st_of_string(char* s) {
  if ((strcmp(s, "St_Occupied")==0)) {
    return System__St_Occupied;
  };
  if ((strcmp(s, "St_Empty")==0)) {
    return System__St_Empty;
  };
}

char* string_of_System__st(System__st x, char* buf) {
  switch (x) {
    case System__St_Occupied:
      strcpy(buf, "St_Occupied");
      break;
    case System__St_Empty:
      strcpy(buf, "St_Empty");
      break;
    default:
      break;
  };
  return buf;
}

