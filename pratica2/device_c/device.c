/* --- Generated the 15/6/2018 at 15:43 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jun. 15 15:41:53 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller device.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "device.h"

void Device__rad_reset(Device__rad_mem* self) {
  self->pnr = false;
  self->v_25 = false;
  self->v_26 = false;
}

void Device__rad_step(int up1, int up2, int down1, int down2,
                      Device__rad_out* _out, Device__rad_mem* self) {
  
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int ns_St_High_2_0;
  int ns_St_High_2_1;
  int ns_St_Eco_2_0;
  int ns_St_Eco_2_1;
  int ns_St_Frost_Protection_2_0;
  int ns_St_Frost_Protection_2_1;
  int ns_St_Off_2_0;
  int ns_St_Off_2_1;
  int ck_1_2_0;
  int ck_1_2_1;
  int nr_St_High;
  int ns_St_High_2;
  int ns_St_High_1;
  int p_St_High;
  int s_St_High;
  int nr_St_Eco;
  int ns_St_Eco_2;
  int ns_St_Eco_1;
  int p_St_Eco;
  int s_St_Eco;
  int nr_St_Frost_Protection;
  int ns_St_Frost_Protection_2;
  int ns_St_Frost_Protection_1;
  int p_St_Frost_Protection;
  int s_St_Frost_Protection;
  int nr_St_Off;
  int ns_St_Off_2;
  int ns_St_Off_1;
  int p_St_Off;
  int s_St_Off;
  int ck_1_2;
  int ck_1_1;
  int v_6_2_0;
  int v_6_2_1;
  int v_4_2_0;
  int v_4_2_1;
  int v_7;
  int v_6_2;
  int v_6_1;
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
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int s_1_St_High_2_0;
  int s_1_St_High_2_1;
  int s_1_St_Eco_2_0;
  int s_1_St_Eco_2_1;
  int s_1_St_Frost_Protection_2_0;
  int s_1_St_Frost_Protection_2_1;
  int s_1_St_Off_2_0;
  int s_1_St_Off_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_High;
  int s_1_St_High_2;
  int s_1_St_High_1;
  int r_St_Eco;
  int s_1_St_Eco_2;
  int s_1_St_Eco_1;
  int r_St_Frost_Protection;
  int s_1_St_Frost_Protection_2;
  int s_1_St_Frost_Protection_1;
  int r_St_Off;
  int s_1_St_Off_2;
  int s_1_St_Off_1;
  int ck_2;
  int ck_1_3;
  int s_1_2_0;
  int s_1_2_1;
  int ns_2_0;
  int ns_2_1;
  int s_1_2;
  int s_1_1;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1_3 = self->v_25;
  ck_2 = self->v_26;
  if (ck_1_3) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      if (down1) {
        v_3 = true;
      } else {
        v_3 = self->pnr;
      };
      if (up2) {
        r_St_Eco = true;
      } else {
        r_St_Eco = v_3;
      };
      v_31 = r_St_Eco;
      if (down1) {
        v_2_1 = true;
      } else {
        v_2_1 = true;
      };
      if (up2) {
        s_1_St_Eco_1 = false;
      } else {
        s_1_St_Eco_1 = v_2_1;
      };
      v_27 = s_1_St_Eco_1;
      if (down1) {
        v_2_2 = false;
      } else {
        v_2_2 = true;
      };
      if (up2) {
        s_1_St_Eco_2 = true;
      } else {
        s_1_St_Eco_2 = v_2_2;
      };
      v_28 = s_1_St_Eco_2;
      if (v_2_1) {
        v_2_2_1 = v_2_2;
      } else {
        v_2_2_0 = v_2_2;
      };
      if (s_1_St_Eco_1) {
        s_1_St_Eco_2_1 = s_1_St_Eco_2;
      } else {
        s_1_St_Eco_2_0 = s_1_St_Eco_2;
      };
    } else {
      if (down1) {
        v_5 = true;
      } else {
        v_5 = self->pnr;
      };
      if (up2) {
        v_7 = true;
      } else {
        v_7 = v_5;
      };
      if (up1) {
        r_St_Frost_Protection = true;
      } else {
        r_St_Frost_Protection = v_7;
      };
      if (down1) {
        v_4_1 = false;
      } else {
        v_4_1 = true;
      };
      if (up2) {
        v_6_1 = false;
      } else {
        v_6_1 = v_4_1;
      };
      if (up1) {
        s_1_St_Frost_Protection_1 = true;
      } else {
        s_1_St_Frost_Protection_1 = v_6_1;
      };
      if (down1) {
        v_4_2 = false;
      } else {
        v_4_2 = false;
      };
      if (up2) {
        v_6_2 = true;
      } else {
        v_6_2 = v_4_2;
      };
      if (up1) {
        s_1_St_Frost_Protection_2 = true;
      } else {
        s_1_St_Frost_Protection_2 = v_6_2;
      };
      v_31 = r_St_Frost_Protection;
      v_27 = s_1_St_Frost_Protection_1;
      v_28 = s_1_St_Frost_Protection_2;
      if (v_4_1) {
        v_4_2_1 = v_4_2;
      } else {
        v_4_2_0 = v_4_2;
      };
      if (v_6_1) {
        v_6_2_1 = v_6_2;
      } else {
        v_6_2_0 = v_6_2;
      };
      if (s_1_St_Frost_Protection_1) {
        s_1_St_Frost_Protection_2_1 = s_1_St_Frost_Protection_2;
      } else {
        s_1_St_Frost_Protection_2_0 = s_1_St_Frost_Protection_2;
      };
    };
    s_1_1 = v_27;
    s_1_2 = v_28;
    r = v_31;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      if (down1) {
        v_1 = true;
      } else {
        v_1 = self->pnr;
      };
      if (down2) {
        r_St_High = true;
      } else {
        r_St_High = v_1;
      };
      v_32 = r_St_High;
      if (down1) {
        v_1_1 = true;
      } else {
        v_1_1 = false;
      };
      if (down2) {
        s_1_St_High_1 = true;
      } else {
        s_1_St_High_1 = v_1_1;
      };
      v_29 = s_1_St_High_1;
      if (down1) {
        v_2_3 = true;
      } else {
        v_2_3 = true;
      };
      if (down2) {
        s_1_St_High_2 = false;
      } else {
        s_1_St_High_2 = v_2_3;
      };
      v_30 = s_1_St_High_2;
    } else {
      if (up1) {
        r_St_Off = true;
        s_1_St_Off_1 = true;
        s_1_St_Off_2 = false;
      } else {
        r_St_Off = self->pnr;
        s_1_St_Off_1 = false;
        s_1_St_Off_2 = false;
      };
      v_32 = r_St_Off;
      v_29 = s_1_St_Off_1;
      v_30 = s_1_St_Off_2;
    };
    s_1_1 = v_29;
    s_1_2 = v_30;
    r = v_32;
  };
  ck_1_1 = s_1_1;
  ck_1_2 = s_1_2;
  if (ck_1_1) {
    ck_1_2_1 = ck_1_2;
    if (ck_1_2_1) {
      s_St_Eco = true;
      v_15 = s_St_Eco;
      p_St_Eco = 1500;
      v_17 = p_St_Eco;
      nr_St_Eco = false;
      v_23 = nr_St_Eco;
      ns_St_Eco_1 = true;
      v_19 = ns_St_Eco_1;
      ns_St_Eco_2 = true;
      v_20 = ns_St_Eco_2;
      if (ns_St_Eco_1) {
        ns_St_Eco_2_1 = ns_St_Eco_2;
      } else {
        ns_St_Eco_2_0 = ns_St_Eco_2;
      };
    } else {
      s_St_Frost_Protection = true;
      p_St_Frost_Protection = 300;
      nr_St_Frost_Protection = false;
      ns_St_Frost_Protection_1 = true;
      ns_St_Frost_Protection_2 = false;
      v_15 = s_St_Frost_Protection;
      v_17 = p_St_Frost_Protection;
      v_23 = nr_St_Frost_Protection;
      v_19 = ns_St_Frost_Protection_1;
      v_20 = ns_St_Frost_Protection_2;
      if (ns_St_Frost_Protection_1) {
        ns_St_Frost_Protection_2_1 = ns_St_Frost_Protection_2;
      } else {
        ns_St_Frost_Protection_2_0 = ns_St_Frost_Protection_2;
      };
    };
    _out->s = v_15;
    _out->p = v_17;
    ns_1 = v_19;
    ns_2 = v_20;
    nr = v_23;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      s_St_High = true;
      v_16 = s_St_High;
      p_St_High = 2000;
      v_18 = p_St_High;
      nr_St_High = false;
      v_24 = nr_St_High;
      ns_St_High_1 = false;
      v_21 = ns_St_High_1;
      ns_St_High_2 = true;
      v_22 = ns_St_High_2;
    } else {
      s_St_Off = false;
      p_St_Off = 0;
      nr_St_Off = false;
      ns_St_Off_1 = false;
      ns_St_Off_2 = false;
      v_16 = s_St_Off;
      v_18 = p_St_Off;
      v_24 = nr_St_Off;
      v_21 = ns_St_Off_1;
      v_22 = ns_St_Off_2;
    };
    _out->s = v_16;
    _out->p = v_18;
    ns_1 = v_21;
    ns_2 = v_22;
    nr = v_24;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (!(ck_1_1)) {
    if (ck_1_2_0) {
      if (ns_St_High_1) {
        ns_St_High_2_1 = ns_St_High_2;
      } else {
        ns_St_High_2_0 = ns_St_High_2;
      };
    } else {
      if (ns_St_Off_1) {
        ns_St_Off_2_1 = ns_St_Off_2;
      } else {
        ns_St_Off_2_0 = ns_St_Off_2;
      };
    };
  };
  if (s_1_1) {
    s_1_2_1 = s_1_2;
  } else {
    s_1_2_0 = s_1_2;
  };
  if (!(ck_1_3)) {
    if (ck_2_0) {
      if (v_1_1) {
        v_2_3_1 = v_2_3;
      } else {
        v_2_3_0 = v_2_3;
      };
      if (s_1_St_High_1) {
        s_1_St_High_2_1 = s_1_St_High_2;
      } else {
        s_1_St_High_2_0 = s_1_St_High_2;
      };
    } else {
      if (s_1_St_Off_1) {
        s_1_St_Off_2_1 = s_1_St_Off_2;
      } else {
        s_1_St_Off_2_0 = s_1_St_Off_2;
      };
    };
  };
  self->pnr = nr;
  self->v_25 = ns_1;
  self->v_26 = ns_2;;
}

void Device__controller_reset(Device__controller_mem* self) {
  self->pnr = false;
  self->v_43 = false;
  self->v_44 = false;
}

void Device__controller_step(int up1_1, int up2_1, int down1_1, int down2_1,
                             Device__controller_out* _out,
                             Device__controller_mem* self) {
  
  int v_42;
  int v_41;
  int v_40;
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v_34;
  int v_33;
  int ns_St_1_High_2_0;
  int ns_St_1_High_2_1;
  int ns_St_1_Eco_2_0;
  int ns_St_1_Eco_2_1;
  int ns_St_1_Frost_Protection_2_0;
  int ns_St_1_Frost_Protection_2_1;
  int ns_St_1_Off_2_0;
  int ns_St_1_Off_2_1;
  int ck_2_2_0;
  int ck_2_2_1;
  int nr_St_1_High;
  int ns_St_1_High_2;
  int ns_St_1_High_1;
  int p_St_1_High;
  int s_St_1_High;
  int nr_St_1_Eco;
  int ns_St_1_Eco_2;
  int ns_St_1_Eco_1;
  int p_St_1_Eco;
  int s_St_1_Eco;
  int nr_St_1_Frost_Protection;
  int ns_St_1_Frost_Protection_2;
  int ns_St_1_Frost_Protection_1;
  int p_St_1_Frost_Protection;
  int s_St_1_Frost_Protection;
  int nr_St_1_Off;
  int ns_St_1_Off_2;
  int ns_St_1_Off_1;
  int p_St_1_Off;
  int s_St_1_Off;
  int ck_2_2;
  int ck_2_1;
  int v_13_2_0;
  int v_13_2_1;
  int v_11_2_0;
  int v_11_2_1;
  int v_14;
  int v_13_2;
  int v_13_1;
  int v_12;
  int v_11_2;
  int v_11_1;
  int v_9_2_0;
  int v_9_2_1;
  int v_10;
  int v_9_2;
  int v_9_1;
  int v_2_0;
  int v_2_1;
  int v_8;
  int v_2;
  int v_1;
  int v_50;
  int v_49;
  int v_48;
  int v_47;
  int v_46;
  int v_45;
  int s_2_St_1_High_2_0;
  int s_2_St_1_High_2_1;
  int s_2_St_1_Eco_2_0;
  int s_2_St_1_Eco_2_1;
  int s_2_St_1_Frost_Protection_2_0;
  int s_2_St_1_Frost_Protection_2_1;
  int s_2_St_1_Off_2_0;
  int s_2_St_1_Off_2_1;
  int ck_2_3_0;
  int ck_2_3_1;
  int r_St_1_High;
  int s_2_St_1_High_2;
  int s_2_St_1_High_1;
  int r_St_1_Eco;
  int s_2_St_1_Eco_2;
  int s_2_St_1_Eco_1;
  int r_St_1_Frost_Protection;
  int s_2_St_1_Frost_Protection_2;
  int s_2_St_1_Frost_Protection_1;
  int r_St_1_Off;
  int s_2_St_1_Off_2;
  int s_2_St_1_Off_1;
  int ck_2_3;
  int ck_1;
  int s_2_2_0;
  int s_2_2_1;
  int ns_2_0;
  int ns_2_1;
  int s_2_2;
  int s_2_1;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  int up1;
  int up2;
  int down1;
  int down2;
  int s;
  int p;
  up1 = up1_1;
  up2 = up2_1;
  down1 = down1_1;
  down2 = down2_1;
  ck_1 = self->v_43;
  ck_2_3 = self->v_44;
  if (ck_1) {
    ck_2_3_1 = ck_2_3;
    if (ck_2_3_1) {
      if (down1) {
        v_10 = true;
      } else {
        v_10 = self->pnr;
      };
      if (up2) {
        r_St_1_Eco = true;
      } else {
        r_St_1_Eco = v_10;
      };
      v_49 = r_St_1_Eco;
      if (down1) {
        v_9_1 = true;
      } else {
        v_9_1 = true;
      };
      if (up2) {
        s_2_St_1_Eco_1 = false;
      } else {
        s_2_St_1_Eco_1 = v_9_1;
      };
      v_45 = s_2_St_1_Eco_1;
      if (down1) {
        v_9_2 = false;
      } else {
        v_9_2 = true;
      };
      if (up2) {
        s_2_St_1_Eco_2 = true;
      } else {
        s_2_St_1_Eco_2 = v_9_2;
      };
      v_46 = s_2_St_1_Eco_2;
      if (v_9_1) {
        v_9_2_1 = v_9_2;
      } else {
        v_9_2_0 = v_9_2;
      };
      if (s_2_St_1_Eco_1) {
        s_2_St_1_Eco_2_1 = s_2_St_1_Eco_2;
      } else {
        s_2_St_1_Eco_2_0 = s_2_St_1_Eco_2;
      };
    } else {
      if (down1) {
        v_12 = true;
      } else {
        v_12 = self->pnr;
      };
      if (up2) {
        v_14 = true;
      } else {
        v_14 = v_12;
      };
      if (up1) {
        r_St_1_Frost_Protection = true;
      } else {
        r_St_1_Frost_Protection = v_14;
      };
      if (down1) {
        v_11_1 = false;
      } else {
        v_11_1 = true;
      };
      if (up2) {
        v_13_1 = false;
      } else {
        v_13_1 = v_11_1;
      };
      if (up1) {
        s_2_St_1_Frost_Protection_1 = true;
      } else {
        s_2_St_1_Frost_Protection_1 = v_13_1;
      };
      if (down1) {
        v_11_2 = false;
      } else {
        v_11_2 = false;
      };
      if (up2) {
        v_13_2 = true;
      } else {
        v_13_2 = v_11_2;
      };
      if (up1) {
        s_2_St_1_Frost_Protection_2 = true;
      } else {
        s_2_St_1_Frost_Protection_2 = v_13_2;
      };
      v_49 = r_St_1_Frost_Protection;
      v_45 = s_2_St_1_Frost_Protection_1;
      v_46 = s_2_St_1_Frost_Protection_2;
      if (v_11_1) {
        v_11_2_1 = v_11_2;
      } else {
        v_11_2_0 = v_11_2;
      };
      if (v_13_1) {
        v_13_2_1 = v_13_2;
      } else {
        v_13_2_0 = v_13_2;
      };
      if (s_2_St_1_Frost_Protection_1) {
        s_2_St_1_Frost_Protection_2_1 = s_2_St_1_Frost_Protection_2;
      } else {
        s_2_St_1_Frost_Protection_2_0 = s_2_St_1_Frost_Protection_2;
      };
    };
    s_2_1 = v_45;
    s_2_2 = v_46;
    r = v_49;
  } else {
    ck_2_3_0 = ck_2_3;
    if (ck_2_3_0) {
      if (down1) {
        v_8 = true;
      } else {
        v_8 = self->pnr;
      };
      if (down2) {
        r_St_1_High = true;
      } else {
        r_St_1_High = v_8;
      };
      v_50 = r_St_1_High;
      if (down1) {
        v_1 = true;
      } else {
        v_1 = false;
      };
      if (down2) {
        s_2_St_1_High_1 = true;
      } else {
        s_2_St_1_High_1 = v_1;
      };
      v_47 = s_2_St_1_High_1;
      if (down1) {
        v_2 = true;
      } else {
        v_2 = true;
      };
      if (down2) {
        s_2_St_1_High_2 = false;
      } else {
        s_2_St_1_High_2 = v_2;
      };
      v_48 = s_2_St_1_High_2;
    } else {
      if (up1) {
        r_St_1_Off = true;
        s_2_St_1_Off_1 = true;
        s_2_St_1_Off_2 = false;
      } else {
        r_St_1_Off = self->pnr;
        s_2_St_1_Off_1 = false;
        s_2_St_1_Off_2 = false;
      };
      v_50 = r_St_1_Off;
      v_47 = s_2_St_1_Off_1;
      v_48 = s_2_St_1_Off_2;
    };
    s_2_1 = v_47;
    s_2_2 = v_48;
    r = v_50;
  };
  ck_2_1 = s_2_1;
  ck_2_2 = s_2_2;
  if (ck_2_1) {
    ck_2_2_1 = ck_2_2;
    if (ck_2_2_1) {
      s_St_1_Eco = true;
      v_33 = s_St_1_Eco;
      p_St_1_Eco = 1500;
      v_35 = p_St_1_Eco;
      nr_St_1_Eco = false;
      v_41 = nr_St_1_Eco;
      ns_St_1_Eco_1 = true;
      v_37 = ns_St_1_Eco_1;
      ns_St_1_Eco_2 = true;
      v_38 = ns_St_1_Eco_2;
      if (ns_St_1_Eco_1) {
        ns_St_1_Eco_2_1 = ns_St_1_Eco_2;
      } else {
        ns_St_1_Eco_2_0 = ns_St_1_Eco_2;
      };
    } else {
      s_St_1_Frost_Protection = true;
      p_St_1_Frost_Protection = 300;
      nr_St_1_Frost_Protection = false;
      ns_St_1_Frost_Protection_1 = true;
      ns_St_1_Frost_Protection_2 = false;
      v_33 = s_St_1_Frost_Protection;
      v_35 = p_St_1_Frost_Protection;
      v_41 = nr_St_1_Frost_Protection;
      v_37 = ns_St_1_Frost_Protection_1;
      v_38 = ns_St_1_Frost_Protection_2;
      if (ns_St_1_Frost_Protection_1) {
        ns_St_1_Frost_Protection_2_1 = ns_St_1_Frost_Protection_2;
      } else {
        ns_St_1_Frost_Protection_2_0 = ns_St_1_Frost_Protection_2;
      };
    };
    s = v_33;
    p = v_35;
    ns_1 = v_37;
    ns_2 = v_38;
    nr = v_41;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      s_St_1_High = true;
      v_34 = s_St_1_High;
      p_St_1_High = 2000;
      v_36 = p_St_1_High;
      nr_St_1_High = false;
      v_42 = nr_St_1_High;
      ns_St_1_High_1 = false;
      v_39 = ns_St_1_High_1;
      ns_St_1_High_2 = true;
      v_40 = ns_St_1_High_2;
    } else {
      s_St_1_Off = false;
      p_St_1_Off = 0;
      nr_St_1_Off = false;
      ns_St_1_Off_1 = false;
      ns_St_1_Off_2 = false;
      v_34 = s_St_1_Off;
      v_36 = p_St_1_Off;
      v_42 = nr_St_1_Off;
      v_39 = ns_St_1_Off_1;
      v_40 = ns_St_1_Off_2;
    };
    s = v_34;
    p = v_36;
    ns_1 = v_39;
    ns_2 = v_40;
    nr = v_42;
  };
  _out->power1 = p;
  _out->state1 = s;
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (!(ck_2_1)) {
    if (ck_2_2_0) {
      if (ns_St_1_High_1) {
        ns_St_1_High_2_1 = ns_St_1_High_2;
      } else {
        ns_St_1_High_2_0 = ns_St_1_High_2;
      };
    } else {
      if (ns_St_1_Off_1) {
        ns_St_1_Off_2_1 = ns_St_1_Off_2;
      } else {
        ns_St_1_Off_2_0 = ns_St_1_Off_2;
      };
    };
  };
  if (s_2_1) {
    s_2_2_1 = s_2_2;
  } else {
    s_2_2_0 = s_2_2;
  };
  if (!(ck_1)) {
    if (ck_2_3_0) {
      if (v_1) {
        v_2_1 = v_2;
      } else {
        v_2_0 = v_2;
      };
      if (s_2_St_1_High_1) {
        s_2_St_1_High_2_1 = s_2_St_1_High_2;
      } else {
        s_2_St_1_High_2_0 = s_2_St_1_High_2;
      };
    } else {
      if (s_2_St_1_Off_1) {
        s_2_St_1_Off_2_1 = s_2_St_1_Off_2;
      } else {
        s_2_St_1_Off_2_0 = s_2_St_1_Off_2;
      };
    };
  };
  self->pnr = nr;
  self->v_43 = ns_1;
  self->v_44 = ns_2;;
}

