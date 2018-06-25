/* --- Generated the 25/6/2018 at 10:48 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
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

void System__light_source_reset(System__light_source_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__light_source_step(int source_switch, int c_source1,
                               int c_source2, System__light_source_out* _out,
                               System__light_source_mem* self) {
  
  int nr_St_1_Ligado;
  int ns_St_1_Ligado_1;
  int source_on_St_1_Ligado;
  int nr_St_1_Desligado;
  int ns_St_1_Desligado_1;
  int source_on_St_1_Desligado;
  int ck_2_1;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int r_St_1_Ligado;
  int s_St_1_Ligado_1;
  int r_St_1_Desligado;
  int s_St_1_Desligado_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_3 = !(c_source2);
    v_4 = (source_switch&&v_3);
    v_5 = (v_4||c_source1);
    if (v_5) {
      r_St_1_Desligado = true;
      s_St_1_Desligado_1 = false;
    } else {
      r_St_1_Desligado = self->pnr;
      s_St_1_Desligado_1 = true;
    };
    r = r_St_1_Desligado;
    s_1 = s_St_1_Desligado_1;
  } else {
    v = !(c_source1);
    v_1 = (source_switch&&v);
    v_2 = (v_1||c_source2);
    if (v_2) {
      r_St_1_Ligado = true;
    } else {
      r_St_1_Ligado = self->pnr;
    };
    r = r_St_1_Ligado;
    if (v_2) {
      s_St_1_Ligado_1 = true;
    } else {
      s_St_1_Ligado_1 = false;
    };
    s_1 = s_St_1_Ligado_1;
  };
  ck_2_1 = s_1;
  if (ck_2_1) {
    source_on_St_1_Desligado = false;
    nr_St_1_Desligado = false;
    ns_St_1_Desligado_1 = true;
    _out->source_on = source_on_St_1_Desligado;
    nr = nr_St_1_Desligado;
    ns_1 = ns_St_1_Desligado_1;
  } else {
    source_on_St_1_Ligado = true;
    _out->source_on = source_on_St_1_Ligado;
    nr_St_1_Ligado = false;
    nr = nr_St_1_Ligado;
    ns_St_1_Ligado_1 = false;
    ns_1 = ns_St_1_Ligado_1;
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
    v_6 = (push||v);
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
  self->v_141 = false;
  self->v_142 = false;
}

void System__rad_step(int up1, int down1, int up2, int down2, int c_rad1,
                      int c_rad2, System__rad_out* _out,
                      System__rad_mem* self) {
  
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
  int ns_St_3_High_2_0;
  int ns_St_3_High_2_1;
  int ns_St_3_Eco_2_0;
  int ns_St_3_Eco_2_1;
  int ns_St_3_Frostprotection_2_0;
  int ns_St_3_Frostprotection_2_1;
  int ns_St_3_Off_2_0;
  int ns_St_3_Off_2_1;
  int ck_4_2_0;
  int ck_4_2_1;
  int nr_St_3_High;
  int ns_St_3_High_2;
  int ns_St_3_High_1;
  int rad_state_St_3_High;
  int rad_power_St_3_High;
  int nr_St_3_Eco;
  int ns_St_3_Eco_2;
  int ns_St_3_Eco_1;
  int rad_state_St_3_Eco;
  int rad_power_St_3_Eco;
  int nr_St_3_Frostprotection;
  int ns_St_3_Frostprotection_2;
  int ns_St_3_Frostprotection_1;
  int rad_state_St_3_Frostprotection;
  int rad_power_St_3_Frostprotection;
  int nr_St_3_Off;
  int ns_St_3_Off_2;
  int ns_St_3_Off_1;
  int rad_state_St_3_Off;
  int rad_power_St_3_Off;
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
  int v_148;
  int v_147;
  int v_146;
  int v_145;
  int v_144;
  int v_143;
  int s_St_3_High_2_0;
  int s_St_3_High_2_1;
  int s_St_3_Eco_2_0;
  int s_St_3_Eco_2_1;
  int s_St_3_Frostprotection_2_0;
  int s_St_3_Frostprotection_2_1;
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
  int r_St_3_Frostprotection;
  int s_St_3_Frostprotection_2;
  int s_St_3_Frostprotection_1;
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
  ck_1 = self->v_141;
  ck_2 = self->v_142;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_15 = (up2&&c_rad2);
      if (v_15) {
        v_17 = true;
        v_16_1 = false;
        v_16_2 = true;
      } else {
        v_17 = self->pnr;
        v_16_1 = true;
        v_16_2 = true;
      };
      v_13 = !(c_rad1);
      v_14 = (down1||v_13);
      if (v_14) {
        r_St_3_Eco = true;
      } else {
        r_St_3_Eco = v_17;
      };
      v_147 = r_St_3_Eco;
      if (v_14) {
        s_St_3_Eco_1 = true;
      } else {
        s_St_3_Eco_1 = v_16_1;
      };
      v_143 = s_St_3_Eco_1;
      if (v_14) {
        s_St_3_Eco_2 = false;
      } else {
        s_St_3_Eco_2 = v_16_2;
      };
      v_144 = s_St_3_Eco_2;
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
      v_20 = !(c_rad1);
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
      v_19 = (up2&&c_rad2);
      if (v_19) {
        v_25 = true;
        v_24_1 = false;
        v_24_2 = true;
      } else {
        v_25 = v_23;
        v_24_1 = v_22_1;
        v_24_2 = v_22_2;
      };
      v_18 = (up1&&c_rad1);
      if (v_18) {
        r_St_3_Frostprotection = true;
        s_St_3_Frostprotection_1 = true;
        s_St_3_Frostprotection_2 = true;
      } else {
        r_St_3_Frostprotection = v_25;
        s_St_3_Frostprotection_1 = v_24_1;
        s_St_3_Frostprotection_2 = v_24_2;
      };
      v_147 = r_St_3_Frostprotection;
      v_143 = s_St_3_Frostprotection_1;
      v_144 = s_St_3_Frostprotection_2;
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
      if (s_St_3_Frostprotection_1) {
        s_St_3_Frostprotection_2_1 = s_St_3_Frostprotection_2;
      } else {
        s_St_3_Frostprotection_2_0 = s_St_3_Frostprotection_2;
      };
    };
    s_1 = v_143;
    s_2 = v_144;
    r = v_147;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_9 = !(c_rad2);
      v_10 = (down2||v_9);
      if (v_10) {
        v_12 = true;
        v_11_1 = true;
        v_11_2 = false;
      } else {
        v_12 = self->pnr;
        v_11_1 = false;
        v_11_2 = true;
      };
      v = !(c_rad1);
      v_8 = (down1||v);
      if (v_8) {
        r_St_3_High = true;
      } else {
        r_St_3_High = v_12;
      };
      v_148 = r_St_3_High;
      if (v_8) {
        s_St_3_High_1 = true;
      } else {
        s_St_3_High_1 = v_11_1;
      };
      v_145 = s_St_3_High_1;
      if (v_8) {
        s_St_3_High_2 = true;
      } else {
        s_St_3_High_2 = v_11_2;
      };
      v_146 = s_St_3_High_2;
    } else {
      v_26 = !(c_rad1);
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
      v_148 = r_St_3_Off;
      v_145 = s_St_3_Off_1;
      v_146 = s_St_3_Off_2;
    };
    s_1 = v_145;
    s_2 = v_146;
    r = v_148;
  };
  ck_4_1 = s_1;
  ck_4_2 = s_2;
  if (ck_4_1) {
    ck_4_2_1 = ck_4_2;
    if (ck_4_2_1) {
      rad_power_St_3_Eco = 1500;
      v_131 = rad_power_St_3_Eco;
      rad_state_St_3_Eco = 2;
      v_133 = rad_state_St_3_Eco;
      nr_St_3_Eco = false;
      v_139 = nr_St_3_Eco;
      ns_St_3_Eco_1 = true;
      v_135 = ns_St_3_Eco_1;
      ns_St_3_Eco_2 = true;
      v_136 = ns_St_3_Eco_2;
      if (ns_St_3_Eco_1) {
        ns_St_3_Eco_2_1 = ns_St_3_Eco_2;
      } else {
        ns_St_3_Eco_2_0 = ns_St_3_Eco_2;
      };
    } else {
      rad_power_St_3_Frostprotection = 300;
      rad_state_St_3_Frostprotection = 1;
      nr_St_3_Frostprotection = false;
      ns_St_3_Frostprotection_1 = true;
      ns_St_3_Frostprotection_2 = false;
      v_131 = rad_power_St_3_Frostprotection;
      v_133 = rad_state_St_3_Frostprotection;
      v_139 = nr_St_3_Frostprotection;
      v_135 = ns_St_3_Frostprotection_1;
      v_136 = ns_St_3_Frostprotection_2;
      if (ns_St_3_Frostprotection_1) {
        ns_St_3_Frostprotection_2_1 = ns_St_3_Frostprotection_2;
      } else {
        ns_St_3_Frostprotection_2_0 = ns_St_3_Frostprotection_2;
      };
    };
    _out->rad_power = v_131;
    _out->rad_state = v_133;
    ns_1 = v_135;
    ns_2 = v_136;
    nr = v_139;
  } else {
    ck_4_2_0 = ck_4_2;
    if (ck_4_2_0) {
      rad_power_St_3_High = 2000;
      v_132 = rad_power_St_3_High;
      rad_state_St_3_High = 3;
      v_134 = rad_state_St_3_High;
      nr_St_3_High = false;
      v_140 = nr_St_3_High;
      ns_St_3_High_1 = false;
      v_137 = ns_St_3_High_1;
      ns_St_3_High_2 = true;
      v_138 = ns_St_3_High_2;
    } else {
      rad_power_St_3_Off = 0;
      rad_state_St_3_Off = 0;
      nr_St_3_Off = false;
      ns_St_3_Off_1 = false;
      ns_St_3_Off_2 = false;
      v_132 = rad_power_St_3_Off;
      v_134 = rad_state_St_3_Off;
      v_140 = nr_St_3_Off;
      v_137 = ns_St_3_Off_1;
      v_138 = ns_St_3_Off_2;
    };
    _out->rad_power = v_132;
    _out->rad_state = v_134;
    ns_1 = v_137;
    ns_2 = v_138;
    nr = v_140;
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
  self->v_141 = ns_1;
  self->v_142 = ns_2;;
}

void System__washing_machine_reset(System__washing_machine_mem* self) {
  self->pnr = false;
  self->v_185 = true;
  self->v_186 = true;
  self->v_187 = true;
}

void System__washing_machine_step(int start, int finish, int c_wash,
                                  System__washing_machine_out* _out,
                                  System__washing_machine_mem* self) {
  
  int v_184;
  int v_183;
  int v_182;
  int v_181;
  int v_180;
  int v_179;
  int v_178;
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
  int v_153;
  int v_152;
  int v_151;
  int v_150;
  int v_149;
  int ns_St_4_Standby_2_0;
  int ns_St_4_Standby_3_0_0;
  int ns_St_4_Standby_3_0_1;
  int ns_St_4_Standby_2_1;
  int ns_St_4_Standby_3_1_0;
  int ns_St_4_Standby_3_1_1;
  int ns_St_4_Spin_2_0;
  int ns_St_4_Spin_3_0_0;
  int ns_St_4_Spin_3_0_1;
  int ns_St_4_Spin_2_1;
  int ns_St_4_Spin_3_1_0;
  int ns_St_4_Spin_3_1_1;
  int ns_St_4_Rinse_2_0;
  int ns_St_4_Rinse_3_0_0;
  int ns_St_4_Rinse_3_0_1;
  int ns_St_4_Rinse_2_1;
  int ns_St_4_Rinse_3_1_0;
  int ns_St_4_Rinse_3_1_1;
  int ns_St_4_Washing_2_0;
  int ns_St_4_Washing_3_0_0;
  int ns_St_4_Washing_3_0_1;
  int ns_St_4_Washing_2_1;
  int ns_St_4_Washing_3_1_0;
  int ns_St_4_Washing_3_1_1;
  int ns_St_4_Water_fill_2_0;
  int ns_St_4_Water_fill_3_0_0;
  int ns_St_4_Water_fill_3_0_1;
  int ns_St_4_Water_fill_2_1;
  int ns_St_4_Water_fill_3_1_0;
  int ns_St_4_Water_fill_3_1_1;
  int ns_St_4_Off_2_0;
  int ns_St_4_Off_3_0_0;
  int ns_St_4_Off_3_0_1;
  int ns_St_4_Off_2_1;
  int ns_St_4_Off_3_1_0;
  int ns_St_4_Off_3_1_1;
  int ck_5_2_0;
  int ck_5_3_0_0;
  int ck_5_3_0_1;
  int ck_5_2_1;
  int ck_5_3_1_0;
  int ck_5_3_1_1;
  int nr_St_4_Standby;
  int ns_St_4_Standby_3;
  int ns_St_4_Standby_2;
  int ns_St_4_Standby_1;
  int wash_state_St_4_Standby;
  int wash_power_St_4_Standby;
  int nr_St_4_Spin;
  int ns_St_4_Spin_3;
  int ns_St_4_Spin_2;
  int ns_St_4_Spin_1;
  int wash_state_St_4_Spin;
  int wash_power_St_4_Spin;
  int nr_St_4_Rinse;
  int ns_St_4_Rinse_3;
  int ns_St_4_Rinse_2;
  int ns_St_4_Rinse_1;
  int wash_state_St_4_Rinse;
  int wash_power_St_4_Rinse;
  int nr_St_4_Washing;
  int ns_St_4_Washing_3;
  int ns_St_4_Washing_2;
  int ns_St_4_Washing_1;
  int wash_state_St_4_Washing;
  int wash_power_St_4_Washing;
  int nr_St_4_Water_fill;
  int ns_St_4_Water_fill_3;
  int ns_St_4_Water_fill_2;
  int ns_St_4_Water_fill_1;
  int wash_state_St_4_Water_fill;
  int wash_power_St_4_Water_fill;
  int nr_St_4_Off;
  int ns_St_4_Off_3;
  int ns_St_4_Off_2;
  int ns_St_4_Off_1;
  int wash_state_St_4_Off;
  int wash_power_St_4_Off;
  int ck_5_3;
  int ck_5_2;
  int ck_5_1;
  int v_30_2_0;
  int v_30_3_0_0;
  int v_30_3_0_1;
  int v_30_2_1;
  int v_30_3_1_0;
  int v_30_3_1_1;
  int v_31;
  int v_30_3;
  int v_30_2;
  int v_30_1;
  int v_29;
  int v_28;
  int v;
  int v_211;
  int v_210;
  int v_209;
  int v_208;
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
  int s_St_4_Standby_2_0;
  int s_St_4_Standby_3_0_0;
  int s_St_4_Standby_3_0_1;
  int s_St_4_Standby_2_1;
  int s_St_4_Standby_3_1_0;
  int s_St_4_Standby_3_1_1;
  int s_St_4_Spin_2_0;
  int s_St_4_Spin_3_0_0;
  int s_St_4_Spin_3_0_1;
  int s_St_4_Spin_2_1;
  int s_St_4_Spin_3_1_0;
  int s_St_4_Spin_3_1_1;
  int s_St_4_Rinse_2_0;
  int s_St_4_Rinse_3_0_0;
  int s_St_4_Rinse_3_0_1;
  int s_St_4_Rinse_2_1;
  int s_St_4_Rinse_3_1_0;
  int s_St_4_Rinse_3_1_1;
  int s_St_4_Washing_2_0;
  int s_St_4_Washing_3_0_0;
  int s_St_4_Washing_3_0_1;
  int s_St_4_Washing_2_1;
  int s_St_4_Washing_3_1_0;
  int s_St_4_Washing_3_1_1;
  int s_St_4_Water_fill_2_0;
  int s_St_4_Water_fill_3_0_0;
  int s_St_4_Water_fill_3_0_1;
  int s_St_4_Water_fill_2_1;
  int s_St_4_Water_fill_3_1_0;
  int s_St_4_Water_fill_3_1_1;
  int s_St_4_Off_2_0;
  int s_St_4_Off_3_0_0;
  int s_St_4_Off_3_0_1;
  int s_St_4_Off_2_1;
  int s_St_4_Off_3_1_0;
  int s_St_4_Off_3_1_1;
  int ck_2_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_St_4_Standby;
  int s_St_4_Standby_3;
  int s_St_4_Standby_2;
  int s_St_4_Standby_1;
  int r_St_4_Spin;
  int s_St_4_Spin_3;
  int s_St_4_Spin_2;
  int s_St_4_Spin_1;
  int r_St_4_Rinse;
  int s_St_4_Rinse_3;
  int s_St_4_Rinse_2;
  int s_St_4_Rinse_1;
  int r_St_4_Washing;
  int s_St_4_Washing_3;
  int s_St_4_Washing_2;
  int s_St_4_Washing_1;
  int r_St_4_Water_fill;
  int s_St_4_Water_fill_3;
  int s_St_4_Water_fill_2;
  int s_St_4_Water_fill_1;
  int r_St_4_Off;
  int s_St_4_Off_3;
  int s_St_4_Off_2;
  int s_St_4_Off_1;
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
  ck_1 = self->v_185;
  ck_2 = self->v_186;
  ck_3 = self->v_187;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (start) {
          r_St_4_Off = true;
          s_St_4_Off_1 = false;
          s_St_4_Off_2 = false;
          s_St_4_Off_3 = false;
        } else {
          r_St_4_Off = self->pnr;
          s_St_4_Off_1 = true;
          s_St_4_Off_2 = true;
          s_St_4_Off_3 = true;
        };
        v_206 = r_St_4_Off;
        v_188 = s_St_4_Off_1;
        v_189 = s_St_4_Off_2;
        v_190 = s_St_4_Off_3;
        if (s_St_4_Off_1) {
          s_St_4_Off_2_1 = s_St_4_Off_2;
          if (s_St_4_Off_2_1) {
            s_St_4_Off_3_1_1 = s_St_4_Off_3;
          } else {
            s_St_4_Off_3_1_0 = s_St_4_Off_3;
          };
        } else {
          s_St_4_Off_2_0 = s_St_4_Off_2;
          if (s_St_4_Off_2_0) {
            s_St_4_Off_3_0_1 = s_St_4_Off_3;
          } else {
            s_St_4_Off_3_0_0 = s_St_4_Off_3;
          };
        };
      } else {
        if (finish) {
          r_St_4_Rinse = true;
        } else {
          r_St_4_Rinse = self->pnr;
        };
        v_206 = r_St_4_Rinse;
        if (finish) {
          s_St_4_Rinse_1 = true;
        } else {
          s_St_4_Rinse_1 = true;
        };
        v_188 = s_St_4_Rinse_1;
        if (finish) {
          s_St_4_Rinse_2 = false;
        } else {
          s_St_4_Rinse_2 = true;
        };
        v_189 = s_St_4_Rinse_2;
        if (finish) {
          s_St_4_Rinse_3 = false;
        } else {
          s_St_4_Rinse_3 = false;
        };
        v_190 = s_St_4_Rinse_3;
        if (s_St_4_Rinse_1) {
          s_St_4_Rinse_2_1 = s_St_4_Rinse_2;
          if (s_St_4_Rinse_2_1) {
            s_St_4_Rinse_3_1_1 = s_St_4_Rinse_3;
          } else {
            s_St_4_Rinse_3_1_0 = s_St_4_Rinse_3;
          };
        } else {
          s_St_4_Rinse_2_0 = s_St_4_Rinse_2;
          if (s_St_4_Rinse_2_0) {
            s_St_4_Rinse_3_0_1 = s_St_4_Rinse_3;
          } else {
            s_St_4_Rinse_3_0_0 = s_St_4_Rinse_3;
          };
        };
      };
      v_200 = v_188;
      v_201 = v_189;
      v_202 = v_190;
      v_208 = v_206;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_207 = true;
        v_191 = true;
        v_192 = true;
        v_193 = true;
      } else {
        if (finish) {
          r_St_4_Spin = true;
        } else {
          r_St_4_Spin = self->pnr;
        };
        v_207 = r_St_4_Spin;
        if (finish) {
          s_St_4_Spin_1 = true;
        } else {
          s_St_4_Spin_1 = true;
        };
        v_191 = s_St_4_Spin_1;
        if (finish) {
          s_St_4_Spin_2 = true;
        } else {
          s_St_4_Spin_2 = false;
        };
        v_192 = s_St_4_Spin_2;
        if (finish) {
          s_St_4_Spin_3 = true;
        } else {
          s_St_4_Spin_3 = false;
        };
        v_193 = s_St_4_Spin_3;
      };
      v_200 = v_191;
      v_201 = v_192;
      v_202 = v_193;
      v_208 = v_207;
      if (!(ck_3_1_0)) {
        if (s_St_4_Spin_1) {
          s_St_4_Spin_2_1 = s_St_4_Spin_2;
          if (s_St_4_Spin_2_1) {
            s_St_4_Spin_3_1_1 = s_St_4_Spin_3;
          } else {
            s_St_4_Spin_3_1_0 = s_St_4_Spin_3;
          };
        } else {
          s_St_4_Spin_2_0 = s_St_4_Spin_2;
          if (s_St_4_Spin_2_0) {
            s_St_4_Spin_3_0_1 = s_St_4_Spin_3;
          } else {
            s_St_4_Spin_3_0_0 = s_St_4_Spin_3;
          };
        };
      };
    };
    s_1 = v_200;
    s_2 = v_201;
    s_3 = v_202;
    r = v_208;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      if (ck_3_0_1) {
        if (c_wash) {
          r_St_4_Standby = true;
        } else {
          r_St_4_Standby = self->pnr;
        };
        v_209 = r_St_4_Standby;
        if (c_wash) {
          s_St_4_Standby_1 = false;
        } else {
          s_St_4_Standby_1 = false;
        };
        v_194 = s_St_4_Standby_1;
        if (c_wash) {
          s_St_4_Standby_2 = true;
        } else {
          s_St_4_Standby_2 = true;
        };
        v_195 = s_St_4_Standby_2;
        if (c_wash) {
          s_St_4_Standby_3 = false;
        } else {
          s_St_4_Standby_3 = true;
        };
        v_196 = s_St_4_Standby_3;
      } else {
        if (finish) {
          r_St_4_Washing = true;
          s_St_4_Washing_1 = true;
          s_St_4_Washing_2 = true;
          s_St_4_Washing_3 = false;
        } else {
          r_St_4_Washing = self->pnr;
          s_St_4_Washing_1 = false;
          s_St_4_Washing_2 = true;
          s_St_4_Washing_3 = false;
        };
        v_209 = r_St_4_Washing;
        v_194 = s_St_4_Washing_1;
        v_195 = s_St_4_Washing_2;
        v_196 = s_St_4_Washing_3;
      };
      v_203 = v_194;
      v_204 = v_195;
      v_205 = v_196;
      v_211 = v_209;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_210 = true;
        v_197 = true;
        v_198 = true;
        v_199 = true;
      } else {
        v_29 = (finish&&c_wash);
        if (v_29) {
          v_31 = true;
          v_30_1 = false;
          v_30_2 = true;
          v_30_3 = false;
        } else {
          v_31 = self->pnr;
          v_30_1 = false;
          v_30_2 = false;
          v_30_3 = false;
        };
        v = !(c_wash);
        v_28 = (finish&&v);
        if (v_28) {
          r_St_4_Water_fill = true;
        } else {
          r_St_4_Water_fill = v_31;
        };
        v_210 = r_St_4_Water_fill;
        if (v_28) {
          s_St_4_Water_fill_1 = false;
        } else {
          s_St_4_Water_fill_1 = v_30_1;
        };
        v_197 = s_St_4_Water_fill_1;
        if (v_28) {
          s_St_4_Water_fill_2 = true;
        } else {
          s_St_4_Water_fill_2 = v_30_2;
        };
        v_198 = s_St_4_Water_fill_2;
        if (v_28) {
          s_St_4_Water_fill_3 = true;
        } else {
          s_St_4_Water_fill_3 = v_30_3;
        };
        v_199 = s_St_4_Water_fill_3;
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
        if (s_St_4_Water_fill_1) {
          s_St_4_Water_fill_2_1 = s_St_4_Water_fill_2;
          if (s_St_4_Water_fill_2_1) {
            s_St_4_Water_fill_3_1_1 = s_St_4_Water_fill_3;
          } else {
            s_St_4_Water_fill_3_1_0 = s_St_4_Water_fill_3;
          };
        } else {
          s_St_4_Water_fill_2_0 = s_St_4_Water_fill_2;
          if (s_St_4_Water_fill_2_0) {
            s_St_4_Water_fill_3_0_1 = s_St_4_Water_fill_3;
          } else {
            s_St_4_Water_fill_3_0_0 = s_St_4_Water_fill_3;
          };
        };
      };
      v_203 = v_197;
      v_204 = v_198;
      v_205 = v_199;
      v_211 = v_210;
    };
    s_1 = v_203;
    s_2 = v_204;
    s_3 = v_205;
    r = v_211;
  };
  ck_5_1 = s_1;
  ck_5_2 = s_2;
  ck_5_3 = s_3;
  if (ck_5_1) {
    ck_5_2_1 = ck_5_2;
    if (ck_5_2_1) {
      ck_5_3_1_1 = ck_5_3;
      if (ck_5_3_1_1) {
        wash_power_St_4_Off = 0;
        wash_state_St_4_Off = 0;
        nr_St_4_Off = false;
        ns_St_4_Off_1 = true;
        ns_St_4_Off_2 = true;
        ns_St_4_Off_3 = true;
        v_149 = wash_power_St_4_Off;
        v_155 = wash_state_St_4_Off;
        v_179 = nr_St_4_Off;
        v_161 = ns_St_4_Off_1;
        v_162 = ns_St_4_Off_2;
        v_163 = ns_St_4_Off_3;
        if (ns_St_4_Off_1) {
          ns_St_4_Off_2_1 = ns_St_4_Off_2;
          if (ns_St_4_Off_2_1) {
            ns_St_4_Off_3_1_1 = ns_St_4_Off_3;
          } else {
            ns_St_4_Off_3_1_0 = ns_St_4_Off_3;
          };
        } else {
          ns_St_4_Off_2_0 = ns_St_4_Off_2;
          if (ns_St_4_Off_2_0) {
            ns_St_4_Off_3_0_1 = ns_St_4_Off_3;
          } else {
            ns_St_4_Off_3_0_0 = ns_St_4_Off_3;
          };
        };
      } else {
        wash_power_St_4_Rinse = 200;
        v_149 = wash_power_St_4_Rinse;
        wash_state_St_4_Rinse = 3;
        v_155 = wash_state_St_4_Rinse;
        nr_St_4_Rinse = false;
        v_179 = nr_St_4_Rinse;
        ns_St_4_Rinse_1 = true;
        v_161 = ns_St_4_Rinse_1;
        ns_St_4_Rinse_2 = true;
        v_162 = ns_St_4_Rinse_2;
        ns_St_4_Rinse_3 = false;
        v_163 = ns_St_4_Rinse_3;
        if (ns_St_4_Rinse_1) {
          ns_St_4_Rinse_2_1 = ns_St_4_Rinse_2;
          if (ns_St_4_Rinse_2_1) {
            ns_St_4_Rinse_3_1_1 = ns_St_4_Rinse_3;
          } else {
            ns_St_4_Rinse_3_1_0 = ns_St_4_Rinse_3;
          };
        } else {
          ns_St_4_Rinse_2_0 = ns_St_4_Rinse_2;
          if (ns_St_4_Rinse_2_0) {
            ns_St_4_Rinse_3_0_1 = ns_St_4_Rinse_3;
          } else {
            ns_St_4_Rinse_3_0_0 = ns_St_4_Rinse_3;
          };
        };
      };
      v_151 = v_149;
      v_157 = v_155;
      v_173 = v_161;
      v_174 = v_162;
      v_175 = v_163;
      v_181 = v_179;
    } else {
      ck_5_3_1_0 = ck_5_3;
      if (ck_5_3_1_0) {
        v_150 = 0;
        v_156 = 0;
        v_180 = true;
        v_164 = true;
        v_165 = true;
        v_166 = true;
      } else {
        wash_power_St_4_Spin = 800;
        v_150 = wash_power_St_4_Spin;
        wash_state_St_4_Spin = 4;
        v_156 = wash_state_St_4_Spin;
        nr_St_4_Spin = false;
        v_180 = nr_St_4_Spin;
        ns_St_4_Spin_1 = true;
        v_164 = ns_St_4_Spin_1;
        ns_St_4_Spin_2 = false;
        v_165 = ns_St_4_Spin_2;
        ns_St_4_Spin_3 = false;
        v_166 = ns_St_4_Spin_3;
      };
      v_151 = v_150;
      v_157 = v_156;
      v_173 = v_164;
      v_174 = v_165;
      v_175 = v_166;
      v_181 = v_180;
      if (!(ck_5_3_1_0)) {
        if (ns_St_4_Spin_1) {
          ns_St_4_Spin_2_1 = ns_St_4_Spin_2;
          if (ns_St_4_Spin_2_1) {
            ns_St_4_Spin_3_1_1 = ns_St_4_Spin_3;
          } else {
            ns_St_4_Spin_3_1_0 = ns_St_4_Spin_3;
          };
        } else {
          ns_St_4_Spin_2_0 = ns_St_4_Spin_2;
          if (ns_St_4_Spin_2_0) {
            ns_St_4_Spin_3_0_1 = ns_St_4_Spin_3;
          } else {
            ns_St_4_Spin_3_0_0 = ns_St_4_Spin_3;
          };
        };
      };
    };
    _out->wash_power = v_151;
    _out->wash_state = v_157;
    ns_1 = v_173;
    ns_2 = v_174;
    ns_3 = v_175;
    nr = v_181;
  } else {
    ck_5_2_0 = ck_5_2;
    if (ck_5_2_0) {
      ck_5_3_0_1 = ck_5_3;
      if (ck_5_3_0_1) {
        wash_power_St_4_Standby = 0;
        v_152 = wash_power_St_4_Standby;
        wash_state_St_4_Standby = 5;
        v_158 = wash_state_St_4_Standby;
        nr_St_4_Standby = false;
        v_182 = nr_St_4_Standby;
        ns_St_4_Standby_1 = false;
        v_167 = ns_St_4_Standby_1;
        ns_St_4_Standby_2 = true;
        v_168 = ns_St_4_Standby_2;
        ns_St_4_Standby_3 = true;
        v_169 = ns_St_4_Standby_3;
      } else {
        wash_power_St_4_Washing = 250;
        wash_state_St_4_Washing = 2;
        nr_St_4_Washing = false;
        ns_St_4_Washing_1 = false;
        ns_St_4_Washing_2 = true;
        ns_St_4_Washing_3 = false;
        v_152 = wash_power_St_4_Washing;
        v_158 = wash_state_St_4_Washing;
        v_182 = nr_St_4_Washing;
        v_167 = ns_St_4_Washing_1;
        v_168 = ns_St_4_Washing_2;
        v_169 = ns_St_4_Washing_3;
      };
      v_154 = v_152;
      v_160 = v_158;
      v_176 = v_167;
      v_177 = v_168;
      v_178 = v_169;
      v_184 = v_182;
    } else {
      ck_5_3_0_0 = ck_5_3;
      if (ck_5_3_0_0) {
        v_153 = 0;
        v_159 = 0;
        v_183 = true;
        v_170 = true;
        v_171 = true;
        v_172 = true;
      } else {
        wash_power_St_4_Water_fill = 15;
        v_153 = wash_power_St_4_Water_fill;
        wash_state_St_4_Water_fill = 1;
        v_159 = wash_state_St_4_Water_fill;
        nr_St_4_Water_fill = false;
        v_183 = nr_St_4_Water_fill;
        ns_St_4_Water_fill_1 = false;
        v_170 = ns_St_4_Water_fill_1;
        ns_St_4_Water_fill_2 = false;
        v_171 = ns_St_4_Water_fill_2;
        ns_St_4_Water_fill_3 = false;
        v_172 = ns_St_4_Water_fill_3;
        if (ns_St_4_Water_fill_1) {
          ns_St_4_Water_fill_2_1 = ns_St_4_Water_fill_2;
          if (ns_St_4_Water_fill_2_1) {
            ns_St_4_Water_fill_3_1_1 = ns_St_4_Water_fill_3;
          } else {
            ns_St_4_Water_fill_3_1_0 = ns_St_4_Water_fill_3;
          };
        } else {
          ns_St_4_Water_fill_2_0 = ns_St_4_Water_fill_2;
          if (ns_St_4_Water_fill_2_0) {
            ns_St_4_Water_fill_3_0_1 = ns_St_4_Water_fill_3;
          } else {
            ns_St_4_Water_fill_3_0_0 = ns_St_4_Water_fill_3;
          };
        };
      };
      v_154 = v_153;
      v_160 = v_159;
      v_176 = v_170;
      v_177 = v_171;
      v_178 = v_172;
      v_184 = v_183;
    };
    _out->wash_power = v_154;
    _out->wash_state = v_160;
    ns_1 = v_176;
    ns_2 = v_177;
    ns_3 = v_178;
    nr = v_184;
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
  if (!(ck_5_1)) {
    if (ck_5_2_0) {
      if (ck_5_3_0_1) {
        if (ns_St_4_Standby_1) {
          ns_St_4_Standby_2_1 = ns_St_4_Standby_2;
          if (ns_St_4_Standby_2_1) {
            ns_St_4_Standby_3_1_1 = ns_St_4_Standby_3;
          } else {
            ns_St_4_Standby_3_1_0 = ns_St_4_Standby_3;
          };
        } else {
          ns_St_4_Standby_2_0 = ns_St_4_Standby_2;
          if (ns_St_4_Standby_2_0) {
            ns_St_4_Standby_3_0_1 = ns_St_4_Standby_3;
          } else {
            ns_St_4_Standby_3_0_0 = ns_St_4_Standby_3;
          };
        };
      } else {
        if (ns_St_4_Washing_1) {
          ns_St_4_Washing_2_1 = ns_St_4_Washing_2;
          if (ns_St_4_Washing_2_1) {
            ns_St_4_Washing_3_1_1 = ns_St_4_Washing_3;
          } else {
            ns_St_4_Washing_3_1_0 = ns_St_4_Washing_3;
          };
        } else {
          ns_St_4_Washing_2_0 = ns_St_4_Washing_2;
          if (ns_St_4_Washing_2_0) {
            ns_St_4_Washing_3_0_1 = ns_St_4_Washing_3;
          } else {
            ns_St_4_Washing_3_0_0 = ns_St_4_Washing_3;
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
        if (s_St_4_Standby_1) {
          s_St_4_Standby_2_1 = s_St_4_Standby_2;
          if (s_St_4_Standby_2_1) {
            s_St_4_Standby_3_1_1 = s_St_4_Standby_3;
          } else {
            s_St_4_Standby_3_1_0 = s_St_4_Standby_3;
          };
        } else {
          s_St_4_Standby_2_0 = s_St_4_Standby_2;
          if (s_St_4_Standby_2_0) {
            s_St_4_Standby_3_0_1 = s_St_4_Standby_3;
          } else {
            s_St_4_Standby_3_0_0 = s_St_4_Standby_3;
          };
        };
      } else {
        if (s_St_4_Washing_1) {
          s_St_4_Washing_2_1 = s_St_4_Washing_2;
          if (s_St_4_Washing_2_1) {
            s_St_4_Washing_3_1_1 = s_St_4_Washing_3;
          } else {
            s_St_4_Washing_3_1_0 = s_St_4_Washing_3;
          };
        } else {
          s_St_4_Washing_2_0 = s_St_4_Washing_2;
          if (s_St_4_Washing_2_0) {
            s_St_4_Washing_3_0_1 = s_St_4_Washing_3;
          } else {
            s_St_4_Washing_3_0_0 = s_St_4_Washing_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_185 = ns_1;
  self->v_186 = ns_2;
  self->v_187 = ns_3;;
}

void System__oven_reset(System__oven_mem* self) {
  self->pnr = false;
  self->v_242 = true;
  self->v_243 = false;
  self->v_244 = false;
}

void System__oven_step(int start, int finish, int temp_ok, int cold,
                       int c_oven, System__oven_out* _out,
                       System__oven_mem* self) {
  
  int v_241;
  int v_240;
  int v_239;
  int v_238;
  int v_237;
  int v_236;
  int v_235;
  int v_234;
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
  int ns_St_5_Standby_2_0;
  int ns_St_5_Standby_3_0_0;
  int ns_St_5_Standby_3_0_1;
  int ns_St_5_Standby_2_1;
  int ns_St_5_Standby_3_1_0;
  int ns_St_5_Standby_3_1_1;
  int ns_St_5_Reheat_2_0;
  int ns_St_5_Reheat_3_0_0;
  int ns_St_5_Reheat_3_0_1;
  int ns_St_5_Reheat_2_1;
  int ns_St_5_Reheat_3_1_0;
  int ns_St_5_Reheat_3_1_1;
  int ns_St_5_Maintain_2_0;
  int ns_St_5_Maintain_3_0_0;
  int ns_St_5_Maintain_3_0_1;
  int ns_St_5_Maintain_2_1;
  int ns_St_5_Maintain_3_1_0;
  int ns_St_5_Maintain_3_1_1;
  int ns_St_5_Heat_2_0;
  int ns_St_5_Heat_3_0_0;
  int ns_St_5_Heat_3_0_1;
  int ns_St_5_Heat_2_1;
  int ns_St_5_Heat_3_1_0;
  int ns_St_5_Heat_3_1_1;
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
  int oven_state_St_5_Standby;
  int oven_power_St_5_Standby;
  int nr_St_5_Reheat;
  int ns_St_5_Reheat_3;
  int ns_St_5_Reheat_2;
  int ns_St_5_Reheat_1;
  int oven_state_St_5_Reheat;
  int oven_power_St_5_Reheat;
  int nr_St_5_Maintain;
  int ns_St_5_Maintain_3;
  int ns_St_5_Maintain_2;
  int ns_St_5_Maintain_1;
  int oven_state_St_5_Maintain;
  int oven_power_St_5_Maintain;
  int nr_St_5_Heat;
  int ns_St_5_Heat_3;
  int ns_St_5_Heat_2;
  int ns_St_5_Heat_1;
  int oven_state_St_5_Heat;
  int oven_power_St_5_Heat;
  int nr_St_5_Off;
  int ns_St_5_Off_3;
  int ns_St_5_Off_2;
  int ns_St_5_Off_1;
  int oven_state_St_5_Off;
  int oven_power_St_5_Off;
  int ck_6_3;
  int ck_6_2;
  int ck_6_1;
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
  int v_39;
  int v_38;
  int v_36_2_0;
  int v_36_3_0_0;
  int v_36_3_0_1;
  int v_36_2_1;
  int v_36_3_1_0;
  int v_36_3_1_1;
  int v_37;
  int v_36_3;
  int v_36_2;
  int v_36_1;
  int v_34_2_0;
  int v_34_3_0_0;
  int v_34_3_0_1;
  int v_34_2_1;
  int v_34_3_1_0;
  int v_34_3_1_1;
  int v_35;
  int v_34_3;
  int v_34_2;
  int v_34_1;
  int v_33;
  int v_2_0;
  int v_3_0_0;
  int v_3_0_1;
  int v_2_1;
  int v_3_1_0;
  int v_3_1_1;
  int v_32;
  int v_3;
  int v_2;
  int v_1;
  int v_264;
  int v_263;
  int v_262;
  int v_261;
  int v_260;
  int v_259;
  int v_258;
  int v_257;
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
  int s_St_5_Standby_2_0;
  int s_St_5_Standby_3_0_0;
  int s_St_5_Standby_3_0_1;
  int s_St_5_Standby_2_1;
  int s_St_5_Standby_3_1_0;
  int s_St_5_Standby_3_1_1;
  int s_St_5_Reheat_2_0;
  int s_St_5_Reheat_3_0_0;
  int s_St_5_Reheat_3_0_1;
  int s_St_5_Reheat_2_1;
  int s_St_5_Reheat_3_1_0;
  int s_St_5_Reheat_3_1_1;
  int s_St_5_Maintain_2_0;
  int s_St_5_Maintain_3_0_0;
  int s_St_5_Maintain_3_0_1;
  int s_St_5_Maintain_2_1;
  int s_St_5_Maintain_3_1_0;
  int s_St_5_Maintain_3_1_1;
  int s_St_5_Heat_2_0;
  int s_St_5_Heat_3_0_0;
  int s_St_5_Heat_3_0_1;
  int s_St_5_Heat_2_1;
  int s_St_5_Heat_3_1_0;
  int s_St_5_Heat_3_1_1;
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
  int r_St_5_Reheat;
  int s_St_5_Reheat_3;
  int s_St_5_Reheat_2;
  int s_St_5_Reheat_1;
  int r_St_5_Maintain;
  int s_St_5_Maintain_3;
  int s_St_5_Maintain_2;
  int s_St_5_Maintain_1;
  int r_St_5_Heat;
  int s_St_5_Heat_3;
  int s_St_5_Heat_2;
  int s_St_5_Heat_1;
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
  ck_1 = self->v_242;
  ck_2 = self->v_243;
  ck_3 = self->v_244;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (finish) {
          v_37 = true;
        } else {
          v_37 = self->pnr;
        };
        if (temp_ok) {
          r_St_5_Heat = true;
        } else {
          r_St_5_Heat = v_37;
        };
        if (finish) {
          v_36_1 = true;
        } else {
          v_36_1 = true;
        };
        if (temp_ok) {
          s_St_5_Heat_1 = true;
        } else {
          s_St_5_Heat_1 = v_36_1;
        };
        if (finish) {
          v_36_2 = false;
        } else {
          v_36_2 = true;
        };
        if (temp_ok) {
          s_St_5_Heat_2 = true;
        } else {
          s_St_5_Heat_2 = v_36_2;
        };
        if (finish) {
          v_36_3 = false;
        } else {
          v_36_3 = true;
        };
        if (temp_ok) {
          s_St_5_Heat_3 = false;
        } else {
          s_St_5_Heat_3 = v_36_3;
        };
        v_260 = r_St_5_Heat;
        v_245 = s_St_5_Heat_1;
        v_246 = s_St_5_Heat_2;
        v_247 = s_St_5_Heat_3;
      } else {
        if (finish) {
          v_35 = true;
          v_34_1 = true;
          v_34_2 = false;
          v_34_3 = false;
        } else {
          v_35 = self->pnr;
          v_34_1 = true;
          v_34_2 = true;
          v_34_3 = false;
        };
        v_33 = (cold&&c_oven);
        if (v_33) {
          r_St_5_Maintain = true;
        } else {
          r_St_5_Maintain = v_35;
        };
        v_260 = r_St_5_Maintain;
        if (v_33) {
          s_St_5_Maintain_1 = false;
        } else {
          s_St_5_Maintain_1 = v_34_1;
        };
        v_245 = s_St_5_Maintain_1;
        if (v_33) {
          s_St_5_Maintain_2 = false;
        } else {
          s_St_5_Maintain_2 = v_34_2;
        };
        v_246 = s_St_5_Maintain_2;
        if (v_33) {
          s_St_5_Maintain_3 = true;
        } else {
          s_St_5_Maintain_3 = v_34_3;
        };
        v_247 = s_St_5_Maintain_3;
      };
      v_254 = v_245;
      v_255 = v_246;
      v_256 = v_247;
      v_262 = v_260;
      if (ck_3_1_1) {
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
        if (s_St_5_Heat_1) {
          s_St_5_Heat_2_1 = s_St_5_Heat_2;
          if (s_St_5_Heat_2_1) {
            s_St_5_Heat_3_1_1 = s_St_5_Heat_3;
          } else {
            s_St_5_Heat_3_1_0 = s_St_5_Heat_3;
          };
        } else {
          s_St_5_Heat_2_0 = s_St_5_Heat_2;
          if (s_St_5_Heat_2_0) {
            s_St_5_Heat_3_0_1 = s_St_5_Heat_3;
          } else {
            s_St_5_Heat_3_0_0 = s_St_5_Heat_3;
          };
        };
      } else {
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
        if (s_St_5_Maintain_1) {
          s_St_5_Maintain_2_1 = s_St_5_Maintain_2;
          if (s_St_5_Maintain_2_1) {
            s_St_5_Maintain_3_1_1 = s_St_5_Maintain_3;
          } else {
            s_St_5_Maintain_3_1_0 = s_St_5_Maintain_3;
          };
        } else {
          s_St_5_Maintain_2_0 = s_St_5_Maintain_2;
          if (s_St_5_Maintain_2_0) {
            s_St_5_Maintain_3_0_1 = s_St_5_Maintain_3;
          } else {
            s_St_5_Maintain_3_0_0 = s_St_5_Maintain_3;
          };
        };
      };
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_261 = true;
        v_248 = true;
        v_249 = true;
        v_250 = true;
      } else {
        v_39 = !(c_oven);
        v_40 = (start&&v_39);
        if (v_40) {
          v_42 = true;
          v_41_1 = false;
          v_41_2 = false;
          v_41_3 = false;
        } else {
          v_42 = self->pnr;
          v_41_1 = true;
          v_41_2 = false;
          v_41_3 = false;
        };
        v_38 = (start&&c_oven);
        if (v_38) {
          r_St_5_Off = true;
        } else {
          r_St_5_Off = v_42;
        };
        v_261 = r_St_5_Off;
        if (v_38) {
          s_St_5_Off_1 = true;
        } else {
          s_St_5_Off_1 = v_41_1;
        };
        v_248 = s_St_5_Off_1;
        if (v_38) {
          s_St_5_Off_2 = true;
        } else {
          s_St_5_Off_2 = v_41_2;
        };
        v_249 = s_St_5_Off_2;
        if (v_38) {
          s_St_5_Off_3 = true;
        } else {
          s_St_5_Off_3 = v_41_3;
        };
        v_250 = s_St_5_Off_3;
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
      v_254 = v_248;
      v_255 = v_249;
      v_256 = v_250;
      v_262 = v_261;
    };
    s_1 = v_254;
    s_2 = v_255;
    s_3 = v_256;
    r = v_262;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      v_257 = true;
      v_258 = true;
      v_259 = true;
      v_264 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        if (finish) {
          v_32 = true;
        } else {
          v_32 = self->pnr;
        };
        if (temp_ok) {
          r_St_5_Reheat = true;
        } else {
          r_St_5_Reheat = v_32;
        };
        if (finish) {
          v_1 = true;
        } else {
          v_1 = false;
        };
        if (temp_ok) {
          s_St_5_Reheat_1 = true;
        } else {
          s_St_5_Reheat_1 = v_1;
        };
        if (finish) {
          v_2 = false;
        } else {
          v_2 = false;
        };
        if (temp_ok) {
          s_St_5_Reheat_2 = true;
        } else {
          s_St_5_Reheat_2 = v_2;
        };
        if (finish) {
          v_3 = false;
        } else {
          v_3 = true;
        };
        if (temp_ok) {
          s_St_5_Reheat_3 = false;
        } else {
          s_St_5_Reheat_3 = v_3;
        };
        v_263 = r_St_5_Reheat;
        v_251 = s_St_5_Reheat_1;
        v_252 = s_St_5_Reheat_2;
        v_253 = s_St_5_Reheat_3;
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
          r_St_5_Standby = true;
        } else {
          r_St_5_Standby = self->pnr;
        };
        v_263 = r_St_5_Standby;
        if (c_oven) {
          s_St_5_Standby_1 = true;
        } else {
          s_St_5_Standby_1 = false;
        };
        v_251 = s_St_5_Standby_1;
        if (c_oven) {
          s_St_5_Standby_2 = true;
        } else {
          s_St_5_Standby_2 = false;
        };
        v_252 = s_St_5_Standby_2;
        if (c_oven) {
          s_St_5_Standby_3 = true;
        } else {
          s_St_5_Standby_3 = false;
        };
        v_253 = s_St_5_Standby_3;
      };
      v_257 = v_251;
      v_258 = v_252;
      v_259 = v_253;
      v_264 = v_263;
    };
    s_1 = v_257;
    s_2 = v_258;
    s_3 = v_259;
    r = v_264;
  };
  ck_6_1 = s_1;
  ck_6_2 = s_2;
  ck_6_3 = s_3;
  if (ck_6_1) {
    ck_6_2_1 = ck_6_2;
    if (ck_6_2_1) {
      ck_6_3_1_1 = ck_6_3;
      if (ck_6_3_1_1) {
        oven_power_St_5_Heat = 1500;
        oven_state_St_5_Heat = 1;
        nr_St_5_Heat = false;
        ns_St_5_Heat_1 = true;
        ns_St_5_Heat_2 = true;
        ns_St_5_Heat_3 = true;
        v_212 = oven_power_St_5_Heat;
        v_217 = oven_state_St_5_Heat;
        v_237 = nr_St_5_Heat;
        v_222 = ns_St_5_Heat_1;
        v_223 = ns_St_5_Heat_2;
        v_224 = ns_St_5_Heat_3;
      } else {
        oven_power_St_5_Maintain = 300;
        v_212 = oven_power_St_5_Maintain;
        oven_state_St_5_Maintain = 2;
        v_217 = oven_state_St_5_Maintain;
        nr_St_5_Maintain = false;
        v_237 = nr_St_5_Maintain;
        ns_St_5_Maintain_1 = true;
        v_222 = ns_St_5_Maintain_1;
        ns_St_5_Maintain_2 = true;
        v_223 = ns_St_5_Maintain_2;
        ns_St_5_Maintain_3 = false;
        v_224 = ns_St_5_Maintain_3;
      };
      v_214 = v_212;
      v_219 = v_217;
      v_231 = v_222;
      v_232 = v_223;
      v_233 = v_224;
      v_239 = v_237;
      if (ck_6_3_1_1) {
        if (ns_St_5_Heat_1) {
          ns_St_5_Heat_2_1 = ns_St_5_Heat_2;
          if (ns_St_5_Heat_2_1) {
            ns_St_5_Heat_3_1_1 = ns_St_5_Heat_3;
          } else {
            ns_St_5_Heat_3_1_0 = ns_St_5_Heat_3;
          };
        } else {
          ns_St_5_Heat_2_0 = ns_St_5_Heat_2;
          if (ns_St_5_Heat_2_0) {
            ns_St_5_Heat_3_0_1 = ns_St_5_Heat_3;
          } else {
            ns_St_5_Heat_3_0_0 = ns_St_5_Heat_3;
          };
        };
      } else {
        if (ns_St_5_Maintain_1) {
          ns_St_5_Maintain_2_1 = ns_St_5_Maintain_2;
          if (ns_St_5_Maintain_2_1) {
            ns_St_5_Maintain_3_1_1 = ns_St_5_Maintain_3;
          } else {
            ns_St_5_Maintain_3_1_0 = ns_St_5_Maintain_3;
          };
        } else {
          ns_St_5_Maintain_2_0 = ns_St_5_Maintain_2;
          if (ns_St_5_Maintain_2_0) {
            ns_St_5_Maintain_3_0_1 = ns_St_5_Maintain_3;
          } else {
            ns_St_5_Maintain_3_0_0 = ns_St_5_Maintain_3;
          };
        };
      };
    } else {
      ck_6_3_1_0 = ck_6_3;
      if (ck_6_3_1_0) {
        v_213 = 0;
        v_218 = 0;
        v_238 = true;
        v_225 = true;
        v_226 = true;
        v_227 = true;
      } else {
        oven_power_St_5_Off = 0;
        v_213 = oven_power_St_5_Off;
        oven_state_St_5_Off = 0;
        v_218 = oven_state_St_5_Off;
        nr_St_5_Off = false;
        v_238 = nr_St_5_Off;
        ns_St_5_Off_1 = true;
        v_225 = ns_St_5_Off_1;
        ns_St_5_Off_2 = false;
        v_226 = ns_St_5_Off_2;
        ns_St_5_Off_3 = false;
        v_227 = ns_St_5_Off_3;
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
      v_214 = v_213;
      v_219 = v_218;
      v_231 = v_225;
      v_232 = v_226;
      v_233 = v_227;
      v_239 = v_238;
    };
    _out->oven_power = v_214;
    _out->oven_state = v_219;
    ns_1 = v_231;
    ns_2 = v_232;
    ns_3 = v_233;
    nr = v_239;
  } else {
    ck_6_2_0 = ck_6_2;
    if (ck_6_2_0) {
      ck_6_3_0_1 = ck_6_3;
      v_216 = 0;
      v_221 = 0;
      v_234 = true;
      v_235 = true;
      v_236 = true;
      v_241 = true;
    } else {
      ck_6_3_0_0 = ck_6_3;
      if (ck_6_3_0_0) {
        oven_power_St_5_Reheat = 1000;
        oven_state_St_5_Reheat = 3;
        nr_St_5_Reheat = false;
        ns_St_5_Reheat_1 = false;
        ns_St_5_Reheat_2 = false;
        ns_St_5_Reheat_3 = true;
        v_215 = oven_power_St_5_Reheat;
        v_220 = oven_state_St_5_Reheat;
        v_240 = nr_St_5_Reheat;
        v_228 = ns_St_5_Reheat_1;
        v_229 = ns_St_5_Reheat_2;
        v_230 = ns_St_5_Reheat_3;
      } else {
        oven_power_St_5_Standby = 0;
        v_215 = oven_power_St_5_Standby;
        oven_state_St_5_Standby = 4;
        v_220 = oven_state_St_5_Standby;
        nr_St_5_Standby = false;
        v_240 = nr_St_5_Standby;
        ns_St_5_Standby_1 = false;
        v_228 = ns_St_5_Standby_1;
        ns_St_5_Standby_2 = false;
        v_229 = ns_St_5_Standby_2;
        ns_St_5_Standby_3 = false;
        v_230 = ns_St_5_Standby_3;
      };
      v_216 = v_215;
      v_221 = v_220;
      v_234 = v_228;
      v_235 = v_229;
      v_236 = v_230;
      v_241 = v_240;
    };
    _out->oven_power = v_216;
    _out->oven_state = v_221;
    ns_1 = v_234;
    ns_2 = v_235;
    ns_3 = v_236;
    nr = v_241;
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
    if (!(ck_6_2_0)) {
      if (ck_6_3_0_0) {
        if (ns_St_5_Reheat_1) {
          ns_St_5_Reheat_2_1 = ns_St_5_Reheat_2;
          if (ns_St_5_Reheat_2_1) {
            ns_St_5_Reheat_3_1_1 = ns_St_5_Reheat_3;
          } else {
            ns_St_5_Reheat_3_1_0 = ns_St_5_Reheat_3;
          };
        } else {
          ns_St_5_Reheat_2_0 = ns_St_5_Reheat_2;
          if (ns_St_5_Reheat_2_0) {
            ns_St_5_Reheat_3_0_1 = ns_St_5_Reheat_3;
          } else {
            ns_St_5_Reheat_3_0_0 = ns_St_5_Reheat_3;
          };
        };
      } else {
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
        if (s_St_5_Reheat_1) {
          s_St_5_Reheat_2_1 = s_St_5_Reheat_2;
          if (s_St_5_Reheat_2_1) {
            s_St_5_Reheat_3_1_1 = s_St_5_Reheat_3;
          } else {
            s_St_5_Reheat_3_1_0 = s_St_5_Reheat_3;
          };
        } else {
          s_St_5_Reheat_2_0 = s_St_5_Reheat_2;
          if (s_St_5_Reheat_2_0) {
            s_St_5_Reheat_3_0_1 = s_St_5_Reheat_3;
          } else {
            s_St_5_Reheat_3_0_0 = s_St_5_Reheat_3;
          };
        };
      } else {
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
      };
    };
  };
  self->pnr = nr;
  self->v_242 = ns_1;
  self->v_243 = ns_2;
  self->v_244 = ns_3;;
}

void System__management_policy_reset(System__management_policy_mem* self) {
  self->pnr = false;
  self->v_275 = false;
  self->v_276 = false;
}

void System__management_policy_step(int eco_input, int comfort_input,
                                    System__management_policy_out* _out,
                                    System__management_policy_mem* self) {
  
  int v_274;
  int v_273;
  int v_272;
  int v_271;
  int v_270;
  int v_269;
  int v_268;
  int v_267;
  int v_266;
  int v_265;
  int ns_St_6_Comfort_2_0;
  int ns_St_6_Comfort_2_1;
  int mode_St_6_Comfort_2_0;
  int mode_St_6_Comfort_2_1;
  int ns_St_6_Eco_2_0;
  int ns_St_6_Eco_2_1;
  int mode_St_6_Eco_2_0;
  int mode_St_6_Eco_2_1;
  int ns_St_6_Minimal_safety_2_0;
  int ns_St_6_Minimal_safety_2_1;
  int mode_St_6_Minimal_safety_2_0;
  int mode_St_6_Minimal_safety_2_1;
  int ck_7_2_0;
  int ck_7_2_1;
  int nr_St_6_Comfort;
  int ns_St_6_Comfort_2;
  int ns_St_6_Comfort_1;
  int mode_St_6_Comfort_2;
  int mode_St_6_Comfort_1;
  int nr_St_6_Eco;
  int ns_St_6_Eco_2;
  int ns_St_6_Eco_1;
  int mode_St_6_Eco_2;
  int mode_St_6_Eco_1;
  int nr_St_6_Minimal_safety;
  int ns_St_6_Minimal_safety_2;
  int ns_St_6_Minimal_safety_1;
  int mode_St_6_Minimal_safety_2;
  int mode_St_6_Minimal_safety_1;
  int ck_7_2;
  int ck_7_1;
  int v_46_2_0;
  int v_46_2_1;
  int v_47;
  int v_46_2;
  int v_46_1;
  int v_44_2_0;
  int v_44_2_1;
  int v_45;
  int v_44_2;
  int v_44_1;
  int v_2_0;
  int v_2_1;
  int v_43;
  int v_2;
  int v_1;
  int v_282;
  int v_281;
  int v_280;
  int v_279;
  int v_278;
  int v_277;
  int s_St_6_Comfort_2_0;
  int s_St_6_Comfort_2_1;
  int s_St_6_Eco_2_0;
  int s_St_6_Eco_2_1;
  int s_St_6_Minimal_safety_2_0;
  int s_St_6_Minimal_safety_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_6_Comfort;
  int s_St_6_Comfort_2;
  int s_St_6_Comfort_1;
  int r_St_6_Eco;
  int s_St_6_Eco_2;
  int s_St_6_Eco_1;
  int r_St_6_Minimal_safety;
  int s_St_6_Minimal_safety_2;
  int s_St_6_Minimal_safety_1;
  int ck_2;
  int ck_1;
  int mode_2_0;
  int mode_2_1;
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
  ck_1 = self->v_275;
  ck_2 = self->v_276;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      if (comfort_input) {
        v_43 = true;
      } else {
        v_43 = self->pnr;
      };
      if (eco_input) {
        r_St_6_Comfort = true;
      } else {
        r_St_6_Comfort = v_43;
      };
      v_281 = r_St_6_Comfort;
      if (comfort_input) {
        v_1 = false;
      } else {
        v_1 = true;
      };
      if (eco_input) {
        s_St_6_Comfort_1 = true;
      } else {
        s_St_6_Comfort_1 = v_1;
      };
      v_277 = s_St_6_Comfort_1;
      if (comfort_input) {
        v_2 = false;
      } else {
        v_2 = true;
      };
      if (eco_input) {
        s_St_6_Comfort_2 = false;
      } else {
        s_St_6_Comfort_2 = v_2;
      };
      v_278 = s_St_6_Comfort_2;
    } else {
      if (comfort_input) {
        v_45 = true;
      } else {
        v_45 = self->pnr;
      };
      if (eco_input) {
        r_St_6_Eco = true;
      } else {
        r_St_6_Eco = v_45;
      };
      if (comfort_input) {
        v_44_1 = true;
      } else {
        v_44_1 = true;
      };
      if (eco_input) {
        s_St_6_Eco_1 = false;
      } else {
        s_St_6_Eco_1 = v_44_1;
      };
      if (comfort_input) {
        v_44_2 = true;
      } else {
        v_44_2 = false;
      };
      if (eco_input) {
        s_St_6_Eco_2 = false;
      } else {
        s_St_6_Eco_2 = v_44_2;
      };
      v_281 = r_St_6_Eco;
      v_277 = s_St_6_Eco_1;
      v_278 = s_St_6_Eco_2;
    };
    s_1 = v_277;
    s_2 = v_278;
    r = v_281;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_282 = true;
      v_279 = true;
      v_280 = true;
    } else {
      if (comfort_input) {
        v_47 = true;
      } else {
        v_47 = self->pnr;
      };
      if (eco_input) {
        r_St_6_Minimal_safety = true;
      } else {
        r_St_6_Minimal_safety = v_47;
      };
      v_282 = r_St_6_Minimal_safety;
      if (comfort_input) {
        v_46_1 = true;
      } else {
        v_46_1 = false;
      };
      if (eco_input) {
        s_St_6_Minimal_safety_1 = true;
      } else {
        s_St_6_Minimal_safety_1 = v_46_1;
      };
      v_279 = s_St_6_Minimal_safety_1;
      if (comfort_input) {
        v_46_2 = true;
      } else {
        v_46_2 = false;
      };
      if (eco_input) {
        s_St_6_Minimal_safety_2 = false;
      } else {
        s_St_6_Minimal_safety_2 = v_46_2;
      };
      v_280 = s_St_6_Minimal_safety_2;
      if (v_46_1) {
        v_46_2_1 = v_46_2;
      } else {
        v_46_2_0 = v_46_2;
      };
      if (s_St_6_Minimal_safety_1) {
        s_St_6_Minimal_safety_2_1 = s_St_6_Minimal_safety_2;
      } else {
        s_St_6_Minimal_safety_2_0 = s_St_6_Minimal_safety_2;
      };
    };
    s_1 = v_279;
    s_2 = v_280;
    r = v_282;
  };
  ck_7_1 = s_1;
  ck_7_2 = s_2;
  if (ck_7_1) {
    ck_7_2_1 = ck_7_2;
    if (ck_7_2_1) {
      mode_St_6_Comfort_1 = true;
      v_265 = mode_St_6_Comfort_1;
      mode_St_6_Comfort_2 = true;
      v_266 = mode_St_6_Comfort_2;
      nr_St_6_Comfort = false;
      v_273 = nr_St_6_Comfort;
      ns_St_6_Comfort_1 = true;
      v_269 = ns_St_6_Comfort_1;
      ns_St_6_Comfort_2 = true;
      v_270 = ns_St_6_Comfort_2;
    } else {
      mode_St_6_Eco_1 = true;
      mode_St_6_Eco_2 = false;
      nr_St_6_Eco = false;
      ns_St_6_Eco_1 = true;
      ns_St_6_Eco_2 = false;
      v_265 = mode_St_6_Eco_1;
      v_266 = mode_St_6_Eco_2;
      v_273 = nr_St_6_Eco;
      v_269 = ns_St_6_Eco_1;
      v_270 = ns_St_6_Eco_2;
    };
    _out->mode_1 = v_265;
    _out->mode_2 = v_266;
    ns_1 = v_269;
    ns_2 = v_270;
    nr = v_273;
  } else {
    ck_7_2_0 = ck_7_2;
    if (ck_7_2_0) {
      v_267 = true;
      v_268 = true;
      v_274 = true;
      v_271 = true;
      v_272 = true;
    } else {
      mode_St_6_Minimal_safety_1 = false;
      v_267 = mode_St_6_Minimal_safety_1;
      mode_St_6_Minimal_safety_2 = false;
      v_268 = mode_St_6_Minimal_safety_2;
      nr_St_6_Minimal_safety = false;
      v_274 = nr_St_6_Minimal_safety;
      ns_St_6_Minimal_safety_1 = false;
      v_271 = ns_St_6_Minimal_safety_1;
      ns_St_6_Minimal_safety_2 = false;
      v_272 = ns_St_6_Minimal_safety_2;
      if (mode_St_6_Minimal_safety_1) {
        mode_St_6_Minimal_safety_2_1 = mode_St_6_Minimal_safety_2;
      } else {
        mode_St_6_Minimal_safety_2_0 = mode_St_6_Minimal_safety_2;
      };
      if (ns_St_6_Minimal_safety_1) {
        ns_St_6_Minimal_safety_2_1 = ns_St_6_Minimal_safety_2;
      } else {
        ns_St_6_Minimal_safety_2_0 = ns_St_6_Minimal_safety_2;
      };
    };
    _out->mode_1 = v_267;
    _out->mode_2 = v_268;
    ns_1 = v_271;
    ns_2 = v_272;
    nr = v_274;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (_out->mode_1) {
    mode_2_1 = _out->mode_2;
  } else {
    mode_2_0 = _out->mode_2;
  };
  if (ck_7_1) {
    if (ck_7_2_1) {
      if (mode_St_6_Comfort_1) {
        mode_St_6_Comfort_2_1 = mode_St_6_Comfort_2;
      } else {
        mode_St_6_Comfort_2_0 = mode_St_6_Comfort_2;
      };
      if (ns_St_6_Comfort_1) {
        ns_St_6_Comfort_2_1 = ns_St_6_Comfort_2;
      } else {
        ns_St_6_Comfort_2_0 = ns_St_6_Comfort_2;
      };
    } else {
      if (mode_St_6_Eco_1) {
        mode_St_6_Eco_2_1 = mode_St_6_Eco_2;
      } else {
        mode_St_6_Eco_2_0 = mode_St_6_Eco_2;
      };
      if (ns_St_6_Eco_1) {
        ns_St_6_Eco_2_1 = ns_St_6_Eco_2;
      } else {
        ns_St_6_Eco_2_0 = ns_St_6_Eco_2;
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
      if (v_1) {
        v_2_1 = v_2;
      } else {
        v_2_0 = v_2;
      };
      if (s_St_6_Comfort_1) {
        s_St_6_Comfort_2_1 = s_St_6_Comfort_2;
      } else {
        s_St_6_Comfort_2_0 = s_St_6_Comfort_2;
      };
    } else {
      if (v_44_1) {
        v_44_2_1 = v_44_2;
      } else {
        v_44_2_0 = v_44_2;
      };
      if (s_St_6_Eco_1) {
        s_St_6_Eco_2_1 = s_St_6_Eco_2;
      } else {
        s_St_6_Eco_2_0 = s_St_6_Eco_2;
      };
    };
  };
  self->pnr = nr;
  self->v_275 = ns_1;
  self->v_276 = ns_2;;
}

void System__porta_reset(System__porta_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__porta_step(int push, int c_porta, System__porta_out* _out,
                        System__porta_mem* self) {
  
  int nr_St_7_Open;
  int ns_St_7_Open_1;
  int porta_open_St_7_Open;
  int nr_St_7_Closed;
  int ns_St_7_Closed_1;
  int porta_open_St_7_Closed;
  int ck_8_1;
  int v;
  int r_St_7_Open;
  int s_St_7_Open_1;
  int r_St_7_Closed;
  int s_St_7_Closed_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v = !(c_porta);
    if (v) {
      r_St_7_Closed = true;
      s_St_7_Closed_1 = false;
    } else {
      r_St_7_Closed = self->pnr;
      s_St_7_Closed_1 = true;
    };
    r = r_St_7_Closed;
    s_1 = s_St_7_Closed_1;
  } else {
    if (c_porta) {
      r_St_7_Open = true;
    } else {
      r_St_7_Open = self->pnr;
    };
    r = r_St_7_Open;
    if (c_porta) {
      s_St_7_Open_1 = true;
    } else {
      s_St_7_Open_1 = false;
    };
    s_1 = s_St_7_Open_1;
  };
  ck_8_1 = s_1;
  if (ck_8_1) {
    porta_open_St_7_Closed = false;
    nr_St_7_Closed = false;
    ns_St_7_Closed_1 = true;
    _out->porta_open = porta_open_St_7_Closed;
    nr = nr_St_7_Closed;
    ns_1 = ns_St_7_Closed_1;
  } else {
    porta_open_St_7_Open = true;
    _out->porta_open = porta_open_St_7_Open;
    nr_St_7_Open = false;
    nr = nr_St_7_Open;
    ns_St_7_Open_1 = false;
    ns_1 = ns_St_7_Open_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__roteador_reset(System__roteador_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__roteador_step(int c, System__roteador_out* _out,
                           System__roteador_mem* self) {
  
  int nr_St_8_On;
  int ns_St_8_On_1;
  int r_on_St_8_On;
  int nr_St_8_Off;
  int ns_St_8_Off_1;
  int r_on_St_8_Off;
  int ck_9_1;
  int v;
  int r_St_8_On;
  int s_St_8_On_1;
  int r_St_8_Off;
  int s_St_8_Off_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (c) {
      r_St_8_Off = true;
      s_St_8_Off_1 = false;
    } else {
      r_St_8_Off = self->pnr;
      s_St_8_Off_1 = true;
    };
    r = r_St_8_Off;
    s_1 = s_St_8_Off_1;
  } else {
    v = !(c);
    if (v) {
      r_St_8_On = true;
    } else {
      r_St_8_On = self->pnr;
    };
    r = r_St_8_On;
    if (v) {
      s_St_8_On_1 = true;
    } else {
      s_St_8_On_1 = false;
    };
    s_1 = s_St_8_On_1;
  };
  ck_9_1 = s_1;
  if (ck_9_1) {
    r_on_St_8_Off = false;
    nr_St_8_Off = false;
    ns_St_8_Off_1 = true;
    _out->r_on = r_on_St_8_Off;
    nr = nr_St_8_Off;
    ns_1 = ns_St_8_Off_1;
  } else {
    r_on_St_8_On = true;
    _out->r_on = r_on_St_8_On;
    nr_St_8_On = false;
    nr = nr_St_8_On;
    ns_St_8_On_1 = false;
    ns_1 = ns_St_8_On_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__armario_de_servico_reset(System__armario_de_servico_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__armario_de_servico_step(int c,
                                     System__armario_de_servico_out* _out,
                                     System__armario_de_servico_mem* self) {
  
  int nr_St_9_Open;
  int ns_St_9_Open_1;
  int arm_open_St_9_Open;
  int nr_St_9_Locked;
  int ns_St_9_Locked_1;
  int arm_open_St_9_Locked;
  int ck_10_1;
  int v;
  int r_St_9_Open;
  int s_St_9_Open_1;
  int r_St_9_Locked;
  int s_St_9_Locked_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (c) {
      r_St_9_Locked = true;
      s_St_9_Locked_1 = false;
    } else {
      r_St_9_Locked = self->pnr;
      s_St_9_Locked_1 = true;
    };
    r = r_St_9_Locked;
    s_1 = s_St_9_Locked_1;
  } else {
    v = !(c);
    if (v) {
      r_St_9_Open = true;
    } else {
      r_St_9_Open = self->pnr;
    };
    r = r_St_9_Open;
    if (v) {
      s_St_9_Open_1 = true;
    } else {
      s_St_9_Open_1 = false;
    };
    s_1 = s_St_9_Open_1;
  };
  ck_10_1 = s_1;
  if (ck_10_1) {
    arm_open_St_9_Locked = false;
    nr_St_9_Locked = false;
    ns_St_9_Locked_1 = true;
    _out->arm_open = arm_open_St_9_Locked;
    nr = nr_St_9_Locked;
    ns_1 = ns_St_9_Locked_1;
  } else {
    arm_open_St_9_Open = true;
    _out->arm_open = arm_open_St_9_Open;
    nr_St_9_Open = false;
    nr = nr_St_9_Open;
    ns_St_9_Open_1 = false;
    ns_1 = ns_St_9_Open_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__pessoas_reset(System__pessoas_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__pessoas_step(int arrived, System__pessoas_out* _out,
                          System__pessoas_mem* self) {
  
  int nr_St_10_Preent;
  int ns_St_10_Preent_1;
  int presence_St_10_Preent;
  int nr_St_10_Not_Present;
  int ns_St_10_Not_Present_1;
  int presence_St_10_Not_Present;
  int ck_11_1;
  int r_St_10_Preent;
  int s_St_10_Preent_1;
  int r_St_10_Not_Present;
  int s_St_10_Not_Present_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (arrived) {
      r_St_10_Not_Present = true;
      s_St_10_Not_Present_1 = false;
    } else {
      r_St_10_Not_Present = self->pnr;
      s_St_10_Not_Present_1 = true;
    };
    r = r_St_10_Not_Present;
    s_1 = s_St_10_Not_Present_1;
  } else {
    if (arrived) {
      r_St_10_Preent = true;
    } else {
      r_St_10_Preent = self->pnr;
    };
    r = r_St_10_Preent;
    if (arrived) {
      s_St_10_Preent_1 = true;
    } else {
      s_St_10_Preent_1 = false;
    };
    s_1 = s_St_10_Preent_1;
  };
  ck_11_1 = s_1;
  if (ck_11_1) {
    presence_St_10_Not_Present = false;
    nr_St_10_Not_Present = false;
    ns_St_10_Not_Present_1 = true;
    _out->presence = presence_St_10_Not_Present;
    nr = nr_St_10_Not_Present;
    ns_1 = ns_St_10_Not_Present_1;
  } else {
    presence_St_10_Preent = true;
    _out->presence = presence_St_10_Preent;
    nr_St_10_Preent = false;
    nr = nr_St_10_Preent;
    ns_St_10_Preent_1 = false;
    ns_1 = ns_St_10_Preent_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__computadores_reset(System__computadores_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__computadores_step(int c, System__computadores_out* _out,
                               System__computadores_mem* self) {
  
  int nr_St_11_On;
  int ns_St_11_On_1;
  int pc_on_St_11_On;
  int nr_St_11_Off;
  int ns_St_11_Off_1;
  int pc_on_St_11_Off;
  int ck_12_1;
  int v;
  int r_St_11_On;
  int s_St_11_On_1;
  int r_St_11_Off;
  int s_St_11_Off_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (c) {
      r_St_11_Off = true;
      s_St_11_Off_1 = false;
    } else {
      r_St_11_Off = self->pnr;
      s_St_11_Off_1 = true;
    };
    r = r_St_11_Off;
    s_1 = s_St_11_Off_1;
  } else {
    v = !(c);
    if (v) {
      r_St_11_On = true;
    } else {
      r_St_11_On = self->pnr;
    };
    r = r_St_11_On;
    if (v) {
      s_St_11_On_1 = true;
    } else {
      s_St_11_On_1 = false;
    };
    s_1 = s_St_11_On_1;
  };
  ck_12_1 = s_1;
  if (ck_12_1) {
    pc_on_St_11_Off = false;
    nr_St_11_Off = false;
    ns_St_11_Off_1 = true;
    _out->pc_on = pc_on_St_11_Off;
    nr = nr_St_11_Off;
    ns_1 = ns_St_11_Off_1;
  } else {
    pc_on_St_11_On = true;
    _out->pc_on = pc_on_St_11_On;
    nr_St_11_On = false;
    nr = nr_St_11_On;
    ns_St_11_On_1 = false;
    ns_1 = ns_St_11_On_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__janelas_reset(System__janelas_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__janelas_step(int c, System__janelas_out* _out,
                          System__janelas_mem* self) {
  
  int nr_St_12_Open;
  int ns_St_12_Open_1;
  int w_open_St_12_Open;
  int nr_St_12_Closed;
  int ns_St_12_Closed_1;
  int w_open_St_12_Closed;
  int ck_13_1;
  int v;
  int r_St_12_Open;
  int s_St_12_Open_1;
  int r_St_12_Closed;
  int s_St_12_Closed_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (c) {
      r_St_12_Closed = true;
      s_St_12_Closed_1 = false;
    } else {
      r_St_12_Closed = self->pnr;
      s_St_12_Closed_1 = true;
    };
    r = r_St_12_Closed;
    s_1 = s_St_12_Closed_1;
  } else {
    v = !(c);
    if (v) {
      r_St_12_Open = true;
    } else {
      r_St_12_Open = self->pnr;
    };
    r = r_St_12_Open;
    if (v) {
      s_St_12_Open_1 = true;
    } else {
      s_St_12_Open_1 = false;
    };
    s_1 = s_St_12_Open_1;
  };
  ck_13_1 = s_1;
  if (ck_13_1) {
    w_open_St_12_Closed = false;
    nr_St_12_Closed = false;
    ns_St_12_Closed_1 = true;
    _out->w_open = w_open_St_12_Closed;
    nr = nr_St_12_Closed;
    ns_1 = ns_St_12_Closed_1;
  } else {
    w_open_St_12_Open = true;
    _out->w_open = w_open_St_12_Open;
    nr_St_12_Open = false;
    nr = nr_St_12_Open;
    ns_St_12_Open_1 = false;
    ns_1 = ns_St_12_Open_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__luzes_reset(System__luzes_mem* self) {
  self->pnr = false;
  self->v_291 = true;
  self->v_292 = false;
}

void System__luzes_step(int c1, int c2, System__luzes_out* _out,
                        System__luzes_mem* self) {
  
  int v_290;
  int v_289;
  int v_288;
  int v_287;
  int v_286;
  int v_285;
  int v_284;
  int v_283;
  int ns_St_13_All_2_0;
  int ns_St_13_All_2_1;
  int ns_St_13_Some_2_0;
  int ns_St_13_Some_2_1;
  int ns_St_13_None_2_0;
  int ns_St_13_None_2_1;
  int ck_14_2_0;
  int ck_14_2_1;
  int nr_St_13_All;
  int ns_St_13_All_2;
  int ns_St_13_All_1;
  int l_state_St_13_All;
  int nr_St_13_Some;
  int ns_St_13_Some_2;
  int ns_St_13_Some_1;
  int l_state_St_13_Some;
  int nr_St_13_None;
  int ns_St_13_None_2;
  int ns_St_13_None_1;
  int l_state_St_13_None;
  int ck_14_2;
  int ck_14_1;
  int v_54_2_0;
  int v_54_2_1;
  int v_55;
  int v_54_2;
  int v_54_1;
  int v_52_2_0;
  int v_52_2_1;
  int v_53;
  int v_52_2;
  int v_52_1;
  int v_51;
  int v_49_2_0;
  int v_49_2_1;
  int v_50;
  int v_49_2;
  int v_49_1;
  int v_48;
  int v;
  int v_298;
  int v_297;
  int v_296;
  int v_295;
  int v_294;
  int v_293;
  int s_St_13_All_2_0;
  int s_St_13_All_2_1;
  int s_St_13_Some_2_0;
  int s_St_13_Some_2_1;
  int s_St_13_None_2_0;
  int s_St_13_None_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_13_All;
  int s_St_13_All_2;
  int s_St_13_All_1;
  int r_St_13_Some;
  int s_St_13_Some_2;
  int s_St_13_Some_1;
  int r_St_13_None;
  int s_St_13_None_2;
  int s_St_13_None_1;
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
  ck_1 = self->v_291;
  ck_2 = self->v_292;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_48 = !(c2);
      if (v_48) {
        v_50 = true;
        v_49_1 = true;
        v_49_2 = false;
      } else {
        v_50 = self->pnr;
        v_49_1 = true;
        v_49_2 = true;
      };
      v = !(c1);
      if (v) {
        r_St_13_All = true;
      } else {
        r_St_13_All = v_50;
      };
      v_297 = r_St_13_All;
      if (v) {
        s_St_13_All_1 = false;
      } else {
        s_St_13_All_1 = v_49_1;
      };
      v_293 = s_St_13_All_1;
      if (v) {
        s_St_13_All_2 = false;
      } else {
        s_St_13_All_2 = v_49_2;
      };
      v_294 = s_St_13_All_2;
    } else {
      if (c2) {
        v_55 = true;
      } else {
        v_55 = self->pnr;
      };
      if (c1) {
        r_St_13_None = true;
      } else {
        r_St_13_None = v_55;
      };
      if (c2) {
        v_54_1 = true;
      } else {
        v_54_1 = true;
      };
      if (c1) {
        s_St_13_None_1 = false;
      } else {
        s_St_13_None_1 = v_54_1;
      };
      if (c2) {
        v_54_2 = true;
      } else {
        v_54_2 = false;
      };
      if (c1) {
        s_St_13_None_2 = false;
      } else {
        s_St_13_None_2 = v_54_2;
      };
      v_297 = r_St_13_None;
      v_293 = s_St_13_None_1;
      v_294 = s_St_13_None_2;
      if (v_54_1) {
        v_54_2_1 = v_54_2;
      } else {
        v_54_2_0 = v_54_2;
      };
    };
    s_1 = v_293;
    s_2 = v_294;
    r = v_297;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_298 = true;
      v_295 = true;
      v_296 = true;
    } else {
      if (c2) {
        v_53 = true;
        v_52_1 = true;
        v_52_2 = true;
      } else {
        v_53 = self->pnr;
        v_52_1 = false;
        v_52_2 = false;
      };
      v_51 = !(c1);
      if (v_51) {
        r_St_13_Some = true;
      } else {
        r_St_13_Some = v_53;
      };
      v_298 = r_St_13_Some;
      if (v_51) {
        s_St_13_Some_1 = true;
      } else {
        s_St_13_Some_1 = v_52_1;
      };
      v_295 = s_St_13_Some_1;
      if (v_51) {
        s_St_13_Some_2 = false;
      } else {
        s_St_13_Some_2 = v_52_2;
      };
      v_296 = s_St_13_Some_2;
      if (v_52_1) {
        v_52_2_1 = v_52_2;
      } else {
        v_52_2_0 = v_52_2;
      };
      if (s_St_13_Some_1) {
        s_St_13_Some_2_1 = s_St_13_Some_2;
      } else {
        s_St_13_Some_2_0 = s_St_13_Some_2;
      };
    };
    s_1 = v_295;
    s_2 = v_296;
    r = v_298;
  };
  ck_14_1 = s_1;
  ck_14_2 = s_2;
  if (ck_14_1) {
    ck_14_2_1 = ck_14_2;
    if (ck_14_2_1) {
      l_state_St_13_All = 2;
      v_283 = l_state_St_13_All;
      nr_St_13_All = false;
      v_289 = nr_St_13_All;
      ns_St_13_All_1 = true;
      v_285 = ns_St_13_All_1;
      ns_St_13_All_2 = true;
      v_286 = ns_St_13_All_2;
    } else {
      l_state_St_13_None = 0;
      nr_St_13_None = false;
      ns_St_13_None_1 = true;
      ns_St_13_None_2 = false;
      v_283 = l_state_St_13_None;
      v_289 = nr_St_13_None;
      v_285 = ns_St_13_None_1;
      v_286 = ns_St_13_None_2;
    };
    _out->l_state = v_283;
    ns_1 = v_285;
    ns_2 = v_286;
    nr = v_289;
  } else {
    ck_14_2_0 = ck_14_2;
    if (ck_14_2_0) {
      v_284 = 0;
      v_290 = true;
      v_287 = true;
      v_288 = true;
    } else {
      l_state_St_13_Some = 1;
      v_284 = l_state_St_13_Some;
      nr_St_13_Some = false;
      v_290 = nr_St_13_Some;
      ns_St_13_Some_1 = false;
      v_287 = ns_St_13_Some_1;
      ns_St_13_Some_2 = false;
      v_288 = ns_St_13_Some_2;
      if (ns_St_13_Some_1) {
        ns_St_13_Some_2_1 = ns_St_13_Some_2;
      } else {
        ns_St_13_Some_2_0 = ns_St_13_Some_2;
      };
    };
    _out->l_state = v_284;
    ns_1 = v_287;
    ns_2 = v_288;
    nr = v_290;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (ck_14_1) {
    if (ck_14_2_1) {
      if (ns_St_13_All_1) {
        ns_St_13_All_2_1 = ns_St_13_All_2;
      } else {
        ns_St_13_All_2_0 = ns_St_13_All_2;
      };
    } else {
      if (ns_St_13_None_1) {
        ns_St_13_None_2_1 = ns_St_13_None_2;
      } else {
        ns_St_13_None_2_0 = ns_St_13_None_2;
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
      if (v_49_1) {
        v_49_2_1 = v_49_2;
      } else {
        v_49_2_0 = v_49_2;
      };
      if (s_St_13_All_1) {
        s_St_13_All_2_1 = s_St_13_All_2;
      } else {
        s_St_13_All_2_0 = s_St_13_All_2;
      };
    } else {
      if (s_St_13_None_1) {
        s_St_13_None_2_1 = s_St_13_None_2;
      } else {
        s_St_13_None_2_0 = s_St_13_None_2;
      };
    };
  };
  self->pnr = nr;
  self->v_291 = ns_1;
  self->v_292 = ns_2;;
}

void System__persianas_reset(System__persianas_mem* self) {
  self->pnr = false;
  self->v_307 = true;
  self->v_308 = true;
}

void System__persianas_step(int c1, int c2, System__persianas_out* _out,
                            System__persianas_mem* self) {
  
  int v_306;
  int v_305;
  int v_304;
  int v_303;
  int v_302;
  int v_301;
  int v_300;
  int v_299;
  int ns_St_14_Up_2_0;
  int ns_St_14_Up_2_1;
  int ns_St_14_Mid_2_0;
  int ns_St_14_Mid_2_1;
  int ns_St_14_Down_2_0;
  int ns_St_14_Down_2_1;
  int ck_15_2_0;
  int ck_15_2_1;
  int nr_St_14_Up;
  int ns_St_14_Up_2;
  int ns_St_14_Up_1;
  int p_state_St_14_Up;
  int nr_St_14_Mid;
  int ns_St_14_Mid_2;
  int ns_St_14_Mid_1;
  int p_state_St_14_Mid;
  int nr_St_14_Down;
  int ns_St_14_Down_2;
  int ns_St_14_Down_1;
  int p_state_St_14_Down;
  int ck_15_2;
  int ck_15_1;
  int v_62_2_0;
  int v_62_2_1;
  int v_63;
  int v_62_2;
  int v_62_1;
  int v_60_2_0;
  int v_60_2_1;
  int v_61;
  int v_60_2;
  int v_60_1;
  int v_59;
  int v_57_2_0;
  int v_57_2_1;
  int v_58;
  int v_57_2;
  int v_57_1;
  int v_56;
  int v;
  int v_314;
  int v_313;
  int v_312;
  int v_311;
  int v_310;
  int v_309;
  int s_St_14_Up_2_0;
  int s_St_14_Up_2_1;
  int s_St_14_Mid_2_0;
  int s_St_14_Mid_2_1;
  int s_St_14_Down_2_0;
  int s_St_14_Down_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_14_Up;
  int s_St_14_Up_2;
  int s_St_14_Up_1;
  int r_St_14_Mid;
  int s_St_14_Mid_2;
  int s_St_14_Mid_1;
  int r_St_14_Down;
  int s_St_14_Down_2;
  int s_St_14_Down_1;
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
  ck_1 = self->v_307;
  ck_2 = self->v_308;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      if (c2) {
        v_63 = true;
      } else {
        v_63 = self->pnr;
      };
      if (c1) {
        r_St_14_Down = true;
      } else {
        r_St_14_Down = v_63;
      };
      if (c2) {
        v_62_1 = false;
      } else {
        v_62_1 = true;
      };
      if (c1) {
        s_St_14_Down_1 = true;
      } else {
        s_St_14_Down_1 = v_62_1;
      };
      if (c2) {
        v_62_2 = false;
      } else {
        v_62_2 = true;
      };
      if (c1) {
        s_St_14_Down_2 = false;
      } else {
        s_St_14_Down_2 = v_62_2;
      };
      v_313 = r_St_14_Down;
      v_309 = s_St_14_Down_1;
      v_310 = s_St_14_Down_2;
      if (v_62_1) {
        v_62_2_1 = v_62_2;
      } else {
        v_62_2_0 = v_62_2;
      };
      if (s_St_14_Down_1) {
        s_St_14_Down_2_1 = s_St_14_Down_2;
      } else {
        s_St_14_Down_2_0 = s_St_14_Down_2;
      };
    } else {
      if (c2) {
        v_61 = true;
        v_60_1 = false;
        v_60_2 = false;
      } else {
        v_61 = self->pnr;
        v_60_1 = true;
        v_60_2 = false;
      };
      v_59 = !(c1);
      if (v_59) {
        r_St_14_Mid = true;
      } else {
        r_St_14_Mid = v_61;
      };
      v_313 = r_St_14_Mid;
      if (v_59) {
        s_St_14_Mid_1 = true;
      } else {
        s_St_14_Mid_1 = v_60_1;
      };
      v_309 = s_St_14_Mid_1;
      if (v_59) {
        s_St_14_Mid_2 = true;
      } else {
        s_St_14_Mid_2 = v_60_2;
      };
      v_310 = s_St_14_Mid_2;
      if (v_60_1) {
        v_60_2_1 = v_60_2;
      } else {
        v_60_2_0 = v_60_2;
      };
      if (s_St_14_Mid_1) {
        s_St_14_Mid_2_1 = s_St_14_Mid_2;
      } else {
        s_St_14_Mid_2_0 = s_St_14_Mid_2;
      };
    };
    s_1 = v_309;
    s_2 = v_310;
    r = v_313;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_314 = true;
      v_311 = true;
      v_312 = true;
    } else {
      v_56 = !(c2);
      if (v_56) {
        v_58 = true;
        v_57_1 = true;
        v_57_2 = true;
      } else {
        v_58 = self->pnr;
        v_57_1 = false;
        v_57_2 = false;
      };
      v = !(c1);
      if (v) {
        r_St_14_Up = true;
      } else {
        r_St_14_Up = v_58;
      };
      v_314 = r_St_14_Up;
      if (v) {
        s_St_14_Up_1 = true;
      } else {
        s_St_14_Up_1 = v_57_1;
      };
      v_311 = s_St_14_Up_1;
      if (v) {
        s_St_14_Up_2 = false;
      } else {
        s_St_14_Up_2 = v_57_2;
      };
      v_312 = s_St_14_Up_2;
    };
    s_1 = v_311;
    s_2 = v_312;
    r = v_314;
  };
  ck_15_1 = s_1;
  ck_15_2 = s_2;
  if (ck_15_1) {
    ck_15_2_1 = ck_15_2;
    if (ck_15_2_1) {
      p_state_St_14_Down = 0;
      nr_St_14_Down = false;
      ns_St_14_Down_1 = true;
      ns_St_14_Down_2 = true;
      v_299 = p_state_St_14_Down;
      v_305 = nr_St_14_Down;
      v_301 = ns_St_14_Down_1;
      v_302 = ns_St_14_Down_2;
      if (ns_St_14_Down_1) {
        ns_St_14_Down_2_1 = ns_St_14_Down_2;
      } else {
        ns_St_14_Down_2_0 = ns_St_14_Down_2;
      };
    } else {
      p_state_St_14_Mid = 1;
      v_299 = p_state_St_14_Mid;
      nr_St_14_Mid = false;
      v_305 = nr_St_14_Mid;
      ns_St_14_Mid_1 = true;
      v_301 = ns_St_14_Mid_1;
      ns_St_14_Mid_2 = false;
      v_302 = ns_St_14_Mid_2;
      if (ns_St_14_Mid_1) {
        ns_St_14_Mid_2_1 = ns_St_14_Mid_2;
      } else {
        ns_St_14_Mid_2_0 = ns_St_14_Mid_2;
      };
    };
    _out->p_state = v_299;
    ns_1 = v_301;
    ns_2 = v_302;
    nr = v_305;
  } else {
    ck_15_2_0 = ck_15_2;
    if (ck_15_2_0) {
      v_300 = 0;
      v_306 = true;
      v_303 = true;
      v_304 = true;
    } else {
      p_state_St_14_Up = 2;
      v_300 = p_state_St_14_Up;
      nr_St_14_Up = false;
      v_306 = nr_St_14_Up;
      ns_St_14_Up_1 = false;
      v_303 = ns_St_14_Up_1;
      ns_St_14_Up_2 = false;
      v_304 = ns_St_14_Up_2;
    };
    _out->p_state = v_300;
    ns_1 = v_303;
    ns_2 = v_304;
    nr = v_306;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (!(ck_15_1)) {
    if (!(ck_15_2_0)) {
      if (ns_St_14_Up_1) {
        ns_St_14_Up_2_1 = ns_St_14_Up_2;
      } else {
        ns_St_14_Up_2_0 = ns_St_14_Up_2;
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
  } else {
    s_2_0 = s_2;
  };
  if (!(ck_1)) {
    if (!(ck_2_0)) {
      if (v_57_1) {
        v_57_2_1 = v_57_2;
      } else {
        v_57_2_0 = v_57_2;
      };
      if (s_St_14_Up_1) {
        s_St_14_Up_2_1 = s_St_14_Up_2;
      } else {
        s_St_14_Up_2_0 = s_St_14_Up_2;
      };
    };
  };
  self->pnr = nr;
  self->v_307 = ns_1;
  self->v_308 = ns_2;;
}

void System__ar_condicionado_reset(System__ar_condicionado_mem* self) {
  self->pnr = false;
  self->v_323 = false;
  self->v_324 = false;
}

void System__ar_condicionado_step(int c1, int c2,
                                  System__ar_condicionado_out* _out,
                                  System__ar_condicionado_mem* self) {
  
  int v_322;
  int v_321;
  int v_320;
  int v_319;
  int v_318;
  int v_317;
  int v_316;
  int v_315;
  int ns_St_15_Max_2_0;
  int ns_St_15_Max_2_1;
  int ns_St_15_Min_2_0;
  int ns_St_15_Min_2_1;
  int ns_St_15_Off_2_0;
  int ns_St_15_Off_2_1;
  int ck_16_2_0;
  int ck_16_2_1;
  int nr_St_15_Max;
  int ns_St_15_Max_2;
  int ns_St_15_Max_1;
  int ar_state_St_15_Max;
  int nr_St_15_Min;
  int ns_St_15_Min_2;
  int ns_St_15_Min_1;
  int ar_state_St_15_Min;
  int nr_St_15_Off;
  int ns_St_15_Off_2;
  int ns_St_15_Off_1;
  int ar_state_St_15_Off;
  int ck_16_2;
  int ck_16_1;
  int v_70_2_0;
  int v_70_2_1;
  int v_71;
  int v_70_2;
  int v_70_1;
  int v_68_2_0;
  int v_68_2_1;
  int v_69;
  int v_68_2;
  int v_68_1;
  int v_67;
  int v_65_2_0;
  int v_65_2_1;
  int v_66;
  int v_65_2;
  int v_65_1;
  int v_64;
  int v;
  int v_330;
  int v_329;
  int v_328;
  int v_327;
  int v_326;
  int v_325;
  int s_St_15_Max_2_0;
  int s_St_15_Max_2_1;
  int s_St_15_Min_2_0;
  int s_St_15_Min_2_1;
  int s_St_15_Off_2_0;
  int s_St_15_Off_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_15_Max;
  int s_St_15_Max_2;
  int s_St_15_Max_1;
  int r_St_15_Min;
  int s_St_15_Min_2;
  int s_St_15_Min_1;
  int r_St_15_Off;
  int s_St_15_Off_2;
  int s_St_15_Off_1;
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
  ck_1 = self->v_323;
  ck_2 = self->v_324;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_64 = !(c2);
      if (v_64) {
        v_66 = true;
        v_65_1 = false;
        v_65_2 = false;
      } else {
        v_66 = self->pnr;
        v_65_1 = true;
        v_65_2 = true;
      };
      v = !(c1);
      if (v) {
        r_St_15_Max = true;
      } else {
        r_St_15_Max = v_66;
      };
      v_329 = r_St_15_Max;
      if (v) {
        s_St_15_Max_1 = true;
      } else {
        s_St_15_Max_1 = v_65_1;
      };
      v_325 = s_St_15_Max_1;
      if (v) {
        s_St_15_Max_2 = false;
      } else {
        s_St_15_Max_2 = v_65_2;
      };
      v_326 = s_St_15_Max_2;
    } else {
      if (c2) {
        v_69 = true;
        v_68_1 = true;
        v_68_2 = true;
      } else {
        v_69 = self->pnr;
        v_68_1 = true;
        v_68_2 = false;
      };
      v_67 = !(c1);
      if (v_67) {
        r_St_15_Min = true;
        s_St_15_Min_1 = false;
        s_St_15_Min_2 = false;
      } else {
        r_St_15_Min = v_69;
        s_St_15_Min_1 = v_68_1;
        s_St_15_Min_2 = v_68_2;
      };
      v_329 = r_St_15_Min;
      v_325 = s_St_15_Min_1;
      v_326 = s_St_15_Min_2;
    };
    s_1 = v_325;
    s_2 = v_326;
    r = v_329;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_330 = true;
      v_327 = true;
      v_328 = true;
    } else {
      if (c2) {
        v_71 = true;
      } else {
        v_71 = self->pnr;
      };
      if (c1) {
        r_St_15_Off = true;
      } else {
        r_St_15_Off = v_71;
      };
      v_330 = r_St_15_Off;
      if (c2) {
        v_70_1 = true;
      } else {
        v_70_1 = false;
      };
      if (c1) {
        s_St_15_Off_1 = true;
      } else {
        s_St_15_Off_1 = v_70_1;
      };
      v_327 = s_St_15_Off_1;
      if (c2) {
        v_70_2 = true;
      } else {
        v_70_2 = false;
      };
      if (c1) {
        s_St_15_Off_2 = false;
      } else {
        s_St_15_Off_2 = v_70_2;
      };
      v_328 = s_St_15_Off_2;
      if (v_70_1) {
        v_70_2_1 = v_70_2;
      } else {
        v_70_2_0 = v_70_2;
      };
      if (s_St_15_Off_1) {
        s_St_15_Off_2_1 = s_St_15_Off_2;
      } else {
        s_St_15_Off_2_0 = s_St_15_Off_2;
      };
    };
    s_1 = v_327;
    s_2 = v_328;
    r = v_330;
  };
  ck_16_1 = s_1;
  ck_16_2 = s_2;
  if (ck_16_1) {
    ck_16_2_1 = ck_16_2;
    if (ck_16_2_1) {
      ar_state_St_15_Max = 2;
      v_315 = ar_state_St_15_Max;
      nr_St_15_Max = false;
      v_321 = nr_St_15_Max;
      ns_St_15_Max_1 = true;
      v_317 = ns_St_15_Max_1;
      ns_St_15_Max_2 = true;
      v_318 = ns_St_15_Max_2;
    } else {
      ar_state_St_15_Min = 1;
      nr_St_15_Min = false;
      ns_St_15_Min_1 = true;
      ns_St_15_Min_2 = false;
      v_315 = ar_state_St_15_Min;
      v_321 = nr_St_15_Min;
      v_317 = ns_St_15_Min_1;
      v_318 = ns_St_15_Min_2;
    };
    _out->ar_state = v_315;
    ns_1 = v_317;
    ns_2 = v_318;
    nr = v_321;
  } else {
    ck_16_2_0 = ck_16_2;
    if (ck_16_2_0) {
      v_316 = 0;
      v_322 = true;
      v_319 = true;
      v_320 = true;
    } else {
      ar_state_St_15_Off = 0;
      v_316 = ar_state_St_15_Off;
      nr_St_15_Off = false;
      v_322 = nr_St_15_Off;
      ns_St_15_Off_1 = false;
      v_319 = ns_St_15_Off_1;
      ns_St_15_Off_2 = false;
      v_320 = ns_St_15_Off_2;
      if (ns_St_15_Off_1) {
        ns_St_15_Off_2_1 = ns_St_15_Off_2;
      } else {
        ns_St_15_Off_2_0 = ns_St_15_Off_2;
      };
    };
    _out->ar_state = v_316;
    ns_1 = v_319;
    ns_2 = v_320;
    nr = v_322;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (ck_16_1) {
    if (ck_16_2_1) {
      if (ns_St_15_Max_1) {
        ns_St_15_Max_2_1 = ns_St_15_Max_2;
      } else {
        ns_St_15_Max_2_0 = ns_St_15_Max_2;
      };
    } else {
      if (ns_St_15_Min_1) {
        ns_St_15_Min_2_1 = ns_St_15_Min_2;
      } else {
        ns_St_15_Min_2_0 = ns_St_15_Min_2;
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
      if (v_65_1) {
        v_65_2_1 = v_65_2;
      } else {
        v_65_2_0 = v_65_2;
      };
      if (s_St_15_Max_1) {
        s_St_15_Max_2_1 = s_St_15_Max_2;
      } else {
        s_St_15_Max_2_0 = s_St_15_Max_2;
      };
    } else {
      if (v_68_1) {
        v_68_2_1 = v_68_2;
      } else {
        v_68_2_0 = v_68_2;
      };
      if (s_St_15_Min_1) {
        s_St_15_Min_2_1 = s_St_15_Min_2;
      } else {
        s_St_15_Min_2_0 = s_St_15_Min_2;
      };
    };
  };
  self->pnr = nr;
  self->v_323 = ns_1;
  self->v_324 = ns_2;;
}

void System__turno_reset(System__turno_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__turno_step(int shift, System__turno_out* _out,
                        System__turno_mem* self) {
  
  int nr_St_16_Noite;
  int ns_St_16_Noite_1;
  int turno_St_16_Noite;
  int nr_St_16_Dia;
  int ns_St_16_Dia_1;
  int turno_St_16_Dia;
  int ck_17_1;
  int r_St_16_Noite;
  int s_St_16_Noite_1;
  int r_St_16_Dia;
  int s_St_16_Dia_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (shift) {
      r_St_16_Dia = true;
      s_St_16_Dia_1 = false;
    } else {
      r_St_16_Dia = self->pnr;
      s_St_16_Dia_1 = true;
    };
    r = r_St_16_Dia;
    s_1 = s_St_16_Dia_1;
  } else {
    if (shift) {
      r_St_16_Noite = true;
    } else {
      r_St_16_Noite = self->pnr;
    };
    r = r_St_16_Noite;
    if (shift) {
      s_St_16_Noite_1 = true;
    } else {
      s_St_16_Noite_1 = false;
    };
    s_1 = s_St_16_Noite_1;
  };
  ck_17_1 = s_1;
  if (ck_17_1) {
    turno_St_16_Dia = false;
    nr_St_16_Dia = false;
    ns_St_16_Dia_1 = true;
    _out->turno = turno_St_16_Dia;
    nr = nr_St_16_Dia;
    ns_1 = ns_St_16_Dia_1;
  } else {
    turno_St_16_Noite = true;
    _out->turno = turno_St_16_Noite;
    nr_St_16_Noite = false;
    nr = nr_St_16_Noite;
    ns_St_16_Noite_1 = false;
    ns_1 = ns_St_16_Noite_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__controller_reset(System__controller_mem* self) {
  self->pnr = false;
  self->v_339 = false;
  self->v_340 = false;
  self->pnr_1 = false;
  self->v_355 = true;
  self->v_356 = true;
  self->pnr_2 = false;
  self->v_371 = true;
  self->v_372 = false;
  self->pnr_3 = false;
  self->ck_27_1 = true;
  self->pnr_4 = false;
  self->ck_25_1 = true;
  self->pnr_5 = false;
  self->ck_23_1 = true;
  self->pnr_6 = false;
  self->ck_21_1 = true;
  self->pnr_7 = false;
  self->ck_19_1 = true;
  self->pnr_8 = false;
  self->ck_1 = true;
}

void System__controller_step(int shift_turno, int abre_porta, int p_arrived,
                             System__controller_out* _out,
                             System__controller_mem* self) {
  Controller_controller__controller_controller_out Controller_controller__controller_controller_out_st;
  
  int v_338;
  int v_337;
  int v_336;
  int v_335;
  int v_334;
  int v_333;
  int v_332;
  int v_331;
  int ns_St_17_Max_2_0;
  int ns_St_17_Max_2_1;
  int ns_St_17_Min_2_0;
  int ns_St_17_Min_2_1;
  int ns_St_17_Off_2_0;
  int ns_St_17_Off_2_1;
  int ck_34_2_0;
  int ck_34_2_1;
  int nr_St_17_Max;
  int ns_St_17_Max_2;
  int ns_St_17_Max_1;
  int ar_state_1_St_17_Max;
  int nr_St_17_Min;
  int ns_St_17_Min_2;
  int ns_St_17_Min_1;
  int ar_state_1_St_17_Min;
  int nr_St_17_Off;
  int ns_St_17_Off_2;
  int ns_St_17_Off_1;
  int ar_state_1_St_17_Off;
  int ck_34_2;
  int ck_34_1;
  int v_129_2_0;
  int v_129_2_1;
  int v_130;
  int v_129_2;
  int v_129_1;
  int v_127_2_0;
  int v_127_2_1;
  int v_128;
  int v_127_2;
  int v_127_1;
  int v_126;
  int v_124_2_0;
  int v_124_2_1;
  int v_125;
  int v_124_2;
  int v_124_1;
  int v_123;
  int v_122;
  int v_346;
  int v_345;
  int v_344;
  int v_343;
  int v_342;
  int v_341;
  int s_St_17_Max_2_0;
  int s_St_17_Max_2_1;
  int s_St_17_Min_2_0;
  int s_St_17_Min_2_1;
  int s_St_17_Off_2_0;
  int s_St_17_Off_2_1;
  int ck_33_2_0;
  int ck_33_2_1;
  int r_St_17_Max;
  int s_St_17_Max_2;
  int s_St_17_Max_1;
  int r_St_17_Min;
  int s_St_17_Min_2;
  int s_St_17_Min_1;
  int r_St_17_Off;
  int s_St_17_Off_2;
  int s_St_17_Off_1;
  int ck_33_2;
  int ck_33_1;
  int v_354;
  int v_353;
  int v_352;
  int v_351;
  int v_350;
  int v_349;
  int v_348;
  int v_347;
  int ns_1_St_18_Up_2_0;
  int ns_1_St_18_Up_2_1;
  int ns_1_St_18_Mid_2_0;
  int ns_1_St_18_Mid_2_1;
  int ns_1_St_18_Down_2_0;
  int ns_1_St_18_Down_2_1;
  int ck_32_2_0;
  int ck_32_2_1;
  int nr_1_St_18_Up;
  int ns_1_St_18_Up_2;
  int ns_1_St_18_Up_1;
  int p_state_1_St_18_Up;
  int nr_1_St_18_Mid;
  int ns_1_St_18_Mid_2;
  int ns_1_St_18_Mid_1;
  int p_state_1_St_18_Mid;
  int nr_1_St_18_Down;
  int ns_1_St_18_Down_2;
  int ns_1_St_18_Down_1;
  int p_state_1_St_18_Down;
  int ck_32_2;
  int ck_32_1;
  int v_120_2_0;
  int v_120_2_1;
  int v_121;
  int v_120_2;
  int v_120_1;
  int v_118_2_0;
  int v_118_2_1;
  int v_119;
  int v_118_2;
  int v_118_1;
  int v_117;
  int v_115_2_0;
  int v_115_2_1;
  int v_116;
  int v_115_2;
  int v_115_1;
  int v_114;
  int v_113;
  int v_362;
  int v_361;
  int v_360;
  int v_359;
  int v_358;
  int v_357;
  int s_1_St_18_Up_2_0;
  int s_1_St_18_Up_2_1;
  int s_1_St_18_Mid_2_0;
  int s_1_St_18_Mid_2_1;
  int s_1_St_18_Down_2_0;
  int s_1_St_18_Down_2_1;
  int ck_31_2_0;
  int ck_31_2_1;
  int r_1_St_18_Up;
  int s_1_St_18_Up_2;
  int s_1_St_18_Up_1;
  int r_1_St_18_Mid;
  int s_1_St_18_Mid_2;
  int s_1_St_18_Mid_1;
  int r_1_St_18_Down;
  int s_1_St_18_Down_2;
  int s_1_St_18_Down_1;
  int ck_31_2;
  int ck_31_1;
  int v_370;
  int v_369;
  int v_368;
  int v_367;
  int v_366;
  int v_365;
  int v_364;
  int v_363;
  int ns_2_St_19_All_2_0;
  int ns_2_St_19_All_2_1;
  int ns_2_St_19_Some_2_0;
  int ns_2_St_19_Some_2_1;
  int ns_2_St_19_None_2_0;
  int ns_2_St_19_None_2_1;
  int ck_30_2_0;
  int ck_30_2_1;
  int nr_2_St_19_All;
  int ns_2_St_19_All_2;
  int ns_2_St_19_All_1;
  int l_state_1_St_19_All;
  int nr_2_St_19_Some;
  int ns_2_St_19_Some_2;
  int ns_2_St_19_Some_1;
  int l_state_1_St_19_Some;
  int nr_2_St_19_None;
  int ns_2_St_19_None_2;
  int ns_2_St_19_None_1;
  int l_state_1_St_19_None;
  int ck_30_2;
  int ck_30_1;
  int v_111_2_0;
  int v_111_2_1;
  int v_112;
  int v_111_2;
  int v_111_1;
  int v_109_2_0;
  int v_109_2_1;
  int v_110;
  int v_109_2;
  int v_109_1;
  int v_108;
  int v_106_2_0;
  int v_106_2_1;
  int v_107;
  int v_106_2;
  int v_106_1;
  int v_105;
  int v_104;
  int v_378;
  int v_377;
  int v_376;
  int v_375;
  int v_374;
  int v_373;
  int s_2_St_19_All_2_0;
  int s_2_St_19_All_2_1;
  int s_2_St_19_Some_2_0;
  int s_2_St_19_Some_2_1;
  int s_2_St_19_None_2_0;
  int s_2_St_19_None_2_1;
  int ck_29_2_0;
  int ck_29_2_1;
  int r_2_St_19_All;
  int s_2_St_19_All_2;
  int s_2_St_19_All_1;
  int r_2_St_19_Some;
  int s_2_St_19_Some_2;
  int s_2_St_19_Some_1;
  int r_2_St_19_None;
  int s_2_St_19_None_2;
  int s_2_St_19_None_1;
  int ck_29_2;
  int ck_29_1;
  int nr_3_St_20_Open;
  int ns_3_St_20_Open_1;
  int w_open_1_St_20_Open;
  int nr_3_St_20_Closed;
  int ns_3_St_20_Closed_1;
  int w_open_1_St_20_Closed;
  int ck_28_1;
  int v_103;
  int r_3_St_20_Open;
  int s_3_St_20_Open_1;
  int r_3_St_20_Closed;
  int s_3_St_20_Closed_1;
  int nr_4_St_21_On;
  int ns_4_St_21_On_1;
  int pc_on_1_St_21_On;
  int nr_4_St_21_Off;
  int ns_4_St_21_Off_1;
  int pc_on_1_St_21_Off;
  int ck_26_1;
  int v_102;
  int r_4_St_21_On;
  int s_4_St_21_On_1;
  int r_4_St_21_Off;
  int s_4_St_21_Off_1;
  int nr_5_St_22_Preent;
  int ns_5_St_22_Preent_1;
  int presence_1_St_22_Preent;
  int nr_5_St_22_Not_Present;
  int ns_5_St_22_Not_Present_1;
  int presence_1_St_22_Not_Present;
  int ck_24_1;
  int r_5_St_22_Preent;
  int s_5_St_22_Preent_1;
  int r_5_St_22_Not_Present;
  int s_5_St_22_Not_Present_1;
  int nr_6_St_23_On;
  int ns_6_St_23_On_1;
  int r_on_St_23_On;
  int nr_6_St_23_Off;
  int ns_6_St_23_Off_1;
  int r_on_St_23_Off;
  int ck_22_1;
  int v_101;
  int r_6_St_23_On;
  int s_6_St_23_On_1;
  int r_6_St_23_Off;
  int s_6_St_23_Off_1;
  int nr_7_St_24_Open;
  int ns_7_St_24_Open_1;
  int porta_open_St_24_Open;
  int nr_7_St_24_Closed;
  int ns_7_St_24_Closed_1;
  int porta_open_St_24_Closed;
  int ck_20_1;
  int v_100;
  int r_7_St_24_Open;
  int s_7_St_24_Open_1;
  int r_7_St_24_Closed;
  int s_7_St_24_Closed_1;
  int nr_8_St_25_Noite;
  int ns_8_St_25_Noite_1;
  int turno_St_25_Noite;
  int nr_8_St_25_Dia;
  int ns_8_St_25_Dia_1;
  int turno_St_25_Dia;
  int ck_18_1;
  int r_8_St_25_Noite;
  int s_8_St_25_Noite_1;
  int r_8_St_25_Dia;
  int s_8_St_25_Dia_1;
  int s_2_2_0;
  int s_2_2_1;
  int ns_2_2_0;
  int ns_2_2_1;
  int s_1_2_0;
  int s_1_2_1;
  int ns_1_2_0;
  int ns_1_2_1;
  int s_2_3_0;
  int s_2_3_1;
  int ns_2_3_0;
  int ns_2_3_1;
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
  int s_1_2;
  int s_1_1;
  int ns_1_2;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_2_3;
  int s_1_3;
  int ns_2_3;
  int ns_1_3;
  int r;
  int nr;
  int c1_2;
  int c2_2;
  int ar_state_1;
  int c1_1;
  int c2_1;
  int p_state_1;
  int c1;
  int c2;
  int l_state_1;
  int c_2;
  int w_open_1;
  int c_1;
  int pc_on_1;
  int arrived;
  int presence_1;
  int c;
  int r_on;
  int push;
  int c_porta_1;
  int porta_open;
  int shift;
  int turno;
  int rule7;
  int rule6;
  int rule5;
  int rule4;
  int rule3;
  int rule2;
  int v;
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
  int c_ar2;
  int c_ar1;
  int c_per2;
  int c_per1;
  int c_luz2;
  int c_luz1;
  int c_jan;
  int c_pc;
  int c_rot;
  int c_porta;
  ck_33_1 = self->v_339;
  ck_33_2 = self->v_340;
  ck_31_1 = self->v_355;
  ck_31_2 = self->v_356;
  ck_29_1 = self->v_371;
  ck_29_2 = self->v_372;
  arrived = p_arrived;
  push = abre_porta;
  shift = shift_turno;
  Controller_controller__controller_controller_step(shift_turno, abre_porta,
                                                    p_arrived, self->ck_1,
                                                    self->pnr_8,
                                                    self->ck_19_1,
                                                    self->pnr_7,
                                                    self->ck_21_1,
                                                    self->pnr_6,
                                                    self->ck_23_1,
                                                    self->pnr_5,
                                                    self->ck_25_1,
                                                    self->pnr_4,
                                                    self->ck_27_1,
                                                    self->pnr_3, self->v_372,
                                                    self->v_371, self->pnr_2,
                                                    self->v_356, self->v_355,
                                                    self->pnr_1, self->v_340,
                                                    self->v_339, self->pnr,
                                                    true, true, true, true,
                                                    true, true, true, true,
                                                    true, true,
                                                    &Controller_controller__controller_controller_out_st);
  c_ar2 = Controller_controller__controller_controller_out_st.controller_c_ar2;
  c_ar1 = Controller_controller__controller_controller_out_st.controller_c_ar1;
  c_per2 = Controller_controller__controller_controller_out_st.controller_c_per2;
  c_per1 = Controller_controller__controller_controller_out_st.controller_c_per1;
  c_luz2 = Controller_controller__controller_controller_out_st.controller_c_luz2;
  c_luz1 = Controller_controller__controller_controller_out_st.controller_c_luz1;
  c_jan = Controller_controller__controller_controller_out_st.controller_c_jan;
  c_pc = Controller_controller__controller_controller_out_st.controller_c_pc;
  c_rot = Controller_controller__controller_controller_out_st.controller_c_rot;
  c_porta = Controller_controller__controller_controller_out_st.controller_c_porta;
  c1_2 = c_ar1;
  c2_2 = c_ar2;
  c1_1 = c_per1;
  c2_1 = c_per2;
  c1 = c_luz1;
  c2 = c_luz2;
  c_2 = c_jan;
  c_1 = c_pc;
  c = c_rot;
  c_porta_1 = c_porta;
  if (ck_33_1) {
    ck_33_2_1 = ck_33_2;
    if (ck_33_2_1) {
      v_123 = !(c2_2);
      if (v_123) {
        v_125 = true;
        v_124_1 = false;
        v_124_2 = false;
      } else {
        v_125 = self->pnr;
        v_124_1 = true;
        v_124_2 = true;
      };
      v_122 = !(c1_2);
      if (v_122) {
        r_St_17_Max = true;
      } else {
        r_St_17_Max = v_125;
      };
      v_345 = r_St_17_Max;
      if (v_122) {
        s_St_17_Max_1 = true;
      } else {
        s_St_17_Max_1 = v_124_1;
      };
      v_341 = s_St_17_Max_1;
      if (v_122) {
        s_St_17_Max_2 = false;
      } else {
        s_St_17_Max_2 = v_124_2;
      };
      v_342 = s_St_17_Max_2;
    } else {
      if (c2_2) {
        v_128 = true;
        v_127_1 = true;
        v_127_2 = true;
      } else {
        v_128 = self->pnr;
        v_127_1 = true;
        v_127_2 = false;
      };
      v_126 = !(c1_2);
      if (v_126) {
        r_St_17_Min = true;
        s_St_17_Min_1 = false;
        s_St_17_Min_2 = false;
      } else {
        r_St_17_Min = v_128;
        s_St_17_Min_1 = v_127_1;
        s_St_17_Min_2 = v_127_2;
      };
      v_345 = r_St_17_Min;
      v_341 = s_St_17_Min_1;
      v_342 = s_St_17_Min_2;
    };
    s_1_3 = v_341;
    s_2_3 = v_342;
    r = v_345;
  } else {
    ck_33_2_0 = ck_33_2;
    if (ck_33_2_0) {
      v_346 = true;
      v_343 = true;
      v_344 = true;
    } else {
      if (c2_2) {
        v_130 = true;
      } else {
        v_130 = self->pnr;
      };
      if (c1_2) {
        r_St_17_Off = true;
      } else {
        r_St_17_Off = v_130;
      };
      v_346 = r_St_17_Off;
      if (c2_2) {
        v_129_1 = true;
      } else {
        v_129_1 = false;
      };
      if (c1_2) {
        s_St_17_Off_1 = true;
      } else {
        s_St_17_Off_1 = v_129_1;
      };
      v_343 = s_St_17_Off_1;
      if (c2_2) {
        v_129_2 = true;
      } else {
        v_129_2 = false;
      };
      if (c1_2) {
        s_St_17_Off_2 = false;
      } else {
        s_St_17_Off_2 = v_129_2;
      };
      v_344 = s_St_17_Off_2;
      if (v_129_1) {
        v_129_2_1 = v_129_2;
      } else {
        v_129_2_0 = v_129_2;
      };
      if (s_St_17_Off_1) {
        s_St_17_Off_2_1 = s_St_17_Off_2;
      } else {
        s_St_17_Off_2_0 = s_St_17_Off_2;
      };
    };
    s_1_3 = v_343;
    s_2_3 = v_344;
    r = v_346;
  };
  ck_34_1 = s_1_3;
  ck_34_2 = s_2_3;
  if (ck_34_1) {
    ck_34_2_1 = ck_34_2;
    if (ck_34_2_1) {
      ar_state_1_St_17_Max = 2;
      v_331 = ar_state_1_St_17_Max;
      nr_St_17_Max = false;
      v_337 = nr_St_17_Max;
      ns_St_17_Max_1 = true;
      v_333 = ns_St_17_Max_1;
      ns_St_17_Max_2 = true;
      v_334 = ns_St_17_Max_2;
    } else {
      ar_state_1_St_17_Min = 1;
      nr_St_17_Min = false;
      ns_St_17_Min_1 = true;
      ns_St_17_Min_2 = false;
      v_331 = ar_state_1_St_17_Min;
      v_337 = nr_St_17_Min;
      v_333 = ns_St_17_Min_1;
      v_334 = ns_St_17_Min_2;
    };
    ar_state_1 = v_331;
    ns_1_3 = v_333;
    ns_2_3 = v_334;
    nr = v_337;
  } else {
    ck_34_2_0 = ck_34_2;
    if (ck_34_2_0) {
      v_332 = 0;
      v_338 = true;
      v_335 = true;
      v_336 = true;
    } else {
      ar_state_1_St_17_Off = 0;
      v_332 = ar_state_1_St_17_Off;
      nr_St_17_Off = false;
      v_338 = nr_St_17_Off;
      ns_St_17_Off_1 = false;
      v_335 = ns_St_17_Off_1;
      ns_St_17_Off_2 = false;
      v_336 = ns_St_17_Off_2;
      if (ns_St_17_Off_1) {
        ns_St_17_Off_2_1 = ns_St_17_Off_2;
      } else {
        ns_St_17_Off_2_0 = ns_St_17_Off_2;
      };
    };
    ar_state_1 = v_332;
    ns_1_3 = v_335;
    ns_2_3 = v_336;
    nr = v_338;
  };
  _out->ar_state = ar_state_1;
  v_74 = (_out->ar_state==1);
  v_84 = (_out->ar_state==0);
  if (ns_1_3) {
    ns_2_3_1 = ns_2_3;
  } else {
    ns_2_3_0 = ns_2_3;
  };
  if (ck_34_1) {
    if (ck_34_2_1) {
      if (ns_St_17_Max_1) {
        ns_St_17_Max_2_1 = ns_St_17_Max_2;
      } else {
        ns_St_17_Max_2_0 = ns_St_17_Max_2;
      };
    } else {
      if (ns_St_17_Min_1) {
        ns_St_17_Min_2_1 = ns_St_17_Min_2;
      } else {
        ns_St_17_Min_2_0 = ns_St_17_Min_2;
      };
    };
  };
  if (s_1_3) {
    s_2_3_1 = s_2_3;
  } else {
    s_2_3_0 = s_2_3;
  };
  if (ck_33_1) {
    if (ck_33_2_1) {
      if (v_124_1) {
        v_124_2_1 = v_124_2;
      } else {
        v_124_2_0 = v_124_2;
      };
      if (s_St_17_Max_1) {
        s_St_17_Max_2_1 = s_St_17_Max_2;
      } else {
        s_St_17_Max_2_0 = s_St_17_Max_2;
      };
    } else {
      if (v_127_1) {
        v_127_2_1 = v_127_2;
      } else {
        v_127_2_0 = v_127_2;
      };
      if (s_St_17_Min_1) {
        s_St_17_Min_2_1 = s_St_17_Min_2;
      } else {
        s_St_17_Min_2_0 = s_St_17_Min_2;
      };
    };
  };
  if (ck_31_1) {
    ck_31_2_1 = ck_31_2;
    if (ck_31_2_1) {
      if (c2_1) {
        v_121 = true;
      } else {
        v_121 = self->pnr_1;
      };
      if (c1_1) {
        r_1_St_18_Down = true;
      } else {
        r_1_St_18_Down = v_121;
      };
      if (c2_1) {
        v_120_1 = false;
      } else {
        v_120_1 = true;
      };
      if (c1_1) {
        s_1_St_18_Down_1 = true;
      } else {
        s_1_St_18_Down_1 = v_120_1;
      };
      if (c2_1) {
        v_120_2 = false;
      } else {
        v_120_2 = true;
      };
      if (c1_1) {
        s_1_St_18_Down_2 = false;
      } else {
        s_1_St_18_Down_2 = v_120_2;
      };
      v_361 = r_1_St_18_Down;
      v_357 = s_1_St_18_Down_1;
      v_358 = s_1_St_18_Down_2;
      if (v_120_1) {
        v_120_2_1 = v_120_2;
      } else {
        v_120_2_0 = v_120_2;
      };
      if (s_1_St_18_Down_1) {
        s_1_St_18_Down_2_1 = s_1_St_18_Down_2;
      } else {
        s_1_St_18_Down_2_0 = s_1_St_18_Down_2;
      };
    } else {
      if (c2_1) {
        v_119 = true;
        v_118_1 = false;
        v_118_2 = false;
      } else {
        v_119 = self->pnr_1;
        v_118_1 = true;
        v_118_2 = false;
      };
      v_117 = !(c1_1);
      if (v_117) {
        r_1_St_18_Mid = true;
      } else {
        r_1_St_18_Mid = v_119;
      };
      v_361 = r_1_St_18_Mid;
      if (v_117) {
        s_1_St_18_Mid_1 = true;
      } else {
        s_1_St_18_Mid_1 = v_118_1;
      };
      v_357 = s_1_St_18_Mid_1;
      if (v_117) {
        s_1_St_18_Mid_2 = true;
      } else {
        s_1_St_18_Mid_2 = v_118_2;
      };
      v_358 = s_1_St_18_Mid_2;
      if (v_118_1) {
        v_118_2_1 = v_118_2;
      } else {
        v_118_2_0 = v_118_2;
      };
      if (s_1_St_18_Mid_1) {
        s_1_St_18_Mid_2_1 = s_1_St_18_Mid_2;
      } else {
        s_1_St_18_Mid_2_0 = s_1_St_18_Mid_2;
      };
    };
    s_1_1 = v_357;
    s_1_2 = v_358;
    r_1 = v_361;
  } else {
    ck_31_2_0 = ck_31_2;
    if (ck_31_2_0) {
      v_362 = true;
      v_359 = true;
      v_360 = true;
    } else {
      v_114 = !(c2_1);
      if (v_114) {
        v_116 = true;
        v_115_1 = true;
        v_115_2 = true;
      } else {
        v_116 = self->pnr_1;
        v_115_1 = false;
        v_115_2 = false;
      };
      v_113 = !(c1_1);
      if (v_113) {
        r_1_St_18_Up = true;
      } else {
        r_1_St_18_Up = v_116;
      };
      v_362 = r_1_St_18_Up;
      if (v_113) {
        s_1_St_18_Up_1 = true;
      } else {
        s_1_St_18_Up_1 = v_115_1;
      };
      v_359 = s_1_St_18_Up_1;
      if (v_113) {
        s_1_St_18_Up_2 = false;
      } else {
        s_1_St_18_Up_2 = v_115_2;
      };
      v_360 = s_1_St_18_Up_2;
    };
    s_1_1 = v_359;
    s_1_2 = v_360;
    r_1 = v_362;
  };
  ck_32_1 = s_1_1;
  ck_32_2 = s_1_2;
  if (ck_32_1) {
    ck_32_2_1 = ck_32_2;
    if (ck_32_2_1) {
      p_state_1_St_18_Down = 0;
      nr_1_St_18_Down = false;
      ns_1_St_18_Down_1 = true;
      ns_1_St_18_Down_2 = true;
      v_347 = p_state_1_St_18_Down;
      v_353 = nr_1_St_18_Down;
      v_349 = ns_1_St_18_Down_1;
      v_350 = ns_1_St_18_Down_2;
      if (ns_1_St_18_Down_1) {
        ns_1_St_18_Down_2_1 = ns_1_St_18_Down_2;
      } else {
        ns_1_St_18_Down_2_0 = ns_1_St_18_Down_2;
      };
    } else {
      p_state_1_St_18_Mid = 1;
      v_347 = p_state_1_St_18_Mid;
      nr_1_St_18_Mid = false;
      v_353 = nr_1_St_18_Mid;
      ns_1_St_18_Mid_1 = true;
      v_349 = ns_1_St_18_Mid_1;
      ns_1_St_18_Mid_2 = false;
      v_350 = ns_1_St_18_Mid_2;
      if (ns_1_St_18_Mid_1) {
        ns_1_St_18_Mid_2_1 = ns_1_St_18_Mid_2;
      } else {
        ns_1_St_18_Mid_2_0 = ns_1_St_18_Mid_2;
      };
    };
    p_state_1 = v_347;
    ns_1_1 = v_349;
    ns_1_2 = v_350;
    nr_1 = v_353;
  } else {
    ck_32_2_0 = ck_32_2;
    if (ck_32_2_0) {
      v_348 = 0;
      v_354 = true;
      v_351 = true;
      v_352 = true;
    } else {
      p_state_1_St_18_Up = 2;
      v_348 = p_state_1_St_18_Up;
      nr_1_St_18_Up = false;
      v_354 = nr_1_St_18_Up;
      ns_1_St_18_Up_1 = false;
      v_351 = ns_1_St_18_Up_1;
      ns_1_St_18_Up_2 = false;
      v_352 = ns_1_St_18_Up_2;
    };
    p_state_1 = v_348;
    ns_1_1 = v_351;
    ns_1_2 = v_352;
    nr_1 = v_354;
  };
  _out->p_state = p_state_1;
  v_82 = (_out->p_state==0);
  if (ns_1_1) {
    ns_1_2_1 = ns_1_2;
  } else {
    ns_1_2_0 = ns_1_2;
  };
  if (!(ck_32_1)) {
    if (!(ck_32_2_0)) {
      if (ns_1_St_18_Up_1) {
        ns_1_St_18_Up_2_1 = ns_1_St_18_Up_2;
      } else {
        ns_1_St_18_Up_2_0 = ns_1_St_18_Up_2;
      };
    };
  };
  if (s_1_1) {
    s_1_2_1 = s_1_2;
  } else {
    s_1_2_0 = s_1_2;
  };
  if (!(ck_31_1)) {
    if (!(ck_31_2_0)) {
      if (v_115_1) {
        v_115_2_1 = v_115_2;
      } else {
        v_115_2_0 = v_115_2;
      };
      if (s_1_St_18_Up_1) {
        s_1_St_18_Up_2_1 = s_1_St_18_Up_2;
      } else {
        s_1_St_18_Up_2_0 = s_1_St_18_Up_2;
      };
    };
  };
  if (ck_29_1) {
    ck_29_2_1 = ck_29_2;
    if (ck_29_2_1) {
      v_105 = !(c2);
      if (v_105) {
        v_107 = true;
        v_106_1 = true;
        v_106_2 = false;
      } else {
        v_107 = self->pnr_2;
        v_106_1 = true;
        v_106_2 = true;
      };
      v_104 = !(c1);
      if (v_104) {
        r_2_St_19_All = true;
      } else {
        r_2_St_19_All = v_107;
      };
      v_377 = r_2_St_19_All;
      if (v_104) {
        s_2_St_19_All_1 = false;
      } else {
        s_2_St_19_All_1 = v_106_1;
      };
      v_373 = s_2_St_19_All_1;
      if (v_104) {
        s_2_St_19_All_2 = false;
      } else {
        s_2_St_19_All_2 = v_106_2;
      };
      v_374 = s_2_St_19_All_2;
    } else {
      if (c2) {
        v_112 = true;
      } else {
        v_112 = self->pnr_2;
      };
      if (c1) {
        r_2_St_19_None = true;
      } else {
        r_2_St_19_None = v_112;
      };
      if (c2) {
        v_111_1 = true;
      } else {
        v_111_1 = true;
      };
      if (c1) {
        s_2_St_19_None_1 = false;
      } else {
        s_2_St_19_None_1 = v_111_1;
      };
      if (c2) {
        v_111_2 = true;
      } else {
        v_111_2 = false;
      };
      if (c1) {
        s_2_St_19_None_2 = false;
      } else {
        s_2_St_19_None_2 = v_111_2;
      };
      v_377 = r_2_St_19_None;
      v_373 = s_2_St_19_None_1;
      v_374 = s_2_St_19_None_2;
      if (v_111_1) {
        v_111_2_1 = v_111_2;
      } else {
        v_111_2_0 = v_111_2;
      };
    };
    s_2_1 = v_373;
    s_2_2 = v_374;
    r_2 = v_377;
  } else {
    ck_29_2_0 = ck_29_2;
    if (ck_29_2_0) {
      v_378 = true;
      v_375 = true;
      v_376 = true;
    } else {
      if (c2) {
        v_110 = true;
        v_109_1 = true;
        v_109_2 = true;
      } else {
        v_110 = self->pnr_2;
        v_109_1 = false;
        v_109_2 = false;
      };
      v_108 = !(c1);
      if (v_108) {
        r_2_St_19_Some = true;
      } else {
        r_2_St_19_Some = v_110;
      };
      v_378 = r_2_St_19_Some;
      if (v_108) {
        s_2_St_19_Some_1 = true;
      } else {
        s_2_St_19_Some_1 = v_109_1;
      };
      v_375 = s_2_St_19_Some_1;
      if (v_108) {
        s_2_St_19_Some_2 = false;
      } else {
        s_2_St_19_Some_2 = v_109_2;
      };
      v_376 = s_2_St_19_Some_2;
      if (v_109_1) {
        v_109_2_1 = v_109_2;
      } else {
        v_109_2_0 = v_109_2;
      };
      if (s_2_St_19_Some_1) {
        s_2_St_19_Some_2_1 = s_2_St_19_Some_2;
      } else {
        s_2_St_19_Some_2_0 = s_2_St_19_Some_2;
      };
    };
    s_2_1 = v_375;
    s_2_2 = v_376;
    r_2 = v_378;
  };
  ck_30_1 = s_2_1;
  ck_30_2 = s_2_2;
  if (ck_30_1) {
    ck_30_2_1 = ck_30_2;
    if (ck_30_2_1) {
      l_state_1_St_19_All = 2;
      v_363 = l_state_1_St_19_All;
      nr_2_St_19_All = false;
      v_369 = nr_2_St_19_All;
      ns_2_St_19_All_1 = true;
      v_365 = ns_2_St_19_All_1;
      ns_2_St_19_All_2 = true;
      v_366 = ns_2_St_19_All_2;
    } else {
      l_state_1_St_19_None = 0;
      nr_2_St_19_None = false;
      ns_2_St_19_None_1 = true;
      ns_2_St_19_None_2 = false;
      v_363 = l_state_1_St_19_None;
      v_369 = nr_2_St_19_None;
      v_365 = ns_2_St_19_None_1;
      v_366 = ns_2_St_19_None_2;
    };
    l_state_1 = v_363;
    ns_2_1 = v_365;
    ns_2_2 = v_366;
    nr_2 = v_369;
  } else {
    ck_30_2_0 = ck_30_2;
    if (ck_30_2_0) {
      v_364 = 0;
      v_370 = true;
      v_367 = true;
      v_368 = true;
    } else {
      l_state_1_St_19_Some = 1;
      v_364 = l_state_1_St_19_Some;
      nr_2_St_19_Some = false;
      v_370 = nr_2_St_19_Some;
      ns_2_St_19_Some_1 = false;
      v_367 = ns_2_St_19_Some_1;
      ns_2_St_19_Some_2 = false;
      v_368 = ns_2_St_19_Some_2;
      if (ns_2_St_19_Some_1) {
        ns_2_St_19_Some_2_1 = ns_2_St_19_Some_2;
      } else {
        ns_2_St_19_Some_2_0 = ns_2_St_19_Some_2;
      };
    };
    l_state_1 = v_364;
    ns_2_1 = v_367;
    ns_2_2 = v_368;
    nr_2 = v_370;
  };
  _out->l_state = l_state_1;
  v_80 = (_out->l_state==0);
  v_88 = (_out->l_state==2);
  if (ns_2_1) {
    ns_2_2_1 = ns_2_2;
  } else {
    ns_2_2_0 = ns_2_2;
  };
  if (ck_30_1) {
    if (ck_30_2_1) {
      if (ns_2_St_19_All_1) {
        ns_2_St_19_All_2_1 = ns_2_St_19_All_2;
      } else {
        ns_2_St_19_All_2_0 = ns_2_St_19_All_2;
      };
    } else {
      if (ns_2_St_19_None_1) {
        ns_2_St_19_None_2_1 = ns_2_St_19_None_2;
      } else {
        ns_2_St_19_None_2_0 = ns_2_St_19_None_2;
      };
    };
  };
  if (s_2_1) {
    s_2_2_1 = s_2_2;
  } else {
    s_2_2_0 = s_2_2;
  };
  if (ck_29_1) {
    if (ck_29_2_1) {
      if (v_106_1) {
        v_106_2_1 = v_106_2;
      } else {
        v_106_2_0 = v_106_2;
      };
      if (s_2_St_19_All_1) {
        s_2_St_19_All_2_1 = s_2_St_19_All_2;
      } else {
        s_2_St_19_All_2_0 = s_2_St_19_All_2;
      };
    } else {
      if (s_2_St_19_None_1) {
        s_2_St_19_None_2_1 = s_2_St_19_None_2;
      } else {
        s_2_St_19_None_2_0 = s_2_St_19_None_2;
      };
    };
  };
  if (self->ck_27_1) {
    if (c_2) {
      r_3_St_20_Closed = true;
      s_3_St_20_Closed_1 = false;
    } else {
      r_3_St_20_Closed = self->pnr_3;
      s_3_St_20_Closed_1 = true;
    };
    r_3 = r_3_St_20_Closed;
    s_3_1 = s_3_St_20_Closed_1;
  } else {
    v_103 = !(c_2);
    if (v_103) {
      r_3_St_20_Open = true;
    } else {
      r_3_St_20_Open = self->pnr_3;
    };
    r_3 = r_3_St_20_Open;
    if (v_103) {
      s_3_St_20_Open_1 = true;
    } else {
      s_3_St_20_Open_1 = false;
    };
    s_3_1 = s_3_St_20_Open_1;
  };
  ck_28_1 = s_3_1;
  if (ck_28_1) {
    w_open_1_St_20_Closed = false;
    nr_3_St_20_Closed = false;
    ns_3_St_20_Closed_1 = true;
    w_open_1 = w_open_1_St_20_Closed;
    nr_3 = nr_3_St_20_Closed;
    ns_3_1 = ns_3_St_20_Closed_1;
  } else {
    w_open_1_St_20_Open = true;
    w_open_1 = w_open_1_St_20_Open;
    nr_3_St_20_Open = false;
    nr_3 = nr_3_St_20_Open;
    ns_3_St_20_Open_1 = false;
    ns_3_1 = ns_3_St_20_Open_1;
  };
  _out->w_open = w_open_1;
  v_78 = !(_out->w_open);
  if (self->ck_25_1) {
    if (c_1) {
      r_4_St_21_Off = true;
      s_4_St_21_Off_1 = false;
    } else {
      r_4_St_21_Off = self->pnr_4;
      s_4_St_21_Off_1 = true;
    };
    r_4 = r_4_St_21_Off;
    s_4_1 = s_4_St_21_Off_1;
  } else {
    v_102 = !(c_1);
    if (v_102) {
      r_4_St_21_On = true;
    } else {
      r_4_St_21_On = self->pnr_4;
    };
    r_4 = r_4_St_21_On;
    if (v_102) {
      s_4_St_21_On_1 = true;
    } else {
      s_4_St_21_On_1 = false;
    };
    s_4_1 = s_4_St_21_On_1;
  };
  ck_26_1 = s_4_1;
  if (ck_26_1) {
    pc_on_1_St_21_Off = false;
    nr_4_St_21_Off = false;
    ns_4_St_21_Off_1 = true;
    pc_on_1 = pc_on_1_St_21_Off;
    nr_4 = nr_4_St_21_Off;
    ns_4_1 = ns_4_St_21_Off_1;
  } else {
    pc_on_1_St_21_On = true;
    pc_on_1 = pc_on_1_St_21_On;
    nr_4_St_21_On = false;
    nr_4 = nr_4_St_21_On;
    ns_4_St_21_On_1 = false;
    ns_4_1 = ns_4_St_21_On_1;
  };
  _out->pc_on = pc_on_1;
  v_76 = !(_out->pc_on);
  if (self->ck_23_1) {
    if (arrived) {
      r_5_St_22_Not_Present = true;
      s_5_St_22_Not_Present_1 = false;
    } else {
      r_5_St_22_Not_Present = self->pnr_5;
      s_5_St_22_Not_Present_1 = true;
    };
    r_5 = r_5_St_22_Not_Present;
    s_5_1 = s_5_St_22_Not_Present_1;
  } else {
    if (arrived) {
      r_5_St_22_Preent = true;
    } else {
      r_5_St_22_Preent = self->pnr_5;
    };
    r_5 = r_5_St_22_Preent;
    if (arrived) {
      s_5_St_22_Preent_1 = true;
    } else {
      s_5_St_22_Preent_1 = false;
    };
    s_5_1 = s_5_St_22_Preent_1;
  };
  ck_24_1 = s_5_1;
  if (ck_24_1) {
    presence_1_St_22_Not_Present = false;
    nr_5_St_22_Not_Present = false;
    ns_5_St_22_Not_Present_1 = true;
    presence_1 = presence_1_St_22_Not_Present;
    nr_5 = nr_5_St_22_Not_Present;
    ns_5_1 = ns_5_St_22_Not_Present_1;
  } else {
    presence_1_St_22_Preent = true;
    presence_1 = presence_1_St_22_Preent;
    nr_5_St_22_Preent = false;
    nr_5 = nr_5_St_22_Preent;
    ns_5_St_22_Preent_1 = false;
    ns_5_1 = ns_5_St_22_Preent_1;
  };
  _out->presence = presence_1;
  v_86 = !(_out->presence);
  v_89 = !(_out->presence);
  if (self->ck_21_1) {
    if (c) {
      r_6_St_23_Off = true;
      s_6_St_23_Off_1 = false;
    } else {
      r_6_St_23_Off = self->pnr_6;
      s_6_St_23_Off_1 = true;
    };
    r_6 = r_6_St_23_Off;
    s_6_1 = s_6_St_23_Off_1;
  } else {
    v_101 = !(c);
    if (v_101) {
      r_6_St_23_On = true;
    } else {
      r_6_St_23_On = self->pnr_6;
    };
    r_6 = r_6_St_23_On;
    if (v_101) {
      s_6_St_23_On_1 = true;
    } else {
      s_6_St_23_On_1 = false;
    };
    s_6_1 = s_6_St_23_On_1;
  };
  ck_22_1 = s_6_1;
  if (ck_22_1) {
    r_on_St_23_Off = false;
    nr_6_St_23_Off = false;
    ns_6_St_23_Off_1 = true;
    r_on = r_on_St_23_Off;
    nr_6 = nr_6_St_23_Off;
    ns_6_1 = ns_6_St_23_Off_1;
  } else {
    r_on_St_23_On = true;
    r_on = r_on_St_23_On;
    nr_6_St_23_On = false;
    nr_6 = nr_6_St_23_On;
    ns_6_St_23_On_1 = false;
    ns_6_1 = ns_6_St_23_On_1;
  };
  _out->r_on1 = r_on;
  v_75 = !(_out->r_on1);
  v_77 = (v_75&&v_76);
  v_79 = (v_77&&v_78);
  v_81 = (v_79&&v_80);
  v_83 = (v_81&&v_82);
  v_85 = (v_83&&v_84);
  rule6 = (_out->presence||v_85);
  if (self->ck_19_1) {
    v_100 = !(c_porta_1);
    if (v_100) {
      r_7_St_24_Closed = true;
      s_7_St_24_Closed_1 = false;
    } else {
      r_7_St_24_Closed = self->pnr_7;
      s_7_St_24_Closed_1 = true;
    };
    r_7 = r_7_St_24_Closed;
    s_7_1 = s_7_St_24_Closed_1;
  } else {
    if (c_porta_1) {
      r_7_St_24_Open = true;
    } else {
      r_7_St_24_Open = self->pnr_7;
    };
    r_7 = r_7_St_24_Open;
    if (c_porta_1) {
      s_7_St_24_Open_1 = true;
    } else {
      s_7_St_24_Open_1 = false;
    };
    s_7_1 = s_7_St_24_Open_1;
  };
  ck_20_1 = s_7_1;
  if (ck_20_1) {
    porta_open_St_24_Closed = false;
    nr_7_St_24_Closed = false;
    ns_7_St_24_Closed_1 = true;
    porta_open = porta_open_St_24_Closed;
    nr_7 = nr_7_St_24_Closed;
    ns_7_1 = ns_7_St_24_Closed_1;
  } else {
    porta_open_St_24_Open = true;
    porta_open = porta_open_St_24_Open;
    nr_7_St_24_Open = false;
    nr_7 = nr_7_St_24_Open;
    ns_7_St_24_Open_1 = false;
    ns_7_1 = ns_7_St_24_Open_1;
  };
  _out->p_open = porta_open;
  v_92 = !(_out->p_open);
  v_94 = !(_out->p_open);
  v_95 = (_out->presence&&v_94);
  rule2 = !(v_95);
  if (self->ck_1) {
    if (shift) {
      r_8_St_25_Dia = true;
      s_8_St_25_Dia_1 = false;
    } else {
      r_8_St_25_Dia = self->pnr_8;
      s_8_St_25_Dia_1 = true;
    };
    r_8 = r_8_St_25_Dia;
    s_8_1 = s_8_St_25_Dia_1;
  } else {
    if (shift) {
      r_8_St_25_Noite = true;
    } else {
      r_8_St_25_Noite = self->pnr_8;
    };
    r_8 = r_8_St_25_Noite;
    if (shift) {
      s_8_St_25_Noite_1 = true;
    } else {
      s_8_St_25_Noite_1 = false;
    };
    s_8_1 = s_8_St_25_Noite_1;
  };
  ck_18_1 = s_8_1;
  if (ck_18_1) {
    turno_St_25_Dia = false;
    nr_8_St_25_Dia = false;
    ns_8_St_25_Dia_1 = true;
    turno = turno_St_25_Dia;
    nr_8 = nr_8_St_25_Dia;
    ns_8_1 = ns_8_St_25_Dia_1;
  } else {
    turno_St_25_Noite = true;
    turno = turno_St_25_Noite;
    nr_8_St_25_Noite = false;
    nr_8 = nr_8_St_25_Noite;
    ns_8_St_25_Noite_1 = false;
    ns_8_1 = ns_8_St_25_Noite_1;
  };
  _out->night = turno;
  v = !(_out->night);
  v_72 = (_out->presence&&v);
  v_73 = !(v_72);
  rule7 = (v_73||v_74);
  v_87 = (v_86&&_out->night);
  rule5 = (v_87||v_88);
  v_90 = (v_89&&_out->night);
  rule4 = (v_90||_out->p_open);
  v_91 = !(_out->night);
  v_93 = (v_91&&v_92);
  rule3 = !(v_93);
  v_96 = (rule2&&rule3);
  v_97 = (v_96&&rule4);
  v_98 = (v_97&&rule6);
  v_99 = (v_98&&rule7);
  self->pnr = nr;
  self->v_339 = ns_1_3;
  self->v_340 = ns_2_3;
  self->pnr_1 = nr_1;
  self->v_355 = ns_1_1;
  self->v_356 = ns_1_2;
  self->pnr_2 = nr_2;
  self->v_371 = ns_2_1;
  self->v_372 = ns_2_2;
  self->pnr_3 = nr_3;
  self->ck_27_1 = ns_3_1;
  self->pnr_4 = nr_4;
  self->ck_25_1 = ns_4_1;
  self->pnr_5 = nr_5;
  self->ck_23_1 = ns_5_1;
  self->pnr_6 = nr_6;
  self->ck_21_1 = ns_6_1;
  self->pnr_7 = nr_7;
  self->ck_19_1 = ns_7_1;
  self->pnr_8 = nr_8;
  self->ck_1 = ns_8_1;;
}

