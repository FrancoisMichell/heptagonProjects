/* --- Generated the 22/5/2018 at 22:25 --- */
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
  
  int nr_St_Ocupied;
  int ns_St_Ocupied_1;
  int occupied_St_Ocupied;
  int nr_St_Empty;
  int ns_St_Empty_1;
  int occupied_St_Empty;
  int ck_1_1;
  int v;
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
    v = !(presence);
    if (v) {
      r_St_Ocupied = true;
    } else {
      r_St_Ocupied = self->pnr;
    };
    r = r_St_Ocupied;
    if (v) {
      s_St_Ocupied_1 = true;
    } else {
      s_St_Ocupied_1 = false;
    };
    s_1 = s_St_Ocupied_1;
  };
  ck_1_1 = s_1;
  if (ck_1_1) {
    occupied_St_Empty = false;
    nr_St_Empty = false;
    ns_St_Empty_1 = true;
    _out->occupied = occupied_St_Empty;
    nr = nr_St_Empty;
    ns_1 = ns_St_Empty_1;
  } else {
    occupied_St_Ocupied = true;
    _out->occupied = occupied_St_Ocupied;
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
  self->v_115 = false;
  self->v_116 = false;
}

void System__management_policy_step(int eco_input, int comfort_input,
                                    System__management_policy_out* _out,
                                    System__management_policy_mem* self) {
  
  int v_114;
  int v_113;
  int v_112;
  int v_111;
  int v_110;
  int v_109;
  int v_108;
  int v_107;
  int v_106;
  int v_105;
  int v_104;
  int v_103;
  int ns_St_1_Comfort_2_0;
  int ns_St_1_Comfort_2_1;
  int ns_St_1_Eco_2_0;
  int ns_St_1_Eco_2_1;
  int ns_St_1_Minimal_safety_2_0;
  int ns_St_1_Minimal_safety_2_1;
  int ck_2_2_0;
  int ck_2_2_1;
  int nr_St_1_Comfort;
  int ns_St_1_Comfort_2;
  int ns_St_1_Comfort_1;
  int power_limit_St_1_Comfort;
  int comfort_on_St_1_Comfort;
  int eco_on_St_1_Comfort;
  int nr_St_1_Eco;
  int ns_St_1_Eco_2;
  int ns_St_1_Eco_1;
  int power_limit_St_1_Eco;
  int comfort_on_St_1_Eco;
  int eco_on_St_1_Eco;
  int nr_St_1_Minimal_safety;
  int ns_St_1_Minimal_safety_2;
  int ns_St_1_Minimal_safety_1;
  int power_limit_St_1_Minimal_safety;
  int comfort_on_St_1_Minimal_safety;
  int eco_on_St_1_Minimal_safety;
  int ck_2_2;
  int ck_2_1;
  int v_6_2_0;
  int v_6_2_1;
  int v_7;
  int v_6_2;
  int v_6_1;
  int v_4_2_0;
  int v_4_2_1;
  int v_5;
  int v_4_2;
  int v_4_1;
  int v_3;
  int v_1_2_0;
  int v_1_2_1;
  int v_2;
  int v_1_2;
  int v_1_1;
  int v;
  int v_122;
  int v_121;
  int v_120;
  int v_119;
  int v_118;
  int v_117;
  int s_St_1_Comfort_2_0;
  int s_St_1_Comfort_2_1;
  int s_St_1_Eco_2_0;
  int s_St_1_Eco_2_1;
  int s_St_1_Minimal_safety_2_0;
  int s_St_1_Minimal_safety_2_1;
  int ck_2_3_0;
  int ck_2_3_1;
  int r_St_1_Comfort;
  int s_St_1_Comfort_2;
  int s_St_1_Comfort_1;
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
  ck_1 = self->v_115;
  ck_2_3 = self->v_116;
  if (ck_1) {
    ck_2_3_1 = ck_2_3;
    if (ck_2_3_1) {
      v = !(comfort_input);
      if (v) {
        v_2 = true;
      } else {
        v_2 = self->pnr;
      };
      if (eco_input) {
        r_St_1_Comfort = true;
      } else {
        r_St_1_Comfort = v_2;
      };
      v_121 = r_St_1_Comfort;
      if (v) {
        v_1_1 = false;
      } else {
        v_1_1 = true;
      };
      if (eco_input) {
        s_St_1_Comfort_1 = true;
      } else {
        s_St_1_Comfort_1 = v_1_1;
      };
      v_117 = s_St_1_Comfort_1;
      if (v) {
        v_1_2 = false;
      } else {
        v_1_2 = true;
      };
      if (eco_input) {
        s_St_1_Comfort_2 = false;
      } else {
        s_St_1_Comfort_2 = v_1_2;
      };
      v_118 = s_St_1_Comfort_2;
    } else {
      if (comfort_input) {
        v_5 = true;
        v_4_1 = true;
        v_4_2 = true;
      } else {
        v_5 = self->pnr;
        v_4_1 = true;
        v_4_2 = false;
      };
      v_3 = !(eco_input);
      if (v_3) {
        r_St_1_Eco = true;
        s_St_1_Eco_1 = false;
        s_St_1_Eco_2 = false;
      } else {
        r_St_1_Eco = v_5;
        s_St_1_Eco_1 = v_4_1;
        s_St_1_Eco_2 = v_4_2;
      };
      v_121 = r_St_1_Eco;
      v_117 = s_St_1_Eco_1;
      v_118 = s_St_1_Eco_2;
    };
    s_1 = v_117;
    s_2 = v_118;
    r = v_121;
  } else {
    ck_2_3_0 = ck_2_3;
    if (ck_2_3_0) {
      v_122 = true;
      v_119 = true;
      v_120 = true;
    } else {
      if (comfort_input) {
        v_7 = true;
      } else {
        v_7 = self->pnr;
      };
      if (eco_input) {
        r_St_1_Minimal_safety = true;
      } else {
        r_St_1_Minimal_safety = v_7;
      };
      v_122 = r_St_1_Minimal_safety;
      if (comfort_input) {
        v_6_1 = true;
      } else {
        v_6_1 = false;
      };
      if (eco_input) {
        s_St_1_Minimal_safety_1 = true;
      } else {
        s_St_1_Minimal_safety_1 = v_6_1;
      };
      v_119 = s_St_1_Minimal_safety_1;
      if (comfort_input) {
        v_6_2 = true;
      } else {
        v_6_2 = false;
      };
      if (eco_input) {
        s_St_1_Minimal_safety_2 = false;
      } else {
        s_St_1_Minimal_safety_2 = v_6_2;
      };
      v_120 = s_St_1_Minimal_safety_2;
      if (v_6_1) {
        v_6_2_1 = v_6_2;
      } else {
        v_6_2_0 = v_6_2;
      };
      if (s_St_1_Minimal_safety_1) {
        s_St_1_Minimal_safety_2_1 = s_St_1_Minimal_safety_2;
      } else {
        s_St_1_Minimal_safety_2_0 = s_St_1_Minimal_safety_2;
      };
    };
    s_1 = v_119;
    s_2 = v_120;
    r = v_122;
  };
  ck_2_1 = s_1;
  ck_2_2 = s_2;
  if (ck_2_1) {
    ck_2_2_1 = ck_2_2;
    if (ck_2_2_1) {
      power_limit_St_1_Comfort = 7000;
      v_107 = power_limit_St_1_Comfort;
      eco_on_St_1_Comfort = false;
      v_103 = eco_on_St_1_Comfort;
      comfort_on_St_1_Comfort = true;
      v_105 = comfort_on_St_1_Comfort;
      nr_St_1_Comfort = false;
      v_113 = nr_St_1_Comfort;
      ns_St_1_Comfort_1 = true;
      v_109 = ns_St_1_Comfort_1;
      ns_St_1_Comfort_2 = true;
      v_110 = ns_St_1_Comfort_2;
    } else {
      power_limit_St_1_Eco = 5000;
      eco_on_St_1_Eco = true;
      comfort_on_St_1_Eco = false;
      nr_St_1_Eco = false;
      ns_St_1_Eco_1 = true;
      ns_St_1_Eco_2 = false;
      v_107 = power_limit_St_1_Eco;
      v_103 = eco_on_St_1_Eco;
      v_105 = comfort_on_St_1_Eco;
      v_113 = nr_St_1_Eco;
      v_109 = ns_St_1_Eco_1;
      v_110 = ns_St_1_Eco_2;
    };
    _out->eco_on = v_103;
    _out->comfort_on = v_105;
    _out->power_limit = v_107;
    ns_1 = v_109;
    ns_2 = v_110;
    nr = v_113;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      v_108 = 0;
      v_104 = true;
      v_106 = true;
      v_114 = true;
      v_111 = true;
      v_112 = true;
    } else {
      power_limit_St_1_Minimal_safety = 3000;
      v_108 = power_limit_St_1_Minimal_safety;
      eco_on_St_1_Minimal_safety = false;
      v_104 = eco_on_St_1_Minimal_safety;
      comfort_on_St_1_Minimal_safety = false;
      v_106 = comfort_on_St_1_Minimal_safety;
      nr_St_1_Minimal_safety = false;
      v_114 = nr_St_1_Minimal_safety;
      ns_St_1_Minimal_safety_1 = false;
      v_111 = ns_St_1_Minimal_safety_1;
      ns_St_1_Minimal_safety_2 = false;
      v_112 = ns_St_1_Minimal_safety_2;
      if (ns_St_1_Minimal_safety_1) {
        ns_St_1_Minimal_safety_2_1 = ns_St_1_Minimal_safety_2;
      } else {
        ns_St_1_Minimal_safety_2_0 = ns_St_1_Minimal_safety_2;
      };
    };
    _out->eco_on = v_104;
    _out->comfort_on = v_106;
    _out->power_limit = v_108;
    ns_1 = v_111;
    ns_2 = v_112;
    nr = v_114;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (ck_2_1) {
    if (ck_2_2_1) {
      if (ns_St_1_Comfort_1) {
        ns_St_1_Comfort_2_1 = ns_St_1_Comfort_2;
      } else {
        ns_St_1_Comfort_2_0 = ns_St_1_Comfort_2;
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
        v_1_2_1 = v_1_2;
      } else {
        v_1_2_0 = v_1_2;
      };
      if (s_St_1_Comfort_1) {
        s_St_1_Comfort_2_1 = s_St_1_Comfort_2;
      } else {
        s_St_1_Comfort_2_0 = s_St_1_Comfort_2;
      };
    } else {
      if (v_4_1) {
        v_4_2_1 = v_4_2;
      } else {
        v_4_2_0 = v_4_2;
      };
      if (s_St_1_Eco_1) {
        s_St_1_Eco_2_1 = s_St_1_Eco_2;
      } else {
        s_St_1_Eco_2_0 = s_St_1_Eco_2;
      };
    };
  };
  self->pnr = nr;
  self->v_115 = ns_1;
  self->v_116 = ns_2;;
}

