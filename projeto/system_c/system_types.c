/* --- Generated the 14/8/2018 at 13:23 --- */
/* --- heptagon compiler, version 1.03.00 (compiled mon. aug. 6 15:37:40 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "system_types.h"

System__st_20 System__st_20_of_string(char* s) {
  if ((strcmp(s, "St_20_Noite")==0)) {
    return System__St_20_Noite;
  };
  if ((strcmp(s, "St_20_Dia")==0)) {
    return System__St_20_Dia;
  };
}

char* string_of_System__st_20(System__st_20 x, char* buf) {
  switch (x) {
    case System__St_20_Noite:
      strcpy(buf, "St_20_Noite");
      break;
    case System__St_20_Dia:
      strcpy(buf, "St_20_Dia");
      break;
    default:
      break;
  };
  return buf;
}

System__st_19 System__st_19_of_string(char* s) {
  if ((strcmp(s, "St_19_Present")==0)) {
    return System__St_19_Present;
  };
  if ((strcmp(s, "St_19_Not_Present")==0)) {
    return System__St_19_Not_Present;
  };
}

char* string_of_System__st_19(System__st_19 x, char* buf) {
  switch (x) {
    case System__St_19_Present:
      strcpy(buf, "St_19_Present");
      break;
    case System__St_19_Not_Present:
      strcpy(buf, "St_19_Not_Present");
      break;
    default:
      break;
  };
  return buf;
}

System__st_18 System__st_18_of_string(char* s) {
  if ((strcmp(s, "St_18_Present")==0)) {
    return System__St_18_Present;
  };
  if ((strcmp(s, "St_18_Not_Present")==0)) {
    return System__St_18_Not_Present;
  };
}

char* string_of_System__st_18(System__st_18 x, char* buf) {
  switch (x) {
    case System__St_18_Present:
      strcpy(buf, "St_18_Present");
      break;
    case System__St_18_Not_Present:
      strcpy(buf, "St_18_Not_Present");
      break;
    default:
      break;
  };
  return buf;
}

System__st_17 System__st_17_of_string(char* s) {
  if ((strcmp(s, "St_17_On_fail")==0)) {
    return System__St_17_On_fail;
  };
  if ((strcmp(s, "St_17_On")==0)) {
    return System__St_17_On;
  };
  if ((strcmp(s, "St_17_Off_fail")==0)) {
    return System__St_17_Off_fail;
  };
  if ((strcmp(s, "St_17_Off")==0)) {
    return System__St_17_Off;
  };
}

char* string_of_System__st_17(System__st_17 x, char* buf) {
  switch (x) {
    case System__St_17_On_fail:
      strcpy(buf, "St_17_On_fail");
      break;
    case System__St_17_On:
      strcpy(buf, "St_17_On");
      break;
    case System__St_17_Off_fail:
      strcpy(buf, "St_17_Off_fail");
      break;
    case System__St_17_Off:
      strcpy(buf, "St_17_Off");
      break;
    default:
      break;
  };
  return buf;
}

System__st_16 System__st_16_of_string(char* s) {
  if ((strcmp(s, "St_16_Open_fail")==0)) {
    return System__St_16_Open_fail;
  };
  if ((strcmp(s, "St_16_Open")==0)) {
    return System__St_16_Open;
  };
  if ((strcmp(s, "St_16_Closed_fail")==0)) {
    return System__St_16_Closed_fail;
  };
  if ((strcmp(s, "St_16_Closed")==0)) {
    return System__St_16_Closed;
  };
}

char* string_of_System__st_16(System__st_16 x, char* buf) {
  switch (x) {
    case System__St_16_Open_fail:
      strcpy(buf, "St_16_Open_fail");
      break;
    case System__St_16_Open:
      strcpy(buf, "St_16_Open");
      break;
    case System__St_16_Closed_fail:
      strcpy(buf, "St_16_Closed_fail");
      break;
    case System__St_16_Closed:
      strcpy(buf, "St_16_Closed");
      break;
    default:
      break;
  };
  return buf;
}

System__st_15 System__st_15_of_string(char* s) {
  if ((strcmp(s, "St_15_Open_fail")==0)) {
    return System__St_15_Open_fail;
  };
  if ((strcmp(s, "St_15_Open")==0)) {
    return System__St_15_Open;
  };
  if ((strcmp(s, "St_15_Locked_fail")==0)) {
    return System__St_15_Locked_fail;
  };
  if ((strcmp(s, "St_15_Locked")==0)) {
    return System__St_15_Locked;
  };
}

char* string_of_System__st_15(System__st_15 x, char* buf) {
  switch (x) {
    case System__St_15_Open_fail:
      strcpy(buf, "St_15_Open_fail");
      break;
    case System__St_15_Open:
      strcpy(buf, "St_15_Open");
      break;
    case System__St_15_Locked_fail:
      strcpy(buf, "St_15_Locked_fail");
      break;
    case System__St_15_Locked:
      strcpy(buf, "St_15_Locked");
      break;
    default:
      break;
  };
  return buf;
}

System__st_14 System__st_14_of_string(char* s) {
  if ((strcmp(s, "St_14_Open_fail")==0)) {
    return System__St_14_Open_fail;
  };
  if ((strcmp(s, "St_14_Open")==0)) {
    return System__St_14_Open;
  };
  if ((strcmp(s, "St_14_Closed_fail")==0)) {
    return System__St_14_Closed_fail;
  };
  if ((strcmp(s, "St_14_Closed")==0)) {
    return System__St_14_Closed;
  };
}

char* string_of_System__st_14(System__st_14 x, char* buf) {
  switch (x) {
    case System__St_14_Open_fail:
      strcpy(buf, "St_14_Open_fail");
      break;
    case System__St_14_Open:
      strcpy(buf, "St_14_Open");
      break;
    case System__St_14_Closed_fail:
      strcpy(buf, "St_14_Closed_fail");
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
  if ((strcmp(s, "St_13_Off_fail")==0)) {
    return System__St_13_Off_fail;
  };
  if ((strcmp(s, "St_13_Off")==0)) {
    return System__St_13_Off;
  };
  if ((strcmp(s, "St_13_Min_fail")==0)) {
    return System__St_13_Min_fail;
  };
  if ((strcmp(s, "St_13_Min")==0)) {
    return System__St_13_Min;
  };
  if ((strcmp(s, "St_13_Max_fail")==0)) {
    return System__St_13_Max_fail;
  };
  if ((strcmp(s, "St_13_Max")==0)) {
    return System__St_13_Max;
  };
}

char* string_of_System__st_13(System__st_13 x, char* buf) {
  switch (x) {
    case System__St_13_Off_fail:
      strcpy(buf, "St_13_Off_fail");
      break;
    case System__St_13_Off:
      strcpy(buf, "St_13_Off");
      break;
    case System__St_13_Min_fail:
      strcpy(buf, "St_13_Min_fail");
      break;
    case System__St_13_Min:
      strcpy(buf, "St_13_Min");
      break;
    case System__St_13_Max_fail:
      strcpy(buf, "St_13_Max_fail");
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
  if ((strcmp(s, "St_12_On_fail")==0)) {
    return System__St_12_On_fail;
  };
  if ((strcmp(s, "St_12_On")==0)) {
    return System__St_12_On;
  };
  if ((strcmp(s, "St_12_Off_fail")==0)) {
    return System__St_12_Off_fail;
  };
  if ((strcmp(s, "St_12_Off")==0)) {
    return System__St_12_Off;
  };
}

char* string_of_System__st_12(System__st_12 x, char* buf) {
  switch (x) {
    case System__St_12_On_fail:
      strcpy(buf, "St_12_On_fail");
      break;
    case System__St_12_On:
      strcpy(buf, "St_12_On");
      break;
    case System__St_12_Off_fail:
      strcpy(buf, "St_12_Off_fail");
      break;
    case System__St_12_Off:
      strcpy(buf, "St_12_Off");
      break;
    default:
      break;
  };
  return buf;
}

System__st_11 System__st_11_of_string(char* s) {
  if ((strcmp(s, "St_11_On_fail")==0)) {
    return System__St_11_On_fail;
  };
  if ((strcmp(s, "St_11_On")==0)) {
    return System__St_11_On;
  };
  if ((strcmp(s, "St_11_Off_fail")==0)) {
    return System__St_11_Off_fail;
  };
  if ((strcmp(s, "St_11_Off")==0)) {
    return System__St_11_Off;
  };
}

char* string_of_System__st_11(System__st_11 x, char* buf) {
  switch (x) {
    case System__St_11_On_fail:
      strcpy(buf, "St_11_On_fail");
      break;
    case System__St_11_On:
      strcpy(buf, "St_11_On");
      break;
    case System__St_11_Off_fail:
      strcpy(buf, "St_11_Off_fail");
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

