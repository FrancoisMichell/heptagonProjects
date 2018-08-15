/* --- Generated the 15/8/2018 at 9:51 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "system.h"

void System__light_source_reset(System__light_source_mem* self) {
  self->pnr = false;
  self->v_384 = true;
  self->v_385 = true;
}

void System__light_source_step(int sw, int c1, int c2, int failed_recovered,
                               System__light_source_out* _out,
                               System__light_source_mem* self) {
  
  int v_383;
  int v_382;
  int v_381;
  int v_380;
  int v_379;
  int v_378;
  int v_377;
  int v_376;
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
  int v_391;
  int v_390;
  int v_389;
  int v_388;
  int v_387;
  int v_386;
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
  ck_1_3 = self->v_384;
  ck_2 = self->v_385;
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
      v_390 = r_St_Off;
      v_386 = s_St_Off_1;
      v_387 = s_St_Off_2;
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
      v_390 = r_St_Off_fail;
      if (v_12) {
        s_St_Off_fail_1 = false;
      } else {
        s_St_Off_fail_1 = v_13_1;
      };
      v_386 = s_St_Off_fail_1;
      if (v_12) {
        s_St_Off_fail_2 = false;
      } else {
        s_St_Off_fail_2 = v_13_2;
      };
      v_387 = s_St_Off_fail_2;
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
    s_1 = v_386;
    s_2 = v_387;
    r = v_390;
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
      v_391 = r_St_On;
      v_388 = s_St_On_1;
      v_389 = s_St_On_2;
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
      v_391 = r_St_On_fail;
      if (v_2) {
        s_St_On_fail_1 = true;
      } else {
        s_St_On_fail_1 = v_3_1;
      };
      v_388 = s_St_On_fail_1;
      if (v_2) {
        s_St_On_fail_2 = false;
      } else {
        s_St_On_fail_2 = v_3_2;
      };
      v_389 = s_St_On_fail_2;
    };
    s_1 = v_388;
    s_2 = v_389;
    r = v_391;
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
      v_376 = light_source_status_St_Off;
      v_382 = nr_St_Off;
      v_378 = ns_St_Off_1;
      v_379 = ns_St_Off_2;
      if (ns_St_Off_1) {
        ns_St_Off_2_1 = ns_St_Off_2;
      } else {
        ns_St_Off_2_0 = ns_St_Off_2;
      };
    } else {
      light_source_status_St_Off_fail = 2;
      v_376 = light_source_status_St_Off_fail;
      nr_St_Off_fail = false;
      v_382 = nr_St_Off_fail;
      ns_St_Off_fail_1 = true;
      v_378 = ns_St_Off_fail_1;
      ns_St_Off_fail_2 = false;
      v_379 = ns_St_Off_fail_2;
      if (ns_St_Off_fail_1) {
        ns_St_Off_fail_2_1 = ns_St_Off_fail_2;
      } else {
        ns_St_Off_fail_2_0 = ns_St_Off_fail_2;
      };
    };
    _out->light_source_status = v_376;
    ns_1 = v_378;
    ns_2 = v_379;
    nr = v_382;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      light_source_status_St_On = 1;
      nr_St_On = false;
      ns_St_On_1 = false;
      ns_St_On_2 = true;
      v_377 = light_source_status_St_On;
      v_383 = nr_St_On;
      v_380 = ns_St_On_1;
      v_381 = ns_St_On_2;
    } else {
      light_source_status_St_On_fail = 3;
      v_377 = light_source_status_St_On_fail;
      nr_St_On_fail = false;
      v_383 = nr_St_On_fail;
      ns_St_On_fail_1 = false;
      v_380 = ns_St_On_fail_1;
      ns_St_On_fail_2 = false;
      v_381 = ns_St_On_fail_2;
    };
    _out->light_source_status = v_377;
    ns_1 = v_380;
    ns_2 = v_381;
    nr = v_383;
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
  self->v_384 = ns_1;
  self->v_385 = ns_2;;
}

void System__door_reset(System__door_mem* self) {
  self->pnr = false;
  self->v_400 = true;
  self->v_401 = true;
}

void System__door_step(int c, int failed_recovered, System__door_out* _out,
                       System__door_mem* self) {
  
  int v_399;
  int v_398;
  int v_397;
  int v_396;
  int v_395;
  int v_394;
  int v_393;
  int v_392;
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
  int v_407;
  int v_406;
  int v_405;
  int v_404;
  int v_403;
  int v_402;
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
  ck_1 = self->v_400;
  ck_2_3 = self->v_401;
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
      v_406 = r_St_1_Closed;
      v_402 = s_St_1_Closed_1;
      v_403 = s_St_1_Closed_2;
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
      v_406 = r_St_1_Closed_fail;
      if (v_25) {
        s_St_1_Closed_fail_1 = false;
      } else {
        s_St_1_Closed_fail_1 = v_26_1;
      };
      v_402 = s_St_1_Closed_fail_1;
      if (v_25) {
        s_St_1_Closed_fail_2 = false;
      } else {
        s_St_1_Closed_fail_2 = v_26_2;
      };
      v_403 = s_St_1_Closed_fail_2;
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
    s_1 = v_402;
    s_2 = v_403;
    r = v_406;
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
      v_407 = r_St_1_Open;
      v_404 = s_St_1_Open_1;
      v_405 = s_St_1_Open_2;
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
      v_407 = r_St_1_Open_fail;
      if (v) {
        s_St_1_Open_fail_1 = false;
      } else {
        s_St_1_Open_fail_1 = v_20_1;
      };
      v_404 = s_St_1_Open_fail_1;
      if (v) {
        s_St_1_Open_fail_2 = false;
      } else {
        s_St_1_Open_fail_2 = v_20_2;
      };
      v_405 = s_St_1_Open_fail_2;
    };
    s_1 = v_404;
    s_2 = v_405;
    r = v_407;
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
      v_392 = door_status_St_1_Closed;
      v_398 = nr_St_1_Closed;
      v_394 = ns_St_1_Closed_1;
      v_395 = ns_St_1_Closed_2;
      if (ns_St_1_Closed_1) {
        ns_St_1_Closed_2_1 = ns_St_1_Closed_2;
      } else {
        ns_St_1_Closed_2_0 = ns_St_1_Closed_2;
      };
    } else {
      door_status_St_1_Closed_fail = 2;
      v_392 = door_status_St_1_Closed_fail;
      nr_St_1_Closed_fail = false;
      v_398 = nr_St_1_Closed_fail;
      ns_St_1_Closed_fail_1 = true;
      v_394 = ns_St_1_Closed_fail_1;
      ns_St_1_Closed_fail_2 = false;
      v_395 = ns_St_1_Closed_fail_2;
      if (ns_St_1_Closed_fail_1) {
        ns_St_1_Closed_fail_2_1 = ns_St_1_Closed_fail_2;
      } else {
        ns_St_1_Closed_fail_2_0 = ns_St_1_Closed_fail_2;
      };
    };
    _out->door_status = v_392;
    ns_1 = v_394;
    ns_2 = v_395;
    nr = v_398;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      door_status_St_1_Open = 1;
      nr_St_1_Open = false;
      ns_St_1_Open_1 = false;
      ns_St_1_Open_2 = true;
      v_393 = door_status_St_1_Open;
      v_399 = nr_St_1_Open;
      v_396 = ns_St_1_Open_1;
      v_397 = ns_St_1_Open_2;
    } else {
      door_status_St_1_Open_fail = 3;
      v_393 = door_status_St_1_Open_fail;
      nr_St_1_Open_fail = false;
      v_399 = nr_St_1_Open_fail;
      ns_St_1_Open_fail_1 = false;
      v_396 = ns_St_1_Open_fail_1;
      ns_St_1_Open_fail_2 = false;
      v_397 = ns_St_1_Open_fail_2;
    };
    _out->door_status = v_393;
    ns_1 = v_396;
    ns_2 = v_397;
    nr = v_399;
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
  self->v_400 = ns_1;
  self->v_401 = ns_2;;
}

void System__closet_reset(System__closet_mem* self) {
  self->pnr = false;
  self->v_416 = true;
  self->v_417 = true;
}

void System__closet_step(int c, int failed_recovered,
                         System__closet_out* _out, System__closet_mem* self) {
  
  int v_415;
  int v_414;
  int v_413;
  int v_412;
  int v_411;
  int v_410;
  int v_409;
  int v_408;
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
  int v_423;
  int v_422;
  int v_421;
  int v_420;
  int v_419;
  int v_418;
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
  ck_1 = self->v_416;
  ck_2 = self->v_417;
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
      v_422 = r_St_2_Locked;
      v_418 = s_St_2_Locked_1;
      v_419 = s_St_2_Locked_2;
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
      v_422 = r_St_2_Locked_fail;
      if (v_34) {
        s_St_2_Locked_fail_1 = false;
      } else {
        s_St_2_Locked_fail_1 = v_35_1;
      };
      v_418 = s_St_2_Locked_fail_1;
      if (v_34) {
        s_St_2_Locked_fail_2 = false;
      } else {
        s_St_2_Locked_fail_2 = v_35_2;
      };
      v_419 = s_St_2_Locked_fail_2;
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
    s_1 = v_418;
    s_2 = v_419;
    r = v_422;
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
      v_423 = r_St_2_Open;
      v_420 = s_St_2_Open_1;
      v_421 = s_St_2_Open_2;
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
      v_423 = r_St_2_Open_fail;
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
      v_420 = s_St_2_Open_fail_1;
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
      v_421 = s_St_2_Open_fail_2;
    };
    s_1 = v_420;
    s_2 = v_421;
    r = v_423;
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
      v_408 = closet_status_St_2_Locked;
      v_414 = nr_St_2_Locked;
      v_410 = ns_St_2_Locked_1;
      v_411 = ns_St_2_Locked_2;
      if (ns_St_2_Locked_1) {
        ns_St_2_Locked_2_1 = ns_St_2_Locked_2;
      } else {
        ns_St_2_Locked_2_0 = ns_St_2_Locked_2;
      };
    } else {
      closet_status_St_2_Locked_fail = 2;
      v_408 = closet_status_St_2_Locked_fail;
      nr_St_2_Locked_fail = false;
      v_414 = nr_St_2_Locked_fail;
      ns_St_2_Locked_fail_1 = true;
      v_410 = ns_St_2_Locked_fail_1;
      ns_St_2_Locked_fail_2 = false;
      v_411 = ns_St_2_Locked_fail_2;
      if (ns_St_2_Locked_fail_1) {
        ns_St_2_Locked_fail_2_1 = ns_St_2_Locked_fail_2;
      } else {
        ns_St_2_Locked_fail_2_0 = ns_St_2_Locked_fail_2;
      };
    };
    _out->closet_status = v_408;
    ns_1 = v_410;
    ns_2 = v_411;
    nr = v_414;
  } else {
    ck_3_2_0 = ck_3_2;
    if (ck_3_2_0) {
      closet_status_St_2_Open = 1;
      nr_St_2_Open = false;
      ns_St_2_Open_1 = false;
      ns_St_2_Open_2 = true;
      v_409 = closet_status_St_2_Open;
      v_415 = nr_St_2_Open;
      v_412 = ns_St_2_Open_1;
      v_413 = ns_St_2_Open_2;
    } else {
      closet_status_St_2_Open_fail = 3;
      v_409 = closet_status_St_2_Open_fail;
      nr_St_2_Open_fail = false;
      v_415 = nr_St_2_Open_fail;
      ns_St_2_Open_fail_1 = false;
      v_412 = ns_St_2_Open_fail_1;
      ns_St_2_Open_fail_2 = false;
      v_413 = ns_St_2_Open_fail_2;
    };
    _out->closet_status = v_409;
    ns_1 = v_412;
    ns_2 = v_413;
    nr = v_415;
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
  self->v_416 = ns_1;
  self->v_417 = ns_2;;
}

void System__computer_reset(System__computer_mem* self) {
  self->pnr = false;
  self->v_432 = true;
  self->v_433 = true;
}

void System__computer_step(int c, int failed_recovered,
                           System__computer_out* _out,
                           System__computer_mem* self) {
  
  int v_431;
  int v_430;
  int v_429;
  int v_428;
  int v_427;
  int v_426;
  int v_425;
  int v_424;
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
  int v_439;
  int v_438;
  int v_437;
  int v_436;
  int v_435;
  int v_434;
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
  ck_1 = self->v_432;
  ck_2 = self->v_433;
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
      v_438 = r_St_3_Off;
      v_434 = s_St_3_Off_1;
      v_435 = s_St_3_Off_2;
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
      v_438 = r_St_3_Off_fail;
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
      v_434 = s_St_3_Off_fail_1;
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
      v_435 = s_St_3_Off_fail_2;
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
    s_1 = v_434;
    s_2 = v_435;
    r = v_438;
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
      v_439 = r_St_3_On;
      v_436 = s_St_3_On_1;
      v_437 = s_St_3_On_2;
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
      v_439 = r_St_3_On_fail;
      if (v) {
        s_St_3_On_fail_1 = true;
      } else {
        s_St_3_On_fail_1 = v_40_1;
      };
      v_436 = s_St_3_On_fail_1;
      if (v) {
        s_St_3_On_fail_2 = false;
      } else {
        s_St_3_On_fail_2 = v_40_2;
      };
      v_437 = s_St_3_On_fail_2;
    };
    s_1 = v_436;
    s_2 = v_437;
    r = v_439;
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
      v_424 = computer_status_St_3_Off;
      v_430 = nr_St_3_Off;
      v_426 = ns_St_3_Off_1;
      v_427 = ns_St_3_Off_2;
      if (ns_St_3_Off_1) {
        ns_St_3_Off_2_1 = ns_St_3_Off_2;
      } else {
        ns_St_3_Off_2_0 = ns_St_3_Off_2;
      };
    } else {
      computer_status_St_3_Off_fail = 2;
      v_424 = computer_status_St_3_Off_fail;
      nr_St_3_Off_fail = false;
      v_430 = nr_St_3_Off_fail;
      ns_St_3_Off_fail_1 = true;
      v_426 = ns_St_3_Off_fail_1;
      ns_St_3_Off_fail_2 = false;
      v_427 = ns_St_3_Off_fail_2;
      if (ns_St_3_Off_fail_1) {
        ns_St_3_Off_fail_2_1 = ns_St_3_Off_fail_2;
      } else {
        ns_St_3_Off_fail_2_0 = ns_St_3_Off_fail_2;
      };
    };
    _out->computer_status = v_424;
    ns_1 = v_426;
    ns_2 = v_427;
    nr = v_430;
  } else {
    ck_4_2_0 = ck_4_2;
    if (ck_4_2_0) {
      computer_status_St_3_On = 1;
      nr_St_3_On = false;
      ns_St_3_On_1 = false;
      ns_St_3_On_2 = true;
      v_425 = computer_status_St_3_On;
      v_431 = nr_St_3_On;
      v_428 = ns_St_3_On_1;
      v_429 = ns_St_3_On_2;
    } else {
      computer_status_St_3_On_fail = 3;
      v_425 = computer_status_St_3_On_fail;
      nr_St_3_On_fail = false;
      v_431 = nr_St_3_On_fail;
      ns_St_3_On_fail_1 = false;
      v_428 = ns_St_3_On_fail_1;
      ns_St_3_On_fail_2 = false;
      v_429 = ns_St_3_On_fail_2;
    };
    _out->computer_status = v_425;
    ns_1 = v_428;
    ns_2 = v_429;
    nr = v_431;
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
  self->v_432 = ns_1;
  self->v_433 = ns_2;;
}

void System__window_reset(System__window_mem* self) {
  self->pnr = false;
  self->v_448 = true;
  self->v_449 = true;
}

void System__window_step(int c, int failed_recovered,
                         System__window_out* _out, System__window_mem* self) {
  
  int v_447;
  int v_446;
  int v_445;
  int v_444;
  int v_443;
  int v_442;
  int v_441;
  int v_440;
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
  int v_455;
  int v_454;
  int v_453;
  int v_452;
  int v_451;
  int v_450;
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
  ck_1 = self->v_448;
  ck_2 = self->v_449;
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
      v_454 = r_St_4_Closed;
      v_450 = s_St_4_Closed_1;
      v_451 = s_St_4_Closed_2;
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
      v_454 = r_St_4_Closed_fail;
      if (v_52) {
        s_St_4_Closed_fail_1 = false;
      } else {
        s_St_4_Closed_fail_1 = v_53_1;
      };
      v_450 = s_St_4_Closed_fail_1;
      if (v_52) {
        s_St_4_Closed_fail_2 = false;
      } else {
        s_St_4_Closed_fail_2 = v_53_2;
      };
      v_451 = s_St_4_Closed_fail_2;
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
    s_1 = v_450;
    s_2 = v_451;
    r = v_454;
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
      v_455 = r_St_4_Open;
      v_452 = s_St_4_Open_1;
      v_453 = s_St_4_Open_2;
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
      v_455 = r_St_4_Open_fail;
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
      v_452 = s_St_4_Open_fail_1;
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
      v_453 = s_St_4_Open_fail_2;
    };
    s_1 = v_452;
    s_2 = v_453;
    r = v_455;
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
      v_440 = window_status_St_4_Closed;
      v_446 = nr_St_4_Closed;
      v_442 = ns_St_4_Closed_1;
      v_443 = ns_St_4_Closed_2;
      if (ns_St_4_Closed_1) {
        ns_St_4_Closed_2_1 = ns_St_4_Closed_2;
      } else {
        ns_St_4_Closed_2_0 = ns_St_4_Closed_2;
      };
    } else {
      window_status_St_4_Closed_fail = 2;
      v_440 = window_status_St_4_Closed_fail;
      nr_St_4_Closed_fail = false;
      v_446 = nr_St_4_Closed_fail;
      ns_St_4_Closed_fail_1 = true;
      v_442 = ns_St_4_Closed_fail_1;
      ns_St_4_Closed_fail_2 = false;
      v_443 = ns_St_4_Closed_fail_2;
      if (ns_St_4_Closed_fail_1) {
        ns_St_4_Closed_fail_2_1 = ns_St_4_Closed_fail_2;
      } else {
        ns_St_4_Closed_fail_2_0 = ns_St_4_Closed_fail_2;
      };
    };
    _out->window_status = v_440;
    ns_1 = v_442;
    ns_2 = v_443;
    nr = v_446;
  } else {
    ck_5_2_0 = ck_5_2;
    if (ck_5_2_0) {
      window_status_St_4_Open = 1;
      nr_St_4_Open = false;
      ns_St_4_Open_1 = false;
      ns_St_4_Open_2 = true;
      v_441 = window_status_St_4_Open;
      v_447 = nr_St_4_Open;
      v_444 = ns_St_4_Open_1;
      v_445 = ns_St_4_Open_2;
    } else {
      window_status_St_4_Open_fail = 3;
      v_441 = window_status_St_4_Open_fail;
      nr_St_4_Open_fail = false;
      v_447 = nr_St_4_Open_fail;
      ns_St_4_Open_fail_1 = false;
      v_444 = ns_St_4_Open_fail_1;
      ns_St_4_Open_fail_2 = false;
      v_445 = ns_St_4_Open_fail_2;
    };
    _out->window_status = v_441;
    ns_1 = v_444;
    ns_2 = v_445;
    nr = v_447;
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
  self->v_448 = ns_1;
  self->v_449 = ns_2;;
}

void System__air_conditioner_reset(System__air_conditioner_mem* self) {
  self->pnr = false;
  self->v_486 = false;
  self->v_487 = true;
  self->v_488 = false;
}

void System__air_conditioner_step(int c1, int c2, int failed_recovered,
                                  System__air_conditioner_out* _out,
                                  System__air_conditioner_mem* self) {
  
  int v_485;
  int v_484;
  int v_483;
  int v_482;
  int v_481;
  int v_480;
  int v_479;
  int v_478;
  int v_477;
  int v_476;
  int v_475;
  int v_474;
  int v_473;
  int v_472;
  int v_471;
  int v_470;
  int v_469;
  int v_468;
  int v_467;
  int v_466;
  int v_465;
  int v_464;
  int v_463;
  int v_462;
  int v_461;
  int v_460;
  int v_459;
  int v_458;
  int v_457;
  int v_456;
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
  int v_512;
  int v_511;
  int v_510;
  int v_509;
  int v_508;
  int v_507;
  int v_506;
  int v_505;
  int v_504;
  int v_503;
  int v_502;
  int v_501;
  int v_500;
  int v_499;
  int v_498;
  int v_497;
  int v_496;
  int v_495;
  int v_494;
  int v_493;
  int v_492;
  int v_491;
  int v_490;
  int v_489;
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
  ck_1 = self->v_486;
  ck_2 = self->v_487;
  ck_3 = self->v_488;
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
        v_507 = r_St_5_Max;
        v_489 = s_St_5_Max_1;
        v_490 = s_St_5_Max_2;
        v_491 = s_St_5_Max_3;
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
        v_507 = r_St_5_Max_fail;
        if (v) {
          s_St_5_Max_fail_1 = false;
        } else {
          s_St_5_Max_fail_1 = v_61_1;
        };
        v_489 = s_St_5_Max_fail_1;
        if (v) {
          s_St_5_Max_fail_2 = true;
        } else {
          s_St_5_Max_fail_2 = v_61_2;
        };
        v_490 = s_St_5_Max_fail_2;
        if (v) {
          s_St_5_Max_fail_3 = true;
        } else {
          s_St_5_Max_fail_3 = v_61_3;
        };
        v_491 = s_St_5_Max_fail_3;
      };
      v_501 = v_489;
      v_502 = v_490;
      v_503 = v_491;
      v_509 = v_507;
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
        v_508 = true;
        v_492 = true;
        v_493 = true;
        v_494 = true;
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
        v_508 = r_St_5_Min;
        if (v_75) {
          s_St_5_Min_1 = false;
        } else {
          s_St_5_Min_1 = v_79_1;
        };
        v_492 = s_St_5_Min_1;
        if (v_75) {
          s_St_5_Min_2 = true;
        } else {
          s_St_5_Min_2 = v_79_2;
        };
        v_493 = s_St_5_Min_2;
        if (v_75) {
          s_St_5_Min_3 = false;
        } else {
          s_St_5_Min_3 = v_79_3;
        };
        v_494 = s_St_5_Min_3;
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
      v_501 = v_492;
      v_502 = v_493;
      v_503 = v_494;
      v_509 = v_508;
    };
    s_1 = v_501;
    s_2 = v_502;
    s_3 = v_503;
    r = v_509;
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
        v_510 = r_St_5_Min_fail;
        if (v_69) {
          s_St_5_Min_fail_1 = false;
        } else {
          s_St_5_Min_fail_1 = v_73_1;
        };
        v_495 = s_St_5_Min_fail_1;
        if (v_69) {
          s_St_5_Min_fail_2 = false;
        } else {
          s_St_5_Min_fail_2 = v_73_2;
        };
        v_496 = s_St_5_Min_fail_2;
        if (v_69) {
          s_St_5_Min_fail_3 = false;
        } else {
          s_St_5_Min_fail_3 = v_73_3;
        };
        v_497 = s_St_5_Min_fail_3;
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
        v_510 = r_St_5_Off;
        v_495 = s_St_5_Off_1;
        v_496 = s_St_5_Off_2;
        v_497 = s_St_5_Off_3;
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
      v_504 = v_495;
      v_505 = v_496;
      v_506 = v_497;
      v_512 = v_510;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_511 = true;
        v_498 = true;
        v_499 = true;
        v_500 = true;
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
        v_511 = r_St_5_Off_fail;
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
        v_498 = s_St_5_Off_fail_1;
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
        v_499 = s_St_5_Off_fail_2;
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
        v_500 = s_St_5_Off_fail_3;
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
      v_504 = v_498;
      v_505 = v_499;
      v_506 = v_500;
      v_512 = v_511;
    };
    s_1 = v_504;
    s_2 = v_505;
    s_3 = v_506;
    r = v_512;
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
        v_456 = air_status_St_5_Max;
        v_480 = nr_St_5_Max;
        v_462 = ns_St_5_Max_1;
        v_463 = ns_St_5_Max_2;
        v_464 = ns_St_5_Max_3;
      } else {
        air_status_St_5_Max_fail = 5;
        v_456 = air_status_St_5_Max_fail;
        nr_St_5_Max_fail = false;
        v_480 = nr_St_5_Max_fail;
        ns_St_5_Max_fail_1 = true;
        v_462 = ns_St_5_Max_fail_1;
        ns_St_5_Max_fail_2 = true;
        v_463 = ns_St_5_Max_fail_2;
        ns_St_5_Max_fail_3 = false;
        v_464 = ns_St_5_Max_fail_3;
      };
      v_458 = v_456;
      v_474 = v_462;
      v_475 = v_463;
      v_476 = v_464;
      v_482 = v_480;
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
        v_457 = 0;
        v_481 = true;
        v_465 = true;
        v_466 = true;
        v_467 = true;
      } else {
        air_status_St_5_Min = 1;
        v_457 = air_status_St_5_Min;
        nr_St_5_Min = false;
        v_481 = nr_St_5_Min;
        ns_St_5_Min_1 = true;
        v_465 = ns_St_5_Min_1;
        ns_St_5_Min_2 = false;
        v_466 = ns_St_5_Min_2;
        ns_St_5_Min_3 = false;
        v_467 = ns_St_5_Min_3;
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
      v_458 = v_457;
      v_474 = v_465;
      v_475 = v_466;
      v_476 = v_467;
      v_482 = v_481;
    };
    _out->air_status = v_458;
    ns_1 = v_474;
    ns_2 = v_475;
    ns_3 = v_476;
    nr = v_482;
  } else {
    ck_6_2_0 = ck_6_2;
    if (ck_6_2_0) {
      ck_6_3_0_1 = ck_6_3;
      if (ck_6_3_0_1) {
        air_status_St_5_Min_fail = 4;
        v_459 = air_status_St_5_Min_fail;
        nr_St_5_Min_fail = false;
        v_483 = nr_St_5_Min_fail;
        ns_St_5_Min_fail_1 = false;
        v_468 = ns_St_5_Min_fail_1;
        ns_St_5_Min_fail_2 = true;
        v_469 = ns_St_5_Min_fail_2;
        ns_St_5_Min_fail_3 = true;
        v_470 = ns_St_5_Min_fail_3;
      } else {
        air_status_St_5_Off = 0;
        nr_St_5_Off = false;
        ns_St_5_Off_1 = false;
        ns_St_5_Off_2 = true;
        ns_St_5_Off_3 = false;
        v_459 = air_status_St_5_Off;
        v_483 = nr_St_5_Off;
        v_468 = ns_St_5_Off_1;
        v_469 = ns_St_5_Off_2;
        v_470 = ns_St_5_Off_3;
      };
      v_461 = v_459;
      v_477 = v_468;
      v_478 = v_469;
      v_479 = v_470;
      v_485 = v_483;
    } else {
      ck_6_3_0_0 = ck_6_3;
      if (ck_6_3_0_0) {
        v_460 = 0;
        v_484 = true;
        v_471 = true;
        v_472 = true;
        v_473 = true;
      } else {
        air_status_St_5_Off_fail = 3;
        v_460 = air_status_St_5_Off_fail;
        nr_St_5_Off_fail = false;
        v_484 = nr_St_5_Off_fail;
        ns_St_5_Off_fail_1 = false;
        v_471 = ns_St_5_Off_fail_1;
        ns_St_5_Off_fail_2 = false;
        v_472 = ns_St_5_Off_fail_2;
        ns_St_5_Off_fail_3 = false;
        v_473 = ns_St_5_Off_fail_3;
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
      v_461 = v_460;
      v_477 = v_471;
      v_478 = v_472;
      v_479 = v_473;
      v_485 = v_484;
    };
    _out->air_status = v_461;
    ns_1 = v_477;
    ns_2 = v_478;
    ns_3 = v_479;
    nr = v_485;
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
  self->v_486 = ns_1;
  self->v_487 = ns_2;
  self->v_488 = ns_3;;
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
  self->v_521 = true;
  self->v_522 = true;
  self->pnr_1 = false;
  self->v_537 = true;
  self->v_538 = true;
  self->pnr_2 = false;
  self->v_575 = false;
  self->v_576 = true;
  self->v_577 = false;
  self->pnr_3 = false;
  self->v_610 = true;
  self->v_611 = true;
  self->pnr_4 = false;
  self->v_626 = true;
  self->v_627 = true;
  self->pnr_5 = false;
  self->v_642 = true;
  self->v_643 = true;
  self->pnr_6 = false;
  self->v_658 = true;
  self->v_659 = true;
  self->pnr_7 = false;
  self->ck_12_1 = true;
  self->pnr_8 = false;
  self->ck_10_1 = true;
  self->pnr_9 = false;
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
  
  int v_520;
  int v_519;
  int v_518;
  int v_517;
  int v_516;
  int v_515;
  int v_514;
  int v_513;
  int ns_St_8_On_fail_2_0;
  int ns_St_8_On_fail_2_1;
  int ns_St_8_On_2_0;
  int ns_St_8_On_2_1;
  int ns_St_8_Off_fail_2_0;
  int ns_St_8_Off_fail_2_1;
  int ns_St_8_Off_2_0;
  int ns_St_8_Off_2_1;
  int ck_27_2_0;
  int ck_27_2_1;
  int nr_St_8_On_fail;
  int ns_St_8_On_fail_2;
  int ns_St_8_On_fail_1;
  int light_source_status_1_St_8_On_fail;
  int nr_St_8_On;
  int ns_St_8_On_2;
  int ns_St_8_On_1;
  int light_source_status_1_St_8_On;
  int nr_St_8_Off_fail;
  int ns_St_8_Off_fail_2;
  int ns_St_8_Off_fail_1;
  int light_source_status_1_St_8_Off_fail;
  int nr_St_8_Off;
  int ns_St_8_Off_2;
  int ns_St_8_Off_1;
  int light_source_status_1_St_8_Off;
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
  int v_528;
  int v_527;
  int v_526;
  int v_525;
  int v_524;
  int v_523;
  int s_St_8_On_fail_2_0;
  int s_St_8_On_fail_2_1;
  int s_St_8_On_2_0;
  int s_St_8_On_2_1;
  int s_St_8_Off_fail_2_0;
  int s_St_8_Off_fail_2_1;
  int s_St_8_Off_2_0;
  int s_St_8_Off_2_1;
  int ck_26_2_0;
  int ck_26_2_1;
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
  int ck_26_2;
  int ck_26_1;
  int v_536;
  int v_535;
  int v_534;
  int v_533;
  int v_532;
  int v_531;
  int v_530;
  int v_529;
  int ns_1_St_9_On_fail_2_0;
  int ns_1_St_9_On_fail_2_1;
  int ns_1_St_9_On_2_0;
  int ns_1_St_9_On_2_1;
  int ns_1_St_9_Off_fail_2_0;
  int ns_1_St_9_Off_fail_2_1;
  int ns_1_St_9_Off_2_0;
  int ns_1_St_9_Off_2_1;
  int ck_25_2_0;
  int ck_25_2_1;
  int nr_1_St_9_On_fail;
  int ns_1_St_9_On_fail_2;
  int ns_1_St_9_On_fail_1;
  int light_source_status_St_9_On_fail;
  int nr_1_St_9_On;
  int ns_1_St_9_On_2;
  int ns_1_St_9_On_1;
  int light_source_status_St_9_On;
  int nr_1_St_9_Off_fail;
  int ns_1_St_9_Off_fail_2;
  int ns_1_St_9_Off_fail_1;
  int light_source_status_St_9_Off_fail;
  int nr_1_St_9_Off;
  int ns_1_St_9_Off_2;
  int ns_1_St_9_Off_1;
  int light_source_status_St_9_Off;
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
  int v_544;
  int v_543;
  int v_542;
  int v_541;
  int v_540;
  int v_539;
  int s_1_St_9_On_fail_2_0;
  int s_1_St_9_On_fail_2_1;
  int s_1_St_9_On_2_0;
  int s_1_St_9_On_2_1;
  int s_1_St_9_Off_fail_2_0;
  int s_1_St_9_Off_fail_2_1;
  int s_1_St_9_Off_2_0;
  int s_1_St_9_Off_2_1;
  int ck_24_2_0;
  int ck_24_2_1;
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
  int ck_24_2;
  int ck_24_1;
  int v_574;
  int v_573;
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
  int v_548;
  int v_547;
  int v_546;
  int v_545;
  int ns_2_St_10_Max_fail_2_0;
  int ns_2_St_10_Max_fail_3_0_0;
  int ns_2_St_10_Max_fail_3_0_1;
  int ns_2_St_10_Max_fail_2_1;
  int ns_2_St_10_Max_fail_3_1_0;
  int ns_2_St_10_Max_fail_3_1_1;
  int ns_2_St_10_Max_2_0;
  int ns_2_St_10_Max_3_0_0;
  int ns_2_St_10_Max_3_0_1;
  int ns_2_St_10_Max_2_1;
  int ns_2_St_10_Max_3_1_0;
  int ns_2_St_10_Max_3_1_1;
  int ns_2_St_10_Min_fail_2_0;
  int ns_2_St_10_Min_fail_3_0_0;
  int ns_2_St_10_Min_fail_3_0_1;
  int ns_2_St_10_Min_fail_2_1;
  int ns_2_St_10_Min_fail_3_1_0;
  int ns_2_St_10_Min_fail_3_1_1;
  int ns_2_St_10_Min_2_0;
  int ns_2_St_10_Min_3_0_0;
  int ns_2_St_10_Min_3_0_1;
  int ns_2_St_10_Min_2_1;
  int ns_2_St_10_Min_3_1_0;
  int ns_2_St_10_Min_3_1_1;
  int ns_2_St_10_Off_fail_2_0;
  int ns_2_St_10_Off_fail_3_0_0;
  int ns_2_St_10_Off_fail_3_0_1;
  int ns_2_St_10_Off_fail_2_1;
  int ns_2_St_10_Off_fail_3_1_0;
  int ns_2_St_10_Off_fail_3_1_1;
  int ns_2_St_10_Off_2_0;
  int ns_2_St_10_Off_3_0_0;
  int ns_2_St_10_Off_3_0_1;
  int ns_2_St_10_Off_2_1;
  int ns_2_St_10_Off_3_1_0;
  int ns_2_St_10_Off_3_1_1;
  int ck_23_2_0;
  int ck_23_3_0_0;
  int ck_23_3_0_1;
  int ck_23_2_1;
  int ck_23_3_1_0;
  int ck_23_3_1_1;
  int nr_2_St_10_Max_fail;
  int ns_2_St_10_Max_fail_3;
  int ns_2_St_10_Max_fail_2;
  int ns_2_St_10_Max_fail_1;
  int air_status_1_St_10_Max_fail;
  int nr_2_St_10_Max;
  int ns_2_St_10_Max_3;
  int ns_2_St_10_Max_2;
  int ns_2_St_10_Max_1;
  int air_status_1_St_10_Max;
  int nr_2_St_10_Min_fail;
  int ns_2_St_10_Min_fail_3;
  int ns_2_St_10_Min_fail_2;
  int ns_2_St_10_Min_fail_1;
  int air_status_1_St_10_Min_fail;
  int nr_2_St_10_Min;
  int ns_2_St_10_Min_3;
  int ns_2_St_10_Min_2;
  int ns_2_St_10_Min_1;
  int air_status_1_St_10_Min;
  int nr_2_St_10_Off_fail;
  int ns_2_St_10_Off_fail_3;
  int ns_2_St_10_Off_fail_2;
  int ns_2_St_10_Off_fail_1;
  int air_status_1_St_10_Off_fail;
  int nr_2_St_10_Off;
  int ns_2_St_10_Off_3;
  int ns_2_St_10_Off_2;
  int ns_2_St_10_Off_1;
  int air_status_1_St_10_Off;
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
  int v_601;
  int v_600;
  int v_599;
  int v_598;
  int v_597;
  int v_596;
  int v_595;
  int v_594;
  int v_593;
  int v_592;
  int v_591;
  int v_590;
  int v_589;
  int v_588;
  int v_587;
  int v_586;
  int v_585;
  int v_584;
  int v_583;
  int v_582;
  int v_581;
  int v_580;
  int v_579;
  int v_578;
  int s_2_St_10_Max_fail_2_0;
  int s_2_St_10_Max_fail_3_0_0;
  int s_2_St_10_Max_fail_3_0_1;
  int s_2_St_10_Max_fail_2_1;
  int s_2_St_10_Max_fail_3_1_0;
  int s_2_St_10_Max_fail_3_1_1;
  int s_2_St_10_Max_2_0;
  int s_2_St_10_Max_3_0_0;
  int s_2_St_10_Max_3_0_1;
  int s_2_St_10_Max_2_1;
  int s_2_St_10_Max_3_1_0;
  int s_2_St_10_Max_3_1_1;
  int s_2_St_10_Min_fail_2_0;
  int s_2_St_10_Min_fail_3_0_0;
  int s_2_St_10_Min_fail_3_0_1;
  int s_2_St_10_Min_fail_2_1;
  int s_2_St_10_Min_fail_3_1_0;
  int s_2_St_10_Min_fail_3_1_1;
  int s_2_St_10_Min_2_0;
  int s_2_St_10_Min_3_0_0;
  int s_2_St_10_Min_3_0_1;
  int s_2_St_10_Min_2_1;
  int s_2_St_10_Min_3_1_0;
  int s_2_St_10_Min_3_1_1;
  int s_2_St_10_Off_fail_2_0;
  int s_2_St_10_Off_fail_3_0_0;
  int s_2_St_10_Off_fail_3_0_1;
  int s_2_St_10_Off_fail_2_1;
  int s_2_St_10_Off_fail_3_1_0;
  int s_2_St_10_Off_fail_3_1_1;
  int s_2_St_10_Off_2_0;
  int s_2_St_10_Off_3_0_0;
  int s_2_St_10_Off_3_0_1;
  int s_2_St_10_Off_2_1;
  int s_2_St_10_Off_3_1_0;
  int s_2_St_10_Off_3_1_1;
  int ck_22_2_0;
  int ck_22_3_0_0;
  int ck_22_3_0_1;
  int ck_22_2_1;
  int ck_22_3_1_0;
  int ck_22_3_1_1;
  int r_2_St_10_Max_fail;
  int s_2_St_10_Max_fail_3;
  int s_2_St_10_Max_fail_2;
  int s_2_St_10_Max_fail_1;
  int r_2_St_10_Max;
  int s_2_St_10_Max_3;
  int s_2_St_10_Max_2;
  int s_2_St_10_Max_1;
  int r_2_St_10_Min_fail;
  int s_2_St_10_Min_fail_3;
  int s_2_St_10_Min_fail_2;
  int s_2_St_10_Min_fail_1;
  int r_2_St_10_Min;
  int s_2_St_10_Min_3;
  int s_2_St_10_Min_2;
  int s_2_St_10_Min_1;
  int r_2_St_10_Off_fail;
  int s_2_St_10_Off_fail_3;
  int s_2_St_10_Off_fail_2;
  int s_2_St_10_Off_fail_1;
  int r_2_St_10_Off;
  int s_2_St_10_Off_3;
  int s_2_St_10_Off_2;
  int s_2_St_10_Off_1;
  int ck_22_3;
  int ck_22_2;
  int ck_22_1;
  int v_609;
  int v_608;
  int v_607;
  int v_606;
  int v_605;
  int v_604;
  int v_603;
  int v_602;
  int ns_3_St_11_Open_fail_2_0;
  int ns_3_St_11_Open_fail_2_1;
  int ns_3_St_11_Open_2_0;
  int ns_3_St_11_Open_2_1;
  int ns_3_St_11_Closed_fail_2_0;
  int ns_3_St_11_Closed_fail_2_1;
  int ns_3_St_11_Closed_2_0;
  int ns_3_St_11_Closed_2_1;
  int ck_21_2_0;
  int ck_21_2_1;
  int nr_3_St_11_Open_fail;
  int ns_3_St_11_Open_fail_2;
  int ns_3_St_11_Open_fail_1;
  int window_status_1_St_11_Open_fail;
  int nr_3_St_11_Open;
  int ns_3_St_11_Open_2;
  int ns_3_St_11_Open_1;
  int window_status_1_St_11_Open;
  int nr_3_St_11_Closed_fail;
  int ns_3_St_11_Closed_fail_2;
  int ns_3_St_11_Closed_fail_1;
  int window_status_1_St_11_Closed_fail;
  int nr_3_St_11_Closed;
  int ns_3_St_11_Closed_2;
  int ns_3_St_11_Closed_1;
  int window_status_1_St_11_Closed;
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
  int v_617;
  int v_616;
  int v_615;
  int v_614;
  int v_613;
  int v_612;
  int s_3_St_11_Open_fail_2_0;
  int s_3_St_11_Open_fail_2_1;
  int s_3_St_11_Open_2_0;
  int s_3_St_11_Open_2_1;
  int s_3_St_11_Closed_fail_2_0;
  int s_3_St_11_Closed_fail_2_1;
  int s_3_St_11_Closed_2_0;
  int s_3_St_11_Closed_2_1;
  int ck_20_2_0;
  int ck_20_2_1;
  int r_3_St_11_Open_fail;
  int s_3_St_11_Open_fail_2;
  int s_3_St_11_Open_fail_1;
  int r_3_St_11_Open;
  int s_3_St_11_Open_2;
  int s_3_St_11_Open_1;
  int r_3_St_11_Closed_fail;
  int s_3_St_11_Closed_fail_2;
  int s_3_St_11_Closed_fail_1;
  int r_3_St_11_Closed;
  int s_3_St_11_Closed_2;
  int s_3_St_11_Closed_1;
  int ck_20_2;
  int ck_20_1;
  int v_625;
  int v_624;
  int v_623;
  int v_622;
  int v_621;
  int v_620;
  int v_619;
  int v_618;
  int ns_4_St_12_Open_fail_2_0;
  int ns_4_St_12_Open_fail_2_1;
  int ns_4_St_12_Open_2_0;
  int ns_4_St_12_Open_2_1;
  int ns_4_St_12_Locked_fail_2_0;
  int ns_4_St_12_Locked_fail_2_1;
  int ns_4_St_12_Locked_2_0;
  int ns_4_St_12_Locked_2_1;
  int ck_19_2_0;
  int ck_19_2_1;
  int nr_4_St_12_Open_fail;
  int ns_4_St_12_Open_fail_2;
  int ns_4_St_12_Open_fail_1;
  int closet_status_1_St_12_Open_fail;
  int nr_4_St_12_Open;
  int ns_4_St_12_Open_2;
  int ns_4_St_12_Open_1;
  int closet_status_1_St_12_Open;
  int nr_4_St_12_Locked_fail;
  int ns_4_St_12_Locked_fail_2;
  int ns_4_St_12_Locked_fail_1;
  int closet_status_1_St_12_Locked_fail;
  int nr_4_St_12_Locked;
  int ns_4_St_12_Locked_2;
  int ns_4_St_12_Locked_1;
  int closet_status_1_St_12_Locked;
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
  int v_633;
  int v_632;
  int v_631;
  int v_630;
  int v_629;
  int v_628;
  int s_4_St_12_Open_fail_2_0;
  int s_4_St_12_Open_fail_2_1;
  int s_4_St_12_Open_2_0;
  int s_4_St_12_Open_2_1;
  int s_4_St_12_Locked_fail_2_0;
  int s_4_St_12_Locked_fail_2_1;
  int s_4_St_12_Locked_2_0;
  int s_4_St_12_Locked_2_1;
  int ck_18_2_0;
  int ck_18_2_1;
  int r_4_St_12_Open_fail;
  int s_4_St_12_Open_fail_2;
  int s_4_St_12_Open_fail_1;
  int r_4_St_12_Open;
  int s_4_St_12_Open_2;
  int s_4_St_12_Open_1;
  int r_4_St_12_Locked_fail;
  int s_4_St_12_Locked_fail_2;
  int s_4_St_12_Locked_fail_1;
  int r_4_St_12_Locked;
  int s_4_St_12_Locked_2;
  int s_4_St_12_Locked_1;
  int ck_18_2;
  int ck_18_1;
  int v_641;
  int v_640;
  int v_639;
  int v_638;
  int v_637;
  int v_636;
  int v_635;
  int v_634;
  int ns_5_St_13_Open_fail_2_0;
  int ns_5_St_13_Open_fail_2_1;
  int ns_5_St_13_Open_2_0;
  int ns_5_St_13_Open_2_1;
  int ns_5_St_13_Closed_fail_2_0;
  int ns_5_St_13_Closed_fail_2_1;
  int ns_5_St_13_Closed_2_0;
  int ns_5_St_13_Closed_2_1;
  int ck_17_2_0;
  int ck_17_2_1;
  int nr_5_St_13_Open_fail;
  int ns_5_St_13_Open_fail_2;
  int ns_5_St_13_Open_fail_1;
  int door_status_1_St_13_Open_fail;
  int nr_5_St_13_Open;
  int ns_5_St_13_Open_2;
  int ns_5_St_13_Open_1;
  int door_status_1_St_13_Open;
  int nr_5_St_13_Closed_fail;
  int ns_5_St_13_Closed_fail_2;
  int ns_5_St_13_Closed_fail_1;
  int door_status_1_St_13_Closed_fail;
  int nr_5_St_13_Closed;
  int ns_5_St_13_Closed_2;
  int ns_5_St_13_Closed_1;
  int door_status_1_St_13_Closed;
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
  int v_649;
  int v_648;
  int v_647;
  int v_646;
  int v_645;
  int v_644;
  int s_5_St_13_Open_fail_2_0;
  int s_5_St_13_Open_fail_2_1;
  int s_5_St_13_Open_2_0;
  int s_5_St_13_Open_2_1;
  int s_5_St_13_Closed_fail_2_0;
  int s_5_St_13_Closed_fail_2_1;
  int s_5_St_13_Closed_2_0;
  int s_5_St_13_Closed_2_1;
  int ck_16_2_0;
  int ck_16_2_1;
  int r_5_St_13_Open_fail;
  int s_5_St_13_Open_fail_2;
  int s_5_St_13_Open_fail_1;
  int r_5_St_13_Open;
  int s_5_St_13_Open_2;
  int s_5_St_13_Open_1;
  int r_5_St_13_Closed_fail;
  int s_5_St_13_Closed_fail_2;
  int s_5_St_13_Closed_fail_1;
  int r_5_St_13_Closed;
  int s_5_St_13_Closed_2;
  int s_5_St_13_Closed_1;
  int ck_16_2;
  int ck_16_1;
  int v_657;
  int v_656;
  int v_655;
  int v_654;
  int v_653;
  int v_652;
  int v_651;
  int v_650;
  int ns_6_St_14_On_fail_2_0;
  int ns_6_St_14_On_fail_2_1;
  int ns_6_St_14_On_2_0;
  int ns_6_St_14_On_2_1;
  int ns_6_St_14_Off_fail_2_0;
  int ns_6_St_14_Off_fail_2_1;
  int ns_6_St_14_Off_2_0;
  int ns_6_St_14_Off_2_1;
  int ck_15_2_0;
  int ck_15_2_1;
  int nr_6_St_14_On_fail;
  int ns_6_St_14_On_fail_2;
  int ns_6_St_14_On_fail_1;
  int computer_status_St_14_On_fail;
  int nr_6_St_14_On;
  int ns_6_St_14_On_2;
  int ns_6_St_14_On_1;
  int computer_status_St_14_On;
  int nr_6_St_14_Off_fail;
  int ns_6_St_14_Off_fail_2;
  int ns_6_St_14_Off_fail_1;
  int computer_status_St_14_Off_fail;
  int nr_6_St_14_Off;
  int ns_6_St_14_Off_2;
  int ns_6_St_14_Off_1;
  int computer_status_St_14_Off;
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
  int v_665;
  int v_664;
  int v_663;
  int v_662;
  int v_661;
  int v_660;
  int s_6_St_14_On_fail_2_0;
  int s_6_St_14_On_fail_2_1;
  int s_6_St_14_On_2_0;
  int s_6_St_14_On_2_1;
  int s_6_St_14_Off_fail_2_0;
  int s_6_St_14_Off_fail_2_1;
  int s_6_St_14_Off_2_0;
  int s_6_St_14_Off_2_1;
  int ck_14_2_0;
  int ck_14_2_1;
  int r_6_St_14_On_fail;
  int s_6_St_14_On_fail_2;
  int s_6_St_14_On_fail_1;
  int r_6_St_14_On;
  int s_6_St_14_On_2;
  int s_6_St_14_On_1;
  int r_6_St_14_Off_fail;
  int s_6_St_14_Off_fail_2;
  int s_6_St_14_Off_fail_1;
  int r_6_St_14_Off;
  int s_6_St_14_Off_2;
  int s_6_St_14_Off_1;
  int ck_14_2;
  int ck_14_1;
  int nr_7_St_15_Present;
  int ns_7_St_15_Present_1;
  int presence_1_St_15_Present;
  int nr_7_St_15_Not_Present;
  int ns_7_St_15_Not_Present_1;
  int presence_1_St_15_Not_Present;
  int ck_13_1;
  int r_7_St_15_Present;
  int s_7_St_15_Present_1;
  int r_7_St_15_Not_Present;
  int s_7_St_15_Not_Present_1;
  int nr_8_St_16_Present;
  int ns_8_St_16_Present_1;
  int presence_St_16_Present;
  int nr_8_St_16_Not_Present;
  int ns_8_St_16_Not_Present_1;
  int presence_St_16_Not_Present;
  int ck_11_1;
  int r_8_St_16_Present;
  int s_8_St_16_Present_1;
  int r_8_St_16_Not_Present;
  int s_8_St_16_Not_Present_1;
  int nr_9_St_17_Noite;
  int ns_9_St_17_Noite_1;
  int night_1_St_17_Noite;
  int nr_9_St_17_Dia;
  int ns_9_St_17_Dia_1;
  int night_1_St_17_Dia;
  int ck_9_1;
  int r_9_St_17_Noite;
  int s_9_St_17_Noite_1;
  int r_9_St_17_Dia;
  int s_9_St_17_Dia_1;
  int s_6_2_0;
  int s_6_2_1;
  int ns_6_2_0;
  int ns_6_2_1;
  int s_5_2_0;
  int s_5_2_1;
  int ns_5_2_0;
  int ns_5_2_1;
  int s_4_2_0;
  int s_4_2_1;
  int ns_4_2_0;
  int ns_4_2_1;
  int s_3_2_0;
  int s_3_2_1;
  int ns_3_2_0;
  int ns_3_2_1;
  int s_2_2_0;
  int s_2_3_0_0;
  int s_2_3_0_1;
  int s_2_2_1;
  int s_2_3_1_0;
  int s_2_3_1_1;
  int ns_2_2_0;
  int ns_2_3_0_0;
  int ns_2_3_0_1;
  int ns_2_2_1;
  int ns_2_3_1_0;
  int ns_2_3_1_1;
  int s_1_2_0;
  int s_1_2_1;
  int ns_1_2_0;
  int ns_1_2_1;
  int s_2_4_0;
  int s_2_4_1;
  int ns_2_4_0;
  int ns_2_4_1;
  int s_9_1;
  int ns_9_1;
  int r_9;
  int nr_9;
  int s_8_1;
  int ns_8_1;
  int r_8;
  int nr_8;
  int s_7_1;
  int ns_7_1;
  int r_7;
  int nr_7;
  int s_6_2;
  int s_6_1;
  int ns_6_2;
  int ns_6_1;
  int r_6;
  int nr_6;
  int s_5_2;
  int s_5_1;
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
  int s_2_3;
  int s_2_2;
  int s_2_1;
  int ns_2_3;
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
  int s_2_4;
  int s_1_3;
  int ns_2_4;
  int ns_1_3;
  int r;
  int nr;
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
  sw_1 = blind_switch;
  failed_recovered_6 = blind_failed_recovered;
  ck_26_1 = self->v_521;
  ck_26_2 = self->v_522;
  sw = light_switch;
  failed_recovered_5 = light_failed_recovered;
  ck_24_1 = self->v_537;
  ck_24_2 = self->v_538;
  failed_recovered_4 = air_failed_recovered;
  ck_22_1 = self->v_575;
  ck_22_2 = self->v_576;
  ck_22_3 = self->v_577;
  failed_recovered_3 = window_failed_recovered;
  ck_20_1 = self->v_610;
  ck_20_2 = self->v_611;
  failed_recovered_2 = closet_failed_recovered;
  ck_18_1 = self->v_626;
  ck_18_2 = self->v_627;
  failed_recovered_1 = door_failed_recovered;
  ck_16_1 = self->v_642;
  ck_16_2 = self->v_643;
  failed_recovered = pc_failed_recovered;
  ck_14_1 = self->v_658;
  ck_14_2 = self->v_659;
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
                                                    self->ck_1, self->pnr_9,
                                                    self->ck_10_1,
                                                    self->pnr_8,
                                                    self->ck_12_1,
                                                    self->pnr_7, self->v_659,
                                                    self->v_658, self->pnr_6,
                                                    self->v_643, self->v_642,
                                                    self->pnr_5, self->v_627,
                                                    self->v_626, self->pnr_4,
                                                    self->v_611, self->v_610,
                                                    self->pnr_3, self->v_577,
                                                    self->v_576, self->v_575,
                                                    self->pnr_2, self->v_538,
                                                    self->v_537, self->pnr_1,
                                                    self->v_522, self->v_521,
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
  if (ck_26_1) {
    ck_26_2_1 = ck_26_2;
    if (ck_26_2_1) {
      if (failed_recovered_6) {
        v_375 = true;
        v_374_1 = true;
        v_374_2 = false;
      } else {
        v_375 = self->pnr;
        v_374_1 = true;
        v_374_2 = true;
      };
      v_372 = !(c2_2);
      v_371 = (c1_2&&sw_1);
      v_373 = (v_371||v_372);
      if (v_373) {
        r_St_8_Off = true;
        s_St_8_Off_1 = false;
        s_St_8_Off_2 = true;
      } else {
        r_St_8_Off = v_375;
        s_St_8_Off_1 = v_374_1;
        s_St_8_Off_2 = v_374_2;
      };
      v_527 = r_St_8_Off;
      v_523 = s_St_8_Off_1;
      v_524 = s_St_8_Off_2;
      if (v_374_1) {
        v_374_2_1 = v_374_2;
      } else {
        v_374_2_0 = v_374_2;
      };
      if (s_St_8_Off_1) {
        s_St_8_Off_2_1 = s_St_8_Off_2;
      } else {
        s_St_8_Off_2_0 = s_St_8_Off_2;
      };
    } else {
      if (failed_recovered_6) {
        v_370 = true;
        v_369_1 = true;
        v_369_2 = true;
      } else {
        v_370 = self->pnr;
        v_369_1 = true;
        v_369_2 = false;
      };
      v_367 = !(c2_2);
      v_366 = (c1_2&&sw_1);
      v_368 = (v_366||v_367);
      if (v_368) {
        r_St_8_Off_fail = true;
      } else {
        r_St_8_Off_fail = v_370;
      };
      v_527 = r_St_8_Off_fail;
      if (v_368) {
        s_St_8_Off_fail_1 = false;
      } else {
        s_St_8_Off_fail_1 = v_369_1;
      };
      v_523 = s_St_8_Off_fail_1;
      if (v_368) {
        s_St_8_Off_fail_2 = false;
      } else {
        s_St_8_Off_fail_2 = v_369_2;
      };
      v_524 = s_St_8_Off_fail_2;
      if (v_369_1) {
        v_369_2_1 = v_369_2;
      } else {
        v_369_2_0 = v_369_2;
      };
      if (s_St_8_Off_fail_1) {
        s_St_8_Off_fail_2_1 = s_St_8_Off_fail_2;
      } else {
        s_St_8_Off_fail_2_0 = s_St_8_Off_fail_2;
      };
    };
    s_1_3 = v_523;
    s_2_4 = v_524;
    r = v_527;
  } else {
    ck_26_2_0 = ck_26_2;
    if (ck_26_2_0) {
      if (failed_recovered_6) {
        v_365 = true;
        v_364_1 = false;
        v_364_2 = false;
      } else {
        v_365 = self->pnr;
        v_364_1 = false;
        v_364_2 = true;
      };
      v_362 = !(c2_2);
      v_361 = (c1_2&&sw_1);
      v_363 = (v_361||v_362);
      if (v_363) {
        r_St_8_On = true;
        s_St_8_On_1 = true;
        s_St_8_On_2 = true;
      } else {
        r_St_8_On = v_365;
        s_St_8_On_1 = v_364_1;
        s_St_8_On_2 = v_364_2;
      };
      v_528 = r_St_8_On;
      v_525 = s_St_8_On_1;
      v_526 = s_St_8_On_2;
    } else {
      if (failed_recovered_6) {
        v_360 = true;
        v_359_1 = false;
        v_359_2 = true;
      } else {
        v_360 = self->pnr;
        v_359_1 = false;
        v_359_2 = false;
      };
      v_357 = !(c2_2);
      v_356 = (c1_2&&sw_1);
      v_358 = (v_356||v_357);
      if (v_358) {
        r_St_8_On_fail = true;
      } else {
        r_St_8_On_fail = v_360;
      };
      v_528 = r_St_8_On_fail;
      if (v_358) {
        s_St_8_On_fail_1 = true;
      } else {
        s_St_8_On_fail_1 = v_359_1;
      };
      v_525 = s_St_8_On_fail_1;
      if (v_358) {
        s_St_8_On_fail_2 = false;
      } else {
        s_St_8_On_fail_2 = v_359_2;
      };
      v_526 = s_St_8_On_fail_2;
    };
    s_1_3 = v_525;
    s_2_4 = v_526;
    r = v_528;
  };
  ck_27_1 = s_1_3;
  ck_27_2 = s_2_4;
  if (ck_27_1) {
    ck_27_2_1 = ck_27_2;
    if (ck_27_2_1) {
      light_source_status_1_St_8_Off = 0;
      nr_St_8_Off = false;
      ns_St_8_Off_1 = true;
      ns_St_8_Off_2 = true;
      v_513 = light_source_status_1_St_8_Off;
      v_519 = nr_St_8_Off;
      v_515 = ns_St_8_Off_1;
      v_516 = ns_St_8_Off_2;
      if (ns_St_8_Off_1) {
        ns_St_8_Off_2_1 = ns_St_8_Off_2;
      } else {
        ns_St_8_Off_2_0 = ns_St_8_Off_2;
      };
    } else {
      light_source_status_1_St_8_Off_fail = 2;
      v_513 = light_source_status_1_St_8_Off_fail;
      nr_St_8_Off_fail = false;
      v_519 = nr_St_8_Off_fail;
      ns_St_8_Off_fail_1 = true;
      v_515 = ns_St_8_Off_fail_1;
      ns_St_8_Off_fail_2 = false;
      v_516 = ns_St_8_Off_fail_2;
      if (ns_St_8_Off_fail_1) {
        ns_St_8_Off_fail_2_1 = ns_St_8_Off_fail_2;
      } else {
        ns_St_8_Off_fail_2_0 = ns_St_8_Off_fail_2;
      };
    };
    light_source_status_1 = v_513;
    ns_1_3 = v_515;
    ns_2_4 = v_516;
    nr = v_519;
  } else {
    ck_27_2_0 = ck_27_2;
    if (ck_27_2_0) {
      light_source_status_1_St_8_On = 1;
      nr_St_8_On = false;
      ns_St_8_On_1 = false;
      ns_St_8_On_2 = true;
      v_514 = light_source_status_1_St_8_On;
      v_520 = nr_St_8_On;
      v_517 = ns_St_8_On_1;
      v_518 = ns_St_8_On_2;
    } else {
      light_source_status_1_St_8_On_fail = 3;
      v_514 = light_source_status_1_St_8_On_fail;
      nr_St_8_On_fail = false;
      v_520 = nr_St_8_On_fail;
      ns_St_8_On_fail_1 = false;
      v_517 = ns_St_8_On_fail_1;
      ns_St_8_On_fail_2 = false;
      v_518 = ns_St_8_On_fail_2;
    };
    light_source_status_1 = v_514;
    ns_1_3 = v_517;
    ns_2_4 = v_518;
    nr = v_520;
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
  if (ns_1_3) {
    ns_2_4_1 = ns_2_4;
  } else {
    ns_2_4_0 = ns_2_4;
  };
  if (!(ck_27_1)) {
    if (ck_27_2_0) {
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
    s_2_4_1 = s_2_4;
  } else {
    s_2_4_0 = s_2_4;
  };
  if (!(ck_26_1)) {
    if (ck_26_2_0) {
      if (v_364_1) {
        v_364_2_1 = v_364_2;
      } else {
        v_364_2_0 = v_364_2;
      };
      if (s_St_8_On_1) {
        s_St_8_On_2_1 = s_St_8_On_2;
      } else {
        s_St_8_On_2_0 = s_St_8_On_2;
      };
    } else {
      if (v_359_1) {
        v_359_2_1 = v_359_2;
      } else {
        v_359_2_0 = v_359_2;
      };
      if (s_St_8_On_fail_1) {
        s_St_8_On_fail_2_1 = s_St_8_On_fail_2;
      } else {
        s_St_8_On_fail_2_0 = s_St_8_On_fail_2;
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
        v_355 = self->pnr_1;
        v_354_1 = true;
        v_354_2 = true;
      };
      v_352 = !(c2_1);
      v_351 = (c1_1&&sw);
      v_353 = (v_351||v_352);
      if (v_353) {
        r_1_St_9_Off = true;
        s_1_St_9_Off_1 = false;
        s_1_St_9_Off_2 = true;
      } else {
        r_1_St_9_Off = v_355;
        s_1_St_9_Off_1 = v_354_1;
        s_1_St_9_Off_2 = v_354_2;
      };
      v_543 = r_1_St_9_Off;
      v_539 = s_1_St_9_Off_1;
      v_540 = s_1_St_9_Off_2;
      if (v_354_1) {
        v_354_2_1 = v_354_2;
      } else {
        v_354_2_0 = v_354_2;
      };
      if (s_1_St_9_Off_1) {
        s_1_St_9_Off_2_1 = s_1_St_9_Off_2;
      } else {
        s_1_St_9_Off_2_0 = s_1_St_9_Off_2;
      };
    } else {
      if (failed_recovered_5) {
        v_350 = true;
        v_349_1 = true;
        v_349_2 = true;
      } else {
        v_350 = self->pnr_1;
        v_349_1 = true;
        v_349_2 = false;
      };
      v_347 = !(c2_1);
      v_346 = (c1_1&&sw);
      v_348 = (v_346||v_347);
      if (v_348) {
        r_1_St_9_Off_fail = true;
      } else {
        r_1_St_9_Off_fail = v_350;
      };
      v_543 = r_1_St_9_Off_fail;
      if (v_348) {
        s_1_St_9_Off_fail_1 = false;
      } else {
        s_1_St_9_Off_fail_1 = v_349_1;
      };
      v_539 = s_1_St_9_Off_fail_1;
      if (v_348) {
        s_1_St_9_Off_fail_2 = false;
      } else {
        s_1_St_9_Off_fail_2 = v_349_2;
      };
      v_540 = s_1_St_9_Off_fail_2;
      if (v_349_1) {
        v_349_2_1 = v_349_2;
      } else {
        v_349_2_0 = v_349_2;
      };
      if (s_1_St_9_Off_fail_1) {
        s_1_St_9_Off_fail_2_1 = s_1_St_9_Off_fail_2;
      } else {
        s_1_St_9_Off_fail_2_0 = s_1_St_9_Off_fail_2;
      };
    };
    s_1_1 = v_539;
    s_1_2 = v_540;
    r_1 = v_543;
  } else {
    ck_24_2_0 = ck_24_2;
    if (ck_24_2_0) {
      if (failed_recovered_5) {
        v_345 = true;
        v_344_1 = false;
        v_344_2 = false;
      } else {
        v_345 = self->pnr_1;
        v_344_1 = false;
        v_344_2 = true;
      };
      v_342 = !(c2_1);
      v_341 = (c1_1&&sw);
      v_343 = (v_341||v_342);
      if (v_343) {
        r_1_St_9_On = true;
        s_1_St_9_On_1 = true;
        s_1_St_9_On_2 = true;
      } else {
        r_1_St_9_On = v_345;
        s_1_St_9_On_1 = v_344_1;
        s_1_St_9_On_2 = v_344_2;
      };
      v_544 = r_1_St_9_On;
      v_541 = s_1_St_9_On_1;
      v_542 = s_1_St_9_On_2;
    } else {
      if (failed_recovered_5) {
        v_340 = true;
        v_339_1 = false;
        v_339_2 = true;
      } else {
        v_340 = self->pnr_1;
        v_339_1 = false;
        v_339_2 = false;
      };
      v_337 = !(c2_1);
      v_336 = (c1_1&&sw);
      v_338 = (v_336||v_337);
      if (v_338) {
        r_1_St_9_On_fail = true;
      } else {
        r_1_St_9_On_fail = v_340;
      };
      v_544 = r_1_St_9_On_fail;
      if (v_338) {
        s_1_St_9_On_fail_1 = true;
      } else {
        s_1_St_9_On_fail_1 = v_339_1;
      };
      v_541 = s_1_St_9_On_fail_1;
      if (v_338) {
        s_1_St_9_On_fail_2 = false;
      } else {
        s_1_St_9_On_fail_2 = v_339_2;
      };
      v_542 = s_1_St_9_On_fail_2;
    };
    s_1_1 = v_541;
    s_1_2 = v_542;
    r_1 = v_544;
  };
  ck_25_1 = s_1_1;
  ck_25_2 = s_1_2;
  if (ck_25_1) {
    ck_25_2_1 = ck_25_2;
    if (ck_25_2_1) {
      light_source_status_St_9_Off = 0;
      nr_1_St_9_Off = false;
      ns_1_St_9_Off_1 = true;
      ns_1_St_9_Off_2 = true;
      v_529 = light_source_status_St_9_Off;
      v_535 = nr_1_St_9_Off;
      v_531 = ns_1_St_9_Off_1;
      v_532 = ns_1_St_9_Off_2;
      if (ns_1_St_9_Off_1) {
        ns_1_St_9_Off_2_1 = ns_1_St_9_Off_2;
      } else {
        ns_1_St_9_Off_2_0 = ns_1_St_9_Off_2;
      };
    } else {
      light_source_status_St_9_Off_fail = 2;
      v_529 = light_source_status_St_9_Off_fail;
      nr_1_St_9_Off_fail = false;
      v_535 = nr_1_St_9_Off_fail;
      ns_1_St_9_Off_fail_1 = true;
      v_531 = ns_1_St_9_Off_fail_1;
      ns_1_St_9_Off_fail_2 = false;
      v_532 = ns_1_St_9_Off_fail_2;
      if (ns_1_St_9_Off_fail_1) {
        ns_1_St_9_Off_fail_2_1 = ns_1_St_9_Off_fail_2;
      } else {
        ns_1_St_9_Off_fail_2_0 = ns_1_St_9_Off_fail_2;
      };
    };
    light_source_status = v_529;
    ns_1_1 = v_531;
    ns_1_2 = v_532;
    nr_1 = v_535;
  } else {
    ck_25_2_0 = ck_25_2;
    if (ck_25_2_0) {
      light_source_status_St_9_On = 1;
      nr_1_St_9_On = false;
      ns_1_St_9_On_1 = false;
      ns_1_St_9_On_2 = true;
      v_530 = light_source_status_St_9_On;
      v_536 = nr_1_St_9_On;
      v_533 = ns_1_St_9_On_1;
      v_534 = ns_1_St_9_On_2;
    } else {
      light_source_status_St_9_On_fail = 3;
      v_530 = light_source_status_St_9_On_fail;
      nr_1_St_9_On_fail = false;
      v_536 = nr_1_St_9_On_fail;
      ns_1_St_9_On_fail_1 = false;
      v_533 = ns_1_St_9_On_fail_1;
      ns_1_St_9_On_fail_2 = false;
      v_534 = ns_1_St_9_On_fail_2;
    };
    light_source_status = v_530;
    ns_1_1 = v_533;
    ns_1_2 = v_534;
    nr_1 = v_536;
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
  if (ns_1_1) {
    ns_1_2_1 = ns_1_2;
  } else {
    ns_1_2_0 = ns_1_2;
  };
  if (!(ck_25_1)) {
    if (ck_25_2_0) {
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
  if (!(ck_24_1)) {
    if (ck_24_2_0) {
      if (v_344_1) {
        v_344_2_1 = v_344_2;
      } else {
        v_344_2_0 = v_344_2;
      };
      if (s_1_St_9_On_1) {
        s_1_St_9_On_2_1 = s_1_St_9_On_2;
      } else {
        s_1_St_9_On_2_0 = s_1_St_9_On_2;
      };
    } else {
      if (v_339_1) {
        v_339_2_1 = v_339_2;
      } else {
        v_339_2_0 = v_339_2;
      };
      if (s_1_St_9_On_fail_1) {
        s_1_St_9_On_fail_2_1 = s_1_St_9_On_fail_2;
      } else {
        s_1_St_9_On_fail_2_0 = s_1_St_9_On_fail_2;
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
          v_311 = self->pnr_2;
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
          r_2_St_10_Max = true;
          s_2_St_10_Max_1 = true;
          s_2_St_10_Max_2 = false;
          s_2_St_10_Max_3 = false;
        } else {
          r_2_St_10_Max = v_313;
          s_2_St_10_Max_1 = v_312_1;
          s_2_St_10_Max_2 = v_312_2;
          s_2_St_10_Max_3 = v_312_3;
        };
        v_596 = r_2_St_10_Max;
        v_578 = s_2_St_10_Max_1;
        v_579 = s_2_St_10_Max_2;
        v_580 = s_2_St_10_Max_3;
      } else {
        if (failed_recovered_4) {
          v_305 = true;
          v_304_1 = true;
          v_304_2 = true;
          v_304_3 = true;
        } else {
          v_305 = self->pnr_2;
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
          r_2_St_10_Max_fail = true;
        } else {
          r_2_St_10_Max_fail = v_307;
        };
        v_596 = r_2_St_10_Max_fail;
        if (v_302) {
          s_2_St_10_Max_fail_1 = false;
        } else {
          s_2_St_10_Max_fail_1 = v_306_1;
        };
        v_578 = s_2_St_10_Max_fail_1;
        if (v_302) {
          s_2_St_10_Max_fail_2 = true;
        } else {
          s_2_St_10_Max_fail_2 = v_306_2;
        };
        v_579 = s_2_St_10_Max_fail_2;
        if (v_302) {
          s_2_St_10_Max_fail_3 = true;
        } else {
          s_2_St_10_Max_fail_3 = v_306_3;
        };
        v_580 = s_2_St_10_Max_fail_3;
      };
      v_590 = v_578;
      v_591 = v_579;
      v_592 = v_580;
      v_598 = v_596;
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
        if (s_2_St_10_Max_1) {
          s_2_St_10_Max_2_1 = s_2_St_10_Max_2;
          if (s_2_St_10_Max_2_1) {
            s_2_St_10_Max_3_1_1 = s_2_St_10_Max_3;
          } else {
            s_2_St_10_Max_3_1_0 = s_2_St_10_Max_3;
          };
        } else {
          s_2_St_10_Max_2_0 = s_2_St_10_Max_2;
          if (s_2_St_10_Max_2_0) {
            s_2_St_10_Max_3_0_1 = s_2_St_10_Max_3;
          } else {
            s_2_St_10_Max_3_0_0 = s_2_St_10_Max_3;
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
        if (s_2_St_10_Max_fail_1) {
          s_2_St_10_Max_fail_2_1 = s_2_St_10_Max_fail_2;
          if (s_2_St_10_Max_fail_2_1) {
            s_2_St_10_Max_fail_3_1_1 = s_2_St_10_Max_fail_3;
          } else {
            s_2_St_10_Max_fail_3_1_0 = s_2_St_10_Max_fail_3;
          };
        } else {
          s_2_St_10_Max_fail_2_0 = s_2_St_10_Max_fail_2;
          if (s_2_St_10_Max_fail_2_0) {
            s_2_St_10_Max_fail_3_0_1 = s_2_St_10_Max_fail_3;
          } else {
            s_2_St_10_Max_fail_3_0_0 = s_2_St_10_Max_fail_3;
          };
        };
      };
    } else {
      ck_22_3_1_0 = ck_22_3;
      if (ck_22_3_1_0) {
        v_597 = true;
        v_581 = true;
        v_582 = true;
        v_583 = true;
      } else {
        if (failed_recovered_4) {
          v_323 = true;
          v_322_1 = false;
          v_322_2 = true;
          v_322_3 = true;
        } else {
          v_323 = self->pnr_2;
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
          r_2_St_10_Min = true;
        } else {
          r_2_St_10_Min = v_325;
        };
        v_597 = r_2_St_10_Min;
        if (v_320) {
          s_2_St_10_Min_1 = false;
        } else {
          s_2_St_10_Min_1 = v_324_1;
        };
        v_581 = s_2_St_10_Min_1;
        if (v_320) {
          s_2_St_10_Min_2 = true;
        } else {
          s_2_St_10_Min_2 = v_324_2;
        };
        v_582 = s_2_St_10_Min_2;
        if (v_320) {
          s_2_St_10_Min_3 = false;
        } else {
          s_2_St_10_Min_3 = v_324_3;
        };
        v_583 = s_2_St_10_Min_3;
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
        if (s_2_St_10_Min_1) {
          s_2_St_10_Min_2_1 = s_2_St_10_Min_2;
          if (s_2_St_10_Min_2_1) {
            s_2_St_10_Min_3_1_1 = s_2_St_10_Min_3;
          } else {
            s_2_St_10_Min_3_1_0 = s_2_St_10_Min_3;
          };
        } else {
          s_2_St_10_Min_2_0 = s_2_St_10_Min_2;
          if (s_2_St_10_Min_2_0) {
            s_2_St_10_Min_3_0_1 = s_2_St_10_Min_3;
          } else {
            s_2_St_10_Min_3_0_0 = s_2_St_10_Min_3;
          };
        };
      };
      v_590 = v_581;
      v_591 = v_582;
      v_592 = v_583;
      v_598 = v_597;
    };
    s_2_1 = v_590;
    s_2_2 = v_591;
    s_2_3 = v_592;
    r_2 = v_598;
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
          v_317 = self->pnr_2;
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
          r_2_St_10_Min_fail = true;
        } else {
          r_2_St_10_Min_fail = v_319;
        };
        v_599 = r_2_St_10_Min_fail;
        if (v_314) {
          s_2_St_10_Min_fail_1 = false;
        } else {
          s_2_St_10_Min_fail_1 = v_318_1;
        };
        v_584 = s_2_St_10_Min_fail_1;
        if (v_314) {
          s_2_St_10_Min_fail_2 = false;
        } else {
          s_2_St_10_Min_fail_2 = v_318_2;
        };
        v_585 = s_2_St_10_Min_fail_2;
        if (v_314) {
          s_2_St_10_Min_fail_3 = false;
        } else {
          s_2_St_10_Min_fail_3 = v_318_3;
        };
        v_586 = s_2_St_10_Min_fail_3;
      } else {
        if (failed_recovered_4) {
          v_333 = true;
          v_332_1 = false;
          v_332_2 = false;
          v_332_3 = false;
        } else {
          v_333 = self->pnr_2;
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
          r_2_St_10_Off = true;
        } else {
          r_2_St_10_Off = v_335;
        };
        if (v_331) {
          v_334_1 = true;
        } else {
          v_334_1 = v_332_1;
        };
        if (c1) {
          s_2_St_10_Off_1 = true;
        } else {
          s_2_St_10_Off_1 = v_334_1;
        };
        if (v_331) {
          v_334_2 = true;
        } else {
          v_334_2 = v_332_2;
        };
        if (c1) {
          s_2_St_10_Off_2 = false;
        } else {
          s_2_St_10_Off_2 = v_334_2;
        };
        if (v_331) {
          v_334_3 = true;
        } else {
          v_334_3 = v_332_3;
        };
        if (c1) {
          s_2_St_10_Off_3 = false;
        } else {
          s_2_St_10_Off_3 = v_334_3;
        };
        v_599 = r_2_St_10_Off;
        v_584 = s_2_St_10_Off_1;
        v_585 = s_2_St_10_Off_2;
        v_586 = s_2_St_10_Off_3;
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
      v_593 = v_584;
      v_594 = v_585;
      v_595 = v_586;
      v_601 = v_599;
    } else {
      ck_22_3_0_0 = ck_22_3;
      if (ck_22_3_0_0) {
        v_600 = true;
        v_587 = true;
        v_588 = true;
        v_589 = true;
      } else {
        if (failed_recovered_4) {
          v_328 = true;
          v_327_1 = false;
          v_327_2 = true;
          v_327_3 = false;
        } else {
          v_328 = self->pnr_2;
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
          r_2_St_10_Off_fail = true;
        } else {
          r_2_St_10_Off_fail = v_330;
        };
        v_600 = r_2_St_10_Off_fail;
        if (v_326) {
          v_329_1 = true;
        } else {
          v_329_1 = v_327_1;
        };
        if (c1) {
          s_2_St_10_Off_fail_1 = false;
        } else {
          s_2_St_10_Off_fail_1 = v_329_1;
        };
        v_587 = s_2_St_10_Off_fail_1;
        if (v_326) {
          v_329_2 = true;
        } else {
          v_329_2 = v_327_2;
        };
        if (c1) {
          s_2_St_10_Off_fail_2 = true;
        } else {
          s_2_St_10_Off_fail_2 = v_329_2;
        };
        v_588 = s_2_St_10_Off_fail_2;
        if (v_326) {
          v_329_3 = false;
        } else {
          v_329_3 = v_327_3;
        };
        if (c1) {
          s_2_St_10_Off_fail_3 = true;
        } else {
          s_2_St_10_Off_fail_3 = v_329_3;
        };
        v_589 = s_2_St_10_Off_fail_3;
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
        if (s_2_St_10_Off_fail_1) {
          s_2_St_10_Off_fail_2_1 = s_2_St_10_Off_fail_2;
          if (s_2_St_10_Off_fail_2_1) {
            s_2_St_10_Off_fail_3_1_1 = s_2_St_10_Off_fail_3;
          } else {
            s_2_St_10_Off_fail_3_1_0 = s_2_St_10_Off_fail_3;
          };
        } else {
          s_2_St_10_Off_fail_2_0 = s_2_St_10_Off_fail_2;
          if (s_2_St_10_Off_fail_2_0) {
            s_2_St_10_Off_fail_3_0_1 = s_2_St_10_Off_fail_3;
          } else {
            s_2_St_10_Off_fail_3_0_0 = s_2_St_10_Off_fail_3;
          };
        };
      };
      v_593 = v_587;
      v_594 = v_588;
      v_595 = v_589;
      v_601 = v_600;
    };
    s_2_1 = v_593;
    s_2_2 = v_594;
    s_2_3 = v_595;
    r_2 = v_601;
  };
  ck_23_1 = s_2_1;
  ck_23_2 = s_2_2;
  ck_23_3 = s_2_3;
  if (ck_23_1) {
    ck_23_2_1 = ck_23_2;
    if (ck_23_2_1) {
      ck_23_3_1_1 = ck_23_3;
      if (ck_23_3_1_1) {
        air_status_1_St_10_Max = 2;
        nr_2_St_10_Max = false;
        ns_2_St_10_Max_1 = true;
        ns_2_St_10_Max_2 = true;
        ns_2_St_10_Max_3 = true;
        v_545 = air_status_1_St_10_Max;
        v_569 = nr_2_St_10_Max;
        v_551 = ns_2_St_10_Max_1;
        v_552 = ns_2_St_10_Max_2;
        v_553 = ns_2_St_10_Max_3;
      } else {
        air_status_1_St_10_Max_fail = 5;
        v_545 = air_status_1_St_10_Max_fail;
        nr_2_St_10_Max_fail = false;
        v_569 = nr_2_St_10_Max_fail;
        ns_2_St_10_Max_fail_1 = true;
        v_551 = ns_2_St_10_Max_fail_1;
        ns_2_St_10_Max_fail_2 = true;
        v_552 = ns_2_St_10_Max_fail_2;
        ns_2_St_10_Max_fail_3 = false;
        v_553 = ns_2_St_10_Max_fail_3;
      };
      v_547 = v_545;
      v_563 = v_551;
      v_564 = v_552;
      v_565 = v_553;
      v_571 = v_569;
      if (ck_23_3_1_1) {
        if (ns_2_St_10_Max_1) {
          ns_2_St_10_Max_2_1 = ns_2_St_10_Max_2;
          if (ns_2_St_10_Max_2_1) {
            ns_2_St_10_Max_3_1_1 = ns_2_St_10_Max_3;
          } else {
            ns_2_St_10_Max_3_1_0 = ns_2_St_10_Max_3;
          };
        } else {
          ns_2_St_10_Max_2_0 = ns_2_St_10_Max_2;
          if (ns_2_St_10_Max_2_0) {
            ns_2_St_10_Max_3_0_1 = ns_2_St_10_Max_3;
          } else {
            ns_2_St_10_Max_3_0_0 = ns_2_St_10_Max_3;
          };
        };
      } else {
        if (ns_2_St_10_Max_fail_1) {
          ns_2_St_10_Max_fail_2_1 = ns_2_St_10_Max_fail_2;
          if (ns_2_St_10_Max_fail_2_1) {
            ns_2_St_10_Max_fail_3_1_1 = ns_2_St_10_Max_fail_3;
          } else {
            ns_2_St_10_Max_fail_3_1_0 = ns_2_St_10_Max_fail_3;
          };
        } else {
          ns_2_St_10_Max_fail_2_0 = ns_2_St_10_Max_fail_2;
          if (ns_2_St_10_Max_fail_2_0) {
            ns_2_St_10_Max_fail_3_0_1 = ns_2_St_10_Max_fail_3;
          } else {
            ns_2_St_10_Max_fail_3_0_0 = ns_2_St_10_Max_fail_3;
          };
        };
      };
    } else {
      ck_23_3_1_0 = ck_23_3;
      if (ck_23_3_1_0) {
        v_546 = 0;
        v_570 = true;
        v_554 = true;
        v_555 = true;
        v_556 = true;
      } else {
        air_status_1_St_10_Min = 1;
        v_546 = air_status_1_St_10_Min;
        nr_2_St_10_Min = false;
        v_570 = nr_2_St_10_Min;
        ns_2_St_10_Min_1 = true;
        v_554 = ns_2_St_10_Min_1;
        ns_2_St_10_Min_2 = false;
        v_555 = ns_2_St_10_Min_2;
        ns_2_St_10_Min_3 = false;
        v_556 = ns_2_St_10_Min_3;
        if (ns_2_St_10_Min_1) {
          ns_2_St_10_Min_2_1 = ns_2_St_10_Min_2;
          if (ns_2_St_10_Min_2_1) {
            ns_2_St_10_Min_3_1_1 = ns_2_St_10_Min_3;
          } else {
            ns_2_St_10_Min_3_1_0 = ns_2_St_10_Min_3;
          };
        } else {
          ns_2_St_10_Min_2_0 = ns_2_St_10_Min_2;
          if (ns_2_St_10_Min_2_0) {
            ns_2_St_10_Min_3_0_1 = ns_2_St_10_Min_3;
          } else {
            ns_2_St_10_Min_3_0_0 = ns_2_St_10_Min_3;
          };
        };
      };
      v_547 = v_546;
      v_563 = v_554;
      v_564 = v_555;
      v_565 = v_556;
      v_571 = v_570;
    };
    air_status_1 = v_547;
    ns_2_1 = v_563;
    ns_2_2 = v_564;
    ns_2_3 = v_565;
    nr_2 = v_571;
  } else {
    ck_23_2_0 = ck_23_2;
    if (ck_23_2_0) {
      ck_23_3_0_1 = ck_23_3;
      if (ck_23_3_0_1) {
        air_status_1_St_10_Min_fail = 4;
        v_548 = air_status_1_St_10_Min_fail;
        nr_2_St_10_Min_fail = false;
        v_572 = nr_2_St_10_Min_fail;
        ns_2_St_10_Min_fail_1 = false;
        v_557 = ns_2_St_10_Min_fail_1;
        ns_2_St_10_Min_fail_2 = true;
        v_558 = ns_2_St_10_Min_fail_2;
        ns_2_St_10_Min_fail_3 = true;
        v_559 = ns_2_St_10_Min_fail_3;
      } else {
        air_status_1_St_10_Off = 0;
        nr_2_St_10_Off = false;
        ns_2_St_10_Off_1 = false;
        ns_2_St_10_Off_2 = true;
        ns_2_St_10_Off_3 = false;
        v_548 = air_status_1_St_10_Off;
        v_572 = nr_2_St_10_Off;
        v_557 = ns_2_St_10_Off_1;
        v_558 = ns_2_St_10_Off_2;
        v_559 = ns_2_St_10_Off_3;
      };
      v_550 = v_548;
      v_566 = v_557;
      v_567 = v_558;
      v_568 = v_559;
      v_574 = v_572;
    } else {
      ck_23_3_0_0 = ck_23_3;
      if (ck_23_3_0_0) {
        v_549 = 0;
        v_573 = true;
        v_560 = true;
        v_561 = true;
        v_562 = true;
      } else {
        air_status_1_St_10_Off_fail = 3;
        v_549 = air_status_1_St_10_Off_fail;
        nr_2_St_10_Off_fail = false;
        v_573 = nr_2_St_10_Off_fail;
        ns_2_St_10_Off_fail_1 = false;
        v_560 = ns_2_St_10_Off_fail_1;
        ns_2_St_10_Off_fail_2 = false;
        v_561 = ns_2_St_10_Off_fail_2;
        ns_2_St_10_Off_fail_3 = false;
        v_562 = ns_2_St_10_Off_fail_3;
        if (ns_2_St_10_Off_fail_1) {
          ns_2_St_10_Off_fail_2_1 = ns_2_St_10_Off_fail_2;
          if (ns_2_St_10_Off_fail_2_1) {
            ns_2_St_10_Off_fail_3_1_1 = ns_2_St_10_Off_fail_3;
          } else {
            ns_2_St_10_Off_fail_3_1_0 = ns_2_St_10_Off_fail_3;
          };
        } else {
          ns_2_St_10_Off_fail_2_0 = ns_2_St_10_Off_fail_2;
          if (ns_2_St_10_Off_fail_2_0) {
            ns_2_St_10_Off_fail_3_0_1 = ns_2_St_10_Off_fail_3;
          } else {
            ns_2_St_10_Off_fail_3_0_0 = ns_2_St_10_Off_fail_3;
          };
        };
      };
      v_550 = v_549;
      v_566 = v_560;
      v_567 = v_561;
      v_568 = v_562;
      v_574 = v_573;
    };
    air_status_1 = v_550;
    ns_2_1 = v_566;
    ns_2_2 = v_567;
    ns_2_3 = v_568;
    nr_2 = v_574;
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
  if (ns_2_1) {
    ns_2_2_1 = ns_2_2;
    if (ns_2_2_1) {
      ns_2_3_1_1 = ns_2_3;
    } else {
      ns_2_3_1_0 = ns_2_3;
    };
  } else {
    ns_2_2_0 = ns_2_2;
    if (ns_2_2_0) {
      ns_2_3_0_1 = ns_2_3;
    } else {
      ns_2_3_0_0 = ns_2_3;
    };
  };
  if (!(ck_23_1)) {
    if (ck_23_2_0) {
      if (ck_23_3_0_1) {
        if (ns_2_St_10_Min_fail_1) {
          ns_2_St_10_Min_fail_2_1 = ns_2_St_10_Min_fail_2;
          if (ns_2_St_10_Min_fail_2_1) {
            ns_2_St_10_Min_fail_3_1_1 = ns_2_St_10_Min_fail_3;
          } else {
            ns_2_St_10_Min_fail_3_1_0 = ns_2_St_10_Min_fail_3;
          };
        } else {
          ns_2_St_10_Min_fail_2_0 = ns_2_St_10_Min_fail_2;
          if (ns_2_St_10_Min_fail_2_0) {
            ns_2_St_10_Min_fail_3_0_1 = ns_2_St_10_Min_fail_3;
          } else {
            ns_2_St_10_Min_fail_3_0_0 = ns_2_St_10_Min_fail_3;
          };
        };
      } else {
        if (ns_2_St_10_Off_1) {
          ns_2_St_10_Off_2_1 = ns_2_St_10_Off_2;
          if (ns_2_St_10_Off_2_1) {
            ns_2_St_10_Off_3_1_1 = ns_2_St_10_Off_3;
          } else {
            ns_2_St_10_Off_3_1_0 = ns_2_St_10_Off_3;
          };
        } else {
          ns_2_St_10_Off_2_0 = ns_2_St_10_Off_2;
          if (ns_2_St_10_Off_2_0) {
            ns_2_St_10_Off_3_0_1 = ns_2_St_10_Off_3;
          } else {
            ns_2_St_10_Off_3_0_0 = ns_2_St_10_Off_3;
          };
        };
      };
    };
  };
  if (s_2_1) {
    s_2_2_1 = s_2_2;
    if (s_2_2_1) {
      s_2_3_1_1 = s_2_3;
    } else {
      s_2_3_1_0 = s_2_3;
    };
  } else {
    s_2_2_0 = s_2_2;
    if (s_2_2_0) {
      s_2_3_0_1 = s_2_3;
    } else {
      s_2_3_0_0 = s_2_3;
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
        if (s_2_St_10_Min_fail_1) {
          s_2_St_10_Min_fail_2_1 = s_2_St_10_Min_fail_2;
          if (s_2_St_10_Min_fail_2_1) {
            s_2_St_10_Min_fail_3_1_1 = s_2_St_10_Min_fail_3;
          } else {
            s_2_St_10_Min_fail_3_1_0 = s_2_St_10_Min_fail_3;
          };
        } else {
          s_2_St_10_Min_fail_2_0 = s_2_St_10_Min_fail_2;
          if (s_2_St_10_Min_fail_2_0) {
            s_2_St_10_Min_fail_3_0_1 = s_2_St_10_Min_fail_3;
          } else {
            s_2_St_10_Min_fail_3_0_0 = s_2_St_10_Min_fail_3;
          };
        };
      } else {
        if (s_2_St_10_Off_1) {
          s_2_St_10_Off_2_1 = s_2_St_10_Off_2;
          if (s_2_St_10_Off_2_1) {
            s_2_St_10_Off_3_1_1 = s_2_St_10_Off_3;
          } else {
            s_2_St_10_Off_3_1_0 = s_2_St_10_Off_3;
          };
        } else {
          s_2_St_10_Off_2_0 = s_2_St_10_Off_2;
          if (s_2_St_10_Off_2_0) {
            s_2_St_10_Off_3_0_1 = s_2_St_10_Off_3;
          } else {
            s_2_St_10_Off_3_0_0 = s_2_St_10_Off_3;
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
        v_301 = self->pnr_3;
        v_300_1 = true;
        v_300_2 = true;
      };
      v_299 = !(c_3);
      if (v_299) {
        r_3_St_11_Closed = true;
        s_3_St_11_Closed_1 = false;
        s_3_St_11_Closed_2 = true;
      } else {
        r_3_St_11_Closed = v_301;
        s_3_St_11_Closed_1 = v_300_1;
        s_3_St_11_Closed_2 = v_300_2;
      };
      v_616 = r_3_St_11_Closed;
      v_612 = s_3_St_11_Closed_1;
      v_613 = s_3_St_11_Closed_2;
      if (v_300_1) {
        v_300_2_1 = v_300_2;
      } else {
        v_300_2_0 = v_300_2;
      };
      if (s_3_St_11_Closed_1) {
        s_3_St_11_Closed_2_1 = s_3_St_11_Closed_2;
      } else {
        s_3_St_11_Closed_2_0 = s_3_St_11_Closed_2;
      };
    } else {
      if (failed_recovered_3) {
        v_298 = true;
        v_297_1 = true;
        v_297_2 = true;
      } else {
        v_298 = self->pnr_3;
        v_297_1 = true;
        v_297_2 = false;
      };
      v_296 = !(c_3);
      if (v_296) {
        r_3_St_11_Closed_fail = true;
      } else {
        r_3_St_11_Closed_fail = v_298;
      };
      v_616 = r_3_St_11_Closed_fail;
      if (v_296) {
        s_3_St_11_Closed_fail_1 = false;
      } else {
        s_3_St_11_Closed_fail_1 = v_297_1;
      };
      v_612 = s_3_St_11_Closed_fail_1;
      if (v_296) {
        s_3_St_11_Closed_fail_2 = false;
      } else {
        s_3_St_11_Closed_fail_2 = v_297_2;
      };
      v_613 = s_3_St_11_Closed_fail_2;
      if (v_297_1) {
        v_297_2_1 = v_297_2;
      } else {
        v_297_2_0 = v_297_2;
      };
      if (s_3_St_11_Closed_fail_1) {
        s_3_St_11_Closed_fail_2_1 = s_3_St_11_Closed_fail_2;
      } else {
        s_3_St_11_Closed_fail_2_0 = s_3_St_11_Closed_fail_2;
      };
    };
    s_3_1 = v_612;
    s_3_2 = v_613;
    r_3 = v_616;
  } else {
    ck_20_2_0 = ck_20_2;
    if (ck_20_2_0) {
      if (failed_recovered_3) {
        v_295 = true;
      } else {
        v_295 = self->pnr_3;
      };
      if (c_3) {
        r_3_St_11_Open = true;
      } else {
        r_3_St_11_Open = v_295;
      };
      if (failed_recovered_3) {
        v_294_1 = false;
      } else {
        v_294_1 = false;
      };
      if (c_3) {
        s_3_St_11_Open_1 = true;
      } else {
        s_3_St_11_Open_1 = v_294_1;
      };
      if (failed_recovered_3) {
        v_294_2 = false;
      } else {
        v_294_2 = true;
      };
      if (c_3) {
        s_3_St_11_Open_2 = true;
      } else {
        s_3_St_11_Open_2 = v_294_2;
      };
      v_617 = r_3_St_11_Open;
      v_614 = s_3_St_11_Open_1;
      v_615 = s_3_St_11_Open_2;
    } else {
      if (failed_recovered_3) {
        v_293 = true;
      } else {
        v_293 = self->pnr_3;
      };
      if (c_3) {
        r_3_St_11_Open_fail = true;
      } else {
        r_3_St_11_Open_fail = v_293;
      };
      v_617 = r_3_St_11_Open_fail;
      if (failed_recovered_3) {
        v_292_1 = false;
      } else {
        v_292_1 = false;
      };
      if (c_3) {
        s_3_St_11_Open_fail_1 = true;
      } else {
        s_3_St_11_Open_fail_1 = v_292_1;
      };
      v_614 = s_3_St_11_Open_fail_1;
      if (failed_recovered_3) {
        v_292_2 = true;
      } else {
        v_292_2 = false;
      };
      if (c_3) {
        s_3_St_11_Open_fail_2 = false;
      } else {
        s_3_St_11_Open_fail_2 = v_292_2;
      };
      v_615 = s_3_St_11_Open_fail_2;
    };
    s_3_1 = v_614;
    s_3_2 = v_615;
    r_3 = v_617;
  };
  ck_21_1 = s_3_1;
  ck_21_2 = s_3_2;
  if (ck_21_1) {
    ck_21_2_1 = ck_21_2;
    if (ck_21_2_1) {
      window_status_1_St_11_Closed = 0;
      nr_3_St_11_Closed = false;
      ns_3_St_11_Closed_1 = true;
      ns_3_St_11_Closed_2 = true;
      v_602 = window_status_1_St_11_Closed;
      v_608 = nr_3_St_11_Closed;
      v_604 = ns_3_St_11_Closed_1;
      v_605 = ns_3_St_11_Closed_2;
      if (ns_3_St_11_Closed_1) {
        ns_3_St_11_Closed_2_1 = ns_3_St_11_Closed_2;
      } else {
        ns_3_St_11_Closed_2_0 = ns_3_St_11_Closed_2;
      };
    } else {
      window_status_1_St_11_Closed_fail = 2;
      v_602 = window_status_1_St_11_Closed_fail;
      nr_3_St_11_Closed_fail = false;
      v_608 = nr_3_St_11_Closed_fail;
      ns_3_St_11_Closed_fail_1 = true;
      v_604 = ns_3_St_11_Closed_fail_1;
      ns_3_St_11_Closed_fail_2 = false;
      v_605 = ns_3_St_11_Closed_fail_2;
      if (ns_3_St_11_Closed_fail_1) {
        ns_3_St_11_Closed_fail_2_1 = ns_3_St_11_Closed_fail_2;
      } else {
        ns_3_St_11_Closed_fail_2_0 = ns_3_St_11_Closed_fail_2;
      };
    };
    window_status_1 = v_602;
    ns_3_1 = v_604;
    ns_3_2 = v_605;
    nr_3 = v_608;
  } else {
    ck_21_2_0 = ck_21_2;
    if (ck_21_2_0) {
      window_status_1_St_11_Open = 1;
      nr_3_St_11_Open = false;
      ns_3_St_11_Open_1 = false;
      ns_3_St_11_Open_2 = true;
      v_603 = window_status_1_St_11_Open;
      v_609 = nr_3_St_11_Open;
      v_606 = ns_3_St_11_Open_1;
      v_607 = ns_3_St_11_Open_2;
    } else {
      window_status_1_St_11_Open_fail = 3;
      v_603 = window_status_1_St_11_Open_fail;
      nr_3_St_11_Open_fail = false;
      v_609 = nr_3_St_11_Open_fail;
      ns_3_St_11_Open_fail_1 = false;
      v_606 = ns_3_St_11_Open_fail_1;
      ns_3_St_11_Open_fail_2 = false;
      v_607 = ns_3_St_11_Open_fail_2;
    };
    window_status_1 = v_603;
    ns_3_1 = v_606;
    ns_3_2 = v_607;
    nr_3 = v_609;
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
  if (ns_3_1) {
    ns_3_2_1 = ns_3_2;
  } else {
    ns_3_2_0 = ns_3_2;
  };
  if (!(ck_21_1)) {
    if (ck_21_2_0) {
      if (ns_3_St_11_Open_1) {
        ns_3_St_11_Open_2_1 = ns_3_St_11_Open_2;
      } else {
        ns_3_St_11_Open_2_0 = ns_3_St_11_Open_2;
      };
    } else {
      if (ns_3_St_11_Open_fail_1) {
        ns_3_St_11_Open_fail_2_1 = ns_3_St_11_Open_fail_2;
      } else {
        ns_3_St_11_Open_fail_2_0 = ns_3_St_11_Open_fail_2;
      };
    };
  };
  if (s_3_1) {
    s_3_2_1 = s_3_2;
  } else {
    s_3_2_0 = s_3_2;
  };
  if (!(ck_20_1)) {
    if (ck_20_2_0) {
      if (v_294_1) {
        v_294_2_1 = v_294_2;
      } else {
        v_294_2_0 = v_294_2;
      };
      if (s_3_St_11_Open_1) {
        s_3_St_11_Open_2_1 = s_3_St_11_Open_2;
      } else {
        s_3_St_11_Open_2_0 = s_3_St_11_Open_2;
      };
    } else {
      if (v_292_1) {
        v_292_2_1 = v_292_2;
      } else {
        v_292_2_0 = v_292_2;
      };
      if (s_3_St_11_Open_fail_1) {
        s_3_St_11_Open_fail_2_1 = s_3_St_11_Open_fail_2;
      } else {
        s_3_St_11_Open_fail_2_0 = s_3_St_11_Open_fail_2;
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
        v_291 = self->pnr_4;
        v_290_1 = true;
        v_290_2 = true;
      };
      v_289 = !(c_2);
      if (v_289) {
        r_4_St_12_Locked = true;
        s_4_St_12_Locked_1 = false;
        s_4_St_12_Locked_2 = true;
      } else {
        r_4_St_12_Locked = v_291;
        s_4_St_12_Locked_1 = v_290_1;
        s_4_St_12_Locked_2 = v_290_2;
      };
      v_632 = r_4_St_12_Locked;
      v_628 = s_4_St_12_Locked_1;
      v_629 = s_4_St_12_Locked_2;
      if (v_290_1) {
        v_290_2_1 = v_290_2;
      } else {
        v_290_2_0 = v_290_2;
      };
      if (s_4_St_12_Locked_1) {
        s_4_St_12_Locked_2_1 = s_4_St_12_Locked_2;
      } else {
        s_4_St_12_Locked_2_0 = s_4_St_12_Locked_2;
      };
    } else {
      if (failed_recovered_2) {
        v_288 = true;
        v_287_1 = true;
        v_287_2 = true;
      } else {
        v_288 = self->pnr_4;
        v_287_1 = true;
        v_287_2 = false;
      };
      v_286 = !(c_2);
      if (v_286) {
        r_4_St_12_Locked_fail = true;
      } else {
        r_4_St_12_Locked_fail = v_288;
      };
      v_632 = r_4_St_12_Locked_fail;
      if (v_286) {
        s_4_St_12_Locked_fail_1 = false;
      } else {
        s_4_St_12_Locked_fail_1 = v_287_1;
      };
      v_628 = s_4_St_12_Locked_fail_1;
      if (v_286) {
        s_4_St_12_Locked_fail_2 = false;
      } else {
        s_4_St_12_Locked_fail_2 = v_287_2;
      };
      v_629 = s_4_St_12_Locked_fail_2;
      if (v_287_1) {
        v_287_2_1 = v_287_2;
      } else {
        v_287_2_0 = v_287_2;
      };
      if (s_4_St_12_Locked_fail_1) {
        s_4_St_12_Locked_fail_2_1 = s_4_St_12_Locked_fail_2;
      } else {
        s_4_St_12_Locked_fail_2_0 = s_4_St_12_Locked_fail_2;
      };
    };
    s_4_1 = v_628;
    s_4_2 = v_629;
    r_4 = v_632;
  } else {
    ck_18_2_0 = ck_18_2;
    if (ck_18_2_0) {
      if (failed_recovered_2) {
        v_285 = true;
      } else {
        v_285 = self->pnr_4;
      };
      if (c_2) {
        r_4_St_12_Open = true;
      } else {
        r_4_St_12_Open = v_285;
      };
      if (failed_recovered_2) {
        v_284_1 = false;
      } else {
        v_284_1 = false;
      };
      if (c_2) {
        s_4_St_12_Open_1 = true;
      } else {
        s_4_St_12_Open_1 = v_284_1;
      };
      if (failed_recovered_2) {
        v_284_2 = false;
      } else {
        v_284_2 = true;
      };
      if (c_2) {
        s_4_St_12_Open_2 = true;
      } else {
        s_4_St_12_Open_2 = v_284_2;
      };
      v_633 = r_4_St_12_Open;
      v_630 = s_4_St_12_Open_1;
      v_631 = s_4_St_12_Open_2;
    } else {
      if (failed_recovered_2) {
        v_283 = true;
      } else {
        v_283 = self->pnr_4;
      };
      if (c_2) {
        r_4_St_12_Open_fail = true;
      } else {
        r_4_St_12_Open_fail = v_283;
      };
      v_633 = r_4_St_12_Open_fail;
      if (failed_recovered_2) {
        v_282_1 = false;
      } else {
        v_282_1 = false;
      };
      if (c_2) {
        s_4_St_12_Open_fail_1 = true;
      } else {
        s_4_St_12_Open_fail_1 = v_282_1;
      };
      v_630 = s_4_St_12_Open_fail_1;
      if (failed_recovered_2) {
        v_282_2 = true;
      } else {
        v_282_2 = false;
      };
      if (c_2) {
        s_4_St_12_Open_fail_2 = false;
      } else {
        s_4_St_12_Open_fail_2 = v_282_2;
      };
      v_631 = s_4_St_12_Open_fail_2;
    };
    s_4_1 = v_630;
    s_4_2 = v_631;
    r_4 = v_633;
  };
  ck_19_1 = s_4_1;
  ck_19_2 = s_4_2;
  if (ck_19_1) {
    ck_19_2_1 = ck_19_2;
    if (ck_19_2_1) {
      closet_status_1_St_12_Locked = 0;
      nr_4_St_12_Locked = false;
      ns_4_St_12_Locked_1 = true;
      ns_4_St_12_Locked_2 = true;
      v_618 = closet_status_1_St_12_Locked;
      v_624 = nr_4_St_12_Locked;
      v_620 = ns_4_St_12_Locked_1;
      v_621 = ns_4_St_12_Locked_2;
      if (ns_4_St_12_Locked_1) {
        ns_4_St_12_Locked_2_1 = ns_4_St_12_Locked_2;
      } else {
        ns_4_St_12_Locked_2_0 = ns_4_St_12_Locked_2;
      };
    } else {
      closet_status_1_St_12_Locked_fail = 2;
      v_618 = closet_status_1_St_12_Locked_fail;
      nr_4_St_12_Locked_fail = false;
      v_624 = nr_4_St_12_Locked_fail;
      ns_4_St_12_Locked_fail_1 = true;
      v_620 = ns_4_St_12_Locked_fail_1;
      ns_4_St_12_Locked_fail_2 = false;
      v_621 = ns_4_St_12_Locked_fail_2;
      if (ns_4_St_12_Locked_fail_1) {
        ns_4_St_12_Locked_fail_2_1 = ns_4_St_12_Locked_fail_2;
      } else {
        ns_4_St_12_Locked_fail_2_0 = ns_4_St_12_Locked_fail_2;
      };
    };
    closet_status_1 = v_618;
    ns_4_1 = v_620;
    ns_4_2 = v_621;
    nr_4 = v_624;
  } else {
    ck_19_2_0 = ck_19_2;
    if (ck_19_2_0) {
      closet_status_1_St_12_Open = 1;
      nr_4_St_12_Open = false;
      ns_4_St_12_Open_1 = false;
      ns_4_St_12_Open_2 = true;
      v_619 = closet_status_1_St_12_Open;
      v_625 = nr_4_St_12_Open;
      v_622 = ns_4_St_12_Open_1;
      v_623 = ns_4_St_12_Open_2;
    } else {
      closet_status_1_St_12_Open_fail = 3;
      v_619 = closet_status_1_St_12_Open_fail;
      nr_4_St_12_Open_fail = false;
      v_625 = nr_4_St_12_Open_fail;
      ns_4_St_12_Open_fail_1 = false;
      v_622 = ns_4_St_12_Open_fail_1;
      ns_4_St_12_Open_fail_2 = false;
      v_623 = ns_4_St_12_Open_fail_2;
    };
    closet_status_1 = v_619;
    ns_4_1 = v_622;
    ns_4_2 = v_623;
    nr_4 = v_625;
  };
  _out->closet_status = closet_status_1;
  v_91 = (_out->closet_status<=1);
  v_94 = (_out->closet_status==0);
  v_95 = (_out->closet_status<=1);
  v_98 = (_out->closet_status==1);
  v_242 = (_out->closet_status==1);
  v_243 = !(v_242);
  if (ns_4_1) {
    ns_4_2_1 = ns_4_2;
  } else {
    ns_4_2_0 = ns_4_2;
  };
  if (!(ck_19_1)) {
    if (ck_19_2_0) {
      if (ns_4_St_12_Open_1) {
        ns_4_St_12_Open_2_1 = ns_4_St_12_Open_2;
      } else {
        ns_4_St_12_Open_2_0 = ns_4_St_12_Open_2;
      };
    } else {
      if (ns_4_St_12_Open_fail_1) {
        ns_4_St_12_Open_fail_2_1 = ns_4_St_12_Open_fail_2;
      } else {
        ns_4_St_12_Open_fail_2_0 = ns_4_St_12_Open_fail_2;
      };
    };
  };
  if (s_4_1) {
    s_4_2_1 = s_4_2;
  } else {
    s_4_2_0 = s_4_2;
  };
  if (!(ck_18_1)) {
    if (ck_18_2_0) {
      if (v_284_1) {
        v_284_2_1 = v_284_2;
      } else {
        v_284_2_0 = v_284_2;
      };
      if (s_4_St_12_Open_1) {
        s_4_St_12_Open_2_1 = s_4_St_12_Open_2;
      } else {
        s_4_St_12_Open_2_0 = s_4_St_12_Open_2;
      };
    } else {
      if (v_282_1) {
        v_282_2_1 = v_282_2;
      } else {
        v_282_2_0 = v_282_2;
      };
      if (s_4_St_12_Open_fail_1) {
        s_4_St_12_Open_fail_2_1 = s_4_St_12_Open_fail_2;
      } else {
        s_4_St_12_Open_fail_2_0 = s_4_St_12_Open_fail_2;
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
        v_281 = self->pnr_5;
        v_280_1 = true;
        v_280_2 = true;
      };
      v_279 = !(c_1);
      if (v_279) {
        r_5_St_13_Closed = true;
        s_5_St_13_Closed_1 = false;
        s_5_St_13_Closed_2 = true;
      } else {
        r_5_St_13_Closed = v_281;
        s_5_St_13_Closed_1 = v_280_1;
        s_5_St_13_Closed_2 = v_280_2;
      };
      v_648 = r_5_St_13_Closed;
      v_644 = s_5_St_13_Closed_1;
      v_645 = s_5_St_13_Closed_2;
      if (v_280_1) {
        v_280_2_1 = v_280_2;
      } else {
        v_280_2_0 = v_280_2;
      };
      if (s_5_St_13_Closed_1) {
        s_5_St_13_Closed_2_1 = s_5_St_13_Closed_2;
      } else {
        s_5_St_13_Closed_2_0 = s_5_St_13_Closed_2;
      };
    } else {
      if (failed_recovered_1) {
        v_278 = true;
        v_277_1 = true;
        v_277_2 = true;
      } else {
        v_278 = self->pnr_5;
        v_277_1 = true;
        v_277_2 = false;
      };
      v_276 = !(c_1);
      if (v_276) {
        r_5_St_13_Closed_fail = true;
      } else {
        r_5_St_13_Closed_fail = v_278;
      };
      v_648 = r_5_St_13_Closed_fail;
      if (v_276) {
        s_5_St_13_Closed_fail_1 = false;
      } else {
        s_5_St_13_Closed_fail_1 = v_277_1;
      };
      v_644 = s_5_St_13_Closed_fail_1;
      if (v_276) {
        s_5_St_13_Closed_fail_2 = false;
      } else {
        s_5_St_13_Closed_fail_2 = v_277_2;
      };
      v_645 = s_5_St_13_Closed_fail_2;
      if (v_277_1) {
        v_277_2_1 = v_277_2;
      } else {
        v_277_2_0 = v_277_2;
      };
      if (s_5_St_13_Closed_fail_1) {
        s_5_St_13_Closed_fail_2_1 = s_5_St_13_Closed_fail_2;
      } else {
        s_5_St_13_Closed_fail_2_0 = s_5_St_13_Closed_fail_2;
      };
    };
    s_5_1 = v_644;
    s_5_2 = v_645;
    r_5 = v_648;
  } else {
    ck_16_2_0 = ck_16_2;
    if (ck_16_2_0) {
      if (failed_recovered_1) {
        v_275 = true;
        v_274_1 = false;
        v_274_2 = false;
      } else {
        v_275 = self->pnr_5;
        v_274_1 = false;
        v_274_2 = true;
      };
      v_273 = !(c_1);
      if (v_273) {
        r_5_St_13_Open = true;
        s_5_St_13_Open_1 = true;
        s_5_St_13_Open_2 = true;
      } else {
        r_5_St_13_Open = v_275;
        s_5_St_13_Open_1 = v_274_1;
        s_5_St_13_Open_2 = v_274_2;
      };
      v_649 = r_5_St_13_Open;
      v_646 = s_5_St_13_Open_1;
      v_647 = s_5_St_13_Open_2;
    } else {
      if (failed_recovered_1) {
        v_272 = true;
        v_271_1 = true;
        v_271_2 = false;
      } else {
        v_272 = self->pnr_5;
        v_271_1 = false;
        v_271_2 = false;
      };
      v_270 = !(c_1);
      if (v_270) {
        r_5_St_13_Open_fail = true;
      } else {
        r_5_St_13_Open_fail = v_272;
      };
      v_649 = r_5_St_13_Open_fail;
      if (v_270) {
        s_5_St_13_Open_fail_1 = false;
      } else {
        s_5_St_13_Open_fail_1 = v_271_1;
      };
      v_646 = s_5_St_13_Open_fail_1;
      if (v_270) {
        s_5_St_13_Open_fail_2 = false;
      } else {
        s_5_St_13_Open_fail_2 = v_271_2;
      };
      v_647 = s_5_St_13_Open_fail_2;
    };
    s_5_1 = v_646;
    s_5_2 = v_647;
    r_5 = v_649;
  };
  ck_17_1 = s_5_1;
  ck_17_2 = s_5_2;
  if (ck_17_1) {
    ck_17_2_1 = ck_17_2;
    if (ck_17_2_1) {
      door_status_1_St_13_Closed = 0;
      nr_5_St_13_Closed = false;
      ns_5_St_13_Closed_1 = true;
      ns_5_St_13_Closed_2 = true;
      v_634 = door_status_1_St_13_Closed;
      v_640 = nr_5_St_13_Closed;
      v_636 = ns_5_St_13_Closed_1;
      v_637 = ns_5_St_13_Closed_2;
      if (ns_5_St_13_Closed_1) {
        ns_5_St_13_Closed_2_1 = ns_5_St_13_Closed_2;
      } else {
        ns_5_St_13_Closed_2_0 = ns_5_St_13_Closed_2;
      };
    } else {
      door_status_1_St_13_Closed_fail = 2;
      v_634 = door_status_1_St_13_Closed_fail;
      nr_5_St_13_Closed_fail = false;
      v_640 = nr_5_St_13_Closed_fail;
      ns_5_St_13_Closed_fail_1 = true;
      v_636 = ns_5_St_13_Closed_fail_1;
      ns_5_St_13_Closed_fail_2 = false;
      v_637 = ns_5_St_13_Closed_fail_2;
      if (ns_5_St_13_Closed_fail_1) {
        ns_5_St_13_Closed_fail_2_1 = ns_5_St_13_Closed_fail_2;
      } else {
        ns_5_St_13_Closed_fail_2_0 = ns_5_St_13_Closed_fail_2;
      };
    };
    door_status_1 = v_634;
    ns_5_1 = v_636;
    ns_5_2 = v_637;
    nr_5 = v_640;
  } else {
    ck_17_2_0 = ck_17_2;
    if (ck_17_2_0) {
      door_status_1_St_13_Open = 1;
      nr_5_St_13_Open = false;
      ns_5_St_13_Open_1 = false;
      ns_5_St_13_Open_2 = true;
      v_635 = door_status_1_St_13_Open;
      v_641 = nr_5_St_13_Open;
      v_638 = ns_5_St_13_Open_1;
      v_639 = ns_5_St_13_Open_2;
    } else {
      door_status_1_St_13_Open_fail = 3;
      v_635 = door_status_1_St_13_Open_fail;
      nr_5_St_13_Open_fail = false;
      v_641 = nr_5_St_13_Open_fail;
      ns_5_St_13_Open_fail_1 = false;
      v_638 = ns_5_St_13_Open_fail_1;
      ns_5_St_13_Open_fail_2 = false;
      v_639 = ns_5_St_13_Open_fail_2;
    };
    door_status_1 = v_635;
    ns_5_1 = v_638;
    ns_5_2 = v_639;
    nr_5 = v_641;
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
  if (ns_5_1) {
    ns_5_2_1 = ns_5_2;
  } else {
    ns_5_2_0 = ns_5_2;
  };
  if (!(ck_17_1)) {
    if (ck_17_2_0) {
      if (ns_5_St_13_Open_1) {
        ns_5_St_13_Open_2_1 = ns_5_St_13_Open_2;
      } else {
        ns_5_St_13_Open_2_0 = ns_5_St_13_Open_2;
      };
    } else {
      if (ns_5_St_13_Open_fail_1) {
        ns_5_St_13_Open_fail_2_1 = ns_5_St_13_Open_fail_2;
      } else {
        ns_5_St_13_Open_fail_2_0 = ns_5_St_13_Open_fail_2;
      };
    };
  };
  if (s_5_1) {
    s_5_2_1 = s_5_2;
  } else {
    s_5_2_0 = s_5_2;
  };
  if (!(ck_16_1)) {
    if (ck_16_2_0) {
      if (v_274_1) {
        v_274_2_1 = v_274_2;
      } else {
        v_274_2_0 = v_274_2;
      };
      if (s_5_St_13_Open_1) {
        s_5_St_13_Open_2_1 = s_5_St_13_Open_2;
      } else {
        s_5_St_13_Open_2_0 = s_5_St_13_Open_2;
      };
    } else {
      if (v_271_1) {
        v_271_2_1 = v_271_2;
      } else {
        v_271_2_0 = v_271_2;
      };
      if (s_5_St_13_Open_fail_1) {
        s_5_St_13_Open_fail_2_1 = s_5_St_13_Open_fail_2;
      } else {
        s_5_St_13_Open_fail_2_0 = s_5_St_13_Open_fail_2;
      };
    };
  };
  if (ck_14_1) {
    ck_14_2_1 = ck_14_2;
    if (ck_14_2_1) {
      if (failed_recovered) {
        v_269 = true;
      } else {
        v_269 = self->pnr_6;
      };
      if (c) {
        r_6_St_14_Off = true;
      } else {
        r_6_St_14_Off = v_269;
      };
      if (failed_recovered) {
        v_268_1 = true;
      } else {
        v_268_1 = true;
      };
      if (c) {
        s_6_St_14_Off_1 = false;
      } else {
        s_6_St_14_Off_1 = v_268_1;
      };
      if (failed_recovered) {
        v_268_2 = false;
      } else {
        v_268_2 = true;
      };
      if (c) {
        s_6_St_14_Off_2 = true;
      } else {
        s_6_St_14_Off_2 = v_268_2;
      };
      v_664 = r_6_St_14_Off;
      v_660 = s_6_St_14_Off_1;
      v_661 = s_6_St_14_Off_2;
      if (v_268_1) {
        v_268_2_1 = v_268_2;
      } else {
        v_268_2_0 = v_268_2;
      };
      if (s_6_St_14_Off_1) {
        s_6_St_14_Off_2_1 = s_6_St_14_Off_2;
      } else {
        s_6_St_14_Off_2_0 = s_6_St_14_Off_2;
      };
    } else {
      if (failed_recovered) {
        v_267 = true;
      } else {
        v_267 = self->pnr_6;
      };
      if (c) {
        r_6_St_14_Off_fail = true;
      } else {
        r_6_St_14_Off_fail = v_267;
      };
      v_664 = r_6_St_14_Off_fail;
      if (failed_recovered) {
        v_266_1 = true;
      } else {
        v_266_1 = true;
      };
      if (c) {
        s_6_St_14_Off_fail_1 = false;
      } else {
        s_6_St_14_Off_fail_1 = v_266_1;
      };
      v_660 = s_6_St_14_Off_fail_1;
      if (failed_recovered) {
        v_266_2 = true;
      } else {
        v_266_2 = false;
      };
      if (c) {
        s_6_St_14_Off_fail_2 = false;
      } else {
        s_6_St_14_Off_fail_2 = v_266_2;
      };
      v_661 = s_6_St_14_Off_fail_2;
      if (v_266_1) {
        v_266_2_1 = v_266_2;
      } else {
        v_266_2_0 = v_266_2;
      };
      if (s_6_St_14_Off_fail_1) {
        s_6_St_14_Off_fail_2_1 = s_6_St_14_Off_fail_2;
      } else {
        s_6_St_14_Off_fail_2_0 = s_6_St_14_Off_fail_2;
      };
    };
    s_6_1 = v_660;
    s_6_2 = v_661;
    r_6 = v_664;
  } else {
    ck_14_2_0 = ck_14_2;
    if (ck_14_2_0) {
      if (failed_recovered) {
        v_265 = true;
        v_264_1 = false;
        v_264_2 = false;
      } else {
        v_265 = self->pnr_6;
        v_264_1 = false;
        v_264_2 = true;
      };
      v_263 = !(c);
      if (v_263) {
        r_6_St_14_On = true;
        s_6_St_14_On_1 = true;
        s_6_St_14_On_2 = true;
      } else {
        r_6_St_14_On = v_265;
        s_6_St_14_On_1 = v_264_1;
        s_6_St_14_On_2 = v_264_2;
      };
      v_665 = r_6_St_14_On;
      v_662 = s_6_St_14_On_1;
      v_663 = s_6_St_14_On_2;
    } else {
      if (failed_recovered) {
        v_262 = true;
        v_261_1 = false;
        v_261_2 = true;
      } else {
        v_262 = self->pnr_6;
        v_261_1 = false;
        v_261_2 = false;
      };
      v_260 = !(c);
      if (v_260) {
        r_6_St_14_On_fail = true;
      } else {
        r_6_St_14_On_fail = v_262;
      };
      v_665 = r_6_St_14_On_fail;
      if (v_260) {
        s_6_St_14_On_fail_1 = true;
      } else {
        s_6_St_14_On_fail_1 = v_261_1;
      };
      v_662 = s_6_St_14_On_fail_1;
      if (v_260) {
        s_6_St_14_On_fail_2 = false;
      } else {
        s_6_St_14_On_fail_2 = v_261_2;
      };
      v_663 = s_6_St_14_On_fail_2;
    };
    s_6_1 = v_662;
    s_6_2 = v_663;
    r_6 = v_665;
  };
  ck_15_1 = s_6_1;
  ck_15_2 = s_6_2;
  if (ck_15_1) {
    ck_15_2_1 = ck_15_2;
    if (ck_15_2_1) {
      computer_status_St_14_Off = 0;
      nr_6_St_14_Off = false;
      ns_6_St_14_Off_1 = true;
      ns_6_St_14_Off_2 = true;
      v_650 = computer_status_St_14_Off;
      v_656 = nr_6_St_14_Off;
      v_652 = ns_6_St_14_Off_1;
      v_653 = ns_6_St_14_Off_2;
      if (ns_6_St_14_Off_1) {
        ns_6_St_14_Off_2_1 = ns_6_St_14_Off_2;
      } else {
        ns_6_St_14_Off_2_0 = ns_6_St_14_Off_2;
      };
    } else {
      computer_status_St_14_Off_fail = 2;
      v_650 = computer_status_St_14_Off_fail;
      nr_6_St_14_Off_fail = false;
      v_656 = nr_6_St_14_Off_fail;
      ns_6_St_14_Off_fail_1 = true;
      v_652 = ns_6_St_14_Off_fail_1;
      ns_6_St_14_Off_fail_2 = false;
      v_653 = ns_6_St_14_Off_fail_2;
      if (ns_6_St_14_Off_fail_1) {
        ns_6_St_14_Off_fail_2_1 = ns_6_St_14_Off_fail_2;
      } else {
        ns_6_St_14_Off_fail_2_0 = ns_6_St_14_Off_fail_2;
      };
    };
    computer_status = v_650;
    ns_6_1 = v_652;
    ns_6_2 = v_653;
    nr_6 = v_656;
  } else {
    ck_15_2_0 = ck_15_2;
    if (ck_15_2_0) {
      computer_status_St_14_On = 1;
      nr_6_St_14_On = false;
      ns_6_St_14_On_1 = false;
      ns_6_St_14_On_2 = true;
      v_651 = computer_status_St_14_On;
      v_657 = nr_6_St_14_On;
      v_654 = ns_6_St_14_On_1;
      v_655 = ns_6_St_14_On_2;
    } else {
      computer_status_St_14_On_fail = 3;
      v_651 = computer_status_St_14_On_fail;
      nr_6_St_14_On_fail = false;
      v_657 = nr_6_St_14_On_fail;
      ns_6_St_14_On_fail_1 = false;
      v_654 = ns_6_St_14_On_fail_1;
      ns_6_St_14_On_fail_2 = false;
      v_655 = ns_6_St_14_On_fail_2;
    };
    computer_status = v_651;
    ns_6_1 = v_654;
    ns_6_2 = v_655;
    nr_6 = v_657;
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
  if (ns_6_1) {
    ns_6_2_1 = ns_6_2;
  } else {
    ns_6_2_0 = ns_6_2;
  };
  if (!(ck_15_1)) {
    if (ck_15_2_0) {
      if (ns_6_St_14_On_1) {
        ns_6_St_14_On_2_1 = ns_6_St_14_On_2;
      } else {
        ns_6_St_14_On_2_0 = ns_6_St_14_On_2;
      };
    } else {
      if (ns_6_St_14_On_fail_1) {
        ns_6_St_14_On_fail_2_1 = ns_6_St_14_On_fail_2;
      } else {
        ns_6_St_14_On_fail_2_0 = ns_6_St_14_On_fail_2;
      };
    };
  };
  if (s_6_1) {
    s_6_2_1 = s_6_2;
  } else {
    s_6_2_0 = s_6_2;
  };
  if (!(ck_14_1)) {
    if (ck_14_2_0) {
      if (v_264_1) {
        v_264_2_1 = v_264_2;
      } else {
        v_264_2_0 = v_264_2;
      };
      if (s_6_St_14_On_1) {
        s_6_St_14_On_2_1 = s_6_St_14_On_2;
      } else {
        s_6_St_14_On_2_0 = s_6_St_14_On_2;
      };
    } else {
      if (v_261_1) {
        v_261_2_1 = v_261_2;
      } else {
        v_261_2_0 = v_261_2;
      };
      if (s_6_St_14_On_fail_1) {
        s_6_St_14_On_fail_2_1 = s_6_St_14_On_fail_2;
      } else {
        s_6_St_14_On_fail_2_0 = s_6_St_14_On_fail_2;
      };
    };
  };
  if (self->ck_12_1) {
    if (arrived_1) {
      r_7_St_15_Not_Present = true;
      s_7_St_15_Not_Present_1 = false;
    } else {
      r_7_St_15_Not_Present = self->pnr_7;
      s_7_St_15_Not_Present_1 = true;
    };
    r_7 = r_7_St_15_Not_Present;
    s_7_1 = s_7_St_15_Not_Present_1;
  } else {
    if (arrived_1) {
      r_7_St_15_Present = true;
    } else {
      r_7_St_15_Present = self->pnr_7;
    };
    r_7 = r_7_St_15_Present;
    if (arrived_1) {
      s_7_St_15_Present_1 = true;
    } else {
      s_7_St_15_Present_1 = false;
    };
    s_7_1 = s_7_St_15_Present_1;
  };
  ck_13_1 = s_7_1;
  if (ck_13_1) {
    presence_1_St_15_Not_Present = false;
    nr_7_St_15_Not_Present = false;
    ns_7_St_15_Not_Present_1 = true;
    presence_1 = presence_1_St_15_Not_Present;
    nr_7 = nr_7_St_15_Not_Present;
    ns_7_1 = ns_7_St_15_Not_Present_1;
  } else {
    presence_1_St_15_Present = true;
    presence_1 = presence_1_St_15_Present;
    nr_7_St_15_Present = false;
    nr_7 = nr_7_St_15_Present;
    ns_7_St_15_Present_1 = false;
    ns_7_1 = ns_7_St_15_Present_1;
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
      r_8_St_16_Not_Present = true;
      s_8_St_16_Not_Present_1 = false;
    } else {
      r_8_St_16_Not_Present = self->pnr_8;
      s_8_St_16_Not_Present_1 = true;
    };
    r_8 = r_8_St_16_Not_Present;
    s_8_1 = s_8_St_16_Not_Present_1;
  } else {
    if (arrived) {
      r_8_St_16_Present = true;
    } else {
      r_8_St_16_Present = self->pnr_8;
    };
    r_8 = r_8_St_16_Present;
    if (arrived) {
      s_8_St_16_Present_1 = true;
    } else {
      s_8_St_16_Present_1 = false;
    };
    s_8_1 = s_8_St_16_Present_1;
  };
  ck_11_1 = s_8_1;
  if (ck_11_1) {
    presence_St_16_Not_Present = false;
    nr_8_St_16_Not_Present = false;
    ns_8_St_16_Not_Present_1 = true;
    presence = presence_St_16_Not_Present;
    nr_8 = nr_8_St_16_Not_Present;
    ns_8_1 = ns_8_St_16_Not_Present_1;
  } else {
    presence_St_16_Present = true;
    presence = presence_St_16_Present;
    nr_8_St_16_Present = false;
    nr_8 = nr_8_St_16_Present;
    ns_8_St_16_Present_1 = false;
    ns_8_1 = ns_8_St_16_Present_1;
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
      r_9_St_17_Dia = true;
      s_9_St_17_Dia_1 = false;
    } else {
      r_9_St_17_Dia = self->pnr_9;
      s_9_St_17_Dia_1 = true;
    };
    r_9 = r_9_St_17_Dia;
    s_9_1 = s_9_St_17_Dia_1;
  } else {
    if (change) {
      r_9_St_17_Noite = true;
    } else {
      r_9_St_17_Noite = self->pnr_9;
    };
    r_9 = r_9_St_17_Noite;
    if (change) {
      s_9_St_17_Noite_1 = true;
    } else {
      s_9_St_17_Noite_1 = false;
    };
    s_9_1 = s_9_St_17_Noite_1;
  };
  ck_9_1 = s_9_1;
  if (ck_9_1) {
    night_1_St_17_Dia = false;
    nr_9_St_17_Dia = false;
    ns_9_St_17_Dia_1 = true;
    night_1 = night_1_St_17_Dia;
    nr_9 = nr_9_St_17_Dia;
    ns_9_1 = ns_9_St_17_Dia_1;
  } else {
    night_1_St_17_Noite = true;
    night_1 = night_1_St_17_Noite;
    nr_9_St_17_Noite = false;
    nr_9 = nr_9_St_17_Noite;
    ns_9_St_17_Noite_1 = false;
    ns_9_1 = ns_9_St_17_Noite_1;
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
  self->v_521 = ns_1_3;
  self->v_522 = ns_2_4;
  self->pnr_1 = nr_1;
  self->v_537 = ns_1_1;
  self->v_538 = ns_1_2;
  self->pnr_2 = nr_2;
  self->v_575 = ns_2_1;
  self->v_576 = ns_2_2;
  self->v_577 = ns_2_3;
  self->pnr_3 = nr_3;
  self->v_610 = ns_3_1;
  self->v_611 = ns_3_2;
  self->pnr_4 = nr_4;
  self->v_626 = ns_4_1;
  self->v_627 = ns_4_2;
  self->pnr_5 = nr_5;
  self->v_642 = ns_5_1;
  self->v_643 = ns_5_2;
  self->pnr_6 = nr_6;
  self->v_658 = ns_6_1;
  self->v_659 = ns_6_2;
  self->pnr_7 = nr_7;
  self->ck_12_1 = ns_7_1;
  self->pnr_8 = nr_8;
  self->ck_10_1 = ns_8_1;
  self->pnr_9 = nr_9;
  self->ck_1 = ns_9_1;;
}

