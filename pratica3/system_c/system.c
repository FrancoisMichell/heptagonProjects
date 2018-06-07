/* --- Generated the 6/6/2018 at 23:19 --- */
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
  self->v_135 = false;
  self->v_136 = false;
}

void System__rad_step(int up1, int down1, int up2, int down2, int c_rad1,
                      int c_rad2, System__rad_out* _out,
                      System__rad_mem* self) {
  
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
  int v_142;
  int v_141;
  int v_140;
  int v_139;
  int v_138;
  int v_137;
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
  ck_1 = self->v_135;
  ck_2 = self->v_136;
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
      v_141 = r_St_3_Eco;
      if (v_14) {
        s_St_3_Eco_1 = true;
      } else {
        s_St_3_Eco_1 = v_16_1;
      };
      v_137 = s_St_3_Eco_1;
      if (v_14) {
        s_St_3_Eco_2 = false;
      } else {
        s_St_3_Eco_2 = v_16_2;
      };
      v_138 = s_St_3_Eco_2;
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
      v_141 = r_St_3_Frostprotection;
      v_137 = s_St_3_Frostprotection_1;
      v_138 = s_St_3_Frostprotection_2;
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
    s_1 = v_137;
    s_2 = v_138;
    r = v_141;
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
      v_142 = r_St_3_High;
      if (v_8) {
        s_St_3_High_1 = true;
      } else {
        s_St_3_High_1 = v_11_1;
      };
      v_139 = s_St_3_High_1;
      if (v_8) {
        s_St_3_High_2 = true;
      } else {
        s_St_3_High_2 = v_11_2;
      };
      v_140 = s_St_3_High_2;
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
      v_142 = r_St_3_Off;
      v_139 = s_St_3_Off_1;
      v_140 = s_St_3_Off_2;
    };
    s_1 = v_139;
    s_2 = v_140;
    r = v_142;
  };
  ck_4_1 = s_1;
  ck_4_2 = s_2;
  if (ck_4_1) {
    ck_4_2_1 = ck_4_2;
    if (ck_4_2_1) {
      rad_power_St_3_Eco = 1500;
      v_125 = rad_power_St_3_Eco;
      rad_state_St_3_Eco = 2;
      v_127 = rad_state_St_3_Eco;
      nr_St_3_Eco = false;
      v_133 = nr_St_3_Eco;
      ns_St_3_Eco_1 = true;
      v_129 = ns_St_3_Eco_1;
      ns_St_3_Eco_2 = true;
      v_130 = ns_St_3_Eco_2;
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
      v_125 = rad_power_St_3_Frostprotection;
      v_127 = rad_state_St_3_Frostprotection;
      v_133 = nr_St_3_Frostprotection;
      v_129 = ns_St_3_Frostprotection_1;
      v_130 = ns_St_3_Frostprotection_2;
      if (ns_St_3_Frostprotection_1) {
        ns_St_3_Frostprotection_2_1 = ns_St_3_Frostprotection_2;
      } else {
        ns_St_3_Frostprotection_2_0 = ns_St_3_Frostprotection_2;
      };
    };
    _out->rad_power = v_125;
    _out->rad_state = v_127;
    ns_1 = v_129;
    ns_2 = v_130;
    nr = v_133;
  } else {
    ck_4_2_0 = ck_4_2;
    if (ck_4_2_0) {
      rad_power_St_3_High = 2000;
      v_126 = rad_power_St_3_High;
      rad_state_St_3_High = 3;
      v_128 = rad_state_St_3_High;
      nr_St_3_High = false;
      v_134 = nr_St_3_High;
      ns_St_3_High_1 = false;
      v_131 = ns_St_3_High_1;
      ns_St_3_High_2 = true;
      v_132 = ns_St_3_High_2;
    } else {
      rad_power_St_3_Off = 0;
      rad_state_St_3_Off = 0;
      nr_St_3_Off = false;
      ns_St_3_Off_1 = false;
      ns_St_3_Off_2 = false;
      v_126 = rad_power_St_3_Off;
      v_128 = rad_state_St_3_Off;
      v_134 = nr_St_3_Off;
      v_131 = ns_St_3_Off_1;
      v_132 = ns_St_3_Off_2;
    };
    _out->rad_power = v_126;
    _out->rad_state = v_128;
    ns_1 = v_131;
    ns_2 = v_132;
    nr = v_134;
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
  self->v_135 = ns_1;
  self->v_136 = ns_2;;
}

void System__washing_machine_reset(System__washing_machine_mem* self) {
  self->pnr = false;
  self->v_179 = true;
  self->v_180 = true;
  self->v_181 = true;
}

void System__washing_machine_step(int start, int finish, int c_wash,
                                  System__washing_machine_out* _out,
                                  System__washing_machine_mem* self) {
  
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
  int v_148;
  int v_147;
  int v_146;
  int v_145;
  int v_144;
  int v_143;
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
  ck_1 = self->v_179;
  ck_2 = self->v_180;
  ck_3 = self->v_181;
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
        v_200 = r_St_4_Off;
        v_182 = s_St_4_Off_1;
        v_183 = s_St_4_Off_2;
        v_184 = s_St_4_Off_3;
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
        v_200 = r_St_4_Rinse;
        if (finish) {
          s_St_4_Rinse_1 = true;
        } else {
          s_St_4_Rinse_1 = true;
        };
        v_182 = s_St_4_Rinse_1;
        if (finish) {
          s_St_4_Rinse_2 = false;
        } else {
          s_St_4_Rinse_2 = true;
        };
        v_183 = s_St_4_Rinse_2;
        if (finish) {
          s_St_4_Rinse_3 = false;
        } else {
          s_St_4_Rinse_3 = false;
        };
        v_184 = s_St_4_Rinse_3;
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
      v_194 = v_182;
      v_195 = v_183;
      v_196 = v_184;
      v_202 = v_200;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_201 = true;
        v_185 = true;
        v_186 = true;
        v_187 = true;
      } else {
        if (finish) {
          r_St_4_Spin = true;
        } else {
          r_St_4_Spin = self->pnr;
        };
        v_201 = r_St_4_Spin;
        if (finish) {
          s_St_4_Spin_1 = true;
        } else {
          s_St_4_Spin_1 = true;
        };
        v_185 = s_St_4_Spin_1;
        if (finish) {
          s_St_4_Spin_2 = true;
        } else {
          s_St_4_Spin_2 = false;
        };
        v_186 = s_St_4_Spin_2;
        if (finish) {
          s_St_4_Spin_3 = true;
        } else {
          s_St_4_Spin_3 = false;
        };
        v_187 = s_St_4_Spin_3;
      };
      v_194 = v_185;
      v_195 = v_186;
      v_196 = v_187;
      v_202 = v_201;
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
    s_1 = v_194;
    s_2 = v_195;
    s_3 = v_196;
    r = v_202;
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
        v_203 = r_St_4_Standby;
        if (c_wash) {
          s_St_4_Standby_1 = false;
        } else {
          s_St_4_Standby_1 = false;
        };
        v_188 = s_St_4_Standby_1;
        if (c_wash) {
          s_St_4_Standby_2 = true;
        } else {
          s_St_4_Standby_2 = true;
        };
        v_189 = s_St_4_Standby_2;
        if (c_wash) {
          s_St_4_Standby_3 = false;
        } else {
          s_St_4_Standby_3 = true;
        };
        v_190 = s_St_4_Standby_3;
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
        v_203 = r_St_4_Washing;
        v_188 = s_St_4_Washing_1;
        v_189 = s_St_4_Washing_2;
        v_190 = s_St_4_Washing_3;
      };
      v_197 = v_188;
      v_198 = v_189;
      v_199 = v_190;
      v_205 = v_203;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_204 = true;
        v_191 = true;
        v_192 = true;
        v_193 = true;
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
        v_204 = r_St_4_Water_fill;
        if (v_28) {
          s_St_4_Water_fill_1 = false;
        } else {
          s_St_4_Water_fill_1 = v_30_1;
        };
        v_191 = s_St_4_Water_fill_1;
        if (v_28) {
          s_St_4_Water_fill_2 = true;
        } else {
          s_St_4_Water_fill_2 = v_30_2;
        };
        v_192 = s_St_4_Water_fill_2;
        if (v_28) {
          s_St_4_Water_fill_3 = true;
        } else {
          s_St_4_Water_fill_3 = v_30_3;
        };
        v_193 = s_St_4_Water_fill_3;
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
      v_197 = v_191;
      v_198 = v_192;
      v_199 = v_193;
      v_205 = v_204;
    };
    s_1 = v_197;
    s_2 = v_198;
    s_3 = v_199;
    r = v_205;
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
        v_143 = wash_power_St_4_Off;
        v_149 = wash_state_St_4_Off;
        v_173 = nr_St_4_Off;
        v_155 = ns_St_4_Off_1;
        v_156 = ns_St_4_Off_2;
        v_157 = ns_St_4_Off_3;
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
        v_143 = wash_power_St_4_Rinse;
        wash_state_St_4_Rinse = 3;
        v_149 = wash_state_St_4_Rinse;
        nr_St_4_Rinse = false;
        v_173 = nr_St_4_Rinse;
        ns_St_4_Rinse_1 = true;
        v_155 = ns_St_4_Rinse_1;
        ns_St_4_Rinse_2 = true;
        v_156 = ns_St_4_Rinse_2;
        ns_St_4_Rinse_3 = false;
        v_157 = ns_St_4_Rinse_3;
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
      v_145 = v_143;
      v_151 = v_149;
      v_167 = v_155;
      v_168 = v_156;
      v_169 = v_157;
      v_175 = v_173;
    } else {
      ck_5_3_1_0 = ck_5_3;
      if (ck_5_3_1_0) {
        v_144 = 0;
        v_150 = 0;
        v_174 = true;
        v_158 = true;
        v_159 = true;
        v_160 = true;
      } else {
        wash_power_St_4_Spin = 800;
        v_144 = wash_power_St_4_Spin;
        wash_state_St_4_Spin = 4;
        v_150 = wash_state_St_4_Spin;
        nr_St_4_Spin = false;
        v_174 = nr_St_4_Spin;
        ns_St_4_Spin_1 = true;
        v_158 = ns_St_4_Spin_1;
        ns_St_4_Spin_2 = false;
        v_159 = ns_St_4_Spin_2;
        ns_St_4_Spin_3 = false;
        v_160 = ns_St_4_Spin_3;
      };
      v_145 = v_144;
      v_151 = v_150;
      v_167 = v_158;
      v_168 = v_159;
      v_169 = v_160;
      v_175 = v_174;
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
    _out->wash_power = v_145;
    _out->wash_state = v_151;
    ns_1 = v_167;
    ns_2 = v_168;
    ns_3 = v_169;
    nr = v_175;
  } else {
    ck_5_2_0 = ck_5_2;
    if (ck_5_2_0) {
      ck_5_3_0_1 = ck_5_3;
      if (ck_5_3_0_1) {
        wash_power_St_4_Standby = 0;
        v_146 = wash_power_St_4_Standby;
        wash_state_St_4_Standby = 5;
        v_152 = wash_state_St_4_Standby;
        nr_St_4_Standby = false;
        v_176 = nr_St_4_Standby;
        ns_St_4_Standby_1 = false;
        v_161 = ns_St_4_Standby_1;
        ns_St_4_Standby_2 = true;
        v_162 = ns_St_4_Standby_2;
        ns_St_4_Standby_3 = true;
        v_163 = ns_St_4_Standby_3;
      } else {
        wash_power_St_4_Washing = 250;
        wash_state_St_4_Washing = 2;
        nr_St_4_Washing = false;
        ns_St_4_Washing_1 = false;
        ns_St_4_Washing_2 = true;
        ns_St_4_Washing_3 = false;
        v_146 = wash_power_St_4_Washing;
        v_152 = wash_state_St_4_Washing;
        v_176 = nr_St_4_Washing;
        v_161 = ns_St_4_Washing_1;
        v_162 = ns_St_4_Washing_2;
        v_163 = ns_St_4_Washing_3;
      };
      v_148 = v_146;
      v_154 = v_152;
      v_170 = v_161;
      v_171 = v_162;
      v_172 = v_163;
      v_178 = v_176;
    } else {
      ck_5_3_0_0 = ck_5_3;
      if (ck_5_3_0_0) {
        v_147 = 0;
        v_153 = 0;
        v_177 = true;
        v_164 = true;
        v_165 = true;
        v_166 = true;
      } else {
        wash_power_St_4_Water_fill = 15;
        v_147 = wash_power_St_4_Water_fill;
        wash_state_St_4_Water_fill = 1;
        v_153 = wash_state_St_4_Water_fill;
        nr_St_4_Water_fill = false;
        v_177 = nr_St_4_Water_fill;
        ns_St_4_Water_fill_1 = false;
        v_164 = ns_St_4_Water_fill_1;
        ns_St_4_Water_fill_2 = false;
        v_165 = ns_St_4_Water_fill_2;
        ns_St_4_Water_fill_3 = false;
        v_166 = ns_St_4_Water_fill_3;
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
      v_148 = v_147;
      v_154 = v_153;
      v_170 = v_164;
      v_171 = v_165;
      v_172 = v_166;
      v_178 = v_177;
    };
    _out->wash_power = v_148;
    _out->wash_state = v_154;
    ns_1 = v_170;
    ns_2 = v_171;
    ns_3 = v_172;
    nr = v_178;
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
  self->v_179 = ns_1;
  self->v_180 = ns_2;
  self->v_181 = ns_3;;
}

void System__oven_reset(System__oven_mem* self) {
  self->pnr = false;
  self->v_236 = true;
  self->v_237 = false;
  self->v_238 = false;
}

void System__oven_step(int start, int finish, int temp_ok, int cold,
                       int c_oven, System__oven_out* _out,
                       System__oven_mem* self) {
  
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
  int v_211;
  int v_210;
  int v_209;
  int v_208;
  int v_207;
  int v_206;
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
  int v_244;
  int v_243;
  int v_242;
  int v_241;
  int v_240;
  int v_239;
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
  ck_1 = self->v_236;
  ck_2 = self->v_237;
  ck_3 = self->v_238;
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
        v_254 = r_St_5_Heat;
        v_239 = s_St_5_Heat_1;
        v_240 = s_St_5_Heat_2;
        v_241 = s_St_5_Heat_3;
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
        v_254 = r_St_5_Maintain;
        if (v_33) {
          s_St_5_Maintain_1 = false;
        } else {
          s_St_5_Maintain_1 = v_34_1;
        };
        v_239 = s_St_5_Maintain_1;
        if (v_33) {
          s_St_5_Maintain_2 = false;
        } else {
          s_St_5_Maintain_2 = v_34_2;
        };
        v_240 = s_St_5_Maintain_2;
        if (v_33) {
          s_St_5_Maintain_3 = true;
        } else {
          s_St_5_Maintain_3 = v_34_3;
        };
        v_241 = s_St_5_Maintain_3;
      };
      v_248 = v_239;
      v_249 = v_240;
      v_250 = v_241;
      v_256 = v_254;
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
        v_255 = true;
        v_242 = true;
        v_243 = true;
        v_244 = true;
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
        v_255 = r_St_5_Off;
        if (v_38) {
          s_St_5_Off_1 = true;
        } else {
          s_St_5_Off_1 = v_41_1;
        };
        v_242 = s_St_5_Off_1;
        if (v_38) {
          s_St_5_Off_2 = true;
        } else {
          s_St_5_Off_2 = v_41_2;
        };
        v_243 = s_St_5_Off_2;
        if (v_38) {
          s_St_5_Off_3 = true;
        } else {
          s_St_5_Off_3 = v_41_3;
        };
        v_244 = s_St_5_Off_3;
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
      v_248 = v_242;
      v_249 = v_243;
      v_250 = v_244;
      v_256 = v_255;
    };
    s_1 = v_248;
    s_2 = v_249;
    s_3 = v_250;
    r = v_256;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      v_251 = true;
      v_252 = true;
      v_253 = true;
      v_258 = true;
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
        v_257 = r_St_5_Reheat;
        v_245 = s_St_5_Reheat_1;
        v_246 = s_St_5_Reheat_2;
        v_247 = s_St_5_Reheat_3;
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
        v_257 = r_St_5_Standby;
        if (c_oven) {
          s_St_5_Standby_1 = true;
        } else {
          s_St_5_Standby_1 = false;
        };
        v_245 = s_St_5_Standby_1;
        if (c_oven) {
          s_St_5_Standby_2 = true;
        } else {
          s_St_5_Standby_2 = false;
        };
        v_246 = s_St_5_Standby_2;
        if (c_oven) {
          s_St_5_Standby_3 = true;
        } else {
          s_St_5_Standby_3 = false;
        };
        v_247 = s_St_5_Standby_3;
      };
      v_251 = v_245;
      v_252 = v_246;
      v_253 = v_247;
      v_258 = v_257;
    };
    s_1 = v_251;
    s_2 = v_252;
    s_3 = v_253;
    r = v_258;
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
        v_206 = oven_power_St_5_Heat;
        v_211 = oven_state_St_5_Heat;
        v_231 = nr_St_5_Heat;
        v_216 = ns_St_5_Heat_1;
        v_217 = ns_St_5_Heat_2;
        v_218 = ns_St_5_Heat_3;
      } else {
        oven_power_St_5_Maintain = 300;
        v_206 = oven_power_St_5_Maintain;
        oven_state_St_5_Maintain = 2;
        v_211 = oven_state_St_5_Maintain;
        nr_St_5_Maintain = false;
        v_231 = nr_St_5_Maintain;
        ns_St_5_Maintain_1 = true;
        v_216 = ns_St_5_Maintain_1;
        ns_St_5_Maintain_2 = true;
        v_217 = ns_St_5_Maintain_2;
        ns_St_5_Maintain_3 = false;
        v_218 = ns_St_5_Maintain_3;
      };
      v_208 = v_206;
      v_213 = v_211;
      v_225 = v_216;
      v_226 = v_217;
      v_227 = v_218;
      v_233 = v_231;
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
        v_207 = 0;
        v_212 = 0;
        v_232 = true;
        v_219 = true;
        v_220 = true;
        v_221 = true;
      } else {
        oven_power_St_5_Off = 0;
        v_207 = oven_power_St_5_Off;
        oven_state_St_5_Off = 0;
        v_212 = oven_state_St_5_Off;
        nr_St_5_Off = false;
        v_232 = nr_St_5_Off;
        ns_St_5_Off_1 = true;
        v_219 = ns_St_5_Off_1;
        ns_St_5_Off_2 = false;
        v_220 = ns_St_5_Off_2;
        ns_St_5_Off_3 = false;
        v_221 = ns_St_5_Off_3;
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
      v_208 = v_207;
      v_213 = v_212;
      v_225 = v_219;
      v_226 = v_220;
      v_227 = v_221;
      v_233 = v_232;
    };
    _out->oven_power = v_208;
    _out->oven_state = v_213;
    ns_1 = v_225;
    ns_2 = v_226;
    ns_3 = v_227;
    nr = v_233;
  } else {
    ck_6_2_0 = ck_6_2;
    if (ck_6_2_0) {
      ck_6_3_0_1 = ck_6_3;
      v_210 = 0;
      v_215 = 0;
      v_228 = true;
      v_229 = true;
      v_230 = true;
      v_235 = true;
    } else {
      ck_6_3_0_0 = ck_6_3;
      if (ck_6_3_0_0) {
        oven_power_St_5_Reheat = 1000;
        oven_state_St_5_Reheat = 3;
        nr_St_5_Reheat = false;
        ns_St_5_Reheat_1 = false;
        ns_St_5_Reheat_2 = false;
        ns_St_5_Reheat_3 = true;
        v_209 = oven_power_St_5_Reheat;
        v_214 = oven_state_St_5_Reheat;
        v_234 = nr_St_5_Reheat;
        v_222 = ns_St_5_Reheat_1;
        v_223 = ns_St_5_Reheat_2;
        v_224 = ns_St_5_Reheat_3;
      } else {
        oven_power_St_5_Standby = 0;
        v_209 = oven_power_St_5_Standby;
        oven_state_St_5_Standby = 4;
        v_214 = oven_state_St_5_Standby;
        nr_St_5_Standby = false;
        v_234 = nr_St_5_Standby;
        ns_St_5_Standby_1 = false;
        v_222 = ns_St_5_Standby_1;
        ns_St_5_Standby_2 = false;
        v_223 = ns_St_5_Standby_2;
        ns_St_5_Standby_3 = false;
        v_224 = ns_St_5_Standby_3;
      };
      v_210 = v_209;
      v_215 = v_214;
      v_228 = v_222;
      v_229 = v_223;
      v_230 = v_224;
      v_235 = v_234;
    };
    _out->oven_power = v_210;
    _out->oven_state = v_215;
    ns_1 = v_228;
    ns_2 = v_229;
    ns_3 = v_230;
    nr = v_235;
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
  self->v_236 = ns_1;
  self->v_237 = ns_2;
  self->v_238 = ns_3;;
}

