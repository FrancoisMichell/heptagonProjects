/* --- Generated the 23/6/2018 at 14:33 --- */
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
    
    printf("abre_porta ? ");
    scanf("%d", &abre_porta);;
    
    printf("p_arrived ? ");
    scanf("%d", &p_arrived);;
    System__controller_step(abre_porta, p_arrived, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.p_open);
    printf("=> ");
    printf("%d ", _res.r_on1);
    printf("=> ");
    printf("%d ", _res.arm_open);
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

