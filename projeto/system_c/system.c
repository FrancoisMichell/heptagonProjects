/* --- Generated the 29/7/2018 at 13:21 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jun. 15 15:41:53 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "system.h"

void System__light_source_reset(System__light_source_mem* self) {
  self->pnr = false;
  self->v_321 = true;
  self->v_322 = true;
}

void System__light_source_step(int c1, int c2, int sw, int failed_recovered,
                               System__light_source_out* _out,
                               System__light_source_mem* self) {
  
  int v_320;
  int v_319;
  int v_318;
  int v_317;
  int v_316;
  int v_315;
  int v_314;
  int v_313;
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
  int v_328;
  int v_327;
  int v_326;
  int v_325;
  int v_324;
  int v_323;
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
  ck_1_3 = self->v_321;
  ck_2 = self->v_322;
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
      v_327 = r_St_Off;
      v_323 = s_St_Off_1;
      v_324 = s_St_Off_2;
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
      v_327 = r_St_Off_fail;
      if (v_12) {
        s_St_Off_fail_1 = false;
      } else {
        s_St_Off_fail_1 = v_13_1;
      };
      v_323 = s_St_Off_fail_1;
      if (v_12) {
        s_St_Off_fail_2 = false;
      } else {
        s_St_Off_fail_2 = v_13_2;
      };
      v_324 = s_St_Off_fail_2;
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
    s_1 = v_323;
    s_2 = v_324;
    r = v_327;
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
      v_328 = r_St_On;
      v_325 = s_St_On_1;
      v_326 = s_St_On_2;
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
      v_328 = r_St_On_fail;
      if (v_2) {
        s_St_On_fail_1 = true;
      } else {
        s_St_On_fail_1 = v_3_1;
      };
      v_325 = s_St_On_fail_1;
      if (v_2) {
        s_St_On_fail_2 = false;
      } else {
        s_St_On_fail_2 = v_3_2;
      };
      v_326 = s_St_On_fail_2;
    };
    s_1 = v_325;
    s_2 = v_326;
    r = v_328;
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
      v_313 = light_source_status_St_Off;
      v_319 = nr_St_Off;
      v_315 = ns_St_Off_1;
      v_316 = ns_St_Off_2;
      if (ns_St_Off_1) {
        ns_St_Off_2_1 = ns_St_Off_2;
      } else {
        ns_St_Off_2_0 = ns_St_Off_2;
      };
    } else {
      light_source_status_St_Off_fail = 2;
      v_313 = light_source_status_St_Off_fail;
      nr_St_Off_fail = false;
      v_319 = nr_St_Off_fail;
      ns_St_Off_fail_1 = true;
      v_315 = ns_St_Off_fail_1;
      ns_St_Off_fail_2 = false;
      v_316 = ns_St_Off_fail_2;
      if (ns_St_Off_fail_1) {
        ns_St_Off_fail_2_1 = ns_St_Off_fail_2;
      } else {
        ns_St_Off_fail_2_0 = ns_St_Off_fail_2;
      };
    };
    _out->light_source_status = v_313;
    ns_1 = v_315;
    ns_2 = v_316;
    nr = v_319;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      light_source_status_St_On = 1;
      nr_St_On = false;
      ns_St_On_1 = false;
      ns_St_On_2 = true;
      v_314 = light_source_status_St_On;
      v_320 = nr_St_On;
      v_317 = ns_St_On_1;
      v_318 = ns_St_On_2;
    } else {
      light_source_status_St_On_fail = 3;
      v_314 = light_source_status_St_On_fail;
      nr_St_On_fail = false;
      v_320 = nr_St_On_fail;
      ns_St_On_fail_1 = false;
      v_317 = ns_St_On_fail_1;
      ns_St_On_fail_2 = false;
      v_318 = ns_St_On_fail_2;
    };
    _out->light_source_status = v_314;
    ns_1 = v_317;
    ns_2 = v_318;
    nr = v_320;
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
  self->v_321 = ns_1;
  self->v_322 = ns_2;;
}

void System__door_reset(System__door_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__door_step(int c, System__door_out* _out, System__door_mem* self) {
  
  int nr_St_1_Open;
  int ns_St_1_Open_1;
  int door_open_St_1_Open;
  int nr_St_1_Closed;
  int ns_St_1_Closed_1;
  int door_open_St_1_Closed;
  int ck_2_1;
  int v_20;
  int v;
  int r_St_1_Open;
  int s_St_1_Open_1;
  int r_St_1_Closed;
  int s_St_1_Closed_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_20 = !(c);
    if (v_20) {
      r_St_1_Closed = true;
      s_St_1_Closed_1 = false;
    } else {
      r_St_1_Closed = self->pnr;
      s_St_1_Closed_1 = true;
    };
    r = r_St_1_Closed;
    s_1 = s_St_1_Closed_1;
  } else {
    v = !(c);
    if (v) {
      r_St_1_Open = true;
    } else {
      r_St_1_Open = self->pnr;
    };
    r = r_St_1_Open;
    if (v) {
      s_St_1_Open_1 = true;
    } else {
      s_St_1_Open_1 = false;
    };
    s_1 = s_St_1_Open_1;
  };
  ck_2_1 = s_1;
  if (ck_2_1) {
    door_open_St_1_Closed = false;
    nr_St_1_Closed = false;
    ns_St_1_Closed_1 = true;
    _out->door_open = door_open_St_1_Closed;
    nr = nr_St_1_Closed;
    ns_1 = ns_St_1_Closed_1;
  } else {
    door_open_St_1_Open = true;
    _out->door_open = door_open_St_1_Open;
    nr_St_1_Open = false;
    nr = nr_St_1_Open;
    ns_St_1_Open_1 = false;
    ns_1 = ns_St_1_Open_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__closet_reset(System__closet_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__closet_step(int c, System__closet_out* _out,
                         System__closet_mem* self) {
  
  int nr_St_2_Open;
  int ns_St_2_Open_1;
  int closet_open_St_2_Open;
  int nr_St_2_Locked;
  int ns_St_2_Locked_1;
  int closet_open_St_2_Locked;
  int ck_3_1;
  int v;
  int r_St_2_Open;
  int s_St_2_Open_1;
  int r_St_2_Locked;
  int s_St_2_Locked_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v = !(c);
    if (v) {
      r_St_2_Locked = true;
      s_St_2_Locked_1 = false;
    } else {
      r_St_2_Locked = self->pnr;
      s_St_2_Locked_1 = true;
    };
    r = r_St_2_Locked;
    s_1 = s_St_2_Locked_1;
  } else {
    if (c) {
      r_St_2_Open = true;
    } else {
      r_St_2_Open = self->pnr;
    };
    r = r_St_2_Open;
    if (c) {
      s_St_2_Open_1 = true;
    } else {
      s_St_2_Open_1 = false;
    };
    s_1 = s_St_2_Open_1;
  };
  ck_3_1 = s_1;
  if (ck_3_1) {
    closet_open_St_2_Locked = false;
    nr_St_2_Locked = false;
    ns_St_2_Locked_1 = true;
    _out->closet_open = closet_open_St_2_Locked;
    nr = nr_St_2_Locked;
    ns_1 = ns_St_2_Locked_1;
  } else {
    closet_open_St_2_Open = true;
    _out->closet_open = closet_open_St_2_Open;
    nr_St_2_Open = false;
    nr = nr_St_2_Open;
    ns_St_2_Open_1 = false;
    ns_1 = ns_St_2_Open_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__person_reset(System__person_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__person_step(int arrived, System__person_out* _out,
                         System__person_mem* self) {
  
  int nr_St_3_Present;
  int ns_St_3_Present_1;
  int presence_St_3_Present;
  int nr_St_3_Not_Present;
  int ns_St_3_Not_Present_1;
  int presence_St_3_Not_Present;
  int ck_4_1;
  int r_St_3_Present;
  int s_St_3_Present_1;
  int r_St_3_Not_Present;
  int s_St_3_Not_Present_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (arrived) {
      r_St_3_Not_Present = true;
      s_St_3_Not_Present_1 = false;
    } else {
      r_St_3_Not_Present = self->pnr;
      s_St_3_Not_Present_1 = true;
    };
    r = r_St_3_Not_Present;
    s_1 = s_St_3_Not_Present_1;
  } else {
    if (arrived) {
      r_St_3_Present = true;
    } else {
      r_St_3_Present = self->pnr;
    };
    r = r_St_3_Present;
    if (arrived) {
      s_St_3_Present_1 = true;
    } else {
      s_St_3_Present_1 = false;
    };
    s_1 = s_St_3_Present_1;
  };
  ck_4_1 = s_1;
  if (ck_4_1) {
    presence_St_3_Not_Present = false;
    nr_St_3_Not_Present = false;
    ns_St_3_Not_Present_1 = true;
    _out->presence = presence_St_3_Not_Present;
    nr = nr_St_3_Not_Present;
    ns_1 = ns_St_3_Not_Present_1;
  } else {
    presence_St_3_Present = true;
    _out->presence = presence_St_3_Present;
    nr_St_3_Present = false;
    nr = nr_St_3_Present;
    ns_St_3_Present_1 = false;
    ns_1 = ns_St_3_Present_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__computer_reset(System__computer_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__computer_step(int c, System__computer_out* _out,
                           System__computer_mem* self) {
  
  int nr_St_4_On;
  int ns_St_4_On_1;
  int computer_on_St_4_On;
  int nr_St_4_Off;
  int ns_St_4_Off_1;
  int computer_on_St_4_Off;
  int ck_5_1;
  int v;
  int r_St_4_On;
  int s_St_4_On_1;
  int r_St_4_Off;
  int s_St_4_Off_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (c) {
      r_St_4_Off = true;
      s_St_4_Off_1 = false;
    } else {
      r_St_4_Off = self->pnr;
      s_St_4_Off_1 = true;
    };
    r = r_St_4_Off;
    s_1 = s_St_4_Off_1;
  } else {
    v = !(c);
    if (v) {
      r_St_4_On = true;
    } else {
      r_St_4_On = self->pnr;
    };
    r = r_St_4_On;
    if (v) {
      s_St_4_On_1 = true;
    } else {
      s_St_4_On_1 = false;
    };
    s_1 = s_St_4_On_1;
  };
  ck_5_1 = s_1;
  if (ck_5_1) {
    computer_on_St_4_Off = false;
    nr_St_4_Off = false;
    ns_St_4_Off_1 = true;
    _out->computer_on = computer_on_St_4_Off;
    nr = nr_St_4_Off;
    ns_1 = ns_St_4_Off_1;
  } else {
    computer_on_St_4_On = true;
    _out->computer_on = computer_on_St_4_On;
    nr_St_4_On = false;
    nr = nr_St_4_On;
    ns_St_4_On_1 = false;
    ns_1 = ns_St_4_On_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__window_reset(System__window_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__window_step(int c, System__window_out* _out,
                         System__window_mem* self) {
  
  int nr_St_5_Open;
  int ns_St_5_Open_1;
  int window_open_St_5_Open;
  int nr_St_5_Closed;
  int ns_St_5_Closed_1;
  int window_open_St_5_Closed;
  int ck_6_1;
  int v;
  int r_St_5_Open;
  int s_St_5_Open_1;
  int r_St_5_Closed;
  int s_St_5_Closed_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v = !(c);
    if (v) {
      r_St_5_Closed = true;
      s_St_5_Closed_1 = false;
    } else {
      r_St_5_Closed = self->pnr;
      s_St_5_Closed_1 = true;
    };
    r = r_St_5_Closed;
    s_1 = s_St_5_Closed_1;
  } else {
    if (c) {
      r_St_5_Open = true;
    } else {
      r_St_5_Open = self->pnr;
    };
    r = r_St_5_Open;
    if (c) {
      s_St_5_Open_1 = true;
    } else {
      s_St_5_Open_1 = false;
    };
    s_1 = s_St_5_Open_1;
  };
  ck_6_1 = s_1;
  if (ck_6_1) {
    window_open_St_5_Closed = false;
    nr_St_5_Closed = false;
    ns_St_5_Closed_1 = true;
    _out->window_open = window_open_St_5_Closed;
    nr = nr_St_5_Closed;
    ns_1 = ns_St_5_Closed_1;
  } else {
    window_open_St_5_Open = true;
    _out->window_open = window_open_St_5_Open;
    nr_St_5_Open = false;
    nr = nr_St_5_Open;
    ns_St_5_Open_1 = false;
    ns_1 = ns_St_5_Open_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__air_conditioner_reset(System__air_conditioner_mem* self) {
  self->pnr = false;
  self->v_359 = false;
  self->v_360 = true;
  self->v_361 = false;
}

void System__air_conditioner_step(int c1, int c2, int failed_recovered,
                                  System__air_conditioner_out* _out,
                                  System__air_conditioner_mem* self) {
  
  int v_358;
  int v_357;
  int v_356;
  int v_355;
  int v_354;
  int v_353;
  int v_352;
  int v_351;
  int v_350;
  int v_349;
  int v_348;
  int v_347;
  int v_346;
  int v_345;
  int v_344;
  int v_343;
  int v_342;
  int v_341;
  int v_340;
  int v_339;
  int v_338;
  int v_337;
  int v_336;
  int v_335;
  int v_334;
  int v_333;
  int v_332;
  int v_331;
  int v_330;
  int v_329;
  int ns_St_6_Max_fail_2_0;
  int ns_St_6_Max_fail_3_0_0;
  int ns_St_6_Max_fail_3_0_1;
  int ns_St_6_Max_fail_2_1;
  int ns_St_6_Max_fail_3_1_0;
  int ns_St_6_Max_fail_3_1_1;
  int ns_St_6_Max_2_0;
  int ns_St_6_Max_3_0_0;
  int ns_St_6_Max_3_0_1;
  int ns_St_6_Max_2_1;
  int ns_St_6_Max_3_1_0;
  int ns_St_6_Max_3_1_1;
  int ns_St_6_Min_fail_2_0;
  int ns_St_6_Min_fail_3_0_0;
  int ns_St_6_Min_fail_3_0_1;
  int ns_St_6_Min_fail_2_1;
  int ns_St_6_Min_fail_3_1_0;
  int ns_St_6_Min_fail_3_1_1;
  int ns_St_6_Min_2_0;
  int ns_St_6_Min_3_0_0;
  int ns_St_6_Min_3_0_1;
  int ns_St_6_Min_2_1;
  int ns_St_6_Min_3_1_0;
  int ns_St_6_Min_3_1_1;
  int ns_St_6_Off_fail_2_0;
  int ns_St_6_Off_fail_3_0_0;
  int ns_St_6_Off_fail_3_0_1;
  int ns_St_6_Off_fail_2_1;
  int ns_St_6_Off_fail_3_1_0;
  int ns_St_6_Off_fail_3_1_1;
  int ns_St_6_Off_2_0;
  int ns_St_6_Off_3_0_0;
  int ns_St_6_Off_3_0_1;
  int ns_St_6_Off_2_1;
  int ns_St_6_Off_3_1_0;
  int ns_St_6_Off_3_1_1;
  int ck_7_2_0;
  int ck_7_3_0_0;
  int ck_7_3_0_1;
  int ck_7_2_1;
  int ck_7_3_1_0;
  int ck_7_3_1_1;
  int nr_St_6_Max_fail;
  int ns_St_6_Max_fail_3;
  int ns_St_6_Max_fail_2;
  int ns_St_6_Max_fail_1;
  int air_status_St_6_Max_fail;
  int nr_St_6_Max;
  int ns_St_6_Max_3;
  int ns_St_6_Max_2;
  int ns_St_6_Max_1;
  int air_status_St_6_Max;
  int nr_St_6_Min_fail;
  int ns_St_6_Min_fail_3;
  int ns_St_6_Min_fail_2;
  int ns_St_6_Min_fail_1;
  int air_status_St_6_Min_fail;
  int nr_St_6_Min;
  int ns_St_6_Min_3;
  int ns_St_6_Min_2;
  int ns_St_6_Min_1;
  int air_status_St_6_Min;
  int nr_St_6_Off_fail;
  int ns_St_6_Off_fail_3;
  int ns_St_6_Off_fail_2;
  int ns_St_6_Off_fail_1;
  int air_status_St_6_Off_fail;
  int nr_St_6_Off;
  int ns_St_6_Off_3;
  int ns_St_6_Off_2;
  int ns_St_6_Off_1;
  int air_status_St_6_Off;
  int ck_7_3;
  int ck_7_2;
  int ck_7_1;
  int v_52_2_0;
  int v_52_3_0_0;
  int v_52_3_0_1;
  int v_52_2_1;
  int v_52_3_1_0;
  int v_52_3_1_1;
  int v_50_2_0;
  int v_50_3_0_0;
  int v_50_3_0_1;
  int v_50_2_1;
  int v_50_3_1_0;
  int v_50_3_1_1;
  int v_53;
  int v_52_3;
  int v_52_2;
  int v_52_1;
  int v_51;
  int v_50_3;
  int v_50_2;
  int v_50_1;
  int v_49;
  int v_47_2_0;
  int v_47_3_0_0;
  int v_47_3_0_1;
  int v_47_2_1;
  int v_47_3_1_0;
  int v_47_3_1_1;
  int v_45_2_0;
  int v_45_3_0_0;
  int v_45_3_0_1;
  int v_45_2_1;
  int v_45_3_1_0;
  int v_45_3_1_1;
  int v_48;
  int v_47_3;
  int v_47_2;
  int v_47_1;
  int v_46;
  int v_45_3;
  int v_45_2;
  int v_45_1;
  int v_44;
  int v_42_2_0;
  int v_42_3_0_0;
  int v_42_3_0_1;
  int v_42_2_1;
  int v_42_3_1_0;
  int v_42_3_1_1;
  int v_40_2_0;
  int v_40_3_0_0;
  int v_40_3_0_1;
  int v_40_2_1;
  int v_40_3_1_0;
  int v_40_3_1_1;
  int v_43;
  int v_42_3;
  int v_42_2;
  int v_42_1;
  int v_41;
  int v_40_3;
  int v_40_2;
  int v_40_1;
  int v_39;
  int v_38;
  int v_36_2_0;
  int v_36_3_0_0;
  int v_36_3_0_1;
  int v_36_2_1;
  int v_36_3_1_0;
  int v_36_3_1_1;
  int v_34_2_0;
  int v_34_3_0_0;
  int v_34_3_0_1;
  int v_34_2_1;
  int v_34_3_1_0;
  int v_34_3_1_1;
  int v_37;
  int v_36_3;
  int v_36_2;
  int v_36_1;
  int v_35;
  int v_34_3;
  int v_34_2;
  int v_34_1;
  int v_33;
  int v_32;
  int v_30_2_0;
  int v_30_3_0_0;
  int v_30_3_0_1;
  int v_30_2_1;
  int v_30_3_1_0;
  int v_30_3_1_1;
  int v_28_2_0;
  int v_28_3_0_0;
  int v_28_3_0_1;
  int v_28_2_1;
  int v_28_3_1_0;
  int v_28_3_1_1;
  int v_31;
  int v_30_3;
  int v_30_2;
  int v_30_1;
  int v_29;
  int v_28_3;
  int v_28_2;
  int v_28_1;
  int v_27;
  int v_26;
  int v_24_2_0;
  int v_24_3_0_0;
  int v_24_3_0_1;
  int v_24_2_1;
  int v_24_3_1_0;
  int v_24_3_1_1;
  int v_22_2_0;
  int v_22_3_0_0;
  int v_22_3_0_1;
  int v_22_2_1;
  int v_22_3_1_0;
  int v_22_3_1_1;
  int v_25;
  int v_24_3;
  int v_24_2;
  int v_24_1;
  int v_23;
  int v_22_3;
  int v_22_2;
  int v_22_1;
  int v_21;
  int v;
  int v_385;
  int v_384;
  int v_383;
  int v_382;
  int v_381;
  int v_380;
  int v_379;
  int v_378;
  int v_377;
  int v_376;
  int v_375;
  int v_374;
  int v_373;
  int v_372;
  int v_371;
  int v_370;
  int v_369;
  int v_368;
  int v_367;
  int v_366;
  int v_365;
  int v_364;
  int v_363;
  int v_362;
  int s_St_6_Max_fail_2_0;
  int s_St_6_Max_fail_3_0_0;
  int s_St_6_Max_fail_3_0_1;
  int s_St_6_Max_fail_2_1;
  int s_St_6_Max_fail_3_1_0;
  int s_St_6_Max_fail_3_1_1;
  int s_St_6_Max_2_0;
  int s_St_6_Max_3_0_0;
  int s_St_6_Max_3_0_1;
  int s_St_6_Max_2_1;
  int s_St_6_Max_3_1_0;
  int s_St_6_Max_3_1_1;
  int s_St_6_Min_fail_2_0;
  int s_St_6_Min_fail_3_0_0;
  int s_St_6_Min_fail_3_0_1;
  int s_St_6_Min_fail_2_1;
  int s_St_6_Min_fail_3_1_0;
  int s_St_6_Min_fail_3_1_1;
  int s_St_6_Min_2_0;
  int s_St_6_Min_3_0_0;
  int s_St_6_Min_3_0_1;
  int s_St_6_Min_2_1;
  int s_St_6_Min_3_1_0;
  int s_St_6_Min_3_1_1;
  int s_St_6_Off_fail_2_0;
  int s_St_6_Off_fail_3_0_0;
  int s_St_6_Off_fail_3_0_1;
  int s_St_6_Off_fail_2_1;
  int s_St_6_Off_fail_3_1_0;
  int s_St_6_Off_fail_3_1_1;
  int s_St_6_Off_2_0;
  int s_St_6_Off_3_0_0;
  int s_St_6_Off_3_0_1;
  int s_St_6_Off_2_1;
  int s_St_6_Off_3_1_0;
  int s_St_6_Off_3_1_1;
  int ck_2_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_St_6_Max_fail;
  int s_St_6_Max_fail_3;
  int s_St_6_Max_fail_2;
  int s_St_6_Max_fail_1;
  int r_St_6_Max;
  int s_St_6_Max_3;
  int s_St_6_Max_2;
  int s_St_6_Max_1;
  int r_St_6_Min_fail;
  int s_St_6_Min_fail_3;
  int s_St_6_Min_fail_2;
  int s_St_6_Min_fail_1;
  int r_St_6_Min;
  int s_St_6_Min_3;
  int s_St_6_Min_2;
  int s_St_6_Min_1;
  int r_St_6_Off_fail;
  int s_St_6_Off_fail_3;
  int s_St_6_Off_fail_2;
  int s_St_6_Off_fail_1;
  int r_St_6_Off;
  int s_St_6_Off_3;
  int s_St_6_Off_2;
  int s_St_6_Off_1;
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
  ck_1 = self->v_359;
  ck_2 = self->v_360;
  ck_3 = self->v_361;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (failed_recovered) {
          v_29 = true;
          v_28_1 = true;
          v_28_2 = true;
          v_28_3 = false;
        } else {
          v_29 = self->pnr;
          v_28_1 = true;
          v_28_2 = true;
          v_28_3 = true;
        };
        v_27 = !(c2);
        if (v_27) {
          v_31 = true;
          v_30_1 = false;
          v_30_2 = true;
          v_30_3 = false;
        } else {
          v_31 = v_29;
          v_30_1 = v_28_1;
          v_30_2 = v_28_2;
          v_30_3 = v_28_3;
        };
        v_26 = !(c1);
        if (v_26) {
          r_St_6_Max = true;
          s_St_6_Max_1 = true;
          s_St_6_Max_2 = false;
          s_St_6_Max_3 = false;
        } else {
          r_St_6_Max = v_31;
          s_St_6_Max_1 = v_30_1;
          s_St_6_Max_2 = v_30_2;
          s_St_6_Max_3 = v_30_3;
        };
        v_380 = r_St_6_Max;
        v_362 = s_St_6_Max_1;
        v_363 = s_St_6_Max_2;
        v_364 = s_St_6_Max_3;
      } else {
        if (failed_recovered) {
          v_23 = true;
          v_22_1 = true;
          v_22_2 = true;
          v_22_3 = true;
        } else {
          v_23 = self->pnr;
          v_22_1 = true;
          v_22_2 = true;
          v_22_3 = false;
        };
        v_21 = !(c2);
        if (v_21) {
          v_25 = true;
          v_24_1 = false;
          v_24_2 = false;
          v_24_3 = false;
        } else {
          v_25 = v_23;
          v_24_1 = v_22_1;
          v_24_2 = v_22_2;
          v_24_3 = v_22_3;
        };
        v = !(c1);
        if (v) {
          r_St_6_Max_fail = true;
        } else {
          r_St_6_Max_fail = v_25;
        };
        v_380 = r_St_6_Max_fail;
        if (v) {
          s_St_6_Max_fail_1 = false;
        } else {
          s_St_6_Max_fail_1 = v_24_1;
        };
        v_362 = s_St_6_Max_fail_1;
        if (v) {
          s_St_6_Max_fail_2 = true;
        } else {
          s_St_6_Max_fail_2 = v_24_2;
        };
        v_363 = s_St_6_Max_fail_2;
        if (v) {
          s_St_6_Max_fail_3 = true;
        } else {
          s_St_6_Max_fail_3 = v_24_3;
        };
        v_364 = s_St_6_Max_fail_3;
      };
      v_374 = v_362;
      v_375 = v_363;
      v_376 = v_364;
      v_382 = v_380;
      if (ck_3_1_1) {
        if (v_28_1) {
          v_28_2_1 = v_28_2;
          if (v_28_2_1) {
            v_28_3_1_1 = v_28_3;
          } else {
            v_28_3_1_0 = v_28_3;
          };
        } else {
          v_28_2_0 = v_28_2;
          if (v_28_2_0) {
            v_28_3_0_1 = v_28_3;
          } else {
            v_28_3_0_0 = v_28_3;
          };
        };
        if (v_30_1) {
          v_30_2_1 = v_30_2;
          if (v_30_2_1) {
            v_30_3_1_1 = v_30_3;
          } else {
            v_30_3_1_0 = v_30_3;
          };
        } else {
          v_30_2_0 = v_30_2;
          if (v_30_2_0) {
            v_30_3_0_1 = v_30_3;
          } else {
            v_30_3_0_0 = v_30_3;
          };
        };
        if (s_St_6_Max_1) {
          s_St_6_Max_2_1 = s_St_6_Max_2;
          if (s_St_6_Max_2_1) {
            s_St_6_Max_3_1_1 = s_St_6_Max_3;
          } else {
            s_St_6_Max_3_1_0 = s_St_6_Max_3;
          };
        } else {
          s_St_6_Max_2_0 = s_St_6_Max_2;
          if (s_St_6_Max_2_0) {
            s_St_6_Max_3_0_1 = s_St_6_Max_3;
          } else {
            s_St_6_Max_3_0_0 = s_St_6_Max_3;
          };
        };
      } else {
        if (v_22_1) {
          v_22_2_1 = v_22_2;
          if (v_22_2_1) {
            v_22_3_1_1 = v_22_3;
          } else {
            v_22_3_1_0 = v_22_3;
          };
        } else {
          v_22_2_0 = v_22_2;
          if (v_22_2_0) {
            v_22_3_0_1 = v_22_3;
          } else {
            v_22_3_0_0 = v_22_3;
          };
        };
        if (v_24_1) {
          v_24_2_1 = v_24_2;
          if (v_24_2_1) {
            v_24_3_1_1 = v_24_3;
          } else {
            v_24_3_1_0 = v_24_3;
          };
        } else {
          v_24_2_0 = v_24_2;
          if (v_24_2_0) {
            v_24_3_0_1 = v_24_3;
          } else {
            v_24_3_0_0 = v_24_3;
          };
        };
        if (s_St_6_Max_fail_1) {
          s_St_6_Max_fail_2_1 = s_St_6_Max_fail_2;
          if (s_St_6_Max_fail_2_1) {
            s_St_6_Max_fail_3_1_1 = s_St_6_Max_fail_3;
          } else {
            s_St_6_Max_fail_3_1_0 = s_St_6_Max_fail_3;
          };
        } else {
          s_St_6_Max_fail_2_0 = s_St_6_Max_fail_2;
          if (s_St_6_Max_fail_2_0) {
            s_St_6_Max_fail_3_0_1 = s_St_6_Max_fail_3;
          } else {
            s_St_6_Max_fail_3_0_0 = s_St_6_Max_fail_3;
          };
        };
      };
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_381 = true;
        v_365 = true;
        v_366 = true;
        v_367 = true;
      } else {
        if (failed_recovered) {
          v_41 = true;
          v_40_1 = false;
          v_40_2 = true;
          v_40_3 = true;
        } else {
          v_41 = self->pnr;
          v_40_1 = true;
          v_40_2 = false;
          v_40_3 = false;
        };
        v_39 = !(c2);
        if (v_39) {
          v_43 = true;
          v_42_1 = true;
          v_42_2 = true;
          v_42_3 = true;
        } else {
          v_43 = v_41;
          v_42_1 = v_40_1;
          v_42_2 = v_40_2;
          v_42_3 = v_40_3;
        };
        v_38 = !(c1);
        if (v_38) {
          r_St_6_Min = true;
        } else {
          r_St_6_Min = v_43;
        };
        v_381 = r_St_6_Min;
        if (v_38) {
          s_St_6_Min_1 = false;
        } else {
          s_St_6_Min_1 = v_42_1;
        };
        v_365 = s_St_6_Min_1;
        if (v_38) {
          s_St_6_Min_2 = true;
        } else {
          s_St_6_Min_2 = v_42_2;
        };
        v_366 = s_St_6_Min_2;
        if (v_38) {
          s_St_6_Min_3 = false;
        } else {
          s_St_6_Min_3 = v_42_3;
        };
        v_367 = s_St_6_Min_3;
        if (v_40_1) {
          v_40_2_1 = v_40_2;
          if (v_40_2_1) {
            v_40_3_1_1 = v_40_3;
          } else {
            v_40_3_1_0 = v_40_3;
          };
        } else {
          v_40_2_0 = v_40_2;
          if (v_40_2_0) {
            v_40_3_0_1 = v_40_3;
          } else {
            v_40_3_0_0 = v_40_3;
          };
        };
        if (v_42_1) {
          v_42_2_1 = v_42_2;
          if (v_42_2_1) {
            v_42_3_1_1 = v_42_3;
          } else {
            v_42_3_1_0 = v_42_3;
          };
        } else {
          v_42_2_0 = v_42_2;
          if (v_42_2_0) {
            v_42_3_0_1 = v_42_3;
          } else {
            v_42_3_0_0 = v_42_3;
          };
        };
        if (s_St_6_Min_1) {
          s_St_6_Min_2_1 = s_St_6_Min_2;
          if (s_St_6_Min_2_1) {
            s_St_6_Min_3_1_1 = s_St_6_Min_3;
          } else {
            s_St_6_Min_3_1_0 = s_St_6_Min_3;
          };
        } else {
          s_St_6_Min_2_0 = s_St_6_Min_2;
          if (s_St_6_Min_2_0) {
            s_St_6_Min_3_0_1 = s_St_6_Min_3;
          } else {
            s_St_6_Min_3_0_0 = s_St_6_Min_3;
          };
        };
      };
      v_374 = v_365;
      v_375 = v_366;
      v_376 = v_367;
      v_382 = v_381;
    };
    s_1 = v_374;
    s_2 = v_375;
    s_3 = v_376;
    r = v_382;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      if (ck_3_0_1) {
        if (failed_recovered) {
          v_35 = true;
          v_34_1 = true;
          v_34_2 = false;
          v_34_3 = false;
        } else {
          v_35 = self->pnr;
          v_34_1 = false;
          v_34_2 = true;
          v_34_3 = true;
        };
        v_33 = !(c2);
        if (v_33) {
          v_37 = true;
          v_36_1 = true;
          v_36_2 = true;
          v_36_3 = false;
        } else {
          v_37 = v_35;
          v_36_1 = v_34_1;
          v_36_2 = v_34_2;
          v_36_3 = v_34_3;
        };
        v_32 = !(c1);
        if (v_32) {
          r_St_6_Min_fail = true;
        } else {
          r_St_6_Min_fail = v_37;
        };
        v_383 = r_St_6_Min_fail;
        if (v_32) {
          s_St_6_Min_fail_1 = false;
        } else {
          s_St_6_Min_fail_1 = v_36_1;
        };
        v_368 = s_St_6_Min_fail_1;
        if (v_32) {
          s_St_6_Min_fail_2 = false;
        } else {
          s_St_6_Min_fail_2 = v_36_2;
        };
        v_369 = s_St_6_Min_fail_2;
        if (v_32) {
          s_St_6_Min_fail_3 = false;
        } else {
          s_St_6_Min_fail_3 = v_36_3;
        };
        v_370 = s_St_6_Min_fail_3;
      } else {
        if (failed_recovered) {
          v_51 = true;
          v_50_1 = false;
          v_50_2 = false;
          v_50_3 = false;
        } else {
          v_51 = self->pnr;
          v_50_1 = false;
          v_50_2 = true;
          v_50_3 = false;
        };
        v_49 = !(c2);
        if (v_49) {
          v_53 = true;
        } else {
          v_53 = v_51;
        };
        if (c1) {
          r_St_6_Off = true;
        } else {
          r_St_6_Off = v_53;
        };
        if (v_49) {
          v_52_1 = true;
        } else {
          v_52_1 = v_50_1;
        };
        if (c1) {
          s_St_6_Off_1 = true;
        } else {
          s_St_6_Off_1 = v_52_1;
        };
        if (v_49) {
          v_52_2 = true;
        } else {
          v_52_2 = v_50_2;
        };
        if (c1) {
          s_St_6_Off_2 = false;
        } else {
          s_St_6_Off_2 = v_52_2;
        };
        if (v_49) {
          v_52_3 = true;
        } else {
          v_52_3 = v_50_3;
        };
        if (c1) {
          s_St_6_Off_3 = false;
        } else {
          s_St_6_Off_3 = v_52_3;
        };
        v_383 = r_St_6_Off;
        v_368 = s_St_6_Off_1;
        v_369 = s_St_6_Off_2;
        v_370 = s_St_6_Off_3;
        if (v_50_1) {
          v_50_2_1 = v_50_2;
          if (v_50_2_1) {
            v_50_3_1_1 = v_50_3;
          } else {
            v_50_3_1_0 = v_50_3;
          };
        } else {
          v_50_2_0 = v_50_2;
          if (v_50_2_0) {
            v_50_3_0_1 = v_50_3;
          } else {
            v_50_3_0_0 = v_50_3;
          };
        };
        if (v_52_1) {
          v_52_2_1 = v_52_2;
          if (v_52_2_1) {
            v_52_3_1_1 = v_52_3;
          } else {
            v_52_3_1_0 = v_52_3;
          };
        } else {
          v_52_2_0 = v_52_2;
          if (v_52_2_0) {
            v_52_3_0_1 = v_52_3;
          } else {
            v_52_3_0_0 = v_52_3;
          };
        };
      };
      v_377 = v_368;
      v_378 = v_369;
      v_379 = v_370;
      v_385 = v_383;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_384 = true;
        v_371 = true;
        v_372 = true;
        v_373 = true;
      } else {
        if (failed_recovered) {
          v_46 = true;
          v_45_1 = false;
          v_45_2 = true;
          v_45_3 = false;
        } else {
          v_46 = self->pnr;
          v_45_1 = false;
          v_45_2 = false;
          v_45_3 = false;
        };
        v_44 = !(c2);
        if (v_44) {
          v_48 = true;
        } else {
          v_48 = v_46;
        };
        if (c1) {
          r_St_6_Off_fail = true;
        } else {
          r_St_6_Off_fail = v_48;
        };
        v_384 = r_St_6_Off_fail;
        if (v_44) {
          v_47_1 = true;
        } else {
          v_47_1 = v_45_1;
        };
        if (c1) {
          s_St_6_Off_fail_1 = false;
        } else {
          s_St_6_Off_fail_1 = v_47_1;
        };
        v_371 = s_St_6_Off_fail_1;
        if (v_44) {
          v_47_2 = true;
        } else {
          v_47_2 = v_45_2;
        };
        if (c1) {
          s_St_6_Off_fail_2 = true;
        } else {
          s_St_6_Off_fail_2 = v_47_2;
        };
        v_372 = s_St_6_Off_fail_2;
        if (v_44) {
          v_47_3 = false;
        } else {
          v_47_3 = v_45_3;
        };
        if (c1) {
          s_St_6_Off_fail_3 = true;
        } else {
          s_St_6_Off_fail_3 = v_47_3;
        };
        v_373 = s_St_6_Off_fail_3;
        if (v_45_1) {
          v_45_2_1 = v_45_2;
          if (v_45_2_1) {
            v_45_3_1_1 = v_45_3;
          } else {
            v_45_3_1_0 = v_45_3;
          };
        } else {
          v_45_2_0 = v_45_2;
          if (v_45_2_0) {
            v_45_3_0_1 = v_45_3;
          } else {
            v_45_3_0_0 = v_45_3;
          };
        };
        if (v_47_1) {
          v_47_2_1 = v_47_2;
          if (v_47_2_1) {
            v_47_3_1_1 = v_47_3;
          } else {
            v_47_3_1_0 = v_47_3;
          };
        } else {
          v_47_2_0 = v_47_2;
          if (v_47_2_0) {
            v_47_3_0_1 = v_47_3;
          } else {
            v_47_3_0_0 = v_47_3;
          };
        };
        if (s_St_6_Off_fail_1) {
          s_St_6_Off_fail_2_1 = s_St_6_Off_fail_2;
          if (s_St_6_Off_fail_2_1) {
            s_St_6_Off_fail_3_1_1 = s_St_6_Off_fail_3;
          } else {
            s_St_6_Off_fail_3_1_0 = s_St_6_Off_fail_3;
          };
        } else {
          s_St_6_Off_fail_2_0 = s_St_6_Off_fail_2;
          if (s_St_6_Off_fail_2_0) {
            s_St_6_Off_fail_3_0_1 = s_St_6_Off_fail_3;
          } else {
            s_St_6_Off_fail_3_0_0 = s_St_6_Off_fail_3;
          };
        };
      };
      v_377 = v_371;
      v_378 = v_372;
      v_379 = v_373;
      v_385 = v_384;
    };
    s_1 = v_377;
    s_2 = v_378;
    s_3 = v_379;
    r = v_385;
  };
  ck_7_1 = s_1;
  ck_7_2 = s_2;
  ck_7_3 = s_3;
  if (ck_7_1) {
    ck_7_2_1 = ck_7_2;
    if (ck_7_2_1) {
      ck_7_3_1_1 = ck_7_3;
      if (ck_7_3_1_1) {
        air_status_St_6_Max = 2;
        nr_St_6_Max = false;
        ns_St_6_Max_1 = true;
        ns_St_6_Max_2 = true;
        ns_St_6_Max_3 = true;
        v_329 = air_status_St_6_Max;
        v_353 = nr_St_6_Max;
        v_335 = ns_St_6_Max_1;
        v_336 = ns_St_6_Max_2;
        v_337 = ns_St_6_Max_3;
      } else {
        air_status_St_6_Max_fail = 5;
        v_329 = air_status_St_6_Max_fail;
        nr_St_6_Max_fail = false;
        v_353 = nr_St_6_Max_fail;
        ns_St_6_Max_fail_1 = true;
        v_335 = ns_St_6_Max_fail_1;
        ns_St_6_Max_fail_2 = true;
        v_336 = ns_St_6_Max_fail_2;
        ns_St_6_Max_fail_3 = false;
        v_337 = ns_St_6_Max_fail_3;
      };
      v_331 = v_329;
      v_347 = v_335;
      v_348 = v_336;
      v_349 = v_337;
      v_355 = v_353;
      if (ck_7_3_1_1) {
        if (ns_St_6_Max_1) {
          ns_St_6_Max_2_1 = ns_St_6_Max_2;
          if (ns_St_6_Max_2_1) {
            ns_St_6_Max_3_1_1 = ns_St_6_Max_3;
          } else {
            ns_St_6_Max_3_1_0 = ns_St_6_Max_3;
          };
        } else {
          ns_St_6_Max_2_0 = ns_St_6_Max_2;
          if (ns_St_6_Max_2_0) {
            ns_St_6_Max_3_0_1 = ns_St_6_Max_3;
          } else {
            ns_St_6_Max_3_0_0 = ns_St_6_Max_3;
          };
        };
      } else {
        if (ns_St_6_Max_fail_1) {
          ns_St_6_Max_fail_2_1 = ns_St_6_Max_fail_2;
          if (ns_St_6_Max_fail_2_1) {
            ns_St_6_Max_fail_3_1_1 = ns_St_6_Max_fail_3;
          } else {
            ns_St_6_Max_fail_3_1_0 = ns_St_6_Max_fail_3;
          };
        } else {
          ns_St_6_Max_fail_2_0 = ns_St_6_Max_fail_2;
          if (ns_St_6_Max_fail_2_0) {
            ns_St_6_Max_fail_3_0_1 = ns_St_6_Max_fail_3;
          } else {
            ns_St_6_Max_fail_3_0_0 = ns_St_6_Max_fail_3;
          };
        };
      };
    } else {
      ck_7_3_1_0 = ck_7_3;
      if (ck_7_3_1_0) {
        v_330 = 0;
        v_354 = true;
        v_338 = true;
        v_339 = true;
        v_340 = true;
      } else {
        air_status_St_6_Min = 1;
        v_330 = air_status_St_6_Min;
        nr_St_6_Min = false;
        v_354 = nr_St_6_Min;
        ns_St_6_Min_1 = true;
        v_338 = ns_St_6_Min_1;
        ns_St_6_Min_2 = false;
        v_339 = ns_St_6_Min_2;
        ns_St_6_Min_3 = false;
        v_340 = ns_St_6_Min_3;
        if (ns_St_6_Min_1) {
          ns_St_6_Min_2_1 = ns_St_6_Min_2;
          if (ns_St_6_Min_2_1) {
            ns_St_6_Min_3_1_1 = ns_St_6_Min_3;
          } else {
            ns_St_6_Min_3_1_0 = ns_St_6_Min_3;
          };
        } else {
          ns_St_6_Min_2_0 = ns_St_6_Min_2;
          if (ns_St_6_Min_2_0) {
            ns_St_6_Min_3_0_1 = ns_St_6_Min_3;
          } else {
            ns_St_6_Min_3_0_0 = ns_St_6_Min_3;
          };
        };
      };
      v_331 = v_330;
      v_347 = v_338;
      v_348 = v_339;
      v_349 = v_340;
      v_355 = v_354;
    };
    _out->air_status = v_331;
    ns_1 = v_347;
    ns_2 = v_348;
    ns_3 = v_349;
    nr = v_355;
  } else {
    ck_7_2_0 = ck_7_2;
    if (ck_7_2_0) {
      ck_7_3_0_1 = ck_7_3;
      if (ck_7_3_0_1) {
        air_status_St_6_Min_fail = 4;
        v_332 = air_status_St_6_Min_fail;
        nr_St_6_Min_fail = false;
        v_356 = nr_St_6_Min_fail;
        ns_St_6_Min_fail_1 = false;
        v_341 = ns_St_6_Min_fail_1;
        ns_St_6_Min_fail_2 = true;
        v_342 = ns_St_6_Min_fail_2;
        ns_St_6_Min_fail_3 = true;
        v_343 = ns_St_6_Min_fail_3;
      } else {
        air_status_St_6_Off = 0;
        nr_St_6_Off = false;
        ns_St_6_Off_1 = false;
        ns_St_6_Off_2 = true;
        ns_St_6_Off_3 = false;
        v_332 = air_status_St_6_Off;
        v_356 = nr_St_6_Off;
        v_341 = ns_St_6_Off_1;
        v_342 = ns_St_6_Off_2;
        v_343 = ns_St_6_Off_3;
      };
      v_334 = v_332;
      v_350 = v_341;
      v_351 = v_342;
      v_352 = v_343;
      v_358 = v_356;
    } else {
      ck_7_3_0_0 = ck_7_3;
      if (ck_7_3_0_0) {
        v_333 = 0;
        v_357 = true;
        v_344 = true;
        v_345 = true;
        v_346 = true;
      } else {
        air_status_St_6_Off_fail = 3;
        v_333 = air_status_St_6_Off_fail;
        nr_St_6_Off_fail = false;
        v_357 = nr_St_6_Off_fail;
        ns_St_6_Off_fail_1 = false;
        v_344 = ns_St_6_Off_fail_1;
        ns_St_6_Off_fail_2 = false;
        v_345 = ns_St_6_Off_fail_2;
        ns_St_6_Off_fail_3 = false;
        v_346 = ns_St_6_Off_fail_3;
        if (ns_St_6_Off_fail_1) {
          ns_St_6_Off_fail_2_1 = ns_St_6_Off_fail_2;
          if (ns_St_6_Off_fail_2_1) {
            ns_St_6_Off_fail_3_1_1 = ns_St_6_Off_fail_3;
          } else {
            ns_St_6_Off_fail_3_1_0 = ns_St_6_Off_fail_3;
          };
        } else {
          ns_St_6_Off_fail_2_0 = ns_St_6_Off_fail_2;
          if (ns_St_6_Off_fail_2_0) {
            ns_St_6_Off_fail_3_0_1 = ns_St_6_Off_fail_3;
          } else {
            ns_St_6_Off_fail_3_0_0 = ns_St_6_Off_fail_3;
          };
        };
      };
      v_334 = v_333;
      v_350 = v_344;
      v_351 = v_345;
      v_352 = v_346;
      v_358 = v_357;
    };
    _out->air_status = v_334;
    ns_1 = v_350;
    ns_2 = v_351;
    ns_3 = v_352;
    nr = v_358;
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
  if (!(ck_7_1)) {
    if (ck_7_2_0) {
      if (ck_7_3_0_1) {
        if (ns_St_6_Min_fail_1) {
          ns_St_6_Min_fail_2_1 = ns_St_6_Min_fail_2;
          if (ns_St_6_Min_fail_2_1) {
            ns_St_6_Min_fail_3_1_1 = ns_St_6_Min_fail_3;
          } else {
            ns_St_6_Min_fail_3_1_0 = ns_St_6_Min_fail_3;
          };
        } else {
          ns_St_6_Min_fail_2_0 = ns_St_6_Min_fail_2;
          if (ns_St_6_Min_fail_2_0) {
            ns_St_6_Min_fail_3_0_1 = ns_St_6_Min_fail_3;
          } else {
            ns_St_6_Min_fail_3_0_0 = ns_St_6_Min_fail_3;
          };
        };
      } else {
        if (ns_St_6_Off_1) {
          ns_St_6_Off_2_1 = ns_St_6_Off_2;
          if (ns_St_6_Off_2_1) {
            ns_St_6_Off_3_1_1 = ns_St_6_Off_3;
          } else {
            ns_St_6_Off_3_1_0 = ns_St_6_Off_3;
          };
        } else {
          ns_St_6_Off_2_0 = ns_St_6_Off_2;
          if (ns_St_6_Off_2_0) {
            ns_St_6_Off_3_0_1 = ns_St_6_Off_3;
          } else {
            ns_St_6_Off_3_0_0 = ns_St_6_Off_3;
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
        if (v_34_1) {
          v_34_2_1 = v_34_2;
          if (v_34_2_1) {
            v_34_3_1_1 = v_34_3;
          } else {
            v_34_3_1_0 = v_34_3;
          };
        } else {
          v_34_2_0 = v_34_2;
          if (v_34_2_0) {
            v_34_3_0_1 = v_34_3;
          } else {
            v_34_3_0_0 = v_34_3;
          };
        };
        if (v_36_1) {
          v_36_2_1 = v_36_2;
          if (v_36_2_1) {
            v_36_3_1_1 = v_36_3;
          } else {
            v_36_3_1_0 = v_36_3;
          };
        } else {
          v_36_2_0 = v_36_2;
          if (v_36_2_0) {
            v_36_3_0_1 = v_36_3;
          } else {
            v_36_3_0_0 = v_36_3;
          };
        };
        if (s_St_6_Min_fail_1) {
          s_St_6_Min_fail_2_1 = s_St_6_Min_fail_2;
          if (s_St_6_Min_fail_2_1) {
            s_St_6_Min_fail_3_1_1 = s_St_6_Min_fail_3;
          } else {
            s_St_6_Min_fail_3_1_0 = s_St_6_Min_fail_3;
          };
        } else {
          s_St_6_Min_fail_2_0 = s_St_6_Min_fail_2;
          if (s_St_6_Min_fail_2_0) {
            s_St_6_Min_fail_3_0_1 = s_St_6_Min_fail_3;
          } else {
            s_St_6_Min_fail_3_0_0 = s_St_6_Min_fail_3;
          };
        };
      } else {
        if (s_St_6_Off_1) {
          s_St_6_Off_2_1 = s_St_6_Off_2;
          if (s_St_6_Off_2_1) {
            s_St_6_Off_3_1_1 = s_St_6_Off_3;
          } else {
            s_St_6_Off_3_1_0 = s_St_6_Off_3;
          };
        } else {
          s_St_6_Off_2_0 = s_St_6_Off_2;
          if (s_St_6_Off_2_0) {
            s_St_6_Off_3_0_1 = s_St_6_Off_3;
          } else {
            s_St_6_Off_3_0_0 = s_St_6_Off_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_359 = ns_1;
  self->v_360 = ns_2;
  self->v_361 = ns_3;;
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

void System__fail_reset(System__fail_mem* self) {
  self->pnr = false;
  self->ck_1 = false;
}

void System__fail_step(int failed_recovered, System__fail_out* _out,
                       System__fail_mem* self) {
  
  int nr_St_8_Falha;
  int ns_St_8_Falha_1;
  int failed_St_8_Falha;
  int nr_St_8_Funcionando;
  int ns_St_8_Funcionando_1;
  int failed_St_8_Funcionando;
  int ck_9_1;
  int r_St_8_Falha;
  int s_St_8_Falha_1;
  int r_St_8_Funcionando;
  int s_St_8_Funcionando_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (failed_recovered) {
      r_St_8_Falha = true;
    } else {
      r_St_8_Falha = self->pnr;
    };
    r = r_St_8_Falha;
    if (failed_recovered) {
      s_St_8_Falha_1 = false;
    } else {
      s_St_8_Falha_1 = true;
    };
    s_1 = s_St_8_Falha_1;
  } else {
    if (failed_recovered) {
      r_St_8_Funcionando = true;
      s_St_8_Funcionando_1 = true;
    } else {
      r_St_8_Funcionando = self->pnr;
      s_St_8_Funcionando_1 = false;
    };
    r = r_St_8_Funcionando;
    s_1 = s_St_8_Funcionando_1;
  };
  ck_9_1 = s_1;
  if (ck_9_1) {
    failed_St_8_Falha = true;
    _out->failed = failed_St_8_Falha;
    nr_St_8_Falha = false;
    nr = nr_St_8_Falha;
    ns_St_8_Falha_1 = true;
    ns_1 = ns_St_8_Falha_1;
  } else {
    failed_St_8_Funcionando = false;
    nr_St_8_Funcionando = false;
    ns_St_8_Funcionando_1 = false;
    _out->failed = failed_St_8_Funcionando;
    nr = nr_St_8_Funcionando;
    ns_1 = ns_St_8_Funcionando_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__controller_reset(System__controller_mem* self) {
  self->pnr = false;
  self->v_394 = true;
  self->v_395 = true;
  self->pnr_1 = false;
  self->v_410 = true;
  self->v_411 = true;
  self->pnr_2 = false;
  self->v_448 = false;
  self->v_449 = true;
  self->v_450 = false;
  self->pnr_3 = false;
  self->ck_21_1 = true;
  self->pnr_4 = false;
  self->ck_19_1 = true;
  self->pnr_5 = false;
  self->ck_17_1 = true;
  self->pnr_6 = false;
  self->ck_15_1 = true;
  self->pnr_7 = false;
  self->ck_13_1 = true;
  self->pnr_8 = false;
  self->ck_11_1 = true;
  self->pnr_9 = false;
  self->ck_1 = true;
}

void System__controller_step(int change_shift, int worker, int cleaner,
                             int air_failed_recovered, int light_switch,
                             int light_failed_recovered, int blind_switch,
                             int blind_failed_recovered,
                             System__controller_out* _out,
                             System__controller_mem* self) {
  Controller_controller__controller_controller_out Controller_controller__controller_controller_out_st;
  
  int v_393;
  int v_392;
  int v_391;
  int v_390;
  int v_389;
  int v_388;
  int v_387;
  int v_386;
  int ns_St_9_On_fail_2_0;
  int ns_St_9_On_fail_2_1;
  int ns_St_9_On_2_0;
  int ns_St_9_On_2_1;
  int ns_St_9_Off_fail_2_0;
  int ns_St_9_Off_fail_2_1;
  int ns_St_9_Off_2_0;
  int ns_St_9_Off_2_1;
  int ck_28_2_0;
  int ck_28_2_1;
  int nr_St_9_On_fail;
  int ns_St_9_On_fail_2;
  int ns_St_9_On_fail_1;
  int light_source_status_1_St_9_On_fail;
  int nr_St_9_On;
  int ns_St_9_On_2;
  int ns_St_9_On_1;
  int light_source_status_1_St_9_On;
  int nr_St_9_Off_fail;
  int ns_St_9_Off_fail_2;
  int ns_St_9_Off_fail_1;
  int light_source_status_1_St_9_Off_fail;
  int nr_St_9_Off;
  int ns_St_9_Off_2;
  int ns_St_9_Off_1;
  int light_source_status_1_St_9_Off;
  int ck_28_2;
  int ck_28_1;
  int v_311_2_0;
  int v_311_2_1;
  int v_312;
  int v_311_2;
  int v_311_1;
  int v_310;
  int v_309;
  int v_308;
  int v_306_2_0;
  int v_306_2_1;
  int v_307;
  int v_306_2;
  int v_306_1;
  int v_305;
  int v_304;
  int v_303;
  int v_301_2_0;
  int v_301_2_1;
  int v_302;
  int v_301_2;
  int v_301_1;
  int v_300;
  int v_299;
  int v_298;
  int v_296_2_0;
  int v_296_2_1;
  int v_297;
  int v_296_2;
  int v_296_1;
  int v_295;
  int v_294;
  int v_293;
  int v_401;
  int v_400;
  int v_399;
  int v_398;
  int v_397;
  int v_396;
  int s_St_9_On_fail_2_0;
  int s_St_9_On_fail_2_1;
  int s_St_9_On_2_0;
  int s_St_9_On_2_1;
  int s_St_9_Off_fail_2_0;
  int s_St_9_Off_fail_2_1;
  int s_St_9_Off_2_0;
  int s_St_9_Off_2_1;
  int ck_27_2_0;
  int ck_27_2_1;
  int r_St_9_On_fail;
  int s_St_9_On_fail_2;
  int s_St_9_On_fail_1;
  int r_St_9_On;
  int s_St_9_On_2;
  int s_St_9_On_1;
  int r_St_9_Off_fail;
  int s_St_9_Off_fail_2;
  int s_St_9_Off_fail_1;
  int r_St_9_Off;
  int s_St_9_Off_2;
  int s_St_9_Off_1;
  int ck_27_2;
  int ck_27_1;
  int v_409;
  int v_408;
  int v_407;
  int v_406;
  int v_405;
  int v_404;
  int v_403;
  int v_402;
  int ns_1_St_10_On_fail_2_0;
  int ns_1_St_10_On_fail_2_1;
  int ns_1_St_10_On_2_0;
  int ns_1_St_10_On_2_1;
  int ns_1_St_10_Off_fail_2_0;
  int ns_1_St_10_Off_fail_2_1;
  int ns_1_St_10_Off_2_0;
  int ns_1_St_10_Off_2_1;
  int ck_26_2_0;
  int ck_26_2_1;
  int nr_1_St_10_On_fail;
  int ns_1_St_10_On_fail_2;
  int ns_1_St_10_On_fail_1;
  int light_source_status_St_10_On_fail;
  int nr_1_St_10_On;
  int ns_1_St_10_On_2;
  int ns_1_St_10_On_1;
  int light_source_status_St_10_On;
  int nr_1_St_10_Off_fail;
  int ns_1_St_10_Off_fail_2;
  int ns_1_St_10_Off_fail_1;
  int light_source_status_St_10_Off_fail;
  int nr_1_St_10_Off;
  int ns_1_St_10_Off_2;
  int ns_1_St_10_Off_1;
  int light_source_status_St_10_Off;
  int ck_26_2;
  int ck_26_1;
  int v_291_2_0;
  int v_291_2_1;
  int v_292;
  int v_291_2;
  int v_291_1;
  int v_290;
  int v_289;
  int v_288;
  int v_286_2_0;
  int v_286_2_1;
  int v_287;
  int v_286_2;
  int v_286_1;
  int v_285;
  int v_284;
  int v_283;
  int v_281_2_0;
  int v_281_2_1;
  int v_282;
  int v_281_2;
  int v_281_1;
  int v_280;
  int v_279;
  int v_278;
  int v_276_2_0;
  int v_276_2_1;
  int v_277;
  int v_276_2;
  int v_276_1;
  int v_275;
  int v_274;
  int v_273;
  int v_417;
  int v_416;
  int v_415;
  int v_414;
  int v_413;
  int v_412;
  int s_1_St_10_On_fail_2_0;
  int s_1_St_10_On_fail_2_1;
  int s_1_St_10_On_2_0;
  int s_1_St_10_On_2_1;
  int s_1_St_10_Off_fail_2_0;
  int s_1_St_10_Off_fail_2_1;
  int s_1_St_10_Off_2_0;
  int s_1_St_10_Off_2_1;
  int ck_25_2_0;
  int ck_25_2_1;
  int r_1_St_10_On_fail;
  int s_1_St_10_On_fail_2;
  int s_1_St_10_On_fail_1;
  int r_1_St_10_On;
  int s_1_St_10_On_2;
  int s_1_St_10_On_1;
  int r_1_St_10_Off_fail;
  int s_1_St_10_Off_fail_2;
  int s_1_St_10_Off_fail_1;
  int r_1_St_10_Off;
  int s_1_St_10_Off_2;
  int s_1_St_10_Off_1;
  int ck_25_2;
  int ck_25_1;
  int v_447;
  int v_446;
  int v_445;
  int v_444;
  int v_443;
  int v_442;
  int v_441;
  int v_440;
  int v_439;
  int v_438;
  int v_437;
  int v_436;
  int v_435;
  int v_434;
  int v_433;
  int v_432;
  int v_431;
  int v_430;
  int v_429;
  int v_428;
  int v_427;
  int v_426;
  int v_425;
  int v_424;
  int v_423;
  int v_422;
  int v_421;
  int v_420;
  int v_419;
  int v_418;
  int ns_2_St_11_Max_fail_2_0;
  int ns_2_St_11_Max_fail_3_0_0;
  int ns_2_St_11_Max_fail_3_0_1;
  int ns_2_St_11_Max_fail_2_1;
  int ns_2_St_11_Max_fail_3_1_0;
  int ns_2_St_11_Max_fail_3_1_1;
  int ns_2_St_11_Max_2_0;
  int ns_2_St_11_Max_3_0_0;
  int ns_2_St_11_Max_3_0_1;
  int ns_2_St_11_Max_2_1;
  int ns_2_St_11_Max_3_1_0;
  int ns_2_St_11_Max_3_1_1;
  int ns_2_St_11_Min_fail_2_0;
  int ns_2_St_11_Min_fail_3_0_0;
  int ns_2_St_11_Min_fail_3_0_1;
  int ns_2_St_11_Min_fail_2_1;
  int ns_2_St_11_Min_fail_3_1_0;
  int ns_2_St_11_Min_fail_3_1_1;
  int ns_2_St_11_Min_2_0;
  int ns_2_St_11_Min_3_0_0;
  int ns_2_St_11_Min_3_0_1;
  int ns_2_St_11_Min_2_1;
  int ns_2_St_11_Min_3_1_0;
  int ns_2_St_11_Min_3_1_1;
  int ns_2_St_11_Off_fail_2_0;
  int ns_2_St_11_Off_fail_3_0_0;
  int ns_2_St_11_Off_fail_3_0_1;
  int ns_2_St_11_Off_fail_2_1;
  int ns_2_St_11_Off_fail_3_1_0;
  int ns_2_St_11_Off_fail_3_1_1;
  int ns_2_St_11_Off_2_0;
  int ns_2_St_11_Off_3_0_0;
  int ns_2_St_11_Off_3_0_1;
  int ns_2_St_11_Off_2_1;
  int ns_2_St_11_Off_3_1_0;
  int ns_2_St_11_Off_3_1_1;
  int ck_24_2_0;
  int ck_24_3_0_0;
  int ck_24_3_0_1;
  int ck_24_2_1;
  int ck_24_3_1_0;
  int ck_24_3_1_1;
  int nr_2_St_11_Max_fail;
  int ns_2_St_11_Max_fail_3;
  int ns_2_St_11_Max_fail_2;
  int ns_2_St_11_Max_fail_1;
  int air_status_1_St_11_Max_fail;
  int nr_2_St_11_Max;
  int ns_2_St_11_Max_3;
  int ns_2_St_11_Max_2;
  int ns_2_St_11_Max_1;
  int air_status_1_St_11_Max;
  int nr_2_St_11_Min_fail;
  int ns_2_St_11_Min_fail_3;
  int ns_2_St_11_Min_fail_2;
  int ns_2_St_11_Min_fail_1;
  int air_status_1_St_11_Min_fail;
  int nr_2_St_11_Min;
  int ns_2_St_11_Min_3;
  int ns_2_St_11_Min_2;
  int ns_2_St_11_Min_1;
  int air_status_1_St_11_Min;
  int nr_2_St_11_Off_fail;
  int ns_2_St_11_Off_fail_3;
  int ns_2_St_11_Off_fail_2;
  int ns_2_St_11_Off_fail_1;
  int air_status_1_St_11_Off_fail;
  int nr_2_St_11_Off;
  int ns_2_St_11_Off_3;
  int ns_2_St_11_Off_2;
  int ns_2_St_11_Off_1;
  int air_status_1_St_11_Off;
  int ck_24_3;
  int ck_24_2;
  int ck_24_1;
  int v_271_2_0;
  int v_271_3_0_0;
  int v_271_3_0_1;
  int v_271_2_1;
  int v_271_3_1_0;
  int v_271_3_1_1;
  int v_269_2_0;
  int v_269_3_0_0;
  int v_269_3_0_1;
  int v_269_2_1;
  int v_269_3_1_0;
  int v_269_3_1_1;
  int v_272;
  int v_271_3;
  int v_271_2;
  int v_271_1;
  int v_270;
  int v_269_3;
  int v_269_2;
  int v_269_1;
  int v_268;
  int v_266_2_0;
  int v_266_3_0_0;
  int v_266_3_0_1;
  int v_266_2_1;
  int v_266_3_1_0;
  int v_266_3_1_1;
  int v_264_2_0;
  int v_264_3_0_0;
  int v_264_3_0_1;
  int v_264_2_1;
  int v_264_3_1_0;
  int v_264_3_1_1;
  int v_267;
  int v_266_3;
  int v_266_2;
  int v_266_1;
  int v_265;
  int v_264_3;
  int v_264_2;
  int v_264_1;
  int v_263;
  int v_261_2_0;
  int v_261_3_0_0;
  int v_261_3_0_1;
  int v_261_2_1;
  int v_261_3_1_0;
  int v_261_3_1_1;
  int v_259_2_0;
  int v_259_3_0_0;
  int v_259_3_0_1;
  int v_259_2_1;
  int v_259_3_1_0;
  int v_259_3_1_1;
  int v_262;
  int v_261_3;
  int v_261_2;
  int v_261_1;
  int v_260;
  int v_259_3;
  int v_259_2;
  int v_259_1;
  int v_258;
  int v_257;
  int v_255_2_0;
  int v_255_3_0_0;
  int v_255_3_0_1;
  int v_255_2_1;
  int v_255_3_1_0;
  int v_255_3_1_1;
  int v_253_2_0;
  int v_253_3_0_0;
  int v_253_3_0_1;
  int v_253_2_1;
  int v_253_3_1_0;
  int v_253_3_1_1;
  int v_256;
  int v_255_3;
  int v_255_2;
  int v_255_1;
  int v_254;
  int v_253_3;
  int v_253_2;
  int v_253_1;
  int v_252;
  int v_251;
  int v_249_2_0;
  int v_249_3_0_0;
  int v_249_3_0_1;
  int v_249_2_1;
  int v_249_3_1_0;
  int v_249_3_1_1;
  int v_247_2_0;
  int v_247_3_0_0;
  int v_247_3_0_1;
  int v_247_2_1;
  int v_247_3_1_0;
  int v_247_3_1_1;
  int v_250;
  int v_249_3;
  int v_249_2;
  int v_249_1;
  int v_248;
  int v_247_3;
  int v_247_2;
  int v_247_1;
  int v_246;
  int v_245;
  int v_243_2_0;
  int v_243_3_0_0;
  int v_243_3_0_1;
  int v_243_2_1;
  int v_243_3_1_0;
  int v_243_3_1_1;
  int v_241_2_0;
  int v_241_3_0_0;
  int v_241_3_0_1;
  int v_241_2_1;
  int v_241_3_1_0;
  int v_241_3_1_1;
  int v_244;
  int v_243_3;
  int v_243_2;
  int v_243_1;
  int v_242;
  int v_241_3;
  int v_241_2;
  int v_241_1;
  int v_240;
  int v_239;
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
  int v_455;
  int v_454;
  int v_453;
  int v_452;
  int v_451;
  int s_2_St_11_Max_fail_2_0;
  int s_2_St_11_Max_fail_3_0_0;
  int s_2_St_11_Max_fail_3_0_1;
  int s_2_St_11_Max_fail_2_1;
  int s_2_St_11_Max_fail_3_1_0;
  int s_2_St_11_Max_fail_3_1_1;
  int s_2_St_11_Max_2_0;
  int s_2_St_11_Max_3_0_0;
  int s_2_St_11_Max_3_0_1;
  int s_2_St_11_Max_2_1;
  int s_2_St_11_Max_3_1_0;
  int s_2_St_11_Max_3_1_1;
  int s_2_St_11_Min_fail_2_0;
  int s_2_St_11_Min_fail_3_0_0;
  int s_2_St_11_Min_fail_3_0_1;
  int s_2_St_11_Min_fail_2_1;
  int s_2_St_11_Min_fail_3_1_0;
  int s_2_St_11_Min_fail_3_1_1;
  int s_2_St_11_Min_2_0;
  int s_2_St_11_Min_3_0_0;
  int s_2_St_11_Min_3_0_1;
  int s_2_St_11_Min_2_1;
  int s_2_St_11_Min_3_1_0;
  int s_2_St_11_Min_3_1_1;
  int s_2_St_11_Off_fail_2_0;
  int s_2_St_11_Off_fail_3_0_0;
  int s_2_St_11_Off_fail_3_0_1;
  int s_2_St_11_Off_fail_2_1;
  int s_2_St_11_Off_fail_3_1_0;
  int s_2_St_11_Off_fail_3_1_1;
  int s_2_St_11_Off_2_0;
  int s_2_St_11_Off_3_0_0;
  int s_2_St_11_Off_3_0_1;
  int s_2_St_11_Off_2_1;
  int s_2_St_11_Off_3_1_0;
  int s_2_St_11_Off_3_1_1;
  int ck_23_2_0;
  int ck_23_3_0_0;
  int ck_23_3_0_1;
  int ck_23_2_1;
  int ck_23_3_1_0;
  int ck_23_3_1_1;
  int r_2_St_11_Max_fail;
  int s_2_St_11_Max_fail_3;
  int s_2_St_11_Max_fail_2;
  int s_2_St_11_Max_fail_1;
  int r_2_St_11_Max;
  int s_2_St_11_Max_3;
  int s_2_St_11_Max_2;
  int s_2_St_11_Max_1;
  int r_2_St_11_Min_fail;
  int s_2_St_11_Min_fail_3;
  int s_2_St_11_Min_fail_2;
  int s_2_St_11_Min_fail_1;
  int r_2_St_11_Min;
  int s_2_St_11_Min_3;
  int s_2_St_11_Min_2;
  int s_2_St_11_Min_1;
  int r_2_St_11_Off_fail;
  int s_2_St_11_Off_fail_3;
  int s_2_St_11_Off_fail_2;
  int s_2_St_11_Off_fail_1;
  int r_2_St_11_Off;
  int s_2_St_11_Off_3;
  int s_2_St_11_Off_2;
  int s_2_St_11_Off_1;
  int ck_23_3;
  int ck_23_2;
  int ck_23_1;
  int nr_3_St_12_Open;
  int ns_3_St_12_Open_1;
  int window_open_1_St_12_Open;
  int nr_3_St_12_Closed;
  int ns_3_St_12_Closed_1;
  int window_open_1_St_12_Closed;
  int ck_22_1;
  int v_238;
  int r_3_St_12_Open;
  int s_3_St_12_Open_1;
  int r_3_St_12_Closed;
  int s_3_St_12_Closed_1;
  int nr_4_St_13_On;
  int ns_4_St_13_On_1;
  int computer_on_St_13_On;
  int nr_4_St_13_Off;
  int ns_4_St_13_Off_1;
  int computer_on_St_13_Off;
  int ck_20_1;
  int v_237;
  int r_4_St_13_On;
  int s_4_St_13_On_1;
  int r_4_St_13_Off;
  int s_4_St_13_Off_1;
  int nr_5_St_14_Present;
  int ns_5_St_14_Present_1;
  int presence_1_St_14_Present;
  int nr_5_St_14_Not_Present;
  int ns_5_St_14_Not_Present_1;
  int presence_1_St_14_Not_Present;
  int ck_18_1;
  int r_5_St_14_Present;
  int s_5_St_14_Present_1;
  int r_5_St_14_Not_Present;
  int s_5_St_14_Not_Present_1;
  int nr_6_St_15_Present;
  int ns_6_St_15_Present_1;
  int presence_St_15_Present;
  int nr_6_St_15_Not_Present;
  int ns_6_St_15_Not_Present_1;
  int presence_St_15_Not_Present;
  int ck_16_1;
  int r_6_St_15_Present;
  int s_6_St_15_Present_1;
  int r_6_St_15_Not_Present;
  int s_6_St_15_Not_Present_1;
  int nr_7_St_16_Open;
  int ns_7_St_16_Open_1;
  int closet_open_1_St_16_Open;
  int nr_7_St_16_Locked;
  int ns_7_St_16_Locked_1;
  int closet_open_1_St_16_Locked;
  int ck_14_1;
  int v_236;
  int r_7_St_16_Open;
  int s_7_St_16_Open_1;
  int r_7_St_16_Locked;
  int s_7_St_16_Locked_1;
  int nr_8_St_17_Open;
  int ns_8_St_17_Open_1;
  int door_open_1_St_17_Open;
  int nr_8_St_17_Closed;
  int ns_8_St_17_Closed_1;
  int door_open_1_St_17_Closed;
  int ck_12_1;
  int v_235;
  int v_234;
  int r_8_St_17_Open;
  int s_8_St_17_Open_1;
  int r_8_St_17_Closed;
  int s_8_St_17_Closed_1;
  int nr_9_St_18_Noite;
  int ns_9_St_18_Noite_1;
  int night_1_St_18_Noite;
  int nr_9_St_18_Dia;
  int ns_9_St_18_Dia_1;
  int night_1_St_18_Dia;
  int ck_10_1;
  int r_9_St_18_Noite;
  int s_9_St_18_Noite_1;
  int r_9_St_18_Dia;
  int s_9_St_18_Dia_1;
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
  int s_6_1;
  int ns_6_1;
  int r_6;
  int nr_6;
  int s_5_1;
  int ns_5_1;
  int r_5;
  int nr_5;
  int s_4_1;
  int ns_4_1;
  int r_4;
  int nr_4;
  int s_3_1;
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
  int c1_2;
  int c2_2;
  int sw_1;
  int failed_recovered_2;
  int light_source_status_1;
  int c1_1;
  int c2_1;
  int sw;
  int failed_recovered_1;
  int light_source_status;
  int c1;
  int c2;
  int failed_recovered;
  int air_status_1;
  int c_3;
  int window_open_1;
  int c_2;
  int computer_on;
  int arrived_1;
  int presence_1;
  int arrived;
  int presence;
  int c_1;
  int closet_open_1;
  int c;
  int door_open_1;
  int change;
  int night_1;
  int rule15;
  int rule14;
  int rule13;
  int rule12;
  int rule11;
  int rule10;
  int rule9;
  int rule8;
  int rule7;
  int rule6;
  int rule5;
  int rule4;
  int rule3;
  int rule2;
  int rule1;
  int v;
  int v_54;
  int v_55;
  int v_56;
  int v_57;
  int v_58;
  int v_59;
  int v_60;
  int v_61;
  int v_62;
  int v_63;
  int v_64;
  int v_65;
  int v_66;
  int v_67;
  int v_68;
  int v_69;
  int v_70;
  int v_71;
  int v_72;
  int v_73;
  int v_74;
  int v_75;
  int v_76;
  int v_77;
  int v_78;
  int v_79;
  int v_80;
  int v_81;
  int v_82;
  int v_83;
  int v_84;
  int v_85;
  int v_86;
  int v_87;
  int v_88;
  int v_89;
  int v_90;
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
  int c_blind_2;
  int c_blind_1;
  int c_light_2;
  int c_light_1;
  int c_closet;
  int c_air_2;
  int c_air_1;
  int c_window;
  int c_pc;
  int c_door;
  c1_2 = blind_switch;
  failed_recovered_2 = blind_failed_recovered;
  ck_27_1 = self->v_394;
  ck_27_2 = self->v_395;
  c1_1 = light_switch;
  failed_recovered_1 = light_failed_recovered;
  ck_25_1 = self->v_410;
  ck_25_2 = self->v_411;
  failed_recovered = air_failed_recovered;
  ck_23_1 = self->v_448;
  ck_23_2 = self->v_449;
  ck_23_3 = self->v_450;
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
                                                    self->ck_1, self->pnr_9,
                                                    self->ck_11_1,
                                                    self->pnr_8,
                                                    self->ck_13_1,
                                                    self->pnr_7,
                                                    self->ck_15_1,
                                                    self->pnr_6,
                                                    self->ck_17_1,
                                                    self->pnr_5,
                                                    self->ck_19_1,
                                                    self->pnr_4,
                                                    self->ck_21_1,
                                                    self->pnr_3, self->v_450,
                                                    self->v_449, self->v_448,
                                                    self->pnr_2, self->v_411,
                                                    self->v_410, self->pnr_1,
                                                    self->v_395, self->v_394,
                                                    self->pnr, true, true,
                                                    true, true, true, true,
                                                    true, true, true, true,
                                                    &Controller_controller__controller_controller_out_st);
  c_blind_2 = Controller_controller__controller_controller_out_st.controller_c_blind_2;
  c_blind_1 = Controller_controller__controller_controller_out_st.controller_c_blind_1;
  c_light_2 = Controller_controller__controller_controller_out_st.controller_c_light_2;
  c_light_1 = Controller_controller__controller_controller_out_st.controller_c_light_1;
  c_closet = Controller_controller__controller_controller_out_st.controller_c_closet;
  c_air_2 = Controller_controller__controller_controller_out_st.controller_c_air_2;
  c_air_1 = Controller_controller__controller_controller_out_st.controller_c_air_1;
  c_window = Controller_controller__controller_controller_out_st.controller_c_window;
  c_pc = Controller_controller__controller_controller_out_st.controller_c_pc;
  c_door = Controller_controller__controller_controller_out_st.controller_c_door;
  c2_2 = c_blind_1;
  sw_1 = c_blind_2;
  c2_1 = c_light_1;
  sw = c_light_2;
  c1 = c_air_1;
  c2 = c_air_2;
  c_3 = c_window;
  c_2 = c_pc;
  c_1 = c_closet;
  c = c_door;
  if (ck_27_1) {
    ck_27_2_1 = ck_27_2;
    if (ck_27_2_1) {
      if (failed_recovered_2) {
        v_312 = true;
        v_311_1 = true;
        v_311_2 = false;
      } else {
        v_312 = self->pnr;
        v_311_1 = true;
        v_311_2 = true;
      };
      v_309 = !(c2_2);
      v_308 = (c1_2&&sw_1);
      v_310 = (v_308||v_309);
      if (v_310) {
        r_St_9_Off = true;
        s_St_9_Off_1 = false;
        s_St_9_Off_2 = true;
      } else {
        r_St_9_Off = v_312;
        s_St_9_Off_1 = v_311_1;
        s_St_9_Off_2 = v_311_2;
      };
      v_400 = r_St_9_Off;
      v_396 = s_St_9_Off_1;
      v_397 = s_St_9_Off_2;
      if (v_311_1) {
        v_311_2_1 = v_311_2;
      } else {
        v_311_2_0 = v_311_2;
      };
      if (s_St_9_Off_1) {
        s_St_9_Off_2_1 = s_St_9_Off_2;
      } else {
        s_St_9_Off_2_0 = s_St_9_Off_2;
      };
    } else {
      if (failed_recovered_2) {
        v_307 = true;
        v_306_1 = true;
        v_306_2 = true;
      } else {
        v_307 = self->pnr;
        v_306_1 = true;
        v_306_2 = false;
      };
      v_304 = !(c2_2);
      v_303 = (c1_2&&sw_1);
      v_305 = (v_303||v_304);
      if (v_305) {
        r_St_9_Off_fail = true;
      } else {
        r_St_9_Off_fail = v_307;
      };
      v_400 = r_St_9_Off_fail;
      if (v_305) {
        s_St_9_Off_fail_1 = false;
      } else {
        s_St_9_Off_fail_1 = v_306_1;
      };
      v_396 = s_St_9_Off_fail_1;
      if (v_305) {
        s_St_9_Off_fail_2 = false;
      } else {
        s_St_9_Off_fail_2 = v_306_2;
      };
      v_397 = s_St_9_Off_fail_2;
      if (v_306_1) {
        v_306_2_1 = v_306_2;
      } else {
        v_306_2_0 = v_306_2;
      };
      if (s_St_9_Off_fail_1) {
        s_St_9_Off_fail_2_1 = s_St_9_Off_fail_2;
      } else {
        s_St_9_Off_fail_2_0 = s_St_9_Off_fail_2;
      };
    };
    s_1_3 = v_396;
    s_2_4 = v_397;
    r = v_400;
  } else {
    ck_27_2_0 = ck_27_2;
    if (ck_27_2_0) {
      if (failed_recovered_2) {
        v_302 = true;
        v_301_1 = false;
        v_301_2 = false;
      } else {
        v_302 = self->pnr;
        v_301_1 = false;
        v_301_2 = true;
      };
      v_299 = !(c2_2);
      v_298 = (c1_2&&sw_1);
      v_300 = (v_298||v_299);
      if (v_300) {
        r_St_9_On = true;
        s_St_9_On_1 = true;
        s_St_9_On_2 = true;
      } else {
        r_St_9_On = v_302;
        s_St_9_On_1 = v_301_1;
        s_St_9_On_2 = v_301_2;
      };
      v_401 = r_St_9_On;
      v_398 = s_St_9_On_1;
      v_399 = s_St_9_On_2;
    } else {
      if (failed_recovered_2) {
        v_297 = true;
        v_296_1 = false;
        v_296_2 = true;
      } else {
        v_297 = self->pnr;
        v_296_1 = false;
        v_296_2 = false;
      };
      v_294 = !(c2_2);
      v_293 = (c1_2&&sw_1);
      v_295 = (v_293||v_294);
      if (v_295) {
        r_St_9_On_fail = true;
      } else {
        r_St_9_On_fail = v_297;
      };
      v_401 = r_St_9_On_fail;
      if (v_295) {
        s_St_9_On_fail_1 = true;
      } else {
        s_St_9_On_fail_1 = v_296_1;
      };
      v_398 = s_St_9_On_fail_1;
      if (v_295) {
        s_St_9_On_fail_2 = false;
      } else {
        s_St_9_On_fail_2 = v_296_2;
      };
      v_399 = s_St_9_On_fail_2;
    };
    s_1_3 = v_398;
    s_2_4 = v_399;
    r = v_401;
  };
  ck_28_1 = s_1_3;
  ck_28_2 = s_2_4;
  if (ck_28_1) {
    ck_28_2_1 = ck_28_2;
    if (ck_28_2_1) {
      light_source_status_1_St_9_Off = 0;
      nr_St_9_Off = false;
      ns_St_9_Off_1 = true;
      ns_St_9_Off_2 = true;
      v_386 = light_source_status_1_St_9_Off;
      v_392 = nr_St_9_Off;
      v_388 = ns_St_9_Off_1;
      v_389 = ns_St_9_Off_2;
      if (ns_St_9_Off_1) {
        ns_St_9_Off_2_1 = ns_St_9_Off_2;
      } else {
        ns_St_9_Off_2_0 = ns_St_9_Off_2;
      };
    } else {
      light_source_status_1_St_9_Off_fail = 2;
      v_386 = light_source_status_1_St_9_Off_fail;
      nr_St_9_Off_fail = false;
      v_392 = nr_St_9_Off_fail;
      ns_St_9_Off_fail_1 = true;
      v_388 = ns_St_9_Off_fail_1;
      ns_St_9_Off_fail_2 = false;
      v_389 = ns_St_9_Off_fail_2;
      if (ns_St_9_Off_fail_1) {
        ns_St_9_Off_fail_2_1 = ns_St_9_Off_fail_2;
      } else {
        ns_St_9_Off_fail_2_0 = ns_St_9_Off_fail_2;
      };
    };
    light_source_status_1 = v_386;
    ns_1_3 = v_388;
    ns_2_4 = v_389;
    nr = v_392;
  } else {
    ck_28_2_0 = ck_28_2;
    if (ck_28_2_0) {
      light_source_status_1_St_9_On = 1;
      nr_St_9_On = false;
      ns_St_9_On_1 = false;
      ns_St_9_On_2 = true;
      v_387 = light_source_status_1_St_9_On;
      v_393 = nr_St_9_On;
      v_390 = ns_St_9_On_1;
      v_391 = ns_St_9_On_2;
    } else {
      light_source_status_1_St_9_On_fail = 3;
      v_387 = light_source_status_1_St_9_On_fail;
      nr_St_9_On_fail = false;
      v_393 = nr_St_9_On_fail;
      ns_St_9_On_fail_1 = false;
      v_390 = ns_St_9_On_fail_1;
      ns_St_9_On_fail_2 = false;
      v_391 = ns_St_9_On_fail_2;
    };
    light_source_status_1 = v_387;
    ns_1_3 = v_390;
    ns_2_4 = v_391;
    nr = v_393;
  };
  _out->blind_status = light_source_status_1;
  v_56 = (_out->blind_status<2);
  v_60 = (_out->blind_status==1);
  v_67 = (_out->blind_status>1);
  v_75 = (_out->blind_status<2);
  v_78 = (_out->blind_status==1);
  v_128 = (_out->blind_status==1);
  v_129 = !(v_128);
  v_145 = (_out->blind_status==1);
  v_146 = !(v_145);
  v_160 = (_out->blind_status>1);
  v_170 = (_out->blind_status<2);
  v_173 = (_out->blind_status==1);
  v_182 = (_out->blind_status<2);
  v_185 = (_out->blind_status==1);
  v_194 = (_out->blind_status>1);
  v_204 = (_out->blind_status<2);
  v_207 = (_out->blind_status==1);
  if (ns_1_3) {
    ns_2_4_1 = ns_2_4;
  } else {
    ns_2_4_0 = ns_2_4;
  };
  if (!(ck_28_1)) {
    if (ck_28_2_0) {
      if (ns_St_9_On_1) {
        ns_St_9_On_2_1 = ns_St_9_On_2;
      } else {
        ns_St_9_On_2_0 = ns_St_9_On_2;
      };
    } else {
      if (ns_St_9_On_fail_1) {
        ns_St_9_On_fail_2_1 = ns_St_9_On_fail_2;
      } else {
        ns_St_9_On_fail_2_0 = ns_St_9_On_fail_2;
      };
    };
  };
  if (s_1_3) {
    s_2_4_1 = s_2_4;
  } else {
    s_2_4_0 = s_2_4;
  };
  if (!(ck_27_1)) {
    if (ck_27_2_0) {
      if (v_301_1) {
        v_301_2_1 = v_301_2;
      } else {
        v_301_2_0 = v_301_2;
      };
      if (s_St_9_On_1) {
        s_St_9_On_2_1 = s_St_9_On_2;
      } else {
        s_St_9_On_2_0 = s_St_9_On_2;
      };
    } else {
      if (v_296_1) {
        v_296_2_1 = v_296_2;
      } else {
        v_296_2_0 = v_296_2;
      };
      if (s_St_9_On_fail_1) {
        s_St_9_On_fail_2_1 = s_St_9_On_fail_2;
      } else {
        s_St_9_On_fail_2_0 = s_St_9_On_fail_2;
      };
    };
  };
  if (ck_25_1) {
    ck_25_2_1 = ck_25_2;
    if (ck_25_2_1) {
      if (failed_recovered_1) {
        v_292 = true;
        v_291_1 = true;
        v_291_2 = false;
      } else {
        v_292 = self->pnr_1;
        v_291_1 = true;
        v_291_2 = true;
      };
      v_289 = !(c2_1);
      v_288 = (c1_1&&sw);
      v_290 = (v_288||v_289);
      if (v_290) {
        r_1_St_10_Off = true;
        s_1_St_10_Off_1 = false;
        s_1_St_10_Off_2 = true;
      } else {
        r_1_St_10_Off = v_292;
        s_1_St_10_Off_1 = v_291_1;
        s_1_St_10_Off_2 = v_291_2;
      };
      v_416 = r_1_St_10_Off;
      v_412 = s_1_St_10_Off_1;
      v_413 = s_1_St_10_Off_2;
      if (v_291_1) {
        v_291_2_1 = v_291_2;
      } else {
        v_291_2_0 = v_291_2;
      };
      if (s_1_St_10_Off_1) {
        s_1_St_10_Off_2_1 = s_1_St_10_Off_2;
      } else {
        s_1_St_10_Off_2_0 = s_1_St_10_Off_2;
      };
    } else {
      if (failed_recovered_1) {
        v_287 = true;
        v_286_1 = true;
        v_286_2 = true;
      } else {
        v_287 = self->pnr_1;
        v_286_1 = true;
        v_286_2 = false;
      };
      v_284 = !(c2_1);
      v_283 = (c1_1&&sw);
      v_285 = (v_283||v_284);
      if (v_285) {
        r_1_St_10_Off_fail = true;
      } else {
        r_1_St_10_Off_fail = v_287;
      };
      v_416 = r_1_St_10_Off_fail;
      if (v_285) {
        s_1_St_10_Off_fail_1 = false;
      } else {
        s_1_St_10_Off_fail_1 = v_286_1;
      };
      v_412 = s_1_St_10_Off_fail_1;
      if (v_285) {
        s_1_St_10_Off_fail_2 = false;
      } else {
        s_1_St_10_Off_fail_2 = v_286_2;
      };
      v_413 = s_1_St_10_Off_fail_2;
      if (v_286_1) {
        v_286_2_1 = v_286_2;
      } else {
        v_286_2_0 = v_286_2;
      };
      if (s_1_St_10_Off_fail_1) {
        s_1_St_10_Off_fail_2_1 = s_1_St_10_Off_fail_2;
      } else {
        s_1_St_10_Off_fail_2_0 = s_1_St_10_Off_fail_2;
      };
    };
    s_1_1 = v_412;
    s_1_2 = v_413;
    r_1 = v_416;
  } else {
    ck_25_2_0 = ck_25_2;
    if (ck_25_2_0) {
      if (failed_recovered_1) {
        v_282 = true;
        v_281_1 = false;
        v_281_2 = false;
      } else {
        v_282 = self->pnr_1;
        v_281_1 = false;
        v_281_2 = true;
      };
      v_279 = !(c2_1);
      v_278 = (c1_1&&sw);
      v_280 = (v_278||v_279);
      if (v_280) {
        r_1_St_10_On = true;
        s_1_St_10_On_1 = true;
        s_1_St_10_On_2 = true;
      } else {
        r_1_St_10_On = v_282;
        s_1_St_10_On_1 = v_281_1;
        s_1_St_10_On_2 = v_281_2;
      };
      v_417 = r_1_St_10_On;
      v_414 = s_1_St_10_On_1;
      v_415 = s_1_St_10_On_2;
    } else {
      if (failed_recovered_1) {
        v_277 = true;
        v_276_1 = false;
        v_276_2 = true;
      } else {
        v_277 = self->pnr_1;
        v_276_1 = false;
        v_276_2 = false;
      };
      v_274 = !(c2_1);
      v_273 = (c1_1&&sw);
      v_275 = (v_273||v_274);
      if (v_275) {
        r_1_St_10_On_fail = true;
      } else {
        r_1_St_10_On_fail = v_277;
      };
      v_417 = r_1_St_10_On_fail;
      if (v_275) {
        s_1_St_10_On_fail_1 = true;
      } else {
        s_1_St_10_On_fail_1 = v_276_1;
      };
      v_414 = s_1_St_10_On_fail_1;
      if (v_275) {
        s_1_St_10_On_fail_2 = false;
      } else {
        s_1_St_10_On_fail_2 = v_276_2;
      };
      v_415 = s_1_St_10_On_fail_2;
    };
    s_1_1 = v_414;
    s_1_2 = v_415;
    r_1 = v_417;
  };
  ck_26_1 = s_1_1;
  ck_26_2 = s_1_2;
  if (ck_26_1) {
    ck_26_2_1 = ck_26_2;
    if (ck_26_2_1) {
      light_source_status_St_10_Off = 0;
      nr_1_St_10_Off = false;
      ns_1_St_10_Off_1 = true;
      ns_1_St_10_Off_2 = true;
      v_402 = light_source_status_St_10_Off;
      v_408 = nr_1_St_10_Off;
      v_404 = ns_1_St_10_Off_1;
      v_405 = ns_1_St_10_Off_2;
      if (ns_1_St_10_Off_1) {
        ns_1_St_10_Off_2_1 = ns_1_St_10_Off_2;
      } else {
        ns_1_St_10_Off_2_0 = ns_1_St_10_Off_2;
      };
    } else {
      light_source_status_St_10_Off_fail = 2;
      v_402 = light_source_status_St_10_Off_fail;
      nr_1_St_10_Off_fail = false;
      v_408 = nr_1_St_10_Off_fail;
      ns_1_St_10_Off_fail_1 = true;
      v_404 = ns_1_St_10_Off_fail_1;
      ns_1_St_10_Off_fail_2 = false;
      v_405 = ns_1_St_10_Off_fail_2;
      if (ns_1_St_10_Off_fail_1) {
        ns_1_St_10_Off_fail_2_1 = ns_1_St_10_Off_fail_2;
      } else {
        ns_1_St_10_Off_fail_2_0 = ns_1_St_10_Off_fail_2;
      };
    };
    light_source_status = v_402;
    ns_1_1 = v_404;
    ns_1_2 = v_405;
    nr_1 = v_408;
  } else {
    ck_26_2_0 = ck_26_2;
    if (ck_26_2_0) {
      light_source_status_St_10_On = 1;
      nr_1_St_10_On = false;
      ns_1_St_10_On_1 = false;
      ns_1_St_10_On_2 = true;
      v_403 = light_source_status_St_10_On;
      v_409 = nr_1_St_10_On;
      v_406 = ns_1_St_10_On_1;
      v_407 = ns_1_St_10_On_2;
    } else {
      light_source_status_St_10_On_fail = 3;
      v_403 = light_source_status_St_10_On_fail;
      nr_1_St_10_On_fail = false;
      v_409 = nr_1_St_10_On_fail;
      ns_1_St_10_On_fail_1 = false;
      v_406 = ns_1_St_10_On_fail_1;
      ns_1_St_10_On_fail_2 = false;
      v_407 = ns_1_St_10_On_fail_2;
    };
    light_source_status = v_403;
    ns_1_1 = v_406;
    ns_1_2 = v_407;
    nr_1 = v_409;
  };
  _out->light_status = light_source_status;
  v_59 = (_out->light_status==1);
  v_61 = (v_59||v_60);
  v_84 = (_out->light_status<2);
  v_87 = (_out->light_status==1);
  v_97 = (_out->light_status==1);
  v_98 = !(v_97);
  v_108 = (_out->light_status==1);
  v_125 = (_out->light_status==1);
  v_126 = !(v_125);
  v_142 = (_out->light_status==1);
  v_143 = !(v_142);
  v_156 = (_out->light_status>1);
  v_166 = (_out->light_status>1);
  v_178 = (_out->light_status>1);
  v_190 = (_out->light_status<2);
  v_200 = (_out->light_status<2);
  v_212 = (_out->light_status<2);
  v_217 = (_out->light_status==1);
  if (ns_1_1) {
    ns_1_2_1 = ns_1_2;
  } else {
    ns_1_2_0 = ns_1_2;
  };
  if (!(ck_26_1)) {
    if (ck_26_2_0) {
      if (ns_1_St_10_On_1) {
        ns_1_St_10_On_2_1 = ns_1_St_10_On_2;
      } else {
        ns_1_St_10_On_2_0 = ns_1_St_10_On_2;
      };
    } else {
      if (ns_1_St_10_On_fail_1) {
        ns_1_St_10_On_fail_2_1 = ns_1_St_10_On_fail_2;
      } else {
        ns_1_St_10_On_fail_2_0 = ns_1_St_10_On_fail_2;
      };
    };
  };
  if (s_1_1) {
    s_1_2_1 = s_1_2;
  } else {
    s_1_2_0 = s_1_2;
  };
  if (!(ck_25_1)) {
    if (ck_25_2_0) {
      if (v_281_1) {
        v_281_2_1 = v_281_2;
      } else {
        v_281_2_0 = v_281_2;
      };
      if (s_1_St_10_On_1) {
        s_1_St_10_On_2_1 = s_1_St_10_On_2;
      } else {
        s_1_St_10_On_2_0 = s_1_St_10_On_2;
      };
    } else {
      if (v_276_1) {
        v_276_2_1 = v_276_2;
      } else {
        v_276_2_0 = v_276_2;
      };
      if (s_1_St_10_On_fail_1) {
        s_1_St_10_On_fail_2_1 = s_1_St_10_On_fail_2;
      } else {
        s_1_St_10_On_fail_2_0 = s_1_St_10_On_fail_2;
      };
    };
  };
  if (ck_23_1) {
    ck_23_2_1 = ck_23_2;
    if (ck_23_2_1) {
      ck_23_3_1_1 = ck_23_3;
      if (ck_23_3_1_1) {
        if (failed_recovered) {
          v_248 = true;
          v_247_1 = true;
          v_247_2 = true;
          v_247_3 = false;
        } else {
          v_248 = self->pnr_2;
          v_247_1 = true;
          v_247_2 = true;
          v_247_3 = true;
        };
        v_246 = !(c2);
        if (v_246) {
          v_250 = true;
          v_249_1 = false;
          v_249_2 = true;
          v_249_3 = false;
        } else {
          v_250 = v_248;
          v_249_1 = v_247_1;
          v_249_2 = v_247_2;
          v_249_3 = v_247_3;
        };
        v_245 = !(c1);
        if (v_245) {
          r_2_St_11_Max = true;
          s_2_St_11_Max_1 = true;
          s_2_St_11_Max_2 = false;
          s_2_St_11_Max_3 = false;
        } else {
          r_2_St_11_Max = v_250;
          s_2_St_11_Max_1 = v_249_1;
          s_2_St_11_Max_2 = v_249_2;
          s_2_St_11_Max_3 = v_249_3;
        };
        v_469 = r_2_St_11_Max;
        v_451 = s_2_St_11_Max_1;
        v_452 = s_2_St_11_Max_2;
        v_453 = s_2_St_11_Max_3;
      } else {
        if (failed_recovered) {
          v_242 = true;
          v_241_1 = true;
          v_241_2 = true;
          v_241_3 = true;
        } else {
          v_242 = self->pnr_2;
          v_241_1 = true;
          v_241_2 = true;
          v_241_3 = false;
        };
        v_240 = !(c2);
        if (v_240) {
          v_244 = true;
          v_243_1 = false;
          v_243_2 = false;
          v_243_3 = false;
        } else {
          v_244 = v_242;
          v_243_1 = v_241_1;
          v_243_2 = v_241_2;
          v_243_3 = v_241_3;
        };
        v_239 = !(c1);
        if (v_239) {
          r_2_St_11_Max_fail = true;
        } else {
          r_2_St_11_Max_fail = v_244;
        };
        v_469 = r_2_St_11_Max_fail;
        if (v_239) {
          s_2_St_11_Max_fail_1 = false;
        } else {
          s_2_St_11_Max_fail_1 = v_243_1;
        };
        v_451 = s_2_St_11_Max_fail_1;
        if (v_239) {
          s_2_St_11_Max_fail_2 = true;
        } else {
          s_2_St_11_Max_fail_2 = v_243_2;
        };
        v_452 = s_2_St_11_Max_fail_2;
        if (v_239) {
          s_2_St_11_Max_fail_3 = true;
        } else {
          s_2_St_11_Max_fail_3 = v_243_3;
        };
        v_453 = s_2_St_11_Max_fail_3;
      };
      v_463 = v_451;
      v_464 = v_452;
      v_465 = v_453;
      v_471 = v_469;
      if (ck_23_3_1_1) {
        if (v_247_1) {
          v_247_2_1 = v_247_2;
          if (v_247_2_1) {
            v_247_3_1_1 = v_247_3;
          } else {
            v_247_3_1_0 = v_247_3;
          };
        } else {
          v_247_2_0 = v_247_2;
          if (v_247_2_0) {
            v_247_3_0_1 = v_247_3;
          } else {
            v_247_3_0_0 = v_247_3;
          };
        };
        if (v_249_1) {
          v_249_2_1 = v_249_2;
          if (v_249_2_1) {
            v_249_3_1_1 = v_249_3;
          } else {
            v_249_3_1_0 = v_249_3;
          };
        } else {
          v_249_2_0 = v_249_2;
          if (v_249_2_0) {
            v_249_3_0_1 = v_249_3;
          } else {
            v_249_3_0_0 = v_249_3;
          };
        };
        if (s_2_St_11_Max_1) {
          s_2_St_11_Max_2_1 = s_2_St_11_Max_2;
          if (s_2_St_11_Max_2_1) {
            s_2_St_11_Max_3_1_1 = s_2_St_11_Max_3;
          } else {
            s_2_St_11_Max_3_1_0 = s_2_St_11_Max_3;
          };
        } else {
          s_2_St_11_Max_2_0 = s_2_St_11_Max_2;
          if (s_2_St_11_Max_2_0) {
            s_2_St_11_Max_3_0_1 = s_2_St_11_Max_3;
          } else {
            s_2_St_11_Max_3_0_0 = s_2_St_11_Max_3;
          };
        };
      } else {
        if (v_241_1) {
          v_241_2_1 = v_241_2;
          if (v_241_2_1) {
            v_241_3_1_1 = v_241_3;
          } else {
            v_241_3_1_0 = v_241_3;
          };
        } else {
          v_241_2_0 = v_241_2;
          if (v_241_2_0) {
            v_241_3_0_1 = v_241_3;
          } else {
            v_241_3_0_0 = v_241_3;
          };
        };
        if (v_243_1) {
          v_243_2_1 = v_243_2;
          if (v_243_2_1) {
            v_243_3_1_1 = v_243_3;
          } else {
            v_243_3_1_0 = v_243_3;
          };
        } else {
          v_243_2_0 = v_243_2;
          if (v_243_2_0) {
            v_243_3_0_1 = v_243_3;
          } else {
            v_243_3_0_0 = v_243_3;
          };
        };
        if (s_2_St_11_Max_fail_1) {
          s_2_St_11_Max_fail_2_1 = s_2_St_11_Max_fail_2;
          if (s_2_St_11_Max_fail_2_1) {
            s_2_St_11_Max_fail_3_1_1 = s_2_St_11_Max_fail_3;
          } else {
            s_2_St_11_Max_fail_3_1_0 = s_2_St_11_Max_fail_3;
          };
        } else {
          s_2_St_11_Max_fail_2_0 = s_2_St_11_Max_fail_2;
          if (s_2_St_11_Max_fail_2_0) {
            s_2_St_11_Max_fail_3_0_1 = s_2_St_11_Max_fail_3;
          } else {
            s_2_St_11_Max_fail_3_0_0 = s_2_St_11_Max_fail_3;
          };
        };
      };
    } else {
      ck_23_3_1_0 = ck_23_3;
      if (ck_23_3_1_0) {
        v_470 = true;
        v_454 = true;
        v_455 = true;
        v_456 = true;
      } else {
        if (failed_recovered) {
          v_260 = true;
          v_259_1 = false;
          v_259_2 = true;
          v_259_3 = true;
        } else {
          v_260 = self->pnr_2;
          v_259_1 = true;
          v_259_2 = false;
          v_259_3 = false;
        };
        v_258 = !(c2);
        if (v_258) {
          v_262 = true;
          v_261_1 = true;
          v_261_2 = true;
          v_261_3 = true;
        } else {
          v_262 = v_260;
          v_261_1 = v_259_1;
          v_261_2 = v_259_2;
          v_261_3 = v_259_3;
        };
        v_257 = !(c1);
        if (v_257) {
          r_2_St_11_Min = true;
        } else {
          r_2_St_11_Min = v_262;
        };
        v_470 = r_2_St_11_Min;
        if (v_257) {
          s_2_St_11_Min_1 = false;
        } else {
          s_2_St_11_Min_1 = v_261_1;
        };
        v_454 = s_2_St_11_Min_1;
        if (v_257) {
          s_2_St_11_Min_2 = true;
        } else {
          s_2_St_11_Min_2 = v_261_2;
        };
        v_455 = s_2_St_11_Min_2;
        if (v_257) {
          s_2_St_11_Min_3 = false;
        } else {
          s_2_St_11_Min_3 = v_261_3;
        };
        v_456 = s_2_St_11_Min_3;
        if (v_259_1) {
          v_259_2_1 = v_259_2;
          if (v_259_2_1) {
            v_259_3_1_1 = v_259_3;
          } else {
            v_259_3_1_0 = v_259_3;
          };
        } else {
          v_259_2_0 = v_259_2;
          if (v_259_2_0) {
            v_259_3_0_1 = v_259_3;
          } else {
            v_259_3_0_0 = v_259_3;
          };
        };
        if (v_261_1) {
          v_261_2_1 = v_261_2;
          if (v_261_2_1) {
            v_261_3_1_1 = v_261_3;
          } else {
            v_261_3_1_0 = v_261_3;
          };
        } else {
          v_261_2_0 = v_261_2;
          if (v_261_2_0) {
            v_261_3_0_1 = v_261_3;
          } else {
            v_261_3_0_0 = v_261_3;
          };
        };
        if (s_2_St_11_Min_1) {
          s_2_St_11_Min_2_1 = s_2_St_11_Min_2;
          if (s_2_St_11_Min_2_1) {
            s_2_St_11_Min_3_1_1 = s_2_St_11_Min_3;
          } else {
            s_2_St_11_Min_3_1_0 = s_2_St_11_Min_3;
          };
        } else {
          s_2_St_11_Min_2_0 = s_2_St_11_Min_2;
          if (s_2_St_11_Min_2_0) {
            s_2_St_11_Min_3_0_1 = s_2_St_11_Min_3;
          } else {
            s_2_St_11_Min_3_0_0 = s_2_St_11_Min_3;
          };
        };
      };
      v_463 = v_454;
      v_464 = v_455;
      v_465 = v_456;
      v_471 = v_470;
    };
    s_2_1 = v_463;
    s_2_2 = v_464;
    s_2_3 = v_465;
    r_2 = v_471;
  } else {
    ck_23_2_0 = ck_23_2;
    if (ck_23_2_0) {
      ck_23_3_0_1 = ck_23_3;
      if (ck_23_3_0_1) {
        if (failed_recovered) {
          v_254 = true;
          v_253_1 = true;
          v_253_2 = false;
          v_253_3 = false;
        } else {
          v_254 = self->pnr_2;
          v_253_1 = false;
          v_253_2 = true;
          v_253_3 = true;
        };
        v_252 = !(c2);
        if (v_252) {
          v_256 = true;
          v_255_1 = true;
          v_255_2 = true;
          v_255_3 = false;
        } else {
          v_256 = v_254;
          v_255_1 = v_253_1;
          v_255_2 = v_253_2;
          v_255_3 = v_253_3;
        };
        v_251 = !(c1);
        if (v_251) {
          r_2_St_11_Min_fail = true;
        } else {
          r_2_St_11_Min_fail = v_256;
        };
        v_472 = r_2_St_11_Min_fail;
        if (v_251) {
          s_2_St_11_Min_fail_1 = false;
        } else {
          s_2_St_11_Min_fail_1 = v_255_1;
        };
        v_457 = s_2_St_11_Min_fail_1;
        if (v_251) {
          s_2_St_11_Min_fail_2 = false;
        } else {
          s_2_St_11_Min_fail_2 = v_255_2;
        };
        v_458 = s_2_St_11_Min_fail_2;
        if (v_251) {
          s_2_St_11_Min_fail_3 = false;
        } else {
          s_2_St_11_Min_fail_3 = v_255_3;
        };
        v_459 = s_2_St_11_Min_fail_3;
      } else {
        if (failed_recovered) {
          v_270 = true;
          v_269_1 = false;
          v_269_2 = false;
          v_269_3 = false;
        } else {
          v_270 = self->pnr_2;
          v_269_1 = false;
          v_269_2 = true;
          v_269_3 = false;
        };
        v_268 = !(c2);
        if (v_268) {
          v_272 = true;
        } else {
          v_272 = v_270;
        };
        if (c1) {
          r_2_St_11_Off = true;
        } else {
          r_2_St_11_Off = v_272;
        };
        if (v_268) {
          v_271_1 = true;
        } else {
          v_271_1 = v_269_1;
        };
        if (c1) {
          s_2_St_11_Off_1 = true;
        } else {
          s_2_St_11_Off_1 = v_271_1;
        };
        if (v_268) {
          v_271_2 = true;
        } else {
          v_271_2 = v_269_2;
        };
        if (c1) {
          s_2_St_11_Off_2 = false;
        } else {
          s_2_St_11_Off_2 = v_271_2;
        };
        if (v_268) {
          v_271_3 = true;
        } else {
          v_271_3 = v_269_3;
        };
        if (c1) {
          s_2_St_11_Off_3 = false;
        } else {
          s_2_St_11_Off_3 = v_271_3;
        };
        v_472 = r_2_St_11_Off;
        v_457 = s_2_St_11_Off_1;
        v_458 = s_2_St_11_Off_2;
        v_459 = s_2_St_11_Off_3;
        if (v_269_1) {
          v_269_2_1 = v_269_2;
          if (v_269_2_1) {
            v_269_3_1_1 = v_269_3;
          } else {
            v_269_3_1_0 = v_269_3;
          };
        } else {
          v_269_2_0 = v_269_2;
          if (v_269_2_0) {
            v_269_3_0_1 = v_269_3;
          } else {
            v_269_3_0_0 = v_269_3;
          };
        };
        if (v_271_1) {
          v_271_2_1 = v_271_2;
          if (v_271_2_1) {
            v_271_3_1_1 = v_271_3;
          } else {
            v_271_3_1_0 = v_271_3;
          };
        } else {
          v_271_2_0 = v_271_2;
          if (v_271_2_0) {
            v_271_3_0_1 = v_271_3;
          } else {
            v_271_3_0_0 = v_271_3;
          };
        };
      };
      v_466 = v_457;
      v_467 = v_458;
      v_468 = v_459;
      v_474 = v_472;
    } else {
      ck_23_3_0_0 = ck_23_3;
      if (ck_23_3_0_0) {
        v_473 = true;
        v_460 = true;
        v_461 = true;
        v_462 = true;
      } else {
        if (failed_recovered) {
          v_265 = true;
          v_264_1 = false;
          v_264_2 = true;
          v_264_3 = false;
        } else {
          v_265 = self->pnr_2;
          v_264_1 = false;
          v_264_2 = false;
          v_264_3 = false;
        };
        v_263 = !(c2);
        if (v_263) {
          v_267 = true;
        } else {
          v_267 = v_265;
        };
        if (c1) {
          r_2_St_11_Off_fail = true;
        } else {
          r_2_St_11_Off_fail = v_267;
        };
        v_473 = r_2_St_11_Off_fail;
        if (v_263) {
          v_266_1 = true;
        } else {
          v_266_1 = v_264_1;
        };
        if (c1) {
          s_2_St_11_Off_fail_1 = false;
        } else {
          s_2_St_11_Off_fail_1 = v_266_1;
        };
        v_460 = s_2_St_11_Off_fail_1;
        if (v_263) {
          v_266_2 = true;
        } else {
          v_266_2 = v_264_2;
        };
        if (c1) {
          s_2_St_11_Off_fail_2 = true;
        } else {
          s_2_St_11_Off_fail_2 = v_266_2;
        };
        v_461 = s_2_St_11_Off_fail_2;
        if (v_263) {
          v_266_3 = false;
        } else {
          v_266_3 = v_264_3;
        };
        if (c1) {
          s_2_St_11_Off_fail_3 = true;
        } else {
          s_2_St_11_Off_fail_3 = v_266_3;
        };
        v_462 = s_2_St_11_Off_fail_3;
        if (v_264_1) {
          v_264_2_1 = v_264_2;
          if (v_264_2_1) {
            v_264_3_1_1 = v_264_3;
          } else {
            v_264_3_1_0 = v_264_3;
          };
        } else {
          v_264_2_0 = v_264_2;
          if (v_264_2_0) {
            v_264_3_0_1 = v_264_3;
          } else {
            v_264_3_0_0 = v_264_3;
          };
        };
        if (v_266_1) {
          v_266_2_1 = v_266_2;
          if (v_266_2_1) {
            v_266_3_1_1 = v_266_3;
          } else {
            v_266_3_1_0 = v_266_3;
          };
        } else {
          v_266_2_0 = v_266_2;
          if (v_266_2_0) {
            v_266_3_0_1 = v_266_3;
          } else {
            v_266_3_0_0 = v_266_3;
          };
        };
        if (s_2_St_11_Off_fail_1) {
          s_2_St_11_Off_fail_2_1 = s_2_St_11_Off_fail_2;
          if (s_2_St_11_Off_fail_2_1) {
            s_2_St_11_Off_fail_3_1_1 = s_2_St_11_Off_fail_3;
          } else {
            s_2_St_11_Off_fail_3_1_0 = s_2_St_11_Off_fail_3;
          };
        } else {
          s_2_St_11_Off_fail_2_0 = s_2_St_11_Off_fail_2;
          if (s_2_St_11_Off_fail_2_0) {
            s_2_St_11_Off_fail_3_0_1 = s_2_St_11_Off_fail_3;
          } else {
            s_2_St_11_Off_fail_3_0_0 = s_2_St_11_Off_fail_3;
          };
        };
      };
      v_466 = v_460;
      v_467 = v_461;
      v_468 = v_462;
      v_474 = v_473;
    };
    s_2_1 = v_466;
    s_2_2 = v_467;
    s_2_3 = v_468;
    r_2 = v_474;
  };
  ck_24_1 = s_2_1;
  ck_24_2 = s_2_2;
  ck_24_3 = s_2_3;
  if (ck_24_1) {
    ck_24_2_1 = ck_24_2;
    if (ck_24_2_1) {
      ck_24_3_1_1 = ck_24_3;
      if (ck_24_3_1_1) {
        air_status_1_St_11_Max = 2;
        nr_2_St_11_Max = false;
        ns_2_St_11_Max_1 = true;
        ns_2_St_11_Max_2 = true;
        ns_2_St_11_Max_3 = true;
        v_418 = air_status_1_St_11_Max;
        v_442 = nr_2_St_11_Max;
        v_424 = ns_2_St_11_Max_1;
        v_425 = ns_2_St_11_Max_2;
        v_426 = ns_2_St_11_Max_3;
      } else {
        air_status_1_St_11_Max_fail = 5;
        v_418 = air_status_1_St_11_Max_fail;
        nr_2_St_11_Max_fail = false;
        v_442 = nr_2_St_11_Max_fail;
        ns_2_St_11_Max_fail_1 = true;
        v_424 = ns_2_St_11_Max_fail_1;
        ns_2_St_11_Max_fail_2 = true;
        v_425 = ns_2_St_11_Max_fail_2;
        ns_2_St_11_Max_fail_3 = false;
        v_426 = ns_2_St_11_Max_fail_3;
      };
      v_420 = v_418;
      v_436 = v_424;
      v_437 = v_425;
      v_438 = v_426;
      v_444 = v_442;
      if (ck_24_3_1_1) {
        if (ns_2_St_11_Max_1) {
          ns_2_St_11_Max_2_1 = ns_2_St_11_Max_2;
          if (ns_2_St_11_Max_2_1) {
            ns_2_St_11_Max_3_1_1 = ns_2_St_11_Max_3;
          } else {
            ns_2_St_11_Max_3_1_0 = ns_2_St_11_Max_3;
          };
        } else {
          ns_2_St_11_Max_2_0 = ns_2_St_11_Max_2;
          if (ns_2_St_11_Max_2_0) {
            ns_2_St_11_Max_3_0_1 = ns_2_St_11_Max_3;
          } else {
            ns_2_St_11_Max_3_0_0 = ns_2_St_11_Max_3;
          };
        };
      } else {
        if (ns_2_St_11_Max_fail_1) {
          ns_2_St_11_Max_fail_2_1 = ns_2_St_11_Max_fail_2;
          if (ns_2_St_11_Max_fail_2_1) {
            ns_2_St_11_Max_fail_3_1_1 = ns_2_St_11_Max_fail_3;
          } else {
            ns_2_St_11_Max_fail_3_1_0 = ns_2_St_11_Max_fail_3;
          };
        } else {
          ns_2_St_11_Max_fail_2_0 = ns_2_St_11_Max_fail_2;
          if (ns_2_St_11_Max_fail_2_0) {
            ns_2_St_11_Max_fail_3_0_1 = ns_2_St_11_Max_fail_3;
          } else {
            ns_2_St_11_Max_fail_3_0_0 = ns_2_St_11_Max_fail_3;
          };
        };
      };
    } else {
      ck_24_3_1_0 = ck_24_3;
      if (ck_24_3_1_0) {
        v_419 = 0;
        v_443 = true;
        v_427 = true;
        v_428 = true;
        v_429 = true;
      } else {
        air_status_1_St_11_Min = 1;
        v_419 = air_status_1_St_11_Min;
        nr_2_St_11_Min = false;
        v_443 = nr_2_St_11_Min;
        ns_2_St_11_Min_1 = true;
        v_427 = ns_2_St_11_Min_1;
        ns_2_St_11_Min_2 = false;
        v_428 = ns_2_St_11_Min_2;
        ns_2_St_11_Min_3 = false;
        v_429 = ns_2_St_11_Min_3;
        if (ns_2_St_11_Min_1) {
          ns_2_St_11_Min_2_1 = ns_2_St_11_Min_2;
          if (ns_2_St_11_Min_2_1) {
            ns_2_St_11_Min_3_1_1 = ns_2_St_11_Min_3;
          } else {
            ns_2_St_11_Min_3_1_0 = ns_2_St_11_Min_3;
          };
        } else {
          ns_2_St_11_Min_2_0 = ns_2_St_11_Min_2;
          if (ns_2_St_11_Min_2_0) {
            ns_2_St_11_Min_3_0_1 = ns_2_St_11_Min_3;
          } else {
            ns_2_St_11_Min_3_0_0 = ns_2_St_11_Min_3;
          };
        };
      };
      v_420 = v_419;
      v_436 = v_427;
      v_437 = v_428;
      v_438 = v_429;
      v_444 = v_443;
    };
    air_status_1 = v_420;
    ns_2_1 = v_436;
    ns_2_2 = v_437;
    ns_2_3 = v_438;
    nr_2 = v_444;
  } else {
    ck_24_2_0 = ck_24_2;
    if (ck_24_2_0) {
      ck_24_3_0_1 = ck_24_3;
      if (ck_24_3_0_1) {
        air_status_1_St_11_Min_fail = 4;
        v_421 = air_status_1_St_11_Min_fail;
        nr_2_St_11_Min_fail = false;
        v_445 = nr_2_St_11_Min_fail;
        ns_2_St_11_Min_fail_1 = false;
        v_430 = ns_2_St_11_Min_fail_1;
        ns_2_St_11_Min_fail_2 = true;
        v_431 = ns_2_St_11_Min_fail_2;
        ns_2_St_11_Min_fail_3 = true;
        v_432 = ns_2_St_11_Min_fail_3;
      } else {
        air_status_1_St_11_Off = 0;
        nr_2_St_11_Off = false;
        ns_2_St_11_Off_1 = false;
        ns_2_St_11_Off_2 = true;
        ns_2_St_11_Off_3 = false;
        v_421 = air_status_1_St_11_Off;
        v_445 = nr_2_St_11_Off;
        v_430 = ns_2_St_11_Off_1;
        v_431 = ns_2_St_11_Off_2;
        v_432 = ns_2_St_11_Off_3;
      };
      v_423 = v_421;
      v_439 = v_430;
      v_440 = v_431;
      v_441 = v_432;
      v_447 = v_445;
    } else {
      ck_24_3_0_0 = ck_24_3;
      if (ck_24_3_0_0) {
        v_422 = 0;
        v_446 = true;
        v_433 = true;
        v_434 = true;
        v_435 = true;
      } else {
        air_status_1_St_11_Off_fail = 3;
        v_422 = air_status_1_St_11_Off_fail;
        nr_2_St_11_Off_fail = false;
        v_446 = nr_2_St_11_Off_fail;
        ns_2_St_11_Off_fail_1 = false;
        v_433 = ns_2_St_11_Off_fail_1;
        ns_2_St_11_Off_fail_2 = false;
        v_434 = ns_2_St_11_Off_fail_2;
        ns_2_St_11_Off_fail_3 = false;
        v_435 = ns_2_St_11_Off_fail_3;
        if (ns_2_St_11_Off_fail_1) {
          ns_2_St_11_Off_fail_2_1 = ns_2_St_11_Off_fail_2;
          if (ns_2_St_11_Off_fail_2_1) {
            ns_2_St_11_Off_fail_3_1_1 = ns_2_St_11_Off_fail_3;
          } else {
            ns_2_St_11_Off_fail_3_1_0 = ns_2_St_11_Off_fail_3;
          };
        } else {
          ns_2_St_11_Off_fail_2_0 = ns_2_St_11_Off_fail_2;
          if (ns_2_St_11_Off_fail_2_0) {
            ns_2_St_11_Off_fail_3_0_1 = ns_2_St_11_Off_fail_3;
          } else {
            ns_2_St_11_Off_fail_3_0_0 = ns_2_St_11_Off_fail_3;
          };
        };
      };
      v_423 = v_422;
      v_439 = v_433;
      v_440 = v_434;
      v_441 = v_435;
      v_447 = v_446;
    };
    air_status_1 = v_423;
    ns_2_1 = v_439;
    ns_2_2 = v_440;
    ns_2_3 = v_441;
    nr_2 = v_447;
  };
  _out->air_status = air_status_1;
  v_65 = (_out->air_status>2);
  v_73 = (_out->air_status>2);
  v_88 = (_out->air_status<3);
  v_93 = (_out->air_status==1);
  v_102 = (_out->air_status<3);
  v_105 = (_out->air_status==1);
  v_112 = (_out->air_status<3);
  v_115 = (_out->air_status==2);
  v_131 = (_out->air_status==1);
  v_132 = !(v_131);
  v_148 = (_out->air_status==1);
  v_149 = !(v_148);
  v_151 = (_out->air_status==2);
  v_152 = !(v_151);
  v_158 = (_out->air_status>2);
  v_168 = (_out->air_status>2);
  v_180 = (_out->air_status<3);
  v_186 = (_out->air_status==1);
  v_187 = (v_185&&v_186);
  v_192 = (_out->air_status>2);
  v_202 = (_out->air_status>2);
  v_214 = (_out->air_status<3);
  v_218 = (_out->air_status==1);
  v_219 = (v_217&&v_218);
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
  if (!(ck_24_1)) {
    if (ck_24_2_0) {
      if (ck_24_3_0_1) {
        if (ns_2_St_11_Min_fail_1) {
          ns_2_St_11_Min_fail_2_1 = ns_2_St_11_Min_fail_2;
          if (ns_2_St_11_Min_fail_2_1) {
            ns_2_St_11_Min_fail_3_1_1 = ns_2_St_11_Min_fail_3;
          } else {
            ns_2_St_11_Min_fail_3_1_0 = ns_2_St_11_Min_fail_3;
          };
        } else {
          ns_2_St_11_Min_fail_2_0 = ns_2_St_11_Min_fail_2;
          if (ns_2_St_11_Min_fail_2_0) {
            ns_2_St_11_Min_fail_3_0_1 = ns_2_St_11_Min_fail_3;
          } else {
            ns_2_St_11_Min_fail_3_0_0 = ns_2_St_11_Min_fail_3;
          };
        };
      } else {
        if (ns_2_St_11_Off_1) {
          ns_2_St_11_Off_2_1 = ns_2_St_11_Off_2;
          if (ns_2_St_11_Off_2_1) {
            ns_2_St_11_Off_3_1_1 = ns_2_St_11_Off_3;
          } else {
            ns_2_St_11_Off_3_1_0 = ns_2_St_11_Off_3;
          };
        } else {
          ns_2_St_11_Off_2_0 = ns_2_St_11_Off_2;
          if (ns_2_St_11_Off_2_0) {
            ns_2_St_11_Off_3_0_1 = ns_2_St_11_Off_3;
          } else {
            ns_2_St_11_Off_3_0_0 = ns_2_St_11_Off_3;
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
  if (!(ck_23_1)) {
    if (ck_23_2_0) {
      if (ck_23_3_0_1) {
        if (v_253_1) {
          v_253_2_1 = v_253_2;
          if (v_253_2_1) {
            v_253_3_1_1 = v_253_3;
          } else {
            v_253_3_1_0 = v_253_3;
          };
        } else {
          v_253_2_0 = v_253_2;
          if (v_253_2_0) {
            v_253_3_0_1 = v_253_3;
          } else {
            v_253_3_0_0 = v_253_3;
          };
        };
        if (v_255_1) {
          v_255_2_1 = v_255_2;
          if (v_255_2_1) {
            v_255_3_1_1 = v_255_3;
          } else {
            v_255_3_1_0 = v_255_3;
          };
        } else {
          v_255_2_0 = v_255_2;
          if (v_255_2_0) {
            v_255_3_0_1 = v_255_3;
          } else {
            v_255_3_0_0 = v_255_3;
          };
        };
        if (s_2_St_11_Min_fail_1) {
          s_2_St_11_Min_fail_2_1 = s_2_St_11_Min_fail_2;
          if (s_2_St_11_Min_fail_2_1) {
            s_2_St_11_Min_fail_3_1_1 = s_2_St_11_Min_fail_3;
          } else {
            s_2_St_11_Min_fail_3_1_0 = s_2_St_11_Min_fail_3;
          };
        } else {
          s_2_St_11_Min_fail_2_0 = s_2_St_11_Min_fail_2;
          if (s_2_St_11_Min_fail_2_0) {
            s_2_St_11_Min_fail_3_0_1 = s_2_St_11_Min_fail_3;
          } else {
            s_2_St_11_Min_fail_3_0_0 = s_2_St_11_Min_fail_3;
          };
        };
      } else {
        if (s_2_St_11_Off_1) {
          s_2_St_11_Off_2_1 = s_2_St_11_Off_2;
          if (s_2_St_11_Off_2_1) {
            s_2_St_11_Off_3_1_1 = s_2_St_11_Off_3;
          } else {
            s_2_St_11_Off_3_1_0 = s_2_St_11_Off_3;
          };
        } else {
          s_2_St_11_Off_2_0 = s_2_St_11_Off_2;
          if (s_2_St_11_Off_2_0) {
            s_2_St_11_Off_3_0_1 = s_2_St_11_Off_3;
          } else {
            s_2_St_11_Off_3_0_0 = s_2_St_11_Off_3;
          };
        };
      };
    };
  };
  if (self->ck_21_1) {
    v_238 = !(c_3);
    if (v_238) {
      r_3_St_12_Closed = true;
      s_3_St_12_Closed_1 = false;
    } else {
      r_3_St_12_Closed = self->pnr_3;
      s_3_St_12_Closed_1 = true;
    };
    r_3 = r_3_St_12_Closed;
    s_3_1 = s_3_St_12_Closed_1;
  } else {
    if (c_3) {
      r_3_St_12_Open = true;
    } else {
      r_3_St_12_Open = self->pnr_3;
    };
    r_3 = r_3_St_12_Open;
    if (c_3) {
      s_3_St_12_Open_1 = true;
    } else {
      s_3_St_12_Open_1 = false;
    };
    s_3_1 = s_3_St_12_Open_1;
  };
  ck_22_1 = s_3_1;
  if (ck_22_1) {
    window_open_1_St_12_Closed = false;
    nr_3_St_12_Closed = false;
    ns_3_St_12_Closed_1 = true;
    window_open_1 = window_open_1_St_12_Closed;
    nr_3 = nr_3_St_12_Closed;
    ns_3_1 = ns_3_St_12_Closed_1;
  } else {
    window_open_1_St_12_Open = true;
    window_open_1 = window_open_1_St_12_Open;
    nr_3_St_12_Open = false;
    nr_3 = nr_3_St_12_Open;
    ns_3_St_12_Open_1 = false;
    ns_3_1 = ns_3_St_12_Open_1;
  };
  _out->window_open = window_open_1;
  v_79 = (_out->window_open&&v_78);
  v_100 = !(_out->window_open);
  v_110 = !(_out->window_open);
  v_123 = !(_out->window_open);
  v_140 = !(_out->window_open);
  v_174 = (_out->window_open&&v_173);
  v_208 = (_out->window_open&&v_207);
  if (self->ck_19_1) {
    if (c_2) {
      r_4_St_13_Off = true;
      s_4_St_13_Off_1 = false;
    } else {
      r_4_St_13_Off = self->pnr_4;
      s_4_St_13_Off_1 = true;
    };
    r_4 = r_4_St_13_Off;
    s_4_1 = s_4_St_13_Off_1;
  } else {
    v_237 = !(c_2);
    if (v_237) {
      r_4_St_13_On = true;
    } else {
      r_4_St_13_On = self->pnr_4;
    };
    r_4 = r_4_St_13_On;
    if (v_237) {
      s_4_St_13_On_1 = true;
    } else {
      s_4_St_13_On_1 = false;
    };
    s_4_1 = s_4_St_13_On_1;
  };
  ck_20_1 = s_4_1;
  if (ck_20_1) {
    computer_on_St_13_Off = false;
    nr_4_St_13_Off = false;
    ns_4_St_13_Off_1 = true;
    computer_on = computer_on_St_13_Off;
    nr_4 = nr_4_St_13_Off;
    ns_4_1 = ns_4_St_13_Off_1;
  } else {
    computer_on_St_13_On = true;
    computer_on = computer_on_St_13_On;
    nr_4_St_13_On = false;
    nr_4 = nr_4_St_13_On;
    ns_4_St_13_On_1 = false;
    ns_4_1 = ns_4_St_13_On_1;
  };
  _out->pc_on = computer_on;
  v_91 = !(_out->pc_on);
  v_122 = !(_out->pc_on);
  v_124 = (v_122&&v_123);
  v_127 = (v_124&&v_126);
  v_130 = (v_127&&v_129);
  v_133 = (v_130&&v_132);
  v_139 = !(_out->pc_on);
  v_141 = (v_139&&v_140);
  v_144 = (v_141&&v_143);
  v_147 = (v_144&&v_146);
  v_150 = (v_147&&v_149);
  v_153 = (v_150&&v_152);
  if (self->ck_17_1) {
    if (arrived_1) {
      r_5_St_14_Not_Present = true;
      s_5_St_14_Not_Present_1 = false;
    } else {
      r_5_St_14_Not_Present = self->pnr_5;
      s_5_St_14_Not_Present_1 = true;
    };
    r_5 = r_5_St_14_Not_Present;
    s_5_1 = s_5_St_14_Not_Present_1;
  } else {
    if (arrived_1) {
      r_5_St_14_Present = true;
    } else {
      r_5_St_14_Present = self->pnr_5;
    };
    r_5 = r_5_St_14_Present;
    if (arrived_1) {
      s_5_St_14_Present_1 = true;
    } else {
      s_5_St_14_Present_1 = false;
    };
    s_5_1 = s_5_St_14_Present_1;
  };
  ck_18_1 = s_5_1;
  if (ck_18_1) {
    presence_1_St_14_Not_Present = false;
    nr_5_St_14_Not_Present = false;
    ns_5_St_14_Not_Present_1 = true;
    presence_1 = presence_1_St_14_Not_Present;
    nr_5 = nr_5_St_14_Not_Present;
    ns_5_1 = ns_5_St_14_Not_Present_1;
  } else {
    presence_1_St_14_Present = true;
    presence_1 = presence_1_St_14_Present;
    nr_5_St_14_Present = false;
    nr_5 = nr_5_St_14_Present;
    ns_5_St_14_Present_1 = false;
    ns_5_1 = ns_5_St_14_Present_1;
  };
  _out->cleaner_presence = presence_1;
  v_89 = (_out->cleaner_presence&&v_88);
  v_90 = !(v_89);
  v_117 = !(_out->cleaner_presence);
  v_135 = !(_out->cleaner_presence);
  if (self->ck_15_1) {
    if (arrived) {
      r_6_St_15_Not_Present = true;
      s_6_St_15_Not_Present_1 = false;
    } else {
      r_6_St_15_Not_Present = self->pnr_6;
      s_6_St_15_Not_Present_1 = true;
    };
    r_6 = r_6_St_15_Not_Present;
    s_6_1 = s_6_St_15_Not_Present_1;
  } else {
    if (arrived) {
      r_6_St_15_Present = true;
    } else {
      r_6_St_15_Present = self->pnr_6;
    };
    r_6 = r_6_St_15_Present;
    if (arrived) {
      s_6_St_15_Present_1 = true;
    } else {
      s_6_St_15_Present_1 = false;
    };
    s_6_1 = s_6_St_15_Present_1;
  };
  ck_16_1 = s_6_1;
  if (ck_16_1) {
    presence_St_15_Not_Present = false;
    nr_6_St_15_Not_Present = false;
    ns_6_St_15_Not_Present_1 = true;
    presence = presence_St_15_Not_Present;
    nr_6 = nr_6_St_15_Not_Present;
    ns_6_1 = ns_6_St_15_Not_Present_1;
  } else {
    presence_St_15_Present = true;
    presence = presence_St_15_Present;
    nr_6_St_15_Present = false;
    nr_6 = nr_6_St_15_Present;
    ns_6_St_15_Present_1 = false;
    ns_6_1 = ns_6_St_15_Present_1;
  };
  _out->worker_presence = presence;
  v = (_out->worker_presence||_out->cleaner_presence);
  v_62 = (_out->worker_presence||_out->cleaner_presence);
  v_70 = (_out->worker_presence||_out->cleaner_presence);
  v_81 = (_out->worker_presence||_out->cleaner_presence);
  v_116 = !(_out->worker_presence);
  v_118 = (v_116&&v_117);
  v_134 = !(_out->worker_presence);
  v_136 = (v_134&&v_135);
  v_154 = (_out->worker_presence||_out->cleaner_presence);
  v_164 = (_out->worker_presence||_out->cleaner_presence);
  v_176 = (_out->worker_presence||_out->cleaner_presence);
  v_188 = (_out->worker_presence||_out->cleaner_presence);
  v_198 = (_out->worker_presence||_out->cleaner_presence);
  v_210 = (_out->worker_presence||_out->cleaner_presence);
  if (self->ck_13_1) {
    v_236 = !(c_1);
    if (v_236) {
      r_7_St_16_Locked = true;
      s_7_St_16_Locked_1 = false;
    } else {
      r_7_St_16_Locked = self->pnr_7;
      s_7_St_16_Locked_1 = true;
    };
    r_7 = r_7_St_16_Locked;
    s_7_1 = s_7_St_16_Locked_1;
  } else {
    if (c_1) {
      r_7_St_16_Open = true;
    } else {
      r_7_St_16_Open = self->pnr_7;
    };
    r_7 = r_7_St_16_Open;
    if (c_1) {
      s_7_St_16_Open_1 = true;
    } else {
      s_7_St_16_Open_1 = false;
    };
    s_7_1 = s_7_St_16_Open_1;
  };
  ck_14_1 = s_7_1;
  if (ck_14_1) {
    closet_open_1_St_16_Locked = false;
    nr_7_St_16_Locked = false;
    ns_7_St_16_Locked_1 = true;
    closet_open_1 = closet_open_1_St_16_Locked;
    nr_7 = nr_7_St_16_Locked;
    ns_7_1 = ns_7_St_16_Locked_1;
  } else {
    closet_open_1_St_16_Open = true;
    closet_open_1 = closet_open_1_St_16_Open;
    nr_7_St_16_Open = false;
    nr_7 = nr_7_St_16_Open;
    ns_7_St_16_Open_1 = false;
    ns_7_1 = ns_7_St_16_Open_1;
  };
  _out->closet_open = closet_open_1;
  v_92 = (v_91&&_out->closet_open);
  v_94 = (v_92&&v_93);
  rule11 = (v_90||v_94);
  if (self->ck_11_1) {
    v_235 = !(c);
    if (v_235) {
      r_8_St_17_Closed = true;
      s_8_St_17_Closed_1 = false;
    } else {
      r_8_St_17_Closed = self->pnr_8;
      s_8_St_17_Closed_1 = true;
    };
    r_8 = r_8_St_17_Closed;
    s_8_1 = s_8_St_17_Closed_1;
  } else {
    v_234 = !(c);
    if (v_234) {
      r_8_St_17_Open = true;
    } else {
      r_8_St_17_Open = self->pnr_8;
    };
    r_8 = r_8_St_17_Open;
    if (v_234) {
      s_8_St_17_Open_1 = true;
    } else {
      s_8_St_17_Open_1 = false;
    };
    s_8_1 = s_8_St_17_Open_1;
  };
  ck_12_1 = s_8_1;
  if (ck_12_1) {
    door_open_1_St_17_Closed = false;
    nr_8_St_17_Closed = false;
    ns_8_St_17_Closed_1 = true;
    door_open_1 = door_open_1_St_17_Closed;
    nr_8 = nr_8_St_17_Closed;
    ns_8_1 = ns_8_St_17_Closed_1;
  } else {
    door_open_1_St_17_Open = true;
    door_open_1 = door_open_1_St_17_Open;
    nr_8_St_17_Open = false;
    nr_8 = nr_8_St_17_Open;
    ns_8_St_17_Open_1 = false;
    ns_8_1 = ns_8_St_17_Open_1;
  };
  _out->door_open = door_open_1;
  v_80 = (v_79&&_out->door_open);
  v_163 = (_out->window_open&&_out->door_open);
  v_175 = (v_174&&_out->door_open);
  v_197 = (_out->window_open&&_out->door_open);
  v_209 = (v_208&&_out->door_open);
  if (self->ck_1) {
    if (change) {
      r_9_St_18_Dia = true;
      s_9_St_18_Dia_1 = false;
    } else {
      r_9_St_18_Dia = self->pnr_9;
      s_9_St_18_Dia_1 = true;
    };
    r_9 = r_9_St_18_Dia;
    s_9_1 = s_9_St_18_Dia_1;
  } else {
    if (change) {
      r_9_St_18_Noite = true;
    } else {
      r_9_St_18_Noite = self->pnr_9;
    };
    r_9 = r_9_St_18_Noite;
    if (change) {
      s_9_St_18_Noite_1 = true;
    } else {
      s_9_St_18_Noite_1 = false;
    };
    s_9_1 = s_9_St_18_Noite_1;
  };
  ck_10_1 = s_9_1;
  if (ck_10_1) {
    night_1_St_18_Dia = false;
    nr_9_St_18_Dia = false;
    ns_9_St_18_Dia_1 = true;
    night_1 = night_1_St_18_Dia;
    nr_9 = nr_9_St_18_Dia;
    ns_9_1 = ns_9_St_18_Dia_1;
  } else {
    night_1_St_18_Noite = true;
    night_1 = night_1_St_18_Noite;
    nr_9_St_18_Noite = false;
    nr_9 = nr_9_St_18_Noite;
    ns_9_St_18_Noite_1 = false;
    ns_9_1 = ns_9_St_18_Noite_1;
  };
  _out->night = night_1;
  v_54 = !(_out->night);
  v_55 = (v&&v_54);
  v_57 = (v_55&&v_56);
  v_58 = !(v_57);
  rule15 = (v_58||v_61);
  v_63 = !(_out->night);
  v_64 = (v_62&&v_63);
  v_66 = (v_64&&v_65);
  v_68 = (v_66&&v_67);
  v_69 = !(v_68);
  rule14 = (v_69||_out->door_open);
  v_71 = !(_out->night);
  v_72 = (v_70&&v_71);
  v_74 = (v_72&&v_73);
  v_76 = (v_74&&v_75);
  v_77 = !(v_76);
  rule13 = (v_77||v_80);
  v_82 = !(_out->night);
  v_83 = (v_81&&v_82);
  v_85 = (v_83&&v_84);
  v_86 = !(v_85);
  rule12 = (v_86||v_87);
  v_95 = !(_out->night);
  v_96 = (v_95&&_out->pc_on);
  v_99 = (v_96&&v_98);
  v_101 = (v_99&&v_100);
  v_103 = (v_101&&v_102);
  v_104 = !(v_103);
  rule10 = (v_104||v_105);
  v_106 = !(_out->night);
  v_107 = (v_106&&_out->pc_on);
  v_109 = (v_107&&v_108);
  v_111 = (v_109&&v_110);
  v_113 = (v_111&&v_112);
  v_114 = !(v_113);
  rule9 = (v_114||v_115);
  v_119 = !(_out->night);
  v_120 = (v_118&&v_119);
  v_121 = !(v_120);
  rule8 = (v_121||v_133);
  v_137 = (v_136&&_out->night);
  v_138 = !(v_137);
  rule7 = (v_138||v_153);
  v_155 = (v_154&&_out->night);
  v_157 = (v_155&&v_156);
  v_159 = (v_157&&v_158);
  v_161 = (v_159&&v_160);
  v_162 = !(v_161);
  rule6 = (v_162||v_163);
  v_165 = (v_164&&_out->night);
  v_167 = (v_165&&v_166);
  v_169 = (v_167&&v_168);
  v_171 = (v_169&&v_170);
  v_172 = !(v_171);
  rule5 = (v_172||v_175);
  v_177 = (v_176&&_out->night);
  v_179 = (v_177&&v_178);
  v_181 = (v_179&&v_180);
  v_183 = (v_181&&v_182);
  v_184 = !(v_183);
  rule4 = (v_184||v_187);
  v_189 = (v_188&&_out->night);
  v_191 = (v_189&&v_190);
  v_193 = (v_191&&v_192);
  v_195 = (v_193&&v_194);
  v_196 = !(v_195);
  rule3 = (v_196||v_197);
  v_199 = (v_198&&_out->night);
  v_201 = (v_199&&v_200);
  v_203 = (v_201&&v_202);
  v_205 = (v_203&&v_204);
  v_206 = !(v_205);
  rule2 = (v_206||v_209);
  v_211 = (v_210&&_out->night);
  v_213 = (v_211&&v_212);
  v_215 = (v_213&&v_214);
  v_216 = !(v_215);
  rule1 = (v_216||v_219);
  v_220 = (rule1&&rule2);
  v_221 = (v_220&&rule3);
  v_222 = (v_221&&rule4);
  v_223 = (v_222&&rule5);
  v_224 = (v_223&&rule6);
  v_225 = (v_224&&rule7);
  v_226 = (v_225&&rule8);
  v_227 = (v_226&&rule9);
  v_228 = (v_227&&rule10);
  v_229 = (v_228&&rule11);
  v_230 = (v_229&&rule12);
  v_231 = (v_230&&rule13);
  v_232 = (v_231&&rule14);
  v_233 = (v_232&&rule15);
  self->pnr = nr;
  self->v_394 = ns_1_3;
  self->v_395 = ns_2_4;
  self->pnr_1 = nr_1;
  self->v_410 = ns_1_1;
  self->v_411 = ns_1_2;
  self->pnr_2 = nr_2;
  self->v_448 = ns_2_1;
  self->v_449 = ns_2_2;
  self->v_450 = ns_2_3;
  self->pnr_3 = nr_3;
  self->ck_21_1 = ns_3_1;
  self->pnr_4 = nr_4;
  self->ck_19_1 = ns_4_1;
  self->pnr_5 = nr_5;
  self->ck_17_1 = ns_5_1;
  self->pnr_6 = nr_6;
  self->ck_15_1 = ns_6_1;
  self->pnr_7 = nr_7;
  self->ck_13_1 = ns_7_1;
  self->pnr_8 = nr_8;
  self->ck_11_1 = ns_8_1;
  self->pnr_9 = nr_9;
  self->ck_1 = ns_9_1;;
}

