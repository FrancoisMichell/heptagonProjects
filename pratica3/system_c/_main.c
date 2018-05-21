/* --- Generated the 20/5/2018 at 22:24 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jan. 19 10:22:24 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

System__controller_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int presence1;
  int push1;
  int lamp_switch1;
  int tv_switch1;
  System__controller_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  System__controller_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("presence1 ? ");
    scanf("%d", &presence1);;
    
    printf("push1 ? ");
    scanf("%d", &push1);;
    
    printf("lamp_switch1 ? ");
    scanf("%d", &lamp_switch1);;
    
    printf("tv_switch1 ? ");
    scanf("%d", &tv_switch1);;
    System__controller_step(presence1, push1, lamp_switch1, tv_switch1,
                            &_res, &mem);
    printf("=> ");
    printf("%d ", _res.room_oc1);
    printf("=> ");
    printf("%d ", _res.door_open1);
    printf("=> ");
    printf("%d ", _res.lamp_on1);
    printf("=> ");
    printf("%d ", _res.tv_on1);
    puts("");
    fflush(stdout);
  };
  return 0;
}

