/* --- Generated the 27/6/2018 at 10:43 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
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
    System__controller_step(shift_turno, abre_porta, p_arrived, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.night);
    printf("=> ");
    printf("%d ", _res.p_open);
    printf("=> ");
    printf("%d ", _res.r_on1);
    printf("=> ");
    printf("%d ", _res.presence);
    printf("=> ");
    printf("%d ", _res.pc_on);
    printf("=> ");
    printf("%d ", _res.w_open);
    printf("=> ");
    printf("%d ", _res.l_state);
    printf("=> ");
    printf("%d ", _res.p_state);
    printf("=> ");
    printf("%d ", _res.ar_state);
    puts("");
    fflush(stdout);
  };
  return 0;
}

