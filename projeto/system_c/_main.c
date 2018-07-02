/* --- Generated the 2/7/2018 at 20:29 --- */
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
  int shift_turno;
  int abre_porta;
  int p_arrived;
  int p1_arrived;
  int ilumination_up;
  int ilumination_down;
  System__controller_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  System__controller_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("shift_turno ? ");
    scanf("%d", &shift_turno);;
    
    printf("abre_porta ? ");
    scanf("%d", &abre_porta);;
    
    printf("p_arrived ? ");
    scanf("%d", &p_arrived);;
    
    printf("p1_arrived ? ");
    scanf("%d", &p1_arrived);;
    
    printf("ilumination_up ? ");
    scanf("%d", &ilumination_up);;
    
    printf("ilumination_down ? ");
    scanf("%d", &ilumination_down);;
    System__controller_step(shift_turno, abre_porta, p_arrived, p1_arrived,
                            ilumination_up, ilumination_down, &_res, &mem);
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
    printf("%d ", _res.lampada);
    printf("=> ");
    printf("%d ", _res.persiana);
    printf("=> ");
    printf("%d ", _res.ar_state);
    printf("=> ");
    printf("%d ", _res.policy);
    puts("");
    fflush(stdout);
  };
  return 0;
}

