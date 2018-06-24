/* --- Generated the 23/6/2018 at 14:33 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jun. 15 15:41:53 CET 2018) --- */
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
  self->v_119 = false;
  self->v_120 = false;
}

void System__rad_step(int up1, int down1, int up2, int down2, int c_rad1,
                      int c_rad2, System__rad_out* _out,
                      System__rad_mem* self) {
  
  int v_118;
  int v_117;
  int v_116;
  int v_115;
  int v_114;
  int v_113;
  int v_112;
  int v_111;
  int v_110;
  int v_109;
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
  int v_126;
  int v_125;
  int v_124;
  int v_123;
  int v_122;
  int v_121;
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
  ck_1 = self->v_119;
  ck_2 = self->v_120;
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
      v_125 = r_St_3_Eco;
      if (v_14) {
        s_St_3_Eco_1 = true;
      } else {
        s_St_3_Eco_1 = v_16_1;
      };
      v_121 = s_St_3_Eco_1;
      if (v_14) {
        s_St_3_Eco_2 = false;
      } else {
        s_St_3_Eco_2 = v_16_2;
      };
      v_122 = s_St_3_Eco_2;
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
      v_125 = r_St_3_Frostprotection;
      v_121 = s_St_3_Frostprotection_1;
      v_122 = s_St_3_Frostprotection_2;
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
    s_1 = v_121;
    s_2 = v_122;
    r = v_125;
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
      v_126 = r_St_3_High;
      if (v_8) {
        s_St_3_High_1 = true;
      } else {
        s_St_3_High_1 = v_11_1;
      };
      v_123 = s_St_3_High_1;
      if (v_8) {
        s_St_3_High_2 = true;
      } else {
        s_St_3_High_2 = v_11_2;
      };
      v_124 = s_St_3_High_2;
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
      v_126 = r_St_3_Off;
      v_123 = s_St_3_Off_1;
      v_124 = s_St_3_Off_2;
    };
    s_1 = v_123;
    s_2 = v_124;
    r = v_126;
  };
  ck_4_1 = s_1;
  ck_4_2 = s_2;
  if (ck_4_1) {
    ck_4_2_1 = ck_4_2;
    if (ck_4_2_1) {
      rad_power_St_3_Eco = 1500;
      v_109 = rad_power_St_3_Eco;
      rad_state_St_3_Eco = 2;
      v_111 = rad_state_St_3_Eco;
      nr_St_3_Eco = false;
      v_117 = nr_St_3_Eco;
      ns_St_3_Eco_1 = true;
      v_113 = ns_St_3_Eco_1;
      ns_St_3_Eco_2 = true;
      v_114 = ns_St_3_Eco_2;
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
      v_109 = rad_power_St_3_Frostprotection;
      v_111 = rad_state_St_3_Frostprotection;
      v_117 = nr_St_3_Frostprotection;
      v_113 = ns_St_3_Frostprotection_1;
      v_114 = ns_St_3_Frostprotection_2;
      if (ns_St_3_Frostprotection_1) {
        ns_St_3_Frostprotection_2_1 = ns_St_3_Frostprotection_2;
      } else {
        ns_St_3_Frostprotection_2_0 = ns_St_3_Frostprotection_2;
      };
    };
    _out->rad_power = v_109;
    _out->rad_state = v_111;
    ns_1 = v_113;
    ns_2 = v_114;
    nr = v_117;
  } else {
    ck_4_2_0 = ck_4_2;
    if (ck_4_2_0) {
      rad_power_St_3_High = 2000;
      v_110 = rad_power_St_3_High;
      rad_state_St_3_High = 3;
      v_112 = rad_state_St_3_High;
      nr_St_3_High = false;
      v_118 = nr_St_3_High;
      ns_St_3_High_1 = false;
      v_115 = ns_St_3_High_1;
      ns_St_3_High_2 = true;
      v_116 = ns_St_3_High_2;
    } else {
      rad_power_St_3_Off = 0;
      rad_state_St_3_Off = 0;
      nr_St_3_Off = false;
      ns_St_3_Off_1 = false;
      ns_St_3_Off_2 = false;
      v_110 = rad_power_St_3_Off;
      v_112 = rad_state_St_3_Off;
      v_118 = nr_St_3_Off;
      v_115 = ns_St_3_Off_1;
      v_116 = ns_St_3_Off_2;
    };
    _out->rad_power = v_110;
    _out->rad_state = v_112;
    ns_1 = v_115;
    ns_2 = v_116;
    nr = v_118;
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
  self->v_119 = ns_1;
  self->v_120 = ns_2;;
}

void System__washing_machine_reset(System__washing_machine_mem* self) {
  self->pnr = false;
  self->v_163 = true;
  self->v_164 = true;
  self->v_165 = true;
}

