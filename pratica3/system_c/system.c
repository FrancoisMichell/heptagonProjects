/* --- Generated the 18/5/2018 at 17:58 --- */
/* --- heptagon compiler, version 1.03.00 (compiled mon. jan. 29 17:16:2 CET 2018) --- */
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
  
  int nr_St_Ocupied;
  int ns_St_Ocupied_1;
  int room_oc_St_Ocupied;
  int nr_St_Empty;
  int ns_St_Empty_1;
  int room_oc_St_Empty;
  int ck_1_1;
  int r_St_Ocupied;
  int s_St_Ocupied_1;
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
      r_St_Ocupied = true;
    } else {
      r_St_Ocupied = self->pnr;
    };
    r = r_St_Ocupied;
    if (presence) {
      s_St_Ocupied_1 = true;
    } else {
      s_St_Ocupied_1 = false;
    };
    s_1 = s_St_Ocupied_1;
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
    room_oc_St_Ocupied = true;
    _out->room_oc = room_oc_St_Ocupied;
    nr_St_Ocupied = false;
    nr = nr_St_Ocupied;
    ns_St_Ocupied_1 = false;
    ns_1 = ns_St_Ocupied_1;
  };
  self->pnr = nr;
  self->ck_1_2 = ns_1;;
}

void System__management_policy_reset(System__management_policy_mem* self) {
  self->pnr = false;
  self->v_73 = false;
  self->v_74 = false;
}

void System__management_policy_step(int eco_input, int confort_input,
                                    System__management_policy_out* _out,
                                    System__management_policy_mem* self) {
  
  int v_72;
  int v_71;
  int v_70;
  int v_69;
  int v_68;
  int v_67;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v_62;
  int v_61;
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
  int v_80;
  int v_79;
  int v_78;
  int v_77;
  int v_76;
  int v_75;
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
  ck_1 = self->v_73;
  ck_2_3 = self->v_74;
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
      v_79 = r_St_1_Confort;
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
      v_75 = s_St_1_Confort_1;
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
      v_76 = s_St_1_Confort_2;
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
      v_79 = r_St_1_Eco;
      v_75 = s_St_1_Eco_1;
      v_76 = s_St_1_Eco_2;
    };
    s_1 = v_75;
    s_2 = v_76;
    r = v_79;
  } else {
    ck_2_3_0 = ck_2_3;
    if (ck_2_3_0) {
      v_80 = true;
      v_77 = true;
      v_78 = true;
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
      v_80 = r_St_1_Minimal_safety;
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
      v_77 = s_St_1_Minimal_safety_1;
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
      v_78 = s_St_1_Minimal_safety_2;
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
    s_1 = v_77;
    s_2 = v_78;
    r = v_80;
  };
  ck_2_1 = s_1;
  ck_2_2 = s_2;
  if (ck_2_1) {
    ck_2_2_1 = ck_2_2;
    if (ck_2_2_1) {
      pl_St_1_Confort = 7000;
      v_65 = pl_St_1_Confort;
      eco_St_1_Confort = false;
      v_61 = eco_St_1_Confort;
      confort_St_1_Confort = true;
      v_63 = confort_St_1_Confort;
      nr_St_1_Confort = false;
      v_71 = nr_St_1_Confort;
      ns_St_1_Confort_1 = true;
      v_67 = ns_St_1_Confort_1;
      ns_St_1_Confort_2 = true;
      v_68 = ns_St_1_Confort_2;
    } else {
      pl_St_1_Eco = 5000;
      eco_St_1_Eco = true;
      confort_St_1_Eco = false;
      nr_St_1_Eco = false;
      ns_St_1_Eco_1 = true;
      ns_St_1_Eco_2 = false;
      v_65 = pl_St_1_Eco;
      v_61 = eco_St_1_Eco;
      v_63 = confort_St_1_Eco;
      v_71 = nr_St_1_Eco;
      v_67 = ns_St_1_Eco_1;
      v_68 = ns_St_1_Eco_2;
    };
    _out->eco = v_61;
    _out->confort = v_63;
    _out->pl = v_65;
    ns_1 = v_67;
    ns_2 = v_68;
    nr = v_71;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      v_66 = 0;
      v_62 = true;
      v_64 = true;
      v_72 = true;
      v_69 = true;
      v_70 = true;
    } else {
      pl_St_1_Minimal_safety = 3000;
      v_66 = pl_St_1_Minimal_safety;
      eco_St_1_Minimal_safety = false;
      v_62 = eco_St_1_Minimal_safety;
      confort_St_1_Minimal_safety = false;
      v_64 = confort_St_1_Minimal_safety;
      nr_St_1_Minimal_safety = false;
      v_72 = nr_St_1_Minimal_safety;
      ns_St_1_Minimal_safety_1 = false;
      v_69 = ns_St_1_Minimal_safety_1;
      ns_St_1_Minimal_safety_2 = false;
      v_70 = ns_St_1_Minimal_safety_2;
      if (ns_St_1_Minimal_safety_1) {
        ns_St_1_Minimal_safety_2_1 = ns_St_1_Minimal_safety_2;
      } else {
        ns_St_1_Minimal_safety_2_0 = ns_St_1_Minimal_safety_2;
      };
    };
    _out->eco = v_62;
    _out->confort = v_64;
    _out->pl = v_66;
    ns_1 = v_69;
    ns_2 = v_70;
    nr = v_72;
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
  self->v_73 = ns_1;
  self->v_74 = ns_2;;
}

