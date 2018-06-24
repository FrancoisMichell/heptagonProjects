/* --- Generated the 15/6/2018 at 15:43 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jun. 15 15:41:53 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller device.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Device__controller_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int up1_1;
  int up2_1;
  int down1_1;
  int down2_1;
  Device__controller_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Device__controller_reset(&mem);
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
    Device__controller_step(up1_1, up2_1, down1_1, down2_1, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.state1);
    printf("=> ");
    printf("%d ", _res.power1);
    puts("");
    fflush(stdout);
  };
  return 0;
}