void System__light_source_reset(System__light_source_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__light_source_step(int source_switch, int c_source1,
                               int c_source2, System__light_source_out* _out,
                               System__light_source_mem* self) {
  
  int nr_St_2_Ligado;
  int ns_St_2_Ligado_1;
  int source_on_St_2_Ligado;
  int nr_St_2_Desligado;
  int ns_St_2_Desligado_1;
  int source_on_St_2_Desligado;
  int ck_3_1;
  int v_12;
  int v_11;
  int v_10;
  int v_9;
  int v_8;
  int v;
  int r_St_2_Ligado;
  int s_St_2_Ligado_1;
  int r_St_2_Desligado;
  int s_St_2_Desligado_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_10 = !(c_source2);
    v_11 = (source_switch&&v_10);
    v_12 = (v_11||c_source1);
    if (v_12) {
      r_St_2_Desligado = true;
      s_St_2_Desligado_1 = false;
    } else {
      r_St_2_Desligado = self->pnr;
      s_St_2_Desligado_1 = true;
    };
    r = r_St_2_Desligado;
    s_1 = s_St_2_Desligado_1;
  } else {
    v = !(c_source1);
    v_8 = (source_switch&&v);
    v_9 = (v_8||c_source2);
    if (v_9) {
      r_St_2_Ligado = true;
    } else {
      r_St_2_Ligado = self->pnr;
    };
    r = r_St_2_Ligado;
    if (v_9) {
      s_St_2_Ligado_1 = true;
    } else {
      s_St_2_Ligado_1 = false;
    };
    s_1 = s_St_2_Ligado_1;
  };
  ck_3_1 = s_1;
  if (ck_3_1) {
    source_on_St_2_Desligado = false;
    nr_St_2_Desligado = false;
    ns_St_2_Desligado_1 = true;
    _out->source_on = source_on_St_2_Desligado;
    nr = nr_St_2_Desligado;
    ns_1 = ns_St_2_Desligado_1;
  } else {
    source_on_St_2_Ligado = true;
    _out->source_on = source_on_St_2_Ligado;
    nr_St_2_Ligado = false;
    nr = nr_St_2_Ligado;
    ns_St_2_Ligado_1 = false;
    ns_1 = ns_St_2_Ligado_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__door_reset(System__door_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__door_step(int push, int c_door, System__door_out* _out,
                       System__door_mem* self) {
  
  int nr_St_3_Open;
  int ns_St_3_Open_1;
  int door_open_St_3_Open;
  int nr_St_3_Closed;
  int ns_St_3_Closed_1;
  int door_open_St_3_Closed;
  int ck_4_1;
  int v_14;
  int v_13;
  int v;
  int r_St_3_Open;
  int s_St_3_Open_1;
  int r_St_3_Closed;
  int s_St_3_Closed_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_14 = (push&&c_door);
    if (v_14) {
      r_St_3_Closed = true;
      s_St_3_Closed_1 = false;
    } else {
      r_St_3_Closed = self->pnr;
      s_St_3_Closed_1 = true;
    };
    r = r_St_3_Closed;
    s_1 = s_St_3_Closed_1;
  } else {
    v = !(c_door);
    v_13 = (push||v);
    if (v_13) {
      r_St_3_Open = true;
    } else {
      r_St_3_Open = self->pnr;
    };
    r = r_St_3_Open;
    if (v_13) {
      s_St_3_Open_1 = true;
    } else {
      s_St_3_Open_1 = false;
    };
    s_1 = s_St_3_Open_1;
  };
  ck_4_1 = s_1;
  if (ck_4_1) {
    door_open_St_3_Closed = false;
    nr_St_3_Closed = false;
    ns_St_3_Closed_1 = true;
    _out->door_open = door_open_St_3_Closed;
    nr = nr_St_3_Closed;
    ns_1 = ns_St_3_Closed_1;
  } else {
    door_open_St_3_Open = true;
    _out->door_open = door_open_St_3_Open;
    nr_St_3_Open = false;
    nr = nr_St_3_Open;
    ns_St_3_Open_1 = false;
    ns_1 = ns_St_3_Open_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__rad_reset(System__rad_mem* self) {
  self->pnr = false;
  self->v_133 = false;
  self->v_134 = false;
}

void System__rad_step(int up1, int down1, int up2, int down2, int c_rad1,
                      int c_rad2, System__rad_out* _out,
                      System__rad_mem* self) {
  
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
  int ns_St_4_High_2_0;
  int ns_St_4_High_2_1;
  int ns_St_4_Eco_2_0;
  int ns_St_4_Eco_2_1;
  int ns_St_4_Frostprotection_2_0;
  int ns_St_4_Frostprotection_2_1;
  int ns_St_4_Off_2_0;
  int ns_St_4_Off_2_1;
  int ck_5_2_0;
  int ck_5_2_1;
  int nr_St_4_High;
  int ns_St_4_High_2;
  int ns_St_4_High_1;
  int rad_state_St_4_High;
  int rad_power_St_4_High;
  int nr_St_4_Eco;
  int ns_St_4_Eco_2;
  int ns_St_4_Eco_1;
  int rad_state_St_4_Eco;
  int rad_power_St_4_Eco;
  int nr_St_4_Frostprotection;
  int ns_St_4_Frostprotection_2;
  int ns_St_4_Frostprotection_1;
  int rad_state_St_4_Frostprotection;
  int rad_power_St_4_Frostprotection;
  int nr_St_4_Off;
  int ns_St_4_Off_2;
  int ns_St_4_Off_1;
  int rad_state_St_4_Off;
  int rad_power_St_4_Off;
  int ck_5_2;
  int ck_5_1;
  int v_34;
  int v_33;
  int v_31_2_0;
  int v_31_2_1;
  int v_29_2_0;
  int v_29_2_1;
  int v_32;
  int v_31_2;
  int v_31_1;
  int v_30;
  int v_29_2;
  int v_29_1;
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_23_2_0;
  int v_23_2_1;
  int v_24;
  int v_23_2;
  int v_23_1;
  int v_22;
  int v_21;
  int v_20;
  int v_18_2_0;
  int v_18_2_1;
  int v_19;
  int v_18_2;
  int v_18_1;
  int v_17;
  int v_16;
  int v_15;
  int v;
  int v_140;
  int v_139;
  int v_138;
  int v_137;
  int v_136;
  int v_135;
  int s_St_4_High_2_0;
  int s_St_4_High_2_1;
  int s_St_4_Eco_2_0;
  int s_St_4_Eco_2_1;
  int s_St_4_Frostprotection_2_0;
  int s_St_4_Frostprotection_2_1;
  int s_St_4_Off_2_0;
  int s_St_4_Off_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_4_High;
  int s_St_4_High_2;
  int s_St_4_High_1;
  int r_St_4_Eco;
  int s_St_4_Eco_2;
  int s_St_4_Eco_1;
  int r_St_4_Frostprotection;
  int s_St_4_Frostprotection_2;
  int s_St_4_Frostprotection_1;
  int r_St_4_Off;
  int s_St_4_Off_2;
  int s_St_4_Off_1;
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
  ck_1 = self->v_133;
  ck_2 = self->v_134;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_22 = (up2&&c_rad2);
      if (v_22) {
        v_24 = true;
        v_23_1 = false;
        v_23_2 = true;
      } else {
        v_24 = self->pnr;
        v_23_1 = true;
        v_23_2 = true;
      };
      v_20 = !(c_rad1);
      v_21 = (down1||v_20);
      if (v_21) {
        r_St_4_Eco = true;
      } else {
        r_St_4_Eco = v_24;
      };
      v_139 = r_St_4_Eco;
      if (v_21) {
        s_St_4_Eco_1 = true;
      } else {
        s_St_4_Eco_1 = v_23_1;
      };
      v_135 = s_St_4_Eco_1;
      if (v_21) {
        s_St_4_Eco_2 = false;
      } else {
        s_St_4_Eco_2 = v_23_2;
      };
      v_136 = s_St_4_Eco_2;
      if (v_23_1) {
        v_23_2_1 = v_23_2;
      } else {
        v_23_2_0 = v_23_2;
      };
      if (s_St_4_Eco_1) {
        s_St_4_Eco_2_1 = s_St_4_Eco_2;
      } else {
        s_St_4_Eco_2_0 = s_St_4_Eco_2;
      };
    } else {
      v_27 = !(c_rad1);
      v_28 = (down1||v_27);
      if (v_28) {
        v_30 = true;
        v_29_1 = false;
        v_29_2 = false;
      } else {
        v_30 = self->pnr;
        v_29_1 = true;
        v_29_2 = false;
      };
      v_26 = (up2&&c_rad2);
      if (v_26) {
        v_32 = true;
        v_31_1 = false;
        v_31_2 = true;
      } else {
        v_32 = v_30;
        v_31_1 = v_29_1;
        v_31_2 = v_29_2;
      };
      v_25 = (up1&&c_rad1);
      if (v_25) {
        r_St_4_Frostprotection = true;
        s_St_4_Frostprotection_1 = true;
        s_St_4_Frostprotection_2 = true;
      } else {
        r_St_4_Frostprotection = v_32;
        s_St_4_Frostprotection_1 = v_31_1;
        s_St_4_Frostprotection_2 = v_31_2;
      };
      v_139 = r_St_4_Frostprotection;
      v_135 = s_St_4_Frostprotection_1;
      v_136 = s_St_4_Frostprotection_2;
      if (v_29_1) {
        v_29_2_1 = v_29_2;
      } else {
        v_29_2_0 = v_29_2;
      };
      if (v_31_1) {
        v_31_2_1 = v_31_2;
      } else {
        v_31_2_0 = v_31_2;
      };
      if (s_St_4_Frostprotection_1) {
        s_St_4_Frostprotection_2_1 = s_St_4_Frostprotection_2;
      } else {
        s_St_4_Frostprotection_2_0 = s_St_4_Frostprotection_2;
      };
    };
    s_1 = v_135;
    s_2 = v_136;
    r = v_139;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_16 = !(c_rad2);
      v_17 = (down2||v_16);
      if (v_17) {
        v_19 = true;
        v_18_1 = true;
        v_18_2 = false;
      } else {
        v_19 = self->pnr;
        v_18_1 = false;
        v_18_2 = true;
      };
      v = !(c_rad1);
      v_15 = (down1||v);
      if (v_15) {
        r_St_4_High = true;
      } else {
        r_St_4_High = v_19;
      };
      v_140 = r_St_4_High;
      if (v_15) {
        s_St_4_High_1 = true;
      } else {
        s_St_4_High_1 = v_18_1;
      };
      v_137 = s_St_4_High_1;
      if (v_15) {
        s_St_4_High_2 = true;
      } else {
        s_St_4_High_2 = v_18_2;
      };
      v_138 = s_St_4_High_2;
    } else {
      v_33 = !(c_rad1);
      v_34 = (up1||v_33);
      if (v_34) {
        r_St_4_Off = true;
        s_St_4_Off_1 = true;
        s_St_4_Off_2 = false;
      } else {
        r_St_4_Off = self->pnr;
        s_St_4_Off_1 = false;
        s_St_4_Off_2 = false;
      };
      v_140 = r_St_4_Off;
      v_137 = s_St_4_Off_1;
      v_138 = s_St_4_Off_2;
    };
    s_1 = v_137;
    s_2 = v_138;
    r = v_140;
  };
  ck_5_1 = s_1;
  ck_5_2 = s_2;
  if (ck_5_1) {
    ck_5_2_1 = ck_5_2;
    if (ck_5_2_1) {
      rad_power_St_4_Eco = 1500;
      v_123 = rad_power_St_4_Eco;
      rad_state_St_4_Eco = 2;
      v_125 = rad_state_St_4_Eco;
      nr_St_4_Eco = false;
      v_131 = nr_St_4_Eco;
      ns_St_4_Eco_1 = true;
      v_127 = ns_St_4_Eco_1;
      ns_St_4_Eco_2 = true;
      v_128 = ns_St_4_Eco_2;
      if (ns_St_4_Eco_1) {
        ns_St_4_Eco_2_1 = ns_St_4_Eco_2;
      } else {
        ns_St_4_Eco_2_0 = ns_St_4_Eco_2;
      };
    } else {
      rad_power_St_4_Frostprotection = 300;
      rad_state_St_4_Frostprotection = 1;
      nr_St_4_Frostprotection = false;
      ns_St_4_Frostprotection_1 = true;
      ns_St_4_Frostprotection_2 = false;
      v_123 = rad_power_St_4_Frostprotection;
      v_125 = rad_state_St_4_Frostprotection;
      v_131 = nr_St_4_Frostprotection;
      v_127 = ns_St_4_Frostprotection_1;
      v_128 = ns_St_4_Frostprotection_2;
      if (ns_St_4_Frostprotection_1) {
        ns_St_4_Frostprotection_2_1 = ns_St_4_Frostprotection_2;
      } else {
        ns_St_4_Frostprotection_2_0 = ns_St_4_Frostprotection_2;
      };
    };
    _out->rad_power = v_123;
    _out->rad_state = v_125;
    ns_1 = v_127;
    ns_2 = v_128;
    nr = v_131;
  } else {
    ck_5_2_0 = ck_5_2;
    if (ck_5_2_0) {
      rad_power_St_4_High = 2000;
      v_124 = rad_power_St_4_High;
      rad_state_St_4_High = 3;
      v_126 = rad_state_St_4_High;
      nr_St_4_High = false;
      v_132 = nr_St_4_High;
      ns_St_4_High_1 = false;
      v_129 = ns_St_4_High_1;
      ns_St_4_High_2 = true;
      v_130 = ns_St_4_High_2;
    } else {
      rad_power_St_4_Off = 0;
      rad_state_St_4_Off = 0;
      nr_St_4_Off = false;
      ns_St_4_Off_1 = false;
      ns_St_4_Off_2 = false;
      v_124 = rad_power_St_4_Off;
      v_126 = rad_state_St_4_Off;
      v_132 = nr_St_4_Off;
      v_129 = ns_St_4_Off_1;
      v_130 = ns_St_4_Off_2;
    };
    _out->rad_power = v_124;
    _out->rad_state = v_126;
    ns_1 = v_129;
    ns_2 = v_130;
    nr = v_132;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (!(ck_5_1)) {
    if (ck_5_2_0) {
      if (ns_St_4_High_1) {
        ns_St_4_High_2_1 = ns_St_4_High_2;
      } else {
        ns_St_4_High_2_0 = ns_St_4_High_2;
      };
    } else {
      if (ns_St_4_Off_1) {
        ns_St_4_Off_2_1 = ns_St_4_Off_2;
      } else {
        ns_St_4_Off_2_0 = ns_St_4_Off_2;
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
      if (v_18_1) {
        v_18_2_1 = v_18_2;
      } else {
        v_18_2_0 = v_18_2;
      };
      if (s_St_4_High_1) {
        s_St_4_High_2_1 = s_St_4_High_2;
      } else {
        s_St_4_High_2_0 = s_St_4_High_2;
      };
    } else {
      if (s_St_4_Off_1) {
        s_St_4_Off_2_1 = s_St_4_Off_2;
      } else {
        s_St_4_Off_2_0 = s_St_4_Off_2;
      };
    };
  };
  self->pnr = nr;
  self->v_133 = ns_1;
  self->v_134 = ns_2;;
}

void System__washing_machine_reset(System__washing_machine_mem* self) {
  self->pnr = false;
  self->v_177 = true;
  self->v_178 = true;
  self->v_179 = true;
}

void System__washing_machine_step(int finish, int start, int c_wash,
                                  System__washing_machine_out* _out,
                                  System__washing_machine_mem* self) {
  
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
  int v_153;
  int v_152;
  int v_151;
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
  int ns_St_5_Standby_2_0;
  int ns_St_5_Standby_3_0_0;
  int ns_St_5_Standby_3_0_1;
  int ns_St_5_Standby_2_1;
  int ns_St_5_Standby_3_1_0;
  int ns_St_5_Standby_3_1_1;
  int ns_St_5_Spin_2_0;
  int ns_St_5_Spin_3_0_0;
  int ns_St_5_Spin_3_0_1;
  int ns_St_5_Spin_2_1;
  int ns_St_5_Spin_3_1_0;
  int ns_St_5_Spin_3_1_1;
  int ns_St_5_Rinse_2_0;
  int ns_St_5_Rinse_3_0_0;
  int ns_St_5_Rinse_3_0_1;
  int ns_St_5_Rinse_2_1;
  int ns_St_5_Rinse_3_1_0;
  int ns_St_5_Rinse_3_1_1;
  int ns_St_5_Washing_2_0;
  int ns_St_5_Washing_3_0_0;
  int ns_St_5_Washing_3_0_1;
  int ns_St_5_Washing_2_1;
  int ns_St_5_Washing_3_1_0;
  int ns_St_5_Washing_3_1_1;
  int ns_St_5_Water_fill_2_0;
  int ns_St_5_Water_fill_3_0_0;
  int ns_St_5_Water_fill_3_0_1;
  int ns_St_5_Water_fill_2_1;
  int ns_St_5_Water_fill_3_1_0;
  int ns_St_5_Water_fill_3_1_1;
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
  int nr_St_5_Standby;
  int ns_St_5_Standby_3;
  int ns_St_5_Standby_2;
  int ns_St_5_Standby_1;
  int wash_state_St_5_Standby;
  int wash_power_St_5_Standby;
  int nr_St_5_Spin;
  int ns_St_5_Spin_3;
  int ns_St_5_Spin_2;
  int ns_St_5_Spin_1;
  int wash_state_St_5_Spin;
  int wash_power_St_5_Spin;
  int nr_St_5_Rinse;
  int ns_St_5_Rinse_3;
  int ns_St_5_Rinse_2;
  int ns_St_5_Rinse_1;
  int wash_state_St_5_Rinse;
  int wash_power_St_5_Rinse;
  int nr_St_5_Washing;
  int ns_St_5_Washing_3;
  int ns_St_5_Washing_2;
  int ns_St_5_Washing_1;
  int wash_state_St_5_Washing;
  int wash_power_St_5_Washing;
  int nr_St_5_Water_fill;
  int ns_St_5_Water_fill_3;
  int ns_St_5_Water_fill_2;
  int ns_St_5_Water_fill_1;
  int wash_state_St_5_Water_fill;
  int wash_power_St_5_Water_fill;
  int nr_St_5_Off;
  int ns_St_5_Off_3;
  int ns_St_5_Off_2;
  int ns_St_5_Off_1;
  int wash_state_St_5_Off;
  int wash_power_St_5_Off;
  int ck_6_3;
  int ck_6_2;
  int ck_6_1;
  int v_37_2_0;
  int v_37_3_0_0;
  int v_37_3_0_1;
  int v_37_2_1;
  int v_37_3_1_0;
  int v_37_3_1_1;
  int v_38;
  int v_37_3;
  int v_37_2;
  int v_37_1;
  int v_36;
  int v_35;
  int v;
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
  int s_St_5_Standby_2_0;
  int s_St_5_Standby_3_0_0;
  int s_St_5_Standby_3_0_1;
  int s_St_5_Standby_2_1;
  int s_St_5_Standby_3_1_0;
  int s_St_5_Standby_3_1_1;
  int s_St_5_Spin_2_0;
  int s_St_5_Spin_3_0_0;
  int s_St_5_Spin_3_0_1;
  int s_St_5_Spin_2_1;
  int s_St_5_Spin_3_1_0;
  int s_St_5_Spin_3_1_1;
  int s_St_5_Rinse_2_0;
  int s_St_5_Rinse_3_0_0;
  int s_St_5_Rinse_3_0_1;
  int s_St_5_Rinse_2_1;
  int s_St_5_Rinse_3_1_0;
  int s_St_5_Rinse_3_1_1;
  int s_St_5_Washing_2_0;
  int s_St_5_Washing_3_0_0;
  int s_St_5_Washing_3_0_1;
  int s_St_5_Washing_2_1;
  int s_St_5_Washing_3_1_0;
  int s_St_5_Washing_3_1_1;
  int s_St_5_Water_fill_2_0;
  int s_St_5_Water_fill_3_0_0;
  int s_St_5_Water_fill_3_0_1;
  int s_St_5_Water_fill_2_1;
  int s_St_5_Water_fill_3_1_0;
  int s_St_5_Water_fill_3_1_1;
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
  int r_St_5_Standby;
  int s_St_5_Standby_3;
  int s_St_5_Standby_2;
  int s_St_5_Standby_1;
  int r_St_5_Spin;
  int s_St_5_Spin_3;
  int s_St_5_Spin_2;
  int s_St_5_Spin_1;
  int r_St_5_Rinse;
  int s_St_5_Rinse_3;
  int s_St_5_Rinse_2;
  int s_St_5_Rinse_1;
  int r_St_5_Washing;
  int s_St_5_Washing_3;
  int s_St_5_Washing_2;
  int s_St_5_Washing_1;
  int r_St_5_Water_fill;
  int s_St_5_Water_fill_3;
  int s_St_5_Water_fill_2;
  int s_St_5_Water_fill_1;
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
  ck_1 = self->v_177;
  ck_2 = self->v_178;
  ck_3 = self->v_179;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (start) {
          r_St_5_Off = true;
          s_St_5_Off_1 = false;
          s_St_5_Off_2 = false;
          s_St_5_Off_3 = false;
        } else {
          r_St_5_Off = self->pnr;
          s_St_5_Off_1 = true;
          s_St_5_Off_2 = true;
          s_St_5_Off_3 = true;
        };
        v_198 = r_St_5_Off;
        v_180 = s_St_5_Off_1;
        v_181 = s_St_5_Off_2;
        v_182 = s_St_5_Off_3;
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
      } else {
        if (finish) {
          r_St_5_Rinse = true;
        } else {
          r_St_5_Rinse = self->pnr;
        };
        v_198 = r_St_5_Rinse;
        if (finish) {
          s_St_5_Rinse_1 = true;
        } else {
          s_St_5_Rinse_1 = true;
        };
        v_180 = s_St_5_Rinse_1;
        if (finish) {
          s_St_5_Rinse_2 = false;
        } else {
          s_St_5_Rinse_2 = true;
        };
        v_181 = s_St_5_Rinse_2;
        if (finish) {
          s_St_5_Rinse_3 = false;
        } else {
          s_St_5_Rinse_3 = false;
        };
        v_182 = s_St_5_Rinse_3;
        if (s_St_5_Rinse_1) {
          s_St_5_Rinse_2_1 = s_St_5_Rinse_2;
          if (s_St_5_Rinse_2_1) {
            s_St_5_Rinse_3_1_1 = s_St_5_Rinse_3;
          } else {
            s_St_5_Rinse_3_1_0 = s_St_5_Rinse_3;
          };
        } else {
          s_St_5_Rinse_2_0 = s_St_5_Rinse_2;
          if (s_St_5_Rinse_2_0) {
            s_St_5_Rinse_3_0_1 = s_St_5_Rinse_3;
          } else {
            s_St_5_Rinse_3_0_0 = s_St_5_Rinse_3;
          };
        };
      };
      v_192 = v_180;
      v_193 = v_181;
      v_194 = v_182;
      v_200 = v_198;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_199 = true;
        v_183 = true;
        v_184 = true;
        v_185 = true;
      } else {
        if (finish) {
          r_St_5_Spin = true;
        } else {
          r_St_5_Spin = self->pnr;
        };
        v_199 = r_St_5_Spin;
        if (finish) {
          s_St_5_Spin_1 = true;
        } else {
          s_St_5_Spin_1 = true;
        };
        v_183 = s_St_5_Spin_1;
        if (finish) {
          s_St_5_Spin_2 = true;
        } else {
          s_St_5_Spin_2 = false;
        };
        v_184 = s_St_5_Spin_2;
        if (finish) {
          s_St_5_Spin_3 = true;
        } else {
          s_St_5_Spin_3 = false;
        };
        v_185 = s_St_5_Spin_3;
      };
      v_192 = v_183;
      v_193 = v_184;
      v_194 = v_185;
      v_200 = v_199;
      if (!(ck_3_1_0)) {
        if (s_St_5_Spin_1) {
          s_St_5_Spin_2_1 = s_St_5_Spin_2;
          if (s_St_5_Spin_2_1) {
            s_St_5_Spin_3_1_1 = s_St_5_Spin_3;
          } else {
            s_St_5_Spin_3_1_0 = s_St_5_Spin_3;
          };
        } else {
          s_St_5_Spin_2_0 = s_St_5_Spin_2;
          if (s_St_5_Spin_2_0) {
            s_St_5_Spin_3_0_1 = s_St_5_Spin_3;
          } else {
            s_St_5_Spin_3_0_0 = s_St_5_Spin_3;
          };
        };
      };
    };
    s_1 = v_192;
    s_2 = v_193;
    s_3 = v_194;
    r = v_200;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      if (ck_3_0_1) {
        if (c_wash) {
          r_St_5_Standby = true;
        } else {
          r_St_5_Standby = self->pnr;
        };
        v_201 = r_St_5_Standby;
        if (c_wash) {
          s_St_5_Standby_1 = false;
        } else {
          s_St_5_Standby_1 = false;
        };
        v_186 = s_St_5_Standby_1;
        if (c_wash) {
          s_St_5_Standby_2 = true;
        } else {
          s_St_5_Standby_2 = true;
        };
        v_187 = s_St_5_Standby_2;
        if (c_wash) {
          s_St_5_Standby_3 = false;
        } else {
          s_St_5_Standby_3 = true;
        };
        v_188 = s_St_5_Standby_3;
      } else {
        if (finish) {
          r_St_5_Washing = true;
          s_St_5_Washing_1 = true;
          s_St_5_Washing_2 = true;
          s_St_5_Washing_3 = false;
        } else {
          r_St_5_Washing = self->pnr;
          s_St_5_Washing_1 = false;
          s_St_5_Washing_2 = true;
          s_St_5_Washing_3 = false;
        };
        v_201 = r_St_5_Washing;
        v_186 = s_St_5_Washing_1;
        v_187 = s_St_5_Washing_2;
        v_188 = s_St_5_Washing_3;
      };
      v_195 = v_186;
      v_196 = v_187;
      v_197 = v_188;
      v_203 = v_201;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_202 = true;
        v_189 = true;
        v_190 = true;
        v_191 = true;
      } else {
        v_36 = (finish&&c_wash);
        if (v_36) {
          v_38 = true;
          v_37_1 = false;
          v_37_2 = true;
          v_37_3 = false;
        } else {
          v_38 = self->pnr;
          v_37_1 = false;
          v_37_2 = false;
          v_37_3 = false;
        };
        v = !(c_wash);
        v_35 = (finish&&v);
        if (v_35) {
          r_St_5_Water_fill = true;
        } else {
          r_St_5_Water_fill = v_38;
        };
        v_202 = r_St_5_Water_fill;
        if (v_35) {
          s_St_5_Water_fill_1 = false;
        } else {
          s_St_5_Water_fill_1 = v_37_1;
        };
        v_189 = s_St_5_Water_fill_1;
        if (v_35) {
          s_St_5_Water_fill_2 = true;
        } else {
          s_St_5_Water_fill_2 = v_37_2;
        };
        v_190 = s_St_5_Water_fill_2;
        if (v_35) {
          s_St_5_Water_fill_3 = true;
        } else {
          s_St_5_Water_fill_3 = v_37_3;
        };
        v_191 = s_St_5_Water_fill_3;
        if (v_37_1) {
          v_37_2_1 = v_37_2;
          if (v_37_2_1) {
            v_37_3_1_1 = v_37_3;
          } else {
            v_37_3_1_0 = v_37_3;
          };
        } else {
          v_37_2_0 = v_37_2;
          if (v_37_2_0) {
            v_37_3_0_1 = v_37_3;
          } else {
            v_37_3_0_0 = v_37_3;
          };
        };
        if (s_St_5_Water_fill_1) {
          s_St_5_Water_fill_2_1 = s_St_5_Water_fill_2;
          if (s_St_5_Water_fill_2_1) {
            s_St_5_Water_fill_3_1_1 = s_St_5_Water_fill_3;
          } else {
            s_St_5_Water_fill_3_1_0 = s_St_5_Water_fill_3;
          };
        } else {
          s_St_5_Water_fill_2_0 = s_St_5_Water_fill_2;
          if (s_St_5_Water_fill_2_0) {
            s_St_5_Water_fill_3_0_1 = s_St_5_Water_fill_3;
          } else {
            s_St_5_Water_fill_3_0_0 = s_St_5_Water_fill_3;
          };
        };
      };
      v_195 = v_189;
      v_196 = v_190;
      v_197 = v_191;
      v_203 = v_202;
    };
    s_1 = v_195;
    s_2 = v_196;
    s_3 = v_197;
    r = v_203;
  };
  ck_6_1 = s_1;
  ck_6_2 = s_2;
  ck_6_3 = s_3;
  if (ck_6_1) {
    ck_6_2_1 = ck_6_2;
    if (ck_6_2_1) {
      ck_6_3_1_1 = ck_6_3;
      if (ck_6_3_1_1) {
        wash_power_St_5_Off = 0;
        wash_state_St_5_Off = 0;
        nr_St_5_Off = false;
        ns_St_5_Off_1 = true;
        ns_St_5_Off_2 = true;
        ns_St_5_Off_3 = true;
        v_141 = wash_power_St_5_Off;
        v_147 = wash_state_St_5_Off;
        v_171 = nr_St_5_Off;
        v_153 = ns_St_5_Off_1;
        v_154 = ns_St_5_Off_2;
        v_155 = ns_St_5_Off_3;
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
      } else {
        wash_power_St_5_Rinse = 200;
        v_141 = wash_power_St_5_Rinse;
        wash_state_St_5_Rinse = 3;
        v_147 = wash_state_St_5_Rinse;
        nr_St_5_Rinse = false;
        v_171 = nr_St_5_Rinse;
        ns_St_5_Rinse_1 = true;
        v_153 = ns_St_5_Rinse_1;
        ns_St_5_Rinse_2 = true;
        v_154 = ns_St_5_Rinse_2;
        ns_St_5_Rinse_3 = false;
        v_155 = ns_St_5_Rinse_3;
        if (ns_St_5_Rinse_1) {
          ns_St_5_Rinse_2_1 = ns_St_5_Rinse_2;
          if (ns_St_5_Rinse_2_1) {
            ns_St_5_Rinse_3_1_1 = ns_St_5_Rinse_3;
          } else {
            ns_St_5_Rinse_3_1_0 = ns_St_5_Rinse_3;
          };
        } else {
          ns_St_5_Rinse_2_0 = ns_St_5_Rinse_2;
          if (ns_St_5_Rinse_2_0) {
            ns_St_5_Rinse_3_0_1 = ns_St_5_Rinse_3;
          } else {
            ns_St_5_Rinse_3_0_0 = ns_St_5_Rinse_3;
          };
        };
      };
      v_143 = v_141;
      v_149 = v_147;
      v_165 = v_153;
      v_166 = v_154;
      v_167 = v_155;
      v_173 = v_171;
    } else {
      ck_6_3_1_0 = ck_6_3;
      if (ck_6_3_1_0) {
        v_142 = 0;
        v_148 = 0;
        v_172 = true;
        v_156 = true;
        v_157 = true;
        v_158 = true;
      } else {
        wash_power_St_5_Spin = 800;
        v_142 = wash_power_St_5_Spin;
        wash_state_St_5_Spin = 4;
        v_148 = wash_state_St_5_Spin;
        nr_St_5_Spin = false;
        v_172 = nr_St_5_Spin;
        ns_St_5_Spin_1 = true;
        v_156 = ns_St_5_Spin_1;
        ns_St_5_Spin_2 = false;
        v_157 = ns_St_5_Spin_2;
        ns_St_5_Spin_3 = false;
        v_158 = ns_St_5_Spin_3;
      };
      v_143 = v_142;
      v_149 = v_148;
      v_165 = v_156;
      v_166 = v_157;
      v_167 = v_158;
      v_173 = v_172;
      if (!(ck_6_3_1_0)) {
        if (ns_St_5_Spin_1) {
          ns_St_5_Spin_2_1 = ns_St_5_Spin_2;
          if (ns_St_5_Spin_2_1) {
            ns_St_5_Spin_3_1_1 = ns_St_5_Spin_3;
          } else {
            ns_St_5_Spin_3_1_0 = ns_St_5_Spin_3;
          };
        } else {
          ns_St_5_Spin_2_0 = ns_St_5_Spin_2;
          if (ns_St_5_Spin_2_0) {
            ns_St_5_Spin_3_0_1 = ns_St_5_Spin_3;
          } else {
            ns_St_5_Spin_3_0_0 = ns_St_5_Spin_3;
          };
        };
      };
    };
    _out->wash_power = v_143;
    _out->wash_state = v_149;
    ns_1 = v_165;
    ns_2 = v_166;
    ns_3 = v_167;
    nr = v_173;
  } else {
    ck_6_2_0 = ck_6_2;
    if (ck_6_2_0) {
      ck_6_3_0_1 = ck_6_3;
      if (ck_6_3_0_1) {
        wash_power_St_5_Standby = 0;
        v_144 = wash_power_St_5_Standby;
        wash_state_St_5_Standby = 5;
        v_150 = wash_state_St_5_Standby;
        nr_St_5_Standby = false;
        v_174 = nr_St_5_Standby;
        ns_St_5_Standby_1 = false;
        v_159 = ns_St_5_Standby_1;
        ns_St_5_Standby_2 = true;
        v_160 = ns_St_5_Standby_2;
        ns_St_5_Standby_3 = true;
        v_161 = ns_St_5_Standby_3;
      } else {
        wash_power_St_5_Washing = 250;
        wash_state_St_5_Washing = 2;
        nr_St_5_Washing = false;
        ns_St_5_Washing_1 = false;
        ns_St_5_Washing_2 = true;
        ns_St_5_Washing_3 = false;
        v_144 = wash_power_St_5_Washing;
        v_150 = wash_state_St_5_Washing;
        v_174 = nr_St_5_Washing;
        v_159 = ns_St_5_Washing_1;
        v_160 = ns_St_5_Washing_2;
        v_161 = ns_St_5_Washing_3;
      };
      v_146 = v_144;
      v_152 = v_150;
      v_168 = v_159;
      v_169 = v_160;
      v_170 = v_161;
      v_176 = v_174;
    } else {
      ck_6_3_0_0 = ck_6_3;
      if (ck_6_3_0_0) {
        v_145 = 0;
        v_151 = 0;
        v_175 = true;
        v_162 = true;
        v_163 = true;
        v_164 = true;
      } else {
        wash_power_St_5_Water_fill = 15;
        v_145 = wash_power_St_5_Water_fill;
        wash_state_St_5_Water_fill = 1;
        v_151 = wash_state_St_5_Water_fill;
        nr_St_5_Water_fill = false;
        v_175 = nr_St_5_Water_fill;
        ns_St_5_Water_fill_1 = false;
        v_162 = ns_St_5_Water_fill_1;
        ns_St_5_Water_fill_2 = false;
        v_163 = ns_St_5_Water_fill_2;
        ns_St_5_Water_fill_3 = false;
        v_164 = ns_St_5_Water_fill_3;
        if (ns_St_5_Water_fill_1) {
          ns_St_5_Water_fill_2_1 = ns_St_5_Water_fill_2;
          if (ns_St_5_Water_fill_2_1) {
            ns_St_5_Water_fill_3_1_1 = ns_St_5_Water_fill_3;
          } else {
            ns_St_5_Water_fill_3_1_0 = ns_St_5_Water_fill_3;
          };
        } else {
          ns_St_5_Water_fill_2_0 = ns_St_5_Water_fill_2;
          if (ns_St_5_Water_fill_2_0) {
            ns_St_5_Water_fill_3_0_1 = ns_St_5_Water_fill_3;
          } else {
            ns_St_5_Water_fill_3_0_0 = ns_St_5_Water_fill_3;
          };
        };
      };
      v_146 = v_145;
      v_152 = v_151;
      v_168 = v_162;
      v_169 = v_163;
      v_170 = v_164;
      v_176 = v_175;
    };
    _out->wash_power = v_146;
    _out->wash_state = v_152;
    ns_1 = v_168;
    ns_2 = v_169;
    ns_3 = v_170;
    nr = v_176;
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
        if (ns_St_5_Standby_1) {
          ns_St_5_Standby_2_1 = ns_St_5_Standby_2;
          if (ns_St_5_Standby_2_1) {
            ns_St_5_Standby_3_1_1 = ns_St_5_Standby_3;
          } else {
            ns_St_5_Standby_3_1_0 = ns_St_5_Standby_3;
          };
        } else {
          ns_St_5_Standby_2_0 = ns_St_5_Standby_2;
          if (ns_St_5_Standby_2_0) {
            ns_St_5_Standby_3_0_1 = ns_St_5_Standby_3;
          } else {
            ns_St_5_Standby_3_0_0 = ns_St_5_Standby_3;
          };
        };
      } else {
        if (ns_St_5_Washing_1) {
          ns_St_5_Washing_2_1 = ns_St_5_Washing_2;
          if (ns_St_5_Washing_2_1) {
            ns_St_5_Washing_3_1_1 = ns_St_5_Washing_3;
          } else {
            ns_St_5_Washing_3_1_0 = ns_St_5_Washing_3;
          };
        } else {
          ns_St_5_Washing_2_0 = ns_St_5_Washing_2;
          if (ns_St_5_Washing_2_0) {
            ns_St_5_Washing_3_0_1 = ns_St_5_Washing_3;
          } else {
            ns_St_5_Washing_3_0_0 = ns_St_5_Washing_3;
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
        if (s_St_5_Standby_1) {
          s_St_5_Standby_2_1 = s_St_5_Standby_2;
          if (s_St_5_Standby_2_1) {
            s_St_5_Standby_3_1_1 = s_St_5_Standby_3;
          } else {
            s_St_5_Standby_3_1_0 = s_St_5_Standby_3;
          };
        } else {
          s_St_5_Standby_2_0 = s_St_5_Standby_2;
          if (s_St_5_Standby_2_0) {
            s_St_5_Standby_3_0_1 = s_St_5_Standby_3;
          } else {
            s_St_5_Standby_3_0_0 = s_St_5_Standby_3;
          };
        };
      } else {
        if (s_St_5_Washing_1) {
          s_St_5_Washing_2_1 = s_St_5_Washing_2;
          if (s_St_5_Washing_2_1) {
            s_St_5_Washing_3_1_1 = s_St_5_Washing_3;
          } else {
            s_St_5_Washing_3_1_0 = s_St_5_Washing_3;
          };
        } else {
          s_St_5_Washing_2_0 = s_St_5_Washing_2;
          if (s_St_5_Washing_2_0) {
            s_St_5_Washing_3_0_1 = s_St_5_Washing_3;
          } else {
            s_St_5_Washing_3_0_0 = s_St_5_Washing_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_177 = ns_1;
  self->v_178 = ns_2;
  self->v_179 = ns_3;;
}

void System__oven_reset(System__oven_mem* self) {
  self->pnr = false;
  self->v_234 = true;
  self->v_235 = false;
  self->v_236 = false;
}

void System__oven_step(int finish, int start, int c_oven, int temp_ok,
                       int cold, System__oven_out* _out,
                       System__oven_mem* self) {
  
  int v_233;
  int v_232;
  int v_231;
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
  int v_210;
  int v_209;
  int v_208;
  int v_207;
  int v_206;
  int v_205;
  int v_204;
  int ns_St_6_Standby_2_0;
  int ns_St_6_Standby_3_0_0;
  int ns_St_6_Standby_3_0_1;
  int ns_St_6_Standby_2_1;
  int ns_St_6_Standby_3_1_0;
  int ns_St_6_Standby_3_1_1;
  int ns_St_6_Reheat_2_0;
  int ns_St_6_Reheat_3_0_0;
  int ns_St_6_Reheat_3_0_1;
  int ns_St_6_Reheat_2_1;
  int ns_St_6_Reheat_3_1_0;
  int ns_St_6_Reheat_3_1_1;
  int ns_St_6_Maintain_2_0;
  int ns_St_6_Maintain_3_0_0;
  int ns_St_6_Maintain_3_0_1;
  int ns_St_6_Maintain_2_1;
  int ns_St_6_Maintain_3_1_0;
  int ns_St_6_Maintain_3_1_1;
  int ns_St_6_Heat_2_0;
  int ns_St_6_Heat_3_0_0;
  int ns_St_6_Heat_3_0_1;
  int ns_St_6_Heat_2_1;
  int ns_St_6_Heat_3_1_0;
  int ns_St_6_Heat_3_1_1;
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
  int oven_state_St_6_Standby;
  int oven_power_St_6_Standby;
  int nr_St_6_Reheat;
  int ns_St_6_Reheat_3;
  int ns_St_6_Reheat_2;
  int ns_St_6_Reheat_1;
  int oven_state_St_6_Reheat;
  int oven_power_St_6_Reheat;
  int nr_St_6_Maintain;
  int ns_St_6_Maintain_3;
  int ns_St_6_Maintain_2;
  int ns_St_6_Maintain_1;
  int oven_state_St_6_Maintain;
  int oven_power_St_6_Maintain;
  int nr_St_6_Heat;
  int ns_St_6_Heat_3;
  int ns_St_6_Heat_2;
  int ns_St_6_Heat_1;
  int oven_state_St_6_Heat;
  int oven_power_St_6_Heat;
  int nr_St_6_Off;
  int ns_St_6_Off_3;
  int ns_St_6_Off_2;
  int ns_St_6_Off_1;
  int oven_state_St_6_Off;
  int oven_power_St_6_Off;
  int ck_7_3;
  int ck_7_2;
  int ck_7_1;
  int v_48_2_0;
  int v_48_3_0_0;
  int v_48_3_0_1;
  int v_48_2_1;
  int v_48_3_1_0;
  int v_48_3_1_1;
  int v_49;
  int v_48_3;
  int v_48_2;
  int v_48_1;
  int v_47;
  int v_46;
  int v_45;
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
  int v_41_2_0;
  int v_41_3_0_0;
  int v_41_3_0_1;
  int v_41_2_1;
  int v_41_3_1_0;
  int v_41_3_1_1;
  int v_42;
  int v_41_3;
  int v_41_2;
  int v_41_1;
  int v_40;
  int v_2_0;
  int v_3_0_0;
  int v_3_0_1;
  int v_2_1;
  int v_3_1_0;
  int v_3_1_1;
  int v_39;
  int v_3;
  int v_2;
  int v_1;
  int v_256;
  int v_255;
  int v_254;
  int v_253;
  int v_252;
  int v_251;
  int v_250;
  int v_249;
  int v_248;
  int v_247;
  int v_246;
  int v_245;
  int v_244;
  int v_243;
  int v_242;
  int v_241;
  int v_240;
  int v_239;
  int v_238;
  int v_237;
  int s_St_6_Standby_2_0;
  int s_St_6_Standby_3_0_0;
  int s_St_6_Standby_3_0_1;
  int s_St_6_Standby_2_1;
  int s_St_6_Standby_3_1_0;
  int s_St_6_Standby_3_1_1;
  int s_St_6_Reheat_2_0;
  int s_St_6_Reheat_3_0_0;
  int s_St_6_Reheat_3_0_1;
  int s_St_6_Reheat_2_1;
  int s_St_6_Reheat_3_1_0;
  int s_St_6_Reheat_3_1_1;
  int s_St_6_Maintain_2_0;
  int s_St_6_Maintain_3_0_0;
  int s_St_6_Maintain_3_0_1;
  int s_St_6_Maintain_2_1;
  int s_St_6_Maintain_3_1_0;
  int s_St_6_Maintain_3_1_1;
  int s_St_6_Heat_2_0;
  int s_St_6_Heat_3_0_0;
  int s_St_6_Heat_3_0_1;
  int s_St_6_Heat_2_1;
  int s_St_6_Heat_3_1_0;
  int s_St_6_Heat_3_1_1;
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
  int r_St_6_Reheat;
  int s_St_6_Reheat_3;
  int s_St_6_Reheat_2;
  int s_St_6_Reheat_1;
  int r_St_6_Maintain;
  int s_St_6_Maintain_3;
  int s_St_6_Maintain_2;
  int s_St_6_Maintain_1;
  int r_St_6_Heat;
  int s_St_6_Heat_3;
  int s_St_6_Heat_2;
  int s_St_6_Heat_1;
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
  ck_1 = self->v_234;
  ck_2 = self->v_235;
  ck_3 = self->v_236;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (finish) {
          v_44 = true;
        } else {
          v_44 = self->pnr;
        };
        if (temp_ok) {
          r_St_6_Heat = true;
        } else {
          r_St_6_Heat = v_44;
        };
        if (finish) {
          v_43_1 = true;
        } else {
          v_43_1 = true;
        };
        if (temp_ok) {
          s_St_6_Heat_1 = true;
        } else {
          s_St_6_Heat_1 = v_43_1;
        };
        if (finish) {
          v_43_2 = false;
        } else {
          v_43_2 = true;
        };
        if (temp_ok) {
          s_St_6_Heat_2 = true;
        } else {
          s_St_6_Heat_2 = v_43_2;
        };
        if (finish) {
          v_43_3 = false;
        } else {
          v_43_3 = true;
        };
        if (temp_ok) {
          s_St_6_Heat_3 = false;
        } else {
          s_St_6_Heat_3 = v_43_3;
        };
        v_252 = r_St_6_Heat;
        v_237 = s_St_6_Heat_1;
        v_238 = s_St_6_Heat_2;
        v_239 = s_St_6_Heat_3;
      } else {
        if (finish) {
          v_42 = true;
          v_41_1 = true;
          v_41_2 = false;
          v_41_3 = false;
        } else {
          v_42 = self->pnr;
          v_41_1 = true;
          v_41_2 = true;
          v_41_3 = false;
        };
        v_40 = (cold&&c_oven);
        if (v_40) {
          r_St_6_Maintain = true;
        } else {
          r_St_6_Maintain = v_42;
        };
        v_252 = r_St_6_Maintain;
        if (v_40) {
          s_St_6_Maintain_1 = false;
        } else {
          s_St_6_Maintain_1 = v_41_1;
        };
        v_237 = s_St_6_Maintain_1;
        if (v_40) {
          s_St_6_Maintain_2 = false;
        } else {
          s_St_6_Maintain_2 = v_41_2;
        };
        v_238 = s_St_6_Maintain_2;
        if (v_40) {
          s_St_6_Maintain_3 = true;
        } else {
          s_St_6_Maintain_3 = v_41_3;
        };
        v_239 = s_St_6_Maintain_3;
      };
      v_246 = v_237;
      v_247 = v_238;
      v_248 = v_239;
      v_254 = v_252;
      if (ck_3_1_1) {
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
        if (s_St_6_Heat_1) {
          s_St_6_Heat_2_1 = s_St_6_Heat_2;
          if (s_St_6_Heat_2_1) {
            s_St_6_Heat_3_1_1 = s_St_6_Heat_3;
          } else {
            s_St_6_Heat_3_1_0 = s_St_6_Heat_3;
          };
        } else {
          s_St_6_Heat_2_0 = s_St_6_Heat_2;
          if (s_St_6_Heat_2_0) {
            s_St_6_Heat_3_0_1 = s_St_6_Heat_3;
          } else {
            s_St_6_Heat_3_0_0 = s_St_6_Heat_3;
          };
        };
      } else {
        if (v_41_1) {
          v_41_2_1 = v_41_2;
          if (v_41_2_1) {
            v_41_3_1_1 = v_41_3;
          } else {
            v_41_3_1_0 = v_41_3;
          };
        } else {
          v_41_2_0 = v_41_2;
          if (v_41_2_0) {
            v_41_3_0_1 = v_41_3;
          } else {
            v_41_3_0_0 = v_41_3;
          };
        };
        if (s_St_6_Maintain_1) {
          s_St_6_Maintain_2_1 = s_St_6_Maintain_2;
          if (s_St_6_Maintain_2_1) {
            s_St_6_Maintain_3_1_1 = s_St_6_Maintain_3;
          } else {
            s_St_6_Maintain_3_1_0 = s_St_6_Maintain_3;
          };
        } else {
          s_St_6_Maintain_2_0 = s_St_6_Maintain_2;
          if (s_St_6_Maintain_2_0) {
            s_St_6_Maintain_3_0_1 = s_St_6_Maintain_3;
          } else {
            s_St_6_Maintain_3_0_0 = s_St_6_Maintain_3;
          };
        };
      };
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_253 = true;
        v_240 = true;
        v_241 = true;
        v_242 = true;
      } else {
        v_46 = !(c_oven);
        v_47 = (start&&v_46);
        if (v_47) {
          v_49 = true;
          v_48_1 = false;
          v_48_2 = false;
          v_48_3 = false;
        } else {
          v_49 = self->pnr;
          v_48_1 = true;
          v_48_2 = false;
          v_48_3 = false;
        };
        v_45 = (start&&c_oven);
        if (v_45) {
          r_St_6_Off = true;
        } else {
          r_St_6_Off = v_49;
        };
        v_253 = r_St_6_Off;
        if (v_45) {
          s_St_6_Off_1 = true;
        } else {
          s_St_6_Off_1 = v_48_1;
        };
        v_240 = s_St_6_Off_1;
        if (v_45) {
          s_St_6_Off_2 = true;
        } else {
          s_St_6_Off_2 = v_48_2;
        };
        v_241 = s_St_6_Off_2;
        if (v_45) {
          s_St_6_Off_3 = true;
        } else {
          s_St_6_Off_3 = v_48_3;
        };
        v_242 = s_St_6_Off_3;
        if (v_48_1) {
          v_48_2_1 = v_48_2;
          if (v_48_2_1) {
            v_48_3_1_1 = v_48_3;
          } else {
            v_48_3_1_0 = v_48_3;
          };
        } else {
          v_48_2_0 = v_48_2;
          if (v_48_2_0) {
            v_48_3_0_1 = v_48_3;
          } else {
            v_48_3_0_0 = v_48_3;
          };
        };
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
      v_246 = v_240;
      v_247 = v_241;
      v_248 = v_242;
      v_254 = v_253;
    };
    s_1 = v_246;
    s_2 = v_247;
    s_3 = v_248;
    r = v_254;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      v_249 = true;
      v_250 = true;
      v_251 = true;
      v_256 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        if (finish) {
          v_39 = true;
        } else {
          v_39 = self->pnr;
        };
        if (temp_ok) {
          r_St_6_Reheat = true;
        } else {
          r_St_6_Reheat = v_39;
        };
        if (finish) {
          v_1 = true;
        } else {
          v_1 = false;
        };
        if (temp_ok) {
          s_St_6_Reheat_1 = true;
        } else {
          s_St_6_Reheat_1 = v_1;
        };
        if (finish) {
          v_2 = false;
        } else {
          v_2 = false;
        };
        if (temp_ok) {
          s_St_6_Reheat_2 = true;
        } else {
          s_St_6_Reheat_2 = v_2;
        };
        if (finish) {
          v_3 = false;
        } else {
          v_3 = true;
        };
        if (temp_ok) {
          s_St_6_Reheat_3 = false;
        } else {
          s_St_6_Reheat_3 = v_3;
        };
        v_255 = r_St_6_Reheat;
        v_243 = s_St_6_Reheat_1;
        v_244 = s_St_6_Reheat_2;
        v_245 = s_St_6_Reheat_3;
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
          r_St_6_Standby = true;
        } else {
          r_St_6_Standby = self->pnr;
        };
        v_255 = r_St_6_Standby;
        if (c_oven) {
          s_St_6_Standby_1 = true;
        } else {
          s_St_6_Standby_1 = false;
        };
        v_243 = s_St_6_Standby_1;
        if (c_oven) {
          s_St_6_Standby_2 = true;
        } else {
          s_St_6_Standby_2 = false;
        };
        v_244 = s_St_6_Standby_2;
        if (c_oven) {
          s_St_6_Standby_3 = true;
        } else {
          s_St_6_Standby_3 = false;
        };
        v_245 = s_St_6_Standby_3;
      };
      v_249 = v_243;
      v_250 = v_244;
      v_251 = v_245;
      v_256 = v_255;
    };
    s_1 = v_249;
    s_2 = v_250;
    s_3 = v_251;
    r = v_256;
  };
  ck_7_1 = s_1;
  ck_7_2 = s_2;
  ck_7_3 = s_3;
  if (ck_7_1) {
    ck_7_2_1 = ck_7_2;
    if (ck_7_2_1) {
      ck_7_3_1_1 = ck_7_3;
      if (ck_7_3_1_1) {
        oven_power_St_6_Heat = 1500;
        oven_state_St_6_Heat = 1;
        nr_St_6_Heat = false;
        ns_St_6_Heat_1 = true;
        ns_St_6_Heat_2 = true;
        ns_St_6_Heat_3 = true;
        v_204 = oven_power_St_6_Heat;
        v_209 = oven_state_St_6_Heat;
        v_229 = nr_St_6_Heat;
        v_214 = ns_St_6_Heat_1;
        v_215 = ns_St_6_Heat_2;
        v_216 = ns_St_6_Heat_3;
      } else {
        oven_power_St_6_Maintain = 300;
        v_204 = oven_power_St_6_Maintain;
        oven_state_St_6_Maintain = 2;
        v_209 = oven_state_St_6_Maintain;
        nr_St_6_Maintain = false;
        v_229 = nr_St_6_Maintain;
        ns_St_6_Maintain_1 = true;
        v_214 = ns_St_6_Maintain_1;
        ns_St_6_Maintain_2 = true;
        v_215 = ns_St_6_Maintain_2;
        ns_St_6_Maintain_3 = false;
        v_216 = ns_St_6_Maintain_3;
      };
      v_206 = v_204;
      v_211 = v_209;
      v_223 = v_214;
      v_224 = v_215;
      v_225 = v_216;
      v_231 = v_229;
      if (ck_7_3_1_1) {
        if (ns_St_6_Heat_1) {
          ns_St_6_Heat_2_1 = ns_St_6_Heat_2;
          if (ns_St_6_Heat_2_1) {
            ns_St_6_Heat_3_1_1 = ns_St_6_Heat_3;
          } else {
            ns_St_6_Heat_3_1_0 = ns_St_6_Heat_3;
          };
        } else {
          ns_St_6_Heat_2_0 = ns_St_6_Heat_2;
          if (ns_St_6_Heat_2_0) {
            ns_St_6_Heat_3_0_1 = ns_St_6_Heat_3;
          } else {
            ns_St_6_Heat_3_0_0 = ns_St_6_Heat_3;
          };
        };
      } else {
        if (ns_St_6_Maintain_1) {
          ns_St_6_Maintain_2_1 = ns_St_6_Maintain_2;
          if (ns_St_6_Maintain_2_1) {
            ns_St_6_Maintain_3_1_1 = ns_St_6_Maintain_3;
          } else {
            ns_St_6_Maintain_3_1_0 = ns_St_6_Maintain_3;
          };
        } else {
          ns_St_6_Maintain_2_0 = ns_St_6_Maintain_2;
          if (ns_St_6_Maintain_2_0) {
            ns_St_6_Maintain_3_0_1 = ns_St_6_Maintain_3;
          } else {
            ns_St_6_Maintain_3_0_0 = ns_St_6_Maintain_3;
          };
        };
      };
    } else {
      ck_7_3_1_0 = ck_7_3;
      if (ck_7_3_1_0) {
        v_205 = 0;
        v_210 = 0;
        v_230 = true;
        v_217 = true;
        v_218 = true;
        v_219 = true;
      } else {
        oven_power_St_6_Off = 0;
        v_205 = oven_power_St_6_Off;
        oven_state_St_6_Off = 0;
        v_210 = oven_state_St_6_Off;
        nr_St_6_Off = false;
        v_230 = nr_St_6_Off;
        ns_St_6_Off_1 = true;
        v_217 = ns_St_6_Off_1;
        ns_St_6_Off_2 = false;
        v_218 = ns_St_6_Off_2;
        ns_St_6_Off_3 = false;
        v_219 = ns_St_6_Off_3;
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
      v_206 = v_205;
      v_211 = v_210;
      v_223 = v_217;
      v_224 = v_218;
      v_225 = v_219;
      v_231 = v_230;
    };
    _out->oven_power = v_206;
    _out->oven_state = v_211;
    ns_1 = v_223;
    ns_2 = v_224;
    ns_3 = v_225;
    nr = v_231;
  } else {
    ck_7_2_0 = ck_7_2;
    if (ck_7_2_0) {
      ck_7_3_0_1 = ck_7_3;
      v_208 = 0;
      v_213 = 0;
      v_226 = true;
      v_227 = true;
      v_228 = true;
      v_233 = true;
    } else {
      ck_7_3_0_0 = ck_7_3;
      if (ck_7_3_0_0) {
        oven_power_St_6_Reheat = 1000;
        oven_state_St_6_Reheat = 3;
        nr_St_6_Reheat = false;
        ns_St_6_Reheat_1 = false;
        ns_St_6_Reheat_2 = false;
        ns_St_6_Reheat_3 = true;
        v_207 = oven_power_St_6_Reheat;
        v_212 = oven_state_St_6_Reheat;
        v_232 = nr_St_6_Reheat;
        v_220 = ns_St_6_Reheat_1;
        v_221 = ns_St_6_Reheat_2;
        v_222 = ns_St_6_Reheat_3;
      } else {
        oven_power_St_6_Standby = 0;
        v_207 = oven_power_St_6_Standby;
        oven_state_St_6_Standby = 4;
        v_212 = oven_state_St_6_Standby;
        nr_St_6_Standby = false;
        v_232 = nr_St_6_Standby;
        ns_St_6_Standby_1 = false;
        v_220 = ns_St_6_Standby_1;
        ns_St_6_Standby_2 = false;
        v_221 = ns_St_6_Standby_2;
        ns_St_6_Standby_3 = false;
        v_222 = ns_St_6_Standby_3;
      };
      v_208 = v_207;
      v_213 = v_212;
      v_226 = v_220;
      v_227 = v_221;
      v_228 = v_222;
      v_233 = v_232;
    };
    _out->oven_power = v_208;
    _out->oven_state = v_213;
    ns_1 = v_226;
    ns_2 = v_227;
    ns_3 = v_228;
    nr = v_233;
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
    if (!(ck_7_2_0)) {
      if (ck_7_3_0_0) {
        if (ns_St_6_Reheat_1) {
          ns_St_6_Reheat_2_1 = ns_St_6_Reheat_2;
          if (ns_St_6_Reheat_2_1) {
            ns_St_6_Reheat_3_1_1 = ns_St_6_Reheat_3;
          } else {
            ns_St_6_Reheat_3_1_0 = ns_St_6_Reheat_3;
          };
        } else {
          ns_St_6_Reheat_2_0 = ns_St_6_Reheat_2;
          if (ns_St_6_Reheat_2_0) {
            ns_St_6_Reheat_3_0_1 = ns_St_6_Reheat_3;
          } else {
            ns_St_6_Reheat_3_0_0 = ns_St_6_Reheat_3;
          };
        };
      } else {
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
        if (s_St_6_Reheat_1) {
          s_St_6_Reheat_2_1 = s_St_6_Reheat_2;
          if (s_St_6_Reheat_2_1) {
            s_St_6_Reheat_3_1_1 = s_St_6_Reheat_3;
          } else {
            s_St_6_Reheat_3_1_0 = s_St_6_Reheat_3;
          };
        } else {
          s_St_6_Reheat_2_0 = s_St_6_Reheat_2;
          if (s_St_6_Reheat_2_0) {
            s_St_6_Reheat_3_0_1 = s_St_6_Reheat_3;
          } else {
            s_St_6_Reheat_3_0_0 = s_St_6_Reheat_3;
          };
        };
      } else {
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
      };
    };
  };
  self->pnr = nr;
  self->v_234 = ns_1;
  self->v_235 = ns_2;
  self->v_236 = ns_3;;
}