void System__washing_machine_step(int start, int finish, int c_wash,
                                  System__washing_machine_out* _out,
                                  System__washing_machine_mem* self) {
  
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
  ck_1 = self->v_163;
  ck_2 = self->v_164;
  ck_3 = self->v_165;
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
        v_184 = r_St_4_Off;
        v_166 = s_St_4_Off_1;
        v_167 = s_St_4_Off_2;
        v_168 = s_St_4_Off_3;
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
        v_184 = r_St_4_Rinse;
        if (finish) {
          s_St_4_Rinse_1 = true;
        } else {
          s_St_4_Rinse_1 = true;
        };
        v_166 = s_St_4_Rinse_1;
        if (finish) {
          s_St_4_Rinse_2 = false;
        } else {
          s_St_4_Rinse_2 = true;
        };
        v_167 = s_St_4_Rinse_2;
        if (finish) {
          s_St_4_Rinse_3 = false;
        } else {
          s_St_4_Rinse_3 = false;
        };
        v_168 = s_St_4_Rinse_3;
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
      v_178 = v_166;
      v_179 = v_167;
      v_180 = v_168;
      v_186 = v_184;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_185 = true;
        v_169 = true;
        v_170 = true;
        v_171 = true;
      } else {
        if (finish) {
          r_St_4_Spin = true;
        } else {
          r_St_4_Spin = self->pnr;
        };
        v_185 = r_St_4_Spin;
        if (finish) {
          s_St_4_Spin_1 = true;
        } else {
          s_St_4_Spin_1 = true;
        };
        v_169 = s_St_4_Spin_1;
        if (finish) {
          s_St_4_Spin_2 = true;
        } else {
          s_St_4_Spin_2 = false;
        };
        v_170 = s_St_4_Spin_2;
        if (finish) {
          s_St_4_Spin_3 = true;
        } else {
          s_St_4_Spin_3 = false;
        };
        v_171 = s_St_4_Spin_3;
      };
      v_178 = v_169;
      v_179 = v_170;
      v_180 = v_171;
      v_186 = v_185;
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
    s_1 = v_178;
    s_2 = v_179;
    s_3 = v_180;
    r = v_186;
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
        v_187 = r_St_4_Standby;
        if (c_wash) {
          s_St_4_Standby_1 = false;
        } else {
          s_St_4_Standby_1 = false;
        };
        v_172 = s_St_4_Standby_1;
        if (c_wash) {
          s_St_4_Standby_2 = true;
        } else {
          s_St_4_Standby_2 = true;
        };
        v_173 = s_St_4_Standby_2;
        if (c_wash) {
          s_St_4_Standby_3 = false;
        } else {
          s_St_4_Standby_3 = true;
        };
        v_174 = s_St_4_Standby_3;
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
        v_187 = r_St_4_Washing;
        v_172 = s_St_4_Washing_1;
        v_173 = s_St_4_Washing_2;
        v_174 = s_St_4_Washing_3;
      };
      v_181 = v_172;
      v_182 = v_173;
      v_183 = v_174;
      v_189 = v_187;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_188 = true;
        v_175 = true;
        v_176 = true;
        v_177 = true;
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
        v_188 = r_St_4_Water_fill;
        if (v_28) {
          s_St_4_Water_fill_1 = false;
        } else {
          s_St_4_Water_fill_1 = v_30_1;
        };
        v_175 = s_St_4_Water_fill_1;
        if (v_28) {
          s_St_4_Water_fill_2 = true;
        } else {
          s_St_4_Water_fill_2 = v_30_2;
        };
        v_176 = s_St_4_Water_fill_2;
        if (v_28) {
          s_St_4_Water_fill_3 = true;
        } else {
          s_St_4_Water_fill_3 = v_30_3;
        };
        v_177 = s_St_4_Water_fill_3;
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
      v_181 = v_175;
      v_182 = v_176;
      v_183 = v_177;
      v_189 = v_188;
    };
    s_1 = v_181;
    s_2 = v_182;
    s_3 = v_183;
    r = v_189;
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
        v_127 = wash_power_St_4_Off;
        v_133 = wash_state_St_4_Off;
        v_157 = nr_St_4_Off;
        v_139 = ns_St_4_Off_1;
        v_140 = ns_St_4_Off_2;
        v_141 = ns_St_4_Off_3;
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
        v_127 = wash_power_St_4_Rinse;
        wash_state_St_4_Rinse = 3;
        v_133 = wash_state_St_4_Rinse;
        nr_St_4_Rinse = false;
        v_157 = nr_St_4_Rinse;
        ns_St_4_Rinse_1 = true;
        v_139 = ns_St_4_Rinse_1;
        ns_St_4_Rinse_2 = true;
        v_140 = ns_St_4_Rinse_2;
        ns_St_4_Rinse_3 = false;
        v_141 = ns_St_4_Rinse_3;
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
      v_129 = v_127;
      v_135 = v_133;
      v_151 = v_139;
      v_152 = v_140;
      v_153 = v_141;
      v_159 = v_157;
    } else {
      ck_5_3_1_0 = ck_5_3;
      if (ck_5_3_1_0) {
        v_128 = 0;
        v_134 = 0;
        v_158 = true;
        v_142 = true;
        v_143 = true;
        v_144 = true;
      } else {
        wash_power_St_4_Spin = 800;
        v_128 = wash_power_St_4_Spin;
        wash_state_St_4_Spin = 4;
        v_134 = wash_state_St_4_Spin;
        nr_St_4_Spin = false;
        v_158 = nr_St_4_Spin;
        ns_St_4_Spin_1 = true;
        v_142 = ns_St_4_Spin_1;
        ns_St_4_Spin_2 = false;
        v_143 = ns_St_4_Spin_2;
        ns_St_4_Spin_3 = false;
        v_144 = ns_St_4_Spin_3;
      };
      v_129 = v_128;
      v_135 = v_134;
      v_151 = v_142;
      v_152 = v_143;
      v_153 = v_144;
      v_159 = v_158;
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
    _out->wash_power = v_129;
    _out->wash_state = v_135;
    ns_1 = v_151;
    ns_2 = v_152;
    ns_3 = v_153;
    nr = v_159;
  } else {
    ck_5_2_0 = ck_5_2;
    if (ck_5_2_0) {
      ck_5_3_0_1 = ck_5_3;
      if (ck_5_3_0_1) {
        wash_power_St_4_Standby = 0;
        v_130 = wash_power_St_4_Standby;
        wash_state_St_4_Standby = 5;
        v_136 = wash_state_St_4_Standby;
        nr_St_4_Standby = false;
        v_160 = nr_St_4_Standby;
        ns_St_4_Standby_1 = false;
        v_145 = ns_St_4_Standby_1;
        ns_St_4_Standby_2 = true;
        v_146 = ns_St_4_Standby_2;
        ns_St_4_Standby_3 = true;
        v_147 = ns_St_4_Standby_3;
      } else {
        wash_power_St_4_Washing = 250;
        wash_state_St_4_Washing = 2;
        nr_St_4_Washing = false;
        ns_St_4_Washing_1 = false;
        ns_St_4_Washing_2 = true;
        ns_St_4_Washing_3 = false;
        v_130 = wash_power_St_4_Washing;
        v_136 = wash_state_St_4_Washing;
        v_160 = nr_St_4_Washing;
        v_145 = ns_St_4_Washing_1;
        v_146 = ns_St_4_Washing_2;
        v_147 = ns_St_4_Washing_3;
      };
      v_132 = v_130;
      v_138 = v_136;
      v_154 = v_145;
      v_155 = v_146;
      v_156 = v_147;
      v_162 = v_160;
    } else {
      ck_5_3_0_0 = ck_5_3;
      if (ck_5_3_0_0) {
        v_131 = 0;
        v_137 = 0;
        v_161 = true;
        v_148 = true;
        v_149 = true;
        v_150 = true;
      } else {
        wash_power_St_4_Water_fill = 15;
        v_131 = wash_power_St_4_Water_fill;
        wash_state_St_4_Water_fill = 1;
        v_137 = wash_state_St_4_Water_fill;
        nr_St_4_Water_fill = false;
        v_161 = nr_St_4_Water_fill;
        ns_St_4_Water_fill_1 = false;
        v_148 = ns_St_4_Water_fill_1;
        ns_St_4_Water_fill_2 = false;
        v_149 = ns_St_4_Water_fill_2;
        ns_St_4_Water_fill_3 = false;
        v_150 = ns_St_4_Water_fill_3;
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
      v_132 = v_131;
      v_138 = v_137;
      v_154 = v_148;
      v_155 = v_149;
      v_156 = v_150;
      v_162 = v_161;
    };
    _out->wash_power = v_132;
    _out->wash_state = v_138;
    ns_1 = v_154;
    ns_2 = v_155;
    ns_3 = v_156;
    nr = v_162;
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
  self->v_163 = ns_1;
  self->v_164 = ns_2;
  self->v_165 = ns_3;;
}

void System__oven_reset(System__oven_mem* self) {
  self->pnr = false;
  self->v_220 = true;
  self->v_221 = false;
  self->v_222 = false;
}

void System__oven_step(int start, int finish, int temp_ok, int cold,
                       int c_oven, System__oven_out* _out,
                       System__oven_mem* self) {
  
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
  int v_242;
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
  ck_1 = self->v_220;
  ck_2 = self->v_221;
  ck_3 = self->v_222;
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
        v_238 = r_St_5_Heat;
        v_223 = s_St_5_Heat_1;
        v_224 = s_St_5_Heat_2;
        v_225 = s_St_5_Heat_3;
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
        v_238 = r_St_5_Maintain;
        if (v_33) {
          s_St_5_Maintain_1 = false;
        } else {
          s_St_5_Maintain_1 = v_34_1;
        };
        v_223 = s_St_5_Maintain_1;
        if (v_33) {
          s_St_5_Maintain_2 = false;
        } else {
          s_St_5_Maintain_2 = v_34_2;
        };
        v_224 = s_St_5_Maintain_2;
        if (v_33) {
          s_St_5_Maintain_3 = true;
        } else {
          s_St_5_Maintain_3 = v_34_3;
        };
        v_225 = s_St_5_Maintain_3;
      };
      v_232 = v_223;
      v_233 = v_224;
      v_234 = v_225;
      v_240 = v_238;
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
        v_239 = true;
        v_226 = true;
        v_227 = true;
        v_228 = true;
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
        v_239 = r_St_5_Off;
        if (v_38) {
          s_St_5_Off_1 = true;
        } else {
          s_St_5_Off_1 = v_41_1;
        };
        v_226 = s_St_5_Off_1;
        if (v_38) {
          s_St_5_Off_2 = true;
        } else {
          s_St_5_Off_2 = v_41_2;
        };
        v_227 = s_St_5_Off_2;
        if (v_38) {
          s_St_5_Off_3 = true;
        } else {
          s_St_5_Off_3 = v_41_3;
        };
        v_228 = s_St_5_Off_3;
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
      v_232 = v_226;
      v_233 = v_227;
      v_234 = v_228;
      v_240 = v_239;
    };
    s_1 = v_232;
    s_2 = v_233;
    s_3 = v_234;
    r = v_240;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      v_235 = true;
      v_236 = true;
      v_237 = true;
      v_242 = true;
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
        v_241 = r_St_5_Reheat;
        v_229 = s_St_5_Reheat_1;
        v_230 = s_St_5_Reheat_2;
        v_231 = s_St_5_Reheat_3;
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
        v_241 = r_St_5_Standby;
        if (c_oven) {
          s_St_5_Standby_1 = true;
        } else {
          s_St_5_Standby_1 = false;
        };
        v_229 = s_St_5_Standby_1;
        if (c_oven) {
          s_St_5_Standby_2 = true;
        } else {
          s_St_5_Standby_2 = false;
        };
        v_230 = s_St_5_Standby_2;
        if (c_oven) {
          s_St_5_Standby_3 = true;
        } else {
          s_St_5_Standby_3 = false;
        };
        v_231 = s_St_5_Standby_3;
      };
      v_235 = v_229;
      v_236 = v_230;
      v_237 = v_231;
      v_242 = v_241;
    };
    s_1 = v_235;
    s_2 = v_236;
    s_3 = v_237;
    r = v_242;
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
        v_190 = oven_power_St_5_Heat;
        v_195 = oven_state_St_5_Heat;
        v_215 = nr_St_5_Heat;
        v_200 = ns_St_5_Heat_1;
        v_201 = ns_St_5_Heat_2;
        v_202 = ns_St_5_Heat_3;
      } else {
        oven_power_St_5_Maintain = 300;
        v_190 = oven_power_St_5_Maintain;
        oven_state_St_5_Maintain = 2;
        v_195 = oven_state_St_5_Maintain;
        nr_St_5_Maintain = false;
        v_215 = nr_St_5_Maintain;
        ns_St_5_Maintain_1 = true;
        v_200 = ns_St_5_Maintain_1;
        ns_St_5_Maintain_2 = true;
        v_201 = ns_St_5_Maintain_2;
        ns_St_5_Maintain_3 = false;
        v_202 = ns_St_5_Maintain_3;
      };
      v_192 = v_190;
      v_197 = v_195;
      v_209 = v_200;
      v_210 = v_201;
      v_211 = v_202;
      v_217 = v_215;
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
        v_191 = 0;
        v_196 = 0;
        v_216 = true;
        v_203 = true;
        v_204 = true;
        v_205 = true;
      } else {
        oven_power_St_5_Off = 0;
        v_191 = oven_power_St_5_Off;
        oven_state_St_5_Off = 0;
        v_196 = oven_state_St_5_Off;
        nr_St_5_Off = false;
        v_216 = nr_St_5_Off;
        ns_St_5_Off_1 = true;
        v_203 = ns_St_5_Off_1;
        ns_St_5_Off_2 = false;
        v_204 = ns_St_5_Off_2;
        ns_St_5_Off_3 = false;
        v_205 = ns_St_5_Off_3;
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
      v_192 = v_191;
      v_197 = v_196;
      v_209 = v_203;
      v_210 = v_204;
      v_211 = v_205;
      v_217 = v_216;
    };
    _out->oven_power = v_192;
    _out->oven_state = v_197;
    ns_1 = v_209;
    ns_2 = v_210;
    ns_3 = v_211;
    nr = v_217;
  } else {
    ck_6_2_0 = ck_6_2;
    if (ck_6_2_0) {
      ck_6_3_0_1 = ck_6_3;
      v_194 = 0;
      v_199 = 0;
      v_212 = true;
      v_213 = true;
      v_214 = true;
      v_219 = true;
    } else {
      ck_6_3_0_0 = ck_6_3;
      if (ck_6_3_0_0) {
        oven_power_St_5_Reheat = 1000;
        oven_state_St_5_Reheat = 3;
        nr_St_5_Reheat = false;
        ns_St_5_Reheat_1 = false;
        ns_St_5_Reheat_2 = false;
        ns_St_5_Reheat_3 = true;
        v_193 = oven_power_St_5_Reheat;
        v_198 = oven_state_St_5_Reheat;
        v_218 = nr_St_5_Reheat;
        v_206 = ns_St_5_Reheat_1;
        v_207 = ns_St_5_Reheat_2;
        v_208 = ns_St_5_Reheat_3;
      } else {
        oven_power_St_5_Standby = 0;
        v_193 = oven_power_St_5_Standby;
        oven_state_St_5_Standby = 4;
        v_198 = oven_state_St_5_Standby;
        nr_St_5_Standby = false;
        v_218 = nr_St_5_Standby;
        ns_St_5_Standby_1 = false;
        v_206 = ns_St_5_Standby_1;
        ns_St_5_Standby_2 = false;
        v_207 = ns_St_5_Standby_2;
        ns_St_5_Standby_3 = false;
        v_208 = ns_St_5_Standby_3;
      };
      v_194 = v_193;
      v_199 = v_198;
      v_212 = v_206;
      v_213 = v_207;
      v_214 = v_208;
      v_219 = v_218;
    };
    _out->oven_power = v_194;
    _out->oven_state = v_199;
    ns_1 = v_212;
    ns_2 = v_213;
    ns_3 = v_214;
    nr = v_219;
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
  self->v_220 = ns_1;
  self->v_221 = ns_2;
  self->v_222 = ns_3;;
}

void System__management_policy_reset(System__management_policy_mem* self) {
  self->pnr = false;
  self->v_253 = false;
  self->v_254 = false;
}

