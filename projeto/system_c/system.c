/* --- Generated the 14/8/2018 at 10:9 --- */
/* --- heptagon compiler, version 1.03.00 (compiled mon. aug. 6 15:37:40 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "system.h"

void System__light_source_reset(System__light_source_mem* self) {
  self->pnr = false;
  self->ck_1_2 = true;
}

void System__light_source_step(int sw, int c1, int c2,
                               System__light_source_out* _out,
                               System__light_source_mem* self) {
  
  int nr_St_On;
  int ns_St_On_1;
  int light_source_status_St_On;
  int nr_St_Off;
  int ns_St_Off_1;
  int light_source_status_St_Off;
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
    light_source_status_St_Off = 0;
    nr_St_Off = false;
    ns_St_Off_1 = true;
    _out->light_source_status = light_source_status_St_Off;
    nr = nr_St_Off;
    ns_1 = ns_St_Off_1;
  } else {
    light_source_status_St_On = 1;
    _out->light_source_status = light_source_status_St_On;
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
  int door_status_St_1_Open;
  int nr_St_1_Closed;
  int ns_St_1_Closed_1;
  int door_status_St_1_Closed;
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
    door_status_St_1_Closed = 0;
    nr_St_1_Closed = false;
    ns_St_1_Closed_1 = true;
    _out->door_status = door_status_St_1_Closed;
    nr = nr_St_1_Closed;
    ns_1 = ns_St_1_Closed_1;
  } else {
    door_status_St_1_Open = 1;
    _out->door_status = door_status_St_1_Open;
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
  int closet_status_St_2_Open;
  int nr_St_2_Locked;
  int ns_St_2_Locked_1;
  int closet_status_St_2_Locked;
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
    closet_status_St_2_Locked = 0;
    nr_St_2_Locked = false;
    ns_St_2_Locked_1 = true;
    _out->closet_status = closet_status_St_2_Locked;
    nr = nr_St_2_Locked;
    ns_1 = ns_St_2_Locked_1;
  } else {
    closet_status_St_2_Open = 1;
    _out->closet_status = closet_status_St_2_Open;
    nr_St_2_Open = false;
    nr = nr_St_2_Open;
    ns_St_2_Open_1 = false;
    ns_1 = ns_St_2_Open_1;
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
  
  int nr_St_3_On;
  int ns_St_3_On_1;
  int computer_on_St_3_On;
  int nr_St_3_Off;
  int ns_St_3_Off_1;
  int computer_on_St_3_Off;
  int ck_4_1;
  int v;
  int r_St_3_On;
  int s_St_3_On_1;
  int r_St_3_Off;
  int s_St_3_Off_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (c) {
      r_St_3_Off = true;
      s_St_3_Off_1 = false;
    } else {
      r_St_3_Off = self->pnr;
      s_St_3_Off_1 = true;
    };
    r = r_St_3_Off;
    s_1 = s_St_3_Off_1;
  } else {
    v = !(c);
    if (v) {
      r_St_3_On = true;
    } else {
      r_St_3_On = self->pnr;
    };
    r = r_St_3_On;
    if (v) {
      s_St_3_On_1 = true;
    } else {
      s_St_3_On_1 = false;
    };
    s_1 = s_St_3_On_1;
  };
  ck_4_1 = s_1;
  if (ck_4_1) {
    computer_on_St_3_Off = 0;
    nr_St_3_Off = false;
    ns_St_3_Off_1 = true;
    _out->computer_on = computer_on_St_3_Off;
    nr = nr_St_3_Off;
    ns_1 = ns_St_3_Off_1;
  } else {
    computer_on_St_3_On = 1;
    _out->computer_on = computer_on_St_3_On;
    nr_St_3_On = false;
    nr = nr_St_3_On;
    ns_St_3_On_1 = false;
    ns_1 = ns_St_3_On_1;
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
  
  int nr_St_4_Open;
  int ns_St_4_Open_1;
  int window_status_St_4_Open;
  int nr_St_4_Closed;
  int ns_St_4_Closed_1;
  int window_status_St_4_Closed;
  int ck_5_1;
  int v;
  int r_St_4_Open;
  int s_St_4_Open_1;
  int r_St_4_Closed;
  int s_St_4_Closed_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v = !(c);
    if (v) {
      r_St_4_Closed = true;
      s_St_4_Closed_1 = false;
    } else {
      r_St_4_Closed = self->pnr;
      s_St_4_Closed_1 = true;
    };
    r = r_St_4_Closed;
    s_1 = s_St_4_Closed_1;
  } else {
    if (c) {
      r_St_4_Open = true;
    } else {
      r_St_4_Open = self->pnr;
    };
    r = r_St_4_Open;
    if (c) {
      s_St_4_Open_1 = true;
    } else {
      s_St_4_Open_1 = false;
    };
    s_1 = s_St_4_Open_1;
  };
  ck_5_1 = s_1;
  if (ck_5_1) {
    window_status_St_4_Closed = 0;
    nr_St_4_Closed = false;
    ns_St_4_Closed_1 = true;
    _out->window_status = window_status_St_4_Closed;
    nr = nr_St_4_Closed;
    ns_1 = ns_St_4_Closed_1;
  } else {
    window_status_St_4_Open = 1;
    _out->window_status = window_status_St_4_Open;
    nr_St_4_Open = false;
    nr = nr_St_4_Open;
    ns_St_4_Open_1 = false;
    ns_1 = ns_St_4_Open_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__air_conditioner_reset(System__air_conditioner_mem* self) {
  self->pnr = false;
  self->v_222 = false;
  self->v_223 = false;
}

void System__air_conditioner_step(int c1, int c2,
                                  System__air_conditioner_out* _out,
                                  System__air_conditioner_mem* self) {
  
  int v_221;
  int v_220;
  int v_219;
  int v_218;
  int v_217;
  int v_216;
  int v_215;
  int v_214;
  int ns_St_5_Max_2_0;
  int ns_St_5_Max_2_1;
  int ns_St_5_Min_2_0;
  int ns_St_5_Min_2_1;
  int ns_St_5_Off_2_0;
  int ns_St_5_Off_2_1;
  int ck_6_2_0;
  int ck_6_2_1;
  int nr_St_5_Max;
  int ns_St_5_Max_2;
  int ns_St_5_Max_1;
  int air_status_St_5_Max;
  int nr_St_5_Min;
  int ns_St_5_Min_2;
  int ns_St_5_Min_1;
  int air_status_St_5_Min;
  int nr_St_5_Off;
  int ns_St_5_Off_2;
  int ns_St_5_Off_1;
  int air_status_St_5_Off;
  int ck_6_2;
  int ck_6_1;
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
  int v_229;
  int v_228;
  int v_227;
  int v_226;
  int v_225;
  int v_224;
  int s_St_5_Max_2_0;
  int s_St_5_Max_2_1;
  int s_St_5_Min_2_0;
  int s_St_5_Min_2_1;
  int s_St_5_Off_2_0;
  int s_St_5_Off_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_5_Max;
  int s_St_5_Max_2;
  int s_St_5_Max_1;
  int r_St_5_Min;
  int s_St_5_Min_2;
  int s_St_5_Min_1;
  int r_St_5_Off;
  int s_St_5_Off_2;
  int s_St_5_Off_1;
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
  ck_1 = self->v_222;
  ck_2 = self->v_223;
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
        r_St_5_Max = true;
      } else {
        r_St_5_Max = v_9;
      };
      v_228 = r_St_5_Max;
      if (v) {
        s_St_5_Max_1 = true;
      } else {
        s_St_5_Max_1 = v_8_1;
      };
      v_224 = s_St_5_Max_1;
      if (v) {
        s_St_5_Max_2 = false;
      } else {
        s_St_5_Max_2 = v_8_2;
      };
      v_225 = s_St_5_Max_2;
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
        r_St_5_Min = true;
        s_St_5_Min_1 = false;
        s_St_5_Min_2 = false;
      } else {
        r_St_5_Min = v_13;
        s_St_5_Min_1 = v_12_1;
        s_St_5_Min_2 = v_12_2;
      };
      v_228 = r_St_5_Min;
      v_224 = s_St_5_Min_1;
      v_225 = s_St_5_Min_2;
    };
    s_1 = v_224;
    s_2 = v_225;
    r = v_228;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_229 = true;
      v_226 = true;
      v_227 = true;
    } else {
      v_14 = !(c2);
      if (v_14) {
        v_16 = true;
      } else {
        v_16 = self->pnr;
      };
      if (c1) {
        r_St_5_Off = true;
      } else {
        r_St_5_Off = v_16;
      };
      v_229 = r_St_5_Off;
      if (v_14) {
        v_15_1 = true;
      } else {
        v_15_1 = false;
      };
      if (c1) {
        s_St_5_Off_1 = true;
      } else {
        s_St_5_Off_1 = v_15_1;
      };
      v_226 = s_St_5_Off_1;
      if (v_14) {
        v_15_2 = true;
      } else {
        v_15_2 = false;
      };
      if (c1) {
        s_St_5_Off_2 = false;
      } else {
        s_St_5_Off_2 = v_15_2;
      };
      v_227 = s_St_5_Off_2;
      if (v_15_1) {
        v_15_2_1 = v_15_2;
      } else {
        v_15_2_0 = v_15_2;
      };
      if (s_St_5_Off_1) {
        s_St_5_Off_2_1 = s_St_5_Off_2;
      } else {
        s_St_5_Off_2_0 = s_St_5_Off_2;
      };
    };
    s_1 = v_226;
    s_2 = v_227;
    r = v_229;
  };
  ck_6_1 = s_1;
  ck_6_2 = s_2;
  if (ck_6_1) {
    ck_6_2_1 = ck_6_2;
    if (ck_6_2_1) {
      air_status_St_5_Max = 2;
      v_214 = air_status_St_5_Max;
      nr_St_5_Max = false;
      v_220 = nr_St_5_Max;
      ns_St_5_Max_1 = true;
      v_216 = ns_St_5_Max_1;
      ns_St_5_Max_2 = true;
      v_217 = ns_St_5_Max_2;
    } else {
      air_status_St_5_Min = 1;
      nr_St_5_Min = false;
      ns_St_5_Min_1 = true;
      ns_St_5_Min_2 = false;
      v_214 = air_status_St_5_Min;
      v_220 = nr_St_5_Min;
      v_216 = ns_St_5_Min_1;
      v_217 = ns_St_5_Min_2;
    };
    _out->air_status = v_214;
    ns_1 = v_216;
    ns_2 = v_217;
    nr = v_220;
  } else {
    ck_6_2_0 = ck_6_2;
    if (ck_6_2_0) {
      v_215 = 0;
      v_221 = true;
      v_218 = true;
      v_219 = true;
    } else {
      air_status_St_5_Off = 0;
      v_215 = air_status_St_5_Off;
      nr_St_5_Off = false;
      v_221 = nr_St_5_Off;
      ns_St_5_Off_1 = false;
      v_218 = ns_St_5_Off_1;
      ns_St_5_Off_2 = false;
      v_219 = ns_St_5_Off_2;
      if (ns_St_5_Off_1) {
        ns_St_5_Off_2_1 = ns_St_5_Off_2;
      } else {
        ns_St_5_Off_2_0 = ns_St_5_Off_2;
      };
    };
    _out->air_status = v_215;
    ns_1 = v_218;
    ns_2 = v_219;
    nr = v_221;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (ck_6_1) {
    if (ck_6_2_1) {
      if (ns_St_5_Max_1) {
        ns_St_5_Max_2_1 = ns_St_5_Max_2;
      } else {
        ns_St_5_Max_2_0 = ns_St_5_Max_2;
      };
    } else {
      if (ns_St_5_Min_1) {
        ns_St_5_Min_2_1 = ns_St_5_Min_2;
      } else {
        ns_St_5_Min_2_0 = ns_St_5_Min_2;
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
      if (s_St_5_Max_1) {
        s_St_5_Max_2_1 = s_St_5_Max_2;
      } else {
        s_St_5_Max_2_0 = s_St_5_Max_2;
      };
    } else {
      if (v_12_1) {
        v_12_2_1 = v_12_2;
      } else {
        v_12_2_0 = v_12_2;
      };
      if (s_St_5_Min_1) {
        s_St_5_Min_2_1 = s_St_5_Min_2;
      } else {
        s_St_5_Min_2_0 = s_St_5_Min_2;
      };
    };
  };
  self->pnr = nr;
  self->v_222 = ns_1;
  self->v_223 = ns_2;;
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
  self->ck_26_1 = true;
  self->pnr_1 = false;
  self->ck_24_1 = true;
  self->pnr_2 = false;
  self->v_238 = false;
  self->v_239 = false;
  self->pnr_3 = false;
  self->ck_20_1 = true;
  self->pnr_4 = false;
  self->ck_18_1 = true;
  self->pnr_5 = false;
  self->ck_16_1 = true;
  self->pnr_6 = false;
  self->ck_14_1 = true;
  self->pnr_7 = false;
  self->ck_12_1 = true;
  self->pnr_8 = false;
  self->ck_10_1 = true;
  self->pnr_9 = false;
  self->ck_1 = true;
}

void System__controller_step(int change_shift, int worker, int cleaner,
                             int light_switch, int blind_switch,
                             System__controller_out* _out,
                             System__controller_mem* self) {
  Controller_controller__controller_controller_out Controller_controller__controller_controller_out_st;
  
  int nr_St_8_On;
  int ns_St_8_On_1;
  int light_source_status_1_St_8_On;
  int nr_St_8_Off;
  int ns_St_8_Off_1;
  int light_source_status_1_St_8_Off;
  int ck_27_1;
  int v_213;
  int v_212;
  int v_211;
  int v_210;
  int v_209;
  int v_208;
  int r_St_8_On;
  int s_St_8_On_1;
  int r_St_8_Off;
  int s_St_8_Off_1;
  int nr_1_St_9_On;
  int ns_1_St_9_On_1;
  int light_source_status_St_9_On;
  int nr_1_St_9_Off;
  int ns_1_St_9_Off_1;
  int light_source_status_St_9_Off;
  int ck_25_1;
  int v_207;
  int v_206;
  int v_205;
  int v_204;
  int v_203;
  int v_202;
  int r_1_St_9_On;
  int s_1_St_9_On_1;
  int r_1_St_9_Off;
  int s_1_St_9_Off_1;
  int v_237;
  int v_236;
  int v_235;
  int v_234;
  int v_233;
  int v_232;
  int v_231;
  int v_230;
  int ns_2_St_10_Max_2_0;
  int ns_2_St_10_Max_2_1;
  int ns_2_St_10_Min_2_0;
  int ns_2_St_10_Min_2_1;
  int ns_2_St_10_Off_2_0;
  int ns_2_St_10_Off_2_1;
  int ck_23_2_0;
  int ck_23_2_1;
  int nr_2_St_10_Max;
  int ns_2_St_10_Max_2;
  int ns_2_St_10_Max_1;
  int air_status_1_St_10_Max;
  int nr_2_St_10_Min;
  int ns_2_St_10_Min_2;
  int ns_2_St_10_Min_1;
  int air_status_1_St_10_Min;
  int nr_2_St_10_Off;
  int ns_2_St_10_Off_2;
  int ns_2_St_10_Off_1;
  int air_status_1_St_10_Off;
  int ck_23_2;
  int ck_23_1;
  int v_200_2_0;
  int v_200_2_1;
  int v_201;
  int v_200_2;
  int v_200_1;
  int v_199;
  int v_197_2_0;
  int v_197_2_1;
  int v_198;
  int v_197_2;
  int v_197_1;
  int v_196;
  int v_195;
  int v_193_2_0;
  int v_193_2_1;
  int v_194;
  int v_193_2;
  int v_193_1;
  int v_192;
  int v_191;
  int v_245;
  int v_244;
  int v_243;
  int v_242;
  int v_241;
  int v_240;
  int s_2_St_10_Max_2_0;
  int s_2_St_10_Max_2_1;
  int s_2_St_10_Min_2_0;
  int s_2_St_10_Min_2_1;
  int s_2_St_10_Off_2_0;
  int s_2_St_10_Off_2_1;
  int ck_22_2_0;
  int ck_22_2_1;
  int r_2_St_10_Max;
  int s_2_St_10_Max_2;
  int s_2_St_10_Max_1;
  int r_2_St_10_Min;
  int s_2_St_10_Min_2;
  int s_2_St_10_Min_1;
  int r_2_St_10_Off;
  int s_2_St_10_Off_2;
  int s_2_St_10_Off_1;
  int ck_22_2;
  int ck_22_1;
  int nr_3_St_11_Open;
  int ns_3_St_11_Open_1;
  int window_status_1_St_11_Open;
  int nr_3_St_11_Closed;
  int ns_3_St_11_Closed_1;
  int window_status_1_St_11_Closed;
  int ck_21_1;
  int v_190;
  int r_3_St_11_Open;
  int s_3_St_11_Open_1;
  int r_3_St_11_Closed;
  int s_3_St_11_Closed_1;
  int nr_4_St_12_Open;
  int ns_4_St_12_Open_1;
  int closet_status_1_St_12_Open;
  int nr_4_St_12_Locked;
  int ns_4_St_12_Locked_1;
  int closet_status_1_St_12_Locked;
  int ck_19_1;
  int v_189;
  int r_4_St_12_Open;
  int s_4_St_12_Open_1;
  int r_4_St_12_Locked;
  int s_4_St_12_Locked_1;
  int nr_5_St_13_Open;
  int ns_5_St_13_Open_1;
  int door_status_1_St_13_Open;
  int nr_5_St_13_Closed;
  int ns_5_St_13_Closed_1;
  int door_status_1_St_13_Closed;
  int ck_17_1;
  int v_188;
  int v_187;
  int r_5_St_13_Open;
  int s_5_St_13_Open_1;
  int r_5_St_13_Closed;
  int s_5_St_13_Closed_1;
  int nr_6_St_14_On;
  int ns_6_St_14_On_1;
  int computer_on_St_14_On;
  int nr_6_St_14_Off;
  int ns_6_St_14_Off_1;
  int computer_on_St_14_Off;
  int ck_15_1;
  int v_186;
  int r_6_St_14_On;
  int s_6_St_14_On_1;
  int r_6_St_14_Off;
  int s_6_St_14_Off_1;
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
  int s_2_2_0;
  int s_2_2_1;
  int ns_2_2_0;
  int ns_2_2_1;
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
  int s_2_2;
  int s_2_1;
  int ns_2_2;
  int ns_2_1;
  int r_2;
  int nr_2;
  int s_1_1;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_1_2;
  int ns_1_2;
  int r;
  int nr;
  int sw_1;
  int c1_2;
  int c2_2;
  int light_source_status_1;
  int sw;
  int c1_1;
  int c2_1;
  int light_source_status;
  int c1;
  int c2;
  int air_status_1;
  int c_3;
  int window_status_1;
  int c_2;
  int closet_status_1;
  int c_1;
  int door_status_1;
  int c;
  int computer_on;
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
  int v_17;
  int v_18;
  int v_19;
  int v_20;
  int v_21;
  int v_22;
  int v_23;
  int v_24;
  int v_25;
  int v_26;
  int v_27;
  int v_28;
  int v_29;
  int v_30;
  int v_31;
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
  sw = light_switch;
  ck_22_1 = self->v_238;
  ck_22_2 = self->v_239;
  arrived_1 = cleaner;
  arrived = worker;
  change = change_shift;
  Controller_controller__controller_controller_step(change_shift, worker,
                                                    cleaner, light_switch,
                                                    blind_switch, self->ck_1,
                                                    self->pnr_9,
                                                    self->ck_10_1,
                                                    self->pnr_8,
                                                    self->ck_12_1,
                                                    self->pnr_7,
                                                    self->ck_14_1,
                                                    self->pnr_6,
                                                    self->ck_16_1,
                                                    self->pnr_5,
                                                    self->ck_18_1,
                                                    self->pnr_4,
                                                    self->ck_20_1,
                                                    self->pnr_3, self->v_239,
                                                    self->v_238, self->pnr_2,
                                                    self->ck_24_1,
                                                    self->pnr_1,
                                                    self->ck_26_1, self->pnr,
                                                    true, true, true, true,
                                                    true, true, true, true,
                                                    true, true,
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
  if (self->ck_26_1) {
    v_212 = !(c2_2);
    v_211 = (c1_2&&sw_1);
    v_213 = (v_211||v_212);
    if (v_213) {
      r_St_8_Off = true;
      s_St_8_Off_1 = false;
    } else {
      r_St_8_Off = self->pnr;
      s_St_8_Off_1 = true;
    };
    r = r_St_8_Off;
    s_1_2 = s_St_8_Off_1;
  } else {
    v_209 = !(c2_2);
    v_208 = (c1_2&&sw_1);
    v_210 = (v_208||v_209);
    if (v_210) {
      r_St_8_On = true;
    } else {
      r_St_8_On = self->pnr;
    };
    r = r_St_8_On;
    if (v_210) {
      s_St_8_On_1 = true;
    } else {
      s_St_8_On_1 = false;
    };
    s_1_2 = s_St_8_On_1;
  };
  ck_27_1 = s_1_2;
  if (ck_27_1) {
    light_source_status_1_St_8_Off = 0;
    nr_St_8_Off = false;
    ns_St_8_Off_1 = true;
    light_source_status_1 = light_source_status_1_St_8_Off;
    nr = nr_St_8_Off;
    ns_1_2 = ns_St_8_Off_1;
  } else {
    light_source_status_1_St_8_On = 1;
    light_source_status_1 = light_source_status_1_St_8_On;
    nr_St_8_On = false;
    nr = nr_St_8_On;
    ns_St_8_On_1 = false;
    ns_1_2 = ns_St_8_On_1;
  };
  _out->blind_status = light_source_status_1;
  v_37 = (_out->blind_status<=1);
  v_44 = (_out->blind_status==1);
  v_62 = (_out->blind_status>=2);
  v_74 = (_out->blind_status<=1);
  v_81 = (_out->blind_status==1);
  v_108 = (_out->blind_status>=2);
  v_115 = (_out->blind_status<=1);
  v_118 = (_out->blind_status==1);
  v_124 = (_out->blind_status<=1);
  v_128 = (_out->blind_status==1);
  v_134 = (_out->blind_status<=1);
  v_137 = (_out->blind_status==1);
  v_156 = (_out->blind_status==1);
  v_157 = !(v_156);
  if (self->ck_24_1) {
    v_206 = !(c2_1);
    v_205 = (c1_1&&sw);
    v_207 = (v_205||v_206);
    if (v_207) {
      r_1_St_9_Off = true;
      s_1_St_9_Off_1 = false;
    } else {
      r_1_St_9_Off = self->pnr_1;
      s_1_St_9_Off_1 = true;
    };
    r_1 = r_1_St_9_Off;
    s_1_1 = s_1_St_9_Off_1;
  } else {
    v_203 = !(c2_1);
    v_202 = (c1_1&&sw);
    v_204 = (v_202||v_203);
    if (v_204) {
      r_1_St_9_On = true;
    } else {
      r_1_St_9_On = self->pnr_1;
    };
    r_1 = r_1_St_9_On;
    if (v_204) {
      s_1_St_9_On_1 = true;
    } else {
      s_1_St_9_On_1 = false;
    };
    s_1_1 = s_1_St_9_On_1;
  };
  ck_25_1 = s_1_1;
  if (ck_25_1) {
    light_source_status_St_9_Off = 0;
    nr_1_St_9_Off = false;
    ns_1_St_9_Off_1 = true;
    light_source_status = light_source_status_St_9_Off;
    nr_1 = nr_1_St_9_Off;
    ns_1_1 = ns_1_St_9_Off_1;
  } else {
    light_source_status_St_9_On = 1;
    light_source_status = light_source_status_St_9_On;
    nr_1_St_9_On = false;
    nr_1 = nr_1_St_9_On;
    ns_1_St_9_On_1 = false;
    ns_1_1 = ns_1_St_9_On_1;
  };
  _out->light_status = light_source_status;
  v_106 = (_out->light_status<=1);
  v_111 = (_out->light_status==1);
  v_113 = (_out->light_status>=2);
  v_122 = (_out->light_status<=1);
  v_127 = (_out->light_status==1);
  v_129 = (v_127||v_128);
  v_132 = (_out->light_status>=2);
  v_140 = (_out->light_status<=1);
  v_143 = (_out->light_status==1);
  v_153 = (_out->light_status==1);
  v_154 = !(v_153);
  if (ck_22_1) {
    ck_22_2_1 = ck_22_2;
    if (ck_22_2_1) {
      v_192 = !(c2);
      if (v_192) {
        v_194 = true;
        v_193_1 = false;
        v_193_2 = false;
      } else {
        v_194 = self->pnr_2;
        v_193_1 = true;
        v_193_2 = true;
      };
      v_191 = !(c1);
      if (v_191) {
        r_2_St_10_Max = true;
      } else {
        r_2_St_10_Max = v_194;
      };
      v_244 = r_2_St_10_Max;
      if (v_191) {
        s_2_St_10_Max_1 = true;
      } else {
        s_2_St_10_Max_1 = v_193_1;
      };
      v_240 = s_2_St_10_Max_1;
      if (v_191) {
        s_2_St_10_Max_2 = false;
      } else {
        s_2_St_10_Max_2 = v_193_2;
      };
      v_241 = s_2_St_10_Max_2;
    } else {
      v_196 = !(c2);
      if (v_196) {
        v_198 = true;
        v_197_1 = true;
        v_197_2 = true;
      } else {
        v_198 = self->pnr_2;
        v_197_1 = true;
        v_197_2 = false;
      };
      v_195 = !(c1);
      if (v_195) {
        r_2_St_10_Min = true;
        s_2_St_10_Min_1 = false;
        s_2_St_10_Min_2 = false;
      } else {
        r_2_St_10_Min = v_198;
        s_2_St_10_Min_1 = v_197_1;
        s_2_St_10_Min_2 = v_197_2;
      };
      v_244 = r_2_St_10_Min;
      v_240 = s_2_St_10_Min_1;
      v_241 = s_2_St_10_Min_2;
    };
    s_2_1 = v_240;
    s_2_2 = v_241;
    r_2 = v_244;
  } else {
    ck_22_2_0 = ck_22_2;
    if (ck_22_2_0) {
      v_245 = true;
      v_242 = true;
      v_243 = true;
    } else {
      v_199 = !(c2);
      if (v_199) {
        v_201 = true;
      } else {
        v_201 = self->pnr_2;
      };
      if (c1) {
        r_2_St_10_Off = true;
      } else {
        r_2_St_10_Off = v_201;
      };
      v_245 = r_2_St_10_Off;
      if (v_199) {
        v_200_1 = true;
      } else {
        v_200_1 = false;
      };
      if (c1) {
        s_2_St_10_Off_1 = true;
      } else {
        s_2_St_10_Off_1 = v_200_1;
      };
      v_242 = s_2_St_10_Off_1;
      if (v_199) {
        v_200_2 = true;
      } else {
        v_200_2 = false;
      };
      if (c1) {
        s_2_St_10_Off_2 = false;
      } else {
        s_2_St_10_Off_2 = v_200_2;
      };
      v_243 = s_2_St_10_Off_2;
      if (v_200_1) {
        v_200_2_1 = v_200_2;
      } else {
        v_200_2_0 = v_200_2;
      };
      if (s_2_St_10_Off_1) {
        s_2_St_10_Off_2_1 = s_2_St_10_Off_2;
      } else {
        s_2_St_10_Off_2_0 = s_2_St_10_Off_2;
      };
    };
    s_2_1 = v_242;
    s_2_2 = v_243;
    r_2 = v_245;
  };
  ck_23_1 = s_2_1;
  ck_23_2 = s_2_2;
  if (ck_23_1) {
    ck_23_2_1 = ck_23_2;
    if (ck_23_2_1) {
      air_status_1_St_10_Max = 2;
      v_230 = air_status_1_St_10_Max;
      nr_2_St_10_Max = false;
      v_236 = nr_2_St_10_Max;
      ns_2_St_10_Max_1 = true;
      v_232 = ns_2_St_10_Max_1;
      ns_2_St_10_Max_2 = true;
      v_233 = ns_2_St_10_Max_2;
    } else {
      air_status_1_St_10_Min = 1;
      nr_2_St_10_Min = false;
      ns_2_St_10_Min_1 = true;
      ns_2_St_10_Min_2 = false;
      v_230 = air_status_1_St_10_Min;
      v_236 = nr_2_St_10_Min;
      v_232 = ns_2_St_10_Min_1;
      v_233 = ns_2_St_10_Min_2;
    };
    air_status_1 = v_230;
    ns_2_1 = v_232;
    ns_2_2 = v_233;
    nr_2 = v_236;
  } else {
    ck_23_2_0 = ck_23_2;
    if (ck_23_2_0) {
      v_231 = 0;
      v_237 = true;
      v_234 = true;
      v_235 = true;
    } else {
      air_status_1_St_10_Off = 0;
      v_231 = air_status_1_St_10_Off;
      nr_2_St_10_Off = false;
      v_237 = nr_2_St_10_Off;
      ns_2_St_10_Off_1 = false;
      v_234 = ns_2_St_10_Off_1;
      ns_2_St_10_Off_2 = false;
      v_235 = ns_2_St_10_Off_2;
      if (ns_2_St_10_Off_1) {
        ns_2_St_10_Off_2_1 = ns_2_St_10_Off_2;
      } else {
        ns_2_St_10_Off_2_0 = ns_2_St_10_Off_2;
      };
    };
    air_status_1 = v_231;
    ns_2_1 = v_234;
    ns_2_2 = v_235;
    nr_2 = v_237;
  };
  _out->air_status = air_status_1;
  v_35 = (_out->air_status>=3);
  v_51 = (_out->air_status>=3);
  v_60 = (_out->air_status>=3);
  v_72 = (_out->air_status>=3);
  v_90 = (_out->air_status<=2);
  v_93 = (_out->air_status==1);
  v_101 = (_out->air_status<=2);
  v_104 = (_out->air_status==2);
  v_148 = (_out->air_status==1);
  v_149 = !(v_148);
  v_150 = (_out->air_status==2);
  v_151 = !(v_150);
  v_152 = (v_149&&v_151);
  v_155 = (v_152&&v_154);
  v_158 = (v_155&&v_157);
  if (ns_2_1) {
    ns_2_2_1 = ns_2_2;
  } else {
    ns_2_2_0 = ns_2_2;
  };
  if (ck_23_1) {
    if (ck_23_2_1) {
      if (ns_2_St_10_Max_1) {
        ns_2_St_10_Max_2_1 = ns_2_St_10_Max_2;
      } else {
        ns_2_St_10_Max_2_0 = ns_2_St_10_Max_2;
      };
    } else {
      if (ns_2_St_10_Min_1) {
        ns_2_St_10_Min_2_1 = ns_2_St_10_Min_2;
      } else {
        ns_2_St_10_Min_2_0 = ns_2_St_10_Min_2;
      };
    };
  };
  if (s_2_1) {
    s_2_2_1 = s_2_2;
  } else {
    s_2_2_0 = s_2_2;
  };
  if (ck_22_1) {
    if (ck_22_2_1) {
      if (v_193_1) {
        v_193_2_1 = v_193_2;
      } else {
        v_193_2_0 = v_193_2;
      };
      if (s_2_St_10_Max_1) {
        s_2_St_10_Max_2_1 = s_2_St_10_Max_2;
      } else {
        s_2_St_10_Max_2_0 = s_2_St_10_Max_2;
      };
    } else {
      if (v_197_1) {
        v_197_2_1 = v_197_2;
      } else {
        v_197_2_0 = v_197_2;
      };
      if (s_2_St_10_Min_1) {
        s_2_St_10_Min_2_1 = s_2_St_10_Min_2;
      } else {
        s_2_St_10_Min_2_0 = s_2_St_10_Min_2;
      };
    };
  };
  if (self->ck_20_1) {
    v_190 = !(c_3);
    if (v_190) {
      r_3_St_11_Closed = true;
      s_3_St_11_Closed_1 = false;
    } else {
      r_3_St_11_Closed = self->pnr_3;
      s_3_St_11_Closed_1 = true;
    };
    r_3 = r_3_St_11_Closed;
    s_3_1 = s_3_St_11_Closed_1;
  } else {
    if (c_3) {
      r_3_St_11_Open = true;
    } else {
      r_3_St_11_Open = self->pnr_3;
    };
    r_3 = r_3_St_11_Open;
    if (c_3) {
      s_3_St_11_Open_1 = true;
    } else {
      s_3_St_11_Open_1 = false;
    };
    s_3_1 = s_3_St_11_Open_1;
  };
  ck_21_1 = s_3_1;
  if (ck_21_1) {
    window_status_1_St_11_Closed = 0;
    nr_3_St_11_Closed = false;
    ns_3_St_11_Closed_1 = true;
    window_status_1 = window_status_1_St_11_Closed;
    nr_3 = nr_3_St_11_Closed;
    ns_3_1 = ns_3_St_11_Closed_1;
  } else {
    window_status_1_St_11_Open = 1;
    window_status_1 = window_status_1_St_11_Open;
    nr_3_St_11_Open = false;
    nr_3 = nr_3_St_11_Open;
    ns_3_St_11_Open_1 = false;
    ns_3_1 = ns_3_St_11_Open_1;
  };
  _out->window_status = window_status_1;
  v_39 = (_out->window_status<=1);
  v_45 = (_out->window_status==1);
  v_46 = (v_44&&v_45);
  v_53 = (_out->window_status>=2);
  v_67 = (_out->window_status==1);
  v_68 = !(v_67);
  v_76 = (_out->window_status<=1);
  v_82 = (_out->window_status==1);
  v_83 = (v_81&&v_82);
  v_97 = (_out->window_status==1);
  v_98 = !(v_97);
  v_165 = (_out->window_status==1);
  v_166 = !(v_165);
  if (self->ck_18_1) {
    v_189 = !(c_2);
    if (v_189) {
      r_4_St_12_Locked = true;
      s_4_St_12_Locked_1 = false;
    } else {
      r_4_St_12_Locked = self->pnr_4;
      s_4_St_12_Locked_1 = true;
    };
    r_4 = r_4_St_12_Locked;
    s_4_1 = s_4_St_12_Locked_1;
  } else {
    if (c_2) {
      r_4_St_12_Open = true;
    } else {
      r_4_St_12_Open = self->pnr_4;
    };
    r_4 = r_4_St_12_Open;
    if (c_2) {
      s_4_St_12_Open_1 = true;
    } else {
      s_4_St_12_Open_1 = false;
    };
    s_4_1 = s_4_St_12_Open_1;
  };
  ck_19_1 = s_4_1;
  if (ck_19_1) {
    closet_status_1_St_12_Locked = 0;
    nr_4_St_12_Locked = false;
    ns_4_St_12_Locked_1 = true;
    closet_status_1 = closet_status_1_St_12_Locked;
    nr_4 = nr_4_St_12_Locked;
    ns_4_1 = ns_4_St_12_Locked_1;
  } else {
    closet_status_1_St_12_Open = 1;
    closet_status_1 = closet_status_1_St_12_Open;
    nr_4_St_12_Open = false;
    nr_4 = nr_4_St_12_Open;
    ns_4_St_12_Open_1 = false;
    ns_4_1 = ns_4_St_12_Open_1;
  };
  _out->closet_status = closet_status_1;
  v_17 = (_out->closet_status<=1);
  v_20 = (_out->closet_status==0);
  v_21 = (_out->closet_status<=1);
  v_24 = (_out->closet_status==1);
  v_168 = (_out->closet_status==1);
  v_169 = !(v_168);
  if (self->ck_16_1) {
    v_188 = !(c_1);
    if (v_188) {
      r_5_St_13_Closed = true;
      s_5_St_13_Closed_1 = false;
    } else {
      r_5_St_13_Closed = self->pnr_5;
      s_5_St_13_Closed_1 = true;
    };
    r_5 = r_5_St_13_Closed;
    s_5_1 = s_5_St_13_Closed_1;
  } else {
    v_187 = !(c_1);
    if (v_187) {
      r_5_St_13_Open = true;
    } else {
      r_5_St_13_Open = self->pnr_5;
    };
    r_5 = r_5_St_13_Open;
    if (v_187) {
      s_5_St_13_Open_1 = true;
    } else {
      s_5_St_13_Open_1 = false;
    };
    s_5_1 = s_5_St_13_Open_1;
  };
  ck_17_1 = s_5_1;
  if (ck_17_1) {
    door_status_1_St_13_Closed = 0;
    nr_5_St_13_Closed = false;
    ns_5_St_13_Closed_1 = true;
    door_status_1 = door_status_1_St_13_Closed;
    nr_5 = nr_5_St_13_Closed;
    ns_5_1 = ns_5_St_13_Closed_1;
  } else {
    door_status_1_St_13_Open = 1;
    door_status_1 = door_status_1_St_13_Open;
    nr_5_St_13_Open = false;
    nr_5 = nr_5_St_13_Open;
    ns_5_St_13_Open_1 = false;
    ns_5_1 = ns_5_St_13_Open_1;
  };
  _out->door_status = door_status_1;
  v_41 = (_out->door_status>=2);
  v_47 = (_out->door_status==1);
  v_48 = !(v_47);
  v_49 = (v_46&&v_48);
  v_55 = (_out->door_status<=1);
  v_58 = (_out->door_status==1);
  v_64 = (_out->door_status<=1);
  v_69 = (_out->door_status==1);
  v_70 = (v_68&&v_69);
  v_78 = (_out->door_status<=1);
  v_84 = (_out->door_status==1);
  v_85 = (v_83&&v_84);
  v_94 = (_out->door_status==1);
  v_95 = !(v_94);
  v_96 = (v_93&&v_95);
  v_99 = (v_96&&v_98);
  v_159 = (_out->door_status==1);
  v_160 = !(v_159);
  v_161 = (v_158&&v_160);
  if (self->ck_14_1) {
    if (c) {
      r_6_St_14_Off = true;
      s_6_St_14_Off_1 = false;
    } else {
      r_6_St_14_Off = self->pnr_6;
      s_6_St_14_Off_1 = true;
    };
    r_6 = r_6_St_14_Off;
    s_6_1 = s_6_St_14_Off_1;
  } else {
    v_186 = !(c);
    if (v_186) {
      r_6_St_14_On = true;
    } else {
      r_6_St_14_On = self->pnr_6;
    };
    r_6 = r_6_St_14_On;
    if (v_186) {
      s_6_St_14_On_1 = true;
    } else {
      s_6_St_14_On_1 = false;
    };
    s_6_1 = s_6_St_14_On_1;
  };
  ck_15_1 = s_6_1;
  if (ck_15_1) {
    computer_on_St_14_Off = 0;
    nr_6_St_14_Off = false;
    ns_6_St_14_Off_1 = true;
    computer_on = computer_on_St_14_Off;
    nr_6 = nr_6_St_14_Off;
    ns_6_1 = ns_6_St_14_Off_1;
  } else {
    computer_on_St_14_On = 1;
    computer_on = computer_on_St_14_On;
    nr_6_St_14_On = false;
    nr_6 = nr_6_St_14_On;
    ns_6_St_14_On_1 = false;
    ns_6_1 = ns_6_St_14_On_1;
  };
  _out->pc_status = computer_on;
  v_26 = (_out->pc_status<=1);
  v_29 = (_out->pc_status==0);
  v_30 = (_out->pc_status<=1);
  v_33 = (_out->pc_status==1);
  v_162 = (_out->pc_status==1);
  v_163 = !(v_162);
  v_164 = (v_161&&v_163);
  v_167 = (v_164&&v_166);
  v_170 = (v_167&&v_169);
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
  v_18 = (v&&v_17);
  v_19 = !(v_18);
  rule8_5 = (v_19||v_20);
  v_22 = (_out->cleaner_presence&&v_21);
  v_23 = !(v_22);
  rule8 = (v_23||v_24);
  v_145 = !(_out->cleaner_presence);
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
  v_25 = !(_out->worker_presence);
  v_27 = (v_25&&v_26);
  v_28 = !(v_27);
  rule7_5 = (v_28||v_29);
  v_31 = (_out->worker_presence&&v_30);
  v_32 = !(v_31);
  rule7 = (v_32||v_33);
  v_34 = (_out->worker_presence||_out->cleaner_presence);
  v_36 = (v_34&&v_35);
  v_38 = (v_36&&v_37);
  v_40 = (v_38&&v_39);
  v_42 = (v_40&&v_41);
  v_43 = !(v_42);
  rule6_4 = (v_43||v_49);
  v_50 = (_out->worker_presence||_out->cleaner_presence);
  v_52 = (v_50&&v_51);
  v_54 = (v_52&&v_53);
  v_56 = (v_54&&v_55);
  v_57 = !(v_56);
  rule6_3 = (v_57||v_58);
  v_59 = (_out->worker_presence||_out->cleaner_presence);
  v_61 = (v_59&&v_60);
  v_63 = (v_61&&v_62);
  v_65 = (v_63&&v_64);
  v_66 = !(v_65);
  rule6_2 = (v_66||v_70);
  v_71 = (_out->worker_presence||_out->cleaner_presence);
  v_73 = (v_71&&v_72);
  v_75 = (v_73&&v_74);
  v_77 = (v_75&&v_76);
  v_79 = (v_77&&v_78);
  v_80 = !(v_79);
  rule6_1 = (v_80||v_85);
  v_86 = (_out->worker_presence&&_out->cleaner_presence);
  v_87 = !(v_86);
  v_88 = (_out->worker_presence||_out->cleaner_presence);
  v_89 = (v_87&&v_88);
  v_91 = (v_89&&v_90);
  v_92 = !(v_91);
  rule6 = (v_92||v_99);
  v_100 = (_out->worker_presence&&_out->cleaner_presence);
  v_102 = (v_100&&v_101);
  v_103 = !(v_102);
  rule5 = (v_103||v_104);
  v_105 = (_out->worker_presence||_out->cleaner_presence);
  v_107 = (v_105&&v_106);
  v_109 = (v_107&&v_108);
  v_110 = !(v_109);
  rule1_2 = (v_110||v_111);
  v_112 = (_out->worker_presence||_out->cleaner_presence);
  v_114 = (v_112&&v_113);
  v_116 = (v_114&&v_115);
  v_117 = !(v_116);
  rule1_1 = (v_117||v_118);
  v_119 = (_out->worker_presence||_out->cleaner_presence);
  v_130 = (_out->worker_presence||_out->cleaner_presence);
  v_138 = (_out->worker_presence||_out->cleaner_presence);
  v_144 = !(_out->worker_presence);
  v_146 = (v_144&&v_145);
  v_147 = !(v_146);
  rule0 = (v_147||v_170);
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
  v_120 = !(_out->night);
  v_121 = (v_119&&v_120);
  v_123 = (v_121&&v_122);
  v_125 = (v_123&&v_124);
  v_126 = !(v_125);
  rule2 = (v_126||v_129);
  v_131 = (v_130&&_out->night);
  v_133 = (v_131&&v_132);
  v_135 = (v_133&&v_134);
  v_136 = !(v_135);
  rule1_3 = (v_136||v_137);
  v_139 = (v_138&&_out->night);
  v_141 = (v_139&&v_140);
  v_142 = !(v_141);
  rule1 = (v_142||v_143);
  v_171 = (rule0&&rule1);
  v_172 = (v_171&&rule1_3);
  v_173 = (v_172&&rule2);
  v_174 = (v_173&&rule1_1);
  v_175 = (v_174&&rule1_2);
  v_176 = (v_175&&rule5);
  v_177 = (v_176&&rule6);
  v_178 = (v_177&&rule6_1);
  v_179 = (v_178&&rule6_2);
  v_180 = (v_179&&rule6_3);
  v_181 = (v_180&&rule6_4);
  v_182 = (v_181&&rule7);
  v_183 = (v_182&&rule7_5);
  v_184 = (v_183&&rule8);
  v_185 = (v_184&&rule8_5);
  self->pnr = nr;
  self->ck_26_1 = ns_1_2;
  self->pnr_1 = nr_1;
  self->ck_24_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->v_238 = ns_2_1;
  self->v_239 = ns_2_2;
  self->pnr_3 = nr_3;
  self->ck_20_1 = ns_3_1;
  self->pnr_4 = nr_4;
  self->ck_18_1 = ns_4_1;
  self->pnr_5 = nr_5;
  self->ck_16_1 = ns_5_1;
  self->pnr_6 = nr_6;
  self->ck_14_1 = ns_6_1;
  self->pnr_7 = nr_7;
  self->ck_12_1 = ns_7_1;
  self->pnr_8 = nr_8;
  self->ck_10_1 = ns_8_1;
  self->pnr_9 = nr_9;
  self->ck_1 = ns_9_1;;
}