void System__controller_reset(System__controller_mem* self) {
  self->pnr = false;
  self->ck_17_1 = true;
  self->pnr_1 = false;
  self->ck_15_1 = true;
  self->pnr_2 = false;
  self->ck_13_1 = true;
  self->pnr_3 = false;
  self->ck_11_1 = true;
  self->pnr_4 = false;
  self->ck_9_1 = true;
  self->pnr_5 = false;
  self->v_267 = false;
  self->v_268 = false;
}

void System__controller_step(int c_window, int c_door, int push_porta,
                             int push_janela, int rad_up1, int rad_down1,
                             int rad_up2, int rad_down2, int presence,
                             int light_switch, int tv_switch,
                             System__controller_out* _out,
                             System__controller_mem* self) {
  Controller_controller__controller_controller_out Controller_controller__controller_controller_out_st;
  
  int nr_St_7_Ocupied;
  int ns_St_7_Ocupied_1;
  int occupied_1_St_7_Ocupied;
  int nr_St_7_Empty;
  int ns_St_7_Empty_1;
  int occupied_1_St_7_Empty;
  int ck_18_1;
  int v_102;
  int r_St_7_Ocupied;
  int s_St_7_Ocupied_1;
  int r_St_7_Empty;
  int s_St_7_Empty_1;
  int nr_1_St_8_Ligado;
  int ns_1_St_8_Ligado_1;
  int source_on_1_St_8_Ligado;
  int nr_1_St_8_Desligado;
  int ns_1_St_8_Desligado_1;
  int source_on_1_St_8_Desligado;
  int ck_16_1;
  int v_101;
  int v_100;
  int v_99;
  int v_98;
  int v_97;
  int v_96;
  int r_1_St_8_Ligado;
  int s_1_St_8_Ligado_1;
  int r_1_St_8_Desligado;
  int s_1_St_8_Desligado_1;
  int nr_2_St_9_Ligado;
  int ns_2_St_9_Ligado_1;
  int source_on_St_9_Ligado;
  int nr_2_St_9_Desligado;
  int ns_2_St_9_Desligado_1;
  int source_on_St_9_Desligado;
  int ck_14_1;
  int v_95;
  int v_94;
  int v_93;
  int v_92;
  int v_91;
  int v_90;
  int r_2_St_9_Ligado;
  int s_2_St_9_Ligado_1;
  int r_2_St_9_Desligado;
  int s_2_St_9_Desligado_1;
  int nr_3_St_10_Open;
  int ns_3_St_10_Open_1;
  int door_open_2_St_10_Open;
  int nr_3_St_10_Closed;
  int ns_3_St_10_Closed_1;
  int door_open_2_St_10_Closed;
  int ck_12_1;
  int v_89;
  int v_88;
  int v_87;
  int r_3_St_10_Open;
  int s_3_St_10_Open_1;
  int r_3_St_10_Closed;
  int s_3_St_10_Closed_1;
  int nr_4_St_11_Open;
  int ns_4_St_11_Open_1;
  int door_open_1_St_11_Open;
  int nr_4_St_11_Closed;
  int ns_4_St_11_Closed_1;
  int door_open_1_St_11_Closed;
  int ck_10_1;
  int v_86;
  int v_85;
  int v_84;
  int r_4_St_11_Open;
  int s_4_St_11_Open_1;
  int r_4_St_11_Closed;
  int s_4_St_11_Closed_1;
  int v_266;
  int v_265;
  int v_264;
  int v_263;
  int v_262;
  int v_261;
  int v_260;
  int v_259;
  int v_258;
  int v_257;
  int ns_5_St_12_High_2_0;
  int ns_5_St_12_High_2_1;
  int ns_5_St_12_Eco_2_0;
  int ns_5_St_12_Eco_2_1;
  int ns_5_St_12_Frostprotection_2_0;
  int ns_5_St_12_Frostprotection_2_1;
  int ns_5_St_12_Off_2_0;
  int ns_5_St_12_Off_2_1;
  int ck_8_2_0;
  int ck_8_2_1;
  int nr_5_St_12_High;
  int ns_5_St_12_High_2;
  int ns_5_St_12_High_1;
  int rad_state_1_St_12_High;
  int rad_power_1_St_12_High;
  int nr_5_St_12_Eco;
  int ns_5_St_12_Eco_2;
  int ns_5_St_12_Eco_1;
  int rad_state_1_St_12_Eco;
  int rad_power_1_St_12_Eco;
  int nr_5_St_12_Frostprotection;
  int ns_5_St_12_Frostprotection_2;
  int ns_5_St_12_Frostprotection_1;
  int rad_state_1_St_12_Frostprotection;
  int rad_power_1_St_12_Frostprotection;
  int nr_5_St_12_Off;
  int ns_5_St_12_Off_2;
  int ns_5_St_12_Off_1;
  int rad_state_1_St_12_Off;
  int rad_power_1_St_12_Off;
  int ck_8_2;
  int ck_8_1;
  int v_83;
  int v_82;
  int v_80_2_0;
  int v_80_2_1;
  int v_78_2_0;
  int v_78_2_1;
  int v_81;
  int v_80_2;
  int v_80_1;
  int v_79;
  int v_78_2;
  int v_78_1;
  int v_77;
  int v_76;
  int v_75;
  int v_74;
  int v_72_2_0;
  int v_72_2_1;
  int v_73;
  int v_72_2;
  int v_72_1;
  int v_71;
  int v_70;
  int v_69;
  int v_67_2_0;
  int v_67_2_1;
  int v_68;
  int v_67_2;
  int v_67_1;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v_274;
  int v_273;
  int v_272;
  int v_271;
  int v_270;
  int v_269;
  int s_5_St_12_High_2_0;
  int s_5_St_12_High_2_1;
  int s_5_St_12_Eco_2_0;
  int s_5_St_12_Eco_2_1;
  int s_5_St_12_Frostprotection_2_0;
  int s_5_St_12_Frostprotection_2_1;
  int s_5_St_12_Off_2_0;
  int s_5_St_12_Off_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_5_St_12_High;
  int s_5_St_12_High_2;
  int s_5_St_12_High_1;
  int r_5_St_12_Eco;
  int s_5_St_12_Eco_2;
  int s_5_St_12_Eco_1;
  int r_5_St_12_Frostprotection;
  int s_5_St_12_Frostprotection_2;
  int s_5_St_12_Frostprotection_1;
  int r_5_St_12_Off;
  int s_5_St_12_Off_2;
  int s_5_St_12_Off_1;
  int ck_2;
  int ck_1;
  int s_5_2_0;
  int s_5_2_1;
  int ns_5_2_0;
  int ns_5_2_1;
  int s_5_2;
  int s_5_1;
  int ns_5_2;
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
  int presence_1;
  int occupied_1;
  int source_switch_1;
  int c_source1_1;
  int c_source2_1;
  int source_on_1;
  int source_switch;
  int c_source1;
  int c_source2;
  int source_on;
  int push_1;
  int c_door_2;
  int door_open_2;
  int push;
  int c_door_1;
  int door_open_1;
  int up1;
  int down1;
  int up2;
  int down2;
  int c_rad1;
  int c_rad2;
  int rad_power_1;
  int rad_state_1;
  int rule4;
  int rule3;
  int rule2;
  int rule1;
  int v;
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
  int c_tv2;
  int c_tv1;
  int c_light2;
  int c_light1;
  int rad_c2;
  int rad_c1;
  presence_1 = presence;
  source_switch_1 = tv_switch;
  source_switch = light_switch;
  push_1 = push_janela;
  c_door_2 = c_window;
  push = push_porta;
  c_door_1 = c_door;
  up1 = rad_up1;
  down1 = rad_down1;
  up2 = rad_up2;
  down2 = rad_down2;
  ck_1 = self->v_267;
  ck_2 = self->v_268;
  Controller_controller__controller_controller_step(c_window, c_door,
                                                    push_porta, push_janela,
                                                    rad_up1, rad_down1,
                                                    rad_up2, rad_down2,
                                                    presence, light_switch,
                                                    tv_switch, self->v_268,
                                                    self->v_267, self->pnr_5,
                                                    self->ck_9_1,
                                                    self->pnr_4,
                                                    self->ck_11_1,
                                                    self->pnr_3,
                                                    self->ck_13_1,
                                                    self->pnr_2,
                                                    self->ck_15_1,
                                                    self->pnr_1,
                                                    self->ck_17_1, self->pnr,
                                                    true, true, true, true,
                                                    true, true,
                                                    &Controller_controller__controller_controller_out_st);
  c_tv2 = Controller_controller__controller_controller_out_st.controller_c_tv2;
  c_tv1 = Controller_controller__controller_controller_out_st.controller_c_tv1;
  c_light2 = Controller_controller__controller_controller_out_st.controller_c_light2;
  c_light1 = Controller_controller__controller_controller_out_st.controller_c_light1;
  rad_c2 = Controller_controller__controller_controller_out_st.controller_rad_c2;
  rad_c1 = Controller_controller__controller_controller_out_st.controller_rad_c1;
  c_source1_1 = c_tv1;
  c_source2_1 = c_tv2;
  c_source1 = c_light1;
  c_source2 = c_light2;
  c_rad1 = rad_c1;
  c_rad2 = rad_c2;
  if (self->ck_17_1) {
    if (presence_1) {
      r_St_7_Empty = true;
      s_St_7_Empty_1 = false;
    } else {
      r_St_7_Empty = self->pnr;
      s_St_7_Empty_1 = true;
    };
    r = r_St_7_Empty;
    s_1_2 = s_St_7_Empty_1;
  } else {
    v_102 = !(presence_1);
    if (v_102) {
      r_St_7_Ocupied = true;
    } else {
      r_St_7_Ocupied = self->pnr;
    };
    r = r_St_7_Ocupied;
    if (v_102) {
      s_St_7_Ocupied_1 = true;
    } else {
      s_St_7_Ocupied_1 = false;
    };
    s_1_2 = s_St_7_Ocupied_1;
  };
  ck_18_1 = s_1_2;
  if (ck_18_1) {
    occupied_1_St_7_Empty = false;
    nr_St_7_Empty = false;
    ns_St_7_Empty_1 = true;
    occupied_1 = occupied_1_St_7_Empty;
    nr = nr_St_7_Empty;
    ns_1_2 = ns_St_7_Empty_1;
  } else {
    occupied_1_St_7_Ocupied = true;
    occupied_1 = occupied_1_St_7_Ocupied;
    nr_St_7_Ocupied = false;
    nr = nr_St_7_Ocupied;
    ns_St_7_Ocupied_1 = false;
    ns_1_2 = ns_St_7_Ocupied_1;
  };
  _out->occupied = occupied_1;
  v_59 = !(_out->occupied);
  if (self->ck_15_1) {
    v_99 = !(c_source2_1);
    v_100 = (source_switch_1&&v_99);
    v_101 = (v_100||c_source1_1);
    if (v_101) {
      r_1_St_8_Desligado = true;
      s_1_St_8_Desligado_1 = false;
    } else {
      r_1_St_8_Desligado = self->pnr_1;
      s_1_St_8_Desligado_1 = true;
    };
    r_1 = r_1_St_8_Desligado;
    s_1_1 = s_1_St_8_Desligado_1;
  } else {
    v_96 = !(c_source1_1);
    v_97 = (source_switch_1&&v_96);
    v_98 = (v_97||c_source2_1);
    if (v_98) {
      r_1_St_8_Ligado = true;
    } else {
      r_1_St_8_Ligado = self->pnr_1;
    };
    r_1 = r_1_St_8_Ligado;
    if (v_98) {
      s_1_St_8_Ligado_1 = true;
    } else {
      s_1_St_8_Ligado_1 = false;
    };
    s_1_1 = s_1_St_8_Ligado_1;
  };
  ck_16_1 = s_1_1;
  if (ck_16_1) {
    source_on_1_St_8_Desligado = false;
    nr_1_St_8_Desligado = false;
    ns_1_St_8_Desligado_1 = true;
    source_on_1 = source_on_1_St_8_Desligado;
    nr_1 = nr_1_St_8_Desligado;
    ns_1_1 = ns_1_St_8_Desligado_1;
  } else {
    source_on_1_St_8_Ligado = true;
    source_on_1 = source_on_1_St_8_Ligado;
    nr_1_St_8_Ligado = false;
    nr_1 = nr_1_St_8_Ligado;
    ns_1_St_8_Ligado_1 = false;
    ns_1_1 = ns_1_St_8_Ligado_1;
  };
  _out->tv_on = source_on_1;
  v_60 = (v_59||_out->tv_on);
  if (self->ck_13_1) {
    v_93 = !(c_source2);
    v_94 = (source_switch&&v_93);
    v_95 = (v_94||c_source1);
    if (v_95) {
      r_2_St_9_Desligado = true;
      s_2_St_9_Desligado_1 = false;
    } else {
      r_2_St_9_Desligado = self->pnr_2;
      s_2_St_9_Desligado_1 = true;
    };
    r_2 = r_2_St_9_Desligado;
    s_2_1 = s_2_St_9_Desligado_1;
  } else {
    v_90 = !(c_source1);
    v_91 = (source_switch&&v_90);
    v_92 = (v_91||c_source2);
    if (v_92) {
      r_2_St_9_Ligado = true;
    } else {
      r_2_St_9_Ligado = self->pnr_2;
    };
    r_2 = r_2_St_9_Ligado;
    if (v_92) {
      s_2_St_9_Ligado_1 = true;
    } else {
      s_2_St_9_Ligado_1 = false;
    };
    s_2_1 = s_2_St_9_Ligado_1;
  };
  ck_14_1 = s_2_1;
  if (ck_14_1) {
    source_on_St_9_Desligado = false;
    nr_2_St_9_Desligado = false;
    ns_2_St_9_Desligado_1 = true;
    source_on = source_on_St_9_Desligado;
    nr_2 = nr_2_St_9_Desligado;
    ns_2_1 = ns_2_St_9_Desligado_1;
  } else {
    source_on_St_9_Ligado = true;
    source_on = source_on_St_9_Ligado;
    nr_2_St_9_Ligado = false;
    nr_2 = nr_2_St_9_Ligado;
    ns_2_St_9_Ligado_1 = false;
    ns_2_1 = ns_2_St_9_Ligado_1;
  };
  _out->lamp_on = source_on;
  v = (_out->lamp_on||_out->tv_on);
  v_50 = !(v);
  rule1 = (v_60||_out->lamp_on);
  if (self->ck_11_1) {
    v_89 = (push_1&&c_door_2);
    if (v_89) {
      r_3_St_10_Closed = true;
      s_3_St_10_Closed_1 = false;
    } else {
      r_3_St_10_Closed = self->pnr_3;
      s_3_St_10_Closed_1 = true;
    };
    r_3 = r_3_St_10_Closed;
    s_3_1 = s_3_St_10_Closed_1;
  } else {
    v_87 = !(c_door_2);
    v_88 = (push_1||v_87);
    if (v_88) {
      r_3_St_10_Open = true;
    } else {
      r_3_St_10_Open = self->pnr_3;
    };
    r_3 = r_3_St_10_Open;
    if (v_88) {
      s_3_St_10_Open_1 = true;
    } else {
      s_3_St_10_Open_1 = false;
    };
    s_3_1 = s_3_St_10_Open_1;
  };
  ck_12_1 = s_3_1;
  if (ck_12_1) {
    door_open_2_St_10_Closed = false;
    nr_3_St_10_Closed = false;
    ns_3_St_10_Closed_1 = true;
    door_open_2 = door_open_2_St_10_Closed;
    nr_3 = nr_3_St_10_Closed;
    ns_3_1 = ns_3_St_10_Closed_1;
  } else {
    door_open_2_St_10_Open = true;
    door_open_2 = door_open_2_St_10_Open;
    nr_3_St_10_Open = false;
    nr_3 = nr_3_St_10_Open;
    ns_3_St_10_Open_1 = false;
    ns_3_1 = ns_3_St_10_Open_1;
  };
  _out->window_open = door_open_2;
  v_57 = !(_out->window_open);
  if (self->ck_9_1) {
    v_86 = (push&&c_door_1);
    if (v_86) {
      r_4_St_11_Closed = true;
      s_4_St_11_Closed_1 = false;
    } else {
      r_4_St_11_Closed = self->pnr_4;
      s_4_St_11_Closed_1 = true;
    };
    r_4 = r_4_St_11_Closed;
    s_4_1 = s_4_St_11_Closed_1;
  } else {
    v_84 = !(c_door_1);
    v_85 = (push||v_84);
    if (v_85) {
      r_4_St_11_Open = true;
    } else {
      r_4_St_11_Open = self->pnr_4;
    };
    r_4 = r_4_St_11_Open;
    if (v_85) {
      s_4_St_11_Open_1 = true;
    } else {
      s_4_St_11_Open_1 = false;
    };
    s_4_1 = s_4_St_11_Open_1;
  };
  ck_10_1 = s_4_1;
  if (ck_10_1) {
    door_open_1_St_11_Closed = false;
    nr_4_St_11_Closed = false;
    ns_4_St_11_Closed_1 = true;
    door_open_1 = door_open_1_St_11_Closed;
    nr_4 = nr_4_St_11_Closed;
    ns_4_1 = ns_4_St_11_Closed_1;
  } else {
    door_open_1_St_11_Open = true;
    door_open_1 = door_open_1_St_11_Open;
    nr_4_St_11_Open = false;
    nr_4 = nr_4_St_11_Open;
    ns_4_St_11_Open_1 = false;
    ns_4_1 = ns_4_St_11_Open_1;
  };
  _out->door_open = door_open_1;
  v_53 = (_out->door_open||_out->window_open);
  v_54 = !(v_53);
  v_56 = !(_out->door_open);
  v_58 = (v_56&&v_57);
  rule2 = (_out->occupied||v_58);
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_71 = (up2&&c_rad2);
      if (v_71) {
        v_73 = true;
        v_72_1 = false;
        v_72_2 = true;
      } else {
        v_73 = self->pnr_5;
        v_72_1 = true;
        v_72_2 = true;
      };
      v_69 = !(c_rad1);
      v_70 = (down1||v_69);
      if (v_70) {
        r_5_St_12_Eco = true;
      } else {
        r_5_St_12_Eco = v_73;
      };
      v_273 = r_5_St_12_Eco;
      if (v_70) {
        s_5_St_12_Eco_1 = true;
      } else {
        s_5_St_12_Eco_1 = v_72_1;
      };
      v_269 = s_5_St_12_Eco_1;
      if (v_70) {
        s_5_St_12_Eco_2 = false;
      } else {
        s_5_St_12_Eco_2 = v_72_2;
      };
      v_270 = s_5_St_12_Eco_2;
      if (v_72_1) {
        v_72_2_1 = v_72_2;
      } else {
        v_72_2_0 = v_72_2;
      };
      if (s_5_St_12_Eco_1) {
        s_5_St_12_Eco_2_1 = s_5_St_12_Eco_2;
      } else {
        s_5_St_12_Eco_2_0 = s_5_St_12_Eco_2;
      };
    } else {
      v_76 = !(c_rad1);
      v_77 = (down1||v_76);
      if (v_77) {
        v_79 = true;
        v_78_1 = false;
        v_78_2 = false;
      } else {
        v_79 = self->pnr_5;
        v_78_1 = true;
        v_78_2 = false;
      };
      v_75 = (up2&&c_rad2);
      if (v_75) {
        v_81 = true;
        v_80_1 = false;
        v_80_2 = true;
      } else {
        v_81 = v_79;
        v_80_1 = v_78_1;
        v_80_2 = v_78_2;
      };
      v_74 = (up1&&c_rad1);
      if (v_74) {
        r_5_St_12_Frostprotection = true;
        s_5_St_12_Frostprotection_1 = true;
        s_5_St_12_Frostprotection_2 = true;
      } else {
        r_5_St_12_Frostprotection = v_81;
        s_5_St_12_Frostprotection_1 = v_80_1;
        s_5_St_12_Frostprotection_2 = v_80_2;
      };
      v_273 = r_5_St_12_Frostprotection;
      v_269 = s_5_St_12_Frostprotection_1;
      v_270 = s_5_St_12_Frostprotection_2;
      if (v_78_1) {
        v_78_2_1 = v_78_2;
      } else {
        v_78_2_0 = v_78_2;
      };
      if (v_80_1) {
        v_80_2_1 = v_80_2;
      } else {
        v_80_2_0 = v_80_2;
      };
      if (s_5_St_12_Frostprotection_1) {
        s_5_St_12_Frostprotection_2_1 = s_5_St_12_Frostprotection_2;
      } else {
        s_5_St_12_Frostprotection_2_0 = s_5_St_12_Frostprotection_2;
      };
    };
    s_5_1 = v_269;
    s_5_2 = v_270;
    r_5 = v_273;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_65 = !(c_rad2);
      v_66 = (down2||v_65);
      if (v_66) {
        v_68 = true;
        v_67_1 = true;
        v_67_2 = false;
      } else {
        v_68 = self->pnr_5;
        v_67_1 = false;
        v_67_2 = true;
      };
      v_63 = !(c_rad1);
      v_64 = (down1||v_63);
      if (v_64) {
        r_5_St_12_High = true;
      } else {
        r_5_St_12_High = v_68;
      };
      v_274 = r_5_St_12_High;
      if (v_64) {
        s_5_St_12_High_1 = true;
      } else {
        s_5_St_12_High_1 = v_67_1;
      };
      v_271 = s_5_St_12_High_1;
      if (v_64) {
        s_5_St_12_High_2 = true;
      } else {
        s_5_St_12_High_2 = v_67_2;
      };
      v_272 = s_5_St_12_High_2;
    } else {
      v_82 = !(c_rad1);
      v_83 = (up1||v_82);
      if (v_83) {
        r_5_St_12_Off = true;
        s_5_St_12_Off_1 = true;
        s_5_St_12_Off_2 = false;
      } else {
        r_5_St_12_Off = self->pnr_5;
        s_5_St_12_Off_1 = false;
        s_5_St_12_Off_2 = false;
      };
      v_274 = r_5_St_12_Off;
      v_271 = s_5_St_12_Off_1;
      v_272 = s_5_St_12_Off_2;
    };
    s_5_1 = v_271;
    s_5_2 = v_272;
    r_5 = v_274;
  };
  ck_8_1 = s_5_1;
  ck_8_2 = s_5_2;
  if (ck_8_1) {
    ck_8_2_1 = ck_8_2;
    if (ck_8_2_1) {
      rad_power_1_St_12_Eco = 1500;
      v_257 = rad_power_1_St_12_Eco;
      rad_state_1_St_12_Eco = 2;
      v_259 = rad_state_1_St_12_Eco;
      nr_5_St_12_Eco = false;
      v_265 = nr_5_St_12_Eco;
      ns_5_St_12_Eco_1 = true;
      v_261 = ns_5_St_12_Eco_1;
      ns_5_St_12_Eco_2 = true;
      v_262 = ns_5_St_12_Eco_2;
      if (ns_5_St_12_Eco_1) {
        ns_5_St_12_Eco_2_1 = ns_5_St_12_Eco_2;
      } else {
        ns_5_St_12_Eco_2_0 = ns_5_St_12_Eco_2;
      };
    } else {
      rad_power_1_St_12_Frostprotection = 300;
      rad_state_1_St_12_Frostprotection = 1;
      nr_5_St_12_Frostprotection = false;
      ns_5_St_12_Frostprotection_1 = true;
      ns_5_St_12_Frostprotection_2 = false;
      v_257 = rad_power_1_St_12_Frostprotection;
      v_259 = rad_state_1_St_12_Frostprotection;
      v_265 = nr_5_St_12_Frostprotection;
      v_261 = ns_5_St_12_Frostprotection_1;
      v_262 = ns_5_St_12_Frostprotection_2;
      if (ns_5_St_12_Frostprotection_1) {
        ns_5_St_12_Frostprotection_2_1 = ns_5_St_12_Frostprotection_2;
      } else {
        ns_5_St_12_Frostprotection_2_0 = ns_5_St_12_Frostprotection_2;
      };
    };
    rad_power_1 = v_257;
    rad_state_1 = v_259;
    ns_5_1 = v_261;
    ns_5_2 = v_262;
    nr_5 = v_265;
  } else {
    ck_8_2_0 = ck_8_2;
    if (ck_8_2_0) {
      rad_power_1_St_12_High = 2000;
      v_258 = rad_power_1_St_12_High;
      rad_state_1_St_12_High = 3;
      v_260 = rad_state_1_St_12_High;
      nr_5_St_12_High = false;
      v_266 = nr_5_St_12_High;
      ns_5_St_12_High_1 = false;
      v_263 = ns_5_St_12_High_1;
      ns_5_St_12_High_2 = true;
      v_264 = ns_5_St_12_High_2;
    } else {
      rad_power_1_St_12_Off = 0;
      rad_state_1_St_12_Off = 0;
      nr_5_St_12_Off = false;
      ns_5_St_12_Off_1 = false;
      ns_5_St_12_Off_2 = false;
      v_258 = rad_power_1_St_12_Off;
      v_260 = rad_state_1_St_12_Off;
      v_266 = nr_5_St_12_Off;
      v_263 = ns_5_St_12_Off_1;
      v_264 = ns_5_St_12_Off_2;
    };
    rad_power_1 = v_258;
    rad_state_1 = v_260;
    ns_5_1 = v_263;
    ns_5_2 = v_264;
    nr_5 = v_266;
  };
  _out->rad_state = rad_state_1;
  v_51 = (_out->rad_state<=1);
  v_52 = (v_50&&v_51);
  rule4 = (_out->occupied||v_52);
  v_55 = (_out->rad_state<=1);
  rule3 = (v_54||v_55);
  v_61 = (rule1&&rule3);
  v_62 = (v_61&&rule4);
  _out->rad_power = rad_power_1;
  if (ns_5_1) {
    ns_5_2_1 = ns_5_2;
  } else {
    ns_5_2_0 = ns_5_2;
  };
  if (!(ck_8_1)) {
    if (ck_8_2_0) {
      if (ns_5_St_12_High_1) {
        ns_5_St_12_High_2_1 = ns_5_St_12_High_2;
      } else {
        ns_5_St_12_High_2_0 = ns_5_St_12_High_2;
      };
    } else {
      if (ns_5_St_12_Off_1) {
        ns_5_St_12_Off_2_1 = ns_5_St_12_Off_2;
      } else {
        ns_5_St_12_Off_2_0 = ns_5_St_12_Off_2;
      };
    };
  };
  if (s_5_1) {
    s_5_2_1 = s_5_2;
  } else {
    s_5_2_0 = s_5_2;
  };
  if (!(ck_1)) {
    if (ck_2_0) {
      if (v_67_1) {
        v_67_2_1 = v_67_2;
      } else {
        v_67_2_0 = v_67_2;
      };
      if (s_5_St_12_High_1) {
        s_5_St_12_High_2_1 = s_5_St_12_High_2;
      } else {
        s_5_St_12_High_2_0 = s_5_St_12_High_2;
      };
    } else {
      if (s_5_St_12_Off_1) {
        s_5_St_12_Off_2_1 = s_5_St_12_Off_2;
      } else {
        s_5_St_12_Off_2_0 = s_5_St_12_Off_2;
      };
    };
  };
  self->pnr = nr;
  self->ck_17_1 = ns_1_2;
  self->pnr_1 = nr_1;
  self->ck_15_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->ck_13_1 = ns_2_1;
  self->pnr_3 = nr_3;
  self->ck_11_1 = ns_3_1;
  self->pnr_4 = nr_4;
  self->ck_9_1 = ns_4_1;
  self->pnr_5 = nr_5;
  self->v_267 = ns_5_1;
  self->v_268 = ns_5_2;;
}