void System__management_policy_step(int eco_input, int comfort_input,
                                    System__management_policy_out* _out,
                                    System__management_policy_mem* self) {
  
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
  int v_260;
  int v_259;
  int v_258;
  int v_257;
  int v_256;
  int v_255;
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
  ck_1 = self->v_253;
  ck_2 = self->v_254;
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
      v_259 = r_St_6_Comfort;
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
      v_255 = s_St_6_Comfort_1;
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
      v_256 = s_St_6_Comfort_2;
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
      v_259 = r_St_6_Eco;
      v_255 = s_St_6_Eco_1;
      v_256 = s_St_6_Eco_2;
    };
    s_1 = v_255;
    s_2 = v_256;
    r = v_259;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_260 = true;
      v_257 = true;
      v_258 = true;
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
      v_260 = r_St_6_Minimal_safety;
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
      v_257 = s_St_6_Minimal_safety_1;
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
      v_258 = s_St_6_Minimal_safety_2;
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
    s_1 = v_257;
    s_2 = v_258;
    r = v_260;
  };
  ck_7_1 = s_1;
  ck_7_2 = s_2;
  if (ck_7_1) {
    ck_7_2_1 = ck_7_2;
    if (ck_7_2_1) {
      mode_St_6_Comfort_1 = true;
      v_243 = mode_St_6_Comfort_1;
      mode_St_6_Comfort_2 = true;
      v_244 = mode_St_6_Comfort_2;
      nr_St_6_Comfort = false;
      v_251 = nr_St_6_Comfort;
      ns_St_6_Comfort_1 = true;
      v_247 = ns_St_6_Comfort_1;
      ns_St_6_Comfort_2 = true;
      v_248 = ns_St_6_Comfort_2;
    } else {
      mode_St_6_Eco_1 = true;
      mode_St_6_Eco_2 = false;
      nr_St_6_Eco = false;
      ns_St_6_Eco_1 = true;
      ns_St_6_Eco_2 = false;
      v_243 = mode_St_6_Eco_1;
      v_244 = mode_St_6_Eco_2;
      v_251 = nr_St_6_Eco;
      v_247 = ns_St_6_Eco_1;
      v_248 = ns_St_6_Eco_2;
    };
    _out->mode_1 = v_243;
    _out->mode_2 = v_244;
    ns_1 = v_247;
    ns_2 = v_248;
    nr = v_251;
  } else {
    ck_7_2_0 = ck_7_2;
    if (ck_7_2_0) {
      v_245 = true;
      v_246 = true;
      v_252 = true;
      v_249 = true;
      v_250 = true;
    } else {
      mode_St_6_Minimal_safety_1 = false;
      v_245 = mode_St_6_Minimal_safety_1;
      mode_St_6_Minimal_safety_2 = false;
      v_246 = mode_St_6_Minimal_safety_2;
      nr_St_6_Minimal_safety = false;
      v_252 = nr_St_6_Minimal_safety;
      ns_St_6_Minimal_safety_1 = false;
      v_249 = ns_St_6_Minimal_safety_1;
      ns_St_6_Minimal_safety_2 = false;
      v_250 = ns_St_6_Minimal_safety_2;
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
    _out->mode_1 = v_245;
    _out->mode_2 = v_246;
    ns_1 = v_249;
    ns_2 = v_250;
    nr = v_252;
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
  self->v_253 = ns_1;
  self->v_254 = ns_2;;
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
  int v_49;
  int v_48;
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
    v_49 = (push&&c_porta);
    if (v_49) {
      r_St_7_Closed = true;
      s_St_7_Closed_1 = false;
    } else {
      r_St_7_Closed = self->pnr;
      s_St_7_Closed_1 = true;
    };
    r = r_St_7_Closed;
    s_1 = s_St_7_Closed_1;
  } else {
    v = !(c_porta);
    v_48 = (push||v);
    if (v_48) {
      r_St_7_Open = true;
    } else {
      r_St_7_Open = self->pnr;
    };
    r = r_St_7_Open;
    if (v_48) {
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
  int v;
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
    v = !(arrived);
    if (v) {
      r_St_10_Preent = true;
    } else {
      r_St_10_Preent = self->pnr;
    };
    r = r_St_10_Preent;
    if (v) {
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
  self->v_269 = true;
  self->v_270 = false;
}

void System__luzes_step(int c1, int c2, System__luzes_out* _out,
                        System__luzes_mem* self) {
  
  int v_268;
  int v_267;
  int v_266;
  int v_265;
  int v_264;
  int v_263;
  int v_262;
  int v_261;
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
  int v_56_2_0;
  int v_56_2_1;
  int v_57;
  int v_56_2;
  int v_56_1;
  int v_54_2_0;
  int v_54_2_1;
  int v_55;
  int v_54_2;
  int v_54_1;
  int v_53;
  int v_51_2_0;
  int v_51_2_1;
  int v_52;
  int v_51_2;
  int v_51_1;
  int v_50;
  int v;
  int v_276;
  int v_275;
  int v_274;
  int v_273;
  int v_272;
  int v_271;
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
  ck_1 = self->v_269;
  ck_2 = self->v_270;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_50 = !(c2);
      if (v_50) {
        v_52 = true;
        v_51_1 = true;
        v_51_2 = false;
      } else {
        v_52 = self->pnr;
        v_51_1 = true;
        v_51_2 = true;
      };
      v = !(c1);
      if (v) {
        r_St_13_All = true;
      } else {
        r_St_13_All = v_52;
      };
      v_275 = r_St_13_All;
      if (v) {
        s_St_13_All_1 = false;
      } else {
        s_St_13_All_1 = v_51_1;
      };
      v_271 = s_St_13_All_1;
      if (v) {
        s_St_13_All_2 = false;
      } else {
        s_St_13_All_2 = v_51_2;
      };
      v_272 = s_St_13_All_2;
    } else {
      if (c2) {
        v_57 = true;
      } else {
        v_57 = self->pnr;
      };
      if (c1) {
        r_St_13_None = true;
      } else {
        r_St_13_None = v_57;
      };
      if (c2) {
        v_56_1 = true;
      } else {
        v_56_1 = true;
      };
      if (c1) {
        s_St_13_None_1 = false;
      } else {
        s_St_13_None_1 = v_56_1;
      };
      if (c2) {
        v_56_2 = true;
      } else {
        v_56_2 = false;
      };
      if (c1) {
        s_St_13_None_2 = false;
      } else {
        s_St_13_None_2 = v_56_2;
      };
      v_275 = r_St_13_None;
      v_271 = s_St_13_None_1;
      v_272 = s_St_13_None_2;
      if (v_56_1) {
        v_56_2_1 = v_56_2;
      } else {
        v_56_2_0 = v_56_2;
      };
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
      if (c2) {
        v_55 = true;
        v_54_1 = true;
        v_54_2 = true;
      } else {
        v_55 = self->pnr;
        v_54_1 = false;
        v_54_2 = false;
      };
      v_53 = !(c1);
      if (v_53) {
        r_St_13_Some = true;
      } else {
        r_St_13_Some = v_55;
      };
      v_276 = r_St_13_Some;
      if (v_53) {
        s_St_13_Some_1 = true;
      } else {
        s_St_13_Some_1 = v_54_1;
      };
      v_273 = s_St_13_Some_1;
      if (v_53) {
        s_St_13_Some_2 = false;
      } else {
        s_St_13_Some_2 = v_54_2;
      };
      v_274 = s_St_13_Some_2;
      if (v_54_1) {
        v_54_2_1 = v_54_2;
      } else {
        v_54_2_0 = v_54_2;
      };
      if (s_St_13_Some_1) {
        s_St_13_Some_2_1 = s_St_13_Some_2;
      } else {
        s_St_13_Some_2_0 = s_St_13_Some_2;
      };
    };
    s_1 = v_273;
    s_2 = v_274;
    r = v_276;
  };
  ck_14_1 = s_1;
  ck_14_2 = s_2;
  if (ck_14_1) {
    ck_14_2_1 = ck_14_2;
    if (ck_14_2_1) {
      l_state_St_13_All = 2;
      v_261 = l_state_St_13_All;
      nr_St_13_All = false;
      v_267 = nr_St_13_All;
      ns_St_13_All_1 = true;
      v_263 = ns_St_13_All_1;
      ns_St_13_All_2 = true;
      v_264 = ns_St_13_All_2;
    } else {
      l_state_St_13_None = 0;
      nr_St_13_None = false;
      ns_St_13_None_1 = true;
      ns_St_13_None_2 = false;
      v_261 = l_state_St_13_None;
      v_267 = nr_St_13_None;
      v_263 = ns_St_13_None_1;
      v_264 = ns_St_13_None_2;
    };
    _out->l_state = v_261;
    ns_1 = v_263;
    ns_2 = v_264;
    nr = v_267;
  } else {
    ck_14_2_0 = ck_14_2;
    if (ck_14_2_0) {
      v_262 = 0;
      v_268 = true;
      v_265 = true;
      v_266 = true;
    } else {
      l_state_St_13_Some = 1;
      v_262 = l_state_St_13_Some;
      nr_St_13_Some = false;
      v_268 = nr_St_13_Some;
      ns_St_13_Some_1 = false;
      v_265 = ns_St_13_Some_1;
      ns_St_13_Some_2 = false;
      v_266 = ns_St_13_Some_2;
      if (ns_St_13_Some_1) {
        ns_St_13_Some_2_1 = ns_St_13_Some_2;
      } else {
        ns_St_13_Some_2_0 = ns_St_13_Some_2;
      };
    };
    _out->l_state = v_262;
    ns_1 = v_265;
    ns_2 = v_266;
    nr = v_268;
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
      if (v_51_1) {
        v_51_2_1 = v_51_2;
      } else {
        v_51_2_0 = v_51_2;
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
  self->v_269 = ns_1;
  self->v_270 = ns_2;;
}

void System__persianas_reset(System__persianas_mem* self) {
  self->pnr = false;
  self->v_285 = true;
  self->v_286 = true;
}

void System__persianas_step(int c1, int c2, System__persianas_out* _out,
                            System__persianas_mem* self) {
  
  int v_284;
  int v_283;
  int v_282;
  int v_281;
  int v_280;
  int v_279;
  int v_278;
  int v_277;
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
  int v_64_2_0;
  int v_64_2_1;
  int v_65;
  int v_64_2;
  int v_64_1;
  int v_62_2_0;
  int v_62_2_1;
  int v_63;
  int v_62_2;
  int v_62_1;
  int v_61;
  int v_59_2_0;
  int v_59_2_1;
  int v_60;
  int v_59_2;
  int v_59_1;
  int v_58;
  int v;
  int v_292;
  int v_291;
  int v_290;
  int v_289;
  int v_288;
  int v_287;
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
  ck_1 = self->v_285;
  ck_2 = self->v_286;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      if (c2) {
        v_65 = true;
      } else {
        v_65 = self->pnr;
      };
      if (c1) {
        r_St_14_Down = true;
      } else {
        r_St_14_Down = v_65;
      };
      if (c2) {
        v_64_1 = false;
      } else {
        v_64_1 = true;
      };
      if (c1) {
        s_St_14_Down_1 = true;
      } else {
        s_St_14_Down_1 = v_64_1;
      };
      if (c2) {
        v_64_2 = false;
      } else {
        v_64_2 = true;
      };
      if (c1) {
        s_St_14_Down_2 = false;
      } else {
        s_St_14_Down_2 = v_64_2;
      };
      v_291 = r_St_14_Down;
      v_287 = s_St_14_Down_1;
      v_288 = s_St_14_Down_2;
      if (v_64_1) {
        v_64_2_1 = v_64_2;
      } else {
        v_64_2_0 = v_64_2;
      };
      if (s_St_14_Down_1) {
        s_St_14_Down_2_1 = s_St_14_Down_2;
      } else {
        s_St_14_Down_2_0 = s_St_14_Down_2;
      };
    } else {
      if (c2) {
        v_63 = true;
        v_62_1 = false;
        v_62_2 = false;
      } else {
        v_63 = self->pnr;
        v_62_1 = true;
        v_62_2 = false;
      };
      v_61 = !(c1);
      if (v_61) {
        r_St_14_Mid = true;
      } else {
        r_St_14_Mid = v_63;
      };
      v_291 = r_St_14_Mid;
      if (v_61) {
        s_St_14_Mid_1 = true;
      } else {
        s_St_14_Mid_1 = v_62_1;
      };
      v_287 = s_St_14_Mid_1;
      if (v_61) {
        s_St_14_Mid_2 = true;
      } else {
        s_St_14_Mid_2 = v_62_2;
      };
      v_288 = s_St_14_Mid_2;
      if (v_62_1) {
        v_62_2_1 = v_62_2;
      } else {
        v_62_2_0 = v_62_2;
      };
      if (s_St_14_Mid_1) {
        s_St_14_Mid_2_1 = s_St_14_Mid_2;
      } else {
        s_St_14_Mid_2_0 = s_St_14_Mid_2;
      };
    };
    s_1 = v_287;
    s_2 = v_288;
    r = v_291;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_292 = true;
      v_289 = true;
      v_290 = true;
    } else {
      v_58 = !(c2);
      if (v_58) {
        v_60 = true;
        v_59_1 = true;
        v_59_2 = true;
      } else {
        v_60 = self->pnr;
        v_59_1 = false;
        v_59_2 = false;
      };
      v = !(c1);
      if (v) {
        r_St_14_Up = true;
      } else {
        r_St_14_Up = v_60;
      };
      v_292 = r_St_14_Up;
      if (v) {
        s_St_14_Up_1 = true;
      } else {
        s_St_14_Up_1 = v_59_1;
      };
      v_289 = s_St_14_Up_1;
      if (v) {
        s_St_14_Up_2 = false;
      } else {
        s_St_14_Up_2 = v_59_2;
      };
      v_290 = s_St_14_Up_2;
    };
    s_1 = v_289;
    s_2 = v_290;
    r = v_292;
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
      v_277 = p_state_St_14_Down;
      v_283 = nr_St_14_Down;
      v_279 = ns_St_14_Down_1;
      v_280 = ns_St_14_Down_2;
      if (ns_St_14_Down_1) {
        ns_St_14_Down_2_1 = ns_St_14_Down_2;
      } else {
        ns_St_14_Down_2_0 = ns_St_14_Down_2;
      };
    } else {
      p_state_St_14_Mid = 1;
      v_277 = p_state_St_14_Mid;
      nr_St_14_Mid = false;
      v_283 = nr_St_14_Mid;
      ns_St_14_Mid_1 = true;
      v_279 = ns_St_14_Mid_1;
      ns_St_14_Mid_2 = false;
      v_280 = ns_St_14_Mid_2;
      if (ns_St_14_Mid_1) {
        ns_St_14_Mid_2_1 = ns_St_14_Mid_2;
      } else {
        ns_St_14_Mid_2_0 = ns_St_14_Mid_2;
      };
    };
    _out->p_state = v_277;
    ns_1 = v_279;
    ns_2 = v_280;
    nr = v_283;
  } else {
    ck_15_2_0 = ck_15_2;
    if (ck_15_2_0) {
      v_278 = 0;
      v_284 = true;
      v_281 = true;
      v_282 = true;
    } else {
      p_state_St_14_Up = 2;
      v_278 = p_state_St_14_Up;
      nr_St_14_Up = false;
      v_284 = nr_St_14_Up;
      ns_St_14_Up_1 = false;
      v_281 = ns_St_14_Up_1;
      ns_St_14_Up_2 = false;
      v_282 = ns_St_14_Up_2;
    };
    _out->p_state = v_278;
    ns_1 = v_281;
    ns_2 = v_282;
    nr = v_284;
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
      if (v_59_1) {
        v_59_2_1 = v_59_2;
      } else {
        v_59_2_0 = v_59_2;
      };
      if (s_St_14_Up_1) {
        s_St_14_Up_2_1 = s_St_14_Up_2;
      } else {
        s_St_14_Up_2_0 = s_St_14_Up_2;
      };
    };
  };
  self->pnr = nr;
  self->v_285 = ns_1;
  self->v_286 = ns_2;;
}

