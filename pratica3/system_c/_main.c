/* --- Generated the 18/5/2018 at 17:58 --- */
/* --- heptagon compiler, version 1.03.00 (compiled mon. jan. 29 17:16:2 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

System__controller_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int up1_1;
  int up2_1;
  int down1_1;
  int down2_1;
  int eco_input1;
  int confort_input1;
  int presence1;
  int push1;
  System__controller_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  System__controller_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("up1_1 ? ");
    scanf("%d", &up1_1);;
    
    printf("up2_1 ? ");
    scanf("%d", &up2_1);;
    
    printf("down1_1 ? ");
    scanf("%d", &down1_1);;
    
    printf("down2_1 ? ");
    scanf("%d", &down2_1);;
    
    printf("eco_input1 ? ");
    scanf("%d", &eco_input1);;
    
    printf("confort_input1 ? ");
    scanf("%d", &confort_input1);;
    
    printf("presence1 ? ");
    scanf("%d", &presence1);;
    
    printf("push1 ? ");
    scanf("%d", &push1);;
    System__controller_step(up1_1, up2_1, down1_1, down2_1, eco_input1,
                            confort_input1, presence1, push1, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.eco1);
    printf("=> ");
    printf("%d ", _res.confort1);
    printf("=> ");
    printf("%d ", _res.room_oc1);
    printf("=> ");
    printf("%d ", _res.door_open1);
    printf("=> ");
    printf("%d ", _res.on_state1);
    printf("=> ");
    printf("%d ", _res.power1);
    printf("=> ");
    printf("%d ", _res.pl1);
    puts("");
    fflush(stdout);
  };
  return 0;
}

