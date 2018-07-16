/* --- Generated the 16/7/2018 at 14:7 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jun. 15 15:41:53 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "system.h"

void System__lamp_reset(System__lamp_mem* self) {
  self->pnr = false;
  self->ck_1_2 = true;
}

void System__lamp_step(int c1, int c2, int sw, System__lamp_out* _out,
                       System__lamp_mem* self) {
  
  int nr_St_On;
  int ns_St_On_1;
  int lamp_on_St_On;
  int nr_St_Off;
  int ns_St_Off_1;
  int lamp_on_St_Off;
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
    lamp_on_St_Off = false;
    nr_St_Off = false;
    ns_St_Off_1 = true;
    _out->lamp_on = lamp_on_St_Off;
    nr = nr_St_Off;
    ns_1 = ns_St_Off_1;
  } else {
    lamp_on_St_On = true;
    _out->lamp_on = lamp_on_St_On;
    nr_St_On = false;
    nr = nr_St_On;
    ns_St_On_1 = false;
    ns_1 = ns_St_On_1;
  };
  self->pnr = nr;
  self->ck_1_2 = ns_1;;
}

void System__blind_reset(System__blind_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__blind_step(int c1, int c2, int sw, System__blind_out* _out,
                        System__blind_mem* self) {
  
  int nr_St_1_Up;
  int ns_St_1_Up_1;
  int blind_open_St_1_Up;
  int nr_St_1_Down;
  int ns_St_1_Down_1;
  int blind_open_St_1_Down;
  int ck_2_1;
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
  int v;
  int r_St_1_Up;
  int s_St_1_Up_1;
  int r_St_1_Down;
  int s_St_1_Down_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_9 = !(c2);
    v_8 = (c1&&sw);
    v_10 = (v_8||v_9);
    if (v_10) {
      r_St_1_Down = true;
      s_St_1_Down_1 = false;
    } else {
      r_St_1_Down = self->pnr;
      s_St_1_Down_1 = true;
    };
    r = r_St_1_Down;
    s_1 = s_St_1_Down_1;
  } else {
    v_6 = !(c2);
    v = (c1&&sw);
    v_7 = (v||v_6);
    if (v_7) {
      r_St_1_Up = true;
    } else {
      r_St_1_Up = self->pnr;
    };
    r = r_St_1_Up;
    if (v_7) {
      s_St_1_Up_1 = true;
    } else {
      s_St_1_Up_1 = false;
    };
    s_1 = s_St_1_Up_1;
  };
  ck_2_1 = s_1;
  if (ck_2_1) {
    blind_open_St_1_Down = false;
    nr_St_1_Down = false;
    ns_St_1_Down_1 = true;
    _out->blind_open = blind_open_St_1_Down;
    nr = nr_St_1_Down;
    ns_1 = ns_St_1_Down_1;
  } else {
    blind_open_St_1_Up = true;
    _out->blind_open = blind_open_St_1_Up;
    nr_St_1_Up = false;
    nr = nr_St_1_Up;
    ns_St_1_Up_1 = false;
    ns_1 = ns_St_1_Up_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__door_reset(System__door_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__door_step(int c_door, System__door_out* _out,
                       System__door_mem* self) {
  
  int nr_St_2_Open;
  int ns_St_2_Open_1;
  int door_open_St_2_Open;
  int nr_St_2_Closed;
  int ns_St_2_Closed_1;
  int door_open_St_2_Closed;
  int ck_3_1;
  int v_11;
  int v;
  int r_St_2_Open;
  int s_St_2_Open_1;
  int r_St_2_Closed;
  int s_St_2_Closed_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_11 = !(c_door);
    if (v_11) {
      r_St_2_Closed = true;
      s_St_2_Closed_1 = false;
    } else {
      r_St_2_Closed = self->pnr;
      s_St_2_Closed_1 = true;
    };
    r = r_St_2_Closed;
    s_1 = s_St_2_Closed_1;
  } else {
    v = !(c_door);
    if (v) {
      r_St_2_Open = true;
    } else {
      r_St_2_Open = self->pnr;
    };
    r = r_St_2_Open;
    if (v) {
      s_St_2_Open_1 = true;
    } else {
      s_St_2_Open_1 = false;
    };
    s_1 = s_St_2_Open_1;
  };
  ck_3_1 = s_1;
  if (ck_3_1) {
    door_open_St_2_Closed = false;
    nr_St_2_Closed = false;
    ns_St_2_Closed_1 = true;
    _out->door_open = door_open_St_2_Closed;
    nr = nr_St_2_Closed;
    ns_1 = ns_St_2_Closed_1;
  } else {
    door_open_St_2_Open = true;
    _out->door_open = door_open_St_2_Open;
    nr_St_2_Open = false;
    nr = nr_St_2_Open;
    ns_St_2_Open_1 = false;
    ns_1 = ns_St_2_Open_1;
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
  
  int nr_St_3_Open;
  int ns_St_3_Open_1;
  int closet_open_St_3_Open;
  int nr_St_3_Locked;
  int ns_St_3_Locked_1;
  int closet_open_St_3_Locked;
  int ck_4_1;
  int v;
  int r_St_3_Open;
  int s_St_3_Open_1;
  int r_St_3_Locked;
  int s_St_3_Locked_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v = !(c);
    if (v) {
      r_St_3_Locked = true;
      s_St_3_Locked_1 = false;
    } else {
      r_St_3_Locked = self->pnr;
      s_St_3_Locked_1 = true;
    };
    r = r_St_3_Locked;
    s_1 = s_St_3_Locked_1;
  } else {
    if (c) {
      r_St_3_Open = true;
    } else {
      r_St_3_Open = self->pnr;
    };
    r = r_St_3_Open;
    if (c) {
      s_St_3_Open_1 = true;
    } else {
      s_St_3_Open_1 = false;
    };
    s_1 = s_St_3_Open_1;
  };
  ck_4_1 = s_1;
  if (ck_4_1) {
    closet_open_St_3_Locked = false;
    nr_St_3_Locked = false;
    ns_St_3_Locked_1 = true;
    _out->closet_open = closet_open_St_3_Locked;
    nr = nr_St_3_Locked;
    ns_1 = ns_St_3_Locked_1;
  } else {
    closet_open_St_3_Open = true;
    _out->closet_open = closet_open_St_3_Open;
    nr_St_3_Open = false;
    nr = nr_St_3_Open;
    ns_St_3_Open_1 = false;
    ns_1 = ns_St_3_Open_1;
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
  
  int nr_St_4_Present;
  int ns_St_4_Present_1;
  int presence_St_4_Present;
  int nr_St_4_Not_Present;
  int ns_St_4_Not_Present_1;
  int presence_St_4_Not_Present;
  int ck_5_1;
  int r_St_4_Present;
  int s_St_4_Present_1;
  int r_St_4_Not_Present;
  int s_St_4_Not_Present_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (arrived) {
      r_St_4_Not_Present = true;
      s_St_4_Not_Present_1 = false;
    } else {
      r_St_4_Not_Present = self->pnr;
      s_St_4_Not_Present_1 = true;
    };
    r = r_St_4_Not_Present;
    s_1 = s_St_4_Not_Present_1;
  } else {
    if (arrived) {
      r_St_4_Present = true;
    } else {
      r_St_4_Present = self->pnr;
    };
    r = r_St_4_Present;
    if (arrived) {
      s_St_4_Present_1 = true;
    } else {
      s_St_4_Present_1 = false;
    };
    s_1 = s_St_4_Present_1;
  };
  ck_5_1 = s_1;
  if (ck_5_1) {
    presence_St_4_Not_Present = false;
    nr_St_4_Not_Present = false;
    ns_St_4_Not_Present_1 = true;
    _out->presence = presence_St_4_Not_Present;
    nr = nr_St_4_Not_Present;
    ns_1 = ns_St_4_Not_Present_1;
  } else {
    presence_St_4_Present = true;
    _out->presence = presence_St_4_Present;
    nr_St_4_Present = false;
    nr = nr_St_4_Present;
    ns_St_4_Present_1 = false;
    ns_1 = ns_St_4_Present_1;
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
  
  int nr_St_5_On;
  int ns_St_5_On_1;
  int computer_on_St_5_On;
  int nr_St_5_Off;
  int ns_St_5_Off_1;
  int computer_on_St_5_Off;
  int ck_6_1;
  int v_12;
  int v;
  int r_St_5_On;
  int s_St_5_On_1;
  int r_St_5_Off;
  int s_St_5_Off_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_12 = !(c);
    if (v_12) {
      r_St_5_Off = true;
      s_St_5_Off_1 = false;
    } else {
      r_St_5_Off = self->pnr;
      s_St_5_Off_1 = true;
    };
    r = r_St_5_Off;
    s_1 = s_St_5_Off_1;
  } else {
    v = !(c);
    if (v) {
      r_St_5_On = true;
    } else {
      r_St_5_On = self->pnr;
    };
    r = r_St_5_On;
    if (v) {
      s_St_5_On_1 = true;
    } else {
      s_St_5_On_1 = false;
    };
    s_1 = s_St_5_On_1;
  };
  ck_6_1 = s_1;
  if (ck_6_1) {
    computer_on_St_5_Off = false;
    nr_St_5_Off = false;
    ns_St_5_Off_1 = true;
    _out->computer_on = computer_on_St_5_Off;
    nr = nr_St_5_Off;
    ns_1 = ns_St_5_Off_1;
  } else {
    computer_on_St_5_On = true;
    _out->computer_on = computer_on_St_5_On;
    nr_St_5_On = false;
    nr = nr_St_5_On;
    ns_St_5_On_1 = false;
    ns_1 = ns_St_5_On_1;
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
  
  int nr_St_6_Open;
  int ns_St_6_Open_1;
  int window_open_St_6_Open;
  int nr_St_6_Closed;
  int ns_St_6_Closed_1;
  int window_open_St_6_Closed;
  int ck_7_1;
  int v;
  int r_St_6_Open;
  int s_St_6_Open_1;
  int r_St_6_Closed;
  int s_St_6_Closed_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v = !(c);
    if (v) {
      r_St_6_Closed = true;
      s_St_6_Closed_1 = false;
    } else {
      r_St_6_Closed = self->pnr;
      s_St_6_Closed_1 = true;
    };
    r = r_St_6_Closed;
    s_1 = s_St_6_Closed_1;
  } else {
    if (c) {
      r_St_6_Open = true;
    } else {
      r_St_6_Open = self->pnr;
    };
    r = r_St_6_Open;
    if (c) {
      s_St_6_Open_1 = true;
    } else {
      s_St_6_Open_1 = false;
    };
    s_1 = s_St_6_Open_1;
  };
  ck_7_1 = s_1;
  if (ck_7_1) {
    window_open_St_6_Closed = false;
    nr_St_6_Closed = false;
    ns_St_6_Closed_1 = true;
    _out->window_open = window_open_St_6_Closed;
    nr = nr_St_6_Closed;
    ns_1 = ns_St_6_Closed_1;
  } else {
    window_open_St_6_Open = true;
    _out->window_open = window_open_St_6_Open;
    nr_St_6_Open = false;
    nr = nr_St_6_Open;
    ns_St_6_Open_1 = false;
    ns_1 = ns_St_6_Open_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__air_conditioner_reset(System__air_conditioner_mem* self) {
  self->pnr = false;
  self->v_188 = false;
  self->v_189 = false;
}

void System__air_conditioner_step(int c1, int c2,
                                  System__air_conditioner_out* _out,
                                  System__air_conditioner_mem* self) {
  
  int v_187;
  int v_186;
  int v_185;
  int v_184;
  int v_183;
  int v_182;
  int v_181;
  int v_180;
  int ns_St_7_Max_2_0;
  int ns_St_7_Max_2_1;
  int ns_St_7_Min_2_0;
  int ns_St_7_Min_2_1;
  int ns_St_7_Off_2_0;
  int ns_St_7_Off_2_1;
  int ck_8_2_0;
  int ck_8_2_1;
  int nr_St_7_Max;
  int ns_St_7_Max_2;
  int ns_St_7_Max_1;
  int air_state_St_7_Max;
  int nr_St_7_Min;
  int ns_St_7_Min_2;
  int ns_St_7_Min_1;
  int air_state_St_7_Min;
  int nr_St_7_Off;
  int ns_St_7_Off_2;
  int ns_St_7_Off_1;
  int air_state_St_7_Off;
  int ck_8_2;
  int ck_8_1;
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
  int v_16;
  int v_14_2_0;
  int v_14_2_1;
  int v_15;
  int v_14_2;
  int v_14_1;
  int v_13;
  int v;
  int v_195;
  int v_194;
  int v_193;
  int v_192;
  int v_191;
  int v_190;
  int s_St_7_Max_2_0;
  int s_St_7_Max_2_1;
  int s_St_7_Min_2_0;
  int s_St_7_Min_2_1;
  int s_St_7_Off_2_0;
  int s_St_7_Off_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_7_Max;
  int s_St_7_Max_2;
  int s_St_7_Max_1;
  int r_St_7_Min;
  int s_St_7_Min_2;
  int s_St_7_Min_1;
  int r_St_7_Off;
  int s_St_7_Off_2;
  int s_St_7_Off_1;
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
  ck_1 = self->v_188;
  ck_2 = self->v_189;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_13 = !(c2);
      if (v_13) {
        v_15 = true;
        v_14_1 = false;
        v_14_2 = false;
      } else {
        v_15 = self->pnr;
        v_14_1 = true;
        v_14_2 = true;
      };
      v = !(c1);
      if (v) {
        r_St_7_Max = true;
      } else {
        r_St_7_Max = v_15;
      };
      v_194 = r_St_7_Max;
      if (v) {
        s_St_7_Max_1 = true;
      } else {
        s_St_7_Max_1 = v_14_1;
      };
      v_190 = s_St_7_Max_1;
      if (v) {
        s_St_7_Max_2 = false;
      } else {
        s_St_7_Max_2 = v_14_2;
      };
      v_191 = s_St_7_Max_2;
    } else {
      v_17 = !(c2);
      if (v_17) {
        v_19 = true;
        v_18_1 = true;
        v_18_2 = true;
      } else {
        v_19 = self->pnr;
        v_18_1 = true;
        v_18_2 = false;
      };
      v_16 = !(c1);
      if (v_16) {
        r_St_7_Min = true;
        s_St_7_Min_1 = false;
        s_St_7_Min_2 = false;
      } else {
        r_St_7_Min = v_19;
        s_St_7_Min_1 = v_18_1;
        s_St_7_Min_2 = v_18_2;
      };
      v_194 = r_St_7_Min;
      v_190 = s_St_7_Min_1;
      v_191 = s_St_7_Min_2;
    };
    s_1 = v_190;
    s_2 = v_191;
    r = v_194;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_195 = true;
      v_192 = true;
      v_193 = true;
    } else {
      v_21 = !(c2);
      if (v_21) {
        v_23 = true;
        v_22_1 = true;
        v_22_2 = true;
      } else {
        v_23 = self->pnr;
        v_22_1 = false;
        v_22_2 = false;
      };
      v_20 = !(c1);
      if (v_20) {
        r_St_7_Off = true;
      } else {
        r_St_7_Off = v_23;
      };
      v_195 = r_St_7_Off;
      if (v_20) {
        s_St_7_Off_1 = true;
      } else {
        s_St_7_Off_1 = v_22_1;
      };
      v_192 = s_St_7_Off_1;
      if (v_20) {
        s_St_7_Off_2 = false;
      } else {
        s_St_7_Off_2 = v_22_2;
      };
      v_193 = s_St_7_Off_2;
      if (v_22_1) {
        v_22_2_1 = v_22_2;
      } else {
        v_22_2_0 = v_22_2;
      };
      if (s_St_7_Off_1) {
        s_St_7_Off_2_1 = s_St_7_Off_2;
      } else {
        s_St_7_Off_2_0 = s_St_7_Off_2;
      };
    };
    s_1 = v_192;
    s_2 = v_193;
    r = v_195;
  };
  ck_8_1 = s_1;
  ck_8_2 = s_2;
  if (ck_8_1) {
    ck_8_2_1 = ck_8_2;
    if (ck_8_2_1) {
      air_state_St_7_Max = 2;
      v_180 = air_state_St_7_Max;
      nr_St_7_Max = false;
      v_186 = nr_St_7_Max;
      ns_St_7_Max_1 = true;
      v_182 = ns_St_7_Max_1;
      ns_St_7_Max_2 = true;
      v_183 = ns_St_7_Max_2;
    } else {
      air_state_St_7_Min = 1;
      nr_St_7_Min = false;
      ns_St_7_Min_1 = true;
      ns_St_7_Min_2 = false;
      v_180 = air_state_St_7_Min;
      v_186 = nr_St_7_Min;
      v_182 = ns_St_7_Min_1;
      v_183 = ns_St_7_Min_2;
    };
    _out->air_state = v_180;
    ns_1 = v_182;
    ns_2 = v_183;
    nr = v_186;
  } else {
    ck_8_2_0 = ck_8_2;
    if (ck_8_2_0) {
      v_181 = 0;
      v_187 = true;
      v_184 = true;
      v_185 = true;
    } else {
      air_state_St_7_Off = 0;
      v_181 = air_state_St_7_Off;
      nr_St_7_Off = false;
      v_187 = nr_St_7_Off;
      ns_St_7_Off_1 = false;
      v_184 = ns_St_7_Off_1;
      ns_St_7_Off_2 = false;
      v_185 = ns_St_7_Off_2;
      if (ns_St_7_Off_1) {
        ns_St_7_Off_2_1 = ns_St_7_Off_2;
      } else {
        ns_St_7_Off_2_0 = ns_St_7_Off_2;
      };
    };
    _out->air_state = v_181;
    ns_1 = v_184;
    ns_2 = v_185;
    nr = v_187;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (ck_8_1) {
    if (ck_8_2_1) {
      if (ns_St_7_Max_1) {
        ns_St_7_Max_2_1 = ns_St_7_Max_2;
      } else {
        ns_St_7_Max_2_0 = ns_St_7_Max_2;
      };
    } else {
      if (ns_St_7_Min_1) {
        ns_St_7_Min_2_1 = ns_St_7_Min_2;
      } else {
        ns_St_7_Min_2_0 = ns_St_7_Min_2;
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
      if (v_14_1) {
        v_14_2_1 = v_14_2;
      } else {
        v_14_2_0 = v_14_2;
      };
      if (s_St_7_Max_1) {
        s_St_7_Max_2_1 = s_St_7_Max_2;
      } else {
        s_St_7_Max_2_0 = s_St_7_Max_2;
      };
    } else {
      if (v_18_1) {
        v_18_2_1 = v_18_2;
      } else {
        v_18_2_0 = v_18_2;
      };
      if (s_St_7_Min_1) {
        s_St_7_Min_2_1 = s_St_7_Min_2;
      } else {
        s_St_7_Min_2_0 = s_St_7_Min_2;
      };
    };
  };
  self->pnr = nr;
  self->v_188 = ns_1;
  self->v_189 = ns_2;;
}

void System__day_shift_reset(System__day_shift_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__day_shift_step(int change, System__day_shift_out* _out,
                            System__day_shift_mem* self) {
  
  int nr_St_8_Noite;
  int ns_St_8_Noite_1;
  int night_St_8_Noite;
  int nr_St_8_Dia;
  int ns_St_8_Dia_1;
  int night_St_8_Dia;
  int ck_9_1;
  int r_St_8_Noite;
  int s_St_8_Noite_1;
  int r_St_8_Dia;
  int s_St_8_Dia_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (change) {
      r_St_8_Dia = true;
      s_St_8_Dia_1 = false;
    } else {
      r_St_8_Dia = self->pnr;
      s_St_8_Dia_1 = true;
    };
    r = r_St_8_Dia;
    s_1 = s_St_8_Dia_1;
  } else {
    if (change) {
      r_St_8_Noite = true;
    } else {
      r_St_8_Noite = self->pnr;
    };
    r = r_St_8_Noite;
    if (change) {
      s_St_8_Noite_1 = true;
    } else {
      s_St_8_Noite_1 = false;
    };
    s_1 = s_St_8_Noite_1;
  };
  ck_9_1 = s_1;
  if (ck_9_1) {
    night_St_8_Dia = false;
    nr_St_8_Dia = false;
    ns_St_8_Dia_1 = true;
    _out->night = night_St_8_Dia;
    nr = nr_St_8_Dia;
    ns_1 = ns_St_8_Dia_1;
  } else {
    night_St_8_Noite = true;
    _out->night = night_St_8_Noite;
    nr_St_8_Noite = false;
    nr = nr_St_8_Noite;
    ns_St_8_Noite_1 = false;
    ns_1 = ns_St_8_Noite_1;
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
  
  int nr_St_9_Falha;
  int ns_St_9_Falha_1;
  int failed_St_9_Falha;
  int nr_St_9_Funcionando;
  int ns_St_9_Funcionando_1;
  int failed_St_9_Funcionando;
  int ck_10_1;
  int r_St_9_Falha;
  int s_St_9_Falha_1;
  int r_St_9_Funcionando;
  int s_St_9_Funcionando_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (failed_recovered) {
      r_St_9_Falha = true;
    } else {
      r_St_9_Falha = self->pnr;
    };
    r = r_St_9_Falha;
    if (failed_recovered) {
      s_St_9_Falha_1 = false;
    } else {
      s_St_9_Falha_1 = true;
    };
    s_1 = s_St_9_Falha_1;
  } else {
    if (failed_recovered) {
      r_St_9_Funcionando = true;
      s_St_9_Funcionando_1 = true;
    } else {
      r_St_9_Funcionando = self->pnr;
      s_St_9_Funcionando_1 = false;
    };
    r = r_St_9_Funcionando;
    s_1 = s_St_9_Funcionando_1;
  };
  ck_10_1 = s_1;
  if (ck_10_1) {
    failed_St_9_Falha = true;
    _out->failed = failed_St_9_Falha;
    nr_St_9_Falha = false;
    nr = nr_St_9_Falha;
    ns_St_9_Falha_1 = true;
    ns_1 = ns_St_9_Falha_1;
  } else {
    failed_St_9_Funcionando = false;
    nr_St_9_Funcionando = false;
    ns_St_9_Funcionando_1 = false;
    _out->failed = failed_St_9_Funcionando;
    nr = nr_St_9_Funcionando;
    ns_1 = ns_St_9_Funcionando_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__air_fail_reset(System__air_fail_mem* self) {
  self->pnr = false;
  self->ck_12_1 = false;
  self->pnr_1 = false;
  self->v_204 = false;
  self->v_205 = false;
}

void System__air_fail_step(int c1, int c2, int failed_recovered,
                           System__air_fail_out* _out,
                           System__air_fail_mem* self) {
  
  int nr_St_10_Falha;
  int ns_St_10_Falha_1;
  int failed_1_St_10_Falha;
  int nr_St_10_Funcionando;
  int ns_St_10_Funcionando_1;
  int failed_1_St_10_Funcionando;
  int ck_13_1;
  int r_St_10_Falha;
  int s_St_10_Falha_1;
  int r_St_10_Funcionando;
  int s_St_10_Funcionando_1;
  int v_203;
  int v_202;
  int v_201;
  int v_200;
  int v_199;
  int v_198;
  int v_197;
  int v_196;
  int ns_1_St_11_Max_2_0;
  int ns_1_St_11_Max_2_1;
  int ns_1_St_11_Min_2_0;
  int ns_1_St_11_Min_2_1;
  int ns_1_St_11_Off_2_0;
  int ns_1_St_11_Off_2_1;
  int ck_11_2_0;
  int ck_11_2_1;
  int nr_1_St_11_Max;
  int ns_1_St_11_Max_2;
  int ns_1_St_11_Max_1;
  int air_state_1_St_11_Max;
  int nr_1_St_11_Min;
  int ns_1_St_11_Min_2;
  int ns_1_St_11_Min_1;
  int air_state_1_St_11_Min;
  int nr_1_St_11_Off;
  int ns_1_St_11_Off_2;
  int ns_1_St_11_Off_1;
  int air_state_1_St_11_Off;
  int ck_11_2;
  int ck_11_1;
  int v_33_2_0;
  int v_33_2_1;
  int v_34;
  int v_33_2;
  int v_33_1;
  int v_32;
  int v_31;
  int v_29_2_0;
  int v_29_2_1;
  int v_30;
  int v_29_2;
  int v_29_1;
  int v_28;
  int v_27;
  int v_25_2_0;
  int v_25_2_1;
  int v_26;
  int v_25_2;
  int v_25_1;
  int v_24;
  int v;
  int v_211;
  int v_210;
  int v_209;
  int v_208;
  int v_207;
  int v_206;
  int s_1_St_11_Max_2_0;
  int s_1_St_11_Max_2_1;
  int s_1_St_11_Min_2_0;
  int s_1_St_11_Min_2_1;
  int s_1_St_11_Off_2_0;
  int s_1_St_11_Off_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_1_St_11_Max;
  int s_1_St_11_Max_2;
  int s_1_St_11_Max_1;
  int r_1_St_11_Min;
  int s_1_St_11_Min_2;
  int s_1_St_11_Min_1;
  int r_1_St_11_Off;
  int s_1_St_11_Off_2;
  int s_1_St_11_Off_1;
  int ck_2;
  int ck_1;
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
  failed_recovered_1 = failed_recovered;
  c1_1 = c1;
  c2_1 = c2;
  ck_1 = self->v_204;
  ck_2 = self->v_205;
  if (self->ck_12_1) {
    if (failed_recovered_1) {
      r_St_10_Falha = true;
    } else {
      r_St_10_Falha = self->pnr;
    };
    r = r_St_10_Falha;
    if (failed_recovered_1) {
      s_St_10_Falha_1 = false;
    } else {
      s_St_10_Falha_1 = true;
    };
    s_1_3 = s_St_10_Falha_1;
  } else {
    if (failed_recovered_1) {
      r_St_10_Funcionando = true;
      s_St_10_Funcionando_1 = true;
    } else {
      r_St_10_Funcionando = self->pnr;
      s_St_10_Funcionando_1 = false;
    };
    r = r_St_10_Funcionando;
    s_1_3 = s_St_10_Funcionando_1;
  };
  ck_13_1 = s_1_3;
  if (ck_13_1) {
    failed_1_St_10_Falha = true;
    failed_1 = failed_1_St_10_Falha;
    nr_St_10_Falha = false;
    nr = nr_St_10_Falha;
    ns_St_10_Falha_1 = true;
    ns_1_3 = ns_St_10_Falha_1;
  } else {
    failed_1_St_10_Funcionando = false;
    nr_St_10_Funcionando = false;
    ns_St_10_Funcionando_1 = false;
    failed_1 = failed_1_St_10_Funcionando;
    nr = nr_St_10_Funcionando;
    ns_1_3 = ns_St_10_Funcionando_1;
  };
  _out->failed = failed_1;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_24 = !(c2_1);
      if (v_24) {
        v_26 = true;
        v_25_1 = false;
        v_25_2 = false;
      } else {
        v_26 = self->pnr_1;
        v_25_1 = true;
        v_25_2 = true;
      };
      v = !(c1_1);
      if (v) {
        r_1_St_11_Max = true;
      } else {
        r_1_St_11_Max = v_26;
      };
      v_210 = r_1_St_11_Max;
      if (v) {
        s_1_St_11_Max_1 = true;
      } else {
        s_1_St_11_Max_1 = v_25_1;
      };
      v_206 = s_1_St_11_Max_1;
      if (v) {
        s_1_St_11_Max_2 = false;
      } else {
        s_1_St_11_Max_2 = v_25_2;
      };
      v_207 = s_1_St_11_Max_2;
    } else {
      v_28 = !(c2_1);
      if (v_28) {
        v_30 = true;
        v_29_1 = true;
        v_29_2 = true;
      } else {
        v_30 = self->pnr_1;
        v_29_1 = true;
        v_29_2 = false;
      };
      v_27 = !(c1_1);
      if (v_27) {
        r_1_St_11_Min = true;
        s_1_St_11_Min_1 = false;
        s_1_St_11_Min_2 = false;
      } else {
        r_1_St_11_Min = v_30;
        s_1_St_11_Min_1 = v_29_1;
        s_1_St_11_Min_2 = v_29_2;
      };
      v_210 = r_1_St_11_Min;
      v_206 = s_1_St_11_Min_1;
      v_207 = s_1_St_11_Min_2;
    };
    s_1_1 = v_206;
    s_1_2 = v_207;
    r_1 = v_210;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_211 = true;
      v_208 = true;
      v_209 = true;
    } else {
      v_32 = !(c2_1);
      if (v_32) {
        v_34 = true;
        v_33_1 = true;
        v_33_2 = true;
      } else {
        v_34 = self->pnr_1;
        v_33_1 = false;
        v_33_2 = false;
      };
      v_31 = !(c1_1);
      if (v_31) {
        r_1_St_11_Off = true;
      } else {
        r_1_St_11_Off = v_34;
      };
      v_211 = r_1_St_11_Off;
      if (v_31) {
        s_1_St_11_Off_1 = true;
      } else {
        s_1_St_11_Off_1 = v_33_1;
      };
      v_208 = s_1_St_11_Off_1;
      if (v_31) {
        s_1_St_11_Off_2 = false;
      } else {
        s_1_St_11_Off_2 = v_33_2;
      };
      v_209 = s_1_St_11_Off_2;
      if (v_33_1) {
        v_33_2_1 = v_33_2;
      } else {
        v_33_2_0 = v_33_2;
      };
      if (s_1_St_11_Off_1) {
        s_1_St_11_Off_2_1 = s_1_St_11_Off_2;
      } else {
        s_1_St_11_Off_2_0 = s_1_St_11_Off_2;
      };
    };
    s_1_1 = v_208;
    s_1_2 = v_209;
    r_1 = v_211;
  };
  ck_11_1 = s_1_1;
  ck_11_2 = s_1_2;
  if (ck_11_1) {
    ck_11_2_1 = ck_11_2;
    if (ck_11_2_1) {
      air_state_1_St_11_Max = 2;
      v_196 = air_state_1_St_11_Max;
      nr_1_St_11_Max = false;
      v_202 = nr_1_St_11_Max;
      ns_1_St_11_Max_1 = true;
      v_198 = ns_1_St_11_Max_1;
      ns_1_St_11_Max_2 = true;
      v_199 = ns_1_St_11_Max_2;
    } else {
      air_state_1_St_11_Min = 1;
      nr_1_St_11_Min = false;
      ns_1_St_11_Min_1 = true;
      ns_1_St_11_Min_2 = false;
      v_196 = air_state_1_St_11_Min;
      v_202 = nr_1_St_11_Min;
      v_198 = ns_1_St_11_Min_1;
      v_199 = ns_1_St_11_Min_2;
    };
    air_state_1 = v_196;
    ns_1_1 = v_198;
    ns_1_2 = v_199;
    nr_1 = v_202;
  } else {
    ck_11_2_0 = ck_11_2;
    if (ck_11_2_0) {
      v_197 = 0;
      v_203 = true;
      v_200 = true;
      v_201 = true;
    } else {
      air_state_1_St_11_Off = 0;
      v_197 = air_state_1_St_11_Off;
      nr_1_St_11_Off = false;
      v_203 = nr_1_St_11_Off;
      ns_1_St_11_Off_1 = false;
      v_200 = ns_1_St_11_Off_1;
      ns_1_St_11_Off_2 = false;
      v_201 = ns_1_St_11_Off_2;
      if (ns_1_St_11_Off_1) {
        ns_1_St_11_Off_2_1 = ns_1_St_11_Off_2;
      } else {
        ns_1_St_11_Off_2_0 = ns_1_St_11_Off_2;
      };
    };
    air_state_1 = v_197;
    ns_1_1 = v_200;
    ns_1_2 = v_201;
    nr_1 = v_203;
  };
  _out->air_state = air_state_1;
  if (ns_1_1) {
    ns_1_2_1 = ns_1_2;
  } else {
    ns_1_2_0 = ns_1_2;
  };
  if (ck_11_1) {
    if (ck_11_2_1) {
      if (ns_1_St_11_Max_1) {
        ns_1_St_11_Max_2_1 = ns_1_St_11_Max_2;
      } else {
        ns_1_St_11_Max_2_0 = ns_1_St_11_Max_2;
      };
    } else {
      if (ns_1_St_11_Min_1) {
        ns_1_St_11_Min_2_1 = ns_1_St_11_Min_2;
      } else {
        ns_1_St_11_Min_2_0 = ns_1_St_11_Min_2;
      };
    };
  };
  if (s_1_1) {
    s_1_2_1 = s_1_2;
  } else {
    s_1_2_0 = s_1_2;
  };
  if (ck_1) {
    if (ck_2_1) {
      if (v_25_1) {
        v_25_2_1 = v_25_2;
      } else {
        v_25_2_0 = v_25_2;
      };
      if (s_1_St_11_Max_1) {
        s_1_St_11_Max_2_1 = s_1_St_11_Max_2;
      } else {
        s_1_St_11_Max_2_0 = s_1_St_11_Max_2;
      };
    } else {
      if (v_29_1) {
        v_29_2_1 = v_29_2;
      } else {
        v_29_2_0 = v_29_2;
      };
      if (s_1_St_11_Min_1) {
        s_1_St_11_Min_2_1 = s_1_St_11_Min_2;
      } else {
        s_1_St_11_Min_2_0 = s_1_St_11_Min_2;
      };
    };
  };
  self->pnr = nr;
  self->ck_12_1 = ns_1_3;
  self->pnr_1 = nr_1;
  self->v_204 = ns_1_1;
  self->v_205 = ns_1_2;;
}

void System__lamp_fail_reset(System__lamp_fail_mem* self) {
  self->pnr = false;
  self->ck_15_1 = false;
  self->pnr_2 = false;
  self->ck_1 = true;
}

void System__lamp_fail_step(int sw, int c1, int c2, int failed_recovered,
                            System__lamp_fail_out* _out,
                            System__lamp_fail_mem* self) {
  
  int nr_St_12_Falha;
  int ns_St_12_Falha_1;
  int failed_2_St_12_Falha;
  int nr_St_12_Funcionando;
  int ns_St_12_Funcionando_1;
  int failed_2_St_12_Funcionando;
  int ck_16_1;
  int r_St_12_Falha;
  int s_St_12_Falha_1;
  int r_St_12_Funcionando;
  int s_St_12_Funcionando_1;
  int nr_2_St_13_On;
  int ns_2_St_13_On_1;
  int lamp_on_St_13_On;
  int nr_2_St_13_Off;
  int ns_2_St_13_Off_1;
  int lamp_on_St_13_Off;
  int ck_14_1;
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v;
  int r_2_St_13_On;
  int s_2_St_13_On_1;
  int r_2_St_13_Off;
  int s_2_St_13_Off_1;
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
  int lamp_on;
  failed_recovered_2 = failed_recovered;
  c1_2 = sw;
  c2_2 = c1;
  sw_1 = c2;
  if (self->ck_15_1) {
    if (failed_recovered_2) {
      r_St_12_Falha = true;
    } else {
      r_St_12_Falha = self->pnr;
    };
    r = r_St_12_Falha;
    if (failed_recovered_2) {
      s_St_12_Falha_1 = false;
    } else {
      s_St_12_Falha_1 = true;
    };
    s_1 = s_St_12_Falha_1;
  } else {
    if (failed_recovered_2) {
      r_St_12_Funcionando = true;
      s_St_12_Funcionando_1 = true;
    } else {
      r_St_12_Funcionando = self->pnr;
      s_St_12_Funcionando_1 = false;
    };
    r = r_St_12_Funcionando;
    s_1 = s_St_12_Funcionando_1;
  };
  ck_16_1 = s_1;
  if (ck_16_1) {
    failed_2_St_12_Falha = true;
    failed_2 = failed_2_St_12_Falha;
    nr_St_12_Falha = false;
    nr = nr_St_12_Falha;
    ns_St_12_Falha_1 = true;
    ns_1 = ns_St_12_Falha_1;
  } else {
    failed_2_St_12_Funcionando = false;
    nr_St_12_Funcionando = false;
    ns_St_12_Funcionando_1 = false;
    failed_2 = failed_2_St_12_Funcionando;
    nr = nr_St_12_Funcionando;
    ns_1 = ns_St_12_Funcionando_1;
  };
  _out->failed = failed_2;
  if (self->ck_1) {
    v_38 = !(c2_2);
    v_37 = (c1_2&&sw_1);
    v_39 = (v_37||v_38);
    if (v_39) {
      r_2_St_13_Off = true;
      s_2_St_13_Off_1 = false;
    } else {
      r_2_St_13_Off = self->pnr_2;
      s_2_St_13_Off_1 = true;
    };
    r_2 = r_2_St_13_Off;
    s_2_1 = s_2_St_13_Off_1;
  } else {
    v_35 = !(c2_2);
    v = (c1_2&&sw_1);
    v_36 = (v||v_35);
    if (v_36) {
      r_2_St_13_On = true;
    } else {
      r_2_St_13_On = self->pnr_2;
    };
    r_2 = r_2_St_13_On;
    if (v_36) {
      s_2_St_13_On_1 = true;
    } else {
      s_2_St_13_On_1 = false;
    };
    s_2_1 = s_2_St_13_On_1;
  };
  ck_14_1 = s_2_1;
  if (ck_14_1) {
    lamp_on_St_13_Off = false;
    nr_2_St_13_Off = false;
    ns_2_St_13_Off_1 = true;
    lamp_on = lamp_on_St_13_Off;
    nr_2 = nr_2_St_13_Off;
    ns_2_1 = ns_2_St_13_Off_1;
  } else {
    lamp_on_St_13_On = true;
    lamp_on = lamp_on_St_13_On;
    nr_2_St_13_On = false;
    nr_2 = nr_2_St_13_On;
    ns_2_St_13_On_1 = false;
    ns_2_1 = ns_2_St_13_On_1;
  };
  _out->lamp = lamp_on;
  self->pnr = nr;
  self->ck_15_1 = ns_1;
  self->pnr_2 = nr_2;
  self->ck_1 = ns_2_1;;
}

void System__blind_fail_reset(System__blind_fail_mem* self) {
  self->pnr = false;
  self->ck_18_1 = false;
  self->pnr_3 = false;
  self->ck_1 = true;
}

void System__blind_fail_step(int sw, int c1, int c2, int failed_recovered,
                             System__blind_fail_out* _out,
                             System__blind_fail_mem* self) {
  
  int nr_St_14_Falha;
  int ns_St_14_Falha_1;
  int failed_3_St_14_Falha;
  int nr_St_14_Funcionando;
  int ns_St_14_Funcionando_1;
  int failed_3_St_14_Funcionando;
  int ck_19_1;
  int r_St_14_Falha;
  int s_St_14_Falha_1;
  int r_St_14_Funcionando;
  int s_St_14_Funcionando_1;
  int nr_3_St_15_Up;
  int ns_3_St_15_Up_1;
  int blind_open_St_15_Up;
  int nr_3_St_15_Down;
  int ns_3_St_15_Down_1;
  int blind_open_St_15_Down;
  int ck_17_1;
  int v_44;
  int v_43;
  int v_42;
  int v_41;
  int v_40;
  int v;
  int r_3_St_15_Up;
  int s_3_St_15_Up_1;
  int r_3_St_15_Down;
  int s_3_St_15_Down_1;
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
  int c1_3;
  int c2_3;
  int sw_2;
  int blind_open;
  failed_recovered_3 = failed_recovered;
  c1_3 = sw;
  c2_3 = c1;
  sw_2 = c2;
  if (self->ck_18_1) {
    if (failed_recovered_3) {
      r_St_14_Falha = true;
    } else {
      r_St_14_Falha = self->pnr;
    };
    r = r_St_14_Falha;
    if (failed_recovered_3) {
      s_St_14_Falha_1 = false;
    } else {
      s_St_14_Falha_1 = true;
    };
    s_1 = s_St_14_Falha_1;
  } else {
    if (failed_recovered_3) {
      r_St_14_Funcionando = true;
      s_St_14_Funcionando_1 = true;
    } else {
      r_St_14_Funcionando = self->pnr;
      s_St_14_Funcionando_1 = false;
    };
    r = r_St_14_Funcionando;
    s_1 = s_St_14_Funcionando_1;
  };
  ck_19_1 = s_1;
  if (ck_19_1) {
    failed_3_St_14_Falha = true;
    failed_3 = failed_3_St_14_Falha;
    nr_St_14_Falha = false;
    nr = nr_St_14_Falha;
    ns_St_14_Falha_1 = true;
    ns_1 = ns_St_14_Falha_1;
  } else {
    failed_3_St_14_Funcionando = false;
    nr_St_14_Funcionando = false;
    ns_St_14_Funcionando_1 = false;
    failed_3 = failed_3_St_14_Funcionando;
    nr = nr_St_14_Funcionando;
    ns_1 = ns_St_14_Funcionando_1;
  };
  _out->failed = failed_3;
  if (self->ck_1) {
    v_43 = !(c2_3);
    v_42 = (c1_3&&sw_2);
    v_44 = (v_42||v_43);
    if (v_44) {
      r_3_St_15_Down = true;
      s_3_St_15_Down_1 = false;
    } else {
      r_3_St_15_Down = self->pnr_3;
      s_3_St_15_Down_1 = true;
    };
    r_3 = r_3_St_15_Down;
    s_3_1 = s_3_St_15_Down_1;
  } else {
    v_40 = !(c2_3);
    v = (c1_3&&sw_2);
    v_41 = (v||v_40);
    if (v_41) {
      r_3_St_15_Up = true;
    } else {
      r_3_St_15_Up = self->pnr_3;
    };
    r_3 = r_3_St_15_Up;
    if (v_41) {
      s_3_St_15_Up_1 = true;
    } else {
      s_3_St_15_Up_1 = false;
    };
    s_3_1 = s_3_St_15_Up_1;
  };
  ck_17_1 = s_3_1;
  if (ck_17_1) {
    blind_open_St_15_Down = false;
    nr_3_St_15_Down = false;
    ns_3_St_15_Down_1 = true;
    blind_open = blind_open_St_15_Down;
    nr_3 = nr_3_St_15_Down;
    ns_3_1 = ns_3_St_15_Down_1;
  } else {
    blind_open_St_15_Up = true;
    blind_open = blind_open_St_15_Up;
    nr_3_St_15_Up = false;
    nr_3 = nr_3_St_15_Up;
    ns_3_St_15_Up_1 = false;
    ns_3_1 = ns_3_St_15_Up_1;
  };
  _out->blind = blind_open;
  self->pnr = nr;
  self->ck_18_1 = ns_1;
  self->pnr_3 = nr_3;
  self->ck_1 = ns_3_1;;
}

void System__controller_reset(System__controller_mem* self) {
  self->pnr = false;
  self->ck_43_1 = false;
  self->pnr_4 = false;
  self->ck_41_1 = true;
  self->pnr_5 = false;
  self->ck_39_1 = false;
  self->pnr_6 = false;
  self->ck_37_1 = true;
  self->pnr_7 = false;
  self->ck_35_1 = false;
  self->pnr_8 = false;
  self->v_220 = false;
  self->v_221 = false;
  self->pnr_9 = false;
  self->ck_31_1 = true;
  self->pnr_10 = false;
  self->ck_29_1 = true;
  self->pnr_11 = false;
  self->ck_27_1 = true;
  self->pnr_12 = false;
  self->ck_25_1 = true;
  self->pnr_13 = false;
  self->ck_23_1 = true;
  self->pnr_14 = false;
  self->ck_21_1 = true;
  self->pnr_15 = false;
  self->ck_1 = true;
}

void System__controller_step(int change_shift, int worker, int cleaner,
                             int air_failed_recovered, int light_switch,
                             int light_failed_recovered, int blind_switch,
                             int blind_failed_recovered,
                             System__controller_out* _out,
                             System__controller_mem* self) {
  Controller_controller__controller_controller_out Controller_controller__controller_controller_out_st;
  
  int nr_St_16_Falha;
  int ns_St_16_Falha_1;
  int failed_3_St_16_Falha;
  int nr_St_16_Funcionando;
  int ns_St_16_Funcionando_1;
  int failed_3_St_16_Funcionando;
  int ck_44_1;
  int r_St_16_Falha;
  int s_St_16_Falha_1;
  int r_St_16_Funcionando;
  int s_St_16_Funcionando_1;
  int nr_4_St_17_Up;
  int ns_4_St_17_Up_1;
  int blind_open_St_17_Up;
  int nr_4_St_17_Down;
  int ns_4_St_17_Down_1;
  int blind_open_St_17_Down;
  int ck_42_1;
  int v_179;
  int v_178;
  int v_177;
  int v_176;
  int v_175;
  int v_174;
  int r_4_St_17_Up;
  int s_4_St_17_Up_1;
  int r_4_St_17_Down;
  int s_4_St_17_Down_1;
  int nr_5_St_18_Falha;
  int ns_5_St_18_Falha_1;
  int failed_2_St_18_Falha;
  int nr_5_St_18_Funcionando;
  int ns_5_St_18_Funcionando_1;
  int failed_2_St_18_Funcionando;
  int ck_40_1;
  int r_5_St_18_Falha;
  int s_5_St_18_Falha_1;
  int r_5_St_18_Funcionando;
  int s_5_St_18_Funcionando_1;
  int nr_6_St_19_On;
  int ns_6_St_19_On_1;
  int lamp_on_St_19_On;
  int nr_6_St_19_Off;
  int ns_6_St_19_Off_1;
  int lamp_on_St_19_Off;
  int ck_38_1;
  int v_173;
  int v_172;
  int v_171;
  int v_170;
  int v_169;
  int v_168;
  int r_6_St_19_On;
  int s_6_St_19_On_1;
  int r_6_St_19_Off;
  int s_6_St_19_Off_1;
  int nr_7_St_20_Falha;
  int ns_7_St_20_Falha_1;
  int failed_1_St_20_Falha;
  int nr_7_St_20_Funcionando;
  int ns_7_St_20_Funcionando_1;
  int failed_1_St_20_Funcionando;
  int ck_36_1;
  int r_7_St_20_Falha;
  int s_7_St_20_Falha_1;
  int r_7_St_20_Funcionando;
  int s_7_St_20_Funcionando_1;
  int v_219;
  int v_218;
  int v_217;
  int v_216;
  int v_215;
  int v_214;
  int v_213;
  int v_212;
  int ns_8_St_21_Max_2_0;
  int ns_8_St_21_Max_2_1;
  int ns_8_St_21_Min_2_0;
  int ns_8_St_21_Min_2_1;
  int ns_8_St_21_Off_2_0;
  int ns_8_St_21_Off_2_1;
  int ck_34_2_0;
  int ck_34_2_1;
  int nr_8_St_21_Max;
  int ns_8_St_21_Max_2;
  int ns_8_St_21_Max_1;
  int air_state_1_St_21_Max;
  int nr_8_St_21_Min;
  int ns_8_St_21_Min_2;
  int ns_8_St_21_Min_1;
  int air_state_1_St_21_Min;
  int nr_8_St_21_Off;
  int ns_8_St_21_Off_2;
  int ns_8_St_21_Off_1;
  int air_state_1_St_21_Off;
  int ck_34_2;
  int ck_34_1;
  int v_166_2_0;
  int v_166_2_1;
  int v_167;
  int v_166_2;
  int v_166_1;
  int v_165;
  int v_164;
  int v_162_2_0;
  int v_162_2_1;
  int v_163;
  int v_162_2;
  int v_162_1;
  int v_161;
  int v_160;
  int v_158_2_0;
  int v_158_2_1;
  int v_159;
  int v_158_2;
  int v_158_1;
  int v_157;
  int v_156;
  int v_227;
  int v_226;
  int v_225;
  int v_224;
  int v_223;
  int v_222;
  int s_8_St_21_Max_2_0;
  int s_8_St_21_Max_2_1;
  int s_8_St_21_Min_2_0;
  int s_8_St_21_Min_2_1;
  int s_8_St_21_Off_2_0;
  int s_8_St_21_Off_2_1;
  int ck_33_2_0;
  int ck_33_2_1;
  int r_8_St_21_Max;
  int s_8_St_21_Max_2;
  int s_8_St_21_Max_1;
  int r_8_St_21_Min;
  int s_8_St_21_Min_2;
  int s_8_St_21_Min_1;
  int r_8_St_21_Off;
  int s_8_St_21_Off_2;
  int s_8_St_21_Off_1;
  int ck_33_2;
  int ck_33_1;
  int nr_9_St_22_Open;
  int ns_9_St_22_Open_1;
  int window_open_1_St_22_Open;
  int nr_9_St_22_Closed;
  int ns_9_St_22_Closed_1;
  int window_open_1_St_22_Closed;
  int ck_32_1;
  int v_155;
  int r_9_St_22_Open;
  int s_9_St_22_Open_1;
  int r_9_St_22_Closed;
  int s_9_St_22_Closed_1;
  int nr_10_St_23_On;
  int ns_10_St_23_On_1;
  int computer_on_St_23_On;
  int nr_10_St_23_Off;
  int ns_10_St_23_Off_1;
  int computer_on_St_23_Off;
  int ck_30_1;
  int v_154;
  int v_153;
  int r_10_St_23_On;
  int s_10_St_23_On_1;
  int r_10_St_23_Off;
  int s_10_St_23_Off_1;
  int nr_11_St_24_Present;
  int ns_11_St_24_Present_1;
  int presence_1_St_24_Present;
  int nr_11_St_24_Not_Present;
  int ns_11_St_24_Not_Present_1;
  int presence_1_St_24_Not_Present;
  int ck_28_1;
  int r_11_St_24_Present;
  int s_11_St_24_Present_1;
  int r_11_St_24_Not_Present;
  int s_11_St_24_Not_Present_1;
  int nr_12_St_25_Present;
  int ns_12_St_25_Present_1;
  int presence_St_25_Present;
  int nr_12_St_25_Not_Present;
  int ns_12_St_25_Not_Present_1;
  int presence_St_25_Not_Present;
  int ck_26_1;
  int r_12_St_25_Present;
  int s_12_St_25_Present_1;
  int r_12_St_25_Not_Present;
  int s_12_St_25_Not_Present_1;
  int nr_13_St_26_Open;
  int ns_13_St_26_Open_1;
  int closet_open_1_St_26_Open;
  int nr_13_St_26_Locked;
  int ns_13_St_26_Locked_1;
  int closet_open_1_St_26_Locked;
  int ck_24_1;
  int v_152;
  int r_13_St_26_Open;
  int s_13_St_26_Open_1;
  int r_13_St_26_Locked;
  int s_13_St_26_Locked_1;
  int nr_14_St_27_Open;
  int ns_14_St_27_Open_1;
  int door_open_1_St_27_Open;
  int nr_14_St_27_Closed;
  int ns_14_St_27_Closed_1;
  int door_open_1_St_27_Closed;
  int ck_22_1;
  int v_151;
  int v_150;
  int r_14_St_27_Open;
  int s_14_St_27_Open_1;
  int r_14_St_27_Closed;
  int s_14_St_27_Closed_1;
  int nr_15_St_28_Noite;
  int ns_15_St_28_Noite_1;
  int night_1_St_28_Noite;
  int nr_15_St_28_Dia;
  int ns_15_St_28_Dia_1;
  int night_1_St_28_Dia;
  int ck_20_1;
  int r_15_St_28_Noite;
  int s_15_St_28_Noite_1;
  int r_15_St_28_Dia;
  int s_15_St_28_Dia_1;
  int s_8_2_0;
  int s_8_2_1;
  int ns_8_2_0;
  int ns_8_2_1;
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
  int s_8_2;
  int s_8_1;
  int ns_8_2;
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
  int s_1;
  int ns_1;
  int r;
  int nr;
  int sw_3;
  int c1_5;
  int c2_5;
  int failed_recovered_5;
  int failed_recovered_3;
  int failed_3;
  int c1_3;
  int c2_3;
  int sw_2;
  int blind_open;
  int blind;
  int failed_5;
  int sw;
  int c1_4;
  int c2_4;
  int failed_recovered_4;
  int failed_recovered_2;
  int failed_2;
  int c1_2;
  int c2_2;
  int sw_1;
  int lamp_on;
  int lamp;
  int failed_4;
  int c1;
  int c2;
  int failed_recovered;
  int failed_recovered_1;
  int failed_1;
  int c1_1;
  int c2_1;
  int air_state_1;
  int air_state_2;
  int failed;
  int c_2;
  int window_open_1;
  int c_1;
  int computer_on;
  int arrived_1;
  int presence_1;
  int arrived;
  int presence;
  int c;
  int closet_open_1;
  int c_door_1;
  int door_open_1;
  int change;
  int night_1;
  int rule7;
  int rule6;
  int rule5;
  int rule4;
  int rule2_5;
  int rule2;
  int rule1_5;
  int rule1;
  int v;
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
  sw_3 = blind_switch;
  c1_3 = sw_3;
  failed_recovered_5 = blind_failed_recovered;
  failed_recovered_3 = failed_recovered_5;
  sw = light_switch;
  c1_2 = sw;
  failed_recovered_4 = light_failed_recovered;
  failed_recovered_2 = failed_recovered_4;
  failed_recovered = air_failed_recovered;
  failed_recovered_1 = failed_recovered;
  ck_33_1 = self->v_220;
  ck_33_2 = self->v_221;
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
                                                    self->ck_1, self->pnr_15,
                                                    self->ck_21_1,
                                                    self->pnr_14,
                                                    self->ck_23_1,
                                                    self->pnr_13,
                                                    self->ck_25_1,
                                                    self->pnr_12,
                                                    self->ck_27_1,
                                                    self->pnr_11,
                                                    self->ck_29_1,
                                                    self->pnr_10,
                                                    self->ck_31_1,
                                                    self->pnr_9, self->v_221,
                                                    self->v_220, self->pnr_8,
                                                    self->ck_35_1,
                                                    self->pnr_7,
                                                    self->ck_37_1,
                                                    self->pnr_6,
                                                    self->ck_39_1,
                                                    self->pnr_5,
                                                    self->ck_41_1,
                                                    self->pnr_4,
                                                    self->ck_43_1, self->pnr,
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
  c1_5 = c_blind_1;
  c2_3 = c1_5;
  c2_5 = c_blind_2;
  sw_2 = c2_5;
  c1_4 = c_light_1;
  c2_2 = c1_4;
  c2_4 = c_light_2;
  sw_1 = c2_4;
  c1 = c_air_1;
  c1_1 = c1;
  c2 = c_air_2;
  c2_1 = c2;
  c_2 = c_window;
  c_1 = c_pc;
  c = c_closet;
  c_door_1 = c_door;
  if (self->ck_43_1) {
    if (failed_recovered_3) {
      r_St_16_Falha = true;
    } else {
      r_St_16_Falha = self->pnr;
    };
    r = r_St_16_Falha;
    if (failed_recovered_3) {
      s_St_16_Falha_1 = false;
    } else {
      s_St_16_Falha_1 = true;
    };
    s_1 = s_St_16_Falha_1;
  } else {
    if (failed_recovered_3) {
      r_St_16_Funcionando = true;
      s_St_16_Funcionando_1 = true;
    } else {
      r_St_16_Funcionando = self->pnr;
      s_St_16_Funcionando_1 = false;
    };
    r = r_St_16_Funcionando;
    s_1 = s_St_16_Funcionando_1;
  };
  ck_44_1 = s_1;
  if (ck_44_1) {
    failed_3_St_16_Falha = true;
    failed_3 = failed_3_St_16_Falha;
    nr_St_16_Falha = false;
    nr = nr_St_16_Falha;
    ns_St_16_Falha_1 = true;
    ns_1 = ns_St_16_Falha_1;
  } else {
    failed_3_St_16_Funcionando = false;
    nr_St_16_Funcionando = false;
    ns_St_16_Funcionando_1 = false;
    failed_3 = failed_3_St_16_Funcionando;
    nr = nr_St_16_Funcionando;
    ns_1 = ns_St_16_Funcionando_1;
  };
  failed_5 = failed_3;
  _out->blind_failed = failed_5;
  v_113 = !(_out->blind_failed);
  v_133 = !(_out->blind_failed);
  if (self->ck_41_1) {
    v_178 = !(c2_3);
    v_177 = (c1_3&&sw_2);
    v_179 = (v_177||v_178);
    if (v_179) {
      r_4_St_17_Down = true;
      s_4_St_17_Down_1 = false;
    } else {
      r_4_St_17_Down = self->pnr_4;
      s_4_St_17_Down_1 = true;
    };
    r_4 = r_4_St_17_Down;
    s_4_1 = s_4_St_17_Down_1;
  } else {
    v_175 = !(c2_3);
    v_174 = (c1_3&&sw_2);
    v_176 = (v_174||v_175);
    if (v_176) {
      r_4_St_17_Up = true;
    } else {
      r_4_St_17_Up = self->pnr_4;
    };
    r_4 = r_4_St_17_Up;
    if (v_176) {
      s_4_St_17_Up_1 = true;
    } else {
      s_4_St_17_Up_1 = false;
    };
    s_4_1 = s_4_St_17_Up_1;
  };
  ck_42_1 = s_4_1;
  if (ck_42_1) {
    blind_open_St_17_Down = false;
    nr_4_St_17_Down = false;
    ns_4_St_17_Down_1 = true;
    blind_open = blind_open_St_17_Down;
    nr_4 = nr_4_St_17_Down;
    ns_4_1 = ns_4_St_17_Down_1;
  } else {
    blind_open_St_17_Up = true;
    blind_open = blind_open_St_17_Up;
    nr_4_St_17_Up = false;
    nr_4 = nr_4_St_17_Up;
    ns_4_St_17_Up_1 = false;
    ns_4_1 = ns_4_St_17_Up_1;
  };
  blind = blind_open;
  _out->blind_up = blind;
  v_69 = !(_out->blind_up);
  v_123 = !(_out->blind_up);
  v_143 = !(_out->blind_up);
  if (self->ck_39_1) {
    if (failed_recovered_2) {
      r_5_St_18_Falha = true;
    } else {
      r_5_St_18_Falha = self->pnr_5;
    };
    r_5 = r_5_St_18_Falha;
    if (failed_recovered_2) {
      s_5_St_18_Falha_1 = false;
    } else {
      s_5_St_18_Falha_1 = true;
    };
    s_5_1 = s_5_St_18_Falha_1;
  } else {
    if (failed_recovered_2) {
      r_5_St_18_Funcionando = true;
      s_5_St_18_Funcionando_1 = true;
    } else {
      r_5_St_18_Funcionando = self->pnr_5;
      s_5_St_18_Funcionando_1 = false;
    };
    r_5 = r_5_St_18_Funcionando;
    s_5_1 = s_5_St_18_Funcionando_1;
  };
  ck_40_1 = s_5_1;
  if (ck_40_1) {
    failed_2_St_18_Falha = true;
    failed_2 = failed_2_St_18_Falha;
    nr_5_St_18_Falha = false;
    nr_5 = nr_5_St_18_Falha;
    ns_5_St_18_Falha_1 = true;
    ns_5_1 = ns_5_St_18_Falha_1;
  } else {
    failed_2_St_18_Funcionando = false;
    nr_5_St_18_Funcionando = false;
    ns_5_St_18_Funcionando_1 = false;
    failed_2 = failed_2_St_18_Funcionando;
    nr_5 = nr_5_St_18_Funcionando;
    ns_5_1 = ns_5_St_18_Funcionando_1;
  };
  failed_4 = failed_2;
  _out->light_failed = failed_4;
  v_53 = !(_out->light_failed);
  v_64 = !(_out->light_failed);
  v_111 = !(_out->light_failed);
  v_131 = !(_out->light_failed);
  if (self->ck_37_1) {
    v_172 = !(c2_2);
    v_171 = (c1_2&&sw_1);
    v_173 = (v_171||v_172);
    if (v_173) {
      r_6_St_19_Off = true;
      s_6_St_19_Off_1 = false;
    } else {
      r_6_St_19_Off = self->pnr_6;
      s_6_St_19_Off_1 = true;
    };
    r_6 = r_6_St_19_Off;
    s_6_1 = s_6_St_19_Off_1;
  } else {
    v_169 = !(c2_2);
    v_168 = (c1_2&&sw_1);
    v_170 = (v_168||v_169);
    if (v_170) {
      r_6_St_19_On = true;
    } else {
      r_6_St_19_On = self->pnr_6;
    };
    r_6 = r_6_St_19_On;
    if (v_170) {
      s_6_St_19_On_1 = true;
    } else {
      s_6_St_19_On_1 = false;
    };
    s_6_1 = s_6_St_19_On_1;
  };
  ck_38_1 = s_6_1;
  if (ck_38_1) {
    lamp_on_St_19_Off = false;
    nr_6_St_19_Off = false;
    ns_6_St_19_Off_1 = true;
    lamp_on = lamp_on_St_19_Off;
    nr_6 = nr_6_St_19_Off;
    ns_6_1 = ns_6_St_19_Off_1;
  } else {
    lamp_on_St_19_On = true;
    lamp_on = lamp_on_St_19_On;
    nr_6_St_19_On = false;
    nr_6 = nr_6_St_19_On;
    ns_6_St_19_On_1 = false;
    ns_6_1 = ns_6_St_19_On_1;
  };
  lamp = lamp_on;
  _out->light_on = lamp;
  v_57 = (_out->light_on&&_out->blind_up);
  v_70 = (_out->light_on&&v_69);
  v_78 = !(_out->light_on);
  v_79 = (v_78&&_out->blind_up);
  v_90 = !(_out->light_on);
  v_91 = (v_90&&_out->blind_up);
  v_121 = !(_out->light_on);
  v_141 = !(_out->light_on);
  if (self->ck_35_1) {
    if (failed_recovered_1) {
      r_7_St_20_Falha = true;
    } else {
      r_7_St_20_Falha = self->pnr_7;
    };
    r_7 = r_7_St_20_Falha;
    if (failed_recovered_1) {
      s_7_St_20_Falha_1 = false;
    } else {
      s_7_St_20_Falha_1 = true;
    };
    s_7_1 = s_7_St_20_Falha_1;
  } else {
    if (failed_recovered_1) {
      r_7_St_20_Funcionando = true;
      s_7_St_20_Funcionando_1 = true;
    } else {
      r_7_St_20_Funcionando = self->pnr_7;
      s_7_St_20_Funcionando_1 = false;
    };
    r_7 = r_7_St_20_Funcionando;
    s_7_1 = s_7_St_20_Funcionando_1;
  };
  ck_36_1 = s_7_1;
  if (ck_36_1) {
    failed_1_St_20_Falha = true;
    failed_1 = failed_1_St_20_Falha;
    nr_7_St_20_Falha = false;
    nr_7 = nr_7_St_20_Falha;
    ns_7_St_20_Falha_1 = true;
    ns_7_1 = ns_7_St_20_Falha_1;
  } else {
    failed_1_St_20_Funcionando = false;
    nr_7_St_20_Funcionando = false;
    ns_7_St_20_Funcionando_1 = false;
    failed_1 = failed_1_St_20_Funcionando;
    nr_7 = nr_7_St_20_Funcionando;
    ns_7_1 = ns_7_St_20_Funcionando_1;
  };
  failed = failed_1;
  _out->air_failed = failed;
  v = !(_out->air_failed);
  v_66 = !(_out->air_failed);
  v_87 = !(_out->air_failed);
  v_100 = !(_out->air_failed);
  v_109 = !(_out->air_failed);
  v_129 = !(_out->air_failed);
  if (ck_33_1) {
    ck_33_2_1 = ck_33_2;
    if (ck_33_2_1) {
      v_157 = !(c2_1);
      if (v_157) {
        v_159 = true;
        v_158_1 = false;
        v_158_2 = false;
      } else {
        v_159 = self->pnr_8;
        v_158_1 = true;
        v_158_2 = true;
      };
      v_156 = !(c1_1);
      if (v_156) {
        r_8_St_21_Max = true;
      } else {
        r_8_St_21_Max = v_159;
      };
      v_226 = r_8_St_21_Max;
      if (v_156) {
        s_8_St_21_Max_1 = true;
      } else {
        s_8_St_21_Max_1 = v_158_1;
      };
      v_222 = s_8_St_21_Max_1;
      if (v_156) {
        s_8_St_21_Max_2 = false;
      } else {
        s_8_St_21_Max_2 = v_158_2;
      };
      v_223 = s_8_St_21_Max_2;
    } else {
      v_161 = !(c2_1);
      if (v_161) {
        v_163 = true;
        v_162_1 = true;
        v_162_2 = true;
      } else {
        v_163 = self->pnr_8;
        v_162_1 = true;
        v_162_2 = false;
      };
      v_160 = !(c1_1);
      if (v_160) {
        r_8_St_21_Min = true;
        s_8_St_21_Min_1 = false;
        s_8_St_21_Min_2 = false;
      } else {
        r_8_St_21_Min = v_163;
        s_8_St_21_Min_1 = v_162_1;
        s_8_St_21_Min_2 = v_162_2;
      };
      v_226 = r_8_St_21_Min;
      v_222 = s_8_St_21_Min_1;
      v_223 = s_8_St_21_Min_2;
    };
    s_8_1 = v_222;
    s_8_2 = v_223;
    r_8 = v_226;
  } else {
    ck_33_2_0 = ck_33_2;
    if (ck_33_2_0) {
      v_227 = true;
      v_224 = true;
      v_225 = true;
    } else {
      v_165 = !(c2_1);
      if (v_165) {
        v_167 = true;
        v_166_1 = true;
        v_166_2 = true;
      } else {
        v_167 = self->pnr_8;
        v_166_1 = false;
        v_166_2 = false;
      };
      v_164 = !(c1_1);
      if (v_164) {
        r_8_St_21_Off = true;
      } else {
        r_8_St_21_Off = v_167;
      };
      v_227 = r_8_St_21_Off;
      if (v_164) {
        s_8_St_21_Off_1 = true;
      } else {
        s_8_St_21_Off_1 = v_166_1;
      };
      v_224 = s_8_St_21_Off_1;
      if (v_164) {
        s_8_St_21_Off_2 = false;
      } else {
        s_8_St_21_Off_2 = v_166_2;
      };
      v_225 = s_8_St_21_Off_2;
      if (v_166_1) {
        v_166_2_1 = v_166_2;
      } else {
        v_166_2_0 = v_166_2;
      };
      if (s_8_St_21_Off_1) {
        s_8_St_21_Off_2_1 = s_8_St_21_Off_2;
      } else {
        s_8_St_21_Off_2_0 = s_8_St_21_Off_2;
      };
    };
    s_8_1 = v_224;
    s_8_2 = v_225;
    r_8 = v_227;
  };
  ck_34_1 = s_8_1;
  ck_34_2 = s_8_2;
  if (ck_34_1) {
    ck_34_2_1 = ck_34_2;
    if (ck_34_2_1) {
      air_state_1_St_21_Max = 2;
      v_212 = air_state_1_St_21_Max;
      nr_8_St_21_Max = false;
      v_218 = nr_8_St_21_Max;
      ns_8_St_21_Max_1 = true;
      v_214 = ns_8_St_21_Max_1;
      ns_8_St_21_Max_2 = true;
      v_215 = ns_8_St_21_Max_2;
    } else {
      air_state_1_St_21_Min = 1;
      nr_8_St_21_Min = false;
      ns_8_St_21_Min_1 = true;
      ns_8_St_21_Min_2 = false;
      v_212 = air_state_1_St_21_Min;
      v_218 = nr_8_St_21_Min;
      v_214 = ns_8_St_21_Min_1;
      v_215 = ns_8_St_21_Min_2;
    };
    air_state_1 = v_212;
    ns_8_1 = v_214;
    ns_8_2 = v_215;
    nr_8 = v_218;
  } else {
    ck_34_2_0 = ck_34_2;
    if (ck_34_2_0) {
      v_213 = 0;
      v_219 = true;
      v_216 = true;
      v_217 = true;
    } else {
      air_state_1_St_21_Off = 0;
      v_213 = air_state_1_St_21_Off;
      nr_8_St_21_Off = false;
      v_219 = nr_8_St_21_Off;
      ns_8_St_21_Off_1 = false;
      v_216 = ns_8_St_21_Off_1;
      ns_8_St_21_Off_2 = false;
      v_217 = ns_8_St_21_Off_2;
      if (ns_8_St_21_Off_1) {
        ns_8_St_21_Off_2_1 = ns_8_St_21_Off_2;
      } else {
        ns_8_St_21_Off_2_0 = ns_8_St_21_Off_2;
      };
    };
    air_state_1 = v_213;
    ns_8_1 = v_216;
    ns_8_2 = v_217;
    nr_8 = v_219;
  };
  air_state_2 = air_state_1;
  _out->air_state = air_state_2;
  v_49 = (_out->air_state==1);
  v_60 = (_out->air_state==0);
  v_71 = (_out->air_state==1);
  v_72 = (v_70&&v_71);
  v_82 = (_out->air_state==0);
  v_92 = (_out->air_state==1);
  v_93 = (v_91&&v_92);
  v_103 = (_out->air_state==2);
  v_119 = (_out->air_state==0);
  v_139 = (_out->air_state==0);
  if (ns_8_1) {
    ns_8_2_1 = ns_8_2;
  } else {
    ns_8_2_0 = ns_8_2;
  };
  if (ck_34_1) {
    if (ck_34_2_1) {
      if (ns_8_St_21_Max_1) {
        ns_8_St_21_Max_2_1 = ns_8_St_21_Max_2;
      } else {
        ns_8_St_21_Max_2_0 = ns_8_St_21_Max_2;
      };
    } else {
      if (ns_8_St_21_Min_1) {
        ns_8_St_21_Min_2_1 = ns_8_St_21_Min_2;
      } else {
        ns_8_St_21_Min_2_0 = ns_8_St_21_Min_2;
      };
    };
  };
  if (s_8_1) {
    s_8_2_1 = s_8_2;
  } else {
    s_8_2_0 = s_8_2;
  };
  if (ck_33_1) {
    if (ck_33_2_1) {
      if (v_158_1) {
        v_158_2_1 = v_158_2;
      } else {
        v_158_2_0 = v_158_2;
      };
      if (s_8_St_21_Max_1) {
        s_8_St_21_Max_2_1 = s_8_St_21_Max_2;
      } else {
        s_8_St_21_Max_2_0 = s_8_St_21_Max_2;
      };
    } else {
      if (v_162_1) {
        v_162_2_1 = v_162_2;
      } else {
        v_162_2_0 = v_162_2;
      };
      if (s_8_St_21_Min_1) {
        s_8_St_21_Min_2_1 = s_8_St_21_Min_2;
      } else {
        s_8_St_21_Min_2_0 = s_8_St_21_Min_2;
      };
    };
  };
  if (self->ck_31_1) {
    v_155 = !(c_2);
    if (v_155) {
      r_9_St_22_Closed = true;
      s_9_St_22_Closed_1 = false;
    } else {
      r_9_St_22_Closed = self->pnr_9;
      s_9_St_22_Closed_1 = true;
    };
    r_9 = r_9_St_22_Closed;
    s_9_1 = s_9_St_22_Closed_1;
  } else {
    if (c_2) {
      r_9_St_22_Open = true;
    } else {
      r_9_St_22_Open = self->pnr_9;
    };
    r_9 = r_9_St_22_Open;
    if (c_2) {
      s_9_St_22_Open_1 = true;
    } else {
      s_9_St_22_Open_1 = false;
    };
    s_9_1 = s_9_St_22_Open_1;
  };
  ck_32_1 = s_9_1;
  if (ck_32_1) {
    window_open_1_St_22_Closed = false;
    nr_9_St_22_Closed = false;
    ns_9_St_22_Closed_1 = true;
    window_open_1 = window_open_1_St_22_Closed;
    nr_9 = nr_9_St_22_Closed;
    ns_9_1 = ns_9_St_22_Closed_1;
  } else {
    window_open_1_St_22_Open = true;
    window_open_1 = window_open_1_St_22_Open;
    nr_9_St_22_Open = false;
    nr_9 = nr_9_St_22_Open;
    ns_9_St_22_Open_1 = false;
    ns_9_1 = ns_9_St_22_Open_1;
  };
  _out->window_open = window_open_1;
  v_58 = (v_57&&_out->window_open);
  v_80 = (v_79&&_out->window_open);
  v_98 = !(_out->window_open);
  v_117 = !(_out->window_open);
  v_137 = !(_out->window_open);
  if (self->ck_29_1) {
    v_154 = !(c_1);
    if (v_154) {
      r_10_St_23_Off = true;
      s_10_St_23_Off_1 = false;
    } else {
      r_10_St_23_Off = self->pnr_10;
      s_10_St_23_Off_1 = true;
    };
    r_10 = r_10_St_23_Off;
    s_10_1 = s_10_St_23_Off_1;
  } else {
    v_153 = !(c_1);
    if (v_153) {
      r_10_St_23_On = true;
    } else {
      r_10_St_23_On = self->pnr_10;
    };
    r_10 = r_10_St_23_On;
    if (v_153) {
      s_10_St_23_On_1 = true;
    } else {
      s_10_St_23_On_1 = false;
    };
    s_10_1 = s_10_St_23_On_1;
  };
  ck_30_1 = s_10_1;
  if (ck_30_1) {
    computer_on_St_23_Off = false;
    nr_10_St_23_Off = false;
    ns_10_St_23_Off_1 = true;
    computer_on = computer_on_St_23_Off;
    nr_10 = nr_10_St_23_Off;
    ns_10_1 = ns_10_St_23_Off_1;
  } else {
    computer_on_St_23_On = true;
    computer_on = computer_on_St_23_On;
    nr_10_St_23_On = false;
    nr_10 = nr_10_St_23_On;
    ns_10_St_23_On_1 = false;
    ns_10_1 = ns_10_St_23_On_1;
  };
  _out->pc_on = computer_on;
  v_47 = !(_out->pc_on);
  v_116 = !(_out->pc_on);
  v_118 = (v_116&&v_117);
  v_120 = (v_118&&v_119);
  v_122 = (v_120&&v_121);
  v_124 = (v_122&&v_123);
  v_136 = !(_out->pc_on);
  v_138 = (v_136&&v_137);
  v_140 = (v_138&&v_139);
  v_142 = (v_140&&v_141);
  v_144 = (v_142&&v_143);
  if (self->ck_27_1) {
    if (arrived_1) {
      r_11_St_24_Not_Present = true;
      s_11_St_24_Not_Present_1 = false;
    } else {
      r_11_St_24_Not_Present = self->pnr_11;
      s_11_St_24_Not_Present_1 = true;
    };
    r_11 = r_11_St_24_Not_Present;
    s_11_1 = s_11_St_24_Not_Present_1;
  } else {
    if (arrived_1) {
      r_11_St_24_Present = true;
    } else {
      r_11_St_24_Present = self->pnr_11;
    };
    r_11 = r_11_St_24_Present;
    if (arrived_1) {
      s_11_St_24_Present_1 = true;
    } else {
      s_11_St_24_Present_1 = false;
    };
    s_11_1 = s_11_St_24_Present_1;
  };
  ck_28_1 = s_11_1;
  if (ck_28_1) {
    presence_1_St_24_Not_Present = false;
    nr_11_St_24_Not_Present = false;
    ns_11_St_24_Not_Present_1 = true;
    presence_1 = presence_1_St_24_Not_Present;
    nr_11 = nr_11_St_24_Not_Present;
    ns_11_1 = ns_11_St_24_Not_Present_1;
  } else {
    presence_1_St_24_Present = true;
    presence_1 = presence_1_St_24_Present;
    nr_11_St_24_Present = false;
    nr_11 = nr_11_St_24_Present;
    ns_11_St_24_Present_1 = false;
    ns_11_1 = ns_11_St_24_Present_1;
  };
  _out->cleaner_presence = presence_1;
  v_45 = (_out->cleaner_presence&&v);
  v_46 = !(v_45);
  v_105 = !(_out->cleaner_presence);
  v_126 = !(_out->cleaner_presence);
  if (self->ck_25_1) {
    if (arrived) {
      r_12_St_25_Not_Present = true;
      s_12_St_25_Not_Present_1 = false;
    } else {
      r_12_St_25_Not_Present = self->pnr_12;
      s_12_St_25_Not_Present_1 = true;
    };
    r_12 = r_12_St_25_Not_Present;
    s_12_1 = s_12_St_25_Not_Present_1;
  } else {
    if (arrived) {
      r_12_St_25_Present = true;
    } else {
      r_12_St_25_Present = self->pnr_12;
    };
    r_12 = r_12_St_25_Present;
    if (arrived) {
      s_12_St_25_Present_1 = true;
    } else {
      s_12_St_25_Present_1 = false;
    };
    s_12_1 = s_12_St_25_Present_1;
  };
  ck_26_1 = s_12_1;
  if (ck_26_1) {
    presence_St_25_Not_Present = false;
    nr_12_St_25_Not_Present = false;
    ns_12_St_25_Not_Present_1 = true;
    presence = presence_St_25_Not_Present;
    nr_12 = nr_12_St_25_Not_Present;
    ns_12_1 = ns_12_St_25_Not_Present_1;
  } else {
    presence_St_25_Present = true;
    presence = presence_St_25_Present;
    nr_12_St_25_Present = false;
    nr_12 = nr_12_St_25_Present;
    ns_12_St_25_Present_1 = false;
    ns_12_1 = ns_12_St_25_Present_1;
  };
  _out->worker_presence = presence;
  v_51 = (_out->worker_presence||_out->cleaner_presence);
  v_62 = (_out->worker_presence||_out->cleaner_presence);
  v_73 = (_out->worker_presence||_out->cleaner_presence);
  v_84 = (_out->worker_presence||_out->cleaner_presence);
  v_104 = !(_out->worker_presence);
  v_106 = (v_104&&v_105);
  v_125 = !(_out->worker_presence);
  v_127 = (v_125&&v_126);
  if (self->ck_23_1) {
    v_152 = !(c);
    if (v_152) {
      r_13_St_26_Locked = true;
      s_13_St_26_Locked_1 = false;
    } else {
      r_13_St_26_Locked = self->pnr_13;
      s_13_St_26_Locked_1 = true;
    };
    r_13 = r_13_St_26_Locked;
    s_13_1 = s_13_St_26_Locked_1;
  } else {
    if (c) {
      r_13_St_26_Open = true;
    } else {
      r_13_St_26_Open = self->pnr_13;
    };
    r_13 = r_13_St_26_Open;
    if (c) {
      s_13_St_26_Open_1 = true;
    } else {
      s_13_St_26_Open_1 = false;
    };
    s_13_1 = s_13_St_26_Open_1;
  };
  ck_24_1 = s_13_1;
  if (ck_24_1) {
    closet_open_1_St_26_Locked = false;
    nr_13_St_26_Locked = false;
    ns_13_St_26_Locked_1 = true;
    closet_open_1 = closet_open_1_St_26_Locked;
    nr_13 = nr_13_St_26_Locked;
    ns_13_1 = ns_13_St_26_Locked_1;
  } else {
    closet_open_1_St_26_Open = true;
    closet_open_1 = closet_open_1_St_26_Open;
    nr_13_St_26_Open = false;
    nr_13 = nr_13_St_26_Open;
    ns_13_St_26_Open_1 = false;
    ns_13_1 = ns_13_St_26_Open_1;
  };
  _out->closet_open = closet_open_1;
  v_48 = (v_47&&_out->closet_open);
  v_50 = (v_48&&v_49);
  rule7 = (v_46||v_50);
  if (self->ck_21_1) {
    v_151 = !(c_door_1);
    if (v_151) {
      r_14_St_27_Closed = true;
      s_14_St_27_Closed_1 = false;
    } else {
      r_14_St_27_Closed = self->pnr_14;
      s_14_St_27_Closed_1 = true;
    };
    r_14 = r_14_St_27_Closed;
    s_14_1 = s_14_St_27_Closed_1;
  } else {
    v_150 = !(c_door_1);
    if (v_150) {
      r_14_St_27_Open = true;
    } else {
      r_14_St_27_Open = self->pnr_14;
    };
    r_14 = r_14_St_27_Open;
    if (v_150) {
      s_14_St_27_Open_1 = true;
    } else {
      s_14_St_27_Open_1 = false;
    };
    s_14_1 = s_14_St_27_Open_1;
  };
  ck_22_1 = s_14_1;
  if (ck_22_1) {
    door_open_1_St_27_Closed = false;
    nr_14_St_27_Closed = false;
    ns_14_St_27_Closed_1 = true;
    door_open_1 = door_open_1_St_27_Closed;
    nr_14 = nr_14_St_27_Closed;
    ns_14_1 = ns_14_St_27_Closed_1;
  } else {
    door_open_1_St_27_Open = true;
    door_open_1 = door_open_1_St_27_Open;
    nr_14_St_27_Open = false;
    nr_14 = nr_14_St_27_Open;
    ns_14_St_27_Open_1 = false;
    ns_14_1 = ns_14_St_27_Open_1;
  };
  _out->door_open = door_open_1;
  v_59 = (v_58&&_out->door_open);
  v_61 = (v_59&&v_60);
  v_81 = (v_80&&_out->door_open);
  v_83 = (v_81&&v_82);
  if (self->ck_1) {
    if (change) {
      r_15_St_28_Dia = true;
      s_15_St_28_Dia_1 = false;
    } else {
      r_15_St_28_Dia = self->pnr_15;
      s_15_St_28_Dia_1 = true;
    };
    r_15 = r_15_St_28_Dia;
    s_15_1 = s_15_St_28_Dia_1;
  } else {
    if (change) {
      r_15_St_28_Noite = true;
    } else {
      r_15_St_28_Noite = self->pnr_15;
    };
    r_15 = r_15_St_28_Noite;
    if (change) {
      s_15_St_28_Noite_1 = true;
    } else {
      s_15_St_28_Noite_1 = false;
    };
    s_15_1 = s_15_St_28_Noite_1;
  };
  ck_20_1 = s_15_1;
  if (ck_20_1) {
    night_1_St_28_Dia = false;
    nr_15_St_28_Dia = false;
    ns_15_St_28_Dia_1 = true;
    night_1 = night_1_St_28_Dia;
    nr_15 = nr_15_St_28_Dia;
    ns_15_1 = ns_15_St_28_Dia_1;
  } else {
    night_1_St_28_Noite = true;
    night_1 = night_1_St_28_Noite;
    nr_15_St_28_Noite = false;
    nr_15 = nr_15_St_28_Noite;
    ns_15_St_28_Noite_1 = false;
    ns_15_1 = ns_15_St_28_Noite_1;
  };
  _out->night = night_1;
  v_52 = (v_51&&_out->night);
  v_54 = (v_52&&v_53);
  v_55 = (v_54&&_out->air_failed);
  v_56 = !(v_55);
  rule1_5 = (v_56||v_61);
  v_63 = (v_62&&_out->night);
  v_65 = (v_63&&v_64);
  v_67 = (v_65&&v_66);
  v_68 = !(v_67);
  rule1 = (v_68||v_72);
  v_145 = (rule1&&rule1_5);
  v_74 = (v_73&&_out->night);
  v_75 = (v_74&&_out->light_failed);
  v_76 = (v_75&&_out->air_failed);
  v_77 = !(v_76);
  rule2_5 = (v_77||v_83);
  v_85 = (v_84&&_out->night);
  v_86 = (v_85&&_out->light_failed);
  v_88 = (v_86&&v_87);
  v_89 = !(v_88);
  rule2 = (v_89||v_93);
  v_146 = (v_145&&rule2);
  v_147 = (v_146&&rule2_5);
  v_94 = !(_out->night);
  v_95 = (_out->worker_presence&&v_94);
  v_96 = (v_95&&_out->pc_on);
  v_97 = (v_96&&_out->light_on);
  v_99 = (v_97&&v_98);
  v_101 = (v_99&&v_100);
  v_102 = !(v_101);
  rule6 = (v_102||v_103);
  v_148 = (v_147&&rule6);
  v_149 = (v_148&&rule7);
  v_107 = !(_out->night);
  v_108 = (v_106&&v_107);
  v_110 = (v_108&&v_109);
  v_112 = (v_110&&v_111);
  v_114 = (v_112&&v_113);
  v_115 = !(v_114);
  rule5 = (v_115||v_124);
  v_128 = (v_127&&_out->night);
  v_130 = (v_128&&v_129);
  v_132 = (v_130&&v_131);
  v_134 = (v_132&&v_133);
  v_135 = !(v_134);
  rule4 = (v_135||v_144);
  self->pnr = nr;
  self->ck_43_1 = ns_1;
  self->pnr_4 = nr_4;
  self->ck_41_1 = ns_4_1;
  self->pnr_5 = nr_5;
  self->ck_39_1 = ns_5_1;
  self->pnr_6 = nr_6;
  self->ck_37_1 = ns_6_1;
  self->pnr_7 = nr_7;
  self->ck_35_1 = ns_7_1;
  self->pnr_8 = nr_8;
  self->v_220 = ns_8_1;
  self->v_221 = ns_8_2;
  self->pnr_9 = nr_9;
  self->ck_31_1 = ns_9_1;
  self->pnr_10 = nr_10;
  self->ck_29_1 = ns_10_1;
  self->pnr_11 = nr_11;
  self->ck_27_1 = ns_11_1;
  self->pnr_12 = nr_12;
  self->ck_25_1 = ns_12_1;
  self->pnr_13 = nr_13;
  self->ck_23_1 = ns_13_1;
  self->pnr_14 = nr_14;
  self->ck_21_1 = ns_14_1;
  self->pnr_15 = nr_15;
  self->ck_1 = ns_15_1;;
}

