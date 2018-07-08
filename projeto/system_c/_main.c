/* --- Generated the 8/7/2018 at 14:29 --- */
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
  int up;
  int down;
  int shift_turno;
  int abre_porta;
  int p_arrived;
  int p1_arrived;
  int ar_failed;
  int ar_recovered;
  int l_failed;
  int l_recovered;
  System__controller_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  System__controller_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("up ? ");
    scanf("%d", &up);;
    
    printf("down ? ");
    scanf("%d", &down);;
    
    printf("shift_turno ? ");
    scanf("%d", &shift_turno);;
    
    printf("abre_porta ? ");
    scanf("%d", &abre_porta);;
    
    printf("p_arrived ? ");
    scanf("%d", &p_arrived);;
    
    printf("p1_arrived ? ");
    scanf("%d", &p1_arrived);;
    
    printf("ar_failed ? ");
    scanf("%d", &ar_failed);;
    
    printf("ar_recovered ? ");
    scanf("%d", &ar_recovered);;
    
    printf("l_failed ? ");
    scanf("%d", &l_failed);;
    
    printf("l_recovered ? ");
    scanf("%d", &l_recovered);;
    System__controller_step(up, down, shift_turno, abre_porta, p_arrived,
                            p1_arrived, ar_failed, ar_recovered, l_failed,
                            l_recovered, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.night);
    printf("=> ");
    printf("%d ", _res.p_open);
    printf("=> ");
    printf("%d ", _res.r_on1);
    printf("=> ");
    printf("%d ", _res.presence);
    printf("=> ");
    printf("%d ", _res.presence_t);
    printf("=> ");
    printf("%d ", _res.pc_on);
    printf("=> ");
    printf("%d ", _res.w_open);
    printf("=> ");
    printf("%d ", _res.arm_open);
    printf("=> ");
    printf("%d ", _res.ar_fail);
    printf("=> ");
    printf("%d ", _res.l_fail);
    printf("=> ");
    printf("%d ", _res.lamp);
    printf("=> ");
    printf("%d ", _res.pers);
    printf("=> ");
    printf("%d ", _res.ar_state);
    printf("=> ");
    printf("%d ", _res.mopa);
    puts("");
    fflush(stdout);
  };
  return 0;
}

