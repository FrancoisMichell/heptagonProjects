/* --- Generated the 14/8/2018 at 12:30 --- */
/* --- heptagon compiler, version 1.03.00 (compiled mon. aug. 6 15:37:40 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "system_types.h"

System__st_17 System__st_17_of_string(char* s) {
  if ((strcmp(s, "St_17_Noite")==0)) {
    return System__St_17_Noite;
  };
  if ((strcmp(s, "St_17_Dia")==0)) {
    return System__St_17_Dia;
  };
}

char* string_of_System__st_17(System__st_17 x, char* buf) {
  switch (x) {
    case System__St_17_Noite:
      strcpy(buf, "St_17_Noite");
      break;
    case System__St_17_Dia:
      strcpy(buf, "St_17_Dia");
      break;
    default:
      break;
  };
  return buf;
}

System__st_16 System__st_16_of_string(char* s) {
  if ((strcmp(s, "St_16_Present")==0)) {
    return System__St_16_Present;
  };
  if ((strcmp(s, "St_16_Not_Present")==0)) {
    return System__St_16_Not_Present;
  };
}

char* string_of_System__st_16(System__st_16 x, char* buf) {
  switch (x) {
    case System__St_16_Present:
      strcpy(buf, "St_16_Present");
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
  if ((strcmp(s, "St_14_On_fail")==0)) {
    return System__St_14_On_fail;
  };
  if ((strcmp(s, "St_14_On")==0)) {
    return System__St_14_On;
  };
  if ((strcmp(s, "St_14_Off_fail")==0)) {
    return System__St_14_Off_fail;
  };
  if ((strcmp(s, "St_14_Off")==0)) {
    return System__St_14_Off;
  };
}

char* string_of_System__st_14(System__st_14 x, char* buf) {
  switch (x) {
    case System__St_14_On_fail:
      strcpy(buf, "St_14_On_fail");
      break;
    case System__St_14_On:
      strcpy(buf, "St_14_On");
      break;
    case System__St_14_Off_fail:
      strcpy(buf, "St_14_Off_fail");
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
  if ((strcmp(s, "St_13_Open_fail")==0)) {
    return System__St_13_Open_fail;
  };
  if ((strcmp(s, "St_13_Open")==0)) {
    return System__St_13_Open;
  };
  if ((strcmp(s, "St_13_Closed_fail")==0)) {
    return System__St_13_Closed_fail;
  };
  if ((strcmp(s, "St_13_Closed")==0)) {
    return System__St_13_Closed;
  };
}

char* string_of_System__st_13(System__st_13 x, char* buf) {
  switch (x) {
    case System__St_13_Open_fail:
      strcpy(buf, "St_13_Open_fail");
      break;
    case System__St_13_Open:
      strcpy(buf, "St_13_Open");
      break;
    case System__St_13_Closed_fail:
      strcpy(buf, "St_13_Closed_fail");
      break;
    case System__St_13_Closed:
      strcpy(buf, "St_13_Closed");
      break;
    default:
      break;
  };
  return buf;
}

System__st_12 System__st_12_of_string(char* s) {
  if ((strcmp(s, "St_12_Open_fail")==0)) {
    return System__St_12_Open_fail;
  };
  if ((strcmp(s, "St_12_Open")==0)) {
    return System__St_12_Open;
  };
  if ((strcmp(s, "St_12_Locked_fail")==0)) {
    return System__St_12_Locked_fail;
  };
  if ((strcmp(s, "St_12_Locked")==0)) {
    return System__St_12_Locked;
  };
}

char* string_of_System__st_12(System__st_12 x, char* buf) {
  switch (x) {
    case System__St_12_Open_fail:
      strcpy(buf, "St_12_Open_fail");
      break;
    case System__St_12_Open:
      strcpy(buf, "St_12_Open");
      break;
    case System__St_12_Locked_fail:
      strcpy(buf, "St_12_Locked_fail");
      break;
    case System__St_12_Locked:
      strcpy(buf, "St_12_Locked");
      break;
    default:
      break;
  };
  return buf;
}

System__st_11 System__st_11_of_string(char* s) {
  if ((strcmp(s, "St_11_Open_fail")==0)) {
    return System__St_11_Open_fail;
  };
  if ((strcmp(s, "St_11_Open")==0)) {
    return System__St_11_Open;
  };
  if ((strcmp(s, "St_11_Closed_fail")==0)) {
    return System__St_11_Closed_fail;
  };
  if ((strcmp(s, "St_11_Closed")==0)) {
    return System__St_11_Closed;
  };
}

char* string_of_System__st_11(System__st_11 x, char* buf) {
  switch (x) {
    case System__St_11_Open_fail:
      strcpy(buf, "St_11_Open_fail");
      break;
    case System__St_11_Open:
      strcpy(buf, "St_11_Open");
      break;
    case System__St_11_Closed_fail:
      strcpy(buf, "St_11_Closed_fail");
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
  if ((strcmp(s, "St_10_Off_fail")==0)) {
    return System__St_10_Off_fail;
  };
  if ((strcmp(s, "St_10_Off")==0)) {
    return System__St_10_Off;
  };
  if ((strcmp(s, "St_10_Min_fail")==0)) {
    return System__St_10_Min_fail;
  };
  if ((strcmp(s, "St_10_Min")==0)) {
    return System__St_10_Min;
  };
  if ((strcmp(s, "St_10_Max_fail")==0)) {
    return System__St_10_Max_fail;
  };
  if ((strcmp(s, "St_10_Max")==0)) {
    return System__St_10_Max;
  };
}

char* string_of_System__st_10(System__st_10 x, char* buf) {
  switch (x) {
    case System__St_10_Off_fail:
      strcpy(buf, "St_10_Off_fail");
      break;
    case System__St_10_Off:
      strcpy(buf, "St_10_Off");
      break;
    case System__St_10_Min_fail:
      strcpy(buf, "St_10_Min_fail");
      break;
    case System__St_10_Min:
      strcpy(buf, "St_10_Min");
      break;
    case System__St_10_Max_fail:
      strcpy(buf, "St_10_Max_fail");
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
  if ((strcmp(s, "St_8_On_fail")==0)) {
    return System__St_8_On_fail;
  };
  if ((strcmp(s, "St_8_On")==0)) {
    return System__St_8_On;
  };
  if ((strcmp(s, "St_8_Off_fail")==0)) {
    return System__St_8_Off_fail;
  };
  if ((strcmp(s, "St_8_Off")==0)) {
    return System__St_8_Off;
  };
}

char* string_of_System__st_8(System__st_8 x, char* buf) {
  switch (x) {
    case System__St_8_On_fail:
      strcpy(buf, "St_8_On_fail");
      break;
    case System__St_8_On:
      strcpy(buf, "St_8_On");
      break;
    case System__St_8_Off_fail:
      strcpy(buf, "St_8_Off_fail");
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
  if ((strcmp(s, "St_6_Present")==0)) {
    return System__St_6_Present;
  };
  if ((strcmp(s, "St_6_Not_Present")==0)) {
    return System__St_6_Not_Present;
  };
}

char* string_of_System__st_6(System__st_6 x, char* buf) {
  switch (x) {
    case System__St_6_Present:
      strcpy(buf, "St_6_Present");
      break;
    case System__St_6_Not_Present:
      strcpy(buf, "St_6_Not_Present");
      break;
    default:
      break;
  };
  return buf;
}

System__st_5 System__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_Off_fail")==0)) {
    return System__St_5_Off_fail;
  };
  if ((strcmp(s, "St_5_Off")==0)) {
    return System__St_5_Off;
  };
  if ((strcmp(s, "St_5_Min_fail")==0)) {
    return System__St_5_Min_fail;
  };
  if ((strcmp(s, "St_5_Min")==0)) {
    return System__St_5_Min;
  };
  if ((strcmp(s, "St_5_Max_fail")==0)) {
    return System__St_5_Max_fail;
  };
  if ((strcmp(s, "St_5_Max")==0)) {
    return System__St_5_Max;
  };
}

char* string_of_System__st_5(System__st_5 x, char* buf) {
  switch (x) {
    case System__St_5_Off_fail:
      strcpy(buf, "St_5_Off_fail");
      break;
    case System__St_5_Off:
      strcpy(buf, "St_5_Off");
      break;
    case System__St_5_Min_fail:
      strcpy(buf, "St_5_Min_fail");
      break;
    case System__St_5_Min:
      strcpy(buf, "St_5_Min");
      break;
    case System__St_5_Max_fail:
      strcpy(buf, "St_5_Max_fail");
      break;
    case System__St_5_Max:
      strcpy(buf, "St_5_Max");
      break;
    default:
      break;
  };
  return buf;
}

System__st_4 System__st_4_of_string(char* s) {
  if ((strcmp(s, "St_4_Open_fail")==0)) {
    return System__St_4_Open_fail;
  };
  if ((strcmp(s, "St_4_Open")==0)) {
    return System__St_4_Open;
  };
  if ((strcmp(s, "St_4_Closed_fail")==0)) {
    return System__St_4_Closed_fail;
  };
  if ((strcmp(s, "St_4_Closed")==0)) {
    return System__St_4_Closed;
  };
}

char* string_of_System__st_4(System__st_4 x, char* buf) {
  switch (x) {
    case System__St_4_Open_fail:
      strcpy(buf, "St_4_Open_fail");
      break;
    case System__St_4_Open:
      strcpy(buf, "St_4_Open");
      break;
    case System__St_4_Closed_fail:
      strcpy(buf, "St_4_Closed_fail");
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
  if ((strcmp(s, "St_3_On_fail")==0)) {
    return System__St_3_On_fail;
  };
  if ((strcmp(s, "St_3_On")==0)) {
    return System__St_3_On;
  };
  if ((strcmp(s, "St_3_Off_fail")==0)) {
    return System__St_3_Off_fail;
  };
  if ((strcmp(s, "St_3_Off")==0)) {
    return System__St_3_Off;
  };
}

char* string_of_System__st_3(System__st_3 x, char* buf) {
  switch (x) {
    case System__St_3_On_fail:
      strcpy(buf, "St_3_On_fail");
      break;
    case System__St_3_On:
      strcpy(buf, "St_3_On");
      break;
    case System__St_3_Off_fail:
      strcpy(buf, "St_3_Off_fail");
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
  if ((strcmp(s, "St_2_Open_fail")==0)) {
    return System__St_2_Open_fail;
  };
  if ((strcmp(s, "St_2_Open")==0)) {
    return System__St_2_Open;
  };
  if ((strcmp(s, "St_2_Locked_fail")==0)) {
    return System__St_2_Locked_fail;
  };
  if ((strcmp(s, "St_2_Locked")==0)) {
    return System__St_2_Locked;
  };
}

char* string_of_System__st_2(System__st_2 x, char* buf) {
  switch (x) {
    case System__St_2_Open_fail:
      strcpy(buf, "St_2_Open_fail");
      break;
    case System__St_2_Open:
      strcpy(buf, "St_2_Open");
      break;
    case System__St_2_Locked_fail:
      strcpy(buf, "St_2_Locked_fail");
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
  if ((strcmp(s, "St_1_Open_fail")==0)) {
    return System__St_1_Open_fail;
  };
  if ((strcmp(s, "St_1_Open")==0)) {
    return System__St_1_Open;
  };
  if ((strcmp(s, "St_1_Closed_fail")==0)) {
    return System__St_1_Closed_fail;
  };
  if ((strcmp(s, "St_1_Closed")==0)) {
    return System__St_1_Closed;
  };
}

char* string_of_System__st_1(System__st_1 x, char* buf) {
  switch (x) {
    case System__St_1_Open_fail:
      strcpy(buf, "St_1_Open_fail");
      break;
    case System__St_1_Open:
      strcpy(buf, "St_1_Open");
      break;
    case System__St_1_Closed_fail:
      strcpy(buf, "St_1_Closed_fail");
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

