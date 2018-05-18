/* --- Generated the 18/5/2018 at 17:58 --- */
/* --- heptagon compiler, version 1.03.00 (compiled mon. jan. 29 17:16:2 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "system_types.h"

System__st_7 System__st_7_of_string(char* s) {
  if ((strcmp(s, "St_7_Minimal_safety")==0)) {
    return System__St_7_Minimal_safety;
  };
  if ((strcmp(s, "St_7_Eco")==0)) {
    return System__St_7_Eco;
  };
  if ((strcmp(s, "St_7_Confort")==0)) {
    return System__St_7_Confort;
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
    case System__St_7_Confort:
      strcpy(buf, "St_7_Confort");
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
  if ((strcmp(s, "St_6_High")==0)) {
    return System__St_6_High;
  };
  if ((strcmp(s, "St_6_Frost_Protection")==0)) {
    return System__St_6_Frost_Protection;
  };
  if ((strcmp(s, "St_6_Eco")==0)) {
    return System__St_6_Eco;
  };
}

char* string_of_System__st_6(System__st_6 x, char* buf) {
  switch (x) {
    case System__St_6_Off:
      strcpy(buf, "St_6_Off");
      break;
    case System__St_6_High:
      strcpy(buf, "St_6_High");
      break;
    case System__St_6_Frost_Protection:
      strcpy(buf, "St_6_Frost_Protection");
      break;
    case System__St_6_Eco:
      strcpy(buf, "St_6_Eco");
      break;
    default:
      break;
  };
  return buf;
}

System__st_5 System__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_Ocupied")==0)) {
    return System__St_5_Ocupied;
  };
  if ((strcmp(s, "St_5_Empty")==0)) {
    return System__St_5_Empty;
  };
}

char* string_of_System__st_5(System__st_5 x, char* buf) {
  switch (x) {
    case System__St_5_Ocupied:
      strcpy(buf, "St_5_Ocupied");
      break;
    case System__St_5_Empty:
      strcpy(buf, "St_5_Empty");
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
  if ((strcmp(s, "St_3_Off")==0)) {
    return System__St_3_Off;
  };
  if ((strcmp(s, "St_3_High")==0)) {
    return System__St_3_High;
  };
  if ((strcmp(s, "St_3_Frost_Protection")==0)) {
    return System__St_3_Frost_Protection;
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
    case System__St_3_Frost_Protection:
      strcpy(buf, "St_3_Frost_Protection");
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

