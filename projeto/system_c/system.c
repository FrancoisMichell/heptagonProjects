/* --- Generated the 1/8/2018 at 9:33 --- */
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
  self->v_105 = false;
  self->v_106 = false;
}

void System__air_conditioner_step(int c1, int c2,
                                  System__air_conditioner_out* _out,
                                  System__air_conditioner_mem* self) {
  
  int v_104;
  int v_103;
  int v_102;
  int v_101;
  int v_100;
  int v_99;
  int v_98;
  int v_97;
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
  int v_16_2_0;
  int v_16_2_1;
  int v_17;
  int v_16_2;
  int v_16_1;
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
  int v_112;
  int v_111;
  int v_110;
  int v_109;
  int v_108;
  int v_107;
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
  ck_1 = self->v_105;
  ck_2 = self->v_106;
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
      v_111 = r_St_6_Max;
      if (v) {
        s_St_6_Max_1 = true;
      } else {
        s_St_6_Max_1 = v_9_1;
      };
      v_107 = s_St_6_Max_1;
      if (v) {
        s_St_6_Max_2 = false;
      } else {
        s_St_6_Max_2 = v_9_2;
      };
      v_108 = s_St_6_Max_2;
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
      v_111 = r_St_6_Min;
      v_107 = s_St_6_Min_1;
      v_108 = s_St_6_Min_2;
    };
    s_1 = v_107;
    s_2 = v_108;
    r = v_111;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_112 = true;
      v_109 = true;
      v_110 = true;
    } else {
      v_15 = !(c2);
      if (v_15) {
        v_17 = true;
      } else {
        v_17 = self->pnr;
      };
      if (c1) {
        r_St_6_Off = true;
      } else {
        r_St_6_Off = v_17;
      };
      v_112 = r_St_6_Off;
      if (v_15) {
        v_16_1 = true;
      } else {
        v_16_1 = false;
      };
      if (c1) {
        s_St_6_Off_1 = true;
      } else {
        s_St_6_Off_1 = v_16_1;
      };
      v_109 = s_St_6_Off_1;
      if (v_15) {
        v_16_2 = true;
      } else {
        v_16_2 = false;
      };
      if (c1) {
        s_St_6_Off_2 = false;
      } else {
        s_St_6_Off_2 = v_16_2;
      };
      v_110 = s_St_6_Off_2;
      if (v_16_1) {
        v_16_2_1 = v_16_2;
      } else {
        v_16_2_0 = v_16_2;
      };
      if (s_St_6_Off_1) {
        s_St_6_Off_2_1 = s_St_6_Off_2;
      } else {
        s_St_6_Off_2_0 = s_St_6_Off_2;
      };
    };
    s_1 = v_109;
    s_2 = v_110;
    r = v_112;
  };
  ck_7_1 = s_1;
  ck_7_2 = s_2;
  if (ck_7_1) {
    ck_7_2_1 = ck_7_2;
    if (ck_7_2_1) {
      air_state_St_6_Max = 2;
      v_97 = air_state_St_6_Max;
      nr_St_6_Max = false;
      v_103 = nr_St_6_Max;
      ns_St_6_Max_1 = true;
      v_99 = ns_St_6_Max_1;
      ns_St_6_Max_2 = true;
      v_100 = ns_St_6_Max_2;
    } else {
      air_state_St_6_Min = 1;
      nr_St_6_Min = false;
      ns_St_6_Min_1 = true;
      ns_St_6_Min_2 = false;
      v_97 = air_state_St_6_Min;
      v_103 = nr_St_6_Min;
      v_99 = ns_St_6_Min_1;
      v_100 = ns_St_6_Min_2;
    };
    _out->air_state = v_97;
    ns_1 = v_99;
    ns_2 = v_100;
    nr = v_103;
  } else {
    ck_7_2_0 = ck_7_2;
    if (ck_7_2_0) {
      v_98 = 0;
      v_104 = true;
      v_101 = true;
      v_102 = true;
    } else {
      air_state_St_6_Off = 0;
      v_98 = air_state_St_6_Off;
      nr_St_6_Off = false;
      v_104 = nr_St_6_Off;
      ns_St_6_Off_1 = false;
      v_101 = ns_St_6_Off_1;
      ns_St_6_Off_2 = false;
      v_102 = ns_St_6_Off_2;
      if (ns_St_6_Off_1) {
        ns_St_6_Off_2_1 = ns_St_6_Off_2;
      } else {
        ns_St_6_Off_2_0 = ns_St_6_Off_2;
      };
    };
    _out->air_state = v_98;
    ns_1 = v_101;
    ns_2 = v_102;
    nr = v_104;
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
  self->v_105 = ns_1;
  self->v_106 = ns_2;;
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
  self->v_121 = false;
  self->v_122 = false;
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
  int light_source_on_1_St_8_On;
  int nr_St_8_Off;
  int ns_St_8_Off_1;
  int light_source_on_1_St_8_Off;
  int ck_27_1;
  int v_96;
  int v_95;
  int v_94;
  int v_93;
  int v_92;
  int v_91;
  int r_St_8_On;
  int s_St_8_On_1;
  int r_St_8_Off;
  int s_St_8_Off_1;
  int nr_1_St_9_On;
  int ns_1_St_9_On_1;
  int light_source_on_St_9_On;
  int nr_1_St_9_Off;
  int ns_1_St_9_Off_1;
  int light_source_on_St_9_Off;
  int ck_25_1;
  int v_90;
  int v_89;
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int r_1_St_9_On;
  int s_1_St_9_On_1;
  int r_1_St_9_Off;
  int s_1_St_9_Off_1;
  int v_120;
  int v_119;
  int v_118;
  int v_117;
  int v_116;
  int v_115;
  int v_114;
  int v_113;
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
  int air_state_St_10_Max;
  int nr_2_St_10_Min;
  int ns_2_St_10_Min_2;
  int ns_2_St_10_Min_1;
  int air_state_St_10_Min;
  int nr_2_St_10_Off;
  int ns_2_St_10_Off_2;
  int ns_2_St_10_Off_1;
  int air_state_St_10_Off;
  int ck_23_2;
  int ck_23_1;
  int v_83_2_0;
  int v_83_2_1;
  int v_84;
  int v_83_2;
  int v_83_1;
  int v_82;
  int v_80_2_0;
  int v_80_2_1;
  int v_81;
  int v_80_2;
  int v_80_1;
  int v_79;
  int v_78;
  int v_76_2_0;
  int v_76_2_1;
  int v_77;
  int v_76_2;
  int v_76_1;
  int v_75;
  int v_74;
  int v_128;
  int v_127;
  int v_126;
  int v_125;
  int v_124;
  int v_123;
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
  int window_open_1_St_11_Open;
  int nr_3_St_11_Closed;
  int ns_3_St_11_Closed_1;
  int window_open_1_St_11_Closed;
  int ck_21_1;
  int v_73;
  int r_3_St_11_Open;
  int s_3_St_11_Open_1;
  int r_3_St_11_Closed;
  int s_3_St_11_Closed_1;
  int nr_4_St_12_On;
  int ns_4_St_12_On_1;
  int computer_on_St_12_On;
  int nr_4_St_12_Off;
  int ns_4_St_12_Off_1;
  int computer_on_St_12_Off;
  int ck_19_1;
  int v_72;
  int v_71;
  int r_4_St_12_On;
  int s_4_St_12_On_1;
  int r_4_St_12_Off;
  int s_4_St_12_Off_1;
  int nr_5_St_13_Present;
  int ns_5_St_13_Present_1;
  int presence_1_St_13_Present;
  int nr_5_St_13_Not_Present;
  int ns_5_St_13_Not_Present_1;
  int presence_1_St_13_Not_Present;
  int ck_17_1;
  int r_5_St_13_Present;
  int s_5_St_13_Present_1;
  int r_5_St_13_Not_Present;
  int s_5_St_13_Not_Present_1;
  int nr_6_St_14_Present;
  int ns_6_St_14_Present_1;
  int presence_St_14_Present;
  int nr_6_St_14_Not_Present;
  int ns_6_St_14_Not_Present_1;
  int presence_St_14_Not_Present;
  int ck_15_1;
  int r_6_St_14_Present;
  int s_6_St_14_Present_1;
  int r_6_St_14_Not_Present;
  int s_6_St_14_Not_Present_1;
  int nr_7_St_15_Open;
  int ns_7_St_15_Open_1;
  int closet_open_1_St_15_Open;
  int nr_7_St_15_Locked;
  int ns_7_St_15_Locked_1;
  int closet_open_1_St_15_Locked;
  int ck_13_1;
  int v_70;
  int r_7_St_15_Open;
  int s_7_St_15_Open_1;
  int r_7_St_15_Locked;
  int s_7_St_15_Locked_1;
  int nr_8_St_16_Open;
  int ns_8_St_16_Open_1;
  int door_open_1_St_16_Open;
  int nr_8_St_16_Closed;
  int ns_8_St_16_Closed_1;
  int door_open_1_St_16_Closed;
  int ck_11_1;
  int v_69;
  int v_68;
  int r_8_St_16_Open;
  int s_8_St_16_Open_1;
  int r_8_St_16_Closed;
  int s_8_St_16_Closed_1;
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
  int light_source_on_1;
  int sw;
  int c1_1;
  int c2_1;
  int light_source_on;
  int c1;
  int c2;
  int air_state;
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
  int rule7_5;
  int rule7;
  int rule6_5;
  int rule6;
  int rule5;
  int rule4;
  int rule3;
  int rule2;
  int rule1;
  int v;
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
  ck_22_1 = self->v_121;
  ck_22_2 = self->v_122;
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
                                                    self->pnr_3, self->v_122,
                                                    self->v_121, self->pnr_2,
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
  c_2 = c_pc;
  c_1 = c_closet;
  c = c_door;
  if (self->ck_26_1) {
    v_95 = !(c2_2);
    v_94 = (c1_2&&sw_1);
    v_96 = (v_94||v_95);
    if (v_96) {
      r_St_8_Off = true;
      s_St_8_Off_1 = false;
    } else {
      r_St_8_Off = self->pnr;
      s_St_8_Off_1 = true;
    };
    r = r_St_8_Off;
    s_1_2 = s_St_8_Off_1;
  } else {
    v_92 = !(c2_2);
    v_91 = (c1_2&&sw_1);
    v_93 = (v_91||v_92);
    if (v_93) {
      r_St_8_On = true;
    } else {
      r_St_8_On = self->pnr;
    };
    r = r_St_8_On;
    if (v_93) {
      s_St_8_On_1 = true;
    } else {
      s_St_8_On_1 = false;
    };
    s_1_2 = s_St_8_On_1;
  };
  ck_27_1 = s_1_2;
  if (ck_27_1) {
    light_source_on_1_St_8_Off = 0;
    nr_St_8_Off = false;
    ns_St_8_Off_1 = true;
    light_source_on_1 = light_source_on_1_St_8_Off;
    nr = nr_St_8_Off;
    ns_1_2 = ns_St_8_Off_1;
  } else {
    light_source_on_1_St_8_On = 1;
    light_source_on_1 = light_source_on_1_St_8_On;
    nr_St_8_On = false;
    nr = nr_St_8_On;
    ns_St_8_On_1 = false;
    ns_1_2 = ns_St_8_On_1;
  };
  _out->blind_status = light_source_on_1;
  v_43 = (_out->blind_status==0);
  v_52 = (_out->blind_status==1);
  v_58 = (_out->blind_status==0);
  if (self->ck_24_1) {
    v_89 = !(c2_1);
    v_88 = (c1_1&&sw);
    v_90 = (v_88||v_89);
    if (v_90) {
      r_1_St_9_Off = true;
      s_1_St_9_Off_1 = false;
    } else {
      r_1_St_9_Off = self->pnr_1;
      s_1_St_9_Off_1 = true;
    };
    r_1 = r_1_St_9_Off;
    s_1_1 = s_1_St_9_Off_1;
  } else {
    v_86 = !(c2_1);
    v_85 = (c1_1&&sw);
    v_87 = (v_85||v_86);
    if (v_87) {
      r_1_St_9_On = true;
    } else {
      r_1_St_9_On = self->pnr_1;
    };
    r_1 = r_1_St_9_On;
    if (v_87) {
      s_1_St_9_On_1 = true;
    } else {
      s_1_St_9_On_1 = false;
    };
    s_1_1 = s_1_St_9_On_1;
  };
  ck_25_1 = s_1_1;
  if (ck_25_1) {
    light_source_on_St_9_Off = 0;
    nr_1_St_9_Off = false;
    ns_1_St_9_Off_1 = true;
    light_source_on = light_source_on_St_9_Off;
    nr_1 = nr_1_St_9_Off;
    ns_1_1 = ns_1_St_9_Off_1;
  } else {
    light_source_on_St_9_On = 1;
    light_source_on = light_source_on_St_9_On;
    nr_1_St_9_On = false;
    nr_1 = nr_1_St_9_On;
    ns_1_St_9_On_1 = false;
    ns_1_1 = ns_1_St_9_On_1;
  };
  _out->light_status = light_source_on;
  v_41 = (_out->light_status==0);
  v_51 = (_out->light_status==1);
  v_53 = (v_51||v_52);
  v_57 = (_out->light_status==1);
  v_59 = (v_57&&v_58);
  if (ck_22_1) {
    ck_22_2_1 = ck_22_2;
    if (ck_22_2_1) {
      v_75 = !(c2);
      if (v_75) {
        v_77 = true;
        v_76_1 = false;
        v_76_2 = false;
      } else {
        v_77 = self->pnr_2;
        v_76_1 = true;
        v_76_2 = true;
      };
      v_74 = !(c1);
      if (v_74) {
        r_2_St_10_Max = true;
      } else {
        r_2_St_10_Max = v_77;
      };
      v_127 = r_2_St_10_Max;
      if (v_74) {
        s_2_St_10_Max_1 = true;
      } else {
        s_2_St_10_Max_1 = v_76_1;
      };
      v_123 = s_2_St_10_Max_1;
      if (v_74) {
        s_2_St_10_Max_2 = false;
      } else {
        s_2_St_10_Max_2 = v_76_2;
      };
      v_124 = s_2_St_10_Max_2;
    } else {
      v_79 = !(c2);
      if (v_79) {
        v_81 = true;
        v_80_1 = true;
        v_80_2 = true;
      } else {
        v_81 = self->pnr_2;
        v_80_1 = true;
        v_80_2 = false;
      };
      v_78 = !(c1);
      if (v_78) {
        r_2_St_10_Min = true;
        s_2_St_10_Min_1 = false;
        s_2_St_10_Min_2 = false;
      } else {
        r_2_St_10_Min = v_81;
        s_2_St_10_Min_1 = v_80_1;
        s_2_St_10_Min_2 = v_80_2;
      };
      v_127 = r_2_St_10_Min;
      v_123 = s_2_St_10_Min_1;
      v_124 = s_2_St_10_Min_2;
    };
    s_2_1 = v_123;
    s_2_2 = v_124;
    r_2 = v_127;
  } else {
    ck_22_2_0 = ck_22_2;
    if (ck_22_2_0) {
      v_128 = true;
      v_125 = true;
      v_126 = true;
    } else {
      v_82 = !(c2);
      if (v_82) {
        v_84 = true;
      } else {
        v_84 = self->pnr_2;
      };
      if (c1) {
        r_2_St_10_Off = true;
      } else {
        r_2_St_10_Off = v_84;
      };
      v_128 = r_2_St_10_Off;
      if (v_82) {
        v_83_1 = true;
      } else {
        v_83_1 = false;
      };
      if (c1) {
        s_2_St_10_Off_1 = true;
      } else {
        s_2_St_10_Off_1 = v_83_1;
      };
      v_125 = s_2_St_10_Off_1;
      if (v_82) {
        v_83_2 = true;
      } else {
        v_83_2 = false;
      };
      if (c1) {
        s_2_St_10_Off_2 = false;
      } else {
        s_2_St_10_Off_2 = v_83_2;
      };
      v_126 = s_2_St_10_Off_2;
      if (v_83_1) {
        v_83_2_1 = v_83_2;
      } else {
        v_83_2_0 = v_83_2;
      };
      if (s_2_St_10_Off_1) {
        s_2_St_10_Off_2_1 = s_2_St_10_Off_2;
      } else {
        s_2_St_10_Off_2_0 = s_2_St_10_Off_2;
      };
    };
    s_2_1 = v_125;
    s_2_2 = v_126;
    r_2 = v_128;
  };
  ck_23_1 = s_2_1;
  ck_23_2 = s_2_2;
  if (ck_23_1) {
    ck_23_2_1 = ck_23_2;
    if (ck_23_2_1) {
      air_state_St_10_Max = 2;
      v_113 = air_state_St_10_Max;
      nr_2_St_10_Max = false;
      v_119 = nr_2_St_10_Max;
      ns_2_St_10_Max_1 = true;
      v_115 = ns_2_St_10_Max_1;
      ns_2_St_10_Max_2 = true;
      v_116 = ns_2_St_10_Max_2;
    } else {
      air_state_St_10_Min = 1;
      nr_2_St_10_Min = false;
      ns_2_St_10_Min_1 = true;
      ns_2_St_10_Min_2 = false;
      v_113 = air_state_St_10_Min;
      v_119 = nr_2_St_10_Min;
      v_115 = ns_2_St_10_Min_1;
      v_116 = ns_2_St_10_Min_2;
    };
    air_state = v_113;
    ns_2_1 = v_115;
    ns_2_2 = v_116;
    nr_2 = v_119;
  } else {
    ck_23_2_0 = ck_23_2;
    if (ck_23_2_0) {
      v_114 = 0;
      v_120 = true;
      v_117 = true;
      v_118 = true;
    } else {
      air_state_St_10_Off = 0;
      v_114 = air_state_St_10_Off;
      nr_2_St_10_Off = false;
      v_120 = nr_2_St_10_Off;
      ns_2_St_10_Off_1 = false;
      v_117 = ns_2_St_10_Off_1;
      ns_2_St_10_Off_2 = false;
      v_118 = ns_2_St_10_Off_2;
      if (ns_2_St_10_Off_1) {
        ns_2_St_10_Off_2_1 = ns_2_St_10_Off_2;
      } else {
        ns_2_St_10_Off_2_0 = ns_2_St_10_Off_2;
      };
    };
    air_state = v_114;
    ns_2_1 = v_117;
    ns_2_2 = v_118;
    nr_2 = v_120;
  };
  _out->air_status = air_state;
  v_30 = (_out->air_status==1);
  v_33 = (_out->air_status==2);
  v_39 = (_out->air_status==0);
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
      if (v_76_1) {
        v_76_2_1 = v_76_2;
      } else {
        v_76_2_0 = v_76_2;
      };
      if (s_2_St_10_Max_1) {
        s_2_St_10_Max_2_1 = s_2_St_10_Max_2;
      } else {
        s_2_St_10_Max_2_0 = s_2_St_10_Max_2;
      };
    } else {
      if (v_80_1) {
        v_80_2_1 = v_80_2;
      } else {
        v_80_2_0 = v_80_2;
      };
      if (s_2_St_10_Min_1) {
        s_2_St_10_Min_2_1 = s_2_St_10_Min_2;
      } else {
        s_2_St_10_Min_2_0 = s_2_St_10_Min_2;
      };
    };
  };
  if (self->ck_20_1) {
    v_73 = !(c_3);
    if (v_73) {
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
    window_open_1_St_11_Closed = false;
    nr_3_St_11_Closed = false;
    ns_3_St_11_Closed_1 = true;
    window_open_1 = window_open_1_St_11_Closed;
    nr_3 = nr_3_St_11_Closed;
    ns_3_1 = ns_3_St_11_Closed_1;
  } else {
    window_open_1_St_11_Open = true;
    window_open_1 = window_open_1_St_11_Open;
    nr_3_St_11_Open = false;
    nr_3 = nr_3_St_11_Open;
    ns_3_St_11_Open_1 = false;
    ns_3_1 = ns_3_St_11_Open_1;
  };
  _out->window_open = window_open_1;
  if (self->ck_18_1) {
    v_72 = !(c_2);
    if (v_72) {
      r_4_St_12_Off = true;
      s_4_St_12_Off_1 = false;
    } else {
      r_4_St_12_Off = self->pnr_4;
      s_4_St_12_Off_1 = true;
    };
    r_4 = r_4_St_12_Off;
    s_4_1 = s_4_St_12_Off_1;
  } else {
    v_71 = !(c_2);
    if (v_71) {
      r_4_St_12_On = true;
    } else {
      r_4_St_12_On = self->pnr_4;
    };
    r_4 = r_4_St_12_On;
    if (v_71) {
      s_4_St_12_On_1 = true;
    } else {
      s_4_St_12_On_1 = false;
    };
    s_4_1 = s_4_St_12_On_1;
  };
  ck_19_1 = s_4_1;
  if (ck_19_1) {
    computer_on_St_12_Off = false;
    nr_4_St_12_Off = false;
    ns_4_St_12_Off_1 = true;
    computer_on = computer_on_St_12_Off;
    nr_4 = nr_4_St_12_Off;
    ns_4_1 = ns_4_St_12_Off_1;
  } else {
    computer_on_St_12_On = true;
    computer_on = computer_on_St_12_On;
    nr_4_St_12_On = false;
    nr_4 = nr_4_St_12_On;
    ns_4_St_12_On_1 = false;
    ns_4_1 = ns_4_St_12_On_1;
  };
  _out->pc_on = computer_on;
  v_23 = !(_out->pc_on);
  v_38 = !(_out->pc_on);
  v_40 = (v_38&&v_39);
  v_42 = (v_40&&v_41);
  v_44 = (v_42&&v_43);
  if (self->ck_16_1) {
    if (arrived_1) {
      r_5_St_13_Not_Present = true;
      s_5_St_13_Not_Present_1 = false;
    } else {
      r_5_St_13_Not_Present = self->pnr_5;
      s_5_St_13_Not_Present_1 = true;
    };
    r_5 = r_5_St_13_Not_Present;
    s_5_1 = s_5_St_13_Not_Present_1;
  } else {
    if (arrived_1) {
      r_5_St_13_Present = true;
    } else {
      r_5_St_13_Present = self->pnr_5;
    };
    r_5 = r_5_St_13_Present;
    if (arrived_1) {
      s_5_St_13_Present_1 = true;
    } else {
      s_5_St_13_Present_1 = false;
    };
    s_5_1 = s_5_St_13_Present_1;
  };
  ck_17_1 = s_5_1;
  if (ck_17_1) {
    presence_1_St_13_Not_Present = false;
    nr_5_St_13_Not_Present = false;
    ns_5_St_13_Not_Present_1 = true;
    presence_1 = presence_1_St_13_Not_Present;
    nr_5 = nr_5_St_13_Not_Present;
    ns_5_1 = ns_5_St_13_Not_Present_1;
  } else {
    presence_1_St_13_Present = true;
    presence_1 = presence_1_St_13_Present;
    nr_5_St_13_Present = false;
    nr_5 = nr_5_St_13_Present;
    ns_5_St_13_Present_1 = false;
    ns_5_1 = ns_5_St_13_Present_1;
  };
  _out->cleaner_presence = presence_1;
  v = !(_out->cleaner_presence);
  v_18 = !(v);
  v_20 = !(_out->cleaner_presence);
  v_35 = !(_out->cleaner_presence);
  if (self->ck_14_1) {
    if (arrived) {
      r_6_St_14_Not_Present = true;
      s_6_St_14_Not_Present_1 = false;
    } else {
      r_6_St_14_Not_Present = self->pnr_6;
      s_6_St_14_Not_Present_1 = true;
    };
    r_6 = r_6_St_14_Not_Present;
    s_6_1 = s_6_St_14_Not_Present_1;
  } else {
    if (arrived) {
      r_6_St_14_Present = true;
    } else {
      r_6_St_14_Present = self->pnr_6;
    };
    r_6 = r_6_St_14_Present;
    if (arrived) {
      s_6_St_14_Present_1 = true;
    } else {
      s_6_St_14_Present_1 = false;
    };
    s_6_1 = s_6_St_14_Present_1;
  };
  ck_15_1 = s_6_1;
  if (ck_15_1) {
    presence_St_14_Not_Present = false;
    nr_6_St_14_Not_Present = false;
    ns_6_St_14_Not_Present_1 = true;
    presence = presence_St_14_Not_Present;
    nr_6 = nr_6_St_14_Not_Present;
    ns_6_1 = ns_6_St_14_Not_Present_1;
  } else {
    presence_St_14_Present = true;
    presence = presence_St_14_Present;
    nr_6_St_14_Present = false;
    nr_6 = nr_6_St_14_Present;
    ns_6_St_14_Present_1 = false;
    ns_6_1 = ns_6_St_14_Present_1;
  };
  _out->worker_presence = presence;
  v_21 = !(_out->worker_presence);
  v_22 = !(v_21);
  rule6_5 = (v_22||v_23);
  v_24 = !(_out->worker_presence);
  rule6 = (v_24||_out->pc_on);
  v_25 = (_out->worker_presence&&_out->cleaner_presence);
  v_26 = !(v_25);
  v_27 = (_out->worker_presence||_out->cleaner_presence);
  v_28 = (v_26&&v_27);
  v_29 = !(v_28);
  rule5 = (v_29||v_30);
  v_31 = (_out->worker_presence&&_out->cleaner_presence);
  v_32 = !(v_31);
  rule4 = (v_32||v_33);
  v_34 = !(_out->worker_presence);
  v_36 = (v_34&&v_35);
  v_37 = !(v_36);
  v_47 = (_out->worker_presence||_out->cleaner_presence);
  v_54 = (_out->worker_presence||_out->cleaner_presence);
  if (self->ck_12_1) {
    v_70 = !(c_1);
    if (v_70) {
      r_7_St_15_Locked = true;
      s_7_St_15_Locked_1 = false;
    } else {
      r_7_St_15_Locked = self->pnr_7;
      s_7_St_15_Locked_1 = true;
    };
    r_7 = r_7_St_15_Locked;
    s_7_1 = s_7_St_15_Locked_1;
  } else {
    if (c_1) {
      r_7_St_15_Open = true;
    } else {
      r_7_St_15_Open = self->pnr_7;
    };
    r_7 = r_7_St_15_Open;
    if (c_1) {
      s_7_St_15_Open_1 = true;
    } else {
      s_7_St_15_Open_1 = false;
    };
    s_7_1 = s_7_St_15_Open_1;
  };
  ck_13_1 = s_7_1;
  if (ck_13_1) {
    closet_open_1_St_15_Locked = false;
    nr_7_St_15_Locked = false;
    ns_7_St_15_Locked_1 = true;
    closet_open_1 = closet_open_1_St_15_Locked;
    nr_7 = nr_7_St_15_Locked;
    ns_7_1 = ns_7_St_15_Locked_1;
  } else {
    closet_open_1_St_15_Open = true;
    closet_open_1 = closet_open_1_St_15_Open;
    nr_7_St_15_Open = false;
    nr_7 = nr_7_St_15_Open;
    ns_7_St_15_Open_1 = false;
    ns_7_1 = ns_7_St_15_Open_1;
  };
  _out->closet_open = closet_open_1;
  v_19 = !(_out->closet_open);
  rule7_5 = (v_18||v_19);
  rule7 = (v_20||_out->closet_open);
  v_45 = !(_out->closet_open);
  v_46 = (v_44&&v_45);
  rule3 = (v_37||v_46);
  if (self->ck_10_1) {
    v_69 = !(c);
    if (v_69) {
      r_8_St_16_Closed = true;
      s_8_St_16_Closed_1 = false;
    } else {
      r_8_St_16_Closed = self->pnr_8;
      s_8_St_16_Closed_1 = true;
    };
    r_8 = r_8_St_16_Closed;
    s_8_1 = s_8_St_16_Closed_1;
  } else {
    v_68 = !(c);
    if (v_68) {
      r_8_St_16_Open = true;
    } else {
      r_8_St_16_Open = self->pnr_8;
    };
    r_8 = r_8_St_16_Open;
    if (v_68) {
      s_8_St_16_Open_1 = true;
    } else {
      s_8_St_16_Open_1 = false;
    };
    s_8_1 = s_8_St_16_Open_1;
  };
  ck_11_1 = s_8_1;
  if (ck_11_1) {
    door_open_1_St_16_Closed = false;
    nr_8_St_16_Closed = false;
    ns_8_St_16_Closed_1 = true;
    door_open_1 = door_open_1_St_16_Closed;
    nr_8 = nr_8_St_16_Closed;
    ns_8_1 = ns_8_St_16_Closed_1;
  } else {
    door_open_1_St_16_Open = true;
    door_open_1 = door_open_1_St_16_Open;
    nr_8_St_16_Open = false;
    nr_8 = nr_8_St_16_Open;
    ns_8_St_16_Open_1 = false;
    ns_8_1 = ns_8_St_16_Open_1;
  };
  _out->door_open = door_open_1;
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
  v_48 = !(_out->night);
  v_49 = (v_47&&v_48);
  v_50 = !(v_49);
  rule2 = (v_50||v_53);
  v_55 = (v_54&&_out->night);
  v_56 = !(v_55);
  rule1 = (v_56||v_59);
  v_60 = (rule1&&rule2);
  v_61 = (v_60&&rule3);
  v_62 = (v_61&&rule4);
  v_63 = (v_62&&rule5);
  v_64 = (v_63&&rule6);
  v_65 = (v_64&&rule6_5);
  v_66 = (v_65&&rule7);
  v_67 = (v_66&&rule7_5);
  self->pnr = nr;
  self->ck_26_1 = ns_1_2;
  self->pnr_1 = nr_1;
  self->ck_24_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->v_121 = ns_2_1;
  self->v_122 = ns_2_2;
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

