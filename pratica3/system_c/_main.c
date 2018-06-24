/* --- Generated the 15/6/2018 at 15:43 --- */
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
  int push_porta;
  int push_janela;
  int rad_up1;
  int rad_down1;
  int rad_up2;
  int rad_down2;
  int wash_start;
  int wash_finish;
  int oven_start;
  int oven_finish;
  int temp_ok;
  int cold;
  int presence;
  int light_switch;
  int tv_switch;
  int eco_in;
  int comfort_in;
  System__controller_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  System__controller_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
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
    
    printf("wash_start ? ");
    scanf("%d", &wash_start);;
    
    printf("wash_finish ? ");
    scanf("%d", &wash_finish);;
    
    printf("oven_start ? ");
    scanf("%d", &oven_start);;
    
    printf("oven_finish ? ");
    scanf("%d", &oven_finish);;
    
    printf("temp_ok ? ");
    scanf("%d", &temp_ok);;
    
    printf("cold ? ");
    scanf("%d", &cold);;
    
    printf("presence ? ");
    scanf("%d", &presence);;
    
    printf("light_switch ? ");
    scanf("%d", &light_switch);;
    
    printf("tv_switch ? ");
    scanf("%d", &tv_switch);;
    
    printf("eco_in ? ");
    scanf("%d", &eco_in);;
    
    printf("comfort_in ? ");
    scanf("%d", &comfort_in);;
    System__controller_step(push_porta, push_janela, rad_up1, rad_down1,
                            rad_up2, rad_down2, wash_start, wash_finish,
                            oven_start, oven_finish, temp_ok, cold, presence,
                            light_switch, tv_switch, eco_in, comfort_in,
                            &_res, &mem);
    printf("=> ");
    printf("%d ", _res.occupied);
    printf("=> ");
    printf("%d ", _res.door_open);
    printf("=> ");
    printf("%d ", _res.window_open);
    printf("=> ");
    printf("%d ", _res.lamp_on);
    printf("=> ");
    printf("%d ", _res.tv_on);
    printf("=> ");
    printf("%d ", _res.rad_power);
    printf("=> ");
    printf("%d ", _res.rad_state);
    printf("=> ");
    printf("%d ", _res.wash_power);
    printf("=> ");
    printf("%d ", _res.wash_state);
    printf("=> ");
    printf("%d ", _res.oven_power);
    printf("=> ");
    printf("%d ", _res.oven_state);
    printf("=> ");
    printf("%d ", _res.policy_2);
    printf("=> ");
    printf("%d ", _res.policy_1);
    puts("");
    fflush(stdout);
  };
  return 0;
}