void System__management_policy_reset(System__management_policy_mem* self) {
  self->pnr = false;
  self->v_269 = false;
  self->v_270 = false;
}

void System__management_policy_step(int eco_input, int comfort_input,
                                    System__management_policy_out* _out,
                                    System__management_policy_mem* self) {
  
  int v_268;
  int v_267;
  int v_266;
  int v_265;
  int v_264;
  int v_263;
  int v_262;
  int v_261;
  int v_260;
  int v_259;
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
  int v_276;
  int v_275;
  int v_274;
  int v_273;
  int v_272;
  int v_271;
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
  ck_1 = self->v_269;
  ck_2 = self->v_270;
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
      v_275 = r_St_6_Comfort;
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
      v_271 = s_St_6_Comfort_1;
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
      v_272 = s_St_6_Comfort_2;
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
      v_275 = r_St_6_Eco;
      v_271 = s_St_6_Eco_1;
      v_272 = s_St_6_Eco_2;
    };
    s_1 = v_271;
    s_2 = v_272;
    r = v_275;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_276 = true;
      v_273 = true;
      v_274 = true;
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
      v_276 = r_St_6_Minimal_safety;
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
      v_273 = s_St_6_Minimal_safety_1;
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
      v_274 = s_St_6_Minimal_safety_2;
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
    s_1 = v_273;
    s_2 = v_274;
    r = v_276;
  };
  ck_7_1 = s_1;
  ck_7_2 = s_2;
  if (ck_7_1) {
    ck_7_2_1 = ck_7_2;
    if (ck_7_2_1) {
      mode_St_6_Comfort_1 = true;
      v_259 = mode_St_6_Comfort_1;
      mode_St_6_Comfort_2 = true;
      v_260 = mode_St_6_Comfort_2;
      nr_St_6_Comfort = false;
      v_267 = nr_St_6_Comfort;
      ns_St_6_Comfort_1 = true;
      v_263 = ns_St_6_Comfort_1;
      ns_St_6_Comfort_2 = true;
      v_264 = ns_St_6_Comfort_2;
    } else {
      mode_St_6_Eco_1 = true;
      mode_St_6_Eco_2 = false;
      nr_St_6_Eco = false;
      ns_St_6_Eco_1 = true;
      ns_St_6_Eco_2 = false;
      v_259 = mode_St_6_Eco_1;
      v_260 = mode_St_6_Eco_2;
      v_267 = nr_St_6_Eco;
      v_263 = ns_St_6_Eco_1;
      v_264 = ns_St_6_Eco_2;
    };
    _out->mode_1 = v_259;
    _out->mode_2 = v_260;
    ns_1 = v_263;
    ns_2 = v_264;
    nr = v_267;
  } else {
    ck_7_2_0 = ck_7_2;
    if (ck_7_2_0) {
      v_261 = true;
      v_262 = true;
      v_268 = true;
      v_265 = true;
      v_266 = true;
    } else {
      mode_St_6_Minimal_safety_1 = false;
      v_261 = mode_St_6_Minimal_safety_1;
      mode_St_6_Minimal_safety_2 = false;
      v_262 = mode_St_6_Minimal_safety_2;
      nr_St_6_Minimal_safety = false;
      v_268 = nr_St_6_Minimal_safety;
      ns_St_6_Minimal_safety_1 = false;
      v_265 = ns_St_6_Minimal_safety_1;
      ns_St_6_Minimal_safety_2 = false;
      v_266 = ns_St_6_Minimal_safety_2;
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
    _out->mode_1 = v_261;
    _out->mode_2 = v_262;
    ns_1 = v_265;
    ns_2 = v_266;
    nr = v_268;
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
  self->v_269 = ns_1;
  self->v_270 = ns_2;;
}

void System__controller_reset(System__controller_mem* self) {
  self->pnr = false;
  self->v_289 = false;
  self->v_290 = false;
  self->pnr_1 = false;
  self->ck_22_1 = true;
  self->pnr_2 = false;
  self->ck_20_1 = true;
  self->pnr_3 = false;
  self->ck_18_1 = true;
  self->pnr_4 = false;
  self->ck_16_1 = true;
  self->pnr_5 = false;
  self->ck_14_1 = true;
  self->pnr_6 = false;
  self->v_327 = true;
  self->v_328 = false;
  self->v_329 = false;
  self->pnr_7 = false;
  self->v_386 = true;
  self->v_387 = true;
  self->v_388 = true;
  self->pnr_8 = false;
  self->v_423 = false;
  self->v_424 = false;
}

void System__controller_step(int push_porta, int push_janela, int rad_up1,
                             int rad_down1, int rad_up2, int rad_down2,
                             int wash_start, int wash_finish, int oven_start,
                             int oven_finish, int temp_ok, int cold,
                             int presence, int light_switch, int tv_switch,
                             int eco_in, int comfort_in,
                             System__controller_out* _out,
                             System__controller_mem* self) {
  Controller_controller__controller_controller_out Controller_controller__controller_controller_out_st;
  
  int v_288;
  int v_287;
  int v_286;
  int v_285;
  int v_284;
  int v_283;
  int v_282;
  int v_281;
  int v_280;
  int v_279;
  int ns_St_7_Comfort_2_0;
  int ns_St_7_Comfort_2_1;
  int mode_St_7_Comfort_2_0;
  int mode_St_7_Comfort_2_1;
  int ns_St_7_Eco_2_0;
  int ns_St_7_Eco_2_1;
  int mode_St_7_Eco_2_0;
  int mode_St_7_Eco_2_1;
  int ns_St_7_Minimal_safety_2_0;
  int ns_St_7_Minimal_safety_2_1;
  int mode_St_7_Minimal_safety_2_0;
  int mode_St_7_Minimal_safety_2_1;
  int ck_25_2_0;
  int ck_25_2_1;
  int nr_St_7_Comfort;
  int ns_St_7_Comfort_2;
  int ns_St_7_Comfort_1;
  int mode_St_7_Comfort_2;
  int mode_St_7_Comfort_1;
  int nr_St_7_Eco;
  int ns_St_7_Eco_2;
  int ns_St_7_Eco_1;
  int mode_St_7_Eco_2;
  int mode_St_7_Eco_1;
  int nr_St_7_Minimal_safety;
  int ns_St_7_Minimal_safety_2;
  int ns_St_7_Minimal_safety_1;
  int mode_St_7_Minimal_safety_2;
  int mode_St_7_Minimal_safety_1;
  int ck_25_2;
  int ck_25_1;
  int v_123_2_0;
  int v_123_2_1;
  int v_124;
  int v_123_2;
  int v_123_1;
  int v_121_2_0;
  int v_121_2_1;
  int v_122;
  int v_121_2;
  int v_121_1;
  int v_119_2_0;
  int v_119_2_1;
  int v_120;
  int v_119_2;
  int v_119_1;
  int v_296;
  int v_295;
  int v_294;
  int v_293;
  int v_292;
  int v_291;
  int s_St_7_Comfort_2_0;
  int s_St_7_Comfort_2_1;
  int s_St_7_Eco_2_0;
  int s_St_7_Eco_2_1;
  int s_St_7_Minimal_safety_2_0;
  int s_St_7_Minimal_safety_2_1;
  int ck_24_2_0;
  int ck_24_2_1;
  int r_St_7_Comfort;
  int s_St_7_Comfort_2;
  int s_St_7_Comfort_1;
  int r_St_7_Eco;
  int s_St_7_Eco_2;
  int s_St_7_Eco_1;
  int r_St_7_Minimal_safety;
  int s_St_7_Minimal_safety_2;
  int s_St_7_Minimal_safety_1;
  int ck_24_2;
  int ck_24_1;
  int nr_1_St_8_Ocupied;
  int ns_1_St_8_Ocupied_1;
  int occupied_1_St_8_Ocupied;
  int nr_1_St_8_Empty;
  int ns_1_St_8_Empty_1;
  int occupied_1_St_8_Empty;
  int ck_23_1;
  int r_1_St_8_Ocupied;
  int s_1_St_8_Ocupied_1;
  int r_1_St_8_Empty;
  int s_1_St_8_Empty_1;
  int nr_2_St_9_Ligado;
  int ns_2_St_9_Ligado_1;
  int source_on_1_St_9_Ligado;
  int nr_2_St_9_Desligado;
  int ns_2_St_9_Desligado_1;
  int source_on_1_St_9_Desligado;
  int ck_21_1;
  int v_118;
  int v_117;
  int v_116;
  int v_115;
  int v_114;
  int v_113;
  int r_2_St_9_Ligado;
  int s_2_St_9_Ligado_1;
  int r_2_St_9_Desligado;
  int s_2_St_9_Desligado_1;
  int nr_3_St_10_Ligado;
  int ns_3_St_10_Ligado_1;
  int source_on_St_10_Ligado;
  int nr_3_St_10_Desligado;
  int ns_3_St_10_Desligado_1;
  int source_on_St_10_Desligado;
  int ck_19_1;
  int v_112;
  int v_111;
  int v_110;
  int v_109;
  int v_108;
  int v_107;
  int r_3_St_10_Ligado;
  int s_3_St_10_Ligado_1;
  int r_3_St_10_Desligado;
  int s_3_St_10_Desligado_1;
  int nr_4_St_11_Open;
  int ns_4_St_11_Open_1;
  int door_open_2_St_11_Open;
  int nr_4_St_11_Closed;
  int ns_4_St_11_Closed_1;
  int door_open_2_St_11_Closed;
  int ck_17_1;
  int v_106;
  int v_105;
  int v_104;
  int r_4_St_11_Open;
  int s_4_St_11_Open_1;
  int r_4_St_11_Closed;
  int s_4_St_11_Closed_1;
  int nr_5_St_12_Open;
  int ns_5_St_12_Open_1;
  int door_open_1_St_12_Open;
  int nr_5_St_12_Closed;
  int ns_5_St_12_Closed_1;
  int door_open_1_St_12_Closed;
  int ck_15_1;
  int v_103;
  int v_102;
  int v_101;
  int r_5_St_12_Open;
  int s_5_St_12_Open_1;
  int r_5_St_12_Closed;
  int s_5_St_12_Closed_1;
  int v_326;
  int v_325;
  int v_324;
  int v_323;
  int v_322;
  int v_321;
  int v_320;
  int v_319;
  int v_318;
  int v_317;
  int v_316;
  int v_315;
  int v_314;
  int v_313;
  int v_312;
  int v_311;
  int v_310;
  int v_309;
  int v_308;
  int v_307;
  int v_306;
  int v_305;
  int v_304;
  int v_303;
  int v_302;
  int v_301;
  int v_300;
  int v_299;
  int v_298;
  int v_297;
  int ns_6_St_13_Standby_2_0;
  int ns_6_St_13_Standby_3_0_0;
  int ns_6_St_13_Standby_3_0_1;
  int ns_6_St_13_Standby_2_1;
  int ns_6_St_13_Standby_3_1_0;
  int ns_6_St_13_Standby_3_1_1;
  int ns_6_St_13_Reheat_2_0;
  int ns_6_St_13_Reheat_3_0_0;
  int ns_6_St_13_Reheat_3_0_1;
  int ns_6_St_13_Reheat_2_1;
  int ns_6_St_13_Reheat_3_1_0;
  int ns_6_St_13_Reheat_3_1_1;
  int ns_6_St_13_Maintain_2_0;
  int ns_6_St_13_Maintain_3_0_0;
  int ns_6_St_13_Maintain_3_0_1;
  int ns_6_St_13_Maintain_2_1;
  int ns_6_St_13_Maintain_3_1_0;
  int ns_6_St_13_Maintain_3_1_1;
  int ns_6_St_13_Heat_2_0;
  int ns_6_St_13_Heat_3_0_0;
  int ns_6_St_13_Heat_3_0_1;
  int ns_6_St_13_Heat_2_1;
  int ns_6_St_13_Heat_3_1_0;
  int ns_6_St_13_Heat_3_1_1;
  int ns_6_St_13_Off_2_0;
  int ns_6_St_13_Off_3_0_0;
  int ns_6_St_13_Off_3_0_1;
  int ns_6_St_13_Off_2_1;
  int ns_6_St_13_Off_3_1_0;
  int ns_6_St_13_Off_3_1_1;
  int ck_13_2_0;
  int ck_13_3_0_0;
  int ck_13_3_0_1;
  int ck_13_2_1;
  int ck_13_3_1_0;
  int ck_13_3_1_1;
  int nr_6_St_13_Standby;
  int ns_6_St_13_Standby_3;
  int ns_6_St_13_Standby_2;
  int ns_6_St_13_Standby_1;
  int oven_state_1_St_13_Standby;
  int oven_power_1_St_13_Standby;
  int nr_6_St_13_Reheat;
  int ns_6_St_13_Reheat_3;
  int ns_6_St_13_Reheat_2;
  int ns_6_St_13_Reheat_1;
  int oven_state_1_St_13_Reheat;
  int oven_power_1_St_13_Reheat;
  int nr_6_St_13_Maintain;
  int ns_6_St_13_Maintain_3;
  int ns_6_St_13_Maintain_2;
  int ns_6_St_13_Maintain_1;
  int oven_state_1_St_13_Maintain;
  int oven_power_1_St_13_Maintain;
  int nr_6_St_13_Heat;
  int ns_6_St_13_Heat_3;
  int ns_6_St_13_Heat_2;
  int ns_6_St_13_Heat_1;
  int oven_state_1_St_13_Heat;
  int oven_power_1_St_13_Heat;
  int nr_6_St_13_Off;
  int ns_6_St_13_Off_3;
  int ns_6_St_13_Off_2;
  int ns_6_St_13_Off_1;
  int oven_state_1_St_13_Off;
  int oven_power_1_St_13_Off;
  int ck_13_3;
  int ck_13_2;
  int ck_13_1;
  int v_99_2_0;
  int v_99_3_0_0;
  int v_99_3_0_1;
  int v_99_2_1;
  int v_99_3_1_0;
  int v_99_3_1_1;
  int v_100;
  int v_99_3;
  int v_99_2;
  int v_99_1;
  int v_98;
  int v_97;
  int v_96;
  int v_94_2_0;
  int v_94_3_0_0;
  int v_94_3_0_1;
  int v_94_2_1;
  int v_94_3_1_0;
  int v_94_3_1_1;
  int v_95;
  int v_94_3;
  int v_94_2;
  int v_94_1;
  int v_92_2_0;
  int v_92_3_0_0;
  int v_92_3_0_1;
  int v_92_2_1;
  int v_92_3_1_0;
  int v_92_3_1_1;
  int v_93;
  int v_92_3;
  int v_92_2;
  int v_92_1;
  int v_91;
  int v_89_2_0;
  int v_89_3_0_0;
  int v_89_3_0_1;
  int v_89_2_1;
  int v_89_3_1_0;
  int v_89_3_1_1;
  int v_90;
  int v_89_3;
  int v_89_2;
  int v_89_1;
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
  int s_6_St_13_Standby_2_0;
  int s_6_St_13_Standby_3_0_0;
  int s_6_St_13_Standby_3_0_1;
  int s_6_St_13_Standby_2_1;
  int s_6_St_13_Standby_3_1_0;
  int s_6_St_13_Standby_3_1_1;
  int s_6_St_13_Reheat_2_0;
  int s_6_St_13_Reheat_3_0_0;
  int s_6_St_13_Reheat_3_0_1;
  int s_6_St_13_Reheat_2_1;
  int s_6_St_13_Reheat_3_1_0;
  int s_6_St_13_Reheat_3_1_1;
  int s_6_St_13_Maintain_2_0;
  int s_6_St_13_Maintain_3_0_0;
  int s_6_St_13_Maintain_3_0_1;
  int s_6_St_13_Maintain_2_1;
  int s_6_St_13_Maintain_3_1_0;
  int s_6_St_13_Maintain_3_1_1;
  int s_6_St_13_Heat_2_0;
  int s_6_St_13_Heat_3_0_0;
  int s_6_St_13_Heat_3_0_1;
  int s_6_St_13_Heat_2_1;
  int s_6_St_13_Heat_3_1_0;
  int s_6_St_13_Heat_3_1_1;
  int s_6_St_13_Off_2_0;
  int s_6_St_13_Off_3_0_0;
  int s_6_St_13_Off_3_0_1;
  int s_6_St_13_Off_2_1;
  int s_6_St_13_Off_3_1_0;
  int s_6_St_13_Off_3_1_1;
  int ck_12_2_0;
  int ck_12_3_0_0;
  int ck_12_3_0_1;
  int ck_12_2_1;
  int ck_12_3_1_0;
  int ck_12_3_1_1;
  int r_6_St_13_Standby;
  int s_6_St_13_Standby_3;
  int s_6_St_13_Standby_2;
  int s_6_St_13_Standby_1;
  int r_6_St_13_Reheat;
  int s_6_St_13_Reheat_3;
  int s_6_St_13_Reheat_2;
  int s_6_St_13_Reheat_1;
  int r_6_St_13_Maintain;
  int s_6_St_13_Maintain_3;
  int s_6_St_13_Maintain_2;
  int s_6_St_13_Maintain_1;
  int r_6_St_13_Heat;
  int s_6_St_13_Heat_3;
  int s_6_St_13_Heat_2;
  int s_6_St_13_Heat_1;
  int r_6_St_13_Off;
  int s_6_St_13_Off_3;
  int s_6_St_13_Off_2;
  int s_6_St_13_Off_1;
  int ck_12_3;
  int ck_12_2;
  int ck_12_1;
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
  int v_361;
  int v_360;
  int v_359;
  int v_358;
  int v_357;
  int v_356;
  int v_355;
  int v_354;
  int v_353;
  int v_352;
  int v_351;
  int v_350;
  int ns_7_St_14_Standby_2_0;
  int ns_7_St_14_Standby_3_0_0;
  int ns_7_St_14_Standby_3_0_1;
  int ns_7_St_14_Standby_2_1;
  int ns_7_St_14_Standby_3_1_0;
  int ns_7_St_14_Standby_3_1_1;
  int ns_7_St_14_Spin_2_0;
  int ns_7_St_14_Spin_3_0_0;
  int ns_7_St_14_Spin_3_0_1;
  int ns_7_St_14_Spin_2_1;
  int ns_7_St_14_Spin_3_1_0;
  int ns_7_St_14_Spin_3_1_1;
  int ns_7_St_14_Rinse_2_0;
  int ns_7_St_14_Rinse_3_0_0;
  int ns_7_St_14_Rinse_3_0_1;
  int ns_7_St_14_Rinse_2_1;
  int ns_7_St_14_Rinse_3_1_0;
  int ns_7_St_14_Rinse_3_1_1;
  int ns_7_St_14_Washing_2_0;
  int ns_7_St_14_Washing_3_0_0;
  int ns_7_St_14_Washing_3_0_1;
  int ns_7_St_14_Washing_2_1;
  int ns_7_St_14_Washing_3_1_0;
  int ns_7_St_14_Washing_3_1_1;
  int ns_7_St_14_Water_fill_2_0;
  int ns_7_St_14_Water_fill_3_0_0;
  int ns_7_St_14_Water_fill_3_0_1;
  int ns_7_St_14_Water_fill_2_1;
  int ns_7_St_14_Water_fill_3_1_0;
  int ns_7_St_14_Water_fill_3_1_1;
  int ns_7_St_14_Off_2_0;
  int ns_7_St_14_Off_3_0_0;
  int ns_7_St_14_Off_3_0_1;
  int ns_7_St_14_Off_2_1;
  int ns_7_St_14_Off_3_1_0;
  int ns_7_St_14_Off_3_1_1;
  int ck_11_2_0;
  int ck_11_3_0_0;
  int ck_11_3_0_1;
  int ck_11_2_1;
  int ck_11_3_1_0;
  int ck_11_3_1_1;
  int nr_7_St_14_Standby;
  int ns_7_St_14_Standby_3;
  int ns_7_St_14_Standby_2;
  int ns_7_St_14_Standby_1;
  int wash_state_1_St_14_Standby;
  int wash_power_1_St_14_Standby;
  int nr_7_St_14_Spin;
  int ns_7_St_14_Spin_3;
  int ns_7_St_14_Spin_2;
  int ns_7_St_14_Spin_1;
  int wash_state_1_St_14_Spin;
  int wash_power_1_St_14_Spin;
  int nr_7_St_14_Rinse;
  int ns_7_St_14_Rinse_3;
  int ns_7_St_14_Rinse_2;
  int ns_7_St_14_Rinse_1;
  int wash_state_1_St_14_Rinse;
  int wash_power_1_St_14_Rinse;
  int nr_7_St_14_Washing;
  int ns_7_St_14_Washing_3;
  int ns_7_St_14_Washing_2;
  int ns_7_St_14_Washing_1;
  int wash_state_1_St_14_Washing;
  int wash_power_1_St_14_Washing;
  int nr_7_St_14_Water_fill;
  int ns_7_St_14_Water_fill_3;
  int ns_7_St_14_Water_fill_2;
  int ns_7_St_14_Water_fill_1;
  int wash_state_1_St_14_Water_fill;
  int wash_power_1_St_14_Water_fill;
  int nr_7_St_14_Off;
  int ns_7_St_14_Off_3;
  int ns_7_St_14_Off_2;
  int ns_7_St_14_Off_1;
  int wash_state_1_St_14_Off;
  int wash_power_1_St_14_Off;
  int ck_11_3;
  int ck_11_2;
  int ck_11_1;
  int v_87_2_0;
  int v_87_3_0_0;
  int v_87_3_0_1;
  int v_87_2_1;
  int v_87_3_1_0;
  int v_87_3_1_1;
  int v_88;
  int v_87_3;
  int v_87_2;
  int v_87_1;
  int v_86;
  int v_85;
  int v_84;
  int v_412;
  int v_411;
  int v_410;
  int v_409;
  int v_408;
  int v_407;
  int v_406;
  int v_405;
  int v_404;
  int v_403;
  int v_402;
  int v_401;
  int v_400;
  int v_399;
  int v_398;
  int v_397;
  int v_396;
  int v_395;
  int v_394;
  int v_393;
  int v_392;
  int v_391;
  int v_390;
  int v_389;
  int s_7_St_14_Standby_2_0;
  int s_7_St_14_Standby_3_0_0;
  int s_7_St_14_Standby_3_0_1;
  int s_7_St_14_Standby_2_1;
  int s_7_St_14_Standby_3_1_0;
  int s_7_St_14_Standby_3_1_1;
  int s_7_St_14_Spin_2_0;
  int s_7_St_14_Spin_3_0_0;
  int s_7_St_14_Spin_3_0_1;
  int s_7_St_14_Spin_2_1;
  int s_7_St_14_Spin_3_1_0;
  int s_7_St_14_Spin_3_1_1;
  int s_7_St_14_Rinse_2_0;
  int s_7_St_14_Rinse_3_0_0;
  int s_7_St_14_Rinse_3_0_1;
  int s_7_St_14_Rinse_2_1;
  int s_7_St_14_Rinse_3_1_0;
  int s_7_St_14_Rinse_3_1_1;
  int s_7_St_14_Washing_2_0;
  int s_7_St_14_Washing_3_0_0;
  int s_7_St_14_Washing_3_0_1;
  int s_7_St_14_Washing_2_1;
  int s_7_St_14_Washing_3_1_0;
  int s_7_St_14_Washing_3_1_1;
  int s_7_St_14_Water_fill_2_0;
  int s_7_St_14_Water_fill_3_0_0;
  int s_7_St_14_Water_fill_3_0_1;
  int s_7_St_14_Water_fill_2_1;
  int s_7_St_14_Water_fill_3_1_0;
  int s_7_St_14_Water_fill_3_1_1;
  int s_7_St_14_Off_2_0;
  int s_7_St_14_Off_3_0_0;
  int s_7_St_14_Off_3_0_1;
  int s_7_St_14_Off_2_1;
  int s_7_St_14_Off_3_1_0;
  int s_7_St_14_Off_3_1_1;
  int ck_10_2_0;
  int ck_10_3_0_0;
  int ck_10_3_0_1;
  int ck_10_2_1;
  int ck_10_3_1_0;
  int ck_10_3_1_1;
  int r_7_St_14_Standby;
  int s_7_St_14_Standby_3;
  int s_7_St_14_Standby_2;
  int s_7_St_14_Standby_1;
  int r_7_St_14_Spin;
  int s_7_St_14_Spin_3;
  int s_7_St_14_Spin_2;
  int s_7_St_14_Spin_1;
  int r_7_St_14_Rinse;
  int s_7_St_14_Rinse_3;
  int s_7_St_14_Rinse_2;
  int s_7_St_14_Rinse_1;
  int r_7_St_14_Washing;
  int s_7_St_14_Washing_3;
  int s_7_St_14_Washing_2;
  int s_7_St_14_Washing_1;
  int r_7_St_14_Water_fill;
  int s_7_St_14_Water_fill_3;
  int s_7_St_14_Water_fill_2;
  int s_7_St_14_Water_fill_1;
  int r_7_St_14_Off;
  int s_7_St_14_Off_3;
  int s_7_St_14_Off_2;
  int s_7_St_14_Off_1;
  int ck_10_3;
  int ck_10_2;
  int ck_10_1;
  int v_422;
  int v_421;
  int v_420;
  int v_419;
  int v_418;
  int v_417;
  int v_416;
  int v_415;
  int v_414;
  int v_413;
  int ns_8_St_15_High_2_0;
  int ns_8_St_15_High_2_1;
  int ns_8_St_15_Eco_2_0;
  int ns_8_St_15_Eco_2_1;
  int ns_8_St_15_Frostprotection_2_0;
  int ns_8_St_15_Frostprotection_2_1;
  int ns_8_St_15_Off_2_0;
  int ns_8_St_15_Off_2_1;
  int ck_9_2_0;
  int ck_9_2_1;
  int nr_8_St_15_High;
  int ns_8_St_15_High_2;
  int ns_8_St_15_High_1;
  int rad_state_1_St_15_High;
  int rad_power_1_St_15_High;
  int nr_8_St_15_Eco;
  int ns_8_St_15_Eco_2;
  int ns_8_St_15_Eco_1;
  int rad_state_1_St_15_Eco;
  int rad_power_1_St_15_Eco;
  int nr_8_St_15_Frostprotection;
  int ns_8_St_15_Frostprotection_2;
  int ns_8_St_15_Frostprotection_1;
  int rad_state_1_St_15_Frostprotection;
  int rad_power_1_St_15_Frostprotection;
  int nr_8_St_15_Off;
  int ns_8_St_15_Off_2;
  int ns_8_St_15_Off_1;
  int rad_state_1_St_15_Off;
  int rad_power_1_St_15_Off;
  int ck_9_2;
  int ck_9_1;
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
  int v_430;
  int v_429;
  int v_428;
  int v_427;
  int v_426;
  int v_425;
  int s_8_St_15_High_2_0;
  int s_8_St_15_High_2_1;
  int s_8_St_15_Eco_2_0;
  int s_8_St_15_Eco_2_1;
  int s_8_St_15_Frostprotection_2_0;
  int s_8_St_15_Frostprotection_2_1;
  int s_8_St_15_Off_2_0;
  int s_8_St_15_Off_2_1;
  int ck_8_2_0;
  int ck_8_2_1;
  int r_8_St_15_High;
  int s_8_St_15_High_2;
  int s_8_St_15_High_1;
  int r_8_St_15_Eco;
  int s_8_St_15_Eco_2;
  int s_8_St_15_Eco_1;
  int r_8_St_15_Frostprotection;
  int s_8_St_15_Frostprotection_2;
  int s_8_St_15_Frostprotection_1;
  int r_8_St_15_Off;
  int s_8_St_15_Off_2;
  int s_8_St_15_Off_1;
  int ck_8_2;
  int ck_8_1;
  int policy_2_0;
  int policy_2_1;
  int s_8_2_0;
  int s_8_2_1;
  int ns_8_2_0;
  int ns_8_2_1;
  int s_7_2_0;
  int s_7_3_0_0;
  int s_7_3_0_1;
  int s_7_2_1;
  int s_7_3_1_0;
  int s_7_3_1_1;
  int ns_7_2_0;
  int ns_7_3_0_0;
  int ns_7_3_0_1;
  int ns_7_2_1;
  int ns_7_3_1_0;
  int ns_7_3_1_1;
  int s_6_2_0;
  int s_6_3_0_0;
  int s_6_3_0_1;
  int s_6_2_1;
  int s_6_3_1_0;
  int s_6_3_1_1;
  int ns_6_2_0;
  int ns_6_3_0_0;
  int ns_6_3_0_1;
  int ns_6_2_1;
  int ns_6_3_1_0;
  int ns_6_3_1_1;
  int s_2_2_0;
  int s_2_2_1;
  int ns_2_2_0;
  int ns_2_2_1;
  int mode_2_0;
  int mode_2_1;
  int s_8_2;
  int s_8_1;
  int ns_8_2;
  int ns_8_1;
  int r_8;
  int nr_8;
  int s_7_3;
  int s_7_2;
  int s_7_1;
  int ns_7_3;
  int ns_7_2;
  int ns_7_1;
  int r_7;
  int nr_7;
  int s_6_3;
  int s_6_2;
  int s_6_1;
  int ns_6_3;
  int ns_6_2;
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
  int s_2_1;
  int ns_2_1;
  int r_2;
  int nr_2;
  int s_1_1;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_2_2;
  int s_1_2;
  int ns_2_2;
  int ns_1_2;
  int r;
  int nr;
  int eco_input;
  int comfort_input;
  int mode_2;
  int mode_1;
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
  int start_1;
  int finish_1;
  int temp_ok_1;
  int cold_1;
  int c_oven;
  int oven_power_1;
  int oven_state_1;
  int start;
  int finish;
  int c_wash;
  int wash_power_1;
  int wash_state_1;
  int up1;
  int down1;
  int up2;
  int down2;
  int c_rad1;
  int c_rad2;
  int rad_power_1;
  int rad_state_1;
  int v_278;
  int v_277;
  int ck_1;
  int ck_2;
  int rule5_Minimal;
  int rule5_Eco;
  int rule5_Confort;
  int ck_2_1;
  int ck_2_0;
  int total;
  int rule5;
  int rule4;
  int rule3;
  int rule2;
  int rule1;
  int v;
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
  int c_oven1;
  int c_wash1;
  int c_tv2;
  int c_tv1;
  int c_light2;
  int c_light1;
  int rad_c2;
  int rad_c1;
  int c_window;
  int c_door;
  eco_input = eco_in;
  comfort_input = comfort_in;
  ck_24_1 = self->v_289;
  ck_24_2 = self->v_290;
  presence_1 = presence;
  source_switch_1 = tv_switch;
  source_switch = light_switch;
  push_1 = push_janela;
  push = push_porta;
  start_1 = oven_start;
  finish_1 = oven_finish;
  temp_ok_1 = temp_ok;
  cold_1 = cold;
  ck_12_1 = self->v_327;
  ck_12_2 = self->v_328;
  ck_12_3 = self->v_329;
  start = wash_start;
  finish = wash_finish;
  ck_10_1 = self->v_386;
  ck_10_2 = self->v_387;
  ck_10_3 = self->v_388;
  up1 = rad_up1;
  down1 = rad_down1;
  up2 = rad_up2;
  down2 = rad_down2;
  ck_8_1 = self->v_423;
  ck_8_2 = self->v_424;
  Controller_controller__controller_controller_step(push_porta, push_janela,
                                                    rad_up1, rad_down1,
                                                    rad_up2, rad_down2,
                                                    wash_start, wash_finish,
                                                    oven_start, oven_finish,
                                                    temp_ok, cold, presence,
                                                    light_switch, tv_switch,
                                                    eco_in, comfort_in,
                                                    self->v_424, self->v_423,
                                                    self->pnr_8, self->v_388,
                                                    self->v_387, self->v_386,
                                                    self->pnr_7, self->v_329,
                                                    self->v_328, self->v_327,
                                                    self->pnr_6,
                                                    self->ck_14_1,
                                                    self->pnr_5,
                                                    self->ck_16_1,
                                                    self->pnr_4,
                                                    self->ck_18_1,
                                                    self->pnr_3,
                                                    self->ck_20_1,
                                                    self->pnr_2,
                                                    self->ck_22_1,
                                                    self->pnr_1, self->v_290,
                                                    self->v_289, self->pnr,
                                                    true, true, true, true,
                                                    true, true, true, true,
                                                    true, true,
                                                    &Controller_controller__controller_controller_out_st);
  c_oven1 = Controller_controller__controller_controller_out_st.controller_c_oven1;
  c_wash1 = Controller_controller__controller_controller_out_st.controller_c_wash1;
  c_tv2 = Controller_controller__controller_controller_out_st.controller_c_tv2;
  c_tv1 = Controller_controller__controller_controller_out_st.controller_c_tv1;
  c_light2 = Controller_controller__controller_controller_out_st.controller_c_light2;
  c_light1 = Controller_controller__controller_controller_out_st.controller_c_light1;
  rad_c2 = Controller_controller__controller_controller_out_st.controller_rad_c2;
  rad_c1 = Controller_controller__controller_controller_out_st.controller_rad_c1;
  c_window = Controller_controller__controller_controller_out_st.controller_c_window;
  c_door = Controller_controller__controller_controller_out_st.controller_c_door;
  c_source1_1 = c_tv1;
  c_source2_1 = c_tv2;
  c_source1 = c_light1;
  c_source2 = c_light2;
  c_door_2 = c_window;
  c_door_1 = c_door;
  c_oven = c_oven1;
  c_wash = c_wash1;
  c_rad1 = rad_c1;
  c_rad2 = rad_c2;
  if (ck_24_1) {
    ck_24_2_1 = ck_24_2;
    if (ck_24_2_1) {
      if (comfort_input) {
        v_120 = true;
      } else {
        v_120 = self->pnr;
      };
      if (eco_input) {
        r_St_7_Comfort = true;
      } else {
        r_St_7_Comfort = v_120;
      };
      v_295 = r_St_7_Comfort;
      if (comfort_input) {
        v_119_1 = false;
      } else {
        v_119_1 = true;
      };
      if (eco_input) {
        s_St_7_Comfort_1 = true;
      } else {
        s_St_7_Comfort_1 = v_119_1;
      };
      v_291 = s_St_7_Comfort_1;
      if (comfort_input) {
        v_119_2 = false;
      } else {
        v_119_2 = true;
      };
      if (eco_input) {
        s_St_7_Comfort_2 = false;
      } else {
        s_St_7_Comfort_2 = v_119_2;
      };
      v_292 = s_St_7_Comfort_2;
    } else {
      if (comfort_input) {
        v_122 = true;
      } else {
        v_122 = self->pnr;
      };
      if (eco_input) {
        r_St_7_Eco = true;
      } else {
        r_St_7_Eco = v_122;
      };
      if (comfort_input) {
        v_121_1 = true;
      } else {
        v_121_1 = true;
      };
      if (eco_input) {
        s_St_7_Eco_1 = false;
      } else {
        s_St_7_Eco_1 = v_121_1;
      };
      if (comfort_input) {
        v_121_2 = true;
      } else {
        v_121_2 = false;
      };
      if (eco_input) {
        s_St_7_Eco_2 = false;
      } else {
        s_St_7_Eco_2 = v_121_2;
      };
      v_295 = r_St_7_Eco;
      v_291 = s_St_7_Eco_1;
      v_292 = s_St_7_Eco_2;
    };
    s_1_2 = v_291;
    s_2_2 = v_292;
    r = v_295;
  } else {
    ck_24_2_0 = ck_24_2;
    if (ck_24_2_0) {
      v_296 = true;
      v_293 = true;
      v_294 = true;
    } else {
      if (comfort_input) {
        v_124 = true;
      } else {
        v_124 = self->pnr;
      };
      if (eco_input) {
        r_St_7_Minimal_safety = true;
      } else {
        r_St_7_Minimal_safety = v_124;
      };
      v_296 = r_St_7_Minimal_safety;
      if (comfort_input) {
        v_123_1 = true;
      } else {
        v_123_1 = false;
      };
      if (eco_input) {
        s_St_7_Minimal_safety_1 = true;
      } else {
        s_St_7_Minimal_safety_1 = v_123_1;
      };
      v_293 = s_St_7_Minimal_safety_1;
      if (comfort_input) {
        v_123_2 = true;
      } else {
        v_123_2 = false;
      };
      if (eco_input) {
        s_St_7_Minimal_safety_2 = false;
      } else {
        s_St_7_Minimal_safety_2 = v_123_2;
      };
      v_294 = s_St_7_Minimal_safety_2;
      if (v_123_1) {
        v_123_2_1 = v_123_2;
      } else {
        v_123_2_0 = v_123_2;
      };
      if (s_St_7_Minimal_safety_1) {
        s_St_7_Minimal_safety_2_1 = s_St_7_Minimal_safety_2;
      } else {
        s_St_7_Minimal_safety_2_0 = s_St_7_Minimal_safety_2;
      };
    };
    s_1_2 = v_293;
    s_2_2 = v_294;
    r = v_296;
  };
  ck_25_1 = s_1_2;
  ck_25_2 = s_2_2;
  if (ck_25_1) {
    ck_25_2_1 = ck_25_2;
    if (ck_25_2_1) {
      mode_St_7_Comfort_1 = true;
      v_279 = mode_St_7_Comfort_1;
      mode_St_7_Comfort_2 = true;
      v_280 = mode_St_7_Comfort_2;
      nr_St_7_Comfort = false;
      v_287 = nr_St_7_Comfort;
      ns_St_7_Comfort_1 = true;
      v_283 = ns_St_7_Comfort_1;
      ns_St_7_Comfort_2 = true;
      v_284 = ns_St_7_Comfort_2;
    } else {
      mode_St_7_Eco_1 = true;
      mode_St_7_Eco_2 = false;
      nr_St_7_Eco = false;
      ns_St_7_Eco_1 = true;
      ns_St_7_Eco_2 = false;
      v_279 = mode_St_7_Eco_1;
      v_280 = mode_St_7_Eco_2;
      v_287 = nr_St_7_Eco;
      v_283 = ns_St_7_Eco_1;
      v_284 = ns_St_7_Eco_2;
    };
    mode_1 = v_279;
    mode_2 = v_280;
    ns_1_2 = v_283;
    ns_2_2 = v_284;
    nr = v_287;
  } else {
    ck_25_2_0 = ck_25_2;
    if (ck_25_2_0) {
      v_281 = true;
      v_282 = true;
      v_288 = true;
      v_285 = true;
      v_286 = true;
    } else {
      mode_St_7_Minimal_safety_1 = false;
      v_281 = mode_St_7_Minimal_safety_1;
      mode_St_7_Minimal_safety_2 = false;
      v_282 = mode_St_7_Minimal_safety_2;
      nr_St_7_Minimal_safety = false;
      v_288 = nr_St_7_Minimal_safety;
      ns_St_7_Minimal_safety_1 = false;
      v_285 = ns_St_7_Minimal_safety_1;
      ns_St_7_Minimal_safety_2 = false;
      v_286 = ns_St_7_Minimal_safety_2;
      if (mode_St_7_Minimal_safety_1) {
        mode_St_7_Minimal_safety_2_1 = mode_St_7_Minimal_safety_2;
      } else {
        mode_St_7_Minimal_safety_2_0 = mode_St_7_Minimal_safety_2;
      };
      if (ns_St_7_Minimal_safety_1) {
        ns_St_7_Minimal_safety_2_1 = ns_St_7_Minimal_safety_2;
      } else {
        ns_St_7_Minimal_safety_2_0 = ns_St_7_Minimal_safety_2;
      };
    };
    mode_1 = v_281;
    mode_2 = v_282;
    ns_1_2 = v_285;
    ns_2_2 = v_286;
    nr = v_288;
  };
  _out->policy_1 = mode_1;
  ck_1 = _out->policy_1;
  _out->policy_2 = mode_2;
  ck_2 = _out->policy_2;
  if (ck_1) {
    ck_2_1 = ck_2;
  } else {
    ck_2_0 = ck_2;
  };
  if (_out->policy_1) {
    policy_2_1 = _out->policy_2;
  } else {
    policy_2_0 = _out->policy_2;
  };
  if (mode_1) {
    mode_2_1 = mode_2;
  } else {
    mode_2_0 = mode_2;
  };
  if (ns_1_2) {
    ns_2_2_1 = ns_2_2;
  } else {
    ns_2_2_0 = ns_2_2;
  };
  if (ck_25_1) {
    if (ck_25_2_1) {
      if (mode_St_7_Comfort_1) {
        mode_St_7_Comfort_2_1 = mode_St_7_Comfort_2;
      } else {
        mode_St_7_Comfort_2_0 = mode_St_7_Comfort_2;
      };
      if (ns_St_7_Comfort_1) {
        ns_St_7_Comfort_2_1 = ns_St_7_Comfort_2;
      } else {
        ns_St_7_Comfort_2_0 = ns_St_7_Comfort_2;
      };
    } else {
      if (mode_St_7_Eco_1) {
        mode_St_7_Eco_2_1 = mode_St_7_Eco_2;
      } else {
        mode_St_7_Eco_2_0 = mode_St_7_Eco_2;
      };
      if (ns_St_7_Eco_1) {
        ns_St_7_Eco_2_1 = ns_St_7_Eco_2;
      } else {
        ns_St_7_Eco_2_0 = ns_St_7_Eco_2;
      };
    };
  };
  if (s_1_2) {
    s_2_2_1 = s_2_2;
  } else {
    s_2_2_0 = s_2_2;
  };
  if (ck_24_1) {
    if (ck_24_2_1) {
      if (v_119_1) {
        v_119_2_1 = v_119_2;
      } else {
        v_119_2_0 = v_119_2;
      };
      if (s_St_7_Comfort_1) {
        s_St_7_Comfort_2_1 = s_St_7_Comfort_2;
      } else {
        s_St_7_Comfort_2_0 = s_St_7_Comfort_2;
      };
    } else {
      if (v_121_1) {
        v_121_2_1 = v_121_2;
      } else {
        v_121_2_0 = v_121_2;
      };
      if (s_St_7_Eco_1) {
        s_St_7_Eco_2_1 = s_St_7_Eco_2;
      } else {
        s_St_7_Eco_2_0 = s_St_7_Eco_2;
      };
    };
  };
  if (self->ck_22_1) {
    if (presence_1) {
      r_1_St_8_Empty = true;
      s_1_St_8_Empty_1 = false;
    } else {
      r_1_St_8_Empty = self->pnr_1;
      s_1_St_8_Empty_1 = true;
    };
    r_1 = r_1_St_8_Empty;
    s_1_1 = s_1_St_8_Empty_1;
  } else {
    if (presence_1) {
      r_1_St_8_Ocupied = true;
    } else {
      r_1_St_8_Ocupied = self->pnr_1;
    };
    r_1 = r_1_St_8_Ocupied;
    if (presence_1) {
      s_1_St_8_Ocupied_1 = true;
    } else {
      s_1_St_8_Ocupied_1 = false;
    };
    s_1_1 = s_1_St_8_Ocupied_1;
  };
  ck_23_1 = s_1_1;
  if (ck_23_1) {
    occupied_1_St_8_Empty = false;
    nr_1_St_8_Empty = false;
    ns_1_St_8_Empty_1 = true;
    occupied_1 = occupied_1_St_8_Empty;
    nr_1 = nr_1_St_8_Empty;
    ns_1_1 = ns_1_St_8_Empty_1;
  } else {
    occupied_1_St_8_Ocupied = true;
    occupied_1 = occupied_1_St_8_Ocupied;
    nr_1_St_8_Ocupied = false;
    nr_1 = nr_1_St_8_Ocupied;
    ns_1_St_8_Ocupied_1 = false;
    ns_1_1 = ns_1_St_8_Ocupied_1;
  };
  _out->occupied = occupied_1;
  v_57 = !(_out->occupied);
  if (self->ck_20_1) {
    v_116 = !(c_source2_1);
    v_117 = (source_switch_1&&v_116);
    v_118 = (v_117||c_source1_1);
    if (v_118) {
      r_2_St_9_Desligado = true;
      s_2_St_9_Desligado_1 = false;
    } else {
      r_2_St_9_Desligado = self->pnr_2;
      s_2_St_9_Desligado_1 = true;
    };
    r_2 = r_2_St_9_Desligado;
    s_2_1 = s_2_St_9_Desligado_1;
  } else {
    v_113 = !(c_source1_1);
    v_114 = (source_switch_1&&v_113);
    v_115 = (v_114||c_source2_1);
    if (v_115) {
      r_2_St_9_Ligado = true;
    } else {
      r_2_St_9_Ligado = self->pnr_2;
    };
    r_2 = r_2_St_9_Ligado;
    if (v_115) {
      s_2_St_9_Ligado_1 = true;
    } else {
      s_2_St_9_Ligado_1 = false;
    };
    s_2_1 = s_2_St_9_Ligado_1;
  };
  ck_21_1 = s_2_1;
  if (ck_21_1) {
    source_on_1_St_9_Desligado = false;
    nr_2_St_9_Desligado = false;
    ns_2_St_9_Desligado_1 = true;
    source_on_1 = source_on_1_St_9_Desligado;
    nr_2 = nr_2_St_9_Desligado;
    ns_2_1 = ns_2_St_9_Desligado_1;
  } else {
    source_on_1_St_9_Ligado = true;
    source_on_1 = source_on_1_St_9_Ligado;
    nr_2_St_9_Ligado = false;
    nr_2 = nr_2_St_9_Ligado;
    ns_2_St_9_Ligado_1 = false;
    ns_2_1 = ns_2_St_9_Ligado_1;
  };
  _out->tv_on = source_on_1;
  v_58 = (v_57||_out->tv_on);
  if (self->ck_18_1) {
    v_110 = !(c_source2);
    v_111 = (source_switch&&v_110);
    v_112 = (v_111||c_source1);
    if (v_112) {
      r_3_St_10_Desligado = true;
      s_3_St_10_Desligado_1 = false;
    } else {
      r_3_St_10_Desligado = self->pnr_3;
      s_3_St_10_Desligado_1 = true;
    };
    r_3 = r_3_St_10_Desligado;
    s_3_1 = s_3_St_10_Desligado_1;
  } else {
    v_107 = !(c_source1);
    v_108 = (source_switch&&v_107);
    v_109 = (v_108||c_source2);
    if (v_109) {
      r_3_St_10_Ligado = true;
    } else {
      r_3_St_10_Ligado = self->pnr_3;
    };
    r_3 = r_3_St_10_Ligado;
    if (v_109) {
      s_3_St_10_Ligado_1 = true;
    } else {
      s_3_St_10_Ligado_1 = false;
    };
    s_3_1 = s_3_St_10_Ligado_1;
  };
  ck_19_1 = s_3_1;
  if (ck_19_1) {
    source_on_St_10_Desligado = false;
    nr_3_St_10_Desligado = false;
    ns_3_St_10_Desligado_1 = true;
    source_on = source_on_St_10_Desligado;
    nr_3 = nr_3_St_10_Desligado;
    ns_3_1 = ns_3_St_10_Desligado_1;
  } else {
    source_on_St_10_Ligado = true;
    source_on = source_on_St_10_Ligado;
    nr_3_St_10_Ligado = false;
    nr_3 = nr_3_St_10_Ligado;
    ns_3_St_10_Ligado_1 = false;
    ns_3_1 = ns_3_St_10_Ligado_1;
  };
  _out->lamp_on = source_on;
  v_48 = (_out->lamp_on||_out->tv_on);
  v_49 = !(v_48);
  rule1 = (v_58||_out->lamp_on);
  if (self->ck_16_1) {
    v_106 = (push_1&&c_door_2);
    if (v_106) {
      r_4_St_11_Closed = true;
      s_4_St_11_Closed_1 = false;
    } else {
      r_4_St_11_Closed = self->pnr_4;
      s_4_St_11_Closed_1 = true;
    };
    r_4 = r_4_St_11_Closed;
    s_4_1 = s_4_St_11_Closed_1;
  } else {
    v_104 = !(c_door_2);
    v_105 = (push_1||v_104);
    if (v_105) {
      r_4_St_11_Open = true;
    } else {
      r_4_St_11_Open = self->pnr_4;
    };
    r_4 = r_4_St_11_Open;
    if (v_105) {
      s_4_St_11_Open_1 = true;
    } else {
      s_4_St_11_Open_1 = false;
    };
    s_4_1 = s_4_St_11_Open_1;
  };
  ck_17_1 = s_4_1;
  if (ck_17_1) {
    door_open_2_St_11_Closed = false;
    nr_4_St_11_Closed = false;
    ns_4_St_11_Closed_1 = true;
    door_open_2 = door_open_2_St_11_Closed;
    nr_4 = nr_4_St_11_Closed;
    ns_4_1 = ns_4_St_11_Closed_1;
  } else {
    door_open_2_St_11_Open = true;
    door_open_2 = door_open_2_St_11_Open;
    nr_4_St_11_Open = false;
    nr_4 = nr_4_St_11_Open;
    ns_4_St_11_Open_1 = false;
    ns_4_1 = ns_4_St_11_Open_1;
  };
  _out->window_open = door_open_2;
  if (self->ck_14_1) {
    v_103 = (push&&c_door_1);
    if (v_103) {
      r_5_St_12_Closed = true;
      s_5_St_12_Closed_1 = false;
    } else {
      r_5_St_12_Closed = self->pnr_5;
      s_5_St_12_Closed_1 = true;
    };
    r_5 = r_5_St_12_Closed;
    s_5_1 = s_5_St_12_Closed_1;
  } else {
    v_101 = !(c_door_1);
    v_102 = (push||v_101);
    if (v_102) {
      r_5_St_12_Open = true;
    } else {
      r_5_St_12_Open = self->pnr_5;
    };
    r_5 = r_5_St_12_Open;
    if (v_102) {
      s_5_St_12_Open_1 = true;
    } else {
      s_5_St_12_Open_1 = false;
    };
    s_5_1 = s_5_St_12_Open_1;
  };
  ck_15_1 = s_5_1;
  if (ck_15_1) {
    door_open_1_St_12_Closed = false;
    nr_5_St_12_Closed = false;
    ns_5_St_12_Closed_1 = true;
    door_open_1 = door_open_1_St_12_Closed;
    nr_5 = nr_5_St_12_Closed;
    ns_5_1 = ns_5_St_12_Closed_1;
  } else {
    door_open_1_St_12_Open = true;
    door_open_1 = door_open_1_St_12_Open;
    nr_5_St_12_Open = false;
    nr_5 = nr_5_St_12_Open;
    ns_5_St_12_Open_1 = false;
    ns_5_1 = ns_5_St_12_Open_1;
  };
  _out->door_open = door_open_1;
  v_52 = (_out->door_open||_out->window_open);
  v_53 = !(v_52);
  v_55 = (_out->door_open||_out->window_open);
  v_56 = !(v_55);
  rule2 = (_out->occupied||v_56);
  v_59 = (rule1&&rule2);
  if (ck_12_1) {
    ck_12_2_1 = ck_12_2;
    if (ck_12_2_1) {
      ck_12_3_1_1 = ck_12_3;
      if (ck_12_3_1_1) {
        if (finish_1) {
          v_95 = true;
        } else {
          v_95 = self->pnr_6;
        };
        if (temp_ok_1) {
          r_6_St_13_Heat = true;
        } else {
          r_6_St_13_Heat = v_95;
        };
        if (finish_1) {
          v_94_1 = true;
        } else {
          v_94_1 = true;
        };
        if (temp_ok_1) {
          s_6_St_13_Heat_1 = true;
        } else {
          s_6_St_13_Heat_1 = v_94_1;
        };
        if (finish_1) {
          v_94_2 = false;
        } else {
          v_94_2 = true;
        };
        if (temp_ok_1) {
          s_6_St_13_Heat_2 = true;
        } else {
          s_6_St_13_Heat_2 = v_94_2;
        };
        if (finish_1) {
          v_94_3 = false;
        } else {
          v_94_3 = true;
        };
        if (temp_ok_1) {
          s_6_St_13_Heat_3 = false;
        } else {
          s_6_St_13_Heat_3 = v_94_3;
        };
        v_345 = r_6_St_13_Heat;
        v_330 = s_6_St_13_Heat_1;
        v_331 = s_6_St_13_Heat_2;
        v_332 = s_6_St_13_Heat_3;
      } else {
        if (finish_1) {
          v_93 = true;
          v_92_1 = true;
          v_92_2 = false;
          v_92_3 = false;
        } else {
          v_93 = self->pnr_6;
          v_92_1 = true;
          v_92_2 = true;
          v_92_3 = false;
        };
        v_91 = (cold_1&&c_oven);
        if (v_91) {
          r_6_St_13_Maintain = true;
        } else {
          r_6_St_13_Maintain = v_93;
        };
        v_345 = r_6_St_13_Maintain;
        if (v_91) {
          s_6_St_13_Maintain_1 = false;
        } else {
          s_6_St_13_Maintain_1 = v_92_1;
        };
        v_330 = s_6_St_13_Maintain_1;
        if (v_91) {
          s_6_St_13_Maintain_2 = false;
        } else {
          s_6_St_13_Maintain_2 = v_92_2;
        };
        v_331 = s_6_St_13_Maintain_2;
        if (v_91) {
          s_6_St_13_Maintain_3 = true;
        } else {
          s_6_St_13_Maintain_3 = v_92_3;
        };
        v_332 = s_6_St_13_Maintain_3;
      };
      v_339 = v_330;
      v_340 = v_331;
      v_341 = v_332;
      v_347 = v_345;
      if (ck_12_3_1_1) {
        if (v_94_1) {
          v_94_2_1 = v_94_2;
          if (v_94_2_1) {
            v_94_3_1_1 = v_94_3;
          } else {
            v_94_3_1_0 = v_94_3;
          };
        } else {
          v_94_2_0 = v_94_2;
          if (v_94_2_0) {
            v_94_3_0_1 = v_94_3;
          } else {
            v_94_3_0_0 = v_94_3;
          };
        };
        if (s_6_St_13_Heat_1) {
          s_6_St_13_Heat_2_1 = s_6_St_13_Heat_2;
          if (s_6_St_13_Heat_2_1) {
            s_6_St_13_Heat_3_1_1 = s_6_St_13_Heat_3;
          } else {
            s_6_St_13_Heat_3_1_0 = s_6_St_13_Heat_3;
          };
        } else {
          s_6_St_13_Heat_2_0 = s_6_St_13_Heat_2;
          if (s_6_St_13_Heat_2_0) {
            s_6_St_13_Heat_3_0_1 = s_6_St_13_Heat_3;
          } else {
            s_6_St_13_Heat_3_0_0 = s_6_St_13_Heat_3;
          };
        };
      } else {
        if (v_92_1) {
          v_92_2_1 = v_92_2;
          if (v_92_2_1) {
            v_92_3_1_1 = v_92_3;
          } else {
            v_92_3_1_0 = v_92_3;
          };
        } else {
          v_92_2_0 = v_92_2;
          if (v_92_2_0) {
            v_92_3_0_1 = v_92_3;
          } else {
            v_92_3_0_0 = v_92_3;
          };
        };
        if (s_6_St_13_Maintain_1) {
          s_6_St_13_Maintain_2_1 = s_6_St_13_Maintain_2;
          if (s_6_St_13_Maintain_2_1) {
            s_6_St_13_Maintain_3_1_1 = s_6_St_13_Maintain_3;
          } else {
            s_6_St_13_Maintain_3_1_0 = s_6_St_13_Maintain_3;
          };
        } else {
          s_6_St_13_Maintain_2_0 = s_6_St_13_Maintain_2;
          if (s_6_St_13_Maintain_2_0) {
            s_6_St_13_Maintain_3_0_1 = s_6_St_13_Maintain_3;
          } else {
            s_6_St_13_Maintain_3_0_0 = s_6_St_13_Maintain_3;
          };
        };
      };
    } else {
      ck_12_3_1_0 = ck_12_3;
      if (ck_12_3_1_0) {
        v_346 = true;
        v_333 = true;
        v_334 = true;
        v_335 = true;
      } else {
        v_97 = !(c_oven);
        v_98 = (start_1&&v_97);
        if (v_98) {
          v_100 = true;
          v_99_1 = false;
          v_99_2 = false;
          v_99_3 = false;
        } else {
          v_100 = self->pnr_6;
          v_99_1 = true;
          v_99_2 = false;
          v_99_3 = false;
        };
        v_96 = (start_1&&c_oven);
        if (v_96) {
          r_6_St_13_Off = true;
        } else {
          r_6_St_13_Off = v_100;
        };
        v_346 = r_6_St_13_Off;
        if (v_96) {
          s_6_St_13_Off_1 = true;
        } else {
          s_6_St_13_Off_1 = v_99_1;
        };
        v_333 = s_6_St_13_Off_1;
        if (v_96) {
          s_6_St_13_Off_2 = true;
        } else {
          s_6_St_13_Off_2 = v_99_2;
        };
        v_334 = s_6_St_13_Off_2;
        if (v_96) {
          s_6_St_13_Off_3 = true;
        } else {
          s_6_St_13_Off_3 = v_99_3;
        };
        v_335 = s_6_St_13_Off_3;
        if (v_99_1) {
          v_99_2_1 = v_99_2;
          if (v_99_2_1) {
            v_99_3_1_1 = v_99_3;
          } else {
            v_99_3_1_0 = v_99_3;
          };
        } else {
          v_99_2_0 = v_99_2;
          if (v_99_2_0) {
            v_99_3_0_1 = v_99_3;
          } else {
            v_99_3_0_0 = v_99_3;
          };
        };
        if (s_6_St_13_Off_1) {
          s_6_St_13_Off_2_1 = s_6_St_13_Off_2;
          if (s_6_St_13_Off_2_1) {
            s_6_St_13_Off_3_1_1 = s_6_St_13_Off_3;
          } else {
            s_6_St_13_Off_3_1_0 = s_6_St_13_Off_3;
          };
        } else {
          s_6_St_13_Off_2_0 = s_6_St_13_Off_2;
          if (s_6_St_13_Off_2_0) {
            s_6_St_13_Off_3_0_1 = s_6_St_13_Off_3;
          } else {
            s_6_St_13_Off_3_0_0 = s_6_St_13_Off_3;
          };
        };
      };
      v_339 = v_333;
      v_340 = v_334;
      v_341 = v_335;
      v_347 = v_346;
    };
    s_6_1 = v_339;
    s_6_2 = v_340;
    s_6_3 = v_341;
    r_6 = v_347;
  } else {
    ck_12_2_0 = ck_12_2;
    if (ck_12_2_0) {
      ck_12_3_0_1 = ck_12_3;
      v_342 = true;
      v_343 = true;
      v_344 = true;
      v_349 = true;
    } else {
      ck_12_3_0_0 = ck_12_3;
      if (ck_12_3_0_0) {
        if (finish_1) {
          v_90 = true;
        } else {
          v_90 = self->pnr_6;
        };
        if (temp_ok_1) {
          r_6_St_13_Reheat = true;
        } else {
          r_6_St_13_Reheat = v_90;
        };
        if (finish_1) {
          v_89_1 = true;
        } else {
          v_89_1 = false;
        };
        if (temp_ok_1) {
          s_6_St_13_Reheat_1 = true;
        } else {
          s_6_St_13_Reheat_1 = v_89_1;
        };
        if (finish_1) {
          v_89_2 = false;
        } else {
          v_89_2 = false;
        };
        if (temp_ok_1) {
          s_6_St_13_Reheat_2 = true;
        } else {
          s_6_St_13_Reheat_2 = v_89_2;
        };
        if (finish_1) {
          v_89_3 = false;
        } else {
          v_89_3 = true;
        };
        if (temp_ok_1) {
          s_6_St_13_Reheat_3 = false;
        } else {
          s_6_St_13_Reheat_3 = v_89_3;
        };
        v_348 = r_6_St_13_Reheat;
        v_336 = s_6_St_13_Reheat_1;
        v_337 = s_6_St_13_Reheat_2;
        v_338 = s_6_St_13_Reheat_3;
        if (v_89_1) {
          v_89_2_1 = v_89_2;
          if (v_89_2_1) {
            v_89_3_1_1 = v_89_3;
          } else {
            v_89_3_1_0 = v_89_3;
          };
        } else {
          v_89_2_0 = v_89_2;
          if (v_89_2_0) {
            v_89_3_0_1 = v_89_3;
          } else {
            v_89_3_0_0 = v_89_3;
          };
        };
      } else {
        if (c_oven) {
          r_6_St_13_Standby = true;
        } else {
          r_6_St_13_Standby = self->pnr_6;
        };
        v_348 = r_6_St_13_Standby;
        if (c_oven) {
          s_6_St_13_Standby_1 = true;
        } else {
          s_6_St_13_Standby_1 = false;
        };
        v_336 = s_6_St_13_Standby_1;
        if (c_oven) {
          s_6_St_13_Standby_2 = true;
        } else {
          s_6_St_13_Standby_2 = false;
        };
        v_337 = s_6_St_13_Standby_2;
        if (c_oven) {
          s_6_St_13_Standby_3 = true;
        } else {
          s_6_St_13_Standby_3 = false;
        };
        v_338 = s_6_St_13_Standby_3;
      };
      v_342 = v_336;
      v_343 = v_337;
      v_344 = v_338;
      v_349 = v_348;
    };
    s_6_1 = v_342;
    s_6_2 = v_343;
    s_6_3 = v_344;
    r_6 = v_349;
  };
  ck_13_1 = s_6_1;
  ck_13_2 = s_6_2;
  ck_13_3 = s_6_3;
  if (ck_13_1) {
    ck_13_2_1 = ck_13_2;
    if (ck_13_2_1) {
      ck_13_3_1_1 = ck_13_3;
      if (ck_13_3_1_1) {
        oven_power_1_St_13_Heat = 1500;
        oven_state_1_St_13_Heat = 1;
        nr_6_St_13_Heat = false;
        ns_6_St_13_Heat_1 = true;
        ns_6_St_13_Heat_2 = true;
        ns_6_St_13_Heat_3 = true;
        v_297 = oven_power_1_St_13_Heat;
        v_302 = oven_state_1_St_13_Heat;
        v_322 = nr_6_St_13_Heat;
        v_307 = ns_6_St_13_Heat_1;
        v_308 = ns_6_St_13_Heat_2;
        v_309 = ns_6_St_13_Heat_3;
      } else {
        oven_power_1_St_13_Maintain = 300;
        v_297 = oven_power_1_St_13_Maintain;
        oven_state_1_St_13_Maintain = 2;
        v_302 = oven_state_1_St_13_Maintain;
        nr_6_St_13_Maintain = false;
        v_322 = nr_6_St_13_Maintain;
        ns_6_St_13_Maintain_1 = true;
        v_307 = ns_6_St_13_Maintain_1;
        ns_6_St_13_Maintain_2 = true;
        v_308 = ns_6_St_13_Maintain_2;
        ns_6_St_13_Maintain_3 = false;
        v_309 = ns_6_St_13_Maintain_3;
      };
      v_299 = v_297;
      v_304 = v_302;
      v_316 = v_307;
      v_317 = v_308;
      v_318 = v_309;
      v_324 = v_322;
      if (ck_13_3_1_1) {
        if (ns_6_St_13_Heat_1) {
          ns_6_St_13_Heat_2_1 = ns_6_St_13_Heat_2;
          if (ns_6_St_13_Heat_2_1) {
            ns_6_St_13_Heat_3_1_1 = ns_6_St_13_Heat_3;
          } else {
            ns_6_St_13_Heat_3_1_0 = ns_6_St_13_Heat_3;
          };
        } else {
          ns_6_St_13_Heat_2_0 = ns_6_St_13_Heat_2;
          if (ns_6_St_13_Heat_2_0) {
            ns_6_St_13_Heat_3_0_1 = ns_6_St_13_Heat_3;
          } else {
            ns_6_St_13_Heat_3_0_0 = ns_6_St_13_Heat_3;
          };
        };
      } else {
        if (ns_6_St_13_Maintain_1) {
          ns_6_St_13_Maintain_2_1 = ns_6_St_13_Maintain_2;
          if (ns_6_St_13_Maintain_2_1) {
            ns_6_St_13_Maintain_3_1_1 = ns_6_St_13_Maintain_3;
          } else {
            ns_6_St_13_Maintain_3_1_0 = ns_6_St_13_Maintain_3;
          };
        } else {
          ns_6_St_13_Maintain_2_0 = ns_6_St_13_Maintain_2;
          if (ns_6_St_13_Maintain_2_0) {
            ns_6_St_13_Maintain_3_0_1 = ns_6_St_13_Maintain_3;
          } else {
            ns_6_St_13_Maintain_3_0_0 = ns_6_St_13_Maintain_3;
          };
        };
      };
    } else {
      ck_13_3_1_0 = ck_13_3;
      if (ck_13_3_1_0) {
        v_298 = 0;
        v_303 = 0;
        v_323 = true;
        v_310 = true;
        v_311 = true;
        v_312 = true;
      } else {
        oven_power_1_St_13_Off = 0;
        v_298 = oven_power_1_St_13_Off;
        oven_state_1_St_13_Off = 0;
        v_303 = oven_state_1_St_13_Off;
        nr_6_St_13_Off = false;
        v_323 = nr_6_St_13_Off;
        ns_6_St_13_Off_1 = true;
        v_310 = ns_6_St_13_Off_1;
        ns_6_St_13_Off_2 = false;
        v_311 = ns_6_St_13_Off_2;
        ns_6_St_13_Off_3 = false;
        v_312 = ns_6_St_13_Off_3;
        if (ns_6_St_13_Off_1) {
          ns_6_St_13_Off_2_1 = ns_6_St_13_Off_2;
          if (ns_6_St_13_Off_2_1) {
            ns_6_St_13_Off_3_1_1 = ns_6_St_13_Off_3;
          } else {
            ns_6_St_13_Off_3_1_0 = ns_6_St_13_Off_3;
          };
        } else {
          ns_6_St_13_Off_2_0 = ns_6_St_13_Off_2;
          if (ns_6_St_13_Off_2_0) {
            ns_6_St_13_Off_3_0_1 = ns_6_St_13_Off_3;
          } else {
            ns_6_St_13_Off_3_0_0 = ns_6_St_13_Off_3;
          };
        };
      };
      v_299 = v_298;
      v_304 = v_303;
      v_316 = v_310;
      v_317 = v_311;
      v_318 = v_312;
      v_324 = v_323;
    };
    oven_power_1 = v_299;
    oven_state_1 = v_304;
    ns_6_1 = v_316;
    ns_6_2 = v_317;
    ns_6_3 = v_318;
    nr_6 = v_324;
  } else {
    ck_13_2_0 = ck_13_2;
    if (ck_13_2_0) {
      ck_13_3_0_1 = ck_13_3;
      v_301 = 0;
      v_306 = 0;
      v_319 = true;
      v_320 = true;
      v_321 = true;
      v_326 = true;
    } else {
      ck_13_3_0_0 = ck_13_3;
      if (ck_13_3_0_0) {
        oven_power_1_St_13_Reheat = 1000;
        oven_state_1_St_13_Reheat = 3;
        nr_6_St_13_Reheat = false;
        ns_6_St_13_Reheat_1 = false;
        ns_6_St_13_Reheat_2 = false;
        ns_6_St_13_Reheat_3 = true;
        v_300 = oven_power_1_St_13_Reheat;
        v_305 = oven_state_1_St_13_Reheat;
        v_325 = nr_6_St_13_Reheat;
        v_313 = ns_6_St_13_Reheat_1;
        v_314 = ns_6_St_13_Reheat_2;
        v_315 = ns_6_St_13_Reheat_3;
      } else {
        oven_power_1_St_13_Standby = 0;
        v_300 = oven_power_1_St_13_Standby;
        oven_state_1_St_13_Standby = 4;
        v_305 = oven_state_1_St_13_Standby;
        nr_6_St_13_Standby = false;
        v_325 = nr_6_St_13_Standby;
        ns_6_St_13_Standby_1 = false;
        v_313 = ns_6_St_13_Standby_1;
        ns_6_St_13_Standby_2 = false;
        v_314 = ns_6_St_13_Standby_2;
        ns_6_St_13_Standby_3 = false;
        v_315 = ns_6_St_13_Standby_3;
      };
      v_301 = v_300;
      v_306 = v_305;
      v_319 = v_313;
      v_320 = v_314;
      v_321 = v_315;
      v_326 = v_325;
    };
    oven_power_1 = v_301;
    oven_state_1 = v_306;
    ns_6_1 = v_319;
    ns_6_2 = v_320;
    ns_6_3 = v_321;
    nr_6 = v_326;
  };
  _out->oven_state = oven_state_1;
  _out->oven_power = oven_power_1;
  if (ns_6_1) {
    ns_6_2_1 = ns_6_2;
    if (ns_6_2_1) {
      ns_6_3_1_1 = ns_6_3;
    } else {
      ns_6_3_1_0 = ns_6_3;
    };
  } else {
    ns_6_2_0 = ns_6_2;
    if (ns_6_2_0) {
      ns_6_3_0_1 = ns_6_3;
    } else {
      ns_6_3_0_0 = ns_6_3;
    };
  };
  if (!(ck_13_1)) {
    if (!(ck_13_2_0)) {
      if (ck_13_3_0_0) {
        if (ns_6_St_13_Reheat_1) {
          ns_6_St_13_Reheat_2_1 = ns_6_St_13_Reheat_2;
          if (ns_6_St_13_Reheat_2_1) {
            ns_6_St_13_Reheat_3_1_1 = ns_6_St_13_Reheat_3;
          } else {
            ns_6_St_13_Reheat_3_1_0 = ns_6_St_13_Reheat_3;
          };
        } else {
          ns_6_St_13_Reheat_2_0 = ns_6_St_13_Reheat_2;
          if (ns_6_St_13_Reheat_2_0) {
            ns_6_St_13_Reheat_3_0_1 = ns_6_St_13_Reheat_3;
          } else {
            ns_6_St_13_Reheat_3_0_0 = ns_6_St_13_Reheat_3;
          };
        };
      } else {
        if (ns_6_St_13_Standby_1) {
          ns_6_St_13_Standby_2_1 = ns_6_St_13_Standby_2;
          if (ns_6_St_13_Standby_2_1) {
            ns_6_St_13_Standby_3_1_1 = ns_6_St_13_Standby_3;
          } else {
            ns_6_St_13_Standby_3_1_0 = ns_6_St_13_Standby_3;
          };
        } else {
          ns_6_St_13_Standby_2_0 = ns_6_St_13_Standby_2;
          if (ns_6_St_13_Standby_2_0) {
            ns_6_St_13_Standby_3_0_1 = ns_6_St_13_Standby_3;
          } else {
            ns_6_St_13_Standby_3_0_0 = ns_6_St_13_Standby_3;
          };
        };
      };
    };
  };
  if (s_6_1) {
    s_6_2_1 = s_6_2;
    if (s_6_2_1) {
      s_6_3_1_1 = s_6_3;
    } else {
      s_6_3_1_0 = s_6_3;
    };
  } else {
    s_6_2_0 = s_6_2;
    if (s_6_2_0) {
      s_6_3_0_1 = s_6_3;
    } else {
      s_6_3_0_0 = s_6_3;
    };
  };
  if (!(ck_12_1)) {
    if (!(ck_12_2_0)) {
      if (ck_12_3_0_0) {
        if (s_6_St_13_Reheat_1) {
          s_6_St_13_Reheat_2_1 = s_6_St_13_Reheat_2;
          if (s_6_St_13_Reheat_2_1) {
            s_6_St_13_Reheat_3_1_1 = s_6_St_13_Reheat_3;
          } else {
            s_6_St_13_Reheat_3_1_0 = s_6_St_13_Reheat_3;
          };
        } else {
          s_6_St_13_Reheat_2_0 = s_6_St_13_Reheat_2;
          if (s_6_St_13_Reheat_2_0) {
            s_6_St_13_Reheat_3_0_1 = s_6_St_13_Reheat_3;
          } else {
            s_6_St_13_Reheat_3_0_0 = s_6_St_13_Reheat_3;
          };
        };
      } else {
        if (s_6_St_13_Standby_1) {
          s_6_St_13_Standby_2_1 = s_6_St_13_Standby_2;
          if (s_6_St_13_Standby_2_1) {
            s_6_St_13_Standby_3_1_1 = s_6_St_13_Standby_3;
          } else {
            s_6_St_13_Standby_3_1_0 = s_6_St_13_Standby_3;
          };
        } else {
          s_6_St_13_Standby_2_0 = s_6_St_13_Standby_2;
          if (s_6_St_13_Standby_2_0) {
            s_6_St_13_Standby_3_0_1 = s_6_St_13_Standby_3;
          } else {
            s_6_St_13_Standby_3_0_0 = s_6_St_13_Standby_3;
          };
        };
      };
    };
  };
  if (ck_10_1) {
    ck_10_2_1 = ck_10_2;
    if (ck_10_2_1) {
      ck_10_3_1_1 = ck_10_3;
      if (ck_10_3_1_1) {
        if (start) {
          r_7_St_14_Off = true;
          s_7_St_14_Off_1 = false;
          s_7_St_14_Off_2 = false;
          s_7_St_14_Off_3 = false;
        } else {
          r_7_St_14_Off = self->pnr_7;
          s_7_St_14_Off_1 = true;
          s_7_St_14_Off_2 = true;
          s_7_St_14_Off_3 = true;
        };
        v_407 = r_7_St_14_Off;
        v_389 = s_7_St_14_Off_1;
        v_390 = s_7_St_14_Off_2;
        v_391 = s_7_St_14_Off_3;
        if (s_7_St_14_Off_1) {
          s_7_St_14_Off_2_1 = s_7_St_14_Off_2;
          if (s_7_St_14_Off_2_1) {
            s_7_St_14_Off_3_1_1 = s_7_St_14_Off_3;
          } else {
            s_7_St_14_Off_3_1_0 = s_7_St_14_Off_3;
          };
        } else {
          s_7_St_14_Off_2_0 = s_7_St_14_Off_2;
          if (s_7_St_14_Off_2_0) {
            s_7_St_14_Off_3_0_1 = s_7_St_14_Off_3;
          } else {
            s_7_St_14_Off_3_0_0 = s_7_St_14_Off_3;
          };
        };
      } else {
        if (finish) {
          r_7_St_14_Rinse = true;
        } else {
          r_7_St_14_Rinse = self->pnr_7;
        };
        v_407 = r_7_St_14_Rinse;
        if (finish) {
          s_7_St_14_Rinse_1 = true;
        } else {
          s_7_St_14_Rinse_1 = true;
        };
        v_389 = s_7_St_14_Rinse_1;
        if (finish) {
          s_7_St_14_Rinse_2 = false;
        } else {
          s_7_St_14_Rinse_2 = true;
        };
        v_390 = s_7_St_14_Rinse_2;
        if (finish) {
          s_7_St_14_Rinse_3 = false;
        } else {
          s_7_St_14_Rinse_3 = false;
        };
        v_391 = s_7_St_14_Rinse_3;
        if (s_7_St_14_Rinse_1) {
          s_7_St_14_Rinse_2_1 = s_7_St_14_Rinse_2;
          if (s_7_St_14_Rinse_2_1) {
            s_7_St_14_Rinse_3_1_1 = s_7_St_14_Rinse_3;
          } else {
            s_7_St_14_Rinse_3_1_0 = s_7_St_14_Rinse_3;
          };
        } else {
          s_7_St_14_Rinse_2_0 = s_7_St_14_Rinse_2;
          if (s_7_St_14_Rinse_2_0) {
            s_7_St_14_Rinse_3_0_1 = s_7_St_14_Rinse_3;
          } else {
            s_7_St_14_Rinse_3_0_0 = s_7_St_14_Rinse_3;
          };
        };
      };
      v_401 = v_389;
      v_402 = v_390;
      v_403 = v_391;
      v_409 = v_407;
    } else {
      ck_10_3_1_0 = ck_10_3;
      if (ck_10_3_1_0) {
        v_408 = true;
        v_392 = true;
        v_393 = true;
        v_394 = true;
      } else {
        if (finish) {
          r_7_St_14_Spin = true;
        } else {
          r_7_St_14_Spin = self->pnr_7;
        };
        v_408 = r_7_St_14_Spin;
        if (finish) {
          s_7_St_14_Spin_1 = true;
        } else {
          s_7_St_14_Spin_1 = true;
        };
        v_392 = s_7_St_14_Spin_1;
        if (finish) {
          s_7_St_14_Spin_2 = true;
        } else {
          s_7_St_14_Spin_2 = false;
        };
        v_393 = s_7_St_14_Spin_2;
        if (finish) {
          s_7_St_14_Spin_3 = true;
        } else {
          s_7_St_14_Spin_3 = false;
        };
        v_394 = s_7_St_14_Spin_3;
      };
      v_401 = v_392;
      v_402 = v_393;
      v_403 = v_394;
      v_409 = v_408;
      if (!(ck_10_3_1_0)) {
        if (s_7_St_14_Spin_1) {
          s_7_St_14_Spin_2_1 = s_7_St_14_Spin_2;
          if (s_7_St_14_Spin_2_1) {
            s_7_St_14_Spin_3_1_1 = s_7_St_14_Spin_3;
          } else {
            s_7_St_14_Spin_3_1_0 = s_7_St_14_Spin_3;
          };
        } else {
          s_7_St_14_Spin_2_0 = s_7_St_14_Spin_2;
          if (s_7_St_14_Spin_2_0) {
            s_7_St_14_Spin_3_0_1 = s_7_St_14_Spin_3;
          } else {
            s_7_St_14_Spin_3_0_0 = s_7_St_14_Spin_3;
          };
        };
      };
    };
    s_7_1 = v_401;
    s_7_2 = v_402;
    s_7_3 = v_403;
    r_7 = v_409;
  } else {
    ck_10_2_0 = ck_10_2;
    if (ck_10_2_0) {
      ck_10_3_0_1 = ck_10_3;
      if (ck_10_3_0_1) {
        if (c_wash) {
          r_7_St_14_Standby = true;
        } else {
          r_7_St_14_Standby = self->pnr_7;
        };
        v_410 = r_7_St_14_Standby;
        if (c_wash) {
          s_7_St_14_Standby_1 = false;
        } else {
          s_7_St_14_Standby_1 = false;
        };
        v_395 = s_7_St_14_Standby_1;
        if (c_wash) {
          s_7_St_14_Standby_2 = true;
        } else {
          s_7_St_14_Standby_2 = true;
        };
        v_396 = s_7_St_14_Standby_2;
        if (c_wash) {
          s_7_St_14_Standby_3 = false;
        } else {
          s_7_St_14_Standby_3 = true;
        };
        v_397 = s_7_St_14_Standby_3;
      } else {
        if (finish) {
          r_7_St_14_Washing = true;
          s_7_St_14_Washing_1 = true;
          s_7_St_14_Washing_2 = true;
          s_7_St_14_Washing_3 = false;
        } else {
          r_7_St_14_Washing = self->pnr_7;
          s_7_St_14_Washing_1 = false;
          s_7_St_14_Washing_2 = true;
          s_7_St_14_Washing_3 = false;
        };
        v_410 = r_7_St_14_Washing;
        v_395 = s_7_St_14_Washing_1;
        v_396 = s_7_St_14_Washing_2;
        v_397 = s_7_St_14_Washing_3;
      };
      v_404 = v_395;
      v_405 = v_396;
      v_406 = v_397;
      v_412 = v_410;
    } else {
      ck_10_3_0_0 = ck_10_3;
      if (ck_10_3_0_0) {
        v_411 = true;
        v_398 = true;
        v_399 = true;
        v_400 = true;
      } else {
        v_86 = (finish&&c_wash);
        if (v_86) {
          v_88 = true;
          v_87_1 = false;
          v_87_2 = true;
          v_87_3 = false;
        } else {
          v_88 = self->pnr_7;
          v_87_1 = false;
          v_87_2 = false;
          v_87_3 = false;
        };
        v_84 = !(c_wash);
        v_85 = (finish&&v_84);
        if (v_85) {
          r_7_St_14_Water_fill = true;
        } else {
          r_7_St_14_Water_fill = v_88;
        };
        v_411 = r_7_St_14_Water_fill;
        if (v_85) {
          s_7_St_14_Water_fill_1 = false;
        } else {
          s_7_St_14_Water_fill_1 = v_87_1;
        };
        v_398 = s_7_St_14_Water_fill_1;
        if (v_85) {
          s_7_St_14_Water_fill_2 = true;
        } else {
          s_7_St_14_Water_fill_2 = v_87_2;
        };
        v_399 = s_7_St_14_Water_fill_2;
        if (v_85) {
          s_7_St_14_Water_fill_3 = true;
        } else {
          s_7_St_14_Water_fill_3 = v_87_3;
        };
        v_400 = s_7_St_14_Water_fill_3;
        if (v_87_1) {
          v_87_2_1 = v_87_2;
          if (v_87_2_1) {
            v_87_3_1_1 = v_87_3;
          } else {
            v_87_3_1_0 = v_87_3;
          };
        } else {
          v_87_2_0 = v_87_2;
          if (v_87_2_0) {
            v_87_3_0_1 = v_87_3;
          } else {
            v_87_3_0_0 = v_87_3;
          };
        };
        if (s_7_St_14_Water_fill_1) {
          s_7_St_14_Water_fill_2_1 = s_7_St_14_Water_fill_2;
          if (s_7_St_14_Water_fill_2_1) {
            s_7_St_14_Water_fill_3_1_1 = s_7_St_14_Water_fill_3;
          } else {
            s_7_St_14_Water_fill_3_1_0 = s_7_St_14_Water_fill_3;
          };
        } else {
          s_7_St_14_Water_fill_2_0 = s_7_St_14_Water_fill_2;
          if (s_7_St_14_Water_fill_2_0) {
            s_7_St_14_Water_fill_3_0_1 = s_7_St_14_Water_fill_3;
          } else {
            s_7_St_14_Water_fill_3_0_0 = s_7_St_14_Water_fill_3;
          };
        };
      };
      v_404 = v_398;
      v_405 = v_399;
      v_406 = v_400;
      v_412 = v_411;
    };
    s_7_1 = v_404;
    s_7_2 = v_405;
    s_7_3 = v_406;
    r_7 = v_412;
  };
  ck_11_1 = s_7_1;
  ck_11_2 = s_7_2;
  ck_11_3 = s_7_3;
  if (ck_11_1) {
    ck_11_2_1 = ck_11_2;
    if (ck_11_2_1) {
      ck_11_3_1_1 = ck_11_3;
      if (ck_11_3_1_1) {
        wash_power_1_St_14_Off = 0;
        wash_state_1_St_14_Off = 0;
        nr_7_St_14_Off = false;
        ns_7_St_14_Off_1 = true;
        ns_7_St_14_Off_2 = true;
        ns_7_St_14_Off_3 = true;
        v_350 = wash_power_1_St_14_Off;
        v_356 = wash_state_1_St_14_Off;
        v_380 = nr_7_St_14_Off;
        v_362 = ns_7_St_14_Off_1;
        v_363 = ns_7_St_14_Off_2;
        v_364 = ns_7_St_14_Off_3;
        if (ns_7_St_14_Off_1) {
          ns_7_St_14_Off_2_1 = ns_7_St_14_Off_2;
          if (ns_7_St_14_Off_2_1) {
            ns_7_St_14_Off_3_1_1 = ns_7_St_14_Off_3;
          } else {
            ns_7_St_14_Off_3_1_0 = ns_7_St_14_Off_3;
          };
        } else {
          ns_7_St_14_Off_2_0 = ns_7_St_14_Off_2;
          if (ns_7_St_14_Off_2_0) {
            ns_7_St_14_Off_3_0_1 = ns_7_St_14_Off_3;
          } else {
            ns_7_St_14_Off_3_0_0 = ns_7_St_14_Off_3;
          };
        };
      } else {
        wash_power_1_St_14_Rinse = 200;
        v_350 = wash_power_1_St_14_Rinse;
        wash_state_1_St_14_Rinse = 3;
        v_356 = wash_state_1_St_14_Rinse;
        nr_7_St_14_Rinse = false;
        v_380 = nr_7_St_14_Rinse;
        ns_7_St_14_Rinse_1 = true;
        v_362 = ns_7_St_14_Rinse_1;
        ns_7_St_14_Rinse_2 = true;
        v_363 = ns_7_St_14_Rinse_2;
        ns_7_St_14_Rinse_3 = false;
        v_364 = ns_7_St_14_Rinse_3;
        if (ns_7_St_14_Rinse_1) {
          ns_7_St_14_Rinse_2_1 = ns_7_St_14_Rinse_2;
          if (ns_7_St_14_Rinse_2_1) {
            ns_7_St_14_Rinse_3_1_1 = ns_7_St_14_Rinse_3;
          } else {
            ns_7_St_14_Rinse_3_1_0 = ns_7_St_14_Rinse_3;
          };
        } else {
          ns_7_St_14_Rinse_2_0 = ns_7_St_14_Rinse_2;
          if (ns_7_St_14_Rinse_2_0) {
            ns_7_St_14_Rinse_3_0_1 = ns_7_St_14_Rinse_3;
          } else {
            ns_7_St_14_Rinse_3_0_0 = ns_7_St_14_Rinse_3;
          };
        };
      };
      v_352 = v_350;
      v_358 = v_356;
      v_374 = v_362;
      v_375 = v_363;
      v_376 = v_364;
      v_382 = v_380;
    } else {
      ck_11_3_1_0 = ck_11_3;
      if (ck_11_3_1_0) {
        v_351 = 0;
        v_357 = 0;
        v_381 = true;
        v_365 = true;
        v_366 = true;
        v_367 = true;
      } else {
        wash_power_1_St_14_Spin = 800;
        v_351 = wash_power_1_St_14_Spin;
        wash_state_1_St_14_Spin = 4;
        v_357 = wash_state_1_St_14_Spin;
        nr_7_St_14_Spin = false;
        v_381 = nr_7_St_14_Spin;
        ns_7_St_14_Spin_1 = true;
        v_365 = ns_7_St_14_Spin_1;
        ns_7_St_14_Spin_2 = false;
        v_366 = ns_7_St_14_Spin_2;
        ns_7_St_14_Spin_3 = false;
        v_367 = ns_7_St_14_Spin_3;
      };
      v_352 = v_351;
      v_358 = v_357;
      v_374 = v_365;
      v_375 = v_366;
      v_376 = v_367;
      v_382 = v_381;
      if (!(ck_11_3_1_0)) {
        if (ns_7_St_14_Spin_1) {
          ns_7_St_14_Spin_2_1 = ns_7_St_14_Spin_2;
          if (ns_7_St_14_Spin_2_1) {
            ns_7_St_14_Spin_3_1_1 = ns_7_St_14_Spin_3;
          } else {
            ns_7_St_14_Spin_3_1_0 = ns_7_St_14_Spin_3;
          };
        } else {
          ns_7_St_14_Spin_2_0 = ns_7_St_14_Spin_2;
          if (ns_7_St_14_Spin_2_0) {
            ns_7_St_14_Spin_3_0_1 = ns_7_St_14_Spin_3;
          } else {
            ns_7_St_14_Spin_3_0_0 = ns_7_St_14_Spin_3;
          };
        };
      };
    };
    wash_power_1 = v_352;
    wash_state_1 = v_358;
    ns_7_1 = v_374;
    ns_7_2 = v_375;
    ns_7_3 = v_376;
    nr_7 = v_382;
  } else {
    ck_11_2_0 = ck_11_2;
    if (ck_11_2_0) {
      ck_11_3_0_1 = ck_11_3;
      if (ck_11_3_0_1) {
        wash_power_1_St_14_Standby = 0;
        v_353 = wash_power_1_St_14_Standby;
        wash_state_1_St_14_Standby = 5;
        v_359 = wash_state_1_St_14_Standby;
        nr_7_St_14_Standby = false;
        v_383 = nr_7_St_14_Standby;
        ns_7_St_14_Standby_1 = false;
        v_368 = ns_7_St_14_Standby_1;
        ns_7_St_14_Standby_2 = true;
        v_369 = ns_7_St_14_Standby_2;
        ns_7_St_14_Standby_3 = true;
        v_370 = ns_7_St_14_Standby_3;
      } else {
        wash_power_1_St_14_Washing = 250;
        wash_state_1_St_14_Washing = 2;
        nr_7_St_14_Washing = false;
        ns_7_St_14_Washing_1 = false;
        ns_7_St_14_Washing_2 = true;
        ns_7_St_14_Washing_3 = false;
        v_353 = wash_power_1_St_14_Washing;
        v_359 = wash_state_1_St_14_Washing;
        v_383 = nr_7_St_14_Washing;
        v_368 = ns_7_St_14_Washing_1;
        v_369 = ns_7_St_14_Washing_2;
        v_370 = ns_7_St_14_Washing_3;
      };
      v_355 = v_353;
      v_361 = v_359;
      v_377 = v_368;
      v_378 = v_369;
      v_379 = v_370;
      v_385 = v_383;
    } else {
      ck_11_3_0_0 = ck_11_3;
      if (ck_11_3_0_0) {
        v_354 = 0;
        v_360 = 0;
        v_384 = true;
        v_371 = true;
        v_372 = true;
        v_373 = true;
      } else {
        wash_power_1_St_14_Water_fill = 15;
        v_354 = wash_power_1_St_14_Water_fill;
        wash_state_1_St_14_Water_fill = 1;
        v_360 = wash_state_1_St_14_Water_fill;
        nr_7_St_14_Water_fill = false;
        v_384 = nr_7_St_14_Water_fill;
        ns_7_St_14_Water_fill_1 = false;
        v_371 = ns_7_St_14_Water_fill_1;
        ns_7_St_14_Water_fill_2 = false;
        v_372 = ns_7_St_14_Water_fill_2;
        ns_7_St_14_Water_fill_3 = false;
        v_373 = ns_7_St_14_Water_fill_3;
        if (ns_7_St_14_Water_fill_1) {
          ns_7_St_14_Water_fill_2_1 = ns_7_St_14_Water_fill_2;
          if (ns_7_St_14_Water_fill_2_1) {
            ns_7_St_14_Water_fill_3_1_1 = ns_7_St_14_Water_fill_3;
          } else {
            ns_7_St_14_Water_fill_3_1_0 = ns_7_St_14_Water_fill_3;
          };
        } else {
          ns_7_St_14_Water_fill_2_0 = ns_7_St_14_Water_fill_2;
          if (ns_7_St_14_Water_fill_2_0) {
            ns_7_St_14_Water_fill_3_0_1 = ns_7_St_14_Water_fill_3;
          } else {
            ns_7_St_14_Water_fill_3_0_0 = ns_7_St_14_Water_fill_3;
          };
        };
      };
      v_355 = v_354;
      v_361 = v_360;
      v_377 = v_371;
      v_378 = v_372;
      v_379 = v_373;
      v_385 = v_384;
    };
    wash_power_1 = v_355;
    wash_state_1 = v_361;
    ns_7_1 = v_377;
    ns_7_2 = v_378;
    ns_7_3 = v_379;
    nr_7 = v_385;
  };
  _out->wash_state = wash_state_1;
  _out->wash_power = wash_power_1;
  if (ns_7_1) {
    ns_7_2_1 = ns_7_2;
    if (ns_7_2_1) {
      ns_7_3_1_1 = ns_7_3;
    } else {
      ns_7_3_1_0 = ns_7_3;
    };
  } else {
    ns_7_2_0 = ns_7_2;
    if (ns_7_2_0) {
      ns_7_3_0_1 = ns_7_3;
    } else {
      ns_7_3_0_0 = ns_7_3;
    };
  };
  if (!(ck_11_1)) {
    if (ck_11_2_0) {
      if (ck_11_3_0_1) {
        if (ns_7_St_14_Standby_1) {
          ns_7_St_14_Standby_2_1 = ns_7_St_14_Standby_2;
          if (ns_7_St_14_Standby_2_1) {
            ns_7_St_14_Standby_3_1_1 = ns_7_St_14_Standby_3;
          } else {
            ns_7_St_14_Standby_3_1_0 = ns_7_St_14_Standby_3;
          };
        } else {
          ns_7_St_14_Standby_2_0 = ns_7_St_14_Standby_2;
          if (ns_7_St_14_Standby_2_0) {
            ns_7_St_14_Standby_3_0_1 = ns_7_St_14_Standby_3;
          } else {
            ns_7_St_14_Standby_3_0_0 = ns_7_St_14_Standby_3;
          };
        };
      } else {
        if (ns_7_St_14_Washing_1) {
          ns_7_St_14_Washing_2_1 = ns_7_St_14_Washing_2;
          if (ns_7_St_14_Washing_2_1) {
            ns_7_St_14_Washing_3_1_1 = ns_7_St_14_Washing_3;
          } else {
            ns_7_St_14_Washing_3_1_0 = ns_7_St_14_Washing_3;
          };
        } else {
          ns_7_St_14_Washing_2_0 = ns_7_St_14_Washing_2;
          if (ns_7_St_14_Washing_2_0) {
            ns_7_St_14_Washing_3_0_1 = ns_7_St_14_Washing_3;
          } else {
            ns_7_St_14_Washing_3_0_0 = ns_7_St_14_Washing_3;
          };
        };
      };
    };
  };
  if (s_7_1) {
    s_7_2_1 = s_7_2;
    if (s_7_2_1) {
      s_7_3_1_1 = s_7_3;
    } else {
      s_7_3_1_0 = s_7_3;
    };
  } else {
    s_7_2_0 = s_7_2;
    if (s_7_2_0) {
      s_7_3_0_1 = s_7_3;
    } else {
      s_7_3_0_0 = s_7_3;
    };
  };
  if (!(ck_10_1)) {
    if (ck_10_2_0) {
      if (ck_10_3_0_1) {
        if (s_7_St_14_Standby_1) {
          s_7_St_14_Standby_2_1 = s_7_St_14_Standby_2;
          if (s_7_St_14_Standby_2_1) {
            s_7_St_14_Standby_3_1_1 = s_7_St_14_Standby_3;
          } else {
            s_7_St_14_Standby_3_1_0 = s_7_St_14_Standby_3;
          };
        } else {
          s_7_St_14_Standby_2_0 = s_7_St_14_Standby_2;
          if (s_7_St_14_Standby_2_0) {
            s_7_St_14_Standby_3_0_1 = s_7_St_14_Standby_3;
          } else {
            s_7_St_14_Standby_3_0_0 = s_7_St_14_Standby_3;
          };
        };
      } else {
        if (s_7_St_14_Washing_1) {
          s_7_St_14_Washing_2_1 = s_7_St_14_Washing_2;
          if (s_7_St_14_Washing_2_1) {
            s_7_St_14_Washing_3_1_1 = s_7_St_14_Washing_3;
          } else {
            s_7_St_14_Washing_3_1_0 = s_7_St_14_Washing_3;
          };
        } else {
          s_7_St_14_Washing_2_0 = s_7_St_14_Washing_2;
          if (s_7_St_14_Washing_2_0) {
            s_7_St_14_Washing_3_0_1 = s_7_St_14_Washing_3;
          } else {
            s_7_St_14_Washing_3_0_0 = s_7_St_14_Washing_3;
          };
        };
      };
    };
  };
  if (ck_8_1) {
    ck_8_2_1 = ck_8_2;
    if (ck_8_2_1) {
      v_71 = (up2&&c_rad2);
      if (v_71) {
        v_73 = true;
        v_72_1 = false;
        v_72_2 = true;
      } else {
        v_73 = self->pnr_8;
        v_72_1 = true;
        v_72_2 = true;
      };
      v_69 = !(c_rad1);
      v_70 = (down1||v_69);
      if (v_70) {
        r_8_St_15_Eco = true;
      } else {
        r_8_St_15_Eco = v_73;
      };
      v_429 = r_8_St_15_Eco;
      if (v_70) {
        s_8_St_15_Eco_1 = true;
      } else {
        s_8_St_15_Eco_1 = v_72_1;
      };
      v_425 = s_8_St_15_Eco_1;
      if (v_70) {
        s_8_St_15_Eco_2 = false;
      } else {
        s_8_St_15_Eco_2 = v_72_2;
      };
      v_426 = s_8_St_15_Eco_2;
      if (v_72_1) {
        v_72_2_1 = v_72_2;
      } else {
        v_72_2_0 = v_72_2;
      };
      if (s_8_St_15_Eco_1) {
        s_8_St_15_Eco_2_1 = s_8_St_15_Eco_2;
      } else {
        s_8_St_15_Eco_2_0 = s_8_St_15_Eco_2;
      };
    } else {
      v_76 = !(c_rad1);
      v_77 = (down1||v_76);
      if (v_77) {
        v_79 = true;
        v_78_1 = false;
        v_78_2 = false;
      } else {
        v_79 = self->pnr_8;
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
        r_8_St_15_Frostprotection = true;
        s_8_St_15_Frostprotection_1 = true;
        s_8_St_15_Frostprotection_2 = true;
      } else {
        r_8_St_15_Frostprotection = v_81;
        s_8_St_15_Frostprotection_1 = v_80_1;
        s_8_St_15_Frostprotection_2 = v_80_2;
      };
      v_429 = r_8_St_15_Frostprotection;
      v_425 = s_8_St_15_Frostprotection_1;
      v_426 = s_8_St_15_Frostprotection_2;
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
      if (s_8_St_15_Frostprotection_1) {
        s_8_St_15_Frostprotection_2_1 = s_8_St_15_Frostprotection_2;
      } else {
        s_8_St_15_Frostprotection_2_0 = s_8_St_15_Frostprotection_2;
      };
    };
    s_8_1 = v_425;
    s_8_2 = v_426;
    r_8 = v_429;
  } else {
    ck_8_2_0 = ck_8_2;
    if (ck_8_2_0) {
      v_65 = !(c_rad2);
      v_66 = (down2||v_65);
      if (v_66) {
        v_68 = true;
        v_67_1 = true;
        v_67_2 = false;
      } else {
        v_68 = self->pnr_8;
        v_67_1 = false;
        v_67_2 = true;
      };
      v_63 = !(c_rad1);
      v_64 = (down1||v_63);
      if (v_64) {
        r_8_St_15_High = true;
      } else {
        r_8_St_15_High = v_68;
      };
      v_430 = r_8_St_15_High;
      if (v_64) {
        s_8_St_15_High_1 = true;
      } else {
        s_8_St_15_High_1 = v_67_1;
      };
      v_427 = s_8_St_15_High_1;
      if (v_64) {
        s_8_St_15_High_2 = true;
      } else {
        s_8_St_15_High_2 = v_67_2;
      };
      v_428 = s_8_St_15_High_2;
    } else {
      v_82 = !(c_rad1);
      v_83 = (up1||v_82);
      if (v_83) {
        r_8_St_15_Off = true;
        s_8_St_15_Off_1 = true;
        s_8_St_15_Off_2 = false;
      } else {
        r_8_St_15_Off = self->pnr_8;
        s_8_St_15_Off_1 = false;
        s_8_St_15_Off_2 = false;
      };
      v_430 = r_8_St_15_Off;
      v_427 = s_8_St_15_Off_1;
      v_428 = s_8_St_15_Off_2;
    };
    s_8_1 = v_427;
    s_8_2 = v_428;
    r_8 = v_430;
  };
  ck_9_1 = s_8_1;
  ck_9_2 = s_8_2;
  if (ck_9_1) {
    ck_9_2_1 = ck_9_2;
    if (ck_9_2_1) {
      rad_power_1_St_15_Eco = 1500;
      v_413 = rad_power_1_St_15_Eco;
      rad_state_1_St_15_Eco = 2;
      v_415 = rad_state_1_St_15_Eco;
      nr_8_St_15_Eco = false;
      v_421 = nr_8_St_15_Eco;
      ns_8_St_15_Eco_1 = true;
      v_417 = ns_8_St_15_Eco_1;
      ns_8_St_15_Eco_2 = true;
      v_418 = ns_8_St_15_Eco_2;
      if (ns_8_St_15_Eco_1) {
        ns_8_St_15_Eco_2_1 = ns_8_St_15_Eco_2;
      } else {
        ns_8_St_15_Eco_2_0 = ns_8_St_15_Eco_2;
      };
    } else {
      rad_power_1_St_15_Frostprotection = 300;
      rad_state_1_St_15_Frostprotection = 1;
      nr_8_St_15_Frostprotection = false;
      ns_8_St_15_Frostprotection_1 = true;
      ns_8_St_15_Frostprotection_2 = false;
      v_413 = rad_power_1_St_15_Frostprotection;
      v_415 = rad_state_1_St_15_Frostprotection;
      v_421 = nr_8_St_15_Frostprotection;
      v_417 = ns_8_St_15_Frostprotection_1;
      v_418 = ns_8_St_15_Frostprotection_2;
      if (ns_8_St_15_Frostprotection_1) {
        ns_8_St_15_Frostprotection_2_1 = ns_8_St_15_Frostprotection_2;
      } else {
        ns_8_St_15_Frostprotection_2_0 = ns_8_St_15_Frostprotection_2;
      };
    };
    rad_power_1 = v_413;
    rad_state_1 = v_415;
    ns_8_1 = v_417;
    ns_8_2 = v_418;
    nr_8 = v_421;
  } else {
    ck_9_2_0 = ck_9_2;
    if (ck_9_2_0) {
      rad_power_1_St_15_High = 2000;
      v_414 = rad_power_1_St_15_High;
      rad_state_1_St_15_High = 3;
      v_416 = rad_state_1_St_15_High;
      nr_8_St_15_High = false;
      v_422 = nr_8_St_15_High;
      ns_8_St_15_High_1 = false;
      v_419 = ns_8_St_15_High_1;
      ns_8_St_15_High_2 = true;
      v_420 = ns_8_St_15_High_2;
    } else {
      rad_power_1_St_15_Off = 0;
      rad_state_1_St_15_Off = 0;
      nr_8_St_15_Off = false;
      ns_8_St_15_Off_1 = false;
      ns_8_St_15_Off_2 = false;
      v_414 = rad_power_1_St_15_Off;
      v_416 = rad_state_1_St_15_Off;
      v_422 = nr_8_St_15_Off;
      v_419 = ns_8_St_15_Off_1;
      v_420 = ns_8_St_15_Off_2;
    };
    rad_power_1 = v_414;
    rad_state_1 = v_416;
    ns_8_1 = v_419;
    ns_8_2 = v_420;
    nr_8 = v_422;
  };
  _out->rad_state = rad_state_1;
  v_50 = (_out->rad_state<=1);
  v_51 = (v_49&&v_50);
  rule4 = (_out->occupied||v_51);
  v_54 = (_out->rad_state<=1);
  rule3 = (v_53||v_54);
  v_60 = (v_59&&rule3);
  v_61 = (v_60&&rule4);
  _out->rad_power = rad_power_1;
  v = (_out->rad_power+_out->wash_power);
  total = (v+_out->oven_power);
  if (ck_1) {
    if (ck_2_1) {
      rule5_Confort = (total<=7000);
      v_278 = rule5_Confort;
    } else {
      rule5_Eco = (total<=5000);
      v_278 = rule5_Eco;
    };
    rule5 = v_278;
  } else {
    if (ck_2_0) {
      v_277 = true;
    } else {
      rule5_Minimal = (total<=3000);
      v_277 = rule5_Minimal;
    };
    rule5 = v_277;
  };
  v_62 = (v_61&&rule5);
  if (ns_8_1) {
    ns_8_2_1 = ns_8_2;
  } else {
    ns_8_2_0 = ns_8_2;
  };
  if (!(ck_9_1)) {
    if (ck_9_2_0) {
      if (ns_8_St_15_High_1) {
        ns_8_St_15_High_2_1 = ns_8_St_15_High_2;
      } else {
        ns_8_St_15_High_2_0 = ns_8_St_15_High_2;
      };
    } else {
      if (ns_8_St_15_Off_1) {
        ns_8_St_15_Off_2_1 = ns_8_St_15_Off_2;
      } else {
        ns_8_St_15_Off_2_0 = ns_8_St_15_Off_2;
      };
    };
  };
  if (s_8_1) {
    s_8_2_1 = s_8_2;
  } else {
    s_8_2_0 = s_8_2;
  };
  if (!(ck_8_1)) {
    if (ck_8_2_0) {
      if (v_67_1) {
        v_67_2_1 = v_67_2;
      } else {
        v_67_2_0 = v_67_2;
      };
      if (s_8_St_15_High_1) {
        s_8_St_15_High_2_1 = s_8_St_15_High_2;
      } else {
        s_8_St_15_High_2_0 = s_8_St_15_High_2;
      };
    } else {
      if (s_8_St_15_Off_1) {
        s_8_St_15_Off_2_1 = s_8_St_15_Off_2;
      } else {
        s_8_St_15_Off_2_0 = s_8_St_15_Off_2;
      };
    };
  };
  self->pnr = nr;
  self->v_289 = ns_1_2;
  self->v_290 = ns_2_2;
  self->pnr_1 = nr_1;
  self->ck_22_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->ck_20_1 = ns_2_1;
  self->pnr_3 = nr_3;
  self->ck_18_1 = ns_3_1;
  self->pnr_4 = nr_4;
  self->ck_16_1 = ns_4_1;
  self->pnr_5 = nr_5;
  self->ck_14_1 = ns_5_1;
  self->pnr_6 = nr_6;
  self->v_327 = ns_6_1;
  self->v_328 = ns_6_2;
  self->v_329 = ns_6_3;
  self->pnr_7 = nr_7;
  self->v_386 = ns_7_1;
  self->v_387 = ns_7_2;
  self->v_388 = ns_7_3;
  self->pnr_8 = nr_8;
  self->v_423 = ns_8_1;
  self->v_424 = ns_8_2;;
}

