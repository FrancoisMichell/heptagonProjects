/* --- Generated the 22/7/2018 at 16:16 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jun. 15 15:41:53 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

System__controller_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int change_shift;
  int worker;
  int cleaner;
  int light_switch;
  int blind_switch;
  System__controller_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  System__controller_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("change_shift ? ");
    scanf("%d", &change_shift);;
    
    printf("worker ? ");
    scanf("%d", &worker);;
    
    printf("cleaner ? ");
    scanf("%d", &cleaner);;
    
    printf("light_switch ? ");
    scanf("%d", &light_switch);;
    
    printf("blind_switch ? ");
    scanf("%d", &blind_switch);;
    System__controller_step(change_shift, worker, cleaner, light_switch,
                            blind_switch, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.night);
    printf("=> ");
    printf("%d ", _res.door_open);
    printf("=> ");
    printf("%d ", _res.worker_presence);
    printf("=> ");
    printf("%d ", _res.cleaner_presence);
    printf("=> ");
    printf("%d ", _res.pc_on);
    printf("=> ");
    printf("%d ", _res.window_open);
    printf("=> ");
    printf("%d ", _res.closet_open);
    printf("=> ");
    printf("%d ", _res.light_status);
    printf("=> ");
    printf("%d ", _res.blind_status);
    printf("=> ");
    printf("%d ", _res.air_status);
    puts("");
    fflush(stdout);
  };
  return 0;
}