void System__door_reset(System__door_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__door_step(int push, int c_door, System__door_out* _out,
                       System__door_mem* self) {
  
  int nr_St_2_Open;
  int ns_St_2_Open_1;
  int door_open_St_2_Open;
  int nr_St_2_Closed;
  int ns_St_2_Closed_1;
  int door_open_St_2_Closed;
  int ck_3_1;
  int v_7;
  int v_6;
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
    v_7 = (push&&c_door);
    if (v_7) {
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
    v_6 = (push&&v);
    if (v_6) {
      r_St_2_Open = true;
    } else {
      r_St_2_Open = self->pnr;
    };
    r = r_St_2_Open;
    if (v_6) {
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

void System__rad_reset(System__rad_mem* self) {
  self->pnr = false;
  self->v_91 = false;
  self->v_92 = false;
}

void System__rad_step(int up1, int up2, int down1, int down2, int c1, int c2,
                      System__rad_out* _out, System__rad_mem* self) {
  
  int v_90;
  int v_89;
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int v_84;
  int v_83;
  int v_82;
  int v_81;
  int ns_St_3_High_2_0;
  int ns_St_3_High_2_1;
  int ns_St_3_Eco_2_0;
  int ns_St_3_Eco_2_1;
  int ns_St_3_Frost_Protection_2_0;
  int ns_St_3_Frost_Protection_2_1;
  int ns_St_3_Off_2_0;
  int ns_St_3_Off_2_1;
  int ck_4_2_0;
  int ck_4_2_1;
  int nr_St_3_High;
  int ns_St_3_High_2;
  int ns_St_3_High_1;
  int power_St_3_High;
  int on_state_St_3_High;
  int nr_St_3_Eco;
  int ns_St_3_Eco_2;
  int ns_St_3_Eco_1;
  int power_St_3_Eco;
  int on_state_St_3_Eco;
  int nr_St_3_Frost_Protection;
  int ns_St_3_Frost_Protection_2;
  int ns_St_3_Frost_Protection_1;
  int power_St_3_Frost_Protection;
  int on_state_St_3_Frost_Protection;
  int nr_St_3_Off;
  int ns_St_3_Off_2;
  int ns_St_3_Off_1;
  int power_St_3_Off;
  int on_state_St_3_Off;
  int ck_4_2;
  int ck_4_1;
  int v_27;
  int v_26;
  int v_24_2_0;
  int v_24_2_1;
  int v_22_2_0;
  int v_22_2_1;
  int v_25;
  int v_24_2;
  int v_24_1;
  int v_23;
  int v_22_2;
  int v_22_1;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_16_2_0;
  int v_16_2_1;
  int v_17;
  int v_16_2;
  int v_16_1;
  int v_15;
  int v_14;
  int v_13;
  int v_11_2_0;
  int v_11_2_1;
  int v_12;
  int v_11_2;
  int v_11_1;
  int v_10;
  int v_9;
  int v_8;
  int v;
  int v_98;
  int v_97;
  int v_96;
  int v_95;
  int v_94;
  int v_93;
  int s_St_3_High_2_0;
  int s_St_3_High_2_1;
  int s_St_3_Eco_2_0;
  int s_St_3_Eco_2_1;
  int s_St_3_Frost_Protection_2_0;
  int s_St_3_Frost_Protection_2_1;
  int s_St_3_Off_2_0;
  int s_St_3_Off_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_3_High;
  int s_St_3_High_2;
  int s_St_3_High_1;
  int r_St_3_Eco;
  int s_St_3_Eco_2;
  int s_St_3_Eco_1;
  int r_St_3_Frost_Protection;
  int s_St_3_Frost_Protection_2;
  int s_St_3_Frost_Protection_1;
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
  ck_1 = self->v_91;
  ck_2 = self->v_92;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_14 = !(c1);
      v_15 = (down1||v_14);
      if (v_15) {
        v_17 = true;
        v_16_1 = true;
        v_16_2 = false;
      } else {
        v_17 = self->pnr;
        v_16_1 = true;
        v_16_2 = true;
      };
      v_13 = (up2&&c2);
      if (v_13) {
        r_St_3_Eco = true;
      } else {
        r_St_3_Eco = v_17;
      };
      v_97 = r_St_3_Eco;
      if (v_13) {
        s_St_3_Eco_1 = false;
      } else {
        s_St_3_Eco_1 = v_16_1;
      };
      v_93 = s_St_3_Eco_1;
      if (v_13) {
        s_St_3_Eco_2 = true;
      } else {
        s_St_3_Eco_2 = v_16_2;
      };
      v_94 = s_St_3_Eco_2;
      if (v_16_1) {
        v_16_2_1 = v_16_2;
      } else {
        v_16_2_0 = v_16_2;
      };
      if (s_St_3_Eco_1) {
        s_St_3_Eco_2_1 = s_St_3_Eco_2;
      } else {
        s_St_3_Eco_2_0 = s_St_3_Eco_2;
      };
    } else {
      v_20 = !(c1);
      v_21 = (down1||v_20);
      if (v_21) {
        v_23 = true;
        v_22_1 = false;
        v_22_2 = false;
      } else {
        v_23 = self->pnr;
        v_22_1 = true;
        v_22_2 = false;
      };
      v_19 = (up2&&c2);
      if (v_19) {
        v_25 = true;
        v_24_1 = false;
        v_24_2 = true;
      } else {
        v_25 = v_23;
        v_24_1 = v_22_1;
        v_24_2 = v_22_2;
      };
      v_18 = (up1&&c1);
      if (v_18) {
        r_St_3_Frost_Protection = true;
        s_St_3_Frost_Protection_1 = true;
        s_St_3_Frost_Protection_2 = true;
      } else {
        r_St_3_Frost_Protection = v_25;
        s_St_3_Frost_Protection_1 = v_24_1;
        s_St_3_Frost_Protection_2 = v_24_2;
      };
      v_97 = r_St_3_Frost_Protection;
      v_93 = s_St_3_Frost_Protection_1;
      v_94 = s_St_3_Frost_Protection_2;
      if (v_22_1) {
        v_22_2_1 = v_22_2;
      } else {
        v_22_2_0 = v_22_2;
      };
      if (v_24_1) {
        v_24_2_1 = v_24_2;
      } else {
        v_24_2_0 = v_24_2;
      };
      if (s_St_3_Frost_Protection_1) {
        s_St_3_Frost_Protection_2_1 = s_St_3_Frost_Protection_2;
      } else {
        s_St_3_Frost_Protection_2_0 = s_St_3_Frost_Protection_2;
      };
    };
    s_1 = v_93;
    s_2 = v_94;
    r = v_97;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_9 = !(c1);
      v_10 = (down1||v_9);
      if (v_10) {
        v_12 = true;
        v_11_1 = true;
        v_11_2 = true;
      } else {
        v_12 = self->pnr;
        v_11_1 = false;
        v_11_2 = true;
      };
      v = !(c2);
      v_8 = (down2||v);
      if (v_8) {
        r_St_3_High = true;
      } else {
        r_St_3_High = v_12;
      };
      v_98 = r_St_3_High;
      if (v_8) {
        s_St_3_High_1 = true;
      } else {
        s_St_3_High_1 = v_11_1;
      };
      v_95 = s_St_3_High_1;
      if (v_8) {
        s_St_3_High_2 = false;
      } else {
        s_St_3_High_2 = v_11_2;
      };
      v_96 = s_St_3_High_2;
    } else {
      v_26 = !(c1);
      v_27 = (up1||v_26);
      if (v_27) {
        r_St_3_Off = true;
        s_St_3_Off_1 = true;
        s_St_3_Off_2 = false;
      } else {
        r_St_3_Off = self->pnr;
        s_St_3_Off_1 = false;
        s_St_3_Off_2 = false;
      };
      v_98 = r_St_3_Off;
      v_95 = s_St_3_Off_1;
      v_96 = s_St_3_Off_2;
    };
    s_1 = v_95;
    s_2 = v_96;
    r = v_98;
  };
  ck_4_1 = s_1;
  ck_4_2 = s_2;
  if (ck_4_1) {
    ck_4_2_1 = ck_4_2;
    if (ck_4_2_1) {
      on_state_St_3_Eco = 2;
      v_81 = on_state_St_3_Eco;
      power_St_3_Eco = 1500;
      v_83 = power_St_3_Eco;
      nr_St_3_Eco = false;
      v_89 = nr_St_3_Eco;
      ns_St_3_Eco_1 = true;
      v_85 = ns_St_3_Eco_1;
      ns_St_3_Eco_2 = true;
      v_86 = ns_St_3_Eco_2;
      if (ns_St_3_Eco_1) {
        ns_St_3_Eco_2_1 = ns_St_3_Eco_2;
      } else {
        ns_St_3_Eco_2_0 = ns_St_3_Eco_2;
      };
    } else {
      on_state_St_3_Frost_Protection = 1;
      power_St_3_Frost_Protection = 300;
      nr_St_3_Frost_Protection = false;
      ns_St_3_Frost_Protection_1 = true;
      ns_St_3_Frost_Protection_2 = false;
      v_81 = on_state_St_3_Frost_Protection;
      v_83 = power_St_3_Frost_Protection;
      v_89 = nr_St_3_Frost_Protection;
      v_85 = ns_St_3_Frost_Protection_1;
      v_86 = ns_St_3_Frost_Protection_2;
      if (ns_St_3_Frost_Protection_1) {
        ns_St_3_Frost_Protection_2_1 = ns_St_3_Frost_Protection_2;
      } else {
        ns_St_3_Frost_Protection_2_0 = ns_St_3_Frost_Protection_2;
      };
    };
    _out->on_state = v_81;
    _out->power = v_83;
    ns_1 = v_85;
    ns_2 = v_86;
    nr = v_89;
  } else {
    ck_4_2_0 = ck_4_2;
    if (ck_4_2_0) {
      on_state_St_3_High = 3;
      v_82 = on_state_St_3_High;
      power_St_3_High = 2000;
      v_84 = power_St_3_High;
      nr_St_3_High = false;
      v_90 = nr_St_3_High;
      ns_St_3_High_1 = false;
      v_87 = ns_St_3_High_1;
      ns_St_3_High_2 = true;
      v_88 = ns_St_3_High_2;
    } else {
      on_state_St_3_Off = 0;
      power_St_3_Off = 0;
      nr_St_3_Off = false;
      ns_St_3_Off_1 = false;
      ns_St_3_Off_2 = false;
      v_82 = on_state_St_3_Off;
      v_84 = power_St_3_Off;
      v_90 = nr_St_3_Off;
      v_87 = ns_St_3_Off_1;
      v_88 = ns_St_3_Off_2;
    };
    _out->on_state = v_82;
    _out->power = v_84;
    ns_1 = v_87;
    ns_2 = v_88;
    nr = v_90;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (!(ck_4_1)) {
    if (ck_4_2_0) {
      if (ns_St_3_High_1) {
        ns_St_3_High_2_1 = ns_St_3_High_2;
      } else {
        ns_St_3_High_2_0 = ns_St_3_High_2;
      };
    } else {
      if (ns_St_3_Off_1) {
        ns_St_3_Off_2_1 = ns_St_3_Off_2;
      } else {
        ns_St_3_Off_2_0 = ns_St_3_Off_2;
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
      if (v_11_1) {
        v_11_2_1 = v_11_2;
      } else {
        v_11_2_0 = v_11_2;
      };
      if (s_St_3_High_1) {
        s_St_3_High_2_1 = s_St_3_High_2;
      } else {
        s_St_3_High_2_0 = s_St_3_High_2;
      };
    } else {
      if (s_St_3_Off_1) {
        s_St_3_Off_2_1 = s_St_3_Off_2;
      } else {
        s_St_3_Off_2_0 = s_St_3_Off_2;
      };
    };
  };
  self->pnr = nr;
  self->v_91 = ns_1;
  self->v_92 = ns_2;;
}

void System__controller_reset(System__controller_mem* self) {
  self->pnr = false;
  self->ck_10_1 = true;
  self->pnr_1 = false;
  self->ck_8_1 = true;
  self->pnr_2 = false;
  self->v_109 = false;
  self->v_110 = false;
  self->pnr_3 = false;
  self->v_129 = false;
  self->v_130 = false;
}

void System__controller_step(int up1_1, int up2_1, int down1_1, int down2_1,
                             int eco_input1, int confort_input1,
                             int presence1, int push1,
                             System__controller_out* _out,
                             System__controller_mem* self) {
  Controller_controller__controller_controller_out Controller_controller__controller_controller_out_st;
  
  int nr_St_4_Open;
  int ns_St_4_Open_1;
  int door_open_St_4_Open;
  int nr_St_4_Closed;
  int ns_St_4_Closed_1;
  int door_open_St_4_Closed;
  int ck_11_1;
  int v_60;
  int v_59;
  int v_58;
  int r_St_4_Open;
  int s_St_4_Open_1;
  int r_St_4_Closed;
  int s_St_4_Closed_1;
  int nr_1_St_5_Ocupied;
  int ns_1_St_5_Ocupied_1;
  int room_oc_St_5_Ocupied;
  int nr_1_St_5_Empty;
  int ns_1_St_5_Empty_1;
  int room_oc_St_5_Empty;
  int ck_9_1;
  int r_1_St_5_Ocupied;
  int s_1_St_5_Ocupied_1;
  int r_1_St_5_Empty;
  int s_1_St_5_Empty_1;
  int v_108;
  int v_107;
  int v_106;
  int v_105;
  int v_104;
  int v_103;
  int v_102;
  int v_101;
  int v_100;
  int v_99;
  int ns_2_St_6_High_2_0;
  int ns_2_St_6_High_2_1;
  int ns_2_St_6_Eco_2_0;
  int ns_2_St_6_Eco_2_1;
  int ns_2_St_6_Frost_Protection_2_0;
  int ns_2_St_6_Frost_Protection_2_1;
  int ns_2_St_6_Off_2_0;
  int ns_2_St_6_Off_2_1;
  int ck_7_2_0;
  int ck_7_2_1;
  int nr_2_St_6_High;
  int ns_2_St_6_High_2;
  int ns_2_St_6_High_1;
  int power_St_6_High;
  int on_state_St_6_High;
  int nr_2_St_6_Eco;
  int ns_2_St_6_Eco_2;
  int ns_2_St_6_Eco_1;
  int power_St_6_Eco;
  int on_state_St_6_Eco;
  int nr_2_St_6_Frost_Protection;
  int ns_2_St_6_Frost_Protection_2;
  int ns_2_St_6_Frost_Protection_1;
  int power_St_6_Frost_Protection;
  int on_state_St_6_Frost_Protection;
  int nr_2_St_6_Off;
  int ns_2_St_6_Off_2;
  int ns_2_St_6_Off_1;
  int power_St_6_Off;
  int on_state_St_6_Off;
  int ck_7_2;
  int ck_7_1;
  int v_57;
  int v_56;
  int v_54_2_0;
  int v_54_2_1;
  int v_52_2_0;
  int v_52_2_1;
  int v_55;
  int v_54_2;
  int v_54_1;
  int v_53;
  int v_52_2;
  int v_52_1;
  int v_51;
  int v_50;
  int v_49;
  int v_48;
  int v_46_2_0;
  int v_46_2_1;
  int v_47;
  int v_46_2;
  int v_46_1;
  int v_45;
  int v_44;
  int v_43;
  int v_41_2_0;
  int v_41_2_1;
  int v_42;
  int v_41_2;
  int v_41_1;
  int v_40;
  int v_39;
  int v_38;
  int v_37;
  int v_116;
  int v_115;
  int v_114;
  int v_113;
  int v_112;
  int v_111;
  int s_2_St_6_High_2_0;
  int s_2_St_6_High_2_1;
  int s_2_St_6_Eco_2_0;
  int s_2_St_6_Eco_2_1;
  int s_2_St_6_Frost_Protection_2_0;
  int s_2_St_6_Frost_Protection_2_1;
  int s_2_St_6_Off_2_0;
  int s_2_St_6_Off_2_1;
  int ck_6_2_0;
  int ck_6_2_1;
  int r_2_St_6_High;
  int s_2_St_6_High_2;
  int s_2_St_6_High_1;
  int r_2_St_6_Eco;
  int s_2_St_6_Eco_2;
  int s_2_St_6_Eco_1;
  int r_2_St_6_Frost_Protection;
  int s_2_St_6_Frost_Protection_2;
  int s_2_St_6_Frost_Protection_1;
  int r_2_St_6_Off;
  int s_2_St_6_Off_2;
  int s_2_St_6_Off_1;
  int ck_6_2;
  int ck_6_1;
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
  int ns_3_St_7_Confort_2_0;
  int ns_3_St_7_Confort_2_1;
  int ns_3_St_7_Eco_2_0;
  int ns_3_St_7_Eco_2_1;
  int ns_3_St_7_Minimal_safety_2_0;
  int ns_3_St_7_Minimal_safety_2_1;
  int ck_5_2_0;
  int ck_5_2_1;
  int nr_3_St_7_Confort;
  int ns_3_St_7_Confort_2;
  int ns_3_St_7_Confort_1;
  int pl_St_7_Confort;
  int confort_St_7_Confort;
  int eco_St_7_Confort;
  int nr_3_St_7_Eco;
  int ns_3_St_7_Eco_2;
  int ns_3_St_7_Eco_1;
  int pl_St_7_Eco;
  int confort_St_7_Eco;
  int eco_St_7_Eco;
  int nr_3_St_7_Minimal_safety;
  int ns_3_St_7_Minimal_safety_2;
  int ns_3_St_7_Minimal_safety_1;
  int pl_St_7_Minimal_safety;
  int confort_St_7_Minimal_safety;
  int eco_St_7_Minimal_safety;
  int ck_5_2;
  int ck_5_1;
  int v_35_2_0;
  int v_35_2_1;
  int v_36;
  int v_35_2;
  int v_35_1;
  int v_33_2_0;
  int v_33_2_1;
  int v_34;
  int v_33_2;
  int v_33_1;
  int v_31_2_0;
  int v_31_2_1;
  int v_32;
  int v_31_2;
  int v_31_1;
  int v_136;
  int v_135;
  int v_134;
  int v_133;
  int v_132;
  int v_131;
  int s_3_St_7_Confort_2_0;
  int s_3_St_7_Confort_2_1;
  int s_3_St_7_Eco_2_0;
  int s_3_St_7_Eco_2_1;
  int s_3_St_7_Minimal_safety_2_0;
  int s_3_St_7_Minimal_safety_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_3_St_7_Confort;
  int s_3_St_7_Confort_2;
  int s_3_St_7_Confort_1;
  int r_3_St_7_Eco;
  int s_3_St_7_Eco_2;
  int s_3_St_7_Eco_1;
  int r_3_St_7_Minimal_safety;
  int s_3_St_7_Minimal_safety_2;
  int s_3_St_7_Minimal_safety_1;
  int ck_2;
  int ck_1;
  int s_3_2_0;
  int s_3_2_1;
  int ns_3_2_0;
  int ns_3_2_1;
  int s_2_2_0;
  int s_2_2_1;
  int ns_2_2_0;
  int ns_2_2_1;
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
  int s_1_1;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_1_2;
  int ns_1_2;
  int r;
  int nr;
  int push;
  int c_door;
  int door_open;
  int presence;
  int room_oc;
  int up1;
  int up2;
  int down1;
  int down2;
  int c1;
  int c2;
  int on_state;
  int power;
  int eco_input;
  int confort_input;
  int eco;
  int confort;
  int pl;
  int rule2;
  int rule1;
  int v;
  int v_28;
  int v_29;
  int v_30;
  int c_door1;
  int c2_1;
  int c1_1;
  push = push1;
  presence = presence1;
  up1 = up1_1;
  up2 = up2_1;
  down1 = down1_1;
  down2 = down2_1;
  ck_6_1 = self->v_109;
  ck_6_2 = self->v_110;
  eco_input = eco_input1;
  confort_input = confort_input1;
  ck_1 = self->v_129;
  ck_2 = self->v_130;
  Controller_controller__controller_controller_step(up1_1, up2_1, down1_1,
                                                    down2_1, eco_input1,
                                                    confort_input1,
                                                    presence1, push1,
                                                    self->v_130, self->v_129,
                                                    self->pnr_3, self->v_110,
                                                    self->v_109, self->pnr_2,
                                                    self->ck_8_1,
                                                    self->pnr_1,
                                                    self->ck_10_1, self->pnr,
                                                    true, true, true,
                                                    &Controller_controller__controller_controller_out_st);
  c_door1 = Controller_controller__controller_controller_out_st.controller_c_door1;
  c2_1 = Controller_controller__controller_controller_out_st.controller_c2_1;
  c1_1 = Controller_controller__controller_controller_out_st.controller_c1_1;
  c_door = c_door1;
  c1 = c1_1;
  c2 = c2_1;
  if (self->ck_10_1) {
    v_60 = (push&&c_door);
    if (v_60) {
      r_St_4_Closed = true;
      s_St_4_Closed_1 = false;
    } else {
      r_St_4_Closed = self->pnr;
      s_St_4_Closed_1 = true;
    };
    r = r_St_4_Closed;
    s_1_2 = s_St_4_Closed_1;
  } else {
    v_58 = !(c_door);
    v_59 = (push&&v_58);
    if (v_59) {
      r_St_4_Open = true;
    } else {
      r_St_4_Open = self->pnr;
    };
    r = r_St_4_Open;
    if (v_59) {
      s_St_4_Open_1 = true;
    } else {
      s_St_4_Open_1 = false;
    };
    s_1_2 = s_St_4_Open_1;
  };
  ck_11_1 = s_1_2;
  if (ck_11_1) {
    door_open_St_4_Closed = false;
    nr_St_4_Closed = false;
    ns_St_4_Closed_1 = true;
    door_open = door_open_St_4_Closed;
    nr = nr_St_4_Closed;
    ns_1_2 = ns_St_4_Closed_1;
  } else {
    door_open_St_4_Open = true;
    door_open = door_open_St_4_Open;
    nr_St_4_Open = false;
    nr = nr_St_4_Open;
    ns_St_4_Open_1 = false;
    ns_1_2 = ns_St_4_Open_1;
  };
  _out->door_open1 = door_open;
  if (self->ck_8_1) {
    if (presence) {
      r_1_St_5_Empty = true;
      s_1_St_5_Empty_1 = false;
    } else {
      r_1_St_5_Empty = self->pnr_1;
      s_1_St_5_Empty_1 = true;
    };
    r_1 = r_1_St_5_Empty;
    s_1_1 = s_1_St_5_Empty_1;
  } else {
    if (presence) {
      r_1_St_5_Ocupied = true;
    } else {
      r_1_St_5_Ocupied = self->pnr_1;
    };
    r_1 = r_1_St_5_Ocupied;
    if (presence) {
      s_1_St_5_Ocupied_1 = true;
    } else {
      s_1_St_5_Ocupied_1 = false;
    };
    s_1_1 = s_1_St_5_Ocupied_1;
  };
  ck_9_1 = s_1_1;
  if (ck_9_1) {
    room_oc_St_5_Empty = false;
    nr_1_St_5_Empty = false;
    ns_1_St_5_Empty_1 = true;
    room_oc = room_oc_St_5_Empty;
    nr_1 = nr_1_St_5_Empty;
    ns_1_1 = ns_1_St_5_Empty_1;
  } else {
    room_oc_St_5_Ocupied = true;
    room_oc = room_oc_St_5_Ocupied;
    nr_1_St_5_Ocupied = false;
    nr_1 = nr_1_St_5_Ocupied;
    ns_1_St_5_Ocupied_1 = false;
    ns_1_1 = ns_1_St_5_Ocupied_1;
  };
  _out->room_oc1 = room_oc;
  v = !(_out->room_oc1);
  v_28 = (_out->door_open1&&v);
  rule2 = !(v_28);
  if (ck_6_1) {
    ck_6_2_1 = ck_6_2;
    if (ck_6_2_1) {
      v_44 = !(c1);
      v_45 = (down1||v_44);
      if (v_45) {
        v_47 = true;
        v_46_1 = true;
        v_46_2 = false;
      } else {
        v_47 = self->pnr_2;
        v_46_1 = true;
        v_46_2 = true;
      };
      v_43 = (up2&&c2);
      if (v_43) {
        r_2_St_6_Eco = true;
      } else {
        r_2_St_6_Eco = v_47;
      };
      v_115 = r_2_St_6_Eco;
      if (v_43) {
        s_2_St_6_Eco_1 = false;
      } else {
        s_2_St_6_Eco_1 = v_46_1;
      };
      v_111 = s_2_St_6_Eco_1;
      if (v_43) {
        s_2_St_6_Eco_2 = true;
      } else {
        s_2_St_6_Eco_2 = v_46_2;
      };
      v_112 = s_2_St_6_Eco_2;
      if (v_46_1) {
        v_46_2_1 = v_46_2;
      } else {
        v_46_2_0 = v_46_2;
      };
      if (s_2_St_6_Eco_1) {
        s_2_St_6_Eco_2_1 = s_2_St_6_Eco_2;
      } else {
        s_2_St_6_Eco_2_0 = s_2_St_6_Eco_2;
      };
    } else {
      v_50 = !(c1);
      v_51 = (down1||v_50);
      if (v_51) {
        v_53 = true;
        v_52_1 = false;
        v_52_2 = false;
      } else {
        v_53 = self->pnr_2;
        v_52_1 = true;
        v_52_2 = false;
      };
      v_49 = (up2&&c2);
      if (v_49) {
        v_55 = true;
        v_54_1 = false;
        v_54_2 = true;
      } else {
        v_55 = v_53;
        v_54_1 = v_52_1;
        v_54_2 = v_52_2;
      };
      v_48 = (up1&&c1);
      if (v_48) {
        r_2_St_6_Frost_Protection = true;
        s_2_St_6_Frost_Protection_1 = true;
        s_2_St_6_Frost_Protection_2 = true;
      } else {
        r_2_St_6_Frost_Protection = v_55;
        s_2_St_6_Frost_Protection_1 = v_54_1;
        s_2_St_6_Frost_Protection_2 = v_54_2;
      };
      v_115 = r_2_St_6_Frost_Protection;
      v_111 = s_2_St_6_Frost_Protection_1;
      v_112 = s_2_St_6_Frost_Protection_2;
      if (v_52_1) {
        v_52_2_1 = v_52_2;
      } else {
        v_52_2_0 = v_52_2;
      };
      if (v_54_1) {
        v_54_2_1 = v_54_2;
      } else {
        v_54_2_0 = v_54_2;
      };
      if (s_2_St_6_Frost_Protection_1) {
        s_2_St_6_Frost_Protection_2_1 = s_2_St_6_Frost_Protection_2;
      } else {
        s_2_St_6_Frost_Protection_2_0 = s_2_St_6_Frost_Protection_2;
      };
    };
    s_2_1 = v_111;
    s_2_2 = v_112;
    r_2 = v_115;
  } else {
    ck_6_2_0 = ck_6_2;
    if (ck_6_2_0) {
      v_39 = !(c1);
      v_40 = (down1||v_39);
      if (v_40) {
        v_42 = true;
        v_41_1 = true;
        v_41_2 = true;
      } else {
        v_42 = self->pnr_2;
        v_41_1 = false;
        v_41_2 = true;
      };
      v_37 = !(c2);
      v_38 = (down2||v_37);
      if (v_38) {
        r_2_St_6_High = true;
      } else {
        r_2_St_6_High = v_42;
      };
      v_116 = r_2_St_6_High;
      if (v_38) {
        s_2_St_6_High_1 = true;
      } else {
        s_2_St_6_High_1 = v_41_1;
      };
      v_113 = s_2_St_6_High_1;
      if (v_38) {
        s_2_St_6_High_2 = false;
      } else {
        s_2_St_6_High_2 = v_41_2;
      };
      v_114 = s_2_St_6_High_2;
    } else {
      v_56 = !(c1);
      v_57 = (up1||v_56);
      if (v_57) {
        r_2_St_6_Off = true;
        s_2_St_6_Off_1 = true;
        s_2_St_6_Off_2 = false;
      } else {
        r_2_St_6_Off = self->pnr_2;
        s_2_St_6_Off_1 = false;
        s_2_St_6_Off_2 = false;
      };
      v_116 = r_2_St_6_Off;
      v_113 = s_2_St_6_Off_1;
      v_114 = s_2_St_6_Off_2;
    };
    s_2_1 = v_113;
    s_2_2 = v_114;
    r_2 = v_116;
  };
  ck_7_1 = s_2_1;
  ck_7_2 = s_2_2;
  if (ck_7_1) {
    ck_7_2_1 = ck_7_2;
    if (ck_7_2_1) {
      on_state_St_6_Eco = 2;
      v_99 = on_state_St_6_Eco;
      power_St_6_Eco = 1500;
      v_101 = power_St_6_Eco;
      nr_2_St_6_Eco = false;
      v_107 = nr_2_St_6_Eco;
      ns_2_St_6_Eco_1 = true;
      v_103 = ns_2_St_6_Eco_1;
      ns_2_St_6_Eco_2 = true;
      v_104 = ns_2_St_6_Eco_2;
      if (ns_2_St_6_Eco_1) {
        ns_2_St_6_Eco_2_1 = ns_2_St_6_Eco_2;
      } else {
        ns_2_St_6_Eco_2_0 = ns_2_St_6_Eco_2;
      };
    } else {
      on_state_St_6_Frost_Protection = 1;
      power_St_6_Frost_Protection = 300;
      nr_2_St_6_Frost_Protection = false;
      ns_2_St_6_Frost_Protection_1 = true;
      ns_2_St_6_Frost_Protection_2 = false;
      v_99 = on_state_St_6_Frost_Protection;
      v_101 = power_St_6_Frost_Protection;
      v_107 = nr_2_St_6_Frost_Protection;
      v_103 = ns_2_St_6_Frost_Protection_1;
      v_104 = ns_2_St_6_Frost_Protection_2;
      if (ns_2_St_6_Frost_Protection_1) {
        ns_2_St_6_Frost_Protection_2_1 = ns_2_St_6_Frost_Protection_2;
      } else {
        ns_2_St_6_Frost_Protection_2_0 = ns_2_St_6_Frost_Protection_2;
      };
    };
    on_state = v_99;
    power = v_101;
    ns_2_1 = v_103;
    ns_2_2 = v_104;
    nr_2 = v_107;
  } else {
    ck_7_2_0 = ck_7_2;
    if (ck_7_2_0) {
      on_state_St_6_High = 3;
      v_100 = on_state_St_6_High;
      power_St_6_High = 2000;
      v_102 = power_St_6_High;
      nr_2_St_6_High = false;
      v_108 = nr_2_St_6_High;
      ns_2_St_6_High_1 = false;
      v_105 = ns_2_St_6_High_1;
      ns_2_St_6_High_2 = true;
      v_106 = ns_2_St_6_High_2;
    } else {
      on_state_St_6_Off = 0;
      power_St_6_Off = 0;
      nr_2_St_6_Off = false;
      ns_2_St_6_Off_1 = false;
      ns_2_St_6_Off_2 = false;
      v_100 = on_state_St_6_Off;
      v_102 = power_St_6_Off;
      v_108 = nr_2_St_6_Off;
      v_105 = ns_2_St_6_Off_1;
      v_106 = ns_2_St_6_Off_2;
    };
    on_state = v_100;
    power = v_102;
    ns_2_1 = v_105;
    ns_2_2 = v_106;
    nr_2 = v_108;
  };
  _out->power1 = power;
  v_29 = (_out->power1>3500);
  rule1 = !(v_29);
  v_30 = (rule1&&rule2);
  _out->on_state1 = on_state;
  if (ns_2_1) {
    ns_2_2_1 = ns_2_2;
  } else {
    ns_2_2_0 = ns_2_2;
  };
  if (!(ck_7_1)) {
    if (ck_7_2_0) {
      if (ns_2_St_6_High_1) {
        ns_2_St_6_High_2_1 = ns_2_St_6_High_2;
      } else {
        ns_2_St_6_High_2_0 = ns_2_St_6_High_2;
      };
    } else {
      if (ns_2_St_6_Off_1) {
        ns_2_St_6_Off_2_1 = ns_2_St_6_Off_2;
      } else {
        ns_2_St_6_Off_2_0 = ns_2_St_6_Off_2;
      };
    };
  };
  if (s_2_1) {
    s_2_2_1 = s_2_2;
  } else {
    s_2_2_0 = s_2_2;
  };
  if (!(ck_6_1)) {
    if (ck_6_2_0) {
      if (v_41_1) {
        v_41_2_1 = v_41_2;
      } else {
        v_41_2_0 = v_41_2;
      };
      if (s_2_St_6_High_1) {
        s_2_St_6_High_2_1 = s_2_St_6_High_2;
      } else {
        s_2_St_6_High_2_0 = s_2_St_6_High_2;
      };
    } else {
      if (s_2_St_6_Off_1) {
        s_2_St_6_Off_2_1 = s_2_St_6_Off_2;
      } else {
        s_2_St_6_Off_2_0 = s_2_St_6_Off_2;
      };
    };
  };
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      if (confort_input) {
        v_32 = true;
      } else {
        v_32 = self->pnr_3;
      };
      if (eco_input) {
        r_3_St_7_Confort = true;
      } else {
        r_3_St_7_Confort = v_32;
      };
      v_135 = r_3_St_7_Confort;
      if (confort_input) {
        v_31_1 = false;
      } else {
        v_31_1 = true;
      };
      if (eco_input) {
        s_3_St_7_Confort_1 = true;
      } else {
        s_3_St_7_Confort_1 = v_31_1;
      };
      v_131 = s_3_St_7_Confort_1;
      if (confort_input) {
        v_31_2 = false;
      } else {
        v_31_2 = true;
      };
      if (eco_input) {
        s_3_St_7_Confort_2 = false;
      } else {
        s_3_St_7_Confort_2 = v_31_2;
      };
      v_132 = s_3_St_7_Confort_2;
    } else {
      if (confort_input) {
        v_34 = true;
      } else {
        v_34 = self->pnr_3;
      };
      if (eco_input) {
        r_3_St_7_Eco = true;
      } else {
        r_3_St_7_Eco = v_34;
      };
      if (confort_input) {
        v_33_1 = true;
      } else {
        v_33_1 = true;
      };
      if (eco_input) {
        s_3_St_7_Eco_1 = false;
      } else {
        s_3_St_7_Eco_1 = v_33_1;
      };
      if (confort_input) {
        v_33_2 = true;
      } else {
        v_33_2 = false;
      };
      if (eco_input) {
        s_3_St_7_Eco_2 = false;
      } else {
        s_3_St_7_Eco_2 = v_33_2;
      };
      v_135 = r_3_St_7_Eco;
      v_131 = s_3_St_7_Eco_1;
      v_132 = s_3_St_7_Eco_2;
    };
    s_3_1 = v_131;
    s_3_2 = v_132;
    r_3 = v_135;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_136 = true;
      v_133 = true;
      v_134 = true;
    } else {
      if (confort_input) {
        v_36 = true;
      } else {
        v_36 = self->pnr_3;
      };
      if (eco_input) {
        r_3_St_7_Minimal_safety = true;
      } else {
        r_3_St_7_Minimal_safety = v_36;
      };
      v_136 = r_3_St_7_Minimal_safety;
      if (confort_input) {
        v_35_1 = true;
      } else {
        v_35_1 = false;
      };
      if (eco_input) {
        s_3_St_7_Minimal_safety_1 = true;
      } else {
        s_3_St_7_Minimal_safety_1 = v_35_1;
      };
      v_133 = s_3_St_7_Minimal_safety_1;
      if (confort_input) {
        v_35_2 = true;
      } else {
        v_35_2 = false;
      };
      if (eco_input) {
        s_3_St_7_Minimal_safety_2 = false;
      } else {
        s_3_St_7_Minimal_safety_2 = v_35_2;
      };
      v_134 = s_3_St_7_Minimal_safety_2;
      if (v_35_1) {
        v_35_2_1 = v_35_2;
      } else {
        v_35_2_0 = v_35_2;
      };
      if (s_3_St_7_Minimal_safety_1) {
        s_3_St_7_Minimal_safety_2_1 = s_3_St_7_Minimal_safety_2;
      } else {
        s_3_St_7_Minimal_safety_2_0 = s_3_St_7_Minimal_safety_2;
      };
    };
    s_3_1 = v_133;
    s_3_2 = v_134;
    r_3 = v_136;
  };
  ck_5_1 = s_3_1;
  ck_5_2 = s_3_2;
  if (ck_5_1) {
    ck_5_2_1 = ck_5_2;
    if (ck_5_2_1) {
      pl_St_7_Confort = 7000;
      v_121 = pl_St_7_Confort;
      eco_St_7_Confort = false;
      v_117 = eco_St_7_Confort;
      confort_St_7_Confort = true;
      v_119 = confort_St_7_Confort;
      nr_3_St_7_Confort = false;
      v_127 = nr_3_St_7_Confort;
      ns_3_St_7_Confort_1 = true;
      v_123 = ns_3_St_7_Confort_1;
      ns_3_St_7_Confort_2 = true;
      v_124 = ns_3_St_7_Confort_2;
    } else {
      pl_St_7_Eco = 5000;
      eco_St_7_Eco = true;
      confort_St_7_Eco = false;
      nr_3_St_7_Eco = false;
      ns_3_St_7_Eco_1 = true;
      ns_3_St_7_Eco_2 = false;
      v_121 = pl_St_7_Eco;
      v_117 = eco_St_7_Eco;
      v_119 = confort_St_7_Eco;
      v_127 = nr_3_St_7_Eco;
      v_123 = ns_3_St_7_Eco_1;
      v_124 = ns_3_St_7_Eco_2;
    };
    eco = v_117;
    confort = v_119;
    pl = v_121;
    ns_3_1 = v_123;
    ns_3_2 = v_124;
    nr_3 = v_127;
  } else {
    ck_5_2_0 = ck_5_2;
    if (ck_5_2_0) {
      v_122 = 0;
      v_118 = true;
      v_120 = true;
      v_128 = true;
      v_125 = true;
      v_126 = true;
    } else {
      pl_St_7_Minimal_safety = 3000;
      v_122 = pl_St_7_Minimal_safety;
      eco_St_7_Minimal_safety = false;
      v_118 = eco_St_7_Minimal_safety;
      confort_St_7_Minimal_safety = false;
      v_120 = confort_St_7_Minimal_safety;
      nr_3_St_7_Minimal_safety = false;
      v_128 = nr_3_St_7_Minimal_safety;
      ns_3_St_7_Minimal_safety_1 = false;
      v_125 = ns_3_St_7_Minimal_safety_1;
      ns_3_St_7_Minimal_safety_2 = false;
      v_126 = ns_3_St_7_Minimal_safety_2;
      if (ns_3_St_7_Minimal_safety_1) {
        ns_3_St_7_Minimal_safety_2_1 = ns_3_St_7_Minimal_safety_2;
      } else {
        ns_3_St_7_Minimal_safety_2_0 = ns_3_St_7_Minimal_safety_2;
      };
    };
    eco = v_118;
    confort = v_120;
    pl = v_122;
    ns_3_1 = v_125;
    ns_3_2 = v_126;
    nr_3 = v_128;
  };
  _out->pl1 = pl;
  _out->confort1 = confort;
  _out->eco1 = eco;
  if (ns_3_1) {
    ns_3_2_1 = ns_3_2;
  } else {
    ns_3_2_0 = ns_3_2;
  };
  if (ck_5_1) {
    if (ck_5_2_1) {
      if (ns_3_St_7_Confort_1) {
        ns_3_St_7_Confort_2_1 = ns_3_St_7_Confort_2;
      } else {
        ns_3_St_7_Confort_2_0 = ns_3_St_7_Confort_2;
      };
    } else {
      if (ns_3_St_7_Eco_1) {
        ns_3_St_7_Eco_2_1 = ns_3_St_7_Eco_2;
      } else {
        ns_3_St_7_Eco_2_0 = ns_3_St_7_Eco_2;
      };
    };
  };
  if (s_3_1) {
    s_3_2_1 = s_3_2;
  } else {
    s_3_2_0 = s_3_2;
  };
  if (ck_1) {
    if (ck_2_1) {
      if (v_31_1) {
        v_31_2_1 = v_31_2;
      } else {
        v_31_2_0 = v_31_2;
      };
      if (s_3_St_7_Confort_1) {
        s_3_St_7_Confort_2_1 = s_3_St_7_Confort_2;
      } else {
        s_3_St_7_Confort_2_0 = s_3_St_7_Confort_2;
      };
    } else {
      if (v_33_1) {
        v_33_2_1 = v_33_2;
      } else {
        v_33_2_0 = v_33_2;
      };
      if (s_3_St_7_Eco_1) {
        s_3_St_7_Eco_2_1 = s_3_St_7_Eco_2;
      } else {
        s_3_St_7_Eco_2_0 = s_3_St_7_Eco_2;
      };
    };
  };
  self->pnr = nr;
  self->ck_10_1 = ns_1_2;
  self->pnr_1 = nr_1;
  self->ck_8_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->v_109 = ns_2_1;
  self->v_110 = ns_2_2;
  self->pnr_3 = nr_3;
  self->v_129 = ns_3_1;
  self->v_130 = ns_3_2;;
}

