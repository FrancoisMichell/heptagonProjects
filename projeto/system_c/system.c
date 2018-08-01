/* --- Generated the 1/8/2018 at 10:59 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
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
    door_open_St_1_Closed = 0;
    nr_St_1_Closed = false;
    ns_St_1_Closed_1 = true;
    _out->door_open = door_open_St_1_Closed;
    nr = nr_St_1_Closed;
    ns_1 = ns_St_1_Closed_1;
  } else {
    door_open_St_1_Open = 1;
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
    closet_open_St_2_Locked = 0;
    nr_St_2_Locked = false;
    ns_St_2_Locked_1 = true;
    _out->closet_open = closet_open_St_2_Locked;
    nr = nr_St_2_Locked;
    ns_1 = ns_St_2_Locked_1;
  } else {
    closet_open_St_2_Open = 1;
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
  int v_7;
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
    v_7 = !(c);
    if (v_7) {
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
    computer_on_St_4_Off = 0;
    nr_St_4_Off = false;
    ns_St_4_Off_1 = true;
    _out->computer_on = computer_on_St_4_Off;
    nr = nr_St_4_Off;
    ns_1 = ns_St_4_Off_1;
  } else {
    computer_on_St_4_On = 1;
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
    window_open_St_5_Closed = 0;
    nr_St_5_Closed = false;
    ns_St_5_Closed_1 = true;
    _out->window_open = window_open_St_5_Closed;
    nr = nr_St_5_Closed;
    ns_1 = ns_St_5_Closed_1;
  } else {
    window_open_St_5_Open = 1;
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
  self->v_149 = false;
  self->v_150 = false;
}

void System__air_conditioner_step(int c1, int c2,
                                  System__air_conditioner_out* _out,
                                  System__air_conditioner_mem* self) {
  
  int v_148;
  int v_147;
  int v_146;
  int v_145;
  int v_144;
  int v_143;
  int v_142;
  int v_141;
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
  int v_17_2_0;
  int v_17_2_1;
  int v_18;
  int v_17_2;
  int v_17_1;
  int v_16;
  int v_15;
  int v_13_2_0;
  int v_13_2_1;
  int v_14;
  int v_13_2;
  int v_13_1;
  int v_12;
  int v_11;
  int v_9_2_0;
  int v_9_2_1;
  int v_10;
  int v_9_2;
  int v_9_1;
  int v_8;
  int v;
  int v_156;
  int v_155;
  int v_154;
  int v_153;
  int v_152;
  int v_151;
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
  ck_1 = self->v_149;
  ck_2 = self->v_150;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_8 = !(c2);
      if (v_8) {
        v_10 = true;
        v_9_1 = false;
        v_9_2 = false;
      } else {
        v_10 = self->pnr;
        v_9_1 = true;
        v_9_2 = true;
      };
      v = !(c1);
      if (v) {
        r_St_6_Max = true;
      } else {
        r_St_6_Max = v_10;
      };
      v_155 = r_St_6_Max;
      if (v) {
        s_St_6_Max_1 = true;
      } else {
        s_St_6_Max_1 = v_9_1;
      };
      v_151 = s_St_6_Max_1;
      if (v) {
        s_St_6_Max_2 = false;
      } else {
        s_St_6_Max_2 = v_9_2;
      };
      v_152 = s_St_6_Max_2;
    } else {
      v_12 = !(c2);
      if (v_12) {
        v_14 = true;
        v_13_1 = true;
        v_13_2 = true;
      } else {
        v_14 = self->pnr;
        v_13_1 = true;
        v_13_2 = false;
      };
      v_11 = !(c1);
      if (v_11) {
        r_St_6_Min = true;
        s_St_6_Min_1 = false;
        s_St_6_Min_2 = false;
      } else {
        r_St_6_Min = v_14;
        s_St_6_Min_1 = v_13_1;
        s_St_6_Min_2 = v_13_2;
      };
      v_155 = r_St_6_Min;
      v_151 = s_St_6_Min_1;
      v_152 = s_St_6_Min_2;
    };
    s_1 = v_151;
    s_2 = v_152;
    r = v_155;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_156 = true;
      v_153 = true;
      v_154 = true;
    } else {
      v_16 = !(c2);
      if (v_16) {
        v_18 = true;
        v_17_1 = true;
        v_17_2 = true;
      } else {
        v_18 = self->pnr;
        v_17_1 = false;
        v_17_2 = false;
      };
      v_15 = !(c1);
      if (v_15) {
        r_St_6_Off = true;
      } else {
        r_St_6_Off = v_18;
      };
      v_156 = r_St_6_Off;
      if (v_15) {
        s_St_6_Off_1 = true;
      } else {
        s_St_6_Off_1 = v_17_1;
      };
      v_153 = s_St_6_Off_1;
      if (v_15) {
        s_St_6_Off_2 = false;
      } else {
        s_St_6_Off_2 = v_17_2;
      };
      v_154 = s_St_6_Off_2;
      if (v_17_1) {
        v_17_2_1 = v_17_2;
      } else {
        v_17_2_0 = v_17_2;
      };
      if (s_St_6_Off_1) {
        s_St_6_Off_2_1 = s_St_6_Off_2;
      } else {
        s_St_6_Off_2_0 = s_St_6_Off_2;
      };
    };
    s_1 = v_153;
    s_2 = v_154;
    r = v_156;
  };
  ck_7_1 = s_1;
  ck_7_2 = s_2;
  if (ck_7_1) {
    ck_7_2_1 = ck_7_2;
    if (ck_7_2_1) {
      air_state_St_6_Max = 2;
      v_141 = air_state_St_6_Max;
      nr_St_6_Max = false;
      v_147 = nr_St_6_Max;
      ns_St_6_Max_1 = true;
      v_143 = ns_St_6_Max_1;
      ns_St_6_Max_2 = true;
      v_144 = ns_St_6_Max_2;
    } else {
      air_state_St_6_Min = 1;
      nr_St_6_Min = false;
      ns_St_6_Min_1 = true;
      ns_St_6_Min_2 = false;
      v_141 = air_state_St_6_Min;
      v_147 = nr_St_6_Min;
      v_143 = ns_St_6_Min_1;
      v_144 = ns_St_6_Min_2;
    };
    _out->air_state = v_141;
    ns_1 = v_143;
    ns_2 = v_144;
    nr = v_147;
  } else {
    ck_7_2_0 = ck_7_2;
    if (ck_7_2_0) {
      v_142 = 0;
      v_148 = true;
      v_145 = true;
      v_146 = true;
    } else {
      air_state_St_6_Off = 0;
      v_142 = air_state_St_6_Off;
      nr_St_6_Off = false;
      v_148 = nr_St_6_Off;
      ns_St_6_Off_1 = false;
      v_145 = ns_St_6_Off_1;
      ns_St_6_Off_2 = false;
      v_146 = ns_St_6_Off_2;
      if (ns_St_6_Off_1) {
        ns_St_6_Off_2_1 = ns_St_6_Off_2;
      } else {
        ns_St_6_Off_2_0 = ns_St_6_Off_2;
      };
    };
    _out->air_state = v_142;
    ns_1 = v_145;
    ns_2 = v_146;
    nr = v_148;
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
      if (v_9_1) {
        v_9_2_1 = v_9_2;
      } else {
        v_9_2_0 = v_9_2;
      };
      if (s_St_6_Max_1) {
        s_St_6_Max_2_1 = s_St_6_Max_2;
      } else {
        s_St_6_Max_2_0 = s_St_6_Max_2;
      };
    } else {
      if (v_13_1) {
        v_13_2_1 = v_13_2;
      } else {
        v_13_2_0 = v_13_2;
      };
      if (s_St_6_Min_1) {
        s_St_6_Min_2_1 = s_St_6_Min_2;
      } else {
        s_St_6_Min_2_0 = s_St_6_Min_2;
      };
    };
  };
  self->pnr = nr;
  self->v_149 = ns_1;
  self->v_150 = ns_2;;
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

void System__light_source_fail_reset(System__light_source_fail_mem* self) {
  self->pnr = false;
  self->ck_12_1 = false;
  self->pnr_1 = false;
  self->ck_10_1 = true;
}

void System__light_source_fail_step(int sw, int c1, int c2,
                                    int failed_recovered,
                                    System__light_source_fail_out* _out,
                                    System__light_source_fail_mem* self) {
  
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
  int nr_1_St_10_On;
  int ns_1_St_10_On_1;
  int light_source_on_St_10_On;
  int nr_1_St_10_Off;
  int ns_1_St_10_Off_1;
  int light_source_on_St_10_Off;
  int ck_11_1;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v;
  int r_1_St_10_On;
  int s_1_St_10_On_1;
  int r_1_St_10_Off;
  int s_1_St_10_Off_1;
  int out_false;
  int out_true;
  int ck;
  int s_1_1;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_1_2;
  int ns_1_2;
  int r;
  int nr;
  int failed_recovered_1;
  int failed_1;
  int sw_1;
  int c1_1;
  int c2_1;
  int light_source_on;
  int light_source;
  int failed;
  failed_recovered_1 = failed_recovered;
  sw_1 = sw;
  c1_1 = c1;
  c2_1 = c2;
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
    s_1_2 = s_St_9_Falha_1;
  } else {
    if (failed_recovered_1) {
      r_St_9_Funcionando = true;
      s_St_9_Funcionando_1 = true;
    } else {
      r_St_9_Funcionando = self->pnr;
      s_St_9_Funcionando_1 = false;
    };
    r = r_St_9_Funcionando;
    s_1_2 = s_St_9_Funcionando_1;
  };
  ck_13_1 = s_1_2;
  if (ck_13_1) {
    failed_1_St_9_Falha = true;
    failed_1 = failed_1_St_9_Falha;
    nr_St_9_Falha = false;
    nr = nr_St_9_Falha;
    ns_St_9_Falha_1 = true;
    ns_1_2 = ns_St_9_Falha_1;
  } else {
    failed_1_St_9_Funcionando = false;
    nr_St_9_Funcionando = false;
    ns_St_9_Funcionando_1 = false;
    failed_1 = failed_1_St_9_Funcionando;
    nr = nr_St_9_Funcionando;
    ns_1_2 = ns_St_9_Funcionando_1;
  };
  failed = failed_1;
  ck = failed;
  if (self->ck_10_1) {
    v_22 = !(c2_1);
    v_21 = (c1_1&&sw_1);
    v_23 = (v_21||v_22);
    if (v_23) {
      r_1_St_10_Off = true;
      s_1_St_10_Off_1 = false;
    } else {
      r_1_St_10_Off = self->pnr_1;
      s_1_St_10_Off_1 = true;
    };
    r_1 = r_1_St_10_Off;
    s_1_1 = s_1_St_10_Off_1;
  } else {
    v_19 = !(c2_1);
    v = (c1_1&&sw_1);
    v_20 = (v||v_19);
    if (v_20) {
      r_1_St_10_On = true;
    } else {
      r_1_St_10_On = self->pnr_1;
    };
    r_1 = r_1_St_10_On;
    if (v_20) {
      s_1_St_10_On_1 = true;
    } else {
      s_1_St_10_On_1 = false;
    };
    s_1_1 = s_1_St_10_On_1;
  };
  ck_11_1 = s_1_1;
  if (ck_11_1) {
    light_source_on_St_10_Off = 0;
    nr_1_St_10_Off = false;
    ns_1_St_10_Off_1 = true;
    light_source_on = light_source_on_St_10_Off;
    nr_1 = nr_1_St_10_Off;
    ns_1_1 = ns_1_St_10_Off_1;
  } else {
    light_source_on_St_10_On = 1;
    light_source_on = light_source_on_St_10_On;
    nr_1_St_10_On = false;
    nr_1 = nr_1_St_10_On;
    ns_1_St_10_On_1 = false;
    ns_1_1 = ns_1_St_10_On_1;
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
  self->ck_12_1 = ns_1_2;
  self->pnr_1 = nr_1;
  self->ck_10_1 = ns_1_1;;
}

void System__door_fail_reset(System__door_fail_mem* self) {
  self->pnr = false;
  self->ck_16_1 = false;
  self->pnr_2 = false;
  self->ck_14_1 = true;
}

void System__door_fail_step(int c1, int failed_recovered,
                            System__door_fail_out* _out,
                            System__door_fail_mem* self) {
  
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
  int nr_2_St_12_Open;
  int ns_2_St_12_Open_1;
  int door_open_St_12_Open;
  int nr_2_St_12_Closed;
  int ns_2_St_12_Closed_1;
  int door_open_St_12_Closed;
  int ck_15_1;
  int v_24;
  int v;
  int r_2_St_12_Open;
  int s_2_St_12_Open_1;
  int r_2_St_12_Closed;
  int s_2_St_12_Closed_1;
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
  int c;
  int door_open;
  int door;
  int failed;
  failed_recovered_2 = failed_recovered;
  c = c1;
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
    v_24 = !(c);
    if (v_24) {
      r_2_St_12_Closed = true;
      s_2_St_12_Closed_1 = false;
    } else {
      r_2_St_12_Closed = self->pnr_2;
      s_2_St_12_Closed_1 = true;
    };
    r_2 = r_2_St_12_Closed;
    s_2_1 = s_2_St_12_Closed_1;
  } else {
    v = !(c);
    if (v) {
      r_2_St_12_Open = true;
    } else {
      r_2_St_12_Open = self->pnr_2;
    };
    r_2 = r_2_St_12_Open;
    if (v) {
      s_2_St_12_Open_1 = true;
    } else {
      s_2_St_12_Open_1 = false;
    };
    s_2_1 = s_2_St_12_Open_1;
  };
  ck_15_1 = s_2_1;
  if (ck_15_1) {
    door_open_St_12_Closed = 0;
    nr_2_St_12_Closed = false;
    ns_2_St_12_Closed_1 = true;
    door_open = door_open_St_12_Closed;
    nr_2 = nr_2_St_12_Closed;
    ns_2_1 = ns_2_St_12_Closed_1;
  } else {
    door_open_St_12_Open = 1;
    door_open = door_open_St_12_Open;
    nr_2_St_12_Open = false;
    nr_2 = nr_2_St_12_Open;
    ns_2_St_12_Open_1 = false;
    ns_2_1 = ns_2_St_12_Open_1;
  };
  door = door_open;
  if (ck) {
    out_true = (door+2);
    _out->out = out_true;
  } else {
    out_false = door;
    _out->out = out_false;
  };
  self->pnr = nr;
  self->ck_16_1 = ns_1;
  self->pnr_2 = nr_2;
  self->ck_14_1 = ns_2_1;;
}

void System__closet_fail_reset(System__closet_fail_mem* self) {
  self->pnr = false;
  self->ck_20_1 = false;
  self->pnr_3 = false;
  self->ck_18_1 = true;
}

void System__closet_fail_step(int c1, int failed_recovered,
                              System__closet_fail_out* _out,
                              System__closet_fail_mem* self) {
  
  int nr_St_13_Falha;
  int ns_St_13_Falha_1;
  int failed_3_St_13_Falha;
  int nr_St_13_Funcionando;
  int ns_St_13_Funcionando_1;
  int failed_3_St_13_Funcionando;
  int ck_21_1;
  int r_St_13_Falha;
  int s_St_13_Falha_1;
  int r_St_13_Funcionando;
  int s_St_13_Funcionando_1;
  int nr_3_St_14_Open;
  int ns_3_St_14_Open_1;
  int closet_open_St_14_Open;
  int nr_3_St_14_Locked;
  int ns_3_St_14_Locked_1;
  int closet_open_St_14_Locked;
  int ck_19_1;
  int v;
  int r_3_St_14_Open;
  int s_3_St_14_Open_1;
  int r_3_St_14_Locked;
  int s_3_St_14_Locked_1;
  int out_false;
  int out_true;
  int ck;
  int s_3_1;
  int ns_3_1;
  int r_3;
  int nr_3;
  int s_1;
  int ns_1;
  int r;
  int nr;
  int failed_recovered_3;
  int failed_3;
  int c;
  int closet_open;
  int closet;
  int failed;
  failed_recovered_3 = failed_recovered;
  c = c1;
  if (self->ck_20_1) {
    if (failed_recovered_3) {
      r_St_13_Falha = true;
    } else {
      r_St_13_Falha = self->pnr;
    };
    r = r_St_13_Falha;
    if (failed_recovered_3) {
      s_St_13_Falha_1 = false;
    } else {
      s_St_13_Falha_1 = true;
    };
    s_1 = s_St_13_Falha_1;
  } else {
    if (failed_recovered_3) {
      r_St_13_Funcionando = true;
      s_St_13_Funcionando_1 = true;
    } else {
      r_St_13_Funcionando = self->pnr;
      s_St_13_Funcionando_1 = false;
    };
    r = r_St_13_Funcionando;
    s_1 = s_St_13_Funcionando_1;
  };
  ck_21_1 = s_1;
  if (ck_21_1) {
    failed_3_St_13_Falha = true;
    failed_3 = failed_3_St_13_Falha;
    nr_St_13_Falha = false;
    nr = nr_St_13_Falha;
    ns_St_13_Falha_1 = true;
    ns_1 = ns_St_13_Falha_1;
  } else {
    failed_3_St_13_Funcionando = false;
    nr_St_13_Funcionando = false;
    ns_St_13_Funcionando_1 = false;
    failed_3 = failed_3_St_13_Funcionando;
    nr = nr_St_13_Funcionando;
    ns_1 = ns_St_13_Funcionando_1;
  };
  failed = failed_3;
  ck = failed;
  if (self->ck_18_1) {
    v = !(c);
    if (v) {
      r_3_St_14_Locked = true;
      s_3_St_14_Locked_1 = false;
    } else {
      r_3_St_14_Locked = self->pnr_3;
      s_3_St_14_Locked_1 = true;
    };
    r_3 = r_3_St_14_Locked;
    s_3_1 = s_3_St_14_Locked_1;
  } else {
    if (c) {
      r_3_St_14_Open = true;
    } else {
      r_3_St_14_Open = self->pnr_3;
    };
    r_3 = r_3_St_14_Open;
    if (c) {
      s_3_St_14_Open_1 = true;
    } else {
      s_3_St_14_Open_1 = false;
    };
    s_3_1 = s_3_St_14_Open_1;
  };
  ck_19_1 = s_3_1;
  if (ck_19_1) {
    closet_open_St_14_Locked = 0;
    nr_3_St_14_Locked = false;
    ns_3_St_14_Locked_1 = true;
    closet_open = closet_open_St_14_Locked;
    nr_3 = nr_3_St_14_Locked;
    ns_3_1 = ns_3_St_14_Locked_1;
  } else {
    closet_open_St_14_Open = 1;
    closet_open = closet_open_St_14_Open;
    nr_3_St_14_Open = false;
    nr_3 = nr_3_St_14_Open;
    ns_3_St_14_Open_1 = false;
    ns_3_1 = ns_3_St_14_Open_1;
  };
  closet = closet_open;
  if (ck) {
    out_true = (closet+2);
    _out->out = out_true;
  } else {
    out_false = closet;
    _out->out = out_false;
  };
  self->pnr = nr;
  self->ck_20_1 = ns_1;
  self->pnr_3 = nr_3;
  self->ck_18_1 = ns_3_1;;
}

void System__computer_fail_reset(System__computer_fail_mem* self) {
  self->pnr = false;
  self->ck_24_1 = false;
  self->pnr_4 = false;
  self->ck_22_1 = true;
}

void System__computer_fail_step(int c1, int failed_recovered,
                                System__computer_fail_out* _out,
                                System__computer_fail_mem* self) {
  
  int nr_St_15_Falha;
  int ns_St_15_Falha_1;
  int failed_4_St_15_Falha;
  int nr_St_15_Funcionando;
  int ns_St_15_Funcionando_1;
  int failed_4_St_15_Funcionando;
  int ck_25_1;
  int r_St_15_Falha;
  int s_St_15_Falha_1;
  int r_St_15_Funcionando;
  int s_St_15_Funcionando_1;
  int nr_4_St_16_On;
  int ns_4_St_16_On_1;
  int computer_on_St_16_On;
  int nr_4_St_16_Off;
  int ns_4_St_16_Off_1;
  int computer_on_St_16_Off;
  int ck_23_1;
  int v_25;
  int v;
  int r_4_St_16_On;
  int s_4_St_16_On_1;
  int r_4_St_16_Off;
  int s_4_St_16_Off_1;
  int out_false;
  int out_true;
  int ck;
  int s_4_1;
  int ns_4_1;
  int r_4;
  int nr_4;
  int s_1;
  int ns_1;
  int r;
  int nr;
  int failed_recovered_4;
  int failed_4;
  int c;
  int computer_on;
  int computer;
  int failed;
  failed_recovered_4 = failed_recovered;
  c = c1;
  if (self->ck_24_1) {
    if (failed_recovered_4) {
      r_St_15_Falha = true;
    } else {
      r_St_15_Falha = self->pnr;
    };
    r = r_St_15_Falha;
    if (failed_recovered_4) {
      s_St_15_Falha_1 = false;
    } else {
      s_St_15_Falha_1 = true;
    };
    s_1 = s_St_15_Falha_1;
  } else {
    if (failed_recovered_4) {
      r_St_15_Funcionando = true;
      s_St_15_Funcionando_1 = true;
    } else {
      r_St_15_Funcionando = self->pnr;
      s_St_15_Funcionando_1 = false;
    };
    r = r_St_15_Funcionando;
    s_1 = s_St_15_Funcionando_1;
  };
  ck_25_1 = s_1;
  if (ck_25_1) {
    failed_4_St_15_Falha = true;
    failed_4 = failed_4_St_15_Falha;
    nr_St_15_Falha = false;
    nr = nr_St_15_Falha;
    ns_St_15_Falha_1 = true;
    ns_1 = ns_St_15_Falha_1;
  } else {
    failed_4_St_15_Funcionando = false;
    nr_St_15_Funcionando = false;
    ns_St_15_Funcionando_1 = false;
    failed_4 = failed_4_St_15_Funcionando;
    nr = nr_St_15_Funcionando;
    ns_1 = ns_St_15_Funcionando_1;
  };
  failed = failed_4;
  ck = failed;
  if (self->ck_22_1) {
    v_25 = !(c);
    if (v_25) {
      r_4_St_16_Off = true;
      s_4_St_16_Off_1 = false;
    } else {
      r_4_St_16_Off = self->pnr_4;
      s_4_St_16_Off_1 = true;
    };
    r_4 = r_4_St_16_Off;
    s_4_1 = s_4_St_16_Off_1;
  } else {
    v = !(c);
    if (v) {
      r_4_St_16_On = true;
    } else {
      r_4_St_16_On = self->pnr_4;
    };
    r_4 = r_4_St_16_On;
    if (v) {
      s_4_St_16_On_1 = true;
    } else {
      s_4_St_16_On_1 = false;
    };
    s_4_1 = s_4_St_16_On_1;
  };
  ck_23_1 = s_4_1;
  if (ck_23_1) {
    computer_on_St_16_Off = 0;
    nr_4_St_16_Off = false;
    ns_4_St_16_Off_1 = true;
    computer_on = computer_on_St_16_Off;
    nr_4 = nr_4_St_16_Off;
    ns_4_1 = ns_4_St_16_Off_1;
  } else {
    computer_on_St_16_On = 1;
    computer_on = computer_on_St_16_On;
    nr_4_St_16_On = false;
    nr_4 = nr_4_St_16_On;
    ns_4_St_16_On_1 = false;
    ns_4_1 = ns_4_St_16_On_1;
  };
  computer = computer_on;
  if (ck) {
    out_true = (computer+2);
    _out->out = out_true;
  } else {
    out_false = computer;
    _out->out = out_false;
  };
  self->pnr = nr;
  self->ck_24_1 = ns_1;
  self->pnr_4 = nr_4;
  self->ck_22_1 = ns_4_1;;
}

void System__window_fail_reset(System__window_fail_mem* self) {
  self->pnr = false;
  self->ck_28_1 = false;
  self->pnr_5 = false;
  self->ck_26_1 = true;
}

void System__window_fail_step(int c1, int failed_recovered,
                              System__window_fail_out* _out,
                              System__window_fail_mem* self) {
  
  int nr_St_17_Falha;
  int ns_St_17_Falha_1;
  int failed_5_St_17_Falha;
  int nr_St_17_Funcionando;
  int ns_St_17_Funcionando_1;
  int failed_5_St_17_Funcionando;
  int ck_29_1;
  int r_St_17_Falha;
  int s_St_17_Falha_1;
  int r_St_17_Funcionando;
  int s_St_17_Funcionando_1;
  int nr_5_St_18_Open;
  int ns_5_St_18_Open_1;
  int window_open_St_18_Open;
  int nr_5_St_18_Closed;
  int ns_5_St_18_Closed_1;
  int window_open_St_18_Closed;
  int ck_27_1;
  int v;
  int r_5_St_18_Open;
  int s_5_St_18_Open_1;
  int r_5_St_18_Closed;
  int s_5_St_18_Closed_1;
  int out_false;
  int out_true;
  int ck;
  int s_5_1;
  int ns_5_1;
  int r_5;
  int nr_5;
  int s_1;
  int ns_1;
  int r;
  int nr;
  int failed_recovered_5;
  int failed_5;
  int c;
  int window_open;
  int window;
  int failed;
  failed_recovered_5 = failed_recovered;
  c = c1;
  if (self->ck_28_1) {
    if (failed_recovered_5) {
      r_St_17_Falha = true;
    } else {
      r_St_17_Falha = self->pnr;
    };
    r = r_St_17_Falha;
    if (failed_recovered_5) {
      s_St_17_Falha_1 = false;
    } else {
      s_St_17_Falha_1 = true;
    };
    s_1 = s_St_17_Falha_1;
  } else {
    if (failed_recovered_5) {
      r_St_17_Funcionando = true;
      s_St_17_Funcionando_1 = true;
    } else {
      r_St_17_Funcionando = self->pnr;
      s_St_17_Funcionando_1 = false;
    };
    r = r_St_17_Funcionando;
    s_1 = s_St_17_Funcionando_1;
  };
  ck_29_1 = s_1;
  if (ck_29_1) {
    failed_5_St_17_Falha = true;
    failed_5 = failed_5_St_17_Falha;
    nr_St_17_Falha = false;
    nr = nr_St_17_Falha;
    ns_St_17_Falha_1 = true;
    ns_1 = ns_St_17_Falha_1;
  } else {
    failed_5_St_17_Funcionando = false;
    nr_St_17_Funcionando = false;
    ns_St_17_Funcionando_1 = false;
    failed_5 = failed_5_St_17_Funcionando;
    nr = nr_St_17_Funcionando;
    ns_1 = ns_St_17_Funcionando_1;
  };
  failed = failed_5;
  ck = failed;
  if (self->ck_26_1) {
    v = !(c);
    if (v) {
      r_5_St_18_Closed = true;
      s_5_St_18_Closed_1 = false;
    } else {
      r_5_St_18_Closed = self->pnr_5;
      s_5_St_18_Closed_1 = true;
    };
    r_5 = r_5_St_18_Closed;
    s_5_1 = s_5_St_18_Closed_1;
  } else {
    if (c) {
      r_5_St_18_Open = true;
    } else {
      r_5_St_18_Open = self->pnr_5;
    };
    r_5 = r_5_St_18_Open;
    if (c) {
      s_5_St_18_Open_1 = true;
    } else {
      s_5_St_18_Open_1 = false;
    };
    s_5_1 = s_5_St_18_Open_1;
  };
  ck_27_1 = s_5_1;
  if (ck_27_1) {
    window_open_St_18_Closed = 0;
    nr_5_St_18_Closed = false;
    ns_5_St_18_Closed_1 = true;
    window_open = window_open_St_18_Closed;
    nr_5 = nr_5_St_18_Closed;
    ns_5_1 = ns_5_St_18_Closed_1;
  } else {
    window_open_St_18_Open = 1;
    window_open = window_open_St_18_Open;
    nr_5_St_18_Open = false;
    nr_5 = nr_5_St_18_Open;
    ns_5_St_18_Open_1 = false;
    ns_5_1 = ns_5_St_18_Open_1;
  };
  window = window_open;
  if (ck) {
    out_true = (window+2);
    _out->out = out_true;
  } else {
    out_false = window;
    _out->out = out_false;
  };
  self->pnr = nr;
  self->ck_28_1 = ns_1;
  self->pnr_5 = nr_5;
  self->ck_26_1 = ns_5_1;;
}

void System__air_fail_reset(System__air_fail_mem* self) {
  self->pnr = false;
  self->ck_32_1 = false;
  self->pnr_6 = false;
  self->v_165 = false;
  self->v_166 = false;
}

void System__air_fail_step(int c1, int c2, int failed_recovered,
                           System__air_fail_out* _out,
                           System__air_fail_mem* self) {
  
  int nr_St_19_Falha;
  int ns_St_19_Falha_1;
  int failed_6_St_19_Falha;
  int nr_St_19_Funcionando;
  int ns_St_19_Funcionando_1;
  int failed_6_St_19_Funcionando;
  int ck_33_1;
  int r_St_19_Falha;
  int s_St_19_Falha_1;
  int r_St_19_Funcionando;
  int s_St_19_Funcionando_1;
  int v_164;
  int v_163;
  int v_162;
  int v_161;
  int v_160;
  int v_159;
  int v_158;
  int v_157;
  int ns_6_St_20_Max_2_0;
  int ns_6_St_20_Max_2_1;
  int ns_6_St_20_Min_2_0;
  int ns_6_St_20_Min_2_1;
  int ns_6_St_20_Off_2_0;
  int ns_6_St_20_Off_2_1;
  int ck_31_2_0;
  int ck_31_2_1;
  int nr_6_St_20_Max;
  int ns_6_St_20_Max_2;
  int ns_6_St_20_Max_1;
  int air_state_1_St_20_Max;
  int nr_6_St_20_Min;
  int ns_6_St_20_Min_2;
  int ns_6_St_20_Min_1;
  int air_state_1_St_20_Min;
  int nr_6_St_20_Off;
  int ns_6_St_20_Off_2;
  int ns_6_St_20_Off_1;
  int air_state_1_St_20_Off;
  int ck_31_2;
  int ck_31_1;
  int v_35_2_0;
  int v_35_2_1;
  int v_36;
  int v_35_2;
  int v_35_1;
  int v_34;
  int v_33;
  int v_31_2_0;
  int v_31_2_1;
  int v_32;
  int v_31_2;
  int v_31_1;
  int v_30;
  int v_29;
  int v_27_2_0;
  int v_27_2_1;
  int v_28;
  int v_27_2;
  int v_27_1;
  int v_26;
  int v;
  int v_172;
  int v_171;
  int v_170;
  int v_169;
  int v_168;
  int v_167;
  int s_6_St_20_Max_2_0;
  int s_6_St_20_Max_2_1;
  int s_6_St_20_Min_2_0;
  int s_6_St_20_Min_2_1;
  int s_6_St_20_Off_2_0;
  int s_6_St_20_Off_2_1;
  int ck_30_2_0;
  int ck_30_2_1;
  int r_6_St_20_Max;
  int s_6_St_20_Max_2;
  int s_6_St_20_Max_1;
  int r_6_St_20_Min;
  int s_6_St_20_Min_2;
  int s_6_St_20_Min_1;
  int r_6_St_20_Off;
  int s_6_St_20_Off_2;
  int s_6_St_20_Off_1;
  int ck_30_2;
  int ck_30_1;
  int out_false;
  int out_true;
  int ck;
  int s_6_2_0;
  int s_6_2_1;
  int ns_6_2_0;
  int ns_6_2_1;
  int s_6_2;
  int s_6_1;
  int ns_6_2;
  int ns_6_1;
  int r_6;
  int nr_6;
  int s_1;
  int ns_1;
  int r;
  int nr;
  int failed_recovered_6;
  int failed_6;
  int c1_2;
  int c2_2;
  int air_state_1;
  int air_state;
  int failed;
  failed_recovered_6 = failed_recovered;
  c1_2 = c1;
  c2_2 = c2;
  ck_30_1 = self->v_165;
  ck_30_2 = self->v_166;
  if (self->ck_32_1) {
    if (failed_recovered_6) {
      r_St_19_Falha = true;
    } else {
      r_St_19_Falha = self->pnr;
    };
    r = r_St_19_Falha;
    if (failed_recovered_6) {
      s_St_19_Falha_1 = false;
    } else {
      s_St_19_Falha_1 = true;
    };
    s_1 = s_St_19_Falha_1;
  } else {
    if (failed_recovered_6) {
      r_St_19_Funcionando = true;
      s_St_19_Funcionando_1 = true;
    } else {
      r_St_19_Funcionando = self->pnr;
      s_St_19_Funcionando_1 = false;
    };
    r = r_St_19_Funcionando;
    s_1 = s_St_19_Funcionando_1;
  };
  ck_33_1 = s_1;
  if (ck_33_1) {
    failed_6_St_19_Falha = true;
    failed_6 = failed_6_St_19_Falha;
    nr_St_19_Falha = false;
    nr = nr_St_19_Falha;
    ns_St_19_Falha_1 = true;
    ns_1 = ns_St_19_Falha_1;
  } else {
    failed_6_St_19_Funcionando = false;
    nr_St_19_Funcionando = false;
    ns_St_19_Funcionando_1 = false;
    failed_6 = failed_6_St_19_Funcionando;
    nr = nr_St_19_Funcionando;
    ns_1 = ns_St_19_Funcionando_1;
  };
  failed = failed_6;
  ck = failed;
  if (ck_30_1) {
    ck_30_2_1 = ck_30_2;
    if (ck_30_2_1) {
      v_26 = !(c2_2);
      if (v_26) {
        v_28 = true;
        v_27_1 = false;
        v_27_2 = false;
      } else {
        v_28 = self->pnr_6;
        v_27_1 = true;
        v_27_2 = true;
      };
      v = !(c1_2);
      if (v) {
        r_6_St_20_Max = true;
      } else {
        r_6_St_20_Max = v_28;
      };
      v_171 = r_6_St_20_Max;
      if (v) {
        s_6_St_20_Max_1 = true;
      } else {
        s_6_St_20_Max_1 = v_27_1;
      };
      v_167 = s_6_St_20_Max_1;
      if (v) {
        s_6_St_20_Max_2 = false;
      } else {
        s_6_St_20_Max_2 = v_27_2;
      };
      v_168 = s_6_St_20_Max_2;
    } else {
      v_30 = !(c2_2);
      if (v_30) {
        v_32 = true;
        v_31_1 = true;
        v_31_2 = true;
      } else {
        v_32 = self->pnr_6;
        v_31_1 = true;
        v_31_2 = false;
      };
      v_29 = !(c1_2);
      if (v_29) {
        r_6_St_20_Min = true;
        s_6_St_20_Min_1 = false;
        s_6_St_20_Min_2 = false;
      } else {
        r_6_St_20_Min = v_32;
        s_6_St_20_Min_1 = v_31_1;
        s_6_St_20_Min_2 = v_31_2;
      };
      v_171 = r_6_St_20_Min;
      v_167 = s_6_St_20_Min_1;
      v_168 = s_6_St_20_Min_2;
    };
    s_6_1 = v_167;
    s_6_2 = v_168;
    r_6 = v_171;
  } else {
    ck_30_2_0 = ck_30_2;
    if (ck_30_2_0) {
      v_172 = true;
      v_169 = true;
      v_170 = true;
    } else {
      v_34 = !(c2_2);
      if (v_34) {
        v_36 = true;
        v_35_1 = true;
        v_35_2 = true;
      } else {
        v_36 = self->pnr_6;
        v_35_1 = false;
        v_35_2 = false;
      };
      v_33 = !(c1_2);
      if (v_33) {
        r_6_St_20_Off = true;
      } else {
        r_6_St_20_Off = v_36;
      };
      v_172 = r_6_St_20_Off;
      if (v_33) {
        s_6_St_20_Off_1 = true;
      } else {
        s_6_St_20_Off_1 = v_35_1;
      };
      v_169 = s_6_St_20_Off_1;
      if (v_33) {
        s_6_St_20_Off_2 = false;
      } else {
        s_6_St_20_Off_2 = v_35_2;
      };
      v_170 = s_6_St_20_Off_2;
      if (v_35_1) {
        v_35_2_1 = v_35_2;
      } else {
        v_35_2_0 = v_35_2;
      };
      if (s_6_St_20_Off_1) {
        s_6_St_20_Off_2_1 = s_6_St_20_Off_2;
      } else {
        s_6_St_20_Off_2_0 = s_6_St_20_Off_2;
      };
    };
    s_6_1 = v_169;
    s_6_2 = v_170;
    r_6 = v_172;
  };
  ck_31_1 = s_6_1;
  ck_31_2 = s_6_2;
  if (ck_31_1) {
    ck_31_2_1 = ck_31_2;
    if (ck_31_2_1) {
      air_state_1_St_20_Max = 2;
      v_157 = air_state_1_St_20_Max;
      nr_6_St_20_Max = false;
      v_163 = nr_6_St_20_Max;
      ns_6_St_20_Max_1 = true;
      v_159 = ns_6_St_20_Max_1;
      ns_6_St_20_Max_2 = true;
      v_160 = ns_6_St_20_Max_2;
    } else {
      air_state_1_St_20_Min = 1;
      nr_6_St_20_Min = false;
      ns_6_St_20_Min_1 = true;
      ns_6_St_20_Min_2 = false;
      v_157 = air_state_1_St_20_Min;
      v_163 = nr_6_St_20_Min;
      v_159 = ns_6_St_20_Min_1;
      v_160 = ns_6_St_20_Min_2;
    };
    air_state_1 = v_157;
    ns_6_1 = v_159;
    ns_6_2 = v_160;
    nr_6 = v_163;
  } else {
    ck_31_2_0 = ck_31_2;
    if (ck_31_2_0) {
      v_158 = 0;
      v_164 = true;
      v_161 = true;
      v_162 = true;
    } else {
      air_state_1_St_20_Off = 0;
      v_158 = air_state_1_St_20_Off;
      nr_6_St_20_Off = false;
      v_164 = nr_6_St_20_Off;
      ns_6_St_20_Off_1 = false;
      v_161 = ns_6_St_20_Off_1;
      ns_6_St_20_Off_2 = false;
      v_162 = ns_6_St_20_Off_2;
      if (ns_6_St_20_Off_1) {
        ns_6_St_20_Off_2_1 = ns_6_St_20_Off_2;
      } else {
        ns_6_St_20_Off_2_0 = ns_6_St_20_Off_2;
      };
    };
    air_state_1 = v_158;
    ns_6_1 = v_161;
    ns_6_2 = v_162;
    nr_6 = v_164;
  };
  air_state = air_state_1;
  if (ck) {
    out_true = (air_state+3);
    _out->out = out_true;
  } else {
    out_false = air_state;
    _out->out = out_false;
  };
  if (ns_6_1) {
    ns_6_2_1 = ns_6_2;
  } else {
    ns_6_2_0 = ns_6_2;
  };
  if (ck_31_1) {
    if (ck_31_2_1) {
      if (ns_6_St_20_Max_1) {
        ns_6_St_20_Max_2_1 = ns_6_St_20_Max_2;
      } else {
        ns_6_St_20_Max_2_0 = ns_6_St_20_Max_2;
      };
    } else {
      if (ns_6_St_20_Min_1) {
        ns_6_St_20_Min_2_1 = ns_6_St_20_Min_2;
      } else {
        ns_6_St_20_Min_2_0 = ns_6_St_20_Min_2;
      };
    };
  };
  if (s_6_1) {
    s_6_2_1 = s_6_2;
  } else {
    s_6_2_0 = s_6_2;
  };
  if (ck_30_1) {
    if (ck_30_2_1) {
      if (v_27_1) {
        v_27_2_1 = v_27_2;
      } else {
        v_27_2_0 = v_27_2;
      };
      if (s_6_St_20_Max_1) {
        s_6_St_20_Max_2_1 = s_6_St_20_Max_2;
      } else {
        s_6_St_20_Max_2_0 = s_6_St_20_Max_2;
      };
    } else {
      if (v_31_1) {
        v_31_2_1 = v_31_2;
      } else {
        v_31_2_0 = v_31_2;
      };
      if (s_6_St_20_Min_1) {
        s_6_St_20_Min_2_1 = s_6_St_20_Min_2;
      } else {
        s_6_St_20_Min_2_0 = s_6_St_20_Min_2;
      };
    };
  };
  self->pnr = nr;
  self->ck_32_1 = ns_1;
  self->pnr_6 = nr_6;
  self->v_165 = ns_6_1;
  self->v_166 = ns_6_2;;
}

void System__controller_reset(System__controller_mem* self) {
  self->pnr = false;
  self->ck_66_1 = false;
  self->pnr_7 = false;
  self->ck_64_1 = true;
  self->pnr_8 = false;
  self->ck_61_1 = false;
  self->pnr_9 = false;
  self->ck_59_1 = true;
  self->pnr_10 = false;
  self->ck_56_1 = false;
  self->pnr_11 = false;
  self->v_181 = false;
  self->v_182 = false;
  self->pnr_12 = false;
  self->ck_51_1 = true;
  self->pnr_13 = false;
  self->ck_49_1 = true;
  self->pnr_14 = false;
  self->ck_47_1 = true;
  self->pnr_15 = false;
  self->ck_45_1 = true;
  self->pnr_16 = false;
  self->ck_43_1 = false;
  self->pnr_17 = false;
  self->ck_41_1 = true;
  self->pnr_18 = false;
  self->ck_38_1 = false;
  self->pnr_19 = false;
  self->ck_36_1 = true;
  self->pnr_20 = false;
  self->ck_1 = true;
}

void System__controller_step(int change_shift, int worker, int cleaner,
                             int air_failed_recovered, int light_switch,
                             int light_failed_recovered, int blind_switch,
                             int blind_failed_recovered,
                             int door_failed_recovered,
                             int closet_failed_recovered,
                             System__controller_out* _out,
                             System__controller_mem* self) {
  Controller_controller__controller_controller_out Controller_controller__controller_controller_out_st;
  
  int nr_St_21_Falha;
  int ns_St_21_Falha_1;
  int failed_1_1_St_21_Falha;
  int nr_St_21_Funcionando;
  int ns_St_21_Funcionando_1;
  int failed_1_1_St_21_Funcionando;
  int ck_67_1;
  int r_St_21_Falha;
  int s_St_21_Falha_1;
  int r_St_21_Funcionando;
  int s_St_21_Funcionando_1;
  int nr_7_St_22_On;
  int ns_7_St_22_On_1;
  int light_source_on_1_St_22_On;
  int nr_7_St_22_Off;
  int ns_7_St_22_Off_1;
  int light_source_on_1_St_22_Off;
  int ck_65_1;
  int v_140;
  int v_139;
  int v_138;
  int v_137;
  int v_136;
  int v_135;
  int r_7_St_22_On;
  int s_7_St_22_On_1;
  int r_7_St_22_Off;
  int s_7_St_22_Off_1;
  int out_4_false;
  int out_4_true;
  int ck_63;
  int nr_8_St_23_Falha;
  int ns_8_St_23_Falha_1;
  int failed_1_St_23_Falha;
  int nr_8_St_23_Funcionando;
  int ns_8_St_23_Funcionando_1;
  int failed_1_St_23_Funcionando;
  int ck_62_1;
  int r_8_St_23_Falha;
  int s_8_St_23_Falha_1;
  int r_8_St_23_Funcionando;
  int s_8_St_23_Funcionando_1;
  int nr_9_St_24_On;
  int ns_9_St_24_On_1;
  int light_source_on_St_24_On;
  int nr_9_St_24_Off;
  int ns_9_St_24_Off_1;
  int light_source_on_St_24_Off;
  int ck_60_1;
  int v_134;
  int v_133;
  int v_132;
  int v_131;
  int v_130;
  int v_129;
  int r_9_St_24_On;
  int s_9_St_24_On_1;
  int r_9_St_24_Off;
  int s_9_St_24_Off_1;
  int out_3_false;
  int out_3_true;
  int ck_58;
  int nr_10_St_25_Falha;
  int ns_10_St_25_Falha_1;
  int failed_6_St_25_Falha;
  int nr_10_St_25_Funcionando;
  int ns_10_St_25_Funcionando_1;
  int failed_6_St_25_Funcionando;
  int ck_57_1;
  int r_10_St_25_Falha;
  int s_10_St_25_Falha_1;
  int r_10_St_25_Funcionando;
  int s_10_St_25_Funcionando_1;
  int v_180;
  int v_179;
  int v_178;
  int v_177;
  int v_176;
  int v_175;
  int v_174;
  int v_173;
  int ns_11_St_26_Max_2_0;
  int ns_11_St_26_Max_2_1;
  int ns_11_St_26_Min_2_0;
  int ns_11_St_26_Min_2_1;
  int ns_11_St_26_Off_2_0;
  int ns_11_St_26_Off_2_1;
  int ck_55_2_0;
  int ck_55_2_1;
  int nr_11_St_26_Max;
  int ns_11_St_26_Max_2;
  int ns_11_St_26_Max_1;
  int air_state_1_St_26_Max;
  int nr_11_St_26_Min;
  int ns_11_St_26_Min_2;
  int ns_11_St_26_Min_1;
  int air_state_1_St_26_Min;
  int nr_11_St_26_Off;
  int ns_11_St_26_Off_2;
  int ns_11_St_26_Off_1;
  int air_state_1_St_26_Off;
  int ck_55_2;
  int ck_55_1;
  int v_127_2_0;
  int v_127_2_1;
  int v_128;
  int v_127_2;
  int v_127_1;
  int v_126;
  int v_125;
  int v_123_2_0;
  int v_123_2_1;
  int v_124;
  int v_123_2;
  int v_123_1;
  int v_122;
  int v_121;
  int v_119_2_0;
  int v_119_2_1;
  int v_120;
  int v_119_2;
  int v_119_1;
  int v_118;
  int v_117;
  int v_188;
  int v_187;
  int v_186;
  int v_185;
  int v_184;
  int v_183;
  int s_11_St_26_Max_2_0;
  int s_11_St_26_Max_2_1;
  int s_11_St_26_Min_2_0;
  int s_11_St_26_Min_2_1;
  int s_11_St_26_Off_2_0;
  int s_11_St_26_Off_2_1;
  int ck_54_2_0;
  int ck_54_2_1;
  int r_11_St_26_Max;
  int s_11_St_26_Max_2;
  int s_11_St_26_Max_1;
  int r_11_St_26_Min;
  int s_11_St_26_Min_2;
  int s_11_St_26_Min_1;
  int r_11_St_26_Off;
  int s_11_St_26_Off_2;
  int s_11_St_26_Off_1;
  int ck_54_2;
  int ck_54_1;
  int out_2_false;
  int out_2_true;
  int ck_53;
  int nr_12_St_27_Open;
  int ns_12_St_27_Open_1;
  int window_open_1_St_27_Open;
  int nr_12_St_27_Closed;
  int ns_12_St_27_Closed_1;
  int window_open_1_St_27_Closed;
  int ck_52_1;
  int v_116;
  int r_12_St_27_Open;
  int s_12_St_27_Open_1;
  int r_12_St_27_Closed;
  int s_12_St_27_Closed_1;
  int nr_13_St_28_On;
  int ns_13_St_28_On_1;
  int computer_on_St_28_On;
  int nr_13_St_28_Off;
  int ns_13_St_28_Off_1;
  int computer_on_St_28_Off;
  int ck_50_1;
  int v_115;
  int v_114;
  int r_13_St_28_On;
  int s_13_St_28_On_1;
  int r_13_St_28_Off;
  int s_13_St_28_Off_1;
  int nr_14_St_29_Present;
  int ns_14_St_29_Present_1;
  int presence_1_St_29_Present;
  int nr_14_St_29_Not_Present;
  int ns_14_St_29_Not_Present_1;
  int presence_1_St_29_Not_Present;
  int ck_48_1;
  int r_14_St_29_Present;
  int s_14_St_29_Present_1;
  int r_14_St_29_Not_Present;
  int s_14_St_29_Not_Present_1;
  int nr_15_St_30_Present;
  int ns_15_St_30_Present_1;
  int presence_St_30_Present;
  int nr_15_St_30_Not_Present;
  int ns_15_St_30_Not_Present_1;
  int presence_St_30_Not_Present;
  int ck_46_1;
  int r_15_St_30_Present;
  int s_15_St_30_Present_1;
  int r_15_St_30_Not_Present;
  int s_15_St_30_Not_Present_1;
  int nr_16_St_31_Falha;
  int ns_16_St_31_Falha_1;
  int failed_3_St_31_Falha;
  int nr_16_St_31_Funcionando;
  int ns_16_St_31_Funcionando_1;
  int failed_3_St_31_Funcionando;
  int ck_44_1;
  int r_16_St_31_Falha;
  int s_16_St_31_Falha_1;
  int r_16_St_31_Funcionando;
  int s_16_St_31_Funcionando_1;
  int nr_17_St_32_Open;
  int ns_17_St_32_Open_1;
  int closet_open_St_32_Open;
  int nr_17_St_32_Locked;
  int ns_17_St_32_Locked_1;
  int closet_open_St_32_Locked;
  int ck_42_1;
  int v_113;
  int r_17_St_32_Open;
  int s_17_St_32_Open_1;
  int r_17_St_32_Locked;
  int s_17_St_32_Locked_1;
  int out_1_false;
  int out_1_true;
  int ck_40;
  int nr_18_St_33_Falha;
  int ns_18_St_33_Falha_1;
  int failed_2_St_33_Falha;
  int nr_18_St_33_Funcionando;
  int ns_18_St_33_Funcionando_1;
  int failed_2_St_33_Funcionando;
  int ck_39_1;
  int r_18_St_33_Falha;
  int s_18_St_33_Falha_1;
  int r_18_St_33_Funcionando;
  int s_18_St_33_Funcionando_1;
  int nr_19_St_34_Open;
  int ns_19_St_34_Open_1;
  int door_open_St_34_Open;
  int nr_19_St_34_Closed;
  int ns_19_St_34_Closed_1;
  int door_open_St_34_Closed;
  int ck_37_1;
  int v_112;
  int v_111;
  int r_19_St_34_Open;
  int s_19_St_34_Open_1;
  int r_19_St_34_Closed;
  int s_19_St_34_Closed_1;
  int out_false;
  int out_true;
  int ck_35;
  int nr_20_St_35_Noite;
  int ns_20_St_35_Noite_1;
  int night_1_St_35_Noite;
  int nr_20_St_35_Dia;
  int ns_20_St_35_Dia_1;
  int night_1_St_35_Dia;
  int ck_34_1;
  int r_20_St_35_Noite;
  int s_20_St_35_Noite_1;
  int r_20_St_35_Dia;
  int s_20_St_35_Dia_1;
  int s_11_2_0;
  int s_11_2_1;
  int ns_11_2_0;
  int ns_11_2_1;
  int s_20_1;
  int ns_20_1;
  int r_20;
  int nr_20;
  int s_19_1;
  int ns_19_1;
  int r_19;
  int nr_19;
  int s_18_1;
  int ns_18_1;
  int r_18;
  int nr_18;
  int s_17_1;
  int ns_17_1;
  int r_17;
  int nr_17;
  int s_16_1;
  int ns_16_1;
  int r_16;
  int nr_16;
  int s_15_1;
  int ns_15_1;
  int r_15;
  int nr_15;
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
  int s_11_2;
  int s_11_1;
  int ns_11_2;
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
  int s_7_1;
  int ns_7_1;
  int r_7;
  int nr_7;
  int s_1;
  int ns_1;
  int r;
  int nr;
  int sw_2;
  int c1_6;
  int c2_4;
  int failed_recovered_10;
  int failed_recovered_1_1;
  int failed_1_1;
  int sw_1_1;
  int c1_1_1;
  int c2_1_1;
  int light_source_on_1;
  int light_source_1;
  int failed_10;
  int out_4;
  int sw;
  int c1_5;
  int c2_3;
  int failed_recovered_9;
  int failed_recovered_1;
  int failed_1;
  int sw_1;
  int c1_1;
  int c2_1;
  int light_source_on;
  int light_source;
  int failed_9;
  int out_3;
  int c1_4;
  int c2;
  int failed_recovered_8;
  int failed_recovered_6;
  int failed_6;
  int c1_2;
  int c2_2;
  int air_state_1;
  int air_state;
  int failed_8;
  int out_2;
  int c_3;
  int window_open_1;
  int c_2;
  int computer_on;
  int arrived_1;
  int presence_1;
  int arrived;
  int presence;
  int c1_3;
  int failed_recovered_7;
  int failed_recovered_3;
  int failed_3;
  int c_1;
  int closet_open;
  int closet;
  int failed_7;
  int out_1;
  int c1;
  int failed_recovered;
  int failed_recovered_2;
  int failed_2;
  int c;
  int door_open;
  int door;
  int failed;
  int out;
  int change;
  int night_1;
  int rule8_5;
  int rule8;
  int rule7_5;
  int rule7;
  int rule6;
  int rule5;
  int rule4;
  int rule3;
  int rule2;
  int rule1;
  int v;
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
  sw_2 = blind_switch;
  sw_1_1 = sw_2;
  failed_recovered_10 = blind_failed_recovered;
  failed_recovered_1_1 = failed_recovered_10;
  sw = light_switch;
  sw_1 = sw;
  failed_recovered_9 = light_failed_recovered;
  failed_recovered_1 = failed_recovered_9;
  failed_recovered_8 = air_failed_recovered;
  failed_recovered_6 = failed_recovered_8;
  ck_54_1 = self->v_181;
  ck_54_2 = self->v_182;
  arrived_1 = cleaner;
  arrived = worker;
  failed_recovered_7 = closet_failed_recovered;
  failed_recovered_3 = failed_recovered_7;
  failed_recovered = door_failed_recovered;
  failed_recovered_2 = failed_recovered;
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
                                                    self->ck_1, self->pnr_20,
                                                    self->ck_36_1,
                                                    self->pnr_19,
                                                    self->ck_38_1,
                                                    self->pnr_18,
                                                    self->ck_41_1,
                                                    self->pnr_17,
                                                    self->ck_43_1,
                                                    self->pnr_16,
                                                    self->ck_45_1,
                                                    self->pnr_15,
                                                    self->ck_47_1,
                                                    self->pnr_14,
                                                    self->ck_49_1,
                                                    self->pnr_13,
                                                    self->ck_51_1,
                                                    self->pnr_12,
                                                    self->v_182, self->v_181,
                                                    self->pnr_11,
                                                    self->ck_56_1,
                                                    self->pnr_10,
                                                    self->ck_59_1,
                                                    self->pnr_9,
                                                    self->ck_61_1,
                                                    self->pnr_8,
                                                    self->ck_64_1,
                                                    self->pnr_7,
                                                    self->ck_66_1, self->pnr,
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
  c1_6 = c_blind_1;
  c1_1_1 = c1_6;
  c2_4 = c_blind_2;
  c2_1_1 = c2_4;
  c1_5 = c_light_1;
  c1_1 = c1_5;
  c2_3 = c_light_2;
  c2_1 = c2_3;
  c1_4 = c_air_1;
  c1_2 = c1_4;
  c2 = c_air_2;
  c2_2 = c2;
  c_3 = c_window;
  c_2 = c_pc;
  c1_3 = c_closet;
  c_1 = c1_3;
  c1 = c_door;
  c = c1;
  if (self->ck_66_1) {
    if (failed_recovered_1_1) {
      r_St_21_Falha = true;
    } else {
      r_St_21_Falha = self->pnr;
    };
    r = r_St_21_Falha;
    if (failed_recovered_1_1) {
      s_St_21_Falha_1 = false;
    } else {
      s_St_21_Falha_1 = true;
    };
    s_1 = s_St_21_Falha_1;
  } else {
    if (failed_recovered_1_1) {
      r_St_21_Funcionando = true;
      s_St_21_Funcionando_1 = true;
    } else {
      r_St_21_Funcionando = self->pnr;
      s_St_21_Funcionando_1 = false;
    };
    r = r_St_21_Funcionando;
    s_1 = s_St_21_Funcionando_1;
  };
  ck_67_1 = s_1;
  if (ck_67_1) {
    failed_1_1_St_21_Falha = true;
    failed_1_1 = failed_1_1_St_21_Falha;
    nr_St_21_Falha = false;
    nr = nr_St_21_Falha;
    ns_St_21_Falha_1 = true;
    ns_1 = ns_St_21_Falha_1;
  } else {
    failed_1_1_St_21_Funcionando = false;
    nr_St_21_Funcionando = false;
    ns_St_21_Funcionando_1 = false;
    failed_1_1 = failed_1_1_St_21_Funcionando;
    nr = nr_St_21_Funcionando;
    ns_1 = ns_St_21_Funcionando_1;
  };
  failed_10 = failed_1_1;
  ck_63 = failed_10;
  if (self->ck_64_1) {
    v_139 = !(c2_1_1);
    v_138 = (c1_1_1&&sw_1_1);
    v_140 = (v_138||v_139);
    if (v_140) {
      r_7_St_22_Off = true;
      s_7_St_22_Off_1 = false;
    } else {
      r_7_St_22_Off = self->pnr_7;
      s_7_St_22_Off_1 = true;
    };
    r_7 = r_7_St_22_Off;
    s_7_1 = s_7_St_22_Off_1;
  } else {
    v_136 = !(c2_1_1);
    v_135 = (c1_1_1&&sw_1_1);
    v_137 = (v_135||v_136);
    if (v_137) {
      r_7_St_22_On = true;
    } else {
      r_7_St_22_On = self->pnr_7;
    };
    r_7 = r_7_St_22_On;
    if (v_137) {
      s_7_St_22_On_1 = true;
    } else {
      s_7_St_22_On_1 = false;
    };
    s_7_1 = s_7_St_22_On_1;
  };
  ck_65_1 = s_7_1;
  if (ck_65_1) {
    light_source_on_1_St_22_Off = 0;
    nr_7_St_22_Off = false;
    ns_7_St_22_Off_1 = true;
    light_source_on_1 = light_source_on_1_St_22_Off;
    nr_7 = nr_7_St_22_Off;
    ns_7_1 = ns_7_St_22_Off_1;
  } else {
    light_source_on_1_St_22_On = 1;
    light_source_on_1 = light_source_on_1_St_22_On;
    nr_7_St_22_On = false;
    nr_7 = nr_7_St_22_On;
    ns_7_St_22_On_1 = false;
    ns_7_1 = ns_7_St_22_On_1;
  };
  light_source_1 = light_source_on_1;
  if (ck_63) {
    out_4_true = (light_source_1+2);
    out_4 = out_4_true;
  } else {
    out_4_false = light_source_1;
    out_4 = out_4_false;
  };
  _out->blind_status = out_4;
  v_71 = (_out->blind_status==1);
  v_72 = !(v_71);
  v_79 = (_out->blind_status<2);
  v_83 = (_out->blind_status==1);
  v_89 = (_out->blind_status<2);
  v_92 = (_out->blind_status==1);
  v_97 = (_out->blind_status<2);
  v_101 = (_out->blind_status==0);
  if (self->ck_61_1) {
    if (failed_recovered_1) {
      r_8_St_23_Falha = true;
    } else {
      r_8_St_23_Falha = self->pnr_8;
    };
    r_8 = r_8_St_23_Falha;
    if (failed_recovered_1) {
      s_8_St_23_Falha_1 = false;
    } else {
      s_8_St_23_Falha_1 = true;
    };
    s_8_1 = s_8_St_23_Falha_1;
  } else {
    if (failed_recovered_1) {
      r_8_St_23_Funcionando = true;
      s_8_St_23_Funcionando_1 = true;
    } else {
      r_8_St_23_Funcionando = self->pnr_8;
      s_8_St_23_Funcionando_1 = false;
    };
    r_8 = r_8_St_23_Funcionando;
    s_8_1 = s_8_St_23_Funcionando_1;
  };
  ck_62_1 = s_8_1;
  if (ck_62_1) {
    failed_1_St_23_Falha = true;
    failed_1 = failed_1_St_23_Falha;
    nr_8_St_23_Falha = false;
    nr_8 = nr_8_St_23_Falha;
    ns_8_St_23_Falha_1 = true;
    ns_8_1 = ns_8_St_23_Falha_1;
  } else {
    failed_1_St_23_Funcionando = false;
    nr_8_St_23_Funcionando = false;
    ns_8_St_23_Funcionando_1 = false;
    failed_1 = failed_1_St_23_Funcionando;
    nr_8 = nr_8_St_23_Funcionando;
    ns_8_1 = ns_8_St_23_Funcionando_1;
  };
  failed_9 = failed_1;
  ck_58 = failed_9;
  if (self->ck_59_1) {
    v_133 = !(c2_1);
    v_132 = (c1_1&&sw_1);
    v_134 = (v_132||v_133);
    if (v_134) {
      r_9_St_24_Off = true;
      s_9_St_24_Off_1 = false;
    } else {
      r_9_St_24_Off = self->pnr_9;
      s_9_St_24_Off_1 = true;
    };
    r_9 = r_9_St_24_Off;
    s_9_1 = s_9_St_24_Off_1;
  } else {
    v_130 = !(c2_1);
    v_129 = (c1_1&&sw_1);
    v_131 = (v_129||v_130);
    if (v_131) {
      r_9_St_24_On = true;
    } else {
      r_9_St_24_On = self->pnr_9;
    };
    r_9 = r_9_St_24_On;
    if (v_131) {
      s_9_St_24_On_1 = true;
    } else {
      s_9_St_24_On_1 = false;
    };
    s_9_1 = s_9_St_24_On_1;
  };
  ck_60_1 = s_9_1;
  if (ck_60_1) {
    light_source_on_St_24_Off = 0;
    nr_9_St_24_Off = false;
    ns_9_St_24_Off_1 = true;
    light_source_on = light_source_on_St_24_Off;
    nr_9 = nr_9_St_24_Off;
    ns_9_1 = ns_9_St_24_Off_1;
  } else {
    light_source_on_St_24_On = 1;
    light_source_on = light_source_on_St_24_On;
    nr_9_St_24_On = false;
    nr_9 = nr_9_St_24_On;
    ns_9_St_24_On_1 = false;
    ns_9_1 = ns_9_St_24_On_1;
  };
  light_source = light_source_on;
  if (ck_58) {
    out_3_true = (light_source+2);
    out_3 = out_3_true;
  } else {
    out_3_false = light_source;
    out_3 = out_3_false;
  };
  _out->light_status = out_3;
  v_68 = (_out->light_status==1);
  v_69 = !(v_68);
  v_77 = (_out->light_status<2);
  v_82 = (_out->light_status==1);
  v_84 = (v_82||v_83);
  v_87 = (_out->light_status>1);
  v_95 = (_out->light_status<2);
  v_100 = (_out->light_status==1);
  v_102 = (v_100&&v_101);
  if (self->ck_56_1) {
    if (failed_recovered_6) {
      r_10_St_25_Falha = true;
    } else {
      r_10_St_25_Falha = self->pnr_10;
    };
    r_10 = r_10_St_25_Falha;
    if (failed_recovered_6) {
      s_10_St_25_Falha_1 = false;
    } else {
      s_10_St_25_Falha_1 = true;
    };
    s_10_1 = s_10_St_25_Falha_1;
  } else {
    if (failed_recovered_6) {
      r_10_St_25_Funcionando = true;
      s_10_St_25_Funcionando_1 = true;
    } else {
      r_10_St_25_Funcionando = self->pnr_10;
      s_10_St_25_Funcionando_1 = false;
    };
    r_10 = r_10_St_25_Funcionando;
    s_10_1 = s_10_St_25_Funcionando_1;
  };
  ck_57_1 = s_10_1;
  if (ck_57_1) {
    failed_6_St_25_Falha = true;
    failed_6 = failed_6_St_25_Falha;
    nr_10_St_25_Falha = false;
    nr_10 = nr_10_St_25_Falha;
    ns_10_St_25_Falha_1 = true;
    ns_10_1 = ns_10_St_25_Falha_1;
  } else {
    failed_6_St_25_Funcionando = false;
    nr_10_St_25_Funcionando = false;
    ns_10_St_25_Funcionando_1 = false;
    failed_6 = failed_6_St_25_Funcionando;
    nr_10 = nr_10_St_25_Funcionando;
    ns_10_1 = ns_10_St_25_Funcionando_1;
  };
  failed_8 = failed_6;
  ck_53 = failed_8;
  if (ck_54_1) {
    ck_54_2_1 = ck_54_2;
    if (ck_54_2_1) {
      v_118 = !(c2_2);
      if (v_118) {
        v_120 = true;
        v_119_1 = false;
        v_119_2 = false;
      } else {
        v_120 = self->pnr_11;
        v_119_1 = true;
        v_119_2 = true;
      };
      v_117 = !(c1_2);
      if (v_117) {
        r_11_St_26_Max = true;
      } else {
        r_11_St_26_Max = v_120;
      };
      v_187 = r_11_St_26_Max;
      if (v_117) {
        s_11_St_26_Max_1 = true;
      } else {
        s_11_St_26_Max_1 = v_119_1;
      };
      v_183 = s_11_St_26_Max_1;
      if (v_117) {
        s_11_St_26_Max_2 = false;
      } else {
        s_11_St_26_Max_2 = v_119_2;
      };
      v_184 = s_11_St_26_Max_2;
    } else {
      v_122 = !(c2_2);
      if (v_122) {
        v_124 = true;
        v_123_1 = true;
        v_123_2 = true;
      } else {
        v_124 = self->pnr_11;
        v_123_1 = true;
        v_123_2 = false;
      };
      v_121 = !(c1_2);
      if (v_121) {
        r_11_St_26_Min = true;
        s_11_St_26_Min_1 = false;
        s_11_St_26_Min_2 = false;
      } else {
        r_11_St_26_Min = v_124;
        s_11_St_26_Min_1 = v_123_1;
        s_11_St_26_Min_2 = v_123_2;
      };
      v_187 = r_11_St_26_Min;
      v_183 = s_11_St_26_Min_1;
      v_184 = s_11_St_26_Min_2;
    };
    s_11_1 = v_183;
    s_11_2 = v_184;
    r_11 = v_187;
  } else {
    ck_54_2_0 = ck_54_2;
    if (ck_54_2_0) {
      v_188 = true;
      v_185 = true;
      v_186 = true;
    } else {
      v_126 = !(c2_2);
      if (v_126) {
        v_128 = true;
        v_127_1 = true;
        v_127_2 = true;
      } else {
        v_128 = self->pnr_11;
        v_127_1 = false;
        v_127_2 = false;
      };
      v_125 = !(c1_2);
      if (v_125) {
        r_11_St_26_Off = true;
      } else {
        r_11_St_26_Off = v_128;
      };
      v_188 = r_11_St_26_Off;
      if (v_125) {
        s_11_St_26_Off_1 = true;
      } else {
        s_11_St_26_Off_1 = v_127_1;
      };
      v_185 = s_11_St_26_Off_1;
      if (v_125) {
        s_11_St_26_Off_2 = false;
      } else {
        s_11_St_26_Off_2 = v_127_2;
      };
      v_186 = s_11_St_26_Off_2;
      if (v_127_1) {
        v_127_2_1 = v_127_2;
      } else {
        v_127_2_0 = v_127_2;
      };
      if (s_11_St_26_Off_1) {
        s_11_St_26_Off_2_1 = s_11_St_26_Off_2;
      } else {
        s_11_St_26_Off_2_0 = s_11_St_26_Off_2;
      };
    };
    s_11_1 = v_185;
    s_11_2 = v_186;
    r_11 = v_188;
  };
  ck_55_1 = s_11_1;
  ck_55_2 = s_11_2;
  if (ck_55_1) {
    ck_55_2_1 = ck_55_2;
    if (ck_55_2_1) {
      air_state_1_St_26_Max = 2;
      v_173 = air_state_1_St_26_Max;
      nr_11_St_26_Max = false;
      v_179 = nr_11_St_26_Max;
      ns_11_St_26_Max_1 = true;
      v_175 = ns_11_St_26_Max_1;
      ns_11_St_26_Max_2 = true;
      v_176 = ns_11_St_26_Max_2;
    } else {
      air_state_1_St_26_Min = 1;
      nr_11_St_26_Min = false;
      ns_11_St_26_Min_1 = true;
      ns_11_St_26_Min_2 = false;
      v_173 = air_state_1_St_26_Min;
      v_179 = nr_11_St_26_Min;
      v_175 = ns_11_St_26_Min_1;
      v_176 = ns_11_St_26_Min_2;
    };
    air_state_1 = v_173;
    ns_11_1 = v_175;
    ns_11_2 = v_176;
    nr_11 = v_179;
  } else {
    ck_55_2_0 = ck_55_2;
    if (ck_55_2_0) {
      v_174 = 0;
      v_180 = true;
      v_177 = true;
      v_178 = true;
    } else {
      air_state_1_St_26_Off = 0;
      v_174 = air_state_1_St_26_Off;
      nr_11_St_26_Off = false;
      v_180 = nr_11_St_26_Off;
      ns_11_St_26_Off_1 = false;
      v_177 = ns_11_St_26_Off_1;
      ns_11_St_26_Off_2 = false;
      v_178 = ns_11_St_26_Off_2;
      if (ns_11_St_26_Off_1) {
        ns_11_St_26_Off_2_1 = ns_11_St_26_Off_2;
      } else {
        ns_11_St_26_Off_2_0 = ns_11_St_26_Off_2;
      };
    };
    air_state_1 = v_174;
    ns_11_1 = v_177;
    ns_11_2 = v_178;
    nr_11 = v_180;
  };
  air_state = air_state_1;
  if (ck_53) {
    out_2_true = (air_state+3);
    out_2 = out_2_true;
  } else {
    out_2_false = air_state;
    out_2 = out_2_false;
  };
  _out->air_status = out_2;
  v_47 = (_out->air_status<3);
  v_50 = (_out->air_status==2);
  v_55 = (_out->air_status<3);
  v_58 = (_out->air_status==1);
  v_63 = (_out->air_status==1);
  v_64 = !(v_63);
  v_65 = (_out->air_status==2);
  v_66 = !(v_65);
  v_67 = (v_64&&v_66);
  v_70 = (v_67&&v_69);
  v_73 = (v_70&&v_72);
  if (ns_11_1) {
    ns_11_2_1 = ns_11_2;
  } else {
    ns_11_2_0 = ns_11_2;
  };
  if (ck_55_1) {
    if (ck_55_2_1) {
      if (ns_11_St_26_Max_1) {
        ns_11_St_26_Max_2_1 = ns_11_St_26_Max_2;
      } else {
        ns_11_St_26_Max_2_0 = ns_11_St_26_Max_2;
      };
    } else {
      if (ns_11_St_26_Min_1) {
        ns_11_St_26_Min_2_1 = ns_11_St_26_Min_2;
      } else {
        ns_11_St_26_Min_2_0 = ns_11_St_26_Min_2;
      };
    };
  };
  if (s_11_1) {
    s_11_2_1 = s_11_2;
  } else {
    s_11_2_0 = s_11_2;
  };
  if (ck_54_1) {
    if (ck_54_2_1) {
      if (v_119_1) {
        v_119_2_1 = v_119_2;
      } else {
        v_119_2_0 = v_119_2;
      };
      if (s_11_St_26_Max_1) {
        s_11_St_26_Max_2_1 = s_11_St_26_Max_2;
      } else {
        s_11_St_26_Max_2_0 = s_11_St_26_Max_2;
      };
    } else {
      if (v_123_1) {
        v_123_2_1 = v_123_2;
      } else {
        v_123_2_0 = v_123_2;
      };
      if (s_11_St_26_Min_1) {
        s_11_St_26_Min_2_1 = s_11_St_26_Min_2;
      } else {
        s_11_St_26_Min_2_0 = s_11_St_26_Min_2;
      };
    };
  };
  if (self->ck_51_1) {
    v_116 = !(c_3);
    if (v_116) {
      r_12_St_27_Closed = true;
      s_12_St_27_Closed_1 = false;
    } else {
      r_12_St_27_Closed = self->pnr_12;
      s_12_St_27_Closed_1 = true;
    };
    r_12 = r_12_St_27_Closed;
    s_12_1 = s_12_St_27_Closed_1;
  } else {
    if (c_3) {
      r_12_St_27_Open = true;
    } else {
      r_12_St_27_Open = self->pnr_12;
    };
    r_12 = r_12_St_27_Open;
    if (c_3) {
      s_12_St_27_Open_1 = true;
    } else {
      s_12_St_27_Open_1 = false;
    };
    s_12_1 = s_12_St_27_Open_1;
  };
  ck_52_1 = s_12_1;
  if (ck_52_1) {
    window_open_1_St_27_Closed = 0;
    nr_12_St_27_Closed = false;
    ns_12_St_27_Closed_1 = true;
    window_open_1 = window_open_1_St_27_Closed;
    nr_12 = nr_12_St_27_Closed;
    ns_12_1 = ns_12_St_27_Closed_1;
  } else {
    window_open_1_St_27_Open = 1;
    window_open_1 = window_open_1_St_27_Open;
    nr_12_St_27_Open = false;
    nr_12 = nr_12_St_27_Open;
    ns_12_St_27_Open_1 = false;
    ns_12_1 = ns_12_St_27_Open_1;
  };
  _out->window_open = window_open_1;
  if (self->ck_49_1) {
    v_115 = !(c_2);
    if (v_115) {
      r_13_St_28_Off = true;
      s_13_St_28_Off_1 = false;
    } else {
      r_13_St_28_Off = self->pnr_13;
      s_13_St_28_Off_1 = true;
    };
    r_13 = r_13_St_28_Off;
    s_13_1 = s_13_St_28_Off_1;
  } else {
    v_114 = !(c_2);
    if (v_114) {
      r_13_St_28_On = true;
    } else {
      r_13_St_28_On = self->pnr_13;
    };
    r_13 = r_13_St_28_On;
    if (v_114) {
      s_13_St_28_On_1 = true;
    } else {
      s_13_St_28_On_1 = false;
    };
    s_13_1 = s_13_St_28_On_1;
  };
  ck_50_1 = s_13_1;
  if (ck_50_1) {
    computer_on_St_28_Off = 0;
    nr_13_St_28_Off = false;
    ns_13_St_28_Off_1 = true;
    computer_on = computer_on_St_28_Off;
    nr_13 = nr_13_St_28_Off;
    ns_13_1 = ns_13_St_28_Off_1;
  } else {
    computer_on_St_28_On = 1;
    computer_on = computer_on_St_28_On;
    nr_13_St_28_On = false;
    nr_13 = nr_13_St_28_On;
    ns_13_St_28_On_1 = false;
    ns_13_1 = ns_13_St_28_On_1;
  };
  _out->pc_on = computer_on;
  v_43 = (_out->pc_on==0);
  v_45 = (_out->pc_on==1);
  if (self->ck_47_1) {
    if (arrived_1) {
      r_14_St_29_Not_Present = true;
      s_14_St_29_Not_Present_1 = false;
    } else {
      r_14_St_29_Not_Present = self->pnr_14;
      s_14_St_29_Not_Present_1 = true;
    };
    r_14 = r_14_St_29_Not_Present;
    s_14_1 = s_14_St_29_Not_Present_1;
  } else {
    if (arrived_1) {
      r_14_St_29_Present = true;
    } else {
      r_14_St_29_Present = self->pnr_14;
    };
    r_14 = r_14_St_29_Present;
    if (arrived_1) {
      s_14_St_29_Present_1 = true;
    } else {
      s_14_St_29_Present_1 = false;
    };
    s_14_1 = s_14_St_29_Present_1;
  };
  ck_48_1 = s_14_1;
  if (ck_48_1) {
    presence_1_St_29_Not_Present = false;
    nr_14_St_29_Not_Present = false;
    ns_14_St_29_Not_Present_1 = true;
    presence_1 = presence_1_St_29_Not_Present;
    nr_14 = nr_14_St_29_Not_Present;
    ns_14_1 = ns_14_St_29_Not_Present_1;
  } else {
    presence_1_St_29_Present = true;
    presence_1 = presence_1_St_29_Present;
    nr_14_St_29_Present = false;
    nr_14 = nr_14_St_29_Present;
    ns_14_St_29_Present_1 = false;
    ns_14_1 = ns_14_St_29_Present_1;
  };
  _out->cleaner_presence = presence_1;
  v = !(_out->cleaner_presence);
  v_37 = !(v);
  v_39 = !(_out->cleaner_presence);
  v_60 = !(_out->cleaner_presence);
  if (self->ck_45_1) {
    if (arrived) {
      r_15_St_30_Not_Present = true;
      s_15_St_30_Not_Present_1 = false;
    } else {
      r_15_St_30_Not_Present = self->pnr_15;
      s_15_St_30_Not_Present_1 = true;
    };
    r_15 = r_15_St_30_Not_Present;
    s_15_1 = s_15_St_30_Not_Present_1;
  } else {
    if (arrived) {
      r_15_St_30_Present = true;
    } else {
      r_15_St_30_Present = self->pnr_15;
    };
    r_15 = r_15_St_30_Present;
    if (arrived) {
      s_15_St_30_Present_1 = true;
    } else {
      s_15_St_30_Present_1 = false;
    };
    s_15_1 = s_15_St_30_Present_1;
  };
  ck_46_1 = s_15_1;
  if (ck_46_1) {
    presence_St_30_Not_Present = false;
    nr_15_St_30_Not_Present = false;
    ns_15_St_30_Not_Present_1 = true;
    presence = presence_St_30_Not_Present;
    nr_15 = nr_15_St_30_Not_Present;
    ns_15_1 = ns_15_St_30_Not_Present_1;
  } else {
    presence_St_30_Present = true;
    presence = presence_St_30_Present;
    nr_15_St_30_Present = false;
    nr_15 = nr_15_St_30_Present;
    ns_15_St_30_Present_1 = false;
    ns_15_1 = ns_15_St_30_Present_1;
  };
  _out->worker_presence = presence;
  v_41 = !(_out->worker_presence);
  v_42 = !(v_41);
  rule7_5 = (v_42||v_43);
  v_44 = !(_out->worker_presence);
  rule7 = (v_44||v_45);
  v_46 = (_out->worker_presence&&_out->cleaner_presence);
  v_48 = (v_46&&v_47);
  v_49 = !(v_48);
  rule6 = (v_49||v_50);
  v_51 = (_out->worker_presence&&_out->cleaner_presence);
  v_52 = !(v_51);
  v_53 = (_out->worker_presence||_out->cleaner_presence);
  v_54 = (v_52&&v_53);
  v_56 = (v_54&&v_55);
  v_57 = !(v_56);
  rule5 = (v_57||v_58);
  v_59 = !(_out->worker_presence);
  v_61 = (v_59&&v_60);
  v_62 = !(v_61);
  rule4 = (v_62||v_73);
  v_74 = (_out->worker_presence||_out->cleaner_presence);
  v_85 = (_out->worker_presence||_out->cleaner_presence);
  v_93 = (_out->worker_presence||_out->cleaner_presence);
  if (self->ck_43_1) {
    if (failed_recovered_3) {
      r_16_St_31_Falha = true;
    } else {
      r_16_St_31_Falha = self->pnr_16;
    };
    r_16 = r_16_St_31_Falha;
    if (failed_recovered_3) {
      s_16_St_31_Falha_1 = false;
    } else {
      s_16_St_31_Falha_1 = true;
    };
    s_16_1 = s_16_St_31_Falha_1;
  } else {
    if (failed_recovered_3) {
      r_16_St_31_Funcionando = true;
      s_16_St_31_Funcionando_1 = true;
    } else {
      r_16_St_31_Funcionando = self->pnr_16;
      s_16_St_31_Funcionando_1 = false;
    };
    r_16 = r_16_St_31_Funcionando;
    s_16_1 = s_16_St_31_Funcionando_1;
  };
  ck_44_1 = s_16_1;
  if (ck_44_1) {
    failed_3_St_31_Falha = true;
    failed_3 = failed_3_St_31_Falha;
    nr_16_St_31_Falha = false;
    nr_16 = nr_16_St_31_Falha;
    ns_16_St_31_Falha_1 = true;
    ns_16_1 = ns_16_St_31_Falha_1;
  } else {
    failed_3_St_31_Funcionando = false;
    nr_16_St_31_Funcionando = false;
    ns_16_St_31_Funcionando_1 = false;
    failed_3 = failed_3_St_31_Funcionando;
    nr_16 = nr_16_St_31_Funcionando;
    ns_16_1 = ns_16_St_31_Funcionando_1;
  };
  failed_7 = failed_3;
  ck_40 = failed_7;
  if (self->ck_41_1) {
    v_113 = !(c_1);
    if (v_113) {
      r_17_St_32_Locked = true;
      s_17_St_32_Locked_1 = false;
    } else {
      r_17_St_32_Locked = self->pnr_17;
      s_17_St_32_Locked_1 = true;
    };
    r_17 = r_17_St_32_Locked;
    s_17_1 = s_17_St_32_Locked_1;
  } else {
    if (c_1) {
      r_17_St_32_Open = true;
    } else {
      r_17_St_32_Open = self->pnr_17;
    };
    r_17 = r_17_St_32_Open;
    if (c_1) {
      s_17_St_32_Open_1 = true;
    } else {
      s_17_St_32_Open_1 = false;
    };
    s_17_1 = s_17_St_32_Open_1;
  };
  ck_42_1 = s_17_1;
  if (ck_42_1) {
    closet_open_St_32_Locked = 0;
    nr_17_St_32_Locked = false;
    ns_17_St_32_Locked_1 = true;
    closet_open = closet_open_St_32_Locked;
    nr_17 = nr_17_St_32_Locked;
    ns_17_1 = ns_17_St_32_Locked_1;
  } else {
    closet_open_St_32_Open = 1;
    closet_open = closet_open_St_32_Open;
    nr_17_St_32_Open = false;
    nr_17 = nr_17_St_32_Open;
    ns_17_St_32_Open_1 = false;
    ns_17_1 = ns_17_St_32_Open_1;
  };
  closet = closet_open;
  if (ck_40) {
    out_1_true = (closet+2);
    out_1 = out_1_true;
  } else {
    out_1_false = closet;
    out_1 = out_1_false;
  };
  _out->closet_status = out_1;
  v_38 = (_out->closet_status==0);
  rule8_5 = (v_37||v_38);
  v_40 = (_out->closet_status==1);
  rule8 = (v_39||v_40);
  if (self->ck_38_1) {
    if (failed_recovered_2) {
      r_18_St_33_Falha = true;
    } else {
      r_18_St_33_Falha = self->pnr_18;
    };
    r_18 = r_18_St_33_Falha;
    if (failed_recovered_2) {
      s_18_St_33_Falha_1 = false;
    } else {
      s_18_St_33_Falha_1 = true;
    };
    s_18_1 = s_18_St_33_Falha_1;
  } else {
    if (failed_recovered_2) {
      r_18_St_33_Funcionando = true;
      s_18_St_33_Funcionando_1 = true;
    } else {
      r_18_St_33_Funcionando = self->pnr_18;
      s_18_St_33_Funcionando_1 = false;
    };
    r_18 = r_18_St_33_Funcionando;
    s_18_1 = s_18_St_33_Funcionando_1;
  };
  ck_39_1 = s_18_1;
  if (ck_39_1) {
    failed_2_St_33_Falha = true;
    failed_2 = failed_2_St_33_Falha;
    nr_18_St_33_Falha = false;
    nr_18 = nr_18_St_33_Falha;
    ns_18_St_33_Falha_1 = true;
    ns_18_1 = ns_18_St_33_Falha_1;
  } else {
    failed_2_St_33_Funcionando = false;
    nr_18_St_33_Funcionando = false;
    ns_18_St_33_Funcionando_1 = false;
    failed_2 = failed_2_St_33_Funcionando;
    nr_18 = nr_18_St_33_Funcionando;
    ns_18_1 = ns_18_St_33_Funcionando_1;
  };
  failed = failed_2;
  ck_35 = failed;
  if (self->ck_36_1) {
    v_112 = !(c);
    if (v_112) {
      r_19_St_34_Closed = true;
      s_19_St_34_Closed_1 = false;
    } else {
      r_19_St_34_Closed = self->pnr_19;
      s_19_St_34_Closed_1 = true;
    };
    r_19 = r_19_St_34_Closed;
    s_19_1 = s_19_St_34_Closed_1;
  } else {
    v_111 = !(c);
    if (v_111) {
      r_19_St_34_Open = true;
    } else {
      r_19_St_34_Open = self->pnr_19;
    };
    r_19 = r_19_St_34_Open;
    if (v_111) {
      s_19_St_34_Open_1 = true;
    } else {
      s_19_St_34_Open_1 = false;
    };
    s_19_1 = s_19_St_34_Open_1;
  };
  ck_37_1 = s_19_1;
  if (ck_37_1) {
    door_open_St_34_Closed = 0;
    nr_19_St_34_Closed = false;
    ns_19_St_34_Closed_1 = true;
    door_open = door_open_St_34_Closed;
    nr_19 = nr_19_St_34_Closed;
    ns_19_1 = ns_19_St_34_Closed_1;
  } else {
    door_open_St_34_Open = 1;
    door_open = door_open_St_34_Open;
    nr_19_St_34_Open = false;
    nr_19 = nr_19_St_34_Open;
    ns_19_St_34_Open_1 = false;
    ns_19_1 = ns_19_St_34_Open_1;
  };
  door = door_open;
  if (ck_35) {
    out_true = (door+2);
    out = out_true;
  } else {
    out_false = door;
    out = out_false;
  };
  _out->door_status = out;
  if (self->ck_1) {
    if (change) {
      r_20_St_35_Dia = true;
      s_20_St_35_Dia_1 = false;
    } else {
      r_20_St_35_Dia = self->pnr_20;
      s_20_St_35_Dia_1 = true;
    };
    r_20 = r_20_St_35_Dia;
    s_20_1 = s_20_St_35_Dia_1;
  } else {
    if (change) {
      r_20_St_35_Noite = true;
    } else {
      r_20_St_35_Noite = self->pnr_20;
    };
    r_20 = r_20_St_35_Noite;
    if (change) {
      s_20_St_35_Noite_1 = true;
    } else {
      s_20_St_35_Noite_1 = false;
    };
    s_20_1 = s_20_St_35_Noite_1;
  };
  ck_34_1 = s_20_1;
  if (ck_34_1) {
    night_1_St_35_Dia = false;
    nr_20_St_35_Dia = false;
    ns_20_St_35_Dia_1 = true;
    night_1 = night_1_St_35_Dia;
    nr_20 = nr_20_St_35_Dia;
    ns_20_1 = ns_20_St_35_Dia_1;
  } else {
    night_1_St_35_Noite = true;
    night_1 = night_1_St_35_Noite;
    nr_20_St_35_Noite = false;
    nr_20 = nr_20_St_35_Noite;
    ns_20_St_35_Noite_1 = false;
    ns_20_1 = ns_20_St_35_Noite_1;
  };
  _out->night = night_1;
  v_75 = !(_out->night);
  v_76 = (v_74&&v_75);
  v_78 = (v_76&&v_77);
  v_80 = (v_78&&v_79);
  v_81 = !(v_80);
  rule3 = (v_81||v_84);
  v_86 = (v_85&&_out->night);
  v_88 = (v_86&&v_87);
  v_90 = (v_88&&v_89);
  v_91 = !(v_90);
  rule2 = (v_91||v_92);
  v_94 = (v_93&&_out->night);
  v_96 = (v_94&&v_95);
  v_98 = (v_96&&v_97);
  v_99 = !(v_98);
  rule1 = (v_99||v_102);
  v_103 = (rule1&&rule3);
  v_104 = (v_103&&rule4);
  v_105 = (v_104&&rule5);
  v_106 = (v_105&&rule6);
  v_107 = (v_106&&rule7);
  v_108 = (v_107&&rule7_5);
  v_109 = (v_108&&rule8);
  v_110 = (v_109&&rule8_5);
  self->pnr = nr;
  self->ck_66_1 = ns_1;
  self->pnr_7 = nr_7;
  self->ck_64_1 = ns_7_1;
  self->pnr_8 = nr_8;
  self->ck_61_1 = ns_8_1;
  self->pnr_9 = nr_9;
  self->ck_59_1 = ns_9_1;
  self->pnr_10 = nr_10;
  self->ck_56_1 = ns_10_1;
  self->pnr_11 = nr_11;
  self->v_181 = ns_11_1;
  self->v_182 = ns_11_2;
  self->pnr_12 = nr_12;
  self->ck_51_1 = ns_12_1;
  self->pnr_13 = nr_13;
  self->ck_49_1 = ns_13_1;
  self->pnr_14 = nr_14;
  self->ck_47_1 = ns_14_1;
  self->pnr_15 = nr_15;
  self->ck_45_1 = ns_15_1;
  self->pnr_16 = nr_16;
  self->ck_43_1 = ns_16_1;
  self->pnr_17 = nr_17;
  self->ck_41_1 = ns_17_1;
  self->pnr_18 = nr_18;
  self->ck_38_1 = ns_18_1;
  self->pnr_19 = nr_19;
  self->ck_36_1 = ns_19_1;
  self->pnr_20 = nr_20;
  self->ck_1 = ns_20_1;;
}

