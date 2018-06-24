/* --- Generated the 15/6/2018 at 15:43 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jun. 15 15:41:53 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller device.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "device_types.h"

Device__st_1 Device__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_Off")==0)) {
    return Device__St_1_Off;
  };
  if ((strcmp(s, "St_1_High")==0)) {
    return Device__St_1_High;
  };
  if ((strcmp(s, "St_1_Frost_Protection")==0)) {
    return Device__St_1_Frost_Protection;
  };
  if ((strcmp(s, "St_1_Eco")==0)) {
    return Device__St_1_Eco;
  };
}

char* string_of_Device__st_1(Device__st_1 x, char* buf) {
  switch (x) {
    case Device__St_1_Off:
      strcpy(buf, "St_1_Off");
      break;
    case Device__St_1_High:
      strcpy(buf, "St_1_High");
      break;
    case Device__St_1_Frost_Protection:
      strcpy(buf, "St_1_Frost_Protection");
      break;
    case Device__St_1_Eco:
      strcpy(buf, "St_1_Eco");
      break;
    default:
      break;
  };
  return buf;
}

Device__st Device__st_of_string(char* s) {
  if ((strcmp(s, "St_Off")==0)) {
    return Device__St_Off;
  };
  if ((strcmp(s, "St_High")==0)) {
    return Device__St_High;
  };
  if ((strcmp(s, "St_Frost_Protection")==0)) {
    return Device__St_Frost_Protection;
  };
  if ((strcmp(s, "St_Eco")==0)) {
    return Device__St_Eco;
  };
}

char* string_of_Device__st(Device__st x, char* buf) {
  switch (x) {
    case Device__St_Off:
      strcpy(buf, "St_Off");
      break;
    case Device__St_High:
      strcpy(buf, "St_High");
      break;
    case Device__St_Frost_Protection:
      strcpy(buf, "St_Frost_Protection");
      break;
    case Device__St_Eco:
      strcpy(buf, "St_Eco");
      break;
    default:
      break;
  };
  return buf;
}