void System__ar_condicionado_reset(System__ar_condicionado_mem* self) {
  self->pnr = false;
  self->v_301 = false;
  self->v_302 = false;
}

void System__ar_condicionado_step(int c1, int c2,
                                  System__ar_condicionado_out* _out,
                                  System__ar_condicionado_mem* self) {
  
  int v_300;
  int v_299;
  int v_298;
  int v_297;
  int v_296;
  int v_295;
  int v_294;
  int v_293;
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
  int v_72_2_0;
  int v_72_2_1;
  int v_73;
  int v_72_2;
  int v_72_1;
  int v_70_2_0;
  int v_70_2_1;
  int v_71;
  int v_70_2;
  int v_70_1;
  int v_69;
  int v_67_2_0;
  int v_67_2_1;
  int v_68;
  int v_67_2;
  int v_67_1;
  int v_66;
  int v;
  int v_308;
  int v_307;
  int v_306;
  int v_305;
  int v_304;
  int v_303;
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
  ck_1 = self->v_301;
  ck_2 = self->v_302;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_66 = !(c2);
      if (v_66) {
        v_68 = true;
        v_67_1 = false;
        v_67_2 = false;
      } else {
        v_68 = self->pnr;
        v_67_1 = true;
        v_67_2 = true;
      };
      v = !(c1);
      if (v) {
        r_St_15_Max = true;
      } else {
        r_St_15_Max = v_68;
      };
      v_307 = r_St_15_Max;
      if (v) {
        s_St_15_Max_1 = true;
      } else {
        s_St_15_Max_1 = v_67_1;
      };
      v_303 = s_St_15_Max_1;
      if (v) {
        s_St_15_Max_2 = false;
      } else {
        s_St_15_Max_2 = v_67_2;
      };
      v_304 = s_St_15_Max_2;
    } else {
      if (c2) {
        v_71 = true;
        v_70_1 = true;
        v_70_2 = true;
      } else {
        v_71 = self->pnr;
        v_70_1 = true;
        v_70_2 = false;
      };
      v_69 = !(c1);
      if (v_69) {
        r_St_15_Min = true;
        s_St_15_Min_1 = false;
        s_St_15_Min_2 = false;
      } else {
        r_St_15_Min = v_71;
        s_St_15_Min_1 = v_70_1;
        s_St_15_Min_2 = v_70_2;
      };
      v_307 = r_St_15_Min;
      v_303 = s_St_15_Min_1;
      v_304 = s_St_15_Min_2;
    };
    s_1 = v_303;
    s_2 = v_304;
    r = v_307;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_308 = true;
      v_305 = true;
      v_306 = true;
    } else {
      if (c2) {
        v_73 = true;
      } else {
        v_73 = self->pnr;
      };
      if (c1) {
        r_St_15_Off = true;
      } else {
        r_St_15_Off = v_73;
      };
      v_308 = r_St_15_Off;
      if (c2) {
        v_72_1 = true;
      } else {
        v_72_1 = false;
      };
      if (c1) {
        s_St_15_Off_1 = true;
      } else {
        s_St_15_Off_1 = v_72_1;
      };
      v_305 = s_St_15_Off_1;
      if (c2) {
        v_72_2 = true;
      } else {
        v_72_2 = false;
      };
      if (c1) {
        s_St_15_Off_2 = false;
      } else {
        s_St_15_Off_2 = v_72_2;
      };
      v_306 = s_St_15_Off_2;
      if (v_72_1) {
        v_72_2_1 = v_72_2;
      } else {
        v_72_2_0 = v_72_2;
      };
      if (s_St_15_Off_1) {
        s_St_15_Off_2_1 = s_St_15_Off_2;
      } else {
        s_St_15_Off_2_0 = s_St_15_Off_2;
      };
    };
    s_1 = v_305;
    s_2 = v_306;
    r = v_308;
  };
  ck_16_1 = s_1;
  ck_16_2 = s_2;
  if (ck_16_1) {
    ck_16_2_1 = ck_16_2;
    if (ck_16_2_1) {
      ar_state_St_15_Max = 2;
      v_293 = ar_state_St_15_Max;
      nr_St_15_Max = false;
      v_299 = nr_St_15_Max;
      ns_St_15_Max_1 = true;
      v_295 = ns_St_15_Max_1;
      ns_St_15_Max_2 = true;
      v_296 = ns_St_15_Max_2;
    } else {
      ar_state_St_15_Min = 1;
      nr_St_15_Min = false;
      ns_St_15_Min_1 = true;
      ns_St_15_Min_2 = false;
      v_293 = ar_state_St_15_Min;
      v_299 = nr_St_15_Min;
      v_295 = ns_St_15_Min_1;
      v_296 = ns_St_15_Min_2;
    };
    _out->ar_state = v_293;
    ns_1 = v_295;
    ns_2 = v_296;
    nr = v_299;
  } else {
    ck_16_2_0 = ck_16_2;
    if (ck_16_2_0) {
      v_294 = 0;
      v_300 = true;
      v_297 = true;
      v_298 = true;
    } else {
      ar_state_St_15_Off = 0;
      v_294 = ar_state_St_15_Off;
      nr_St_15_Off = false;
      v_300 = nr_St_15_Off;
      ns_St_15_Off_1 = false;
      v_297 = ns_St_15_Off_1;
      ns_St_15_Off_2 = false;
      v_298 = ns_St_15_Off_2;
      if (ns_St_15_Off_1) {
        ns_St_15_Off_2_1 = ns_St_15_Off_2;
      } else {
        ns_St_15_Off_2_0 = ns_St_15_Off_2;
      };
    };
    _out->ar_state = v_294;
    ns_1 = v_297;
    ns_2 = v_298;
    nr = v_300;
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
      if (v_67_1) {
        v_67_2_1 = v_67_2;
      } else {
        v_67_2_0 = v_67_2;
      };
      if (s_St_15_Max_1) {
        s_St_15_Max_2_1 = s_St_15_Max_2;
      } else {
        s_St_15_Max_2_0 = s_St_15_Max_2;
      };
    } else {
      if (v_70_1) {
        v_70_2_1 = v_70_2;
      } else {
        v_70_2_0 = v_70_2;
      };
      if (s_St_15_Min_1) {
        s_St_15_Min_2_1 = s_St_15_Min_2;
      } else {
        s_St_15_Min_2_0 = s_St_15_Min_2;
      };
    };
  };
  self->pnr = nr;
  self->v_301 = ns_1;
  self->v_302 = ns_2;;
}

