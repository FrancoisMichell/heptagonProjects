/* --- Generated the 21/7/2018 at 18:39 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jun. 15 15:41:53 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "system.h"

void System__light_source_reset(System__light_source_mem* self) {
  self->pnr = false;
  self->ck_1_2 = true;
}

void System__light_source_step(int c1, int c2, int sw,
                               System__light_source_out* _out,
                               System__light_source_mem* self) {
  
  int nr_St_On;
  int ns_St_On_1;
  int light_source_on_St_On;
  int nr_St_Off;
  int ns_St_Off_1;
  int light_source_on_St_Off;
  int ck_1_1;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int r_St_On;
  int s_St_On_1;
  int r_St_Off;
  int s_St_Off_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1_2) {
    v_4 = !(c2);
    v_3 = (c1&&sw);
    v_5 = (v_3||v_4);
    if (v_5) {
      r_St_Off = true;
      s_St_Off_1 = false;
    } else {
      r_St_Off = self->pnr;
      s_St_Off_1 = true;
    };
    r = r_St_Off;
    s_1 = s_St_Off_1;
  } else {
    v_1 = !(c2);
    v = (c1&&sw);
    v_2 = (v||v_1);
    if (v_2) {
      r_St_On = true;
    } else {
      r_St_On = self->pnr;
    };
    r = r_St_On;
    if (v_2) {
      s_St_On_1 = true;
    } else {
      s_St_On_1 = false;
    };
    s_1 = s_St_On_1;
  };
  ck_1_1 = s_1;
  if (ck_1_1) {
    light_source_on_St_Off = 0;
    nr_St_Off = false;
    ns_St_Off_1 = true;
    _out->light_source_on = light_source_on_St_Off;
    nr = nr_St_Off;
    ns_1 = ns_St_Off_1;
  } else {
    light_source_on_St_On = 1;
    _out->light_source_on = light_source_on_St_On;
    nr_St_On = false;
    nr = nr_St_On;
    ns_St_On_1 = false;
    ns_1 = ns_St_On_1;
  };
  self->pnr = nr;
  self->ck_1_2 = ns_1;;
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
  int v_6;
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
    v_6 = !(c);
    if (v_6) {
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
  self->v_239 = false;
  self->v_240 = false;
}

void System__air_conditioner_step(int c1, int c2,
                                  System__air_conditioner_out* _out,
                                  System__air_conditioner_mem* self) {
  
  int v_238;
  int v_237;
  int v_236;
  int v_235;
  int v_234;
  int v_233;
  int v_232;
  int v_231;
  int ns_St_6_Max_2_0;
  int ns_St_6_Max_2_1;
  int ns_St_6_Min_2_0;
  int ns_St_6_Min_2_1;
  int ns_St_6_Off_2_0;
  int ns_St_6_Off_2_1;
  int ck_7_2_0;
  int ck_7_2_1;
  int nr_St_6_Max;
  int ns_St_6_Max_2;
  int ns_St_6_Max_1;
  int air_state_St_6_Max;
  int nr_St_6_Min;
  int ns_St_6_Min_2;
  int ns_St_6_Min_1;
  int air_state_St_6_Min;
  int nr_St_6_Off;
  int ns_St_6_Off_2;
  int ns_St_6_Off_1;
  int air_state_St_6_Off;
  int ck_7_2;
  int ck_7_1;
  int v_15_2_0;
  int v_15_2_1;
  int v_16;
  int v_15_2;
  int v_15_1;
  int v_14;
  int v_12_2_0;
  int v_12_2_1;
  int v_13;
  int v_12_2;
  int v_12_1;
  int v_11;
  int v_10;
  int v_8_2_0;
  int v_8_2_1;
  int v_9;
  int v_8_2;
  int v_8_1;
  int v_7;
  int v;
  int v_246;
  int v_245;
  int v_244;
  int v_243;
  int v_242;
  int v_241;
  int s_St_6_Max_2_0;
  int s_St_6_Max_2_1;
  int s_St_6_Min_2_0;
  int s_St_6_Min_2_1;
  int s_St_6_Off_2_0;
  int s_St_6_Off_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_6_Max;
  int s_St_6_Max_2;
  int s_St_6_Max_1;
  int r_St_6_Min;
  int s_St_6_Min_2;
  int s_St_6_Min_1;
  int r_St_6_Off;
  int s_St_6_Off_2;
  int s_St_6_Off_1;
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
  ck_1 = self->v_239;
  ck_2 = self->v_240;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_7 = !(c2);
      if (v_7) {
        v_9 = true;
        v_8_1 = false;
        v_8_2 = false;
      } else {
        v_9 = self->pnr;
        v_8_1 = true;
        v_8_2 = true;
      };
      v = !(c1);
      if (v) {
        r_St_6_Max = true;
      } else {
        r_St_6_Max = v_9;
      };
      v_245 = r_St_6_Max;
      if (v) {
        s_St_6_Max_1 = true;
      } else {
        s_St_6_Max_1 = v_8_1;
      };
      v_241 = s_St_6_Max_1;
      if (v) {
        s_St_6_Max_2 = false;
      } else {
        s_St_6_Max_2 = v_8_2;
      };
      v_242 = s_St_6_Max_2;
    } else {
      v_11 = !(c2);
      if (v_11) {
        v_13 = true;
        v_12_1 = true;
        v_12_2 = true;
      } else {
        v_13 = self->pnr;
        v_12_1 = true;
        v_12_2 = false;
      };
      v_10 = !(c1);
      if (v_10) {
        r_St_6_Min = true;
        s_St_6_Min_1 = false;
        s_St_6_Min_2 = false;
      } else {
        r_St_6_Min = v_13;
        s_St_6_Min_1 = v_12_1;
        s_St_6_Min_2 = v_12_2;
      };
      v_245 = r_St_6_Min;
      v_241 = s_St_6_Min_1;
      v_242 = s_St_6_Min_2;
    };
    s_1 = v_241;
    s_2 = v_242;
    r = v_245;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_246 = true;
      v_243 = true;
      v_244 = true;
    } else {
      v_14 = !(c2);
      if (v_14) {
        v_16 = true;
      } else {
        v_16 = self->pnr;
      };
      if (c1) {
        r_St_6_Off = true;
      } else {
        r_St_6_Off = v_16;
      };
      v_246 = r_St_6_Off;
      if (v_14) {
        v_15_1 = true;
      } else {
        v_15_1 = false;
      };
      if (c1) {
        s_St_6_Off_1 = true;
      } else {
        s_St_6_Off_1 = v_15_1;
      };
      v_243 = s_St_6_Off_1;
      if (v_14) {
        v_15_2 = true;
      } else {
        v_15_2 = false;
      };
      if (c1) {
        s_St_6_Off_2 = false;
      } else {
        s_St_6_Off_2 = v_15_2;
      };
      v_244 = s_St_6_Off_2;
      if (v_15_1) {
        v_15_2_1 = v_15_2;
      } else {
        v_15_2_0 = v_15_2;
      };
      if (s_St_6_Off_1) {
        s_St_6_Off_2_1 = s_St_6_Off_2;
      } else {
        s_St_6_Off_2_0 = s_St_6_Off_2;
      };
    };
    s_1 = v_243;
    s_2 = v_244;
    r = v_246;
  };
  ck_7_1 = s_1;
  ck_7_2 = s_2;
  if (ck_7_1) {
    ck_7_2_1 = ck_7_2;
    if (ck_7_2_1) {
      air_state_St_6_Max = 2;
      v_231 = air_state_St_6_Max;
      nr_St_6_Max = false;
      v_237 = nr_St_6_Max;
      ns_St_6_Max_1 = true;
      v_233 = ns_St_6_Max_1;
      ns_St_6_Max_2 = true;
      v_234 = ns_St_6_Max_2;
    } else {
      air_state_St_6_Min = 1;
      nr_St_6_Min = false;
      ns_St_6_Min_1 = true;
      ns_St_6_Min_2 = false;
      v_231 = air_state_St_6_Min;
      v_237 = nr_St_6_Min;
      v_233 = ns_St_6_Min_1;
      v_234 = ns_St_6_Min_2;
    };
    _out->air_state = v_231;
    ns_1 = v_233;
    ns_2 = v_234;
    nr = v_237;
  } else {
    ck_7_2_0 = ck_7_2;
    if (ck_7_2_0) {
      v_232 = 0;
      v_238 = true;
      v_235 = true;
      v_236 = true;
    } else {
      air_state_St_6_Off = 0;
      v_232 = air_state_St_6_Off;
      nr_St_6_Off = false;
      v_238 = nr_St_6_Off;
      ns_St_6_Off_1 = false;
      v_235 = ns_St_6_Off_1;
      ns_St_6_Off_2 = false;
      v_236 = ns_St_6_Off_2;
      if (ns_St_6_Off_1) {
        ns_St_6_Off_2_1 = ns_St_6_Off_2;
      } else {
        ns_St_6_Off_2_0 = ns_St_6_Off_2;
      };
    };
    _out->air_state = v_232;
    ns_1 = v_235;
    ns_2 = v_236;
    nr = v_238;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (ck_7_1) {
    if (ck_7_2_1) {
      if (ns_St_6_Max_1) {
        ns_St_6_Max_2_1 = ns_St_6_Max_2;
      } else {
        ns_St_6_Max_2_0 = ns_St_6_Max_2;
      };
    } else {
      if (ns_St_6_Min_1) {
        ns_St_6_Min_2_1 = ns_St_6_Min_2;
      } else {
        ns_St_6_Min_2_0 = ns_St_6_Min_2;
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
  } else {
    s_2_0 = s_2;
  };
  if (ck_1) {
    if (ck_2_1) {
      if (v_8_1) {
        v_8_2_1 = v_8_2;
      } else {
        v_8_2_0 = v_8_2;
      };
      if (s_St_6_Max_1) {
        s_St_6_Max_2_1 = s_St_6_Max_2;
      } else {
        s_St_6_Max_2_0 = s_St_6_Max_2;
      };
    } else {
      if (v_12_1) {
        v_12_2_1 = v_12_2;
      } else {
        v_12_2_0 = v_12_2;
      };
      if (s_St_6_Min_1) {
        s_St_6_Min_2_1 = s_St_6_Min_2;
      } else {
        s_St_6_Min_2_0 = s_St_6_Min_2;
      };
    };
  };
  self->pnr = nr;
  self->v_239 = ns_1;
  self->v_240 = ns_2;;
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

void System__air_fail_reset(System__air_fail_mem* self) {
  self->pnr = false;
  self->ck_12_1 = false;
  self->pnr_1 = false;
  self->v_255 = false;
  self->v_256 = false;
}

void System__air_fail_step(int c1, int c2, int failed_recovered,
                           System__air_fail_out* _out,
                           System__air_fail_mem* self) {
  
  int nr_St_9_Falha;
  int ns_St_9_Falha_1;
  int failed_1_St_9_Falha;
  int nr_St_9_Funcionando;
  int ns_St_9_Funcionando_1;
  int failed_1_St_9_Funcionando;
  int ck_13_1;
  int r_St_9_Falha;
  int s_St_9_Falha_1;
  int r_St_9_Funcionando;
  int s_St_9_Funcionando_1;
  int v_254;
  int v_253;
  int v_252;
  int v_251;
  int v_250;
  int v_249;
  int v_248;
  int v_247;
  int ns_1_St_10_Max_2_0;
  int ns_1_St_10_Max_2_1;
  int ns_1_St_10_Min_2_0;
  int ns_1_St_10_Min_2_1;
  int ns_1_St_10_Off_2_0;
  int ns_1_St_10_Off_2_1;
  int ck_11_2_0;
  int ck_11_2_1;
  int nr_1_St_10_Max;
  int ns_1_St_10_Max_2;
  int ns_1_St_10_Max_1;
  int air_state_1_St_10_Max;
  int nr_1_St_10_Min;
  int ns_1_St_10_Min_2;
  int ns_1_St_10_Min_1;
  int air_state_1_St_10_Min;
  int nr_1_St_10_Off;
  int ns_1_St_10_Off_2;
  int ns_1_St_10_Off_1;
  int air_state_1_St_10_Off;
  int ck_11_2;
  int ck_11_1;
  int v_25_2_0;
  int v_25_2_1;
  int v_26;
  int v_25_2;
  int v_25_1;
  int v_24;
  int v_22_2_0;
  int v_22_2_1;
  int v_23;
  int v_22_2;
  int v_22_1;
  int v_21;
  int v_20;
  int v_18_2_0;
  int v_18_2_1;
  int v_19;
  int v_18_2;
  int v_18_1;
  int v_17;
  int v;
  int v_262;
  int v_261;
  int v_260;
  int v_259;
  int v_258;
  int v_257;
  int s_1_St_10_Max_2_0;
  int s_1_St_10_Max_2_1;
  int s_1_St_10_Min_2_0;
  int s_1_St_10_Min_2_1;
  int s_1_St_10_Off_2_0;
  int s_1_St_10_Off_2_1;
  int ck_10_2_0;
  int ck_10_2_1;
  int r_1_St_10_Max;
  int s_1_St_10_Max_2;
  int s_1_St_10_Max_1;
  int r_1_St_10_Min;
  int s_1_St_10_Min_2;
  int s_1_St_10_Min_1;
  int r_1_St_10_Off;
  int s_1_St_10_Off_2;
  int s_1_St_10_Off_1;
  int ck_10_2;
  int ck_10_1;
  int out_false;
  int out_true;
  int ck;
  int s_1_2_0;
  int s_1_2_1;
  int ns_1_2_0;
  int ns_1_2_1;
  int s_1_2;
  int s_1_1;
  int ns_1_2;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_1_3;
  int ns_1_3;
  int r;
  int nr;
  int failed_recovered_1;
  int failed_1;
  int c1_1;
  int c2_1;
  int air_state_1;
  int air_state;
  int failed;
  failed_recovered_1 = failed_recovered;
  c1_1 = c1;
  c2_1 = c2;
  ck_10_1 = self->v_255;
  ck_10_2 = self->v_256;
  if (self->ck_12_1) {
    if (failed_recovered_1) {
      r_St_9_Falha = true;
    } else {
      r_St_9_Falha = self->pnr;
    };
    r = r_St_9_Falha;
    if (failed_recovered_1) {
      s_St_9_Falha_1 = false;
    } else {
      s_St_9_Falha_1 = true;
    };
    s_1_3 = s_St_9_Falha_1;
  } else {
    if (failed_recovered_1) {
      r_St_9_Funcionando = true;
      s_St_9_Funcionando_1 = true;
    } else {
      r_St_9_Funcionando = self->pnr;
      s_St_9_Funcionando_1 = false;
    };
    r = r_St_9_Funcionando;
    s_1_3 = s_St_9_Funcionando_1;
  };
  ck_13_1 = s_1_3;
  if (ck_13_1) {
    failed_1_St_9_Falha = true;
    failed_1 = failed_1_St_9_Falha;
    nr_St_9_Falha = false;
    nr = nr_St_9_Falha;
    ns_St_9_Falha_1 = true;
    ns_1_3 = ns_St_9_Falha_1;
  } else {
    failed_1_St_9_Funcionando = false;
    nr_St_9_Funcionando = false;
    ns_St_9_Funcionando_1 = false;
    failed_1 = failed_1_St_9_Funcionando;
    nr = nr_St_9_Funcionando;
    ns_1_3 = ns_St_9_Funcionando_1;
  };
  failed = failed_1;
  ck = failed;
  if (ck_10_1) {
    ck_10_2_1 = ck_10_2;
    if (ck_10_2_1) {
      v_17 = !(c2_1);
      if (v_17) {
        v_19 = true;
        v_18_1 = false;
        v_18_2 = false;
      } else {
        v_19 = self->pnr_1;
        v_18_1 = true;
        v_18_2 = true;
      };
      v = !(c1_1);
      if (v) {
        r_1_St_10_Max = true;
      } else {
        r_1_St_10_Max = v_19;
      };
      v_261 = r_1_St_10_Max;
      if (v) {
        s_1_St_10_Max_1 = true;
      } else {
        s_1_St_10_Max_1 = v_18_1;
      };
      v_257 = s_1_St_10_Max_1;
      if (v) {
        s_1_St_10_Max_2 = false;
      } else {
        s_1_St_10_Max_2 = v_18_2;
      };
      v_258 = s_1_St_10_Max_2;
    } else {
      v_21 = !(c2_1);
      if (v_21) {
        v_23 = true;
        v_22_1 = true;
        v_22_2 = true;
      } else {
        v_23 = self->pnr_1;
        v_22_1 = true;
        v_22_2 = false;
      };
      v_20 = !(c1_1);
      if (v_20) {
        r_1_St_10_Min = true;
        s_1_St_10_Min_1 = false;
        s_1_St_10_Min_2 = false;
      } else {
        r_1_St_10_Min = v_23;
        s_1_St_10_Min_1 = v_22_1;
        s_1_St_10_Min_2 = v_22_2;
      };
      v_261 = r_1_St_10_Min;
      v_257 = s_1_St_10_Min_1;
      v_258 = s_1_St_10_Min_2;
    };
    s_1_1 = v_257;
    s_1_2 = v_258;
    r_1 = v_261;
  } else {
    ck_10_2_0 = ck_10_2;
    if (ck_10_2_0) {
      v_262 = true;
      v_259 = true;
      v_260 = true;
    } else {
      v_24 = !(c2_1);
      if (v_24) {
        v_26 = true;
      } else {
        v_26 = self->pnr_1;
      };
      if (c1_1) {
        r_1_St_10_Off = true;
      } else {
        r_1_St_10_Off = v_26;
      };
      v_262 = r_1_St_10_Off;
      if (v_24) {
        v_25_1 = true;
      } else {
        v_25_1 = false;
      };
      if (c1_1) {
        s_1_St_10_Off_1 = true;
      } else {
        s_1_St_10_Off_1 = v_25_1;
      };
      v_259 = s_1_St_10_Off_1;
      if (v_24) {
        v_25_2 = true;
      } else {
        v_25_2 = false;
      };
      if (c1_1) {
        s_1_St_10_Off_2 = false;
      } else {
        s_1_St_10_Off_2 = v_25_2;
      };
      v_260 = s_1_St_10_Off_2;
      if (v_25_1) {
        v_25_2_1 = v_25_2;
      } else {
        v_25_2_0 = v_25_2;
      };
      if (s_1_St_10_Off_1) {
        s_1_St_10_Off_2_1 = s_1_St_10_Off_2;
      } else {
        s_1_St_10_Off_2_0 = s_1_St_10_Off_2;
      };
    };
    s_1_1 = v_259;
    s_1_2 = v_260;
    r_1 = v_262;
  };
  ck_11_1 = s_1_1;
  ck_11_2 = s_1_2;
  if (ck_11_1) {
    ck_11_2_1 = ck_11_2;
    if (ck_11_2_1) {
      air_state_1_St_10_Max = 2;
      v_247 = air_state_1_St_10_Max;
      nr_1_St_10_Max = false;
      v_253 = nr_1_St_10_Max;
      ns_1_St_10_Max_1 = true;
      v_249 = ns_1_St_10_Max_1;
      ns_1_St_10_Max_2 = true;
      v_250 = ns_1_St_10_Max_2;
    } else {
      air_state_1_St_10_Min = 1;
      nr_1_St_10_Min = false;
      ns_1_St_10_Min_1 = true;
      ns_1_St_10_Min_2 = false;
      v_247 = air_state_1_St_10_Min;
      v_253 = nr_1_St_10_Min;
      v_249 = ns_1_St_10_Min_1;
      v_250 = ns_1_St_10_Min_2;
    };
    air_state_1 = v_247;
    ns_1_1 = v_249;
    ns_1_2 = v_250;
    nr_1 = v_253;
  } else {
    ck_11_2_0 = ck_11_2;
    if (ck_11_2_0) {
      v_248 = 0;
      v_254 = true;
      v_251 = true;
      v_252 = true;
    } else {
      air_state_1_St_10_Off = 0;
      v_248 = air_state_1_St_10_Off;
      nr_1_St_10_Off = false;
      v_254 = nr_1_St_10_Off;
      ns_1_St_10_Off_1 = false;
      v_251 = ns_1_St_10_Off_1;
      ns_1_St_10_Off_2 = false;
      v_252 = ns_1_St_10_Off_2;
      if (ns_1_St_10_Off_1) {
        ns_1_St_10_Off_2_1 = ns_1_St_10_Off_2;
      } else {
        ns_1_St_10_Off_2_0 = ns_1_St_10_Off_2;
      };
    };
    air_state_1 = v_248;
    ns_1_1 = v_251;
    ns_1_2 = v_252;
    nr_1 = v_254;
  };
  air_state = air_state_1;
  if (ck) {
    out_true = (air_state+3);
    _out->out = out_true;
  } else {
    out_false = air_state;
    _out->out = out_false;
  };
  if (ns_1_1) {
    ns_1_2_1 = ns_1_2;
  } else {
    ns_1_2_0 = ns_1_2;
  };
  if (ck_11_1) {
    if (ck_11_2_1) {
      if (ns_1_St_10_Max_1) {
        ns_1_St_10_Max_2_1 = ns_1_St_10_Max_2;
      } else {
        ns_1_St_10_Max_2_0 = ns_1_St_10_Max_2;
      };
    } else {
      if (ns_1_St_10_Min_1) {
        ns_1_St_10_Min_2_1 = ns_1_St_10_Min_2;
      } else {
        ns_1_St_10_Min_2_0 = ns_1_St_10_Min_2;
      };
    };
  };
  if (s_1_1) {
    s_1_2_1 = s_1_2;
  } else {
    s_1_2_0 = s_1_2;
  };
  if (ck_10_1) {
    if (ck_10_2_1) {
      if (v_18_1) {
        v_18_2_1 = v_18_2;
      } else {
        v_18_2_0 = v_18_2;
      };
      if (s_1_St_10_Max_1) {
        s_1_St_10_Max_2_1 = s_1_St_10_Max_2;
      } else {
        s_1_St_10_Max_2_0 = s_1_St_10_Max_2;
      };
    } else {
      if (v_22_1) {
        v_22_2_1 = v_22_2;
      } else {
        v_22_2_0 = v_22_2;
      };
      if (s_1_St_10_Min_1) {
        s_1_St_10_Min_2_1 = s_1_St_10_Min_2;
      } else {
        s_1_St_10_Min_2_0 = s_1_St_10_Min_2;
      };
    };
  };
  self->pnr = nr;
  self->ck_12_1 = ns_1_3;
  self->pnr_1 = nr_1;
  self->v_255 = ns_1_1;
  self->v_256 = ns_1_2;;
}

void System__light_source_fail_reset(System__light_source_fail_mem* self) {
  self->pnr = false;
  self->ck_16_1 = false;
  self->pnr_2 = false;
  self->ck_14_1 = true;
}

void System__light_source_fail_step(int sw, int c1, int c2,
                                    int failed_recovered,
                                    System__light_source_fail_out* _out,
                                    System__light_source_fail_mem* self) {
  
  int nr_St_11_Falha;
  int ns_St_11_Falha_1;
  int failed_2_St_11_Falha;
  int nr_St_11_Funcionando;
  int ns_St_11_Funcionando_1;
  int failed_2_St_11_Funcionando;
  int ck_17_1;
  int r_St_11_Falha;
  int s_St_11_Falha_1;
  int r_St_11_Funcionando;
  int s_St_11_Funcionando_1;
  int nr_2_St_12_On;
  int ns_2_St_12_On_1;
  int light_source_on_St_12_On;
  int nr_2_St_12_Off;
  int ns_2_St_12_Off_1;
  int light_source_on_St_12_Off;
  int ck_15_1;
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v;
  int r_2_St_12_On;
  int s_2_St_12_On_1;
  int r_2_St_12_Off;
  int s_2_St_12_Off_1;
  int out_false;
  int out_true;
  int ck;
  int s_2_1;
  int ns_2_1;
  int r_2;
  int nr_2;
  int s_1;
  int ns_1;
  int r;
  int nr;
  int failed_recovered_2;
  int failed_2;
  int c1_2;
  int c2_2;
  int sw_1;
  int light_source_on;
  int light_source;
  int failed;
  failed_recovered_2 = failed_recovered;
  c1_2 = sw;
  c2_2 = c1;
  sw_1 = c2;
  if (self->ck_16_1) {
    if (failed_recovered_2) {
      r_St_11_Falha = true;
    } else {
      r_St_11_Falha = self->pnr;
    };
    r = r_St_11_Falha;
    if (failed_recovered_2) {
      s_St_11_Falha_1 = false;
    } else {
      s_St_11_Falha_1 = true;
    };
    s_1 = s_St_11_Falha_1;
  } else {
    if (failed_recovered_2) {
      r_St_11_Funcionando = true;
      s_St_11_Funcionando_1 = true;
    } else {
      r_St_11_Funcionando = self->pnr;
      s_St_11_Funcionando_1 = false;
    };
    r = r_St_11_Funcionando;
    s_1 = s_St_11_Funcionando_1;
  };
  ck_17_1 = s_1;
  if (ck_17_1) {
    failed_2_St_11_Falha = true;
    failed_2 = failed_2_St_11_Falha;
    nr_St_11_Falha = false;
    nr = nr_St_11_Falha;
    ns_St_11_Falha_1 = true;
    ns_1 = ns_St_11_Falha_1;
  } else {
    failed_2_St_11_Funcionando = false;
    nr_St_11_Funcionando = false;
    ns_St_11_Funcionando_1 = false;
    failed_2 = failed_2_St_11_Funcionando;
    nr = nr_St_11_Funcionando;
    ns_1 = ns_St_11_Funcionando_1;
  };
  failed = failed_2;
  ck = failed;
  if (self->ck_14_1) {
    v_30 = !(c2_2);
    v_29 = (c1_2&&sw_1);
    v_31 = (v_29||v_30);
    if (v_31) {
      r_2_St_12_Off = true;
      s_2_St_12_Off_1 = false;
    } else {
      r_2_St_12_Off = self->pnr_2;
      s_2_St_12_Off_1 = true;
    };
    r_2 = r_2_St_12_Off;
    s_2_1 = s_2_St_12_Off_1;
  } else {
    v_27 = !(c2_2);
    v = (c1_2&&sw_1);
    v_28 = (v||v_27);
    if (v_28) {
      r_2_St_12_On = true;
    } else {
      r_2_St_12_On = self->pnr_2;
    };
    r_2 = r_2_St_12_On;
    if (v_28) {
      s_2_St_12_On_1 = true;
    } else {
      s_2_St_12_On_1 = false;
    };
    s_2_1 = s_2_St_12_On_1;
  };
  ck_15_1 = s_2_1;
  if (ck_15_1) {
    light_source_on_St_12_Off = 0;
    nr_2_St_12_Off = false;
    ns_2_St_12_Off_1 = true;
    light_source_on = light_source_on_St_12_Off;
    nr_2 = nr_2_St_12_Off;
    ns_2_1 = ns_2_St_12_Off_1;
  } else {
    light_source_on_St_12_On = 1;
    light_source_on = light_source_on_St_12_On;
    nr_2_St_12_On = false;
    nr_2 = nr_2_St_12_On;
    ns_2_St_12_On_1 = false;
    ns_2_1 = ns_2_St_12_On_1;
  };
  light_source = light_source_on;
  if (ck) {
    out_true = (light_source+2);
    _out->out = out_true;
  } else {
    out_false = light_source;
    _out->out = out_false;
  };
  self->pnr = nr;
  self->ck_16_1 = ns_1;
  self->pnr_2 = nr_2;
  self->ck_14_1 = ns_2_1;;
}

void System__controller_reset(System__controller_mem* self) {
  self->pnr = false;
  self->ck_44_1 = false;
  self->pnr_3 = false;
  self->ck_42_1 = true;
  self->pnr_4 = false;
  self->ck_39_1 = false;
  self->pnr_5 = false;
  self->ck_37_1 = true;
  self->pnr_6 = false;
  self->ck_34_1 = false;
  self->pnr_7 = false;
  self->v_271 = false;
  self->v_272 = false;
  self->pnr_8 = false;
  self->ck_29_1 = true;
  self->pnr_9 = false;
  self->ck_27_1 = true;
  self->pnr_10 = false;
  self->ck_25_1 = true;
  self->pnr_11 = false;
  self->ck_23_1 = true;
  self->pnr_12 = false;
  self->ck_21_1 = true;
  self->pnr_13 = false;
  self->ck_19_1 = true;
  self->pnr_14 = false;
  self->ck_1 = true;
}

void System__controller_step(int change_shift, int worker, int cleaner,
                             int air_failed_recovered, int light_switch,
                             int light_failed_recovered, int blind_switch,
                             int blind_failed_recovered,
                             System__controller_out* _out,
                             System__controller_mem* self) {
  Controller_controller__controller_controller_out Controller_controller__controller_controller_out_st;
  
  int nr_St_13_Falha;
  int ns_St_13_Falha_1;
  int failed_2_1_St_13_Falha;
  int nr_St_13_Funcionando;
  int ns_St_13_Funcionando_1;
  int failed_2_1_St_13_Funcionando;
  int ck_45_1;
  int r_St_13_Falha;
  int s_St_13_Falha_1;
  int r_St_13_Funcionando;
  int s_St_13_Funcionando_1;
  int nr_3_St_14_On;
  int ns_3_St_14_On_1;
  int light_source_on_1_St_14_On;
  int nr_3_St_14_Off;
  int ns_3_St_14_Off_1;
  int light_source_on_1_St_14_Off;
  int ck_43_1;
  int v_230;
  int v_229;
  int v_228;
  int v_227;
  int v_226;
  int v_225;
  int r_3_St_14_On;
  int s_3_St_14_On_1;
  int r_3_St_14_Off;
  int s_3_St_14_Off_1;
  int out_2_false;
  int out_2_true;
  int ck_41;
  int nr_4_St_15_Falha;
  int ns_4_St_15_Falha_1;
  int failed_2_St_15_Falha;
  int nr_4_St_15_Funcionando;
  int ns_4_St_15_Funcionando_1;
  int failed_2_St_15_Funcionando;
  int ck_40_1;
  int r_4_St_15_Falha;
  int s_4_St_15_Falha_1;
  int r_4_St_15_Funcionando;
  int s_4_St_15_Funcionando_1;
  int nr_5_St_16_On;
  int ns_5_St_16_On_1;
  int light_source_on_St_16_On;
  int nr_5_St_16_Off;
  int ns_5_St_16_Off_1;
  int light_source_on_St_16_Off;
  int ck_38_1;
  int v_224;
  int v_223;
  int v_222;
  int v_221;
  int v_220;
  int v_219;
  int r_5_St_16_On;
  int s_5_St_16_On_1;
  int r_5_St_16_Off;
  int s_5_St_16_Off_1;
  int out_1_false;
  int out_1_true;
  int ck_36;
  int nr_6_St_17_Falha;
  int ns_6_St_17_Falha_1;
  int failed_1_St_17_Falha;
  int nr_6_St_17_Funcionando;
  int ns_6_St_17_Funcionando_1;
  int failed_1_St_17_Funcionando;
  int ck_35_1;
  int r_6_St_17_Falha;
  int s_6_St_17_Falha_1;
  int r_6_St_17_Funcionando;
  int s_6_St_17_Funcionando_1;
  int v_270;
  int v_269;
  int v_268;
  int v_267;
  int v_266;
  int v_265;
  int v_264;
  int v_263;
  int ns_7_St_18_Max_2_0;
  int ns_7_St_18_Max_2_1;
  int ns_7_St_18_Min_2_0;
  int ns_7_St_18_Min_2_1;
  int ns_7_St_18_Off_2_0;
  int ns_7_St_18_Off_2_1;
  int ck_33_2_0;
  int ck_33_2_1;
  int nr_7_St_18_Max;
  int ns_7_St_18_Max_2;
  int ns_7_St_18_Max_1;
  int air_state_1_St_18_Max;
  int nr_7_St_18_Min;
  int ns_7_St_18_Min_2;
  int ns_7_St_18_Min_1;
  int air_state_1_St_18_Min;
  int nr_7_St_18_Off;
  int ns_7_St_18_Off_2;
  int ns_7_St_18_Off_1;
  int air_state_1_St_18_Off;
  int ck_33_2;
  int ck_33_1;
  int v_217_2_0;
  int v_217_2_1;
  int v_218;
  int v_217_2;
  int v_217_1;
  int v_216;
  int v_214_2_0;
  int v_214_2_1;
  int v_215;
  int v_214_2;
  int v_214_1;
  int v_213;
  int v_212;
  int v_210_2_0;
  int v_210_2_1;
  int v_211;
  int v_210_2;
  int v_210_1;
  int v_209;
  int v_208;
  int v_278;
  int v_277;
  int v_276;
  int v_275;
  int v_274;
  int v_273;
  int s_7_St_18_Max_2_0;
  int s_7_St_18_Max_2_1;
  int s_7_St_18_Min_2_0;
  int s_7_St_18_Min_2_1;
  int s_7_St_18_Off_2_0;
  int s_7_St_18_Off_2_1;
  int ck_32_2_0;
  int ck_32_2_1;
  int r_7_St_18_Max;
  int s_7_St_18_Max_2;
  int s_7_St_18_Max_1;
  int r_7_St_18_Min;
  int s_7_St_18_Min_2;
  int s_7_St_18_Min_1;
  int r_7_St_18_Off;
  int s_7_St_18_Off_2;
  int s_7_St_18_Off_1;
  int ck_32_2;
  int ck_32_1;
  int out_false;
  int out_true;
  int ck_31;
  int nr_8_St_19_Open;
  int ns_8_St_19_Open_1;
  int window_open_1_St_19_Open;
  int nr_8_St_19_Closed;
  int ns_8_St_19_Closed_1;
  int window_open_1_St_19_Closed;
  int ck_30_1;
  int v_207;
  int r_8_St_19_Open;
  int s_8_St_19_Open_1;
  int r_8_St_19_Closed;
  int s_8_St_19_Closed_1;
  int nr_9_St_20_On;
  int ns_9_St_20_On_1;
  int computer_on_St_20_On;
  int nr_9_St_20_Off;
  int ns_9_St_20_Off_1;
  int computer_on_St_20_Off;
  int ck_28_1;
  int v_206;
  int r_9_St_20_On;
  int s_9_St_20_On_1;
  int r_9_St_20_Off;
  int s_9_St_20_Off_1;
  int nr_10_St_21_Present;
  int ns_10_St_21_Present_1;
  int presence_1_St_21_Present;
  int nr_10_St_21_Not_Present;
  int ns_10_St_21_Not_Present_1;
  int presence_1_St_21_Not_Present;
  int ck_26_1;
  int r_10_St_21_Present;
  int s_10_St_21_Present_1;
  int r_10_St_21_Not_Present;
  int s_10_St_21_Not_Present_1;
  int nr_11_St_22_Present;
  int ns_11_St_22_Present_1;
  int presence_St_22_Present;
  int nr_11_St_22_Not_Present;
  int ns_11_St_22_Not_Present_1;
  int presence_St_22_Not_Present;
  int ck_24_1;
  int r_11_St_22_Present;
  int s_11_St_22_Present_1;
  int r_11_St_22_Not_Present;
  int s_11_St_22_Not_Present_1;
  int nr_12_St_23_Open;
  int ns_12_St_23_Open_1;
  int closet_open_1_St_23_Open;
  int nr_12_St_23_Locked;
  int ns_12_St_23_Locked_1;
  int closet_open_1_St_23_Locked;
  int ck_22_1;
  int v_205;
  int r_12_St_23_Open;
  int s_12_St_23_Open_1;
  int r_12_St_23_Locked;
  int s_12_St_23_Locked_1;
  int nr_13_St_24_Open;
  int ns_13_St_24_Open_1;
  int door_open_1_St_24_Open;
  int nr_13_St_24_Closed;
  int ns_13_St_24_Closed_1;
  int door_open_1_St_24_Closed;
  int ck_20_1;
  int v_204;
  int v_203;
  int r_13_St_24_Open;
  int s_13_St_24_Open_1;
  int r_13_St_24_Closed;
  int s_13_St_24_Closed_1;
  int nr_14_St_25_Noite;
  int ns_14_St_25_Noite_1;
  int night_1_St_25_Noite;
  int nr_14_St_25_Dia;
  int ns_14_St_25_Dia_1;
  int night_1_St_25_Dia;
  int ck_18_1;
  int r_14_St_25_Noite;
  int s_14_St_25_Noite_1;
  int r_14_St_25_Dia;
  int s_14_St_25_Dia_1;
  int s_7_2_0;
  int s_7_2_1;
  int ns_7_2_0;
  int ns_7_2_1;
  int s_14_1;
  int ns_14_1;
  int r_14;
  int nr_14;
  int s_13_1;
  int ns_13_1;
  int r_13;
  int nr_13;
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
  int s_9_1;
  int ns_9_1;
  int r_9;
  int nr_9;
  int s_8_1;
  int ns_8_1;
  int r_8;
  int nr_8;
  int s_7_2;
  int s_7_1;
  int ns_7_2;
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
  int s_1;
  int ns_1;
  int r;
  int nr;
  int sw_2;
  int c1_4;
  int c2_4;
  int failed_recovered_4;
  int failed_recovered_2_1;
  int failed_2_1;
  int c1_2_1;
  int c2_2_1;
  int sw_1_1;
  int light_source_on_1;
  int light_source_1;
  int failed_4;
  int out_2;
  int sw;
  int c1_3;
  int c2_3;
  int failed_recovered_3;
  int failed_recovered_2;
  int failed_2;
  int c1_2;
  int c2_2;
  int sw_1;
  int light_source_on;
  int light_source;
  int failed_3;
  int out_1;
  int c1;
  int c2;
  int failed_recovered;
  int failed_recovered_1;
  int failed_1;
  int c1_1;
  int c2_1;
  int air_state_1;
  int air_state;
  int failed;
  int out;
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
  int v_32;
  int v_33;
  int v_34;
  int v_35;
  int v_36;
  int v_37;
  int v_38;
  int v_39;
  int v_40;
  int v_41;
  int v_42;
  int v_43;
  int v_44;
  int v_45;
  int v_46;
  int v_47;
  int v_48;
  int v_49;
  int v_50;
  int v_51;
  int v_52;
  int v_53;
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
  sw_2 = blind_switch;
  c1_2_1 = sw_2;
  failed_recovered_4 = blind_failed_recovered;
  failed_recovered_2_1 = failed_recovered_4;
  sw = light_switch;
  c1_2 = sw;
  failed_recovered_3 = light_failed_recovered;
  failed_recovered_2 = failed_recovered_3;
  failed_recovered = air_failed_recovered;
  failed_recovered_1 = failed_recovered;
  ck_32_1 = self->v_271;
  ck_32_2 = self->v_272;
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
                                                    self->ck_1, self->pnr_14,
                                                    self->ck_19_1,
                                                    self->pnr_13,
                                                    self->ck_21_1,
                                                    self->pnr_12,
                                                    self->ck_23_1,
                                                    self->pnr_11,
                                                    self->ck_25_1,
                                                    self->pnr_10,
                                                    self->ck_27_1,
                                                    self->pnr_9,
                                                    self->ck_29_1,
                                                    self->pnr_8, self->v_272,
                                                    self->v_271, self->pnr_7,
                                                    self->ck_34_1,
                                                    self->pnr_6,
                                                    self->ck_37_1,
                                                    self->pnr_5,
                                                    self->ck_39_1,
                                                    self->pnr_4,
                                                    self->ck_42_1,
                                                    self->pnr_3,
                                                    self->ck_44_1, self->pnr,
                                                    true, true, true, true,
                                                    true, true, true, true,
                                                    true, true,
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
  c1_4 = c_blind_1;
  c2_2_1 = c1_4;
  c2_4 = c_blind_2;
  sw_1_1 = c2_4;
  c1_3 = c_light_1;
  c2_2 = c1_3;
  c2_3 = c_light_2;
  sw_1 = c2_3;
  c1 = c_air_1;
  c1_1 = c1;
  c2 = c_air_2;
  c2_1 = c2;
  c_3 = c_window;
  c_2 = c_pc;
  c_1 = c_closet;
  c = c_door;
  if (self->ck_44_1) {
    if (failed_recovered_2_1) {
      r_St_13_Falha = true;
    } else {
      r_St_13_Falha = self->pnr;
    };
    r = r_St_13_Falha;
    if (failed_recovered_2_1) {
      s_St_13_Falha_1 = false;
    } else {
      s_St_13_Falha_1 = true;
    };
    s_1 = s_St_13_Falha_1;
  } else {
    if (failed_recovered_2_1) {
      r_St_13_Funcionando = true;
      s_St_13_Funcionando_1 = true;
    } else {
      r_St_13_Funcionando = self->pnr;
      s_St_13_Funcionando_1 = false;
    };
    r = r_St_13_Funcionando;
    s_1 = s_St_13_Funcionando_1;
  };
  ck_45_1 = s_1;
  if (ck_45_1) {
    failed_2_1_St_13_Falha = true;
    failed_2_1 = failed_2_1_St_13_Falha;
    nr_St_13_Falha = false;
    nr = nr_St_13_Falha;
    ns_St_13_Falha_1 = true;
    ns_1 = ns_St_13_Falha_1;
  } else {
    failed_2_1_St_13_Funcionando = false;
    nr_St_13_Funcionando = false;
    ns_St_13_Funcionando_1 = false;
    failed_2_1 = failed_2_1_St_13_Funcionando;
    nr = nr_St_13_Funcionando;
    ns_1 = ns_St_13_Funcionando_1;
  };
  failed_4 = failed_2_1;
  ck_41 = failed_4;
  if (self->ck_42_1) {
    v_229 = !(c2_2_1);
    v_228 = (c1_2_1&&sw_1_1);
    v_230 = (v_228||v_229);
    if (v_230) {
      r_3_St_14_Off = true;
      s_3_St_14_Off_1 = false;
    } else {
      r_3_St_14_Off = self->pnr_3;
      s_3_St_14_Off_1 = true;
    };
    r_3 = r_3_St_14_Off;
    s_3_1 = s_3_St_14_Off_1;
  } else {
    v_226 = !(c2_2_1);
    v_225 = (c1_2_1&&sw_1_1);
    v_227 = (v_225||v_226);
    if (v_227) {
      r_3_St_14_On = true;
    } else {
      r_3_St_14_On = self->pnr_3;
    };
    r_3 = r_3_St_14_On;
    if (v_227) {
      s_3_St_14_On_1 = true;
    } else {
      s_3_St_14_On_1 = false;
    };
    s_3_1 = s_3_St_14_On_1;
  };
  ck_43_1 = s_3_1;
  if (ck_43_1) {
    light_source_on_1_St_14_Off = 0;
    nr_3_St_14_Off = false;
    ns_3_St_14_Off_1 = true;
    light_source_on_1 = light_source_on_1_St_14_Off;
    nr_3 = nr_3_St_14_Off;
    ns_3_1 = ns_3_St_14_Off_1;
  } else {
    light_source_on_1_St_14_On = 1;
    light_source_on_1 = light_source_on_1_St_14_On;
    nr_3_St_14_On = false;
    nr_3 = nr_3_St_14_On;
    ns_3_St_14_On_1 = false;
    ns_3_1 = ns_3_St_14_On_1;
  };
  light_source_1 = light_source_on_1;
  if (ck_41) {
    out_2_true = (light_source_1+2);
    out_2 = out_2_true;
  } else {
    out_2_false = light_source_1;
    out_2 = out_2_false;
  };
  _out->blind_status = out_2;
  v_34 = (_out->blind_status<2);
  v_38 = (_out->blind_status==1);
  v_45 = (_out->blind_status>1);
  v_53 = (_out->blind_status<2);
  v_56 = (_out->blind_status==1);
  v_106 = (_out->blind_status==1);
  v_107 = !(v_106);
  v_120 = (_out->blind_status==1);
  v_121 = !(v_120);
  v_129 = (_out->blind_status>1);
  v_139 = (_out->blind_status<2);
  v_142 = (_out->blind_status==1);
  v_151 = (_out->blind_status<2);
  v_154 = (_out->blind_status==1);
  v_163 = (_out->blind_status>1);
  v_173 = (_out->blind_status<2);
  v_176 = (_out->blind_status==1);
  if (self->ck_39_1) {
    if (failed_recovered_2) {
      r_4_St_15_Falha = true;
    } else {
      r_4_St_15_Falha = self->pnr_4;
    };
    r_4 = r_4_St_15_Falha;
    if (failed_recovered_2) {
      s_4_St_15_Falha_1 = false;
    } else {
      s_4_St_15_Falha_1 = true;
    };
    s_4_1 = s_4_St_15_Falha_1;
  } else {
    if (failed_recovered_2) {
      r_4_St_15_Funcionando = true;
      s_4_St_15_Funcionando_1 = true;
    } else {
      r_4_St_15_Funcionando = self->pnr_4;
      s_4_St_15_Funcionando_1 = false;
    };
    r_4 = r_4_St_15_Funcionando;
    s_4_1 = s_4_St_15_Funcionando_1;
  };
  ck_40_1 = s_4_1;
  if (ck_40_1) {
    failed_2_St_15_Falha = true;
    failed_2 = failed_2_St_15_Falha;
    nr_4_St_15_Falha = false;
    nr_4 = nr_4_St_15_Falha;
    ns_4_St_15_Falha_1 = true;
    ns_4_1 = ns_4_St_15_Falha_1;
  } else {
    failed_2_St_15_Funcionando = false;
    nr_4_St_15_Funcionando = false;
    ns_4_St_15_Funcionando_1 = false;
    failed_2 = failed_2_St_15_Funcionando;
    nr_4 = nr_4_St_15_Funcionando;
    ns_4_1 = ns_4_St_15_Funcionando_1;
  };
  failed_3 = failed_2;
  ck_36 = failed_3;
  if (self->ck_37_1) {
    v_223 = !(c2_2);
    v_222 = (c1_2&&sw_1);
    v_224 = (v_222||v_223);
    if (v_224) {
      r_5_St_16_Off = true;
      s_5_St_16_Off_1 = false;
    } else {
      r_5_St_16_Off = self->pnr_5;
      s_5_St_16_Off_1 = true;
    };
    r_5 = r_5_St_16_Off;
    s_5_1 = s_5_St_16_Off_1;
  } else {
    v_220 = !(c2_2);
    v_219 = (c1_2&&sw_1);
    v_221 = (v_219||v_220);
    if (v_221) {
      r_5_St_16_On = true;
    } else {
      r_5_St_16_On = self->pnr_5;
    };
    r_5 = r_5_St_16_On;
    if (v_221) {
      s_5_St_16_On_1 = true;
    } else {
      s_5_St_16_On_1 = false;
    };
    s_5_1 = s_5_St_16_On_1;
  };
  ck_38_1 = s_5_1;
  if (ck_38_1) {
    light_source_on_St_16_Off = 0;
    nr_5_St_16_Off = false;
    ns_5_St_16_Off_1 = true;
    light_source_on = light_source_on_St_16_Off;
    nr_5 = nr_5_St_16_Off;
    ns_5_1 = ns_5_St_16_Off_1;
  } else {
    light_source_on_St_16_On = 1;
    light_source_on = light_source_on_St_16_On;
    nr_5_St_16_On = false;
    nr_5 = nr_5_St_16_On;
    ns_5_St_16_On_1 = false;
    ns_5_1 = ns_5_St_16_On_1;
  };
  light_source = light_source_on;
  if (ck_36) {
    out_1_true = (light_source+2);
    out_1 = out_1_true;
  } else {
    out_1_false = light_source;
    out_1 = out_1_false;
  };
  _out->light_status = out_1;
  v_37 = (_out->light_status==1);
  v_39 = (v_37||v_38);
  v_62 = (_out->light_status<2);
  v_65 = (_out->light_status==1);
  v_75 = (_out->light_status==1);
  v_76 = !(v_75);
  v_86 = (_out->light_status==1);
  v_103 = (_out->light_status==1);
  v_104 = !(v_103);
  v_117 = (_out->light_status==1);
  v_118 = !(v_117);
  v_125 = (_out->light_status>1);
  v_135 = (_out->light_status>1);
  v_147 = (_out->light_status>1);
  v_159 = (_out->light_status<2);
  v_169 = (_out->light_status<2);
  v_181 = (_out->light_status<2);
  v_186 = (_out->light_status==1);
  if (self->ck_34_1) {
    if (failed_recovered_1) {
      r_6_St_17_Falha = true;
    } else {
      r_6_St_17_Falha = self->pnr_6;
    };
    r_6 = r_6_St_17_Falha;
    if (failed_recovered_1) {
      s_6_St_17_Falha_1 = false;
    } else {
      s_6_St_17_Falha_1 = true;
    };
    s_6_1 = s_6_St_17_Falha_1;
  } else {
    if (failed_recovered_1) {
      r_6_St_17_Funcionando = true;
      s_6_St_17_Funcionando_1 = true;
    } else {
      r_6_St_17_Funcionando = self->pnr_6;
      s_6_St_17_Funcionando_1 = false;
    };
    r_6 = r_6_St_17_Funcionando;
    s_6_1 = s_6_St_17_Funcionando_1;
  };
  ck_35_1 = s_6_1;
  if (ck_35_1) {
    failed_1_St_17_Falha = true;
    failed_1 = failed_1_St_17_Falha;
    nr_6_St_17_Falha = false;
    nr_6 = nr_6_St_17_Falha;
    ns_6_St_17_Falha_1 = true;
    ns_6_1 = ns_6_St_17_Falha_1;
  } else {
    failed_1_St_17_Funcionando = false;
    nr_6_St_17_Funcionando = false;
    ns_6_St_17_Funcionando_1 = false;
    failed_1 = failed_1_St_17_Funcionando;
    nr_6 = nr_6_St_17_Funcionando;
    ns_6_1 = ns_6_St_17_Funcionando_1;
  };
  failed = failed_1;
  ck_31 = failed;
  if (ck_32_1) {
    ck_32_2_1 = ck_32_2;
    if (ck_32_2_1) {
      v_209 = !(c2_1);
      if (v_209) {
        v_211 = true;
        v_210_1 = false;
        v_210_2 = false;
      } else {
        v_211 = self->pnr_7;
        v_210_1 = true;
        v_210_2 = true;
      };
      v_208 = !(c1_1);
      if (v_208) {
        r_7_St_18_Max = true;
      } else {
        r_7_St_18_Max = v_211;
      };
      v_277 = r_7_St_18_Max;
      if (v_208) {
        s_7_St_18_Max_1 = true;
      } else {
        s_7_St_18_Max_1 = v_210_1;
      };
      v_273 = s_7_St_18_Max_1;
      if (v_208) {
        s_7_St_18_Max_2 = false;
      } else {
        s_7_St_18_Max_2 = v_210_2;
      };
      v_274 = s_7_St_18_Max_2;
    } else {
      v_213 = !(c2_1);
      if (v_213) {
        v_215 = true;
        v_214_1 = true;
        v_214_2 = true;
      } else {
        v_215 = self->pnr_7;
        v_214_1 = true;
        v_214_2 = false;
      };
      v_212 = !(c1_1);
      if (v_212) {
        r_7_St_18_Min = true;
        s_7_St_18_Min_1 = false;
        s_7_St_18_Min_2 = false;
      } else {
        r_7_St_18_Min = v_215;
        s_7_St_18_Min_1 = v_214_1;
        s_7_St_18_Min_2 = v_214_2;
      };
      v_277 = r_7_St_18_Min;
      v_273 = s_7_St_18_Min_1;
      v_274 = s_7_St_18_Min_2;
    };
    s_7_1 = v_273;
    s_7_2 = v_274;
    r_7 = v_277;
  } else {
    ck_32_2_0 = ck_32_2;
    if (ck_32_2_0) {
      v_278 = true;
      v_275 = true;
      v_276 = true;
    } else {
      v_216 = !(c2_1);
      if (v_216) {
        v_218 = true;
      } else {
        v_218 = self->pnr_7;
      };
      if (c1_1) {
        r_7_St_18_Off = true;
      } else {
        r_7_St_18_Off = v_218;
      };
      v_278 = r_7_St_18_Off;
      if (v_216) {
        v_217_1 = true;
      } else {
        v_217_1 = false;
      };
      if (c1_1) {
        s_7_St_18_Off_1 = true;
      } else {
        s_7_St_18_Off_1 = v_217_1;
      };
      v_275 = s_7_St_18_Off_1;
      if (v_216) {
        v_217_2 = true;
      } else {
        v_217_2 = false;
      };
      if (c1_1) {
        s_7_St_18_Off_2 = false;
      } else {
        s_7_St_18_Off_2 = v_217_2;
      };
      v_276 = s_7_St_18_Off_2;
      if (v_217_1) {
        v_217_2_1 = v_217_2;
      } else {
        v_217_2_0 = v_217_2;
      };
      if (s_7_St_18_Off_1) {
        s_7_St_18_Off_2_1 = s_7_St_18_Off_2;
      } else {
        s_7_St_18_Off_2_0 = s_7_St_18_Off_2;
      };
    };
    s_7_1 = v_275;
    s_7_2 = v_276;
    r_7 = v_278;
  };
  ck_33_1 = s_7_1;
  ck_33_2 = s_7_2;
  if (ck_33_1) {
    ck_33_2_1 = ck_33_2;
    if (ck_33_2_1) {
      air_state_1_St_18_Max = 2;
      v_263 = air_state_1_St_18_Max;
      nr_7_St_18_Max = false;
      v_269 = nr_7_St_18_Max;
      ns_7_St_18_Max_1 = true;
      v_265 = ns_7_St_18_Max_1;
      ns_7_St_18_Max_2 = true;
      v_266 = ns_7_St_18_Max_2;
    } else {
      air_state_1_St_18_Min = 1;
      nr_7_St_18_Min = false;
      ns_7_St_18_Min_1 = true;
      ns_7_St_18_Min_2 = false;
      v_263 = air_state_1_St_18_Min;
      v_269 = nr_7_St_18_Min;
      v_265 = ns_7_St_18_Min_1;
      v_266 = ns_7_St_18_Min_2;
    };
    air_state_1 = v_263;
    ns_7_1 = v_265;
    ns_7_2 = v_266;
    nr_7 = v_269;
  } else {
    ck_33_2_0 = ck_33_2;
    if (ck_33_2_0) {
      v_264 = 0;
      v_270 = true;
      v_267 = true;
      v_268 = true;
    } else {
      air_state_1_St_18_Off = 0;
      v_264 = air_state_1_St_18_Off;
      nr_7_St_18_Off = false;
      v_270 = nr_7_St_18_Off;
      ns_7_St_18_Off_1 = false;
      v_267 = ns_7_St_18_Off_1;
      ns_7_St_18_Off_2 = false;
      v_268 = ns_7_St_18_Off_2;
      if (ns_7_St_18_Off_1) {
        ns_7_St_18_Off_2_1 = ns_7_St_18_Off_2;
      } else {
        ns_7_St_18_Off_2_0 = ns_7_St_18_Off_2;
      };
    };
    air_state_1 = v_264;
    ns_7_1 = v_267;
    ns_7_2 = v_268;
    nr_7 = v_270;
  };
  air_state = air_state_1;
  if (ck_31) {
    out_true = (air_state+3);
    out = out_true;
  } else {
    out_false = air_state;
    out = out_false;
  };
  _out->air_status = out;
  v_43 = (_out->air_status>2);
  v_51 = (_out->air_status>2);
  v_66 = (_out->air_status<3);
  v_71 = (_out->air_status==1);
  v_80 = (_out->air_status<3);
  v_83 = (_out->air_status==1);
  v_90 = (_out->air_status<3);
  v_93 = (_out->air_status==2);
  v_127 = (_out->air_status>2);
  v_137 = (_out->air_status>2);
  v_149 = (_out->air_status<3);
  v_155 = (_out->air_status==1);
  v_156 = (v_154&&v_155);
  v_161 = (_out->air_status>2);
  v_171 = (_out->air_status>2);
  v_183 = (_out->air_status<3);
  v_187 = (_out->air_status==1);
  v_188 = (v_186&&v_187);
  if (ns_7_1) {
    ns_7_2_1 = ns_7_2;
  } else {
    ns_7_2_0 = ns_7_2;
  };
  if (ck_33_1) {
    if (ck_33_2_1) {
      if (ns_7_St_18_Max_1) {
        ns_7_St_18_Max_2_1 = ns_7_St_18_Max_2;
      } else {
        ns_7_St_18_Max_2_0 = ns_7_St_18_Max_2;
      };
    } else {
      if (ns_7_St_18_Min_1) {
        ns_7_St_18_Min_2_1 = ns_7_St_18_Min_2;
      } else {
        ns_7_St_18_Min_2_0 = ns_7_St_18_Min_2;
      };
    };
  };
  if (s_7_1) {
    s_7_2_1 = s_7_2;
  } else {
    s_7_2_0 = s_7_2;
  };
  if (ck_32_1) {
    if (ck_32_2_1) {
      if (v_210_1) {
        v_210_2_1 = v_210_2;
      } else {
        v_210_2_0 = v_210_2;
      };
      if (s_7_St_18_Max_1) {
        s_7_St_18_Max_2_1 = s_7_St_18_Max_2;
      } else {
        s_7_St_18_Max_2_0 = s_7_St_18_Max_2;
      };
    } else {
      if (v_214_1) {
        v_214_2_1 = v_214_2;
      } else {
        v_214_2_0 = v_214_2;
      };
      if (s_7_St_18_Min_1) {
        s_7_St_18_Min_2_1 = s_7_St_18_Min_2;
      } else {
        s_7_St_18_Min_2_0 = s_7_St_18_Min_2;
      };
    };
  };
  if (self->ck_29_1) {
    v_207 = !(c_3);
    if (v_207) {
      r_8_St_19_Closed = true;
      s_8_St_19_Closed_1 = false;
    } else {
      r_8_St_19_Closed = self->pnr_8;
      s_8_St_19_Closed_1 = true;
    };
    r_8 = r_8_St_19_Closed;
    s_8_1 = s_8_St_19_Closed_1;
  } else {
    if (c_3) {
      r_8_St_19_Open = true;
    } else {
      r_8_St_19_Open = self->pnr_8;
    };
    r_8 = r_8_St_19_Open;
    if (c_3) {
      s_8_St_19_Open_1 = true;
    } else {
      s_8_St_19_Open_1 = false;
    };
    s_8_1 = s_8_St_19_Open_1;
  };
  ck_30_1 = s_8_1;
  if (ck_30_1) {
    window_open_1_St_19_Closed = false;
    nr_8_St_19_Closed = false;
    ns_8_St_19_Closed_1 = true;
    window_open_1 = window_open_1_St_19_Closed;
    nr_8 = nr_8_St_19_Closed;
    ns_8_1 = ns_8_St_19_Closed_1;
  } else {
    window_open_1_St_19_Open = true;
    window_open_1 = window_open_1_St_19_Open;
    nr_8_St_19_Open = false;
    nr_8 = nr_8_St_19_Open;
    ns_8_St_19_Open_1 = false;
    ns_8_1 = ns_8_St_19_Open_1;
  };
  _out->window_open = window_open_1;
  v_57 = (_out->window_open&&v_56);
  v_78 = !(_out->window_open);
  v_88 = !(_out->window_open);
  v_101 = !(_out->window_open);
  v_115 = !(_out->window_open);
  v_143 = (_out->window_open&&v_142);
  v_177 = (_out->window_open&&v_176);
  if (self->ck_27_1) {
    if (c_2) {
      r_9_St_20_Off = true;
      s_9_St_20_Off_1 = false;
    } else {
      r_9_St_20_Off = self->pnr_9;
      s_9_St_20_Off_1 = true;
    };
    r_9 = r_9_St_20_Off;
    s_9_1 = s_9_St_20_Off_1;
  } else {
    v_206 = !(c_2);
    if (v_206) {
      r_9_St_20_On = true;
    } else {
      r_9_St_20_On = self->pnr_9;
    };
    r_9 = r_9_St_20_On;
    if (v_206) {
      s_9_St_20_On_1 = true;
    } else {
      s_9_St_20_On_1 = false;
    };
    s_9_1 = s_9_St_20_On_1;
  };
  ck_28_1 = s_9_1;
  if (ck_28_1) {
    computer_on_St_20_Off = false;
    nr_9_St_20_Off = false;
    ns_9_St_20_Off_1 = true;
    computer_on = computer_on_St_20_Off;
    nr_9 = nr_9_St_20_Off;
    ns_9_1 = ns_9_St_20_Off_1;
  } else {
    computer_on_St_20_On = true;
    computer_on = computer_on_St_20_On;
    nr_9_St_20_On = false;
    nr_9 = nr_9_St_20_On;
    ns_9_St_20_On_1 = false;
    ns_9_1 = ns_9_St_20_On_1;
  };
  _out->pc_on = computer_on;
  v_69 = !(_out->pc_on);
  v_100 = !(_out->pc_on);
  v_102 = (v_100&&v_101);
  v_105 = (v_102&&v_104);
  v_108 = (v_105&&v_107);
  v_114 = !(_out->pc_on);
  v_116 = (v_114&&v_115);
  v_119 = (v_116&&v_118);
  v_122 = (v_119&&v_121);
  if (self->ck_25_1) {
    if (arrived_1) {
      r_10_St_21_Not_Present = true;
      s_10_St_21_Not_Present_1 = false;
    } else {
      r_10_St_21_Not_Present = self->pnr_10;
      s_10_St_21_Not_Present_1 = true;
    };
    r_10 = r_10_St_21_Not_Present;
    s_10_1 = s_10_St_21_Not_Present_1;
  } else {
    if (arrived_1) {
      r_10_St_21_Present = true;
    } else {
      r_10_St_21_Present = self->pnr_10;
    };
    r_10 = r_10_St_21_Present;
    if (arrived_1) {
      s_10_St_21_Present_1 = true;
    } else {
      s_10_St_21_Present_1 = false;
    };
    s_10_1 = s_10_St_21_Present_1;
  };
  ck_26_1 = s_10_1;
  if (ck_26_1) {
    presence_1_St_21_Not_Present = false;
    nr_10_St_21_Not_Present = false;
    ns_10_St_21_Not_Present_1 = true;
    presence_1 = presence_1_St_21_Not_Present;
    nr_10 = nr_10_St_21_Not_Present;
    ns_10_1 = ns_10_St_21_Not_Present_1;
  } else {
    presence_1_St_21_Present = true;
    presence_1 = presence_1_St_21_Present;
    nr_10_St_21_Present = false;
    nr_10 = nr_10_St_21_Present;
    ns_10_St_21_Present_1 = false;
    ns_10_1 = ns_10_St_21_Present_1;
  };
  _out->cleaner_presence = presence_1;
  v_67 = (_out->cleaner_presence&&v_66);
  v_68 = !(v_67);
  v_95 = !(_out->cleaner_presence);
  v_110 = !(_out->cleaner_presence);
  if (self->ck_23_1) {
    if (arrived) {
      r_11_St_22_Not_Present = true;
      s_11_St_22_Not_Present_1 = false;
    } else {
      r_11_St_22_Not_Present = self->pnr_11;
      s_11_St_22_Not_Present_1 = true;
    };
    r_11 = r_11_St_22_Not_Present;
    s_11_1 = s_11_St_22_Not_Present_1;
  } else {
    if (arrived) {
      r_11_St_22_Present = true;
    } else {
      r_11_St_22_Present = self->pnr_11;
    };
    r_11 = r_11_St_22_Present;
    if (arrived) {
      s_11_St_22_Present_1 = true;
    } else {
      s_11_St_22_Present_1 = false;
    };
    s_11_1 = s_11_St_22_Present_1;
  };
  ck_24_1 = s_11_1;
  if (ck_24_1) {
    presence_St_22_Not_Present = false;
    nr_11_St_22_Not_Present = false;
    ns_11_St_22_Not_Present_1 = true;
    presence = presence_St_22_Not_Present;
    nr_11 = nr_11_St_22_Not_Present;
    ns_11_1 = ns_11_St_22_Not_Present_1;
  } else {
    presence_St_22_Present = true;
    presence = presence_St_22_Present;
    nr_11_St_22_Present = false;
    nr_11 = nr_11_St_22_Present;
    ns_11_St_22_Present_1 = false;
    ns_11_1 = ns_11_St_22_Present_1;
  };
  _out->worker_presence = presence;
  v = (_out->worker_presence||_out->cleaner_presence);
  v_40 = (_out->worker_presence||_out->cleaner_presence);
  v_48 = (_out->worker_presence||_out->cleaner_presence);
  v_59 = (_out->worker_presence||_out->cleaner_presence);
  v_94 = !(_out->worker_presence);
  v_96 = (v_94&&v_95);
  v_109 = !(_out->worker_presence);
  v_111 = (v_109&&v_110);
  v_123 = (_out->worker_presence||_out->cleaner_presence);
  v_133 = (_out->worker_presence||_out->cleaner_presence);
  v_145 = (_out->worker_presence||_out->cleaner_presence);
  v_157 = (_out->worker_presence||_out->cleaner_presence);
  v_167 = (_out->worker_presence||_out->cleaner_presence);
  v_179 = (_out->worker_presence||_out->cleaner_presence);
  if (self->ck_21_1) {
    v_205 = !(c_1);
    if (v_205) {
      r_12_St_23_Locked = true;
      s_12_St_23_Locked_1 = false;
    } else {
      r_12_St_23_Locked = self->pnr_12;
      s_12_St_23_Locked_1 = true;
    };
    r_12 = r_12_St_23_Locked;
    s_12_1 = s_12_St_23_Locked_1;
  } else {
    if (c_1) {
      r_12_St_23_Open = true;
    } else {
      r_12_St_23_Open = self->pnr_12;
    };
    r_12 = r_12_St_23_Open;
    if (c_1) {
      s_12_St_23_Open_1 = true;
    } else {
      s_12_St_23_Open_1 = false;
    };
    s_12_1 = s_12_St_23_Open_1;
  };
  ck_22_1 = s_12_1;
  if (ck_22_1) {
    closet_open_1_St_23_Locked = false;
    nr_12_St_23_Locked = false;
    ns_12_St_23_Locked_1 = true;
    closet_open_1 = closet_open_1_St_23_Locked;
    nr_12 = nr_12_St_23_Locked;
    ns_12_1 = ns_12_St_23_Locked_1;
  } else {
    closet_open_1_St_23_Open = true;
    closet_open_1 = closet_open_1_St_23_Open;
    nr_12_St_23_Open = false;
    nr_12 = nr_12_St_23_Open;
    ns_12_St_23_Open_1 = false;
    ns_12_1 = ns_12_St_23_Open_1;
  };
  _out->closet_open = closet_open_1;
  v_70 = (v_69&&_out->closet_open);
  v_72 = (v_70&&v_71);
  rule11 = (v_68||v_72);
  if (self->ck_19_1) {
    v_204 = !(c);
    if (v_204) {
      r_13_St_24_Closed = true;
      s_13_St_24_Closed_1 = false;
    } else {
      r_13_St_24_Closed = self->pnr_13;
      s_13_St_24_Closed_1 = true;
    };
    r_13 = r_13_St_24_Closed;
    s_13_1 = s_13_St_24_Closed_1;
  } else {
    v_203 = !(c);
    if (v_203) {
      r_13_St_24_Open = true;
    } else {
      r_13_St_24_Open = self->pnr_13;
    };
    r_13 = r_13_St_24_Open;
    if (v_203) {
      s_13_St_24_Open_1 = true;
    } else {
      s_13_St_24_Open_1 = false;
    };
    s_13_1 = s_13_St_24_Open_1;
  };
  ck_20_1 = s_13_1;
  if (ck_20_1) {
    door_open_1_St_24_Closed = false;
    nr_13_St_24_Closed = false;
    ns_13_St_24_Closed_1 = true;
    door_open_1 = door_open_1_St_24_Closed;
    nr_13 = nr_13_St_24_Closed;
    ns_13_1 = ns_13_St_24_Closed_1;
  } else {
    door_open_1_St_24_Open = true;
    door_open_1 = door_open_1_St_24_Open;
    nr_13_St_24_Open = false;
    nr_13 = nr_13_St_24_Open;
    ns_13_St_24_Open_1 = false;
    ns_13_1 = ns_13_St_24_Open_1;
  };
  _out->door_open = door_open_1;
  v_58 = (v_57&&_out->door_open);
  v_132 = (_out->window_open&&_out->door_open);
  v_144 = (v_143&&_out->door_open);
  v_166 = (_out->window_open&&_out->door_open);
  v_178 = (v_177&&_out->door_open);
  if (self->ck_1) {
    if (change) {
      r_14_St_25_Dia = true;
      s_14_St_25_Dia_1 = false;
    } else {
      r_14_St_25_Dia = self->pnr_14;
      s_14_St_25_Dia_1 = true;
    };
    r_14 = r_14_St_25_Dia;
    s_14_1 = s_14_St_25_Dia_1;
  } else {
    if (change) {
      r_14_St_25_Noite = true;
    } else {
      r_14_St_25_Noite = self->pnr_14;
    };
    r_14 = r_14_St_25_Noite;
    if (change) {
      s_14_St_25_Noite_1 = true;
    } else {
      s_14_St_25_Noite_1 = false;
    };
    s_14_1 = s_14_St_25_Noite_1;
  };
  ck_18_1 = s_14_1;
  if (ck_18_1) {
    night_1_St_25_Dia = false;
    nr_14_St_25_Dia = false;
    ns_14_St_25_Dia_1 = true;
    night_1 = night_1_St_25_Dia;
    nr_14 = nr_14_St_25_Dia;
    ns_14_1 = ns_14_St_25_Dia_1;
  } else {
    night_1_St_25_Noite = true;
    night_1 = night_1_St_25_Noite;
    nr_14_St_25_Noite = false;
    nr_14 = nr_14_St_25_Noite;
    ns_14_St_25_Noite_1 = false;
    ns_14_1 = ns_14_St_25_Noite_1;
  };
  _out->night = night_1;
  v_32 = !(_out->night);
  v_33 = (v&&v_32);
  v_35 = (v_33&&v_34);
  v_36 = !(v_35);
  rule15 = (v_36||v_39);
  v_41 = !(_out->night);
  v_42 = (v_40&&v_41);
  v_44 = (v_42&&v_43);
  v_46 = (v_44&&v_45);
  v_47 = !(v_46);
  rule14 = (v_47||_out->door_open);
  v_49 = !(_out->night);
  v_50 = (v_48&&v_49);
  v_52 = (v_50&&v_51);
  v_54 = (v_52&&v_53);
  v_55 = !(v_54);
  rule13 = (v_55||v_58);
  v_60 = !(_out->night);
  v_61 = (v_59&&v_60);
  v_63 = (v_61&&v_62);
  v_64 = !(v_63);
  rule12 = (v_64||v_65);
  v_73 = !(_out->night);
  v_74 = (v_73&&_out->pc_on);
  v_77 = (v_74&&v_76);
  v_79 = (v_77&&v_78);
  v_81 = (v_79&&v_80);
  v_82 = !(v_81);
  rule10 = (v_82||v_83);
  v_84 = !(_out->night);
  v_85 = (v_84&&_out->pc_on);
  v_87 = (v_85&&v_86);
  v_89 = (v_87&&v_88);
  v_91 = (v_89&&v_90);
  v_92 = !(v_91);
  rule9 = (v_92||v_93);
  v_97 = !(_out->night);
  v_98 = (v_96&&v_97);
  v_99 = !(v_98);
  rule8 = (v_99||v_108);
  v_112 = (v_111&&_out->night);
  v_113 = !(v_112);
  rule7 = (v_113||v_122);
  v_124 = (v_123&&_out->night);
  v_126 = (v_124&&v_125);
  v_128 = (v_126&&v_127);
  v_130 = (v_128&&v_129);
  v_131 = !(v_130);
  rule6 = (v_131||v_132);
  v_134 = (v_133&&_out->night);
  v_136 = (v_134&&v_135);
  v_138 = (v_136&&v_137);
  v_140 = (v_138&&v_139);
  v_141 = !(v_140);
  rule5 = (v_141||v_144);
  v_146 = (v_145&&_out->night);
  v_148 = (v_146&&v_147);
  v_150 = (v_148&&v_149);
  v_152 = (v_150&&v_151);
  v_153 = !(v_152);
  rule4 = (v_153||v_156);
  v_158 = (v_157&&_out->night);
  v_160 = (v_158&&v_159);
  v_162 = (v_160&&v_161);
  v_164 = (v_162&&v_163);
  v_165 = !(v_164);
  rule3 = (v_165||v_166);
  v_168 = (v_167&&_out->night);
  v_170 = (v_168&&v_169);
  v_172 = (v_170&&v_171);
  v_174 = (v_172&&v_173);
  v_175 = !(v_174);
  rule2 = (v_175||v_178);
  v_180 = (v_179&&_out->night);
  v_182 = (v_180&&v_181);
  v_184 = (v_182&&v_183);
  v_185 = !(v_184);
  rule1 = (v_185||v_188);
  v_189 = (rule1&&rule2);
  v_190 = (v_189&&rule3);
  v_191 = (v_190&&rule4);
  v_192 = (v_191&&rule5);
  v_193 = (v_192&&rule6);
  v_194 = (v_193&&rule7);
  v_195 = (v_194&&rule8);
  v_196 = (v_195&&rule9);
  v_197 = (v_196&&rule10);
  v_198 = (v_197&&rule11);
  v_199 = (v_198&&rule12);
  v_200 = (v_199&&rule13);
  v_201 = (v_200&&rule14);
  v_202 = (v_201&&rule15);
  self->pnr = nr;
  self->ck_44_1 = ns_1;
  self->pnr_3 = nr_3;
  self->ck_42_1 = ns_3_1;
  self->pnr_4 = nr_4;
  self->ck_39_1 = ns_4_1;
  self->pnr_5 = nr_5;
  self->ck_37_1 = ns_5_1;
  self->pnr_6 = nr_6;
  self->ck_34_1 = ns_6_1;
  self->pnr_7 = nr_7;
  self->v_271 = ns_7_1;
  self->v_272 = ns_7_2;
  self->pnr_8 = nr_8;
  self->ck_29_1 = ns_8_1;
  self->pnr_9 = nr_9;
  self->ck_27_1 = ns_9_1;
  self->pnr_10 = nr_10;
  self->ck_25_1 = ns_10_1;
  self->pnr_11 = nr_11;
  self->ck_23_1 = ns_11_1;
  self->pnr_12 = nr_12;
  self->ck_21_1 = ns_12_1;
  self->pnr_13 = nr_13;
  self->ck_19_1 = ns_13_1;
  self->pnr_14 = nr_14;
  self->ck_1 = ns_14_1;;
}

