/* --- Generated the 2/7/2018 at 20:29 --- */
/* --- heptagon compiler, version 1.03.00 (compiled fri. jun. 15 15:41:53 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "system.h"

void System__management_policy_reset(System__management_policy_mem* self) {
  self->pnr = false;
  self->v_141 = false;
  self->v_142 = false;
}

void System__management_policy_step(int eco_input, int comfort_input,
                                    System__management_policy_out* _out,
                                    System__management_policy_mem* self) {
  
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
  int ns_St_Comfort_2_0;
  int ns_St_Comfort_2_1;
  int mode_St_Comfort_2_0;
  int mode_St_Comfort_2_1;
  int ns_St_Eco_2_0;
  int ns_St_Eco_2_1;
  int mode_St_Eco_2_0;
  int mode_St_Eco_2_1;
  int ns_St_Minimal_safety_2_0;
  int ns_St_Minimal_safety_2_1;
  int mode_St_Minimal_safety_2_0;
  int mode_St_Minimal_safety_2_1;
  int ck_1_2_0;
  int ck_1_2_1;
  int nr_St_Comfort;
  int ns_St_Comfort_2;
  int ns_St_Comfort_1;
  int mode_St_Comfort_2;
  int mode_St_Comfort_1;
  int nr_St_Eco;
  int ns_St_Eco_2;
  int ns_St_Eco_1;
  int mode_St_Eco_2;
  int mode_St_Eco_1;
  int nr_St_Minimal_safety;
  int ns_St_Minimal_safety_2;
  int ns_St_Minimal_safety_1;
  int mode_St_Minimal_safety_2;
  int mode_St_Minimal_safety_1;
  int ck_1_2;
  int ck_1_1;
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
  int v_148;
  int v_147;
  int v_146;
  int v_145;
  int v_144;
  int v_143;
  int s_St_Comfort_2_0;
  int s_St_Comfort_2_1;
  int s_St_Eco_2_0;
  int s_St_Eco_2_1;
  int s_St_Minimal_safety_2_0;
  int s_St_Minimal_safety_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_Comfort;
  int s_St_Comfort_2;
  int s_St_Comfort_1;
  int r_St_Eco;
  int s_St_Eco_2;
  int s_St_Eco_1;
  int r_St_Minimal_safety;
  int s_St_Minimal_safety_2;
  int s_St_Minimal_safety_1;
  int ck_2;
  int ck_1_3;
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
  ck_1_3 = self->v_141;
  ck_2 = self->v_142;
  if (ck_1_3) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      if (comfort_input) {
        v_1 = true;
      } else {
        v_1 = self->pnr;
      };
      if (eco_input) {
        r_St_Comfort = true;
      } else {
        r_St_Comfort = v_1;
      };
      v_147 = r_St_Comfort;
      if (comfort_input) {
        v_1_1 = false;
      } else {
        v_1_1 = true;
      };
      if (eco_input) {
        s_St_Comfort_1 = true;
      } else {
        s_St_Comfort_1 = v_1_1;
      };
      v_143 = s_St_Comfort_1;
      if (comfort_input) {
        v_2_3 = false;
      } else {
        v_2_3 = true;
      };
      if (eco_input) {
        s_St_Comfort_2 = false;
      } else {
        s_St_Comfort_2 = v_2_3;
      };
      v_144 = s_St_Comfort_2;
    } else {
      if (comfort_input) {
        v_3 = true;
      } else {
        v_3 = self->pnr;
      };
      if (eco_input) {
        r_St_Eco = true;
      } else {
        r_St_Eco = v_3;
      };
      if (comfort_input) {
        v_2_1 = true;
      } else {
        v_2_1 = true;
      };
      if (eco_input) {
        s_St_Eco_1 = false;
      } else {
        s_St_Eco_1 = v_2_1;
      };
      if (comfort_input) {
        v_2_2 = true;
      } else {
        v_2_2 = false;
      };
      if (eco_input) {
        s_St_Eco_2 = false;
      } else {
        s_St_Eco_2 = v_2_2;
      };
      v_147 = r_St_Eco;
      v_143 = s_St_Eco_1;
      v_144 = s_St_Eco_2;
    };
    s_1 = v_143;
    s_2 = v_144;
    r = v_147;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_148 = true;
      v_145 = true;
      v_146 = true;
    } else {
      if (comfort_input) {
        v_5 = true;
      } else {
        v_5 = self->pnr;
      };
      if (eco_input) {
        r_St_Minimal_safety = true;
      } else {
        r_St_Minimal_safety = v_5;
      };
      v_148 = r_St_Minimal_safety;
      if (comfort_input) {
        v_4_1 = true;
      } else {
        v_4_1 = false;
      };
      if (eco_input) {
        s_St_Minimal_safety_1 = true;
      } else {
        s_St_Minimal_safety_1 = v_4_1;
      };
      v_145 = s_St_Minimal_safety_1;
      if (comfort_input) {
        v_4_2 = true;
      } else {
        v_4_2 = false;
      };
      if (eco_input) {
        s_St_Minimal_safety_2 = false;
      } else {
        s_St_Minimal_safety_2 = v_4_2;
      };
      v_146 = s_St_Minimal_safety_2;
      if (v_4_1) {
        v_4_2_1 = v_4_2;
      } else {
        v_4_2_0 = v_4_2;
      };
      if (s_St_Minimal_safety_1) {
        s_St_Minimal_safety_2_1 = s_St_Minimal_safety_2;
      } else {
        s_St_Minimal_safety_2_0 = s_St_Minimal_safety_2;
      };
    };
    s_1 = v_145;
    s_2 = v_146;
    r = v_148;
  };
  ck_1_1 = s_1;
  ck_1_2 = s_2;
  if (ck_1_1) {
    ck_1_2_1 = ck_1_2;
    if (ck_1_2_1) {
      mode_St_Comfort_1 = true;
      v_131 = mode_St_Comfort_1;
      mode_St_Comfort_2 = true;
      v_132 = mode_St_Comfort_2;
      nr_St_Comfort = false;
      v_139 = nr_St_Comfort;
      ns_St_Comfort_1 = true;
      v_135 = ns_St_Comfort_1;
      ns_St_Comfort_2 = true;
      v_136 = ns_St_Comfort_2;
    } else {
      mode_St_Eco_1 = true;
      mode_St_Eco_2 = false;
      nr_St_Eco = false;
      ns_St_Eco_1 = true;
      ns_St_Eco_2 = false;
      v_131 = mode_St_Eco_1;
      v_132 = mode_St_Eco_2;
      v_139 = nr_St_Eco;
      v_135 = ns_St_Eco_1;
      v_136 = ns_St_Eco_2;
    };
    _out->mode_1 = v_131;
    _out->mode_2 = v_132;
    ns_1 = v_135;
    ns_2 = v_136;
    nr = v_139;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      v_133 = true;
      v_134 = true;
      v_140 = true;
      v_137 = true;
      v_138 = true;
    } else {
      mode_St_Minimal_safety_1 = false;
      v_133 = mode_St_Minimal_safety_1;
      mode_St_Minimal_safety_2 = false;
      v_134 = mode_St_Minimal_safety_2;
      nr_St_Minimal_safety = false;
      v_140 = nr_St_Minimal_safety;
      ns_St_Minimal_safety_1 = false;
      v_137 = ns_St_Minimal_safety_1;
      ns_St_Minimal_safety_2 = false;
      v_138 = ns_St_Minimal_safety_2;
      if (mode_St_Minimal_safety_1) {
        mode_St_Minimal_safety_2_1 = mode_St_Minimal_safety_2;
      } else {
        mode_St_Minimal_safety_2_0 = mode_St_Minimal_safety_2;
      };
      if (ns_St_Minimal_safety_1) {
        ns_St_Minimal_safety_2_1 = ns_St_Minimal_safety_2;
      } else {
        ns_St_Minimal_safety_2_0 = ns_St_Minimal_safety_2;
      };
    };
    _out->mode_1 = v_133;
    _out->mode_2 = v_134;
    ns_1 = v_137;
    ns_2 = v_138;
    nr = v_140;
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
  if (ck_1_1) {
    if (ck_1_2_1) {
      if (mode_St_Comfort_1) {
        mode_St_Comfort_2_1 = mode_St_Comfort_2;
      } else {
        mode_St_Comfort_2_0 = mode_St_Comfort_2;
      };
      if (ns_St_Comfort_1) {
        ns_St_Comfort_2_1 = ns_St_Comfort_2;
      } else {
        ns_St_Comfort_2_0 = ns_St_Comfort_2;
      };
    } else {
      if (mode_St_Eco_1) {
        mode_St_Eco_2_1 = mode_St_Eco_2;
      } else {
        mode_St_Eco_2_0 = mode_St_Eco_2;
      };
      if (ns_St_Eco_1) {
        ns_St_Eco_2_1 = ns_St_Eco_2;
      } else {
        ns_St_Eco_2_0 = ns_St_Eco_2;
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
  } else {
    s_2_0 = s_2;
  };
  if (ck_1_3) {
    if (ck_2_1) {
      if (v_1_1) {
        v_2_3_1 = v_2_3;
      } else {
        v_2_3_0 = v_2_3;
      };
      if (s_St_Comfort_1) {
        s_St_Comfort_2_1 = s_St_Comfort_2;
      } else {
        s_St_Comfort_2_0 = s_St_Comfort_2;
      };
    } else {
      if (v_2_1) {
        v_2_2_1 = v_2_2;
      } else {
        v_2_2_0 = v_2_2;
      };
      if (s_St_Eco_1) {
        s_St_Eco_2_1 = s_St_Eco_2;
      } else {
        s_St_Eco_2_0 = s_St_Eco_2;
      };
    };
  };
  self->pnr = nr;
  self->v_141 = ns_1;
  self->v_142 = ns_2;;
}

void System__ilumination_policy_reset(System__ilumination_policy_mem* self) {
  self->pnr = false;
  self->v_161 = false;
  self->v_162 = false;
}

void System__ilumination_policy_step(int up, int down, int night,
                                     System__ilumination_policy_out* _out,
                                     System__ilumination_policy_mem* self) {
  
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
  int ns_St_1_Artificial_2_0;
  int ns_St_1_Artificial_2_1;
  int ns_St_1_Half_2_0;
  int ns_St_1_Half_2_1;
  int ns_St_1_Natural_2_0;
  int ns_St_1_Natural_2_1;
  int ck_2_2_0;
  int ck_2_2_1;
  int nr_St_1_Artificial;
  int ns_St_1_Artificial_2;
  int ns_St_1_Artificial_1;
  int policy_St_1_Artificial;
  int p_state_St_1_Artificial;
  int l_state_St_1_Artificial;
  int nr_St_1_Half;
  int ns_St_1_Half_2;
  int ns_St_1_Half_1;
  int policy_St_1_Half;
  int p_state_St_1_Half;
  int l_state_St_1_Half;
  int nr_St_1_Natural;
  int ns_St_1_Natural_2;
  int ns_St_1_Natural_1;
  int policy_St_1_Natural;
  int p_state_St_1_Natural;
  int l_state_St_1_Natural;
  int ck_2_2;
  int ck_2_1;
  int v_18_2_0;
  int v_18_2_1;
  int v_19;
  int v_18_2;
  int v_18_1;
  int v_17;
  int v_16;
  int v_14_2_0;
  int v_14_2_1;
  int v_12_2_0;
  int v_12_2_1;
  int v_15;
  int v_14_2;
  int v_14_1;
  int v_13;
  int v_12_2;
  int v_12_1;
  int v_11;
  int v_10;
  int v_9;
  int v_7_2_0;
  int v_7_2_1;
  int v_8;
  int v_7_2;
  int v_7_1;
  int v_6;
  int v;
  int v_168;
  int v_167;
  int v_166;
  int v_165;
  int v_164;
  int v_163;
  int s_St_1_Artificial_2_0;
  int s_St_1_Artificial_2_1;
  int s_St_1_Half_2_0;
  int s_St_1_Half_2_1;
  int s_St_1_Natural_2_0;
  int s_St_1_Natural_2_1;
  int ck_2_3_0;
  int ck_2_3_1;
  int r_St_1_Artificial;
  int s_St_1_Artificial_2;
  int s_St_1_Artificial_1;
  int r_St_1_Half;
  int s_St_1_Half_2;
  int s_St_1_Half_1;
  int r_St_1_Natural;
  int s_St_1_Natural_2;
  int s_St_1_Natural_1;
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
  ck_1 = self->v_161;
  ck_2_3 = self->v_162;
  if (ck_1) {
    ck_2_3_1 = ck_2_3;
    if (ck_2_3_1) {
      v_6 = !(night);
      if (v_6) {
        v_8 = true;
        v_7_1 = false;
        v_7_2 = false;
      } else {
        v_8 = self->pnr;
        v_7_1 = true;
        v_7_2 = true;
      };
      v = (down&&night);
      if (v) {
        r_St_1_Artificial = true;
      } else {
        r_St_1_Artificial = v_8;
      };
      v_167 = r_St_1_Artificial;
      if (v) {
        s_St_1_Artificial_1 = true;
      } else {
        s_St_1_Artificial_1 = v_7_1;
      };
      v_163 = s_St_1_Artificial_1;
      if (v) {
        s_St_1_Artificial_2 = false;
      } else {
        s_St_1_Artificial_2 = v_7_2;
      };
      v_164 = s_St_1_Artificial_2;
    } else {
      v_11 = (down&&night);
      if (v_11) {
        v_13 = true;
        v_12_1 = false;
        v_12_2 = false;
      } else {
        v_13 = self->pnr;
        v_12_1 = true;
        v_12_2 = false;
      };
      v_10 = !(night);
      if (v_10) {
        v_15 = true;
        v_14_1 = true;
        v_14_2 = true;
      } else {
        v_15 = v_13;
        v_14_1 = v_12_1;
        v_14_2 = v_12_2;
      };
      v_9 = (up&&night);
      if (v_9) {
        r_St_1_Half = true;
        s_St_1_Half_1 = true;
        s_St_1_Half_2 = true;
      } else {
        r_St_1_Half = v_15;
        s_St_1_Half_1 = v_14_1;
        s_St_1_Half_2 = v_14_2;
      };
      v_167 = r_St_1_Half;
      v_163 = s_St_1_Half_1;
      v_164 = s_St_1_Half_2;
    };
    s_1 = v_163;
    s_2 = v_164;
    r = v_167;
  } else {
    ck_2_3_0 = ck_2_3;
    if (ck_2_3_0) {
      v_168 = true;
      v_165 = true;
      v_166 = true;
    } else {
      v_17 = !(night);
      if (v_17) {
        v_19 = true;
        v_18_1 = true;
        v_18_2 = true;
      } else {
        v_19 = self->pnr;
        v_18_1 = false;
        v_18_2 = false;
      };
      v_16 = (up&&night);
      if (v_16) {
        r_St_1_Natural = true;
      } else {
        r_St_1_Natural = v_19;
      };
      v_168 = r_St_1_Natural;
      if (v_16) {
        s_St_1_Natural_1 = true;
      } else {
        s_St_1_Natural_1 = v_18_1;
      };
      v_165 = s_St_1_Natural_1;
      if (v_16) {
        s_St_1_Natural_2 = false;
      } else {
        s_St_1_Natural_2 = v_18_2;
      };
      v_166 = s_St_1_Natural_2;
      if (v_18_1) {
        v_18_2_1 = v_18_2;
      } else {
        v_18_2_0 = v_18_2;
      };
      if (s_St_1_Natural_1) {
        s_St_1_Natural_2_1 = s_St_1_Natural_2;
      } else {
        s_St_1_Natural_2_0 = s_St_1_Natural_2;
      };
    };
    s_1 = v_165;
    s_2 = v_166;
    r = v_168;
  };
  ck_2_1 = s_1;
  ck_2_2 = s_2;
  if (ck_2_1) {
    ck_2_2_1 = ck_2_2;
    if (ck_2_2_1) {
      l_state_St_1_Artificial = 2;
      v_149 = l_state_St_1_Artificial;
      p_state_St_1_Artificial = 2;
      v_151 = p_state_St_1_Artificial;
      policy_St_1_Artificial = 3;
      v_153 = policy_St_1_Artificial;
      nr_St_1_Artificial = false;
      v_159 = nr_St_1_Artificial;
      ns_St_1_Artificial_1 = true;
      v_155 = ns_St_1_Artificial_1;
      ns_St_1_Artificial_2 = true;
      v_156 = ns_St_1_Artificial_2;
    } else {
      l_state_St_1_Half = 1;
      p_state_St_1_Half = 1;
      policy_St_1_Half = 2;
      nr_St_1_Half = false;
      ns_St_1_Half_1 = true;
      ns_St_1_Half_2 = false;
      v_149 = l_state_St_1_Half;
      v_151 = p_state_St_1_Half;
      v_153 = policy_St_1_Half;
      v_159 = nr_St_1_Half;
      v_155 = ns_St_1_Half_1;
      v_156 = ns_St_1_Half_2;
    };
    _out->l_state = v_149;
    _out->p_state = v_151;
    _out->policy = v_153;
    ns_1 = v_155;
    ns_2 = v_156;
    nr = v_159;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      v_150 = 0;
      v_152 = 0;
      v_154 = 0;
      v_160 = true;
      v_157 = true;
      v_158 = true;
    } else {
      l_state_St_1_Natural = 0;
      v_150 = l_state_St_1_Natural;
      p_state_St_1_Natural = 0;
      v_152 = p_state_St_1_Natural;
      policy_St_1_Natural = 1;
      v_154 = policy_St_1_Natural;
      nr_St_1_Natural = false;
      v_160 = nr_St_1_Natural;
      ns_St_1_Natural_1 = false;
      v_157 = ns_St_1_Natural_1;
      ns_St_1_Natural_2 = false;
      v_158 = ns_St_1_Natural_2;
      if (ns_St_1_Natural_1) {
        ns_St_1_Natural_2_1 = ns_St_1_Natural_2;
      } else {
        ns_St_1_Natural_2_0 = ns_St_1_Natural_2;
      };
    };
    _out->l_state = v_150;
    _out->p_state = v_152;
    _out->policy = v_154;
    ns_1 = v_157;
    ns_2 = v_158;
    nr = v_160;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (ck_2_1) {
    if (ck_2_2_1) {
      if (ns_St_1_Artificial_1) {
        ns_St_1_Artificial_2_1 = ns_St_1_Artificial_2;
      } else {
        ns_St_1_Artificial_2_0 = ns_St_1_Artificial_2;
      };
    } else {
      if (ns_St_1_Half_1) {
        ns_St_1_Half_2_1 = ns_St_1_Half_2;
      } else {
        ns_St_1_Half_2_0 = ns_St_1_Half_2;
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
      if (v_7_1) {
        v_7_2_1 = v_7_2;
      } else {
        v_7_2_0 = v_7_2;
      };
      if (s_St_1_Artificial_1) {
        s_St_1_Artificial_2_1 = s_St_1_Artificial_2;
      } else {
        s_St_1_Artificial_2_0 = s_St_1_Artificial_2;
      };
    } else {
      if (v_12_1) {
        v_12_2_1 = v_12_2;
      } else {
        v_12_2_0 = v_12_2;
      };
      if (v_14_1) {
        v_14_2_1 = v_14_2;
      } else {
        v_14_2_0 = v_14_2;
      };
      if (s_St_1_Half_1) {
        s_St_1_Half_2_1 = s_St_1_Half_2;
      } else {
        s_St_1_Half_2_0 = s_St_1_Half_2;
      };
    };
  };
  self->pnr = nr;
  self->v_161 = ns_1;
  self->v_162 = ns_2;;
}

void System__porta_reset(System__porta_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__porta_step(int push, int c_porta, System__porta_out* _out,
                        System__porta_mem* self) {
  
  int nr_St_2_Open;
  int ns_St_2_Open_1;
  int porta_open_St_2_Open;
  int nr_St_2_Closed;
  int ns_St_2_Closed_1;
  int porta_open_St_2_Closed;
  int ck_3_1;
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
    v = !(c_porta);
    if (v) {
      r_St_2_Closed = true;
      s_St_2_Closed_1 = false;
    } else {
      r_St_2_Closed = self->pnr;
      s_St_2_Closed_1 = true;
    };
    r = r_St_2_Closed;
    s_1 = s_St_2_Closed_1;
  } else {
    if (c_porta) {
      r_St_2_Open = true;
    } else {
      r_St_2_Open = self->pnr;
    };
    r = r_St_2_Open;
    if (c_porta) {
      s_St_2_Open_1 = true;
    } else {
      s_St_2_Open_1 = false;
    };
    s_1 = s_St_2_Open_1;
  };
  ck_3_1 = s_1;
  if (ck_3_1) {
    porta_open_St_2_Closed = false;
    nr_St_2_Closed = false;
    ns_St_2_Closed_1 = true;
    _out->porta_open = porta_open_St_2_Closed;
    nr = nr_St_2_Closed;
    ns_1 = ns_St_2_Closed_1;
  } else {
    porta_open_St_2_Open = true;
    _out->porta_open = porta_open_St_2_Open;
    nr_St_2_Open = false;
    nr = nr_St_2_Open;
    ns_St_2_Open_1 = false;
    ns_1 = ns_St_2_Open_1;
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
  
  int nr_St_3_On;
  int ns_St_3_On_1;
  int r_on_St_3_On;
  int nr_St_3_Off;
  int ns_St_3_Off_1;
  int r_on_St_3_Off;
  int ck_4_1;
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
    if (c) {
      r_St_3_Off = true;
      s_St_3_Off_1 = false;
    } else {
      r_St_3_Off = self->pnr;
      s_St_3_Off_1 = true;
    };
    r = r_St_3_Off;
    s_1 = s_St_3_Off_1;
  } else {
    v = !(c);
    if (v) {
      r_St_3_On = true;
    } else {
      r_St_3_On = self->pnr;
    };
    r = r_St_3_On;
    if (v) {
      s_St_3_On_1 = true;
    } else {
      s_St_3_On_1 = false;
    };
    s_1 = s_St_3_On_1;
  };
  ck_4_1 = s_1;
  if (ck_4_1) {
    r_on_St_3_Off = false;
    nr_St_3_Off = false;
    ns_St_3_Off_1 = true;
    _out->r_on = r_on_St_3_Off;
    nr = nr_St_3_Off;
    ns_1 = ns_St_3_Off_1;
  } else {
    r_on_St_3_On = true;
    _out->r_on = r_on_St_3_On;
    nr_St_3_On = false;
    nr = nr_St_3_On;
    ns_St_3_On_1 = false;
    ns_1 = ns_St_3_On_1;
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
  
  int nr_St_4_Open;
  int ns_St_4_Open_1;
  int arm_open_St_4_Open;
  int nr_St_4_Locked;
  int ns_St_4_Locked_1;
  int arm_open_St_4_Locked;
  int ck_5_1;
  int v;
  int r_St_4_Open;
  int s_St_4_Open_1;
  int r_St_4_Locked;
  int s_St_4_Locked_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v = !(c);
    if (v) {
      r_St_4_Locked = true;
      s_St_4_Locked_1 = false;
    } else {
      r_St_4_Locked = self->pnr;
      s_St_4_Locked_1 = true;
    };
    r = r_St_4_Locked;
    s_1 = s_St_4_Locked_1;
  } else {
    if (c) {
      r_St_4_Open = true;
    } else {
      r_St_4_Open = self->pnr;
    };
    r = r_St_4_Open;
    if (c) {
      s_St_4_Open_1 = true;
    } else {
      s_St_4_Open_1 = false;
    };
    s_1 = s_St_4_Open_1;
  };
  ck_5_1 = s_1;
  if (ck_5_1) {
    arm_open_St_4_Locked = false;
    nr_St_4_Locked = false;
    ns_St_4_Locked_1 = true;
    _out->arm_open = arm_open_St_4_Locked;
    nr = nr_St_4_Locked;
    ns_1 = ns_St_4_Locked_1;
  } else {
    arm_open_St_4_Open = true;
    _out->arm_open = arm_open_St_4_Open;
    nr_St_4_Open = false;
    nr = nr_St_4_Open;
    ns_St_4_Open_1 = false;
    ns_1 = ns_St_4_Open_1;
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
  
  int nr_St_5_Preent;
  int ns_St_5_Preent_1;
  int presence_St_5_Preent;
  int nr_St_5_Not_Present;
  int ns_St_5_Not_Present_1;
  int presence_St_5_Not_Present;
  int ck_6_1;
  int r_St_5_Preent;
  int s_St_5_Preent_1;
  int r_St_5_Not_Present;
  int s_St_5_Not_Present_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (arrived) {
      r_St_5_Not_Present = true;
      s_St_5_Not_Present_1 = false;
    } else {
      r_St_5_Not_Present = self->pnr;
      s_St_5_Not_Present_1 = true;
    };
    r = r_St_5_Not_Present;
    s_1 = s_St_5_Not_Present_1;
  } else {
    if (arrived) {
      r_St_5_Preent = true;
    } else {
      r_St_5_Preent = self->pnr;
    };
    r = r_St_5_Preent;
    if (arrived) {
      s_St_5_Preent_1 = true;
    } else {
      s_St_5_Preent_1 = false;
    };
    s_1 = s_St_5_Preent_1;
  };
  ck_6_1 = s_1;
  if (ck_6_1) {
    presence_St_5_Not_Present = false;
    nr_St_5_Not_Present = false;
    ns_St_5_Not_Present_1 = true;
    _out->presence = presence_St_5_Not_Present;
    nr = nr_St_5_Not_Present;
    ns_1 = ns_St_5_Not_Present_1;
  } else {
    presence_St_5_Preent = true;
    _out->presence = presence_St_5_Preent;
    nr_St_5_Preent = false;
    nr = nr_St_5_Preent;
    ns_St_5_Preent_1 = false;
    ns_1 = ns_St_5_Preent_1;
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
  
  int nr_St_6_On;
  int ns_St_6_On_1;
  int pc_on_St_6_On;
  int nr_St_6_Off;
  int ns_St_6_Off_1;
  int pc_on_St_6_Off;
  int ck_7_1;
  int v;
  int r_St_6_On;
  int s_St_6_On_1;
  int r_St_6_Off;
  int s_St_6_Off_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (c) {
      r_St_6_Off = true;
      s_St_6_Off_1 = false;
    } else {
      r_St_6_Off = self->pnr;
      s_St_6_Off_1 = true;
    };
    r = r_St_6_Off;
    s_1 = s_St_6_Off_1;
  } else {
    v = !(c);
    if (v) {
      r_St_6_On = true;
    } else {
      r_St_6_On = self->pnr;
    };
    r = r_St_6_On;
    if (v) {
      s_St_6_On_1 = true;
    } else {
      s_St_6_On_1 = false;
    };
    s_1 = s_St_6_On_1;
  };
  ck_7_1 = s_1;
  if (ck_7_1) {
    pc_on_St_6_Off = false;
    nr_St_6_Off = false;
    ns_St_6_Off_1 = true;
    _out->pc_on = pc_on_St_6_Off;
    nr = nr_St_6_Off;
    ns_1 = ns_St_6_Off_1;
  } else {
    pc_on_St_6_On = true;
    _out->pc_on = pc_on_St_6_On;
    nr_St_6_On = false;
    nr = nr_St_6_On;
    ns_St_6_On_1 = false;
    ns_1 = ns_St_6_On_1;
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
  
  int nr_St_7_Open;
  int ns_St_7_Open_1;
  int w_open_St_7_Open;
  int nr_St_7_Closed;
  int ns_St_7_Closed_1;
  int w_open_St_7_Closed;
  int ns_1;
  int r;
  int nr;
  r = self->pnr;
  if (self->ck_1) {
    w_open_St_7_Closed = false;
    nr_St_7_Closed = false;
    ns_St_7_Closed_1 = true;
    _out->w_open = w_open_St_7_Closed;
    nr = nr_St_7_Closed;
    ns_1 = ns_St_7_Closed_1;
  } else {
    w_open_St_7_Open = true;
    _out->w_open = w_open_St_7_Open;
    nr_St_7_Open = false;
    nr = nr_St_7_Open;
    ns_St_7_Open_1 = false;
    ns_1 = ns_St_7_Open_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__luzes_reset(System__luzes_mem* self) {
  self->pnr = false;
  self->v_177 = true;
  self->v_178 = false;
}

void System__luzes_step(int c1, int c2, System__luzes_out* _out,
                        System__luzes_mem* self) {
  
  int v_176;
  int v_175;
  int v_174;
  int v_173;
  int v_172;
  int v_171;
  int v_170;
  int v_169;
  int ns_St_8_All_2_0;
  int ns_St_8_All_2_1;
  int ns_St_8_Some_2_0;
  int ns_St_8_Some_2_1;
  int ns_St_8_None_2_0;
  int ns_St_8_None_2_1;
  int ck_8_2_0;
  int ck_8_2_1;
  int nr_St_8_All;
  int ns_St_8_All_2;
  int ns_St_8_All_1;
  int l_state_St_8_All;
  int nr_St_8_Some;
  int ns_St_8_Some_2;
  int ns_St_8_Some_1;
  int l_state_St_8_Some;
  int nr_St_8_None;
  int ns_St_8_None_2;
  int ns_St_8_None_1;
  int l_state_St_8_None;
  int ck_8_2;
  int ck_8_1;
  int v_26_2_0;
  int v_26_2_1;
  int v_27;
  int v_26_2;
  int v_26_1;
  int v_24_2_0;
  int v_24_2_1;
  int v_25;
  int v_24_2;
  int v_24_1;
  int v_23;
  int v_21_2_0;
  int v_21_2_1;
  int v_22;
  int v_21_2;
  int v_21_1;
  int v_20;
  int v;
  int v_184;
  int v_183;
  int v_182;
  int v_181;
  int v_180;
  int v_179;
  int s_St_8_All_2_0;
  int s_St_8_All_2_1;
  int s_St_8_Some_2_0;
  int s_St_8_Some_2_1;
  int s_St_8_None_2_0;
  int s_St_8_None_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_8_All;
  int s_St_8_All_2;
  int s_St_8_All_1;
  int r_St_8_Some;
  int s_St_8_Some_2;
  int s_St_8_Some_1;
  int r_St_8_None;
  int s_St_8_None_2;
  int s_St_8_None_1;
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
  ck_1 = self->v_177;
  ck_2 = self->v_178;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_20 = !(c2);
      if (v_20) {
        v_22 = true;
        v_21_1 = true;
        v_21_2 = false;
      } else {
        v_22 = self->pnr;
        v_21_1 = true;
        v_21_2 = true;
      };
      v = !(c1);
      if (v) {
        r_St_8_All = true;
      } else {
        r_St_8_All = v_22;
      };
      v_183 = r_St_8_All;
      if (v) {
        s_St_8_All_1 = false;
      } else {
        s_St_8_All_1 = v_21_1;
      };
      v_179 = s_St_8_All_1;
      if (v) {
        s_St_8_All_2 = false;
      } else {
        s_St_8_All_2 = v_21_2;
      };
      v_180 = s_St_8_All_2;
    } else {
      if (c2) {
        v_27 = true;
      } else {
        v_27 = self->pnr;
      };
      if (c1) {
        r_St_8_None = true;
      } else {
        r_St_8_None = v_27;
      };
      if (c2) {
        v_26_1 = true;
      } else {
        v_26_1 = true;
      };
      if (c1) {
        s_St_8_None_1 = false;
      } else {
        s_St_8_None_1 = v_26_1;
      };
      if (c2) {
        v_26_2 = true;
      } else {
        v_26_2 = false;
      };
      if (c1) {
        s_St_8_None_2 = false;
      } else {
        s_St_8_None_2 = v_26_2;
      };
      v_183 = r_St_8_None;
      v_179 = s_St_8_None_1;
      v_180 = s_St_8_None_2;
      if (v_26_1) {
        v_26_2_1 = v_26_2;
      } else {
        v_26_2_0 = v_26_2;
      };
    };
    s_1 = v_179;
    s_2 = v_180;
    r = v_183;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_184 = true;
      v_181 = true;
      v_182 = true;
    } else {
      if (c2) {
        v_25 = true;
        v_24_1 = true;
        v_24_2 = true;
      } else {
        v_25 = self->pnr;
        v_24_1 = false;
        v_24_2 = false;
      };
      v_23 = !(c1);
      if (v_23) {
        r_St_8_Some = true;
      } else {
        r_St_8_Some = v_25;
      };
      v_184 = r_St_8_Some;
      if (v_23) {
        s_St_8_Some_1 = true;
      } else {
        s_St_8_Some_1 = v_24_1;
      };
      v_181 = s_St_8_Some_1;
      if (v_23) {
        s_St_8_Some_2 = false;
      } else {
        s_St_8_Some_2 = v_24_2;
      };
      v_182 = s_St_8_Some_2;
      if (v_24_1) {
        v_24_2_1 = v_24_2;
      } else {
        v_24_2_0 = v_24_2;
      };
      if (s_St_8_Some_1) {
        s_St_8_Some_2_1 = s_St_8_Some_2;
      } else {
        s_St_8_Some_2_0 = s_St_8_Some_2;
      };
    };
    s_1 = v_181;
    s_2 = v_182;
    r = v_184;
  };
  ck_8_1 = s_1;
  ck_8_2 = s_2;
  if (ck_8_1) {
    ck_8_2_1 = ck_8_2;
    if (ck_8_2_1) {
      l_state_St_8_All = 2;
      v_169 = l_state_St_8_All;
      nr_St_8_All = false;
      v_175 = nr_St_8_All;
      ns_St_8_All_1 = true;
      v_171 = ns_St_8_All_1;
      ns_St_8_All_2 = true;
      v_172 = ns_St_8_All_2;
    } else {
      l_state_St_8_None = 0;
      nr_St_8_None = false;
      ns_St_8_None_1 = true;
      ns_St_8_None_2 = false;
      v_169 = l_state_St_8_None;
      v_175 = nr_St_8_None;
      v_171 = ns_St_8_None_1;
      v_172 = ns_St_8_None_2;
    };
    _out->l_state = v_169;
    ns_1 = v_171;
    ns_2 = v_172;
    nr = v_175;
  } else {
    ck_8_2_0 = ck_8_2;
    if (ck_8_2_0) {
      v_170 = 0;
      v_176 = true;
      v_173 = true;
      v_174 = true;
    } else {
      l_state_St_8_Some = 1;
      v_170 = l_state_St_8_Some;
      nr_St_8_Some = false;
      v_176 = nr_St_8_Some;
      ns_St_8_Some_1 = false;
      v_173 = ns_St_8_Some_1;
      ns_St_8_Some_2 = false;
      v_174 = ns_St_8_Some_2;
      if (ns_St_8_Some_1) {
        ns_St_8_Some_2_1 = ns_St_8_Some_2;
      } else {
        ns_St_8_Some_2_0 = ns_St_8_Some_2;
      };
    };
    _out->l_state = v_170;
    ns_1 = v_173;
    ns_2 = v_174;
    nr = v_176;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (ck_8_1) {
    if (ck_8_2_1) {
      if (ns_St_8_All_1) {
        ns_St_8_All_2_1 = ns_St_8_All_2;
      } else {
        ns_St_8_All_2_0 = ns_St_8_All_2;
      };
    } else {
      if (ns_St_8_None_1) {
        ns_St_8_None_2_1 = ns_St_8_None_2;
      } else {
        ns_St_8_None_2_0 = ns_St_8_None_2;
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
      if (v_21_1) {
        v_21_2_1 = v_21_2;
      } else {
        v_21_2_0 = v_21_2;
      };
      if (s_St_8_All_1) {
        s_St_8_All_2_1 = s_St_8_All_2;
      } else {
        s_St_8_All_2_0 = s_St_8_All_2;
      };
    } else {
      if (s_St_8_None_1) {
        s_St_8_None_2_1 = s_St_8_None_2;
      } else {
        s_St_8_None_2_0 = s_St_8_None_2;
      };
    };
  };
  self->pnr = nr;
  self->v_177 = ns_1;
  self->v_178 = ns_2;;
}

void System__persianas_reset(System__persianas_mem* self) {
  self->pnr = false;
  self->v_193 = false;
  self->v_194 = false;
}

void System__persianas_step(int policy, System__persianas_out* _out,
                            System__persianas_mem* self) {
  
  int v_192;
  int v_191;
  int v_190;
  int v_189;
  int v_188;
  int v_187;
  int v_186;
  int v_185;
  int ns_St_9_Down_2_0;
  int ns_St_9_Down_2_1;
  int ns_St_9_Mid_2_0;
  int ns_St_9_Mid_2_1;
  int ns_St_9_Up_2_0;
  int ns_St_9_Up_2_1;
  int ck_9_2_0;
  int ck_9_2_1;
  int nr_St_9_Down;
  int ns_St_9_Down_2;
  int ns_St_9_Down_1;
  int p_state_St_9_Down;
  int nr_St_9_Mid;
  int ns_St_9_Mid_2;
  int ns_St_9_Mid_1;
  int p_state_St_9_Mid;
  int nr_St_9_Up;
  int ns_St_9_Up_2;
  int ns_St_9_Up_1;
  int p_state_St_9_Up;
  int ck_9_2;
  int ck_9_1;
  int v_37_2_0;
  int v_37_2_1;
  int v_38;
  int v_37_2;
  int v_37_1;
  int v_36;
  int v_35;
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
  int v;
  int v_200;
  int v_199;
  int v_198;
  int v_197;
  int v_196;
  int v_195;
  int s_St_9_Down_2_0;
  int s_St_9_Down_2_1;
  int s_St_9_Mid_2_0;
  int s_St_9_Mid_2_1;
  int s_St_9_Up_2_0;
  int s_St_9_Up_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_9_Down;
  int s_St_9_Down_2;
  int s_St_9_Down_1;
  int r_St_9_Mid;
  int s_St_9_Mid_2;
  int s_St_9_Mid_1;
  int r_St_9_Up;
  int s_St_9_Up_2;
  int s_St_9_Up_1;
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
  ck_1 = self->v_193;
  ck_2 = self->v_194;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_28 = (policy==0);
      if (v_28) {
        v_30 = true;
        v_29_1 = false;
        v_29_2 = false;
      } else {
        v_30 = self->pnr;
        v_29_1 = true;
        v_29_2 = true;
      };
      v = (policy==1);
      if (v) {
        r_St_9_Down = true;
      } else {
        r_St_9_Down = v_30;
      };
      v_199 = r_St_9_Down;
      if (v) {
        s_St_9_Down_1 = true;
      } else {
        s_St_9_Down_1 = v_29_1;
      };
      v_195 = s_St_9_Down_1;
      if (v) {
        s_St_9_Down_2 = false;
      } else {
        s_St_9_Down_2 = v_29_2;
      };
      v_196 = s_St_9_Down_2;
    } else {
      v_32 = (policy==2);
      if (v_32) {
        v_34 = true;
        v_33_1 = false;
        v_33_2 = false;
      } else {
        v_34 = self->pnr;
        v_33_1 = true;
        v_33_2 = false;
      };
      v_31 = (policy==0);
      if (v_31) {
        r_St_9_Mid = true;
        s_St_9_Mid_1 = true;
        s_St_9_Mid_2 = true;
      } else {
        r_St_9_Mid = v_34;
        s_St_9_Mid_1 = v_33_1;
        s_St_9_Mid_2 = v_33_2;
      };
      v_199 = r_St_9_Mid;
      v_195 = s_St_9_Mid_1;
      v_196 = s_St_9_Mid_2;
    };
    s_1 = v_195;
    s_2 = v_196;
    r = v_199;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_200 = true;
      v_197 = true;
      v_198 = true;
    } else {
      v_36 = (policy==2);
      if (v_36) {
        v_38 = true;
        v_37_1 = true;
        v_37_2 = true;
      } else {
        v_38 = self->pnr;
        v_37_1 = false;
        v_37_2 = false;
      };
      v_35 = (policy==1);
      if (v_35) {
        r_St_9_Up = true;
      } else {
        r_St_9_Up = v_38;
      };
      v_200 = r_St_9_Up;
      if (v_35) {
        s_St_9_Up_1 = true;
      } else {
        s_St_9_Up_1 = v_37_1;
      };
      v_197 = s_St_9_Up_1;
      if (v_35) {
        s_St_9_Up_2 = false;
      } else {
        s_St_9_Up_2 = v_37_2;
      };
      v_198 = s_St_9_Up_2;
      if (v_37_1) {
        v_37_2_1 = v_37_2;
      } else {
        v_37_2_0 = v_37_2;
      };
      if (s_St_9_Up_1) {
        s_St_9_Up_2_1 = s_St_9_Up_2;
      } else {
        s_St_9_Up_2_0 = s_St_9_Up_2;
      };
    };
    s_1 = v_197;
    s_2 = v_198;
    r = v_200;
  };
  ck_9_1 = s_1;
  ck_9_2 = s_2;
  if (ck_9_1) {
    ck_9_2_1 = ck_9_2;
    if (ck_9_2_1) {
      p_state_St_9_Down = 2;
      v_185 = p_state_St_9_Down;
      nr_St_9_Down = false;
      v_191 = nr_St_9_Down;
      ns_St_9_Down_1 = true;
      v_187 = ns_St_9_Down_1;
      ns_St_9_Down_2 = true;
      v_188 = ns_St_9_Down_2;
    } else {
      p_state_St_9_Mid = 1;
      nr_St_9_Mid = false;
      ns_St_9_Mid_1 = true;
      ns_St_9_Mid_2 = false;
      v_185 = p_state_St_9_Mid;
      v_191 = nr_St_9_Mid;
      v_187 = ns_St_9_Mid_1;
      v_188 = ns_St_9_Mid_2;
    };
    _out->p_state = v_185;
    ns_1 = v_187;
    ns_2 = v_188;
    nr = v_191;
  } else {
    ck_9_2_0 = ck_9_2;
    if (ck_9_2_0) {
      v_186 = 0;
      v_192 = true;
      v_189 = true;
      v_190 = true;
    } else {
      p_state_St_9_Up = 0;
      v_186 = p_state_St_9_Up;
      nr_St_9_Up = false;
      v_192 = nr_St_9_Up;
      ns_St_9_Up_1 = false;
      v_189 = ns_St_9_Up_1;
      ns_St_9_Up_2 = false;
      v_190 = ns_St_9_Up_2;
      if (ns_St_9_Up_1) {
        ns_St_9_Up_2_1 = ns_St_9_Up_2;
      } else {
        ns_St_9_Up_2_0 = ns_St_9_Up_2;
      };
    };
    _out->p_state = v_186;
    ns_1 = v_189;
    ns_2 = v_190;
    nr = v_192;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (ck_9_1) {
    if (ck_9_2_1) {
      if (ns_St_9_Down_1) {
        ns_St_9_Down_2_1 = ns_St_9_Down_2;
      } else {
        ns_St_9_Down_2_0 = ns_St_9_Down_2;
      };
    } else {
      if (ns_St_9_Mid_1) {
        ns_St_9_Mid_2_1 = ns_St_9_Mid_2;
      } else {
        ns_St_9_Mid_2_0 = ns_St_9_Mid_2;
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
      if (v_29_1) {
        v_29_2_1 = v_29_2;
      } else {
        v_29_2_0 = v_29_2;
      };
      if (s_St_9_Down_1) {
        s_St_9_Down_2_1 = s_St_9_Down_2;
      } else {
        s_St_9_Down_2_0 = s_St_9_Down_2;
      };
    } else {
      if (v_33_1) {
        v_33_2_1 = v_33_2;
      } else {
        v_33_2_0 = v_33_2;
      };
      if (s_St_9_Mid_1) {
        s_St_9_Mid_2_1 = s_St_9_Mid_2;
      } else {
        s_St_9_Mid_2_0 = s_St_9_Mid_2;
      };
    };
  };
  self->pnr = nr;
  self->v_193 = ns_1;
  self->v_194 = ns_2;;
}

void System__ar_condicionado_reset(System__ar_condicionado_mem* self) {
  self->pnr = false;
  self->v_209 = false;
  self->v_210 = false;
}

void System__ar_condicionado_step(int c1, int c2,
                                  System__ar_condicionado_out* _out,
                                  System__ar_condicionado_mem* self) {
  
  int v_208;
  int v_207;
  int v_206;
  int v_205;
  int v_204;
  int v_203;
  int v_202;
  int v_201;
  int ns_St_10_Max_2_0;
  int ns_St_10_Max_2_1;
  int ns_St_10_Min_2_0;
  int ns_St_10_Min_2_1;
  int ns_St_10_Off_2_0;
  int ns_St_10_Off_2_1;
  int ck_10_2_0;
  int ck_10_2_1;
  int nr_St_10_Max;
  int ns_St_10_Max_2;
  int ns_St_10_Max_1;
  int ar_state_St_10_Max;
  int nr_St_10_Min;
  int ns_St_10_Min_2;
  int ns_St_10_Min_1;
  int ar_state_St_10_Min;
  int nr_St_10_Off;
  int ns_St_10_Off_2;
  int ns_St_10_Off_1;
  int ar_state_St_10_Off;
  int ck_10_2;
  int ck_10_1;
  int v_45_2_0;
  int v_45_2_1;
  int v_46;
  int v_45_2;
  int v_45_1;
  int v_43_2_0;
  int v_43_2_1;
  int v_44;
  int v_43_2;
  int v_43_1;
  int v_42;
  int v_40_2_0;
  int v_40_2_1;
  int v_41;
  int v_40_2;
  int v_40_1;
  int v_39;
  int v;
  int v_216;
  int v_215;
  int v_214;
  int v_213;
  int v_212;
  int v_211;
  int s_St_10_Max_2_0;
  int s_St_10_Max_2_1;
  int s_St_10_Min_2_0;
  int s_St_10_Min_2_1;
  int s_St_10_Off_2_0;
  int s_St_10_Off_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_10_Max;
  int s_St_10_Max_2;
  int s_St_10_Max_1;
  int r_St_10_Min;
  int s_St_10_Min_2;
  int s_St_10_Min_1;
  int r_St_10_Off;
  int s_St_10_Off_2;
  int s_St_10_Off_1;
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
  ck_1 = self->v_209;
  ck_2 = self->v_210;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_39 = !(c2);
      if (v_39) {
        v_41 = true;
        v_40_1 = false;
        v_40_2 = false;
      } else {
        v_41 = self->pnr;
        v_40_1 = true;
        v_40_2 = true;
      };
      v = !(c1);
      if (v) {
        r_St_10_Max = true;
      } else {
        r_St_10_Max = v_41;
      };
      v_215 = r_St_10_Max;
      if (v) {
        s_St_10_Max_1 = true;
      } else {
        s_St_10_Max_1 = v_40_1;
      };
      v_211 = s_St_10_Max_1;
      if (v) {
        s_St_10_Max_2 = false;
      } else {
        s_St_10_Max_2 = v_40_2;
      };
      v_212 = s_St_10_Max_2;
    } else {
      if (c2) {
        v_44 = true;
        v_43_1 = true;
        v_43_2 = true;
      } else {
        v_44 = self->pnr;
        v_43_1 = true;
        v_43_2 = false;
      };
      v_42 = !(c1);
      if (v_42) {
        r_St_10_Min = true;
        s_St_10_Min_1 = false;
        s_St_10_Min_2 = false;
      } else {
        r_St_10_Min = v_44;
        s_St_10_Min_1 = v_43_1;
        s_St_10_Min_2 = v_43_2;
      };
      v_215 = r_St_10_Min;
      v_211 = s_St_10_Min_1;
      v_212 = s_St_10_Min_2;
    };
    s_1 = v_211;
    s_2 = v_212;
    r = v_215;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_216 = true;
      v_213 = true;
      v_214 = true;
    } else {
      if (c2) {
        v_46 = true;
      } else {
        v_46 = self->pnr;
      };
      if (c1) {
        r_St_10_Off = true;
      } else {
        r_St_10_Off = v_46;
      };
      v_216 = r_St_10_Off;
      if (c2) {
        v_45_1 = true;
      } else {
        v_45_1 = false;
      };
      if (c1) {
        s_St_10_Off_1 = true;
      } else {
        s_St_10_Off_1 = v_45_1;
      };
      v_213 = s_St_10_Off_1;
      if (c2) {
        v_45_2 = true;
      } else {
        v_45_2 = false;
      };
      if (c1) {
        s_St_10_Off_2 = false;
      } else {
        s_St_10_Off_2 = v_45_2;
      };
      v_214 = s_St_10_Off_2;
      if (v_45_1) {
        v_45_2_1 = v_45_2;
      } else {
        v_45_2_0 = v_45_2;
      };
      if (s_St_10_Off_1) {
        s_St_10_Off_2_1 = s_St_10_Off_2;
      } else {
        s_St_10_Off_2_0 = s_St_10_Off_2;
      };
    };
    s_1 = v_213;
    s_2 = v_214;
    r = v_216;
  };
  ck_10_1 = s_1;
  ck_10_2 = s_2;
  if (ck_10_1) {
    ck_10_2_1 = ck_10_2;
    if (ck_10_2_1) {
      ar_state_St_10_Max = 2;
      v_201 = ar_state_St_10_Max;
      nr_St_10_Max = false;
      v_207 = nr_St_10_Max;
      ns_St_10_Max_1 = true;
      v_203 = ns_St_10_Max_1;
      ns_St_10_Max_2 = true;
      v_204 = ns_St_10_Max_2;
    } else {
      ar_state_St_10_Min = 1;
      nr_St_10_Min = false;
      ns_St_10_Min_1 = true;
      ns_St_10_Min_2 = false;
      v_201 = ar_state_St_10_Min;
      v_207 = nr_St_10_Min;
      v_203 = ns_St_10_Min_1;
      v_204 = ns_St_10_Min_2;
    };
    _out->ar_state = v_201;
    ns_1 = v_203;
    ns_2 = v_204;
    nr = v_207;
  } else {
    ck_10_2_0 = ck_10_2;
    if (ck_10_2_0) {
      v_202 = 0;
      v_208 = true;
      v_205 = true;
      v_206 = true;
    } else {
      ar_state_St_10_Off = 0;
      v_202 = ar_state_St_10_Off;
      nr_St_10_Off = false;
      v_208 = nr_St_10_Off;
      ns_St_10_Off_1 = false;
      v_205 = ns_St_10_Off_1;
      ns_St_10_Off_2 = false;
      v_206 = ns_St_10_Off_2;
      if (ns_St_10_Off_1) {
        ns_St_10_Off_2_1 = ns_St_10_Off_2;
      } else {
        ns_St_10_Off_2_0 = ns_St_10_Off_2;
      };
    };
    _out->ar_state = v_202;
    ns_1 = v_205;
    ns_2 = v_206;
    nr = v_208;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (ck_10_1) {
    if (ck_10_2_1) {
      if (ns_St_10_Max_1) {
        ns_St_10_Max_2_1 = ns_St_10_Max_2;
      } else {
        ns_St_10_Max_2_0 = ns_St_10_Max_2;
      };
    } else {
      if (ns_St_10_Min_1) {
        ns_St_10_Min_2_1 = ns_St_10_Min_2;
      } else {
        ns_St_10_Min_2_0 = ns_St_10_Min_2;
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
      if (v_40_1) {
        v_40_2_1 = v_40_2;
      } else {
        v_40_2_0 = v_40_2;
      };
      if (s_St_10_Max_1) {
        s_St_10_Max_2_1 = s_St_10_Max_2;
      } else {
        s_St_10_Max_2_0 = s_St_10_Max_2;
      };
    } else {
      if (v_43_1) {
        v_43_2_1 = v_43_2;
      } else {
        v_43_2_0 = v_43_2;
      };
      if (s_St_10_Min_1) {
        s_St_10_Min_2_1 = s_St_10_Min_2;
      } else {
        s_St_10_Min_2_0 = s_St_10_Min_2;
      };
    };
  };
  self->pnr = nr;
  self->v_209 = ns_1;
  self->v_210 = ns_2;;
}

void System__turno_reset(System__turno_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void System__turno_step(int shift, System__turno_out* _out,
                        System__turno_mem* self) {
  
  int nr_St_11_Noite;
  int ns_St_11_Noite_1;
  int turno_St_11_Noite;
  int nr_St_11_Dia;
  int ns_St_11_Dia_1;
  int turno_St_11_Dia;
  int ck_11_1;
  int r_St_11_Noite;
  int s_St_11_Noite_1;
  int r_St_11_Dia;
  int s_St_11_Dia_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (shift) {
      r_St_11_Dia = true;
      s_St_11_Dia_1 = false;
    } else {
      r_St_11_Dia = self->pnr;
      s_St_11_Dia_1 = true;
    };
    r = r_St_11_Dia;
    s_1 = s_St_11_Dia_1;
  } else {
    if (shift) {
      r_St_11_Noite = true;
    } else {
      r_St_11_Noite = self->pnr;
    };
    r = r_St_11_Noite;
    if (shift) {
      s_St_11_Noite_1 = true;
    } else {
      s_St_11_Noite_1 = false;
    };
    s_1 = s_St_11_Noite_1;
  };
  ck_11_1 = s_1;
  if (ck_11_1) {
    turno_St_11_Dia = false;
    nr_St_11_Dia = false;
    ns_St_11_Dia_1 = true;
    _out->turno = turno_St_11_Dia;
    nr = nr_St_11_Dia;
    ns_1 = ns_St_11_Dia_1;
  } else {
    turno_St_11_Noite = true;
    _out->turno = turno_St_11_Noite;
    nr_St_11_Noite = false;
    nr = nr_St_11_Noite;
    ns_St_11_Noite_1 = false;
    ns_1 = ns_St_11_Noite_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void System__controller_reset(System__controller_mem* self) {
  self->pnr = false;
  self->v_229 = false;
  self->v_230 = false;
  self->pnr_1 = false;
  self->v_245 = false;
  self->v_246 = false;
  self->pnr_2 = false;
  self->ck_25_1 = true;
  self->pnr_3 = false;
  self->ck_23_1 = true;
  self->pnr_4 = false;
  self->ck_21_1 = true;
  self->pnr_5 = false;
  self->ck_19_1 = true;
  self->pnr_6 = false;
  self->ck_17_1 = true;
  self->pnr_7 = false;
  self->ck_15_1 = true;
  self->pnr_8 = false;
  self->ck_13_1 = true;
  self->pnr_9 = false;
  self->ck_1 = true;
}

void System__controller_step(int shift_turno, int abre_porta, int p_arrived,
                             int p1_arrived, int ilumination_up,
                             int ilumination_down,
                             System__controller_out* _out,
                             System__controller_mem* self) {
  Controller_controller__controller_controller_out Controller_controller__controller_controller_out_st;
  
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
  int ns_St_12_Artificial_2_0;
  int ns_St_12_Artificial_2_1;
  int ns_St_12_Half_2_0;
  int ns_St_12_Half_2_1;
  int ns_St_12_Natural_2_0;
  int ns_St_12_Natural_2_1;
  int ck_29_2_0;
  int ck_29_2_1;
  int nr_St_12_Artificial;
  int ns_St_12_Artificial_2;
  int ns_St_12_Artificial_1;
  int policy_1_St_12_Artificial;
  int p_state_St_12_Artificial;
  int l_state_St_12_Artificial;
  int nr_St_12_Half;
  int ns_St_12_Half_2;
  int ns_St_12_Half_1;
  int policy_1_St_12_Half;
  int p_state_St_12_Half;
  int l_state_St_12_Half;
  int nr_St_12_Natural;
  int ns_St_12_Natural_2;
  int ns_St_12_Natural_1;
  int policy_1_St_12_Natural;
  int p_state_St_12_Natural;
  int l_state_St_12_Natural;
  int ck_29_2;
  int ck_29_1;
  int v_129_2_0;
  int v_129_2_1;
  int v_130;
  int v_129_2;
  int v_129_1;
  int v_128;
  int v_127;
  int v_125_2_0;
  int v_125_2_1;
  int v_123_2_0;
  int v_123_2_1;
  int v_126;
  int v_125_2;
  int v_125_1;
  int v_124;
  int v_123_2;
  int v_123_1;
  int v_122;
  int v_121;
  int v_120;
  int v_118_2_0;
  int v_118_2_1;
  int v_119;
  int v_118_2;
  int v_118_1;
  int v_117;
  int v_116;
  int v_236;
  int v_235;
  int v_234;
  int v_233;
  int v_232;
  int v_231;
  int s_St_12_Artificial_2_0;
  int s_St_12_Artificial_2_1;
  int s_St_12_Half_2_0;
  int s_St_12_Half_2_1;
  int s_St_12_Natural_2_0;
  int s_St_12_Natural_2_1;
  int ck_28_2_0;
  int ck_28_2_1;
  int r_St_12_Artificial;
  int s_St_12_Artificial_2;
  int s_St_12_Artificial_1;
  int r_St_12_Half;
  int s_St_12_Half_2;
  int s_St_12_Half_1;
  int r_St_12_Natural;
  int s_St_12_Natural_2;
  int s_St_12_Natural_1;
  int ck_28_2;
  int ck_28_1;
  int v_244;
  int v_243;
  int v_242;
  int v_241;
  int v_240;
  int v_239;
  int v_238;
  int v_237;
  int ns_1_St_13_Max_2_0;
  int ns_1_St_13_Max_2_1;
  int ns_1_St_13_Min_2_0;
  int ns_1_St_13_Min_2_1;
  int ns_1_St_13_Off_2_0;
  int ns_1_St_13_Off_2_1;
  int ck_27_2_0;
  int ck_27_2_1;
  int nr_1_St_13_Max;
  int ns_1_St_13_Max_2;
  int ns_1_St_13_Max_1;
  int ar_state_1_St_13_Max;
  int nr_1_St_13_Min;
  int ns_1_St_13_Min_2;
  int ns_1_St_13_Min_1;
  int ar_state_1_St_13_Min;
  int nr_1_St_13_Off;
  int ns_1_St_13_Off_2;
  int ns_1_St_13_Off_1;
  int ar_state_1_St_13_Off;
  int ck_27_2;
  int ck_27_1;
  int v_114_2_0;
  int v_114_2_1;
  int v_115;
  int v_114_2;
  int v_114_1;
  int v_112_2_0;
  int v_112_2_1;
  int v_113;
  int v_112_2;
  int v_112_1;
  int v_111;
  int v_109_2_0;
  int v_109_2_1;
  int v_110;
  int v_109_2;
  int v_109_1;
  int v_108;
  int v_107;
  int v_252;
  int v_251;
  int v_250;
  int v_249;
  int v_248;
  int v_247;
  int s_1_St_13_Max_2_0;
  int s_1_St_13_Max_2_1;
  int s_1_St_13_Min_2_0;
  int s_1_St_13_Min_2_1;
  int s_1_St_13_Off_2_0;
  int s_1_St_13_Off_2_1;
  int ck_26_2_0;
  int ck_26_2_1;
  int r_1_St_13_Max;
  int s_1_St_13_Max_2;
  int s_1_St_13_Max_1;
  int r_1_St_13_Min;
  int s_1_St_13_Min_2;
  int s_1_St_13_Min_1;
  int r_1_St_13_Off;
  int s_1_St_13_Off_2;
  int s_1_St_13_Off_1;
  int ck_26_2;
  int ck_26_1;
  int nr_2_St_14_Open;
  int ns_2_St_14_Open_1;
  int w_open_1_St_14_Open;
  int nr_2_St_14_Closed;
  int ns_2_St_14_Closed_1;
  int w_open_1_St_14_Closed;
  int nr_3_St_15_On;
  int ns_3_St_15_On_1;
  int pc_on_1_St_15_On;
  int nr_3_St_15_Off;
  int ns_3_St_15_Off_1;
  int pc_on_1_St_15_Off;
  int ck_24_1;
  int v_106;
  int r_3_St_15_On;
  int s_3_St_15_On_1;
  int r_3_St_15_Off;
  int s_3_St_15_Off_1;
  int nr_4_St_16_Preent;
  int ns_4_St_16_Preent_1;
  int presence_2_St_16_Preent;
  int nr_4_St_16_Not_Present;
  int ns_4_St_16_Not_Present_1;
  int presence_2_St_16_Not_Present;
  int ck_22_1;
  int r_4_St_16_Preent;
  int s_4_St_16_Preent_1;
  int r_4_St_16_Not_Present;
  int s_4_St_16_Not_Present_1;
  int nr_5_St_17_Preent;
  int ns_5_St_17_Preent_1;
  int presence_1_St_17_Preent;
  int nr_5_St_17_Not_Present;
  int ns_5_St_17_Not_Present_1;
  int presence_1_St_17_Not_Present;
  int ck_20_1;
  int r_5_St_17_Preent;
  int s_5_St_17_Preent_1;
  int r_5_St_17_Not_Present;
  int s_5_St_17_Not_Present_1;
  int nr_6_St_18_Open;
  int ns_6_St_18_Open_1;
  int arm_open_1_St_18_Open;
  int nr_6_St_18_Locked;
  int ns_6_St_18_Locked_1;
  int arm_open_1_St_18_Locked;
  int ck_18_1;
  int v_105;
  int r_6_St_18_Open;
  int s_6_St_18_Open_1;
  int r_6_St_18_Locked;
  int s_6_St_18_Locked_1;
  int nr_7_St_19_On;
  int ns_7_St_19_On_1;
  int r_on_St_19_On;
  int nr_7_St_19_Off;
  int ns_7_St_19_Off_1;
  int r_on_St_19_Off;
  int ck_16_1;
  int v_104;
  int r_7_St_19_On;
  int s_7_St_19_On_1;
  int r_7_St_19_Off;
  int s_7_St_19_Off_1;
  int nr_8_St_20_Open;
  int ns_8_St_20_Open_1;
  int porta_open_St_20_Open;
  int nr_8_St_20_Closed;
  int ns_8_St_20_Closed_1;
  int porta_open_St_20_Closed;
  int ck_14_1;
  int v_103;
  int r_8_St_20_Open;
  int s_8_St_20_Open_1;
  int r_8_St_20_Closed;
  int s_8_St_20_Closed_1;
  int nr_9_St_21_Noite;
  int ns_9_St_21_Noite_1;
  int turno_St_21_Noite;
  int nr_9_St_21_Dia;
  int ns_9_St_21_Dia_1;
  int turno_St_21_Dia;
  int ck_12_1;
  int r_9_St_21_Noite;
  int s_9_St_21_Noite_1;
  int r_9_St_21_Dia;
  int s_9_St_21_Dia_1;
  int s_1_2_0;
  int s_1_2_1;
  int ns_1_2_0;
  int ns_1_2_1;
  int s_2_1_0;
  int s_2_1_1;
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
  int ns_2_1;
  int r_2;
  int nr_2;
  int s_1_2;
  int s_1_1;
  int ns_1_2;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_2_1;
  int s_1_3;
  int ns_2_2;
  int ns_1_3;
  int r;
  int nr;
  int up;
  int down;
  int night_1;
  int l_state;
  int p_state;
  int policy_1;
  int c1;
  int c2;
  int ar_state_1;
  int c_3;
  int w_open_1;
  int c_2;
  int pc_on_1;
  int arrived_1;
  int presence_2;
  int arrived;
  int presence_1;
  int c_1;
  int arm_open_1;
  int c;
  int r_on;
  int push;
  int c_porta_1;
  int porta_open;
  int shift;
  int turno;
  int rule6;
  int rule5;
  int rule4;
  int rule3;
  int rule2;
  int rule1;
  int v;
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
  int c_policy;
  int c_arm;
  int c_ar2;
  int c_ar1;
  int c_luz2;
  int c_luz1;
  int c_jan;
  int c_pc;
  int c_rot;
  int c_porta;
  up = ilumination_up;
  down = ilumination_down;
  ck_28_1 = self->v_229;
  ck_28_2 = self->v_230;
  ck_26_1 = self->v_245;
  ck_26_2 = self->v_246;
  r_2 = self->pnr_2;
  arrived_1 = p1_arrived;
  arrived = p_arrived;
  push = abre_porta;
  shift = shift_turno;
  Controller_controller__controller_controller_step(shift_turno, abre_porta,
                                                    p_arrived, p1_arrived,
                                                    ilumination_up,
                                                    ilumination_down,
                                                    self->ck_1, self->pnr_9,
                                                    self->ck_13_1,
                                                    self->pnr_8,
                                                    self->ck_15_1,
                                                    self->pnr_7,
                                                    self->ck_17_1,
                                                    self->pnr_6,
                                                    self->ck_19_1,
                                                    self->pnr_5,
                                                    self->ck_21_1,
                                                    self->pnr_4,
                                                    self->ck_23_1,
                                                    self->pnr_3,
                                                    self->ck_25_1,
                                                    self->pnr_2, self->v_246,
                                                    self->v_245, self->pnr_1,
                                                    self->v_230, self->v_229,
                                                    self->pnr, true, true,
                                                    true, true, true, true,
                                                    true, true, true, true,
                                                    &Controller_controller__controller_controller_out_st);
  c_policy = Controller_controller__controller_controller_out_st.controller_c_policy;
  c_arm = Controller_controller__controller_controller_out_st.controller_c_arm;
  c_ar2 = Controller_controller__controller_controller_out_st.controller_c_ar2;
  c_ar1 = Controller_controller__controller_controller_out_st.controller_c_ar1;
  c_luz2 = Controller_controller__controller_controller_out_st.controller_c_luz2;
  c_luz1 = Controller_controller__controller_controller_out_st.controller_c_luz1;
  c_jan = Controller_controller__controller_controller_out_st.controller_c_jan;
  c_pc = Controller_controller__controller_controller_out_st.controller_c_pc;
  c_rot = Controller_controller__controller_controller_out_st.controller_c_rot;
  c_porta = Controller_controller__controller_controller_out_st.controller_c_porta;
  night_1 = c_policy;
  c1 = c_ar1;
  c2 = c_ar2;
  c_3 = c_jan;
  c_2 = c_pc;
  c_1 = c_arm;
  c = c_rot;
  c_porta_1 = c_porta;
  if (ck_28_1) {
    ck_28_2_1 = ck_28_2;
    if (ck_28_2_1) {
      v_117 = !(night_1);
      if (v_117) {
        v_119 = true;
        v_118_1 = false;
        v_118_2 = false;
      } else {
        v_119 = self->pnr;
        v_118_1 = true;
        v_118_2 = true;
      };
      v_116 = (down&&night_1);
      if (v_116) {
        r_St_12_Artificial = true;
      } else {
        r_St_12_Artificial = v_119;
      };
      v_235 = r_St_12_Artificial;
      if (v_116) {
        s_St_12_Artificial_1 = true;
      } else {
        s_St_12_Artificial_1 = v_118_1;
      };
      v_231 = s_St_12_Artificial_1;
      if (v_116) {
        s_St_12_Artificial_2 = false;
      } else {
        s_St_12_Artificial_2 = v_118_2;
      };
      v_232 = s_St_12_Artificial_2;
    } else {
      v_122 = (down&&night_1);
      if (v_122) {
        v_124 = true;
        v_123_1 = false;
        v_123_2 = false;
      } else {
        v_124 = self->pnr;
        v_123_1 = true;
        v_123_2 = false;
      };
      v_121 = !(night_1);
      if (v_121) {
        v_126 = true;
        v_125_1 = true;
        v_125_2 = true;
      } else {
        v_126 = v_124;
        v_125_1 = v_123_1;
        v_125_2 = v_123_2;
      };
      v_120 = (up&&night_1);
      if (v_120) {
        r_St_12_Half = true;
        s_St_12_Half_1 = true;
        s_St_12_Half_2 = true;
      } else {
        r_St_12_Half = v_126;
        s_St_12_Half_1 = v_125_1;
        s_St_12_Half_2 = v_125_2;
      };
      v_235 = r_St_12_Half;
      v_231 = s_St_12_Half_1;
      v_232 = s_St_12_Half_2;
    };
    s_1_3 = v_231;
    s_2_1 = v_232;
    r = v_235;
  } else {
    ck_28_2_0 = ck_28_2;
    if (ck_28_2_0) {
      v_236 = true;
      v_233 = true;
      v_234 = true;
    } else {
      v_128 = !(night_1);
      if (v_128) {
        v_130 = true;
        v_129_1 = true;
        v_129_2 = true;
      } else {
        v_130 = self->pnr;
        v_129_1 = false;
        v_129_2 = false;
      };
      v_127 = (up&&night_1);
      if (v_127) {
        r_St_12_Natural = true;
      } else {
        r_St_12_Natural = v_130;
      };
      v_236 = r_St_12_Natural;
      if (v_127) {
        s_St_12_Natural_1 = true;
      } else {
        s_St_12_Natural_1 = v_129_1;
      };
      v_233 = s_St_12_Natural_1;
      if (v_127) {
        s_St_12_Natural_2 = false;
      } else {
        s_St_12_Natural_2 = v_129_2;
      };
      v_234 = s_St_12_Natural_2;
      if (v_129_1) {
        v_129_2_1 = v_129_2;
      } else {
        v_129_2_0 = v_129_2;
      };
      if (s_St_12_Natural_1) {
        s_St_12_Natural_2_1 = s_St_12_Natural_2;
      } else {
        s_St_12_Natural_2_0 = s_St_12_Natural_2;
      };
    };
    s_1_3 = v_233;
    s_2_1 = v_234;
    r = v_236;
  };
  ck_29_1 = s_1_3;
  ck_29_2 = s_2_1;
  if (ck_29_1) {
    ck_29_2_1 = ck_29_2;
    if (ck_29_2_1) {
      l_state_St_12_Artificial = 2;
      v_217 = l_state_St_12_Artificial;
      p_state_St_12_Artificial = 2;
      v_219 = p_state_St_12_Artificial;
      policy_1_St_12_Artificial = 3;
      v_221 = policy_1_St_12_Artificial;
      nr_St_12_Artificial = false;
      v_227 = nr_St_12_Artificial;
      ns_St_12_Artificial_1 = true;
      v_223 = ns_St_12_Artificial_1;
      ns_St_12_Artificial_2 = true;
      v_224 = ns_St_12_Artificial_2;
    } else {
      l_state_St_12_Half = 1;
      p_state_St_12_Half = 1;
      policy_1_St_12_Half = 2;
      nr_St_12_Half = false;
      ns_St_12_Half_1 = true;
      ns_St_12_Half_2 = false;
      v_217 = l_state_St_12_Half;
      v_219 = p_state_St_12_Half;
      v_221 = policy_1_St_12_Half;
      v_227 = nr_St_12_Half;
      v_223 = ns_St_12_Half_1;
      v_224 = ns_St_12_Half_2;
    };
    l_state = v_217;
    p_state = v_219;
    policy_1 = v_221;
    ns_1_3 = v_223;
    ns_2_2 = v_224;
    nr = v_227;
  } else {
    ck_29_2_0 = ck_29_2;
    if (ck_29_2_0) {
      v_218 = 0;
      v_220 = 0;
      v_222 = 0;
      v_228 = true;
      v_225 = true;
      v_226 = true;
    } else {
      l_state_St_12_Natural = 0;
      v_218 = l_state_St_12_Natural;
      p_state_St_12_Natural = 0;
      v_220 = p_state_St_12_Natural;
      policy_1_St_12_Natural = 1;
      v_222 = policy_1_St_12_Natural;
      nr_St_12_Natural = false;
      v_228 = nr_St_12_Natural;
      ns_St_12_Natural_1 = false;
      v_225 = ns_St_12_Natural_1;
      ns_St_12_Natural_2 = false;
      v_226 = ns_St_12_Natural_2;
      if (ns_St_12_Natural_1) {
        ns_St_12_Natural_2_1 = ns_St_12_Natural_2;
      } else {
        ns_St_12_Natural_2_0 = ns_St_12_Natural_2;
      };
    };
    l_state = v_218;
    p_state = v_220;
    policy_1 = v_222;
    ns_1_3 = v_225;
    ns_2_2 = v_226;
    nr = v_228;
  };
  _out->policy = policy_1;
  v_96 = (_out->policy==3);
  _out->persiana = p_state;
  _out->lampada = l_state;
  if (ns_1_3) {
    ns_2_2_1 = ns_2_2;
  } else {
    ns_2_2_0 = ns_2_2;
  };
  if (ck_29_1) {
    if (ck_29_2_1) {
      if (ns_St_12_Artificial_1) {
        ns_St_12_Artificial_2_1 = ns_St_12_Artificial_2;
      } else {
        ns_St_12_Artificial_2_0 = ns_St_12_Artificial_2;
      };
    } else {
      if (ns_St_12_Half_1) {
        ns_St_12_Half_2_1 = ns_St_12_Half_2;
      } else {
        ns_St_12_Half_2_0 = ns_St_12_Half_2;
      };
    };
  };
  if (s_1_3) {
    s_2_1_1 = s_2_1;
  } else {
    s_2_1_0 = s_2_1;
  };
  if (ck_28_1) {
    if (ck_28_2_1) {
      if (v_118_1) {
        v_118_2_1 = v_118_2;
      } else {
        v_118_2_0 = v_118_2;
      };
      if (s_St_12_Artificial_1) {
        s_St_12_Artificial_2_1 = s_St_12_Artificial_2;
      } else {
        s_St_12_Artificial_2_0 = s_St_12_Artificial_2;
      };
    } else {
      if (v_123_1) {
        v_123_2_1 = v_123_2;
      } else {
        v_123_2_0 = v_123_2;
      };
      if (v_125_1) {
        v_125_2_1 = v_125_2;
      } else {
        v_125_2_0 = v_125_2;
      };
      if (s_St_12_Half_1) {
        s_St_12_Half_2_1 = s_St_12_Half_2;
      } else {
        s_St_12_Half_2_0 = s_St_12_Half_2;
      };
    };
  };
  if (ck_26_1) {
    ck_26_2_1 = ck_26_2;
    if (ck_26_2_1) {
      v_108 = !(c2);
      if (v_108) {
        v_110 = true;
        v_109_1 = false;
        v_109_2 = false;
      } else {
        v_110 = self->pnr_1;
        v_109_1 = true;
        v_109_2 = true;
      };
      v_107 = !(c1);
      if (v_107) {
        r_1_St_13_Max = true;
      } else {
        r_1_St_13_Max = v_110;
      };
      v_251 = r_1_St_13_Max;
      if (v_107) {
        s_1_St_13_Max_1 = true;
      } else {
        s_1_St_13_Max_1 = v_109_1;
      };
      v_247 = s_1_St_13_Max_1;
      if (v_107) {
        s_1_St_13_Max_2 = false;
      } else {
        s_1_St_13_Max_2 = v_109_2;
      };
      v_248 = s_1_St_13_Max_2;
    } else {
      if (c2) {
        v_113 = true;
        v_112_1 = true;
        v_112_2 = true;
      } else {
        v_113 = self->pnr_1;
        v_112_1 = true;
        v_112_2 = false;
      };
      v_111 = !(c1);
      if (v_111) {
        r_1_St_13_Min = true;
        s_1_St_13_Min_1 = false;
        s_1_St_13_Min_2 = false;
      } else {
        r_1_St_13_Min = v_113;
        s_1_St_13_Min_1 = v_112_1;
        s_1_St_13_Min_2 = v_112_2;
      };
      v_251 = r_1_St_13_Min;
      v_247 = s_1_St_13_Min_1;
      v_248 = s_1_St_13_Min_2;
    };
    s_1_1 = v_247;
    s_1_2 = v_248;
    r_1 = v_251;
  } else {
    ck_26_2_0 = ck_26_2;
    if (ck_26_2_0) {
      v_252 = true;
      v_249 = true;
      v_250 = true;
    } else {
      if (c2) {
        v_115 = true;
      } else {
        v_115 = self->pnr_1;
      };
      if (c1) {
        r_1_St_13_Off = true;
      } else {
        r_1_St_13_Off = v_115;
      };
      v_252 = r_1_St_13_Off;
      if (c2) {
        v_114_1 = true;
      } else {
        v_114_1 = false;
      };
      if (c1) {
        s_1_St_13_Off_1 = true;
      } else {
        s_1_St_13_Off_1 = v_114_1;
      };
      v_249 = s_1_St_13_Off_1;
      if (c2) {
        v_114_2 = true;
      } else {
        v_114_2 = false;
      };
      if (c1) {
        s_1_St_13_Off_2 = false;
      } else {
        s_1_St_13_Off_2 = v_114_2;
      };
      v_250 = s_1_St_13_Off_2;
      if (v_114_1) {
        v_114_2_1 = v_114_2;
      } else {
        v_114_2_0 = v_114_2;
      };
      if (s_1_St_13_Off_1) {
        s_1_St_13_Off_2_1 = s_1_St_13_Off_2;
      } else {
        s_1_St_13_Off_2_0 = s_1_St_13_Off_2;
      };
    };
    s_1_1 = v_249;
    s_1_2 = v_250;
    r_1 = v_252;
  };
  ck_27_1 = s_1_1;
  ck_27_2 = s_1_2;
  if (ck_27_1) {
    ck_27_2_1 = ck_27_2;
    if (ck_27_2_1) {
      ar_state_1_St_13_Max = 2;
      v_237 = ar_state_1_St_13_Max;
      nr_1_St_13_Max = false;
      v_243 = nr_1_St_13_Max;
      ns_1_St_13_Max_1 = true;
      v_239 = ns_1_St_13_Max_1;
      ns_1_St_13_Max_2 = true;
      v_240 = ns_1_St_13_Max_2;
    } else {
      ar_state_1_St_13_Min = 1;
      nr_1_St_13_Min = false;
      ns_1_St_13_Min_1 = true;
      ns_1_St_13_Min_2 = false;
      v_237 = ar_state_1_St_13_Min;
      v_243 = nr_1_St_13_Min;
      v_239 = ns_1_St_13_Min_1;
      v_240 = ns_1_St_13_Min_2;
    };
    ar_state_1 = v_237;
    ns_1_1 = v_239;
    ns_1_2 = v_240;
    nr_1 = v_243;
  } else {
    ck_27_2_0 = ck_27_2;
    if (ck_27_2_0) {
      v_238 = 0;
      v_244 = true;
      v_241 = true;
      v_242 = true;
    } else {
      ar_state_1_St_13_Off = 0;
      v_238 = ar_state_1_St_13_Off;
      nr_1_St_13_Off = false;
      v_244 = nr_1_St_13_Off;
      ns_1_St_13_Off_1 = false;
      v_241 = ns_1_St_13_Off_1;
      ns_1_St_13_Off_2 = false;
      v_242 = ns_1_St_13_Off_2;
      if (ns_1_St_13_Off_1) {
        ns_1_St_13_Off_2_1 = ns_1_St_13_Off_2;
      } else {
        ns_1_St_13_Off_2_0 = ns_1_St_13_Off_2;
      };
    };
    ar_state_1 = v_238;
    ns_1_1 = v_241;
    ns_1_2 = v_242;
    nr_1 = v_244;
  };
  _out->ar_state = ar_state_1;
  v_52 = (_out->ar_state==1);
  v_60 = (_out->ar_state==2);
  v_72 = (_out->ar_state==0);
  v_86 = (_out->ar_state==0);
  if (ns_1_1) {
    ns_1_2_1 = ns_1_2;
  } else {
    ns_1_2_0 = ns_1_2;
  };
  if (ck_27_1) {
    if (ck_27_2_1) {
      if (ns_1_St_13_Max_1) {
        ns_1_St_13_Max_2_1 = ns_1_St_13_Max_2;
      } else {
        ns_1_St_13_Max_2_0 = ns_1_St_13_Max_2;
      };
    } else {
      if (ns_1_St_13_Min_1) {
        ns_1_St_13_Min_2_1 = ns_1_St_13_Min_2;
      } else {
        ns_1_St_13_Min_2_0 = ns_1_St_13_Min_2;
      };
    };
  };
  if (s_1_1) {
    s_1_2_1 = s_1_2;
  } else {
    s_1_2_0 = s_1_2;
  };
  if (ck_26_1) {
    if (ck_26_2_1) {
      if (v_109_1) {
        v_109_2_1 = v_109_2;
      } else {
        v_109_2_0 = v_109_2;
      };
      if (s_1_St_13_Max_1) {
        s_1_St_13_Max_2_1 = s_1_St_13_Max_2;
      } else {
        s_1_St_13_Max_2_0 = s_1_St_13_Max_2;
      };
    } else {
      if (v_112_1) {
        v_112_2_1 = v_112_2;
      } else {
        v_112_2_0 = v_112_2;
      };
      if (s_1_St_13_Min_1) {
        s_1_St_13_Min_2_1 = s_1_St_13_Min_2;
      } else {
        s_1_St_13_Min_2_0 = s_1_St_13_Min_2;
      };
    };
  };
  if (self->ck_25_1) {
    w_open_1_St_14_Closed = false;
    nr_2_St_14_Closed = false;
    ns_2_St_14_Closed_1 = true;
    w_open_1 = w_open_1_St_14_Closed;
    nr_2 = nr_2_St_14_Closed;
    ns_2_1 = ns_2_St_14_Closed_1;
  } else {
    w_open_1_St_14_Open = true;
    w_open_1 = w_open_1_St_14_Open;
    nr_2_St_14_Open = false;
    nr_2 = nr_2_St_14_Open;
    ns_2_St_14_Open_1 = false;
    ns_2_1 = ns_2_St_14_Open_1;
  };
  _out->w_open = w_open_1;
  v_57 = !(_out->w_open);
  v_70 = !(_out->w_open);
  v_84 = !(_out->w_open);
  if (self->ck_23_1) {
    if (c_2) {
      r_3_St_15_Off = true;
      s_3_St_15_Off_1 = false;
    } else {
      r_3_St_15_Off = self->pnr_3;
      s_3_St_15_Off_1 = true;
    };
    r_3 = r_3_St_15_Off;
    s_3_1 = s_3_St_15_Off_1;
  } else {
    v_106 = !(c_2);
    if (v_106) {
      r_3_St_15_On = true;
    } else {
      r_3_St_15_On = self->pnr_3;
    };
    r_3 = r_3_St_15_On;
    if (v_106) {
      s_3_St_15_On_1 = true;
    } else {
      s_3_St_15_On_1 = false;
    };
    s_3_1 = s_3_St_15_On_1;
  };
  ck_24_1 = s_3_1;
  if (ck_24_1) {
    pc_on_1_St_15_Off = false;
    nr_3_St_15_Off = false;
    ns_3_St_15_Off_1 = true;
    pc_on_1 = pc_on_1_St_15_Off;
    nr_3 = nr_3_St_15_Off;
    ns_3_1 = ns_3_St_15_Off_1;
  } else {
    pc_on_1_St_15_On = true;
    pc_on_1 = pc_on_1_St_15_On;
    nr_3_St_15_On = false;
    nr_3 = nr_3_St_15_On;
    ns_3_St_15_On_1 = false;
    ns_3_1 = ns_3_St_15_On_1;
  };
  _out->pc_on = pc_on_1;
  v_48 = !(_out->pc_on);
  v_68 = !(_out->pc_on);
  v_82 = !(_out->pc_on);
  if (self->ck_21_1) {
    if (arrived_1) {
      r_4_St_16_Not_Present = true;
      s_4_St_16_Not_Present_1 = false;
    } else {
      r_4_St_16_Not_Present = self->pnr_4;
      s_4_St_16_Not_Present_1 = true;
    };
    r_4 = r_4_St_16_Not_Present;
    s_4_1 = s_4_St_16_Not_Present_1;
  } else {
    if (arrived_1) {
      r_4_St_16_Preent = true;
    } else {
      r_4_St_16_Preent = self->pnr_4;
    };
    r_4 = r_4_St_16_Preent;
    if (arrived_1) {
      s_4_St_16_Preent_1 = true;
    } else {
      s_4_St_16_Preent_1 = false;
    };
    s_4_1 = s_4_St_16_Preent_1;
  };
  ck_22_1 = s_4_1;
  if (ck_22_1) {
    presence_2_St_16_Not_Present = false;
    nr_4_St_16_Not_Present = false;
    ns_4_St_16_Not_Present_1 = true;
    presence_2 = presence_2_St_16_Not_Present;
    nr_4 = nr_4_St_16_Not_Present;
    ns_4_1 = ns_4_St_16_Not_Present_1;
  } else {
    presence_2_St_16_Preent = true;
    presence_2 = presence_2_St_16_Preent;
    nr_4_St_16_Preent = false;
    nr_4 = nr_4_St_16_Preent;
    ns_4_St_16_Preent_1 = false;
    ns_4_1 = ns_4_St_16_Preent_1;
  };
  _out->presence_t = presence_2;
  v = !(_out->presence_t);
  v_62 = !(_out->presence_t);
  v_76 = !(_out->presence_t);
  if (self->ck_19_1) {
    if (arrived) {
      r_5_St_17_Not_Present = true;
      s_5_St_17_Not_Present_1 = false;
    } else {
      r_5_St_17_Not_Present = self->pnr_5;
      s_5_St_17_Not_Present_1 = true;
    };
    r_5 = r_5_St_17_Not_Present;
    s_5_1 = s_5_St_17_Not_Present_1;
  } else {
    if (arrived) {
      r_5_St_17_Preent = true;
    } else {
      r_5_St_17_Preent = self->pnr_5;
    };
    r_5 = r_5_St_17_Preent;
    if (arrived) {
      s_5_St_17_Preent_1 = true;
    } else {
      s_5_St_17_Preent_1 = false;
    };
    s_5_1 = s_5_St_17_Preent_1;
  };
  ck_20_1 = s_5_1;
  if (ck_20_1) {
    presence_1_St_17_Not_Present = false;
    nr_5_St_17_Not_Present = false;
    ns_5_St_17_Not_Present_1 = true;
    presence_1 = presence_1_St_17_Not_Present;
    nr_5 = nr_5_St_17_Not_Present;
    ns_5_1 = ns_5_St_17_Not_Present_1;
  } else {
    presence_1_St_17_Preent = true;
    presence_1 = presence_1_St_17_Preent;
    nr_5_St_17_Preent = false;
    nr_5 = nr_5_St_17_Preent;
    ns_5_St_17_Preent_1 = false;
    ns_5_1 = ns_5_St_17_Preent_1;
  };
  _out->presence = presence_1;
  v_61 = !(_out->presence);
  v_63 = (v_61&&v_62);
  v_75 = !(_out->presence);
  v_77 = (v_75&&v_76);
  v_89 = (_out->presence||_out->presence_t);
  v_93 = (_out->presence||_out->presence_t);
  if (self->ck_17_1) {
    v_105 = !(c_1);
    if (v_105) {
      r_6_St_18_Locked = true;
      s_6_St_18_Locked_1 = false;
    } else {
      r_6_St_18_Locked = self->pnr_6;
      s_6_St_18_Locked_1 = true;
    };
    r_6 = r_6_St_18_Locked;
    s_6_1 = s_6_St_18_Locked_1;
  } else {
    if (c_1) {
      r_6_St_18_Open = true;
    } else {
      r_6_St_18_Open = self->pnr_6;
    };
    r_6 = r_6_St_18_Open;
    if (c_1) {
      s_6_St_18_Open_1 = true;
    } else {
      s_6_St_18_Open_1 = false;
    };
    s_6_1 = s_6_St_18_Open_1;
  };
  ck_18_1 = s_6_1;
  if (ck_18_1) {
    arm_open_1_St_18_Locked = false;
    nr_6_St_18_Locked = false;
    ns_6_St_18_Locked_1 = true;
    arm_open_1 = arm_open_1_St_18_Locked;
    nr_6 = nr_6_St_18_Locked;
    ns_6_1 = ns_6_St_18_Locked_1;
  } else {
    arm_open_1_St_18_Open = true;
    arm_open_1 = arm_open_1_St_18_Open;
    nr_6_St_18_Open = false;
    nr_6 = nr_6_St_18_Open;
    ns_6_St_18_Open_1 = false;
    ns_6_1 = ns_6_St_18_Open_1;
  };
  _out->arm_open = arm_open_1;
  if (self->ck_15_1) {
    if (c) {
      r_7_St_19_Off = true;
      s_7_St_19_Off_1 = false;
    } else {
      r_7_St_19_Off = self->pnr_7;
      s_7_St_19_Off_1 = true;
    };
    r_7 = r_7_St_19_Off;
    s_7_1 = s_7_St_19_Off_1;
  } else {
    v_104 = !(c);
    if (v_104) {
      r_7_St_19_On = true;
    } else {
      r_7_St_19_On = self->pnr_7;
    };
    r_7 = r_7_St_19_On;
    if (v_104) {
      s_7_St_19_On_1 = true;
    } else {
      s_7_St_19_On_1 = false;
    };
    s_7_1 = s_7_St_19_On_1;
  };
  ck_16_1 = s_7_1;
  if (ck_16_1) {
    r_on_St_19_Off = false;
    nr_7_St_19_Off = false;
    ns_7_St_19_Off_1 = true;
    r_on = r_on_St_19_Off;
    nr_7 = nr_7_St_19_Off;
    ns_7_1 = ns_7_St_19_Off_1;
  } else {
    r_on_St_19_On = true;
    r_on = r_on_St_19_On;
    nr_7_St_19_On = false;
    nr_7 = nr_7_St_19_On;
    ns_7_St_19_On_1 = false;
    ns_7_1 = ns_7_St_19_On_1;
  };
  _out->r_on1 = r_on;
  v_47 = !(_out->r_on1);
  v_49 = (v_47&&v_48);
  v_67 = !(_out->r_on1);
  v_69 = (v_67&&v_68);
  v_71 = (v_69&&v_70);
  v_73 = (v_71&&v_72);
  v_81 = !(_out->r_on1);
  v_83 = (v_81&&v_82);
  v_85 = (v_83&&v_84);
  v_87 = (v_85&&v_86);
  if (self->ck_13_1) {
    v_103 = !(c_porta_1);
    if (v_103) {
      r_8_St_20_Closed = true;
      s_8_St_20_Closed_1 = false;
    } else {
      r_8_St_20_Closed = self->pnr_8;
      s_8_St_20_Closed_1 = true;
    };
    r_8 = r_8_St_20_Closed;
    s_8_1 = s_8_St_20_Closed_1;
  } else {
    if (c_porta_1) {
      r_8_St_20_Open = true;
    } else {
      r_8_St_20_Open = self->pnr_8;
    };
    r_8 = r_8_St_20_Open;
    if (c_porta_1) {
      s_8_St_20_Open_1 = true;
    } else {
      s_8_St_20_Open_1 = false;
    };
    s_8_1 = s_8_St_20_Open_1;
  };
  ck_14_1 = s_8_1;
  if (ck_14_1) {
    porta_open_St_20_Closed = false;
    nr_8_St_20_Closed = false;
    ns_8_St_20_Closed_1 = true;
    porta_open = porta_open_St_20_Closed;
    nr_8 = nr_8_St_20_Closed;
    ns_8_1 = ns_8_St_20_Closed_1;
  } else {
    porta_open_St_20_Open = true;
    porta_open = porta_open_St_20_Open;
    nr_8_St_20_Open = false;
    nr_8 = nr_8_St_20_Open;
    ns_8_St_20_Open_1 = false;
    ns_8_1 = ns_8_St_20_Open_1;
  };
  _out->p_open = porta_open;
  v_50 = (_out->p_open&&v_49);
  v_51 = (v_50&&_out->arm_open);
  v_53 = (v_51&&v_52);
  rule6 = (v||v_53);
  v_74 = (_out->p_open&&v_73);
  v_80 = !(_out->p_open);
  v_88 = (v_80&&v_87);
  v_97 = (v_96&&_out->p_open);
  if (self->ck_1) {
    if (shift) {
      r_9_St_21_Dia = true;
      s_9_St_21_Dia_1 = false;
    } else {
      r_9_St_21_Dia = self->pnr_9;
      s_9_St_21_Dia_1 = true;
    };
    r_9 = r_9_St_21_Dia;
    s_9_1 = s_9_St_21_Dia_1;
  } else {
    if (shift) {
      r_9_St_21_Noite = true;
    } else {
      r_9_St_21_Noite = self->pnr_9;
    };
    r_9 = r_9_St_21_Noite;
    if (shift) {
      s_9_St_21_Noite_1 = true;
    } else {
      s_9_St_21_Noite_1 = false;
    };
    s_9_1 = s_9_St_21_Noite_1;
  };
  ck_12_1 = s_9_1;
  if (ck_12_1) {
    turno_St_21_Dia = false;
    nr_9_St_21_Dia = false;
    ns_9_St_21_Dia_1 = true;
    turno = turno_St_21_Dia;
    nr_9 = nr_9_St_21_Dia;
    ns_9_1 = ns_9_St_21_Dia_1;
  } else {
    turno_St_21_Noite = true;
    turno = turno_St_21_Noite;
    nr_9_St_21_Noite = false;
    nr_9 = nr_9_St_21_Noite;
    ns_9_St_21_Noite_1 = false;
    ns_9_1 = ns_9_St_21_Noite_1;
  };
  _out->night = turno;
  v_54 = !(_out->night);
  v_55 = (_out->presence&&v_54);
  v_56 = (v_55&&_out->pc_on);
  v_58 = (v_56&&v_57);
  v_59 = !(v_58);
  rule5 = (v_59||v_60);
  v_64 = !(_out->night);
  v_65 = (v_63&&v_64);
  v_66 = !(v_65);
  rule4 = (v_66||v_74);
  v_78 = (v_77&&_out->night);
  v_79 = !(v_78);
  rule3 = (v_79||v_88);
  v_90 = !(_out->night);
  v_91 = (v_89&&v_90);
  v_92 = !(v_91);
  rule2 = (v_92||_out->p_open);
  v_94 = (v_93&&_out->night);
  v_95 = !(v_94);
  rule1 = (v_95||v_97);
  v_98 = (rule1&&rule2);
  v_99 = (v_98&&rule3);
  v_100 = (v_99&&rule4);
  v_101 = (v_100&&rule5);
  v_102 = (v_101&&rule6);
  self->pnr = nr;
  self->v_229 = ns_1_3;
  self->v_230 = ns_2_2;
  self->pnr_1 = nr_1;
  self->v_245 = ns_1_1;
  self->v_246 = ns_1_2;
  self->pnr_2 = nr_2;
  self->ck_25_1 = ns_2_1;
  self->pnr_3 = nr_3;
  self->ck_23_1 = ns_3_1;
  self->pnr_4 = nr_4;
  self->ck_21_1 = ns_4_1;
  self->pnr_5 = nr_5;
  self->ck_19_1 = ns_5_1;
  self->pnr_6 = nr_6;
  self->ck_17_1 = ns_6_1;
  self->pnr_7 = nr_7;
  self->ck_15_1 = ns_7_1;
  self->pnr_8 = nr_8;
  self->ck_13_1 = ns_8_1;
  self->pnr_9 = nr_9;
  self->ck_1 = ns_9_1;;
}

