/* --- Generated the 22/5/2018 at 22:25 --- */
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
  int c_window;
  int c_door;
  int push_porta;
  int push_janela;
  int rad_up1;
  int rad_down1;
  int rad_up2;
  int rad_down2;
  int presence;
  int light_switch;
  int tv_switch;
  System__controller_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  System__controller_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("c_window ? ");
    scanf("%d", &c_window);;
    
    printf("c_door ? ");
    scanf("%d", &c_door);;
    
    printf("push_porta ? ");
    scanf("%d", &push_porta);;
    
    printf("push_janela ? ");
    scanf("%d", &push_janela);;
    
    printf("rad_up1 ? ");
    scanf("%d", &rad_up1);;
    
    printf("rad_down1 ? ");
    scanf("%d", &rad_down1);;
    
    printf("rad_up2 ? ");
    scanf("%d", &rad_up2);;
    
    printf("rad_down2 ? ");
    scanf("%d", &rad_down2);;
    
    printf("presence ? ");
    scanf("%d", &presence);;
    
    printf("light_switch ? ");
    scanf("%d", &light_switch);;
    
    printf("tv_switch ? ");
    scanf("%d", &tv_switch);;
    System__controller_step(c_window, c_door, push_porta, push_janela,
                            rad_up1, rad_down1, rad_up2, rad_down2, presence,
                            light_switch, tv_switch, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.door_open);
    printf("=> ");
    printf("%d ", _res.window_open);
    printf("=> ");
    printf("%d ", _res.lamp_on);
    printf("=> ");
    printf("%d ", _res.tv_on);
    printf("=> ");
    printf("%d ", _res.occupied);
    printf("=> ");
    printf("%d ", _res.rad_power);
    printf("=> ");
    printf("%d ", _res.rad_state);
    puts("");
    fflush(stdout);
  };
  return 0;
}

