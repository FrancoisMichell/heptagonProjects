/* --- Generated the 14/8/2018 at 12:30 --- */
/* --- heptagon compiler, version 1.03.00 (compiled mon. aug. 6 15:37:40 CET 2018) --- */
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
  int air_failed_recovered;
  int light_switch;
  int light_failed_recovered;
  int blind_switch;
  int blind_failed_recovered;
  int door_failed_recovered;
  int closet_failed_recovered;
  int pc_failed_recovered;
  int window_failed_recovered;
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
    
    printf("air_failed_recovered ? ");
    scanf("%d", &air_failed_recovered);;
    
    printf("light_switch ? ");
    scanf("%d", &light_switch);;
    
    printf("light_failed_recovered ? ");
    scanf("%d", &light_failed_recovered);;
    
    printf("blind_switch ? ");
    scanf("%d", &blind_switch);;
    
    printf("blind_failed_recovered ? ");
    scanf("%d", &blind_failed_recovered);;
    
    printf("door_failed_recovered ? ");
    scanf("%d", &door_failed_recovered);;
    
    printf("closet_failed_recovered ? ");
    scanf("%d", &closet_failed_recovered);;
    
    printf("pc_failed_recovered ? ");
    scanf("%d", &pc_failed_recovered);;
    
    printf("window_failed_recovered ? ");
    scanf("%d", &window_failed_recovered);;
    System__controller_step(change_shift, worker, cleaner,
                            air_failed_recovered, light_switch,
                            light_failed_recovered, blind_switch,
                            blind_failed_recovered, door_failed_recovered,
                            closet_failed_recovered, pc_failed_recovered,
                            window_failed_recovered, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.night);
    printf("=> ");
    printf("%d ", _res.worker_presence);
    printf("=> ");
    printf("%d ", _res.cleaner_presence);
    printf("=> ");
    printf("%d ", _res.door_status);
    printf("=> ");
    printf("%d ", _res.pc_status);
    printf("=> ");
    printf("%d ", _res.window_status);
    printf("=> ");
    printf("%d ", _res.closet_status);
    printf("=> ");
    printf("%d ", _res.air_status);
    printf("=> ");
    printf("%d ", _res.light_status);
    printf("=> ");
    printf("%d ", _res.blind_status);
    puts("");
    fflush(stdout);
  };
  return 0;
}