void System__controller_reset(System__controller_mem* self) {
  self->pnr = false;
  self->v_317 = false;
  self->v_318 = false;
  self->pnr_1 = false;
  self->v_333 = true;
  self->v_334 = true;
  self->pnr_2 = false;
  self->v_349 = true;
  self->v_350 = false;
  self->pnr_3 = false;
  self->ck_26_1 = true;
  self->pnr_4 = false;
  self->ck_24_1 = true;
  self->pnr_5 = false;
  self->ck_22_1 = true;
  self->pnr_6 = false;
  self->ck_20_1 = true;
  self->pnr_7 = false;
  self->ck_18_1 = true;
  self->pnr_8 = false;
  self->ck_1 = true;
}

void System__controller_step(int abre_porta, int p_arrived,
                             System__controller_out* _out,
                             System__controller_mem* self) {
  Controller_controller__controller_controller_out Controller_controller__controller_controller_out_st;
  
  int v_316;
  int v_315;
  int v_314;
  int v_313;
  int v_312;
  int v_311;
  int v_310;
  int v_309;
  int ns_St_16_Max_2_0;
  int ns_St_16_Max_2_1;
  int ns_St_16_Min_2_0;
  int ns_St_16_Min_2_1;
  int ns_St_16_Off_2_0;
  int ns_St_16_Off_2_1;
  int ck_33_2_0;
  int ck_33_2_1;
  int nr_St_16_Max;
  int ns_St_16_Max_2;
  int ns_St_16_Max_1;
  int ar_state_1_St_16_Max;
  int nr_St_16_Min;
  int ns_St_16_Min_2;
  int ns_St_16_Min_1;
  int ar_state_1_St_16_Min;
  int nr_St_16_Off;
  int ns_St_16_Off_2;
  int ns_St_16_Off_1;
  int ar_state_1_St_16_Off;
  int ck_33_2;
  int ck_33_1;
  int v_107_2_0;
  int v_107_2_1;
  int v_108;
  int v_107_2;
  int v_107_1;
  int v_105_2_0;
  int v_105_2_1;
  int v_106;
  int v_105_2;
  int v_105_1;
  int v_104;
  int v_102_2_0;
  int v_102_2_1;
  int v_103;
  int v_102_2;
  int v_102_1;
  int v_101;
  int v_100;
  int v_324;
  int v_323;
  int v_322;
  int v_321;
  int v_320;
  int v_319;
  int s_St_16_Max_2_0;
  int s_St_16_Max_2_1;
  int s_St_16_Min_2_0;
  int s_St_16_Min_2_1;
  int s_St_16_Off_2_0;
  int s_St_16_Off_2_1;
  int ck_32_2_0;
  int ck_32_2_1;
  int r_St_16_Max;
  int s_St_16_Max_2;
  int s_St_16_Max_1;
  int r_St_16_Min;
  int s_St_16_Min_2;
  int s_St_16_Min_1;
  int r_St_16_Off;
  int s_St_16_Off_2;
  int s_St_16_Off_1;
  int ck_32_2;
  int ck_32_1;
  int v_332;
  int v_331;
  int v_330;
  int v_329;
  int v_328;
  int v_327;
  int v_326;
  int v_325;
  int ns_1_St_17_Up_2_0;
  int ns_1_St_17_Up_2_1;
  int ns_1_St_17_Mid_2_0;
  int ns_1_St_17_Mid_2_1;
  int ns_1_St_17_Down_2_0;
  int ns_1_St_17_Down_2_1;
  int ck_31_2_0;
  int ck_31_2_1;
  int nr_1_St_17_Up;
  int ns_1_St_17_Up_2;
  int ns_1_St_17_Up_1;
  int p_state_1_St_17_Up;
  int nr_1_St_17_Mid;
  int ns_1_St_17_Mid_2;
  int ns_1_St_17_Mid_1;
  int p_state_1_St_17_Mid;
  int nr_1_St_17_Down;
  int ns_1_St_17_Down_2;
  int ns_1_St_17_Down_1;
  int p_state_1_St_17_Down;
  int ck_31_2;
  int ck_31_1;
  int v_98_2_0;
  int v_98_2_1;
  int v_99;
  int v_98_2;
  int v_98_1;
  int v_96_2_0;
  int v_96_2_1;
  int v_97;
  int v_96_2;
  int v_96_1;
  int v_95;
  int v_93_2_0;
  int v_93_2_1;
  int v_94;
  int v_93_2;
  int v_93_1;
  int v_92;
  int v_91;
  int v_340;
  int v_339;
  int v_338;
  int v_337;
  int v_336;
  int v_335;
  int s_1_St_17_Up_2_0;
  int s_1_St_17_Up_2_1;
  int s_1_St_17_Mid_2_0;
  int s_1_St_17_Mid_2_1;
  int s_1_St_17_Down_2_0;
  int s_1_St_17_Down_2_1;
  int ck_30_2_0;
  int ck_30_2_1;
  int r_1_St_17_Up;
  int s_1_St_17_Up_2;
  int s_1_St_17_Up_1;
  int r_1_St_17_Mid;
  int s_1_St_17_Mid_2;
  int s_1_St_17_Mid_1;
  int r_1_St_17_Down;
  int s_1_St_17_Down_2;
  int s_1_St_17_Down_1;
  int ck_30_2;
  int ck_30_1;
  int v_348;
  int v_347;
  int v_346;
  int v_345;
  int v_344;
  int v_343;
  int v_342;
  int v_341;
  int ns_2_St_18_All_2_0;
  int ns_2_St_18_All_2_1;
  int ns_2_St_18_Some_2_0;
  int ns_2_St_18_Some_2_1;
  int ns_2_St_18_None_2_0;
  int ns_2_St_18_None_2_1;
  int ck_29_2_0;
  int ck_29_2_1;
  int nr_2_St_18_All;
  int ns_2_St_18_All_2;
  int ns_2_St_18_All_1;
  int l_state_1_St_18_All;
  int nr_2_St_18_Some;
  int ns_2_St_18_Some_2;
  int ns_2_St_18_Some_1;
  int l_state_1_St_18_Some;
  int nr_2_St_18_None;
  int ns_2_St_18_None_2;
  int ns_2_St_18_None_1;
  int l_state_1_St_18_None;
  int ck_29_2;
  int ck_29_1;
  int v_89_2_0;
  int v_89_2_1;
  int v_90;
  int v_89_2;
  int v_89_1;
  int v_87_2_0;
  int v_87_2_1;
  int v_88;
  int v_87_2;
  int v_87_1;
  int v_86;
  int v_84_2_0;
  int v_84_2_1;
  int v_85;
  int v_84_2;
  int v_84_1;
  int v_83;
  int v_82;
  int v_356;
  int v_355;
  int v_354;
  int v_353;
  int v_352;
  int v_351;
  int s_2_St_18_All_2_0;
  int s_2_St_18_All_2_1;
  int s_2_St_18_Some_2_0;
  int s_2_St_18_Some_2_1;
  int s_2_St_18_None_2_0;
  int s_2_St_18_None_2_1;
  int ck_28_2_0;
  int ck_28_2_1;
  int r_2_St_18_All;
  int s_2_St_18_All_2;
  int s_2_St_18_All_1;
  int r_2_St_18_Some;
  int s_2_St_18_Some_2;
  int s_2_St_18_Some_1;
  int r_2_St_18_None;
  int s_2_St_18_None_2;
  int s_2_St_18_None_1;
  int ck_28_2;
  int ck_28_1;
  int nr_3_St_19_Open;
  int ns_3_St_19_Open_1;
  int w_open_1_St_19_Open;
  int nr_3_St_19_Closed;
  int ns_3_St_19_Closed_1;
  int w_open_1_St_19_Closed;
  int ck_27_1;
  int v_81;
  int r_3_St_19_Open;
  int s_3_St_19_Open_1;
  int r_3_St_19_Closed;
  int s_3_St_19_Closed_1;
  int nr_4_St_20_On;
  int ns_4_St_20_On_1;
  int pc_on_1_St_20_On;
  int nr_4_St_20_Off;
  int ns_4_St_20_Off_1;
  int pc_on_1_St_20_Off;
  int ck_25_1;
  int v_80;
  int r_4_St_20_On;
  int s_4_St_20_On_1;
  int r_4_St_20_Off;
  int s_4_St_20_Off_1;
  int nr_5_St_21_Preent;
  int ns_5_St_21_Preent_1;
  int presence_1_St_21_Preent;
  int nr_5_St_21_Not_Present;
  int ns_5_St_21_Not_Present_1;
  int presence_1_St_21_Not_Present;
  int ck_23_1;
  int v_79;
  int r_5_St_21_Preent;
  int s_5_St_21_Preent_1;
  int r_5_St_21_Not_Present;
  int s_5_St_21_Not_Present_1;
  int nr_6_St_22_Open;
  int ns_6_St_22_Open_1;
  int arm_open_1_St_22_Open;
  int nr_6_St_22_Locked;
  int ns_6_St_22_Locked_1;
  int arm_open_1_St_22_Locked;
  int ck_21_1;
  int v_78;
  int r_6_St_22_Open;
  int s_6_St_22_Open_1;
  int r_6_St_22_Locked;
  int s_6_St_22_Locked_1;
  int nr_7_St_23_On;
  int ns_7_St_23_On_1;
  int r_on_St_23_On;
  int nr_7_St_23_Off;
  int ns_7_St_23_Off_1;
  int r_on_St_23_Off;
  int ck_19_1;
  int v_77;
  int r_7_St_23_On;
  int s_7_St_23_On_1;
  int r_7_St_23_Off;
  int s_7_St_23_Off_1;
  int nr_8_St_24_Open;
  int ns_8_St_24_Open_1;
  int porta_open_St_24_Open;
  int nr_8_St_24_Closed;
  int ns_8_St_24_Closed_1;
  int porta_open_St_24_Closed;
  int ck_17_1;
  int v_76;
  int v_75;
  int v_74;
  int r_8_St_24_Open;
  int s_8_St_24_Open_1;
  int r_8_St_24_Closed;
  int s_8_St_24_Closed_1;
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
  int c_3;
  int w_open_1;
  int c_2;
  int pc_on_1;
  int arrived;
  int presence_1;
  int c_1;
  int arm_open_1;
  int c;
  int r_on;
  int push;
  int c_porta_1;
  int porta_open;
  int rule1;
  int v;
  int c_ar2;
  int c_ar1;
  int c_per2;
  int c_per1;
  int c_luz2;
  int c_luz1;
  int c_jan;
  int c_pc;
  int c_arm;
  int c_rot;
  int c_porta;
  ck_32_1 = self->v_317;
  ck_32_2 = self->v_318;
  ck_30_1 = self->v_333;
  ck_30_2 = self->v_334;
  ck_28_1 = self->v_349;
  ck_28_2 = self->v_350;
  arrived = p_arrived;
  push = abre_porta;
  Controller_controller__controller_controller_step(abre_porta, p_arrived,
                                                    self->ck_1, self->pnr_8,
                                                    self->ck_18_1,
                                                    self->pnr_7,
                                                    self->ck_20_1,
                                                    self->pnr_6,
                                                    self->ck_22_1,
                                                    self->pnr_5,
                                                    self->ck_24_1,
                                                    self->pnr_4,
                                                    self->ck_26_1,
                                                    self->pnr_3, self->v_350,
                                                    self->v_349, self->pnr_2,
                                                    self->v_334, self->v_333,
                                                    self->pnr_1, self->v_318,
                                                    self->v_317, self->pnr,
                                                    true, true, true, true,
                                                    true, true, true, true,
                                                    true, true, true,
                                                    &Controller_controller__controller_controller_out_st);
  c_ar2 = Controller_controller__controller_controller_out_st.controller_c_ar2;
  c_ar1 = Controller_controller__controller_controller_out_st.controller_c_ar1;
  c_per2 = Controller_controller__controller_controller_out_st.controller_c_per2;
  c_per1 = Controller_controller__controller_controller_out_st.controller_c_per1;
  c_luz2 = Controller_controller__controller_controller_out_st.controller_c_luz2;
  c_luz1 = Controller_controller__controller_controller_out_st.controller_c_luz1;
  c_jan = Controller_controller__controller_controller_out_st.controller_c_jan;
  c_pc = Controller_controller__controller_controller_out_st.controller_c_pc;
  c_arm = Controller_controller__controller_controller_out_st.controller_c_arm;
  c_rot = Controller_controller__controller_controller_out_st.controller_c_rot;
  c_porta = Controller_controller__controller_controller_out_st.controller_c_porta;
  c1_2 = c_ar1;
  c2_2 = c_ar2;
  c1_1 = c_per1;
  c2_1 = c_per2;
  c1 = c_luz1;
  c2 = c_luz2;
  c_3 = c_jan;
  c_2 = c_pc;
  c_1 = c_arm;
  c = c_rot;
  c_porta_1 = c_porta;
  if (ck_32_1) {
    ck_32_2_1 = ck_32_2;
    if (ck_32_2_1) {
      v_101 = !(c2_2);
      if (v_101) {
        v_103 = true;
        v_102_1 = false;
        v_102_2 = false;
      } else {
        v_103 = self->pnr;
        v_102_1 = true;
        v_102_2 = true;
      };
      v_100 = !(c1_2);
      if (v_100) {
        r_St_16_Max = true;
      } else {
        r_St_16_Max = v_103;
      };
      v_323 = r_St_16_Max;
      if (v_100) {
        s_St_16_Max_1 = true;
      } else {
        s_St_16_Max_1 = v_102_1;
      };
      v_319 = s_St_16_Max_1;
      if (v_100) {
        s_St_16_Max_2 = false;
      } else {
        s_St_16_Max_2 = v_102_2;
      };
      v_320 = s_St_16_Max_2;
    } else {
      if (c2_2) {
        v_106 = true;
        v_105_1 = true;
        v_105_2 = true;
      } else {
        v_106 = self->pnr;
        v_105_1 = true;
        v_105_2 = false;
      };
      v_104 = !(c1_2);
      if (v_104) {
        r_St_16_Min = true;
        s_St_16_Min_1 = false;
        s_St_16_Min_2 = false;
      } else {
        r_St_16_Min = v_106;
        s_St_16_Min_1 = v_105_1;
        s_St_16_Min_2 = v_105_2;
      };
      v_323 = r_St_16_Min;
      v_319 = s_St_16_Min_1;
      v_320 = s_St_16_Min_2;
    };
    s_1_3 = v_319;
    s_2_3 = v_320;
    r = v_323;
  } else {
    ck_32_2_0 = ck_32_2;
    if (ck_32_2_0) {
      v_324 = true;
      v_321 = true;
      v_322 = true;
    } else {
      if (c2_2) {
        v_108 = true;
      } else {
        v_108 = self->pnr;
      };
      if (c1_2) {
        r_St_16_Off = true;
      } else {
        r_St_16_Off = v_108;
      };
      v_324 = r_St_16_Off;
      if (c2_2) {
        v_107_1 = true;
      } else {
        v_107_1 = false;
      };
      if (c1_2) {
        s_St_16_Off_1 = true;
      } else {
        s_St_16_Off_1 = v_107_1;
      };
      v_321 = s_St_16_Off_1;
      if (c2_2) {
        v_107_2 = true;
      } else {
        v_107_2 = false;
      };
      if (c1_2) {
        s_St_16_Off_2 = false;
      } else {
        s_St_16_Off_2 = v_107_2;
      };
      v_322 = s_St_16_Off_2;
      if (v_107_1) {
        v_107_2_1 = v_107_2;
      } else {
        v_107_2_0 = v_107_2;
      };
      if (s_St_16_Off_1) {
        s_St_16_Off_2_1 = s_St_16_Off_2;
      } else {
        s_St_16_Off_2_0 = s_St_16_Off_2;
      };
    };
    s_1_3 = v_321;
    s_2_3 = v_322;
    r = v_324;
  };
  ck_33_1 = s_1_3;
  ck_33_2 = s_2_3;
  if (ck_33_1) {
    ck_33_2_1 = ck_33_2;
    if (ck_33_2_1) {
      ar_state_1_St_16_Max = 2;
      v_309 = ar_state_1_St_16_Max;
      nr_St_16_Max = false;
      v_315 = nr_St_16_Max;
      ns_St_16_Max_1 = true;
      v_311 = ns_St_16_Max_1;
      ns_St_16_Max_2 = true;
      v_312 = ns_St_16_Max_2;
    } else {
      ar_state_1_St_16_Min = 1;
      nr_St_16_Min = false;
      ns_St_16_Min_1 = true;
      ns_St_16_Min_2 = false;
      v_309 = ar_state_1_St_16_Min;
      v_315 = nr_St_16_Min;
      v_311 = ns_St_16_Min_1;
      v_312 = ns_St_16_Min_2;
    };
    ar_state_1 = v_309;
    ns_1_3 = v_311;
    ns_2_3 = v_312;
    nr = v_315;
  } else {
    ck_33_2_0 = ck_33_2;
    if (ck_33_2_0) {
      v_310 = 0;
      v_316 = true;
      v_313 = true;
      v_314 = true;
    } else {
      ar_state_1_St_16_Off = 0;
      v_310 = ar_state_1_St_16_Off;
      nr_St_16_Off = false;
      v_316 = nr_St_16_Off;
      ns_St_16_Off_1 = false;
      v_313 = ns_St_16_Off_1;
      ns_St_16_Off_2 = false;
      v_314 = ns_St_16_Off_2;
      if (ns_St_16_Off_1) {
        ns_St_16_Off_2_1 = ns_St_16_Off_2;
      } else {
        ns_St_16_Off_2_0 = ns_St_16_Off_2;
      };
    };
    ar_state_1 = v_310;
    ns_1_3 = v_313;
    ns_2_3 = v_314;
    nr = v_316;
  };
  _out->ar_state = ar_state_1;
  if (ns_1_3) {
    ns_2_3_1 = ns_2_3;
  } else {
    ns_2_3_0 = ns_2_3;
  };
  if (ck_33_1) {
    if (ck_33_2_1) {
      if (ns_St_16_Max_1) {
        ns_St_16_Max_2_1 = ns_St_16_Max_2;
      } else {
        ns_St_16_Max_2_0 = ns_St_16_Max_2;
      };
    } else {
      if (ns_St_16_Min_1) {
        ns_St_16_Min_2_1 = ns_St_16_Min_2;
      } else {
        ns_St_16_Min_2_0 = ns_St_16_Min_2;
      };
    };
  };
  if (s_1_3) {
    s_2_3_1 = s_2_3;
  } else {
    s_2_3_0 = s_2_3;
  };
  if (ck_32_1) {
    if (ck_32_2_1) {
      if (v_102_1) {
        v_102_2_1 = v_102_2;
      } else {
        v_102_2_0 = v_102_2;
      };
      if (s_St_16_Max_1) {
        s_St_16_Max_2_1 = s_St_16_Max_2;
      } else {
        s_St_16_Max_2_0 = s_St_16_Max_2;
      };
    } else {
      if (v_105_1) {
        v_105_2_1 = v_105_2;
      } else {
        v_105_2_0 = v_105_2;
      };
      if (s_St_16_Min_1) {
        s_St_16_Min_2_1 = s_St_16_Min_2;
      } else {
        s_St_16_Min_2_0 = s_St_16_Min_2;
      };
    };
  };
  if (ck_30_1) {
    ck_30_2_1 = ck_30_2;
    if (ck_30_2_1) {
      if (c2_1) {
        v_99 = true;
      } else {
        v_99 = self->pnr_1;
      };
      if (c1_1) {
        r_1_St_17_Down = true;
      } else {
        r_1_St_17_Down = v_99;
      };
      if (c2_1) {
        v_98_1 = false;
      } else {
        v_98_1 = true;
      };
      if (c1_1) {
        s_1_St_17_Down_1 = true;
      } else {
        s_1_St_17_Down_1 = v_98_1;
      };
      if (c2_1) {
        v_98_2 = false;
      } else {
        v_98_2 = true;
      };
      if (c1_1) {
        s_1_St_17_Down_2 = false;
      } else {
        s_1_St_17_Down_2 = v_98_2;
      };
      v_339 = r_1_St_17_Down;
      v_335 = s_1_St_17_Down_1;
      v_336 = s_1_St_17_Down_2;
      if (v_98_1) {
        v_98_2_1 = v_98_2;
      } else {
        v_98_2_0 = v_98_2;
      };
      if (s_1_St_17_Down_1) {
        s_1_St_17_Down_2_1 = s_1_St_17_Down_2;
      } else {
        s_1_St_17_Down_2_0 = s_1_St_17_Down_2;
      };
    } else {
      if (c2_1) {
        v_97 = true;
        v_96_1 = false;
        v_96_2 = false;
      } else {
        v_97 = self->pnr_1;
        v_96_1 = true;
        v_96_2 = false;
      };
      v_95 = !(c1_1);
      if (v_95) {
        r_1_St_17_Mid = true;
      } else {
        r_1_St_17_Mid = v_97;
      };
      v_339 = r_1_St_17_Mid;
      if (v_95) {
        s_1_St_17_Mid_1 = true;
      } else {
        s_1_St_17_Mid_1 = v_96_1;
      };
      v_335 = s_1_St_17_Mid_1;
      if (v_95) {
        s_1_St_17_Mid_2 = true;
      } else {
        s_1_St_17_Mid_2 = v_96_2;
      };
      v_336 = s_1_St_17_Mid_2;
      if (v_96_1) {
        v_96_2_1 = v_96_2;
      } else {
        v_96_2_0 = v_96_2;
      };
      if (s_1_St_17_Mid_1) {
        s_1_St_17_Mid_2_1 = s_1_St_17_Mid_2;
      } else {
        s_1_St_17_Mid_2_0 = s_1_St_17_Mid_2;
      };
    };
    s_1_1 = v_335;
    s_1_2 = v_336;
    r_1 = v_339;
  } else {
    ck_30_2_0 = ck_30_2;
    if (ck_30_2_0) {
      v_340 = true;
      v_337 = true;
      v_338 = true;
    } else {
      v_92 = !(c2_1);
      if (v_92) {
        v_94 = true;
        v_93_1 = true;
        v_93_2 = true;
      } else {
        v_94 = self->pnr_1;
        v_93_1 = false;
        v_93_2 = false;
      };
      v_91 = !(c1_1);
      if (v_91) {
        r_1_St_17_Up = true;
      } else {
        r_1_St_17_Up = v_94;
      };
      v_340 = r_1_St_17_Up;
      if (v_91) {
        s_1_St_17_Up_1 = true;
      } else {
        s_1_St_17_Up_1 = v_93_1;
      };
      v_337 = s_1_St_17_Up_1;
      if (v_91) {
        s_1_St_17_Up_2 = false;
      } else {
        s_1_St_17_Up_2 = v_93_2;
      };
      v_338 = s_1_St_17_Up_2;
    };
    s_1_1 = v_337;
    s_1_2 = v_338;
    r_1 = v_340;
  };
  ck_31_1 = s_1_1;
  ck_31_2 = s_1_2;
  if (ck_31_1) {
    ck_31_2_1 = ck_31_2;
    if (ck_31_2_1) {
      p_state_1_St_17_Down = 0;
      nr_1_St_17_Down = false;
      ns_1_St_17_Down_1 = true;
      ns_1_St_17_Down_2 = true;
      v_325 = p_state_1_St_17_Down;
      v_331 = nr_1_St_17_Down;
      v_327 = ns_1_St_17_Down_1;
      v_328 = ns_1_St_17_Down_2;
      if (ns_1_St_17_Down_1) {
        ns_1_St_17_Down_2_1 = ns_1_St_17_Down_2;
      } else {
        ns_1_St_17_Down_2_0 = ns_1_St_17_Down_2;
      };
    } else {
      p_state_1_St_17_Mid = 1;
      v_325 = p_state_1_St_17_Mid;
      nr_1_St_17_Mid = false;
      v_331 = nr_1_St_17_Mid;
      ns_1_St_17_Mid_1 = true;
      v_327 = ns_1_St_17_Mid_1;
      ns_1_St_17_Mid_2 = false;
      v_328 = ns_1_St_17_Mid_2;
      if (ns_1_St_17_Mid_1) {
        ns_1_St_17_Mid_2_1 = ns_1_St_17_Mid_2;
      } else {
        ns_1_St_17_Mid_2_0 = ns_1_St_17_Mid_2;
      };
    };
    p_state_1 = v_325;
    ns_1_1 = v_327;
    ns_1_2 = v_328;
    nr_1 = v_331;
  } else {
    ck_31_2_0 = ck_31_2;
    if (ck_31_2_0) {
      v_326 = 0;
      v_332 = true;
      v_329 = true;
      v_330 = true;
    } else {
      p_state_1_St_17_Up = 2;
      v_326 = p_state_1_St_17_Up;
      nr_1_St_17_Up = false;
      v_332 = nr_1_St_17_Up;
      ns_1_St_17_Up_1 = false;
      v_329 = ns_1_St_17_Up_1;
      ns_1_St_17_Up_2 = false;
      v_330 = ns_1_St_17_Up_2;
    };
    p_state_1 = v_326;
    ns_1_1 = v_329;
    ns_1_2 = v_330;
    nr_1 = v_332;
  };
  _out->p_state = p_state_1;
  if (ns_1_1) {
    ns_1_2_1 = ns_1_2;
  } else {
    ns_1_2_0 = ns_1_2;
  };
  if (!(ck_31_1)) {
    if (!(ck_31_2_0)) {
      if (ns_1_St_17_Up_1) {
        ns_1_St_17_Up_2_1 = ns_1_St_17_Up_2;
      } else {
        ns_1_St_17_Up_2_0 = ns_1_St_17_Up_2;
      };
    };
  };
  if (s_1_1) {
    s_1_2_1 = s_1_2;
  } else {
    s_1_2_0 = s_1_2;
  };
  if (!(ck_30_1)) {
    if (!(ck_30_2_0)) {
      if (v_93_1) {
        v_93_2_1 = v_93_2;
      } else {
        v_93_2_0 = v_93_2;
      };
      if (s_1_St_17_Up_1) {
        s_1_St_17_Up_2_1 = s_1_St_17_Up_2;
      } else {
        s_1_St_17_Up_2_0 = s_1_St_17_Up_2;
      };
    };
  };
  if (ck_28_1) {
    ck_28_2_1 = ck_28_2;
    if (ck_28_2_1) {
      v_83 = !(c2);
      if (v_83) {
        v_85 = true;
        v_84_1 = true;
        v_84_2 = false;
      } else {
        v_85 = self->pnr_2;
        v_84_1 = true;
        v_84_2 = true;
      };
      v_82 = !(c1);
      if (v_82) {
        r_2_St_18_All = true;
      } else {
        r_2_St_18_All = v_85;
      };
      v_355 = r_2_St_18_All;
      if (v_82) {
        s_2_St_18_All_1 = false;
      } else {
        s_2_St_18_All_1 = v_84_1;
      };
      v_351 = s_2_St_18_All_1;
      if (v_82) {
        s_2_St_18_All_2 = false;
      } else {
        s_2_St_18_All_2 = v_84_2;
      };
      v_352 = s_2_St_18_All_2;
    } else {
      if (c2) {
        v_90 = true;
      } else {
        v_90 = self->pnr_2;
      };
      if (c1) {
        r_2_St_18_None = true;
      } else {
        r_2_St_18_None = v_90;
      };
      if (c2) {
        v_89_1 = true;
      } else {
        v_89_1 = true;
      };
      if (c1) {
        s_2_St_18_None_1 = false;
      } else {
        s_2_St_18_None_1 = v_89_1;
      };
      if (c2) {
        v_89_2 = true;
      } else {
        v_89_2 = false;
      };
      if (c1) {
        s_2_St_18_None_2 = false;
      } else {
        s_2_St_18_None_2 = v_89_2;
      };
      v_355 = r_2_St_18_None;
      v_351 = s_2_St_18_None_1;
      v_352 = s_2_St_18_None_2;
      if (v_89_1) {
        v_89_2_1 = v_89_2;
      } else {
        v_89_2_0 = v_89_2;
      };
    };
    s_2_1 = v_351;
    s_2_2 = v_352;
    r_2 = v_355;
  } else {
    ck_28_2_0 = ck_28_2;
    if (ck_28_2_0) {
      v_356 = true;
      v_353 = true;
      v_354 = true;
    } else {
      if (c2) {
        v_88 = true;
        v_87_1 = true;
        v_87_2 = true;
      } else {
        v_88 = self->pnr_2;
        v_87_1 = false;
        v_87_2 = false;
      };
      v_86 = !(c1);
      if (v_86) {
        r_2_St_18_Some = true;
      } else {
        r_2_St_18_Some = v_88;
      };
      v_356 = r_2_St_18_Some;
      if (v_86) {
        s_2_St_18_Some_1 = true;
      } else {
        s_2_St_18_Some_1 = v_87_1;
      };
      v_353 = s_2_St_18_Some_1;
      if (v_86) {
        s_2_St_18_Some_2 = false;
      } else {
        s_2_St_18_Some_2 = v_87_2;
      };
      v_354 = s_2_St_18_Some_2;
      if (v_87_1) {
        v_87_2_1 = v_87_2;
      } else {
        v_87_2_0 = v_87_2;
      };
      if (s_2_St_18_Some_1) {
        s_2_St_18_Some_2_1 = s_2_St_18_Some_2;
      } else {
        s_2_St_18_Some_2_0 = s_2_St_18_Some_2;
      };
    };
    s_2_1 = v_353;
    s_2_2 = v_354;
    r_2 = v_356;
  };
  ck_29_1 = s_2_1;
  ck_29_2 = s_2_2;
  if (ck_29_1) {
    ck_29_2_1 = ck_29_2;
    if (ck_29_2_1) {
      l_state_1_St_18_All = 2;
      v_341 = l_state_1_St_18_All;
      nr_2_St_18_All = false;
      v_347 = nr_2_St_18_All;
      ns_2_St_18_All_1 = true;
      v_343 = ns_2_St_18_All_1;
      ns_2_St_18_All_2 = true;
      v_344 = ns_2_St_18_All_2;
    } else {
      l_state_1_St_18_None = 0;
      nr_2_St_18_None = false;
      ns_2_St_18_None_1 = true;
      ns_2_St_18_None_2 = false;
      v_341 = l_state_1_St_18_None;
      v_347 = nr_2_St_18_None;
      v_343 = ns_2_St_18_None_1;
      v_344 = ns_2_St_18_None_2;
    };
    l_state_1 = v_341;
    ns_2_1 = v_343;
    ns_2_2 = v_344;
    nr_2 = v_347;
  } else {
    ck_29_2_0 = ck_29_2;
    if (ck_29_2_0) {
      v_342 = 0;
      v_348 = true;
      v_345 = true;
      v_346 = true;
    } else {
      l_state_1_St_18_Some = 1;
      v_342 = l_state_1_St_18_Some;
      nr_2_St_18_Some = false;
      v_348 = nr_2_St_18_Some;
      ns_2_St_18_Some_1 = false;
      v_345 = ns_2_St_18_Some_1;
      ns_2_St_18_Some_2 = false;
      v_346 = ns_2_St_18_Some_2;
      if (ns_2_St_18_Some_1) {
        ns_2_St_18_Some_2_1 = ns_2_St_18_Some_2;
      } else {
        ns_2_St_18_Some_2_0 = ns_2_St_18_Some_2;
      };
    };
    l_state_1 = v_342;
    ns_2_1 = v_345;
    ns_2_2 = v_346;
    nr_2 = v_348;
  };
  _out->l_state = l_state_1;
  if (ns_2_1) {
    ns_2_2_1 = ns_2_2;
  } else {
    ns_2_2_0 = ns_2_2;
  };
  if (ck_29_1) {
    if (ck_29_2_1) {
      if (ns_2_St_18_All_1) {
        ns_2_St_18_All_2_1 = ns_2_St_18_All_2;
      } else {
        ns_2_St_18_All_2_0 = ns_2_St_18_All_2;
      };
    } else {
      if (ns_2_St_18_None_1) {
        ns_2_St_18_None_2_1 = ns_2_St_18_None_2;
      } else {
        ns_2_St_18_None_2_0 = ns_2_St_18_None_2;
      };
    };
  };
  if (s_2_1) {
    s_2_2_1 = s_2_2;
  } else {
    s_2_2_0 = s_2_2;
  };
  if (ck_28_1) {
    if (ck_28_2_1) {
      if (v_84_1) {
        v_84_2_1 = v_84_2;
      } else {
        v_84_2_0 = v_84_2;
      };
      if (s_2_St_18_All_1) {
        s_2_St_18_All_2_1 = s_2_St_18_All_2;
      } else {
        s_2_St_18_All_2_0 = s_2_St_18_All_2;
      };
    } else {
      if (s_2_St_18_None_1) {
        s_2_St_18_None_2_1 = s_2_St_18_None_2;
      } else {
        s_2_St_18_None_2_0 = s_2_St_18_None_2;
      };
    };
  };
  if (self->ck_26_1) {
    if (c_3) {
      r_3_St_19_Closed = true;
      s_3_St_19_Closed_1 = false;
    } else {
      r_3_St_19_Closed = self->pnr_3;
      s_3_St_19_Closed_1 = true;
    };
    r_3 = r_3_St_19_Closed;
    s_3_1 = s_3_St_19_Closed_1;
  } else {
    v_81 = !(c_3);
    if (v_81) {
      r_3_St_19_Open = true;
    } else {
      r_3_St_19_Open = self->pnr_3;
    };
    r_3 = r_3_St_19_Open;
    if (v_81) {
      s_3_St_19_Open_1 = true;
    } else {
      s_3_St_19_Open_1 = false;
    };
    s_3_1 = s_3_St_19_Open_1;
  };
  ck_27_1 = s_3_1;
  if (ck_27_1) {
    w_open_1_St_19_Closed = false;
    nr_3_St_19_Closed = false;
    ns_3_St_19_Closed_1 = true;
    w_open_1 = w_open_1_St_19_Closed;
    nr_3 = nr_3_St_19_Closed;
    ns_3_1 = ns_3_St_19_Closed_1;
  } else {
    w_open_1_St_19_Open = true;
    w_open_1 = w_open_1_St_19_Open;
    nr_3_St_19_Open = false;
    nr_3 = nr_3_St_19_Open;
    ns_3_St_19_Open_1 = false;
    ns_3_1 = ns_3_St_19_Open_1;
  };
  _out->w_open = w_open_1;
  if (self->ck_24_1) {
    if (c_2) {
      r_4_St_20_Off = true;
      s_4_St_20_Off_1 = false;
    } else {
      r_4_St_20_Off = self->pnr_4;
      s_4_St_20_Off_1 = true;
    };
    r_4 = r_4_St_20_Off;
    s_4_1 = s_4_St_20_Off_1;
  } else {
    v_80 = !(c_2);
    if (v_80) {
      r_4_St_20_On = true;
    } else {
      r_4_St_20_On = self->pnr_4;
    };
    r_4 = r_4_St_20_On;
    if (v_80) {
      s_4_St_20_On_1 = true;
    } else {
      s_4_St_20_On_1 = false;
    };
    s_4_1 = s_4_St_20_On_1;
  };
  ck_25_1 = s_4_1;
  if (ck_25_1) {
    pc_on_1_St_20_Off = false;
    nr_4_St_20_Off = false;
    ns_4_St_20_Off_1 = true;
    pc_on_1 = pc_on_1_St_20_Off;
    nr_4 = nr_4_St_20_Off;
    ns_4_1 = ns_4_St_20_Off_1;
  } else {
    pc_on_1_St_20_On = true;
    pc_on_1 = pc_on_1_St_20_On;
    nr_4_St_20_On = false;
    nr_4 = nr_4_St_20_On;
    ns_4_St_20_On_1 = false;
    ns_4_1 = ns_4_St_20_On_1;
  };
  _out->pc_on = pc_on_1;
  if (self->ck_22_1) {
    if (arrived) {
      r_5_St_21_Not_Present = true;
      s_5_St_21_Not_Present_1 = false;
    } else {
      r_5_St_21_Not_Present = self->pnr_5;
      s_5_St_21_Not_Present_1 = true;
    };
    r_5 = r_5_St_21_Not_Present;
    s_5_1 = s_5_St_21_Not_Present_1;
  } else {
    v_79 = !(arrived);
    if (v_79) {
      r_5_St_21_Preent = true;
    } else {
      r_5_St_21_Preent = self->pnr_5;
    };
    r_5 = r_5_St_21_Preent;
    if (v_79) {
      s_5_St_21_Preent_1 = true;
    } else {
      s_5_St_21_Preent_1 = false;
    };
    s_5_1 = s_5_St_21_Preent_1;
  };
  ck_23_1 = s_5_1;
  if (ck_23_1) {
    presence_1_St_21_Not_Present = false;
    nr_5_St_21_Not_Present = false;
    ns_5_St_21_Not_Present_1 = true;
    presence_1 = presence_1_St_21_Not_Present;
    nr_5 = nr_5_St_21_Not_Present;
    ns_5_1 = ns_5_St_21_Not_Present_1;
  } else {
    presence_1_St_21_Preent = true;
    presence_1 = presence_1_St_21_Preent;
    nr_5_St_21_Preent = false;
    nr_5 = nr_5_St_21_Preent;
    ns_5_St_21_Preent_1 = false;
    ns_5_1 = ns_5_St_21_Preent_1;
  };
  _out->presence = presence_1;
  if (self->ck_20_1) {
    if (c_1) {
      r_6_St_22_Locked = true;
      s_6_St_22_Locked_1 = false;
    } else {
      r_6_St_22_Locked = self->pnr_6;
      s_6_St_22_Locked_1 = true;
    };
    r_6 = r_6_St_22_Locked;
    s_6_1 = s_6_St_22_Locked_1;
  } else {
    v_78 = !(c_1);
    if (v_78) {
      r_6_St_22_Open = true;
    } else {
      r_6_St_22_Open = self->pnr_6;
    };
    r_6 = r_6_St_22_Open;
    if (v_78) {
      s_6_St_22_Open_1 = true;
    } else {
      s_6_St_22_Open_1 = false;
    };
    s_6_1 = s_6_St_22_Open_1;
  };
  ck_21_1 = s_6_1;
  if (ck_21_1) {
    arm_open_1_St_22_Locked = false;
    nr_6_St_22_Locked = false;
    ns_6_St_22_Locked_1 = true;
    arm_open_1 = arm_open_1_St_22_Locked;
    nr_6 = nr_6_St_22_Locked;
    ns_6_1 = ns_6_St_22_Locked_1;
  } else {
    arm_open_1_St_22_Open = true;
    arm_open_1 = arm_open_1_St_22_Open;
    nr_6_St_22_Open = false;
    nr_6 = nr_6_St_22_Open;
    ns_6_St_22_Open_1 = false;
    ns_6_1 = ns_6_St_22_Open_1;
  };
  _out->arm_open = arm_open_1;
  v = !(_out->arm_open);
  rule1 = (v&&_out->w_open);
  if (self->ck_18_1) {
    if (c) {
      r_7_St_23_Off = true;
      s_7_St_23_Off_1 = false;
    } else {
      r_7_St_23_Off = self->pnr_7;
      s_7_St_23_Off_1 = true;
    };
    r_7 = r_7_St_23_Off;
    s_7_1 = s_7_St_23_Off_1;
  } else {
    v_77 = !(c);
    if (v_77) {
      r_7_St_23_On = true;
    } else {
      r_7_St_23_On = self->pnr_7;
    };
    r_7 = r_7_St_23_On;
    if (v_77) {
      s_7_St_23_On_1 = true;
    } else {
      s_7_St_23_On_1 = false;
    };
    s_7_1 = s_7_St_23_On_1;
  };
  ck_19_1 = s_7_1;
  if (ck_19_1) {
    r_on_St_23_Off = false;
    nr_7_St_23_Off = false;
    ns_7_St_23_Off_1 = true;
    r_on = r_on_St_23_Off;
    nr_7 = nr_7_St_23_Off;
    ns_7_1 = ns_7_St_23_Off_1;
  } else {
    r_on_St_23_On = true;
    r_on = r_on_St_23_On;
    nr_7_St_23_On = false;
    nr_7 = nr_7_St_23_On;
    ns_7_St_23_On_1 = false;
    ns_7_1 = ns_7_St_23_On_1;
  };
  _out->r_on1 = r_on;
  if (self->ck_1) {
    v_76 = (push&&c_porta_1);
    if (v_76) {
      r_8_St_24_Closed = true;
      s_8_St_24_Closed_1 = false;
    } else {
      r_8_St_24_Closed = self->pnr_8;
      s_8_St_24_Closed_1 = true;
    };
    r_8 = r_8_St_24_Closed;
    s_8_1 = s_8_St_24_Closed_1;
  } else {
    v_74 = !(c_porta_1);
    v_75 = (push||v_74);
    if (v_75) {
      r_8_St_24_Open = true;
    } else {
      r_8_St_24_Open = self->pnr_8;
    };
    r_8 = r_8_St_24_Open;
    if (v_75) {
      s_8_St_24_Open_1 = true;
    } else {
      s_8_St_24_Open_1 = false;
    };
    s_8_1 = s_8_St_24_Open_1;
  };
  ck_17_1 = s_8_1;
  if (ck_17_1) {
    porta_open_St_24_Closed = false;
    nr_8_St_24_Closed = false;
    ns_8_St_24_Closed_1 = true;
    porta_open = porta_open_St_24_Closed;
    nr_8 = nr_8_St_24_Closed;
    ns_8_1 = ns_8_St_24_Closed_1;
  } else {
    porta_open_St_24_Open = true;
    porta_open = porta_open_St_24_Open;
    nr_8_St_24_Open = false;
    nr_8 = nr_8_St_24_Open;
    ns_8_St_24_Open_1 = false;
    ns_8_1 = ns_8_St_24_Open_1;
  };
  _out->p_open = porta_open;
  self->pnr = nr;
  self->v_317 = ns_1_3;
  self->v_318 = ns_2_3;
  self->pnr_1 = nr_1;
  self->v_333 = ns_1_1;
  self->v_334 = ns_1_2;
  self->pnr_2 = nr_2;
  self->v_349 = ns_2_1;
  self->v_350 = ns_2_2;
  self->pnr_3 = nr_3;
  self->ck_26_1 = ns_3_1;
  self->pnr_4 = nr_4;
  self->ck_24_1 = ns_4_1;
  self->pnr_5 = nr_5;
  self->ck_22_1 = ns_5_1;
  self->pnr_6 = nr_6;
  self->ck_20_1 = ns_6_1;
  self->pnr_7 = nr_7;
  self->ck_18_1 = ns_7_1;
  self->pnr_8 = nr_8;
  self->ck_1 = ns_8_1;;
}

