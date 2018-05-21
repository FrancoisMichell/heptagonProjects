/* --- Generated the 20/5/2018 at 22:24 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jan. 19 10:22:24 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "system.h"

void System__room_reset(System__room_mem* self) {
  self->pnr = false;
  self->ck_1_2 = true;
}

void System__room_step(int presence, System__room_out* _out,
                       System__room_mem* self) {
  
  int nr_St_Occupied;
  int ns_St_Occupied_1;
  int room_oc_St_Occupied;
  int nr_St_Empty;
  int ns_St_Empty_1;
  int room_oc_St_Empty;
  int ck_1_1;
  int r_St_Occupied;
  int s_St_Occupied_1;
  int r_St_Empty;
  int s_St_Empty_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1_2) {
    if (presence) {
      r_St_Empty = true;
      s_St_Empty_1 = false;
    } else {
      r_St_Empty = self->pnr;
      s_St_Empty_1 = true;
    };
    r = r_St_Empty;
    s_1 = s_St_Empty_1;
  } else {
    if (presence) {
      r_St_Occupied = true;
    } else {
      r_St_Occupied = self->pnr;
    };
    r = r_St_Occupied;
    if (presence) {
      s_St_Occupied_1 = true;
    } else {
      s_St_Occupied_1 = false;
    };
    s_1 = s_St_Occupied_1;
  };
  ck_1_1 = s_1;
  if (ck_1_1) {
    room_oc_St_Empty = false;
    nr_St_Empty = false;
    ns_St_Empty_1 = true;
    _out->room_oc = room_oc_St_Empty;
    nr = nr_St_Empty;
    ns_1 = ns_St_Empty_1;
  } else {
    room_oc_St_Occupied = true;
    _out->room_oc = room_oc_St_Occupied;
    nr_St_Occupied = false;
    nr = nr_St_Occupied;
    ns_St_Occupied_1 = false;
    ns_1 = ns_St_Occupied_1;
  };
  self->pnr = nr;
  self->ck_1_2 = ns_1;;
}

void System__management_policy_reset(System__management_policy_mem* self) {
  self->pnr = false;
  self->v_89 = false;
  self->v_90 = false;
}

void System__management_policy_step(int eco_input, int confort_input,
                                    System__management_policy_out* _out,
                                    System__management_policy_mem* self) {
  
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int v_84;
  int v_83;
  int v_82;
  int v_81;
  int v_80;
  int v_79;
  int v_78;
  int v_77;
  int ns_St_1_Confort_2_0;
  int ns_St_1_Confort_2_1;
  int ns_St_1_Eco_2_0;
  int ns_St_1_Eco_2_1;
  int ns_St_1_Minimal_safety_2_0;
  int ns_St_1_Minimal_safety_2_1;
  int ck_2_2_0;
  int ck_2_2_1;
  int nr_St_1_Confort;
  int ns_St_1_Confort_2;
  int ns_St_1_Confort_1;
  int pl_St_1_Confort;
  int confort_St_1_Confort;
  int eco_St_1_Confort;
  int nr_St_1_Eco;
  int ns_St_1_Eco_2;
  int ns_St_1_Eco_1;
  int pl_St_1_Eco;
  int confort_St_1_Eco;
  int eco_St_1_Eco;
  int nr_St_1_Minimal_safety;
  int ns_St_1_Minimal_safety_2;
  int ns_St_1_Minimal_safety_1;
  int pl_St_1_Minimal_safety;
  int confort_St_1_Minimal_safety;
  int eco_St_1_Minimal_safety;
  int ck_2_2;
  int ck_2_1;
  int v_4_2_0;
  int v_4_2_1;
  int v_5;
  int v_4_2;
  int v_4_1;
  int v_2_2_0;
  int v_2_2_1;
  int v_3;
  int v_2_2;
  int v_2_1;
  int v_2_3_0;
  int v_2_3_1;
  int v_1;
  int v_2_3;
  int v_1_1;
  int v_96;
  int v_95;
  int v_94;
  int v_93;
  int v_92;
  int v_91;
  int s_St_1_Confort_2_0;
  int s_St_1_Confort_2_1;
  int s_St_1_Eco_2_0;
  int s_St_1_Eco_2_1;
  int s_St_1_Minimal_safety_2_0;
  int s_St_1_Minimal_safety_2_1;
  int ck_2_3_0;
  int ck_2_3_1;
  int r_St_1_Confort;
  int s_St_1_Confort_2;
  int s_St_1_Confort_1;
  int r_St_1_Eco;
  int s_St_1_Eco_2;
  int s_St_1_Eco_1;
  int r_St_1_Minimal_safety;
  int s_St_1_Minimal_safety_2;
  int s_St_1_Minimal_safety_1;
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
  ck_1 = self->v_89;
  ck_2_3 = self->v_90;
  if (ck_1) {
    ck_2_3_1 = ck_2_3;
    if (ck_2_3_1) {
      if (confort_input) {
        v_1 = true;
      } else {
        v_1 = self->pnr;
      };
      if (eco_input) {
        r_St_1_Confort = true;
      } else {
        r_St_1_Confort = v_1;
      };
      v_95 = r_St_1_Confort;
      if (confort_input) {
        v_1_1 = false;
      } else {
        v_1_1 = true;
      };
      if (eco_input) {
        s_St_1_Confort_1 = true;
      } else {
        s_St_1_Confort_1 = v_1_1;
      };
      v_91 = s_St_1_Confort_1;
      if (confort_input) {
        v_2_3 = false;
      } else {
        v_2_3 = true;
      };
      if (eco_input) {
        s_St_1_Confort_2 = false;
      } else {
        s_St_1_Confort_2 = v_2_3;
      };
      v_92 = s_St_1_Confort_2;
    } else {
      if (confort_input) {
        v_3 = true;
      } else {
        v_3 = self->pnr;
      };
      if (eco_input) {
        r_St_1_Eco = true;
      } else {
        r_St_1_Eco = v_3;
      };
      if (confort_input) {
        v_2_1 = true;
      } else {
        v_2_1 = true;
      };
      if (eco_input) {
        s_St_1_Eco_1 = false;
      } else {
        s_St_1_Eco_1 = v_2_1;
      };
      if (confort_input) {
        v_2_2 = true;
      } else {
        v_2_2 = false;
      };
      if (eco_input) {
        s_St_1_Eco_2 = false;
      } else {
        s_St_1_Eco_2 = v_2_2;
      };
      v_95 = r_St_1_Eco;
      v_91 = s_St_1_Eco_1;
      v_92 = s_St_1_Eco_2;
    };
    s_1 = v_91;
    s_2 = v_92;
    r = v_95;
  } else {
    ck_2_3_0 = ck_2_3;
    if (ck_2_3_0) {
      v_96 = true;
      v_93 = true;
      v_94 = true;
    } else {
      if (confort_input) {
        v_5 = true;
      } else {
        v_5 = self->pnr;
      };
      if (eco_input) {
        r_St_1_Minimal_safety = true;
      } else {
        r_St_1_Minimal_safety = v_5;
      };
      v_96 = r_St_1_Minimal_safety;
      if (confort_input) {
        v_4_1 = true;
      } else {
        v_4_1 = false;
      };
      if (eco_input) {
        s_St_1_Minimal_safety_1 = true;
      } else {
        s_St_1_Minimal_safety_1 = v_4_1;
      };
      v_93 = s_St_1_Minimal_safety_1;
      if (confort_input) {
        v_4_2 = true;
      } else {
        v_4_2 = false;
      };
      if (eco_input) {
        s_St_1_Minimal_safety_2 = false;
      } else {
        s_St_1_Minimal_safety_2 = v_4_2;
      };
      v_94 = s_St_1_Minimal_safety_2;
      if (v_4_1) {
        v_4_2_1 = v_4_2;
      } else {
        v_4_2_0 = v_4_2;
      };
      if (s_St_1_Minimal_safety_1) {
        s_St_1_Minimal_safety_2_1 = s_St_1_Minimal_safety_2;
      } else {
        s_St_1_Minimal_safety_2_0 = s_St_1_Minimal_safety_2;
      };
    };
    s_1 = v_93;
    s_2 = v_94;
    r = v_96;
  };
  ck_2_1 = s_1;
  ck_2_2 = s_2;
  if (ck_2_1) {
    ck_2_2_1 = ck_2_2;
    if (ck_2_2_1) {
      pl_St_1_Confort = 7000;
      v_81 = pl_St_1_Confort;
      eco_St_1_Confort = false;
      v_77 = eco_St_1_Confort;
      confort_St_1_Confort = true;
      v_79 = confort_St_1_Confort;
      nr_St_1_Confort = false;
      v_87 = nr_St_1_Confort;
      ns_St_1_Confort_1 = true;
      v_83 = ns_St_1_Confort_1;
      ns_St_1_Confort_2 = true;
      v_84 = ns_St_1_Confort_2;
    } else {
      pl_St_1_Eco = 5000;
      eco_St_1_Eco = true;
      confort_St_1_Eco = false;
      nr_St_1_Eco = false;
      ns_St_1_Eco_1 = true;
      ns_St_1_Eco_2 = false;
      v_81 = pl_St_1_Eco;
      v_77 = eco_St_1_Eco;
      v_79 = confort_St_1_Eco;
      v_87 = nr_St_1_Eco;
      v_83 = ns_St_1_Eco_1;
      v_84 = ns_St_1_Eco_2;
    };
    _out->eco = v_77;
    _out->confort = v_79;
    _out->pl = v_81;
    ns_1 = v_83;
    ns_2 = v_84;
    nr = v_87;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      v_82 = 0;
      v_78 = true;
      v_80 = true;
      v_88 = true;
      v_85 = true;
      v_86 = true;
    } else {
      pl_St_1_Minimal_safety = 3000;
      v_82 = pl_St_1_Minimal_safety;
      eco_St_1_Minimal_safety = false;
      v_78 = eco_St_1_Minimal_safety;
      confort_St_1_Minimal_safety = false;
      v_80 = confort_St_1_Minimal_safety;
      nr_St_1_Minimal_safety = false;
      v_88 = nr_St_1_Minimal_safety;
      ns_St_1_Minimal_safety_1 = false;
      v_85 = ns_St_1_Minimal_safety_1;
      ns_St_1_Minimal_safety_2 = false;
      v_86 = ns_St_1_Minimal_safety_2;
      if (ns_St_1_Minimal_safety_1) {
        ns_St_1_Minimal_safety_2_1 = ns_St_1_Minimal_safety_2;
      } else {
        ns_St_1_Minimal_safety_2_0 = ns_St_1_Minimal_safety_2;
      };
    };
    _out->eco = v_78;
    _out->confort = v_80;
    _out->pl = v_82;
    ns_1 = v_85;
    ns_2 = v_86;
    nr = v_88;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (ck_2_1) {
    if (ck_2_2_1) {
      if (ns_St_1_Confort_1) {
        ns_St_1_Confort_2_1 = ns_St_1_Confort_2;
      } else {
        ns_St_1_Confort_2_0 = ns_St_1_Confort_2;
      };
    } else {
      if (ns_St_1_Eco_1) {
        ns_St_1_Eco_2_1 = ns_St_1_Eco_2;
      } else {
        ns_St_1_Eco_2_0 = ns_St_1_Eco_2;
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
  } else {
    s_2_0 = s_2;
  };
  if (ck_1) {
    if (ck_2_3_1) {
      if (v_1_1) {
        v_2_3_1 = v_2_3;
      } else {
        v_2_3_0 = v_2_3;
      };
      if (s_St_1_Confort_1) {
        s_St_1_Confort_2_1 = s_St_1_Confort_2;
      } else {
        s_St_1_Confort_2_0 = s_St_1_Confort_2;
      };
    } else {
      if (v_2_1) {
        v_2_2_1 = v_2_2;
      } else {
        v_2_2_0 = v_2_2;
      };
      if (s_St_1_Eco_1) {
        s_St_1_Eco_2_1 = s_St_1_Eco_2;
      } else {
        s_St_1_Eco_2_0 = s_St_1_Eco_2;
      };
    };
  };
  self->pnr = nr;
  self->v_89 = ns_1;
  self->v_90 = ns_2;;
}

void System__tv_reset(System__tv_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__tv_step(int tv_switch, int c_tv1, int c_tv2,
                     System__tv_out* _out, System__tv_mem* self) {
  
  int nr_St_2_On;
  int ns_St_2_On_1;
  int tv_on_St_2_On;
  int nr_St_2_Off;
  int ns_St_2_Off_1;
  int tv_on_St_2_Off;
  int ck_3_1;
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
  int v;
  int r_St_2_On;
  int s_St_2_On_1;
  int r_St_2_Off;
  int s_St_2_Off_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_9 = (tv_switch||c_tv1);
    v_10 = (v_9&&c_tv2);
    if (v_10) {
      r_St_2_Off = true;
      s_St_2_Off_1 = false;
    } else {
      r_St_2_Off = self->pnr;
      s_St_2_Off_1 = true;
    };
    r = r_St_2_Off;
    s_1 = s_St_2_Off_1;
  } else {
    v_7 = !(c_tv2);
    v = !(c_tv1);
    v_6 = (tv_switch||v);
    v_8 = (v_6&&v_7);
    if (v_8) {
      r_St_2_On = true;
    } else {
      r_St_2_On = self->pnr;
    };
    r = r_St_2_On;
    if (v_8) {
      s_St_2_On_1 = true;
    } else {
      s_St_2_On_1 = false;
    };
    s_1 = s_St_2_On_1;
  };
  ck_3_1 = s_1;
  if (ck_3_1) {
    tv_on_St_2_Off = false;
    nr_St_2_Off = false;
    ns_St_2_Off_1 = true;
    _out->tv_on = tv_on_St_2_Off;
    nr = nr_St_2_Off;
    ns_1 = ns_St_2_Off_1;
  } else {
    tv_on_St_2_On = true;
    _out->tv_on = tv_on_St_2_On;
    nr_St_2_On = false;
    nr = nr_St_2_On;
    ns_St_2_On_1 = false;
    ns_1 = ns_St_2_On_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__lamp_reset(System__lamp_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__lamp_step(int lamp_switch, int c_lamp1, int c_lamp2,
                       System__lamp_out* _out, System__lamp_mem* self) {
  
  int nr_St_3_On;
  int ns_St_3_On_1;
  int lamp_on_St_3_On;
  int nr_St_3_Off;
  int ns_St_3_Off_1;
  int lamp_on_St_3_Off;
  int ck_4_1;
  int v_13;
  int v_12;
  int v_11;
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
    v_12 = (lamp_switch||c_lamp1);
    v_13 = (v_12&&c_lamp2);
    if (v_13) {
      r_St_3_Off = true;
      s_St_3_Off_1 = false;
    } else {
      r_St_3_Off = self->pnr;
      s_St_3_Off_1 = true;
    };
    r = r_St_3_Off;
    s_1 = s_St_3_Off_1;
  } else {
    v = (lamp_switch||c_lamp1);
    v_11 = (v&&c_lamp2);
    if (v_11) {
      r_St_3_On = true;
    } else {
      r_St_3_On = self->pnr;
    };
    r = r_St_3_On;
    if (v_11) {
      s_St_3_On_1 = true;
    } else {
      s_St_3_On_1 = false;
    };
    s_1 = s_St_3_On_1;
  };
  ck_4_1 = s_1;
  if (ck_4_1) {
    lamp_on_St_3_Off = false;
    nr_St_3_Off = false;
    ns_St_3_Off_1 = true;
    _out->lamp_on = lamp_on_St_3_Off;
    nr = nr_St_3_Off;
    ns_1 = ns_St_3_Off_1;
  } else {
    lamp_on_St_3_On = true;
    _out->lamp_on = lamp_on_St_3_On;
    nr_St_3_On = false;
    nr = nr_St_3_On;
    ns_St_3_On_1 = false;
    ns_1 = ns_St_3_On_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__door_reset(System__door_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__door_step(int push, int c_door1, int c_door2,
                       System__door_out* _out, System__door_mem* self) {
  
  int nr_St_4_Open;
  int ns_St_4_Open_1;
  int door_open_St_4_Open;
  int nr_St_4_Closed;
  int ns_St_4_Closed_1;
  int door_open_St_4_Closed;
  int ck_5_1;
  int v_16;
  int v_15;
  int v_14;
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
    v_15 = (push||c_door1);
    v_16 = (v_15&&c_door2);
    if (v_16) {
      r_St_4_Closed = true;
      s_St_4_Closed_1 = false;
    } else {
      r_St_4_Closed = self->pnr;
      s_St_4_Closed_1 = true;
    };
    r = r_St_4_Closed;
    s_1 = s_St_4_Closed_1;
  } else {
    v = (push&&c_door1);
    v_14 = (v&&c_door2);
    if (v_14) {
      r_St_4_Open = true;
    } else {
      r_St_4_Open = self->pnr;
    };
    r = r_St_4_Open;
    if (v_14) {
      s_St_4_Open_1 = true;
    } else {
      s_St_4_Open_1 = false;
    };
    s_1 = s_St_4_Open_1;
  };
  ck_5_1 = s_1;
  if (ck_5_1) {
    door_open_St_4_Closed = false;
    nr_St_4_Closed = false;
    ns_St_4_Closed_1 = true;
    _out->door_open = door_open_St_4_Closed;
    nr = nr_St_4_Closed;
    ns_1 = ns_St_4_Closed_1;
  } else {
    door_open_St_4_Open = true;
    _out->door_open = door_open_St_4_Open;
    nr_St_4_Open = false;
    nr = nr_St_4_Open;
    ns_St_4_Open_1 = false;
    ns_1 = ns_St_4_Open_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__rad_reset(System__rad_mem* self) {
  self->pnr = false;
  self->v_107 = false;
  self->v_108 = false;
}

void System__rad_step(int up1, int up2, int down1, int down2, int c1, int c2,
                      System__rad_out* _out, System__rad_mem* self) {
  
  int v_106;
  int v_105;
  int v_104;
  int v_103;
  int v_102;
  int v_101;
  int v_100;
  int v_99;
  int v_98;
  int v_97;
  int ns_St_5_High_2_0;
  int ns_St_5_High_2_1;
  int ns_St_5_Eco_2_0;
  int ns_St_5_Eco_2_1;
  int ns_St_5_Frost_Protection_2_0;
  int ns_St_5_Frost_Protection_2_1;
  int ns_St_5_Off_2_0;
  int ns_St_5_Off_2_1;
  int ck_6_2_0;
  int ck_6_2_1;
  int nr_St_5_High;
  int ns_St_5_High_2;
  int ns_St_5_High_1;
  int power_St_5_High;
  int on_state_St_5_High;
  int nr_St_5_Eco;
  int ns_St_5_Eco_2;
  int ns_St_5_Eco_1;
  int power_St_5_Eco;
  int on_state_St_5_Eco;
  int nr_St_5_Frost_Protection;
  int ns_St_5_Frost_Protection_2;
  int ns_St_5_Frost_Protection_1;
  int power_St_5_Frost_Protection;
  int on_state_St_5_Frost_Protection;
  int nr_St_5_Off;
  int ns_St_5_Off_2;
  int ns_St_5_Off_1;
  int power_St_5_Off;
  int on_state_St_5_Off;
  int ck_6_2;
  int ck_6_1;
  int v_36;
  int v_35;
  int v_33_2_0;
  int v_33_2_1;
  int v_31_2_0;
  int v_31_2_1;
  int v_34;
  int v_33_2;
  int v_33_1;
  int v_32;
  int v_31_2;
  int v_31_1;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_25_2_0;
  int v_25_2_1;
  int v_26;
  int v_25_2;
  int v_25_1;
  int v_24;
  int v_23;
  int v_22;
  int v_20_2_0;
  int v_20_2_1;
  int v_21;
  int v_20_2;
  int v_20_1;
  int v_19;
  int v_18;
  int v_17;
  int v;
  int v_114;
  int v_113;
  int v_112;
  int v_111;
  int v_110;
  int v_109;
  int s_St_5_High_2_0;
  int s_St_5_High_2_1;
  int s_St_5_Eco_2_0;
  int s_St_5_Eco_2_1;
  int s_St_5_Frost_Protection_2_0;
  int s_St_5_Frost_Protection_2_1;
  int s_St_5_Off_2_0;
  int s_St_5_Off_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_5_High;
  int s_St_5_High_2;
  int s_St_5_High_1;
  int r_St_5_Eco;
  int s_St_5_Eco_2;
  int s_St_5_Eco_1;
  int r_St_5_Frost_Protection;
  int s_St_5_Frost_Protection_2;
  int s_St_5_Frost_Protection_1;
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
  ck_1 = self->v_107;
  ck_2 = self->v_108;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_23 = !(c1);
      v_24 = (down1||v_23);
      if (v_24) {
        v_26 = true;
        v_25_1 = true;
        v_25_2 = false;
      } else {
        v_26 = self->pnr;
        v_25_1 = true;
        v_25_2 = true;
      };
      v_22 = (up2&&c2);
      if (v_22) {
        r_St_5_Eco = true;
      } else {
        r_St_5_Eco = v_26;
      };
      v_113 = r_St_5_Eco;
      if (v_22) {
        s_St_5_Eco_1 = false;
      } else {
        s_St_5_Eco_1 = v_25_1;
      };
      v_109 = s_St_5_Eco_1;
      if (v_22) {
        s_St_5_Eco_2 = true;
      } else {
        s_St_5_Eco_2 = v_25_2;
      };
      v_110 = s_St_5_Eco_2;
      if (v_25_1) {
        v_25_2_1 = v_25_2;
      } else {
        v_25_2_0 = v_25_2;
      };
      if (s_St_5_Eco_1) {
        s_St_5_Eco_2_1 = s_St_5_Eco_2;
      } else {
        s_St_5_Eco_2_0 = s_St_5_Eco_2;
      };
    } else {
      v_29 = !(c1);
      v_30 = (down1||v_29);
      if (v_30) {
        v_32 = true;
        v_31_1 = false;
        v_31_2 = false;
      } else {
        v_32 = self->pnr;
        v_31_1 = true;
        v_31_2 = false;
      };
      v_28 = (up2&&c2);
      if (v_28) {
        v_34 = true;
        v_33_1 = false;
        v_33_2 = true;
      } else {
        v_34 = v_32;
        v_33_1 = v_31_1;
        v_33_2 = v_31_2;
      };
      v_27 = (up1&&c1);
      if (v_27) {
        r_St_5_Frost_Protection = true;
        s_St_5_Frost_Protection_1 = true;
        s_St_5_Frost_Protection_2 = true;
      } else {
        r_St_5_Frost_Protection = v_34;
        s_St_5_Frost_Protection_1 = v_33_1;
        s_St_5_Frost_Protection_2 = v_33_2;
      };
      v_113 = r_St_5_Frost_Protection;
      v_109 = s_St_5_Frost_Protection_1;
      v_110 = s_St_5_Frost_Protection_2;
      if (v_31_1) {
        v_31_2_1 = v_31_2;
      } else {
        v_31_2_0 = v_31_2;
      };
      if (v_33_1) {
        v_33_2_1 = v_33_2;
      } else {
        v_33_2_0 = v_33_2;
      };
      if (s_St_5_Frost_Protection_1) {
        s_St_5_Frost_Protection_2_1 = s_St_5_Frost_Protection_2;
      } else {
        s_St_5_Frost_Protection_2_0 = s_St_5_Frost_Protection_2;
      };
    };
    s_1 = v_109;
    s_2 = v_110;
    r = v_113;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_18 = !(c1);
      v_19 = (down1||v_18);
      if (v_19) {
        v_21 = true;
        v_20_1 = true;
        v_20_2 = true;
      } else {
        v_21 = self->pnr;
        v_20_1 = false;
        v_20_2 = true;
      };
      v = !(c2);
      v_17 = (down2||v);
      if (v_17) {
        r_St_5_High = true;
      } else {
        r_St_5_High = v_21;
      };
      v_114 = r_St_5_High;
      if (v_17) {
        s_St_5_High_1 = true;
      } else {
        s_St_5_High_1 = v_20_1;
      };
      v_111 = s_St_5_High_1;
      if (v_17) {
        s_St_5_High_2 = false;
      } else {
        s_St_5_High_2 = v_20_2;
      };
      v_112 = s_St_5_High_2;
    } else {
      v_35 = !(c1);
      v_36 = (up1||v_35);
      if (v_36) {
        r_St_5_Off = true;
        s_St_5_Off_1 = true;
        s_St_5_Off_2 = false;
      } else {
        r_St_5_Off = self->pnr;
        s_St_5_Off_1 = false;
        s_St_5_Off_2 = false;
      };
      v_114 = r_St_5_Off;
      v_111 = s_St_5_Off_1;
      v_112 = s_St_5_Off_2;
    };
    s_1 = v_111;
    s_2 = v_112;
    r = v_114;
  };
  ck_6_1 = s_1;
  ck_6_2 = s_2;
  if (ck_6_1) {
    ck_6_2_1 = ck_6_2;
    if (ck_6_2_1) {
      on_state_St_5_Eco = 2;
      v_97 = on_state_St_5_Eco;
      power_St_5_Eco = 1500;
      v_99 = power_St_5_Eco;
      nr_St_5_Eco = false;
      v_105 = nr_St_5_Eco;
      ns_St_5_Eco_1 = true;
      v_101 = ns_St_5_Eco_1;
      ns_St_5_Eco_2 = true;
      v_102 = ns_St_5_Eco_2;
      if (ns_St_5_Eco_1) {
        ns_St_5_Eco_2_1 = ns_St_5_Eco_2;
      } else {
        ns_St_5_Eco_2_0 = ns_St_5_Eco_2;
      };
    } else {
      on_state_St_5_Frost_Protection = 1;
      power_St_5_Frost_Protection = 300;
      nr_St_5_Frost_Protection = false;
      ns_St_5_Frost_Protection_1 = true;
      ns_St_5_Frost_Protection_2 = false;
      v_97 = on_state_St_5_Frost_Protection;
      v_99 = power_St_5_Frost_Protection;
      v_105 = nr_St_5_Frost_Protection;
      v_101 = ns_St_5_Frost_Protection_1;
      v_102 = ns_St_5_Frost_Protection_2;
      if (ns_St_5_Frost_Protection_1) {
        ns_St_5_Frost_Protection_2_1 = ns_St_5_Frost_Protection_2;
      } else {
        ns_St_5_Frost_Protection_2_0 = ns_St_5_Frost_Protection_2;
      };
    };
    _out->on_state = v_97;
    _out->power = v_99;
    ns_1 = v_101;
    ns_2 = v_102;
    nr = v_105;
  } else {
    ck_6_2_0 = ck_6_2;
    if (ck_6_2_0) {
      on_state_St_5_High = 3;
      v_98 = on_state_St_5_High;
      power_St_5_High = 2000;
      v_100 = power_St_5_High;
      nr_St_5_High = false;
      v_106 = nr_St_5_High;
      ns_St_5_High_1 = false;
      v_103 = ns_St_5_High_1;
      ns_St_5_High_2 = true;
      v_104 = ns_St_5_High_2;
    } else {
      on_state_St_5_Off = 0;
      power_St_5_Off = 0;
      nr_St_5_Off = false;
      ns_St_5_Off_1 = false;
      ns_St_5_Off_2 = false;
      v_98 = on_state_St_5_Off;
      v_100 = power_St_5_Off;
      v_106 = nr_St_5_Off;
      v_103 = ns_St_5_Off_1;
      v_104 = ns_St_5_Off_2;
    };
    _out->on_state = v_98;
    _out->power = v_100;
    ns_1 = v_103;
    ns_2 = v_104;
    nr = v_106;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (!(ck_6_1)) {
    if (ck_6_2_0) {
      if (ns_St_5_High_1) {
        ns_St_5_High_2_1 = ns_St_5_High_2;
      } else {
        ns_St_5_High_2_0 = ns_St_5_High_2;
      };
    } else {
      if (ns_St_5_Off_1) {
        ns_St_5_Off_2_1 = ns_St_5_Off_2;
      } else {
        ns_St_5_Off_2_0 = ns_St_5_Off_2;
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
      if (v_20_1) {
        v_20_2_1 = v_20_2;
      } else {
        v_20_2_0 = v_20_2;
      };
      if (s_St_5_High_1) {
        s_St_5_High_2_1 = s_St_5_High_2;
      } else {
        s_St_5_High_2_0 = s_St_5_High_2;
      };
    } else {
      if (s_St_5_Off_1) {
        s_St_5_Off_2_1 = s_St_5_Off_2;
      } else {
        s_St_5_Off_2_0 = s_St_5_Off_2;
      };
    };
  };
  self->pnr = nr;
  self->v_107 = ns_1;
  self->v_108 = ns_2;;
}

void System__washing_machine_reset(System__washing_machine_mem* self) {
  self->pnr = false;
  self->v_151 = true;
  self->v_152 = true;
  self->v_153 = true;
}

void System__washing_machine_step(int finish, int start, int c_wash,
                                  System__washing_machine_out* _out,
                                  System__washing_machine_mem* self) {
  
  int v_150;
  int v_149;
  int v_148;
  int v_147;
  int v_146;
  int v_145;
  int v_144;
  int v_143;
  int v_142;
  int v_141;
  int v_140;
  int v_139;
  int v_138;
  int v_137;
  int v_136;
  int v_135;
  int v_134;
  int v_133;
  int v_132;
  int v_131;
  int v_130;
  int v_129;
  int v_128;
  int v_127;
  int v_126;
  int v_125;
  int v_124;
  int v_123;
  int v_122;
  int v_121;
  int v_120;
  int v_119;
  int v_118;
  int v_117;
  int v_116;
  int v_115;
  int ns_St_6_Standby_2_0;
  int ns_St_6_Standby_3_0_0;
  int ns_St_6_Standby_3_0_1;
  int ns_St_6_Standby_2_1;
  int ns_St_6_Standby_3_1_0;
  int ns_St_6_Standby_3_1_1;
  int ns_St_6_Spin_2_0;
  int ns_St_6_Spin_3_0_0;
  int ns_St_6_Spin_3_0_1;
  int ns_St_6_Spin_2_1;
  int ns_St_6_Spin_3_1_0;
  int ns_St_6_Spin_3_1_1;
  int ns_St_6_Rinse_2_0;
  int ns_St_6_Rinse_3_0_0;
  int ns_St_6_Rinse_3_0_1;
  int ns_St_6_Rinse_2_1;
  int ns_St_6_Rinse_3_1_0;
  int ns_St_6_Rinse_3_1_1;
  int ns_St_6_Washing_2_0;
  int ns_St_6_Washing_3_0_0;
  int ns_St_6_Washing_3_0_1;
  int ns_St_6_Washing_2_1;
  int ns_St_6_Washing_3_1_0;
  int ns_St_6_Washing_3_1_1;
  int ns_St_6_Water_fill_2_0;
  int ns_St_6_Water_fill_3_0_0;
  int ns_St_6_Water_fill_3_0_1;
  int ns_St_6_Water_fill_2_1;
  int ns_St_6_Water_fill_3_1_0;
  int ns_St_6_Water_fill_3_1_1;
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
  int nr_St_6_Standby;
  int ns_St_6_Standby_3;
  int ns_St_6_Standby_2;
  int ns_St_6_Standby_1;
  int wash_power_St_6_Standby;
  int wash_state_St_6_Standby;
  int nr_St_6_Spin;
  int ns_St_6_Spin_3;
  int ns_St_6_Spin_2;
  int ns_St_6_Spin_1;
  int wash_power_St_6_Spin;
  int wash_state_St_6_Spin;
  int nr_St_6_Rinse;
  int ns_St_6_Rinse_3;
  int ns_St_6_Rinse_2;
  int ns_St_6_Rinse_1;
  int wash_power_St_6_Rinse;
  int wash_state_St_6_Rinse;
  int nr_St_6_Washing;
  int ns_St_6_Washing_3;
  int ns_St_6_Washing_2;
  int ns_St_6_Washing_1;
  int wash_power_St_6_Washing;
  int wash_state_St_6_Washing;
  int nr_St_6_Water_fill;
  int ns_St_6_Water_fill_3;
  int ns_St_6_Water_fill_2;
  int ns_St_6_Water_fill_1;
  int wash_power_St_6_Water_fill;
  int wash_state_St_6_Water_fill;
  int nr_St_6_Off;
  int ns_St_6_Off_3;
  int ns_St_6_Off_2;
  int ns_St_6_Off_1;
  int wash_power_St_6_Off;
  int wash_state_St_6_Off;
  int ck_7_3;
  int ck_7_2;
  int ck_7_1;
  int v_39_2_0;
  int v_39_3_0_0;
  int v_39_3_0_1;
  int v_39_2_1;
  int v_39_3_1_0;
  int v_39_3_1_1;
  int v_40;
  int v_39_3;
  int v_39_2;
  int v_39_1;
  int v_38;
  int v_37;
  int v;
  int v_177;
  int v_176;
  int v_175;
  int v_174;
  int v_173;
  int v_172;
  int v_171;
  int v_170;
  int v_169;
  int v_168;
  int v_167;
  int v_166;
  int v_165;
  int v_164;
  int v_163;
  int v_162;
  int v_161;
  int v_160;
  int v_159;
  int v_158;
  int v_157;
  int v_156;
  int v_155;
  int v_154;
  int s_St_6_Standby_2_0;
  int s_St_6_Standby_3_0_0;
  int s_St_6_Standby_3_0_1;
  int s_St_6_Standby_2_1;
  int s_St_6_Standby_3_1_0;
  int s_St_6_Standby_3_1_1;
  int s_St_6_Spin_2_0;
  int s_St_6_Spin_3_0_0;
  int s_St_6_Spin_3_0_1;
  int s_St_6_Spin_2_1;
  int s_St_6_Spin_3_1_0;
  int s_St_6_Spin_3_1_1;
  int s_St_6_Rinse_2_0;
  int s_St_6_Rinse_3_0_0;
  int s_St_6_Rinse_3_0_1;
  int s_St_6_Rinse_2_1;
  int s_St_6_Rinse_3_1_0;
  int s_St_6_Rinse_3_1_1;
  int s_St_6_Washing_2_0;
  int s_St_6_Washing_3_0_0;
  int s_St_6_Washing_3_0_1;
  int s_St_6_Washing_2_1;
  int s_St_6_Washing_3_1_0;
  int s_St_6_Washing_3_1_1;
  int s_St_6_Water_fill_2_0;
  int s_St_6_Water_fill_3_0_0;
  int s_St_6_Water_fill_3_0_1;
  int s_St_6_Water_fill_2_1;
  int s_St_6_Water_fill_3_1_0;
  int s_St_6_Water_fill_3_1_1;
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
  int r_St_6_Standby;
  int s_St_6_Standby_3;
  int s_St_6_Standby_2;
  int s_St_6_Standby_1;
  int r_St_6_Spin;
  int s_St_6_Spin_3;
  int s_St_6_Spin_2;
  int s_St_6_Spin_1;
  int r_St_6_Rinse;
  int s_St_6_Rinse_3;
  int s_St_6_Rinse_2;
  int s_St_6_Rinse_1;
  int r_St_6_Washing;
  int s_St_6_Washing_3;
  int s_St_6_Washing_2;
  int s_St_6_Washing_1;
  int r_St_6_Water_fill;
  int s_St_6_Water_fill_3;
  int s_St_6_Water_fill_2;
  int s_St_6_Water_fill_1;
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
  ck_1 = self->v_151;
  ck_2 = self->v_152;
  ck_3 = self->v_153;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (start) {
          r_St_6_Off = true;
          s_St_6_Off_1 = false;
          s_St_6_Off_2 = false;
          s_St_6_Off_3 = false;
        } else {
          r_St_6_Off = self->pnr;
          s_St_6_Off_1 = true;
          s_St_6_Off_2 = true;
          s_St_6_Off_3 = true;
        };
        v_172 = r_St_6_Off;
        v_154 = s_St_6_Off_1;
        v_155 = s_St_6_Off_2;
        v_156 = s_St_6_Off_3;
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
      } else {
        if (finish) {
          r_St_6_Rinse = true;
        } else {
          r_St_6_Rinse = self->pnr;
        };
        v_172 = r_St_6_Rinse;
        if (finish) {
          s_St_6_Rinse_1 = true;
        } else {
          s_St_6_Rinse_1 = true;
        };
        v_154 = s_St_6_Rinse_1;
        if (finish) {
          s_St_6_Rinse_2 = false;
        } else {
          s_St_6_Rinse_2 = true;
        };
        v_155 = s_St_6_Rinse_2;
        if (finish) {
          s_St_6_Rinse_3 = false;
        } else {
          s_St_6_Rinse_3 = false;
        };
        v_156 = s_St_6_Rinse_3;
        if (s_St_6_Rinse_1) {
          s_St_6_Rinse_2_1 = s_St_6_Rinse_2;
          if (s_St_6_Rinse_2_1) {
            s_St_6_Rinse_3_1_1 = s_St_6_Rinse_3;
          } else {
            s_St_6_Rinse_3_1_0 = s_St_6_Rinse_3;
          };
        } else {
          s_St_6_Rinse_2_0 = s_St_6_Rinse_2;
          if (s_St_6_Rinse_2_0) {
            s_St_6_Rinse_3_0_1 = s_St_6_Rinse_3;
          } else {
            s_St_6_Rinse_3_0_0 = s_St_6_Rinse_3;
          };
        };
      };
      v_166 = v_154;
      v_167 = v_155;
      v_168 = v_156;
      v_174 = v_172;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_173 = true;
        v_157 = true;
        v_158 = true;
        v_159 = true;
      } else {
        if (finish) {
          r_St_6_Spin = true;
        } else {
          r_St_6_Spin = self->pnr;
        };
        v_173 = r_St_6_Spin;
        if (finish) {
          s_St_6_Spin_1 = true;
        } else {
          s_St_6_Spin_1 = true;
        };
        v_157 = s_St_6_Spin_1;
        if (finish) {
          s_St_6_Spin_2 = true;
        } else {
          s_St_6_Spin_2 = false;
        };
        v_158 = s_St_6_Spin_2;
        if (finish) {
          s_St_6_Spin_3 = true;
        } else {
          s_St_6_Spin_3 = false;
        };
        v_159 = s_St_6_Spin_3;
      };
      v_166 = v_157;
      v_167 = v_158;
      v_168 = v_159;
      v_174 = v_173;
      if (!(ck_3_1_0)) {
        if (s_St_6_Spin_1) {
          s_St_6_Spin_2_1 = s_St_6_Spin_2;
          if (s_St_6_Spin_2_1) {
            s_St_6_Spin_3_1_1 = s_St_6_Spin_3;
          } else {
            s_St_6_Spin_3_1_0 = s_St_6_Spin_3;
          };
        } else {
          s_St_6_Spin_2_0 = s_St_6_Spin_2;
          if (s_St_6_Spin_2_0) {
            s_St_6_Spin_3_0_1 = s_St_6_Spin_3;
          } else {
            s_St_6_Spin_3_0_0 = s_St_6_Spin_3;
          };
        };
      };
    };
    s_1 = v_166;
    s_2 = v_167;
    s_3 = v_168;
    r = v_174;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      if (ck_3_0_1) {
        if (c_wash) {
          r_St_6_Standby = true;
        } else {
          r_St_6_Standby = self->pnr;
        };
        v_175 = r_St_6_Standby;
        if (c_wash) {
          s_St_6_Standby_1 = false;
        } else {
          s_St_6_Standby_1 = false;
        };
        v_160 = s_St_6_Standby_1;
        if (c_wash) {
          s_St_6_Standby_2 = true;
        } else {
          s_St_6_Standby_2 = true;
        };
        v_161 = s_St_6_Standby_2;
        if (c_wash) {
          s_St_6_Standby_3 = false;
        } else {
          s_St_6_Standby_3 = true;
        };
        v_162 = s_St_6_Standby_3;
      } else {
        if (finish) {
          r_St_6_Washing = true;
          s_St_6_Washing_1 = true;
          s_St_6_Washing_2 = true;
          s_St_6_Washing_3 = false;
        } else {
          r_St_6_Washing = self->pnr;
          s_St_6_Washing_1 = false;
          s_St_6_Washing_2 = true;
          s_St_6_Washing_3 = false;
        };
        v_175 = r_St_6_Washing;
        v_160 = s_St_6_Washing_1;
        v_161 = s_St_6_Washing_2;
        v_162 = s_St_6_Washing_3;
      };
      v_169 = v_160;
      v_170 = v_161;
      v_171 = v_162;
      v_177 = v_175;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_176 = true;
        v_163 = true;
        v_164 = true;
        v_165 = true;
      } else {
        v_37 = !(c_wash);
        v_38 = (finish&&v_37);
        if (v_38) {
          v_40 = true;
          v_39_1 = false;
          v_39_2 = true;
          v_39_3 = true;
        } else {
          v_40 = self->pnr;
          v_39_1 = false;
          v_39_2 = false;
          v_39_3 = false;
        };
        v = (finish&&c_wash);
        if (v) {
          r_St_6_Water_fill = true;
        } else {
          r_St_6_Water_fill = v_40;
        };
        v_176 = r_St_6_Water_fill;
        if (v) {
          s_St_6_Water_fill_1 = false;
        } else {
          s_St_6_Water_fill_1 = v_39_1;
        };
        v_163 = s_St_6_Water_fill_1;
        if (v) {
          s_St_6_Water_fill_2 = true;
        } else {
          s_St_6_Water_fill_2 = v_39_2;
        };
        v_164 = s_St_6_Water_fill_2;
        if (v) {
          s_St_6_Water_fill_3 = false;
        } else {
          s_St_6_Water_fill_3 = v_39_3;
        };
        v_165 = s_St_6_Water_fill_3;
        if (v_39_1) {
          v_39_2_1 = v_39_2;
          if (v_39_2_1) {
            v_39_3_1_1 = v_39_3;
          } else {
            v_39_3_1_0 = v_39_3;
          };
        } else {
          v_39_2_0 = v_39_2;
          if (v_39_2_0) {
            v_39_3_0_1 = v_39_3;
          } else {
            v_39_3_0_0 = v_39_3;
          };
        };
        if (s_St_6_Water_fill_1) {
          s_St_6_Water_fill_2_1 = s_St_6_Water_fill_2;
          if (s_St_6_Water_fill_2_1) {
            s_St_6_Water_fill_3_1_1 = s_St_6_Water_fill_3;
          } else {
            s_St_6_Water_fill_3_1_0 = s_St_6_Water_fill_3;
          };
        } else {
          s_St_6_Water_fill_2_0 = s_St_6_Water_fill_2;
          if (s_St_6_Water_fill_2_0) {
            s_St_6_Water_fill_3_0_1 = s_St_6_Water_fill_3;
          } else {
            s_St_6_Water_fill_3_0_0 = s_St_6_Water_fill_3;
          };
        };
      };
      v_169 = v_163;
      v_170 = v_164;
      v_171 = v_165;
      v_177 = v_176;
    };
    s_1 = v_169;
    s_2 = v_170;
    s_3 = v_171;
    r = v_177;
  };
  ck_7_1 = s_1;
  ck_7_2 = s_2;
  ck_7_3 = s_3;
  if (ck_7_1) {
    ck_7_2_1 = ck_7_2;
    if (ck_7_2_1) {
      ck_7_3_1_1 = ck_7_3;
      if (ck_7_3_1_1) {
        wash_state_St_6_Off = 0;
        wash_power_St_6_Off = 0;
        nr_St_6_Off = false;
        ns_St_6_Off_1 = true;
        ns_St_6_Off_2 = true;
        ns_St_6_Off_3 = true;
        v_115 = wash_state_St_6_Off;
        v_121 = wash_power_St_6_Off;
        v_145 = nr_St_6_Off;
        v_127 = ns_St_6_Off_1;
        v_128 = ns_St_6_Off_2;
        v_129 = ns_St_6_Off_3;
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
      } else {
        wash_state_St_6_Rinse = 3;
        v_115 = wash_state_St_6_Rinse;
        wash_power_St_6_Rinse = 200;
        v_121 = wash_power_St_6_Rinse;
        nr_St_6_Rinse = false;
        v_145 = nr_St_6_Rinse;
        ns_St_6_Rinse_1 = true;
        v_127 = ns_St_6_Rinse_1;
        ns_St_6_Rinse_2 = true;
        v_128 = ns_St_6_Rinse_2;
        ns_St_6_Rinse_3 = false;
        v_129 = ns_St_6_Rinse_3;
        if (ns_St_6_Rinse_1) {
          ns_St_6_Rinse_2_1 = ns_St_6_Rinse_2;
          if (ns_St_6_Rinse_2_1) {
            ns_St_6_Rinse_3_1_1 = ns_St_6_Rinse_3;
          } else {
            ns_St_6_Rinse_3_1_0 = ns_St_6_Rinse_3;
          };
        } else {
          ns_St_6_Rinse_2_0 = ns_St_6_Rinse_2;
          if (ns_St_6_Rinse_2_0) {
            ns_St_6_Rinse_3_0_1 = ns_St_6_Rinse_3;
          } else {
            ns_St_6_Rinse_3_0_0 = ns_St_6_Rinse_3;
          };
        };
      };
      v_117 = v_115;
      v_123 = v_121;
      v_139 = v_127;
      v_140 = v_128;
      v_141 = v_129;
      v_147 = v_145;
    } else {
      ck_7_3_1_0 = ck_7_3;
      if (ck_7_3_1_0) {
        v_116 = 0;
        v_122 = 0;
        v_146 = true;
        v_130 = true;
        v_131 = true;
        v_132 = true;
      } else {
        wash_state_St_6_Spin = 4;
        v_116 = wash_state_St_6_Spin;
        wash_power_St_6_Spin = 800;
        v_122 = wash_power_St_6_Spin;
        nr_St_6_Spin = false;
        v_146 = nr_St_6_Spin;
        ns_St_6_Spin_1 = true;
        v_130 = ns_St_6_Spin_1;
        ns_St_6_Spin_2 = false;
        v_131 = ns_St_6_Spin_2;
        ns_St_6_Spin_3 = false;
        v_132 = ns_St_6_Spin_3;
      };
      v_117 = v_116;
      v_123 = v_122;
      v_139 = v_130;
      v_140 = v_131;
      v_141 = v_132;
      v_147 = v_146;
      if (!(ck_7_3_1_0)) {
        if (ns_St_6_Spin_1) {
          ns_St_6_Spin_2_1 = ns_St_6_Spin_2;
          if (ns_St_6_Spin_2_1) {
            ns_St_6_Spin_3_1_1 = ns_St_6_Spin_3;
          } else {
            ns_St_6_Spin_3_1_0 = ns_St_6_Spin_3;
          };
        } else {
          ns_St_6_Spin_2_0 = ns_St_6_Spin_2;
          if (ns_St_6_Spin_2_0) {
            ns_St_6_Spin_3_0_1 = ns_St_6_Spin_3;
          } else {
            ns_St_6_Spin_3_0_0 = ns_St_6_Spin_3;
          };
        };
      };
    };
    _out->wash_state = v_117;
    _out->wash_power = v_123;
    ns_1 = v_139;
    ns_2 = v_140;
    ns_3 = v_141;
    nr = v_147;
  } else {
    ck_7_2_0 = ck_7_2;
    if (ck_7_2_0) {
      ck_7_3_0_1 = ck_7_3;
      if (ck_7_3_0_1) {
        wash_state_St_6_Standby = 5;
        v_118 = wash_state_St_6_Standby;
        wash_power_St_6_Standby = 0;
        v_124 = wash_power_St_6_Standby;
        nr_St_6_Standby = false;
        v_148 = nr_St_6_Standby;
        ns_St_6_Standby_1 = false;
        v_133 = ns_St_6_Standby_1;
        ns_St_6_Standby_2 = true;
        v_134 = ns_St_6_Standby_2;
        ns_St_6_Standby_3 = true;
        v_135 = ns_St_6_Standby_3;
      } else {
        wash_state_St_6_Washing = 2;
        wash_power_St_6_Washing = 250;
        nr_St_6_Washing = false;
        ns_St_6_Washing_1 = false;
        ns_St_6_Washing_2 = true;
        ns_St_6_Washing_3 = false;
        v_118 = wash_state_St_6_Washing;
        v_124 = wash_power_St_6_Washing;
        v_148 = nr_St_6_Washing;
        v_133 = ns_St_6_Washing_1;
        v_134 = ns_St_6_Washing_2;
        v_135 = ns_St_6_Washing_3;
      };
      v_120 = v_118;
      v_126 = v_124;
      v_142 = v_133;
      v_143 = v_134;
      v_144 = v_135;
      v_150 = v_148;
    } else {
      ck_7_3_0_0 = ck_7_3;
      if (ck_7_3_0_0) {
        v_119 = 0;
        v_125 = 0;
        v_149 = true;
        v_136 = true;
        v_137 = true;
        v_138 = true;
      } else {
        wash_state_St_6_Water_fill = 1;
        v_119 = wash_state_St_6_Water_fill;
        wash_power_St_6_Water_fill = 15;
        v_125 = wash_power_St_6_Water_fill;
        nr_St_6_Water_fill = false;
        v_149 = nr_St_6_Water_fill;
        ns_St_6_Water_fill_1 = false;
        v_136 = ns_St_6_Water_fill_1;
        ns_St_6_Water_fill_2 = false;
        v_137 = ns_St_6_Water_fill_2;
        ns_St_6_Water_fill_3 = false;
        v_138 = ns_St_6_Water_fill_3;
        if (ns_St_6_Water_fill_1) {
          ns_St_6_Water_fill_2_1 = ns_St_6_Water_fill_2;
          if (ns_St_6_Water_fill_2_1) {
            ns_St_6_Water_fill_3_1_1 = ns_St_6_Water_fill_3;
          } else {
            ns_St_6_Water_fill_3_1_0 = ns_St_6_Water_fill_3;
          };
        } else {
          ns_St_6_Water_fill_2_0 = ns_St_6_Water_fill_2;
          if (ns_St_6_Water_fill_2_0) {
            ns_St_6_Water_fill_3_0_1 = ns_St_6_Water_fill_3;
          } else {
            ns_St_6_Water_fill_3_0_0 = ns_St_6_Water_fill_3;
          };
        };
      };
      v_120 = v_119;
      v_126 = v_125;
      v_142 = v_136;
      v_143 = v_137;
      v_144 = v_138;
      v_150 = v_149;
    };
    _out->wash_state = v_120;
    _out->wash_power = v_126;
    ns_1 = v_142;
    ns_2 = v_143;
    ns_3 = v_144;
    nr = v_150;
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
        if (ns_St_6_Standby_1) {
          ns_St_6_Standby_2_1 = ns_St_6_Standby_2;
          if (ns_St_6_Standby_2_1) {
            ns_St_6_Standby_3_1_1 = ns_St_6_Standby_3;
          } else {
            ns_St_6_Standby_3_1_0 = ns_St_6_Standby_3;
          };
        } else {
          ns_St_6_Standby_2_0 = ns_St_6_Standby_2;
          if (ns_St_6_Standby_2_0) {
            ns_St_6_Standby_3_0_1 = ns_St_6_Standby_3;
          } else {
            ns_St_6_Standby_3_0_0 = ns_St_6_Standby_3;
          };
        };
      } else {
        if (ns_St_6_Washing_1) {
          ns_St_6_Washing_2_1 = ns_St_6_Washing_2;
          if (ns_St_6_Washing_2_1) {
            ns_St_6_Washing_3_1_1 = ns_St_6_Washing_3;
          } else {
            ns_St_6_Washing_3_1_0 = ns_St_6_Washing_3;
          };
        } else {
          ns_St_6_Washing_2_0 = ns_St_6_Washing_2;
          if (ns_St_6_Washing_2_0) {
            ns_St_6_Washing_3_0_1 = ns_St_6_Washing_3;
          } else {
            ns_St_6_Washing_3_0_0 = ns_St_6_Washing_3;
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
        if (s_St_6_Standby_1) {
          s_St_6_Standby_2_1 = s_St_6_Standby_2;
          if (s_St_6_Standby_2_1) {
            s_St_6_Standby_3_1_1 = s_St_6_Standby_3;
          } else {
            s_St_6_Standby_3_1_0 = s_St_6_Standby_3;
          };
        } else {
          s_St_6_Standby_2_0 = s_St_6_Standby_2;
          if (s_St_6_Standby_2_0) {
            s_St_6_Standby_3_0_1 = s_St_6_Standby_3;
          } else {
            s_St_6_Standby_3_0_0 = s_St_6_Standby_3;
          };
        };
      } else {
        if (s_St_6_Washing_1) {
          s_St_6_Washing_2_1 = s_St_6_Washing_2;
          if (s_St_6_Washing_2_1) {
            s_St_6_Washing_3_1_1 = s_St_6_Washing_3;
          } else {
            s_St_6_Washing_3_1_0 = s_St_6_Washing_3;
          };
        } else {
          s_St_6_Washing_2_0 = s_St_6_Washing_2;
          if (s_St_6_Washing_2_0) {
            s_St_6_Washing_3_0_1 = s_St_6_Washing_3;
          } else {
            s_St_6_Washing_3_0_0 = s_St_6_Washing_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_151 = ns_1;
  self->v_152 = ns_2;
  self->v_153 = ns_3;;
}

void System__oven_reset(System__oven_mem* self) {
  self->pnr = false;
  self->v_208 = true;
  self->v_209 = false;
  self->v_210 = false;
}

void System__oven_step(int finish, int start, int c_oven, int cold,
                       int temp_ok, System__oven_out* _out,
                       System__oven_mem* self) {
  
  int v_207;
  int v_206;
  int v_205;
  int v_204;
  int v_203;
  int v_202;
  int v_201;
  int v_200;
  int v_199;
  int v_198;
  int v_197;
  int v_196;
  int v_195;
  int v_194;
  int v_193;
  int v_192;
  int v_191;
  int v_190;
  int v_189;
  int v_188;
  int v_187;
  int v_186;
  int v_185;
  int v_184;
  int v_183;
  int v_182;
  int v_181;
  int v_180;
  int v_179;
  int v_178;
  int ns_St_7_Standby_2_0;
  int ns_St_7_Standby_3_0_0;
  int ns_St_7_Standby_3_0_1;
  int ns_St_7_Standby_2_1;
  int ns_St_7_Standby_3_1_0;
  int ns_St_7_Standby_3_1_1;
  int ns_St_7_Reheat_2_0;
  int ns_St_7_Reheat_3_0_0;
  int ns_St_7_Reheat_3_0_1;
  int ns_St_7_Reheat_2_1;
  int ns_St_7_Reheat_3_1_0;
  int ns_St_7_Reheat_3_1_1;
  int ns_St_7_Maintain_2_0;
  int ns_St_7_Maintain_3_0_0;
  int ns_St_7_Maintain_3_0_1;
  int ns_St_7_Maintain_2_1;
  int ns_St_7_Maintain_3_1_0;
  int ns_St_7_Maintain_3_1_1;
  int ns_St_7_Heat_2_0;
  int ns_St_7_Heat_3_0_0;
  int ns_St_7_Heat_3_0_1;
  int ns_St_7_Heat_2_1;
  int ns_St_7_Heat_3_1_0;
  int ns_St_7_Heat_3_1_1;
  int ns_St_7_Off_2_0;
  int ns_St_7_Off_3_0_0;
  int ns_St_7_Off_3_0_1;
  int ns_St_7_Off_2_1;
  int ns_St_7_Off_3_1_0;
  int ns_St_7_Off_3_1_1;
  int ck_8_2_0;
  int ck_8_3_0_0;
  int ck_8_3_0_1;
  int ck_8_2_1;
  int ck_8_3_1_0;
  int ck_8_3_1_1;
  int nr_St_7_Standby;
  int ns_St_7_Standby_3;
  int ns_St_7_Standby_2;
  int ns_St_7_Standby_1;
  int oven_power_St_7_Standby;
  int oven_state_St_7_Standby;
  int nr_St_7_Reheat;
  int ns_St_7_Reheat_3;
  int ns_St_7_Reheat_2;
  int ns_St_7_Reheat_1;
  int oven_power_St_7_Reheat;
  int oven_state_St_7_Reheat;
  int nr_St_7_Maintain;
  int ns_St_7_Maintain_3;
  int ns_St_7_Maintain_2;
  int ns_St_7_Maintain_1;
  int oven_power_St_7_Maintain;
  int oven_state_St_7_Maintain;
  int nr_St_7_Heat;
  int ns_St_7_Heat_3;
  int ns_St_7_Heat_2;
  int ns_St_7_Heat_1;
  int oven_power_St_7_Heat;
  int oven_state_St_7_Heat;
  int nr_St_7_Off;
  int ns_St_7_Off_3;
  int ns_St_7_Off_2;
  int ns_St_7_Off_1;
  int oven_power_St_7_Off;
  int oven_state_St_7_Off;
  int ck_8_3;
  int ck_8_2;
  int ck_8_1;
  int v_50_2_0;
  int v_50_3_0_0;
  int v_50_3_0_1;
  int v_50_2_1;
  int v_50_3_1_0;
  int v_50_3_1_1;
  int v_51;
  int v_50_3;
  int v_50_2;
  int v_50_1;
  int v_49;
  int v_48;
  int v_47;
  int v_45_2_0;
  int v_45_3_0_0;
  int v_45_3_0_1;
  int v_45_2_1;
  int v_45_3_1_0;
  int v_45_3_1_1;
  int v_46;
  int v_45_3;
  int v_45_2;
  int v_45_1;
  int v_43_2_0;
  int v_43_3_0_0;
  int v_43_3_0_1;
  int v_43_2_1;
  int v_43_3_1_0;
  int v_43_3_1_1;
  int v_44;
  int v_43_3;
  int v_43_2;
  int v_43_1;
  int v_42;
  int v_2_0;
  int v_3_0_0;
  int v_3_0_1;
  int v_2_1;
  int v_3_1_0;
  int v_3_1_1;
  int v_41;
  int v_3;
  int v_2;
  int v_1;
  int v_230;
  int v_229;
  int v_228;
  int v_227;
  int v_226;
  int v_225;
  int v_224;
  int v_223;
  int v_222;
  int v_221;
  int v_220;
  int v_219;
  int v_218;
  int v_217;
  int v_216;
  int v_215;
  int v_214;
  int v_213;
  int v_212;
  int v_211;
  int s_St_7_Standby_2_0;
  int s_St_7_Standby_3_0_0;
  int s_St_7_Standby_3_0_1;
  int s_St_7_Standby_2_1;
  int s_St_7_Standby_3_1_0;
  int s_St_7_Standby_3_1_1;
  int s_St_7_Reheat_2_0;
  int s_St_7_Reheat_3_0_0;
  int s_St_7_Reheat_3_0_1;
  int s_St_7_Reheat_2_1;
  int s_St_7_Reheat_3_1_0;
  int s_St_7_Reheat_3_1_1;
  int s_St_7_Maintain_2_0;
  int s_St_7_Maintain_3_0_0;
  int s_St_7_Maintain_3_0_1;
  int s_St_7_Maintain_2_1;
  int s_St_7_Maintain_3_1_0;
  int s_St_7_Maintain_3_1_1;
  int s_St_7_Heat_2_0;
  int s_St_7_Heat_3_0_0;
  int s_St_7_Heat_3_0_1;
  int s_St_7_Heat_2_1;
  int s_St_7_Heat_3_1_0;
  int s_St_7_Heat_3_1_1;
  int s_St_7_Off_2_0;
  int s_St_7_Off_3_0_0;
  int s_St_7_Off_3_0_1;
  int s_St_7_Off_2_1;
  int s_St_7_Off_3_1_0;
  int s_St_7_Off_3_1_1;
  int ck_2_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_St_7_Standby;
  int s_St_7_Standby_3;
  int s_St_7_Standby_2;
  int s_St_7_Standby_1;
  int r_St_7_Reheat;
  int s_St_7_Reheat_3;
  int s_St_7_Reheat_2;
  int s_St_7_Reheat_1;
  int r_St_7_Maintain;
  int s_St_7_Maintain_3;
  int s_St_7_Maintain_2;
  int s_St_7_Maintain_1;
  int r_St_7_Heat;
  int s_St_7_Heat_3;
  int s_St_7_Heat_2;
  int s_St_7_Heat_1;
  int r_St_7_Off;
  int s_St_7_Off_3;
  int s_St_7_Off_2;
  int s_St_7_Off_1;
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
  ck_1 = self->v_208;
  ck_2 = self->v_209;
  ck_3 = self->v_210;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (temp_ok) {
          v_46 = true;
        } else {
          v_46 = self->pnr;
        };
        if (finish) {
          r_St_7_Heat = true;
        } else {
          r_St_7_Heat = v_46;
        };
        if (temp_ok) {
          v_45_1 = true;
        } else {
          v_45_1 = true;
        };
        if (finish) {
          s_St_7_Heat_1 = true;
        } else {
          s_St_7_Heat_1 = v_45_1;
        };
        if (temp_ok) {
          v_45_2 = true;
        } else {
          v_45_2 = true;
        };
        if (finish) {
          s_St_7_Heat_2 = false;
        } else {
          s_St_7_Heat_2 = v_45_2;
        };
        if (temp_ok) {
          v_45_3 = false;
        } else {
          v_45_3 = true;
        };
        if (finish) {
          s_St_7_Heat_3 = false;
        } else {
          s_St_7_Heat_3 = v_45_3;
        };
        v_226 = r_St_7_Heat;
        v_211 = s_St_7_Heat_1;
        v_212 = s_St_7_Heat_2;
        v_213 = s_St_7_Heat_3;
      } else {
        v_42 = (cold&&c_oven);
        if (v_42) {
          v_44 = true;
        } else {
          v_44 = self->pnr;
        };
        if (finish) {
          r_St_7_Maintain = true;
        } else {
          r_St_7_Maintain = v_44;
        };
        v_226 = r_St_7_Maintain;
        if (v_42) {
          v_43_1 = false;
        } else {
          v_43_1 = true;
        };
        if (finish) {
          s_St_7_Maintain_1 = true;
        } else {
          s_St_7_Maintain_1 = v_43_1;
        };
        v_211 = s_St_7_Maintain_1;
        if (v_42) {
          v_43_2 = false;
        } else {
          v_43_2 = true;
        };
        if (finish) {
          s_St_7_Maintain_2 = false;
        } else {
          s_St_7_Maintain_2 = v_43_2;
        };
        v_212 = s_St_7_Maintain_2;
        if (v_42) {
          v_43_3 = true;
        } else {
          v_43_3 = false;
        };
        if (finish) {
          s_St_7_Maintain_3 = false;
        } else {
          s_St_7_Maintain_3 = v_43_3;
        };
        v_213 = s_St_7_Maintain_3;
      };
      v_220 = v_211;
      v_221 = v_212;
      v_222 = v_213;
      v_228 = v_226;
      if (ck_3_1_1) {
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
        if (s_St_7_Heat_1) {
          s_St_7_Heat_2_1 = s_St_7_Heat_2;
          if (s_St_7_Heat_2_1) {
            s_St_7_Heat_3_1_1 = s_St_7_Heat_3;
          } else {
            s_St_7_Heat_3_1_0 = s_St_7_Heat_3;
          };
        } else {
          s_St_7_Heat_2_0 = s_St_7_Heat_2;
          if (s_St_7_Heat_2_0) {
            s_St_7_Heat_3_0_1 = s_St_7_Heat_3;
          } else {
            s_St_7_Heat_3_0_0 = s_St_7_Heat_3;
          };
        };
      } else {
        if (v_43_1) {
          v_43_2_1 = v_43_2;
          if (v_43_2_1) {
            v_43_3_1_1 = v_43_3;
          } else {
            v_43_3_1_0 = v_43_3;
          };
        } else {
          v_43_2_0 = v_43_2;
          if (v_43_2_0) {
            v_43_3_0_1 = v_43_3;
          } else {
            v_43_3_0_0 = v_43_3;
          };
        };
        if (s_St_7_Maintain_1) {
          s_St_7_Maintain_2_1 = s_St_7_Maintain_2;
          if (s_St_7_Maintain_2_1) {
            s_St_7_Maintain_3_1_1 = s_St_7_Maintain_3;
          } else {
            s_St_7_Maintain_3_1_0 = s_St_7_Maintain_3;
          };
        } else {
          s_St_7_Maintain_2_0 = s_St_7_Maintain_2;
          if (s_St_7_Maintain_2_0) {
            s_St_7_Maintain_3_0_1 = s_St_7_Maintain_3;
          } else {
            s_St_7_Maintain_3_0_0 = s_St_7_Maintain_3;
          };
        };
      };
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_227 = true;
        v_214 = true;
        v_215 = true;
        v_216 = true;
      } else {
        v_48 = !(c_oven);
        v_49 = (start&&v_48);
        if (v_49) {
          v_51 = true;
          v_50_1 = false;
          v_50_2 = false;
          v_50_3 = false;
        } else {
          v_51 = self->pnr;
          v_50_1 = true;
          v_50_2 = false;
          v_50_3 = false;
        };
        v_47 = (start&&c_oven);
        if (v_47) {
          r_St_7_Off = true;
        } else {
          r_St_7_Off = v_51;
        };
        v_227 = r_St_7_Off;
        if (v_47) {
          s_St_7_Off_1 = true;
        } else {
          s_St_7_Off_1 = v_50_1;
        };
        v_214 = s_St_7_Off_1;
        if (v_47) {
          s_St_7_Off_2 = true;
        } else {
          s_St_7_Off_2 = v_50_2;
        };
        v_215 = s_St_7_Off_2;
        if (v_47) {
          s_St_7_Off_3 = true;
        } else {
          s_St_7_Off_3 = v_50_3;
        };
        v_216 = s_St_7_Off_3;
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
        if (s_St_7_Off_1) {
          s_St_7_Off_2_1 = s_St_7_Off_2;
          if (s_St_7_Off_2_1) {
            s_St_7_Off_3_1_1 = s_St_7_Off_3;
          } else {
            s_St_7_Off_3_1_0 = s_St_7_Off_3;
          };
        } else {
          s_St_7_Off_2_0 = s_St_7_Off_2;
          if (s_St_7_Off_2_0) {
            s_St_7_Off_3_0_1 = s_St_7_Off_3;
          } else {
            s_St_7_Off_3_0_0 = s_St_7_Off_3;
          };
        };
      };
      v_220 = v_214;
      v_221 = v_215;
      v_222 = v_216;
      v_228 = v_227;
    };
    s_1 = v_220;
    s_2 = v_221;
    s_3 = v_222;
    r = v_228;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      v_223 = true;
      v_224 = true;
      v_225 = true;
      v_230 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        if (finish) {
          v_41 = true;
        } else {
          v_41 = self->pnr;
        };
        if (temp_ok) {
          r_St_7_Reheat = true;
        } else {
          r_St_7_Reheat = v_41;
        };
        if (finish) {
          v_1 = true;
        } else {
          v_1 = false;
        };
        if (temp_ok) {
          s_St_7_Reheat_1 = true;
        } else {
          s_St_7_Reheat_1 = v_1;
        };
        if (finish) {
          v_2 = false;
        } else {
          v_2 = false;
        };
        if (temp_ok) {
          s_St_7_Reheat_2 = true;
        } else {
          s_St_7_Reheat_2 = v_2;
        };
        if (finish) {
          v_3 = false;
        } else {
          v_3 = true;
        };
        if (temp_ok) {
          s_St_7_Reheat_3 = false;
        } else {
          s_St_7_Reheat_3 = v_3;
        };
        v_229 = r_St_7_Reheat;
        v_217 = s_St_7_Reheat_1;
        v_218 = s_St_7_Reheat_2;
        v_219 = s_St_7_Reheat_3;
        if (v_1) {
          v_2_1 = v_2;
          if (v_2_1) {
            v_3_1_1 = v_3;
          } else {
            v_3_1_0 = v_3;
          };
        } else {
          v_2_0 = v_2;
          if (v_2_0) {
            v_3_0_1 = v_3;
          } else {
            v_3_0_0 = v_3;
          };
        };
      } else {
        if (c_oven) {
          r_St_7_Standby = true;
        } else {
          r_St_7_Standby = self->pnr;
        };
        v_229 = r_St_7_Standby;
        if (c_oven) {
          s_St_7_Standby_1 = true;
        } else {
          s_St_7_Standby_1 = false;
        };
        v_217 = s_St_7_Standby_1;
        if (c_oven) {
          s_St_7_Standby_2 = true;
        } else {
          s_St_7_Standby_2 = false;
        };
        v_218 = s_St_7_Standby_2;
        if (c_oven) {
          s_St_7_Standby_3 = true;
        } else {
          s_St_7_Standby_3 = false;
        };
        v_219 = s_St_7_Standby_3;
      };
      v_223 = v_217;
      v_224 = v_218;
      v_225 = v_219;
      v_230 = v_229;
    };
    s_1 = v_223;
    s_2 = v_224;
    s_3 = v_225;
    r = v_230;
  };
  ck_8_1 = s_1;
  ck_8_2 = s_2;
  ck_8_3 = s_3;
  if (ck_8_1) {
    ck_8_2_1 = ck_8_2;
    if (ck_8_2_1) {
      ck_8_3_1_1 = ck_8_3;
      if (ck_8_3_1_1) {
        oven_state_St_7_Heat = 1;
        oven_power_St_7_Heat = 1500;
        nr_St_7_Heat = false;
        ns_St_7_Heat_1 = true;
        ns_St_7_Heat_2 = true;
        ns_St_7_Heat_3 = true;
        v_178 = oven_state_St_7_Heat;
        v_183 = oven_power_St_7_Heat;
        v_203 = nr_St_7_Heat;
        v_188 = ns_St_7_Heat_1;
        v_189 = ns_St_7_Heat_2;
        v_190 = ns_St_7_Heat_3;
      } else {
        oven_state_St_7_Maintain = 2;
        v_178 = oven_state_St_7_Maintain;
        oven_power_St_7_Maintain = 300;
        v_183 = oven_power_St_7_Maintain;
        nr_St_7_Maintain = false;
        v_203 = nr_St_7_Maintain;
        ns_St_7_Maintain_1 = true;
        v_188 = ns_St_7_Maintain_1;
        ns_St_7_Maintain_2 = true;
        v_189 = ns_St_7_Maintain_2;
        ns_St_7_Maintain_3 = false;
        v_190 = ns_St_7_Maintain_3;
      };
      v_180 = v_178;
      v_185 = v_183;
      v_197 = v_188;
      v_198 = v_189;
      v_199 = v_190;
      v_205 = v_203;
      if (ck_8_3_1_1) {
        if (ns_St_7_Heat_1) {
          ns_St_7_Heat_2_1 = ns_St_7_Heat_2;
          if (ns_St_7_Heat_2_1) {
            ns_St_7_Heat_3_1_1 = ns_St_7_Heat_3;
          } else {
            ns_St_7_Heat_3_1_0 = ns_St_7_Heat_3;
          };
        } else {
          ns_St_7_Heat_2_0 = ns_St_7_Heat_2;
          if (ns_St_7_Heat_2_0) {
            ns_St_7_Heat_3_0_1 = ns_St_7_Heat_3;
          } else {
            ns_St_7_Heat_3_0_0 = ns_St_7_Heat_3;
          };
        };
      } else {
        if (ns_St_7_Maintain_1) {
          ns_St_7_Maintain_2_1 = ns_St_7_Maintain_2;
          if (ns_St_7_Maintain_2_1) {
            ns_St_7_Maintain_3_1_1 = ns_St_7_Maintain_3;
          } else {
            ns_St_7_Maintain_3_1_0 = ns_St_7_Maintain_3;
          };
        } else {
          ns_St_7_Maintain_2_0 = ns_St_7_Maintain_2;
          if (ns_St_7_Maintain_2_0) {
            ns_St_7_Maintain_3_0_1 = ns_St_7_Maintain_3;
          } else {
            ns_St_7_Maintain_3_0_0 = ns_St_7_Maintain_3;
          };
        };
      };
    } else {
      ck_8_3_1_0 = ck_8_3;
      if (ck_8_3_1_0) {
        v_179 = 0;
        v_184 = 0;
        v_204 = true;
        v_191 = true;
        v_192 = true;
        v_193 = true;
      } else {
        oven_state_St_7_Off = 0;
        v_179 = oven_state_St_7_Off;
        oven_power_St_7_Off = 0;
        v_184 = oven_power_St_7_Off;
        nr_St_7_Off = false;
        v_204 = nr_St_7_Off;
        ns_St_7_Off_1 = true;
        v_191 = ns_St_7_Off_1;
        ns_St_7_Off_2 = false;
        v_192 = ns_St_7_Off_2;
        ns_St_7_Off_3 = false;
        v_193 = ns_St_7_Off_3;
        if (ns_St_7_Off_1) {
          ns_St_7_Off_2_1 = ns_St_7_Off_2;
          if (ns_St_7_Off_2_1) {
            ns_St_7_Off_3_1_1 = ns_St_7_Off_3;
          } else {
            ns_St_7_Off_3_1_0 = ns_St_7_Off_3;
          };
        } else {
          ns_St_7_Off_2_0 = ns_St_7_Off_2;
          if (ns_St_7_Off_2_0) {
            ns_St_7_Off_3_0_1 = ns_St_7_Off_3;
          } else {
            ns_St_7_Off_3_0_0 = ns_St_7_Off_3;
          };
        };
      };
      v_180 = v_179;
      v_185 = v_184;
      v_197 = v_191;
      v_198 = v_192;
      v_199 = v_193;
      v_205 = v_204;
    };
    _out->oven_state = v_180;
    _out->oven_power = v_185;
    ns_1 = v_197;
    ns_2 = v_198;
    ns_3 = v_199;
    nr = v_205;
  } else {
    ck_8_2_0 = ck_8_2;
    if (ck_8_2_0) {
      ck_8_3_0_1 = ck_8_3;
      v_182 = 0;
      v_187 = 0;
      v_200 = true;
      v_201 = true;
      v_202 = true;
      v_207 = true;
    } else {
      ck_8_3_0_0 = ck_8_3;
      if (ck_8_3_0_0) {
        oven_state_St_7_Reheat = 3;
        oven_power_St_7_Reheat = 1000;
        nr_St_7_Reheat = false;
        ns_St_7_Reheat_1 = false;
        ns_St_7_Reheat_2 = false;
        ns_St_7_Reheat_3 = true;
        v_181 = oven_state_St_7_Reheat;
        v_186 = oven_power_St_7_Reheat;
        v_206 = nr_St_7_Reheat;
        v_194 = ns_St_7_Reheat_1;
        v_195 = ns_St_7_Reheat_2;
        v_196 = ns_St_7_Reheat_3;
      } else {
        oven_state_St_7_Standby = 4;
        v_181 = oven_state_St_7_Standby;
        oven_power_St_7_Standby = 0;
        v_186 = oven_power_St_7_Standby;
        nr_St_7_Standby = false;
        v_206 = nr_St_7_Standby;
        ns_St_7_Standby_1 = false;
        v_194 = ns_St_7_Standby_1;
        ns_St_7_Standby_2 = false;
        v_195 = ns_St_7_Standby_2;
        ns_St_7_Standby_3 = false;
        v_196 = ns_St_7_Standby_3;
      };
      v_182 = v_181;
      v_187 = v_186;
      v_200 = v_194;
      v_201 = v_195;
      v_202 = v_196;
      v_207 = v_206;
    };
    _out->oven_state = v_182;
    _out->oven_power = v_187;
    ns_1 = v_200;
    ns_2 = v_201;
    ns_3 = v_202;
    nr = v_207;
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
  if (!(ck_8_1)) {
    if (!(ck_8_2_0)) {
      if (ck_8_3_0_0) {
        if (ns_St_7_Reheat_1) {
          ns_St_7_Reheat_2_1 = ns_St_7_Reheat_2;
          if (ns_St_7_Reheat_2_1) {
            ns_St_7_Reheat_3_1_1 = ns_St_7_Reheat_3;
          } else {
            ns_St_7_Reheat_3_1_0 = ns_St_7_Reheat_3;
          };
        } else {
          ns_St_7_Reheat_2_0 = ns_St_7_Reheat_2;
          if (ns_St_7_Reheat_2_0) {
            ns_St_7_Reheat_3_0_1 = ns_St_7_Reheat_3;
          } else {
            ns_St_7_Reheat_3_0_0 = ns_St_7_Reheat_3;
          };
        };
      } else {
        if (ns_St_7_Standby_1) {
          ns_St_7_Standby_2_1 = ns_St_7_Standby_2;
          if (ns_St_7_Standby_2_1) {
            ns_St_7_Standby_3_1_1 = ns_St_7_Standby_3;
          } else {
            ns_St_7_Standby_3_1_0 = ns_St_7_Standby_3;
          };
        } else {
          ns_St_7_Standby_2_0 = ns_St_7_Standby_2;
          if (ns_St_7_Standby_2_0) {
            ns_St_7_Standby_3_0_1 = ns_St_7_Standby_3;
          } else {
            ns_St_7_Standby_3_0_0 = ns_St_7_Standby_3;
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
    if (!(ck_2_0)) {
      if (ck_3_0_0) {
        if (s_St_7_Reheat_1) {
          s_St_7_Reheat_2_1 = s_St_7_Reheat_2;
          if (s_St_7_Reheat_2_1) {
            s_St_7_Reheat_3_1_1 = s_St_7_Reheat_3;
          } else {
            s_St_7_Reheat_3_1_0 = s_St_7_Reheat_3;
          };
        } else {
          s_St_7_Reheat_2_0 = s_St_7_Reheat_2;
          if (s_St_7_Reheat_2_0) {
            s_St_7_Reheat_3_0_1 = s_St_7_Reheat_3;
          } else {
            s_St_7_Reheat_3_0_0 = s_St_7_Reheat_3;
          };
        };
      } else {
        if (s_St_7_Standby_1) {
          s_St_7_Standby_2_1 = s_St_7_Standby_2;
          if (s_St_7_Standby_2_1) {
            s_St_7_Standby_3_1_1 = s_St_7_Standby_3;
          } else {
            s_St_7_Standby_3_1_0 = s_St_7_Standby_3;
          };
        } else {
          s_St_7_Standby_2_0 = s_St_7_Standby_2;
          if (s_St_7_Standby_2_0) {
            s_St_7_Standby_3_0_1 = s_St_7_Standby_3;
          } else {
            s_St_7_Standby_3_0_0 = s_St_7_Standby_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_208 = ns_1;
  self->v_209 = ns_2;
  self->v_210 = ns_3;;
}

void System__controller_reset(System__controller_mem* self) {
  self->pnr = false;
  self->ck_14_1 = true;
  self->pnr_1 = false;
  self->ck_12_1 = true;
  self->pnr_2 = false;
  self->ck_10_1 = true;
  self->pnr_3 = false;
  self->ck_1 = true;
}

void System__controller_step(int presence1, int push1, int lamp_switch1,
                             int tv_switch1, System__controller_out* _out,
                             System__controller_mem* self) {
  Controller_controller__controller_controller_out Controller_controller__controller_controller_out_st;
  
  int nr_St_8_On;
  int ns_St_8_On_1;
  int tv_on_St_8_On;
  int nr_St_8_Off;
  int ns_St_8_Off_1;
  int tv_on_St_8_Off;
  int ck_15_1;
  int v_76;
  int v_75;
  int v_74;
  int v_73;
  int v_72;
  int v_71;
  int r_St_8_On;
  int s_St_8_On_1;
  int r_St_8_Off;
  int s_St_8_Off_1;
  int nr_1_St_9_On;
  int ns_1_St_9_On_1;
  int lamp_on_St_9_On;
  int nr_1_St_9_Off;
  int ns_1_St_9_Off_1;
  int lamp_on_St_9_Off;
  int ck_13_1;
  int v_70;
  int v_69;
  int v_68;
  int v_67;
  int r_1_St_9_On;
  int s_1_St_9_On_1;
  int r_1_St_9_Off;
  int s_1_St_9_Off_1;
  int nr_2_St_10_Open;
  int ns_2_St_10_Open_1;
  int door_open_St_10_Open;
  int nr_2_St_10_Closed;
  int ns_2_St_10_Closed_1;
  int door_open_St_10_Closed;
  int ck_11_1;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int r_2_St_10_Open;
  int s_2_St_10_Open_1;
  int r_2_St_10_Closed;
  int s_2_St_10_Closed_1;
  int nr_3_St_11_Occupied;
  int ns_3_St_11_Occupied_1;
  int room_oc_St_11_Occupied;
  int nr_3_St_11_Empty;
  int ns_3_St_11_Empty_1;
  int room_oc_St_11_Empty;
  int ck_9_1;
  int r_3_St_11_Occupied;
  int s_3_St_11_Occupied_1;
  int r_3_St_11_Empty;
  int s_3_St_11_Empty_1;
  int s_3_1;
  int ns_3_1;
  int r_3;
  int nr_3;
  int s_2_1;
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
  int tv_switch;
  int c_tv1;
  int c_tv2;
  int tv_on;
  int lamp_switch;
  int c_lamp1;
  int c_lamp2;
  int lamp_on;
  int push;
  int c_door1;
  int c_door2;
  int door_open;
  int presence;
  int room_oc;
  int rule5;
  int rule4;
  int rule3;
  int rule2;
  int v;
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
  int c_tv1_2;
  int c_tv1_1;
  int c_lamp2_1;
  int c_lamp1_1;
  int c_door2_1;
  int c_door1_1;
  int c2_1;
  int c1_1;
  v_52 = !(presence1);
  tv_switch = tv_switch1;
  lamp_switch = lamp_switch1;
  push = push1;
  presence = presence1;
  Controller_controller__controller_controller_step(presence1, push1,
                                                    lamp_switch1, tv_switch1,
                                                    self->ck_1, self->pnr_3,
                                                    self->ck_10_1,
                                                    self->pnr_2,
                                                    self->ck_12_1,
                                                    self->pnr_1,
                                                    self->ck_14_1, self->pnr,
                                                    true, true, true, true,
                                                    true, true, true, true,
                                                    &Controller_controller__controller_controller_out_st);
  c_tv1_2 = Controller_controller__controller_controller_out_st.controller_c_tv1_2;
  c_tv1_1 = Controller_controller__controller_controller_out_st.controller_c_tv1_1;
  c_lamp2_1 = Controller_controller__controller_controller_out_st.controller_c_lamp2_1;
  c_lamp1_1 = Controller_controller__controller_controller_out_st.controller_c_lamp1_1;
  c_door2_1 = Controller_controller__controller_controller_out_st.controller_c_door2_1;
  c_door1_1 = Controller_controller__controller_controller_out_st.controller_c_door1_1;
  c2_1 = Controller_controller__controller_controller_out_st.controller_c2_1;
  c1_1 = Controller_controller__controller_controller_out_st.controller_c1_1;
  c_tv1 = c_tv1_1;
  c_tv2 = c_tv1_2;
  c_lamp1 = c_lamp1_1;
  c_lamp2 = c_lamp2_1;
  c_door1 = c_door1_1;
  c_door2 = c_door2_1;
  if (self->ck_14_1) {
    v_75 = (tv_switch||c_tv1);
    v_76 = (v_75&&c_tv2);
    if (v_76) {
      r_St_8_Off = true;
      s_St_8_Off_1 = false;
    } else {
      r_St_8_Off = self->pnr;
      s_St_8_Off_1 = true;
    };
    r = r_St_8_Off;
    s_1_2 = s_St_8_Off_1;
  } else {
    v_73 = !(c_tv2);
    v_71 = !(c_tv1);
    v_72 = (tv_switch||v_71);
    v_74 = (v_72&&v_73);
    if (v_74) {
      r_St_8_On = true;
    } else {
      r_St_8_On = self->pnr;
    };
    r = r_St_8_On;
    if (v_74) {
      s_St_8_On_1 = true;
    } else {
      s_St_8_On_1 = false;
    };
    s_1_2 = s_St_8_On_1;
  };
  ck_15_1 = s_1_2;
  if (ck_15_1) {
    tv_on_St_8_Off = false;
    nr_St_8_Off = false;
    ns_St_8_Off_1 = true;
    tv_on = tv_on_St_8_Off;
    nr = nr_St_8_Off;
    ns_1_2 = ns_St_8_Off_1;
  } else {
    tv_on_St_8_On = true;
    tv_on = tv_on_St_8_On;
    nr_St_8_On = false;
    nr = nr_St_8_On;
    ns_St_8_On_1 = false;
    ns_1_2 = ns_St_8_On_1;
  };
  _out->tv_on1 = tv_on;
  if (self->ck_12_1) {
    v_69 = (lamp_switch||c_lamp1);
    v_70 = (v_69&&c_lamp2);
    if (v_70) {
      r_1_St_9_Off = true;
      s_1_St_9_Off_1 = false;
    } else {
      r_1_St_9_Off = self->pnr_1;
      s_1_St_9_Off_1 = true;
    };
    r_1 = r_1_St_9_Off;
    s_1_1 = s_1_St_9_Off_1;
  } else {
    v_67 = (lamp_switch||c_lamp1);
    v_68 = (v_67&&c_lamp2);
    if (v_68) {
      r_1_St_9_On = true;
    } else {
      r_1_St_9_On = self->pnr_1;
    };
    r_1 = r_1_St_9_On;
    if (v_68) {
      s_1_St_9_On_1 = true;
    } else {
      s_1_St_9_On_1 = false;
    };
    s_1_1 = s_1_St_9_On_1;
  };
  ck_13_1 = s_1_1;
  if (ck_13_1) {
    lamp_on_St_9_Off = false;
    nr_1_St_9_Off = false;
    ns_1_St_9_Off_1 = true;
    lamp_on = lamp_on_St_9_Off;
    nr_1 = nr_1_St_9_Off;
    ns_1_1 = ns_1_St_9_Off_1;
  } else {
    lamp_on_St_9_On = true;
    lamp_on = lamp_on_St_9_On;
    nr_1_St_9_On = false;
    nr_1 = nr_1_St_9_On;
    ns_1_St_9_On_1 = false;
    ns_1_1 = ns_1_St_9_On_1;
  };
  _out->lamp_on1 = lamp_on;
  v_53 = (_out->lamp_on1||_out->tv_on1);
  v_54 = (v_52&&v_53);
  rule4 = !(v_54);
  v_55 = (_out->lamp_on1||_out->tv_on1);
  v_56 = !(v_55);
  v_57 = (presence1&&v_56);
  rule3 = !(v_57);
  if (self->ck_10_1) {
    v_65 = (push||c_door1);
    v_66 = (v_65&&c_door2);
    if (v_66) {
      r_2_St_10_Closed = true;
      s_2_St_10_Closed_1 = false;
    } else {
      r_2_St_10_Closed = self->pnr_2;
      s_2_St_10_Closed_1 = true;
    };
    r_2 = r_2_St_10_Closed;
    s_2_1 = s_2_St_10_Closed_1;
  } else {
    v_63 = (push&&c_door1);
    v_64 = (v_63&&c_door2);
    if (v_64) {
      r_2_St_10_Open = true;
    } else {
      r_2_St_10_Open = self->pnr_2;
    };
    r_2 = r_2_St_10_Open;
    if (v_64) {
      s_2_St_10_Open_1 = true;
    } else {
      s_2_St_10_Open_1 = false;
    };
    s_2_1 = s_2_St_10_Open_1;
  };
  ck_11_1 = s_2_1;
  if (ck_11_1) {
    door_open_St_10_Closed = false;
    nr_2_St_10_Closed = false;
    ns_2_St_10_Closed_1 = true;
    door_open = door_open_St_10_Closed;
    nr_2 = nr_2_St_10_Closed;
    ns_2_1 = ns_2_St_10_Closed_1;
  } else {
    door_open_St_10_Open = true;
    door_open = door_open_St_10_Open;
    nr_2_St_10_Open = false;
    nr_2 = nr_2_St_10_Open;
    ns_2_St_10_Open_1 = false;
    ns_2_1 = ns_2_St_10_Open_1;
  };
  _out->door_open1 = door_open;
  v = !(_out->door_open1);
  if (self->ck_1) {
    if (presence) {
      r_3_St_11_Empty = true;
      s_3_St_11_Empty_1 = false;
    } else {
      r_3_St_11_Empty = self->pnr_3;
      s_3_St_11_Empty_1 = true;
    };
    r_3 = r_3_St_11_Empty;
    s_3_1 = s_3_St_11_Empty_1;
  } else {
    if (presence) {
      r_3_St_11_Occupied = true;
    } else {
      r_3_St_11_Occupied = self->pnr_3;
    };
    r_3 = r_3_St_11_Occupied;
    if (presence) {
      s_3_St_11_Occupied_1 = true;
    } else {
      s_3_St_11_Occupied_1 = false;
    };
    s_3_1 = s_3_St_11_Occupied_1;
  };
  ck_9_1 = s_3_1;
  if (ck_9_1) {
    room_oc_St_11_Empty = false;
    nr_3_St_11_Empty = false;
    ns_3_St_11_Empty_1 = true;
    room_oc = room_oc_St_11_Empty;
    nr_3 = nr_3_St_11_Empty;
    ns_3_1 = ns_3_St_11_Empty_1;
  } else {
    room_oc_St_11_Occupied = true;
    room_oc = room_oc_St_11_Occupied;
    nr_3_St_11_Occupied = false;
    nr_3 = nr_3_St_11_Occupied;
    ns_3_St_11_Occupied_1 = false;
    ns_3_1 = ns_3_St_11_Occupied_1;
  };
  _out->room_oc1 = room_oc;
  rule5 = (_out->room_oc1&&v);
  v_58 = !(_out->room_oc1);
  v_59 = (v_58&&_out->door_open1);
  rule2 = !(v_59);
  v_60 = (rule2&&rule3);
  v_61 = (v_60&&rule4);
  v_62 = (v_61&&rule5);
  self->pnr = nr;
  self->ck_14_1 = ns_1_2;
  self->pnr_1 = nr_1;
  self->ck_12_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->ck_10_1 = ns_2_1;
  self->pnr_3 = nr_3;
  self->ck_1 = ns_3_1;;
}

