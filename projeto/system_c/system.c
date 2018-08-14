/* --- Generated the 14/8/2018 at 13:23 --- */
/* --- heptagon compiler, version 1.03.00 (compiled mon. aug. 6 15:37:40 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "system.h"

void System__light_source_reset(System__light_source_mem* self) {
  self->pnr = false;
  self->v_444 = true;
  self->v_445 = true;
}

void System__light_source_step(int sw, int c1, int c2, int failed_recovered,
                               System__light_source_out* _out,
                               System__light_source_mem* self) {
  
  int v_443;
  int v_442;
  int v_441;
  int v_440;
  int v_439;
  int v_438;
  int v_437;
  int v_436;
  int ns_St_On_fail_2_0;
  int ns_St_On_fail_2_1;
  int ns_St_On_2_0;
  int ns_St_On_2_1;
  int ns_St_Off_fail_2_0;
  int ns_St_Off_fail_2_1;
  int ns_St_Off_2_0;
  int ns_St_Off_2_1;
  int ck_1_2_0;
  int ck_1_2_1;
  int nr_St_On_fail;
  int ns_St_On_fail_2;
  int ns_St_On_fail_1;
  int light_source_status_St_On_fail;
  int nr_St_On;
  int ns_St_On_2;
  int ns_St_On_1;
  int light_source_status_St_On;
  int nr_St_Off_fail;
  int ns_St_Off_fail_2;
  int ns_St_Off_fail_1;
  int light_source_status_St_Off_fail;
  int nr_St_Off;
  int ns_St_Off_2;
  int ns_St_Off_1;
  int light_source_status_St_Off;
  int ck_1_2;
  int ck_1_1;
  int v_18_2_0;
  int v_18_2_1;
  int v_19;
  int v_18_2;
  int v_18_1;
  int v_17;
  int v_16;
  int v_15;
  int v_13_2_0;
  int v_13_2_1;
  int v_14;
  int v_13_2;
  int v_13_1;
  int v_12;
  int v_11;
  int v_10;
  int v_8_2_0;
  int v_8_2_1;
  int v_9;
  int v_8_2;
  int v_8_1;
  int v_7;
  int v_6;
  int v_5;
  int v_3_2_0;
  int v_3_2_1;
  int v_4;
  int v_3_2;
  int v_3_1;
  int v_2;
  int v_1;
  int v;
  int v_451;
  int v_450;
  int v_449;
  int v_448;
  int v_447;
  int v_446;
  int s_St_On_fail_2_0;
  int s_St_On_fail_2_1;
  int s_St_On_2_0;
  int s_St_On_2_1;
  int s_St_Off_fail_2_0;
  int s_St_Off_fail_2_1;
  int s_St_Off_2_0;
  int s_St_Off_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_On_fail;
  int s_St_On_fail_2;
  int s_St_On_fail_1;
  int r_St_On;
  int s_St_On_2;
  int s_St_On_1;
  int r_St_Off_fail;
  int s_St_Off_fail_2;
  int s_St_Off_fail_1;
  int r_St_Off;
  int s_St_Off_2;
  int s_St_Off_1;
  int ck_2;
  int ck_1_3;
  int s_2_0;
  int s_2_1;
  int ns_2_0;
  int ns_2_1;
  int s_2;
  int s_1;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1_3 = self->v_444;
  ck_2 = self->v_445;
  if (ck_1_3) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      if (failed_recovered) {
        v_19 = true;
        v_18_1 = true;
        v_18_2 = false;
      } else {
        v_19 = self->pnr;
        v_18_1 = true;
        v_18_2 = true;
      };
      v_16 = !(c2);
      v_15 = (c1&&sw);
      v_17 = (v_15||v_16);
      if (v_17) {
        r_St_Off = true;
        s_St_Off_1 = false;
        s_St_Off_2 = true;
      } else {
        r_St_Off = v_19;
        s_St_Off_1 = v_18_1;
        s_St_Off_2 = v_18_2;
      };
      v_450 = r_St_Off;
      v_446 = s_St_Off_1;
      v_447 = s_St_Off_2;
      if (v_18_1) {
        v_18_2_1 = v_18_2;
      } else {
        v_18_2_0 = v_18_2;
      };
      if (s_St_Off_1) {
        s_St_Off_2_1 = s_St_Off_2;
      } else {
        s_St_Off_2_0 = s_St_Off_2;
      };
    } else {
      if (failed_recovered) {
        v_14 = true;
        v_13_1 = true;
        v_13_2 = true;
      } else {
        v_14 = self->pnr;
        v_13_1 = true;
        v_13_2 = false;
      };
      v_11 = !(c2);
      v_10 = (c1&&sw);
      v_12 = (v_10||v_11);
      if (v_12) {
        r_St_Off_fail = true;
      } else {
        r_St_Off_fail = v_14;
      };
      v_450 = r_St_Off_fail;
      if (v_12) {
        s_St_Off_fail_1 = false;
      } else {
        s_St_Off_fail_1 = v_13_1;
      };
      v_446 = s_St_Off_fail_1;
      if (v_12) {
        s_St_Off_fail_2 = false;
      } else {
        s_St_Off_fail_2 = v_13_2;
      };
      v_447 = s_St_Off_fail_2;
      if (v_13_1) {
        v_13_2_1 = v_13_2;
      } else {
        v_13_2_0 = v_13_2;
      };
      if (s_St_Off_fail_1) {
        s_St_Off_fail_2_1 = s_St_Off_fail_2;
      } else {
        s_St_Off_fail_2_0 = s_St_Off_fail_2;
      };
    };
    s_1 = v_446;
    s_2 = v_447;
    r = v_450;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      if (failed_recovered) {
        v_9 = true;
        v_8_1 = false;
        v_8_2 = false;
      } else {
        v_9 = self->pnr;
        v_8_1 = false;
        v_8_2 = true;
      };
      v_6 = !(c2);
      v_5 = (c1&&sw);
      v_7 = (v_5||v_6);
      if (v_7) {
        r_St_On = true;
        s_St_On_1 = true;
        s_St_On_2 = true;
      } else {
        r_St_On = v_9;
        s_St_On_1 = v_8_1;
        s_St_On_2 = v_8_2;
      };
      v_451 = r_St_On;
      v_448 = s_St_On_1;
      v_449 = s_St_On_2;
    } else {
      if (failed_recovered) {
        v_4 = true;
        v_3_1 = false;
        v_3_2 = true;
      } else {
        v_4 = self->pnr;
        v_3_1 = false;
        v_3_2 = false;
      };
      v_1 = !(c2);
      v = (c1&&sw);
      v_2 = (v||v_1);
      if (v_2) {
        r_St_On_fail = true;
      } else {
        r_St_On_fail = v_4;
      };
      v_451 = r_St_On_fail;
      if (v_2) {
        s_St_On_fail_1 = true;
      } else {
        s_St_On_fail_1 = v_3_1;
      };
      v_448 = s_St_On_fail_1;
      if (v_2) {
        s_St_On_fail_2 = false;
      } else {
        s_St_On_fail_2 = v_3_2;
      };
      v_449 = s_St_On_fail_2;
    };
    s_1 = v_448;
    s_2 = v_449;
    r = v_451;
  };
  ck_1_1 = s_1;
  ck_1_2 = s_2;
  if (ck_1_1) {
    ck_1_2_1 = ck_1_2;
    if (ck_1_2_1) {
      light_source_status_St_Off = 0;
      nr_St_Off = false;
      ns_St_Off_1 = true;
      ns_St_Off_2 = true;
      v_436 = light_source_status_St_Off;
      v_442 = nr_St_Off;
      v_438 = ns_St_Off_1;
      v_439 = ns_St_Off_2;
      if (ns_St_Off_1) {
        ns_St_Off_2_1 = ns_St_Off_2;
      } else {
        ns_St_Off_2_0 = ns_St_Off_2;
      };
    } else {
      light_source_status_St_Off_fail = 2;
      v_436 = light_source_status_St_Off_fail;
      nr_St_Off_fail = false;
      v_442 = nr_St_Off_fail;
      ns_St_Off_fail_1 = true;
      v_438 = ns_St_Off_fail_1;
      ns_St_Off_fail_2 = false;
      v_439 = ns_St_Off_fail_2;
      if (ns_St_Off_fail_1) {
        ns_St_Off_fail_2_1 = ns_St_Off_fail_2;
      } else {
        ns_St_Off_fail_2_0 = ns_St_Off_fail_2;
      };
    };
    _out->light_source_status = v_436;
    ns_1 = v_438;
    ns_2 = v_439;
    nr = v_442;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      light_source_status_St_On = 1;
      nr_St_On = false;
      ns_St_On_1 = false;
      ns_St_On_2 = true;
      v_437 = light_source_status_St_On;
      v_443 = nr_St_On;
      v_440 = ns_St_On_1;
      v_441 = ns_St_On_2;
    } else {
      light_source_status_St_On_fail = 3;
      v_437 = light_source_status_St_On_fail;
      nr_St_On_fail = false;
      v_443 = nr_St_On_fail;
      ns_St_On_fail_1 = false;
      v_440 = ns_St_On_fail_1;
      ns_St_On_fail_2 = false;
      v_441 = ns_St_On_fail_2;
    };
    _out->light_source_status = v_437;
    ns_1 = v_440;
    ns_2 = v_441;
    nr = v_443;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (!(ck_1_1)) {
    if (ck_1_2_0) {
      if (ns_St_On_1) {
        ns_St_On_2_1 = ns_St_On_2;
      } else {
        ns_St_On_2_0 = ns_St_On_2;
      };
    } else {
      if (ns_St_On_fail_1) {
        ns_St_On_fail_2_1 = ns_St_On_fail_2;
      } else {
        ns_St_On_fail_2_0 = ns_St_On_fail_2;
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
  } else {
    s_2_0 = s_2;
  };
  if (!(ck_1_3)) {
    if (ck_2_0) {
      if (v_8_1) {
        v_8_2_1 = v_8_2;
      } else {
        v_8_2_0 = v_8_2;
      };
      if (s_St_On_1) {
        s_St_On_2_1 = s_St_On_2;
      } else {
        s_St_On_2_0 = s_St_On_2;
      };
    } else {
      if (v_3_1) {
        v_3_2_1 = v_3_2;
      } else {
        v_3_2_0 = v_3_2;
      };
      if (s_St_On_fail_1) {
        s_St_On_fail_2_1 = s_St_On_fail_2;
      } else {
        s_St_On_fail_2_0 = s_St_On_fail_2;
      };
    };
  };
  self->pnr = nr;
  self->v_444 = ns_1;
  self->v_445 = ns_2;;
}

void System__door_reset(System__door_mem* self) {
  self->pnr = false;
  self->v_460 = true;
  self->v_461 = true;
}

void System__door_step(int c, int failed_recovered, System__door_out* _out,
                       System__door_mem* self) {
  
  int v_459;
  int v_458;
  int v_457;
  int v_456;
  int v_455;
  int v_454;
  int v_453;
  int v_452;
  int ns_St_1_Open_fail_2_0;
  int ns_St_1_Open_fail_2_1;
  int ns_St_1_Open_2_0;
  int ns_St_1_Open_2_1;
  int ns_St_1_Closed_fail_2_0;
  int ns_St_1_Closed_fail_2_1;
  int ns_St_1_Closed_2_0;
  int ns_St_1_Closed_2_1;
  int ck_2_2_0;
  int ck_2_2_1;
  int nr_St_1_Open_fail;
  int ns_St_1_Open_fail_2;
  int ns_St_1_Open_fail_1;
  int door_status_St_1_Open_fail;
  int nr_St_1_Open;
  int ns_St_1_Open_2;
  int ns_St_1_Open_1;
  int door_status_St_1_Open;
  int nr_St_1_Closed_fail;
  int ns_St_1_Closed_fail_2;
  int ns_St_1_Closed_fail_1;
  int door_status_St_1_Closed_fail;
  int nr_St_1_Closed;
  int ns_St_1_Closed_2;
  int ns_St_1_Closed_1;
  int door_status_St_1_Closed;
  int ck_2_2;
  int ck_2_1;
  int v_29_2_0;
  int v_29_2_1;
  int v_30;
  int v_29_2;
  int v_29_1;
  int v_28;
  int v_26_2_0;
  int v_26_2_1;
  int v_27;
  int v_26_2;
  int v_26_1;
  int v_25;
  int v_23_2_0;
  int v_23_2_1;
  int v_24;
  int v_23_2;
  int v_23_1;
  int v_22;
  int v_20_2_0;
  int v_20_2_1;
  int v_21;
  int v_20_2;
  int v_20_1;
  int v;
  int v_467;
  int v_466;
  int v_465;
  int v_464;
  int v_463;
  int v_462;
  int s_St_1_Open_fail_2_0;
  int s_St_1_Open_fail_2_1;
  int s_St_1_Open_2_0;
  int s_St_1_Open_2_1;
  int s_St_1_Closed_fail_2_0;
  int s_St_1_Closed_fail_2_1;
  int s_St_1_Closed_2_0;
  int s_St_1_Closed_2_1;
  int ck_2_3_0;
  int ck_2_3_1;
  int r_St_1_Open_fail;
  int s_St_1_Open_fail_2;
  int s_St_1_Open_fail_1;
  int r_St_1_Open;
  int s_St_1_Open_2;
  int s_St_1_Open_1;
  int r_St_1_Closed_fail;
  int s_St_1_Closed_fail_2;
  int s_St_1_Closed_fail_1;
  int r_St_1_Closed;
  int s_St_1_Closed_2;
  int s_St_1_Closed_1;
  int ck_2_3;
  int ck_1;
  int s_2_0;
  int s_2_1;
  int ns_2_0;
  int ns_2_1;
  int s_2;
  int s_1;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1 = self->v_460;
  ck_2_3 = self->v_461;
  if (ck_1) {
    ck_2_3_1 = ck_2_3;
    if (ck_2_3_1) {
      if (failed_recovered) {
        v_30 = true;
        v_29_1 = true;
        v_29_2 = false;
      } else {
        v_30 = self->pnr;
        v_29_1 = true;
        v_29_2 = true;
      };
      v_28 = !(c);
      if (v_28) {
        r_St_1_Closed = true;
        s_St_1_Closed_1 = false;
        s_St_1_Closed_2 = true;
      } else {
        r_St_1_Closed = v_30;
        s_St_1_Closed_1 = v_29_1;
        s_St_1_Closed_2 = v_29_2;
      };
      v_466 = r_St_1_Closed;
      v_462 = s_St_1_Closed_1;
      v_463 = s_St_1_Closed_2;
      if (v_29_1) {
        v_29_2_1 = v_29_2;
      } else {
        v_29_2_0 = v_29_2;
      };
      if (s_St_1_Closed_1) {
        s_St_1_Closed_2_1 = s_St_1_Closed_2;
      } else {
        s_St_1_Closed_2_0 = s_St_1_Closed_2;
      };
    } else {
      if (failed_recovered) {
        v_27 = true;
        v_26_1 = true;
        v_26_2 = true;
      } else {
        v_27 = self->pnr;
        v_26_1 = true;
        v_26_2 = false;
      };
      v_25 = !(c);
      if (v_25) {
        r_St_1_Closed_fail = true;
      } else {
        r_St_1_Closed_fail = v_27;
      };
      v_466 = r_St_1_Closed_fail;
      if (v_25) {
        s_St_1_Closed_fail_1 = false;
      } else {
        s_St_1_Closed_fail_1 = v_26_1;
      };
      v_462 = s_St_1_Closed_fail_1;
      if (v_25) {
        s_St_1_Closed_fail_2 = false;
      } else {
        s_St_1_Closed_fail_2 = v_26_2;
      };
      v_463 = s_St_1_Closed_fail_2;
      if (v_26_1) {
        v_26_2_1 = v_26_2;
      } else {
        v_26_2_0 = v_26_2;
      };
      if (s_St_1_Closed_fail_1) {
        s_St_1_Closed_fail_2_1 = s_St_1_Closed_fail_2;
      } else {
        s_St_1_Closed_fail_2_0 = s_St_1_Closed_fail_2;
      };
    };
    s_1 = v_462;
    s_2 = v_463;
    r = v_466;
  } else {
    ck_2_3_0 = ck_2_3;
    if (ck_2_3_0) {
      if (failed_recovered) {
        v_24 = true;
        v_23_1 = false;
        v_23_2 = false;
      } else {
        v_24 = self->pnr;
        v_23_1 = false;
        v_23_2 = true;
      };
      v_22 = !(c);
      if (v_22) {
        r_St_1_Open = true;
        s_St_1_Open_1 = true;
        s_St_1_Open_2 = true;
      } else {
        r_St_1_Open = v_24;
        s_St_1_Open_1 = v_23_1;
        s_St_1_Open_2 = v_23_2;
      };
      v_467 = r_St_1_Open;
      v_464 = s_St_1_Open_1;
      v_465 = s_St_1_Open_2;
    } else {
      if (failed_recovered) {
        v_21 = true;
        v_20_1 = true;
        v_20_2 = false;
      } else {
        v_21 = self->pnr;
        v_20_1 = false;
        v_20_2 = false;
      };
      v = !(c);
      if (v) {
        r_St_1_Open_fail = true;
      } else {
        r_St_1_Open_fail = v_21;
      };
      v_467 = r_St_1_Open_fail;
      if (v) {
        s_St_1_Open_fail_1 = false;
      } else {
        s_St_1_Open_fail_1 = v_20_1;
      };
      v_464 = s_St_1_Open_fail_1;
      if (v) {
        s_St_1_Open_fail_2 = false;
      } else {
        s_St_1_Open_fail_2 = v_20_2;
      };
      v_465 = s_St_1_Open_fail_2;
    };
    s_1 = v_464;
    s_2 = v_465;
    r = v_467;
  };
  ck_2_1 = s_1;
  ck_2_2 = s_2;
  if (ck_2_1) {
    ck_2_2_1 = ck_2_2;
    if (ck_2_2_1) {
      door_status_St_1_Closed = 0;
      nr_St_1_Closed = false;
      ns_St_1_Closed_1 = true;
      ns_St_1_Closed_2 = true;
      v_452 = door_status_St_1_Closed;
      v_458 = nr_St_1_Closed;
      v_454 = ns_St_1_Closed_1;
      v_455 = ns_St_1_Closed_2;
      if (ns_St_1_Closed_1) {
        ns_St_1_Closed_2_1 = ns_St_1_Closed_2;
      } else {
        ns_St_1_Closed_2_0 = ns_St_1_Closed_2;
      };
    } else {
      door_status_St_1_Closed_fail = 2;
      v_452 = door_status_St_1_Closed_fail;
      nr_St_1_Closed_fail = false;
      v_458 = nr_St_1_Closed_fail;
      ns_St_1_Closed_fail_1 = true;
      v_454 = ns_St_1_Closed_fail_1;
      ns_St_1_Closed_fail_2 = false;
      v_455 = ns_St_1_Closed_fail_2;
      if (ns_St_1_Closed_fail_1) {
        ns_St_1_Closed_fail_2_1 = ns_St_1_Closed_fail_2;
      } else {
        ns_St_1_Closed_fail_2_0 = ns_St_1_Closed_fail_2;
      };
    };
    _out->door_status = v_452;
    ns_1 = v_454;
    ns_2 = v_455;
    nr = v_458;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      door_status_St_1_Open = 1;
      nr_St_1_Open = false;
      ns_St_1_Open_1 = false;
      ns_St_1_Open_2 = true;
      v_453 = door_status_St_1_Open;
      v_459 = nr_St_1_Open;
      v_456 = ns_St_1_Open_1;
      v_457 = ns_St_1_Open_2;
    } else {
      door_status_St_1_Open_fail = 3;
      v_453 = door_status_St_1_Open_fail;
      nr_St_1_Open_fail = false;
      v_459 = nr_St_1_Open_fail;
      ns_St_1_Open_fail_1 = false;
      v_456 = ns_St_1_Open_fail_1;
      ns_St_1_Open_fail_2 = false;
      v_457 = ns_St_1_Open_fail_2;
    };
    _out->door_status = v_453;
    ns_1 = v_456;
    ns_2 = v_457;
    nr = v_459;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (!(ck_2_1)) {
    if (ck_2_2_0) {
      if (ns_St_1_Open_1) {
        ns_St_1_Open_2_1 = ns_St_1_Open_2;
      } else {
        ns_St_1_Open_2_0 = ns_St_1_Open_2;
      };
    } else {
      if (ns_St_1_Open_fail_1) {
        ns_St_1_Open_fail_2_1 = ns_St_1_Open_fail_2;
      } else {
        ns_St_1_Open_fail_2_0 = ns_St_1_Open_fail_2;
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
  } else {
    s_2_0 = s_2;
  };
  if (!(ck_1)) {
    if (ck_2_3_0) {
      if (v_23_1) {
        v_23_2_1 = v_23_2;
      } else {
        v_23_2_0 = v_23_2;
      };
      if (s_St_1_Open_1) {
        s_St_1_Open_2_1 = s_St_1_Open_2;
      } else {
        s_St_1_Open_2_0 = s_St_1_Open_2;
      };
    } else {
      if (v_20_1) {
        v_20_2_1 = v_20_2;
      } else {
        v_20_2_0 = v_20_2;
      };
      if (s_St_1_Open_fail_1) {
        s_St_1_Open_fail_2_1 = s_St_1_Open_fail_2;
      } else {
        s_St_1_Open_fail_2_0 = s_St_1_Open_fail_2;
      };
    };
  };
  self->pnr = nr;
  self->v_460 = ns_1;
  self->v_461 = ns_2;;
}

void System__closet_reset(System__closet_mem* self) {
  self->pnr = false;
  self->v_476 = true;
  self->v_477 = true;
}

void System__closet_step(int c, int failed_recovered,
                         System__closet_out* _out, System__closet_mem* self) {
  
  int v_475;
  int v_474;
  int v_473;
  int v_472;
  int v_471;
  int v_470;
  int v_469;
  int v_468;
  int ns_St_2_Open_fail_2_0;
  int ns_St_2_Open_fail_2_1;
  int ns_St_2_Open_2_0;
  int ns_St_2_Open_2_1;
  int ns_St_2_Locked_fail_2_0;
  int ns_St_2_Locked_fail_2_1;
  int ns_St_2_Locked_2_0;
  int ns_St_2_Locked_2_1;
  int ck_3_2_0;
  int ck_3_2_1;
  int nr_St_2_Open_fail;
  int ns_St_2_Open_fail_2;
  int ns_St_2_Open_fail_1;
  int closet_status_St_2_Open_fail;
  int nr_St_2_Open;
  int ns_St_2_Open_2;
  int ns_St_2_Open_1;
  int closet_status_St_2_Open;
  int nr_St_2_Locked_fail;
  int ns_St_2_Locked_fail_2;
  int ns_St_2_Locked_fail_1;
  int closet_status_St_2_Locked_fail;
  int nr_St_2_Locked;
  int ns_St_2_Locked_2;
  int ns_St_2_Locked_1;
  int closet_status_St_2_Locked;
  int ck_3_2;
  int ck_3_1;
  int v_38_2_0;
  int v_38_2_1;
  int v_39;
  int v_38_2;
  int v_38_1;
  int v_37;
  int v_35_2_0;
  int v_35_2_1;
  int v_36;
  int v_35_2;
  int v_35_1;
  int v_34;
  int v_32_2_0;
  int v_32_2_1;
  int v_33;
  int v_32_2;
  int v_32_1;
  int v_2_0;
  int v_2_1;
  int v_31;
  int v_2;
  int v_1;
  int v_483;
  int v_482;
  int v_481;
  int v_480;
  int v_479;
  int v_478;
  int s_St_2_Open_fail_2_0;
  int s_St_2_Open_fail_2_1;
  int s_St_2_Open_2_0;
  int s_St_2_Open_2_1;
  int s_St_2_Locked_fail_2_0;
  int s_St_2_Locked_fail_2_1;
  int s_St_2_Locked_2_0;
  int s_St_2_Locked_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_2_Open_fail;
  int s_St_2_Open_fail_2;
  int s_St_2_Open_fail_1;
  int r_St_2_Open;
  int s_St_2_Open_2;
  int s_St_2_Open_1;
  int r_St_2_Locked_fail;
  int s_St_2_Locked_fail_2;
  int s_St_2_Locked_fail_1;
  int r_St_2_Locked;
  int s_St_2_Locked_2;
  int s_St_2_Locked_1;
  int ck_2;
  int ck_1;
  int s_2_0;
  int s_2_1;
  int ns_2_0;
  int ns_2_1;
  int s_2;
  int s_1;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1 = self->v_476;
  ck_2 = self->v_477;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      if (failed_recovered) {
        v_39 = true;
        v_38_1 = false;
        v_38_2 = false;
      } else {
        v_39 = self->pnr;
        v_38_1 = true;
        v_38_2 = true;
      };
      v_37 = !(c);
      if (v_37) {
        r_St_2_Locked = true;
        s_St_2_Locked_1 = false;
        s_St_2_Locked_2 = true;
      } else {
        r_St_2_Locked = v_39;
        s_St_2_Locked_1 = v_38_1;
        s_St_2_Locked_2 = v_38_2;
      };
      v_482 = r_St_2_Locked;
      v_478 = s_St_2_Locked_1;
      v_479 = s_St_2_Locked_2;
      if (v_38_1) {
        v_38_2_1 = v_38_2;
      } else {
        v_38_2_0 = v_38_2;
      };
      if (s_St_2_Locked_1) {
        s_St_2_Locked_2_1 = s_St_2_Locked_2;
      } else {
        s_St_2_Locked_2_0 = s_St_2_Locked_2;
      };
    } else {
      if (failed_recovered) {
        v_36 = true;
        v_35_1 = true;
        v_35_2 = true;
      } else {
        v_36 = self->pnr;
        v_35_1 = true;
        v_35_2 = false;
      };
      v_34 = !(c);
      if (v_34) {
        r_St_2_Locked_fail = true;
      } else {
        r_St_2_Locked_fail = v_36;
      };
      v_482 = r_St_2_Locked_fail;
      if (v_34) {
        s_St_2_Locked_fail_1 = false;
      } else {
        s_St_2_Locked_fail_1 = v_35_1;
      };
      v_478 = s_St_2_Locked_fail_1;
      if (v_34) {
        s_St_2_Locked_fail_2 = false;
      } else {
        s_St_2_Locked_fail_2 = v_35_2;
      };
      v_479 = s_St_2_Locked_fail_2;
      if (v_35_1) {
        v_35_2_1 = v_35_2;
      } else {
        v_35_2_0 = v_35_2;
      };
      if (s_St_2_Locked_fail_1) {
        s_St_2_Locked_fail_2_1 = s_St_2_Locked_fail_2;
      } else {
        s_St_2_Locked_fail_2_0 = s_St_2_Locked_fail_2;
      };
    };
    s_1 = v_478;
    s_2 = v_479;
    r = v_482;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      if (failed_recovered) {
        v_33 = true;
      } else {
        v_33 = self->pnr;
      };
      if (c) {
        r_St_2_Open = true;
      } else {
        r_St_2_Open = v_33;
      };
      if (failed_recovered) {
        v_32_1 = false;
      } else {
        v_32_1 = false;
      };
      if (c) {
        s_St_2_Open_1 = true;
      } else {
        s_St_2_Open_1 = v_32_1;
      };
      if (failed_recovered) {
        v_32_2 = false;
      } else {
        v_32_2 = true;
      };
      if (c) {
        s_St_2_Open_2 = true;
      } else {
        s_St_2_Open_2 = v_32_2;
      };
      v_483 = r_St_2_Open;
      v_480 = s_St_2_Open_1;
      v_481 = s_St_2_Open_2;
    } else {
      if (failed_recovered) {
        v_31 = true;
      } else {
        v_31 = self->pnr;
      };
      if (c) {
        r_St_2_Open_fail = true;
      } else {
        r_St_2_Open_fail = v_31;
      };
      v_483 = r_St_2_Open_fail;
      if (failed_recovered) {
        v_1 = false;
      } else {
        v_1 = false;
      };
      if (c) {
        s_St_2_Open_fail_1 = true;
      } else {
        s_St_2_Open_fail_1 = v_1;
      };
      v_480 = s_St_2_Open_fail_1;
      if (failed_recovered) {
        v_2 = true;
      } else {
        v_2 = false;
      };
      if (c) {
        s_St_2_Open_fail_2 = false;
      } else {
        s_St_2_Open_fail_2 = v_2;
      };
      v_481 = s_St_2_Open_fail_2;
    };
    s_1 = v_480;
    s_2 = v_481;
    r = v_483;
  };
  ck_3_1 = s_1;
  ck_3_2 = s_2;
  if (ck_3_1) {
    ck_3_2_1 = ck_3_2;
    if (ck_3_2_1) {
      closet_status_St_2_Locked = 0;
      nr_St_2_Locked = false;
      ns_St_2_Locked_1 = true;
      ns_St_2_Locked_2 = true;
      v_468 = closet_status_St_2_Locked;
      v_474 = nr_St_2_Locked;
      v_470 = ns_St_2_Locked_1;
      v_471 = ns_St_2_Locked_2;
      if (ns_St_2_Locked_1) {
        ns_St_2_Locked_2_1 = ns_St_2_Locked_2;
      } else {
        ns_St_2_Locked_2_0 = ns_St_2_Locked_2;
      };
    } else {
      closet_status_St_2_Locked_fail = 2;
      v_468 = closet_status_St_2_Locked_fail;
      nr_St_2_Locked_fail = false;
      v_474 = nr_St_2_Locked_fail;
      ns_St_2_Locked_fail_1 = true;
      v_470 = ns_St_2_Locked_fail_1;
      ns_St_2_Locked_fail_2 = false;
      v_471 = ns_St_2_Locked_fail_2;
      if (ns_St_2_Locked_fail_1) {
        ns_St_2_Locked_fail_2_1 = ns_St_2_Locked_fail_2;
      } else {
        ns_St_2_Locked_fail_2_0 = ns_St_2_Locked_fail_2;
      };
    };
    _out->closet_status = v_468;
    ns_1 = v_470;
    ns_2 = v_471;
    nr = v_474;
  } else {
    ck_3_2_0 = ck_3_2;
    if (ck_3_2_0) {
      closet_status_St_2_Open = 1;
      nr_St_2_Open = false;
      ns_St_2_Open_1 = false;
      ns_St_2_Open_2 = true;
      v_469 = closet_status_St_2_Open;
      v_475 = nr_St_2_Open;
      v_472 = ns_St_2_Open_1;
      v_473 = ns_St_2_Open_2;
    } else {
      closet_status_St_2_Open_fail = 3;
      v_469 = closet_status_St_2_Open_fail;
      nr_St_2_Open_fail = false;
      v_475 = nr_St_2_Open_fail;
      ns_St_2_Open_fail_1 = false;
      v_472 = ns_St_2_Open_fail_1;
      ns_St_2_Open_fail_2 = false;
      v_473 = ns_St_2_Open_fail_2;
    };
    _out->closet_status = v_469;
    ns_1 = v_472;
    ns_2 = v_473;
    nr = v_475;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (!(ck_3_1)) {
    if (ck_3_2_0) {
      if (ns_St_2_Open_1) {
        ns_St_2_Open_2_1 = ns_St_2_Open_2;
      } else {
        ns_St_2_Open_2_0 = ns_St_2_Open_2;
      };
    } else {
      if (ns_St_2_Open_fail_1) {
        ns_St_2_Open_fail_2_1 = ns_St_2_Open_fail_2;
      } else {
        ns_St_2_Open_fail_2_0 = ns_St_2_Open_fail_2;
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
  } else {
    s_2_0 = s_2;
  };
  if (!(ck_1)) {
    if (ck_2_0) {
      if (v_32_1) {
        v_32_2_1 = v_32_2;
      } else {
        v_32_2_0 = v_32_2;
      };
      if (s_St_2_Open_1) {
        s_St_2_Open_2_1 = s_St_2_Open_2;
      } else {
        s_St_2_Open_2_0 = s_St_2_Open_2;
      };
    } else {
      if (v_1) {
        v_2_1 = v_2;
      } else {
        v_2_0 = v_2;
      };
      if (s_St_2_Open_fail_1) {
        s_St_2_Open_fail_2_1 = s_St_2_Open_fail_2;
      } else {
        s_St_2_Open_fail_2_0 = s_St_2_Open_fail_2;
      };
    };
  };
  self->pnr = nr;
  self->v_476 = ns_1;
  self->v_477 = ns_2;;
}

void System__computer_reset(System__computer_mem* self) {
  self->pnr = false;
  self->v_492 = true;
  self->v_493 = true;
}

void System__computer_step(int c, int failed_recovered,
                           System__computer_out* _out,
                           System__computer_mem* self) {
  
  int v_491;
  int v_490;
  int v_489;
  int v_488;
  int v_487;
  int v_486;
  int v_485;
  int v_484;
  int ns_St_3_On_fail_2_0;
  int ns_St_3_On_fail_2_1;
  int ns_St_3_On_2_0;
  int ns_St_3_On_2_1;
  int ns_St_3_Off_fail_2_0;
  int ns_St_3_Off_fail_2_1;
  int ns_St_3_Off_2_0;
  int ns_St_3_Off_2_1;
  int ck_4_2_0;
  int ck_4_2_1;
  int nr_St_3_On_fail;
  int ns_St_3_On_fail_2;
  int ns_St_3_On_fail_1;
  int computer_status_St_3_On_fail;
  int nr_St_3_On;
  int ns_St_3_On_2;
  int ns_St_3_On_1;
  int computer_status_St_3_On;
  int nr_St_3_Off_fail;
  int ns_St_3_Off_fail_2;
  int ns_St_3_Off_fail_1;
  int computer_status_St_3_Off_fail;
  int nr_St_3_Off;
  int ns_St_3_Off_2;
  int ns_St_3_Off_1;
  int computer_status_St_3_Off;
  int ck_4_2;
  int ck_4_1;
  int v_47_2_0;
  int v_47_2_1;
  int v_48;
  int v_47_2;
  int v_47_1;
  int v_45_2_0;
  int v_45_2_1;
  int v_46;
  int v_45_2;
  int v_45_1;
  int v_43_2_0;
  int v_43_2_1;
  int v_44;
  int v_43_2;
  int v_43_1;
  int v_42;
  int v_40_2_0;
  int v_40_2_1;
  int v_41;
  int v_40_2;
  int v_40_1;
  int v;
  int v_499;
  int v_498;
  int v_497;
  int v_496;
  int v_495;
  int v_494;
  int s_St_3_On_fail_2_0;
  int s_St_3_On_fail_2_1;
  int s_St_3_On_2_0;
  int s_St_3_On_2_1;
  int s_St_3_Off_fail_2_0;
  int s_St_3_Off_fail_2_1;
  int s_St_3_Off_2_0;
  int s_St_3_Off_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_3_On_fail;
  int s_St_3_On_fail_2;
  int s_St_3_On_fail_1;
  int r_St_3_On;
  int s_St_3_On_2;
  int s_St_3_On_1;
  int r_St_3_Off_fail;
  int s_St_3_Off_fail_2;
  int s_St_3_Off_fail_1;
  int r_St_3_Off;
  int s_St_3_Off_2;
  int s_St_3_Off_1;
  int ck_2;
  int ck_1;
  int s_2_0;
  int s_2_1;
  int ns_2_0;
  int ns_2_1;
  int s_2;
  int s_1;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1 = self->v_492;
  ck_2 = self->v_493;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      if (failed_recovered) {
        v_48 = true;
      } else {
        v_48 = self->pnr;
      };
      if (c) {
        r_St_3_Off = true;
      } else {
        r_St_3_Off = v_48;
      };
      if (failed_recovered) {
        v_47_1 = true;
      } else {
        v_47_1 = true;
      };
      if (c) {
        s_St_3_Off_1 = false;
      } else {
        s_St_3_Off_1 = v_47_1;
      };
      if (failed_recovered) {
        v_47_2 = false;
      } else {
        v_47_2 = true;
      };
      if (c) {
        s_St_3_Off_2 = true;
      } else {
        s_St_3_Off_2 = v_47_2;
      };
      v_498 = r_St_3_Off;
      v_494 = s_St_3_Off_1;
      v_495 = s_St_3_Off_2;
      if (v_47_1) {
        v_47_2_1 = v_47_2;
      } else {
        v_47_2_0 = v_47_2;
      };
      if (s_St_3_Off_1) {
        s_St_3_Off_2_1 = s_St_3_Off_2;
      } else {
        s_St_3_Off_2_0 = s_St_3_Off_2;
      };
    } else {
      if (failed_recovered) {
        v_46 = true;
      } else {
        v_46 = self->pnr;
      };
      if (c) {
        r_St_3_Off_fail = true;
      } else {
        r_St_3_Off_fail = v_46;
      };
      v_498 = r_St_3_Off_fail;
      if (failed_recovered) {
        v_45_1 = true;
      } else {
        v_45_1 = true;
      };
      if (c) {
        s_St_3_Off_fail_1 = false;
      } else {
        s_St_3_Off_fail_1 = v_45_1;
      };
      v_494 = s_St_3_Off_fail_1;
      if (failed_recovered) {
        v_45_2 = true;
      } else {
        v_45_2 = false;
      };
      if (c) {
        s_St_3_Off_fail_2 = false;
      } else {
        s_St_3_Off_fail_2 = v_45_2;
      };
      v_495 = s_St_3_Off_fail_2;
      if (v_45_1) {
        v_45_2_1 = v_45_2;
      } else {
        v_45_2_0 = v_45_2;
      };
      if (s_St_3_Off_fail_1) {
        s_St_3_Off_fail_2_1 = s_St_3_Off_fail_2;
      } else {
        s_St_3_Off_fail_2_0 = s_St_3_Off_fail_2;
      };
    };
    s_1 = v_494;
    s_2 = v_495;
    r = v_498;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      if (failed_recovered) {
        v_44 = true;
        v_43_1 = false;
        v_43_2 = false;
      } else {
        v_44 = self->pnr;
        v_43_1 = false;
        v_43_2 = true;
      };
      v_42 = !(c);
      if (v_42) {
        r_St_3_On = true;
        s_St_3_On_1 = true;
        s_St_3_On_2 = true;
      } else {
        r_St_3_On = v_44;
        s_St_3_On_1 = v_43_1;
        s_St_3_On_2 = v_43_2;
      };
      v_499 = r_St_3_On;
      v_496 = s_St_3_On_1;
      v_497 = s_St_3_On_2;
    } else {
      if (failed_recovered) {
        v_41 = true;
        v_40_1 = false;
        v_40_2 = true;
      } else {
        v_41 = self->pnr;
        v_40_1 = false;
        v_40_2 = false;
      };
      v = !(c);
      if (v) {
        r_St_3_On_fail = true;
      } else {
        r_St_3_On_fail = v_41;
      };
      v_499 = r_St_3_On_fail;
      if (v) {
        s_St_3_On_fail_1 = true;
      } else {
        s_St_3_On_fail_1 = v_40_1;
      };
      v_496 = s_St_3_On_fail_1;
      if (v) {
        s_St_3_On_fail_2 = false;
      } else {
        s_St_3_On_fail_2 = v_40_2;
      };
      v_497 = s_St_3_On_fail_2;
    };
    s_1 = v_496;
    s_2 = v_497;
    r = v_499;
  };
  ck_4_1 = s_1;
  ck_4_2 = s_2;
  if (ck_4_1) {
    ck_4_2_1 = ck_4_2;
    if (ck_4_2_1) {
      computer_status_St_3_Off = 0;
      nr_St_3_Off = false;
      ns_St_3_Off_1 = true;
      ns_St_3_Off_2 = true;
      v_484 = computer_status_St_3_Off;
      v_490 = nr_St_3_Off;
      v_486 = ns_St_3_Off_1;
      v_487 = ns_St_3_Off_2;
      if (ns_St_3_Off_1) {
        ns_St_3_Off_2_1 = ns_St_3_Off_2;
      } else {
        ns_St_3_Off_2_0 = ns_St_3_Off_2;
      };
    } else {
      computer_status_St_3_Off_fail = 2;
      v_484 = computer_status_St_3_Off_fail;
      nr_St_3_Off_fail = false;
      v_490 = nr_St_3_Off_fail;
      ns_St_3_Off_fail_1 = true;
      v_486 = ns_St_3_Off_fail_1;
      ns_St_3_Off_fail_2 = false;
      v_487 = ns_St_3_Off_fail_2;
      if (ns_St_3_Off_fail_1) {
        ns_St_3_Off_fail_2_1 = ns_St_3_Off_fail_2;
      } else {
        ns_St_3_Off_fail_2_0 = ns_St_3_Off_fail_2;
      };
    };
    _out->computer_status = v_484;
    ns_1 = v_486;
    ns_2 = v_487;
    nr = v_490;
  } else {
    ck_4_2_0 = ck_4_2;
    if (ck_4_2_0) {
      computer_status_St_3_On = 1;
      nr_St_3_On = false;
      ns_St_3_On_1 = false;
      ns_St_3_On_2 = true;
      v_485 = computer_status_St_3_On;
      v_491 = nr_St_3_On;
      v_488 = ns_St_3_On_1;
      v_489 = ns_St_3_On_2;
    } else {
      computer_status_St_3_On_fail = 3;
      v_485 = computer_status_St_3_On_fail;
      nr_St_3_On_fail = false;
      v_491 = nr_St_3_On_fail;
      ns_St_3_On_fail_1 = false;
      v_488 = ns_St_3_On_fail_1;
      ns_St_3_On_fail_2 = false;
      v_489 = ns_St_3_On_fail_2;
    };
    _out->computer_status = v_485;
    ns_1 = v_488;
    ns_2 = v_489;
    nr = v_491;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (!(ck_4_1)) {
    if (ck_4_2_0) {
      if (ns_St_3_On_1) {
        ns_St_3_On_2_1 = ns_St_3_On_2;
      } else {
        ns_St_3_On_2_0 = ns_St_3_On_2;
      };
    } else {
      if (ns_St_3_On_fail_1) {
        ns_St_3_On_fail_2_1 = ns_St_3_On_fail_2;
      } else {
        ns_St_3_On_fail_2_0 = ns_St_3_On_fail_2;
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
  } else {
    s_2_0 = s_2;
  };
  if (!(ck_1)) {
    if (ck_2_0) {
      if (v_43_1) {
        v_43_2_1 = v_43_2;
      } else {
        v_43_2_0 = v_43_2;
      };
      if (s_St_3_On_1) {
        s_St_3_On_2_1 = s_St_3_On_2;
      } else {
        s_St_3_On_2_0 = s_St_3_On_2;
      };
    } else {
      if (v_40_1) {
        v_40_2_1 = v_40_2;
      } else {
        v_40_2_0 = v_40_2;
      };
      if (s_St_3_On_fail_1) {
        s_St_3_On_fail_2_1 = s_St_3_On_fail_2;
      } else {
        s_St_3_On_fail_2_0 = s_St_3_On_fail_2;
      };
    };
  };
  self->pnr = nr;
  self->v_492 = ns_1;
  self->v_493 = ns_2;;
}

void System__window_reset(System__window_mem* self) {
  self->pnr = false;
  self->v_508 = true;
  self->v_509 = true;
}

void System__window_step(int c, int failed_recovered,
                         System__window_out* _out, System__window_mem* self) {
  
  int v_507;
  int v_506;
  int v_505;
  int v_504;
  int v_503;
  int v_502;
  int v_501;
  int v_500;
  int ns_St_4_Open_fail_2_0;
  int ns_St_4_Open_fail_2_1;
  int ns_St_4_Open_2_0;
  int ns_St_4_Open_2_1;
  int ns_St_4_Closed_fail_2_0;
  int ns_St_4_Closed_fail_2_1;
  int ns_St_4_Closed_2_0;
  int ns_St_4_Closed_2_1;
  int ck_5_2_0;
  int ck_5_2_1;
  int nr_St_4_Open_fail;
  int ns_St_4_Open_fail_2;
  int ns_St_4_Open_fail_1;
  int window_status_St_4_Open_fail;
  int nr_St_4_Open;
  int ns_St_4_Open_2;
  int ns_St_4_Open_1;
  int window_status_St_4_Open;
  int nr_St_4_Closed_fail;
  int ns_St_4_Closed_fail_2;
  int ns_St_4_Closed_fail_1;
  int window_status_St_4_Closed_fail;
  int nr_St_4_Closed;
  int ns_St_4_Closed_2;
  int ns_St_4_Closed_1;
  int window_status_St_4_Closed;
  int ck_5_2;
  int ck_5_1;
  int v_56_2_0;
  int v_56_2_1;
  int v_57;
  int v_56_2;
  int v_56_1;
  int v_55;
  int v_53_2_0;
  int v_53_2_1;
  int v_54;
  int v_53_2;
  int v_53_1;
  int v_52;
  int v_50_2_0;
  int v_50_2_1;
  int v_51;
  int v_50_2;
  int v_50_1;
  int v_2_0;
  int v_2_1;
  int v_49;
  int v_2;
  int v_1;
  int v_515;
  int v_514;
  int v_513;
  int v_512;
  int v_511;
  int v_510;
  int s_St_4_Open_fail_2_0;
  int s_St_4_Open_fail_2_1;
  int s_St_4_Open_2_0;
  int s_St_4_Open_2_1;
  int s_St_4_Closed_fail_2_0;
  int s_St_4_Closed_fail_2_1;
  int s_St_4_Closed_2_0;
  int s_St_4_Closed_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_4_Open_fail;
  int s_St_4_Open_fail_2;
  int s_St_4_Open_fail_1;
  int r_St_4_Open;
  int s_St_4_Open_2;
  int s_St_4_Open_1;
  int r_St_4_Closed_fail;
  int s_St_4_Closed_fail_2;
  int s_St_4_Closed_fail_1;
  int r_St_4_Closed;
  int s_St_4_Closed_2;
  int s_St_4_Closed_1;
  int ck_2;
  int ck_1;
  int s_2_0;
  int s_2_1;
  int ns_2_0;
  int ns_2_1;
  int s_2;
  int s_1;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1 = self->v_508;
  ck_2 = self->v_509;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      if (failed_recovered) {
        v_57 = true;
        v_56_1 = true;
        v_56_2 = false;
      } else {
        v_57 = self->pnr;
        v_56_1 = true;
        v_56_2 = true;
      };
      v_55 = !(c);
      if (v_55) {
        r_St_4_Closed = true;
        s_St_4_Closed_1 = false;
        s_St_4_Closed_2 = true;
      } else {
        r_St_4_Closed = v_57;
        s_St_4_Closed_1 = v_56_1;
        s_St_4_Closed_2 = v_56_2;
      };
      v_514 = r_St_4_Closed;
      v_510 = s_St_4_Closed_1;
      v_511 = s_St_4_Closed_2;
      if (v_56_1) {
        v_56_2_1 = v_56_2;
      } else {
        v_56_2_0 = v_56_2;
      };
      if (s_St_4_Closed_1) {
        s_St_4_Closed_2_1 = s_St_4_Closed_2;
      } else {
        s_St_4_Closed_2_0 = s_St_4_Closed_2;
      };
    } else {
      if (failed_recovered) {
        v_54 = true;
        v_53_1 = true;
        v_53_2 = true;
      } else {
        v_54 = self->pnr;
        v_53_1 = true;
        v_53_2 = false;
      };
      v_52 = !(c);
      if (v_52) {
        r_St_4_Closed_fail = true;
      } else {
        r_St_4_Closed_fail = v_54;
      };
      v_514 = r_St_4_Closed_fail;
      if (v_52) {
        s_St_4_Closed_fail_1 = false;
      } else {
        s_St_4_Closed_fail_1 = v_53_1;
      };
      v_510 = s_St_4_Closed_fail_1;
      if (v_52) {
        s_St_4_Closed_fail_2 = false;
      } else {
        s_St_4_Closed_fail_2 = v_53_2;
      };
      v_511 = s_St_4_Closed_fail_2;
      if (v_53_1) {
        v_53_2_1 = v_53_2;
      } else {
        v_53_2_0 = v_53_2;
      };
      if (s_St_4_Closed_fail_1) {
        s_St_4_Closed_fail_2_1 = s_St_4_Closed_fail_2;
      } else {
        s_St_4_Closed_fail_2_0 = s_St_4_Closed_fail_2;
      };
    };
    s_1 = v_510;
    s_2 = v_511;
    r = v_514;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      if (failed_recovered) {
        v_51 = true;
      } else {
        v_51 = self->pnr;
      };
      if (c) {
        r_St_4_Open = true;
      } else {
        r_St_4_Open = v_51;
      };
      if (failed_recovered) {
        v_50_1 = false;
      } else {
        v_50_1 = false;
      };
      if (c) {
        s_St_4_Open_1 = true;
      } else {
        s_St_4_Open_1 = v_50_1;
      };
      if (failed_recovered) {
        v_50_2 = false;
      } else {
        v_50_2 = true;
      };
      if (c) {
        s_St_4_Open_2 = true;
      } else {
        s_St_4_Open_2 = v_50_2;
      };
      v_515 = r_St_4_Open;
      v_512 = s_St_4_Open_1;
      v_513 = s_St_4_Open_2;
    } else {
      if (failed_recovered) {
        v_49 = true;
      } else {
        v_49 = self->pnr;
      };
      if (c) {
        r_St_4_Open_fail = true;
      } else {
        r_St_4_Open_fail = v_49;
      };
      v_515 = r_St_4_Open_fail;
      if (failed_recovered) {
        v_1 = false;
      } else {
        v_1 = false;
      };
      if (c) {
        s_St_4_Open_fail_1 = true;
      } else {
        s_St_4_Open_fail_1 = v_1;
      };
      v_512 = s_St_4_Open_fail_1;
      if (failed_recovered) {
        v_2 = true;
      } else {
        v_2 = false;
      };
      if (c) {
        s_St_4_Open_fail_2 = false;
      } else {
        s_St_4_Open_fail_2 = v_2;
      };
      v_513 = s_St_4_Open_fail_2;
    };
    s_1 = v_512;
    s_2 = v_513;
    r = v_515;
  };
  ck_5_1 = s_1;
  ck_5_2 = s_2;
  if (ck_5_1) {
    ck_5_2_1 = ck_5_2;
    if (ck_5_2_1) {
      window_status_St_4_Closed = 0;
      nr_St_4_Closed = false;
      ns_St_4_Closed_1 = true;
      ns_St_4_Closed_2 = true;
      v_500 = window_status_St_4_Closed;
      v_506 = nr_St_4_Closed;
      v_502 = ns_St_4_Closed_1;
      v_503 = ns_St_4_Closed_2;
      if (ns_St_4_Closed_1) {
        ns_St_4_Closed_2_1 = ns_St_4_Closed_2;
      } else {
        ns_St_4_Closed_2_0 = ns_St_4_Closed_2;
      };
    } else {
      window_status_St_4_Closed_fail = 2;
      v_500 = window_status_St_4_Closed_fail;
      nr_St_4_Closed_fail = false;
      v_506 = nr_St_4_Closed_fail;
      ns_St_4_Closed_fail_1 = true;
      v_502 = ns_St_4_Closed_fail_1;
      ns_St_4_Closed_fail_2 = false;
      v_503 = ns_St_4_Closed_fail_2;
      if (ns_St_4_Closed_fail_1) {
        ns_St_4_Closed_fail_2_1 = ns_St_4_Closed_fail_2;
      } else {
        ns_St_4_Closed_fail_2_0 = ns_St_4_Closed_fail_2;
      };
    };
    _out->window_status = v_500;
    ns_1 = v_502;
    ns_2 = v_503;
    nr = v_506;
  } else {
    ck_5_2_0 = ck_5_2;
    if (ck_5_2_0) {
      window_status_St_4_Open = 1;
      nr_St_4_Open = false;
      ns_St_4_Open_1 = false;
      ns_St_4_Open_2 = true;
      v_501 = window_status_St_4_Open;
      v_507 = nr_St_4_Open;
      v_504 = ns_St_4_Open_1;
      v_505 = ns_St_4_Open_2;
    } else {
      window_status_St_4_Open_fail = 3;
      v_501 = window_status_St_4_Open_fail;
      nr_St_4_Open_fail = false;
      v_507 = nr_St_4_Open_fail;
      ns_St_4_Open_fail_1 = false;
      v_504 = ns_St_4_Open_fail_1;
      ns_St_4_Open_fail_2 = false;
      v_505 = ns_St_4_Open_fail_2;
    };
    _out->window_status = v_501;
    ns_1 = v_504;
    ns_2 = v_505;
    nr = v_507;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (!(ck_5_1)) {
    if (ck_5_2_0) {
      if (ns_St_4_Open_1) {
        ns_St_4_Open_2_1 = ns_St_4_Open_2;
      } else {
        ns_St_4_Open_2_0 = ns_St_4_Open_2;
      };
    } else {
      if (ns_St_4_Open_fail_1) {
        ns_St_4_Open_fail_2_1 = ns_St_4_Open_fail_2;
      } else {
        ns_St_4_Open_fail_2_0 = ns_St_4_Open_fail_2;
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
  } else {
    s_2_0 = s_2;
  };
  if (!(ck_1)) {
    if (ck_2_0) {
      if (v_50_1) {
        v_50_2_1 = v_50_2;
      } else {
        v_50_2_0 = v_50_2;
      };
      if (s_St_4_Open_1) {
        s_St_4_Open_2_1 = s_St_4_Open_2;
      } else {
        s_St_4_Open_2_0 = s_St_4_Open_2;
      };
    } else {
      if (v_1) {
        v_2_1 = v_2;
      } else {
        v_2_0 = v_2;
      };
      if (s_St_4_Open_fail_1) {
        s_St_4_Open_fail_2_1 = s_St_4_Open_fail_2;
      } else {
        s_St_4_Open_fail_2_0 = s_St_4_Open_fail_2;
      };
    };
  };
  self->pnr = nr;
  self->v_508 = ns_1;
  self->v_509 = ns_2;;
}

void System__air_conditioner_reset(System__air_conditioner_mem* self) {
  self->pnr = false;
  self->v_546 = false;
  self->v_547 = true;
  self->v_548 = false;
}

void System__air_conditioner_step(int c1, int c2, int failed_recovered,
                                  System__air_conditioner_out* _out,
                                  System__air_conditioner_mem* self) {
  
  int v_545;
  int v_544;
  int v_543;
  int v_542;
  int v_541;
  int v_540;
  int v_539;
  int v_538;
  int v_537;
  int v_536;
  int v_535;
  int v_534;
  int v_533;
  int v_532;
  int v_531;
  int v_530;
  int v_529;
  int v_528;
  int v_527;
  int v_526;
  int v_525;
  int v_524;
  int v_523;
  int v_522;
  int v_521;
  int v_520;
  int v_519;
  int v_518;
  int v_517;
  int v_516;
  int ns_St_5_Max_fail_2_0;
  int ns_St_5_Max_fail_3_0_0;
  int ns_St_5_Max_fail_3_0_1;
  int ns_St_5_Max_fail_2_1;
  int ns_St_5_Max_fail_3_1_0;
  int ns_St_5_Max_fail_3_1_1;
  int ns_St_5_Max_2_0;
  int ns_St_5_Max_3_0_0;
  int ns_St_5_Max_3_0_1;
  int ns_St_5_Max_2_1;
  int ns_St_5_Max_3_1_0;
  int ns_St_5_Max_3_1_1;
  int ns_St_5_Min_fail_2_0;
  int ns_St_5_Min_fail_3_0_0;
  int ns_St_5_Min_fail_3_0_1;
  int ns_St_5_Min_fail_2_1;
  int ns_St_5_Min_fail_3_1_0;
  int ns_St_5_Min_fail_3_1_1;
  int ns_St_5_Min_2_0;
  int ns_St_5_Min_3_0_0;
  int ns_St_5_Min_3_0_1;
  int ns_St_5_Min_2_1;
  int ns_St_5_Min_3_1_0;
  int ns_St_5_Min_3_1_1;
  int ns_St_5_Off_fail_2_0;
  int ns_St_5_Off_fail_3_0_0;
  int ns_St_5_Off_fail_3_0_1;
  int ns_St_5_Off_fail_2_1;
  int ns_St_5_Off_fail_3_1_0;
  int ns_St_5_Off_fail_3_1_1;
  int ns_St_5_Off_2_0;
  int ns_St_5_Off_3_0_0;
  int ns_St_5_Off_3_0_1;
  int ns_St_5_Off_2_1;
  int ns_St_5_Off_3_1_0;
  int ns_St_5_Off_3_1_1;
  int ck_6_2_0;
  int ck_6_3_0_0;
  int ck_6_3_0_1;
  int ck_6_2_1;
  int ck_6_3_1_0;
  int ck_6_3_1_1;
  int nr_St_5_Max_fail;
  int ns_St_5_Max_fail_3;
  int ns_St_5_Max_fail_2;
  int ns_St_5_Max_fail_1;
  int air_status_St_5_Max_fail;
  int nr_St_5_Max;
  int ns_St_5_Max_3;
  int ns_St_5_Max_2;
  int ns_St_5_Max_1;
  int air_status_St_5_Max;
  int nr_St_5_Min_fail;
  int ns_St_5_Min_fail_3;
  int ns_St_5_Min_fail_2;
  int ns_St_5_Min_fail_1;
  int air_status_St_5_Min_fail;
  int nr_St_5_Min;
  int ns_St_5_Min_3;
  int ns_St_5_Min_2;
  int ns_St_5_Min_1;
  int air_status_St_5_Min;
  int nr_St_5_Off_fail;
  int ns_St_5_Off_fail_3;
  int ns_St_5_Off_fail_2;
  int ns_St_5_Off_fail_1;
  int air_status_St_5_Off_fail;
  int nr_St_5_Off;
  int ns_St_5_Off_3;
  int ns_St_5_Off_2;
  int ns_St_5_Off_1;
  int air_status_St_5_Off;
  int ck_6_3;
  int ck_6_2;
  int ck_6_1;
  int v_89_2_0;
  int v_89_3_0_0;
  int v_89_3_0_1;
  int v_89_2_1;
  int v_89_3_1_0;
  int v_89_3_1_1;
  int v_87_2_0;
  int v_87_3_0_0;
  int v_87_3_0_1;
  int v_87_2_1;
  int v_87_3_1_0;
  int v_87_3_1_1;
  int v_90;
  int v_89_3;
  int v_89_2;
  int v_89_1;
  int v_88;
  int v_87_3;
  int v_87_2;
  int v_87_1;
  int v_86;
  int v_84_2_0;
  int v_84_3_0_0;
  int v_84_3_0_1;
  int v_84_2_1;
  int v_84_3_1_0;
  int v_84_3_1_1;
  int v_82_2_0;
  int v_82_3_0_0;
  int v_82_3_0_1;
  int v_82_2_1;
  int v_82_3_1_0;
  int v_82_3_1_1;
  int v_85;
  int v_84_3;
  int v_84_2;
  int v_84_1;
  int v_83;
  int v_82_3;
  int v_82_2;
  int v_82_1;
  int v_81;
  int v_79_2_0;
  int v_79_3_0_0;
  int v_79_3_0_1;
  int v_79_2_1;
  int v_79_3_1_0;
  int v_79_3_1_1;
  int v_77_2_0;
  int v_77_3_0_0;
  int v_77_3_0_1;
  int v_77_2_1;
  int v_77_3_1_0;
  int v_77_3_1_1;
  int v_80;
  int v_79_3;
  int v_79_2;
  int v_79_1;
  int v_78;
  int v_77_3;
  int v_77_2;
  int v_77_1;
  int v_76;
  int v_75;
  int v_73_2_0;
  int v_73_3_0_0;
  int v_73_3_0_1;
  int v_73_2_1;
  int v_73_3_1_0;
  int v_73_3_1_1;
  int v_71_2_0;
  int v_71_3_0_0;
  int v_71_3_0_1;
  int v_71_2_1;
  int v_71_3_1_0;
  int v_71_3_1_1;
  int v_74;
  int v_73_3;
  int v_73_2;
  int v_73_1;
  int v_72;
  int v_71_3;
  int v_71_2;
  int v_71_1;
  int v_70;
  int v_69;
  int v_67_2_0;
  int v_67_3_0_0;
  int v_67_3_0_1;
  int v_67_2_1;
  int v_67_3_1_0;
  int v_67_3_1_1;
  int v_65_2_0;
  int v_65_3_0_0;
  int v_65_3_0_1;
  int v_65_2_1;
  int v_65_3_1_0;
  int v_65_3_1_1;
  int v_68;
  int v_67_3;
  int v_67_2;
  int v_67_1;
  int v_66;
  int v_65_3;
  int v_65_2;
  int v_65_1;
  int v_64;
  int v_63;
  int v_61_2_0;
  int v_61_3_0_0;
  int v_61_3_0_1;
  int v_61_2_1;
  int v_61_3_1_0;
  int v_61_3_1_1;
  int v_59_2_0;
  int v_59_3_0_0;
  int v_59_3_0_1;
  int v_59_2_1;
  int v_59_3_1_0;
  int v_59_3_1_1;
  int v_62;
  int v_61_3;
  int v_61_2;
  int v_61_1;
  int v_60;
  int v_59_3;
  int v_59_2;
  int v_59_1;
  int v_58;
  int v;
  int v_572;
  int v_571;
  int v_570;
  int v_569;
  int v_568;
  int v_567;
  int v_566;
  int v_565;
  int v_564;
  int v_563;
  int v_562;
  int v_561;
  int v_560;
  int v_559;
  int v_558;
  int v_557;
  int v_556;
  int v_555;
  int v_554;
  int v_553;
  int v_552;
  int v_551;
  int v_550;
  int v_549;
  int s_St_5_Max_fail_2_0;
  int s_St_5_Max_fail_3_0_0;
  int s_St_5_Max_fail_3_0_1;
  int s_St_5_Max_fail_2_1;
  int s_St_5_Max_fail_3_1_0;
  int s_St_5_Max_fail_3_1_1;
  int s_St_5_Max_2_0;
  int s_St_5_Max_3_0_0;
  int s_St_5_Max_3_0_1;
  int s_St_5_Max_2_1;
  int s_St_5_Max_3_1_0;
  int s_St_5_Max_3_1_1;
  int s_St_5_Min_fail_2_0;
  int s_St_5_Min_fail_3_0_0;
  int s_St_5_Min_fail_3_0_1;
  int s_St_5_Min_fail_2_1;
  int s_St_5_Min_fail_3_1_0;
  int s_St_5_Min_fail_3_1_1;
  int s_St_5_Min_2_0;
  int s_St_5_Min_3_0_0;
  int s_St_5_Min_3_0_1;
  int s_St_5_Min_2_1;
  int s_St_5_Min_3_1_0;
  int s_St_5_Min_3_1_1;
  int s_St_5_Off_fail_2_0;
  int s_St_5_Off_fail_3_0_0;
  int s_St_5_Off_fail_3_0_1;
  int s_St_5_Off_fail_2_1;
  int s_St_5_Off_fail_3_1_0;
  int s_St_5_Off_fail_3_1_1;
  int s_St_5_Off_2_0;
  int s_St_5_Off_3_0_0;
  int s_St_5_Off_3_0_1;
  int s_St_5_Off_2_1;
  int s_St_5_Off_3_1_0;
  int s_St_5_Off_3_1_1;
  int ck_2_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_St_5_Max_fail;
  int s_St_5_Max_fail_3;
  int s_St_5_Max_fail_2;
  int s_St_5_Max_fail_1;
  int r_St_5_Max;
  int s_St_5_Max_3;
  int s_St_5_Max_2;
  int s_St_5_Max_1;
  int r_St_5_Min_fail;
  int s_St_5_Min_fail_3;
  int s_St_5_Min_fail_2;
  int s_St_5_Min_fail_1;
  int r_St_5_Min;
  int s_St_5_Min_3;
  int s_St_5_Min_2;
  int s_St_5_Min_1;
  int r_St_5_Off_fail;
  int s_St_5_Off_fail_3;
  int s_St_5_Off_fail_2;
  int s_St_5_Off_fail_1;
  int r_St_5_Off;
  int s_St_5_Off_3;
  int s_St_5_Off_2;
  int s_St_5_Off_1;
  int ck_3;
  int ck_2;
  int ck_1;
  int s_2_0;
  int s_3_0_0;
  int s_3_0_1;
  int s_2_1;
  int s_3_1_0;
  int s_3_1_1;
  int ns_2_0;
  int ns_3_0_0;
  int ns_3_0_1;
  int ns_2_1;
  int ns_3_1_0;
  int ns_3_1_1;
  int s_3;
  int s_2;
  int s_1;
  int ns_3;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1 = self->v_546;
  ck_2 = self->v_547;
  ck_3 = self->v_548;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (failed_recovered) {
          v_66 = true;
          v_65_1 = true;
          v_65_2 = true;
          v_65_3 = false;
        } else {
          v_66 = self->pnr;
          v_65_1 = true;
          v_65_2 = true;
          v_65_3 = true;
        };
        v_64 = !(c2);
        if (v_64) {
          v_68 = true;
          v_67_1 = false;
          v_67_2 = true;
          v_67_3 = false;
        } else {
          v_68 = v_66;
          v_67_1 = v_65_1;
          v_67_2 = v_65_2;
          v_67_3 = v_65_3;
        };
        v_63 = !(c1);
        if (v_63) {
          r_St_5_Max = true;
          s_St_5_Max_1 = true;
          s_St_5_Max_2 = false;
          s_St_5_Max_3 = false;
        } else {
          r_St_5_Max = v_68;
          s_St_5_Max_1 = v_67_1;
          s_St_5_Max_2 = v_67_2;
          s_St_5_Max_3 = v_67_3;
        };
        v_567 = r_St_5_Max;
        v_549 = s_St_5_Max_1;
        v_550 = s_St_5_Max_2;
        v_551 = s_St_5_Max_3;
      } else {
        if (failed_recovered) {
          v_60 = true;
          v_59_1 = true;
          v_59_2 = true;
          v_59_3 = true;
        } else {
          v_60 = self->pnr;
          v_59_1 = true;
          v_59_2 = true;
          v_59_3 = false;
        };
        v_58 = !(c2);
        if (v_58) {
          v_62 = true;
          v_61_1 = false;
          v_61_2 = false;
          v_61_3 = false;
        } else {
          v_62 = v_60;
          v_61_1 = v_59_1;
          v_61_2 = v_59_2;
          v_61_3 = v_59_3;
        };
        v = !(c1);
        if (v) {
          r_St_5_Max_fail = true;
        } else {
          r_St_5_Max_fail = v_62;
        };
        v_567 = r_St_5_Max_fail;
        if (v) {
          s_St_5_Max_fail_1 = false;
        } else {
          s_St_5_Max_fail_1 = v_61_1;
        };
        v_549 = s_St_5_Max_fail_1;
        if (v) {
          s_St_5_Max_fail_2 = true;
        } else {
          s_St_5_Max_fail_2 = v_61_2;
        };
        v_550 = s_St_5_Max_fail_2;
        if (v) {
          s_St_5_Max_fail_3 = true;
        } else {
          s_St_5_Max_fail_3 = v_61_3;
        };
        v_551 = s_St_5_Max_fail_3;
      };
      v_561 = v_549;
      v_562 = v_550;
      v_563 = v_551;
      v_569 = v_567;
      if (ck_3_1_1) {
        if (v_65_1) {
          v_65_2_1 = v_65_2;
          if (v_65_2_1) {
            v_65_3_1_1 = v_65_3;
          } else {
            v_65_3_1_0 = v_65_3;
          };
        } else {
          v_65_2_0 = v_65_2;
          if (v_65_2_0) {
            v_65_3_0_1 = v_65_3;
          } else {
            v_65_3_0_0 = v_65_3;
          };
        };
        if (v_67_1) {
          v_67_2_1 = v_67_2;
          if (v_67_2_1) {
            v_67_3_1_1 = v_67_3;
          } else {
            v_67_3_1_0 = v_67_3;
          };
        } else {
          v_67_2_0 = v_67_2;
          if (v_67_2_0) {
            v_67_3_0_1 = v_67_3;
          } else {
            v_67_3_0_0 = v_67_3;
          };
        };
        if (s_St_5_Max_1) {
          s_St_5_Max_2_1 = s_St_5_Max_2;
          if (s_St_5_Max_2_1) {
            s_St_5_Max_3_1_1 = s_St_5_Max_3;
          } else {
            s_St_5_Max_3_1_0 = s_St_5_Max_3;
          };
        } else {
          s_St_5_Max_2_0 = s_St_5_Max_2;
          if (s_St_5_Max_2_0) {
            s_St_5_Max_3_0_1 = s_St_5_Max_3;
          } else {
            s_St_5_Max_3_0_0 = s_St_5_Max_3;
          };
        };
      } else {
        if (v_59_1) {
          v_59_2_1 = v_59_2;
          if (v_59_2_1) {
            v_59_3_1_1 = v_59_3;
          } else {
            v_59_3_1_0 = v_59_3;
          };
        } else {
          v_59_2_0 = v_59_2;
          if (v_59_2_0) {
            v_59_3_0_1 = v_59_3;
          } else {
            v_59_3_0_0 = v_59_3;
          };
        };
        if (v_61_1) {
          v_61_2_1 = v_61_2;
          if (v_61_2_1) {
            v_61_3_1_1 = v_61_3;
          } else {
            v_61_3_1_0 = v_61_3;
          };
        } else {
          v_61_2_0 = v_61_2;
          if (v_61_2_0) {
            v_61_3_0_1 = v_61_3;
          } else {
            v_61_3_0_0 = v_61_3;
          };
        };
        if (s_St_5_Max_fail_1) {
          s_St_5_Max_fail_2_1 = s_St_5_Max_fail_2;
          if (s_St_5_Max_fail_2_1) {
            s_St_5_Max_fail_3_1_1 = s_St_5_Max_fail_3;
          } else {
            s_St_5_Max_fail_3_1_0 = s_St_5_Max_fail_3;
          };
        } else {
          s_St_5_Max_fail_2_0 = s_St_5_Max_fail_2;
          if (s_St_5_Max_fail_2_0) {
            s_St_5_Max_fail_3_0_1 = s_St_5_Max_fail_3;
          } else {
            s_St_5_Max_fail_3_0_0 = s_St_5_Max_fail_3;
          };
        };
      };
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_568 = true;
        v_552 = true;
        v_553 = true;
        v_554 = true;
      } else {
        if (failed_recovered) {
          v_78 = true;
          v_77_1 = false;
          v_77_2 = true;
          v_77_3 = true;
        } else {
          v_78 = self->pnr;
          v_77_1 = true;
          v_77_2 = false;
          v_77_3 = false;
        };
        v_76 = !(c2);
        if (v_76) {
          v_80 = true;
          v_79_1 = true;
          v_79_2 = true;
          v_79_3 = true;
        } else {
          v_80 = v_78;
          v_79_1 = v_77_1;
          v_79_2 = v_77_2;
          v_79_3 = v_77_3;
        };
        v_75 = !(c1);
        if (v_75) {
          r_St_5_Min = true;
        } else {
          r_St_5_Min = v_80;
        };
        v_568 = r_St_5_Min;
        if (v_75) {
          s_St_5_Min_1 = false;
        } else {
          s_St_5_Min_1 = v_79_1;
        };
        v_552 = s_St_5_Min_1;
        if (v_75) {
          s_St_5_Min_2 = true;
        } else {
          s_St_5_Min_2 = v_79_2;
        };
        v_553 = s_St_5_Min_2;
        if (v_75) {
          s_St_5_Min_3 = false;
        } else {
          s_St_5_Min_3 = v_79_3;
        };
        v_554 = s_St_5_Min_3;
        if (v_77_1) {
          v_77_2_1 = v_77_2;
          if (v_77_2_1) {
            v_77_3_1_1 = v_77_3;
          } else {
            v_77_3_1_0 = v_77_3;
          };
        } else {
          v_77_2_0 = v_77_2;
          if (v_77_2_0) {
            v_77_3_0_1 = v_77_3;
          } else {
            v_77_3_0_0 = v_77_3;
          };
        };
        if (v_79_1) {
          v_79_2_1 = v_79_2;
          if (v_79_2_1) {
            v_79_3_1_1 = v_79_3;
          } else {
            v_79_3_1_0 = v_79_3;
          };
        } else {
          v_79_2_0 = v_79_2;
          if (v_79_2_0) {
            v_79_3_0_1 = v_79_3;
          } else {
            v_79_3_0_0 = v_79_3;
          };
        };
        if (s_St_5_Min_1) {
          s_St_5_Min_2_1 = s_St_5_Min_2;
          if (s_St_5_Min_2_1) {
            s_St_5_Min_3_1_1 = s_St_5_Min_3;
          } else {
            s_St_5_Min_3_1_0 = s_St_5_Min_3;
          };
        } else {
          s_St_5_Min_2_0 = s_St_5_Min_2;
          if (s_St_5_Min_2_0) {
            s_St_5_Min_3_0_1 = s_St_5_Min_3;
          } else {
            s_St_5_Min_3_0_0 = s_St_5_Min_3;
          };
        };
      };
      v_561 = v_552;
      v_562 = v_553;
      v_563 = v_554;
      v_569 = v_568;
    };
    s_1 = v_561;
    s_2 = v_562;
    s_3 = v_563;
    r = v_569;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      if (ck_3_0_1) {
        if (failed_recovered) {
          v_72 = true;
          v_71_1 = true;
          v_71_2 = false;
          v_71_3 = false;
        } else {
          v_72 = self->pnr;
          v_71_1 = false;
          v_71_2 = true;
          v_71_3 = true;
        };
        v_70 = !(c2);
        if (v_70) {
          v_74 = true;
          v_73_1 = true;
          v_73_2 = true;
          v_73_3 = false;
        } else {
          v_74 = v_72;
          v_73_1 = v_71_1;
          v_73_2 = v_71_2;
          v_73_3 = v_71_3;
        };
        v_69 = !(c1);
        if (v_69) {
          r_St_5_Min_fail = true;
        } else {
          r_St_5_Min_fail = v_74;
        };
        v_570 = r_St_5_Min_fail;
        if (v_69) {
          s_St_5_Min_fail_1 = false;
        } else {
          s_St_5_Min_fail_1 = v_73_1;
        };
        v_555 = s_St_5_Min_fail_1;
        if (v_69) {
          s_St_5_Min_fail_2 = false;
        } else {
          s_St_5_Min_fail_2 = v_73_2;
        };
        v_556 = s_St_5_Min_fail_2;
        if (v_69) {
          s_St_5_Min_fail_3 = false;
        } else {
          s_St_5_Min_fail_3 = v_73_3;
        };
        v_557 = s_St_5_Min_fail_3;
      } else {
        if (failed_recovered) {
          v_88 = true;
          v_87_1 = false;
          v_87_2 = false;
          v_87_3 = false;
        } else {
          v_88 = self->pnr;
          v_87_1 = false;
          v_87_2 = true;
          v_87_3 = false;
        };
        v_86 = !(c2);
        if (v_86) {
          v_90 = true;
        } else {
          v_90 = v_88;
        };
        if (c1) {
          r_St_5_Off = true;
        } else {
          r_St_5_Off = v_90;
        };
        if (v_86) {
          v_89_1 = true;
        } else {
          v_89_1 = v_87_1;
        };
        if (c1) {
          s_St_5_Off_1 = true;
        } else {
          s_St_5_Off_1 = v_89_1;
        };
        if (v_86) {
          v_89_2 = true;
        } else {
          v_89_2 = v_87_2;
        };
        if (c1) {
          s_St_5_Off_2 = false;
        } else {
          s_St_5_Off_2 = v_89_2;
        };
        if (v_86) {
          v_89_3 = true;
        } else {
          v_89_3 = v_87_3;
        };
        if (c1) {
          s_St_5_Off_3 = false;
        } else {
          s_St_5_Off_3 = v_89_3;
        };
        v_570 = r_St_5_Off;
        v_555 = s_St_5_Off_1;
        v_556 = s_St_5_Off_2;
        v_557 = s_St_5_Off_3;
        if (v_87_1) {
          v_87_2_1 = v_87_2;
          if (v_87_2_1) {
            v_87_3_1_1 = v_87_3;
          } else {
            v_87_3_1_0 = v_87_3;
          };
        } else {
          v_87_2_0 = v_87_2;
          if (v_87_2_0) {
            v_87_3_0_1 = v_87_3;
          } else {
            v_87_3_0_0 = v_87_3;
          };
        };
        if (v_89_1) {
          v_89_2_1 = v_89_2;
          if (v_89_2_1) {
            v_89_3_1_1 = v_89_3;
          } else {
            v_89_3_1_0 = v_89_3;
          };
        } else {
          v_89_2_0 = v_89_2;
          if (v_89_2_0) {
            v_89_3_0_1 = v_89_3;
          } else {
            v_89_3_0_0 = v_89_3;
          };
        };
      };
      v_564 = v_555;
      v_565 = v_556;
      v_566 = v_557;
      v_572 = v_570;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_571 = true;
        v_558 = true;
        v_559 = true;
        v_560 = true;
      } else {
        if (failed_recovered) {
          v_83 = true;
          v_82_1 = false;
          v_82_2 = true;
          v_82_3 = false;
        } else {
          v_83 = self->pnr;
          v_82_1 = false;
          v_82_2 = false;
          v_82_3 = false;
        };
        v_81 = !(c2);
        if (v_81) {
          v_85 = true;
        } else {
          v_85 = v_83;
        };
        if (c1) {
          r_St_5_Off_fail = true;
        } else {
          r_St_5_Off_fail = v_85;
        };
        v_571 = r_St_5_Off_fail;
        if (v_81) {
          v_84_1 = true;
        } else {
          v_84_1 = v_82_1;
        };
        if (c1) {
          s_St_5_Off_fail_1 = false;
        } else {
          s_St_5_Off_fail_1 = v_84_1;
        };
        v_558 = s_St_5_Off_fail_1;
        if (v_81) {
          v_84_2 = true;
        } else {
          v_84_2 = v_82_2;
        };
        if (c1) {
          s_St_5_Off_fail_2 = true;
        } else {
          s_St_5_Off_fail_2 = v_84_2;
        };
        v_559 = s_St_5_Off_fail_2;
        if (v_81) {
          v_84_3 = false;
        } else {
          v_84_3 = v_82_3;
        };
        if (c1) {
          s_St_5_Off_fail_3 = true;
        } else {
          s_St_5_Off_fail_3 = v_84_3;
        };
        v_560 = s_St_5_Off_fail_3;
        if (v_82_1) {
          v_82_2_1 = v_82_2;
          if (v_82_2_1) {
            v_82_3_1_1 = v_82_3;
          } else {
            v_82_3_1_0 = v_82_3;
          };
        } else {
          v_82_2_0 = v_82_2;
          if (v_82_2_0) {
            v_82_3_0_1 = v_82_3;
          } else {
            v_82_3_0_0 = v_82_3;
          };
        };
        if (v_84_1) {
          v_84_2_1 = v_84_2;
          if (v_84_2_1) {
            v_84_3_1_1 = v_84_3;
          } else {
            v_84_3_1_0 = v_84_3;
          };
        } else {
          v_84_2_0 = v_84_2;
          if (v_84_2_0) {
            v_84_3_0_1 = v_84_3;
          } else {
            v_84_3_0_0 = v_84_3;
          };
        };
        if (s_St_5_Off_fail_1) {
          s_St_5_Off_fail_2_1 = s_St_5_Off_fail_2;
          if (s_St_5_Off_fail_2_1) {
            s_St_5_Off_fail_3_1_1 = s_St_5_Off_fail_3;
          } else {
            s_St_5_Off_fail_3_1_0 = s_St_5_Off_fail_3;
          };
        } else {
          s_St_5_Off_fail_2_0 = s_St_5_Off_fail_2;
          if (s_St_5_Off_fail_2_0) {
            s_St_5_Off_fail_3_0_1 = s_St_5_Off_fail_3;
          } else {
            s_St_5_Off_fail_3_0_0 = s_St_5_Off_fail_3;
          };
        };
      };
      v_564 = v_558;
      v_565 = v_559;
      v_566 = v_560;
      v_572 = v_571;
    };
    s_1 = v_564;
    s_2 = v_565;
    s_3 = v_566;
    r = v_572;
  };
  ck_6_1 = s_1;
  ck_6_2 = s_2;
  ck_6_3 = s_3;
  if (ck_6_1) {
    ck_6_2_1 = ck_6_2;
    if (ck_6_2_1) {
      ck_6_3_1_1 = ck_6_3;
      if (ck_6_3_1_1) {
        air_status_St_5_Max = 2;
        nr_St_5_Max = false;
        ns_St_5_Max_1 = true;
        ns_St_5_Max_2 = true;
        ns_St_5_Max_3 = true;
        v_516 = air_status_St_5_Max;
        v_540 = nr_St_5_Max;
        v_522 = ns_St_5_Max_1;
        v_523 = ns_St_5_Max_2;
        v_524 = ns_St_5_Max_3;
      } else {
        air_status_St_5_Max_fail = 5;
        v_516 = air_status_St_5_Max_fail;
        nr_St_5_Max_fail = false;
        v_540 = nr_St_5_Max_fail;
        ns_St_5_Max_fail_1 = true;
        v_522 = ns_St_5_Max_fail_1;
        ns_St_5_Max_fail_2 = true;
        v_523 = ns_St_5_Max_fail_2;
        ns_St_5_Max_fail_3 = false;
        v_524 = ns_St_5_Max_fail_3;
      };
      v_518 = v_516;
      v_534 = v_522;
      v_535 = v_523;
      v_536 = v_524;
      v_542 = v_540;
      if (ck_6_3_1_1) {
        if (ns_St_5_Max_1) {
          ns_St_5_Max_2_1 = ns_St_5_Max_2;
          if (ns_St_5_Max_2_1) {
            ns_St_5_Max_3_1_1 = ns_St_5_Max_3;
          } else {
            ns_St_5_Max_3_1_0 = ns_St_5_Max_3;
          };
        } else {
          ns_St_5_Max_2_0 = ns_St_5_Max_2;
          if (ns_St_5_Max_2_0) {
            ns_St_5_Max_3_0_1 = ns_St_5_Max_3;
          } else {
            ns_St_5_Max_3_0_0 = ns_St_5_Max_3;
          };
        };
      } else {
        if (ns_St_5_Max_fail_1) {
          ns_St_5_Max_fail_2_1 = ns_St_5_Max_fail_2;
          if (ns_St_5_Max_fail_2_1) {
            ns_St_5_Max_fail_3_1_1 = ns_St_5_Max_fail_3;
          } else {
            ns_St_5_Max_fail_3_1_0 = ns_St_5_Max_fail_3;
          };
        } else {
          ns_St_5_Max_fail_2_0 = ns_St_5_Max_fail_2;
          if (ns_St_5_Max_fail_2_0) {
            ns_St_5_Max_fail_3_0_1 = ns_St_5_Max_fail_3;
          } else {
            ns_St_5_Max_fail_3_0_0 = ns_St_5_Max_fail_3;
          };
        };
      };
    } else {
      ck_6_3_1_0 = ck_6_3;
      if (ck_6_3_1_0) {
        v_517 = 0;
        v_541 = true;
        v_525 = true;
        v_526 = true;
        v_527 = true;
      } else {
        air_status_St_5_Min = 1;
        v_517 = air_status_St_5_Min;
        nr_St_5_Min = false;
        v_541 = nr_St_5_Min;
        ns_St_5_Min_1 = true;
        v_525 = ns_St_5_Min_1;
        ns_St_5_Min_2 = false;
        v_526 = ns_St_5_Min_2;
        ns_St_5_Min_3 = false;
        v_527 = ns_St_5_Min_3;
        if (ns_St_5_Min_1) {
          ns_St_5_Min_2_1 = ns_St_5_Min_2;
          if (ns_St_5_Min_2_1) {
            ns_St_5_Min_3_1_1 = ns_St_5_Min_3;
          } else {
            ns_St_5_Min_3_1_0 = ns_St_5_Min_3;
          };
        } else {
          ns_St_5_Min_2_0 = ns_St_5_Min_2;
          if (ns_St_5_Min_2_0) {
            ns_St_5_Min_3_0_1 = ns_St_5_Min_3;
          } else {
            ns_St_5_Min_3_0_0 = ns_St_5_Min_3;
          };
        };
      };
      v_518 = v_517;
      v_534 = v_525;
      v_535 = v_526;
      v_536 = v_527;
      v_542 = v_541;
    };
    _out->air_status = v_518;
    ns_1 = v_534;
    ns_2 = v_535;
    ns_3 = v_536;
    nr = v_542;
  } else {
    ck_6_2_0 = ck_6_2;
    if (ck_6_2_0) {
      ck_6_3_0_1 = ck_6_3;
      if (ck_6_3_0_1) {
        air_status_St_5_Min_fail = 4;
        v_519 = air_status_St_5_Min_fail;
        nr_St_5_Min_fail = false;
        v_543 = nr_St_5_Min_fail;
        ns_St_5_Min_fail_1 = false;
        v_528 = ns_St_5_Min_fail_1;
        ns_St_5_Min_fail_2 = true;
        v_529 = ns_St_5_Min_fail_2;
        ns_St_5_Min_fail_3 = true;
        v_530 = ns_St_5_Min_fail_3;
      } else {
        air_status_St_5_Off = 0;
        nr_St_5_Off = false;
        ns_St_5_Off_1 = false;
        ns_St_5_Off_2 = true;
        ns_St_5_Off_3 = false;
        v_519 = air_status_St_5_Off;
        v_543 = nr_St_5_Off;
        v_528 = ns_St_5_Off_1;
        v_529 = ns_St_5_Off_2;
        v_530 = ns_St_5_Off_3;
      };
      v_521 = v_519;
      v_537 = v_528;
      v_538 = v_529;
      v_539 = v_530;
      v_545 = v_543;
    } else {
      ck_6_3_0_0 = ck_6_3;
      if (ck_6_3_0_0) {
        v_520 = 0;
        v_544 = true;
        v_531 = true;
        v_532 = true;
        v_533 = true;
      } else {
        air_status_St_5_Off_fail = 3;
        v_520 = air_status_St_5_Off_fail;
        nr_St_5_Off_fail = false;
        v_544 = nr_St_5_Off_fail;
        ns_St_5_Off_fail_1 = false;
        v_531 = ns_St_5_Off_fail_1;
        ns_St_5_Off_fail_2 = false;
        v_532 = ns_St_5_Off_fail_2;
        ns_St_5_Off_fail_3 = false;
        v_533 = ns_St_5_Off_fail_3;
        if (ns_St_5_Off_fail_1) {
          ns_St_5_Off_fail_2_1 = ns_St_5_Off_fail_2;
          if (ns_St_5_Off_fail_2_1) {
            ns_St_5_Off_fail_3_1_1 = ns_St_5_Off_fail_3;
          } else {
            ns_St_5_Off_fail_3_1_0 = ns_St_5_Off_fail_3;
          };
        } else {
          ns_St_5_Off_fail_2_0 = ns_St_5_Off_fail_2;
          if (ns_St_5_Off_fail_2_0) {
            ns_St_5_Off_fail_3_0_1 = ns_St_5_Off_fail_3;
          } else {
            ns_St_5_Off_fail_3_0_0 = ns_St_5_Off_fail_3;
          };
        };
      };
      v_521 = v_520;
      v_537 = v_531;
      v_538 = v_532;
      v_539 = v_533;
      v_545 = v_544;
    };
    _out->air_status = v_521;
    ns_1 = v_537;
    ns_2 = v_538;
    ns_3 = v_539;
    nr = v_545;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
    if (ns_2_1) {
      ns_3_1_1 = ns_3;
    } else {
      ns_3_1_0 = ns_3;
    };
  } else {
    ns_2_0 = ns_2;
    if (ns_2_0) {
      ns_3_0_1 = ns_3;
    } else {
      ns_3_0_0 = ns_3;
    };
  };
  if (!(ck_6_1)) {
    if (ck_6_2_0) {
      if (ck_6_3_0_1) {
        if (ns_St_5_Min_fail_1) {
          ns_St_5_Min_fail_2_1 = ns_St_5_Min_fail_2;
          if (ns_St_5_Min_fail_2_1) {
            ns_St_5_Min_fail_3_1_1 = ns_St_5_Min_fail_3;
          } else {
            ns_St_5_Min_fail_3_1_0 = ns_St_5_Min_fail_3;
          };
        } else {
          ns_St_5_Min_fail_2_0 = ns_St_5_Min_fail_2;
          if (ns_St_5_Min_fail_2_0) {
            ns_St_5_Min_fail_3_0_1 = ns_St_5_Min_fail_3;
          } else {
            ns_St_5_Min_fail_3_0_0 = ns_St_5_Min_fail_3;
          };
        };
      } else {
        if (ns_St_5_Off_1) {
          ns_St_5_Off_2_1 = ns_St_5_Off_2;
          if (ns_St_5_Off_2_1) {
            ns_St_5_Off_3_1_1 = ns_St_5_Off_3;
          } else {
            ns_St_5_Off_3_1_0 = ns_St_5_Off_3;
          };
        } else {
          ns_St_5_Off_2_0 = ns_St_5_Off_2;
          if (ns_St_5_Off_2_0) {
            ns_St_5_Off_3_0_1 = ns_St_5_Off_3;
          } else {
            ns_St_5_Off_3_0_0 = ns_St_5_Off_3;
          };
        };
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
    if (s_2_1) {
      s_3_1_1 = s_3;
    } else {
      s_3_1_0 = s_3;
    };
  } else {
    s_2_0 = s_2;
    if (s_2_0) {
      s_3_0_1 = s_3;
    } else {
      s_3_0_0 = s_3;
    };
  };
  if (!(ck_1)) {
    if (ck_2_0) {
      if (ck_3_0_1) {
        if (v_71_1) {
          v_71_2_1 = v_71_2;
          if (v_71_2_1) {
            v_71_3_1_1 = v_71_3;
          } else {
            v_71_3_1_0 = v_71_3;
          };
        } else {
          v_71_2_0 = v_71_2;
          if (v_71_2_0) {
            v_71_3_0_1 = v_71_3;
          } else {
            v_71_3_0_0 = v_71_3;
          };
        };
        if (v_73_1) {
          v_73_2_1 = v_73_2;
          if (v_73_2_1) {
            v_73_3_1_1 = v_73_3;
          } else {
            v_73_3_1_0 = v_73_3;
          };
        } else {
          v_73_2_0 = v_73_2;
          if (v_73_2_0) {
            v_73_3_0_1 = v_73_3;
          } else {
            v_73_3_0_0 = v_73_3;
          };
        };
        if (s_St_5_Min_fail_1) {
          s_St_5_Min_fail_2_1 = s_St_5_Min_fail_2;
          if (s_St_5_Min_fail_2_1) {
            s_St_5_Min_fail_3_1_1 = s_St_5_Min_fail_3;
          } else {
            s_St_5_Min_fail_3_1_0 = s_St_5_Min_fail_3;
          };
        } else {
          s_St_5_Min_fail_2_0 = s_St_5_Min_fail_2;
          if (s_St_5_Min_fail_2_0) {
            s_St_5_Min_fail_3_0_1 = s_St_5_Min_fail_3;
          } else {
            s_St_5_Min_fail_3_0_0 = s_St_5_Min_fail_3;
          };
        };
      } else {
        if (s_St_5_Off_1) {
          s_St_5_Off_2_1 = s_St_5_Off_2;
          if (s_St_5_Off_2_1) {
            s_St_5_Off_3_1_1 = s_St_5_Off_3;
          } else {
            s_St_5_Off_3_1_0 = s_St_5_Off_3;
          };
        } else {
          s_St_5_Off_2_0 = s_St_5_Off_2;
          if (s_St_5_Off_2_0) {
            s_St_5_Off_3_0_1 = s_St_5_Off_3;
          } else {
            s_St_5_Off_3_0_0 = s_St_5_Off_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_546 = ns_1;
  self->v_547 = ns_2;
  self->v_548 = ns_3;;
}

void System__person_reset(System__person_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__person_step(int arrived, System__person_out* _out,
                         System__person_mem* self) {
  
  int nr_St_6_Present;
  int ns_St_6_Present_1;
  int presence_St_6_Present;
  int nr_St_6_Not_Present;
  int ns_St_6_Not_Present_1;
  int presence_St_6_Not_Present;
  int ck_7_1;
  int r_St_6_Present;
  int s_St_6_Present_1;
  int r_St_6_Not_Present;
  int s_St_6_Not_Present_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (arrived) {
      r_St_6_Not_Present = true;
      s_St_6_Not_Present_1 = false;
    } else {
      r_St_6_Not_Present = self->pnr;
      s_St_6_Not_Present_1 = true;
    };
    r = r_St_6_Not_Present;
    s_1 = s_St_6_Not_Present_1;
  } else {
    if (arrived) {
      r_St_6_Present = true;
    } else {
      r_St_6_Present = self->pnr;
    };
    r = r_St_6_Present;
    if (arrived) {
      s_St_6_Present_1 = true;
    } else {
      s_St_6_Present_1 = false;
    };
    s_1 = s_St_6_Present_1;
  };
  ck_7_1 = s_1;
  if (ck_7_1) {
    presence_St_6_Not_Present = false;
    nr_St_6_Not_Present = false;
    ns_St_6_Not_Present_1 = true;
    _out->presence = presence_St_6_Not_Present;
    nr = nr_St_6_Not_Present;
    ns_1 = ns_St_6_Not_Present_1;
  } else {
    presence_St_6_Present = true;
    _out->presence = presence_St_6_Present;
    nr_St_6_Present = false;
    nr = nr_St_6_Present;
    ns_St_6_Present_1 = false;
    ns_1 = ns_St_6_Present_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__day_shift_reset(System__day_shift_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__day_shift_step(int change, System__day_shift_out* _out,
                            System__day_shift_mem* self) {
  
  int nr_St_7_Noite;
  int ns_St_7_Noite_1;
  int night_St_7_Noite;
  int nr_St_7_Dia;
  int ns_St_7_Dia_1;
  int night_St_7_Dia;
  int ck_8_1;
  int r_St_7_Noite;
  int s_St_7_Noite_1;
  int r_St_7_Dia;
  int s_St_7_Dia_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (change) {
      r_St_7_Dia = true;
      s_St_7_Dia_1 = false;
    } else {
      r_St_7_Dia = self->pnr;
      s_St_7_Dia_1 = true;
    };
    r = r_St_7_Dia;
    s_1 = s_St_7_Dia_1;
  } else {
    if (change) {
      r_St_7_Noite = true;
    } else {
      r_St_7_Noite = self->pnr;
    };
    r = r_St_7_Noite;
    if (change) {
      s_St_7_Noite_1 = true;
    } else {
      s_St_7_Noite_1 = false;
    };
    s_1 = s_St_7_Noite_1;
  };
  ck_8_1 = s_1;
  if (ck_8_1) {
    night_St_7_Dia = false;
    nr_St_7_Dia = false;
    ns_St_7_Dia_1 = true;
    _out->night = night_St_7_Dia;
    nr = nr_St_7_Dia;
    ns_1 = ns_St_7_Dia_1;
  } else {
    night_St_7_Noite = true;
    _out->night = night_St_7_Noite;
    nr_St_7_Noite = false;
    nr = nr_St_7_Noite;
    ns_St_7_Noite_1 = false;
    ns_1 = ns_St_7_Noite_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__controller_reset(System__controller_mem* self) {
  self->pnr = false;
  self->v_581 = true;
  self->v_582 = true;
  self->pnr_1 = false;
  self->v_597 = true;
  self->v_598 = true;
  self->pnr_2 = false;
  self->v_613 = true;
  self->v_614 = true;
  self->pnr_3 = false;
  self->v_629 = true;
  self->v_630 = true;
  self->pnr_4 = false;
  self->v_645 = true;
  self->v_646 = true;
  self->pnr_5 = false;
  self->v_683 = false;
  self->v_684 = true;
  self->v_685 = false;
  self->pnr_6 = false;
  self->v_718 = true;
  self->v_719 = true;
  self->pnr_7 = false;
  self->v_734 = true;
  self->v_735 = true;
  self->pnr_8 = false;
  self->v_750 = true;
  self->v_751 = true;
  self->pnr_9 = false;
  self->v_766 = true;
  self->v_767 = true;
  self->pnr_10 = false;
  self->ck_12_1 = true;
  self->pnr_11 = false;
  self->ck_10_1 = true;
  self->pnr_12 = false;
  self->ck_1 = true;
}

void System__controller_step(int change_shift, int worker, int cleaner,
                             int air_failed_recovered, int light_switch,
                             int light_failed_recovered, int blind_switch,
                             int blind_failed_recovered,
                             int door_failed_recovered,
                             int closet_failed_recovered,
                             int pc_failed_recovered,
                             int window_failed_recovered,
                             System__controller_out* _out,
                             System__controller_mem* self) {
  Controller_controller__controller_controller_out Controller_controller__controller_controller_out_st;
  
  int v_580;
  int v_579;
  int v_578;
  int v_577;
  int v_576;
  int v_575;
  int v_574;
  int v_573;
  int ns_St_8_On_fail_2_0;
  int ns_St_8_On_fail_2_1;
  int ns_St_8_On_2_0;
  int ns_St_8_On_2_1;
  int ns_St_8_Off_fail_2_0;
  int ns_St_8_Off_fail_2_1;
  int ns_St_8_Off_2_0;
  int ns_St_8_Off_2_1;
  int ck_33_2_0;
  int ck_33_2_1;
  int nr_St_8_On_fail;
  int ns_St_8_On_fail_2;
  int ns_St_8_On_fail_1;
  int light_source_status_4_St_8_On_fail;
  int nr_St_8_On;
  int ns_St_8_On_2;
  int ns_St_8_On_1;
  int light_source_status_4_St_8_On;
  int nr_St_8_Off_fail;
  int ns_St_8_Off_fail_2;
  int ns_St_8_Off_fail_1;
  int light_source_status_4_St_8_Off_fail;
  int nr_St_8_Off;
  int ns_St_8_Off_2;
  int ns_St_8_Off_1;
  int light_source_status_4_St_8_Off;
  int ck_33_2;
  int ck_33_1;
  int v_434_2_0;
  int v_434_2_1;
  int v_435;
  int v_434_2;
  int v_434_1;
  int v_433;
  int v_432;
  int v_431;
  int v_429_2_0;
  int v_429_2_1;
  int v_430;
  int v_429_2;
  int v_429_1;
  int v_428;
  int v_427;
  int v_426;
  int v_424_2_0;
  int v_424_2_1;
  int v_425;
  int v_424_2;
  int v_424_1;
  int v_423;
  int v_422;
  int v_421;
  int v_419_2_0;
  int v_419_2_1;
  int v_420;
  int v_419_2;
  int v_419_1;
  int v_418;
  int v_417;
  int v_416;
  int v_588;
  int v_587;
  int v_586;
  int v_585;
  int v_584;
  int v_583;
  int s_St_8_On_fail_2_0;
  int s_St_8_On_fail_2_1;
  int s_St_8_On_2_0;
  int s_St_8_On_2_1;
  int s_St_8_Off_fail_2_0;
  int s_St_8_Off_fail_2_1;
  int s_St_8_Off_2_0;
  int s_St_8_Off_2_1;
  int ck_32_2_0;
  int ck_32_2_1;
  int r_St_8_On_fail;
  int s_St_8_On_fail_2;
  int s_St_8_On_fail_1;
  int r_St_8_On;
  int s_St_8_On_2;
  int s_St_8_On_1;
  int r_St_8_Off_fail;
  int s_St_8_Off_fail_2;
  int s_St_8_Off_fail_1;
  int r_St_8_Off;
  int s_St_8_Off_2;
  int s_St_8_Off_1;
  int ck_32_2;
  int ck_32_1;
  int v_596;
  int v_595;
  int v_594;
  int v_593;
  int v_592;
  int v_591;
  int v_590;
  int v_589;
  int ns_1_St_9_On_fail_2_0;
  int ns_1_St_9_On_fail_2_1;
  int ns_1_St_9_On_2_0;
  int ns_1_St_9_On_2_1;
  int ns_1_St_9_Off_fail_2_0;
  int ns_1_St_9_Off_fail_2_1;
  int ns_1_St_9_Off_2_0;
  int ns_1_St_9_Off_2_1;
  int ck_31_2_0;
  int ck_31_2_1;
  int nr_1_St_9_On_fail;
  int ns_1_St_9_On_fail_2;
  int ns_1_St_9_On_fail_1;
  int light_source_status_3_St_9_On_fail;
  int nr_1_St_9_On;
  int ns_1_St_9_On_2;
  int ns_1_St_9_On_1;
  int light_source_status_3_St_9_On;
  int nr_1_St_9_Off_fail;
  int ns_1_St_9_Off_fail_2;
  int ns_1_St_9_Off_fail_1;
  int light_source_status_3_St_9_Off_fail;
  int nr_1_St_9_Off;
  int ns_1_St_9_Off_2;
  int ns_1_St_9_Off_1;
  int light_source_status_3_St_9_Off;
  int ck_31_2;
  int ck_31_1;
  int v_414_2_0;
  int v_414_2_1;
  int v_415;
  int v_414_2;
  int v_414_1;
  int v_413;
  int v_412;
  int v_411;
  int v_409_2_0;
  int v_409_2_1;
  int v_410;
  int v_409_2;
  int v_409_1;
  int v_408;
  int v_407;
  int v_406;
  int v_404_2_0;
  int v_404_2_1;
  int v_405;
  int v_404_2;
  int v_404_1;
  int v_403;
  int v_402;
  int v_401;
  int v_399_2_0;
  int v_399_2_1;
  int v_400;
  int v_399_2;
  int v_399_1;
  int v_398;
  int v_397;
  int v_396;
  int v_604;
  int v_603;
  int v_602;
  int v_601;
  int v_600;
  int v_599;
  int s_1_St_9_On_fail_2_0;
  int s_1_St_9_On_fail_2_1;
  int s_1_St_9_On_2_0;
  int s_1_St_9_On_2_1;
  int s_1_St_9_Off_fail_2_0;
  int s_1_St_9_Off_fail_2_1;
  int s_1_St_9_Off_2_0;
  int s_1_St_9_Off_2_1;
  int ck_30_2_0;
  int ck_30_2_1;
  int r_1_St_9_On_fail;
  int s_1_St_9_On_fail_2;
  int s_1_St_9_On_fail_1;
  int r_1_St_9_On;
  int s_1_St_9_On_2;
  int s_1_St_9_On_1;
  int r_1_St_9_Off_fail;
  int s_1_St_9_Off_fail_2;
  int s_1_St_9_Off_fail_1;
  int r_1_St_9_Off;
  int s_1_St_9_Off_2;
  int s_1_St_9_Off_1;
  int ck_30_2;
  int ck_30_1;
  int v_612;
  int v_611;
  int v_610;
  int v_609;
  int v_608;
  int v_607;
  int v_606;
  int v_605;
  int ns_2_St_10_On_fail_2_0;
  int ns_2_St_10_On_fail_2_1;
  int ns_2_St_10_On_2_0;
  int ns_2_St_10_On_2_1;
  int ns_2_St_10_Off_fail_2_0;
  int ns_2_St_10_Off_fail_2_1;
  int ns_2_St_10_Off_2_0;
  int ns_2_St_10_Off_2_1;
  int ck_29_2_0;
  int ck_29_2_1;
  int nr_2_St_10_On_fail;
  int ns_2_St_10_On_fail_2;
  int ns_2_St_10_On_fail_1;
  int light_source_status_2_St_10_On_fail;
  int nr_2_St_10_On;
  int ns_2_St_10_On_2;
  int ns_2_St_10_On_1;
  int light_source_status_2_St_10_On;
  int nr_2_St_10_Off_fail;
  int ns_2_St_10_Off_fail_2;
  int ns_2_St_10_Off_fail_1;
  int light_source_status_2_St_10_Off_fail;
  int nr_2_St_10_Off;
  int ns_2_St_10_Off_2;
  int ns_2_St_10_Off_1;
  int light_source_status_2_St_10_Off;
  int ck_29_2;
  int ck_29_1;
  int v_394_2_0;
  int v_394_2_1;
  int v_395;
  int v_394_2;
  int v_394_1;
  int v_393;
  int v_392;
  int v_391;
  int v_389_2_0;
  int v_389_2_1;
  int v_390;
  int v_389_2;
  int v_389_1;
  int v_388;
  int v_387;
  int v_386;
  int v_384_2_0;
  int v_384_2_1;
  int v_385;
  int v_384_2;
  int v_384_1;
  int v_383;
  int v_382;
  int v_381;
  int v_379_2_0;
  int v_379_2_1;
  int v_380;
  int v_379_2;
  int v_379_1;
  int v_378;
  int v_377;
  int v_376;
  int v_620;
  int v_619;
  int v_618;
  int v_617;
  int v_616;
  int v_615;
  int s_2_St_10_On_fail_2_0;
  int s_2_St_10_On_fail_2_1;
  int s_2_St_10_On_2_0;
  int s_2_St_10_On_2_1;
  int s_2_St_10_Off_fail_2_0;
  int s_2_St_10_Off_fail_2_1;
  int s_2_St_10_Off_2_0;
  int s_2_St_10_Off_2_1;
  int ck_28_2_0;
  int ck_28_2_1;
  int r_2_St_10_On_fail;
  int s_2_St_10_On_fail_2;
  int s_2_St_10_On_fail_1;
  int r_2_St_10_On;
  int s_2_St_10_On_2;
  int s_2_St_10_On_1;
  int r_2_St_10_Off_fail;
  int s_2_St_10_Off_fail_2;
  int s_2_St_10_Off_fail_1;
  int r_2_St_10_Off;
  int s_2_St_10_Off_2;
  int s_2_St_10_Off_1;
  int ck_28_2;
  int ck_28_1;
  int v_628;
  int v_627;
  int v_626;
  int v_625;
  int v_624;
  int v_623;
  int v_622;
  int v_621;
  int ns_3_St_11_On_fail_2_0;
  int ns_3_St_11_On_fail_2_1;
  int ns_3_St_11_On_2_0;
  int ns_3_St_11_On_2_1;
  int ns_3_St_11_Off_fail_2_0;
  int ns_3_St_11_Off_fail_2_1;
  int ns_3_St_11_Off_2_0;
  int ns_3_St_11_Off_2_1;
  int ck_27_2_0;
  int ck_27_2_1;
  int nr_3_St_11_On_fail;
  int ns_3_St_11_On_fail_2;
  int ns_3_St_11_On_fail_1;
  int light_source_status_1_St_11_On_fail;
  int nr_3_St_11_On;
  int ns_3_St_11_On_2;
  int ns_3_St_11_On_1;
  int light_source_status_1_St_11_On;
  int nr_3_St_11_Off_fail;
  int ns_3_St_11_Off_fail_2;
  int ns_3_St_11_Off_fail_1;
  int light_source_status_1_St_11_Off_fail;
  int nr_3_St_11_Off;
  int ns_3_St_11_Off_2;
  int ns_3_St_11_Off_1;
  int light_source_status_1_St_11_Off;
  int ck_27_2;
  int ck_27_1;
  int v_374_2_0;
  int v_374_2_1;
  int v_375;
  int v_374_2;
  int v_374_1;
  int v_373;
  int v_372;
  int v_371;
  int v_369_2_0;
  int v_369_2_1;
  int v_370;
  int v_369_2;
  int v_369_1;
  int v_368;
  int v_367;
  int v_366;
  int v_364_2_0;
  int v_364_2_1;
  int v_365;
  int v_364_2;
  int v_364_1;
  int v_363;
  int v_362;
  int v_361;
  int v_359_2_0;
  int v_359_2_1;
  int v_360;
  int v_359_2;
  int v_359_1;
  int v_358;
  int v_357;
  int v_356;
  int v_636;
  int v_635;
  int v_634;
  int v_633;
  int v_632;
  int v_631;
  int s_3_St_11_On_fail_2_0;
  int s_3_St_11_On_fail_2_1;
  int s_3_St_11_On_2_0;
  int s_3_St_11_On_2_1;
  int s_3_St_11_Off_fail_2_0;
  int s_3_St_11_Off_fail_2_1;
  int s_3_St_11_Off_2_0;
  int s_3_St_11_Off_2_1;
  int ck_26_2_0;
  int ck_26_2_1;
  int r_3_St_11_On_fail;
  int s_3_St_11_On_fail_2;
  int s_3_St_11_On_fail_1;
  int r_3_St_11_On;
  int s_3_St_11_On_2;
  int s_3_St_11_On_1;
  int r_3_St_11_Off_fail;
  int s_3_St_11_Off_fail_2;
  int s_3_St_11_Off_fail_1;
  int r_3_St_11_Off;
  int s_3_St_11_Off_2;
  int s_3_St_11_Off_1;
  int ck_26_2;
  int ck_26_1;
  int v_644;
  int v_643;
  int v_642;
  int v_641;
  int v_640;
  int v_639;
  int v_638;
  int v_637;
  int ns_4_St_12_On_fail_2_0;
  int ns_4_St_12_On_fail_2_1;
  int ns_4_St_12_On_2_0;
  int ns_4_St_12_On_2_1;
  int ns_4_St_12_Off_fail_2_0;
  int ns_4_St_12_Off_fail_2_1;
  int ns_4_St_12_Off_2_0;
  int ns_4_St_12_Off_2_1;
  int ck_25_2_0;
  int ck_25_2_1;
  int nr_4_St_12_On_fail;
  int ns_4_St_12_On_fail_2;
  int ns_4_St_12_On_fail_1;
  int light_source_status_St_12_On_fail;
  int nr_4_St_12_On;
  int ns_4_St_12_On_2;
  int ns_4_St_12_On_1;
  int light_source_status_St_12_On;
  int nr_4_St_12_Off_fail;
  int ns_4_St_12_Off_fail_2;
  int ns_4_St_12_Off_fail_1;
  int light_source_status_St_12_Off_fail;
  int nr_4_St_12_Off;
  int ns_4_St_12_Off_2;
  int ns_4_St_12_Off_1;
  int light_source_status_St_12_Off;
  int ck_25_2;
  int ck_25_1;
  int v_354_2_0;
  int v_354_2_1;
  int v_355;
  int v_354_2;
  int v_354_1;
  int v_353;
  int v_352;
  int v_351;
  int v_349_2_0;
  int v_349_2_1;
  int v_350;
  int v_349_2;
  int v_349_1;
  int v_348;
  int v_347;
  int v_346;
  int v_344_2_0;
  int v_344_2_1;
  int v_345;
  int v_344_2;
  int v_344_1;
  int v_343;
  int v_342;
  int v_341;
  int v_339_2_0;
  int v_339_2_1;
  int v_340;
  int v_339_2;
  int v_339_1;
  int v_338;
  int v_337;
  int v_336;
  int v_652;
  int v_651;
  int v_650;
  int v_649;
  int v_648;
  int v_647;
  int s_4_St_12_On_fail_2_0;
  int s_4_St_12_On_fail_2_1;
  int s_4_St_12_On_2_0;
  int s_4_St_12_On_2_1;
  int s_4_St_12_Off_fail_2_0;
  int s_4_St_12_Off_fail_2_1;
  int s_4_St_12_Off_2_0;
  int s_4_St_12_Off_2_1;
  int ck_24_2_0;
  int ck_24_2_1;
  int r_4_St_12_On_fail;
  int s_4_St_12_On_fail_2;
  int s_4_St_12_On_fail_1;
  int r_4_St_12_On;
  int s_4_St_12_On_2;
  int s_4_St_12_On_1;
  int r_4_St_12_Off_fail;
  int s_4_St_12_Off_fail_2;
  int s_4_St_12_Off_fail_1;
  int r_4_St_12_Off;
  int s_4_St_12_Off_2;
  int s_4_St_12_Off_1;
  int ck_24_2;
  int ck_24_1;
  int v_682;
  int v_681;
  int v_680;
  int v_679;
  int v_678;
  int v_677;
  int v_676;
  int v_675;
  int v_674;
  int v_673;
  int v_672;
  int v_671;
  int v_670;
  int v_669;
  int v_668;
  int v_667;
  int v_666;
  int v_665;
  int v_664;
  int v_663;
  int v_662;
  int v_661;
  int v_660;
  int v_659;
  int v_658;
  int v_657;
  int v_656;
  int v_655;
  int v_654;
  int v_653;
  int ns_5_St_13_Max_fail_2_0;
  int ns_5_St_13_Max_fail_3_0_0;
  int ns_5_St_13_Max_fail_3_0_1;
  int ns_5_St_13_Max_fail_2_1;
  int ns_5_St_13_Max_fail_3_1_0;
  int ns_5_St_13_Max_fail_3_1_1;
  int ns_5_St_13_Max_2_0;
  int ns_5_St_13_Max_3_0_0;
  int ns_5_St_13_Max_3_0_1;
  int ns_5_St_13_Max_2_1;
  int ns_5_St_13_Max_3_1_0;
  int ns_5_St_13_Max_3_1_1;
  int ns_5_St_13_Min_fail_2_0;
  int ns_5_St_13_Min_fail_3_0_0;
  int ns_5_St_13_Min_fail_3_0_1;
  int ns_5_St_13_Min_fail_2_1;
  int ns_5_St_13_Min_fail_3_1_0;
  int ns_5_St_13_Min_fail_3_1_1;
  int ns_5_St_13_Min_2_0;
  int ns_5_St_13_Min_3_0_0;
  int ns_5_St_13_Min_3_0_1;
  int ns_5_St_13_Min_2_1;
  int ns_5_St_13_Min_3_1_0;
  int ns_5_St_13_Min_3_1_1;
  int ns_5_St_13_Off_fail_2_0;
  int ns_5_St_13_Off_fail_3_0_0;
  int ns_5_St_13_Off_fail_3_0_1;
  int ns_5_St_13_Off_fail_2_1;
  int ns_5_St_13_Off_fail_3_1_0;
  int ns_5_St_13_Off_fail_3_1_1;
  int ns_5_St_13_Off_2_0;
  int ns_5_St_13_Off_3_0_0;
  int ns_5_St_13_Off_3_0_1;
  int ns_5_St_13_Off_2_1;
  int ns_5_St_13_Off_3_1_0;
  int ns_5_St_13_Off_3_1_1;
  int ck_23_2_0;
  int ck_23_3_0_0;
  int ck_23_3_0_1;
  int ck_23_2_1;
  int ck_23_3_1_0;
  int ck_23_3_1_1;
  int nr_5_St_13_Max_fail;
  int ns_5_St_13_Max_fail_3;
  int ns_5_St_13_Max_fail_2;
  int ns_5_St_13_Max_fail_1;
  int air_status_1_St_13_Max_fail;
  int nr_5_St_13_Max;
  int ns_5_St_13_Max_3;
  int ns_5_St_13_Max_2;
  int ns_5_St_13_Max_1;
  int air_status_1_St_13_Max;
  int nr_5_St_13_Min_fail;
  int ns_5_St_13_Min_fail_3;
  int ns_5_St_13_Min_fail_2;
  int ns_5_St_13_Min_fail_1;
  int air_status_1_St_13_Min_fail;
  int nr_5_St_13_Min;
  int ns_5_St_13_Min_3;
  int ns_5_St_13_Min_2;
  int ns_5_St_13_Min_1;
  int air_status_1_St_13_Min;
  int nr_5_St_13_Off_fail;
  int ns_5_St_13_Off_fail_3;
  int ns_5_St_13_Off_fail_2;
  int ns_5_St_13_Off_fail_1;
  int air_status_1_St_13_Off_fail;
  int nr_5_St_13_Off;
  int ns_5_St_13_Off_3;
  int ns_5_St_13_Off_2;
  int ns_5_St_13_Off_1;
  int air_status_1_St_13_Off;
  int ck_23_3;
  int ck_23_2;
  int ck_23_1;
  int v_334_2_0;
  int v_334_3_0_0;
  int v_334_3_0_1;
  int v_334_2_1;
  int v_334_3_1_0;
  int v_334_3_1_1;
  int v_332_2_0;
  int v_332_3_0_0;
  int v_332_3_0_1;
  int v_332_2_1;
  int v_332_3_1_0;
  int v_332_3_1_1;
  int v_335;
  int v_334_3;
  int v_334_2;
  int v_334_1;
  int v_333;
  int v_332_3;
  int v_332_2;
  int v_332_1;
  int v_331;
  int v_329_2_0;
  int v_329_3_0_0;
  int v_329_3_0_1;
  int v_329_2_1;
  int v_329_3_1_0;
  int v_329_3_1_1;
  int v_327_2_0;
  int v_327_3_0_0;
  int v_327_3_0_1;
  int v_327_2_1;
  int v_327_3_1_0;
  int v_327_3_1_1;
  int v_330;
  int v_329_3;
  int v_329_2;
  int v_329_1;
  int v_328;
  int v_327_3;
  int v_327_2;
  int v_327_1;
  int v_326;
  int v_324_2_0;
  int v_324_3_0_0;
  int v_324_3_0_1;
  int v_324_2_1;
  int v_324_3_1_0;
  int v_324_3_1_1;
  int v_322_2_0;
  int v_322_3_0_0;
  int v_322_3_0_1;
  int v_322_2_1;
  int v_322_3_1_0;
  int v_322_3_1_1;
  int v_325;
  int v_324_3;
  int v_324_2;
  int v_324_1;
  int v_323;
  int v_322_3;
  int v_322_2;
  int v_322_1;
  int v_321;
  int v_320;
  int v_318_2_0;
  int v_318_3_0_0;
  int v_318_3_0_1;
  int v_318_2_1;
  int v_318_3_1_0;
  int v_318_3_1_1;
  int v_316_2_0;
  int v_316_3_0_0;
  int v_316_3_0_1;
  int v_316_2_1;
  int v_316_3_1_0;
  int v_316_3_1_1;
  int v_319;
  int v_318_3;
  int v_318_2;
  int v_318_1;
  int v_317;
  int v_316_3;
  int v_316_2;
  int v_316_1;
  int v_315;
  int v_314;
  int v_312_2_0;
  int v_312_3_0_0;
  int v_312_3_0_1;
  int v_312_2_1;
  int v_312_3_1_0;
  int v_312_3_1_1;
  int v_310_2_0;
  int v_310_3_0_0;
  int v_310_3_0_1;
  int v_310_2_1;
  int v_310_3_1_0;
  int v_310_3_1_1;
  int v_313;
  int v_312_3;
  int v_312_2;
  int v_312_1;
  int v_311;
  int v_310_3;
  int v_310_2;
  int v_310_1;
  int v_309;
  int v_308;
  int v_306_2_0;
  int v_306_3_0_0;
  int v_306_3_0_1;
  int v_306_2_1;
  int v_306_3_1_0;
  int v_306_3_1_1;
  int v_304_2_0;
  int v_304_3_0_0;
  int v_304_3_0_1;
  int v_304_2_1;
  int v_304_3_1_0;
  int v_304_3_1_1;
  int v_307;
  int v_306_3;
  int v_306_2;
  int v_306_1;
  int v_305;
  int v_304_3;
  int v_304_2;
  int v_304_1;
  int v_303;
  int v_302;
  int v_709;
  int v_708;
  int v_707;
  int v_706;
  int v_705;
  int v_704;
  int v_703;
  int v_702;
  int v_701;
  int v_700;
  int v_699;
  int v_698;
  int v_697;
  int v_696;
  int v_695;
  int v_694;
  int v_693;
  int v_692;
  int v_691;
  int v_690;
  int v_689;
  int v_688;
  int v_687;
  int v_686;
  int s_5_St_13_Max_fail_2_0;
  int s_5_St_13_Max_fail_3_0_0;
  int s_5_St_13_Max_fail_3_0_1;
  int s_5_St_13_Max_fail_2_1;
  int s_5_St_13_Max_fail_3_1_0;
  int s_5_St_13_Max_fail_3_1_1;
  int s_5_St_13_Max_2_0;
  int s_5_St_13_Max_3_0_0;
  int s_5_St_13_Max_3_0_1;
  int s_5_St_13_Max_2_1;
  int s_5_St_13_Max_3_1_0;
  int s_5_St_13_Max_3_1_1;
  int s_5_St_13_Min_fail_2_0;
  int s_5_St_13_Min_fail_3_0_0;
  int s_5_St_13_Min_fail_3_0_1;
  int s_5_St_13_Min_fail_2_1;
  int s_5_St_13_Min_fail_3_1_0;
  int s_5_St_13_Min_fail_3_1_1;
  int s_5_St_13_Min_2_0;
  int s_5_St_13_Min_3_0_0;
  int s_5_St_13_Min_3_0_1;
  int s_5_St_13_Min_2_1;
  int s_5_St_13_Min_3_1_0;
  int s_5_St_13_Min_3_1_1;
  int s_5_St_13_Off_fail_2_0;
  int s_5_St_13_Off_fail_3_0_0;
  int s_5_St_13_Off_fail_3_0_1;
  int s_5_St_13_Off_fail_2_1;
  int s_5_St_13_Off_fail_3_1_0;
  int s_5_St_13_Off_fail_3_1_1;
  int s_5_St_13_Off_2_0;
  int s_5_St_13_Off_3_0_0;
  int s_5_St_13_Off_3_0_1;
  int s_5_St_13_Off_2_1;
  int s_5_St_13_Off_3_1_0;
  int s_5_St_13_Off_3_1_1;
  int ck_22_2_0;
  int ck_22_3_0_0;
  int ck_22_3_0_1;
  int ck_22_2_1;
  int ck_22_3_1_0;
  int ck_22_3_1_1;
  int r_5_St_13_Max_fail;
  int s_5_St_13_Max_fail_3;
  int s_5_St_13_Max_fail_2;
  int s_5_St_13_Max_fail_1;
  int r_5_St_13_Max;
  int s_5_St_13_Max_3;
  int s_5_St_13_Max_2;
  int s_5_St_13_Max_1;
  int r_5_St_13_Min_fail;
  int s_5_St_13_Min_fail_3;
  int s_5_St_13_Min_fail_2;
  int s_5_St_13_Min_fail_1;
  int r_5_St_13_Min;
  int s_5_St_13_Min_3;
  int s_5_St_13_Min_2;
  int s_5_St_13_Min_1;
  int r_5_St_13_Off_fail;
  int s_5_St_13_Off_fail_3;
  int s_5_St_13_Off_fail_2;
  int s_5_St_13_Off_fail_1;
  int r_5_St_13_Off;
  int s_5_St_13_Off_3;
  int s_5_St_13_Off_2;
  int s_5_St_13_Off_1;
  int ck_22_3;
  int ck_22_2;
  int ck_22_1;
  int v_717;
  int v_716;
  int v_715;
  int v_714;
  int v_713;
  int v_712;
  int v_711;
  int v_710;
  int ns_6_St_14_Open_fail_2_0;
  int ns_6_St_14_Open_fail_2_1;
  int ns_6_St_14_Open_2_0;
  int ns_6_St_14_Open_2_1;
  int ns_6_St_14_Closed_fail_2_0;
  int ns_6_St_14_Closed_fail_2_1;
  int ns_6_St_14_Closed_2_0;
  int ns_6_St_14_Closed_2_1;
  int ck_21_2_0;
  int ck_21_2_1;
  int nr_6_St_14_Open_fail;
  int ns_6_St_14_Open_fail_2;
  int ns_6_St_14_Open_fail_1;
  int window_status_1_St_14_Open_fail;
  int nr_6_St_14_Open;
  int ns_6_St_14_Open_2;
  int ns_6_St_14_Open_1;
  int window_status_1_St_14_Open;
  int nr_6_St_14_Closed_fail;
  int ns_6_St_14_Closed_fail_2;
  int ns_6_St_14_Closed_fail_1;
  int window_status_1_St_14_Closed_fail;
  int nr_6_St_14_Closed;
  int ns_6_St_14_Closed_2;
  int ns_6_St_14_Closed_1;
  int window_status_1_St_14_Closed;
  int ck_21_2;
  int ck_21_1;
  int v_300_2_0;
  int v_300_2_1;
  int v_301;
  int v_300_2;
  int v_300_1;
  int v_299;
  int v_297_2_0;
  int v_297_2_1;
  int v_298;
  int v_297_2;
  int v_297_1;
  int v_296;
  int v_294_2_0;
  int v_294_2_1;
  int v_295;
  int v_294_2;
  int v_294_1;
  int v_292_2_0;
  int v_292_2_1;
  int v_293;
  int v_292_2;
  int v_292_1;
  int v_725;
  int v_724;
  int v_723;
  int v_722;
  int v_721;
  int v_720;
  int s_6_St_14_Open_fail_2_0;
  int s_6_St_14_Open_fail_2_1;
  int s_6_St_14_Open_2_0;
  int s_6_St_14_Open_2_1;
  int s_6_St_14_Closed_fail_2_0;
  int s_6_St_14_Closed_fail_2_1;
  int s_6_St_14_Closed_2_0;
  int s_6_St_14_Closed_2_1;
  int ck_20_2_0;
  int ck_20_2_1;
  int r_6_St_14_Open_fail;
  int s_6_St_14_Open_fail_2;
  int s_6_St_14_Open_fail_1;
  int r_6_St_14_Open;
  int s_6_St_14_Open_2;
  int s_6_St_14_Open_1;
  int r_6_St_14_Closed_fail;
  int s_6_St_14_Closed_fail_2;
  int s_6_St_14_Closed_fail_1;
  int r_6_St_14_Closed;
  int s_6_St_14_Closed_2;
  int s_6_St_14_Closed_1;
  int ck_20_2;
  int ck_20_1;
  int v_733;
  int v_732;
  int v_731;
  int v_730;
  int v_729;
  int v_728;
  int v_727;
  int v_726;
  int ns_7_St_15_Open_fail_2_0;
  int ns_7_St_15_Open_fail_2_1;
  int ns_7_St_15_Open_2_0;
  int ns_7_St_15_Open_2_1;
  int ns_7_St_15_Locked_fail_2_0;
  int ns_7_St_15_Locked_fail_2_1;
  int ns_7_St_15_Locked_2_0;
  int ns_7_St_15_Locked_2_1;
  int ck_19_2_0;
  int ck_19_2_1;
  int nr_7_St_15_Open_fail;
  int ns_7_St_15_Open_fail_2;
  int ns_7_St_15_Open_fail_1;
  int closet_status_1_St_15_Open_fail;
  int nr_7_St_15_Open;
  int ns_7_St_15_Open_2;
  int ns_7_St_15_Open_1;
  int closet_status_1_St_15_Open;
  int nr_7_St_15_Locked_fail;
  int ns_7_St_15_Locked_fail_2;
  int ns_7_St_15_Locked_fail_1;
  int closet_status_1_St_15_Locked_fail;
  int nr_7_St_15_Locked;
  int ns_7_St_15_Locked_2;
  int ns_7_St_15_Locked_1;
  int closet_status_1_St_15_Locked;
  int ck_19_2;
  int ck_19_1;
  int v_290_2_0;
  int v_290_2_1;
  int v_291;
  int v_290_2;
  int v_290_1;
  int v_289;
  int v_287_2_0;
  int v_287_2_1;
  int v_288;
  int v_287_2;
  int v_287_1;
  int v_286;
  int v_284_2_0;
  int v_284_2_1;
  int v_285;
  int v_284_2;
  int v_284_1;
  int v_282_2_0;
  int v_282_2_1;
  int v_283;
  int v_282_2;
  int v_282_1;
  int v_741;
  int v_740;
  int v_739;
  int v_738;
  int v_737;
  int v_736;
  int s_7_St_15_Open_fail_2_0;
  int s_7_St_15_Open_fail_2_1;
  int s_7_St_15_Open_2_0;
  int s_7_St_15_Open_2_1;
  int s_7_St_15_Locked_fail_2_0;
  int s_7_St_15_Locked_fail_2_1;
  int s_7_St_15_Locked_2_0;
  int s_7_St_15_Locked_2_1;
  int ck_18_2_0;
  int ck_18_2_1;
  int r_7_St_15_Open_fail;
  int s_7_St_15_Open_fail_2;
  int s_7_St_15_Open_fail_1;
  int r_7_St_15_Open;
  int s_7_St_15_Open_2;
  int s_7_St_15_Open_1;
  int r_7_St_15_Locked_fail;
  int s_7_St_15_Locked_fail_2;
  int s_7_St_15_Locked_fail_1;
  int r_7_St_15_Locked;
  int s_7_St_15_Locked_2;
  int s_7_St_15_Locked_1;
  int ck_18_2;
  int ck_18_1;
  int v_749;
  int v_748;
  int v_747;
  int v_746;
  int v_745;
  int v_744;
  int v_743;
  int v_742;
  int ns_8_St_16_Open_fail_2_0;
  int ns_8_St_16_Open_fail_2_1;
  int ns_8_St_16_Open_2_0;
  int ns_8_St_16_Open_2_1;
  int ns_8_St_16_Closed_fail_2_0;
  int ns_8_St_16_Closed_fail_2_1;
  int ns_8_St_16_Closed_2_0;
  int ns_8_St_16_Closed_2_1;
  int ck_17_2_0;
  int ck_17_2_1;
  int nr_8_St_16_Open_fail;
  int ns_8_St_16_Open_fail_2;
  int ns_8_St_16_Open_fail_1;
  int door_status_1_St_16_Open_fail;
  int nr_8_St_16_Open;
  int ns_8_St_16_Open_2;
  int ns_8_St_16_Open_1;
  int door_status_1_St_16_Open;
  int nr_8_St_16_Closed_fail;
  int ns_8_St_16_Closed_fail_2;
  int ns_8_St_16_Closed_fail_1;
  int door_status_1_St_16_Closed_fail;
  int nr_8_St_16_Closed;
  int ns_8_St_16_Closed_2;
  int ns_8_St_16_Closed_1;
  int door_status_1_St_16_Closed;
  int ck_17_2;
  int ck_17_1;
  int v_280_2_0;
  int v_280_2_1;
  int v_281;
  int v_280_2;
  int v_280_1;
  int v_279;
  int v_277_2_0;
  int v_277_2_1;
  int v_278;
  int v_277_2;
  int v_277_1;
  int v_276;
  int v_274_2_0;
  int v_274_2_1;
  int v_275;
  int v_274_2;
  int v_274_1;
  int v_273;
  int v_271_2_0;
  int v_271_2_1;
  int v_272;
  int v_271_2;
  int v_271_1;
  int v_270;
  int v_757;
  int v_756;
  int v_755;
  int v_754;
  int v_753;
  int v_752;
  int s_8_St_16_Open_fail_2_0;
  int s_8_St_16_Open_fail_2_1;
  int s_8_St_16_Open_2_0;
  int s_8_St_16_Open_2_1;
  int s_8_St_16_Closed_fail_2_0;
  int s_8_St_16_Closed_fail_2_1;
  int s_8_St_16_Closed_2_0;
  int s_8_St_16_Closed_2_1;
  int ck_16_2_0;
  int ck_16_2_1;
  int r_8_St_16_Open_fail;
  int s_8_St_16_Open_fail_2;
  int s_8_St_16_Open_fail_1;
  int r_8_St_16_Open;
  int s_8_St_16_Open_2;
  int s_8_St_16_Open_1;
  int r_8_St_16_Closed_fail;
  int s_8_St_16_Closed_fail_2;
  int s_8_St_16_Closed_fail_1;
  int r_8_St_16_Closed;
  int s_8_St_16_Closed_2;
  int s_8_St_16_Closed_1;
  int ck_16_2;
  int ck_16_1;
  int v_765;
  int v_764;
  int v_763;
  int v_762;
  int v_761;
  int v_760;
  int v_759;
  int v_758;
  int ns_9_St_17_On_fail_2_0;
  int ns_9_St_17_On_fail_2_1;
  int ns_9_St_17_On_2_0;
  int ns_9_St_17_On_2_1;
  int ns_9_St_17_Off_fail_2_0;
  int ns_9_St_17_Off_fail_2_1;
  int ns_9_St_17_Off_2_0;
  int ns_9_St_17_Off_2_1;
  int ck_15_2_0;
  int ck_15_2_1;
  int nr_9_St_17_On_fail;
  int ns_9_St_17_On_fail_2;
  int ns_9_St_17_On_fail_1;
  int computer_status_St_17_On_fail;
  int nr_9_St_17_On;
  int ns_9_St_17_On_2;
  int ns_9_St_17_On_1;
  int computer_status_St_17_On;
  int nr_9_St_17_Off_fail;
  int ns_9_St_17_Off_fail_2;
  int ns_9_St_17_Off_fail_1;
  int computer_status_St_17_Off_fail;
  int nr_9_St_17_Off;
  int ns_9_St_17_Off_2;
  int ns_9_St_17_Off_1;
  int computer_status_St_17_Off;
  int ck_15_2;
  int ck_15_1;
  int v_268_2_0;
  int v_268_2_1;
  int v_269;
  int v_268_2;
  int v_268_1;
  int v_266_2_0;
  int v_266_2_1;
  int v_267;
  int v_266_2;
  int v_266_1;
  int v_264_2_0;
  int v_264_2_1;
  int v_265;
  int v_264_2;
  int v_264_1;
  int v_263;
  int v_261_2_0;
  int v_261_2_1;
  int v_262;
  int v_261_2;
  int v_261_1;
  int v_260;
  int v_773;
  int v_772;
  int v_771;
  int v_770;
  int v_769;
  int v_768;
  int s_9_St_17_On_fail_2_0;
  int s_9_St_17_On_fail_2_1;
  int s_9_St_17_On_2_0;
  int s_9_St_17_On_2_1;
  int s_9_St_17_Off_fail_2_0;
  int s_9_St_17_Off_fail_2_1;
  int s_9_St_17_Off_2_0;
  int s_9_St_17_Off_2_1;
  int ck_14_2_0;
  int ck_14_2_1;
  int r_9_St_17_On_fail;
  int s_9_St_17_On_fail_2;
  int s_9_St_17_On_fail_1;
  int r_9_St_17_On;
  int s_9_St_17_On_2;
  int s_9_St_17_On_1;
  int r_9_St_17_Off_fail;
  int s_9_St_17_Off_fail_2;
  int s_9_St_17_Off_fail_1;
  int r_9_St_17_Off;
  int s_9_St_17_Off_2;
  int s_9_St_17_Off_1;
  int ck_14_2;
  int ck_14_1;
  int nr_10_St_18_Present;
  int ns_10_St_18_Present_1;
  int presence_1_St_18_Present;
  int nr_10_St_18_Not_Present;
  int ns_10_St_18_Not_Present_1;
  int presence_1_St_18_Not_Present;
  int ck_13_1;
  int r_10_St_18_Present;
  int s_10_St_18_Present_1;
  int r_10_St_18_Not_Present;
  int s_10_St_18_Not_Present_1;
  int nr_11_St_19_Present;
  int ns_11_St_19_Present_1;
  int presence_St_19_Present;
  int nr_11_St_19_Not_Present;
  int ns_11_St_19_Not_Present_1;
  int presence_St_19_Not_Present;
  int ck_11_1;
  int r_11_St_19_Present;
  int s_11_St_19_Present_1;
  int r_11_St_19_Not_Present;
  int s_11_St_19_Not_Present_1;
  int nr_12_St_20_Noite;
  int ns_12_St_20_Noite_1;
  int night_1_St_20_Noite;
  int nr_12_St_20_Dia;
  int ns_12_St_20_Dia_1;
  int night_1_St_20_Dia;
  int ck_9_1;
  int r_12_St_20_Noite;
  int s_12_St_20_Noite_1;
  int r_12_St_20_Dia;
  int s_12_St_20_Dia_1;
  int s_9_2_0;
  int s_9_2_1;
  int ns_9_2_0;
  int ns_9_2_1;
  int s_8_2_0;
  int s_8_2_1;
  int ns_8_2_0;
  int ns_8_2_1;
  int s_7_2_0;
  int s_7_2_1;
  int ns_7_2_0;
  int ns_7_2_1;
  int s_6_2_0;
  int s_6_2_1;
  int ns_6_2_0;
  int ns_6_2_1;
  int s_5_2_0;
  int s_5_3_0_0;
  int s_5_3_0_1;
  int s_5_2_1;
  int s_5_3_1_0;
  int s_5_3_1_1;
  int ns_5_2_0;
  int ns_5_3_0_0;
  int ns_5_3_0_1;
  int ns_5_2_1;
  int ns_5_3_1_0;
  int ns_5_3_1_1;
  int s_4_2_0;
  int s_4_2_1;
  int ns_4_2_0;
  int ns_4_2_1;
  int s_3_2_0;
  int s_3_2_1;
  int ns_3_2_0;
  int ns_3_2_1;
  int s_2_2_0;
  int s_2_2_1;
  int ns_2_2_0;
  int ns_2_2_1;
  int s_1_2_0;
  int s_1_2_1;
  int ns_1_2_0;
  int ns_1_2_1;
  int s_2_3_0;
  int s_2_3_1;
  int ns_2_3_0;
  int ns_2_3_1;
  int s_12_1;
  int ns_12_1;
  int r_12;
  int nr_12;
  int s_11_1;
  int ns_11_1;
  int r_11;
  int nr_11;
  int s_10_1;
  int ns_10_1;
  int r_10;
  int nr_10;
  int s_9_2;
  int s_9_1;
  int ns_9_2;
  int ns_9_1;
  int r_9;
  int nr_9;
  int s_8_2;
  int s_8_1;
  int ns_8_2;
  int ns_8_1;
  int r_8;
  int nr_8;
  int s_7_2;
  int s_7_1;
  int ns_7_2;
  int ns_7_1;
  int r_7;
  int nr_7;
  int s_6_2;
  int s_6_1;
  int ns_6_2;
  int ns_6_1;
  int r_6;
  int nr_6;
  int s_5_3;
  int s_5_2;
  int s_5_1;
  int ns_5_3;
  int ns_5_2;
  int ns_5_1;
  int r_5;
  int nr_5;
  int s_4_2;
  int s_4_1;
  int ns_4_2;
  int ns_4_1;
  int r_4;
  int nr_4;
  int s_3_2;
  int s_3_1;
  int ns_3_2;
  int ns_3_1;
  int r_3;
  int nr_3;
  int s_2_2;
  int s_2_1;
  int ns_2_2;
  int ns_2_1;
  int r_2;
  int nr_2;
  int s_1_2;
  int s_1_1;
  int ns_1_2;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_2_3;
  int s_1_3;
  int ns_2_3;
  int ns_1_3;
  int r;
  int nr;
  int sw_4;
  int c1_5;
  int c2_5;
  int failed_recovered_9;
  int light_source_status_4;
  int sw_3;
  int c1_4;
  int c2_4;
  int failed_recovered_8;
  int light_source_status_3;
  int sw_2;
  int c1_3;
  int c2_3;
  int failed_recovered_7;
  int light_source_status_2;
  int sw_1;
  int c1_2;
  int c2_2;
  int failed_recovered_6;
  int light_source_status_1;
  int sw;
  int c1_1;
  int c2_1;
  int failed_recovered_5;
  int light_source_status;
  int c1;
  int c2;
  int failed_recovered_4;
  int air_status_1;
  int c_3;
  int failed_recovered_3;
  int window_status_1;
  int c_2;
  int failed_recovered_2;
  int closet_status_1;
  int c_1;
  int failed_recovered_1;
  int door_status_1;
  int c;
  int failed_recovered;
  int computer_status;
  int arrived_1;
  int presence_1;
  int arrived;
  int presence;
  int change;
  int night_1;
  int rule8_5;
  int rule8;
  int rule7_5;
  int rule7;
  int rule6_4;
  int rule6_3;
  int rule6_2;
  int rule6_1;
  int rule6;
  int rule5;
  int rule1_2;
  int rule1_1;
  int rule2;
  int rule1_3;
  int rule1;
  int rule0;
  int v;
  int v_91;
  int v_92;
  int v_93;
  int v_94;
  int v_95;
  int v_96;
  int v_97;
  int v_98;
  int v_99;
  int v_100;
  int v_101;
  int v_102;
  int v_103;
  int v_104;
  int v_105;
  int v_106;
  int v_107;
  int v_108;
  int v_109;
  int v_110;
  int v_111;
  int v_112;
  int v_113;
  int v_114;
  int v_115;
  int v_116;
  int v_117;
  int v_118;
  int v_119;
  int v_120;
  int v_121;
  int v_122;
  int v_123;
  int v_124;
  int v_125;
  int v_126;
  int v_127;
  int v_128;
  int v_129;
  int v_130;
  int v_131;
  int v_132;
  int v_133;
  int v_134;
  int v_135;
  int v_136;
  int v_137;
  int v_138;
  int v_139;
  int v_140;
  int v_141;
  int v_142;
  int v_143;
  int v_144;
  int v_145;
  int v_146;
  int v_147;
  int v_148;
  int v_149;
  int v_150;
  int v_151;
  int v_152;
  int v_153;
  int v_154;
  int v_155;
  int v_156;
  int v_157;
  int v_158;
  int v_159;
  int v_160;
  int v_161;
  int v_162;
  int v_163;
  int v_164;
  int v_165;
  int v_166;
  int v_167;
  int v_168;
  int v_169;
  int v_170;
  int v_171;
  int v_172;
  int v_173;
  int v_174;
  int v_175;
  int v_176;
  int v_177;
  int v_178;
  int v_179;
  int v_180;
  int v_181;
  int v_182;
  int v_183;
  int v_184;
  int v_185;
  int v_186;
  int v_187;
  int v_188;
  int v_189;
  int v_190;
  int v_191;
  int v_192;
  int v_193;
  int v_194;
  int v_195;
  int v_196;
  int v_197;
  int v_198;
  int v_199;
  int v_200;
  int v_201;
  int v_202;
  int v_203;
  int v_204;
  int v_205;
  int v_206;
  int v_207;
  int v_208;
  int v_209;
  int v_210;
  int v_211;
  int v_212;
  int v_213;
  int v_214;
  int v_215;
  int v_216;
  int v_217;
  int v_218;
  int v_219;
  int v_220;
  int v_221;
  int v_222;
  int v_223;
  int v_224;
  int v_225;
  int v_226;
  int v_227;
  int v_228;
  int v_229;
  int v_230;
  int v_231;
  int v_232;
  int v_233;
  int v_234;
  int v_235;
  int v_236;
  int v_237;
  int v_238;
  int v_239;
  int v_240;
  int v_241;
  int v_242;
  int v_243;
  int v_244;
  int v_245;
  int v_246;
  int v_247;
  int v_248;
  int v_249;
  int v_250;
  int v_251;
  int v_252;
  int v_253;
  int v_254;
  int v_255;
  int v_256;
  int v_257;
  int v_258;
  int v_259;
  int c_blind_2;
  int c_light_2;
  int c_blind_1;
  int c_light_1;
  int c_closet;
  int c_air_2;
  int c_air_1;
  int c_window;
  int c_pc;
  int c_door;
  sw_4 = blind_switch;
  failed_recovered_9 = blind_failed_recovered;
  ck_32_1 = self->v_581;
  ck_32_2 = self->v_582;
  sw_3 = blind_switch;
  failed_recovered_8 = blind_failed_recovered;
  ck_30_1 = self->v_597;
  ck_30_2 = self->v_598;
  sw_2 = blind_switch;
  failed_recovered_7 = blind_failed_recovered;
  ck_28_1 = self->v_613;
  ck_28_2 = self->v_614;
  sw_1 = blind_switch;
  failed_recovered_6 = blind_failed_recovered;
  ck_26_1 = self->v_629;
  ck_26_2 = self->v_630;
  sw = light_switch;
  failed_recovered_5 = light_failed_recovered;
  ck_24_1 = self->v_645;
  ck_24_2 = self->v_646;
  failed_recovered_4 = air_failed_recovered;
  ck_22_1 = self->v_683;
  ck_22_2 = self->v_684;
  ck_22_3 = self->v_685;
  failed_recovered_3 = window_failed_recovered;
  ck_20_1 = self->v_718;
  ck_20_2 = self->v_719;
  failed_recovered_2 = closet_failed_recovered;
  ck_18_1 = self->v_734;
  ck_18_2 = self->v_735;
  failed_recovered_1 = door_failed_recovered;
  ck_16_1 = self->v_750;
  ck_16_2 = self->v_751;
  failed_recovered = pc_failed_recovered;
  ck_14_1 = self->v_766;
  ck_14_2 = self->v_767;
  arrived_1 = cleaner;
  arrived = worker;
  change = change_shift;
  Controller_controller__controller_controller_step(change_shift, worker,
                                                    cleaner,
                                                    air_failed_recovered,
                                                    light_switch,
                                                    light_failed_recovered,
                                                    blind_switch,
                                                    blind_failed_recovered,
                                                    door_failed_recovered,
                                                    closet_failed_recovered,
                                                    pc_failed_recovered,
                                                    window_failed_recovered,
                                                    self->ck_1, self->pnr_12,
                                                    self->ck_10_1,
                                                    self->pnr_11,
                                                    self->ck_12_1,
                                                    self->pnr_10,
                                                    self->v_767, self->v_766,
                                                    self->pnr_9, self->v_751,
                                                    self->v_750, self->pnr_8,
                                                    self->v_735, self->v_734,
                                                    self->pnr_7, self->v_719,
                                                    self->v_718, self->pnr_6,
                                                    self->v_685, self->v_684,
                                                    self->v_683, self->pnr_5,
                                                    self->v_646, self->v_645,
                                                    self->pnr_4, self->v_630,
                                                    self->v_629, self->pnr_3,
                                                    self->v_614, self->v_613,
                                                    self->pnr_2, self->v_598,
                                                    self->v_597, self->pnr_1,
                                                    self->v_582, self->v_581,
                                                    self->pnr, true, true,
                                                    true, true, true, true,
                                                    true, true, true, true,
                                                    &Controller_controller__controller_controller_out_st);
  c_blind_2 = Controller_controller__controller_controller_out_st.controller_c_blind_2;
  c_light_2 = Controller_controller__controller_controller_out_st.controller_c_light_2;
  c_blind_1 = Controller_controller__controller_controller_out_st.controller_c_blind_1;
  c_light_1 = Controller_controller__controller_controller_out_st.controller_c_light_1;
  c_closet = Controller_controller__controller_controller_out_st.controller_c_closet;
  c_air_2 = Controller_controller__controller_controller_out_st.controller_c_air_2;
  c_air_1 = Controller_controller__controller_controller_out_st.controller_c_air_1;
  c_window = Controller_controller__controller_controller_out_st.controller_c_window;
  c_pc = Controller_controller__controller_controller_out_st.controller_c_pc;
  c_door = Controller_controller__controller_controller_out_st.controller_c_door;
  c1_5 = c_blind_1;
  c2_5 = c_blind_2;
  c1_4 = c_blind_1;
  c2_4 = c_blind_2;
  c1_3 = c_blind_1;
  c2_3 = c_blind_2;
  c1_2 = c_blind_1;
  c2_2 = c_blind_2;
  c1_1 = c_light_1;
  c2_1 = c_light_2;
  c1 = c_air_1;
  c2 = c_air_2;
  c_3 = c_window;
  c_2 = c_closet;
  c_1 = c_door;
  c = c_pc;
  if (ck_32_1) {
    ck_32_2_1 = ck_32_2;
    if (ck_32_2_1) {
      if (failed_recovered_9) {
        v_435 = true;
        v_434_1 = true;
        v_434_2 = false;
      } else {
        v_435 = self->pnr;
        v_434_1 = true;
        v_434_2 = true;
      };
      v_432 = !(c2_5);
      v_431 = (c1_5&&sw_4);
      v_433 = (v_431||v_432);
      if (v_433) {
        r_St_8_Off = true;
        s_St_8_Off_1 = false;
        s_St_8_Off_2 = true;
      } else {
        r_St_8_Off = v_435;
        s_St_8_Off_1 = v_434_1;
        s_St_8_Off_2 = v_434_2;
      };
      v_587 = r_St_8_Off;
      v_583 = s_St_8_Off_1;
      v_584 = s_St_8_Off_2;
      if (v_434_1) {
        v_434_2_1 = v_434_2;
      } else {
        v_434_2_0 = v_434_2;
      };
      if (s_St_8_Off_1) {
        s_St_8_Off_2_1 = s_St_8_Off_2;
      } else {
        s_St_8_Off_2_0 = s_St_8_Off_2;
      };
    } else {
      if (failed_recovered_9) {
        v_430 = true;
        v_429_1 = true;
        v_429_2 = true;
      } else {
        v_430 = self->pnr;
        v_429_1 = true;
        v_429_2 = false;
      };
      v_427 = !(c2_5);
      v_426 = (c1_5&&sw_4);
      v_428 = (v_426||v_427);
      if (v_428) {
        r_St_8_Off_fail = true;
      } else {
        r_St_8_Off_fail = v_430;
      };
      v_587 = r_St_8_Off_fail;
      if (v_428) {
        s_St_8_Off_fail_1 = false;
      } else {
        s_St_8_Off_fail_1 = v_429_1;
      };
      v_583 = s_St_8_Off_fail_1;
      if (v_428) {
        s_St_8_Off_fail_2 = false;
      } else {
        s_St_8_Off_fail_2 = v_429_2;
      };
      v_584 = s_St_8_Off_fail_2;
      if (v_429_1) {
        v_429_2_1 = v_429_2;
      } else {
        v_429_2_0 = v_429_2;
      };
      if (s_St_8_Off_fail_1) {
        s_St_8_Off_fail_2_1 = s_St_8_Off_fail_2;
      } else {
        s_St_8_Off_fail_2_0 = s_St_8_Off_fail_2;
      };
    };
    s_1_3 = v_583;
    s_2_3 = v_584;
    r = v_587;
  } else {
    ck_32_2_0 = ck_32_2;
    if (ck_32_2_0) {
      if (failed_recovered_9) {
        v_425 = true;
        v_424_1 = false;
        v_424_2 = false;
      } else {
        v_425 = self->pnr;
        v_424_1 = false;
        v_424_2 = true;
      };
      v_422 = !(c2_5);
      v_421 = (c1_5&&sw_4);
      v_423 = (v_421||v_422);
      if (v_423) {
        r_St_8_On = true;
        s_St_8_On_1 = true;
        s_St_8_On_2 = true;
      } else {
        r_St_8_On = v_425;
        s_St_8_On_1 = v_424_1;
        s_St_8_On_2 = v_424_2;
      };
      v_588 = r_St_8_On;
      v_585 = s_St_8_On_1;
      v_586 = s_St_8_On_2;
    } else {
      if (failed_recovered_9) {
        v_420 = true;
        v_419_1 = false;
        v_419_2 = true;
      } else {
        v_420 = self->pnr;
        v_419_1 = false;
        v_419_2 = false;
      };
      v_417 = !(c2_5);
      v_416 = (c1_5&&sw_4);
      v_418 = (v_416||v_417);
      if (v_418) {
        r_St_8_On_fail = true;
      } else {
        r_St_8_On_fail = v_420;
      };
      v_588 = r_St_8_On_fail;
      if (v_418) {
        s_St_8_On_fail_1 = true;
      } else {
        s_St_8_On_fail_1 = v_419_1;
      };
      v_585 = s_St_8_On_fail_1;
      if (v_418) {
        s_St_8_On_fail_2 = false;
      } else {
        s_St_8_On_fail_2 = v_419_2;
      };
      v_586 = s_St_8_On_fail_2;
    };
    s_1_3 = v_585;
    s_2_3 = v_586;
    r = v_588;
  };
  ck_33_1 = s_1_3;
  ck_33_2 = s_2_3;
  if (ck_33_1) {
    ck_33_2_1 = ck_33_2;
    if (ck_33_2_1) {
      light_source_status_4_St_8_Off = 0;
      nr_St_8_Off = false;
      ns_St_8_Off_1 = true;
      ns_St_8_Off_2 = true;
      v_573 = light_source_status_4_St_8_Off;
      v_579 = nr_St_8_Off;
      v_575 = ns_St_8_Off_1;
      v_576 = ns_St_8_Off_2;
      if (ns_St_8_Off_1) {
        ns_St_8_Off_2_1 = ns_St_8_Off_2;
      } else {
        ns_St_8_Off_2_0 = ns_St_8_Off_2;
      };
    } else {
      light_source_status_4_St_8_Off_fail = 2;
      v_573 = light_source_status_4_St_8_Off_fail;
      nr_St_8_Off_fail = false;
      v_579 = nr_St_8_Off_fail;
      ns_St_8_Off_fail_1 = true;
      v_575 = ns_St_8_Off_fail_1;
      ns_St_8_Off_fail_2 = false;
      v_576 = ns_St_8_Off_fail_2;
      if (ns_St_8_Off_fail_1) {
        ns_St_8_Off_fail_2_1 = ns_St_8_Off_fail_2;
      } else {
        ns_St_8_Off_fail_2_0 = ns_St_8_Off_fail_2;
      };
    };
    light_source_status_4 = v_573;
    ns_1_3 = v_575;
    ns_2_3 = v_576;
    nr = v_579;
  } else {
    ck_33_2_0 = ck_33_2;
    if (ck_33_2_0) {
      light_source_status_4_St_8_On = 1;
      nr_St_8_On = false;
      ns_St_8_On_1 = false;
      ns_St_8_On_2 = true;
      v_574 = light_source_status_4_St_8_On;
      v_580 = nr_St_8_On;
      v_577 = ns_St_8_On_1;
      v_578 = ns_St_8_On_2;
    } else {
      light_source_status_4_St_8_On_fail = 3;
      v_574 = light_source_status_4_St_8_On_fail;
      nr_St_8_On_fail = false;
      v_580 = nr_St_8_On_fail;
      ns_St_8_On_fail_1 = false;
      v_577 = ns_St_8_On_fail_1;
      ns_St_8_On_fail_2 = false;
      v_578 = ns_St_8_On_fail_2;
    };
    light_source_status_4 = v_574;
    ns_1_3 = v_577;
    ns_2_3 = v_578;
    nr = v_580;
  };
  _out->blind_status4 = light_source_status_4;
  if (ns_1_3) {
    ns_2_3_1 = ns_2_3;
  } else {
    ns_2_3_0 = ns_2_3;
  };
  if (!(ck_33_1)) {
    if (ck_33_2_0) {
      if (ns_St_8_On_1) {
        ns_St_8_On_2_1 = ns_St_8_On_2;
      } else {
        ns_St_8_On_2_0 = ns_St_8_On_2;
      };
    } else {
      if (ns_St_8_On_fail_1) {
        ns_St_8_On_fail_2_1 = ns_St_8_On_fail_2;
      } else {
        ns_St_8_On_fail_2_0 = ns_St_8_On_fail_2;
      };
    };
  };
  if (s_1_3) {
    s_2_3_1 = s_2_3;
  } else {
    s_2_3_0 = s_2_3;
  };
  if (!(ck_32_1)) {
    if (ck_32_2_0) {
      if (v_424_1) {
        v_424_2_1 = v_424_2;
      } else {
        v_424_2_0 = v_424_2;
      };
      if (s_St_8_On_1) {
        s_St_8_On_2_1 = s_St_8_On_2;
      } else {
        s_St_8_On_2_0 = s_St_8_On_2;
      };
    } else {
      if (v_419_1) {
        v_419_2_1 = v_419_2;
      } else {
        v_419_2_0 = v_419_2;
      };
      if (s_St_8_On_fail_1) {
        s_St_8_On_fail_2_1 = s_St_8_On_fail_2;
      } else {
        s_St_8_On_fail_2_0 = s_St_8_On_fail_2;
      };
    };
  };
  if (ck_30_1) {
    ck_30_2_1 = ck_30_2;
    if (ck_30_2_1) {
      if (failed_recovered_8) {
        v_415 = true;
        v_414_1 = true;
        v_414_2 = false;
      } else {
        v_415 = self->pnr_1;
        v_414_1 = true;
        v_414_2 = true;
      };
      v_412 = !(c2_4);
      v_411 = (c1_4&&sw_3);
      v_413 = (v_411||v_412);
      if (v_413) {
        r_1_St_9_Off = true;
        s_1_St_9_Off_1 = false;
        s_1_St_9_Off_2 = true;
      } else {
        r_1_St_9_Off = v_415;
        s_1_St_9_Off_1 = v_414_1;
        s_1_St_9_Off_2 = v_414_2;
      };
      v_603 = r_1_St_9_Off;
      v_599 = s_1_St_9_Off_1;
      v_600 = s_1_St_9_Off_2;
      if (v_414_1) {
        v_414_2_1 = v_414_2;
      } else {
        v_414_2_0 = v_414_2;
      };
      if (s_1_St_9_Off_1) {
        s_1_St_9_Off_2_1 = s_1_St_9_Off_2;
      } else {
        s_1_St_9_Off_2_0 = s_1_St_9_Off_2;
      };
    } else {
      if (failed_recovered_8) {
        v_410 = true;
        v_409_1 = true;
        v_409_2 = true;
      } else {
        v_410 = self->pnr_1;
        v_409_1 = true;
        v_409_2 = false;
      };
      v_407 = !(c2_4);
      v_406 = (c1_4&&sw_3);
      v_408 = (v_406||v_407);
      if (v_408) {
        r_1_St_9_Off_fail = true;
      } else {
        r_1_St_9_Off_fail = v_410;
      };
      v_603 = r_1_St_9_Off_fail;
      if (v_408) {
        s_1_St_9_Off_fail_1 = false;
      } else {
        s_1_St_9_Off_fail_1 = v_409_1;
      };
      v_599 = s_1_St_9_Off_fail_1;
      if (v_408) {
        s_1_St_9_Off_fail_2 = false;
      } else {
        s_1_St_9_Off_fail_2 = v_409_2;
      };
      v_600 = s_1_St_9_Off_fail_2;
      if (v_409_1) {
        v_409_2_1 = v_409_2;
      } else {
        v_409_2_0 = v_409_2;
      };
      if (s_1_St_9_Off_fail_1) {
        s_1_St_9_Off_fail_2_1 = s_1_St_9_Off_fail_2;
      } else {
        s_1_St_9_Off_fail_2_0 = s_1_St_9_Off_fail_2;
      };
    };
    s_1_1 = v_599;
    s_1_2 = v_600;
    r_1 = v_603;
  } else {
    ck_30_2_0 = ck_30_2;
    if (ck_30_2_0) {
      if (failed_recovered_8) {
        v_405 = true;
        v_404_1 = false;
        v_404_2 = false;
      } else {
        v_405 = self->pnr_1;
        v_404_1 = false;
        v_404_2 = true;
      };
      v_402 = !(c2_4);
      v_401 = (c1_4&&sw_3);
      v_403 = (v_401||v_402);
      if (v_403) {
        r_1_St_9_On = true;
        s_1_St_9_On_1 = true;
        s_1_St_9_On_2 = true;
      } else {
        r_1_St_9_On = v_405;
        s_1_St_9_On_1 = v_404_1;
        s_1_St_9_On_2 = v_404_2;
      };
      v_604 = r_1_St_9_On;
      v_601 = s_1_St_9_On_1;
      v_602 = s_1_St_9_On_2;
    } else {
      if (failed_recovered_8) {
        v_400 = true;
        v_399_1 = false;
        v_399_2 = true;
      } else {
        v_400 = self->pnr_1;
        v_399_1 = false;
        v_399_2 = false;
      };
      v_397 = !(c2_4);
      v_396 = (c1_4&&sw_3);
      v_398 = (v_396||v_397);
      if (v_398) {
        r_1_St_9_On_fail = true;
      } else {
        r_1_St_9_On_fail = v_400;
      };
      v_604 = r_1_St_9_On_fail;
      if (v_398) {
        s_1_St_9_On_fail_1 = true;
      } else {
        s_1_St_9_On_fail_1 = v_399_1;
      };
      v_601 = s_1_St_9_On_fail_1;
      if (v_398) {
        s_1_St_9_On_fail_2 = false;
      } else {
        s_1_St_9_On_fail_2 = v_399_2;
      };
      v_602 = s_1_St_9_On_fail_2;
    };
    s_1_1 = v_601;
    s_1_2 = v_602;
    r_1 = v_604;
  };
  ck_31_1 = s_1_1;
  ck_31_2 = s_1_2;
  if (ck_31_1) {
    ck_31_2_1 = ck_31_2;
    if (ck_31_2_1) {
      light_source_status_3_St_9_Off = 0;
      nr_1_St_9_Off = false;
      ns_1_St_9_Off_1 = true;
      ns_1_St_9_Off_2 = true;
      v_589 = light_source_status_3_St_9_Off;
      v_595 = nr_1_St_9_Off;
      v_591 = ns_1_St_9_Off_1;
      v_592 = ns_1_St_9_Off_2;
      if (ns_1_St_9_Off_1) {
        ns_1_St_9_Off_2_1 = ns_1_St_9_Off_2;
      } else {
        ns_1_St_9_Off_2_0 = ns_1_St_9_Off_2;
      };
    } else {
      light_source_status_3_St_9_Off_fail = 2;
      v_589 = light_source_status_3_St_9_Off_fail;
      nr_1_St_9_Off_fail = false;
      v_595 = nr_1_St_9_Off_fail;
      ns_1_St_9_Off_fail_1 = true;
      v_591 = ns_1_St_9_Off_fail_1;
      ns_1_St_9_Off_fail_2 = false;
      v_592 = ns_1_St_9_Off_fail_2;
      if (ns_1_St_9_Off_fail_1) {
        ns_1_St_9_Off_fail_2_1 = ns_1_St_9_Off_fail_2;
      } else {
        ns_1_St_9_Off_fail_2_0 = ns_1_St_9_Off_fail_2;
      };
    };
    light_source_status_3 = v_589;
    ns_1_1 = v_591;
    ns_1_2 = v_592;
    nr_1 = v_595;
  } else {
    ck_31_2_0 = ck_31_2;
    if (ck_31_2_0) {
      light_source_status_3_St_9_On = 1;
      nr_1_St_9_On = false;
      ns_1_St_9_On_1 = false;
      ns_1_St_9_On_2 = true;
      v_590 = light_source_status_3_St_9_On;
      v_596 = nr_1_St_9_On;
      v_593 = ns_1_St_9_On_1;
      v_594 = ns_1_St_9_On_2;
    } else {
      light_source_status_3_St_9_On_fail = 3;
      v_590 = light_source_status_3_St_9_On_fail;
      nr_1_St_9_On_fail = false;
      v_596 = nr_1_St_9_On_fail;
      ns_1_St_9_On_fail_1 = false;
      v_593 = ns_1_St_9_On_fail_1;
      ns_1_St_9_On_fail_2 = false;
      v_594 = ns_1_St_9_On_fail_2;
    };
    light_source_status_3 = v_590;
    ns_1_1 = v_593;
    ns_1_2 = v_594;
    nr_1 = v_596;
  };
  _out->blind_status3 = light_source_status_3;
  if (ns_1_1) {
    ns_1_2_1 = ns_1_2;
  } else {
    ns_1_2_0 = ns_1_2;
  };
  if (!(ck_31_1)) {
    if (ck_31_2_0) {
      if (ns_1_St_9_On_1) {
        ns_1_St_9_On_2_1 = ns_1_St_9_On_2;
      } else {
        ns_1_St_9_On_2_0 = ns_1_St_9_On_2;
      };
    } else {
      if (ns_1_St_9_On_fail_1) {
        ns_1_St_9_On_fail_2_1 = ns_1_St_9_On_fail_2;
      } else {
        ns_1_St_9_On_fail_2_0 = ns_1_St_9_On_fail_2;
      };
    };
  };
  if (s_1_1) {
    s_1_2_1 = s_1_2;
  } else {
    s_1_2_0 = s_1_2;
  };
  if (!(ck_30_1)) {
    if (ck_30_2_0) {
      if (v_404_1) {
        v_404_2_1 = v_404_2;
      } else {
        v_404_2_0 = v_404_2;
      };
      if (s_1_St_9_On_1) {
        s_1_St_9_On_2_1 = s_1_St_9_On_2;
      } else {
        s_1_St_9_On_2_0 = s_1_St_9_On_2;
      };
    } else {
      if (v_399_1) {
        v_399_2_1 = v_399_2;
      } else {
        v_399_2_0 = v_399_2;
      };
      if (s_1_St_9_On_fail_1) {
        s_1_St_9_On_fail_2_1 = s_1_St_9_On_fail_2;
      } else {
        s_1_St_9_On_fail_2_0 = s_1_St_9_On_fail_2;
      };
    };
  };
  if (ck_28_1) {
    ck_28_2_1 = ck_28_2;
    if (ck_28_2_1) {
      if (failed_recovered_7) {
        v_395 = true;
        v_394_1 = true;
        v_394_2 = false;
      } else {
        v_395 = self->pnr_2;
        v_394_1 = true;
        v_394_2 = true;
      };
      v_392 = !(c2_3);
      v_391 = (c1_3&&sw_2);
      v_393 = (v_391||v_392);
      if (v_393) {
        r_2_St_10_Off = true;
        s_2_St_10_Off_1 = false;
        s_2_St_10_Off_2 = true;
      } else {
        r_2_St_10_Off = v_395;
        s_2_St_10_Off_1 = v_394_1;
        s_2_St_10_Off_2 = v_394_2;
      };
      v_619 = r_2_St_10_Off;
      v_615 = s_2_St_10_Off_1;
      v_616 = s_2_St_10_Off_2;
      if (v_394_1) {
        v_394_2_1 = v_394_2;
      } else {
        v_394_2_0 = v_394_2;
      };
      if (s_2_St_10_Off_1) {
        s_2_St_10_Off_2_1 = s_2_St_10_Off_2;
      } else {
        s_2_St_10_Off_2_0 = s_2_St_10_Off_2;
      };
    } else {
      if (failed_recovered_7) {
        v_390 = true;
        v_389_1 = true;
        v_389_2 = true;
      } else {
        v_390 = self->pnr_2;
        v_389_1 = true;
        v_389_2 = false;
      };
      v_387 = !(c2_3);
      v_386 = (c1_3&&sw_2);
      v_388 = (v_386||v_387);
      if (v_388) {
        r_2_St_10_Off_fail = true;
      } else {
        r_2_St_10_Off_fail = v_390;
      };
      v_619 = r_2_St_10_Off_fail;
      if (v_388) {
        s_2_St_10_Off_fail_1 = false;
      } else {
        s_2_St_10_Off_fail_1 = v_389_1;
      };
      v_615 = s_2_St_10_Off_fail_1;
      if (v_388) {
        s_2_St_10_Off_fail_2 = false;
      } else {
        s_2_St_10_Off_fail_2 = v_389_2;
      };
      v_616 = s_2_St_10_Off_fail_2;
      if (v_389_1) {
        v_389_2_1 = v_389_2;
      } else {
        v_389_2_0 = v_389_2;
      };
      if (s_2_St_10_Off_fail_1) {
        s_2_St_10_Off_fail_2_1 = s_2_St_10_Off_fail_2;
      } else {
        s_2_St_10_Off_fail_2_0 = s_2_St_10_Off_fail_2;
      };
    };
    s_2_1 = v_615;
    s_2_2 = v_616;
    r_2 = v_619;
  } else {
    ck_28_2_0 = ck_28_2;
    if (ck_28_2_0) {
      if (failed_recovered_7) {
        v_385 = true;
        v_384_1 = false;
        v_384_2 = false;
      } else {
        v_385 = self->pnr_2;
        v_384_1 = false;
        v_384_2 = true;
      };
      v_382 = !(c2_3);
      v_381 = (c1_3&&sw_2);
      v_383 = (v_381||v_382);
      if (v_383) {
        r_2_St_10_On = true;
        s_2_St_10_On_1 = true;
        s_2_St_10_On_2 = true;
      } else {
        r_2_St_10_On = v_385;
        s_2_St_10_On_1 = v_384_1;
        s_2_St_10_On_2 = v_384_2;
      };
      v_620 = r_2_St_10_On;
      v_617 = s_2_St_10_On_1;
      v_618 = s_2_St_10_On_2;
    } else {
      if (failed_recovered_7) {
        v_380 = true;
        v_379_1 = false;
        v_379_2 = true;
      } else {
        v_380 = self->pnr_2;
        v_379_1 = false;
        v_379_2 = false;
      };
      v_377 = !(c2_3);
      v_376 = (c1_3&&sw_2);
      v_378 = (v_376||v_377);
      if (v_378) {
        r_2_St_10_On_fail = true;
      } else {
        r_2_St_10_On_fail = v_380;
      };
      v_620 = r_2_St_10_On_fail;
      if (v_378) {
        s_2_St_10_On_fail_1 = true;
      } else {
        s_2_St_10_On_fail_1 = v_379_1;
      };
      v_617 = s_2_St_10_On_fail_1;
      if (v_378) {
        s_2_St_10_On_fail_2 = false;
      } else {
        s_2_St_10_On_fail_2 = v_379_2;
      };
      v_618 = s_2_St_10_On_fail_2;
    };
    s_2_1 = v_617;
    s_2_2 = v_618;
    r_2 = v_620;
  };
  ck_29_1 = s_2_1;
  ck_29_2 = s_2_2;
  if (ck_29_1) {
    ck_29_2_1 = ck_29_2;
    if (ck_29_2_1) {
      light_source_status_2_St_10_Off = 0;
      nr_2_St_10_Off = false;
      ns_2_St_10_Off_1 = true;
      ns_2_St_10_Off_2 = true;
      v_605 = light_source_status_2_St_10_Off;
      v_611 = nr_2_St_10_Off;
      v_607 = ns_2_St_10_Off_1;
      v_608 = ns_2_St_10_Off_2;
      if (ns_2_St_10_Off_1) {
        ns_2_St_10_Off_2_1 = ns_2_St_10_Off_2;
      } else {
        ns_2_St_10_Off_2_0 = ns_2_St_10_Off_2;
      };
    } else {
      light_source_status_2_St_10_Off_fail = 2;
      v_605 = light_source_status_2_St_10_Off_fail;
      nr_2_St_10_Off_fail = false;
      v_611 = nr_2_St_10_Off_fail;
      ns_2_St_10_Off_fail_1 = true;
      v_607 = ns_2_St_10_Off_fail_1;
      ns_2_St_10_Off_fail_2 = false;
      v_608 = ns_2_St_10_Off_fail_2;
      if (ns_2_St_10_Off_fail_1) {
        ns_2_St_10_Off_fail_2_1 = ns_2_St_10_Off_fail_2;
      } else {
        ns_2_St_10_Off_fail_2_0 = ns_2_St_10_Off_fail_2;
      };
    };
    light_source_status_2 = v_605;
    ns_2_1 = v_607;
    ns_2_2 = v_608;
    nr_2 = v_611;
  } else {
    ck_29_2_0 = ck_29_2;
    if (ck_29_2_0) {
      light_source_status_2_St_10_On = 1;
      nr_2_St_10_On = false;
      ns_2_St_10_On_1 = false;
      ns_2_St_10_On_2 = true;
      v_606 = light_source_status_2_St_10_On;
      v_612 = nr_2_St_10_On;
      v_609 = ns_2_St_10_On_1;
      v_610 = ns_2_St_10_On_2;
    } else {
      light_source_status_2_St_10_On_fail = 3;
      v_606 = light_source_status_2_St_10_On_fail;
      nr_2_St_10_On_fail = false;
      v_612 = nr_2_St_10_On_fail;
      ns_2_St_10_On_fail_1 = false;
      v_609 = ns_2_St_10_On_fail_1;
      ns_2_St_10_On_fail_2 = false;
      v_610 = ns_2_St_10_On_fail_2;
    };
    light_source_status_2 = v_606;
    ns_2_1 = v_609;
    ns_2_2 = v_610;
    nr_2 = v_612;
  };
  _out->blind_status2 = light_source_status_2;
  if (ns_2_1) {
    ns_2_2_1 = ns_2_2;
  } else {
    ns_2_2_0 = ns_2_2;
  };
  if (!(ck_29_1)) {
    if (ck_29_2_0) {
      if (ns_2_St_10_On_1) {
        ns_2_St_10_On_2_1 = ns_2_St_10_On_2;
      } else {
        ns_2_St_10_On_2_0 = ns_2_St_10_On_2;
      };
    } else {
      if (ns_2_St_10_On_fail_1) {
        ns_2_St_10_On_fail_2_1 = ns_2_St_10_On_fail_2;
      } else {
        ns_2_St_10_On_fail_2_0 = ns_2_St_10_On_fail_2;
      };
    };
  };
  if (s_2_1) {
    s_2_2_1 = s_2_2;
  } else {
    s_2_2_0 = s_2_2;
  };
  if (!(ck_28_1)) {
    if (ck_28_2_0) {
      if (v_384_1) {
        v_384_2_1 = v_384_2;
      } else {
        v_384_2_0 = v_384_2;
      };
      if (s_2_St_10_On_1) {
        s_2_St_10_On_2_1 = s_2_St_10_On_2;
      } else {
        s_2_St_10_On_2_0 = s_2_St_10_On_2;
      };
    } else {
      if (v_379_1) {
        v_379_2_1 = v_379_2;
      } else {
        v_379_2_0 = v_379_2;
      };
      if (s_2_St_10_On_fail_1) {
        s_2_St_10_On_fail_2_1 = s_2_St_10_On_fail_2;
      } else {
        s_2_St_10_On_fail_2_0 = s_2_St_10_On_fail_2;
      };
    };
  };
  if (ck_26_1) {
    ck_26_2_1 = ck_26_2;
    if (ck_26_2_1) {
      if (failed_recovered_6) {
        v_375 = true;
        v_374_1 = true;
        v_374_2 = false;
      } else {
        v_375 = self->pnr_3;
        v_374_1 = true;
        v_374_2 = true;
      };
      v_372 = !(c2_2);
      v_371 = (c1_2&&sw_1);
      v_373 = (v_371||v_372);
      if (v_373) {
        r_3_St_11_Off = true;
        s_3_St_11_Off_1 = false;
        s_3_St_11_Off_2 = true;
      } else {
        r_3_St_11_Off = v_375;
        s_3_St_11_Off_1 = v_374_1;
        s_3_St_11_Off_2 = v_374_2;
      };
      v_635 = r_3_St_11_Off;
      v_631 = s_3_St_11_Off_1;
      v_632 = s_3_St_11_Off_2;
      if (v_374_1) {
        v_374_2_1 = v_374_2;
      } else {
        v_374_2_0 = v_374_2;
      };
      if (s_3_St_11_Off_1) {
        s_3_St_11_Off_2_1 = s_3_St_11_Off_2;
      } else {
        s_3_St_11_Off_2_0 = s_3_St_11_Off_2;
      };
    } else {
      if (failed_recovered_6) {
        v_370 = true;
        v_369_1 = true;
        v_369_2 = true;
      } else {
        v_370 = self->pnr_3;
        v_369_1 = true;
        v_369_2 = false;
      };
      v_367 = !(c2_2);
      v_366 = (c1_2&&sw_1);
      v_368 = (v_366||v_367);
      if (v_368) {
        r_3_St_11_Off_fail = true;
      } else {
        r_3_St_11_Off_fail = v_370;
      };
      v_635 = r_3_St_11_Off_fail;
      if (v_368) {
        s_3_St_11_Off_fail_1 = false;
      } else {
        s_3_St_11_Off_fail_1 = v_369_1;
      };
      v_631 = s_3_St_11_Off_fail_1;
      if (v_368) {
        s_3_St_11_Off_fail_2 = false;
      } else {
        s_3_St_11_Off_fail_2 = v_369_2;
      };
      v_632 = s_3_St_11_Off_fail_2;
      if (v_369_1) {
        v_369_2_1 = v_369_2;
      } else {
        v_369_2_0 = v_369_2;
      };
      if (s_3_St_11_Off_fail_1) {
        s_3_St_11_Off_fail_2_1 = s_3_St_11_Off_fail_2;
      } else {
        s_3_St_11_Off_fail_2_0 = s_3_St_11_Off_fail_2;
      };
    };
    s_3_1 = v_631;
    s_3_2 = v_632;
    r_3 = v_635;
  } else {
    ck_26_2_0 = ck_26_2;
    if (ck_26_2_0) {
      if (failed_recovered_6) {
        v_365 = true;
        v_364_1 = false;
        v_364_2 = false;
      } else {
        v_365 = self->pnr_3;
        v_364_1 = false;
        v_364_2 = true;
      };
      v_362 = !(c2_2);
      v_361 = (c1_2&&sw_1);
      v_363 = (v_361||v_362);
      if (v_363) {
        r_3_St_11_On = true;
        s_3_St_11_On_1 = true;
        s_3_St_11_On_2 = true;
      } else {
        r_3_St_11_On = v_365;
        s_3_St_11_On_1 = v_364_1;
        s_3_St_11_On_2 = v_364_2;
      };
      v_636 = r_3_St_11_On;
      v_633 = s_3_St_11_On_1;
      v_634 = s_3_St_11_On_2;
    } else {
      if (failed_recovered_6) {
        v_360 = true;
        v_359_1 = false;
        v_359_2 = true;
      } else {
        v_360 = self->pnr_3;
        v_359_1 = false;
        v_359_2 = false;
      };
      v_357 = !(c2_2);
      v_356 = (c1_2&&sw_1);
      v_358 = (v_356||v_357);
      if (v_358) {
        r_3_St_11_On_fail = true;
      } else {
        r_3_St_11_On_fail = v_360;
      };
      v_636 = r_3_St_11_On_fail;
      if (v_358) {
        s_3_St_11_On_fail_1 = true;
      } else {
        s_3_St_11_On_fail_1 = v_359_1;
      };
      v_633 = s_3_St_11_On_fail_1;
      if (v_358) {
        s_3_St_11_On_fail_2 = false;
      } else {
        s_3_St_11_On_fail_2 = v_359_2;
      };
      v_634 = s_3_St_11_On_fail_2;
    };
    s_3_1 = v_633;
    s_3_2 = v_634;
    r_3 = v_636;
  };
  ck_27_1 = s_3_1;
  ck_27_2 = s_3_2;
  if (ck_27_1) {
    ck_27_2_1 = ck_27_2;
    if (ck_27_2_1) {
      light_source_status_1_St_11_Off = 0;
      nr_3_St_11_Off = false;
      ns_3_St_11_Off_1 = true;
      ns_3_St_11_Off_2 = true;
      v_621 = light_source_status_1_St_11_Off;
      v_627 = nr_3_St_11_Off;
      v_623 = ns_3_St_11_Off_1;
      v_624 = ns_3_St_11_Off_2;
      if (ns_3_St_11_Off_1) {
        ns_3_St_11_Off_2_1 = ns_3_St_11_Off_2;
      } else {
        ns_3_St_11_Off_2_0 = ns_3_St_11_Off_2;
      };
    } else {
      light_source_status_1_St_11_Off_fail = 2;
      v_621 = light_source_status_1_St_11_Off_fail;
      nr_3_St_11_Off_fail = false;
      v_627 = nr_3_St_11_Off_fail;
      ns_3_St_11_Off_fail_1 = true;
      v_623 = ns_3_St_11_Off_fail_1;
      ns_3_St_11_Off_fail_2 = false;
      v_624 = ns_3_St_11_Off_fail_2;
      if (ns_3_St_11_Off_fail_1) {
        ns_3_St_11_Off_fail_2_1 = ns_3_St_11_Off_fail_2;
      } else {
        ns_3_St_11_Off_fail_2_0 = ns_3_St_11_Off_fail_2;
      };
    };
    light_source_status_1 = v_621;
    ns_3_1 = v_623;
    ns_3_2 = v_624;
    nr_3 = v_627;
  } else {
    ck_27_2_0 = ck_27_2;
    if (ck_27_2_0) {
      light_source_status_1_St_11_On = 1;
      nr_3_St_11_On = false;
      ns_3_St_11_On_1 = false;
      ns_3_St_11_On_2 = true;
      v_622 = light_source_status_1_St_11_On;
      v_628 = nr_3_St_11_On;
      v_625 = ns_3_St_11_On_1;
      v_626 = ns_3_St_11_On_2;
    } else {
      light_source_status_1_St_11_On_fail = 3;
      v_622 = light_source_status_1_St_11_On_fail;
      nr_3_St_11_On_fail = false;
      v_628 = nr_3_St_11_On_fail;
      ns_3_St_11_On_fail_1 = false;
      v_625 = ns_3_St_11_On_fail_1;
      ns_3_St_11_On_fail_2 = false;
      v_626 = ns_3_St_11_On_fail_2;
    };
    light_source_status_1 = v_622;
    ns_3_1 = v_625;
    ns_3_2 = v_626;
    nr_3 = v_628;
  };
  _out->blind_status = light_source_status_1;
  v_111 = (_out->blind_status<=1);
  v_118 = (_out->blind_status==1);
  v_136 = (_out->blind_status>=2);
  v_148 = (_out->blind_status<=1);
  v_155 = (_out->blind_status==1);
  v_182 = (_out->blind_status>=2);
  v_189 = (_out->blind_status<=1);
  v_192 = (_out->blind_status==1);
  v_198 = (_out->blind_status<=1);
  v_202 = (_out->blind_status==1);
  v_208 = (_out->blind_status<=1);
  v_211 = (_out->blind_status==1);
  v_230 = (_out->blind_status==1);
  v_231 = !(v_230);
  if (ns_3_1) {
    ns_3_2_1 = ns_3_2;
  } else {
    ns_3_2_0 = ns_3_2;
  };
  if (!(ck_27_1)) {
    if (ck_27_2_0) {
      if (ns_3_St_11_On_1) {
        ns_3_St_11_On_2_1 = ns_3_St_11_On_2;
      } else {
        ns_3_St_11_On_2_0 = ns_3_St_11_On_2;
      };
    } else {
      if (ns_3_St_11_On_fail_1) {
        ns_3_St_11_On_fail_2_1 = ns_3_St_11_On_fail_2;
      } else {
        ns_3_St_11_On_fail_2_0 = ns_3_St_11_On_fail_2;
      };
    };
  };
  if (s_3_1) {
    s_3_2_1 = s_3_2;
  } else {
    s_3_2_0 = s_3_2;
  };
  if (!(ck_26_1)) {
    if (ck_26_2_0) {
      if (v_364_1) {
        v_364_2_1 = v_364_2;
      } else {
        v_364_2_0 = v_364_2;
      };
      if (s_3_St_11_On_1) {
        s_3_St_11_On_2_1 = s_3_St_11_On_2;
      } else {
        s_3_St_11_On_2_0 = s_3_St_11_On_2;
      };
    } else {
      if (v_359_1) {
        v_359_2_1 = v_359_2;
      } else {
        v_359_2_0 = v_359_2;
      };
      if (s_3_St_11_On_fail_1) {
        s_3_St_11_On_fail_2_1 = s_3_St_11_On_fail_2;
      } else {
        s_3_St_11_On_fail_2_0 = s_3_St_11_On_fail_2;
      };
    };
  };
  if (ck_24_1) {
    ck_24_2_1 = ck_24_2;
    if (ck_24_2_1) {
      if (failed_recovered_5) {
        v_355 = true;
        v_354_1 = true;
        v_354_2 = false;
      } else {
        v_355 = self->pnr_4;
        v_354_1 = true;
        v_354_2 = true;
      };
      v_352 = !(c2_1);
      v_351 = (c1_1&&sw);
      v_353 = (v_351||v_352);
      if (v_353) {
        r_4_St_12_Off = true;
        s_4_St_12_Off_1 = false;
        s_4_St_12_Off_2 = true;
      } else {
        r_4_St_12_Off = v_355;
        s_4_St_12_Off_1 = v_354_1;
        s_4_St_12_Off_2 = v_354_2;
      };
      v_651 = r_4_St_12_Off;
      v_647 = s_4_St_12_Off_1;
      v_648 = s_4_St_12_Off_2;
      if (v_354_1) {
        v_354_2_1 = v_354_2;
      } else {
        v_354_2_0 = v_354_2;
      };
      if (s_4_St_12_Off_1) {
        s_4_St_12_Off_2_1 = s_4_St_12_Off_2;
      } else {
        s_4_St_12_Off_2_0 = s_4_St_12_Off_2;
      };
    } else {
      if (failed_recovered_5) {
        v_350 = true;
        v_349_1 = true;
        v_349_2 = true;
      } else {
        v_350 = self->pnr_4;
        v_349_1 = true;
        v_349_2 = false;
      };
      v_347 = !(c2_1);
      v_346 = (c1_1&&sw);
      v_348 = (v_346||v_347);
      if (v_348) {
        r_4_St_12_Off_fail = true;
      } else {
        r_4_St_12_Off_fail = v_350;
      };
      v_651 = r_4_St_12_Off_fail;
      if (v_348) {
        s_4_St_12_Off_fail_1 = false;
      } else {
        s_4_St_12_Off_fail_1 = v_349_1;
      };
      v_647 = s_4_St_12_Off_fail_1;
      if (v_348) {
        s_4_St_12_Off_fail_2 = false;
      } else {
        s_4_St_12_Off_fail_2 = v_349_2;
      };
      v_648 = s_4_St_12_Off_fail_2;
      if (v_349_1) {
        v_349_2_1 = v_349_2;
      } else {
        v_349_2_0 = v_349_2;
      };
      if (s_4_St_12_Off_fail_1) {
        s_4_St_12_Off_fail_2_1 = s_4_St_12_Off_fail_2;
      } else {
        s_4_St_12_Off_fail_2_0 = s_4_St_12_Off_fail_2;
      };
    };
    s_4_1 = v_647;
    s_4_2 = v_648;
    r_4 = v_651;
  } else {
    ck_24_2_0 = ck_24_2;
    if (ck_24_2_0) {
      if (failed_recovered_5) {
        v_345 = true;
        v_344_1 = false;
        v_344_2 = false;
      } else {
        v_345 = self->pnr_4;
        v_344_1 = false;
        v_344_2 = true;
      };
      v_342 = !(c2_1);
      v_341 = (c1_1&&sw);
      v_343 = (v_341||v_342);
      if (v_343) {
        r_4_St_12_On = true;
        s_4_St_12_On_1 = true;
        s_4_St_12_On_2 = true;
      } else {
        r_4_St_12_On = v_345;
        s_4_St_12_On_1 = v_344_1;
        s_4_St_12_On_2 = v_344_2;
      };
      v_652 = r_4_St_12_On;
      v_649 = s_4_St_12_On_1;
      v_650 = s_4_St_12_On_2;
    } else {
      if (failed_recovered_5) {
        v_340 = true;
        v_339_1 = false;
        v_339_2 = true;
      } else {
        v_340 = self->pnr_4;
        v_339_1 = false;
        v_339_2 = false;
      };
      v_337 = !(c2_1);
      v_336 = (c1_1&&sw);
      v_338 = (v_336||v_337);
      if (v_338) {
        r_4_St_12_On_fail = true;
      } else {
        r_4_St_12_On_fail = v_340;
      };
      v_652 = r_4_St_12_On_fail;
      if (v_338) {
        s_4_St_12_On_fail_1 = true;
      } else {
        s_4_St_12_On_fail_1 = v_339_1;
      };
      v_649 = s_4_St_12_On_fail_1;
      if (v_338) {
        s_4_St_12_On_fail_2 = false;
      } else {
        s_4_St_12_On_fail_2 = v_339_2;
      };
      v_650 = s_4_St_12_On_fail_2;
    };
    s_4_1 = v_649;
    s_4_2 = v_650;
    r_4 = v_652;
  };
  ck_25_1 = s_4_1;
  ck_25_2 = s_4_2;
  if (ck_25_1) {
    ck_25_2_1 = ck_25_2;
    if (ck_25_2_1) {
      light_source_status_St_12_Off = 0;
      nr_4_St_12_Off = false;
      ns_4_St_12_Off_1 = true;
      ns_4_St_12_Off_2 = true;
      v_637 = light_source_status_St_12_Off;
      v_643 = nr_4_St_12_Off;
      v_639 = ns_4_St_12_Off_1;
      v_640 = ns_4_St_12_Off_2;
      if (ns_4_St_12_Off_1) {
        ns_4_St_12_Off_2_1 = ns_4_St_12_Off_2;
      } else {
        ns_4_St_12_Off_2_0 = ns_4_St_12_Off_2;
      };
    } else {
      light_source_status_St_12_Off_fail = 2;
      v_637 = light_source_status_St_12_Off_fail;
      nr_4_St_12_Off_fail = false;
      v_643 = nr_4_St_12_Off_fail;
      ns_4_St_12_Off_fail_1 = true;
      v_639 = ns_4_St_12_Off_fail_1;
      ns_4_St_12_Off_fail_2 = false;
      v_640 = ns_4_St_12_Off_fail_2;
      if (ns_4_St_12_Off_fail_1) {
        ns_4_St_12_Off_fail_2_1 = ns_4_St_12_Off_fail_2;
      } else {
        ns_4_St_12_Off_fail_2_0 = ns_4_St_12_Off_fail_2;
      };
    };
    light_source_status = v_637;
    ns_4_1 = v_639;
    ns_4_2 = v_640;
    nr_4 = v_643;
  } else {
    ck_25_2_0 = ck_25_2;
    if (ck_25_2_0) {
      light_source_status_St_12_On = 1;
      nr_4_St_12_On = false;
      ns_4_St_12_On_1 = false;
      ns_4_St_12_On_2 = true;
      v_638 = light_source_status_St_12_On;
      v_644 = nr_4_St_12_On;
      v_641 = ns_4_St_12_On_1;
      v_642 = ns_4_St_12_On_2;
    } else {
      light_source_status_St_12_On_fail = 3;
      v_638 = light_source_status_St_12_On_fail;
      nr_4_St_12_On_fail = false;
      v_644 = nr_4_St_12_On_fail;
      ns_4_St_12_On_fail_1 = false;
      v_641 = ns_4_St_12_On_fail_1;
      ns_4_St_12_On_fail_2 = false;
      v_642 = ns_4_St_12_On_fail_2;
    };
    light_source_status = v_638;
    ns_4_1 = v_641;
    ns_4_2 = v_642;
    nr_4 = v_644;
  };
  _out->light_status = light_source_status;
  v_180 = (_out->light_status<=1);
  v_185 = (_out->light_status==1);
  v_187 = (_out->light_status>=2);
  v_196 = (_out->light_status<=1);
  v_201 = (_out->light_status==1);
  v_203 = (v_201||v_202);
  v_206 = (_out->light_status>=2);
  v_214 = (_out->light_status<=1);
  v_217 = (_out->light_status==1);
  v_227 = (_out->light_status==1);
  v_228 = !(v_227);
  if (ns_4_1) {
    ns_4_2_1 = ns_4_2;
  } else {
    ns_4_2_0 = ns_4_2;
  };
  if (!(ck_25_1)) {
    if (ck_25_2_0) {
      if (ns_4_St_12_On_1) {
        ns_4_St_12_On_2_1 = ns_4_St_12_On_2;
      } else {
        ns_4_St_12_On_2_0 = ns_4_St_12_On_2;
      };
    } else {
      if (ns_4_St_12_On_fail_1) {
        ns_4_St_12_On_fail_2_1 = ns_4_St_12_On_fail_2;
      } else {
        ns_4_St_12_On_fail_2_0 = ns_4_St_12_On_fail_2;
      };
    };
  };
  if (s_4_1) {
    s_4_2_1 = s_4_2;
  } else {
    s_4_2_0 = s_4_2;
  };
  if (!(ck_24_1)) {
    if (ck_24_2_0) {
      if (v_344_1) {
        v_344_2_1 = v_344_2;
      } else {
        v_344_2_0 = v_344_2;
      };
      if (s_4_St_12_On_1) {
        s_4_St_12_On_2_1 = s_4_St_12_On_2;
      } else {
        s_4_St_12_On_2_0 = s_4_St_12_On_2;
      };
    } else {
      if (v_339_1) {
        v_339_2_1 = v_339_2;
      } else {
        v_339_2_0 = v_339_2;
      };
      if (s_4_St_12_On_fail_1) {
        s_4_St_12_On_fail_2_1 = s_4_St_12_On_fail_2;
      } else {
        s_4_St_12_On_fail_2_0 = s_4_St_12_On_fail_2;
      };
    };
  };
  if (ck_22_1) {
    ck_22_2_1 = ck_22_2;
    if (ck_22_2_1) {
      ck_22_3_1_1 = ck_22_3;
      if (ck_22_3_1_1) {
        if (failed_recovered_4) {
          v_311 = true;
          v_310_1 = true;
          v_310_2 = true;
          v_310_3 = false;
        } else {
          v_311 = self->pnr_5;
          v_310_1 = true;
          v_310_2 = true;
          v_310_3 = true;
        };
        v_309 = !(c2);
        if (v_309) {
          v_313 = true;
          v_312_1 = false;
          v_312_2 = true;
          v_312_3 = false;
        } else {
          v_313 = v_311;
          v_312_1 = v_310_1;
          v_312_2 = v_310_2;
          v_312_3 = v_310_3;
        };
        v_308 = !(c1);
        if (v_308) {
          r_5_St_13_Max = true;
          s_5_St_13_Max_1 = true;
          s_5_St_13_Max_2 = false;
          s_5_St_13_Max_3 = false;
        } else {
          r_5_St_13_Max = v_313;
          s_5_St_13_Max_1 = v_312_1;
          s_5_St_13_Max_2 = v_312_2;
          s_5_St_13_Max_3 = v_312_3;
        };
        v_704 = r_5_St_13_Max;
        v_686 = s_5_St_13_Max_1;
        v_687 = s_5_St_13_Max_2;
        v_688 = s_5_St_13_Max_3;
      } else {
        if (failed_recovered_4) {
          v_305 = true;
          v_304_1 = true;
          v_304_2 = true;
          v_304_3 = true;
        } else {
          v_305 = self->pnr_5;
          v_304_1 = true;
          v_304_2 = true;
          v_304_3 = false;
        };
        v_303 = !(c2);
        if (v_303) {
          v_307 = true;
          v_306_1 = false;
          v_306_2 = false;
          v_306_3 = false;
        } else {
          v_307 = v_305;
          v_306_1 = v_304_1;
          v_306_2 = v_304_2;
          v_306_3 = v_304_3;
        };
        v_302 = !(c1);
        if (v_302) {
          r_5_St_13_Max_fail = true;
        } else {
          r_5_St_13_Max_fail = v_307;
        };
        v_704 = r_5_St_13_Max_fail;
        if (v_302) {
          s_5_St_13_Max_fail_1 = false;
        } else {
          s_5_St_13_Max_fail_1 = v_306_1;
        };
        v_686 = s_5_St_13_Max_fail_1;
        if (v_302) {
          s_5_St_13_Max_fail_2 = true;
        } else {
          s_5_St_13_Max_fail_2 = v_306_2;
        };
        v_687 = s_5_St_13_Max_fail_2;
        if (v_302) {
          s_5_St_13_Max_fail_3 = true;
        } else {
          s_5_St_13_Max_fail_3 = v_306_3;
        };
        v_688 = s_5_St_13_Max_fail_3;
      };
      v_698 = v_686;
      v_699 = v_687;
      v_700 = v_688;
      v_706 = v_704;
      if (ck_22_3_1_1) {
        if (v_310_1) {
          v_310_2_1 = v_310_2;
          if (v_310_2_1) {
            v_310_3_1_1 = v_310_3;
          } else {
            v_310_3_1_0 = v_310_3;
          };
        } else {
          v_310_2_0 = v_310_2;
          if (v_310_2_0) {
            v_310_3_0_1 = v_310_3;
          } else {
            v_310_3_0_0 = v_310_3;
          };
        };
        if (v_312_1) {
          v_312_2_1 = v_312_2;
          if (v_312_2_1) {
            v_312_3_1_1 = v_312_3;
          } else {
            v_312_3_1_0 = v_312_3;
          };
        } else {
          v_312_2_0 = v_312_2;
          if (v_312_2_0) {
            v_312_3_0_1 = v_312_3;
          } else {
            v_312_3_0_0 = v_312_3;
          };
        };
        if (s_5_St_13_Max_1) {
          s_5_St_13_Max_2_1 = s_5_St_13_Max_2;
          if (s_5_St_13_Max_2_1) {
            s_5_St_13_Max_3_1_1 = s_5_St_13_Max_3;
          } else {
            s_5_St_13_Max_3_1_0 = s_5_St_13_Max_3;
          };
        } else {
          s_5_St_13_Max_2_0 = s_5_St_13_Max_2;
          if (s_5_St_13_Max_2_0) {
            s_5_St_13_Max_3_0_1 = s_5_St_13_Max_3;
          } else {
            s_5_St_13_Max_3_0_0 = s_5_St_13_Max_3;
          };
        };
      } else {
        if (v_304_1) {
          v_304_2_1 = v_304_2;
          if (v_304_2_1) {
            v_304_3_1_1 = v_304_3;
          } else {
            v_304_3_1_0 = v_304_3;
          };
        } else {
          v_304_2_0 = v_304_2;
          if (v_304_2_0) {
            v_304_3_0_1 = v_304_3;
          } else {
            v_304_3_0_0 = v_304_3;
          };
        };
        if (v_306_1) {
          v_306_2_1 = v_306_2;
          if (v_306_2_1) {
            v_306_3_1_1 = v_306_3;
          } else {
            v_306_3_1_0 = v_306_3;
          };
        } else {
          v_306_2_0 = v_306_2;
          if (v_306_2_0) {
            v_306_3_0_1 = v_306_3;
          } else {
            v_306_3_0_0 = v_306_3;
          };
        };
        if (s_5_St_13_Max_fail_1) {
          s_5_St_13_Max_fail_2_1 = s_5_St_13_Max_fail_2;
          if (s_5_St_13_Max_fail_2_1) {
            s_5_St_13_Max_fail_3_1_1 = s_5_St_13_Max_fail_3;
          } else {
            s_5_St_13_Max_fail_3_1_0 = s_5_St_13_Max_fail_3;
          };
        } else {
          s_5_St_13_Max_fail_2_0 = s_5_St_13_Max_fail_2;
          if (s_5_St_13_Max_fail_2_0) {
            s_5_St_13_Max_fail_3_0_1 = s_5_St_13_Max_fail_3;
          } else {
            s_5_St_13_Max_fail_3_0_0 = s_5_St_13_Max_fail_3;
          };
        };
      };
    } else {
      ck_22_3_1_0 = ck_22_3;
      if (ck_22_3_1_0) {
        v_705 = true;
        v_689 = true;
        v_690 = true;
        v_691 = true;
      } else {
        if (failed_recovered_4) {
          v_323 = true;
          v_322_1 = false;
          v_322_2 = true;
          v_322_3 = true;
        } else {
          v_323 = self->pnr_5;
          v_322_1 = true;
          v_322_2 = false;
          v_322_3 = false;
        };
        v_321 = !(c2);
        if (v_321) {
          v_325 = true;
          v_324_1 = true;
          v_324_2 = true;
          v_324_3 = true;
        } else {
          v_325 = v_323;
          v_324_1 = v_322_1;
          v_324_2 = v_322_2;
          v_324_3 = v_322_3;
        };
        v_320 = !(c1);
        if (v_320) {
          r_5_St_13_Min = true;
        } else {
          r_5_St_13_Min = v_325;
        };
        v_705 = r_5_St_13_Min;
        if (v_320) {
          s_5_St_13_Min_1 = false;
        } else {
          s_5_St_13_Min_1 = v_324_1;
        };
        v_689 = s_5_St_13_Min_1;
        if (v_320) {
          s_5_St_13_Min_2 = true;
        } else {
          s_5_St_13_Min_2 = v_324_2;
        };
        v_690 = s_5_St_13_Min_2;
        if (v_320) {
          s_5_St_13_Min_3 = false;
        } else {
          s_5_St_13_Min_3 = v_324_3;
        };
        v_691 = s_5_St_13_Min_3;
        if (v_322_1) {
          v_322_2_1 = v_322_2;
          if (v_322_2_1) {
            v_322_3_1_1 = v_322_3;
          } else {
            v_322_3_1_0 = v_322_3;
          };
        } else {
          v_322_2_0 = v_322_2;
          if (v_322_2_0) {
            v_322_3_0_1 = v_322_3;
          } else {
            v_322_3_0_0 = v_322_3;
          };
        };
        if (v_324_1) {
          v_324_2_1 = v_324_2;
          if (v_324_2_1) {
            v_324_3_1_1 = v_324_3;
          } else {
            v_324_3_1_0 = v_324_3;
          };
        } else {
          v_324_2_0 = v_324_2;
          if (v_324_2_0) {
            v_324_3_0_1 = v_324_3;
          } else {
            v_324_3_0_0 = v_324_3;
          };
        };
        if (s_5_St_13_Min_1) {
          s_5_St_13_Min_2_1 = s_5_St_13_Min_2;
          if (s_5_St_13_Min_2_1) {
            s_5_St_13_Min_3_1_1 = s_5_St_13_Min_3;
          } else {
            s_5_St_13_Min_3_1_0 = s_5_St_13_Min_3;
          };
        } else {
          s_5_St_13_Min_2_0 = s_5_St_13_Min_2;
          if (s_5_St_13_Min_2_0) {
            s_5_St_13_Min_3_0_1 = s_5_St_13_Min_3;
          } else {
            s_5_St_13_Min_3_0_0 = s_5_St_13_Min_3;
          };
        };
      };
      v_698 = v_689;
      v_699 = v_690;
      v_700 = v_691;
      v_706 = v_705;
    };
    s_5_1 = v_698;
    s_5_2 = v_699;
    s_5_3 = v_700;
    r_5 = v_706;
  } else {
    ck_22_2_0 = ck_22_2;
    if (ck_22_2_0) {
      ck_22_3_0_1 = ck_22_3;
      if (ck_22_3_0_1) {
        if (failed_recovered_4) {
          v_317 = true;
          v_316_1 = true;
          v_316_2 = false;
          v_316_3 = false;
        } else {
          v_317 = self->pnr_5;
          v_316_1 = false;
          v_316_2 = true;
          v_316_3 = true;
        };
        v_315 = !(c2);
        if (v_315) {
          v_319 = true;
          v_318_1 = true;
          v_318_2 = true;
          v_318_3 = false;
        } else {
          v_319 = v_317;
          v_318_1 = v_316_1;
          v_318_2 = v_316_2;
          v_318_3 = v_316_3;
        };
        v_314 = !(c1);
        if (v_314) {
          r_5_St_13_Min_fail = true;
        } else {
          r_5_St_13_Min_fail = v_319;
        };
        v_707 = r_5_St_13_Min_fail;
        if (v_314) {
          s_5_St_13_Min_fail_1 = false;
        } else {
          s_5_St_13_Min_fail_1 = v_318_1;
        };
        v_692 = s_5_St_13_Min_fail_1;
        if (v_314) {
          s_5_St_13_Min_fail_2 = false;
        } else {
          s_5_St_13_Min_fail_2 = v_318_2;
        };
        v_693 = s_5_St_13_Min_fail_2;
        if (v_314) {
          s_5_St_13_Min_fail_3 = false;
        } else {
          s_5_St_13_Min_fail_3 = v_318_3;
        };
        v_694 = s_5_St_13_Min_fail_3;
      } else {
        if (failed_recovered_4) {
          v_333 = true;
          v_332_1 = false;
          v_332_2 = false;
          v_332_3 = false;
        } else {
          v_333 = self->pnr_5;
          v_332_1 = false;
          v_332_2 = true;
          v_332_3 = false;
        };
        v_331 = !(c2);
        if (v_331) {
          v_335 = true;
        } else {
          v_335 = v_333;
        };
        if (c1) {
          r_5_St_13_Off = true;
        } else {
          r_5_St_13_Off = v_335;
        };
        if (v_331) {
          v_334_1 = true;
        } else {
          v_334_1 = v_332_1;
        };
        if (c1) {
          s_5_St_13_Off_1 = true;
        } else {
          s_5_St_13_Off_1 = v_334_1;
        };
        if (v_331) {
          v_334_2 = true;
        } else {
          v_334_2 = v_332_2;
        };
        if (c1) {
          s_5_St_13_Off_2 = false;
        } else {
          s_5_St_13_Off_2 = v_334_2;
        };
        if (v_331) {
          v_334_3 = true;
        } else {
          v_334_3 = v_332_3;
        };
        if (c1) {
          s_5_St_13_Off_3 = false;
        } else {
          s_5_St_13_Off_3 = v_334_3;
        };
        v_707 = r_5_St_13_Off;
        v_692 = s_5_St_13_Off_1;
        v_693 = s_5_St_13_Off_2;
        v_694 = s_5_St_13_Off_3;
        if (v_332_1) {
          v_332_2_1 = v_332_2;
          if (v_332_2_1) {
            v_332_3_1_1 = v_332_3;
          } else {
            v_332_3_1_0 = v_332_3;
          };
        } else {
          v_332_2_0 = v_332_2;
          if (v_332_2_0) {
            v_332_3_0_1 = v_332_3;
          } else {
            v_332_3_0_0 = v_332_3;
          };
        };
        if (v_334_1) {
          v_334_2_1 = v_334_2;
          if (v_334_2_1) {
            v_334_3_1_1 = v_334_3;
          } else {
            v_334_3_1_0 = v_334_3;
          };
        } else {
          v_334_2_0 = v_334_2;
          if (v_334_2_0) {
            v_334_3_0_1 = v_334_3;
          } else {
            v_334_3_0_0 = v_334_3;
          };
        };
      };
      v_701 = v_692;
      v_702 = v_693;
      v_703 = v_694;
      v_709 = v_707;
    } else {
      ck_22_3_0_0 = ck_22_3;
      if (ck_22_3_0_0) {
        v_708 = true;
        v_695 = true;
        v_696 = true;
        v_697 = true;
      } else {
        if (failed_recovered_4) {
          v_328 = true;
          v_327_1 = false;
          v_327_2 = true;
          v_327_3 = false;
        } else {
          v_328 = self->pnr_5;
          v_327_1 = false;
          v_327_2 = false;
          v_327_3 = false;
        };
        v_326 = !(c2);
        if (v_326) {
          v_330 = true;
        } else {
          v_330 = v_328;
        };
        if (c1) {
          r_5_St_13_Off_fail = true;
        } else {
          r_5_St_13_Off_fail = v_330;
        };
        v_708 = r_5_St_13_Off_fail;
        if (v_326) {
          v_329_1 = true;
        } else {
          v_329_1 = v_327_1;
        };
        if (c1) {
          s_5_St_13_Off_fail_1 = false;
        } else {
          s_5_St_13_Off_fail_1 = v_329_1;
        };
        v_695 = s_5_St_13_Off_fail_1;
        if (v_326) {
          v_329_2 = true;
        } else {
          v_329_2 = v_327_2;
        };
        if (c1) {
          s_5_St_13_Off_fail_2 = true;
        } else {
          s_5_St_13_Off_fail_2 = v_329_2;
        };
        v_696 = s_5_St_13_Off_fail_2;
        if (v_326) {
          v_329_3 = false;
        } else {
          v_329_3 = v_327_3;
        };
        if (c1) {
          s_5_St_13_Off_fail_3 = true;
        } else {
          s_5_St_13_Off_fail_3 = v_329_3;
        };
        v_697 = s_5_St_13_Off_fail_3;
        if (v_327_1) {
          v_327_2_1 = v_327_2;
          if (v_327_2_1) {
            v_327_3_1_1 = v_327_3;
          } else {
            v_327_3_1_0 = v_327_3;
          };
        } else {
          v_327_2_0 = v_327_2;
          if (v_327_2_0) {
            v_327_3_0_1 = v_327_3;
          } else {
            v_327_3_0_0 = v_327_3;
          };
        };
        if (v_329_1) {
          v_329_2_1 = v_329_2;
          if (v_329_2_1) {
            v_329_3_1_1 = v_329_3;
          } else {
            v_329_3_1_0 = v_329_3;
          };
        } else {
          v_329_2_0 = v_329_2;
          if (v_329_2_0) {
            v_329_3_0_1 = v_329_3;
          } else {
            v_329_3_0_0 = v_329_3;
          };
        };
        if (s_5_St_13_Off_fail_1) {
          s_5_St_13_Off_fail_2_1 = s_5_St_13_Off_fail_2;
          if (s_5_St_13_Off_fail_2_1) {
            s_5_St_13_Off_fail_3_1_1 = s_5_St_13_Off_fail_3;
          } else {
            s_5_St_13_Off_fail_3_1_0 = s_5_St_13_Off_fail_3;
          };
        } else {
          s_5_St_13_Off_fail_2_0 = s_5_St_13_Off_fail_2;
          if (s_5_St_13_Off_fail_2_0) {
            s_5_St_13_Off_fail_3_0_1 = s_5_St_13_Off_fail_3;
          } else {
            s_5_St_13_Off_fail_3_0_0 = s_5_St_13_Off_fail_3;
          };
        };
      };
      v_701 = v_695;
      v_702 = v_696;
      v_703 = v_697;
      v_709 = v_708;
    };
    s_5_1 = v_701;
    s_5_2 = v_702;
    s_5_3 = v_703;
    r_5 = v_709;
  };
  ck_23_1 = s_5_1;
  ck_23_2 = s_5_2;
  ck_23_3 = s_5_3;
  if (ck_23_1) {
    ck_23_2_1 = ck_23_2;
    if (ck_23_2_1) {
      ck_23_3_1_1 = ck_23_3;
      if (ck_23_3_1_1) {
        air_status_1_St_13_Max = 2;
        nr_5_St_13_Max = false;
        ns_5_St_13_Max_1 = true;
        ns_5_St_13_Max_2 = true;
        ns_5_St_13_Max_3 = true;
        v_653 = air_status_1_St_13_Max;
        v_677 = nr_5_St_13_Max;
        v_659 = ns_5_St_13_Max_1;
        v_660 = ns_5_St_13_Max_2;
        v_661 = ns_5_St_13_Max_3;
      } else {
        air_status_1_St_13_Max_fail = 5;
        v_653 = air_status_1_St_13_Max_fail;
        nr_5_St_13_Max_fail = false;
        v_677 = nr_5_St_13_Max_fail;
        ns_5_St_13_Max_fail_1 = true;
        v_659 = ns_5_St_13_Max_fail_1;
        ns_5_St_13_Max_fail_2 = true;
        v_660 = ns_5_St_13_Max_fail_2;
        ns_5_St_13_Max_fail_3 = false;
        v_661 = ns_5_St_13_Max_fail_3;
      };
      v_655 = v_653;
      v_671 = v_659;
      v_672 = v_660;
      v_673 = v_661;
      v_679 = v_677;
      if (ck_23_3_1_1) {
        if (ns_5_St_13_Max_1) {
          ns_5_St_13_Max_2_1 = ns_5_St_13_Max_2;
          if (ns_5_St_13_Max_2_1) {
            ns_5_St_13_Max_3_1_1 = ns_5_St_13_Max_3;
          } else {
            ns_5_St_13_Max_3_1_0 = ns_5_St_13_Max_3;
          };
        } else {
          ns_5_St_13_Max_2_0 = ns_5_St_13_Max_2;
          if (ns_5_St_13_Max_2_0) {
            ns_5_St_13_Max_3_0_1 = ns_5_St_13_Max_3;
          } else {
            ns_5_St_13_Max_3_0_0 = ns_5_St_13_Max_3;
          };
        };
      } else {
        if (ns_5_St_13_Max_fail_1) {
          ns_5_St_13_Max_fail_2_1 = ns_5_St_13_Max_fail_2;
          if (ns_5_St_13_Max_fail_2_1) {
            ns_5_St_13_Max_fail_3_1_1 = ns_5_St_13_Max_fail_3;
          } else {
            ns_5_St_13_Max_fail_3_1_0 = ns_5_St_13_Max_fail_3;
          };
        } else {
          ns_5_St_13_Max_fail_2_0 = ns_5_St_13_Max_fail_2;
          if (ns_5_St_13_Max_fail_2_0) {
            ns_5_St_13_Max_fail_3_0_1 = ns_5_St_13_Max_fail_3;
          } else {
            ns_5_St_13_Max_fail_3_0_0 = ns_5_St_13_Max_fail_3;
          };
        };
      };
    } else {
      ck_23_3_1_0 = ck_23_3;
      if (ck_23_3_1_0) {
        v_654 = 0;
        v_678 = true;
        v_662 = true;
        v_663 = true;
        v_664 = true;
      } else {
        air_status_1_St_13_Min = 1;
        v_654 = air_status_1_St_13_Min;
        nr_5_St_13_Min = false;
        v_678 = nr_5_St_13_Min;
        ns_5_St_13_Min_1 = true;
        v_662 = ns_5_St_13_Min_1;
        ns_5_St_13_Min_2 = false;
        v_663 = ns_5_St_13_Min_2;
        ns_5_St_13_Min_3 = false;
        v_664 = ns_5_St_13_Min_3;
        if (ns_5_St_13_Min_1) {
          ns_5_St_13_Min_2_1 = ns_5_St_13_Min_2;
          if (ns_5_St_13_Min_2_1) {
            ns_5_St_13_Min_3_1_1 = ns_5_St_13_Min_3;
          } else {
            ns_5_St_13_Min_3_1_0 = ns_5_St_13_Min_3;
          };
        } else {
          ns_5_St_13_Min_2_0 = ns_5_St_13_Min_2;
          if (ns_5_St_13_Min_2_0) {
            ns_5_St_13_Min_3_0_1 = ns_5_St_13_Min_3;
          } else {
            ns_5_St_13_Min_3_0_0 = ns_5_St_13_Min_3;
          };
        };
      };
      v_655 = v_654;
      v_671 = v_662;
      v_672 = v_663;
      v_673 = v_664;
      v_679 = v_678;
    };
    air_status_1 = v_655;
    ns_5_1 = v_671;
    ns_5_2 = v_672;
    ns_5_3 = v_673;
    nr_5 = v_679;
  } else {
    ck_23_2_0 = ck_23_2;
    if (ck_23_2_0) {
      ck_23_3_0_1 = ck_23_3;
      if (ck_23_3_0_1) {
        air_status_1_St_13_Min_fail = 4;
        v_656 = air_status_1_St_13_Min_fail;
        nr_5_St_13_Min_fail = false;
        v_680 = nr_5_St_13_Min_fail;
        ns_5_St_13_Min_fail_1 = false;
        v_665 = ns_5_St_13_Min_fail_1;
        ns_5_St_13_Min_fail_2 = true;
        v_666 = ns_5_St_13_Min_fail_2;
        ns_5_St_13_Min_fail_3 = true;
        v_667 = ns_5_St_13_Min_fail_3;
      } else {
        air_status_1_St_13_Off = 0;
        nr_5_St_13_Off = false;
        ns_5_St_13_Off_1 = false;
        ns_5_St_13_Off_2 = true;
        ns_5_St_13_Off_3 = false;
        v_656 = air_status_1_St_13_Off;
        v_680 = nr_5_St_13_Off;
        v_665 = ns_5_St_13_Off_1;
        v_666 = ns_5_St_13_Off_2;
        v_667 = ns_5_St_13_Off_3;
      };
      v_658 = v_656;
      v_674 = v_665;
      v_675 = v_666;
      v_676 = v_667;
      v_682 = v_680;
    } else {
      ck_23_3_0_0 = ck_23_3;
      if (ck_23_3_0_0) {
        v_657 = 0;
        v_681 = true;
        v_668 = true;
        v_669 = true;
        v_670 = true;
      } else {
        air_status_1_St_13_Off_fail = 3;
        v_657 = air_status_1_St_13_Off_fail;
        nr_5_St_13_Off_fail = false;
        v_681 = nr_5_St_13_Off_fail;
        ns_5_St_13_Off_fail_1 = false;
        v_668 = ns_5_St_13_Off_fail_1;
        ns_5_St_13_Off_fail_2 = false;
        v_669 = ns_5_St_13_Off_fail_2;
        ns_5_St_13_Off_fail_3 = false;
        v_670 = ns_5_St_13_Off_fail_3;
        if (ns_5_St_13_Off_fail_1) {
          ns_5_St_13_Off_fail_2_1 = ns_5_St_13_Off_fail_2;
          if (ns_5_St_13_Off_fail_2_1) {
            ns_5_St_13_Off_fail_3_1_1 = ns_5_St_13_Off_fail_3;
          } else {
            ns_5_St_13_Off_fail_3_1_0 = ns_5_St_13_Off_fail_3;
          };
        } else {
          ns_5_St_13_Off_fail_2_0 = ns_5_St_13_Off_fail_2;
          if (ns_5_St_13_Off_fail_2_0) {
            ns_5_St_13_Off_fail_3_0_1 = ns_5_St_13_Off_fail_3;
          } else {
            ns_5_St_13_Off_fail_3_0_0 = ns_5_St_13_Off_fail_3;
          };
        };
      };
      v_658 = v_657;
      v_674 = v_668;
      v_675 = v_669;
      v_676 = v_670;
      v_682 = v_681;
    };
    air_status_1 = v_658;
    ns_5_1 = v_674;
    ns_5_2 = v_675;
    ns_5_3 = v_676;
    nr_5 = v_682;
  };
  _out->air_status = air_status_1;
  v_109 = (_out->air_status>=3);
  v_125 = (_out->air_status>=3);
  v_134 = (_out->air_status>=3);
  v_146 = (_out->air_status>=3);
  v_164 = (_out->air_status<=2);
  v_167 = (_out->air_status==1);
  v_175 = (_out->air_status<=2);
  v_178 = (_out->air_status==2);
  v_222 = (_out->air_status==1);
  v_223 = !(v_222);
  v_224 = (_out->air_status==2);
  v_225 = !(v_224);
  v_226 = (v_223&&v_225);
  v_229 = (v_226&&v_228);
  v_232 = (v_229&&v_231);
  if (ns_5_1) {
    ns_5_2_1 = ns_5_2;
    if (ns_5_2_1) {
      ns_5_3_1_1 = ns_5_3;
    } else {
      ns_5_3_1_0 = ns_5_3;
    };
  } else {
    ns_5_2_0 = ns_5_2;
    if (ns_5_2_0) {
      ns_5_3_0_1 = ns_5_3;
    } else {
      ns_5_3_0_0 = ns_5_3;
    };
  };
  if (!(ck_23_1)) {
    if (ck_23_2_0) {
      if (ck_23_3_0_1) {
        if (ns_5_St_13_Min_fail_1) {
          ns_5_St_13_Min_fail_2_1 = ns_5_St_13_Min_fail_2;
          if (ns_5_St_13_Min_fail_2_1) {
            ns_5_St_13_Min_fail_3_1_1 = ns_5_St_13_Min_fail_3;
          } else {
            ns_5_St_13_Min_fail_3_1_0 = ns_5_St_13_Min_fail_3;
          };
        } else {
          ns_5_St_13_Min_fail_2_0 = ns_5_St_13_Min_fail_2;
          if (ns_5_St_13_Min_fail_2_0) {
            ns_5_St_13_Min_fail_3_0_1 = ns_5_St_13_Min_fail_3;
          } else {
            ns_5_St_13_Min_fail_3_0_0 = ns_5_St_13_Min_fail_3;
          };
        };
      } else {
        if (ns_5_St_13_Off_1) {
          ns_5_St_13_Off_2_1 = ns_5_St_13_Off_2;
          if (ns_5_St_13_Off_2_1) {
            ns_5_St_13_Off_3_1_1 = ns_5_St_13_Off_3;
          } else {
            ns_5_St_13_Off_3_1_0 = ns_5_St_13_Off_3;
          };
        } else {
          ns_5_St_13_Off_2_0 = ns_5_St_13_Off_2;
          if (ns_5_St_13_Off_2_0) {
            ns_5_St_13_Off_3_0_1 = ns_5_St_13_Off_3;
          } else {
            ns_5_St_13_Off_3_0_0 = ns_5_St_13_Off_3;
          };
        };
      };
    };
  };
  if (s_5_1) {
    s_5_2_1 = s_5_2;
    if (s_5_2_1) {
      s_5_3_1_1 = s_5_3;
    } else {
      s_5_3_1_0 = s_5_3;
    };
  } else {
    s_5_2_0 = s_5_2;
    if (s_5_2_0) {
      s_5_3_0_1 = s_5_3;
    } else {
      s_5_3_0_0 = s_5_3;
    };
  };
  if (!(ck_22_1)) {
    if (ck_22_2_0) {
      if (ck_22_3_0_1) {
        if (v_316_1) {
          v_316_2_1 = v_316_2;
          if (v_316_2_1) {
            v_316_3_1_1 = v_316_3;
          } else {
            v_316_3_1_0 = v_316_3;
          };
        } else {
          v_316_2_0 = v_316_2;
          if (v_316_2_0) {
            v_316_3_0_1 = v_316_3;
          } else {
            v_316_3_0_0 = v_316_3;
          };
        };
        if (v_318_1) {
          v_318_2_1 = v_318_2;
          if (v_318_2_1) {
            v_318_3_1_1 = v_318_3;
          } else {
            v_318_3_1_0 = v_318_3;
          };
        } else {
          v_318_2_0 = v_318_2;
          if (v_318_2_0) {
            v_318_3_0_1 = v_318_3;
          } else {
            v_318_3_0_0 = v_318_3;
          };
        };
        if (s_5_St_13_Min_fail_1) {
          s_5_St_13_Min_fail_2_1 = s_5_St_13_Min_fail_2;
          if (s_5_St_13_Min_fail_2_1) {
            s_5_St_13_Min_fail_3_1_1 = s_5_St_13_Min_fail_3;
          } else {
            s_5_St_13_Min_fail_3_1_0 = s_5_St_13_Min_fail_3;
          };
        } else {
          s_5_St_13_Min_fail_2_0 = s_5_St_13_Min_fail_2;
          if (s_5_St_13_Min_fail_2_0) {
            s_5_St_13_Min_fail_3_0_1 = s_5_St_13_Min_fail_3;
          } else {
            s_5_St_13_Min_fail_3_0_0 = s_5_St_13_Min_fail_3;
          };
        };
      } else {
        if (s_5_St_13_Off_1) {
          s_5_St_13_Off_2_1 = s_5_St_13_Off_2;
          if (s_5_St_13_Off_2_1) {
            s_5_St_13_Off_3_1_1 = s_5_St_13_Off_3;
          } else {
            s_5_St_13_Off_3_1_0 = s_5_St_13_Off_3;
          };
        } else {
          s_5_St_13_Off_2_0 = s_5_St_13_Off_2;
          if (s_5_St_13_Off_2_0) {
            s_5_St_13_Off_3_0_1 = s_5_St_13_Off_3;
          } else {
            s_5_St_13_Off_3_0_0 = s_5_St_13_Off_3;
          };
        };
      };
    };
  };
  if (ck_20_1) {
    ck_20_2_1 = ck_20_2;
    if (ck_20_2_1) {
      if (failed_recovered_3) {
        v_301 = true;
        v_300_1 = true;
        v_300_2 = false;
      } else {
        v_301 = self->pnr_6;
        v_300_1 = true;
        v_300_2 = true;
      };
      v_299 = !(c_3);
      if (v_299) {
        r_6_St_14_Closed = true;
        s_6_St_14_Closed_1 = false;
        s_6_St_14_Closed_2 = true;
      } else {
        r_6_St_14_Closed = v_301;
        s_6_St_14_Closed_1 = v_300_1;
        s_6_St_14_Closed_2 = v_300_2;
      };
      v_724 = r_6_St_14_Closed;
      v_720 = s_6_St_14_Closed_1;
      v_721 = s_6_St_14_Closed_2;
      if (v_300_1) {
        v_300_2_1 = v_300_2;
      } else {
        v_300_2_0 = v_300_2;
      };
      if (s_6_St_14_Closed_1) {
        s_6_St_14_Closed_2_1 = s_6_St_14_Closed_2;
      } else {
        s_6_St_14_Closed_2_0 = s_6_St_14_Closed_2;
      };
    } else {
      if (failed_recovered_3) {
        v_298 = true;
        v_297_1 = true;
        v_297_2 = true;
      } else {
        v_298 = self->pnr_6;
        v_297_1 = true;
        v_297_2 = false;
      };
      v_296 = !(c_3);
      if (v_296) {
        r_6_St_14_Closed_fail = true;
      } else {
        r_6_St_14_Closed_fail = v_298;
      };
      v_724 = r_6_St_14_Closed_fail;
      if (v_296) {
        s_6_St_14_Closed_fail_1 = false;
      } else {
        s_6_St_14_Closed_fail_1 = v_297_1;
      };
      v_720 = s_6_St_14_Closed_fail_1;
      if (v_296) {
        s_6_St_14_Closed_fail_2 = false;
      } else {
        s_6_St_14_Closed_fail_2 = v_297_2;
      };
      v_721 = s_6_St_14_Closed_fail_2;
      if (v_297_1) {
        v_297_2_1 = v_297_2;
      } else {
        v_297_2_0 = v_297_2;
      };
      if (s_6_St_14_Closed_fail_1) {
        s_6_St_14_Closed_fail_2_1 = s_6_St_14_Closed_fail_2;
      } else {
        s_6_St_14_Closed_fail_2_0 = s_6_St_14_Closed_fail_2;
      };
    };
    s_6_1 = v_720;
    s_6_2 = v_721;
    r_6 = v_724;
  } else {
    ck_20_2_0 = ck_20_2;
    if (ck_20_2_0) {
      if (failed_recovered_3) {
        v_295 = true;
      } else {
        v_295 = self->pnr_6;
      };
      if (c_3) {
        r_6_St_14_Open = true;
      } else {
        r_6_St_14_Open = v_295;
      };
      if (failed_recovered_3) {
        v_294_1 = false;
      } else {
        v_294_1 = false;
      };
      if (c_3) {
        s_6_St_14_Open_1 = true;
      } else {
        s_6_St_14_Open_1 = v_294_1;
      };
      if (failed_recovered_3) {
        v_294_2 = false;
      } else {
        v_294_2 = true;
      };
      if (c_3) {
        s_6_St_14_Open_2 = true;
      } else {
        s_6_St_14_Open_2 = v_294_2;
      };
      v_725 = r_6_St_14_Open;
      v_722 = s_6_St_14_Open_1;
      v_723 = s_6_St_14_Open_2;
    } else {
      if (failed_recovered_3) {
        v_293 = true;
      } else {
        v_293 = self->pnr_6;
      };
      if (c_3) {
        r_6_St_14_Open_fail = true;
      } else {
        r_6_St_14_Open_fail = v_293;
      };
      v_725 = r_6_St_14_Open_fail;
      if (failed_recovered_3) {
        v_292_1 = false;
      } else {
        v_292_1 = false;
      };
      if (c_3) {
        s_6_St_14_Open_fail_1 = true;
      } else {
        s_6_St_14_Open_fail_1 = v_292_1;
      };
      v_722 = s_6_St_14_Open_fail_1;
      if (failed_recovered_3) {
        v_292_2 = true;
      } else {
        v_292_2 = false;
      };
      if (c_3) {
        s_6_St_14_Open_fail_2 = false;
      } else {
        s_6_St_14_Open_fail_2 = v_292_2;
      };
      v_723 = s_6_St_14_Open_fail_2;
    };
    s_6_1 = v_722;
    s_6_2 = v_723;
    r_6 = v_725;
  };
  ck_21_1 = s_6_1;
  ck_21_2 = s_6_2;
  if (ck_21_1) {
    ck_21_2_1 = ck_21_2;
    if (ck_21_2_1) {
      window_status_1_St_14_Closed = 0;
      nr_6_St_14_Closed = false;
      ns_6_St_14_Closed_1 = true;
      ns_6_St_14_Closed_2 = true;
      v_710 = window_status_1_St_14_Closed;
      v_716 = nr_6_St_14_Closed;
      v_712 = ns_6_St_14_Closed_1;
      v_713 = ns_6_St_14_Closed_2;
      if (ns_6_St_14_Closed_1) {
        ns_6_St_14_Closed_2_1 = ns_6_St_14_Closed_2;
      } else {
        ns_6_St_14_Closed_2_0 = ns_6_St_14_Closed_2;
      };
    } else {
      window_status_1_St_14_Closed_fail = 2;
      v_710 = window_status_1_St_14_Closed_fail;
      nr_6_St_14_Closed_fail = false;
      v_716 = nr_6_St_14_Closed_fail;
      ns_6_St_14_Closed_fail_1 = true;
      v_712 = ns_6_St_14_Closed_fail_1;
      ns_6_St_14_Closed_fail_2 = false;
      v_713 = ns_6_St_14_Closed_fail_2;
      if (ns_6_St_14_Closed_fail_1) {
        ns_6_St_14_Closed_fail_2_1 = ns_6_St_14_Closed_fail_2;
      } else {
        ns_6_St_14_Closed_fail_2_0 = ns_6_St_14_Closed_fail_2;
      };
    };
    window_status_1 = v_710;
    ns_6_1 = v_712;
    ns_6_2 = v_713;
    nr_6 = v_716;
  } else {
    ck_21_2_0 = ck_21_2;
    if (ck_21_2_0) {
      window_status_1_St_14_Open = 1;
      nr_6_St_14_Open = false;
      ns_6_St_14_Open_1 = false;
      ns_6_St_14_Open_2 = true;
      v_711 = window_status_1_St_14_Open;
      v_717 = nr_6_St_14_Open;
      v_714 = ns_6_St_14_Open_1;
      v_715 = ns_6_St_14_Open_2;
    } else {
      window_status_1_St_14_Open_fail = 3;
      v_711 = window_status_1_St_14_Open_fail;
      nr_6_St_14_Open_fail = false;
      v_717 = nr_6_St_14_Open_fail;
      ns_6_St_14_Open_fail_1 = false;
      v_714 = ns_6_St_14_Open_fail_1;
      ns_6_St_14_Open_fail_2 = false;
      v_715 = ns_6_St_14_Open_fail_2;
    };
    window_status_1 = v_711;
    ns_6_1 = v_714;
    ns_6_2 = v_715;
    nr_6 = v_717;
  };
  _out->window_status = window_status_1;
  v_113 = (_out->window_status<=1);
  v_119 = (_out->window_status==1);
  v_120 = (v_118&&v_119);
  v_127 = (_out->window_status>=2);
  v_141 = (_out->window_status==1);
  v_142 = !(v_141);
  v_150 = (_out->window_status<=1);
  v_156 = (_out->window_status==1);
  v_157 = (v_155&&v_156);
  v_171 = (_out->window_status==1);
  v_172 = !(v_171);
  v_239 = (_out->window_status==1);
  v_240 = !(v_239);
  if (ns_6_1) {
    ns_6_2_1 = ns_6_2;
  } else {
    ns_6_2_0 = ns_6_2;
  };
  if (!(ck_21_1)) {
    if (ck_21_2_0) {
      if (ns_6_St_14_Open_1) {
        ns_6_St_14_Open_2_1 = ns_6_St_14_Open_2;
      } else {
        ns_6_St_14_Open_2_0 = ns_6_St_14_Open_2;
      };
    } else {
      if (ns_6_St_14_Open_fail_1) {
        ns_6_St_14_Open_fail_2_1 = ns_6_St_14_Open_fail_2;
      } else {
        ns_6_St_14_Open_fail_2_0 = ns_6_St_14_Open_fail_2;
      };
    };
  };
  if (s_6_1) {
    s_6_2_1 = s_6_2;
  } else {
    s_6_2_0 = s_6_2;
  };
  if (!(ck_20_1)) {
    if (ck_20_2_0) {
      if (v_294_1) {
        v_294_2_1 = v_294_2;
      } else {
        v_294_2_0 = v_294_2;
      };
      if (s_6_St_14_Open_1) {
        s_6_St_14_Open_2_1 = s_6_St_14_Open_2;
      } else {
        s_6_St_14_Open_2_0 = s_6_St_14_Open_2;
      };
    } else {
      if (v_292_1) {
        v_292_2_1 = v_292_2;
      } else {
        v_292_2_0 = v_292_2;
      };
      if (s_6_St_14_Open_fail_1) {
        s_6_St_14_Open_fail_2_1 = s_6_St_14_Open_fail_2;
      } else {
        s_6_St_14_Open_fail_2_0 = s_6_St_14_Open_fail_2;
      };
    };
  };
  if (ck_18_1) {
    ck_18_2_1 = ck_18_2;
    if (ck_18_2_1) {
      if (failed_recovered_2) {
        v_291 = true;
        v_290_1 = false;
        v_290_2 = false;
      } else {
        v_291 = self->pnr_7;
        v_290_1 = true;
        v_290_2 = true;
      };
      v_289 = !(c_2);
      if (v_289) {
        r_7_St_15_Locked = true;
        s_7_St_15_Locked_1 = false;
        s_7_St_15_Locked_2 = true;
      } else {
        r_7_St_15_Locked = v_291;
        s_7_St_15_Locked_1 = v_290_1;
        s_7_St_15_Locked_2 = v_290_2;
      };
      v_740 = r_7_St_15_Locked;
      v_736 = s_7_St_15_Locked_1;
      v_737 = s_7_St_15_Locked_2;
      if (v_290_1) {
        v_290_2_1 = v_290_2;
      } else {
        v_290_2_0 = v_290_2;
      };
      if (s_7_St_15_Locked_1) {
        s_7_St_15_Locked_2_1 = s_7_St_15_Locked_2;
      } else {
        s_7_St_15_Locked_2_0 = s_7_St_15_Locked_2;
      };
    } else {
      if (failed_recovered_2) {
        v_288 = true;
        v_287_1 = true;
        v_287_2 = true;
      } else {
        v_288 = self->pnr_7;
        v_287_1 = true;
        v_287_2 = false;
      };
      v_286 = !(c_2);
      if (v_286) {
        r_7_St_15_Locked_fail = true;
      } else {
        r_7_St_15_Locked_fail = v_288;
      };
      v_740 = r_7_St_15_Locked_fail;
      if (v_286) {
        s_7_St_15_Locked_fail_1 = false;
      } else {
        s_7_St_15_Locked_fail_1 = v_287_1;
      };
      v_736 = s_7_St_15_Locked_fail_1;
      if (v_286) {
        s_7_St_15_Locked_fail_2 = false;
      } else {
        s_7_St_15_Locked_fail_2 = v_287_2;
      };
      v_737 = s_7_St_15_Locked_fail_2;
      if (v_287_1) {
        v_287_2_1 = v_287_2;
      } else {
        v_287_2_0 = v_287_2;
      };
      if (s_7_St_15_Locked_fail_1) {
        s_7_St_15_Locked_fail_2_1 = s_7_St_15_Locked_fail_2;
      } else {
        s_7_St_15_Locked_fail_2_0 = s_7_St_15_Locked_fail_2;
      };
    };
    s_7_1 = v_736;
    s_7_2 = v_737;
    r_7 = v_740;
  } else {
    ck_18_2_0 = ck_18_2;
    if (ck_18_2_0) {
      if (failed_recovered_2) {
        v_285 = true;
      } else {
        v_285 = self->pnr_7;
      };
      if (c_2) {
        r_7_St_15_Open = true;
      } else {
        r_7_St_15_Open = v_285;
      };
      if (failed_recovered_2) {
        v_284_1 = false;
      } else {
        v_284_1 = false;
      };
      if (c_2) {
        s_7_St_15_Open_1 = true;
      } else {
        s_7_St_15_Open_1 = v_284_1;
      };
      if (failed_recovered_2) {
        v_284_2 = false;
      } else {
        v_284_2 = true;
      };
      if (c_2) {
        s_7_St_15_Open_2 = true;
      } else {
        s_7_St_15_Open_2 = v_284_2;
      };
      v_741 = r_7_St_15_Open;
      v_738 = s_7_St_15_Open_1;
      v_739 = s_7_St_15_Open_2;
    } else {
      if (failed_recovered_2) {
        v_283 = true;
      } else {
        v_283 = self->pnr_7;
      };
      if (c_2) {
        r_7_St_15_Open_fail = true;
      } else {
        r_7_St_15_Open_fail = v_283;
      };
      v_741 = r_7_St_15_Open_fail;
      if (failed_recovered_2) {
        v_282_1 = false;
      } else {
        v_282_1 = false;
      };
      if (c_2) {
        s_7_St_15_Open_fail_1 = true;
      } else {
        s_7_St_15_Open_fail_1 = v_282_1;
      };
      v_738 = s_7_St_15_Open_fail_1;
      if (failed_recovered_2) {
        v_282_2 = true;
      } else {
        v_282_2 = false;
      };
      if (c_2) {
        s_7_St_15_Open_fail_2 = false;
      } else {
        s_7_St_15_Open_fail_2 = v_282_2;
      };
      v_739 = s_7_St_15_Open_fail_2;
    };
    s_7_1 = v_738;
    s_7_2 = v_739;
    r_7 = v_741;
  };
  ck_19_1 = s_7_1;
  ck_19_2 = s_7_2;
  if (ck_19_1) {
    ck_19_2_1 = ck_19_2;
    if (ck_19_2_1) {
      closet_status_1_St_15_Locked = 0;
      nr_7_St_15_Locked = false;
      ns_7_St_15_Locked_1 = true;
      ns_7_St_15_Locked_2 = true;
      v_726 = closet_status_1_St_15_Locked;
      v_732 = nr_7_St_15_Locked;
      v_728 = ns_7_St_15_Locked_1;
      v_729 = ns_7_St_15_Locked_2;
      if (ns_7_St_15_Locked_1) {
        ns_7_St_15_Locked_2_1 = ns_7_St_15_Locked_2;
      } else {
        ns_7_St_15_Locked_2_0 = ns_7_St_15_Locked_2;
      };
    } else {
      closet_status_1_St_15_Locked_fail = 2;
      v_726 = closet_status_1_St_15_Locked_fail;
      nr_7_St_15_Locked_fail = false;
      v_732 = nr_7_St_15_Locked_fail;
      ns_7_St_15_Locked_fail_1 = true;
      v_728 = ns_7_St_15_Locked_fail_1;
      ns_7_St_15_Locked_fail_2 = false;
      v_729 = ns_7_St_15_Locked_fail_2;
      if (ns_7_St_15_Locked_fail_1) {
        ns_7_St_15_Locked_fail_2_1 = ns_7_St_15_Locked_fail_2;
      } else {
        ns_7_St_15_Locked_fail_2_0 = ns_7_St_15_Locked_fail_2;
      };
    };
    closet_status_1 = v_726;
    ns_7_1 = v_728;
    ns_7_2 = v_729;
    nr_7 = v_732;
  } else {
    ck_19_2_0 = ck_19_2;
    if (ck_19_2_0) {
      closet_status_1_St_15_Open = 1;
      nr_7_St_15_Open = false;
      ns_7_St_15_Open_1 = false;
      ns_7_St_15_Open_2 = true;
      v_727 = closet_status_1_St_15_Open;
      v_733 = nr_7_St_15_Open;
      v_730 = ns_7_St_15_Open_1;
      v_731 = ns_7_St_15_Open_2;
    } else {
      closet_status_1_St_15_Open_fail = 3;
      v_727 = closet_status_1_St_15_Open_fail;
      nr_7_St_15_Open_fail = false;
      v_733 = nr_7_St_15_Open_fail;
      ns_7_St_15_Open_fail_1 = false;
      v_730 = ns_7_St_15_Open_fail_1;
      ns_7_St_15_Open_fail_2 = false;
      v_731 = ns_7_St_15_Open_fail_2;
    };
    closet_status_1 = v_727;
    ns_7_1 = v_730;
    ns_7_2 = v_731;
    nr_7 = v_733;
  };
  _out->closet_status = closet_status_1;
  v_91 = (_out->closet_status<=1);
  v_94 = (_out->closet_status==0);
  v_95 = (_out->closet_status<=1);
  v_98 = (_out->closet_status==1);
  v_242 = (_out->closet_status==1);
  v_243 = !(v_242);
  if (ns_7_1) {
    ns_7_2_1 = ns_7_2;
  } else {
    ns_7_2_0 = ns_7_2;
  };
  if (!(ck_19_1)) {
    if (ck_19_2_0) {
      if (ns_7_St_15_Open_1) {
        ns_7_St_15_Open_2_1 = ns_7_St_15_Open_2;
      } else {
        ns_7_St_15_Open_2_0 = ns_7_St_15_Open_2;
      };
    } else {
      if (ns_7_St_15_Open_fail_1) {
        ns_7_St_15_Open_fail_2_1 = ns_7_St_15_Open_fail_2;
      } else {
        ns_7_St_15_Open_fail_2_0 = ns_7_St_15_Open_fail_2;
      };
    };
  };
  if (s_7_1) {
    s_7_2_1 = s_7_2;
  } else {
    s_7_2_0 = s_7_2;
  };
  if (!(ck_18_1)) {
    if (ck_18_2_0) {
      if (v_284_1) {
        v_284_2_1 = v_284_2;
      } else {
        v_284_2_0 = v_284_2;
      };
      if (s_7_St_15_Open_1) {
        s_7_St_15_Open_2_1 = s_7_St_15_Open_2;
      } else {
        s_7_St_15_Open_2_0 = s_7_St_15_Open_2;
      };
    } else {
      if (v_282_1) {
        v_282_2_1 = v_282_2;
      } else {
        v_282_2_0 = v_282_2;
      };
      if (s_7_St_15_Open_fail_1) {
        s_7_St_15_Open_fail_2_1 = s_7_St_15_Open_fail_2;
      } else {
        s_7_St_15_Open_fail_2_0 = s_7_St_15_Open_fail_2;
      };
    };
  };
  if (ck_16_1) {
    ck_16_2_1 = ck_16_2;
    if (ck_16_2_1) {
      if (failed_recovered_1) {
        v_281 = true;
        v_280_1 = true;
        v_280_2 = false;
      } else {
        v_281 = self->pnr_8;
        v_280_1 = true;
        v_280_2 = true;
      };
      v_279 = !(c_1);
      if (v_279) {
        r_8_St_16_Closed = true;
        s_8_St_16_Closed_1 = false;
        s_8_St_16_Closed_2 = true;
      } else {
        r_8_St_16_Closed = v_281;
        s_8_St_16_Closed_1 = v_280_1;
        s_8_St_16_Closed_2 = v_280_2;
      };
      v_756 = r_8_St_16_Closed;
      v_752 = s_8_St_16_Closed_1;
      v_753 = s_8_St_16_Closed_2;
      if (v_280_1) {
        v_280_2_1 = v_280_2;
      } else {
        v_280_2_0 = v_280_2;
      };
      if (s_8_St_16_Closed_1) {
        s_8_St_16_Closed_2_1 = s_8_St_16_Closed_2;
      } else {
        s_8_St_16_Closed_2_0 = s_8_St_16_Closed_2;
      };
    } else {
      if (failed_recovered_1) {
        v_278 = true;
        v_277_1 = true;
        v_277_2 = true;
      } else {
        v_278 = self->pnr_8;
        v_277_1 = true;
        v_277_2 = false;
      };
      v_276 = !(c_1);
      if (v_276) {
        r_8_St_16_Closed_fail = true;
      } else {
        r_8_St_16_Closed_fail = v_278;
      };
      v_756 = r_8_St_16_Closed_fail;
      if (v_276) {
        s_8_St_16_Closed_fail_1 = false;
      } else {
        s_8_St_16_Closed_fail_1 = v_277_1;
      };
      v_752 = s_8_St_16_Closed_fail_1;
      if (v_276) {
        s_8_St_16_Closed_fail_2 = false;
      } else {
        s_8_St_16_Closed_fail_2 = v_277_2;
      };
      v_753 = s_8_St_16_Closed_fail_2;
      if (v_277_1) {
        v_277_2_1 = v_277_2;
      } else {
        v_277_2_0 = v_277_2;
      };
      if (s_8_St_16_Closed_fail_1) {
        s_8_St_16_Closed_fail_2_1 = s_8_St_16_Closed_fail_2;
      } else {
        s_8_St_16_Closed_fail_2_0 = s_8_St_16_Closed_fail_2;
      };
    };
    s_8_1 = v_752;
    s_8_2 = v_753;
    r_8 = v_756;
  } else {
    ck_16_2_0 = ck_16_2;
    if (ck_16_2_0) {
      if (failed_recovered_1) {
        v_275 = true;
        v_274_1 = false;
        v_274_2 = false;
      } else {
        v_275 = self->pnr_8;
        v_274_1 = false;
        v_274_2 = true;
      };
      v_273 = !(c_1);
      if (v_273) {
        r_8_St_16_Open = true;
        s_8_St_16_Open_1 = true;
        s_8_St_16_Open_2 = true;
      } else {
        r_8_St_16_Open = v_275;
        s_8_St_16_Open_1 = v_274_1;
        s_8_St_16_Open_2 = v_274_2;
      };
      v_757 = r_8_St_16_Open;
      v_754 = s_8_St_16_Open_1;
      v_755 = s_8_St_16_Open_2;
    } else {
      if (failed_recovered_1) {
        v_272 = true;
        v_271_1 = true;
        v_271_2 = false;
      } else {
        v_272 = self->pnr_8;
        v_271_1 = false;
        v_271_2 = false;
      };
      v_270 = !(c_1);
      if (v_270) {
        r_8_St_16_Open_fail = true;
      } else {
        r_8_St_16_Open_fail = v_272;
      };
      v_757 = r_8_St_16_Open_fail;
      if (v_270) {
        s_8_St_16_Open_fail_1 = false;
      } else {
        s_8_St_16_Open_fail_1 = v_271_1;
      };
      v_754 = s_8_St_16_Open_fail_1;
      if (v_270) {
        s_8_St_16_Open_fail_2 = false;
      } else {
        s_8_St_16_Open_fail_2 = v_271_2;
      };
      v_755 = s_8_St_16_Open_fail_2;
    };
    s_8_1 = v_754;
    s_8_2 = v_755;
    r_8 = v_757;
  };
  ck_17_1 = s_8_1;
  ck_17_2 = s_8_2;
  if (ck_17_1) {
    ck_17_2_1 = ck_17_2;
    if (ck_17_2_1) {
      door_status_1_St_16_Closed = 0;
      nr_8_St_16_Closed = false;
      ns_8_St_16_Closed_1 = true;
      ns_8_St_16_Closed_2 = true;
      v_742 = door_status_1_St_16_Closed;
      v_748 = nr_8_St_16_Closed;
      v_744 = ns_8_St_16_Closed_1;
      v_745 = ns_8_St_16_Closed_2;
      if (ns_8_St_16_Closed_1) {
        ns_8_St_16_Closed_2_1 = ns_8_St_16_Closed_2;
      } else {
        ns_8_St_16_Closed_2_0 = ns_8_St_16_Closed_2;
      };
    } else {
      door_status_1_St_16_Closed_fail = 2;
      v_742 = door_status_1_St_16_Closed_fail;
      nr_8_St_16_Closed_fail = false;
      v_748 = nr_8_St_16_Closed_fail;
      ns_8_St_16_Closed_fail_1 = true;
      v_744 = ns_8_St_16_Closed_fail_1;
      ns_8_St_16_Closed_fail_2 = false;
      v_745 = ns_8_St_16_Closed_fail_2;
      if (ns_8_St_16_Closed_fail_1) {
        ns_8_St_16_Closed_fail_2_1 = ns_8_St_16_Closed_fail_2;
      } else {
        ns_8_St_16_Closed_fail_2_0 = ns_8_St_16_Closed_fail_2;
      };
    };
    door_status_1 = v_742;
    ns_8_1 = v_744;
    ns_8_2 = v_745;
    nr_8 = v_748;
  } else {
    ck_17_2_0 = ck_17_2;
    if (ck_17_2_0) {
      door_status_1_St_16_Open = 1;
      nr_8_St_16_Open = false;
      ns_8_St_16_Open_1 = false;
      ns_8_St_16_Open_2 = true;
      v_743 = door_status_1_St_16_Open;
      v_749 = nr_8_St_16_Open;
      v_746 = ns_8_St_16_Open_1;
      v_747 = ns_8_St_16_Open_2;
    } else {
      door_status_1_St_16_Open_fail = 3;
      v_743 = door_status_1_St_16_Open_fail;
      nr_8_St_16_Open_fail = false;
      v_749 = nr_8_St_16_Open_fail;
      ns_8_St_16_Open_fail_1 = false;
      v_746 = ns_8_St_16_Open_fail_1;
      ns_8_St_16_Open_fail_2 = false;
      v_747 = ns_8_St_16_Open_fail_2;
    };
    door_status_1 = v_743;
    ns_8_1 = v_746;
    ns_8_2 = v_747;
    nr_8 = v_749;
  };
  _out->door_status = door_status_1;
  v_115 = (_out->door_status>=2);
  v_121 = (_out->door_status==1);
  v_122 = !(v_121);
  v_123 = (v_120&&v_122);
  v_129 = (_out->door_status<=1);
  v_132 = (_out->door_status==1);
  v_138 = (_out->door_status<=1);
  v_143 = (_out->door_status==1);
  v_144 = (v_142&&v_143);
  v_152 = (_out->door_status<=1);
  v_158 = (_out->door_status==1);
  v_159 = (v_157&&v_158);
  v_168 = (_out->door_status==1);
  v_169 = !(v_168);
  v_170 = (v_167&&v_169);
  v_173 = (v_170&&v_172);
  v_233 = (_out->door_status==1);
  v_234 = !(v_233);
  v_235 = (v_232&&v_234);
  if (ns_8_1) {
    ns_8_2_1 = ns_8_2;
  } else {
    ns_8_2_0 = ns_8_2;
  };
  if (!(ck_17_1)) {
    if (ck_17_2_0) {
      if (ns_8_St_16_Open_1) {
        ns_8_St_16_Open_2_1 = ns_8_St_16_Open_2;
      } else {
        ns_8_St_16_Open_2_0 = ns_8_St_16_Open_2;
      };
    } else {
      if (ns_8_St_16_Open_fail_1) {
        ns_8_St_16_Open_fail_2_1 = ns_8_St_16_Open_fail_2;
      } else {
        ns_8_St_16_Open_fail_2_0 = ns_8_St_16_Open_fail_2;
      };
    };
  };
  if (s_8_1) {
    s_8_2_1 = s_8_2;
  } else {
    s_8_2_0 = s_8_2;
  };
  if (!(ck_16_1)) {
    if (ck_16_2_0) {
      if (v_274_1) {
        v_274_2_1 = v_274_2;
      } else {
        v_274_2_0 = v_274_2;
      };
      if (s_8_St_16_Open_1) {
        s_8_St_16_Open_2_1 = s_8_St_16_Open_2;
      } else {
        s_8_St_16_Open_2_0 = s_8_St_16_Open_2;
      };
    } else {
      if (v_271_1) {
        v_271_2_1 = v_271_2;
      } else {
        v_271_2_0 = v_271_2;
      };
      if (s_8_St_16_Open_fail_1) {
        s_8_St_16_Open_fail_2_1 = s_8_St_16_Open_fail_2;
      } else {
        s_8_St_16_Open_fail_2_0 = s_8_St_16_Open_fail_2;
      };
    };
  };
  if (ck_14_1) {
    ck_14_2_1 = ck_14_2;
    if (ck_14_2_1) {
      if (failed_recovered) {
        v_269 = true;
      } else {
        v_269 = self->pnr_9;
      };
      if (c) {
        r_9_St_17_Off = true;
      } else {
        r_9_St_17_Off = v_269;
      };
      if (failed_recovered) {
        v_268_1 = true;
      } else {
        v_268_1 = true;
      };
      if (c) {
        s_9_St_17_Off_1 = false;
      } else {
        s_9_St_17_Off_1 = v_268_1;
      };
      if (failed_recovered) {
        v_268_2 = false;
      } else {
        v_268_2 = true;
      };
      if (c) {
        s_9_St_17_Off_2 = true;
      } else {
        s_9_St_17_Off_2 = v_268_2;
      };
      v_772 = r_9_St_17_Off;
      v_768 = s_9_St_17_Off_1;
      v_769 = s_9_St_17_Off_2;
      if (v_268_1) {
        v_268_2_1 = v_268_2;
      } else {
        v_268_2_0 = v_268_2;
      };
      if (s_9_St_17_Off_1) {
        s_9_St_17_Off_2_1 = s_9_St_17_Off_2;
      } else {
        s_9_St_17_Off_2_0 = s_9_St_17_Off_2;
      };
    } else {
      if (failed_recovered) {
        v_267 = true;
      } else {
        v_267 = self->pnr_9;
      };
      if (c) {
        r_9_St_17_Off_fail = true;
      } else {
        r_9_St_17_Off_fail = v_267;
      };
      v_772 = r_9_St_17_Off_fail;
      if (failed_recovered) {
        v_266_1 = true;
      } else {
        v_266_1 = true;
      };
      if (c) {
        s_9_St_17_Off_fail_1 = false;
      } else {
        s_9_St_17_Off_fail_1 = v_266_1;
      };
      v_768 = s_9_St_17_Off_fail_1;
      if (failed_recovered) {
        v_266_2 = true;
      } else {
        v_266_2 = false;
      };
      if (c) {
        s_9_St_17_Off_fail_2 = false;
      } else {
        s_9_St_17_Off_fail_2 = v_266_2;
      };
      v_769 = s_9_St_17_Off_fail_2;
      if (v_266_1) {
        v_266_2_1 = v_266_2;
      } else {
        v_266_2_0 = v_266_2;
      };
      if (s_9_St_17_Off_fail_1) {
        s_9_St_17_Off_fail_2_1 = s_9_St_17_Off_fail_2;
      } else {
        s_9_St_17_Off_fail_2_0 = s_9_St_17_Off_fail_2;
      };
    };
    s_9_1 = v_768;
    s_9_2 = v_769;
    r_9 = v_772;
  } else {
    ck_14_2_0 = ck_14_2;
    if (ck_14_2_0) {
      if (failed_recovered) {
        v_265 = true;
        v_264_1 = false;
        v_264_2 = false;
      } else {
        v_265 = self->pnr_9;
        v_264_1 = false;
        v_264_2 = true;
      };
      v_263 = !(c);
      if (v_263) {
        r_9_St_17_On = true;
        s_9_St_17_On_1 = true;
        s_9_St_17_On_2 = true;
      } else {
        r_9_St_17_On = v_265;
        s_9_St_17_On_1 = v_264_1;
        s_9_St_17_On_2 = v_264_2;
      };
      v_773 = r_9_St_17_On;
      v_770 = s_9_St_17_On_1;
      v_771 = s_9_St_17_On_2;
    } else {
      if (failed_recovered) {
        v_262 = true;
        v_261_1 = false;
        v_261_2 = true;
      } else {
        v_262 = self->pnr_9;
        v_261_1 = false;
        v_261_2 = false;
      };
      v_260 = !(c);
      if (v_260) {
        r_9_St_17_On_fail = true;
      } else {
        r_9_St_17_On_fail = v_262;
      };
      v_773 = r_9_St_17_On_fail;
      if (v_260) {
        s_9_St_17_On_fail_1 = true;
      } else {
        s_9_St_17_On_fail_1 = v_261_1;
      };
      v_770 = s_9_St_17_On_fail_1;
      if (v_260) {
        s_9_St_17_On_fail_2 = false;
      } else {
        s_9_St_17_On_fail_2 = v_261_2;
      };
      v_771 = s_9_St_17_On_fail_2;
    };
    s_9_1 = v_770;
    s_9_2 = v_771;
    r_9 = v_773;
  };
  ck_15_1 = s_9_1;
  ck_15_2 = s_9_2;
  if (ck_15_1) {
    ck_15_2_1 = ck_15_2;
    if (ck_15_2_1) {
      computer_status_St_17_Off = 0;
      nr_9_St_17_Off = false;
      ns_9_St_17_Off_1 = true;
      ns_9_St_17_Off_2 = true;
      v_758 = computer_status_St_17_Off;
      v_764 = nr_9_St_17_Off;
      v_760 = ns_9_St_17_Off_1;
      v_761 = ns_9_St_17_Off_2;
      if (ns_9_St_17_Off_1) {
        ns_9_St_17_Off_2_1 = ns_9_St_17_Off_2;
      } else {
        ns_9_St_17_Off_2_0 = ns_9_St_17_Off_2;
      };
    } else {
      computer_status_St_17_Off_fail = 2;
      v_758 = computer_status_St_17_Off_fail;
      nr_9_St_17_Off_fail = false;
      v_764 = nr_9_St_17_Off_fail;
      ns_9_St_17_Off_fail_1 = true;
      v_760 = ns_9_St_17_Off_fail_1;
      ns_9_St_17_Off_fail_2 = false;
      v_761 = ns_9_St_17_Off_fail_2;
      if (ns_9_St_17_Off_fail_1) {
        ns_9_St_17_Off_fail_2_1 = ns_9_St_17_Off_fail_2;
      } else {
        ns_9_St_17_Off_fail_2_0 = ns_9_St_17_Off_fail_2;
      };
    };
    computer_status = v_758;
    ns_9_1 = v_760;
    ns_9_2 = v_761;
    nr_9 = v_764;
  } else {
    ck_15_2_0 = ck_15_2;
    if (ck_15_2_0) {
      computer_status_St_17_On = 1;
      nr_9_St_17_On = false;
      ns_9_St_17_On_1 = false;
      ns_9_St_17_On_2 = true;
      v_759 = computer_status_St_17_On;
      v_765 = nr_9_St_17_On;
      v_762 = ns_9_St_17_On_1;
      v_763 = ns_9_St_17_On_2;
    } else {
      computer_status_St_17_On_fail = 3;
      v_759 = computer_status_St_17_On_fail;
      nr_9_St_17_On_fail = false;
      v_765 = nr_9_St_17_On_fail;
      ns_9_St_17_On_fail_1 = false;
      v_762 = ns_9_St_17_On_fail_1;
      ns_9_St_17_On_fail_2 = false;
      v_763 = ns_9_St_17_On_fail_2;
    };
    computer_status = v_759;
    ns_9_1 = v_762;
    ns_9_2 = v_763;
    nr_9 = v_765;
  };
  _out->pc_status = computer_status;
  v_100 = (_out->pc_status<=1);
  v_103 = (_out->pc_status==0);
  v_104 = (_out->pc_status<=1);
  v_107 = (_out->pc_status==1);
  v_236 = (_out->pc_status==1);
  v_237 = !(v_236);
  v_238 = (v_235&&v_237);
  v_241 = (v_238&&v_240);
  v_244 = (v_241&&v_243);
  if (ns_9_1) {
    ns_9_2_1 = ns_9_2;
  } else {
    ns_9_2_0 = ns_9_2;
  };
  if (!(ck_15_1)) {
    if (ck_15_2_0) {
      if (ns_9_St_17_On_1) {
        ns_9_St_17_On_2_1 = ns_9_St_17_On_2;
      } else {
        ns_9_St_17_On_2_0 = ns_9_St_17_On_2;
      };
    } else {
      if (ns_9_St_17_On_fail_1) {
        ns_9_St_17_On_fail_2_1 = ns_9_St_17_On_fail_2;
      } else {
        ns_9_St_17_On_fail_2_0 = ns_9_St_17_On_fail_2;
      };
    };
  };
  if (s_9_1) {
    s_9_2_1 = s_9_2;
  } else {
    s_9_2_0 = s_9_2;
  };
  if (!(ck_14_1)) {
    if (ck_14_2_0) {
      if (v_264_1) {
        v_264_2_1 = v_264_2;
      } else {
        v_264_2_0 = v_264_2;
      };
      if (s_9_St_17_On_1) {
        s_9_St_17_On_2_1 = s_9_St_17_On_2;
      } else {
        s_9_St_17_On_2_0 = s_9_St_17_On_2;
      };
    } else {
      if (v_261_1) {
        v_261_2_1 = v_261_2;
      } else {
        v_261_2_0 = v_261_2;
      };
      if (s_9_St_17_On_fail_1) {
        s_9_St_17_On_fail_2_1 = s_9_St_17_On_fail_2;
      } else {
        s_9_St_17_On_fail_2_0 = s_9_St_17_On_fail_2;
      };
    };
  };
  if (self->ck_12_1) {
    if (arrived_1) {
      r_10_St_18_Not_Present = true;
      s_10_St_18_Not_Present_1 = false;
    } else {
      r_10_St_18_Not_Present = self->pnr_10;
      s_10_St_18_Not_Present_1 = true;
    };
    r_10 = r_10_St_18_Not_Present;
    s_10_1 = s_10_St_18_Not_Present_1;
  } else {
    if (arrived_1) {
      r_10_St_18_Present = true;
    } else {
      r_10_St_18_Present = self->pnr_10;
    };
    r_10 = r_10_St_18_Present;
    if (arrived_1) {
      s_10_St_18_Present_1 = true;
    } else {
      s_10_St_18_Present_1 = false;
    };
    s_10_1 = s_10_St_18_Present_1;
  };
  ck_13_1 = s_10_1;
  if (ck_13_1) {
    presence_1_St_18_Not_Present = false;
    nr_10_St_18_Not_Present = false;
    ns_10_St_18_Not_Present_1 = true;
    presence_1 = presence_1_St_18_Not_Present;
    nr_10 = nr_10_St_18_Not_Present;
    ns_10_1 = ns_10_St_18_Not_Present_1;
  } else {
    presence_1_St_18_Present = true;
    presence_1 = presence_1_St_18_Present;
    nr_10_St_18_Present = false;
    nr_10 = nr_10_St_18_Present;
    ns_10_St_18_Present_1 = false;
    ns_10_1 = ns_10_St_18_Present_1;
  };
  _out->cleaner_presence = presence_1;
  v = !(_out->cleaner_presence);
  v_92 = (v&&v_91);
  v_93 = !(v_92);
  rule8_5 = (v_93||v_94);
  v_96 = (_out->cleaner_presence&&v_95);
  v_97 = !(v_96);
  rule8 = (v_97||v_98);
  v_219 = !(_out->cleaner_presence);
  if (self->ck_10_1) {
    if (arrived) {
      r_11_St_19_Not_Present = true;
      s_11_St_19_Not_Present_1 = false;
    } else {
      r_11_St_19_Not_Present = self->pnr_11;
      s_11_St_19_Not_Present_1 = true;
    };
    r_11 = r_11_St_19_Not_Present;
    s_11_1 = s_11_St_19_Not_Present_1;
  } else {
    if (arrived) {
      r_11_St_19_Present = true;
    } else {
      r_11_St_19_Present = self->pnr_11;
    };
    r_11 = r_11_St_19_Present;
    if (arrived) {
      s_11_St_19_Present_1 = true;
    } else {
      s_11_St_19_Present_1 = false;
    };
    s_11_1 = s_11_St_19_Present_1;
  };
  ck_11_1 = s_11_1;
  if (ck_11_1) {
    presence_St_19_Not_Present = false;
    nr_11_St_19_Not_Present = false;
    ns_11_St_19_Not_Present_1 = true;
    presence = presence_St_19_Not_Present;
    nr_11 = nr_11_St_19_Not_Present;
    ns_11_1 = ns_11_St_19_Not_Present_1;
  } else {
    presence_St_19_Present = true;
    presence = presence_St_19_Present;
    nr_11_St_19_Present = false;
    nr_11 = nr_11_St_19_Present;
    ns_11_St_19_Present_1 = false;
    ns_11_1 = ns_11_St_19_Present_1;
  };
  _out->worker_presence = presence;
  v_99 = !(_out->worker_presence);
  v_101 = (v_99&&v_100);
  v_102 = !(v_101);
  rule7_5 = (v_102||v_103);
  v_105 = (_out->worker_presence&&v_104);
  v_106 = !(v_105);
  rule7 = (v_106||v_107);
  v_108 = (_out->worker_presence||_out->cleaner_presence);
  v_110 = (v_108&&v_109);
  v_112 = (v_110&&v_111);
  v_114 = (v_112&&v_113);
  v_116 = (v_114&&v_115);
  v_117 = !(v_116);
  rule6_4 = (v_117||v_123);
  v_124 = (_out->worker_presence||_out->cleaner_presence);
  v_126 = (v_124&&v_125);
  v_128 = (v_126&&v_127);
  v_130 = (v_128&&v_129);
  v_131 = !(v_130);
  rule6_3 = (v_131||v_132);
  v_133 = (_out->worker_presence||_out->cleaner_presence);
  v_135 = (v_133&&v_134);
  v_137 = (v_135&&v_136);
  v_139 = (v_137&&v_138);
  v_140 = !(v_139);
  rule6_2 = (v_140||v_144);
  v_145 = (_out->worker_presence||_out->cleaner_presence);
  v_147 = (v_145&&v_146);
  v_149 = (v_147&&v_148);
  v_151 = (v_149&&v_150);
  v_153 = (v_151&&v_152);
  v_154 = !(v_153);
  rule6_1 = (v_154||v_159);
  v_160 = (_out->worker_presence&&_out->cleaner_presence);
  v_161 = !(v_160);
  v_162 = (_out->worker_presence||_out->cleaner_presence);
  v_163 = (v_161&&v_162);
  v_165 = (v_163&&v_164);
  v_166 = !(v_165);
  rule6 = (v_166||v_173);
  v_174 = (_out->worker_presence&&_out->cleaner_presence);
  v_176 = (v_174&&v_175);
  v_177 = !(v_176);
  rule5 = (v_177||v_178);
  v_179 = (_out->worker_presence||_out->cleaner_presence);
  v_181 = (v_179&&v_180);
  v_183 = (v_181&&v_182);
  v_184 = !(v_183);
  rule1_2 = (v_184||v_185);
  v_186 = (_out->worker_presence||_out->cleaner_presence);
  v_188 = (v_186&&v_187);
  v_190 = (v_188&&v_189);
  v_191 = !(v_190);
  rule1_1 = (v_191||v_192);
  v_193 = (_out->worker_presence||_out->cleaner_presence);
  v_204 = (_out->worker_presence||_out->cleaner_presence);
  v_212 = (_out->worker_presence||_out->cleaner_presence);
  v_218 = !(_out->worker_presence);
  v_220 = (v_218&&v_219);
  v_221 = !(v_220);
  rule0 = (v_221||v_244);
  if (self->ck_1) {
    if (change) {
      r_12_St_20_Dia = true;
      s_12_St_20_Dia_1 = false;
    } else {
      r_12_St_20_Dia = self->pnr_12;
      s_12_St_20_Dia_1 = true;
    };
    r_12 = r_12_St_20_Dia;
    s_12_1 = s_12_St_20_Dia_1;
  } else {
    if (change) {
      r_12_St_20_Noite = true;
    } else {
      r_12_St_20_Noite = self->pnr_12;
    };
    r_12 = r_12_St_20_Noite;
    if (change) {
      s_12_St_20_Noite_1 = true;
    } else {
      s_12_St_20_Noite_1 = false;
    };
    s_12_1 = s_12_St_20_Noite_1;
  };
  ck_9_1 = s_12_1;
  if (ck_9_1) {
    night_1_St_20_Dia = false;
    nr_12_St_20_Dia = false;
    ns_12_St_20_Dia_1 = true;
    night_1 = night_1_St_20_Dia;
    nr_12 = nr_12_St_20_Dia;
    ns_12_1 = ns_12_St_20_Dia_1;
  } else {
    night_1_St_20_Noite = true;
    night_1 = night_1_St_20_Noite;
    nr_12_St_20_Noite = false;
    nr_12 = nr_12_St_20_Noite;
    ns_12_St_20_Noite_1 = false;
    ns_12_1 = ns_12_St_20_Noite_1;
  };
  _out->night = night_1;
  v_194 = !(_out->night);
  v_195 = (v_193&&v_194);
  v_197 = (v_195&&v_196);
  v_199 = (v_197&&v_198);
  v_200 = !(v_199);
  rule2 = (v_200||v_203);
  v_205 = (v_204&&_out->night);
  v_207 = (v_205&&v_206);
  v_209 = (v_207&&v_208);
  v_210 = !(v_209);
  rule1_3 = (v_210||v_211);
  v_213 = (v_212&&_out->night);
  v_215 = (v_213&&v_214);
  v_216 = !(v_215);
  rule1 = (v_216||v_217);
  v_245 = (rule0&&rule1);
  v_246 = (v_245&&rule1_3);
  v_247 = (v_246&&rule2);
  v_248 = (v_247&&rule1_1);
  v_249 = (v_248&&rule1_2);
  v_250 = (v_249&&rule5);
  v_251 = (v_250&&rule6);
  v_252 = (v_251&&rule6_1);
  v_253 = (v_252&&rule6_2);
  v_254 = (v_253&&rule6_3);
  v_255 = (v_254&&rule6_4);
  v_256 = (v_255&&rule7);
  v_257 = (v_256&&rule7_5);
  v_258 = (v_257&&rule8);
  v_259 = (v_258&&rule8_5);
  self->pnr = nr;
  self->v_581 = ns_1_3;
  self->v_582 = ns_2_3;
  self->pnr_1 = nr_1;
  self->v_597 = ns_1_1;
  self->v_598 = ns_1_2;
  self->pnr_2 = nr_2;
  self->v_613 = ns_2_1;
  self->v_614 = ns_2_2;
  self->pnr_3 = nr_3;
  self->v_629 = ns_3_1;
  self->v_630 = ns_3_2;
  self->pnr_4 = nr_4;
  self->v_645 = ns_4_1;
  self->v_646 = ns_4_2;
  self->pnr_5 = nr_5;
  self->v_683 = ns_5_1;
  self->v_684 = ns_5_2;
  self->v_685 = ns_5_3;
  self->pnr_6 = nr_6;
  self->v_718 = ns_6_1;
  self->v_719 = ns_6_2;
  self->pnr_7 = nr_7;
  self->v_734 = ns_7_1;
  self->v_735 = ns_7_2;
  self->pnr_8 = nr_8;
  self->v_750 = ns_8_1;
  self->v_751 = ns_8_2;
  self->pnr_9 = nr_9;
  self->v_766 = ns_9_1;
  self->v_767 = ns_9_2;
  self->pnr_10 = nr_10;
  self->ck_12_1 = ns_10_1;
  self->pnr_11 = nr_11;
  self->ck_10_1 = ns_11_1;
  self->pnr_12 = nr_12;
  self->ck_1 = ns_12_1;;
}

